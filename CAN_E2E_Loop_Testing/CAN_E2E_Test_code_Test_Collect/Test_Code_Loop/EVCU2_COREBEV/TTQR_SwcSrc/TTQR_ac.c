/*
 * File: TTQR_ac.c
 *
 * Code generated for Simulink model 'TTQR_ac'.
 *
 * Model version                  : 9.58
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:55:32 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TTQR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) HaTTQR_b_EnblTiSnsd4Strt[29] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) HeTTQR_M_SumMinTrqDsrd = -99999.0F;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) HeTTQR_b_EngP1Act_TiSlct = 0;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) HeTTQR_b_SumMinTrqDsrdCAN = 1;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) HeTTQR_t_dT = 0.01F;/* Referenced by:
                                                                   * '<S89>/Calib'
                                                                   * '<S186>/Calib'
                                                                   * '<S231>/Calib'
                                                                   * '<S134>/Calib'
                                                                   * '<S137>/Calib'
                                                                   * '<S166>/Calib'
                                                                   * '<S169>/Calib'
                                                                   * '<S181>/Calib'
                                                                   * '<S202>/Calib'
                                                                   * '<S208>/Calib'
                                                                   * '<S219>/Calib'
                                                                   * '<S224>/Calib'
                                                                   */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KaTTQR_b_AllwSuperCreep[10] =
{
    0, 1, 0, 0, 0, 1, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S162>/Calib'
                                        * '<S214>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KaTTQR_b_AllwUndrsht[10] =
{
    0, 1, 1, 0, 0, 1, 0, 0, 0, 0
} ;                                    /* Referenced by:
                                        * '<S132>/Calib'
                                        * '<S163>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_M_RgnBrkAxleTrqReq4SEMLm =
    0.0F;                              /* Referenced by:
                                        * '<S43>/Calib'
                                        * '<S73>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_M_TCMTrqCntrlMdFstDB = 3.0F;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_M_TCMTrqCntrlMdSlwDB = 3.0F;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_M_TransTrqReq_Dsbl =
    99999.0F;                          /* Referenced by:
                                        * '<S23>/Calib'
                                        * '<S56>/Calib'
                                        * '<S44>/Calib'
                                        * '<S74>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_M_TransTrq_IncStep = 5.0F;/* Referenced by:
                                                                      * '<S45>/Calib'
                                                                      * '<S75>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_Pct_LV1_PedalRampExit =
    5.0F;                              /* Referenced by:
                                        * '<S46>/Calib'
                                        * '<S76>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_BlndSuperCreep = 1;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_C2VirtualElementEnbl = 1;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_CoeffBsdClsLoopSlct = 1;/* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_EngP1SumTrqActSubITerm =
    1;                                 /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_EngTrq_Enbl_Rq_TCM = 1;/* Referenced by: '<S241>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_HCPFstTrqReqEnbl = 1;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_HCPSlwTrqReqEnbl = 1;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_MtrASubITerm = 1;/* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_SumMaxTrqDerateSpdSel = 1;/* Referenced by: '<S90>/Calib' */

#endif

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_SumTrqActFAInit = 1;/* Referenced by: '<S255>/Calib' */
static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_SumTrqStFAInit = 1;/* Referenced by: '<S256>/Calib' */

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(boolean, TTQR_VAR_INIT) KeTTQR_b_TransTrqReq_LmtEnbl = 0;/* Referenced by:
                                                                      * '<S38>/Calib'
                                                                      * '<S68>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(sint16, TTQR_VAR_INIT) KeTTQR_dM_GradNegMtrA_TrqReq = -350;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(uint16, TTQR_VAR_INIT) KeTTQR_dM_GradPosMtrA_TrqReq = 350U;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

static volatile CONST(TeTRNR_e_TCMGearStat, TTQR_VAR_INIT) KeTTQR_e_GrMax_Rq =
    CeTRNR_e_Neutral;                  /* Referenced by: '<S242>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

static volatile CONST(TeTRNR_e_TCMGearStat, TTQR_VAR_INIT) KeTTQR_e_GrMin_Rq =
    CeTRNR_e_Neutral;                  /* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_k_SEMBlndMult1Dflt =
    0.9961F;                           /* Referenced by:
                                        * '<S117>/Calib'
                                        * '<S145>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_k_SEMBlndMult1LimMax =
    0.9961F;                           /* Referenced by:
                                        * '<S118>/Calib'
                                        * '<S146>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_k_SEMBlndMult1LimMin = 0.0F;/* Referenced by:
                                                                      * '<S119>/Calib'
                                                                      * '<S147>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_k_SEMBlndMult2Dflt = 0.0F;/* Referenced by:
                                                                      * '<S120>/Calib'
                                                                      * '<S148>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_k_SEMBlndMult2LimMax =
    0.9961F;                           /* Referenced by:
                                        * '<S121>/Calib'
                                        * '<S149>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_k_SEMBlndMult2LimMin = 0.0F;/* Referenced by:
                                                                      * '<S122>/Calib'
                                                                      * '<S150>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_r_G2_SumTrqCalcFromTa =
    2.54F;                             /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_r_M2_EngCLFact = 0.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_BlndInSprCreep = 0.5F;/* Referenced by:
                                                                      * '<S220>/Calib'
                                                                      * '<S225>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_BlndOutSprCreep = 0.3F;/* Referenced by:
                                                                      * '<S221>/Calib'
                                                                      * '<S226>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_SnsdTiFltRmp = 0.99F;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_SumMaxTrqRmpRt_Fst =
    0.01F;                             /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_SumMaxTrqRmpRt_Slw = 0.5F;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_SumTrqStaticFADtctTmDly =
    0.1F;                              /* Referenced by:
                                        * '<S203>/Calib'
                                        * '<S209>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KeTTQR_t_TiRmp = 0.99F;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_M_SumTrqTbl_SpdFtn[29] =
{
    1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F,
    1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F,
    1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F,
    1500.0F, 1500.0F, 1500.0F, 1500.0F, 1500.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_M_TransTrqReq_LmtTbl[5] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S39>/Vector'
                                        * '<S69>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_k_SEMBlndFxTrqReqDec[30] =
{
    0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F,
    0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F,
    0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F, 0.000586F,
    0.000586F, 0.000586F, 0.000586F, 0.000586F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S123>/Vector'
                                        * '<S151>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_k_SEMBlndFxTrqReqInc[25] =
{
    0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F,
    0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F,
    0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F, 0.00023F,
    0.00023F, 0.00023F, 0.00023F, 0.00023F
} ;                                    /* Referenced by:
                                        * '<S124>/Vector'
                                        * '<S152>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_k_SEMBlndOutFxTiBsd[4] =
{
    0.0F, 0.0F, 0.04F, 0.1F
} ;                                    /* Referenced by:
                                        * '<S125>/Vector'
                                        * '<S153>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_k_SEMBlndOutFxTqDeltaBsd[81]
    =
{
    0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.0F, 0.0F, 0.1F, 0.0F, 0.0F, 1.0F,
    1.0F, 1.0F, 0.0F, 0.0F, 0.1F, 0.1F, 0.1F, 0.0F, 1.0F, 1.0F, 1.0F, 0.0F, 0.1F,
    0.1F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 0.125F, 0.2F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.2F, 0.125F, 0.125F,
    0.2F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.2F, 0.125F, 0.125F, 0.2F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 0.2F, 0.125F
} ;                                    /* Referenced by:
                                        * '<S126>/Vector'
                                        * '<S154>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KtTTQR_k_SumTrqStaticStChFilt[5] =
{
    0.2F, 0.15F, 0.1F, 0.05F, 0.0F
} ;                                    /* Referenced by: '<S194>/Vector' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_M_SumTrqTbl_SpdFtn[29] =
{
    0.0F, 200.0F, 600.0F, 800.0F, 1200.0F, 1300.0F, 1500.0F, 1700.0F, 2000.0F,
    2200.0F, 2500.0F, 2900.0F, 3200.0F, 3400.0F, 3700.0F, 3800.0F, 4000.0F,
    4400.0F, 4900.0F, 5000.0F, 5500.0F, 5800.0F, 6000.0F, 6100.0F, 6500.0F,
    7000.0F, 7200.0F, 7500.0F, 8000.0F
} ;                                    /* Referenced by: '<S93>/Vector' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_M_TransTrqReq_LmtTbl[5] =
{
    -135.0F, 0.0F, 135.0F, 944.0F, 1483.0F
} ;                                    /* Referenced by:
                                        * '<S39>/Vector'
                                        * '<S69>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_k_SEMBlndFxTrqReqDec[5] =
{
    0.6F, 0.7F, 1.0F, 1.2F, 1.4F
} ;                                    /* Referenced by:
                                        * '<S123>/Vector'
                                        * '<S151>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_k_SEMBlndFxTrqReqInc[5] =
{
    0.6F, 0.7F, 1.0F, 1.2F, 1.4F
} ;                                    /* Referenced by:
                                        * '<S124>/Vector'
                                        * '<S152>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_k_SEMBlndOutFxTiBsd[4] =
{
    0.025F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S125>/Vector'
                                        * '<S153>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_k_SEMBlndOutFxTqDeltaBsd[9]
    =
{
    -30.0F, -10.0F, -4.0F, -1.0F, 0.0F, 1.0F, 4.0F, 10.0F, 30.0F
} ;                                    /* Referenced by:
                                        * '<S126>/Vector'
                                        * '<S154>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KxTTQR_k_SumTrqStaticStChFilt[5] =
{
    0.0F, 0.05F, 0.11F, 0.15F, 0.2F
} ;                                    /* Referenced by: '<S194>/Vector' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KyTTQR_k_SEMBlndFxTrqReqDec[6] =
{
    -408.0F, -354.0F, -250.0F, -103.0F, -50.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S123>/Vector'
                                        * '<S151>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KyTTQR_k_SEMBlndFxTrqReqInc[5] =
{
    50.0F, 103.0F, 250.0F, 354.0F, 408.0F
} ;                                    /* Referenced by:
                                        * '<S124>/Vector'
                                        * '<S152>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static volatile CONST(float32, TTQR_VAR_INIT) KyTTQR_k_SEMBlndOutFxTqDeltaBsd[9]
    =
{
    -30.0F, -10.0F, -4.0F, -1.0F, 0.0F, 1.0F, 4.0F, 10.0F, 30.0F
} ;                                    /* Referenced by:
                                        * '<S126>/Vector'
                                        * '<S154>/Vector'
                                        */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TTQR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VaTTQC_M_TiArb[2];/* '<S228>/Summation' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VaTTQC_M_TiArbPreFlt[2];/* '<S234>/Gain' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VeTTQC_M_BlndInpSprCrpLckK0_UnlkK1;/* '<S216>/Switch' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VeTTQC_M_BlndInpSprCrpUnlckdK0;/* '<S217>/Switch' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VeTTQC_M_BlndSubENGCLIterm;/* '<S218>/Summation' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VeTTQC_M_BlndSubNC1CLIterm;/* '<S223>/Summation' */

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

static VAR(float32, TTQR_VAR_INIT) VeTTQC_M_C2_SumTrqStatic4ActSEM;/* '<S196>/Gain' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

CONST(ConstB_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_ConstB =
{
    CeTRNR_e_Neutral,                  /* '<S253>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S254>/Constant' */
    CeTINR_e_None,                     /* '<S251>/Constant' */
    CeTINR_e_None                      /* '<S252>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

CONST(ConstP_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_ConstP =
{

#if Rte_SysCon_Variant_TTQR_FUNC

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S124>/Vector'
     *   '<S152>/Vector'
     */
    {
        4U, 4U
    },

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S123>/Vector'
     *   '<S151>/Vector'
     */
    {
        4U, 5U
    },

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S126>/Vector'
     *   '<S154>/Vector'
     */
    {
        8U, 8U
    },

#endif

#ifndef CONSTP_TTQR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

VAR(B_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

VAR(DW_TTQR_ac_T, TTQR_VAR_INIT) TTQR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TTQR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_TTQR_FUNC

FUNC(void, TTQR_CODE) TTQR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_Logical5_p;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_UnitDelay_ky;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_Comparison1_l;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_Logical7_k;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_LogicalOperator1_l;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_AND_hc;

#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_UnitDelay_kf;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch3_o;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_VeTTQC_M_TransTrqReq_FstSte;

#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch2_km;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_VeTTQC_M_TransTrqReqFst_VSp;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq rtb_VeTTQC_e_TCMTrqCntrlMdFst;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq rtb_VeTTQC_e_TCMTrqCntrlMdSlw;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch3_h_idx_0;

#endif

#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch3_h_idx_1;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq rtb_UnitDelay_a0_tmp;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeOHSR_e_VLE_DriveStat tmp;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_FcnC);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeBTQR_M_RegenBrkAxleTrqReq'
     */
    (void)Rte_Read_VeBTQR_M_RegenBrkAxleTrqReq_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ct);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeDTRR_e_SumFWIDSlw'
     */
    (void)Rte_Read_VeDTRR_e_SumFWIDSlw_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_iq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFrontOpt_Raw'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFrontOpt_Raw_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_M_TransTrqReqFst_Arb'
     */
    (void)Rte_Read_VeTTIR_M_TransTrqReqFst_Arb_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_b_TransTrqReqFst_RampActv'
     */
    (void)Rte_Read_VeTTIR_b_TransTrqReqFst_RampActv_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_m0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_b_TransTrqReqFst_Pass'
     */
    (void)Rte_Read_VeTTIR_b_TransTrqReqFst_Pass_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ol);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_e_TCMTrqCtrlMdFstDTRRSync'
     */
    (void)Rte_Read_VeTTIR_e_TCMTrqCtrlMdFstDTRRSync_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ow);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTINR_e_TCMTrqCntrlMdFst_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_p1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Max'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFront_Max_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_TLFMin_ECM'
     */
    (void)Rte_Read_VeVTVR_M_TLFMin_ECM_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Opt'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFront_Opt_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadFrontOptArb_xShaping'
     */
    (void)Rte_Read_VeVTVR_M_LoadFrontOptArb_xShaping_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ik);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadFrontOptExp'
     */
    (void)Rte_Read_VeVTVR_M_LoadFrontOptExp_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadFrontOpt_xShaping'
     */
    (void)Rte_Read_VeVTVR_M_LoadFrontOpt_xShaping_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_cx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadFrontOptShaped'
     */
    (void)Rte_Read_VeVTVR_M_LoadFrontOptShaped_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeCTCR_M_SumTrqMinPwrTrn'
     */
    (void)Rte_Read_VeCTCR_M_SumTrqMinPwrTrn_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_pb);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeVTVR_M_SumTrqMin_Cruise'
     */
    (void)Rte_Read_VeVTVR_M_SumTrqMin_Cruise_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdSlw'
     */
    (void)Rte_Read_VeTINR_e_TCMTrqCntrlMdSlw_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_oj);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_M_TransTrqReqSlw_Arb'
     */
    (void)Rte_Read_VeTTIR_M_TransTrqReqSlw_Arb_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_id);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_b_TransTrqReqSlw_Pass'
     */
    (void)Rte_Read_VeTTIR_b_TransTrqReqSlw_Pass_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_b_TransTrqReqSlw_RampActv'
     */
    (void)Rte_Read_VeTTIR_b_TransTrqReqSlw_RampActv_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_me);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_b_TCM_EngFSO_Allw'
     */
    (void)Rte_Read_VeTTIR_b_TCM_EngFSO_Allw_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_lx);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
     */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_dq);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeSRAR_b_DerateSumTrqMax'
     */
    (void)Rte_Read_VeSRAR_b_DerateSumTrqMax_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_cz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_M_SumMaxTorqDsrdRaw'
     */
    (void)Rte_Read_VeTTIR_M_SumMaxTorqDsrdRaw_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_n2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_b_SumMaxTrqDsrdFA'
     */
    (void)Rte_Read_VeTTIR_b_SumMaxTrqDsrdFA_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM_F_lz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */
#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeSRAR_b_DrvAllwd'
     */
    (void)Rte_Read_VeSRAR_b_DrvAllwd_Value
        (&TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn);

