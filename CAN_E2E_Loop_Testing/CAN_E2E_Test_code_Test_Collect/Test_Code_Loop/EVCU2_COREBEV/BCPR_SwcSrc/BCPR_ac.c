/*
 * File: BCPR_ac.c
 *
 * Code generated for Simulink model 'BCPR_ac'.
 *
 * Model version                  : 9.34
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:08:11 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "BCPR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_BCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) HeBCPR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S102>/Calib'
                                                                      * '<S103>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT)
    KaBCPR_b_EngStrtStpStUseLearnedBeltCapacity[29] =
{
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0
} ;                                    /* Referenced by: '<S56>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KaBCPR_b_PrllRngEqn[10] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KaBCPR_b_PrllSteadyState[16] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltCapMaxInit = 0.0F;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltCapMaxLowerLmt = 1.0F;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltCapMinInit = 0.0F;/* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltCapMinUpperLmt =
    -1.0F;                             /* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltTrqMaxHTDR = 500.0F;/* Referenced by: '<S104>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltTrqMaxOITR = 500.0F;/* Referenced by: '<S105>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltTrqMaxVTVR = 500.0F;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltTrqMinHTDR = -500.0F;/* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltTrqMinOITR = -500.0F;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_M_BeltTrqMinVTVR = -500.0F;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_BeltSlipSpd_FA = 0;/* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT)
    KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR = 0;/* Referenced by:
                                             * '<S110>/KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR'
                                             * '<S111>/KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR'
                                             */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_CntrlTcRMin_OvrdTo0_OnRst
    = 1;                               /* Referenced by:
                                        * '<S112>/KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst'
                                        * '<S113>/KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_CntrlTcR_ApplyLdOfstOnR =
    0;                                 /* Referenced by:
                                        * '<S114>/KeBCPR_b_CntrlTcR_ApplyLdOfstOnR'
                                        * '<S115>/KeBCPR_b_CntrlTcR_ApplyLdOfstOnR'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_CntrlTcR_OvrdTo0_OnRlsd =
    1;                                 /* Referenced by:
                                        * '<S116>/KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd'
                                        * '<S117>/KeTCPR_b_CntrlTcR_OvrdTo0_OnRlsd'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_CntrlTcR_OvrdTo0_OnRst =
    1;                                 /* Referenced by:
                                        * '<S118>/KeTCPR_b_CntrlTcR_OvrdTo0_OnRst'
                                        * '<S119>/KeTCPR_b_CntrlTcR_OvrdTo0_OnRst'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_EnblBeltSlip_CANSpeed = 1;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_EnblBeltTempBasedBeltCap =
    1;                                 /* Referenced by: '<S13>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_NegSlipDetected = 0;/* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltSlipSpd = 0;/* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltSlipSpdFilt = 0;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltSlipSpd_FA = 0;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltTrqMaxHTDR = 0;/* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltTrqMaxOITR = 0;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltTrqMaxVTVR = 0;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltTrqMinHTDR = 0;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltTrqMinOITR = 0;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdBeltTrqMinVTVR = 0;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdInputSpeed = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdNegSlipDetected = 0;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_OvrdPosSlipDetected = 0;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_PosSlipDetected = 0;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT)
    KeBCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd = 0;/* Referenced by:
                                              * '<S130>/KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd'
                                              * '<S131>/KeTCPR_b_PredCntrlTcR_OvrdTo0_OnRlsd'
                                              */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT)
    KeBCPR_b_UseLrnCpBasedOnRngEqnAllwd = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT)
    KeBCPR_b_UseRawBeltSlipForBeltOffload = 0;/* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_UseRawEngSpd = 1;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(boolean, BCPR_VAR_INIT) KeBCPR_b_UseRawMtrASpd = 1;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_BeltCapMaxRampRateLD =
    -100.0F;                           /* Referenced by: '<S60>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_BeltCapMaxRampRateLU =
    100.0F;                            /* Referenced by: '<S61>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_BeltCapMinRampRateLD =
    -100.0F;                           /* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_BeltCapMinRampRateLU =
    100.0F;                            /* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_NegSlipPwrOffTcR_RmpRt =
    100.0F;                            /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_NegSlipPwrOnTcR_RmpRt =
    100.0F;                            /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_NegSlipRcvTcR_RmpRt =
    -100.0F;                           /* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_NegSlipRcvTcR_RmpRtFast =
    -1000.0F;                          /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_PosSlipPwrOffTcR_RmpRt =
    100.0F;                            /* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_PosSlipPwrOnTcR_RmpRt =
    100.0F;                            /* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_PosSlipRcvTcR_RmpRt =
    -100.0F;                           /* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_dM_PosSlipRcvTcR_RmpRtFast =
    -1000.0F;                          /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_k_BeltSlipFilterCoeff =
    0.3935F;                           /* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_n_BeltSlipSpd = 0.0F;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_n_BeltSlipSpdFilt = 0.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_n_InputSpeed = 0.0F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_n_NegSlip_StblStSlipDtctThresh = 100.0F;/* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_n_NegSlip_StblStSlipDtctThreshHT = 200.0F;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_n_PosSlip_StblStSlipDtctThresh = 100.0F;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_n_PosSlip_StblStSlipDtctThreshHT = 200.0F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_t_CntrlTcRMin_LdRmpHldffOnR
    = 0.05F;                           /* Referenced by:
                                        * '<S144>/KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR'
                                        * '<S145>/KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_t_CntrlTcRMin_RmpHldffOnR =
    0.1F;                              /* Referenced by:
                                        * '<S146>/KeTCPR_t_CntrlTcRMin_RmpHldffOnR'
                                        * '<S147>/KeTCPR_t_CntrlTcRMin_RmpHldffOnR'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_t_CntrlTcR_LdRmpHldffOnR =
    0.05F;                             /* Referenced by:
                                        * '<S148>/KeTCPR_t_CntrlTcR_LdRmpHldffOnR'
                                        * '<S149>/KeTCPR_t_CntrlTcR_LdRmpHldffOnR'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_t_CntrlTcR_LeadTmForOfst =
    0.075F;                            /* Referenced by:
                                        * '<S150>/KeTCPR_t_CntrlTcR_LeadTmForOfst'
                                        * '<S151>/KeTCPR_t_CntrlTcR_LeadTmForOfst'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_t_CntrlTcR_RmpHldffOnR =
    0.1F;                              /* Referenced by:
                                        * '<S152>/KeTCPR_t_CntrlTcR_RmpHldffOnR'
                                        * '<S153>/KeTCPR_t_CntrlTcR_RmpHldffOnR'
                                        */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KeBCPR_t_DlydRisingEdgeTmr = 30.0F;/* Referenced by:
                                                                      * '<S154>/KeTCPR_t_DlydRisingEdgeTmr'
                                                                      * '<S155>/KeTCPR_t_DlydRisingEdgeTmr'
                                                                      */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_t_NegSlip_StblStSlipDtctTime = 0.025F;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_t_NegSlip_StblStSlipDtctTimeHT = 0.25F;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_t_NegSlip_StblStSlipRcvryTime = 0.1F;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_t_PosSlip_StblStSlipDtctTime = 0.025F;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_t_PosSlip_StblStSlipDtctTimeHT = 0.025F;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT)
    KeBCPR_t_PosSlip_StblStSlipRcvryTime = 0.1F;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KtBCPR_M_BeltCapMaxDflt[6] =
{
    500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 500.0F
} ;                                    /* Referenced by: '<S14>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KtBCPR_M_BeltCapMaxPrll[6] =
{
    500.0F, 500.0F, 500.0F, 500.0F, 500.0F, 500.0F
} ;                                    /* Referenced by: '<S15>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KtBCPR_M_BeltCapMinDflt[6] =
{
    -500.0F, -500.0F, -500.0F, -50.0F, -500.0F, -500.0F
} ;                                    /* Referenced by: '<S16>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KtBCPR_M_BeltCapMinPrll[6] =
{
    -500.0F, -500.0F, -500.0F, -500.0F, -500.0F, -500.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KxBCPR_M_BeltCapMaxDflt[6] =
{
    -50.0F, 0.0F, 10.0F, 30.0F, 50.0F, 110.0F
} ;                                    /* Referenced by: '<S14>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KxBCPR_M_BeltCapMaxPrll[6] =
{
    -50.0F, 0.0F, 10.0F, 30.0F, 50.0F, 110.0F
} ;                                    /* Referenced by: '<S15>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KxBCPR_M_BeltCapMinDflt[6] =
{
    -50.0F, 0.0F, 10.0F, 30.0F, 50.0F, 110.0F
} ;                                    /* Referenced by: '<S16>/Vector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static volatile CONST(float32, BCPR_VAR_INIT) KxBCPR_M_BeltCapMinPrll[6] =
{
    -50.0F, 0.0F, 10.0F, 30.0F, 50.0F, 110.0F
} ;                                    /* Referenced by: '<S17>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_BCPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltCapMaxCorrected;/* '<S50>/Sum1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltCapMaxOpenLoopPred;/* '<S9>/Switch1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltCapMaxOpenLoopTact;/* '<S7>/Switch1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltCapMinCorrected;/* '<S50>/Sum2' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltCapMinOpenLoopPred;/* '<S10>/Switch1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltCapMinOpenLoopTact;/* '<S8>/Switch1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltTrqMaxOITR;/* '<S197>/Gain' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltTrqMaxVTVR;/* '<S192>/Merge' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltTrqMinOITR;/* '<S316>/Merge1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_M_BeltTrqMinVTVR;/* '<S317>/Merge1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_BeltSlipSpd_FA;/* '<S24>/Logical1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_ChngInSpd_EngOff;/* '<S19>/Logical6' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_ChngInSpd_EngRun;/* '<S19>/Logical1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_IdleSpeed_EngOff;/* '<S19>/Logical7' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_NegSlipDetected;/* '<S320>/Gain' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_PosSlipDetected;/* '<S195>/Gain' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_PrllPreLeadState;/* '<S4>/Selector1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_PrllRngEqn;/* '<S4>/Selector' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_SpdChngEngSt;/* '<S19>/Logical2' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_UseLearnedBeltCapacityForPred;/* '<S50>/Logical2' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(boolean, BCPR_VAR_INIT) VeBCPC_b_UseLearnedBeltCapacityForTact;/* '<S50>/Logical1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_n_BeltSlipSpd;/* '<S32>/Switch1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPC_n_BeltSlipSpdFilt;/* '<S28>/Switch1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPR_M_BeltCapMax_DS;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPR_M_BeltCapMin_DS;/* '<Root>/DSM_2' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPR_M_BeltTrqMaxHTDR_DS;/* '<Root>/DSM_3' */

#endif

#if Rte_SysCon_Variant_BCPR_1

static VAR(float32, BCPR_VAR_INIT) VeBCPR_M_BeltTrqMinHTDR_DS;/* '<Root>/DSM_4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BCPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BCPR
#include "MemMap.h"

VAR(B_BCPR_ac_T, BCPR_VAR_INIT) BCPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BCPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_BCPR
#include "MemMap.h"

VAR(DW_BCPR_ac_T, BCPR_VAR_INIT) BCPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_BCPR
#include "MemMap.h"
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Calc_FEAD(VAR(float32, AUTOMATIC)
    rtu_Ni, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT) rty_FEAD_Elements, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_FEAD_Elements_n, P2VAR(float32,
    AUTOMATIC, BCPR_VAR_INIT) rty_FEAD_Elements_i);

#endif

#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Passthrough_Coeff(CONST(float32,
    AUTOMATIC) rtu_FEADCoeff_Pssthrgh_In[3], VAR(float32, AUTOMATIC)
    rty_FEADCoeff_Pssthrgh_Out[3]);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_TcRMaxOvrdToZero(P2VAR(float32,
    AUTOMATIC, BCPR_VAR_INIT) rty_TcR_Max);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_TcRMaxNormal(VAR(float32, AUTOMATIC)
    rtu_TcEst, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT) rty_TcR_Max);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstPth_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Max, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Max);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstHld_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_TcR_Max, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT)
    rty_LeadTcR_Max);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Achived_LdRamp(VAR(float32, AUTOMATIC)
    rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Max, P2VAR(float32,
    AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Max);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstPth_Crt_TcRMax_j(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Min, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Min);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstHld_Crt_TcRMax_c(VAR(float32,
    AUTOMATIC) rtu_TcR_Min, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT)
    rty_LeadTcR_Min);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Achived_LdRamp_o(VAR(float32,
    AUTOMATIC) rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Min, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Min);

#endif

#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_BCPC_BeltSlipCalc(void);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

static float32 BCPR_ac_frac(float32 Upper, float32 Lower, float32 Input);

#endif

/*
 * Output and update for enable system: '<S5>/BCPC_BeltSlipCalc'
 * Block description for: '<S5>/BCPC_BeltSlipCalc'
 *   ::CM(HSEC_ClchSlipCalc)
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_BCPC_BeltSlipCalc(void)
{
    float32 rtb_Switch;
    float32 rtb_Switch1;
    TeMSPR_e_MotorSpeedSrc tmpRead_0;
    boolean rtb_OR1;
    boolean tmpRead;

    /* Outputs for Enabled SubSystem: '<S5>/BCPC_BeltSlipCalc' incorporates:
     *  EnablePort: '<S18>/Enable'
     */
    if (BCPR_ac_B.VeBCPC_b_BeltSlipTrigger_e)
    {
        /* Inport: '<Root>/VeMSPR_e_MtrASpd_Src' */
        (void)Rte_Read_VeMSPR_e_MtrASpd_Src_Value(&tmpRead_0);

        /* Inport: '<Root>/VeTISR_b_InputSpeedFA' */
        (void)Rte_Read_VeTISR_b_InputSpeedFA_Value(&rtb_OR1);

        /* Inport: '<Root>/VeMSPR_b_MtrA_SpdFA' */
        (void)Rte_Read_VeMSPR_b_MtrA_SpdFA_Value(&tmpRead);

        /* Inport: '<S18>/Ni' */
        BCPR_ac_B.Ni = BCPR_ac_B.Switch2_l;

        /* Logic: '<S24>/Logical1' */
        VeBCPC_b_BeltSlipSpd_FA = (tmpRead || rtb_OR1);

        /* Outputs for Atomic SubSystem: '<S18>/BCPC_BeltSlipCalc' */
        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S31>/Constant'
         *  Inport: '<Root>/VeMSPR_e_MtrASpd_Src'
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         *  Inport: '<Root>/VeMSPR_n_MtrA_SpdRaw'
         *  Logic: '<S23>/Logical1'
         *  RelationalOperator: '<S23>/Comparison5'
         */
        if ((((uint32)tmpRead_0) != CeMSPR_e_MtrSpSrc_MCP) ||
                (VeBCPC_b_BeltSlipSpd_FA))
        {
            /* Switch: '<S32>/Switch1' incorporates:
             *  Constant: '<S23>/Constant Value'
             */
            VeBCPC_n_BeltSlipSpd = 0.0F;
        }
        else
        {
            (void)Rte_Read_VeMSPR_n_MtrA_SpdRaw_Value(&rtb_Switch1);
            (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&rtb_Switch);

            /* Switch: '<S18>/Switch' incorporates:
             *  Constant: '<S26>/Calib'
             *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
             *  Inport: '<Root>/VeMSPR_n_MtrA_SpdRaw'
             */
            if (KeBCPR_b_UseRawMtrASpd)
            {
                /* Switch: '<S18>/Switch' */
                rtb_Switch = rtb_Switch1;
            }

            /* End of Switch: '<S18>/Switch' */

            /* Outputs for Atomic SubSystem: '<S23>/Protected Division' */
            /* Switch: '<S34>/Switch1' incorporates:
             *  Constant: '<S27>/Calib'
             *  Constant: '<S34>/Constant Value'
             *  Constant: '<S34>/Constant Value1'
             *  Constant: '<S34>/Constant Value2'
             *  Constant: '<S34>/Constant Value3'
             *  Logic: '<S34>/AND'
             *  RelationalOperator: '<S34>/Greater Than or Equal '
             *  RelationalOperator: '<S34>/Greater Than or Equal 1'
             *  RelationalOperator: '<S34>/Not Equal'
             *  RelationalOperator: '<S34>/Not Equal1'
             *  Switch: '<S34>/Switch2'
             *  Switch: '<S34>/Switch3'
             */
            if ((rtb_Switch != 0.0F) && (((float32)
                    Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) != 0.0F))
            {
                /* Switch: '<S34>/Switch1' incorporates:
                 *  Product: '<S34>/Division'
                 */
                rtb_Switch1 = rtb_Switch / ((float32)
                    Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f());
            }
            else if (rtb_Switch > 0.0F)
            {
                /* Switch: '<S34>/Switch2' incorporates:
                 *  Constant: '<S34>/MAXFLOAT'
                 *  Switch: '<S34>/Switch1'
                 */
                rtb_Switch1 = 3.402823466E+38F;
            }
            else if (rtb_Switch < 0.0F)
            {
                /* Switch: '<S34>/Switch3' incorporates:
                 *  Constant: '<S34>/MINFLOAT'
                 *  Switch: '<S34>/Switch1'
                 *  Switch: '<S34>/Switch2'
                 */
                rtb_Switch1 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S34>/Switch1' incorporates:
                 *  Constant: '<S34>/Constant Value4'
                 *  Switch: '<S34>/Switch2'
                 *  Switch: '<S34>/Switch3'
                 */
                rtb_Switch1 = 0.0F;
            }

            /* End of Switch: '<S34>/Switch1' */
            /* End of Outputs for SubSystem: '<S23>/Protected Division' */

            /* Switch: '<S32>/Switch1' incorporates:
             *  Sum: '<S23>/Sum1'
             */
            VeBCPC_n_BeltSlipSpd = rtb_Switch1 - BCPR_ac_B.Ni;
        }

        /* End of Switch: '<S32>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S23>/EdgeRising' */
        /* Logic: '<S30>/OR1' incorporates:
         *  UnitDelay: '<S30>/Unit Delay'
         */
        rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_dx;

        /* Update for UnitDelay: '<S30>/Unit Delay' incorporates:
         *  Constant: '<S23>/TRUE Constant'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_dx = true;

        /* Outputs for Atomic SubSystem: '<S23>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S28>/Switch1' incorporates:
         *  Logic: '<S30>/AND'
         */
        if (rtb_OR1)
        {
            /* Switch: '<S28>/Switch1' */
            VeBCPC_n_BeltSlipSpdFilt = VeBCPC_n_BeltSlipSpd;
        }
        else
        {
            /* Switch: '<S28>/Switch1' incorporates:
             *  Constant: '<S33>/Calib'
             *  Product: '<S28>/Multiplication'
             *  Sum: '<S28>/Subtraction'
             *  Sum: '<S28>/Summation'
             *  UnitDelay: '<S28>/Unit Delay'
             */
            VeBCPC_n_BeltSlipSpdFilt = ((VeBCPC_n_BeltSlipSpd -
                VeBCPC_n_BeltSlipSpdFilt) * KeBCPR_k_BeltSlipFilterCoeff) +
                VeBCPC_n_BeltSlipSpdFilt;
        }

        /* End of Switch: '<S28>/Switch1' */
        /* End of Outputs for SubSystem: '<S23>/Digital Lowpass Reset Enabled' */
        /* End of Outputs for SubSystem: '<S23>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S18>/BCPC_BeltSlipCalc' */
    }

    /* End of Outputs for SubSystem: '<S5>/BCPC_BeltSlipCalc' */
}

#endif

/* Function for Chart: '<S76>/X_Data_and_Fractions' */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

static float32 BCPR_ac_frac(float32 Upper, float32 Lower, float32 Input)
{
    /* Graphical Function 'frac': '<S86>:1' */
    /* Transition: '<S86>:122' */
    /* Transition: '<S86>:121' */
    return (Input - Lower) / (Upper - Lower);
}

#endif

