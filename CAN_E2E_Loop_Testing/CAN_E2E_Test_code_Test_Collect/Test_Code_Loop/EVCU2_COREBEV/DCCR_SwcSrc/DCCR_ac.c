/*
 * File: DCCR_ac.c
 *
 * Code generated for Simulink model 'DCCR_ac'.
 *
 * Model version                  : 9.1156
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:22:49 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DCCR_ac.h"

/* Named constants for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1
#define DCCR__IN_ChrgParameterDiscovery ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR__IN_PnC_ChrgParamDiscovery ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR__IN_V2H_ChrgParamDiscovery ((uint8)10U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_a_IN_PnC_CntrAuthorization ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_a_IN_PnC_Init_Isol_Prechrg ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_a_IN_V2H_CntrAuthorization ((uint8)12U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ASSOCIATION         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_CableChk            ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ChrgCmpltShtDwnSt1st ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ChrgCompltState2nd  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ChrgCompltState3rd  ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ChrgportLockFdbk    ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ContractAuth        ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_CurrentDemand       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_EmergShtDownSt4th   ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_EmrgShtDwnSt1       ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_EmrgShtDwnSt2       ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_EmrgShtDwnSt3       ((uint8)7U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_InitStat1           ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Initi_isol_prechrg  ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_Active          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_CableChk        ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_ChrgportLockFdbk ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_Disabled        ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_PreChrg1        ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_PreChrg2        ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_PreChrg3        ((uint8)7U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_Retry           ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_SeqStart        ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_ServDiscvry     ((uint8)8U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PnC_SuppAppProt     ((uint8)9U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PreChrgReq          ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PrechrgStat2        ((uint8)7U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_PrechrgStat3        ((uint8)8U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Protocol_Selection  ((uint8)7U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Renegotiation       ((uint8)8U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_SHUTDOWN            ((uint8)9U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Select_EIM_Protocol ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Select_PnC_Protocol ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ShtDwnAccomplished  ((uint8)8U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ShutdownCrntChk     ((uint8)9U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Shutdownin          ((uint8)10U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ShutdowninV2G       ((uint8)11U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_V2H_ChrgportLockFdbk ((uint8)11U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_V2H_ServDiscvry     ((uint8)13U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_WaitSt2_ChrCompl    ((uint8)12U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_WeldChkState1st     ((uint8)13U)
#endif

/* Named constants for Chart: '<S11>/DC_GBT' */
#if Rte_SysCon_Variant_DCCR_1
#define DCCR__IN_DCGBTContactorFastOpen ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBTContactorOpen  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBTIsolation      ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBTShtDwnCompl    ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_ChrgInit      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_ContactorClose ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_CurrentDemand ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_EVReady       ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_Init          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_IsolationCheck ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_DCGBT_RdyToChrg     ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_GBTCommunication    ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_GBTShutdown         ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_ShutdownCurrChk     ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Shutdownin_i        ((uint8)6U)
#endif

/* Named constants for Chart: '<S12>/DCChrg_EOL' */
#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Check2              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Check3              ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_Init                ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_TestFail            ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_TestInProg          ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_TestPass            ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DCCR_1
#define DCCR_ac_IN_WaitForShtDwn       ((uint8)7U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_DCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) HeDCCR_t_dT = 0.02F;/* Referenced by:
                                                                   * '<S11>/DC_Charging'
                                                                   * '<S11>/DC_GBT'
                                                                   * '<S232>/Calib'
                                                                   * '<S104>/Calib'
                                                                   * '<S155>/Calib'
                                                                   */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_CurrentLimitDebounce =
    5U;                                /* Referenced by: '<S107>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Cnt_DCChrgTest_atEOL =
    400.0F;                            /* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_DINVoltDiff_Delay = 40U;/* Referenced by: '<S108>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_DCBusCurr = 20U;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_DmdExcdCurr = 400U;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_DmdExcdVolt = 400U;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_EVSELimAchivd = 0U;/* Referenced by: '<S211>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2G =
    40U;                               /* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2H =
    40U;                               /* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_Dbnc_EVSEMaxPwrLimV2H =
    40U;                               /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_EVSEVoltInterval_Dbnc =
    10U;                               /* Referenced by:
                                        * '<S82>/Calib'
                                        * '<S83>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_Cnt_ISOVoltDiff_Delay = 40U;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_E_DC_EVEnergyCapacity =
    1000.0F;                           /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_E_EVEnergyCapacity =
    2000.0F;                           /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_E_EVEnergyCapacity_400V =
    104000.0F;                         /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_E_EVEnergyCapacity_800V =
    104000.0F;                         /* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_E_EVEnergyCapacity_null =
    2000.0F;                           /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_CrntOffsetSensErr = 0.0F;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DCChrgCrntTest_MaxLim =
    -5.0F;                             /* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DCChrgCrntTest_MinLim =
    -25.0F;                            /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DCChrgEOL_TestSts =
    1000.0F;                           /* Referenced by: '<S279>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DCChrgTestCrnt = 25.0F;/* Referenced by: '<S237>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DC_CurrToleranceMin =
    2.5F;                              /* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DC_CurrToleranceThresh =
    50.0F;                             /* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DC_EVMax_I_Limit = 90.0F;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DC_EmergCurrPresent =
    2.0F;                              /* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DC_MaxOutputCrntLim =
    0.5F;                              /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_DC_MinCurrentPresent =
    4.0F;                              /* Referenced by:
                                        * '<S11>/DC_Charging'
                                        * '<S118>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_EVMax_I_Limit = 395.0F;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_EVSEMaxCurrLmtOvrdVal =
    0.0F;                              /* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_EVSEOutputCurrOvrdVal =
    0.0F;                              /* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_HV_AccCurrOvrdVal = 0.0F;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_MaxBattChrgCurr = 397.4F;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_MaxDischrgCurr = 140.0F;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_I_V2GPerfLimDischrgCurr =
    20.0F;                             /* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_K_DCTargetVoltCoeff = 0.5F;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_K_DC_DCExitRsn_SF = 0;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_K_DC_HCP_EVErrorCode = 1;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_K_DC_SelectedServiceID = 0U;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_K_DC_Service_Category = 0;/* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_K_DC_SlctdEnergyTrsfrTyp = 0;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_K_SelSrvcIDOvrdVal = 0;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_K_Service_IDOvrdVal = 0U;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_DC_EVMax_P_Limit =
    40000.0F;                          /* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_EVMax_P_Limit = 150000.0F;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_EVMax_P_Limit_400V =
    350000.0F;                         /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_EVMax_P_Limit_800V =
    350000.0F;                         /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_EVMax_P_Limit_null =
    40000.0F;                          /* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_V2H_EVMax_P_Limit = 0.0F;/* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_P_V2H_EVMax_P_LmtDef = 0.0F;/* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_BattFullSOC = 100.0F;/* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_DC_GBT_BattFullSOC =
    100.0F;                            /* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_GBTBattMaxSOC = 100.0F;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_GBTBattMinSOC = 5.0F;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_HVBatSOHOvrdVal = 0.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_HVBatSOH_V2GEnblLimit =
    98.0F;                             /* Referenced by: '<S120>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_HVBatSOH_V2GLim = 99.1F;/* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_V2GSOCLowerLim = 15.0F;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_Pct_V2GSOCUpperLim = 80.0F;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_T_BattTempMaxGBT = 120.0F;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_T_BattTempMinGBT = 0.0F;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_T_DC_GBT_MaxBattTempAllwd =
    100.0F;                            /* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_T_GBTMaxBattTempAllwd =
    100.0F;                            /* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_BattCellMaxGBT = 5.0F;/* Referenced by: '<S209>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_BattCellMinGBT = 3.0F;/* Referenced by: '<S210>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_DC_EVMax_V_Limit = 459.0F;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_DC_EV_DCTargetVoltage =
    0.0F;                              /* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_DC_MaxVoltDiff = 6.0F;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVMax_V_Limit = 383.0F;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVMax_V_Limit_400V =
    459.0F;                            /* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVMax_V_Limit_800V =
    800.0F;                            /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVMax_V_Limit_null =
    459.0F;                            /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSE400VInterval_MN =
    250.0F;                            /* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSE400VInterval_MX =
    420.0F;                            /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSE800VInterval_MN =
    550.0F;                            /* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSE800VInterval_MX =
    850.0F;                            /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSEMaxVoltLmtOvrdVal =
    0.0F;                              /* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSEOutputVoltOvrdVal =
    0.0F;                              /* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EVSE_OutputVLimit =
    500.0F;                            /* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_EV_DCTargetVoltOvrdVal =
    0.0F;                              /* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_HVBatVoltOffSet = 0.0F;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_ISO_MaxVoltDiff = 8.0F;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_MaxAllowableBattVolt =
    383.0F;                            /* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_MaxAllowableBattVolt_400V
    = 398.0F;                          /* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_MaxAllowableBattVolt_800V
    = 798.0F;                          /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_U_MaxAllowableBattVolt_null
    = 0.0F;                            /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_AllowUIS = 1;/* Referenced by:
                                                                     * '<S11>/DC_Charging'
                                                                     * '<S11>/DC_GBT'
                                                                     */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_BPCM_ChrgStatOvrd = 0;/* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_ChargeReqOvrd = 0;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_ChargeReqOvrdVal = 0;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_Chrgr_FaultStates = 0;/* Referenced by: '<S302>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DCChrgInit_Enbl = 1;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DCChrgInitialization_Ovrd
    = 0;                               /* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DCChrgInitialization_Val =
    0;                                 /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DCIsolStsOvrd = 0;/* Referenced by: '<S303>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_ChrgTypeCmdOvrd = 0;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_CntctrCmdOvrd = 0;/* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_Isolation_CmdOvrd = 0;/* Referenced by: '<S438>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_Isolation_CmdOvrdVal =
    0;                                 /* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_Isolation_StsOvrd = 0;/* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_Isolation_StsOvrdVal =
    0;                                 /* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DC_LimEnable = 1;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_DcChargeTypeStatovrd = 0;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EOL_DVC_Ovrd = 0;/* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVCCFailStsOvrd = 0;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVCCFailStsOvrdVal = 0;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVReadyOvrd = 0;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVReadyOvrdVal = 0;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSECurrLmtAchvdOvrd = 0;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSECurrLmtAchvdOvrdVal =
    0;                                 /* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEIsolStsOvrd = 0;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEMaxCurrLmtOvrd = 0;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEMaxVoltLmtOvrdVal = 0;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEOutputCurrOvrd = 0;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEOutputVoltOvrd = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEProcessingOvrd = 0;/* Referenced by: '<S316>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEProcessingOvrdVal = 0;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEPwrLmtAchvdOvrd = 0;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEPwrLmtAchvdOvrdVal =
    0;                                 /* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEStsCodeOvrd = 0;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEVoltLmtAchvdOvrd = 0;/* Referenced by: '<S321>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEVoltLmtAchvdOvrdVal =
    0;                                 /* Referenced by: '<S322>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSE_OutputVChk = 1;/* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEfreeServOvrd = 0;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEfreeServOvrdVal = 0;/* Referenced by: '<S324>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEnotificOvrd = 0;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEsupportsDINovrd = 0;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEsupportsDINovrdVal =
    1;                                 /* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEsupportsISO1ovrd = 0;/* Referenced by: '<S328>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EVSEsupportsISO1ovrdVal =
    0;                                 /* Referenced by: '<S329>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EV_DCTargetVoltOvrd = 0;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EnableV2GFeature = 0;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_Enable_PNC = 1;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EnblChrgCounter = 0;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EnblDCChrg = 0;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_EnblStkOpnChk = 0;/* Referenced by:
                                                                      * '<S11>/DC_Charging'
                                                                      * '<S11>/DC_GBT'
                                                                      * '<S214>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_GBTDCCntctrEnbl = 0;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_GBTDCCurDmndEnbl = 0;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_GBTEVReadyEnbl = 0;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_GBTExitSF = 0;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT)
    KeDCCR_b_GBT_EVSEChrgPermittingOvrd = 0;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_GBT_EVSEChrgPermittingVal
    = 0;                               /* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HCP_EVErrorCodeOvrd = 0;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HVBatSOHOvrd = 0;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HVBat_DC_CntctrOpnOvrd =
    0;                                 /* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HVBat_DC_CntctrOpnOvrdVal
    = 0;                               /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HVBat_DC_CntctrReqOvrd =
    0;                                 /* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HVBat_DC_CntctrReqOvrdVal
    = 0;                               /* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HVBat_DC_CntctrStatOvrd =
    0;                                 /* Referenced by: '<S337>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HV_AccCurrOvrd = 0;/* Referenced by: '<S338>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HV_BatCntctrOpnRqOvrd = 0;/* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_HV_BatCntctrOpnRqOvrdVal =
    0;                                 /* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_IDCM_DCCAOvrd = 0;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_IDCM_DCCAOvrdVal = 0;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_ISO_RenegAllwd = 0;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_InFieldMdOvrd = 0;/* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_InFieldMdVal = 0;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_LogisticModeOvrd = 0;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OBCM_TimeOut = 0;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OBCM_TimeOutVal = 0;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OfferedPaymContrOvrd = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OfferedPaymContrOvrdVal =
    0;                                 /* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OfferedPaymEIMOvrd = 0;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OfferedPaymEIMOvrdVal = 0;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OffrdEnrgyTxTypeOvrd = 0;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_OffrdPaymOptionOvrd = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_PnCPROXIOvrd = 0;/* Referenced by: '<S353>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_RdyToChrgStOvrd = 0;/* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_RdyToChrgStOvrdVal = 0;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_ResetV2GPerfInhibTime = 0;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_ResetV2GTimer = 0;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_Resp_CodeOvrd = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SDP_StsOvrd = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SLACStsOvrd = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SelEnrgyTxTypeOvrd = 0;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SelSrvcIDOvrd = 0;/* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_Service2CertOvrd = 0;/* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_Service2CertOvrdVal = 0;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_Service_IDOvrd = 0;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SessionStpCmdOvrd = 0;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SessionStpCmdOvrdVal = 0;/* Referenced by: '<S449>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_ShipMdOvrd = 0;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SrvcCategoryOvrd = 0;/* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_StkOpnChkCmpl = 0;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_StkOpnChkCmplVal = 0;/* Referenced by: '<S362>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_SwtchblBttryPckEnbl = 0;/* Referenced by:
                                                                      * '<S11>/DC_Charging'
                                                                      * '<S88>/Calib'
                                                                      * '<S138>/Calib'
                                                                      * '<S172>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TCPCommTerminatedOvrd = 0;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TCPCommTerminatedVal = 0;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TLSconnectionOvrd = 0;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TLSofferedOvrd = 0;/* Referenced by: '<S366>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TLSofferedOvrdVal = 0;/* Referenced by: '<S367>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TimeOutOvrd = 0;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TimeOutOvrdVal = 0;/* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TxGBTMsgResponse = 0;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TxMsgSelector = 1;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_TxMsgStatOvrd = 0;/* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_WldChkCompleteOvrd = 0;/* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(boolean, DCCR_VAR_INIT) KeDCCR_b_WldChkCompleteOvrdVal = 0;/* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_ChargingStat_BPCM, DCCR_VAR_INIT)
    KeDCCR_e_BPCM_ChrgStatVal = CeOBCR_e_BattNotReady;/* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_Charger_FaultStates, DCCR_VAR_INIT)
    KeDCCR_e_Chrgr_FaultStates = CeIDCR_e_GBT_No_FLT;/* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeBPCR_e_DCIsolSts, DCCR_VAR_INIT) KeDCCR_e_DCIsolStsVal =
    CeBPCR_e_DCIsolSts_NotPerformed;   /* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_DC_ChrgTypeCmd, DCCR_VAR_INIT)
    KeDCCR_e_DC_ChrgTypeCmdOvrdVal = CeOBCR_e_DC_ChrgType_Null;/* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_DC_ChrgTypeCmd, DCCR_VAR_INIT)
    KeDCCR_e_DC_ChrgTypeCmd_Def = CeOBCR_e_DC_ChrgType_Null;/* Referenced by:
                                                             * '<S89>/Calib'
                                                             * '<S90>/Calib'
                                                             */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_DCCntctrCmd, DCCR_VAR_INIT)
    KeDCCR_e_DC_CntctrCmdOvrdVal = CeOBCR_e_DCCntctr_Open;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeBPCR_e_HVDcChargeTypeStat, DCCR_VAR_INIT)
    KeDCCR_e_DcChargeTypeStatovrdVal = CeBPCR_e_HVDcChargeStat_400V;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_EVSEIsolSts, DCCR_VAR_INIT)
    KeDCCR_e_EVSEIsolStsOvrdVal = CeIDCR_e_EVSEIsolSts_Invalid;/* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_EVSEStsCode, DCCR_VAR_INIT)
    KeDCCR_e_EVSEStsCodeOvrdVal = CeIDCR_e_EVSEStsCode_ChrgrStndbyNtRdy;/* Referenced by: '<S378>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_EVSENotification, DCCR_VAR_INIT)
    KeDCCR_e_EVSEnotificOvrdVal = CeIDCR_e_None;/* Referenced by: '<S379>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeBPCR_e_DCCntctrSts, DCCR_VAR_INIT)
    KeDCCR_e_HVBat_DC_CntctrStatOvrdVal = CeBPCR_e_DCCntctrSts_Open;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_OffrdEnrgyTxType, DCCR_VAR_INIT)
    KeDCCR_e_OffrdEnrgyTxTypeOvrdVal = CeIDCR_e_EnrgyTxType_NoEnrgyTxType;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_OffrdPayOptn, DCCR_VAR_INIT)
    KeDCCR_e_OffrdPaymOptionVal = CeIDCR_e_OffrdPayOptn_NoPaySel;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_Plug_and_Charge, DCCR_VAR_INIT)
    KeDCCR_e_PnCPROXIOvrdVal = CeIDCR_e_Absent;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_ProtocolPriority, DCCR_VAR_INIT)
    KeDCCR_e_ProtocolPriority1 = CeOBCR_e_ISO_15118_2;/* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_ProtocolPriority, DCCR_VAR_INIT)
    KeDCCR_e_ProtocolPriority2 = CeOBCR_e_DIN_70121;/* Referenced by: '<S73>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeOBCR_e_ProtocolPriority, DCCR_VAR_INIT)
    KeDCCR_e_ProtocolPriority3 = CeOBCR_e_No_Protocol;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_RC, DCCR_VAR_INIT) KeDCCR_e_Resp_CodeOvrdVal =
    CeIDCR_e_RC_OK;                    /* Referenced by: '<S384>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_SDP_Sts, DCCR_VAR_INIT) KeDCCR_e_SDP_StsOvrdVal =
    CeIDCR_e_SDPSts_NoConnEst;         /* Referenced by: '<S385>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_SLACSts, DCCR_VAR_INIT) KeDCCR_e_SLACStsOvrdVal =
    CeIDCR_e_SLACSts_EVSE_NtFnd;       /* Referenced by: '<S386>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TePLTR_e_ShipingMode, DCCR_VAR_INIT)
    KeDCCR_e_ShipMdOvrdVal = CePLTR_e_ShipingMode_CUST_MD;/* Referenced by: '<S387>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_TLS_Connection, DCCR_VAR_INIT)
    KeDCCR_e_TLSconnectionOvrdVal = CeIDCR_e_Conn_Not_Established;/* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_TxGBTMessageResponse, DCCR_VAR_INIT)
    KeDCCR_e_TxGBTMsgResponse = CeIDCR_e_GBTRes_EVSE_Not_Connected;/* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(TeIDCR_e_TxMsgSt, DCCR_VAR_INIT) KeDCCR_e_TxMsgStatOvrdVal
    = CeIDCR_e_NoRequest;              /* Referenced by: '<S390>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_k_DC_IECCurrTolerance =
    0.05F;                             /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_k_DC_J1772CurrTolerance =
    0.03F;                             /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_k_DC_VoltTolerance = 0.02F;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_DCexitrsn1001 = 1000;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_DCexitrsn1002 = 1000;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_DCexitrsn1003 = 1000;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_DCexitrsn1004 = 1000;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_DCexitrsn1005 = 1000;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_DCexitrsn1006 = 1000;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint8, DCCR_VAR_INIT) KeDCCR_k_EOL_DVC_OvrdVal = 0U;/* Referenced by: '<S239>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_EVErrorCode = 1;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_HCP_EVErrorCodeOvrdVal = 1;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_k_LPF_MaxCellVoltCoef =
    0.85F;                             /* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint8, DCCR_VAR_INIT) KeDCCR_k_PnCMaxRetry = 2U;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_SelEnrgyTxTypeOvrdVal = 0;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_ServiceCategory = 1;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(sint16, DCCR_VAR_INIT) KeDCCR_k_SrvcCategoryOvrdVal = 0;/* Referenced by: '<S457>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(uint16, DCCR_VAR_INIT) KeDCCR_k_V2H_ISO_ServiceIdNb =
    28472U;                            /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ChrgInitTO = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ChrgrNotReadyTO = 10.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_CrntChkTimeout1 = 30.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_CrntChkTimeout2 = 30.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCChrgTestChk1 = 30.0F;/* Referenced by: '<S12>/DCChrg_EOL' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCChrgTestCrntChk = 20.0F;/* Referenced by: '<S12>/DCChrg_EOL' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCChrgTestShutdownTimer =
    30.0F;                             /* Referenced by: '<S12>/DCChrg_EOL' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCChrgportLockFdbkTout =
    60.0F;                             /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCCntctrOpnTout = 30.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCCntctrTimeOut = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCContOpnDelay = 3.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCContOpnDelayEstop =
    3.0F;                              /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCGBTMinDelay = 0.05F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DCIsolTout = 30.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_ChargerReadyTimeOut =
    60.0F;                             /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_DCcntctrsResTimeOut =
    5.0F;                              /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_EOL_StateDelay =
    0.025F;                            /* Referenced by: '<S12>/DCChrg_EOL' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_EmergShtdwnMaxWait =
    300.0F;                            /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_HCPTimeOut = 200.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_InitializationTimeOut =
    200.0F;                            /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_MinTimeDelay = 0.05F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_MinTimeDelaySp = 0.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_PrechargeTimeOut =
    15.0F;                             /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DC_S2respTimeOut = 200.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_DcChrgTypeStat_TimeOut =
    0.5F;                              /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_EOL_Passed = 5.0F;/* Referenced by: '<S12>/DCChrg_EOL' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_EVRdyTimeOut = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTEmShutdwnTO = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTIsolTO = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTShtdwnCompTO = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTShutDwnDelayCmplt =
    60.0F;                             /* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTShutdwnDelay = 0.05F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTShutdwnTO = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_GBTShutdwnTOut = 0.05F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ISO_ChrgParDscvryTmax =
    640.0F;                            /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ISO_PrechrgTimeOut =
    90.0F;                             /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ISO_ServDetailTmax =
    200.0F;                            /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ISO_ServDsvryTmax =
    240.0F;                            /* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ISO_TLSconnTmax = 200.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ISO_TLSfindTmax = 200.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_IsolationTimeOut = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_PwrDlvryDelay = 5.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_RdyToChrgTO = 30.0F;/* Referenced by: '<S11>/DC_GBT' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_S2OpenDelay = 1.2F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ShtDwnDelay = 10.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ShutDownDelayWait = 3.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_ShutDownTimeout = 30.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_SkiptoNormalst2 = 30.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_StkOpnTO = 10.0F;/* Referenced by:
                                                                      * '<S11>/DC_Charging'
                                                                      * '<S11>/DC_GBT'
                                                                      */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_V2GLimPerfTO = 600.0F;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_V2GTotalTimeLim =
    864000.0F;                         /* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static volatile CONST(float32, DCCR_VAR_INIT) KeDCCR_t_V2HMaxTime = 1.0F;/* Referenced by: '<S11>/DC_Charging' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_DCCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_DCCR_1

static VAR(uint8, DCCR_VAR_INIT) AeDCCR_y_DCChrgTestSts;/* '<Root>/DSM_8' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) EeDCCR_t_V2GPerfInhibTime;
                                    /* '<Root>/DSM_EeOBCR_t_V2GPerfInhibTime' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) EeDCCR_t_V2GTime;/* '<Root>/DSM_EeOBCR_t_V2GTime' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_E_InstChrgEnrgy;/* '<S99>/Product' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_E_InstDischrgEnrgy;/* '<S99>/Product1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_E_TECharge;/* '<S99>/Sum7' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_E_TEDischarge;/* '<S99>/Sum8' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_I_DCCurrent;/* '<S34>/Sum3' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_I_EVSEMaxCurrLmt;/* '<S5>/Switch31' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_I_EVSEOutputCurr;/* '<S5>/Switch23' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_I_HV_AccCurr;/* '<S5>/Switch60' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_K_BusPrsntCurrChk;/* '<S34>/Switch2' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_K_DCExitRsn_SF;/* '<S11>/Switch2' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_K_DCGBTExitRsn_SF;/* '<S58>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_K_DCGBTShtdwnTypeGBT;/* '<S61>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_K_DIN_DCExitRsn_SF;/* '<S53>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(uint16, DCCR_VAR_INIT) VeDCCR_K_Service_ID;/* '<S5>/Switch38' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_K_ShtDwnType;/* '<S56>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_Pct_HVBatSOH;/* '<S5>/Switch85' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_U_EVSEMaxVoltLmt;/* '<S5>/Switch' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_U_EVSEOutputVolt;/* '<S5>/Switch24' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_U_EV_DCTargetVolt_Test;/* '<S34>/Switch3' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_U_HV_BatVoltModMaxArbFil;/* '<S291>/Switch1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_B604PrgRnTmTrig;/* '<S12>/Logical3' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_ChargeReq;/* '<S5>/Switch1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_ChrgDmdExcd;/* '<S34>/LessThan3' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_ChrgTypeCmd_400;/* '<S91>/OR1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_ChrgTypeCmd_800;/* '<S92>/OR1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DCChrgEOL_TestActv;/* '<S12>/Logical' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DCChrgInitialization_SF;/* '<S11>/Switch4' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DCDINChrgInitialization_SF;/* '<S63>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DC_EOL_CrntChkPass;/* '<S12>/Comparison1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DC_EOL_CrntChkTest;/* '<S226>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DC_GBTChargeInit;/* '<S68>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DC_Isolation_Cmd_SF;/* '<S48>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DC_Isolation_Sts;/* '<S5>/Switch53' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DC_TimeOut;/* '<S5>/Switch21' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DINEVRdy_SF;/* '<S67>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DemndExcd_Curr;/* '<S34>/Logical1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DemndExcd_Volt;/* '<S34>/LessThan2' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DisChrgDmdExcd;/* '<S34>/Logical5' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_DisChrgModeDisable;/* '<S34>/Logical2' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EOLExit;/* '<S71>/Logical' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EOL_Flag;/* '<S243>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVCC_FailureSts;/* '<S5>/Switch94' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVRdy_SF;/* '<S11>/Switch5' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSECurrLmtAchvd;/* '<S5>/Switch22' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSEProcessing;/* '<S5>/Switch36' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSEPwrLmtAchvd;/* '<S5>/Switch25' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSEVoltLmtAchvd;/* '<S5>/Switch26' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSE_FreeService;/* '<S5>/Switch101' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSEsupported_DIN;/* '<S5>/Switch97' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_EVSEsupported_ISO1;/* '<S5>/Switch104' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_DCCntctrCmd, DCCR_VAR_INIT) VeDCCR_b_GBT_DC_CntctrCmd;/* '<S41>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_GBT_EVReady;/* '<S54>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_GBT_EVSEChrgPermitting;/* '<S5>/Switch49' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_HCP_StpSessionCm_SFd;/* '<S55>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_HCP_WldChkComplete_SF;/* '<S57>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_HVBat_DC_CntctrOpn;/* '<S5>/Switch51' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_HVBat_DC_CntctrReq;/* '<S5>/Switch52' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_HV_BatCntctrOpnRq;/* '<S5>/Switch55' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_IDCM_DCCA;/* '<S5>/Switch37' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_ISO_NoRetryFlag;/* '<S62>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_InFieldMode;/* '<S5>/Switch12' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_InhibitV2G;/* '<S34>/Logical9' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_J1772_S2_Close_DC;/* '<S49>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_OBCM_TimeOut;/* '<S5>/Switch44' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_OfferedPaymentContract;/* '<S5>/Switch99' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_OfferedPaymentEIM;/* '<S5>/Switch102' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_RdyToChrgStat_SF;/* '<S52>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_Service2_Certificate;/* '<S5>/Switch100' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_StkOpnChkCmpl;/* '<S5>/Switch48' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_TCPCommTerminated;/* '<S5>/Switch76' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_TLS_Connection, DCCR_VAR_INIT) VeDCCR_b_TLS_Connection;/* '<S5>/Switch96' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_TLS_Offered;/* '<S5>/Switch95' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_V2GMode_EMEA;/* '<S34>/Logical' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_V2G_ChargeTypeCond;/* '<S34>/Comparison5' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_V2G_Disable_TO;/* '<S34>/Comparison10' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_V2G_LogisicMdCond;/* '<S34>/Logical8' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_V2G_SOCCond;/* '<S144>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_V2G_SOHCond;/* '<S34>/Comparison4' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(boolean, DCCR_VAR_INIT) VeDCCR_b_VoltDiffFlag;/* '<S152>/AND' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_ChargingStat_BPCM, DCCR_VAR_INIT) VeDCCR_e_BPCM_ChrgStat_In;/* '<S5>/Switch15' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_Charger_FaultStates, DCCR_VAR_INIT)
    VeDCCR_e_Chrgr_FaultStates;        /* '<S5>/Switch47' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_DCChrgStat, DCCR_VAR_INIT) VeDCCR_e_DCChrgSysStat;/* '<S39>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(uint8, DCCR_VAR_INIT) VeDCCR_e_DCChrg_EOLTestSts;/* '<S241>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_DCGBTChrgSysStat, DCCR_VAR_INIT)
    VeDCCR_e_DCGBTChrgSysStat_SF;      /* '<S40>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_DC_ChrgTypeCmd, DCCR_VAR_INIT)
    VeDCCR_e_DC_ChargeType_Cmd_test;   /* '<S32>/Switch1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_DCCntctrCmd, DCCR_VAR_INIT) VeDCCR_e_DC_CntctrCmd_SF;/* '<S11>/Switch3' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeOBCR_e_DCCntctrCmd, DCCR_VAR_INIT) VeDCCR_e_DC_DINCntctrCmd;/* '<S38>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(uint8, DCCR_VAR_INIT) VeDCCR_e_DVC_DC_EOL;/* '<S12>/Switch1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeBPCR_e_HVDcChargeTypeStat, DCCR_VAR_INIT) VeDCCR_e_DcChargeTypeStat;/* '<S5>/Switch105' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_EVSEIsolSts, DCCR_VAR_INIT) VeDCCR_e_EVSEIsolSts;/* '<S5>/Switch41' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_EVSENotification, DCCR_VAR_INIT) VeDCCR_e_EVSENotification;/* '<S5>/Switch98' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_EVSEStsCode, DCCR_VAR_INIT) VeDCCR_e_EVSEStsCode;/* '<S5>/Switch42' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_e_HCP_EVErrCode_SF;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeBPCR_e_DCCntctrSts, DCCR_VAR_INIT) VeDCCR_e_HVBat_DC_CntctrStat;/* '<S5>/Switch54' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_OffrdEnrgyTxType, DCCR_VAR_INIT) VeDCCR_e_OffrdEnrgyTxType;/* '<S5>/Switch43' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_Plug_and_Charge, DCCR_VAR_INIT) VeDCCR_e_PnC_Proxi;/* '<S5>/Switch103' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_RC, DCCR_VAR_INIT) VeDCCR_e_Resp_Code;/* '<S5>/Switch39' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_SDP_Sts, DCCR_VAR_INIT) VeDCCR_e_SDP_Sts;/* '<S5>/Switch45' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_SLACSts, DCCR_VAR_INIT) VeDCCR_e_SLACSts;/* '<S5>/Switch46' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_e_SelEnrgyTxType_SF;/* '<S66>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(sint16, DCCR_VAR_INIT) VeDCCR_e_ServiceCategory_SF;/* '<S59>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TePLTR_e_ShipingMode, DCCR_VAR_INIT) VeDCCR_e_ShipMd;/* '<S5>/Switch89' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_TxGBTMessageResponse, DCCR_VAR_INIT)
    VeDCCR_e_TxGBTMsgResponse;         /* '<S5>/Switch34' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(TeIDCR_e_TxMsgSt, DCCR_VAR_INIT) VeDCCR_e_TxMsgStat;/* '<S5>/Switch40' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(uint8, DCCR_VAR_INIT) VeDCCR_k_DCChrgTest_ExitRsn;/* '<S240>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(uint8, DCCR_VAR_INIT) VeDCCR_k_PnC_RetryCnt;/* '<S64>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_DCChrgTestTimer_EOL;/* '<S242>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_DCGBTChargeTime;/* '<S60>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_DCGBTStateTimer;/* '<S65>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_DC_ChargeTimer;/* '<S70>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_DC_StateTimer;/* '<S69>/Gain' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_V2GPerfInhibTime;/* '<S34>/Switch5' */

#endif

#if Rte_SysCon_Variant_DCCR_1

static VAR(float32, DCCR_VAR_INIT) VeDCCR_t_V2GTime;/* '<S34>/Switch4' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

VAR(B_DCCR_ac_T, DCCR_VAR_INIT) DCCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

VAR(DW_DCCR_ac_T, DCCR_VAR_INIT) DCCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DCCR
#include "MemMap.h"

static FUNC(void, DCCR_CODE_LOCAL) DCCR_ac_Sub_Out_Init(P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_J1772_S2_Close_DC_, P2VAR(sint16, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_Service_Category_O, P2VAR(sint16, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_SelEnrgyTxType_Out, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_EVReady_Out_Init, P2VAR(sint16, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_HCP_EVErrorCode_Ou, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_I_EVMax_I_Limit_Out_, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_P_EVMax_P_Limit_Out_, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_U_EVMax_V_Limit_Out_, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_DC_Isolation_Cmd_O, P2VAR(TeOBCR_e_DCCntctrCmd,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_e_DC_CntctrCmd_Out_I, P2VAR(float32,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_U_EV_DCTargetVolt_Ou, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_WeldChkComplete_Ou, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_RdyToChrgSt_Out_In, P2VAR(uint16,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_K_SelectedServiceID_, P2VAR
    (TeOBCR_e_HVCM_SelPaymentOptn, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_SelPayOptn_Out_Ini, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_HCP_SessionStpCmd_, P2VAR(TeOBCR_e_DCChrgStat, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_DCChrgSysStat_SF_O, P2VAR
    (TeOBCR_e_DCChrg_TestSts, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_DCChrg_TestSts_Out, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_DCChrgInitializati, P2VAR(TeOBCR_e_CellVoltageStatus, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_CellVolt_OOR_Out_I, P2VAR
    (TeOBCR_e_ChrgCurrStatus, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_ChrgCurr_OOR_Out_I, P2VAR(TeOBCR_e_BattTempStatus, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_BattTemp_OOR_Out_I, P2VAR(TeOBCR_e_BattSOCStatus,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_e_SOC_OOR_Out_Init, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_CPIM_Error_Out_Ini, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_CPIM_OT_Out_Init, P2VAR(float32,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_Pct_BattFullSOC_Out_, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_BattOverVolt_Out_I, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_BattUnderVolt_Out_, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_DCGBTReadyToCharge, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_DCGBTEVChrgPermit_, P2VAR(float32,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_T_GBT_MaxBattTempAll, P2VAR
    (TeOBCR_e_ChrgCntrlMthd, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_GBT_ChrgCntrolMeth, P2VAR(TeOBCR_e_ChrgrInterruptBST, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_GBT_ChrgrInterrupt, P2VAR
    (TeOBCR_e_HVCM_SelAppProtocol, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_SelectAppProtocol_, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_SelectSecProtocol_, P2VAR(TeOBCR_e_ChargeProgress, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_ChargeProgress_Out, P2VAR
    (TeOBCR_e_DC_ChrgTypeCmd, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_DC_ChrgTypeCmd_Out, P2VAR(sint16, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_k_DCExitRsn_SF_Out_I, P2VAR(TeOBCR_e_DCGBTChrgSysStat, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_DCGBTChrgSysStat_O, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2G_Perf_Inhibited, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2GPilotEnable_Out, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_I_DCChrgEOL_TestCrnt, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_E_EVEnergyCapacity_O, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2H_MaxCurrPwrLim_, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2H_SelEnergyTrans, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_P_V2H_EVMaxPwrLim_Ou, P2VAR
    (TeOBCR_e_ProtocolPriority, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_Protocol_Priority1, P2VAR(TeOBCR_e_ProtocolPriority, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_Protocol_Priority2, P2VAR
    (TeOBCR_e_ProtocolPriority, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_Protocol_Priority3, P2VAR(uint16, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_k_MaxEntriesSASSched, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_PnCFailure_Out_Ini, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_PnCRetryFail_Out_I);

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_SHUTDOWN(const float32 *Abs);

#endif

#if Rte_SysCon_Variant_DCCR_1

static sint16 DCCR_ac_ShutdownReas(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PrechrgStat3(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_Initi_isol_prechrg(const boolean *AND_j, const boolean
    *Switch, const TeIDCR_e_OffrdPayOptn *Switch91, const TeBPCR_e_DCIsolSts
    *Switch92);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_ChrgParamDiscovery(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_PreChrg1(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_PreChrg3(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_ServDiscvry(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_SuppAppProt(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void exit_internal_PnC_Init_Isol_Pre(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_Init_Isol_Prechrg(const boolean *Logical2, const boolean
    *AND_cg, const boolean *Switch);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_Protocol_Selection(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static sint16 DCCR_ac_ShutdownReas_k(void);

#endif

#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_GBTCommunication(const TeOBCR_e_ChrgSysStat *UnitDelay5);

#endif

/*
 * Output and update for atomic system:
 *    '<S459>/Sub_Out_Init'
 *    '<S458>/Subsystem1'
 */
static FUNC(void, DCCR_CODE_LOCAL) DCCR_ac_Sub_Out_Init(P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_J1772_S2_Close_DC_, P2VAR(sint16, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_Service_Category_O, P2VAR(sint16, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_SelEnrgyTxType_Out, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_EVReady_Out_Init, P2VAR(sint16, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_HCP_EVErrorCode_Ou, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_I_EVMax_I_Limit_Out_, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_P_EVMax_P_Limit_Out_, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_U_EVMax_V_Limit_Out_, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_DC_Isolation_Cmd_O, P2VAR(TeOBCR_e_DCCntctrCmd,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_e_DC_CntctrCmd_Out_I, P2VAR(float32,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_U_EV_DCTargetVolt_Ou, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_WeldChkComplete_Ou, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_RdyToChrgSt_Out_In, P2VAR(uint16,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_K_SelectedServiceID_, P2VAR
    (TeOBCR_e_HVCM_SelPaymentOptn, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_SelPayOptn_Out_Ini, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_HCP_SessionStpCmd_, P2VAR(TeOBCR_e_DCChrgStat, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_DCChrgSysStat_SF_O, P2VAR
    (TeOBCR_e_DCChrg_TestSts, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_DCChrg_TestSts_Out, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_DCChrgInitializati, P2VAR(TeOBCR_e_CellVoltageStatus, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_CellVolt_OOR_Out_I, P2VAR
    (TeOBCR_e_ChrgCurrStatus, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_ChrgCurr_OOR_Out_I, P2VAR(TeOBCR_e_BattTempStatus, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_BattTemp_OOR_Out_I, P2VAR(TeOBCR_e_BattSOCStatus,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_e_SOC_OOR_Out_Init, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_CPIM_Error_Out_Ini, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_CPIM_OT_Out_Init, P2VAR(float32,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_Pct_BattFullSOC_Out_, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_BattOverVolt_Out_I, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_BattUnderVolt_Out_, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_DCGBTReadyToCharge, P2VAR(boolean,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_b_DCGBTEVChrgPermit_, P2VAR(float32,
    AUTOMATIC, DCCR_VAR_INIT) rty_VeDCCR_T_GBT_MaxBattTempAll, P2VAR
    (TeOBCR_e_ChrgCntrlMthd, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_GBT_ChrgCntrolMeth, P2VAR(TeOBCR_e_ChrgrInterruptBST, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_GBT_ChrgrInterrupt, P2VAR
    (TeOBCR_e_HVCM_SelAppProtocol, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_SelectAppProtocol_, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_SelectSecProtocol_, P2VAR(TeOBCR_e_ChargeProgress, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_ChargeProgress_Out, P2VAR
    (TeOBCR_e_DC_ChrgTypeCmd, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_DC_ChrgTypeCmd_Out, P2VAR(sint16, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_k_DCExitRsn_SF_Out_I, P2VAR(TeOBCR_e_DCGBTChrgSysStat, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_DCGBTChrgSysStat_O, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2G_Perf_Inhibited, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2GPilotEnable_Out, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_I_DCChrgEOL_TestCrnt, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_E_EVEnergyCapacity_O, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2H_MaxCurrPwrLim_, P2VAR(boolean, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_b_V2H_SelEnergyTrans, P2VAR(float32, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_P_V2H_EVMaxPwrLim_Ou, P2VAR
    (TeOBCR_e_ProtocolPriority, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_Protocol_Priority1, P2VAR(TeOBCR_e_ProtocolPriority, AUTOMATIC,
    DCCR_VAR_INIT) rty_VeDCCR_e_Protocol_Priority2, P2VAR
    (TeOBCR_e_ProtocolPriority, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_e_Protocol_Priority3, P2VAR(uint16, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_k_MaxEntriesSASSched, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_PnCFailure_Out_Ini, P2VAR(boolean, AUTOMATIC, DCCR_VAR_INIT)
    rty_VeDCCR_b_PnCRetryFail_Out_I)
{
    /* Constant: '<S463>/Const10' */
    *rty_VeDCCR_b_J1772_S2_Close_DC_ = false;

    /* Constant: '<S463>/Const35' */
    *rty_VeDCCR_e_Service_Category_O = 0;

    /* Constant: '<S463>/Const36' */
    *rty_VeDCCR_e_SelEnrgyTxType_Out = 0;

    /* Constant: '<S463>/Const37' */
    *rty_VeDCCR_b_EVReady_Out_Init = false;

    /* Constant: '<S463>/Const38' */
    *rty_VeDCCR_e_HCP_EVErrorCode_Ou = 0;

    /* Constant: '<S463>/Const39' */
    *rty_VeDCCR_I_EVMax_I_Limit_Out_ = 0.0F;

    /* Constant: '<S463>/Const40' */
    *rty_VeDCCR_P_EVMax_P_Limit_Out_ = 0.0F;

    /* Constant: '<S463>/Const41' */
    *rty_VeDCCR_U_EVMax_V_Limit_Out_ = 0.0F;

    /* Constant: '<S463>/Const44' */
    *rty_VeDCCR_b_DC_Isolation_Cmd_O = false;

    /* Constant: '<S463>/Const45' */
    *rty_VeDCCR_e_DC_CntctrCmd_Out_I = CeOBCR_e_DCCntctr_Open;

    /* Constant: '<S463>/Const46' */
    *rty_VeDCCR_U_EV_DCTargetVolt_Ou = 0.0F;

    /* Constant: '<S463>/Const47' */
    *rty_VeDCCR_b_WeldChkComplete_Ou = false;

    /* Constant: '<S463>/Const48' */
    *rty_VeDCCR_b_RdyToChrgSt_Out_In = false;

    /* Constant: '<S463>/Const51' */
    *rty_VeDCCR_K_SelectedServiceID_ = 0U;

    /* Constant: '<S463>/Const52' */
    *rty_VeDCCR_e_SelPayOptn_Out_Ini = CeOBCR_e_NoPaymentSel;

    /* Constant: '<S463>/Const53' */
    *rty_VeDCCR_b_HCP_SessionStpCmd_ = false;

    /* Constant: '<S463>/Const54' */
    *rty_VeDCCR_e_DCChrgSysStat_SF_O = CeOBCR_e_DCinit;

    /* Constant: '<S463>/Const56' */
    *rty_VeDCCR_e_DCChrg_TestSts_Out = CeOBCR_e_DCChrg_TestSts_NotInit;

    /* Constant: '<S463>/Const69' */
    *rty_VeDCCR_b_DCChrgInitializati = false;

    /* Constant: '<S463>/Const70' */
    *rty_VeDCCR_e_CellVolt_OOR_Out_I = CeOBCR_e_CellVoltStat_Normal;

    /* Constant: '<S463>/Const71' */
    *rty_VeDCCR_e_ChrgCurr_OOR_Out_I = CeOBCR_e_ChrgCurrStat_Normal;

    /* Constant: '<S463>/Const72' */
    *rty_VeDCCR_e_BattTemp_OOR_Out_I = CeOBCR_e_BattTempStat_Normal;

    /* Constant: '<S463>/Const73' */
    *rty_VeDCCR_e_SOC_OOR_Out_Init = CeOBCR_e_BattSOCStat_Normal;

    /* Constant: '<S463>/Const74' */
    *rty_VeDCCR_b_CPIM_Error_Out_Ini = false;

    /* Constant: '<S463>/Const75' */
    *rty_VeDCCR_b_CPIM_OT_Out_Init = false;

    /* Constant: '<S463>/Const76' */
    *rty_VeDCCR_Pct_BattFullSOC_Out_ = 0.0F;

    /* Constant: '<S463>/Const77' */
    *rty_VeDCCR_b_BattOverVolt_Out_I = false;

    /* Constant: '<S463>/Const78' */
    *rty_VeDCCR_b_BattUnderVolt_Out_ = false;

    /* Constant: '<S463>/Const81' */
    *rty_VeDCCR_b_DCGBTReadyToCharge = false;

    /* Constant: '<S463>/Const82' */
    *rty_VeDCCR_b_DCGBTEVChrgPermit_ = false;

    /* Constant: '<S463>/Const89' */
    *rty_VeDCCR_T_GBT_MaxBattTempAll = 0.0F;

    /* Constant: '<S463>/Const90' */
    *rty_VeDCCR_e_GBT_ChrgCntrolMeth = CeOBCR_e_ChrgMthd_Init;

    /* Constant: '<S463>/Const91' */
    *rty_VeDCCR_e_GBT_ChrgrInterrupt = CeOBCR_e_NoChrgrInterrupt;

    /* Constant: '<S463>/Const96' */
    *rty_VeDCCR_e_SelectAppProtocol_ = CeOBCR_e_DIN;

    /* Constant: '<S463>/Const97' */
    *rty_VeDCCR_b_SelectSecProtocol_ = false;

    /* Constant: '<S463>/Const98' */
    *rty_VeDCCR_e_ChargeProgress_Out = CeOBCR_e_No_Request;

    /* Constant: '<S463>/Const99' */
    *rty_VeDCCR_e_DC_ChrgTypeCmd_Out = CeOBCR_e_DC_ChrgType_Null;

    /* Constant: '<S463>/Const4' */
    *rty_VeDCCR_k_DCExitRsn_SF_Out_I = 0;

    /* Constant: '<S463>/Const3' */
    *rty_VeDCCR_e_DCGBTChrgSysStat_O = CeOBCR_e_DCGBTinit;

    /* Constant: '<S463>/Const1' */
    *rty_VeDCCR_b_V2G_Perf_Inhibited = false;

    /* Constant: '<S463>/Const2' */
    *rty_VeDCCR_b_V2GPilotEnable_Out = false;

    /* Constant: '<S463>/Const5' */
    *rty_VeDCCR_I_DCChrgEOL_TestCrnt = 0.0F;

    /* Constant: '<S463>/Const6' */
    *rty_VeDCCR_E_EVEnergyCapacity_O = 0.0F;

    /* Constant: '<S463>/Const7' */
    *rty_VeDCCR_b_V2H_MaxCurrPwrLim_ = false;

    /* Constant: '<S463>/Const8' */
    *rty_VeDCCR_b_V2H_SelEnergyTrans = false;

    /* Constant: '<S463>/Const9' */
    *rty_VeDCCR_P_V2H_EVMaxPwrLim_Ou = 0.0F;

    /* Constant: '<S463>/Const11' */
    *rty_VeDCCR_e_Protocol_Priority1 = CeOBCR_e_ISO_15118_2;

    /* Constant: '<S463>/Const12' */
    *rty_VeDCCR_e_Protocol_Priority2 = CeOBCR_e_DIN_70121;

    /* Constant: '<S463>/Const13' */
    *rty_VeDCCR_e_Protocol_Priority3 = CeOBCR_e_No_Protocol;

    /* Constant: '<S463>/Constant16' */
    *rty_VeDCCR_k_MaxEntriesSASSched = 0U;

    /* Constant: '<S463>/Constant17' */
    *rty_VeDCCR_b_PnCFailure_Out_Ini = false;

    /* Constant: '<S463>/Constant18' */
    *rty_VeDCCR_b_PnCRetryFail_Out_I = false;
}

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_SHUTDOWN(const float32 *Abs)
{
    /* During 'SHUTDOWN': '<S33>:1543' */
    switch (DCCR_ac_DW.is_SHUTDOWN)
    {
      case DCCR_ac_IN_ChrgCmpltShtDwnSt1st:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnChrgNTRdy;
        DCCR_ac_B.ReadyToChargeState = false;
        DCCR_ac_B.EVReady_c = false;
        DCCR_ac_B.DCChargeInit = false;

        /* Switch: '<S5>/Switch40' incorporates:
         *  Switch: '<S5>/Switch39'
         *  Switch: '<S5>/Switch41'
         */
        /* During 'ChrgCmpltShtDwnSt1st': '<S33>:1641' */
        if ((((((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_PwrDlvryReq_EnrgyTx) &&
                (DCCR_ac_B.DC_StateTimer > KeDCCR_t_S2OpenDelay)) && (((sint32)
                 VeDCCR_e_Resp_Code) == 0)) && ((((uint32)VeDCCR_e_EVSEIsolSts) ==
                CeIDCR_e_EVSEIsolSts_Valid_Safe) || (((uint32)
                 VeDCCR_e_EVSEIsolSts) == CeIDCR_e_EVSEIsolSts_Warning))) ||
                ((((((((uint32)VeDCCR_e_TxMsgStat) ==
                      CeIDCR_e_TxMsgSt_CableChkReq) || (((uint32)
                    VeDCCR_e_TxMsgStat) == CeIDCR_e_NoRequest)) || (((uint32)
                   VeDCCR_e_TxMsgStat) == CeIDCR_e_ChrgParamDscvryReq)) ||
                   ((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_PreChrgReq) &&
                    ((((uint32)VeDCCR_e_EVSEIsolSts) ==
                      CeIDCR_e_EVSEIsolSts_Valid_Safe) || (((uint32)
                    VeDCCR_e_EVSEIsolSts) == CeIDCR_e_EVSEIsolSts_Warning)))) &&
                  (DCCR_ac_B.DC_StateTimer > KeDCCR_t_S2OpenDelay)) && (((sint32)
                VeDCCR_e_Resp_Code) == 0))) || (DCCR_ac_B.DC_StateTimer >
                KeDCCR_t_SkiptoNormalst2))
        {
            /* Transition: '<S33>:1555' */
            /* Transition: '<S33>:1721' */
            /* Transition: '<S33>:1554' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ChrgCompltState2nd;

            /* Entry 'ChrgCompltState2nd': '<S33>:1646' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnS2opn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.J1772_S2_Close = false;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_ChrgCompltState2nd:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnS2opn;
        DCCR_ac_B.J1772_S2_Close = false;

        /* During 'ChrgCompltState2nd': '<S33>:1646' */
        if (((!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) &&
                (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DCContOpnDelay)) ||
                (DCCR_ac_B.DC_StateTimer > KeDCCR_t_CrntChkTimeout2))
        {
            /* Transition: '<S33>:1558' */
            /* Transition: '<S33>:1557' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ChrgCompltState3rd;

            /* Entry 'ChrgCompltState3rd': '<S33>:1651' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnDCCntctropn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_Open;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_ChrgCompltState3rd:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnDCCntctropn;
        DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_Open;

        /* Switch: '<S5>/Switch54' */
        /* During 'ChrgCompltState3rd': '<S33>:1651' */
        if ((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) == CeBPCR_e_DCCntctrSts_Open)
            || (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DCCntctrOpnTout))
        {
            /* Transition: '<S33>:1560' */
            /* Transition: '<S33>:1668' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_WeldChkState1st;

            /* Entry 'WeldChkState1st': '<S33>:1653' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnIsoDisable;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.HCP_WeldChckComplete = true;
            DCCR_ac_B.DC_Isolation_Cmd = false;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_EmergShtDownSt4th:
        DCCR_ac_B.HCP_SessionStopCmd = true;

        /* During 'EmergShtDownSt4th': '<S33>:1652' */
        /* Transition: '<S33>:1562' */
        /* Transition: '<S33>:1564' */
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ShtDwnAccomplished;

        /* Entry 'ShtDwnAccomplished': '<S33>:1655' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnCmplt;
        DCCR_ac_B.DC_StateTimer = 0.0F;
        break;

      case DCCR_ac_IN_EmrgShtDwnSt1:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnS2opn;
        DCCR_ac_B.J1772_S2_Close = false;
        DCCR_ac_B.EVReady_c = false;
        DCCR_ac_B.ReadyToChargeState = false;
        DCCR_ac_B.DCChargeInit = false;

        /* During 'EmrgShtDwnSt1': '<S33>:1639' */
        if ((((VeDCCR_K_BusPrsntCurrChk == 1) || (VeDCCR_K_BusPrsntCurrChk == 2))
             && ((!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) ||
                 (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_EmergShtdwnMaxWait))) ||
            (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DCContOpnDelayEstop))
        {
            /* Transition: '<S33>:1553' */
            /* Transition: '<S33>:1676' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_EmrgShtDwnSt2;

            /* Entry 'EmrgShtDwnSt2': '<S33>:1644' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnDCCntctropn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_FastOpn;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_EmrgShtDwnSt2:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnDCCntctropn;
        DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_FastOpn;

        /* Switch: '<S5>/Switch54' */
        /* During 'EmrgShtDwnSt2': '<S33>:1644' */
        if ((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) == CeBPCR_e_DCCntctrSts_Open)
            || (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DCCntctrOpnTout))
        {
            /* Transition: '<S33>:1556' */
            /* Transition: '<S33>:1664' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_EmrgShtDwnSt3;

            /* Entry 'EmrgShtDwnSt3': '<S33>:1649' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnIsoDisable;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.DC_Isolation_Cmd = false;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_EmrgShtDwnSt3:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnIsoDisable;
        DCCR_ac_B.DC_Isolation_Cmd = false;

        /* During 'EmrgShtDwnSt3': '<S33>:1649' */
        if ((!VeDCCR_b_DC_Isolation_Sts) || (DCCR_ac_B.DC_StateTimer >
                KeDCCR_t_DCIsolTout))
        {
            /* Transition: '<S33>:1559' */
            /* Transition: '<S33>:1665' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_EmergShtDownSt4th;

            /* Entry 'EmergShtDownSt4th': '<S33>:1652' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnSesStop;
            DCCR_ac_B.HCP_SessionStopCmd = true;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_ShtDwnAccomplished:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnCmplt;

        /* During 'ShtDwnAccomplished': '<S33>:1655' */
        if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ShtDwnDelay)
        {
            /* Transition: '<S33>:1566' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_NO_ACTIVE_CHILD;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_ASSOCIATION;

            /* Entry 'ASSOCIATION': '<S33>:1' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.HCP_SessionStopCmd = false;
            DCCR_ac_B.HCP_WeldChckComplete = false;
            DCCR_ac_B.ReadyToChargeState = false;
            DCCR_ac_B.DCChargeInit = false;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_ShutdownCrntChk:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnINIT;

        /* During 'ShutdownCrntChk': '<S33>:1640' */
        if (((VeDCCR_K_BusPrsntCurrChk == 2) || (VeDCCR_K_BusPrsntCurrChk == 1))
            || (DCCR_ac_B.DC_StateTimer > KeDCCR_t_CrntChkTimeout1))
        {
            /* Transition: '<S33>:1552' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ChrgCmpltShtDwnSt1st;

            /* Entry 'ChrgCmpltShtDwnSt1st': '<S33>:1641' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnChrgNTRdy;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.ReadyToChargeState = false;
            DCCR_ac_B.EVReady_c = false;
            DCCR_ac_B.DCChargeInit = false;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_Shutdownin:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;

        /* During 'Shutdownin': '<S33>:1637' */
        if ((VeDCCR_b_V2GMode_EMEA) || (DCCR_ac_B.DCexitReason_j == 24))
        {
            /* Transition: '<S33>:1682' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ShutdowninV2G;

            /* Entry 'ShutdowninV2G': '<S33>:1681' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnV2G;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.ReadyToChargeState = false;
        }
        else if ((DCCR_ac_B.DC_StateTimer > KeDCCR_t_ShutDownDelayWait) ||
                 ((*Abs) < KeDCCR_I_DC_MaxOutputCrntLim))
        {
            /* Transition: '<S33>:1548' */
            /* Transition: '<S33>:1549' */
            switch (DCCR_ac_DW.ShtdwnType)
            {
              case 1:
                /* Transition: '<S33>:1551' */
                DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ShutdownCrntChk;

                /* Entry 'ShutdownCrntChk': '<S33>:1640' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnINIT;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                break;

              case 0:
                /* Transition: '<S33>:1550' */
                DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_EmrgShtDwnSt1;

                /* Entry 'EmrgShtDwnSt1': '<S33>:1639' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnS2opn;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.J1772_S2_Close = false;
                DCCR_ac_B.EVReady_c = false;
                DCCR_ac_B.ReadyToChargeState = false;
                DCCR_ac_B.DCChargeInit = false;
                break;

              default:
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                break;
            }
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_ShutdowninV2G:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnV2G;
        DCCR_ac_B.ReadyToChargeState = false;

        /* During 'ShutdowninV2G': '<S33>:1681' */
        if ((DCCR_ac_B.DC_StateTimer > KeDCCR_t_ShutDownDelayWait) || ((*Abs) <
                KeDCCR_I_DC_MaxOutputCrntLim))
        {
            /* Transition: '<S33>:1684' */
            /* Transition: '<S33>:1685' */
            /* Transition: '<S33>:1549' */
            switch (DCCR_ac_DW.ShtdwnType)
            {
              case 1:
                /* Transition: '<S33>:1551' */
                DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ShutdownCrntChk;

                /* Entry 'ShutdownCrntChk': '<S33>:1640' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnINIT;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                break;

              case 0:
                /* Transition: '<S33>:1550' */
                DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_EmrgShtDwnSt1;

                /* Entry 'EmrgShtDwnSt1': '<S33>:1639' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCEmrgShtDwnS2opn;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.J1772_S2_Close = false;
                DCCR_ac_B.EVReady_c = false;
                DCCR_ac_B.ReadyToChargeState = false;
                DCCR_ac_B.DCChargeInit = false;
                break;

              default:
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                break;
            }
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      case DCCR_ac_IN_WaitSt2_ChrCompl:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnSesStop;
        DCCR_ac_B.HCP_SessionStopCmd = true;

        /* Switch: '<S5>/Switch40' */
        /* During 'WaitSt2_ChrCompl': '<S33>:1654' */
        if ((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_SessionStopReq) ||
                (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ShutDownTimeout))
        {
            /* Transition: '<S33>:1563' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_ShtDwnAccomplished;

            /* Entry 'ShtDwnAccomplished': '<S33>:1655' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnCmplt;
            DCCR_ac_B.DC_StateTimer = 0.0F;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;

      default:
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnIsoDisable;
        DCCR_ac_B.DC_Isolation_Cmd = false;

        /* During 'WeldChkState1st': '<S33>:1653' */
        if ((!VeDCCR_b_DC_Isolation_Sts) || (DCCR_ac_B.DC_StateTimer >
                KeDCCR_t_DCIsolTout))
        {
            /* Transition: '<S33>:1561' */
            /* Transition: '<S33>:1669' */
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_WaitSt2_ChrCompl;

            /* Entry 'WaitSt2_ChrCompl': '<S33>:1654' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwnSesStop;
            DCCR_ac_B.HCP_SessionStopCmd = true;
            DCCR_ac_B.DC_StateTimer = 0.0F;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
        break;
    }
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static sint16 DCCR_ac_ShutdownReas(void)
{
    sint16 ShtdwnType;

    /* Graphical Function 'ShutdownReas': '<S33>:1569' */
    /* Transition: '<S33>:1599' */
    ShtdwnType = 0;
    if ((!VeDCCR_b_HV_BatCntctrOpnRq) || (!VeDCCR_b_HVBat_DC_CntctrOpn))
    {
        /* Switch: '<S5>/Switch42' */
        /* Transition: '<S33>:1600' */
        /* Transition: '<S33>:1601' */
        if ((((((((((((DCCR_ac_B.DCexitReason_j == 5) ||
                      ((DCCR_ac_B.DCexitReason_j == 9) && (((uint32)
                         VeDCCR_e_EVSEStsCode) ==
                        CeIDCR_e_EVSEStsCode_ChrgrShtdwn))) ||
                     (DCCR_ac_B.DCexitReason_j == KeDCCR_k_DCexitrsn1001)) ||
                    (DCCR_ac_B.DCexitReason_j == KeDCCR_k_DCexitrsn1002)) ||
                   (DCCR_ac_B.DCexitReason_j == KeDCCR_k_DCexitrsn1003)) ||
                  (DCCR_ac_B.DCexitReason_j == KeDCCR_k_DCexitrsn1004)) ||
                 (DCCR_ac_B.DCexitReason_j == KeDCCR_k_DCexitrsn1005)) ||
                (DCCR_ac_B.DCexitReason_j == KeDCCR_k_DCexitrsn1006)) ||
                (DCCR_ac_B.DCexitReason_j == 22)) || (DCCR_ac_B.DCexitReason_j ==
               23)) || (DCCR_ac_B.DCexitReason_j == 28)) ||
                (DCCR_ac_B.DCexitReason_j == 29))
        {
            /* Transition: '<S33>:1603' */
            /* Transition: '<S33>:1605' */
            ShtdwnType = 1;

            /* Transition: '<S33>:1606' */
        }
        else
        {
            /* Transition: '<S33>:1604' */
        }

        /* Transition: '<S33>:1607' */
        if (DCCR_ac_B.DCexitReason_j == 100)
        {
            /* Transition: '<S33>:1608' */
            /* Transition: '<S33>:1610' */
            ShtdwnType = 2;

            /* Transition: '<S33>:1611' */
        }
        else
        {
            /* Transition: '<S33>:1609' */
        }

        if (DCCR_ac_B.DCexitReason_j == 100)
        {
            /* Transition: '<S33>:1613' */
            /* Transition: '<S33>:1615' */
            ShtdwnType = 3;

            /* Transition: '<S33>:1616' */
        }
        else
        {
            /* Transition: '<S33>:1614' */
        }

        /* Transition: '<S33>:1612' */
        /* Transition: '<S33>:1617' */
    }
    else
    {
        /* Transition: '<S33>:1602' */
        /* Transition: '<S33>:1618' */
    }

    /* Switch: '<S5>/Switch41' */
    /* Transition: '<S33>:1619' */
    if (((sint32)VeDCCR_e_EVSEIsolSts) == 3)
    {
        /* Transition: '<S33>:1620' */
        /* Transition: '<S33>:1622' */
        DCCR_ac_B.DCexitReason_j = 18;

        /* Transition: '<S33>:1623' */
    }
    else
    {
        /* Transition: '<S33>:1621' */
    }

    /* End of Switch: '<S5>/Switch41' */

    /* Switch: '<S5>/Switch42' */
    /* Transition: '<S33>:1624' */
    if (((sint32)VeDCCR_e_EVSEStsCode) == 7)
    {
        /* Transition: '<S33>:1625' */
        /* Transition: '<S33>:1626' */
        DCCR_ac_B.DCexitReason_j = 19;

        /* Transition: '<S33>:1628' */
    }
    else
    {
        /* Transition: '<S33>:1627' */
    }

    /* Transition: '<S33>:1629' */
    if (((sint32)VeDCCR_e_EVSEStsCode) == 14)
    {
        /* Transition: '<S33>:1630' */
        /* Transition: '<S33>:1631' */
        DCCR_ac_B.DCexitReason_j = 20;

        /* Transition: '<S33>:1633' */
    }
    else
    {
        /* Transition: '<S33>:1632' */
    }

    /* Transition: '<S33>:1634' */
    return ShtdwnType;
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PrechrgStat3(void)
{
    boolean guard1 = false;
    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCPreCEVRdy;
    DCCR_ac_B.ReadyToChargeState = true;
    DCCR_ac_B.EVReady_c = true;

    /* Switch: '<S5>/Switch40' incorporates:
     *  Switch: '<S5>/Switch39'
     *  Switch: '<S5>/Switch41'
     *  Switch: '<S5>/Switch42'
     */
    /* During 'PrechrgStat3': '<S33>:1349' */
    if (((((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_CurrDmndReq) && (((sint32)
             VeDCCR_e_Resp_Code) == 0)) && ((((uint32)VeDCCR_e_EVSEIsolSts) ==
            CeIDCR_e_EVSEIsolSts_Valid_Safe) || (((uint32)VeDCCR_e_EVSEIsolSts) ==
            CeIDCR_e_EVSEIsolSts_Warning))) && (((uint32)VeDCCR_e_EVSEStsCode) ==
          CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng)) && (DCCR_ac_B.DC_StateTimer >
            KeDCCR_t_DC_MinTimeDelay))
    {
        /* Transition: '<S33>:1375' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_CurrentDemand;

        /* Entry 'CurrentDemand': '<S33>:171' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCrntDmd;
        DCCR_ac_B.DC_ChargeTimer = 0.0F;
        DCCR_ac_B.DC_StateTimer = 0.0F;
        DCCR_ac_B.EVReady_c = true;
        DCCR_ac_B.DCexitReason_j = 0;
    }
    else
    {
        guard1 = false;
        if (!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)
        {
            /* Transition: '<S33>:1416' */
            DCCR_ac_B.DCexitReason_j = 1;

            /* Transition: '<S33>:1418' */
            guard1 = true;
        }
        else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_PrechargeTimeOut)
        {
            /* Transition: '<S33>:1381' */
            DCCR_ac_B.DCexitReason_j = 17;
            guard1 = true;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }

        if (guard1)
        {
            /* Transition: '<S33>:1378' */
            /* Transition: '<S33>:1718' */
            /* Transition: '<S33>:1747' */
            /* Transition: '<S33>:1741' */
            /* Transition: '<S33>:1720' */
            /* Transition: '<S33>:1719' */
            /* Transition: '<S33>:1679' */
            /* Transition: '<S33>:1403' */
            /* Transition: '<S33>:1455' */
            /* Transition: '<S33>:967' */
            /* Transition: '<S33>:324' */
            DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

            /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
            /* Transition: '<S33>:1547' */
            DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

            /* Entry 'Shutdownin': '<S33>:1637' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S5>/Switch40' */
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_Initi_isol_prechrg(const boolean *AND_j, const boolean
    *Switch, const TeIDCR_e_OffrdPayOptn *Switch91, const TeBPCR_e_DCIsolSts
    *Switch92)
{
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    boolean guard4 = false;
    boolean guard5 = false;
    boolean guard6 = false;
    boolean guard7 = false;
    boolean guard8 = false;
    boolean tmpRead;

    /* During 'Initi_isol_prechrg': '<S33>:11' */
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    guard6 = false;
    guard7 = false;
    guard8 = false;
    if (VeDCCR_b_TCPCommTerminated)
    {
        /* Transition: '<S33>:815' */
        DCCR_ac_B.DCexitReason_j = 2;
        guard8 = true;
    }
    else if (VeDCCR_b_DC_TimeOut)
    {
        /* Transition: '<S33>:968' */
        DCCR_ac_B.DCexitReason_j = 3;

        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if ((!VeDCCR_b_ChargeReq) && (KeDCCR_b_AllowUIS))
    {
        /* Transition: '<S33>:1454' */
        DCCR_ac_B.DCexitReason_j = 26;

        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if (!DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_E)
    {
        /* Transition: '<S33>:1400' */
        DCCR_ac_B.DCexitReason_j = 4;

        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if ((!VeDCCR_b_InFieldMode) && (VeDCCR_b_EOLExit))
    {
        /* Transition: '<S33>:1680' */
        DCCR_ac_B.DCexitReason_j = 25;

        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if (((uint32)VeDCCR_e_EVSEStsCode) == CeIDCR_e_EVSEStsCode_ChrgrShtdwn)
    {
        /* Transition: '<S33>:1715' */
        DCCR_ac_B.DCexitReason_j = 28;

        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if (((uint32)VeDCCR_e_EVSEStsCode) ==
             CeIDCR_e_EVSEStsCode_ChrgrEmrgncyShtdwn)
    {
        /* Transition: '<S33>:1716' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if (((((uint32)(*Switch92)) == CeBPCR_e_DCIsolSts_Failure) || (((uint32)
                (*Switch92)) == CeBPCR_e_DCIsolSts_Error)) || (((uint32)
               (*Switch92)) == CeBPCR_e_DCIsolSts_SNA))
    {
        /* Transition: '<S33>:1742' */
        DCCR_ac_B.DCexitReason_j = 30;

        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else if (VeDCCR_b_EVCC_FailureSts)
    {
        /* Transition: '<S33>:1748' */
        DCCR_ac_B.DCexitReason_j = 29;

        /* Transition: '<S33>:1747' */
        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        guard8 = true;
    }
    else
    {
        switch (DCCR_ac_DW.is_Initi_isol_prechrg)
        {
          case DCCR_ac_IN_CableChk:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCableChk;
            DCCR_ac_B.EVReady_c = true;

            /* During 'CableChk': '<S33>:1363' */
            if ((((((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_PreChrgReq) &&
                    (((sint32)VeDCCR_e_Resp_Code) == 0)) && ((((uint32)
                      VeDCCR_e_EVSEIsolSts) == CeIDCR_e_EVSEIsolSts_Valid_Safe) ||
                    (((uint32)VeDCCR_e_EVSEIsolSts) ==
                     CeIDCR_e_EVSEIsolSts_Warning))) && (((uint32)
                    VeDCCR_e_EVSEStsCode) == CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng))
                 && (!VeDCCR_b_VoltDiffFlag)) && (DCCR_ac_B.DC_StateTimer >
                    KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:1386' */
                DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_PreChrgReq;

                /* Entry 'PreChrgReq': '<S33>:1365' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCPreCIsoDisable;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.DC_Isolation_Cmd = true;
            }
            else if (!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)
            {
                /* Transition: '<S33>:1407' */
                DCCR_ac_B.DCexitReason_j = 1;
                guard1 = true;
            }
            else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_ChargerReadyTimeOut)
            {
                /* Transition: '<S33>:1387' */
                DCCR_ac_B.DCexitReason_j = 14;

                /* Transition: '<S33>:1406' */
                guard1 = true;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR__IN_ChrgParameterDiscovery:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCChrgParDisc;
            DCCR_ac_B.J1772_S2_Close = true;
            DCCR_ac_B.EVReady_c = false;

            /* During 'ChrgParameterDiscovery': '<S33>:1443' */
            if ((((((DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) &&
                    (KeDCCR_b_SwtchblBttryPckEnbl)) && ((((uint32)
                      VeDCCR_e_DcChargeTypeStat) == CeBPCR_e_HVDcChargeStat_400V)
                    || (((uint32)VeDCCR_e_DcChargeTypeStat) ==
                        CeBPCR_e_HVDcChargeStat_800V))) ||
                    ((!KeDCCR_b_SwtchblBttryPckEnbl) &&
                     (DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J))) && (*AND_j)) &&
                (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:1444' */
                DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_CableChk;

                /* Entry 'CableChk': '<S33>:1363' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCableChk;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.EVReady_c = true;
            }
            else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_S2respTimeOut)
            {
                /* Transition: '<S33>:1447' */
                DCCR_ac_B.DCexitReason_j = 13;

                /* Transition: '<S33>:1450' */
                /* Transition: '<S33>:2034' */
                guard2 = true;
            }
            else if ((((((uint32)VeDCCR_e_DcChargeTypeStat) !=
                        CeBPCR_e_HVDcChargeStat_400V) && (((uint32)
                         VeDCCR_e_DcChargeTypeStat) !=
                        CeBPCR_e_HVDcChargeStat_800V)) &&
                      (KeDCCR_b_SwtchblBttryPckEnbl)) &&
                     (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DcChrgTypeStat_TimeOut))
            {
                /* Transition: '<S33>:2025' */
                DCCR_ac_B.DCexitReason_j = 87;

                /* Transition: '<S33>:2034' */
                guard2 = true;
            }
            else if (!(*AND_j))
            {
                /* Transition: '<S33>:2035' */
                DCCR_ac_B.DCexitReason_j = 31;
                guard2 = true;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_ChrgportLockFdbk:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCableLockFdbkWait;

            /* Inport: '<Root>/VeCPLR_b_Lock_Status' */
            /* During 'ChrgportLockFdbk': '<S33>:1360' */
            (void)Rte_Read_VeCPLR_b_Lock_Status_Value(&tmpRead);
            if (tmpRead && (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:1380' */
                DCCR_ac_DW.is_Initi_isol_prechrg =
                    DCCR__IN_ChrgParameterDiscovery;

                /* Entry 'ChrgParameterDiscovery': '<S33>:1443' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCChrgParDisc;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.J1772_S2_Close = true;
                DCCR_ac_B.EVReady_c = false;
            }
            else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DCChrgportLockFdbkTout)
            {
                /* Transition: '<S33>:1379' */
                DCCR_ac_B.DCexitReason_j = 21;

                /* Transition: '<S33>:1449' */
                /* Transition: '<S33>:1450' */
                /* Transition: '<S33>:2034' */
                /* Transition: '<S33>:2024' */
                /* Transition: '<S33>:1406' */
                /* Transition: '<S33>:1451' */
                /* Transition: '<S33>:1390' */
                /* Transition: '<S33>:1410' */
                /* Transition: '<S33>:1392' */
                /* Transition: '<S33>:1414' */
                /* Transition: '<S33>:1391' */
                /* Transition: '<S33>:1418' */
                /* Transition: '<S33>:1378' */
                /* Transition: '<S33>:1718' */
                /* Transition: '<S33>:1747' */
                /* Transition: '<S33>:1741' */
                /* Transition: '<S33>:1720' */
                /* Transition: '<S33>:1719' */
                /* Transition: '<S33>:1679' */
                /* Transition: '<S33>:1403' */
                /* Transition: '<S33>:1455' */
                /* Transition: '<S33>:967' */
                /* Transition: '<S33>:324' */
                DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                /* Transition: '<S33>:1547' */
                DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                /* Entry 'Shutdownin': '<S33>:1637' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                DCCR_ac_B.DC_StateTimer = 0.0F;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_ContractAuth:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCContractAuth;
            DCCR_ac_B.SelectedEnergyTransferType = 4;
            DCCR_ac_B.EVReady_c = false;

            /* During 'ContractAuth': '<S33>:45' */
            if ((((((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_ChrgParamDscvryReq)
                    && (((sint32)VeDCCR_e_Resp_Code) == 0)) && (((sint32)
                     VeDCCR_e_BPCM_ChrgStat_In) == 1)) &&
                    (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelaySp)) &&
                    (VeDCCR_b_EVSEProcessing)) && (*Switch))
            {
                /* Transition: '<S33>:85' */
                DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_ChrgportLockFdbk;

                /* Entry 'ChrgportLockFdbk': '<S33>:1360' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCableLockFdbkWait;
                DCCR_ac_B.DC_StateTimer = 0.0F;
            }
            else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_HCPTimeOut)
            {
                /* Transition: '<S33>:100' */
                DCCR_ac_B.DCexitReason_j = 12;

                /* Transition: '<S33>:1698' */
                guard3 = true;
            }
            else if (((KeDCCR_b_EnblStkOpnChk) && (DCCR_ac_B.DC_StateTimer >
                       KeDCCR_t_StkOpnTO)) && (!(*Switch)))
            {
                /* Transition: '<S33>:1699' */
                DCCR_ac_B.DCexitReason_j = 27;
                guard3 = true;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_InitStat1:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit1;
            DCCR_ac_B.DCChargeInit = true;

            /* During 'InitStat1': '<S33>:22' */
            if (((((sint32)VeDCCR_e_Resp_Code) == 0) && (((sint32)
                    VeDCCR_e_OffrdEnrgyTxType) == 4)) &&
                    (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:1223' */
                if (((((((uint32)(*Switch91)) == CeIDCR_e_OffrdPayOptn_ExtPay) ||
                       (VeDCCR_b_OfferedPaymentEIM)) &&
                        (VeDCCR_b_EVSE_FreeService)) || ((((uint32)(*Switch91)) ==
                       CeIDCR_e_OffrdPayOptn_NoPaySel) ||
                        (!VeDCCR_b_OfferedPaymentEIM))) || ((((uint32)(*Switch91))
                      == CeIDCR_e_OffrdPayOptn_Contract) ||
                        (VeDCCR_b_OfferedPaymentContract)))
                {
                    /* Transition: '<S33>:1728' */
                    DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_NoPaymentSel;

                    /* Transition: '<S33>:1729' */
                    guard5 = true;
                }
                else
                {
                    /* Transition: '<S33>:1730' */
                    if (((((uint32)(*Switch91)) == CeIDCR_e_OffrdPayOptn_ExtPay)
                         || (VeDCCR_b_OfferedPaymentEIM)) &&
                            (!VeDCCR_b_EVSE_FreeService))
                    {
                        /* Transition: '<S33>:1731' */
                        DCCR_ac_B.HVCM_SelectedPaymentOptn =
                            CeOBCR_e_ExternalPayment;
                        guard5 = true;
                    }
                    else
                    {
                        guard4 = true;
                    }
                }
            }
            else
            {
                guard4 = true;
            }
            break;

          case DCCR_ac_IN_PreChrgReq:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCPreCIsoDisable;
            DCCR_ac_B.DC_Isolation_Cmd = true;

            /* During 'PreChrgReq': '<S33>:1365' */
            if (!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)
            {
                /* Transition: '<S33>:1408' */
                DCCR_ac_B.DCexitReason_j = 1;

                /* Transition: '<S33>:1410' */
                guard6 = true;
            }
            else
            {
                /*   */
                if ((((((((VeDCCR_b_DC_Isolation_Sts) && (((uint32)
                            VeDCCR_e_HVBat_DC_CntctrStat) !=
                           CeBPCR_e_DCCntctrSts_Faulted)) && (((uint32)
                           DCCR_ac_B.TmpSignalConversionAtVeBPCR_e_H) ==
                          CeHVTR_e_Closed)) &&
                        (!DCCR_ac_B.TmpSignalConversionAtVeHPMR_b_B)) &&
                        (!VeDCCR_b_HV_BatCntctrOpnRq)) &&
                        (!VeDCCR_b_HVBat_DC_CntctrOpn)) &&
                        (!VeDCCR_b_HVBat_DC_CntctrReq)) &&
                        (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:1382' */
                    DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_PrechrgStat2;

                    /* Entry 'PrechrgStat2': '<S33>:1350' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCPreCDCCntctrCmd;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_Close;
                }
                else if (DCCR_ac_B.DC_StateTimer >
                         KeDCCR_t_DC_DCcntctrsResTimeOut)
                {
                    /* Transition: '<S33>:1374' */
                    DCCR_ac_B.DCexitReason_j = 15;

                    /* Transition: '<S33>:1390' */
                    /* Transition: '<S33>:1410' */
                    guard6 = true;
                }
                else if (VeDCCR_b_VoltDiffFlag)
                {
                    /* Transition: '<S33>:1388' */
                    DCCR_ac_B.DCexitReason_j = 6;
                    guard6 = true;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
            }
            break;

          case DCCR_ac_IN_PrechrgStat2:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCPreCDCCntctrCmd;
            DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_Close;

            /* During 'PrechrgStat2': '<S33>:1350' */
            if (!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)
            {
                /* Transition: '<S33>:1412' */
                DCCR_ac_B.DCexitReason_j = 1;
                guard7 = true;
            }
            else if ((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) ==
                      CeBPCR_e_DCCntctrSts_Closed) && (DCCR_ac_B.DC_StateTimer >
                      KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:1373' */
                DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_PrechrgStat3;

                /* Entry 'PrechrgStat3': '<S33>:1349' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCPreCEVRdy;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.ReadyToChargeState = true;
                DCCR_ac_B.EVReady_c = true;
            }
            else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_DCcntctrsResTimeOut)
            {
                /* Transition: '<S33>:1384' */
                DCCR_ac_B.DCexitReason_j = 16;

                /* Transition: '<S33>:1414' */
                guard7 = true;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          default:
            DCCR_ac_PrechrgStat3();
            break;
        }
    }

    if (guard8)
    {
        /* Transition: '<S33>:324' */
        /* Exit Internal 'Initi_isol_prechrg': '<S33>:11' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }

    if (guard7)
    {
        /* Transition: '<S33>:1391' */
        /* Transition: '<S33>:1418' */
        /* Transition: '<S33>:1378' */
        /* Transition: '<S33>:1718' */
        /* Transition: '<S33>:1747' */
        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        /* Transition: '<S33>:324' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }

    if (guard6)
    {
        /* Transition: '<S33>:1392' */
        /* Transition: '<S33>:1414' */
        /* Transition: '<S33>:1391' */
        /* Transition: '<S33>:1418' */
        /* Transition: '<S33>:1378' */
        /* Transition: '<S33>:1718' */
        /* Transition: '<S33>:1747' */
        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        /* Transition: '<S33>:324' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }

    if (guard5)
    {
        /* Transition: '<S33>:1734' */
        /* Transition: '<S33>:1735' */
        /* Transition: '<S33>:1736' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_ContractAuth;

        /* Entry 'ContractAuth': '<S33>:45' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCContractAuth;
        DCCR_ac_B.DC_StateTimer = 0.0F;
        DCCR_ac_B.SelectedEnergyTransferType = 4;
        DCCR_ac_B.EVReady_c = false;
    }

    if (guard4)
    {
        if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_InitializationTimeOut)
        {
            /* Transition: '<S33>:1211' */
            DCCR_ac_B.DCexitReason_j = 11;

            /* Transition: '<S33>:1212' */
            /* Transition: '<S33>:1698' */
            /* Transition: '<S33>:1393' */
            /* Transition: '<S33>:1449' */
            /* Transition: '<S33>:1450' */
            /* Transition: '<S33>:2034' */
            /* Transition: '<S33>:2024' */
            /* Transition: '<S33>:1406' */
            /* Transition: '<S33>:1451' */
            /* Transition: '<S33>:1390' */
            /* Transition: '<S33>:1410' */
            /* Transition: '<S33>:1392' */
            /* Transition: '<S33>:1414' */
            /* Transition: '<S33>:1391' */
            /* Transition: '<S33>:1418' */
            /* Transition: '<S33>:1378' */
            /* Transition: '<S33>:1718' */
            /* Transition: '<S33>:1747' */
            /* Transition: '<S33>:1741' */
            /* Transition: '<S33>:1720' */
            /* Transition: '<S33>:1719' */
            /* Transition: '<S33>:1679' */
            /* Transition: '<S33>:1403' */
            /* Transition: '<S33>:1455' */
            /* Transition: '<S33>:967' */
            /* Transition: '<S33>:324' */
            DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

            /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
            /* Transition: '<S33>:1547' */
            DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

            /* Entry 'Shutdownin': '<S33>:1637' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }
    }

    if (guard3)
    {
        /* Transition: '<S33>:1393' */
        /* Transition: '<S33>:1449' */
        /* Transition: '<S33>:1450' */
        /* Transition: '<S33>:2034' */
        /* Transition: '<S33>:2024' */
        /* Transition: '<S33>:1406' */
        /* Transition: '<S33>:1451' */
        /* Transition: '<S33>:1390' */
        /* Transition: '<S33>:1410' */
        /* Transition: '<S33>:1392' */
        /* Transition: '<S33>:1414' */
        /* Transition: '<S33>:1391' */
        /* Transition: '<S33>:1418' */
        /* Transition: '<S33>:1378' */
        /* Transition: '<S33>:1718' */
        /* Transition: '<S33>:1747' */
        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        /* Transition: '<S33>:324' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }

    if (guard2)
    {
        /* Transition: '<S33>:2024' */
        /* Transition: '<S33>:1406' */
        /* Transition: '<S33>:1451' */
        /* Transition: '<S33>:1390' */
        /* Transition: '<S33>:1410' */
        /* Transition: '<S33>:1392' */
        /* Transition: '<S33>:1414' */
        /* Transition: '<S33>:1391' */
        /* Transition: '<S33>:1418' */
        /* Transition: '<S33>:1378' */
        /* Transition: '<S33>:1718' */
        /* Transition: '<S33>:1747' */
        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        /* Transition: '<S33>:324' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }

    if (guard1)
    {
        /* Transition: '<S33>:1451' */
        /* Transition: '<S33>:1390' */
        /* Transition: '<S33>:1410' */
        /* Transition: '<S33>:1392' */
        /* Transition: '<S33>:1414' */
        /* Transition: '<S33>:1391' */
        /* Transition: '<S33>:1418' */
        /* Transition: '<S33>:1378' */
        /* Transition: '<S33>:1718' */
        /* Transition: '<S33>:1747' */
        /* Transition: '<S33>:1741' */
        /* Transition: '<S33>:1720' */
        /* Transition: '<S33>:1719' */
        /* Transition: '<S33>:1679' */
        /* Transition: '<S33>:1403' */
        /* Transition: '<S33>:1455' */
        /* Transition: '<S33>:967' */
        /* Transition: '<S33>:324' */
        DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_ChrgParamDiscovery(void)
{
    boolean guard1 = false;
    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ChrgParDsvry;
    DCCR_ac_B.J1772_S2_Close = true;

    /* Switch: '<S5>/Switch105' */
    /* During 'PnC_ChrgParamDiscovery': '<S33>:2118' */
    if ((((DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) &&
            (KeDCCR_b_SwtchblBttryPckEnbl)) && ((((uint32)
            VeDCCR_e_DcChargeTypeStat) == CeBPCR_e_HVDcChargeStat_400V) ||
            (((uint32)VeDCCR_e_DcChargeTypeStat) == CeBPCR_e_HVDcChargeStat_800V)))
        || (((!KeDCCR_b_SwtchblBttryPckEnbl) &&
             (DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)) &&
            (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay)))
    {
        /* Transition: '<S33>:2099' */
        DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_PnC_CableChk;

        /* Entry 'PnC_CableChk': '<S33>:2119' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_CableChk;
        DCCR_ac_B.DC_StateTimer = 0.0F;
        DCCR_ac_B.EVReady_c = true;
        DCCR_ac_DW.checkS2 = true;
    }
    else
    {
        guard1 = false;
        if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_S2respTimeOut)
        {
            /* Transition: '<S33>:2095' */
            guard1 = true;
        }
        else if ((((((uint32)VeDCCR_e_DcChargeTypeStat) !=
                    CeBPCR_e_HVDcChargeStat_400V) && (((uint32)
                     VeDCCR_e_DcChargeTypeStat) != CeBPCR_e_HVDcChargeStat_800V))
                  && (KeDCCR_b_SwtchblBttryPckEnbl)) && (DCCR_ac_B.DC_StateTimer
                  > KeDCCR_t_DcChrgTypeStat_TimeOut))
        {
            /* Transition: '<S33>:2097' */
            /* Transition: '<S33>:2096' */
            guard1 = true;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }

        if (guard1)
        {
            /* Transition: '<S33>:2093' */
            /* Transition: '<S33>:2090' */
            /* Transition: '<S33>:2086' */
            /* Transition: '<S33>:2083' */
            /* Transition: '<S33>:2080' */
            /* Transition: '<S33>:2078' */
            /* Transition: '<S33>:2077' */
            /* Transition: '<S33>:2174' */
            /* Transition: '<S33>:2160' */
            /* Transition: '<S33>:2179' */
            /* Transition: '<S33>:2158' */
            /* Transition: '<S33>:2142' */
            /* Transition: '<S33>:2147' */
            /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
               HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
               HVCM_SelectedSecProtocol= boolean(0); */
            DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                DCCR_ac_DW.PnC_abortReason) + 80);

            /* Transition: '<S33>:2128' */
            DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

            /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
            /* Transition: '<S33>:1547' */
            DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

            /* Entry 'Shutdownin': '<S33>:1637' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S5>/Switch105' */
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_PreChrg1(void)
{
    boolean guard1 = false;
    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_IsoDisable;
    DCCR_ac_B.DC_Isolation_Cmd = true;

    /* Switch: '<S5>/Switch54' incorporates:
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
    /* During 'PnC_PreChrg1': '<S33>:2121' */
    /*   */
    if ((((((((VeDCCR_b_DC_Isolation_Sts) && (((uint32)
                VeDCCR_e_HVBat_DC_CntctrStat) != CeBPCR_e_DCCntctrSts_Faulted)) &&
             (((uint32)DCCR_ac_B.TmpSignalConversionAtVeBPCR_e_H) ==
              CeHVTR_e_Closed)) && (!DCCR_ac_B.TmpSignalConversionAtVeHPMR_b_B))
           && (!VeDCCR_b_HV_BatCntctrOpnRq)) && (!VeDCCR_b_HVBat_DC_CntctrOpn)) &&
         (!VeDCCR_b_HVBat_DC_CntctrReq)) && (DCCR_ac_B.DC_StateTimer >
            KeDCCR_t_DC_MinTimeDelay))
    {
        /* Transition: '<S33>:2107' */
        DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_PnC_PreChrg2;

        /* Entry 'PnC_PreChrg2': '<S33>:2122' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_DCCntctrCmd;
        DCCR_ac_B.DC_StateTimer = 0.0F;
        DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_Close;
    }
    else
    {
        guard1 = false;
        if (VeDCCR_b_VoltDiffFlag)
        {
            /* Transition: '<S33>:2105' */
            /* Transition: '<S33>:2104' */
            guard1 = true;
        }
        else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_DCcntctrsResTimeOut)
        {
            /* Transition: '<S33>:2103' */
            guard1 = true;
        }
        else
        {
            /* from here on check EVSEstatus and EVSEisolation */
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }

        if (guard1)
        {
            /* Transition: '<S33>:2101' */
            DCCR_ac_B.ChargeProgress = CeOBCR_e_Stop;

            /* Transition: '<S33>:2098' */
            /* Transition: '<S33>:2096' */
            /* Transition: '<S33>:2093' */
            /* Transition: '<S33>:2090' */
            /* Transition: '<S33>:2086' */
            /* Transition: '<S33>:2083' */
            /* Transition: '<S33>:2080' */
            /* Transition: '<S33>:2078' */
            /* Transition: '<S33>:2077' */
            /* Transition: '<S33>:2174' */
            /* Transition: '<S33>:2160' */
            /* Transition: '<S33>:2179' */
            /* Transition: '<S33>:2158' */
            /* Transition: '<S33>:2142' */
            /* Transition: '<S33>:2147' */
            /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
               HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
               HVCM_SelectedSecProtocol= boolean(0); */
            DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                DCCR_ac_DW.PnC_abortReason) + 80);

            /* Transition: '<S33>:2128' */
            DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

            /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
            /* Transition: '<S33>:1547' */
            DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
            DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

            /* Entry 'Shutdownin': '<S33>:1637' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
            DCCR_ac_B.DC_StateTimer = 0.0F;
        }
    }

    /* End of Switch: '<S5>/Switch54' */
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_PreChrg3(void)
{
    TeIDCR_e_ISOResponseCode tmpRead;
    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnCEVRdy;
    DCCR_ac_B.ReadyToChargeState = true;

    /* During 'PnC_PreChrg3': '<S33>:2123' */
    if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_PrechrgTimeOut)
    {
        /* Transition: '<S33>:2113' */
        /* Transition: '<S33>:2109' */
        /* Transition: '<S33>:2106' */
        /* Transition: '<S33>:2104' */
        /* Transition: '<S33>:2101' */
        DCCR_ac_B.ChargeProgress = CeOBCR_e_Stop;

        /* Transition: '<S33>:2098' */
        /* Transition: '<S33>:2096' */
        /* Transition: '<S33>:2093' */
        /* Transition: '<S33>:2090' */
        /* Transition: '<S33>:2086' */
        /* Transition: '<S33>:2083' */
        /* Transition: '<S33>:2080' */
        /* Transition: '<S33>:2078' */
        /* Transition: '<S33>:2077' */
        /* Transition: '<S33>:2174' */
        /* Transition: '<S33>:2160' */
        /* Transition: '<S33>:2179' */
        /* Transition: '<S33>:2158' */
        /* Transition: '<S33>:2142' */
        /* Transition: '<S33>:2147' */
        /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
           HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
           HVCM_SelectedSecProtocol= boolean(0); */
        DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)DCCR_ac_DW.PnC_abortReason)
            + 80);

        /* Transition: '<S33>:2128' */
        DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }
    else
    {
        /* Inport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' */
        (void)Rte_Read_VeIDCR_e_ISO15118_ResponseCode_Value(&tmpRead);

        /* Switch: '<S5>/Switch42' incorporates:
         *  Inport: '<Root>/VeIDCR_e_ISO15118_ResponseCode'
         *  Switch: '<S5>/Switch40'
         */
        if ((((((uint32)VeDCCR_e_EVSEStsCode) ==
                CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng) && (((uint32)
                VeDCCR_e_TxMsgStat) == CeIDCR_e_CurrDmndReq)) && (((sint32)
                tmpRead) == 0)) && (DCCR_ac_B.DC_StateTimer >
                                    KeDCCR_t_DC_MinTimeDelay))
        {
            /* Transition: '<S33>:2112' */
            DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_CurrentDemand;

            /* Entry 'CurrentDemand': '<S33>:171' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCrntDmd;
            DCCR_ac_B.DC_ChargeTimer = 0.0F;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.EVReady_c = true;
            DCCR_ac_B.DCexitReason_j = 0;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }

        /* End of Switch: '<S5>/Switch42' */
    }
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_ServDiscvry(void)
{
    boolean guard1 = false;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ServDscvry;
    DCCR_ac_B.ServiceCategory = 0;
    DCCR_ac_B.EVReady_c = false;
    DCCR_ac_B.Max_Entries_SAScheduleTuple = 1U;

    /* Inport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended' */
    /* During 'PnC_ServDiscvry': '<S33>:2115' */
    (void)Rte_Read_VeIDCR_b_EVSE_Offered_DC_Extended_Value(&tmpRead);
    if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_ServDetailTmax)
    {
        /* Transition: '<S33>:2084' */
        if (tmpRead)
        {
            /* Transition: '<S33>:2085' */
            DCCR_ac_DW.PnC_abortReason = 5U;

            /* Transition: '<S33>:2083' */
        }
        else
        {
            /* Transition: '<S33>:2082' */
            /* OfferedEnergyTransferType != 4 */
        }

        /* Transition: '<S33>:2080' */
        /* Transition: '<S33>:2078' */
        /* Transition: '<S33>:2077' */
        /* Transition: '<S33>:2174' */
        /* Transition: '<S33>:2160' */
        /* Transition: '<S33>:2179' */
        /* Transition: '<S33>:2158' */
        /* Transition: '<S33>:2142' */
        /* Transition: '<S33>:2147' */
        /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
           HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
           HVCM_SelectedSecProtocol= boolean(0); */
        DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)DCCR_ac_DW.PnC_abortReason)
            + 80);

        /* Transition: '<S33>:2128' */
        DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }
    else
    {
        /* Inport: '<Root>/VeIDCR_b_EVSE_Service1_Free' */
        (void)Rte_Read_VeIDCR_b_EVSE_Service1_Free_Value(&tmpRead_0);

        /* Inport: '<Root>/VeIDCR_b_EVSE_Service1_Charging' */
        (void)Rte_Read_VeIDCR_b_EVSE_Service1_Charging_Value(&tmpRead_1);
        guard1 = false;
        if ((tmpRead_0 && tmpRead) && (DCCR_ac_B.DC_StateTimer >
                KeDCCR_t_DC_MinTimeDelay))
        {
            /* Transition: '<S33>:2087' */
            DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_NoPaymentSel;
            guard1 = true;
        }
        else if ((((VeDCCR_b_OfferedPaymentEIM) && tmpRead_1) && tmpRead) &&
                 (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
        {
            /* Transition: '<S33>:2088' */
            guard1 = true;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }

        if (guard1)
        {
            DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                DCCR_a_IN_PnC_CntrAuthorization;

            /* Entry 'PnC_CntrAuthorization': '<S33>:2116' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_WaitForAuth;
            DCCR_ac_B.SelectedEnergyTransferType = 4;
        }
    }
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_SuppAppProt(void)
{
    TeIDCR_e_ISOResponseCode tmpRead;
    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_SuppAppProt;
    DCCR_ac_B.DCChargeInit = true;

    /* During 'PnC_SuppAppProt': '<S33>:2114' */
    if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_ServDsvryTmax)
    {
        /* Transition: '<S33>:2079' */
        DCCR_ac_DW.PnC_abortReason = 4U;

        /* Transition: '<S33>:2078' */
        /* Transition: '<S33>:2077' */
        /* Transition: '<S33>:2174' */
        /* Transition: '<S33>:2160' */
        /* Transition: '<S33>:2179' */
        /* Transition: '<S33>:2158' */
        /* Transition: '<S33>:2142' */
        /* Transition: '<S33>:2147' */
        /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
           HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
           HVCM_SelectedSecProtocol= boolean(0); */
        DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)DCCR_ac_DW.PnC_abortReason)
            + 80);

        /* Transition: '<S33>:2128' */
        DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }
    else
    {
        /* Inport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' */
        (void)Rte_Read_VeIDCR_e_ISO15118_ResponseCode_Value(&tmpRead);

        /* Inport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' incorporates:
         *  Switch: '<S5>/Switch40'
         */
        if (((((sint32)tmpRead) == 0) && (((uint32)VeDCCR_e_TxMsgStat) ==
                CeIDCR_e_SrvcDscvryReq)) && (DCCR_ac_B.DC_StateTimer >
                KeDCCR_t_DC_MinTimeDelay))
        {
            /* Transition: '<S33>:2081' */
            DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_PnC_ServDiscvry;

            /* Entry 'PnC_ServDiscvry': '<S33>:2115' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ServDscvry;
            DCCR_ac_B.ServiceCategory = 0;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.EVReady_c = false;
            DCCR_ac_B.Max_Entries_SAScheduleTuple = 1U;
        }
        else if ((((((sint32)tmpRead) == 0) && (((uint32)VeDCCR_e_TxMsgStat) ==
                    CeIDCR_e_SrvcDscvryReq)) && (VeDCCR_K_Service_ID ==
                   KeDCCR_k_V2H_ISO_ServiceIdNb)) && (DCCR_ac_B.DC_StateTimer >
                  KeDCCR_t_DC_MinTimeDelay))
        {
            /* Transition: '<S33>:2213' */
            DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_V2H_ServDiscvry;

            /* Entry 'V2H_ServDiscvry': '<S33>:2212' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ServDscvry;
            DCCR_ac_B.ServiceCategory = 0;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.EVReady_c = false;
            DCCR_ac_B.Max_Entries_SAScheduleTuple = 1U;
            DCCR_ac_B.SelectedServiceId = 28472U;
        }
        else
        {
            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
        }

        /* End of Inport: '<Root>/VeIDCR_e_ISO15118_ResponseCode' */
    }
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void exit_internal_PnC_Init_Isol_Pre(void)
{
    /* Exit Internal 'PnC_Init_Isol_Prechrg': '<S33>:2060' */
    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_NO_ACTIVE_CHILD;
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_PnC_Init_Isol_Prechrg(const boolean *Logical2, const boolean
    *AND_cg, const boolean *Switch)
{
    float32 tmpRead_3;
    TeIDCR_e_ISOResponseCode tmpRead_4;
    TeIDCR_e_TLS_Connection tmpRead_5;
    boolean guard1 = false;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;

    /* Inport: '<Root>/VeIDCR_t_ISO15118_NotificationMaxDelay' */
    /* During 'PnC_Init_Isol_Prechrg': '<S33>:2060' */
    (void)Rte_Read_VeIDCR_t_ISO15118_NotificationMaxDelay_Value(&tmpRead_3);

    /* Inport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' */
    (void)Rte_Read_VeIDCR_e_ISO15118_TLS_Status_Value(&tmpRead_5);

    /* Inport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' */
    guard1 = false;
    if ((VeDCCR_b_TCPCommTerminated) || (((uint32)tmpRead_5) == CeIDCR_e_Failure))
    {
        /* Transition: '<S33>:2161' */
        guard1 = true;
    }
    else if ((DCCR_ac_DW.checkS2) && (!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J))
    {
        /* Transition: '<S33>:2162' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else if (VeDCCR_b_DC_TimeOut)
    {
        /* Transition: '<S33>:2155' */
        /* Transition: '<S33>:2163' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else if ((VeDCCR_b_EVCC_FailureSts) || (!VeDCCR_b_IDCM_DCCA))
    {
        /* Transition: '<S33>:2164' */
        /* Transition: '<S33>:2171' */
        /* Transition: '<S33>:2163' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else if (((uint32)VeDCCR_e_EVSEStsCode) ==
             CeIDCR_e_EVSEStsCode_ChrgrEmrgncyShtdwn)
    {
        /* Transition: '<S33>:2157' */
        /* Transition: '<S33>:2156' */
        /* Transition: '<S33>:2171' */
        /* Transition: '<S33>:2163' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else if (((uint32)VeDCCR_e_EVSEStsCode) == CeIDCR_e_EVSEStsCode_ChrgrShtdwn)
    {
        /* Transition: '<S33>:2173' */
        /* Transition: '<S33>:2172' */
        /* Transition: '<S33>:2156' */
        /* Transition: '<S33>:2171' */
        /* Transition: '<S33>:2163' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else if ((DCCR_ac_DW.checkEVSEst) && (((((uint32)VeDCCR_e_EVSEIsolSts) !=
                CeIDCR_e_EVSEIsolSts_Valid_Safe) && (((uint32)
                 VeDCCR_e_EVSEIsolSts) != CeIDCR_e_EVSEIsolSts_Warning)) ||
              (((uint32)VeDCCR_e_EVSEStsCode) !=
               CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng)))
    {
        /* Transition: '<S33>:2191' */
        /* Transition: '<S33>:2183' */
        /* Transition: '<S33>:2172' */
        /* Transition: '<S33>:2156' */
        /* Transition: '<S33>:2171' */
        /* Transition: '<S33>:2163' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else if ((((uint32)VeDCCR_e_EVSENotification) == CeIDCR_e_StopCharging) &&
             (DCCR_ac_B.DC_StateTimer > tmpRead_3))
    {
        /* Transition: '<S33>:2188' */
        /* {DCexitReason = int16();} */
        /* Transition: '<S33>:2194' */
        /* Transition: '<S33>:2183' */
        /* Transition: '<S33>:2172' */
        /* Transition: '<S33>:2156' */
        /* Transition: '<S33>:2171' */
        /* Transition: '<S33>:2163' */
        /* Transition: '<S33>:2180' */
        guard1 = true;
    }
    else
    {
        /* Switch: '<S5>/Switch98' incorporates:
         *  Inport: '<Root>/VeCPLR_b_Lock_Status'
         *  Inport: '<Root>/VeIDCR_b_EVSE_Offered_DC_Extended'
         *  Inport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_Free'
         *  Inport: '<Root>/VeIDCR_b_V2X_EVSE_Service_5_V2H'
         *  Inport: '<Root>/VeIDCR_e_ISO15118_ResponseCode'
         *  Switch: '<S5>/Switch15'
         *  Switch: '<S5>/Switch40'
         *  Switch: '<S5>/Switch41'
         *  Switch: '<S5>/Switch42'
         *  Switch: '<S5>/Switch54'
         */
        if ((KeDCCR_b_ISO_RenegAllwd) && (((uint32)VeDCCR_e_EVSENotification) ==
             CeIDCR_e_ReNegotiation))
        {
            /* Transition: '<S33>:2184' */
            exit_internal_PnC_Init_Isol_Pre();
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_Renegotiation;

            /* Entry 'Renegotiation': '<S33>:2041' */
            /* temporary solution */
            DCCR_ac_B.ChargeProgress = CeOBCR_e_Renegotiation;
        }
        else
        {
            (void)Rte_Read_VeCPLR_b_Lock_Status_Value(&tmpRead);
            (void)Rte_Read_VeIDCR_e_ISO15118_ResponseCode_Value(&tmpRead_4);
            switch (DCCR_ac_DW.is_PnC_Init_Isol_Prechrg)
            {
              case DCCR_ac_IN_PnC_CableChk:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_CableChk;
                DCCR_ac_B.EVReady_c = true;

                /* During 'PnC_CableChk': '<S33>:2119' */
                if ((((((((uint32)VeDCCR_e_TxMsgStat) == CeIDCR_e_PreChrgReq) &&
                        (((sint32)tmpRead_4) == 0)) && ((((uint32)
                          VeDCCR_e_EVSEIsolSts) ==
                         CeIDCR_e_EVSEIsolSts_Valid_Safe) || (((uint32)
                          VeDCCR_e_EVSEIsolSts) == CeIDCR_e_EVSEIsolSts_Warning)))
                      && (((uint32)VeDCCR_e_EVSEStsCode) ==
                          CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng)) && (!(*AND_cg)))
                    && (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2102' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_PnC_PreChrg1;

                    /* Entry 'PnC_PreChrg1': '<S33>:2121' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_IsoDisable;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.DC_Isolation_Cmd = true;
                    DCCR_ac_DW.checkEVSEst = true;
                }
                else if (DCCR_ac_B.DC_StateTimer >
                         KeDCCR_t_DC_ChargerReadyTimeOut)
                {
                    /* Transition: '<S33>:2100' */
                    /* Transition: '<S33>:2098' */
                    /* Transition: '<S33>:2096' */
                    /* Transition: '<S33>:2093' */
                    /* Transition: '<S33>:2090' */
                    /* Transition: '<S33>:2086' */
                    /* Transition: '<S33>:2083' */
                    /* Transition: '<S33>:2080' */
                    /* Transition: '<S33>:2078' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    /* from here on check S2
                       HVCM_EV_Error_Code  = int16(1); //no error */
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR__IN_PnC_ChrgParamDiscovery:
                DCCR_ac_PnC_ChrgParamDiscovery();
                break;

              case DCCR_ac_IN_PnC_ChrgportLockFdbk:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_PortLockFdbkWait;

                /* During 'PnC_ChrgportLockFdbk': '<S33>:2117' */
                if (tmpRead && (DCCR_ac_B.DC_StateTimer >
                                KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2094' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR__IN_PnC_ChrgParamDiscovery;

                    /* Entry 'PnC_ChrgParamDiscovery': '<S33>:2118' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ChrgParDsvry;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.J1772_S2_Close = true;
                }
                else if (DCCR_ac_B.DC_StateTimer >
                         KeDCCR_t_DCChrgportLockFdbkTout)
                {
                    /* Transition: '<S33>:2092' */
                    /* Transition: '<S33>:2090' */
                    /* Transition: '<S33>:2086' */
                    /* Transition: '<S33>:2083' */
                    /* Transition: '<S33>:2080' */
                    /* Transition: '<S33>:2078' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    /* NoRetryFlag = boolean(1); /$from here on no retry allowed$/ */
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_a_IN_PnC_CntrAuthorization:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_WaitForAuth;
                DCCR_ac_B.SelectedEnergyTransferType = 4;

                /* During 'PnC_CntrAuthorization': '<S33>:2116' */
                if ((((((((sint32)tmpRead_4) == 0) && (VeDCCR_b_EVSEProcessing))
                       && (((uint32)VeDCCR_e_TxMsgStat) ==
                           CeIDCR_e_ChrgParamDscvryReq)) && (((sint32)
                        VeDCCR_e_BPCM_ChrgStat_In) == 1)) && (((uint32)
                        VeDCCR_e_EVSEStsCode) ==
                        CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng)) && (*Switch))
                {
                    /* Transition: '<S33>:2091' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_PnC_ChrgportLockFdbk;

                    /* Entry 'PnC_ChrgportLockFdbk': '<S33>:2117' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_PortLockFdbkWait;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else if (DCCR_ac_B.DC_StateTimer >
                         KeDCCR_t_ISO_ChrgParDscvryTmax)
                {
                    /* Transition: '<S33>:2089' */
                    DCCR_ac_DW.PnC_abortReason = 6U;

                    /* Transition: '<S33>:2086' */
                    /* Transition: '<S33>:2083' */
                    /* Transition: '<S33>:2080' */
                    /* Transition: '<S33>:2078' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_PnC_PreChrg1:
                DCCR_ac_PnC_PreChrg1();
                break;

              case DCCR_ac_IN_PnC_PreChrg2:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_DCCntctrCmd;
                DCCR_ac_B.DC_CntctrCmd_e = CeOBCR_e_DCCntctr_Close;

                /* During 'PnC_PreChrg2': '<S33>:2122' */
                if ((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) ==
                        CeBPCR_e_DCCntctrSts_Closed) && (DCCR_ac_B.DC_StateTimer
                     > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2110' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_PnC_PreChrg3;

                    /* Entry 'PnC_PreChrg3': '<S33>:2123' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnCEVRdy;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.ReadyToChargeState = true;

                    /* EVReady = boolean(1); */
                    DCCR_ac_B.ChargeProgress = CeOBCR_e_Start;
                }
                else if (DCCR_ac_B.DC_StateTimer >
                         KeDCCR_t_DC_DCcntctrsResTimeOut)
                {
                    /* Transition: '<S33>:2108' */
                    /* Transition: '<S33>:2106' */
                    /* Transition: '<S33>:2104' */
                    /* Transition: '<S33>:2101' */
                    DCCR_ac_B.ChargeProgress = CeOBCR_e_Stop;

                    /* Transition: '<S33>:2098' */
                    /* Transition: '<S33>:2096' */
                    /* Transition: '<S33>:2093' */
                    /* Transition: '<S33>:2090' */
                    /* Transition: '<S33>:2086' */
                    /* Transition: '<S33>:2083' */
                    /* Transition: '<S33>:2080' */
                    /* Transition: '<S33>:2078' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_PnC_PreChrg3:
                DCCR_ac_PnC_PreChrg3();
                break;

              case DCCR_ac_IN_PnC_ServDiscvry:
                DCCR_ac_PnC_ServDiscvry();
                break;

              case DCCR_ac_IN_PnC_SuppAppProt:
                DCCR_ac_PnC_SuppAppProt();
                break;

              case DCCR__IN_V2H_ChrgParamDiscovery:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ChrgParDsvry;
                DCCR_ac_B.J1772_S2_Close = true;
                DCCR_ac_B.V2H_MaxCurrPwrLim_NegVa = true;

                /* During 'V2H_ChrgParamDiscovery': '<S33>:2233' */
                if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_S2respTimeOut)
                {
                    /* Transition: '<S33>:2237' */
                    /* Transition: '<S33>:2235' */
                    /* Transition: '<S33>:2232' */
                    /* Transition: '<S33>:2227' */
                    /* Transition: '<S33>:2220' */
                    /* Transition: '<S33>:2222' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else if ((DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J) &&
                         (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2239' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_PnC_CableChk;

                    /* Entry 'PnC_CableChk': '<S33>:2119' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_CableChk;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.EVReady_c = true;
                    DCCR_ac_DW.checkS2 = true;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_V2H_ChrgportLockFdbk:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_PortLockFdbkWait;

                /* During 'V2H_ChrgportLockFdbk': '<S33>:2228' */
                if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_ChrgParDscvryTmax)
                {
                    /* Transition: '<S33>:2231' */
                    /* Transition: '<S33>:2232' */
                    /* Transition: '<S33>:2227' */
                    /* Transition: '<S33>:2220' */
                    /* Transition: '<S33>:2222' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else if ((tmpRead && (*Logical2)) && (DCCR_ac_B.DC_StateTimer >
                          KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2234' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR__IN_V2H_ChrgParamDiscovery;

                    /* Entry 'V2H_ChrgParamDiscovery': '<S33>:2233' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ChrgParDsvry;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.J1772_S2_Close = true;
                    DCCR_ac_B.V2H_MaxCurrPwrLim_NegVa = true;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_a_IN_V2H_CntrAuthorization:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_WaitForAuth;
                DCCR_ac_B.SelectedEnergyTransferType = 4;
                DCCR_ac_B.V2X_HVCMS_SlctdEnergyTransfType = true;

                /* During 'V2H_CntrAuthorization': '<S33>:2223' */
                if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_ChrgParDscvryTmax)
                {
                    /* Transition: '<S33>:2226' */
                    /* Transition: '<S33>:2227' */
                    /* Transition: '<S33>:2220' */
                    /* Transition: '<S33>:2222' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else if ((((((((sint32)tmpRead_4) == 0) &&
                             (VeDCCR_b_EVSEProcessing)) && (((uint32)
                              VeDCCR_e_TxMsgStat) == CeIDCR_e_ChrgParamDscvryReq))
                           && (((sint32)VeDCCR_e_BPCM_ChrgStat_In) == 1)) &&
                          (((uint32)VeDCCR_e_EVSEStsCode) ==
                           CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng)) && (*Switch))
                {
                    /* Transition: '<S33>:2229' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_V2H_ChrgportLockFdbk;

                    /* Entry 'V2H_ChrgportLockFdbk': '<S33>:2228' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_PortLockFdbkWait;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              default:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_ServDscvry;
                DCCR_ac_B.ServiceCategory = 0;
                DCCR_ac_B.EVReady_c = false;
                DCCR_ac_B.Max_Entries_SAScheduleTuple = 1U;
                DCCR_ac_B.SelectedServiceId = 28472U;

                /* During 'V2H_ServDiscvry': '<S33>:2212' */
                if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_ServDetailTmax)
                {
                    /* Transition: '<S33>:2219' */
                    /* Transition: '<S33>:2220' */
                    /* Transition: '<S33>:2222' */
                    /* Transition: '<S33>:2077' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_NO_ACTIVE_CHILD;
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    (void)Rte_Read_VeIDCR_b_V2X_EVSE_Service_5_Free_Value
                        (&tmpRead_0);
                    (void)Rte_Read_VeIDCR_b_V2X_EVSE_Service_5_V2H_Value
                        (&tmpRead_1);
                    (void)Rte_Read_VeIDCR_b_EVSE_Offered_DC_Extended_Value
                        (&tmpRead_2);
                    if (((((VeDCCR_b_OfferedPaymentEIM) && tmpRead_0) &&
                            tmpRead_1) && tmpRead_2) && (DCCR_ac_B.DC_StateTimer
                         > KeDCCR_t_DC_MinTimeDelay))
                    {
                        /* Transition: '<S33>:2224' */
                        DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                            DCCR_a_IN_V2H_CntrAuthorization;

                        /* Entry 'V2H_CntrAuthorization': '<S33>:2223' */
                        DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_WaitForAuth;
                        DCCR_ac_B.SelectedEnergyTransferType = 4;
                        DCCR_ac_B.V2X_HVCMS_SlctdEnergyTransfType = true;
                    }
                    else
                    {
                        DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                    }
                }
                break;
            }
        }

        /* End of Switch: '<S5>/Switch98' */
    }

    if (guard1)
    {
        /* Transition: '<S33>:2170' */
        /* Transition: '<S33>:2174' */
        /* Transition: '<S33>:2160' */
        /* Transition: '<S33>:2179' */
        /* Transition: '<S33>:2158' */
        /* Transition: '<S33>:2142' */
        /* Transition: '<S33>:2147' */
        /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
           HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
           HVCM_SelectedSecProtocol= boolean(0); */
        DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)DCCR_ac_DW.PnC_abortReason)
            + 80);

        /* Transition: '<S33>:2128' */
        exit_internal_PnC_Init_Isol_Pre();
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }

    /* End of Inport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' */
}

#endif

/* Function for Chart: '<S11>/DC_Charging' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_Protocol_Selection(void)
{
    float32 tmpRead_0;
    TeIDCR_e_TLS_Connection tmpRead_1;
    boolean guard1 = false;
    boolean tmpRead;

    /* Inport: '<Root>/VeIDCR_t_ISO15118_NotificationMaxDelay' */
    /* During 'Protocol_Selection': '<S33>:2049' */
    (void)Rte_Read_VeIDCR_t_ISO15118_NotificationMaxDelay_Value(&tmpRead_0);

    /* Inport: '<Root>/VeIDCR_e_ISO15118_TLS_Status' */
    (void)Rte_Read_VeIDCR_e_ISO15118_TLS_Status_Value(&tmpRead_1);
    guard1 = false;
    if ((VeDCCR_b_EVCC_FailureSts) || (!VeDCCR_b_IDCM_DCCA))
    {
        /* Transition: '<S33>:2159' */
        DCCR_ac_B.NoRetryFlag = true;

        /* Transition: '<S33>:2158' */
        guard1 = true;
    }
    else if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_ISO_TLSconnTmax)
    {
        /* Transition: '<S33>:2176' */
        DCCR_ac_DW.PnC_abortReason = 2U;
        guard1 = true;
    }
    else if ((((uint32)tmpRead_1) == CeIDCR_e_Failure) || ((((uint32)
                VeDCCR_e_EVSENotification) == CeIDCR_e_StopCharging) &&
              (DCCR_ac_B.DC_StateTimer > tmpRead_0)))
    {
        /* Transition: '<S33>:2166' */
        /* {PnC_abortReason=uint8(2);} */
        /* Transition: '<S33>:2167' */
        /* {DCexitReason = int16();} */
        /* Transition: '<S33>:2160' */
        /* Transition: '<S33>:2179' */
        /* Transition: '<S33>:2158' */
        guard1 = true;
    }
    else if ((((uint32)DCCR_ac_B.HVCM_SelectedPaymentOptn) == CeOBCR_e_Contract)
             && (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
    {
        /* Transition: '<S33>:2146' */
        /* Exit Internal 'Protocol_Selection': '<S33>:2049' */
        DCCR_ac_DW.is_Protocol_Selection = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_PnC_Retry;

        /* Entry 'PnC_Retry': '<S33>:2125' */
        DCCR_ac_B.PnCFailure = true;
    }
    else
    {
        switch (DCCR_ac_DW.is_Protocol_Selection)
        {
          case DCCR_ac_IN_PnC_Active:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_TLSconn;

            /* Inport: '<Root>/VeIDCR_b_ISO15118_TLS_Offered' */
            /* During 'PnC_Active': '<S33>:2042' */
            (void)Rte_Read_VeIDCR_b_ISO15118_TLS_Offered_Value(&tmpRead);
            if (((tmpRead && (((uint32)tmpRead_1) ==
                              CeIDCR_e_Conn_Established_TLS)) &&
                    (VeDCCR_b_OfferedPaymentContract)) &&
                    (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:2050' */
                DCCR_ac_DW.is_Protocol_Selection =
                    DCCR_ac_IN_Select_PnC_Protocol;

                /* Entry 'Select_PnC_Protocol': '<S33>:2048' */
                /* DCChrgStat = CeOBCR_e_PnC_SuppAppProt; */
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.HVCM_SelectedAppProtocol = CeOBCR_e_ISO_Gen1;
                DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_Contract;
            }
            else if ((((uint32)tmpRead_1) == CeIDCR_e_Conn_Established_No_TLS) &&
                     (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:2051' */
                DCCR_ac_DW.is_Protocol_Selection =
                    DCCR_ac_IN_Select_EIM_Protocol;

                /* Entry 'Select_EIM_Protocol': '<S33>:2043' */
                /* DCChrgStat = CeOBCR_e_PnC_SuppAppProt; */
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.HVCM_SelectedAppProtocol = CeOBCR_e_ISO_Gen1;
                DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
            }
            else
            {
                /* TLS */
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_PnC_Disabled:
            DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_TLSconn;

            /* During 'PnC_Disabled': '<S33>:2047' */
            if (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay)
            {
                /* Transition: '<S33>:2052' */
                DCCR_ac_DW.is_Protocol_Selection =
                    DCCR_ac_IN_Select_EIM_Protocol;

                /* Entry 'Select_EIM_Protocol': '<S33>:2043' */
                /* DCChrgStat = CeOBCR_e_PnC_SuppAppProt; */
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.HVCM_SelectedAppProtocol = CeOBCR_e_ISO_Gen1;
                DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
            }
            else
            {
                /* No TLS */
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_Select_EIM_Protocol:
            /* Switch: '<S5>/Switch45' incorporates:
             *  Switch: '<S5>/Switch40'
             */
            /* During 'Select_EIM_Protocol': '<S33>:2043' */
            /* Transition: '<S33>:2178' */
            if ((((VeDCCR_b_EVSEsupported_ISO1) && (((sint32)VeDCCR_e_SDP_Sts) ==
                   1)) && (((uint32)VeDCCR_e_TxMsgStat) ==
                           CeIDCR_e_SupprtdAppProtoReq)) &&
                    (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:2168' */
                DCCR_ac_DW.is_Protocol_Selection = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c3_DCCR_ac = DCCR_a_IN_PnC_Init_Isol_Prechrg;

                /* Entry Internal 'PnC_Init_Isol_Prechrg': '<S33>:2060' */
                /* Transition: '<S33>:2075' */
                DCCR_ac_DW.is_PnC_Init_Isol_Prechrg = DCCR_ac_IN_PnC_SuppAppProt;

                /* Entry 'PnC_SuppAppProt': '<S33>:2114' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_SuppAppProt;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.DCChargeInit = true;
            }
            else if ((((!VeDCCR_b_EVSEsupported_ISO1) && (((sint32)
                         VeDCCR_e_SDP_Sts) == 1)) && (((uint32)
                        VeDCCR_e_TxMsgStat) == CeIDCR_e_SupprtdAppProtoReq)) &&
                     (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
            {
                /* Transition: '<S33>:2165' */
                /* Transition: '<S33>:2177' */
                /* Transition: '<S33>:2181' */
                DCCR_ac_B.HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                DCCR_ac_B.HVCM_SelectedSecProtocol = false;
                DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                    DCCR_ac_DW.PnC_abortReason) + 80);
                DCCR_ac_DW.is_Protocol_Selection = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_Initi_isol_prechrg;

                /* Entry Internal 'Initi_isol_prechrg': '<S33>:11' */
                /* Transition: '<S33>:23' */
                DCCR_ac_DW.is_Initi_isol_prechrg = DCCR_ac_IN_InitStat1;

                /* Entry 'InitStat1': '<S33>:22' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit1;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.DCChargeInit = true;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }

            /* End of Switch: '<S5>/Switch45' */
            break;

          default:
            /* During 'Select_PnC_Protocol': '<S33>:2048' */
            if (DCCR_ac_B.PnCRetryFail)
            {
                /* Transition: '<S33>:2053' */
                DCCR_ac_DW.is_Protocol_Selection =
                    DCCR_ac_IN_Select_EIM_Protocol;

                /* Entry 'Select_EIM_Protocol': '<S33>:2043' */
                /* DCChrgStat = CeOBCR_e_PnC_SuppAppProt; */
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.HVCM_SelectedAppProtocol = CeOBCR_e_ISO_Gen1;
                DCCR_ac_B.HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
            }
            else
            {
                DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
            }
            break;
        }
    }

    if (guard1)
    {
        /* Transition: '<S33>:2142' */
        /* Transition: '<S33>:2147' */
        /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
           HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
           HVCM_SelectedSecProtocol= boolean(0); */
        DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)DCCR_ac_DW.PnC_abortReason)
            + 80);

        /* Transition: '<S33>:2128' */
        /* Exit Internal 'Protocol_Selection': '<S33>:2049' */
        DCCR_ac_DW.is_Protocol_Selection = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

        /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
        /* Transition: '<S33>:1547' */
        DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
        DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

        /* Entry 'Shutdownin': '<S33>:1637' */
        DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
        DCCR_ac_B.DC_StateTimer = 0.0F;
    }
}

#endif

/* Function for Chart: '<S11>/DC_GBT' */
#if Rte_SysCon_Variant_DCCR_1

static sint16 DCCR_ac_ShutdownReas_k(void)
{
    sint16 ShtdwnTypeGBT;

    /* Graphical Function 'ShutdownReas': '<S35>:142' */
    /* Transition: '<S35>:144' */
    ShtdwnTypeGBT = 0;
    if (((!VeDCCR_b_HV_BatCntctrOpnRq) || (!VeDCCR_b_HVBat_DC_CntctrOpn)) &&
            (((((DCCR_ac_B.DCexitReason == 58) || (DCCR_ac_B.DCexitReason == 53))
               || (DCCR_ac_B.DCexitReason == 54)) || (DCCR_ac_B.DCexitReason ==
            51)) || (DCCR_ac_B.DCexitReason == 80)))
    {
        /* Transition: '<S35>:147' */
        /* Transition: '<S35>:149' */
        /* Transition: '<S35>:151' */
        /* Transition: '<S35>:153' */
        ShtdwnTypeGBT = 1;

        /* Transition: '<S35>:155' */
    }
    else
    {
        /* Transition: '<S35>:159' */
        /* Transition: '<S35>:156' */
    }

    /* Transition: '<S35>:161' */
    return ShtdwnTypeGBT;
}

#endif

/* Function for Chart: '<S11>/DC_GBT' */
#if Rte_SysCon_Variant_DCCR_1

static void DCCR_ac_GBTCommunication(const TeOBCR_e_ChrgSysStat *UnitDelay5)
{
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;

    /* During 'GBTCommunication': '<S35>:1' */
    guard1 = false;
    guard2 = false;
    guard3 = false;
    if ((!DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_E) &&
            (DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_j))
    {
        /* Transition: '<S35>:90' */
        DCCR_ac_B.DCexitReason = 50;

        /* Transition: '<S35>:95' */
        /* Transition: '<S35>:96' */
        /* Transition: '<S35>:97' */
        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        guard3 = true;
    }
    else if (VeDCCR_b_OBCM_TimeOut)
    {
        /* Transition: '<S35>:77' */
        DCCR_ac_B.DCexitReason = 54;

        /* Transition: '<S35>:99' */
        guard3 = true;
    }
    else if (VeDCCR_b_DC_TimeOut)
    {
        /* Transition: '<S35>:81' */
        DCCR_ac_B.DCexitReason = 53;

        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        guard3 = true;
    }
    else if (((uint32)VeDCCR_e_TxGBTMsgResponse) == CeIDCR_e_CST)
    {
        /* Transition: '<S35>:84' */
        DCCR_ac_B.DCexitReason = 52;

        /* Transition: '<S35>:97' */
        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        guard3 = true;
    }
    else if (((!VeDCCR_b_ChargeReq) && (KeDCCR_b_AllowUIS)) &&
             (DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_j))
    {
        /* Transition: '<S35>:86' */
        DCCR_ac_B.DCexitReason = 51;

        /* Transition: '<S35>:96' */
        /* Transition: '<S35>:97' */
        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        guard3 = true;
    }
    else if (KeDCCR_b_GBTExitSF)
    {
        /* Transition: '<S35>:75' */
        DCCR_ac_B.DCexitReason = 80;
        guard3 = true;
    }
    else if (((uint32)(*UnitDelay5)) == CeOBCR_e_EStop)
    {
        /* Transition: '<S35>:206' */
        DCCR_ac_B.DCexitReason = 55;

        /* Transition: '<S35>:204' */
        /* Transition: '<S35>:95' */
        /* Transition: '<S35>:96' */
        /* Transition: '<S35>:97' */
        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        guard3 = true;
    }
    else
    {
        switch (DCCR_ac_DW.is_GBTCommunication)
        {
          case DCCR_ac_IN_DCGBT_ChrgInit:
            DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTChrgInit;
            DCCR_ac_B.EVReady = false;
            DCCR_ac_B.DCChargeInitialization = true;

            /* During 'DCGBT_ChrgInit': '<S35>:11' */
            if (((((uint32)VeDCCR_e_TxGBTMsgResponse) == CeIDCR_e_CML) &&
                    ((VeDCCR_b_StkOpnChkCmpl) || (!KeDCCR_b_EnblStkOpnChk))) &&
                    (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_DCGBTMinDelay))
            {
                /* Transition: '<S35>:22' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_DCGBT_IsolationCheck;

                /* Entry 'DCGBT_IsolationCheck': '<S35>:12' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTIsoDisable;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
            }
            else if (((!VeDCCR_b_StkOpnChkCmpl) || (KeDCCR_b_EnblStkOpnChk)) &&
                     (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_StkOpnTO))
            {
                /* Transition: '<S35>:48' */
                DCCR_ac_B.DCexitReason = 60;

                /* Transition: '<S35>:63' */
                guard1 = true;
            }
            else if (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_ChrgInitTO)
            {
                /* Transition: '<S35>:49' */
                DCCR_ac_B.DCexitReason = 61;
                guard1 = true;
            }
            else
            {
                DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_DCGBT_ContactorClose:
            DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTDCCntctrCmd;
            DCCR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_Close;

            /* Switch: '<S5>/Switch54' */
            /* During 'DCGBT_ContactorClose': '<S35>:13' */
            if (((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) ==
                    CeBPCR_e_DCCntctrSts_Closed) && (DCCR_ac_B.DCGBTStateTimer >
                  KeDCCR_t_DCGBTMinDelay)) && (KeDCCR_b_GBTEVReadyEnbl))
            {
                /* Transition: '<S35>:34' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_DCGBT_EVReady;

                /* Entry 'DCGBT_EVReady': '<S35>:15' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTEVRdy;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
                DCCR_ac_B.EVReady = true;
            }
            else if (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_DCCntctrTimeOut)
            {
                /* Transition: '<S35>:55' */
                DCCR_ac_B.DCexitReason = 63;

                /* Transition: '<S35>:66' */
                /* Transition: '<S35>:67' */
                /* Transition: '<S35>:68' */
                /* Transition: '<S35>:69' */
                /* Transition: '<S35>:205' */
                /* Transition: '<S35>:204' */
                /* Transition: '<S35>:95' */
                /* Transition: '<S35>:96' */
                /* Transition: '<S35>:97' */
                /* Transition: '<S35>:98' */
                /* Transition: '<S35>:99' */
                /* Transition: '<S35>:100' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

                /* Entry Internal 'GBTShutdown': '<S35>:73' */
                /* Transition: '<S35>:130' */
                DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
                DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

                /* Entry 'Shutdownin': '<S35>:129' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
            }
            else
            {
                DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_DCGBT_EVReady:
            DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTEVRdy;
            DCCR_ac_B.EVReady = true;

            /* During 'DCGBT_EVReady': '<S35>:15' */
            if ((((uint32)VeDCCR_e_TxGBTMsgResponse) ==
                    CeIDCR_e_CRO_Charger_Ready) && (DCCR_ac_B.DCGBTStateTimer >
                    KeDCCR_t_DCGBTMinDelay))
            {
                /* Transition: '<S35>:36' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_DCGBT_RdyToChrg;

                /* Entry 'DCGBT_RdyToChrg': '<S35>:16' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTRdyToChrg;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
                DCCR_ac_B.EVReady = true;
                DCCR_ac_B.GBT_ReadyToCharge = true;
                DCCR_ac_B.GBT_EVCharge_Permitting = true;
            }
            else if ((((uint32)VeDCCR_e_TxGBTMsgResponse) ==
                      CeIDCR_e_CRO_Charger_Ready) && (DCCR_ac_B.DCGBTStateTimer >
                      KeDCCR_t_ChrgrNotReadyTO))
            {
                /* Transition: '<S35>:58' */
                DCCR_ac_B.DCexitReason = 65;
                guard2 = true;
            }
            else if (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_EVRdyTimeOut)
            {
                /* Transition: '<S35>:57' */
                DCCR_ac_B.DCexitReason = 64;

                /* Transition: '<S35>:67' */
                guard2 = true;
            }
            else
            {
                DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
            }
            break;

          case DCCR_ac_IN_DCGBT_IsolationCheck:
            DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTIsoDisable;

            /* Switch: '<S5>/Switch54' incorporates:
             *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
             *  Switch: '<S5>/Switch15'
             */
            /* During 'DCGBT_IsolationCheck': '<S35>:12' */
            /*   */
            if ((((((((((!VeDCCR_b_DC_Isolation_Sts) && (((uint32)
                          VeDCCR_e_HVBat_DC_CntctrStat) !=
                         CeBPCR_e_DCCntctrSts_Faulted)) && (((uint32)
                         DCCR_ac_B.TmpSignalConversionAtVeBPCR_e_H) ==
                        CeHVTR_e_Closed)) &&
                      (!DCCR_ac_B.TmpSignalConversionAtVeHPMR_b_B)) &&
                     (!VeDCCR_b_HV_BatCntctrOpnRq)) &&
                    (!VeDCCR_b_HVBat_DC_CntctrOpn)) &&
                    (!VeDCCR_b_HVBat_DC_CntctrReq)) && (((sint32)
                    VeDCCR_e_BPCM_ChrgStat_In) == 1)) &&
                    (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_DCGBTMinDelay)) &&
                    (KeDCCR_b_GBTDCCntctrEnbl))
            {
                /* Transition: '<S35>:25' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_DCGBT_ContactorClose;

                /* Entry 'DCGBT_ContactorClose': '<S35>:13' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTDCCntctrCmd;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
                DCCR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_Close;
            }
            else if (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_IsolationTimeOut)
            {
                /* Transition: '<S35>:53' */
                DCCR_ac_B.DCexitReason = 62;

                /* Transition: '<S35>:65' */
                /* Transition: '<S35>:66' */
                /* Transition: '<S35>:67' */
                /* Transition: '<S35>:68' */
                /* Transition: '<S35>:69' */
                /* Transition: '<S35>:205' */
                /* Transition: '<S35>:204' */
                /* Transition: '<S35>:95' */
                /* Transition: '<S35>:96' */
                /* Transition: '<S35>:97' */
                /* Transition: '<S35>:98' */
                /* Transition: '<S35>:99' */
                /* Transition: '<S35>:100' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

                /* Entry Internal 'GBTShutdown': '<S35>:73' */
                /* Transition: '<S35>:130' */
                DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
                DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

                /* Entry 'Shutdownin': '<S35>:129' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
            }
            else
            {
                DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
            }
            break;

          default:
            DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTRdyToChrg;
            DCCR_ac_B.EVReady = true;
            DCCR_ac_B.GBT_ReadyToCharge = true;
            DCCR_ac_B.GBT_EVCharge_Permitting = true;

            /* Switch: '<S5>/Switch34' */
            /* During 'DCGBT_RdyToChrg': '<S35>:16' */
            if ((((((uint32)VeDCCR_e_TxGBTMsgResponse) == CeIDCR_e_CCS) &&
                    (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_DCGBTMinDelay)) &&
                    (VeDCCR_b_GBT_EVSEChrgPermitting)) &&
                    (KeDCCR_b_GBTDCCurDmndEnbl))
            {
                /* Transition: '<S35>:37' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_DCGBT_CurrentDemand;

                /* Entry 'DCGBT_CurrentDemand': '<S35>:71' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTCrntDmd;
                DCCR_ac_B.DCGBTChargeTimer = 0.0F;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
            }
            else if (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_RdyToChrgTO)
            {
                /* Transition: '<S35>:61' */
                DCCR_ac_B.DCexitReason = 66;

                /* Transition: '<S35>:69' */
                /* Transition: '<S35>:205' */
                /* Transition: '<S35>:204' */
                /* Transition: '<S35>:95' */
                /* Transition: '<S35>:96' */
                /* Transition: '<S35>:97' */
                /* Transition: '<S35>:98' */
                /* Transition: '<S35>:99' */
                /* Transition: '<S35>:100' */
                DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
                DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

                /* Entry Internal 'GBTShutdown': '<S35>:73' */
                /* Transition: '<S35>:130' */
                DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
                DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

                /* Entry 'Shutdownin': '<S35>:129' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
            }
            else
            {
                DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
            }

            /* End of Switch: '<S5>/Switch34' */
            break;
        }
    }

    if (guard3)
    {
        /* Transition: '<S35>:100' */
        /* Exit Internal 'GBTCommunication': '<S35>:1' */
        DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

        /* Entry Internal 'GBTShutdown': '<S35>:73' */
        /* Transition: '<S35>:130' */
        DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

        /* Entry 'Shutdownin': '<S35>:129' */
        DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
        DCCR_ac_B.DCGBTStateTimer = 0.0F;
    }

    if (guard2)
    {
        /* Transition: '<S35>:68' */
        /* Transition: '<S35>:69' */
        /* Transition: '<S35>:205' */
        /* Transition: '<S35>:204' */
        /* Transition: '<S35>:95' */
        /* Transition: '<S35>:96' */
        /* Transition: '<S35>:97' */
        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        /* Transition: '<S35>:100' */
        DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

        /* Entry Internal 'GBTShutdown': '<S35>:73' */
        /* Transition: '<S35>:130' */
        DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

        /* Entry 'Shutdownin': '<S35>:129' */
        DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
        DCCR_ac_B.DCGBTStateTimer = 0.0F;
    }

    if (guard1)
    {
        /* Transition: '<S35>:64' */
        /* Transition: '<S35>:65' */
        /* Transition: '<S35>:66' */
        /* Transition: '<S35>:67' */
        /* Transition: '<S35>:68' */
        /* Transition: '<S35>:69' */
        /* Transition: '<S35>:205' */
        /* Transition: '<S35>:204' */
        /* Transition: '<S35>:95' */
        /* Transition: '<S35>:96' */
        /* Transition: '<S35>:97' */
        /* Transition: '<S35>:98' */
        /* Transition: '<S35>:99' */
        /* Transition: '<S35>:100' */
        DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_NO_ACTIVE_CHILD;
        DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

        /* Entry Internal 'GBTShutdown': '<S35>:73' */
        /* Transition: '<S35>:130' */
        DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

        /* Entry 'Shutdownin': '<S35>:129' */
        DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
        DCCR_ac_B.DCGBTStateTimer = 0.0F;
    }
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_DCCR_1

FUNC(void, DCCR_CODE) DCCR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChargingStat_BPCM tmpRead;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_RC tmpRead_1;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_TxMsgSt tmpRead_2;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_EVSEIsolSts tmpRead_3;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_EVSEStsCode tmpRead_4;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_OffrdEnrgyTxType tmpRead_5;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_SDP_Sts tmpRead_6;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_SLACSts tmpRead_7;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeBPCR_e_DCCntctrSts tmpRead_b;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 tmpRead_d;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_TxMsgSt tmpRead_f;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TePLTR_e_ShipingMode tmpRead_g;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 tmpRead_h;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_TxGBTMessageResponse tmpRead_j;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_k;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_Charger_FaultStates tmpRead_l;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_m;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean tmpRead_n;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_TLS_Connection tmpRead_o;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_EVSENotification tmpRead_p;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_Plug_and_Charge tmpRead_q;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeBPCR_e_HVDcChargeTypeStat tmpRead_r;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean rtb_TmpSignalConversionAtVeOBCR;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_Switch2_b;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeHVTR;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_Abs;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_Switch_m;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean rtb_TmpSignalConversionAtVeVTHR;

#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 rtb_Switch1_l1;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeBP_m;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeBP_e;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeBPCR;

#endif

#if Rte_SysCon_Variant_DCCR_1

    uint8 rtb_TmpSignalConversionAtVeCITR;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_Switch9;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeBP_g;

#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 rtb_Switch1_ij;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeHV_e;

#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 rtb_Switch1_m;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 rtb_TmpSignalConversionAtVeCCCR;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean rtb_TmpSignalConversionAtVeOB_k;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChargeType rtb_TmpSignalConversionAtVeOB_i;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChrgSysStat rtb_TmpSignalConversionAtVeOB_j;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 Merge6;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 Merge7;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge21;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge22;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge27;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge28;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge30;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge31;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge34;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge39;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge42;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge49;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge50;

#endif

#if Rte_SysCon_Variant_DCCR_1

    float32 Merge51;

#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 Merge46;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge47;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge48;

#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 Merge;

#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 Merge1_f;

#endif

#if Rte_SysCon_Variant_DCCR_1

    sint16 Merge3;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge8;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge11;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge12;

#endif

#if Rte_SysCon_Variant_DCCR_1

    uint16 Merge13;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge15;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean Merge32;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeIDCR_e_OffrdPayOptn Switch91;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCCntctrCmd Merge9;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCChrg_TestSts Merge16;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_CellVoltageStatus Merge23;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChrgCurrStatus Merge24;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_BattTempStatus Merge25;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_BattSOCStatus Merge26;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChrgrInterruptBST Merge37;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DC_ChrgTypeCmd Merge41;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_ChrgSysStat UnitDelay5;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeBPCR_e_DCIsolSts Switch92;

#endif

#if Rte_SysCon_Variant_DCCR_1

    TeOBCR_e_DCChrgStat Merge30_tmp;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_DCCR_1

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_DCCR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeIDCR_e_Response_Code' */
    (void)Rte_Read_VeIDCR_e_Response_Code_Value(&tmpRead_1);

    /* Inport: '<Root>/VeIDCR_K_Service_ID' */
    (void)Rte_Read_VeIDCR_K_Service_ID_Value(&Merge13);

    /* Inport: '<Root>/VeIDCR_b_IDCM_DCCA' */
    (void)Rte_Read_VeIDCR_b_IDCM_DCCA_Value(&Merge11);

    /* Inport: '<Root>/VeIDCR_b_EVSEProcessing' */
    (void)Rte_Read_VeIDCR_b_EVSEProcessing_Value(&Merge12);

    /* Inport: '<Root>/VeIDCR_I_EVSEMaxCurrLmt' */
    (void)Rte_Read_VeIDCR_I_EVSEMaxCurrLmt_Value(&rtb_Switch_m);

    /* Inport: '<Root>/VeIDCR_b_EVSEVoltLmtAchvd' */
    (void)Rte_Read_VeIDCR_b_EVSEVoltLmtAchvd_Value(&Merge15);

    /* Inport: '<Root>/VeIDCR_b_EVSEPwrLmtAchvd' */
    (void)Rte_Read_VeIDCR_b_EVSEPwrLmtAchvd_Value(&Merge21);

    /* Inport: '<Root>/VeIDCR_U_EVSEOutputVolt' */
    (void)Rte_Read_VeIDCR_U_EVSEOutputVolt_Value(&rtb_Abs);

    /* Inport: '<Root>/VeIDCR_I_EVSEOutputCurr' */
    (void)Rte_Read_VeIDCR_I_EVSEOutputCurr_Value(&rtb_Sum1);

    /* Inport: '<Root>/VeIDCR_b_EVSECurrLmtAchvd' */
    (void)Rte_Read_VeIDCR_b_EVSECurrLmtAchvd_Value(&Merge22);

    /* Inport: '<Root>/VeIDCR_b_DC_TimeOut' */
    (void)Rte_Read_VeIDCR_b_DC_TimeOut_Value(&Merge27);

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&Merge28);

    /* Inport: '<Root>/VeSCPR_b_ChargeReq' */
    (void)Rte_Read_VeSCPR_b_ChargeReq_Value(&Merge30);

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value(&rtb_Switch9);

    /* Inport: '<Root>/VeBPCR_e_ChargingStat_BPCM' */
    (void)Rte_Read_VeBPCR_e_ChargingStat_BPCM_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/DCCR_MedTED' */
    /* SignalConversion generated from: '<S1>/VeHPMR_b_BattCntctrOpenPndg' incorporates:
     *  Inport: '<Root>/VeHPMR_b_BattCntctrOpenPndg'
     */
    (void)Rte_Read_VeHPMR_b_BattCntctrOpenPndg_Value
        (&DCCR_ac_B.TmpSignalConversionAtVeHPMR_b_B);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S1>/VeBPCR_T_BatModTmp' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value(&rtb_TmpSignalConversionAtVeBP_e);

    /* SignalConversion generated from: '<S1>/VeIDCR_b_J1772_S2_Status' incorporates:
     *  Inport: '<Root>/VeIDCR_b_J1772_S2_Status'
     */
    (void)Rte_Read_VeIDCR_b_J1772_S2_Status_Value
        (&DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J);

    /* SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&DCCR_ac_B.TmpSignalConversionAtVeBPCR_e_H);

    /* SignalConversion generated from: '<S1>/VeBPCR_U_HV_BatVolt' incorporates:
     *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
     */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value(&rtb_TmpSignalConversionAtVeBP_g);

    /* SignalConversion generated from: '<S1>/VeBPCR_I_HV_BatCurr' incorporates:
     *  Inport: '<Root>/VeBPCR_I_HV_BatCurr'
     */
    (void)Rte_Read_VeBPCR_I_HV_BatCurr_Value(&rtb_TmpSignalConversionAtVeBP_m);

    /* SignalConversion generated from: '<S1>/VeCCCR_I_ChrgCrntReqDelta' incorporates:
     *  Inport: '<Root>/VeCCCR_I_ChrgCrntReqDelta'
     */
    (void)Rte_Read_VeCCCR_I_ChrgCrntReqDelta_Value
        (&rtb_TmpSignalConversionAtVeCCCR);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_PluggedIn' incorporates:
     *  Inport: '<Root>/VeOBCR_b_PluggedIn'
     */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S1>/VeCITR_Cnt_DCEOL_SgnlRcvd' incorporates:
     *  Inport: '<Root>/VeCITR_Cnt_DCEOL_SgnlRcvd'
     */
    (void)Rte_Read_VeCITR_Cnt_DCEOL_SgnlRcvd_Value
        (&rtb_TmpSignalConversionAtVeCITR);

    /* SignalConversion generated from: '<S1>/VeHVTR_U_HvBattVolt_Arb' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HvBattVolt_Arb'
     */
    (void)Rte_Read_VeHVTR_U_HvBattVolt_Arb_Value
        (&rtb_TmpSignalConversionAtVeHVTR);

    /* SignalConversion generated from: '<S1>/VeHVTR_I_StringsCurrFdbk' incorporates:
     *  Inport: '<Root>/VeHVTR_I_StringsCurrFdbk'
     */
    (void)Rte_Read_VeHVTR_I_StringsCurrFdbk_Value
        (&rtb_TmpSignalConversionAtVeHV_e);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnableChargeDC' incorporates:
     *  Inport: '<Root>/VeOBCR_b_EnableChargeDC'
     */
    (void)Rte_Read_VeOBCR_b_EnableChargeDC_Value
        (&DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_E);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF'
     */
    (void)Rte_Read_VeOBCR_e_ChrgSysStat_SF_Value
        (&rtb_TmpSignalConversionAtVeOB_j);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_ChargingComplete' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ChargingComplete'
     */
    (void)Rte_Read_VeOBCR_b_ChargingComplete_Value
        (&rtb_TmpSignalConversionAtVeOB_k);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargeType' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargeType'
     */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value(&rtb_TmpSignalConversionAtVeOB_i);

    /* SignalConversion generated from: '<S1>/VeOBCR_b_EnblDC_GBT' incorporates:
     *  Inport: '<Root>/VeOBCR_b_EnblDC_GBT'
     */
    (void)Rte_Read_VeOBCR_b_EnblDC_GBT_Value
        (&DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_j);

    /* SignalConversion generated from: '<S1>/VeVTHR_b_V2H_Detected' incorporates:
     *  Inport: '<Root>/VeVTHR_b_V2H_Detected'
     */
    (void)Rte_Read_VeVTHR_b_V2H_Detected_Value(&rtb_TmpSignalConversionAtVeVTHR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DCCI'
     */
    /* Switch: '<S5>/Switch15' incorporates:
     *  Constant: '<S299>/Calib'
     */
    if (KeDCCR_b_BPCM_ChrgStatOvrd)
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Constant: '<S373>/Calib'
         */
        VeDCCR_e_BPCM_ChrgStat_In = KeDCCR_e_BPCM_ChrgStatVal;
    }
    else
    {
        /* Switch: '<S5>/Switch15' incorporates:
         *  Inport: '<Root>/VeBPCR_e_ChargingStat_BPCM'
         */
        VeDCCR_e_BPCM_ChrgStat_In = tmpRead;
    }

    /* End of Switch: '<S5>/Switch15' */

    /* Outputs for Atomic SubSystem: '<S5>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S291>/Switch2' incorporates:
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_Switch2_b = DCCR_ac_DW.UnitDelay_DSTATE_m;

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S391>/Calib'
     *  Product: '<S291>/Multiplication'
     *  Sum: '<S291>/Subtraction'
     *  Sum: '<S291>/Summation'
     */
    VeDCCR_U_HV_BatVoltModMaxArbFil = ((rtb_Switch9 - rtb_Switch2_b) *
        KeDCCR_k_LPF_MaxCellVoltCoef) + rtb_Switch2_b;

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    DCCR_ac_DW.UnitDelay_DSTATE_m = VeDCCR_U_HV_BatVoltModMaxArbFil;

    /* End of Outputs for SubSystem: '<S5>/Digital Lowpass Reset Enabled' */

    /* Switch: '<S5>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     */
    if (KeDCCR_b_ChargeReqOvrd)
    {
        /* Switch: '<S5>/Switch1' incorporates:
         *  Constant: '<S301>/Calib'
         */
        VeDCCR_b_ChargeReq = KeDCCR_b_ChargeReqOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch1' */
        VeDCCR_b_ChargeReq = Merge30;
    }

    /* End of Switch: '<S5>/Switch1' */

    /* Switch: '<S5>/Switch12' incorporates:
     *  Constant: '<S343>/Calib'
     */
    if (KeDCCR_b_InFieldMdOvrd)
    {
        /* Switch: '<S5>/Switch12' incorporates:
         *  Constant: '<S344>/Calib'
         */
        VeDCCR_b_InFieldMode = KeDCCR_b_InFieldMdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch12' */
        VeDCCR_b_InFieldMode = Merge28;
    }

    /* End of Switch: '<S5>/Switch12' */

    /* Switch: '<S5>/Switch21' incorporates:
     *  Constant: '<S368>/Calib'
     */
    if (KeDCCR_b_TimeOutOvrd)
    {
        /* Switch: '<S5>/Switch21' incorporates:
         *  Constant: '<S369>/Calib'
         */
        VeDCCR_b_DC_TimeOut = KeDCCR_b_TimeOutOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch21' */
        VeDCCR_b_DC_TimeOut = Merge27;
    }

    /* End of Switch: '<S5>/Switch21' */

    /* Switch: '<S5>/Switch22' incorporates:
     *  Constant: '<S309>/Calib'
     */
    if (KeDCCR_b_EVSECurrLmtAchvdOvrd)
    {
        /* Switch: '<S5>/Switch22' incorporates:
         *  Constant: '<S310>/Calib'
         */
        VeDCCR_b_EVSECurrLmtAchvd = KeDCCR_b_EVSECurrLmtAchvdOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch22' */
        VeDCCR_b_EVSECurrLmtAchvd = Merge22;
    }

    /* End of Switch: '<S5>/Switch22' */

    /* Switch: '<S5>/Switch23' incorporates:
     *  Constant: '<S314>/Calib'
     */
    if (KeDCCR_b_EVSEOutputCurrOvrd)
    {
        /* Switch: '<S5>/Switch23' incorporates:
         *  Constant: '<S293>/Calib'
         */
        VeDCCR_I_EVSEOutputCurr = KeDCCR_I_EVSEOutputCurrOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch23' */
        VeDCCR_I_EVSEOutputCurr = rtb_Sum1;
    }

    /* End of Switch: '<S5>/Switch23' */

    /* Switch: '<S5>/Switch24' incorporates:
     *  Constant: '<S315>/Calib'
     */
    if (KeDCCR_b_EVSEOutputVoltOvrd)
    {
        /* Switch: '<S5>/Switch24' incorporates:
         *  Constant: '<S298>/Calib'
         */
        VeDCCR_U_EVSEOutputVolt = KeDCCR_U_EVSEOutputVoltOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch24' */
        VeDCCR_U_EVSEOutputVolt = rtb_Abs;
    }

    /* End of Switch: '<S5>/Switch24' */

    /* Switch: '<S5>/Switch25' incorporates:
     *  Constant: '<S318>/Calib'
     */
    if (KeDCCR_b_EVSEPwrLmtAchvdOvrd)
    {
        /* Switch: '<S5>/Switch25' incorporates:
         *  Constant: '<S319>/Calib'
         */
        VeDCCR_b_EVSEPwrLmtAchvd = KeDCCR_b_EVSEPwrLmtAchvdOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch25' */
        VeDCCR_b_EVSEPwrLmtAchvd = Merge21;
    }

    /* End of Switch: '<S5>/Switch25' */

    /* Switch: '<S5>/Switch26' incorporates:
     *  Constant: '<S321>/Calib'
     */
    if (KeDCCR_b_EVSEVoltLmtAchvdOvrd)
    {
        /* Switch: '<S5>/Switch26' incorporates:
         *  Constant: '<S322>/Calib'
         */
        VeDCCR_b_EVSEVoltLmtAchvd = KeDCCR_b_EVSEVoltLmtAchvdOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch26' */
        VeDCCR_b_EVSEVoltLmtAchvd = Merge15;
    }

    /* End of Switch: '<S5>/Switch26' */

    /* Switch: '<S5>/Switch31' incorporates:
     *  Constant: '<S312>/Calib'
     */
    if (KeDCCR_b_EVSEMaxCurrLmtOvrd)
    {
        /* Switch: '<S5>/Switch31' incorporates:
         *  Constant: '<S292>/Calib'
         */
        VeDCCR_I_EVSEMaxCurrLmt = KeDCCR_I_EVSEMaxCurrLmtOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch31' */
        VeDCCR_I_EVSEMaxCurrLmt = rtb_Switch_m;
    }

    /* End of Switch: '<S5>/Switch31' */

    /* Switch: '<S5>/Switch36' incorporates:
     *  Constant: '<S316>/Calib'
     */
    if (KeDCCR_b_EVSEProcessingOvrd)
    {
        /* Switch: '<S5>/Switch36' incorporates:
         *  Constant: '<S317>/Calib'
         */
        VeDCCR_b_EVSEProcessing = KeDCCR_b_EVSEProcessingOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch36' */
        VeDCCR_b_EVSEProcessing = Merge12;
    }

    /* End of Switch: '<S5>/Switch36' */

    /* Switch: '<S5>/Switch37' incorporates:
     *  Constant: '<S341>/Calib'
     */
    if (KeDCCR_b_IDCM_DCCAOvrd)
    {
        /* Switch: '<S5>/Switch37' incorporates:
         *  Constant: '<S342>/Calib'
         */
        VeDCCR_b_IDCM_DCCA = KeDCCR_b_IDCM_DCCAOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch37' */
        VeDCCR_b_IDCM_DCCA = Merge11;
    }

    /* End of Switch: '<S5>/Switch37' */

    /* Switch: '<S5>/Switch38' incorporates:
     *  Constant: '<S359>/Calib'
     */
    if (KeDCCR_b_Service_IDOvrd)
    {
        /* Switch: '<S5>/Switch38' incorporates:
         *  Constant: '<S295>/Calib'
         */
        VeDCCR_K_Service_ID = KeDCCR_K_Service_IDOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch38' */
        VeDCCR_K_Service_ID = Merge13;
    }

    /* End of Switch: '<S5>/Switch38' */

    /* Switch: '<S5>/Switch39' incorporates:
     *  Constant: '<S354>/Calib'
     */
    if (KeDCCR_b_Resp_CodeOvrd)
    {
        /* Switch: '<S5>/Switch39' incorporates:
         *  Constant: '<S384>/Calib'
         */
        VeDCCR_e_Resp_Code = KeDCCR_e_Resp_CodeOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch39' incorporates:
         *  Inport: '<Root>/VeIDCR_e_Response_Code'
         */
        VeDCCR_e_Resp_Code = tmpRead_1;
    }

    /* End of Switch: '<S5>/Switch39' */

    /* Switch: '<S5>/Switch40' incorporates:
     *  Constant: '<S372>/Calib'
     *  Inport: '<Root>/VeIDCR_e_TxMsgRequest'
     *  Inport: '<Root>/VeIDCR_e_TxMsgResponse'
     */
    if (KeDCCR_b_TxMsgStatOvrd)
    {
        /* Switch: '<S5>/Switch40' incorporates:
         *  Constant: '<S390>/Calib'
         */
        VeDCCR_e_TxMsgStat = KeDCCR_e_TxMsgStatOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeIDCR_e_TxMsgResponse_Value(&tmpRead_f);
        (void)Rte_Read_VeIDCR_e_TxMsgRequest_Value(&tmpRead_2);

        /* Switch: '<S5>/Switch82' incorporates:
         *  Constant: '<S371>/Calib'
         *  Inport: '<Root>/VeIDCR_e_TxMsgRequest'
         *  Inport: '<Root>/VeIDCR_e_TxMsgResponse'
         */
        if (KeDCCR_b_TxMsgSelector)
        {
            /* Switch: '<S5>/Switch40' incorporates:
             *  Inport: '<Root>/VeIDCR_e_TxMsgRequest'
             */
            VeDCCR_e_TxMsgStat = tmpRead_2;
        }
        else
        {
            /* Switch: '<S5>/Switch40' incorporates:
             *  Inport: '<Root>/VeIDCR_e_TxMsgResponse'
             */
            VeDCCR_e_TxMsgStat = tmpRead_f;
        }

        /* End of Switch: '<S5>/Switch82' */
    }

    /* End of Switch: '<S5>/Switch40' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/DCCR_MedTED' */

    /* Inport: '<Root>/VeBPCR_e_HVDcChargeTypeStat' */
    (void)Rte_Read_VeBPCR_e_HVDcChargeTypeStat_Value(&tmpRead_r);

    /* Inport: '<Root>/VeIDCR_b_EVSEsupported_ISO1' */
    (void)Rte_Read_VeIDCR_b_EVSEsupported_ISO1_Value(&Merge31);

    /* Inport: '<Root>/VeIDCR_e_PROXY_Plug_and_Charge' */
    (void)Rte_Read_VeIDCR_e_PROXY_Plug_and_Charge_Value(&tmpRead_q);

    /* Inport: '<Root>/VeIDCR_b_OfferedPaymentEIM' */
    (void)Rte_Read_VeIDCR_b_OfferedPaymentEIM_Value(&Merge32);

    /* Inport: '<Root>/VeIDCR_b_Service2_Certificate' */
    (void)Rte_Read_VeIDCR_b_Service2_Certificate_Value(&Merge39);

    /* Inport: '<Root>/VeIDCR_b_OfferedPaymentContract' */
    (void)Rte_Read_VeIDCR_b_OfferedPaymentContract_Value(&Merge42);

    /* Inport: '<Root>/VeIDCR_e_EVSENotification' */
    (void)Rte_Read_VeIDCR_e_EVSENotification_Value(&tmpRead_p);

    /* Inport: '<Root>/VeIDCR_b_EVSEsupported_DIN' */
    (void)Rte_Read_VeIDCR_b_EVSEsupported_DIN_Value(&Merge47);

    /* Inport: '<Root>/VeIDCR_e_TLS_Connection' */
    (void)Rte_Read_VeIDCR_e_TLS_Connection_Value(&tmpRead_o);

    /* Inport: '<Root>/VeIDCR_b_TLS_Offered' */
    (void)Rte_Read_VeIDCR_b_TLS_Offered_Value(&Merge48);

    /* Inport: '<Root>/VeIDCR_b_EVCC_FailureSts' */
    (void)Rte_Read_VeIDCR_b_EVCC_FailureSts_Value(&Merge49);

    /* Inport: '<Root>/VeBPCR_e_DCIsolSts' */
    (void)Rte_Read_VeBPCR_e_DCIsolSts_Value(&Switch92);

    /* Inport: '<Root>/VeIDCR_b_EVSE_FreeService' */
    (void)Rte_Read_VeIDCR_b_EVSE_FreeService_Value(&Merge50);

    /* Inport: '<Root>/VeIDCR_e_OffrdPayOptn' */
    (void)Rte_Read_VeIDCR_e_OffrdPayOptn_Value(&Switch91);

    /* Inport: '<Root>/VeIDCR_b_GBT_EVSEChrgPermitting' */
    (void)Rte_Read_VeIDCR_b_GBT_EVSEChrgPermitting_Value(&tmpRead_n);

    /* Inport: '<Root>/VeBPCR_b_StkOpnChkCmpl' */
    (void)Rte_Read_VeBPCR_b_StkOpnChkCmpl_Value(&tmpRead_m);

    /* Inport: '<Root>/VeIDCR_e_Chrgr_FaultStates' */
    (void)Rte_Read_VeIDCR_e_Chrgr_FaultStates_Value(&tmpRead_l);

    /* Inport: '<Root>/VeIDCR_b_OBCM_TimeOut' */
    (void)Rte_Read_VeIDCR_b_OBCM_TimeOut_Value(&tmpRead_k);

    /* Inport: '<Root>/VeIDCR_e_TxGBTMsgResponse' */
    (void)Rte_Read_VeIDCR_e_TxGBTMsgResponse_Value(&tmpRead_j);

    /* Inport: '<Root>/VeBPCR_Pct_HVBatSOH' */
    (void)Rte_Read_VeBPCR_Pct_HVBatSOH_Value(&tmpRead_i);

    /* Inport: '<Root>/VeIDCR_U_EVSEMaxVoltLmt' */
    (void)Rte_Read_VeIDCR_U_EVSEMaxVoltLmt_Value(&tmpRead_h);

    /* Inport: '<Root>/VePLTR_e_ShippingMode' */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value(&tmpRead_g);

    /* Inport: '<Root>/VeIDCR_b_TCPCommTerminated' */
    (void)Rte_Read_VeIDCR_b_TCPCommTerminated_Value(&tmpRead_e);

    /* Inport: '<Root>/VeHVTR_I_HV_AccCurr' */
    (void)Rte_Read_VeHVTR_I_HV_AccCurr_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value(&tmpRead_c);

    /* Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat' */
    (void)Rte_Read_VeBPCR_e_HVBat_DC_CntctrStat_Value(&tmpRead_b);

    /* Inport: '<Root>/VeBPCR_b_DC_Isolation_Sts' */
    (void)Rte_Read_VeBPCR_b_DC_Isolation_Sts_Value(&tmpRead_a);

    /* Inport: '<Root>/VeBPCR_b_HVBat_DC_CntctrReq' */
    (void)Rte_Read_VeBPCR_b_HVBat_DC_CntctrReq_Value(&tmpRead_9);

    /* Inport: '<Root>/VeBPCR_b_HVBat_DC_CntctrOpn' */
    (void)Rte_Read_VeBPCR_b_HVBat_DC_CntctrOpn_Value(&tmpRead_8);

    /* Inport: '<Root>/VeIDCR_e_SLACSts' */
    (void)Rte_Read_VeIDCR_e_SLACSts_Value(&tmpRead_7);

    /* Inport: '<Root>/VeIDCR_e_SDP_Sts' */
    (void)Rte_Read_VeIDCR_e_SDP_Sts_Value(&tmpRead_6);

    /* Inport: '<Root>/VeIDCR_e_OffrdEnrgyTxType' */
    (void)Rte_Read_VeIDCR_e_OffrdEnrgyTxType_Value(&tmpRead_5);

    /* Inport: '<Root>/VeIDCR_e_EVSEStsCode' */
    (void)Rte_Read_VeIDCR_e_EVSEStsCode_Value(&tmpRead_4);

    /* Inport: '<Root>/VeIDCR_e_EVSEIsolSts' */
    (void)Rte_Read_VeIDCR_e_EVSEIsolSts_Value(&tmpRead_3);

    /* Outputs for Function Call SubSystem: '<Root>/DCCR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DCCI'
     */
    /* Switch: '<S5>/Switch41' incorporates:
     *  Constant: '<S311>/Calib'
     */
    if (KeDCCR_b_EVSEIsolStsOvrd)
    {
        /* Switch: '<S5>/Switch41' incorporates:
         *  Constant: '<S377>/Calib'
         */
        VeDCCR_e_EVSEIsolSts = KeDCCR_e_EVSEIsolStsOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch41' incorporates:
         *  Inport: '<Root>/VeIDCR_e_EVSEIsolSts'
         */
        VeDCCR_e_EVSEIsolSts = tmpRead_3;
    }

    /* End of Switch: '<S5>/Switch41' */

    /* Switch: '<S5>/Switch42' incorporates:
     *  Constant: '<S320>/Calib'
     */
    if (KeDCCR_b_EVSEStsCodeOvrd)
    {
        /* Switch: '<S5>/Switch42' incorporates:
         *  Constant: '<S378>/Calib'
         */
        VeDCCR_e_EVSEStsCode = KeDCCR_e_EVSEStsCodeOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch42' incorporates:
         *  Inport: '<Root>/VeIDCR_e_EVSEStsCode'
         */
        VeDCCR_e_EVSEStsCode = tmpRead_4;
    }

    /* End of Switch: '<S5>/Switch42' */

    /* Switch: '<S5>/Switch43' incorporates:
     *  Constant: '<S351>/Calib'
     */
    if (KeDCCR_b_OffrdEnrgyTxTypeOvrd)
    {
        /* Switch: '<S5>/Switch43' incorporates:
         *  Constant: '<S381>/Calib'
         */
        VeDCCR_e_OffrdEnrgyTxType = KeDCCR_e_OffrdEnrgyTxTypeOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch43' incorporates:
         *  Inport: '<Root>/VeIDCR_e_OffrdEnrgyTxType'
         */
        VeDCCR_e_OffrdEnrgyTxType = tmpRead_5;
    }

    /* End of Switch: '<S5>/Switch43' */

    /* Switch: '<S5>/Switch45' incorporates:
     *  Constant: '<S355>/Calib'
     */
    if (KeDCCR_b_SDP_StsOvrd)
    {
        /* Switch: '<S5>/Switch45' incorporates:
         *  Constant: '<S385>/Calib'
         */
        VeDCCR_e_SDP_Sts = KeDCCR_e_SDP_StsOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch45' incorporates:
         *  Inport: '<Root>/VeIDCR_e_SDP_Sts'
         */
        VeDCCR_e_SDP_Sts = tmpRead_6;
    }

    /* End of Switch: '<S5>/Switch45' */

    /* Switch: '<S5>/Switch46' incorporates:
     *  Constant: '<S356>/Calib'
     */
    if (KeDCCR_b_SLACStsOvrd)
    {
        /* Switch: '<S5>/Switch46' incorporates:
         *  Constant: '<S386>/Calib'
         */
        VeDCCR_e_SLACSts = KeDCCR_e_SLACStsOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch46' incorporates:
         *  Inport: '<Root>/VeIDCR_e_SLACSts'
         */
        VeDCCR_e_SLACSts = tmpRead_7;
    }

    /* End of Switch: '<S5>/Switch46' */

    /* Switch: '<S5>/Switch51' incorporates:
     *  Constant: '<S333>/Calib'
     */
    if (KeDCCR_b_HVBat_DC_CntctrOpnOvrd)
    {
        /* Switch: '<S5>/Switch51' incorporates:
         *  Constant: '<S334>/Calib'
         */
        VeDCCR_b_HVBat_DC_CntctrOpn = KeDCCR_b_HVBat_DC_CntctrOpnOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch51' */
        VeDCCR_b_HVBat_DC_CntctrOpn = tmpRead_8;
    }

    /* End of Switch: '<S5>/Switch51' */

    /* Switch: '<S5>/Switch52' incorporates:
     *  Constant: '<S335>/Calib'
     */
    if (KeDCCR_b_HVBat_DC_CntctrReqOvrd)
    {
        /* Switch: '<S5>/Switch52' incorporates:
         *  Constant: '<S336>/Calib'
         */
        VeDCCR_b_HVBat_DC_CntctrReq = KeDCCR_b_HVBat_DC_CntctrReqOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch52' */
        VeDCCR_b_HVBat_DC_CntctrReq = tmpRead_9;
    }

    /* End of Switch: '<S5>/Switch52' */

    /* Switch: '<S5>/Switch53' incorporates:
     *  Constant: '<S304>/Calib'
     */
    if (KeDCCR_b_DC_Isolation_StsOvrd)
    {
        /* Switch: '<S5>/Switch53' incorporates:
         *  Constant: '<S305>/Calib'
         */
        VeDCCR_b_DC_Isolation_Sts = KeDCCR_b_DC_Isolation_StsOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch53' */
        VeDCCR_b_DC_Isolation_Sts = tmpRead_a;
    }

    /* End of Switch: '<S5>/Switch53' */

    /* Switch: '<S5>/Switch54' incorporates:
     *  Constant: '<S337>/Calib'
     */
    if (KeDCCR_b_HVBat_DC_CntctrStatOvrd)
    {
        /* Switch: '<S5>/Switch54' incorporates:
         *  Constant: '<S380>/Calib'
         */
        VeDCCR_e_HVBat_DC_CntctrStat = KeDCCR_e_HVBat_DC_CntctrStatOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch54' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HVBat_DC_CntctrStat'
         */
        VeDCCR_e_HVBat_DC_CntctrStat = tmpRead_b;
    }

    /* End of Switch: '<S5>/Switch54' */

    /* Switch: '<S5>/Switch55' incorporates:
     *  Constant: '<S339>/Calib'
     */
    if (KeDCCR_b_HV_BatCntctrOpnRqOvrd)
    {
        /* Switch: '<S5>/Switch55' incorporates:
         *  Constant: '<S340>/Calib'
         */
        VeDCCR_b_HV_BatCntctrOpnRq = KeDCCR_b_HV_BatCntctrOpnRqOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch55' */
        VeDCCR_b_HV_BatCntctrOpnRq = tmpRead_c;
    }

    /* End of Switch: '<S5>/Switch55' */

    /* Switch: '<S5>/Switch60' incorporates:
     *  Constant: '<S338>/Calib'
     */
    if (KeDCCR_b_HV_AccCurrOvrd)
    {
        /* Switch: '<S5>/Switch60' incorporates:
         *  Constant: '<S294>/Calib'
         */
        VeDCCR_I_HV_AccCurr = KeDCCR_I_HV_AccCurrOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch60' */
        VeDCCR_I_HV_AccCurr = tmpRead_d;
    }

    /* End of Switch: '<S5>/Switch60' */

    /* Switch: '<S5>/Switch76' incorporates:
     *  Constant: '<S363>/Calib'
     */
    if (KeDCCR_b_TCPCommTerminatedOvrd)
    {
        /* Switch: '<S5>/Switch76' incorporates:
         *  Constant: '<S364>/Calib'
         */
        VeDCCR_b_TCPCommTerminated = KeDCCR_b_TCPCommTerminatedVal;
    }
    else
    {
        /* Switch: '<S5>/Switch76' */
        VeDCCR_b_TCPCommTerminated = tmpRead_e;
    }

    /* End of Switch: '<S5>/Switch76' */

    /* Switch: '<S5>/Switch89' incorporates:
     *  Constant: '<S360>/Calib'
     */
    if (KeDCCR_b_ShipMdOvrd)
    {
        /* Switch: '<S5>/Switch89' incorporates:
         *  Constant: '<S387>/Calib'
         */
        VeDCCR_e_ShipMd = KeDCCR_e_ShipMdOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch89' incorporates:
         *  Inport: '<Root>/VePLTR_e_ShippingMode'
         */
        VeDCCR_e_ShipMd = tmpRead_g;
    }

    /* End of Switch: '<S5>/Switch89' */

    /* Switch: '<S5>/Switch' incorporates:
     *  Constant: '<S313>/Calib'
     */
    if (KeDCCR_b_EVSEMaxVoltLmtOvrdVal)
    {
        /* Switch: '<S5>/Switch' incorporates:
         *  Constant: '<S297>/Calib'
         */
        VeDCCR_U_EVSEMaxVoltLmt = KeDCCR_U_EVSEMaxVoltLmtOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch' */
        VeDCCR_U_EVSEMaxVoltLmt = tmpRead_h;
    }

    /* End of Switch: '<S5>/Switch' */

    /* Switch: '<S5>/Switch85' incorporates:
     *  Constant: '<S332>/Calib'
     */
    if (KeDCCR_b_HVBatSOHOvrd)
    {
        /* Switch: '<S5>/Switch85' incorporates:
         *  Constant: '<S296>/Calib'
         */
        VeDCCR_Pct_HVBatSOH = KeDCCR_Pct_HVBatSOHOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch85' */
        VeDCCR_Pct_HVBatSOH = tmpRead_i;
    }

    /* End of Switch: '<S5>/Switch85' */

    /* Switch: '<S5>/Switch34' incorporates:
     *  Constant: '<S370>/Calib'
     */
    if (KeDCCR_b_TxGBTMsgResponse)
    {
        /* Switch: '<S5>/Switch34' incorporates:
         *  Constant: '<S389>/Calib'
         */
        VeDCCR_e_TxGBTMsgResponse = KeDCCR_e_TxGBTMsgResponse;
    }
    else
    {
        /* Switch: '<S5>/Switch34' incorporates:
         *  Inport: '<Root>/VeIDCR_e_TxGBTMsgResponse'
         */
        VeDCCR_e_TxGBTMsgResponse = tmpRead_j;
    }

    /* End of Switch: '<S5>/Switch34' */

    /* Switch: '<S5>/Switch44' incorporates:
     *  Constant: '<S345>/Calib'
     */
    if (KeDCCR_b_OBCM_TimeOut)
    {
        /* Switch: '<S5>/Switch44' incorporates:
         *  Constant: '<S346>/Calib'
         */
        VeDCCR_b_OBCM_TimeOut = KeDCCR_b_OBCM_TimeOutVal;
    }
    else
    {
        /* Switch: '<S5>/Switch44' */
        VeDCCR_b_OBCM_TimeOut = tmpRead_k;
    }

    /* End of Switch: '<S5>/Switch44' */

    /* Switch: '<S5>/Switch47' incorporates:
     *  Constant: '<S302>/Calib'
     */
    if (KeDCCR_b_Chrgr_FaultStates)
    {
        /* Switch: '<S5>/Switch47' incorporates:
         *  Constant: '<S374>/Calib'
         */
        VeDCCR_e_Chrgr_FaultStates = KeDCCR_e_Chrgr_FaultStates;
    }
    else
    {
        /* Switch: '<S5>/Switch47' incorporates:
         *  Inport: '<Root>/VeIDCR_e_Chrgr_FaultStates'
         */
        VeDCCR_e_Chrgr_FaultStates = tmpRead_l;
    }

    /* End of Switch: '<S5>/Switch47' */

    /* Switch: '<S5>/Switch48' incorporates:
     *  Constant: '<S361>/Calib'
     */
    if (KeDCCR_b_StkOpnChkCmpl)
    {
        /* Switch: '<S5>/Switch48' incorporates:
         *  Constant: '<S362>/Calib'
         */
        VeDCCR_b_StkOpnChkCmpl = KeDCCR_b_StkOpnChkCmplVal;
    }
    else
    {
        /* Switch: '<S5>/Switch48' */
        VeDCCR_b_StkOpnChkCmpl = tmpRead_m;
    }

    /* End of Switch: '<S5>/Switch48' */

    /* Switch: '<S5>/Switch49' incorporates:
     *  Constant: '<S330>/Calib'
     */
    if (KeDCCR_b_GBT_EVSEChrgPermittingOvrd)
    {
        /* Switch: '<S5>/Switch49' incorporates:
         *  Constant: '<S331>/Calib'
         */
        VeDCCR_b_GBT_EVSEChrgPermitting = KeDCCR_b_GBT_EVSEChrgPermittingVal;
    }
    else
    {
        /* Switch: '<S5>/Switch49' */
        VeDCCR_b_GBT_EVSEChrgPermitting = tmpRead_n;
    }

    /* End of Switch: '<S5>/Switch49' */

    /* Switch: '<S5>/Switch91' incorporates:
     *  Constant: '<S352>/Calib'
     */
    if (KeDCCR_b_OffrdPaymOptionOvrd)
    {
        /* Switch: '<S5>/Switch91' incorporates:
         *  Constant: '<S382>/Calib'
         */
        Switch91 = KeDCCR_e_OffrdPaymOptionVal;
    }

    /* End of Switch: '<S5>/Switch91' */

    /* Switch: '<S5>/Switch92' incorporates:
     *  Constant: '<S303>/Calib'
     */
    if (KeDCCR_b_DCIsolStsOvrd)
    {
        /* Switch: '<S5>/Switch92' incorporates:
         *  Constant: '<S375>/Calib'
         */
        Switch92 = KeDCCR_e_DCIsolStsVal;
    }

    /* End of Switch: '<S5>/Switch92' */

    /* Switch: '<S5>/Switch94' incorporates:
     *  Constant: '<S307>/Calib'
     */
    if (KeDCCR_b_EVCCFailStsOvrd)
    {
        /* Switch: '<S5>/Switch94' incorporates:
         *  Constant: '<S308>/Calib'
         */
        VeDCCR_b_EVCC_FailureSts = KeDCCR_b_EVCCFailStsOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch94' */
        VeDCCR_b_EVCC_FailureSts = Merge49;
    }

    /* End of Switch: '<S5>/Switch94' */

    /* Switch: '<S5>/Switch95' incorporates:
     *  Constant: '<S366>/Calib'
     */
    if (KeDCCR_b_TLSofferedOvrd)
    {
        /* Switch: '<S5>/Switch95' incorporates:
         *  Constant: '<S367>/Calib'
         */
        VeDCCR_b_TLS_Offered = KeDCCR_b_TLSofferedOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch95' */
        VeDCCR_b_TLS_Offered = Merge48;
    }

    /* End of Switch: '<S5>/Switch95' */

    /* Switch: '<S5>/Switch96' incorporates:
     *  Constant: '<S365>/Calib'
     */
    if (KeDCCR_b_TLSconnectionOvrd)
    {
        /* Switch: '<S5>/Switch96' incorporates:
         *  Constant: '<S388>/Calib'
         */
        VeDCCR_b_TLS_Connection = KeDCCR_e_TLSconnectionOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch96' incorporates:
         *  Inport: '<Root>/VeIDCR_e_TLS_Connection'
         */
        VeDCCR_b_TLS_Connection = tmpRead_o;
    }

    /* End of Switch: '<S5>/Switch96' */

    /* Switch: '<S5>/Switch97' incorporates:
     *  Constant: '<S326>/Calib'
     */
    if (KeDCCR_b_EVSEsupportsDINovrd)
    {
        /* Switch: '<S5>/Switch97' incorporates:
         *  Constant: '<S327>/Calib'
         */
        VeDCCR_b_EVSEsupported_DIN = KeDCCR_b_EVSEsupportsDINovrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch97' */
        VeDCCR_b_EVSEsupported_DIN = Merge47;
    }

    /* End of Switch: '<S5>/Switch97' */

    /* Switch: '<S5>/Switch98' incorporates:
     *  Constant: '<S325>/Calib'
     */
    if (KeDCCR_b_EVSEnotificOvrd)
    {
        /* Switch: '<S5>/Switch98' incorporates:
         *  Constant: '<S379>/Calib'
         */
        VeDCCR_e_EVSENotification = KeDCCR_e_EVSEnotificOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch98' incorporates:
         *  Inport: '<Root>/VeIDCR_e_EVSENotification'
         */
        VeDCCR_e_EVSENotification = tmpRead_p;
    }

    /* End of Switch: '<S5>/Switch98' */

    /* Switch: '<S5>/Switch99' incorporates:
     *  Constant: '<S347>/Calib'
     */
    if (KeDCCR_b_OfferedPaymContrOvrd)
    {
        /* Switch: '<S5>/Switch99' incorporates:
         *  Constant: '<S348>/Calib'
         */
        VeDCCR_b_OfferedPaymentContract = KeDCCR_b_OfferedPaymContrOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch99' */
        VeDCCR_b_OfferedPaymentContract = Merge42;
    }

    /* End of Switch: '<S5>/Switch99' */

    /* Switch: '<S5>/Switch100' incorporates:
     *  Constant: '<S357>/Calib'
     */
    if (KeDCCR_b_Service2CertOvrd)
    {
        /* Switch: '<S5>/Switch100' incorporates:
         *  Constant: '<S358>/Calib'
         */
        VeDCCR_b_Service2_Certificate = KeDCCR_b_Service2CertOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch100' */
        VeDCCR_b_Service2_Certificate = Merge39;
    }

    /* End of Switch: '<S5>/Switch100' */

    /* Switch: '<S5>/Switch101' incorporates:
     *  Constant: '<S323>/Calib'
     */
    if (KeDCCR_b_EVSEfreeServOvrd)
    {
        /* Switch: '<S5>/Switch101' incorporates:
         *  Constant: '<S324>/Calib'
         */
        VeDCCR_b_EVSE_FreeService = KeDCCR_b_EVSEfreeServOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch101' */
        VeDCCR_b_EVSE_FreeService = Merge50;
    }

    /* End of Switch: '<S5>/Switch101' */

    /* Switch: '<S5>/Switch102' incorporates:
     *  Constant: '<S349>/Calib'
     */
    if (KeDCCR_b_OfferedPaymEIMOvrd)
    {
        /* Switch: '<S5>/Switch102' incorporates:
         *  Constant: '<S350>/Calib'
         */
        VeDCCR_b_OfferedPaymentEIM = KeDCCR_b_OfferedPaymEIMOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch102' */
        VeDCCR_b_OfferedPaymentEIM = Merge32;
    }

    /* End of Switch: '<S5>/Switch102' */

    /* Switch: '<S5>/Switch103' incorporates:
     *  Constant: '<S353>/Calib'
     */
    if (KeDCCR_b_PnCPROXIOvrd)
    {
        /* Switch: '<S5>/Switch103' incorporates:
         *  Constant: '<S383>/Calib'
         */
        VeDCCR_e_PnC_Proxi = KeDCCR_e_PnCPROXIOvrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch103' incorporates:
         *  Inport: '<Root>/VeIDCR_e_PROXY_Plug_and_Charge'
         */
        VeDCCR_e_PnC_Proxi = tmpRead_q;
    }

    /* End of Switch: '<S5>/Switch103' */

    /* Switch: '<S5>/Switch104' incorporates:
     *  Constant: '<S328>/Calib'
     */
    if (KeDCCR_b_EVSEsupportsISO1ovrd)
    {
        /* Switch: '<S5>/Switch104' incorporates:
         *  Constant: '<S329>/Calib'
         */
        VeDCCR_b_EVSEsupported_ISO1 = KeDCCR_b_EVSEsupportsISO1ovrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch104' */
        VeDCCR_b_EVSEsupported_ISO1 = Merge31;
    }

    /* End of Switch: '<S5>/Switch104' */

    /* Switch: '<S5>/Switch105' incorporates:
     *  Constant: '<S306>/Calib'
     */
    if (KeDCCR_b_DcChargeTypeStatovrd)
    {
        /* Switch: '<S5>/Switch105' incorporates:
         *  Constant: '<S376>/Calib'
         */
        VeDCCR_e_DcChargeTypeStat = KeDCCR_e_DcChargeTypeStatovrdVal;
    }
    else
    {
        /* Switch: '<S5>/Switch105' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HVDcChargeTypeStat'
         */
        VeDCCR_e_DcChargeTypeStat = tmpRead_r;
    }

    /* End of Switch: '<S5>/Switch105' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DCCC'
     */
    /* If: '<S4>/If' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S9>/Constant'
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     *  Inport: '<Root>/VeIDCR_I_EVSEMinCurrLmt'
     *  Inport: '<Root>/VeIDCR_P_EVSEMaxPwrLmt'
     *  Logic: '<S4>/Logical'
     *  Logic: '<S4>/Logical1'
     *  RelationalOperator: '<S4>/Comparison1'
     */
    if ((rtb_TmpSignalConversionAtVeOBCR && (((uint32)
            rtb_TmpSignalConversionAtVeOB_i) == CeOBCR_e_DC)) ||
            (KeDCCR_b_EnblDCChrg))
    {
        /* Outputs for IfAction SubSystem: '<S4>/DC_Charging' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* UnitDelay: '<S34>/Unit Delay4' */
        Merge21 = DCCR_ac_DW.UnitDelay4_DSTATE;

        /* Switch: '<S34>/Switch4' incorporates:
         *  Constant: '<S137>/Calib'
         *  Switch: '<S34>/Switch6'
         */
        if (KeDCCR_b_ResetV2GTimer)
        {
            /* Switch: '<S34>/Switch4' incorporates:
             *  Constant: '<S34>/Constant Value8'
             */
            VeDCCR_t_V2GTime = 0.0F;
        }
        else if (Merge21)
        {
            /* Switch: '<S34>/Switch6' incorporates:
             *  Constant: '<S104>/Calib'
             *  DataStoreRead: '<S34>/Data Store Read3'
             *  Sum: '<S34>/Sum9'
             *  Switch: '<S34>/Switch4'
             */
            VeDCCR_t_V2GTime = EeDCCR_t_V2GTime + HeDCCR_t_dT;
        }
        else
        {
            /* Switch: '<S34>/Switch4' incorporates:
             *  DataStoreRead: '<S34>/Data Store Read4'
             *  Switch: '<S34>/Switch6'
             */
            VeDCCR_t_V2GTime = EeDCCR_t_V2GTime;
        }

        /* End of Switch: '<S34>/Switch4' */

        /* DataStoreWrite: '<S34>/Data Store Write' */
        EeDCCR_t_V2GTime = VeDCCR_t_V2GTime;

        /* RelationalOperator: '<S34>/Comparison9' incorporates:
         *  Constant: '<S143>/Calib'
         *  DataStoreRead: '<S34>/Data Store Read5'
         */
        Merge11 = (EeDCCR_t_V2GTime > KeDCCR_t_V2GTotalTimeLim);

        /* RelationalOperator: '<S34>/Comparison8' incorporates:
         *  Constant: '<S121>/Calib'
         */
        Merge12 = (VeDCCR_Pct_HVBatSOH < KeDCCR_Pct_HVBatSOH_V2GLim);

        /* Logic: '<S34>/Logical9' incorporates:
         *  Logic: '<S34>/Logical6'
         */
        VeDCCR_b_InhibitV2G = ((Merge11 || Merge12) && Merge21);

        /* Switch: '<S34>/Switch5' incorporates:
         *  Constant: '<S136>/Calib'
         *  Switch: '<S34>/Switch7'
         */
        if (KeDCCR_b_ResetV2GPerfInhibTime)
        {
            /* Switch: '<S34>/Switch5' incorporates:
             *  Constant: '<S34>/Constant Value9'
             */
            VeDCCR_t_V2GPerfInhibTime = 0.0F;
        }
        else if (VeDCCR_b_InhibitV2G)
        {
            /* Switch: '<S34>/Switch7' incorporates:
             *  Constant: '<S104>/Calib'
             *  DataStoreRead: '<S34>/Data Store Read'
             *  Sum: '<S34>/Sum7'
             *  Switch: '<S34>/Switch5'
             */
            VeDCCR_t_V2GPerfInhibTime = EeDCCR_t_V2GPerfInhibTime + HeDCCR_t_dT;
        }
        else
        {
            /* Switch: '<S34>/Switch5' incorporates:
             *  DataStoreRead: '<S34>/Data Store Read1'
             *  Switch: '<S34>/Switch7'
             */
            VeDCCR_t_V2GPerfInhibTime = EeDCCR_t_V2GPerfInhibTime;
        }

        /* End of Switch: '<S34>/Switch5' */

        /* DataStoreWrite: '<S34>/Data Store Write1' */
        EeDCCR_t_V2GPerfInhibTime = VeDCCR_t_V2GPerfInhibTime;

        /* If: '<S34>/If' incorporates:
         *  Constant: '<S134>/Calib'
         */
        if (KeDCCR_b_EnblChrgCounter)
        {
            /* Outputs for IfAction SubSystem: '<S34>/EnergyCounter' incorporates:
             *  ActionPort: '<S99>/Action Port'
             */
            /* Product: '<S99>/Product' incorporates:
             *  Constant: '<S155>/Calib'
             *  Product: '<S99>/Product1'
             */
            rtb_Abs = HeDCCR_t_dT * VeDCCR_U_EVSEOutputVolt;

            /* Product: '<S99>/Product' incorporates:
             *  Constant: '<S99>/Constant Value1'
             *  MinMax: '<S99>/MinMax1'
             */
            VeDCCR_E_InstChrgEnrgy = rtb_Abs * fmaxf(VeDCCR_I_EVSEOutputCurr,
                0.0F);

            /* Sum: '<S99>/Sum7' incorporates:
             *  DataStoreRead: '<S99>/Data Store Read'
             */
            VeDCCR_E_TECharge = VeDCCR_E_InstChrgEnrgy +
                DCCR_ac_DW.NeDCCR_E_TECharge;

            /* DataStoreWrite: '<S99>/Data Store Write' */
            DCCR_ac_DW.NeDCCR_E_TECharge = VeDCCR_E_TECharge;

            /* Product: '<S99>/Product1' incorporates:
             *  Constant: '<S99>/Constant Value2'
             *  MinMax: '<S99>/MinMax2'
             */
            VeDCCR_E_InstDischrgEnrgy = rtb_Abs * fminf(VeDCCR_I_EVSEOutputCurr,
                0.0F);

            /* Sum: '<S99>/Sum8' incorporates:
             *  DataStoreRead: '<S99>/Data Store Read1'
             */
            VeDCCR_E_TEDischarge = VeDCCR_E_InstDischrgEnrgy +
                DCCR_ac_DW.NeDCCR_E_TEDischarge;

            /* DataStoreWrite: '<S99>/Data Store Write1' */
            DCCR_ac_DW.NeDCCR_E_TEDischarge = VeDCCR_E_TEDischarge;

            /* End of Outputs for SubSystem: '<S34>/EnergyCounter' */
        }

        /* End of If: '<S34>/If' */

        /* Abs: '<S34>/Abs' incorporates:
         *  Sum: '<S34>/Sum4'
         */
        rtb_Abs = fabsf(rtb_TmpSignalConversionAtVeHVTR -
                        VeDCCR_U_EVSEOutputVolt);

        /* RelationalOperator: '<S34>/Comparison1' incorporates:
         *  RelationalOperator: '<S32>/Comparison1'
         *  RelationalOperator: '<S32>/Comparison2'
         *  RelationalOperator: '<S34>/Comparison11'
         *  UnitDelay: '<S11>/Unit Delay2'
         */
        Merge30_tmp = DCCR_ac_DW.UnitDelay2_DSTATE_e;

        /* RelationalOperator: '<S34>/Comparison1' incorporates:
         *  Constant: '<S101>/Constant'
         */
        Merge30 = (((uint32)Merge30_tmp) == CeOBCR_e_DCCrntDmd);

        /* RelationalOperator: '<S34>/Comparison10' incorporates:
         *  Constant: '<S142>/Calib'
         *  DataStoreRead: '<S34>/Data Store Read2'
         */
        VeDCCR_b_V2G_Disable_TO = (EeDCCR_t_V2GPerfInhibTime >
            KeDCCR_t_V2GLimPerfTO);

        /* RelationalOperator: '<S34>/Comparison3' incorporates:
         *  Constant: '<S34>/Constant Value5'
         */
        Merge28 = (VeDCCR_I_EVSEMaxCurrLmt < 0.0F);

        /* RelationalOperator: '<S34>/Comparison4' incorporates:
         *  Constant: '<S120>/Calib'
         */
        VeDCCR_b_V2G_SOHCond = (VeDCCR_Pct_HVBatSOH >
                                KeDCCR_Pct_HVBatSOH_V2GEnblLimit);

        /* RelationalOperator: '<S34>/Comparison5' incorporates:
         *  Constant: '<S100>/Constant'
         */
        VeDCCR_b_V2G_ChargeTypeCond = (((uint32)rtb_TmpSignalConversionAtVeOB_i)
            == CeOBCR_e_DC);

        /* Logic: '<S32>/Logical5' incorporates:
         *  Constant: '<S78>/Constant'
         *  Constant: '<S79>/Constant'
         *  RelationalOperator: '<S32>/Comparison1'
         *  RelationalOperator: '<S32>/Comparison2'
         */
        Merge15 = ((((uint32)Merge30_tmp) == CeOBCR_e_DCChrgParDisc) ||
                   (((uint32)Merge30_tmp) == CeOBCR_e_PnC_ChrgParDsvry));

        /* Outputs for Atomic SubSystem: '<S32>/ClosedInterval1' */
        /* Logic: '<S76>/Logical Operator' incorporates:
         *  Constant: '<S86>/Calib'
         *  Constant: '<S87>/Calib'
         *  RelationalOperator: '<S76>/Relatonal Operator'
         *  RelationalOperator: '<S76>/Relatonal Operator1'
         */
        Merge27 = ((VeDCCR_U_EVSEMaxVoltLmt >= KeDCCR_U_EVSE800VInterval_MN) &&
                   (VeDCCR_U_EVSEMaxVoltLmt <= KeDCCR_U_EVSE800VInterval_MX));

        /* End of Outputs for SubSystem: '<S32>/ClosedInterval1' */

        /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S93>/EdgeRising' */
        /* Logic: '<S95>/AND' incorporates:
         *  Logic: '<S95>/OR1'
         *  UnitDelay: '<S95>/Unit Delay'
         */
        Merge22 = (Merge27 && (!DCCR_ac_DW.UnitDelay_DSTATE_m5));

        /* Update for UnitDelay: '<S95>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_m5 = Merge27;

        /* End of Outputs for SubSystem: '<S93>/EdgeRising' */

        /* Switch: '<S93>/Switch1' incorporates:
         *  Constant: '<S83>/Calib'
         *  Constant: '<S93>/Constant Value'
         *  Logic: '<S93>/OR'
         *  Logic: '<S93>/OR1'
         *  MinMax: '<S93>/Minimum'
         *  Sum: '<S93>/Summation'
         *  UnitDelay: '<S93>/Unit Delay'
         */
        if ((!Merge27) || Merge22)
        {
            /* Switch: '<S93>/Switch1' incorporates:
             *  Constant: '<S93>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_EVSEVoltInterval_Dbnc < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_ku) + 1U)))
        {
            /* MinMax: '<S93>/Minimum' incorporates:
             *  Constant: '<S83>/Calib'
             *  Switch: '<S93>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_EVSEVoltInterval_Dbnc;
        }
        else
        {
            /* Switch: '<S93>/Switch1' incorporates:
             *  Constant: '<S93>/Constant Value'
             *  MinMax: '<S93>/Minimum'
             *  Sum: '<S93>/Summation'
             *  UnitDelay: '<S93>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_ku) + 1U);
        }

        /* End of Switch: '<S93>/Switch1' */

        /* Update for UnitDelay: '<S93>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_ku = Merge13;

        /* Outputs for Atomic SubSystem: '<S32>/Signal Latch On With Reset1' */
        /* Logic: '<S92>/OR1' incorporates:
         *  Constant: '<S83>/Calib'
         *  Logic: '<S32>/Logical1'
         *  Logic: '<S32>/Logical2'
         *  Logic: '<S92>/OR'
         *  Logic: '<S93>/AND'
         *  RelationalOperator: '<S93>/Greater  Than'
         *  UnitDelay: '<S92>/Unit Delay'
         */
        VeDCCR_b_ChrgTypeCmd_800 = ((Merge15 && (Merge27 && (Merge13 >=
            KeDCCR_Cnt_EVSEVoltInterval_Dbnc))) ||
            (rtb_TmpSignalConversionAtVeOBCR && (DCCR_ac_DW.UnitDelay_DSTATE_co)));

        /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample' */

        /* Update for UnitDelay: '<S92>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_co = VeDCCR_b_ChrgTypeCmd_800;

        /* End of Outputs for SubSystem: '<S32>/Signal Latch On With Reset1' */

        /* Outputs for Atomic SubSystem: '<S32>/ClosedInterval' */
        /* Logic: '<S75>/Logical Operator' incorporates:
         *  Constant: '<S84>/Calib'
         *  Constant: '<S85>/Calib'
         *  RelationalOperator: '<S75>/Relatonal Operator'
         *  RelationalOperator: '<S75>/Relatonal Operator1'
         */
        Merge27 = ((VeDCCR_U_EVSEMaxVoltLmt >= KeDCCR_U_EVSE400VInterval_MN) &&
                   (VeDCCR_U_EVSEMaxVoltLmt <= KeDCCR_U_EVSE400VInterval_MX));

        /* End of Outputs for SubSystem: '<S32>/ClosedInterval' */

        /* Outputs for Atomic SubSystem: '<S32>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S94>/EdgeRising' */
        /* Logic: '<S96>/AND' incorporates:
         *  Logic: '<S96>/OR1'
         *  UnitDelay: '<S96>/Unit Delay'
         */
        Merge31 = (Merge27 && (!DCCR_ac_DW.UnitDelay_DSTATE_cy));

        /* Update for UnitDelay: '<S96>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_cy = Merge27;

        /* End of Outputs for SubSystem: '<S94>/EdgeRising' */

        /* Switch: '<S94>/Switch1' incorporates:
         *  Constant: '<S82>/Calib'
         *  Constant: '<S94>/Constant Value'
         *  Logic: '<S94>/OR'
         *  Logic: '<S94>/OR1'
         *  MinMax: '<S94>/Minimum'
         *  Sum: '<S94>/Summation'
         *  UnitDelay: '<S94>/Unit Delay'
         */
        if ((!Merge27) || Merge31)
        {
            /* Switch: '<S94>/Switch1' incorporates:
             *  Constant: '<S94>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_EVSEVoltInterval_Dbnc < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_b) + 1U)))
        {
            /* MinMax: '<S94>/Minimum' incorporates:
             *  Constant: '<S82>/Calib'
             *  Switch: '<S94>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_EVSEVoltInterval_Dbnc;
        }
        else
        {
            /* Switch: '<S94>/Switch1' incorporates:
             *  Constant: '<S94>/Constant Value'
             *  MinMax: '<S94>/Minimum'
             *  Sum: '<S94>/Summation'
             *  UnitDelay: '<S94>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_b) + 1U);
        }

        /* End of Switch: '<S94>/Switch1' */

        /* Update for UnitDelay: '<S94>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_b = Merge13;

        /* Outputs for Atomic SubSystem: '<S32>/Signal Latch On With Reset' */
        /* Logic: '<S91>/OR1' incorporates:
         *  Constant: '<S82>/Calib'
         *  Logic: '<S32>/Logical2'
         *  Logic: '<S32>/Logical3'
         *  Logic: '<S91>/OR'
         *  Logic: '<S94>/AND'
         *  RelationalOperator: '<S94>/Greater  Than'
         *  UnitDelay: '<S91>/Unit Delay'
         */
        VeDCCR_b_ChrgTypeCmd_400 = ((Merge15 && (Merge27 && (Merge13 >=
            KeDCCR_Cnt_EVSEVoltInterval_Dbnc))) ||
            (rtb_TmpSignalConversionAtVeOBCR && (DCCR_ac_DW.UnitDelay_DSTATE_jn)));

        /* End of Outputs for SubSystem: '<S32>/Turn On Delay Sample1' */

        /* Update for UnitDelay: '<S91>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_jn = VeDCCR_b_ChrgTypeCmd_400;

        /* End of Outputs for SubSystem: '<S32>/Signal Latch On With Reset' */

        /* Switch: '<S34>/Switch9' incorporates:
         *  Constant: '<S138>/Calib'
         */
        if (KeDCCR_b_SwtchblBttryPckEnbl)
        {
            /* Switch: '<S105>/Switch1' incorporates:
             *  Switch: '<S105>/Switch7'
             */
            if (VeDCCR_b_ChrgTypeCmd_800)
            {
                /* Switch: '<S34>/Switch9' incorporates:
                 *  Constant: '<S130>/Calib'
                 *  Switch: '<S105>/Switch1'
                 */
                rtb_Switch9 = KeDCCR_U_MaxAllowableBattVolt_800V;
            }
            else if (VeDCCR_b_ChrgTypeCmd_400)
            {
                /* Switch: '<S105>/Switch7' incorporates:
                 *  Constant: '<S129>/Calib'
                 *  Switch: '<S105>/Switch1'
                 *  Switch: '<S34>/Switch9'
                 */
                rtb_Switch9 = KeDCCR_U_MaxAllowableBattVolt_400V;
            }
            else
            {
                /* Switch: '<S34>/Switch9' incorporates:
                 *  Constant: '<S131>/Calib'
                 *  Switch: '<S105>/Switch1'
                 *  Switch: '<S105>/Switch7'
                 */
                rtb_Switch9 = KeDCCR_U_MaxAllowableBattVolt_null;
            }

            /* End of Switch: '<S105>/Switch1' */
        }
        else
        {
            /* Switch: '<S34>/Switch9' incorporates:
             *  Constant: '<S128>/Calib'
             */
            rtb_Switch9 = KeDCCR_U_MaxAllowableBattVolt;
        }

        /* End of Switch: '<S34>/Switch9' */

        /* Outputs for Atomic SubSystem: '<S34>/EdgeRising' */
        /* Logic: '<S98>/OR1' incorporates:
         *  UnitDelay: '<S98>/Unit Delay'
         */
        Merge22 = !DCCR_ac_DW.UnitDelay_DSTATE_ec;

        /* Update for UnitDelay: '<S98>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_ec = Merge30;

        /* End of Outputs for SubSystem: '<S34>/EdgeRising' */

        /* Sum: '<S34>/Sum1' incorporates:
         *  Constant: '<S126>/Calib'
         */
        rtb_Sum1 = rtb_TmpSignalConversionAtVeHVTR - KeDCCR_U_HVBatVoltOffSet;

        /* Outputs for Atomic SubSystem: '<S34>/Digital Lowpass Reset Enabled1' */
        /* Outputs for Atomic SubSystem: '<S34>/EdgeRising' */
        /* Switch: '<S97>/Switch1' incorporates:
         *  Logic: '<S98>/AND'
         */
        if ((!Merge30) || (!Merge22))
        {
            /* Switch: '<S97>/Switch1' incorporates:
             *  Constant: '<S119>/Calib'
             *  Product: '<S97>/Multiplication'
             *  Sum: '<S97>/Subtraction'
             *  Sum: '<S97>/Summation'
             *  UnitDelay: '<S97>/Unit Delay'
             */
            rtb_TmpSignalConversionAtVeHVTR = ((rtb_Switch9 -
                DCCR_ac_DW.UnitDelay_DSTATE) * KeDCCR_K_DCTargetVoltCoeff) +
                DCCR_ac_DW.UnitDelay_DSTATE;
        }

        /* End of Switch: '<S97>/Switch1' */
        /* End of Outputs for SubSystem: '<S34>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S97>/Limiter' */
        /* Switch: '<S154>/Switch1' incorporates:
         *  RelationalOperator: '<S154>/Relational Operator'
         */
        if (rtb_Switch9 < rtb_TmpSignalConversionAtVeHVTR)
        {
            /* Merge: '<S36>/Merge3' */
            rtb_TmpSignalConversionAtVeHVTR = rtb_Switch9;
        }

        /* End of Switch: '<S154>/Switch1' */

        /* Switch: '<S154>/Switch' incorporates:
         *  RelationalOperator: '<S154>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeHVTR <= rtb_Sum1)
        {
            /* Switch: '<S154>/Switch' */
            rtb_TmpSignalConversionAtVeHVTR = rtb_Sum1;
        }

        /* End of Switch: '<S154>/Switch' */
        /* End of Outputs for SubSystem: '<S97>/Limiter' */

        /* Update for UnitDelay: '<S97>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE = rtb_TmpSignalConversionAtVeHVTR;

        /* End of Outputs for SubSystem: '<S34>/Digital Lowpass Reset Enabled1' */

        /* Switch: '<S34>/Switch8' incorporates:
         *  Constant: '<S138>/Calib'
         *  Sum: '<S34>/Sum'
         *  Sum: '<S34>/Sum5'
         */
        if (KeDCCR_b_SwtchblBttryPckEnbl)
        {
            rtb_Switch_m = VeDCCR_I_EVSEOutputCurr;
        }
        else
        {
            rtb_Switch_m = rtb_TmpSignalConversionAtVeBP_m -
                (VeDCCR_I_HV_AccCurr + VeDCCR_I_EVSEOutputCurr);
        }

        /* End of Switch: '<S34>/Switch8' */

        /* Sum: '<S34>/Sum3' incorporates:
         *  Abs: '<S34>/Abs2'
         *  Constant: '<S114>/Calib'
         */
        VeDCCR_I_DCCurrent = fabsf(rtb_Switch_m) - KeDCCR_I_CrntOffsetSensErr;

        /* RelationalOperator: '<S34>/LessThan' incorporates:
         *  Constant: '<S117>/Calib'
         */
        Merge22 = (VeDCCR_I_DCCurrent <= KeDCCR_I_DC_EmergCurrPresent);

        /* RelationalOperator: '<S34>/LessThan1' incorporates:
         *  Constant: '<S118>/Calib'
         */
        Merge27 = (VeDCCR_I_DCCurrent <= KeDCCR_I_DC_MinCurrentPresent);

        /* Switch: '<S34>/Switch3' */
        if (Merge30)
        {
            /* Switch: '<S34>/Switch3' */
            VeDCCR_U_EV_DCTargetVolt_Test = rtb_TmpSignalConversionAtVeHVTR;
        }
        else
        {
            /* Switch: '<S34>/Switch3' */
            VeDCCR_U_EV_DCTargetVolt_Test = rtb_Sum1;
        }

        /* End of Switch: '<S34>/Switch3' */

        /* RelationalOperator: '<S34>/LessThan2' incorporates:
         *  Constant: '<S141>/Calib'
         *  Product: '<S34>/Product2'
         *  Sum: '<S34>/Sum6'
         */
        VeDCCR_b_DemndExcd_Volt = (VeDCCR_U_EVSEOutputVolt >
            ((VeDCCR_U_EVSEMaxVoltLmt * KeDCCR_k_DC_VoltTolerance) +
             VeDCCR_U_EV_DCTargetVolt_Test));

        /* End of Outputs for SubSystem: '<S4>/DC_Charging' */
        (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&tmpRead_0);

        /* Outputs for IfAction SubSystem: '<S4>/DC_Charging' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Switch: '<S34>/Switch' incorporates:
         *  Constant: '<S115>/Calib'
         *  Constant: '<S116>/Calib'
         *  Constant: '<S139>/Calib'
         *  Constant: '<S140>/Calib'
         *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
         *  MinMax: '<S34>/MinMax1'
         *  Product: '<S34>/Product'
         *  Product: '<S34>/Product1'
         *  RelationalOperator: '<S34>/Comparison'
         *  UnitDelay: '<S34>/Unit Delay1'
         *  UnitDelay: '<S34>/Unit Delay2'
         */
        if (DCCR_ac_DW.UnitDelay2_DSTATE > KeDCCR_I_DC_CurrToleranceThresh)
        {
            rtb_Switch_m = fmaxf(DCCR_ac_DW.UnitDelay1_DSTATE *
                                 KeDCCR_k_DC_IECCurrTolerance,
                                 VeDCCR_I_EVSEMaxCurrLmt *
                                 KeDCCR_k_DC_J1772CurrTolerance);
        }
        else
        {
            rtb_Switch_m = KeDCCR_I_DC_CurrToleranceMin;
        }

        /* End of Switch: '<S34>/Switch' */

        /* RelationalOperator: '<S34>/LessThan3' incorporates:
         *  Sum: '<S34>/Sum2'
         *  UnitDelay: '<S34>/Unit Delay3'
         */
        VeDCCR_b_ChrgDmdExcd = (VeDCCR_I_EVSEOutputCurr >
                                (DCCR_ac_DW.UnitDelay3_DSTATE + rtb_Switch_m));

        /* Gain: '<S11>/Gain2' */
        rtb_Switch_m = 1000.0F * tmpRead_0;

        /* Outputs for Atomic SubSystem: '<S37>/Protected Division' */
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/Constant Value'
         *  Constant: '<S186>/Constant Value1'
         *  Constant: '<S186>/Constant Value2'
         *  Constant: '<S186>/Constant Value3'
         *  Logic: '<S186>/AND'
         *  RelationalOperator: '<S186>/Greater Than or Equal '
         *  RelationalOperator: '<S186>/Greater Than or Equal 1'
         *  RelationalOperator: '<S186>/Not Equal'
         *  RelationalOperator: '<S186>/Not Equal1'
         *  Switch: '<S186>/Switch2'
         *  Switch: '<S186>/Switch3'
         */
        if ((rtb_Switch_m != 0.0F) && (rtb_TmpSignalConversionAtVeBP_g != 0.0F))
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Product: '<S186>/Division'
             */
            rtb_Switch_m /= rtb_TmpSignalConversionAtVeBP_g;
        }
        else if (rtb_Switch_m > 0.0F)
        {
            /* Switch: '<S186>/Switch2' incorporates:
             *  Constant: '<S186>/MAXFLOAT'
             *  Switch: '<S186>/Switch1'
             */
            rtb_Switch_m = 3.402823466E+38F;
        }
        else if (rtb_Switch_m < 0.0F)
        {
            /* Switch: '<S186>/Switch3' incorporates:
             *  Constant: '<S186>/MINFLOAT'
             *  Switch: '<S186>/Switch1'
             *  Switch: '<S186>/Switch2'
             */
            rtb_Switch_m = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S186>/Switch1' incorporates:
             *  Constant: '<S186>/Constant Value4'
             *  Switch: '<S186>/Switch2'
             *  Switch: '<S186>/Switch3'
             */
            rtb_Switch_m = 0.0F;
        }

        /* End of Switch: '<S186>/Switch1' */
        /* End of Outputs for SubSystem: '<S37>/Protected Division' */

        /* Switch: '<S37>/Switch2' */
        if (VeDCCR_b_InhibitV2G)
        {
            /* Switch: '<S37>/Switch2' incorporates:
             *  Constant: '<S183>/Calib'
             *  Constant: '<S184>/Calib'
             *  Constant: '<S37>/Constant Value8'
             *  MinMax: '<S37>/MinMax1'
             *  MinMax: '<S37>/MinMax3'
             *  MinMax: '<S37>/MinMax4'
             *  Sum: '<S37>/Sum2'
             */
            rtb_Switch_m = fminf(KeDCCR_I_V2GPerfLimDischrgCurr, fminf(fmaxf
                                  (rtb_Switch_m - VeDCCR_I_HV_AccCurr, 0.0F),
                                  KeDCCR_I_MaxDischrgCurr));
        }
        else
        {
            /* Switch: '<S37>/Switch2' incorporates:
             *  Constant: '<S183>/Calib'
             *  Constant: '<S37>/Constant Value8'
             *  MinMax: '<S37>/MinMax3'
             *  MinMax: '<S37>/MinMax4'
             *  Sum: '<S37>/Sum2'
             */
            rtb_Switch_m = fminf(fmaxf(rtb_Switch_m - VeDCCR_I_HV_AccCurr, 0.0F),
                                 KeDCCR_I_MaxDischrgCurr);
        }

        /* End of Switch: '<S37>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S149>/EdgeRising' */
        /* Logic: '<S159>/AND' incorporates:
         *  Logic: '<S159>/OR1'
         *  UnitDelay: '<S159>/Unit Delay'
         */
        Merge30 = (Merge28 && (!DCCR_ac_DW.UnitDelay_DSTATE_eh));

        /* Update for UnitDelay: '<S159>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_eh = Merge28;

        /* End of Outputs for SubSystem: '<S149>/EdgeRising' */

        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S112>/Calib'
         *  Constant: '<S149>/Constant Value'
         *  Logic: '<S149>/OR'
         *  Logic: '<S149>/OR1'
         *  MinMax: '<S149>/Minimum'
         *  Sum: '<S149>/Summation'
         *  UnitDelay: '<S149>/Unit Delay'
         */
        if ((!Merge28) || Merge30)
        {
            /* Switch: '<S149>/Switch1' incorporates:
             *  Constant: '<S149>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2G < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_kz) + 1U)))
        {
            /* MinMax: '<S149>/Minimum' incorporates:
             *  Constant: '<S112>/Calib'
             *  Switch: '<S149>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2G;
        }
        else
        {
            /* Switch: '<S149>/Switch1' incorporates:
             *  Constant: '<S149>/Constant Value'
             *  MinMax: '<S149>/Minimum'
             *  Sum: '<S149>/Summation'
             *  UnitDelay: '<S149>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_kz) + 1U);
        }

        /* End of Switch: '<S149>/Switch1' */

        /* Update for UnitDelay: '<S149>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_kz = Merge13;

        /* Outputs for Atomic SubSystem: '<S34>/Signal Latch On With Reset' */
        /* Logic: '<S145>/OR1' incorporates:
         *  Constant: '<S112>/Calib'
         *  Logic: '<S145>/OR'
         *  Logic: '<S149>/AND'
         *  Logic: '<S34>/Logical25'
         *  RelationalOperator: '<S149>/Greater  Than'
         *  UnitDelay: '<S145>/Unit Delay'
         */
        Merge28 = ((Merge28 && (Merge13 >= KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2G)) ||
                   (rtb_TmpSignalConversionAtVeOBCR &&
                    (DCCR_ac_DW.UnitDelay_DSTATE_ml)));

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample3' */

        /* Update for UnitDelay: '<S145>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_ml = Merge28;

        /* End of Outputs for SubSystem: '<S34>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S34>/OpenInterval' */
        /* Logic: '<S144>/Logical Operator' incorporates:
         *  Constant: '<S122>/Calib'
         *  Constant: '<S123>/Calib'
         *  RelationalOperator: '<S144>/Relatonal Operator'
         *  RelationalOperator: '<S144>/Relatonal Operator1'
         */
        VeDCCR_b_V2G_SOCCond = ((rtb_TmpSignalConversionAtVeBPCR >
            KeDCCR_Pct_V2GSOCLowerLim) && (rtb_TmpSignalConversionAtVeBPCR <
            KeDCCR_Pct_V2GSOCUpperLim));

        /* End of Outputs for SubSystem: '<S34>/OpenInterval' */

        /* Logic: '<S34>/Logical' incorporates:
         *  Constant: '<S102>/Constant'
         *  Constant: '<S103>/Constant'
         *  Constant: '<S133>/Calib'
         *  Constant: '<S135>/Calib'
         *  Logic: '<S34>/Logical4'
         *  Logic: '<S34>/Logical7'
         *  RelationalOperator: '<S34>/Comparison11'
         *  RelationalOperator: '<S34>/Comparison7'
         *  Switch: '<S5>/Switch89'
         */
        VeDCCR_b_V2GMode_EMEA = (((((((Merge28 && (VeDCCR_b_V2G_SOHCond)) &&
            (VeDCCR_b_V2G_SOCCond)) && (VeDCCR_b_V2G_ChargeTypeCond)) &&
            ((((uint32)VeDCCR_e_ShipMd) == CePLTR_e_ShipingMode_SHIP_MD) ||
             (KeDCCR_b_LogisticModeOvrd))) && (KeDCCR_b_EnableV2GFeature)) &&
            (!VeDCCR_b_V2G_Disable_TO)) && (((uint32)Merge30_tmp) ==
            CeOBCR_e_DCCrntDmd));

        /* Logic: '<S34>/Logical5' incorporates:
         *  Gain: '<S34>/Gain'
         *  RelationalOperator: '<S34>/LessThan5'
         */
        VeDCCR_b_DisChrgDmdExcd = (((-VeDCCR_I_EVSEOutputCurr) > rtb_Switch_m) &&
            Merge21);

        /* Logic: '<S34>/Logical2' incorporates:
         *  Constant: '<S34>/Constant Value4'
         *  Logic: '<S34>/Logical3'
         *  RelationalOperator: '<S34>/Comparison6'
         */
        VeDCCR_b_DisChrgModeDisable = ((VeDCCR_I_EVSEOutputCurr < 0.0F) &&
            (!Merge21));

        /* Logic: '<S34>/Logical1' */
        VeDCCR_b_DemndExcd_Curr = (((VeDCCR_b_ChrgDmdExcd) ||
            (VeDCCR_b_DisChrgDmdExcd)) || (VeDCCR_b_DisChrgModeDisable));

        /* Logic: '<S34>/Logical8' incorporates:
         *  Abs: '<S34>/Abs1'
         *  Constant: '<S125>/Calib'
         *  Constant: '<S132>/Calib'
         *  RelationalOperator: '<S34>/BiggerThan2'
         */
        VeDCCR_b_V2G_LogisicMdCond = ((fabsf(VeDCCR_U_EVSEOutputVolt) >
            KeDCCR_U_EVSE_OutputVLimit) && (KeDCCR_b_EVSE_OutputVChk));

        /* Logic: '<S34>/Logical10' incorporates:
         *  Constant: '<S124>/Calib'
         *  RelationalOperator: '<S34>/BiggerThan'
         */
        Merge30 = ((rtb_Abs > KeDCCR_U_DC_MaxVoltDiff) ||
                   (VeDCCR_b_V2G_LogisicMdCond));

        /* Logic: '<S34>/Logical11' incorporates:
         *  Constant: '<S127>/Calib'
         *  RelationalOperator: '<S34>/BiggerThan1'
         */
        Merge28 = ((rtb_Abs > KeDCCR_U_ISO_MaxVoltDiff) ||
                   (VeDCCR_b_V2G_LogisicMdCond));

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample2' */
        /* Outputs for Atomic SubSystem: '<S148>/EdgeRising' */
        /* UnitDelay: '<S229>/Unit Delay' incorporates:
         *  UnitDelay: '<S158>/Unit Delay'
         */
        Merge31 = DCCR_ac_DW.UnitDelay_DSTATE_c0;

        /* Update for UnitDelay: '<S158>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_c0 = VeDCCR_b_DemndExcd_Curr;

        /* Switch: '<S148>/Switch1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Constant: '<S148>/Constant Value'
         *  Logic: '<S148>/OR'
         *  Logic: '<S148>/OR1'
         *  Logic: '<S158>/AND'
         *  Logic: '<S158>/OR1'
         *  MinMax: '<S148>/Minimum'
         *  Sum: '<S148>/Summation'
         *  UnitDelay: '<S148>/Unit Delay'
         */
        if ((!VeDCCR_b_DemndExcd_Curr) || ((VeDCCR_b_DemndExcd_Curr) &&
                (!Merge31)))
        {
            /* Switch: '<S148>/Switch1' incorporates:
             *  Constant: '<S148>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_DmdExcdCurr < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_ka) + 1U)))
        {
            /* MinMax: '<S148>/Minimum' incorporates:
             *  Constant: '<S110>/Calib'
             *  Switch: '<S148>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_Dbnc_DmdExcdCurr;
        }
        else
        {
            /* Switch: '<S148>/Switch1' incorporates:
             *  Constant: '<S148>/Constant Value'
             *  MinMax: '<S148>/Minimum'
             *  Sum: '<S148>/Summation'
             *  UnitDelay: '<S148>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_ka) + 1U);
        }

        /* End of Switch: '<S148>/Switch1' */
        /* End of Outputs for SubSystem: '<S148>/EdgeRising' */

        /* Update for UnitDelay: '<S148>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_ka = Merge13;

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample2' */

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample4' */
        /* Outputs for Atomic SubSystem: '<S150>/EdgeRising' */
        /* UnitDelay: '<S229>/Unit Delay' incorporates:
         *  UnitDelay: '<S160>/Unit Delay'
         */
        Merge31 = DCCR_ac_DW.UnitDelay_DSTATE_ow;

        /* Update for UnitDelay: '<S160>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_ow = VeDCCR_b_DemndExcd_Volt;

        /* Switch: '<S150>/Switch1' incorporates:
         *  Constant: '<S111>/Calib'
         *  Constant: '<S150>/Constant Value'
         *  Logic: '<S150>/OR'
         *  Logic: '<S150>/OR1'
         *  Logic: '<S160>/AND'
         *  Logic: '<S160>/OR1'
         *  MinMax: '<S150>/Minimum'
         *  Sum: '<S150>/Summation'
         *  UnitDelay: '<S150>/Unit Delay'
         */
        if ((!VeDCCR_b_DemndExcd_Volt) || ((VeDCCR_b_DemndExcd_Volt) &&
                (!Merge31)))
        {
            /* Switch: '<S150>/Switch1' incorporates:
             *  Constant: '<S150>/Constant Value1'
             */
            Merge46 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_DmdExcdVolt < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_g) + 1U)))
        {
            /* MinMax: '<S150>/Minimum' incorporates:
             *  Constant: '<S111>/Calib'
             *  Switch: '<S150>/Switch1'
             */
            Merge46 = KeDCCR_Cnt_Dbnc_DmdExcdVolt;
        }
        else
        {
            /* Switch: '<S150>/Switch1' incorporates:
             *  Constant: '<S150>/Constant Value'
             *  MinMax: '<S150>/Minimum'
             *  Sum: '<S150>/Summation'
             *  UnitDelay: '<S150>/Unit Delay'
             */
            Merge46 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_g) + 1U);
        }

        /* End of Switch: '<S150>/Switch1' */
        /* End of Outputs for SubSystem: '<S150>/EdgeRising' */

        /* Update for UnitDelay: '<S150>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_g = Merge46;

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample2' */
        /* Logic: '<S34>/Or1' incorporates:
         *  Constant: '<S110>/Calib'
         *  Constant: '<S111>/Calib'
         *  Logic: '<S148>/AND'
         *  Logic: '<S150>/AND'
         *  RelationalOperator: '<S148>/Greater  Than'
         *  RelationalOperator: '<S150>/Greater  Than'
         */
        Merge21 = (((VeDCCR_b_DemndExcd_Curr) && (Merge13 >=
                     KeDCCR_Cnt_Dbnc_DmdExcdCurr)) || ((VeDCCR_b_DemndExcd_Volt)
                    && (Merge46 >= KeDCCR_Cnt_Dbnc_DmdExcdVolt)));

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample2' */
        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample4' */

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S147>/EdgeRising' */
        /* Logic: '<S157>/AND' incorporates:
         *  Logic: '<S157>/OR1'
         *  UnitDelay: '<S157>/Unit Delay'
         */
        Merge31 = (Merge22 && (!DCCR_ac_DW.UnitDelay_DSTATE_lt));

        /* Update for UnitDelay: '<S157>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_lt = Merge22;

        /* End of Outputs for SubSystem: '<S147>/EdgeRising' */

        /* Switch: '<S147>/Switch1' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S147>/Constant Value'
         *  Logic: '<S147>/OR'
         *  Logic: '<S147>/OR1'
         *  MinMax: '<S147>/Minimum'
         *  Sum: '<S147>/Summation'
         *  UnitDelay: '<S147>/Unit Delay'
         */
        if ((!Merge22) || Merge31)
        {
            /* Switch: '<S147>/Switch1' incorporates:
             *  Constant: '<S147>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_DCBusCurr < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_hf) + 1U)))
        {
            /* MinMax: '<S147>/Minimum' incorporates:
             *  Constant: '<S109>/Calib'
             *  Switch: '<S147>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_Dbnc_DCBusCurr;
        }
        else
        {
            /* Switch: '<S147>/Switch1' incorporates:
             *  Constant: '<S147>/Constant Value'
             *  MinMax: '<S147>/Minimum'
             *  Sum: '<S147>/Summation'
             *  UnitDelay: '<S147>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_hf) + 1U);
        }

        /* End of Switch: '<S147>/Switch1' */

        /* Update for UnitDelay: '<S147>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_hf = Merge13;

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample1' */

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S146>/EdgeRising' */
        /* Logic: '<S156>/AND' incorporates:
         *  Logic: '<S156>/OR1'
         *  UnitDelay: '<S156>/Unit Delay'
         */
        Merge31 = (Merge27 && (!DCCR_ac_DW.UnitDelay_DSTATE_jf));

        /* Update for UnitDelay: '<S156>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_jf = Merge27;

        /* End of Outputs for SubSystem: '<S146>/EdgeRising' */

        /* Switch: '<S146>/Switch1' incorporates:
         *  Constant: '<S109>/Calib'
         *  Constant: '<S146>/Constant Value'
         *  Logic: '<S146>/OR'
         *  Logic: '<S146>/OR1'
         *  MinMax: '<S146>/Minimum'
         *  Sum: '<S146>/Summation'
         *  UnitDelay: '<S146>/Unit Delay'
         */
        if ((!Merge27) || Merge31)
        {
            /* Switch: '<S146>/Switch1' incorporates:
             *  Constant: '<S146>/Constant Value1'
             */
            Merge46 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_DCBusCurr < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_f3) + 1U)))
        {
            /* MinMax: '<S146>/Minimum' incorporates:
             *  Constant: '<S109>/Calib'
             *  Switch: '<S146>/Switch1'
             */
            Merge46 = KeDCCR_Cnt_Dbnc_DCBusCurr;
        }
        else
        {
            /* Switch: '<S146>/Switch1' incorporates:
             *  Constant: '<S146>/Constant Value'
             *  MinMax: '<S146>/Minimum'
             *  Sum: '<S146>/Summation'
             *  UnitDelay: '<S146>/Unit Delay'
             */
            Merge46 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_f3) + 1U);
        }

        /* End of Switch: '<S146>/Switch1' */

        /* Update for UnitDelay: '<S146>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_f3 = Merge46;

        /* Switch: '<S34>/Switch2' incorporates:
         *  Constant: '<S109>/Calib'
         *  Logic: '<S146>/AND'
         *  RelationalOperator: '<S146>/Greater  Than'
         */
        if (Merge27 && (Merge46 >= KeDCCR_Cnt_Dbnc_DCBusCurr))
        {
            /* Switch: '<S34>/Switch2' incorporates:
             *  Constant: '<S34>/FlagIsTwo'
             */
            VeDCCR_K_BusPrsntCurrChk = 2;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample1' */
            /* Switch: '<S34>/Switch2' incorporates:
             *  Logic: '<S147>/AND'
             *  RelationalOperator: '<S147>/Greater  Than'
             */
            VeDCCR_K_BusPrsntCurrChk = (sint16)((Merge22 && (Merge13 >=
                KeDCCR_Cnt_Dbnc_DCBusCurr)) ? 1 : 0);

            /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample1' */
        }

        /* End of Switch: '<S34>/Switch2' */
        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample' */

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample6' */
        /* Outputs for Atomic SubSystem: '<S152>/EdgeRising' */
        /* Logic: '<S162>/AND' incorporates:
         *  Logic: '<S162>/OR1'
         *  UnitDelay: '<S162>/Unit Delay'
         */
        Merge22 = (Merge30 && (!DCCR_ac_DW.UnitDelay_DSTATE_n));

        /* Update for UnitDelay: '<S162>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_n = Merge30;

        /* End of Outputs for SubSystem: '<S152>/EdgeRising' */

        /* Switch: '<S152>/Switch1' incorporates:
         *  Constant: '<S108>/Calib'
         *  Constant: '<S152>/Constant Value'
         *  Logic: '<S152>/OR'
         *  Logic: '<S152>/OR1'
         *  MinMax: '<S152>/Minimum'
         *  Sum: '<S152>/Summation'
         *  UnitDelay: '<S152>/Unit Delay'
         */
        if ((!Merge30) || Merge22)
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Constant: '<S152>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_DINVoltDiff_Delay < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_k) + 1U)))
        {
            /* MinMax: '<S152>/Minimum' incorporates:
             *  Constant: '<S108>/Calib'
             *  Switch: '<S152>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_DINVoltDiff_Delay;
        }
        else
        {
            /* Switch: '<S152>/Switch1' incorporates:
             *  Constant: '<S152>/Constant Value'
             *  MinMax: '<S152>/Minimum'
             *  Sum: '<S152>/Summation'
             *  UnitDelay: '<S152>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_k) + 1U);
        }

        /* End of Switch: '<S152>/Switch1' */

        /* Logic: '<S152>/AND' incorporates:
         *  Constant: '<S108>/Calib'
         *  RelationalOperator: '<S152>/Greater  Than'
         */
        VeDCCR_b_VoltDiffFlag = (Merge30 && (Merge13 >=
            KeDCCR_Cnt_DINVoltDiff_Delay));

        /* Update for UnitDelay: '<S152>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_k = Merge13;

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample6' */

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample7' */
        /* Outputs for Atomic SubSystem: '<S153>/EdgeRising' */
        /* Logic: '<S163>/AND' incorporates:
         *  Logic: '<S163>/OR1'
         *  UnitDelay: '<S163>/Unit Delay'
         */
        Merge22 = (Merge28 && (!DCCR_ac_DW.UnitDelay_DSTATE_jx));

        /* Update for UnitDelay: '<S163>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_jx = Merge28;

        /* End of Outputs for SubSystem: '<S153>/EdgeRising' */

        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S113>/Calib'
         *  Constant: '<S153>/Constant Value'
         *  Logic: '<S153>/OR'
         *  Logic: '<S153>/OR1'
         *  MinMax: '<S153>/Minimum'
         *  Sum: '<S153>/Summation'
         *  UnitDelay: '<S153>/Unit Delay'
         */
        if ((!Merge28) || Merge22)
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S153>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_ISOVoltDiff_Delay < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_c) + 1U)))
        {
            /* MinMax: '<S153>/Minimum' incorporates:
             *  Constant: '<S113>/Calib'
             *  Switch: '<S153>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_ISOVoltDiff_Delay;
        }
        else
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S153>/Constant Value'
             *  MinMax: '<S153>/Minimum'
             *  Sum: '<S153>/Summation'
             *  UnitDelay: '<S153>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_c) + 1U);
        }

        /* End of Switch: '<S153>/Switch1' */

        /* Logic: '<S153>/AND' incorporates:
         *  Constant: '<S113>/Calib'
         *  RelationalOperator: '<S153>/Greater  Than'
         */
        Merge22 = (Merge28 && (Merge13 >= KeDCCR_Cnt_ISOVoltDiff_Delay));

        /* Update for UnitDelay: '<S153>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_c = Merge13;

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample7' */

        /* Switch: '<S37>/Switch' incorporates:
         *  Logic: '<S37>/Logical2'
         */
        if ((VeDCCR_b_V2GMode_EMEA) || rtb_TmpSignalConversionAtVeVTHR)
        {
            /* Switch: '<S37>/Switch' incorporates:
             *  Gain: '<S37>/Gain'
             */
            rtb_Switch_m = -rtb_Switch_m;
        }
        else
        {
            /* Switch: '<S37>/Switch' incorporates:
             *  Constant: '<S182>/Calib'
             */
            rtb_Switch_m = KeDCCR_I_EVMax_I_Limit;
        }

        /* End of Switch: '<S37>/Switch' */
        /* End of Outputs for SubSystem: '<S4>/DC_Charging' */
        (void)Rte_Read_VeIDCR_I_EVSEMinCurrLmt_Value(&Merge7);

        /* Outputs for IfAction SubSystem: '<S4>/DC_Charging' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* RelationalOperator: '<S34>/BiggerThan3' incorporates:
         *  Inport: '<Root>/VeIDCR_I_EVSEMinCurrLmt'
         */
        Merge27 = (rtb_Switch_m >= Merge7);

        /* Outputs for Atomic SubSystem: '<S34>/Turn On Delay Sample5' */
        /* Outputs for Atomic SubSystem: '<S151>/EdgeRising' */
        /* Logic: '<S161>/AND' incorporates:
         *  Logic: '<S161>/OR1'
         *  UnitDelay: '<S161>/Unit Delay'
         */
        Merge28 = (Merge27 && (!DCCR_ac_DW.UnitDelay_DSTATE_e));

        /* Update for UnitDelay: '<S161>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_e = Merge27;

        /* End of Outputs for SubSystem: '<S151>/EdgeRising' */

        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S107>/Calib'
         *  Constant: '<S151>/Constant Value'
         *  Logic: '<S151>/OR'
         *  Logic: '<S151>/OR1'
         *  MinMax: '<S151>/Minimum'
         *  Sum: '<S151>/Summation'
         *  UnitDelay: '<S151>/Unit Delay'
         */
        if ((!Merge27) || Merge28)
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S151>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_CurrentLimitDebounce < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
        {
            /* MinMax: '<S151>/Minimum' incorporates:
             *  Constant: '<S107>/Calib'
             *  Switch: '<S151>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_CurrentLimitDebounce;
        }
        else
        {
            /* Switch: '<S151>/Switch1' incorporates:
             *  Constant: '<S151>/Constant Value'
             *  MinMax: '<S151>/Minimum'
             *  Sum: '<S151>/Summation'
             *  UnitDelay: '<S151>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_f) + 1U);
        }

        /* End of Switch: '<S151>/Switch1' */

        /* Logic: '<S151>/AND' incorporates:
         *  Constant: '<S107>/Calib'
         *  RelationalOperator: '<S151>/Greater  Than'
         */
        Merge27 = (Merge27 && (Merge13 >= KeDCCR_Cnt_CurrentLimitDebounce));

        /* Update for UnitDelay: '<S151>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_f = Merge13;

        /* End of Outputs for SubSystem: '<S34>/Turn On Delay Sample5' */

        /* Abs: '<S11>/Abs' */
        Merge7 = fabsf(VeDCCR_I_EVSEOutputCurr);

        /* Switch: '<S32>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         */
        if (KeDCCR_b_SwtchblBttryPckEnbl)
        {
            /* Switch: '<S81>/Switch1' incorporates:
             *  Switch: '<S81>/Switch7'
             */
            if (VeDCCR_b_ChrgTypeCmd_400)
            {
                /* Switch: '<S32>/Switch1' incorporates:
                 *  Constant: '<S80>/Constant'
                 *  Switch: '<S81>/Switch1'
                 */
                VeDCCR_e_DC_ChargeType_Cmd_test = CeOBCR_e_DC_ChrgType_400V;
            }
            else if (VeDCCR_b_ChrgTypeCmd_800)
            {
                /* Switch: '<S81>/Switch7' incorporates:
                 *  Constant: '<S77>/Constant'
                 *  Switch: '<S32>/Switch1'
                 *  Switch: '<S81>/Switch1'
                 */
                VeDCCR_e_DC_ChargeType_Cmd_test = CeOBCR_e_DC_ChrgType_800V;
            }
            else
            {
                /* Switch: '<S32>/Switch1' incorporates:
                 *  Constant: '<S89>/Calib'
                 *  Switch: '<S81>/Switch1'
                 *  Switch: '<S81>/Switch7'
                 */
                VeDCCR_e_DC_ChargeType_Cmd_test = KeDCCR_e_DC_ChrgTypeCmd_Def;
            }

            /* End of Switch: '<S81>/Switch1' */
        }
        else
        {
            /* Switch: '<S32>/Switch1' incorporates:
             *  Constant: '<S90>/Calib'
             */
            VeDCCR_e_DC_ChargeType_Cmd_test = KeDCCR_e_DC_ChrgTypeCmd_Def;
        }

        /* End of Switch: '<S32>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S216>/EdgeRising' */
        /* UnitDelay: '<S229>/Unit Delay' incorporates:
         *  UnitDelay: '<S221>/Unit Delay'
         */
        Merge31 = DCCR_ac_DW.UnitDelay_DSTATE_l;

        /* Update for UnitDelay: '<S221>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_l = VeDCCR_b_EVSEPwrLmtAchvd;

        /* Switch: '<S216>/Switch1' incorporates:
         *  Constant: '<S211>/Calib'
         *  Constant: '<S216>/Constant Value'
         *  Logic: '<S216>/OR'
         *  Logic: '<S216>/OR1'
         *  Logic: '<S221>/AND'
         *  Logic: '<S221>/OR1'
         *  MinMax: '<S216>/Minimum'
         *  Sum: '<S216>/Summation'
         *  UnitDelay: '<S216>/Unit Delay'
         */
        if ((!VeDCCR_b_EVSEPwrLmtAchvd) || ((VeDCCR_b_EVSEPwrLmtAchvd) &&
                (!Merge31)))
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value1'
             */
            Merge13 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_EVSELimAchivd < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_a) + 1U)))
        {
            /* MinMax: '<S216>/Minimum' incorporates:
             *  Constant: '<S211>/Calib'
             *  Switch: '<S216>/Switch1'
             */
            Merge13 = KeDCCR_Cnt_Dbnc_EVSELimAchivd;
        }
        else
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Constant: '<S216>/Constant Value'
             *  MinMax: '<S216>/Minimum'
             *  Sum: '<S216>/Summation'
             *  UnitDelay: '<S216>/Unit Delay'
             */
            Merge13 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_a) + 1U);
        }

        /* End of Switch: '<S216>/Switch1' */
        /* End of Outputs for SubSystem: '<S216>/EdgeRising' */

        /* Update for UnitDelay: '<S216>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_a = Merge13;

        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample1' */

        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample2' */
        /* Outputs for Atomic SubSystem: '<S217>/EdgeRising' */
        /* UnitDelay: '<S229>/Unit Delay' incorporates:
         *  UnitDelay: '<S222>/Unit Delay'
         */
        Merge31 = DCCR_ac_DW.UnitDelay_DSTATE_cw;

        /* Update for UnitDelay: '<S222>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_cw = VeDCCR_b_EVSEVoltLmtAchvd;

        /* Switch: '<S217>/Switch1' incorporates:
         *  Constant: '<S211>/Calib'
         *  Constant: '<S217>/Constant Value'
         *  Logic: '<S217>/OR'
         *  Logic: '<S217>/OR1'
         *  Logic: '<S222>/AND'
         *  Logic: '<S222>/OR1'
         *  MinMax: '<S217>/Minimum'
         *  Sum: '<S217>/Summation'
         *  UnitDelay: '<S217>/Unit Delay'
         */
        if ((!VeDCCR_b_EVSEVoltLmtAchvd) || ((VeDCCR_b_EVSEVoltLmtAchvd) &&
                (!Merge31)))
        {
            /* Switch: '<S217>/Switch1' incorporates:
             *  Constant: '<S217>/Constant Value1'
             */
            Merge46 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_EVSELimAchivd < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_ox) + 1U)))
        {
            /* MinMax: '<S217>/Minimum' incorporates:
             *  Constant: '<S211>/Calib'
             *  Switch: '<S217>/Switch1'
             */
            Merge46 = KeDCCR_Cnt_Dbnc_EVSELimAchivd;
        }
        else
        {
            /* Switch: '<S217>/Switch1' incorporates:
             *  Constant: '<S217>/Constant Value'
             *  MinMax: '<S217>/Minimum'
             *  Sum: '<S217>/Summation'
             *  UnitDelay: '<S217>/Unit Delay'
             */
            Merge46 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_ox) + 1U);
        }

        /* End of Switch: '<S217>/Switch1' */
        /* End of Outputs for SubSystem: '<S217>/EdgeRising' */

        /* Update for UnitDelay: '<S217>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_ox = Merge46;

        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample2' */

        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S215>/EdgeRising' */
        /* UnitDelay: '<S229>/Unit Delay' incorporates:
         *  UnitDelay: '<S220>/Unit Delay'
         */
        Merge31 = DCCR_ac_DW.UnitDelay_DSTATE_i;

        /* Update for UnitDelay: '<S220>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_i = VeDCCR_b_EVSECurrLmtAchvd;

        /* Switch: '<S215>/Switch1' incorporates:
         *  Constant: '<S211>/Calib'
         *  Constant: '<S215>/Constant Value'
         *  Logic: '<S215>/OR'
         *  Logic: '<S215>/OR1'
         *  Logic: '<S220>/AND'
         *  Logic: '<S220>/OR1'
         *  MinMax: '<S215>/Minimum'
         *  Sum: '<S215>/Summation'
         *  UnitDelay: '<S215>/Unit Delay'
         */
        if ((!VeDCCR_b_EVSECurrLmtAchvd) || ((VeDCCR_b_EVSECurrLmtAchvd) &&
                (!Merge31)))
        {
            /* Switch: '<S215>/Switch1' incorporates:
             *  Constant: '<S215>/Constant Value1'
             */
            rtb_Switch1_ij = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_EVSELimAchivd < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_mh) + 1U)))
        {
            /* MinMax: '<S215>/Minimum' incorporates:
             *  Constant: '<S211>/Calib'
             *  Switch: '<S215>/Switch1'
             */
            rtb_Switch1_ij = KeDCCR_Cnt_Dbnc_EVSELimAchivd;
        }
        else
        {
            /* Switch: '<S215>/Switch1' incorporates:
             *  Constant: '<S215>/Constant Value'
             *  MinMax: '<S215>/Minimum'
             *  Sum: '<S215>/Summation'
             *  UnitDelay: '<S215>/Unit Delay'
             */
            rtb_Switch1_ij = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_mh) +
                1U);
        }

        /* End of Switch: '<S215>/Switch1' */
        /* End of Outputs for SubSystem: '<S215>/EdgeRising' */

        /* Update for UnitDelay: '<S215>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_mh = rtb_Switch1_ij;

        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample' */

        /* Logic: '<S12>/Logical2' incorporates:
         *  Chart: '<S11>/DC_Charging'
         *  Logic: '<S12>/Logical1'
         */
        Merge39 = !VeDCCR_b_InFieldMode;

        /* Logic: '<S12>/Logical' incorporates:
         *  Constant: '<S231>/Constant'
         *  DataStoreRead: '<S12>/Data Store Read1'
         *  Logic: '<S12>/Logical2'
         *  RelationalOperator: '<S12>/Comparison4'
         *  RelationalOperator: '<S12>/Comparison6'
         */
        VeDCCR_b_DCChrgEOL_TestActv = ((Merge39 && (((uint32)
            rtb_TmpSignalConversionAtVeOB_i) == CeOBCR_e_DC)) && (((sint32)
            AeDCCR_y_DCChrgTestSts) != 2));

        /* Outputs for Atomic SubSystem: '<S12>/ClosedInterval' */
        /* Logic: '<S226>/Logical Operator' incorporates:
         *  Constant: '<S235>/Calib'
         *  Constant: '<S236>/Calib'
         *  RelationalOperator: '<S226>/Relatonal Operator'
         *  RelationalOperator: '<S226>/Relatonal Operator1'
         */
        VeDCCR_b_DC_EOL_CrntChkTest = ((rtb_TmpSignalConversionAtVeHV_e >=
            KeDCCR_I_DCChrgCrntTest_MinLim) && (rtb_TmpSignalConversionAtVeHV_e <=
            KeDCCR_I_DCChrgCrntTest_MaxLim));

        /* End of Outputs for SubSystem: '<S12>/ClosedInterval' */

        /* Outputs for Atomic SubSystem: '<S12>/Counter Reset  Enabled ' */
        /* Switch: '<S227>/Switch1' incorporates:
         *  Switch: '<S227>/Switch2'
         *  UnitDelay: '<S12>/Unit Delay3'
         */
        if (DCCR_ac_DW.UnitDelay3_DSTATE_h)
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  Constant: '<S227>/Constant Value2'
             */
            rtb_Switch1_l1 = 0U;
        }
        else if (VeDCCR_b_DC_EOL_CrntChkTest)
        {
            /* Switch: '<S227>/Switch2' incorporates:
             *  Constant: '<S227>/Constant Value1'
             *  Sum: '<S227>/Subtraction'
             *  Switch: '<S227>/Switch1'
             *  UnitDelay: '<S227>/Unit Delay'
             */
            rtb_Switch1_l1 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_p) +
                1U);
        }
        else
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  Switch: '<S227>/Switch2'
             *  UnitDelay: '<S227>/Unit Delay'
             */
            rtb_Switch1_l1 = DCCR_ac_DW.UnitDelay_DSTATE_p;
        }

        /* End of Switch: '<S227>/Switch1' */

        /* Update for UnitDelay: '<S227>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_l1;

        /* End of Outputs for SubSystem: '<S12>/Counter Reset  Enabled ' */

        /* RelationalOperator: '<S12>/Comparison1' incorporates:
         *  Constant: '<S234>/Calib'
         */
        VeDCCR_b_DC_EOL_CrntChkPass = (((float32)rtb_Switch1_l1) ==
            KeDCCR_Cnt_DCChrgTest_atEOL);

        /* Logic: '<S71>/Logical' incorporates:
         *  Logic: '<S71>/Logical1'
         *  UnitDelay: '<S71>/Unit Delay5'
         */
        VeDCCR_b_EOLExit = ((VeDCCR_b_DCChrgEOL_TestActv) &&
                            ((DCCR_ac_DW.UnitDelay5_DSTATE) ||
                             (VeDCCR_b_DC_EOL_CrntChkPass)));

        /* Switch: '<S71>/Switch' incorporates:
         *  Constant: '<S214>/Calib'
         */
        Merge28 = ((!KeDCCR_b_EnblStkOpnChk) || (VeDCCR_b_StkOpnChkCmpl));

        /* RelationalOperator: '<S71>/Comparison3' incorporates:
         *  Constant: '<S71>/Constant Value5'
         */
        Merge30 = (VeDCCR_I_EVSEMaxCurrLmt < 0.0F);

        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample3' */
        /* Outputs for Atomic SubSystem: '<S218>/EdgeRising' */
        /* Logic: '<S223>/AND' incorporates:
         *  Logic: '<S223>/OR1'
         *  UnitDelay: '<S223>/Unit Delay'
         */
        Merge31 = (Merge30 && (!DCCR_ac_DW.UnitDelay_DSTATE_d));

        /* Update for UnitDelay: '<S223>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_d = Merge30;

        /* End of Outputs for SubSystem: '<S218>/EdgeRising' */

        /* Switch: '<S218>/Switch1' incorporates:
         *  Constant: '<S212>/Calib'
         *  Constant: '<S218>/Constant Value'
         *  Logic: '<S218>/OR'
         *  Logic: '<S218>/OR1'
         *  MinMax: '<S218>/Minimum'
         *  Sum: '<S218>/Summation'
         *  UnitDelay: '<S218>/Unit Delay'
         */
        if ((!Merge30) || Merge31)
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S218>/Constant Value1'
             */
            rtb_Switch1_l1 = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2H < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_o) + 1U)))
        {
            /* MinMax: '<S218>/Minimum' incorporates:
             *  Constant: '<S212>/Calib'
             *  Switch: '<S218>/Switch1'
             */
            rtb_Switch1_l1 = KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2H;
        }
        else
        {
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S218>/Constant Value'
             *  MinMax: '<S218>/Minimum'
             *  Sum: '<S218>/Summation'
             *  UnitDelay: '<S218>/Unit Delay'
             */
            rtb_Switch1_l1 = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_o) +
                1U);
        }

        /* End of Switch: '<S218>/Switch1' */
        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample3' */
        /* End of Outputs for SubSystem: '<S4>/DC_Charging' */
        (void)Rte_Read_VeIDCR_P_EVSEMaxPwrLmt_Value(&Merge51);

        /* Outputs for IfAction SubSystem: '<S4>/DC_Charging' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample3' */
        /* Update for UnitDelay: '<S218>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeIDCR_P_EVSEMaxPwrLmt'
         */
        DCCR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_l1;

        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample3' */

        /* RelationalOperator: '<S71>/Comparison1' incorporates:
         *  Constant: '<S71>/Constant Value1'
         */
        Merge31 = (Merge51 < 0.0F);

        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample4' */
        /* Outputs for Atomic SubSystem: '<S219>/EdgeRising' */
        /* Logic: '<S224>/AND' incorporates:
         *  Logic: '<S224>/OR1'
         *  UnitDelay: '<S224>/Unit Delay'
         */
        Merge32 = (Merge31 && (!DCCR_ac_DW.UnitDelay_DSTATE_j));

        /* Update for UnitDelay: '<S224>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_j = Merge31;

        /* End of Outputs for SubSystem: '<S219>/EdgeRising' */

        /* Switch: '<S219>/Switch1' incorporates:
         *  Constant: '<S213>/Calib'
         *  Constant: '<S219>/Constant Value'
         *  Logic: '<S219>/OR'
         *  Logic: '<S219>/OR1'
         *  MinMax: '<S219>/Minimum'
         *  Sum: '<S219>/Summation'
         *  UnitDelay: '<S219>/Unit Delay'
         */
        if ((!Merge31) || Merge32)
        {
            /* Switch: '<S219>/Switch1' incorporates:
             *  Constant: '<S219>/Constant Value1'
             */
            rtb_Switch1_m = 0U;
        }
        else if (KeDCCR_Cnt_Dbnc_EVSEMaxPwrLimV2H < ((uint16)(((uint32)
                    DCCR_ac_DW.UnitDelay_DSTATE_h) + 1U)))
        {
            /* MinMax: '<S219>/Minimum' incorporates:
             *  Constant: '<S213>/Calib'
             *  Switch: '<S219>/Switch1'
             */
            rtb_Switch1_m = KeDCCR_Cnt_Dbnc_EVSEMaxPwrLimV2H;
        }
        else
        {
            /* Switch: '<S219>/Switch1' incorporates:
             *  Constant: '<S219>/Constant Value'
             *  MinMax: '<S219>/Minimum'
             *  Sum: '<S219>/Summation'
             *  UnitDelay: '<S219>/Unit Delay'
             */
            rtb_Switch1_m = (uint16)(((uint32)DCCR_ac_DW.UnitDelay_DSTATE_h) +
                1U);
        }

        /* End of Switch: '<S219>/Switch1' */

        /* Update for UnitDelay: '<S219>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_m;

        /* Outputs for Atomic SubSystem: '<S71>/Turn On Delay Sample3' */
        /* Logic: '<S71>/Logical2' incorporates:
         *  Constant: '<S212>/Calib'
         *  Constant: '<S213>/Calib'
         *  Logic: '<S218>/AND'
         *  Logic: '<S219>/AND'
         *  RelationalOperator: '<S218>/Greater  Than'
         *  RelationalOperator: '<S219>/Greater  Than'
         */
        Merge30 = ((Merge30 && (rtb_Switch1_l1 >=
                                KeDCCR_Cnt_Dbnc_EVSEMaxCrntLimV2H)) && (Merge31 &&
                    (rtb_Switch1_m >= KeDCCR_Cnt_Dbnc_EVSEMaxPwrLimV2H)));

        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample3' */
        /* End of Outputs for SubSystem: '<S71>/Turn On Delay Sample4' */

        /* Chart: '<S11>/DC_Charging' incorporates:
         *  Inport: '<Root>/VeIDCR_b_PlugAndChargeReq'
         *  Inport: '<Root>/VeIDCR_t_ISO15118_NotificationMaxDelay'
         *  Inport: '<Root>/VeVTHR_b_Rdy4shutdown'
         *  Switch: '<S5>/Switch45'
         *  Switch: '<S5>/Switch46'
         *  Switch: '<S5>/Switch98'
         *  UnitDelay: '<S11>/Unit Delay4'
         */
        /* Gateway: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Charging */
        DCCR_ac_DW.V2GMode_EMEA_prev = DCCR_ac_DW.V2GMode_EMEA_start;
        DCCR_ac_DW.V2GMode_EMEA_start = VeDCCR_b_V2GMode_EMEA;

        /* During: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Charging */
        if (((uint32)DCCR_ac_DW.is_active_c3_DCCR_ac) == 0U)
        {
            DCCR_ac_DW.V2GMode_EMEA_prev = VeDCCR_b_V2GMode_EMEA;

            /* Entry: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Charging */
            DCCR_ac_DW.is_active_c3_DCCR_ac = 1U;

            /* Entry Internal: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_Charging */
            /* Transition: '<S33>:2' */
            DCCR_ac_B.PnC_RetryCnt = 0U;
            DCCR_ac_B.PnCRetryFail = false;
            DCCR_ac_B.PnCFailure = false;
            DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_ASSOCIATION;

            /* Entry 'ASSOCIATION': '<S33>:1' */
            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit;
            DCCR_ac_B.DC_StateTimer = 0.0F;
            DCCR_ac_B.HCP_SessionStopCmd = false;
            DCCR_ac_B.HCP_WeldChckComplete = false;
            DCCR_ac_B.ReadyToChargeState = false;
            DCCR_ac_B.DCChargeInit = false;
        }
        else
        {
            (void)Rte_Read_VeVTHR_b_Rdy4shutdown_Value(&Merge34);
            (void)Rte_Read_VeIDCR_t_ISO15118_NotificationMaxDelay_Value(&Merge6);
            guard1 = false;
            guard2 = false;
            switch (DCCR_ac_DW.is_c3_DCCR_ac)
            {
              case DCCR_ac_IN_ASSOCIATION:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit;
                DCCR_ac_B.HCP_SessionStopCmd = false;
                DCCR_ac_B.ReadyToChargeState = false;
                DCCR_ac_B.DCChargeInit = false;

                /* During 'ASSOCIATION': '<S33>:1' */
                if (((((VeDCCR_b_IDCM_DCCA) && (((sint32)VeDCCR_e_SLACSts) == 2))
                      && (!VeDCCR_b_EVCC_FailureSts)) && (((uint32)
                        DCCR_ac_DW.UnitDelay4_DSTATE_o) == CeOBCR_e_DCChrg_Wait))
                    && (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:12' */
                    if (KeDCCR_b_Enable_PNC)
                    {
                        /* Transition: '<S33>:2141' */
                        DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_PnC_SeqStart;

                        /* Entry 'PnC_SeqStart': '<S33>:2059' */
                        DCCR_ac_B.DCChrgStat = CeOBCR_e_PnCstart;
                        DCCR_ac_B.DC_StateTimer = 0.0F;
                        DCCR_ac_B.ChargeProgress = CeOBCR_e_No_Request;
                        DCCR_ac_DW.PnC_abortReason = 0U;
                        DCCR_ac_B.NoRetryFlag = true;
                        DCCR_ac_DW.checkS2 = false;
                        DCCR_ac_DW.checkEVSEst = false;
                        DCCR_ac_B.PnCFailure = false;
                    }
                    else
                    {
                        /* Transition: '<S33>:1770' */
                        if (((sint32)VeDCCR_e_SDP_Sts) == 1)
                        {
                            /* Transition: '<S33>:1771' */
                            DCCR_ac_DW.is_c3_DCCR_ac =
                                DCCR_ac_IN_Initi_isol_prechrg;

                            /* Entry Internal 'Initi_isol_prechrg': '<S33>:11' */
                            /* Transition: '<S33>:23' */
                            DCCR_ac_DW.is_Initi_isol_prechrg =
                                DCCR_ac_IN_InitStat1;

                            /* Entry 'InitStat1': '<S33>:22' */
                            DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit1;
                            DCCR_ac_B.DC_StateTimer = 0.0F;
                            DCCR_ac_B.DCChargeInit = true;
                        }
                        else
                        {
                            DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                        }
                    }
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_CurrentDemand:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCCrntDmd;
                DCCR_ac_B.EVReady_c = true;

                /* During 'CurrentDemand': '<S33>:171' */
                if (VeDCCR_b_TCPCommTerminated)
                {
                    /* Transition: '<S33>:1419' */
                    DCCR_ac_B.DCexitReason_j = 2;

                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (((((VeDCCR_b_EVSECurrLmtAchvd) && (rtb_Switch1_ij >=
                             KeDCCR_Cnt_Dbnc_EVSELimAchivd)) &&
                           ((VeDCCR_b_EVSEVoltLmtAchvd) && (Merge46 >=
                             KeDCCR_Cnt_Dbnc_EVSELimAchivd))) &&
                          ((VeDCCR_b_EVSEPwrLmtAchvd) && (Merge13 >=
                            KeDCCR_Cnt_Dbnc_EVSELimAchivd))) &&
                         (KeDCCR_b_DC_LimEnable))
                {
                    /* Transition: '<S33>:835' */
                    DCCR_ac_B.DCexitReason_j = 10;

                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if ((!VeDCCR_b_ChargeReq) && (KeDCCR_b_AllowUIS))
                {
                    /* Transition: '<S33>:1459' */
                    DCCR_ac_B.DCexitReason_j = 22;

                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (!DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_E)
                {
                    /* Transition: '<S33>:1086' */
                    DCCR_ac_B.DCexitReason_j = 4;

                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (!DCCR_ac_B.TmpSignalConversionAtVeIDCR_b_J)
                {
                    /* Transition: '<S33>:832' */
                    DCCR_ac_B.DCexitReason_j = 1;

                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (VeDCCR_b_DC_TimeOut)
                {
                    /* Transition: '<S33>:282' */
                    DCCR_ac_B.DCexitReason_j = 3;

                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (Merge21)
                {
                    /* Transition: '<S33>:1187' */
                    DCCR_ac_B.DCexitReason_j = 7;

                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (DCCR_ac_DW.UnitDelay1_DSTATE_n)
                {
                    /* Transition: '<S33>:215' */
                    DCCR_ac_B.DCexitReason_j = 5;

                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (((((uint32)VeDCCR_e_EVSEIsolSts) !=
                           CeIDCR_e_EVSEIsolSts_Valid_Safe) && (((uint32)
                            VeDCCR_e_EVSEIsolSts) !=
                           CeIDCR_e_EVSEIsolSts_Warning)) || (((uint32)
                           VeDCCR_e_EVSEStsCode) !=
                          CeIDCR_e_EVSEStsCode_ChrgrRdyChrgng))
                {
                    /* Transition: '<S33>:222' */
                    DCCR_ac_B.DCexitReason_j = 9;

                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if ((((uint32)VeDCCR_e_TxMsgStat) != CeIDCR_e_CurrDmndReq) &&
                         (DCCR_ac_B.DC_ChargeTimer > KeDCCR_t_PwrDlvryDelay))
                {
                    /* Transition: '<S33>:1231' */
                    DCCR_ac_B.DCexitReason_j = 8;

                    /* Transition: '<S33>:1461' */
                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (Merge39 && (VeDCCR_b_EOLExit))
                {
                    /* Transition: '<S33>:1474' */
                    DCCR_ac_B.DCexitReason_j = 23;

                    /* Transition: '<S33>:1475' */
                    /* Transition: '<S33>:1461' */
                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if ((DCCR_ac_DW.V2GMode_EMEA_prev !=
                          DCCR_ac_DW.V2GMode_EMEA_start) &&
                         (DCCR_ac_DW.V2GMode_EMEA_prev))
                {
                    /* Transition: '<S33>:1689' */
                    DCCR_ac_B.DCexitReason_j = 24;

                    /* Transition: '<S33>:1690' */
                    /* Transition: '<S33>:1475' */
                    /* Transition: '<S33>:1461' */
                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (VeDCCR_b_EVCC_FailureSts)
                {
                    /* Transition: '<S33>:1750' */
                    DCCR_ac_B.DCexitReason_j = 29;

                    /* Transition: '<S33>:1751' */
                    /* Transition: '<S33>:1690' */
                    /* Transition: '<S33>:1475' */
                    /* Transition: '<S33>:1461' */
                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if (!Merge27)
                {
                    /* Transition: '<S33>:2040' */
                    DCCR_ac_B.DCexitReason_j = 31;

                    /* Transition: '<S33>:2038' */
                    /* Transition: '<S33>:1751' */
                    /* Transition: '<S33>:1690' */
                    /* Transition: '<S33>:1475' */
                    /* Transition: '<S33>:1461' */
                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else if ((((uint32)VeDCCR_e_EVSENotification) ==
                          CeIDCR_e_StopCharging) && (DCCR_ac_B.DC_StateTimer >
                          Merge6))
                {
                    /* Transition: '<S33>:2199' */
                    /* Transition: '<S33>:2192' */
                    /* Transition: '<S33>:2193' */
                    /* Transition: '<S33>:2190' */
                    /* Transition: '<S33>:2194' */
                    /* Transition: '<S33>:2183' */
                    /* Transition: '<S33>:2172' */
                    /* Transition: '<S33>:2156' */
                    /* Transition: '<S33>:2171' */
                    /* Transition: '<S33>:2163' */
                    /* Transition: '<S33>:2180' */
                    /* Transition: '<S33>:2170' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    guard1 = true;
                }
                else if ((KeDCCR_b_ISO_RenegAllwd) && ((((uint32)
                            VeDCCR_e_EVSENotification) == CeIDCR_e_ReNegotiation)
                          && (DCCR_ac_B.DC_StateTimer > Merge6)))
                {
                    /* Transition: '<S33>:2186' */
                    /* Transition: '<S33>:2187' */
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_Renegotiation;

                    /* Entry 'Renegotiation': '<S33>:2041' */
                    /* temporary solution */
                    DCCR_ac_B.ChargeProgress = CeOBCR_e_Renegotiation;
                }
                else if (Merge34 || (DCCR_ac_B.DC_StateTimer >
                                     KeDCCR_t_V2HMaxTime))
                {
                    /* Transition: '<S33>:2242' */
                    DCCR_ac_B.DCexitReason_j = 32;

                    /* Transition: '<S33>:2241' */
                    /* Transition: '<S33>:2038' */
                    /* Transition: '<S33>:1751' */
                    /* Transition: '<S33>:1690' */
                    /* Transition: '<S33>:1475' */
                    /* Transition: '<S33>:1461' */
                    /* Transition: '<S33>:1462' */
                    /* Transition: '<S33>:1463' */
                    /* Transition: '<S33>:1464' */
                    /* Transition: '<S33>:1465' */
                    /* Transition: '<S33>:1466' */
                    /* Transition: '<S33>:1467' */
                    /* Transition: '<S33>:1468' */
                    /* Transition: '<S33>:1469' */
                    /* Transition: '<S33>:1470' */
                    /* Transition: '<S33>:1718' */
                    /* Transition: '<S33>:1747' */
                    /* Transition: '<S33>:1741' */
                    /* Transition: '<S33>:1720' */
                    /* Transition: '<S33>:1719' */
                    /* Transition: '<S33>:1679' */
                    /* Transition: '<S33>:1403' */
                    /* Transition: '<S33>:1455' */
                    /* Transition: '<S33>:967' */
                    /* Transition: '<S33>:324' */
                    guard1 = true;
                }
                else
                {
                    DCCR_ac_B.DC_ChargeTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_Initi_isol_prechrg:
                DCCR_ac_Initi_isol_prechrg(&Merge27, &Merge28, &Switch91,
                    &Switch92);
                break;

              case DCCR_a_IN_PnC_Init_Isol_Prechrg:
                DCCR_ac_PnC_Init_Isol_Prechrg(&Merge30, &Merge22, &Merge28);
                break;

              case DCCR_ac_IN_PnC_Retry:
                /* During 'PnC_Retry': '<S33>:2125' */
                if ((DCCR_ac_B.PnC_RetryCnt < KeDCCR_k_PnCMaxRetry) &&
                        (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2136' */
                    /* {DCexitReason = uint8(80)+PnC_abortReason;} */
                    guard2 = true;
                }
                else if ((DCCR_ac_B.PnC_RetryCnt >= KeDCCR_k_PnCMaxRetry) &&
                         (DCCR_ac_B.DC_StateTimer > KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2132' */
                    DCCR_ac_B.PnCRetryFail = true;

                    /* DCexitReason = uint8(80)+PnC_abortReason;} */
                    guard2 = true;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_PnC_SeqStart:
                DCCR_ac_B.DCChrgStat = CeOBCR_e_PnCstart;

                /* During 'PnC_SeqStart': '<S33>:2059' */
                (void)Rte_Read_VeIDCR_b_PlugAndChargeReq_Value(&Merge8);
                if (Merge8 && (DCCR_ac_B.DC_StateTimer >
                               KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2143' */
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_Protocol_Selection;
                    DCCR_ac_DW.is_Protocol_Selection = DCCR_ac_IN_PnC_Active;

                    /* Entry 'PnC_Active': '<S33>:2042' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_TLSconn;
                    DCCR_ac_B.HVCM_SelectedSecProtocol = true;
                }
                else if ((!Merge8) && (DCCR_ac_B.DC_StateTimer >
                                       KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2145' */
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_Protocol_Selection;
                    DCCR_ac_DW.is_Protocol_Selection = DCCR_ac_IN_PnC_Disabled;

                    /* Entry 'PnC_Disabled': '<S33>:2047' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_TLSconn;
                    DCCR_ac_B.HVCM_SelectedSecProtocol = false;
                }
                else if ((VeDCCR_b_EVCC_FailureSts) || (!VeDCCR_b_IDCM_DCCA))
                {
                    /* Transition: '<S33>:2133' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_Protocol_Selection:
                DCCR_ac_Protocol_Selection();
                break;

              case DCCR_ac_IN_Renegotiation:
                /* During 'Renegotiation': '<S33>:2041' */
                if ((Merge7 == 0.0F) && (DCCR_ac_B.DC_StateTimer >
                                         KeDCCR_t_DC_MinTimeDelay))
                {
                    /* Transition: '<S33>:2189' */
                    /* check if current reaches zero */
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_a_IN_PnC_Init_Isol_Prechrg;

                    /* Entry Internal 'PnC_Init_Isol_Prechrg': '<S33>:2060' */
                    /* Transition: '<S33>:2075' */
                    DCCR_ac_DW.is_PnC_Init_Isol_Prechrg =
                        DCCR_ac_IN_PnC_SuppAppProt;

                    /* Entry 'PnC_SuppAppProt': '<S33>:2114' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_PnC_SuppAppProt;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                    DCCR_ac_B.DCChargeInit = true;
                }
                else if ((((uint32)VeDCCR_e_EVSENotification) !=
                          CeIDCR_e_ReNegotiation) && (DCCR_ac_B.DC_StateTimer >
                          Merge6))
                {
                    /* Transition: '<S33>:2185' */
                    /* {DCexitReason = int16();} */
                    /* Transition: '<S33>:2190' */
                    /* Transition: '<S33>:2194' */
                    /* Transition: '<S33>:2183' */
                    /* Transition: '<S33>:2172' */
                    /* Transition: '<S33>:2156' */
                    /* Transition: '<S33>:2171' */
                    /* Transition: '<S33>:2163' */
                    /* Transition: '<S33>:2180' */
                    /* Transition: '<S33>:2170' */
                    /* Transition: '<S33>:2174' */
                    /* Transition: '<S33>:2160' */
                    /* Transition: '<S33>:2179' */
                    /* Transition: '<S33>:2158' */
                    /* Transition: '<S33>:2142' */
                    /* Transition: '<S33>:2147' */
                    /* HVCM_SelectedAppProtocol = CeOBCR_e_DIN;
                       HVCM_SelectedPaymentOptn = CeOBCR_e_ExternalPayment;
                       HVCM_SelectedSecProtocol= boolean(0); */
                    DCCR_ac_B.DCexitReason_j = (sint16)(((sint32)
                        DCCR_ac_DW.PnC_abortReason) + 80);

                    /* Transition: '<S33>:2128' */
                    DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                    /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                    /* Transition: '<S33>:1547' */
                    DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                    DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                    /* Entry 'Shutdownin': '<S33>:1637' */
                    DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                    DCCR_ac_B.DC_StateTimer = 0.0F;
                }
                else
                {
                    DCCR_ac_B.DC_StateTimer += HeDCCR_t_dT;
                }
                break;

              default:
                DCCR_ac_SHUTDOWN(&Merge7);
                break;
            }

            if (guard2)
            {
                /* Transition: '<S33>:2129' */
                DCCR_ac_B.PnC_RetryCnt = (uint8)((sint32)(((sint32)
                    DCCR_ac_B.PnC_RetryCnt) + 1));
                DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_ASSOCIATION;

                /* Entry 'ASSOCIATION': '<S33>:1' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCinit;
                DCCR_ac_B.DC_StateTimer = 0.0F;
                DCCR_ac_B.HCP_SessionStopCmd = false;
                DCCR_ac_B.HCP_WeldChckComplete = false;
                DCCR_ac_B.ReadyToChargeState = false;
                DCCR_ac_B.DCChargeInit = false;
            }

            if (guard1)
            {
                DCCR_ac_DW.is_c3_DCCR_ac = DCCR_ac_IN_SHUTDOWN;

                /* Entry Internal 'SHUTDOWN': '<S33>:1543' */
                /* Transition: '<S33>:1547' */
                DCCR_ac_DW.ShtdwnType = DCCR_ac_ShutdownReas();
                DCCR_ac_DW.is_SHUTDOWN = DCCR_ac_IN_Shutdownin;

                /* Entry 'Shutdownin': '<S33>:1637' */
                DCCR_ac_B.DCChrgStat = CeOBCR_e_DCShtDwn;
                DCCR_ac_B.DC_StateTimer = 0.0F;
            }
        }

        /* UnitDelay: '<S11>/Unit Delay5' */
        UnitDelay5 = DCCR_ac_DW.UnitDelay5_DSTATE_n;

        /* Chart: '<S11>/DC_GBT' incorporates:
         *  Switch: '<S5>/Switch34'
         *  Switch: '<S5>/Switch54'
         *  UnitDelay: '<S11>/Unit Delay5'
         */
        /* Gateway: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_GBT */
        /* During: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_GBT */
        if (((uint32)DCCR_ac_DW.is_active_c13_DCCR_ac) == 0U)
        {
            /* Entry: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_GBT */
            DCCR_ac_DW.is_active_c13_DCCR_ac = 1U;

            /* Entry Internal: DCCR_MedTED/DCCC/DC_Charging/DC_Charging/DC_GBT */
            /* Transition: '<S35>:210' */
            DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_DCGBT_Init;

            /* Entry 'DCGBT_Init': '<S35>:208' */
            DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTinit;
            DCCR_ac_B.DCGBTStateTimer = 0.0F;
            DCCR_ac_B.GBT_ReadyToCharge = false;
            DCCR_ac_B.DCChargeInitialization = false;
            DCCR_ac_B.GBT_EVCharge_Permitting = false;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            guard3 = false;
            switch (DCCR_ac_DW.is_c13_DCCR_ac)
            {
              case DCCR_ac_IN_DCGBT_CurrentDemand:
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTCrntDmd;

                /* During 'DCGBT_CurrentDemand': '<S35>:71' */
                if (!DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_E)
                {
                    /* Transition: '<S35>:116' */
                    DCCR_ac_B.DCexitReason = 50;

                    /* Transition: '<S35>:117' */
                    /* Transition: '<S35>:114' */
                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if (!VeDCCR_b_GBT_EVSEChrgPermitting)
                {
                    /* Transition: '<S35>:126' */
                    DCCR_ac_B.DCexitReason = 59;

                    /* Transition: '<S35>:128' */
                    /* Transition: '<S35>:127' */
                    /* Transition: '<S35>:120' */
                    /* Transition: '<S35>:117' */
                    /* Transition: '<S35>:114' */
                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if ((((uint32)VeDCCR_e_Chrgr_FaultStates) !=
                          CeIDCR_e_GBT_No_FLT) && (((uint32)
                           VeDCCR_e_Chrgr_FaultStates) != CeIDCR_e_Init))
                {
                    /* Transition: '<S35>:106' */
                    DCCR_ac_B.DCexitReason = 56;

                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if (((uint32)VeDCCR_e_TxGBTMsgResponse) == CeIDCR_e_CST)
                {
                    /* Transition: '<S35>:110' */
                    DCCR_ac_B.DCexitReason = 52;

                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if (Merge21)
                {
                    /* Transition: '<S35>:119' */
                    DCCR_ac_B.DCexitReason = 57;

                    /* Transition: '<S35>:120' */
                    /* Transition: '<S35>:117' */
                    /* Transition: '<S35>:114' */
                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if (DCCR_ac_DW.UnitDelay3_DSTATE_b)
                {
                    /* Transition: '<S35>:122' */
                    DCCR_ac_B.DCexitReason = 58;

                    /* Transition: '<S35>:127' */
                    /* Transition: '<S35>:120' */
                    /* Transition: '<S35>:117' */
                    /* Transition: '<S35>:114' */
                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if ((!VeDCCR_b_ChargeReq) && (KeDCCR_b_AllowUIS))
                {
                    /* Transition: '<S35>:112' */
                    DCCR_ac_B.DCexitReason = 51;

                    /* Transition: '<S35>:114' */
                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else if (KeDCCR_b_GBTExitSF)
                {
                    /* Transition: '<S35>:104' */
                    DCCR_ac_B.DCexitReason = 80;
                    guard3 = true;
                }
                else if (VeDCCR_b_DC_Isolation_Sts)
                {
                    /* Transition: '<S35>:213' */
                    DCCR_ac_B.DCexitReason = 67;

                    /* Transition: '<S35>:214' */
                    /* Transition: '<S35>:128' */
                    /* Transition: '<S35>:127' */
                    /* Transition: '<S35>:120' */
                    /* Transition: '<S35>:117' */
                    /* Transition: '<S35>:114' */
                    /* Transition: '<S35>:113' */
                    /* Transition: '<S35>:107' */
                    guard3 = true;
                }
                else
                {
                    DCCR_ac_B.DCGBTChargeTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_DCGBT_Init:
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTinit;
                DCCR_ac_B.GBT_ReadyToCharge = false;
                DCCR_ac_B.DCChargeInitialization = false;
                DCCR_ac_B.GBT_EVCharge_Permitting = false;

                /* During 'DCGBT_Init': '<S35>:208' */
                if ((((((uint32)VeDCCR_e_TxGBTMsgResponse) ==
                        CeIDCR_e_CRM_BMS_Recognized) && (((uint32)
                        DCCR_ac_DW.UnitDelay5_DSTATE_n) == CeOBCR_e_DCChrg_Wait))
                     && (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_DCGBTMinDelay)) &&
                    (DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_j))
                {
                    /* Transition: '<S35>:209' */
                    DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTCommunication;

                    /* Entry Internal 'GBTCommunication': '<S35>:1' */
                    /* Transition: '<S35>:207' */
                    DCCR_ac_DW.is_GBTCommunication = DCCR_ac_IN_DCGBT_ChrgInit;

                    /* Entry 'DCGBT_ChrgInit': '<S35>:11' */
                    DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTChrgInit;
                    DCCR_ac_B.DCGBTStateTimer = 0.0F;
                    DCCR_ac_B.EVReady = false;
                    DCCR_ac_B.DCChargeInitialization = true;
                }
                else
                {
                    DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_GBTCommunication:
                DCCR_ac_GBTCommunication(&UnitDelay5);
                break;

              default:
                /* During 'GBTShutdown': '<S35>:73' */
                switch (DCCR_ac_DW.is_GBTShutdown)
                {
                  case DCCR__IN_DCGBTContactorFastOpen:
                    DCCR_ac_B.DCGBTChrgSysStat =
                        CeOBCR_e_ShtDwnDCGBTCntctrFastOpn;
                    DCCR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_FastOpn;

                    /* During 'DCGBTContactorFastOpen': '<S35>:133' */
                    if (((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) ==
                            CeBPCR_e_DCCntctrSts_Open) &&
                            (DCCR_ac_B.DCGBTStateTimer >
                             KeDCCR_t_GBTShutdwnDelay)) ||
                            (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_GBTIsolTO))
                    {
                        /* Transition: '<S35>:197' */
                        /* Transition: '<S35>:180' */
                        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_DCGBTIsolation;

                        /* Entry 'DCGBTIsolation': '<S35>:134' */
                        DCCR_ac_B.DCGBTChrgSysStat =
                            CeOBCR_e_DCGBTShtDwnIsoDisable;
                        DCCR_ac_B.DCGBTStateTimer = 0.0F;
                    }
                    else
                    {
                        DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                    }
                    break;

                  case DCCR_ac_IN_DCGBTContactorOpen:
                    DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_ShtDwnDCGBTCntctropn;
                    DCCR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_Open;

                    /* During 'DCGBTContactorOpen': '<S35>:132' */
                    if (((((uint32)VeDCCR_e_HVBat_DC_CntctrStat) ==
                            CeBPCR_e_DCCntctrSts_Open) &&
                            (DCCR_ac_B.DCGBTStateTimer >
                             KeDCCR_t_GBTShutdwnDelay)) ||
                            (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_GBTIsolTO))
                    {
                        /* Transition: '<S35>:179' */
                        /* Transition: '<S35>:181' */
                        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_DCGBTIsolation;

                        /* Entry 'DCGBTIsolation': '<S35>:134' */
                        DCCR_ac_B.DCGBTChrgSysStat =
                            CeOBCR_e_DCGBTShtDwnIsoDisable;
                        DCCR_ac_B.DCGBTStateTimer = 0.0F;
                    }
                    else
                    {
                        DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                    }
                    break;

                  case DCCR_ac_IN_DCGBTIsolation:
                    DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwnIsoDisable;

                    /* During 'DCGBTIsolation': '<S35>:134' */
                    if (((!VeDCCR_b_DC_Isolation_Sts) &&
                            (DCCR_ac_B.DCGBTStateTimer >
                             KeDCCR_t_GBTShutdwnDelay)) ||
                            (DCCR_ac_B.DCGBTStateTimer >
                             KeDCCR_t_GBTShtdwnCompTO))
                    {
                        /* Transition: '<S35>:183' */
                        /* Transition: '<S35>:184' */
                        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_DCGBTShtDwnCompl;

                        /* Entry 'DCGBTShtDwnCompl': '<S35>:135' */
                        DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwnCmplt;
                        DCCR_ac_B.DCChargeInitialization = false;
                    }
                    else
                    {
                        DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                    }
                    break;

                  case DCCR_ac_IN_DCGBTShtDwnCompl:
                    DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwnCmplt;
                    DCCR_ac_B.DCChargeInitialization = false;

                    /* During 'DCGBTShtDwnCompl': '<S35>:135' */
                    if (((DCCR_ac_B.ShtdwnTypeGBT == 1) && (((((uint32)
                             VeDCCR_e_TxGBTMsgResponse) ==
                            CeIDCR_e_CRM_BMS_NotRecognized) || (((uint32)
                             VeDCCR_e_TxGBTMsgResponse) ==
                            CeIDCR_e_CRM_BMS_Recognized)) ||
                            (DCCR_ac_B.DCGBTStateTimer >
                             KeDCCR_t_GBTShutDwnDelayCmplt))) ||
                            ((DCCR_ac_B.ShtdwnTypeGBT == 0) &&
                             (DCCR_ac_B.DCGBTStateTimer >
                              KeDCCR_t_GBTShutDwnDelayCmplt)))
                    {
                        /* Transition: '<S35>:188' */
                        /* Transition: '<S35>:191' */
                        /* Transition: '<S35>:189' */
                        /* Transition: '<S35>:192' */
                        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_NO_ACTIVE_CHILD;
                        DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_DCGBT_Init;

                        /* Entry 'DCGBT_Init': '<S35>:208' */
                        DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTinit;
                        DCCR_ac_B.DCGBTStateTimer = 0.0F;
                        DCCR_ac_B.GBT_ReadyToCharge = false;
                        DCCR_ac_B.DCChargeInitialization = false;
                        DCCR_ac_B.GBT_EVCharge_Permitting = false;
                    }
                    else
                    {
                        DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                    }
                    break;

                  case DCCR_ac_IN_ShutdownCurrChk:
                    DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwnCurrCheck;
                    DCCR_ac_B.GBT_ReadyToCharge = false;
                    DCCR_ac_B.EVReady = false;
                    DCCR_ac_B.GBT_EVCharge_Permitting = false;

                    /* During 'ShutdownCurrChk': '<S35>:131' */
                    if (((VeDCCR_K_BusPrsntCurrChk == 1) ||
                            (VeDCCR_K_BusPrsntCurrChk == 2)) &&
                            (DCCR_ac_B.DCGBTStateTimer >
                             KeDCCR_t_GBTShutdwnDelay))
                    {
                        /* Transition: '<S35>:166' */
                        if (DCCR_ac_B.ShtdwnTypeGBT == 0)
                        {
                            /* Transition: '<S35>:168' */
                            guard1 = true;
                        }
                        else
                        {
                            /* Transition: '<S35>:167' */
                            guard2 = true;
                        }
                    }
                    else if ((DCCR_ac_B.ShtdwnTypeGBT == 1) &&
                             (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_GBTShutdwnTO))
                    {
                        /* Transition: '<S35>:170' */
                        guard2 = true;
                    }
                    else if ((DCCR_ac_B.ShtdwnTypeGBT == 0) &&
                             (DCCR_ac_B.DCGBTStateTimer >
                              KeDCCR_t_GBTEmShutdwnTO))
                    {
                        /* Transition: '<S35>:171' */
                        guard1 = true;
                    }
                    else
                    {
                        DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                    }
                    break;

                  default:
                    DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;

                    /* During 'Shutdownin': '<S35>:129' */
                    if (DCCR_ac_B.DCGBTStateTimer > KeDCCR_t_GBTShutdwnTOut)
                    {
                        /* Transition: '<S35>:163' */
                        DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_ShutdownCurrChk;

                        /* Entry 'ShutdownCurrChk': '<S35>:131' */
                        DCCR_ac_B.DCGBTChrgSysStat =
                            CeOBCR_e_DCGBTShtDwnCurrCheck;
                        DCCR_ac_B.DCGBTStateTimer = 0.0F;
                        DCCR_ac_B.GBT_ReadyToCharge = false;
                        DCCR_ac_B.EVReady = false;
                        DCCR_ac_B.GBT_EVCharge_Permitting = false;
                    }
                    else
                    {
                        DCCR_ac_B.DCGBTStateTimer += HeDCCR_t_dT;
                    }
                    break;
                }
                break;
            }

            if (guard3)
            {
                /* Transition: '<S35>:103' */
                /* Transition: '<S35>:205' */
                /* Transition: '<S35>:204' */
                /* Transition: '<S35>:95' */
                /* Transition: '<S35>:96' */
                /* Transition: '<S35>:97' */
                /* Transition: '<S35>:98' */
                /* Transition: '<S35>:99' */
                /* Transition: '<S35>:100' */
                DCCR_ac_DW.is_c13_DCCR_ac = DCCR_ac_IN_GBTShutdown;

                /* Entry Internal 'GBTShutdown': '<S35>:73' */
                /* Transition: '<S35>:130' */
                DCCR_ac_B.ShtdwnTypeGBT = DCCR_ac_ShutdownReas_k();
                DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_Shutdownin_i;

                /* Entry 'Shutdownin': '<S35>:129' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_DCGBTShtDwn;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
            }

            if (guard2)
            {
                DCCR_ac_DW.is_GBTShutdown = DCCR_ac_IN_DCGBTContactorOpen;

                /* Entry 'DCGBTContactorOpen': '<S35>:132' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_ShtDwnDCGBTCntctropn;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
                DCCR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_Open;
            }

            if (guard1)
            {
                DCCR_ac_DW.is_GBTShutdown = DCCR__IN_DCGBTContactorFastOpen;

                /* Entry 'DCGBTContactorFastOpen': '<S35>:133' */
                DCCR_ac_B.DCGBTChrgSysStat = CeOBCR_e_ShtDwnDCGBTCntctrFastOpn;
                DCCR_ac_B.DCGBTStateTimer = 0.0F;
                DCCR_ac_B.DC_CntctrCmd = CeOBCR_e_DCCntctr_FastOpn;
            }
        }

        /* End of Chart: '<S11>/DC_GBT' */

        /* If: '<S36>/If' */
        if (VeDCCR_b_ChrgTypeCmd_800)
        {
            /* Outputs for IfAction SubSystem: '<S36>/EVLimits_DCChrgType800' incorporates:
             *  ActionPort: '<S165>/Action Port'
             */
            /* Merge: '<S36>/Merge1' incorporates:
             *  Constant: '<S177>/Calib'
             *  SignalConversion generated from: '<S165>/EVMax_P_Limit_800V'
             */
            rtb_TmpSignalConversionAtVeHV_e = KeDCCR_P_EVMax_P_Limit_800V;

            /* Merge: '<S36>/Merge2' incorporates:
             *  Constant: '<S178>/Calib'
             *  SignalConversion generated from: '<S165>/EVMax_V_Limit_800V'
             */
            Merge6 = KeDCCR_U_EVMax_V_Limit_800V;

            /* Merge: '<S36>/Merge3' incorporates:
             *  Constant: '<S176>/Calib'
             *  SignalConversion generated from: '<S165>/EVEnergyCapacity_800V'
             */
            rtb_TmpSignalConversionAtVeHVTR = KeDCCR_E_EVEnergyCapacity_800V;

            /* End of Outputs for SubSystem: '<S36>/EVLimits_DCChrgType800' */
        }
        else if (VeDCCR_b_ChrgTypeCmd_400)
        {
            /* Outputs for IfAction SubSystem: '<S36>/EVLimits_DCChrgType400' incorporates:
             *  ActionPort: '<S164>/Action Port'
             */
            /* Merge: '<S36>/Merge1' incorporates:
             *  Constant: '<S174>/Calib'
             *  SignalConversion generated from: '<S164>/EVMax_P_Limit_400V'
             */
            rtb_TmpSignalConversionAtVeHV_e = KeDCCR_P_EVMax_P_Limit_400V;

            /* Merge: '<S36>/Merge2' incorporates:
             *  Constant: '<S175>/Calib'
             *  SignalConversion generated from: '<S164>/EVMax_V_Limit_400V'
             */
            Merge6 = KeDCCR_U_EVMax_V_Limit_400V;

            /* Merge: '<S36>/Merge3' incorporates:
             *  Constant: '<S173>/Calib'
             *  SignalConversion generated from: '<S164>/EVEnergyCapacity_400V'
             */
            rtb_TmpSignalConversionAtVeHVTR = KeDCCR_E_EVEnergyCapacity_400V;

            /* End of Outputs for SubSystem: '<S36>/EVLimits_DCChrgType400' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S36>/EVLimits_DCChrgTypenull' incorporates:
             *  ActionPort: '<S166>/Action Port'
             */
            /* Merge: '<S36>/Merge1' incorporates:
             *  Constant: '<S180>/Calib'
             *  SignalConversion generated from: '<S166>/EVMax_P_Limit_null'
             */
            rtb_TmpSignalConversionAtVeHV_e = KeDCCR_P_EVMax_P_Limit_null;

            /* Merge: '<S36>/Merge2' incorporates:
             *  Constant: '<S181>/Calib'
             *  SignalConversion generated from: '<S166>/EVMax_V_Limit_null'
             */
            Merge6 = KeDCCR_U_EVMax_V_Limit_null;

            /* Merge: '<S36>/Merge3' incorporates:
             *  Constant: '<S179>/Calib'
             *  SignalConversion generated from: '<S166>/EVEnergyCapacity_null'
             */
            rtb_TmpSignalConversionAtVeHVTR = KeDCCR_E_EVEnergyCapacity_null;

            /* End of Outputs for SubSystem: '<S36>/EVLimits_DCChrgTypenull' */
        }

        /* End of If: '<S36>/If' */

        /* Switch: '<S36>/Switch1' incorporates:
         *  Constant: '<S172>/Calib'
         *  Logic: '<S36>/Logical1'
         *  Logic: '<S36>/Logical2'
         */
        if ((!KeDCCR_b_SwtchblBttryPckEnbl) || rtb_TmpSignalConversionAtVeVTHR)
        {
            /* Merge: '<S4>/Merge5' incorporates:
             *  Constant: '<S168>/Calib'
             */
            rtb_TmpSignalConversionAtVeHV_e = KeDCCR_P_EVMax_P_Limit;
        }

        /* End of Switch: '<S36>/Switch1' */

        /* Switch: '<S36>/Switch2' incorporates:
         *  Logic: '<S36>/Logical3'
         */
        if (Merge15 && rtb_TmpSignalConversionAtVeVTHR)
        {
            /* Merge: '<S4>/Merge51' incorporates:
             *  Constant: '<S169>/Calib'
             */
            Merge51 = KeDCCR_P_V2H_EVMax_P_Limit;
        }
        else
        {
            /* Merge: '<S4>/Merge51' incorporates:
             *  Constant: '<S170>/Calib'
             */
            Merge51 = KeDCCR_P_V2H_EVMax_P_LmtDef;
        }

        /* End of Switch: '<S36>/Switch2' */

        /* Switch: '<S36>/Switch7' incorporates:
         *  Constant: '<S172>/Calib'
         *  Switch: '<S36>/Switch8'
         */
        if (KeDCCR_b_SwtchblBttryPckEnbl)
        {
            /* Merge: '<S4>/Merge7' */
            Merge7 = rtb_TmpSignalConversionAtVeHVTR;
        }
        else
        {
            /* Merge: '<S4>/Merge6' incorporates:
             *  Constant: '<S171>/Calib'
             */
            Merge6 = KeDCCR_U_EVMax_V_Limit;

            /* Merge: '<S4>/Merge7' incorporates:
             *  Constant: '<S167>/Calib'
             */
            Merge7 = KeDCCR_E_EVEnergyCapacity;
        }

        /* End of Switch: '<S36>/Switch7' */

        /* Switch: '<S37>/Switch1' */
        if (VeDCCR_b_V2GMode_EMEA)
        {
            /* Switch: '<S106>/Switch1' incorporates:
             *  Switch: '<S106>/Switch2'
             */
            if (Merge11)
            {
                /* Switch: '<S37>/Switch1' incorporates:
                 *  Constant: '<S34>/Constant Value6'
                 *  Switch: '<S106>/Switch1'
                 */
                VeDCCR_e_HCP_EVErrCode_SF = 10;
            }
            else if (Merge12)
            {
                /* Switch: '<S106>/Switch2' incorporates:
                 *  Constant: '<S34>/Constant Value7'
                 *  Switch: '<S106>/Switch1'
                 *  Switch: '<S37>/Switch1'
                 */
                VeDCCR_e_HCP_EVErrCode_SF = 11;
            }
            else
            {
                /* Switch: '<S37>/Switch1' incorporates:
                 *  Constant: '<S34>/Constant Value10'
                 *  Switch: '<S106>/Switch1'
                 *  Switch: '<S106>/Switch2'
                 */
                VeDCCR_e_HCP_EVErrCode_SF = 1;
            }

            /* End of Switch: '<S106>/Switch1' */
        }
        else
        {
            /* Switch: '<S37>/Switch1' incorporates:
             *  Constant: '<S185>/Calib'
             */
            VeDCCR_e_HCP_EVErrCode_SF = KeDCCR_k_EVErrorCode;
        }

        /* End of Switch: '<S37>/Switch1' */

        /* DataTypeConversion: '<S38>/DataTypeConversion' */
        VeDCCR_e_DC_DINCntctrCmd = DCCR_ac_B.DC_CntctrCmd_e;

        /* DataTypeConversion: '<S39>/DataTypeConversion' */
        VeDCCR_e_DCChrgSysStat = DCCR_ac_B.DCChrgStat;

        /* DataTypeConversion: '<S40>/DataTypeConversion' */
        VeDCCR_e_DCGBTChrgSysStat_SF = DCCR_ac_B.DCGBTChrgSysStat;

        /* DataTypeConversion: '<S41>/DataTypeConversion' */
        VeDCCR_b_GBT_DC_CntctrCmd = DCCR_ac_B.DC_CntctrCmd;

        /* Switch: '<S199>/Switch1' incorporates:
         *  Constant: '<S209>/Calib'
         *  Constant: '<S210>/Calib'
         *  RelationalOperator: '<S45>/Comparison1'
         *  RelationalOperator: '<S45>/Comparison3'
         *  Switch: '<S199>/Switch2'
         */
        if (VeDCCR_U_HV_BatVoltModMaxArbFil < KeDCCR_U_BattCellMinGBT)
        {
            /* Merge: '<S4>/Merge23' incorporates:
             *  Constant: '<S191>/Constant'
             */
            Merge23 = CeOBCR_e_CellVoltStat_TooLow;
        }
        else if (VeDCCR_U_HV_BatVoltModMaxArbFil > KeDCCR_U_BattCellMaxGBT)
        {
            /* Switch: '<S199>/Switch2' incorporates:
             *  Constant: '<S187>/Constant'
             *  Merge: '<S4>/Merge23'
             */
            Merge23 = CeOBCR_e_CellVoltStat_TooHigh;
        }
        else
        {
            /* Merge: '<S4>/Merge23' incorporates:
             *  Constant: '<S197>/Constant'
             *  Switch: '<S199>/Switch2'
             */
            Merge23 = CeOBCR_e_CellVoltStat_Normal;
        }

        /* End of Switch: '<S199>/Switch1' */

        /* Switch: '<S45>/Switch' incorporates:
         *  Constant: '<S202>/Calib'
         *  RelationalOperator: '<S45>/Comparison2'
         */
        if (rtb_TmpSignalConversionAtVeBP_m > KeDCCR_I_MaxBattChrgCurr)
        {
            /* Merge: '<S4>/Merge24' incorporates:
             *  Constant: '<S192>/Constant'
             */
            Merge24 = CeOBCR_e_ChrgCurrStat_TooHigh;
        }
        else
        {
            /* Merge: '<S4>/Merge24' incorporates:
             *  Constant: '<S193>/Constant'
             */
            Merge24 = CeOBCR_e_ChrgCurrStat_Normal;
        }

        /* End of Switch: '<S45>/Switch' */

        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S206>/Calib'
         *  Constant: '<S207>/Calib'
         *  RelationalOperator: '<S45>/Comparison4'
         *  RelationalOperator: '<S45>/Comparison7'
         *  Switch: '<S201>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeBP_e < KeDCCR_T_BattTempMinGBT)
        {
            /* Merge: '<S4>/Merge25' incorporates:
             *  Constant: '<S195>/Constant'
             */
            Merge25 = CeOBCR_e_BattTempStat_TooLow;
        }
        else if (rtb_TmpSignalConversionAtVeBP_e > KeDCCR_T_BattTempMaxGBT)
        {
            /* Switch: '<S201>/Switch2' incorporates:
             *  Constant: '<S198>/Constant'
             *  Merge: '<S4>/Merge25'
             */
            Merge25 = CeOBCR_e_BattTempStat_TooHigh;
        }
        else
        {
            /* Merge: '<S4>/Merge25' incorporates:
             *  Constant: '<S189>/Constant'
             *  Switch: '<S201>/Switch2'
             */
            Merge25 = CeOBCR_e_BattTempStat_Normal;
        }

        /* End of Switch: '<S201>/Switch1' */

        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S204>/Calib'
         *  Constant: '<S205>/Calib'
         *  RelationalOperator: '<S45>/Comparison5'
         *  RelationalOperator: '<S45>/Comparison6'
         *  Switch: '<S200>/Switch2'
         */
        if (rtb_TmpSignalConversionAtVeBPCR < KeDCCR_Pct_GBTBattMinSOC)
        {
            /* Merge: '<S4>/Merge26' incorporates:
             *  Constant: '<S196>/Constant'
             */
            Merge26 = CeOBCR_e_BattSOCStat_TooLow;
        }
        else if (rtb_TmpSignalConversionAtVeBPCR > KeDCCR_Pct_GBTBattMaxSOC)
        {
            /* Switch: '<S200>/Switch2' incorporates:
             *  Constant: '<S188>/Constant'
             *  Merge: '<S4>/Merge26'
             */
            Merge26 = CeOBCR_e_BattSOCStat_TooHigh;
        }
        else
        {
            /* Merge: '<S4>/Merge26' incorporates:
             *  Constant: '<S194>/Constant'
             *  Switch: '<S200>/Switch2'
             */
            Merge26 = CeOBCR_e_BattSOCStat_Normal;
        }

        /* End of Switch: '<S200>/Switch1' */

        /* Gain: '<S48>/Gain' */
        VeDCCR_b_DC_Isolation_Cmd_SF = DCCR_ac_B.DC_Isolation_Cmd;

        /* Gain: '<S49>/Gain' */
        VeDCCR_b_J1772_S2_Close_DC = DCCR_ac_B.J1772_S2_Close;

        /* Merge: '<S4>/Merge33' incorporates:
         *  Gain: '<S50>/Gain'
         */
        rtb_TmpSignalConversionAtVeVTHR = DCCR_ac_B.GBT_ReadyToCharge;

        /* Merge: '<S4>/Merge34' incorporates:
         *  Gain: '<S51>/Gain'
         */
        Merge34 = DCCR_ac_B.GBT_EVCharge_Permitting;

        /* Gain: '<S52>/Gain' */
        VeDCCR_b_RdyToChrgStat_SF = DCCR_ac_B.ReadyToChargeState;

        /* Gain: '<S53>/Gain' */
        VeDCCR_K_DIN_DCExitRsn_SF = DCCR_ac_B.DCexitReason_j;

        /* Gain: '<S54>/Gain' */
        VeDCCR_b_GBT_EVReady = DCCR_ac_B.EVReady;

        /* Gain: '<S55>/Gain' */
        VeDCCR_b_HCP_StpSessionCm_SFd = DCCR_ac_B.HCP_SessionStopCmd;

        /* Gain: '<S56>/Gain' */
        VeDCCR_K_ShtDwnType = DCCR_ac_B.ShtDwnType;

        /* Gain: '<S57>/Gain' */
        VeDCCR_b_HCP_WldChkComplete_SF = DCCR_ac_B.HCP_WeldChckComplete;

        /* Gain: '<S58>/Gain' */
        VeDCCR_K_DCGBTExitRsn_SF = DCCR_ac_B.DCexitReason;

        /* Gain: '<S59>/Gain' */
        VeDCCR_e_ServiceCategory_SF = DCCR_ac_B.ServiceCategory;

        /* Gain: '<S60>/Gain' */
        VeDCCR_t_DCGBTChargeTime = DCCR_ac_B.DCGBTChargeTimer;

        /* Gain: '<S61>/Gain' */
        VeDCCR_K_DCGBTShtdwnTypeGBT = DCCR_ac_B.ShtdwnTypeGBT;

        /* Gain: '<S62>/Gain' */
        VeDCCR_b_ISO_NoRetryFlag = DCCR_ac_B.NoRetryFlag;

        /* Gain: '<S63>/Gain' */
        VeDCCR_b_DCDINChrgInitialization_SF = DCCR_ac_B.DCChargeInit;

        /* Gain: '<S64>/Gain' */
        VeDCCR_k_PnC_RetryCnt = DCCR_ac_B.PnC_RetryCnt;

        /* Gain: '<S65>/Gain' */
        VeDCCR_t_DCGBTStateTimer = DCCR_ac_B.DCGBTStateTimer;

        /* Gain: '<S66>/Gain' */
        VeDCCR_e_SelEnrgyTxType_SF = DCCR_ac_B.SelectedEnergyTransferType;

        /* Gain: '<S67>/Gain' */
        VeDCCR_b_DINEVRdy_SF = DCCR_ac_B.EVReady_c;

        /* Gain: '<S68>/Gain' */
        VeDCCR_b_DC_GBTChargeInit = DCCR_ac_B.DCChargeInitialization;

        /* Gain: '<S69>/Gain' */
        VeDCCR_t_DC_StateTimer = DCCR_ac_B.DC_StateTimer;

        /* Gain: '<S70>/Gain' */
        VeDCCR_t_DC_ChargeTimer = DCCR_ac_B.DC_ChargeTimer;

        /* Switch: '<S11>/Switch2' incorporates:
         *  Switch: '<S11>/Switch3'
         *  Switch: '<S11>/Switch4'
         *  Switch: '<S11>/Switch5'
         */
        if (DCCR_ac_B.TmpSignalConversionAtVeOBCR_b_j)
        {
            /* Switch: '<S11>/Switch2' */
            VeDCCR_K_DCExitRsn_SF = VeDCCR_K_DCGBTExitRsn_SF;

            /* Switch: '<S11>/Switch3' incorporates:
             *  DataTypeConversion: '<S41>/DataTypeConversion'
             */
            VeDCCR_e_DC_CntctrCmd_SF = VeDCCR_b_GBT_DC_CntctrCmd;

            /* Switch: '<S11>/Switch4' */
            VeDCCR_b_DCChrgInitialization_SF = VeDCCR_b_DC_GBTChargeInit;

            /* Switch: '<S11>/Switch5' */
            VeDCCR_b_EVRdy_SF = VeDCCR_b_GBT_EVReady;
        }
        else
        {
            /* Switch: '<S11>/Switch2' */
            VeDCCR_K_DCExitRsn_SF = VeDCCR_K_DIN_DCExitRsn_SF;

            /* Switch: '<S11>/Switch3' incorporates:
             *  DataTypeConversion: '<S38>/DataTypeConversion'
             */
            VeDCCR_e_DC_CntctrCmd_SF = VeDCCR_e_DC_DINCntctrCmd;

            /* Switch: '<S11>/Switch4' incorporates:
             *  Constant: '<S46>/Calib'
             *  Switch: '<S11>/Switch'
             */
            VeDCCR_b_DCChrgInitialization_SF = ((KeDCCR_b_DCChrgInit_Enbl) &&
                (VeDCCR_b_DCDINChrgInitialization_SF));

            /* Switch: '<S11>/Switch5' */
            VeDCCR_b_EVRdy_SF = VeDCCR_b_DINEVRdy_SF;
        }

        /* End of Switch: '<S11>/Switch2' */

        /* Switch: '<S11>/Switch6' incorporates:
         *  Constant: '<S44>/Constant'
         *  RelationalOperator: '<S11>/Comparison4'
         *  Switch: '<S5>/Switch34'
         */
        if (((uint32)VeDCCR_e_TxGBTMsgResponse) == CeIDCR_e_CST)
        {
            /* Merge: '<S4>/Merge37' incorporates:
             *  Constant: '<S43>/Constant'
             */
            Merge37 = CeOBCR_e_ChrgrInterrupt;
        }
        else
        {
            /* Merge: '<S4>/Merge37' incorporates:
             *  Constant: '<S42>/Constant'
             */
            Merge37 = CeOBCR_e_NoChrgrInterrupt;
        }

        /* End of Switch: '<S11>/Switch6' */

        /* Switch: '<S12>/Switch1' incorporates:
         *  Constant: '<S238>/Calib'
         *  Inport: '<Root>/VeCITR_e_DCChrg_TestSts'
         */
        if (KeDCCR_b_EOL_DVC_Ovrd)
        {
            /* Switch: '<S12>/Switch1' incorporates:
             *  Constant: '<S239>/Calib'
             */
            VeDCCR_e_DVC_DC_EOL = KeDCCR_k_EOL_DVC_OvrdVal;
        }
        else
        {
            (void)Rte_Read_VeCITR_e_DCChrg_TestSts_Value(&Merge16);

            /* Switch: '<S12>/Switch1' incorporates:
             *  DataTypeConversion: '<S12>/Data Type Conversion'
             *  Inport: '<Root>/VeCITR_e_DCChrg_TestSts'
             */
            VeDCCR_e_DVC_DC_EOL = Merge16;
        }

        /* End of Switch: '<S12>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S12>/EdgeRising' */
        /* Logic: '<S229>/OR1' incorporates:
         *  UnitDelay: '<S229>/Unit Delay'
         */
        Merge8 = !DCCR_ac_DW.UnitDelay_DSTATE_bc;

        /* Update for UnitDelay: '<S229>/Unit Delay' */
        DCCR_ac_DW.UnitDelay_DSTATE_bc = rtb_TmpSignalConversionAtVeOBCR;

        /* End of Outputs for SubSystem: '<S12>/EdgeRising' */

        /* Chart: '<S12>/DCChrg_EOL' incorporates:
         *  Constant: '<S232>/Calib'
         *  DataStoreRead: '<S12>/Data Store Read1'
         *  DataTypeConversion: '<S39>/DataTypeConversion'
         *  Logic: '<S229>/AND'
         */
        /* Gateway: DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/DCChrg_EOL */
        /* During: DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/DCChrg_EOL */
        if (((uint32)DCCR_ac_DW.is_active_c9_DCCR_ac) == 0U)
        {
            /* Entry: DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/DCChrg_EOL */
            DCCR_ac_DW.is_active_c9_DCCR_ac = 1U;

            /* Entry Internal: DCCR_MedTED/DCCC/DC_Charging/DC_EOL_SF/DCChrg_EOL */
            /* Transition: '<S228>:140' */
            DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_Init;

            /* Entry 'Init': '<S228>:142' */
            DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
            DCCR_ac_B.EOL_Flag = false;
            DCCR_ac_B.EOL_ExitRsn = 0U;
            DCCR_ac_B.DCTestSts = AeDCCR_y_DCChrgTestSts;
        }
        else
        {
            switch (DCCR_ac_DW.is_c9_DCCR_ac)
            {
              case DCCR_ac_IN_Check2:
                /* During 'Check2': '<S228>:395' */
                if (VeDCCR_b_DC_EOL_CrntChkPass)
                {
                    /* Transition: '<S228>:396' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_Check3;

                    /* Entry 'Check3': '<S228>:394' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                }
                else if ((DCCR_ac_B.VeDCCR_t_DCChrgTestTimer >
                          KeDCCR_t_DCChrgTestCrntChk) || (((uint32)
                           VeDCCR_e_DCChrgSysStat) == CeOBCR_e_DCShtDwn))
                {
                    /* Transition: '<S228>:399' */
                    DCCR_ac_B.EOL_ExitRsn = 2U;

                    /* Transition: '<S228>:436' */
                    /* Transition: '<S228>:438' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_WaitForShtDwn;

                    /* Entry 'WaitForShtDwn': '<S228>:437' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.EOL_Flag = true;
                }
                else
                {
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_Check3:
                /* During 'Check3': '<S228>:394' */
                if ((VeDCCR_K_DCExitRsn_SF == 23) && (((uint32)
                        VeDCCR_e_DCChrgSysStat) == CeOBCR_e_DCShtDwnCmplt))
                {
                    /* Transition: '<S228>:398' */
                    /* Transition: '<S228>:374' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_TestPass;

                    /* Entry 'TestPass': '<S228>:85' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.DCTestSts = 2U;
                }
                else if ((VeDCCR_K_DCExitRsn_SF != 23) ||
                         (DCCR_ac_B.VeDCCR_t_DCChrgTestTimer >
                          KeDCCR_t_DCChrgTestShutdownTimer))
                {
                    /* Transition: '<S228>:423' */
                    DCCR_ac_B.EOL_ExitRsn = 3U;

                    /* Transition: '<S228>:438' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_WaitForShtDwn;

                    /* Entry 'WaitForShtDwn': '<S228>:437' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.EOL_Flag = true;
                }
                else
                {
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_Init:
                /* During 'Init': '<S228>:142' */
                if ((VeDCCR_b_DCChrgEOL_TestActv) &&
                        (DCCR_ac_B.VeDCCR_t_DCChrgTestTimer >
                         KeDCCR_t_DC_EOL_StateDelay))
                {
                    /* Transition: '<S228>:404' */
                    /* Transition: '<S228>:143' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_TestInProg;

                    /* Entry 'TestInProg': '<S228>:72' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.DCTestSts = 1U;
                }
                else
                {
                    DCCR_ac_B.DCTestSts = AeDCCR_y_DCChrgTestSts;
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_TestFail:
                /* Outputs for Atomic SubSystem: '<S12>/EdgeRising' */
                /* During 'TestFail': '<S228>:134' */
                if (rtb_TmpSignalConversionAtVeOBCR && Merge8)
                {
                    /* Transition: '<S228>:349' */
                    /* Transition: '<S228>:356' */
                    /* Exit 'TestFail': '<S228>:134' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_Init;

                    /* Entry 'Init': '<S228>:142' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.EOL_Flag = false;
                    DCCR_ac_B.EOL_ExitRsn = 0U;
                    DCCR_ac_B.DCTestSts = AeDCCR_y_DCChrgTestSts;
                }
                else
                {
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }

                /* End of Outputs for SubSystem: '<S12>/EdgeRising' */
                break;

              case DCCR_ac_IN_TestInProg:
                /* During 'TestInProg': '<S228>:72' */
                if (((uint32)VeDCCR_e_DCChrgSysStat) == CeOBCR_e_DCCrntDmd)
                {
                    /* Transition: '<S228>:334' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_Check2;

                    /* Entry 'Check2': '<S228>:395' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                }
                else if ((DCCR_ac_B.VeDCCR_t_DCChrgTestTimer >
                          KeDCCR_t_DCChrgTestChk1) || (((uint32)
                           VeDCCR_e_DCChrgSysStat) == CeOBCR_e_DCShtDwn))
                {
                    /* Transition: '<S228>:354' */
                    DCCR_ac_B.EOL_ExitRsn = 1U;

                    /* Transition: '<S228>:435' */
                    /* Transition: '<S228>:436' */
                    /* Transition: '<S228>:438' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_WaitForShtDwn;

                    /* Entry 'WaitForShtDwn': '<S228>:437' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.EOL_Flag = true;
                }
                else
                {
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }
                break;

              case DCCR_ac_IN_TestPass:
                /* During 'TestPass': '<S228>:85' */
                if (DCCR_ac_B.VeDCCR_t_DCChrgTestTimer > KeDCCR_t_EOL_Passed)
                {
                    /* Transition: '<S228>:441' */
                    /* Transition: '<S228>:442' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_Init;

                    /* Entry 'Init': '<S228>:142' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.EOL_Flag = false;
                    DCCR_ac_B.EOL_ExitRsn = 0U;
                    DCCR_ac_B.DCTestSts = AeDCCR_y_DCChrgTestSts;
                }
                else
                {
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }
                break;

              default:
                /* During 'WaitForShtDwn': '<S228>:437' */
                if ((((uint32)VeDCCR_e_DCChrgSysStat) == CeOBCR_e_DCShtDwnCmplt)
                    || (((uint32)VeDCCR_e_DCChrgSysStat) == CeOBCR_e_DCinit))
                {
                    /* Transition: '<S228>:439' */
                    DCCR_ac_DW.is_c9_DCCR_ac = DCCR_ac_IN_TestFail;

                    /* Entry 'TestFail': '<S228>:134' */
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer = 0.0F;
                    DCCR_ac_B.DCTestSts = 3U;
                }
                else
                {
                    DCCR_ac_B.VeDCCR_t_DCChrgTestTimer += HeDCCR_t_dT;
                }
                break;
            }
        }

        /* End of Chart: '<S12>/DCChrg_EOL' */

        /* Gain: '<S241>/Gain' */
        VeDCCR_e_DCChrg_EOLTestSts = DCCR_ac_B.DCTestSts;

        /* Switch: '<S12>/Switch' incorporates:
         *  DataStoreWrite: '<S12>/Data Store Write'
         *  RelationalOperator: '<S12>/Comparison5'
         *  UnitDelay: '<S12>/Unit Delay'
         */
        if (rtb_TmpSignalConversionAtVeCITR !=
                DCCR_ac_DW.VeOBCR_Cnt_DCEOL_SgnlRcvd_Prev)
        {
            AeDCCR_y_DCChrgTestSts = VeDCCR_e_DVC_DC_EOL;
        }
        else
        {
            AeDCCR_y_DCChrgTestSts = VeDCCR_e_DCChrg_EOLTestSts;
        }

        /* End of Switch: '<S12>/Switch' */

        /* Logic: '<S12>/Logical3' incorporates:
         *  DataStoreRead: '<S12>/Data Store Read2'
         *  RelationalOperator: '<S12>/Comparison2'
         *  UnitDelay: '<S12>/Unit Delay1'
         */
        VeDCCR_b_B604PrgRnTmTrig = (Merge39 && (AeDCCR_y_DCChrgTestSts !=
            DCCR_ac_DW.VeOBCR_Cnt_DCEOL_SgnlRcvd_Pre_c));

        /* Outputs for Enabled SubSystem: '<S12>/B604ProgRnTm' incorporates:
         *  EnablePort: '<S225>/Enable'
         */
        if (VeDCCR_b_B604PrgRnTmTrig)
        {
            /* Outport: '<Root>/AeDCCR_y_DCChrgTestSts_Strimm_out' incorporates:
             *  DataStoreRead: '<S225>/Data Store Read'
             */
            (void)Rte_Write_AeDCCR_y_DCChrgTestSts_AeDCCR_y_DCChrgTestSts
                (AeDCCR_y_DCChrgTestSts);
        }

        /* End of Outputs for SubSystem: '<S12>/B604ProgRnTm' */

        /* Switch: '<S233>/Switch1' */
        if (VeDCCR_b_DCChrgEOL_TestActv)
        {
            /* Merge: '<S4>/Merge18' incorporates:
             *  Constant: '<S237>/Calib'
             */
            rtb_TmpSignalConversionAtVeBP_e = KeDCCR_I_DCChrgTestCrnt;
        }
        else
        {
            /* Merge: '<S4>/Merge18' incorporates:
             *  Constant: '<S12>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeBP_e = 1000.0F;
        }

        /* End of Switch: '<S233>/Switch1' */

        /* Gain: '<S240>/Gain' */
        VeDCCR_k_DCChrgTest_ExitRsn = DCCR_ac_B.EOL_ExitRsn;

        /* Gain: '<S242>/Gain' */
        VeDCCR_t_DCChrgTestTimer_EOL = DCCR_ac_B.VeDCCR_t_DCChrgTestTimer;

        /* Gain: '<S243>/Gain' */
        VeDCCR_b_EOL_Flag = DCCR_ac_B.EOL_Flag;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S399>/DataTypeConversion' incorporates:
         *  DataTypeConversion: '<S13>/DataTypeConversion'
         *  DataTypeConversion: '<S39>/DataTypeConversion'
         *  Merge: '<S4>/Merge20'
         *  Outport: '<Root>/VeDCCR_e_DCChrgSysStat_SF'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_DCChrgSysStat_SF'
         */
        (void)Rte_Write_VeDCCR_e_DCChrgSysStat_SF_Value(VeDCCR_e_DCChrgSysStat);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge41' incorporates:
         *  DataTypeConversion: '<S14>/DataTypeConversion'
         *  Switch: '<S32>/Switch1'
         */
        Merge41 = VeDCCR_e_DC_ChargeType_Cmd_test;

        /* Merge: '<S4>/Merge9' incorporates:
         *  DataTypeConversion: '<S15>/DataTypeConversion'
         *  Switch: '<S11>/Switch3'
         */
        Merge9 = VeDCCR_e_DC_CntctrCmd_SF;

        /* Merge: '<S4>/Merge16' incorporates:
         *  DataStoreRead: '<S12>/Data Store Read'
         *  DataTypeConversion: '<S16>/DataTypeConversion'
         */
        Merge16 = (TeOBCR_e_DCChrg_TestSts)AeDCCR_y_DCChrgTestSts;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S401>/DataTypeConversion' incorporates:
         *  DataTypeConversion: '<S17>/DataTypeConversion'
         *  DataTypeConversion: '<S40>/DataTypeConversion'
         *  Merge: '<S4>/Merge44'
         *  Outport: '<Root>/VeDCCR_e_DCGBTChrgSysStat'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_DCGBTChrgSysStat'
         */
        (void)Rte_Write_VeDCCR_e_DCGBTChrgSysStat_Value
            (VeDCCR_e_DCGBTChrgSysStat_SF);

        /* DataTypeConversion: '<S398>/DataTypeConversion' incorporates:
         *  Merge: '<S4>/Merge40'
         *  Outport: '<Root>/VeDCCR_e_ChargeProgress'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_ChargeProgress'
         *  SignalConversion generated from: '<S7>/ChargeProgress'
         */
        (void)Rte_Write_VeDCCR_e_ChargeProgress_Value(DCCR_ac_B.ChargeProgress);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge29' incorporates:
         *  Constant: '<S203>/Calib'
         *  SignalConversion generated from: '<S7>/GBT_BattFullSOC'
         */
        rtb_TmpSignalConversionAtVeBP_m = KeDCCR_Pct_BattFullSOC;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S394>/DataTypeConversion' incorporates:
         *  Constant: '<S190>/Constant'
         *  Merge: '<S4>/Merge36'
         *  Outport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_GBT_ChrgCntrolMethod'
         *  SignalConversion generated from: '<S7>/GBT_ChrgCntrolMethod'
         */
        (void)Rte_Write_VeDCCR_e_GBT_ChrgCntrolMethod_Value
            (CeOBCR_e_ChrgMthd_ConstantCurrent);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge35' incorporates:
         *  Constant: '<S208>/Calib'
         *  SignalConversion generated from: '<S7>/GBT_MaxBattTempAllwd'
         */
        rtb_TmpSignalConversionAtVeBP_g = KeDCCR_T_GBTMaxBattTempAllwd;

        /* Merge: '<S4>/Merge46' incorporates:
         *  SignalConversion generated from: '<S7>/Max_Entries_SAScheduleTuple'
         */
        Merge46 = DCCR_ac_B.Max_Entries_SAScheduleTuple;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S403>/DataTypeConversion' incorporates:
         *  Constant: '<S72>/Calib'
         *  Merge: '<S4>/Merge17'
         *  Outport: '<Root>/VeDCCR_e_Protocol_Priority1'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_Protocol_Priority1'
         *  SignalConversion generated from: '<S7>/ProtocolPriority1'
         */
        (void)Rte_Write_VeDCCR_e_Protocol_Priority1_Value
            (KeDCCR_e_ProtocolPriority1);

        /* DataTypeConversion: '<S406>/DataTypeConversion' incorporates:
         *  Constant: '<S73>/Calib'
         *  Merge: '<S4>/Merge19'
         *  Outport: '<Root>/VeDCCR_e_Protocol_Priority2'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_Protocol_Priority2'
         *  SignalConversion generated from: '<S7>/ProtocolPriority2'
         */
        (void)Rte_Write_VeDCCR_e_Protocol_Priority2_Value
            (KeDCCR_e_ProtocolPriority2);

        /* DataTypeConversion: '<S393>/DataTypeConversion' incorporates:
         *  Constant: '<S74>/Calib'
         *  Merge: '<S4>/Merge45'
         *  Outport: '<Root>/VeDCCR_e_Protocol_Priority3'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_Protocol_Priority3'
         *  SignalConversion generated from: '<S7>/ProtocolPriority3'
         */
        (void)Rte_Write_VeDCCR_e_Protocol_Priority3_Value
            (KeDCCR_e_ProtocolPriority3);

        /* DataTypeConversion: '<S397>/DataTypeConversion' incorporates:
         *  Merge: '<S4>/Merge38'
         *  Outport: '<Root>/VeDCCR_e_SelectAppProtocol'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_SelectAppProtocol'
         *  SignalConversion generated from: '<S7>/SelectedAppProtocol'
         */
        (void)Rte_Write_VeDCCR_e_SelectAppProtocol_Value
            (DCCR_ac_B.HVCM_SelectedAppProtocol);

        /* DataTypeConversion: '<S396>/DataTypeConversion' incorporates:
         *  Merge: '<S4>/Merge14'
         *  Outport: '<Root>/VeDCCR_e_SelPayOptn'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_SelPayOptn'
         *  SignalConversion generated from: '<S7>/SelectedPaymentOptn'
         */
        (void)Rte_Write_VeDCCR_e_SelPayOptn_Value
            (DCCR_ac_B.HVCM_SelectedPaymentOptn);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge39' incorporates:
         *  SignalConversion generated from: '<S7>/SelectedSecProtocol'
         */
        Merge39 = DCCR_ac_B.HVCM_SelectedSecProtocol;

        /* Merge: '<S4>/Merge13' incorporates:
         *  SignalConversion generated from: '<S7>/SelectedServiceID'
         */
        Merge13 = DCCR_ac_B.SelectedServiceId;

        /* Merge: '<S4>/Merge' incorporates:
         *  Constant: '<S47>/Calib'
         *  SignalConversion generated from: '<S7>/Service_Category'
         */
        Merge = KeDCCR_k_ServiceCategory;

        /* Merge: '<S4>/Merge49' incorporates:
         *  SignalConversion generated from: '<S7>/V2H_MaxCurrPwrLim_NegVal'
         */
        Merge49 = DCCR_ac_B.V2H_MaxCurrPwrLim_NegVa;

        /* Merge: '<S4>/Merge50' incorporates:
         *  SignalConversion generated from: '<S7>/V2X_SelEnergyTransType'
         */
        Merge50 = DCCR_ac_B.V2X_HVCMS_SlctdEnergyTransfType;

        /* Merge: '<S4>/Merge47' incorporates:
         *  SignalConversion generated from: '<S7>/VeDCCR_b_PnCFailure'
         */
        Merge47 = DCCR_ac_B.PnCFailure;

        /* Merge: '<S4>/Merge48' incorporates:
         *  SignalConversion generated from: '<S7>/VeDCCR_b_PnCRetryFail'
         */
        Merge48 = DCCR_ac_B.PnCRetryFail;

        /* Merge: '<S4>/Merge21' incorporates:
         *  Gain: '<S18>/Gain'
         */
        Merge21 = VeDCCR_b_V2GMode_EMEA;

        /* Merge: '<S4>/Merge12' incorporates:
         *  Gain: '<S19>/Gain'
         */
        Merge12 = VeDCCR_b_RdyToChrgStat_SF;

        /* Merge: '<S4>/Merge15' incorporates:
         *  Gain: '<S20>/Gain'
         */
        Merge15 = VeDCCR_b_HCP_StpSessionCm_SFd;

        /* Merge: '<S4>/Merge32' incorporates:
         *  Gain: '<S21>/Gain'
         */
        Merge32 = VeDCCR_b_DCChrgInitialization_SF;

        /* Merge: '<S4>/Merge42' incorporates:
         *  Gain: '<S22>/Gain'
         */
        Merge42 = VeDCCR_b_J1772_S2_Close_DC;

        /* Merge: '<S4>/Merge22' incorporates:
         *  Gain: '<S23>/Gain'
         */
        Merge22 = VeDCCR_b_InhibitV2G;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* Gain: '<S425>/Gain' incorporates:
         *  Gain: '<S24>/Gain'
         *  Outport: '<Root>/VeDCCR_k_DCExitRsn_SF'
         *  SignalConversion generated from: '<S1>/VeDCCR_k_DCExitRsn_SF'
         */
        (void)Rte_Write_VeDCCR_k_DCExitRsn_SF_Value(VeDCCR_K_DCExitRsn_SF);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge1' incorporates:
         *  Gain: '<S25>/Gain'
         */
        Merge1_f = VeDCCR_e_SelEnrgyTxType_SF;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Gain: '<S26>/Gain'
         */
        rtb_TmpSignalConversionAtVeOBCR = VeDCCR_b_EVRdy_SF;

        /* Merge: '<S4>/Merge10' incorporates:
         *  Gain: '<S27>/Gain'
         */
        rtb_TmpSignalConversionAtVeBPCR = VeDCCR_U_EV_DCTargetVolt_Test;

        /* Merge: '<S4>/Merge3' incorporates:
         *  Gain: '<S28>/Gain'
         */
        Merge3 = VeDCCR_e_HCP_EVErrCode_SF;

        /* Merge: '<S4>/Merge8' incorporates:
         *  Gain: '<S29>/Gain'
         */
        Merge8 = VeDCCR_b_DC_Isolation_Cmd_SF;

        /* Merge: '<S4>/Merge11' incorporates:
         *  Gain: '<S30>/Gain'
         */
        Merge11 = VeDCCR_b_HCP_WldChkComplete_SF;

        /* Update for UnitDelay: '<S34>/Unit Delay4' */
        DCCR_ac_DW.UnitDelay4_DSTATE = VeDCCR_b_V2GMode_EMEA;

        /* Update for UnitDelay: '<S34>/Unit Delay2' */
        DCCR_ac_DW.UnitDelay2_DSTATE = rtb_TmpSignalConversionAtVeCCCR;

        /* Update for UnitDelay: '<S11>/Unit Delay2' incorporates:
         *  DataTypeConversion: '<S39>/DataTypeConversion'
         */
        DCCR_ac_DW.UnitDelay2_DSTATE_e = VeDCCR_e_DCChrgSysStat;

        /* Update for UnitDelay: '<S34>/Unit Delay3' */
        DCCR_ac_DW.UnitDelay3_DSTATE = rtb_TmpSignalConversionAtVeCCCR;

        /* Update for UnitDelay: '<S34>/Unit Delay1' */
        DCCR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeCCCR;

        /* Update for UnitDelay: '<S11>/Unit Delay4' incorporates:
         *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF'
         */
        DCCR_ac_DW.UnitDelay4_DSTATE_o = rtb_TmpSignalConversionAtVeOB_j;

        /* Update for UnitDelay: '<S11>/Unit Delay1' */
        DCCR_ac_DW.UnitDelay1_DSTATE_n = rtb_TmpSignalConversionAtVeOB_k;

        /* Update for UnitDelay: '<S71>/Unit Delay5' */
        DCCR_ac_DW.UnitDelay5_DSTATE = VeDCCR_b_EOL_Flag;

        /* Update for UnitDelay: '<S12>/Unit Delay3' */
        DCCR_ac_DW.UnitDelay3_DSTATE_h = VeDCCR_b_DC_EOL_CrntChkPass;

        /* Update for UnitDelay: '<S11>/Unit Delay5' incorporates:
         *  SignalConversion generated from: '<S1>/VeOBCR_e_ChrgSysStat_SF'
         */
        DCCR_ac_DW.UnitDelay5_DSTATE_n = rtb_TmpSignalConversionAtVeOB_j;

        /* Update for UnitDelay: '<S11>/Unit Delay3' */
        DCCR_ac_DW.UnitDelay3_DSTATE_b = rtb_TmpSignalConversionAtVeOB_k;

        /* Update for UnitDelay: '<S12>/Unit Delay' */
        DCCR_ac_DW.VeOBCR_Cnt_DCEOL_SgnlRcvd_Prev =
            rtb_TmpSignalConversionAtVeCITR;

        /* Update for UnitDelay: '<S12>/Unit Delay1' incorporates:
         *  DataStoreRead: '<S12>/Data Store Read2'
         */
        DCCR_ac_DW.VeOBCR_Cnt_DCEOL_SgnlRcvd_Pre_c = AeDCCR_y_DCChrgTestSts;

        /* End of Outputs for SubSystem: '<S4>/DC_Charging' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/DefaultsValues' incorporates:
         *  ActionPort: '<S8>/Action Port'
         */
        /* Merge: '<S4>/Merge' incorporates:
         *  Constant: '<S284>/Calib'
         *  SignalConversion generated from: '<S8>/Service_Category'
         */
        Merge = KeDCCR_K_DC_Service_Category;

        /* Merge: '<S4>/Merge1' incorporates:
         *  Constant: '<S285>/Calib'
         *  SignalConversion generated from: '<S8>/SelectedEnergyTransferType'
         */
        Merge1_f = KeDCCR_K_DC_SlctdEnergyTrsfrTyp;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Constant: '<S8>/Constant'
         *  SignalConversion generated from: '<S8>/EVReady'
         */
        rtb_TmpSignalConversionAtVeOBCR = false;

        /* Merge: '<S4>/Merge3' incorporates:
         *  Constant: '<S282>/Calib'
         *  SignalConversion generated from: '<S8>/HCP_EVErrorCode'
         */
        Merge3 = KeDCCR_K_DC_HCP_EVErrorCode;

        /* Merge: '<S4>/Merge4' incorporates:
         *  Constant: '<S280>/Calib'
         *  SignalConversion generated from: '<S8>/EVMax_I_Limit'
         */
        rtb_Switch_m = KeDCCR_I_DC_EVMax_I_Limit;

        /* Merge: '<S4>/Merge5' incorporates:
         *  Constant: '<S286>/Calib'
         *  SignalConversion generated from: '<S8>/EVMax_P_Limit'
         */
        rtb_TmpSignalConversionAtVeHV_e = KeDCCR_P_DC_EVMax_P_Limit;

        /* Merge: '<S4>/Merge6' incorporates:
         *  Constant: '<S289>/Calib'
         *  SignalConversion generated from: '<S8>/EVMax_V_Limit'
         */
        Merge6 = KeDCCR_U_DC_EVMax_V_Limit;

        /* Merge: '<S4>/Merge7' incorporates:
         *  Constant: '<S278>/Calib'
         *  SignalConversion generated from: '<S8>/EVEnergyCapacity'
         */
        Merge7 = KeDCCR_E_DC_EVEnergyCapacity;

        /* Merge: '<S4>/Merge8' incorporates:
         *  Constant: '<S8>/Constant1'
         *  SignalConversion generated from: '<S8>/DC_Isolation_Cmd'
         */
        Merge8 = false;

        /* Merge: '<S4>/Merge9' incorporates:
         *  Constant: '<S277>/Constant'
         *  DataTypeConversion: '<S248>/DataTypeConversion'
         */
        Merge9 = CeOBCR_e_DCCntctr_Open;

        /* Merge: '<S4>/Merge10' incorporates:
         *  Constant: '<S290>/Calib'
         *  SignalConversion generated from: '<S8>/EV_DCTargetVoltage'
         */
        rtb_TmpSignalConversionAtVeBPCR = KeDCCR_U_DC_EV_DCTargetVoltage;

        /* Merge: '<S4>/Merge11' incorporates:
         *  Constant: '<S8>/Constant2'
         *  SignalConversion generated from: '<S8>/HCP_WldChkComplete'
         */
        Merge11 = false;

        /* Merge: '<S4>/Merge12' incorporates:
         *  Constant: '<S8>/Constant3'
         *  SignalConversion generated from: '<S8>/ReadyToChargeState'
         */
        Merge12 = false;

        /* Merge: '<S4>/Merge13' incorporates:
         *  Constant: '<S283>/Calib'
         *  SignalConversion generated from: '<S8>/SelectedServiceID'
         */
        Merge13 = KeDCCR_K_DC_SelectedServiceID;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S396>/DataTypeConversion' incorporates:
         *  Constant: '<S275>/Constant'
         *  DataTypeConversion: '<S247>/DataTypeConversion'
         *  Merge: '<S4>/Merge14'
         *  Outport: '<Root>/VeDCCR_e_SelPayOptn'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_SelPayOptn'
         */
        (void)Rte_Write_VeDCCR_e_SelPayOptn_Value(CeOBCR_e_NoPaymentSel);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge15' incorporates:
         *  Constant: '<S8>/Constant4'
         *  SignalConversion generated from: '<S8>/HCP_SessionStopCmd'
         */
        Merge15 = false;

        /* Merge: '<S4>/Merge16' incorporates:
         *  Constant: '<S262>/Constant'
         *  DataTypeConversion: '<S249>/DataTypeConversion'
         */
        Merge16 = CeOBCR_e_DCChrg_TestSts_NotInit;

        /* Merge: '<S4>/Merge18' incorporates:
         *  Constant: '<S279>/Calib'
         *  SignalConversion generated from: '<S8>/DCChrgEOL_TestCrnt'
         */
        rtb_TmpSignalConversionAtVeBP_e = KeDCCR_I_DCChrgEOL_TestSts;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S399>/DataTypeConversion' incorporates:
         *  Constant: '<S276>/Constant'
         *  DataTypeConversion: '<S254>/DataTypeConversion'
         *  Merge: '<S4>/Merge20'
         *  Outport: '<Root>/VeDCCR_e_DCChrgSysStat_SF'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_DCChrgSysStat_SF'
         */
        (void)Rte_Write_VeDCCR_e_DCChrgSysStat_SF_Value(CeOBCR_e_DCinit);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge21' incorporates:
         *  Constant: '<S8>/Constant5'
         *  SignalConversion generated from: '<S8>/V2GMode_EMEA'
         */
        Merge21 = false;

        /* Merge: '<S4>/Merge22' incorporates:
         *  Constant: '<S8>/Constant6'
         *  SignalConversion generated from: '<S8>/V2G_Perf_Inhibited'
         */
        Merge22 = false;

        /* Merge: '<S4>/Merge23' incorporates:
         *  Constant: '<S263>/Constant'
         *  DataTypeConversion: '<S244>/DataTypeConversion'
         */
        Merge23 = CeOBCR_e_CellVoltStat_Normal;

        /* Merge: '<S4>/Merge24' incorporates:
         *  Constant: '<S264>/Constant'
         *  DataTypeConversion: '<S253>/DataTypeConversion'
         */
        Merge24 = CeOBCR_e_ChrgCurrStat_Normal;

        /* Merge: '<S4>/Merge25' incorporates:
         *  Constant: '<S265>/Constant'
         *  DataTypeConversion: '<S255>/DataTypeConversion'
         */
        Merge25 = CeOBCR_e_BattTempStat_Normal;

        /* Merge: '<S4>/Merge26' incorporates:
         *  Constant: '<S266>/Constant'
         *  DataTypeConversion: '<S256>/DataTypeConversion'
         */
        Merge26 = CeOBCR_e_BattSOCStat_Normal;

        /* Merge: '<S4>/Merge29' incorporates:
         *  Constant: '<S287>/Calib'
         *  SignalConversion generated from: '<S8>/GBT_BattFullSOC'
         */
        rtb_TmpSignalConversionAtVeBP_m = KeDCCR_Pct_DC_GBT_BattFullSOC;

        /* Merge: '<S4>/Merge32' incorporates:
         *  Constant: '<S8>/Constant15'
         *  SignalConversion generated from: '<S8>/DCChrgInitialization'
         */
        Merge32 = false;

        /* Merge: '<S4>/Merge33' incorporates:
         *  Constant: '<S8>/Constant11'
         *  SignalConversion generated from: '<S8>/DCGBTReadyToCharge'
         */
        rtb_TmpSignalConversionAtVeVTHR = false;

        /* Merge: '<S4>/Merge34' incorporates:
         *  Constant: '<S8>/Constant12'
         *  SignalConversion generated from: '<S8>/DCGBTEVChrgPermit'
         */
        Merge34 = false;

        /* Merge: '<S4>/Merge35' incorporates:
         *  Constant: '<S288>/Calib'
         *  SignalConversion generated from: '<S8>/GBT_MaxBattTempAllwd'
         */
        rtb_TmpSignalConversionAtVeBP_g = KeDCCR_T_DC_GBT_MaxBattTempAllwd;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S394>/DataTypeConversion' incorporates:
         *  Constant: '<S271>/Constant'
         *  DataTypeConversion: '<S257>/DataTypeConversion'
         *  Merge: '<S4>/Merge36'
         *  Outport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_GBT_ChrgCntrolMethod'
         */
        (void)Rte_Write_VeDCCR_e_GBT_ChrgCntrolMethod_Value
            (CeOBCR_e_ChrgMthd_ConstantCurrent);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge37' incorporates:
         *  Constant: '<S261>/Constant'
         *  DataTypeConversion: '<S258>/DataTypeConversion'
         */
        Merge37 = CeOBCR_e_NoChrgrInterrupt;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S397>/DataTypeConversion' incorporates:
         *  Constant: '<S273>/Constant'
         *  DataTypeConversion: '<S245>/DataTypeConversion'
         *  Merge: '<S4>/Merge38'
         *  Outport: '<Root>/VeDCCR_e_SelectAppProtocol'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_SelectAppProtocol'
         */
        (void)Rte_Write_VeDCCR_e_SelectAppProtocol_Value(CeOBCR_e_DIN);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge39' incorporates:
         *  Constant: '<S8>/Constant14'
         *  SignalConversion generated from: '<S8>/SelectedSecProtocol'
         */
        Merge39 = false;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* DataTypeConversion: '<S398>/DataTypeConversion' incorporates:
         *  Constant: '<S272>/Constant'
         *  DataTypeConversion: '<S260>/DataTypeConversion'
         *  Merge: '<S4>/Merge40'
         *  Outport: '<Root>/VeDCCR_e_ChargeProgress'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_ChargeProgress'
         */
        (void)Rte_Write_VeDCCR_e_ChargeProgress_Value(CeOBCR_e_No_Request);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge41' incorporates:
         *  Constant: '<S274>/Constant'
         *  DataTypeConversion: '<S246>/DataTypeConversion'
         */
        Merge41 = CeOBCR_e_DC_ChrgType_Null;

        /* Merge: '<S4>/Merge42' incorporates:
         *  Constant: '<S8>/Constant13'
         *  SignalConversion generated from: '<S8>/S2_Cmd_DC'
         */
        Merge42 = false;

        /* Outputs for Function Call SubSystem: '<S1>/Output_Proc' */
        /* Gain: '<S425>/Gain' incorporates:
         *  Constant: '<S281>/Calib'
         *  Outport: '<Root>/VeDCCR_k_DCExitRsn_SF'
         *  SignalConversion generated from: '<S1>/VeDCCR_k_DCExitRsn_SF'
         *  SignalConversion generated from: '<S8>/DCExitRsn_SF'
         */
        (void)Rte_Write_VeDCCR_k_DCExitRsn_SF_Value(KeDCCR_K_DC_DCExitRsn_SF);

        /* DataTypeConversion: '<S401>/DataTypeConversion' incorporates:
         *  Constant: '<S270>/Constant'
         *  DataTypeConversion: '<S259>/DataTypeConversion'
         *  Merge: '<S4>/Merge44'
         *  Outport: '<Root>/VeDCCR_e_DCGBTChrgSysStat'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_DCGBTChrgSysStat'
         */
        (void)Rte_Write_VeDCCR_e_DCGBTChrgSysStat_Value(CeOBCR_e_DCGBTinit);

        /* DataTypeConversion: '<S403>/DataTypeConversion' incorporates:
         *  Constant: '<S267>/Constant'
         *  DataTypeConversion: '<S250>/DataTypeConversion'
         *  Merge: '<S4>/Merge17'
         *  Outport: '<Root>/VeDCCR_e_Protocol_Priority1'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_Protocol_Priority1'
         */
        (void)Rte_Write_VeDCCR_e_Protocol_Priority1_Value(CeOBCR_e_ISO_15118_2);

        /* DataTypeConversion: '<S406>/DataTypeConversion' incorporates:
         *  Constant: '<S268>/Constant'
         *  DataTypeConversion: '<S251>/DataTypeConversion'
         *  Merge: '<S4>/Merge19'
         *  Outport: '<Root>/VeDCCR_e_Protocol_Priority2'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_Protocol_Priority2'
         */
        (void)Rte_Write_VeDCCR_e_Protocol_Priority2_Value(CeOBCR_e_DIN_70121);

        /* DataTypeConversion: '<S393>/DataTypeConversion' incorporates:
         *  Constant: '<S269>/Constant'
         *  DataTypeConversion: '<S252>/DataTypeConversion'
         *  Merge: '<S4>/Merge45'
         *  Outport: '<Root>/VeDCCR_e_Protocol_Priority3'
         *  SignalConversion generated from: '<S1>/VeDCCR_e_Protocol_Priority3'
         */
        (void)Rte_Write_VeDCCR_e_Protocol_Priority3_Value(CeOBCR_e_No_Protocol);

        /* End of Outputs for SubSystem: '<S1>/Output_Proc' */

        /* Merge: '<S4>/Merge46' incorporates:
         *  Constant: '<S8>/Constant16'
         *  SignalConversion generated from: '<S8>/Max_Entries_SAScheduleTuple'
         */
        Merge46 = 0U;

        /* Merge: '<S4>/Merge47' incorporates:
         *  Constant: '<S8>/Constant17'
         *  SignalConversion generated from: '<S8>/VeDCCR_b_PnCFailure'
         */
        Merge47 = false;

        /* Merge: '<S4>/Merge48' incorporates:
         *  Constant: '<S8>/Constant18'
         *  SignalConversion generated from: '<S8>/VeDCCR_b_PnCRetryFail'
         */
        Merge48 = false;

        /* Merge: '<S4>/Merge49' incorporates:
         *  Constant: '<S8>/Constant19'
         *  SignalConversion generated from: '<S8>/V2H_MaxCurrPwrLim_NegVal'
         */
        Merge49 = false;

        /* Merge: '<S4>/Merge50' incorporates:
         *  Constant: '<S8>/Constant20'
         *  SignalConversion generated from: '<S8>/V2X_SelEnergyTransType'
         */
        Merge50 = false;

        /* Merge: '<S4>/Merge51' incorporates:
         *  Constant: '<S8>/Constant21'
         *  SignalConversion generated from: '<S8>/V2H_EVMax_P_Limit'
         */
        Merge51 = 0.0F;

        /* End of Outputs for SubSystem: '<S4>/DefaultsValues' */
    }

    /* End of If: '<S4>/If' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeDCCR_E_EVEnergyCapacity' incorporates:
     *  Gain: '<S416>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_E_EVEnergyCapacity'
     */
    (void)Rte_Write_VeDCCR_E_EVEnergyCapacity_Value(Merge7);

    /* Outport: '<Root>/VeDCCR_I_DCChrgEOL_TestCrnt' incorporates:
     *  Gain: '<S408>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_I_DCChrgEOL_TestCrnt'
     */
    (void)Rte_Write_VeDCCR_I_DCChrgEOL_TestCrnt_Value
        (rtb_TmpSignalConversionAtVeBP_e);

    /* Outport: '<Root>/VeDCCR_I_EVMax_I_Limit' incorporates:
     *  Gain: '<S413>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_I_EVMax_I_Limit'
     */
    (void)Rte_Write_VeDCCR_I_EVMax_I_Limit_Value(rtb_Switch_m);

    /* Switch: '<S407>/Switch20' incorporates:
     *  Constant: '<S432>/Calib'
     *  Constant: '<S447>/Calib'
     */
    if (KeDCCR_b_SelSrvcIDOvrd)
    {
        Merge13 = (uint16)KeDCCR_K_SelSrvcIDOvrdVal;
    }

    /* End of Switch: '<S407>/Switch20' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeDCCR_K_SelectedServiceID' incorporates:
     *  SignalConversion generated from: '<S1>/VeDCCR_K_SelectedServiceID'
     */
    (void)Rte_Write_VeDCCR_K_SelectedServiceID_Value(Merge13);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Output_Proc'
     */
    /* Outport: '<Root>/VeDCCR_P_EVMax_P_Limit' incorporates:
     *  Gain: '<S414>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_P_EVMax_P_Limit'
     */
    (void)Rte_Write_VeDCCR_P_EVMax_P_Limit_Value(rtb_TmpSignalConversionAtVeHV_e);

    /* Outport: '<Root>/VeDCCR_P_V2H_EVMaxPwrLim' incorporates:
     *  Gain: '<S410>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_P_V2H_EVMaxPwrLim'
     */
    (void)Rte_Write_VeDCCR_P_V2H_EVMaxPwrLim_Value(Merge51);

    /* Outport: '<Root>/VeDCCR_Pct_BattFullSOC' incorporates:
     *  Gain: '<S418>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_Pct_BattFullSOC'
     */
    (void)Rte_Write_VeDCCR_Pct_BattFullSOC_Value(rtb_TmpSignalConversionAtVeBP_m);

    /* Outport: '<Root>/VeDCCR_T_GBT_MaxBattTempAllwd' incorporates:
     *  Gain: '<S424>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_T_GBT_MaxBattTempAllwd'
     */
    (void)Rte_Write_VeDCCR_T_GBT_MaxBattTempAllwd_Value
        (rtb_TmpSignalConversionAtVeBP_g);

    /* Outport: '<Root>/VeDCCR_U_EVMax_V_Limit' incorporates:
     *  Gain: '<S415>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_U_EVMax_V_Limit'
     */
    (void)Rte_Write_VeDCCR_U_EVMax_V_Limit_Value(Merge6);

    /* Switch: '<S407>/Switch16' incorporates:
     *  Constant: '<S442>/Calib'
     */
    if (KeDCCR_b_EV_DCTargetVoltOvrd)
    {
        /* Outport: '<Root>/VeDCCR_U_EV_DCTargetVolt' incorporates:
         *  Constant: '<S433>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_U_EV_DCTargetVolt'
         */
        (void)Rte_Write_VeDCCR_U_EV_DCTargetVolt_Value
            (KeDCCR_U_EV_DCTargetVoltOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_U_EV_DCTargetVolt' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_U_EV_DCTargetVolt'
         */
        (void)Rte_Write_VeDCCR_U_EV_DCTargetVolt_Value
            (rtb_TmpSignalConversionAtVeBPCR);
    }

    /* End of Switch: '<S407>/Switch16' */

    /* Outport: '<Root>/VeDCCR_b_BattOverVolt' incorporates:
     *  Gain: '<S420>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_BattOverVolt'
     */
    (void)Rte_Write_VeDCCR_b_BattOverVolt_Value(false);

    /* Outport: '<Root>/VeDCCR_b_BattUnderVolt' incorporates:
     *  Gain: '<S421>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_BattUnderVolt'
     */
    (void)Rte_Write_VeDCCR_b_BattUnderVolt_Value(false);

    /* Outport: '<Root>/VeDCCR_b_CPIM_Error' incorporates:
     *  Gain: '<S412>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_CPIM_Error'
     */
    (void)Rte_Write_VeDCCR_b_CPIM_Error_Value(false);

    /* Outport: '<Root>/VeDCCR_b_CPIM_OT' incorporates:
     *  Gain: '<S417>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_CPIM_OT'
     */
    (void)Rte_Write_VeDCCR_b_CPIM_OT_Value(false);

    /* Switch: '<S407>/Switch30' incorporates:
     *  Constant: '<S434>/Calib'
     */
    if (KeDCCR_b_DCChrgInitialization_Ovrd)
    {
        /* Outport: '<Root>/VeDCCR_b_DCChrgInitialization' incorporates:
         *  Constant: '<S435>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_b_DCChrgInitialization'
         */
        (void)Rte_Write_VeDCCR_b_DCChrgInitialization_Value
            (KeDCCR_b_DCChrgInitialization_Val);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_b_DCChrgInitialization' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_b_DCChrgInitialization'
         */
        (void)Rte_Write_VeDCCR_b_DCChrgInitialization_Value(Merge32);
    }

    /* End of Switch: '<S407>/Switch30' */

    /* Outport: '<Root>/VeDCCR_b_DCGBTEVChrgPermit' incorporates:
     *  Gain: '<S423>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_DCGBTEVChrgPermit'
     */
    (void)Rte_Write_VeDCCR_b_DCGBTEVChrgPermit_Value(Merge34);

    /* Outport: '<Root>/VeDCCR_b_DCGBTReadyToCharge' incorporates:
     *  Gain: '<S422>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_DCGBTReadyToCharge'
     */
    (void)Rte_Write_VeDCCR_b_DCGBTReadyToCharge_Value
        (rtb_TmpSignalConversionAtVeVTHR);

    /* Switch: '<S407>/Switch24' incorporates:
     *  Constant: '<S438>/Calib'
     */
    if (KeDCCR_b_DC_Isolation_CmdOvrd)
    {
        /* Outport: '<Root>/VeDCCR_b_DC_Isolation_Cmd' incorporates:
         *  Constant: '<S439>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_b_DC_Isolation_Cmd'
         */
        (void)Rte_Write_VeDCCR_b_DC_Isolation_Cmd_Value
            (KeDCCR_b_DC_Isolation_CmdOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_b_DC_Isolation_Cmd' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_b_DC_Isolation_Cmd'
         */
        (void)Rte_Write_VeDCCR_b_DC_Isolation_Cmd_Value(Merge8);
    }

    /* End of Switch: '<S407>/Switch24' */

    /* Switch: '<S407>/Switch22' incorporates:
     *  Constant: '<S440>/Calib'
     */
    if (KeDCCR_b_EVReadyOvrd)
    {
        /* Outport: '<Root>/VeDCCR_b_EVReady' incorporates:
         *  Constant: '<S441>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_b_EVReady'
         */
        (void)Rte_Write_VeDCCR_b_EVReady_Value(KeDCCR_b_EVReadyOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_b_EVReady' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_b_EVReady'
         */
        (void)Rte_Write_VeDCCR_b_EVReady_Value(rtb_TmpSignalConversionAtVeOBCR);
    }

    /* End of Switch: '<S407>/Switch22' */

    /* Switch: '<S407>/Switch25' incorporates:
     *  Constant: '<S448>/Calib'
     */
    if (KeDCCR_b_SessionStpCmdOvrd)
    {
        /* Outport: '<Root>/VeDCCR_b_HCP_SessionStpCmd' incorporates:
         *  Constant: '<S449>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_b_HCP_SessionStpCmd'
         */
        (void)Rte_Write_VeDCCR_b_HCP_SessionStpCmd_Value
            (KeDCCR_b_SessionStpCmdOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_b_HCP_SessionStpCmd' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_b_HCP_SessionStpCmd'
         */
        (void)Rte_Write_VeDCCR_b_HCP_SessionStpCmd_Value(Merge15);
    }

    /* End of Switch: '<S407>/Switch25' */

    /* Outport: '<Root>/VeDCCR_b_J1772_S2_Close_DC_SF' incorporates:
     *  Gain: '<S427>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_J1772_S2_Close_DC_SF'
     */
    (void)Rte_Write_VeDCCR_b_J1772_S2_Close_DC_SF_Value(Merge42);

    /* Outport: '<Root>/VeDCCR_b_PnCFailure' incorporates:
     *  Gain: '<S429>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_PnCFailure'
     */
    (void)Rte_Write_VeDCCR_b_PnCFailure_Value(Merge47);

    /* Outport: '<Root>/VeDCCR_b_PnCRetryFail' incorporates:
     *  Gain: '<S430>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_PnCRetryFail'
     */
    (void)Rte_Write_VeDCCR_b_PnCRetryFail_Value(Merge48);

    /* Switch: '<S407>/Switch18' incorporates:
     *  Constant: '<S444>/Calib'
     */
    if (KeDCCR_b_RdyToChrgStOvrd)
    {
        /* Outport: '<Root>/VeDCCR_b_RdyToChrgSt' incorporates:
         *  Constant: '<S445>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_b_RdyToChrgSt'
         */
        (void)Rte_Write_VeDCCR_b_RdyToChrgSt_Value(KeDCCR_b_RdyToChrgStOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_b_RdyToChrgSt' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_b_RdyToChrgSt'
         */
        (void)Rte_Write_VeDCCR_b_RdyToChrgSt_Value(Merge12);
    }

    /* End of Switch: '<S407>/Switch18' */

    /* Outport: '<Root>/VeDCCR_b_SelectSecProtocol' incorporates:
     *  Gain: '<S426>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_SelectSecProtocol'
     */
    (void)Rte_Write_VeDCCR_b_SelectSecProtocol_Value(Merge39);

    /* Outport: '<Root>/VeDCCR_b_V2GPilotEnable' incorporates:
     *  Gain: '<S411>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_V2GPilotEnable'
     */
    (void)Rte_Write_VeDCCR_b_V2GPilotEnable_Value(Merge21);

    /* Outport: '<Root>/VeDCCR_b_V2G_Perf_Inhibited' incorporates:
     *  Gain: '<S419>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_V2G_Perf_Inhibited'
     */
    (void)Rte_Write_VeDCCR_b_V2G_Perf_Inhibited_Value(Merge22);

    /* Outport: '<Root>/VeDCCR_b_V2H_MaxCurrPwrLim_NegVal' incorporates:
     *  Gain: '<S431>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_V2H_MaxCurrPwrLim_NegVal'
     */
    (void)Rte_Write_VeDCCR_b_V2H_MaxCurrPwrLim_NegVal_Value(Merge49);

    /* Outport: '<Root>/VeDCCR_b_V2H_SelEnergyTransType' incorporates:
     *  Gain: '<S409>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_b_V2H_SelEnergyTransType'
     */
    (void)Rte_Write_VeDCCR_b_V2H_SelEnergyTransType_Value(Merge50);

    /* Switch: '<S407>/Switch17' incorporates:
     *  Constant: '<S451>/Calib'
     */
    if (KeDCCR_b_WldChkCompleteOvrd)
    {
        /* Outport: '<Root>/VeDCCR_b_WeldChkComplete' incorporates:
         *  Constant: '<S452>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_b_WeldChkComplete'
         */
        (void)Rte_Write_VeDCCR_b_WeldChkComplete_Value
            (KeDCCR_b_WldChkCompleteOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_b_WeldChkComplete' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_b_WeldChkComplete'
         */
        (void)Rte_Write_VeDCCR_b_WeldChkComplete_Value(Merge11);
    }

    /* End of Switch: '<S407>/Switch17' */

    /* Outport: '<Root>/VeDCCR_e_BattTemp_OOR' incorporates:
     *  DataTypeConversion: '<S404>/DataTypeConversion'
     *  Merge: '<S4>/Merge25'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_BattTemp_OOR'
     */
    (void)Rte_Write_VeDCCR_e_BattTemp_OOR_Value(Merge25);

    /* Outport: '<Root>/VeDCCR_e_CellVolt_OOR' incorporates:
     *  DataTypeConversion: '<S392>/DataTypeConversion'
     *  Merge: '<S4>/Merge23'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_CellVolt_OOR'
     */
    (void)Rte_Write_VeDCCR_e_CellVolt_OOR_Value(Merge23);

    /* Outport: '<Root>/VeDCCR_e_ChrgCurr_OOR' incorporates:
     *  DataTypeConversion: '<S400>/DataTypeConversion'
     *  Merge: '<S4>/Merge24'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_ChrgCurr_OOR'
     */
    (void)Rte_Write_VeDCCR_e_ChrgCurr_OOR_Value(Merge24);

    /* Outport: '<Root>/VeDCCR_e_DCChrg_TestSts' incorporates:
     *  DataTypeConversion: '<S402>/DataTypeConversion'
     *  Merge: '<S4>/Merge16'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_DCChrg_TestSts'
     */
    (void)Rte_Write_VeDCCR_e_DCChrg_TestSts_Value(Merge16);

    /* Switch: '<S407>/Switch35' incorporates:
     *  Constant: '<S436>/Calib'
     *  Constant: '<S453>/Calib'
     */
    if (KeDCCR_b_DC_ChrgTypeCmdOvrd)
    {
        Merge41 = KeDCCR_e_DC_ChrgTypeCmdOvrdVal;
    }

    /* Outport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeDCCR_e_DC_ChrgTypeCmd'
     *  Switch: '<S407>/Switch35'
     */
    (void)Rte_Write_VeDCCR_e_DC_ChrgTypeCmd_Value(Merge41);

    /* Switch: '<S407>/Switch15' incorporates:
     *  Constant: '<S437>/Calib'
     *  Constant: '<S454>/Calib'
     */
    if (KeDCCR_b_DC_CntctrCmdOvrd)
    {
        Merge9 = KeDCCR_e_DC_CntctrCmdOvrdVal;
    }

    /* Outport: '<Root>/VeDCCR_e_DC_CntctrCmd' incorporates:
     *  SignalConversion generated from: '<S1>/VeDCCR_e_DC_CntctrCmd'
     *  Switch: '<S407>/Switch15'
     */
    (void)Rte_Write_VeDCCR_e_DC_CntctrCmd_Value(Merge9);

    /* Outport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt' incorporates:
     *  DataTypeConversion: '<S395>/DataTypeConversion'
     *  Merge: '<S4>/Merge37'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_GBT_ChrgrInterrupt'
     */
    (void)Rte_Write_VeDCCR_e_GBT_ChrgrInterrupt_Value(Merge37);

    /* Outport: '<Root>/VeDCCR_e_SOC_OOR' incorporates:
     *  DataTypeConversion: '<S405>/DataTypeConversion'
     *  Merge: '<S4>/Merge26'
     *  SignalConversion generated from: '<S1>/VeDCCR_e_SOC_OOR'
     */
    (void)Rte_Write_VeDCCR_e_SOC_OOR_Value(Merge26);

    /* Switch: '<S407>/Switch23' incorporates:
     *  Constant: '<S443>/Calib'
     */
    if (KeDCCR_b_HCP_EVErrorCodeOvrd)
    {
        /* Outport: '<Root>/VeDCCR_e_HCP_EVErrorCode' incorporates:
         *  Constant: '<S455>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_k_HCP_EVErrorCode'
         */
        (void)Rte_Write_VeDCCR_e_HCP_EVErrorCode_Value
            (KeDCCR_k_HCP_EVErrorCodeOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_e_HCP_EVErrorCode' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_k_HCP_EVErrorCode'
         */
        (void)Rte_Write_VeDCCR_e_HCP_EVErrorCode_Value(Merge3);
    }

    /* End of Switch: '<S407>/Switch23' */

    /* Outport: '<Root>/VeDCCR_k_MaxEntriesSASScheduleTuple' incorporates:
     *  Gain: '<S428>/Gain'
     *  SignalConversion generated from: '<S1>/VeDCCR_k_MaxEntriesSASScheduleTuple'
     */
    (void)Rte_Write_VeDCCR_k_MaxEntriesSASScheduleTuple_Value(Merge46);

    /* Switch: '<S407>/Switch14' incorporates:
     *  Constant: '<S446>/Calib'
     */
    if (KeDCCR_b_SelEnrgyTxTypeOvrd)
    {
        /* Outport: '<Root>/VeDCCR_e_SelEnrgyTxType' incorporates:
         *  Constant: '<S456>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_k_SelEnrgyTxType'
         */
        (void)Rte_Write_VeDCCR_e_SelEnrgyTxType_Value
            (KeDCCR_k_SelEnrgyTxTypeOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_e_SelEnrgyTxType' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_k_SelEnrgyTxType'
         */
        (void)Rte_Write_VeDCCR_e_SelEnrgyTxType_Value(Merge1_f);
    }

    /* End of Switch: '<S407>/Switch14' */

    /* Switch: '<S407>/Switch21' incorporates:
     *  Constant: '<S450>/Calib'
     */
    if (KeDCCR_b_SrvcCategoryOvrd)
    {
        /* Outport: '<Root>/VeDCCR_e_Service_Category' incorporates:
         *  Constant: '<S457>/Calib'
         *  SignalConversion generated from: '<S1>/VeDCCR_k_Service_Category'
         */
        (void)Rte_Write_VeDCCR_e_Service_Category_Value
            (KeDCCR_k_SrvcCategoryOvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeDCCR_e_Service_Category' incorporates:
         *  SignalConversion generated from: '<S1>/VeDCCR_k_Service_Category'
         */
        (void)Rte_Write_VeDCCR_e_Service_Category_Value(Merge);
    }

    /* End of Switch: '<S407>/Switch21' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/DCCR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_DCCR_1

FUNC(void, DCCR_CODE) DCCR_PwrOff(void)
{

#if Rte_SysCon_Variant_DCCR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/DCCR_PwrOff' */
    /* Outport: '<Root>/EeDCCR_t_V2GPerfInhibTime_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_t_V2GPerfInhibTime'
     */
    (void)Rte_Write_EeDCCR_t_V2GPerfInhibTime_EeDCCR_t_V2GPerfInhibTime
        (EeDCCR_t_V2GPerfInhibTime);

    /* Outport: '<Root>/EeDCCR_t_V2GTime_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeOBCR_t_V2GTime'
     */
    (void)Rte_Write_EeDCCR_t_V2GTime_EeDCCR_t_V2GTime(EeDCCR_t_V2GTime);

    /* Outport: '<Root>/NeDCCR_E_TECharge_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_E_TECharge'
     */
    (void)Rte_Write_NeDCCR_E_TECharge_NeDCCR_E_TECharge
        (DCCR_ac_DW.NeDCCR_E_TECharge);

    /* Outport: '<Root>/NeDCCR_E_TEDischarge_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeOBCR_E_TEDischarge'
     */
    (void)Rte_Write_NeDCCR_E_TEDischarge_NeDCCR_E_TEDischarge
        (DCCR_ac_DW.NeDCCR_E_TEDischarge);

    /* End of Outputs for SubSystem: '<Root>/DCCR_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, DCCR_CODE) DCCR_PwrOn(void)
{
    float32 tmpWrite_15;
    float32 tmpWrite_18;
    float32 tmpWrite_4;
    float32 tmpWrite_5;
    float32 tmpWrite_6;
    float32 tmpWrite_7;
    float32 tmpWrite_a;
    float32 tmpWrite_p;
    float32 tmpWrite_u;
    sint16 tmpWrite_0;
    sint16 tmpWrite_1;
    sint16 tmpWrite_11;
    sint16 tmpWrite_3;
    uint16 tmpWrite_1c;
    uint16 tmpWrite_d;
    TeOBCR_e_BattSOCStatus tmpWrite_m;
    TeOBCR_e_BattTempStatus tmpWrite_l;
    TeOBCR_e_CellVoltageStatus tmpWrite_j;
    TeOBCR_e_ChargeProgress tmpWrite_z;
    TeOBCR_e_ChrgCntrlMthd tmpWrite_v;
    TeOBCR_e_ChrgCurrStatus tmpWrite_k;
    TeOBCR_e_ChrgrInterruptBST tmpWrite_w;
    TeOBCR_e_DCChrgStat tmpWrite_h;
    TeOBCR_e_DCChrg_TestSts tmpWrite_g;
    TeOBCR_e_DCCntctrCmd tmpWrite_9;
    TeOBCR_e_DCGBTChrgSysStat tmpWrite_12;
    TeOBCR_e_DC_ChrgTypeCmd tmpWrite_10;
    TeOBCR_e_HVCM_SelAppProtocol tmpWrite_x;
    TeOBCR_e_HVCM_SelPaymentOptn tmpWrite_e;
    TeOBCR_e_ProtocolPriority tmpWrite_19;
    TeOBCR_e_ProtocolPriority tmpWrite_1a;
    TeOBCR_e_ProtocolPriority tmpWrite_1b;
    boolean tmpWrite;
    boolean tmpWrite_13;
    boolean tmpWrite_14;
    boolean tmpWrite_16;
    boolean tmpWrite_17;
    boolean tmpWrite_1d;
    boolean tmpWrite_1e;
    boolean tmpWrite_2;
    boolean tmpWrite_8;
    boolean tmpWrite_b;
    boolean tmpWrite_c;
    boolean tmpWrite_f;
    boolean tmpWrite_i;
    boolean tmpWrite_n;
    boolean tmpWrite_o;
    boolean tmpWrite_q;
    boolean tmpWrite_r;
    boolean tmpWrite_s;
    boolean tmpWrite_t;
    boolean tmpWrite_y;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DCCR_PwrOn'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Variant Subsystem' */
#if Rte_SysCon_Variant_DCCR_1

    /* Outputs for Atomic SubSystem: '<S458>/Subsystem' */
    /* Outputs for Atomic SubSystem: '<S459>/DSM_Init' */
    /* DataStoreWrite: '<S462>/NeOBCR_E_TEDischarge' incorporates:
     *  Inport: '<Root>/NeDCCR_E_TEDischarge_PM_In'
     */
    (void)Rte_Read_NeDCCR_E_TEDischarge_Rx_NeDCCR_E_TEDischarge
        (&DCCR_ac_DW.NeDCCR_E_TEDischarge);

    /* DataStoreWrite: '<S462>/NeOBCR_E_TECharge' incorporates:
     *  Inport: '<Root>/NeDCCR_E_TECharge_PM_In'
     */
    (void)Rte_Read_NeDCCR_E_TECharge_Rx_NeDCCR_E_TECharge
        (&DCCR_ac_DW.NeDCCR_E_TECharge);

    /* DataStoreWrite: '<S462>/EeOBCR_t_V2GTime' incorporates:
     *  Inport: '<Root>/EeDCCR_t_V2GTime_PM_In'
     */
    (void)Rte_Read_EeDCCR_t_V2GTime_Rx_EeDCCR_t_V2GTime((&(EeDCCR_t_V2GTime)));

    /* DataStoreWrite: '<S462>/EeOBCR_t_V2GPerfInhibTime' incorporates:
     *  Inport: '<Root>/EeDCCR_t_V2GPerfInhibTime_PM_In'
     */
    (void)Rte_Read_EeDCCR_t_V2GPerfInhibTime_Rx_EeDCCR_t_V2GPerfInhibTime
        ((&(EeDCCR_t_V2GPerfInhibTime)));

    /* End of Outputs for SubSystem: '<S459>/DSM_Init' */

    /* DataStoreWrite: '<S461>/Data Store Write' incorporates:
     *  Inport: '<Root>/AeDCCR_y_DCChrgTestSts_Strimm_in'
     */
    (void)Rte_Read_AeDCCR_y_DCChrgTestSts_Rx_AeDCCR_y_DCChrgTestSts
        ((&(AeDCCR_y_DCChrgTestSts)));

    /* Outputs for Atomic SubSystem: '<S459>/Sub_Out_Init' */
    /* SystemInitialize for Outport: '<Root>/VeDCCR_b_J1772_S2_Close_DC_SF' incorporates:
     *  Outport: '<Root>/VeDCCR_E_EVEnergyCapacity'
     *  Outport: '<Root>/VeDCCR_I_DCChrgEOL_TestCrnt'
     *  Outport: '<Root>/VeDCCR_I_EVMax_I_Limit'
     *  Outport: '<Root>/VeDCCR_K_SelectedServiceID'
     *  Outport: '<Root>/VeDCCR_P_EVMax_P_Limit'
     *  Outport: '<Root>/VeDCCR_P_V2H_EVMaxPwrLim'
     *  Outport: '<Root>/VeDCCR_Pct_BattFullSOC'
     *  Outport: '<Root>/VeDCCR_T_GBT_MaxBattTempAllwd'
     *  Outport: '<Root>/VeDCCR_U_EVMax_V_Limit'
     *  Outport: '<Root>/VeDCCR_U_EV_DCTargetVolt'
     *  Outport: '<Root>/VeDCCR_b_BattOverVolt'
     *  Outport: '<Root>/VeDCCR_b_BattUnderVolt'
     *  Outport: '<Root>/VeDCCR_b_CPIM_Error'
     *  Outport: '<Root>/VeDCCR_b_CPIM_OT'
     *  Outport: '<Root>/VeDCCR_b_DCChrgInitialization'
     *  Outport: '<Root>/VeDCCR_b_DCGBTEVChrgPermit'
     *  Outport: '<Root>/VeDCCR_b_DCGBTReadyToCharge'
     *  Outport: '<Root>/VeDCCR_b_DC_Isolation_Cmd'
     *  Outport: '<Root>/VeDCCR_b_EVReady'
     *  Outport: '<Root>/VeDCCR_b_HCP_SessionStpCmd'
     *  Outport: '<Root>/VeDCCR_b_PnCFailure'
     *  Outport: '<Root>/VeDCCR_b_PnCRetryFail'
     *  Outport: '<Root>/VeDCCR_b_RdyToChrgSt'
     *  Outport: '<Root>/VeDCCR_b_SelectSecProtocol'
     *  Outport: '<Root>/VeDCCR_b_V2GPilotEnable'
     *  Outport: '<Root>/VeDCCR_b_V2G_Perf_Inhibited'
     *  Outport: '<Root>/VeDCCR_b_V2H_MaxCurrPwrLim_NegVal'
     *  Outport: '<Root>/VeDCCR_b_V2H_SelEnergyTransType'
     *  Outport: '<Root>/VeDCCR_b_WeldChkComplete'
     *  Outport: '<Root>/VeDCCR_e_BattTemp_OOR'
     *  Outport: '<Root>/VeDCCR_e_CellVolt_OOR'
     *  Outport: '<Root>/VeDCCR_e_ChargeProgress'
     *  Outport: '<Root>/VeDCCR_e_ChrgCurr_OOR'
     *  Outport: '<Root>/VeDCCR_e_DCChrgSysStat_SF'
     *  Outport: '<Root>/VeDCCR_e_DCChrg_TestSts'
     *  Outport: '<Root>/VeDCCR_e_DCGBTChrgSysStat'
     *  Outport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd'
     *  Outport: '<Root>/VeDCCR_e_DC_CntctrCmd'
     *  Outport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod'
     *  Outport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt'
     *  Outport: '<Root>/VeDCCR_e_HCP_EVErrorCode'
     *  Outport: '<Root>/VeDCCR_e_Protocol_Priority1'
     *  Outport: '<Root>/VeDCCR_e_Protocol_Priority2'
     *  Outport: '<Root>/VeDCCR_e_Protocol_Priority3'
     *  Outport: '<Root>/VeDCCR_e_SOC_OOR'
     *  Outport: '<Root>/VeDCCR_e_SelEnrgyTxType'
     *  Outport: '<Root>/VeDCCR_e_SelPayOptn'
     *  Outport: '<Root>/VeDCCR_e_SelectAppProtocol'
     *  Outport: '<Root>/VeDCCR_e_Service_Category'
     *  Outport: '<Root>/VeDCCR_k_DCExitRsn_SF'
     *  Outport: '<Root>/VeDCCR_k_MaxEntriesSASScheduleTuple'
     */
    DCCR_ac_Sub_Out_Init(&tmpWrite, &tmpWrite_0, &tmpWrite_1, &tmpWrite_2,
                         &tmpWrite_3, &tmpWrite_4, &tmpWrite_5, &tmpWrite_6,
                         &tmpWrite_8, &tmpWrite_9, &tmpWrite_a, &tmpWrite_b,
                         &tmpWrite_c, &tmpWrite_d, &tmpWrite_e, &tmpWrite_f,
                         &tmpWrite_h, &tmpWrite_g, &tmpWrite_i, &tmpWrite_j,
                         &tmpWrite_k, &tmpWrite_l, &tmpWrite_m, &tmpWrite_n,
                         &tmpWrite_o, &tmpWrite_p, &tmpWrite_q, &tmpWrite_r,
                         &tmpWrite_s, &tmpWrite_t, &tmpWrite_u, &tmpWrite_v,
                         &tmpWrite_w, &tmpWrite_x, &tmpWrite_y, &tmpWrite_z,
                         &tmpWrite_10, &tmpWrite_11, &tmpWrite_12, &tmpWrite_13,
                         &tmpWrite_14, &tmpWrite_15, &tmpWrite_7, &tmpWrite_16,
                         &tmpWrite_17, &tmpWrite_18, &tmpWrite_19, &tmpWrite_1a,
                         &tmpWrite_1b, &tmpWrite_1c, &tmpWrite_1d, &tmpWrite_1e);

    /* End of Outputs for SubSystem: '<S459>/Sub_Out_Init' */
    /* End of Outputs for SubSystem: '<S458>/Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S458>/Subsystem1' */
    /* SystemInitialize for Outport: '<Root>/VeDCCR_b_J1772_S2_Close_DC_SF' incorporates:
     *  Outport: '<Root>/VeDCCR_E_EVEnergyCapacity'
     *  Outport: '<Root>/VeDCCR_I_DCChrgEOL_TestCrnt'
     *  Outport: '<Root>/VeDCCR_I_EVMax_I_Limit'
     *  Outport: '<Root>/VeDCCR_K_SelectedServiceID'
     *  Outport: '<Root>/VeDCCR_P_EVMax_P_Limit'
     *  Outport: '<Root>/VeDCCR_P_V2H_EVMaxPwrLim'
     *  Outport: '<Root>/VeDCCR_Pct_BattFullSOC'
     *  Outport: '<Root>/VeDCCR_T_GBT_MaxBattTempAllwd'
     *  Outport: '<Root>/VeDCCR_U_EVMax_V_Limit'
     *  Outport: '<Root>/VeDCCR_U_EV_DCTargetVolt'
     *  Outport: '<Root>/VeDCCR_b_BattOverVolt'
     *  Outport: '<Root>/VeDCCR_b_BattUnderVolt'
     *  Outport: '<Root>/VeDCCR_b_CPIM_Error'
     *  Outport: '<Root>/VeDCCR_b_CPIM_OT'
     *  Outport: '<Root>/VeDCCR_b_DCChrgInitialization'
     *  Outport: '<Root>/VeDCCR_b_DCGBTEVChrgPermit'
     *  Outport: '<Root>/VeDCCR_b_DCGBTReadyToCharge'
     *  Outport: '<Root>/VeDCCR_b_DC_Isolation_Cmd'
     *  Outport: '<Root>/VeDCCR_b_EVReady'
     *  Outport: '<Root>/VeDCCR_b_HCP_SessionStpCmd'
     *  Outport: '<Root>/VeDCCR_b_PnCFailure'
     *  Outport: '<Root>/VeDCCR_b_PnCRetryFail'
     *  Outport: '<Root>/VeDCCR_b_RdyToChrgSt'
     *  Outport: '<Root>/VeDCCR_b_SelectSecProtocol'
     *  Outport: '<Root>/VeDCCR_b_V2GPilotEnable'
     *  Outport: '<Root>/VeDCCR_b_V2G_Perf_Inhibited'
     *  Outport: '<Root>/VeDCCR_b_V2H_MaxCurrPwrLim_NegVal'
     *  Outport: '<Root>/VeDCCR_b_V2H_SelEnergyTransType'
     *  Outport: '<Root>/VeDCCR_b_WeldChkComplete'
     *  Outport: '<Root>/VeDCCR_e_BattTemp_OOR'
     *  Outport: '<Root>/VeDCCR_e_CellVolt_OOR'
     *  Outport: '<Root>/VeDCCR_e_ChargeProgress'
     *  Outport: '<Root>/VeDCCR_e_ChrgCurr_OOR'
     *  Outport: '<Root>/VeDCCR_e_DCChrgSysStat_SF'
     *  Outport: '<Root>/VeDCCR_e_DCChrg_TestSts'
     *  Outport: '<Root>/VeDCCR_e_DCGBTChrgSysStat'
     *  Outport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd'
     *  Outport: '<Root>/VeDCCR_e_DC_CntctrCmd'
     *  Outport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod'
     *  Outport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt'
     *  Outport: '<Root>/VeDCCR_e_HCP_EVErrorCode'
     *  Outport: '<Root>/VeDCCR_e_Protocol_Priority1'
     *  Outport: '<Root>/VeDCCR_e_Protocol_Priority2'
     *  Outport: '<Root>/VeDCCR_e_Protocol_Priority3'
     *  Outport: '<Root>/VeDCCR_e_SOC_OOR'
     *  Outport: '<Root>/VeDCCR_e_SelEnrgyTxType'
     *  Outport: '<Root>/VeDCCR_e_SelPayOptn'
     *  Outport: '<Root>/VeDCCR_e_SelectAppProtocol'
     *  Outport: '<Root>/VeDCCR_e_Service_Category'
     *  Outport: '<Root>/VeDCCR_k_DCExitRsn_SF'
     *  Outport: '<Root>/VeDCCR_k_MaxEntriesSASScheduleTuple'
     */
    DCCR_ac_Sub_Out_Init(&tmpWrite, &tmpWrite_0, &tmpWrite_1, &tmpWrite_2,
                         &tmpWrite_3, &tmpWrite_4, &tmpWrite_5, &tmpWrite_6,
                         &tmpWrite_8, &tmpWrite_9, &tmpWrite_a, &tmpWrite_b,
                         &tmpWrite_c, &tmpWrite_d, &tmpWrite_e, &tmpWrite_f,
                         &tmpWrite_h, &tmpWrite_g, &tmpWrite_i, &tmpWrite_j,
                         &tmpWrite_k, &tmpWrite_l, &tmpWrite_m, &tmpWrite_n,
                         &tmpWrite_o, &tmpWrite_p, &tmpWrite_q, &tmpWrite_r,
                         &tmpWrite_s, &tmpWrite_t, &tmpWrite_u, &tmpWrite_v,
                         &tmpWrite_w, &tmpWrite_x, &tmpWrite_y, &tmpWrite_z,
                         &tmpWrite_10, &tmpWrite_11, &tmpWrite_12, &tmpWrite_13,
                         &tmpWrite_14, &tmpWrite_15, &tmpWrite_7, &tmpWrite_16,
                         &tmpWrite_17, &tmpWrite_18, &tmpWrite_19, &tmpWrite_1a,
                         &tmpWrite_1b, &tmpWrite_1c, &tmpWrite_1d, &tmpWrite_1e);

    /* End of Outputs for SubSystem: '<S458>/Subsystem1' */
#endif

    /* End of Outputs for SubSystem: '<S3>/Variant Subsystem' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* Outport: '<Root>/VeDCCR_b_J1772_S2_Close_DC_SF' */
    (void)Rte_Write_VeDCCR_b_J1772_S2_Close_DC_SF_Value(tmpWrite);

    /* Outport: '<Root>/VeDCCR_e_Service_Category' */
    (void)Rte_Write_VeDCCR_e_Service_Category_Value(tmpWrite_0);

    /* Outport: '<Root>/VeDCCR_e_SelEnrgyTxType' */
    (void)Rte_Write_VeDCCR_e_SelEnrgyTxType_Value(tmpWrite_1);

    /* Outport: '<Root>/VeDCCR_b_EVReady' */
    (void)Rte_Write_VeDCCR_b_EVReady_Value(tmpWrite_2);

    /* Outport: '<Root>/VeDCCR_e_HCP_EVErrorCode' */
    (void)Rte_Write_VeDCCR_e_HCP_EVErrorCode_Value(tmpWrite_3);

    /* Outport: '<Root>/VeDCCR_I_EVMax_I_Limit' */
    (void)Rte_Write_VeDCCR_I_EVMax_I_Limit_Value(tmpWrite_4);

    /* Outport: '<Root>/VeDCCR_P_EVMax_P_Limit' */
    (void)Rte_Write_VeDCCR_P_EVMax_P_Limit_Value(tmpWrite_5);

    /* Outport: '<Root>/VeDCCR_U_EVMax_V_Limit' */
    (void)Rte_Write_VeDCCR_U_EVMax_V_Limit_Value(tmpWrite_6);

    /* Outport: '<Root>/VeDCCR_E_EVEnergyCapacity' */
    (void)Rte_Write_VeDCCR_E_EVEnergyCapacity_Value(tmpWrite_7);

    /* Outport: '<Root>/VeDCCR_b_DC_Isolation_Cmd' */
    (void)Rte_Write_VeDCCR_b_DC_Isolation_Cmd_Value(tmpWrite_8);

    /* Outport: '<Root>/VeDCCR_e_DC_CntctrCmd' */
    (void)Rte_Write_VeDCCR_e_DC_CntctrCmd_Value(tmpWrite_9);

    /* Outport: '<Root>/VeDCCR_U_EV_DCTargetVolt' */
    (void)Rte_Write_VeDCCR_U_EV_DCTargetVolt_Value(tmpWrite_a);

    /* Outport: '<Root>/VeDCCR_b_WeldChkComplete' */
    (void)Rte_Write_VeDCCR_b_WeldChkComplete_Value(tmpWrite_b);

    /* Outport: '<Root>/VeDCCR_b_RdyToChrgSt' */
    (void)Rte_Write_VeDCCR_b_RdyToChrgSt_Value(tmpWrite_c);

    /* Outport: '<Root>/VeDCCR_K_SelectedServiceID' */
    (void)Rte_Write_VeDCCR_K_SelectedServiceID_Value(tmpWrite_d);

    /* Outport: '<Root>/VeDCCR_e_SelPayOptn' */
    (void)Rte_Write_VeDCCR_e_SelPayOptn_Value(tmpWrite_e);

    /* Outport: '<Root>/VeDCCR_b_HCP_SessionStpCmd' */
    (void)Rte_Write_VeDCCR_b_HCP_SessionStpCmd_Value(tmpWrite_f);

    /* Outport: '<Root>/VeDCCR_e_DCChrg_TestSts' */
    (void)Rte_Write_VeDCCR_e_DCChrg_TestSts_Value(tmpWrite_g);

    /* Outport: '<Root>/VeDCCR_e_DCChrgSysStat_SF' */
    (void)Rte_Write_VeDCCR_e_DCChrgSysStat_SF_Value(tmpWrite_h);

    /* Outport: '<Root>/VeDCCR_b_DCChrgInitialization' */
    (void)Rte_Write_VeDCCR_b_DCChrgInitialization_Value(tmpWrite_i);

    /* Outport: '<Root>/VeDCCR_e_CellVolt_OOR' */
    (void)Rte_Write_VeDCCR_e_CellVolt_OOR_Value(tmpWrite_j);

    /* Outport: '<Root>/VeDCCR_e_ChrgCurr_OOR' */
    (void)Rte_Write_VeDCCR_e_ChrgCurr_OOR_Value(tmpWrite_k);

    /* Outport: '<Root>/VeDCCR_e_BattTemp_OOR' */
    (void)Rte_Write_VeDCCR_e_BattTemp_OOR_Value(tmpWrite_l);

    /* Outport: '<Root>/VeDCCR_e_SOC_OOR' */
    (void)Rte_Write_VeDCCR_e_SOC_OOR_Value(tmpWrite_m);

    /* Outport: '<Root>/VeDCCR_b_CPIM_Error' */
    (void)Rte_Write_VeDCCR_b_CPIM_Error_Value(tmpWrite_n);

    /* Outport: '<Root>/VeDCCR_b_CPIM_OT' */
    (void)Rte_Write_VeDCCR_b_CPIM_OT_Value(tmpWrite_o);

    /* Outport: '<Root>/VeDCCR_Pct_BattFullSOC' */
    (void)Rte_Write_VeDCCR_Pct_BattFullSOC_Value(tmpWrite_p);

    /* Outport: '<Root>/VeDCCR_b_BattOverVolt' */
    (void)Rte_Write_VeDCCR_b_BattOverVolt_Value(tmpWrite_q);

    /* Outport: '<Root>/VeDCCR_b_BattUnderVolt' */
    (void)Rte_Write_VeDCCR_b_BattUnderVolt_Value(tmpWrite_r);

    /* Outport: '<Root>/VeDCCR_b_DCGBTReadyToCharge' */
    (void)Rte_Write_VeDCCR_b_DCGBTReadyToCharge_Value(tmpWrite_s);

    /* Outport: '<Root>/VeDCCR_b_DCGBTEVChrgPermit' */
    (void)Rte_Write_VeDCCR_b_DCGBTEVChrgPermit_Value(tmpWrite_t);

    /* Outport: '<Root>/VeDCCR_T_GBT_MaxBattTempAllwd' */
    (void)Rte_Write_VeDCCR_T_GBT_MaxBattTempAllwd_Value(tmpWrite_u);

    /* Outport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod' */
    (void)Rte_Write_VeDCCR_e_GBT_ChrgCntrolMethod_Value(tmpWrite_v);

    /* Outport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt' */
    (void)Rte_Write_VeDCCR_e_GBT_ChrgrInterrupt_Value(tmpWrite_w);

    /* Outport: '<Root>/VeDCCR_e_SelectAppProtocol' */
    (void)Rte_Write_VeDCCR_e_SelectAppProtocol_Value(tmpWrite_x);

    /* Outport: '<Root>/VeDCCR_b_SelectSecProtocol' */
    (void)Rte_Write_VeDCCR_b_SelectSecProtocol_Value(tmpWrite_y);

    /* Outport: '<Root>/VeDCCR_e_ChargeProgress' */
    (void)Rte_Write_VeDCCR_e_ChargeProgress_Value(tmpWrite_z);

    /* Outport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd' */
    (void)Rte_Write_VeDCCR_e_DC_ChrgTypeCmd_Value(tmpWrite_10);

    /* Outport: '<Root>/VeDCCR_k_DCExitRsn_SF' */
    (void)Rte_Write_VeDCCR_k_DCExitRsn_SF_Value(tmpWrite_11);

    /* Outport: '<Root>/VeDCCR_e_DCGBTChrgSysStat' */
    (void)Rte_Write_VeDCCR_e_DCGBTChrgSysStat_Value(tmpWrite_12);

    /* Outport: '<Root>/VeDCCR_b_V2G_Perf_Inhibited' */
    (void)Rte_Write_VeDCCR_b_V2G_Perf_Inhibited_Value(tmpWrite_13);

    /* Outport: '<Root>/VeDCCR_b_V2GPilotEnable' */
    (void)Rte_Write_VeDCCR_b_V2GPilotEnable_Value(tmpWrite_14);

    /* Outport: '<Root>/VeDCCR_I_DCChrgEOL_TestCrnt' */
    (void)Rte_Write_VeDCCR_I_DCChrgEOL_TestCrnt_Value(tmpWrite_15);

    /* Outport: '<Root>/VeDCCR_b_V2H_MaxCurrPwrLim_NegVal' */
    (void)Rte_Write_VeDCCR_b_V2H_MaxCurrPwrLim_NegVal_Value(tmpWrite_16);

    /* Outport: '<Root>/VeDCCR_b_V2H_SelEnergyTransType' */
    (void)Rte_Write_VeDCCR_b_V2H_SelEnergyTransType_Value(tmpWrite_17);

    /* Outport: '<Root>/VeDCCR_P_V2H_EVMaxPwrLim' */
    (void)Rte_Write_VeDCCR_P_V2H_EVMaxPwrLim_Value(tmpWrite_18);

    /* Outport: '<Root>/VeDCCR_e_Protocol_Priority1' */
    (void)Rte_Write_VeDCCR_e_Protocol_Priority1_Value(tmpWrite_19);

    /* Outport: '<Root>/VeDCCR_e_Protocol_Priority2' */
    (void)Rte_Write_VeDCCR_e_Protocol_Priority2_Value(tmpWrite_1a);

    /* Outport: '<Root>/VeDCCR_e_Protocol_Priority3' */
    (void)Rte_Write_VeDCCR_e_Protocol_Priority3_Value(tmpWrite_1b);

    /* Outport: '<Root>/VeDCCR_k_MaxEntriesSASScheduleTuple' */
    (void)Rte_Write_VeDCCR_k_MaxEntriesSASScheduleTuple_Value(tmpWrite_1c);

    /* Outport: '<Root>/VeDCCR_b_PnCFailure' */
    (void)Rte_Write_VeDCCR_b_PnCFailure_Value(tmpWrite_1d);

    /* Outport: '<Root>/VeDCCR_b_PnCRetryFail' */
    (void)Rte_Write_VeDCCR_b_PnCRetryFail_Value(tmpWrite_1e);
}

/* Model initialize function */
FUNC(void, DCCR_CODE) DCCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
#if Rte_SysCon_Variant_DCCR_1

    VeDCCR_e_EVSEStsCode = CeIDCR_e_EVSEStsCode_No_Data;

#endif

#if Rte_SysCon_Variant_DCCR_1

    VeDCCR_e_DcChargeTypeStat = CeBPCR_e_HVDcChargeStat_400V;

#endif

#if Rte_SysCon_Variant_DCCR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/DCCR_MedTED' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DCCI'
     */
    /* SystemInitialize for Switch: '<S5>/Switch42' incorporates:
     *  Outport: '<S5>/EVSEStsCode'
     */
    VeDCCR_e_EVSEStsCode = CeIDCR_e_EVSEStsCode_No_Data;

    /* SystemInitialize for Switch: '<S5>/Switch105' incorporates:
     *  Outport: '<S5>/DcChargeTypeStat'
     */
    VeDCCR_e_DcChargeTypeStat = CeBPCR_e_HVDcChargeStat_400V;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/DCCR_MedTED' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_DC_CntctrCmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_50'
     */
    (void)Rte_Write_VeDCCR_e_DC_CntctrCmd_Value(CeOBCR_e_DCCntctr_Open);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_SelPayOptn' incorporates:
     *  Merge: '<Root>/Merge_Outport_57'
     */
    (void)Rte_Write_VeDCCR_e_SelPayOptn_Value(CeOBCR_e_NoPaymentSel);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_DCChrg_TestSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_61'
     */
    (void)Rte_Write_VeDCCR_e_DCChrg_TestSts_Value
        (CeOBCR_e_DCChrg_TestSts_NotInit);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_DCChrgSysStat_SF' incorporates:
     *  Merge: '<Root>/Merge_Outport_72'
     */
    (void)Rte_Write_VeDCCR_e_DCChrgSysStat_SF_Value(CeOBCR_e_DCinit);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_CellVolt_OOR' incorporates:
     *  Merge: '<Root>/Merge_Outport_75'
     */
    (void)Rte_Write_VeDCCR_e_CellVolt_OOR_Value(CeOBCR_e_CellVoltStat_Normal);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_ChrgCurr_OOR' incorporates:
     *  Merge: '<Root>/Merge_Outport_76'
     */
    (void)Rte_Write_VeDCCR_e_ChrgCurr_OOR_Value(CeOBCR_e_ChrgCurrStat_Normal);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_BattTemp_OOR' incorporates:
     *  Merge: '<Root>/Merge_Outport_77'
     */
    (void)Rte_Write_VeDCCR_e_BattTemp_OOR_Value(CeOBCR_e_BattTempStat_Normal);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_SOC_OOR' incorporates:
     *  Merge: '<Root>/Merge_Outport_78'
     */
    (void)Rte_Write_VeDCCR_e_SOC_OOR_Value(CeOBCR_e_BattSOCStat_Normal);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_GBT_ChrgCntrolMethod' incorporates:
     *  Merge: '<Root>/Merge_Outport_96'
     */
    (void)Rte_Write_VeDCCR_e_GBT_ChrgCntrolMethod_Value(CeOBCR_e_ChrgMthd_Init);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_GBT_ChrgrInterrupt' incorporates:
     *  Merge: '<Root>/Merge_Outport_97'
     */
    (void)Rte_Write_VeDCCR_e_GBT_ChrgrInterrupt_Value(CeOBCR_e_NoChrgrInterrupt);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_SelectAppProtocol' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeDCCR_e_SelectAppProtocol_Value(CeOBCR_e_DIN);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_ChargeProgress' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeDCCR_e_ChargeProgress_Value(CeOBCR_e_No_Request);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_DC_ChrgTypeCmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_15'
     */
    (void)Rte_Write_VeDCCR_e_DC_ChrgTypeCmd_Value(CeOBCR_e_DC_ChrgType_Null);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_DCGBTChrgSysStat' incorporates:
     *  Merge: '<Root>/Merge_Outport_3'
     */
    (void)Rte_Write_VeDCCR_e_DCGBTChrgSysStat_Value(CeOBCR_e_DCGBTinit);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_Protocol_Priority1' incorporates:
     *  Merge: '<Root>/Merge_Outport_10'
     */
    (void)Rte_Write_VeDCCR_e_Protocol_Priority1_Value(CeOBCR_e_No_Protocol);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_Protocol_Priority2' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeDCCR_e_Protocol_Priority2_Value(CeOBCR_e_No_Protocol);

    /* SystemInitialize for Outport: '<Root>/VeDCCR_e_Protocol_Priority3' incorporates:
     *  Merge: '<Root>/Merge_Outport_18'
     */
    (void)Rte_Write_VeDCCR_e_Protocol_Priority3_Value(CeOBCR_e_No_Protocol);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