#elif !Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip && Rte_SysCon_Variant_TTQR_FUNC

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' */
    TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33' incorporates:
     *  Inport: '<Root>/VeTTIR_M_SumMinTorqDsrdRaw'
     */
    (void)Rte_Read_VeTTIR_M_SumMinTorqDsrdRaw_Value
        (&TTQR_ac_B.TmpSignalConversionAtTmpVM__iku);

    /* Outputs for Function Call SubSystem: '<Root>/TTQR_MedTEB2' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqFast'
     */
    /* Logic: '<S24>/Logical5' incorporates:
     *  RelationalOperator: '<S24>/Comparison3'
     */
    rtb_Logical5_p = (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_c >
                      TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d);

    /* UnitDelay: '<S34>/Unit Delay' incorporates:
     *  Abs: '<S24>/Abs'
     *  Constant: '<S32>/Calib'
     *  RelationalOperator: '<S24>/Comparison5'
     *  Sum: '<S24>/Sum1'
     */
    rtb_UnitDelay_ky = (fabsf(TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_c -
                         TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d) >=
                        KeTTQR_M_TCMTrqCntrlMdFstDB);

    /* RelationalOperator: '<S24>/Comparison2' incorporates:
     *  RelationalOperator: '<S24>/Comparison1'
     *  RelationalOperator: '<S27>/Comparison4'
     *  RelationalOperator: '<S29>/Comparison1'
     *  RelationalOperator: '<S29>/Comparison3'
     *  RelationalOperator: '<S29>/Comparison5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
     *  Switch: '<S26>/Switch3'
     *  Switch: '<S29>/Switch2'
     *  Switch: '<S29>/Switch3'
     */
    rtb_UnitDelay_a0_tmp = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ow;

    /* UnitDelay: '<S34>/Unit Delay' incorporates:
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Constant'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S24>/Logical7'
     *  Logic: '<S24>/Logical8'
     *  Logic: '<S24>/Logical9'
     *  RelationalOperator: '<S24>/Comparison1'
     *  RelationalOperator: '<S24>/Comparison2'
     */
    rtb_UnitDelay_ky = (((rtb_Logical5_p && rtb_UnitDelay_ky) && (((uint32)
                           rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqInc)) ||
                        ((rtb_UnitDelay_ky && (!rtb_Logical5_p)) && (((uint32)
                           rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqDec)));

    /* Logic: '<S24>/Logical' incorporates:
     *  Logic: '<S24>/Logical4'
     *  Logic: '<S24>/Logical5'
     */
    rtb_Logical7_k = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_m0;

    /* Outputs for Atomic SubSystem: '<S24>/SignalLatchOnWithReset' */
    /* Logic: '<S33>/OR1' incorporates:
     *  Logic: '<S24>/Logical'
     *  Logic: '<S24>/Logical2'
     *  Logic: '<S24>/Logical3'
     *  Logic: '<S24>/Logical4'
     *  Logic: '<S24>/Logical6'
     *  Logic: '<S33>/NOT'
     *  Logic: '<S33>/OR'
     *  UnitDelay: '<S24>/UnitDelay'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    rtb_UnitDelay_ky = ((rtb_UnitDelay_ky &&
                         (TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ol)) ||
                        ((((!TTQR_ac_DW.UnitDelay_DSTATE_p0) || rtb_Logical7_k) &&
                          (rtb_Logical7_k || rtb_UnitDelay_ky)) &&
                         (TTQR_ac_DW.UnitDelay_DSTATE_m)));

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_m = rtb_UnitDelay_ky;

    /* End of Outputs for SubSystem: '<S24>/SignalLatchOnWithReset' */

    /* RelationalOperator: '<S5>/Comparison1' incorporates:
     *  Constant: '<S20>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
     */
    rtb_Comparison1_l = (((uint32)TTQR_ac_B.TmpSignalConversionAtTmpVM_F_iq) ==
                         CeDTRR_e_Trans);

    /* Logic: '<S5>/Logical1' */
    rtb_Logical5_p = (rtb_UnitDelay_ky || rtb_Comparison1_l);

    /* Logic: '<S29>/Logical7' incorporates:
     *  Constant: '<S50>/Constant'
     *  Constant: '<S51>/Constant'
     *  RelationalOperator: '<S29>/Comparison3'
     *  RelationalOperator: '<S29>/Comparison5'
     */
    rtb_Logical7_k = ((((uint32)rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqInc) ||
                      (((uint32)rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqDec));

    /* Logic: '<S52>/Logical Operator1' incorporates:
     *  Logic: '<S29>/Logical8'
     *  Logic: '<S29>/Logical9'
     *  Logic: '<S52>/Logical Operator'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_LogicalOperator1_l = (((rtb_Logical7_k && rtb_Logical5_p) ||
        (TTQR_ac_DW.UnitDelay_DSTATE_kl)) && rtb_Logical5_p);

    /* Switch: '<S29>/Switch3' incorporates:
     *  Switch: '<S29>/Switch2'
     */
    if (rtb_LogicalOperator1_l)
    {
        /* RelationalOperator: '<S29>/Comparison1' incorporates:
         *  Switch: '<S29>/Switch1'
         *  UnitDelay: '<S29>/UnitDelay1'
         */
        rtb_VeTTQC_e_TCMTrqCntrlMdSlw = TTQR_ac_DW.UnitDelay1_DSTATE_b;

        /* Switch: '<S29>/Switch1' incorporates:
         *  Logic: '<S29>/Logical1'
         *  RelationalOperator: '<S29>/Comparison1'
         */
        if (rtb_Logical7_k && (rtb_VeTTQC_e_TCMTrqCntrlMdSlw !=
                               rtb_UnitDelay_a0_tmp))
        {
            /* Switch: '<S29>/Switch3' incorporates:
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
             */
            rtb_VeTTQC_e_TCMTrqCntrlMdFst =
                TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ow;
        }
        else
        {
            /* Switch: '<S29>/Switch3' */
            rtb_VeTTQC_e_TCMTrqCntrlMdFst = rtb_VeTTQC_e_TCMTrqCntrlMdSlw;
        }
    }
    else if (rtb_Logical5_p)
    {
        /* Switch: '<S29>/Switch2' incorporates:
         *  Switch: '<S29>/Switch3'
         */
        rtb_VeTTQC_e_TCMTrqCntrlMdFst = rtb_UnitDelay_a0_tmp;
    }
    else
    {
        /* Switch: '<S29>/Switch3' incorporates:
         *  Constant: '<S49>/Constant'
         *  Switch: '<S29>/Switch2'
         */
        rtb_VeTTQC_e_TCMTrqCntrlMdFst = CeTINR_e_None;
    }

    /* RelationalOperator: '<S5>/Comparison4' incorporates:
     *  RelationalOperator: '<S5>/Comparison2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
     */
    rtb_VeTTQC_e_TCMTrqCntrlMdSlw = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_p1;

    /* Logic: '<S5>/Logical2' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  RelationalOperator: '<S5>/Comparison2'
     *  RelationalOperator: '<S5>/Comparison4'
     */
    rtb_Logical7_k = ((((uint32)rtb_VeTTQC_e_TCMTrqCntrlMdSlw) ==
                       CeTINR_e_TrqInc) || (CeTINR_e_TrqDec == ((uint32)
                        rtb_VeTTQC_e_TCMTrqCntrlMdSlw)));

    /* Outputs for Atomic SubSystem: '<S26>/EdgeFalling' */
    /* Logic: '<S34>/AND' incorporates:
     *  Logic: '<S34>/OR1'
     *  UnitDelay: '<S34>/Unit Delay'
     */
    rtb_AND_hc = ((!rtb_Logical7_k) && (TTQR_ac_DW.UnitDelay_DSTATE_ko));

    /* Update for UnitDelay: '<S34>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ko = rtb_Logical7_k;

    /* End of Outputs for SubSystem: '<S26>/EdgeFalling' */

    /* Logic: '<S35>/Logical Operator1' incorporates:
     *  Logic: '<S26>/Logical9'
     *  Logic: '<S35>/Logical Operator'
     *  UnitDelay: '<S35>/Unit Delay'
     */
    rtb_Logical7_k = ((rtb_AND_hc || (TTQR_ac_DW.UnitDelay_DSTATE_l3)) &&
                      rtb_UnitDelay_ky);

    /* Switch: '<S26>/Switch3' */
    if (rtb_Logical7_k)
    {
        /* Switch: '<S26>/Switch3' incorporates:
         *  UnitDelay: '<S26>/UnitDelay'
         */
        rtb_Switch3_o = TTQR_ac_DW.UnitDelay_DSTATE_b;
    }
    else
    {
        /* Sum: '<S27>/Sum' incorporates:
         *  Lookup_n-D: '<S39>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
         */
        rtb_VeTTQC_M_TransTrqReqFst_VSp =
            TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d + look1_iflf_binlcapw
            (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_a, ((const float32 *)
              &(KxTTQR_M_TransTrqReq_LmtTbl[0])), ((const float32 *)
              &(KtTTQR_M_TransTrqReq_LmtTbl[0])), 4U);

        /* Switch: '<S27>/Switch' incorporates:
         *  Constant: '<S37>/Constant'
         *  Constant: '<S38>/Calib'
         *  Logic: '<S27>/Logical'
         *  Logic: '<S27>/Logical2'
         *  RelationalOperator: '<S27>/Comparison1'
         *  RelationalOperator: '<S27>/Comparison4'
         */
        if (((rtb_VeTTQC_M_TransTrqReqFst_VSp <=
                TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_c) && (((uint32)
                rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqInc)) &&
                (KeTTQR_b_TransTrqReq_LmtEnbl))
        {
            /* Switch: '<S26>/Switch3' */
            rtb_Switch3_o = rtb_VeTTQC_M_TransTrqReqFst_VSp;
        }
        else
        {
            /* Switch: '<S26>/Switch3' */
            rtb_Switch3_o = TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_c;
        }

        /* End of Switch: '<S27>/Switch' */
    }

    /* Logic: '<S28>/Logical' incorporates:
     *  Logic: '<S28>/Logical2'
     *  UnitDelay: '<S28>/UnitDelay'
     */
    rtb_AND_hc = ((!rtb_Logical5_p) && (TTQR_ac_DW.UnitDelay_DSTATE_e1));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqSlow'
     */
    /* RelationalOperator: '<S28>/Comparison1' incorporates:
     *  RelationalOperator: '<S60>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
     */
    tmp = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ct;

    /* Switch: '<S28>/Switch2' incorporates:
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S46>/Calib'
     *  Logic: '<S28>/Logical1'
     *  RelationalOperator: '<S28>/Comparison1'
     *  RelationalOperator: '<S28>/Comparison2'
     *  RelationalOperator: '<S28>/Comparison4'
     *  Switch: '<S48>/Switch1'
     */
    if (((TTQR_ac_B.TmpSignalConversionAtTmpVM_FcnC >
            KeTTQR_Pct_LV1_PedalRampExit) ||
            (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_i >
             KeTTQR_M_RgnBrkAxleTrqReq4SEMLm)) || (((uint32)tmp) !=
            CeOHSR_e_LaunchState))
    {
        /* Switch: '<S28>/Switch2' incorporates:
         *  Constant: '<S44>/Calib'
         */
        rtb_VeTTQC_M_TransTrqReq_FstSte = KeTTQR_M_TransTrqReq_Dsbl;
    }
    else
    {
        if (rtb_AND_hc)
        {
            /* Switch: '<S48>/Switch1' incorporates:
             *  UnitDelay: '<S28>/UnitDelay1'
             */
            rtb_VeTTQC_M_TransTrqReqFst_VSp = TTQR_ac_DW.UnitDelay1_DSTATE_f;
        }
        else
        {
            /* Switch: '<S48>/Switch1' incorporates:
             *  UnitDelay: '<S48>/Unit Delay'
             */
            rtb_VeTTQC_M_TransTrqReqFst_VSp = TTQR_ac_DW.UnitDelay_DSTATE_g0;
        }

        /* Switch: '<S28>/Switch2' incorporates:
         *  Constant: '<S44>/Calib'
         *  Constant: '<S45>/Calib'
         *  MinMax: '<S28>/MinMax'
         *  Sum: '<S28>/Sum'
         */
        rtb_VeTTQC_M_TransTrqReq_FstSte = fminf(rtb_VeTTQC_M_TransTrqReqFst_VSp
            + KeTTQR_M_TransTrq_IncStep, KeTTQR_M_TransTrqReq_Dsbl);
    }

    /* End of Switch: '<S28>/Switch2' */

    /* Switch: '<S28>/Switch' incorporates:
     *  Constant: '<S47>/Calib'
     */
    if (KeTTQR_b_HCPFstTrqReqEnbl)
    {
        /* Switch: '<S28>/Switch1' */
        if (rtb_Logical5_p)
        {
            /* Switch: '<S5>/Switch1' incorporates:
             *  Switch: '<S5>/Switch2'
             */
            if (rtb_UnitDelay_ky)
            {
                /* Switch: '<S28>/Switch' incorporates:
                 *  Switch: '<S5>/Switch1'
                 */
                rtb_VeTTQC_M_TransTrqReqFst_VSp = rtb_Switch3_o;
            }
            else if (rtb_Comparison1_l)
            {
                /* Switch: '<S5>/Switch2' incorporates:
                 *  Switch: '<S28>/Switch'
                 *  Switch: '<S5>/Switch1'
                 */
                rtb_VeTTQC_M_TransTrqReqFst_VSp =
                    TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d;
            }
            else
            {
                /* Switch: '<S28>/Switch' incorporates:
                 *  Constant: '<S23>/Calib'
                 *  Switch: '<S5>/Switch1'
                 *  Switch: '<S5>/Switch2'
                 */
                rtb_VeTTQC_M_TransTrqReqFst_VSp = KeTTQR_M_TransTrqReq_Dsbl;
            }

            /* End of Switch: '<S5>/Switch1' */
        }
        else
        {
            /* Switch: '<S28>/Switch' incorporates:
             *  Switch: '<S28>/Switch1'
             */
            rtb_VeTTQC_M_TransTrqReqFst_VSp = rtb_VeTTQC_M_TransTrqReq_FstSte;
        }

        /* End of Switch: '<S28>/Switch1' */
    }
    else
    {
        /* Switch: '<S28>/Switch' incorporates:
         *  Constant: '<S44>/Calib'
         */
        rtb_VeTTQC_M_TransTrqReqFst_VSp = KeTTQR_M_TransTrqReq_Dsbl;
    }

    /* End of Switch: '<S28>/Switch' */

    /* Switch: '<S48>/Switch3' */
    if (rtb_AND_hc)
    {
        /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
         *  Switch: '<S48>/Switch3'
         *  UnitDelay: '<S28>/UnitDelay1'
         */
        TTQR_ac_DW.UnitDelay_DSTATE_g0 = TTQR_ac_DW.UnitDelay1_DSTATE_f;
    }
    else
    {
        /* Update for UnitDelay: '<S48>/Unit Delay' incorporates:
         *  Switch: '<S48>/Switch3'
         */
        TTQR_ac_DW.UnitDelay_DSTATE_g0 = rtb_VeTTQC_M_TransTrqReq_FstSte;
    }

    /* End of Switch: '<S48>/Switch3' */

    /* Update for UnitDelay: '<S24>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_p0 = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_m0;

    /* Update for UnitDelay: '<S29>/UnitDelay1' incorporates:
     *  Switch: '<S29>/Switch3'
     */
    TTQR_ac_DW.UnitDelay1_DSTATE_b = rtb_VeTTQC_e_TCMTrqCntrlMdFst;

    /* Update for UnitDelay: '<S52>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_kl = rtb_LogicalOperator1_l;

    /* Update for UnitDelay: '<S26>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch3_o;

    /* Update for UnitDelay: '<S35>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_l3 = rtb_Logical7_k;

    /* Update for UnitDelay: '<S28>/UnitDelay1' */
    TTQR_ac_DW.UnitDelay1_DSTATE_f = rtb_VeTTQC_M_TransTrqReqFst_VSp;

    /* Update for UnitDelay: '<S28>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_e1 = rtb_Logical5_p;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqSlow'
     */
    /* Logic: '<S57>/Logical5' incorporates:
     *  RelationalOperator: '<S57>/Comparison5'
     */
    rtb_UnitDelay_ky = (TTQR_ac_B.TmpSignalConversionAtTmpVM_F_id >
                        TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d);

    /* UnitDelay: '<S65>/Unit Delay' incorporates:
     *  Abs: '<S57>/Abs'
     *  Constant: '<S64>/Calib'
     *  RelationalOperator: '<S57>/Comparison6'
     *  Sum: '<S57>/Sum1'
     */
    rtb_Comparison1_l = (fabsf(TTQR_ac_B.TmpSignalConversionAtTmpVM_F_id -
                          TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d) >=
                         KeTTQR_M_TCMTrqCntrlMdSlwDB);

    /* RelationalOperator: '<S57>/Comparison2' incorporates:
     *  RelationalOperator: '<S57>/Comparison1'
     *  RelationalOperator: '<S59>/Comparison4'
     *  RelationalOperator: '<S61>/Comparison1'
     *  RelationalOperator: '<S61>/Comparison3'
     *  RelationalOperator: '<S61>/Comparison5'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
     *  Switch: '<S60>/Switch'
     *  Switch: '<S60>/Switch1'
     *  Switch: '<S61>/Switch2'
     *  Switch: '<S61>/Switch3'
     *  Switch: '<S6>/Switch1'
     */
    rtb_UnitDelay_a0_tmp = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_oj;

    /* UnitDelay: '<S65>/Unit Delay' incorporates:
     *  Constant: '<S62>/Constant'
     *  Constant: '<S63>/Constant'
     *  Logic: '<S57>/Logical10'
     *  Logic: '<S57>/Logical11'
     *  Logic: '<S57>/Logical12'
     *  Logic: '<S57>/Logical7'
     *  RelationalOperator: '<S57>/Comparison1'
     *  RelationalOperator: '<S57>/Comparison2'
     */
    rtb_Comparison1_l = (((rtb_UnitDelay_ky && rtb_Comparison1_l) && (((uint32)
                            rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqInc)) ||
                         ((rtb_Comparison1_l && (!rtb_UnitDelay_ky)) &&
                          (((uint32)rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqDec)));

    /* Logic: '<S57>/Logical' incorporates:
     *  Logic: '<S57>/Logical4'
     *  Logic: '<S57>/Logical5'
     */
    rtb_Logical7_k = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_me;

    /* Outputs for Atomic SubSystem: '<S57>/SignalLatchOnWithReset' */
    /* Logic: '<S65>/OR1' incorporates:
     *  Logic: '<S57>/Logical'
     *  Logic: '<S57>/Logical1'
     *  Logic: '<S57>/Logical2'
     *  Logic: '<S57>/Logical3'
     *  Logic: '<S57>/Logical4'
     *  Logic: '<S57>/Logical6'
     *  Logic: '<S65>/NOT'
     *  Logic: '<S65>/OR'
     *  UnitDelay: '<S57>/UnitDelay'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    rtb_UnitDelay_ky = (((rtb_Comparison1_l &&
                          (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_j)) &&
                         (!TTQR_ac_B.TmpSignalConversionAtTmpVM_F_lx)) ||
                        ((((!TTQR_ac_DW.UnitDelay_DSTATE_iv) || rtb_Logical7_k) &&
                          (rtb_Logical7_k || rtb_Comparison1_l)) &&
                         (TTQR_ac_DW.UnitDelay_DSTATE_bs)));

    /* Update for UnitDelay: '<S65>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_bs = rtb_UnitDelay_ky;

    /* End of Outputs for SubSystem: '<S57>/SignalLatchOnWithReset' */

    /* Logic: '<S61>/Logical7' incorporates:
     *  Constant: '<S80>/Constant'
     *  Constant: '<S81>/Constant'
     *  RelationalOperator: '<S61>/Comparison3'
     *  RelationalOperator: '<S61>/Comparison5'
     */
    rtb_LogicalOperator1_l = ((((uint32)rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqInc)
        || (((uint32)rtb_UnitDelay_a0_tmp) == CeTINR_e_TrqDec));

    /* Logic: '<S82>/Logical Operator1' incorporates:
     *  Logic: '<S61>/Logical8'
     *  Logic: '<S61>/Logical9'
     *  Logic: '<S82>/Logical Operator'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_Comparison1_l = (((rtb_LogicalOperator1_l && rtb_UnitDelay_ky) ||
                          (TTQR_ac_DW.UnitDelay_DSTATE_ac)) && rtb_UnitDelay_ky);

    /* Switch: '<S61>/Switch3' incorporates:
     *  Switch: '<S61>/Switch2'
     */
    if (rtb_Comparison1_l)
    {
        /* RelationalOperator: '<S61>/Comparison1' incorporates:
         *  Switch: '<S61>/Switch1'
         *  UnitDelay: '<S61>/UnitDelay1'
         */
        rtb_VeTTQC_e_TCMTrqCntrlMdSlw = TTQR_ac_DW.UnitDelay1_DSTATE_n;

        /* Switch: '<S61>/Switch1' incorporates:
         *  Logic: '<S61>/Logical1'
         *  RelationalOperator: '<S61>/Comparison1'
         */
        if (rtb_LogicalOperator1_l && (rtb_VeTTQC_e_TCMTrqCntrlMdSlw !=
                rtb_UnitDelay_a0_tmp))
        {
            /* Switch: '<S61>/Switch3' incorporates:
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
             */
            rtb_VeTTQC_e_TCMTrqCntrlMdSlw =
                TTQR_ac_B.TmpSignalConversionAtTmpVM_F_oj;
        }
    }
    else if (rtb_UnitDelay_ky)
    {
        /* Switch: '<S61>/Switch2' incorporates:
         *  Switch: '<S61>/Switch3'
         */
        rtb_VeTTQC_e_TCMTrqCntrlMdSlw = rtb_UnitDelay_a0_tmp;
    }
    else
    {
        /* Switch: '<S61>/Switch3' incorporates:
         *  Constant: '<S79>/Constant'
         *  Switch: '<S61>/Switch2'
         */
        rtb_VeTTQC_e_TCMTrqCntrlMdSlw = CeTINR_e_None;
    }

    /* Logic: '<S60>/Logical' incorporates:
     *  Logic: '<S60>/Logical2'
     *  UnitDelay: '<S60>/UnitDelay'
     */
    rtb_LogicalOperator1_l = ((!rtb_UnitDelay_ky) &&
        (TTQR_ac_DW.UnitDelay_DSTATE_fa));

    /* Switch: '<S60>/Switch2' incorporates:
     *  Constant: '<S72>/Constant'
     *  Constant: '<S73>/Calib'
     *  Constant: '<S76>/Calib'
     *  Logic: '<S60>/Logical1'
     *  RelationalOperator: '<S60>/Comparison1'
     *  RelationalOperator: '<S60>/Comparison2'
     *  RelationalOperator: '<S60>/Comparison4'
     *  Switch: '<S78>/Switch1'
     */
    if (((TTQR_ac_B.TmpSignalConversionAtTmpVM_FcnC >
            KeTTQR_Pct_LV1_PedalRampExit) ||
            (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_i >
             KeTTQR_M_RgnBrkAxleTrqReq4SEMLm)) || (((uint32)tmp) !=
            CeOHSR_e_LaunchState))
    {
        /* Switch: '<S60>/Switch2' incorporates:
         *  Constant: '<S74>/Calib'
         */
        rtb_VeTTQC_M_TransTrqReq_FstSte = KeTTQR_M_TransTrqReq_Dsbl;
    }
    else
    {
        if (rtb_LogicalOperator1_l)
        {
            /* Switch: '<S78>/Switch1' incorporates:
             *  UnitDelay: '<S60>/UnitDelay1'
             */
            rtb_Switch3_o = TTQR_ac_DW.UnitDelay1_DSTATE_dw;
        }
        else
        {
            /* Switch: '<S78>/Switch1' incorporates:
             *  UnitDelay: '<S78>/Unit Delay'
             */
            rtb_Switch3_o = TTQR_ac_DW.UnitDelay_DSTATE_a;
        }

        /* Switch: '<S60>/Switch2' incorporates:
         *  Constant: '<S74>/Calib'
         *  Constant: '<S75>/Calib'
         *  MinMax: '<S60>/MinMax'
         *  Sum: '<S60>/Sum'
         */
        rtb_VeTTQC_M_TransTrqReq_FstSte = fminf(rtb_Switch3_o +
            KeTTQR_M_TransTrq_IncStep, KeTTQR_M_TransTrqReq_Dsbl);
    }

    /* End of Switch: '<S60>/Switch2' */

    /* Switch: '<S60>/Switch' incorporates:
     *  Constant: '<S77>/Calib'
     */
    if (KeTTQR_b_HCPSlwTrqReqEnbl)
    {
        /* Switch: '<S6>/Switch1' incorporates:
         *  Switch: '<S60>/Switch1'
         */
        if (rtb_UnitDelay_ky)
        {
            /* Sum: '<S59>/Sum' incorporates:
             *  Lookup_n-D: '<S69>/Vector'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTTQR_MedTEB2Inport33'
             */
            rtb_Switch3_o = TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_d +
                look1_iflf_binlcapw(TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_a,
                                    ((const float32 *)
                &(KxTTQR_M_TransTrqReq_LmtTbl[0])), ((const float32 *)
                &(KtTTQR_M_TransTrqReq_LmtTbl[0])), 4U);

            /* Switch: '<S59>/Switch' incorporates:
             *  Constant: '<S67>/Constant'
             *  Constant: '<S68>/Calib'
             *  Logic: '<S59>/Logical'
             *  Logic: '<S59>/Logical2'
             *  RelationalOperator: '<S59>/Comparison1'
             *  RelationalOperator: '<S59>/Comparison4'
             */
            if (((rtb_Switch3_o > TTQR_ac_B.TmpSignalConversionAtTmpVM_F_id) ||
                    (((uint32)rtb_UnitDelay_a0_tmp) != CeTINR_e_TrqInc)) ||
                    (!KeTTQR_b_TransTrqReq_LmtEnbl))
            {
                /* Switch: '<S60>/Switch' incorporates:
                 *  Switch: '<S6>/Switch1'
                 */
                rtb_Switch3_o = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_id;
            }

            /* End of Switch: '<S59>/Switch' */
        }
        else
        {
            /* Switch: '<S60>/Switch' incorporates:
             *  Switch: '<S60>/Switch1'
             */
            rtb_Switch3_o = rtb_VeTTQC_M_TransTrqReq_FstSte;
        }
    }
    else
    {
        /* Switch: '<S60>/Switch' incorporates:
         *  Constant: '<S74>/Calib'
         */
        rtb_Switch3_o = KeTTQR_M_TransTrqReq_Dsbl;
    }

    /* Switch: '<S78>/Switch3' */
    if (rtb_LogicalOperator1_l)
    {
        /* Update for UnitDelay: '<S78>/Unit Delay' incorporates:
         *  Switch: '<S78>/Switch3'
         *  UnitDelay: '<S60>/UnitDelay1'
         */
        TTQR_ac_DW.UnitDelay_DSTATE_a = TTQR_ac_DW.UnitDelay1_DSTATE_dw;
    }
    else
    {
        /* Update for UnitDelay: '<S78>/Unit Delay' incorporates:
         *  Switch: '<S78>/Switch3'
         */
        TTQR_ac_DW.UnitDelay_DSTATE_a = rtb_VeTTQC_M_TransTrqReq_FstSte;
    }

    /* End of Switch: '<S78>/Switch3' */

    /* Update for UnitDelay: '<S57>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_iv = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_me;

    /* Update for UnitDelay: '<S61>/UnitDelay1' incorporates:
     *  Switch: '<S61>/Switch3'
     */
    TTQR_ac_DW.UnitDelay1_DSTATE_n = rtb_VeTTQC_e_TCMTrqCntrlMdSlw;

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ac = rtb_Comparison1_l;

    /* Update for UnitDelay: '<S60>/UnitDelay1' */
    TTQR_ac_DW.UnitDelay1_DSTATE_dw = rtb_Switch3_o;

    /* Update for UnitDelay: '<S60>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_fa = rtb_UnitDelay_ky;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_SumMaxTrqDsrd'
     */
    /* Logic: '<S7>/Logical1' */
    rtb_Comparison1_l = ((TTQR_ac_B.TmpSignalConversionAtTmpVM_F_cz) ||
                         (TTQR_ac_B.TmpSignalConversionAtTmpVM_F_lz));

    /* Logic: '<S7>/Logical5' incorporates:
     *  Logic: '<S7>/Logical6'
     *  Logic: '<S7>/Logical7'
     *  Logic: '<S7>/Logical8'
     *  Logic: '<S7>/Logical9'
     *  RelationalOperator: '<S83>/Comparison2'
     *  SignalConversion generated from: '<S7>/VariantSource'
     *  Switch: '<S7>/Switch3'
     *  Switch: '<S7>/Switch4'
     *  Switch: '<S83>/Switch2'
     *  Switch: '<S83>/Switch3'
     *  UnitDelay: '<S7>/UnitDelay'
     *  UnitDelay: '<S83>/Unit Delay'
     *  UnitDelay: '<S83>/Unit Delay1'
     *  UnitDelay: '<S83>/Unit Delay3'
     */
#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip

    /* Outputs for Atomic SubSystem: '<S7>/SignalLatchOnWithReset5' */
    /* Outputs for Atomic SubSystem: '<S7>/SignalLatchOnWithReset4' */
    /* Outputs for Atomic SubSystem: '<S7>/SignalLatchOnWithReset3' */
    /* Outputs for Atomic SubSystem: '<S7>/EdgeFalling4' */
    /* Outputs for Atomic SubSystem: '<S7>/EdgeBi' */
    /* Outputs for Atomic SubSystem: '<S7>/EdgeFalling3' */
    /* Logic: '<S85>/AND' incorporates:
     *  Logic: '<S85>/OR1'
     *  UnitDelay: '<S85>/Unit Delay'
     */
    rtb_AND_hc = ((!rtb_Comparison1_l) && (TTQR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S85>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_l = rtb_Comparison1_l;

    /* RelationalOperator: '<S84>/Not Equal' incorporates:
     *  UnitDelay: '<S84>/Unit Delay'
     */
    rtb_LogicalOperator1_l = (TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn !=
        TTQR_ac_DW.UnitDelay_DSTATE_d4);

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_d4 = TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn;

    /* UnitDelay: '<S97>/Unit Delay' */
    rtb_UnitDelay_kf = (rtb_AND_hc || rtb_LogicalOperator1_l);
    if (TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn)
    {
        /* Switch: '<S7>/Switch3' incorporates:
         *  Constant: '<S92>/Calib'
         */
        rtb_Switch3_h_idx_0 = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_n2;
        rtb_Switch3_h_idx_1 = KeTTQR_t_SumMaxTrqRmpRt_Slw;
    }
    else
    {
        /* Switch: '<S7>/Switch3' incorporates:
         *  Constant: '<S7>/ConstantValue'
         *  Constant: '<S91>/Calib'
         */
        rtb_Switch3_h_idx_0 = 0.0F;
        rtb_Switch3_h_idx_1 = KeTTQR_t_SumMaxTrqRmpRt_Fst;
    }

    if (rtb_UnitDelay_kf)
    {
        /* Switch: '<S83>/Switch3' incorporates:
         *  Constant: '<S83>/Constant Value4'
         */
        rtb_Switch3_h_idx_1 = 0.0F;

        /* Switch: '<S83>/Switch2' */
        rtb_Switch2_km = TTQR_ac_DW.UnitDelay_DSTATE_ee;
    }
    else
    {
        /* MinMax: '<S83>/Maximum' incorporates:
         *  Constant: '<S89>/Calib'
         */
        rtb_Switch3_h_idx_1 = fmaxf(HeTTQR_t_dT, rtb_Switch3_h_idx_1);

        /* Outputs for Atomic SubSystem: '<S83>/Protected Division1' */
        /* Switch: '<S99>/Switch1' incorporates:
         *  Constant: '<S89>/Calib'
         *  Constant: '<S99>/Constant Value'
         *  Constant: '<S99>/Constant Value1'
         *  Constant: '<S99>/Constant Value2'
         *  Constant: '<S99>/Constant Value3'
         *  Logic: '<S99>/AND'
         *  RelationalOperator: '<S99>/Greater Than or Equal '
         *  RelationalOperator: '<S99>/Greater Than or Equal 1'
         *  RelationalOperator: '<S99>/Not Equal'
         *  RelationalOperator: '<S99>/Not Equal1'
         *  Switch: '<S99>/Switch2'
         *  Switch: '<S99>/Switch3'
         */
        if ((HeTTQR_t_dT != 0.0F) && (rtb_Switch3_h_idx_1 != 0.0F))
        {
            /* Switch: '<S99>/Switch1' incorporates:
             *  Product: '<S99>/Division'
             */
            rtb_Switch3_h_idx_1 = HeTTQR_t_dT / rtb_Switch3_h_idx_1;
        }
        else if (HeTTQR_t_dT > 0.0F)
        {
            /* Switch: '<S99>/Switch2' incorporates:
             *  Constant: '<S99>/MAXFLOAT'
             *  Switch: '<S99>/Switch1'
             */
            rtb_Switch3_h_idx_1 = 3.402823466E+38F;
        }
        else if (HeTTQR_t_dT < 0.0F)
        {
            /* Switch: '<S99>/Switch3' incorporates:
             *  Constant: '<S99>/MINFLOAT'
             *  Switch: '<S99>/Switch1'
             *  Switch: '<S99>/Switch2'
             */
            rtb_Switch3_h_idx_1 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S99>/Switch1' incorporates:
             *  Constant: '<S99>/Constant Value4'
             *  Switch: '<S99>/Switch2'
             *  Switch: '<S99>/Switch3'
             */
            rtb_Switch3_h_idx_1 = 0.0F;
        }

        /* End of Switch: '<S99>/Switch1' */
        /* End of Outputs for SubSystem: '<S83>/Protected Division1' */

        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S83>/Constant Value3'
         */
        if (TTQR_ac_DW.UnitDelay1_DSTATE_p2)
        {
            rtb_VeTTQC_M_TransTrqReq_FstSte = TTQR_ac_DW.UnitDelay3_DSTATE_k;
        }
        else
        {
            rtb_VeTTQC_M_TransTrqReq_FstSte = 1.0F;
        }

        /* End of Switch: '<S83>/Switch1' */

        /* Switch: '<S83>/Switch3' incorporates:
         *  Constant: '<S83>/Constant Value2'
         *  MinMax: '<S83>/MinMax'
         *  Sum: '<S83>/Summation1'
         */
        rtb_Switch3_h_idx_1 = fminf(rtb_VeTTQC_M_TransTrqReq_FstSte +
            rtb_Switch3_h_idx_1, 1.0F);

        /* Switch: '<S83>/Switch2' */
        rtb_Switch2_km = TTQR_ac_DW.UnitDelay_DSTATE_eh;
    }

    /* Logic: '<S7>/Logical6' incorporates:
     *  Constant: '<S83>/Constant Value1'
     */
    rtb_Logical7_k = (rtb_Switch3_h_idx_1 < 1.0F);

    /* Logic: '<S86>/AND' incorporates:
     *  Logic: '<S86>/OR1'
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_UnitDelay_kf = ((!TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn) &&
                        (TTQR_ac_DW.UnitDelay_DSTATE_h5));

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_h5 = TTQR_ac_B.VM_Conditional_Signal_TmpVM_Fcn;

    /* Logic: '<S96>/OR1' incorporates:
     *  Logic: '<S96>/OR'
     *  UnitDelay: '<S96>/Unit Delay'
     */
    rtb_AND_hc = (rtb_AND_hc || (rtb_Logical7_k &&
                   (TTQR_ac_DW.UnitDelay_DSTATE_ar)));

    /* Update for UnitDelay: '<S96>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ar = rtb_AND_hc;

    /* Logic: '<S97>/OR1' incorporates:
     *  UnitDelay: '<S97>/Unit Delay'
     */
    rtb_UnitDelay_kf = (rtb_UnitDelay_kf || (TTQR_ac_DW.UnitDelay_DSTATE_gg));

    /* Update for UnitDelay: '<S97>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_gg = rtb_UnitDelay_kf;

    /* Logic: '<S98>/OR1' incorporates:
     *  Logic: '<S98>/OR'
     *  UnitDelay: '<S98>/Unit Delay'
     */
    rtb_LogicalOperator1_l = (rtb_LogicalOperator1_l || (rtb_Logical7_k &&
        (TTQR_ac_DW.UnitDelay_DSTATE_gf)));

    /* Update for UnitDelay: '<S98>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_gf = rtb_LogicalOperator1_l;
    if (rtb_AND_hc || (rtb_UnitDelay_kf && rtb_LogicalOperator1_l))
    {
        /* VariantMerge generated from: '<S7>/VariantSource' incorporates:
         *  Constant: '<S83>/Constant Value'
         *  Product: '<S83>/Multiplication'
         *  Product: '<S83>/Multiplication3'
         *  Sum: '<S83>/Subtraction'
         *  Sum: '<S83>/Summation'
         */
        rtb_Switch3_h_idx_0 = ((1.0F - rtb_Switch3_h_idx_1) * rtb_Switch2_km) +
            (rtb_Switch3_h_idx_1 * rtb_Switch3_h_idx_0);
    }

    /* End of Outputs for SubSystem: '<S7>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S7>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S7>/EdgeFalling4' */
    /* End of Outputs for SubSystem: '<S7>/SignalLatchOnWithReset3' */
    /* End of Outputs for SubSystem: '<S7>/SignalLatchOnWithReset4' */
    /* End of Outputs for SubSystem: '<S7>/SignalLatchOnWithReset5' */
#else

    /* VariantMerge generated from: '<S7>/VariantSource' incorporates:
     *  SignalConversion generated from: '<S7>/VariantSource'
     */
    rtb_Switch3_h_idx_0 = TTQR_ac_B.TmpSignalConversionAtTmpVM_F_n2;

#endif

    /* End of Logic: '<S7>/Logical5' */

    /* Switch: '<S7>/Switch' */
    if (rtb_Comparison1_l)
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S90>/Calib'
         */
        if (KeTTQR_b_SumMaxTrqDerateSpdSel)
        {
            rtb_VeTTQC_M_TransTrqReq_FstSte =
                TTQR_ac_B.TmpSignalConversionAtTmpVM_F_dq;
        }
        else
        {
            rtb_VeTTQC_M_TransTrqReq_FstSte =
                TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_k;
        }

        /* End of Switch: '<S7>/Switch1' */

        /* Switch: '<S7>/Switch' incorporates:
         *  Lookup_n-D: '<S93>/Vector'
         *  MinMax: '<S7>/MinMax3'
         */
        rtb_Switch3_h_idx_0 = fminf(look1_iflf_binlcapw
            (rtb_VeTTQC_M_TransTrqReq_FstSte, ((const float32 *)
            &(KxTTQR_M_SumTrqTbl_SpdFtn[0])), ((const float32 *)
            &(KtTTQR_M_SumTrqTbl_SpdFtn[0])), 28U), rtb_Switch3_h_idx_0);
    }

    /* End of Switch: '<S7>/Switch' */

    /* Update for UnitDelay: '<S83>/Unit Delay3' incorporates:
     *  Constant: '<S83>/Constant Value5'
     *  UnitDelay: '<S7>/UnitDelay'
     *  UnitDelay: '<S83>/Unit Delay'
     *  UnitDelay: '<S83>/Unit Delay1'
     */
#if Rte_SysCon_Variant_TTQR_DrvAllwdSumMaxTrqClip

    TTQR_ac_DW.UnitDelay3_DSTATE_k = rtb_Switch3_h_idx_1;
    TTQR_ac_DW.UnitDelay1_DSTATE_p2 = true;
    TTQR_ac_DW.UnitDelay_DSTATE_ee = rtb_Switch3_h_idx_0;
    TTQR_ac_DW.UnitDelay_DSTATE_eh = rtb_Switch2_km;

#endif

    /* End of Update for UnitDelay: '<S83>/Unit Delay3' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_PassThrough'
     */
    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Min' incorporates:
     *  Gain: '<S14>/Gain'
     *  SignalConversion generated from: '<S1>/LoadTorqFront_Min'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Min_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_f);

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Opt' incorporates:
     *  Gain: '<S12>/Gain'
     *  SignalConversion generated from: '<S1>/LoadTorqFront_Opt'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Opt_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_l);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_SumMaxTrqDsrd'
     */
    /* Outport: '<Root>/VeTTQR_M_SumMaxTrqDsrd' incorporates:
     *  Gain: '<S94>/Gain'
     *  SignalConversion generated from: '<S1>/SumMaxTrqDsrd_Merge'
     */
    (void)Rte_Write_VeTTQR_M_SumMaxTrqDsrd_Value(rtb_Switch3_h_idx_0);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_PassThrough'
     */
    /* Outport: '<Root>/VeTTQR_M_LoadFrontOptArb_xShapingSEM' incorporates:
     *  Gain: '<S13>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_LoadFrontOptArb_xShaping'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOptArb_xShapingSEM_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_F_ik);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOptExp' incorporates:
     *  Gain: '<S16>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_LoadFrontOptExp'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOptExp_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_p);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOptShaped' incorporates:
     *  Gain: '<S10>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_LoadFrontOptShaped'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOptShaped_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_o);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOpt_xShaping' incorporates:
     *  Gain: '<S9>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_LoadFrontOpt_xShaping'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOpt_xShaping_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_F_cx);

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Max' incorporates:
     *  Gain: '<S8>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_LoadTorqFront_Max'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Max_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_SumMaxTrqDsrd'
     */
    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S88>/Calib'
     */
    if (HeTTQR_b_SumMinTrqDsrdCAN)
    {
        /* Outport: '<Root>/VeTTQR_M_SumMinTrqDsrd' incorporates:
         *  SignalConversion generated from: '<S1>/TTQC_M_SumMinTrqDsrd'
         */
        (void)Rte_Write_VeTTQR_M_SumMinTrqDsrd_Value
            (TTQR_ac_B.TmpSignalConversionAtTmpVM__iku);
    }
    else
    {
        /* Outport: '<Root>/VeTTQR_M_SumMinTrqDsrd' incorporates:
         *  Constant: '<S87>/Calib'
         *  SignalConversion generated from: '<S1>/TTQC_M_SumMinTrqDsrd'
         */
        (void)Rte_Write_VeTTQR_M_SumMinTrqDsrd_Value(HeTTQR_M_SumMinTrqDsrd);
    }

    /* End of Switch: '<S7>/Switch5' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_PassThrough'
     */
    /* Outport: '<Root>/VeTTQR_M_SumTrqMinPwrTrn' incorporates:
     *  Gain: '<S15>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_SumTrqMinPwrTrn'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqMinPwrTrn_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_F_pb);

    /* Outport: '<Root>/VeTTQR_M_SumTrqMin_Cruise' incorporates:
     *  Gain: '<S11>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_SumTrqMin_Cruise'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqMin_Cruise_Value
        (TTQR_ac_B.TmpSignalConversionAtTmpVM_Fc_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqFast'
     */
    /* Outport: '<Root>/VeTTQR_M_TCMSumTrqReqFast' incorporates:
     *  Gain: '<S25>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_TCM_SumTrqReqFast'
     */
    (void)Rte_Write_VeTTQR_M_TCMSumTrqReqFast_Value
        (rtb_VeTTQC_M_TransTrqReqFst_VSp);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqSlow'
     */
    /* Outport: '<Root>/VeTTQR_M_TCMSumTrqReqSlow' incorporates:
     *  Gain: '<S58>/Gain'
     *  SignalConversion generated from: '<S1>/TTQC_M_TCM_SumTrqReqSlow'
     */
    (void)Rte_Write_VeTTQR_M_TCMSumTrqReqSlow_Value(rtb_Switch3_o);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqFast'
     */
    /* Outport: '<Root>/VeTTQR_b_TransTrqReqFstEnbl' incorporates:
     *  Logic: '<S17>/AND'
     *  SignalConversion generated from: '<S1>/TTQC_b_TransTrqReqFstEnbl'
     */
    (void)Rte_Write_VeTTQR_b_TransTrqReqFstEnbl_Value(rtb_Logical5_p);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqSlow'
     */
    /* Outport: '<Root>/VeTTQR_b_TransTrqReqSlwEnbl' incorporates:
     *  Logic: '<S53>/AND'
     *  SignalConversion generated from: '<S1>/TTQC_b_TransTrqReqSlwEnbl'
     */
    (void)Rte_Write_VeTTQR_b_TransTrqReqSlwEnbl_Value(rtb_UnitDelay_ky);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqFast'
     */
    /* Outport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  DataTypeConversion: '<S19>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/TTQC_e_TCMTrqCntrlMdFst'
     *  Switch: '<S29>/Switch3'
     */
    (void)Rte_Write_VeTTQR_e_TCMTrqCntrlMdFst_Value
        (rtb_VeTTQC_e_TCMTrqCntrlMdFst);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/TTQC_ProcessTCMSumTrqReqSlow'
     */
    /* Outport: '<Root>/VeTTQR_e_TCMTrqCntrlMdSlw' incorporates:
     *  DataTypeConversion: '<S55>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/TTQC_e_TCMTrqCntrlMdSlw'
     *  Switch: '<S61>/Switch3'
     */
    (void)Rte_Write_VeTTQR_e_TCMTrqCntrlMdSlw_Value
        (rtb_VeTTQC_e_TCMTrqCntrlMdSlw);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/TTQR_MedTEB2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
#endif

}

#endif

/* Model step function for TID2 */
FUNC(void, TTQR_CODE) TTQR_MedTEB3(void) /* Explicit Task: MedTEB3 */
{

#if Rte_SysCon_Variant_TTQR_FUNC

    TeOHSR_e_VLE_DriveStat tmpRead;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeESSR_e_EngStartStopSt tmpRead_0;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_8;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 tmpRead_9;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_Logical;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_Comparison4_h3;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_Logical1_e;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeVTVR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_LeTTQC_M_HTDRLoadTorqFrontC;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_TmpSignalConversionAtVeOHSR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_TmpSignalConversionAtVeTINR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_LogicalOperator;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_Switch3[3];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_VariantMerge_For_Variant__i;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC && Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    float32 rtb_Gain;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_OR1_g;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_OR1_j;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch[2];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch_i;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_NotEqual;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch2[2];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch2_e;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch_fb;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_TmpSignalConversionAtVeMT_a;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_TmpSignalConversionAtVeMT_b;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_TmpSignalConversionAtVeMT_o;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    boolean rtb_TmpSignalConversionAtVeET_k;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC && Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    boolean rtb_Logical3_kh;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVeMTQR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeHTDR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeTRAR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch_g;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch_m;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch1_o;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch1_f;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVaTSXR[19];

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_Sum3[3];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch1_kh;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Summation[2];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch1_h1;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeICSR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Maximum_k;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHS_h;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHS_i;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeWTAR_e_PedalTrqArb rtb_TmpSignalConversionAtVeVT_h;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    TeTINR_e_TCM_TrqCntrlModeReq rtb_TmpSignalConversionAtVeTI_g;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVeETQR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVeHSER;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVeHS_l;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVeHS_n;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeHT_e;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeHT_m;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeT_fx;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeTITR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeTI_h;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeTI_n;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeMTIR;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeMT_h;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeVT_a;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    sint32 i;

#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVeHS_2[3];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_TmpSignalConversionAtVeHT_2[19];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 tmpRead_a[19];

#endif

#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    float32 rtb_TmpSignalConversionAtVaTS_0;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Switch_h_idx_0;

#endif

#if Rte_SysCon_Variant_TTQR_FUNC

    float32 rtb_Logical_0;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/TTQR_MedTEB3'
     */
    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' */
#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value(&rtb_TmpSignalConversionAtVeHS_i);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHSER_e_RngSt' */

    /* SignalConversion generated from: '<S2>/VeHSER_M_Clch1_TorqEst' incorporates:
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     *  SignalConversion generated from: '<S2>/VeHSER_M_Clch2_TorqEst'
     *  SignalConversion generated from: '<S2>/VeHSER_M_Clch3_TorqEst'
     *  SignalConversion generated from: '<S2>/VeMTQR_M_MtrA_TorqAchieved'
     */
#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* SignalConversion generated from: '<S2>/VeHSER_M_Clch1_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch1_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch1_TorqEst_Value(&rtb_TmpSignalConversionAtVeHSER);

    /* SignalConversion generated from: '<S2>/VeHSER_M_Clch2_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch2_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch2_TorqEst_Value(&rtb_TmpSignalConversionAtVeHS_l);

    /* SignalConversion generated from: '<S2>/VeHSER_M_Clch3_TorqEst' incorporates:
     *  Inport: '<Root>/VeHSER_M_Clch3_TorqEst'
     */
    (void)Rte_Read_VeHSER_M_Clch3_TorqEst_Value(&rtb_TmpSignalConversionAtVeHS_n);

    /* SignalConversion generated from: '<S2>/VeMTQR_M_MtrA_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTQR_M_MtrA_TorqAchieved'
     */
    (void)Rte_Read_VeMTQR_M_MtrA_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTQR);

    /* SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn' incorporates:
     *  Inport: '<Root>/VaTSXR_r_CalcTlfEqn'
     */
    (void)Rte_Read_VaTSXR_r_CalcTlfEqn_Value(rtb_TmpSignalConversionAtVaTSXR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHSER_M_Clch1_TorqEst' */

    /* SignalConversion generated from: '<S2>/VeETQR_M_EngTrqFSO_CurrAir' */
#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* SignalConversion generated from: '<S2>/VeETQR_M_EngTrqFSO_CurrAir' incorporates:
     *  Inport: '<Root>/VeETQR_M_EngTrqFSO_CurrAir'
     */
    (void)Rte_Read_VeETQR_M_EngTrqFSO_CurrAir_Value
        (&rtb_TmpSignalConversionAtVeETQR);

#endif

    /* End of SignalConversion generated from: '<S2>/VeETQR_M_EngTrqFSO_CurrAir' */

    /* SignalConversion generated from: '<S2>/VeETQR_b_EngTrqActual_FA' incorporates:
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     *  SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd_Eff'
     *  SignalConversion generated from: '<S2>/VeHTDR_M_MtrB_TorqCmnd'
     *  SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_TorqCmnd'
     *  SignalConversion generated from: '<S2>/VeICSR_M_EngCLITerm'
     *  SignalConversion generated from: '<S2>/VeMTIR_M_MtrB_TorqAchieved'
     *  SignalConversion generated from: '<S2>/VeMTIR_M_MtrC_TorqAchieved'
     *  SignalConversion generated from: '<S2>/VeMTIR_b_MtrA_TorqAchievedFA'
     *  SignalConversion generated from: '<S2>/VeMTIR_b_MtrB_TorqAchievedFA'
     *  SignalConversion generated from: '<S2>/VeMTIR_b_MtrC_TorqAchievedFA'
     *  SignalConversion generated from: '<S2>/VeOHSR_b_SuperCreepActive'
     *  SignalConversion generated from: '<S2>/VeTINR_b_TCMTrqCntrlMdFstFA'
     *  SignalConversion generated from: '<S2>/VeTINR_e_TCMTrqCntrlMdFst'
     *  SignalConversion generated from: '<S2>/VeTITR_M_InputTorqAct'
     *  SignalConversion generated from: '<S2>/VeTITR_M_InputTorqAct_wPDCL'
     *  SignalConversion generated from: '<S2>/VeTITR_M_SnsdTi_Flt'
     *  SignalConversion generated from: '<S2>/VeTITR_M_TiFinal'
     *  SignalConversion generated from: '<S2>/VeTRAR_M_EngTorqCmndImmed'
     *  SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFrontOpt_Raw'
     *  SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFront_Min_xUndrSht'
     *  SignalConversion generated from: '<S2>/VeVTVR_e_TrqArb'
     */
#if Rte_SysCon_Variant_TTQR_FUNC

    /* SignalConversion generated from: '<S2>/VeETQR_b_EngTrqActual_FA' incorporates:
     *  Inport: '<Root>/VeETQR_b_EngTrqActual_FA'
     */
    (void)Rte_Read_VeETQR_b_EngTrqActual_FA_Value
        (&rtb_TmpSignalConversionAtVeET_k);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&rtb_TmpSignalConversionAtVeHS_h);

    /* SignalConversion generated from: '<S2>/VeMTIR_b_MtrA_TorqAchievedFA' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrA_TorqAchievedFA'
     */
    (void)Rte_Read_VeMTIR_b_MtrA_TorqAchievedFA_Value
        (&rtb_TmpSignalConversionAtVeMT_a);

    /* SignalConversion generated from: '<S2>/VeMTIR_b_MtrB_TorqAchievedFA' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrB_TorqAchievedFA'
     */
    (void)Rte_Read_VeMTIR_b_MtrB_TorqAchievedFA_Value
        (&rtb_TmpSignalConversionAtVeMT_b);

    /* SignalConversion generated from: '<S2>/VeMTIR_b_MtrC_TorqAchievedFA' incorporates:
     *  Inport: '<Root>/VeMTIR_b_MtrC_TorqAchievedFA'
     */
    (void)Rte_Read_VeMTIR_b_MtrC_TorqAchievedFA_Value
        (&rtb_TmpSignalConversionAtVeMT_o);

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrB_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMTIR);

    /* SignalConversion generated from: '<S2>/VeMTIR_M_MtrC_TorqAchieved' incorporates:
     *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved'
     */
    (void)Rte_Read_VeMTIR_M_MtrC_TorqAchieved_Value
        (&rtb_TmpSignalConversionAtVeMT_h);

    /* SignalConversion generated from: '<S2>/VeTITR_M_InputTorqAct' incorporates:
     *  Inport: '<Root>/VeTITR_M_InputTorqAct'
     */
    (void)Rte_Read_VeTITR_M_InputTorqAct_Value(&rtb_TmpSignalConversionAtVeTITR);

    /* SignalConversion generated from: '<S2>/VeTINR_b_TCMTrqCntrlMdFstFA' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCMTrqCntrlMdFstFA'
     */
    (void)Rte_Read_VeTINR_b_TCMTrqCntrlMdFstFA_Value
        (&rtb_TmpSignalConversionAtVeTINR);

    /* SignalConversion generated from: '<S2>/VeTINR_e_TCMTrqCntrlMdFst' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Read_VeTINR_e_TCMTrqCntrlMdFst_Value
        (&rtb_TmpSignalConversionAtVeTI_g);

    /* SignalConversion generated from: '<S2>/VeTRAR_M_EngTorqCmndImmed' incorporates:
     *  Inport: '<Root>/VeTRAR_M_EngTorqCmndImmed'
     */
    (void)Rte_Read_VeTRAR_M_EngTorqCmndImmed_Value
        (&rtb_TmpSignalConversionAtVeTRAR);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd_Eff' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd_Eff'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Eff_Value
        (&rtb_TmpSignalConversionAtVeHTDR);

    /* SignalConversion generated from: '<S2>/VeICSR_M_EngCLITerm' incorporates:
     *  Inport: '<Root>/VeICSR_M_EngCLITerm'
     */
    (void)Rte_Read_VeICSR_M_EngCLITerm_Value(&rtb_TmpSignalConversionAtVeICSR);

    /* SignalConversion generated from: '<S2>/VeTITR_M_TiFinal' incorporates:
     *  Inport: '<Root>/VeTITR_M_TiFinal'
     */
    (void)Rte_Read_VeTITR_M_TiFinal_Value(&rtb_TmpSignalConversionAtVeT_fx);

    /* SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFrontOpt_Raw' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFrontOpt_Raw'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFrontOpt_Raw_Value
        (&rtb_TmpSignalConversionAtVeVTVR);

    /* SignalConversion generated from: '<S2>/VeVTVR_M_LoadTorqFront_Min_xUndrSht' incorporates:
     *  Inport: '<Root>/VeVTVR_M_LoadTorqFront_Min_xUndrSht'
     */
    (void)Rte_Read_VeVTVR_M_LoadTorqFront_Min_xUndrSht_Value
        (&rtb_TmpSignalConversionAtVeVT_a);

    /* SignalConversion generated from: '<S2>/VeVTVR_e_TrqArb' incorporates:
     *  Inport: '<Root>/VeVTVR_e_TrqArb'
     */
    (void)Rte_Read_VeVTVR_e_TrqArb_Value(&rtb_TmpSignalConversionAtVeVT_h);

    /* SignalConversion generated from: '<S2>/VeOHSR_b_SuperCreepActive' incorporates:
     *  Inport: '<Root>/VeOHSR_b_SuperCreepActive'
     */
    (void)Rte_Read_VeOHSR_b_SuperCreepActive_Value
        (&rtb_TmpSignalConversionAtVeOHSR);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrB_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrB_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrB_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeHT_e);

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrC_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrC_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrC_TorqCmnd_Value(&rtb_TmpSignalConversionAtVeHT_m);

    /* SignalConversion generated from: '<S2>/VeTITR_M_SnsdTi_Flt' incorporates:
     *  Inport: '<Root>/VeTITR_M_SnsdTi_Flt'
     */
    (void)Rte_Read_VeTITR_M_SnsdTi_Flt_Value(&rtb_TmpSignalConversionAtVeTI_n);

    /* SignalConversion generated from: '<S2>/VeTITR_M_InputTorqAct_wPDCL' incorporates:
     *  Inport: '<Root>/VeTITR_M_InputTorqAct_wPDCL'
     */
    (void)Rte_Read_VeTITR_M_InputTorqAct_wPDCL_Value
        (&rtb_TmpSignalConversionAtVeTI_h);

#endif

    /* End of SignalConversion generated from: '<S2>/VeETQR_b_EngTrqActual_FA' */
#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_TTQR_FUNC

    /* Inport: '<Root>/VeICSR_b_Disable_Ni_Global' */
    (void)Rte_Read_VeICSR_b_Disable_Ni_Global_Value(&rtb_Logical1_e);

    /* Outputs for Function Call SubSystem: '<S2>/TTQC_SumTrqCalc' */
    /* Logic: '<S113>/Logical' incorporates:
     *  Constant: '<S131>/Constant'
     *  Constant: '<S132>/Calib'
     *  DataTypeConversion: '<S113>/Data Type Conversion'
     *  RelationalOperator: '<S113>/Comparison5'
     *  Selector: '<S113>/Selector'
     */
    rtb_Logical = ((KaTTQR_b_AllwUndrsht[(rtb_TmpSignalConversionAtVeHS_h)]) &&
                   (((uint32)rtb_TmpSignalConversionAtVeVT_h) ==
                    CeWTAR_e_UndrShtPrt));

    /* RelationalOperator: '<S111>/Comparison4' incorporates:
     *  Constant: '<S115>/Constant'
     */
    rtb_Comparison4_h3 = (((uint32)rtb_TmpSignalConversionAtVeTI_g) ==
                          CeTINR_e_TrqInc);

    /* Logic: '<S111>/Logical1' incorporates:
     *  Constant: '<S116>/Constant'
     *  Logic: '<S111>/Logical3'
     *  RelationalOperator: '<S111>/Comparison1'
     */
    rtb_Logical1_e = (((rtb_Logical || rtb_Comparison4_h3) || (CeTINR_e_TrqDec ==
                        ((uint32)rtb_TmpSignalConversionAtVeTI_g))) ||
                      (!rtb_Logical1_e));

    /* Outputs for Atomic SubSystem: '<S129>/EdgeRising1' */
    /* Logic: '<S133>/OR1' incorporates:
     *  UnitDelay: '<S133>/Unit Delay'
     */
    rtb_OR1_g = !TTQR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S133>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_c = rtb_Logical1_e;

    /* Outputs for Atomic SubSystem: '<S129>/Stop Watch Reset Enabled1' */
    /* Switch: '<S135>/Switch' incorporates:
     *  Constant: '<S129>/Constant Value1'
     *  Logic: '<S129>/Logical4'
     *  Logic: '<S133>/AND'
     *  RelationalOperator: '<S129>/Comparison3'
     *  Switch: '<S135>/Switch2'
     *  UnitDelay: '<S129>/Unit Delay3'
     */
    if (rtb_Logical1_e && rtb_OR1_g)
    {
        /* Switch: '<S135>/Switch' incorporates:
         *  Constant: '<S135>/Constant Value2'
         */
        rtb_Switch_g = 0.0F;
    }
    else if ((TTQR_ac_DW.UnitDelay3_DSTATE < 2.0F) && rtb_Logical1_e)
    {
        /* Switch: '<S135>/Switch2' incorporates:
         *  Constant: '<S134>/Calib'
         *  Sum: '<S135>/Subtraction'
         *  Switch: '<S135>/Switch'
         *  UnitDelay: '<S135>/Unit Delay'
         */
        rtb_Switch_g = HeTTQR_t_dT + TTQR_ac_DW.UnitDelay_DSTATE_ga;
    }
    else
    {
        /* Switch: '<S135>/Switch' incorporates:
         *  Switch: '<S135>/Switch2'
         *  UnitDelay: '<S135>/Unit Delay'
         */
        rtb_Switch_g = TTQR_ac_DW.UnitDelay_DSTATE_ga;
    }

    /* End of Switch: '<S135>/Switch' */
    /* End of Outputs for SubSystem: '<S129>/EdgeRising1' */

    /* Update for UnitDelay: '<S135>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ga = rtb_Switch_g;

    /* End of Outputs for SubSystem: '<S129>/Stop Watch Reset Enabled1' */

    /* Logic: '<S111>/Logical2' */
    rtb_OR1_g = !rtb_Logical1_e;

    /* Outputs for Atomic SubSystem: '<S130>/EdgeRising1' */
    /* Logic: '<S136>/OR1' incorporates:
     *  UnitDelay: '<S136>/Unit Delay'
     */
    rtb_OR1_j = !TTQR_ac_DW.UnitDelay_DSTATE_n;

    /* Update for UnitDelay: '<S136>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_n = rtb_OR1_g;

    /* Outputs for Atomic SubSystem: '<S130>/Stop Watch Reset Enabled1' */
    /* Switch: '<S138>/Switch' incorporates:
     *  Constant: '<S130>/Constant Value1'
     *  Logic: '<S130>/Logical4'
     *  Logic: '<S136>/AND'
     *  RelationalOperator: '<S130>/Comparison3'
     *  Switch: '<S138>/Switch2'
     *  UnitDelay: '<S130>/Unit Delay3'
     */
    if (rtb_OR1_g && rtb_OR1_j)
    {
        /* Switch: '<S138>/Switch' incorporates:
         *  Constant: '<S138>/Constant Value2'
         */
        rtb_Switch_m = 0.0F;
    }
    else if ((TTQR_ac_DW.UnitDelay3_DSTATE_o < 2.0F) && rtb_OR1_g)
    {
        /* Switch: '<S138>/Switch2' incorporates:
         *  Constant: '<S137>/Calib'
         *  Sum: '<S138>/Subtraction'
         *  Switch: '<S138>/Switch'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        rtb_Switch_m = HeTTQR_t_dT + TTQR_ac_DW.UnitDelay_DSTATE_pq;
    }
    else
    {
        /* Switch: '<S138>/Switch' incorporates:
         *  Switch: '<S138>/Switch2'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        rtb_Switch_m = TTQR_ac_DW.UnitDelay_DSTATE_pq;
    }

    /* End of Switch: '<S138>/Switch' */
    /* End of Outputs for SubSystem: '<S130>/EdgeRising1' */

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_pq = rtb_Switch_m;

    /* End of Outputs for SubSystem: '<S130>/Stop Watch Reset Enabled1' */

    /* SignalConversion generated from: '<S112>/Product' incorporates:
     *  Constant: '<S112>/ConstantValue'
     *  Constant: '<S112>/ConstantValue1'
     *  Constant: '<S112>/ConstantValue10'
     *  Constant: '<S112>/ConstantValue11'
     *  Constant: '<S112>/ConstantValue2'
     *  Constant: '<S112>/ConstantValue3'
     *  Constant: '<S112>/ConstantValue4'
     *  Constant: '<S112>/ConstantValue5'
     *  Constant: '<S112>/ConstantValue6'
     *  Constant: '<S112>/ConstantValue7'
     *  Constant: '<S112>/ConstantValue8'
     *  Constant: '<S112>/ConstantValue9'
     */
    rtb_TmpSignalConversionAtVeHT_2[0] = rtb_TmpSignalConversionAtVeHTDR;
    rtb_TmpSignalConversionAtVeHT_2[1] = rtb_TmpSignalConversionAtVeHT_e;
    rtb_TmpSignalConversionAtVeHT_2[2] = rtb_TmpSignalConversionAtVeHT_m;
    rtb_TmpSignalConversionAtVeHT_2[3] = rtb_TmpSignalConversionAtVeT_fx;
    rtb_TmpSignalConversionAtVeHT_2[4] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[5] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[6] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[7] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[8] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[9] = rtb_TmpSignalConversionAtVeHSER;
    rtb_TmpSignalConversionAtVeHT_2[10] = rtb_TmpSignalConversionAtVeHS_l;
    rtb_TmpSignalConversionAtVeHT_2[11] = rtb_TmpSignalConversionAtVeHS_n;
    rtb_TmpSignalConversionAtVeHT_2[12] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[13] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[14] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[15] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[16] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[17] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[18] = 0.0F;

    /* Product: '<S112>/Product' incorporates:
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    rtb_TmpSignalConversionAtVaTS_0 = 0.0F;
    for (i = 0; i < 19; i++)
    {
        rtb_TmpSignalConversionAtVaTS_0 += rtb_TmpSignalConversionAtVaTSXR[i] *
            rtb_TmpSignalConversionAtVeHT_2[i];
    }

    /* Switch: '<S111>/Switch' */
    if (rtb_Logical1_e)
    {
        /* Switch: '<S111>/Switch' incorporates:
         *  Constant: '<S117>/Calib'
         */
        rtb_Switch[0] = KeTTQR_k_SEMBlndMult1Dflt;

        /* Switch: '<S111>/Switch1' incorporates:
         *  Logic: '<S111>/Logical5'
         *  Lookup_n-D: '<S123>/Vector'
         *  Lookup_n-D: '<S124>/Vector'
         *  Sum: '<S111>/Sum4'
         *  Switch: '<S135>/Switch'
         *  UnitDelay: '<S108>/UnitDelay'
         */
        if (rtb_Logical || rtb_Comparison4_h3)
        {
            rtb_Logical_0 = look2_iflf_binlcapw(rtb_Switch_g,
                rtb_TmpSignalConversionAtVeVTVR - TTQR_ac_DW.UnitDelay_DSTATE,
                ((const float32 *)&(KxTTQR_k_SEMBlndFxTrqReqInc[0])), ((const
                float32 *)&(KyTTQR_k_SEMBlndFxTrqReqInc[0])), ((const float32 *)
                &(KtTTQR_k_SEMBlndFxTrqReqInc[0])), TTQR_ac_ConstP.pooled8, 5U);
        }
        else
        {
            rtb_Logical_0 = look2_iflf_binlcapw(rtb_Switch_g,
                rtb_TmpSignalConversionAtVeVTVR - TTQR_ac_DW.UnitDelay_DSTATE,
                ((const float32 *)&(KxTTQR_k_SEMBlndFxTrqReqDec[0])), ((const
                float32 *)&(KyTTQR_k_SEMBlndFxTrqReqDec[0])), ((const float32 *)
                &(KtTTQR_k_SEMBlndFxTrqReqDec[0])), TTQR_ac_ConstP.pooled9, 5U);
        }

        /* End of Switch: '<S111>/Switch1' */

        /* Switch: '<S111>/Switch' incorporates:
         *  Sum: '<S111>/Sum2'
         *  UnitDelay: '<S111>/Unit Delay1'
         */
        rtb_Switch[1] = rtb_Logical_0 + TTQR_ac_DW.UnitDelay1_DSTATE;
    }
    else
    {
        /* Switch: '<S111>/Switch' incorporates:
         *  Constant: '<S120>/Calib'
         *  Lookup_n-D: '<S125>/Vector'
         *  Lookup_n-D: '<S126>/Vector'
         *  MinMax: '<S111>/MinMax1'
         *  Product: '<S112>/Product'
         *  Sum: '<S111>/Sum1'
         *  Sum: '<S111>/Sum3'
         *  Sum: '<S111>/Sum5'
         *  Switch: '<S138>/Switch'
         *  UnitDelay: '<S108>/UnitDelay'
         *  UnitDelay: '<S111>/Unit Delay'
         */
        rtb_Switch[0] = TTQR_ac_DW.UnitDelay_DSTATE_e - fmaxf
            (look1_iflf_binlcapw(rtb_Switch_m, ((const float32 *)
               &(KxTTQR_k_SEMBlndOutFxTiBsd[0])), ((const float32 *)
               &(KtTTQR_k_SEMBlndOutFxTiBsd[0])), 3U), look2_iflf_binlcapw
             (TTQR_ac_DW.UnitDelay_DSTATE - rtb_TmpSignalConversionAtVaTS_0,
              rtb_TmpSignalConversionAtVeVTVR - rtb_TmpSignalConversionAtVaTS_0,
              ((const float32 *)&(KxTTQR_k_SEMBlndOutFxTqDeltaBsd[0])), ((const
                float32 *)&(KyTTQR_k_SEMBlndOutFxTqDeltaBsd[0])), ((const
                float32 *)&(KtTTQR_k_SEMBlndOutFxTqDeltaBsd[0])),
              TTQR_ac_ConstP.pooled10, 9U));
        rtb_Switch[1] = KeTTQR_k_SEMBlndMult2Dflt;
    }

    /* End of Switch: '<S111>/Switch' */
    /* End of Outputs for SubSystem: '<S2>/TTQC_SumTrqCalc' */

    /* Inport: '<Root>/VeOHSR_e_ILEState' */
    (void)Rte_Read_VeOHSR_e_ILEState_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S2>/TTQC_SumTrqCalc' */
    /* Outputs for Atomic SubSystem: '<S111>/Limiter2' */
    /* Switch: '<S128>/Switch1' incorporates:
     *  Constant: '<S118>/Calib'
     *  RelationalOperator: '<S128>/Relational Operator'
     */
    if (KeTTQR_k_SEMBlndMult1LimMax < rtb_Switch[0])
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = KeTTQR_k_SEMBlndMult1LimMax;
    }
    else
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = rtb_Switch[0];
    }

    /* End of Switch: '<S128>/Switch1' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S119>/Calib'
     *  RelationalOperator: '<S128>/Relational Operator1'
     */
    if (rtb_Switch_h_idx_0 > KeTTQR_k_SEMBlndMult1LimMin)
    {
        /* Switch: '<S128>/Switch' */
        rtb_Switch1_h1 = rtb_Switch_h_idx_0;
    }
    else
    {
        /* Switch: '<S128>/Switch' */
        rtb_Switch1_h1 = KeTTQR_k_SEMBlndMult1LimMin;
    }

    /* End of Switch: '<S128>/Switch' */
    /* End of Outputs for SubSystem: '<S111>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S111>/Limiter1' */
    /* Switch: '<S127>/Switch1' incorporates:
     *  Constant: '<S121>/Calib'
     *  RelationalOperator: '<S127>/Relational Operator'
     */
    if (KeTTQR_k_SEMBlndMult2LimMax < rtb_Switch[1])
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = KeTTQR_k_SEMBlndMult2LimMax;
    }
    else
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = rtb_Switch[1];
    }

    /* End of Switch: '<S127>/Switch1' */

    /* Switch: '<S127>/Switch' incorporates:
     *  Constant: '<S122>/Calib'
     *  RelationalOperator: '<S127>/Relational Operator1'
     */
    if (rtb_Switch_h_idx_0 > KeTTQR_k_SEMBlndMult2LimMin)
    {
        /* Switch: '<S127>/Switch' */
        rtb_Switch_i = rtb_Switch_h_idx_0;
    }
    else
    {
        /* Switch: '<S127>/Switch' */
        rtb_Switch_i = KeTTQR_k_SEMBlndMult2LimMin;
    }

    /* End of Switch: '<S127>/Switch' */
    /* End of Outputs for SubSystem: '<S111>/Limiter1' */

    /* MinMax: '<S108>/MinMax1' incorporates:
     *  Product: '<S108>/Product1'
     *  Product: '<S108>/Product2'
     *  Product: '<S112>/Product'
     *  Sum: '<S108>/Sum1'
     *  Sum: '<S108>/Sum2'
     *  Sum: '<S108>/Sum3'
     *  Sum: '<S108>/Sum4'
     *  UnitDelay: '<S108>/UnitDelay'
     */
    rtb_LeTTQC_M_HTDRLoadTorqFrontC = fmaxf((((((rtb_TmpSignalConversionAtVeVTVR
        - TTQR_ac_DW.UnitDelay_DSTATE) * rtb_Switch_i) +
        TTQR_ac_DW.UnitDelay_DSTATE) - rtb_TmpSignalConversionAtVaTS_0) *
        rtb_Switch1_h1) + rtb_TmpSignalConversionAtVaTS_0,
        rtb_TmpSignalConversionAtVeVT_a);

    /* Gain: '<S103>/Gain' */
    TTQR_ac_B.Gain_b = rtb_LeTTQC_M_HTDRLoadTorqFrontC;

    /* Logic: '<S141>/Logical1' incorporates:
     *  Constant: '<S160>/Constant'
     *  Constant: '<S161>/Constant'
     *  Constant: '<S162>/Calib'
     *  Constant: '<S163>/Calib'
     *  Constant: '<S164>/Calib'
     *  DataTypeConversion: '<S141>/DataTypeConversion'
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     *  Logic: '<S141>/Logical'
     *  Logic: '<S141>/Logical3'
     *  Logic: '<S141>/Logical4'
     *  RelationalOperator: '<S141>/Comparison1'
     *  RelationalOperator: '<S141>/Comparison5'
     *  Selector: '<S141>/Selector'
     *  Selector: '<S141>/Selector1'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     */
    rtb_Logical = ((((KaTTQR_b_AllwUndrsht[(rtb_TmpSignalConversionAtVeHS_h)]) &&
                     (((uint32)rtb_TmpSignalConversionAtVeVT_h) ==
                      CeWTAR_e_UndrShtPrt)) || (((KeTTQR_b_BlndSuperCreep) &&
                      (!KaTTQR_b_AllwSuperCreep[(rtb_TmpSignalConversionAtVeHS_h)]))
                     && rtb_TmpSignalConversionAtVeOHSR)) || (((uint32)tmpRead) ==
                    CeOHSR_e_LaunchSpdCntrl));

    /* RelationalOperator: '<S140>/Comparison4' incorporates:
     *  Constant: '<S143>/Constant'
     */
    rtb_Comparison4_h3 = (((uint32)rtb_TmpSignalConversionAtVeTI_g) ==
                          CeTINR_e_TrqInc);

    /* Logic: '<S140>/Logical1' incorporates:
     *  Constant: '<S144>/Constant'
     *  RelationalOperator: '<S140>/Comparison1'
     */
    rtb_Logical1_e = (((rtb_Logical || rtb_Comparison4_h3) || (CeTINR_e_TrqDec ==
                        ((uint32)rtb_TmpSignalConversionAtVeTI_g))) ||
                      rtb_TmpSignalConversionAtVeTINR);

    /* Outputs for Atomic SubSystem: '<S157>/EdgeRising1' */
    /* Logic: '<S165>/OR1' incorporates:
     *  UnitDelay: '<S165>/UnitDelay'
     */
    rtb_OR1_g = !TTQR_ac_DW.UnitDelay_DSTATE_pr;

    /* Update for UnitDelay: '<S165>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_pr = rtb_Logical1_e;

    /* Outputs for Atomic SubSystem: '<S157>/StopWatchResetEnabled1' */
    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S157>/ConstantValue1'
     *  Logic: '<S157>/Logical4'
     *  Logic: '<S165>/AND'
     *  RelationalOperator: '<S157>/Comparison3'
     *  Switch: '<S167>/Switch2'
     *  UnitDelay: '<S157>/UnitDelay3'
     */
    if (rtb_Logical1_e && rtb_OR1_g)
    {
        /* Switch: '<S167>/Switch1' incorporates:
         *  Constant: '<S167>/ConstantValue2'
         */
        rtb_Switch1_o = 0.0F;
    }
    else if ((TTQR_ac_DW.UnitDelay3_DSTATE_i < 2.0F) && rtb_Logical1_e)
    {
        /* Switch: '<S167>/Switch2' incorporates:
         *  Constant: '<S166>/Calib'
         *  Sum: '<S167>/Subtraction'
         *  Switch: '<S167>/Switch1'
         *  UnitDelay: '<S167>/UnitDelay'
         */
        rtb_Switch1_o = HeTTQR_t_dT + TTQR_ac_DW.UnitDelay_DSTATE_hy;
    }
    else
    {
        /* Switch: '<S167>/Switch1' incorporates:
         *  Switch: '<S167>/Switch2'
         *  UnitDelay: '<S167>/UnitDelay'
         */
        rtb_Switch1_o = TTQR_ac_DW.UnitDelay_DSTATE_hy;
    }

    /* End of Switch: '<S167>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/EdgeRising1' */

    /* Update for UnitDelay: '<S167>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_hy = rtb_Switch1_o;

    /* End of Outputs for SubSystem: '<S157>/StopWatchResetEnabled1' */

    /* Logic: '<S140>/Logical2' */
    rtb_OR1_g = !rtb_Logical1_e;

    /* Outputs for Atomic SubSystem: '<S158>/EdgeRising1' */
    /* Logic: '<S168>/OR1' incorporates:
     *  UnitDelay: '<S168>/UnitDelay'
     */
    rtb_OR1_j = !TTQR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S168>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_o = rtb_OR1_g;

    /* Outputs for Atomic SubSystem: '<S158>/StopWatchResetEnabled1' */
    /* Switch: '<S170>/Switch1' incorporates:
     *  Constant: '<S158>/ConstantValue1'
     *  Logic: '<S158>/Logical4'
     *  Logic: '<S168>/AND'
     *  RelationalOperator: '<S158>/Comparison3'
     *  Switch: '<S170>/Switch2'
     *  UnitDelay: '<S158>/UnitDelay3'
     */
    if (rtb_OR1_g && rtb_OR1_j)
    {
        /* Switch: '<S170>/Switch1' incorporates:
         *  Constant: '<S170>/ConstantValue2'
         */
        rtb_Switch1_f = 0.0F;
    }
    else if ((TTQR_ac_DW.UnitDelay3_DSTATE_c < 2.0F) && rtb_OR1_g)
    {
        /* Switch: '<S170>/Switch2' incorporates:
         *  Constant: '<S169>/Calib'
         *  Sum: '<S170>/Subtraction'
         *  Switch: '<S170>/Switch1'
         *  UnitDelay: '<S170>/UnitDelay'
         */
        rtb_Switch1_f = HeTTQR_t_dT + TTQR_ac_DW.UnitDelay_DSTATE_p;
    }
    else
    {
        /* Switch: '<S170>/Switch1' incorporates:
         *  Switch: '<S170>/Switch2'
         *  UnitDelay: '<S170>/UnitDelay'
         */
        rtb_Switch1_f = TTQR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S170>/Switch1' */
    /* End of Outputs for SubSystem: '<S158>/EdgeRising1' */

    /* Update for UnitDelay: '<S170>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_f;

    /* End of Outputs for SubSystem: '<S158>/StopWatchResetEnabled1' */

    /* Logic: '<S188>/Logical4' incorporates:
     *  Constant: '<S197>/Constant'
     *  Constant: '<S198>/Constant'
     *  Constant: '<S199>/Constant'
     *  Constant: '<S200>/Calib'
     *  RelationalOperator: '<S188>/Comparison2'
     *  RelationalOperator: '<S188>/Comparison3'
     *  RelationalOperator: '<S188>/Comparison4'
     */
    rtb_OR1_g = ((((KeTTQR_b_C2VirtualElementEnbl) || (((uint32)
                     rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseG2Eqn)) ||
                  (((uint32)rtb_TmpSignalConversionAtVeHS_h) ==
                   CeHSER_e_UseM2Eqn)) || (((uint32)
                   rtb_TmpSignalConversionAtVeHS_h) == CeHSER_e_UseM2Eqn_2));

    /* Outputs for Atomic SubSystem: '<S187>/Accumulator_Reset' */
    /* Switch: '<S192>/Switch1' incorporates:
     *  RelationalOperator: '<S188>/Comparison1'
     *  UnitDelay: '<S188>/UnitDelay'
     */
    if (rtb_OR1_g != TTQR_ac_DW.UnitDelay_DSTATE_f5)
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S187>/ConstantValue3'
         */
        rtb_Switch_h_idx_0 = 0.0F;
    }
    else
    {
        /* Switch: '<S192>/Switch1' incorporates:
         *  Constant: '<S186>/Calib'
         *  Sum: '<S192>/Summation'
         *  UnitDelay: '<S192>/UnitDelay'
         */
        rtb_Switch_h_idx_0 = HeTTQR_t_dT + TTQR_ac_DW.UnitDelay_DSTATE_kk;
    }

    /* End of Switch: '<S192>/Switch1' */

    /* Update for UnitDelay: '<S192>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_kk = rtb_Switch_h_idx_0;

    /* End of Outputs for SubSystem: '<S187>/Accumulator_Reset' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S235>/Switch2' incorporates:
         *  Switch: '<S235>/Switch1'
         *  UnitDelay: '<S176>/UnitDelay'
         */
        if (TTQR_ac_DW.UnitDelay_DSTATE_eeg)
        {
            /* Switch: '<S235>/Switch1' incorporates:
             *  UnitDelay: '<S235>/Unit Delay'
             */
            rtb_Switch[i] = TTQR_ac_DW.UnitDelay_DSTATE_e4[i];
        }
        else
        {
            /* Switch: '<S235>/Switch1' incorporates:
             *  UnitDelay: '<S235>/Unit Delay1'
             */
            rtb_Switch[i] = TTQR_ac_DW.UnitDelay1_DSTATE_d[i];
        }

        /* End of Switch: '<S235>/Switch2' */
    }

    /* End of Outputs for SubSystem: '<S2>/TTQC_SumTrqCalc' */

    /* Inport: '<Root>/VeTITR_b_SnsdTi_notVld' */
    (void)Rte_Read_VeTITR_b_SnsdTi_notVld_Value(&rtb_LogicalOperator);

    /* Inport: '<Root>/VeENGR_b_EngCombustionCmnd' */
    (void)Rte_Read_VeENGR_b_EngCombustionCmnd_Value(&rtb_NotEqual);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_0);

    /* Outputs for Function Call SubSystem: '<S2>/TTQC_SumTrqCalc' */
    /* Logic: '<S176>/LogicalOperator' incorporates:
     *  Constant: '<S230>/Calib'
     *  DataTypeConversion: '<S176>/DataTypeConversion'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Logic: '<S176>/LogicalOperator1'
     *  Logic: '<S176>/LogicalOperator2'
     *  Selector: '<S176>/Selector'
     */
    rtb_LogicalOperator = (((!rtb_NotEqual) && (!rtb_LogicalOperator)) &&
                           (HaTTQR_b_EnblTiSnsd4Strt[(tmpRead_0)]));

    /* Outputs for Atomic SubSystem: '<S176>/EdgeBi1' */
    /* RelationalOperator: '<S229>/Not Equal' incorporates:
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_NotEqual = (rtb_LogicalOperator != TTQR_ac_DW.UnitDelay_DSTATE_av);

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_av = rtb_LogicalOperator;

    /* End of Outputs for SubSystem: '<S176>/EdgeBi1' */
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S228>/Switch2' */
        if (rtb_NotEqual)
        {
            /* Switch: '<S228>/Switch2' */
            rtb_Switch2[i] = rtb_Switch[i];
        }
        else
        {
            /* Switch: '<S228>/Switch2' incorporates:
             *  UnitDelay: '<S228>/Unit Delay'
             */
            rtb_Switch2[i] = TTQR_ac_DW.UnitDelay_DSTATE_d[i];
        }

        /* End of Switch: '<S228>/Switch2' */
    }

    /* Switch: '<S176>/Switch3' */
    if (rtb_LogicalOperator)
    {
        /* Switch: '<S176>/Switch3' incorporates:
         *  Constant: '<S232>/Calib'
         */
        rtb_Switch3[0] = rtb_TmpSignalConversionAtVeTI_n;
        rtb_Switch3[1] = rtb_TmpSignalConversionAtVeTI_n;
        rtb_Switch3[2] = KeTTQR_t_SnsdTiFltRmp;
    }
    else
    {
        /* Switch: '<S176>/Switch3' incorporates:
         *  Constant: '<S233>/Calib'
         */
        rtb_Switch3[0] = rtb_TmpSignalConversionAtVeTITR;
        rtb_Switch3[1] = rtb_TmpSignalConversionAtVeTI_h;
        rtb_Switch3[2] = KeTTQR_t_TiRmp;
    }

    /* End of Switch: '<S176>/Switch3' */

    /* Switch: '<S228>/Switch3' */
    if (rtb_NotEqual)
    {
        /* Switch: '<S228>/Switch3' incorporates:
         *  Constant: '<S228>/Constant Value4'
         */
        rtb_TmpSignalConversionAtVeTI_n = 0.0F;
    }
    else
    {
        /* MinMax: '<S228>/Maximum' incorporates:
         *  Constant: '<S231>/Calib'
         */
        rtb_TmpSignalConversionAtVeTI_n = fmaxf(HeTTQR_t_dT, rtb_Switch3[2]);

        /* Outputs for Atomic SubSystem: '<S228>/Protected Division1' */
        /* Switch: '<S236>/Switch1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Constant: '<S236>/Constant Value'
         *  Constant: '<S236>/Constant Value1'
         *  Constant: '<S236>/Constant Value2'
         *  Constant: '<S236>/Constant Value3'
         *  Logic: '<S236>/AND'
         *  RelationalOperator: '<S236>/Greater Than or Equal '
         *  RelationalOperator: '<S236>/Greater Than or Equal 1'
         *  RelationalOperator: '<S236>/Not Equal'
         *  RelationalOperator: '<S236>/Not Equal1'
         *  Switch: '<S236>/Switch2'
         *  Switch: '<S236>/Switch3'
         */
        if ((HeTTQR_t_dT != 0.0F) && (rtb_TmpSignalConversionAtVeTI_n != 0.0F))
        {
            /* Switch: '<S236>/Switch1' incorporates:
             *  Product: '<S236>/Division'
             */
            rtb_TmpSignalConversionAtVeTI_n = HeTTQR_t_dT /
                rtb_TmpSignalConversionAtVeTI_n;
        }
        else if (HeTTQR_t_dT > 0.0F)
        {
            /* Switch: '<S236>/Switch2' incorporates:
             *  Constant: '<S236>/MAXFLOAT'
             *  Switch: '<S236>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTI_n = 3.402823466E+38F;
        }
        else if (HeTTQR_t_dT < 0.0F)
        {
            /* Switch: '<S236>/Switch3' incorporates:
             *  Constant: '<S236>/MINFLOAT'
             *  Switch: '<S236>/Switch1'
             *  Switch: '<S236>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTI_n = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S236>/Switch1' incorporates:
             *  Constant: '<S236>/Constant Value4'
             *  Switch: '<S236>/Switch2'
             *  Switch: '<S236>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTI_n = 0.0F;
        }

        /* End of Switch: '<S236>/Switch1' */
        /* End of Outputs for SubSystem: '<S228>/Protected Division1' */

        /* Switch: '<S228>/Switch1' incorporates:
         *  Constant: '<S228>/Constant Value3'
         *  UnitDelay: '<S228>/Unit Delay1'
         *  UnitDelay: '<S228>/Unit Delay3'
         */
        if (TTQR_ac_DW.UnitDelay1_DSTATE_p)
        {
            rtb_Logical_0 = TTQR_ac_DW.UnitDelay3_DSTATE_iy;
        }
        else
        {
            rtb_Logical_0 = 1.0F;
        }

        /* End of Switch: '<S228>/Switch1' */

        /* Switch: '<S228>/Switch3' incorporates:
         *  Constant: '<S228>/Constant Value2'
         *  MinMax: '<S228>/MinMax'
         *  Sum: '<S228>/Summation1'
         */
        rtb_TmpSignalConversionAtVeTI_n = fminf(rtb_Logical_0 +
            rtb_TmpSignalConversionAtVeTI_n, 1.0F);
    }

    /* End of Switch: '<S228>/Switch3' */
    for (i = 0; i < 2; i++)
    {
        /* Gain: '<S234>/Gain' */
        VaTTQC_M_TiArbPreFlt[(i)] = rtb_Switch3[i];

        /* Sum: '<S228>/Summation' incorporates:
         *  Constant: '<S228>/Constant Value'
         *  Product: '<S228>/Multiplication'
         *  Product: '<S228>/Multiplication3'
         *  Sum: '<S228>/Subtraction'
         */
        VaTTQC_M_TiArb[(i)] = ((1.0F - rtb_TmpSignalConversionAtVeTI_n) *
                               rtb_Switch2[i]) +
            (rtb_TmpSignalConversionAtVeTI_n * VaTTQC_M_TiArbPreFlt[(i)]);
    }

    /* Logic: '<S191>/Logical' incorporates:
     *  Constant: '<S214>/Calib'
     *  DataTypeConversion: '<S113>/Data Type Conversion'
     *  Selector: '<S113>/Selector'
     *  Selector: '<S191>/Selector'
     */
    rtb_TmpSignalConversionAtVeOHSR = ((KaTTQR_b_AllwSuperCreep
        [(rtb_TmpSignalConversionAtVeHS_h)]) && rtb_TmpSignalConversionAtVeOHSR);

    /* Outputs for Atomic SubSystem: '<S191>/EdgeBi' */
    /* RelationalOperator: '<S213>/Not Equal' incorporates:
     *  UnitDelay: '<S213>/Unit Delay'
     */
    rtb_LogicalOperator = (rtb_TmpSignalConversionAtVeOHSR !=
                           TTQR_ac_DW.UnitDelay_DSTATE_j);

    /* Update for UnitDelay: '<S213>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_j = rtb_TmpSignalConversionAtVeOHSR;

    /* End of Outputs for SubSystem: '<S191>/EdgeBi' */

    /* Switch: '<S218>/Switch2' incorporates:
     *  Switch: '<S218>/Switch3'
     */
    if (rtb_LogicalOperator)
    {
        /* Switch: '<S218>/Switch2' incorporates:
         *  UnitDelay: '<S216>/UnitDelay'
         */
        rtb_TmpSignalConversionAtVeTITR = TTQR_ac_DW.UnitDelay_DSTATE_h;

        /* Switch: '<S218>/Switch3' incorporates:
         *  Constant: '<S218>/Constant Value4'
         */
        rtb_TmpSignalConversionAtVeTI_h = 0.0F;
    }
    else
    {
        /* Switch: '<S218>/Switch2' incorporates:
         *  UnitDelay: '<S218>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeTITR = TTQR_ac_DW.UnitDelay_DSTATE_ez;

        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S220>/Calib'
         *  Constant: '<S221>/Calib'
         */
        if (rtb_TmpSignalConversionAtVeOHSR)
        {
            rtb_TmpSignalConversionAtVaTS_0 = KeTTQR_t_BlndInSprCreep;
        }
        else
        {
            rtb_TmpSignalConversionAtVaTS_0 = KeTTQR_t_BlndOutSprCreep;
        }

        /* End of Switch: '<S216>/Switch1' */

        /* MinMax: '<S218>/Maximum' incorporates:
         *  Constant: '<S219>/Calib'
         */
        rtb_TmpSignalConversionAtVeTI_h = fmaxf(HeTTQR_t_dT,
            rtb_TmpSignalConversionAtVaTS_0);

        /* Outputs for Atomic SubSystem: '<S218>/Protected Division1' */
        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S219>/Calib'
         *  Constant: '<S222>/Constant Value'
         *  Constant: '<S222>/Constant Value1'
         *  Constant: '<S222>/Constant Value2'
         *  Constant: '<S222>/Constant Value3'
         *  Logic: '<S222>/AND'
         *  RelationalOperator: '<S222>/Greater Than or Equal '
         *  RelationalOperator: '<S222>/Greater Than or Equal 1'
         *  RelationalOperator: '<S222>/Not Equal'
         *  RelationalOperator: '<S222>/Not Equal1'
         *  Switch: '<S222>/Switch2'
         *  Switch: '<S222>/Switch3'
         */
        if ((HeTTQR_t_dT != 0.0F) && (rtb_TmpSignalConversionAtVeTI_h != 0.0F))
        {
            /* Switch: '<S222>/Switch1' incorporates:
             *  Product: '<S222>/Division'
             */
            rtb_TmpSignalConversionAtVeTI_h = HeTTQR_t_dT /
                rtb_TmpSignalConversionAtVeTI_h;
        }
        else if (HeTTQR_t_dT > 0.0F)
        {
            /* Switch: '<S222>/Switch2' incorporates:
             *  Constant: '<S222>/MAXFLOAT'
             *  Switch: '<S222>/Switch1'
             */
            rtb_TmpSignalConversionAtVeTI_h = 3.402823466E+38F;
        }
        else if (HeTTQR_t_dT < 0.0F)
        {
            /* Switch: '<S222>/Switch3' incorporates:
             *  Constant: '<S222>/MINFLOAT'
             *  Switch: '<S222>/Switch1'
             *  Switch: '<S222>/Switch2'
             */
            rtb_TmpSignalConversionAtVeTI_h = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S222>/Switch1' incorporates:
             *  Constant: '<S222>/Constant Value4'
             *  Switch: '<S222>/Switch2'
             *  Switch: '<S222>/Switch3'
             */
            rtb_TmpSignalConversionAtVeTI_h = 0.0F;
        }

        /* End of Switch: '<S222>/Switch1' */
        /* End of Outputs for SubSystem: '<S218>/Protected Division1' */

        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S218>/Constant Value3'
         *  UnitDelay: '<S218>/Unit Delay1'
         *  UnitDelay: '<S218>/Unit Delay3'
         */
        if (TTQR_ac_DW.UnitDelay1_DSTATE_g)
        {
            rtb_Logical_0 = TTQR_ac_DW.UnitDelay3_DSTATE_f;
        }
        else
        {
            rtb_Logical_0 = 1.0F;
        }

        /* End of Switch: '<S218>/Switch1' */

        /* Switch: '<S218>/Switch3' incorporates:
         *  Constant: '<S218>/Constant Value2'
         *  MinMax: '<S218>/MinMax'
         *  Sum: '<S218>/Summation1'
         */
        rtb_TmpSignalConversionAtVeTI_h = fminf(rtb_Logical_0 +
            rtb_TmpSignalConversionAtVeTI_h, 1.0F);
    }

    /* End of Switch: '<S218>/Switch2' */

    /* Switch: '<S216>/Switch' */
    if (rtb_TmpSignalConversionAtVeOHSR)
    {
        /* Switch: '<S216>/Switch' incorporates:
         *  Constant: '<S216>/ConstantValue'
         */
        VeTTQC_M_BlndInpSprCrpLckK0_UnlkK1 = 0.0F;
    }
    else
    {
        /* Switch: '<S216>/Switch' incorporates:
         *  Constant: '<S215>/Calib'
         *  Product: '<S191>/Product'
         */
        VeTTQC_M_BlndInpSprCrpLckK0_UnlkK1 = rtb_TmpSignalConversionAtVeICSR *
            KeTTQR_r_M2_EngCLFact;
    }

    /* End of Switch: '<S216>/Switch' */

    /* Sum: '<S218>/Summation' incorporates:
     *  Constant: '<S218>/Constant Value'
     *  Product: '<S218>/Multiplication'
     *  Product: '<S218>/Multiplication3'
     *  Sum: '<S218>/Subtraction'
     */
    VeTTQC_M_BlndSubENGCLIterm = ((1.0F - rtb_TmpSignalConversionAtVeTI_h) *
        rtb_TmpSignalConversionAtVeTITR) + (rtb_TmpSignalConversionAtVeTI_h *
        VeTTQC_M_BlndInpSprCrpLckK0_UnlkK1);

    /* Switch: '<S223>/Switch2' incorporates:
     *  Switch: '<S223>/Switch3'
     */
    if (rtb_LogicalOperator)
    {
        /* Switch: '<S223>/Switch2' incorporates:
         *  UnitDelay: '<S217>/UnitDelay'
         */
        rtb_Switch2_e = TTQR_ac_DW.UnitDelay_DSTATE_g;

        /* Switch: '<S223>/Switch3' incorporates:
         *  Constant: '<S223>/Constant Value4'
         */
        rtb_Maximum_k = 0.0F;
    }
    else
    {
        /* Switch: '<S223>/Switch2' incorporates:
         *  UnitDelay: '<S223>/Unit Delay'
         */
        rtb_Switch2_e = TTQR_ac_DW.UnitDelay_DSTATE_ge;

        /* Switch: '<S217>/Switch1' incorporates:
         *  Constant: '<S225>/Calib'
         *  Constant: '<S226>/Calib'
         */
        if (rtb_TmpSignalConversionAtVeOHSR)
        {
            rtb_TmpSignalConversionAtVaTS_0 = KeTTQR_t_BlndInSprCreep;
        }
        else
        {
            rtb_TmpSignalConversionAtVaTS_0 = KeTTQR_t_BlndOutSprCreep;
        }

        /* End of Switch: '<S217>/Switch1' */

        /* MinMax: '<S223>/Maximum' incorporates:
         *  Constant: '<S224>/Calib'
         */
        rtb_Maximum_k = fmaxf(HeTTQR_t_dT, rtb_TmpSignalConversionAtVaTS_0);

        /* Outputs for Atomic SubSystem: '<S223>/Protected Division1' */
        /* Switch: '<S227>/Switch1' incorporates:
         *  Constant: '<S224>/Calib'
         *  Constant: '<S227>/Constant Value'
         *  Constant: '<S227>/Constant Value1'
         *  Constant: '<S227>/Constant Value2'
         *  Constant: '<S227>/Constant Value3'
         *  Logic: '<S227>/AND'
         *  RelationalOperator: '<S227>/Greater Than or Equal '
         *  RelationalOperator: '<S227>/Greater Than or Equal 1'
         *  RelationalOperator: '<S227>/Not Equal'
         *  RelationalOperator: '<S227>/Not Equal1'
         *  Switch: '<S227>/Switch2'
         *  Switch: '<S227>/Switch3'
         */
        if ((HeTTQR_t_dT != 0.0F) && (rtb_Maximum_k != 0.0F))
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  Product: '<S227>/Division'
             */
            rtb_Maximum_k = HeTTQR_t_dT / rtb_Maximum_k;
        }
        else if (HeTTQR_t_dT > 0.0F)
        {
            /* Switch: '<S227>/Switch2' incorporates:
             *  Constant: '<S227>/MAXFLOAT'
             *  Switch: '<S227>/Switch1'
             */
            rtb_Maximum_k = 3.402823466E+38F;
        }
        else if (HeTTQR_t_dT < 0.0F)
        {
            /* Switch: '<S227>/Switch3' incorporates:
             *  Constant: '<S227>/MINFLOAT'
             *  Switch: '<S227>/Switch1'
             *  Switch: '<S227>/Switch2'
             */
            rtb_Maximum_k = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  Constant: '<S227>/Constant Value4'
             *  Switch: '<S227>/Switch2'
             *  Switch: '<S227>/Switch3'
             */
            rtb_Maximum_k = 0.0F;
        }

        /* End of Switch: '<S227>/Switch1' */
        /* End of Outputs for SubSystem: '<S223>/Protected Division1' */

        /* Switch: '<S223>/Switch1' incorporates:
         *  Constant: '<S223>/Constant Value3'
         *  UnitDelay: '<S223>/Unit Delay1'
         *  UnitDelay: '<S223>/Unit Delay3'
         */
        if (TTQR_ac_DW.UnitDelay1_DSTATE_fu)
        {
            rtb_Logical_0 = TTQR_ac_DW.UnitDelay3_DSTATE_e;
        }
        else
        {
            rtb_Logical_0 = 1.0F;
        }

        /* End of Switch: '<S223>/Switch1' */

        /* Switch: '<S223>/Switch3' incorporates:
         *  Constant: '<S223>/Constant Value2'
         *  MinMax: '<S223>/MinMax'
         *  Sum: '<S223>/Summation1'
         */
        rtb_Maximum_k = fminf(rtb_Logical_0 + rtb_Maximum_k, 1.0F);
    }

    /* End of Switch: '<S223>/Switch2' */
    /* End of Outputs for SubSystem: '<S2>/TTQC_SumTrqCalc' */

    /* Inport: '<Root>/VeICSR_M_NxCLIterm' */
    (void)Rte_Read_VeICSR_M_NxCLIterm_Value(&rtb_Switch_fb);

    /* Outputs for Function Call SubSystem: '<S2>/TTQC_SumTrqCalc' */
    /* Switch: '<S217>/Switch' */
    if (rtb_TmpSignalConversionAtVeOHSR)
    {
        /* Switch: '<S217>/Switch' incorporates:
         *  Constant: '<S217>/ConstantValue'
         */
        VeTTQC_M_BlndInpSprCrpUnlckdK0 = 0.0F;
    }
    else
    {
        /* Switch: '<S217>/Switch' */
        VeTTQC_M_BlndInpSprCrpUnlckdK0 = rtb_Switch_fb;
    }

    /* End of Switch: '<S217>/Switch' */

    /* Sum: '<S223>/Summation' incorporates:
     *  Constant: '<S223>/Constant Value'
     *  Product: '<S223>/Multiplication'
     *  Product: '<S223>/Multiplication3'
     *  Sum: '<S223>/Subtraction'
     */
    VeTTQC_M_BlndSubNC1CLIterm = ((1.0F - rtb_Maximum_k) * rtb_Switch2_e) +
        (rtb_Maximum_k * VeTTQC_M_BlndInpSprCrpUnlckdK0);

    /* Switch: '<S188>/Switch1' incorporates:
     *  Abs: '<S188>/Abs2'
     *  Constant: '<S188>/ConstantValue3'
     *  Constant: '<S188>/ConstantValue6'
     *  Constant: '<S201>/Calib'
     *  RelationalOperator: '<S188>/Comparison6'
     *  Selector: '<S188>/Selector2'
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    if (KeTTQR_b_CoeffBsdClsLoopSlct)
    {
        rtb_TmpSignalConversionAtVeOHSR = (fabsf
            (rtb_TmpSignalConversionAtVaTSXR[3]) != 0.0F);
    }
    else
    {
        rtb_TmpSignalConversionAtVeOHSR = rtb_OR1_g;
    }

    /* End of Switch: '<S188>/Switch1' */

    /* Switch: '<S175>/Switch' */
    if (rtb_TmpSignalConversionAtVeOHSR)
    {
        /* Switch: '<S175>/Switch' */
        rtb_Switch_fb = VeTTQC_M_BlndSubENGCLIterm;
    }
    else
    {
        /* Switch: '<S175>/Switch' */
        rtb_Switch_fb = VeTTQC_M_BlndSubNC1CLIterm;
    }

    /* End of Switch: '<S175>/Switch' */

    /* SignalConversion generated from: '<S175>/VariantSource' */