/*
 * Output and update for action system:
 *    '<S55>/Calc_FEAD'
 *    '<S101>/Calc_FEAD'
 */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Calc_FEAD(VAR(float32, AUTOMATIC)
    rtu_Ni, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT) rty_FEAD_Elements, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_FEAD_Elements_n, P2VAR(float32,
    AUTOMATIC, BCPR_VAR_INIT) rty_FEAD_Elements_i)
{
    sint32 rtb_LowerIndex;
    sint32 rtb_UpperIndex;
    float32 rtb_fra;

    /* Chart: '<S76>/X_Data_and_Fractions' incorporates:
     *  Constant: '<S82>/Calib'
     */
    /* Gateway: HSCL_Rot_Eff/Calc_FEAD/X_Data_and_Fractions */
    /* During: HSCL_Rot_Eff/Calc_FEAD/X_Data_and_Fractions */
    /* Entry Internal: HSCL_Rot_Eff/Calc_FEAD/X_Data_and_Fractions */
    /* Transition: '<S86>:2' */
    if (rtu_Ni >= ((float32)(Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[17]))
    {
        /* Transition: '<S86>:3' */
        if (rtu_Ni >= ((float32)(Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                       [25]))
        {
            /* Transition: '<S86>:5' */
            if (rtu_Ni >= ((float32)
                           (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[29]))
            {
                /* Transition: '<S86>:7' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [31]))
                {
                    /* Transition: '<S86>:9' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[32]))
                    {
                        /* Transition: '<S86>:11' */
                        if (rtu_Ni >= ((float32)
                                       (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                        ())[33]))
                        {
                            /* Transition: '<S86>:250' */
                            rtb_UpperIndex = (sint32)33.0F;
                            rtb_LowerIndex = (sint32)32.0F;
                            rtb_fra = BCPR_ac_frac
                                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [33],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [32],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [33]);

                            /* Transition: '<S86>:272' */
                        }
                        else
                        {
                            /* Transition: '<S86>:13' */
                            rtb_UpperIndex = (sint32)33.0F;
                            rtb_LowerIndex = (sint32)32.0F;
                            rtb_fra = BCPR_ac_frac
                                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [33],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [32], rtu_Ni);
                        }
                    }
                    else
                    {
                        /* Transition: '<S86>:26' */
                        rtb_UpperIndex = (sint32)32.0F;
                        rtb_LowerIndex = (sint32)31.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [32],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [31], rtu_Ni);

                        /* Transition: '<S86>:39' */
                        /* Transition: '<S86>:230' */
                    }
                }
                else
                {
                    /* Transition: '<S86>:24' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[30]))
                    {
                        /* Transition: '<S86>:12' */
                        rtb_UpperIndex = (sint32)31.0F;
                        rtb_LowerIndex = (sint32)30.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [31],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [30], rtu_Ni);

                        /* Transition: '<S86>:29' */
                        /* Transition: '<S86>:14' */
                        /* Transition: '<S86>:39' */
                        /* Transition: '<S86>:230' */
                    }
                    else
                    {
                        /* Transition: '<S86>:15' */
                        /* Transition: '<S86>:27' */
                        rtb_UpperIndex = (sint32)30.0F;
                        rtb_LowerIndex = (sint32)29.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [30],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [29], rtu_Ni);

                        /* Transition: '<S86>:14' */
                        /* Transition: '<S86>:39' */
                        /* Transition: '<S86>:230' */
                    }
                }
            }
            else
            {
                /* Transition: '<S86>:23' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [27]))
                {
                    /* Transition: '<S86>:10' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[28]))
                    {
                        /* Transition: '<S86>:16' */
                        rtb_UpperIndex = (sint32)29.0F;
                        rtb_LowerIndex = (sint32)28.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [29],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [28], rtu_Ni);

                        /* Transition: '<S86>:33' */
                    }
                    else
                    {
                        /* Transition: '<S86>:32' */
                        rtb_UpperIndex = (sint32)28.0F;
                        rtb_LowerIndex = (sint32)27.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [28],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [27], rtu_Ni);

                        /* Transition: '<S86>:34' */
                    }
                }
                else
                {
                    /* Transition: '<S86>:30' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[26]))
                    {
                        /* Transition: '<S86>:31' */
                        rtb_UpperIndex = (sint32)27.0F;
                        rtb_LowerIndex = (sint32)26.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [27],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [26], rtu_Ni);

                        /* Transition: '<S86>:37' */
                    }
                    else
                    {
                        /* Transition: '<S86>:36' */
                        rtb_UpperIndex = (sint32)26.0F;
                        rtb_LowerIndex = (sint32)25.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [26],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [25], rtu_Ni);

                        /* Transition: '<S86>:17' */
                    }

                    /* Transition: '<S86>:35' */
                    /* Transition: '<S86>:34' */
                }

                /* Transition: '<S86>:28' */
                /* Transition: '<S86>:29' */
                /* Transition: '<S86>:14' */
                /* Transition: '<S86>:39' */
                /* Transition: '<S86>:230' */
            }

            /* Transition: '<S86>:53' */
            /* Transition: '<S86>:67' */
        }
        else
        {
            /* Transition: '<S86>:22' */
            if (rtu_Ni >= ((float32)
                           (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[21]))
            {
                /* Transition: '<S86>:8' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [23]))
                {
                    /* Transition: '<S86>:42' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[24]))
                    {
                        /* Transition: '<S86>:45' */
                        rtb_UpperIndex = (sint32)25.0F;
                        rtb_LowerIndex = (sint32)24.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [25],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [24], rtu_Ni);

                        /* Transition: '<S86>:47' */
                    }
                    else
                    {
                        /* Transition: '<S86>:46' */
                        rtb_UpperIndex = (sint32)24.0F;
                        rtb_LowerIndex = (sint32)23.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [24],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [23], rtu_Ni);

                        /* Transition: '<S86>:48' */
                    }
                }
                else
                {
                    /* Transition: '<S86>:43' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[22]))
                    {
                        /* Transition: '<S86>:44' */
                        rtb_UpperIndex = (sint32)23.0F;
                        rtb_LowerIndex = (sint32)22.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [23],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [22], rtu_Ni);

                        /* Transition: '<S86>:40' */
                    }
                    else
                    {
                        /* Transition: '<S86>:49' */
                        rtb_UpperIndex = (sint32)22.0F;
                        rtb_LowerIndex = (sint32)21.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [22],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [21], rtu_Ni);

                        /* Transition: '<S86>:50' */
                    }

                    /* Transition: '<S86>:51' */
                    /* Transition: '<S86>:48' */
                }

                /* Transition: '<S86>:52' */
                /* Transition: '<S86>:67' */
            }
            else
            {
                /* Transition: '<S86>:54' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [19]))
                {
                    /* Transition: '<S86>:55' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[20]))
                    {
                        /* Transition: '<S86>:58' */
                        rtb_UpperIndex = (sint32)21.0F;
                        rtb_LowerIndex = (sint32)20.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [21],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [20], rtu_Ni);

                        /* Transition: '<S86>:57' */
                    }
                    else
                    {
                        /* Transition: '<S86>:59' */
                        rtb_UpperIndex = (sint32)20.0F;
                        rtb_LowerIndex = (sint32)19.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [20],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [19], rtu_Ni);

                        /* Transition: '<S86>:60' */
                    }

                    /* Transition: '<S86>:65' */
                }
                else
                {
                    /* Transition: '<S86>:56' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[18]))
                    {
                        /* Transition: '<S86>:61' */
                        rtb_UpperIndex = (sint32)19.0F;
                        rtb_LowerIndex = (sint32)18.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [19],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [18], rtu_Ni);

                        /* Transition: '<S86>:63' */
                    }
                    else
                    {
                        /* Transition: '<S86>:62' */
                        rtb_UpperIndex = (sint32)18.0F;
                        rtb_LowerIndex = (sint32)17.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [18],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [17], rtu_Ni);

                        /* Transition: '<S86>:18' */
                    }

                    /* Transition: '<S86>:64' */
                }

                /* Transition: '<S86>:66' */
            }
        }

        /* Transition: '<S86>:68' */
        /* Transition: '<S86>:113' */
        /* Transition: '<S86>:19' */
    }
    else
    {
        /* Transition: '<S86>:4' */
        if (rtu_Ni >= ((float32)(Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                       [9]))
        {
            /* Transition: '<S86>:21' */
            if (rtu_Ni >= ((float32)
                           (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[13]))
            {
                /* Transition: '<S86>:70' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [15]))
                {
                    /* Transition: '<S86>:75' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[16]))
                    {
                        /* Transition: '<S86>:77' */
                        rtb_UpperIndex = (sint32)17.0F;
                        rtb_LowerIndex = (sint32)16.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [17],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [16], rtu_Ni);

                        /* Transition: '<S86>:78' */
                    }
                    else
                    {
                        /* Transition: '<S86>:76' */
                        rtb_UpperIndex = (sint32)16.0F;
                        rtb_LowerIndex = (sint32)15.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [16],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [15], rtu_Ni);

                        /* Transition: '<S86>:79' */
                    }

                    /* Transition: '<S86>:85' */
                }
                else
                {
                    /* Transition: '<S86>:71' */
                    /* Transition: '<S86>:80' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[14]))
                    {
                        /* Transition: '<S86>:81' */
                        rtb_UpperIndex = (sint32)15.0F;
                        rtb_LowerIndex = (sint32)14.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [15],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [14], rtu_Ni);

                        /* Transition: '<S86>:82' */
                    }
                    else
                    {
                        /* Transition: '<S86>:20' */
                        rtb_UpperIndex = (sint32)14.0F;
                        rtb_LowerIndex = (sint32)13.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [14],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [13], rtu_Ni);

                        /* Transition: '<S86>:83' */
                    }

                    /* Transition: '<S86>:84' */
                }

                /* Transition: '<S86>:6' */
            }
            else
            {
                /* Transition: '<S86>:86' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [11]))
                {
                    /* Transition: '<S86>:87' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[12]))
                    {
                        /* Transition: '<S86>:90' */
                        rtb_UpperIndex = (sint32)13.0F;
                        rtb_LowerIndex = (sint32)12.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [13],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [12], rtu_Ni);

                        /* Transition: '<S86>:91' */
                        /* Transition: '<S86>:72' */
                    }
                    else
                    {
                        /* Transition: '<S86>:88' */
                        rtb_UpperIndex = (sint32)12.0F;
                        rtb_LowerIndex = (sint32)11.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [12],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [11], rtu_Ni);

                        /* Transition: '<S86>:89' */
                        /* Transition: '<S86>:72' */
                    }
                }
                else
                {
                    /* Transition: '<S86>:92' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[10]))
                    {
                        /* Transition: '<S86>:93' */
                        rtb_UpperIndex = (sint32)11.0F;
                        rtb_LowerIndex = (sint32)10.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [11],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [10], rtu_Ni);

                        /* Transition: '<S86>:89' */
                        /* Transition: '<S86>:72' */
                    }
                    else
                    {
                        /* Transition: '<S86>:94' */
                        rtb_UpperIndex = (sint32)10.0F;
                        rtb_LowerIndex = (sint32)9.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                             [10],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[9],
                             rtu_Ni);

                        /* Transition: '<S86>:95' */
                    }
                }

                /* Transition: '<S86>:74' */
            }

            /* Transition: '<S86>:69' */
        }
        else
        {
            /* Transition: '<S86>:73' */
            if (rtu_Ni >= ((float32)
                           (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[5]))
            {
                /* Transition: '<S86>:96' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [7]))
                {
                    /* Transition: '<S86>:99' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[8]))
                    {
                        /* Transition: '<S86>:103' */
                        rtb_UpperIndex = (sint32)9.0F;
                        rtb_LowerIndex = (sint32)8.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[9],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[8],
                             rtu_Ni);

                        /* Transition: '<S86>:100' */
                    }
                    else
                    {
                        /* Transition: '<S86>:102' */
                        rtb_UpperIndex = (sint32)8.0F;
                        rtb_LowerIndex = (sint32)7.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[8],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[7],
                             rtu_Ni);

                        /* Transition: '<S86>:101' */
                    }

                    /* Transition: '<S86>:109' */
                    /* Transition: '<S86>:119' */
                    /* Transition: '<S86>:97' */
                }
                else
                {
                    /* Transition: '<S86>:104' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[6]))
                    {
                        /* Transition: '<S86>:105' */
                        rtb_UpperIndex = (sint32)7.0F;
                        rtb_LowerIndex = (sint32)6.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[7],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[6],
                             rtu_Ni);

                        /* Transition: '<S86>:107' */
                        /* Transition: '<S86>:97' */
                    }
                    else
                    {
                        /* Transition: '<S86>:106' */
                        rtb_UpperIndex = (sint32)6.0F;
                        rtb_LowerIndex = (sint32)5.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[6],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[5],
                             rtu_Ni);
                    }
                }

                /* Transition: '<S86>:120' */
                /* Transition: '<S86>:259' */
                /* Transition: '<S86>:261' */
            }
            else
            {
                /* Transition: '<S86>:110' */
                if (rtu_Ni >= ((float32)
                               (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                               [3]))
                {
                    /* Transition: '<S86>:111' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[4]))
                    {
                        /* Transition: '<S86>:115' */
                        rtb_UpperIndex = (sint32)5.0F;
                        rtb_LowerIndex = (sint32)4.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[5],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[4],
                             rtu_Ni);

                        /* Transition: '<S86>:41' */
                    }
                    else
                    {
                        /* Transition: '<S86>:114' */
                        rtb_UpperIndex = (sint32)4.0F;
                        rtb_LowerIndex = (sint32)3.0F;
                        rtb_fra = BCPR_ac_frac
                            ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[4],
                             (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())[3],
                             rtu_Ni);
                    }

                    /* Transition: '<S86>:270' */
                    /* Transition: '<S86>:269' */
                }
                else
                {
                    /* Transition: '<S86>:112' */
                    if (rtu_Ni >= ((float32)
                                   (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                    ())[1]))
                    {
                        /* Transition: '<S86>:116' */
                        if (rtu_Ni >= ((float32)
                                       (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                        ())[2]))
                        {
                            /* Transition: '<S86>:38' */
                            rtb_UpperIndex = (sint32)3.0F;
                            rtb_LowerIndex = (sint32)2.0F;
                            rtb_fra = BCPR_ac_frac
                                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [3],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [2], rtu_Ni);

                            /* Transition: '<S86>:270' */
                            /* Transition: '<S86>:269' */
                        }
                        else
                        {
                            /* Transition: '<S86>:265' */
                            rtb_UpperIndex = (sint32)2.0F;
                            rtb_LowerIndex = (sint32)1.0F;
                            rtb_fra = BCPR_ac_frac
                                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [2],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [1], rtu_Ni);

                            /* Transition: '<S86>:268' */
                            /* Transition: '<S86>:269' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S86>:108' */
                        if (rtu_Ni >= ((float32)
                                       (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed
                                        ())[0]))
                        {
                            /* Transition: '<S86>:118' */
                            rtb_UpperIndex = (sint32)1.0F;
                            rtb_LowerIndex = (sint32)0.0F;
                            rtb_fra = BCPR_ac_frac
                                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [1],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [0], rtu_Ni);

                            /* Transition: '<S86>:262' */
                            /* Transition: '<S86>:261' */
                        }
                        else
                        {
                            /* Transition: '<S86>:255' */
                            rtb_UpperIndex = (sint32)1.0F;
                            rtb_LowerIndex = (sint32)0.0F;
                            rtb_fra = BCPR_ac_frac
                                ((Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [1],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [0],
                                 (Rte_Prm_KaHSCR_n_Eng_Speed_KaHSCR_n_Eng_Speed())
                                 [0]);

                            /* Transition: '<S86>:259' */
                            /* Transition: '<S86>:261' */
                        }
                    }
                }
            }

            /* Transition: '<S86>:98' */
            /* Transition: '<S86>:19' */
        }
    }

    /* End of Chart: '<S76>/X_Data_and_Fractions' */

    /* Sum: '<S76>/Summation1' incorporates:
     *  Constant: '<S83>/Calib'
     *  Product: '<S76>/Multiplication'
     *  Selector: '<S76>/Selector3'
     *  Selector: '<S76>/Selector4'
     *  Sum: '<S76>/Summation'
     */
    *rty_FEAD_Elements = ((((float32)
                            (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA
        ())[rtb_UpperIndex]) - ((float32)
                            (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA
        ())[rtb_LowerIndex])) * rtb_fra) + ((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffA_KaHSCR_n_FEADLoss_CoeffA())
        [rtb_LowerIndex]);

    /* Sum: '<S76>/Summation3' incorporates:
     *  Constant: '<S84>/Calib'
     *  Product: '<S76>/Multiplication1'
     *  Selector: '<S76>/Selector1'
     *  Selector: '<S76>/Selector2'
     *  Sum: '<S76>/Summation2'
     */
    *rty_FEAD_Elements_n = ((((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
        [rtb_UpperIndex]) - ((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
        [rtb_LowerIndex])) * rtb_fra) + ((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffB_KaHSCR_n_FEADLoss_CoeffB())
        [rtb_LowerIndex]);

    /* Sum: '<S76>/Summation5' incorporates:
     *  Constant: '<S85>/Calib'
     *  Product: '<S76>/Multiplication2'
     *  Selector: '<S76>/Selector5'
     *  Selector: '<S76>/Selector6'
     *  Sum: '<S76>/Summation4'
     */
    *rty_FEAD_Elements_i = ((((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
        [rtb_UpperIndex]) - ((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
        [rtb_LowerIndex])) * rtb_fra) + ((float32)
        (Rte_Prm_KaHSCR_n_FEADLoss_CoeffC_KaHSCR_n_FEADLoss_CoeffC())
        [rtb_LowerIndex]);
}

#endif

/*
 * Output and update for action system:
 *    '<S55>/Passthrough_Coeff'
 *    '<S101>/Passthrough_Coeff'
 */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Passthrough_Coeff(CONST(float32,
    AUTOMATIC) rtu_FEADCoeff_Pssthrgh_In[3], VAR(float32, AUTOMATIC)
    rty_FEADCoeff_Pssthrgh_Out[3])
{
    sint32 i;

    /* Inport: '<S79>/FEADCoeff_Pssthrgh_In' */
    for (i = 0; i < 3; i++)
    {
        rty_FEADCoeff_Pssthrgh_Out[i] = rtu_FEADCoeff_Pssthrgh_In[i];
    }

    /* End of Inport: '<S79>/FEADCoeff_Pssthrgh_In' */
}

#endif

/*
 * Output and update for action system:
 *    '<S214>/TcRMaxOvrdToZero'
 *    '<S221>/TcRMinOvrdToZero'
 *    '<S339>/TcRMaxOvrdToZero'
 *    '<S346>/TcRMinOvrdToZero'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_TcRMaxOvrdToZero(P2VAR(float32,
    AUTOMATIC, BCPR_VAR_INIT) rty_TcR_Max)
{
    /* SignalConversion generated from: '<S217>/TcR_Max' incorporates:
     *  Constant: '<S217>/Constant Value4'
     */
    *rty_TcR_Max = 0.0F;
}

#endif

/*
 * Output and update for action system:
 *    '<S214>/TcRMaxNormal'
 *    '<S221>/TcRMinNormal'
 *    '<S339>/TcRMaxNormal'
 *    '<S346>/TcRMinNormal'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_TcRMaxNormal(VAR(float32, AUTOMATIC)
    rtu_TcEst, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT) rty_TcR_Max)
{
    /* Inport: '<S216>/TcEst' */
    *rty_TcR_Max = rtu_TcEst;
}

#endif

/*
 * Output and update for action system:
 *    '<S238>/RstPth_Crt_TcRMax'
 *    '<S259>/RstPth_Crt_TcRMax'
 *    '<S363>/RstPth_Crt_TcRMax'
 *    '<S384>/RstPth_Crt_TcRMax'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstPth_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Max, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Max)
{
    /* Sum: '<S243>/Sum2' */
    *rty_LeadTcR_Max = rtu_TcR_Max + rtu_LeadOffset;
}

#endif

/*
 * Output and update for action system:
 *    '<S238>/RstHld_Crt_TcRMax'
 *    '<S259>/RstHld_Crt_TcRMax'
 *    '<S363>/RstHld_Crt_TcRMax'
 *    '<S384>/RstHld_Crt_TcRMax'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstHld_Crt_TcRMax(VAR(float32,
    AUTOMATIC) rtu_TcR_Max, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT)
    rty_LeadTcR_Max)
{
    /* Inport: '<S242>/TcR_Max' */
    *rty_LeadTcR_Max = rtu_TcR_Max;
}

#endif

/*
 * Output and update for action system:
 *    '<S238>/Achived_LdRamp'
 *    '<S259>/Achived_LdRamp'
 *    '<S363>/Achived_LdRamp'
 *    '<S384>/Achived_LdRamp'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Achived_LdRamp(VAR(float32, AUTOMATIC)
    rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Max, P2VAR(float32,
    AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Max)
{
    /* Sum: '<S241>/Sum2' */
    *rty_LeadTcR_Max = rtu_Prev_LeadTcR_Max + rtu_RampStep;
}

#endif

/*
 * Output and update for action system:
 *    '<S239>/RstPth_Crt_TcRMax'
 *    '<S260>/RstPth_Crt_TcRMin'
 *    '<S364>/RstPth_Crt_TcRMax'
 *    '<S385>/RstPth_Crt_TcRMin'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstPth_Crt_TcRMax_j(VAR(float32,
    AUTOMATIC) rtu_LeadOffset, VAR(float32, AUTOMATIC) rtu_TcR_Min, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Min)
{
    /* Sum: '<S246>/Sum2' */
    *rty_LeadTcR_Min = rtu_TcR_Min + rtu_LeadOffset;
}

#endif

/*
 * Output and update for action system:
 *    '<S239>/RstHld_Crt_TcRMax'
 *    '<S260>/RstHld_Crt_TcRMin'
 *    '<S364>/RstHld_Crt_TcRMax'
 *    '<S385>/RstHld_Crt_TcRMin'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_RstHld_Crt_TcRMax_c(VAR(float32,
    AUTOMATIC) rtu_TcR_Min, P2VAR(float32, AUTOMATIC, BCPR_VAR_INIT)
    rty_LeadTcR_Min)
{
    /* Inport: '<S245>/TcR_Min' */
    *rty_LeadTcR_Min = rtu_TcR_Min;
}

#endif

/*
 * Output and update for action system:
 *    '<S239>/Achived_LdRamp'
 *    '<S260>/Achived_LdRamp'
 *    '<S364>/Achived_LdRamp'
 *    '<S385>/Achived_LdRamp'
 */
#if Rte_SysCon_Variant_BCPR_1

static FUNC(void, BCPR_CODE_LOCAL) BCPR_ac_Achived_LdRamp_o(VAR(float32,
    AUTOMATIC) rtu_RampStep, VAR(float32, AUTOMATIC) rtu_Prev_LeadTcR_Min, P2VAR
    (float32, AUTOMATIC, BCPR_VAR_INIT) rty_LeadTcR_Min)
{
    /* Sum: '<S244>/Sum2' */
    *rty_LeadTcR_Min = rtu_Prev_LeadTcR_Min + rtu_RampStep;
}

#endif

