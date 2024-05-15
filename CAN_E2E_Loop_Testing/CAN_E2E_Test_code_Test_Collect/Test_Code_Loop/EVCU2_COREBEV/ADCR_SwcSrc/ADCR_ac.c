/*
 * File: ADCR_ac.c
 *
 * Code generated for Simulink model 'ADCR_ac'.
 *
 * Model version                  : 9.324
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:04:06 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ADCR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S144>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_ActuateClosed       ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_ActuateOpen         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_ActuateToClosed     ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_ActuateToClosedForRetry ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_ActuateToOpen       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_ActuateToOpenForRetry ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_Closed              ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_CooldownActive      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_EnblWgglDurngClsd   ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_Init                ((uint8)4U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_LearningActive      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_Open                ((uint8)5U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_PositionStuckWhlOpng ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_SS_Closed           ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_StuckInMiddle       ((uint8)6U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_TimerActive         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_TimerActive_e       ((uint8)3U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_TimerInactive       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE
#define ADCR_ac_IN_UnintentedOpen      ((uint8)7U)
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
#define START_SEC_CALIB_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDReqArb, ADCR_VAR_INIT)
    HaADCR_e_AWDReqArbPrioOrder[5] =
{
    CeADCR_e_AWDReqArb_NoArb, CeADCR_e_AWDReqArb_NoArb, CeADCR_e_AWDReqArb_NoArb,
    CeADCR_e_AWDReqArb_NoArb, CeADCR_e_AWDReqArb_NoArb
};                                     /* Referenced by: '<S787>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) HeADCR_b_WEDPrioSimClsngEna = 1;/* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(uint8, ADCR_VAR_INIT) HeADCR_i_ReqArbPrioLvl_BSM = 2U;/* Referenced by: '<S800>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(uint8, ADCR_VAR_INIT) HeADCR_i_ReqArbPrioLvl_VehDyn = 2U;/* Referenced by: '<S811>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(uint8, ADCR_VAR_INIT) HeADCR_i_ReqArbPrioLvl_VehSpdHigh_A =
    1U;                                /* Referenced by: '<S818>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(uint8, ADCR_VAR_INIT) HeADCR_i_ReqArbPrioLvl_VehSpdHigh_B =
    1U;                                /* Referenced by: '<S828>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(uint8, ADCR_VAR_INIT) HeADCR_i_ReqArbPrioLvl_VehSpdLow =
    3U;                                /* Referenced by: '<S835>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) HeADCR_t_MedTEB_dT = 0.01F;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) HeADCR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S322>/Calib'
                                                                      * '<S779>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_M_NegNxCLNegOffset[3] =
{
    0.3F, 0.25F, 0.2F
} ;                                    /* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_M_NegNxCLPosOffset[3] =
{
    0.4F, 0.5F, 0.6F
} ;                                    /* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_M_PosNxCLNegOffset[3] =
{
    0.6F, 0.5F, 0.4F
} ;                                    /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_M_PosNxCLPosOffset[3] =
{
    0.2F, 0.25F, 0.3F
} ;                                    /* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_dn_ClchXMaxSyncSlipDot[5] =
{
    20000.0F, 20000.0F, 20000.0F, 20000.0F, 20000.0F
} ;                                    /* Referenced by: '<S20>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_dn_ClchYMaxSyncSlipDot[5] =
{
    20000.0F, 20000.0F, 20000.0F, 20000.0F, 20000.0F
} ;                                    /* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDReq, ADCR_VAR_INIT)
    KaADCR_e_AWDDiscnctAllwdMap[5] =
{
    CeADCR_e_ReqOpt, CeADCR_e_ReqOpt, CeADCR_e_ForceClosed, CeADCR_e_ReqOpt,
    CeADCR_e_ReqOpt
};                                     /* Referenced by: '<S809>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_WEDStatus, ADCR_VAR_INIT)
    KaADCR_e_ActnStatus2WEDStatus[5] =
{
    CeADCR_e_Init, CeADCR_e_Open, CeADCR_e_Opening, CeADCR_e_Closing,
    CeADCR_e_Closed
};                                     /* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDDiscSt, ADCR_VAR_INIT)
    KaADCR_e_WEDAWDDiscTarSt[15] =
{
    CeADCR_e_AWDOpen_All, CeADCR_e_AWDOpen_All, CeADCR_e_AWDOpen_All,
    CeADCR_e_AWDOpen_All, CeADCR_e_AWDOpen_All, CeADCR_e_AWDOpen_All,
    CeADCR_e_AWDOpen_All, CeADCR_e_AWDOpen_All, CeADCR_e_AWDOpen_All,
    CeADCR_e_AWDOpenToModeX, CeADCR_e_AWDOpenToModeY, CeADCR_e_AWDOpenToLocked,
    CeADCR_e_AWDOpenToModeX, CeADCR_e_AWDOpenToModeY, CeADCR_e_AWDOpenToLocked
};                                     /* Referenced by: '<S517>/Calib' */

#endif

static volatile CONST(uint8, ADCR_VAR_INIT) KaADCR_i_WEDAxleStatCANMap[5] =
{
    2U, 4U, 3U, 1U, 0U
} ;                                    /* Referenced by:
                                        * '<S326>/Calib'
                                        * '<S774>/Calib'
                                        * '<S858>/Calib'
                                        */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_n_ClchXMaxSyncSlip[5] =
{
    20.0F, 20.0F, 20.0F, 50.0F, 50.0F
} ;                                    /* Referenced by: '<S22>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_n_ClchYMaxSyncSlip[5] =
{
    20.0F, 20.0F, 20.0F, 50.0F, 50.0F
} ;                                    /* Referenced by: '<S21>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDClchSlipLocked[6] =
{
    0.198F, 0.198F, -1.0F, -1.0F, -1.0F, -1.0F
} ;                                    /* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDClchSlipMX[6] =
{
    0.0F, 0.198F, 0.0F, -1.0F, 0.0F, -1.0F
} ;                                    /* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDClchSlipMY[6] =
{
    0.198F, 0.0F, -1.0F, 0.0F, -1.0F, 0.0F
} ;                                    /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDClchSlipOpen[6] =
{
    0.099F, 0.099F, -1.0F, 0.0F, 0.0F, -1.0F
} ;                                    /* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDNxTgtAvg[4] =
{
    -5.0495F, -5.0495F, 5.0495F, 5.0495F
} ;                                    /* Referenced by:
                                        * '<S207>/Calib'
                                        * '<S734>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDNxTgtMX[4] =
{
    0.0F, -5.0495F, 5.0495F, 5.0495F
} ;                                    /* Referenced by: '<S744>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KaADCR_r_AWDNxTgtMY[4] =
{
    -5.0495F, 0.0F, 5.0495F, 5.0495F
} ;                                    /* Referenced by: '<S754>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_L_WEDPosnStckThrsh = 0.25F;/* Referenced by:
                                                                      * '<S152>/Calib'
                                                                      * '<S168>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_AWDMaxClchCap_TcROvrd =
    20000.0F;                          /* Referenced by:
                                        * '<S354>/Calib'
                                        * '<S364>/Calib'
                                        * '<S374>/Calib'
                                        * '<S385>/Calib'
                                        * '<S396>/Calib'
                                        * '<S464>/Calib'
                                        * '<S475>/Calib'
                                        * '<S487>/Calib'
                                        * '<S542>/Calib'
                                        * '<S414>/Calib'
                                        * '<S425>/Calib'
                                        * '<S431>/Calib'
                                        * '<S434>/Calib'
                                        * '<S451>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_AWDMaxClchEstLocked =
    20000.0F;                          /* Referenced by:
                                        * '<S465>/Calib'
                                        * '<S429>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_AWDMaxClchEstModeX = 0.0F;/* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_AWDMaxClchEstModeY = 0.0F;/* Referenced by: '<S488>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_ClchTrqThrsd = 0.01F;/* Referenced by: '<S661>/Calib' */

#endif

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_WEDMtrCLMaxInit = 0.0F;/* Referenced by:
                                                                      * '<S196>/Calib'
                                                                      * '<S859>/Calib'
                                                                      */
static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_M_WEDMtrCLMinInit = 0.0F;/* Referenced by:
                                                                      * '<S197>/Calib'
                                                                      * '<S860>/Calib'
                                                                      */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_P_PwrRsrvMin = 5.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_EnblLckEqnFlsOpnAll = 1;/* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_EnblWgglDurngClsd = 1;/* Referenced by:
                                                                      * '<S153>/Calib'
                                                                      * '<S169>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_EnblWgglWhnStck = 1;/* Referenced by:
                                                                      * '<S154>/Calib'
                                                                      * '<S170>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_PwrRsrvEnbl = 0;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_RstWgglAtOpen = 1;/* Referenced by:
                                                                      * '<S156>/Calib'
                                                                      * '<S172>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_UseTcROvrd4OfladCnfrmd =
    1;                                 /* Referenced by: '<S662>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_WEDCmndArbOvrdEna = 0;/* Referenced by: '<S786>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(boolean, ADCR_VAR_INIT) KeADCR_b_WEDPrioOvrdEna = 0;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_d2n_OptNxDotJerkLmt =
    200000.0F;                         /* Referenced by:
                                        * '<S735>/Calib'
                                        * '<S745>/Calib'
                                        * '<S755>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_dM_Tc2RampRate = 5000.0F;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_dM_Tc2RampRateFast =
    5000.0F;                           /* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDDiscProfEqn, ADCR_VAR_INIT)
    KeADCR_e_AWDDiscProfEqnLocked = CeADCR_e_AWDDiscProfEqnTgtAvg;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDDiscProfEqn, ADCR_VAR_INIT)
    KeADCR_e_AWDDiscProfEqnModeX = CeADCR_e_AWDDiscProfEqnTgtClchX;/* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDDiscProfEqn, ADCR_VAR_INIT)
    KeADCR_e_AWDDiscProfEqnModeY = CeADCR_e_AWDDiscProfEqnTgtClchY;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDDiscSt, ADCR_VAR_INIT) KeADCR_e_AWDDiscStInit =
    CeADCR_e_AWDLocked;                /* Referenced by: '<S619>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_WEDStGrp, ADCR_VAR_INIT)
    KeADCR_e_AWDDiscStInitGroup = CeADCR_e_WEDSteadyState_Group;/* Referenced by: '<S620>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_WEDStatus, ADCR_VAR_INIT)
    KeADCR_e_AWDModeXAxleStat = CeADCR_e_Closing;/* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_WEDStatus, ADCR_VAR_INIT)
    KeADCR_e_AWDModeYAxleStat = CeADCR_e_Closing;/* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_AWDReq, ADCR_VAR_INIT) KeADCR_e_WEDCmndArbOvrdVal
    = CeADCR_e_ReqOpt;                 /* Referenced by: '<S785>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(TeADCR_e_WEDPriority, ADCR_VAR_INIT)
    KeADCR_e_WEDPrioOvrdVal = CeADCR_e_WEDSimultaneous;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(uint8, ADCR_VAR_INIT) KeADCR_i_WEDCmndArbPrioLvlOvrdVal =
    1U;                                /* Referenced by: '<S784>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltLocked = 1.0F;/* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltModeX = 1.0F;/* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltModeXToLocked =
    1.0F;                              /* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltModeY = 1.0F;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltModeYToLocked =
    1.0F;                              /* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltOpen = 1.0F;/* Referenced by:
                                                                      * '<S402>/Calib'
                                                                      * '<S543>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltOpenAll = 1.0F;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltOpenToLocked =
    1.0F;                              /* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltOpenToModeX =
    1.0F;                              /* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_NxProfFiltOpenToModeY =
    1.0F;                              /* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_k_OptNxDotFilt = 1.0F;/* Referenced by:
                                                                      * '<S736>/Calib'
                                                                      * '<S746>/Calib'
                                                                      * '<S756>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_AWDMtrLowSpdCnt = 10.0F;/* Referenced by: '<S513>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_AWDMtrLowSpdThrsh = 10.0F;/* Referenced by: '<S514>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_VehSpdHigh_HighSpdThsld =
    20.0F;                             /* Referenced by:
                                        * '<S801>/Calib'
                                        * '<S822>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_VehSpdHigh_LowSpdThsld =
    20.0F;                             /* Referenced by: '<S802>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_VehSpdLow_LowSpdThsld =
    20.0F;                             /* Referenced by: '<S832>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_WEDPrioTrnstnThrsh =
    20.0F;                             /* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_n_WEDSlipTgtDeadband =
    10.0F;                             /* Referenced by:
                                        * '<S205>/Calib'
                                        * '<S715>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_ADCClchOfldDlyTmr = 0.5F;/* Referenced by: '<S655>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_ClchTorqTimer = 0.05F;/* Referenced by: '<S660>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_ClchXMinSyncTurnOffDelay =
    0.05F;                             /* Referenced by: '<S23>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_ClchXMinSyncTurnOnDelay =
    0.05F;                             /* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_ClchYMinSyncTurnOffDelay =
    0.05F;                             /* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_ClchYMinSyncTurnOnDelay =
    0.05F;                             /* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_NCADotCutOff = 0.05F;/* Referenced by:
                                                                      * '<S99>/Calib'
                                                                      * '<S104>/Calib'
                                                                      * '<S111>/Calib'
                                                                      * '<S116>/Calib'
                                                                      * '<S122>/Calib'
                                                                      * '<S128>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_Tc2LeadTime = 0.75F;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_VehSpdHigh_HighSpdReqDly =
    4.0F;                              /* Referenced by: '<S803>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_WEDClsngTmLmt = 2.0F;/* Referenced by:
                                                                      * '<S157>/Calib'
                                                                      * '<S173>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_WEDClsngWgglTmLmt = 2.0F;/* Referenced by:
                                                                      * '<S155>/Calib'
                                                                      * '<S171>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_WEDOpngTmLmt = 2.0F;/* Referenced by:
                                                                      * '<S158>/Calib'
                                                                      * '<S174>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_WEDOpngWgglTmLmt = 2.0F;/* Referenced by:
                                                                      * '<S159>/Calib'
                                                                      * '<S175>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_WEDPrioDlyTmr = 0.01F;/* Referenced by: '<S523>/Calib' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KeADCR_t_WEDPsnStckDly = 0.1F;/* Referenced by:
                                                                      * '<S160>/Calib'
                                                                      * '<S176>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KtADCR_P_TgtPwrRsrv4Engmt[168] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S212>/Vector' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KtADCR_n_WEDSlipTgtFrmNo[8] =
{
    10.0F, 10.0F, 10.0F, 10.0F, -10.0F, -10.0F, -10.0F, -10.0F
} ;                                    /* Referenced by:
                                        * '<S206>/Vector'
                                        * '<S716>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KtADCR_scl_WEDCLMtrLmtPosn[9] =
{
    0.0F, 0.0F, 0.0F, 0.2F, 0.4F, 0.6F, 0.8F, 1.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S74>/Vector'
                                        * '<S79>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KtADCR_t_TgtTmToClose[21] =
{
    0.05F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F, 1.1F,
    1.2F, 1.3F, 1.4F, 1.5F, 1.6F, 1.7F, 1.8F, 1.9F, 2.0F
} ;                                    /* Referenced by: '<S213>/Vector' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KxADCR_P_TgtPwrRsrv4Engmt[8] =
{
    1.0F, 250.0F, 500.0F, 1000.0F, 2500.0F, 5000.0F, 10000.0F, 20000.0F
} ;                                    /* Referenced by: '<S212>/Vector' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KxADCR_n_WEDSlipTgtFrmNo[8] =
{
    -10000.0F, -15.0F, -10.0F, -0.001F, 0.0F, 10.0F, 15.0F, 10000.0F
} ;                                    /* Referenced by:
                                        * '<S206>/Vector'
                                        * '<S716>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KxADCR_scl_WEDCLMtrLmtPosn[9] =
{
    0.0F, 0.4F, 1.0F, 1.5F, 2.5F, 3.5F, 4.0F, 4.5F, 5.0F
} ;                                    /* Referenced by:
                                        * '<S74>/Vector'
                                        * '<S79>/Vector'
                                        */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KxADCR_t_TgtTmToClose[21] =
{
    0.0F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3000.0F, 3500.0F, 4000.0F,
    4500.0F, 5000.0F, 5500.0F, 6000.0F, 6500.0F, 7000.0F, 7500.0F, 8000.0F,
    8500.0F, 9000.0F, 9500.0F, 10000.0F
} ;                                    /* Referenced by: '<S213>/Vector' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static volatile CONST(float32, ADCR_VAR_INIT) KyADCR_P_TgtPwrRsrv4Engmt[21] =
{
    0.05F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F, 1.1F,
    1.2F, 1.3F, 1.4F, 1.5F, 1.6F, 1.7F, 1.8F, 1.9F, 2.0F
} ;                                    /* Referenced by: '<S212>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_ADCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_M_WEDThruTorq;/* '<S13>/Sum' */

#endif

static VAR(boolean, ADCR_VAR_INIT) VeADCC_b_AWDClchOffloaded_DS;/* '<Root>/Data Store Memory5' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(boolean, ADCR_VAR_INIT) VeADCC_b_LeftEnblWggl;/* '<S144>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(boolean, ADCR_VAR_INIT) VeADCC_b_RtEnblWggl;/* '<S145>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_dn_WEDClchXSlipDotAct;/* '<S80>/Merge3' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_dn_WEDClchYSlipDotAct;/* '<S80>/Merge4' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_AWDDiscSt, ADCR_VAR_INIT) VeADCC_e_AWDDiscTarSt;/* '<S501>/Selector' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_WEDCmndState, ADCR_VAR_INIT) VeADCC_e_WEDLeftCmndMgrSt;/* '<S144>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_WEDActnCmnd, ADCR_VAR_INIT) VeADCC_e_WEDLeftCmndStat;/* '<S144>/ADCC_WEDStatCmndMgr' */

#endif

static VAR(TeADCR_e_WEDStatus, ADCR_VAR_INIT) VeADCC_e_WEDLeftStatDsrd_DS;/* '<Root>/Data Store Memory15' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_WEDCmndState, ADCR_VAR_INIT) VeADCC_e_WEDRightCmndMgrSt;/* '<S145>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_WEDActnCmnd, ADCR_VAR_INIT) VeADCC_e_WEDRightCmndStat;/* '<S145>/ADCC_WEDStatCmndMgr' */

#endif

static VAR(TeADCR_e_WEDStatus, ADCR_VAR_INIT) VeADCC_e_WEDRightStatDsrd_DS;/* '<Root>/Data Store Memory16' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_n_WEDClchXSlipAct;/* '<S80>/Merge1' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_n_WEDClchYSlipAct;/* '<S80>/Merge2' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_t_WEDLeftClsngMgrStTmr;/* '<S144>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_t_WEDLeftOpngMgrStTmr;/* '<S144>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_t_WEDRightClsngMgrStTmr;/* '<S145>/ADCC_WEDStatCmndMgr' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCC_t_WEDRightOpngMgrStTmr;/* '<S145>/ADCC_WEDStatCmndMgr' */

#endif

static VAR(float32, ADCR_VAR_INIT) VeADCR_M_AWDClch_LeadTcR_Ovrd_DS;/* '<Root>/Data Store Memory9' */
static VAR(float32, ADCR_VAR_INIT) VeADCR_M_AWDClch_TcR_Ovrd_DS;/* '<Root>/Data Store Memory8' */
static VAR(float32, ADCR_VAR_INIT) VeADCR_M_AWDClch_TorqEst_DS;/* '<Root>/Data Store Memory17' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCR_P_CurrEngMtrPwr;/* '<S208>/Switch1' */

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(float32, ADCR_VAR_INIT) VeADCR_P_CurrWEDMtrPwr;/* '<S209>/Sum' */

#endif

static VAR(boolean, ADCR_VAR_INIT) VeADCR_b_AWDUseLckdEqn_DS;/* '<Root>/Data Store Memory7' */
static VAR(float32, ADCR_VAR_INIT) VeADCR_dn_AWDNxTgtDot_DS;/* '<Root>/Data Store Memory11' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_AWDReqArb, ADCR_VAR_INIT) VeADCR_e_AWDActvReq_DS;/* '<Root>/Data Store Memory21' */

#endif

static VAR(TeADCR_e_AWDDiscSt, ADCR_VAR_INIT) VeADCR_e_AWDDiscCurrSt_DS;/* '<Root>/Data Store Memory13' */
static VAR(TeADCR_e_WEDPriority, ADCR_VAR_INIT) VeADCR_e_AWDDiscPriority_DS;/* '<Root>/Data Store Memory6' */
static VAR(TeADCR_e_AWDDiscProfEqn, ADCR_VAR_INIT) VeADCR_e_AWDDiscProfEqn_DS;/* '<Root>/Data Store Memory3' */
static VAR(TeADCR_e_AWDDiscSlipSpdEqn, ADCR_VAR_INIT)
    VeADCR_e_AWDDiscSlipSpdEqn_DS;     /* '<Root>/Data Store Memory2' */
static VAR(TeADCR_e_AWDSysStat, ADCR_VAR_INIT) VeADCR_e_AWDSysStat_DS;/* '<Root>/Data Store Memory1' */
static VAR(TeADCR_e_WEDStatus, ADCR_VAR_INIT) VeADCR_e_WEDAxleStat_DS;/* '<Root>/Data Store Memory4' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(TeADCR_e_AWDReq, ADCR_VAR_INIT) VeADCR_e_WEDCmndArb_DS;/* '<Root>/Data Store Memory18' */

#endif

static VAR(TeADCR_e_WEDStGrp, ADCR_VAR_INIT) VeADCR_e_WEDCurrStatGroup_DS;/* '<Root>/Data Store Memory14' */

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static VAR(uint8, ADCR_VAR_INIT) VeADCR_i_WEDCmndArbPrioLvl_DS;/* '<Root>/Data Store Memory19' */

#endif

static VAR(float32, ADCR_VAR_INIT) VeADCR_k_AWDNxProfFilt_DS;/* '<Root>/Data Store Memory12' */
static VAR(float32, ADCR_VAR_INIT) VeADCR_n_AWDNxTgt_DS;/* '<Root>/Data Store Memory10' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

CONST(ConstB_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_ConstB =
{
    CeADCR_e_Closed,                   /* '<S856>/Constant' */
    CeADCR_e_Closed,                   /* '<S846>/Constant' */
    CeADCR_e_Closed,                   /* '<S853>/Constant' */
    CeADCR_e_Closed,                   /* '<S849>/Constant' */
    CeADCR_e_Closed,                   /* '<S848>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Closed,                   /* '<S769>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Closed,                   /* '<S193>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Closed,                   /* '<S183>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Closed,                   /* '<S186>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Closed,                   /* '<S185>/Constant' */

#endif

    CeADCR_e_WEDCmndInit,              /* '<S854>/Constant' */
    CeADCR_e_WEDCmndInit,              /* '<S855>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_WEDCmndInit,              /* '<S191>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_WEDCmndInit,              /* '<S192>/Constant' */

#endif

    CeADCR_e_NoCmnd,                   /* '<S845>/Constant' */
    CeADCR_e_NoCmnd,                   /* '<S850>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_NoCmnd,                   /* '<S182>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_NoCmnd,                   /* '<S187>/Constant' */

#endif

    CeADCR_e_AllWheelDrive,            /* '<S844>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_AllWheelDrive,            /* '<S760>/Constant' */

#endif

    CeADCR_e_ReqOpt,                   /* '<S852>/Constant' */

#if !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_ReqOpt,                   /* '<S836>/Constant' */

#endif

    CeADCR_e_AWDInit,                  /* '<S847>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_AWDInit,                  /* '<S763>/Constant' */

#endif

    CeADCR_e_Locked,                   /* '<S857>/Constant' */
    CeADCR_e_Locked,                   /* '<S851>/Constant' */

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Locked,                   /* '<S194>/Constant' */

#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    CeADCR_e_Locked                    /* '<S188>/Constant' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

CONST(ConstP_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_ConstP =
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S212>/Vector'
     */
    {
        7U, 20U
    },

#endif

#ifndef CONSTP_ADCR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

VAR(B_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"

VAR(DW_ADCR_ac_T, ADCR_VAR_INIT) ADCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ADCR
#include "MemMap.h"
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Locked(P2VAR(TeADCR_e_AWDClchStat,
    AUTOMATIC, ADCR_VAR_INIT) rty_Locked);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Synched(P2VAR(TeADCR_e_AWDClchStat,
    AUTOMATIC, ADCR_VAR_INIT) rty_Synched);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Released(P2VAR(TeADCR_e_AWDClchStat,
    AUTOMATIC, ADCR_VAR_INIT) rty_Released);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_MtrB(VAR(float32, AUTOMATIC)
    rtu_CoeffIn, VAR(float32, AUTOMATIC) rtu_CoeffIn_n, VAR(float32, AUTOMATIC)
    rtu_CoeffIn_p, VAR(float32, AUTOMATIC) rty_CoeffOut[3], P2VAR(float32,
    AUTOMATIC, ADCR_VAR_INIT) rty_MtrInertia);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Motor_A_Forward(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, ADCR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Motor_A_Reverse(VAR(float32,
    AUTOMATIC) rtu_Raw, P2VAR(float32, AUTOMATIC, ADCR_VAR_INIT) rty_Rev);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_OPTL_1DAxis34ptsA(VAR(float32,
    AUTOMATIC) rtu_Input_value, CONST(float32, AUTOMATIC) rtu_DataArray[34],
    P2VAR(B_OPTL_1DAxis34ptsA_ADCR_ac_T, AUTOMATIC, ADCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_OPTL_Dynamic1D_A1_Pts(VAR(float32,
    AUTOMATIC) rtu_Upper_Index, VAR(float32, AUTOMATIC) rtu_Lower_Index, CONST
    (float32, AUTOMATIC) rtu_X_ArrayData[34], P2VAR
    (B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T, AUTOMATIC, ADCR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeXToLocked(void);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeX(void);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_OpemAll(void);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Locked_l(void);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeYToLocked(void);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeY(void);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_TgtClchXSelect(VAR(float32, AUTOMATIC)
    rtu_NxTgt_In, VAR(float32, AUTOMATIC) rtu_NxTgtDot_In, P2VAR(float32,
    AUTOMATIC, ADCR_VAR_INIT) rty_NxTgt, P2VAR(float32, AUTOMATIC, ADCR_VAR_INIT)
    rty_NxTargetDot);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ForceClosed(P2VAR(TeADCR_e_AWDReq,
    AUTOMATIC, ADCR_VAR_INIT) rty_VeADCC_e_WEDCmndArb);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ForceOpen(P2VAR(TeADCR_e_AWDReq,
    AUTOMATIC, ADCR_VAR_INIT) rty_VeADCC_e_WEDCmndArb);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static float32 ADCR_ac_frac(float32 Upper, float32 Lower, float32 Input);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_enter_internal_ActuateOpen(const boolean *RelationalOperator);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateClosed(const boolean *LogicalOperator, const boolean *
    RelationalOperator, const TeADCR_e_WEDStatus *Selector_j);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateOpen(const boolean *LogicalOperator, const boolean
    *RelationalOperator, const TeADCR_e_WEDStatus *Selector_j);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_enter_internal_ActuateOpen_h(const boolean
    *RelationalOperator);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateClosed_o(const boolean *LogicalOperator_a, const
    boolean *RelationalOperator, const TeADCR_e_WEDStatus *Selector1);

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateOpen_b(const boolean *LogicalOperator_a, const
    boolean *RelationalOperator, const TeADCR_e_WEDStatus *Selector1);

#endif

/*
 * Output and update for action system:
 *    '<S17>/Locked'
 *    '<S18>/Locked'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Locked(P2VAR(TeADCR_e_AWDClchStat,
    AUTOMATIC, ADCR_VAR_INIT) rty_Locked)
{
    /* SignalConversion generated from: '<S33>/Locked' incorporates:
     *  Constant: '<S38>/Constant'
     */
    *rty_Locked = CeADCR_e_Locked;
}

#endif

/*
 * Output and update for action system:
 *    '<S17>/Synched'
 *    '<S18>/Synched'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Synched(P2VAR(TeADCR_e_AWDClchStat,
    AUTOMATIC, ADCR_VAR_INIT) rty_Synched)
{
    /* SignalConversion generated from: '<S35>/Synched' incorporates:
     *  Constant: '<S40>/Constant'
     */
    *rty_Synched = CeADCR_e_Synched;
}

#endif

/*
 * Output and update for action system:
 *    '<S17>/Released'
 *    '<S18>/Released'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Released(P2VAR(TeADCR_e_AWDClchStat,
    AUTOMATIC, ADCR_VAR_INIT) rty_Released)
{
    /* SignalConversion generated from: '<S34>/Released' incorporates:
     *  Constant: '<S39>/Constant'
     */
    *rty_Released = CeADCR_e_Released;
}

#endif

/*
 * Output and update for action system:
 *    '<S209>/MtrB'
 *    '<S209>/MtrC'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_MtrB(VAR(float32, AUTOMATIC)
    rtu_CoeffIn, VAR(float32, AUTOMATIC) rtu_CoeffIn_n, VAR(float32, AUTOMATIC)
    rtu_CoeffIn_p, VAR(float32, AUTOMATIC) rty_CoeffOut[3], P2VAR(float32,
    AUTOMATIC, ADCR_VAR_INIT) rty_MtrInertia)
{
    /* Inport: '<S226>/CoeffIn' */
    rty_CoeffOut[0] = rtu_CoeffIn;
    rty_CoeffOut[1] = rtu_CoeffIn_n;
    rty_CoeffOut[2] = rtu_CoeffIn_p;

    /* SignalConversion generated from: '<S226>/MtrInertia' incorporates:
     *  Constant: '<S230>/Calib'
     */
    *rty_MtrInertia = Rte_Prm_KeTSXR_J_Ib_KeTSXR_J_Ib();
}

#endif

/*
 * Output and update for action system:
 *    '<S238>/Motor_A_Forward'
 *    '<S239>/Motor_B_Forward'
 *    '<S240>/Motor_B_Forward'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Motor_A_Forward(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, ADCR_VAR_INIT) rty_Out1)
{
    /* Gain: '<S262>/Gain' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for action system:
 *    '<S238>/Motor_A_Reverse'
 *    '<S239>/Motor_B_Reverse'
 *    '<S240>/Motor_B_Reverse'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Motor_A_Reverse(VAR(float32,
    AUTOMATIC) rtu_Raw, P2VAR(float32, AUTOMATIC, ADCR_VAR_INIT) rty_Rev)
{
    /* Product: '<S255>/Product' */
    *rty_Rev = -rtu_Raw;
}

#endif

/* Function for Chart: '<S256>/X_Data_and_Fractions' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static float32 ADCR_ac_frac(float32 Upper, float32 Lower, float32 Input)
{
    /* Graphical Function 'frac': '<S263>:1' */
    /* Transition: '<S263>:122' */
    /* Transition: '<S263>:121' */
    return (Input - Lower) / (Upper - Lower);
}

#endif

/*
 * Output and update for atomic system:
 *    '<S238>/OPTL_1DAxis34ptsA'
 *    '<S239>/OPTL_1DAxis34ptsB'
 *    '<S240>/OPTL_1DAxis34ptsC'
 * Common block description:
 *   x.x
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_OPTL_1DAxis34ptsA(VAR(float32,
    AUTOMATIC) rtu_Input_value, CONST(float32, AUTOMATIC) rtu_DataArray[34],
    P2VAR(B_OPTL_1DAxis34ptsA_ADCR_ac_T, AUTOMATIC, ADCR_VAR_INIT) localB)
{
    /* Chart: '<S256>/X_Data_and_Fractions' */
    /* Gateway: OPTL_1DDynamicBinSearch34pts/X_Data_and_Fractions */
    /* During: OPTL_1DDynamicBinSearch34pts/X_Data_and_Fractions */
    /* Entry Internal: OPTL_1DDynamicBinSearch34pts/X_Data_and_Fractions */
    /* Transition: '<S263>:2' */
    if (rtu_Input_value >= rtu_DataArray[17])
    {
        /* Transition: '<S263>:3' */
        if (rtu_Input_value >= rtu_DataArray[25])
        {
            /* Transition: '<S263>:5' */
            if (rtu_Input_value >= rtu_DataArray[29])
            {
                /* Transition: '<S263>:7' */
                if (rtu_Input_value >= rtu_DataArray[31])
                {
                    /* Transition: '<S263>:9' */
                    if (rtu_Input_value >= rtu_DataArray[32])
                    {
                        /* Transition: '<S263>:11' */
                        if (rtu_Input_value >= rtu_DataArray[33])
                        {
                            /* Transition: '<S263>:250' */
                            localB->UpperIndex = 33.0F;
                            localB->LowerIndex = 32.0F;
                            localB->fra = ADCR_ac_frac(rtu_DataArray[33],
                                rtu_DataArray[32], rtu_DataArray[33]);

                            /* Transition: '<S263>:272' */
                        }
                        else
                        {
                            /* Transition: '<S263>:13' */
                            localB->UpperIndex = 33.0F;
                            localB->LowerIndex = 32.0F;
                            localB->fra = ADCR_ac_frac(rtu_DataArray[33],
                                rtu_DataArray[32], rtu_Input_value);
                        }
                    }
                    else
                    {
                        /* Transition: '<S263>:26' */
                        localB->UpperIndex = 32.0F;
                        localB->LowerIndex = 31.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[32],
                            rtu_DataArray[31], rtu_Input_value);

                        /* Transition: '<S263>:39' */
                        /* Transition: '<S263>:230' */
                    }
                }
                else
                {
                    /* Transition: '<S263>:24' */
                    if (rtu_Input_value >= rtu_DataArray[30])
                    {
                        /* Transition: '<S263>:12' */
                        localB->UpperIndex = 31.0F;
                        localB->LowerIndex = 30.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[31],
                            rtu_DataArray[30], rtu_Input_value);

                        /* Transition: '<S263>:29' */
                        /* Transition: '<S263>:14' */
                        /* Transition: '<S263>:39' */
                        /* Transition: '<S263>:230' */
                    }
                    else
                    {
                        /* Transition: '<S263>:15' */
                        /* Transition: '<S263>:27' */
                        localB->UpperIndex = 30.0F;
                        localB->LowerIndex = 29.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[30],
                            rtu_DataArray[29], rtu_Input_value);

                        /* Transition: '<S263>:14' */
                        /* Transition: '<S263>:39' */
                        /* Transition: '<S263>:230' */
                    }
                }
            }
            else
            {
                /* Transition: '<S263>:23' */
                if (rtu_Input_value >= rtu_DataArray[27])
                {
                    /* Transition: '<S263>:10' */
                    if (rtu_Input_value >= rtu_DataArray[28])
                    {
                        /* Transition: '<S263>:16' */
                        localB->UpperIndex = 29.0F;
                        localB->LowerIndex = 28.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[29],
                            rtu_DataArray[28], rtu_Input_value);

                        /* Transition: '<S263>:33' */
                    }
                    else
                    {
                        /* Transition: '<S263>:32' */
                        localB->UpperIndex = 28.0F;
                        localB->LowerIndex = 27.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[28],
                            rtu_DataArray[27], rtu_Input_value);

                        /* Transition: '<S263>:34' */
                    }
                }
                else
                {
                    /* Transition: '<S263>:30' */
                    if (rtu_Input_value >= rtu_DataArray[26])
                    {
                        /* Transition: '<S263>:31' */
                        localB->UpperIndex = 27.0F;
                        localB->LowerIndex = 26.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[27],
                            rtu_DataArray[26], rtu_Input_value);

                        /* Transition: '<S263>:37' */
                    }
                    else
                    {
                        /* Transition: '<S263>:36' */
                        localB->UpperIndex = 26.0F;
                        localB->LowerIndex = 25.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[26],
                            rtu_DataArray[25], rtu_Input_value);

                        /* Transition: '<S263>:17' */
                    }

                    /* Transition: '<S263>:35' */
                    /* Transition: '<S263>:34' */
                }

                /* Transition: '<S263>:28' */
                /* Transition: '<S263>:29' */
                /* Transition: '<S263>:14' */
                /* Transition: '<S263>:39' */
                /* Transition: '<S263>:230' */
            }

            /* Transition: '<S263>:53' */
            /* Transition: '<S263>:67' */
        }
        else
        {
            /* Transition: '<S263>:22' */
            if (rtu_Input_value >= rtu_DataArray[21])
            {
                /* Transition: '<S263>:8' */
                if (rtu_Input_value >= rtu_DataArray[23])
                {
                    /* Transition: '<S263>:42' */
                    if (rtu_Input_value >= rtu_DataArray[24])
                    {
                        /* Transition: '<S263>:45' */
                        localB->UpperIndex = 25.0F;
                        localB->LowerIndex = 24.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[25],
                            rtu_DataArray[24], rtu_Input_value);

                        /* Transition: '<S263>:47' */
                    }
                    else
                    {
                        /* Transition: '<S263>:46' */
                        localB->UpperIndex = 24.0F;
                        localB->LowerIndex = 23.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[24],
                            rtu_DataArray[23], rtu_Input_value);

                        /* Transition: '<S263>:48' */
                    }
                }
                else
                {
                    /* Transition: '<S263>:43' */
                    if (rtu_Input_value >= rtu_DataArray[22])
                    {
                        /* Transition: '<S263>:44' */
                        localB->UpperIndex = 23.0F;
                        localB->LowerIndex = 22.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[23],
                            rtu_DataArray[22], rtu_Input_value);

                        /* Transition: '<S263>:40' */
                    }
                    else
                    {
                        /* Transition: '<S263>:49' */
                        localB->UpperIndex = 22.0F;
                        localB->LowerIndex = 21.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[22],
                            rtu_DataArray[21], rtu_Input_value);

                        /* Transition: '<S263>:50' */
                    }

                    /* Transition: '<S263>:51' */
                    /* Transition: '<S263>:48' */
                }

                /* Transition: '<S263>:52' */
                /* Transition: '<S263>:67' */
            }
            else
            {
                /* Transition: '<S263>:54' */
                if (rtu_Input_value >= rtu_DataArray[19])
                {
                    /* Transition: '<S263>:55' */
                    if (rtu_Input_value >= rtu_DataArray[20])
                    {
                        /* Transition: '<S263>:58' */
                        localB->UpperIndex = 21.0F;
                        localB->LowerIndex = 20.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[21],
                            rtu_DataArray[20], rtu_Input_value);

                        /* Transition: '<S263>:57' */
                    }
                    else
                    {
                        /* Transition: '<S263>:59' */
                        localB->UpperIndex = 20.0F;
                        localB->LowerIndex = 19.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[20],
                            rtu_DataArray[19], rtu_Input_value);

                        /* Transition: '<S263>:60' */
                    }

                    /* Transition: '<S263>:65' */
                }
                else
                {
                    /* Transition: '<S263>:56' */
                    if (rtu_Input_value >= rtu_DataArray[18])
                    {
                        /* Transition: '<S263>:61' */
                        localB->UpperIndex = 19.0F;
                        localB->LowerIndex = 18.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[19],
                            rtu_DataArray[18], rtu_Input_value);

                        /* Transition: '<S263>:63' */
                    }
                    else
                    {
                        /* Transition: '<S263>:62' */
                        localB->UpperIndex = 18.0F;
                        localB->LowerIndex = 17.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[18],
                            rtu_DataArray[17], rtu_Input_value);

                        /* Transition: '<S263>:18' */
                    }

                    /* Transition: '<S263>:64' */
                }

                /* Transition: '<S263>:66' */
            }
        }

        /* Transition: '<S263>:68' */
        /* Transition: '<S263>:113' */
        /* Transition: '<S263>:19' */
    }
    else
    {
        /* Transition: '<S263>:4' */
        if (rtu_Input_value >= rtu_DataArray[9])
        {
            /* Transition: '<S263>:21' */
            if (rtu_Input_value >= rtu_DataArray[13])
            {
                /* Transition: '<S263>:70' */
                if (rtu_Input_value >= rtu_DataArray[15])
                {
                    /* Transition: '<S263>:75' */
                    if (rtu_Input_value >= rtu_DataArray[16])
                    {
                        /* Transition: '<S263>:77' */
                        localB->UpperIndex = 17.0F;
                        localB->LowerIndex = 16.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[17],
                            rtu_DataArray[16], rtu_Input_value);

                        /* Transition: '<S263>:78' */
                    }
                    else
                    {
                        /* Transition: '<S263>:76' */
                        localB->UpperIndex = 16.0F;
                        localB->LowerIndex = 15.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[16],
                            rtu_DataArray[15], rtu_Input_value);

                        /* Transition: '<S263>:79' */
                    }

                    /* Transition: '<S263>:85' */
                }
                else
                {
                    /* Transition: '<S263>:71' */
                    /* Transition: '<S263>:80' */
                    if (rtu_Input_value >= rtu_DataArray[14])
                    {
                        /* Transition: '<S263>:81' */
                        localB->UpperIndex = 15.0F;
                        localB->LowerIndex = 14.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[15],
                            rtu_DataArray[14], rtu_Input_value);

                        /* Transition: '<S263>:82' */
                    }
                    else
                    {
                        /* Transition: '<S263>:20' */
                        localB->UpperIndex = 14.0F;
                        localB->LowerIndex = 13.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[14],
                            rtu_DataArray[13], rtu_Input_value);

                        /* Transition: '<S263>:83' */
                    }

                    /* Transition: '<S263>:84' */
                }

                /* Transition: '<S263>:6' */
            }
            else
            {
                /* Transition: '<S263>:86' */
                if (rtu_Input_value >= rtu_DataArray[11])
                {
                    /* Transition: '<S263>:87' */
                    if (rtu_Input_value >= rtu_DataArray[12])
                    {
                        /* Transition: '<S263>:90' */
                        localB->UpperIndex = 13.0F;
                        localB->LowerIndex = 12.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[13],
                            rtu_DataArray[12], rtu_Input_value);

                        /* Transition: '<S263>:91' */
                        /* Transition: '<S263>:72' */
                    }
                    else
                    {
                        /* Transition: '<S263>:88' */
                        localB->UpperIndex = 12.0F;
                        localB->LowerIndex = 11.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[12],
                            rtu_DataArray[11], rtu_Input_value);

                        /* Transition: '<S263>:89' */
                        /* Transition: '<S263>:72' */
                    }
                }
                else
                {
                    /* Transition: '<S263>:92' */
                    if (rtu_Input_value >= rtu_DataArray[10])
                    {
                        /* Transition: '<S263>:93' */
                        localB->UpperIndex = 11.0F;
                        localB->LowerIndex = 10.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[11],
                            rtu_DataArray[10], rtu_Input_value);

                        /* Transition: '<S263>:89' */
                        /* Transition: '<S263>:72' */
                    }
                    else
                    {
                        /* Transition: '<S263>:94' */
                        localB->UpperIndex = 10.0F;
                        localB->LowerIndex = 9.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[10],
                            rtu_DataArray[9], rtu_Input_value);

                        /* Transition: '<S263>:95' */
                    }
                }

                /* Transition: '<S263>:74' */
            }

            /* Transition: '<S263>:69' */
        }
        else
        {
            /* Transition: '<S263>:73' */
            if (rtu_Input_value >= rtu_DataArray[5])
            {
                /* Transition: '<S263>:96' */
                if (rtu_Input_value >= rtu_DataArray[7])
                {
                    /* Transition: '<S263>:99' */
                    if (rtu_Input_value >= rtu_DataArray[8])
                    {
                        /* Transition: '<S263>:103' */
                        localB->UpperIndex = 9.0F;
                        localB->LowerIndex = 8.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[9],
                            rtu_DataArray[8], rtu_Input_value);

                        /* Transition: '<S263>:100' */
                    }
                    else
                    {
                        /* Transition: '<S263>:102' */
                        localB->UpperIndex = 8.0F;
                        localB->LowerIndex = 7.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[8],
                            rtu_DataArray[7], rtu_Input_value);

                        /* Transition: '<S263>:101' */
                    }

                    /* Transition: '<S263>:109' */
                    /* Transition: '<S263>:119' */
                    /* Transition: '<S263>:97' */
                }
                else
                {
                    /* Transition: '<S263>:104' */
                    if (rtu_Input_value >= rtu_DataArray[6])
                    {
                        /* Transition: '<S263>:105' */
                        localB->UpperIndex = 7.0F;
                        localB->LowerIndex = 6.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[7],
                            rtu_DataArray[6], rtu_Input_value);

                        /* Transition: '<S263>:107' */
                        /* Transition: '<S263>:97' */
                    }
                    else
                    {
                        /* Transition: '<S263>:106' */
                        localB->UpperIndex = 6.0F;
                        localB->LowerIndex = 5.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[6],
                            rtu_DataArray[5], rtu_Input_value);
                    }
                }

                /* Transition: '<S263>:120' */
                /* Transition: '<S263>:259' */
                /* Transition: '<S263>:261' */
            }
            else
            {
                /* Transition: '<S263>:110' */
                if (rtu_Input_value >= rtu_DataArray[3])
                {
                    /* Transition: '<S263>:111' */
                    if (rtu_Input_value >= rtu_DataArray[4])
                    {
                        /* Transition: '<S263>:115' */
                        localB->UpperIndex = 5.0F;
                        localB->LowerIndex = 4.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[5],
                            rtu_DataArray[4], rtu_Input_value);

                        /* Transition: '<S263>:41' */
                    }
                    else
                    {
                        /* Transition: '<S263>:114' */
                        localB->UpperIndex = 4.0F;
                        localB->LowerIndex = 3.0F;
                        localB->fra = ADCR_ac_frac(rtu_DataArray[4],
                            rtu_DataArray[3], rtu_Input_value);
                    }

                    /* Transition: '<S263>:270' */
                    /* Transition: '<S263>:269' */
                }
                else
                {
                    /* Transition: '<S263>:112' */
                    if (rtu_Input_value >= rtu_DataArray[1])
                    {
                        /* Transition: '<S263>:116' */
                        if (rtu_Input_value >= rtu_DataArray[2])
                        {
                            /* Transition: '<S263>:38' */
                            localB->UpperIndex = 3.0F;
                            localB->LowerIndex = 2.0F;
                            localB->fra = ADCR_ac_frac(rtu_DataArray[3],
                                rtu_DataArray[2], rtu_Input_value);

                            /* Transition: '<S263>:270' */
                            /* Transition: '<S263>:269' */
                        }
                        else
                        {
                            /* Transition: '<S263>:265' */
                            localB->UpperIndex = 2.0F;
                            localB->LowerIndex = 1.0F;
                            localB->fra = ADCR_ac_frac(rtu_DataArray[2],
                                rtu_DataArray[1], rtu_Input_value);

                            /* Transition: '<S263>:268' */
                            /* Transition: '<S263>:269' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S263>:108' */
                        if (rtu_Input_value >= rtu_DataArray[0])
                        {
                            /* Transition: '<S263>:118' */
                            localB->UpperIndex = 1.0F;
                            localB->LowerIndex = 0.0F;
                            localB->fra = ADCR_ac_frac(rtu_DataArray[1],
                                rtu_DataArray[0], rtu_Input_value);

                            /* Transition: '<S263>:262' */
                            /* Transition: '<S263>:261' */
                        }
                        else
                        {
                            /* Transition: '<S263>:255' */
                            localB->UpperIndex = 1.0F;
                            localB->LowerIndex = 0.0F;
                            localB->fra = ADCR_ac_frac(rtu_DataArray[1],
                                rtu_DataArray[0], rtu_DataArray[0]);

                            /* Transition: '<S263>:259' */
                            /* Transition: '<S263>:261' */
                        }
                    }
                }
            }

            /* Transition: '<S263>:98' */
            /* Transition: '<S263>:19' */
        }
    }

    /* End of Chart: '<S256>/X_Data_and_Fractions' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S238>/OPTL_Dynamic1D_A1_Pts'
 *    '<S238>/OPTL_Dynamic1D_A2_Pts'
 *    '<S238>/OPTL_Dynamic1D_Ca_Pts'
 *    '<S239>/OPTL_Dynamic1D_B1_Pts'
 *    '<S239>/OPTL_Dynamic1D_B2_Pts'
 *    '<S239>/OPTL_Dynamic1D_Cb_Pts'
 *    '<S240>/OPTL_Dynamic1D_C1_Pts'
 *    '<S240>/OPTL_Dynamic1D_C2_Pts'
 *    '<S240>/OPTL_Dynamic1D_Cc_Pts'
 * Common block description:
 *   x.x
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_OPTL_Dynamic1D_A1_Pts(VAR(float32,
    AUTOMATIC) rtu_Upper_Index, VAR(float32, AUTOMATIC) rtu_Lower_Index, CONST
    (float32, AUTOMATIC) rtu_X_ArrayData[34], P2VAR
    (B_OPTL_Dynamic1D_A1_Pts_ADCR_ac_T, AUTOMATIC, ADCR_VAR_INIT) localB)
{
    /* Selector: '<S257>/Selector3' */
    localB->Selector3 = rtu_X_ArrayData[(sint32)rtu_Upper_Index];

    /* Selector: '<S257>/Selector4' */
    localB->Selector4 = rtu_X_ArrayData[(sint32)rtu_Lower_Index];
}

#endif

/*
 * Output and update for action system:
 *    '<S561>/ModeXToLocked'
 *    '<S647>/ModeXToLocked'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeXToLocked(void)
{
    /* DataStoreWrite: '<S598>/Data Store Write1' incorporates:
     *  Constant: '<S603>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDClosing_Group;

    /* DataStoreWrite: '<S598>/Data Store Write2' incorporates:
     *  Constant: '<S602>/Constant'
     */
    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDModeXToLocked;
}

#endif

/*
 * Output and update for action system:
 *    '<S561>/ModeX'
 *    '<S646>/ModeX'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeX(void)
{
    /* DataStoreWrite: '<S597>/Data Store Write1' incorporates:
     *  Constant: '<S601>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

    /* DataStoreWrite: '<S597>/Data Store Write2' incorporates:
     *  Constant: '<S600>/Constant'
     */
    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDModeX;
}

#endif

/*
 * Output and update for action system:
 *    '<S561>/OpemAll'
 *    '<S558>/OpemAll'
 *    '<S562>/OpemAll'
 *    '<S559>/OpemAll'
 *    '<S560>/OpemAll'
 *    '<S647>/OpemAll'
 *    '<S648>/OpemAll'
 *    '<S646>/OpemAll'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_OpemAll(void)
{
    /* DataStoreWrite: '<S599>/Data Store Write1' incorporates:
     *  Constant: '<S605>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDOpening_Group;

    /* DataStoreWrite: '<S599>/Data Store Write2' incorporates:
     *  Constant: '<S604>/Constant'
     */
    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpen_All;
}

#endif

/*
 * Output and update for action system:
 *    '<S558>/Locked'
 *    '<S559>/Locked'
 *    '<S560>/Locked'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_Locked_l(void)
{
    /* DataStoreWrite: '<S567>/Data Store Write1' incorporates:
     *  Constant: '<S570>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

    /* DataStoreWrite: '<S567>/Data Store Write2' incorporates:
     *  Constant: '<S569>/Constant'
     */
    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDLocked;
}

#endif

/*
 * Output and update for action system:
 *    '<S562>/ModeYToLocked'
 *    '<S648>/ModeYToLocked'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeYToLocked(void)
{
    /* DataStoreWrite: '<S611>/Data Store Write1' incorporates:
     *  Constant: '<S616>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDClosing_Group;

    /* DataStoreWrite: '<S611>/Data Store Write2' incorporates:
     *  Constant: '<S615>/Constant'
     */
    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDModeYToLocked;
}

#endif

/*
 * Output and update for action system:
 *    '<S562>/ModeY'
 *    '<S646>/ModeY'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ModeY(void)
{
    /* DataStoreWrite: '<S610>/Data Store Write1' incorporates:
     *  Constant: '<S614>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

    /* DataStoreWrite: '<S610>/Data Store Write2' incorporates:
     *  Constant: '<S613>/Constant'
     */
    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDModeY;
}

#endif

/*
 * Output and update for action system:
 *    '<S714>/TgtClchXSelect'
 *    '<S714>/TgtClchYSelect'
 *    '<S714>/TgtAvgSelect'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_TgtClchXSelect(VAR(float32, AUTOMATIC)
    rtu_NxTgt_In, VAR(float32, AUTOMATIC) rtu_NxTgtDot_In, P2VAR(float32,
    AUTOMATIC, ADCR_VAR_INIT) rty_NxTgt, P2VAR(float32, AUTOMATIC, ADCR_VAR_INIT)
    rty_NxTargetDot)
{
    /* Inport: '<S727>/NxTgt_In' */
    *rty_NxTgt = rtu_NxTgt_In;

    /* Inport: '<S727>/NxTgtDot_In' */
    *rty_NxTargetDot = rtu_NxTgtDot_In;
}

#endif

/*
 * Output and update for action system:
 *    '<S812>/ForceClosed'
 *    '<S821>/ForceClosed'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ForceClosed(P2VAR(TeADCR_e_AWDReq,
    AUTOMATIC, ADCR_VAR_INIT) rty_VeADCC_e_WEDCmndArb)
{
    /* SignalConversion generated from: '<S816>/VeADCC_e_WEDCmndArb' incorporates:
     *  Constant: '<S819>/Constant'
     */
    *rty_VeADCC_e_WEDCmndArb = CeADCR_e_ForceClosed;
}

#endif

/*
 * Output and update for action system:
 *    '<S812>/ForceOpen'
 *    '<S821>/ForceOpen'
 */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static FUNC(void, ADCR_CODE_LOCAL) ADCR_ac_ForceOpen(P2VAR(TeADCR_e_AWDReq,
    AUTOMATIC, ADCR_VAR_INIT) rty_VeADCC_e_WEDCmndArb)
{
    /* SignalConversion generated from: '<S817>/VeADCC_e_WEDCmndArb' incorporates:
     *  Constant: '<S820>/Constant'
     */
    *rty_VeADCC_e_WEDCmndArb = CeADCR_e_ForceOpen;
}

#endif

/* Function for Chart: '<S144>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_enter_internal_ActuateOpen(const boolean *RelationalOperator)
{
    boolean tmpRead;

    /* Constant: '<S156>/Calib' */
    /* Entry Internal 'ActuateOpen': '<S149>:722' */
    /* Transition: '<S149>:812' */
    if (KeADCR_b_RstWgglAtOpen)
    {
        /* Transition: '<S149>:970' */
        /* Transition: '<S149>:969' */
        /*  Reset Wiggle Enable */
        VeADCC_b_LeftEnblWggl = false;
    }
    else
    {
        /* Transition: '<S149>:967' */
    }

    /* End of Constant: '<S156>/Calib' */
    ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_ActuateToOpen;
    ADCR_ac_DW.tp_ActuateToOpen_l = 1U;

    /* Entry 'ActuateToOpen': '<S149>:814' */
    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;

    /*  Reset state timer and update state */
    VeADCC_t_WEDLeftOpngMgrStTmr = 0.0F;
    ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;
    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateOpen;

    /* Inport: '<Root>/VeADAR_b_CoolDownActiveLftWED' */
    /* Entry Internal 'ActuateToOpen': '<S149>:814' */
    /* Transition: '<S149>:940' */
    (void)Rte_Read_VeADAR_b_CoolDownActiveLftWED_Value(&tmpRead);
    if (tmpRead || (*RelationalOperator))
    {
        /* Transition: '<S149>:943' */
        /* Transition: '<S149>:982' */
        ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_TimerInactive;
    }
    else
    {
        /* Transition: '<S149>:937' */
        ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_TimerActive;
    }
}

#endif

/* Function for Chart: '<S144>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateClosed(const boolean *LogicalOperator, const boolean *
    RelationalOperator, const TeADCR_e_WEDStatus *Selector_j)
{
    boolean guard1 = false;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;

    /* Selector: '<S9>/Selector' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S157>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read1'
     *  Inport: '<Root>/VeADAR_b_CoolDownActiveLftWED'
     *  Inport: '<Root>/VeADIR_b_LftWEDClosingFail'
     *  Inport: '<Root>/VeADIR_b_LftWEDOpeningFail'
     */
    /* During 'ActuateClosed': '<S149>:721' */
    /*  Check if WED has closed */
    if (((uint32)(*Selector_j)) == CeADCR_e_Closed)
    {
        /* Transition: '<S149>:717' */
        /* Transition: '<S149>:738' */
        /* Exit Internal 'ActuateClosed': '<S149>:721' */
        /* Exit Internal 'ActuateToClosed': '<S149>:710' */
        ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt = ADCR_ac_IN_Closed;

        /* Entry Internal 'Closed': '<S149>:720' */
        /* Transition: '<S149>:905' */
        ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_SS_Closed;

        /* Entry 'SS_Closed': '<S149>:904' */
        VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSClosed;

        /*  Reset retry counter when in steady state closed */
        ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
        ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;
        VeADCC_b_LeftEnblWggl = false;
    }
    else
    {
        /*  Both closing and opening are failed */
        (void)Rte_Read_VeADIR_b_LftWEDClosingFail_Value(&tmpRead);
        (void)Rte_Read_VeADIR_b_LftWEDOpeningFail_Value(&tmpRead_0);
        if (tmpRead && tmpRead_0)
        {
            /* Transition: '<S149>:829' */
            /* Exit Internal 'ActuateClosed': '<S149>:721' */
            /* Exit Internal 'ActuateToClosed': '<S149>:710' */
            ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                ADCR_ac_IN_StuckInMiddle;
            ADCR_ac_DW.tp_StuckInMiddle_l = 1U;

            /* Entry 'StuckInMiddle': '<S149>:816' */
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_StuckInMiddle;

            /*  Reset retry counter when in stuck middle */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_LeftEnblWggl = false;
        }
        else
        {
            /* Transition: '<S149>:831' */
            /*  WED Ready to Open */
            if (((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Open)
            {
                /* Transition: '<S149>:718' */
                /*  Check if WED has opened */
                if (((uint32)(*Selector_j)) == CeADCR_e_Open)
                {
                    /* Transition: '<S149>:742' */
                    /* Exit Internal 'ActuateClosed': '<S149>:721' */
                    /* Exit Internal 'ActuateToClosed': '<S149>:710' */
                    ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_Open;

                    /* Entry 'Open': '<S149>:724' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSOpen;

                    /*  Reset retry counter when in steady state open */
                    ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
                    ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_LeftEnblWggl = false;
                }
                else
                {
                    /* Transition: '<S149>:743' */
                    /* Exit Internal 'ActuateClosed': '<S149>:721' */
                    /* Exit Internal 'ActuateToClosed': '<S149>:710' */
                    ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen(RelationalOperator);
                }
            }
            else
            {
                (void)Rte_Read_VeADAR_b_CoolDownActiveLftWED_Value(&tmpRead_1);
                if (((uint32)ADCR_ac_DW.is_ActuateClosed_k) ==
                        ADCR_ac_IN_ActuateToClosed)
                {
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                    /* During 'ActuateToClosed': '<S149>:710' */
                    /*  Check if closing is attempted for a CAL'd time */
                    if (VeADCC_t_WEDLeftClsngMgrStTmr >= KeADCR_t_WEDClsngTmLmt)
                    {
                        /* Transition: '<S149>:1040' */
                        /* Transition: '<S149>:1045' */
                        /* Transition: '<S149>:1042' */
                        /*  update closing try counter */
                        ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = (uint8)((sint32)
                            (((sint32)ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g) + 1));

                        /* Transition: '<S149>:1046' */
                        /* Exit Internal 'ActuateToClosed': '<S149>:710' */
                        ADCR_ac_DW.is_ActuateToClosed_h =
                            ADCR_ac_IN_NO_ACTIVE_CHILD;
                        ADCR_ac_DW.is_ActuateClosed_k =
                            ADCR_ac_IN_ActuateToOpenForRetry;

                        /* Entry 'ActuateToOpenForRetry': '<S149>:715' */
                        VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;

                        /*  Update state */
                        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateOpenForRetry;

                        /*  Reset state timer */
                        VeADCC_t_WEDLeftOpngMgrStTmr = 0.0F;
                    }
                    else if (((uint32)ADCR_ac_DW.is_ActuateToClosed_h) ==
                             ADCR_ac_IN_TimerActive)
                    {
                        /* During 'TimerActive': '<S149>:958' */
                        if (tmpRead_1 || (*RelationalOperator))
                        {
                            /* Transition: '<S149>:956' */
                            ADCR_ac_DW.is_ActuateToClosed_h =
                                ADCR_ac_IN_TimerInactive;
                        }
                        else
                        {
                            /*  Update state timer */
                            VeADCC_t_WEDLeftClsngMgrStTmr =
                                VeADCC_t_WEDLeftClsngMgrStTmr +
                                HeADCR_t_MedTEB_dT;
                        }
                    }
                    else
                    {
                        /* During 'TimerInactive': '<S149>:961' */
                        if ((!tmpRead_1) && (!(*RelationalOperator)))
                        {
                            /* Transition: '<S149>:963' */
                            ADCR_ac_DW.is_ActuateToClosed_h =
                                ADCR_ac_IN_TimerActive;
                        }
                    }
                }
                else
                {
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateOpenForRetry;

                    /* During 'ActuateToOpenForRetry': '<S149>:715' */
                    /*  Check if WED has opened */
                    guard1 = false;
                    if (((uint32)(*Selector_j)) == CeADCR_e_Open)
                    {
                        /* Transition: '<S149>:746' */
                        guard1 = true;
                    }
                    else
                    {
                        /* if the WED position changes, reset the timer */
                        if (*LogicalOperator)
                        {
                            /* Transition: '<S149>:895' */
                            ADCR_ac_DW.is_ActuateClosed_k =
                                ADCR_ac_IN_ActuateToOpenForRetry;

                            /* Entry 'ActuateToOpenForRetry': '<S149>:715' */
                            VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;

                            /*  Update state */
                            VeADCC_e_WEDLeftCmndMgrSt =
                                CeADCR_e_ActuateOpenForRetry;

                            /*  Reset state timer */
                            VeADCC_t_WEDLeftOpngMgrStTmr = 0.0F;
                        }
                        else
                        {
                            /*  Check if WED has timed out for open retry */
                            if (VeADCC_t_WEDLeftOpngMgrStTmr >=
                                    KeADCR_t_WEDOpngTmLmt)
                            {
                                /* Transition: '<S149>:765' */
                                /* Transition: '<S149>:766' */
                                /*  update opening retry counter */
                                ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = (uint8)
                                    ((sint32)(((sint32)
                                               ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d)
                                              + 1));

                                /* Transition: '<S149>:767' */
                                guard1 = true;
                            }
                            else
                            {
                                /*  Update state timer */
                                VeADCC_t_WEDLeftOpngMgrStTmr =
                                    VeADCC_t_WEDLeftOpngMgrStTmr +
                                    HeADCR_t_MedTEB_dT;
                            }
                        }
                    }

                    if (guard1)
                    {
                        /* Transition: '<S149>:762' */
                        ADCR_ac_DW.is_ActuateClosed_k =
                            ADCR_ac_IN_ActuateToClosed;

                        /* Entry 'ActuateToClosed': '<S149>:710' */
                        VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                        /*  Reset state timer and update state */
                        VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                        /*  Reset Wiggle Enble */
                        VeADCC_b_LeftEnblWggl = false;

                        /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                        /* Transition: '<S149>:957' */
                        if (tmpRead_1 || (*RelationalOperator))
                        {
                            /* Transition: '<S149>:960' */
                            /* Transition: '<S149>:992' */
                            ADCR_ac_DW.is_ActuateToClosed_h =
                                ADCR_ac_IN_TimerInactive;
                        }
                        else
                        {
                            /* Transition: '<S149>:962' */
                            ADCR_ac_DW.is_ActuateToClosed_h =
                                ADCR_ac_IN_TimerActive;
                        }
                    }
                }
            }
        }
    }

    /* End of Selector: '<S9>/Selector' */
}

#endif

/* Function for Chart: '<S144>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateOpen(const boolean *LogicalOperator, const boolean
    *RelationalOperator, const TeADCR_e_WEDStatus *Selector_j)
{
    boolean guard1 = false;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;

    /* Selector: '<S9>/Selector' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S154>/Calib'
     *  Constant: '<S158>/Calib'
     *  Constant: '<S159>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read1'
     *  Inport: '<Root>/VeADAR_b_CoolDownActiveLftWED'
     *  Inport: '<Root>/VeADIR_b_LftWEDClosingFail'
     *  Inport: '<Root>/VeADIR_b_LftWEDOpeningFail'
     */
    /* During 'ActuateOpen': '<S149>:722' */
    /*  Check if WED has opened */
    if (((uint32)(*Selector_j)) == CeADCR_e_Open)
    {
        /* Transition: '<S149>:719' */
        /* Transition: '<S149>:736' */
        /* Exit Internal 'ActuateOpen': '<S149>:722' */
        ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 0U;

        /* Exit Internal 'ActuateToOpen': '<S149>:814' */
        ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.tp_ActuateToOpen_l = 0U;

        /* Exit Internal 'PositionStuckWhlOpng': '<S149>:908' */
        ADCR_ac_DW.is_PositionStuckWhlOpng_e = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt = ADCR_ac_IN_Open;

        /* Entry 'Open': '<S149>:724' */
        VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSOpen;

        /*  Reset retry counter when in steady state open */
        ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
        ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

        /*  Reset Wiggle Enble */
        VeADCC_b_LeftEnblWggl = false;
    }
    else
    {
        /*  Both closing and opening are failed */
        (void)Rte_Read_VeADIR_b_LftWEDClosingFail_Value(&tmpRead);
        (void)Rte_Read_VeADIR_b_LftWEDOpeningFail_Value(&tmpRead_0);
        if (tmpRead && tmpRead_0)
        {
            /* Transition: '<S149>:828' */
            /* Exit Internal 'ActuateOpen': '<S149>:722' */
            ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 0U;

            /* Exit Internal 'ActuateToOpen': '<S149>:814' */
            ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.tp_ActuateToOpen_l = 0U;

            /* Exit Internal 'PositionStuckWhlOpng': '<S149>:908' */
            ADCR_ac_DW.is_PositionStuckWhlOpng_e = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                ADCR_ac_IN_StuckInMiddle;
            ADCR_ac_DW.tp_StuckInMiddle_l = 1U;

            /* Entry 'StuckInMiddle': '<S149>:816' */
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_StuckInMiddle;

            /*  Reset retry counter when in stuck middle */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_LeftEnblWggl = false;
        }
        else
        {
            /* Transition: '<S149>:830' */
            /*  WED Ready to close */
            (void)Rte_Read_VeADAR_b_CoolDownActiveLftWED_Value(&tmpRead_1);
            if (((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Closed)
            {
                /* Transition: '<S149>:723' */
                /*  Check if WED has Cloased */
                if (((uint32)(*Selector_j)) == CeADCR_e_Closed)
                {
                    /* Transition: '<S149>:821' */
                    /* Exit Internal 'ActuateOpen': '<S149>:722' */
                    ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 0U;

                    /* Exit Internal 'ActuateToOpen': '<S149>:814' */
                    ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.tp_ActuateToOpen_l = 0U;

                    /* Exit Internal 'PositionStuckWhlOpng': '<S149>:908' */
                    ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                        ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_Closed;

                    /* Entry Internal 'Closed': '<S149>:720' */
                    /* Transition: '<S149>:905' */
                    ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_SS_Closed;

                    /* Entry 'SS_Closed': '<S149>:904' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSClosed;

                    /*  Reset retry counter when in steady state closed */
                    ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
                    ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;
                    VeADCC_b_LeftEnblWggl = false;
                }
                else
                {
                    /* Transition: '<S149>:822' */
                    /* Exit Internal 'ActuateOpen': '<S149>:722' */
                    ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 0U;

                    /* Exit Internal 'ActuateToOpen': '<S149>:814' */
                    ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.tp_ActuateToOpen_l = 0U;

                    /* Exit Internal 'PositionStuckWhlOpng': '<S149>:908' */
                    ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                        ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateClosed;

                    /* Entry Internal 'ActuateClosed': '<S149>:721' */
                    /* Transition: '<S149>:711' */
                    ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_ActuateToClosed;

                    /* Entry 'ActuateToClosed': '<S149>:710' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_LeftEnblWggl = false;

                    /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                    /* Transition: '<S149>:957' */
                    if (tmpRead_1 || (*RelationalOperator))
                    {
                        /* Transition: '<S149>:960' */
                        /* Transition: '<S149>:992' */
                        ADCR_ac_DW.is_ActuateToClosed_h =
                            ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S149>:962' */
                        ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerActive;
                    }
                }
            }
            else
            {
                guard1 = false;
                switch (ADCR_ac_DW.is_ActuateOpen_d)
                {
                  case ADCR_ac_IN_ActuateToClosedForRetry:
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosedForRetry;

                    /* During 'ActuateToClosedForRetry': '<S149>:810' */
                    /*  Check if WED has closed */
                    if (((uint32)(*Selector_j)) == CeADCR_e_Closed)
                    {
                        /* Transition: '<S149>:813' */
                        guard1 = true;
                    }
                    else
                    {
                        /*  Check if WED has timed out for closed retry */
                        if (VeADCC_t_WEDLeftClsngMgrStTmr >=
                                KeADCR_t_WEDClsngTmLmt)
                        {
                            /* Transition: '<S149>:802' */
                            /* Transition: '<S149>:805' */
                            /*  update closing retry counter */
                            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = (uint8)
                                ((sint32)(((sint32)
                                           ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g)
                                          + 1));

                            /* Transition: '<S149>:804' */
                            guard1 = true;
                        }
                        else
                        {
                            /* if the WED position changes, reset the timer */
                            if (*LogicalOperator)
                            {
                                /* Transition: '<S149>:890' */
                                ADCR_ac_DW.is_ActuateOpen_d =
                                    ADCR_ac_IN_ActuateToClosedForRetry;
                                ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 1U;

                                /* Entry 'ActuateToClosedForRetry': '<S149>:810' */
                                VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                                /*  Reset state timer and update state */
                                VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                                VeADCC_e_WEDLeftCmndMgrSt =
                                    CeADCR_e_ActuateClosedForRetry;

                                /*  Reset Wiggle Enable */
                                VeADCC_b_LeftEnblWggl = false;
                            }
                            else
                            {
                                /*  Update state timer */
                                VeADCC_t_WEDLeftClsngMgrStTmr =
                                    VeADCC_t_WEDLeftClsngMgrStTmr +
                                    HeADCR_t_MedTEB_dT;
                            }
                        }
                    }
                    break;

                  case ADCR_ac_IN_ActuateToOpen:
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateOpen;

                    /* During 'ActuateToOpen': '<S149>:814' */
                    if ((!(*LogicalOperator)) && (KeADCR_b_EnblWgglWhnStck))
                    {
                        /* Transition: '<S149>:909' */
                        /* Exit Internal 'ActuateToOpen': '<S149>:814' */
                        ADCR_ac_DW.is_ActuateToOpen_k =
                            ADCR_ac_IN_NO_ACTIVE_CHILD;
                        ADCR_ac_DW.tp_ActuateToOpen_l = 0U;
                        ADCR_ac_DW.is_ActuateOpen_d =
                            ADCR_ac_IN_PositionStuckWhlOpng;

                        /* Entry 'PositionStuckWhlOpng': '<S149>:908' */
                        ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;
                        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_WgglActuateOpen;

                        /* Entry Internal 'PositionStuckWhlOpng': '<S149>:908' */
                        /* Transition: '<S149>:927' */
                        /* Transition: '<S149>:978' */
                        if (tmpRead_1)
                        {
                            /* Transition: '<S149>:972' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                ADCR_ac_IN_CooldownActive;

                            /* Entry 'CooldownActive': '<S149>:971' */
                            VeADCC_b_LeftEnblWggl = false;
                        }
                        else if (*RelationalOperator)
                        {
                            /* Transition: '<S149>:936' */
                            /* Transition: '<S149>:976' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                ADCR_ac_IN_LearningActive;

                            /* Entry 'LearningActive': '<S149>:926' */
                            VeADCC_b_LeftEnblWggl = true;
                        }
                        else
                        {
                            /* Transition: '<S149>:935' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                ADCR_ac_IN_TimerActive_e;

                            /* Entry 'TimerActive': '<S149>:928' */
                            VeADCC_b_LeftEnblWggl = true;
                        }
                    }
                    else
                    {
                        /*  Check if opening is attempted for a CAL'd time */
                        if (VeADCC_t_WEDLeftOpngMgrStTmr >=
                                KeADCR_t_WEDOpngTmLmt)
                        {
                            /* Transition: '<S149>:803' */
                            /* Transition: '<S149>:1048' */
                            /* Transition: '<S149>:801' */
                            /*  update open try counter */
                            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = (uint8)
                                ((sint32)(((sint32)
                                           ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d)
                                          + 1));

                            /* Transition: '<S149>:1050' */
                            /* Exit Internal 'ActuateToOpen': '<S149>:814' */
                            ADCR_ac_DW.is_ActuateToOpen_k =
                                ADCR_ac_IN_NO_ACTIVE_CHILD;
                            ADCR_ac_DW.tp_ActuateToOpen_l = 0U;
                            ADCR_ac_DW.is_ActuateOpen_d =
                                ADCR_ac_IN_ActuateToClosedForRetry;
                            ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 1U;

                            /* Entry 'ActuateToClosedForRetry': '<S149>:810' */
                            VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                            /*  Reset state timer and update state */
                            VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                            VeADCC_e_WEDLeftCmndMgrSt =
                                CeADCR_e_ActuateClosedForRetry;

                            /*  Reset Wiggle Enable */
                            VeADCC_b_LeftEnblWggl = false;
                        }
                        else if (((uint32)ADCR_ac_DW.is_ActuateToOpen_k) ==
                                 ADCR_ac_IN_TimerActive)
                        {
                            /* During 'TimerActive': '<S149>:941' */
                            if (tmpRead_1 || (*RelationalOperator))
                            {
                                /* Transition: '<S149>:939' */
                                ADCR_ac_DW.is_ActuateToOpen_k =
                                    ADCR_ac_IN_TimerInactive;
                            }
                            else
                            {
                                /*  Update state timer */
                                VeADCC_t_WEDLeftOpngMgrStTmr =
                                    VeADCC_t_WEDLeftOpngMgrStTmr +
                                    HeADCR_t_MedTEB_dT;
                            }
                        }
                        else
                        {
                            /* During 'TimerInactive': '<S149>:942' */
                            if ((!tmpRead_1) && (!(*RelationalOperator)))
                            {
                                /* Transition: '<S149>:938' */
                                ADCR_ac_DW.is_ActuateToOpen_k =
                                    ADCR_ac_IN_TimerActive;
                            }
                        }
                    }
                    break;

                  default:
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_WgglActuateOpen;

                    /* During 'PositionStuckWhlOpng': '<S149>:908' */
                    if ((*LogicalOperator) || (!KeADCR_b_EnblWgglWhnStck))
                    {
                        /* Transition: '<S149>:910' */
                        /*  Reset Wiggle Enable */
                        VeADCC_b_LeftEnblWggl = false;

                        /* Exit Internal 'PositionStuckWhlOpng': '<S149>:908' */
                        ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                            ADCR_ac_IN_NO_ACTIVE_CHILD;
                        ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_ActuateToOpen;
                        ADCR_ac_DW.tp_ActuateToOpen_l = 1U;

                        /* Entry 'ActuateToOpen': '<S149>:814' */
                        VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;

                        /*  Reset state timer and update state */
                        VeADCC_t_WEDLeftOpngMgrStTmr = 0.0F;
                        ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;
                        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateOpen;

                        /* Entry Internal 'ActuateToOpen': '<S149>:814' */
                        /* Transition: '<S149>:940' */
                        if (tmpRead_1 || (*RelationalOperator))
                        {
                            /* Transition: '<S149>:943' */
                            /* Transition: '<S149>:982' */
                            ADCR_ac_DW.is_ActuateToOpen_k =
                                ADCR_ac_IN_TimerInactive;
                        }
                        else
                        {
                            /* Transition: '<S149>:937' */
                            ADCR_ac_DW.is_ActuateToOpen_k =
                                ADCR_ac_IN_TimerActive;
                        }
                    }
                    else
                    {
                        /*  Check if opening is attempted for a CAL'd time or wiggle timer is expired */
                        if ((ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k >=
                                KeADCR_t_WEDOpngWgglTmLmt) ||
                                (VeADCC_t_WEDLeftOpngMgrStTmr >=
                                 KeADCR_t_WEDOpngTmLmt))
                        {
                            /* Transition: '<S149>:912' */
                            /* Transition: '<S149>:801' */
                            /*  update open try counter */
                            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = (uint8)
                                ((sint32)(((sint32)
                                           ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d)
                                          + 1));

                            /* Transition: '<S149>:1050' */
                            /* Exit Internal 'PositionStuckWhlOpng': '<S149>:908' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                ADCR_ac_IN_NO_ACTIVE_CHILD;
                            ADCR_ac_DW.is_ActuateOpen_d =
                                ADCR_ac_IN_ActuateToClosedForRetry;
                            ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 1U;

                            /* Entry 'ActuateToClosedForRetry': '<S149>:810' */
                            VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                            /*  Reset state timer and update state */
                            VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                            VeADCC_e_WEDLeftCmndMgrSt =
                                CeADCR_e_ActuateClosedForRetry;

                            /*  Reset Wiggle Enable */
                            VeADCC_b_LeftEnblWggl = false;
                        }
                        else
                        {
                            switch (ADCR_ac_DW.is_PositionStuckWhlOpng_e)
                            {
                              case ADCR_ac_IN_CooldownActive:
                                /* During 'CooldownActive': '<S149>:971' */
                                if ((*RelationalOperator) && (!tmpRead_1))
                                {
                                    /* Transition: '<S149>:974' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                        ADCR_ac_IN_LearningActive;

                                    /* Entry 'LearningActive': '<S149>:926' */
                                    VeADCC_b_LeftEnblWggl = true;
                                }
                                else
                                {
                                    if (!tmpRead_1)
                                    {
                                        /* Transition: '<S149>:980' */
                                        ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                            ADCR_ac_IN_TimerActive_e;

                                        /* Entry 'TimerActive': '<S149>:928' */
                                        VeADCC_b_LeftEnblWggl = true;
                                    }
                                }
                                break;

                              case ADCR_ac_IN_LearningActive:
                                /* During 'LearningActive': '<S149>:926' */
                                if (tmpRead_1)
                                {
                                    /* Transition: '<S149>:973' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                        ADCR_ac_IN_CooldownActive;

                                    /* Entry 'CooldownActive': '<S149>:971' */
                                    VeADCC_b_LeftEnblWggl = false;
                                }
                                else
                                {
                                    if (!(*RelationalOperator))
                                    {
                                        /* Transition: '<S149>:929' */
                                        ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                            ADCR_ac_IN_TimerActive_e;

                                        /* Entry 'TimerActive': '<S149>:928' */
                                        VeADCC_b_LeftEnblWggl = true;
                                    }
                                }
                                break;

                              default:
                                /* During 'TimerActive': '<S149>:928' */
                                /* Transition: '<S149>:979' */
                                if (tmpRead_1)
                                {
                                    /* Transition: '<S149>:972' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                        ADCR_ac_IN_CooldownActive;

                                    /* Entry 'CooldownActive': '<S149>:971' */
                                    VeADCC_b_LeftEnblWggl = false;
                                }
                                else if (*RelationalOperator)
                                {
                                    /* Transition: '<S149>:930' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng_e =
                                        ADCR_ac_IN_LearningActive;

                                    /* Entry 'LearningActive': '<S149>:926' */
                                    VeADCC_b_LeftEnblWggl = true;
                                }
                                else
                                {
                                    /*  Update state timer */
                                    VeADCC_t_WEDLeftOpngMgrStTmr =
                                        VeADCC_t_WEDLeftOpngMgrStTmr +
                                        HeADCR_t_MedTEB_dT;
                                    ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k +=
                                        HeADCR_t_MedTEB_dT;
                                }
                                break;
                            }
                        }
                    }
                    break;
                }

                if (guard1)
                {
                    /* Transition: '<S149>:809' */
                    ADCR_ac_DW.tp_ActuateToClosedForRetry_o = 0U;
                    ADCR_ac_DW.is_ActuateOpen_d = ADCR_ac_IN_ActuateToOpen;
                    ADCR_ac_DW.tp_ActuateToOpen_l = 1U;

                    /* Entry 'ActuateToOpen': '<S149>:814' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDLeftOpngMgrStTmr = 0.0F;
                    ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateOpen;

                    /* Entry Internal 'ActuateToOpen': '<S149>:814' */
                    /* Transition: '<S149>:940' */
                    if (tmpRead_1 || (*RelationalOperator))
                    {
                        /* Transition: '<S149>:943' */
                        /* Transition: '<S149>:982' */
                        ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S149>:937' */
                        ADCR_ac_DW.is_ActuateToOpen_k = ADCR_ac_IN_TimerActive;
                    }
                }
            }
        }
    }

    /* End of Selector: '<S9>/Selector' */
}

#endif

/* Function for Chart: '<S145>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_enter_internal_ActuateOpen_h(const boolean
    *RelationalOperator)
{
    boolean tmpRead;

    /* Constant: '<S172>/Calib' */
    /* Entry Internal 'ActuateOpen': '<S165>:722' */
    /* Transition: '<S165>:812' */
    if (KeADCR_b_RstWgglAtOpen)
    {
        /* Transition: '<S165>:970' */
        /* Transition: '<S165>:969' */
        /*  Reset Wiggle Enable */
        VeADCC_b_RtEnblWggl = false;
    }
    else
    {
        /* Transition: '<S165>:967' */
    }

    /* End of Constant: '<S172>/Calib' */
    ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_ActuateToOpen;
    ADCR_ac_DW.tp_ActuateToOpen = 1U;

    /* Entry 'ActuateToOpen': '<S165>:814' */
    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;

    /*  Reset state timer and update state */
    VeADCC_t_WEDRightOpngMgrStTmr = 0.0F;
    ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;
    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateOpen;

    /* Inport: '<Root>/VeADAR_b_CoolDownActiveRtWED' */
    /* Entry Internal 'ActuateToOpen': '<S165>:814' */
    /* Transition: '<S165>:940' */
    (void)Rte_Read_VeADAR_b_CoolDownActiveRtWED_Value(&tmpRead);
    if (tmpRead || (*RelationalOperator))
    {
        /* Transition: '<S165>:943' */
        /* Transition: '<S165>:982' */
        ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_TimerInactive;
    }
    else
    {
        /* Transition: '<S165>:937' */
        ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_TimerActive;
    }
}

#endif

/* Function for Chart: '<S145>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateClosed_o(const boolean *LogicalOperator_a, const
    boolean *RelationalOperator, const TeADCR_e_WEDStatus *Selector1)
{
    boolean guard1 = false;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;

    /* Selector: '<S9>/Selector1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S173>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read2'
     *  Inport: '<Root>/VeADAR_b_CoolDownActiveRtWED'
     *  Inport: '<Root>/VeADIR_b_RtWEDClosingFail'
     *  Inport: '<Root>/VeADIR_b_RtWEDOpeningFail'
     */
    /* During 'ActuateClosed': '<S165>:721' */
    /*  Check if WED has closed */
    if (((uint32)(*Selector1)) == CeADCR_e_Closed)
    {
        /* Transition: '<S165>:717' */
        /* Transition: '<S165>:738' */
        /* Exit Internal 'ActuateClosed': '<S165>:721' */
        /* Exit Internal 'ActuateToClosed': '<S165>:710' */
        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt = ADCR_ac_IN_Closed;

        /* Entry Internal 'Closed': '<S165>:720' */
        /* Transition: '<S165>:905' */
        ADCR_ac_DW.is_Closed = ADCR_ac_IN_SS_Closed;

        /* Entry 'SS_Closed': '<S165>:904' */
        VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSClosed;

        /*  Reset retry counter when in steady state closed */
        ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
        ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;
        VeADCC_b_RtEnblWggl = false;
    }
    else
    {
        /*  Both closing and opening are failed */
        (void)Rte_Read_VeADIR_b_RtWEDClosingFail_Value(&tmpRead);
        (void)Rte_Read_VeADIR_b_RtWEDOpeningFail_Value(&tmpRead_0);
        if (tmpRead && tmpRead_0)
        {
            /* Transition: '<S165>:829' */
            /* Exit Internal 'ActuateClosed': '<S165>:721' */
            /* Exit Internal 'ActuateToClosed': '<S165>:710' */
            ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                ADCR_ac_IN_StuckInMiddle;
            ADCR_ac_DW.tp_StuckInMiddle = 1U;

            /* Entry 'StuckInMiddle': '<S165>:816' */
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_StuckInMiddle;

            /*  Reset retry counter when in stuck middle */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_RtEnblWggl = false;
        }
        else
        {
            /* Transition: '<S165>:831' */
            /*  WED Ready to Open */
            if (((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Open)
            {
                /* Transition: '<S165>:718' */
                /*  Check if WED has opened */
                if (((uint32)(*Selector1)) == CeADCR_e_Open)
                {
                    /* Transition: '<S165>:742' */
                    /* Exit Internal 'ActuateClosed': '<S165>:721' */
                    /* Exit Internal 'ActuateToClosed': '<S165>:710' */
                    ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_Open;

                    /* Entry 'Open': '<S165>:724' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSOpen;

                    /*  Reset retry counter when in steady state open */
                    ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
                    ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_RtEnblWggl = false;
                }
                else
                {
                    /* Transition: '<S165>:743' */
                    /* Exit Internal 'ActuateClosed': '<S165>:721' */
                    /* Exit Internal 'ActuateToClosed': '<S165>:710' */
                    ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen_h(RelationalOperator);
                }
            }
            else
            {
                (void)Rte_Read_VeADAR_b_CoolDownActiveRtWED_Value(&tmpRead_1);
                if (((uint32)ADCR_ac_DW.is_ActuateClosed) ==
                        ADCR_ac_IN_ActuateToClosed)
                {
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                    /* During 'ActuateToClosed': '<S165>:710' */
                    /*  Check if closing is attempted for a CAL'd time */
                    if (VeADCC_t_WEDRightClsngMgrStTmr >= KeADCR_t_WEDClsngTmLmt)
                    {
                        /* Transition: '<S165>:1040' */
                        /* Transition: '<S165>:1045' */
                        /* Transition: '<S165>:1042' */
                        /*  update closing try counter */
                        ADCR_ac_B.LeADCC_i_WEDClsngAttempts = (uint8)((sint32)
                            (((sint32)ADCR_ac_B.LeADCC_i_WEDClsngAttempts) + 1));

                        /* Transition: '<S165>:1046' */
                        /* Exit Internal 'ActuateToClosed': '<S165>:710' */
                        ADCR_ac_DW.is_ActuateToClosed =
                            ADCR_ac_IN_NO_ACTIVE_CHILD;
                        ADCR_ac_DW.is_ActuateClosed =
                            ADCR_ac_IN_ActuateToOpenForRetry;

                        /* Entry 'ActuateToOpenForRetry': '<S165>:715' */
                        VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;

                        /*  Update state */
                        VeADCC_e_WEDRightCmndMgrSt =
                            CeADCR_e_ActuateOpenForRetry;

                        /*  Reset state timer */
                        VeADCC_t_WEDRightOpngMgrStTmr = 0.0F;
                    }
                    else if (((uint32)ADCR_ac_DW.is_ActuateToClosed) ==
                             ADCR_ac_IN_TimerActive)
                    {
                        /* During 'TimerActive': '<S165>:958' */
                        if (tmpRead_1 || (*RelationalOperator))
                        {
                            /* Transition: '<S165>:956' */
                            ADCR_ac_DW.is_ActuateToClosed =
                                ADCR_ac_IN_TimerInactive;
                        }
                        else
                        {
                            /*  Update state timer */
                            VeADCC_t_WEDRightClsngMgrStTmr =
                                VeADCC_t_WEDRightClsngMgrStTmr +
                                HeADCR_t_MedTEB_dT;
                        }
                    }
                    else
                    {
                        /* During 'TimerInactive': '<S165>:961' */
                        if ((!tmpRead_1) && (!(*RelationalOperator)))
                        {
                            /* Transition: '<S165>:963' */
                            ADCR_ac_DW.is_ActuateToClosed =
                                ADCR_ac_IN_TimerActive;
                        }
                    }
                }
                else
                {
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateOpenForRetry;

                    /* During 'ActuateToOpenForRetry': '<S165>:715' */
                    /*  Check if WED has opened */
                    guard1 = false;
                    if (((uint32)(*Selector1)) == CeADCR_e_Open)
                    {
                        /* Transition: '<S165>:746' */
                        guard1 = true;
                    }
                    else
                    {
                        /* if the WED position changes, reset the timer */
                        if (*LogicalOperator_a)
                        {
                            /* Transition: '<S165>:895' */
                            ADCR_ac_DW.is_ActuateClosed =
                                ADCR_ac_IN_ActuateToOpenForRetry;

                            /* Entry 'ActuateToOpenForRetry': '<S165>:715' */
                            VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;

                            /*  Update state */
                            VeADCC_e_WEDRightCmndMgrSt =
                                CeADCR_e_ActuateOpenForRetry;

                            /*  Reset state timer */
                            VeADCC_t_WEDRightOpngMgrStTmr = 0.0F;
                        }
                        else
                        {
                            /*  Check if WED has timed out for open retry */
                            if (VeADCC_t_WEDRightOpngMgrStTmr >=
                                    KeADCR_t_WEDOpngTmLmt)
                            {
                                /* Transition: '<S165>:765' */
                                /* Transition: '<S165>:766' */
                                /*  update opening retry counter */
                                ADCR_ac_B.LeADCC_i_WEDOpngAttempts = (uint8)
                                    ((sint32)(((sint32)
                                               ADCR_ac_B.LeADCC_i_WEDOpngAttempts)
                                              + 1));

                                /* Transition: '<S165>:767' */
                                guard1 = true;
                            }
                            else
                            {
                                /*  Update state timer */
                                VeADCC_t_WEDRightOpngMgrStTmr =
                                    VeADCC_t_WEDRightOpngMgrStTmr +
                                    HeADCR_t_MedTEB_dT;
                            }
                        }
                    }

                    if (guard1)
                    {
                        /* Transition: '<S165>:762' */
                        ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_ActuateToClosed;

                        /* Entry 'ActuateToClosed': '<S165>:710' */
                        VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                        /*  Reset state timer and update state */
                        VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                        /*  Reset Wiggle Enble */
                        VeADCC_b_RtEnblWggl = false;

                        /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                        /* Transition: '<S165>:957' */
                        if (tmpRead_1 || (*RelationalOperator))
                        {
                            /* Transition: '<S165>:960' */
                            /* Transition: '<S165>:992' */
                            ADCR_ac_DW.is_ActuateToClosed =
                                ADCR_ac_IN_TimerInactive;
                        }
                        else
                        {
                            /* Transition: '<S165>:962' */
                            ADCR_ac_DW.is_ActuateToClosed =
                                ADCR_ac_IN_TimerActive;
                        }
                    }
                }
            }
        }
    }

    /* End of Selector: '<S9>/Selector1' */
}

#endif

/* Function for Chart: '<S145>/ADCC_WEDStatCmndMgr' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

static void ADCR_ac_ActuateOpen_b(const boolean *LogicalOperator_a, const
    boolean *RelationalOperator, const TeADCR_e_WEDStatus *Selector1)
{
    boolean guard1 = false;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;

    /* Selector: '<S9>/Selector1' incorporates:
     *  Constant: '<S12>/Calib'
     *  Constant: '<S170>/Calib'
     *  Constant: '<S174>/Calib'
     *  Constant: '<S175>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read2'
     *  Inport: '<Root>/VeADAR_b_CoolDownActiveRtWED'
     *  Inport: '<Root>/VeADIR_b_RtWEDClosingFail'
     *  Inport: '<Root>/VeADIR_b_RtWEDOpeningFail'
     */
    /* During 'ActuateOpen': '<S165>:722' */
    /*  Check if WED has opened */
    if (((uint32)(*Selector1)) == CeADCR_e_Open)
    {
        /* Transition: '<S165>:719' */
        /* Transition: '<S165>:736' */
        /* Exit Internal 'ActuateOpen': '<S165>:722' */
        ADCR_ac_DW.tp_ActuateToClosedForRetry = 0U;

        /* Exit Internal 'ActuateToOpen': '<S165>:814' */
        ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.tp_ActuateToOpen = 0U;

        /* Exit Internal 'PositionStuckWhlOpng': '<S165>:908' */
        ADCR_ac_DW.is_PositionStuckWhlOpng = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
        ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt = ADCR_ac_IN_Open;

        /* Entry 'Open': '<S165>:724' */
        VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSOpen;

        /*  Reset retry counter when in steady state open */
        ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
        ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

        /*  Reset Wiggle Enble */
        VeADCC_b_RtEnblWggl = false;
    }
    else
    {
        /*  Both closing and opening are failed */
        (void)Rte_Read_VeADIR_b_RtWEDClosingFail_Value(&tmpRead);
        (void)Rte_Read_VeADIR_b_RtWEDOpeningFail_Value(&tmpRead_0);
        if (tmpRead && tmpRead_0)
        {
            /* Transition: '<S165>:828' */
            /* Exit Internal 'ActuateOpen': '<S165>:722' */
            ADCR_ac_DW.tp_ActuateToClosedForRetry = 0U;

            /* Exit Internal 'ActuateToOpen': '<S165>:814' */
            ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.tp_ActuateToOpen = 0U;

            /* Exit Internal 'PositionStuckWhlOpng': '<S165>:908' */
            ADCR_ac_DW.is_PositionStuckWhlOpng = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                ADCR_ac_IN_StuckInMiddle;
            ADCR_ac_DW.tp_StuckInMiddle = 1U;

            /* Entry 'StuckInMiddle': '<S165>:816' */
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_StuckInMiddle;

            /*  Reset retry counter when in stuck middle */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_RtEnblWggl = false;
        }
        else
        {
            /* Transition: '<S165>:830' */
            /*  WED Ready to close */
            (void)Rte_Read_VeADAR_b_CoolDownActiveRtWED_Value(&tmpRead_1);
            if (((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Closed)
            {
                /* Transition: '<S165>:723' */
                /*  Check if WED has Cloased */
                if (((uint32)(*Selector1)) == CeADCR_e_Closed)
                {
                    /* Transition: '<S165>:821' */
                    /* Exit Internal 'ActuateOpen': '<S165>:722' */
                    ADCR_ac_DW.tp_ActuateToClosedForRetry = 0U;

                    /* Exit Internal 'ActuateToOpen': '<S165>:814' */
                    ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.tp_ActuateToOpen = 0U;

                    /* Exit Internal 'PositionStuckWhlOpng': '<S165>:908' */
                    ADCR_ac_DW.is_PositionStuckWhlOpng =
                        ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_Closed;

                    /* Entry Internal 'Closed': '<S165>:720' */
                    /* Transition: '<S165>:905' */
                    ADCR_ac_DW.is_Closed = ADCR_ac_IN_SS_Closed;

                    /* Entry 'SS_Closed': '<S165>:904' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSClosed;

                    /*  Reset retry counter when in steady state closed */
                    ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
                    ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;
                    VeADCC_b_RtEnblWggl = false;
                }
                else
                {
                    /* Transition: '<S165>:822' */
                    /* Exit Internal 'ActuateOpen': '<S165>:722' */
                    ADCR_ac_DW.tp_ActuateToClosedForRetry = 0U;

                    /* Exit Internal 'ActuateToOpen': '<S165>:814' */
                    ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.tp_ActuateToOpen = 0U;

                    /* Exit Internal 'PositionStuckWhlOpng': '<S165>:908' */
                    ADCR_ac_DW.is_PositionStuckWhlOpng =
                        ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateClosed;

                    /* Entry Internal 'ActuateClosed': '<S165>:721' */
                    /* Transition: '<S165>:711' */
                    ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_ActuateToClosed;

                    /* Entry 'ActuateToClosed': '<S165>:710' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_RtEnblWggl = false;

                    /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                    /* Transition: '<S165>:957' */
                    if (tmpRead_1 || (*RelationalOperator))
                    {
                        /* Transition: '<S165>:960' */
                        /* Transition: '<S165>:992' */
                        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S165>:962' */
                        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerActive;
                    }
                }
            }
            else
            {
                guard1 = false;
                switch (ADCR_ac_DW.is_ActuateOpen)
                {
                  case ADCR_ac_IN_ActuateToClosedForRetry:
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosedForRetry;

                    /* During 'ActuateToClosedForRetry': '<S165>:810' */
                    /*  Check if WED has closed */
                    if (((uint32)(*Selector1)) == CeADCR_e_Closed)
                    {
                        /* Transition: '<S165>:813' */
                        guard1 = true;
                    }
                    else
                    {
                        /*  Check if WED has timed out for closed retry */
                        if (VeADCC_t_WEDRightClsngMgrStTmr >=
                                KeADCR_t_WEDClsngTmLmt)
                        {
                            /* Transition: '<S165>:802' */
                            /* Transition: '<S165>:805' */
                            /*  update closing retry counter */
                            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = (uint8)
                                ((sint32)(((sint32)
                                           ADCR_ac_B.LeADCC_i_WEDClsngAttempts)
                                          + 1));

                            /* Transition: '<S165>:804' */
                            guard1 = true;
                        }
                        else
                        {
                            /* if the WED position changes, reset the timer */
                            if (*LogicalOperator_a)
                            {
                                /* Transition: '<S165>:890' */
                                ADCR_ac_DW.is_ActuateOpen =
                                    ADCR_ac_IN_ActuateToClosedForRetry;
                                ADCR_ac_DW.tp_ActuateToClosedForRetry = 1U;

                                /* Entry 'ActuateToClosedForRetry': '<S165>:810' */
                                VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                                /*  Reset state timer and update state */
                                VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                                VeADCC_e_WEDRightCmndMgrSt =
                                    CeADCR_e_ActuateClosedForRetry;

                                /*  Reset Wiggle Enable */
                                VeADCC_b_RtEnblWggl = false;
                            }
                            else
                            {
                                /*  Update state timer */
                                VeADCC_t_WEDRightClsngMgrStTmr =
                                    VeADCC_t_WEDRightClsngMgrStTmr +
                                    HeADCR_t_MedTEB_dT;
                            }
                        }
                    }
                    break;

                  case ADCR_ac_IN_ActuateToOpen:
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateOpen;

                    /* During 'ActuateToOpen': '<S165>:814' */
                    if ((!(*LogicalOperator_a)) && (KeADCR_b_EnblWgglWhnStck))
                    {
                        /* Transition: '<S165>:909' */
                        /* Exit Internal 'ActuateToOpen': '<S165>:814' */
                        ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_NO_ACTIVE_CHILD;
                        ADCR_ac_DW.tp_ActuateToOpen = 0U;
                        ADCR_ac_DW.is_ActuateOpen =
                            ADCR_ac_IN_PositionStuckWhlOpng;

                        /* Entry 'PositionStuckWhlOpng': '<S165>:908' */
                        ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;
                        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_WgglActuateOpen;

                        /* Entry Internal 'PositionStuckWhlOpng': '<S165>:908' */
                        /* Transition: '<S165>:927' */
                        /* Transition: '<S165>:978' */
                        if (tmpRead_1)
                        {
                            /* Transition: '<S165>:972' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng =
                                ADCR_ac_IN_CooldownActive;

                            /* Entry 'CooldownActive': '<S165>:971' */
                            VeADCC_b_RtEnblWggl = false;
                        }
                        else if (*RelationalOperator)
                        {
                            /* Transition: '<S165>:936' */
                            /* Transition: '<S165>:976' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng =
                                ADCR_ac_IN_LearningActive;

                            /* Entry 'LearningActive': '<S165>:926' */
                            VeADCC_b_RtEnblWggl = true;
                        }
                        else
                        {
                            /* Transition: '<S165>:935' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng =
                                ADCR_ac_IN_TimerActive_e;

                            /* Entry 'TimerActive': '<S165>:928' */
                            VeADCC_b_RtEnblWggl = true;
                        }
                    }
                    else
                    {
                        /*  Check if opening is attempted for a CAL'd time */
                        if (VeADCC_t_WEDRightOpngMgrStTmr >=
                                KeADCR_t_WEDOpngTmLmt)
                        {
                            /* Transition: '<S165>:803' */
                            /* Transition: '<S165>:1048' */
                            /* Transition: '<S165>:801' */
                            /*  update open try counter */
                            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = (uint8)((sint32)
                                (((sint32)ADCR_ac_B.LeADCC_i_WEDOpngAttempts) +
                                 1));

                            /* Transition: '<S165>:1050' */
                            /* Exit Internal 'ActuateToOpen': '<S165>:814' */
                            ADCR_ac_DW.is_ActuateToOpen =
                                ADCR_ac_IN_NO_ACTIVE_CHILD;
                            ADCR_ac_DW.tp_ActuateToOpen = 0U;
                            ADCR_ac_DW.is_ActuateOpen =
                                ADCR_ac_IN_ActuateToClosedForRetry;
                            ADCR_ac_DW.tp_ActuateToClosedForRetry = 1U;

                            /* Entry 'ActuateToClosedForRetry': '<S165>:810' */
                            VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                            /*  Reset state timer and update state */
                            VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                            VeADCC_e_WEDRightCmndMgrSt =
                                CeADCR_e_ActuateClosedForRetry;

                            /*  Reset Wiggle Enable */
                            VeADCC_b_RtEnblWggl = false;
                        }
                        else if (((uint32)ADCR_ac_DW.is_ActuateToOpen) ==
                                 ADCR_ac_IN_TimerActive)
                        {
                            /* During 'TimerActive': '<S165>:941' */
                            if (tmpRead_1 || (*RelationalOperator))
                            {
                                /* Transition: '<S165>:939' */
                                ADCR_ac_DW.is_ActuateToOpen =
                                    ADCR_ac_IN_TimerInactive;
                            }
                            else
                            {
                                /*  Update state timer */
                                VeADCC_t_WEDRightOpngMgrStTmr =
                                    VeADCC_t_WEDRightOpngMgrStTmr +
                                    HeADCR_t_MedTEB_dT;
                            }
                        }
                        else
                        {
                            /* During 'TimerInactive': '<S165>:942' */
                            if ((!tmpRead_1) && (!(*RelationalOperator)))
                            {
                                /* Transition: '<S165>:938' */
                                ADCR_ac_DW.is_ActuateToOpen =
                                    ADCR_ac_IN_TimerActive;
                            }
                        }
                    }
                    break;

                  default:
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_WgglActuateOpen;

                    /* During 'PositionStuckWhlOpng': '<S165>:908' */
                    if ((*LogicalOperator_a) || (!KeADCR_b_EnblWgglWhnStck))
                    {
                        /* Transition: '<S165>:910' */
                        /*  Reset Wiggle Enable */
                        VeADCC_b_RtEnblWggl = false;

                        /* Exit Internal 'PositionStuckWhlOpng': '<S165>:908' */
                        ADCR_ac_DW.is_PositionStuckWhlOpng =
                            ADCR_ac_IN_NO_ACTIVE_CHILD;
                        ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_ActuateToOpen;
                        ADCR_ac_DW.tp_ActuateToOpen = 1U;

                        /* Entry 'ActuateToOpen': '<S165>:814' */
                        VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;

                        /*  Reset state timer and update state */
                        VeADCC_t_WEDRightOpngMgrStTmr = 0.0F;
                        ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;
                        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateOpen;

                        /* Entry Internal 'ActuateToOpen': '<S165>:814' */
                        /* Transition: '<S165>:940' */
                        if (tmpRead_1 || (*RelationalOperator))
                        {
                            /* Transition: '<S165>:943' */
                            /* Transition: '<S165>:982' */
                            ADCR_ac_DW.is_ActuateToOpen =
                                ADCR_ac_IN_TimerInactive;
                        }
                        else
                        {
                            /* Transition: '<S165>:937' */
                            ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_TimerActive;
                        }
                    }
                    else
                    {
                        /*  Check if opening is attempted for a CAL'd time or wiggle timer is expired */
                        if ((ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr >=
                                KeADCR_t_WEDOpngWgglTmLmt) ||
                                (VeADCC_t_WEDRightOpngMgrStTmr >=
                                 KeADCR_t_WEDOpngTmLmt))
                        {
                            /* Transition: '<S165>:912' */
                            /* Transition: '<S165>:801' */
                            /*  update open try counter */
                            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = (uint8)((sint32)
                                (((sint32)ADCR_ac_B.LeADCC_i_WEDOpngAttempts) +
                                 1));

                            /* Transition: '<S165>:1050' */
                            /* Exit Internal 'PositionStuckWhlOpng': '<S165>:908' */
                            ADCR_ac_DW.is_PositionStuckWhlOpng =
                                ADCR_ac_IN_NO_ACTIVE_CHILD;
                            ADCR_ac_DW.is_ActuateOpen =
                                ADCR_ac_IN_ActuateToClosedForRetry;
                            ADCR_ac_DW.tp_ActuateToClosedForRetry = 1U;

                            /* Entry 'ActuateToClosedForRetry': '<S165>:810' */
                            VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                            /*  Reset state timer and update state */
                            VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                            VeADCC_e_WEDRightCmndMgrSt =
                                CeADCR_e_ActuateClosedForRetry;

                            /*  Reset Wiggle Enable */
                            VeADCC_b_RtEnblWggl = false;
                        }
                        else
                        {
                            switch (ADCR_ac_DW.is_PositionStuckWhlOpng)
                            {
                              case ADCR_ac_IN_CooldownActive:
                                /* During 'CooldownActive': '<S165>:971' */
                                if ((*RelationalOperator) && (!tmpRead_1))
                                {
                                    /* Transition: '<S165>:974' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng =
                                        ADCR_ac_IN_LearningActive;

                                    /* Entry 'LearningActive': '<S165>:926' */
                                    VeADCC_b_RtEnblWggl = true;
                                }
                                else
                                {
                                    if (!tmpRead_1)
                                    {
                                        /* Transition: '<S165>:980' */
                                        ADCR_ac_DW.is_PositionStuckWhlOpng =
                                            ADCR_ac_IN_TimerActive_e;

                                        /* Entry 'TimerActive': '<S165>:928' */
                                        VeADCC_b_RtEnblWggl = true;
                                    }
                                }
                                break;

                              case ADCR_ac_IN_LearningActive:
                                /* During 'LearningActive': '<S165>:926' */
                                if (tmpRead_1)
                                {
                                    /* Transition: '<S165>:973' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng =
                                        ADCR_ac_IN_CooldownActive;

                                    /* Entry 'CooldownActive': '<S165>:971' */
                                    VeADCC_b_RtEnblWggl = false;
                                }
                                else
                                {
                                    if (!(*RelationalOperator))
                                    {
                                        /* Transition: '<S165>:929' */
                                        ADCR_ac_DW.is_PositionStuckWhlOpng =
                                            ADCR_ac_IN_TimerActive_e;

                                        /* Entry 'TimerActive': '<S165>:928' */
                                        VeADCC_b_RtEnblWggl = true;
                                    }
                                }
                                break;

                              default:
                                /* During 'TimerActive': '<S165>:928' */
                                /* Transition: '<S165>:979' */
                                if (tmpRead_1)
                                {
                                    /* Transition: '<S165>:972' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng =
                                        ADCR_ac_IN_CooldownActive;

                                    /* Entry 'CooldownActive': '<S165>:971' */
                                    VeADCC_b_RtEnblWggl = false;
                                }
                                else if (*RelationalOperator)
                                {
                                    /* Transition: '<S165>:930' */
                                    ADCR_ac_DW.is_PositionStuckWhlOpng =
                                        ADCR_ac_IN_LearningActive;

                                    /* Entry 'LearningActive': '<S165>:926' */
                                    VeADCC_b_RtEnblWggl = true;
                                }
                                else
                                {
                                    /*  Update state timer */
                                    VeADCC_t_WEDRightOpngMgrStTmr =
                                        VeADCC_t_WEDRightOpngMgrStTmr +
                                        HeADCR_t_MedTEB_dT;
                                    ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr +=
                                        HeADCR_t_MedTEB_dT;
                                }
                                break;
                            }
                        }
                    }
                    break;
                }

                if (guard1)
                {
                    /* Transition: '<S165>:809' */
                    ADCR_ac_DW.tp_ActuateToClosedForRetry = 0U;
                    ADCR_ac_DW.is_ActuateOpen = ADCR_ac_IN_ActuateToOpen;
                    ADCR_ac_DW.tp_ActuateToOpen = 1U;

                    /* Entry 'ActuateToOpen': '<S165>:814' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDRightOpngMgrStTmr = 0.0F;
                    ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateOpen;

                    /* Entry Internal 'ActuateToOpen': '<S165>:814' */
                    /* Transition: '<S165>:940' */
                    if (tmpRead_1 || (*RelationalOperator))
                    {
                        /* Transition: '<S165>:943' */
                        /* Transition: '<S165>:982' */
                        ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S165>:937' */
                        ADCR_ac_DW.is_ActuateToOpen = ADCR_ac_IN_TimerActive;
                    }
                }
            }
        }
    }

    /* End of Selector: '<S9>/Selector1' */
}

#endif

/* Model step function for TID1 */
FUNC(void, ADCR_CODE) ADCR_MedTEB1(void) /* Explicit Task: MedTEB1 */
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADAR_e_ActuationStatus tmpRead;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADAR_e_ActuationStatus tmpRead_0;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeRTMR_e_WEDLearningProcedure tmpRead_2;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    boolean rtb_VariantMerge_For_Variant_Source_Va_p;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 rtb_VariantMerge_For_Variant_Source_V_as;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    float32 rtb_VariantMerge_For_Variant_Source_Va_o;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_NOT_i;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeADAR_L_LftSln;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_RelationalOperator1_la;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeADAR_L_RtSlnd;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_RelationalOperator_n;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_RelationalOperator1_i;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_Logical2_p;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_Logical1_e4;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Multiplication3;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Multiplication4_d;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_UnitDelay_iy;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtProduct1Inpor_n[3];

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Multiplication3_p;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_OR1_m0;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_OR1_ff;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_AND_ix;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDClchStat rtb_VariantMerge_For_Variant_Source_Va_f;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_AWDClchStat rtb_VariantMerge_For_Variant_Source_Va_j;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus rtb_VariantMerge_For_Variant_Source_Va_a;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    TeADCR_e_WEDStatus rtb_VariantMerge_For_Variant_Source_Va_k;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint32 i;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint32 tmp;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean guard2 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTEB1'
     */
    /* SignalConversion generated from: '<S1>/VeADAR_L_LftSlndPos' incorporates:
     *  SignalConversion generated from: '<S1>/VeADAR_L_RtSlndPos'
     *  SignalConversion generated from: '<S1>/VeHSER_e_AWDStatDsrd'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_WEDLeftWheel'
     *  SignalConversion generated from: '<S1>/VeVSDR_n_WEDRightWheel'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* SignalConversion generated from: '<S1>/VeADAR_L_LftSlndPos' incorporates:
     *  Inport: '<Root>/VeADAR_L_LftSlndPos'
     */
    (void)Rte_Read_VeADAR_L_LftSlndPos_Value
        (&rtb_TmpSignalConversionAtVeADAR_L_LftSln);

    /* SignalConversion generated from: '<S1>/VeADAR_L_RtSlndPos' incorporates:
     *  Inport: '<Root>/VeADAR_L_RtSlndPos'
     */
    (void)Rte_Read_VeADAR_L_RtSlndPos_Value
        (&rtb_TmpSignalConversionAtVeADAR_L_RtSlnd);

    /* SignalConversion generated from: '<S1>/VeHSER_e_AWDStatDsrd' incorporates:
     *  Inport: '<Root>/VeHSER_e_AWDStatDsrd'
     */
    (void)Rte_Read_VeHSER_e_AWDStatDsrd_Value
        (&ADCR_ac_B.TmpSignalConversionAtVeHSER_e_AWDStatDsr);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDLeftWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDLeftWheel_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j);

    /* SignalConversion generated from: '<S1>/VeVSDR_n_WEDRightWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDRightWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDRightWheel_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADAR_L_LftSlndPos' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Inport: '<Root>/VeADAR_e_RightActuationStatus' */
    (void)Rte_Read_VeADAR_e_RightActuationStatus_Value(&tmpRead_0);

    /* Inport: '<Root>/VeADAR_e_LeftActuationStatus' */
    (void)Rte_Read_VeADAR_e_LeftActuationStatus_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_InputProc' */
    /* DataTypeConversion: '<S16>/Data Type Conversion2' incorporates:
     *  Constant: '<S133>/Calib'
     *  DataTypeConversion: '<S9>/Data Type Conversion3'
     *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
     *  Selector: '<S9>/Selector1'
     */
    ADCR_ac_B.DataTypeConversion_m = KaADCR_e_ActnStatus2WEDStatus[(tmpRead_0)];

    /* DataTypeConversion: '<S16>/Data Type Conversion1' incorporates:
     *  Constant: '<S133>/Calib'
     *  DataTypeConversion: '<S9>/Data Type Conversion1'
     *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
     *  Selector: '<S9>/Selector'
     */
    ADCR_ac_B.DataTypeConversion_j = KaADCR_e_ActnStatus2WEDStatus[(tmpRead)];

    /* DataTypeConversion: '<S131>/DataTypeConversion' incorporates:
     *  Selector: '<S9>/Selector'
     */
    ADCR_ac_B.DataTypeConversion_k = ADCR_ac_B.DataTypeConversion_j;

    /* DataTypeConversion: '<S132>/DataTypeConversion' incorporates:
     *  Selector: '<S9>/Selector1'
     */
    ADCR_ac_B.DataTypeConversion_i = ADCR_ac_B.DataTypeConversion_m;

    /* If: '<S136>/If2' incorporates:
     *  Constant: '<S137>/Constant'
     *  Constant: '<S138>/Constant'
     *  Constant: '<S139>/Constant'
     *  Constant: '<S143>/Calib'
     *  RelationalOperator: '<S136>/Comparison1'
     *  RelationalOperator: '<S136>/Comparison2'
     *  RelationalOperator: '<S136>/Comparison4'
     */
    if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) ==
            CeTSXR_e_Nx_Na)
    {
        /* Merge: '<S136>/Merge2' incorporates:
         *  Inport: '<Root>/VeMSPR_dn_MtrA_Accel'
         */
        (void)Rte_Read_VeMSPR_dn_MtrA_Accel_Value(&ADCR_ac_B.Merge2);

        /* Merge: '<S136>/Merge1' incorporates:
         *  Inport: '<Root>/VeMTIR_M_MtrA_TorqAchieved'
         */
        (void)Rte_Read_VeMTIR_M_MtrA_TorqAchieved_Value(&ADCR_ac_B.Merge1_n);

        /* Merge: '<S136>/Merge' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&ADCR_ac_B.Merge_j);
    }
    else if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) ==
             CeTSXR_e_Nx_Nb)
    {
        /* Merge: '<S136>/Merge2' incorporates:
         *  Inport: '<Root>/VeMSPR_dn_MtrB_Accel'
         */
        (void)Rte_Read_VeMSPR_dn_MtrB_Accel_Value(&ADCR_ac_B.Merge2);

        /* Merge: '<S136>/Merge1' incorporates:
         *  Inport: '<Root>/VeMTIR_M_MtrB_TorqAchieved'
         */
        (void)Rte_Read_VeMTIR_M_MtrB_TorqAchieved_Value(&ADCR_ac_B.Merge1_n);

        /* Merge: '<S136>/Merge' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrB_Spd'
         */
        (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&ADCR_ac_B.Merge_j);
    }
    else
    {
        if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) ==
                CeTSXR_e_Nx_Nc)
        {
            /* Merge: '<S136>/Merge2' incorporates:
             *  Inport: '<Root>/VeMSPR_dn_MtrC_Accel'
             */
            (void)Rte_Read_VeMSPR_dn_MtrC_Accel_Value(&ADCR_ac_B.Merge2);

            /* Merge: '<S136>/Merge1' incorporates:
             *  Inport: '<Root>/VeMTIR_M_MtrC_TorqAchieved'
             */
            (void)Rte_Read_VeMTIR_M_MtrC_TorqAchieved_Value(&ADCR_ac_B.Merge1_n);

            /* Merge: '<S136>/Merge' incorporates:
             *  Inport: '<Root>/VeMSPR_n_MtrC_Spd'
             */
            (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&ADCR_ac_B.Merge_j);
        }
    }

    /* End of If: '<S136>/If2' */

    /* Gain: '<S134>/Gain' */
    ADCR_ac_B.Gain_j = ADCR_ac_B.Merge_j;

    /* Gain: '<S135>/Gain' */
    ADCR_ac_B.Gain_n = ADCR_ac_B.Merge2;

    /* End of Outputs for SubSystem: '<S1>/ADCC_InputProc' */

    /* Outputs for Function Call SubSystem: '<S1>/WEDThroughTorqueCalc' */
    /* Sum: '<S13>/Sum' incorporates:
     *  Constant: '<S198>/Calib'
     *  Constant: '<S199>/Calib'
     *  Product: '<S13>/Product'
     *  Product: '<S13>/Product1'
     */
    VeADCC_M_WEDThruTorq = (ADCR_ac_B.Merge1_n - (ADCR_ac_B.Merge2 * ((float32)
        Rte_Prm_KeTSXR_J_ExternWEDMtrInertia_KeTSXR_J_ExternWEDMtrInertia()))) -
        (ADCR_ac_B.Merge_j * ((float32)
          Rte_Prm_KeTSXR_D_ExternWEDMtrDmpng_KeTSXR_D_ExternWEDMtrDmpng()));

    /* End of Outputs for SubSystem: '<S1>/WEDThroughTorqueCalc' */

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_CalcClchSlip' */
    /* If: '<S80>/If2' incorporates:
     *  Constant: '<S85>/Constant'
     *  Constant: '<S86>/Constant'
     *  Constant: '<S87>/Constant'
     *  Constant: '<S88>/Constant'
     *  DataStoreRead: '<S80>/Data Store Read7'
     *  RelationalOperator: '<S80>/Relational Operator1'
     *  RelationalOperator: '<S80>/Relational Operator2'
     *  RelationalOperator: '<S80>/Relational Operator3'
     *  RelationalOperator: '<S80>/Relational Operator4'
     */
    if (((uint32)VeADCR_e_AWDDiscSlipSpdEqn_DS) ==
            CeADCR_e_AWDDiscSlipSpdEqnOpen)
    {
        /* Outputs for IfAction SubSystem: '<S80>/ADCC_SlipCalculatioOpen' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Product: '<S98>/Multiplication3' incorporates:
         *  Constant: '<S12>/Calib'
         *  Constant: '<S98>/Constant Value1'
         *  Product: '<S103>/Multiplication3'
         */
        rtb_Multiplication4_d = HeADCR_t_MedTEB_dT / 2.0F;

        /* Product: '<S103>/Multiplication3' incorporates:
         *  UnitDelay: '<S98>/Unit Delay'
         */
        rtb_Multiplication3_p = ADCR_ac_DW.UnitDelay_DSTATE_js;

        /* SignalConversion generated from: '<S93>/Product1' */
        rtb_TmpSignalConversionAtProduct1Inpor_n[0] = ADCR_ac_B.Merge_j;
        rtb_TmpSignalConversionAtProduct1Inpor_n[1] =
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j;
        rtb_TmpSignalConversionAtProduct1Inpor_n[2] =
            rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l;

        /* Product: '<S93>/Product1' */
        ADCR_ac_DW.UnitDelay_DSTATE_js = 0.0F;

        /* Product: '<S94>/Product1' */
        rtb_Multiplication3 = 0.0F;
        for (i = 0; i < 3; i++)
        {
            rtb_UnitDelay_iy = rtb_TmpSignalConversionAtProduct1Inpor_n[i];

            /* Product: '<S93>/Product1' incorporates:
             *  Constant: '<S89>/Calib'
             *  Product: '<S94>/Product1'
             *  Selector: '<S81>/Selector'
             *  Selector: '<S81>/Selector1'
             */
            tmp = i * 2;
            ADCR_ac_DW.UnitDelay_DSTATE_js += KaADCR_r_AWDClchSlipOpen[(tmp)] *
                rtb_UnitDelay_iy;

            /* Product: '<S94>/Product1' incorporates:
             *  Constant: '<S89>/Calib'
             *  Selector: '<S81>/Selector1'
             */
            rtb_Multiplication3 += KaADCR_r_AWDClchSlipOpen[tmp + 1] *
                rtb_UnitDelay_iy;
        }

        /* Product: '<S98>/Multiplication2' incorporates:
         *  Constant: '<S99>/Calib'
         *  Product: '<S93>/Product1'
         *  Product: '<S98>/Multiplication3'
         *  Product: '<S98>/Multiplication4'
         *  Selector: '<S81>/Selector'
         *  Sum: '<S98>/Summation'
         *  Sum: '<S98>/Summation1'
         *  Sum: '<S98>/Summation2'
         *  UnitDelay: '<S98>/Unit Delay'
         *  UnitDelay: '<S98>/Unit Delay1'
         */
        ADCR_ac_DW.UnitDelay1_DSTATE_et = ((ADCR_ac_DW.UnitDelay_DSTATE_js -
            ((rtb_Multiplication4_d - KeADCR_t_NCADotCutOff) *
             ADCR_ac_DW.UnitDelay1_DSTATE_et)) - rtb_Multiplication3_p) /
            (rtb_Multiplication4_d + KeADCR_t_NCADotCutOff);

        /* Merge: '<S80>/Merge3' incorporates:
         *  Gain: '<S96>/Gain'
         *  UnitDelay: '<S98>/Unit Delay1'
         */
        VeADCC_dn_WEDClchXSlipDotAct = ADCR_ac_DW.UnitDelay1_DSTATE_et;

        /* Merge: '<S80>/Merge1' incorporates:
         *  Gain: '<S97>/Gain'
         *  UnitDelay: '<S98>/Unit Delay'
         */
        VeADCC_n_WEDClchXSlipAct = ADCR_ac_DW.UnitDelay_DSTATE_js;

        /* UnitDelay: '<S103>/Unit Delay' */
        rtb_UnitDelay_iy = ADCR_ac_DW.UnitDelay_DSTATE_jx;

        /* Product: '<S94>/Product1' incorporates:
         *  UnitDelay: '<S103>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_jx = rtb_Multiplication3;

        /* Product: '<S103>/Multiplication2' incorporates:
         *  Constant: '<S104>/Calib'
         *  Product: '<S103>/Multiplication4'
         *  Sum: '<S103>/Summation'
         *  Sum: '<S103>/Summation1'
         *  Sum: '<S103>/Summation2'
         *  UnitDelay: '<S103>/Unit Delay'
         *  UnitDelay: '<S103>/Unit Delay1'
         */
        ADCR_ac_DW.UnitDelay1_DSTATE_j = ((ADCR_ac_DW.UnitDelay_DSTATE_jx -
            ((rtb_Multiplication4_d - KeADCR_t_NCADotCutOff) *
             ADCR_ac_DW.UnitDelay1_DSTATE_j)) - rtb_UnitDelay_iy) /
            (rtb_Multiplication4_d + KeADCR_t_NCADotCutOff);

        /* Merge: '<S80>/Merge4' incorporates:
         *  Gain: '<S101>/Gain'
         *  UnitDelay: '<S103>/Unit Delay1'
         */
        VeADCC_dn_WEDClchYSlipDotAct = ADCR_ac_DW.UnitDelay1_DSTATE_j;

        /* Merge: '<S80>/Merge2' incorporates:
         *  Gain: '<S102>/Gain'
         *  UnitDelay: '<S103>/Unit Delay'
         */
        VeADCC_n_WEDClchYSlipAct = ADCR_ac_DW.UnitDelay_DSTATE_jx;

        /* End of Outputs for SubSystem: '<S80>/ADCC_SlipCalculatioOpen' */
    }
    else if (((uint32)VeADCR_e_AWDDiscSlipSpdEqn_DS) ==
             CeADCR_e_AWDDiscSlipSpdEqnMX)
    {
        /* Outputs for IfAction SubSystem: '<S80>/ADCC_SlipCalculationMX' incorporates:
         *  ActionPort: '<S83>/Action Port'
         */
        /* Merge: '<S80>/Merge1' incorporates:
         *  Constant: '<S83>/Constant Value3'
         *  SignalConversion generated from: '<S83>/NcL'
         */
        VeADCC_n_WEDClchXSlipAct = 0.0F;

        /* Product: '<S121>/Multiplication3' incorporates:
         *  Constant: '<S121>/Constant Value1'
         *  Constant: '<S12>/Calib'
         */
        rtb_Multiplication3 = HeADCR_t_MedTEB_dT / 2.0F;

        /* Product: '<S121>/Multiplication4' incorporates:
         *  Constant: '<S122>/Calib'
         *  Sum: '<S121>/Summation2'
         *  UnitDelay: '<S121>/Unit Delay1'
         */
        rtb_Multiplication4_d = (rtb_Multiplication3 - KeADCR_t_NCADotCutOff) *
            ADCR_ac_DW.UnitDelay1_DSTATE_ei;

        /* UnitDelay: '<S121>/Unit Delay' incorporates:
         *  UnitDelay: '<S121>/Unit Delay1'
         */
        ADCR_ac_DW.UnitDelay1_DSTATE_ei = ADCR_ac_DW.UnitDelay_DSTATE_jo;

        /* SignalConversion generated from: '<S117>/Product1' */
        rtb_TmpSignalConversionAtProduct1Inpor_n[0] = ADCR_ac_B.Merge_j;
        rtb_TmpSignalConversionAtProduct1Inpor_n[1] =
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j;
        rtb_TmpSignalConversionAtProduct1Inpor_n[2] =
            rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l;

        /* Product: '<S117>/Product1' incorporates:
         *  Constant: '<S90>/Calib'
         *  Selector: '<S83>/Selector'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_jo = 0.0F;
        for (i = 0; i < 3; i++)
        {
            ADCR_ac_DW.UnitDelay_DSTATE_jo += KaADCR_r_AWDClchSlipMX[(i * 2) + 1]
                * rtb_TmpSignalConversionAtProduct1Inpor_n[i];
        }

        /* End of Product: '<S117>/Product1' */

        /* Product: '<S121>/Multiplication2' incorporates:
         *  Constant: '<S122>/Calib'
         *  Sum: '<S121>/Summation'
         *  Sum: '<S121>/Summation1'
         *  UnitDelay: '<S121>/Unit Delay'
         *  UnitDelay: '<S121>/Unit Delay1'
         */
        ADCR_ac_DW.UnitDelay1_DSTATE_ei = ((ADCR_ac_DW.UnitDelay_DSTATE_jo -
            rtb_Multiplication4_d) - ADCR_ac_DW.UnitDelay1_DSTATE_ei) /
            (rtb_Multiplication3 + KeADCR_t_NCADotCutOff);

        /* Merge: '<S80>/Merge4' incorporates:
         *  Gain: '<S119>/Gain'
         *  UnitDelay: '<S121>/Unit Delay1'
         */
        VeADCC_dn_WEDClchYSlipDotAct = ADCR_ac_DW.UnitDelay1_DSTATE_ei;

        /* Merge: '<S80>/Merge2' incorporates:
         *  Gain: '<S120>/Gain'
         *  UnitDelay: '<S121>/Unit Delay'
         */
        VeADCC_n_WEDClchYSlipAct = ADCR_ac_DW.UnitDelay_DSTATE_jo;

        /* Merge: '<S80>/Merge3' incorporates:
         *  Constant: '<S83>/Constant Value4'
         *  SignalConversion generated from: '<S83>/NcLDot'
         */
        VeADCC_dn_WEDClchXSlipDotAct = 0.0F;

        /* End of Outputs for SubSystem: '<S80>/ADCC_SlipCalculationMX' */
    }
    else if (((uint32)VeADCR_e_AWDDiscSlipSpdEqn_DS) ==
             CeADCR_e_AWDDiscSlipSpdEqnMY)
    {
        /* Outputs for IfAction SubSystem: '<S80>/ADCC_SlipCalculationMY' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        /* Product: '<S127>/Multiplication3' incorporates:
         *  Constant: '<S127>/Constant Value1'
         *  Constant: '<S12>/Calib'
         */
        rtb_Multiplication3 = HeADCR_t_MedTEB_dT / 2.0F;

        /* Product: '<S127>/Multiplication4' incorporates:
         *  Constant: '<S128>/Calib'
         *  Sum: '<S127>/Summation2'
         *  UnitDelay: '<S127>/Unit Delay1'
         */
        rtb_Multiplication4_d = (rtb_Multiplication3 - KeADCR_t_NCADotCutOff) *
            ADCR_ac_DW.UnitDelay1_DSTATE_f;

        /* UnitDelay: '<S127>/Unit Delay' incorporates:
         *  UnitDelay: '<S127>/Unit Delay1'
         */
        ADCR_ac_DW.UnitDelay1_DSTATE_f = ADCR_ac_DW.UnitDelay_DSTATE_hr;

        /* SignalConversion generated from: '<S123>/Product1' */
        rtb_TmpSignalConversionAtProduct1Inpor_n[0] = ADCR_ac_B.Merge_j;
        rtb_TmpSignalConversionAtProduct1Inpor_n[1] =
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j;
        rtb_TmpSignalConversionAtProduct1Inpor_n[2] =
            rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l;

        /* Product: '<S123>/Product1' incorporates:
         *  Constant: '<S91>/Calib'
         *  Selector: '<S84>/Selector'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_hr = 0.0F;
        for (i = 0; i < 3; i++)
        {
            ADCR_ac_DW.UnitDelay_DSTATE_hr += KaADCR_r_AWDClchSlipMY[i * 2] *
                rtb_TmpSignalConversionAtProduct1Inpor_n[i];
        }

        /* End of Product: '<S123>/Product1' */

        /* Product: '<S127>/Multiplication2' incorporates:
         *  Constant: '<S128>/Calib'
         *  Sum: '<S127>/Summation'
         *  Sum: '<S127>/Summation1'
         *  UnitDelay: '<S127>/Unit Delay'
         *  UnitDelay: '<S127>/Unit Delay1'
         */
        ADCR_ac_DW.UnitDelay1_DSTATE_f = ((ADCR_ac_DW.UnitDelay_DSTATE_hr -
            rtb_Multiplication4_d) - ADCR_ac_DW.UnitDelay1_DSTATE_f) /
            (rtb_Multiplication3 + KeADCR_t_NCADotCutOff);

        /* Merge: '<S80>/Merge3' incorporates:
         *  Gain: '<S125>/Gain'
         *  UnitDelay: '<S127>/Unit Delay1'
         */
        VeADCC_dn_WEDClchXSlipDotAct = ADCR_ac_DW.UnitDelay1_DSTATE_f;

        /* Merge: '<S80>/Merge1' incorporates:
         *  Gain: '<S126>/Gain'
         *  UnitDelay: '<S127>/Unit Delay'
         */
        VeADCC_n_WEDClchXSlipAct = ADCR_ac_DW.UnitDelay_DSTATE_hr;

        /* Merge: '<S80>/Merge2' incorporates:
         *  Constant: '<S84>/Constant Value3'
         *  SignalConversion generated from: '<S84>/NcR'
         */
        VeADCC_n_WEDClchYSlipAct = 0.0F;

        /* Merge: '<S80>/Merge4' incorporates:
         *  Constant: '<S84>/Constant Value4'
         *  SignalConversion generated from: '<S84>/NcRDot'
         */
        VeADCC_dn_WEDClchYSlipDotAct = 0.0F;

        /* End of Outputs for SubSystem: '<S80>/ADCC_SlipCalculationMY' */
    }
    else
    {
        if (((uint32)VeADCR_e_AWDDiscSlipSpdEqn_DS) ==
                CeADCR_e_AWDDiscSlipSpdEqnLocked)
        {
            /* Outputs for IfAction SubSystem: '<S80>/ADCC_SlipCalculationLocked' incorporates:
             *  ActionPort: '<S82>/Action Port'
             */
            /* Product: '<S110>/Multiplication3' incorporates:
             *  Constant: '<S110>/Constant Value1'
             *  Constant: '<S12>/Calib'
             *  Product: '<S115>/Multiplication3'
             */
            rtb_Multiplication4_d = HeADCR_t_MedTEB_dT / 2.0F;

            /* Product: '<S115>/Multiplication3' incorporates:
             *  UnitDelay: '<S110>/Unit Delay'
             */
            rtb_Multiplication3_p = ADCR_ac_DW.UnitDelay_DSTATE_ex;

            /* SignalConversion generated from: '<S105>/Product1' */
            rtb_TmpSignalConversionAtProduct1Inpor_n[0] = ADCR_ac_B.Merge_j;
            rtb_TmpSignalConversionAtProduct1Inpor_n[1] =
                rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j;
            rtb_TmpSignalConversionAtProduct1Inpor_n[2] =
                rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l;

            /* Product: '<S105>/Product1' */
            ADCR_ac_DW.UnitDelay_DSTATE_ex = 0.0F;

            /* Product: '<S106>/Product1' */
            rtb_Multiplication3 = 0.0F;
            for (i = 0; i < 3; i++)
            {
                rtb_UnitDelay_iy = rtb_TmpSignalConversionAtProduct1Inpor_n[i];

                /* Product: '<S105>/Product1' incorporates:
                 *  Constant: '<S92>/Calib'
                 *  Product: '<S106>/Product1'
                 *  Selector: '<S82>/Selector'
                 *  Selector: '<S82>/Selector1'
                 */
                tmp = i * 2;
                ADCR_ac_DW.UnitDelay_DSTATE_ex += KaADCR_r_AWDClchSlipLocked
                    [(tmp)] * rtb_UnitDelay_iy;

                /* Product: '<S106>/Product1' incorporates:
                 *  Constant: '<S92>/Calib'
                 *  Selector: '<S82>/Selector'
                 */
                rtb_Multiplication3 += KaADCR_r_AWDClchSlipLocked[tmp + 1] *
                    rtb_UnitDelay_iy;
            }

            /* Product: '<S110>/Multiplication2' incorporates:
             *  Constant: '<S111>/Calib'
             *  Product: '<S105>/Product1'
             *  Product: '<S110>/Multiplication3'
             *  Product: '<S110>/Multiplication4'
             *  Selector: '<S82>/Selector1'
             *  Sum: '<S110>/Summation'
             *  Sum: '<S110>/Summation1'
             *  Sum: '<S110>/Summation2'
             *  UnitDelay: '<S110>/Unit Delay'
             *  UnitDelay: '<S110>/Unit Delay1'
             */
            ADCR_ac_DW.UnitDelay1_DSTATE_e = ((ADCR_ac_DW.UnitDelay_DSTATE_ex -
                ((rtb_Multiplication4_d - KeADCR_t_NCADotCutOff) *
                 ADCR_ac_DW.UnitDelay1_DSTATE_e)) - rtb_Multiplication3_p) /
                (rtb_Multiplication4_d + KeADCR_t_NCADotCutOff);

            /* Merge: '<S80>/Merge3' incorporates:
             *  Gain: '<S108>/Gain'
             *  UnitDelay: '<S110>/Unit Delay1'
             */
            VeADCC_dn_WEDClchXSlipDotAct = ADCR_ac_DW.UnitDelay1_DSTATE_e;

            /* Merge: '<S80>/Merge1' incorporates:
             *  Gain: '<S109>/Gain'
             *  UnitDelay: '<S110>/Unit Delay'
             */
            VeADCC_n_WEDClchXSlipAct = ADCR_ac_DW.UnitDelay_DSTATE_ex;

            /* UnitDelay: '<S115>/Unit Delay' */
            rtb_UnitDelay_iy = ADCR_ac_DW.UnitDelay_DSTATE_fa;

            /* Product: '<S106>/Product1' incorporates:
             *  UnitDelay: '<S115>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_fa = rtb_Multiplication3;

            /* Product: '<S115>/Multiplication2' incorporates:
             *  Constant: '<S116>/Calib'
             *  Product: '<S115>/Multiplication4'
             *  Sum: '<S115>/Summation'
             *  Sum: '<S115>/Summation1'
             *  Sum: '<S115>/Summation2'
             *  UnitDelay: '<S115>/Unit Delay'
             *  UnitDelay: '<S115>/Unit Delay1'
             */
            ADCR_ac_DW.UnitDelay1_DSTATE_o = ((ADCR_ac_DW.UnitDelay_DSTATE_fa -
                ((rtb_Multiplication4_d - KeADCR_t_NCADotCutOff) *
                 ADCR_ac_DW.UnitDelay1_DSTATE_o)) - rtb_UnitDelay_iy) /
                (rtb_Multiplication4_d + KeADCR_t_NCADotCutOff);

            /* Merge: '<S80>/Merge4' incorporates:
             *  Gain: '<S113>/Gain'
             *  UnitDelay: '<S115>/Unit Delay1'
             */
            VeADCC_dn_WEDClchYSlipDotAct = ADCR_ac_DW.UnitDelay1_DSTATE_o;

            /* Merge: '<S80>/Merge2' incorporates:
             *  Gain: '<S114>/Gain'
             *  UnitDelay: '<S115>/Unit Delay'
             */
            VeADCC_n_WEDClchYSlipAct = ADCR_ac_DW.UnitDelay_DSTATE_fa;

            /* End of Outputs for SubSystem: '<S80>/ADCC_SlipCalculationLocked' */
        }
    }

    /* End of If: '<S80>/If2' */
    /* End of Outputs for SubSystem: '<S1>/ADCC_CalcClchSlip' */

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_AWDClchStatDet' */
    /* Outputs for Atomic SubSystem: '<S17>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S36>/Switch1' incorporates:
     *  Abs: '<S17>/Abs2'
     *  Abs: '<S17>/Abs3'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S20>/Calib'
     *  Constant: '<S22>/Calib'
     *  Constant: '<S24>/Calib'
     *  Constant: '<S36>/Constant Value4'
     *  DataTypeConversion: '<S16>/Data Type Conversion1'
     *  Logic: '<S17>/AND'
     *  MinMax: '<S36>/Maximum'
     *  RelationalOperator: '<S17>/Greater  Than1'
     *  RelationalOperator: '<S17>/Greater  Than4'
     *  Selector: '<S16>/Selector'
     *  Selector: '<S16>/Selector1'
     *  Sum: '<S36>/Subtraction'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    if ((fabsf(VeADCC_n_WEDClchXSlipAct) > KaADCR_n_ClchXMaxSyncSlip
            [(ADCR_ac_B.DataTypeConversion_j)]) || (fabsf
            (VeADCC_dn_WEDClchYSlipDotAct) > KaADCR_dn_ClchXMaxSyncSlipDot
            [(ADCR_ac_B.DataTypeConversion_j)]))
    {
        ADCR_ac_DW.UnitDelay_DSTATE_b = KeADCR_t_ClchXMinSyncTurnOnDelay;
    }
    else
    {
        ADCR_ac_DW.UnitDelay_DSTATE_b = fmaxf(ADCR_ac_DW.UnitDelay_DSTATE_b -
            HeADCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S36>/Switch1' */

    /* Logic: '<S17>/NOT' incorporates:
     *  Constant: '<S36>/Constant Value2'
     *  RelationalOperator: '<S36>/Greater  Than1'
     *  UnitDelay: '<S36>/Unit Delay'
     */
    rtb_NOT_i = (ADCR_ac_DW.UnitDelay_DSTATE_b <= 0.0F);

    /* End of Outputs for SubSystem: '<S17>/Timer Retrigger Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S17>/Turn Off Delay Time with Resetable delay' */
    /* Outputs for Atomic SubSystem: '<S37>/Edge Falling with Resetable Delay' */
    /* Logic: '<S41>/AND' incorporates:
     *  Logic: '<S41>/OR1'
     *  UnitDelay: '<S43>/Unit Delay'
     */
    rtb_AND_ix = ((!rtb_NOT_i) && (ADCR_ac_DW.UnitDelay_DSTATE_f2));

    /* Switch: '<S43>/Switch3' incorporates:
     *  UnitDelay: '<S43>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_f2 = rtb_NOT_i;

    /* End of Outputs for SubSystem: '<S37>/Edge Falling with Resetable Delay' */

    /* Switch: '<S37>/Switch' */
    if (rtb_AND_ix)
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Constant: '<S23>/Calib'
         */
        rtb_Multiplication3 = KeADCR_t_ClchXMinSyncTurnOffDelay;
    }
    else
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Constant: '<S12>/Calib'
         *  Constant: '<S37>/Constant Value1'
         *  MinMax: '<S37>/Minimum'
         *  Sum: '<S37>/Summation'
         *  UnitDelay: '<S42>/Unit Delay'
         */
        rtb_Multiplication3 = fmaxf(ADCR_ac_DW.UnitDelay_DSTATE_i -
            HeADCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S37>/Switch' */

    /* Logic: '<S37>/AND' incorporates:
     *  Constant: '<S37>/Constant Value2'
     *  RelationalOperator: '<S37>/Greater  Than'
     */
    rtb_NOT_i = (rtb_NOT_i || (rtb_Multiplication3 > 0.0F));

    /* Switch: '<S42>/Switch3' incorporates:
     *  UnitDelay: '<S42>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_i = rtb_Multiplication3;

    /* End of Outputs for SubSystem: '<S17>/Turn Off Delay Time with Resetable delay' */

    /* If: '<S17>/If' incorporates:
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Constant: '<S30>/Constant'
     *  Constant: '<S31>/Constant'
     *  Constant: '<S32>/Constant'
     *  Logic: '<S17>/Logical1'
     *  Logic: '<S17>/Logical2'
     *  Logic: '<S17>/Logical3'
     *  Logic: '<S17>/Logical4'
     *  RelationalOperator: '<S17>/Comparison1'
     *  RelationalOperator: '<S17>/Comparison2'
     *  RelationalOperator: '<S17>/Comparison3'
     *  RelationalOperator: '<S17>/Comparison4'
     *  RelationalOperator: '<S17>/Comparison6'
     */
    if (((((uint32)ADCR_ac_B.DataTypeConversion_j) == CeADCR_e_Closed) ||
            ((((uint32)ADCR_ac_B.DataTypeConversion_j) != CeADCR_e_Open) &&
             (((((uint32)VeADCC_e_WEDLeftCmndMgrSt) ==
                CeADCR_e_ActuateClosedForRetry) || (((uint32)
              VeADCC_e_WEDLeftCmndMgrSt) == CeADCR_e_ActuateOpen)) || (((uint32)
             VeADCC_e_WEDLeftCmndMgrSt) == CeADCR_e_WgglActuateOpen)))) &&
            rtb_NOT_i)
    {
        /* Outputs for IfAction SubSystem: '<S17>/Locked' incorporates:
         *  ActionPort: '<S33>/Action Port'
         */
        ADCR_ac_Locked(&ADCR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S17>/Locked' */
    }
    else if (rtb_NOT_i)
    {
        /* Outputs for IfAction SubSystem: '<S17>/Synched' incorporates:
         *  ActionPort: '<S35>/Action Port'
         */
        ADCR_ac_Synched(&ADCR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S17>/Synched' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S17>/Released' incorporates:
         *  ActionPort: '<S34>/Action Port'
         */
        ADCR_ac_Released(&ADCR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S17>/Released' */
    }

    /* End of If: '<S17>/If' */

    /* DataTypeConversion: '<S14>/DataTypeConversion' incorporates:
     *  Merge: '<S17>/Merge'
     */
    ADCR_ac_B.DataTypeConversion_l = ADCR_ac_B.Merge_l;

    /* Outputs for Atomic SubSystem: '<S18>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S52>/Switch1' incorporates:
     *  Abs: '<S18>/Abs2'
     *  Abs: '<S18>/Abs3'
     *  Constant: '<S12>/Calib'
     *  Constant: '<S21>/Calib'
     *  Constant: '<S26>/Calib'
     *  Constant: '<S27>/Calib'
     *  Constant: '<S52>/Constant Value4'
     *  DataTypeConversion: '<S16>/Data Type Conversion2'
     *  Logic: '<S18>/AND'
     *  MinMax: '<S52>/Maximum'
     *  RelationalOperator: '<S18>/Greater  Than1'
     *  RelationalOperator: '<S18>/Greater  Than4'
     *  Selector: '<S16>/Selector2'
     *  Selector: '<S16>/Selector3'
     *  Sum: '<S52>/Subtraction'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    if ((fabsf(VeADCC_n_WEDClchYSlipAct) > KaADCR_n_ClchYMaxSyncSlip
            [(ADCR_ac_B.DataTypeConversion_m)]) || (fabsf
            (VeADCC_dn_WEDClchXSlipDotAct) > KaADCR_dn_ClchYMaxSyncSlipDot
            [(ADCR_ac_B.DataTypeConversion_m)]))
    {
        ADCR_ac_DW.UnitDelay_DSTATE_em = KeADCR_t_ClchYMinSyncTurnOnDelay;
    }
    else
    {
        ADCR_ac_DW.UnitDelay_DSTATE_em = fmaxf(ADCR_ac_DW.UnitDelay_DSTATE_em -
            HeADCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S52>/Switch1' */

    /* Logic: '<S18>/NOT' incorporates:
     *  Constant: '<S52>/Constant Value2'
     *  RelationalOperator: '<S52>/Greater  Than1'
     *  UnitDelay: '<S52>/Unit Delay'
     */
    rtb_NOT_i = (ADCR_ac_DW.UnitDelay_DSTATE_em <= 0.0F);

    /* End of Outputs for SubSystem: '<S18>/Timer Retrigger Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S18>/Turn Off Delay Time with Resetable delay' */
    /* Outputs for Atomic SubSystem: '<S53>/Edge Falling with Resetable Delay' */
    /* Logic: '<S57>/AND' incorporates:
     *  Logic: '<S57>/OR1'
     *  UnitDelay: '<S59>/Unit Delay'
     */
    rtb_AND_ix = ((!rtb_NOT_i) && (ADCR_ac_DW.UnitDelay_DSTATE_bt));

    /* Update for UnitDelay: '<S59>/Unit Delay' incorporates:
     *  Switch: '<S59>/Switch3'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_bt = rtb_NOT_i;

    /* End of Outputs for SubSystem: '<S53>/Edge Falling with Resetable Delay' */

    /* Switch: '<S53>/Switch' */
    if (rtb_AND_ix)
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Constant: '<S25>/Calib'
         */
        rtb_Multiplication3 = KeADCR_t_ClchYMinSyncTurnOffDelay;
    }
    else
    {
        /* Switch: '<S53>/Switch' incorporates:
         *  Constant: '<S12>/Calib'
         *  Constant: '<S53>/Constant Value1'
         *  MinMax: '<S53>/Minimum'
         *  Sum: '<S53>/Summation'
         *  UnitDelay: '<S58>/Unit Delay'
         */
        rtb_Multiplication3 = fmaxf(ADCR_ac_DW.UnitDelay_DSTATE_j2 -
            HeADCR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S53>/Switch' */

    /* Logic: '<S53>/AND' incorporates:
     *  Constant: '<S53>/Constant Value2'
     *  RelationalOperator: '<S53>/Greater  Than'
     */
    rtb_NOT_i = (rtb_NOT_i || (rtb_Multiplication3 > 0.0F));

    /* Switch: '<S58>/Switch3' incorporates:
     *  UnitDelay: '<S58>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_j2 = rtb_Multiplication3;

    /* End of Outputs for SubSystem: '<S18>/Turn Off Delay Time with Resetable delay' */

    /* If: '<S18>/If' incorporates:
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Logic: '<S18>/Logical1'
     *  Logic: '<S18>/Logical2'
     *  Logic: '<S18>/Logical3'
     *  Logic: '<S18>/Logical4'
     *  RelationalOperator: '<S18>/Comparison1'
     *  RelationalOperator: '<S18>/Comparison2'
     *  RelationalOperator: '<S18>/Comparison3'
     *  RelationalOperator: '<S18>/Comparison4'
     *  RelationalOperator: '<S18>/Comparison6'
     */
    if (((((uint32)ADCR_ac_B.DataTypeConversion_m) == CeADCR_e_Closed) ||
            ((((uint32)ADCR_ac_B.DataTypeConversion_m) != CeADCR_e_Open) &&
             (((((uint32)VeADCC_e_WEDRightCmndMgrSt) ==
                CeADCR_e_ActuateClosedForRetry) || (((uint32)
              VeADCC_e_WEDRightCmndMgrSt) == CeADCR_e_ActuateOpen)) || (((uint32)
             VeADCC_e_WEDRightCmndMgrSt) == CeADCR_e_WgglActuateOpen)))) &&
            rtb_NOT_i)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Locked' incorporates:
         *  ActionPort: '<S49>/Action Port'
         */
        ADCR_ac_Locked(&ADCR_ac_B.Merge_e);

        /* End of Outputs for SubSystem: '<S18>/Locked' */
    }
    else if (rtb_NOT_i)
    {
        /* Outputs for IfAction SubSystem: '<S18>/Synched' incorporates:
         *  ActionPort: '<S51>/Action Port'
         */
        ADCR_ac_Synched(&ADCR_ac_B.Merge_e);

        /* End of Outputs for SubSystem: '<S18>/Synched' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S18>/Released' incorporates:
         *  ActionPort: '<S50>/Action Port'
         */
        ADCR_ac_Released(&ADCR_ac_B.Merge_e);

        /* End of Outputs for SubSystem: '<S18>/Released' */
    }

    /* End of If: '<S18>/If' */

    /* DataTypeConversion: '<S15>/DataTypeConversion' incorporates:
     *  Merge: '<S18>/Merge'
     */
    ADCR_ac_B.DataTypeConversion_m0 = ADCR_ac_B.Merge_e;

    /* Logic: '<S16>/Logical Operator' incorporates:
     *  Constant: '<S19>/Constant'
     *  RelationalOperator: '<S16>/Relational Operator'
     *  RelationalOperator: '<S16>/Relational Operator1'
     */
    ADCR_ac_B.LogicalOperator_d = ((((uint32)ADCR_ac_B.Merge_l) ==
        CeADCR_e_Locked) && (CeADCR_e_Locked == ((uint32)ADCR_ac_B.Merge_e)));

    /* End of Outputs for SubSystem: '<S1>/ADCC_AWDClchStatDet' */

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_WEDCmndCtrls' */
    /* RelationalOperator: '<S144>/Relational Operator' incorporates:
     *  Abs: '<S144>/Abs'
     *  Constant: '<S152>/Calib'
     *  Sum: '<S144>/Sum'
     *  UnitDelay: '<S144>/Unit Delay'
     */
    rtb_NOT_i = (fabsf(rtb_TmpSignalConversionAtVeADAR_L_LftSln -
                       ADCR_ac_DW.UnitDelay_DSTATE_egc) <=
                 KeADCR_L_WEDPosnStckThrsh);

    /* RelationalOperator: '<S144>/Relational Operator1' incorporates:
     *  Constant: '<S151>/Constant'
     *  DataStoreRead: '<S144>/Data Store Read'
     */
    rtb_RelationalOperator1_la = (((uint32)VeADCR_e_AWDDiscCurrSt_DS) >
        CeADCR_e_AWDLocked);

    /* Outputs for Atomic SubSystem: '<S144>/EdgeRising' */
    /* Logic: '<S150>/OR1' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_OR1_m0 = !ADCR_ac_DW.UnitDelay_DSTATE_gy;

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    ADCR_ac_DW.UnitDelay_DSTATE_gy = rtb_RelationalOperator1_la;

    /* End of Outputs for SubSystem: '<S144>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S144>/Turn On Delay Time with Resetable delay' */
    /* Logic: '<S144>/Logical Operator1' incorporates:
     *  Logic: '<S161>/AND'
     *  Logic: '<S161>/OR1'
     */
    rtb_AND_ix = !rtb_NOT_i;

    /* End of Outputs for SubSystem: '<S144>/Turn On Delay Time with Resetable delay' */

    /* Outputs for Atomic SubSystem: '<S144>/EdgeRising' */
    /* Logic: '<S144>/Logical Operator2' incorporates:
     *  Logic: '<S144>/Logical Operator1'
     *  Logic: '<S150>/AND'
     */
    rtb_RelationalOperator1_la = (rtb_AND_ix || (rtb_RelationalOperator1_la &&
        rtb_OR1_m0));

    /* End of Outputs for SubSystem: '<S144>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S144>/Turn On Delay Time with Resetable delay' */
    /* Outputs for Atomic SubSystem: '<S161>/EdgeRising with resetable delay' */
    /* Logic: '<S162>/AND' incorporates:
     *  Logic: '<S162>/OR1'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    rtb_OR1_m0 = (rtb_NOT_i && (!ADCR_ac_DW.UnitDelay_DSTATE_f3));

    /* Switch: '<S164>/Switch1' */
    if (rtb_RelationalOperator1_la)
    {
        /* Update for UnitDelay: '<S162>/Unit Delay' incorporates:
         *  Constant: '<S162>/Constant1'
         *  Switch: '<S164>/Switch1'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_f3 = false;
    }
    else
    {
        /* Update for UnitDelay: '<S162>/Unit Delay' incorporates:
         *  Switch: '<S164>/Switch1'
         *  UnitDelay: '<S164>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_f3 = ADCR_ac_DW.UnitDelay_DSTATE_ot;
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Switch: '<S164>/Switch3' incorporates:
     *  UnitDelay: '<S164>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_ot = ((!rtb_RelationalOperator1_la) && rtb_NOT_i);

    /* End of Outputs for SubSystem: '<S161>/EdgeRising with resetable delay' */

    /* Switch: '<S161>/Switch1' incorporates:
     *  Logic: '<S161>/OR'
     *  Switch: '<S163>/Switch1'
     */
    if (rtb_AND_ix || rtb_OR1_m0)
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value1'
         */
        rtb_Multiplication3 = 0.0F;
    }
    else
    {
        if (rtb_RelationalOperator1_la)
        {
            /* Switch: '<S163>/Switch1' incorporates:
             *  Constant: '<S161>/Constant1'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_mt = 0.0F;
        }

        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S12>/Calib'
         *  Constant: '<S160>/Calib'
         *  MinMax: '<S161>/Minimum'
         *  Sum: '<S161>/Summation'
         */
        rtb_Multiplication3 = fminf(KeADCR_t_WEDPsnStckDly, HeADCR_t_MedTEB_dT +
            ADCR_ac_DW.UnitDelay_DSTATE_mt);
    }

    /* End of Switch: '<S161>/Switch1' */
    /* End of Outputs for SubSystem: '<S144>/Turn On Delay Time with Resetable delay' */
    /* End of Outputs for SubSystem: '<S1>/ADCC_WEDCmndCtrls' */

    /* Inport: '<Root>/VeRTMR_e_WEDLearningProcedure' */
    (void)Rte_Read_VeRTMR_e_WEDLearningProcedure_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_WEDCmndCtrls' */
    /* Outputs for Atomic SubSystem: '<S144>/Turn On Delay Time with Resetable delay' */
    /* Switch: '<S163>/Switch3' */
    if (rtb_RelationalOperator1_la)
    {
        /* Switch: '<S163>/Switch1' incorporates:
         *  Constant: '<S161>/Constant1'
         *  UnitDelay: '<S163>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_mt = 0.0F;
    }
    else
    {
        /* Switch: '<S163>/Switch1' incorporates:
         *  UnitDelay: '<S163>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_mt = rtb_Multiplication3;
    }

    /* End of Switch: '<S163>/Switch3' */

    /* Logic: '<S144>/Logical Operator' incorporates:
     *  Constant: '<S160>/Calib'
     *  Logic: '<S161>/AND'
     *  RelationalOperator: '<S161>/Greater  Than'
     */
    rtb_AND_ix = (rtb_AND_ix || (rtb_Multiplication3 < KeADCR_t_WEDPsnStckDly));

    /* End of Outputs for SubSystem: '<S144>/Turn On Delay Time with Resetable delay' */

    /* RelationalOperator: '<S10>/Relational Operator' incorporates:
     *  Constant: '<S148>/Constant'
     *  Inport: '<Root>/VeRTMR_e_WEDLearningProcedure'
     */
    rtb_NOT_i = (((uint32)tmpRead_2) == CeRTMR_e_WED_Active);

    /* End of Outputs for SubSystem: '<S1>/ADCC_WEDCmndCtrls' */

    /* Inport: '<Root>/VeADIR_b_LftWEDClosingFail' */
    /* Gateway: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
    /* During: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
    (void)Rte_Read_VeADIR_b_LftWEDClosingFail_Value(&rtb_RelationalOperator_n);

    /* Inport: '<Root>/VeADIR_b_LftWEDOpeningFail' */
    (void)Rte_Read_VeADIR_b_LftWEDOpeningFail_Value(&tmpRead_1);

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_WEDCmndCtrls' */
    /* Chart: '<S144>/ADCC_WEDStatCmndMgr' incorporates:
     *  Constant: '<S153>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read'
     *  DataStoreRead: '<S10>/Data Store Read1'
     *  Inport: '<Root>/VeADAR_b_CoolDownActiveLftWED'
     *  Selector: '<S9>/Selector'
     *  SignalConversion generated from: '<S1>/VeHSER_e_AWDStatDsrd'
     */
    if (((uint32)ADCR_ac_DW.is_active_c1_sInkjYmOpEcRAtoBuR6O62C_ADC) == 0U)
    {
        /* Entry: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
        ADCR_ac_DW.is_active_c1_sInkjYmOpEcRAtoBuR6O62C_ADC = 1U;

        /* Entry Internal: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
        /* Transition: '<S149>:869' */
        /*  Stateflow Init */
        /*  Stateflow Init */
        if (rtb_RelationalOperator_n && tmpRead_1)
        {
            /* Transition: '<S149>:875' */
            /* Transition: '<S149>:876' */
            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                ADCR_ac_IN_StuckInMiddle;
            ADCR_ac_DW.tp_StuckInMiddle_l = 1U;

            /* Entry 'StuckInMiddle': '<S149>:816' */
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_StuckInMiddle;

            /*  Reset retry counter when in stuck middle */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_LeftEnblWggl = false;
        }
        else
        {
            /* Transition: '<S149>:877' */
            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                ADCR_ac_IN_Init;

            /* Entry 'Init': '<S149>:758' */
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;

            /*  LeADCC_b_InhbCtrlrShtdwn = false;
               Reset the Retry Counter */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

            /*  Reset the closing/opening timer */
            VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
            VeADCC_t_WEDLeftOpngMgrStTmr = 0.0F;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_WEDCmndInit;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr_k = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_LeftEnblWggl = false;
        }
    }
    else
    {
        (void)Rte_Read_VeADAR_b_CoolDownActiveLftWED_Value
            (&rtb_RelationalOperator1_i);
        guard1 = false;
        guard2 = false;
        switch (ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt)
        {
          case ADCR_ac_IN_ActuateClosed:
            ADCR_ac_ActuateClosed(&rtb_AND_ix, &rtb_NOT_i,
                                  &ADCR_ac_B.DataTypeConversion_j);
            break;

          case ADCR_ac_IN_ActuateOpen:
            ADCR_ac_ActuateOpen(&rtb_AND_ix, &rtb_NOT_i,
                                &ADCR_ac_B.DataTypeConversion_j);
            break;

          case ADCR_ac_IN_Closed:
            /* During 'Closed': '<S149>:720' */
            /*  Check if WED has opened */
            if (((uint32)ADCR_ac_B.DataTypeConversion_j) != CeADCR_e_Closed)
            {
                /* Transition: '<S149>:891' */
                /*  WED Desired closed, Clutch torque  */
                if (((((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Closed) &&
                     (VeADCC_b_AWDClchOffloaded_DS)) && (((uint32)
                        ADCR_ac_B.Merge_l) >= CeADCR_e_Synched))
                {
                    /* Transition: '<S149>:893' */
                    /* Exit Internal 'Closed': '<S149>:720' */
                    ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateClosed;

                    /* Entry Internal 'ActuateClosed': '<S149>:721' */
                    /* Transition: '<S149>:711' */
                    ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_ActuateToClosed;

                    /* Entry 'ActuateToClosed': '<S149>:710' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_LeftEnblWggl = false;

                    /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                    /* Transition: '<S149>:957' */
                    if (rtb_RelationalOperator1_i || rtb_NOT_i)
                    {
                        /* Transition: '<S149>:960' */
                        /* Transition: '<S149>:992' */
                        ADCR_ac_DW.is_ActuateToClosed_h =
                            ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S149>:962' */
                        ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerActive;
                    }
                }
                else
                {
                    /* Transition: '<S149>:894' */
                    /* Else */
                    /* Transition: '<S149>:986' */
                    /* Exit Internal 'Closed': '<S149>:720' */
                    ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_UnintentedOpen;

                    /* Entry 'UnintentedOpen': '<S149>:920' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;

                    /*  LeADCC_b_InhbCtrlrShtdwn = KeADCR_b_WEDInhbShtdwnWhnOpen; */
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_UnintentedOpen;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_LeftEnblWggl = false;

                    /*  Reset retry counter when in steady state open */
                    ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
                    ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;
                }
            }
            else
            {
                /* Transition: '<S149>:714' */
                /*  WED Ready to Open */
                if (((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Open)
                {
                    /* Transition: '<S149>:739' */
                    /* Exit Internal 'Closed': '<S149>:720' */
                    ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen(&rtb_NOT_i);
                }
                else if (((uint32)ADCR_ac_DW.is_Closed_c) ==
                         ADCR_ac_IN_EnblWgglDurngClsd)
                {
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_WgglClosed;

                    /* During 'EnblWgglDurngClsd': '<S149>:906' */
                    if ((((uint32)
                            ADCR_ac_B.TmpSignalConversionAtVeHSER_e_AWDStatDsr)
                            != CeADCR_e_Open) || (!KeADCR_b_EnblWgglDurngClsd))
                    {
                        /* Transition: '<S149>:907' */
                        ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_SS_Closed;

                        /* Entry 'SS_Closed': '<S149>:904' */
                        VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
                        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSClosed;

                        /*  Reset retry counter when in steady state closed */
                        ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
                        ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;
                        VeADCC_b_LeftEnblWggl = false;
                    }
                }
                else
                {
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSClosed;

                    /* During 'SS_Closed': '<S149>:904' */
                    if (((((uint32)
                            ADCR_ac_B.TmpSignalConversionAtVeHSER_e_AWDStatDsr) ==
                          CeADCR_e_Open) && (VeADCC_b_AWDClchOffloaded_DS)) &&
                            (KeADCR_b_EnblWgglDurngClsd))
                    {
                        /* Transition: '<S149>:900' */
                        ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_EnblWgglDurngClsd;

                        /* Entry 'EnblWgglDurngClsd': '<S149>:906' */
                        VeADCC_b_LeftEnblWggl = true;
                        VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_WgglClosed;
                    }
                }
            }
            break;

          case ADCR_ac_IN_Init:
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_WEDCmndInit;

            /* During 'Init': '<S149>:758' */
            /*  Check if WED is Open */
            switch (ADCR_ac_B.DataTypeConversion_j)
            {
              case CeADCR_e_Open:
                /* Transition: '<S149>:727' */
                ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                    ADCR_ac_IN_Open;

                /* Entry 'Open': '<S149>:724' */
                VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
                VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSOpen;

                /*  Reset retry counter when in steady state open */
                ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
                ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

                /*  Reset Wiggle Enble */
                VeADCC_b_LeftEnblWggl = false;
                break;

              case CeADCR_e_Closed:
                /*  Check if WED is Closed */
                /* Transition: '<S149>:729' */
                /* Transition: '<S149>:730' */
                ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                    ADCR_ac_IN_Closed;

                /* Entry Internal 'Closed': '<S149>:720' */
                /* Transition: '<S149>:905' */
                ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_SS_Closed;

                /* Entry 'SS_Closed': '<S149>:904' */
                VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
                VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSClosed;

                /*  Reset retry counter when in steady state closed */
                ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
                ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;
                VeADCC_b_LeftEnblWggl = false;
                break;

              default:
                /* Transition: '<S149>:879' */
                /* Transition: '<S149>:884' */
                /*  WED Ready to close */
                switch (VeADCC_e_WEDLeftStatDsrd_DS)
                {
                  case CeADCR_e_Closed:
                    /* Transition: '<S149>:737' */
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateClosed;

                    /* Entry Internal 'ActuateClosed': '<S149>:721' */
                    /* Transition: '<S149>:711' */
                    ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_ActuateToClosed;

                    /* Entry 'ActuateToClosed': '<S149>:710' */
                    VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_LeftEnblWggl = false;

                    /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                    /* Transition: '<S149>:957' */
                    if (rtb_RelationalOperator1_i || rtb_NOT_i)
                    {
                        /* Transition: '<S149>:960' */
                        /* Transition: '<S149>:992' */
                        ADCR_ac_DW.is_ActuateToClosed_h =
                            ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S149>:962' */
                        ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerActive;
                    }
                    break;

                  case CeADCR_e_Open:
                    /* Transition: '<S149>:880' */
                    /* Transition: '<S149>:882' */
                    /*  WED Ready to Open */
                    /* Transition: '<S149>:739' */
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen(&rtb_NOT_i);
                    break;

                  default:
                    /* no actions */
                    break;
                }
                break;
            }
            break;

          case ADCR_ac_IN_Open:
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSOpen;

            /* During 'Open': '<S149>:724' */
            /* Transition: '<S149>:716' */
            /*  WED Ready to close */
            if (((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Closed)
            {
                /* Transition: '<S149>:737' */
                ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                    ADCR_ac_IN_ActuateClosed;

                /* Entry Internal 'ActuateClosed': '<S149>:721' */
                /* Transition: '<S149>:711' */
                ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_ActuateToClosed;

                /* Entry 'ActuateToClosed': '<S149>:710' */
                VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                /*  Reset state timer and update state */
                VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                /*  Reset Wiggle Enble */
                VeADCC_b_LeftEnblWggl = false;

                /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                /* Transition: '<S149>:957' */
                if (rtb_RelationalOperator1_i || rtb_NOT_i)
                {
                    /* Transition: '<S149>:960' */
                    /* Transition: '<S149>:992' */
                    ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerInactive;
                }
                else
                {
                    /* Transition: '<S149>:962' */
                    ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerActive;
                }
            }
            break;

          case ADCR_ac_IN_StuckInMiddle:
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_StuckInMiddle;

            /* During 'StuckInMiddle': '<S149>:816' */
            /*  check if the WED is open */
            if (((uint32)ADCR_ac_B.DataTypeConversion_j) == CeADCR_e_Open)
            {
                /* Transition: '<S149>:859' */
                /* Transition: '<S149>:856' */
                guard1 = true;
            }
            else
            {
                /*  check if the WED is closed */
                if (((uint32)ADCR_ac_B.DataTypeConversion_j) == CeADCR_e_Closed)
                {
                    /* Transition: '<S149>:863' */
                    /* Transition: '<S149>:857' */
                    guard2 = true;
                }
                else
                {
                    /*  check if the WED opening fail flag is cleared */
                    if ((!tmpRead_1) && (((uint32)VeADCC_e_WEDLeftStatDsrd_DS) ==
                                         CeADCR_e_Open))
                    {
                        /* Transition: '<S149>:864' */
                        /*  WED Ready to Open */
                        /* Transition: '<S149>:718' */
                        /*  Check if WED has opened */
                        if (((uint32)ADCR_ac_B.DataTypeConversion_j) ==
                                CeADCR_e_Open)
                        {
                            /* Transition: '<S149>:742' */
                            guard1 = true;
                        }
                        else
                        {
                            /* Transition: '<S149>:743' */
                            ADCR_ac_DW.tp_StuckInMiddle_l = 0U;
                            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                                ADCR_ac_IN_ActuateOpen;
                            ADCR_ac_enter_internal_ActuateOpen(&rtb_NOT_i);
                        }
                    }
                    else
                    {
                        /*  check if the WED closing fail is cleared */
                        if ((!rtb_RelationalOperator_n) && (((uint32)
                                VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Closed))
                        {
                            /* Transition: '<S149>:866' */
                            /*  WED Ready to close */
                            /* Transition: '<S149>:723' */
                            /*  Check if WED has Cloased */
                            if (((uint32)ADCR_ac_B.DataTypeConversion_j) ==
                                    CeADCR_e_Closed)
                            {
                                /* Transition: '<S149>:821' */
                                guard2 = true;
                            }
                            else
                            {
                                /* Transition: '<S149>:822' */
                                ADCR_ac_DW.tp_StuckInMiddle_l = 0U;
                                ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt
                                    = ADCR_ac_IN_ActuateClosed;

                                /* Entry Internal 'ActuateClosed': '<S149>:721' */
                                /* Transition: '<S149>:711' */
                                ADCR_ac_DW.is_ActuateClosed_k =
                                    ADCR_ac_IN_ActuateToClosed;

                                /* Entry 'ActuateToClosed': '<S149>:710' */
                                VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                                /*  Reset state timer and update state */
                                VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                                VeADCC_e_WEDLeftCmndMgrSt =
                                    CeADCR_e_ActuateClosed;

                                /*  Reset Wiggle Enble */
                                VeADCC_b_LeftEnblWggl = false;

                                /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                                /* Transition: '<S149>:957' */
                                if (rtb_RelationalOperator1_i || rtb_NOT_i)
                                {
                                    /* Transition: '<S149>:960' */
                                    /* Transition: '<S149>:992' */
                                    ADCR_ac_DW.is_ActuateToClosed_h =
                                        ADCR_ac_IN_TimerInactive;
                                }
                                else
                                {
                                    /* Transition: '<S149>:962' */
                                    ADCR_ac_DW.is_ActuateToClosed_h =
                                        ADCR_ac_IN_TimerActive;
                                }
                            }
                        }
                    }
                }
            }
            break;

          default:
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_UnintentedOpen;

            /* During 'UnintentedOpen': '<S149>:920' */
            /*  WED Desired closed, Clutch torque  */
            if (((((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Closed) &&
                    (VeADCC_b_AWDClchOffloaded_DS)) && (((uint32)
                    ADCR_ac_B.Merge_l) >= CeADCR_e_Synched))
            {
                /* Transition: '<S149>:924' */
                /* Transition: '<S149>:988' */
                ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                    ADCR_ac_IN_ActuateClosed;

                /* Entry Internal 'ActuateClosed': '<S149>:721' */
                /* Transition: '<S149>:711' */
                ADCR_ac_DW.is_ActuateClosed_k = ADCR_ac_IN_ActuateToClosed;

                /* Entry 'ActuateToClosed': '<S149>:710' */
                VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;

                /*  Reset state timer and update state */
                VeADCC_t_WEDLeftClsngMgrStTmr = 0.0F;
                VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_ActuateClosed;

                /*  Reset Wiggle Enble */
                VeADCC_b_LeftEnblWggl = false;

                /* Entry Internal 'ActuateToClosed': '<S149>:710' */
                /* Transition: '<S149>:957' */
                if (rtb_RelationalOperator1_i || rtb_NOT_i)
                {
                    /* Transition: '<S149>:960' */
                    /* Transition: '<S149>:992' */
                    ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerInactive;
                }
                else
                {
                    /* Transition: '<S149>:962' */
                    ADCR_ac_DW.is_ActuateToClosed_h = ADCR_ac_IN_TimerActive;
                }
            }
            else
            {
                /* Transition: '<S149>:925' */
                /* Transition: '<S149>:984' */
                /*  WED Ready to Open */
                if (((uint32)VeADCC_e_WEDLeftStatDsrd_DS) == CeADCR_e_Open)
                {
                    /* Transition: '<S149>:739' */
                    ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen(&rtb_NOT_i);
                }
            }
            break;
        }

        if (guard2)
        {
            ADCR_ac_DW.tp_StuckInMiddle_l = 0U;
            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                ADCR_ac_IN_Closed;

            /* Entry Internal 'Closed': '<S149>:720' */
            /* Transition: '<S149>:905' */
            ADCR_ac_DW.is_Closed_c = ADCR_ac_IN_SS_Closed;

            /* Entry 'SS_Closed': '<S149>:904' */
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndClsd;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSClosed;

            /*  Reset retry counter when in steady state closed */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;
            VeADCC_b_LeftEnblWggl = false;
        }

        if (guard1)
        {
            ADCR_ac_DW.tp_StuckInMiddle_l = 0U;
            ADCR_ac_DW.is_c1_sInkjYmOpEcRAtoBuR6O62C_ADCC_WEDSt =
                ADCR_ac_IN_Open;

            /* Entry 'Open': '<S149>:724' */
            VeADCC_e_WEDLeftCmndStat = CeADCR_e_CmndOpen;
            VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSOpen;

            /*  Reset retry counter when in steady state open */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d = 0U;

            /*  Reset Wiggle Enble */
            VeADCC_b_LeftEnblWggl = false;
        }
    }

    /* End of Chart: '<S144>/ADCC_WEDStatCmndMgr' */

    /* RelationalOperator: '<S145>/Relational Operator' incorporates:
     *  Abs: '<S145>/Abs'
     *  Constant: '<S168>/Calib'
     *  Sum: '<S145>/Sum'
     *  UnitDelay: '<S145>/Unit Delay'
     */
    rtb_RelationalOperator_n = (fabsf(rtb_TmpSignalConversionAtVeADAR_L_RtSlnd -
        ADCR_ac_DW.UnitDelay_DSTATE_o4) <= KeADCR_L_WEDPosnStckThrsh);

    /* RelationalOperator: '<S145>/Relational Operator1' incorporates:
     *  Constant: '<S167>/Constant'
     *  DataStoreRead: '<S144>/Data Store Read'
     *  RelationalOperator: '<S144>/Relational Operator1'
     */
    rtb_RelationalOperator1_i = (((uint32)VeADCR_e_AWDDiscCurrSt_DS) >
        CeADCR_e_AWDLocked);

    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
    /* Logic: '<S166>/OR1' incorporates:
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_AND_ix = !ADCR_ac_DW.UnitDelay_DSTATE_nj;

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    ADCR_ac_DW.UnitDelay_DSTATE_nj = rtb_RelationalOperator1_i;

    /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S145>/Turn On Delay Time with Resetable delay' */
    /* Logic: '<S145>/Logical Operator1' incorporates:
     *  Logic: '<S177>/AND'
     *  Logic: '<S177>/OR1'
     */
    tmpRead_1 = !rtb_RelationalOperator_n;

    /* End of Outputs for SubSystem: '<S145>/Turn On Delay Time with Resetable delay' */

    /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
    /* Logic: '<S145>/Logical Operator2' incorporates:
     *  Logic: '<S145>/Logical Operator1'
     *  Logic: '<S166>/AND'
     */
    rtb_RelationalOperator1_i = (tmpRead_1 || (rtb_RelationalOperator1_i &&
        rtb_AND_ix));

    /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S145>/Turn On Delay Time with Resetable delay' */
    /* Outputs for Atomic SubSystem: '<S177>/EdgeRising with resetable delay' */
    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    rtb_AND_ix = (rtb_RelationalOperator_n && (!ADCR_ac_DW.UnitDelay_DSTATE_ox));

    /* Switch: '<S180>/Switch1' */
    if (rtb_RelationalOperator1_i)
    {
        /* Update for UnitDelay: '<S178>/Unit Delay' incorporates:
         *  Constant: '<S178>/Constant1'
         *  Switch: '<S180>/Switch1'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_ox = false;
    }
    else
    {
        /* Update for UnitDelay: '<S178>/Unit Delay' incorporates:
         *  Switch: '<S180>/Switch1'
         *  UnitDelay: '<S180>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_ox = ADCR_ac_DW.UnitDelay_DSTATE_kk;
    }

    /* End of Switch: '<S180>/Switch1' */

    /* Switch: '<S180>/Switch3' incorporates:
     *  UnitDelay: '<S180>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_kk = ((!rtb_RelationalOperator1_i) &&
        rtb_RelationalOperator_n);

    /* End of Outputs for SubSystem: '<S177>/EdgeRising with resetable delay' */

    /* Switch: '<S177>/Switch1' incorporates:
     *  Logic: '<S177>/OR'
     *  Switch: '<S179>/Switch1'
     */
    if (tmpRead_1 || rtb_AND_ix)
    {
        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S177>/Constant Value1'
         */
        rtb_Multiplication3 = 0.0F;
    }
    else
    {
        if (rtb_RelationalOperator1_i)
        {
            /* Switch: '<S179>/Switch1' incorporates:
             *  Constant: '<S177>/Constant1'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
        }

        /* Switch: '<S177>/Switch1' incorporates:
         *  Constant: '<S12>/Calib'
         *  Constant: '<S176>/Calib'
         *  MinMax: '<S177>/Minimum'
         *  Sum: '<S177>/Summation'
         */
        rtb_Multiplication3 = fminf(KeADCR_t_WEDPsnStckDly, HeADCR_t_MedTEB_dT +
            ADCR_ac_DW.UnitDelay_DSTATE_j);
    }

    /* End of Switch: '<S177>/Switch1' */

    /* Switch: '<S179>/Switch3' */
    if (rtb_RelationalOperator1_i)
    {
        /* Switch: '<S179>/Switch1' incorporates:
         *  Constant: '<S177>/Constant1'
         *  UnitDelay: '<S179>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        /* Switch: '<S179>/Switch1' incorporates:
         *  UnitDelay: '<S179>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_j = rtb_Multiplication3;
    }

    /* End of Switch: '<S179>/Switch3' */

    /* Logic: '<S145>/Logical Operator' incorporates:
     *  Constant: '<S176>/Calib'
     *  Logic: '<S177>/AND'
     *  RelationalOperator: '<S177>/Greater  Than'
     */
    rtb_RelationalOperator_n = (tmpRead_1 || (rtb_Multiplication3 <
        KeADCR_t_WEDPsnStckDly));

    /* End of Outputs for SubSystem: '<S145>/Turn On Delay Time with Resetable delay' */
    /* End of Outputs for SubSystem: '<S1>/ADCC_WEDCmndCtrls' */

    /* Inport: '<Root>/VeADIR_b_RtWEDClosingFail' */
    /* Gateway: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
    /* During: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
    (void)Rte_Read_VeADIR_b_RtWEDClosingFail_Value(&rtb_Logical2_p);

    /* Inport: '<Root>/VeADIR_b_RtWEDOpeningFail' */
    (void)Rte_Read_VeADIR_b_RtWEDOpeningFail_Value(&rtb_OR1_ff);

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_WEDCmndCtrls' */
    /* Chart: '<S145>/ADCC_WEDStatCmndMgr' incorporates:
     *  Constant: '<S169>/Calib'
     *  DataStoreRead: '<S10>/Data Store Read'
     *  DataStoreRead: '<S10>/Data Store Read2'
     *  Inport: '<Root>/VeADAR_b_CoolDownActiveRtWED'
     *  Selector: '<S9>/Selector1'
     *  SignalConversion generated from: '<S1>/VeHSER_e_AWDStatDsrd'
     */
    if (((uint32)ADCR_ac_DW.is_active_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADC) == 0U)
    {
        /* Entry: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
        ADCR_ac_DW.is_active_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADC = 1U;

        /* Entry Internal: ADCC_WEDStatCmndMgr/ADCC_WEDStatCmndMgr */
        /* Transition: '<S165>:869' */
        /*  Stateflow Init */
        /*  Stateflow Init */
        if (rtb_Logical2_p && rtb_OR1_ff)
        {
            /* Transition: '<S165>:875' */
            /* Transition: '<S165>:876' */
            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                ADCR_ac_IN_StuckInMiddle;
            ADCR_ac_DW.tp_StuckInMiddle = 1U;

            /* Entry 'StuckInMiddle': '<S165>:816' */
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_StuckInMiddle;

            /*  Reset retry counter when in stuck middle */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_RtEnblWggl = false;
        }
        else
        {
            /* Transition: '<S165>:877' */
            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                ADCR_ac_IN_Init;

            /* Entry 'Init': '<S165>:758' */
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;

            /*  LeADCC_b_InhbCtrlrShtdwn = false;
               Reset the Retry Counter */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

            /*  Reset the closing/opening timer */
            VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
            VeADCC_t_WEDRightOpngMgrStTmr = 0.0F;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_WEDCmndInit;

            /*  Reset Wiggle Timer */
            ADCR_ac_B.LeADCC_t_WEDOpngWgglTmr = 0.0F;

            /*  Reset Wiggle Enble */
            VeADCC_b_RtEnblWggl = false;
        }
    }
    else
    {
        (void)Rte_Read_VeADAR_b_CoolDownActiveRtWED_Value(&rtb_Logical1_e4);
        guard1 = false;
        guard2 = false;
        switch (ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt)
        {
          case ADCR_ac_IN_ActuateClosed:
            ADCR_ac_ActuateClosed_o(&rtb_RelationalOperator_n, &rtb_NOT_i,
                                    &ADCR_ac_B.DataTypeConversion_m);
            break;

          case ADCR_ac_IN_ActuateOpen:
            ADCR_ac_ActuateOpen_b(&rtb_RelationalOperator_n, &rtb_NOT_i,
                                  &ADCR_ac_B.DataTypeConversion_m);
            break;

          case ADCR_ac_IN_Closed:
            /* During 'Closed': '<S165>:720' */
            /*  Check if WED has opened */
            if (((uint32)ADCR_ac_B.DataTypeConversion_m) != CeADCR_e_Closed)
            {
                /* Transition: '<S165>:891' */
                /*  WED Desired closed, Clutch torque  */
                if (((((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Closed)
                     && (VeADCC_b_AWDClchOffloaded_DS)) && (((uint32)
                        ADCR_ac_B.Merge_e) >= CeADCR_e_Synched))
                {
                    /* Transition: '<S165>:893' */
                    /* Exit Internal 'Closed': '<S165>:720' */
                    ADCR_ac_DW.is_Closed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateClosed;

                    /* Entry Internal 'ActuateClosed': '<S165>:721' */
                    /* Transition: '<S165>:711' */
                    ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_ActuateToClosed;

                    /* Entry 'ActuateToClosed': '<S165>:710' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_RtEnblWggl = false;

                    /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                    /* Transition: '<S165>:957' */
                    if (rtb_Logical1_e4 || rtb_NOT_i)
                    {
                        /* Transition: '<S165>:960' */
                        /* Transition: '<S165>:992' */
                        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S165>:962' */
                        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerActive;
                    }
                }
                else
                {
                    /* Transition: '<S165>:894' */
                    /* Else */
                    /* Transition: '<S165>:986' */
                    /* Exit Internal 'Closed': '<S165>:720' */
                    ADCR_ac_DW.is_Closed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_UnintentedOpen;

                    /* Entry 'UnintentedOpen': '<S165>:920' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;

                    /*  LeADCC_b_InhbCtrlrShtdwn = KeADCR_b_WEDInhbShtdwnWhnOpen; */
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_UnintentedOpen;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_RtEnblWggl = false;

                    /*  Reset retry counter when in steady state open */
                    ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
                    ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;
                }
            }
            else
            {
                /* Transition: '<S165>:714' */
                /*  WED Ready to Open */
                if (((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Open)
                {
                    /* Transition: '<S165>:739' */
                    /* Exit Internal 'Closed': '<S165>:720' */
                    ADCR_ac_DW.is_Closed = ADCR_ac_IN_NO_ACTIVE_CHILD;
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen_h(&rtb_NOT_i);
                }
                else if (((uint32)ADCR_ac_DW.is_Closed) ==
                         ADCR_ac_IN_EnblWgglDurngClsd)
                {
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_WgglClosed;

                    /* During 'EnblWgglDurngClsd': '<S165>:906' */
                    if ((((uint32)
                            ADCR_ac_B.TmpSignalConversionAtVeHSER_e_AWDStatDsr)
                            != CeADCR_e_Open) || (!KeADCR_b_EnblWgglDurngClsd))
                    {
                        /* Transition: '<S165>:907' */
                        ADCR_ac_DW.is_Closed = ADCR_ac_IN_SS_Closed;

                        /* Entry 'SS_Closed': '<S165>:904' */
                        VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
                        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSClosed;

                        /*  Reset retry counter when in steady state closed */
                        ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
                        ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;
                        VeADCC_b_RtEnblWggl = false;
                    }
                }
                else
                {
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSClosed;

                    /* During 'SS_Closed': '<S165>:904' */
                    if (((((uint32)
                            ADCR_ac_B.TmpSignalConversionAtVeHSER_e_AWDStatDsr) ==
                          CeADCR_e_Open) && (VeADCC_b_AWDClchOffloaded_DS)) &&
                            (KeADCR_b_EnblWgglDurngClsd))
                    {
                        /* Transition: '<S165>:900' */
                        ADCR_ac_DW.is_Closed = ADCR_ac_IN_EnblWgglDurngClsd;

                        /* Entry 'EnblWgglDurngClsd': '<S165>:906' */
                        VeADCC_b_RtEnblWggl = true;
                        VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_WgglClosed;
                    }
                }
            }
            break;

          case ADCR_ac_IN_Init:
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_WEDCmndInit;

            /* During 'Init': '<S165>:758' */
            /*  Check if WED is Open */
            switch (ADCR_ac_B.DataTypeConversion_m)
            {
              case CeADCR_e_Open:
                /* Transition: '<S165>:727' */
                ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                    ADCR_ac_IN_Open;

                /* Entry 'Open': '<S165>:724' */
                VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
                VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSOpen;

                /*  Reset retry counter when in steady state open */
                ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
                ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

                /*  Reset Wiggle Enble */
                VeADCC_b_RtEnblWggl = false;
                break;

              case CeADCR_e_Closed:
                /*  Check if WED is Closed */
                /* Transition: '<S165>:729' */
                /* Transition: '<S165>:730' */
                ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                    ADCR_ac_IN_Closed;

                /* Entry Internal 'Closed': '<S165>:720' */
                /* Transition: '<S165>:905' */
                ADCR_ac_DW.is_Closed = ADCR_ac_IN_SS_Closed;

                /* Entry 'SS_Closed': '<S165>:904' */
                VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
                VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSClosed;

                /*  Reset retry counter when in steady state closed */
                ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
                ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;
                VeADCC_b_RtEnblWggl = false;
                break;

              default:
                /* Transition: '<S165>:879' */
                /* Transition: '<S165>:884' */
                /*  WED Ready to close */
                switch (VeADCC_e_WEDRightStatDsrd_DS)
                {
                  case CeADCR_e_Closed:
                    /* Transition: '<S165>:737' */
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateClosed;

                    /* Entry Internal 'ActuateClosed': '<S165>:721' */
                    /* Transition: '<S165>:711' */
                    ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_ActuateToClosed;

                    /* Entry 'ActuateToClosed': '<S165>:710' */
                    VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                    /*  Reset state timer and update state */
                    VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                    /*  Reset Wiggle Enble */
                    VeADCC_b_RtEnblWggl = false;

                    /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                    /* Transition: '<S165>:957' */
                    if (rtb_Logical1_e4 || rtb_NOT_i)
                    {
                        /* Transition: '<S165>:960' */
                        /* Transition: '<S165>:992' */
                        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerInactive;
                    }
                    else
                    {
                        /* Transition: '<S165>:962' */
                        ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerActive;
                    }
                    break;

                  case CeADCR_e_Open:
                    /* Transition: '<S165>:880' */
                    /* Transition: '<S165>:882' */
                    /*  WED Ready to Open */
                    /* Transition: '<S165>:739' */
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen_h(&rtb_NOT_i);
                    break;

                  default:
                    /* no actions */
                    break;
                }
                break;
            }
            break;

          case ADCR_ac_IN_Open:
            VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSOpen;

            /* During 'Open': '<S165>:724' */
            /* Transition: '<S165>:716' */
            /*  WED Ready to close */
            if (((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Closed)
            {
                /* Transition: '<S165>:737' */
                ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                    ADCR_ac_IN_ActuateClosed;

                /* Entry Internal 'ActuateClosed': '<S165>:721' */
                /* Transition: '<S165>:711' */
                ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_ActuateToClosed;

                /* Entry 'ActuateToClosed': '<S165>:710' */
                VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                /*  Reset state timer and update state */
                VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                /*  Reset Wiggle Enble */
                VeADCC_b_RtEnblWggl = false;

                /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                /* Transition: '<S165>:957' */
                if (rtb_Logical1_e4 || rtb_NOT_i)
                {
                    /* Transition: '<S165>:960' */
                    /* Transition: '<S165>:992' */
                    ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerInactive;
                }
                else
                {
                    /* Transition: '<S165>:962' */
                    ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerActive;
                }
            }
            break;

          case ADCR_ac_IN_StuckInMiddle:
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_StuckInMiddle;

            /* During 'StuckInMiddle': '<S165>:816' */
            /*  check if the WED is open */
            if (((uint32)ADCR_ac_B.DataTypeConversion_m) == CeADCR_e_Open)
            {
                /* Transition: '<S165>:859' */
                /* Transition: '<S165>:856' */
                guard1 = true;
            }
            else
            {
                /*  check if the WED is closed */
                if (((uint32)ADCR_ac_B.DataTypeConversion_m) == CeADCR_e_Closed)
                {
                    /* Transition: '<S165>:863' */
                    /* Transition: '<S165>:857' */
                    guard2 = true;
                }
                else
                {
                    /*  check if the WED opening fail flag is cleared */
                    if ((!rtb_OR1_ff) && (((uint32)VeADCC_e_WEDRightStatDsrd_DS)
                                          == CeADCR_e_Open))
                    {
                        /* Transition: '<S165>:864' */
                        /*  WED Ready to Open */
                        /* Transition: '<S165>:718' */
                        /*  Check if WED has opened */
                        if (((uint32)ADCR_ac_B.DataTypeConversion_m) ==
                                CeADCR_e_Open)
                        {
                            /* Transition: '<S165>:742' */
                            guard1 = true;
                        }
                        else
                        {
                            /* Transition: '<S165>:743' */
                            ADCR_ac_DW.tp_StuckInMiddle = 0U;
                            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                                ADCR_ac_IN_ActuateOpen;
                            ADCR_ac_enter_internal_ActuateOpen_h(&rtb_NOT_i);
                        }
                    }
                    else
                    {
                        /*  check if the WED closing fail is cleared */
                        if ((!rtb_Logical2_p) && (((uint32)
                                                   VeADCC_e_WEDRightStatDsrd_DS)
                             == CeADCR_e_Closed))
                        {
                            /* Transition: '<S165>:866' */
                            /*  WED Ready to close */
                            /* Transition: '<S165>:723' */
                            /*  Check if WED has Cloased */
                            if (((uint32)ADCR_ac_B.DataTypeConversion_m) ==
                                    CeADCR_e_Closed)
                            {
                                /* Transition: '<S165>:821' */
                                guard2 = true;
                            }
                            else
                            {
                                /* Transition: '<S165>:822' */
                                ADCR_ac_DW.tp_StuckInMiddle = 0U;
                                ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt
                                    = ADCR_ac_IN_ActuateClosed;

                                /* Entry Internal 'ActuateClosed': '<S165>:721' */
                                /* Transition: '<S165>:711' */
                                ADCR_ac_DW.is_ActuateClosed =
                                    ADCR_ac_IN_ActuateToClosed;

                                /* Entry 'ActuateToClosed': '<S165>:710' */
                                VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                                /*  Reset state timer and update state */
                                VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                                VeADCC_e_WEDRightCmndMgrSt =
                                    CeADCR_e_ActuateClosed;

                                /*  Reset Wiggle Enble */
                                VeADCC_b_RtEnblWggl = false;

                                /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                                /* Transition: '<S165>:957' */
                                if (rtb_Logical1_e4 || rtb_NOT_i)
                                {
                                    /* Transition: '<S165>:960' */
                                    /* Transition: '<S165>:992' */
                                    ADCR_ac_DW.is_ActuateToClosed =
                                        ADCR_ac_IN_TimerInactive;
                                }
                                else
                                {
                                    /* Transition: '<S165>:962' */
                                    ADCR_ac_DW.is_ActuateToClosed =
                                        ADCR_ac_IN_TimerActive;
                                }
                            }
                        }
                    }
                }
            }
            break;

          default:
            VeADCC_e_WEDRightCmndStat = CeADCR_e_NoCmnd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_UnintentedOpen;

            /* During 'UnintentedOpen': '<S165>:920' */
            /*  WED Desired closed, Clutch torque  */
            if (((((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Closed) &&
                    (VeADCC_b_AWDClchOffloaded_DS)) && (((uint32)
                    ADCR_ac_B.Merge_e) >= CeADCR_e_Synched))
            {
                /* Transition: '<S165>:924' */
                /* Transition: '<S165>:988' */
                ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                    ADCR_ac_IN_ActuateClosed;

                /* Entry Internal 'ActuateClosed': '<S165>:721' */
                /* Transition: '<S165>:711' */
                ADCR_ac_DW.is_ActuateClosed = ADCR_ac_IN_ActuateToClosed;

                /* Entry 'ActuateToClosed': '<S165>:710' */
                VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;

                /*  Reset state timer and update state */
                VeADCC_t_WEDRightClsngMgrStTmr = 0.0F;
                VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_ActuateClosed;

                /*  Reset Wiggle Enble */
                VeADCC_b_RtEnblWggl = false;

                /* Entry Internal 'ActuateToClosed': '<S165>:710' */
                /* Transition: '<S165>:957' */
                if (rtb_Logical1_e4 || rtb_NOT_i)
                {
                    /* Transition: '<S165>:960' */
                    /* Transition: '<S165>:992' */
                    ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerInactive;
                }
                else
                {
                    /* Transition: '<S165>:962' */
                    ADCR_ac_DW.is_ActuateToClosed = ADCR_ac_IN_TimerActive;
                }
            }
            else
            {
                /* Transition: '<S165>:925' */
                /* Transition: '<S165>:984' */
                /*  WED Ready to Open */
                if (((uint32)VeADCC_e_WEDRightStatDsrd_DS) == CeADCR_e_Open)
                {
                    /* Transition: '<S165>:739' */
                    ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                        ADCR_ac_IN_ActuateOpen;
                    ADCR_ac_enter_internal_ActuateOpen_h(&rtb_NOT_i);
                }
            }
            break;
        }

        if (guard2)
        {
            ADCR_ac_DW.tp_StuckInMiddle = 0U;
            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                ADCR_ac_IN_Closed;

            /* Entry Internal 'Closed': '<S165>:720' */
            /* Transition: '<S165>:905' */
            ADCR_ac_DW.is_Closed = ADCR_ac_IN_SS_Closed;

            /* Entry 'SS_Closed': '<S165>:904' */
            VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndClsd;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSClosed;

            /*  Reset retry counter when in steady state closed */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;
            VeADCC_b_RtEnblWggl = false;
        }

        if (guard1)
        {
            ADCR_ac_DW.tp_StuckInMiddle = 0U;
            ADCR_ac_DW.is_c1_sXn4mmjZjpGv8vQFqTtfiqH_ADCC_WEDSt =
                ADCR_ac_IN_Open;

            /* Entry 'Open': '<S165>:724' */
            VeADCC_e_WEDRightCmndStat = CeADCR_e_CmndOpen;
            VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSOpen;

            /*  Reset retry counter when in steady state open */
            ADCR_ac_B.LeADCC_i_WEDClsngAttempts = 0U;
            ADCR_ac_B.LeADCC_i_WEDOpngAttempts = 0U;

            /*  Reset Wiggle Enble */
            VeADCC_b_RtEnblWggl = false;
        }
    }

    /* End of Chart: '<S145>/ADCC_WEDStatCmndMgr' */

    /* DataTypeConversion: '<S146>/DataTypeConversion' */
    ADCR_ac_B.DataTypeConversion_mh = VeADCC_e_WEDRightCmndMgrSt;

    /* DataTypeConversion: '<S147>/DataTypeConversion' */
    ADCR_ac_B.DataTypeConversion_p = VeADCC_e_WEDLeftCmndMgrSt;

    /* Logic: '<S10>/Logical Operator' */
    ADCR_ac_B.LogicalOperator_l = ((VeADCC_b_LeftEnblWggl) ||
        (VeADCC_b_RtEnblWggl));

    /* Update for UnitDelay: '<S144>/Unit Delay' */
    ADCR_ac_DW.UnitDelay_DSTATE_egc = rtb_TmpSignalConversionAtVeADAR_L_LftSln;

    /* Update for UnitDelay: '<S145>/Unit Delay' */
    ADCR_ac_DW.UnitDelay_DSTATE_o4 = rtb_TmpSignalConversionAtVeADAR_L_RtSlnd;

    /* End of Outputs for SubSystem: '<S1>/ADCC_WEDCmndCtrls' */

    /* Outputs for Function Call SubSystem: '<S1>/ADCC_CLMtrLimits' */
    /* Logic: '<S7>/Logical2' incorporates:
     *  Constant: '<S62>/Constant'
     *  RelationalOperator: '<S7>/Comparison3'
     *  RelationalOperator: '<S7>/Comparison4'
     */
    rtb_Logical2_p = ((((uint32)VeADCC_e_WEDLeftCmndMgrSt) >=
                       CeADCR_e_ActuateClosedForRetry) && (((uint32)
                        VeADCC_e_WEDRightCmndMgrSt) >=
                       CeADCR_e_ActuateClosedForRetry));

    /* Outputs for Atomic SubSystem: '<S7>/EdgeRising' */
    /* Logic: '<S60>/OR1' incorporates:
     *  UnitDelay: '<S60>/Unit Delay'
     */
    rtb_OR1_ff = !ADCR_ac_DW.UnitDelay_DSTATE_eo;

    /* Update for UnitDelay: '<S60>/Unit Delay' */
    ADCR_ac_DW.UnitDelay_DSTATE_eo = rtb_Logical2_p;

    /* End of Outputs for SubSystem: '<S7>/EdgeRising' */

    /* Logic: '<S7>/Logical1' incorporates:
     *  Constant: '<S61>/Constant'
     *  RelationalOperator: '<S7>/Comparison1'
     *  RelationalOperator: '<S7>/Comparison2'
     *  Selector: '<S9>/Selector'
     *  Selector: '<S9>/Selector1'
     */
    rtb_Logical1_e4 = ((((uint32)ADCR_ac_B.DataTypeConversion_j) ==
                        CeADCR_e_Closed) && (((uint32)
                         ADCR_ac_B.DataTypeConversion_m) == CeADCR_e_Closed));

    /* Outputs for Atomic SubSystem: '<S7>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S7>/EdgeRising' */
    /* Logic: '<S63>/OR1' incorporates:
     *  Logic: '<S60>/AND'
     *  Logic: '<S63>/NOT'
     *  Logic: '<S63>/OR'
     *  UnitDelay: '<S63>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_el = ((rtb_Logical2_p && rtb_OR1_ff) ||
        ((!rtb_Logical1_e4) && (ADCR_ac_DW.UnitDelay_DSTATE_el)));

    /* End of Outputs for SubSystem: '<S7>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S7>/Signal Latch On With Reset1' */

    /* If: '<S7>/If' incorporates:
     *  Inport: '<Root>/VeICSR_M_NxCL'
     *  Inport: '<S69>/ICSR_M_NxCL'
     *  Logic: '<S65>/Logical1'
     *  RelationalOperator: '<S65>/Comparison5'
     *  UnitDelay: '<S65>/Unit Delay'
     */
    rtPrevAction = ADCR_ac_DW.If_ActiveSubsystem_a;
    if (ADCR_ac_DW.UnitDelay_DSTATE_el)
    {
        ADCR_ac_DW.If_ActiveSubsystem_a = 0;
    }
    else if (rtb_Logical1_e4)
    {
        ADCR_ac_DW.If_ActiveSubsystem_a = 1;
    }
    else
    {
        ADCR_ac_DW.If_ActiveSubsystem_a = 2;
    }

    switch (ADCR_ac_DW.If_ActiveSubsystem_a)
    {
      case 0:
        if (ADCR_ac_DW.If_ActiveSubsystem_a != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S7>/WEDsFinalClsngLmts' incorporates:
             *  ActionPort: '<S65>/Action Port'
             */
            /* InitializeConditions for If: '<S7>/If' incorporates:
             *  UnitDelay: '<S65>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_e1 = 0;

            /* End of InitializeConditions for SubSystem: '<S7>/WEDsFinalClsngLmts' */

            /* SystemReset for IfAction SubSystem: '<S7>/WEDsFinalClsngLmts' incorporates:
             *  ActionPort: '<S65>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S65>/EdgeRising' */
            /* SystemReset for If: '<S7>/If' incorporates:
             *  UnitDelay: '<S67>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_nf = false;

            /* End of SystemReset for SubSystem: '<S65>/EdgeRising' */
            /* End of SystemReset for SubSystem: '<S7>/WEDsFinalClsngLmts' */
        }

        /* Outputs for IfAction SubSystem: '<S7>/WEDsFinalClsngLmts' incorporates:
         *  ActionPort: '<S65>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S65>/EdgeRising' */
        /* Logic: '<S67>/AND' incorporates:
         *  Logic: '<S67>/OR1'
         *  UnitDelay: '<S67>/Unit Delay'
         */
        rtb_Logical2_p = !ADCR_ac_DW.UnitDelay_DSTATE_nf;

        /* Update for UnitDelay: '<S67>/Unit Delay' incorporates:
         *  Constant: '<S65>/TRUE Constant1'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_nf = true;

        /* End of Outputs for SubSystem: '<S65>/EdgeRising' */

        /* Sum: '<S72>/Sum4' incorporates:
         *  Constant: '<S72>/Constant'
         *  DataStoreRead: '<S7>/Data Store Read'
         *  Product: '<S72>/Divide'
         *  RelationalOperator: '<S72>/Comparison5'
         *  RelationalOperator: '<S72>/Comparison6'
         *  Sum: '<S72>/Sum'
         */
        rtPrevAction = (sint8)((ADCR_ac_B.Merge_j >=
                                ((rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j +
            rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l) / 2.0F)) +
                               (ADCR_ac_B.Merge_j >= VeADCR_n_AWDNxTgt_DS));

        /* Outputs for Enabled SubSystem: '<S65>/NxCLCapture' incorporates:
         *  EnablePort: '<S69>/Enable'
         */
        if (rtb_Logical2_p || (rtPrevAction != ADCR_ac_DW.UnitDelay_DSTATE_e1))
        {
            (void)Rte_Read_VeICSR_M_NxCL_Value(&ADCR_ac_B.ICSR_M_NxCL);
        }

        /* End of Outputs for SubSystem: '<S65>/NxCLCapture' */

        /* If: '<S65>/If' incorporates:
         *  Constant: '<S65>/Constant Value1'
         *  Inport: '<Root>/VeICSR_M_NxCL'
         *  Inport: '<S69>/ICSR_M_NxCL'
         *  Logic: '<S65>/Logical1'
         *  RelationalOperator: '<S65>/Comparison3'
         *  RelationalOperator: '<S65>/Comparison5'
         *  UnitDelay: '<S65>/Unit Delay'
         */
        if (ADCR_ac_B.ICSR_M_NxCL >= 0.0F)
        {
            /* Outputs for IfAction SubSystem: '<S65>/NxCLFrzPos' incorporates:
             *  ActionPort: '<S71>/Action Port'
             */
            /* Product: '<S65>/Product1' incorporates:
             *  Constant: '<S77>/Calib'
             *  Selector: '<S71>/Selector'
             *  Sum: '<S71>/Sum'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l = ADCR_ac_B.ICSR_M_NxCL +
                KaADCR_M_PosNxCLPosOffset[(rtPrevAction)];

            /* Merge: '<S65>/Merge1' incorporates:
             *  Constant: '<S78>/Calib'
             *  Selector: '<S71>/Selector1'
             *  Sum: '<S71>/Sum1'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j = ADCR_ac_B.ICSR_M_NxCL -
                KaADCR_M_PosNxCLNegOffset[(rtPrevAction)];

            /* End of Outputs for SubSystem: '<S65>/NxCLFrzPos' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S65>/NxCLFrzNeg' incorporates:
             *  ActionPort: '<S70>/Action Port'
             */
            /* Product: '<S65>/Product1' incorporates:
             *  Constant: '<S75>/Calib'
             *  Selector: '<S70>/Selector'
             *  Sum: '<S70>/Sum'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l = ADCR_ac_B.ICSR_M_NxCL +
                KaADCR_M_NegNxCLPosOffset[(rtPrevAction)];

            /* Merge: '<S65>/Merge1' incorporates:
             *  Constant: '<S76>/Calib'
             *  Selector: '<S70>/Selector1'
             *  Sum: '<S70>/Sum1'
             */
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j = ADCR_ac_B.ICSR_M_NxCL -
                KaADCR_M_NegNxCLNegOffset[(rtPrevAction)];

            /* End of Outputs for SubSystem: '<S65>/NxCLFrzNeg' */
        }

        /* End of If: '<S65>/If' */

        /* Product: '<S65>/Product' incorporates:
         *  Lookup_n-D: '<S74>/Vector'
         *  Lookup_n-D: '<S79>/Vector'
         *  MinMax: '<S65>/MinMax2'
         *  SignalConversion generated from: '<S1>/VeADAR_L_LftSlndPos'
         *  SignalConversion generated from: '<S1>/VeADAR_L_RtSlndPos'
         */
        rtb_TmpSignalConversionAtVeADAR_L_LftSln = fmaxf(look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeADAR_L_LftSln, ((const float32 *)
            &(KxADCR_scl_WEDCLMtrLmtPosn[0])), ((const float32 *)
            &(KtADCR_scl_WEDCLMtrLmtPosn[0])), 8U), look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeADAR_L_RtSlnd, ((const float32 *)
            &(KxADCR_scl_WEDCLMtrLmtPosn[0])), ((const float32 *)
            &(KtADCR_scl_WEDCLMtrLmtPosn[0])), 8U));

        /* Product: '<S65>/Product1' */
        rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l *=
            rtb_TmpSignalConversionAtVeADAR_L_LftSln;

        /* Merge: '<S7>/Merge' incorporates:
         *  Constant: '<S65>/Constant Value'
         *  MinMax: '<S65>/MinMax'
         */
        ADCR_ac_B.Merge_b = fmaxf(rtb_TmpSignalConversionAtVeVSDR_n_WEDR_l, 0.0F);

        /* Product: '<S65>/Product' */
        rtb_TmpSignalConversionAtVeADAR_L_LftSln *=
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_j;

        /* Merge: '<S7>/Merge1' incorporates:
         *  Constant: '<S65>/Constant Value'
         *  MinMax: '<S65>/MinMax1'
         */
        ADCR_ac_B.Merge1_g = fminf(0.0F,
            rtb_TmpSignalConversionAtVeADAR_L_LftSln);

        /* Update for UnitDelay: '<S65>/Unit Delay' */
        ADCR_ac_DW.UnitDelay_DSTATE_e1 = rtPrevAction;

        /* End of Outputs for SubSystem: '<S7>/WEDsFinalClsngLmts' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S7>/WEDsClsdLmts' incorporates:
         *  ActionPort: '<S64>/Action Port'
         */
        /* Merge: '<S7>/Merge1' incorporates:
         *  Constant: '<S64>/Constant Value'
         *  Gain: '<S64>/Gain'
         */
        ADCR_ac_B.Merge1_g = 0.0F;

        /* Merge: '<S7>/Merge' incorporates:
         *  Constant: '<S64>/Constant Value'
         *  Gain: '<S64>/Gain1'
         */
        ADCR_ac_B.Merge_b = 0.0F;

        /* End of Outputs for SubSystem: '<S7>/WEDsClsdLmts' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S7>/WEDsOpenLmts' incorporates:
         *  ActionPort: '<S66>/Action Port'
         */
        /* Merge: '<S7>/Merge1' incorporates:
         *  Constant: '<S66>/Constant Value'
         *  Gain: '<S66>/Gain'
         */
        ADCR_ac_B.Merge1_g = -99999.0F;

        /* Merge: '<S7>/Merge' incorporates:
         *  Constant: '<S66>/Constant Value'
         *  Gain: '<S66>/Gain1'
         */
        ADCR_ac_B.Merge_b = 99999.0F;

        /* End of Outputs for SubSystem: '<S7>/WEDsOpenLmts' */
        break;
    }

    /* End of If: '<S7>/If' */
    /* End of Outputs for SubSystem: '<S1>/ADCC_CLMtrLimits' */
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outputs for Function Call SubSystem: '<S1>/ADCR_MedTEB_NF' */
    /* SignalConversion generated from: '<S11>/VeADCR_e_WEDLeftStat_Out_Init' incorporates:
     *  Constant: '<S193>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftStat_O_a =
        ADCR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S11>/VeADCR_e_WEDRightStat_Out_Init' incorporates:
     *  Constant: '<S183>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightStat__c =
        ADCR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S11>/VeADCR_e_WEDLftCmndStat_Out_Init' incorporates:
     *  Constant: '<S182>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLftCmndSta_d =
        ADCR_ac_ConstB.Constant_ni;

    /* SignalConversion generated from: '<S11>/VeADCR_e_WEDRtCmndStat_Out_Init' incorporates:
     *  Constant: '<S187>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRtCmndStat_b =
        ADCR_ac_ConstB.Constant_ol;

    /* SignalConversion generated from: '<S11>/VeADCR_M_WEDMtrCLMax_Out_Init' incorporates:
     *  Constant: '<S196>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMax_O_g =
        KeADCR_M_WEDMtrCLMaxInit;

    /* SignalConversion generated from: '<S11>/VeADCR_M_WEDMtrCLMin_Out_Init' incorporates:
     *  Constant: '<S197>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMin_O_j =
        KeADCR_M_WEDMtrCLMinInit;

    /* SignalConversion generated from: '<S11>/VeADCR_Cnt_LftWEDClsngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDClsng_g = 0U;

    /* SignalConversion generated from: '<S11>/VeADCR_Cnt_LftWEDOpngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDOpngA_n = 0U;

    /* SignalConversion generated from: '<S11>/VeADCR_Cnt_RtWEDClsngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDClsngA_i = 0U;

    /* SignalConversion generated from: '<S11>/VeADCR_Cnt_RtWEDOpngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDOpngAt_e = 0U;

    /* SignalConversion generated from: '<S11>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S191>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftCmndMg_h =
        ADCR_ac_ConstB.Constant_hl;

    /* SignalConversion generated from: '<S11>/VeADCR_e_WEDRightCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S192>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightCmndM_f =
        ADCR_ac_ConstB.Constant_p3;

    /* SignalConversion generated from: '<S11>/VeADCC_e_AWDClchXStat_IRV_Init' incorporates:
     *  Constant: '<S194>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchXStat__p =
        ADCR_ac_ConstB.Constant_bs;

    /* SignalConversion generated from: '<S11>/VeADCC_e_AWDClchYStat_IRV_Init' incorporates:
     *  Constant: '<S188>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchYStat__c =
        ADCR_ac_ConstB.Constant_a4d;

    /* SignalConversion generated from: '<S11>/VeADCC_b_AWDClchLocked_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_b_AWDClchLocked_h = true;

    /* SignalConversion generated from: '<S11>/VeADCR_b_EnblWggl_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_EnblWggl_Out__l = false;

    /* SignalConversion generated from: '<S11>/VeADCR_m_AWDThruTorq_IRV_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_m_AWDThruTorq_I_h = 0.0F;

    /* SignalConversion generated from: '<S11>/VeADCC_n_NxAct_Out_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_n_NxAct_Out_IRV_l = 0.0F;

    /* SignalConversion generated from: '<S11>/VeADCC_dn_NxDotAct_Out_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_dn_NxDotAct_Out_n = 0.0F;

    /* SignalConversion generated from: '<S11>/VeADCR_e_AWDClchXRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S186>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchXRawSt_b =
        ADCR_ac_ConstB.Constant_nf;

    /* SignalConversion generated from: '<S11>/VeADCR_e_AWDClchYRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S185>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchYRawSt_c =
        ADCR_ac_ConstB.Constant_px;

    /* End of Outputs for SubSystem: '<S1>/ADCR_MedTEB_NF' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S1>/VariantSource2' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource2' */
    rtb_VariantMerge_For_Variant_Source_Va_p = ADCR_ac_B.LogicalOperator_d;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource2'
     */
    rtb_VariantMerge_For_Variant_Source_Va_p =
        ADCR_ac_B.OutportBufferForVeADCC_b_AWDClchLocked_h;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource2' */

    /* SignalConversion generated from: '<S1>/VeADCC_b_ClchLocked' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_b_AWDClchLocked_IRV_Merge' */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCC_b_ClchLocked_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_p);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCC_b_ClchLocked' */

    /* SignalConversion generated from: '<S1>/VariantSource3' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  DataTypeConversion: '<S14>/DataTypeConversion'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f = ADCR_ac_B.DataTypeConversion_l;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCC_e_AWDClchXStat_IRV_Init'
     *  SignalConversion generated from: '<S1>/VariantSource3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_f =
        ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchXStat__p;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource3' */

    /* SignalConversion generated from: '<S1>/VeADCC_e_AWDClchXStat' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_e_AWDClchXStat_IRV_Merge' incorporates:
     *  VariantMerge generated from: '<S1>/VariantSource3'
     */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCC_e_AWDClchXStat_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_f);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCC_e_AWDClchXStat' */

    /* SignalConversion generated from: '<S1>/VariantSource4' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource4' incorporates:
     *  DataTypeConversion: '<S15>/DataTypeConversion'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j = ADCR_ac_B.DataTypeConversion_m0;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCC_e_AWDClchYStat_IRV_Init'
     *  SignalConversion generated from: '<S1>/VariantSource4'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j =
        ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchYStat__c;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource4' */

    /* SignalConversion generated from: '<S1>/VeADCC_e_AWDClchYStat' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_e_AWDClchYStat_IRV_Merge' incorporates:
     *  VariantMerge generated from: '<S1>/VariantSource4'
     */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCC_e_AWDClchYStat_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCC_e_AWDClchYStat' */

    /* SignalConversion generated from: '<S1>/VariantSource24' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource24' */
    rtb_VariantMerge_For_Variant_Source_Vari = VeADCC_M_WEDThruTorq;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource24' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource24'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        ADCR_ac_B.OutportBufferForVeADCR_m_AWDThruTorq_I_h;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource24' */

    /* SignalConversion generated from: '<S1>/VeADCC_m_WEDThruTorq' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_m_AWDThruTorq_IRV_Merge' */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCC_m_WEDThruTorq_IRV
        (rtb_VariantMerge_For_Variant_Source_Vari);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCC_m_WEDThruTorq' */

    /* SignalConversion generated from: '<S1>/VariantSource26' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource26' */
    rtb_VariantMerge_For_Variant_Source_V_as = ADCR_ac_B.Gain_n;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource26' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource26'
     */
    rtb_VariantMerge_For_Variant_Source_V_as =
        ADCR_ac_B.OutportBufferForVeADCC_dn_NxDotAct_Out_n;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource26' */

    /* SignalConversion generated from: '<S1>/VeADCR_dn_NxDotAct' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_dn_NxDotAct_IRV_Merge' */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCR_dn_NxDotAct_IRV
        (rtb_VariantMerge_For_Variant_Source_V_as);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCR_dn_NxDotAct' */

    /* SignalConversion generated from: '<S1>/VariantSource27' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource27' incorporates:
     *  DataTypeConversion: '<S131>/DataTypeConversion'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a = ADCR_ac_B.DataTypeConversion_k;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource27' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_AWDClchXRawStat_IRV_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource27'
     */
    rtb_VariantMerge_For_Variant_Source_Va_a =
        ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchXRawSt_b;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource27' */

    /* SignalConversion generated from: '<S1>/VeADCR_e_AWDClchXRawStat' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_e_AWDClchXRawStat_IRV_Merge' incorporates:
     *  VariantMerge generated from: '<S1>/VariantSource27'
     */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCR_e_AWDClchXRawStat_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCR_e_AWDClchXRawStat' */

    /* SignalConversion generated from: '<S1>/VariantSource28' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource28' incorporates:
     *  DataTypeConversion: '<S132>/DataTypeConversion'
     */
    rtb_VariantMerge_For_Variant_Source_Va_k = ADCR_ac_B.DataTypeConversion_i;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource28' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_AWDClchYRawStat_IRV_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource28'
     */
    rtb_VariantMerge_For_Variant_Source_Va_k =
        ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchYRawSt_c;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource28' */

    /* SignalConversion generated from: '<S1>/VeADCR_e_AWDClchYRawStat' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_e_AWDClchYRawStat_IRV_Merge' incorporates:
     *  VariantMerge generated from: '<S1>/VariantSource28'
     */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCR_e_AWDClchYRawStat_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_k);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCR_e_AWDClchYRawStat' */

    /* SignalConversion generated from: '<S1>/VariantSource25' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource25' */
    rtb_VariantMerge_For_Variant_Source_Va_o = ADCR_ac_B.Gain_j;

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* VariantMerge generated from: '<S1>/VariantSource25' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource25'
     */
    rtb_VariantMerge_For_Variant_Source_Va_o =
        ADCR_ac_B.OutportBufferForVeADCC_n_NxAct_Out_IRV_l;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource25' */

    /* SignalConversion generated from: '<S1>/VeADCR_n_NxAct' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Merge: '<Root>/VeADCC_n_NxAct_IRV_Merge' */
    Rte_IrvWrite_ADCR_MedTEB1_VeADCR_n_NxAct_IRV
        (rtb_VariantMerge_For_Variant_Source_Va_o);

#endif

    /* End of SignalConversion generated from: '<S1>/VeADCR_n_NxAct' */

    /* SignalConversion generated from: '<S1>/VariantSource10' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_LftWEDOpngAttempts' */
    (void)Rte_Write_VeADCR_Cnt_LftWEDOpngAttempts_Value
        (ADCR_ac_B.LeADCC_i_WEDOpngAttempts_d);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_LftWEDOpngAttempts' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource10'
     */
    (void)Rte_Write_VeADCR_Cnt_LftWEDOpngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDOpngA_n);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource10' */

    /* SignalConversion generated from: '<S1>/VariantSource11' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_RtWEDOpngAttempts' */
    (void)Rte_Write_VeADCR_Cnt_RtWEDOpngAttempts_Value
        (ADCR_ac_B.LeADCC_i_WEDOpngAttempts);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_RtWEDOpngAttempts' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource11'
     */
    (void)Rte_Write_VeADCR_Cnt_RtWEDOpngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDOpngAt_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource11' */

    /* SignalConversion generated from: '<S1>/VariantSource12' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDLeftCmndMgrSt' incorporates:
     *  DataTypeConversion: '<S147>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftCmndMgrSt_Value
        (ADCR_ac_B.DataTypeConversion_p);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDLeftCmndMgrSt' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource12'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftCmndMgrSt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftCmndMg_h);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource12' */

    /* SignalConversion generated from: '<S1>/VariantSource13' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDRightCmndMgrSt' incorporates:
     *  DataTypeConversion: '<S146>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_WEDRightCmndMgrSt_Value
        (ADCR_ac_B.DataTypeConversion_mh);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDRightCmndMgrSt' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_WEDRightCmndMgrSt_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource13'
     */
    (void)Rte_Write_VeADCR_e_WEDRightCmndMgrSt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightCmndM_f);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource13' */

    /* SignalConversion generated from: '<S1>/VariantSource14' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_M_WEDMtrCLMax' */
    (void)Rte_Write_VeADCR_M_WEDMtrCLMax_Value(ADCR_ac_B.Merge_b);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_M_WEDMtrCLMax' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource14'
     */
    (void)Rte_Write_VeADCR_M_WEDMtrCLMax_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMax_O_g);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource14' */

    /* SignalConversion generated from: '<S1>/VariantSource15' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_M_WEDMtrCLMin' */
    (void)Rte_Write_VeADCR_M_WEDMtrCLMin_Value(ADCR_ac_B.Merge1_g);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_M_WEDMtrCLMin' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource15'
     */
    (void)Rte_Write_VeADCR_M_WEDMtrCLMin_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMin_O_j);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource15' */

    /* SignalConversion generated from: '<S1>/VariantSource1' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDRightStat' incorporates:
     *  DataTypeConversion: '<S129>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_WEDRightStat_Value(ADCR_ac_B.DataTypeConversion_m);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDRightStat' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_WEDRightStat_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource1'
     */
    (void)Rte_Write_VeADCR_e_WEDRightStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightStat__c);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource1' */

    /* SignalConversion generated from: '<S1>/VariantSource22' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_b_WiggleRequest' */
    (void)Rte_Write_VeADCR_b_WiggleRequest_Value(ADCR_ac_B.LogicalOperator_l);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_b_WiggleRequest' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource22'
     */
    (void)Rte_Write_VeADCR_b_WiggleRequest_Value
        (ADCR_ac_B.OutportBufferForVeADCR_b_EnblWggl_Out__l);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource22' */

    /* SignalConversion generated from: '<S1>/VariantSource5' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDLeftStat' incorporates:
     *  DataTypeConversion: '<S130>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftStat_Value(ADCR_ac_B.DataTypeConversion_j);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDLeftStat' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_WEDLeftStat_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource5'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftStat_O_a);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource5' */

    /* SignalConversion generated from: '<S1>/VariantSource6' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDLftCmndStat' */
    (void)Rte_Write_VeADCR_e_WEDLftCmndStat_Value(VeADCC_e_WEDLeftCmndStat);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDLftCmndStat' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_WEDLftCmndStat_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource6'
     */
    (void)Rte_Write_VeADCR_e_WEDLftCmndStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDLftCmndSta_d);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource6' */

    /* SignalConversion generated from: '<S1>/VariantSource7' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDRtCmndStat' */
    (void)Rte_Write_VeADCR_e_WEDRtCmndStat_Value(VeADCC_e_WEDRightCmndStat);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDRtCmndStat' incorporates:
     *  SignalConversion generated from: '<S11>/VeADCR_e_WEDRtCmndStat_Out_Init'
     *  SignalConversion generated from: '<S1>/VariantSource7'
     */
    (void)Rte_Write_VeADCR_e_WEDRtCmndStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDRtCmndStat_b);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource7' */

    /* SignalConversion generated from: '<S1>/VariantSource8' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_LftWEDClsngAttempts' */
    (void)Rte_Write_VeADCR_Cnt_LftWEDClsngAttempts_Value
        (ADCR_ac_B.LeADCC_i_WEDClsngAttempts_g);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_LftWEDClsngAttempts' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource8'
     */
    (void)Rte_Write_VeADCR_Cnt_LftWEDClsngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDClsng_g);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource8' */

    /* SignalConversion generated from: '<S1>/VariantSource9' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_RtWEDClsngAttempts' */
    (void)Rte_Write_VeADCR_Cnt_RtWEDClsngAttempts_Value
        (ADCR_ac_B.LeADCC_i_WEDClsngAttempts);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_Cnt_RtWEDClsngAttempts' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource9'
     */
    (void)Rte_Write_VeADCR_Cnt_RtWEDClsngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDClsngA_i);

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource9' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */
}

/* Model step function for TID2 */
FUNC(void, ADCR_CODE) ADCR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 tmpRead_0[114];

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_MinMax4;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Summation4_mu;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Merge_a[3];

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeHSER_n_NxProf;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Product7;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Switch_l;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Product15;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Summation4_i;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Merge;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Sum3_ns;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Sum4;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_Prim_m;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_WEDR_h;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint32 i;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 tmp[4];

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTEB2'
     */
    /* SignalConversion generated from: '<S2>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  SignalConversion generated from: '<S2>/VeHSER_n_NxProfSmthDly'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_WEDRightWheel'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* SignalConversion generated from: '<S2>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDLeftWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDLeftWheel_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d);

    /* SignalConversion generated from: '<S2>/VeVSDR_n_WEDRightWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDRightWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDRightWheel_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_WEDR_h);

    /* SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_Prim_m);

    /* SignalConversion generated from: '<S2>/VeHSER_n_NxProfSmthDly' incorporates:
     *  Inport: '<Root>/VeHSER_n_NxProfSmthDly'
     */
    (void)Rte_Read_VeHSER_n_NxProfSmthDly_Value
        (&rtb_TmpSignalConversionAtVeHSER_n_NxProf);

#endif

    /* End of SignalConversion generated from: '<S2>/VeVSDR_n_WEDLeftWheel' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* S-Function (fcgen): '<S2>/FcnCallGen' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Inport: '<Root>/VeMSPR_n_MtrA_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrA_Spd_Value(&ADCR_ac_B.Gain);

    /* Outputs for Function Call SubSystem: '<S2>/ADCC_PwrRsrvCalc' */
    /* MinMax: '<S204>/MinMax4' incorporates:
     *  Lookup_n-D: '<S206>/Vector'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd'
     */
    rtb_MinMax4 = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeVSDR_n_Prim_m,
        ((const float32 *)&(KxADCR_n_WEDSlipTgtFrmNo[0])), ((const float32 *)
        &(KtADCR_n_WEDSlipTgtFrmNo[0])), 7U);

    /* Switch: '<S202>/Switch2' incorporates:
     *  Abs: '<S202>/Abs'
     *  Constant: '<S205>/Calib'
     *  RelationalOperator: '<S202>/Comparison2'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    if (fabsf(rtb_MinMax4) >= KeADCR_n_WEDSlipTgtDeadband)
    {
        ADCR_ac_DW.UnitDelay_DSTATE_he = rtb_MinMax4;
    }

    /* End of Switch: '<S202>/Switch2' */

    /* Switch: '<S210>/Switch2' incorporates:
     *  Constant: '<S232>/Constant'
     *  Constant: '<S236>/Calib'
     *  RelationalOperator: '<S210>/Comparison2'
     */
    if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) ==
            CeTSXR_e_Nx_Na)
    {
        /* Switch: '<S204>/Switch' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        ADCR_ac_B.Gain = rtb_TmpSignalConversionAtVeHSER_n_NxProf;
    }

    /* End of Switch: '<S210>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S238>/OPTL_1DAxis34ptsA' */
    /* Abs: '<S238>/Abs' incorporates:
     *  Constant: '<S246>/Calib'
     */
    ADCR_ac_OPTL_1DAxis34ptsA(fabsf(ADCR_ac_B.Gain),
        (Rte_Prm_KaHSCR_n_DonutSpaceCoeffs_AxisA_KaHSCR_n_DonutSpaceCoeffs_AxisA
         ()), &ADCR_ac_B.OPTL_1DAxis34ptsA);

    /* End of Outputs for SubSystem: '<S238>/OPTL_1DAxis34ptsA' */

    /* Outputs for Atomic SubSystem: '<S238>/OPTL_Dynamic1D_A1_Pts' */
    /* Constant: '<S247>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsA.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsA.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_A1_KaHSCR_k_Donut_Space_Coefs_A1()),
        &ADCR_ac_B.OPTL_Dynamic1D_A1_Pts);

    /* End of Outputs for SubSystem: '<S238>/OPTL_Dynamic1D_A1_Pts' */

    /* MinMax: '<S204>/MinMax4' incorporates:
     *  Product: '<S238>/Product4'
     */
    rtb_MinMax4 = ADCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector4;

    /* Sum: '<S250>/Summation4' incorporates:
     *  Product: '<S238>/Product3'
     *  Product: '<S250>/Multiplication'
     *  Sum: '<S250>/Summation'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_Prim_m =
        (((ADCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector3 *
           ADCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector3) - rtb_MinMax4) *
         ADCR_ac_B.OPTL_1DAxis34ptsA.fra) + rtb_MinMax4;

    /* Switch: '<S261>/Switch' */
    if (rtb_TmpSignalConversionAtVeVSDR_n_Prim_m >= 0.0F)
    {
        /* Switch: '<S261>/Switch' incorporates:
         *  Sqrt: '<S261>/Sqrt'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_Prim_m = sqrtf
            (rtb_TmpSignalConversionAtVeVSDR_n_Prim_m);
    }
    else
    {
        /* Switch: '<S261>/Switch' incorporates:
         *  Constant: '<S261>/Zero'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_Prim_m = 0.0F;
    }

    /* End of Switch: '<S261>/Switch' */

    /* Outputs for Atomic SubSystem: '<S238>/OPTL_Dynamic1D_A2_Pts' */
    /* Constant: '<S248>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsA.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsA.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_A2_KaHSCR_k_Donut_Space_Coefs_A2()),
        &ADCR_ac_B.OPTL_Dynamic1D_A2_Pts);

    /* End of Outputs for SubSystem: '<S238>/OPTL_Dynamic1D_A2_Pts' */

    /* MinMax: '<S204>/MinMax4' incorporates:
     *  Product: '<S238>/Product6'
     */
    rtb_MinMax4 = ADCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector4;

    /* Product: '<S238>/Product7' incorporates:
     *  Product: '<S238>/Product5'
     *  Product: '<S251>/Multiplication'
     *  Sum: '<S251>/Summation'
     *  Sum: '<S251>/Summation4'
     */
    rtb_Product7 = ((((ADCR_ac_B.OPTL_Dynamic1D_A1_Pts.Selector3 *
                       ADCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector3) - rtb_MinMax4)
                     * ADCR_ac_B.OPTL_1DAxis34ptsA.fra) + rtb_MinMax4) * (1.0F /
        rtb_TmpSignalConversionAtVeVSDR_n_Prim_m);

    /* If: '<S238>/If' */
    if (ADCR_ac_B.Gain >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S238>/Motor_A_Forward' incorporates:
         *  ActionPort: '<S254>/Action Port'
         */
        ADCR_ac_Motor_A_Forward(rtb_Product7, &rtb_Merge);

        /* End of Outputs for SubSystem: '<S238>/Motor_A_Forward' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S238>/Motor_A_Reverse' incorporates:
         *  ActionPort: '<S255>/Action Port'
         */
        ADCR_ac_Motor_A_Reverse(rtb_Product7, &rtb_Merge);

        /* End of Outputs for SubSystem: '<S238>/Motor_A_Reverse' */
    }

    /* End of If: '<S238>/If' */

    /* Outputs for Atomic SubSystem: '<S238>/OPTL_Dynamic1D_Ca_Pts' */
    /* Constant: '<S249>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsA.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsA.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_C_KaHSCR_k_Donut_Space_Coefs_C()),
        &ADCR_ac_B.OPTL_Dynamic1D_Ca_Pts);

    /* End of Outputs for SubSystem: '<S238>/OPTL_Dynamic1D_Ca_Pts' */

    /* Switch: '<S204>/Switch' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Product: '<S238>/Product1'
     */
    ADCR_ac_B.Gain = ADCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector4;

    /* Sum: '<S238>/Summation1' incorporates:
     *  Product: '<S238>/Product'
     *  Product: '<S238>/Product2'
     *  Product: '<S252>/Multiplication'
     *  Product: '<S253>/Multiplication'
     *  Sum: '<S252>/Summation'
     *  Sum: '<S252>/Summation4'
     *  Sum: '<S253>/Summation'
     *  Sum: '<S253>/Summation4'
     */
    rtb_Product7 = (((((ADCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector3 *
                        ADCR_ac_B.OPTL_Dynamic1D_A2_Pts.Selector3) -
                       ADCR_ac_B.Gain) * ADCR_ac_B.OPTL_1DAxis34ptsA.fra) +
                     ADCR_ac_B.Gain) +
                    (((ADCR_ac_B.OPTL_Dynamic1D_Ca_Pts.Selector3 -
                       ADCR_ac_B.OPTL_Dynamic1D_Ca_Pts.Selector4) *
                      ADCR_ac_B.OPTL_1DAxis34ptsA.fra) +
                     ADCR_ac_B.OPTL_Dynamic1D_Ca_Pts.Selector4)) - (rtb_Product7
        * rtb_Product7);

    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S222>/Constant'
     *  Inport: '<Root>/VaTSXR_r_HTDRToConstrn'
     *  Inport: '<Root>/VeHSER_dn_InputAccelProfile'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  Inport: '<Root>/VeTITR_M_TiFinal'
     *  RelationalOperator: '<S208>/Comparison2'
     */
    if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) !=
            CeTSXR_e_Nx_Na)
    {
        (void)Rte_Read_VeHSER_dn_InputAccelProfile_Value(&rtb_Switch_l);
        (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_Product15);
        (void)Rte_Read_VeTITR_M_TiFinal_Value(&rtb_Sum4);
        (void)Rte_Read_VaTSXR_r_HTDRToConstrn_Value(tmpRead_0);

        /* Product: '<S208>/Product' incorporates:
         *  Inport: '<Root>/VaTSXR_r_HTDRToConstrn'
         *  Inport: '<Root>/VeHSER_dn_InputAccelProfile'
         *  Inport: '<Root>/VeTISR_n_InputSpeed'
         *  Inport: '<Root>/VeTITR_M_TiFinal'
         *  Selector: '<S208>/Selector'
         *  Selector: '<S208>/Selector1'
         */
        rtb_MinMax4 = tmpRead_0[18] * rtb_Sum4;

        /* Sum: '<S208>/Sum4' incorporates:
         *  Product: '<S208>/Product1'
         *  Sum: '<S208>/Sum2'
         */
        rtb_Sum4 = (rtb_TmpSignalConversionAtVeVSDR_n_Prim_m * rtb_MinMax4) +
            rtb_Merge;

        /* Sum: '<S208>/Sum3' incorporates:
         *  Product: '<S208>/Product4'
         */
        rtb_Sum3_ns = (rtb_Sum4 * rtb_Sum4) + rtb_Product7;

        /* Sum: '<S208>/Sum4' incorporates:
         *  Inport: '<Root>/VaTSXR_r_HTDRToConstrn'
         *  Product: '<S208>/Product2'
         *  Product: '<S208>/Product3'
         *  Product: '<S208>/Product5'
         *  Selector: '<S208>/Selector'
         *  Selector: '<S208>/Selector2'
         *  Selector: '<S208>/Selector3'
         *  Sum: '<S208>/Sum'
         *  Sum: '<S208>/Sum6'
         */
        rtb_Sum4 = ((((tmpRead_0[78] * rtb_Product15) + (tmpRead_0[84] *
                       rtb_Switch_l)) + rtb_MinMax4) *
                    rtb_TmpSignalConversionAtVeVSDR_n_Prim_m) + rtb_Merge;

        /* Switch: '<S208>/Switch1' incorporates:
         *  Product: '<S208>/Product6'
         *  Sum: '<S208>/Sum1'
         *  Sum: '<S208>/Sum5'
         */
        VeADCR_P_CurrEngMtrPwr = ((rtb_Sum4 * rtb_Sum4) + rtb_Product7) -
            rtb_Sum3_ns;
    }
    else
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S208>/Constant Value2'
         */
        VeADCR_P_CurrEngMtrPwr = 0.0F;
    }

    /* End of Switch: '<S208>/Switch1' */
    /* End of Outputs for SubSystem: '<S2>/ADCC_PwrRsrvCalc' */

    /* Inport: '<Root>/VeMSPR_n_MtrC_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrC_Spd_Value(&rtb_Summation4_mu);

    /* Outputs for Function Call SubSystem: '<S2>/ADCC_PwrRsrvCalc' */
    /* Switch: '<S210>/Switch' incorporates:
     *  Constant: '<S234>/Constant'
     *  RelationalOperator: '<S210>/Comparison4'
     */
    if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) ==
            CeTSXR_e_Nx_Na)
    {
        /* Switch: '<S204>/Switch' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        ADCR_ac_B.Gain = rtb_TmpSignalConversionAtVeHSER_n_NxProf;
    }
    else
    {
        /* Switch: '<S204>/Switch' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        ADCR_ac_B.Gain = rtb_Summation4_mu;
    }

    /* End of Switch: '<S210>/Switch' */

    /* Outputs for Atomic SubSystem: '<S240>/OPTL_1DAxis34ptsC' */
    /* Abs: '<S240>/Abs1' incorporates:
     *  Constant: '<S282>/Calib'
     */
    ADCR_ac_OPTL_1DAxis34ptsA(fabsf(ADCR_ac_B.Gain),
        (Rte_Prm_KaHSCR_n_DonutSpaceCoeffs_AxisC_KaHSCR_n_DonutSpaceCoeffs_AxisC
         ()), &ADCR_ac_B.OPTL_1DAxis34ptsC);

    /* End of Outputs for SubSystem: '<S240>/OPTL_1DAxis34ptsC' */

    /* Outputs for Atomic SubSystem: '<S240>/OPTL_Dynamic1D_Cc_Pts' */
    /* Constant: '<S285>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsC.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsC.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_E_KaHSCR_k_Donut_Space_Coefs_E()),
        &ADCR_ac_B.OPTL_Dynamic1D_Cc_Pts);

    /* End of Outputs for SubSystem: '<S240>/OPTL_Dynamic1D_Cc_Pts' */

    /* Outputs for Atomic SubSystem: '<S240>/OPTL_Dynamic1D_C2_Pts' */
    /* Constant: '<S284>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsC.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsC.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_C2_KaHSCR_k_Donut_Space_Coefs_C2()),
        &ADCR_ac_B.OPTL_Dynamic1D_C2_Pts);

    /* End of Outputs for SubSystem: '<S240>/OPTL_Dynamic1D_C2_Pts' */

    /* MinMax: '<S204>/MinMax4' incorporates:
     *  Product: '<S240>/Product9'
     */
    rtb_MinMax4 = ADCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector4;

    /* Sum: '<S288>/Summation4' incorporates:
     *  Product: '<S240>/Product8'
     *  Product: '<S288>/Multiplication'
     *  Sum: '<S288>/Summation'
     */
    rtb_Summation4_mu = (((ADCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector3 *
                           ADCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector3) -
                          rtb_MinMax4) * ADCR_ac_B.OPTL_1DAxis34ptsC.fra) +
        rtb_MinMax4;

    /* Outputs for Atomic SubSystem: '<S240>/OPTL_Dynamic1D_C1_Pts' */
    /* Constant: '<S283>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsC.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsC.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_C1_KaHSCR_k_Donut_Space_Coefs_C1()),
        &ADCR_ac_B.OPTL_Dynamic1D_C1_Pts);

    /* End of Outputs for SubSystem: '<S240>/OPTL_Dynamic1D_C1_Pts' */

    /* MinMax: '<S204>/MinMax4' incorporates:
     *  Product: '<S240>/Product12'
     */
    rtb_MinMax4 = ADCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector4;

    /* Sum: '<S286>/Summation4' incorporates:
     *  Product: '<S240>/Product11'
     *  Product: '<S286>/Multiplication'
     *  Sum: '<S286>/Summation'
     */
    rtb_MinMax4 += ((ADCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector3 *
                     ADCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector3) - rtb_MinMax4) *
        ADCR_ac_B.OPTL_1DAxis34ptsC.fra;

    /* Switch: '<S297>/Switch' */
    if (rtb_MinMax4 >= 0.0F)
    {
        /* Switch: '<S297>/Switch' incorporates:
         *  Sqrt: '<S297>/Sqrt'
         */
        rtb_Switch_l = sqrtf(rtb_MinMax4);
    }
    else
    {
        /* Switch: '<S297>/Switch' incorporates:
         *  Constant: '<S297>/Zero'
         */
        rtb_Switch_l = 0.0F;
    }

    /* End of Switch: '<S297>/Switch' */
    /* End of Outputs for SubSystem: '<S2>/ADCC_PwrRsrvCalc' */

    /* Inport: '<Root>/VeMSPR_n_MtrB_Spd' */
    (void)Rte_Read_VeMSPR_n_MtrB_Spd_Value(&rtb_Summation4_i);

    /* Outputs for Function Call SubSystem: '<S2>/ADCC_PwrRsrvCalc' */
    /* MinMax: '<S204>/MinMax4' incorporates:
     *  Product: '<S240>/Product14'
     */
    rtb_MinMax4 = ADCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector4;

    /* Product: '<S240>/Product15' incorporates:
     *  Product: '<S240>/Product13'
     *  Product: '<S287>/Multiplication'
     *  Sum: '<S287>/Summation'
     *  Sum: '<S287>/Summation4'
     */
    rtb_Product15 = ((((ADCR_ac_B.OPTL_Dynamic1D_C1_Pts.Selector3 *
                        ADCR_ac_B.OPTL_Dynamic1D_C2_Pts.Selector3) - rtb_MinMax4)
                      * ADCR_ac_B.OPTL_1DAxis34ptsC.fra) + rtb_MinMax4) * (1.0F /
        rtb_Switch_l);

    /* Switch: '<S210>/Switch1' incorporates:
     *  Constant: '<S233>/Constant'
     *  RelationalOperator: '<S210>/Comparison1'
     */
    if (((uint32)Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain()) ==
            CeTSXR_e_Nx_Na)
    {
        /* MinMax: '<S204>/MinMax4' */
        rtb_MinMax4 = rtb_TmpSignalConversionAtVeHSER_n_NxProf;
    }
    else
    {
        /* MinMax: '<S204>/MinMax4' */
        rtb_MinMax4 = rtb_Summation4_i;
    }

    /* End of Switch: '<S210>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S239>/OPTL_1DAxis34ptsB' */
    /* Abs: '<S239>/Abs1' incorporates:
     *  Constant: '<S264>/Calib'
     */
    ADCR_ac_OPTL_1DAxis34ptsA(fabsf(rtb_MinMax4),
        (Rte_Prm_KaHSCR_n_DonutSpaceCoeffs_AxisB_KaHSCR_n_DonutSpaceCoeffs_AxisB
         ()), &ADCR_ac_B.OPTL_1DAxis34ptsB);

    /* End of Outputs for SubSystem: '<S239>/OPTL_1DAxis34ptsB' */

    /* Outputs for Atomic SubSystem: '<S239>/OPTL_Dynamic1D_Cb_Pts' */
    /* Constant: '<S267>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsB.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsB.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_D_KaHSCR_k_Donut_Space_Coefs_D()),
        &ADCR_ac_B.OPTL_Dynamic1D_Cb_Pts);

    /* End of Outputs for SubSystem: '<S239>/OPTL_Dynamic1D_Cb_Pts' */

    /* Outputs for Atomic SubSystem: '<S239>/OPTL_Dynamic1D_B2_Pts' */
    /* Constant: '<S266>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsB.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsB.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_B2_KaHSCR_k_Donut_Space_Coefs_B2()),
        &ADCR_ac_B.OPTL_Dynamic1D_B2_Pts);

    /* End of Outputs for SubSystem: '<S239>/OPTL_Dynamic1D_B2_Pts' */

    /* Switch: '<S204>/Switch1' incorporates:
     *  Product: '<S239>/Product9'
     */
    ADCR_ac_B.Gain_o = ADCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector4;

    /* Sum: '<S270>/Summation4' incorporates:
     *  Product: '<S239>/Product8'
     *  Product: '<S270>/Multiplication'
     *  Sum: '<S270>/Summation'
     */
    rtb_TmpSignalConversionAtVeHSER_n_NxProf =
        (((ADCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector3 *
           ADCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector3) - ADCR_ac_B.Gain_o) *
         ADCR_ac_B.OPTL_1DAxis34ptsB.fra) + ADCR_ac_B.Gain_o;

    /* Outputs for Atomic SubSystem: '<S239>/OPTL_Dynamic1D_B1_Pts' */
    /* Constant: '<S265>/Calib' */
    ADCR_ac_OPTL_Dynamic1D_A1_Pts(ADCR_ac_B.OPTL_1DAxis34ptsB.UpperIndex,
        ADCR_ac_B.OPTL_1DAxis34ptsB.LowerIndex,
        (Rte_Prm_KaHSCR_k_Donut_Space_Coefs_B1_KaHSCR_k_Donut_Space_Coefs_B1()),
        &ADCR_ac_B.OPTL_Dynamic1D_B1_Pts);

    /* End of Outputs for SubSystem: '<S239>/OPTL_Dynamic1D_B1_Pts' */

    /* Switch: '<S204>/Switch1' incorporates:
     *  Product: '<S239>/Product12'
     */
    ADCR_ac_B.Gain_o = ADCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector4;

    /* Sum: '<S268>/Summation4' incorporates:
     *  Product: '<S239>/Product11'
     *  Product: '<S268>/Multiplication'
     *  Sum: '<S268>/Summation'
     */
    rtb_Summation4_i = (((ADCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector3 *
                          ADCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector3) -
                         ADCR_ac_B.Gain_o) * ADCR_ac_B.OPTL_1DAxis34ptsB.fra) +
        ADCR_ac_B.Gain_o;

    /* Switch: '<S279>/Switch' */
    if (rtb_Summation4_i >= 0.0F)
    {
        /* Switch: '<S279>/Switch' incorporates:
         *  Sqrt: '<S279>/Sqrt'
         */
        rtb_Summation4_i = sqrtf(rtb_Summation4_i);
    }
    else
    {
        /* Switch: '<S279>/Switch' incorporates:
         *  Constant: '<S279>/Zero'
         */
        rtb_Summation4_i = 0.0F;
    }

    /* End of Switch: '<S279>/Switch' */

    /* Switch: '<S204>/Switch1' incorporates:
     *  Product: '<S239>/Product14'
     */
    ADCR_ac_B.Gain_o = ADCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector4 *
        ADCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector4;

    /* Product: '<S239>/Product15' incorporates:
     *  Product: '<S239>/Product13'
     *  Product: '<S269>/Multiplication'
     *  Sum: '<S269>/Summation'
     *  Sum: '<S269>/Summation4'
     */
    rtb_Sum4 = ((((ADCR_ac_B.OPTL_Dynamic1D_B1_Pts.Selector3 *
                   ADCR_ac_B.OPTL_Dynamic1D_B2_Pts.Selector3) - ADCR_ac_B.Gain_o)
                 * ADCR_ac_B.OPTL_1DAxis34ptsB.fra) + ADCR_ac_B.Gain_o) * (1.0F /
        rtb_Summation4_i);

    /* If: '<S239>/If1' */
    if (rtb_MinMax4 >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S239>/Motor_B_Forward' incorporates:
         *  ActionPort: '<S272>/Action Port'
         */
        ADCR_ac_Motor_A_Forward(rtb_Sum4, &rtb_MinMax4);

        /* End of Outputs for SubSystem: '<S239>/Motor_B_Forward' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S239>/Motor_B_Reverse' incorporates:
         *  ActionPort: '<S273>/Action Port'
         */
        ADCR_ac_Motor_A_Reverse(rtb_Sum4, &rtb_MinMax4);

        /* End of Outputs for SubSystem: '<S239>/Motor_B_Reverse' */
    }

    /* End of If: '<S239>/If1' */

    /* If: '<S240>/If1' */
    if (ADCR_ac_B.Gain >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S240>/Motor_B_Forward' incorporates:
         *  ActionPort: '<S290>/Action Port'
         */
        ADCR_ac_Motor_A_Forward(rtb_Product15, &rtb_Sum3_ns);

        /* End of Outputs for SubSystem: '<S240>/Motor_B_Forward' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S240>/Motor_B_Reverse' incorporates:
         *  ActionPort: '<S291>/Action Port'
         */
        ADCR_ac_Motor_A_Reverse(rtb_Product15, &rtb_Sum3_ns);

        /* End of Outputs for SubSystem: '<S240>/Motor_B_Reverse' */
    }

    /* End of If: '<S240>/If1' */

    /* SwitchCase: '<S209>/Switch_Case' incorporates:
     *  Constant: '<S228>/Calib'
     *  Product: '<S239>/Product10'
     *  Product: '<S240>/Product10'
     *  Product: '<S271>/Multiplication'
     *  Product: '<S289>/Multiplication'
     *  Sum: '<S239>/Summation3'
     *  Sum: '<S240>/Summation3'
     *  Sum: '<S271>/Summation'
     *  Sum: '<S271>/Summation4'
     *  Sum: '<S289>/Summation'
     *  Sum: '<S289>/Summation4'
     */
    switch (Rte_Prm_HeTSXR_e_NxDomain_HeTSXR_e_NxDomain())
    {
      case CeTSXR_e_Nx_Na:
        /* Outputs for IfAction SubSystem: '<S209>/MtrA' incorporates:
         *  ActionPort: '<S225>/Action Port'
         */
        /* Merge: '<S209>/Merge' incorporates:
         *  Inport: '<S225>/CoeffIn'
         */
        rtb_Merge_a[0] = rtb_TmpSignalConversionAtVeVSDR_n_Prim_m;
        rtb_Merge_a[1] = rtb_Merge;
        rtb_Merge_a[2] = rtb_Product7;

        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S229>/Calib'
         *  SignalConversion generated from: '<S225>/MtrInertia'
         */
        ADCR_ac_B.Gain_o = Rte_Prm_KeTSXR_J_Ia_KeTSXR_J_Ia();

        /* End of Outputs for SubSystem: '<S209>/MtrA' */
        break;

      case CeTSXR_e_Nx_Nb:
        /* Outputs for IfAction SubSystem: '<S209>/MtrB' incorporates:
         *  ActionPort: '<S226>/Action Port'
         */
        ADCR_ac_MtrB(rtb_Summation4_i, rtb_MinMax4,
                     (((ADCR_ac_B.OPTL_1DAxis34ptsB.fra *
                        (ADCR_ac_B.OPTL_Dynamic1D_Cb_Pts.Selector3 -
                         ADCR_ac_B.OPTL_Dynamic1D_Cb_Pts.Selector4)) +
                       ADCR_ac_B.OPTL_Dynamic1D_Cb_Pts.Selector4) +
                      rtb_TmpSignalConversionAtVeHSER_n_NxProf) - (rtb_Sum4 *
                      rtb_Sum4), rtb_Merge_a, &ADCR_ac_B.Gain_o);

        /* End of Outputs for SubSystem: '<S209>/MtrB' */
        break;

      case CeTSXR_e_Nx_Nc:
        /* Outputs for IfAction SubSystem: '<S209>/MtrC' incorporates:
         *  ActionPort: '<S227>/Action Port'
         */
        ADCR_ac_MtrB(rtb_Switch_l, rtb_Sum3_ns,
                     (((ADCR_ac_B.OPTL_1DAxis34ptsC.fra *
                        (ADCR_ac_B.OPTL_Dynamic1D_Cc_Pts.Selector3 -
                         ADCR_ac_B.OPTL_Dynamic1D_Cc_Pts.Selector4)) +
                       ADCR_ac_B.OPTL_Dynamic1D_Cc_Pts.Selector4) +
                      rtb_Summation4_mu) - (rtb_Product15 * rtb_Product15),
                     rtb_Merge_a, &ADCR_ac_B.Gain_o);

        /* End of Outputs for SubSystem: '<S209>/MtrC' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S209>/Inactive' incorporates:
         *  ActionPort: '<S224>/Action Port'
         */
        for (i = 0; i < 3; i++)
        {
            /* Merge: '<S209>/Merge' incorporates:
             *  SignalConversion generated from: '<S224>/CoeffOut'
             */
            rtb_Merge_a[i] = 0.0F;
        }

        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S224>/Constant Value1'
         *  SignalConversion generated from: '<S224>/MtrInertia'
         */
        ADCR_ac_B.Gain_o = 0.0F;

        /* End of Outputs for SubSystem: '<S209>/Inactive' */
        break;
    }

    /* End of SwitchCase: '<S209>/Switch_Case' */
    /* End of Outputs for SubSystem: '<S2>/ADCC_PwrRsrvCalc' */

    /* Inport: '<Root>/VeHSER_dn_NxDotProfile' */
    (void)Rte_Read_VeHSER_dn_NxDotProfile_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S2>/ADCC_PwrRsrvCalc' */
    /* Switch: '<S204>/Switch' incorporates:
     *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
     *  Product: '<S209>/Product'
     *  Product: '<S209>/Product1'
     *  Product: '<S209>/Product2'
     *  Sum: '<S209>/Sum1'
     */
    ADCR_ac_B.Gain = ((tmpRead * rtb_Merge_a[0]) * ADCR_ac_B.Gain_o) +
        rtb_Merge_a[1];
    ADCR_ac_B.Gain *= ADCR_ac_B.Gain;

    /* Sum: '<S209>/Sum' */
    VeADCR_P_CurrWEDMtrPwr = ADCR_ac_B.Gain + rtb_Merge_a[2];

    /* Switch: '<S204>/Switch1' incorporates:
     *  Constant: '<S215>/Calib'
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    if (KeADCR_b_PwrRsrvEnbl)
    {
        (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&tmpRead_1);

        /* Outputs for Atomic SubSystem: '<S200>/NxTgtAvg' */
        /* Product: '<S203>/Product1' incorporates:
         *  Constant: '<S207>/Calib'
         *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
         *  SignalConversion generated from: '<S203>/Product1'
         *  UnitDelay: '<S202>/Unit Delay'
         */
        tmp[0] = ADCR_ac_DW.UnitDelay_DSTATE_he;
        tmp[1] = ADCR_ac_DW.UnitDelay_DSTATE_he;
        tmp[2] = rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d;
        tmp[3] = rtb_TmpSignalConversionAtVeVSDR_n_WEDR_h;
        rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d = 0.0F;
        for (i = 0; i < 4; i++)
        {
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d += KaADCR_r_AWDNxTgtAvg[(i)]
                * tmp[i];
        }

        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S214>/Calib'
         *  Lookup_n-D: '<S212>/Vector'
         *  Lookup_n-D: '<S213>/Vector'
         *  MinMax: '<S204>/MinMax2'
         *  MinMax: '<S204>/MinMax3'
         *  Product: '<S203>/Product1'
         */
        ADCR_ac_B.Gain_o = fminf(fmaxf(KeADCR_P_PwrRsrvMin,
            look2_iflf_binlca_16a(look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d, ((const float32 *)
            &(KxADCR_t_TgtTmToClose[0])), ((const float32 *)
            &(KtADCR_t_TgtTmToClose[0])), 20U),
            rtb_TmpSignalConversionAtVeVSDR_n_WEDL_d, ((const float32 *)
            &(KxADCR_P_TgtPwrRsrv4Engmt[0])), ((const float32 *)
            &(KyADCR_P_TgtPwrRsrv4Engmt[0])), ((const float32 *)
            &(KtADCR_P_TgtPwrRsrv4Engmt[0])), ADCR_ac_ConstP.Vector_maxIndex, 8U)),
            tmpRead_1);

        /* End of Outputs for SubSystem: '<S200>/NxTgtAvg' */
    }
    else
    {
        /* Switch: '<S204>/Switch1' incorporates:
         *  Constant: '<S204>/Constant Value2'
         */
        ADCR_ac_B.Gain_o = 0.0F;
    }

    /* End of Switch: '<S204>/Switch1' */

    /* Switch: '<S204>/Switch' incorporates:
     *  Constant: '<S211>/Constant'
     *  DataStoreRead: '<S204>/Data Store Read'
     *  RelationalOperator: '<S204>/Comparison2'
     */
    if (((uint32)VeADCR_e_WEDAxleStat_DS) == CeADCR_e_Closed)
    {
        /* Switch: '<S204>/Switch' incorporates:
         *  Constant: '<S204>/Constant Value1'
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        ADCR_ac_B.Gain = 0.0F;
    }
    else
    {
        /* Switch: '<S204>/Switch' incorporates:
         *  Inport: '<Root>/VeMSPR_n_MtrA_Spd'
         */
        ADCR_ac_B.Gain = ADCR_ac_B.Gain_o;
    }

    /* End of Switch: '<S204>/Switch' */

    /* MinMax: '<S204>/MinMax1' incorporates:
     *  Constant: '<S204>/Constant Value'
     *  MinMax: '<S204>/MinMax4'
     *  Sum: '<S204>/Sum'
     *  Sum: '<S204>/Sum2'
     */
    ADCR_ac_B.MinMax1 = fmaxf(fminf(ADCR_ac_B.Gain, ADCR_ac_B.Gain -
        (VeADCR_P_CurrWEDMtrPwr + VeADCR_P_CurrEngMtrPwr)), 0.0F);

    /* End of Outputs for SubSystem: '<S2>/ADCC_PwrRsrvCalc' */
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outputs for Function Call SubSystem: '<S2>/ADCR_MedTED1_NF' */
    /* SignalConversion generated from: '<S201>/VeADCR_P_PwrRsrv4EngmtRaw' */
    ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt_a = 0.0F;

    /* SignalConversion generated from: '<S201>/VeADCR_P_PwrRsrv4Engmt' */
    ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt_b = 0.0F;

    /* SignalConversion generated from: '<S201>/VeADCR_P_PwrRsrv4EngmtLead' */
    ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt_g = 0.0F;

    /* End of Outputs for SubSystem: '<S2>/ADCR_MedTED1_NF' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S2>/VariantSource13' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4EngmtRaw' */
    (void)Rte_Write_VeADCR_P_PwrRsrv4EngmtRaw_Value(ADCR_ac_B.Gain_o);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4EngmtRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VariantSource13'
     */
    (void)Rte_Write_VeADCR_P_PwrRsrv4EngmtRaw_Value
        (ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt_a);

#endif

    /* End of SignalConversion generated from: '<S2>/VariantSource13' */

    /* SignalConversion generated from: '<S2>/VariantSource14' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4Engmt' */
    (void)Rte_Write_VeADCR_P_PwrRsrv4Engmt_Value(ADCR_ac_B.MinMax1);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4Engmt' incorporates:
     *  SignalConversion generated from: '<S2>/VariantSource14'
     */
    (void)Rte_Write_VeADCR_P_PwrRsrv4Engmt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt_b);

#endif

    /* End of SignalConversion generated from: '<S2>/VariantSource14' */

    /* SignalConversion generated from: '<S2>/VariantSource15' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4EngmtLead' */
    (void)Rte_Write_VeADCR_P_PwrRsrv4EngmtLead_Value(ADCR_ac_B.Gain);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4EngmtLead' incorporates:
     *  SignalConversion generated from: '<S2>/VariantSource15'
     */
    (void)Rte_Write_VeADCR_P_PwrRsrv4EngmtLead_Value
        (ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt_g);

#endif

    /* End of SignalConversion generated from: '<S2>/VariantSource15' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID3 */
FUNC(void, ADCR_CODE) ADCR_MedTED1(void) /* Explicit Task: MedTED1 */
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeADCC_n_NxActO;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeADCC_dn_NxDot;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeADCC_M_AWDClc;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_TmpSignalConversionAtVeADCC_b_ClchLo;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Sum_fg;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_LogicalOperator_k;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_RelationalOperator_iq;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_WEDLef;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_WEDRig;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_Switch4;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_AND_nr;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_AND_aq;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDClchStat rtb_TmpSignalConversionAtVeADCC_e_AWDC_h;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDClchStat rtb_TmpSignalConversionAtVeADCC_e_AWDC_g;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus rtb_TmpSignalConversionAtVeADCC_e_AWDClc;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus rtb_TmpSignalConversionAtVeADCC_e_AWDC_b;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_WEDStatus rtb_TmpSignalConversionAtVeHSER_e_AWDSta;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    float32 tmp[4];

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    sint32 i;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTED1'
     */
    /* SignalConversion generated from: '<S3>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  SignalConversion generated from: '<S3>/VeADCC_M_AWDClchThruTorq'
     *  SignalConversion generated from: '<S3>/VeADCC_b_ClchLocked_read'
     *  SignalConversion generated from: '<S3>/VeADCC_dn_NxDotAct'
     *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXRawStat'
     *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
     *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYRawStat'
     *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
     *  SignalConversion generated from: '<S3>/VeADCC_n_NxAct'
     *  SignalConversion generated from: '<S3>/VeHSER_e_AWDStatDsrd'
     *  SignalConversion generated from: '<S3>/VeVSDR_n_PrimNoSgndFltrd'
     *  SignalConversion generated from: '<S3>/VeVSDR_n_WEDRightWheel'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* SignalConversion generated from: '<S3>/VeVSDR_n_WEDLeftWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDLeftWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDLeftWheel_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_WEDLef);

    /* SignalConversion generated from: '<S3>/VeVSDR_n_WEDRightWheel' incorporates:
     *  Inport: '<Root>/VeVSDR_n_WEDRightWheel'
     */
    (void)Rte_Read_VeVSDR_n_WEDRightWheel_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_WEDRig);

    /* SignalConversion generated from: '<S3>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_PrimNo);

    /* SignalConversion generated from: '<S3>/VeADCC_n_NxAct' incorporates:
     *  Merge: '<Root>/VeADCC_n_NxAct_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_n_NxActO =
        Rte_IrvRead_ADCR_MedTED1_VeADCR_n_NxAct_IRV();

    /* SignalConversion generated from: '<S3>/VeADCC_dn_NxDotAct' incorporates:
     *  Merge: '<Root>/VeADCC_dn_NxDotAct_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_dn_NxDot =
        Rte_IrvRead_ADCR_MedTED1_VeADCR_dn_NxDotAct_IRV();

    /* SignalConversion generated from: '<S3>/VeHSER_e_AWDStatDsrd' incorporates:
     *  Inport: '<Root>/VeHSER_e_AWDStatDsrd'
     */
    (void)Rte_Read_VeHSER_e_AWDStatDsrd_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_AWDSta);

    /* SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat' incorporates:
     *  Merge: '<Root>/VeADCC_e_AWDClchXStat_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_e_AWDC_h =
        Rte_IrvRead_ADCR_MedTED1_VeADCC_e_AWDClchXStat_IRV();

    /* SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat' incorporates:
     *  Merge: '<Root>/VeADCC_e_AWDClchYStat_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_e_AWDC_g =
        Rte_IrvRead_ADCR_MedTED1_VeADCC_e_AWDClchYStat_IRV();

    /* SignalConversion generated from: '<S3>/VeADCC_M_AWDClchThruTorq' incorporates:
     *  Merge: '<Root>/VeADCC_m_AWDThruTorq_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_M_AWDClc =
        Rte_IrvRead_ADCR_MedTED1_VeADCC_m_WEDThruTorq_IRV();

    /* SignalConversion generated from: '<S3>/VeADCC_b_ClchLocked_read' incorporates:
     *  Merge: '<Root>/VeADCC_b_AWDClchLocked_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
        Rte_IrvRead_ADCR_MedTED1_VeADCC_b_ClchLocked_IRV();

    /* SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXRawStat' incorporates:
     *  Merge: '<Root>/VeADCC_e_AWDClchXRawStat_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_e_AWDClc =
        Rte_IrvRead_ADCR_MedTED1_VeADCR_e_AWDClchXRawStat_IRV();

    /* SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYRawStat' incorporates:
     *  Merge: '<Root>/VeADCC_e_AWDClchYRawStat_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeADCC_e_AWDC_b =
        Rte_IrvRead_ADCR_MedTED1_VeADCR_e_AWDClchYRawStat_IRV();

#endif

    /* End of SignalConversion generated from: '<S3>/VeVSDR_n_WEDLeftWheel' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* S-Function (fcgen): '<S3>/FcnCallGen' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outputs for Function Call SubSystem: '<S3>/ADCC_AWDDiscStTrnstn' */
    /* If: '<S544>/If1' incorporates:
     *  Constant: '<S545>/Constant'
     *  Constant: '<S546>/Constant'
     *  Constant: '<S547>/Constant'
     *  Constant: '<S548>/Constant'
     *  DataStoreRead: '<S544>/Data Store Read3'
     *  RelationalOperator: '<S544>/Relational Operator1'
     *  RelationalOperator: '<S544>/Relational Operator2'
     *  RelationalOperator: '<S544>/Relational Operator3'
     *  RelationalOperator: '<S544>/Relational Operator4'
     */
    rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_ik;
    ADCR_ac_DW.If1_ActiveSubsystem_ik = -1;
    if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) == CeADCR_e_WEDInit_Group)
    {
        ADCR_ac_DW.If1_ActiveSubsystem_ik = 0;
    }
    else if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) == CeADCR_e_WEDClosing_Group)
    {
        ADCR_ac_DW.If1_ActiveSubsystem_ik = 1;
    }
    else if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) == CeADCR_e_WEDOpening_Group)
    {
        ADCR_ac_DW.If1_ActiveSubsystem_ik = 2;
    }
    else
    {
        if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) ==
                CeADCR_e_WEDSteadyState_Group)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_ik = 3;
        }
    }

    if ((rtPrevAction != ADCR_ac_DW.If1_ActiveSubsystem_ik) && (rtPrevAction ==
            3))
    {
        /* Disable for If: '<S552>/If1' */
        ADCR_ac_DW.If1_ActiveSubsystem_l = -1;
    }

    switch (ADCR_ac_DW.If1_ActiveSubsystem_ik)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S544>/WED_InitGroup' incorporates:
         *  ActionPort: '<S550>/Action Port'
         */
        /* DataStoreWrite: '<S550>/Data Store Write1' incorporates:
         *  Constant: '<S620>/Calib'
         */
        VeADCR_e_WEDCurrStatGroup_DS = KeADCR_e_AWDDiscStInitGroup;

        /* DataStoreWrite: '<S550>/Data Store Write2' incorporates:
         *  Constant: '<S619>/Calib'
         */
        VeADCR_e_AWDDiscCurrSt_DS = KeADCR_e_AWDDiscStInit;

        /* End of Outputs for SubSystem: '<S544>/WED_InitGroup' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S544>/WED_ClosingGroup' incorporates:
         *  ActionPort: '<S549>/Action Port'
         */
        /* If: '<S549>/If1' incorporates:
         *  Constant: '<S553>/Constant'
         *  Constant: '<S554>/Constant'
         *  Constant: '<S555>/Constant'
         *  Constant: '<S556>/Constant'
         *  Constant: '<S557>/Constant'
         *  DataStoreRead: '<S549>/Data Store Read1'
         *  RelationalOperator: '<S549>/Relational Operator1'
         *  RelationalOperator: '<S549>/Relational Operator2'
         *  RelationalOperator: '<S549>/Relational Operator3'
         *  RelationalOperator: '<S549>/Relational Operator4'
         *  RelationalOperator: '<S549>/Relational Operator5'
         */
        if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpenToModeX)
        {
            /* Outputs for IfAction SubSystem: '<S549>/OpenToModeX' incorporates:
             *  ActionPort: '<S561>/Action Port'
             */
            /* Logic: '<S561>/Logical Operator' incorporates:
             *  Constant: '<S593>/Constant'
             *  Constant: '<S594>/Constant'
             *  RelationalOperator: '<S561>/Relational Operator'
             *  RelationalOperator: '<S561>/Relational Operator1'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             */
            rtb_LogicalOperator_k = ((((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed) &&
                (((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) ==
                 CeADCR_e_Locked));

            /* If: '<S561>/If1' incorporates:
             *  Constant: '<S595>/Constant'
             *  Constant: '<S596>/Constant'
             *  Logic: '<S561>/Logical Operator1'
             *  RelationalOperator: '<S561>/Relational Operator2'
             *  RelationalOperator: '<S561>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            if ((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) >=
                    CeADCR_e_Synched) && rtb_LogicalOperator_k)
            {
                /* Outputs for IfAction SubSystem: '<S561>/ModeXToLocked' incorporates:
                 *  ActionPort: '<S598>/Action Port'
                 */
                ADCR_ac_ModeXToLocked();

                /* End of Outputs for SubSystem: '<S561>/ModeXToLocked' */
            }
            else if (rtb_LogicalOperator_k)
            {
                /* Outputs for IfAction SubSystem: '<S561>/ModeX' incorporates:
                 *  ActionPort: '<S597>/Action Port'
                 */
                ADCR_ac_ModeX();

                /* End of Outputs for SubSystem: '<S561>/ModeX' */
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Open)
                {
                    /* Outputs for IfAction SubSystem: '<S561>/OpemAll' incorporates:
                     *  ActionPort: '<S599>/Action Port'
                     */
                    ADCR_ac_OpemAll();

                    /* End of Outputs for SubSystem: '<S561>/OpemAll' */
                }
            }

            /* End of If: '<S561>/If1' */
            /* End of Outputs for SubSystem: '<S549>/OpenToModeX' */
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) ==
                 CeADCR_e_AWDModeXToLocked)
        {
            /* Outputs for IfAction SubSystem: '<S549>/ModeXToLocked' incorporates:
             *  ActionPort: '<S558>/Action Port'
             */
            /* If: '<S558>/If1' incorporates:
             *  Constant: '<S563>/Constant'
             *  Constant: '<S564>/Constant'
             *  Constant: '<S565>/Constant'
             *  Constant: '<S566>/Constant'
             *  Logic: '<S558>/Logical Operator1'
             *  RelationalOperator: '<S558>/Relational Operator'
             *  RelationalOperator: '<S558>/Relational Operator1'
             *  RelationalOperator: '<S558>/Relational Operator2'
             *  RelationalOperator: '<S558>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            if (((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) ==
                    CeADCR_e_Locked) && (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed))
                && (((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) ==
                    CeADCR_e_Locked))
            {
                /* Outputs for IfAction SubSystem: '<S558>/Locked' incorporates:
                 *  ActionPort: '<S567>/Action Port'
                 */
                ADCR_ac_Locked_l();

                /* End of Outputs for SubSystem: '<S558>/Locked' */
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Open)
                {
                    /* Outputs for IfAction SubSystem: '<S558>/OpemAll' incorporates:
                     *  ActionPort: '<S568>/Action Port'
                     */
                    ADCR_ac_OpemAll();

                    /* End of Outputs for SubSystem: '<S558>/OpemAll' */
                }
            }

            /* End of If: '<S558>/If1' */
            /* End of Outputs for SubSystem: '<S549>/ModeXToLocked' */
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpenToModeY)
        {
            /* Outputs for IfAction SubSystem: '<S549>/OpenToModeY' incorporates:
             *  ActionPort: '<S562>/Action Port'
             */
            /* Logic: '<S562>/Logical Operator' incorporates:
             *  Constant: '<S606>/Constant'
             *  Constant: '<S607>/Constant'
             *  RelationalOperator: '<S562>/Relational Operator'
             *  RelationalOperator: '<S562>/Relational Operator1'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            rtb_LogicalOperator_k = ((((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed) &&
                (((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) ==
                 CeADCR_e_Locked));

            /* If: '<S562>/If1' incorporates:
             *  Constant: '<S608>/Constant'
             *  Constant: '<S609>/Constant'
             *  Logic: '<S562>/Logical Operator1'
             *  RelationalOperator: '<S562>/Relational Operator2'
             *  RelationalOperator: '<S562>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             */
            if ((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) ==
                    CeADCR_e_Synched) && rtb_LogicalOperator_k)
            {
                /* Outputs for IfAction SubSystem: '<S562>/ModeYToLocked' incorporates:
                 *  ActionPort: '<S611>/Action Port'
                 */
                ADCR_ac_ModeYToLocked();

                /* End of Outputs for SubSystem: '<S562>/ModeYToLocked' */
            }
            else if (rtb_LogicalOperator_k)
            {
                /* Outputs for IfAction SubSystem: '<S562>/ModeY' incorporates:
                 *  ActionPort: '<S610>/Action Port'
                 */
                ADCR_ac_ModeY();

                /* End of Outputs for SubSystem: '<S562>/ModeY' */
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Open)
                {
                    /* Outputs for IfAction SubSystem: '<S562>/OpemAll' incorporates:
                     *  ActionPort: '<S612>/Action Port'
                     */
                    ADCR_ac_OpemAll();

                    /* End of Outputs for SubSystem: '<S562>/OpemAll' */
                }
            }

            /* End of If: '<S562>/If1' */
            /* End of Outputs for SubSystem: '<S549>/OpenToModeY' */
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) ==
                 CeADCR_e_AWDModeYToLocked)
        {
            /* Outputs for IfAction SubSystem: '<S549>/ModeYToLocked' incorporates:
             *  ActionPort: '<S559>/Action Port'
             */
            /* If: '<S559>/If1' incorporates:
             *  Constant: '<S573>/Constant'
             *  Constant: '<S574>/Constant'
             *  Constant: '<S575>/Constant'
             *  Constant: '<S576>/Constant'
             *  Logic: '<S559>/Logical Operator1'
             *  RelationalOperator: '<S559>/Relational Operator'
             *  RelationalOperator: '<S559>/Relational Operator1'
             *  RelationalOperator: '<S559>/Relational Operator2'
             *  RelationalOperator: '<S559>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            if (((((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                    CeADCR_e_Closed) && (((uint32)
                    rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) == CeADCR_e_Locked))
                && (((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) ==
                    CeADCR_e_Locked))
            {
                /* Outputs for IfAction SubSystem: '<S559>/Locked' incorporates:
                 *  ActionPort: '<S577>/Action Port'
                 */
                ADCR_ac_Locked_l();

                /* End of Outputs for SubSystem: '<S559>/Locked' */
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Open)
                {
                    /* Outputs for IfAction SubSystem: '<S559>/OpemAll' incorporates:
                     *  ActionPort: '<S578>/Action Port'
                     */
                    ADCR_ac_OpemAll();

                    /* End of Outputs for SubSystem: '<S559>/OpemAll' */
                }
            }

            /* End of If: '<S559>/If1' */
            /* End of Outputs for SubSystem: '<S549>/ModeYToLocked' */
        }
        else
        {
            if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpenToLocked)
            {
                /* Outputs for IfAction SubSystem: '<S549>/OpenToLocked' incorporates:
                 *  ActionPort: '<S560>/Action Port'
                 */
                /* If: '<S560>/If1' incorporates:
                 *  Constant: '<S583>/Constant'
                 *  Constant: '<S584>/Constant'
                 *  Constant: '<S585>/Constant'
                 *  Constant: '<S586>/Constant'
                 *  Logic: '<S560>/Logical Operator'
                 *  RelationalOperator: '<S560>/Relational Operator'
                 *  RelationalOperator: '<S560>/Relational Operator1'
                 *  RelationalOperator: '<S560>/Relational Operator2'
                 *  RelationalOperator: '<S560>/Relational Operator3'
                 *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
                 *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
                 */
                if (((((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Closed) && (((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) ==
                        CeADCR_e_Locked)) && (((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) ==
                        CeADCR_e_Locked))
                {
                    /* Outputs for IfAction SubSystem: '<S560>/Locked' incorporates:
                     *  ActionPort: '<S587>/Action Port'
                     */
                    ADCR_ac_Locked_l();

                    /* End of Outputs for SubSystem: '<S560>/Locked' */
                }
                else
                {
                    if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                            CeADCR_e_Open)
                    {
                        /* Outputs for IfAction SubSystem: '<S560>/OpemAll' incorporates:
                         *  ActionPort: '<S588>/Action Port'
                         */
                        ADCR_ac_OpemAll();

                        /* End of Outputs for SubSystem: '<S560>/OpemAll' */
                    }
                }

                /* End of If: '<S560>/If1' */
                /* End of Outputs for SubSystem: '<S549>/OpenToLocked' */
            }
        }

        /* End of If: '<S549>/If1' */
        /* End of Outputs for SubSystem: '<S544>/WED_ClosingGroup' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S544>/WED_OpeningGroup' incorporates:
         *  ActionPort: '<S551>/Action Port'
         */
        /* If: '<S551>/If1' incorporates:
         *  Constant: '<S621>/Constant'
         *  DataStoreRead: '<S551>/Data Store Read1'
         *  RelationalOperator: '<S551>/Relational Operator1'
         */
        if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpen_All)
        {
            /* Outputs for IfAction SubSystem: '<S551>/Open_All' incorporates:
             *  ActionPort: '<S622>/Action Port'
             */
            /* RelationalOperator: '<S622>/Relational Operator7' incorporates:
             *  Constant: '<S627>/Constant'
             */
            rtb_LogicalOperator_k = (((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed);

            /* If: '<S622>/If1' incorporates:
             *  Constant: '<S623>/Constant'
             *  Constant: '<S624>/Constant'
             *  Constant: '<S625>/Constant'
             *  Constant: '<S626>/Constant'
             *  Constant: '<S628>/Constant'
             *  Constant: '<S629>/Constant'
             *  Logic: '<S622>/Logical Operator'
             *  Logic: '<S622>/Logical Operator1'
             *  Logic: '<S622>/Logical Operator2'
             *  Logic: '<S622>/Logical Operator3'
             *  RelationalOperator: '<S622>/Relational Operator'
             *  RelationalOperator: '<S622>/Relational Operator1'
             *  RelationalOperator: '<S622>/Relational Operator2'
             *  RelationalOperator: '<S622>/Relational Operator3'
             *  RelationalOperator: '<S622>/Relational Operator4'
             *  RelationalOperator: '<S622>/Relational Operator5'
             *  RelationalOperator: '<S622>/Relational Operator6'
             *  RelationalOperator: '<S622>/Relational Operator8'
             */
            if (((((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                    CeADCR_e_Open) && (((uint32)
                                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_h)
                  != CeADCR_e_Locked)) && (CeADCR_e_Locked != ((uint32)
                    rtb_TmpSignalConversionAtVeADCC_e_AWDC_g)))
            {
                /* Outputs for IfAction SubSystem: '<S622>/Open' incorporates:
                 *  ActionPort: '<S632>/Action Port'
                 */
                /* DataStoreWrite: '<S632>/Data Store Write1' incorporates:
                 *  Constant: '<S638>/Constant'
                 */
                VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

                /* DataStoreWrite: '<S632>/Data Store Write2' incorporates:
                 *  Constant: '<S639>/Constant'
                 */
                VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpen;

                /* End of Outputs for SubSystem: '<S622>/Open' */
            }
            else if (((((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                       CeADCR_e_Closed) && (((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) >=
                       CeADCR_e_Synched)) && (((uint32)
                       rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) >=
                      CeADCR_e_Synched))
            {
                /* Outputs for IfAction SubSystem: '<S622>/OpenToLocked' incorporates:
                 *  ActionPort: '<S633>/Action Port'
                 */
                /* DataStoreWrite: '<S633>/Data Store Write1' incorporates:
                 *  Constant: '<S640>/Constant'
                 */
                VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDClosing_Group;

                /* DataStoreWrite: '<S633>/Data Store Write2' incorporates:
                 *  Constant: '<S641>/Constant'
                 */
                VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpenToLocked;

                /* End of Outputs for SubSystem: '<S622>/OpenToLocked' */
            }
            else if ((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) <
                      CeADCR_e_Synched) && rtb_LogicalOperator_k)
            {
                /* Outputs for IfAction SubSystem: '<S622>/ModeX' incorporates:
                 *  ActionPort: '<S630>/Action Port'
                 */
                /* DataStoreWrite: '<S630>/Data Store Write1' incorporates:
                 *  Constant: '<S634>/Constant'
                 */
                VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

                /* DataStoreWrite: '<S630>/Data Store Write2' incorporates:
                 *  Constant: '<S635>/Constant'
                 */
                VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDModeX;

                /* End of Outputs for SubSystem: '<S622>/ModeX' */
            }
            else
            {
                if (rtb_LogicalOperator_k && (((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) <
                        CeADCR_e_Synched))
                {
                    /* Outputs for IfAction SubSystem: '<S622>/ModeY' incorporates:
                     *  ActionPort: '<S631>/Action Port'
                     */
                    /* DataStoreWrite: '<S631>/Data Store Write1' incorporates:
                     *  Constant: '<S636>/Constant'
                     */
                    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

                    /* DataStoreWrite: '<S631>/Data Store Write2' incorporates:
                     *  Constant: '<S637>/Constant'
                     */
                    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDModeY;

                    /* End of Outputs for SubSystem: '<S622>/ModeY' */
                }
            }

            /* End of If: '<S622>/If1' */
            /* End of Outputs for SubSystem: '<S551>/Open_All' */
        }

        /* End of If: '<S551>/If1' */
        /* End of Outputs for SubSystem: '<S544>/WED_OpeningGroup' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S544>/WED_SteadyStat' incorporates:
         *  ActionPort: '<S552>/Action Port'
         */
        /* If: '<S552>/If1' incorporates:
         *  Constant: '<S642>/Constant'
         *  Constant: '<S643>/Constant'
         *  Constant: '<S644>/Constant'
         *  Constant: '<S645>/Constant'
         *  DataStoreRead: '<S552>/Data Store Read1'
         *  RelationalOperator: '<S552>/Relational Operator1'
         *  RelationalOperator: '<S552>/Relational Operator2'
         *  RelationalOperator: '<S552>/Relational Operator3'
         *  RelationalOperator: '<S552>/Relational Operator4'
         */
        rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_l;
        ADCR_ac_DW.If1_ActiveSubsystem_l = -1;
        if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpen)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_l = 0;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDModeX)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_l = 1;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDModeY)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_l = 2;
        }
        else
        {
            if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDLocked)
            {
                ADCR_ac_DW.If1_ActiveSubsystem_l = 3;
            }
        }

        switch (ADCR_ac_DW.If1_ActiveSubsystem_l)
        {
          case 0:
            /* Outputs for IfAction SubSystem: '<S552>/Open' incorporates:
             *  ActionPort: '<S649>/Action Port'
             */
            /* RelationalOperator: '<S649>/Relational Operator1' incorporates:
             *  Constant: '<S697>/Constant'
             *  SignalConversion generated from: '<S3>/VeHSER_e_AWDStatDsrd'
             */
            rtb_LogicalOperator_k = (((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed);

            /* RelationalOperator: '<S649>/Relational Operator' incorporates:
             *  Constant: '<S701>/Constant'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             */
            rtb_RelationalOperator_iq = (((uint32)
                rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) >= CeADCR_e_Synched);

            /* Logic: '<S649>/Logical Operator' incorporates:
             *  Constant: '<S702>/Constant'
             *  Logic: '<S649>/Logical Operator2'
             *  RelationalOperator: '<S649>/Relational Operator2'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            rtb_AND_e = (rtb_LogicalOperator_k && (((uint32)
                           rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) >=
                          CeADCR_e_Synched));

            /* If: '<S649>/If1' incorporates:
             *  Constant: '<S698>/Constant'
             *  Constant: '<S699>/Constant'
             *  Constant: '<S700>/Constant'
             *  DataStoreRead: '<S649>/Data Store Read6'
             *  Logic: '<S649>/Logical Operator'
             *  Logic: '<S649>/Logical Operator1'
             *  Logic: '<S649>/Logical Operator2'
             *  RelationalOperator: '<S649>/Relational Operator4'
             *  RelationalOperator: '<S649>/Relational Operator6'
             *  RelationalOperator: '<S649>/Relational Operator7'
             */
            if ((rtb_AND_e && rtb_RelationalOperator_iq) &&
                    (CeADCR_e_WEDSimultaneous == ((uint32)
                    VeADCR_e_AWDDiscPriority_DS)))
            {
                /* Outputs for IfAction SubSystem: '<S649>/OpenToLocked' incorporates:
                 *  ActionPort: '<S703>/Action Port'
                 */
                /* DataStoreWrite: '<S703>/Data Store Write1' incorporates:
                 *  Constant: '<S707>/Constant'
                 */
                VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDClosing_Group;

                /* DataStoreWrite: '<S703>/Data Store Write2' incorporates:
                 *  Constant: '<S706>/Constant'
                 */
                VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpenToLocked;

                /* End of Outputs for SubSystem: '<S649>/OpenToLocked' */
            }
            else if ((rtb_LogicalOperator_k && rtb_RelationalOperator_iq) &&
                     (((uint32)VeADCR_e_AWDDiscPriority_DS) == CeADCR_e_WEDLeft))
            {
                /* Outputs for IfAction SubSystem: '<S649>/OpenToModeX' incorporates:
                 *  ActionPort: '<S704>/Action Port'
                 */
                /* DataStoreWrite: '<S704>/Data Store Write1' incorporates:
                 *  Constant: '<S709>/Constant'
                 */
                VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDClosing_Group;

                /* DataStoreWrite: '<S704>/Data Store Write2' incorporates:
                 *  Constant: '<S708>/Constant'
                 */
                VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpenToModeX;

                /* End of Outputs for SubSystem: '<S649>/OpenToModeX' */
            }
            else
            {
                if (rtb_AND_e && (((uint32)VeADCR_e_AWDDiscPriority_DS) ==
                                  CeADCR_e_WEDRight))
                {
                    /* Outputs for IfAction SubSystem: '<S649>/OpenToModeY' incorporates:
                     *  ActionPort: '<S705>/Action Port'
                     */
                    /* DataStoreWrite: '<S705>/Data Store Write1' incorporates:
                     *  Constant: '<S711>/Constant'
                     */
                    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDClosing_Group;

                    /* DataStoreWrite: '<S705>/Data Store Write2' incorporates:
                     *  Constant: '<S710>/Constant'
                     */
                    VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpenToModeY;

                    /* End of Outputs for SubSystem: '<S649>/OpenToModeY' */
                }
            }

            /* End of If: '<S649>/If1' */
            /* End of Outputs for SubSystem: '<S552>/Open' */
            break;

          case 1:
            /* Outputs for IfAction SubSystem: '<S552>/ModeX' incorporates:
             *  ActionPort: '<S647>/Action Port'
             */
            /* If: '<S647>/If1' incorporates:
             *  Constant: '<S677>/Constant'
             *  Constant: '<S678>/Constant'
             *  Constant: '<S679>/Constant'
             *  Constant: '<S680>/Constant'
             *  Logic: '<S647>/Logical Operator1'
             *  RelationalOperator: '<S647>/Relational Operator'
             *  RelationalOperator: '<S647>/Relational Operator1'
             *  RelationalOperator: '<S647>/Relational Operator2'
             *  RelationalOperator: '<S647>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            if (((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) >=
                    CeADCR_e_Locked) && (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed))
                && (((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) ==
                    CeADCR_e_Locked))
            {
                /* Outputs for IfAction SubSystem: '<S647>/ModeXToLocked' incorporates:
                 *  ActionPort: '<S681>/Action Port'
                 */
                ADCR_ac_ModeXToLocked();

                /* End of Outputs for SubSystem: '<S647>/ModeXToLocked' */
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Open)
                {
                    /* Outputs for IfAction SubSystem: '<S647>/OpemAll' incorporates:
                     *  ActionPort: '<S682>/Action Port'
                     */
                    ADCR_ac_OpemAll();

                    /* End of Outputs for SubSystem: '<S647>/OpemAll' */
                }
            }

            /* End of If: '<S647>/If1' */
            /* End of Outputs for SubSystem: '<S552>/ModeX' */
            break;

          case 2:
            /* Outputs for IfAction SubSystem: '<S552>/ModeY' incorporates:
             *  ActionPort: '<S648>/Action Port'
             */
            /* If: '<S648>/If1' incorporates:
             *  Constant: '<S687>/Constant'
             *  Constant: '<S688>/Constant'
             *  Constant: '<S689>/Constant'
             *  Constant: '<S690>/Constant'
             *  Logic: '<S648>/Logical Operator1'
             *  RelationalOperator: '<S648>/Relational Operator'
             *  RelationalOperator: '<S648>/Relational Operator1'
             *  RelationalOperator: '<S648>/Relational Operator2'
             *  RelationalOperator: '<S648>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            if (((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) >=
                    CeADCR_e_Synched) && (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed))
                && (((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) ==
                    CeADCR_e_Locked))
            {
                /* Outputs for IfAction SubSystem: '<S648>/ModeYToLocked' incorporates:
                 *  ActionPort: '<S691>/Action Port'
                 */
                ADCR_ac_ModeYToLocked();

                /* End of Outputs for SubSystem: '<S648>/ModeYToLocked' */
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Open)
                {
                    /* Outputs for IfAction SubSystem: '<S648>/OpemAll' incorporates:
                     *  ActionPort: '<S692>/Action Port'
                     */
                    ADCR_ac_OpemAll();

                    /* End of Outputs for SubSystem: '<S648>/OpemAll' */
                }
            }

            /* End of If: '<S648>/If1' */
            /* End of Outputs for SubSystem: '<S552>/ModeY' */
            break;

          case 3:
            if (ADCR_ac_DW.If1_ActiveSubsystem_l != rtPrevAction)
            {
                /* SystemReset for IfAction SubSystem: '<S552>/Locked' incorporates:
                 *  ActionPort: '<S646>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S646>/EdgeRising1' */
                /* SystemReset for If: '<S552>/If1' incorporates:
                 *  Switch: '<S675>/Switch1'
                 *  UnitDelay: '<S650>/Unit Delay'
                 *  UnitDelay: '<S663>/Unit Delay'
                 *  UnitDelay: '<S673>/Unit Delay'
                 *  UnitDelay: '<S674>/Unit Delay'
                 *  UnitDelay: '<S675>/Unit Delay'
                 *  UnitDelay: '<S676>/Unit Delay'
                 */
                ADCR_ac_DW.UnitDelay_DSTATE_ihw = false;

                /* End of SystemReset for SubSystem: '<S646>/EdgeRising1' */

                /* SystemReset for Atomic SubSystem: '<S646>/Turn On Delay Time with Resetable delay1' */
                ADCR_ac_DW.UnitDelay_DSTATE_eg = 0.0F;

                /* SystemReset for Atomic SubSystem: '<S664>/EdgeRising with resetable delay' */
                ADCR_ac_DW.UnitDelay_DSTATE_mw = false;
                ADCR_ac_DW.UnitDelay_DSTATE_ih = false;

                /* End of SystemReset for SubSystem: '<S664>/EdgeRising with resetable delay' */
                /* End of SystemReset for SubSystem: '<S646>/Turn On Delay Time with Resetable delay1' */

                /* SystemReset for Atomic SubSystem: '<S646>/Turn On Delay Time' */
                ADCR_ac_DW.UnitDelay_DSTATE_fp = 0.0F;

                /* SystemReset for Atomic SubSystem: '<S663>/EdgeRising' */
                ADCR_ac_DW.UnitDelay_DSTATE_db = false;

                /* End of SystemReset for SubSystem: '<S663>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S646>/Turn On Delay Time' */
                /* End of SystemReset for SubSystem: '<S552>/Locked' */
            }

            /* Outputs for IfAction SubSystem: '<S552>/Locked' incorporates:
             *  ActionPort: '<S646>/Action Port'
             */
            /* Switch: '<S646>/Switch' incorporates:
             *  Abs: '<S646>/Abs'
             *  Constant: '<S662>/Calib'
             *  DataStoreRead: '<S646>/Data Store Read'
             */
            if (KeADCR_b_UseTcROvrd4OfladCnfrmd)
            {
                rtb_TmpSignalConversionAtVeADCC_M_AWDClc =
                    VeADCR_M_AWDClch_TcR_Ovrd_DS;
            }
            else
            {
                rtb_TmpSignalConversionAtVeADCC_M_AWDClc = fabsf
                    (rtb_TmpSignalConversionAtVeADCC_M_AWDClc);
            }

            /* End of Switch: '<S646>/Switch' */

            /* RelationalOperator: '<S646>/Relational Operator2' incorporates:
             *  Constant: '<S661>/Calib'
             */
            rtb_RelationalOperator_iq =
                (rtb_TmpSignalConversionAtVeADCC_M_AWDClc <
                 KeADCR_M_ClchTrqThrsd);

            /* Outputs for Atomic SubSystem: '<S646>/EdgeRising1' */
            /* Logic: '<S650>/AND' incorporates:
             *  Logic: '<S650>/OR1'
             *  UnitDelay: '<S650>/Unit Delay'
             */
            rtb_LogicalOperator_k = (rtb_RelationalOperator_iq &&
                (!ADCR_ac_DW.UnitDelay_DSTATE_ihw));

            /* Update for UnitDelay: '<S650>/Unit Delay' */
            ADCR_ac_DW.UnitDelay_DSTATE_ihw = rtb_RelationalOperator_iq;

            /* End of Outputs for SubSystem: '<S646>/EdgeRising1' */

            /* Outputs for Atomic SubSystem: '<S646>/Turn On Delay Time with Resetable delay1' */
            /* Outputs for Atomic SubSystem: '<S664>/EdgeRising with resetable delay' */
            /* Logic: '<S674>/AND' incorporates:
             *  Logic: '<S674>/OR1'
             *  UnitDelay: '<S674>/Unit Delay'
             */
            rtb_AND_e = (rtb_RelationalOperator_iq &&
                         (!ADCR_ac_DW.UnitDelay_DSTATE_mw));

            /* Switch: '<S676>/Switch1' incorporates:
             *  Constant: '<S674>/Constant1'
             *  UnitDelay: '<S674>/Unit Delay'
             *  UnitDelay: '<S676>/Unit Delay'
             */
            if (rtb_LogicalOperator_k)
            {
                ADCR_ac_DW.UnitDelay_DSTATE_mw = false;
            }
            else
            {
                ADCR_ac_DW.UnitDelay_DSTATE_mw = ADCR_ac_DW.UnitDelay_DSTATE_ih;
            }

            /* End of Switch: '<S676>/Switch1' */

            /* Switch: '<S676>/Switch3' incorporates:
             *  UnitDelay: '<S676>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_ih = ((!rtb_LogicalOperator_k) &&
                rtb_RelationalOperator_iq);

            /* End of Outputs for SubSystem: '<S664>/EdgeRising with resetable delay' */

            /* Switch: '<S664>/Switch1' incorporates:
             *  Logic: '<S664>/OR'
             *  Logic: '<S664>/OR1'
             *  Switch: '<S675>/Switch1'
             */
            if ((!rtb_RelationalOperator_iq) || rtb_AND_e)
            {
                /* Switch: '<S675>/Switch1' incorporates:
                 *  Constant: '<S664>/Constant Value1'
                 *  Switch: '<S664>/Switch1'
                 */
                ADCR_ac_DW.UnitDelay_DSTATE_eg = 0.0F;
            }
            else
            {
                if (rtb_LogicalOperator_k)
                {
                    /* Switch: '<S675>/Switch1' incorporates:
                     *  Constant: '<S664>/Constant1'
                     */
                    ADCR_ac_DW.UnitDelay_DSTATE_eg = 0.0F;
                }

                /* Switch: '<S675>/Switch1' incorporates:
                 *  Constant: '<S322>/Calib'
                 *  Constant: '<S660>/Calib'
                 *  MinMax: '<S664>/Minimum'
                 *  Sum: '<S664>/Summation'
                 *  Switch: '<S664>/Switch1'
                 */
                ADCR_ac_DW.UnitDelay_DSTATE_eg = fminf(KeADCR_t_ClchTorqTimer,
                    HeADCR_t_MedTED_dT + ADCR_ac_DW.UnitDelay_DSTATE_eg);
            }

            /* End of Switch: '<S664>/Switch1' */

            /* Logic: '<S664>/AND' incorporates:
             *  Constant: '<S660>/Calib'
             *  DataStoreWrite: '<S646>/Data Store Write10'
             *  RelationalOperator: '<S664>/Greater  Than'
             */
            VeADCC_b_AWDClchOffloaded_DS = (rtb_RelationalOperator_iq &&
                (ADCR_ac_DW.UnitDelay_DSTATE_eg >= KeADCR_t_ClchTorqTimer));

            /* Switch: '<S675>/Switch3' */
            if (rtb_LogicalOperator_k)
            {
                /* Switch: '<S675>/Switch1' incorporates:
                 *  Constant: '<S664>/Constant1'
                 *  UnitDelay: '<S675>/Unit Delay'
                 */
                ADCR_ac_DW.UnitDelay_DSTATE_eg = 0.0F;
            }

            /* End of Switch: '<S675>/Switch3' */
            /* End of Outputs for SubSystem: '<S646>/Turn On Delay Time with Resetable delay1' */

            /* Logic: '<S646>/Logical Operator' incorporates:
             *  Constant: '<S654>/Constant'
             *  DataStoreWrite: '<S646>/Data Store Write10'
             *  RelationalOperator: '<S646>/Relational Operator1'
             */
            rtb_LogicalOperator_k = ((((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Open) &&
                (VeADCC_b_AWDClchOffloaded_DS));

            /* Outputs for Atomic SubSystem: '<S646>/Turn On Delay Time' */
            /* Outputs for Atomic SubSystem: '<S663>/EdgeRising' */
            /* Logic: '<S673>/AND' incorporates:
             *  Logic: '<S673>/OR1'
             *  UnitDelay: '<S673>/Unit Delay'
             */
            rtb_RelationalOperator_iq = (rtb_LogicalOperator_k &&
                (!ADCR_ac_DW.UnitDelay_DSTATE_db));

            /* Update for UnitDelay: '<S673>/Unit Delay' */
            ADCR_ac_DW.UnitDelay_DSTATE_db = rtb_LogicalOperator_k;

            /* End of Outputs for SubSystem: '<S663>/EdgeRising' */

            /* Switch: '<S663>/Switch1' incorporates:
             *  Constant: '<S322>/Calib'
             *  Constant: '<S655>/Calib'
             *  Constant: '<S663>/Constant Value1'
             *  Logic: '<S663>/OR'
             *  Logic: '<S663>/OR1'
             *  MinMax: '<S663>/Minimum'
             *  Sum: '<S663>/Summation'
             *  UnitDelay: '<S663>/Unit Delay'
             */
            if ((!rtb_LogicalOperator_k) || rtb_RelationalOperator_iq)
            {
                ADCR_ac_DW.UnitDelay_DSTATE_fp = 0.0F;
            }
            else
            {
                ADCR_ac_DW.UnitDelay_DSTATE_fp = fminf
                    (KeADCR_t_ADCClchOfldDlyTmr, HeADCR_t_MedTED_dT +
                     ADCR_ac_DW.UnitDelay_DSTATE_fp);
            }

            /* End of Switch: '<S663>/Switch1' */
            /* End of Outputs for SubSystem: '<S646>/Turn On Delay Time' */

            /* Logic: '<S646>/Logical Operator3' incorporates:
             *  Constant: '<S651>/Constant'
             *  RelationalOperator: '<S646>/Relational Operator4'
             */
            rtb_RelationalOperator_iq = (((uint32)
                rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Open);

            /* Logic: '<S646>/Logical Operator2' incorporates:
             *  Constant: '<S652>/Constant'
             *  RelationalOperator: '<S646>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
             */
            rtb_AND_e = (rtb_RelationalOperator_iq && (((uint32)
                           rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) <
                          CeADCR_e_Synched));

            /* Logic: '<S646>/Logical Operator3' incorporates:
             *  Constant: '<S653>/Constant'
             *  RelationalOperator: '<S646>/Relational Operator'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
             */
            rtb_RelationalOperator_iq = ((((uint32)
                rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) < CeADCR_e_Synched) &&
                rtb_RelationalOperator_iq);

            /* Outputs for Atomic SubSystem: '<S646>/Turn On Delay Time' */
            /* If: '<S646>/If' incorporates:
             *  Constant: '<S655>/Calib'
             *  Logic: '<S646>/Logical Operator1'
             *  Logic: '<S663>/AND'
             *  RelationalOperator: '<S663>/Greater  Than'
             *  UnitDelay: '<S663>/Unit Delay'
             */
            if (rtb_LogicalOperator_k && (ADCR_ac_DW.UnitDelay_DSTATE_fp >=
                    KeADCR_t_ADCClchOfldDlyTmr))
            {
                /* Outputs for IfAction SubSystem: '<S646>/OpemAll' incorporates:
                 *  ActionPort: '<S658>/Action Port'
                 */
                ADCR_ac_OpemAll();

                /* End of Outputs for SubSystem: '<S646>/OpemAll' */
            }
            else if (rtb_AND_e && rtb_RelationalOperator_iq)
            {
                /* Outputs for IfAction SubSystem: '<S646>/Open' incorporates:
                 *  ActionPort: '<S659>/Action Port'
                 */
                /* DataStoreWrite: '<S659>/Data Store Write1' incorporates:
                 *  Constant: '<S672>/Constant'
                 */
                VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDSteadyState_Group;

                /* DataStoreWrite: '<S659>/Data Store Write2' incorporates:
                 *  Constant: '<S671>/Constant'
                 */
                VeADCR_e_AWDDiscCurrSt_DS = CeADCR_e_AWDOpen;

                /* End of Outputs for SubSystem: '<S646>/Open' */
            }
            else if (rtb_RelationalOperator_iq)
            {
                /* Outputs for IfAction SubSystem: '<S646>/ModeX' incorporates:
                 *  ActionPort: '<S656>/Action Port'
                 */
                ADCR_ac_ModeX();

                /* End of Outputs for SubSystem: '<S646>/ModeX' */
            }
            else
            {
                if (rtb_AND_e)
                {
                    /* Outputs for IfAction SubSystem: '<S646>/ModeY' incorporates:
                     *  ActionPort: '<S657>/Action Port'
                     */
                    ADCR_ac_ModeY();

                    /* End of Outputs for SubSystem: '<S646>/ModeY' */
                }
            }

            /* End of If: '<S646>/If' */
            /* End of Outputs for SubSystem: '<S646>/Turn On Delay Time' */
            /* End of Outputs for SubSystem: '<S552>/Locked' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of If: '<S552>/If1' */
        /* End of Outputs for SubSystem: '<S544>/WED_SteadyStat' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of If: '<S544>/If1' */
    /* End of Outputs for SubSystem: '<S3>/ADCC_AWDDiscStTrnstn' */

    /* Outputs for Function Call SubSystem: '<S3>/ADCC_AWDDiscStAction' */
    /* If: '<S327>/If1' incorporates:
     *  Constant: '<S328>/Constant'
     *  Constant: '<S329>/Constant'
     *  Constant: '<S330>/Constant'
     *  Constant: '<S331>/Constant'
     *  DataStoreRead: '<S327>/Data Store Read3'
     *  RelationalOperator: '<S327>/Relational Operator1'
     *  RelationalOperator: '<S327>/Relational Operator2'
     *  RelationalOperator: '<S327>/Relational Operator3'
     *  RelationalOperator: '<S327>/Relational Operator4'
     */
    rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem;
    ADCR_ac_DW.If1_ActiveSubsystem = -1;
    if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) == CeADCR_e_WEDInit_Group)
    {
        ADCR_ac_DW.If1_ActiveSubsystem = 0;
    }
    else if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) == CeADCR_e_WEDClosing_Group)
    {
        ADCR_ac_DW.If1_ActiveSubsystem = 1;
    }
    else if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) == CeADCR_e_WEDOpening_Group)
    {
        ADCR_ac_DW.If1_ActiveSubsystem = 2;
    }
    else
    {
        if (((uint32)VeADCR_e_WEDCurrStatGroup_DS) ==
                CeADCR_e_WEDSteadyState_Group)
        {
            ADCR_ac_DW.If1_ActiveSubsystem = 3;
        }
    }

    if (rtPrevAction != ADCR_ac_DW.If1_ActiveSubsystem)
    {
        switch (rtPrevAction)
        {
          case 0:
            break;

          case 1:
            /* Disable for If: '<S332>/If1' */
            ADCR_ac_DW.If1_ActiveSubsystem_j = -1;
            break;

          case 2:
            /* Disable for If: '<S334>/If1' */
            ADCR_ac_DW.If1_ActiveSubsystem_ix = -1;
            break;

          case 3:
            /* Disable for If: '<S335>/If1' */
            switch (ADCR_ac_DW.If1_ActiveSubsystem_h)
            {
              case 0:
                /* Disable for If: '<S443>/If' */
                if (ADCR_ac_DW.If_ActiveSubsystem_j == 1)
                {
                    /* Disable for If: '<S491>/If1' */
                    ADCR_ac_DW.If1_ActiveSubsystem_i = -1;
                }

                ADCR_ac_DW.If_ActiveSubsystem_j = -1;
                break;

              case 1:
              case 2:
                break;

              case 3:
                /* Disable for If: '<S440>/If' */
                if (ADCR_ac_DW.If_ActiveSubsystem == 1)
                {
                    /* Disable for If: '<S444>/If1' */
                    ADCR_ac_DW.If1_ActiveSubsystem_k = -1;
                }

                ADCR_ac_DW.If_ActiveSubsystem = -1;
                break;

              default:
                /* no actions */
                break;
            }

            ADCR_ac_DW.If1_ActiveSubsystem_h = -1;

            /* End of Disable for If: '<S335>/If1' */
            break;

          default:
            /* no actions */
            break;
        }
    }

    switch (ADCR_ac_DW.If1_ActiveSubsystem)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S327>/WED_InitGroup' incorporates:
         *  ActionPort: '<S333>/Action Port'
         */
        /* DataStoreWrite: '<S333>/Data Store Write4' incorporates:
         *  Constant: '<S333>/Constant Value'
         */
        VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

        /* DataStoreWrite: '<S333>/Data Store Write8' incorporates:
         *  Constant: '<S333>/Constant Value'
         */
        VeADCR_M_AWDClch_LeadTcR_Ovrd_DS = 0.0F;

        /* DataStoreWrite: '<S333>/Data Store Write9' incorporates:
         *  Constant: '<S333>/Constant Value'
         */
        VeADCR_M_AWDClch_TcR_Ovrd_DS = 0.0F;

        /* DataStoreWrite: '<S333>/Data Store Write11' incorporates:
         *  Constant: '<S333>/Constant1'
         */
        VeADCR_b_AWDUseLckdEqn_DS = false;

        /* DataStoreWrite: '<S333>/Data Store Write' incorporates:
         *  Constant: '<S398>/Constant'
         */
        VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Open;

        /* DataStoreWrite: '<S333>/Data Store Write1' incorporates:
         *  Constant: '<S398>/Constant'
         */
        VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Open;

        /* DataStoreWrite: '<S333>/Data Store Write6' incorporates:
         *  Constant: '<S398>/Constant'
         */
        VeADCR_e_WEDAxleStat_DS = CeADCR_e_Open;

        /* DataStoreWrite: '<S333>/Data Store Write10' incorporates:
         *  Constant: '<S401>/Constant'
         */
        VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

        /* DataStoreWrite: '<S333>/Data Store Write2' incorporates:
         *  Constant: '<S400>/Constant'
         */
        VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtZero;

        /* DataStoreWrite: '<S333>/Data Store Write3' incorporates:
         *  Constant: '<S402>/Calib'
         */
        VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltOpen;

        /* DataStoreWrite: '<S333>/Data Store Write5' incorporates:
         *  Constant: '<S399>/Constant'
         */
        VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnOpen;

        /* End of Outputs for SubSystem: '<S327>/WED_InitGroup' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S327>/WED_ClosingGroup' incorporates:
         *  ActionPort: '<S332>/Action Port'
         */
        /* If: '<S332>/If1' incorporates:
         *  Constant: '<S336>/Constant'
         *  Constant: '<S337>/Constant'
         *  Constant: '<S338>/Constant'
         *  Constant: '<S339>/Constant'
         *  Constant: '<S340>/Constant'
         *  DataStoreRead: '<S332>/Data Store Read1'
         *  RelationalOperator: '<S332>/Relational Operator1'
         *  RelationalOperator: '<S332>/Relational Operator2'
         *  RelationalOperator: '<S332>/Relational Operator3'
         *  RelationalOperator: '<S332>/Relational Operator4'
         *  RelationalOperator: '<S332>/Relational Operator5'
         */
        rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_j;
        ADCR_ac_DW.If1_ActiveSubsystem_j = -1;
        if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpenToModeX)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_j = 0;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) ==
                 CeADCR_e_AWDModeXToLocked)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_j = 1;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpenToModeY)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_j = 2;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) ==
                 CeADCR_e_AWDModeYToLocked)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_j = 3;
        }
        else
        {
            if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpenToLocked)
            {
                ADCR_ac_DW.If1_ActiveSubsystem_j = 4;
            }
        }

        switch (ADCR_ac_DW.If1_ActiveSubsystem_j)
        {
          case 0:
            /* SystemReset for IfAction SubSystem: '<S332>/OpenToModeX' incorporates:
             *  ActionPort: '<S344>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S344>/EdgeRising1' */
            /* SystemReset for If: '<S332>/If1' incorporates:
             *  UnitDelay: '<S377>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_dn = ((ADCR_ac_DW.If1_ActiveSubsystem_j ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_dn));

            /* End of SystemReset for SubSystem: '<S344>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S332>/OpenToModeX' */

            /* Outputs for IfAction SubSystem: '<S332>/OpenToModeX' incorporates:
             *  ActionPort: '<S344>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S344>/EdgeRising1' */
            /* Logic: '<S377>/OR1' incorporates:
             *  UnitDelay: '<S377>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_dn;

            /* Update for UnitDelay: '<S377>/Unit Delay' incorporates:
             *  Constant: '<S344>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_dn = true;

            /* If: '<S344>/If' incorporates:
             *  Logic: '<S377>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S344>/Entry' incorporates:
                 *  ActionPort: '<S378>/Action Port'
                 */
                /* DataStoreWrite: '<S378>/Data Store Write7' incorporates:
                 *  Constant: '<S378>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S378>/Data Store Write15' incorporates:
                 *  Constant: '<S378>/Constant Value'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                /* DataStoreWrite: '<S378>/Data Store Write' incorporates:
                 *  Constant: '<S379>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S378>/Data Store Write10' incorporates:
                 *  Constant: '<S384>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S378>/Data Store Write18' incorporates:
                 *  Constant: '<S385>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S378>/Data Store Write19' incorporates:
                 *  Constant: '<S385>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S378>/Data Store Write2' incorporates:
                 *  Constant: '<S380>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S378>/Data Store Write3' incorporates:
                 *  Constant: '<S381>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnOpen;

                /* DataStoreWrite: '<S378>/Data Store Write4' incorporates:
                 *  Constant: '<S386>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltOpenToModeX;

                /* DataStoreWrite: '<S378>/Data Store Write5' incorporates:
                 *  Constant: '<S382>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtClchX;

                /* DataStoreWrite: '<S378>/Data Store Write6' incorporates:
                 *  Constant: '<S383>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                /* End of Outputs for SubSystem: '<S344>/Entry' */
            }

            /* End of If: '<S344>/If' */
            /* End of Outputs for SubSystem: '<S344>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S332>/OpenToModeX' */
            break;

          case 1:
            /* SystemReset for IfAction SubSystem: '<S332>/ModeXToLocked' incorporates:
             *  ActionPort: '<S341>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S341>/EdgeRising1' */
            /* SystemReset for If: '<S332>/If1' incorporates:
             *  UnitDelay: '<S347>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_k = ((ADCR_ac_DW.If1_ActiveSubsystem_j ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_k));

            /* End of SystemReset for SubSystem: '<S341>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S332>/ModeXToLocked' */

            /* Outputs for IfAction SubSystem: '<S332>/ModeXToLocked' incorporates:
             *  ActionPort: '<S341>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S341>/EdgeRising1' */
            /* Logic: '<S347>/OR1' incorporates:
             *  UnitDelay: '<S347>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_k;

            /* Update for UnitDelay: '<S347>/Unit Delay' incorporates:
             *  Constant: '<S341>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_k = true;

            /* If: '<S341>/If' incorporates:
             *  Logic: '<S347>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S341>/Entry' incorporates:
                 *  ActionPort: '<S348>/Action Port'
                 */
                /* DataStoreWrite: '<S348>/Data Store Write7' incorporates:
                 *  Constant: '<S348>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S348>/Data Store Write15' incorporates:
                 *  Constant: '<S348>/Constant Value'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                /* DataStoreWrite: '<S348>/Data Store Write' incorporates:
                 *  Constant: '<S349>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S348>/Data Store Write2' incorporates:
                 *  Constant: '<S349>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S348>/Data Store Write10' incorporates:
                 *  Constant: '<S353>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S348>/Data Store Write18' incorporates:
                 *  Constant: '<S354>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S348>/Data Store Write19' incorporates:
                 *  Constant: '<S354>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S348>/Data Store Write3' incorporates:
                 *  Constant: '<S350>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnMX;

                /* DataStoreWrite: '<S348>/Data Store Write4' incorporates:
                 *  Constant: '<S355>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltModeXToLocked;

                /* DataStoreWrite: '<S348>/Data Store Write5' incorporates:
                 *  Constant: '<S351>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                /* DataStoreWrite: '<S348>/Data Store Write6' incorporates:
                 *  Constant: '<S352>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                /* End of Outputs for SubSystem: '<S341>/Entry' */
            }

            /* End of If: '<S341>/If' */
            /* End of Outputs for SubSystem: '<S341>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S332>/ModeXToLocked' */
            break;

          case 2:
            /* SystemReset for IfAction SubSystem: '<S332>/OpenToModeY' incorporates:
             *  ActionPort: '<S345>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S345>/EdgeRising1' */
            /* SystemReset for If: '<S332>/If1' incorporates:
             *  UnitDelay: '<S388>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_p5 = ((ADCR_ac_DW.If1_ActiveSubsystem_j ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_p5));

            /* End of SystemReset for SubSystem: '<S345>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S332>/OpenToModeY' */

            /* Outputs for IfAction SubSystem: '<S332>/OpenToModeY' incorporates:
             *  ActionPort: '<S345>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S345>/EdgeRising1' */
            /* Logic: '<S388>/OR1' incorporates:
             *  UnitDelay: '<S388>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_p5;

            /* Update for UnitDelay: '<S388>/Unit Delay' incorporates:
             *  Constant: '<S345>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_p5 = true;

            /* If: '<S345>/If' incorporates:
             *  Logic: '<S388>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S345>/Entry' incorporates:
                 *  ActionPort: '<S389>/Action Port'
                 */
                /* DataStoreWrite: '<S389>/Data Store Write7' incorporates:
                 *  Constant: '<S389>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S389>/Data Store Write15' incorporates:
                 *  Constant: '<S389>/Constant Value'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                /* DataStoreWrite: '<S389>/Data Store Write' incorporates:
                 *  Constant: '<S391>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S389>/Data Store Write1' incorporates:
                 *  Constant: '<S392>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnOpen;

                /* DataStoreWrite: '<S389>/Data Store Write10' incorporates:
                 *  Constant: '<S395>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S389>/Data Store Write18' incorporates:
                 *  Constant: '<S396>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S389>/Data Store Write19' incorporates:
                 *  Constant: '<S396>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S389>/Data Store Write2' incorporates:
                 *  Constant: '<S390>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S389>/Data Store Write3' incorporates:
                 *  Constant: '<S393>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtClchY;

                /* DataStoreWrite: '<S389>/Data Store Write4' incorporates:
                 *  Constant: '<S397>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltOpenToModeY;

                /* DataStoreWrite: '<S389>/Data Store Write6' incorporates:
                 *  Constant: '<S394>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                /* End of Outputs for SubSystem: '<S345>/Entry' */
            }

            /* End of If: '<S345>/If' */
            /* End of Outputs for SubSystem: '<S345>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S332>/OpenToModeY' */
            break;

          case 3:
            /* SystemReset for IfAction SubSystem: '<S332>/ModeYToLocked' incorporates:
             *  ActionPort: '<S342>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S342>/EdgeRising1' */
            /* SystemReset for If: '<S332>/If1' incorporates:
             *  UnitDelay: '<S357>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_lq = ((ADCR_ac_DW.If1_ActiveSubsystem_j ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_lq));

            /* End of SystemReset for SubSystem: '<S342>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S332>/ModeYToLocked' */

            /* Outputs for IfAction SubSystem: '<S332>/ModeYToLocked' incorporates:
             *  ActionPort: '<S342>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S342>/EdgeRising1' */
            /* Logic: '<S357>/OR1' incorporates:
             *  UnitDelay: '<S357>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_lq;

            /* Update for UnitDelay: '<S357>/Unit Delay' incorporates:
             *  Constant: '<S342>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_lq = true;

            /* If: '<S342>/If' incorporates:
             *  Logic: '<S357>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S342>/Entry' incorporates:
                 *  ActionPort: '<S358>/Action Port'
                 */
                /* DataStoreWrite: '<S358>/Data Store Write7' incorporates:
                 *  Constant: '<S358>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S358>/Data Store Write15' incorporates:
                 *  Constant: '<S358>/Constant Value'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                /* DataStoreWrite: '<S358>/Data Store Write' incorporates:
                 *  Constant: '<S359>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S358>/Data Store Write1' incorporates:
                 *  Constant: '<S359>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S358>/Data Store Write10' incorporates:
                 *  Constant: '<S363>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S358>/Data Store Write18' incorporates:
                 *  Constant: '<S364>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S358>/Data Store Write19' incorporates:
                 *  Constant: '<S364>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S358>/Data Store Write3' incorporates:
                 *  Constant: '<S360>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnMY;

                /* DataStoreWrite: '<S358>/Data Store Write4' incorporates:
                 *  Constant: '<S365>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltModeYToLocked;

                /* DataStoreWrite: '<S358>/Data Store Write5' incorporates:
                 *  Constant: '<S361>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                /* DataStoreWrite: '<S358>/Data Store Write6' incorporates:
                 *  Constant: '<S362>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                /* End of Outputs for SubSystem: '<S342>/Entry' */
            }

            /* End of If: '<S342>/If' */
            /* End of Outputs for SubSystem: '<S342>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S332>/ModeYToLocked' */
            break;

          case 4:
            /* SystemReset for IfAction SubSystem: '<S332>/OpenToLocked' incorporates:
             *  ActionPort: '<S343>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S343>/EdgeRising1' */
            /* SystemReset for If: '<S332>/If1' incorporates:
             *  UnitDelay: '<S367>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_ml = ((ADCR_ac_DW.If1_ActiveSubsystem_j ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_ml));

            /* End of SystemReset for SubSystem: '<S343>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S332>/OpenToLocked' */

            /* Outputs for IfAction SubSystem: '<S332>/OpenToLocked' incorporates:
             *  ActionPort: '<S343>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S343>/EdgeRising1' */
            /* Logic: '<S367>/OR1' incorporates:
             *  UnitDelay: '<S367>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_ml;

            /* Update for UnitDelay: '<S367>/Unit Delay' incorporates:
             *  Constant: '<S343>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_ml = true;

            /* If: '<S343>/If' incorporates:
             *  Logic: '<S367>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S343>/Entry' incorporates:
                 *  ActionPort: '<S368>/Action Port'
                 */
                /* DataStoreWrite: '<S368>/Data Store Write7' incorporates:
                 *  Constant: '<S368>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S368>/Data Store Write15' incorporates:
                 *  Constant: '<S368>/Constant Value'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                /* DataStoreWrite: '<S368>/Data Store Write' incorporates:
                 *  Constant: '<S369>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S368>/Data Store Write1' incorporates:
                 *  Constant: '<S369>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S368>/Data Store Write10' incorporates:
                 *  Constant: '<S373>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S368>/Data Store Write18' incorporates:
                 *  Constant: '<S374>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S368>/Data Store Write19' incorporates:
                 *  Constant: '<S374>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S368>/Data Store Write3' incorporates:
                 *  Constant: '<S370>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnOpen;

                /* DataStoreWrite: '<S368>/Data Store Write4' incorporates:
                 *  Constant: '<S375>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltOpenToLocked;

                /* DataStoreWrite: '<S368>/Data Store Write5' incorporates:
                 *  Constant: '<S371>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                /* DataStoreWrite: '<S368>/Data Store Write6' incorporates:
                 *  Constant: '<S372>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                /* End of Outputs for SubSystem: '<S343>/Entry' */
            }

            /* End of If: '<S343>/If' */
            /* End of Outputs for SubSystem: '<S343>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S332>/OpenToLocked' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of If: '<S332>/If1' */
        /* End of Outputs for SubSystem: '<S327>/WED_ClosingGroup' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S327>/WED_OpeningGroup' incorporates:
         *  ActionPort: '<S334>/Action Port'
         */
        /* If: '<S334>/If1' incorporates:
         *  Constant: '<S403>/Constant'
         *  DataStoreRead: '<S334>/Data Store Read1'
         *  RelationalOperator: '<S334>/Relational Operator1'
         */
        rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_ix;
        ADCR_ac_DW.If1_ActiveSubsystem_ix = -1;
        if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpen_All)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_ix = 0;
        }

        if (ADCR_ac_DW.If1_ActiveSubsystem_ix == 0)
        {
            /* SystemReset for IfAction SubSystem: '<S334>/WED_OpenAll' incorporates:
             *  ActionPort: '<S404>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S404>/EdgeRising1' */
            /* SystemReset for If: '<S334>/If1' incorporates:
             *  UnitDelay: '<S406>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_jst = ((0 == rtPrevAction) &&
                (ADCR_ac_DW.UnitDelay_DSTATE_jst));

            /* End of SystemReset for SubSystem: '<S404>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S334>/WED_OpenAll' */

            /* Outputs for IfAction SubSystem: '<S334>/WED_OpenAll' incorporates:
             *  ActionPort: '<S404>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S404>/EdgeRising1' */
            /* Logic: '<S406>/OR1' incorporates:
             *  UnitDelay: '<S406>/Unit Delay'
             */
            rtb_LogicalOperator_k = !ADCR_ac_DW.UnitDelay_DSTATE_jst;

            /* Update for UnitDelay: '<S406>/Unit Delay' incorporates:
             *  Constant: '<S404>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_jst = true;

            /* If: '<S404>/If' incorporates:
             *  Constant: '<S408>/Constant'
             *  Constant: '<S409>/Constant'
             *  Constant: '<S410>/Constant'
             *  Constant: '<S411>/Constant'
             *  Constant: '<S412>/Calib'
             *  If: '<S405>/If'
             *  Logic: '<S405>/Logical1'
             *  Logic: '<S405>/Logical2'
             *  Logic: '<S405>/Logical3'
             *  Logic: '<S405>/Logical4'
             *  Logic: '<S405>/Logical5'
             *  Logic: '<S406>/AND'
             *  RelationalOperator: '<S405>/Relational Operator'
             *  RelationalOperator: '<S405>/Relational Operator1'
             *  RelationalOperator: '<S405>/Relational Operator2'
             *  RelationalOperator: '<S405>/Relational Operator3'
             *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXRawStat'
             */
            if (rtb_LogicalOperator_k)
            {
                /* Outputs for IfAction SubSystem: '<S404>/Entry' incorporates:
                 *  ActionPort: '<S407>/Action Port'
                 */
                /* DataStoreWrite: '<S407>/Data Store Write' incorporates:
                 *  Constant: '<S415>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S407>/Data Store Write1' incorporates:
                 *  Constant: '<S415>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S407>/Data Store Write2' incorporates:
                 *  Constant: '<S416>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Opening;

                /* DataStoreWrite: '<S407>/Data Store Write4' incorporates:
                 *  Constant: '<S423>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltOpenAll;

                /* DataStoreWrite: '<S407>/Data Store Write7' incorporates:
                 *  Constant: '<S418>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* RelationalOperator: '<S407>/Relational Operator1' incorporates:
                 *  Constant: '<S417>/Constant'
                 *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchXStat'
                 */
                rtb_LogicalOperator_k = (((uint32)
                    rtb_TmpSignalConversionAtVeADCC_e_AWDC_h) >=
                    CeADCR_e_Synched);

                /* RelationalOperator: '<S407>/Relational Operator2' incorporates:
                 *  Constant: '<S417>/Constant'
                 *  SignalConversion generated from: '<S3>/VeADCC_e_AWDClchYStat'
                 */
                rtb_RelationalOperator_iq = (((uint32)
                    rtb_TmpSignalConversionAtVeADCC_e_AWDC_g) >=
                    CeADCR_e_Synched);

                /* If: '<S407>/If1' incorporates:
                 *  Logic: '<S407>/Logical3'
                 */
                if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
                {
                    /* Outputs for IfAction SubSystem: '<S407>/If Action Subsystem1' incorporates:
                     *  ActionPort: '<S420>/Action Port'
                     */
                    /* DataStoreWrite: '<S420>/Data Store Write18' incorporates:
                     *  Constant: '<S420>/Constant Value'
                     */
                    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS = 0.0F;

                    /* DataStoreWrite: '<S420>/Data Store Write19' incorporates:
                     *  Constant: '<S420>/Constant Value'
                     */
                    VeADCR_M_AWDClch_TcR_Ovrd_DS = 0.0F;

                    /* DataStoreWrite: '<S420>/Data Store Write6' incorporates:
                     *  Constant: '<S420>/Constant1'
                     */
                    VeADCR_b_AWDUseLckdEqn_DS = true;

                    /* DataStoreWrite: '<S420>/Data Store Write15' incorporates:
                     *  Constant: '<S429>/Calib'
                     */
                    VeADCR_M_AWDClch_TorqEst_DS = KeADCR_M_AWDMaxClchEstLocked;

                    /* DataStoreWrite: '<S420>/Data Store Write3' incorporates:
                     *  Constant: '<S427>/Constant'
                     */
                    VeADCR_e_AWDDiscSlipSpdEqn_DS =
                        CeADCR_e_AWDDiscSlipSpdEqnLocked;

                    /* DataStoreWrite: '<S420>/Data Store Write5' incorporates:
                     *  Constant: '<S428>/Constant'
                     */
                    VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                    /* End of Outputs for SubSystem: '<S407>/If Action Subsystem1' */
                }
                else if (rtb_LogicalOperator_k && rtb_RelationalOperator_iq)
                {
                    /* Outputs for IfAction SubSystem: '<S407>/If Action Subsystem' incorporates:
                     *  ActionPort: '<S419>/Action Port'
                     */
                    /* DataStoreWrite: '<S419>/Data Store Write15' incorporates:
                     *  Constant: '<S419>/Constant Value'
                     */
                    VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                    /* DataStoreWrite: '<S419>/Data Store Write6' incorporates:
                     *  Constant: '<S419>/Constant1'
                     */
                    VeADCR_b_AWDUseLckdEqn_DS = false;

                    /* DataStoreWrite: '<S419>/Data Store Write18' incorporates:
                     *  Constant: '<S425>/Calib'
                     */
                    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* DataStoreWrite: '<S419>/Data Store Write19' incorporates:
                     *  Constant: '<S425>/Calib'
                     */
                    VeADCR_M_AWDClch_TcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* DataStoreWrite: '<S419>/Data Store Write3' incorporates:
                     *  Constant: '<S424>/Constant'
                     */
                    VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnMX;

                    /* DataStoreWrite: '<S419>/Data Store Write5' incorporates:
                     *  Constant: '<S426>/Calib'
                     */
                    VeADCR_e_AWDDiscProfEqn_DS = KeADCR_e_AWDDiscProfEqnModeX;

                    /* End of Outputs for SubSystem: '<S407>/If Action Subsystem' */
                }
                else if (rtb_LogicalOperator_k)
                {
                    /* Outputs for IfAction SubSystem: '<S407>/If Action Subsystem3' incorporates:
                     *  ActionPort: '<S422>/Action Port'
                     */
                    /* DataStoreWrite: '<S422>/Data Store Write15' incorporates:
                     *  Constant: '<S422>/Constant Value'
                     */
                    VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                    /* DataStoreWrite: '<S422>/Data Store Write6' incorporates:
                     *  Constant: '<S422>/Constant1'
                     */
                    VeADCR_b_AWDUseLckdEqn_DS = false;

                    /* DataStoreWrite: '<S422>/Data Store Write18' incorporates:
                     *  Constant: '<S434>/Calib'
                     */
                    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* DataStoreWrite: '<S422>/Data Store Write19' incorporates:
                     *  Constant: '<S434>/Calib'
                     */
                    VeADCR_M_AWDClch_TcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* DataStoreWrite: '<S422>/Data Store Write3' incorporates:
                     *  Constant: '<S433>/Constant'
                     */
                    VeADCR_e_AWDDiscSlipSpdEqn_DS =
                        CeADCR_e_AWDDiscSlipSpdEqnOpen;

                    /* DataStoreWrite: '<S422>/Data Store Write5' incorporates:
                     *  Constant: '<S435>/Calib'
                     */
                    VeADCR_e_AWDDiscProfEqn_DS = KeADCR_e_AWDDiscProfEqnLocked;

                    /* End of Outputs for SubSystem: '<S407>/If Action Subsystem3' */
                }
                else
                {
                    if (rtb_RelationalOperator_iq)
                    {
                        /* Outputs for IfAction SubSystem: '<S407>/If Action Subsystem2' incorporates:
                         *  ActionPort: '<S421>/Action Port'
                         */
                        /* DataStoreWrite: '<S421>/Data Store Write15' incorporates:
                         *  Constant: '<S421>/Constant Value'
                         */
                        VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                        /* DataStoreWrite: '<S421>/Data Store Write6' incorporates:
                         *  Constant: '<S421>/Constant1'
                         */
                        VeADCR_b_AWDUseLckdEqn_DS = false;

                        /* DataStoreWrite: '<S421>/Data Store Write18' incorporates:
                         *  Constant: '<S431>/Calib'
                         */
                        VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                            KeADCR_M_AWDMaxClchCap_TcROvrd;

                        /* DataStoreWrite: '<S421>/Data Store Write19' incorporates:
                         *  Constant: '<S431>/Calib'
                         */
                        VeADCR_M_AWDClch_TcR_Ovrd_DS =
                            KeADCR_M_AWDMaxClchCap_TcROvrd;

                        /* DataStoreWrite: '<S421>/Data Store Write3' incorporates:
                         *  Constant: '<S430>/Constant'
                         */
                        VeADCR_e_AWDDiscSlipSpdEqn_DS =
                            CeADCR_e_AWDDiscSlipSpdEqnMY;

                        /* DataStoreWrite: '<S421>/Data Store Write5' incorporates:
                         *  Constant: '<S432>/Calib'
                         */
                        VeADCR_e_AWDDiscProfEqn_DS =
                            KeADCR_e_AWDDiscProfEqnModeY;

                        /* End of Outputs for SubSystem: '<S407>/If Action Subsystem2' */
                    }
                }

                /* End of If: '<S407>/If1' */
                /* End of Outputs for SubSystem: '<S404>/Entry' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S404>/During' incorporates:
                 *  ActionPort: '<S405>/Action Port'
                 */
                if ((((((uint32)rtb_TmpSignalConversionAtVeADCC_e_AWDClc) !=
                        CeADCR_e_Opening) && (((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDClc) !=
                        CeADCR_e_Closed)) || ((CeADCR_e_Opening != ((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_b)) &&
                        (CeADCR_e_Closed != ((uint32)
                        rtb_TmpSignalConversionAtVeADCC_e_AWDC_b)))) &&
                        (KeADCR_b_EnblLckEqnFlsOpnAll))
                {
                    /* Outputs for IfAction SubSystem: '<S405>/OneWEDOpen' incorporates:
                     *  ActionPort: '<S413>/Action Port'
                     */
                    /* If: '<S405>/If' incorporates:
                     *  Constant: '<S413>/Constant'
                     *  Constant: '<S413>/Constant Value'
                     *  Constant: '<S414>/Calib'
                     *  DataStoreWrite: '<S413>/Data Store Write15'
                     *  DataStoreWrite: '<S413>/Data Store Write18'
                     *  DataStoreWrite: '<S413>/Data Store Write19'
                     *  DataStoreWrite: '<S413>/Data Store Write7'
                     */
                    VeADCR_b_AWDUseLckdEqn_DS = false;
                    VeADCR_M_AWDClch_TorqEst_DS = 0.0F;
                    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;
                    VeADCR_M_AWDClch_TcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* End of Outputs for SubSystem: '<S405>/OneWEDOpen' */
                }

                /* End of Outputs for SubSystem: '<S404>/During' */
            }

            /* End of If: '<S404>/If' */
            /* End of Outputs for SubSystem: '<S404>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S334>/WED_OpenAll' */
        }

        /* End of If: '<S334>/If1' */
        /* End of Outputs for SubSystem: '<S327>/WED_OpeningGroup' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S327>/WED_SteadyStat' incorporates:
         *  ActionPort: '<S335>/Action Port'
         */
        /* If: '<S335>/If1' incorporates:
         *  Constant: '<S436>/Constant'
         *  Constant: '<S437>/Constant'
         *  Constant: '<S438>/Constant'
         *  Constant: '<S439>/Constant'
         *  DataStoreRead: '<S335>/Data Store Read1'
         *  RelationalOperator: '<S335>/Relational Operator1'
         *  RelationalOperator: '<S335>/Relational Operator2'
         *  RelationalOperator: '<S335>/Relational Operator3'
         *  RelationalOperator: '<S335>/Relational Operator4'
         */
        rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_h;
        ADCR_ac_DW.If1_ActiveSubsystem_h = -1;
        if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDOpen)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_h = 0;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDModeX)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_h = 1;
        }
        else if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDModeY)
        {
            ADCR_ac_DW.If1_ActiveSubsystem_h = 2;
        }
        else
        {
            if (((uint32)VeADCR_e_AWDDiscCurrSt_DS) == CeADCR_e_AWDLocked)
            {
                ADCR_ac_DW.If1_ActiveSubsystem_h = 3;
            }
        }

        if (rtPrevAction != ADCR_ac_DW.If1_ActiveSubsystem_h)
        {
            switch (rtPrevAction)
            {
              case 0:
                /* Disable for If: '<S443>/If' */
                if (ADCR_ac_DW.If_ActiveSubsystem_j == 1)
                {
                    /* Disable for If: '<S491>/If1' */
                    ADCR_ac_DW.If1_ActiveSubsystem_i = -1;
                }

                ADCR_ac_DW.If_ActiveSubsystem_j = -1;
                break;

              case 1:
              case 2:
                break;

              case 3:
                /* Disable for If: '<S440>/If' */
                if (ADCR_ac_DW.If_ActiveSubsystem == 1)
                {
                    /* Disable for If: '<S444>/If1' */
                    ADCR_ac_DW.If1_ActiveSubsystem_k = -1;
                }

                ADCR_ac_DW.If_ActiveSubsystem = -1;
                break;

              default:
                /* no actions */
                break;
            }
        }

        switch (ADCR_ac_DW.If1_ActiveSubsystem_h)
        {
          case 0:
            /* SystemReset for IfAction SubSystem: '<S335>/Open' incorporates:
             *  ActionPort: '<S443>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S443>/EdgeRising1' */
            /* SystemReset for If: '<S335>/If1' incorporates:
             *  UnitDelay: '<S492>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_lp = ((ADCR_ac_DW.If1_ActiveSubsystem_h ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_lp));

            /* End of SystemReset for SubSystem: '<S443>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S335>/Open' */

            /* Outputs for IfAction SubSystem: '<S335>/Open' incorporates:
             *  ActionPort: '<S443>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S443>/EdgeRising1' */
            /* Logic: '<S492>/OR1' incorporates:
             *  UnitDelay: '<S492>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_lp;

            /* Update for UnitDelay: '<S492>/Unit Delay' incorporates:
             *  Constant: '<S443>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_lp = true;

            /* End of Outputs for SubSystem: '<S443>/EdgeRising1' */

            /* If: '<S443>/If' incorporates:
             *  Constant: '<S518>/Constant'
             *  Logic: '<S492>/AND'
             *  RelationalOperator: '<S502>/Comparison2'
             */
            rtPrevAction = ADCR_ac_DW.If_ActiveSubsystem_j;

            /* Outputs for Atomic SubSystem: '<S443>/EdgeRising1' */
            ADCR_ac_DW.If_ActiveSubsystem_j = (sint8)
                ((!rtb_TmpSignalConversionAtVeADCC_b_ClchLo) ? 1 : 0);

            /* End of Outputs for SubSystem: '<S443>/EdgeRising1' */
            if ((rtPrevAction != ADCR_ac_DW.If_ActiveSubsystem_j) &&
                    (rtPrevAction == 1))
            {
                /* Disable for If: '<S491>/If1' */
                ADCR_ac_DW.If1_ActiveSubsystem_i = -1;
            }

            if (ADCR_ac_DW.If_ActiveSubsystem_j == 0)
            {
                /* Outputs for IfAction SubSystem: '<S443>/Entry' incorporates:
                 *  ActionPort: '<S493>/Action Port'
                 */
                /* DataStoreWrite: '<S493>/Data Store Write7' incorporates:
                 *  Constant: '<S493>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S493>/Data Store Write15' incorporates:
                 *  Constant: '<S493>/Constant Value'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = 0.0F;

                /* DataStoreWrite: '<S493>/Data Store Write' incorporates:
                 *  Constant: '<S537>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S493>/Data Store Write1' incorporates:
                 *  Constant: '<S537>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S493>/Data Store Write11' incorporates:
                 *  Constant: '<S541>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S493>/Data Store Write18' incorporates:
                 *  Constant: '<S542>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S493>/Data Store Write19' incorporates:
                 *  Constant: '<S542>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S493>/Data Store Write2' incorporates:
                 *  Constant: '<S539>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtZero;

                /* DataStoreWrite: '<S493>/Data Store Write3' incorporates:
                 *  Constant: '<S538>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnOpen;

                /* DataStoreWrite: '<S493>/Data Store Write4' incorporates:
                 *  Constant: '<S543>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltOpen;

                /* DataStoreWrite: '<S493>/Data Store Write6' incorporates:
                 *  Constant: '<S540>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Open;

                /* End of Outputs for SubSystem: '<S443>/Entry' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S443>/During' incorporates:
                 *  ActionPort: '<S491>/Action Port'
                 */
                /* Outputs for Enabled SubSystem: '<S502>/WhlSpdPriority' incorporates:
                 *  EnablePort: '<S519>/Enable'
                 */
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_AWDSta) ==
                        CeADCR_e_Closed)
                {
                    /* Sum: '<S519>/Sum1' */
                    rtb_TmpSignalConversionAtVeADCC_M_AWDClc =
                        rtb_TmpSignalConversionAtVeVSDR_n_WEDLef -
                        rtb_TmpSignalConversionAtVeVSDR_n_WEDRig;

                    /* Switch: '<S519>/Switch4' incorporates:
                     *  Constant: '<S525>/Calib'
                     */
                    if (HeADCR_b_WEDPrioSimClsngEna)
                    {
                        /* Switch: '<S519>/Switch4' incorporates:
                         *  Constant: '<S524>/Calib'
                         */
                        rtb_Switch4 = KeADCR_n_WEDPrioTrnstnThrsh;
                    }
                    else
                    {
                        /* Switch: '<S519>/Switch4' incorporates:
                         *  Constant: '<S519>/Constant Value2'
                         */
                        rtb_Switch4 = 0.0F;
                    }

                    /* End of Switch: '<S519>/Switch4' */

                    /* RelationalOperator: '<S519>/Comparison2' */
                    rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                        (rtb_TmpSignalConversionAtVeADCC_M_AWDClc >= rtb_Switch4);

                    /* RelationalOperator: '<S519>/Comparison3' incorporates:
                     *  Gain: '<S519>/Gain2'
                     */
                    rtb_LogicalOperator_k =
                        (rtb_TmpSignalConversionAtVeADCC_M_AWDClc <=
                         (-rtb_Switch4));

                    /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time' */
                    /* Logic: '<S519>/NOT' incorporates:
                     *  Logic: '<S528>/OR1'
                     */
                    rtb_AND_aq = !rtb_TmpSignalConversionAtVeADCC_b_ClchLo;

                    /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time' */

                    /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time1' */
                    /* Logic: '<S519>/NOT1' incorporates:
                     *  Logic: '<S529>/OR1'
                     */
                    rtb_AND_e = !rtb_LogicalOperator_k;

                    /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time1' */

                    /* Logic: '<S519>/AND3' incorporates:
                     *  Constant: '<S525>/Calib'
                     *  Logic: '<S519>/NOT'
                     *  Logic: '<S519>/NOT1'
                     */
                    rtb_RelationalOperator_iq = ((rtb_AND_aq && rtb_AND_e) &&
                        (HeADCR_b_WEDPrioSimClsngEna));

                    /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time' */
                    /* Outputs for Atomic SubSystem: '<S528>/EdgeRising' */
                    /* Logic: '<S534>/AND' incorporates:
                     *  Logic: '<S534>/OR1'
                     *  UnitDelay: '<S534>/Unit Delay'
                     */
                    rtb_AND_nr = (rtb_TmpSignalConversionAtVeADCC_b_ClchLo &&
                                  (!ADCR_ac_DW.UnitDelay_DSTATE_lt));

                    /* Update for UnitDelay: '<S534>/Unit Delay' */
                    ADCR_ac_DW.UnitDelay_DSTATE_lt =
                        rtb_TmpSignalConversionAtVeADCC_b_ClchLo;

                    /* End of Outputs for SubSystem: '<S528>/EdgeRising' */

                    /* Switch: '<S528>/Switch1' incorporates:
                     *  Constant: '<S322>/Calib'
                     *  Constant: '<S523>/Calib'
                     *  Constant: '<S528>/Constant Value1'
                     *  Logic: '<S528>/OR'
                     *  MinMax: '<S528>/Minimum'
                     *  Sum: '<S528>/Summation'
                     *  UnitDelay: '<S528>/Unit Delay'
                     */
                    if (rtb_AND_aq || rtb_AND_nr)
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_fv = 0.0F;
                    }
                    else
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_fv = fminf
                            (KeADCR_t_WEDPrioDlyTmr, HeADCR_t_MedTED_dT +
                             ADCR_ac_DW.UnitDelay_DSTATE_fv);
                    }

                    /* End of Switch: '<S528>/Switch1' */
                    /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time' */

                    /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time1' */
                    /* Outputs for Atomic SubSystem: '<S529>/EdgeRising' */
                    /* Logic: '<S535>/AND' incorporates:
                     *  Logic: '<S535>/OR1'
                     *  UnitDelay: '<S535>/Unit Delay'
                     */
                    rtb_AND_aq = (rtb_LogicalOperator_k &&
                                  (!ADCR_ac_DW.UnitDelay_DSTATE_n));

                    /* Update for UnitDelay: '<S535>/Unit Delay' */
                    ADCR_ac_DW.UnitDelay_DSTATE_n = rtb_LogicalOperator_k;

                    /* End of Outputs for SubSystem: '<S529>/EdgeRising' */

                    /* Switch: '<S529>/Switch1' incorporates:
                     *  Constant: '<S322>/Calib'
                     *  Constant: '<S523>/Calib'
                     *  Constant: '<S529>/Constant Value1'
                     *  Logic: '<S529>/OR'
                     *  MinMax: '<S529>/Minimum'
                     *  Sum: '<S529>/Summation'
                     *  UnitDelay: '<S529>/Unit Delay'
                     */
                    if (rtb_AND_e || rtb_AND_aq)
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_dc = 0.0F;
                    }
                    else
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_dc = fminf
                            (KeADCR_t_WEDPrioDlyTmr, HeADCR_t_MedTED_dT +
                             ADCR_ac_DW.UnitDelay_DSTATE_dc);
                    }

                    /* End of Switch: '<S529>/Switch1' */
                    /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time1' */

                    /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time2' */
                    /* Outputs for Atomic SubSystem: '<S530>/EdgeRising' */
                    /* Logic: '<S536>/AND' incorporates:
                     *  Logic: '<S536>/OR1'
                     *  UnitDelay: '<S536>/Unit Delay'
                     */
                    rtb_AND_e = (rtb_RelationalOperator_iq &&
                                 (!ADCR_ac_DW.UnitDelay_DSTATE_lb));

                    /* Update for UnitDelay: '<S536>/Unit Delay' */
                    ADCR_ac_DW.UnitDelay_DSTATE_lb = rtb_RelationalOperator_iq;

                    /* End of Outputs for SubSystem: '<S530>/EdgeRising' */

                    /* Switch: '<S530>/Switch1' incorporates:
                     *  Constant: '<S322>/Calib'
                     *  Constant: '<S523>/Calib'
                     *  Constant: '<S530>/Constant Value1'
                     *  Logic: '<S530>/OR'
                     *  Logic: '<S530>/OR1'
                     *  MinMax: '<S530>/Minimum'
                     *  Sum: '<S530>/Summation'
                     *  UnitDelay: '<S530>/Unit Delay'
                     */
                    if ((!rtb_RelationalOperator_iq) || rtb_AND_e)
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_m2 = 0.0F;
                    }
                    else
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_m2 = fminf
                            (KeADCR_t_WEDPrioDlyTmr, HeADCR_t_MedTED_dT +
                             ADCR_ac_DW.UnitDelay_DSTATE_m2);
                    }

                    /* End of Switch: '<S530>/Switch1' */
                    /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time2' */

                    /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time' */
                    /* If: '<S519>/If1' incorporates:
                     *  Constant: '<S523>/Calib'
                     *  Logic: '<S528>/AND'
                     *  Logic: '<S529>/AND'
                     *  Logic: '<S530>/AND'
                     *  RelationalOperator: '<S528>/Greater  Than'
                     *  RelationalOperator: '<S529>/Greater  Than'
                     *  RelationalOperator: '<S530>/Greater  Than'
                     *  UnitDelay: '<S528>/Unit Delay'
                     *  UnitDelay: '<S529>/Unit Delay'
                     *  UnitDelay: '<S530>/Unit Delay'
                     */
                    if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo &&
                            (ADCR_ac_DW.UnitDelay_DSTATE_fv >=
                             KeADCR_t_WEDPrioDlyTmr))
                    {
                        /* Outputs for IfAction SubSystem: '<S519>/Right_Priority' incorporates:
                         *  ActionPort: '<S522>/Action Port'
                         */
                        /* Merge: '<S519>/Merge' incorporates:
                         *  Constant: '<S533>/Constant'
                         *  SignalConversion generated from: '<S522>/WEDSpdBsdPrio'
                         */
                        ADCR_ac_B.Merge_m = CeADCR_e_WEDRight;

                        /* End of Outputs for SubSystem: '<S519>/Right_Priority' */
                    }
                    else
                    {
                        /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time1' */
                        if (rtb_LogicalOperator_k &&
                                (ADCR_ac_DW.UnitDelay_DSTATE_dc >=
                                 KeADCR_t_WEDPrioDlyTmr))
                        {
                            /* Outputs for IfAction SubSystem: '<S519>/Left_Priority' incorporates:
                             *  ActionPort: '<S521>/Action Port'
                             */
                            /* Merge: '<S519>/Merge' incorporates:
                             *  Constant: '<S532>/Constant'
                             *  SignalConversion generated from: '<S521>/WEDSpdBsdPrio'
                             */
                            ADCR_ac_B.Merge_m = CeADCR_e_WEDLeft;

                            /* End of Outputs for SubSystem: '<S519>/Left_Priority' */
                        }
                        else
                        {
                            /* Outputs for Atomic SubSystem: '<S519>/Turn On Delay Time2' */
                            if (rtb_RelationalOperator_iq &&
                                    (ADCR_ac_DW.UnitDelay_DSTATE_m2 >=
                                     KeADCR_t_WEDPrioDlyTmr))
                            {
                                /* Outputs for IfAction SubSystem: '<S519>/Both_Simutaneous' incorporates:
                                 *  ActionPort: '<S520>/Action Port'
                                 */
                                /* Merge: '<S519>/Merge' incorporates:
                                 *  Constant: '<S531>/Constant'
                                 *  SignalConversion generated from: '<S520>/WEDSpdBsdPrio'
                                 */
                                ADCR_ac_B.Merge_m = CeADCR_e_WEDSimultaneous;

                                /* End of Outputs for SubSystem: '<S519>/Both_Simutaneous' */
                            }

                            /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time2' */
                        }

                        /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time1' */
                    }

                    /* End of If: '<S519>/If1' */
                    /* End of Outputs for SubSystem: '<S519>/Turn On Delay Time' */

                    /* Switch: '<S519>/Switch1' incorporates:
                     *  Constant: '<S527>/Calib'
                     */
                    if (KeADCR_b_WEDPrioOvrdEna)
                    {
                        /* Switch: '<S519>/Switch1' incorporates:
                         *  Constant: '<S526>/Calib'
                         */
                        ADCR_ac_B.Switch1_f = KeADCR_e_WEDPrioOvrdVal;
                    }
                    else
                    {
                        /* Switch: '<S519>/Switch1' incorporates:
                         *  Merge: '<S519>/Merge'
                         */
                        ADCR_ac_B.Switch1_f = ADCR_ac_B.Merge_m;
                    }

                    /* End of Switch: '<S519>/Switch1' */
                }

                /* End of Outputs for SubSystem: '<S502>/WhlSpdPriority' */

                /* DataStoreWrite: '<S502>/Data Store Write6' incorporates:
                 *  Switch: '<S519>/Switch1'
                 */
                VeADCR_e_AWDDiscPriority_DS = ADCR_ac_B.Switch1_f;

                /* Selector: '<S501>/Selector' incorporates:
                 *  Constant: '<S517>/Calib'
                 *  DataTypeConversion: '<S501>/Data Type Conversion'
                 *  Switch: '<S519>/Switch1'
                 */
                VeADCC_e_AWDDiscTarSt = KaADCR_e_WEDAWDDiscTarSt[(3 * ((sint32)
                    rtb_TmpSignalConversionAtVeHSER_e_AWDSta)) + ((sint32)
                    ADCR_ac_B.Switch1_f)];

                /* If: '<S491>/If1' incorporates:
                 *  Constant: '<S494>/Constant'
                 *  Constant: '<S495>/Constant'
                 *  Constant: '<S496>/Constant'
                 *  RelationalOperator: '<S491>/Relational Operator1'
                 *  RelationalOperator: '<S491>/Relational Operator2'
                 *  RelationalOperator: '<S491>/Relational Operator3'
                 *  Selector: '<S501>/Selector'
                 */
                rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_i;
                if (((uint32)VeADCC_e_AWDDiscTarSt) == CeADCR_e_AWDOpenToModeX)
                {
                    ADCR_ac_DW.If1_ActiveSubsystem_i = 0;
                }
                else if (((uint32)VeADCC_e_AWDDiscTarSt) ==
                         CeADCR_e_AWDOpenToModeY)
                {
                    ADCR_ac_DW.If1_ActiveSubsystem_i = 1;
                }
                else if (((uint32)VeADCC_e_AWDDiscTarSt) ==
                         CeADCR_e_AWDOpenToLocked)
                {
                    ADCR_ac_DW.If1_ActiveSubsystem_i = 2;
                }
                else
                {
                    ADCR_ac_DW.If1_ActiveSubsystem_i = 3;
                }

                switch (ADCR_ac_DW.If1_ActiveSubsystem_i)
                {
                  case 0:
                    /* Outputs for IfAction SubSystem: '<S491>/O2MX' incorporates:
                     *  ActionPort: '<S498>/Action Port'
                     */
                    /* DataStoreWrite: '<S498>/Data Store Write1' incorporates:
                     *  Constant: '<S505>/Constant'
                     */
                    VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                    /* DataStoreWrite: '<S498>/Data Store Write2' incorporates:
                     *  Constant: '<S506>/Constant'
                     */
                    VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtClchX;

                    /* End of Outputs for SubSystem: '<S491>/O2MX' */
                    break;

                  case 1:
                    /* Outputs for IfAction SubSystem: '<S491>/O2MY' incorporates:
                     *  ActionPort: '<S499>/Action Port'
                     */
                    /* DataStoreWrite: '<S499>/Data Store Write1' incorporates:
                     *  Constant: '<S507>/Constant'
                     */
                    VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                    /* DataStoreWrite: '<S499>/Data Store Write2' incorporates:
                     *  Constant: '<S508>/Constant'
                     */
                    VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtClchY;

                    /* End of Outputs for SubSystem: '<S491>/O2MY' */
                    break;

                  case 2:
                    /* Outputs for IfAction SubSystem: '<S491>/O2Locked' incorporates:
                     *  ActionPort: '<S497>/Action Port'
                     */
                    /* DataStoreWrite: '<S497>/Data Store Write1' incorporates:
                     *  Constant: '<S503>/Constant'
                     */
                    VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closing;

                    /* DataStoreWrite: '<S497>/Data Store Write2' incorporates:
                     *  Constant: '<S504>/Constant'
                     */
                    VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                    /* End of Outputs for SubSystem: '<S491>/O2Locked' */
                    break;

                  default:
                    if (ADCR_ac_DW.If1_ActiveSubsystem_i != rtPrevAction)
                    {
                        /* SystemReset for IfAction SubSystem: '<S491>/Open' incorporates:
                         *  ActionPort: '<S500>/Action Port'
                         */
                        /* SystemReset for Atomic SubSystem: '<S500>/Counter Reset Enabled ' */
                        /* SystemReset for If: '<S491>/If1' incorporates:
                         *  UnitDelay: '<S509>/Unit Delay'
                         */
                        ADCR_ac_DW.UnitDelay_DSTATE_fag = 0U;

                        /* End of SystemReset for SubSystem: '<S500>/Counter Reset Enabled ' */
                        /* End of SystemReset for SubSystem: '<S491>/Open' */
                    }

                    /* Outputs for IfAction SubSystem: '<S491>/Open' incorporates:
                     *  ActionPort: '<S500>/Action Port'
                     */
                    /* DataStoreWrite: '<S500>/Data Store Write1' incorporates:
                     *  Constant: '<S510>/Constant'
                     */
                    VeADCR_e_WEDAxleStat_DS = CeADCR_e_Open;

                    /* Outputs for Atomic SubSystem: '<S500>/Counter Reset Enabled ' */
                    /* Switch: '<S509>/Switch2' incorporates:
                     *  Abs: '<S500>/Abs'
                     *  Constant: '<S509>/Constant Value2'
                     *  Constant: '<S514>/Calib'
                     *  Logic: '<S500>/Logical Operator'
                     *  RelationalOperator: '<S500>/Relational Operator'
                     *  Switch: '<S509>/Switch'
                     *  UnitDelay: '<S509>/Unit Delay'
                     */
                    if (fabsf(rtb_TmpSignalConversionAtVeADCC_n_NxActO) >
                            KeADCR_n_AWDMtrLowSpdThrsh)
                    {
                        ADCR_ac_DW.UnitDelay_DSTATE_fag = 0U;
                    }
                    else
                    {
                        /* UnitDelay: '<S509>/Unit Delay' incorporates:
                         *  Constant: '<S509>/Constant Value1'
                         *  Sum: '<S509>/Subtraction'
                         *  Switch: '<S509>/Switch2'
                         */
                        ADCR_ac_DW.UnitDelay_DSTATE_fag = (uint16)(((uint32)
                            ADCR_ac_DW.UnitDelay_DSTATE_fag) + 1U);
                    }

                    /* End of Switch: '<S509>/Switch2' */
                    /* End of Outputs for SubSystem: '<S500>/Counter Reset Enabled ' */

                    /* If: '<S500>/If' incorporates:
                     *  Constant: '<S513>/Calib'
                     *  RelationalOperator: '<S500>/Relational Operator1'
                     *  UnitDelay: '<S509>/Unit Delay'
                     */
                    if (((float32)ADCR_ac_DW.UnitDelay_DSTATE_fag) >=
                            KeADCR_n_AWDMtrLowSpdCnt)
                    {
                        /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem1' incorporates:
                         *  ActionPort: '<S512>/Action Port'
                         */
                        /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem' incorporates:
                         *  ActionPort: '<S511>/Action Port'
                         */
                        /* DataStoreWrite: '<S511>/Data Store Write2' incorporates:
                         *  Constant: '<S515>/Constant'
                         *  DataStoreWrite: '<S512>/Data Store Write2'
                         */
                        VeADCR_e_AWDDiscProfEqn_DS =
                            CeADCR_e_AWDDiscProfEqnInactive;

                        /* End of Outputs for SubSystem: '<S500>/If Action Subsystem' */
                        /* End of Outputs for SubSystem: '<S500>/If Action Subsystem1' */
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem1' incorporates:
                         *  ActionPort: '<S512>/Action Port'
                         */
                        /* Outputs for IfAction SubSystem: '<S500>/If Action Subsystem' incorporates:
                         *  ActionPort: '<S511>/Action Port'
                         */
                        /* DataStoreWrite: '<S511>/Data Store Write2' incorporates:
                         *  Constant: '<S516>/Constant'
                         *  DataStoreWrite: '<S512>/Data Store Write2'
                         */
                        VeADCR_e_AWDDiscProfEqn_DS =
                            CeADCR_e_AWDDiscProfEqnTgtZero;

                        /* End of Outputs for SubSystem: '<S500>/If Action Subsystem' */
                        /* End of Outputs for SubSystem: '<S500>/If Action Subsystem1' */
                    }

                    /* End of If: '<S500>/If' */
                    /* End of Outputs for SubSystem: '<S491>/Open' */
                    break;
                }

                /* End of If: '<S491>/If1' */
                /* End of Outputs for SubSystem: '<S443>/During' */
            }

            /* End of If: '<S443>/If' */
            /* End of Outputs for SubSystem: '<S335>/Open' */
            break;

          case 1:
            /* SystemReset for IfAction SubSystem: '<S335>/ModeX' incorporates:
             *  ActionPort: '<S441>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S441>/EdgeRising1' */
            /* SystemReset for If: '<S335>/If1' incorporates:
             *  UnitDelay: '<S468>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_ay = ((ADCR_ac_DW.If1_ActiveSubsystem_h ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_ay));

            /* End of SystemReset for SubSystem: '<S441>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S335>/ModeX' */

            /* Outputs for IfAction SubSystem: '<S335>/ModeX' incorporates:
             *  ActionPort: '<S441>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S441>/EdgeRising1' */
            /* Logic: '<S468>/OR1' incorporates:
             *  UnitDelay: '<S468>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_ay;

            /* Update for UnitDelay: '<S468>/Unit Delay' incorporates:
             *  Constant: '<S441>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_ay = true;

            /* If: '<S441>/If' incorporates:
             *  Logic: '<S468>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S441>/Entry' incorporates:
                 *  ActionPort: '<S469>/Action Port'
                 */
                /* DataStoreWrite: '<S469>/Data Store Write7' incorporates:
                 *  Constant: '<S469>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S469>/Data Store Write' incorporates:
                 *  Constant: '<S470>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S469>/Data Store Write1' incorporates:
                 *  Constant: '<S473>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S469>/Data Store Write10' incorporates:
                 *  Constant: '<S474>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S469>/Data Store Write15' incorporates:
                 *  Constant: '<S476>/Calib'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = KeADCR_M_AWDMaxClchEstModeX;

                /* DataStoreWrite: '<S469>/Data Store Write18' incorporates:
                 *  Constant: '<S475>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S469>/Data Store Write19' incorporates:
                 *  Constant: '<S475>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S469>/Data Store Write2' incorporates:
                 *  Constant: '<S471>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnMX;

                /* DataStoreWrite: '<S469>/Data Store Write3' incorporates:
                 *  Constant: '<S472>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                /* DataStoreWrite: '<S469>/Data Store Write4' incorporates:
                 *  Constant: '<S478>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltModeX;

                /* DataStoreWrite: '<S469>/Data Store Write6' incorporates:
                 *  Constant: '<S477>/Calib'
                 */
                VeADCR_e_WEDAxleStat_DS = KeADCR_e_AWDModeXAxleStat;

                /* End of Outputs for SubSystem: '<S441>/Entry' */
            }

            /* End of If: '<S441>/If' */
            /* End of Outputs for SubSystem: '<S441>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S335>/ModeX' */
            break;

          case 2:
            /* SystemReset for IfAction SubSystem: '<S335>/ModeY' incorporates:
             *  ActionPort: '<S442>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S442>/EdgeRising1' */
            /* SystemReset for If: '<S335>/If1' incorporates:
             *  UnitDelay: '<S480>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_b5 = ((ADCR_ac_DW.If1_ActiveSubsystem_h ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_b5));

            /* End of SystemReset for SubSystem: '<S442>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S335>/ModeY' */

            /* Outputs for IfAction SubSystem: '<S335>/ModeY' incorporates:
             *  ActionPort: '<S442>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S442>/EdgeRising1' */
            /* Logic: '<S480>/OR1' incorporates:
             *  UnitDelay: '<S480>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                !ADCR_ac_DW.UnitDelay_DSTATE_b5;

            /* Update for UnitDelay: '<S480>/Unit Delay' incorporates:
             *  Constant: '<S442>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_b5 = true;

            /* If: '<S442>/If' incorporates:
             *  Logic: '<S480>/AND'
             */
            if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
            {
                /* Outputs for IfAction SubSystem: '<S442>/Entry' incorporates:
                 *  ActionPort: '<S481>/Action Port'
                 */
                /* DataStoreWrite: '<S481>/Data Store Write7' incorporates:
                 *  Constant: '<S481>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = false;

                /* DataStoreWrite: '<S481>/Data Store Write' incorporates:
                 *  Constant: '<S485>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Open;

                /* DataStoreWrite: '<S481>/Data Store Write1' incorporates:
                 *  Constant: '<S482>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S481>/Data Store Write10' incorporates:
                 *  Constant: '<S486>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_TwoWheelDrive;

                /* DataStoreWrite: '<S481>/Data Store Write15' incorporates:
                 *  Constant: '<S488>/Calib'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = KeADCR_M_AWDMaxClchEstModeY;

                /* DataStoreWrite: '<S481>/Data Store Write18' incorporates:
                 *  Constant: '<S487>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S481>/Data Store Write19' incorporates:
                 *  Constant: '<S487>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S481>/Data Store Write2' incorporates:
                 *  Constant: '<S483>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnMY;

                /* DataStoreWrite: '<S481>/Data Store Write3' incorporates:
                 *  Constant: '<S484>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

                /* DataStoreWrite: '<S481>/Data Store Write4' incorporates:
                 *  Constant: '<S490>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltModeY;

                /* DataStoreWrite: '<S481>/Data Store Write6' incorporates:
                 *  Constant: '<S489>/Calib'
                 */
                VeADCR_e_WEDAxleStat_DS = KeADCR_e_AWDModeYAxleStat;

                /* End of Outputs for SubSystem: '<S442>/Entry' */
            }

            /* End of If: '<S442>/If' */
            /* End of Outputs for SubSystem: '<S442>/EdgeRising1' */
            /* End of Outputs for SubSystem: '<S335>/ModeY' */
            break;

          case 3:
            /* SystemReset for IfAction SubSystem: '<S335>/Locked' incorporates:
             *  ActionPort: '<S440>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S440>/EdgeRising1' */
            /* SystemReset for If: '<S335>/If1' incorporates:
             *  UnitDelay: '<S445>/Unit Delay'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_l = ((ADCR_ac_DW.If1_ActiveSubsystem_h ==
                rtPrevAction) && (ADCR_ac_DW.UnitDelay_DSTATE_l));

            /* End of SystemReset for SubSystem: '<S440>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S335>/Locked' */

            /* Outputs for IfAction SubSystem: '<S335>/Locked' incorporates:
             *  ActionPort: '<S440>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S440>/EdgeRising1' */
            /* Logic: '<S445>/OR1' incorporates:
             *  UnitDelay: '<S445>/Unit Delay'
             */
            rtb_LogicalOperator_k = !ADCR_ac_DW.UnitDelay_DSTATE_l;

            /* Update for UnitDelay: '<S445>/Unit Delay' incorporates:
             *  Constant: '<S440>/Constant'
             */
            ADCR_ac_DW.UnitDelay_DSTATE_l = true;

            /* End of Outputs for SubSystem: '<S440>/EdgeRising1' */

            /* If: '<S440>/If' incorporates:
             *  Logic: '<S445>/AND'
             */
            rtPrevAction = ADCR_ac_DW.If_ActiveSubsystem;

            /* Outputs for Atomic SubSystem: '<S440>/EdgeRising1' */
            ADCR_ac_DW.If_ActiveSubsystem = (sint8)((!rtb_LogicalOperator_k) ? 1
                : 0);

            /* End of Outputs for SubSystem: '<S440>/EdgeRising1' */
            if ((rtPrevAction != ADCR_ac_DW.If_ActiveSubsystem) && (rtPrevAction
                 == 1))
            {
                /* Disable for If: '<S444>/If1' */
                ADCR_ac_DW.If1_ActiveSubsystem_k = -1;
            }

            if (ADCR_ac_DW.If_ActiveSubsystem == 0)
            {
                /* Outputs for IfAction SubSystem: '<S440>/Entry' incorporates:
                 *  ActionPort: '<S446>/Action Port'
                 */
                /* DataStoreWrite: '<S446>/Data Store Write7' incorporates:
                 *  Constant: '<S446>/Constant'
                 */
                VeADCR_b_AWDUseLckdEqn_DS = true;

                /* DataStoreWrite: '<S446>/Data Store Write' incorporates:
                 *  Constant: '<S459>/Constant'
                 */
                VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S446>/Data Store Write1' incorporates:
                 *  Constant: '<S459>/Constant'
                 */
                VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Closed;

                /* DataStoreWrite: '<S446>/Data Store Write10' incorporates:
                 *  Constant: '<S463>/Constant'
                 */
                VeADCR_e_AWDSysStat_DS = CeADCR_e_AllWheelDrive;

                /* DataStoreWrite: '<S446>/Data Store Write15' incorporates:
                 *  Constant: '<S465>/Calib'
                 */
                VeADCR_M_AWDClch_TorqEst_DS = KeADCR_M_AWDMaxClchEstLocked;

                /* DataStoreWrite: '<S446>/Data Store Write18' incorporates:
                 *  Constant: '<S464>/Calib'
                 */
                VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                    KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S446>/Data Store Write19' incorporates:
                 *  Constant: '<S464>/Calib'
                 */
                VeADCR_M_AWDClch_TcR_Ovrd_DS = KeADCR_M_AWDMaxClchCap_TcROvrd;

                /* DataStoreWrite: '<S446>/Data Store Write2' incorporates:
                 *  Constant: '<S460>/Constant'
                 */
                VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnLocked;

                /* DataStoreWrite: '<S446>/Data Store Write3' incorporates:
                 *  Constant: '<S461>/Constant'
                 */
                VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnInactive;

                /* DataStoreWrite: '<S446>/Data Store Write4' incorporates:
                 *  Constant: '<S466>/Calib'
                 */
                VeADCR_k_AWDNxProfFilt_DS = KeADCR_k_NxProfFiltLocked;

                /* DataStoreWrite: '<S446>/Data Store Write5' incorporates:
                 *  Constant: '<S462>/Constant'
                 */
                VeADCR_e_WEDAxleStat_DS = CeADCR_e_Closed;

                /* End of Outputs for SubSystem: '<S440>/Entry' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S440>/During' incorporates:
                 *  ActionPort: '<S444>/Action Port'
                 */
                /* Logic: '<S444>/Logical4' */
                rtb_TmpSignalConversionAtVeADCC_b_ClchLo =
                    !rtb_TmpSignalConversionAtVeADCC_b_ClchLo;

                /* RelationalOperator: '<S444>/Comparison2' incorporates:
                 *  Constant: '<S448>/Constant'
                 */
                rtb_LogicalOperator_k = (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_AWDSta) == CeADCR_e_Closed);

                /* If: '<S444>/If1' incorporates:
                 *  Constant: '<S447>/Constant'
                 *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
                 *  Logic: '<S444>/Logical1'
                 *  Logic: '<S444>/Logical2'
                 *  RelationalOperator: '<S444>/Comparison1'
                 */
                rtPrevAction = ADCR_ac_DW.If1_ActiveSubsystem_k;
                ADCR_ac_DW.If1_ActiveSubsystem_k = -1;
                if ((CeADCR_e_Open == ((uint32)
                                       rtb_TmpSignalConversionAtVeHSER_e_AWDSta))
                    || (rtb_TmpSignalConversionAtVeADCC_b_ClchLo &&
                        rtb_LogicalOperator_k))
                {
                    ADCR_ac_DW.If1_ActiveSubsystem_k = 0;
                }
                else
                {
                    if (rtb_LogicalOperator_k)
                    {
                        ADCR_ac_DW.If1_ActiveSubsystem_k = 1;
                    }
                }

                switch (ADCR_ac_DW.If1_ActiveSubsystem_k)
                {
                  case 0:
                    /* SystemReset for IfAction SubSystem: '<S444>/RampOutTorq' incorporates:
                     *  ActionPort: '<S450>/Action Port'
                     */
                    /* SystemReset for Atomic SubSystem: '<S450>/EdgeRising1' */
                    /* SystemReset for If: '<S444>/If1' incorporates:
                     *  UnitDelay: '<S452>/Unit Delay'
                     */
                    ADCR_ac_DW.UnitDelay_DSTATE_c =
                        ((ADCR_ac_DW.If1_ActiveSubsystem_k == rtPrevAction) &&
                         (ADCR_ac_DW.UnitDelay_DSTATE_c));

                    /* End of SystemReset for SubSystem: '<S450>/EdgeRising1' */
                    /* End of SystemReset for SubSystem: '<S444>/RampOutTorq' */
                    (void)Rte_Read_VeHTDR_M_Clch2_TCR_Actl_Value(&rtb_Switch4);

                    /* Outputs for IfAction SubSystem: '<S444>/RampOutTorq' incorporates:
                     *  ActionPort: '<S450>/Action Port'
                     */
                    /* Abs: '<S450>/Abs' incorporates:
                     *  Inport: '<Root>/VeHTDR_M_Clch2_TCR_Actl'
                     */
                    rtb_TmpSignalConversionAtVeADCC_M_AWDClc = fabsf(rtb_Switch4);

                    /* Outputs for Atomic SubSystem: '<S450>/EdgeRising1' */
                    /* Logic: '<S452>/AND' incorporates:
                     *  Logic: '<S452>/OR1'
                     *  UnitDelay: '<S452>/Unit Delay'
                     */
                    rtb_LogicalOperator_k = !ADCR_ac_DW.UnitDelay_DSTATE_c;

                    /* Update for UnitDelay: '<S452>/Unit Delay' incorporates:
                     *  Constant: '<S450>/Constant'
                     */
                    ADCR_ac_DW.UnitDelay_DSTATE_c = true;

                    /* End of Outputs for SubSystem: '<S450>/EdgeRising1' */

                    /* If: '<S450>/If1' */
                    if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
                    {
                        /* Outputs for IfAction SubSystem: '<S450>/FastRampRate' incorporates:
                         *  ActionPort: '<S453>/Action Port'
                         */
                        /* Product: '<S450>/Product' incorporates:
                         *  Constant: '<S456>/Calib'
                         *  SignalConversion generated from: '<S453>/RampRateFast'
                         */
                        rtb_Switch4 = KeADCR_dM_Tc2RampRateFast;

                        /* End of Outputs for SubSystem: '<S450>/FastRampRate' */
                    }
                    else
                    {
                        /* Outputs for IfAction SubSystem: '<S450>/RampRate' incorporates:
                         *  ActionPort: '<S454>/Action Port'
                         */
                        /* DataStoreWrite: '<S454>/Data Store Write5' incorporates:
                         *  Constant: '<S457>/Constant'
                         */
                        VeADCR_e_WEDAxleStat_DS = CeADCR_e_Opening;

                        /* Product: '<S450>/Product' incorporates:
                         *  Constant: '<S458>/Calib'
                         *  SignalConversion generated from: '<S454>/RampRate'
                         */
                        rtb_Switch4 = KeADCR_dM_Tc2RampRate;

                        /* End of Outputs for SubSystem: '<S450>/RampRate' */
                    }

                    /* End of If: '<S450>/If1' */

                    /* Product: '<S450>/Product' incorporates:
                     *  Constant: '<S322>/Calib'
                     */
                    rtb_Switch4 *= HeADCR_t_MedTED_dT;

                    /* Switch: '<S450>/Switch' incorporates:
                     *  DataStoreRead: '<S444>/Data Store Read10'
                     */
                    if (rtb_LogicalOperator_k)
                    {
                        rtb_Sum1 = rtb_TmpSignalConversionAtVeADCC_M_AWDClc;
                    }
                    else
                    {
                        rtb_Sum1 = VeADCR_M_AWDClch_TcR_Ovrd_DS;
                    }

                    /* End of Switch: '<S450>/Switch' */

                    /* MinMax: '<S450>/Minimum3' incorporates:
                     *  Constant: '<S450>/Constant Value11'
                     *  DataStoreWrite: '<S450>/Data Store Write1'
                     *  Sum: '<S450>/Sum'
                     */
                    VeADCR_M_AWDClch_TcR_Ovrd_DS = fmaxf(rtb_Sum1 - rtb_Switch4,
                        0.0F);

                    /* Switch: '<S450>/Switch1' incorporates:
                     *  Constant: '<S322>/Calib'
                     *  Constant: '<S455>/Calib'
                     *  DataStoreRead: '<S444>/Data Store Read9'
                     *  Product: '<S450>/Product1'
                     *  Sum: '<S450>/Sum2'
                     */
                    if (rtb_LogicalOperator_k)
                    {
                        rtb_Sum1 = rtb_TmpSignalConversionAtVeADCC_M_AWDClc -
                            (HeADCR_t_MedTED_dT * KeADCR_t_Tc2LeadTime);
                    }
                    else
                    {
                        rtb_Sum1 = VeADCR_M_AWDClch_LeadTcR_Ovrd_DS;
                    }

                    /* End of Switch: '<S450>/Switch1' */

                    /* MinMax: '<S450>/Minimum1' incorporates:
                     *  Constant: '<S450>/Constant Value1'
                     *  DataStoreWrite: '<S450>/Data Store Write4'
                     *  Sum: '<S450>/Sum1'
                     */
                    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS = fmaxf(rtb_Sum1 -
                        rtb_Switch4, 0.0F);

                    /* End of Outputs for SubSystem: '<S444>/RampOutTorq' */
                    break;

                  case 1:
                    /* Outputs for IfAction SubSystem: '<S444>/MaxTorq' incorporates:
                     *  ActionPort: '<S449>/Action Port'
                     */
                    /* DataStoreWrite: '<S449>/Data Store Write18' incorporates:
                     *  Constant: '<S451>/Calib'
                     */
                    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* DataStoreWrite: '<S449>/Data Store Write19' incorporates:
                     *  Constant: '<S451>/Calib'
                     */
                    VeADCR_M_AWDClch_TcR_Ovrd_DS =
                        KeADCR_M_AWDMaxClchCap_TcROvrd;

                    /* End of Outputs for SubSystem: '<S444>/MaxTorq' */
                    break;

                  default:
                    /* no actions */
                    break;
                }

                /* End of If: '<S444>/If1' */
                /* End of Outputs for SubSystem: '<S440>/During' */
            }

            /* End of If: '<S440>/If' */
            /* End of Outputs for SubSystem: '<S335>/Locked' */
            break;

          default:
            /* no actions */
            break;
        }

        /* End of If: '<S335>/If1' */
        /* End of Outputs for SubSystem: '<S327>/WED_SteadyStat' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of If: '<S327>/If1' */
    /* End of Outputs for SubSystem: '<S3>/ADCC_AWDDiscStAction' */

    /* Outputs for Function Call SubSystem: '<S3>/ADCC_NxTgtCalc' */
    /* Switch: '<S739>/Switch1' incorporates:
     *  Lookup_n-D: '<S716>/Vector'
     *  SignalConversion generated from: '<S3>/VeVSDR_n_PrimNoSgndFltrd'
     */
    rtb_Sum1 = look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeVSDR_n_PrimNo,
        ((const float32 *)&(KxADCR_n_WEDSlipTgtFrmNo[0])), ((const float32 *)
        &(KtADCR_n_WEDSlipTgtFrmNo[0])), 7U);

    /* Switch: '<S713>/Switch2' incorporates:
     *  Abs: '<S713>/Abs'
     *  Constant: '<S715>/Calib'
     *  RelationalOperator: '<S713>/Comparison2'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    if (fabsf(rtb_Sum1) >= KeADCR_n_WEDSlipTgtDeadband)
    {
        ADCR_ac_DW.UnitDelay_DSTATE_e = rtb_Sum1;
    }

    /* End of Switch: '<S713>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S714>/TgtAvgCalc' */
    /* Outputs for Atomic SubSystem: '<S714>/TgtClchXCalc' */
    /* Outputs for Atomic SubSystem: '<S714>/TgtClchYCalc' */
    /* Product: '<S728>/Product' incorporates:
     *  Constant: '<S322>/Calib'
     *  Constant: '<S755>/Calib'
     *  Product: '<S724>/Product'
     *  Product: '<S726>/Product'
     */
    rtb_Switch4 = KeADCR_d2n_OptNxDotJerkLmt * HeADCR_t_MedTED_dT;

    /* End of Outputs for SubSystem: '<S714>/TgtClchXCalc' */
    /* End of Outputs for SubSystem: '<S714>/TgtAvgCalc' */

    /* Sum: '<S728>/Sum' incorporates:
     *  Abs: '<S728>/Abs'
     *  Product: '<S728>/Product'
     *  UnitDelay: '<S728>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = rtb_Switch4 + fabsf
        (ADCR_ac_DW.UnitDelay1_DSTATE);

    /* Product: '<S728>/Product1' incorporates:
     *  Constant: '<S754>/Calib'
     *  SignalConversion generated from: '<S728>/Product1'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    tmp[0] = ADCR_ac_DW.UnitDelay_DSTATE_e;
    tmp[1] = ADCR_ac_DW.UnitDelay_DSTATE_e;
    tmp[2] = rtb_TmpSignalConversionAtVeVSDR_n_WEDLef;
    tmp[3] = rtb_TmpSignalConversionAtVeVSDR_n_WEDRig;
    rtb_TmpSignalConversionAtVeADCC_M_AWDClc = 0.0F;
    for (i = 0; i < 4; i++)
    {
        rtb_TmpSignalConversionAtVeADCC_M_AWDClc += KaADCR_r_AWDNxTgtMY[(i)] *
            tmp[i];
    }

    /* Sum: '<S728>/Sum1' incorporates:
     *  Product: '<S728>/Product1'
     *  UnitDelay: '<S728>/Unit Delay'
     */
    rtb_Sum1 = rtb_TmpSignalConversionAtVeADCC_M_AWDClc -
        ADCR_ac_DW.UnitDelay_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S728>/Protected Division1' */
    /* Switch: '<S753>/Switch1' incorporates:
     *  Constant: '<S322>/Calib'
     *  Constant: '<S753>/Constant Value'
     *  Constant: '<S753>/Constant Value1'
     *  Constant: '<S753>/Constant Value2'
     *  Constant: '<S753>/Constant Value3'
     *  Logic: '<S753>/AND'
     *  RelationalOperator: '<S753>/Greater Than or Equal '
     *  RelationalOperator: '<S753>/Greater Than or Equal 1'
     *  RelationalOperator: '<S753>/Not Equal'
     *  RelationalOperator: '<S753>/Not Equal1'
     *  Switch: '<S753>/Switch2'
     *  Switch: '<S753>/Switch3'
     */
    if ((rtb_Sum1 != 0.0F) && (HeADCR_t_MedTED_dT != 0.0F))
    {
        /* Switch: '<S753>/Switch1' incorporates:
         *  Product: '<S753>/Division'
         */
        rtb_Sum1 /= HeADCR_t_MedTED_dT;
    }
    else if (rtb_Sum1 > 0.0F)
    {
        /* Switch: '<S753>/Switch2' incorporates:
         *  Constant: '<S753>/MAXFLOAT'
         *  Switch: '<S753>/Switch1'
         */
        rtb_Sum1 = 3.402823466E+38F;
    }
    else if (rtb_Sum1 < 0.0F)
    {
        /* Switch: '<S753>/Switch3' incorporates:
         *  Constant: '<S753>/MINFLOAT'
         *  Switch: '<S753>/Switch1'
         *  Switch: '<S753>/Switch2'
         */
        rtb_Sum1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S753>/Switch1' incorporates:
         *  Constant: '<S753>/Constant Value4'
         *  Switch: '<S753>/Switch2'
         *  Switch: '<S753>/Switch3'
         */
        rtb_Sum1 = 0.0F;
    }

    /* End of Switch: '<S753>/Switch1' */
    /* End of Outputs for SubSystem: '<S728>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S728>/GradientLimiter1' */
    /* Sum: '<S752>/Sum2' incorporates:
     *  UnitDelay: '<S752>/Unit Delay'
     */
    rtb_Sum1 -= ADCR_ac_DW.UnitDelay_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S752>/Limiter' */
    /* Switch: '<S759>/Switch1' incorporates:
     *  RelationalOperator: '<S759>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_PrimNo < rtb_Sum1)
    {
        /* Switch: '<S739>/Switch1' */
        rtb_Sum1 = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;
    }

    /* End of Switch: '<S759>/Switch1' */

    /* Switch: '<S759>/Switch' incorporates:
     *  Gain: '<S728>/Gain'
     *  RelationalOperator: '<S759>/Relational Operator1'
     */
    if (rtb_Sum1 <= (-rtb_TmpSignalConversionAtVeVSDR_n_PrimNo))
    {
        rtb_Sum1 = -rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;
    }

    /* End of Switch: '<S759>/Switch' */
    /* End of Outputs for SubSystem: '<S752>/Limiter' */

    /* Sum: '<S752>/Sum3' incorporates:
     *  UnitDelay: '<S752>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_o += rtb_Sum1;

    /* End of Outputs for SubSystem: '<S728>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S728>/EdgeRising1' */
    /* Logic: '<S751>/OR1' incorporates:
     *  UnitDelay: '<S751>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeADCC_b_ClchLo = !ADCR_ac_DW.UnitDelay_DSTATE_jxl;

    /* Update for UnitDelay: '<S751>/Unit Delay' incorporates:
     *  Constant: '<S728>/Constant Value2'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_jxl = true;

    /* Outputs for Atomic SubSystem: '<S728>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S750>/Switch1' incorporates:
     *  Logic: '<S751>/AND'
     */
    if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
    {
        /* Switch: '<S750>/Switch1' incorporates:
         *  Constant: '<S728>/Constant Value1'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_f = 0.0F;
    }
    else
    {
        /* Switch: '<S750>/Switch1' incorporates:
         *  Constant: '<S756>/Calib'
         *  Product: '<S750>/Multiplication'
         *  Sum: '<S750>/Subtraction'
         *  Sum: '<S750>/Summation'
         *  UnitDelay: '<S750>/Unit Delay'
         *  UnitDelay: '<S752>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_f += (ADCR_ac_DW.UnitDelay_DSTATE_o -
            ADCR_ac_DW.UnitDelay_DSTATE_f) * KeADCR_k_OptNxDotFilt;
    }

    /* End of Switch: '<S750>/Switch1' */
    /* End of Outputs for SubSystem: '<S728>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S728>/EdgeRising1' */

    /* Update for UnitDelay: '<S728>/Unit Delay1' */
    ADCR_ac_DW.UnitDelay1_DSTATE = ADCR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S728>/Unit Delay' incorporates:
     *  Product: '<S728>/Product1'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeADCC_M_AWDClc;

    /* End of Outputs for SubSystem: '<S714>/TgtClchYCalc' */

    /* Outputs for Atomic SubSystem: '<S714>/TgtClchXCalc' */
    /* Sum: '<S726>/Sum' incorporates:
     *  Abs: '<S726>/Abs'
     *  UnitDelay: '<S726>/Unit Delay1'
     */
    rtb_Sum_fg = rtb_Switch4 + fabsf(ADCR_ac_DW.UnitDelay1_DSTATE_c);

    /* Product: '<S726>/Product1' incorporates:
     *  Constant: '<S744>/Calib'
     *  SignalConversion generated from: '<S726>/Product1'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    tmp[0] = ADCR_ac_DW.UnitDelay_DSTATE_e;
    tmp[1] = ADCR_ac_DW.UnitDelay_DSTATE_e;
    tmp[2] = rtb_TmpSignalConversionAtVeVSDR_n_WEDLef;
    tmp[3] = rtb_TmpSignalConversionAtVeVSDR_n_WEDRig;
    rtb_TmpSignalConversionAtVeVSDR_n_PrimNo = 0.0F;
    for (i = 0; i < 4; i++)
    {
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo += KaADCR_r_AWDNxTgtMX[(i)] *
            tmp[i];
    }

    /* Sum: '<S726>/Sum1' incorporates:
     *  Product: '<S726>/Product1'
     *  UnitDelay: '<S726>/Unit Delay'
     */
    rtb_Sum1 = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo -
        ADCR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S726>/Protected Division1' */
    /* Switch: '<S743>/Switch1' incorporates:
     *  Constant: '<S322>/Calib'
     *  Constant: '<S743>/Constant Value'
     *  Constant: '<S743>/Constant Value1'
     *  Constant: '<S743>/Constant Value2'
     *  Constant: '<S743>/Constant Value3'
     *  Logic: '<S743>/AND'
     *  RelationalOperator: '<S743>/Greater Than or Equal '
     *  RelationalOperator: '<S743>/Greater Than or Equal 1'
     *  RelationalOperator: '<S743>/Not Equal'
     *  RelationalOperator: '<S743>/Not Equal1'
     *  Switch: '<S743>/Switch2'
     *  Switch: '<S743>/Switch3'
     */
    if ((rtb_Sum1 != 0.0F) && (HeADCR_t_MedTED_dT != 0.0F))
    {
        /* Switch: '<S743>/Switch1' incorporates:
         *  Product: '<S743>/Division'
         */
        rtb_Sum1 /= HeADCR_t_MedTED_dT;
    }
    else if (rtb_Sum1 > 0.0F)
    {
        /* Switch: '<S743>/Switch2' incorporates:
         *  Constant: '<S743>/MAXFLOAT'
         *  Switch: '<S743>/Switch1'
         */
        rtb_Sum1 = 3.402823466E+38F;
    }
    else if (rtb_Sum1 < 0.0F)
    {
        /* Switch: '<S743>/Switch3' incorporates:
         *  Constant: '<S743>/MINFLOAT'
         *  Switch: '<S743>/Switch1'
         *  Switch: '<S743>/Switch2'
         */
        rtb_Sum1 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S743>/Switch1' incorporates:
         *  Constant: '<S743>/Constant Value4'
         *  Switch: '<S743>/Switch2'
         *  Switch: '<S743>/Switch3'
         */
        rtb_Sum1 = 0.0F;
    }

    /* End of Switch: '<S743>/Switch1' */
    /* End of Outputs for SubSystem: '<S726>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S726>/GradientLimiter1' */
    /* Sum: '<S742>/Sum2' incorporates:
     *  UnitDelay: '<S742>/Unit Delay'
     */
    rtb_Sum1 -= ADCR_ac_DW.UnitDelay_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S742>/Limiter' */
    /* Switch: '<S749>/Switch1' incorporates:
     *  RelationalOperator: '<S749>/Relational Operator'
     */
    if (rtb_Sum_fg < rtb_Sum1)
    {
        /* Switch: '<S739>/Switch1' */
        rtb_Sum1 = rtb_Sum_fg;
    }

    /* End of Switch: '<S749>/Switch1' */

    /* Switch: '<S749>/Switch' incorporates:
     *  Gain: '<S726>/Gain'
     *  RelationalOperator: '<S749>/Relational Operator1'
     */
    if (rtb_Sum1 <= (-rtb_Sum_fg))
    {
        rtb_Sum1 = -rtb_Sum_fg;
    }

    /* End of Switch: '<S749>/Switch' */
    /* End of Outputs for SubSystem: '<S742>/Limiter' */

    /* Sum: '<S742>/Sum3' incorporates:
     *  UnitDelay: '<S742>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_p += rtb_Sum1;

    /* End of Outputs for SubSystem: '<S726>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S726>/EdgeRising1' */
    /* Logic: '<S741>/OR1' incorporates:
     *  UnitDelay: '<S741>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeADCC_b_ClchLo = !ADCR_ac_DW.UnitDelay_DSTATE_mto;

    /* Update for UnitDelay: '<S741>/Unit Delay' incorporates:
     *  Constant: '<S726>/Constant Value1'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_mto = true;

    /* Outputs for Atomic SubSystem: '<S726>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S740>/Switch1' incorporates:
     *  Logic: '<S741>/AND'
     */
    if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
    {
        /* Switch: '<S740>/Switch1' incorporates:
         *  Constant: '<S726>/Constant Value'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        /* Switch: '<S740>/Switch1' incorporates:
         *  Constant: '<S746>/Calib'
         *  Product: '<S740>/Multiplication'
         *  Sum: '<S740>/Subtraction'
         *  Sum: '<S740>/Summation'
         *  UnitDelay: '<S740>/Unit Delay'
         *  UnitDelay: '<S742>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_a += (ADCR_ac_DW.UnitDelay_DSTATE_p -
            ADCR_ac_DW.UnitDelay_DSTATE_a) * KeADCR_k_OptNxDotFilt;
    }

    /* End of Switch: '<S740>/Switch1' */
    /* End of Outputs for SubSystem: '<S726>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S726>/EdgeRising1' */

    /* Update for UnitDelay: '<S726>/Unit Delay1' */
    ADCR_ac_DW.UnitDelay1_DSTATE_c = ADCR_ac_DW.UnitDelay_DSTATE_a;

    /* Update for UnitDelay: '<S726>/Unit Delay' incorporates:
     *  Product: '<S726>/Product1'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_g = rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* End of Outputs for SubSystem: '<S714>/TgtClchXCalc' */

    /* Outputs for Atomic SubSystem: '<S714>/TgtAvgCalc' */
    /* Sum: '<S724>/Sum' incorporates:
     *  Abs: '<S724>/Abs'
     *  UnitDelay: '<S724>/Unit Delay1'
     */
    rtb_Switch4 += fabsf(ADCR_ac_DW.UnitDelay1_DSTATE_h);

    /* Product: '<S724>/Product1' incorporates:
     *  Constant: '<S734>/Calib'
     *  SignalConversion generated from: '<S724>/Product1'
     *  UnitDelay: '<S713>/Unit Delay'
     */
    tmp[0] = ADCR_ac_DW.UnitDelay_DSTATE_e;
    tmp[1] = ADCR_ac_DW.UnitDelay_DSTATE_e;
    tmp[2] = rtb_TmpSignalConversionAtVeVSDR_n_WEDLef;
    tmp[3] = rtb_TmpSignalConversionAtVeVSDR_n_WEDRig;
    rtb_TmpSignalConversionAtVeVSDR_n_WEDLef = 0.0F;
    for (i = 0; i < 4; i++)
    {
        rtb_TmpSignalConversionAtVeVSDR_n_WEDLef += KaADCR_r_AWDNxTgtAvg[(i)] *
            tmp[i];
    }

    /* Sum: '<S724>/Sum1' incorporates:
     *  Product: '<S724>/Product1'
     *  UnitDelay: '<S724>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeVSDR_n_WEDRig =
        rtb_TmpSignalConversionAtVeVSDR_n_WEDLef - ADCR_ac_DW.UnitDelay_DSTATE_m;

    /* Outputs for Atomic SubSystem: '<S724>/Protected Division1' */
    /* Switch: '<S733>/Switch1' incorporates:
     *  Constant: '<S322>/Calib'
     *  Constant: '<S733>/Constant Value'
     *  Constant: '<S733>/Constant Value1'
     *  Constant: '<S733>/Constant Value2'
     *  Constant: '<S733>/Constant Value3'
     *  Logic: '<S733>/AND'
     *  RelationalOperator: '<S733>/Greater Than or Equal '
     *  RelationalOperator: '<S733>/Greater Than or Equal 1'
     *  RelationalOperator: '<S733>/Not Equal'
     *  RelationalOperator: '<S733>/Not Equal1'
     *  Switch: '<S733>/Switch2'
     *  Switch: '<S733>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeVSDR_n_WEDRig != 0.0F) &&
            (HeADCR_t_MedTED_dT != 0.0F))
    {
        /* Switch: '<S733>/Switch1' incorporates:
         *  Product: '<S733>/Division'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_WEDRig /= HeADCR_t_MedTED_dT;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_WEDRig > 0.0F)
    {
        /* Switch: '<S733>/Switch2' incorporates:
         *  Constant: '<S733>/MAXFLOAT'
         *  Switch: '<S733>/Switch1'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_WEDRig = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_n_WEDRig < 0.0F)
    {
        /* Switch: '<S733>/Switch3' incorporates:
         *  Constant: '<S733>/MINFLOAT'
         *  Switch: '<S733>/Switch1'
         *  Switch: '<S733>/Switch2'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_WEDRig = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S733>/Switch1' incorporates:
         *  Constant: '<S733>/Constant Value4'
         *  Switch: '<S733>/Switch2'
         *  Switch: '<S733>/Switch3'
         */
        rtb_TmpSignalConversionAtVeVSDR_n_WEDRig = 0.0F;
    }

    /* End of Switch: '<S733>/Switch1' */
    /* End of Outputs for SubSystem: '<S724>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S724>/GradientLimiter1' */
    /* Sum: '<S732>/Sum2' incorporates:
     *  UnitDelay: '<S732>/Unit Delay'
     */
    rtb_Sum1 = rtb_TmpSignalConversionAtVeVSDR_n_WEDRig -
        ADCR_ac_DW.UnitDelay_DSTATE_h;

    /* Outputs for Atomic SubSystem: '<S732>/Limiter' */
    /* Switch: '<S739>/Switch1' incorporates:
     *  RelationalOperator: '<S739>/Relational Operator'
     */
    if (rtb_Switch4 < rtb_Sum1)
    {
        /* Switch: '<S739>/Switch1' */
        rtb_Sum1 = rtb_Switch4;
    }

    /* End of Switch: '<S739>/Switch1' */

    /* Switch: '<S739>/Switch' incorporates:
     *  Gain: '<S724>/Gain'
     *  RelationalOperator: '<S739>/Relational Operator1'
     */
    if (rtb_Sum1 <= (-rtb_Switch4))
    {
        rtb_Sum1 = -rtb_Switch4;
    }

    /* End of Switch: '<S739>/Switch' */
    /* End of Outputs for SubSystem: '<S732>/Limiter' */

    /* Sum: '<S732>/Sum3' incorporates:
     *  UnitDelay: '<S732>/Unit Delay'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_h += rtb_Sum1;

    /* End of Outputs for SubSystem: '<S724>/GradientLimiter1' */

    /* Outputs for Atomic SubSystem: '<S724>/EdgeRising1' */
    /* Logic: '<S731>/OR1' incorporates:
     *  UnitDelay: '<S731>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeADCC_b_ClchLo = !ADCR_ac_DW.UnitDelay_DSTATE_io;

    /* Update for UnitDelay: '<S731>/Unit Delay' incorporates:
     *  Constant: '<S724>/Constant Value2'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_io = true;

    /* Outputs for Atomic SubSystem: '<S724>/Digital Lowpass Reset Enabled1' */
    /* Switch: '<S730>/Switch1' incorporates:
     *  Logic: '<S731>/AND'
     */
    if (rtb_TmpSignalConversionAtVeADCC_b_ClchLo)
    {
        /* Switch: '<S730>/Switch1' incorporates:
         *  Constant: '<S724>/Constant Value1'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_et = 0.0F;
    }
    else
    {
        /* Switch: '<S730>/Switch1' incorporates:
         *  Constant: '<S736>/Calib'
         *  Product: '<S730>/Multiplication'
         *  Sum: '<S730>/Subtraction'
         *  Sum: '<S730>/Summation'
         *  UnitDelay: '<S730>/Unit Delay'
         *  UnitDelay: '<S732>/Unit Delay'
         */
        ADCR_ac_DW.UnitDelay_DSTATE_et += (ADCR_ac_DW.UnitDelay_DSTATE_h -
            ADCR_ac_DW.UnitDelay_DSTATE_et) * KeADCR_k_OptNxDotFilt;
    }

    /* End of Switch: '<S730>/Switch1' */
    /* End of Outputs for SubSystem: '<S724>/Digital Lowpass Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S724>/EdgeRising1' */

    /* Update for UnitDelay: '<S724>/Unit Delay1' */
    ADCR_ac_DW.UnitDelay1_DSTATE_h = ADCR_ac_DW.UnitDelay_DSTATE_et;

    /* Update for UnitDelay: '<S724>/Unit Delay' incorporates:
     *  Product: '<S724>/Product1'
     */
    ADCR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtVeVSDR_n_WEDLef;

    /* End of Outputs for SubSystem: '<S714>/TgtAvgCalc' */

    /* If: '<S714>/If2' incorporates:
     *  Constant: '<S717>/Constant'
     *  Constant: '<S718>/Constant'
     *  Constant: '<S719>/Constant'
     *  Constant: '<S720>/Constant'
     *  Constant: '<S721>/Constant'
     *  DataStoreRead: '<S714>/Data Store Read6'
     *  Product: '<S724>/Product1'
     *  Product: '<S726>/Product1'
     *  Product: '<S728>/Product1'
     *  RelationalOperator: '<S714>/Relational Operator1'
     *  RelationalOperator: '<S714>/Relational Operator2'
     *  RelationalOperator: '<S714>/Relational Operator3'
     *  RelationalOperator: '<S714>/Relational Operator4'
     *  RelationalOperator: '<S714>/Relational Operator5'
     */
    if (((uint32)VeADCR_e_AWDDiscProfEqn_DS) == CeADCR_e_AWDDiscProfEqnTgtZero)
    {
        /* Outputs for IfAction SubSystem: '<S714>/NxTgtZeroSpd' incorporates:
         *  ActionPort: '<S723>/Action Port'
         */
        /* Merge: '<S714>/Merge' incorporates:
         *  Constant: '<S723>/Constant Value'
         *  SignalConversion generated from: '<S723>/NxTgt'
         */
        ADCR_ac_B.Merge = 0.0F;

        /* Merge: '<S714>/Merge1' incorporates:
         *  Constant: '<S723>/Constant Value1'
         *  SignalConversion generated from: '<S723>/NxTgtDot'
         */
        ADCR_ac_B.Merge1 = 0.0F;

        /* End of Outputs for SubSystem: '<S714>/NxTgtZeroSpd' */
    }
    else if (((uint32)VeADCR_e_AWDDiscProfEqn_DS) ==
             CeADCR_e_AWDDiscProfEqnTgtClchX)
    {
        /* Outputs for IfAction SubSystem: '<S714>/TgtClchXSelect' incorporates:
         *  ActionPort: '<S727>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S714>/TgtClchXCalc' */
        ADCR_ac_TgtClchXSelect(rtb_TmpSignalConversionAtVeVSDR_n_PrimNo,
                               ADCR_ac_DW.UnitDelay_DSTATE_a, &ADCR_ac_B.Merge,
                               &ADCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S714>/TgtClchXCalc' */
        /* End of Outputs for SubSystem: '<S714>/TgtClchXSelect' */
    }
    else if (((uint32)VeADCR_e_AWDDiscProfEqn_DS) ==
             CeADCR_e_AWDDiscProfEqnTgtClchY)
    {
        /* Outputs for IfAction SubSystem: '<S714>/TgtClchYSelect' incorporates:
         *  ActionPort: '<S729>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S714>/TgtClchYCalc' */
        ADCR_ac_TgtClchXSelect(rtb_TmpSignalConversionAtVeADCC_M_AWDClc,
                               ADCR_ac_DW.UnitDelay_DSTATE_f, &ADCR_ac_B.Merge,
                               &ADCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S714>/TgtClchYCalc' */
        /* End of Outputs for SubSystem: '<S714>/TgtClchYSelect' */
    }
    else if (((uint32)VeADCR_e_AWDDiscProfEqn_DS) ==
             CeADCR_e_AWDDiscProfEqnTgtAvg)
    {
        /* Outputs for IfAction SubSystem: '<S714>/TgtAvgSelect' incorporates:
         *  ActionPort: '<S725>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S714>/TgtAvgCalc' */
        ADCR_ac_TgtClchXSelect(rtb_TmpSignalConversionAtVeVSDR_n_WEDLef,
                               ADCR_ac_DW.UnitDelay_DSTATE_et, &ADCR_ac_B.Merge,
                               &ADCR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S714>/TgtAvgCalc' */
        /* End of Outputs for SubSystem: '<S714>/TgtAvgSelect' */
    }
    else
    {
        if (((uint32)VeADCR_e_AWDDiscProfEqn_DS) ==
                CeADCR_e_AWDDiscProfEqnInactive)
        {
            /* Outputs for IfAction SubSystem: '<S714>/InactiveTgt' incorporates:
             *  ActionPort: '<S722>/Action Port'
             */
            /* Merge: '<S714>/Merge' incorporates:
             *  Inport: '<S722>/VeADCC_n_NxAct'
             */
            ADCR_ac_B.Merge = rtb_TmpSignalConversionAtVeADCC_n_NxActO;

            /* Merge: '<S714>/Merge1' incorporates:
             *  Inport: '<S722>/VeADCC_dn_NxDotAct'
             */
            ADCR_ac_B.Merge1 = rtb_TmpSignalConversionAtVeADCC_dn_NxDot;

            /* End of Outputs for SubSystem: '<S714>/InactiveTgt' */
        }
    }

    /* End of If: '<S714>/If2' */

    /* DataStoreWrite: '<S712>/Data Store Write' */
    VeADCR_n_AWDNxTgt_DS = ADCR_ac_B.Merge;

    /* DataStoreWrite: '<S712>/Data Store Write1' */
    VeADCR_dn_AWDNxTgtDot_DS = ADCR_ac_B.Merge1;

    /* End of Outputs for SubSystem: '<S3>/ADCC_NxTgtCalc' */

    /* Outputs for Function Call SubSystem: '<S3>/ADCC_20ms_UpdateOutputs' */
    /* DataTypeConversion: '<S323>/DataTypeConversion' incorporates:
     *  DataStoreRead: '<S317>/Data Store Read2'
     */
    ADCR_ac_B.DataTypeConversion = VeADCR_e_WEDAxleStat_DS;

    /* Selector: '<S317>/Selector' incorporates:
     *  Constant: '<S326>/Calib'
     *  DataStoreRead: '<S317>/Data Store Read2'
     *  DataTypeConversion: '<S317>/Data Type Conversion1'
     */
    ADCR_ac_B.Selector_p = KaADCR_i_WEDAxleStatCANMap[(sint8)
        VeADCR_e_WEDAxleStat_DS];

    /* DataStoreRead: '<S317>/Data Store Read' */
    ADCR_ac_B.DataStoreRead = VeADCR_n_AWDNxTgt_DS;

    /* DataStoreRead: '<S317>/Data Store Read1' */
    ADCR_ac_B.DataStoreRead1 = VeADCR_dn_AWDNxTgtDot_DS;

    /* DataStoreRead: '<S317>/Data Store Read3' */
    ADCR_ac_B.DataStoreRead3 = VeADCR_M_AWDClch_TcR_Ovrd_DS;

    /* DataStoreRead: '<S317>/Data Store Read4' */
    ADCR_ac_B.DataStoreRead4 = VeADCR_M_AWDClch_LeadTcR_Ovrd_DS;

    /* DataStoreRead: '<S317>/Data Store Read5' */
    ADCR_ac_B.DataStoreRead5 = VeADCR_b_AWDUseLckdEqn_DS;

    /* DataStoreRead: '<S317>/Data Store Read6' */
    ADCR_ac_B.DataStoreRead6 = VeADCR_k_AWDNxProfFilt_DS;

    /* DataStoreRead: '<S317>/Data Store Read7' */
    ADCR_ac_B.DataStoreRead7 = VeADCR_M_AWDClch_TorqEst_DS;

    /* DataStoreRead: '<S317>/Data Store Read8' */
    ADCR_ac_B.DataStoreRead8 = VeADCC_b_AWDClchOffloaded_DS;

    /* DataTypeConversion: '<S324>/DataTypeConversion' incorporates:
     *  DataStoreRead: '<S317>/Data Store Read9'
     */
    ADCR_ac_B.DataTypeConversion_e = VeADCR_e_AWDSysStat_DS;

    /* DataTypeConversion: '<S325>/DataTypeConversion' incorporates:
     *  DataStoreRead: '<S317>/Data Store Read10'
     */
    ADCR_ac_B.DataTypeConversion_f = VeADCR_e_AWDDiscCurrSt_DS;

    /* End of Outputs for SubSystem: '<S3>/ADCC_20ms_UpdateOutputs' */
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outputs for Function Call SubSystem: '<S3>/ADCR_MedTED1_NF' */
    /* SignalConversion generated from: '<S321>/VeADCR_e_WEDAxleStat_Out_Init' incorporates:
     *  Constant: '<S769>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_O_f =
        ADCR_ac_ConstB.Constant_f;

    /* Selector: '<S321>/Selector' incorporates:
     *  Constant: '<S774>/Calib'
     */
    ADCR_ac_B.Selector_k = KaADCR_i_WEDAxleStatCANMap[4];

    /* SignalConversion generated from: '<S321>/VeADCR_n_AWDNxTgt_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_n_AWDNxTgt_Out__b = 0.0F;

    /* SignalConversion generated from: '<S321>/VeADCR_dn_AWDNxTgtDot_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_dn_AWDNxTgtDot__h = 0.0F;

    /* SignalConversion generated from: '<S321>/VeADCR_M_AWDMaxClchCap_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_M_AWDMaxClchCap_a = 0.0F;

    /* SignalConversion generated from: '<S321>/VeADCR_M_AWDLeadClchCap_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_M_AWDLeadClchCa_l = 0.0F;

    /* SignalConversion generated from: '<S321>/VeADCR_b_UseLckedEqn_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_O_g = true;

    /* SignalConversion generated from: '<S321>/VeADCR_k_AWDNxProfFilt_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_k_AWDNxProfFilt_e = 0.0F;

    /* SignalConversion generated from: '<S321>/VeADCR_M_AWDClchEst_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_M_AWDClchEst_Ou_k = 0.0F;

    /* SignalConversion generated from: '<S321>/VeADCR_b_ADCOfldCnfm_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_ADCOfldCnfm_O_c = false;

    /* SignalConversion generated from: '<S321>/VeADCR_e_AWDSysStat_Out_Init' incorporates:
     *  Constant: '<S760>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Ou_c =
        ADCR_ac_ConstB.Constant_mj;

    /* SignalConversion generated from: '<S321>/VeADCR_e_AWDDiscCurrSt_Out_Init' incorporates:
     *  Constant: '<S763>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_p =
        ADCR_ac_ConstB.Constant_g;

    /* End of Outputs for SubSystem: '<S3>/ADCR_MedTED1_NF' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S3>/VariantSource10' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_M_AWDClch_TorqEst' */
    (void)Rte_Write_VeADCR_M_AWDClch_TorqEst_Value(ADCR_ac_B.DataStoreRead7);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_M_AWDClch_TorqEst' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource10'
     */
    (void)Rte_Write_VeADCR_M_AWDClch_TorqEst_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_AWDClchEst_Ou_k);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource10' */

    /* SignalConversion generated from: '<S3>/VariantSource11' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_b_ADCOfldCnfm' */
    (void)Rte_Write_VeADCR_b_ADCOfldCnfm_Value(ADCR_ac_B.DataStoreRead8);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_b_ADCOfldCnfm' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource11'
     */
    (void)Rte_Write_VeADCR_b_ADCOfldCnfm_Value
        (ADCR_ac_B.OutportBufferForVeADCR_b_ADCOfldCnfm_O_c);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource11' */

    /* SignalConversion generated from: '<S3>/VariantSource12' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_AWDSysStat' incorporates:
     *  DataTypeConversion: '<S324>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_AWDSysStat_Value(ADCR_ac_B.DataTypeConversion_e);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_AWDSysStat' incorporates:
     *  SignalConversion generated from: '<S321>/VeADCR_e_AWDSysStat_Out_Init'
     *  SignalConversion generated from: '<S3>/VariantSource12'
     */
    (void)Rte_Write_VeADCR_e_AWDSysStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Ou_c);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource12' */

    /* SignalConversion generated from: '<S3>/VariantSource13' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_AWDDiscCurrSt' incorporates:
     *  DataTypeConversion: '<S325>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_AWDDiscCurrSt_Value(ADCR_ac_B.DataTypeConversion_f);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_AWDDiscCurrSt' incorporates:
     *  SignalConversion generated from: '<S321>/VeADCR_e_AWDDiscCurrSt_Out_Init'
     *  SignalConversion generated from: '<S3>/VariantSource13'
     */
    (void)Rte_Write_VeADCR_e_AWDDiscCurrSt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_p);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource13' */

    /* SignalConversion generated from: '<S3>/VariantSource1' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_i_WEDAxleStat_CAN' */
    (void)Rte_Write_VeADCR_i_WEDAxleStat_CAN_Value(ADCR_ac_B.Selector_p);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_i_WEDAxleStat_CAN' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource1'
     */
    (void)Rte_Write_VeADCR_i_WEDAxleStat_CAN_Value(ADCR_ac_B.Selector_k);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource1' */

    /* SignalConversion generated from: '<S3>/VariantSource2' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_n_AWDNxTgt' */
    (void)Rte_Write_VeADCR_n_AWDNxTgt_Value(ADCR_ac_B.DataStoreRead);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_n_AWDNxTgt' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource2'
     */
    (void)Rte_Write_VeADCR_n_AWDNxTgt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_n_AWDNxTgt_Out__b);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource2' */

    /* SignalConversion generated from: '<S3>/VariantSource3' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_dn_AWDNxTgtDot' */
    (void)Rte_Write_VeADCR_dn_AWDNxTgtDot_Value(ADCR_ac_B.DataStoreRead1);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_dn_AWDNxTgtDot' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource3'
     */
    (void)Rte_Write_VeADCR_dn_AWDNxTgtDot_Value
        (ADCR_ac_B.OutportBufferForVeADCR_dn_AWDNxTgtDot__h);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource3' */

    /* SignalConversion generated from: '<S3>/VariantSource5' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDAxleStat' incorporates:
     *  DataTypeConversion: '<S323>/DataTypeConversion'
     */
    (void)Rte_Write_VeADCR_e_WEDAxleStat_Value(ADCR_ac_B.DataTypeConversion);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDAxleStat' incorporates:
     *  SignalConversion generated from: '<S321>/VeADCR_e_WEDAxleStat_Out_Init'
     *  SignalConversion generated from: '<S3>/VariantSource5'
     */
    (void)Rte_Write_VeADCR_e_WEDAxleStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_O_f);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource5' */

    /* SignalConversion generated from: '<S3>/VariantSource6' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_M_AWDClch_TcR_Ovrd' */
    (void)Rte_Write_VeADCR_M_AWDClch_TcR_Ovrd_Value(ADCR_ac_B.DataStoreRead3);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_M_AWDClch_TcR_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource6'
     */
    (void)Rte_Write_VeADCR_M_AWDClch_TcR_Ovrd_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_AWDMaxClchCap_a);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource6' */

    /* SignalConversion generated from: '<S3>/VariantSource7' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_M_AWDClch_LeadTcR_Ovrd' */
    (void)Rte_Write_VeADCR_M_AWDClch_LeadTcR_Ovrd_Value(ADCR_ac_B.DataStoreRead4);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_M_AWDClch_LeadTcR_Ovrd' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource7'
     */
    (void)Rte_Write_VeADCR_M_AWDClch_LeadTcR_Ovrd_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_AWDLeadClchCa_l);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource7' */

    /* SignalConversion generated from: '<S3>/VariantSource8' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_b_AWDUseLckedEqn' */
    (void)Rte_Write_VeADCR_b_AWDUseLckedEqn_Value(ADCR_ac_B.DataStoreRead5);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_b_AWDUseLckedEqn' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource8'
     */
    (void)Rte_Write_VeADCR_b_AWDUseLckedEqn_Value
        (ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_O_g);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource8' */

    /* SignalConversion generated from: '<S3>/VariantSource9' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_k_AWDNxProfFilt' */
    (void)Rte_Write_VeADCR_k_AWDNxProfFilt_Value(ADCR_ac_B.DataStoreRead6);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_k_AWDNxProfFilt' incorporates:
     *  SignalConversion generated from: '<S3>/VariantSource9'
     */
    (void)Rte_Write_VeADCR_k_AWDNxProfFilt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_k_AWDNxProfFilt_e);

#endif

    /* End of SignalConversion generated from: '<S3>/VariantSource9' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */
}

/* Model step function for TID4 */
FUNC(void, ADCR_CODE) ADCR_MedTED2(void) /* Explicit Task: MedTED2 */
{

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 VeADCR_i_AWDReqIdx;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    uint8 tmpRead;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_LogicalOperator1;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    TeADCR_e_AWDReqArb tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTED2'
     */
    /* SignalConversion generated from: '<S4>/VeADIR_e_BSM_WEDModeReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeVSDR_n_PrimNoSgndFltrd'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* SignalConversion generated from: '<S4>/VeADIR_e_BSM_WEDModeReq' incorporates:
     *  Inport: '<Root>/VeADIR_e_BSM_WEDModeReq'
     */
    (void)Rte_Read_VeADIR_e_BSM_WEDModeReq_Value
        (&ADCR_ac_B.TmpSignalConversionAtVeADIR_e_BSM_WEDMod);

    /* SignalConversion generated from: '<S4>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&ADCR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd);

#endif

    /* End of SignalConversion generated from: '<S4>/VeADIR_e_BSM_WEDModeReq' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* S-Function (fcgen): '<S4>/FcnCallGen' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Inport: '<Root>/VeLLDR_e_AWDDiscnctAllwd' */
    (void)Rte_Read_VeLLDR_e_AWDDiscnctAllwd_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<S4>/ADCC_WEDReqArb' */
    /* Logic: '<S783>/Logical Operator1' incorporates:
     *  Constant: '<S801>/Calib'
     *  Constant: '<S802>/Calib'
     *  DataStoreRead: '<S783>/Data Store Read'
     *  Logic: '<S783>/Logical Operator2'
     *  RelationalOperator: '<S783>/Comparison1'
     *  RelationalOperator: '<S783>/Comparison2'
     *  RelationalOperator: '<S783>/Comparison3'
     *  UnitDelay: '<S783>/Unit Delay'
     */
    rtb_LogicalOperator1 = (((ADCR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd
        <= KeADCR_n_VehSpdHigh_HighSpdThsld) &&
        (ADCR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd >=
         KeADCR_n_VehSpdHigh_LowSpdThsld)) && (VeADCR_e_AWDSysStat_DS !=
        ADCR_ac_DW.UnitDelay_DSTATE_pl));

    /* Outputs for Atomic SubSystem: '<S783>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S804>/EdgeFalling' */
    /* Logic: '<S805>/AND' incorporates:
     *  Logic: '<S805>/OR1'
     *  UnitDelay: '<S805>/Unit Delay'
     */
    rtb_AND = ((!rtb_LogicalOperator1) && (ADCR_ac_DW.UnitDelay_DSTATE_b1));

    /* Update for UnitDelay: '<S805>/Unit Delay' */
    ADCR_ac_DW.UnitDelay_DSTATE_b1 = rtb_LogicalOperator1;

    /* End of Outputs for SubSystem: '<S804>/EdgeFalling' */

    /* Switch: '<S804>/Switch' incorporates:
     *  Constant: '<S779>/Calib'
     *  Constant: '<S803>/Calib'
     *  Constant: '<S804>/Constant Value1'
     *  MinMax: '<S804>/Minimum'
     *  Sum: '<S804>/Summation'
     *  UnitDelay: '<S804>/Unit Delay'
     */
    if (rtb_AND)
    {
        ADCR_ac_DW.UnitDelay_DSTATE = KeADCR_t_VehSpdHigh_HighSpdReqDly;
    }
    else
    {
        ADCR_ac_DW.UnitDelay_DSTATE = fmaxf(ADCR_ac_DW.UnitDelay_DSTATE -
            HeADCR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S804>/Switch' */

    /* Logic: '<S804>/AND' incorporates:
     *  Constant: '<S804>/Constant Value2'
     *  RelationalOperator: '<S804>/Greater  Than'
     *  UnitDelay: '<S804>/Unit Delay'
     */
    rtb_LogicalOperator1 = (rtb_LogicalOperator1 || (ADCR_ac_DW.UnitDelay_DSTATE
        > 0.0F));

    /* End of Outputs for SubSystem: '<S783>/Turn Off Delay Time' */
    /* Gateway: ADCR_MedTED2/ADCC_WEDReqArb/ADCC_AWDReqPrioCtrl */
    /* During: ADCR_MedTED2/ADCC_WEDReqArb/ADCC_AWDReqPrioCtrl */
    /* Entry Internal: ADCR_MedTED2/ADCC_WEDReqArb/ADCC_AWDReqPrioCtrl */
    /* Transition: '<S780>:9' */
    /* Reset request index and request flag */
    VeADCR_i_AWDReqIdx = 0U;
    VeADCR_e_AWDActvReq_DS = CeADCR_e_AWDReqArb_NoArb;
    do
    {
        /* Transition: '<S780>:82' */
        /*  Check first request */
        tmp = HaADCR_e_AWDReqArbPrioOrder[(VeADCR_i_AWDReqIdx)];
        if (((uint32)tmp) == CeADCR_e_AWDReqArb_VehSpdHigh_A)
        {
            /* Transition: '<S780>:7' */
            /* Transition: '<S780>:6' */
            /* Event: '<S780>:72' */
            if (rtb_LogicalOperator1)
            {
                if (CeADCR_e_AllWheelDrive == ((uint32)VeADCR_e_AWDSysStat_DS))
                {
                    ADCR_ac_ForceClosed(&ADCR_ac_B.Merge_mz);
                }
                else
                {
                    if (((uint32)VeADCR_e_AWDSysStat_DS) ==
                            CeADCR_e_TwoWheelDrive)
                    {
                        ADCR_ac_ForceOpen(&ADCR_ac_B.Merge_mz);
                    }
                }

                VeADCR_e_WEDCmndArb_DS = ADCR_ac_B.Merge_mz;
                VeADCR_i_WEDCmndArbPrioLvl_DS =
                    HeADCR_i_ReqArbPrioLvl_VehSpdHigh_A;
                VeADCR_e_AWDActvReq_DS = CeADCR_e_AWDReqArb_VehSpdHigh_A;
            }

            /* Transition: '<S780>:21' */
        }
        else
        {
            /* Transition: '<S780>:3' */
        }

        /* Transition: '<S780>:20' */
        /* Check second request */
        if (((uint32)tmp) == CeADCR_e_AWDReqArb_VehSpdHigh_B)
        {
            /* Transition: '<S780>:13' */
            /* Transition: '<S780>:19' */
            /* Event: '<S780>:75' */
            if (ADCR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd >=
                    KeADCR_n_VehSpdHigh_HighSpdThsld)
            {
                if (CeADCR_e_AllWheelDrive == ((uint32)VeADCR_e_AWDSysStat_DS))
                {
                    ADCR_ac_ForceClosed(&ADCR_ac_B.Merge_a);
                }
                else
                {
                    if (((uint32)VeADCR_e_AWDSysStat_DS) ==
                            CeADCR_e_TwoWheelDrive)
                    {
                        ADCR_ac_ForceOpen(&ADCR_ac_B.Merge_a);
                    }
                }

                VeADCR_e_WEDCmndArb_DS = ADCR_ac_B.Merge_a;
                VeADCR_i_WEDCmndArbPrioLvl_DS =
                    HeADCR_i_ReqArbPrioLvl_VehSpdHigh_B;
                VeADCR_e_AWDActvReq_DS = CeADCR_e_AWDReqArb_VehSpdHigh_B;
            }

            /* Transition: '<S780>:22' */
        }
        else
        {
            /* Transition: '<S780>:15' */
        }

        /* Transition: '<S780>:86' */
        /*  Check third request */
        if (((uint32)tmp) == CeADCR_e_AWDReqArb_VehSpdLow)
        {
            /* Transition: '<S780>:33' */
            /* Transition: '<S780>:37' */
            /* Event: '<S780>:76' */
            if (ADCR_ac_B.TmpSignalConversionAtVeVSDR_n_PrimNoSgnd <=
                    KeADCR_n_VehSpdLow_LowSpdThsld)
            {
                VeADCR_e_WEDCmndArb_DS = CeADCR_e_ForceClosed;
                VeADCR_i_WEDCmndArbPrioLvl_DS = HeADCR_i_ReqArbPrioLvl_VehSpdLow;
                VeADCR_e_AWDActvReq_DS = CeADCR_e_AWDReqArb_VehSpdLow;
            }

            /* Transition: '<S780>:31' */
        }
        else
        {
            /* Transition: '<S780>:38' */
        }

        /* Transition: '<S780>:57' */
        /*  Check fourth request */
        if (((uint32)tmp) == CeADCR_e_AWDReqArb_BSM)
        {
            /* Transition: '<S780>:46' */
            /* Transition: '<S780>:41' */
            /* Event: '<S780>:77' */
            ADCR_ac_B.Switch =
                ADCR_ac_B.TmpSignalConversionAtVeADIR_e_BSM_WEDMod;
            if ((CeADCR_e_ForceClosed == ((uint32)ADCR_ac_B.Switch)) ||
                    (CeADCR_e_ForceOpen == ((uint32)ADCR_ac_B.Switch)))
            {
                VeADCR_e_WEDCmndArb_DS =
                    ADCR_ac_B.TmpSignalConversionAtVeADIR_e_BSM_WEDMod;
                VeADCR_i_WEDCmndArbPrioLvl_DS = HeADCR_i_ReqArbPrioLvl_BSM;
                VeADCR_e_AWDActvReq_DS = CeADCR_e_AWDReqArb_BSM;
            }

            /* Transition: '<S780>:42' */
        }
        else
        {
            /* Transition: '<S780>:39' */
        }

        /* Transition: '<S780>:58' */
        /*  Check fifth request */
        if (((uint32)tmp) == CeADCR_e_AWDReqArb_VehDyn)
        {
            /* Transition: '<S780>:50' */
            /* Transition: '<S780>:49' */
            /* Event: '<S780>:78' */
            ADCR_ac_B.Switch = KaADCR_e_AWDDiscnctAllwdMap[(tmpRead)];
            if ((CeADCR_e_ForceOpen == ((uint32)ADCR_ac_B.Switch)) ||
                    (CeADCR_e_ForceClosed == ((uint32)ADCR_ac_B.Switch)))
            {
                VeADCR_e_WEDCmndArb_DS = ADCR_ac_B.Switch;
                VeADCR_i_WEDCmndArbPrioLvl_DS = HeADCR_i_ReqArbPrioLvl_VehDyn;
                VeADCR_e_AWDActvReq_DS = CeADCR_e_AWDReqArb_VehDyn;
            }

            /* Transition: '<S780>:52' */
        }
        else
        {
            /* Transition: '<S780>:54' */
        }

        /* Transition: '<S780>:91' */
        /*  Increment request index */
        VeADCR_i_AWDReqIdx = (uint8)((sint32)(((sint32)VeADCR_i_AWDReqIdx) + 1));

        /*  Search through next request */
        /* Transition: '<S780>:87' */
    }
    while ((((sint32)VeADCR_i_AWDReqIdx) < 5) && (((uint32)
                    VeADCR_e_AWDActvReq_DS) == CeADCR_e_AWDReqArb_NoArb));

    /* Chart: '<S777>/ADCC_AWDReqPrioCtrl' incorporates:
     *  SubSystem: '<S777>/AnalyzeReq'
     */
    /* If: '<S781>/If' incorporates:
     *  Constant: '<S793>/Constant'
     *  DataStoreRead: '<S781>/Data Store Read'
     *  RelationalOperator: '<S781>/Comparison1'
     */
    /* Transition: '<S780>:95' */
    /*  Output final decision */
    /* Event: '<S780>:79' */
    if (((uint32)VeADCR_e_AWDActvReq_DS) != CeADCR_e_AWDReqArb_NoArb)
    {
        /* Outputs for IfAction SubSystem: '<S781>/ActiveReq' incorporates:
         *  ActionPort: '<S792>/Action Port'
         */
        /* RelationalOperator: '<S782>/Comparison1' incorporates:
         *  DataStoreRead: '<S792>/Data Store Read'
         *  Merge: '<S781>/Merge'
         */
        ADCR_ac_B.Switch = VeADCR_e_WEDCmndArb_DS;

        /* Merge: '<S781>/Merge1' incorporates:
         *  DataStoreRead: '<S792>/Data Store Read1'
         */
        ADCR_ac_B.Switch1 = VeADCR_i_WEDCmndArbPrioLvl_DS;

        /* End of Outputs for SubSystem: '<S781>/ActiveReq' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S781>/NoActiveReq' incorporates:
         *  ActionPort: '<S794>/Action Port'
         */
        /* RelationalOperator: '<S782>/Comparison1' incorporates:
         *  Constant: '<S795>/Constant'
         *  Merge: '<S781>/Merge'
         *  SignalConversion generated from: '<S794>/VeADCR_e_WEDCmndArb'
         */
        ADCR_ac_B.Switch = CeADCR_e_ReqOpt;

        /* Merge: '<S781>/Merge1' incorporates:
         *  Constant: '<S794>/Constant'
         *  SignalConversion generated from: '<S794>/VeADCR_i_WEDCmndArbPrioLvl'
         */
        ADCR_ac_B.Switch1 = 1U;

        /* End of Outputs for SubSystem: '<S781>/NoActiveReq' */
    }

    /* End of If: '<S781>/If' */

    /* Switch: '<S777>/Switch' incorporates:
     *  Constant: '<S786>/Calib'
     *  Switch: '<S777>/Switch1'
     */
    if (KeADCR_b_WEDCmndArbOvrdEna)
    {
        /* RelationalOperator: '<S782>/Comparison1' incorporates:
         *  Constant: '<S785>/Calib'
         *  Switch: '<S777>/Switch'
         */
        ADCR_ac_B.Switch = KeADCR_e_WEDCmndArbOvrdVal;

        /* Switch: '<S777>/Switch1' incorporates:
         *  Constant: '<S784>/Calib'
         */
        ADCR_ac_B.Switch1 = KeADCR_i_WEDCmndArbPrioLvlOvrdVal;
    }

    /* End of Switch: '<S777>/Switch' */

    /* Update for UnitDelay: '<S783>/Unit Delay' incorporates:
     *  DataStoreRead: '<S783>/Data Store Read'
     * */
    ADCR_ac_DW.UnitDelay_DSTATE_pl = VeADCR_e_AWDSysStat_DS;

    /* End of Outputs for SubSystem: '<S4>/ADCC_WEDReqArb' */
#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outputs for Function Call SubSystem: '<S4>/ADCR_MedTED2_NF' */
    /* SignalConversion generated from: '<S778>/VeADCR_e_WEDCmndArb' incorporates:
     *  Constant: '<S836>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDCmndArb = ADCR_ac_ConstB.Constant_fk;

    /* SignalConversion generated from: '<S778>/VeADCR_i_WEDCmndArbPrioLvl' */
    ADCR_ac_B.OutportBufferForVeADCR_i_WEDCmndArbPri_n = 1U;

    /* End of Outputs for SubSystem: '<S4>/ADCR_MedTED2_NF' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S4>/VariantSource1' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDCmndArb' incorporates:
     *  Switch: '<S777>/Switch'
     */
    (void)Rte_Write_VeADCR_e_WEDCmndArb_Value(ADCR_ac_B.Switch);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_e_WEDCmndArb' incorporates:
     *  SignalConversion generated from: '<S4>/VariantSource1'
     *  SignalConversion generated from: '<S778>/VeADCR_e_WEDCmndArb'
     */
    (void)Rte_Write_VeADCR_e_WEDCmndArb_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDCmndArb);

#endif

    /* End of SignalConversion generated from: '<S4>/VariantSource1' */

    /* SignalConversion generated from: '<S4>/VariantSource2' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* Outport: '<Root>/VeADCR_i_WEDCmndArbPrioLvl' */
    (void)Rte_Write_VeADCR_i_WEDCmndArbPrioLvl_Value(ADCR_ac_B.Switch1);

#elif !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* Outport: '<Root>/VeADCR_i_WEDCmndArbPrioLvl' incorporates:
     *  SignalConversion generated from: '<S4>/VariantSource2'
     */
    (void)Rte_Write_VeADCR_i_WEDCmndArbPrioLvl_Value
        (ADCR_ac_B.OutportBufferForVeADCR_i_WEDCmndArbPri_n);

#endif

    /* End of SignalConversion generated from: '<S4>/VariantSource2' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */
}

/* Output function */
FUNC(void, ADCR_CODE) ADCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ADCR_PwrOn'
     */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADCC_Init'
     */
    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDLeftStat_Out_Init' incorporates:
     *  Constant: '<S856>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftStat_Out =
        ADCR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDRightStat_Out_Init' incorporates:
     *  Constant: '<S846>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightStat_Ou =
        ADCR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDLftCmndStat_Out_Init' incorporates:
     *  Constant: '<S845>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLftCmndStat_ =
        ADCR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDRtCmndStat_Out_Init' incorporates:
     *  Constant: '<S850>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRtCmndStat_O =
        ADCR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S837>/VeADCR_M_WEDMtrCLMax_Out_Init' incorporates:
     *  Constant: '<S859>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMax_Out =
        KeADCR_M_WEDMtrCLMaxInit;

    /* SignalConversion generated from: '<S837>/VeADCR_M_WEDMtrCLMin_Out_Init' incorporates:
     *  Constant: '<S860>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMin_Out =
        KeADCR_M_WEDMtrCLMinInit;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDCmndArb_Out_Init' incorporates:
     *  Constant: '<S852>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDCmndArb_Out_ =
        ADCR_ac_ConstB.Constant_c3;

    /* SignalConversion generated from: '<S837>/VeADCR_Cnt_LftWEDClsngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDClsngAt = 0U;

    /* SignalConversion generated from: '<S837>/VeADCR_Cnt_LftWEDOpngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDOpngAtt = 0U;

    /* SignalConversion generated from: '<S837>/VeADCR_Cnt_RtWEDClsngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDClsngAtt = 0U;

    /* SignalConversion generated from: '<S837>/VeADCR_Cnt_RtWEDOpngAttempts_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDOpngAtte = 0U;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDAxleStat_Out_Init' incorporates:
     *  Constant: '<S853>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_Out =
        ADCR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S854>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftCmndMgrS =
        ADCR_ac_ConstB.Constant_nj;

    /* SignalConversion generated from: '<S837>/VeADCR_e_WEDRightCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S855>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightCmndMgr =
        ADCR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S837>/VeADCR_n_AWDNxTgt_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_n_AWDNxTgt_Out_In = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_dn_AWDNxTgtDot_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_dn_AWDNxTgtDot_Ou = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_M_AWDMaxClchCap_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_M_AWDMaxClchCap_O = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_M_AWDLeadClchCap_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_M_AWDLeadClchCap_ = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_b_UseLckedEqn_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_Out = true;

    /* SignalConversion generated from: '<S837>/VeADCR_k_AWDNxProfFilt_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_k_AWDNxProfFilt_O = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_M_AWDClchEst_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_M_AWDClchEst_Out_ = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCC_e_AWDClchXStat_IRV_Init' incorporates:
     *  Constant: '<S857>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchXStat_IR =
        ADCR_ac_ConstB.Constant_d3;

    /* SignalConversion generated from: '<S837>/VeADCC_e_AWDClchYStat_IRV_Init' incorporates:
     *  Constant: '<S851>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchYStat_IR =
        ADCR_ac_ConstB.Constant_p0;

    /* SignalConversion generated from: '<S837>/VeADCC_b_AWDClchLocked_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_b_AWDClchLocked_I = true;

    /* SignalConversion generated from: '<S837>/VeADCR_b_ADCOfldCnfm_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_ADCOfldCnfm_Out = false;

    /* SignalConversion generated from: '<S837>/VeADCR_b_EnblWggl_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_EnblWggl_Out_In = false;

    /* SignalConversion generated from: '<S837>/VeADCR_e_AWDSysStat_Out_Init' incorporates:
     *  Constant: '<S844>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Out_ =
        ADCR_ac_ConstB.Constant_a4;

    /* SignalConversion generated from: '<S837>/VeADCR_m_AWDThruTorq_IRV_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_m_AWDThruTorq_IRV = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCC_n_NxAct_Out_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_n_NxAct_Out_IRV_I = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCC_dn_NxDotAct_Out_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_dn_NxDotAct_Out_I = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_e_AWDClchXRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S849>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchXRawStat =
        ADCR_ac_ConstB.Constant_po;

    /* SignalConversion generated from: '<S837>/VeADCR_e_AWDClchYRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S848>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchYRawStat =
        ADCR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S837>/VeADCR_P_PwrRsrv4EngmtRaw' */
    ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4EngmtRa = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_P_PwrRsrv4Engmt' */
    ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_P_PwrRsrv4EngmtLead' */
    ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4EngmtLe = 0.0F;

    /* SignalConversion generated from: '<S837>/VeADCR_e_AWDDiscCurrSt_Out_Init' incorporates:
     *  Constant: '<S847>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_O =
        ADCR_ac_ConstB.Constant_dj;

    /* SignalConversion generated from: '<S837>/VeADCR_i_WEDCmndArbPrioLvl' */
    ADCR_ac_B.OutportBufferForVeADCR_i_WEDCmndArbPrioL = 1U;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* DataStoreWrite: '<S5>/Data Store Write12' */
    VeADCR_b_AWDUseLckdEqn_DS =
        ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_Out;

    /* DataStoreWrite: '<S5>/Data Store Write13' incorporates:
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDAxleStat_Out_Init'
     */
    VeADCR_e_WEDAxleStat_DS = ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_Out;

    /* DataStoreWrite: '<S5>/Data Store Write14' */
    VeADCR_n_AWDNxTgt_DS = ADCR_ac_B.OutportBufferForVeADCR_n_AWDNxTgt_Out_In;

    /* DataStoreWrite: '<S5>/Data Store Write15' */
    VeADCR_dn_AWDNxTgtDot_DS =
        ADCR_ac_B.OutportBufferForVeADCR_dn_AWDNxTgtDot_Ou;

    /* DataStoreWrite: '<S5>/Data Store Write16' incorporates:
     *  SignalConversion generated from: '<S837>/VeADCR_e_AWDSysStat_Out_Init'
     */
    VeADCR_e_AWDSysStat_DS = ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Out_;

    /* DataStoreWrite: '<S5>/Data Store Write17' */
    VeADCR_M_AWDClch_LeadTcR_Ovrd_DS =
        ADCR_ac_B.OutportBufferForVeADCR_M_AWDLeadClchCap_;

    /* DataStoreWrite: '<S5>/Data Store Write18' */
    VeADCR_M_AWDClch_TcR_Ovrd_DS =
        ADCR_ac_B.OutportBufferForVeADCR_M_AWDMaxClchCap_O;

    /* DataStoreWrite: '<S5>/Data Store Write19' */
    VeADCR_M_AWDClch_TorqEst_DS =
        ADCR_ac_B.OutportBufferForVeADCR_M_AWDClchEst_Out_;

    /* DataStoreWrite: '<S5>/Data Store Write2' incorporates:
     *  SignalConversion generated from: '<S837>/VeADCR_e_AWDDiscCurrSt_Out_Init'
     */
    VeADCR_e_AWDDiscCurrSt_DS =
        ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_O;

    /* DataStoreWrite: '<S5>/Data Store Write4' */
    VeADCR_k_AWDNxProfFilt_DS =
        ADCR_ac_B.OutportBufferForVeADCR_k_AWDNxProfFilt_O;

    /* DataStoreWrite: '<S5>/Data Store Write8' */
    VeADCC_b_AWDClchOffloaded_DS =
        ADCR_ac_B.OutportBufferForVeADCR_b_ADCOfldCnfm_Out;

    /* DataStoreWrite: '<S5>/Data Store Write' incorporates:
     *  Constant: '<S838>/Constant'
     */
    VeADCC_e_WEDLeftStatDsrd_DS = CeADCR_e_Init;

    /* DataStoreWrite: '<S5>/Data Store Write1' incorporates:
     *  Constant: '<S839>/Constant'
     */
    VeADCC_e_WEDRightStatDsrd_DS = CeADCR_e_Init;

    /* DataStoreWrite: '<S5>/Data Store Write3' incorporates:
     *  Constant: '<S840>/Constant'
     */
    VeADCR_e_WEDCurrStatGroup_DS = CeADCR_e_WEDInit_Group;

    /* DataStoreWrite: '<S5>/Data Store Write5' incorporates:
     *  Constant: '<S841>/Constant'
     */
    VeADCR_e_AWDDiscSlipSpdEqn_DS = CeADCR_e_AWDDiscSlipSpdEqnOpen;

    /* DataStoreWrite: '<S5>/Data Store Write6' incorporates:
     *  Constant: '<S842>/Constant'
     */
    VeADCR_e_AWDDiscProfEqn_DS = CeADCR_e_AWDDiscProfEqnTgtAvg;

    /* DataStoreWrite: '<S5>/Data Store Write7' incorporates:
     *  Constant: '<S843>/Constant'
     */
    VeADCR_e_AWDDiscPriority_DS = CeADCR_e_WEDSimultaneous;

    /* Outport: '<Root>/VeADCR_Cnt_LftWEDClsngAttempts' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_Cnt_LftWEDClsngAttempts_Out_Init'
     */
    (void)Rte_Write_VeADCR_Cnt_LftWEDClsngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDClsngAt);

    /* Outport: '<Root>/VeADCR_Cnt_LftWEDOpngAttempts' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_Cnt_LftWEDOpngAttempts_Out_Init'
     */
    (void)Rte_Write_VeADCR_Cnt_LftWEDOpngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_LftWEDOpngAtt);

    /* Outport: '<Root>/VeADCR_Cnt_RtWEDClsngAttempts' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_Cnt_RtWEDClsngAttempts_Out_Init'
     */
    (void)Rte_Write_VeADCR_Cnt_RtWEDClsngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDClsngAtt);

    /* Outport: '<Root>/VeADCR_Cnt_RtWEDOpngAttempts' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_Cnt_RtWEDOpngAttempts_Out_Init'
     */
    (void)Rte_Write_VeADCR_Cnt_RtWEDOpngAttempts_Value
        (ADCR_ac_B.OutportBufferForVeADCR_Cnt_RtWEDOpngAtte);

    /* Outport: '<Root>/VeADCR_M_AWDClch_TorqEst' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_M_AWDClchEst_Out_Init'
     */
    (void)Rte_Write_VeADCR_M_AWDClch_TorqEst_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_AWDClchEst_Out_);

    /* Outport: '<Root>/VeADCR_M_AWDClch_LeadTcR_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_M_AWDLeadClchCap_Out_Init'
     */
    (void)Rte_Write_VeADCR_M_AWDClch_LeadTcR_Ovrd_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_AWDLeadClchCap_);

    /* Outport: '<Root>/VeADCR_M_AWDClch_TcR_Ovrd' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_M_AWDMaxClchCap_Out_Init'
     */
    (void)Rte_Write_VeADCR_M_AWDClch_TcR_Ovrd_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_AWDMaxClchCap_O);

    /* Outport: '<Root>/VeADCR_M_WEDMtrCLMax' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_M_WEDMtrCLMax_Out_Init'
     */
    (void)Rte_Write_VeADCR_M_WEDMtrCLMax_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMax_Out);

    /* Outport: '<Root>/VeADCR_M_WEDMtrCLMin' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_M_WEDMtrCLMin_Out_Init'
     */
    (void)Rte_Write_VeADCR_M_WEDMtrCLMin_Value
        (ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMin_Out);

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4EngmtLead' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_P_PwrRsrv4EngmtLead_Out_Init'
     */
    (void)Rte_Write_VeADCR_P_PwrRsrv4EngmtLead_Value
        (ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4EngmtLe);

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4EngmtRaw' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_P_PwrRsrv4EngmtRaw_Out_Init'
     */
    (void)Rte_Write_VeADCR_P_PwrRsrv4EngmtRaw_Value
        (ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4EngmtRa);

    /* Outport: '<Root>/VeADCR_P_PwrRsrv4Engmt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_P_PwrRsrv4Engmt_Out_Init'
     */
    (void)Rte_Write_VeADCR_P_PwrRsrv4Engmt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_P_PwrRsrv4Engmt);

    /* Outport: '<Root>/VeADCR_b_ADCOfldCnfm' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_b_ADCOfldCnfm_Out_Init'
     */
    (void)Rte_Write_VeADCR_b_ADCOfldCnfm_Value
        (ADCR_ac_B.OutportBufferForVeADCR_b_ADCOfldCnfm_Out);

    /* Outport: '<Root>/VeADCR_b_WiggleRequest' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_b_EnblWggl_Out_Init'
     */
    (void)Rte_Write_VeADCR_b_WiggleRequest_Value
        (ADCR_ac_B.OutportBufferForVeADCR_b_EnblWggl_Out_In);

    /* Outport: '<Root>/VeADCR_b_AWDUseLckedEqn' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_b_UseLckedEqn_Out_Init'
     */
    (void)Rte_Write_VeADCR_b_AWDUseLckedEqn_Value
        (ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_Out);

    /* Outport: '<Root>/VeADCR_dn_AWDNxTgtDot' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_dn_AWDNxTgtDot_Out_Init'
     */
    (void)Rte_Write_VeADCR_dn_AWDNxTgtDot_Value
        (ADCR_ac_B.OutportBufferForVeADCR_dn_AWDNxTgtDot_Ou);

    /* Outport: '<Root>/VeADCR_e_AWDDiscCurrSt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_AWDDiscCurrSt_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_AWDDiscCurrSt_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_AWDDiscCurrSt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_O);

    /* Outport: '<Root>/VeADCR_e_AWDSysStat' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_AWDSysStat_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_AWDSysStat_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_AWDSysStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Out_);

    /* Outport: '<Root>/VeADCR_e_WEDAxleStat' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDAxleStat_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDAxleStat_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDAxleStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_Out);

    /* Outport: '<Root>/VeADCR_e_WEDCmndArb' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDCmndArb_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDCmndArb_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDCmndArb_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDCmndArb_Out_);

    /* Outport: '<Root>/VeADCR_e_WEDLeftCmndMgrSt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftCmndMgrSt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftCmndMgrS);

    /* Outport: '<Root>/VeADCR_e_WEDLeftStat' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDLeftStat_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDLeftStat_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftStat_Out);

    /* Outport: '<Root>/VeADCR_e_WEDLftCmndStat' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDLftCmndStat_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDLftCmndStat_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDLftCmndStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDLftCmndStat_);

    /* Outport: '<Root>/VeADCR_e_WEDRightCmndMgrSt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDRightCmndMgrSt_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDRightCmndMgrSt_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDRightCmndMgrSt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightCmndMgr);

    /* Outport: '<Root>/VeADCR_e_WEDRightStat' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDRightStat_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDRightStat_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDRightStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightStat_Ou);

    /* Outport: '<Root>/VeADCR_e_WEDRtCmndStat' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_e_WEDRtCmndStat_Out_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_WEDRtCmndStat_Out_Init'
     */
    (void)Rte_Write_VeADCR_e_WEDRtCmndStat_Value
        (ADCR_ac_B.OutportBufferForVeADCR_e_WEDRtCmndStat_O);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADCC_Init'
     */
    /* Outport: '<Root>/VeADCR_i_WEDAxleStat_CAN' incorporates:
     *  Constant: '<S858>/Calib'
     *  Selector: '<S837>/Selector'
     *  SignalConversion generated from: '<S5>/VeADCR_i_WEDAxleStat_CAN_Out_Init'
     */
    (void)Rte_Write_VeADCR_i_WEDAxleStat_CAN_Value(KaADCR_i_WEDAxleStatCANMap[4]);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VeADCR_i_WEDCmndArbPrioLvl' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_i_WEDCmndArbPrioLvl_Init'
     */
    (void)Rte_Write_VeADCR_i_WEDCmndArbPrioLvl_Value
        (ADCR_ac_B.OutportBufferForVeADCR_i_WEDCmndArbPrioL);

    /* Outport: '<Root>/VeADCR_k_AWDNxProfFilt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_k_AWDNxProfFilt_Out_Init'
     */
    (void)Rte_Write_VeADCR_k_AWDNxProfFilt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_k_AWDNxProfFilt_O);

    /* Outport: '<Root>/VeADCR_n_AWDNxTgt' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCR_n_AWDNxTgt_Out_Init'
     */
    (void)Rte_Write_VeADCR_n_AWDNxTgt_Value
        (ADCR_ac_B.OutportBufferForVeADCR_n_AWDNxTgt_Out_In);

    /* Merge: '<Root>/VeADCC_b_AWDClchLocked_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_b_AWDClchLocked_IRV_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCC_b_ClchLocked_IRV
        (ADCR_ac_B.OutportBufferForVeADCC_b_AWDClchLocked_I);

    /* Merge: '<Root>/VeADCC_m_AWDThruTorq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_b_AWDThruTorq_IRV_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCC_m_WEDThruTorq_IRV
        (ADCR_ac_B.OutportBufferForVeADCR_m_AWDThruTorq_IRV);

    /* Merge: '<Root>/VeADCC_dn_NxDotAct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_dn_NxDotAct_IRV_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCR_dn_NxDotAct_IRV
        (ADCR_ac_B.OutportBufferForVeADCC_dn_NxDotAct_Out_I);

    /* Merge: '<Root>/VeADCC_e_AWDClchXRawStat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_e_AWDClchXRawStat_IRV_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_AWDClchXRawStat_IRV_Out_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCR_e_AWDClchXRawStat_IRV
        (ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchXRawStat);

    /* Merge: '<Root>/VeADCC_e_AWDClchXStat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_e_AWDClchXStat_IRV_Init'
     *  SignalConversion generated from: '<S837>/VeADCC_e_AWDClchXStat_IRV_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCC_e_AWDClchXStat_IRV
        (ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchXStat_IR);

    /* Merge: '<Root>/VeADCC_e_AWDClchYRawStat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_e_AWDClchYRawStat_IRV_Init'
     *  SignalConversion generated from: '<S837>/VeADCR_e_AWDClchYRawStat_IRV_Out_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCR_e_AWDClchYRawStat_IRV
        (ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchYRawStat);

    /* Merge: '<Root>/VeADCC_e_AWDClchYStat_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_e_AWDClchYStat_IRV_Init'
     *  SignalConversion generated from: '<S837>/VeADCC_e_AWDClchYStat_IRV_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCC_e_AWDClchYStat_IRV
        (ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchYStat_IR);

    /* Merge: '<Root>/VeADCC_n_NxAct_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S5>/VeADCC_n_NxAct_IRV_Init'
     * */
    Rte_IrvWrite_ADCR_PwrOn_VeADCR_n_NxAct_IRV
        (ADCR_ac_B.OutportBufferForVeADCC_n_NxAct_Out_IRV_I);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ADCR_CODE) ADCR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/Data Store Memory1' */
    VeADCR_e_AWDSysStat_DS = CeADCR_e_AllWheelDrive;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ADCR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/ADCC_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDLeftStat_Out_Init' incorporates:
     *  Constant: '<S856>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftStat_Out =
        ADCR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDRightStat_Out_Init' incorporates:
     *  Constant: '<S846>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightStat_Ou =
        ADCR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDLftCmndStat_Out_Init' incorporates:
     *  Constant: '<S845>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLftCmndStat_ =
        ADCR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDRtCmndStat_Out_Init' incorporates:
     *  Constant: '<S850>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRtCmndStat_O =
        ADCR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_M_WEDMtrCLMax_Out_Init' incorporates:
     *  Constant: '<S859>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMax_Out =
        KeADCR_M_WEDMtrCLMaxInit;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_M_WEDMtrCLMin_Out_Init' incorporates:
     *  Constant: '<S860>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMin_Out =
        KeADCR_M_WEDMtrCLMinInit;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDCmndArb_Out_Init' incorporates:
     *  Constant: '<S852>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDCmndArb_Out_ =
        ADCR_ac_ConstB.Constant_c3;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDAxleStat_Out_Init' incorporates:
     *  Constant: '<S853>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_Out =
        ADCR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S854>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftCmndMgrS =
        ADCR_ac_ConstB.Constant_nj;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_WEDRightCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S855>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightCmndMgr =
        ADCR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_b_UseLckedEqn_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_Out = true;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCC_e_AWDClchXStat_IRV_Init' incorporates:
     *  Constant: '<S857>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchXStat_IR =
        ADCR_ac_ConstB.Constant_d3;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCC_e_AWDClchYStat_IRV_Init' incorporates:
     *  Constant: '<S851>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchYStat_IR =
        ADCR_ac_ConstB.Constant_p0;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCC_b_AWDClchLocked_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_b_AWDClchLocked_I = true;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_AWDSysStat_Out_Init' incorporates:
     *  Constant: '<S844>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Out_ =
        ADCR_ac_ConstB.Constant_a4;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_AWDClchXRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S849>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchXRawStat =
        ADCR_ac_ConstB.Constant_po;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_AWDClchYRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S848>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchYRawStat =
        ADCR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_e_AWDDiscCurrSt_Out_Init' incorporates:
     *  Constant: '<S847>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_O =
        ADCR_ac_ConstB.Constant_dj;

    /* SystemInitialize for SignalConversion generated from: '<S837>/VeADCR_i_WEDCmndArbPrioLvl' */
    ADCR_ac_B.OutportBufferForVeADCR_i_WEDCmndArbPrioL = 1U;

    /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTEB1'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* SystemInitialize for Function Call SubSystem: '<S1>/ADCC_WEDCmndCtrls' */
    /* SystemInitialize for Chart: '<S144>/ADCC_WEDStatCmndMgr' */
    VeADCC_e_WEDLeftCmndMgrSt = CeADCR_e_SSOpen;

    /* SystemInitialize for Chart: '<S145>/ADCC_WEDStatCmndMgr' */
    VeADCC_e_WEDRightCmndMgrSt = CeADCR_e_SSOpen;

    /* End of SystemInitialize for SubSystem: '<S1>/ADCC_WEDCmndCtrls' */

    /* SystemInitialize for Function Call SubSystem: '<S1>/ADCC_CLMtrLimits' */
    /* Start for If: '<S7>/If' */
    ADCR_ac_DW.If_ActiveSubsystem_a = -1;

    /* End of SystemInitialize for SubSystem: '<S1>/ADCC_CLMtrLimits' */
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    /* SystemInitialize for Function Call SubSystem: '<S1>/ADCR_MedTEB_NF' */
    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_WEDLeftStat_Out_Init' incorporates:
     *  Constant: '<S193>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftStat_O_a =
        ADCR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_WEDRightStat_Out_Init' incorporates:
     *  Constant: '<S183>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightStat__c =
        ADCR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_WEDLftCmndStat_Out_Init' incorporates:
     *  Constant: '<S182>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLftCmndSta_d =
        ADCR_ac_ConstB.Constant_ni;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_WEDRtCmndStat_Out_Init' incorporates:
     *  Constant: '<S187>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRtCmndStat_b =
        ADCR_ac_ConstB.Constant_ol;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_M_WEDMtrCLMax_Out_Init' incorporates:
     *  Constant: '<S196>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMax_O_g =
        KeADCR_M_WEDMtrCLMaxInit;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_M_WEDMtrCLMin_Out_Init' incorporates:
     *  Constant: '<S197>/Calib'
     */
    ADCR_ac_B.OutportBufferForVeADCR_M_WEDMtrCLMin_O_j =
        KeADCR_M_WEDMtrCLMinInit;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_WEDLeftCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S191>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDLeftCmndMg_h =
        ADCR_ac_ConstB.Constant_hl;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_WEDRightCmndMgrSt_Out_Init' incorporates:
     *  Constant: '<S192>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDRightCmndM_f =
        ADCR_ac_ConstB.Constant_p3;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCC_e_AWDClchXStat_IRV_Init' incorporates:
     *  Constant: '<S194>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchXStat__p =
        ADCR_ac_ConstB.Constant_bs;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCC_e_AWDClchYStat_IRV_Init' incorporates:
     *  Constant: '<S188>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCC_e_AWDClchYStat__c =
        ADCR_ac_ConstB.Constant_a4d;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCC_b_AWDClchLocked_IRV_Init' */
    ADCR_ac_B.OutportBufferForVeADCC_b_AWDClchLocked_h = true;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_AWDClchXRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S186>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchXRawSt_b =
        ADCR_ac_ConstB.Constant_nf;

    /* SystemInitialize for SignalConversion generated from: '<S11>/VeADCR_e_AWDClchYRawStat_IRV_Out_Init' incorporates:
     *  Constant: '<S185>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDClchYRawSt_c =
        ADCR_ac_ConstB.Constant_px;

    /* End of SystemInitialize for SubSystem: '<S1>/ADCR_MedTEB_NF' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDLeftStat' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftStat_Value(CeADCR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDRightStat' incorporates:
     *  Merge: '<Root>/Merge_2'
     */
    (void)Rte_Write_VeADCR_e_WEDRightStat_Value(CeADCR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDLftCmndStat' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeADCR_e_WEDLftCmndStat_Value(CeADCR_e_NoCmnd);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDRtCmndStat' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeADCR_e_WEDRtCmndStat_Value(CeADCR_e_NoCmnd);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTED2'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
#if !Rte_SysCon_Variant_ADCR_FUNC_TRUE && Rte_SysCon_Variant_ADCR_NF_TRUE

    /* SystemInitialize for Function Call SubSystem: '<S4>/ADCR_MedTED2_NF' */
    /* SystemInitialize for SignalConversion generated from: '<S778>/VeADCR_e_WEDCmndArb' incorporates:
     *  Constant: '<S836>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDCmndArb = ADCR_ac_ConstB.Constant_fk;

    /* SystemInitialize for SignalConversion generated from: '<S778>/VeADCR_i_WEDCmndArbPrioLvl' */
    ADCR_ac_B.OutportBufferForVeADCR_i_WEDCmndArbPri_n = 1U;

    /* End of SystemInitialize for SubSystem: '<S4>/ADCR_MedTED2_NF' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED2' */

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDCmndArb' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeADCR_e_WEDCmndArb_Value(CeADCR_e_ReqOpt);

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' incorporates:
     *  SubSystem: '<Root>/ADCR_MedTED1'
     */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE || Rte_SysCon_Variant_ADCR_NF_TRUE

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#if Rte_SysCon_Variant_ADCR_FUNC_TRUE

    /* SystemInitialize for Function Call SubSystem: '<S3>/ADCC_AWDDiscStTrnstn' */
    /* Start for If: '<S544>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_ik = -1;

    /* SystemInitialize for IfAction SubSystem: '<S544>/WED_SteadyStat' */
    /* Start for If: '<S552>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_l = -1;

    /* End of SystemInitialize for SubSystem: '<S544>/WED_SteadyStat' */
    /* End of SystemInitialize for SubSystem: '<S3>/ADCC_AWDDiscStTrnstn' */

    /* SystemInitialize for Function Call SubSystem: '<S3>/ADCC_AWDDiscStAction' */
    /* Start for If: '<S327>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S327>/WED_ClosingGroup' */
    /* Start for If: '<S332>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_j = -1;

    /* End of SystemInitialize for SubSystem: '<S327>/WED_ClosingGroup' */

    /* SystemInitialize for IfAction SubSystem: '<S327>/WED_OpeningGroup' */
    /* Start for If: '<S334>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_ix = -1;

    /* End of SystemInitialize for SubSystem: '<S327>/WED_OpeningGroup' */

    /* SystemInitialize for IfAction SubSystem: '<S327>/WED_SteadyStat' */
    /* Start for If: '<S335>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_h = -1;

    /* SystemInitialize for IfAction SubSystem: '<S335>/Locked' */
    /* Start for If: '<S440>/If' */
    ADCR_ac_DW.If_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S440>/During' */
    /* Start for If: '<S444>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_k = -1;

    /* End of SystemInitialize for SubSystem: '<S440>/During' */
    /* End of SystemInitialize for SubSystem: '<S335>/Locked' */

    /* SystemInitialize for IfAction SubSystem: '<S335>/Open' */
    /* Start for If: '<S443>/If' */
    ADCR_ac_DW.If_ActiveSubsystem_j = -1;

    /* SystemInitialize for IfAction SubSystem: '<S443>/During' */
    /* Start for If: '<S491>/If1' */
    ADCR_ac_DW.If1_ActiveSubsystem_i = -1;

    /* End of SystemInitialize for SubSystem: '<S443>/During' */
    /* End of SystemInitialize for SubSystem: '<S335>/Open' */
    /* End of SystemInitialize for SubSystem: '<S327>/WED_SteadyStat' */
    /* End of SystemInitialize for SubSystem: '<S3>/ADCC_AWDDiscStAction' */
#endif

#if Rte_SysCon_Variant_ADCR_NF_TRUE

    /* SystemInitialize for Function Call SubSystem: '<S3>/ADCR_MedTED1_NF' */
    /* SystemInitialize for SignalConversion generated from: '<S321>/VeADCR_e_WEDAxleStat_Out_Init' incorporates:
     *  Constant: '<S769>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_WEDAxleStat_O_f =
        ADCR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S321>/VeADCR_b_UseLckedEqn_Out_Init' */
    ADCR_ac_B.OutportBufferForVeADCR_b_UseLckedEqn_O_g = true;

    /* SystemInitialize for SignalConversion generated from: '<S321>/VeADCR_e_AWDSysStat_Out_Init' incorporates:
     *  Constant: '<S760>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDSysStat_Ou_c =
        ADCR_ac_ConstB.Constant_mj;

    /* SystemInitialize for SignalConversion generated from: '<S321>/VeADCR_e_AWDDiscCurrSt_Out_Init' incorporates:
     *  Constant: '<S763>/Constant'
     */
    ADCR_ac_B.OutportBufferForVeADCR_e_AWDDiscCurrSt_p =
        ADCR_ac_ConstB.Constant_g;

    /* End of SystemInitialize for SubSystem: '<S3>/ADCR_MedTED1_NF' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED1' */

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDAxleStat' incorporates:
     *  Merge: '<Root>/Merge_5'
     */
    (void)Rte_Write_VeADCR_e_WEDAxleStat_Value(CeADCR_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDLeftCmndMgrSt' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeADCR_e_WEDLeftCmndMgrSt_Value(CeADCR_e_WEDCmndInit);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_WEDRightCmndMgrSt' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeADCR_e_WEDRightCmndMgrSt_Value(CeADCR_e_WEDCmndInit);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_AWDSysStat' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    (void)Rte_Write_VeADCR_e_AWDSysStat_Value(CeADCR_e_TwoWheelDrive);

    /* SystemInitialize for Outport: '<Root>/VeADCR_e_AWDDiscCurrSt' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeADCR_e_AWDDiscCurrSt_Value(CeADCR_e_AWDInit);

    /* SystemInitialize for Outport: '<Root>/VeADCR_i_WEDCmndArbPrioLvl' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VeADCR_i_WEDCmndArbPrioLvl_Value((uint8)1U);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