#if Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    /* Outputs for Atomic SubSystem: '<S175>/TTQC_SumTrqStatic1' */
    /* Logic: '<S190>/Logical3' incorporates:
     *  Abs: '<S190>/Abs'
     *  Abs: '<S190>/Abs1'
     *  Abs: '<S190>/Abs2'
     *  Abs: '<S190>/Abs3'
     *  Constant: '<S190>/ConstantValue1'
     *  Constant: '<S190>/ConstantValue2'
     *  Constant: '<S190>/ConstantValue3'
     *  Constant: '<S190>/ConstantValue4'
     *  Constant: '<S190>/ConstantValue5'
     *  Constant: '<S190>/ConstantValue6'
     *  Constant: '<S190>/ConstantValue7'
     *  Constant: '<S190>/ConstantValue8'
     *  Logic: '<S190>/Logical'
     *  Logic: '<S190>/Logical1'
     *  Logic: '<S190>/Logical2'
     *  Logic: '<S190>/Logical4'
     *  RelationalOperator: '<S190>/Comparison1'
     *  RelationalOperator: '<S190>/Comparison2'
     *  RelationalOperator: '<S190>/Comparison3'
     *  RelationalOperator: '<S190>/Comparison4'
     *  Selector: '<S190>/Selector'
     *  Selector: '<S190>/Selector1'
     *  Selector: '<S190>/Selector2'
     *  Selector: '<S190>/Selector3'
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    rtb_Logical3_kh = ((((rtb_TmpSignalConversionAtVeMT_a && (fabsf
                           (rtb_TmpSignalConversionAtVaTSXR[0]) > 0.0F)) ||
                         (rtb_TmpSignalConversionAtVeMT_b && (fabsf
                           (rtb_TmpSignalConversionAtVaTSXR[1]) > 0.0F))) ||
                        (rtb_TmpSignalConversionAtVeMT_o && (fabsf
                          (rtb_TmpSignalConversionAtVaTSXR[2]) > 0.0F))) ||
                       (rtb_TmpSignalConversionAtVeET_k && (fabsf
                         (rtb_TmpSignalConversionAtVaTSXR[3]) > 0.0F)));

    /* SignalConversion generated from: '<S190>/Product' incorporates:
     *  Constant: '<S190>/ConstantValue18'
     *  Constant: '<S190>/ConstantValue19'
     *  Constant: '<S190>/ConstantValue20'
     *  Constant: '<S190>/ConstantValue21'
     *  Constant: '<S190>/ConstantValue22'
     *  Constant: '<S190>/ConstantValue23'
     *  Constant: '<S190>/ConstantValue24'
     *  Constant: '<S190>/ConstantValue25'
     *  Constant: '<S190>/ConstantValue26'
     *  Constant: '<S190>/ConstantValue27'
     *  Constant: '<S190>/ConstantValue28'
     *  Constant: '<S190>/ConstantValue29'
     */
    rtb_TmpSignalConversionAtVeHT_2[0] = rtb_TmpSignalConversionAtVeMTQR;
    rtb_TmpSignalConversionAtVeHT_2[1] = rtb_TmpSignalConversionAtVeMTIR;
    rtb_TmpSignalConversionAtVeHT_2[2] = rtb_TmpSignalConversionAtVeMT_h;
    rtb_TmpSignalConversionAtVeHT_2[3] = VaTTQC_M_TiArb[1];
    rtb_TmpSignalConversionAtVeHT_2[4] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[5] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[6] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[7] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[8] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[9] = rtb_TmpSignalConversionAtVeHSER;
    rtb_TmpSignalConversionAtVeHT_2[10] = rtb_TmpSignalConversionAtVeHS_l;
    rtb_TmpSignalConversionAtVeHT_2[11] = rtb_TmpSignalConversionAtVeHS_n;
    rtb_TmpSignalConversionAtVeHT_2[12] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[13] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[14] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[15] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[16] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[17] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[18] = 0.0F;

    /* Product: '<S190>/Product' incorporates:
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    rtb_Gain = 0.0F;
    for (i = 0; i < 19; i++)
    {
        rtb_Gain += rtb_TmpSignalConversionAtVaTSXR[i] *
            rtb_TmpSignalConversionAtVeHT_2[i];
    }

    /* Outputs for Atomic SubSystem: '<S190>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S211>/EdgeRising' */
    /* Logic: '<S212>/AND' incorporates:
     *  Logic: '<S212>/OR1'
     *  UnitDelay: '<S212>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeOHSR = (rtb_Logical3_kh &&
        (!TTQR_ac_DW.UnitDelay_DSTATE_ei));

    /* Update for UnitDelay: '<S212>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ei = rtb_Logical3_kh;

    /* End of Outputs for SubSystem: '<S211>/EdgeRising' */

    /* Switch: '<S211>/Switch1' incorporates:
     *  Logic: '<S211>/OR'
     *  Logic: '<S211>/OR1'
     */
    if ((!rtb_Logical3_kh) || rtb_TmpSignalConversionAtVeOHSR)
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S211>/Constant Value1'
         */
        rtb_Switch1_kh = 0.0F;
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  Constant: '<S208>/Calib'
         *  Constant: '<S209>/Calib'
         *  MinMax: '<S211>/Minimum'
         *  Sum: '<S211>/Summation'
         *  UnitDelay: '<S211>/Unit Delay'
         */
        rtb_Switch1_kh = fminf(KeTTQR_t_SumTrqStaticFADtctTmDly, HeTTQR_t_dT +
                               TTQR_ac_DW.UnitDelay_DSTATE_ia);
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Logic: '<S211>/AND' incorporates:
     *  Constant: '<S209>/Calib'
     *  RelationalOperator: '<S211>/Greater  Than'
     */
    rtb_Logical3_kh = (rtb_Logical3_kh && (rtb_Switch1_kh >=
                        KeTTQR_t_SumTrqStaticFADtctTmDly));

    /* Update for UnitDelay: '<S211>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ia = rtb_Switch1_kh;

    /* End of Outputs for SubSystem: '<S190>/TurnOnDelayTime' */

    /* VariantMerge generated from: '<S175>/VariantSource' incorporates:
     *  Product: '<S190>/Product'
     *  Sum: '<S190>/Subtract'
     */
    rtb_Switch1_kh = rtb_Gain - rtb_Switch_fb;

    /* End of Outputs for SubSystem: '<S175>/TTQC_SumTrqStatic1' */