/* Model step function for TID1 */
FUNC(void, BCPR_CODE) BCPR_MedTED1(void) /* Explicit Task: MedTED1 */
{

#if Rte_SysCon_Variant_BCPR_1

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_BCPR_1

    TeHSER_e_RngEqnSel tmpRead_0;

#endif

#if Rte_SysCon_Variant_BCPR_1

    TeHSER_e_SteadyStates tmpRead_1;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Abs_dp;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_Comparison5_h;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_Switch3_c;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Switch;

#endif

#if Rte_SysCon_Variant_BCPR_1

    TeTISR_e_InpSpdDfltSource rtb_TmpSignalConversionAtVeTISR_e_InpSpd;

#endif

#if Rte_SysCon_Variant_BCPR_1

    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 Vector_a;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 Switch1_j;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 Vector_k;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 Vector_kq;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/BCPR_MedTED1'
     */
    /* SignalConversion generated from: '<S1>/VeTISR_e_InpSpdSource' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeHSER_e_OITR_PredLeadState'
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     *  Inport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp'
     *  SignalConversion generated from: '<S1>/BCPO_Output_A__VeBCPR_b_BeltSlipSpd_FA'
     *  SignalConversion generated from: '<S1>/BCPO_Output_A__VeBCPR_n_BeltSlipSpd'
     *  SignalConversion generated from: '<S1>/BCPO_Output_A__VeBCPR_n_BeltSlipSpdFilt'
     *  SignalConversion generated from: '<S1>/PrllPreLeadState_write'
     *  SignalConversion generated from: '<S1>/PrllRngEqn_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMaxOpenLoopPred_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMaxOpenLoopPrll_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMaxOpenLoopSer_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMaxOpenLoopTact_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMinOpenLoopPred_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMinOpenLoopPrll_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMinOpenLoopSer_write'
     *  SignalConversion generated from: '<S1>/VeBCPC_M_BeltCapMinOpenLoopTact_write'
     *  SignalConversion generated from: '<S1>/VeBCPR_M_BeltCapMaxOpenLoop'
     *  SignalConversion generated from: '<S1>/VeBCPR_b_BeltSlipTrigger'
     *  SignalConversion generated from: '<S1>/VeBCPR_n_BeltSlipSpdFilt_write'
     *  SignalConversion generated from: '<S1>/VeBCPR_n_BeltSlipSpd_write'
     *  SignalConversion generated from: '<S1>/VeBCPR_n_Ni_BCPR'
     *  SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt'
     * */
#if Rte_SysCon_Variant_BCPR_1

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* SignalConversion generated from: '<S1>/VeTISR_e_InpSpdSource' incorporates:
     *  Inport: '<Root>/VeTISR_e_InpSpdSource'
     */
    (void)Rte_Read_VeTISR_e_InpSpdSource_Value
        (&rtb_TmpSignalConversionAtVeTISR_e_InpSpd);

    /* SignalConversion generated from: '<S1>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);
    (void)Rte_Read_VeESPR_b_BuffrCrnkDiagFailing_Value(&tmpRead);
    (void)Rte_Read_VeTISR_n_InputSpeedRaw_Value(&rtb_Abs_dp);
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&BCPR_ac_B.Switch2_l);

    /* Outputs for Function Call SubSystem: '<S1>/BCPC_BeltSlipCalc' */
    /* Switch: '<S22>/Switch2' incorporates:
     *  Constant: '<S49>/Calib'
     *  Inport: '<Root>/VeESPR_b_BuffrCrnkDiagFailing'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  Inport: '<Root>/VeTISR_n_InputSpeedRaw'
     */
    if (KeBCPR_b_UseRawEngSpd)
    {
        BCPR_ac_B.Switch2_l = rtb_Abs_dp;
    }

    /* End of Switch: '<S22>/Switch2' */

    /* Abs: '<S19>/Abs' */
    rtb_Abs_dp = fabsf(BCPR_ac_B.Switch2_l);

    /* RelationalOperator: '<S20>/Comparison5' incorporates:
     *  UnitDelay: '<S20>/Unit Delay'
     */
    rtb_Comparison5_h = (BCPR_ac_B.Switch2_l != BCPR_ac_DW.UnitDelay_DSTATE_ov);

    /* Logic: '<S19>/Logical1' incorporates:
     *  Constant: '<S19>/Constant Value'
     *  Constant: '<S38>/Constant'
     *  RelationalOperator: '<S19>/Comparison3'
     *  RelationalOperator: '<S19>/Comparison4'
     */
    VeBCPC_b_ChngInSpd_EngRun = (((((uint32)
        rtb_TmpSignalConversionAtVeESSR_e_EngSta) == CeESSR_e_EngRunning) &&
        (rtb_Abs_dp > 0.0F)) && rtb_Comparison5_h);

    /* Switch: '<S19>/Switch3' incorporates:
     *  Constant: '<S39>/Constant'
     *  RelationalOperator: '<S19>/Comparison7'
     */
    rtb_Switch3_c = (((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta) ==
                     CeESSR_e_EngOff);

    /* Logic: '<S19>/Logical6' incorporates:
     *  Constant: '<S19>/Constant Value2'
     *  RelationalOperator: '<S19>/Comparison6'
     */
    VeBCPC_b_ChngInSpd_EngOff = ((rtb_Comparison5_h && (rtb_Abs_dp > 0.0F)) &&
        rtb_Switch3_c);

    /* Logic: '<S19>/Logical7' incorporates:
     *  Constant: '<S19>/Constant Value4'
     *  RelationalOperator: '<S19>/Comparison5'
     */
    VeBCPC_b_IdleSpeed_EngOff = (rtb_Switch3_c && (rtb_Abs_dp == 0.0F));

    /* Logic: '<S19>/Logical2' */
    VeBCPC_b_SpdChngEngSt = (((VeBCPC_b_ChngInSpd_EngRun) ||
        (VeBCPC_b_ChngInSpd_EngOff)) || (VeBCPC_b_IdleSpeed_EngOff));

    /* Switch: '<S19>/Switch3' incorporates:
     *  Constant: '<S19>/TRUE Constant1'
     *  Constant: '<S36>/Constant'
     *  Constant: '<S40>/Calib'
     *  Logic: '<S19>/Logical3'
     *  RelationalOperator: '<S19>/Comparison1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTISR_e_InpSpd) ==
            CeTISR_e_EngSpeedFromCAN)
    {
        rtb_Switch3_c = ((VeBCPC_b_SpdChngEngSt) &&
                         (KeBCPR_b_EnblBeltSlip_CANSpeed));
    }
    else
    {
        rtb_Switch3_c = true;
    }

    /* End of Switch: '<S19>/Switch3' */

    /* Logic: '<S19>/Logical4' incorporates:
     *  Constant: '<S37>/Constant'
     *  Logic: '<S19>/Logical10'
     *  Logic: '<S19>/Logical9'
     *  RelationalOperator: '<S19>/Comparison2'
     */
    BCPR_ac_B.VeBCPC_b_BeltSlipTrigger_e = (((!tmpRead) || (((uint32)
        rtb_TmpSignalConversionAtVeTISR_e_InpSpd) != CeTISR_e_EngSpeedFromMCP)) &&
        rtb_Switch3_c);

    /* Outputs for Enabled SubSystem: '<S5>/BCPC_BeltSlipCalc' */
    BCPR_ac_BCPC_BeltSlipCalc();

    /* End of Outputs for SubSystem: '<S5>/BCPC_BeltSlipCalc' */

    /* Switch: '<S21>/Switch' incorporates:
     *  Constant: '<S42>/Calib'
     */
    if (KeBCPR_b_OvrdBeltSlipSpd)
    {
        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S46>/Calib'
         */
        rtb_Abs_dp = KeBCPR_n_BeltSlipSpd;
    }
    else
    {
        /* Switch: '<S21>/Switch' */
        rtb_Abs_dp = VeBCPC_n_BeltSlipSpd;
    }

    /* End of Switch: '<S21>/Switch' */

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S43>/Calib'
     */
    if (KeBCPR_b_OvrdBeltSlipSpdFilt)
    {
        /* Switch: '<S21>/Switch1' incorporates:
         *  Constant: '<S47>/Calib'
         */
        Switch1_j = KeBCPR_n_BeltSlipSpdFilt;
    }
    else
    {
        /* Switch: '<S21>/Switch1' */
        Switch1_j = VeBCPC_n_BeltSlipSpdFilt;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    BCPR_ac_DW.UnitDelay_DSTATE_ov = BCPR_ac_B.Switch2_l;

    /* End of Outputs for SubSystem: '<S1>/BCPC_BeltSlipCalc' */
    (void)Rte_Read_VeUBTR_T_FEAD_EstBeltTemp_Value(&Vector_k);
    (void)Rte_Read_VeHSER_e_OITR_PredLeadState_Value(&tmpRead_1);
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&tmpRead_0);
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value(&rtb_Switch);

    /* Outputs for Function Call SubSystem: '<S1>/BCPC_BeltCapacityPrediction' */
    /* Switch: '<S4>/Switch' incorporates:
     *  Constant: '<S13>/Calib'
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     *  Inport: '<Root>/VeHSER_e_OITR_PredLeadState'
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     *  Inport: '<Root>/VeUBTR_T_FEAD_EstBeltTemp'
     */
    if (KeBCPR_b_EnblBeltTempBasedBeltCap)
    {
        /* Switch: '<S4>/Switch' */
        rtb_Switch = Vector_k;
    }

    /* End of Switch: '<S4>/Switch' */

    /* Lookup_n-D: '<S15>/Vector' incorporates:
     *  Switch: '<S4>/Switch'
     */
    Vector_k = look1_iflf_binlca_16a(rtb_Switch, ((const float32 *)
        &(KxBCPR_M_BeltCapMaxPrll[0])), ((const float32 *)
        &(KtBCPR_M_BeltCapMaxPrll[0])), 5U);

    /* Selector: '<S4>/Selector' incorporates:
     *  Constant: '<S11>/Calib'
     *  DataTypeConversion: '<S4>/Data Type Conversion'
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    VeBCPC_b_PrllRngEqn = KaBCPR_b_PrllRngEqn[(tmpRead_0)];

    /* Lookup_n-D: '<S14>/Vector' incorporates:
     *  Switch: '<S4>/Switch'
     */
    Vector_a = look1_iflf_binlca_16a(rtb_Switch, ((const float32 *)
        &(KxBCPR_M_BeltCapMaxDflt[0])), ((const float32 *)
        &(KtBCPR_M_BeltCapMaxDflt[0])), 5U);

    /* Lookup_n-D: '<S17>/Vector' incorporates:
     *  Switch: '<S4>/Switch'
     */
    Vector_kq = look1_iflf_binlca_16a(rtb_Switch, ((const float32 *)
        &(KxBCPR_M_BeltCapMinPrll[0])), ((const float32 *)
        &(KtBCPR_M_BeltCapMinPrll[0])), 5U);

    /* Lookup_n-D: '<S16>/Vector' incorporates:
     *  Switch: '<S4>/Switch'
     */
    rtb_Switch = look1_iflf_binlca_16a(rtb_Switch, ((const float32 *)
        &(KxBCPR_M_BeltCapMinDflt[0])), ((const float32 *)
        &(KtBCPR_M_BeltCapMinDflt[0])), 5U);

    /* Switch: '<S7>/Switch1' incorporates:
     *  Switch: '<S8>/Switch1'
     */
    if (VeBCPC_b_PrllRngEqn)
    {
        /* Switch: '<S7>/Switch1' */
        VeBCPC_M_BeltCapMaxOpenLoopTact = Vector_k;

        /* Switch: '<S8>/Switch1' */
        VeBCPC_M_BeltCapMinOpenLoopTact = Vector_kq;
    }
    else
    {
        /* Switch: '<S7>/Switch1' */
        VeBCPC_M_BeltCapMaxOpenLoopTact = Vector_a;

        /* Switch: '<S8>/Switch1' */
        VeBCPC_M_BeltCapMinOpenLoopTact = rtb_Switch;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Selector: '<S4>/Selector1' incorporates:
     *  Constant: '<S12>/Calib'
     *  DataTypeConversion: '<S4>/Data Type Conversion1'
     *  Inport: '<Root>/VeHSER_e_OITR_PredLeadState'
     */
    VeBCPC_b_PrllPreLeadState = KaBCPR_b_PrllSteadyState[(tmpRead_1)];

    /* Switch: '<S9>/Switch1' incorporates:
     *  Switch: '<S10>/Switch1'
     */
    if (VeBCPC_b_PrllPreLeadState)
    {
        /* Switch: '<S9>/Switch1' */
        VeBCPC_M_BeltCapMaxOpenLoopPred = Vector_k;

        /* Switch: '<S10>/Switch1' */
        VeBCPC_M_BeltCapMinOpenLoopPred = Vector_kq;
    }
    else
    {
        /* Switch: '<S9>/Switch1' */
        VeBCPC_M_BeltCapMaxOpenLoopPred = Vector_a;

        /* Switch: '<S10>/Switch1' */
        VeBCPC_M_BeltCapMinOpenLoopPred = rtb_Switch;
    }

    /* End of Switch: '<S9>/Switch1' */
    /* End of Outputs for SubSystem: '<S1>/BCPC_BeltCapacityPrediction' */

    /* Outputs for Function Call SubSystem: '<S1>/BCPC_BeltSlipCalc' */
    /* Switch: '<S21>/Switch3' incorporates:
     *  Constant: '<S44>/Calib'
     */
    if (KeBCPR_b_OvrdBeltSlipSpd_FA)
    {
        /* Outport: '<Root>/VeBCPR_b_BeltSlipSpd_FA' incorporates:
         *  Constant: '<S41>/Calib'
         */
        (void)Rte_Write_VeBCPR_b_BeltSlipSpd_FA_Value(KeBCPR_b_BeltSlipSpd_FA);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_b_BeltSlipSpd_FA' */
        (void)Rte_Write_VeBCPR_b_BeltSlipSpd_FA_Value(VeBCPC_b_BeltSlipSpd_FA);
    }

    /* End of Switch: '<S21>/Switch3' */
    /* End of Outputs for SubSystem: '<S1>/BCPC_BeltSlipCalc' */

    /* Outputs for Function Call SubSystem: '<S1>/BCPO_Output_A' */
    /* Outport: '<Root>/VeBCPR_n_BeltSlipSpd' incorporates:
     *  Inport: '<S6>/VeBCPC_n_BeltSlipSpd'
     */
    (void)Rte_Write_VeBCPR_n_BeltSlipSpd_Value(rtb_Abs_dp);

    /* Outport: '<Root>/VeBCPR_n_BeltSlipSpdFilt' incorporates:
     *  Inport: '<S6>/VeBCPC_n_BeltSlipSpdFilt'
     */
    (void)Rte_Write_VeBCPR_n_BeltSlipSpdFilt_Value(Switch1_j);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxOpenLoop' incorporates:
     *  Inport: '<S6>/BCPC_M_BeltCapMaxOpenLoop'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxOpenLoop_Value(Vector_a);

    /* Outport: '<Root>/VeBCPR_b_BeltSlipTrigger' incorporates:
     *  Inport: '<S6>/VeBCPC_b_BeltSlipTrigger'
     */
    (void)Rte_Write_VeBCPR_b_BeltSlipTrigger_Value
        (BCPR_ac_B.VeBCPC_b_BeltSlipTrigger_e);

    /* End of Outputs for SubSystem: '<S1>/BCPO_Output_A' */

    /* Outputs for Function Call SubSystem: '<S1>/BCPC_BeltSlipCalc' */
    /* Switch: '<S21>/Switch4' incorporates:
     *  Constant: '<S45>/Calib'
     */
    if (KeBCPR_b_OvrdInputSpeed)
    {
        /* Outport: '<Root>/VeBCPR_n_Ni_BCPR' incorporates:
         *  Constant: '<S48>/Calib'
         */
        (void)Rte_Write_VeBCPR_n_Ni_BCPR_Value(KeBCPR_n_InputSpeed);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_n_Ni_BCPR' */
        (void)Rte_Write_VeBCPR_n_Ni_BCPR_Value(BCPR_ac_B.Ni);
    }

    /* End of Switch: '<S21>/Switch4' */
    /* End of Outputs for SubSystem: '<S1>/BCPC_BeltSlipCalc' */

    /* Merge: '<Root>/PrllPreLeadState_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_PrllPreLeadState_write_IRV
        (VeBCPC_b_PrllPreLeadState);

    /* Merge: '<Root>/PrllRngEqn_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_PrllRngEqn_write_IRV(VeBCPC_b_PrllRngEqn);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPred_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMaxOpenLoopPred_write_IRV
        (VeBCPC_M_BeltCapMaxOpenLoopPred);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPrll_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMaxOpenLoopPrll_write_IRV(Vector_k);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopSer_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMaxOpenLoopSer_write_IRV(Vector_a);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopTact_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMaxOpenLoopTact_write_IRV
        (VeBCPC_M_BeltCapMaxOpenLoopTact);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPred_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMinOpenLoopPred_write_IRV
        (VeBCPC_M_BeltCapMinOpenLoopPred);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPrll_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMinOpenLoopPrll_write_IRV
        (Vector_kq);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopSer_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMinOpenLoopSer_write_IRV
        (rtb_Switch);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopTact_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPC_M_BeltCapMinOpenLoopTact_write_IRV
        (VeBCPC_M_BeltCapMinOpenLoopTact);

    /* Merge: '<Root>/VeBCPR_n_BeltSlipSpdFilt_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPR_n_BeltSlipSpdFilt_write_IRV(Switch1_j);

    /* Merge: '<Root>/VeBCPR_n_BeltSlipSpd_IRV_Merge' */
    Rte_IrvWrite_BCPR_MedTED1_VeBCPR_n_BeltSlipSpd_write_IRV(rtb_Abs_dp);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S1>/VeTISR_e_InpSpdSource' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
}

/* Model step function for TID2 */
FUNC(void, BCPR_CODE) BCPR_MedTED2(void) /* Explicit Task: MedTED2 */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_VM_Conditional_Signal_FEAD_Coeff_4[3];

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_VM_Conditional_Signal_FEAD_Coeff_13[3];

#endif

#if Rte_SysCon_Variant_BCPR_1

    TeESSR_e_EngStartStopSt tmpRead;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_TmpSignalConversionAtVeBCPR_n_BeltSl;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_TmpSignalConversionAtVeBPDR_M_BeltCa;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_Logical_on;

#endif

#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

    boolean rtb_Logical;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_TmpSignalConversionAtVeATRR_M_Output;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Switch4;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_AND_pv;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Switch1;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_OR1;

#endif

#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_Sum_b[2];

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Switch;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_NotEqual_n;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_Comparison1_b4;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_AND_m;

#endif

#if Rte_SysCon_Variant_BCPR_1

    boolean rtb_AND_pp;

#endif

#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_Sum[6];

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Sum2_e;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Sum2_n;

#endif

#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

    float32 rtb_TmpSignalConversionAtVaMTQR_r_MtrA_F[3];

#endif

#if Rte_SysCon_Variant_BCPR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 Switch_k;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Sum3_i_idx_1;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Sum3_i_idx_2;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Sum3_i_idx_4;

#endif

#if Rte_SysCon_Variant_BCPR_1

    float32 rtb_Sum3_i_idx_5;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/BCPR_MedTED2'
     */
    /* SignalConversion generated from: '<S2>/VeATRR_M_OutputTorqReqImmed' incorporates:
     *  SignalConversion generated from: '<S2>/VeBCPR_n_BeltSlipSpdFilt_Read'
     *  SignalConversion generated from: '<S2>/VeBCPR_n_BeltSlipSpd_Read'
     *  SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd'
     */
#if Rte_SysCon_Variant_BCPR_1

    /* SignalConversion generated from: '<S2>/VeATRR_M_OutputTorqReqImmed' incorporates:
     *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmed'
     */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmed_Value
        (&rtb_TmpSignalConversionAtVeATRR_M_Output);

    /* SignalConversion generated from: '<S2>/VeBCPR_n_BeltSlipSpd_Read' incorporates:
     *  Merge: '<Root>/VeBCPR_n_BeltSlipSpd_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeBCPR_n_BeltSl =
        Rte_IrvRead_BCPR_MedTED2_VeBCPR_n_BeltSlipSpd_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBCPR_n_BeltSlipSpdFilt_Read' incorporates:
     *  Merge: '<Root>/VeBCPR_n_BeltSlipSpdFilt_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
        Rte_IrvRead_BCPR_MedTED2_VeBCPR_n_BeltSlipSpdFilt_write_IRV();

    /* SignalConversion generated from: '<S2>/VeHTDR_M_MtrA_TorqCmnd' incorporates:
     *  Inport: '<Root>/VeHTDR_M_MtrA_TorqCmnd'
     */
    (void)Rte_Read_VeHTDR_M_MtrA_TorqCmnd_Value
        (&rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T);

#endif

    /* End of SignalConversion generated from: '<S2>/VeATRR_M_OutputTorqReqImmed' */

    /* SignalConversion generated from: '<S2>/VaMTQR_r_MtrA_FEADCoeff' */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

    /* SignalConversion generated from: '<S2>/VaMTQR_r_MtrA_FEADCoeff' incorporates:
     *  Inport: '<Root>/VaMTQR_r_MtrA_FEADCoeff'
     */
    (void)Rte_Read_VaMTQR_r_MtrA_FEADCoeff_Value
        (rtb_TmpSignalConversionAtVaMTQR_r_MtrA_F);

#endif

    /* End of SignalConversion generated from: '<S2>/VaMTQR_r_MtrA_FEADCoeff' */

    /* SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopTact_Read' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  SignalConversion generated from: '<S2>/BCPO_Output_B__VeBCPR_b_NegSlipDetected'
     *  SignalConversion generated from: '<S2>/BCPO_Output_B__VeBCPR_b_PosSlipDetected'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMax'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMaxBPDR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMaxPrll'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMaxSer'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMaxSer_Eff'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMin'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMinBPDR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMinPrll'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMinSer'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltCapMinSer_Eff'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMaxHTDR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMaxOITR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMaxVTVR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMinHTDR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMinOITR'
     *  SignalConversion generated from: '<S2>/VeBCPR_M_BeltTrqMinVTVR'
     *  SignalConversion generated from: '<S2>/PrllPreLeadState_Read'
     *  SignalConversion generated from: '<S2>/PrllRngEqn_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopPred_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopPrll_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopSer_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopPred_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopPrll_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopSer_Read'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopTact_Read'
     *  SignalConversion generated from: '<S2>/VeBPDR_M_BeltCapMaxCorrection'
     *  SignalConversion generated from: '<S2>/VeBPDR_M_BeltCapMinCorrection'
     */
#if Rte_SysCon_Variant_BCPR_1

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
    /* SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopTact_Read' incorporates:
     *  Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopTact_IRV_Merge'
     */
    rtb_Sum2_e =
        Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMaxOpenLoopTact_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopTact_Read' incorporates:
     *  Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopTact_IRV_Merge'
     */
    rtb_Sum2_n =
        Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMinOpenLoopTact_write_IRV();

    /* SignalConversion generated from: '<S2>/VeBPDR_M_BeltCapMaxCorrection' incorporates:
     *  Inport: '<Root>/VeBPDR_M_BeltCapMaxCorrection'
     */
    (void)Rte_Read_VeBPDR_M_BeltCapMaxCorrection_Value
        (&rtb_TmpSignalConversionAtVeBPDR_M_BeltCa);

    /* SignalConversion generated from: '<S2>/VeBPDR_M_BeltCapMinCorrection' incorporates:
     *  Inport: '<Root>/VeBPDR_M_BeltCapMinCorrection'
     */
    (void)Rte_Read_VeBPDR_M_BeltCapMinCorrection_Value
        (&rtb_TmpSignalConversionAtVeBPDR_M_Belt_a);
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S2>/BCPC_BeltCapDtmn' */
    /* Sum: '<S50>/Sum1' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    VeBCPC_M_BeltCapMaxCorrected = rtb_Sum2_e -
        rtb_TmpSignalConversionAtVeBPDR_M_BeltCa;

    /* Selector: '<S50>/Selector' incorporates:
     *  Constant: '<S56>/Calib'
     *  DataTypeConversion: '<S50>/Data Type Conversion'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    rtb_AND_pv = KaBCPR_b_EngStrtStpStUseLearnedBeltCapacity[(tmpRead)];

    /* Logic: '<S50>/Logical1' incorporates:
     *  Constant: '<S56>/Calib'
     *  Constant: '<S59>/Calib'
     *  Logic: '<S50>/Logical'
     *  Merge: '<Root>/PrllRngEqn_IRV_Merge'
     *  Selector: '<S50>/Selector'
     *  SignalConversion generated from: '<S2>/PrllRngEqn_Read'
     */
    VeBCPC_b_UseLearnedBeltCapacityForTact = (rtb_AND_pv ||
        ((Rte_IrvRead_BCPR_MedTED2_PrllRngEqn_write_IRV()) &&
         (KeBCPR_b_UseLrnCpBasedOnRngEqnAllwd)));

    /* Outputs for Atomic SubSystem: '<S50>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S53>/EdgeRising' */
    /* Logic: '<S72>/OR1' incorporates:
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_cm;

    /* Update for UnitDelay: '<S72>/Unit Delay' incorporates:
     *  Constant: '<S53>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_cm = true;

    /* Switch: '<S53>/Switch' incorporates:
     *  DataStoreRead: '<S50>/Data Store Read'
     *  Logic: '<S72>/AND'
     *  Sum: '<S53>/Sum3'
     *  Switch: '<S50>/Switch1'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    if (rtb_OR1)
    {
        BCPR_ac_DW.UnitDelay_DSTATE_np = VeBCPR_M_BeltCapMax_DS;
    }
    else
    {
        if (VeBCPC_b_UseLearnedBeltCapacityForTact)
        {
            /* Switch: '<S50>/Switch1' */
            rtb_Sum2_e = VeBCPC_M_BeltCapMaxCorrected;
        }

        /* Outputs for Atomic SubSystem: '<S50>/Limiter' */
        /* Switch: '<S64>/Switch1' incorporates:
         *  Constant: '<S50>/Constant Value'
         *  RelationalOperator: '<S64>/Relational Operator'
         */
        if (10000.0F < rtb_Sum2_e)
        {
            /* Switch: '<S73>/Switch1' */
            rtb_Sum2_e = 10000.0F;
        }

        /* End of Switch: '<S64>/Switch1' */

        /* Switch: '<S64>/Switch' incorporates:
         *  Constant: '<S57>/Calib'
         *  RelationalOperator: '<S64>/Relational Operator1'
         */
        if (rtb_Sum2_e <= KeBCPR_M_BeltCapMaxLowerLmt)
        {
            rtb_Sum2_e = KeBCPR_M_BeltCapMaxLowerLmt;
        }

        /* End of Switch: '<S64>/Switch' */
        /* End of Outputs for SubSystem: '<S50>/Limiter' */

        /* Sum: '<S53>/Sum2' incorporates:
         *  UnitDelay: '<S53>/Unit Delay'
         */
        rtb_Sum2_e -= BCPR_ac_DW.UnitDelay_DSTATE_np;

        /* Outputs for Atomic SubSystem: '<S53>/Limiter' */
        /* Switch: '<S73>/Switch1' incorporates:
         *  Constant: '<S61>/Calib'
         *  RelationalOperator: '<S73>/Relational Operator'
         */
        if (KeBCPR_dM_BeltCapMaxRampRateLU < rtb_Sum2_e)
        {
            /* Switch: '<S73>/Switch1' */
            rtb_Sum2_e = KeBCPR_dM_BeltCapMaxRampRateLU;
        }

        /* End of Switch: '<S73>/Switch1' */

        /* Switch: '<S73>/Switch' incorporates:
         *  Constant: '<S60>/Calib'
         *  RelationalOperator: '<S73>/Relational Operator1'
         */
        if (rtb_Sum2_e <= KeBCPR_dM_BeltCapMaxRampRateLD)
        {
            rtb_Sum2_e = KeBCPR_dM_BeltCapMaxRampRateLD;
        }

        /* End of Switch: '<S73>/Switch' */
        /* End of Outputs for SubSystem: '<S53>/Limiter' */
        BCPR_ac_DW.UnitDelay_DSTATE_np += rtb_Sum2_e;
    }

    /* End of Switch: '<S53>/Switch' */
    /* End of Outputs for SubSystem: '<S53>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S50>/GradientLimiter' */

    /* DataStoreWrite: '<S50>/Data Store Write' incorporates:
     *  UnitDelay: '<S53>/Unit Delay'
     */
    VeBCPR_M_BeltCapMax_DS = BCPR_ac_DW.UnitDelay_DSTATE_np;

    /* Sum: '<S50>/Sum2' */
    VeBCPC_M_BeltCapMinCorrected = rtb_Sum2_n -
        rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;

    /* Outputs for Atomic SubSystem: '<S50>/GradientLimiter1' */
    /* Outputs for Atomic SubSystem: '<S54>/EdgeRising' */
    /* Logic: '<S74>/OR1' incorporates:
     *  UnitDelay: '<S74>/Unit Delay'
     */
    rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_js;

    /* Update for UnitDelay: '<S74>/Unit Delay' incorporates:
     *  Constant: '<S54>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_js = true;

    /* Switch: '<S54>/Switch' incorporates:
     *  DataStoreRead: '<S50>/Data Store Read1'
     *  Logic: '<S74>/AND'
     *  Sum: '<S54>/Sum3'
     *  Switch: '<S50>/Switch2'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    if (rtb_OR1)
    {
        BCPR_ac_DW.UnitDelay_DSTATE_h = VeBCPR_M_BeltCapMin_DS;
    }
    else
    {
        if (VeBCPC_b_UseLearnedBeltCapacityForTact)
        {
            /* Switch: '<S50>/Switch2' */
            rtb_Sum2_n = VeBCPC_M_BeltCapMinCorrected;
        }

        /* Outputs for Atomic SubSystem: '<S50>/Limiter1' */
        /* Switch: '<S65>/Switch1' incorporates:
         *  Constant: '<S58>/Calib'
         *  RelationalOperator: '<S65>/Relational Operator'
         */
        if (KeBCPR_M_BeltCapMinUpperLmt < rtb_Sum2_n)
        {
            /* Switch: '<S75>/Switch1' */
            rtb_Sum2_n = KeBCPR_M_BeltCapMinUpperLmt;
        }

        /* End of Switch: '<S65>/Switch1' */

        /* Switch: '<S65>/Switch' incorporates:
         *  Constant: '<S50>/Constant Value1'
         *  RelationalOperator: '<S65>/Relational Operator1'
         */
        if (rtb_Sum2_n <= -10000.0F)
        {
            rtb_Sum2_n = -10000.0F;
        }

        /* End of Switch: '<S65>/Switch' */
        /* End of Outputs for SubSystem: '<S50>/Limiter1' */

        /* Sum: '<S54>/Sum2' incorporates:
         *  UnitDelay: '<S54>/Unit Delay'
         */
        rtb_Sum2_n -= BCPR_ac_DW.UnitDelay_DSTATE_h;

        /* Outputs for Atomic SubSystem: '<S54>/Limiter' */
        /* Switch: '<S75>/Switch1' incorporates:
         *  Constant: '<S63>/Calib'
         *  RelationalOperator: '<S75>/Relational Operator'
         */
        if (KeBCPR_dM_BeltCapMinRampRateLU < rtb_Sum2_n)
        {
            /* Switch: '<S75>/Switch1' */
            rtb_Sum2_n = KeBCPR_dM_BeltCapMinRampRateLU;
        }

        /* End of Switch: '<S75>/Switch1' */

        /* Switch: '<S75>/Switch' incorporates:
         *  Constant: '<S62>/Calib'
         *  RelationalOperator: '<S75>/Relational Operator1'
         */
        if (rtb_Sum2_n <= KeBCPR_dM_BeltCapMinRampRateLD)
        {
            rtb_Sum2_n = KeBCPR_dM_BeltCapMinRampRateLD;
        }

        /* End of Switch: '<S75>/Switch' */
        /* End of Outputs for SubSystem: '<S54>/Limiter' */
        BCPR_ac_DW.UnitDelay_DSTATE_h += rtb_Sum2_n;
    }

    /* End of Switch: '<S54>/Switch' */
    /* End of Outputs for SubSystem: '<S54>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S50>/GradientLimiter1' */

    /* DataStoreWrite: '<S50>/Data Store Write1' incorporates:
     *  UnitDelay: '<S54>/Unit Delay'
     */
    VeBCPR_M_BeltCapMin_DS = BCPR_ac_DW.UnitDelay_DSTATE_h;
    for (i = 0; i < 3; i++)
    {
        /* SignalConversion generated from: '<S50>/FEAD_Coeff' */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

        /* VariantMerge generated from: '<S50>/FEAD_Coeff' incorporates:
         *  SignalConversion generated from: '<S2>/VaMTQR_r_MtrA_FEADCoeff'
         */
        rtb_VM_Conditional_Signal_FEAD_Coeff_13[i] =
            rtb_TmpSignalConversionAtVaMTQR_r_MtrA_F[i];

#elif !Rte_SysCon_Variant_BCPR_1 || !Rte_SysCon_Variant_HSCL_FEAD1

        /* VariantMerge generated from: '<S50>/FEAD_Coeff' incorporates:
         *  SignalConversion generated from: '<S50>/FEAD_Coeff'
         */
        rtb_VM_Conditional_Signal_FEAD_Coeff_13[i] = 0.0F;

#endif

        /* End of SignalConversion generated from: '<S50>/FEAD_Coeff' */
    }

    /* If: '<S55>/If1' incorporates:
     *  Logic: '<S55>/Logical'
     *  RelationalOperator: '<S55>/Comparison1'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    BCPR_ac_DW.If1_ActiveSubsystem_c = 1;

    /* Outputs for IfAction SubSystem: '<S55>/Passthrough_Coeff' incorporates:
     *  ActionPort: '<S79>/Mismatch'
     */
    BCPR_ac_Passthrough_Coeff(rtb_VM_Conditional_Signal_FEAD_Coeff_13,
        BCPR_ac_B.Merge1_g);

    /* End of Outputs for SubSystem: '<S55>/Passthrough_Coeff' */

    /* Logic: '<S55>/Logical' incorporates:
     *  Constant: '<S55>/Constant Value1'
     *  Constant: '<S77>/Calib'
     */
    rtb_Logical_on = (Rte_Prm_KeHSCR_b_FEADadj_KeHSCR_b_FEADadj() &&
                      (BCPR_ac_B.Merge1_g[0] > 1.0E-5F));

#endif

    /* End of If: '<S55>/If1' */

    /* Sum: '<S50>/Sum6' incorporates:
     *  Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopSer_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopSer_Read'
     */
    rtb_Switch4 =
        Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMinOpenLoopSer_write_IRV() -
        rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;

    /* Outputs for Atomic SubSystem: '<S50>/Limiter5' */
    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     *  RelationalOperator: '<S69>/Relational Operator'
     */
    if (KeBCPR_M_BeltCapMinUpperLmt < rtb_Switch4)
    {
        /* Switch: '<S71>/Switch1' */
        rtb_Switch4 = KeBCPR_M_BeltCapMinUpperLmt;
    }

    /* End of Switch: '<S69>/Switch1' */

    /* Switch: '<S69>/Switch' incorporates:
     *  Constant: '<S50>/Constant Value5'
     *  RelationalOperator: '<S69>/Relational Operator1'
     */
    if (rtb_Switch4 > -10000.0F)
    {
        /* Switch: '<S69>/Switch' */
        rtb_Sum2_n = rtb_Switch4;
    }
    else
    {
        /* Switch: '<S69>/Switch' */
        rtb_Sum2_n = -10000.0F;
    }

    /* End of Switch: '<S69>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter5' */

    /* Sum: '<S50>/Sum5' incorporates:
     *  Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopSer_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopSer_Read'
     */
    rtb_Switch4 =
        Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMaxOpenLoopSer_write_IRV() -
        rtb_TmpSignalConversionAtVeBPDR_M_BeltCa;

    /* Outputs for Atomic SubSystem: '<S50>/Limiter4' */
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value4'
     *  RelationalOperator: '<S68>/Relational Operator'
     */
    if (10000.0F < rtb_Switch4)
    {
        /* Switch: '<S71>/Switch1' */
        rtb_Switch4 = 10000.0F;
    }

    /* End of Switch: '<S68>/Switch1' */

    /* Switch: '<S68>/Switch' incorporates:
     *  Constant: '<S57>/Calib'
     *  RelationalOperator: '<S68>/Relational Operator1'
     */
    if (rtb_Switch4 > KeBCPR_M_BeltCapMaxLowerLmt)
    {
        /* Switch: '<S68>/Switch' */
        rtb_Sum2_e = rtb_Switch4;
    }
    else
    {
        /* Switch: '<S68>/Switch' */
        rtb_Sum2_e = KeBCPR_M_BeltCapMaxLowerLmt;
    }

    /* End of Switch: '<S68>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter4' */

    /* If: '<S55>/If' incorporates:
     *  SignalConversion generated from: '<S55>/Variant Source'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    if (rtb_Logical_on)
    {
        /* Outputs for IfAction SubSystem: '<S55>/TaRot_To_TaEff' incorporates:
         *  ActionPort: '<S81>/Mismatch'
         */
        /* Sum: '<S81>/Sum' incorporates:
         *  Product: '<S81>/Product'
         *  Product: '<S81>/Product1'
         */
        rtb_Sum_b[0] = (((rtb_Sum2_e * rtb_Sum2_e) * BCPR_ac_B.Merge1_g[0]) +
                        (rtb_Sum2_e * BCPR_ac_B.Merge1_g[1])) +
            BCPR_ac_B.Merge1_g[2];
        rtb_Sum_b[1] = (((rtb_Sum2_n * rtb_Sum2_n) * BCPR_ac_B.Merge1_g[0]) +
                        (rtb_Sum2_n * BCPR_ac_B.Merge1_g[1])) +
            BCPR_ac_B.Merge1_g[2];

        /* Outputs for Atomic SubSystem: '<S81>/Protected Division' */
        /* RelationalOperator: '<S93>/Not Equal1' incorporates:
         *  Constant: '<S92>/Calib'
         *  Constant: '<S93>/Constant Value1'
         */
        rtb_Logical_on = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) != 0.0F);
        for (i = 0; i < 2; i++)
        {
            Switch_k = rtb_Sum_b[i];

            /* Switch: '<S93>/Switch1' incorporates:
             *  Constant: '<S93>/Constant Value'
             *  Constant: '<S93>/Constant Value2'
             *  Constant: '<S93>/Constant Value3'
             *  Logic: '<S93>/AND'
             *  RelationalOperator: '<S93>/Greater Than or Equal '
             *  RelationalOperator: '<S93>/Greater Than or Equal 1'
             *  RelationalOperator: '<S93>/Not Equal'
             *  Switch: '<S93>/Switch2'
             *  Switch: '<S93>/Switch3'
             */
            if ((Switch_k != 0.0F) && rtb_Logical_on)
            {
                /* Switch: '<S93>/Switch1' incorporates:
                 *  Constant: '<S92>/Calib'
                 *  Product: '<S93>/Division'
                 */
                Switch_k /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (Switch_k > 0.0F)
            {
                /* Switch: '<S93>/Switch2' incorporates:
                 *  Constant: '<S93>/MAXFLOAT'
                 *  Switch: '<S93>/Switch1'
                 */
                Switch_k = 3.402823466E+38F;
            }
            else if (Switch_k < 0.0F)
            {
                /* Switch: '<S93>/Switch3' incorporates:
                 *  Constant: '<S93>/MINFLOAT'
                 *  Switch: '<S93>/Switch1'
                 */
                Switch_k = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S93>/Switch1' incorporates:
                 *  Constant: '<S93>/Constant Value4'
                 *  Switch: '<S93>/Switch3'
                 */
                Switch_k = 0.0F;
            }

            /* End of Switch: '<S93>/Switch1' */

            /* Switch: '<S94>/Switch' incorporates:
             *  Constant: '<S94>/Constant Value'
             *  RelationalOperator: '<S94>/Comparison1'
             */
            if (Switch_k < 0.0F)
            {
                /* Switch: '<S94>/Switch' */
                Switch_k = 0.0F;
            }

            /* End of Switch: '<S94>/Switch' */
            rtb_Sum_b[i] = Switch_k;
        }

        /* End of Outputs for SubSystem: '<S81>/Protected Division' */

        /* VariantMerge generated from: '<S55>/Variant Source' incorporates:
         *  RelationalOperator: '<S93>/Not Equal'
         *  Sum: '<S81>/Sum1'
         *  Switch: '<S93>/Switch1'
         */
        BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = rtb_Sum2_e -
            rtb_Sum_b[0];
        BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = rtb_Sum2_n -
            rtb_Sum_b[1];

        /* End of Outputs for SubSystem: '<S55>/TaRot_To_TaEff' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S55>/Passthrough' incorporates:
         *  ActionPort: '<S78>/Mismatch'
         */
        /* VariantMerge generated from: '<S55>/Variant Source' incorporates:
         *  Gain: '<S87>/Gain'
         */
        BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = rtb_Sum2_e;
        BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = rtb_Sum2_n;

        /* End of Outputs for SubSystem: '<S55>/Passthrough' */
    }