#endif

    /* End of SignalConversion generated from: '<S175>/VariantSource' */

    /* Outputs for Atomic SubSystem: '<S175>/TTQC_SumTrqStatic' */
    /* Logic: '<S189>/Logical3' incorporates:
     *  Abs: '<S189>/Abs'
     *  Abs: '<S189>/Abs1'
     *  Abs: '<S189>/Abs2'
     *  Abs: '<S189>/Abs3'
     *  Constant: '<S189>/ConstantValue1'
     *  Constant: '<S189>/ConstantValue2'
     *  Constant: '<S189>/ConstantValue3'
     *  Constant: '<S189>/ConstantValue4'
     *  Constant: '<S189>/ConstantValue5'
     *  Constant: '<S189>/ConstantValue6'
     *  Constant: '<S189>/ConstantValue7'
     *  Constant: '<S189>/ConstantValue8'
     *  Logic: '<S189>/Logical'
     *  Logic: '<S189>/Logical1'
     *  Logic: '<S189>/Logical2'
     *  Logic: '<S189>/Logical4'
     *  RelationalOperator: '<S189>/Comparison1'
     *  RelationalOperator: '<S189>/Comparison2'
     *  RelationalOperator: '<S189>/Comparison3'
     *  RelationalOperator: '<S189>/Comparison4'
     *  Selector: '<S189>/Selector'
     *  Selector: '<S189>/Selector1'
     *  Selector: '<S189>/Selector2'
     *  Selector: '<S189>/Selector3'
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    rtb_TmpSignalConversionAtVeET_k = ((((rtb_TmpSignalConversionAtVeMT_a &&
        (fabsf(rtb_TmpSignalConversionAtVaTSXR[0]) > 0.0F)) ||
        (rtb_TmpSignalConversionAtVeMT_b && (fabsf
        (rtb_TmpSignalConversionAtVaTSXR[1]) > 0.0F))) ||
        (rtb_TmpSignalConversionAtVeMT_o && (fabsf
        (rtb_TmpSignalConversionAtVaTSXR[2]) > 0.0F))) ||
        (rtb_TmpSignalConversionAtVeET_k && (fabsf
        (rtb_TmpSignalConversionAtVaTSXR[3]) > 0.0F)));

    /* SignalConversion generated from: '<S189>/Product' incorporates:
     *  Constant: '<S189>/ConstantValue18'
     *  Constant: '<S189>/ConstantValue19'
     *  Constant: '<S189>/ConstantValue20'
     *  Constant: '<S189>/ConstantValue21'
     *  Constant: '<S189>/ConstantValue22'
     *  Constant: '<S189>/ConstantValue23'
     *  Constant: '<S189>/ConstantValue24'
     *  Constant: '<S189>/ConstantValue25'
     *  Constant: '<S189>/ConstantValue26'
     *  Constant: '<S189>/ConstantValue27'
     *  Constant: '<S189>/ConstantValue28'
     *  Constant: '<S189>/ConstantValue29'
     */
    rtb_TmpSignalConversionAtVeHT_2[0] = rtb_TmpSignalConversionAtVeMTQR;
    rtb_TmpSignalConversionAtVeHT_2[1] = rtb_TmpSignalConversionAtVeMTIR;
    rtb_TmpSignalConversionAtVeHT_2[2] = rtb_TmpSignalConversionAtVeMT_h;
    rtb_TmpSignalConversionAtVeHT_2[3] = VaTTQC_M_TiArb[0];
    rtb_TmpSignalConversionAtVeHT_2[4] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[5] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[6] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[7] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[8] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[9] = rtb_TmpSignalConversionAtVeHSER;
    rtb_TmpSignalConversionAtVeHT_2[10] = rtb_TmpSignalConversionAtVeHS_l;
    rtb_TmpSignalConversionAtVeHT_2[11] = rtb_TmpSignalConversionAtVeHS_n;
    rtb_TmpSignalConversionAtVeHT_2[12] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[13] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[14] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[15] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[16] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[17] = 0.0F;
    rtb_TmpSignalConversionAtVeHT_2[18] = 0.0F;

    /* Product: '<S189>/Product' incorporates:
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    rtb_TmpSignalConversionAtVaTS_0 = 0.0F;
    for (i = 0; i < 19; i++)
    {
        rtb_TmpSignalConversionAtVaTS_0 += rtb_TmpSignalConversionAtVaTSXR[i] *
            rtb_TmpSignalConversionAtVeHT_2[i];
    }

    /* Sum: '<S189>/Subtract' incorporates:
     *  Product: '<S189>/Product'
     */
    rtb_Switch_fb = rtb_TmpSignalConversionAtVaTS_0 - rtb_Switch_fb;

    /* Outputs for Atomic SubSystem: '<S189>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S206>/EdgeRising' */
    /* Logic: '<S207>/AND' incorporates:
     *  Logic: '<S207>/OR1'
     *  UnitDelay: '<S207>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeMT_a = (rtb_TmpSignalConversionAtVeET_k &&
        (!TTQR_ac_DW.UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S207>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_jr = rtb_TmpSignalConversionAtVeET_k;

    /* End of Outputs for SubSystem: '<S206>/EdgeRising' */

    /* Switch: '<S206>/Switch1' incorporates:
     *  Logic: '<S206>/OR'
     *  Logic: '<S206>/OR1'
     */
    if ((!rtb_TmpSignalConversionAtVeET_k) || rtb_TmpSignalConversionAtVeMT_a)
    {
        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S206>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeMT_h = 0.0F;
    }
    else
    {
        /* Switch: '<S206>/Switch1' incorporates:
         *  Constant: '<S202>/Calib'
         *  Constant: '<S203>/Calib'
         *  MinMax: '<S206>/Minimum'
         *  Sum: '<S206>/Summation'
         *  UnitDelay: '<S206>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeMT_h = fminf(KeTTQR_t_SumTrqStaticFADtctTmDly,
            HeTTQR_t_dT + TTQR_ac_DW.UnitDelay_DSTATE_f);
    }

    /* End of Switch: '<S206>/Switch1' */

    /* Update for UnitDelay: '<S206>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeMT_h;

    /* End of Outputs for SubSystem: '<S189>/TurnOnDelayTime' */
    /* End of Outputs for SubSystem: '<S175>/TTQC_SumTrqStatic' */

    /* SignalConversion generated from: '<S175>/VariantSource' */
#if !Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    /* VariantMerge generated from: '<S175>/VariantSource' */
    rtb_Switch1_kh = rtb_Switch_fb;

#endif

    /* End of SignalConversion generated from: '<S175>/VariantSource' */

    /* Outputs for Atomic SubSystem: '<S187>/C2_SumTrqStatic_LPFilt' */
    /* MinMax: '<S193>/Maximum' incorporates:
     *  Constant: '<S186>/Calib'
     *  Lookup_n-D: '<S194>/Vector'
     *  Switch: '<S192>/Switch1'
     */
    rtb_Switch_h_idx_0 = fmaxf(look1_iflf_binlcapw(rtb_Switch_h_idx_0, ((const
        float32 *)&(KxTTQR_k_SumTrqStaticStChFilt[0])), ((const float32 *)
        &(KtTTQR_k_SumTrqStaticStChFilt[0])), 4U), HeTTQR_t_dT);

    /* Sum: '<S193>/Summation' incorporates:
     *  Constant: '<S186>/Calib'
     *  Product: '<S193>/Multiplication'
     *  Product: '<S193>/Multiplication1'
     *  Sum: '<S193>/Subtraction'
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_Summation[0] = (((rtb_Switch1_kh - TTQR_ac_DW.UnitDelay_DSTATE_gu[0]) *
                         HeTTQR_t_dT) * (1.0F / rtb_Switch_h_idx_0)) +
        TTQR_ac_DW.UnitDelay_DSTATE_gu[0];
    rtb_Summation[1] = (((rtb_Switch_fb - TTQR_ac_DW.UnitDelay_DSTATE_gu[1]) *
                         HeTTQR_t_dT) * (1.0F / rtb_Switch_h_idx_0)) +
        TTQR_ac_DW.UnitDelay_DSTATE_gu[1];

    /* Update for UnitDelay: '<S193>/Unit Delay' incorporates:
     *  Switch: '<S193>/Switch2'
     */
    for (i = 0; i < 2; i++)
    {
        TTQR_ac_DW.UnitDelay_DSTATE_gu[i] = rtb_Summation[i];
    }

    /* End of Update for UnitDelay: '<S193>/Unit Delay' */

    /* Gain: '<S196>/Gain' incorporates:
     *  Switch: '<S193>/Switch2'
     */
    VeTTQC_M_C2_SumTrqStatic4ActSEM = rtb_Summation[1];

    /* End of Outputs for SubSystem: '<S187>/C2_SumTrqStatic_LPFilt' */

    /* Switch: '<S140>/Switch' */
    if (rtb_Logical1_e)
    {
        /* Switch: '<S140>/Switch' incorporates:
         *  Constant: '<S145>/Calib'
         */
        rtb_Switch_h_idx_0 = KeTTQR_k_SEMBlndMult1Dflt;

        /* Switch: '<S140>/Switch1' incorporates:
         *  Logic: '<S140>/Logical5'
         *  Lookup_n-D: '<S151>/Vector'
         *  Lookup_n-D: '<S152>/Vector'
         *  Sum: '<S140>/Sum4'
         *  Switch: '<S167>/Switch1'
         *  UnitDelay: '<S109>/UnitDelay'
         */
        if (rtb_Logical || rtb_Comparison4_h3)
        {
            rtb_Logical_0 = look2_iflf_binlcapw(rtb_Switch1_o,
                rtb_TmpSignalConversionAtVeVTVR - TTQR_ac_DW.UnitDelay_DSTATE_k,
                ((const float32 *)&(KxTTQR_k_SEMBlndFxTrqReqInc[0])), ((const
                float32 *)&(KyTTQR_k_SEMBlndFxTrqReqInc[0])), ((const float32 *)
                &(KtTTQR_k_SEMBlndFxTrqReqInc[0])), TTQR_ac_ConstP.pooled8, 5U);
        }
        else
        {
            rtb_Logical_0 = look2_iflf_binlcapw(rtb_Switch1_o,
                rtb_TmpSignalConversionAtVeVTVR - TTQR_ac_DW.UnitDelay_DSTATE_k,
                ((const float32 *)&(KxTTQR_k_SEMBlndFxTrqReqDec[0])), ((const
                float32 *)&(KyTTQR_k_SEMBlndFxTrqReqDec[0])), ((const float32 *)
                &(KtTTQR_k_SEMBlndFxTrqReqDec[0])), TTQR_ac_ConstP.pooled9, 5U);
        }

        /* End of Switch: '<S140>/Switch1' */

        /* Switch: '<S140>/Switch' incorporates:
         *  Sum: '<S140>/Sum2'
         *  UnitDelay: '<S140>/UnitDelay1'
         */
        rtb_TmpSignalConversionAtVeMTIR = rtb_Logical_0 +
            TTQR_ac_DW.UnitDelay1_DSTATE_e;
    }
    else
    {
        /* Switch: '<S140>/Switch' incorporates:
         *  Constant: '<S148>/Calib'
         *  Lookup_n-D: '<S153>/Vector'
         *  Lookup_n-D: '<S154>/Vector'
         *  MinMax: '<S140>/MinMax1'
         *  Sum: '<S140>/Sum1'
         *  Sum: '<S140>/Sum3'
         *  Sum: '<S140>/Sum5'
         *  Switch: '<S170>/Switch1'
         *  UnitDelay: '<S109>/UnitDelay'
         *  UnitDelay: '<S140>/UnitDelay'
         */
        rtb_Switch_h_idx_0 = TTQR_ac_DW.UnitDelay_DSTATE_i - fmaxf
            (look1_iflf_binlcapw(rtb_Switch1_f, ((const float32 *)
               &(KxTTQR_k_SEMBlndOutFxTiBsd[0])), ((const float32 *)
               &(KtTTQR_k_SEMBlndOutFxTiBsd[0])), 3U), look2_iflf_binlcapw
             (TTQR_ac_DW.UnitDelay_DSTATE_k - VeTTQC_M_C2_SumTrqStatic4ActSEM,
              rtb_TmpSignalConversionAtVeVTVR - VeTTQC_M_C2_SumTrqStatic4ActSEM,
              ((const float32 *)&(KxTTQR_k_SEMBlndOutFxTqDeltaBsd[0])), ((const
                float32 *)&(KyTTQR_k_SEMBlndOutFxTqDeltaBsd[0])), ((const
                float32 *)&(KtTTQR_k_SEMBlndOutFxTqDeltaBsd[0])),
              TTQR_ac_ConstP.pooled10, 9U));
        rtb_TmpSignalConversionAtVeMTIR = KeTTQR_k_SEMBlndMult2Dflt;
    }

    /* End of Switch: '<S140>/Switch' */

    /* SignalConversion generated from: '<S112>/Product1' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_OpenLoopRamped'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_OpenLoopRamped_Value(&tmpRead_a[0]);

    /* Outputs for Atomic SubSystem: '<S140>/Limiter2' */
    /* Switch: '<S156>/Switch1' incorporates:
     *  Constant: '<S146>/Calib'
     *  RelationalOperator: '<S156>/RelationalOperator'
     */
    if (KeTTQR_k_SEMBlndMult1LimMax < rtb_Switch_h_idx_0)
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = KeTTQR_k_SEMBlndMult1LimMax;
    }

    /* End of Switch: '<S156>/Switch1' */

    /* Switch: '<S156>/Switch' incorporates:
     *  Constant: '<S147>/Calib'
     *  RelationalOperator: '<S156>/RelationalOperator1'
     */
    if (rtb_Switch_h_idx_0 > KeTTQR_k_SEMBlndMult1LimMin)
    {
        /* Switch: '<S156>/Switch' */
        rtb_Switch1_kh = rtb_Switch_h_idx_0;
    }
    else
    {
        /* Switch: '<S156>/Switch' */
        rtb_Switch1_kh = KeTTQR_k_SEMBlndMult1LimMin;
    }

    /* End of Switch: '<S156>/Switch' */
    /* End of Outputs for SubSystem: '<S140>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S140>/Limiter1' */
    /* Switch: '<S155>/Switch1' incorporates:
     *  Constant: '<S149>/Calib'
     *  RelationalOperator: '<S155>/RelationalOperator'
     */
    if (KeTTQR_k_SEMBlndMult2LimMax < rtb_TmpSignalConversionAtVeMTIR)
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = KeTTQR_k_SEMBlndMult2LimMax;
    }
    else
    {
        /* UnitDelay: '<S180>/Unit Delay' */
        rtb_Switch_h_idx_0 = rtb_TmpSignalConversionAtVeMTIR;
    }

    /* End of Switch: '<S155>/Switch1' */

    /* Switch: '<S155>/Switch' incorporates:
     *  Constant: '<S150>/Calib'
     *  RelationalOperator: '<S155>/RelationalOperator1'
     */
    if (rtb_Switch_h_idx_0 <= KeTTQR_k_SEMBlndMult2LimMin)
    {
        /* Switch: '<S155>/Switch' */
        rtb_Switch_h_idx_0 = KeTTQR_k_SEMBlndMult2LimMin;
    }

    /* End of Switch: '<S155>/Switch' */
    /* End of Outputs for SubSystem: '<S140>/Limiter1' */

    /* MinMax: '<S109>/MinMax1' incorporates:
     *  Product: '<S109>/Product'
     *  Product: '<S109>/Product1'
     *  Sum: '<S109>/Sum'
     *  Sum: '<S109>/Sum1'
     *  Sum: '<S109>/Sum2'
     *  Sum: '<S109>/Sum3'
     *  UnitDelay: '<S109>/UnitDelay'
     */
    rtb_TmpSignalConversionAtVeVTVR = fmaxf((((((rtb_TmpSignalConversionAtVeVTVR
        - TTQR_ac_DW.UnitDelay_DSTATE_k) * rtb_Switch_h_idx_0) +
        TTQR_ac_DW.UnitDelay_DSTATE_k) - VeTTQC_M_C2_SumTrqStatic4ActSEM) *
        rtb_Switch1_kh) + VeTTQC_M_C2_SumTrqStatic4ActSEM,
        rtb_TmpSignalConversionAtVeVT_a);

    /* Gain: '<S104>/Gain' */
    TTQR_ac_B.Gain_a = rtb_TmpSignalConversionAtVeVTVR;

    /* SignalConversion generated from: '<S112>/Product1' incorporates:
     *  Constant: '<S112>/ConstantValue12'
     *  Constant: '<S112>/ConstantValue13'
     *  Constant: '<S112>/ConstantValue14'
     *  Constant: '<S112>/ConstantValue15'
     *  Constant: '<S112>/ConstantValue16'
     *  Constant: '<S112>/ConstantValue17'
     *  Constant: '<S112>/ConstantValue18'
     *  Constant: '<S112>/ConstantValue19'
     *  Constant: '<S112>/ConstantValue20'
     *  Constant: '<S112>/ConstantValue21'
     *  Constant: '<S112>/ConstantValue22'
     *  Constant: '<S112>/ConstantValue23'
     */
    tmpRead_a[1] = rtb_TmpSignalConversionAtVeHT_e;
    tmpRead_a[2] = rtb_TmpSignalConversionAtVeHT_m;
    tmpRead_a[3] = rtb_TmpSignalConversionAtVeT_fx;
    tmpRead_a[4] = 0.0F;
    tmpRead_a[5] = 0.0F;
    tmpRead_a[6] = 0.0F;
    tmpRead_a[7] = 0.0F;
    tmpRead_a[8] = 0.0F;
    tmpRead_a[9] = rtb_TmpSignalConversionAtVeHSER;
    tmpRead_a[10] = rtb_TmpSignalConversionAtVeHS_l;
    tmpRead_a[11] = rtb_TmpSignalConversionAtVeHS_n;
    tmpRead_a[12] = 0.0F;
    tmpRead_a[13] = 0.0F;
    tmpRead_a[14] = 0.0F;
    tmpRead_a[15] = 0.0F;
    tmpRead_a[16] = 0.0F;
    tmpRead_a[17] = 0.0F;
    tmpRead_a[18] = 0.0F;

    /* Product: '<S112>/Product1' incorporates:
     *  SignalConversion generated from: '<S2>/VaTSXR_r_CalcTlfEqn'
     */
    rtb_TmpSignalConversionAtVeT_fx = 0.0F;
    for (i = 0; i < 19; i++)
    {
        rtb_TmpSignalConversionAtVeT_fx += rtb_TmpSignalConversionAtVaTSXR[i] *
            tmpRead_a[i];
    }

    /* Gain: '<S105>/Gain' incorporates:
     *  Product: '<S112>/Product1'
     */
    TTQR_ac_B.Gain_l0 = rtb_TmpSignalConversionAtVeT_fx;

    /* Outputs for Atomic SubSystem: '<S187>/C2_SumTrqStatic_LPFilt' */
    /* Gain: '<S106>/Gain' incorporates:
     *  Switch: '<S193>/Switch2'
     */
    TTQR_ac_B.Gain_o = rtb_Summation[0];

    /* End of Outputs for SubSystem: '<S187>/C2_SumTrqStatic_LPFilt' */

    /* SignalConversion generated from: '<S175>/VariantSource1' */
#if Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    /* VariantMerge generated from: '<S175>/VariantSource1' */
    rtb_VariantMerge_For_Variant__i = rtb_Logical3_kh;

#else

    /* Outputs for Atomic SubSystem: '<S175>/TTQC_SumTrqStatic' */
    /* Outputs for Atomic SubSystem: '<S189>/TurnOnDelayTime' */
    /* VariantMerge generated from: '<S175>/VariantSource1' incorporates:
     *  Constant: '<S203>/Calib'
     *  Logic: '<S206>/AND'
     *  RelationalOperator: '<S206>/Greater  Than'
     *  SignalConversion generated from: '<S175>/VariantSource1'
     */
    rtb_VariantMerge_For_Variant__i = (rtb_TmpSignalConversionAtVeET_k &&
        (rtb_TmpSignalConversionAtVeMT_h >= KeTTQR_t_SumTrqStaticFADtctTmDly));

    /* End of Outputs for SubSystem: '<S189>/TurnOnDelayTime' */
    /* End of Outputs for SubSystem: '<S175>/TTQC_SumTrqStatic' */
#endif

    /* End of SignalConversion generated from: '<S175>/VariantSource1' */

    /* Gain: '<S107>/Gain' */
    TTQR_ac_B.Gain_ay = rtb_VariantMerge_For_Variant__i;

    /* Logic: '<S109>/Logical1' */
    TTQR_ac_B.Logical1 = (rtb_TmpSignalConversionAtVeTINR ||
                          rtb_VariantMerge_For_Variant__i);

    /* Product: '<S174>/Product6' incorporates:
     *  Constant: '<S173>/Calib'
     */
    rtb_TmpSignalConversionAtVeT_fx = rtb_TmpSignalConversionAtVeMTQR *
        KeTTQR_r_G2_SumTrqCalcFromTa;

    /* Switch: '<S174>/Switch1' incorporates:
     *  Constant: '<S172>/Calib'
     *  Constant: '<S177>/Calib'
     *  Switch: '<S110>/Switch'
     */
    if (KeTTQR_b_EngP1SumTrqActSubITerm)
    {
        /* Switch: '<S110>/Switch' incorporates:
         *  Constant: '<S172>/Calib'
         */
        if (HeTTQR_b_EngP1Act_TiSlct)
        {
            rtb_Logical_0 = VaTTQC_M_TiArb[1];
        }
        else
        {
            rtb_Logical_0 = VaTTQC_M_TiArb[0];
        }

        /* Switch: '<S174>/Switch2' incorporates:
         *  Sum: '<S174>/Sum4'
         */
        rtb_TmpSignalConversionAtVeHT_e = rtb_Logical_0 -
            rtb_TmpSignalConversionAtVeICSR;
    }
    else if (HeTTQR_b_EngP1Act_TiSlct)
    {
        /* Switch: '<S110>/Switch' incorporates:
         *  Switch: '<S174>/Switch2'
         */
        rtb_TmpSignalConversionAtVeHT_e = VaTTQC_M_TiArb[1];
    }
    else
    {
        /* Switch: '<S174>/Switch2' incorporates:
         *  Switch: '<S110>/Switch'
         */
        rtb_TmpSignalConversionAtVeHT_e = VaTTQC_M_TiArb[0];
    }

    /* End of Switch: '<S174>/Switch1' */

    /* Sum: '<S174>/Sum1' */
    TTQR_ac_B.Sum1 = rtb_TmpSignalConversionAtVeT_fx +
        rtb_TmpSignalConversionAtVeHT_e;

    /* Product: '<S179>/Product' incorporates:
     *  Constant: '<S181>/Calib'
     *  Constant: '<S183>/Calib'
     */
    rtb_TmpSignalConversionAtVeHT_m = ((float32)KeTTQR_dM_GradPosMtrA_TrqReq) *
        HeTTQR_t_dT;

    /* Product: '<S179>/Product1' incorporates:
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     */
    rtb_TmpSignalConversionAtVeHT_e = HeTTQR_t_dT * ((float32)
        KeTTQR_dM_GradNegMtrA_TrqReq);

    /* Switch: '<S174>/Switch' incorporates:
     *  Constant: '<S178>/Calib'
     */
    if (KeTTQR_b_MtrASubITerm)
    {
        /* Switch: '<S174>/Switch' incorporates:
         *  Constant: '<S173>/Calib'
         *  Product: '<S174>/Product1'
         *  Sum: '<S174>/Sum3'
         */
        rtb_TmpSignalConversionAtVeHTDR = (rtb_TmpSignalConversionAtVeHTDR *
            KeTTQR_r_G2_SumTrqCalcFromTa) - rtb_TmpSignalConversionAtVeICSR;
    }
    else
    {
        /* Switch: '<S174>/Switch' incorporates:
         *  Constant: '<S173>/Calib'
         *  Product: '<S174>/Product1'
         */
        rtb_TmpSignalConversionAtVeHTDR *= KeTTQR_r_G2_SumTrqCalcFromTa;
    }

    /* End of Switch: '<S174>/Switch' */

    /* Outputs for Atomic SubSystem: '<S179>/GradientLimiter' */
    /* Sum: '<S180>/Sum2' incorporates:
     *  UnitDelay: '<S180>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHTDR -= TTQR_ac_DW.UnitDelay_DSTATE_db;

    /* Outputs for Atomic SubSystem: '<S180>/Limiter' */
    /* Switch: '<S184>/Switch1' incorporates:
     *  RelationalOperator: '<S184>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeHT_m < rtb_TmpSignalConversionAtVeHTDR)
    {
        /* Switch: '<S184>/Switch1' */
        rtb_TmpSignalConversionAtVeHTDR = rtb_TmpSignalConversionAtVeHT_m;
    }

    /* End of Switch: '<S184>/Switch1' */

    /* Switch: '<S184>/Switch' incorporates:
     *  RelationalOperator: '<S184>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeHTDR > rtb_TmpSignalConversionAtVeHT_e)
    {
        rtb_TmpSignalConversionAtVeHT_e = rtb_TmpSignalConversionAtVeHTDR;
    }

    /* End of Switch: '<S184>/Switch' */
    /* End of Outputs for SubSystem: '<S180>/Limiter' */

    /* Sum: '<S180>/Sum3' incorporates:
     *  UnitDelay: '<S180>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeHTDR = rtb_TmpSignalConversionAtVeHT_e +
        TTQR_ac_DW.UnitDelay_DSTATE_db;

    /* Update for UnitDelay: '<S180>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_db = rtb_TmpSignalConversionAtVeHTDR;

    /* End of Outputs for SubSystem: '<S179>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S2>/TTQC_SumTrqCalc' */

    /* Inport: '<Root>/VeMTQR_b_AlternatorMd_MtrA' */
    (void)Rte_Read_VeMTQR_b_AlternatorMd_MtrA_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<S2>/TTQC_SumTrqCalc' */
    /* Switch: '<S174>/Switch2' incorporates:
     *  Constant: '<S174>/ConstantValue'
     *  MinMax: '<S174>/MinMax'
     *  Sum: '<S174>/Sum5'
     */
    if (tmpRead_1)
    {
        rtb_TmpSignalConversionAtVeTRAR += fminf(rtb_TmpSignalConversionAtVeT_fx,
            0.0F);
    }

    /* End of Switch: '<S174>/Switch2' */

    /* Sum: '<S174>/Sum2' */
    TTQR_ac_B.Sum2 = rtb_TmpSignalConversionAtVeHTDR +
        rtb_TmpSignalConversionAtVeTRAR;

    /* SignalConversion generated from: '<S175>/VariantSource2' */