#else

    /* VariantMerge generated from: '<S55>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S55>/Variant Source'
     */
    BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[0] = rtb_Sum2_e;
    BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[1] = rtb_Sum2_n;

#endif

    /* End of If: '<S55>/If' */

    /* Sum: '<S50>/Sum3' incorporates:
     *  Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPrll_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopPrll_Read'
     */
    rtb_Switch4 =
        Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMaxOpenLoopPrll_write_IRV() -
        rtb_TmpSignalConversionAtVeBPDR_M_BeltCa;

    /* Outputs for Atomic SubSystem: '<S50>/Limiter2' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value3'
     *  RelationalOperator: '<S66>/Relational Operator'
     */
    if (10000.0F < rtb_Switch4)
    {
        /* Switch: '<S71>/Switch1' */
        rtb_Switch4 = 10000.0F;
    }

    /* End of Switch: '<S66>/Switch1' */

    /* Switch: '<S66>/Switch' incorporates:
     *  Constant: '<S57>/Calib'
     *  RelationalOperator: '<S66>/Relational Operator1'
     */
    if (rtb_Switch4 > KeBCPR_M_BeltCapMaxLowerLmt)
    {
        /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
        /* Outport: '<Root>/VeBCPR_M_BeltCapMaxPrll' incorporates:
         *  Inport: '<S52>/VeBCPC_M_BeltCapMaxPrll'
         */
        (void)Rte_Write_VeBCPR_M_BeltCapMaxPrll_Value(rtb_Switch4);

        /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
        /* Outport: '<Root>/VeBCPR_M_BeltCapMaxPrll' incorporates:
         *  Inport: '<S52>/VeBCPC_M_BeltCapMaxPrll'
         */
        (void)Rte_Write_VeBCPR_M_BeltCapMaxPrll_Value
            (KeBCPR_M_BeltCapMaxLowerLmt);

        /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */
    }

    /* End of Switch: '<S66>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter2' */

    /* Sum: '<S50>/Sum4' incorporates:
     *  Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPrll_IRV_Merge'
     *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopPrll_Read'
     */
    rtb_Switch4 =
        Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMinOpenLoopPrll_write_IRV() -
        rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;

    /* Outputs for Atomic SubSystem: '<S50>/Limiter3' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     *  RelationalOperator: '<S67>/Relational Operator'
     */
    if (KeBCPR_M_BeltCapMinUpperLmt < rtb_Switch4)
    {
        /* Switch: '<S71>/Switch1' */
        rtb_Switch4 = KeBCPR_M_BeltCapMinUpperLmt;
    }

    /* End of Switch: '<S67>/Switch1' */

    /* Switch: '<S67>/Switch' incorporates:
     *  Constant: '<S50>/Constant Value2'
     *  RelationalOperator: '<S67>/Relational Operator1'
     */
    if (rtb_Switch4 > -10000.0F)
    {
        /* Switch: '<S67>/Switch' */
        Switch_k = rtb_Switch4;
    }
    else
    {
        /* Switch: '<S67>/Switch' */
        Switch_k = -10000.0F;
    }

    /* End of Switch: '<S67>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter3' */

    /* Logic: '<S50>/Logical2' incorporates:
     *  Constant: '<S59>/Calib'
     *  Logic: '<S50>/Logical3'
     *  Merge: '<Root>/PrllPreLeadState_IRV_Merge'
     *  SignalConversion generated from: '<S2>/PrllPreLeadState_Read'
     */
    VeBCPC_b_UseLearnedBeltCapacityForPred = (rtb_AND_pv ||
        ((KeBCPR_b_UseLrnCpBasedOnRngEqnAllwd) &&
         (Rte_IrvRead_BCPR_MedTED2_PrllPreLeadState_write_IRV())));

    /* Switch: '<S50>/Switch3' */
    if (VeBCPC_b_UseLearnedBeltCapacityForPred)
    {
        /* Switch: '<S50>/Switch3' incorporates:
         *  Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPred_IRV_Merge'
         *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopPred_Read'
         *  Sum: '<S50>/Sum7'
         */
        rtb_Switch4 =
            Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMaxOpenLoopPred_write_IRV()
            - rtb_TmpSignalConversionAtVeBPDR_M_BeltCa;
    }
    else
    {
        /* Switch: '<S50>/Switch3' incorporates:
         *  Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPred_IRV_Merge'
         *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopPred_Read'
         */
        rtb_Switch4 =
            Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMaxOpenLoopPred_write_IRV();
    }

    /* End of Switch: '<S50>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S50>/Limiter6' */
    /* Switch: '<S70>/Switch1' incorporates:
     *  Constant: '<S50>/Constant Value6'
     *  RelationalOperator: '<S70>/Relational Operator'
     */
    if (10000.0F < rtb_Switch4)
    {
        /* Switch: '<S71>/Switch1' */
        rtb_Switch4 = 10000.0F;
    }

    /* End of Switch: '<S70>/Switch1' */

    /* Switch: '<S70>/Switch' incorporates:
     *  Constant: '<S57>/Calib'
     *  RelationalOperator: '<S70>/Relational Operator1'
     */
    if (rtb_Switch4 > KeBCPR_M_BeltCapMaxLowerLmt)
    {
        /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
        /* Outport: '<Root>/VeBCPR_M_BeltCapMax' incorporates:
         *  Inport: '<S52>/VeBCPC_M_BeltCapMaxPred'
         */
        (void)Rte_Write_VeBCPR_M_BeltCapMax_Value(rtb_Switch4);

        /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
        /* Outport: '<Root>/VeBCPR_M_BeltCapMax' incorporates:
         *  Inport: '<S52>/VeBCPC_M_BeltCapMaxPred'
         */
        (void)Rte_Write_VeBCPR_M_BeltCapMax_Value(KeBCPR_M_BeltCapMaxLowerLmt);

        /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */
    }

    /* End of Switch: '<S70>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter6' */

    /* Switch: '<S50>/Switch4' */
    if (VeBCPC_b_UseLearnedBeltCapacityForPred)
    {
        /* Switch: '<S50>/Switch4' incorporates:
         *  Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPred_IRV_Merge'
         *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopPred_Read'
         *  Sum: '<S50>/Sum8'
         */
        rtb_Switch4 =
            Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMinOpenLoopPred_write_IRV()
            - rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }
    else
    {
        /* Switch: '<S50>/Switch4' incorporates:
         *  Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPred_IRV_Merge'
         *  SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMinOpenLoopPred_Read'
         */
        rtb_Switch4 =
            Rte_IrvRead_BCPR_MedTED2_VeBCPC_M_BeltCapMinOpenLoopPred_write_IRV();
    }

    /* End of Switch: '<S50>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S50>/Limiter7' */
    /* Switch: '<S71>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     *  RelationalOperator: '<S71>/Relational Operator'
     */
    if (KeBCPR_M_BeltCapMinUpperLmt < rtb_Switch4)
    {
        /* Switch: '<S71>/Switch1' */
        rtb_Switch4 = KeBCPR_M_BeltCapMinUpperLmt;
    }

    /* End of Switch: '<S71>/Switch1' */
    /* End of Outputs for SubSystem: '<S50>/Limiter7' */
    /* End of Outputs for SubSystem: '<S2>/BCPC_BeltCapDtmn' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */
    for (i = 0; i < 3; i++)
    {
        /* SignalConversion generated from: '<S51>/FEAD_Coeff' */
#if Rte_SysCon_Variant_BCPR_1 && Rte_SysCon_Variant_HSCL_FEAD1

        /* VariantMerge generated from: '<S51>/FEAD_Coeff' incorporates:
         *  SignalConversion generated from: '<S2>/VaMTQR_r_MtrA_FEADCoeff'
         */
        rtb_VM_Conditional_Signal_FEAD_Coeff_4[i] =
            rtb_TmpSignalConversionAtVaMTQR_r_MtrA_F[i];

#elif !Rte_SysCon_Variant_BCPR_1 || !Rte_SysCon_Variant_HSCL_FEAD1

        /* VariantMerge generated from: '<S51>/FEAD_Coeff' incorporates:
         *  SignalConversion generated from: '<S51>/FEAD_Coeff'
         */
        rtb_VM_Conditional_Signal_FEAD_Coeff_4[i] = 0.0F;

#endif

        /* End of SignalConversion generated from: '<S51>/FEAD_Coeff' */
    }

    /* If: '<S101>/If1' incorporates:
     *  Logic: '<S101>/Logical'
     *  RelationalOperator: '<S101>/Comparison1'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    BCPR_ac_DW.If1_ActiveSubsystem = 1;

    /* Outputs for IfAction SubSystem: '<S101>/Passthrough_Coeff' incorporates:
     *  ActionPort: '<S172>/Mismatch'
     */
    BCPR_ac_Passthrough_Coeff(rtb_VM_Conditional_Signal_FEAD_Coeff_4,
        BCPR_ac_B.Merge1);

    /* End of Outputs for SubSystem: '<S101>/Passthrough_Coeff' */

    /* Logic: '<S101>/Logical' incorporates:
     *  Constant: '<S101>/Constant Value1'
     *  Constant: '<S170>/Calib'
     */
    rtb_Logical = (Rte_Prm_KeHSCR_b_FEADadj_KeHSCR_b_FEADadj() &&
                   (BCPR_ac_B.Merge1[0] > 1.0E-5F));