#if Rte_SysCon_Variant_TTQR_SumTrqCalc_TiPDCL

    /* VariantMerge generated from: '<S175>/VariantSource2' */
    TTQR_ac_B.VariantMerge_For_Variant_Source = rtb_Gain;

#else

    /* Outputs for Atomic SubSystem: '<S175>/TTQC_SumTrqStatic' */
    /* VariantMerge generated from: '<S175>/VariantSource2' incorporates:
     *  Product: '<S189>/Product'
     *  SignalConversion generated from: '<S175>/VariantSource2'
     */
    TTQR_ac_B.VariantMerge_For_Variant_Source = rtb_TmpSignalConversionAtVaTS_0;

    /* End of Outputs for SubSystem: '<S175>/TTQC_SumTrqStatic' */
#endif

    /* End of SignalConversion generated from: '<S175>/VariantSource2' */

    /* Update for UnitDelay: '<S129>/Unit Delay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE = rtb_Switch_g;

    /* Update for UnitDelay: '<S108>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE = rtb_LeTTQC_M_HTDRLoadTorqFrontC;

    /* Update for UnitDelay: '<S111>/Unit Delay1' */
    TTQR_ac_DW.UnitDelay1_DSTATE = rtb_Switch_i;

    /* Update for UnitDelay: '<S130>/Unit Delay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE_o = rtb_Switch_m;

    /* Update for UnitDelay: '<S111>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_h1;

    /* Update for UnitDelay: '<S157>/UnitDelay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE_i = rtb_Switch1_o;

    /* Update for UnitDelay: '<S109>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_k = rtb_TmpSignalConversionAtVeVTVR;

    /* Update for UnitDelay: '<S140>/UnitDelay1' */
    TTQR_ac_DW.UnitDelay1_DSTATE_e = rtb_Switch_h_idx_0;

    /* Update for UnitDelay: '<S158>/UnitDelay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE_c = rtb_Switch1_f;

    /* Update for UnitDelay: '<S188>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_f5 = rtb_OR1_g;

    /* Update for UnitDelay: '<S235>/Unit Delay' incorporates:
     *  Switch: '<S235>/Switch3'
     */
    TTQR_ac_DW.UnitDelay_DSTATE_e4[0] = VaTTQC_M_TiArb[0];
    TTQR_ac_DW.UnitDelay_DSTATE_e4[1] = VaTTQC_M_TiArb[1];

    /* Update for UnitDelay: '<S176>/UnitDelay' incorporates:
     *  Constant: '<S176>/TRUEConstant'
     */
    TTQR_ac_DW.UnitDelay_DSTATE_eeg = true;
    for (i = 0; i < 2; i++)
    {
        /* Update for UnitDelay: '<S235>/Unit Delay1' */
        TTQR_ac_DW.UnitDelay1_DSTATE_d[i] = rtb_Switch[i];

        /* Update for UnitDelay: '<S228>/Unit Delay' */
        TTQR_ac_DW.UnitDelay_DSTATE_d[i] = rtb_Switch2[i];
    }

    /* Update for UnitDelay: '<S228>/Unit Delay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE_iy = rtb_TmpSignalConversionAtVeTI_n;

    /* Update for UnitDelay: '<S228>/Unit Delay1' incorporates:
     *  Constant: '<S228>/Constant Value5'
     */
    TTQR_ac_DW.UnitDelay1_DSTATE_p = true;

    /* Update for UnitDelay: '<S216>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_h = VeTTQC_M_BlndSubENGCLIterm;

    /* Update for UnitDelay: '<S218>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ez = rtb_TmpSignalConversionAtVeTITR;

    /* Update for UnitDelay: '<S218>/Unit Delay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE_f = rtb_TmpSignalConversionAtVeTI_h;

    /* Update for UnitDelay: '<S218>/Unit Delay1' incorporates:
     *  Constant: '<S218>/Constant Value5'
     */
    TTQR_ac_DW.UnitDelay1_DSTATE_g = true;

    /* Update for UnitDelay: '<S217>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_g = VeTTQC_M_BlndSubNC1CLIterm;

    /* Update for UnitDelay: '<S223>/Unit Delay' */
    TTQR_ac_DW.UnitDelay_DSTATE_ge = rtb_Switch2_e;

    /* Update for UnitDelay: '<S223>/Unit Delay3' */
    TTQR_ac_DW.UnitDelay3_DSTATE_e = rtb_Maximum_k;

    /* Update for UnitDelay: '<S223>/Unit Delay1' incorporates:
     *  Constant: '<S223>/Constant Value5'
     */
    TTQR_ac_DW.UnitDelay1_DSTATE_fu = true;

    /* Update for UnitDelay: '<S140>/UnitDelay' */
    TTQR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_kh;

    /* End of Outputs for SubSystem: '<S2>/TTQC_SumTrqCalc' */
#endif

#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* Inport: '<Root>/VeETQR_M_MinAirFlowMinSparkCapacity' */
    (void)Rte_Read_VeETQR_M_MinAirFlowMinSparkCapacity_Value(&tmpRead_7);

    /* Inport: '<Root>/VeETQR_M_EngCapacityMinRunImmedRed' */
    (void)Rte_Read_VeETQR_M_EngCapacityMinRunImmedRed_Value(&tmpRead_6);

    /* Inport: '<Root>/VeETQR_M_EngCapacityMax' */
    (void)Rte_Read_VeETQR_M_EngCapacityMax_Value(&tmpRead_5);

    /* Inport: '<Root>/VeETQR_M_EngTrqAirflow' */
    (void)Rte_Read_VeETQR_M_EngTrqAirflow_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTDR_M_Tb_Max_Allowed' */
    (void)Rte_Read_VeHTDR_M_Tb_Max_Allowed_Value(&tmpRead_3);

    /* Inport: '<Root>/VeHTDR_M_Tb_Min_Allowed' */
    (void)Rte_Read_VeHTDR_M_Tb_Min_Allowed_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<S2>/TTQC_SumTrqLimits' */
    /* Product: '<S101>/Product4' incorporates:
     *  Product: '<S101>/Product3'
     */
    rtb_TmpSignalConversionAtVeMTQR *= rtb_TmpSignalConversionAtVaTSXR[0];

    /* Sum: '<S101>/Sum2' incorporates:
     *  Product: '<S101>/Product'
     */
    rtb_Switch3[0] = (rtb_TmpSignalConversionAtVaTSXR[3] * tmpRead_5) +
        rtb_TmpSignalConversionAtVeMTQR;
    rtb_Switch3[1] = (rtb_TmpSignalConversionAtVaTSXR[3] * tmpRead_4) +
        rtb_TmpSignalConversionAtVeMTQR;

    /* Sum: '<S101>/Sum2' incorporates:
     *  Product: '<S101>/Product'
     *  Sum: '<S101>/Sum3'
     */
    rtb_TmpSignalConversionAtVeETQR = (rtb_TmpSignalConversionAtVaTSXR[3] *
        rtb_TmpSignalConversionAtVeETQR) + rtb_TmpSignalConversionAtVeMTQR;

    /* Sum: '<S101>/Sum2' */
    rtb_Switch3[2] = rtb_TmpSignalConversionAtVeETQR;

    /* Sum: '<S101>/Sum3' incorporates:
     *  Product: '<S101>/Product1'
     */
    rtb_Sum3[0] = (rtb_TmpSignalConversionAtVaTSXR[3] * tmpRead_7) +
        rtb_TmpSignalConversionAtVeMTQR;
    rtb_Sum3[1] = (rtb_TmpSignalConversionAtVaTSXR[3] * tmpRead_6) +
        rtb_TmpSignalConversionAtVeMTQR;
    rtb_Sum3[2] = rtb_TmpSignalConversionAtVeETQR;

    /* SignalConversion generated from: '<S101>/Product4' */
    rtb_TmpSignalConversionAtVeHS_2[0] = rtb_TmpSignalConversionAtVeHSER;
    rtb_TmpSignalConversionAtVeHS_2[1] = rtb_TmpSignalConversionAtVeHS_l;
    rtb_TmpSignalConversionAtVeHS_2[2] = rtb_TmpSignalConversionAtVeHS_n;

    /* Product: '<S101>/Product4' */
    rtb_TmpSignalConversionAtVaTS_0 = 0.0F;
    for (i = 0; i < 3; i++)
    {
        rtb_TmpSignalConversionAtVaTS_0 += rtb_TmpSignalConversionAtVaTSXR[i + 9]
            * rtb_TmpSignalConversionAtVeHS_2[i];
    }

    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S238>/Constant'
     *  Constant: '<S240>/Constant'
     *  Inport: '<Root>/VeTCPR_M_Clch2_TorqEstMin'
     *  Logic: '<S101>/Logical2'
     *  RelationalOperator: '<S101>/Comparison2'
     *  RelationalOperator: '<S101>/Comparison3'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeHS_i) == CeHSER_e_M2) || (((uint32)
            rtb_TmpSignalConversionAtVeHS_i) == CeHSER_e_G2))
    {
        (void)Rte_Read_VeTCPR_M_Clch2_TorqEstMin_Value(&tmpRead_8);

        /* Sum: '<S101>/Sum' incorporates:
         *  Inport: '<Root>/VeTCPR_M_Clch2_TorqEstMin'
         *  MinMax: '<S101>/MinMax1'
         */
        for (i = 0; i < 3; i++)
        {
            rtb_Sum3[i] = fmaxf(rtb_Sum3[i], tmpRead_8);
        }
    }

    /* End of Switch: '<S101>/Switch1' */

    /* Sum: '<S101>/Sum1' incorporates:
     *  Product: '<S101>/Product2'
     */
    rtb_TmpSignalConversionAtVeHSER = rtb_TmpSignalConversionAtVaTSXR[1] *
        tmpRead_2;
    for (i = 0; i < 3; i++)
    {
        /* Sum: '<S101>/Sum' incorporates:
         *  Product: '<S101>/Product4'
         *  Sum: '<S101>/Sum1'
         */
        rtb_Sum3[i] = (rtb_Sum3[i] + rtb_TmpSignalConversionAtVaTS_0) +
            rtb_TmpSignalConversionAtVeHSER;
    }

    /* Gain: '<S244>/Gain' */
    TTQR_ac_B.Gain = rtb_Sum3[0];

    /* Gain: '<S245>/Gain' */
    TTQR_ac_B.Gain_i = rtb_Sum3[1];

    /* Gain: '<S246>/Gain' */
    TTQR_ac_B.Gain_f = rtb_Sum3[2];

    /* Switch: '<S101>/Switch' incorporates:
     *  Constant: '<S237>/Constant'
     *  Constant: '<S239>/Constant'
     *  Inport: '<Root>/VeTCPR_M_Clch2_TorqEstMax'
     *  Logic: '<S101>/Logical1'
     *  RelationalOperator: '<S101>/Comparison1'
     *  RelationalOperator: '<S101>/Comparison4'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeHS_i) == CeHSER_e_M2) || (((uint32)
            rtb_TmpSignalConversionAtVeHS_i) == CeHSER_e_G2))
    {
        (void)Rte_Read_VeTCPR_M_Clch2_TorqEstMax_Value(&tmpRead_9);

        /* Sum: '<S101>/Sum' incorporates:
         *  Inport: '<Root>/VeTCPR_M_Clch2_TorqEstMax'
         *  MinMax: '<S101>/MinMax'
         */
        for (i = 0; i < 3; i++)
        {
            rtb_Sum3[i] = fminf(rtb_Switch3[i], tmpRead_9);
        }
    }
    else
    {
        /* Sum: '<S101>/Sum' */
        for (i = 0; i < 3; i++)
        {
            rtb_Sum3[i] = rtb_Switch3[i];
        }
    }

    /* End of Switch: '<S101>/Switch' */

    /* Sum: '<S101>/Sum' incorporates:
     *  Product: '<S101>/Product2'
     *  Product: '<S101>/Product4'
     */
    rtb_TmpSignalConversionAtVeHSER = (rtb_TmpSignalConversionAtVaTSXR[1] *
        tmpRead_3) + rtb_TmpSignalConversionAtVaTS_0;
    for (i = 0; i < 3; i++)
    {
        /* Sum: '<S101>/Sum' */
        rtb_Sum3[i] += rtb_TmpSignalConversionAtVeHSER;
    }

    /* Gain: '<S247>/Gain' */
    TTQR_ac_B.Gain_l = rtb_Sum3[0];

    /* Gain: '<S248>/Gain' */
    TTQR_ac_B.Gain_p = rtb_Sum3[1];

    /* Gain: '<S249>/Gain' */
    TTQR_ac_B.Gain_c = rtb_Sum3[2];

    /* SignalConversion generated from: '<S101>/VeTTQC_b_EngTrq_Enbl_Rq_TCM' incorporates:
     *  Constant: '<S241>/Calib'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_b_EngT_d = KeTTQR_b_EngTrq_Enbl_Rq_TCM;

    /* SignalConversion generated from: '<S101>/VeTTQC_e_GrMax_Rq' incorporates:
     *  Constant: '<S242>/Calib'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMa_h = KeTTQR_e_GrMax_Rq;

    /* SignalConversion generated from: '<S101>/VeTTQC_e_GrMin_Rq' incorporates:
     *  Constant: '<S243>/Calib'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMi_o = KeTTQR_e_GrMin_Rq;

    /* End of Outputs for SubSystem: '<S2>/TTQC_SumTrqLimits' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S2>/TTQC_M_CmndLoadTrqFrnt' incorporates:
     *  SignalConversion generated from: '<S2>/TTQC_M_EngP1SumTrqAct'
     *  SignalConversion generated from: '<S2>/TTQC_M_EngP1SumTrqReq'
     *  SignalConversion generated from: '<S2>/TTQC_M_SumTrqAct_SEM'
     *  SignalConversion generated from: '<S2>/TTQC_M_SumTrqStatic'
     *  SignalConversion generated from: '<S2>/TTQC_M_SumTrqStaticNoCL'
     *  SignalConversion generated from: '<S2>/TTQC_b_SumTrqAct_SEM_FA'
     *  SignalConversion generated from: '<S2>/TTQC_b_SumTrqStaticFA'
     *  SignalConversion generated from: '<S2>/VeTTQC_M_HTDRLoadTorqFrontCmnd'
     */