#endif

    /* End of If: '<S101>/If1' */

    /* Abs: '<S95>/Abs' incorporates:
     *  DataStoreRead: '<S51>/Data Store Read1'
     */
    rtb_TmpSignalConversionAtVeBPDR_M_Belt_a = fabsf(VeBCPR_M_BeltCapMin_DS);

    /* Outputs for Atomic SubSystem: '<S163>/EdgeRising' */
    /* Logic: '<S314>/AND' incorporates:
     *  Logic: '<S314>/OR1'
     *  UnitDelay: '<S314>/Unit Delay'
     */
    rtb_AND_pv = !BCPR_ac_DW.UnitDelay_DSTATE_g5;

    /* Update for UnitDelay: '<S314>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant2'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_g5 = true;

    /* End of Outputs for SubSystem: '<S163>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S164>/Limiter1' */
    /* Switch: '<S439>/Switch1' incorporates:
     *  Constant: '<S164>/Constant Value2'
     *  RelationalOperator: '<S439>/Relational Operator'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T)
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = 0.0F;
    }
    else
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T;
    }

    /* End of Switch: '<S439>/Switch1' */

    /* Switch: '<S439>/Switch' incorporates:
     *  Constant: '<S164>/Constant Value3'
     *  RelationalOperator: '<S439>/Relational Operator1'
     */
    if (rtb_Switch1 > -10000.0F)
    {
        /* Switch: '<S439>/Switch' */
        rtb_Switch = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S439>/Switch' */
        rtb_Switch = -10000.0F;
    }

    /* End of Switch: '<S439>/Switch' */
    /* End of Outputs for SubSystem: '<S164>/Limiter1' */

    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S163>/Constant Value1'
     *  RelationalOperator: '<S163>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeATRR_M_Output >= 0.0F)
    {
        /* Switch: '<S315>/Switch1' incorporates:
         *  Constant: '<S133>/Calib'
         */
        rtb_TmpSignalConversionAtVeBPDR_M_BeltCa =
            KeBCPR_dM_NegSlipPwrOnTcR_RmpRt;
    }
    else
    {
        /* Switch: '<S315>/Switch1' incorporates:
         *  Constant: '<S132>/Calib'
         */
        rtb_TmpSignalConversionAtVeBPDR_M_BeltCa =
            KeBCPR_dM_NegSlipPwrOffTcR_RmpRt;
    }

    /* End of Switch: '<S315>/Switch1' */

    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S166>/Calib'
     */
    if (KeBCPR_b_UseRawBeltSlipForBeltOffload)
    {
        /* Switch: '<S165>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl;
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S96>/Limiter1' */
    /* Switch: '<S168>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value2'
     *  RelationalOperator: '<S168>/Relational Operator'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = 0.0F;
    }
    else
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }

    /* End of Switch: '<S168>/Switch1' */
    /* End of Outputs for SubSystem: '<S96>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S417>/EdgeRising' */
    /* Logic: '<S433>/AND' incorporates:
     *  Logic: '<S433>/OR1'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    rtb_Logical_on = !BCPR_ac_DW.UnitDelay_DSTATE_je;

    /* Update for UnitDelay: '<S433>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant2'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_je = true;

    /* End of Outputs for SubSystem: '<S417>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S417>/EdgeFalling2' */
    /* Update for UnitDelay: '<S432>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant2'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_i = true;

    /* End of Outputs for SubSystem: '<S417>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S417>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S436>/EdgeRising' */
    /* Logic: '<S437>/AND' incorporates:
     *  Logic: '<S437>/OR1'
     *  UnitDelay: '<S437>/Unit Delay'
     */
    rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S437>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant2'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_j = true;

    /* End of Outputs for SubSystem: '<S436>/EdgeRising' */

    /* Switch: '<S436>/Switch1' incorporates:
     *  Constant: '<S103>/Calib'
     *  Constant: '<S155>/KeTCPR_t_DlydRisingEdgeTmr'
     *  Constant: '<S436>/Constant Value1'
     *  Logic: '<S436>/OR'
     *  MinMax: '<S436>/Minimum'
     *  Sum: '<S436>/Summation'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    if (rtb_OR1)
    {
        BCPR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        BCPR_ac_DW.UnitDelay_DSTATE = fminf(KeBCPR_t_DlydRisingEdgeTmr,
            HeBCPR_t_MedTED_dT + BCPR_ac_DW.UnitDelay_DSTATE);
    }

    /* End of Switch: '<S436>/Switch1' */
    /* End of Outputs for SubSystem: '<S417>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S417>/EdgeFalling1' */
    /* Update for UnitDelay: '<S431>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant2'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_oa = true;

    /* End of Outputs for SubSystem: '<S417>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S417>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S417>/Turn On Delay Time' */
    /* Update for UnitDelay: '<S435>/Unit Delay' incorporates:
     *  Constant: '<S155>/KeTCPR_t_DlydRisingEdgeTmr'
     *  Logic: '<S417>/Logical'
     *  Logic: '<S435>/OR'
     *  Logic: '<S435>/OR1'
     *  RelationalOperator: '<S436>/Greater  Than'
     *  UnitDelay: '<S436>/Unit Delay'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_f = (rtb_Logical_on ||
        ((BCPR_ac_DW.UnitDelay_DSTATE < KeBCPR_t_DlydRisingEdgeTmr) &&
         (BCPR_ac_DW.UnitDelay_DSTATE_f)));

    /* End of Outputs for SubSystem: '<S417>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S417>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S96>/Limiter1' */
    /* Switch: '<S168>/Switch' incorporates:
     *  Constant: '<S96>/Constant Value3'
     *  RelationalOperator: '<S168>/Relational Operator1'
     */
    if (rtb_Switch1 <= -10000.0F)
    {
        rtb_Switch1 = -10000.0F;
    }

    /* End of Switch: '<S168>/Switch' */
    /* End of Outputs for SubSystem: '<S96>/Limiter1' */

    /* Outputs for IfAction SubSystem: '<S324>/Slip_Remed' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    /* If: '<S324>/If1' incorporates:
     *  Abs: '<S415>/Abs2'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S140>/Calib'
     *  Constant: '<S141>/Calib'
     *  Constant: '<S51>/Constant Value15'
     *  Logic: '<S415>/Logical'
     *  Logic: '<S415>/Logical1'
     *  Logic: '<S415>/Logical2'
     *  Logic: '<S415>/Logical3'
     *  RelationalOperator: '<S415>/Comparison'
     *  RelationalOperator: '<S415>/Comparison2'
     *  RelationalOperator: '<S415>/Comparison3'
     *  RelationalOperator: '<S422>/Not Equal'
     *  UnitDelay: '<S422>/Unit Delay'
     * */
    rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = fabsf(rtb_Switch1);
    rtb_Logical_on = (KeBCPR_dM_NegSlipRcvTcR_RmpRt < 100000.0F);
    rtb_OR1 = (rtb_TmpSignalConversionAtVeBCPR_n_BeltSl >
               KeBCPR_n_NegSlip_StblStSlipDtctThreshHT);
    rtb_OR1 = (((rtb_Logical_on && (rtb_TmpSignalConversionAtVeBCPR_n_BeltSl >
                  KeBCPR_n_NegSlip_StblStSlipDtctThresh)) && (!rtb_OR1)) ||
               rtb_OR1);

    /* Outputs for Atomic SubSystem: '<S421>/EdgeBi1' */
    rtb_NotEqual_n = (rtb_OR1 != BCPR_ac_DW.UnitDelay_DSTATE_bx);
    BCPR_ac_DW.UnitDelay_DSTATE_bx = rtb_OR1;

    /* End of Outputs for SubSystem: '<S421>/EdgeBi1' */

    /* If: '<S421>/If' incorporates:
     *  If: '<S324>/If1'
     *  Inport: '<S423>/u'
     *  Logic: '<S421>/Logical1'
     *  RelationalOperator: '<S421>/Comparison4'
     *  UnitDelay: '<S421>/Unit Delay'
     */
    if ((BCPR_ac_DW.UnitDelay_DSTATE_nq == rtb_OR1) || rtb_AND_pv)
    {
        /* Outputs for IfAction SubSystem: '<S421>/Reset_PassThr' incorporates:
         *  ActionPort: '<S423>/Action Port'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_nq = rtb_OR1;

        /* End of Outputs for SubSystem: '<S421>/Reset_PassThr' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S421>/SlipDetected' incorporates:
         *  ActionPort: '<S424>/Action Port'
         */
        /* RelationalOperator: '<S424>/Comparison1' incorporates:
         *  Constant: '<S141>/Calib'
         */
        rtb_Comparison1_b4 = (rtb_TmpSignalConversionAtVeBCPR_n_BeltSl >
                              KeBCPR_n_NegSlip_StblStSlipDtctThreshHT);

        /* Outputs for Atomic SubSystem: '<S424>/EdgeRising1' */
        /* Logic: '<S425>/AND' incorporates:
         *  Logic: '<S425>/OR1'
         *  UnitDelay: '<S425>/Unit Delay'
         */
        rtb_AND_m = (rtb_Comparison1_b4 && (!BCPR_ac_DW.UnitDelay_DSTATE_nk));

        /* Update for UnitDelay: '<S425>/Unit Delay' */
        BCPR_ac_DW.UnitDelay_DSTATE_nk = rtb_Comparison1_b4;

        /* End of Outputs for SubSystem: '<S424>/EdgeRising1' */

        /* If: '<S424>/If' incorporates:
         *  Constant: '<S103>/Calib'
         *  Inport: '<S428>/dT'
         *  Logic: '<S424>/Logical1'
         *  UnitDelay: '<S424>/Unit Delay'
         */
        if (rtb_NotEqual_n || rtb_AND_m)
        {
            /* Outputs for IfAction SubSystem: '<S424>/Initialize_Timer' incorporates:
             *  ActionPort: '<S428>/Action Port'
             */
            /* Switch: '<S430>/Switch1' */
            if (rtb_OR1)
            {
                /* Switch: '<S427>/Switch1' */
                if (rtb_Comparison1_b4)
                {
                    /* Switch: '<S430>/Switch1' incorporates:
                     *  Constant: '<S157>/Calib'
                     */
                    BCPR_ac_B.Switch1_b = KeBCPR_t_NegSlip_StblStSlipDtctTimeHT;
                }
                else
                {
                    /* Switch: '<S430>/Switch1' incorporates:
                     *  Constant: '<S156>/Calib'
                     */
                    BCPR_ac_B.Switch1_b = KeBCPR_t_NegSlip_StblStSlipDtctTime;
                }

                /* End of Switch: '<S427>/Switch1' */
            }
            else
            {
                /* Switch: '<S430>/Switch1' incorporates:
                 *  Constant: '<S158>/Calib'
                 */
                BCPR_ac_B.Switch1_b = KeBCPR_t_NegSlip_StblStSlipRcvryTime;
            }

            /* End of Switch: '<S430>/Switch1' */
            BCPR_ac_DW.UnitDelay_DSTATE_d = HeBCPR_t_MedTED_dT;

            /* End of Outputs for SubSystem: '<S424>/Initialize_Timer' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S424>/Timer_Increment' incorporates:
             *  ActionPort: '<S429>/Action Port'
             */
            /* Sum: '<S429>/Sum' incorporates:
             *  Constant: '<S103>/Calib'
             *  UnitDelay: '<S424>/Unit Delay'
             */
            BCPR_ac_DW.UnitDelay_DSTATE_d += HeBCPR_t_MedTED_dT;

            /* End of Outputs for SubSystem: '<S424>/Timer_Increment' */
        }

        /* End of If: '<S424>/If' */

        /* Switch: '<S426>/Switch1' incorporates:
         *  RelationalOperator: '<S424>/Comparison2'
         *  UnitDelay: '<S424>/Unit Delay'
         */
        if (BCPR_ac_B.Switch1_b < BCPR_ac_DW.UnitDelay_DSTATE_d)
        {
            BCPR_ac_DW.UnitDelay_DSTATE_nq = rtb_OR1;
        }

        /* End of Switch: '<S426>/Switch1' */
        /* End of Outputs for SubSystem: '<S421>/SlipDetected' */
    }

    /* End of If: '<S421>/If' */

    /* If: '<S324>/If1' incorporates:
     *  Gain: '<S420>/Gain'
     *  Logic: '<S323>/Logical'
     *  Logic: '<S323>/Logical2'
     *  Switch: '<S419>/Switch1'
     *  UnitDelay: '<S323>/Unit Delay'
     *  UnitDelay: '<S421>/Unit Delay'
     */
    if (BCPR_ac_DW.UnitDelay_DSTATE_nq)
    {
        /* Switch: '<S415>/Switch' incorporates:
         *  Constant: '<S141>/Calib'
         *  RelationalOperator: '<S415>/Comparison1'
         */
        if (KeBCPR_n_NegSlip_StblStSlipDtctThreshHT >
                rtb_TmpSignalConversionAtVeBCPR_n_BeltSl)
        {
            /* Switch: '<S415>/Switch1' */
            if (rtb_Logical_on)
            {
                /* Merge: '<S324>/Merge2' incorporates:
                 *  Constant: '<S134>/Calib'
                 *  Switch: '<S415>/Switch'
                 */
                rtb_TmpSignalConversionAtVeBPDR_M_BeltCa =
                    KeBCPR_dM_NegSlipRcvTcR_RmpRt;
            }

            /* End of Switch: '<S415>/Switch1' */
        }
        else
        {
            /* Merge: '<S324>/Merge2' incorporates:
             *  Constant: '<S135>/Calib'
             *  Switch: '<S415>/Switch'
             */
            rtb_TmpSignalConversionAtVeBPDR_M_BeltCa =
                KeBCPR_dM_NegSlipRcvTcR_RmpRtFast;
        }

        /* End of Switch: '<S415>/Switch' */
    }

    rtb_Logical_on = ((BCPR_ac_DW.UnitDelay_DSTATE_nq) &&
                      (!BCPR_ac_DW.UnitDelay_DSTATE_e));

    /* End of Outputs for SubSystem: '<S324>/Slip_Remed' */

    /* If: '<S319>/If2' incorporates:
     *  UnitDelay: '<S319>/Unit Delay2'
     */
    if (BCPR_ac_DW.UnitDelay2_DSTATE != rtb_TmpSignalConversionAtVeBPDR_M_BeltCa)
    {
        /* Outputs for IfAction SubSystem: '<S319>/New_RampRate_Calc' incorporates:
         *  ActionPort: '<S413>/Action Port'
         */
        /* Product: '<S413>/Product' incorporates:
         *  Constant: '<S103>/Calib'
         */
        BCPR_ac_B.Product = rtb_TmpSignalConversionAtVeBPDR_M_BeltCa *
            HeBCPR_t_MedTED_dT;

        /* Product: '<S413>/Product1' incorporates:
         *  Constant: '<S150>/KeTCPR_t_CntrlTcR_LeadTmForOfst'
         */
        BCPR_ac_B.Product1 = rtb_TmpSignalConversionAtVeBPDR_M_BeltCa *
            KeBCPR_t_CntrlTcR_LeadTmForOfst;

        /* End of Outputs for SubSystem: '<S319>/New_RampRate_Calc' */
    }

    /* End of If: '<S319>/If2' */

    /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */
    /* If: '<S313>/If' incorporates:
     *  Abs: '<S334>/Abs3'
     *  Constant: '<S325>/Constant Value1'
     *  Constant: '<S325>/Constant Value2'
     *  Constant: '<S325>/Constant Value3'
     *  Constant: '<S335>/Constant Value1'
     *  Constant: '<S335>/Constant Value3'
     *  Constant: '<S51>/Constant Value10'
     *  Gain: '<S51>/Gain1'
     *  Logic: '<S328>/AND'
     *  Logic: '<S328>/OR1'
     *  MinMax: '<S335>/MinMax3'
     *  RelationalOperator: '<S325>/Relational Operator'
     *  RelationalOperator: '<S330>/Relational Operator'
     *  RelationalOperator: '<S330>/Relational Operator1'
     *  RelationalOperator: '<S331>/Relational Operator'
     *  RelationalOperator: '<S331>/Relational Operator1'
     *  RelationalOperator: '<S351>/Relational Operator'
     *  RelationalOperator: '<S351>/Relational Operator1'
     *  Sum: '<S335>/Sum2'
     *  Switch: '<S330>/Switch'
     *  Switch: '<S330>/Switch1'
     *  Switch: '<S331>/Switch'
     *  Switch: '<S331>/Switch1'
     *  Switch: '<S334>/Switch1'
     *  Switch: '<S350>/Switch1'
     *  Switch: '<S351>/Switch'
     *  Switch: '<S351>/Switch1'
     *  UnitDelay: '<S328>/Unit Delay'
     *  UnitDelay: '<S335>/Unit Delay'
     * */
    rtb_OR1 = ((-rtb_TmpSignalConversionAtVeBPDR_M_Belt_a) < 0.0F);

    /* Outputs for Atomic SubSystem: '<S325>/EdgeRising' */
    rtb_NotEqual_n = (rtb_OR1 && (!BCPR_ac_DW.UnitDelay_DSTATE_ad));
    BCPR_ac_DW.UnitDelay_DSTATE_ad = rtb_OR1;

    /* End of Outputs for SubSystem: '<S325>/EdgeRising' */
    if (rtb_AND_pv)
    {
        BCPR_ac_DW.UnitDelay_DSTATE_m = 0.0F;
    }
    else
    {
        BCPR_ac_DW.UnitDelay_DSTATE_m = fminf(BCPR_ac_DW.UnitDelay_DSTATE_m,
            0.0F);
    }

    rtb_Switch1 = rtb_TmpSignalConversionAtVeBPDR_M_Belt_a -
        BCPR_ac_DW.UnitDelay_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S335>/Limiter' */
    if (rtb_TmpSignalConversionAtVeBPDR_M_Belt_a < rtb_Switch1)
    {
        /* Switch: '<S325>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }

    if (rtb_Switch1 <= 0.0F)
    {
        /* Switch: '<S351>/Switch' */
        rtb_Switch1 = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S335>/Limiter' */

    /* Outputs for Enabled SubSystem: '<S332>/Start_TcR_Ramp' incorporates:
     *  EnablePort: '<S339>/Enable'
     */
    if (rtb_AND_pv)
    {
        /* If: '<S339>/If1' incorporates:
         *  Abs: '<S325>/Abs'
         *  Constant: '<S118>/KeTCPR_b_CntrlTcR_OvrdTo0_OnRst'
         */
        if (KeBCPR_b_CntrlTcR_OvrdTo0_OnRst)
        {
            /* Outputs for IfAction SubSystem: '<S339>/TcRMaxOvrdToZero' incorporates:
             *  ActionPort: '<S342>/Action Port'
             */
            BCPR_ac_TcRMaxOvrdToZero(&BCPR_ac_B.Merge_a);

            /* End of Outputs for SubSystem: '<S339>/TcRMaxOvrdToZero' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S339>/TcRMaxNormal' incorporates:
             *  ActionPort: '<S341>/Action Port'
             */
            BCPR_ac_TcRMaxNormal(rtb_TmpSignalConversionAtVeBPDR_M_Belt_a,
                                 &BCPR_ac_B.Merge_a);

            /* End of Outputs for SubSystem: '<S339>/TcRMaxNormal' */
        }

        /* End of If: '<S339>/If1' */

        /* Outputs for Atomic SubSystem: '<S332>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S152>/KeTCPR_t_CntrlTcR_RmpHldffOnR'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_o = KeBCPR_t_CntrlTcR_RmpHldffOnR;

        /* End of Outputs for SubSystem: '<S332>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S338>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = BCPR_ac_B.Merge_a;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S332>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S103>/Calib'
         *  Constant: '<S340>/Constant Value4'
         *  MinMax: '<S340>/Maximum'
         *  Sum: '<S340>/Subtraction'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_o = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_o -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S332>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S336>/Switch1' incorporates:
         *  Abs: '<S332>/Abs'
         *  Switch: '<S338>/Switch1'
         */
        if (rtb_Logical_on)
        {
            BCPR_ac_DW.UnitDelay1_DSTATE_n = fabsf(rtb_Switch);
        }

        /* Outputs for Atomic SubSystem: '<S332>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S332>/Constant Value2'
         *  Constant: '<S332>/Constant Value3'
         *  Constant: '<S340>/Constant Value2'
         *  Logic: '<S332>/Logical'
         *  RelationalOperator: '<S332>/Comparison1'
         *  RelationalOperator: '<S340>/Greater  Than1'
         *  Switch: '<S338>/Switch1'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        if ((BCPR_ac_DW.UnitDelay_DSTATE_o > 0.0F) && (BCPR_ac_B.Product >= 0.0F))
        {
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = 0.0F;
        }
        else
        {
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = BCPR_ac_B.Product;
        }

        /* End of Switch: '<S337>/Switch1' */
        /* End of Outputs for SubSystem: '<S332>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S338>/Switch1' incorporates:
         *  Sum: '<S332>/Sum1'
         */
        rtb_TmpSignalConversionAtVeBCPR_n_BeltSl +=
            BCPR_ac_DW.UnitDelay1_DSTATE_n;
    }

    /* End of Outputs for SubSystem: '<S332>/Start_TcR_Ramp' */

    /* Outputs for Atomic SubSystem: '<S325>/Limiter' */
    if (rtb_Switch1 >= rtb_TmpSignalConversionAtVeBCPR_n_BeltSl)
    {
        /* Switch: '<S325>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeBCPR_n_BeltSl;
    }

    if (rtb_Switch1 > 0.0F)
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  UnitDelay: '<S325>/Unit Delay1'
         */
        BCPR_ac_DW.UnitDelay1_DSTATE_n = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S336>/Switch1' incorporates:
         *  UnitDelay: '<S325>/Unit Delay1'
         */
        BCPR_ac_DW.UnitDelay1_DSTATE_n = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S325>/Limiter' */

    /* Outputs for Enabled SubSystem: '<S333>/Start_TcR_Ramp' incorporates:
     *  EnablePort: '<S346>/Enable'
     */
    if (rtb_NotEqual_n)
    {
        /* If: '<S346>/If1' incorporates:
         *  Constant: '<S112>/KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst'
         */
        if (KeBCPR_b_CntrlTcRMin_OvrdTo0_OnRst)
        {
            /* Outputs for IfAction SubSystem: '<S346>/TcRMinOvrdToZero' incorporates:
             *  ActionPort: '<S349>/Action Port'
             */
            BCPR_ac_TcRMaxOvrdToZero(&BCPR_ac_B.Merge);

            /* End of Outputs for SubSystem: '<S346>/TcRMinOvrdToZero' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S346>/TcRMinNormal' incorporates:
             *  ActionPort: '<S348>/Action Port'
             */
            BCPR_ac_TcRMaxNormal(rtb_TmpSignalConversionAtVeBPDR_M_Belt_a,
                                 &BCPR_ac_B.Merge);

            /* End of Outputs for SubSystem: '<S346>/TcRMinNormal' */
        }

        /* End of If: '<S346>/If1' */

        /* Outputs for Atomic SubSystem: '<S333>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S347>/Switch1' incorporates:
         *  Constant: '<S146>/KeTCPR_t_CntrlTcRMin_RmpHldffOnR'
         *  UnitDelay: '<S347>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_bo = KeBCPR_t_CntrlTcRMin_RmpHldffOnR;

        /* End of Outputs for SubSystem: '<S333>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S345>/Switch1' */
        rtb_Switch1 = BCPR_ac_B.Merge;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S333>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S347>/Switch1' incorporates:
         *  Constant: '<S103>/Calib'
         *  Constant: '<S347>/Constant Value4'
         *  MinMax: '<S347>/Maximum'
         *  Sum: '<S347>/Subtraction'
         *  UnitDelay: '<S347>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_bo = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_bo -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S333>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S344>/Switch1' incorporates:
         *  Gain: '<S333>/Gain'
         *  Switch: '<S345>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = -BCPR_ac_B.Product;

        /* Outputs for Atomic SubSystem: '<S333>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S344>/Switch1' incorporates:
         *  Constant: '<S333>/Constant Value3'
         *  Constant: '<S347>/Constant Value2'
         *  Gain: '<S333>/Gain'
         *  Logic: '<S333>/Logical'
         *  RelationalOperator: '<S333>/Comparison1'
         *  RelationalOperator: '<S347>/Greater  Than1'
         *  Switch: '<S345>/Switch1'
         *  UnitDelay: '<S347>/Unit Delay'
         */
        if ((BCPR_ac_DW.UnitDelay_DSTATE_bo > 0.0F) && ((-BCPR_ac_B.Product) <=
                0.0F))
        {
            /* Switch: '<S344>/Switch1' incorporates:
             *  Constant: '<S333>/Constant Value2'
             */
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = 0.0F;
        }

        /* End of Switch: '<S344>/Switch1' */
        /* End of Outputs for SubSystem: '<S333>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S343>/Switch1' incorporates:
         *  Abs: '<S333>/Abs'
         *  Switch: '<S345>/Switch1'
         */
        if (rtb_Logical_on)
        {
            BCPR_ac_DW.UnitDelay2_DSTATE_p = fabsf(rtb_Switch);
        }

        /* Switch: '<S345>/Switch1' incorporates:
         *  Sum: '<S333>/Sum1'
         */
        rtb_Switch1 = BCPR_ac_DW.UnitDelay2_DSTATE_p +
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl;
    }

    /* End of Outputs for SubSystem: '<S333>/Start_TcR_Ramp' */

    /* Outputs for Atomic SubSystem: '<S325>/Limiter1' */
    if (0.0F < rtb_Switch1)
    {
        /* Switch: '<S325>/Switch1' */
        rtb_Switch1 = 0.0F;
    }

    if (rtb_Switch1 > (-rtb_TmpSignalConversionAtVeBPDR_M_Belt_a))
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  UnitDelay: '<S325>/Unit Delay2'
         */
        BCPR_ac_DW.UnitDelay2_DSTATE_p = rtb_Switch1;
    }
    else
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  UnitDelay: '<S325>/Unit Delay2'
         */
        BCPR_ac_DW.UnitDelay2_DSTATE_p =
            -rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }

    /* End of Outputs for SubSystem: '<S325>/Limiter1' */
    /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */

    /* Outputs for Atomic SubSystem: '<S191>/EdgeRising' */
    /* Logic: '<S229>/AND' incorporates:
     *  Logic: '<S229>/OR1'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_AND_pv = !BCPR_ac_DW.UnitDelay_DSTATE_c3;

    /* Update for UnitDelay: '<S229>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_c3 = true;

    /* End of Outputs for SubSystem: '<S191>/EdgeRising' */

    /* UnitDelay: '<S194>/Unit Delay2' */
    rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = BCPR_ac_DW.UnitDelay2_DSTATE_d;

    /* Switch: '<S190>/Switch1' incorporates:
     *  Constant: '<S162>/Constant Value1'
     *  RelationalOperator: '<S162>/Comparison1'
     */
    if (rtb_TmpSignalConversionAtVeATRR_M_Output >= 0.0F)
    {
        /* Switch: '<S190>/Switch1' incorporates:
         *  Constant: '<S137>/Calib'
         */
        BCPR_ac_DW.UnitDelay2_DSTATE_d = KeBCPR_dM_PosSlipPwrOnTcR_RmpRt;
    }
    else
    {
        /* Switch: '<S190>/Switch1' incorporates:
         *  Constant: '<S136>/Calib'
         */
        BCPR_ac_DW.UnitDelay2_DSTATE_d = KeBCPR_dM_PosSlipPwrOffTcR_RmpRt;
    }

    /* End of Switch: '<S190>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S96>/Limiter' */
    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value1'
     *  RelationalOperator: '<S167>/Relational Operator'
     */
    if (10000.0F < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = 10000.0F;
    }
    else
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }

    /* End of Switch: '<S167>/Switch1' */
    /* End of Outputs for SubSystem: '<S96>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S162>/EdgeRising' */
    /* Logic: '<S189>/AND' incorporates:
     *  Logic: '<S189>/OR1'
     *  UnitDelay: '<S189>/Unit Delay'
     */
    rtb_Logical_on = !BCPR_ac_DW.UnitDelay_DSTATE_hk;

    /* Update for UnitDelay: '<S189>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_hk = true;

    /* End of Outputs for SubSystem: '<S162>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S292>/EdgeRising' */
    /* Logic: '<S308>/AND' incorporates:
     *  Logic: '<S308>/OR1'
     *  UnitDelay: '<S308>/Unit Delay'
     */
    rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_i41;

    /* Update for UnitDelay: '<S308>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_i41 = true;

    /* End of Outputs for SubSystem: '<S292>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S292>/EdgeFalling2' */
    /* Update for UnitDelay: '<S307>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_eq = true;

    /* End of Outputs for SubSystem: '<S292>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S292>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S311>/EdgeRising' */
    /* Logic: '<S312>/AND' incorporates:
     *  Logic: '<S312>/OR1'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_NotEqual_n = !BCPR_ac_DW.UnitDelay_DSTATE_gi;

    /* Update for UnitDelay: '<S312>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_gi = true;

    /* End of Outputs for SubSystem: '<S311>/EdgeRising' */

    /* Switch: '<S311>/Switch1' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S154>/KeTCPR_t_DlydRisingEdgeTmr'
     *  Constant: '<S311>/Constant Value1'
     *  Logic: '<S311>/OR'
     *  MinMax: '<S311>/Minimum'
     *  Sum: '<S311>/Summation'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    if (rtb_NotEqual_n)
    {
        BCPR_ac_DW.UnitDelay_DSTATE_b0 = 0.0F;
    }
    else
    {
        BCPR_ac_DW.UnitDelay_DSTATE_b0 = fminf(KeBCPR_t_DlydRisingEdgeTmr,
            HeBCPR_t_MedTED_dT + BCPR_ac_DW.UnitDelay_DSTATE_b0);
    }

    /* End of Switch: '<S311>/Switch1' */
    /* End of Outputs for SubSystem: '<S292>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S292>/EdgeFalling1' */
    /* Update for UnitDelay: '<S306>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_k = true;

    /* End of Outputs for SubSystem: '<S292>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S292>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S292>/Turn On Delay Time' */
    /* Update for UnitDelay: '<S310>/Unit Delay' incorporates:
     *  Constant: '<S154>/KeTCPR_t_DlydRisingEdgeTmr'
     *  Logic: '<S292>/Logical'
     *  Logic: '<S310>/OR'
     *  Logic: '<S310>/OR1'
     *  RelationalOperator: '<S311>/Greater  Than'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_jf = (rtb_OR1 ||
        ((BCPR_ac_DW.UnitDelay_DSTATE_b0 < KeBCPR_t_DlydRisingEdgeTmr) &&
         (BCPR_ac_DW.UnitDelay_DSTATE_jf)));

    /* End of Outputs for SubSystem: '<S292>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S292>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S96>/Limiter' */
    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S96>/Constant Value'
     *  RelationalOperator: '<S167>/Relational Operator1'
     */
    if (rtb_Switch1 <= 0.0F)
    {
        rtb_Switch1 = 0.0F;
    }

    /* End of Switch: '<S167>/Switch' */
    /* End of Outputs for SubSystem: '<S96>/Limiter' */

    /* Outputs for IfAction SubSystem: '<S199>/Slip_Remed' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    /* If: '<S199>/If1' incorporates:
     *  Abs: '<S290>/Abs2'
     *  Constant: '<S138>/Calib'
     *  Constant: '<S142>/Calib'
     *  Constant: '<S143>/Calib'
     *  Constant: '<S51>/Constant Value3'
     *  Logic: '<S290>/Logical'
     *  Logic: '<S290>/Logical1'
     *  Logic: '<S290>/Logical2'
     *  Logic: '<S290>/Logical3'
     *  RelationalOperator: '<S290>/Comparison'
     *  RelationalOperator: '<S290>/Comparison2'
     *  RelationalOperator: '<S290>/Comparison3'
     *  RelationalOperator: '<S297>/Not Equal'
     *  UnitDelay: '<S297>/Unit Delay'
     * */
    rtb_OR1 = (KeBCPR_dM_PosSlipRcvTcR_RmpRt < 100000.0F);
    rtb_NotEqual_n = (rtb_Switch1 > KeBCPR_n_PosSlip_StblStSlipDtctThreshHT);
    rtb_NotEqual_n = (((rtb_OR1 && (rtb_Switch1 >
                         KeBCPR_n_PosSlip_StblStSlipDtctThresh)) &&
                       (!rtb_NotEqual_n)) || rtb_NotEqual_n);

    /* Outputs for Atomic SubSystem: '<S296>/EdgeBi1' */
    rtb_Comparison1_b4 = (rtb_NotEqual_n != BCPR_ac_DW.UnitDelay_DSTATE_c);
    BCPR_ac_DW.UnitDelay_DSTATE_c = rtb_NotEqual_n;

    /* End of Outputs for SubSystem: '<S296>/EdgeBi1' */

    /* If: '<S296>/If' incorporates:
     *  If: '<S199>/If1'
     *  Inport: '<S298>/u'
     *  Logic: '<S296>/Logical1'
     *  RelationalOperator: '<S296>/Comparison4'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    if ((BCPR_ac_DW.UnitDelay_DSTATE_br == rtb_NotEqual_n) || rtb_Logical_on)
    {
        /* Outputs for IfAction SubSystem: '<S296>/Reset_PassThr' incorporates:
         *  ActionPort: '<S298>/Action Port'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_br = rtb_NotEqual_n;

        /* End of Outputs for SubSystem: '<S296>/Reset_PassThr' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S296>/SlipDetected' incorporates:
         *  ActionPort: '<S299>/Action Port'
         */
        /* RelationalOperator: '<S299>/Comparison1' incorporates:
         *  Abs: '<S290>/Abs2'
         *  Constant: '<S143>/Calib'
         */
        rtb_AND_m = (rtb_Switch1 > KeBCPR_n_PosSlip_StblStSlipDtctThreshHT);

        /* Outputs for Atomic SubSystem: '<S299>/EdgeRising1' */
        /* Logic: '<S300>/AND' incorporates:
         *  Logic: '<S300>/OR1'
         *  UnitDelay: '<S300>/Unit Delay'
         */
        rtb_AND_pp = (rtb_AND_m && (!BCPR_ac_DW.UnitDelay_DSTATE_m3));

        /* Update for UnitDelay: '<S300>/Unit Delay' */
        BCPR_ac_DW.UnitDelay_DSTATE_m3 = rtb_AND_m;

        /* End of Outputs for SubSystem: '<S299>/EdgeRising1' */

        /* If: '<S299>/If' incorporates:
         *  Constant: '<S102>/Calib'
         *  Inport: '<S303>/dT'
         *  Logic: '<S299>/Logical1'
         *  UnitDelay: '<S299>/Unit Delay'
         */
        if (rtb_Comparison1_b4 || rtb_AND_pp)
        {
            /* Outputs for IfAction SubSystem: '<S299>/Initialize_Timer' incorporates:
             *  ActionPort: '<S303>/Action Port'
             */
            /* Switch: '<S305>/Switch1' */
            if (rtb_NotEqual_n)
            {
                /* Switch: '<S302>/Switch1' */
                if (rtb_AND_m)
                {
                    /* Switch: '<S305>/Switch1' incorporates:
                     *  Constant: '<S160>/Calib'
                     */
                    BCPR_ac_B.Switch1_h = KeBCPR_t_PosSlip_StblStSlipDtctTimeHT;
                }
                else
                {
                    /* Switch: '<S305>/Switch1' incorporates:
                     *  Constant: '<S159>/Calib'
                     */
                    BCPR_ac_B.Switch1_h = KeBCPR_t_PosSlip_StblStSlipDtctTime;
                }

                /* End of Switch: '<S302>/Switch1' */
            }
            else
            {
                /* Switch: '<S305>/Switch1' incorporates:
                 *  Constant: '<S161>/Calib'
                 */
                BCPR_ac_B.Switch1_h = KeBCPR_t_PosSlip_StblStSlipRcvryTime;
            }

            /* End of Switch: '<S305>/Switch1' */
            BCPR_ac_DW.UnitDelay_DSTATE_my = HeBCPR_t_MedTED_dT;

            /* End of Outputs for SubSystem: '<S299>/Initialize_Timer' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S299>/Timer_Increment' incorporates:
             *  ActionPort: '<S304>/Action Port'
             */
            /* Sum: '<S304>/Sum' incorporates:
             *  Constant: '<S102>/Calib'
             *  UnitDelay: '<S299>/Unit Delay'
             */
            BCPR_ac_DW.UnitDelay_DSTATE_my += HeBCPR_t_MedTED_dT;

            /* End of Outputs for SubSystem: '<S299>/Timer_Increment' */
        }

        /* End of If: '<S299>/If' */

        /* Switch: '<S301>/Switch1' incorporates:
         *  RelationalOperator: '<S299>/Comparison2'
         *  UnitDelay: '<S299>/Unit Delay'
         */
        if (BCPR_ac_B.Switch1_h < BCPR_ac_DW.UnitDelay_DSTATE_my)
        {
            BCPR_ac_DW.UnitDelay_DSTATE_br = rtb_NotEqual_n;
        }

        /* End of Switch: '<S301>/Switch1' */
        /* End of Outputs for SubSystem: '<S296>/SlipDetected' */
    }

    /* End of If: '<S296>/If' */

    /* If: '<S199>/If1' incorporates:
     *  Switch: '<S294>/Switch1'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    if (BCPR_ac_DW.UnitDelay_DSTATE_br)
    {
        /* Switch: '<S290>/Switch' incorporates:
         *  Abs: '<S290>/Abs2'
         *  Constant: '<S143>/Calib'
         *  RelationalOperator: '<S290>/Comparison1'
         */
        if (KeBCPR_n_PosSlip_StblStSlipDtctThreshHT > rtb_Switch1)
        {
            /* Switch: '<S290>/Switch1' */
            if (rtb_OR1)
            {
                /* UnitDelay: '<S194>/Unit Delay2' incorporates:
                 *  Constant: '<S138>/Calib'
                 *  Switch: '<S290>/Switch'
                 */
                BCPR_ac_DW.UnitDelay2_DSTATE_d = KeBCPR_dM_PosSlipRcvTcR_RmpRt;
            }

            /* End of Switch: '<S290>/Switch1' */
        }
        else
        {
            /* UnitDelay: '<S194>/Unit Delay2' incorporates:
             *  Constant: '<S139>/Calib'
             *  Switch: '<S290>/Switch'
             */
            BCPR_ac_DW.UnitDelay2_DSTATE_d = KeBCPR_dM_PosSlipRcvTcR_RmpRtFast;
        }

        /* End of Switch: '<S290>/Switch' */
    }

    /* End of Outputs for SubSystem: '<S199>/Slip_Remed' */

    /* If: '<S194>/If2' incorporates:
     *  UnitDelay: '<S194>/Unit Delay2'
     */
    if (rtb_TmpSignalConversionAtVeBCPR_n_BeltSl !=
            BCPR_ac_DW.UnitDelay2_DSTATE_d)
    {
        /* Outputs for IfAction SubSystem: '<S194>/New_RampRate_Calc' incorporates:
         *  ActionPort: '<S288>/Action Port'
         */
        /* Product: '<S288>/Product' incorporates:
         *  Constant: '<S102>/Calib'
         */
        BCPR_ac_B.Product_p = BCPR_ac_DW.UnitDelay2_DSTATE_d *
            HeBCPR_t_MedTED_dT;

        /* Product: '<S288>/Product1' incorporates:
         *  Constant: '<S151>/KeTCPR_t_CntrlTcR_LeadTmForOfst'
         */
        BCPR_ac_B.Product1_c = BCPR_ac_DW.UnitDelay2_DSTATE_d *
            KeBCPR_t_CntrlTcR_LeadTmForOfst;

        /* End of Outputs for SubSystem: '<S194>/New_RampRate_Calc' */
    }

    /* End of If: '<S194>/If2' */

    /* Outputs for IfAction SubSystem: '<S199>/Slip_Remed' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    /* If: '<S199>/If1' incorporates:
     *  Gain: '<S295>/Gain'
     *  RelationalOperator: '<S198>/Comparison5'
     *  UnitDelay: '<S198>/Unit Delay'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    rtb_OR1 = (BCPR_ac_DW.UnitDelay_DSTATE_br != BCPR_ac_DW.UnitDelay_DSTATE_ni);

    /* End of Outputs for SubSystem: '<S199>/Slip_Remed' */

    /* Outputs for Atomic SubSystem: '<S191>/EdgeRising1' */
    /* Logic: '<S230>/AND' incorporates:
     *  Logic: '<S230>/OR1'
     *  UnitDelay: '<S230>/Unit Delay'
     */
    rtb_NotEqual_n = !BCPR_ac_DW.UnitDelay_DSTATE_fw;

    /* Update for UnitDelay: '<S230>/Unit Delay' incorporates:
     *  RelationalOperator: '<S191>/Comparison1'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_fw = true;

    /* End of Outputs for SubSystem: '<S191>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S164>/Limiter' */
    /* Switch: '<S438>/Switch1' incorporates:
     *  Constant: '<S164>/Constant Value1'
     *  RelationalOperator: '<S438>/Relational Operator'
     */
    if (10000.0F < rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T)
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = 10000.0F;
    }
    else
    {
        /* Switch: '<S438>/Switch1' */
        rtb_Switch1 = rtb_TmpSignalConversionAtVeHTDR_M_MtrA_T;
    }

    /* End of Switch: '<S438>/Switch1' */

    /* Switch: '<S438>/Switch' incorporates:
     *  Constant: '<S164>/Constant Value'
     *  RelationalOperator: '<S438>/Relational Operator1'
     */
    if (rtb_Switch1 <= 0.0F)
    {
        /* Switch: '<S438>/Switch' */
        rtb_Switch1 = 0.0F;
    }

    /* End of Switch: '<S438>/Switch' */
    /* End of Outputs for SubSystem: '<S164>/Limiter' */

    /* Outputs for IfAction SubSystem: '<S199>/Slip_Remed' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    /* If: '<S199>/If1' incorporates:
     *  Gain: '<S295>/Gain'
     *  Logic: '<S198>/Logical'
     *  Logic: '<S198>/Logical2'
     *  UnitDelay: '<S198>/Unit Delay'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    rtb_Comparison1_b4 = ((BCPR_ac_DW.UnitDelay_DSTATE_br) &&
                          (!BCPR_ac_DW.UnitDelay_DSTATE_ni));

    /* End of Outputs for SubSystem: '<S199>/Slip_Remed' */

    /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S200>/Action Port'
     */
    /* If: '<S188>/If' incorporates:
     *  Abs: '<S209>/Abs3'
     *  Constant: '<S200>/Constant Value1'
     *  Constant: '<S200>/Constant Value2'
     *  Constant: '<S200>/Constant Value3'
     *  Constant: '<S210>/Constant Value1'
     *  Constant: '<S210>/Constant Value3'
     *  Constant: '<S51>/Constant Value5'
     *  DataStoreRead: '<S51>/Data Store Read3'
     *  Gain: '<S51>/Gain'
     *  Logic: '<S203>/AND'
     *  Logic: '<S203>/OR1'
     *  MinMax: '<S210>/MinMax3'
     *  RelationalOperator: '<S200>/Relational Operator'
     *  RelationalOperator: '<S205>/Relational Operator'
     *  RelationalOperator: '<S205>/Relational Operator1'
     *  RelationalOperator: '<S206>/Relational Operator'
     *  RelationalOperator: '<S206>/Relational Operator1'
     *  RelationalOperator: '<S226>/Relational Operator'
     *  RelationalOperator: '<S226>/Relational Operator1'
     *  Sum: '<S210>/Sum2'
     *  Switch: '<S205>/Switch'
     *  Switch: '<S205>/Switch1'
     *  Switch: '<S206>/Switch'
     *  Switch: '<S206>/Switch1'
     *  Switch: '<S209>/Switch1'
     *  Switch: '<S225>/Switch1'
     *  Switch: '<S226>/Switch'
     *  Switch: '<S226>/Switch1'
     *  UnitDelay: '<S203>/Unit Delay'
     *  UnitDelay: '<S210>/Unit Delay'
     * */
    rtb_AND_m = ((-VeBCPR_M_BeltCapMax_DS) < 0.0F);

    /* Outputs for Atomic SubSystem: '<S200>/EdgeRising' */
    rtb_AND_pp = (rtb_AND_m && (!BCPR_ac_DW.UnitDelay_DSTATE_ao));
    BCPR_ac_DW.UnitDelay_DSTATE_ao = rtb_AND_m;

    /* End of Outputs for SubSystem: '<S200>/EdgeRising' */
    if (rtb_Logical_on)
    {
        BCPR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        BCPR_ac_DW.UnitDelay_DSTATE_g = fminf(BCPR_ac_DW.UnitDelay_DSTATE_g,
            0.0F);
    }

    rtb_TmpSignalConversionAtVeATRR_M_Output = fabsf(VeBCPR_M_BeltCapMax_DS) -
        BCPR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S210>/Limiter' */
    if (VeBCPR_M_BeltCapMax_DS < rtb_TmpSignalConversionAtVeATRR_M_Output)
    {
        /* Switch: '<S200>/Switch1' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = VeBCPR_M_BeltCapMax_DS;
    }

    if (rtb_TmpSignalConversionAtVeATRR_M_Output <= 0.0F)
    {
        /* Switch: '<S226>/Switch' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S210>/Limiter' */

    /* Outputs for Enabled SubSystem: '<S207>/Start_TcR_Ramp' incorporates:
     *  EnablePort: '<S214>/Enable'
     */
    if (rtb_Logical_on)
    {
        /* If: '<S214>/If1' incorporates:
         *  Abs: '<S200>/Abs'
         *  Constant: '<S119>/KeTCPR_b_CntrlTcR_OvrdTo0_OnRst'
         */
        if (KeBCPR_b_CntrlTcR_OvrdTo0_OnRst)
        {
            /* Outputs for IfAction SubSystem: '<S214>/TcRMaxOvrdToZero' incorporates:
             *  ActionPort: '<S217>/Action Port'
             */
            BCPR_ac_TcRMaxOvrdToZero(&BCPR_ac_B.Merge_d);

            /* End of Outputs for SubSystem: '<S214>/TcRMaxOvrdToZero' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S214>/TcRMaxNormal' incorporates:
             *  ActionPort: '<S216>/Action Port'
             */
            BCPR_ac_TcRMaxNormal(fabsf(VeBCPR_M_BeltCapMax_DS),
                                 &BCPR_ac_B.Merge_d);

            /* End of Outputs for SubSystem: '<S214>/TcRMaxNormal' */
        }

        /* End of If: '<S214>/If1' */

        /* Outputs for Atomic SubSystem: '<S207>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S153>/KeTCPR_t_CntrlTcR_RmpHldffOnR'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_n = KeBCPR_t_CntrlTcR_RmpHldffOnR;

        /* End of Outputs for SubSystem: '<S207>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S213>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = BCPR_ac_B.Merge_d;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S207>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S102>/Calib'
         *  Constant: '<S215>/Constant Value4'
         *  MinMax: '<S215>/Maximum'
         *  Sum: '<S215>/Subtraction'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_n = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_n -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S207>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S211>/Switch1' incorporates:
         *  Abs: '<S207>/Abs'
         *  Switch: '<S213>/Switch1'
         */
        if (rtb_Comparison1_b4)
        {
            BCPR_ac_DW.UnitDelay1_DSTATE_d = rtb_Switch1;
        }

        /* Outputs for Atomic SubSystem: '<S207>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S212>/Switch1' incorporates:
         *  Constant: '<S207>/Constant Value2'
         *  Constant: '<S207>/Constant Value3'
         *  Constant: '<S215>/Constant Value2'
         *  Logic: '<S207>/Logical'
         *  RelationalOperator: '<S207>/Comparison1'
         *  RelationalOperator: '<S215>/Greater  Than1'
         *  Switch: '<S213>/Switch1'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        if ((BCPR_ac_DW.UnitDelay_DSTATE_n > 0.0F) && (BCPR_ac_B.Product_p >=
                0.0F))
        {
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = 0.0F;
        }
        else
        {
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl = BCPR_ac_B.Product_p;
        }

        /* End of Switch: '<S212>/Switch1' */
        /* End of Outputs for SubSystem: '<S207>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S213>/Switch1' incorporates:
         *  Sum: '<S207>/Sum1'
         */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            BCPR_ac_DW.UnitDelay1_DSTATE_d +
            rtb_TmpSignalConversionAtVeBCPR_n_BeltSl;
    }

    /* End of Outputs for SubSystem: '<S207>/Start_TcR_Ramp' */

    /* Outputs for Atomic SubSystem: '<S200>/Limiter' */
    if (rtb_TmpSignalConversionAtVeATRR_M_Output >=
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S200>/Switch1' */
        rtb_TmpSignalConversionAtVeATRR_M_Output =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }

    if (rtb_TmpSignalConversionAtVeATRR_M_Output > 0.0F)
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  UnitDelay: '<S200>/Unit Delay1'
         */
        BCPR_ac_DW.UnitDelay1_DSTATE_d =
            rtb_TmpSignalConversionAtVeATRR_M_Output;
    }
    else
    {
        /* Switch: '<S211>/Switch1' incorporates:
         *  UnitDelay: '<S200>/Unit Delay1'
         */
        BCPR_ac_DW.UnitDelay1_DSTATE_d = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S200>/Limiter' */

    /* Outputs for Enabled SubSystem: '<S208>/Start_TcR_Ramp' incorporates:
     *  EnablePort: '<S221>/Enable'
     */
    if (rtb_AND_pp)
    {
        /* If: '<S221>/If1' incorporates:
         *  Constant: '<S113>/KeTCPR_b_CntrlTcRMin_OvrdTo0_OnRst'
         */
        if (KeBCPR_b_CntrlTcRMin_OvrdTo0_OnRst)
        {
            /* Outputs for IfAction SubSystem: '<S221>/TcRMinOvrdToZero' incorporates:
             *  ActionPort: '<S224>/Action Port'
             */
            BCPR_ac_TcRMaxOvrdToZero(&BCPR_ac_B.Merge_aj);

            /* End of Outputs for SubSystem: '<S221>/TcRMinOvrdToZero' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S221>/TcRMinNormal' incorporates:
             *  ActionPort: '<S223>/Action Port'
             */
            BCPR_ac_TcRMaxNormal(VeBCPR_M_BeltCapMax_DS, &BCPR_ac_B.Merge_aj);

            /* End of Outputs for SubSystem: '<S221>/TcRMinNormal' */
        }

        /* End of If: '<S221>/If1' */

        /* Outputs for Atomic SubSystem: '<S208>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S147>/KeTCPR_t_CntrlTcRMin_RmpHldffOnR'
         *  UnitDelay: '<S222>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_gs = KeBCPR_t_CntrlTcRMin_RmpHldffOnR;

        /* End of Outputs for SubSystem: '<S208>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S220>/Switch1' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = BCPR_ac_B.Merge_aj;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S208>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S102>/Calib'
         *  Constant: '<S222>/Constant Value4'
         *  MinMax: '<S222>/Maximum'
         *  Sum: '<S222>/Subtraction'
         *  UnitDelay: '<S222>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_gs = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_gs -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S208>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S219>/Switch1' incorporates:
         *  Gain: '<S208>/Gain'
         *  Switch: '<S220>/Switch1'
         */
        rtb_TmpSignalConversionAtVeATRR_M_Output = -BCPR_ac_B.Product_p;

        /* Outputs for Atomic SubSystem: '<S208>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S208>/Constant Value3'
         *  Constant: '<S222>/Constant Value2'
         *  Gain: '<S208>/Gain'
         *  Logic: '<S208>/Logical'
         *  RelationalOperator: '<S208>/Comparison1'
         *  RelationalOperator: '<S222>/Greater  Than1'
         *  Switch: '<S220>/Switch1'
         *  UnitDelay: '<S222>/Unit Delay'
         */
        if ((BCPR_ac_DW.UnitDelay_DSTATE_gs > 0.0F) && ((-BCPR_ac_B.Product_p) <=
             0.0F))
        {
            /* Switch: '<S219>/Switch1' incorporates:
             *  Constant: '<S208>/Constant Value2'
             */
            rtb_TmpSignalConversionAtVeATRR_M_Output = 0.0F;
        }

        /* End of Switch: '<S219>/Switch1' */
        /* End of Outputs for SubSystem: '<S208>/Timer Retrigger Reset Enabled' */

        /* Switch: '<S218>/Switch1' incorporates:
         *  Abs: '<S208>/Abs'
         *  Switch: '<S220>/Switch1'
         */
        if (rtb_Comparison1_b4)
        {
            BCPR_ac_DW.UnitDelay2_DSTATE_h = rtb_Switch1;
        }

        /* Switch: '<S220>/Switch1' incorporates:
         *  Sum: '<S208>/Sum1'
         */
        rtb_TmpSignalConversionAtVeATRR_M_Output +=
            BCPR_ac_DW.UnitDelay2_DSTATE_h;
    }

    /* End of Outputs for SubSystem: '<S208>/Start_TcR_Ramp' */

    /* Outputs for Atomic SubSystem: '<S200>/Limiter1' */
    if (0.0F < rtb_TmpSignalConversionAtVeATRR_M_Output)
    {
        /* Switch: '<S200>/Switch1' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = 0.0F;
    }

    if (rtb_TmpSignalConversionAtVeATRR_M_Output > (-VeBCPR_M_BeltCapMax_DS))
    {
        /* Switch: '<S218>/Switch1' incorporates:
         *  UnitDelay: '<S200>/Unit Delay2'
         */
        BCPR_ac_DW.UnitDelay2_DSTATE_h =
            rtb_TmpSignalConversionAtVeATRR_M_Output;
    }
    else
    {
        /* Switch: '<S218>/Switch1' incorporates:
         *  UnitDelay: '<S200>/Unit Delay2'
         */
        BCPR_ac_DW.UnitDelay2_DSTATE_h = -VeBCPR_M_BeltCapMax_DS;
    }

    /* End of Outputs for SubSystem: '<S200>/Limiter1' */
    /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */

    /* Outputs for IfAction SubSystem: '<S191>/Lcked_Ld_TcR_Cntrl' incorporates:
     *  ActionPort: '<S231>/Action Port'
     */
    /* If: '<S191>/If1' incorporates:
     *  Constant: '<S231>/Constant Value1'
     *  DataStoreRead: '<S51>/Data Store Read3'
     *  Gain: '<S51>/Gain'
     *  Logic: '<S234>/AND'
     *  Logic: '<S234>/OR1'
     *  RelationalOperator: '<S231>/Relational Operator'
     *  UnitDelay: '<S234>/Unit Delay'
     * */
    rtb_Logical_on = ((-VeBCPR_M_BeltCapMax_DS) < 0.0F);

    /* Outputs for Atomic SubSystem: '<S231>/EdgeRising' */
    rtb_Comparison1_b4 = (rtb_Logical_on && (!BCPR_ac_DW.UnitDelay_DSTATE_ef));
    BCPR_ac_DW.UnitDelay_DSTATE_ef = rtb_Logical_on;

    /* End of Outputs for SubSystem: '<S231>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S199>/Slip_Remed' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    /* If: '<S199>/If1' incorporates:
     *  Gain: '<S295>/Gain'
     *  If: '<S191>/If1'
     *  Switch: '<S231>/Switch'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    if (BCPR_ac_DW.UnitDelay_DSTATE_br)
    {
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        /* If: '<S188>/If' incorporates:
         *  Product: '<S200>/Product'
         *  Sum: '<S235>/Sum2'
         *  UnitDelay: '<S200>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            BCPR_ac_DW.UnitDelay1_DSTATE_d;

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
    }
    else
    {
        /* Sum: '<S235>/Sum2' incorporates:
         *  DataStoreRead: '<S51>/Data Store Read3'
         */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = VeBCPR_M_BeltCapMax_DS;
    }

    /* End of Outputs for SubSystem: '<S199>/Slip_Remed' */

    /* Outputs for Atomic SubSystem: '<S235>/Limiter' */
    /* If: '<S191>/If1' incorporates:
     *  Constant: '<S115>/KeBCPR_b_CntrlTcR_ApplyLdOfstOnR'
     *  Constant: '<S231>/Constant Value2'
     *  Constant: '<S235>/Constant Value3'
     *  DataStoreRead: '<S51>/Data Store Read3'
     *  If: '<S188>/If'
     *  If: '<S238>/If1'
     *  Logic: '<S238>/Logical Operator'
     *  Logic: '<S238>/Logical Operator1'
     *  Logic: '<S238>/Logical Operator2'
     *  Product: '<S200>/Product'
     *  RelationalOperator: '<S236>/Relational Operator'
     *  RelationalOperator: '<S236>/Relational Operator1'
     *  RelationalOperator: '<S240>/Relational Operator'
     *  RelationalOperator: '<S240>/Relational Operator1'
     *  Switch: '<S236>/Switch'
     *  Switch: '<S236>/Switch1'
     *  Switch: '<S240>/Switch'
     *  Switch: '<S240>/Switch1'
     *  UnitDelay: '<S200>/Unit Delay1'
     *  UnitDelay: '<S231>/Unit Delay2'
     */
    if (VeBCPR_M_BeltCapMax_DS < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S231>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = VeBCPR_M_BeltCapMax_DS;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d <= 0.0F)
    {
        /* Switch: '<S240>/Switch' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S235>/Limiter' */
    if ((((KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_AND_pv) || rtb_OR1) ||
            rtb_NotEqual_n)
    {
        /* Outputs for IfAction SubSystem: '<S238>/RstPth_Crt_TcRMax' incorporates:
         *  ActionPort: '<S243>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax(BCPR_ac_B.Product1_c,
            BCPR_ac_DW.UnitDelay1_DSTATE_d,
            &rtb_TmpSignalConversionAtVeATRR_M_Output);

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S238>/RstPth_Crt_TcRMax' */
    }
    else if ((!KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_AND_pv)
    {
        /* Outputs for IfAction SubSystem: '<S238>/RstHld_Crt_TcRMax' incorporates:
         *  ActionPort: '<S242>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        BCPR_ac_RstHld_Crt_TcRMax(BCPR_ac_DW.UnitDelay1_DSTATE_d,
            &rtb_TmpSignalConversionAtVeATRR_M_Output);

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S238>/RstHld_Crt_TcRMax' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S238>/Achived_LdRamp' incorporates:
         *  ActionPort: '<S241>/Action Port'
         */
        BCPR_ac_Achived_LdRamp(BCPR_ac_B.Product_p,
                               BCPR_ac_DW.UnitDelay2_DSTATE_a,
                               &rtb_TmpSignalConversionAtVeATRR_M_Output);

        /* End of Outputs for SubSystem: '<S238>/Achived_LdRamp' */
    }

    /* Outputs for Atomic SubSystem: '<S231>/Limiter1' */
    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d >=
            rtb_TmpSignalConversionAtVeATRR_M_Output)
    {
        /* Switch: '<S231>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeATRR_M_Output;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d > 0.0F)
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_a =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_a = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S231>/Limiter1' */

    /* If: '<S239>/If1' incorporates:
     *  Constant: '<S111>/KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR'
     *  Gain: '<S239>/Gain'
     *  If: '<S188>/If'
     *  If: '<S191>/If1'
     *  Logic: '<S239>/Logical Operator'
     *  Logic: '<S239>/Logical Operator1'
     *  Logic: '<S239>/Logical Operator2'
     *  Product: '<S200>/Product1'
     *  Switch: '<S200>/Switch1'
     *  UnitDelay: '<S200>/Unit Delay1'
     *  UnitDelay: '<S231>/Unit Delay1'
     */
    if ((((KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4) ||
            rtb_OR1) || rtb_NotEqual_n)
    {
        /* Outputs for IfAction SubSystem: '<S239>/RstPth_Crt_TcRMax' incorporates:
         *  ActionPort: '<S246>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax_j(BCPR_ac_B.Product1_c,
            -BCPR_ac_DW.UnitDelay1_DSTATE_d,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S239>/RstPth_Crt_TcRMax' */
    }
    else if ((!KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4)
    {
        /* Outputs for IfAction SubSystem: '<S239>/RstHld_Crt_TcRMax' incorporates:
         *  ActionPort: '<S245>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        BCPR_ac_RstHld_Crt_TcRMax_c(-BCPR_ac_DW.UnitDelay1_DSTATE_d,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S239>/RstHld_Crt_TcRMax' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S239>/Achived_LdRamp' incorporates:
         *  ActionPort: '<S244>/Action Port'
         */
        BCPR_ac_Achived_LdRamp_o(-BCPR_ac_B.Product_p,
            BCPR_ac_DW.UnitDelay1_DSTATE_c,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S239>/Achived_LdRamp' */
    }

    /* End of If: '<S239>/If1' */

    /* Outputs for Atomic SubSystem: '<S231>/Limiter2' */
    /* If: '<S191>/If1' incorporates:
     *  Constant: '<S231>/Constant Value3'
     *  DataStoreRead: '<S51>/Data Store Read3'
     *  Gain: '<S197>/Gain'
     *  Gain: '<S51>/Gain'
     *  Product: '<S231>/Product'
     *  RelationalOperator: '<S237>/Relational Operator'
     *  RelationalOperator: '<S237>/Relational Operator1'
     *  Switch: '<S237>/Switch'
     *  Switch: '<S237>/Switch1'
     *  UnitDelay: '<S231>/Unit Delay1'
     *  UnitDelay: '<S231>/Unit Delay2'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S231>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = 0.0F;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d > (-VeBCPR_M_BeltCapMax_DS))
    {
        BCPR_ac_DW.UnitDelay1_DSTATE_c =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay1_DSTATE_c = -VeBCPR_M_BeltCapMax_DS;
    }

    /* End of Outputs for SubSystem: '<S231>/Limiter2' */
    VeBCPC_M_BeltTrqMaxOITR = BCPR_ac_DW.UnitDelay2_DSTATE_a;

    /* End of Outputs for SubSystem: '<S191>/Lcked_Ld_TcR_Cntrl' */

    /* Outputs for Atomic SubSystem: '<S192>/EdgeRising' */
    /* Logic: '<S249>/AND' incorporates:
     *  Logic: '<S249>/OR1'
     *  UnitDelay: '<S249>/Unit Delay'
     */
    rtb_AND_pv = !BCPR_ac_DW.UnitDelay_DSTATE_cl;

    /* Update for UnitDelay: '<S249>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant1'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_cl = true;

    /* End of Outputs for SubSystem: '<S192>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S192>/EdgeRising1' */
    /* Logic: '<S250>/AND' incorporates:
     *  Logic: '<S250>/OR1'
     *  UnitDelay: '<S250>/Unit Delay'
     */
    rtb_Logical_on = !BCPR_ac_DW.UnitDelay_DSTATE_fn;

    /* Update for UnitDelay: '<S250>/Unit Delay' incorporates:
     *  RelationalOperator: '<S192>/Comparison1'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_fn = true;

    /* End of Outputs for SubSystem: '<S192>/EdgeRising1' */

    /* Outputs for IfAction SubSystem: '<S192>/Lcked_Ld_TcR_Cntrl' incorporates:
     *  ActionPort: '<S251>/Action Port'
     */
    /* If: '<S192>/If1' incorporates:
     *  Constant: '<S115>/KeBCPR_b_CntrlTcR_ApplyLdOfstOnR'
     *  Constant: '<S251>/Constant Value1'
     *  Constant: '<S251>/Constant Value2'
     *  Constant: '<S256>/Constant Value3'
     *  Constant: '<S259>/Constant Value3'
     *  Constant: '<S267>/Constant Value2'
     *  DataStoreRead: '<S51>/Data Store Read3'
     *  Gain: '<S51>/Gain'
     *  If: '<S191>/If1'
     *  If: '<S259>/If1'
     *  Logic: '<S255>/AND'
     *  Logic: '<S255>/OR1'
     *  Logic: '<S259>/Logical Operator'
     *  Logic: '<S259>/Logical Operator1'
     *  Logic: '<S259>/Logical Operator2'
     *  Logic: '<S259>/Logical Operator3'
     *  Product: '<S231>/Product'
     *  RelationalOperator: '<S251>/Relational Operator'
     *  RelationalOperator: '<S257>/Relational Operator'
     *  RelationalOperator: '<S257>/Relational Operator1'
     *  RelationalOperator: '<S259>/Comparison2'
     *  RelationalOperator: '<S261>/Relational Operator1'
     *  RelationalOperator: '<S267>/Greater  Than1'
     *  Sum: '<S256>/Sum2'
     *  Switch: '<S257>/Switch'
     *  Switch: '<S257>/Switch1'
     *  Switch: '<S261>/Switch'
     *  UnitDelay: '<S231>/Unit Delay2'
     *  UnitDelay: '<S251>/Unit Delay2'
     *  UnitDelay: '<S255>/Unit Delay'
     *  UnitDelay: '<S267>/Unit Delay'
     * */
    rtb_NotEqual_n = ((-VeBCPR_M_BeltCapMax_DS) < 0.0F);

    /* Outputs for Atomic SubSystem: '<S251>/EdgeRising' */
    rtb_Comparison1_b4 = (rtb_NotEqual_n && (!BCPR_ac_DW.UnitDelay_DSTATE_dl));
    BCPR_ac_DW.UnitDelay_DSTATE_dl = rtb_NotEqual_n;

    /* End of Outputs for SubSystem: '<S251>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S256>/Limiter' */
    if (VeBCPR_M_BeltCapMax_DS > 0.0F)
    {
        /* Switch: '<S261>/Switch' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = VeBCPR_M_BeltCapMax_DS;
    }
    else
    {
        /* Switch: '<S261>/Switch' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S256>/Limiter' */

    /* Outputs for Enabled SubSystem: '<S263>/Hold_OFF_Time' incorporates:
     *  EnablePort: '<S266>/Enable'
     */
    if (rtb_AND_pv)
    {
        /* Switch: '<S268>/Switch1' */
        if (rtb_Logical_on)
        {
            /* Switch: '<S268>/Switch1' incorporates:
             *  Constant: '<S266>/Constant Value5'
             */
            BCPR_ac_B.Switch1_o = 0.0F;
        }
        else
        {
            /* Switch: '<S268>/Switch1' incorporates:
             *  Constant: '<S149>/KeTCPR_t_CntrlTcR_LdRmpHldffOnR'
             */
            BCPR_ac_B.Switch1_o = KeBCPR_t_CntrlTcR_LdRmpHldffOnR;
        }

        /* End of Switch: '<S268>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S263>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S267>/Switch1' incorporates:
         *  UnitDelay: '<S267>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_py = BCPR_ac_B.Switch1_o;

        /* End of Outputs for SubSystem: '<S263>/Timer Retrigger Reset Enabled' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S263>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S267>/Switch1' incorporates:
         *  Constant: '<S102>/Calib'
         *  Constant: '<S267>/Constant Value4'
         *  MinMax: '<S267>/Maximum'
         *  Sum: '<S267>/Subtraction'
         *  UnitDelay: '<S267>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_py = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_py -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S263>/Timer Retrigger Reset Enabled' */
    }

    /* End of Outputs for SubSystem: '<S263>/Hold_OFF_Time' */
    if ((((KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_AND_pv) || rtb_OR1) ||
            rtb_Logical_on)
    {
        /* Outputs for IfAction SubSystem: '<S259>/RstPth_Crt_TcRMax' incorporates:
         *  ActionPort: '<S265>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S191>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S231>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax(BCPR_ac_B.Product1_c,
            BCPR_ac_DW.UnitDelay2_DSTATE_a,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S191>/Lcked_Ld_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S259>/RstPth_Crt_TcRMax' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S263>/Timer Retrigger Reset Enabled' */
        if (((!KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_AND_pv) ||
                ((BCPR_ac_DW.UnitDelay_DSTATE_py > 0.0F) && (BCPR_ac_B.Product_p
              >= 0.0F)))
        {
            /* Outputs for IfAction SubSystem: '<S259>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S264>/Action Port'
             */
            /* Outputs for IfAction SubSystem: '<S191>/Lcked_Ld_TcR_Cntrl' incorporates:
             *  ActionPort: '<S231>/Action Port'
             */
            BCPR_ac_RstHld_Crt_TcRMax(BCPR_ac_DW.UnitDelay2_DSTATE_a,
                &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S191>/Lcked_Ld_TcR_Cntrl' */
            /* End of Outputs for SubSystem: '<S259>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S259>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S262>/Action Port'
             */
            BCPR_ac_Achived_LdRamp(BCPR_ac_B.Product_p,
                                   BCPR_ac_DW.UnitDelay2_DSTATE_f,
                                   &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S259>/Achived_LdRamp' */
        }

        /* End of Outputs for SubSystem: '<S263>/Timer Retrigger Reset Enabled' */
    }

    /* Outputs for Atomic SubSystem: '<S251>/Limiter1' */
    if (rtb_TmpSignalConversionAtVeATRR_M_Output <
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Product: '<S251>/Product' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeATRR_M_Output;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d > 0.0F)
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_f =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_f = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S251>/Limiter1' */

    /* Outputs for Enabled SubSystem: '<S270>/Hold_OFF_Time' incorporates:
     *  EnablePort: '<S273>/Enable'
     */
    if (rtb_Comparison1_b4)
    {
        /* Switch: '<S275>/Switch1' */
        if (rtb_Logical_on)
        {
            /* Switch: '<S275>/Switch1' incorporates:
             *  Constant: '<S273>/Constant Value5'
             */
            BCPR_ac_B.Switch1_i = 0.0F;
        }
        else
        {
            /* Switch: '<S275>/Switch1' incorporates:
             *  Constant: '<S145>/KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR'
             */
            BCPR_ac_B.Switch1_i = KeBCPR_t_CntrlTcRMin_LdRmpHldffOnR;
        }

        /* End of Switch: '<S275>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S270>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S274>/Switch1' incorporates:
         *  UnitDelay: '<S274>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_p = BCPR_ac_B.Switch1_i;

        /* End of Outputs for SubSystem: '<S270>/Timer Retrigger Reset Enabled' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S270>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S274>/Switch1' incorporates:
         *  Constant: '<S102>/Calib'
         *  Constant: '<S274>/Constant Value4'
         *  MinMax: '<S274>/Maximum'
         *  Sum: '<S274>/Subtraction'
         *  UnitDelay: '<S274>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_p = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_p -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S270>/Timer Retrigger Reset Enabled' */
    }

    /* End of Outputs for SubSystem: '<S270>/Hold_OFF_Time' */

    /* If: '<S260>/If1' incorporates:
     *  Constant: '<S111>/KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR'
     *  Constant: '<S260>/Constant Value3'
     *  Constant: '<S274>/Constant Value2'
     *  Gain: '<S260>/Gain'
     *  If: '<S188>/If'
     *  If: '<S192>/If1'
     *  Logic: '<S260>/Logical Operator'
     *  Logic: '<S260>/Logical Operator1'
     *  Logic: '<S260>/Logical Operator2'
     *  Logic: '<S260>/Logical Operator3'
     *  Product: '<S200>/Product1'
     *  RelationalOperator: '<S260>/Comparison2'
     *  RelationalOperator: '<S274>/Greater  Than1'
     *  Switch: '<S200>/Switch1'
     *  UnitDelay: '<S200>/Unit Delay1'
     *  UnitDelay: '<S251>/Unit Delay1'
     *  UnitDelay: '<S274>/Unit Delay'
     */
    if ((((KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4) ||
            rtb_OR1) || rtb_Logical_on)
    {
        /* Outputs for IfAction SubSystem: '<S260>/RstPth_Crt_TcRMin' incorporates:
         *  ActionPort: '<S272>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax_j(BCPR_ac_B.Product1_c,
            -BCPR_ac_DW.UnitDelay1_DSTATE_d,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S260>/RstPth_Crt_TcRMin' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S270>/Timer Retrigger Reset Enabled' */
        if (((!KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4) ||
                ((BCPR_ac_DW.UnitDelay_DSTATE_p > 0.0F) && (BCPR_ac_B.Product_p >=
              0.0F)))
        {
            /* Outputs for IfAction SubSystem: '<S260>/RstHld_Crt_TcRMin' incorporates:
             *  ActionPort: '<S271>/Action Port'
             */
            /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
             *  ActionPort: '<S200>/Action Port'
             */
            BCPR_ac_RstHld_Crt_TcRMax_c(-BCPR_ac_DW.UnitDelay1_DSTATE_d,
                &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */
            /* End of Outputs for SubSystem: '<S260>/RstHld_Crt_TcRMin' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S260>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S269>/Action Port'
             */
            BCPR_ac_Achived_LdRamp_o(-BCPR_ac_B.Product_p,
                BCPR_ac_DW.UnitDelay1_DSTATE_ie,
                &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S260>/Achived_LdRamp' */
        }

        /* End of Outputs for SubSystem: '<S270>/Timer Retrigger Reset Enabled' */
    }

    /* End of If: '<S260>/If1' */

    /* Outputs for Atomic SubSystem: '<S251>/Limiter2' */
    /* If: '<S192>/If1' incorporates:
     *  Constant: '<S251>/Constant Value3'
     *  DataStoreRead: '<S51>/Data Store Read3'
     *  Gain: '<S51>/Gain'
     *  Merge: '<S192>/Merge'
     *  MinMax: '<S251>/Maximum1'
     *  Product: '<S251>/Product'
     *  RelationalOperator: '<S258>/Relational Operator'
     *  RelationalOperator: '<S258>/Relational Operator1'
     *  Switch: '<S258>/Switch'
     *  Switch: '<S258>/Switch1'
     *  UnitDelay: '<S251>/Unit Delay1'
     *  UnitDelay: '<S251>/Unit Delay2'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Product: '<S251>/Product' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = 0.0F;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d > (-VeBCPR_M_BeltCapMax_DS))
    {
        BCPR_ac_DW.UnitDelay1_DSTATE_ie =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay1_DSTATE_ie = -VeBCPR_M_BeltCapMax_DS;
    }

    /* End of Outputs for SubSystem: '<S251>/Limiter2' */
    VeBCPC_M_BeltTrqMaxVTVR = fminf(BCPR_ac_DW.UnitDelay2_DSTATE_f,
        BCPR_ac_DW.UnitDelay2_DSTATE_f);

    /* End of Outputs for SubSystem: '<S192>/Lcked_Ld_TcR_Cntrl' */

    /* Outputs for Atomic SubSystem: '<S316>/EdgeRising' */
    /* Logic: '<S354>/AND' incorporates:
     *  Logic: '<S354>/OR1'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    rtb_Logical_on = !BCPR_ac_DW.UnitDelay_DSTATE_ns;

    /* Update for UnitDelay: '<S354>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant2'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_ns = true;

    /* End of Outputs for SubSystem: '<S316>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S324>/Slip_Remed' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    /* If: '<S324>/If1' incorporates:
     *  Gain: '<S420>/Gain'
     *  RelationalOperator: '<S323>/Comparison5'
     *  UnitDelay: '<S323>/Unit Delay'
     *  UnitDelay: '<S421>/Unit Delay'
     */
    rtb_AND_pv = (BCPR_ac_DW.UnitDelay_DSTATE_nq !=
                  BCPR_ac_DW.UnitDelay_DSTATE_e);

    /* End of Outputs for SubSystem: '<S324>/Slip_Remed' */

    /* Outputs for Atomic SubSystem: '<S316>/EdgeRising1' */
    /* Logic: '<S355>/AND' incorporates:
     *  Logic: '<S355>/OR1'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_nd;

    /* Update for UnitDelay: '<S355>/Unit Delay' incorporates:
     *  RelationalOperator: '<S316>/Comparison1'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_nd = true;

    /* End of Outputs for SubSystem: '<S316>/EdgeRising1' */

    /* Outputs for IfAction SubSystem: '<S316>/Lcked_Ld_TcR_Cntrl' incorporates:
     *  ActionPort: '<S356>/Action Port'
     */
    /* If: '<S316>/If1' incorporates:
     *  Constant: '<S356>/Constant Value1'
     *  Gain: '<S51>/Gain1'
     *  Logic: '<S359>/AND'
     *  Logic: '<S359>/OR1'
     *  RelationalOperator: '<S356>/Relational Operator'
     *  UnitDelay: '<S359>/Unit Delay'
     * */
    rtb_NotEqual_n = ((-rtb_TmpSignalConversionAtVeBPDR_M_Belt_a) < 0.0F);

    /* Outputs for Atomic SubSystem: '<S356>/EdgeRising' */
    rtb_Comparison1_b4 = (rtb_NotEqual_n && (!BCPR_ac_DW.UnitDelay_DSTATE_b5));
    BCPR_ac_DW.UnitDelay_DSTATE_b5 = rtb_NotEqual_n;

    /* End of Outputs for SubSystem: '<S356>/EdgeRising' */

    /* Outputs for IfAction SubSystem: '<S324>/Slip_Remed' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    /* If: '<S324>/If1' incorporates:
     *  Gain: '<S420>/Gain'
     *  If: '<S316>/If1'
     *  Switch: '<S356>/Switch'
     *  UnitDelay: '<S421>/Unit Delay'
     */
    if (BCPR_ac_DW.UnitDelay_DSTATE_nq)
    {
        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        /* If: '<S313>/If' incorporates:
         *  Product: '<S325>/Product'
         *  Sum: '<S360>/Sum2'
         *  UnitDelay: '<S325>/Unit Delay1'
         */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            BCPR_ac_DW.UnitDelay1_DSTATE_n;

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
    }
    else
    {
        /* Sum: '<S360>/Sum2' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }

    /* End of Outputs for SubSystem: '<S324>/Slip_Remed' */

    /* Outputs for Atomic SubSystem: '<S360>/Limiter' */
    /* If: '<S316>/If1' incorporates:
     *  Constant: '<S114>/KeBCPR_b_CntrlTcR_ApplyLdOfstOnR'
     *  Constant: '<S356>/Constant Value2'
     *  Constant: '<S360>/Constant Value3'
     *  If: '<S313>/If'
     *  If: '<S363>/If1'
     *  Logic: '<S363>/Logical Operator'
     *  Logic: '<S363>/Logical Operator1'
     *  Logic: '<S363>/Logical Operator2'
     *  Product: '<S325>/Product'
     *  RelationalOperator: '<S361>/Relational Operator'
     *  RelationalOperator: '<S361>/Relational Operator1'
     *  RelationalOperator: '<S365>/Relational Operator'
     *  RelationalOperator: '<S365>/Relational Operator1'
     *  Switch: '<S361>/Switch'
     *  Switch: '<S361>/Switch1'
     *  Switch: '<S365>/Switch'
     *  Switch: '<S365>/Switch1'
     *  UnitDelay: '<S325>/Unit Delay1'
     *  UnitDelay: '<S356>/Unit Delay2'
     */
    if (rtb_TmpSignalConversionAtVeBPDR_M_Belt_a <
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S356>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d <= 0.0F)
    {
        /* Switch: '<S365>/Switch' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S360>/Limiter' */
    if ((((KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_Logical_on) || rtb_AND_pv) ||
        rtb_OR1)
    {
        /* Outputs for IfAction SubSystem: '<S363>/RstPth_Crt_TcRMax' incorporates:
         *  ActionPort: '<S368>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax(BCPR_ac_B.Product1,
            BCPR_ac_DW.UnitDelay1_DSTATE_n,
            &rtb_TmpSignalConversionAtVeATRR_M_Output);

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S363>/RstPth_Crt_TcRMax' */
    }
    else if ((!KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_Logical_on)
    {
        /* Outputs for IfAction SubSystem: '<S363>/RstHld_Crt_TcRMax' incorporates:
         *  ActionPort: '<S367>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        BCPR_ac_RstHld_Crt_TcRMax(BCPR_ac_DW.UnitDelay1_DSTATE_n,
            &rtb_TmpSignalConversionAtVeATRR_M_Output);

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S363>/RstHld_Crt_TcRMax' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S363>/Achived_LdRamp' incorporates:
         *  ActionPort: '<S366>/Action Port'
         */
        BCPR_ac_Achived_LdRamp(BCPR_ac_B.Product, BCPR_ac_DW.UnitDelay2_DSTATE_e,
                               &rtb_TmpSignalConversionAtVeATRR_M_Output);

        /* End of Outputs for SubSystem: '<S363>/Achived_LdRamp' */
    }

    /* Outputs for Atomic SubSystem: '<S356>/Limiter1' */
    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d >=
            rtb_TmpSignalConversionAtVeATRR_M_Output)
    {
        /* Switch: '<S356>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeATRR_M_Output;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d > 0.0F)
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_e =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_e = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S356>/Limiter1' */

    /* If: '<S364>/If1' incorporates:
     *  Constant: '<S110>/KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR'
     *  Gain: '<S364>/Gain'
     *  If: '<S313>/If'
     *  If: '<S316>/If1'
     *  Logic: '<S364>/Logical Operator'
     *  Logic: '<S364>/Logical Operator1'
     *  Logic: '<S364>/Logical Operator2'
     *  Product: '<S325>/Product1'
     *  Switch: '<S325>/Switch1'
     *  UnitDelay: '<S325>/Unit Delay1'
     *  UnitDelay: '<S356>/Unit Delay1'
     */
    if ((((KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4) ||
            rtb_AND_pv) || rtb_OR1)
    {
        /* Outputs for IfAction SubSystem: '<S364>/RstPth_Crt_TcRMax' incorporates:
         *  ActionPort: '<S371>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax_j(BCPR_ac_B.Product1,
            -BCPR_ac_DW.UnitDelay1_DSTATE_n,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S364>/RstPth_Crt_TcRMax' */
    }
    else if ((!KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4)
    {
        /* Outputs for IfAction SubSystem: '<S364>/RstHld_Crt_TcRMax' incorporates:
         *  ActionPort: '<S370>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        BCPR_ac_RstHld_Crt_TcRMax_c(-BCPR_ac_DW.UnitDelay1_DSTATE_n,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S364>/RstHld_Crt_TcRMax' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S364>/Achived_LdRamp' incorporates:
         *  ActionPort: '<S369>/Action Port'
         */
        BCPR_ac_Achived_LdRamp_o(-BCPR_ac_B.Product,
            BCPR_ac_DW.UnitDelay1_DSTATE_i,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S364>/Achived_LdRamp' */
    }

    /* End of If: '<S364>/If1' */

    /* Outputs for Atomic SubSystem: '<S356>/Limiter2' */
    /* If: '<S316>/If1' incorporates:
     *  Constant: '<S356>/Constant Value3'
     *  Gain: '<S51>/Gain1'
     *  Merge: '<S316>/Merge1'
     *  Product: '<S356>/Product1'
     *  RelationalOperator: '<S362>/Relational Operator'
     *  RelationalOperator: '<S362>/Relational Operator1'
     *  Switch: '<S356>/Switch1'
     *  Switch: '<S362>/Switch'
     *  Switch: '<S362>/Switch1'
     *  UnitDelay: '<S356>/Unit Delay1'
     *  UnitDelay: '<S356>/Unit Delay2'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Switch: '<S356>/Switch1' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = 0.0F;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d >
            (-rtb_TmpSignalConversionAtVeBPDR_M_Belt_a))
    {
        BCPR_ac_DW.UnitDelay1_DSTATE_i =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay1_DSTATE_i =
            -rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }

    /* End of Outputs for SubSystem: '<S356>/Limiter2' */
    VeBCPC_M_BeltTrqMinOITR = -BCPR_ac_DW.UnitDelay2_DSTATE_e;

    /* End of Outputs for SubSystem: '<S316>/Lcked_Ld_TcR_Cntrl' */

    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Logic: '<S374>/AND' incorporates:
     *  Logic: '<S374>/OR1'
     *  UnitDelay: '<S374>/Unit Delay'
     */
    rtb_Logical_on = !BCPR_ac_DW.UnitDelay_DSTATE_ox;

    /* Update for UnitDelay: '<S374>/Unit Delay' incorporates:
     *  Constant: '<S51>/TRUE Constant3'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_ox = true;

    /* End of Outputs for SubSystem: '<S317>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising1' */
    /* Logic: '<S375>/AND' incorporates:
     *  Logic: '<S375>/OR1'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_OR1 = !BCPR_ac_DW.UnitDelay_DSTATE_i4;

    /* Update for UnitDelay: '<S375>/Unit Delay' incorporates:
     *  RelationalOperator: '<S317>/Comparison1'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_i4 = true;

    /* End of Outputs for SubSystem: '<S317>/EdgeRising1' */

    /* Outputs for IfAction SubSystem: '<S317>/Lcked_Ld_TcR_Cntrl' incorporates:
     *  ActionPort: '<S376>/Action Port'
     */
    /* If: '<S317>/If1' incorporates:
     *  Constant: '<S114>/KeBCPR_b_CntrlTcR_ApplyLdOfstOnR'
     *  Constant: '<S376>/Constant Value1'
     *  Constant: '<S376>/Constant Value2'
     *  Constant: '<S381>/Constant Value3'
     *  Constant: '<S384>/Constant Value3'
     *  Constant: '<S392>/Constant Value2'
     *  Gain: '<S51>/Gain1'
     *  If: '<S316>/If1'
     *  If: '<S384>/If1'
     *  Logic: '<S380>/AND'
     *  Logic: '<S380>/OR1'
     *  Logic: '<S384>/Logical Operator'
     *  Logic: '<S384>/Logical Operator1'
     *  Logic: '<S384>/Logical Operator2'
     *  Logic: '<S384>/Logical Operator3'
     *  Product: '<S356>/Product'
     *  RelationalOperator: '<S376>/Relational Operator'
     *  RelationalOperator: '<S382>/Relational Operator'
     *  RelationalOperator: '<S382>/Relational Operator1'
     *  RelationalOperator: '<S384>/Comparison2'
     *  RelationalOperator: '<S386>/Relational Operator1'
     *  RelationalOperator: '<S392>/Greater  Than1'
     *  Sum: '<S381>/Sum2'
     *  Switch: '<S382>/Switch'
     *  Switch: '<S382>/Switch1'
     *  Switch: '<S386>/Switch'
     *  UnitDelay: '<S356>/Unit Delay2'
     *  UnitDelay: '<S376>/Unit Delay2'
     *  UnitDelay: '<S380>/Unit Delay'
     *  UnitDelay: '<S392>/Unit Delay'
     * */
    rtb_NotEqual_n = ((-rtb_TmpSignalConversionAtVeBPDR_M_Belt_a) < 0.0F);

    /* Outputs for Atomic SubSystem: '<S376>/EdgeRising' */
    rtb_Comparison1_b4 = (rtb_NotEqual_n && (!BCPR_ac_DW.UnitDelay_DSTATE_l));
    BCPR_ac_DW.UnitDelay_DSTATE_l = rtb_NotEqual_n;

    /* End of Outputs for SubSystem: '<S376>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S381>/Limiter' */
    if (rtb_TmpSignalConversionAtVeBPDR_M_Belt_a > 0.0F)
    {
        /* Switch: '<S386>/Switch' */
        rtb_TmpSignalConversionAtVeATRR_M_Output =
            rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }
    else
    {
        /* Switch: '<S386>/Switch' */
        rtb_TmpSignalConversionAtVeATRR_M_Output = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S381>/Limiter' */

    /* Outputs for Enabled SubSystem: '<S388>/Hold_OFF_Time' incorporates:
     *  EnablePort: '<S391>/Enable'
     */
    if (rtb_Logical_on)
    {
        /* Switch: '<S393>/Switch1' */
        if (rtb_OR1)
        {
            /* Switch: '<S393>/Switch1' incorporates:
             *  Constant: '<S391>/Constant Value5'
             */
            BCPR_ac_B.Switch1_mh = 0.0F;
        }
        else
        {
            /* Switch: '<S393>/Switch1' incorporates:
             *  Constant: '<S148>/KeTCPR_t_CntrlTcR_LdRmpHldffOnR'
             */
            BCPR_ac_B.Switch1_mh = KeBCPR_t_CntrlTcR_LdRmpHldffOnR;
        }

        /* End of Switch: '<S393>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S388>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S392>/Switch1' incorporates:
         *  UnitDelay: '<S392>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_a = BCPR_ac_B.Switch1_mh;

        /* End of Outputs for SubSystem: '<S388>/Timer Retrigger Reset Enabled' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S388>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S392>/Switch1' incorporates:
         *  Constant: '<S103>/Calib'
         *  Constant: '<S392>/Constant Value4'
         *  MinMax: '<S392>/Maximum'
         *  Sum: '<S392>/Subtraction'
         *  UnitDelay: '<S392>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_a = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_a -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S388>/Timer Retrigger Reset Enabled' */
    }

    /* End of Outputs for SubSystem: '<S388>/Hold_OFF_Time' */
    if ((((KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_Logical_on) || rtb_AND_pv) ||
        rtb_OR1)
    {
        /* Outputs for IfAction SubSystem: '<S384>/RstPth_Crt_TcRMax' incorporates:
         *  ActionPort: '<S390>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S316>/Lcked_Ld_TcR_Cntrl' incorporates:
         *  ActionPort: '<S356>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax(BCPR_ac_B.Product1,
            BCPR_ac_DW.UnitDelay2_DSTATE_e,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S316>/Lcked_Ld_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S384>/RstPth_Crt_TcRMax' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S388>/Timer Retrigger Reset Enabled' */
        if (((!KeBCPR_b_CntrlTcR_ApplyLdOfstOnR) && rtb_Logical_on) ||
                ((BCPR_ac_DW.UnitDelay_DSTATE_a > 0.0F) && (BCPR_ac_B.Product >=
              0.0F)))
        {
            /* Outputs for IfAction SubSystem: '<S384>/RstHld_Crt_TcRMax' incorporates:
             *  ActionPort: '<S389>/Action Port'
             */
            /* Outputs for IfAction SubSystem: '<S316>/Lcked_Ld_TcR_Cntrl' incorporates:
             *  ActionPort: '<S356>/Action Port'
             */
            BCPR_ac_RstHld_Crt_TcRMax(BCPR_ac_DW.UnitDelay2_DSTATE_e,
                &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S316>/Lcked_Ld_TcR_Cntrl' */
            /* End of Outputs for SubSystem: '<S384>/RstHld_Crt_TcRMax' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S384>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S387>/Action Port'
             */
            BCPR_ac_Achived_LdRamp(BCPR_ac_B.Product,
                                   BCPR_ac_DW.UnitDelay2_DSTATE_m,
                                   &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S384>/Achived_LdRamp' */
        }

        /* End of Outputs for SubSystem: '<S388>/Timer Retrigger Reset Enabled' */
    }

    /* Outputs for Atomic SubSystem: '<S376>/Limiter1' */
    if (rtb_TmpSignalConversionAtVeATRR_M_Output <
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Product: '<S376>/Product' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d =
            rtb_TmpSignalConversionAtVeATRR_M_Output;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d > 0.0F)
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_m =
            rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay2_DSTATE_m = 0.0F;
    }

    /* End of Outputs for SubSystem: '<S376>/Limiter1' */

    /* Outputs for Enabled SubSystem: '<S395>/Hold_OFF_Time' incorporates:
     *  EnablePort: '<S398>/Enable'
     */
    if (rtb_Comparison1_b4)
    {
        /* Switch: '<S400>/Switch1' */
        if (rtb_OR1)
        {
            /* Switch: '<S400>/Switch1' incorporates:
             *  Constant: '<S398>/Constant Value5'
             */
            BCPR_ac_B.Switch1_m = 0.0F;
        }
        else
        {
            /* Switch: '<S400>/Switch1' incorporates:
             *  Constant: '<S144>/KeTCPR_t_CntrlTcRMin_LdRmpHldffOnR'
             */
            BCPR_ac_B.Switch1_m = KeBCPR_t_CntrlTcRMin_LdRmpHldffOnR;
        }

        /* End of Switch: '<S400>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S395>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S399>/Switch1' incorporates:
         *  UnitDelay: '<S399>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_b = BCPR_ac_B.Switch1_m;

        /* End of Outputs for SubSystem: '<S395>/Timer Retrigger Reset Enabled' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S395>/Timer Retrigger Reset Enabled' */
        /* Switch: '<S399>/Switch1' incorporates:
         *  Constant: '<S103>/Calib'
         *  Constant: '<S399>/Constant Value4'
         *  MinMax: '<S399>/Maximum'
         *  Sum: '<S399>/Subtraction'
         *  UnitDelay: '<S399>/Unit Delay'
         */
        BCPR_ac_DW.UnitDelay_DSTATE_b = fmaxf(BCPR_ac_DW.UnitDelay_DSTATE_b -
            HeBCPR_t_MedTED_dT, 0.0F);

        /* End of Outputs for SubSystem: '<S395>/Timer Retrigger Reset Enabled' */
    }

    /* End of Outputs for SubSystem: '<S395>/Hold_OFF_Time' */

    /* If: '<S385>/If1' incorporates:
     *  Constant: '<S110>/KeTCPR_b_CntrlTcRMin_ApplyLdOfstOnR'
     *  Constant: '<S385>/Constant Value3'
     *  Constant: '<S399>/Constant Value2'
     *  Gain: '<S385>/Gain'
     *  If: '<S313>/If'
     *  If: '<S317>/If1'
     *  Logic: '<S385>/Logical Operator'
     *  Logic: '<S385>/Logical Operator1'
     *  Logic: '<S385>/Logical Operator2'
     *  Logic: '<S385>/Logical Operator3'
     *  Product: '<S325>/Product1'
     *  RelationalOperator: '<S385>/Comparison2'
     *  RelationalOperator: '<S399>/Greater  Than1'
     *  Switch: '<S325>/Switch1'
     *  UnitDelay: '<S325>/Unit Delay1'
     *  UnitDelay: '<S376>/Unit Delay1'
     *  UnitDelay: '<S399>/Unit Delay'
     */
    if ((((KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4) ||
            rtb_AND_pv) || rtb_OR1)
    {
        /* Outputs for IfAction SubSystem: '<S385>/RstPth_Crt_TcRMin' incorporates:
         *  ActionPort: '<S397>/Action Port'
         */
        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        BCPR_ac_RstPth_Crt_TcRMax_j(BCPR_ac_B.Product1,
            -BCPR_ac_DW.UnitDelay1_DSTATE_n,
            &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
        /* End of Outputs for SubSystem: '<S385>/RstPth_Crt_TcRMin' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S395>/Timer Retrigger Reset Enabled' */
        if (((!KeBCPR_b_CntrlTcRMin_ApplyLdOfstOnR) && rtb_Comparison1_b4) ||
                ((BCPR_ac_DW.UnitDelay_DSTATE_b > 0.0F) && (BCPR_ac_B.Product >=
              0.0F)))
        {
            /* Outputs for IfAction SubSystem: '<S385>/RstHld_Crt_TcRMin' incorporates:
             *  ActionPort: '<S396>/Action Port'
             */
            /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
             *  ActionPort: '<S325>/Action Port'
             */
            BCPR_ac_RstHld_Crt_TcRMax_c(-BCPR_ac_DW.UnitDelay1_DSTATE_n,
                &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */
            /* End of Outputs for SubSystem: '<S385>/RstHld_Crt_TcRMin' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S385>/Achived_LdRamp' incorporates:
             *  ActionPort: '<S394>/Action Port'
             */
            BCPR_ac_Achived_LdRamp_o(-BCPR_ac_B.Product,
                BCPR_ac_DW.UnitDelay1_DSTATE,
                &rtb_TmpSignalConversionAtVeBCPR_n_Belt_d);

            /* End of Outputs for SubSystem: '<S385>/Achived_LdRamp' */
        }

        /* End of Outputs for SubSystem: '<S395>/Timer Retrigger Reset Enabled' */
    }

    /* End of If: '<S385>/If1' */

    /* Outputs for Atomic SubSystem: '<S376>/Limiter2' */
    /* If: '<S317>/If1' incorporates:
     *  Constant: '<S376>/Constant Value3'
     *  Gain: '<S51>/Gain1'
     *  Merge: '<S317>/Merge1'
     *  MinMax: '<S376>/Maximum'
     *  Product: '<S376>/Product2'
     *  RelationalOperator: '<S383>/Relational Operator'
     *  RelationalOperator: '<S383>/Relational Operator1'
     *  Switch: '<S376>/Switch3'
     *  Switch: '<S383>/Switch'
     *  Switch: '<S383>/Switch1'
     *  UnitDelay: '<S376>/Unit Delay1'
     *  UnitDelay: '<S376>/Unit Delay2'
     */
    if (0.0F < rtb_TmpSignalConversionAtVeBCPR_n_Belt_d)
    {
        /* Product: '<S376>/Product' */
        rtb_TmpSignalConversionAtVeBCPR_n_Belt_d = 0.0F;
    }

    if (rtb_TmpSignalConversionAtVeBCPR_n_Belt_d >
            (-rtb_TmpSignalConversionAtVeBPDR_M_Belt_a))
    {
        BCPR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeBCPR_n_Belt_d;
    }
    else
    {
        BCPR_ac_DW.UnitDelay1_DSTATE = -rtb_TmpSignalConversionAtVeBPDR_M_Belt_a;
    }

    /* End of Outputs for SubSystem: '<S376>/Limiter2' */
    VeBCPC_M_BeltTrqMinVTVR = fmaxf(-BCPR_ac_DW.UnitDelay2_DSTATE_m,
        -BCPR_ac_DW.UnitDelay2_DSTATE_m);

    /* End of Outputs for SubSystem: '<S317>/Lcked_Ld_TcR_Cntrl' */

    /* If: '<S101>/If' incorporates:
     *  SignalConversion generated from: '<S101>/Variant Source'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    if (rtb_Logical)
    {
        /* Outputs for IfAction SubSystem: '<S101>/TaRot_To_TaEff' incorporates:
         *  ActionPort: '<S174>/Mismatch'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        /* If: '<S188>/If' incorporates:
         *  Product: '<S174>/Product'
         *  Product: '<S174>/Product1'
         *  Product: '<S200>/Product'
         *  Sum: '<S174>/Sum'
         *  UnitDelay: '<S200>/Unit Delay1'
         */
        rtb_Sum[0] = (((BCPR_ac_DW.UnitDelay1_DSTATE_d *
                        BCPR_ac_DW.UnitDelay1_DSTATE_d) * BCPR_ac_B.Merge1[0]) +
                      (BCPR_ac_DW.UnitDelay1_DSTATE_d * BCPR_ac_B.Merge1[1])) +
            BCPR_ac_B.Merge1[2];

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */

        /* Sum: '<S174>/Sum' incorporates:
         *  Product: '<S174>/Product'
         *  Product: '<S174>/Product1'
         */
        rtb_Sum[1] = (((VeBCPC_M_BeltTrqMaxOITR * VeBCPC_M_BeltTrqMaxOITR) *
                       BCPR_ac_B.Merge1[0]) + (VeBCPC_M_BeltTrqMaxOITR *
                       BCPR_ac_B.Merge1[1])) + BCPR_ac_B.Merge1[2];
        rtb_Sum[2] = (((VeBCPC_M_BeltTrqMaxVTVR * VeBCPC_M_BeltTrqMaxVTVR) *
                       BCPR_ac_B.Merge1[0]) + (VeBCPC_M_BeltTrqMaxVTVR *
                       BCPR_ac_B.Merge1[1])) + BCPR_ac_B.Merge1[2];

        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        /* If: '<S313>/If' incorporates:
         *  Product: '<S174>/Product'
         *  Product: '<S174>/Product1'
         *  Product: '<S325>/Product1'
         *  Sum: '<S174>/Sum'
         *  Switch: '<S325>/Switch1'
         *  UnitDelay: '<S325>/Unit Delay1'
         */
        rtb_Sum[3] = ((((-BCPR_ac_DW.UnitDelay1_DSTATE_n) *
                        (-BCPR_ac_DW.UnitDelay1_DSTATE_n)) * BCPR_ac_B.Merge1[0])
                      + ((-BCPR_ac_DW.UnitDelay1_DSTATE_n) * BCPR_ac_B.Merge1[1]))
            + BCPR_ac_B.Merge1[2];

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */

        /* Sum: '<S174>/Sum' incorporates:
         *  Product: '<S174>/Product'
         *  Product: '<S174>/Product1'
         */
        rtb_Sum[4] = (((VeBCPC_M_BeltTrqMinOITR * VeBCPC_M_BeltTrqMinOITR) *
                       BCPR_ac_B.Merge1[0]) + (VeBCPC_M_BeltTrqMinOITR *
                       BCPR_ac_B.Merge1[1])) + BCPR_ac_B.Merge1[2];
        rtb_Sum[5] = (((VeBCPC_M_BeltTrqMinVTVR * VeBCPC_M_BeltTrqMinVTVR) *
                       BCPR_ac_B.Merge1[0]) + (VeBCPC_M_BeltTrqMinVTVR *
                       BCPR_ac_B.Merge1[1])) + BCPR_ac_B.Merge1[2];

        /* Outputs for Atomic SubSystem: '<S174>/Protected Division' */
        /* RelationalOperator: '<S186>/Not Equal1' incorporates:
         *  Constant: '<S185>/Calib'
         *  Constant: '<S186>/Constant Value1'
         */
        rtb_Logical = (((float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f()) != 0.0F);
        for (i = 0; i < 6; i++)
        {
            rtb_Sum3_i_idx_1 = rtb_Sum[i];

            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S186>/Constant Value'
             *  Constant: '<S186>/Constant Value2'
             *  Constant: '<S186>/Constant Value3'
             *  Logic: '<S186>/AND'
             *  RelationalOperator: '<S186>/Greater Than or Equal '
             *  RelationalOperator: '<S186>/Greater Than or Equal 1'
             *  RelationalOperator: '<S186>/Not Equal'
             *  Switch: '<S186>/Switch2'
             *  Switch: '<S186>/Switch3'
             */
            if ((rtb_Sum3_i_idx_1 != 0.0F) && rtb_Logical)
            {
                /* Switch: '<S186>/Switch1' incorporates:
                 *  Constant: '<S185>/Calib'
                 *  Product: '<S186>/Division'
                 */
                rtb_Sum3_i_idx_1 /= (float32)Rte_Prm_KeTSXR_r_P1f_KeTSXR_r_P1f();
            }
            else if (rtb_Sum3_i_idx_1 > 0.0F)
            {
                /* Switch: '<S186>/Switch2' incorporates:
                 *  Constant: '<S186>/MAXFLOAT'
                 *  Switch: '<S186>/Switch1'
                 */
                rtb_Sum3_i_idx_1 = 3.402823466E+38F;
            }
            else if (rtb_Sum3_i_idx_1 < 0.0F)
            {
                /* Switch: '<S186>/Switch3' incorporates:
                 *  Constant: '<S186>/MINFLOAT'
                 *  Switch: '<S186>/Switch1'
                 */
                rtb_Sum3_i_idx_1 = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S186>/Switch1' incorporates:
                 *  Constant: '<S186>/Constant Value4'
                 *  Switch: '<S186>/Switch3'
                 */
                rtb_Sum3_i_idx_1 = 0.0F;
            }

            /* End of Switch: '<S186>/Switch1' */

            /* Switch: '<S187>/Switch' incorporates:
             *  Constant: '<S187>/Constant Value'
             *  RelationalOperator: '<S187>/Comparison1'
             */
            if (rtb_Sum3_i_idx_1 < 0.0F)
            {
                /* Switch: '<S187>/Switch' */
                rtb_Sum3_i_idx_1 = 0.0F;
            }

            /* End of Switch: '<S187>/Switch' */
            rtb_Sum[i] = rtb_Sum3_i_idx_1;
        }

        /* End of Outputs for SubSystem: '<S174>/Protected Division' */

        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        /* If: '<S188>/If' incorporates:
         *  Product: '<S200>/Product'
         *  RelationalOperator: '<S186>/Not Equal'
         *  Sum: '<S174>/Sum1'
         *  Switch: '<S186>/Switch1'
         *  UnitDelay: '<S200>/Unit Delay1'
         *  VariantMerge generated from: '<S101>/Variant Source'
         */
        VeBCPR_M_BeltTrqMaxHTDR_DS = BCPR_ac_DW.UnitDelay1_DSTATE_d - rtb_Sum[0];

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */

        /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
         *  Sum: '<S174>/Sum1'
         */
        rtb_Sum3_i_idx_1 = VeBCPC_M_BeltTrqMaxOITR - rtb_Sum[1];
        rtb_Sum3_i_idx_2 = VeBCPC_M_BeltTrqMaxVTVR - rtb_Sum[2];

        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        /* If: '<S313>/If' incorporates:
         *  Product: '<S325>/Product1'
         *  Sum: '<S174>/Sum1'
         *  Switch: '<S325>/Switch1'
         *  UnitDelay: '<S325>/Unit Delay1'
         *  VariantMerge generated from: '<S101>/Variant Source'
         */
        VeBCPR_M_BeltTrqMinHTDR_DS = (-BCPR_ac_DW.UnitDelay1_DSTATE_n) -
            rtb_Sum[3];

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */

        /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
         *  Sum: '<S174>/Sum1'
         */
        rtb_Sum3_i_idx_4 = VeBCPC_M_BeltTrqMinOITR - rtb_Sum[4];
        rtb_Sum3_i_idx_5 = VeBCPC_M_BeltTrqMinVTVR - rtb_Sum[5];

        /* End of Outputs for SubSystem: '<S101>/TaRot_To_TaEff' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S101>/Passthrough' incorporates:
         *  ActionPort: '<S171>/Mismatch'
         */
        /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S200>/Action Port'
         */
        /* If: '<S188>/If' incorporates:
         *  Gain: '<S180>/Gain'
         *  Product: '<S200>/Product'
         *  UnitDelay: '<S200>/Unit Delay1'
         *  VariantMerge generated from: '<S101>/Variant Source'
         */
        VeBCPR_M_BeltTrqMaxHTDR_DS = BCPR_ac_DW.UnitDelay1_DSTATE_d;

        /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */

        /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
         *  Gain: '<S180>/Gain'
         */
        rtb_Sum3_i_idx_1 = VeBCPC_M_BeltTrqMaxOITR;
        rtb_Sum3_i_idx_2 = VeBCPC_M_BeltTrqMaxVTVR;

        /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
         *  ActionPort: '<S325>/Action Port'
         */
        /* If: '<S313>/If' incorporates:
         *  Gain: '<S180>/Gain'
         *  Product: '<S325>/Product1'
         *  Switch: '<S325>/Switch1'
         *  UnitDelay: '<S325>/Unit Delay1'
         *  VariantMerge generated from: '<S101>/Variant Source'
         */
        VeBCPR_M_BeltTrqMinHTDR_DS = -BCPR_ac_DW.UnitDelay1_DSTATE_n;

        /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */

        /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
         *  Gain: '<S180>/Gain'
         */
        rtb_Sum3_i_idx_4 = VeBCPC_M_BeltTrqMinOITR;
        rtb_Sum3_i_idx_5 = VeBCPC_M_BeltTrqMinVTVR;

        /* End of Outputs for SubSystem: '<S101>/Passthrough' */
    }

#else

    /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S200>/Action Port'
     */
    /* If: '<S188>/If' incorporates:
     *  Product: '<S200>/Product'
     *  SignalConversion generated from: '<S101>/Variant Source'
     *  UnitDelay: '<S200>/Unit Delay1'
     *  VariantMerge generated from: '<S101>/Variant Source'
     */
    VeBCPR_M_BeltTrqMaxHTDR_DS = BCPR_ac_DW.UnitDelay1_DSTATE_d;

    /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */

    /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S101>/Variant Source'
     */
    rtb_Sum3_i_idx_1 = VeBCPC_M_BeltTrqMaxOITR;
    rtb_Sum3_i_idx_2 = VeBCPC_M_BeltTrqMaxVTVR;

    /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */
    /* If: '<S313>/If' incorporates:
     *  Product: '<S325>/Product1'
     *  SignalConversion generated from: '<S101>/Variant Source'
     *  Switch: '<S325>/Switch1'
     *  UnitDelay: '<S325>/Unit Delay1'
     *  VariantMerge generated from: '<S101>/Variant Source'
     */
    VeBCPR_M_BeltTrqMinHTDR_DS = -BCPR_ac_DW.UnitDelay1_DSTATE_n;

    /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */

    /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S101>/Variant Source'
     */
    rtb_Sum3_i_idx_4 = VeBCPC_M_BeltTrqMinOITR;
    rtb_Sum3_i_idx_5 = VeBCPC_M_BeltTrqMinVTVR;

#endif

    /* End of If: '<S101>/If' */

    /* Switch: '<S51>/Switch' incorporates:
     *  Constant: '<S121>/Calib'
     */
    if (KeBCPR_b_OvrdBeltTrqMaxHTDR)
    {
        /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
         *  Constant: '<S104>/Calib'
         *  Switch: '<S51>/Switch'
         */
        VeBCPR_M_BeltTrqMaxHTDR_DS = KeBCPR_M_BeltTrqMaxHTDR;
    }

    /* End of Switch: '<S51>/Switch' */

    /* Switch: '<S51>/Switch4' incorporates:
     *  Constant: '<S124>/Calib'
     */
    if (KeBCPR_b_OvrdBeltTrqMinHTDR)
    {
        /* VariantMerge generated from: '<S101>/Variant Source' incorporates:
         *  Constant: '<S107>/Calib'
         *  Switch: '<S51>/Switch4'
         */
        VeBCPR_M_BeltTrqMinHTDR_DS = KeBCPR_M_BeltTrqMinHTDR;
    }

    /* End of Switch: '<S51>/Switch4' */

    /* Outputs for IfAction SubSystem: '<S199>/Slip_Remed' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    /* If: '<S199>/If1' incorporates:
     *  Gain: '<S195>/Gain'
     *  Gain: '<S295>/Gain'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    VeBCPC_b_PosSlipDetected = BCPR_ac_DW.UnitDelay_DSTATE_br;

    /* End of Outputs for SubSystem: '<S199>/Slip_Remed' */

    /* Outputs for IfAction SubSystem: '<S324>/Slip_Remed' incorporates:
     *  ActionPort: '<S415>/Action Port'
     */
    /* If: '<S324>/If1' incorporates:
     *  Gain: '<S320>/Gain'
     *  Gain: '<S420>/Gain'
     *  UnitDelay: '<S323>/Unit Delay'
     *  UnitDelay: '<S421>/Unit Delay'
     */
    VeBCPC_b_NegSlipDetected = BCPR_ac_DW.UnitDelay_DSTATE_nq;
    BCPR_ac_DW.UnitDelay_DSTATE_e = BCPR_ac_DW.UnitDelay_DSTATE_nq;

    /* End of Outputs for SubSystem: '<S324>/Slip_Remed' */

    /* Update for UnitDelay: '<S319>/Unit Delay2' */
    BCPR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtVeBPDR_M_BeltCa;

    /* Outputs for IfAction SubSystem: '<S199>/Slip_Remed' incorporates:
     *  ActionPort: '<S290>/Action Port'
     */
    /* If: '<S199>/If1' incorporates:
     *  Gain: '<S295>/Gain'
     *  UnitDelay: '<S198>/Unit Delay'
     *  UnitDelay: '<S296>/Unit Delay'
     */
    BCPR_ac_DW.UnitDelay_DSTATE_ni = BCPR_ac_DW.UnitDelay_DSTATE_br;

    /* End of Outputs for SubSystem: '<S199>/Slip_Remed' */

    /* Switch: '<S51>/Switch7' incorporates:
     *  Constant: '<S127>/Calib'
     */
    if (KeBCPR_b_OvrdNegSlipDetected)
    {
        /* Outport: '<Root>/VeBCPR_b_NegSlipDetected' incorporates:
         *  Constant: '<S120>/Calib'
         */
        (void)Rte_Write_VeBCPR_b_NegSlipDetected_Value(KeBCPR_b_NegSlipDetected);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_b_NegSlipDetected' */
        (void)Rte_Write_VeBCPR_b_NegSlipDetected_Value(VeBCPC_b_NegSlipDetected);
    }

    /* End of Switch: '<S51>/Switch7' */

    /* Switch: '<S51>/Switch3' incorporates:
     *  Constant: '<S128>/Calib'
     */
    if (KeBCPR_b_OvrdPosSlipDetected)
    {
        /* Outport: '<Root>/VeBCPR_b_PosSlipDetected' incorporates:
         *  Constant: '<S129>/Calib'
         */
        (void)Rte_Write_VeBCPR_b_PosSlipDetected_Value(KeBCPR_b_PosSlipDetected);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_b_PosSlipDetected' */
        (void)Rte_Write_VeBCPR_b_PosSlipDetected_Value(VeBCPC_b_PosSlipDetected);
    }

    /* End of Switch: '<S51>/Switch3' */
    /* End of Outputs for SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxBPDR' incorporates:
     *  DataStoreRead: '<S52>/Data Store Read3'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxBPDR_Value(VeBCPR_M_BeltCapMax_DS);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxSer' incorporates:
     *  Inport: '<S52>/VeBCPC_M_BeltCapMaxSer'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxSer_Value(rtb_Sum2_e);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxSer_Eff' incorporates:
     *  Inport: '<S52>/VeBCPC_M_BeltCapMaxSer_Eff'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxSer_Eff_Value
        (BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[0]);

    /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPC_BeltCapDtmn' */
    /* Outputs for Atomic SubSystem: '<S50>/Limiter7' */
    /* Switch: '<S71>/Switch' incorporates:
     *  Constant: '<S50>/Constant Value7'
     *  RelationalOperator: '<S71>/Relational Operator1'
     */
    if (rtb_Switch4 <= -10000.0F)
    {
        rtb_Switch4 = -10000.0F;
    }

    /* End of Switch: '<S71>/Switch' */
    /* End of Outputs for SubSystem: '<S50>/Limiter7' */
    /* End of Outputs for SubSystem: '<S2>/BCPC_BeltCapDtmn' */

    /* Outport: '<Root>/VeBCPR_M_BeltCapMin' */
    (void)Rte_Write_VeBCPR_M_BeltCapMin_Value(rtb_Switch4);

    /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
    /* Outport: '<Root>/VeBCPR_M_BeltCapMinBPDR' incorporates:
     *  DataStoreRead: '<S52>/Data Store Read1'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinBPDR_Value(VeBCPR_M_BeltCapMin_DS);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMinPrll' incorporates:
     *  Inport: '<S52>/VeBCPC_M_BeltCapMinPrll'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinPrll_Value(Switch_k);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMinSer' incorporates:
     *  Inport: '<S52>/VeBCPC_M_BeltCapMinSer'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinSer_Value(rtb_Sum2_n);

    /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPC_BeltCapDtmn' */
    /* Outport: '<Root>/VeBCPR_M_BeltCapMinSer_Eff' incorporates:
     *  SignalConversion generated from: '<S50>/VeBCPC_M_BeltCapMinSer_Eff'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinSer_Eff_Value
        (BCPR_ac_B.VariantMerge_For_Variant_Source_Variant_[1]);

    /* End of Outputs for SubSystem: '<S2>/BCPC_BeltCapDtmn' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
    /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR' incorporates:
     *  Inport: '<S52>/VeBCPC_M_BeltTrqMaxHTDR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMaxHTDR_Value(VeBCPR_M_BeltTrqMaxHTDR_DS);

    /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */
    /* Outputs for IfAction SubSystem: '<S188>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S200>/Action Port'
     */
    /* If: '<S188>/If' incorporates:
     *  Outport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     *  Product: '<S200>/Product'
     *  UnitDelay: '<S200>/Unit Delay1'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMaxHTDR_Rot_Value
        (BCPR_ac_DW.UnitDelay1_DSTATE_d);

    /* End of Outputs for SubSystem: '<S188>/Locked_TcR_Cntrl' */

    /* Switch: '<S51>/Switch1' incorporates:
     *  Constant: '<S122>/Calib'
     */
    if (KeBCPR_b_OvrdBeltTrqMaxOITR)
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxOITR' incorporates:
         *  Constant: '<S105>/Calib'
         */
        (void)Rte_Write_VeBCPR_M_BeltTrqMaxOITR_Value(KeBCPR_M_BeltTrqMaxOITR);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxOITR' */
        (void)Rte_Write_VeBCPR_M_BeltTrqMaxOITR_Value(rtb_Sum3_i_idx_1);
    }

    /* End of Switch: '<S51>/Switch1' */

    /* Switch: '<S51>/Switch2' incorporates:
     *  Constant: '<S123>/Calib'
     */
    if (KeBCPR_b_OvrdBeltTrqMaxVTVR)
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxVTVR' incorporates:
         *  Constant: '<S106>/Calib'
         */
        (void)Rte_Write_VeBCPR_M_BeltTrqMaxVTVR_Value(KeBCPR_M_BeltTrqMaxVTVR);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxVTVR' */
        (void)Rte_Write_VeBCPR_M_BeltTrqMaxVTVR_Value(rtb_Sum3_i_idx_2);
    }

    /* End of Switch: '<S51>/Switch2' */
    /* End of Outputs for SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPO_Output_B' */
    /* Outport: '<Root>/VeBCPR_M_BeltTrqMinHTDR' incorporates:
     *  Inport: '<S52>/VeBCPC_M_BeltTrqMinHTDR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMinHTDR_Value(VeBCPR_M_BeltTrqMinHTDR_DS);

    /* End of Outputs for SubSystem: '<S2>/BCPO_Output_B' */

    /* Outputs for Function Call SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */
    /* Outputs for IfAction SubSystem: '<S313>/Locked_TcR_Cntrl' incorporates:
     *  ActionPort: '<S325>/Action Port'
     */
    /* If: '<S313>/If' incorporates:
     *  Outport: '<Root>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     *  Product: '<S325>/Product1'
     *  Switch: '<S325>/Switch1'
     *  UnitDelay: '<S325>/Unit Delay1'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMinHTDR_Rot_Value
        (-BCPR_ac_DW.UnitDelay1_DSTATE_n);

    /* End of Outputs for SubSystem: '<S313>/Locked_TcR_Cntrl' */

    /* Switch: '<S51>/Switch5' incorporates:
     *  Constant: '<S125>/Calib'
     */
    if (KeBCPR_b_OvrdBeltTrqMinOITR)
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMinOITR' incorporates:
         *  Constant: '<S108>/Calib'
         */
        (void)Rte_Write_VeBCPR_M_BeltTrqMinOITR_Value(KeBCPR_M_BeltTrqMinOITR);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMinOITR' */
        (void)Rte_Write_VeBCPR_M_BeltTrqMinOITR_Value(rtb_Sum3_i_idx_4);
    }

    /* End of Switch: '<S51>/Switch5' */

    /* Switch: '<S51>/Switch6' incorporates:
     *  Constant: '<S126>/Calib'
     */
    if (KeBCPR_b_OvrdBeltTrqMinVTVR)
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMinVTVR' incorporates:
         *  Constant: '<S109>/Calib'
         */
        (void)Rte_Write_VeBCPR_M_BeltTrqMinVTVR_Value(KeBCPR_M_BeltTrqMinVTVR);
    }
    else
    {
        /* Outport: '<Root>/VeBCPR_M_BeltTrqMinVTVR' */
        (void)Rte_Write_VeBCPR_M_BeltTrqMinVTVR_Value(rtb_Sum3_i_idx_5);
    }

    /* End of Switch: '<S51>/Switch6' */
    /* End of Outputs for SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S2>/VeBCPC_M_BeltCapMaxOpenLoopTact_Read' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */
}

/* Output function */
FUNC(void, BCPR_CODE) BCPR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/BCPR_PwrOn'
     */
#if Rte_SysCon_Variant_BCPR_1

    /* S-Function (fcgen): '<S3>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S3>/Init_Variables' */
    /* DataStoreWrite: '<S441>/Data Store Write' incorporates:
     *  Constant: '<S462>/Calib'
     */
    VeBCPR_M_BeltCapMax_DS = KeBCPR_M_BeltCapMaxInit;

    /* DataStoreWrite: '<S441>/Data Store Write1' incorporates:
     *  Constant: '<S463>/Calib'
     */
    VeBCPR_M_BeltCapMin_DS = KeBCPR_M_BeltCapMinInit;

    /* End of Outputs for SubSystem: '<S3>/Init_Variables' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BCPO_Output1'
     */
    /* SignalConversion generated from: '<S440>/VeBCPR_b_PosSlipDetected' */
    BCPR_ac_B.OutportBufferForVeBCPR_b_PosSlipDetected = false;

    /* SignalConversion generated from: '<S440>/VeBCPR_b_BeltSlipSpd_FA' */
    BCPR_ac_B.OutportBufferForVeBCPR_b_BeltSlipSpd_FA = false;

    /* SignalConversion generated from: '<S440>/VeBCPR_n_BeltSlipSpd' */
    BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpd = 0.0F;

    /* SignalConversion generated from: '<S440>/VeBCPR_n_BeltSlipSpdFilt' */
    BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpdFi_p = 0.0F;

    /* SignalConversion generated from: '<S440>/VeBCPR_n_Ni_BCPR' */
    BCPR_ac_B.OutportBufferForVeBCPR_n_Ni_BCPR = 0.0F;

    /* SignalConversion generated from: '<S440>/VeBCPR_b_NegSlipDetected' */
    BCPR_ac_B.OutportBufferForVeBCPR_b_NegSlipDetected = false;

    /* SignalConversion generated from: '<S440>/VeBCPR_b_BeltSlipTrigger' */
    BCPR_ac_B.OutportBufferForVeBCPR_b_BeltSlipTrigger = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S442>/VeBCPR_n_BeltSlipSpd_write' */
    BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpd_wri = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPR_n_BeltSlipSpdFilt_write' */
    BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpdFilt = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMaxOpenLoopTact_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpenL = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMinOpenLoopTact_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpenL = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMaxOpenLoopPrll_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpe_f = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMinOpenLoopPrll_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpe_b = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMaxOpenLoopSer_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpe_a = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMinOpenLoopSer_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpe_a = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMaxOpenLoopPred_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpe_p = 0.0F;

    /* SignalConversion generated from: '<S442>/VeBCPC_M_BeltCapMinOpenLoopPred_write' */
    BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpe_l = 0.0F;

    /* SignalConversion generated from: '<S442>/PrllRngEqn_write' */
    BCPR_ac_B.OutportBufferForPrllRngEqn_write = false;

    /* SignalConversion generated from: '<S442>/PrllPreLeadState_write' */
    BCPR_ac_B.OutportBufferForPrllPreLeadState_write = false;

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/BCPO_Output1'
     */
    /* Outport: '<Root>/VeBCPR_M_BeltCapMax' incorporates:
     *  Constant: '<S440>/Constant Value3'
     *  Gain: '<S461>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMax'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMax_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxBPDR' incorporates:
     *  Constant: '<S440>/Constant Value3'
     *  Gain: '<S445>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMaxBPDR'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxBPDR_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxOpenLoop' incorporates:
     *  Constant: '<S440>/Constant Value3'
     *  Gain: '<S458>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMaxOpenLoop'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxOpenLoop_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxPrll' incorporates:
     *  Constant: '<S440>/Constant Value3'
     *  Gain: '<S459>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMaxPrll'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxPrll_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxSer' incorporates:
     *  Constant: '<S440>/Constant Value3'
     *  Gain: '<S460>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMaxSer'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxSer_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMaxSer_Eff' incorporates:
     *  Constant: '<S440>/Constant Value3'
     *  Gain: '<S452>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMaxSer_Eff'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMaxSer_Eff_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMin' incorporates:
     *  Constant: '<S440>/Constant Value4'
     *  Gain: '<S448>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMin'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMin_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMinBPDR' incorporates:
     *  Constant: '<S440>/Constant Value4'
     *  Gain: '<S449>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMinBPDR'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinBPDR_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMinPrll' incorporates:
     *  Constant: '<S440>/Constant Value4'
     *  Gain: '<S446>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMinPrll'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinPrll_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMinSer' incorporates:
     *  Constant: '<S440>/Constant Value4'
     *  Gain: '<S447>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMinSer'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinSer_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltCapMinSer_Eff' incorporates:
     *  Constant: '<S440>/Constant Value4'
     *  Gain: '<S453>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltCapMinSer_Eff'
     */
    (void)Rte_Write_VeBCPR_M_BeltCapMinSer_Eff_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR' incorporates:
     *  Constant: '<S440>/Constant Value1'
     *  Gain: '<S443>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMaxHTDR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMaxHTDR_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxHTDR_Rot' incorporates:
     *  Constant: '<S440>/Constant Value1'
     *  Gain: '<S450>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMaxHTDR_Rot'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMaxHTDR_Rot_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxOITR' incorporates:
     *  Constant: '<S440>/Constant Value1'
     *  Gain: '<S444>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMaxOITR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMaxOITR_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMaxVTVR' incorporates:
     *  Constant: '<S440>/Constant Value1'
     *  Gain: '<S454>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMaxVTVR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMaxVTVR_Value(20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMinHTDR' incorporates:
     *  Constant: '<S440>/Constant Value2'
     *  Gain: '<S455>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMinHTDR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMinHTDR_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMinHTDR_Rot' incorporates:
     *  Constant: '<S440>/Constant Value2'
     *  Gain: '<S451>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMinHTDR_Rot'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMinHTDR_Rot_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMinOITR' incorporates:
     *  Constant: '<S440>/Constant Value2'
     *  Gain: '<S456>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMinOITR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMinOITR_Value(-20000.0F);

    /* Outport: '<Root>/VeBCPR_M_BeltTrqMinVTVR' incorporates:
     *  Constant: '<S440>/Constant Value2'
     *  Gain: '<S457>/Gain'
     *  SignalConversion generated from: '<S3>/VeBCPR_M_BeltTrqMinVTVR'
     */
    (void)Rte_Write_VeBCPR_M_BeltTrqMinVTVR_Value(-20000.0F);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeBCPR_b_BeltSlipSpd_FA' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_b_BeltSlipSpd_FA'
     */
    (void)Rte_Write_VeBCPR_b_BeltSlipSpd_FA_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_b_BeltSlipSpd_FA);

    /* Outport: '<Root>/VeBCPR_b_BeltSlipTrigger' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_b_BeltSlipTrigger'
     */
    (void)Rte_Write_VeBCPR_b_BeltSlipTrigger_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_b_BeltSlipTrigger);

    /* Outport: '<Root>/VeBCPR_b_NegSlipDetected' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_b_NegSlipDetected'
     */
    (void)Rte_Write_VeBCPR_b_NegSlipDetected_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_b_NegSlipDetected);

    /* Outport: '<Root>/VeBCPR_b_PosSlipDetected' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_b_PosSlipDetected'
     */
    (void)Rte_Write_VeBCPR_b_PosSlipDetected_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_b_PosSlipDetected);

    /* Outport: '<Root>/VeBCPR_n_BeltSlipSpd' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_n_BeltSlipSpd'
     */
    (void)Rte_Write_VeBCPR_n_BeltSlipSpd_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpd);

    /* Outport: '<Root>/VeBCPR_n_BeltSlipSpdFilt' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_n_BeltSlipSpdFilt'
     */
    (void)Rte_Write_VeBCPR_n_BeltSlipSpdFilt_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpdFi_p);

    /* Outport: '<Root>/VeBCPR_n_Ni_BCPR' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_n_Ni_BCPR'
     */
    (void)Rte_Write_VeBCPR_n_Ni_BCPR_Value
        (BCPR_ac_B.OutportBufferForVeBCPR_n_Ni_BCPR);

    /* Merge: '<Root>/PrllPreLeadState_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/PrllPreLeadState_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_PrllPreLeadState_write_IRV
        (BCPR_ac_B.OutportBufferForPrllPreLeadState_write);

    /* Merge: '<Root>/PrllRngEqn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/PrllRngEqn_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_PrllRngEqn_write_IRV
        (BCPR_ac_B.OutportBufferForPrllRngEqn_write);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPred_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMaxOpenLoopPred_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMaxOpenLoopPred_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpe_p);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopPrll_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMaxOpenLoopPrll_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMaxOpenLoopPrll_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpe_f);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopSer_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMaxOpenLoopSer_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMaxOpenLoopSer_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpe_a);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMaxOpenLoopTact_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMaxOpenLoopTact_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMaxOpenLoopTact_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMaxOpenL);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPred_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMinOpenLoopPred_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMinOpenLoopPred_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpe_l);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopPrll_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMinOpenLoopPrll_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMinOpenLoopPrll_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpe_b);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopSer_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMinOpenLoopSer_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMinOpenLoopSer_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpe_a);

    /* Merge: '<Root>/VeBCPC_M_BeltCapMinOpenLoopTact_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPC_M_BeltCapMinOpenLoopTact_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPC_M_BeltCapMinOpenLoopTact_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPC_M_BeltCapMinOpenL);

    /* Merge: '<Root>/VeBCPR_n_BeltSlipSpdFilt_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_n_BeltSlipSpdFilt_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPR_n_BeltSlipSpdFilt_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpdFilt);

    /* Merge: '<Root>/VeBCPR_n_BeltSlipSpd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeBCPR_n_BeltSlipSpd_write'
     * */
    Rte_IrvWrite_BCPR_PwrOn_VeBCPR_n_BeltSlipSpd_write_IRV
        (BCPR_ac_B.OutportBufferForVeBCPR_n_BeltSlipSpd_wri);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, BCPR_CODE) BCPR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/BCPR_MedTED2'
     */
#if Rte_SysCon_Variant_BCPR_1

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */
    /* SystemInitialize for Function Call SubSystem: '<S2>/BCPC_BeltCapDtmn' */
    /* Start for If: '<S55>/If1' incorporates:
     *  If: '<S101>/If1'
     *  Merge: '<S101>/Merge1'
     *  Merge: '<S55>/Merge'
     *  Merge: '<S55>/Merge1'
     */
#if Rte_SysCon_Variant_HSCL_FEAD1

    BCPR_ac_DW.If1_ActiveSubsystem_c = -1;
    BCPR_ac_DW.If1_ActiveSubsystem = -1;

#endif

    /* End of Start for If: '<S55>/If1' */
    /* End of SystemInitialize for SubSystem: '<S2>/BCPC_BeltCapDtmn' */
    /* End of SystemInitialize for SubSystem: '<S2>/BCPC_BeltSlipImmedReaction' */
    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