#if Rte_SysCon_Variant_TTQR_FUNC

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Cmnd' */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Cmnd_Value(TTQR_ac_B.Gain_b);

    /* Outport: '<Root>/VeTTQR_M_EngP1SumTrqAct' */
    (void)Rte_Write_VeTTQR_M_EngP1SumTrqAct_Value(TTQR_ac_B.Sum1);

    /* Outport: '<Root>/VeTTQR_M_EngP1SumTrqReq' */
    (void)Rte_Write_VeTTQR_M_EngP1SumTrqReq_Value(TTQR_ac_B.Sum2);

    /* Outport: '<Root>/VeTTQR_M_SumTrqAct_SEM' */
    (void)Rte_Write_VeTTQR_M_SumTrqAct_SEM_Value(TTQR_ac_B.Gain_a);

    /* Outport: '<Root>/VeTTQR_M_SumTrqStatic' */
    (void)Rte_Write_VeTTQR_M_SumTrqStatic_Value(TTQR_ac_B.Gain_o);

    /* Outport: '<Root>/VeTTQR_M_SumTrqStaticNoCL' */
    (void)Rte_Write_VeTTQR_M_SumTrqStaticNoCL_Value
        (TTQR_ac_B.VariantMerge_For_Variant_Source);

    /* Outport: '<Root>/VeTTQR_b_SumTrqAct_SEM_FA' */
    (void)Rte_Write_VeTTQR_b_SumTrqAct_SEM_FA_Value(TTQR_ac_B.Logical1);

    /* Outport: '<Root>/VeTTQR_b_SumTrqStaticFA' */
    (void)Rte_Write_VeTTQR_b_SumTrqStaticFA_Value(TTQR_ac_B.Gain_ay);

    /* Outport: '<Root>/VeTTQR_M_HTDRLoadTorqFrontCmnd' */
    (void)Rte_Write_VeTTQR_M_HTDRLoadTorqFrontCmnd_Value(TTQR_ac_B.Gain_l0);

#endif

    /* End of SignalConversion generated from: '<S2>/TTQC_M_CmndLoadTrqFrnt' */

    /* SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMaxFSO' incorporates:
     *  SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMaxFast'
     *  SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMaxSlow'
     *  SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMinFSO'
     *  SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMinFast'
     *  SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMinSlow'
     *  SignalConversion generated from: '<S2>/VeTTQC_b_EngTrq_Enbl_Rq_TCM'
     *  SignalConversion generated from: '<S2>/VeTTQC_e_GrMax_Rq'
     *  SignalConversion generated from: '<S2>/VeTTQC_e_GrMin_Rq'
     */
#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMaxFSO' */
    (void)Rte_Write_VeTTQR_M_SumTorqueMaxFSO_Value(TTQR_ac_B.Gain_c);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMaxFast' */
    (void)Rte_Write_VeTTQR_M_SumTorqueMaxFast_Value(TTQR_ac_B.Gain_p);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMaxSlow' */
    (void)Rte_Write_VeTTQR_M_SumTorqueMaxSlow_Value(TTQR_ac_B.Gain_l);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMinFSO' */
    (void)Rte_Write_VeTTQR_M_SumTorqueMinFSO_Value(TTQR_ac_B.Gain_f);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMinFast' */
    (void)Rte_Write_VeTTQR_M_SumTorqueMinFast_Value(TTQR_ac_B.Gain_i);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMinSlow' */
    (void)Rte_Write_VeTTQR_M_SumTorqueMinSlow_Value(TTQR_ac_B.Gain);

    /* Outport: '<Root>/VeTTQR_b_EngTrq_Enbl_Rq_TCM' */
    (void)Rte_Write_VeTTQR_b_EngTrq_Enbl_Rq_TCM_Value
        (TTQR_ac_B.OutportBufferForVeTTQC_b_EngT_d);

    /* Outport: '<Root>/VeTTQR_e_GrMax_Rq' incorporates:
     *  SignalConversion generated from: '<S101>/VeTTQC_e_GrMax_Rq'
     */
    (void)Rte_Write_VeTTQR_e_GrMax_Rq_Value
        (TTQR_ac_B.OutportBufferForVeTTQC_e_GrMa_h);

    /* Outport: '<Root>/VeTTQR_e_GrMin_Rq' incorporates:
     *  SignalConversion generated from: '<S101>/VeTTQC_e_GrMin_Rq'
     */
    (void)Rte_Write_VeTTQR_e_GrMin_Rq_Value
        (TTQR_ac_B.OutportBufferForVeTTQC_e_GrMi_o);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTTQC_M_SumTorqueMaxFSO' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
}

/* Output function */
FUNC(void, TTQR_CODE) TTQR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TTQR_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitTTQI_Output'
     */
    /* SignalConversion generated from: '<S250>/TTQR_M_SumTrqStatic' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumTrqSt = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_b_SumTrqStaticFA' incorporates:
     *  Constant: '<S256>/Calib'
     */
    TTQR_ac_B.OutportBufferForTTQR_b_SumTrqSt = KeTTQR_b_SumTrqStFAInit;

    /* SignalConversion generated from: '<S250>/TTQR_M_SumTrqAct_SEM' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumTrqAc = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_b_SumTrqAct_SEM_FA' incorporates:
     *  Constant: '<S255>/Calib'
     */
    TTQR_ac_B.OutportBufferForTTQR_b_SumTrqAc = KeTTQR_b_SumTrqActFAInit;

    /* SignalConversion generated from: '<S250>/TTQC_M_EngP1SumTrqAct' */
    TTQR_ac_B.OutportBufferForTTQC_M_EngP1Sum = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_EngP1SumTrqReq' */
    TTQR_ac_B.OutportBufferForTTQR_M_EngP1Sum = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_LoadTorqFront_Cmnd' */
    TTQR_ac_B.OutportBufferForTTQR_M_LoadTorq = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQC_M_HTDRLoadTorqFront_Cmnd' */
    TTQR_ac_B.OutportBufferForTTQC_M_HTDRLoad = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_LoadTorqFront_Max' */
    TTQR_ac_B.OutportBufferForTTQR_M_LoadTo_d = 99999.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_LoadTorqFront_Min' */
    TTQR_ac_B.OutportBufferForTTQR_M_LoadTo_l = -99999.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_LoadTorqFront_Opt' */
    TTQR_ac_B.OutportBufferForTTQR_M_LoadT_da = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_SumMaxTrqDsrd' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumMaxTr = 99999.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_TCMSumTrqReqSlow' */
    TTQR_ac_B.OutportBufferForTTQR_M_TCMSumTr = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_TCMSumTrqReqFast' */
    TTQR_ac_B.OutportBufferForTTQR_M_TCMSum_e = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_b_TransTrqReqFstEnbl' */
    TTQR_ac_B.OutportBufferForTTQR_b_TransTrq = false;

    /* SignalConversion generated from: '<S250>/TTQR_b_TransTrqReqSlwEnbl' */
    TTQR_ac_B.OutportBufferForTTQR_b_TransT_a = false;

    /* SignalConversion generated from: '<S250>/TTQR_M_SumTrqStaticNoCL' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumTrq_h = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_LoadFrontOptArb_xShapingSEM' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_LoadFr = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_LoadFrontOptExp' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_Load_d = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_LoadFrontOpt_xShaping' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_Load_h = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_LoadFrontOptShaped' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_Load_i = 0.0F;

    /* SignalConversion generated from: '<S250>/TTQR_M_SumMinTrqDsrd' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumMinTr = -99999.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  Constant: '<S251>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQR_e_TCMTrq = TTQR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S250>/VeTTQR_e_TCMTrqCntrlMdSlw' incorporates:
     *  Constant: '<S252>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQR_e_TCMT_p = TTQR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTrqMinPwrTrn' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumTrq = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTrqMin_Cruise' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_m = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTorqueMinSlow' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumTor = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTorqueMinFast' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_j = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTorqueMinFSO' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_f = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTorqueMaxSlow' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_d = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTorqueMaxFast' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_p = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQR_M_SumTorqueMaxFSO' */
    TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_k = 0.0F;

    /* SignalConversion generated from: '<S250>/VeTTQC_b_EngTrq_Enbl_Rq_TCM' */
    TTQR_ac_B.OutportBufferForVeTTQC_b_EngTrq = false;

    /* SignalConversion generated from: '<S250>/VeTTQC_e_GrMax_Rq' incorporates:
     *  Constant: '<S253>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMax_ = TTQR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S250>/VeTTQC_e_GrMin_Rq' incorporates:
     *  Constant: '<S254>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMin_ = TTQR_ac_ConstB.Constant_k;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeTTQR_M_EngP1SumTrqAct' incorporates:
     *  SignalConversion generated from: '<S3>/TTQC_M_EngP1SumTrqAct'
     */
    (void)Rte_Write_VeTTQR_M_EngP1SumTrqAct_Value
        (TTQR_ac_B.OutportBufferForTTQC_M_EngP1Sum);

    /* Outport: '<Root>/VeTTQR_M_HTDRLoadTorqFrontCmnd' incorporates:
     *  SignalConversion generated from: '<S3>/TTQC_M_HTDRLoadTorqFront_Cmnd'
     */
    (void)Rte_Write_VeTTQR_M_HTDRLoadTorqFrontCmnd_Value
        (TTQR_ac_B.OutportBufferForTTQC_M_HTDRLoad);

    /* Outport: '<Root>/VeTTQR_M_EngP1SumTrqReq' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_EngP1SumTrqReq'
     */
    (void)Rte_Write_VeTTQR_M_EngP1SumTrqReq_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_EngP1Sum);

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Cmnd' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_LoadTorqFront_Cmnd'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Cmnd_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_LoadTorq);

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Max' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_LoadTorqFront_Max'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Max_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_LoadTo_d);

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Min' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_LoadTorqFront_Min'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Min_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_LoadTo_l);

    /* Outport: '<Root>/VeTTQR_M_LoadTorqFront_Opt' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_LoadTorqFront_Opt'
     */
    (void)Rte_Write_VeTTQR_M_LoadTorqFront_Opt_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_LoadT_da);

    /* Outport: '<Root>/VeTTQR_M_SumMaxTrqDsrd' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_SumMaxTrqDsrd'
     */
    (void)Rte_Write_VeTTQR_M_SumMaxTrqDsrd_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_SumMaxTr);

    /* Outport: '<Root>/VeTTQR_M_SumMinTrqDsrd' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_SumMinTrqDsrd'
     */
    (void)Rte_Write_VeTTQR_M_SumMinTrqDsrd_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_SumMinTr);

    /* Outport: '<Root>/VeTTQR_M_SumTrqAct_SEM' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_SumTrqAct_SEM'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqAct_SEM_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_SumTrqAc);

    /* Outport: '<Root>/VeTTQR_M_SumTrqStatic' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_SumTrqStatic'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqStatic_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_SumTrqSt);

    /* Outport: '<Root>/VeTTQR_M_SumTrqStaticNoCL' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_SumTrqStaticNoCL'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqStaticNoCL_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_SumTrq_h);

    /* Outport: '<Root>/VeTTQR_M_TCMSumTrqReqFast' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_TCMSumTrqReqFast'
     */
    (void)Rte_Write_VeTTQR_M_TCMSumTrqReqFast_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_TCMSum_e);

    /* Outport: '<Root>/VeTTQR_M_TCMSumTrqReqSlow' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_M_TCMSumTrqReqSlow'
     */
    (void)Rte_Write_VeTTQR_M_TCMSumTrqReqSlow_Value
        (TTQR_ac_B.OutportBufferForTTQR_M_TCMSumTr);

    /* Outport: '<Root>/VeTTQR_b_SumTrqAct_SEM_FA' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_b_SumTrqAct_SEM_FA'
     */
    (void)Rte_Write_VeTTQR_b_SumTrqAct_SEM_FA_Value
        (TTQR_ac_B.OutportBufferForTTQR_b_SumTrqAc);

    /* Outport: '<Root>/VeTTQR_b_SumTrqStaticFA' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_b_SumTrqStaticFA'
     */
    (void)Rte_Write_VeTTQR_b_SumTrqStaticFA_Value
        (TTQR_ac_B.OutportBufferForTTQR_b_SumTrqSt);

    /* Outport: '<Root>/VeTTQR_b_TransTrqReqFstEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_b_TransTrqReqFstEnbl'
     */
    (void)Rte_Write_VeTTQR_b_TransTrqReqFstEnbl_Value
        (TTQR_ac_B.OutportBufferForTTQR_b_TransTrq);

    /* Outport: '<Root>/VeTTQR_b_TransTrqReqSlwEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/TTQR_b_TransTrqReqSlwEnbl'
     */
    (void)Rte_Write_VeTTQR_b_TransTrqReqSlwEnbl_Value
        (TTQR_ac_B.OutportBufferForTTQR_b_TransT_a);

    /* Outport: '<Root>/VeTTQR_b_EngTrq_Enbl_Rq_TCM' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQC_b_EngTrq_Enbl_Rq_TCM'
     */
    (void)Rte_Write_VeTTQR_b_EngTrq_Enbl_Rq_TCM_Value
        (TTQR_ac_B.OutportBufferForVeTTQC_b_EngTrq);

    /* Outport: '<Root>/VeTTQR_e_GrMax_Rq' incorporates:
     *  SignalConversion generated from: '<S250>/VeTTQC_e_GrMax_Rq'
     *  SignalConversion generated from: '<S3>/VeTTQC_e_GrMax_Rq'
     */
    (void)Rte_Write_VeTTQR_e_GrMax_Rq_Value
        (TTQR_ac_B.OutportBufferForVeTTQC_e_GrMax_);

    /* Outport: '<Root>/VeTTQR_e_GrMin_Rq' incorporates:
     *  SignalConversion generated from: '<S250>/VeTTQC_e_GrMin_Rq'
     *  SignalConversion generated from: '<S3>/VeTTQC_e_GrMin_Rq'
     */
    (void)Rte_Write_VeTTQR_e_GrMin_Rq_Value
        (TTQR_ac_B.OutportBufferForVeTTQC_e_GrMin_);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOptArb_xShapingSEM' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_LoadFrontOptArb_xShapingSEM'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOptArb_xShapingSEM_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_LoadFr);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOptExp' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_LoadFrontOptExp'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOptExp_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_Load_d);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOptShaped' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_LoadFrontOptShaped'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOptShaped_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_Load_i);

    /* Outport: '<Root>/VeTTQR_M_LoadFrontOpt_xShaping' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_LoadFrontOpt_xShaping'
     */
    (void)Rte_Write_VeTTQR_M_LoadFrontOpt_xShaping_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_Load_h);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMaxFSO' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTorqueMaxFSO'
     */
    (void)Rte_Write_VeTTQR_M_SumTorqueMaxFSO_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_k);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMaxFast' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTorqueMaxFast'
     */
    (void)Rte_Write_VeTTQR_M_SumTorqueMaxFast_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_p);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMaxSlow' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTorqueMaxSlow'
     */
    (void)Rte_Write_VeTTQR_M_SumTorqueMaxSlow_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_d);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMinFSO' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTorqueMinFSO'
     */
    (void)Rte_Write_VeTTQR_M_SumTorqueMinFSO_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_f);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMinFast' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTorqueMinFast'
     */
    (void)Rte_Write_VeTTQR_M_SumTorqueMinFast_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_j);

    /* Outport: '<Root>/VeTTQR_M_SumTorqueMinSlow' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTorqueMinSlow'
     */
    (void)Rte_Write_VeTTQR_M_SumTorqueMinSlow_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumTor);

    /* Outport: '<Root>/VeTTQR_M_SumTrqMinPwrTrn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTrqMinPwrTrn'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqMinPwrTrn_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumTrq);

    /* Outport: '<Root>/VeTTQR_M_SumTrqMin_Cruise' incorporates:
     *  SignalConversion generated from: '<S3>/VeTTQR_M_SumTrqMin_Cruise'
     */
    (void)Rte_Write_VeTTQR_M_SumTrqMin_Cruise_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_M_SumT_m);

    /* Outport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  SignalConversion generated from: '<S250>/VeTTQR_e_TCMTrqCntrlMdFst'
     *  SignalConversion generated from: '<S3>/VeTTQR_e_TCMTrqCntrlMdFst'
     */
    (void)Rte_Write_VeTTQR_e_TCMTrqCntrlMdFst_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_e_TCMTrq);

    /* Outport: '<Root>/VeTTQR_e_TCMTrqCntrlMdSlw' incorporates:
     *  SignalConversion generated from: '<S250>/VeTTQR_e_TCMTrqCntrlMdSlw'
     *  SignalConversion generated from: '<S3>/VeTTQR_e_TCMTrqCntrlMdSlw'
     */
    (void)Rte_Write_VeTTQR_e_TCMTrqCntrlMdSlw_Value
        (TTQR_ac_B.OutportBufferForVeTTQR_e_TCMT_p);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TTQR_CODE) TTQR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TTQR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/InitTTQI_Output'
     */
    /* SystemInitialize for SignalConversion generated from: '<S250>/TTQR_b_SumTrqStaticFA' incorporates:
     *  Constant: '<S256>/Calib'
     */
    TTQR_ac_B.OutportBufferForTTQR_b_SumTrqSt = KeTTQR_b_SumTrqStFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S250>/TTQR_b_SumTrqAct_SEM_FA' incorporates:
     *  Constant: '<S255>/Calib'
     */
    TTQR_ac_B.OutportBufferForTTQR_b_SumTrqAc = KeTTQR_b_SumTrqActFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S250>/TTQR_M_LoadTorqFront_Max' */
    TTQR_ac_B.OutportBufferForTTQR_M_LoadTo_d = 99999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S250>/TTQR_M_LoadTorqFront_Min' */
    TTQR_ac_B.OutportBufferForTTQR_M_LoadTo_l = -99999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S250>/TTQR_M_SumMaxTrqDsrd' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumMaxTr = 99999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S250>/TTQR_M_SumMinTrqDsrd' */
    TTQR_ac_B.OutportBufferForTTQR_M_SumMinTr = -99999.0F;

    /* SystemInitialize for SignalConversion generated from: '<S250>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  Constant: '<S251>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQR_e_TCMTrq = TTQR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S250>/VeTTQR_e_TCMTrqCntrlMdSlw' incorporates:
     *  Constant: '<S252>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQR_e_TCMT_p = TTQR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S250>/VeTTQC_e_GrMax_Rq' incorporates:
     *  Constant: '<S253>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMax_ = TTQR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S250>/VeTTQC_e_GrMin_Rq' incorporates:
     *  Constant: '<S254>/Constant'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMin_ = TTQR_ac_ConstB.Constant_k;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/TTQR_MedTEB3'
     */
#if Rte_SysCon_Variant_TTQR_FUNC || Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_TTQR_SingleMtrSumTrqLim

    /* SystemInitialize for Function Call SubSystem: '<S2>/TTQC_SumTrqLimits' */
    /* SystemInitialize for SignalConversion generated from: '<S101>/VeTTQC_b_EngTrq_Enbl_Rq_TCM' incorporates:
     *  Constant: '<S241>/Calib'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_b_EngT_d = KeTTQR_b_EngTrq_Enbl_Rq_TCM;

    /* SystemInitialize for SignalConversion generated from: '<S101>/VeTTQC_e_GrMax_Rq' incorporates:
     *  Constant: '<S242>/Calib'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMa_h = KeTTQR_e_GrMax_Rq;

    /* SystemInitialize for SignalConversion generated from: '<S101>/VeTTQC_e_GrMin_Rq' incorporates:
     *  Constant: '<S243>/Calib'
     */
    TTQR_ac_B.OutportBufferForVeTTQC_e_GrMi_o = KeTTQR_e_GrMin_Rq;

    /* End of SystemInitialize for SubSystem: '<S2>/TTQC_SumTrqLimits' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */

    /* SystemInitialize for Outport: '<Root>/VeTTQR_e_TCMTrqCntrlMdFst' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    (void)Rte_Write_VeTTQR_e_TCMTrqCntrlMdFst_Value(CeTINR_e_None);

    /* SystemInitialize for Outport: '<Root>/VeTTQR_e_TCMTrqCntrlMdSlw' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    (void)Rte_Write_VeTTQR_e_TCMTrqCntrlMdSlw_Value(CeTINR_e_None);

    /* SystemInitialize for Outport: '<Root>/VeTTQR_e_GrMax_Rq' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    (void)Rte_Write_VeTTQR_e_GrMax_Rq_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTTQR_e_GrMin_Rq' incorporates:
     *  Merge: '<Root>/Merge_35'
     */
    (void)Rte_Write_VeTTQR_e_GrMin_Rq_Value(CeTRNR_e_Neutral);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
