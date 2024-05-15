/*
 * File: SCPR_ac.c
 *
 * Code generated for Simulink model 'SCPR_ac'.
 *
 * Model version                  : 1.114
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Mon Apr  8 13:29:26 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SCPR_ac.h"

/* Named constants for Chart: '<S125>/CityBEV_Button' */
#if Rte_SysCon_Variant_SCPR_1
#define SCPR_ac_IN_AllowChrg           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_SCPR_1
#define SCPR_ac_IN_DontAllowChrg       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_SCPR_1
#define SCPR_ac_IN_Init                ((uint8)3U)
#endif

/* Named constants for Chart: '<S129>/PHEVButton' */
#if Rte_SysCon_Variant_SCPR_1
#define SCPR_ac_IN_ChargeNowOverride   ((uint8)1U)
#endif

#if Rte_SysCon_Variant_SCPR_1
#define SCP_IN_DisableChargeNowOverride ((uint8)2U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_SCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) HeSCPR_b_CancelAndButtonLogic_enbl
    = 1;                               /* Referenced by:
                                        * '<S213>/Calib'
                                        * '<S128>/Calib'
                                        * '<S249>/Calib'
                                        * '<S451>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) HeSCPR_b_SOCestimation_enbl = 1;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) HeSCPR_t_ExecRate = 0.1F;/* Referenced by:
                                                                      * '<S357>/Calib'
                                                                      * '<S754>/Calib'
                                                                      * '<S140>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KaSCPR_k_CenturyConvFactor[44] =
{
    6.0F, 4.0F, 2.0F, 0.0F, 6.0F, 4.0F, 2.0F, 0.0F, 6.0F, 4.0F, 2.0F, 0.0F, 6.0F,
    4.0F, 2.0F, 0.0F, 6.0F, 4.0F, 2.0F, 0.0F, 6.0F, 4.0F, 2.0F, 0.0F, 6.0F, 4.0F,
    2.0F, 0.0F, 6.0F, 4.0F, 2.0F, 0.0F, 6.0F, 4.0F, 2.0F, 0.0F, 6.0F, 4.0F, 2.0F,
    0.0F, 6.0F, 4.0F, 2.0F, 0.0F
} ;                                    /* Referenced by: '<S727>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KaSCPR_k_MonthIfLeapYearFactor[13]
    =
{
    0.0F, 6.0F, 2.0F, 3.0F, 6.0F, 1.0F, 4.0F, 6.0F, 2.0F, 5.0F, 0.0F, 3.0F, 5.0F
} ;                                    /* Referenced by: '<S724>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KaSCPR_k_MonthIfNotLeapYear[13] =
{
    0.0F, 0.0F, 3.0F, 3.0F, 6.0F, 1.0F, 4.0F, 6.0F, 2.0F, 5.0F, 0.0F, 3.0F, 5.0F
} ;                                    /* Referenced by: '<S725>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_ButtonActive = 600U;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_ButtonEnblDelay = 15U;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_CancW_NowIndxDel = 10U;/* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_CancW_WUDelay = 50U;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_CancW_WindEndDelay = 25U;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_ChrgCompleteDelay = 20U;/* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_CoCH_VehLocDbnc = 60U;/* Referenced by:
                                                                      * '<S307>/Calib'
                                                                      * '<S329>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_DNR_ValHoldDbnc = 50U;/* Referenced by: '<S762>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_DNR_secUpdateWU = 30U;/* Referenced by: '<S763>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_DbcTimeToReset = 10U;/* Referenced by: '<S314>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_DbncLowSOCBdyRq = 30U;/* Referenced by: '<S644>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_DisplayUFDelayWU = 17U;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT)
    KeSCPR_Cnt_DoublePlugin_Reset_Debounce = 1U;/* Referenced by: '<S617>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_FOTACancelWait = 100U;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_FOTAcnflt_DelayWU = 56U;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_Cnt_IconDbnc = 20.0F;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_OutputDelay = 21U;/* Referenced by: '<S10>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_PlugInDelayUF = 22U;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_RadioChrgEnblDbncTm =
    70U;                               /* Referenced by: '<S612>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_SamplesOfDelay = 15U;/* Referenced by:
                                                                      * '<S511>/Calib'
                                                                      * '<S532>/Calib'
                                                                      * '<S551>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_SchArrayEnblTime = 100U;/* Referenced by:
                                                                      * '<S676>/Calib'
                                                                      * '<S684>/Calib'
                                                                      * '<S695>/Calib'
                                                                      * '<S708>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_SchToChargeDbnc = 10U;/* Referenced by: '<S294>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_SchTypeSaveMaxT = 1800U;/* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_SecCntDelayWU = 32U;/* Referenced by: '<S773>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_SmpDelayChrgNow = 5U;/* Referenced by: '<S159>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_UFDelayAtWU = 15U;/* Referenced by:
                                                                      * '<S242>/Calib'
                                                                      * '<S384>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_WUDelayTime = 13U;/* Referenced by: '<S659>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_Cnt_WUDelay_RTC = 20U;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_I_ChrgCrntAvailOvrdVal =
    0.0F;                              /* Referenced by: '<S863>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_I_ChrgCurrEstSOCOvrdVal =
    0.0F;                              /* Referenced by: '<S864>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_I_CurrOffset_EstSOC = 0.0F;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_I_MaxAllwdCurr_OvrdVal =
    0.0F;                              /* Referenced by: '<S865>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_DateTmDay_OvrdVal = 0.0F;/* Referenced by: '<S814>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_DateTmHour_OvrdVal = 0.0F;/* Referenced by: '<S815>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_DateTmMin_OvrdVal = 0.0F;/* Referenced by: '<S816>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_DateTmMon_OvrdVal = 0.0F;/* Referenced by: '<S817>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_DateTmSec_OvrdVal = 0.0F;/* Referenced by: '<S818>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_DateTmYear_OvrdVal = 0.0F;/* Referenced by: '<S819>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Day1_OvrdVal = 0.0F;/* Referenced by: '<S820>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Day2_OvrdVal = 0.0F;/* Referenced by: '<S821>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Month1_OvrdVal =
    0.0F;                              /* Referenced by: '<S822>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Month2_OvrdVal =
    0.0F;                              /* Referenced by: '<S823>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Year1_OvrdVal = 0.0F;/* Referenced by: '<S824>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Year2_OvrdVal = 0.0F;/* Referenced by: '<S825>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Year3_OvrdVal = 0.0F;/* Referenced by: '<S826>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Date_Year4_OvrdVal = 0.0F;/* Referenced by: '<S827>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch1EndHr_OvrdVal = 0;/* Referenced by: '<S925>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch1EndMin_OvrdVal = 0;/* Referenced by: '<S926>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch1StartHr_OvrdVal = 0;/* Referenced by: '<S927>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch1StartMin_OvrdVal =
    0;                                 /* Referenced by: '<S928>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint8, SCPR_VAR_INIT) KeSCPR_K_HU_Sch1_Day_OvrdVal = 0U;/* Referenced by: '<S929>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch2EndHr_OvrdVal = 0;/* Referenced by: '<S934>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch2EndMin_OvrdVal = 0;/* Referenced by: '<S935>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch2StartHr_OvrdVal = 0;/* Referenced by: '<S936>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch2StartMin_OvrdVal =
    0;                                 /* Referenced by: '<S937>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint8, SCPR_VAR_INIT) KeSCPR_K_HU_Sch2_Day_OvrdVal = 0U;/* Referenced by: '<S938>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch3StartHr_OvrdVal = 0;/* Referenced by: '<S943>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch3StartMin_OvrdVal =
    0;                                 /* Referenced by: '<S944>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint8, SCPR_VAR_INIT) KeSCPR_K_HU_Sch3_Day_OvrdVal = 0U;/* Referenced by: '<S945>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch4StartHr_OvrdVal = 0;/* Referenced by: '<S949>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_HU_Sch4StartMin_OvrdVal =
    0;                                 /* Referenced by: '<S950>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint8, SCPR_VAR_INIT) KeSCPR_K_HU_Sch4_Day_OvrdVal = 0U;/* Referenced by: '<S951>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT)
    KeSCPR_K_MaxAlwCurr_FilterTimeConst_D = 0.9F;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT)
    KeSCPR_K_MaxAlwCurr_FilterTimeConst_T = 1.5F;/* Referenced by: '<S362>/Calib' */

#endif

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtClimate_Day_OvrdVal = 0;/* Referenced by:
                                                                      * '<S69>/Calib'
                                                                      * '<S1005>/Calib'
                                                                      */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtClimate_TimeHr_OvrdVal =
    0;                                 /* Referenced by:
                                        * '<S70>/Calib'
                                        * '<S1006>/Calib'
                                        */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtClimate_TimeMin_OvrdVal
    = 0;                               /* Referenced by:
                                        * '<S71>/Calib'
                                        * '<S1007>/Calib'
                                        */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtSch_EndDay_OvrdVal = 0;/* Referenced by:
                                                                      * '<S72>/Calib'
                                                                      * '<S1008>/Calib'
                                                                      */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtSch_EndTimeHr_OvrdVal =
    0;                                 /* Referenced by:
                                        * '<S73>/Calib'
                                        * '<S1009>/Calib'
                                        */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtSch_EndTimeMin_OvrdVal =
    0;                                 /* Referenced by:
                                        * '<S74>/Calib'
                                        * '<S1010>/Calib'
                                        */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtSch_StrtDay_OvrdVal = 0;/* Referenced by:
                                                                      * '<S75>/Calib'
                                                                      * '<S1011>/Calib'
                                                                      */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtSch_StrtTimeHr_OvrdVal =
    0;                                 /* Referenced by:
                                        * '<S76>/Calib'
                                        * '<S1012>/Calib'
                                        */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_NxtSch_StrtTimeMin_OvrdVal
    = 0;                               /* Referenced by:
                                        * '<S77>/Calib'
                                        * '<S1013>/Calib'
                                        */

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_K_TimeScheduleSelection = 5;/* Referenced by: '<S750>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Time_Hour1_OvrdVal = 0.0F;/* Referenced by: '<S828>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Time_Hour2_OvrdVal = 0.0F;/* Referenced by: '<S829>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Time_Minute1_OvrdVal =
    0.0F;                              /* Referenced by: '<S830>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_K_Time_Minute2_OvrdVal =
    0.0F;                              /* Referenced by: '<S831>/Calib' */

#endif

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_Pct_Est_SOC_OvrdVal = 0.0F;/* Referenced by:
                                                                      * '<S58>/Calib'
                                                                      * '<S1014>/Calib'
                                                                      */

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_Pct_MinSOC_OvrdRadioRq =
    20.0F;                             /* Referenced by: '<S645>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_Pct_OvrdSOCVal = 0.0F;/* Referenced by: '<S866>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_T_Sch3_DepTemp_Init = 22.0F;/* Referenced by: '<S987>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_T_Sch4_DepTemp_Init = 22.0F;/* Referenced by: '<S988>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_T_SchTemp_Default = 22.0F;/* Referenced by:
                                                                      * '<S795>/Calib'
                                                                      * '<S376>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_BattCabinPriority = 0;/* Referenced by: '<S1015>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ButtonAllowStop = 1;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_CabPrecDny_BattCond_Ovrd =
    0;                                 /* Referenced by: '<S867>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_CabPrecDny_BattCond_Val =
    0;                                 /* Referenced by: '<S868>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeNowOvrd = 0;/* Referenced by: '<S869>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeNowOvrdVal = 0;/* Referenced by: '<S870>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeNowTBM_Ovrd = 0;/* Referenced by: '<S871>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeNowTBM_OvrdVal = 0;/* Referenced by: '<S872>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeReqOvrd = 0;/* Referenced by: '<S873>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeReqOvrdVal = 0;/* Referenced by: '<S874>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeReqSgnlRcvdOvrd = 0;/* Referenced by: '<S875>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeReqSgnlRcvdOvrdVal =
    0;                                 /* Referenced by: '<S876>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChargeType_Ovrd = 0;/* Referenced by: '<S877>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChrgCrntAvailOvrd = 0;/* Referenced by: '<S878>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChrgCurrEstSOCOvrd = 0;/* Referenced by: '<S879>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChrgPortButton_Sts_Ovrd =
    0;                                 /* Referenced by: '<S880>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT)
    KeSCPR_b_ChrgPortButton_Sts_OvrdVal = 0;/* Referenced by: '<S881>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChrgSysFault_Ovrd = 0;/* Referenced by: '<S882>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChrgSysFault_OvrdVal = 0;/* Referenced by: '<S883>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_ChrgSysStat_Ovrd = 0;/* Referenced by: '<S884>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_CoopCharging_enbl = 0;/* Referenced by: '<S977>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_DateTmDayFA_OvrdVal = 0;/* Referenced by: '<S832>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_DateTmDayRcvd_OvrdVal = 0;/* Referenced by: '<S833>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_DateTm_Ovrd = 0;/* Referenced by: '<S834>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Date_Day1SgnlRcvd_Ovrd =
    0;                                 /* Referenced by: '<S835>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Date_Day1SgnlRcvd_OvrdVal
    = 0;                               /* Referenced by: '<S836>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Date_Day1_FA_Ovrd = 0;/* Referenced by: '<S837>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Date_Day1_FA_OvrdVal = 0;/* Referenced by: '<S838>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_DoorLockLastElSts_Ovrd =
    0;                                 /* Referenced by: '<S885>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_EnableCancCanc = 1;/* Referenced by:
                                                                      * '<S452>/Calib'
                                                                      * '<S241>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Est_SOC_Ovrd = 0;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_FOTAInstallStsOvrd = 0;/* Referenced by: '<S886>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_FOTAInstallTypeOvrd = 0;/* Referenced by: '<S887>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_FullAmpHrCapOvrd = 0;/* Referenced by: '<S888>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT)
    KeSCPR_b_HU_Sch1_ChrgUntilFull_OvrdVal = 0;/* Referenced by: '<S930>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch1_Enbl_OvrdVal = 0;/* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch1_Ovrd = 0;/* Referenced by: '<S932>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch1_Sub_OvrdVal = 0;/* Referenced by: '<S933>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT)
    KeSCPR_b_HU_Sch2_ChrgUntilFull_OvrdVal = 0;/* Referenced by: '<S939>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch2_Enbl_OvrdVal = 0;/* Referenced by: '<S940>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch2_Ovrd = 0;/* Referenced by: '<S941>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch2_Sub_OvrdVal = 0;/* Referenced by: '<S942>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch3_Enbl_OvrdVal = 0;/* Referenced by: '<S946>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch3_Ovrd = 0;/* Referenced by: '<S947>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch3_Sub_OvrdVal = 0;/* Referenced by: '<S948>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch4_Enbl_OvrdVal = 0;/* Referenced by: '<S952>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch4_Ovrd = 0;/* Referenced by: '<S953>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HU_Sch4_Sub_OvrdVal = 0;/* Referenced by: '<S954>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HVBatRTC_Ovrd = 0;/* Referenced by: '<S889>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HVPerWUTherm_Ovrd = 0;/* Referenced by: '<S890>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HVPerWUTherm_Val = 0;/* Referenced by: '<S891>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HVPerWU_CabinPre_Ovrd = 0;/* Referenced by: '<S892>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HVPerWU_CabinPre_Val = 0;/* Referenced by: '<S893>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_HybSysStOvrd = 0;/* Referenced by: '<S894>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_LOC_BCM = 1;/* Referenced by: '<S640>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_LOC_Radio = 1;/* Referenced by: '<S641>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_LOC_TBM = 1;/* Referenced by: '<S642>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_MaxAllwdCurr_Ovrd = 0;/* Referenced by: '<S895>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NoChrgInterval_Ovrd = 0;/* Referenced by: '<S60>/Calib' */

#endif

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NoChrgInterval_OvrdVal =
    0;                                 /* Referenced by:
                                        * '<S61>/Calib'
                                        * '<S1016>/Calib'
                                        */

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtClimate_Day_Ovrd = 0;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtClimate_TimeHr_Ovrd =
    0;                                 /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtClimate_TimeMin_Ovrd =
    0;                                 /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtSch_EndDay_Ovrd = 0;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtSch_EndTimeHr_Ovrd = 0;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtSch_EndTimeMin_Ovrd =
    0;                                 /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtSch_StrtDay_Ovrd = 0;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtSch_StrtTimeHr_Ovrd =
    0;                                 /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_NxtSch_StrtTimeMin_Ovrd =
    0;                                 /* Referenced by: '<S86>/Calib' */

#endif

#if !Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OK_to_Charge_OvrdVal = 0;/* Referenced by: '<S1017>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdEnblBCMChrgReq = 0;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdEnblChargingLvl = 0;/* Referenced by: '<S896>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdEnblChrgSysSts = 0;/* Referenced by: '<S897>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdEnblKeySts = 0;/* Referenced by: '<S898>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdEnblSOC = 0;/* Referenced by: '<S899>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdEnblSmartEVSEDtctd =
    0;                                 /* Referenced by: '<S900>/Calib' */

#endif

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdValBCMChrgReq = 0;/* Referenced by:
                                                                      * '<S63>/Calib'
                                                                      * '<S1018>/Calib'
                                                                      */

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_OvrdValSmartEVSEDtctd = 0;/* Referenced by: '<S901>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_PluggedIn_Ovrd = 0;/* Referenced by: '<S902>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_PluggedIn_OvrdVal = 0;/* Referenced by: '<S903>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_RRM_VP_Level = 0;/* Referenced by: '<S904>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_RacePrAmbChk_Ovrd = 0;/* Referenced by: '<S905>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_RacePrAmbChk_OvrdVal = 0;/* Referenced by: '<S906>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_RacePrEVSts_Ovrd = 0;/* Referenced by: '<S907>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_RacePrEVSts_OvrdVal = 0;/* Referenced by: '<S908>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_RacePrep_Ovrd = 0;/* Referenced by: '<S909>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_EndTimeHrFA_Ovrd = 0;/* Referenced by: '<S839>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_EndTimeHrFA_Val = 0;/* Referenced by: '<S840>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_EndTimeMinFA_Ovrd =
    0;                                 /* Referenced by: '<S841>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_EndTimeMinFA_Val = 0;/* Referenced by: '<S842>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_StartTimeHrFA_Ovrd =
    0;                                 /* Referenced by: '<S843>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_StartTimeHrFA_Val =
    0;                                 /* Referenced by: '<S844>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_StartTimeMinFA_Ovrd =
    0;                                 /* Referenced by: '<S845>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch1_StartTimeMinFA_Val =
    0;                                 /* Referenced by: '<S846>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_EndTimeHrFA_Ovrd = 0;/* Referenced by: '<S847>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_EndTimeHrFA_Val = 0;/* Referenced by: '<S848>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_EndTimeMinFA_Ovrd =
    0;                                 /* Referenced by: '<S849>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_EndTimeMinFA_Val = 0;/* Referenced by: '<S850>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_StartTimeHrFA_Ovrd =
    0;                                 /* Referenced by: '<S851>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_StartTimeHrFA_Val =
    0;                                 /* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_StartTimeMinFA_Ovrd =
    0;                                 /* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch2_StartTimeMinFA_Val =
    0;                                 /* Referenced by: '<S854>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_EndTimeHrFA_Ovrd = 0;/* Referenced by: '<S855>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_EndTimeHrFA_Val = 0;/* Referenced by: '<S856>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_EndTimeMinFA_Ovrd =
    0;                                 /* Referenced by: '<S857>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_EndTimeMinFA_Val = 0;/* Referenced by: '<S858>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_StartTimeHrFA_Ovrd =
    0;                                 /* Referenced by: '<S859>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_StartTimeHrFA_Val =
    0;                                 /* Referenced by: '<S860>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_StartTimeMinFA_Ovrd =
    0;                                 /* Referenced by: '<S861>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_Sch3_StartTimeMinFA_Val =
    0;                                 /* Referenced by: '<S862>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_SchCP_AllowOvrd = 0;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_SchChrg_Master = 0;/* Referenced by: '<S607>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_SchChrg_WUTime_Ovrd = 0;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_SchDisableIsLate = 1;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_TBMStopChrg_PHEVenbl = 0;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_THMR_Rdy4ShtDwn = 0;/* Referenced by: '<S910>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_THMR_RdyOvrd = 0;/* Referenced by: '<S911>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_TimeToDeparture_Ovrd = 0;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_UseBPCM_RTC = 1;/* Referenced by: '<S610>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_UseDateTmF1 = 0;/* Referenced by: '<S712>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_WUtimerChrgCmpltAllow = 1;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(boolean, SCPR_VAR_INIT) KeSCPR_b_isBEV = 0;/* Referenced by:
                                                                  * '<S199>/Calib'
                                                                  * '<S142>/Calib'
                                                                  * '<S188>/Calib'
                                                                  * '<S605>/Calib'
                                                                  */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeOBCR_e_ChargeType, SCPR_VAR_INIT)
    KeSCPR_e_ChargeType_OvrdVal = CeOBCR_e_AC;/* Referenced by: '<S912>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeOBCR_e_ChrgSysStat, SCPR_VAR_INIT)
    KeSCPR_e_ChrgSysStat_OvrdVal = CeOBCR_e_PowerUp;/* Referenced by: '<S913>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeOBCR_e_DoorLockSts, SCPR_VAR_INIT)
    KeSCPR_e_DoorLockLastElSts_OvrdVal = CeOBCR_e_LKD;/* Referenced by: '<S914>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeCITR_e_FOTA_Install_Status, SCPR_VAR_INIT)
    KeSCPR_e_FOTAInstallStsOvrdVal = CeCITR_e_Installation_Default;/* Referenced by: '<S915>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeCITR_e_FOTA_Install_Type, SCPR_VAR_INIT)
    KeSCPR_e_FOTAInstallTypeOvrdVal = CeCITR_e_NoFOTA;/* Referenced by: '<S916>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeHPMR_e_HybSysState, SCPR_VAR_INIT)
    KeSCPR_e_HybSysStOvrdVal = CeHPMR_e_POWERUP;/* Referenced by: '<S917>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TePMDR_e_PowerMode, SCPR_VAR_INIT) KeSCPR_e_OvrdKeyStsVal =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S918>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeOBCR_e_ChargingLevel, SCPR_VAR_INIT)
    KeSCPR_e_OvrdValChargingLvl = CeOBCR_e_ChargingLvlDefault;/* Referenced by: '<S919>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeOBCR_e_ChargingSystemSts, SCPR_VAR_INIT)
    KeSCPR_e_OvrdValChrgSysSts = CeOBCR_e_NotCharging;/* Referenced by: '<S920>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeCITR_e_RRM_VP_Level, SCPR_VAR_INIT)
    KeSCPR_e_RRM_VP_Level = CeCITR_e_RRM_VP_Absent;/* Referenced by: '<S921>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeTIMR_e_RacePrep, SCPR_VAR_INIT)
    KeSCPR_e_RacePrep_OvrdVal = CeTIMR_e_RacePrep_Off;/* Referenced by: '<S922>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeCITR_e_SchAllow, SCPR_VAR_INIT)
    KeSCPR_e_SchCPAllow_Default = CeCITR_e_AnyTime;/* Referenced by:
                                                    * '<S796>/Calib'
                                                    * '<S377>/Calib'
                                                    */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(TeCITR_e_SchAllow, SCPR_VAR_INIT) KeSCPR_e_SchCP_Allow =
    CeCITR_e_AnyTime;                  /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_k_CancelTollerance =
    1.5E-8F;                           /* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint32, SCPR_VAR_INIT) KeSCPR_k_DNRSecAdjustment = 0U;/* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint16, SCPR_VAR_INIT) KeSCPR_k_FOTACancActDbnc = 55U;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_k_FOTAMaxInstallTime = 33;/* Referenced by: '<S282>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint8, SCPR_VAR_INIT) KeSCPR_k_MaxDays_UFxDNR = 6U;/* Referenced by:
                                                                      * '<S560>/ChrgEnd_DNR1'
                                                                      * '<S560>/ChrgEnd_DNR2'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_k_NumOfMinPerDay = 1440;/* Referenced by: '<S741>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_k_NumOfMinPerWeek = 10080;/* Referenced by: '<S742>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_q_FullAmpHrCapOvrdVal =
    0.0F;                              /* Referenced by: '<S923>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_t_CancelChunkDelay = 0.2F;/* Referenced by:
                                                                      * '<S125>/CityBEV_Button'
                                                                      * '<S155>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_t_DepInitTime = -100;/* Referenced by: '<S12>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_t_DoublePluginTime = 10.0F;/* Referenced by: '<S631>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint32, SCPR_VAR_INIT) KeSCPR_t_HVBatRTC_OvrdVal = 0U;/* Referenced by: '<S924>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_t_InitDelay = 0.1F;
                                    /* Referenced by: '<S125>/CityBEV_Button' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(uint32, SCPR_VAR_INIT) KeSCPR_t_OneHourChrgNow = 3600U;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static volatile CONST(float32, SCPR_VAR_INIT) KeSCPR_t_SOCest_UFDelay = 2.0F;/* Referenced by: '<S363>/Calib' */

#endif

static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_t_SchChrg_WUTime_OvrdVal = 0;/* Referenced by:
                                                                      * '<S67>/Calib'
                                                                      * '<S1019>/Calib'
                                                                      */
static volatile CONST(sint16, SCPR_VAR_INIT) KeSCPR_t_TimeToDeparture_OvrdVal =
    0;                                 /* Referenced by:
                                        * '<S13>/Calib'
                                        * '<S1020>/Calib'
                                        */

#define STOP_SEC_CALIB_UNSPECIFIED_SCPR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCPR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) FeSCPR_T_Sch1CP_DepTemp;/* '<Root>/DSM_77' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) FeSCPR_T_Sch2CP_DepTemp;/* '<Root>/DSM_54' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_CancelActFOTA;/* '<Root>/DSM_FeSCPR_b_CancelActFOTA' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_ChrgNowLatch;/* '<Root>/DSM_FeSCPR_b_ChrgNowLatch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_FOTA_Conflict;/* '<Root>/DSM_FeSCPR_b_FOTA_Conflict' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch1CH_ChrgUntFl;/* '<Root>/DSM_63' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch1CH_DNR;/* '<Root>/DSM_74' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch1CH_Enbl;/* '<Root>/DSM_52' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch1CP_DNR;/* '<Root>/DSM_42' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch1CP_Enbl;/* '<Root>/DSM_76' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch2CH_ChrgUntFl;/* '<Root>/DSM_46' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch2CH_DNR;/* '<Root>/DSM_47' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch2CH_Enbl;/* '<Root>/DSM_45' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch2CP_DNR;/* '<Root>/DSM_58' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) FeSCPR_b_Sch2CP_Enbl;/* '<Root>/DSM_53' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_FOTA_Install_Type, SCPR_VAR_INIT) FeSCPR_e_FOTA_Install_Type;
                                   /* '<Root>/DSM_FeSCPR_e_FOTA_Install_Type' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch1CH_EndHr;/* '<Root>/DSM_62' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch1CH_EndMin;/* '<Root>/DSM_64' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch1CH_StrtHr;/* '<Root>/DSM_60' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch1CH_StrtMin;/* '<Root>/DSM_61' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_SchAllow, SCPR_VAR_INIT) FeSCPR_e_Sch1CP_Allow;/* '<Root>/DSM_78' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch1CP_DepHr;/* '<Root>/DSM_79' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch1CP_DepMin;/* '<Root>/DSM_80' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch2CH_EndHr;/* '<Root>/DSM_50' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch2CH_EndMin;/* '<Root>/DSM_51' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch2CH_StrtHr;/* '<Root>/DSM_48' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch2CH_StrtMin;/* '<Root>/DSM_49' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_SchAllow, SCPR_VAR_INIT) FeSCPR_e_Sch2CP_Allow;/* '<Root>/DSM_55' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch2CP_DepHr;/* '<Root>/DSM_56' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) FeSCPR_e_Sch2CP_DepMin;/* '<Root>/DSM_57' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) FeSCPR_g_ChrgNowMaxTimetoPlugin;
                              /* '<Root>/DSM_FeSCPR_g_ChrgNowMaxTimetoPlugin' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) FeSCPR_y_Sch1CH_Day;/* '<Root>/DSM_41' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) FeSCPR_y_Sch1CP_Day;/* '<Root>/DSM_43' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) FeSCPR_y_Sch2CH_Day;/* '<Root>/DSM_44' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) FeSCPR_y_Sch2CP_Day;/* '<Root>/DSM_59' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VaSCPR_K_SchGlobalCP[14];/* '<S474>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VaSCPR_K_SchGlobalCPtrack[14];/* '<S461>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VaSCPR_K_SchGlobalEnd[14];/* '<S455>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VaSCPR_K_SchGlobalStrt[14];/* '<S454>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VaSCPR_K_SchGlobalUF[14];/* '<S456>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VaSCPR_b_SchOverlapDet[14];/* '<S471>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_I_ChrgCrntAvail;/* '<S809>/Switch77' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_I_ChrgCurrAvblAct;/* '<S353>/MinMax2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_I_ChrgCurrEstSOC;/* '<S809>/Switch106' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_ArrElementTimeIncSize;/* '<S714>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VeSCPR_K_CPschedActive;/* '<S463>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_CancEndIndxProc;/* '<S216>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_CancIdx_proc;/* '<S220>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_CancNowIndexStuck;/* '<S378>/Switch3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_CancelStartIndx;/* '<S220>/Switch2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_ChrgNowTest4;/* '<S162>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VeSCPR_K_CurrentIndex;/* '<S470>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DateTmDay;/* '<S807>/Switch98' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DateTmHour;/* '<S807>/Switch103' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DateTmMin;/* '<S807>/Switch101' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DateTmMon;/* '<S807>/Switch97' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DateTmSec;/* '<S807>/Switch102' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DateTmYear;/* '<S807>/Switch100' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Day1;/* '<S807>/Switch5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Day2;/* '<S807>/Switch4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Month1;/* '<S807>/Switch6' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Month2;/* '<S807>/Switch7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Year1;/* '<S807>/Switch8' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Year2;/* '<S807>/Switch9' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Year3;/* '<S807>/Switch10' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Date_Year4;/* '<S807>/Switch11' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DayOfWeek_Cent;/* '<S718>/Rounding1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_DayOfWeek_MonFact;/* '<S717>/Merge1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VeSCPR_K_EndArrayPos;/* '<S458>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_EstPwrBdgt_Test6;/* '<S366>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_EstSOC_Test2;/* '<S352>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_EstSOC_Test3;/* '<S352>/Sum1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) VeSCPR_K_HUSch1CH_Day;/* '<S810>/Switch17' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch1CH_StrtHr;/* '<S810>/Switch13' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch1CH_StrtMin;/* '<S810>/Switch14' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) VeSCPR_K_HUSch1CP_Day;/* '<S812>/Switch40' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch1CP_StrtHr;/* '<S812>/Switch36' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch1CP_StrtMin;/* '<S812>/Switch37' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) VeSCPR_K_HUSch2CH_Day;/* '<S811>/Switch29' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch2CH_EndHr;/* '<S811>/Switch27' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch2CH_EndMin;/* '<S811>/Switch28' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch2CH_StrtHr;/* '<S811>/Switch25' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch2CH_StrtMin;/* '<S811>/Switch26' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint8, SCPR_VAR_INIT) VeSCPR_K_HUSch2CP_Day;/* '<S813>/Switch45' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch2CP_StrtHr;/* '<S813>/Switch33' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HUSch2CP_StrtMin;/* '<S813>/Switch34' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HU_Sch1_CH_EndHr;/* '<S810>/Switch15' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_HU_Sch1_CH_EndMin;/* '<S810>/Switch16' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_Index_Delta;/* '<S352>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_IntTimeKeepDay;/* '<S776>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_IntTimeKeepMonth;/* '<S780>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NbrArrElementsPerDay;/* '<S714>/Product' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NbrArrElementsPerWeek;/* '<S714>/Product1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextChargeWU;/* '<S498>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextChargeWUTest;/* '<S561>/Switch2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextCondWU;/* '<S497>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextDep_DayTest;/* '<S406>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextDep_HrTest;/* '<S408>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextDep_MinTest;/* '<S409>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextEndChrgDayTest;/* '<S426>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextSch_CPStart;/* '<S468>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextSch_ChrgEnd;/* '<S459>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextSch_ChrgStart;/* '<S475>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NextStartChrgDayTest;/* '<S427>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NowIndexUpdateAW;/* '<S230>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NowIndexUpdateWU;/* '<S229>/Switch3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NowIndex_Min;/* '<S713>/FloatToFix' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NowIndex_proc;/* '<S370>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_NowIndxMinUpdated;/* '<S218>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VeSCPR_K_NxtSch_BackwardCnt;/* '<S472>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VeSCPR_K_NxtSch_ForwardCnt;/* '<S473>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch1CH_DNRend_sec;/* '<S560>/Product2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch1CH_DNRnxtCanc;/* '<S512>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_Sch1CH_NextWU;/* '<S564>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch1CP_DNRnxtCanc;/* '<S533>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_Sch1CP_NextWU;/* '<S575>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch1CP_NextWUsec;/* '<S572>/Product2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch2CH_DNRend_sec;/* '<S560>/Product3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch2CH_DNRnxtCanc;/* '<S513>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_Sch2CH_NextWU;/* '<S565>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch2CP_DNRnxtCanc;/* '<S534>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_Sch2CP_NextWU;/* '<S576>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(uint32, SCPR_VAR_INIT) VeSCPR_K_Sch2CP_NextWUsec;/* '<S572>/Product1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint8, SCPR_VAR_INIT) VeSCPR_K_StartArrayPos;/* '<S457>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeDay;/* '<S715>/Merge3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeHr;/* '<S715>/Merge2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeMin;/* '<S715>/Merge1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeMon;/* '<S715>/Merge4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeProcDate;/* '<S716>/Merge2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeProcHour;/* '<S716>/Merge3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeProcMin;/* '<S716>/Merge4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeProcMonth;/* '<S716>/Merge1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeProcYear;/* '<S716>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_SysTimeYr;/* '<S715>/Merge5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_TimeRem;/* '<S745>/FloatToFix1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Time_Hour1;/* '<S807>/Switch3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Time_Hour2;/* '<S807>/Switch2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Time_Minute1;/* '<S807>/Switch24' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_K_Time_Minute2;/* '<S807>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_K_UFNowIndexStuck;/* '<S380>/Switch3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_Pct_EstSOC_Test1;/* '<S353>/Sum' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_Pct_HV_BatSOC;/* '<S809>/Switch64' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_Pct_SOCArbfrEst;/* '<S353>/Switch4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_Pct_SOC_Delta;/* '<S353>/Product4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_Pct_SOC_estimate;/* '<S353>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_Pct_SOC_estimateTest;/* '<S353>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_T_HUSch1CP_Temp;/* '<S812>/Switch39' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_T_HUSch2CP_Temp;/* '<S813>/Switch44' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_T_NextDepTemp;/* '<S374>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ActvCharging;/* '<S214>/Comparison1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_AllowButton;/* '<S208>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ArbRadioReq;/* '<S604>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_BattAlreadyFullPulse;/* '<S318>/Logical9' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ButtonActive_BEV;/* '<S196>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ButtonActive_Dr;/* '<S196>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ButtonPressValid;/* '<S124>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CH_DNRCancel;/* '<S500>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CNButton_SF;/* '<S145>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CP_DNRCancel;/* '<S525>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancW_ActiveTest;/* '<S217>/Logical12' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancW_ResetTest;/* '<S217>/Logical13' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancWindowOn;/* '<S217>/Switch3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelActive;/* '<S210>/Logical25' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelChunk;/* '<S143>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelChunk_BEV;/* '<S125>/Switch2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelTheCancel;/* '<S447>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelTrigger;/* '<S221>/Logical6' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelTriggerUF;/* '<S221>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CancelWindAllowed;/* '<S217>/Switch2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChargeNowRadio_In;/* '<S809>/Switch71' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChargeReqRadio;/* '<S809>/Switch70' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChargeReqSgnlRcvdArb;/* '<S809>/Switch69' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChargeReq_PHEV;/* '<S603>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChargeRequest_BEV;/* '<S602>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgDontChrg;/* '<S144>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgDontChrg_PHEV;/* '<S170>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgLevReset;/* '<S623>/AND' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgNowRstLatch;/* '<S126>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgNowTest1;/* '<S163>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgNowTest2;/* '<S126>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgNowTest3;/* '<S164>/AND' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgPortButton_Sts;/* '<S809>/Switch74' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ChrgReq_PHEV;/* '<S603>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CondToDisplayUF;/* '<S316>/Logical17' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_CondToDisplayUF_Test;/* '<S316>/Logical16' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DNR_SchCHdisbldHold;/* '<S503>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DateDay1_FA;/* '<S808>/Switch46' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DateDay1_SgnlRcvd;/* '<S808>/Switch47' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DateTmDay_FA;/* '<S807>/Switch96' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DateTmDay_SgnlRcvd;/* '<S807>/Switch99' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DisableUF_Test1;/* '<S318>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DisableUF_Test2;/* '<S318>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DisableUF_Test3;/* '<S331>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DisplayUF;/* '<S316>/Logical3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DoorUnlocked;/* '<S196>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_DoublePlugInOvrd;/* '<S615>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTAAllowsCharge;/* '<S247>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTACommCharge;/* '<S248>/Logical9' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTAImmedCharge;/* '<S147>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTANow_Conflict;/* '<S248>/Logical10' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTASch_ACDC_Confl;/* '<S248>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTASched_Conflict;/* '<S248>/Logical7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTA_CancelTrigger;/* '<S246>/Logical Operator4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTA_Conflict;/* '<S248>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTA_FOTANowChrgAllwd;/* '<S247>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTA_FOTASchChrgAllwd;/* '<S247>/Logical7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FOTA_NoFOTAChrgAllwd;/* '<S247>/Logical4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FinalChargeReq;/* '<S601>/Logical18' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_FollowSch_SF;/* '<S146>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ForcedChrgReq;/* '<S582>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HCP_SchMaster;/* '<S581>/Logical4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CHStrt_HrFA;/* '<S808>/Switch73' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CH_ChrgUntFl;/* '<S810>/Switch20' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CH_Enbl;/* '<S810>/Switch18' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CH_EndHrFA;/* '<S808>/Switch80' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CH_EndMinFA;/* '<S808>/Switch81' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CH_StrtMinFA;/* '<S808>/Switch79' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CH_Sub;/* '<S810>/Switch12' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CP_Enbl;/* '<S812>/Switch41' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CP_StrtHrFA;/* '<S808>/Switch88' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CP_StrtMinFA;/* '<S808>/Switch89' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch1CP_Sub;/* '<S812>/Switch35' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_ChrgUntFl;/* '<S811>/Switch32' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_Enbl;/* '<S811>/Switch30' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_EndHrFA;/* '<S808>/Switch85' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_EndMinFA;/* '<S808>/Switch86' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_StrtHrFA;/* '<S808>/Switch83' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_StrtMinFA;/* '<S808>/Switch84' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CH_Sub;/* '<S811>/Switch23' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CP_Enbl;/* '<S813>/Switch19' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CP_StrtHrFA;/* '<S808>/Switch90' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CP_StrtMinFA;/* '<S808>/Switch91' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HUSch2CP_Sub;/* '<S813>/Switch31' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HU_CHImplDataRcvd;/* '<S808>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HU_CPImplDataRcvd;/* '<S808>/Logical2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HVBatPerWUThermal;/* '<S809>/Logical16' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_HVPerWU_CabinPre;/* '<S809>/Switch66' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_I1_Test1;/* '<S173>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_I1_Test2;/* '<S173>/Logical2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_I2_Test1;/* '<S173>/Logical4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Icon1_Cond;/* '<S171>/Logical4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Icon2_Cond;/* '<S171>/Logical9' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_IconsOff;/* '<S171>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_InChrgWindow;/* '<S210>/Logical8' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_IntededChargeReq_PHEV;/* '<S603>/Logical2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_KeyOverride_Charge;/* '<S618>/Logical11' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_LatchButtonOvrd;/* '<S149>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_LowSOC_ChrgOvrd;/* '<S646>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_NewSchedCheck;/* '<S336>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_NoChScheduleSet;/* '<S214>/Logical7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_NowInUFWindow;/* '<S296>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Ovrd_PerBattCond;/* '<S622>/Logical7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Ovrd_PerCabinCond;/* '<S622>/Logical12' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_PluggedIn;/* '<S809>/Switch61' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_RTCFaulted;/* '<S606>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_RaceMod_chrgOvrd;/* '<S621>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_RacePrepAmbCheck;/* '<S809>/Switch6' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_RacePrepEVSysStatus;/* '<S809>/Switch7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_RadReqTest2;/* '<S611>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ResetHCPOvrd;/* '<S150>/Logical13' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_ResetUFwindow;/* '<S316>/Unit Delay4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SCPRChargeComplete;/* '<S290>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SCPnotSupported;/* '<S581>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SWChargeReq;/* '<S601>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1CH_DNRCanc_Test;/* '<S500>/Logical' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1CH_DNREnblOvrd;/* '<S523>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1CH_Enbl_DNR;/* '<S489>/Merge2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1CP_DNRCanc_Test;/* '<S525>/Logical' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1CP_DNREnblOvrd;/* '<S540>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1CP_Enbl_DNR;/* '<S490>/Merge2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch1UF_DNRdisable;/* '<S514>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2CH_DNRCanc_Test;/* '<S500>/Logical2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2CH_DNREnblOvrd;/* '<S522>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2CH_Enbl_DNR;/* '<S489>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2CP_DNRCanc_Test;/* '<S525>/Logical2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2CP_DNREnblOvrd;/* '<S539>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2CP_Enbl_DNR;/* '<S490>/Merge' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_Sch2UF_DNRdisable;/* '<S515>/Logical5' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SchChangeResume;/* '<S219>/Logical31' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SchChrgInWindow;/* '<S214>/Logical4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SchInNormalWind;/* '<S214>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SchedResumeTrg;/* '<S219>/Logical1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_SmartEVSE_Dtctd;/* '<S809>/Switch63' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_THMR_RdyForShtDwn;/* '<S809>/Switch67' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_UFAllowed;/* '<S332>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_UFchangeOfSched;/* '<S323>/Logical31' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_UFschedChange;/* '<S335>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_UnplugResume;/* '<S219>/Logical21' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_UntilFullWindow;/* '<S460>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_WholeWeekOvrlp;/* '<S465>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_checkFOTAconflict;/* '<S248>/Logical13' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_noPlugOnTimePulse;/* '<S318>/Logical11' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_noPlugOrBattFull;/* '<S333>/OR1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_xMinInWindFull;/* '<S214>/Logical9' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_xMinUFCancelTest;/* '<S222>/Switch4' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_xMinUFWindow;/* '<S243>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_b_xMinUFWindowOK;/* '<S210>/Logical6' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeSCPR_e_Intent, SCPR_VAR_INIT) VeSCPR_e_ButtonState;/* '<S141>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeOBCR_e_ChargingLevel, SCPR_VAR_INIT) VeSCPR_e_ChargingLevel;/* '<S809>/Switch68' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeOBCR_e_ChargingSystemSts, SCPR_VAR_INIT) VeSCPR_e_ChargingSysSts;/* '<S809>/Switch60' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeOBCR_e_ChrgSysStat, SCPR_VAR_INIT) VeSCPR_e_ChrgSysStat;/* '<S809>/Switch2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(boolean, SCPR_VAR_INIT) VeSCPR_e_ChrgTypeIsDC;/* '<S122>/Comparison7' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeSCPR_e_DayOfWeek, SCPR_VAR_INIT) VeSCPR_e_DayOfWeek;/* '<S740>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeOBCR_e_DoorLockSts, SCPR_VAR_INIT) VeSCPR_e_DoorLockLastElSts;/* '<S809>/Switch75' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_FOTA_Install_Type, SCPR_VAR_INIT) VeSCPR_e_FOTA_Install_Type;/* '<S793>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_SchAllow, SCPR_VAR_INIT) VeSCPR_e_HUSch1CP_Allow;/* '<S812>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_SchAllow, SCPR_VAR_INIT) VeSCPR_e_HUSch2CP_Allow;/* '<S813>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_CPIM_Icon_Ind, SCPR_VAR_INIT) VeSCPR_e_Icon1_BEV_Cmd;/* '<S171>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_CPIM_Icon_Ind, SCPR_VAR_INIT) VeSCPR_e_Icon1_Cmd;/* '<S172>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_CPIM_Icon_Ind, SCPR_VAR_INIT) VeSCPR_e_Icon1_PHEV_Cmd;/* '<S173>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_CPIM_Icon_Ind, SCPR_VAR_INIT) VeSCPR_e_Icon2_BEV_Cmd;/* '<S171>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_CPIM_Icon_Ind, SCPR_VAR_INIT) VeSCPR_e_Icon2_Cmd;/* '<S172>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_CPIM_Icon_Ind, SCPR_VAR_INIT) VeSCPR_e_Icon2_PHEV_Cmd;/* '<S173>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TeCITR_e_SchAllow, SCPR_VAR_INIT) VeSCPR_e_NextCondAllow;/* '<S375>/Switch1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(TePMDR_e_PowerMode, SCPR_VAR_INIT) VeSCPR_e_PMM_PowerMode;/* '<S809>/Switch62' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_CancEndIndx;/* '<S485>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_CancStartIndx;/* '<S484>/Gain' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_CancW_EndIndx;/* '<S216>/Switch3' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_DayOfWeek_num;/* '<S717>/FloatToFix' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_FOTAStart_Index;/* '<S288>/Switch' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_k_NewSec_IV;/* '<S764>/Sum1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_NextEndChrgHourTest;/* '<S393>/Signal Conversion' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_NextEndChrgMinTest;/* '<S393>/Signal Conversion1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_NextStartChrgHourTest;/* '<S372>/Merge1' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_NextStartChrgMinTest;/* '<S372>/Merge2' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_NumOfMinPerDay;/* '<S741>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(sint16, SCPR_VAR_INIT) VeSCPR_k_NumOfMinPerWeek;/* '<S742>/Calib' */

#endif

#if Rte_SysCon_Variant_SCPR_1

static VAR(float32, SCPR_VAR_INIT) VeSCPR_k_SpareSecCnt;/* '<S756>/MinMax2' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCPR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCPR
#include "MemMap.h"

VAR(B_SCPR_ac_T, SCPR_VAR_INIT) SCPR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCPR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SCPR
#include "MemMap.h"

VAR(DW_SCPR_ac_T, SCPR_VAR_INIT) SCPR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SCPR
#include "MemMap.h"
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, SCPR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NextDepTime(VAR(sint16, AUTOMATIC)
    rtu_x, P2VAR(B_NextDepTime_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_ChrgEnd_DNR1(CONST(sint16, AUTOMATIC)
    rtu_x_schEnd[7], VAR(boolean, AUTOMATIC) rtu_UntilFull, VAR(boolean,
    AUTOMATIC) rtu_SchEnbl, VAR(boolean, AUTOMATIC) rtu_DoNotRepeat, VAR(sint16,
    AUTOMATIC) rtu_NbrMinDay, VAR(sint16, AUTOMATIC) rtu_ArrElmIncr, P2VAR
    (B_ChrgEnd_DNR1_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NextWakeUp(VAR(sint16, AUTOMATIC)
    rtu_Now_index, CONST(sint16, AUTOMATIC) rtu_x_schStart[7], VAR(sint16,
    AUTOMATIC) rtu_NbrMinPerWeek, VAR(sint16, AUTOMATIC) rtu_DayOfWeek, P2VAR
    (B_NextWakeUp_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NextCoopST_Sch1(CONST(sint16,
    AUTOMATIC) rtu_x_coopCh_ST[7], VAR(boolean, AUTOMATIC) rtu_CoopCh_DNR, P2VAR
    (B_NextCoopST_Sch1_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_CondSchedule(VAR(sint16, AUTOMATIC)
    rtu_Dep_Time, CONST(boolean, AUTOMATIC) rtu_Days_sch[7], VAR(sint16,
    AUTOMATIC) rtu_NbrMinPerDay, VAR(boolean, AUTOMATIC) rtu_DoNotRepeat, VAR
    (sint16, AUTOMATIC) rtu_Now_index, VAR(sint16, AUTOMATIC) rtu_DayOfWeek,
    P2VAR(B_CondSchedule_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_CoopCharging(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(sint16, AUTOMATIC) rtu_SchCoCH_StopHr, VAR(sint16, AUTOMATIC)
    rtu_SchCoCH_StopMin, VAR(boolean, AUTOMATIC) rtu_SchCoCH_Enbl, CONST(boolean,
    AUTOMATIC) rtu_Week_Array[7], VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR
    (boolean, AUTOMATIC) rtu_SchCoCH_DNR, VAR(sint16, AUTOMATIC)
    rtu_NowIndex_Min, VAR(sint16, AUTOMATIC) rtu_DayOfWeek, P2VAR
    (B_CoopCharging_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_Chrg_Sch_Array(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(sint16, AUTOMATIC) rtu_SchCH_StrtHr, VAR(sint16, AUTOMATIC)
    rtu_SchCH_StrtMin, VAR(sint16, AUTOMATIC) rtu_SchCH_EndHr, VAR(sint16,
    AUTOMATIC) rtu_SchCH_EndMin, VAR(sint16, AUTOMATIC)
    rtu_ArrElementTimeIncSize, VAR(boolean, AUTOMATIC) rtu_SchCH_ChrgUntFl, VAR
    (sint16, AUTOMATIC) rtu_DayOfWeek, VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay,
    VAR(boolean, AUTOMATIC) rtu_SchCH_DNR, VAR(sint16, AUTOMATIC)
    rtu_NowIndex_Min, CONST(boolean, AUTOMATIC) rtu_Week_Array[7], P2VAR
    (B_Chrg_Sch_Array_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NowInSchedule(VAR(sint16, AUTOMATIC)
    rtu_Now_Min, CONST(sint16, AUTOMATIC) rtu_x_schStartMin[7], CONST(sint16,
    AUTOMATIC) rtu_x_schEndMin[7], VAR(sint16, AUTOMATIC) rtu_NbrMinPerWeek,
    P2VAR(B_NowInSchedule_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_LeapYrChk(VAR(float32, AUTOMATIC)
    rtu_year, P2VAR(B_LeapYrChk_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_FiveMins(VAR(sint16, AUTOMATIC)
    rtu_In1, P2VAR(sint16, AUTOMATIC, SCPR_VAR_INIT) rty_Out1);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_DoNotRepeat(sint16 x1[7], boolean x2[7], VAR(sint16,
    AUTOMATIC) rtu_Dep_Time, VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR(sint16,
    AUTOMATIC) rtu_Now_index, VAR(sint16, AUTOMATIC) rtu_DayOfWeek, P2VAR
    (B_CondSchedule_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_DoNotRepeat_m(sint16 x_schCoCH[7], const sint16 *Sum, sint16
    x1[7], boolean x2[7], VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR(sint16,
    AUTOMATIC) rtu_NowIndex_Min, VAR(sint16, AUTOMATIC) rtu_DayOfWeek);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_DoNotRepeat_mm(const sint16 *Switch1, const sint16 *Sum,
    sint16 x1[7], sint16 x2[7], boolean x3[7], VAR(sint16, AUTOMATIC)
    rtu_DayOfWeek, VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR(sint16,
    AUTOMATIC) rtu_NowIndex_Min, P2VAR(B_Chrg_Sch_Array_SCPR_ac_T, AUTOMATIC,
    SCPR_VAR_INIT) localB);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_sort(sint16 leng, sint16 x[14]);

#endif

#if Rte_SysCon_Variant_SCPR_1

static boolean SCPR_ac_UFwindow(sint8 pos);

#endif

#if Rte_SysCon_Variant_SCPR_1

static sint16 SCPR_ac_Sum(const boolean VEC[14], sint16 i, sint16 end);

#endif

#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_sortID(sint16 leng, sint16 x[2], sint8 rag1[2]);

#endif

/*
 * Output and update for action system:
 *    '<S353>/If Action Subsystem'
 *    '<S353>/If Action Subsystem1'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_IfActionSubsystem(VAR(float32,
    AUTOMATIC) rtu_In1, P2VAR(float32, AUTOMATIC, SCPR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S358>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for atomic system:
 *    '<S390>/NextDepTime'
 *    '<S392>/NextCoCH_Time'
 *    '<S396>/NextTimeStart'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NextDepTime(VAR(sint16, AUTOMATIC)
    rtu_x, P2VAR(B_NextDepTime_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint32 exitg2;
    sint16 a;
    sint8 j;

    /* Chart: '<S390>/NextDepTime' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextDisplay/CabinConditioning/NextDepTime */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextDisplay/CabinConditioning/NextDepTime */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextDisplay/CabinConditioning/NextDepTime */
    /* Transition: '<S407>:164' */
    j = 0;
    a = rtu_x;
    do
    {
        exitg2 = 0;
        if (j < 7)
        {
            /* Transition: '<S407>:167' */
            /* Transition: '<S407>:169' */
            if (((sint16)(a - 1440)) >= 0)
            {
                /* Transition: '<S407>:170' */
                /* Transition: '<S407>:172' */
                j++;
                a = (sint16)(a - 1440);
            }
            else
            {
                /* Transition: '<S407>:174' */
                localB->day = (sint16)j;
                j = 0;
                exitg2 = 1;
            }
        }
        else
        {
            /* Transition: '<S407>:176' */
            /* Transition: '<S407>:214' */
            /* Transition: '<S407>:219' */
            /* Transition: '<S407>:221' */
            exitg2 = 2;
        }
    }
    while (exitg2 == 0);

    if (exitg2 == 1)
    {
        do
        {
            exitg1 = 0;
            if (j < 25)
            {
                /* Transition: '<S407>:191' */
                /* Transition: '<S407>:193' */
                if (((sint16)(a - 60)) >= 0)
                {
                    /* Transition: '<S407>:195' */
                    /* Transition: '<S407>:196' */
                    j++;
                    a = (sint16)(a - 60);
                }
                else
                {
                    /* Transition: '<S407>:200' */
                    localB->hr = (sint16)j;
                    localB->min = a;
                    if (a < 0)
                    {
                        /* Transition: '<S407>:230' */
                        /* Transition: '<S407>:232' */
                        localB->day = -1;
                        localB->min = 0;

                        /* Transition: '<S407>:233' */
                    }
                    else
                    {
                        /* Transition: '<S407>:218' */
                        /* Transition: '<S407>:221' */
                    }

                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S407>:198' */
                /* Transition: '<S407>:219' */
                /* Transition: '<S407>:221' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);
    }

    /* Transition: '<S407>:235' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S560>/ChrgEnd_DNR1'
 *    '<S560>/ChrgEnd_DNR2'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_ChrgEnd_DNR1(CONST(sint16, AUTOMATIC)
    rtu_x_schEnd[7], VAR(boolean, AUTOMATIC) rtu_UntilFull, VAR(boolean,
    AUTOMATIC) rtu_SchEnbl, VAR(boolean, AUTOMATIC) rtu_DoNotRepeat, VAR(sint16,
    AUTOMATIC) rtu_NbrMinDay, VAR(sint16, AUTOMATIC) rtu_ArrElmIncr, P2VAR
    (B_ChrgEnd_DNR1_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint8 j;

    /* Chart: '<S560>/ChrgEnd_DNR1' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/NxtChargingWU/NxtChargingWU/DNR_nextENDch/ChrgEnd_DNR1 */
    /* During: SCPR_FUNC_MedTEH/SCPC/NxtChargingWU/NxtChargingWU/DNR_nextENDch/ChrgEnd_DNR1 */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/NxtChargingWU/NxtChargingWU/DNR_nextENDch/ChrgEnd_DNR1 */
    /* Transition: '<S566>:1' */
    localB->DNR_EndTime = 0;
    j = 0;
    if (rtu_SchEnbl && rtu_DoNotRepeat)
    {
        /* Transition: '<S566>:4' */
        /* Transition: '<S566>:16' */
        do
        {
            exitg1 = 0;
            if (j < 7)
            {
                /* Transition: '<S566>:17' */
                if (rtu_x_schEnd[j] > -1)
                {
                    /* Transition: '<S566>:10' */
                    /* Transition: '<S566>:22' */
                    localB->DNR_EndTime = rtu_x_schEnd[j];
                    if (rtu_UntilFull)
                    {
                        /* Transition: '<S566>:23' */
                        /* Transition: '<S566>:45' */
                        localB->DNR_EndTime = (sint16)(((((sint32)
                            KeSCPR_k_MaxDays_UFxDNR) * ((sint32)rtu_NbrMinDay))
                            + ((sint32)rtu_x_schEnd[j])) - ((sint32)
                            rtu_ArrElmIncr));
                    }
                    else
                    {
                        /* Transition: '<S566>:34' */
                        /* Transition: '<S566>:44' */
                    }

                    exitg1 = 1;
                }
                else
                {
                    /* Transition: '<S566>:11' */
                    j++;

                    /* Transition: '<S566>:13' */
                }
            }
            else
            {
                /* Transition: '<S566>:19' */
                /* Transition: '<S566>:45' */
                localB->DNR_EndTime = (sint16)((((sint32)KeSCPR_k_MaxDays_UFxDNR)
                    * ((sint32)rtu_NbrMinDay)) - ((sint32)rtu_ArrElmIncr));
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Transition: '<S566>:37' */
    }
    else
    {
        /* Transition: '<S566>:26' */
    }

    /* End of Chart: '<S560>/ChrgEnd_DNR1' */
    /* Transition: '<S566>:41' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S562>/NextWakeUp'
 *    '<S563>/NextWakeUp'
 *    '<S573>/NextWakeUp'
 *    '<S574>/NextWakeUp'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NextWakeUp(VAR(sint16, AUTOMATIC)
    rtu_Now_index, CONST(sint16, AUTOMATIC) rtu_x_schStart[7], VAR(sint16,
    AUTOMATIC) rtu_NbrMinPerWeek, VAR(sint16, AUTOMATIC) rtu_DayOfWeek, P2VAR
    (B_NextWakeUp_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint16 k;
    boolean flag;

    /* Chart: '<S562>/NextWakeUp' */
    /* Gateway: NextWakeUp/NextWakeUp */
    /* During: NextWakeUp/NextWakeUp */
    /* Entry Internal: NextWakeUp/NextWakeUp */
    /* Transition: '<S568>:265' */
    localB->NextWU = 32765;
    flag = false;
    if ((rtu_DayOfWeek < 7) && (rtu_DayOfWeek > -1))
    {
        /* Transition: '<S568>:243' */
        /* Transition: '<S568>:269' */
        k = rtu_DayOfWeek;
        do
        {
            exitg1 = 0;
            if (k < 7)
            {
                /* Transition: '<S568>:272' */
                if (rtu_Now_index <= rtu_x_schStart[k])
                {
                    /* Transition: '<S568>:245' */
                    /* Transition: '<S568>:250' */
                    localB->NextWU = (sint16)(rtu_x_schStart[k] - rtu_Now_index);
                    flag = true;

                    /* Transition: '<S568>:442' */
                    exitg1 = 1;
                }
                else
                {
                    /* Transition: '<S568>:270' */
                    k++;

                    /* Transition: '<S568>:248' */
                }
            }
            else
            {
                /* Transition: '<S568>:249' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Transition: '<S568>:410' */
        if (!flag)
        {
            /* Transition: '<S568>:411' */
            /* Transition: '<S568>:294' */
            k = 0;
            do
            {
                exitg1 = 0;
                if (k <= rtu_DayOfWeek)
                {
                    /* Transition: '<S568>:234' */
                    if (rtu_x_schStart[k] >= 0)
                    {
                        /* Transition: '<S568>:256' */
                        /* Transition: '<S568>:279' */
                        localB->NextWU = (sint16)((rtu_x_schStart[k] +
                            rtu_NbrMinPerWeek) - rtu_Now_index);
                        flag = true;

                        /* Transition: '<S568>:419' */
                        exitg1 = 1;
                    }
                    else
                    {
                        /* Transition: '<S568>:280' */
                        k++;

                        /* Transition: '<S568>:282' */
                    }
                }
                else
                {
                    /* Transition: '<S568>:281' */
                    exitg1 = 1;
                }
            }
            while (exitg1 == 0);

            /* Transition: '<S568>:415' */
            /* Transition: '<S568>:433' */
        }
        else
        {
            /* Transition: '<S568>:413' */
        }

        /* Transition: '<S568>:432' */
    }
    else
    {
        /* Transition: '<S568>:241' */
        /* Transition: '<S568>:268' */
    }

    /* Transition: '<S568>:437' */
    localB->noWU = !flag;

    /* End of Chart: '<S562>/NextWakeUp' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S496>/NextCoopST_Sch1'
 *    '<S496>/NextCoopST_Sch2'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NextCoopST_Sch1(CONST(sint16,
    AUTOMATIC) rtu_x_coopCh_ST[7], VAR(boolean, AUTOMATIC) rtu_CoopCh_DNR, P2VAR
    (B_NextCoopST_Sch1_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint8 k;

    /* Chart: '<S496>/NextCoopST_Sch1' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/NxtChargingWU/NxtCoopChStop/NextCoopST_Sch1 */
    /* During: SCPR_FUNC_MedTEH/SCPC/NxtChargingWU/NxtCoopChStop/NextCoopST_Sch1 */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/NxtChargingWU/NxtCoopChStop/NextCoopST_Sch1 */
    /* Transition: '<S570>:258' */
    k = 0;
    localB->Next_coopCh = 32000;
    do
    {
        exitg1 = 0;
        if (k <= 6)
        {
            /* Transition: '<S570>:260' */
            if (rtu_CoopCh_DNR && (rtu_x_coopCh_ST[k] >= 0))
            {
                /* Transition: '<S570>:250' */
                /* Transition: '<S570>:266' */
                localB->Next_coopCh = rtu_x_coopCh_ST[k];

                /* Transition: '<S570>:265' */
                exitg1 = 1;
            }
            else
            {
                /* Transition: '<S570>:251' */
                k++;

                /* Transition: '<S570>:253' */
            }
        }
        else
        {
            /* Transition: '<S570>:254' */
            /* Transition: '<S570>:252' */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Transition: '<S570>:257' */
}

#endif

/* Function for Chart: '<S663>/CondSchedule' */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_DoNotRepeat(sint16 x1[7], boolean x2[7], VAR(sint16,
    AUTOMATIC) rtu_Dep_Time, VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR(sint16,
    AUTOMATIC) rtu_Now_index, VAR(sint16, AUTOMATIC) rtu_DayOfWeek, P2VAR
    (B_CondSchedule_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 i;
    sint16 day;
    sint16 tmpVal;

    /* Chart: '<S663>/CondSchedule' */
    /* Graphical Function 'DoNotRepeat': '<S665>:68' */
    /* Transition: '<S665>:160' */
    day = rtu_DayOfWeek;
    for (i = 0; i < 7; i++)
    {
        x2[i] = false;
        localB->x_schDep[i] = -1;
    }

    /* Chart: '<S663>/CondSchedule' */
    if ((rtu_DayOfWeek < 7) && (rtu_DayOfWeek > -1))
    {
        /* Transition: '<S665>:176' */
        /* Transition: '<S665>:162' */
        tmpVal = (sint16)((rtu_NbrMinPerDay * rtu_DayOfWeek) + rtu_Dep_Time);
        if (rtu_Now_index > tmpVal)
        {
            /* Transition: '<S665>:164' */
            /* Transition: '<S665>:167' */
            if (rtu_DayOfWeek == 6)
            {
                /* Transition: '<S665>:168' */
                /* Transition: '<S665>:169' */
                day = 0;

                /* Transition: '<S665>:181' */
            }
            else
            {
                /* Transition: '<S665>:170' */
                /* Transition: '<S665>:185' */
                day = (sint16)(rtu_DayOfWeek + 1);
            }

            /* Transition: '<S665>:144' */
            localB->x_schDep[day] = (sint16)((rtu_NbrMinPerDay * day) +
                rtu_Dep_Time);

            /* Transition: '<S665>:214' */
        }
        else
        {
            /* Transition: '<S665>:163' */
            /* Transition: '<S665>:172' */
            localB->x_schDep[rtu_DayOfWeek] = tmpVal;
        }

        /* Transition: '<S665>:213' */
        x2[day] = true;

        /* Transition: '<S665>:200' */
    }
    else
    {
        /* Transition: '<S665>:161' */
        /* Transition: '<S665>:193' */
        /* Transition: '<S665>:196' */
    }

    /* Transition: '<S665>:224' */
    for (i = 0; i < 7; i++)
    {
        x1[i] = localB->x_schDep[i];
    }
}

#endif

/*
 * Output and update for atomic system:
 *    '<S663>/CondSchedule'
 *    '<S666>/CondSchedule'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_CondSchedule(VAR(sint16, AUTOMATIC)
    rtu_Dep_Time, CONST(boolean, AUTOMATIC) rtu_Days_sch[7], VAR(sint16,
    AUTOMATIC) rtu_NbrMinPerDay, VAR(boolean, AUTOMATIC) rtu_DoNotRepeat, VAR
    (sint16, AUTOMATIC) rtu_Now_index, VAR(sint16, AUTOMATIC) rtu_DayOfWeek,
    P2VAR(B_CondSchedule_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint32 i;
    sint16 x1[7];
    sint16 day;

    /* Chart: '<S663>/CondSchedule' */
    /* Gateway: CabinConditioning/CabinPreCond/CondSchedule */
    /* During: CabinConditioning/CabinPreCond/CondSchedule */
    /* Entry Internal: CabinConditioning/CabinPreCond/CondSchedule */
    /* Transition: '<S665>:237' */
    if (rtu_DoNotRepeat)
    {
        /* Transition: '<S665>:64' */
        /* Transition: '<S665>:66' */
        SCPR_ac_DoNotRepeat(x1, localB->CPWeekArray, rtu_Dep_Time,
                            rtu_NbrMinPerDay, rtu_Now_index, rtu_DayOfWeek,
                            localB);
        for (i = 0; i < 7; i++)
        {
            localB->x_schDep[i] = x1[i];
        }
    }
    else
    {
        /* Transition: '<S665>:60' */
        /* Transition: '<S665>:62' */
        day = 0;
        for (i = 0; i < 7; i++)
        {
            localB->x_schDep[i] = -1;
        }

        do
        {
            exitg1 = 0;
            if (rtu_Days_sch[day])
            {
                /* Transition: '<S665>:18' */
                /* Transition: '<S665>:6' */
                localB->x_schDep[day] = (sint16)((rtu_NbrMinPerDay * day) +
                    rtu_Dep_Time);

                /* Transition: '<S665>:38' */
            }
            else
            {
                /* Transition: '<S665>:13' */
                localB->x_schDep[day] = -1;
            }

            if (day < 6)
            {
                /* Transition: '<S665>:12' */
                /* Transition: '<S665>:1' */
                day++;
            }
            else
            {
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Transition: '<S665>:17' */
        for (i = 0; i < 7; i++)
        {
            localB->CPWeekArray[i] = rtu_Days_sch[i];
        }
    }

    /* End of Chart: '<S663>/CondSchedule' */
}

#endif

/* Function for Chart: '<S669>/CoopCHSchedule' */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_DoNotRepeat_m(sint16 x_schCoCH[7], const sint16 *Sum, sint16
    x1[7], boolean x2[7], VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR(sint16,
    AUTOMATIC) rtu_NowIndex_Min, VAR(sint16, AUTOMATIC) rtu_DayOfWeek)
{
    sint32 i;
    sint16 day;
    sint16 tmpVal;

    /* Outputs for Enabled SubSystem: '<S656>/CoopCharging' incorporates:
     *  EnablePort: '<S669>/Enable'
     */
    /* Chart: '<S669>/CoopCHSchedule' */
    /* Graphical Function 'DoNotRepeat': '<S672>:68' */
    /* Transition: '<S672>:160' */
    day = rtu_DayOfWeek;

    /* End of Outputs for SubSystem: '<S656>/CoopCharging' */
    for (i = 0; i < 7; i++)
    {
        x2[i] = false;
        x_schCoCH[i] = -1;
    }

    /* Outputs for Enabled SubSystem: '<S656>/CoopCharging' incorporates:
     *  EnablePort: '<S669>/Enable'
     */
    /* Chart: '<S669>/CoopCHSchedule' */
    if ((rtu_DayOfWeek < 7) && (rtu_DayOfWeek > -1))
    {
        /* Transition: '<S672>:176' */
        /* Transition: '<S672>:162' */
        tmpVal = (sint16)((rtu_NbrMinPerDay * rtu_DayOfWeek) + (*Sum));
        if (rtu_NowIndex_Min >= tmpVal)
        {
            /* Transition: '<S672>:164' */
            /* Transition: '<S672>:167' */
            if (rtu_DayOfWeek == 6)
            {
                /* Transition: '<S672>:168' */
                /* Transition: '<S672>:169' */
                day = 0;

                /* Transition: '<S672>:181' */
            }
            else
            {
                /* Transition: '<S672>:170' */
                /* Transition: '<S672>:185' */
                day = (sint16)(rtu_DayOfWeek + 1);
            }

            /* Transition: '<S672>:144' */
            x_schCoCH[day] = (sint16)((rtu_NbrMinPerDay * day) + (*Sum));

            /* Transition: '<S672>:214' */
        }
        else
        {
            /* Transition: '<S672>:163' */
            /* Transition: '<S672>:172' */
            x_schCoCH[rtu_DayOfWeek] = tmpVal;
        }

        /* Transition: '<S672>:213' */
        x2[day] = true;

        /* Transition: '<S672>:200' */
    }
    else
    {
        /* Transition: '<S672>:161' */
        /* Transition: '<S672>:193' */
        /* Transition: '<S672>:196' */
    }

    /* End of Outputs for SubSystem: '<S656>/CoopCharging' */
    /* Transition: '<S672>:224' */
    for (i = 0; i < 7; i++)
    {
        x1[i] = x_schCoCH[i];
    }
}

#endif

/*
 * Output and update for enable system:
 *    '<S656>/CoopCharging'
 *    '<S657>/CoopCharging'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_CoopCharging(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(sint16, AUTOMATIC) rtu_SchCoCH_StopHr, VAR(sint16, AUTOMATIC)
    rtu_SchCoCH_StopMin, VAR(boolean, AUTOMATIC) rtu_SchCoCH_Enbl, CONST(boolean,
    AUTOMATIC) rtu_Week_Array[7], VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR
    (boolean, AUTOMATIC) rtu_SchCoCH_DNR, VAR(sint16, AUTOMATIC)
    rtu_NowIndex_Min, VAR(sint16, AUTOMATIC) rtu_DayOfWeek, P2VAR
    (B_CoopCharging_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint32 i;
    sint16 x1[7];
    sint16 x_schCoCH[7];
    sint16 Sum;
    sint16 day;

    /* Outputs for Enabled SubSystem: '<S656>/CoopCharging' incorporates:
     *  EnablePort: '<S669>/Enable'
     */
    if (rtu_Enable)
    {
        /* Sum: '<S669>/Sum' incorporates:
         *  Constant: '<S669>/Constant Value1'
         *  Product: '<S669>/Product'
         */
        Sum = (sint16)(((sint16)(rtu_SchCoCH_StopHr * 60)) + rtu_SchCoCH_StopMin);

        /* Chart: '<S669>/CoopCHSchedule' */
        /* Gateway: CooperativeCharging/CoopCharging/CoopCHSchedule */
        /* During: CooperativeCharging/CoopCharging/CoopCHSchedule */
        /* Entry Internal: CooperativeCharging/CoopCharging/CoopCHSchedule */
        /* Transition: '<S672>:237' */
        if (rtu_SchCoCH_DNR)
        {
            /* Transition: '<S672>:64' */
            /* Transition: '<S672>:66' */
            SCPR_ac_DoNotRepeat_m(x_schCoCH, &Sum, x1, localB->CoCHWeekArray,
                                  rtu_NbrMinPerDay, rtu_NowIndex_Min,
                                  rtu_DayOfWeek);
            for (i = 0; i < 7; i++)
            {
                x_schCoCH[i] = x1[i];
            }
        }
        else
        {
            /* Transition: '<S672>:60' */
            /* Transition: '<S672>:62' */
            day = 0;
            for (i = 0; i < 7; i++)
            {
                x_schCoCH[i] = -1;
            }

            do
            {
                exitg1 = 0;
                if (rtu_Week_Array[day])
                {
                    /* Transition: '<S672>:18' */
                    /* Transition: '<S672>:6' */
                    x_schCoCH[day] = (sint16)((rtu_NbrMinPerDay * day) + Sum);

                    /* Transition: '<S672>:38' */
                }
                else
                {
                    /* Transition: '<S672>:13' */
                    x_schCoCH[day] = -1;
                }

                if (day < 6)
                {
                    /* Transition: '<S672>:12' */
                    /* Transition: '<S672>:1' */
                    day++;
                }
                else
                {
                    exitg1 = 1;
                }
            }
            while (exitg1 == 0);

            /* Transition: '<S672>:17' */
            for (i = 0; i < 7; i++)
            {
                localB->CoCHWeekArray[i] = rtu_Week_Array[i];
            }
        }

        /* End of Chart: '<S669>/CoopCHSchedule' */
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S669>/Switch' */
            if (rtu_SchCoCH_Enbl)
            {
                /* Switch: '<S669>/Switch' */
                localB->Switch[i] = x_schCoCH[i];
            }
            else
            {
                /* Switch: '<S669>/Switch' */
                localB->Switch[i] = -1;
            }

            /* End of Switch: '<S669>/Switch' */
        }
    }

    /* End of Outputs for SubSystem: '<S656>/CoopCharging' */
}

#endif

/* Function for Chart: '<S685>/ChrgSchedule' */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_DoNotRepeat_mm(const sint16 *Switch1, const sint16 *Sum,
    sint16 x1[7], sint16 x2[7], boolean x3[7], VAR(sint16, AUTOMATIC)
    rtu_DayOfWeek, VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay, VAR(sint16,
    AUTOMATIC) rtu_NowIndex_Min, P2VAR(B_Chrg_Sch_Array_SCPR_ac_T, AUTOMATIC,
    SCPR_VAR_INIT) localB)
{
    sint32 i;
    sint16 day;
    sint16 tmpEnd;
    sint16 tmpStart;

    /* Outputs for Enabled SubSystem: '<S660>/Chrg_Sch_Array' incorporates:
     *  EnablePort: '<S685>/Enable'
     */
    /* Chart: '<S685>/ChrgSchedule' */
    /* Graphical Function 'DoNotRepeat': '<S690>:148' */
    /* Transition: '<S690>:168' */
    day = rtu_DayOfWeek;

    /* End of Outputs for SubSystem: '<S660>/Chrg_Sch_Array' */
    for (i = 0; i < 7; i++)
    {
        x3[i] = false;
        localB->x_schStart[i] = -1;
        localB->x_schEnd[i] = -1;
    }

    /* Outputs for Enabled SubSystem: '<S660>/Chrg_Sch_Array' incorporates:
     *  EnablePort: '<S685>/Enable'
     */
    /* Chart: '<S685>/ChrgSchedule' */
    if ((rtu_DayOfWeek < 7) && (rtu_DayOfWeek > -1))
    {
        /* Transition: '<S690>:170' */
        /* Transition: '<S690>:204' */
        if ((*Sum) == (*Switch1))
        {
            /* Transition: '<S690>:206' */
            /* Transition: '<S690>:210' */
            tmpStart = (sint16)((rtu_NbrMinPerDay * rtu_DayOfWeek) + (*Sum));
            tmpEnd = (sint16)(((rtu_DayOfWeek + 1) * rtu_NbrMinPerDay) +
                              (*Switch1));

            /* Transition: '<S690>:219' */
        }
        else
        {
            /* Transition: '<S690>:215' */
            /* Transition: '<S690>:172' */
            i = ((sint32)rtu_NbrMinPerDay) * ((sint32)rtu_DayOfWeek);
            tmpStart = (sint16)(i + ((sint32)(*Sum)));
            tmpEnd = (sint16)(i + ((sint32)(*Switch1)));
        }

        /* Transition: '<S690>:213' */
        if (rtu_NowIndex_Min >= tmpEnd)
        {
            /* Transition: '<S690>:174' */
            /* Transition: '<S690>:176' */
            if (rtu_DayOfWeek == 6)
            {
                /* Transition: '<S690>:178' */
                /* Transition: '<S690>:180' */
                day = 0;

                /* Transition: '<S690>:181' */
            }
            else
            {
                /* Transition: '<S690>:177' */
                /* Transition: '<S690>:179' */
                day = (sint16)(rtu_DayOfWeek + 1);
            }

            /* Transition: '<S690>:182' */
            i = ((sint32)rtu_NbrMinPerDay) * ((sint32)day);
            localB->x_schStart[day] = (sint16)(i + ((sint32)(*Sum)));
            localB->x_schEnd[day] = (sint16)(i + ((sint32)(*Switch1)));

            /* Transition: '<S690>:183' */
        }
        else
        {
            /* Transition: '<S690>:173' */
            /* Transition: '<S690>:175' */
            localB->x_schStart[rtu_DayOfWeek] = tmpStart;
            localB->x_schEnd[rtu_DayOfWeek] = tmpEnd;
        }

        /* Transition: '<S690>:184' */
        x3[day] = true;

        /* Transition: '<S690>:189' */
    }
    else
    {
        /* Transition: '<S690>:169' */
        /* Transition: '<S690>:171' */
        /* Transition: '<S690>:188' */
    }

    /* End of Outputs for SubSystem: '<S660>/Chrg_Sch_Array' */
    /* Transition: '<S690>:190' */
    for (i = 0; i < 7; i++)
    {
        x1[i] = localB->x_schStart[i];
        x2[i] = localB->x_schEnd[i];
    }
}

#endif

/*
 * Output and update for enable system:
 *    '<S660>/Chrg_Sch_Array'
 *    '<S661>/Chrg_Sch_Array'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_Chrg_Sch_Array(VAR(boolean, AUTOMATIC)
    rtu_Enable, VAR(sint16, AUTOMATIC) rtu_SchCH_StrtHr, VAR(sint16, AUTOMATIC)
    rtu_SchCH_StrtMin, VAR(sint16, AUTOMATIC) rtu_SchCH_EndHr, VAR(sint16,
    AUTOMATIC) rtu_SchCH_EndMin, VAR(sint16, AUTOMATIC)
    rtu_ArrElementTimeIncSize, VAR(boolean, AUTOMATIC) rtu_SchCH_ChrgUntFl, VAR
    (sint16, AUTOMATIC) rtu_DayOfWeek, VAR(sint16, AUTOMATIC) rtu_NbrMinPerDay,
    VAR(boolean, AUTOMATIC) rtu_SchCH_DNR, VAR(sint16, AUTOMATIC)
    rtu_NowIndex_Min, CONST(boolean, AUTOMATIC) rtu_Week_Array[7], P2VAR
    (B_Chrg_Sch_Array_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint32 i;
    sint16 x1[7];
    sint16 x2[7];
    sint16 Sum;
    sint16 day;
    sint16 rtb_Sum1_cq;
    uint8 cnt;

    /* Outputs for Enabled SubSystem: '<S660>/Chrg_Sch_Array' incorporates:
     *  EnablePort: '<S685>/Enable'
     */
    if (rtu_Enable)
    {
        /* Sum: '<S691>/Sum' incorporates:
         *  Constant: '<S691>/Constant Value'
         *  Product: '<S691>/Product'
         */
        Sum = (sint16)(((sint16)(rtu_SchCH_StrtHr * 60)) + rtu_SchCH_StrtMin);

        /* Switch: '<S691>/Switch1' */
        if (rtu_SchCH_ChrgUntFl)
        {
            /* Switch: '<S691>/Switch1' incorporates:
             *  Sum: '<S691>/Sum3'
             */
            rtb_Sum1_cq = (sint16)(Sum + rtu_ArrElementTimeIncSize);
        }
        else
        {
            /* Sum: '<S691>/Sum1' incorporates:
             *  Constant: '<S691>/Constant Value1'
             *  Product: '<S691>/Product1'
             */
            rtb_Sum1_cq = (sint16)(((sint16)(rtu_SchCH_EndHr * 60)) +
                                   rtu_SchCH_EndMin);

            /* Switch: '<S691>/Switch' incorporates:
             *  RelationalOperator: '<S691>/Comparison'
             */
            if (Sum > rtb_Sum1_cq)
            {
                /* Switch: '<S691>/Switch1' incorporates:
                 *  Sum: '<S691>/Sum2'
                 *  Switch: '<S691>/Switch'
                 */
                rtb_Sum1_cq += rtu_NbrMinPerDay;
            }

            /* End of Switch: '<S691>/Switch' */
        }

        /* End of Switch: '<S691>/Switch1' */

        /* Chart: '<S685>/ChrgSchedule' */
        /* Gateway: ScheduleCharging/Chrg_Sch_Array/ChrgSchedule */
        /* During: ScheduleCharging/Chrg_Sch_Array/ChrgSchedule */
        /* Entry Internal: ScheduleCharging/Chrg_Sch_Array/ChrgSchedule */
        /* Transition: '<S690>:117' */
        if (rtu_SchCH_DNR)
        {
            /* Transition: '<S690>:128' */
            /* Transition: '<S690>:141' */
            SCPR_ac_DoNotRepeat_mm(&rtb_Sum1_cq, &Sum, x1, x2,
                                   localB->CHWeekArray, rtu_DayOfWeek,
                                   rtu_NbrMinPerDay, rtu_NowIndex_Min, localB);
            for (i = 0; i < 7; i++)
            {
                localB->x_schStart[i] = x1[i];
                localB->x_schEnd[i] = x2[i];
            }
        }
        else
        {
            /* Transition: '<S690>:125' */
            /* Transition: '<S690>:130' */
            for (i = 0; i < 7; i++)
            {
                localB->x_schStart[i] = -1;
                localB->x_schEnd[i] = -1;
            }

            day = 0;
            cnt = 0U;
            localB->WeekOverlap = false;
            do
            {
                exitg1 = 0;
                if (rtu_Week_Array[day])
                {
                    /* Transition: '<S690>:94' */
                    if (Sum == rtb_Sum1_cq)
                    {
                        /* Transition: '<S690>:97' */
                        /* Transition: '<S690>:119' */
                        cnt = (uint8)((sint32)(((sint32)cnt) + 1));
                        localB->x_schStart[day] = (sint16)((rtu_NbrMinPerDay *
                            day) + Sum);
                        localB->x_schEnd[day] = (sint16)(((day + 1) *
                            rtu_NbrMinPerDay) + rtb_Sum1_cq);

                        /* Transition: '<S690>:134' */
                    }
                    else
                    {
                        /* Transition: '<S690>:133' */
                        i = ((sint32)rtu_NbrMinPerDay) * ((sint32)day);
                        localB->x_schStart[day] = (sint16)(i + ((sint32)Sum));
                        localB->x_schEnd[day] = (sint16)(i + ((sint32)
                            rtb_Sum1_cq));
                    }

                    /* Transition: '<S690>:113' */
                    /* Transition: '<S690>:118' */
                }
                else
                {
                    /* Transition: '<S690>:138' */
                    localB->x_schStart[day] = -1;
                    localB->x_schEnd[day] = -1;
                }

                if (day < 6)
                {
                    /* Transition: '<S690>:136' */
                    /* Transition: '<S690>:137' */
                    day++;
                }
                else
                {
                    exitg1 = 1;
                }
            }
            while (exitg1 == 0);

            /* Transition: '<S690>:104' */
            if (((sint32)cnt) == 7)
            {
                /* Transition: '<S690>:99' */
                /* Transition: '<S690>:114' */
                localB->WeekOverlap = true;

                /* Transition: '<S690>:105' */
            }
            else
            {
                /* Transition: '<S690>:123' */
            }

            /* Transition: '<S690>:108' */
            for (i = 0; i < 7; i++)
            {
                localB->CHWeekArray[i] = rtu_Week_Array[i];
            }
        }

        /* End of Chart: '<S685>/ChrgSchedule' */
        for (i = 0; i < 7; i++)
        {
            /* Logic: '<S685>/Logical' */
            localB->Logical[i] = ((localB->CHWeekArray[i]) &&
                                  rtu_SchCH_ChrgUntFl);
        }
    }

    /* End of Outputs for SubSystem: '<S660>/Chrg_Sch_Array' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S660>/NowInSchedule'
 *    '<S661>/NowInSchedule'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_NowInSchedule(VAR(sint16, AUTOMATIC)
    rtu_Now_Min, CONST(sint16, AUTOMATIC) rtu_x_schStartMin[7], CONST(sint16,
    AUTOMATIC) rtu_x_schEndMin[7], VAR(sint16, AUTOMATIC) rtu_NbrMinPerWeek,
    P2VAR(B_NowInSchedule_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    sint32 exitg1;
    sint16 j;

    /* Chart: '<S660>/NowInSchedule' */
    /* Gateway: ScheduleCharging/NowInSchedule */
    /* During: ScheduleCharging/NowInSchedule */
    /* Entry Internal: ScheduleCharging/NowInSchedule */
    /* Transition: '<S686>:1' */
    j = 0;
    do
    {
        exitg1 = 0;
        if (j < 7)
        {
            /* Transition: '<S686>:23' */
            if ((rtu_Now_Min >= rtu_x_schStartMin[j]) && (rtu_Now_Min <
                    rtu_x_schEndMin[j]))
            {
                /* Transition: '<S686>:4' */
                /* Transition: '<S686>:14' */
                localB->Sch_InWindow = true;
                exitg1 = 1;
            }
            else
            {
                /*   */
                if ((rtu_x_schEndMin[j] > (rtu_NbrMinPerWeek - 1)) &&
                        (rtu_Now_Min < (rtu_x_schEndMin[j] - rtu_NbrMinPerWeek)))
                {
                    /* Transition: '<S686>:30' */
                    /* Transition: '<S686>:14' */
                    localB->Sch_InWindow = true;
                    exitg1 = 1;
                }
                else
                {
                    /* Transition: '<S686>:5' */
                    localB->Sch_InWindow = false;

                    /* Transition: '<S686>:22' */
                    j++;
                }
            }
        }
        else
        {
            /* Transition: '<S686>:25' */
            /* Transition: '<S686>:35' */
            /* Transition: '<S686>:36' */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Transition: '<S686>:37' */
}

#endif

/*
 * Output and update for atomic system:
 *    '<S718>/LeapYrChk'
 *    '<S782>/Leap_Year'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_LeapYrChk(VAR(float32, AUTOMATIC)
    rtu_year, P2VAR(B_LeapYrChk_SCPR_ac_T, AUTOMATIC, SCPR_VAR_INIT) localB)
{
    /* Chart: '<S718>/LeapYrChk' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/SysTimeKeeping/DayofWeek/Inputs/LeapYrChk */
    /* During: SCPR_FUNC_MedTEH/SCPC/SysTimeKeeping/DayofWeek/Inputs/LeapYrChk */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/SysTimeKeeping/DayofWeek/Inputs/LeapYrChk */
    /* Transition: '<S728>:35' */
    if ((rtu_year > 0.0F) && ((((sint32)rtu_year) % 4) == 0))
    {
        /* Transition: '<S728>:42' */
        if ((((sint32)rtu_year) % 100) == 0)
        {
            /* Transition: '<S728>:32' */
            /* Transition: '<S728>:46' */
            if ((((sint32)rtu_year) % 400) == 0)
            {
                /* Transition: '<S728>:37' */
                /* Transition: '<S728>:50' */
                localB->leap = true;
            }
            else
            {
                /* Transition: '<S728>:52' */
                localB->leap = false;

                /* Transition: '<S728>:56' */
            }

            /* Transition: '<S728>:55' */
        }
        else
        {
            /* Transition: '<S728>:40' */
            localB->leap = true;

            /* Transition: '<S728>:60' */
            /* Transition: '<S728>:59' */
        }
    }
    else
    {
        /* Transition: '<S728>:41' */
        localB->leap = false;

        /* Transition: '<S728>:59' */
    }

    /* End of Chart: '<S718>/LeapYrChk' */
    /* Transition: '<S728>:39' */
}

#endif

/*
 * Output and update for action system:
 *    '<S714>/FiveMins'
 *    '<S714>/TenMins'
 *    '<S714>/FifteenMins'
 */
#if Rte_SysCon_Variant_SCPR_1

static FUNC(void, SCPR_CODE_LOCAL) SCPR_ac_FiveMins(VAR(sint16, AUTOMATIC)
    rtu_In1, P2VAR(sint16, AUTOMATIC, SCPR_VAR_INIT) rty_Out1)
{
    /* Inport: '<S749>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/* Function for Chart: '<S373>/SortEnd_Extract' */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_sort(sint16 leng, sint16 x[14])
{
    sint32 exitg1;
    sint16 n;
    sint16 nnew;
    sint16 r;
    sint16 tmp;

    /* Graphical Function 'sort': '<S476>:37' */
    /* Transition: '<S476>:47' */
    /* Transition: '<S476>:48' */
    n = (sint16)(leng - 1);
    r = 1;
    while (n > 0)
    {
        /* Transition: '<S476>:50' */
        /* Transition: '<S476>:52' */
        nnew = 0;
        do
        {
            exitg1 = 0;
            tmp = x[r - 1];
            if ((r <= n) && (x[r] < tmp))
            {
                /* Transition: '<S476>:53' */
                /* Transition: '<S476>:57' */
                nnew = x[r];
                x[r] = tmp;
                x[r - 1] = nnew;
                nnew = r;

                /* Transition: '<S476>:58' */
                /* Transition: '<S476>:56' */
                r++;
            }
            else if (r <= n)
            {
                /* Transition: '<S476>:55' */
                /* Transition: '<S476>:58' */
                /* Transition: '<S476>:56' */
                r++;
            }
            else
            {
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Transition: '<S476>:54' */
        /* Transition: '<S476>:51' */
        n = nnew;
        r = 1;
    }

    /* Transition: '<S476>:49' */
}

#endif

/* Function for Chart: '<S373>/ChargeUF' */
#if Rte_SysCon_Variant_SCPR_1

static boolean SCPR_ac_UFwindow(sint8 pos)
{
    boolean x;

    /* Graphical Function 'UFwindow': '<S448>:111' */
    /* Transition: '<S448>:121' */
    x = false;
    if (!SCPR_ac_DW.backFlag)
    {
        /* Transition: '<S448>:124' */
        /* Transition: '<S448>:145' */
        x = true;

        /* Transition: '<S448>:153' */
    }
    else if ((VeSCPR_K_NowIndex_Min < VaSCPR_K_SchGlobalEnd[(pos)]) ||
             (SCPR_ac_B.startOverCheck))
    {
        /* Transition: '<S448>:148' */
        /* Transition: '<S448>:150' */
        x = true;

        /* Transition: '<S448>:155' */
    }
    else
    {
        /* Transition: '<S448>:152' */
    }

    /* Transition: '<S448>:157' */
    return x;
}

#endif

/* Function for Chart: '<S447>/Canc_OverlapProc' */
#if Rte_SysCon_Variant_SCPR_1

static sint16 SCPR_ac_Sum(const boolean VEC[14], sint16 i, sint16 end)
{
    sint16 x;
    boolean flag;

    /* Graphical Function 'Sum': '<S481>:65' */
    /* Transition: '<S481>:67' */
    x = 0;
    flag = true;
    if (i >= end)
    {
        /* Transition: '<S481>:87' */
        /* Transition: '<S481>:90' */
        while ((flag && (i < 14)) || (i <= end))
        {
            /* Transition: '<S481>:92' */
            /* Transition: '<S481>:94' */
            x = (sint16)(((sint32)x) + (VEC[i] ? 1 : 0));
            if (flag && (i >= 13))
            {
                /* Transition: '<S481>:102' */
                /* Transition: '<S481>:103' */
                flag = false;
                i = 0;
            }
            else
            {
                /* Transition: '<S481>:95' */
                i++;
            }
        }

        /* Transition: '<S481>:96' */
    }
    else
    {
        /* Transition: '<S481>:85' */
        /* Transition: '<S481>:83' */
        while (i <= end)
        {
            /* Transition: '<S481>:71' */
            /* Transition: '<S481>:75' */
            x = (sint16)(((sint32)x) + (VEC[i] ? 1 : 0));

            /* Transition: '<S481>:76' */
            i++;
        }

        /* Transition: '<S481>:78' */
    }

    /* Transition: '<S481>:105' */
    return x;
}

#endif

/* Function for Chart: '<S373>/Sorting' */
#if Rte_SysCon_Variant_SCPR_1

static void SCPR_ac_sortID(sint16 leng, sint16 x[2], sint8 rag1[2])
{
    sint32 exitg1;
    sint16 n;
    sint16 nnew;
    sint16 r;
    sint16 tmp;
    sint8 val1;

    /* Graphical Function 'sortID': '<S477>:59' */
    /* Transition: '<S477>:69' */
    /* Transition: '<S477>:70' */
    n = (sint16)(leng - 1);
    r = 1;
    while (n > 0)
    {
        /* Transition: '<S477>:72' */
        /* Transition: '<S477>:74' */
        nnew = 0;
        do
        {
            exitg1 = 0;
            tmp = x[r - 1];
            if ((r <= n) && (x[r] < tmp))
            {
                /* Transition: '<S477>:76' */
                /* Transition: '<S477>:79' */
                nnew = x[r];
                x[r] = tmp;
                x[r - 1] = nnew;
                val1 = rag1[r];
                rag1[r] = rag1[r - 1];
                rag1[r - 1] = val1;
                nnew = r;

                /* Transition: '<S477>:80' */
                /* Transition: '<S477>:78' */
                r++;
            }
            else if (r <= n)
            {
                /* Transition: '<S477>:77' */
                /* Transition: '<S477>:80' */
                /* Transition: '<S477>:78' */
                r++;
            }
            else
            {
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Transition: '<S477>:75' */
        /* Transition: '<S477>:73' */
        n = nnew;
        r = 1;
    }

    /* Transition: '<S477>:71' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_SCPR_1

FUNC(void, SCPR_CODE) SCPR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_SCPR_1

    sint8 b[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 b_a[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 b_b[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 c_a[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 c_b[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 d_a[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 m;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 j;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 add;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 N;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 tmpEnds[14];

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_1;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_8;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_9;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_a;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_b;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_e;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_f;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_g;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_h;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_i;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_j;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint8 tmpRead_k;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint8 tmpRead_l;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_m;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 tmpRead_n;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_SchAllow tmpRead_o;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint8 tmpRead_p;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_q;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_r;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 tmpRead_s;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 tmpRead_t;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_SchAllow tmpRead_u;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_v;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint8 tmpRead_w;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_x;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_y;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_z;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_10;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_11;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_12;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_13;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_14;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_15;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_16;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_17;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_18;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_19;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1a;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1b;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1c;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1d;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1e;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1f;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_ChargingSystemSts tmpRead_1g;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1h;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TePMDR_e_PowerMode tmpRead_1i;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1j;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_1k;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1l;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1m;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_ChargingLevel tmpRead_1n;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1o;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1p;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1q;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1r;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_DoorLockSts tmpRead_1s;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint32 tmpRead_1t;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_1u;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_1v;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_RRM_VP_Level tmpRead_1w;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1x;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_1y;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_ChargeType tmpRead_1z;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_20;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_21;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_22;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_SchAllow tmpRead_23;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_24;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_25;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_SchAllow tmpRead_26;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_27;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_28;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_29;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_2a;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_2b;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_2c;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_2d;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 tmpRead_2e;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TePLTR_e_HybridType tmpRead_2f;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_ChrgSysStat tmpRead_2g;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_FOTA_Install_Status tmpRead_2h;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeHPMR_e_HybSysState tmpRead_2i;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_2j;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmpRead_2k;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeTIMR_e_RacePrep tmpRead_2l;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical4_d;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical1_oz;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Switch4_ow[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint32 rtb_FloatToFix;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical1_d0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_liv;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_dp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_fl;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Switch4_m;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Merge_n;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical6_ko;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Comparison4_ah;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_c2;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical1_f;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical11_i;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_ck;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Comparison4_du;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_NextStart;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge4;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch2_kb[3];

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_Logical3_li;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_do;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_ec;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint16 rtb_Switch1_al;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint32 rtb_Sum;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_OR1_ii;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Sum2;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Switch1_ls;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_UnitDelay1_iqj;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Switch1_no;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_days;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Sum1_nz;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Sum1_a;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint16 rtb_Switch1_hi;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_lnr;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_ChrgDontChrg;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch_jl[14];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch_gp[14];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch_k4[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch_bw[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_Product2_l4[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_Product3_n[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_Product_a[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_Product1_h[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_Product4_p[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint8 rtb_Product5_g[7];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch_mc;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Sum2_h;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint16 rtb_Switch1_e0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch3_ge[2];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch_bd;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Switch1_h25;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_day;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge5_e;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Switch_nv[3];

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge4_m;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge5;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge6;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge7;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Merge8;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Switch1_ky;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_am;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_OR1_ep;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_OR1_pka;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_TmpSignalConversionAtVeCITR;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_TmpSignalConversionAtVeC_cs;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint8 rtb_TmpSignalConversionAtVeC_ir;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_TmpSignalConversionAtVeCI_l;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_TmpSignalConversionAtVeCI_g;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_TmpSignalConversionAtVeCI_p;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint8 rtb_TmpSignalConversionAtVeCI_e;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_TmpSignalConversionAtVeC_i0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_AND_eb;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_OR1_lu;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 rtb_Sum7;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Switch3_kq;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint32 rtb_xOvlp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Multiplication1;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_Sum3_g[3];

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_CPIM_Icon_Ind rtb_Switch2_ac;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_FOTA_Install_Type rtb_Switch3_n3;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_ChrgScheduleType rtb_TmpSignalConversionAtVeCI_c;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_ChrgScheduleType rtb_TmpSignalConversionAtVeCI_o;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_ChrgScheduleType rtb_TmpSignalConversionAtVeC_pc;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_ChrgScheduleType rtb_TmpSignalConversionAtVeCI_f;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 Merge10_e;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 Merge11_h;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 Merge12_g;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 Merge14;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 Merge13;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint16 VeSCPR_t_TimeToDeparture;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeSCPR_e_Coop_Status Switch1_k;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint32 i;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint32 rtb_Switch2_h_idx_0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    uint32 rtb_Switch2_h_idx_1;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean rtb_RelatonalOperator2_idx_2;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeSCPR_e_InitStatus rtb_TmpSignalConversionAtVeCI_0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean VeSCPR_b_ChrgNowRstLatch_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeTIMR_e_RacePrep rtb_Comparison4_ob_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean VeSCPR_b_SchChrgInWindow_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_ChargeType VeSCPR_e_ChrgTypeIsDC_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmp_0;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeOBCR_e_ChargeType tmp_1;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmp_2;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean tmp_3;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_FOTA_Install_Status VeSCPR_b_FOTACommCharge_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_CoopChargeCmd rtb_AND_fz_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    TeCITR_e_RRM_VP_Level VeSCPR_b_HCP_SchMaster_tmp;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard4 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard5 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard6 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard7 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint32 exitg1;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint32 exitg2;

#endif

#if Rte_SysCon_Variant_SCPR_1

    sint32 exitg3;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard11 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard21 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard31 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    boolean guard41 = false;

#endif

#if Rte_SysCon_Variant_SCPR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommTelematicCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommTelematicCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommTelematicCM_Value
        (&SCPR_ac_DW.StatusByte_LostCommTelematicCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommRadio' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommRadio'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommRadio_Value
        (&SCPR_ac_DW.StatusByte_LostCommRadio);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&SCPR_ac_DW.StatusByte_LostCommBCM);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&SCPR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S1>/DSW_StatusByte_IgnKeyOffTmrPerfTooFast' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_IgnKeyOffTmrPerfTooFast'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_IgnKeyOffTmrPerfTooFast_Value
        (&SCPR_ac_DW.StatusByte_IgnKeyOffTmrPerfTooF);

    /* SignalConversion generated from: '<S1>/VeCITR_K_TBM_Sch1_End_Time_Hr' incorporates:
     *  Inport: '<Root>/VeCITR_K_TBM_Sch1_End_Time_Hr'
     */
    (void)Rte_Read_VeCITR_K_TBM_Sch1_End_Time_Hr_Value
        (&rtb_TmpSignalConversionAtVeCITR);

    /* SignalConversion generated from: '<S1>/VeCITR_K_TBM_Sch1_End_Time_Min' incorporates:
     *  Inport: '<Root>/VeCITR_K_TBM_Sch1_End_Time_Min'
     */
    (void)Rte_Read_VeCITR_K_TBM_Sch1_End_Time_Min_Value
        (&rtb_TmpSignalConversionAtVeC_cs);

    /* SignalConversion generated from: '<S1>/VeCITR_K_TBM_Sch1_Day' incorporates:
     *  Inport: '<Root>/VeCITR_K_TBM_Sch1_Day'
     */
    (void)Rte_Read_VeCITR_K_TBM_Sch1_Day_Value(&rtb_TmpSignalConversionAtVeC_ir);

    /* SignalConversion generated from: '<S1>/VeCITR_b_TBM_Sch1_Enbl' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBM_Sch1_Enbl'
     */
    (void)Rte_Read_VeCITR_b_TBM_Sch1_Enbl_Value(&rtb_TmpSignalConversionAtVeCI_l);

    /* SignalConversion generated from: '<S1>/VeCITR_K_TBM_Sch2_End_Time_Hr' incorporates:
     *  Inport: '<Root>/VeCITR_K_TBM_Sch2_End_Time_Hr'
     */
    (void)Rte_Read_VeCITR_K_TBM_Sch2_End_Time_Hr_Value
        (&rtb_TmpSignalConversionAtVeCI_g);

    /* SignalConversion generated from: '<S1>/VeCITR_K_TBM_Sch2_End_Time_Min' incorporates:
     *  Inport: '<Root>/VeCITR_K_TBM_Sch2_End_Time_Min'
     */
    (void)Rte_Read_VeCITR_K_TBM_Sch2_End_Time_Min_Value
        (&rtb_TmpSignalConversionAtVeCI_p);

    /* SignalConversion generated from: '<S1>/VeCITR_K_TBM_Sch2_Day' incorporates:
     *  Inport: '<Root>/VeCITR_K_TBM_Sch2_Day'
     */
    (void)Rte_Read_VeCITR_K_TBM_Sch2_Day_Value(&rtb_TmpSignalConversionAtVeCI_e);

    /* SignalConversion generated from: '<S1>/VeCITR_b_TBM_Sch2_Enbl' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBM_Sch2_Enbl'
     */
    (void)Rte_Read_VeCITR_b_TBM_Sch2_Enbl_Value(&rtb_TmpSignalConversionAtVeC_i0);

    /* SignalConversion generated from: '<S1>/VeCITR_e_TBM_ChrgSchedType1' incorporates:
     *  Inport: '<Root>/VeCITR_e_TBM_ChrgSchedType1'
     */
    (void)Rte_Read_VeCITR_e_TBM_ChrgSchedType1_Value
        (&rtb_TmpSignalConversionAtVeCI_o);

    /* SignalConversion generated from: '<S1>/VeCITR_e_HU_ChrgSchedType1' incorporates:
     *  Inport: '<Root>/VeCITR_e_HU_ChrgSchedType1'
     */
    (void)Rte_Read_VeCITR_e_HU_ChrgSchedType1_Value
        (&rtb_TmpSignalConversionAtVeCI_c);

    /* SignalConversion generated from: '<S1>/VeCITR_e_TBM_ChrgSchedType2' incorporates:
     *  Inport: '<Root>/VeCITR_e_TBM_ChrgSchedType2'
     */
    (void)Rte_Read_VeCITR_e_TBM_ChrgSchedType2_Value
        (&rtb_TmpSignalConversionAtVeCI_f);

    /* SignalConversion generated from: '<S1>/VeCITR_e_HU_ChrgSchedType2' incorporates:
     *  Inport: '<Root>/VeCITR_e_HU_ChrgSchedType2'
     */
    (void)Rte_Read_VeCITR_e_HU_ChrgSchedType2_Value
        (&rtb_TmpSignalConversionAtVeC_pc);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPC'
     */
    /* Logic: '<S5>/Logical4' */
    rtb_Logical4_d = ((VeSCPR_b_ChargeNowRadio_In) || (SCPR_ac_B.Switch105));

    /* Outputs for Atomic SubSystem: '<S126>/EdgeRising' */
    /* Logic: '<S158>/AND' incorporates:
     *  Logic: '<S158>/OR1'
     *  UnitDelay: '<S158>/Unit Delay'
     */
    rtb_AND_ec = (rtb_Logical4_d && (!SCPR_ac_DW.UnitDelay_DSTATE_db));

    /* Update for UnitDelay: '<S158>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_db = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S126>/EdgeRising' */

    /* Switch: '<S126>/Switch2' incorporates:
     *  Constant: '<S126>/TRUE Constant'
     *  DataStoreWrite: '<S126>/Data Store Write'
     */
    if (rtb_AND_ec)
    {
        FeSCPR_b_ChrgNowLatch = true;
    }
    else
    {
        /* DataStoreWrite: '<S126>/Data Store Write' incorporates:
         *  Switch: '<S126>/Switch3'
         *  UnitDelay: '<S126>/Unit Delay'
         */
        FeSCPR_b_ChrgNowLatch = ((!SCPR_ac_DW.UnitDelay_DSTATE_hb) &&
            (FeSCPR_b_ChrgNowLatch));
    }

    /* End of Switch: '<S126>/Switch2' */

    /* Sum: '<S126>/Sum' incorporates:
     *  Constant: '<S161>/Calib'
     */
    rtb_Sum = SCPR_ac_B.VeSCPR_t_HVBatRTC + KeSCPR_t_OneHourChrgNow;

    /* Outputs for Atomic SubSystem: '<S162>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S165>/Signal Latch On With Reset' */
    /* Logic: '<S166>/OR1' incorporates:
     *  Logic: '<S166>/NOT'
     *  Logic: '<S166>/OR'
     *  UnitDelay: '<S165>/Unit Delay1'
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_Logical4_d = (rtb_AND_ec || ((!SCPR_ac_DW.UnitDelay1_DSTATE_l) &&
                       (SCPR_ac_DW.UnitDelay_DSTATE_dl)));

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_dl = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S165>/Signal Latch On With Reset' */

    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S159>/Calib'
     *  Constant: '<S165>/Constant Value'
     *  Logic: '<S165>/Logical Operator'
     *  MinMax: '<S165>/Minimum'
     *  Sum: '<S165>/Summation'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    if (!rtb_Logical4_d)
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_SmpDelayChrgNow < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_fui) + 1U)))
    {
        /* MinMax: '<S165>/Minimum' incorporates:
         *  Constant: '<S159>/Calib'
         *  Switch: '<S165>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SmpDelayChrgNow;
    }
    else
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/Constant Value'
         *  MinMax: '<S165>/Minimum'
         *  Sum: '<S165>/Summation'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_fui) + 1U);
    }

    /* End of Switch: '<S165>/Switch1' */

    /* RelationalOperator: '<S165>/Greater  Than' incorporates:
     *  Constant: '<S159>/Calib'
     */
    rtb_AND_ec = (rtb_Switch1_al >= KeSCPR_Cnt_SmpDelayChrgNow);

    /* Update for UnitDelay: '<S165>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_l = rtb_AND_ec;

    /* Update for UnitDelay: '<S165>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fui = rtb_Switch1_al;

    /* Switch: '<S162>/Switch2' incorporates:
     *  DataStoreWrite: '<S162>/Data Store Write'
     *  Logic: '<S165>/AND'
     */
    if (rtb_Logical4_d && rtb_AND_ec)
    {
        FeSCPR_g_ChrgNowMaxTimetoPlugin = rtb_Sum;
    }

    /* End of Switch: '<S162>/Switch2' */
    /* End of Outputs for SubSystem: '<S162>/Turn On Delay Sample' */

    /* Switch: '<S162>/Switch' incorporates:
     *  Constant: '<S162>/Constant'
     *  DataStoreWrite: '<S162>/Data Store Write'
     *  RelationalOperator: '<S162>/Greater  Than2'
     */
    if (FeSCPR_g_ChrgNowMaxTimetoPlugin == 0U)
    {
        /* Switch: '<S162>/Switch' incorporates:
         *  Constant: '<S162>/Constant1'
         *  Sum: '<S162>/Sum'
         */
        VeSCPR_K_ChrgNowTest4 = rtb_Sum - 1U;
    }
    else
    {
        /* Switch: '<S162>/Switch' */
        VeSCPR_K_ChrgNowTest4 = FeSCPR_g_ChrgNowMaxTimetoPlugin;
    }

    /* End of Switch: '<S162>/Switch' */

    /* RelationalOperator: '<S126>/Comparison2' */
    rtb_Logical4_d = (SCPR_ac_B.VeSCPR_t_HVBatRTC < VeSCPR_K_ChrgNowTest4);

    /* Outputs for Atomic SubSystem: '<S126>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising' */
    /* Logic: '<S167>/AND' incorporates:
     *  Logic: '<S167>/OR1'
     *  UnitDelay: '<S167>/Unit Delay'
     */
    rtb_AND_ec = (rtb_Logical4_d && (!SCPR_ac_DW.UnitDelay_DSTATE_fp));

    /* Update for UnitDelay: '<S167>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fp = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S164>/EdgeRising' */

    /* Switch: '<S164>/Switch1' incorporates:
     *  Constant: '<S160>/Calib'
     *  Constant: '<S164>/Constant Value'
     *  Logic: '<S164>/OR'
     *  Logic: '<S164>/OR1'
     *  MinMax: '<S164>/Minimum'
     *  Sum: '<S164>/Summation'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    if ((!rtb_Logical4_d) || rtb_AND_ec)
    {
        /* Switch: '<S164>/Switch1' incorporates:
         *  Constant: '<S164>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_WUDelay_RTC < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_nn) + 1U)))
    {
        /* MinMax: '<S164>/Minimum' incorporates:
         *  Constant: '<S160>/Calib'
         *  Switch: '<S164>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_WUDelay_RTC;
    }
    else
    {
        /* Switch: '<S164>/Switch1' incorporates:
         *  Constant: '<S164>/Constant Value'
         *  MinMax: '<S164>/Minimum'
         *  Sum: '<S164>/Summation'
         *  UnitDelay: '<S164>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_nn) + 1U);
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Logic: '<S164>/AND' incorporates:
     *  Constant: '<S160>/Calib'
     *  RelationalOperator: '<S164>/Greater  Than'
     */
    VeSCPR_b_ChrgNowTest3 = (rtb_Logical4_d && (rtb_Switch1_al >=
        KeSCPR_Cnt_WUDelay_RTC));

    /* Update for UnitDelay: '<S164>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nn = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S126>/Turn On Delay Sample' */

    /* Logic: '<S126>/Logical1' incorporates:
     *  DataStoreWrite: '<S126>/Data Store Write'
     */
    VeSCPR_b_ChrgNowTest2 = (((FeSCPR_b_ChrgNowLatch) && (VeSCPR_b_PluggedIn)) &&
        (VeSCPR_b_ChrgNowTest3));

    /* Outputs for Atomic SubSystem: '<S290>/EdgeRising' */
    /* Logic: '<S299>/AND' incorporates:
     *  Logic: '<S299>/OR1'
     *  UnitDelay: '<S299>/Unit Delay'
     */
    rtb_Logical4_d = !SCPR_ac_DW.UnitDelay_DSTATE_gc;

    /* Update for UnitDelay: '<S299>/Unit Delay' incorporates:
     *  Constant: '<S290>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_gc = true;

    /* End of Outputs for SubSystem: '<S290>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S290>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S301>/EdgeFalling1' */
    /* Logic: '<S302>/AND' incorporates:
     *  Logic: '<S302>/OR1'
     *  UnitDelay: '<S302>/Unit Delay'
     */
    rtb_AND_ec = ((!rtb_Logical4_d) && (SCPR_ac_DW.UnitDelay_DSTATE_eb));

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_eb = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S301>/EdgeFalling1' */

    /* Switch: '<S301>/Switch' */
    if (rtb_AND_ec)
    {
        /* Switch: '<S301>/Switch' incorporates:
         *  Constant: '<S300>/Calib'
         */
        rtb_Switch1_al = KeSCPR_Cnt_ChrgCompleteDelay;
    }
    else
    {
        /* Sum: '<S301>/Summation' incorporates:
         *  Constant: '<S301>/Constant Value'
         *  UnitDelay: '<S301>/Unit Delay'
         */
        i = ((sint32)SCPR_ac_DW.UnitDelay_DSTATE_m) - 1;
        if ((((sint32)SCPR_ac_DW.UnitDelay_DSTATE_m) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S301>/Switch' incorporates:
         *  Sum: '<S301>/Summation'
         */
        rtb_Switch1_al = (uint16)i;
    }

    /* End of Switch: '<S301>/Switch' */

    /* Update for UnitDelay: '<S301>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_al;

    /* Switch: '<S290>/Switch' incorporates:
     *  Constant: '<S301>/Constant Value2'
     *  Logic: '<S301>/AND'
     *  RelationalOperator: '<S301>/Greater  Than'
     */
    if (rtb_Logical4_d || (((sint32)rtb_Switch1_al) > 0))
    {
        /* Switch: '<S290>/Switch' incorporates:
         *  DataStoreRead: '<S290>/Data Store Read'
         */
        VeSCPR_b_SCPRChargeComplete = SCPR_ac_DW.NeSCPR_b_ChrgComplete;
    }
    else
    {
        /* Switch: '<S290>/Switch' incorporates:
         *  Constant: '<S291>/Constant'
         *  RelationalOperator: '<S214>/Comparison4'
         *  Switch: '<S809>/Switch60'
         */
        VeSCPR_b_SCPRChargeComplete = (((uint32)VeSCPR_e_ChargingSysSts) ==
            CeOBCR_e_ChargingSts_Complete);
    }

    /* End of Switch: '<S290>/Switch' */
    /* End of Outputs for SubSystem: '<S290>/Turn Off Delay Sample' */

    /* Logic: '<S196>/Logical1' incorporates:
     *  Constant: '<S203>/Constant'
     *  Constant: '<S204>/Constant'
     *  RelationalOperator: '<S196>/Relational Operator'
     *  RelationalOperator: '<S196>/Relational Operator1'
     *  Switch: '<S809>/Switch75'
     */
    VeSCPR_b_DoorUnlocked = ((((uint32)VeSCPR_e_DoorLockLastElSts) ==
        CeOBCR_e_Drv_Dr_Unlkd) || (((uint32)VeSCPR_e_DoorLockLastElSts) ==
        CeOBCR_e_All_Dr_Unlkd));

    /* RelationalOperator: '<S196>/Relational Operator4' incorporates:
     *  Constant: '<S205>/Constant'
     *  RelationalOperator: '<S196>/Relational Operator'
     *  Switch: '<S809>/Switch75'
     */
    rtb_Logical4_d = (((uint32)VeSCPR_e_DoorLockLastElSts) == CeOBCR_e_LKD);

    /* Outputs for Atomic SubSystem: '<S196>/EdgeRising' */
    /* Logic: '<S202>/AND' incorporates:
     *  Logic: '<S202>/OR1'
     *  UnitDelay: '<S202>/Unit Delay'
     */
    rtb_AND_ec = (rtb_Logical4_d && (!SCPR_ac_DW.UnitDelay_DSTATE_j3));

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_j3 = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S196>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S196>/Count Down  Reset Enabled' */
    /* Switch: '<S201>/Switch1' incorporates:
     *  Constant: '<S201>/Constant Value'
     *  Logic: '<S201>/AND'
     *  RelationalOperator: '<S201>/Greater  Than'
     *  Switch: '<S201>/Switch2'
     *  UnitDelay: '<S201>/Unit Delay'
     */
    if (rtb_AND_ec)
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Constant: '<S206>/Calib'
         */
        rtb_Switch1_al = KeSCPR_Cnt_ButtonActive;
    }
    else if (rtb_Logical4_d && (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_fj) > 0))
    {
        /* Switch: '<S201>/Switch2' incorporates:
         *  Constant: '<S201>/Constant Value1'
         *  Sum: '<S201>/Subtraction'
         *  Switch: '<S201>/Switch1'
         *  UnitDelay: '<S201>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_fj) - 1));
    }
    else
    {
        /* Switch: '<S201>/Switch1' incorporates:
         *  Switch: '<S201>/Switch2'
         *  UnitDelay: '<S201>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_fj;
    }

    /* End of Switch: '<S201>/Switch1' */

    /* Update for UnitDelay: '<S201>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fj = rtb_Switch1_al;

    /* Outputs for Atomic SubSystem: '<S196>/Signal Latch On With Reset' */
    /* Logic: '<S208>/OR1' incorporates:
     *  Constant: '<S201>/Constant Value2'
     *  Logic: '<S201>/AND1'
     *  Logic: '<S208>/NOT'
     *  Logic: '<S208>/OR'
     *  RelationalOperator: '<S201>/Greater  Than1'
     *  UnitDelay: '<S208>/Unit Delay'
     */
    VeSCPR_b_AllowButton = (rtb_AND_ec || ((((sint32)rtb_Switch1_al) > 0) &&
        (SCPR_ac_DW.UnitDelay_DSTATE_pw)));

    /* End of Outputs for SubSystem: '<S196>/Count Down  Reset Enabled' */

    /* Update for UnitDelay: '<S208>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_pw = VeSCPR_b_AllowButton;

    /* End of Outputs for SubSystem: '<S196>/Signal Latch On With Reset' */

    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S207>/Calib'
     */
    VeSCPR_b_ButtonActive_BEV = ((KeSCPR_b_ButtonAllowStop) &&
        (VeSCPR_b_AllowButton));

    /* Logic: '<S196>/Logical5' */
    VeSCPR_b_ButtonActive_Dr = ((VeSCPR_b_DoorUnlocked) ||
        (VeSCPR_b_ButtonActive_BEV));

    /* Outputs for Atomic SubSystem: '<S124>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S200>/EdgeRising' */
    /* Logic: '<S209>/AND' incorporates:
     *  Logic: '<S209>/OR1'
     *  UnitDelay: '<S209>/Unit Delay'
     */
    rtb_Logical4_d = !SCPR_ac_DW.UnitDelay_DSTATE_cur;

    /* Update for UnitDelay: '<S209>/Unit Delay' incorporates:
     *  Constant: '<S124>/TRUE Constant1'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_cur = true;

    /* End of Outputs for SubSystem: '<S200>/EdgeRising' */

    /* Switch: '<S200>/Switch1' incorporates:
     *  Constant: '<S198>/Calib'
     *  Constant: '<S200>/Constant Value'
     *  Logic: '<S200>/OR'
     *  MinMax: '<S200>/Minimum'
     *  Sum: '<S200>/Summation'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    if (rtb_Logical4_d)
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S200>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_ButtonEnblDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_nm) + 1U)))
    {
        /* MinMax: '<S200>/Minimum' incorporates:
         *  Constant: '<S198>/Calib'
         *  Switch: '<S200>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_ButtonEnblDelay;
    }
    else
    {
        /* Switch: '<S200>/Switch1' incorporates:
         *  Constant: '<S200>/Constant Value'
         *  MinMax: '<S200>/Minimum'
         *  Sum: '<S200>/Summation'
         *  UnitDelay: '<S200>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_nm) + 1U);
    }

    /* End of Switch: '<S200>/Switch1' */

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nm = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S124>/Turn On Delay Sample' */

    /* Switch: '<S124>/Switch' incorporates:
     *  Constant: '<S124>/TRUE Constant'
     *  Constant: '<S199>/Calib'
     *  Logic: '<S124>/Logical1'
     *  UnitDelay: '<S124>/Unit Delay'
     */
    if (KeSCPR_b_isBEV)
    {
        rtb_RelatonalOperator2_idx_2 = true;
    }
    else
    {
        rtb_RelatonalOperator2_idx_2 = !SCPR_ac_DW.UnitDelay_DSTATE_kp;
    }

    /* End of Switch: '<S124>/Switch' */

    /* Outputs for Atomic SubSystem: '<S124>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S124>/Turn On Delay Sample' */
    /* Logic: '<S124>/Logical5' incorporates:
     *  Constant: '<S198>/Calib'
     *  Logic: '<S124>/Logical2'
     *  Logic: '<S197>/AND'
     *  Logic: '<S197>/OR1'
     *  RelationalOperator: '<S200>/Greater  Than'
     *  UnitDelay: '<S197>/Unit Delay'
     */
    VeSCPR_b_ButtonPressValid = (((((((VeSCPR_b_ChrgPortButton_Sts) &&
        (!SCPR_ac_DW.UnitDelay_DSTATE_p1)) && (VeSCPR_b_ButtonActive_Dr)) &&
        (!SCPR_ac_B.Switch93)) && (VeSCPR_b_PluggedIn)) && (rtb_Switch1_al >=
        KeSCPR_Cnt_ButtonEnblDelay)) && rtb_RelatonalOperator2_idx_2);

    /* End of Outputs for SubSystem: '<S124>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S124>/EdgeRising1' */

    /* Outputs for Enabled SubSystem: '<S114>/CancelLogic' incorporates:
     *  EnablePort: '<S211>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S219>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S215>/Turn On Delay Sample' */
    /* Outputs for Enabled SubSystem: '<S122>/BEV_Button' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S150>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S293>/Turn On Delay Sample' */
    /* Logic: '<S126>/Logical6' incorporates:
     *  Logic: '<S151>/OR1'
     *  Logic: '<S171>/Logical2'
     *  Logic: '<S240>/OR1'
     *  Logic: '<S310>/OR1'
     *  Logic: '<S317>/OR1'
     */
    VeSCPR_b_ChrgNowRstLatch_tmp = !VeSCPR_b_PluggedIn;

    /* End of Outputs for SubSystem: '<S293>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S150>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S122>/BEV_Button' */
    /* End of Outputs for SubSystem: '<S215>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S219>/EdgeFalling3' */
    /* End of Outputs for SubSystem: '<S114>/CancelLogic' */

    /* Logic: '<S126>/Logical5' incorporates:
     *  Logic: '<S126>/Logical6'
     */
    VeSCPR_b_ChrgNowRstLatch = (((VeSCPR_b_SCPRChargeComplete) ||
        VeSCPR_b_ChrgNowRstLatch_tmp) || (VeSCPR_b_ButtonPressValid));

    /* Outputs for Atomic SubSystem: '<S126>/Signal Latch On With Reset1' */
    /* Logic: '<S163>/OR1' incorporates:
     *  Logic: '<S163>/NOT'
     *  Logic: '<S163>/OR'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    VeSCPR_b_ChrgNowTest1 = ((VeSCPR_b_ChrgNowTest2) ||
        ((!VeSCPR_b_ChrgNowRstLatch) && (SCPR_ac_DW.UnitDelay_DSTATE_i4)));

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_i4 = VeSCPR_b_ChrgNowTest1;

    /* End of Outputs for SubSystem: '<S126>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S758>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S774>/EdgeRising' */
    /* Logic: '<S775>/AND' incorporates:
     *  Logic: '<S775>/OR1'
     *  UnitDelay: '<S775>/Unit Delay'
     */
    rtb_Logical4_d = !SCPR_ac_DW.UnitDelay_DSTATE_pm;

    /* Update for UnitDelay: '<S775>/Unit Delay' incorporates:
     *  Constant: '<S758>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_pm = true;

    /* End of Outputs for SubSystem: '<S774>/EdgeRising' */

    /* Switch: '<S774>/Switch1' incorporates:
     *  Constant: '<S773>/Calib'
     *  Constant: '<S774>/Constant Value'
     *  Logic: '<S774>/OR'
     *  MinMax: '<S774>/Minimum'
     *  Sum: '<S774>/Summation'
     *  UnitDelay: '<S774>/Unit Delay'
     */
    if (rtb_Logical4_d)
    {
        /* Switch: '<S774>/Switch1' incorporates:
         *  Constant: '<S774>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_SecCntDelayWU < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_o) + 1U)))
    {
        /* MinMax: '<S774>/Minimum' incorporates:
         *  Constant: '<S773>/Calib'
         *  Switch: '<S774>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SecCntDelayWU;
    }
    else
    {
        /* Switch: '<S774>/Switch1' incorporates:
         *  Constant: '<S774>/Constant Value'
         *  MinMax: '<S774>/Minimum'
         *  Sum: '<S774>/Summation'
         *  UnitDelay: '<S774>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_o) + 1U);
    }

    /* End of Switch: '<S774>/Switch1' */

    /* Logic: '<S774>/AND' incorporates:
     *  Constant: '<S773>/Calib'
     *  RelationalOperator: '<S774>/Greater  Than'
     */
    rtb_Logical4_d = (rtb_Switch1_al >= KeSCPR_Cnt_SecCntDelayWU);

    /* Update for UnitDelay: '<S774>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S758>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S755>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S767>/EdgeRising' */
    /* Logic: '<S771>/AND' incorporates:
     *  Logic: '<S771>/OR1'
     *  UnitDelay: '<S771>/Unit Delay'
     */
    rtb_AND_ec = !SCPR_ac_DW.UnitDelay_DSTATE_dm;

    /* Update for UnitDelay: '<S771>/Unit Delay' incorporates:
     *  Constant: '<S755>/TRUE Constant2'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_dm = true;

    /* End of Outputs for SubSystem: '<S767>/EdgeRising' */

    /* Switch: '<S767>/Switch1' incorporates:
     *  Constant: '<S763>/Calib'
     *  Constant: '<S767>/Constant Value'
     *  Logic: '<S767>/OR'
     *  MinMax: '<S767>/Minimum'
     *  Sum: '<S767>/Summation'
     *  UnitDelay: '<S767>/Unit Delay'
     */
    if (rtb_AND_ec)
    {
        /* Switch: '<S767>/Switch1' incorporates:
         *  Constant: '<S767>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_DNR_secUpdateWU < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_cum) + 1U)))
    {
        /* MinMax: '<S767>/Minimum' incorporates:
         *  Constant: '<S763>/Calib'
         *  Switch: '<S767>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_DNR_secUpdateWU;
    }
    else
    {
        /* Switch: '<S767>/Switch1' incorporates:
         *  Constant: '<S767>/Constant Value'
         *  MinMax: '<S767>/Minimum'
         *  Sum: '<S767>/Summation'
         *  UnitDelay: '<S767>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_cum) + 1U);
    }

    /* End of Switch: '<S767>/Switch1' */

    /* Logic: '<S767>/AND' incorporates:
     *  Constant: '<S763>/Calib'
     *  RelationalOperator: '<S767>/Greater  Than'
     */
    rtb_AND_ec = (rtb_Switch1_al >= KeSCPR_Cnt_DNR_secUpdateWU);

    /* Update for UnitDelay: '<S767>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cum = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S755>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S755>/EdgeRising1' */
    /* Logic: '<S761>/OR1' incorporates:
     *  UnitDelay: '<S761>/Unit Delay'
     */
    rtb_OR1_ii = !SCPR_ac_DW.UnitDelay_DSTATE_fb;

    /* Update for UnitDelay: '<S761>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fb = rtb_AND_ec;

    /* Switch: '<S755>/Switch4' incorporates:
     *  Logic: '<S761>/AND'
     */
    if (rtb_AND_ec && rtb_OR1_ii)
    {
        /* Switch: '<S755>/Switch4' incorporates:
         *  DataStoreRead: '<S755>/Data Store Read1'
         *  DataStoreRead: '<S755>/Data Store Read5'
         *  DataTypeConversion: '<S755>/FixToFloat'
         *  Sum: '<S755>/Sum1'
         */
        rtb_Switch4_ow[0] = SCPR_ac_DW.NeSCPR_k_LastRTC -
            SCPR_ac_DW.NeSCPR_k_LastSecond;
        rtb_Switch4_ow[1] = (float32)SCPR_ac_B.VeSCPR_t_HVBatRTC;
    }
    else
    {
        /* Switch: '<S755>/Switch4' incorporates:
         *  Constant: '<S755>/Constant'
         */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch4_ow[i] = 0.0F;
        }
    }

    /* End of Switch: '<S755>/Switch4' */
    /* End of Outputs for SubSystem: '<S755>/EdgeRising1' */

    /* Sum: '<S755>/Sum2' */
    rtb_Sum2 = rtb_Switch4_ow[1] - rtb_Switch4_ow[0];

    /* Outputs for Atomic SubSystem: '<S755>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S765>/Signal Latch Off' */
    /* Logic: '<S769>/OR2' incorporates:
     *  Logic: '<S765>/OR2'
     *  Logic: '<S769>/Logical1'
     *  RelationalOperator: '<S765>/Comparison5'
     *  UnitDelay: '<S765>/Unit Delay1'
     *  UnitDelay: '<S769>/Unit Delay'
     */
    rtb_AND_ec = ((rtb_Sum2 == SCPR_ac_DW.UnitDelay1_DSTATE_i) &&
                  (!SCPR_ac_DW.UnitDelay_DSTATE_hi));

    /* Update for UnitDelay: '<S769>/Unit Delay' incorporates:
     *  Logic: '<S769>/Logical2'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_hi = !rtb_AND_ec;

    /* End of Outputs for SubSystem: '<S765>/Signal Latch Off' */

    /* Switch: '<S765>/Switch' incorporates:
     *  UnitDelay: '<S765>/Unit Delay2'
     */
    if (!SCPR_ac_DW.UnitDelay2_DSTATE_d)
    {
        /* Switch: '<S765>/Switch' incorporates:
         *  UnitDelay: '<S765>/Unit Delay1'
         */
        rtb_Sum2 = SCPR_ac_DW.UnitDelay1_DSTATE_i;
    }

    /* End of Switch: '<S765>/Switch' */

    /* Update for UnitDelay: '<S765>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_i = rtb_Sum2;

    /* Update for UnitDelay: '<S765>/Unit Delay2' */
    SCPR_ac_DW.UnitDelay2_DSTATE_d = rtb_AND_ec;

    /* End of Outputs for SubSystem: '<S755>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S755>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S764>/Protected Division' */
    /* Switch: '<S768>/Switch1' incorporates:
     *  Constant: '<S768>/Constant Value'
     *  RelationalOperator: '<S768>/Not Equal'
     */
    if (rtb_Sum2 != 0.0F)
    {
        /* Switch: '<S768>/Switch1' incorporates:
         *  Constant: '<S755>/Constant Value'
         *  Product: '<S768>/Division'
         */
        rtb_Switch1_ls = rtb_Sum2 / 60.0F;
    }
    else
    {
        /* Switch: '<S768>/Switch1' incorporates:
         *  Constant: '<S768>/Constant Value4'
         *  Switch: '<S768>/Switch2'
         *  Switch: '<S768>/Switch3'
         */
        rtb_Switch1_ls = 0.0F;
    }

    /* End of Switch: '<S768>/Switch1' */
    /* End of Outputs for SubSystem: '<S764>/Protected Division' */

    /* Sum: '<S764>/Sum1' incorporates:
     *  Constant: '<S755>/Constant Value'
     *  Product: '<S764>/Product'
     *  Rounding: '<S764>/Rounding'
     */
    VeSCPR_k_NewSec_IV = rtb_Sum2 - (floorf(rtb_Switch1_ls) * 60.0F);

    /* End of Outputs for SubSystem: '<S755>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S715>/SpareSecCnt' */
    /* Outputs for Atomic SubSystem: '<S756>/EdgeRising' */
    /* Logic: '<S772>/AND' incorporates:
     *  Logic: '<S772>/OR1'
     *  UnitDelay: '<S772>/Unit Delay'
     */
    rtb_AND_ec = (rtb_Logical4_d && (!SCPR_ac_DW.UnitDelay_DSTATE_ip));

    /* Update for UnitDelay: '<S772>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ip = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S756>/EdgeRising' */

    /* Switch: '<S756>/Switch1' incorporates:
     *  Logic: '<S756>/Logical1'
     *  Logic: '<S758>/Logical1'
     *  Switch: '<S756>/Switch5'
     *  UnitDelay: '<S758>/Unit Delay2'
     */
    if (rtb_AND_ec || (rtb_Logical4_d && (SCPR_ac_DW.UnitDelay2_DSTATE_a)))
    {
        /* Switch: '<S756>/Switch4' */
        if (rtb_AND_ec)
        {
            /* Switch: '<S756>/Switch1' */
            rtb_Sum2 = VeSCPR_k_NewSec_IV;
        }
        else
        {
            /* Switch: '<S756>/Switch1' incorporates:
             *  Constant: '<S756>/Constant Value3'
             */
            rtb_Sum2 = 0.0F;
        }

        /* End of Switch: '<S756>/Switch4' */
    }
    else if (rtb_Logical4_d)
    {
        /* Switch: '<S756>/Switch5' incorporates:
         *  Constant: '<S754>/Calib'
         *  Sum: '<S756>/Subtraction1'
         *  Switch: '<S756>/Switch1'
         *  UnitDelay: '<S756>/Unit Delay1'
         */
        rtb_Sum2 = HeSCPR_t_ExecRate + SCPR_ac_DW.UnitDelay1_DSTATE;
    }
    else
    {
        /* Switch: '<S756>/Switch1' incorporates:
         *  Switch: '<S756>/Switch5'
         *  UnitDelay: '<S756>/Unit Delay1'
         */
        rtb_Sum2 = SCPR_ac_DW.UnitDelay1_DSTATE;
    }

    /* End of Switch: '<S756>/Switch1' */

    /* MinMax: '<S756>/MinMax2' incorporates:
     *  Constant: '<S715>/Constant'
     *  Rounding: '<S756>/Rounding1'
     */
    VeSCPR_k_SpareSecCnt = fminf(floorf(rtb_Sum2), 59.0F);

    /* Update for UnitDelay: '<S756>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE = rtb_Sum2;

    /* End of Outputs for SubSystem: '<S715>/SpareSecCnt' */

    /* DataTypeConversion: '<S499>/FloatToFix' */
    rtb_Sum1_nz = fmodf(floorf(VeSCPR_k_SpareSecCnt), 4.2949673E+9F);

    /* DataTypeConversion: '<S499>/FloatToFix' */
    rtb_FloatToFix = (rtb_Sum1_nz < 0.0F) ? ((uint32)((sint32)(-((sint32)
        ((uint32)((float32)(-rtb_Sum1_nz))))))) : ((uint32)rtb_Sum1_nz);

    /* Switch: '<S499>/Switch' incorporates:
     *  RelationalOperator: '<S499>/Comparison7'
     *  Switch: '<S499>/Switch1'
     *  UnitDelay: '<S499>/Unit Delay5'
     */
    if (SCPR_ac_B.VeSCPR_t_HVBatRTC != SCPR_ac_DW.UnitDelay5_DSTATE_i)
    {
        /* Switch: '<S499>/Switch' incorporates:
         *  Sum: '<S499>/Sum5'
         *  UnitDelay: '<S499>/Unit Delay3'
         */
        rtb_Sum = (SCPR_ac_DW.UnitDelay3_DSTATE + SCPR_ac_B.VeSCPR_t_HVBatRTC) -
            rtb_FloatToFix;

        /* Switch: '<S499>/Switch1' incorporates:
         *  Sum: '<S499>/Sum1'
         *  UnitDelay: '<S499>/Unit Delay4'
         */
        rtb_FloatToFix = (SCPR_ac_DW.UnitDelay4_DSTATE +
                          SCPR_ac_B.VeSCPR_t_HVBatRTC) - rtb_FloatToFix;
    }
    else
    {
        /* Switch: '<S499>/Switch' incorporates:
         *  UnitDelay: '<S499>/Unit Delay6'
         */
        rtb_Sum = SCPR_ac_DW.UnitDelay6_DSTATE_n;

        /* Switch: '<S499>/Switch1' incorporates:
         *  UnitDelay: '<S499>/Unit Delay1'
         */
        rtb_FloatToFix = SCPR_ac_DW.UnitDelay1_DSTATE_h;
    }

    /* End of Switch: '<S499>/Switch' */

    /* Switch: '<S504>/Switch2' incorporates:
     *  Constant: '<S505>/Calib'
     */
    if (KeSCPR_b_SchDisableIsLate)
    {
        /* Switch: '<S504>/Switch2' incorporates:
         *  Constant: '<S506>/Calib'
         *  Sum: '<S504>/Sum1'
         *  Sum: '<S504>/Sum4'
         */
        rtb_Switch2_h_idx_0 = rtb_Sum - KeSCPR_k_DNRSecAdjustment;
        rtb_Switch2_h_idx_1 = rtb_FloatToFix - KeSCPR_k_DNRSecAdjustment;
    }
    else
    {
        /* Switch: '<S504>/Switch2' incorporates:
         *  Constant: '<S506>/Calib'
         *  Sum: '<S504>/Sum5'
         *  Sum: '<S504>/Sum6'
         */
        rtb_Switch2_h_idx_0 = rtb_Sum + KeSCPR_k_DNRSecAdjustment;
        rtb_Switch2_h_idx_1 = rtb_FloatToFix + KeSCPR_k_DNRSecAdjustment;
    }

    /* End of Switch: '<S504>/Switch2' */

    /* Logic: '<S5>/Logical1' */
    rtb_Logical1_d0 = ((VeSCPR_b_HUSch1CH_Sub) || (SCPR_ac_B.TBM_Sch1_Submit));

    /* Outputs for Atomic SubSystem: '<S500>/EdgeRising5' */
    /* Logic: '<S509>/AND' incorporates:
     *  Logic: '<S509>/OR1'
     *  UnitDelay: '<S509>/Unit Delay'
     */
    rtb_Logical4_d = (rtb_Logical1_d0 && (!SCPR_ac_DW.UnitDelay_DSTATE_mq));

    /* Update for UnitDelay: '<S509>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_mq = rtb_Logical1_d0;

    /* End of Outputs for SubSystem: '<S500>/EdgeRising5' */

    /* Logic: '<S118>/Logical' incorporates:
     *  Constant: '<S493>/Constant'
     *  Constant: '<S494>/Constant'
     *  RelationalOperator: '<S118>/Comparison1'
     *  RelationalOperator: '<S118>/Comparison5'
     *  Switch: '<S793>/Switch1'
     */
    rtb_AND_ec = ((CeCITR_e_FOTANow == ((uint32)VeSCPR_e_FOTA_Install_Type)) ||
                  (((uint32)VeSCPR_e_FOTA_Install_Type) == CeCITR_e_FOTASchedule));

    /* Outputs for Atomic SubSystem: '<S118>/EdgeRising1' */
    /* Logic: '<S492>/AND' incorporates:
     *  Logic: '<S492>/OR1'
     *  UnitDelay: '<S492>/Unit Delay'
     */
    rtb_OR1_ii = (rtb_AND_ec && (!SCPR_ac_DW.UnitDelay_DSTATE_im));

    /* Update for UnitDelay: '<S492>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_im = rtb_AND_ec;

    /* End of Outputs for SubSystem: '<S118>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S512>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S516>/Signal Latch On With Reset' */
    /* Logic: '<S517>/OR1' incorporates:
     *  Logic: '<S500>/Logical5'
     *  Logic: '<S517>/NOT'
     *  Logic: '<S517>/OR'
     *  UnitDelay: '<S516>/Unit Delay1'
     *  UnitDelay: '<S517>/Unit Delay'
     */
    rtb_Logical4_d = ((rtb_Logical4_d || rtb_OR1_ii) ||
                      ((!SCPR_ac_DW.UnitDelay1_DSTATE_j3) &&
                       (SCPR_ac_DW.UnitDelay_DSTATE_ce)));

    /* Update for UnitDelay: '<S517>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ce = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S516>/Signal Latch On With Reset' */

    /* Switch: '<S516>/Switch1' incorporates:
     *  Constant: '<S511>/Calib'
     *  Constant: '<S516>/Constant Value'
     *  Logic: '<S516>/Logical Operator'
     *  MinMax: '<S516>/Minimum'
     *  Sum: '<S516>/Summation'
     *  UnitDelay: '<S516>/Unit Delay'
     */
    if (!rtb_Logical4_d)
    {
        /* Switch: '<S516>/Switch1' incorporates:
         *  Constant: '<S516>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_SamplesOfDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_cv) + 1U)))
    {
        /* MinMax: '<S516>/Minimum' incorporates:
         *  Constant: '<S511>/Calib'
         *  Switch: '<S516>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SamplesOfDelay;
    }
    else
    {
        /* Switch: '<S516>/Switch1' incorporates:
         *  Constant: '<S516>/Constant Value'
         *  MinMax: '<S516>/Minimum'
         *  Sum: '<S516>/Summation'
         *  UnitDelay: '<S516>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_cv) + 1U);
    }

    /* End of Switch: '<S516>/Switch1' */

    /* RelationalOperator: '<S516>/Greater  Than' incorporates:
     *  Constant: '<S511>/Calib'
     */
    rtb_AND_ec = (rtb_Switch1_al >= KeSCPR_Cnt_SamplesOfDelay);

    /* Update for UnitDelay: '<S516>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_j3 = rtb_AND_ec;

    /* Update for UnitDelay: '<S516>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cv = rtb_Switch1_al;

    /* Switch: '<S512>/Switch2' incorporates:
     *  DataStoreWrite: '<S512>/Data Store Write'
     *  Logic: '<S516>/AND'
     */
    if (rtb_Logical4_d && rtb_AND_ec)
    {
        SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch1 = rtb_Switch2_h_idx_0;
    }

    /* End of Switch: '<S512>/Switch2' */
    /* End of Outputs for SubSystem: '<S512>/Turn On Delay Sample' */

    /* Switch: '<S512>/Switch' incorporates:
     *  Constant: '<S512>/Constant'
     *  DataStoreWrite: '<S512>/Data Store Write'
     *  RelationalOperator: '<S512>/Greater  Than2'
     */
    if (SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch1 == 0U)
    {
        /* Switch: '<S512>/Switch' incorporates:
         *  Constant: '<S512>/Constant1'
         *  Sum: '<S512>/Sum'
         */
        VeSCPR_K_Sch1CH_DNRnxtCanc = rtb_Switch2_h_idx_0 + 1U;
    }
    else
    {
        /* Switch: '<S512>/Switch' */
        VeSCPR_K_Sch1CH_DNRnxtCanc = SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch1;
    }

    /* End of Switch: '<S512>/Switch' */

    /* RelationalOperator: '<S500>/notEqualTo' */
    rtb_AND_ec = (SCPR_ac_B.VeSCPR_t_HVBatRTC > VeSCPR_K_Sch1CH_DNRnxtCanc);

    /* Outputs for Atomic SubSystem: '<S500>/EdgeRising2' */
    /* Logic: '<S507>/AND' incorporates:
     *  Logic: '<S507>/OR1'
     *  UnitDelay: '<S507>/Unit Delay'
     */
    rtb_Logical4_d = (rtb_AND_ec && (!SCPR_ac_DW.UnitDelay_DSTATE_i3));

    /* Update for UnitDelay: '<S507>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_i3 = rtb_AND_ec;

    /* End of Outputs for SubSystem: '<S500>/EdgeRising2' */

    /* UnitDelay: '<S318>/Unit Delay1' */
    rtb_UnitDelay1_iqj = SCPR_ac_DW.UnitDelay1_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset3' */
    /* Switch: '<S334>/Switch' incorporates:
     *  Delay: '<S334>/Integer Delay'
     *  Logic: '<S334>/OR1'
     *  RelationalOperator: '<S334>/Comparison5'
     *  UnitDelay: '<S334>/Unit Delay1'
     */
    if ((rtb_UnitDelay1_iqj != SCPR_ac_DW.UnitDelay1_DSTATE_g) &&
            (!SCPR_ac_DW.IntegerDelay_DSTATE_a[0]))
    {
        /* Switch: '<S334>/Switch' */
        rtb_UnitDelay1_iqj = SCPR_ac_DW.UnitDelay1_DSTATE_g;
    }

    /* End of Switch: '<S334>/Switch' */
    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset3' */

    /* UnitDelay: '<S316>/Unit Delay4' */
    VeSCPR_b_ResetUFwindow = SCPR_ac_DW.UnitDelay4_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S514>/EdgeRising3' */
    /* Logic: '<S520>/AND' incorporates:
     *  Logic: '<S520>/OR1'
     *  UnitDelay: '<S520>/Unit Delay'
     */
    rtb_AND_dp = ((VeSCPR_b_ResetUFwindow) && (!SCPR_ac_DW.UnitDelay_DSTATE_of));

    /* Update for UnitDelay: '<S520>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_of = VeSCPR_b_ResetUFwindow;

    /* End of Outputs for SubSystem: '<S514>/EdgeRising3' */

    /* Logic: '<S210>/Logical6' incorporates:
     *  DataStoreRead: '<S210>/Data Store Read8'
     *  DataStoreRead: '<S210>/Data Store Read9'
     *  Logic: '<S210>/Logical7'
     */
    VeSCPR_b_xMinUFWindowOK = ((SCPR_ac_DW.NeSCPR_b_xMinUF) &&
        (!SCPR_ac_DW.NeSCPR_b_xMinUFCancel));

    /* DataStoreRead: '<S210>/Data Store Read1' */
    rtb_AND_ec = SCPR_ac_DW.NeSCPR_b_AllowCancel;

    /* Outputs for Atomic SubSystem: '<S297>/EdgeFalling' */
    /* Logic: '<S312>/OR1' incorporates:
     *  DataStoreRead: '<S210>/Data Store Read1'
     *  Logic: '<S210>/Logical17'
     */
    rtb_Comparison4_du = !SCPR_ac_DW.NeSCPR_b_AllowCancel;

    /* Logic: '<S312>/AND' incorporates:
     *  Logic: '<S312>/OR1'
     *  UnitDelay: '<S312>/Unit Delay'
     */
    rtb_AND_liv = (rtb_Comparison4_du && (SCPR_ac_DW.UnitDelay_DSTATE_ba));

    /* Update for UnitDelay: '<S312>/Unit Delay' incorporates:
     *  DataStoreRead: '<S210>/Data Store Read1'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_ba = SCPR_ac_DW.NeSCPR_b_AllowCancel;

    /* End of Outputs for SubSystem: '<S297>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S214>/Signal Latch On With Reset' */
    /* Logic: '<S296>/OR1' incorporates:
     *  Logic: '<S296>/NOT'
     *  Logic: '<S296>/OR'
     *  Logic: '<S297>/Logical14'
     *  UnitDelay: '<S296>/Unit Delay'
     *  UnitDelay: '<S297>/Unit Delay4'
     */
    VeSCPR_b_NowInUFWindow = ((VeSCPR_b_xMinUFWindowOK) ||
        (((!SCPR_ac_DW.UnitDelay4_DSTATE_n) && (!rtb_AND_liv)) &&
         (SCPR_ac_DW.UnitDelay_DSTATE_el)));

    /* Update for UnitDelay: '<S296>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_el = VeSCPR_b_NowInUFWindow;

    /* End of Outputs for SubSystem: '<S214>/Signal Latch On With Reset' */

    /* Logic: '<S514>/Logical5' incorporates:
     *  Constant: '<S514>/Constant'
     *  Logic: '<S514>/Logical4'
     *  RelationalOperator: '<S514>/Comparison4'
     */
    VeSCPR_b_Sch1UF_DNRdisable = (((SCPR_ac_B.DataStoreRead6_a) &&
        (rtb_UnitDelay1_iqj == 1)) && (rtb_AND_dp && (VeSCPR_b_NowInUFWindow)));

    /* Logic: '<S500>/Logical' incorporates:
     *  Logic: '<S500>/Logical3'
     */
    VeSCPR_b_Sch1CH_DNRCanc_Test = ((rtb_Logical4_d ||
        (VeSCPR_b_Sch1UF_DNRdisable)) && (SCPR_ac_B.DataStoreRead27_d));

    /* Logic: '<S5>/Logical2' */
    rtb_AND_liv = ((VeSCPR_b_HUSch2CH_Sub) || (SCPR_ac_B.TBM_Sch2_Submit));

    /* Outputs for Atomic SubSystem: '<S500>/EdgeRising6' */
    /* Logic: '<S510>/AND' incorporates:
     *  Logic: '<S510>/OR1'
     *  UnitDelay: '<S510>/Unit Delay'
     */
    rtb_Logical4_d = (rtb_AND_liv && (!SCPR_ac_DW.UnitDelay_DSTATE_lm));

    /* Update for UnitDelay: '<S510>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_lm = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S500>/EdgeRising6' */

    /* Outputs for Atomic SubSystem: '<S513>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S518>/Signal Latch On With Reset' */
    /* Logic: '<S519>/OR1' incorporates:
     *  Logic: '<S500>/Logical6'
     *  Logic: '<S519>/NOT'
     *  Logic: '<S519>/OR'
     *  UnitDelay: '<S518>/Unit Delay1'
     *  UnitDelay: '<S519>/Unit Delay'
     */
    rtb_Logical4_d = ((rtb_OR1_ii || rtb_Logical4_d) ||
                      ((!SCPR_ac_DW.UnitDelay1_DSTATE_f) &&
                       (SCPR_ac_DW.UnitDelay_DSTATE_hk)));

    /* Update for UnitDelay: '<S519>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_hk = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S518>/Signal Latch On With Reset' */

    /* Switch: '<S518>/Switch1' incorporates:
     *  Constant: '<S511>/Calib'
     *  Constant: '<S518>/Constant Value'
     *  Logic: '<S518>/Logical Operator'
     *  MinMax: '<S518>/Minimum'
     *  Sum: '<S518>/Summation'
     *  UnitDelay: '<S518>/Unit Delay'
     */
    if (!rtb_Logical4_d)
    {
        /* Switch: '<S518>/Switch1' incorporates:
         *  Constant: '<S518>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_SamplesOfDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_og) + 1U)))
    {
        /* MinMax: '<S518>/Minimum' incorporates:
         *  Constant: '<S511>/Calib'
         *  Switch: '<S518>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SamplesOfDelay;
    }
    else
    {
        /* Switch: '<S518>/Switch1' incorporates:
         *  Constant: '<S518>/Constant Value'
         *  MinMax: '<S518>/Minimum'
         *  Sum: '<S518>/Summation'
         *  UnitDelay: '<S518>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_og) + 1U);
    }

    /* End of Switch: '<S518>/Switch1' */

    /* RelationalOperator: '<S518>/Greater  Than' incorporates:
     *  Constant: '<S511>/Calib'
     */
    rtb_AND_dp = (rtb_Switch1_al >= KeSCPR_Cnt_SamplesOfDelay);

    /* Update for UnitDelay: '<S518>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_f = rtb_AND_dp;

    /* Update for UnitDelay: '<S518>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_og = rtb_Switch1_al;

    /* Switch: '<S513>/Switch2' incorporates:
     *  DataStoreWrite: '<S513>/Data Store Write'
     *  Logic: '<S518>/AND'
     */
    if (rtb_Logical4_d && rtb_AND_dp)
    {
        SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch2 = rtb_Switch2_h_idx_1;
    }

    /* End of Switch: '<S513>/Switch2' */
    /* End of Outputs for SubSystem: '<S513>/Turn On Delay Sample' */

    /* Switch: '<S513>/Switch' incorporates:
     *  Constant: '<S513>/Constant'
     *  DataStoreWrite: '<S513>/Data Store Write'
     *  RelationalOperator: '<S513>/Greater  Than2'
     */
    if (SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch2 == 0U)
    {
        /* Switch: '<S513>/Switch' incorporates:
         *  Constant: '<S513>/Constant1'
         *  Sum: '<S513>/Sum'
         */
        VeSCPR_K_Sch2CH_DNRnxtCanc = rtb_Switch2_h_idx_1 + 1U;
    }
    else
    {
        /* Switch: '<S513>/Switch' */
        VeSCPR_K_Sch2CH_DNRnxtCanc = SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch2;
    }

    /* End of Switch: '<S513>/Switch' */

    /* RelationalOperator: '<S500>/notEqualTo1' */
    rtb_AND_dp = (SCPR_ac_B.VeSCPR_t_HVBatRTC > VeSCPR_K_Sch2CH_DNRnxtCanc);

    /* Outputs for Atomic SubSystem: '<S500>/EdgeRising3' */
    /* Logic: '<S508>/AND' incorporates:
     *  Logic: '<S508>/OR1'
     *  UnitDelay: '<S508>/Unit Delay'
     */
    rtb_Logical4_d = (rtb_AND_dp && (!SCPR_ac_DW.UnitDelay_DSTATE_kr));

    /* Update for UnitDelay: '<S508>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_kr = rtb_AND_dp;

    /* End of Outputs for SubSystem: '<S500>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S515>/EdgeRising3' */
    /* Logic: '<S521>/AND' incorporates:
     *  Logic: '<S521>/OR1'
     *  UnitDelay: '<S521>/Unit Delay'
     */
    rtb_AND_dp = ((VeSCPR_b_ResetUFwindow) && (!SCPR_ac_DW.UnitDelay_DSTATE_aw));

    /* Update for UnitDelay: '<S521>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_aw = VeSCPR_b_ResetUFwindow;

    /* End of Outputs for SubSystem: '<S515>/EdgeRising3' */

    /* Logic: '<S515>/Logical5' incorporates:
     *  Constant: '<S515>/Constant'
     *  Logic: '<S515>/Logical4'
     *  RelationalOperator: '<S515>/Comparison4'
     */
    VeSCPR_b_Sch2UF_DNRdisable = (((SCPR_ac_B.DataStoreRead13_d) &&
        (rtb_UnitDelay1_iqj == 2)) && (rtb_AND_dp && (VeSCPR_b_NowInUFWindow)));

    /* Logic: '<S500>/Logical2' incorporates:
     *  Logic: '<S500>/Logical4'
     */
    VeSCPR_b_Sch2CH_DNRCanc_Test = ((rtb_Logical4_d ||
        (VeSCPR_b_Sch2UF_DNRdisable)) && (SCPR_ac_B.DataStoreRead29));

    /* Logic: '<S500>/Logical1' */
    VeSCPR_b_CH_DNRCancel = ((VeSCPR_b_Sch1CH_DNRCanc_Test) ||
        (VeSCPR_b_Sch2CH_DNRCanc_Test));

    /* Outputs for Atomic SubSystem: '<S491>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S489>/Signal Latch On With Reset' */
    /* Logic: '<S503>/NOT' incorporates:
     *  Logic: '<S489>/Logical'
     *  Logic: '<S491>/Logical'
     *  Logic: '<S545>/NOT'
     */
    rtb_AND_ck = ((!rtb_Logical1_d0) && (!rtb_AND_liv));

    /* End of Outputs for SubSystem: '<S491>/Signal Latch On With Reset' */

    /* Logic: '<S503>/OR1' incorporates:
     *  Logic: '<S489>/Logical'
     *  Logic: '<S503>/NOT'
     *  Logic: '<S503>/OR'
     *  UnitDelay: '<S503>/Unit Delay'
     */
    VeSCPR_b_DNR_SchCHdisbldHold = ((VeSCPR_b_CH_DNRCancel) || (rtb_AND_ck &&
        (SCPR_ac_DW.UnitDelay_DSTATE_b5)));

    /* Update for UnitDelay: '<S503>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_b5 = VeSCPR_b_DNR_SchCHdisbldHold;

    /* End of Outputs for SubSystem: '<S489>/Signal Latch On With Reset' */

    /* Logic: '<S214>/Logical7' incorporates:
     *  Logic: '<S214>/Logical8'
     *  UnitDelay: '<S214>/Unit Delay3'
     */
    VeSCPR_b_NoChScheduleSet = ((SCPR_ac_DW.UnitDelay3_DSTATE_h) &&
        (!VeSCPR_b_DNR_SchCHdisbldHold));

    /* Switch: '<S715>/Switch' incorporates:
     *  Constant: '<S712>/Calib'
     */
    if (KeSCPR_b_UseDateTmF1)
    {
        /* Switch: '<S715>/Switch' incorporates:
         *  Logic: '<S715>/Logical1'
         *  Logic: '<S715>/Logical4'
         */
        rtb_Logical4_d = ((VeSCPR_b_DateDay1_FA) || (!VeSCPR_b_DateDay1_SgnlRcvd));
    }
    else
    {
        /* Switch: '<S715>/Switch' incorporates:
         *  Logic: '<S715>/Logical2'
         *  Logic: '<S715>/Logical3'
         */
        rtb_Logical4_d = ((VeSCPR_b_DateTmDay_FA) ||
                          (!VeSCPR_b_DateTmDay_SgnlRcvd));
    }

    /* End of Switch: '<S715>/Switch' */

    /* Switch: '<S757>/Switch' incorporates:
     *  Logic: '<S757>/Logical5'
     */
    if (!rtb_Logical4_d)
    {
        /* Switch: '<S757>/Switch' */
        rtb_Sum2 = VeSCPR_k_SpareSecCnt;
    }
    else
    {
        /* Switch: '<S757>/Switch' incorporates:
         *  UnitDelay: '<S757>/Unit Delay2'
         */
        rtb_Sum2 = SCPR_ac_DW.UnitDelay2_DSTATE;
    }

    /* End of Switch: '<S757>/Switch' */

    /* Outputs for Atomic SubSystem: '<S715>/EdgeRising' */
    /* Logic: '<S753>/OR1' incorporates:
     *  UnitDelay: '<S753>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_gi;

    /* Update for UnitDelay: '<S753>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gi = rtb_Logical4_d;

    /* End of Outputs for SubSystem: '<S715>/EdgeRising' */

    /* If: '<S716>/If' incorporates:
     *  Constant: '<S712>/Calib'
     */
    if (KeSCPR_b_UseDateTmF1)
    {
        /* Outputs for IfAction SubSystem: '<S716>/DateTm_F1' incorporates:
         *  ActionPort: '<S789>/Action Port'
         */
        /* Merge: '<S716>/Merge' incorporates:
         *  Constant: '<S789>/Constant Value'
         *  Constant: '<S789>/Constant Value1'
         *  Constant: '<S789>/Constant Value2'
         *  Product: '<S789>/Product'
         *  Product: '<S789>/Product1'
         *  Product: '<S789>/Product2'
         *  Sum: '<S789>/Sum'
         */
        VeSCPR_K_SysTimeProcYear = (((VeSCPR_K_Date_Year1 * 1000.0F) +
            (VeSCPR_K_Date_Year2 * 100.0F)) + (VeSCPR_K_Date_Year3 * 10.0F)) +
            VeSCPR_K_Date_Year4;

        /* Merge: '<S716>/Merge1' incorporates:
         *  Constant: '<S789>/Constant Value3'
         *  Product: '<S789>/Product3'
         *  Sum: '<S789>/Sum1'
         */
        VeSCPR_K_SysTimeProcMonth = (VeSCPR_K_Date_Month1 * 10.0F) +
            VeSCPR_K_Date_Month2;

        /* Merge: '<S716>/Merge2' incorporates:
         *  Constant: '<S789>/Constant Value4'
         *  Product: '<S789>/Product4'
         *  Sum: '<S789>/Sum2'
         */
        VeSCPR_K_SysTimeProcDate = (VeSCPR_K_Date_Day1 * 10.0F) +
            VeSCPR_K_Date_Day2;

        /* Merge: '<S716>/Merge3' incorporates:
         *  Constant: '<S789>/Constant Value5'
         *  Product: '<S789>/Product5'
         *  Sum: '<S789>/Sum3'
         */
        VeSCPR_K_SysTimeProcHour = (VeSCPR_K_Time_Hour1 * 10.0F) +
            VeSCPR_K_Time_Hour2;

        /* Merge: '<S716>/Merge4' incorporates:
         *  Constant: '<S789>/Constant Value6'
         *  Product: '<S789>/Product6'
         *  Sum: '<S789>/Sum4'
         */
        VeSCPR_K_SysTimeProcMin = (VeSCPR_K_Time_Minute1 * 10.0F) +
            VeSCPR_K_Time_Minute2;

        /* End of Outputs for SubSystem: '<S716>/DateTm_F1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S716>/DateTm_F2' incorporates:
         *  ActionPort: '<S790>/Action Port'
         */
        /* Merge: '<S716>/Merge' incorporates:
         *  Inport: '<S790>/DateTmYear_In'
         */
        VeSCPR_K_SysTimeProcYear = VeSCPR_K_DateTmYear;

        /* Merge: '<S716>/Merge1' incorporates:
         *  Inport: '<S790>/DateTmMon_In'
         */
        VeSCPR_K_SysTimeProcMonth = VeSCPR_K_DateTmMon;

        /* Merge: '<S716>/Merge2' incorporates:
         *  Inport: '<S790>/DateTmDay_In'
         */
        VeSCPR_K_SysTimeProcDate = VeSCPR_K_DateTmDay;

        /* Merge: '<S716>/Merge3' incorporates:
         *  Inport: '<S790>/DateTmHour_In'
         */
        VeSCPR_K_SysTimeProcHour = VeSCPR_K_DateTmHour;

        /* Merge: '<S716>/Merge4' incorporates:
         *  Inport: '<S790>/DateTmMin_In'
         */
        VeSCPR_K_SysTimeProcMin = VeSCPR_K_DateTmMin;

        /* End of Outputs for SubSystem: '<S716>/DateTm_F2' */
    }

    /* End of If: '<S716>/If' */

    /* If: '<S715>/If' */
    if (rtb_Logical4_d)
    {
        /* Outputs for IfAction SubSystem: '<S715>/SysTime_HCP' incorporates:
         *  ActionPort: '<S759>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S759>/SecCounter' */
        /* Outputs for Atomic SubSystem: '<S715>/EdgeRising' */
        /* Switch: '<S781>/Switch1' incorporates:
         *  Logic: '<S753>/AND'
         */
        if (rtb_AND_dp)
        {
            /* Switch: '<S781>/Switch1' incorporates:
             *  Constant: '<S781>/Constant Value2'
             */
            rtb_Switch1_ls = 0.0F;
        }
        else
        {
            /* Switch: '<S781>/Switch1' incorporates:
             *  Constant: '<S781>/Constant Value1'
             *  Sum: '<S781>/Subtraction'
             *  UnitDelay: '<S781>/Unit Delay'
             */
            rtb_Switch1_ls = SCPR_ac_DW.UnitDelay_DSTATE_c + 1.0F;
        }

        /* End of Switch: '<S781>/Switch1' */
        /* End of Outputs for SubSystem: '<S715>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S781>/Protected Division' */
        /* Switch: '<S786>/Switch1' incorporates:
         *  Constant: '<S786>/Constant Value'
         *  RelationalOperator: '<S786>/Not Equal'
         */
        if (rtb_Switch1_ls != 0.0F)
        {
            /* Switch: '<S786>/Switch1' incorporates:
             *  Constant: '<S781>/Constant Value3'
             *  Product: '<S786>/Division'
             */
            rtb_Switch1_ky = rtb_Switch1_ls / 10.0F;
        }
        else
        {
            /* Switch: '<S786>/Switch1' incorporates:
             *  Constant: '<S786>/Constant Value4'
             *  Switch: '<S786>/Switch2'
             *  Switch: '<S786>/Switch3'
             */
            rtb_Switch1_ky = 0.0F;
        }

        /* End of Switch: '<S786>/Switch1' */
        /* End of Outputs for SubSystem: '<S781>/Protected Division' */

        /* Update for UnitDelay: '<S781>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_ls;

        /* Sum: '<S759>/Sum3' incorporates:
         *  Rounding: '<S781>/Rounding2'
         */
        rtb_Switch1_ls = rtb_Sum2 + floorf(rtb_Switch1_ky);

        /* End of Outputs for SubSystem: '<S759>/SecCounter' */

        /* Outputs for Atomic SubSystem: '<S777>/Protected Division' */
        /* Switch: '<S783>/Switch1' incorporates:
         *  Constant: '<S783>/Constant Value'
         *  RelationalOperator: '<S783>/Not Equal'
         */
        if (rtb_Switch1_ls != 0.0F)
        {
            /* Switch: '<S783>/Switch1' incorporates:
             *  Constant: '<S759>/Constant Value'
             *  Product: '<S783>/Division'
             */
            rtb_Switch1_ls /= 60.0F;
        }
        else
        {
            /* Switch: '<S783>/Switch1' incorporates:
             *  Constant: '<S783>/Constant Value4'
             *  Switch: '<S783>/Switch2'
             *  Switch: '<S783>/Switch3'
             */
            rtb_Switch1_ls = 0.0F;
        }

        /* End of Switch: '<S783>/Switch1' */
        /* End of Outputs for SubSystem: '<S777>/Protected Division' */

        /* Sum: '<S759>/Sum' incorporates:
         *  Rounding: '<S777>/Rounding'
         */
        rtb_Switch1_ls = VeSCPR_K_SysTimeProcMin + floorf(rtb_Switch1_ls);

        /* Outputs for Atomic SubSystem: '<S778>/Protected Division' */
        /* Switch: '<S784>/Switch1' incorporates:
         *  Constant: '<S784>/Constant Value'
         *  RelationalOperator: '<S784>/Not Equal'
         */
        if (rtb_Switch1_ls != 0.0F)
        {
            /* Switch: '<S784>/Switch1' incorporates:
             *  Constant: '<S759>/Constant Value'
             *  Product: '<S784>/Division'
             */
            rtb_Switch1_ky = rtb_Switch1_ls / 60.0F;
        }
        else
        {
            /* Switch: '<S784>/Switch1' incorporates:
             *  Constant: '<S784>/Constant Value4'
             *  Switch: '<S784>/Switch2'
             *  Switch: '<S784>/Switch3'
             */
            rtb_Switch1_ky = 0.0F;
        }

        /* End of Switch: '<S784>/Switch1' */
        /* End of Outputs for SubSystem: '<S778>/Protected Division' */

        /* Rounding: '<S778>/Rounding' */
        rtb_Switch1_ky = floorf(rtb_Switch1_ky);

        /* Sum: '<S759>/Sum1' */
        rtb_Sum1_a = VeSCPR_K_SysTimeProcHour + rtb_Switch1_ky;

        /* Outputs for Atomic SubSystem: '<S779>/Protected Division' */
        /* Switch: '<S785>/Switch1' incorporates:
         *  Constant: '<S785>/Constant Value'
         *  RelationalOperator: '<S785>/Not Equal'
         */
        if (rtb_Sum1_a != 0.0F)
        {
            /* Switch: '<S785>/Switch1' incorporates:
             *  Constant: '<S759>/Constant Value1'
             *  Product: '<S785>/Division'
             */
            rtb_Switch1_no = rtb_Sum1_a / 24.0F;
        }
        else
        {
            /* Switch: '<S785>/Switch1' incorporates:
             *  Constant: '<S785>/Constant Value4'
             *  Switch: '<S785>/Switch2'
             *  Switch: '<S785>/Switch3'
             */
            rtb_Switch1_no = 0.0F;
        }

        /* End of Switch: '<S785>/Switch1' */
        /* End of Outputs for SubSystem: '<S779>/Protected Division' */

        /* Rounding: '<S779>/Rounding' */
        rtb_Switch1_no = floorf(rtb_Switch1_no);

        /* Sum: '<S776>/Sum1' */
        rtb_Sum1_nz = rtb_Switch1_no + VeSCPR_K_SysTimeProcDate;

        /* Chart: '<S782>/Leap_Year' */
        SCPR_ac_LeapYrChk(VeSCPR_K_SysTimeProcYear, &SCPR_ac_B.sf_Leap_Year);

        /* Chart: '<S782>/Days_PerMonth' */
        /* Gateway: SCPR_FUNC_MedTEH/SCPC/SysTimeKeeping/SysTimeKeep/SysTime_HCP/Year_Proc/Days_PerMonth */
        /* During: SCPR_FUNC_MedTEH/SCPC/SysTimeKeeping/SysTimeKeep/SysTime_HCP/Year_Proc/Days_PerMonth */
        /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/SysTimeKeeping/SysTimeKeep/SysTime_HCP/Year_Proc/Days_PerMonth */
        /* Transition: '<S787>:29' */
        rtb_days = 28.0F;
        if ((VeSCPR_K_SysTimeProcMonth == 2.0F) && (SCPR_ac_B.sf_Leap_Year.leap))
        {
            /* Transition: '<S787>:51' */
            /* Transition: '<S787>:53' */
            rtb_days = 29.0F;

            /* Transition: '<S787>:57' */
        }
        else
        {
            /* Transition: '<S787>:56' */
        }

        /* Transition: '<S787>:48' */
        if ((((VeSCPR_K_SysTimeProcMonth == 4.0F) || (VeSCPR_K_SysTimeProcMonth ==
               6.0F)) || (VeSCPR_K_SysTimeProcMonth == 9.0F)) ||
                (VeSCPR_K_SysTimeProcMonth == 11.0F))
        {
            /* Transition: '<S787>:59' */
            /* Transition: '<S787>:61' */
            rtb_days = 30.0F;

            /* Transition: '<S787>:63' */
        }
        else
        {
            /* Transition: '<S787>:64' */
        }

        /* Transition: '<S787>:66' */
        if (((((((VeSCPR_K_SysTimeProcMonth == 1.0F) ||
                 (VeSCPR_K_SysTimeProcMonth == 3.0F)) ||
                (VeSCPR_K_SysTimeProcMonth == 5.0F)) ||
                (VeSCPR_K_SysTimeProcMonth == 7.0F)) ||
                (VeSCPR_K_SysTimeProcMonth == 8.0F)) ||
                (VeSCPR_K_SysTimeProcMonth == 10.0F)) ||
                (VeSCPR_K_SysTimeProcMonth == 12.0F))
        {
            /* Transition: '<S787>:68' */
            /* Transition: '<S787>:70' */
            rtb_days = 31.0F;

            /* Transition: '<S787>:73' */
        }
        else
        {
            /* Transition: '<S787>:72' */
        }

        /* End of Chart: '<S782>/Days_PerMonth' */

        /* RelationalOperator: '<S780>/Comparison3' incorporates:
         *  RelationalOperator: '<S776>/Comparison3'
         */
        /* Transition: '<S787>:75' */
        rtb_AND_dp = (rtb_Sum1_nz <= rtb_days);

        /* Switch: '<S776>/Switch' */
        if (rtb_AND_dp)
        {
            /* Switch: '<S776>/Switch' */
            VeSCPR_K_IntTimeKeepDay = rtb_Sum1_nz;
        }
        else
        {
            /* Switch: '<S776>/Switch' incorporates:
             *  Sum: '<S776>/Sum2'
             */
            VeSCPR_K_IntTimeKeepDay = rtb_Sum1_nz - rtb_days;
        }

        /* End of Switch: '<S776>/Switch' */

        /* Merge: '<S715>/Merge1' incorporates:
         *  Constant: '<S759>/Constant Value'
         *  Product: '<S778>/Product'
         *  Sum: '<S778>/Sum1'
         */
        VeSCPR_K_SysTimeMin = rtb_Switch1_ls - (rtb_Switch1_ky * 60.0F);

        /* Merge: '<S715>/Merge2' incorporates:
         *  Constant: '<S759>/Constant Value1'
         *  Product: '<S779>/Product'
         *  Sum: '<S779>/Sum1'
         */
        VeSCPR_K_SysTimeHr = rtb_Sum1_a - (rtb_Switch1_no * 24.0F);

        /* Sum: '<S780>/Sum1' incorporates:
         *  Switch: '<S776>/Switch1'
         */
        rtb_Switch1_ls = ((float32)((!rtb_AND_dp) ? 1 : 0)) +
            VeSCPR_K_SysTimeProcMonth;

        /* RelationalOperator: '<S780>/Comparison3' incorporates:
         *  Constant: '<S780>/Constant Value3'
         */
        rtb_AND_dp = (rtb_Switch1_ls <= 12.0F);

        /* Switch: '<S780>/Switch' */
        if (rtb_AND_dp)
        {
            /* Switch: '<S780>/Switch' */
            VeSCPR_K_IntTimeKeepMonth = rtb_Switch1_ls;
        }
        else
        {
            /* Switch: '<S780>/Switch' incorporates:
             *  Constant: '<S780>/Constant Value3'
             *  Sum: '<S780>/Sum2'
             */
            VeSCPR_K_IntTimeKeepMonth = rtb_Switch1_ls - 12.0F;
        }

        /* End of Switch: '<S780>/Switch' */

        /* Merge: '<S715>/Merge3' incorporates:
         *  SignalConversion: '<S759>/Signal Conversion'
         */
        VeSCPR_K_SysTimeDay = VeSCPR_K_IntTimeKeepDay;

        /* Merge: '<S715>/Merge4' incorporates:
         *  SignalConversion: '<S759>/Signal Conversion1'
         */
        VeSCPR_K_SysTimeMon = VeSCPR_K_IntTimeKeepMonth;

        /* Merge: '<S715>/Merge5' incorporates:
         *  Sum: '<S759>/Sum2'
         *  Switch: '<S780>/Switch1'
         */
        VeSCPR_K_SysTimeYr = VeSCPR_K_SysTimeProcYear + ((float32)((!rtb_AND_dp)
            ? 1 : 0));

        /* End of Outputs for SubSystem: '<S715>/SysTime_HCP' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S715>/SysTime_PassThru' incorporates:
         *  ActionPort: '<S760>/Action Port'
         */
        /* Merge: '<S715>/Merge1' incorporates:
         *  Inport: '<S760>/VehMin'
         */
        VeSCPR_K_SysTimeMin = VeSCPR_K_SysTimeProcMin;

        /* Merge: '<S715>/Merge2' incorporates:
         *  Inport: '<S760>/VehHr'
         */
        VeSCPR_K_SysTimeHr = VeSCPR_K_SysTimeProcHour;

        /* Merge: '<S715>/Merge3' incorporates:
         *  Inport: '<S760>/VehDate'
         */
        VeSCPR_K_SysTimeDay = VeSCPR_K_SysTimeProcDate;

        /* Merge: '<S715>/Merge4' incorporates:
         *  Inport: '<S760>/VehMonth'
         */
        VeSCPR_K_SysTimeMon = VeSCPR_K_SysTimeProcMonth;

        /* Merge: '<S715>/Merge5' incorporates:
         *  Inport: '<S760>/VehYear'
         */
        VeSCPR_K_SysTimeYr = VeSCPR_K_SysTimeProcYear;

        /* End of Outputs for SubSystem: '<S715>/SysTime_PassThru' */
    }

    /* End of If: '<S715>/If' */

    /* Outputs for Atomic SubSystem: '<S718>/Protected Division' */
    /* Switch: '<S730>/Switch1' incorporates:
     *  Constant: '<S730>/Constant Value'
     *  Constant: '<S730>/Constant Value2'
     *  Constant: '<S730>/Constant Value3'
     *  RelationalOperator: '<S730>/Greater Than or Equal '
     *  RelationalOperator: '<S730>/Greater Than or Equal 1'
     *  RelationalOperator: '<S730>/Not Equal'
     *  Switch: '<S730>/Switch2'
     *  Switch: '<S730>/Switch3'
     */
    if (VeSCPR_K_SysTimeYr != 0.0F)
    {
        /* Switch: '<S730>/Switch1' incorporates:
         *  Constant: '<S718>/Constant Value'
         *  Product: '<S730>/Division'
         */
        rtb_Switch1_ls = VeSCPR_K_SysTimeYr / 100.0F;
    }
    else if (VeSCPR_K_SysTimeYr > 0.0F)
    {
        /* Switch: '<S730>/Switch2' incorporates:
         *  Constant: '<S730>/MAXFLOAT'
         *  Switch: '<S730>/Switch1'
         */
        rtb_Switch1_ls = 3.402823466E+38F;
    }
    else if (VeSCPR_K_SysTimeYr < 0.0F)
    {
        /* Switch: '<S730>/Switch3' incorporates:
         *  Constant: '<S730>/MINFLOAT'
         *  Switch: '<S730>/Switch1'
         *  Switch: '<S730>/Switch2'
         */
        rtb_Switch1_ls = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S730>/Switch1' incorporates:
         *  Constant: '<S730>/Constant Value4'
         *  Switch: '<S730>/Switch2'
         *  Switch: '<S730>/Switch3'
         */
        rtb_Switch1_ls = 0.0F;
    }

    /* End of Switch: '<S730>/Switch1' */
    /* End of Outputs for SubSystem: '<S718>/Protected Division' */

    /* Rounding: '<S718>/Rounding1' */
    VeSCPR_K_DayOfWeek_Cent = floorf(rtb_Switch1_ls);

    /* Outputs for Atomic SubSystem: '<S729>/Protected Division' */
    /* Switch: '<S731>/Switch1' incorporates:
     *  Constant: '<S731>/Constant Value'
     *  Constant: '<S731>/Constant Value2'
     *  Constant: '<S731>/Constant Value3'
     *  RelationalOperator: '<S731>/Greater Than or Equal '
     *  RelationalOperator: '<S731>/Greater Than or Equal 1'
     *  RelationalOperator: '<S731>/Not Equal'
     *  Switch: '<S731>/Switch2'
     *  Switch: '<S731>/Switch3'
     */
    if (VeSCPR_K_SysTimeYr != 0.0F)
    {
        /* Switch: '<S731>/Switch1' incorporates:
         *  Constant: '<S718>/Constant Value3'
         *  Product: '<S731>/Division'
         */
        rtb_Switch1_ls = VeSCPR_K_SysTimeYr / 100.0F;
    }
    else if (VeSCPR_K_SysTimeYr > 0.0F)
    {
        /* Switch: '<S731>/Switch2' incorporates:
         *  Constant: '<S731>/MAXFLOAT'
         *  Switch: '<S731>/Switch1'
         */
        rtb_Switch1_ls = 3.402823466E+38F;
    }
    else if (VeSCPR_K_SysTimeYr < 0.0F)
    {
        /* Switch: '<S731>/Switch3' incorporates:
         *  Constant: '<S731>/MINFLOAT'
         *  Switch: '<S731>/Switch1'
         *  Switch: '<S731>/Switch2'
         */
        rtb_Switch1_ls = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S731>/Switch1' incorporates:
         *  Constant: '<S731>/Constant Value4'
         *  Switch: '<S731>/Switch2'
         *  Switch: '<S731>/Switch3'
         */
        rtb_Switch1_ls = 0.0F;
    }

    /* End of Switch: '<S731>/Switch1' */
    /* End of Outputs for SubSystem: '<S729>/Protected Division' */

    /* Rounding: '<S729>/Rounding1' incorporates:
     *  Constant: '<S718>/Constant Value3'
     *  Product: '<S729>/Product'
     *  Rounding: '<S729>/Rounding'
     *  Sum: '<S729>/Sum1'
     */
    rtb_Switch1_ls = roundf((rtb_Switch1_ls - floorf(rtb_Switch1_ls)) * 100.0F);

    /* Outputs for Atomic SubSystem: '<S717>/Protected Division1' */
    /* Switch: '<S723>/Switch1' incorporates:
     *  Constant: '<S723>/Constant Value'
     *  RelationalOperator: '<S723>/Not Equal'
     */
    if (rtb_Switch1_ls != 0.0F)
    {
        /* Switch: '<S723>/Switch1' incorporates:
         *  Constant: '<S717>/Constant Value1'
         *  Product: '<S723>/Division'
         */
        rtb_Switch1_ky = rtb_Switch1_ls / 4.0F;
    }
    else
    {
        /* Switch: '<S723>/Switch1' incorporates:
         *  Constant: '<S723>/Constant Value4'
         *  Switch: '<S723>/Switch2'
         *  Switch: '<S723>/Switch3'
         */
        rtb_Switch1_ky = 0.0F;
    }

    /* End of Switch: '<S723>/Switch1' */
    /* End of Outputs for SubSystem: '<S717>/Protected Division1' */

    /* Chart: '<S718>/LeapYrChk' */
    SCPR_ac_LeapYrChk(VeSCPR_K_SysTimeYr, &SCPR_ac_B.sf_LeapYrChk);

    /* If: '<S717>/If' */
    if (SCPR_ac_B.sf_LeapYrChk.leap)
    {
        /* Outputs for IfAction SubSystem: '<S717>/If Action Subsystem' incorporates:
         *  ActionPort: '<S720>/Action Port'
         */
        /* Merge: '<S717>/Merge1' incorporates:
         *  Constant: '<S724>/Calib'
         *  Selector: '<S720>/Selector'
         */
        VeSCPR_K_DayOfWeek_MonFact = KaSCPR_k_MonthIfLeapYearFactor[(sint32)
            VeSCPR_K_SysTimeMon];

        /* End of Outputs for SubSystem: '<S717>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S717>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S721>/Action Port'
         */
        /* Merge: '<S717>/Merge1' incorporates:
         *  Constant: '<S725>/Calib'
         *  Selector: '<S721>/Selector'
         */
        VeSCPR_K_DayOfWeek_MonFact = KaSCPR_k_MonthIfNotLeapYear[(sint32)
            VeSCPR_K_SysTimeMon];

        /* End of Outputs for SubSystem: '<S717>/If Action Subsystem2' */
    }

    /* End of If: '<S717>/If' */

    /* Sum: '<S717>/Sum' incorporates:
     *  Constant: '<S727>/Calib'
     *  Rounding: '<S717>/Rounding2'
     *  Selector: '<S718>/Selector'
     */
    rtb_Switch1_ls = (((KaSCPR_k_CenturyConvFactor[(sint32)
                        VeSCPR_K_DayOfWeek_Cent] + rtb_Switch1_ls) + floorf
                       (rtb_Switch1_ky)) + VeSCPR_K_DayOfWeek_MonFact) +
        VeSCPR_K_SysTimeDay;

    /* Outputs for Atomic SubSystem: '<S722>/Protected Division' */
    /* Switch: '<S726>/Switch1' incorporates:
     *  Constant: '<S726>/Constant Value'
     *  RelationalOperator: '<S726>/Not Equal'
     */
    if (rtb_Switch1_ls != 0.0F)
    {
        /* Switch: '<S726>/Switch1' incorporates:
         *  Constant: '<S717>/Constant Value4'
         *  Product: '<S726>/Division'
         */
        rtb_Switch1_ls /= 7.0F;
    }
    else
    {
        /* Switch: '<S726>/Switch1' incorporates:
         *  Constant: '<S726>/Constant Value4'
         *  Switch: '<S726>/Switch2'
         *  Switch: '<S726>/Switch3'
         */
        rtb_Switch1_ls = 0.0F;
    }

    /* End of Switch: '<S726>/Switch1' */
    /* End of Outputs for SubSystem: '<S722>/Protected Division' */

    /* DataTypeConversion: '<S717>/FloatToFix' incorporates:
     *  Constant: '<S717>/Constant Value4'
     *  Product: '<S722>/Product'
     *  Rounding: '<S722>/Rounding'
     *  Rounding: '<S722>/Rounding1'
     *  Sum: '<S722>/Sum1'
     */
    rtb_Sum1_nz = fmodf(roundf((rtb_Switch1_ls - floorf(rtb_Switch1_ls)) * 7.0F),
                        65536.0F);

    /* DataTypeConversion: '<S717>/FloatToFix' */
    VeSCPR_k_DayOfWeek_num = (sint16)((rtb_Sum1_nz < 0.0F) ? ((sint32)((sint16)(
        -((sint16)((uint16)((float32)(-rtb_Sum1_nz))))))) : ((sint32)((sint16)
        ((uint16)rtb_Sum1_nz))));

    /* DataTypeConversion: '<S713>/FloatToFix' incorporates:
     *  Constant: '<S713>/Constant Value'
     *  Constant: '<S713>/Constant Value1'
     *  Product: '<S713>/Product'
     *  Product: '<S713>/Product1'
     *  Sum: '<S713>/Sum'
     */
    rtb_Sum1_nz = fmodf(floorf(((VeSCPR_K_SysTimeHr * 60.0F) +
                          VeSCPR_K_SysTimeMin) + (((float32)
                           VeSCPR_k_DayOfWeek_num) * 1440.0F)), 65536.0F);

    /* DataTypeConversion: '<S713>/FloatToFix' */
    VeSCPR_K_NowIndex_Min = (sint16)((rtb_Sum1_nz < 0.0F) ? ((sint32)((sint16)
        (-((sint16)((uint16)((float32)(-rtb_Sum1_nz))))))) : ((sint32)((sint16)
        ((uint16)rtb_Sum1_nz))));

    /* SwitchCase: '<S714>/SwitchCase' incorporates:
     *  Constant: '<S714>/Constant'
     *  Constant: '<S714>/Constant1'
     *  Constant: '<S714>/Constant2'
     *  Constant: '<S750>/Calib'
     */
    switch (KeSCPR_K_TimeScheduleSelection)
    {
      case 5:
        /* Outputs for IfAction SubSystem: '<S714>/FiveMins' incorporates:
         *  ActionPort: '<S749>/Action Port'
         */
        SCPR_ac_FiveMins(5, (&(VeSCPR_K_ArrElementTimeIncSize)));

        /* End of Outputs for SubSystem: '<S714>/FiveMins' */
        break;

      case 10:
        /* Outputs for IfAction SubSystem: '<S714>/TenMins' incorporates:
         *  ActionPort: '<S752>/Action Port'
         */
        SCPR_ac_FiveMins(10, (&(VeSCPR_K_ArrElementTimeIncSize)));

        /* End of Outputs for SubSystem: '<S714>/TenMins' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S714>/FifteenMins' incorporates:
         *  ActionPort: '<S748>/Action Port'
         */
        SCPR_ac_FiveMins(15, (&(VeSCPR_K_ArrElementTimeIncSize)));

        /* End of Outputs for SubSystem: '<S714>/FifteenMins' */
        break;
    }

    /* End of SwitchCase: '<S714>/SwitchCase' */

    /* Constant: '<S741>/Calib' */
    VeSCPR_k_NumOfMinPerDay = KeSCPR_k_NumOfMinPerDay;

    /* Outputs for Atomic SubSystem: '<S340>/EdgeFalling6' */
    /* Logic: '<S689>/Logical2' incorporates:
     *  Logic: '<S214>/Logical2'
     *  Logic: '<S349>/OR1'
     */
    rtb_RelatonalOperator2_idx_2 = !SCPR_ac_B.DataStoreRead5_d;

    /* End of Outputs for SubSystem: '<S340>/EdgeFalling6' */

    /* Switch: '<S689>/Switch' incorporates:
     *  Constant: '<S689>/Constant Value1'
     *  Constant: '<S689>/Constant Value16'
     *  Logic: '<S689>/Logical1'
     *  Logic: '<S689>/Logical2'
     *  RelationalOperator: '<S689>/Comparison7'
     *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator7'
     *  Switch: '<S689>/Switch1'
     */
    if (rtb_RelatonalOperator2_idx_2 || ((((sint32)SCPR_ac_B.DataStoreRead4_h) &
          128) > 0))
    {
        /* Switch: '<S689>/Switch' */
        for (i = 0; i < 7; i++)
        {
            SCPR_ac_B.Switch_d[i] = false;
        }
    }
    else if (SCPR_ac_B.DataStoreRead27_d)
    {
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S689>/Switch' incorporates:
             *  Switch: '<S689>/Switch1'
             */
            SCPR_ac_B.Switch_d[i] = false;
        }
    }
    else
    {
        /* Switch: '<S689>/Switch' incorporates:
         *  Constant: '<S689>/Constant Value'
         *  Constant: '<S689>/Constant Value10'
         *  Constant: '<S689>/Constant Value11'
         *  Constant: '<S689>/Constant Value12'
         *  Constant: '<S689>/Constant Value13'
         *  Constant: '<S689>/Constant Value14'
         *  Constant: '<S689>/Constant Value15'
         *  Constant: '<S689>/Constant Value2'
         *  Constant: '<S689>/Constant Value3'
         *  Constant: '<S689>/Constant Value4'
         *  Constant: '<S689>/Constant Value5'
         *  Constant: '<S689>/Constant Value6'
         *  Constant: '<S689>/Constant Value7'
         *  Constant: '<S689>/Constant Value8'
         *  RelationalOperator: '<S689>/Comparison'
         *  RelationalOperator: '<S689>/Comparison1'
         *  RelationalOperator: '<S689>/Comparison2'
         *  RelationalOperator: '<S689>/Comparison3'
         *  RelationalOperator: '<S689>/Comparison4'
         *  RelationalOperator: '<S689>/Comparison5'
         *  RelationalOperator: '<S689>/Comparison6'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator4'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S689>/Bitwise Logical Operator6'
         *  Switch: '<S689>/Switch1'
         */
        SCPR_ac_B.Switch_d[0] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 64) > 0);
        SCPR_ac_B.Switch_d[1] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 1) > 0);
        SCPR_ac_B.Switch_d[2] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 2) > 0);
        SCPR_ac_B.Switch_d[3] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 4) > 0);
        SCPR_ac_B.Switch_d[4] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 8) > 0);
        SCPR_ac_B.Switch_d[5] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 16) > 0);
        SCPR_ac_B.Switch_d[6] = ((((sint32)SCPR_ac_B.DataStoreRead4_h) & 32) > 0);
    }

    /* End of Switch: '<S689>/Switch' */

    /* Outputs for Atomic SubSystem: '<S687>/EdgeRising1' */
    /* Logic: '<S694>/AND' incorporates:
     *  Logic: '<S694>/OR1'
     *  UnitDelay: '<S694>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_dea;

    /* Update for UnitDelay: '<S694>/Unit Delay' incorporates:
     *  Constant: '<S687>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_dea = true;

    /* End of Outputs for SubSystem: '<S687>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S687>/EdgeRising' */
    /* Logic: '<S693>/AND' incorporates:
     *  Logic: '<S693>/OR1'
     *  UnitDelay: '<S693>/Unit Delay'
     */
    rtb_AND_fl = (rtb_Logical1_d0 && (!SCPR_ac_DW.UnitDelay_DSTATE_bw));

    /* Update for UnitDelay: '<S693>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_bw = rtb_Logical1_d0;

    /* End of Outputs for SubSystem: '<S687>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S687>/Count Down  Reset Enabled' */
    /* Switch: '<S692>/Switch1' incorporates:
     *  Constant: '<S692>/Constant Value'
     *  Logic: '<S687>/AND'
     *  RelationalOperator: '<S692>/Greater  Than'
     *  Switch: '<S692>/Switch2'
     *  UnitDelay: '<S692>/Unit Delay'
     */
    if (rtb_AND_dp || rtb_AND_fl)
    {
        /* Switch: '<S692>/Switch1' incorporates:
         *  Constant: '<S695>/Calib'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SchArrayEnblTime;
    }
    else if (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_ny) > 0)
    {
        /* Switch: '<S692>/Switch2' incorporates:
         *  Constant: '<S692>/Constant Value1'
         *  Sum: '<S692>/Subtraction'
         *  Switch: '<S692>/Switch1'
         *  UnitDelay: '<S692>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_ny) - 1));
    }
    else
    {
        /* Switch: '<S692>/Switch1' incorporates:
         *  Switch: '<S692>/Switch2'
         *  UnitDelay: '<S692>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_ny;
    }

    /* End of Switch: '<S692>/Switch1' */

    /* RelationalOperator: '<S692>/Greater  Than1' incorporates:
     *  Constant: '<S692>/Constant Value2'
     */
    SCPR_ac_B.GreaterThan1_d = (((sint32)rtb_Switch1_al) > 0);

    /* Update for UnitDelay: '<S692>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ny = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S687>/Count Down  Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S660>/Chrg_Sch_Array' */
    SCPR_ac_Chrg_Sch_Array(SCPR_ac_B.GreaterThan1_d, SCPR_ac_B.DataStoreRead_p,
                           SCPR_ac_B.DataStoreRead1_m,
                           SCPR_ac_B.DataStoreRead2_a,
                           SCPR_ac_B.DataStoreRead3_f,
                           VeSCPR_K_ArrElementTimeIncSize,
                           SCPR_ac_B.DataStoreRead6_a, VeSCPR_k_DayOfWeek_num,
                           VeSCPR_k_NumOfMinPerDay, SCPR_ac_B.DataStoreRead27_d,
                           VeSCPR_K_NowIndex_Min, SCPR_ac_B.Switch_d,
                           &SCPR_ac_B.Chrg_Sch_Array);

    /* End of Outputs for SubSystem: '<S660>/Chrg_Sch_Array' */

    /* Constant: '<S742>/Calib' */
    VeSCPR_k_NumOfMinPerWeek = KeSCPR_k_NumOfMinPerWeek;

    /* Chart: '<S660>/NowInSchedule' */
    SCPR_ac_NowInSchedule(VeSCPR_K_NowIndex_Min,
                          SCPR_ac_B.Chrg_Sch_Array.x_schStart,
                          SCPR_ac_B.Chrg_Sch_Array.x_schEnd,
                          VeSCPR_k_NumOfMinPerWeek, &SCPR_ac_B.sf_NowInSchedule);

    /* Outputs for Atomic SubSystem: '<S688>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S696>/EdgeRising' */
    /* Logic: '<S697>/AND' incorporates:
     *  Logic: '<S697>/OR1'
     *  UnitDelay: '<S697>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_bt;

    /* Update for UnitDelay: '<S697>/Unit Delay' incorporates:
     *  Constant: '<S688>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_bt = true;

    /* End of Outputs for SubSystem: '<S696>/EdgeRising' */

    /* Switch: '<S696>/Switch1' incorporates:
     *  Constant: '<S659>/Calib'
     *  Constant: '<S696>/Constant Value'
     *  Logic: '<S696>/OR'
     *  MinMax: '<S696>/Minimum'
     *  Sum: '<S696>/Summation'
     *  UnitDelay: '<S696>/Unit Delay'
     */
    if (rtb_AND_dp)
    {
        /* Switch: '<S696>/Switch1' incorporates:
         *  Constant: '<S696>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_WUDelayTime < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_a) + 1U)))
    {
        /* MinMax: '<S696>/Minimum' incorporates:
         *  Constant: '<S659>/Calib'
         *  Switch: '<S696>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_WUDelayTime;
    }
    else
    {
        /* Switch: '<S696>/Switch1' incorporates:
         *  Constant: '<S696>/Constant Value'
         *  MinMax: '<S696>/Minimum'
         *  Sum: '<S696>/Summation'
         *  UnitDelay: '<S696>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_a) + 1U);
    }

    /* End of Switch: '<S696>/Switch1' */

    /* Update for UnitDelay: '<S696>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_a = rtb_Switch1_al;

    /* Logic: '<S688>/Logical1' incorporates:
     *  Constant: '<S659>/Calib'
     *  RelationalOperator: '<S696>/Greater  Than'
     */
    rtb_Logical1_oz = ((SCPR_ac_B.DataStoreRead5_d) && (rtb_Switch1_al >=
                        KeSCPR_Cnt_WUDelayTime));

    /* End of Outputs for SubSystem: '<S688>/Turn On Delay Sample' */

    /* Switch: '<S688>/Switch4' */
    rtb_Switch4_m = (rtb_Logical1_oz && (SCPR_ac_B.sf_NowInSchedule.Sch_InWindow));

    /* Outputs for Atomic SubSystem: '<S340>/EdgeFalling5' */
    /* Logic: '<S702>/Logical2' incorporates:
     *  Logic: '<S214>/Logical2'
     *  Logic: '<S348>/OR1'
     */
    tmp = !SCPR_ac_B.DataStoreRead12_g;

    /* End of Outputs for SubSystem: '<S340>/EdgeFalling5' */

    /* Switch: '<S702>/Switch' incorporates:
     *  Constant: '<S702>/Constant Value1'
     *  Constant: '<S702>/Constant Value16'
     *  Logic: '<S702>/Logical1'
     *  Logic: '<S702>/Logical2'
     *  RelationalOperator: '<S702>/Comparison7'
     *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator7'
     *  Switch: '<S702>/Switch1'
     */
    if (tmp || ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 128) > 0))
    {
        /* Switch: '<S702>/Switch' */
        for (i = 0; i < 7; i++)
        {
            SCPR_ac_B.Switch_dd[i] = false;
        }
    }
    else if (SCPR_ac_B.DataStoreRead29)
    {
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S702>/Switch' incorporates:
             *  Switch: '<S702>/Switch1'
             */
            SCPR_ac_B.Switch_dd[i] = false;
        }
    }
    else
    {
        /* Switch: '<S702>/Switch' incorporates:
         *  Constant: '<S702>/Constant Value'
         *  Constant: '<S702>/Constant Value10'
         *  Constant: '<S702>/Constant Value11'
         *  Constant: '<S702>/Constant Value12'
         *  Constant: '<S702>/Constant Value13'
         *  Constant: '<S702>/Constant Value14'
         *  Constant: '<S702>/Constant Value15'
         *  Constant: '<S702>/Constant Value2'
         *  Constant: '<S702>/Constant Value3'
         *  Constant: '<S702>/Constant Value4'
         *  Constant: '<S702>/Constant Value5'
         *  Constant: '<S702>/Constant Value6'
         *  Constant: '<S702>/Constant Value7'
         *  Constant: '<S702>/Constant Value8'
         *  RelationalOperator: '<S702>/Comparison'
         *  RelationalOperator: '<S702>/Comparison1'
         *  RelationalOperator: '<S702>/Comparison2'
         *  RelationalOperator: '<S702>/Comparison3'
         *  RelationalOperator: '<S702>/Comparison4'
         *  RelationalOperator: '<S702>/Comparison5'
         *  RelationalOperator: '<S702>/Comparison6'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator4'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S702>/Bitwise Logical Operator6'
         *  Switch: '<S702>/Switch1'
         */
        SCPR_ac_B.Switch_dd[0] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 64) >
            0);
        SCPR_ac_B.Switch_dd[1] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 1) >
            0);
        SCPR_ac_B.Switch_dd[2] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 2) >
            0);
        SCPR_ac_B.Switch_dd[3] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 4) >
            0);
        SCPR_ac_B.Switch_dd[4] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 8) >
            0);
        SCPR_ac_B.Switch_dd[5] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 16) >
            0);
        SCPR_ac_B.Switch_dd[6] = ((((sint32)SCPR_ac_B.DataStoreRead11_m) & 32) >
            0);
    }

    /* End of Switch: '<S702>/Switch' */

    /* Outputs for Atomic SubSystem: '<S700>/EdgeRising1' */
    /* Logic: '<S707>/AND' incorporates:
     *  Logic: '<S707>/OR1'
     *  UnitDelay: '<S707>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_bu;

    /* Update for UnitDelay: '<S707>/Unit Delay' incorporates:
     *  Constant: '<S700>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_bu = true;

    /* End of Outputs for SubSystem: '<S700>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S700>/EdgeRising' */
    /* Logic: '<S706>/AND' incorporates:
     *  Logic: '<S706>/OR1'
     *  UnitDelay: '<S706>/Unit Delay'
     */
    rtb_AND_fl = (rtb_AND_liv && (!SCPR_ac_DW.UnitDelay_DSTATE_n5));

    /* Update for UnitDelay: '<S706>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_n5 = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S700>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S700>/Count Down  Reset Enabled' */
    /* Switch: '<S705>/Switch1' incorporates:
     *  Constant: '<S705>/Constant Value'
     *  Logic: '<S700>/AND'
     *  RelationalOperator: '<S705>/Greater  Than'
     *  Switch: '<S705>/Switch2'
     *  UnitDelay: '<S705>/Unit Delay'
     */
    if (rtb_AND_dp || rtb_AND_fl)
    {
        /* Switch: '<S705>/Switch1' incorporates:
         *  Constant: '<S708>/Calib'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SchArrayEnblTime;
    }
    else if (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_c0) > 0)
    {
        /* Switch: '<S705>/Switch2' incorporates:
         *  Constant: '<S705>/Constant Value1'
         *  Sum: '<S705>/Subtraction'
         *  Switch: '<S705>/Switch1'
         *  UnitDelay: '<S705>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_c0) - 1));
    }
    else
    {
        /* Switch: '<S705>/Switch1' incorporates:
         *  Switch: '<S705>/Switch2'
         *  UnitDelay: '<S705>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_c0;
    }

    /* End of Switch: '<S705>/Switch1' */

    /* RelationalOperator: '<S705>/Greater  Than1' incorporates:
     *  Constant: '<S705>/Constant Value2'
     */
    SCPR_ac_B.GreaterThan1 = (((sint32)rtb_Switch1_al) > 0);

    /* Update for UnitDelay: '<S705>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_c0 = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S700>/Count Down  Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S661>/Chrg_Sch_Array' */
    SCPR_ac_Chrg_Sch_Array(SCPR_ac_B.GreaterThan1, SCPR_ac_B.DataStoreRead7_k,
                           SCPR_ac_B.DataStoreRead8_h,
                           SCPR_ac_B.DataStoreRead9_d,
                           SCPR_ac_B.DataStoreRead10_k,
                           VeSCPR_K_ArrElementTimeIncSize,
                           SCPR_ac_B.DataStoreRead13_d, VeSCPR_k_DayOfWeek_num,
                           VeSCPR_k_NumOfMinPerDay, SCPR_ac_B.DataStoreRead29,
                           VeSCPR_K_NowIndex_Min, SCPR_ac_B.Switch_dd,
                           &SCPR_ac_B.Chrg_Sch_Array_h);

    /* End of Outputs for SubSystem: '<S661>/Chrg_Sch_Array' */

    /* Chart: '<S661>/NowInSchedule' */
    SCPR_ac_NowInSchedule(VeSCPR_K_NowIndex_Min,
                          SCPR_ac_B.Chrg_Sch_Array_h.x_schStart,
                          SCPR_ac_B.Chrg_Sch_Array_h.x_schEnd,
                          VeSCPR_k_NumOfMinPerWeek,
                          &SCPR_ac_B.sf_NowInSchedule_l);

    /* Outputs for Atomic SubSystem: '<S701>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S709>/EdgeRising' */
    /* Logic: '<S710>/AND' incorporates:
     *  Logic: '<S710>/OR1'
     *  UnitDelay: '<S710>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_iy;

    /* Update for UnitDelay: '<S710>/Unit Delay' incorporates:
     *  Constant: '<S701>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_iy = true;

    /* End of Outputs for SubSystem: '<S709>/EdgeRising' */

    /* Switch: '<S709>/Switch1' incorporates:
     *  Constant: '<S659>/Calib'
     *  Constant: '<S709>/Constant Value'
     *  Logic: '<S709>/OR'
     *  MinMax: '<S709>/Minimum'
     *  Sum: '<S709>/Summation'
     *  UnitDelay: '<S709>/Unit Delay'
     */
    if (rtb_AND_dp)
    {
        /* Switch: '<S709>/Switch1' incorporates:
         *  Constant: '<S709>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_WUDelayTime < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_fs) + 1U)))
    {
        /* MinMax: '<S709>/Minimum' incorporates:
         *  Constant: '<S659>/Calib'
         *  Switch: '<S709>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_WUDelayTime;
    }
    else
    {
        /* Switch: '<S709>/Switch1' incorporates:
         *  Constant: '<S709>/Constant Value'
         *  MinMax: '<S709>/Minimum'
         *  Sum: '<S709>/Summation'
         *  UnitDelay: '<S709>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_fs) + 1U);
    }

    /* End of Switch: '<S709>/Switch1' */

    /* Update for UnitDelay: '<S709>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fs = rtb_Switch1_al;

    /* Merge: '<S491>/Merge' incorporates:
     *  Constant: '<S659>/Calib'
     *  Logic: '<S701>/Logical1'
     *  RelationalOperator: '<S709>/Greater  Than'
     */
    rtb_Merge_n = ((SCPR_ac_B.DataStoreRead12_g) && (rtb_Switch1_al >=
                    KeSCPR_Cnt_WUDelayTime));

    /* End of Outputs for SubSystem: '<S701>/Turn On Delay Sample' */

    /* Logic: '<S580>/Logical1' incorporates:
     *  Switch: '<S701>/Switch4'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_Merge_n &&
        (SCPR_ac_B.sf_NowInSchedule_l.Sch_InWindow));

    /* Logic: '<S214>/Logical1' incorporates:
     *  Logic: '<S295>/Logical1'
     *  Logic: '<S295>/Logical2'
     *  Logic: '<S295>/Logical3'
     *  Logic: '<S295>/Logical4'
     */
    VeSCPR_b_SchInNormalWind = ((rtb_Switch4_m && (!SCPR_ac_B.DataStoreRead6_a))
        || (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq && (!SCPR_ac_B.DataStoreRead13_d)));

    /* Logic: '<S214>/Logical6' incorporates:
     *  Logic: '<S214>/Logical5'
     *  UnitDelay: '<S214>/Unit Delay1'
     */
    rtb_Logical6_ko = ((VeSCPR_b_SchInNormalWind) || ((VeSCPR_b_NowInUFWindow) &&
                        (SCPR_ac_DW.UnitDelay1_DSTATE_k)));

    /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S298>/EdgeRising' */
    /* Logic: '<S313>/AND' incorporates:
     *  Logic: '<S313>/OR1'
     *  UnitDelay: '<S313>/Unit Delay'
     */
    rtb_AND_dp = (rtb_Logical6_ko && (!SCPR_ac_DW.UnitDelay_DSTATE_i0));

    /* Update for UnitDelay: '<S313>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_i0 = rtb_Logical6_ko;

    /* End of Outputs for SubSystem: '<S298>/EdgeRising' */

    /* Switch: '<S298>/Switch1' incorporates:
     *  Constant: '<S294>/Calib'
     *  Constant: '<S298>/Constant Value'
     *  Logic: '<S298>/OR'
     *  Logic: '<S298>/OR1'
     *  MinMax: '<S298>/Minimum'
     *  Sum: '<S298>/Summation'
     *  UnitDelay: '<S298>/Unit Delay'
     */
    if ((!rtb_Logical6_ko) || rtb_AND_dp)
    {
        /* Switch: '<S298>/Switch1' incorporates:
         *  Constant: '<S298>/Constant Value1'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (KeSCPR_Cnt_SchToChargeDbnc < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_gz) + 1U)))
    {
        /* MinMax: '<S298>/Minimum' incorporates:
         *  Constant: '<S294>/Calib'
         *  Switch: '<S298>/Switch1'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_SchToChargeDbnc;
    }
    else
    {
        /* Switch: '<S298>/Switch1' incorporates:
         *  Constant: '<S298>/Constant Value'
         *  MinMax: '<S298>/Minimum'
         *  Sum: '<S298>/Summation'
         *  UnitDelay: '<S298>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_gz) + 1U);
    }

    /* End of Switch: '<S298>/Switch1' */

    /* Update for UnitDelay: '<S298>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gz = rtb_Switch1_hi;

    /* End of Outputs for SubSystem: '<S214>/Turn On Delay Sample' */

    /* Logic: '<S671>/Logical2' incorporates:
     *  Logic: '<S214>/Logical3'
     */
    tmp_2 = !SCPR_ac_B.DataStoreRead47;

    /* Switch: '<S671>/Switch' incorporates:
     *  Constant: '<S671>/Constant Value1'
     *  Constant: '<S671>/Constant Value16'
     *  Logic: '<S671>/Logical1'
     *  Logic: '<S671>/Logical2'
     *  RelationalOperator: '<S671>/Comparison7'
     *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator7'
     *  Switch: '<S671>/Switch1'
     */
    if (tmp_2 || ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 128) > 0))
    {
        /* Switch: '<S671>/Switch' */
        for (i = 0; i < 7; i++)
        {
            SCPR_ac_B.Switch_k[i] = false;
        }
    }
    else if (SCPR_ac_B.DataStoreRead37_a)
    {
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S671>/Switch' incorporates:
             *  Switch: '<S671>/Switch1'
             */
            SCPR_ac_B.Switch_k[i] = false;
        }
    }
    else
    {
        /* Switch: '<S671>/Switch' incorporates:
         *  Constant: '<S671>/Constant Value'
         *  Constant: '<S671>/Constant Value10'
         *  Constant: '<S671>/Constant Value11'
         *  Constant: '<S671>/Constant Value12'
         *  Constant: '<S671>/Constant Value13'
         *  Constant: '<S671>/Constant Value14'
         *  Constant: '<S671>/Constant Value15'
         *  Constant: '<S671>/Constant Value2'
         *  Constant: '<S671>/Constant Value3'
         *  Constant: '<S671>/Constant Value4'
         *  Constant: '<S671>/Constant Value5'
         *  Constant: '<S671>/Constant Value6'
         *  Constant: '<S671>/Constant Value7'
         *  Constant: '<S671>/Constant Value8'
         *  RelationalOperator: '<S671>/Comparison'
         *  RelationalOperator: '<S671>/Comparison1'
         *  RelationalOperator: '<S671>/Comparison2'
         *  RelationalOperator: '<S671>/Comparison3'
         *  RelationalOperator: '<S671>/Comparison4'
         *  RelationalOperator: '<S671>/Comparison5'
         *  RelationalOperator: '<S671>/Comparison6'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator4'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S671>/Bitwise Logical Operator6'
         *  Switch: '<S671>/Switch1'
         */
        SCPR_ac_B.Switch_k[0] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 64) >
            0);
        SCPR_ac_B.Switch_k[1] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 1) > 0);
        SCPR_ac_B.Switch_k[2] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 2) > 0);
        SCPR_ac_B.Switch_k[3] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 4) > 0);
        SCPR_ac_B.Switch_k[4] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 8) > 0);
        SCPR_ac_B.Switch_k[5] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 16) >
            0);
        SCPR_ac_B.Switch_k[6] = ((((sint32)SCPR_ac_B.DataStoreRead36_f) & 32) >
            0);
    }

    /* End of Switch: '<S671>/Switch' */

    /* Outputs for Atomic SubSystem: '<S670>/EdgeRising1' */
    /* Logic: '<S675>/AND' incorporates:
     *  Logic: '<S675>/OR1'
     *  UnitDelay: '<S675>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_lp;

    /* Update for UnitDelay: '<S675>/Unit Delay' incorporates:
     *  Constant: '<S670>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_lp = true;

    /* End of Outputs for SubSystem: '<S670>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S670>/EdgeRising' */
    /* Logic: '<S674>/AND' incorporates:
     *  Logic: '<S674>/OR1'
     *  UnitDelay: '<S674>/Unit Delay'
     */
    rtb_AND_fl = (rtb_Logical1_d0 && (!SCPR_ac_DW.UnitDelay_DSTATE_au));

    /* Update for UnitDelay: '<S674>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_au = rtb_Logical1_d0;

    /* End of Outputs for SubSystem: '<S670>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S670>/Count Down  Reset Enabled' */
    /* Switch: '<S673>/Switch1' incorporates:
     *  Constant: '<S673>/Constant Value'
     *  Logic: '<S670>/AND'
     *  RelationalOperator: '<S673>/Greater  Than'
     *  Switch: '<S673>/Switch2'
     *  UnitDelay: '<S673>/Unit Delay'
     */
    if (rtb_AND_dp || rtb_AND_fl)
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Constant: '<S676>/Calib'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SchArrayEnblTime;
    }
    else if (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_kt) > 0)
    {
        /* Switch: '<S673>/Switch2' incorporates:
         *  Constant: '<S673>/Constant Value1'
         *  Sum: '<S673>/Subtraction'
         *  Switch: '<S673>/Switch1'
         *  UnitDelay: '<S673>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_kt) - 1));
    }
    else
    {
        /* Switch: '<S673>/Switch1' incorporates:
         *  Switch: '<S673>/Switch2'
         *  UnitDelay: '<S673>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_kt;
    }

    /* End of Switch: '<S673>/Switch1' */

    /* RelationalOperator: '<S673>/Greater  Than1' incorporates:
     *  Constant: '<S673>/Constant Value2'
     */
    SCPR_ac_B.GreaterThan1_bj = (((sint32)rtb_Switch1_al) > 0);

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_kt = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S670>/Count Down  Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S656>/CoopCharging' */
    SCPR_ac_CoopCharging(SCPR_ac_B.GreaterThan1_bj, SCPR_ac_B.DataStoreRead30,
                         SCPR_ac_B.DataStoreRead31, SCPR_ac_B.DataStoreRead47,
                         SCPR_ac_B.Switch_k, VeSCPR_k_NumOfMinPerDay,
                         SCPR_ac_B.DataStoreRead37_a, VeSCPR_K_NowIndex_Min,
                         VeSCPR_k_DayOfWeek_num, &SCPR_ac_B.CoopCharging);

    /* End of Outputs for SubSystem: '<S656>/CoopCharging' */

    /* Chart: '<S496>/NextCoopST_Sch1' */
    SCPR_ac_NextCoopST_Sch1(SCPR_ac_B.CoopCharging.Switch,
                            SCPR_ac_B.DataStoreRead37_a,
                            &SCPR_ac_B.sf_NextCoopST_Sch1);

    /* Switch: '<S496>/Switch1' */
    if (SCPR_ac_B.DataStoreRead37_a)
    {
        /* Switch: '<S496>/Switch5' incorporates:
         *  Constant: '<S496>/Constant2'
         *  RelationalOperator: '<S496>/Comparison1'
         *  Sum: '<S496>/Sum4'
         *  Sum: '<S496>/Sum6'
         */
        if (((sint16)(SCPR_ac_B.sf_NextCoopST_Sch1.Next_coopCh -
                      VeSCPR_K_NowIndex_Min)) <= 0)
        {
            rtb_day = (sint16)(SCPR_ac_B.sf_NextCoopST_Sch1.Next_coopCh +
                               VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            rtb_day = SCPR_ac_B.sf_NextCoopST_Sch1.Next_coopCh;
        }

        /* End of Switch: '<S496>/Switch5' */

        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S496>/Constant6'
         *  Product: '<S496>/Product2'
         *  Sum: '<S496>/Sum7'
         */
        rtb_Switch2_h_idx_0 = (uint32)((sint32)(((sint32)((sint16)(rtb_day -
            VeSCPR_K_NowIndex_Min))) * 60));
    }
    else
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S496>/Constant4'
         */
        rtb_Switch2_h_idx_0 = 0U;
    }

    /* End of Switch: '<S496>/Switch1' */

    /* Sum: '<S541>/Sum5' */
    rtb_Switch2_h_idx_0 += SCPR_ac_B.VeSCPR_t_HVBatRTC;

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising1' */
    /* Logic: '<S546>/AND' incorporates:
     *  Logic: '<S546>/OR1'
     *  UnitDelay: '<S546>/Unit Delay'
     */
    rtb_AND_dp = (rtb_Logical1_d0 && (!SCPR_ac_DW.UnitDelay_DSTATE_lc));

    /* Update for UnitDelay: '<S546>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_lc = rtb_Logical1_d0;

    /* End of Outputs for SubSystem: '<S542>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S552>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S554>/Signal Latch On With Reset' */
    /* Logic: '<S555>/OR1' incorporates:
     *  Logic: '<S542>/Logical3'
     *  Logic: '<S555>/NOT'
     *  Logic: '<S555>/OR'
     *  UnitDelay: '<S554>/Unit Delay1'
     *  UnitDelay: '<S555>/Unit Delay'
     */
    rtb_AND_dp = ((rtb_AND_dp || rtb_OR1_ii) ||
                  ((!SCPR_ac_DW.UnitDelay1_DSTATE_m) &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_j5)));

    /* Update for UnitDelay: '<S555>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_j5 = rtb_AND_dp;

    /* End of Outputs for SubSystem: '<S554>/Signal Latch On With Reset' */

    /* Switch: '<S554>/Switch1' incorporates:
     *  Constant: '<S551>/Calib'
     *  Constant: '<S554>/Constant Value'
     *  Logic: '<S554>/Logical Operator'
     *  MinMax: '<S554>/Minimum'
     *  Sum: '<S554>/Summation'
     *  UnitDelay: '<S554>/Unit Delay'
     */
    if (!rtb_AND_dp)
    {
        /* Switch: '<S554>/Switch1' incorporates:
         *  Constant: '<S554>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_SamplesOfDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_o4) + 1U)))
    {
        /* MinMax: '<S554>/Minimum' incorporates:
         *  Constant: '<S551>/Calib'
         *  Switch: '<S554>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SamplesOfDelay;
    }
    else
    {
        /* Switch: '<S554>/Switch1' incorporates:
         *  Constant: '<S554>/Constant Value'
         *  MinMax: '<S554>/Minimum'
         *  Sum: '<S554>/Summation'
         *  UnitDelay: '<S554>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_o4) + 1U);
    }

    /* End of Switch: '<S554>/Switch1' */

    /* RelationalOperator: '<S554>/Greater  Than' incorporates:
     *  Constant: '<S551>/Calib'
     */
    rtb_AND_fl = (rtb_Switch1_al >= KeSCPR_Cnt_SamplesOfDelay);

    /* Update for UnitDelay: '<S554>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_m = rtb_AND_fl;

    /* Update for UnitDelay: '<S554>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_o4 = rtb_Switch1_al;

    /* Switch: '<S552>/Switch2' incorporates:
     *  DataStoreWrite: '<S552>/Data Store Write'
     *  Logic: '<S554>/AND'
     */
    if (rtb_AND_dp && rtb_AND_fl)
    {
        SCPR_ac_DW.NeSCPR_g_Sch1CoCH_DNRvalue = rtb_Switch2_h_idx_0;
    }

    /* End of Switch: '<S552>/Switch2' */
    /* End of Outputs for SubSystem: '<S552>/Turn On Delay Sample' */

    /* Switch: '<S552>/Switch' incorporates:
     *  Constant: '<S552>/Constant'
     *  DataStoreWrite: '<S552>/Data Store Write'
     *  RelationalOperator: '<S552>/Greater  Than2'
     */
    if (SCPR_ac_DW.NeSCPR_g_Sch1CoCH_DNRvalue == 0U)
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S552>/Constant1'
         *  Sum: '<S552>/Sum'
         */
        rtb_Switch2_h_idx_0++;
    }
    else
    {
        /* Switch: '<S553>/Switch' */
        rtb_Switch2_h_idx_0 = SCPR_ac_DW.NeSCPR_g_Sch1CoCH_DNRvalue;
    }

    /* End of Switch: '<S552>/Switch' */

    /* RelationalOperator: '<S391>/Comparison4' incorporates:
     *  Constant: '<S550>/Constant'
     *  RelationalOperator: '<S542>/Comparison3'
     *  UnitDelay: '<S542>/Unit Delay1'
     */
    rtb_Comparison4_ah = (((uint32)SCPR_ac_DW.UnitDelay1_DSTATE_ff) !=
                          CeSCPR_e_External_Charging);

    /* Logic: '<S542>/Logical5' incorporates:
     *  RelationalOperator: '<S542>/notEqualTo'
     */
    rtb_AND_dp = ((SCPR_ac_B.VeSCPR_t_HVBatRTC > rtb_Switch2_h_idx_0) &&
                  rtb_Comparison4_ah);

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising3' */
    /* Logic: '<S548>/OR1' incorporates:
     *  UnitDelay: '<S548>/Unit Delay'
     */
    rtb_AND_fl = !SCPR_ac_DW.UnitDelay_DSTATE_iv;

    /* Update for UnitDelay: '<S548>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_iv = rtb_AND_dp;

    /* Logic: '<S542>/Logical' incorporates:
     *  Logic: '<S548>/AND'
     */
    rtb_AND_fl = ((rtb_AND_dp && rtb_AND_fl) && (SCPR_ac_B.DataStoreRead37_a));

    /* End of Outputs for SubSystem: '<S542>/EdgeRising3' */

    /* Logic: '<S679>/Logical2' incorporates:
     *  Logic: '<S214>/Logical3'
     */
    tmp_3 = !SCPR_ac_B.DataStoreRead43;

    /* Switch: '<S679>/Switch' incorporates:
     *  Constant: '<S679>/Constant Value1'
     *  Constant: '<S679>/Constant Value16'
     *  Logic: '<S679>/Logical1'
     *  Logic: '<S679>/Logical2'
     *  RelationalOperator: '<S679>/Comparison7'
     *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator7'
     *  Switch: '<S679>/Switch1'
     */
    if (tmp_3 || ((((sint32)SCPR_ac_B.DataStoreRead42) & 128) > 0))
    {
        /* Switch: '<S679>/Switch' */
        for (i = 0; i < 7; i++)
        {
            SCPR_ac_B.Switch_b[i] = false;
        }
    }
    else if (SCPR_ac_B.DataStoreRead44)
    {
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S679>/Switch' incorporates:
             *  Switch: '<S679>/Switch1'
             */
            SCPR_ac_B.Switch_b[i] = false;
        }
    }
    else
    {
        /* Switch: '<S679>/Switch' incorporates:
         *  Constant: '<S679>/Constant Value'
         *  Constant: '<S679>/Constant Value10'
         *  Constant: '<S679>/Constant Value11'
         *  Constant: '<S679>/Constant Value12'
         *  Constant: '<S679>/Constant Value13'
         *  Constant: '<S679>/Constant Value14'
         *  Constant: '<S679>/Constant Value15'
         *  Constant: '<S679>/Constant Value2'
         *  Constant: '<S679>/Constant Value3'
         *  Constant: '<S679>/Constant Value4'
         *  Constant: '<S679>/Constant Value5'
         *  Constant: '<S679>/Constant Value6'
         *  Constant: '<S679>/Constant Value7'
         *  Constant: '<S679>/Constant Value8'
         *  RelationalOperator: '<S679>/Comparison'
         *  RelationalOperator: '<S679>/Comparison1'
         *  RelationalOperator: '<S679>/Comparison2'
         *  RelationalOperator: '<S679>/Comparison3'
         *  RelationalOperator: '<S679>/Comparison4'
         *  RelationalOperator: '<S679>/Comparison5'
         *  RelationalOperator: '<S679>/Comparison6'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator4'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S679>/Bitwise Logical Operator6'
         *  Switch: '<S679>/Switch1'
         */
        SCPR_ac_B.Switch_b[0] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 64) > 0);
        SCPR_ac_B.Switch_b[1] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 1) > 0);
        SCPR_ac_B.Switch_b[2] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 2) > 0);
        SCPR_ac_B.Switch_b[3] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 4) > 0);
        SCPR_ac_B.Switch_b[4] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 8) > 0);
        SCPR_ac_B.Switch_b[5] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 16) > 0);
        SCPR_ac_B.Switch_b[6] = ((((sint32)SCPR_ac_B.DataStoreRead42) & 32) > 0);
    }

    /* End of Switch: '<S679>/Switch' */

    /* Outputs for Atomic SubSystem: '<S678>/EdgeRising1' */
    /* Logic: '<S683>/AND' incorporates:
     *  Logic: '<S683>/OR1'
     *  UnitDelay: '<S683>/Unit Delay'
     */
    rtb_AND_dp = !SCPR_ac_DW.UnitDelay_DSTATE_je;

    /* Update for UnitDelay: '<S683>/Unit Delay' incorporates:
     *  Constant: '<S678>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_je = true;

    /* End of Outputs for SubSystem: '<S678>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S678>/EdgeRising' */
    /* Logic: '<S682>/AND' incorporates:
     *  Logic: '<S682>/OR1'
     *  UnitDelay: '<S682>/Unit Delay'
     */
    rtb_AND_c2 = (rtb_AND_liv && (!SCPR_ac_DW.UnitDelay_DSTATE_loq));

    /* Update for UnitDelay: '<S682>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_loq = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S678>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S678>/Count Down  Reset Enabled' */
    /* Switch: '<S681>/Switch1' incorporates:
     *  Constant: '<S681>/Constant Value'
     *  Logic: '<S678>/AND'
     *  RelationalOperator: '<S681>/Greater  Than'
     *  Switch: '<S681>/Switch2'
     *  UnitDelay: '<S681>/Unit Delay'
     */
    if (rtb_AND_dp || rtb_AND_c2)
    {
        /* Switch: '<S681>/Switch1' incorporates:
         *  Constant: '<S684>/Calib'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SchArrayEnblTime;
    }
    else if (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_cm) > 0)
    {
        /* Switch: '<S681>/Switch2' incorporates:
         *  Constant: '<S681>/Constant Value1'
         *  Sum: '<S681>/Subtraction'
         *  Switch: '<S681>/Switch1'
         *  UnitDelay: '<S681>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_cm) - 1));
    }
    else
    {
        /* Switch: '<S681>/Switch1' incorporates:
         *  Switch: '<S681>/Switch2'
         *  UnitDelay: '<S681>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_cm;
    }

    /* End of Switch: '<S681>/Switch1' */

    /* RelationalOperator: '<S681>/Greater  Than1' incorporates:
     *  Constant: '<S681>/Constant Value2'
     */
    SCPR_ac_B.GreaterThan1_b = (((sint32)rtb_Switch1_al) > 0);

    /* Update for UnitDelay: '<S681>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cm = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S678>/Count Down  Reset Enabled' */

    /* Outputs for Enabled SubSystem: '<S657>/CoopCharging' */
    SCPR_ac_CoopCharging(SCPR_ac_B.GreaterThan1_b, SCPR_ac_B.DataStoreRead40,
                         SCPR_ac_B.DataStoreRead41, SCPR_ac_B.DataStoreRead43,
                         SCPR_ac_B.Switch_b, VeSCPR_k_NumOfMinPerDay,
                         SCPR_ac_B.DataStoreRead44, VeSCPR_K_NowIndex_Min,
                         VeSCPR_k_DayOfWeek_num, &SCPR_ac_B.CoopCharging_k);

    /* End of Outputs for SubSystem: '<S657>/CoopCharging' */

    /* Chart: '<S496>/NextCoopST_Sch2' */
    SCPR_ac_NextCoopST_Sch1(SCPR_ac_B.CoopCharging_k.Switch,
                            SCPR_ac_B.DataStoreRead44,
                            &SCPR_ac_B.sf_NextCoopST_Sch2);

    /* Switch: '<S496>/Switch2' */
    if (SCPR_ac_B.DataStoreRead44)
    {
        /* Switch: '<S496>/Switch3' incorporates:
         *  Constant: '<S496>/Constant1'
         *  RelationalOperator: '<S496>/Comparison2'
         *  Sum: '<S496>/Sum1'
         *  Sum: '<S496>/Sum2'
         */
        if (((sint16)(SCPR_ac_B.sf_NextCoopST_Sch2.Next_coopCh -
                      VeSCPR_K_NowIndex_Min)) <= 0)
        {
            rtb_day = (sint16)(SCPR_ac_B.sf_NextCoopST_Sch2.Next_coopCh +
                               VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            rtb_day = SCPR_ac_B.sf_NextCoopST_Sch2.Next_coopCh;
        }

        /* End of Switch: '<S496>/Switch3' */

        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S496>/Constant5'
         *  Product: '<S496>/Product1'
         *  Sum: '<S496>/Sum3'
         */
        rtb_Switch2_h_idx_0 = (uint32)((sint32)(((sint32)((sint16)(rtb_day -
            VeSCPR_K_NowIndex_Min))) * 60));
    }
    else
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S496>/Constant3'
         */
        rtb_Switch2_h_idx_0 = 0U;
    }

    /* End of Switch: '<S496>/Switch2' */

    /* Sum: '<S541>/Sum1' */
    rtb_Switch2_h_idx_0 += SCPR_ac_B.VeSCPR_t_HVBatRTC;

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising2' */
    /* Logic: '<S547>/AND' incorporates:
     *  Logic: '<S547>/OR1'
     *  UnitDelay: '<S547>/Unit Delay'
     */
    rtb_AND_dp = (rtb_AND_liv && (!SCPR_ac_DW.UnitDelay_DSTATE_kq));

    /* Update for UnitDelay: '<S547>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_kq = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S542>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S553>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S556>/Signal Latch On With Reset' */
    /* Logic: '<S557>/OR1' incorporates:
     *  Logic: '<S542>/Logical4'
     *  Logic: '<S557>/NOT'
     *  Logic: '<S557>/OR'
     *  UnitDelay: '<S556>/Unit Delay1'
     *  UnitDelay: '<S557>/Unit Delay'
     */
    rtb_AND_dp = ((rtb_OR1_ii || rtb_AND_dp) ||
                  ((!SCPR_ac_DW.UnitDelay1_DSTATE_dw) &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_kx)));

    /* Update for UnitDelay: '<S557>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_kx = rtb_AND_dp;

    /* End of Outputs for SubSystem: '<S556>/Signal Latch On With Reset' */

    /* Switch: '<S556>/Switch1' incorporates:
     *  Constant: '<S551>/Calib'
     *  Constant: '<S556>/Constant Value'
     *  Logic: '<S556>/Logical Operator'
     *  MinMax: '<S556>/Minimum'
     *  Sum: '<S556>/Summation'
     *  UnitDelay: '<S556>/Unit Delay'
     */
    if (!rtb_AND_dp)
    {
        /* Switch: '<S556>/Switch1' incorporates:
         *  Constant: '<S556>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_SamplesOfDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_e) + 1U)))
    {
        /* MinMax: '<S556>/Minimum' incorporates:
         *  Constant: '<S551>/Calib'
         *  Switch: '<S556>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_SamplesOfDelay;
    }
    else
    {
        /* Switch: '<S556>/Switch1' incorporates:
         *  Constant: '<S556>/Constant Value'
         *  MinMax: '<S556>/Minimum'
         *  Sum: '<S556>/Summation'
         *  UnitDelay: '<S556>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_e) + 1U);
    }

    /* End of Switch: '<S556>/Switch1' */

    /* RelationalOperator: '<S556>/Greater  Than' incorporates:
     *  Constant: '<S551>/Calib'
     */
    rtb_AND_c2 = (rtb_Switch1_al >= KeSCPR_Cnt_SamplesOfDelay);

    /* Update for UnitDelay: '<S556>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_dw = rtb_AND_c2;

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_al;

    /* Switch: '<S553>/Switch2' incorporates:
     *  DataStoreWrite: '<S553>/Data Store Write'
     *  Logic: '<S556>/AND'
     */
    if (rtb_AND_dp && rtb_AND_c2)
    {
        SCPR_ac_DW.NeSCPR_g_Sch2CoCH_DNRvalue = rtb_Switch2_h_idx_0;
    }

    /* End of Switch: '<S553>/Switch2' */
    /* End of Outputs for SubSystem: '<S553>/Turn On Delay Sample' */

    /* Switch: '<S553>/Switch' incorporates:
     *  Constant: '<S553>/Constant'
     *  DataStoreWrite: '<S553>/Data Store Write'
     *  RelationalOperator: '<S553>/Greater  Than2'
     */
    if (SCPR_ac_DW.NeSCPR_g_Sch2CoCH_DNRvalue == 0U)
    {
        /* Switch: '<S553>/Switch' incorporates:
         *  Constant: '<S553>/Constant1'
         *  Sum: '<S553>/Sum'
         */
        rtb_Switch2_h_idx_0++;
    }
    else
    {
        /* Switch: '<S553>/Switch' */
        rtb_Switch2_h_idx_0 = SCPR_ac_DW.NeSCPR_g_Sch2CoCH_DNRvalue;
    }

    /* End of Switch: '<S553>/Switch' */

    /* Logic: '<S542>/Logical6' incorporates:
     *  RelationalOperator: '<S542>/notEqualTo1'
     */
    rtb_AND_dp = (rtb_Comparison4_ah && (SCPR_ac_B.VeSCPR_t_HVBatRTC >
                   rtb_Switch2_h_idx_0));

    /* Outputs for Atomic SubSystem: '<S542>/EdgeRising4' */
    /* Logic: '<S549>/OR1' incorporates:
     *  UnitDelay: '<S549>/Unit Delay'
     */
    rtb_AND_c2 = !SCPR_ac_DW.UnitDelay_DSTATE_ib;

    /* Update for UnitDelay: '<S549>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ib = rtb_AND_dp;

    /* Logic: '<S542>/Logical2' incorporates:
     *  Logic: '<S549>/AND'
     */
    rtb_AND_c2 = ((rtb_AND_dp && rtb_AND_c2) && (SCPR_ac_B.DataStoreRead44));

    /* End of Outputs for SubSystem: '<S542>/EdgeRising4' */

    /* Logic: '<S542>/Logical1' */
    rtb_Logical1_f = (rtb_AND_fl || rtb_AND_c2);

    /* Outputs for Atomic SubSystem: '<S491>/Signal Latch On With Reset' */
    /* Logic: '<S545>/OR1' incorporates:
     *  Logic: '<S545>/OR'
     *  UnitDelay: '<S545>/Unit Delay'
     */
    rtb_AND_dp = (rtb_Logical1_f || (rtb_AND_ck &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_gq)));

    /* Update for UnitDelay: '<S545>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gq = rtb_AND_dp;

    /* End of Outputs for SubSystem: '<S491>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S293>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S310>/EdgeRising' */
    /* Switch: '<S310>/Switch1' incorporates:
     *  Constant: '<S307>/Calib'
     *  Constant: '<S310>/Constant Value'
     *  Logic: '<S310>/OR'
     *  Logic: '<S311>/AND'
     *  Logic: '<S311>/OR1'
     *  MinMax: '<S310>/Minimum'
     *  Sum: '<S310>/Summation'
     *  UnitDelay: '<S310>/Unit Delay'
     *  UnitDelay: '<S311>/Unit Delay'
     */
    if (VeSCPR_b_ChrgNowRstLatch_tmp || ((VeSCPR_b_PluggedIn) &&
            (!SCPR_ac_DW.UnitDelay_DSTATE_bg)))
    {
        /* Switch: '<S310>/Switch1' incorporates:
         *  Constant: '<S310>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_CoCH_VehLocDbnc < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_gl) + 1U)))
    {
        /* MinMax: '<S310>/Minimum' incorporates:
         *  Constant: '<S307>/Calib'
         *  Switch: '<S310>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_CoCH_VehLocDbnc;
    }
    else
    {
        /* Switch: '<S310>/Switch1' incorporates:
         *  Constant: '<S310>/Constant Value'
         *  MinMax: '<S310>/Minimum'
         *  Sum: '<S310>/Summation'
         *  UnitDelay: '<S310>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_gl) + 1U);
    }

    /* End of Switch: '<S310>/Switch1' */
    /* End of Outputs for SubSystem: '<S310>/EdgeRising' */

    /* Logic: '<S310>/AND' incorporates:
     *  Constant: '<S307>/Calib'
     *  RelationalOperator: '<S310>/Greater  Than'
     */
    rtb_AND_ck = ((VeSCPR_b_PluggedIn) && (rtb_Switch1_al >=
                   KeSCPR_Cnt_CoCH_VehLocDbnc));

    /* End of Outputs for SubSystem: '<S293>/Turn On Delay Sample' */

    /* Outputs for Enabled SubSystem: '<S122>/BEV_Button' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* Logic: '<S293>/Logical2' incorporates:
     *  Logic: '<S125>/Logical25'
     *  Logic: '<S214>/Logical10'
     *  Logic: '<S214>/Logical11'
     *  Logic: '<S293>/Logical6'
     *  Logic: '<S293>/Logical9'
     *  UnitDelay: '<S214>/Unit Delay4'
     */
    rtb_Logical11_i = ((!SCPR_ac_DW.UnitDelay4_DSTATE_e) || rtb_AND_dp);

    /* End of Outputs for SubSystem: '<S122>/BEV_Button' */

    /* Logic: '<S293>/Logical5' incorporates:
     *  DataStoreRead: '<S293>/Data Store Read2'
     *  Logic: '<S293>/Logical13'
     *  Logic: '<S293>/Logical2'
     *  Logic: '<S293>/Logical3'
     */
    rtb_AND_dp = ((((VeSCPR_b_PluggedIn) && (rtb_Logical11_i && (!rtb_AND_ck))) ||
                   (SCPR_ac_DW.NeSCPR_b_CoCh_VehLocation)) && rtb_Logical11_i);

    /* Outputs for Enabled SubSystem: '<S114>/CancelLogic' incorporates:
     *  EnablePort: '<S211>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S122>/BEV_Button' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* Outputs for Atomic SubSystem: '<S125>/EdgeFalling1' */
    /* Logic: '<S214>/Logical20' incorporates:
     *  Logic: '<S125>/Logical23'
     *  Logic: '<S132>/OR1'
     *  Logic: '<S221>/Logical2'
     *  Logic: '<S498>/Logical6'
     */
    VeSCPR_b_SchChrgInWindow_tmp = !rtb_AND_dp;

    /* End of Outputs for SubSystem: '<S125>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S122>/BEV_Button' */
    /* End of Outputs for SubSystem: '<S114>/CancelLogic' */

    /* Outputs for Atomic SubSystem: '<S214>/Turn On Delay Sample' */
    /* Logic: '<S214>/Logical4' incorporates:
     *  Constant: '<S294>/Calib'
     *  Logic: '<S214>/Logical20'
     *  Logic: '<S298>/AND'
     *  RelationalOperator: '<S298>/Greater  Than'
     */
    VeSCPR_b_SchChrgInWindow = ((rtb_Logical6_ko && (rtb_Switch1_hi >=
        KeSCPR_Cnt_SchToChargeDbnc)) && VeSCPR_b_SchChrgInWindow_tmp);

    /* End of Outputs for SubSystem: '<S214>/Turn On Delay Sample' */

    /* Logic: '<S210>/Logical8' */
    VeSCPR_b_InChrgWindow = ((VeSCPR_b_SchChrgInWindow) && rtb_Comparison4_du);

    /* RelationalOperator: '<S214>/Comparison1' incorporates:
     *  Constant: '<S292>/Constant'
     *  Switch: '<S809>/Switch60'
     */
    VeSCPR_b_ActvCharging = (((uint32)VeSCPR_e_ChargingSysSts) ==
        CeOBCR_e_ChargingSts_Charging);

    /* RelationalOperator: '<S615>/Comparison6' incorporates:
     *  Constant: '<S630>/Constant'
     *  Switch: '<S809>/Switch68'
     */
    rtb_Logical6_ko = (((uint32)VeSCPR_e_ChargingLevel) !=
                       CeOBCR_e_ChargingLvlDefault);

    /* Outputs for Atomic SubSystem: '<S615>/EdgeRising6' */
    /* Logic: '<S629>/AND' incorporates:
     *  Logic: '<S629>/OR1'
     *  UnitDelay: '<S629>/Unit Delay'
     */
    rtb_Comparison4_ah = (rtb_Logical6_ko && (!SCPR_ac_DW.UnitDelay_DSTATE_fr));

    /* Update for UnitDelay: '<S629>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fr = rtb_Logical6_ko;

    /* End of Outputs for SubSystem: '<S615>/EdgeRising6' */

    /* Outputs for Atomic SubSystem: '<S615>/Stop Watch Reset Enabled1' */
    /* Switch: '<S633>/Switch1' */
    if (rtb_Comparison4_ah)
    {
        /* Switch: '<S633>/Switch1' incorporates:
         *  Constant: '<S633>/Constant Value2'
         */
        rtb_Switch1_ls = 0.0F;
    }
    else
    {
        /* Switch: '<S633>/Switch1' incorporates:
         *  Constant: '<S615>/ExecRate'
         *  Sum: '<S633>/Subtraction'
         *  UnitDelay: '<S633>/Unit Delay'
         */
        rtb_Switch1_ls = SCPR_ac_DW.UnitDelay_DSTATE_n + 0.1F;
    }

    /* End of Switch: '<S633>/Switch1' */

    /* Update for UnitDelay: '<S633>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_ls;

    /* End of Outputs for SubSystem: '<S615>/Stop Watch Reset Enabled1' */

    /* Outputs for Atomic SubSystem: '<S615>/Counter Reset  Enabled 1' */
    /* Switch: '<S627>/Switch1' incorporates:
     *  Constant: '<S631>/Calib'
     *  Logic: '<S615>/OR2'
     *  RelationalOperator: '<S615>/Comparison5'
     *  Switch: '<S627>/Switch2'
     */
    if (rtb_Switch1_ls >= KeSCPR_t_DoublePluginTime)
    {
        /* Switch: '<S627>/Switch1' incorporates:
         *  Constant: '<S627>/Constant Value2'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (rtb_Comparison4_ah)
    {
        /* Switch: '<S627>/Switch2' incorporates:
         *  Constant: '<S627>/Constant Value1'
         *  Sum: '<S627>/Subtraction'
         *  Switch: '<S627>/Switch1'
         *  UnitDelay: '<S627>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_j) + 1U);
    }
    else
    {
        /* Switch: '<S627>/Switch1' incorporates:
         *  Switch: '<S627>/Switch2'
         *  UnitDelay: '<S627>/Unit Delay'
         */
        rtb_Switch1_hi = SCPR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S627>/Switch1' */

    /* Update for UnitDelay: '<S627>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_hi;

    /* End of Outputs for SubSystem: '<S615>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S615>/Comparison4' incorporates:
     *  Constant: '<S615>/Constant1'
     */
    rtb_Logical6_ko = (((sint32)rtb_Switch1_hi) >= 2);

    /* Outputs for Atomic SubSystem: '<S615>/EdgeRising5' */
    /* Logic: '<S628>/OR1' incorporates:
     *  UnitDelay: '<S628>/Unit Delay'
     */
    rtb_Comparison4_ah = !SCPR_ac_DW.UnitDelay_DSTATE_iz;

    /* Update for UnitDelay: '<S628>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_iz = rtb_Logical6_ko;

    /* End of Outputs for SubSystem: '<S615>/EdgeRising5' */

    /* RelationalOperator: '<S582>/Comparison4' incorporates:
     *  Constant: '<S616>/Constant'
     *  RelationalOperator: '<S615>/Comparison6'
     *  Switch: '<S809>/Switch68'
     */
    rtb_Comparison4_du = (((uint32)VeSCPR_e_ChargingLevel) ==
                          CeOBCR_e_ChargingLvlDefault);

    /* Outputs for Atomic SubSystem: '<S582>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S623>/EdgeRising' */
    /* Logic: '<S653>/AND' incorporates:
     *  Logic: '<S653>/OR1'
     *  UnitDelay: '<S653>/Unit Delay'
     */
    rtb_AND_lnr = (rtb_Comparison4_du && (!SCPR_ac_DW.UnitDelay_DSTATE_ho));

    /* Update for UnitDelay: '<S653>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ho = rtb_Comparison4_du;

    /* End of Outputs for SubSystem: '<S623>/EdgeRising' */

    /* Switch: '<S623>/Switch1' incorporates:
     *  Constant: '<S617>/Calib'
     *  Constant: '<S623>/Constant Value'
     *  Logic: '<S623>/OR'
     *  Logic: '<S623>/OR1'
     *  MinMax: '<S623>/Minimum'
     *  Sum: '<S623>/Summation'
     *  UnitDelay: '<S623>/Unit Delay'
     */
    if ((!rtb_Comparison4_du) || rtb_AND_lnr)
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  Constant: '<S623>/Constant Value1'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (KeSCPR_Cnt_DoublePlugin_Reset_Debounce < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_l) + 1U)))
    {
        /* MinMax: '<S623>/Minimum' incorporates:
         *  Constant: '<S617>/Calib'
         *  Switch: '<S623>/Switch1'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_DoublePlugin_Reset_Debounce;
    }
    else
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  Constant: '<S623>/Constant Value'
         *  MinMax: '<S623>/Minimum'
         *  Sum: '<S623>/Summation'
         *  UnitDelay: '<S623>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S623>/Switch1' */

    /* Logic: '<S623>/AND' incorporates:
     *  Constant: '<S617>/Calib'
     *  RelationalOperator: '<S623>/Greater  Than'
     */
    VeSCPR_b_ChrgLevReset = (rtb_Comparison4_du && (rtb_Switch1_hi >=
        KeSCPR_Cnt_DoublePlugin_Reset_Debounce));

    /* Update for UnitDelay: '<S623>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch1_hi;

    /* End of Outputs for SubSystem: '<S582>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S620>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S615>/Signal Latch On With Reset2' */
    /* Logic: '<S632>/NOT' incorporates:
     *  Logic: '<S646>/NOT'
     */
    rtb_Comparison4_du = !VeSCPR_b_ChrgLevReset;

    /* End of Outputs for SubSystem: '<S620>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S615>/EdgeRising5' */
    /* Logic: '<S632>/OR1' incorporates:
     *  Logic: '<S628>/AND'
     *  Logic: '<S632>/NOT'
     *  Logic: '<S632>/OR'
     *  UnitDelay: '<S632>/Unit Delay'
     */
    rtb_Logical6_ko = ((rtb_Logical6_ko && rtb_Comparison4_ah) ||
                       (rtb_Comparison4_du && (SCPR_ac_DW.UnitDelay_DSTATE_f0c)));

    /* End of Outputs for SubSystem: '<S615>/EdgeRising5' */

    /* Update for UnitDelay: '<S632>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_f0c = rtb_Logical6_ko;

    /* End of Outputs for SubSystem: '<S615>/Signal Latch On With Reset2' */

    /* Switch: '<S615>/Switch1' incorporates:
     *  Switch: '<S615>/Switch'
     */
    if (rtb_Logical6_ko)
    {
        /* Switch: '<S615>/Switch1' */
        VeSCPR_b_DoublePlugInOvrd = true;
    }
    else if (VeSCPR_b_ChrgLevReset)
    {
        /* Switch: '<S615>/Switch' incorporates:
         *  Constant: '<S615>/FALSE Constant'
         *  Switch: '<S615>/Switch1'
         */
        VeSCPR_b_DoublePlugInOvrd = false;
    }
    else
    {
        /* Switch: '<S615>/Switch1' incorporates:
         *  DataStoreRead: '<S615>/Data Store Read1'
         *  Switch: '<S615>/Switch'
         */
        VeSCPR_b_DoublePlugInOvrd = SCPR_ac_DW.NeSCPR_b_PluginLatchOverride;
    }

    /* End of Switch: '<S615>/Switch1' */

    /* Logic: '<S620>/Logical2' incorporates:
     *  Constant: '<S643>/Constant'
     *  Constant: '<S645>/Calib'
     *  RelationalOperator: '<S615>/Comparison6'
     *  RelationalOperator: '<S620>/Comparison1'
     *  RelationalOperator: '<S620>/Comparison2'
     *  Switch: '<S809>/Switch68'
     */
    rtb_Logical6_ko = ((((uint32)VeSCPR_e_ChargingLevel) !=
                        CeOBCR_e_ChargingLvlDefault) && (VeSCPR_Pct_HV_BatSOC <
                        KeSCPR_Pct_MinSOC_OvrdRadioRq));

    /* Outputs for Atomic SubSystem: '<S620>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S647>/EdgeRising' */
    /* Logic: '<S648>/AND' incorporates:
     *  Logic: '<S648>/OR1'
     *  UnitDelay: '<S648>/Unit Delay'
     */
    rtb_Comparison4_ah = (rtb_Logical6_ko && (!SCPR_ac_DW.UnitDelay_DSTATE_aao));

    /* Update for UnitDelay: '<S648>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_aao = rtb_Logical6_ko;

    /* End of Outputs for SubSystem: '<S647>/EdgeRising' */

    /* Switch: '<S647>/Switch1' incorporates:
     *  Constant: '<S644>/Calib'
     *  Constant: '<S647>/Constant Value'
     *  Logic: '<S647>/OR'
     *  Logic: '<S647>/OR1'
     *  MinMax: '<S647>/Minimum'
     *  Sum: '<S647>/Summation'
     *  UnitDelay: '<S647>/Unit Delay'
     */
    if ((!rtb_Logical6_ko) || rtb_Comparison4_ah)
    {
        /* Switch: '<S647>/Switch1' incorporates:
         *  Constant: '<S647>/Constant Value1'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (KeSCPR_Cnt_DbncLowSOCBdyRq < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_de) + 1U)))
    {
        /* MinMax: '<S647>/Minimum' incorporates:
         *  Constant: '<S644>/Calib'
         *  Switch: '<S647>/Switch1'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_DbncLowSOCBdyRq;
    }
    else
    {
        /* Switch: '<S647>/Switch1' incorporates:
         *  Constant: '<S647>/Constant Value'
         *  MinMax: '<S647>/Minimum'
         *  Sum: '<S647>/Summation'
         *  UnitDelay: '<S647>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_de) + 1U);
    }

    /* End of Switch: '<S647>/Switch1' */

    /* Update for UnitDelay: '<S647>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_de = rtb_Switch1_hi;

    /* Outputs for Atomic SubSystem: '<S620>/Signal Latch On With Reset2' */
    /* Logic: '<S646>/OR1' incorporates:
     *  Constant: '<S644>/Calib'
     *  Logic: '<S646>/OR'
     *  Logic: '<S647>/AND'
     *  RelationalOperator: '<S647>/Greater  Than'
     *  UnitDelay: '<S646>/Unit Delay'
     */
    VeSCPR_b_LowSOC_ChrgOvrd = ((rtb_Logical6_ko && (rtb_Switch1_hi >=
        KeSCPR_Cnt_DbncLowSOCBdyRq)) || (rtb_Comparison4_du &&
        (SCPR_ac_DW.UnitDelay_DSTATE_bs)));

    /* End of Outputs for SubSystem: '<S620>/Turn On Delay Sample' */

    /* Update for UnitDelay: '<S646>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_bs = VeSCPR_b_LowSOC_ChrgOvrd;

    /* End of Outputs for SubSystem: '<S620>/Signal Latch On With Reset2' */

    /* Logic: '<S618>/Logical11' incorporates:
     *  Constant: '<S634>/Constant'
     *  Constant: '<S635>/Constant'
     *  Constant: '<S636>/Constant'
     *  RelationalOperator: '<S618>/Comparison10'
     *  RelationalOperator: '<S618>/Comparison11'
     *  RelationalOperator: '<S618>/Comparison9'
     *  Switch: '<S809>/Switch62'
     */
    VeSCPR_b_KeyOverride_Charge = (((((uint32)VeSCPR_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Acc) || (((uint32)VeSCPR_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Run)) || (((uint32)VeSCPR_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Crank));

    /* RelationalOperator: '<S391>/Comparison4' incorporates:
     *  Logic: '<S622>/Logical10'
     */
    rtb_Comparison4_ah = !VeSCPR_b_THMR_RdyForShtDwn;

    /* Logic: '<S622>/Logical7' */
    VeSCPR_b_Ovrd_PerBattCond = ((VeSCPR_b_HVBatPerWUThermal) &&
        rtb_Comparison4_ah);

    /* Logic: '<S622>/Logical12' */
    VeSCPR_b_Ovrd_PerCabinCond = (rtb_Comparison4_ah &&
        (VeSCPR_b_HVPerWU_CabinPre));

    /* Outputs for Enabled SubSystem: '<S122>/BEV_Button' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* RelationalOperator: '<S621>/Comparison3' incorporates:
     *  RelationalOperator: '<S150>/Comparison4'
     *  RelationalOperator: '<S621>/Comparison2'
     *  Switch: '<S809>/Switch8'
     */
    rtb_Comparison4_ob_tmp = SCPR_ac_B.Switch8_m;

    /* End of Outputs for SubSystem: '<S122>/BEV_Button' */

    /* RelationalOperator: '<S391>/Comparison4' incorporates:
     *  Constant: '<S652>/Constant'
     *  RelationalOperator: '<S621>/Comparison3'
     */
    rtb_Comparison4_ah = (((uint32)rtb_Comparison4_ob_tmp) ==
                          CeTIMR_e_RacePrep_Active);

    /* Logic: '<S621>/Logical1' incorporates:
     *  Constant: '<S649>/Constant'
     *  Constant: '<S650>/Constant'
     *  Constant: '<S651>/Constant'
     *  Logic: '<S621>/Logical2'
     *  Logic: '<S621>/Logical3'
     *  Logic: '<S621>/Logical4'
     *  Logic: '<S621>/Logical5'
     *  RelationalOperator: '<S615>/Comparison6'
     *  RelationalOperator: '<S621>/Comparison1'
     *  RelationalOperator: '<S621>/Comparison2'
     *  RelationalOperator: '<S621>/Comparison4'
     *  Switch: '<S809>/Switch68'
     */
    VeSCPR_b_RaceMod_chrgOvrd = ((((CeOBCR_e_ChargingLvlAC2 == ((uint32)
        VeSCPR_e_ChargingLevel)) || (((uint32)VeSCPR_e_ChargingLevel) ==
        CeOBCR_e_ChargingLvlAC3)) && ((CeTIMR_e_RacePrep_Enabled == ((uint32)
        rtb_Comparison4_ob_tmp)) || rtb_Comparison4_ah)) && (rtb_Comparison4_ah ||
        ((VeSCPR_b_RacePrepAmbCheck) && (VeSCPR_b_RacePrepEVSysStatus))));

    /* Logic: '<S582>/Logical1' incorporates:
     *  Constant: '<S624>/Constant'
     *  Constant: '<S625>/Constant'
     *  Constant: '<S626>/Constant'
     *  Constant: '<S637>/Constant'
     *  Constant: '<S638>/Constant'
     *  Constant: '<S639>/Constant'
     *  Constant: '<S640>/Calib'
     *  Constant: '<S641>/Calib'
     *  Constant: '<S642>/Calib'
     *  DataStoreRead: '<S637>/StatusByte_LostCommBCM'
     *  DataStoreRead: '<S638>/StatusByte_LostCommRadio'
     *  DataStoreRead: '<S639>/StatusByte_LostCommTelematicCM'
     *  Logic: '<S614>/Logical6'
     *  Logic: '<S614>/Logical8'
     *  Logic: '<S614>/Logical9'
     *  Logic: '<S619>/Logical1'
     *  Logic: '<S619>/Logical13'
     *  Logic: '<S619>/Logical14'
     *  Logic: '<S619>/Logical15'
     *  Logic: '<S622>/Logical13'
     *  RelationalOperator: '<S614>/Comparison5'
     *  RelationalOperator: '<S614>/Comparison6'
     *  RelationalOperator: '<S614>/Comparison8'
     *  RelationalOperator: '<S615>/Comparison6'
     *  RelationalOperator: '<S637>/Relational Operator'
     *  RelationalOperator: '<S638>/Relational Operator'
     *  RelationalOperator: '<S639>/Relational Operator'
     *  S-Function (sfix_bitop): '<S637>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S638>/Bitwise Operator7'
     *  S-Function (sfix_bitop): '<S639>/Bitwise Operator7'
     *  Switch: '<S809>/Switch68'
     */
    VeSCPR_b_ForcedChrgReq = ((((((((VeSCPR_b_SmartEVSE_Dtctd) ||
        (VeSCPR_b_DoublePlugInOvrd)) || (VeSCPR_b_LowSOC_ChrgOvrd)) ||
        ((((uint32)VeSCPR_e_ChargingLevel) != CeOBCR_e_ChargingLvlDefault) &&
         ((((uint32)VeSCPR_e_ChargingLevel) != CeOBCR_e_ChargingLvlAC1) &&
          (((uint32)VeSCPR_e_ChargingLevel) != CeOBCR_e_ChargingLvlAC2)))) ||
        (VeSCPR_b_KeyOverride_Charge)) || ((VeSCPR_b_Ovrd_PerBattCond) ||
        (VeSCPR_b_Ovrd_PerCabinCond))) || (((((((sint32)
        SCPR_ac_DW.StatusByte_LostCommBCM) & 1) > 0) && (KeSCPR_b_LOC_BCM)) ||
        (((((sint32)SCPR_ac_DW.StatusByte_LostCommTelematicCM) & 1) > 0) &&
         (KeSCPR_b_LOC_TBM))) || (((((sint32)SCPR_ac_DW.StatusByte_LostCommRadio)
        & 1) > 0) && (KeSCPR_b_LOC_Radio)))) || (VeSCPR_b_RaceMod_chrgOvrd));

    /* Logic: '<S248>/Logical10' incorporates:
     *  Constant: '<S275>/Constant'
     *  DataStoreRead: '<S248>/Data Store Read4'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S248>/Comparison18'
     *  Switch: '<S793>/Switch1'
     */
    VeSCPR_b_FOTANow_Conflict = ((FeSCPR_b_FOTA_Conflict) && (((uint32)
        VeSCPR_e_FOTA_Install_Type) == CeCITR_e_FOTANow));

    /* Outputs for Enabled SubSystem: '<S212>/FOTA_CancelLogic' incorporates:
     *  EnablePort: '<S246>/Enable'
     */
    /* RelationalOperator: '<S248>/Comparison19' incorporates:
     *  RelationalOperator: '<S246>/Comparison12'
     *  RelationalOperator: '<S246>/Comparison15'
     *  RelationalOperator: '<S247>/Comparison1'
     *  RelationalOperator: '<S247>/Comparison3'
     *  RelationalOperator: '<S247>/Comparison7'
     *  RelationalOperator: '<S248>/Comparison20'
     *  Switch: '<S809>/Switch4'
     */
    VeSCPR_b_FOTACommCharge_tmp = SCPR_ac_B.Switch4_b;

    /* End of Outputs for SubSystem: '<S212>/FOTA_CancelLogic' */

    /* Logic: '<S248>/Logical9' incorporates:
     *  Constant: '<S274>/Constant'
     *  RelationalOperator: '<S248>/Comparison19'
     */
    VeSCPR_b_FOTACommCharge = ((VeSCPR_b_FOTANow_Conflict) && (((uint32)
        VeSCPR_b_FOTACommCharge_tmp) == CeCITR_e_Installation_Complete));

    /* Outputs for Enabled SubSystem: '<S5>/Est_SOC' incorporates:
     *  EnablePort: '<S115>/Enable'
     */
    /* RelationalOperator: '<S122>/Comparison7' incorporates:
     *  RelationalOperator: '<S171>/Comparison7'
     *  RelationalOperator: '<S353>/Comparison7'
     *  Switch: '<S809>/Switch94'
     */
    VeSCPR_e_ChrgTypeIsDC_tmp = SCPR_ac_B.Switch94;

    /* End of Outputs for SubSystem: '<S5>/Est_SOC' */

    /* RelationalOperator: '<S122>/Comparison7' incorporates:
     *  Constant: '<S127>/Constant'
     */
    VeSCPR_e_ChrgTypeIsDC = (((uint32)VeSCPR_e_ChrgTypeIsDC_tmp) == CeOBCR_e_DC);

    /* Logic: '<S293>/Logical1' incorporates:
     *  DataStoreRead: '<S293>/Data Store Read3'
     */
    rtb_Comparison4_ah = ((SCPR_ac_DW.NeSCPR_b_CoCh_VehLocation) &&
                          rtb_Logical11_i);

    /* Outputs for Enabled SubSystem: '<S122>/BEV_Button' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* Constant: '<S128>/Calib' */
    if (HeSCPR_b_CancelAndButtonLogic_enbl)
    {
        /* UnitDelay: '<S149>/Unit Delay' incorporates:
         *  Logic: '<S125>/Logical21'
         */
        rtb_Logical6_ko = ((VeSCPR_b_NoChScheduleSet) || (VeSCPR_e_ChrgTypeIsDC));

        /* Logic: '<S125>/Logical23' */
        rtb_Comparison4_du = (VeSCPR_b_SchChrgInWindow_tmp && (!rtb_Logical6_ko));

        /* UnitDelay: '<S125>/Unit Delay3' */
        rtb_AND_lnr = SCPR_ac_DW.UnitDelay3_DSTATE_l;

        /* Logic: '<S125>/Logical25' incorporates:
         *  Logic: '<S125>/Logical3'
         */
        rtb_ChrgDontChrg = !VeSCPR_e_ChrgTypeIsDC;

        /* Outputs for Atomic SubSystem: '<S125>/EdgeFalling1' */
        /* Logic: '<S132>/AND' incorporates:
         *  UnitDelay: '<S132>/Unit Delay'
         */
        rtb_AND_am = (VeSCPR_b_SchChrgInWindow_tmp &&
                      (SCPR_ac_DW.UnitDelay_DSTATE_iwd));

        /* Update for UnitDelay: '<S132>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_iwd = rtb_AND_dp;

        /* End of Outputs for SubSystem: '<S125>/EdgeFalling1' */

        /* Chart: '<S125>/CityBEV_Button' incorporates:
         *  Constant: '<S140>/Calib'
         *  DataStoreRead: '<S125>/Data Store Read'
         *  Logic: '<S125>/Logical25'
         *  Logic: '<S125>/Logical26'
         *  Switch: '<S809>/Switch94'
         *  UnitDelay: '<S125>/Unit Delay4'
         */
        /* Gateway: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/BEV_Button/CityBEV_Button */
        SCPR_ac_DW.ChargeType_prev = SCPR_ac_DW.ChargeType_start;
        SCPR_ac_DW.ChargeType_start = SCPR_ac_B.Switch94;

        /* During: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/BEV_Button/CityBEV_Button */
        if (((uint32)SCPR_ac_DW.is_active_c19_SCPR_ac) == 0U)
        {
            SCPR_ac_DW.ChargeType_prev = SCPR_ac_B.Switch94;

            /* Entry: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/BEV_Button/CityBEV_Button */
            SCPR_ac_DW.is_active_c19_SCPR_ac = 1U;

            /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/BEV_Button/CityBEV_Button */
            /* Transition: '<S130>:24' */
            SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_Init;

            /* Entry 'Init': '<S130>:20' */
            SCPR_ac_DW.Timer = 0.0F;

            /* Gain: '<S144>/Gain' */
            VeSCPR_b_ChrgDontChrg = false;
            SCPR_ac_B.NeSCPR_b_StopChrg = SCPR_ac_DW.NeSCPR_b_StopChrg;
        }
        else
        {
            guard1 = false;
            guard2 = false;
            guard3 = false;
            guard4 = false;
            guard5 = false;
            guard6 = false;
            guard7 = false;
            switch (SCPR_ac_DW.is_c19_SCPR_ac)
            {
              case SCPR_ac_IN_AllowChrg:
                /* Gain: '<S144>/Gain' */
                VeSCPR_b_ChrgDontChrg = true;

                /* During 'AllowChrg': '<S130>:1' */
                /* Transition: '<S130>:65' */
                if (!VeSCPR_b_PluggedIn)
                {
                    /* Transition: '<S130>:66' */
                    guard3 = true;
                }
                else if (rtb_AND_lnr && (VeSCPR_b_FOTACommCharge))
                {
                    /* Transition: '<S130>:83' */
                    SCPR_ac_B.FOTAImmediateCharge = true;
                    guard4 = true;
                }
                else if ((rtb_AND_lnr && (!SCPR_ac_DW.UnitDelay4_DSTATE_i)) &&
                         (VeSCPR_b_ButtonPressValid))
                {
                    /* Transition: '<S130>:47' */
                    SCPR_ac_B.ChargeNowButton = true;
                    guard4 = true;
                }
                else if ((rtb_Comparison4_du && (!SCPR_ac_B.FollowSch)) &&
                         (!SCPR_ac_B.ChargeNowButton))
                {
                    /* Transition: '<S130>:84' */
                    SCPR_ac_B.FollowSch = true;
                    guard4 = true;
                }
                else if (((SCPR_ac_DW.UnitDelay4_DSTATE_i) &&
                          ((VeSCPR_b_ButtonPressValid) ||
                           (SCPR_ac_B.TBM_StopCharge_In))) &&
                         (((!rtb_Comparison4_du) && (!rtb_Comparison4_ah)) ||
                          (SCPR_ac_DW.UnitDelay1_DSTATE_ni)))
                {
                    /* Transition: '<S130>:54' */
                    SCPR_ac_B.NeSCPR_b_StopChrg = true;
                    SCPR_ac_B.FollowSch = false;
                    guard5 = true;
                }
                else if ((SCPR_ac_DW.UnitDelay4_DSTATE_i) &&
                         ((VeSCPR_b_ButtonPressValid) ||
                          (SCPR_ac_B.TBM_StopCharge_In)))
                {
                    /* Transition: '<S130>:34' */
                    SCPR_ac_B.Cancel = true;
                    SCPR_ac_B.FollowSch = true;
                    guard5 = true;
                }
                else if (((((((rtb_Comparison4_du || rtb_Comparison4_ah) &&
                              (!rtb_AND_lnr)) &&
                             (!SCPR_ac_DW.UnitDelay1_DSTATE_ni)) &&
                            (!VeSCPR_b_ChrgNowTest1)) && (SCPR_ac_B.FollowSch)) &&
                          (!SCPR_ac_B.ChargeNowButton)) &&
                         (!SCPR_ac_B.FOTAImmediateCharge))
                {
                    /* Transition: '<S130>:36' */
                    guard5 = true;
                }
                else
                {
                    /* Transition: '<S130>:74' */
                    tmp_1 = SCPR_ac_DW.ChargeType_start;
                    if ((VeSCPR_b_PluggedIn) && ((SCPR_ac_DW.ChargeType_prev !=
                            tmp_1) && (((uint32)tmp_1) == CeOBCR_e_AC)))
                    {
                        /* Transition: '<S130>:73' */
                        guard3 = true;
                    }
                    else
                    {
                        SCPR_ac_DW.Timer += HeSCPR_t_ExecRate;
                    }
                }
                break;

              case SCPR_ac_IN_DontAllowChrg:
                /* Gain: '<S144>/Gain' */
                VeSCPR_b_ChrgDontChrg = false;

                /* During 'DontAllowChrg': '<S130>:3' */
                rtb_Logical11_i = !SCPR_ac_B.FollowSch;
                if (rtb_Logical11_i && rtb_Comparison4_du)
                {
                    /* Transition: '<S130>:89' */
                    SCPR_ac_B.FollowSch = true;
                    guard6 = true;
                }
                else
                {
                    tmp_0 = !SCPR_ac_DW.NeSCPR_b_StopChrg;
                    if ((rtb_Logical11_i && tmp_0) && rtb_Comparison4_ah)
                    {
                        /* Transition: '<S130>:90' */
                        SCPR_ac_B.FollowSch = true;
                        guard6 = true;
                    }
                    else
                    {
                        rtb_Logical11_i = !SCPR_ac_DW.UnitDelay4_DSTATE_i;
                        if (rtb_Logical11_i && ((VeSCPR_b_ButtonPressValid) ||
                                                (VeSCPR_b_ChrgNowTest1)))
                        {
                            /* Transition: '<S130>:35' */
                            SCPR_ac_B.ChargeNowButton = true;
                            SCPR_ac_B.FollowSch = false;
                            guard7 = true;
                        }
                        else if (rtb_Logical11_i && (VeSCPR_b_FOTACommCharge))
                        {
                            /* Transition: '<S130>:81' */
                            SCPR_ac_B.FOTAImmediateCharge = true;
                            guard7 = true;
                        }
                        else if ((rtb_AND_lnr ||
                                  (SCPR_ac_DW.UnitDelay1_DSTATE_ni)) &&
                                 (SCPR_ac_DW.Timer > KeSCPR_t_CancelChunkDelay))
                        {
                            /* Transition: '<S130>:37' */
                            SCPR_ac_B.FollowSch = true;
                            guard7 = true;
                        }
                        else if ((((rtb_Logical11_i && (!SCPR_ac_B.FollowSch)) &&
                                   tmp_0) && (!rtb_Comparison4_du)) &&
                                 rtb_AND_am)
                        {
                            /* Transition: '<S130>:91' */
                            guard7 = true;
                        }
                        else
                        {
                            /* Transition: '<S130>:68' */
                            if (!VeSCPR_b_PluggedIn)
                            {
                                /* Transition: '<S130>:69' */
                                /* Exit 'DontAllowChrg': '<S130>:3' */
                                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_Init;

                                /* Entry 'Init': '<S130>:20' */
                                SCPR_ac_DW.Timer = 0.0F;
                                SCPR_ac_B.NeSCPR_b_StopChrg =
                                    SCPR_ac_DW.NeSCPR_b_StopChrg;
                            }
                            else
                            {
                                SCPR_ac_DW.Timer += HeSCPR_t_ExecRate;
                                SCPR_ac_B.Cancel = false;
                            }
                        }
                    }
                }
                break;

              default:
                /* Gain: '<S144>/Gain' */
                VeSCPR_b_ChrgDontChrg = false;

                /* During 'Init': '<S130>:20' */
                rtb_Logical11_i = ((!rtb_Comparison4_du) && ((!rtb_Logical11_i) ||
                                    (!rtb_ChrgDontChrg)));
                if (((VeSCPR_b_PluggedIn) && (SCPR_ac_DW.NeSCPR_b_StopChrg)) &&
                        (rtb_Comparison4_ah || rtb_Logical11_i))
                {
                    /* Transition: '<S130>:56' */
                    /* Transition: '<S130>:57' */
                    guard1 = true;
                }
                else if (((VeSCPR_b_PluggedIn) && rtb_Logical11_i) &&
                         (SCPR_ac_DW.Timer > KeSCPR_t_InitDelay))
                {
                    /* Transition: '<S130>:22' */
                    /* Transition: '<S130>:23' */
                    guard2 = true;
                }
                else if (((VeSCPR_b_PluggedIn) && rtb_AND_lnr) &&
                         (SCPR_ac_DW.Timer > KeSCPR_t_InitDelay))
                {
                    /* Transition: '<S130>:49' */
                    SCPR_ac_B.FollowSch = true;

                    /* Transition: '<S130>:50' */
                    guard2 = true;
                }
                else if ((VeSCPR_b_PluggedIn) && (SCPR_ac_DW.Timer >
                          KeSCPR_t_InitDelay))
                {
                    /* Transition: '<S130>:26' */
                    /* Transition: '<S130>:27' */
                    guard1 = true;
                }
                else
                {
                    SCPR_ac_DW.Timer += HeSCPR_t_ExecRate;
                }
                break;
            }

            if (guard7)
            {
                /* Exit 'DontAllowChrg': '<S130>:3' */
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_AllowChrg;

                /* Gain: '<S144>/Gain' */
                /* Entry 'AllowChrg': '<S130>:1' */
                VeSCPR_b_ChrgDontChrg = true;
                SCPR_ac_DW.Timer = 0.0F;
                SCPR_ac_B.NeSCPR_b_StopChrg = false;
            }

            if (guard6)
            {
                /* Exit 'DontAllowChrg': '<S130>:3' */
                SCPR_ac_B.NeSCPR_b_StopChrg = false;
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_DontAllowChrg;

                /* Entry 'DontAllowChrg': '<S130>:3' */
                SCPR_ac_DW.Timer = 0.0F;
                SCPR_ac_B.ChargeNowButton = false;
            }

            if (guard5)
            {
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_DontAllowChrg;

                /* Gain: '<S144>/Gain' */
                /* Entry 'DontAllowChrg': '<S130>:3' */
                VeSCPR_b_ChrgDontChrg = false;
                SCPR_ac_DW.Timer = 0.0F;
                SCPR_ac_B.ChargeNowButton = false;
            }

            if (guard4)
            {
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_AllowChrg;

                /* Entry 'AllowChrg': '<S130>:1' */
                SCPR_ac_DW.Timer = 0.0F;
                SCPR_ac_B.NeSCPR_b_StopChrg = false;
            }

            if (guard3)
            {
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_Init;

                /* Entry 'Init': '<S130>:20' */
                SCPR_ac_DW.Timer = 0.0F;

                /* Gain: '<S144>/Gain' */
                VeSCPR_b_ChrgDontChrg = false;
                SCPR_ac_B.NeSCPR_b_StopChrg = SCPR_ac_DW.NeSCPR_b_StopChrg;
            }

            if (guard2)
            {
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_AllowChrg;

                /* Gain: '<S144>/Gain' */
                /* Entry 'AllowChrg': '<S130>:1' */
                VeSCPR_b_ChrgDontChrg = true;
                SCPR_ac_DW.Timer = 0.0F;
                SCPR_ac_B.NeSCPR_b_StopChrg = false;
            }

            if (guard1)
            {
                SCPR_ac_DW.is_c19_SCPR_ac = SCPR_ac_IN_DontAllowChrg;

                /* Entry 'DontAllowChrg': '<S130>:3' */
                SCPR_ac_DW.Timer = 0.0F;
                SCPR_ac_B.ChargeNowButton = false;
            }
        }

        /* End of Chart: '<S125>/CityBEV_Button' */

        /* DataStoreWrite: '<S125>/Data Store Write1' */
        SCPR_ac_DW.NeSCPR_b_StopChrg = SCPR_ac_B.NeSCPR_b_StopChrg;

        /* Logic: '<S125>/Logical20' incorporates:
         *  Logic: '<S125>/Logical19'
         *  Logic: '<S125>/Logical22'
         */
        rtb_Logical6_ko = ((!rtb_Logical6_ko) || rtb_AND_dp);

        /* Gain: '<S145>/Gain' */
        VeSCPR_b_CNButton_SF = SCPR_ac_B.ChargeNowButton;

        /* Outputs for Atomic SubSystem: '<S125>/Signal Latch On With Reset' */
        /* Outputs for Atomic SubSystem: '<S125>/EdgeFalling' */
        /* Logic: '<S148>/OR1' incorporates:
         *  DataStoreRead: '<S125>/Data Store Read1'
         *  Logic: '<S131>/AND'
         *  Logic: '<S131>/OR1'
         *  Logic: '<S148>/NOT'
         *  Logic: '<S148>/OR'
         *  UnitDelay: '<S131>/Unit Delay'
         *  UnitDelay: '<S148>/Unit Delay'
         */
        rtb_Comparison4_ah = ((SCPR_ac_DW.NeSCPR_b_StopChrg) ||
                              (((VeSCPR_b_PluggedIn) ||
                                (!SCPR_ac_DW.UnitDelay_DSTATE_ptt)) &&
                               (SCPR_ac_DW.UnitDelay_DSTATE_e5w)));

        /* End of Outputs for SubSystem: '<S125>/EdgeFalling' */

        /* Update for UnitDelay: '<S148>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_e5w = rtb_Comparison4_ah;

        /* End of Outputs for SubSystem: '<S125>/Signal Latch On With Reset' */

        /* Switch: '<S125>/Switch1' */
        if (!VeSCPR_e_ChrgTypeIsDC)
        {
            /* Switch: '<S125>/Switch1' incorporates:
             *  DataStoreRead: '<S125>/Data Store Read1'
             */
            rtb_Comparison4_ah = SCPR_ac_DW.NeSCPR_b_StopChrg;
        }

        /* End of Switch: '<S125>/Switch1' */

        /* Gain: '<S146>/Gain' */
        VeSCPR_b_FollowSch_SF = SCPR_ac_B.FollowSch;

        /* Gain: '<S147>/Gain' */
        VeSCPR_b_FOTAImmedCharge = SCPR_ac_B.FOTAImmediateCharge;

        /* Switch: '<S141>/Switch1' incorporates:
         *  DataStoreRead: '<S125>/Data Store Read3'
         *  Logic: '<S125>/Logical10'
         *  Logic: '<S125>/Logical12'
         *  Logic: '<S125>/Logical13'
         *  Logic: '<S125>/Logical14'
         *  Logic: '<S125>/Logical15'
         *  Logic: '<S125>/Logical6'
         *  Logic: '<S125>/Logical7'
         *  Logic: '<S125>/Logical8'
         *  Switch: '<S141>/Switch2'
         *  Switch: '<S141>/Switch3'
         *  Switch: '<S141>/Switch4'
         */
        if ((rtb_Logical6_ko && ((VeSCPR_b_CNButton_SF) ||
                                 (VeSCPR_b_ChrgNowTest1))) &&
                (VeSCPR_b_PluggedIn))
        {
            /* Switch: '<S141>/Switch1' incorporates:
             *  Constant: '<S136>/Constant'
             */
            VeSCPR_e_ButtonState = CeSCPR_e_ChargeNow;
        }
        else if ((rtb_Comparison4_ah || (SCPR_ac_DW.NeSCPR_b_StopChrg)) &&
                 (VeSCPR_b_PluggedIn))
        {
            /* Switch: '<S141>/Switch2' incorporates:
             *  Constant: '<S134>/Constant'
             *  Switch: '<S141>/Switch1'
             */
            VeSCPR_e_ButtonState = CeSCPR_e_StopCharge;
        }
        else if ((rtb_Logical6_ko && (VeSCPR_b_FollowSch_SF)) &&
                 (VeSCPR_b_PluggedIn))
        {
            /* Switch: '<S141>/Switch3' incorporates:
             *  Constant: '<S137>/Constant'
             *  Switch: '<S141>/Switch1'
             *  Switch: '<S141>/Switch2'
             */
            VeSCPR_e_ButtonState = CeSCPR_e_FollowSchedule;
        }
        else if ((rtb_Logical6_ko && (VeSCPR_b_PluggedIn)) ||
                 ((VeSCPR_b_PluggedIn) && (VeSCPR_b_FOTAImmedCharge)))
        {
            /* Switch: '<S141>/Switch4' incorporates:
             *  Constant: '<S135>/Constant'
             *  Switch: '<S141>/Switch1'
             *  Switch: '<S141>/Switch2'
             *  Switch: '<S141>/Switch3'
             */
            VeSCPR_e_ButtonState = CeSCPR_e_ImmediateCharge;
        }
        else
        {
            /* Switch: '<S141>/Switch1' incorporates:
             *  Constant: '<S138>/Constant'
             *  Switch: '<S141>/Switch2'
             *  Switch: '<S141>/Switch3'
             *  Switch: '<S141>/Switch4'
             */
            VeSCPR_e_ButtonState = CeSCPR_e_Default;
        }

        /* End of Switch: '<S141>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S150>/EdgeRising' */
        /* Logic: '<S152>/AND' incorporates:
         *  Logic: '<S152>/OR1'
         *  UnitDelay: '<S152>/Unit Delay'
         */
        rtb_Logical11_i = ((VeSCPR_b_ButtonPressValid) &&
                           (!SCPR_ac_DW.UnitDelay_DSTATE_ef));

        /* Update for UnitDelay: '<S152>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_ef = VeSCPR_b_ButtonPressValid;

        /* End of Outputs for SubSystem: '<S150>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S150>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S156>/EdgeRising' */
        /* UnitDelay: '<S149>/Unit Delay' incorporates:
         *  UnitDelay: '<S157>/Unit Delay'
         */
        rtb_Logical6_ko = SCPR_ac_DW.UnitDelay_DSTATE_k0;

        /* Update for UnitDelay: '<S157>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_k0 = VeSCPR_b_InChrgWindow;

        /* Switch: '<S156>/Switch1' incorporates:
         *  Logic: '<S156>/OR'
         *  Logic: '<S156>/OR1'
         *  Logic: '<S157>/AND'
         *  Logic: '<S157>/OR1'
         */
        if ((!VeSCPR_b_InChrgWindow) || ((VeSCPR_b_InChrgWindow) &&
                (!rtb_Logical6_ko)))
        {
            /* Switch: '<S156>/Switch1' incorporates:
             *  Constant: '<S156>/Constant Value1'
             */
            rtb_Switch1_ls = 0.0F;
        }
        else
        {
            /* Switch: '<S156>/Switch1' incorporates:
             *  Constant: '<S155>/Calib'
             *  Constant: '<S156>/Constant Value'
             *  MinMax: '<S156>/Minimum'
             *  Sum: '<S156>/Summation'
             *  UnitDelay: '<S156>/Unit Delay'
             */
            rtb_Switch1_ls = fminf(KeSCPR_t_CancelChunkDelay,
                                   SCPR_ac_DW.UnitDelay_DSTATE_cu + 1.0F);
        }

        /* End of Switch: '<S156>/Switch1' */
        /* End of Outputs for SubSystem: '<S156>/EdgeRising' */

        /* Logic: '<S156>/AND' incorporates:
         *  Constant: '<S155>/Calib'
         *  RelationalOperator: '<S156>/Greater  Than'
         */
        rtb_Logical6_ko = ((VeSCPR_b_InChrgWindow) && (rtb_Switch1_ls >=
                            KeSCPR_t_CancelChunkDelay));

        /* Update for UnitDelay: '<S156>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_cu = rtb_Switch1_ls;

        /* End of Outputs for SubSystem: '<S150>/Turn On Delay Sample' */

        /* Outputs for Atomic SubSystem: '<S150>/EdgeRising1' */
        /* Logic: '<S153>/OR1' incorporates:
         *  UnitDelay: '<S153>/Unit Delay'
         */
        rtb_Comparison4_du = !SCPR_ac_DW.UnitDelay_DSTATE_cec;

        /* Update for UnitDelay: '<S153>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_cec = rtb_Logical6_ko;

        /* End of Outputs for SubSystem: '<S150>/EdgeRising1' */

        /* Logic: '<S150>/Logical11' incorporates:
         *  Logic: '<S150>/Logical2'
         */
        rtb_AND_lnr = !VeSCPR_b_ActvCharging;

        /* Outputs for Atomic SubSystem: '<S150>/EdgeFalling1' */
        /* Outputs for Atomic SubSystem: '<S150>/EdgeRising1' */
        /* Logic: '<S150>/Logical13' incorporates:
         *  Constant: '<S154>/Constant'
         *  Logic: '<S150>/Logical1'
         *  Logic: '<S150>/Logical11'
         *  Logic: '<S150>/Logical12'
         *  Logic: '<S151>/AND'
         *  Logic: '<S153>/AND'
         *  RelationalOperator: '<S150>/Comparison3'
         *  RelationalOperator: '<S150>/Comparison4'
         *  UnitDelay: '<S150>/Unit Delay3'
         *  UnitDelay: '<S151>/Unit Delay'
         */
        VeSCPR_b_ResetHCPOvrd = ((((VeSCPR_b_ChrgNowRstLatch_tmp &&
            (SCPR_ac_DW.UnitDelay_DSTATE_no)) || (rtb_AND_lnr && rtb_Logical11_i))
            || (rtb_Logical6_ko && rtb_Comparison4_du)) || (((((uint32)
            SCPR_ac_DW.UnitDelay3_DSTATE_c) == CeTIMR_e_RacePrep_Off) &&
            (((uint32)rtb_Comparison4_ob_tmp) != CeTIMR_e_RacePrep_Off)) &&
            rtb_AND_lnr));

        /* End of Outputs for SubSystem: '<S150>/EdgeRising1' */
        /* End of Outputs for SubSystem: '<S150>/EdgeFalling1' */

        /* Outputs for Atomic SubSystem: '<S125>/Signal Latch On With Reset1' */
        /* Logic: '<S149>/OR1' incorporates:
         *  Logic: '<S125>/Logical11'
         *  Logic: '<S125>/Logical18'
         *  Logic: '<S149>/NOT'
         *  Logic: '<S149>/OR'
         *  UnitDelay: '<S149>/Unit Delay'
         */
        VeSCPR_b_LatchButtonOvrd = ((((VeSCPR_b_ForcedChrgReq) &&
            ((VeSCPR_b_ButtonPressValid) || (SCPR_ac_B.TBM_StopCharge_In))) &&
            (VeSCPR_b_ActvCharging)) || ((!VeSCPR_b_ResetHCPOvrd) &&
            (SCPR_ac_DW.UnitDelay_DSTATE_iy5)));

        /* Update for UnitDelay: '<S149>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_iy5 = VeSCPR_b_LatchButtonOvrd;

        /* End of Outputs for SubSystem: '<S125>/Signal Latch On With Reset1' */

        /* Logic: '<S125>/Logical9' */
        SCPR_ac_B.Logical9 = (rtb_Comparison4_ah || (VeSCPR_b_LatchButtonOvrd));

        /* Gain: '<S143>/Gain' */
        VeSCPR_b_CancelChunk = SCPR_ac_B.Cancel;

        /* Switch: '<S125>/Switch2' incorporates:
         *  Constant: '<S142>/Calib'
         *  Logic: '<S125>/Logical3'
         *  Logic: '<S125>/Logical4'
         */
        VeSCPR_b_CancelChunk_BEV = ((rtb_ChrgDontChrg && (KeSCPR_b_isBEV)) &&
            (VeSCPR_b_CancelChunk));

        /* Switch: '<S125>/Switch3' */
        if (VeSCPR_e_ChrgTypeIsDC)
        {
            /* Switch: '<S125>/Switch3' incorporates:
             *  Constant: '<S133>/Constant'
             *  Constant: '<S139>/Constant'
             *  Logic: '<S125>/Logical2'
             *  RelationalOperator: '<S125>/Comparison1'
             *  RelationalOperator: '<S125>/Comparison2'
             *  Switch: '<S809>/Switch2'
             */
            rtb_ChrgDontChrg = ((CeOBCR_e_DCChrg_Wait == ((uint32)
                                  VeSCPR_e_ChrgSysStat)) || (((uint32)
                                  VeSCPR_e_ChrgSysStat) == CeOBCR_e_Charging));
        }
        else
        {
            /* Switch: '<S125>/Switch3' */
            rtb_ChrgDontChrg = VeSCPR_b_ActvCharging;
        }

        /* End of Switch: '<S125>/Switch3' */
    }

    /* End of Outputs for SubSystem: '<S122>/BEV_Button' */

    /* Chart: '<S129>/PHEVButton' incorporates:
     *  Constant: '<S168>/Calib'
     *  Logic: '<S129>/Logical4'
     */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/PHEV_Button/PHEVButton */
    /* During: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/PHEV_Button/PHEVButton */
    if (((uint32)SCPR_ac_DW.is_active_c35_SCPR_ac) == 0U)
    {
        /* Entry: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/PHEV_Button/PHEVButton */
        SCPR_ac_DW.is_active_c35_SCPR_ac = 1U;

        /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/ButtonLogic/ChargeRequest/PHEV_Button/PHEVButton */
        /* Transition: '<S169>:13' */
        SCPR_ac_DW.is_c35_SCPR_ac = SCP_IN_DisableChargeNowOverride;

        /* Gain: '<S170>/Gain' */
        /* Entry 'DisableChargeNowOverride': '<S169>:1' */
        VeSCPR_b_ChrgDontChrg_PHEV = false;
    }
    else if (((sint32)SCPR_ac_DW.is_c35_SCPR_ac) == 1)
    {
        /* Gain: '<S170>/Gain' */
        VeSCPR_b_ChrgDontChrg_PHEV = true;

        /* During 'ChargeNowOverride': '<S169>:3' */
        if ((VeSCPR_b_ChrgNowRstLatch) || ((KeSCPR_b_TBMStopChrg_PHEVenbl) &&
                (SCPR_ac_B.TBM_StopCharge_In)))
        {
            /* Transition: '<S169>:5' */
            SCPR_ac_DW.is_c35_SCPR_ac = SCP_IN_DisableChargeNowOverride;

            /* Gain: '<S170>/Gain' */
            /* Entry 'DisableChargeNowOverride': '<S169>:1' */
            VeSCPR_b_ChrgDontChrg_PHEV = false;
        }
    }
    else
    {
        /* Gain: '<S170>/Gain' */
        VeSCPR_b_ChrgDontChrg_PHEV = false;

        /* During 'DisableChargeNowOverride': '<S169>:1' */
        if (((VeSCPR_b_ButtonPressValid) || (VeSCPR_b_ChrgNowTest1)) ||
                (VeSCPR_b_FOTACommCharge))
        {
            /* Transition: '<S169>:4' */
            SCPR_ac_DW.is_c35_SCPR_ac = SCPR_ac_IN_ChargeNowOverride;

            /* Gain: '<S170>/Gain' */
            /* Entry 'ChargeNowOverride': '<S169>:3' */
            VeSCPR_b_ChrgDontChrg_PHEV = true;
        }
    }

    /* End of Chart: '<S129>/PHEVButton' */

    /* Logic: '<S214>/Logical2' */
    rtb_Logical6_ko = (rtb_RelatonalOperator2_idx_2 && tmp);

    /* Logic: '<S171>/Logical1' incorporates:
     *  Constant: '<S175>/Constant'
     *  Constant: '<S177>/Constant'
     *  Constant: '<S178>/Constant'
     *  Logic: '<S171>/Logical3'
     *  Logic: '<S171>/Logical8'
     *  RelationalOperator: '<S171>/Comparison1'
     *  RelationalOperator: '<S171>/Comparison6'
     *  RelationalOperator: '<S171>/Comparison7'
     *  Switch: '<S141>/Switch1'
     */
    VeSCPR_b_IconsOff = ((VeSCPR_b_ChrgNowRstLatch_tmp || ((((uint32)
        VeSCPR_e_ButtonState) == CeSCPR_e_StopCharge) && ((rtb_Logical6_ko ||
        (((uint32)VeSCPR_e_ChrgTypeIsDC_tmp) == CeOBCR_e_DC)) ||
                            (VeSCPR_b_ForcedChrgReq)))) || (((uint32)
                           VeSCPR_e_ButtonState) == CeSCPR_e_Default));

    /* Logic: '<S171>/Logical4' incorporates:
     *  Constant: '<S174>/Constant'
     *  Constant: '<S180>/Constant'
     *  RelationalOperator: '<S171>/Comparison1'
     *  RelationalOperator: '<S171>/Comparison2'
     *  RelationalOperator: '<S171>/Comparison4'
     *  Switch: '<S141>/Switch1'
     */
    VeSCPR_b_Icon1_Cond = (((((uint32)VeSCPR_e_ButtonState) ==
        CeSCPR_e_ImmediateCharge) || (VeSCPR_b_ForcedChrgReq)) || (((uint32)
        VeSCPR_e_ButtonState) == CeSCPR_e_ChargeNow));

    /* Logic: '<S171>/Logical9' incorporates:
     *  Constant: '<S179>/Constant'
     *  Constant: '<S181>/Constant'
     *  Constant: '<S182>/Constant'
     *  Logic: '<S171>/Logical5'
     *  Logic: '<S171>/Logical6'
     *  Logic: '<S171>/Logical7'
     *  RelationalOperator: '<S171>/Comparison1'
     *  RelationalOperator: '<S171>/Comparison3'
     *  RelationalOperator: '<S171>/Comparison5'
     *  RelationalOperator: '<S171>/Comparison8'
     *  Switch: '<S141>/Switch1'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    VeSCPR_b_Icon2_Cond = (((((uint32)VeSCPR_e_ButtonState) ==
        CeSCPR_e_FollowSchedule) || ((((uint32)VeSCPR_e_ButtonState) ==
        CeSCPR_e_StopCharge) && (!rtb_Logical6_ko))) && (((uint32)
        SCPR_ac_DW.UnitDelay_DSTATE_hc) != CeCITR_e_CPIM_Icon_ON));

    /* Switch: '<S171>/Switch2' */
    if (VeSCPR_b_Icon1_Cond)
    {
        /* Switch: '<S171>/Switch2' incorporates:
         *  Constant: '<S186>/Constant'
         */
        rtb_Switch2_ac = CeCITR_e_CPIM_Icon_ON;
    }
    else
    {
        /* Switch: '<S171>/Switch2' incorporates:
         *  Constant: '<S185>/Constant'
         */
        rtb_Switch2_ac = CeCITR_e_CPIM_Icon_OFF;
    }

    /* End of Switch: '<S171>/Switch2' */

    /* Switch: '<S171>/Switch' incorporates:
     *  Switch: '<S171>/Switch1'
     */
    if (VeSCPR_b_IconsOff)
    {
        /* Switch: '<S171>/Switch' incorporates:
         *  Constant: '<S183>/Constant'
         */
        VeSCPR_e_Icon1_BEV_Cmd = CeCITR_e_CPIM_Icon_OFF;

        /* Switch: '<S171>/Switch1' incorporates:
         *  Constant: '<S184>/Constant'
         */
        VeSCPR_e_Icon2_BEV_Cmd = CeCITR_e_CPIM_Icon_OFF;
    }
    else
    {
        /* Switch: '<S171>/Switch' incorporates:
         *  Switch: '<S171>/Switch2'
         */
        VeSCPR_e_Icon1_BEV_Cmd = rtb_Switch2_ac;

        /* Switch: '<S171>/Switch3' */
        if (VeSCPR_b_Icon2_Cond)
        {
            /* Switch: '<S171>/Switch1' incorporates:
             *  Constant: '<S176>/Constant'
             */
            VeSCPR_e_Icon2_BEV_Cmd = CeCITR_e_CPIM_Icon_ON;
        }
        else
        {
            /* Switch: '<S171>/Switch1' incorporates:
             *  Constant: '<S187>/Constant'
             */
            VeSCPR_e_Icon2_BEV_Cmd = CeCITR_e_CPIM_Icon_OFF;
        }

        /* End of Switch: '<S171>/Switch3' */
    }

    /* End of Switch: '<S171>/Switch' */

    /* Outputs for Atomic SubSystem: '<S173>/EdgeFalling' */
    /* UnitDelay: '<S445>/Unit Delay' incorporates:
     *  UnitDelay: '<S190>/Unit Delay'
     */
    rtb_Comparison4_du = SCPR_ac_DW.UnitDelay_DSTATE_m0f;

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_m0f = VeSCPR_b_ForcedChrgReq;

    /* Outputs for Atomic SubSystem: '<S173>/Counter Reset  Enabled ' */
    /* Switch: '<S189>/Switch1' incorporates:
     *  Logic: '<S190>/AND'
     *  Logic: '<S190>/OR1'
     *  Switch: '<S189>/Switch2'
     */
    if ((!VeSCPR_b_ForcedChrgReq) && rtb_Comparison4_du)
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Constant: '<S189>/Constant Value2'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (VeSCPR_b_ForcedChrgReq)
    {
        /* Switch: '<S189>/Switch2' incorporates:
         *  Constant: '<S189>/Constant Value1'
         *  Sum: '<S189>/Subtraction'
         *  Switch: '<S189>/Switch1'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_nx) + 1U);
    }
    else
    {
        /* Switch: '<S189>/Switch1' incorporates:
         *  Switch: '<S189>/Switch2'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        rtb_Switch1_hi = SCPR_ac_DW.UnitDelay_DSTATE_nx;
    }

    /* End of Switch: '<S189>/Switch1' */
    /* End of Outputs for SubSystem: '<S173>/EdgeFalling' */

    /* Update for UnitDelay: '<S189>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nx = rtb_Switch1_hi;

    /* End of Outputs for SubSystem: '<S173>/Counter Reset  Enabled ' */

    /* Logic: '<S173>/Logical1' incorporates:
     *  Constant: '<S195>/Calib'
     *  RelationalOperator: '<S173>/Comparison'
     */
    VeSCPR_b_I1_Test1 = ((rtb_Logical6_ko || (VeSCPR_b_ChrgDontChrg_PHEV)) ||
                         (KeSCPR_Cnt_IconDbnc < ((float32)rtb_Switch1_hi)));

    /* Logic: '<S173>/Logical2' */
    VeSCPR_b_I1_Test2 = ((VeSCPR_b_I1_Test1) && (VeSCPR_b_PluggedIn));

    /* Switch: '<S173>/Switch' */
    if (VeSCPR_b_I1_Test2)
    {
        /* Switch: '<S173>/Switch' incorporates:
         *  Constant: '<S191>/Constant'
         */
        VeSCPR_e_Icon1_PHEV_Cmd = CeCITR_e_CPIM_Icon_ON;
    }
    else
    {
        /* Switch: '<S173>/Switch' incorporates:
         *  Constant: '<S192>/Constant'
         */
        VeSCPR_e_Icon1_PHEV_Cmd = CeCITR_e_CPIM_Icon_OFF;
    }

    /* End of Switch: '<S173>/Switch' */

    /* Switch: '<S172>/Switch' incorporates:
     *  Constant: '<S188>/Calib'
     */
    if (KeSCPR_b_isBEV)
    {
        /* Switch: '<S172>/Switch' incorporates:
         *  Switch: '<S171>/Switch'
         */
        VeSCPR_e_Icon1_Cmd = VeSCPR_e_Icon1_BEV_Cmd;
    }
    else
    {
        /* Switch: '<S172>/Switch' incorporates:
         *  Switch: '<S173>/Switch'
         */
        VeSCPR_e_Icon1_Cmd = VeSCPR_e_Icon1_PHEV_Cmd;
    }

    /* End of Switch: '<S172>/Switch' */

    /* Logic: '<S173>/Logical4' incorporates:
     *  Logic: '<S173>/Logical3'
     *  Logic: '<S173>/Logical5'
     */
    VeSCPR_b_I2_Test1 = (((!VeSCPR_b_I1_Test2) && (VeSCPR_b_PluggedIn)) &&
                         (!rtb_Logical6_ko));

    /* Switch: '<S173>/Switch1' */
    if (VeSCPR_b_I2_Test1)
    {
        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S194>/Constant'
         */
        VeSCPR_e_Icon2_PHEV_Cmd = CeCITR_e_CPIM_Icon_ON;
    }
    else
    {
        /* Switch: '<S173>/Switch1' incorporates:
         *  Constant: '<S193>/Constant'
         */
        VeSCPR_e_Icon2_PHEV_Cmd = CeCITR_e_CPIM_Icon_OFF;
    }

    /* End of Switch: '<S173>/Switch1' */

    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S188>/Calib'
     */
    if (KeSCPR_b_isBEV)
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Switch: '<S171>/Switch1'
         */
        VeSCPR_e_Icon2_Cmd = VeSCPR_e_Icon2_BEV_Cmd;
    }
    else
    {
        /* Switch: '<S172>/Switch1' incorporates:
         *  Switch: '<S173>/Switch1'
         */
        VeSCPR_e_Icon2_Cmd = VeSCPR_e_Icon2_PHEV_Cmd;
    }

    /* End of Switch: '<S172>/Switch1' */

    /* DataStoreWrite: '<S290>/Data Store Write1' */
    SCPR_ac_DW.NeSCPR_b_ChrgComplete = VeSCPR_b_SCPRChargeComplete;

    /* Logic: '<S293>/Logical19' incorporates:
     *  Logic: '<S293>/Logical21'
     */
    rtb_Comparison4_ah = (((SCPR_ac_B.TBM_Vehicle_Location_In) &&
                           (VeSCPR_b_PluggedIn)) || rtb_AND_ck);

    /* Outputs for Atomic SubSystem: '<S293>/EdgeRising1' */
    /* Logic: '<S304>/OR1' incorporates:
     *  UnitDelay: '<S304>/Unit Delay'
     */
    rtb_Logical11_i = !SCPR_ac_DW.UnitDelay_DSTATE_cj2;

    /* Update for UnitDelay: '<S304>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cj2 = rtb_Comparison4_ah;

    /* Switch: '<S293>/Switch1' incorporates:
     *  Logic: '<S304>/AND'
     */
    if (rtb_Comparison4_ah && rtb_Logical11_i)
    {
        /* RelationalOperator: '<S391>/Comparison4' */
        rtb_Comparison4_ah = SCPR_ac_B.TBM_Vehicle_Location_In;
    }
    else
    {
        /* RelationalOperator: '<S391>/Comparison4' incorporates:
         *  DataStoreRead: '<S293>/Data Store Read1'
         */
        rtb_Comparison4_ah = SCPR_ac_DW.NeSCPR_b_CoCh_VehLocation;
    }

    /* End of Switch: '<S293>/Switch1' */
    /* End of Outputs for SubSystem: '<S293>/EdgeRising1' */

    /* Logic: '<S293>/Logical10' incorporates:
     *  DataStoreWrite: '<S293>/Data Store Write'
     */
    SCPR_ac_DW.NeSCPR_b_CoCh_VehLocation = ((VeSCPR_b_PluggedIn) &&
        rtb_Comparison4_ah);

    /* Logic: '<S214>/Logical3' */
    rtb_Logical11_i = (tmp_2 && tmp_3);

    /* RelationalOperator: '<S391>/Comparison4' incorporates:
     *  Logic: '<S214>/Logical22'
     *  UnitDelay: '<S214>/Unit Delay2'
     */
    rtb_Comparison4_ah = ((SCPR_ac_DW.UnitDelay2_DSTATE_ip) && rtb_AND_ck);

    /* Logic: '<S214>/Logical9' incorporates:
     *  Logic: '<S295>/Logical5'
     *  Logic: '<S295>/Logical7'
     */
    VeSCPR_b_xMinInWindFull = ((rtb_Switch4_m && (SCPR_ac_B.DataStoreRead6_a)) ||
        (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq && (SCPR_ac_B.DataStoreRead13_d)));

    /* Logic: '<S210>/Logical25' incorporates:
     *  DataStoreRead: '<S210>/Data Store Read10'
     *  DataStoreRead: '<S210>/Data Store Read3'
     */
    VeSCPR_b_CancelActive = ((SCPR_ac_DW.NeSCPR_b_AllowCancel) ||
        (SCPR_ac_DW.NeSCPR_b_xMinUFCancel));
    for (i = 0; i < 7; i++)
    {
        /* Switch: '<S701>/Switch' */
        if (rtb_Merge_n)
        {
            /* Switch: '<S701>/Switch' */
            rtb_Switch_jl[i] = SCPR_ac_B.Chrg_Sch_Array_h.x_schStart[i];
        }
        else
        {
            /* Switch: '<S701>/Switch' */
            rtb_Switch_jl[i] = -1;
        }
    }

    for (i = 0; i < 7; i++)
    {
        /* Switch: '<S701>/Switch' */
        if (rtb_Merge_n)
        {
            /* Switch: '<S701>/Switch' */
            rtb_Switch_jl[i + 7] = SCPR_ac_B.Chrg_Sch_Array_h.x_schEnd[i];
        }
        else
        {
            /* Switch: '<S701>/Switch' */
            rtb_Switch_jl[i + 7] = -1;
        }
    }

    for (i = 0; i < 7; i++)
    {
        /* Switch: '<S688>/Switch' */
        if (rtb_Logical1_oz)
        {
            /* Switch: '<S688>/Switch' */
            rtb_Switch_gp[i] = SCPR_ac_B.Chrg_Sch_Array.x_schStart[i];
        }
        else
        {
            /* Switch: '<S688>/Switch' */
            rtb_Switch_gp[i] = -1;
        }
    }

    for (i = 0; i < 7; i++)
    {
        /* Switch: '<S688>/Switch' */
        if (rtb_Logical1_oz)
        {
            /* Switch: '<S688>/Switch' */
            rtb_Switch_gp[i + 7] = SCPR_ac_B.Chrg_Sch_Array.x_schEnd[i];
        }
        else
        {
            /* Switch: '<S688>/Switch' */
            rtb_Switch_gp[i + 7] = -1;
        }
    }

    /* Sum: '<S663>/Sum' incorporates:
     *  Constant: '<S663>/Constant Value1'
     *  Product: '<S663>/Product'
     */
    SCPR_ac_B.Sum = (sint16)(((sint16)(SCPR_ac_B.DataStoreRead14 * 60)) +
        SCPR_ac_B.DataStoreRead15_n);

    /* Switch: '<S664>/Switch' incorporates:
     *  Constant: '<S664>/Constant Value1'
     *  Constant: '<S664>/Constant Value16'
     *  Logic: '<S664>/Logical1'
     *  Logic: '<S664>/Logical2'
     *  RelationalOperator: '<S664>/Comparison7'
     *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator7'
     *  Switch: '<S664>/Switch1'
     */
    if ((!SCPR_ac_B.DataStoreRead17_c) || ((((sint32)SCPR_ac_B.DataStoreRead16_d)
          & 128) > 0))
    {
        /* Switch: '<S664>/Switch' */
        for (i = 0; i < 7; i++)
        {
            SCPR_ac_B.Switch_e[i] = false;
        }
    }
    else if (SCPR_ac_B.DataStoreRead26)
    {
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S664>/Switch' incorporates:
             *  Switch: '<S664>/Switch1'
             */
            SCPR_ac_B.Switch_e[i] = false;
        }
    }
    else
    {
        /* Switch: '<S664>/Switch' incorporates:
         *  Constant: '<S664>/Constant Value'
         *  Constant: '<S664>/Constant Value10'
         *  Constant: '<S664>/Constant Value11'
         *  Constant: '<S664>/Constant Value12'
         *  Constant: '<S664>/Constant Value13'
         *  Constant: '<S664>/Constant Value14'
         *  Constant: '<S664>/Constant Value15'
         *  Constant: '<S664>/Constant Value2'
         *  Constant: '<S664>/Constant Value3'
         *  Constant: '<S664>/Constant Value4'
         *  Constant: '<S664>/Constant Value5'
         *  Constant: '<S664>/Constant Value6'
         *  Constant: '<S664>/Constant Value7'
         *  Constant: '<S664>/Constant Value8'
         *  RelationalOperator: '<S664>/Comparison'
         *  RelationalOperator: '<S664>/Comparison1'
         *  RelationalOperator: '<S664>/Comparison2'
         *  RelationalOperator: '<S664>/Comparison3'
         *  RelationalOperator: '<S664>/Comparison4'
         *  RelationalOperator: '<S664>/Comparison5'
         *  RelationalOperator: '<S664>/Comparison6'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator4'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S664>/Bitwise Logical Operator6'
         *  Switch: '<S664>/Switch1'
         */
        SCPR_ac_B.Switch_e[0] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 64) >
            0);
        SCPR_ac_B.Switch_e[1] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 1) > 0);
        SCPR_ac_B.Switch_e[2] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 2) > 0);
        SCPR_ac_B.Switch_e[3] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 4) > 0);
        SCPR_ac_B.Switch_e[4] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 8) > 0);
        SCPR_ac_B.Switch_e[5] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 16) >
            0);
        SCPR_ac_B.Switch_e[6] = ((((sint32)SCPR_ac_B.DataStoreRead16_d) & 32) >
            0);
    }

    /* End of Switch: '<S664>/Switch' */

    /* Chart: '<S663>/CondSchedule' */
    SCPR_ac_CondSchedule(SCPR_ac_B.Sum, SCPR_ac_B.Switch_e,
                         VeSCPR_k_NumOfMinPerDay, SCPR_ac_B.DataStoreRead26,
                         VeSCPR_K_NowIndex_Min, VeSCPR_k_DayOfWeek_num,
                         &SCPR_ac_B.sf_CondSchedule);
    for (i = 0; i < 7; i++)
    {
        /* Switch: '<S663>/Switch' */
        if (SCPR_ac_B.DataStoreRead17_c)
        {
            /* Switch: '<S663>/Switch' */
            rtb_Switch_k4[i] = SCPR_ac_B.sf_CondSchedule.x_schDep[i];
        }
        else
        {
            /* Switch: '<S663>/Switch' */
            rtb_Switch_k4[i] = -1;
        }

        /* End of Switch: '<S663>/Switch' */
    }

    /* Sum: '<S666>/Sum' incorporates:
     *  Constant: '<S666>/Constant Value1'
     *  Product: '<S666>/Product'
     */
    SCPR_ac_B.Sum_e = (sint16)(((sint16)(SCPR_ac_B.DataStoreRead20_a * 60)) +
        SCPR_ac_B.DataStoreRead21_m);

    /* Switch: '<S667>/Switch' incorporates:
     *  Constant: '<S667>/Constant Value1'
     *  Constant: '<S667>/Constant Value16'
     *  Logic: '<S667>/Logical1'
     *  Logic: '<S667>/Logical2'
     *  RelationalOperator: '<S667>/Comparison7'
     *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator7'
     *  Switch: '<S667>/Switch1'
     */
    if ((!SCPR_ac_B.DataStoreRead23_i) || ((((sint32)SCPR_ac_B.DataStoreRead22_o)
          & 128) > 0))
    {
        /* Switch: '<S667>/Switch' */
        for (i = 0; i < 7; i++)
        {
            SCPR_ac_B.Switch_h[i] = false;
        }
    }
    else if (SCPR_ac_B.DataStoreRead28_d)
    {
        for (i = 0; i < 7; i++)
        {
            /* Switch: '<S667>/Switch' incorporates:
             *  Switch: '<S667>/Switch1'
             */
            SCPR_ac_B.Switch_h[i] = false;
        }
    }
    else
    {
        /* Switch: '<S667>/Switch' incorporates:
         *  Constant: '<S667>/Constant Value'
         *  Constant: '<S667>/Constant Value10'
         *  Constant: '<S667>/Constant Value11'
         *  Constant: '<S667>/Constant Value12'
         *  Constant: '<S667>/Constant Value13'
         *  Constant: '<S667>/Constant Value14'
         *  Constant: '<S667>/Constant Value15'
         *  Constant: '<S667>/Constant Value2'
         *  Constant: '<S667>/Constant Value3'
         *  Constant: '<S667>/Constant Value4'
         *  Constant: '<S667>/Constant Value5'
         *  Constant: '<S667>/Constant Value6'
         *  Constant: '<S667>/Constant Value7'
         *  Constant: '<S667>/Constant Value8'
         *  RelationalOperator: '<S667>/Comparison'
         *  RelationalOperator: '<S667>/Comparison1'
         *  RelationalOperator: '<S667>/Comparison2'
         *  RelationalOperator: '<S667>/Comparison3'
         *  RelationalOperator: '<S667>/Comparison4'
         *  RelationalOperator: '<S667>/Comparison5'
         *  RelationalOperator: '<S667>/Comparison6'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator1'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator2'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator3'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator4'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator5'
         *  S-Function (sfix_bitop): '<S667>/Bitwise Logical Operator6'
         *  Switch: '<S667>/Switch1'
         */
        SCPR_ac_B.Switch_h[0] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 64) >
            0);
        SCPR_ac_B.Switch_h[1] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 1) > 0);
        SCPR_ac_B.Switch_h[2] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 2) > 0);
        SCPR_ac_B.Switch_h[3] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 4) > 0);
        SCPR_ac_B.Switch_h[4] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 8) > 0);
        SCPR_ac_B.Switch_h[5] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 16) >
            0);
        SCPR_ac_B.Switch_h[6] = ((((sint32)SCPR_ac_B.DataStoreRead22_o) & 32) >
            0);
    }

    /* End of Switch: '<S667>/Switch' */

    /* Chart: '<S666>/CondSchedule' */
    SCPR_ac_CondSchedule(SCPR_ac_B.Sum_e, SCPR_ac_B.Switch_h,
                         VeSCPR_k_NumOfMinPerDay, SCPR_ac_B.DataStoreRead28_d,
                         VeSCPR_K_NowIndex_Min, VeSCPR_k_DayOfWeek_num,
                         &SCPR_ac_B.sf_CondSchedule_o);
    for (i = 0; i < 7; i++)
    {
        /* Switch: '<S666>/Switch' */
        if (SCPR_ac_B.DataStoreRead23_i)
        {
            /* Switch: '<S666>/Switch' */
            rtb_Switch_bw[i] = SCPR_ac_B.sf_CondSchedule_o.x_schDep[i];
        }
        else
        {
            /* Switch: '<S666>/Switch' */
            rtb_Switch_bw[i] = -1;
        }

        /* End of Switch: '<S666>/Switch' */
    }

    for (i = 0; i < 7; i++)
    {
        /* Product: '<S662>/Product2' */
        rtb_Product2_l4[i] = (sint8)(SCPR_ac_B.Chrg_Sch_Array.Logical[i] ? 1 : 0);
    }

    for (i = 0; i < 7; i++)
    {
        /* Product: '<S662>/Product3' */
        rtb_Product3_n[i] = (sint8)((SCPR_ac_B.Chrg_Sch_Array_h.Logical[i] ? 1 :
            0) * 2);
    }

    for (i = 0; i < 7; i++)
    {
        /* Product: '<S662>/Product' */
        rtb_Product_a[i] = (sint8)(SCPR_ac_B.sf_CondSchedule.CPWeekArray[i] ? 1 :
            0);
    }

    for (i = 0; i < 7; i++)
    {
        /* Product: '<S662>/Product1' */
        rtb_Product1_h[i] = (sint8)((SCPR_ac_B.sf_CondSchedule_o.CPWeekArray[i] ?
            1 : 0) * 2);
    }

    for (i = 0; i < 7; i++)
    {
        /* Product: '<S662>/Product4' */
        rtb_Product4_p[i] = (sint8)(SCPR_ac_B.CoopCharging.CoCHWeekArray[i] ? 1 :
            0);
    }

    for (i = 0; i < 7; i++)
    {
        /* Product: '<S662>/Product5' */
        rtb_Product5_g[i] = (sint8)((SCPR_ac_B.CoopCharging_k.CoCHWeekArray[i] ?
            1 : 0) * 2);
    }

    /* Chart: '<S373>/Sorting' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/Sorting */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/Sorting */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/Sorting */
    /* Transition: '<S477>:17' */
    m = 0;
    for (j = 0; j < 7; j++)
    {
        /* Transition: '<S477>:20' */
        /* Transition: '<S477>:22' */
        SCPR_ac_DW.x_dayStarts[0] = rtb_Switch_jl[j];
        SCPR_ac_DW.x_dayStarts[1] = rtb_Switch_gp[j];
        SCPR_ac_DW.y_dayEnds[0] = rtb_Switch_gp[j + 7];
        SCPR_ac_DW.y_dayEnds[1] = rtb_Switch_jl[j + 7];
        SCPR_ac_DW.z_CPends[0] = rtb_Switch_k4[j];
        SCPR_ac_DW.z_CPends[1] = rtb_Switch_bw[j];
        SCPR_ac_DW.w_CoCHstop[0] = SCPR_ac_B.CoopCharging.Switch[j];
        SCPR_ac_DW.w_CoCHstop[1] = SCPR_ac_B.CoopCharging_k.Switch[j];
        SCPR_ac_DW.UF_array[0] = rtb_Product2_l4[j];
        SCPR_ac_DW.UF_array[1] = rtb_Product3_n[j];
        SCPR_ac_DW.CP_trackArray[0] = rtb_Product_a[j];
        SCPR_ac_DW.CP_trackArray[1] = rtb_Product1_h[j];
        SCPR_ac_DW.CoCH_trackArray[0] = rtb_Product4_p[j];
        SCPR_ac_DW.CoCH_trackArray[1] = rtb_Product5_g[j];

        /* Transition: '<S477>:24' */
        for (i = 0; i < 2; i++)
        {
            rtb_Switch3_ge[i] = SCPR_ac_DW.x_dayStarts[i];
            b[i] = SCPR_ac_DW.UF_array[i];
        }

        SCPR_ac_sortID(2, rtb_Switch3_ge, b);
        for (i = 0; i < 2; i++)
        {
            b_a[i] = SCPR_ac_DW.y_dayEnds[i];
            b[i] = SCPR_ac_DW.UF_array[i];
        }

        SCPR_ac_sortID(2, b_a, b);
        for (i = 0; i < 2; i++)
        {
            c_a[i] = SCPR_ac_DW.z_CPends[i];
            b_b[i] = SCPR_ac_DW.CP_trackArray[i];
        }

        SCPR_ac_sortID(2, c_a, b_b);
        for (i = 0; i < 2; i++)
        {
            d_a[i] = SCPR_ac_DW.w_CoCHstop[i];
            c_b[i] = SCPR_ac_DW.CoCH_trackArray[i];
        }

        SCPR_ac_sortID(2, d_a, c_b);

        /* Transition: '<S477>:26' */
        add = 0;
        while ((add < 2) && (m < 14))
        {
            /* Transition: '<S477>:28' */
            /* Transition: '<S477>:30' */
            SCPR_ac_B.GlobalStart[m] = rtb_Switch3_ge[add];
            SCPR_ac_B.GlobalEnd[m] = b_a[add];
            SCPR_ac_B.Global_CP[m] = c_a[add];
            SCPR_ac_B.GlobalUF[m] = b[add];
            SCPR_ac_B.GlobalCP_track[m] = b_b[add];
            SCPR_ac_B.GlobalCoCH[m] = d_a[add];
            SCPR_ac_B.GlobalCoCH_track[m] = c_b[add];

            /* Transition: '<S477>:32' */
            /* Transition: '<S477>:33' */
            add++;
            m++;
        }

        /* Transition: '<S477>:35' */
        /* Transition: '<S477>:40' */
    }

    /* End of Chart: '<S373>/Sorting' */
    /* Transition: '<S477>:38' */
    for (i = 0; i < 14; i++)
    {
        /* Gain: '<S454>/Gain' */
        VaSCPR_K_SchGlobalStrt[(i)] = SCPR_ac_B.GlobalStart[i];

        /* Gain: '<S455>/Gain' */
        VaSCPR_K_SchGlobalEnd[(i)] = SCPR_ac_B.GlobalEnd[i];
    }

    /* UnitDelay: '<S370>/Unit Delay' */
    rtb_Logical1_oz = SCPR_ac_DW.UnitDelay_DSTATE_d3;

    /* Outputs for Atomic SubSystem: '<S381>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S386>/EdgeRising' */
    /* Logic: '<S387>/AND' incorporates:
     *  Logic: '<S387>/OR1'
     *  UnitDelay: '<S387>/Unit Delay'
     */
    rtb_Switch4_m = !SCPR_ac_DW.UnitDelay_DSTATE_ax;

    /* Update for UnitDelay: '<S387>/Unit Delay' incorporates:
     *  Constant: '<S381>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_ax = true;

    /* End of Outputs for SubSystem: '<S386>/EdgeRising' */

    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S384>/Calib'
     *  Constant: '<S386>/Constant Value'
     *  Logic: '<S386>/OR'
     *  MinMax: '<S386>/Minimum'
     *  Sum: '<S386>/Summation'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    if (rtb_Switch4_m)
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S386>/Constant Value1'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (KeSCPR_Cnt_UFDelayAtWU < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_na) + 1U)))
    {
        /* MinMax: '<S386>/Minimum' incorporates:
         *  Constant: '<S384>/Calib'
         *  Switch: '<S386>/Switch1'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_UFDelayAtWU;
    }
    else
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S386>/Constant Value'
         *  MinMax: '<S386>/Minimum'
         *  Sum: '<S386>/Summation'
         *  UnitDelay: '<S386>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_na) + 1U);
    }

    /* End of Switch: '<S386>/Switch1' */

    /* Update for UnitDelay: '<S386>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_na = rtb_Switch1_hi;

    /* End of Outputs for SubSystem: '<S381>/Turn On Delay Sample1' */

    /* Logic: '<S381>/Logical1' incorporates:
     *  Logic: '<S381>/Logical2'
     */
    tmp_2 = !rtb_Logical1_oz;

    /* Outputs for Atomic SubSystem: '<S381>/Turn On Delay Sample1' */
    /* Switch: '<S381>/Switch3' incorporates:
     *  Constant: '<S384>/Calib'
     *  Logic: '<S381>/Logical1'
     *  Logic: '<S381>/Logical15'
     *  RelationalOperator: '<S386>/Greater  Than'
     */
    if (tmp_2 || (rtb_Switch1_hi < KeSCPR_Cnt_UFDelayAtWU))
    {
        /* Switch: '<S381>/Switch3' */
        rtb_Sum7 = VeSCPR_K_NowIndex_Min;
    }
    else
    {
        /* Switch: '<S381>/Switch3' incorporates:
         *  UnitDelay: '<S381>/Unit Delay2'
         */
        rtb_Sum7 = SCPR_ac_DW.UnitDelay2_DSTATE_k;
    }

    /* End of Switch: '<S381>/Switch3' */
    /* End of Outputs for SubSystem: '<S381>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S746>/Protected Division' */
    /* Switch: '<S747>/Switch1' incorporates:
     *  Constant: '<S747>/Constant Value'
     *  Constant: '<S747>/Constant Value1'
     *  Constant: '<S747>/Constant Value2'
     *  Constant: '<S747>/Constant Value3'
     *  DataTypeConversion: '<S745>/FixToFloat'
     *  Logic: '<S747>/AND'
     *  RelationalOperator: '<S747>/Greater Than or Equal '
     *  RelationalOperator: '<S747>/Greater Than or Equal 1'
     *  RelationalOperator: '<S747>/Not Equal'
     *  RelationalOperator: '<S747>/Not Equal1'
     *  Switch: '<S747>/Switch2'
     *  Switch: '<S747>/Switch3'
     */
    if ((VeSCPR_K_SysTimeMin != 0.0F) && (VeSCPR_K_ArrElementTimeIncSize != 0))
    {
        /* Switch: '<S747>/Switch1' incorporates:
         *  Product: '<S747>/Division'
         */
        rtb_Switch1_ls = VeSCPR_K_SysTimeMin / ((float32)
            VeSCPR_K_ArrElementTimeIncSize);
    }
    else if (VeSCPR_K_SysTimeMin > 0.0F)
    {
        /* Switch: '<S747>/Switch2' incorporates:
         *  Constant: '<S747>/MAXFLOAT'
         *  Switch: '<S747>/Switch1'
         */
        rtb_Switch1_ls = 3.402823466E+38F;
    }
    else if (VeSCPR_K_SysTimeMin < 0.0F)
    {
        /* Switch: '<S747>/Switch3' incorporates:
         *  Constant: '<S747>/MINFLOAT'
         *  Switch: '<S747>/Switch1'
         *  Switch: '<S747>/Switch2'
         */
        rtb_Switch1_ls = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S747>/Switch1' incorporates:
         *  Constant: '<S747>/Constant Value4'
         *  Switch: '<S747>/Switch2'
         *  Switch: '<S747>/Switch3'
         */
        rtb_Switch1_ls = 0.0F;
    }

    /* End of Switch: '<S747>/Switch1' */
    /* End of Outputs for SubSystem: '<S746>/Protected Division' */

    /* Rounding: '<S746>/Rounding1' incorporates:
     *  DataTypeConversion: '<S745>/FixToFloat'
     *  Product: '<S746>/Product'
     *  Rounding: '<S746>/Rounding'
     *  Sum: '<S746>/Sum1'
     */
    rtb_Switch1_ls = roundf((rtb_Switch1_ls - floorf(rtb_Switch1_ls)) *
                            ((float32)VeSCPR_K_ArrElementTimeIncSize));

    /* Switch: '<S745>/Switch' incorporates:
     *  Constant: '<S745>/Constant Value3'
     *  RelationalOperator: '<S745>/Comparison5'
     */
    if (rtb_Switch1_ls != 0.0F)
    {
        /* Switch: '<S745>/Switch' incorporates:
         *  DataTypeConversion: '<S745>/FixToFloat'
         *  Sum: '<S745>/Sum1'
         */
        rtb_Switch1_ls = ((float32)VeSCPR_K_ArrElementTimeIncSize) -
            rtb_Switch1_ls;
    }

    /* End of Switch: '<S745>/Switch' */

    /* DataTypeConversion: '<S745>/FloatToFix1' */
    rtb_Sum1_nz = fmodf(rtb_Switch1_ls, 65536.0F);

    /* DataTypeConversion: '<S745>/FloatToFix1' */
    VeSCPR_K_TimeRem = (sint16)((rtb_Sum1_nz < 0.0F) ? ((sint32)((sint16)
        (-((sint16)((uint16)((float32)(-rtb_Sum1_nz))))))) : ((sint32)((sint16)
        ((uint16)rtb_Sum1_nz))));

    /* Outputs for Atomic SubSystem: '<S381>/Signal Latch On With Reset3' */
    /* Switch: '<S385>/Switch' incorporates:
     *  Delay: '<S385>/Integer Delay'
     *  Logic: '<S385>/OR1'
     *  RelationalOperator: '<S385>/Comparison5'
     *  UnitDelay: '<S385>/Unit Delay1'
     */
    if ((VeSCPR_K_TimeRem == SCPR_ac_DW.UnitDelay1_DSTATE_d) ||
            (SCPR_ac_DW.IntegerDelay_DSTATE_ce[0]))
    {
        /* Switch: '<S385>/Switch' */
        rtb_Switch_mc = VeSCPR_K_TimeRem;
    }
    else
    {
        /* Switch: '<S385>/Switch' */
        rtb_Switch_mc = SCPR_ac_DW.UnitDelay1_DSTATE_d;
    }

    /* End of Switch: '<S385>/Switch' */
    /* End of Outputs for SubSystem: '<S381>/Signal Latch On With Reset3' */

    /* If: '<S370>/If' incorporates:
     *  UnitDelay: '<S370>/Unit Delay1'
     */
    if (SCPR_ac_DW.UnitDelay1_DSTATE_a)
    {
        /* Outputs for IfAction SubSystem: '<S370>/If Action Subsystem' incorporates:
         *  ActionPort: '<S378>/Action Port'
         */
        /* Sum: '<S378>/Sum2' incorporates:
         *  Constant: '<S378>/Constant'
         *  UnitDelay: '<S370>/Unit Delay2'
         */
        rtb_Sum2_h = (sint16)(SCPR_ac_DW.UnitDelay2_DSTATE_n + 1);

        /* Switch: '<S378>/Switch3' incorporates:
         *  RelationalOperator: '<S378>/Comparison2'
         */
        if (rtb_Sum2_h > VeSCPR_k_NumOfMinPerWeek)
        {
            /* Switch: '<S378>/Switch3' incorporates:
             *  Sum: '<S378>/Sum3'
             */
            VeSCPR_K_CancNowIndexStuck = (sint16)(rtb_Sum2_h -
                VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            /* Switch: '<S378>/Switch3' */
            VeSCPR_K_CancNowIndexStuck = rtb_Sum2_h;
        }

        /* End of Switch: '<S378>/Switch3' */

        /* Merge: '<S370>/Merge' incorporates:
         *  SignalConversion: '<S378>/Signal Conversion'
         */
        VeSCPR_K_NowIndex_proc = VeSCPR_K_CancNowIndexStuck;

        /* End of Outputs for SubSystem: '<S370>/If Action Subsystem' */
    }
    else if (rtb_Logical1_oz)
    {
        /* Outputs for IfAction SubSystem: '<S370>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S380>/Action Port'
         */
        /* Sum: '<S380>/Sum2' */
        rtb_Sum2_h = (sint16)(rtb_Sum7 + rtb_Switch_mc);

        /* Switch: '<S380>/Switch3' incorporates:
         *  RelationalOperator: '<S380>/Comparison2'
         */
        if (rtb_Sum2_h > VeSCPR_k_NumOfMinPerWeek)
        {
            /* Switch: '<S380>/Switch3' incorporates:
             *  Sum: '<S380>/Sum3'
             */
            VeSCPR_K_UFNowIndexStuck = (sint16)(rtb_Sum2_h -
                VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            /* Switch: '<S380>/Switch3' */
            VeSCPR_K_UFNowIndexStuck = rtb_Sum2_h;
        }

        /* End of Switch: '<S380>/Switch3' */

        /* Merge: '<S370>/Merge' incorporates:
         *  SignalConversion: '<S380>/Signal Conversion'
         */
        VeSCPR_K_NowIndex_proc = VeSCPR_K_UFNowIndexStuck;

        /* End of Outputs for SubSystem: '<S370>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S370>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S379>/Action Port'
         */
        /* Merge: '<S370>/Merge' incorporates:
         *  Inport: '<S379>/NowIndex_Min_In'
         */
        VeSCPR_K_NowIndex_proc = VeSCPR_K_NowIndex_Min;

        /* End of Outputs for SubSystem: '<S370>/If Action Subsystem1' */
    }

    /* End of If: '<S370>/If' */

    /* Chart: '<S373>/k_Now' incorporates:
     *  Chart: '<S373>/Overlap'
     */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/k_Now */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/k_Now */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/k_Now */
    /* Transition: '<S478>:20' */
    j = 13;
    add = 0;
    i = ((sint32)VaSCPR_K_SchGlobalEnd[13]) - ((sint32)VeSCPR_k_NumOfMinPerWeek);
    if (((sint32)VeSCPR_K_NowIndex_proc) >= i)
    {
        /* Transition: '<S478>:200' */
        /* Transition: '<S478>:105' */
        j = 0;
        do
        {
            exitg3 = 0;
            if (j < 14)
            {
                /* Transition: '<S478>:10' */
                /*   */
                if ((VeSCPR_K_NowIndex_proc >= VaSCPR_K_SchGlobalStrt[(j)]) &&
                        (VeSCPR_K_NowIndex_proc < VaSCPR_K_SchGlobalEnd[(j)]))
                {
                    /* Transition: '<S478>:17' */
                    /* Transition: '<S478>:19' */
                    /* Transition: '<S478>:250' */
                    /* Transition: '<S478>:245' */
                    /* Transition: '<S478>:281' */
                    exitg3 = 1;
                }
                else
                {
                    /* Transition: '<S478>:13' */
                    /* Transition: '<S478>:12' */
                    j++;
                }
            }
            else
            {
                /* Transition: '<S478>:35' */
                j = 0;
                exitg3 = 2;
            }
        }
        while (exitg3 == 0);

        if (exitg3 == 1)
        {
        }
        else
        {
            do
            {
                exitg2 = 0;
                if (VeSCPR_K_NowIndex_proc <= VaSCPR_K_SchGlobalStrt[0])
                {
                    /* Transition: '<S478>:51' */
                    /* Transition: '<S478>:260' */
                    add = 1;

                    /* Transition: '<S478>:235' */
                    exitg2 = 2;
                }
                else if (j < 13)
                {
                    /* Transition: '<S478>:37' */
                    if ((VeSCPR_K_NowIndex_proc >= VaSCPR_K_SchGlobalEnd[(j)]) &&
                        (VeSCPR_K_NowIndex_proc < VaSCPR_K_SchGlobalStrt[j + 1]))
                    {
                        /* Transition: '<S478>:39' */
                        /* Transition: '<S478>:257' */
                        add = 1;

                        /* Transition: '<S478>:259' */
                        /* Transition: '<S478>:245' */
                        /* Transition: '<S478>:281' */
                        exitg2 = 1;
                    }
                    else
                    {
                        /* Transition: '<S478>:46' */
                        /* Transition: '<S478>:45' */
                        j++;
                    }
                }
                else
                {
                    /* Transition: '<S478>:221' */
                    /* Transition: '<S478>:234' */
                    exitg2 = 2;
                }
            }
            while (exitg2 == 0);

            if (exitg2 == 1)
            {
            }
            else
            {
                /* Transition: '<S478>:236' */
                if (VeSCPR_K_NowIndex_proc >= VaSCPR_K_SchGlobalEnd[(j)])
                {
                    /* Transition: '<S478>:228' */
                    /* Transition: '<S478>:68' */
                    j = 0;
                    do
                    {
                        exitg1 = 0;
                        if (j < 14)
                        {
                            /* Transition: '<S478>:75' */
                            if (VaSCPR_K_SchGlobalStrt[(j)] >= 0)
                            {
                                /* Transition: '<S478>:80' */
                                /* Transition: '<S478>:259' */
                                /* Transition: '<S478>:245' */
                                /* Transition: '<S478>:281' */
                                exitg1 = 1;
                            }
                            else
                            {
                                /* Transition: '<S478>:76' */
                                /* Transition: '<S478>:72' */
                                j++;
                            }
                        }
                        else
                        {
                            /* Transition: '<S478>:71' */
                            /* Transition: '<S478>:240' */
                            j = -1;

                            /* Transition: '<S478>:248' */
                            exitg1 = 1;
                        }
                    }
                    while (exitg1 == 0);
                }
                else
                {
                    /* Transition: '<S478>:214' */
                    /* Transition: '<S478>:239' */
                    /* Transition: '<S478>:240' */
                    j = -1;

                    /* Transition: '<S478>:248' */
                }
            }
        }
    }
    else
    {
        /* Transition: '<S478>:101' */
        /* Transition: '<S478>:102' */
        /* Transition: '<S478>:19' */
        /* Transition: '<S478>:250' */
        /* Transition: '<S478>:245' */
        /* Transition: '<S478>:281' */
    }

    /* Transition: '<S478>:187' */
    if (j > -1)
    {
        /* Transition: '<S478>:283' */
        if (VeSCPR_K_NowIndex_proc > (VaSCPR_K_SchGlobalEnd[(j)] -
                VeSCPR_k_NumOfMinPerWeek))
        {
            /* Transition: '<S478>:274' */
            /* Transition: '<S478>:270' */
            SCPR_ac_B.startOverCheck = true;

            /* Transition: '<S478>:271' */
        }
        else
        {
            /* Transition: '<S478>:269' */
        }
    }
    else
    {
        /* Transition: '<S478>:285' */
        /* Transition: '<S478>:289' */
    }

    /* Gain: '<S470>/Gain' incorporates:
     *  Chart: '<S373>/k_Now'
     */
    /* Transition: '<S478>:291' */
    VeSCPR_K_CurrentIndex = (sint8)(j + add);

    /* Chart: '<S373>/Overlap' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/Overlap */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/Overlap */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/Overlap */
    /* Transition: '<S453>:411' */
    j = 0;
    add = 0;
    rtb_Merge_n = false;
    rtb_Switch4_m = false;
    SCPR_ac_B.X_Overlap[0] = false;
    m = 0;
    do
    {
        exitg1 = 0;
        guard11 = false;
        guard21 = false;
        guard31 = false;
        guard41 = false;
        if ((j < 13) && (add < 14))
        {
            /* Transition: '<S453>:414' */
            /* Transition: '<S453>:436' */
            guard41 = true;
        }
        else
        {
            /* Transition: '<S453>:387' */
            /*   */
            if ((j == 13) && (add > 12))
            {
                /* Transition: '<S453>:434' */
                if (VaSCPR_K_SchGlobalEnd[(add)] >= VeSCPR_k_NumOfMinPerWeek)
                {
                    /* Transition: '<S453>:439' */
                    /* Transition: '<S453>:442' */
                    j = -1;
                    rtb_Switch4_m = true;

                    /* Transition: '<S453>:437' */
                    guard41 = true;
                }
                else
                {
                    /* Transition: '<S453>:438' */
                    SCPR_ac_B.X_Overlap[add] = false;

                    /* Transition: '<S453>:381' */
                    /* Transition: '<S453>:382' */
                    exitg1 = 1;
                }
            }
            else
            {
                /* Transition: '<S453>:407' */
                /* Transition: '<S453>:382' */
                exitg1 = 1;
            }
        }

        if (guard41)
        {
            rtb_xOvlp = (sint32)VaSCPR_K_SchGlobalStrt[j + 1];
            if (rtb_xOvlp == -1)
            {
                /* Transition: '<S453>:478' */
                if (!rtb_Merge_n)
                {
                    /* Transition: '<S453>:500' */
                    /* Transition: '<S453>:503' */
                    m = 0;
                }
                else
                {
                    /* Transition: '<S453>:509' */
                }

                /* Transition: '<S453>:479' */
                rtb_Merge_n = true;
                SCPR_ac_B.X_Overlap[j + 1] = false;
                m++;

                /* Transition: '<S453>:404' */
                /* Transition: '<S453>:444' */
                /* Transition: '<S453>:385' */
                j++;

                /* Transition: '<S453>:443' */
            }
            else
            {
                /* Transition: '<S453>:394' */
                tmp_3 = !rtb_Switch4_m;
                if ((tmp_3 && (((sint32)VaSCPR_K_SchGlobalEnd[(add)]) >=
                               rtb_xOvlp)) || (rtb_Switch4_m && ((((sint32)
                        VaSCPR_K_SchGlobalEnd[(add)]) - ((sint32)
                        VeSCPR_k_NumOfMinPerWeek)) >= rtb_xOvlp)))
                {
                    /* Transition: '<S453>:428' */
                    /* Transition: '<S453>:486' */
                    /* Transition: '<S453>:513' */
                    guard31 = true;
                }
                else
                {
                    /* Transition: '<S453>:495' */
                    if ((add <= 1) && (i >= rtb_xOvlp))
                    {
                        /* Transition: '<S453>:489' */
                        /* Transition: '<S453>:513' */
                        guard31 = true;
                    }
                    else
                    {
                        /* Transition: '<S453>:511' */
                        if ((add >= (m + 1)) && (tmp_3 && (((sint32)
                                VaSCPR_K_SchGlobalEnd[(add - m) - 1]) >=
                                rtb_xOvlp)))
                        {
                            /* Transition: '<S453>:514' */
                            guard31 = true;
                        }
                        else
                        {
                            /* Transition: '<S453>:424' */
                            SCPR_ac_B.X_Overlap[add] = false;
                            guard21 = true;
                        }
                    }
                }
            }
        }

        if (guard31)
        {
            /* Transition: '<S453>:431' */
            SCPR_ac_B.X_Overlap[add] = true;

            /* Transition: '<S453>:556' */
            if (rtb_Merge_n || rtb_Switch4_m)
            {
                /* Transition: '<S453>:519' */
                if (rtb_Switch4_m)
                {
                    /* Transition: '<S453>:522' */
                    /* Transition: '<S453>:523' */
                    add = 0;

                    /* Transition: '<S453>:524' */
                }
                else
                {
                    /* Transition: '<S453>:521' */
                }

                while (add <= j)
                {
                    /* Transition: '<S453>:525' */
                    /* Transition: '<S453>:527' */
                    SCPR_ac_B.X_Overlap[add] = true;

                    /* Transition: '<S453>:529' */
                    add++;
                }

                /* Transition: '<S453>:528' */
                /* Transition: '<S453>:526' */
                /* Transition: '<S453>:467' */
                guard11 = true;
            }
            else
            {
                /* Transition: '<S453>:550' */
                guard21 = true;
            }
        }

        if (guard21)
        {
            /* Transition: '<S453>:427' */
            if (rtb_Merge_n)
            {
                /* Transition: '<S453>:448' */
                guard11 = true;
            }
            else
            {
                /* Transition: '<S453>:446' */
                add++;
                m = 0;

                /* Transition: '<S453>:444' */
                /* Transition: '<S453>:385' */
                j++;

                /* Transition: '<S453>:443' */
            }
        }

        if (guard11)
        {
            if (rtb_Switch4_m)
            {
                /* Transition: '<S453>:447' */
                exitg1 = 1;
            }
            else
            {
                /* Transition: '<S453>:450' */
                add = (sint8)(j + 1);
                rtb_Merge_n = false;

                /* Transition: '<S453>:444' */
                /* Transition: '<S453>:385' */
                j++;

                /* Transition: '<S453>:443' */
            }
        }
    }
    while (exitg1 == 0);

    /* Transition: '<S453>:451' */
    for (i = 0; i < 14; i++)
    {
        /* Gain: '<S471>/Gain' */
        VaSCPR_b_SchOverlapDet[(i)] = SCPR_ac_B.X_Overlap[i];
    }

    /* Chart: '<S373>/CntOverlaps' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CntOverlaps */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CntOverlaps */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CntOverlaps */
    /* Transition: '<S449>:7' */
    add = (sint8)(VeSCPR_K_CurrentIndex - 1);
    j = 0;
    m = 0;
    rtb_Merge_n = false;
    do
    {
        exitg1 = 0;
        guard11 = false;
        if (add >= 0)
        {
            /* Transition: '<S449>:10' */
            guard11 = true;
        }
        else if (add == -1)
        {
            /* Transition: '<S449>:47' */
            /* Transition: '<S449>:71' */
            add = 13;
            guard11 = true;
        }
        else
        {
            /* Transition: '<S449>:22' */
            exitg1 = 1;
        }

        if (guard11)
        {
            if (VaSCPR_b_SchOverlapDet[(add)])
            {
                /* Transition: '<S449>:12' */
                /* Transition: '<S449>:16' */
                j++;

                /* Transition: '<S449>:17' */
            }
            else
            {
                /* Transition: '<S449>:14' */
                rtb_Merge_n = true;
            }

            if (rtb_Merge_n || (j == 14))
            {
                /* Transition: '<S449>:24' */
                add = VeSCPR_K_CurrentIndex;
                do
                {
                    exitg2 = 0;
                    if (j == 14)
                    {
                        /* Transition: '<S449>:38' */
                        /* Transition: '<S449>:77' */
                        j = -1;
                        exitg2 = 1;
                    }
                    else
                    {
                        guard21 = false;
                        if (add < 14)
                        {
                            /* Transition: '<S449>:26' */
                            guard21 = true;
                        }
                        else if (add == 14)
                        {
                            /* Transition: '<S449>:48' */
                            /* Transition: '<S449>:79' */
                            add = 0;
                            guard21 = true;
                        }
                        else
                        {
                            /* Transition: '<S449>:42' */
                            /* Transition: '<S449>:44' */
                            exitg2 = 1;
                        }

                        if (guard21)
                        {
                            if (VaSCPR_b_SchOverlapDet[(add)])
                            {
                                /* Transition: '<S449>:28' */
                                /* Transition: '<S449>:32' */
                                m++;

                                /* Transition: '<S449>:33' */
                                /* Transition: '<S449>:36' */
                                add++;
                            }
                            else
                            {
                                /* Transition: '<S449>:30' */
                                /* Transition: '<S449>:35' */
                                /* Transition: '<S449>:44' */
                                exitg2 = 1;
                            }
                        }
                    }
                }
                while (exitg2 == 0);

                /* Transition: '<S449>:76' */
                exitg1 = 1;
            }
            else
            {
                /* Transition: '<S449>:19' */
                /* Transition: '<S449>:20' */
                add--;
            }
        }
    }
    while (exitg1 == 0);

    /* Gain: '<S472>/Gain' */
    /* Transition: '<S449>:62' */
    VeSCPR_K_NxtSch_BackwardCnt = j;

    /* Gain: '<S473>/Gain' */
    VeSCPR_K_NxtSch_ForwardCnt = m;

    /* Chart: '<S373>/SortEnd_Extract' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/SortEnd_Extract */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/SortEnd_Extract */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/SortEnd_Extract */
    /* Transition: '<S476>:8' */
    add = 0;

    /* Gain: '<S458>/Gain' incorporates:
     *  Chart: '<S373>/SortEnd_Extract'
     */
    VeSCPR_K_EndArrayPos = 0;

    /* Chart: '<S373>/SortEnd_Extract' */
    m = 0;
    j = (sint8)(VeSCPR_K_CurrentIndex - VeSCPR_K_NxtSch_BackwardCnt);
    N = (sint8)(VeSCPR_K_NxtSch_BackwardCnt + VeSCPR_K_NxtSch_ForwardCnt);
    rtb_Merge_n = false;
    rtb_Switch4_m = false;

    /* Gain: '<S465>/Gain' incorporates:
     *  Chart: '<S373>/SortEnd_Extract'
     */
    VeSCPR_b_WholeWeekOvrlp = false;

    /* Chart: '<S373>/SortEnd_Extract' incorporates:
     *  Logic: '<S120>/Logical'
     */
    if ((VeSCPR_K_NxtSch_BackwardCnt == -1) ||
            ((SCPR_ac_B.Chrg_Sch_Array.WeekOverlap) ||
             (SCPR_ac_B.Chrg_Sch_Array_h.WeekOverlap)))
    {
        /* Gain: '<S459>/Gain' */
        /* Transition: '<S476>:174' */
        /* Transition: '<S476>:179' */
        VeSCPR_K_NextSch_ChrgEnd = 0;

        /* Gain: '<S475>/Gain' */
        VeSCPR_K_NextSch_ChrgStart = 0;

        /* Gain: '<S465>/Gain' */
        VeSCPR_b_WholeWeekOvrlp = true;
    }
    else
    {
        if (j < 0)
        {
            /* Transition: '<S476>:64' */
            /* Transition: '<S476>:66' */
            rtb_Sum2_h = (sint16)((sint32)(((sint32)j) + 14));
            m = (sint8)(j + 14);

            /* Transition: '<S476>:165' */
            rtb_Switch4_m = true;
        }
        else
        {
            /* Transition: '<S476>:68' */
            rtb_Sum2_h = (sint16)j;
            m = j;
            if (((sint8)(VeSCPR_K_CurrentIndex + VeSCPR_K_NxtSch_ForwardCnt)) >
                    13)
            {
                /* Transition: '<S476>:171' */
                /* Transition: '<S476>:165' */
                rtb_Switch4_m = true;
            }
            else
            {
                /* Transition: '<S476>:170' */
                /* Transition: '<S476>:166' */
            }
        }

        /* Transition: '<S476>:70' */
        while ((add <= N) && (add < 14))
        {
            /* Transition: '<S476>:11' */
            guard1 = false;
            if (rtb_Merge_n)
            {
                /* Transition: '<S476>:85' */
                /* Transition: '<S476>:88' */
                rtb_Sum2_h++;
                guard1 = true;
            }
            else
            {
                i = ((sint32)rtb_Sum2_h) + ((sint32)add);
                if (i > 13)
                {
                    /* Transition: '<S476>:77' */
                    rtb_Sum2_h = 0;
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S476>:15' */
                    if (rtb_Switch4_m)
                    {
                        /* Transition: '<S476>:129' */
                        /* Transition: '<S476>:131' */
                        SCPR_ac_DW.tmp_array[add] = (sint16)
                            (VaSCPR_K_SchGlobalEnd[(i)] -
                             VeSCPR_k_NumOfMinPerWeek);

                        /* Transition: '<S476>:134' */
                    }
                    else
                    {
                        /* Transition: '<S476>:133' */
                        SCPR_ac_DW.tmp_array[add] = VaSCPR_K_SchGlobalEnd[(i)];
                    }
                }
            }

            if (guard1)
            {
                /* Transition: '<S476>:81' */
                rtb_Merge_n = true;
                if (VaSCPR_K_SchGlobalEnd[(rtb_Sum2_h)] >
                        VeSCPR_k_NumOfMinPerWeek)
                {
                    /* Transition: '<S476>:135' */
                    /* Transition: '<S476>:141' */
                    SCPR_ac_DW.tmp_array[add] = (sint16)(VaSCPR_K_SchGlobalEnd
                        [(rtb_Sum2_h)] - VeSCPR_k_NumOfMinPerWeek);

                    /* Transition: '<S476>:142' */
                }
                else
                {
                    /* Transition: '<S476>:137' */
                    SCPR_ac_DW.tmp_array[add] = VaSCPR_K_SchGlobalEnd
                        [(rtb_Sum2_h)];
                }

                /* Transition: '<S476>:143' */
                /* Transition: '<S476>:134' */
            }

            /* Transition: '<S476>:144' */
            /* Transition: '<S476>:18' */
            add++;
        }

        /* Transition: '<S476>:20' */
        /* Transition: '<S476>:22' */
        while (add < 14)
        {
            /* Transition: '<S476>:24' */
            /* Transition: '<S476>:26' */
            SCPR_ac_DW.tmp_array[add] = -1;

            /* Transition: '<S476>:29' */
            add++;
        }

        /* Transition: '<S476>:31' */
        /* Transition: '<S476>:33' */
        for (i = 0; i < 14; i++)
        {
            tmpEnds[i] = SCPR_ac_DW.tmp_array[i];
        }

        SCPR_ac_sort(14, tmpEnds);

        /* Gain: '<S459>/Gain' */
        /* Transition: '<S476>:212' */
        VeSCPR_K_NextSch_ChrgEnd = tmpEnds[13];

        /* Gain: '<S475>/Gain' */
        VeSCPR_K_NextSch_ChrgStart = VaSCPR_K_SchGlobalStrt[(m)];

        /* Gain: '<S458>/Gain' */
        /* Transition: '<S476>:246' */
        VeSCPR_K_EndArrayPos = (sint8)((VeSCPR_K_CurrentIndex +
            VeSCPR_K_NxtSch_ForwardCnt) % 14);

        /* Transition: '<S476>:243' */
    }

    /* Gain: '<S457>/Gain' */
    /* Transition: '<S476>:238' */
    VeSCPR_K_StartArrayPos = m;

    /* Logic: '<S120>/Logical1' */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_Logical1_d0 || rtb_AND_liv);

    /* Outputs for Atomic SubSystem: '<S120>/EdgeRising2' */
    /* Logic: '<S658>/AND' incorporates:
     *  Logic: '<S658>/OR1'
     *  UnitDelay: '<S658>/Unit Delay'
     */
    rtb_Switch4_m = (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
                     (!SCPR_ac_DW.UnitDelay_DSTATE_bd));

    /* Update for UnitDelay: '<S658>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_bd = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S120>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S248>/Count Down  Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S269>/EdgeRising1' */
    /* Logic: '<S286>/OR1' incorporates:
     *  UnitDelay: '<S286>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = !SCPR_ac_DW.UnitDelay_DSTATE_lcn;

    /* Update for UnitDelay: '<S286>/Unit Delay' incorporates:
     *  Constant: '<S248>/TRUE Constant2'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_lcn = true;

    /* Switch: '<S269>/Switch1' incorporates:
     *  Constant: '<S269>/Constant Value'
     *  Logic: '<S286>/AND'
     *  RelationalOperator: '<S269>/Greater  Than'
     *  Switch: '<S269>/Switch2'
     *  UnitDelay: '<S269>/Unit Delay'
     */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S269>/Switch1' incorporates:
         *  Constant: '<S281>/Calib'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_FOTAcnflt_DelayWU;
    }
    else if (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_pa) > 0)
    {
        /* Switch: '<S269>/Switch2' incorporates:
         *  Constant: '<S269>/Constant Value1'
         *  Sum: '<S269>/Subtraction'
         *  Switch: '<S269>/Switch1'
         *  UnitDelay: '<S269>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_pa) - 1));
    }
    else
    {
        /* Switch: '<S269>/Switch1' incorporates:
         *  Switch: '<S269>/Switch2'
         *  UnitDelay: '<S269>/Unit Delay'
         */
        rtb_Switch1_hi = SCPR_ac_DW.UnitDelay_DSTATE_pa;
    }

    /* End of Switch: '<S269>/Switch1' */
    /* End of Outputs for SubSystem: '<S269>/EdgeRising1' */

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_pa = rtb_Switch1_hi;

    /* Logic: '<S248>/Logical13' incorporates:
     *  Constant: '<S269>/Constant Value2'
     *  Constant: '<S272>/Constant'
     *  Constant: '<S273>/Constant'
     *  Constant: '<S277>/Constant'
     *  Logic: '<S248>/Logical17'
     *  Logic: '<S269>/AND1'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S248>/Comparison11'
     *  RelationalOperator: '<S248>/Comparison20'
     *  RelationalOperator: '<S248>/Comparison8'
     *  RelationalOperator: '<S269>/Greater  Than1'
     *  Switch: '<S793>/Switch1'
     */
    VeSCPR_b_checkFOTAconflict = ((((((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_FOTANow) || (((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_FOTASchedule)) && (((uint32)VeSCPR_b_FOTACommCharge_tmp) !=
        CeCITR_e_Installation_Complete)) && (((sint32)rtb_Switch1_hi) <= 0));

    /* End of Outputs for SubSystem: '<S248>/Count Down  Reset Enabled1' */

    /* If: '<S248>/If' */
    j = SCPR_ac_DW.If_ActiveSubsystem;
    add = (sint8)((!VeSCPR_b_InChrgWindow) ? 1 : 0);
    SCPR_ac_DW.If_ActiveSubsystem = add;
    if (add == 0)
    {
        /* Outputs for IfAction SubSystem: '<S248>/InWindow' incorporates:
         *  ActionPort: '<S280>/Action Port'
         */
        /* Merge: '<S248>/Merge' incorporates:
         *  Gain: '<S287>/Gain'
         */
        VeSCPR_b_FOTA_Conflict = VeSCPR_b_checkFOTAconflict;

        /* End of Outputs for SubSystem: '<S248>/InWindow' */
    }
    else
    {
        if (1 != j)
        {
            /* InitializeConditions for IfAction SubSystem: '<S248>/OutOfWindow' incorporates:
             *  ActionPort: '<S283>/Action Port'
             */
            /* InitializeConditions for If: '<S248>/If' incorporates:
             *  UnitDelay: '<S283>/Unit Delay1'
             */
            SCPR_ac_DW.UnitDelay1_DSTATE_fy = false;

            /* End of InitializeConditions for SubSystem: '<S248>/OutOfWindow' */

            /* SystemReset for IfAction SubSystem: '<S248>/OutOfWindow' incorporates:
             *  ActionPort: '<S283>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S283>/Signal Latch On With Reset' */
            /* SystemReset for If: '<S248>/If' incorporates:
             *  UnitDelay: '<S288>/Unit Delay1'
             *  UnitDelay: '<S288>/Unit Delay2'
             */
            SCPR_ac_DW.UnitDelay1_DSTATE_iq = 0;
            SCPR_ac_DW.UnitDelay2_DSTATE_ir = false;

            /* End of SystemReset for SubSystem: '<S283>/Signal Latch On With Reset' */
            /* End of SystemReset for SubSystem: '<S248>/OutOfWindow' */
        }

        /* Outputs for IfAction SubSystem: '<S248>/OutOfWindow' incorporates:
         *  ActionPort: '<S283>/Action Port'
         */
        /* Switch: '<S283>/Switch2' */
        if (VeSCPR_b_checkFOTAconflict)
        {
            /* Switch: '<S283>/Switch2' */
            rtb_Sum2_h = VeSCPR_K_NowIndex_Min;
        }
        else
        {
            /* Switch: '<S283>/Switch2' incorporates:
             *  Constant: '<S283>/Constant'
             */
            rtb_Sum2_h = -1000;
        }

        /* End of Switch: '<S283>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S283>/Signal Latch On With Reset' */
        /* Switch: '<S288>/Switch' incorporates:
         *  Logic: '<S288>/OR1'
         *  RelationalOperator: '<S288>/Comparison5'
         *  UnitDelay: '<S288>/Unit Delay1'
         *  UnitDelay: '<S288>/Unit Delay2'
         */
        if ((rtb_Sum2_h == SCPR_ac_DW.UnitDelay1_DSTATE_iq) ||
                (SCPR_ac_DW.UnitDelay2_DSTATE_ir))
        {
            /* Switch: '<S288>/Switch' */
            VeSCPR_k_FOTAStart_Index = rtb_Sum2_h;
        }
        else
        {
            /* Switch: '<S288>/Switch' */
            VeSCPR_k_FOTAStart_Index = SCPR_ac_DW.UnitDelay1_DSTATE_iq;
        }

        /* End of Switch: '<S288>/Switch' */
        /* End of Outputs for SubSystem: '<S283>/Signal Latch On With Reset' */

        /* Switch: '<S283>/Switch5' incorporates:
         *  Constant: '<S282>/Calib'
         *  Constant: '<S283>/Constant2'
         *  Logic: '<S283>/Logical1'
         *  RelationalOperator: '<S283>/Comparison1'
         *  RelationalOperator: '<S283>/Comparison3'
         *  Sum: '<S283>/Sum4'
         *  Sum: '<S283>/Sum6'
         */
        if ((((sint16)(VeSCPR_K_NextSch_ChrgStart - KeSCPR_k_FOTAMaxInstallTime))
             <= 0) && (VeSCPR_k_FOTAStart_Index > KeSCPR_k_FOTAMaxInstallTime))
        {
            rtb_day = (sint16)(VeSCPR_K_NextSch_ChrgStart +
                               VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            rtb_day = VeSCPR_K_NextSch_ChrgStart;
        }

        /* End of Switch: '<S283>/Switch5' */

        /* Abs: '<S283>/Abs' incorporates:
         *  Sum: '<S283>/Sum7'
         */
        rtb_Sum2_h = (sint16)(rtb_day - VeSCPR_k_FOTAStart_Index);

        /* Abs: '<S283>/Abs' */
        if (rtb_Sum2_h < 0)
        {
            i = -((sint32)rtb_Sum2_h);
            if ((-rtb_Sum2_h) > 32767)
            {
                i = 32767;
            }

            /* Abs: '<S283>/Abs' */
            rtb_Sum2_h = (sint16)i;
        }

        /* End of Abs: '<S283>/Abs' */

        /* Merge: '<S248>/Merge' incorporates:
         *  Constant: '<S282>/Calib'
         *  RelationalOperator: '<S283>/Comparison2'
         */
        VeSCPR_b_FOTA_Conflict = (rtb_Sum2_h <= KeSCPR_k_FOTAMaxInstallTime);

        /* Update for Atomic SubSystem: '<S283>/Signal Latch On With Reset' */
        /* Update for UnitDelay: '<S288>/Unit Delay1' */
        SCPR_ac_DW.UnitDelay1_DSTATE_iq = VeSCPR_k_FOTAStart_Index;

        /* Update for UnitDelay: '<S288>/Unit Delay2' incorporates:
         *  Logic: '<S283>/Logical11'
         *  UnitDelay: '<S283>/Unit Delay1'
         */
        SCPR_ac_DW.UnitDelay2_DSTATE_ir = !SCPR_ac_DW.UnitDelay1_DSTATE_fy;

        /* End of Update for SubSystem: '<S283>/Signal Latch On With Reset' */

        /* Update for UnitDelay: '<S283>/Unit Delay1' */
        SCPR_ac_DW.UnitDelay1_DSTATE_fy = VeSCPR_b_checkFOTAconflict;

        /* End of Outputs for SubSystem: '<S248>/OutOfWindow' */
    }

    /* End of If: '<S248>/If' */

    /* Outputs for Enabled SubSystem: '<S114>/CancelLogic' incorporates:
     *  EnablePort: '<S211>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S212>/FOTA_CancelLogic' incorporates:
     *  EnablePort: '<S246>/Enable'
     */
    /* Constant: '<S249>/Calib' */
    if (HeSCPR_b_CancelAndButtonLogic_enbl)
    {
        /* Outputs for Atomic SubSystem: '<S246>/EdgeRising2' */
        /* Logic: '<S250>/OR1' incorporates:
         *  UnitDelay: '<S250>/Unit Delay'
         */
        rtb_OR1_ep = !SCPR_ac_DW.UnitDelay_DSTATE_kkk;

        /* Update for UnitDelay: '<S250>/Unit Delay' incorporates:
         *  DataStoreRead: '<S246>/Data Store Read3'
         */
        SCPR_ac_DW.UnitDelay_DSTATE_kkk = FeSCPR_b_CancelActFOTA;

        /* Logic: '<S246>/Logical Operator3' incorporates:
         *  Constant: '<S251>/Constant'
         *  Constant: '<S252>/Constant'
         *  Constant: '<S254>/Constant'
         *  DataStoreRead: '<S246>/Data Store Read3'
         *  DataStoreWrite: '<S246>/Data Store Write'
         *  Logic: '<S246>/Logical Operator1'
         *  Logic: '<S246>/Logical Operator2'
         *  Logic: '<S250>/AND'
         *  RelationalOperator: '<S118>/Comparison5'
         *  RelationalOperator: '<S246>/Comparison12'
         *  RelationalOperator: '<S246>/Comparison13'
         *  RelationalOperator: '<S246>/Comparison14'
         *  Switch: '<S793>/Switch1'
         */
        FeSCPR_b_CancelActFOTA = ((((VeSCPR_b_CancelActive) && ((((uint32)
            VeSCPR_e_FOTA_Install_Type) == CeCITR_e_FOTANow) || (((uint32)
            VeSCPR_e_FOTA_Install_Type) == CeCITR_e_FOTASchedule))) && (((uint32)
            VeSCPR_b_FOTACommCharge_tmp) != CeCITR_e_Installation_Complete)) ||
            ((FeSCPR_b_CancelActFOTA) && rtb_OR1_ep));

        /* End of Outputs for SubSystem: '<S246>/EdgeRising2' */

        /* Outputs for Atomic SubSystem: '<S246>/Turn Off Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S256>/EdgeFalling1' */
        /* Logic: '<S257>/AND' incorporates:
         *  DataStoreRead: '<S246>/Data Store Read1'
         *  Logic: '<S257>/OR1'
         *  UnitDelay: '<S257>/Unit Delay'
         */
        rtb_OR1_ep = ((!FeSCPR_b_CancelActFOTA) &&
                      (SCPR_ac_DW.UnitDelay_DSTATE_gu));

        /* Update for UnitDelay: '<S257>/Unit Delay' incorporates:
         *  DataStoreRead: '<S246>/Data Store Read1'
         */
        SCPR_ac_DW.UnitDelay_DSTATE_gu = FeSCPR_b_CancelActFOTA;

        /* End of Outputs for SubSystem: '<S256>/EdgeFalling1' */

        /* Switch: '<S256>/Switch' */
        if (rtb_OR1_ep)
        {
            /* Switch: '<S256>/Switch' incorporates:
             *  Constant: '<S255>/Calib'
             */
            rtb_Switch1_hi = KeSCPR_k_FOTACancActDbnc;
        }
        else
        {
            /* Sum: '<S256>/Summation' incorporates:
             *  Constant: '<S256>/Constant Value'
             *  UnitDelay: '<S256>/Unit Delay'
             */
            i = ((sint32)SCPR_ac_DW.UnitDelay_DSTATE_if) - 1;
            if ((((sint32)SCPR_ac_DW.UnitDelay_DSTATE_if) - 1) < 0)
            {
                i = 0;
            }

            /* Switch: '<S256>/Switch' incorporates:
             *  Sum: '<S256>/Summation'
             */
            rtb_Switch1_hi = (uint16)i;
        }

        /* End of Switch: '<S256>/Switch' */

        /* Update for UnitDelay: '<S256>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_if = rtb_Switch1_hi;

        /* Logic: '<S246>/Logical Operator4' incorporates:
         *  Constant: '<S253>/Constant'
         *  Constant: '<S256>/Constant Value2'
         *  DataStoreRead: '<S246>/Data Store Read1'
         *  Logic: '<S246>/Logical Operator5'
         *  Logic: '<S246>/Logical Operator6'
         *  Logic: '<S256>/AND'
         *  RelationalOperator: '<S246>/Comparison15'
         *  RelationalOperator: '<S256>/Greater  Than'
         */
        VeSCPR_b_FOTA_CancelTrigger = ((((FeSCPR_b_CancelActFOTA) || (((sint32)
            rtb_Switch1_hi) > 0)) && (((uint32)VeSCPR_b_FOTACommCharge_tmp) ==
            CeCITR_e_Installation_Complete)) && ((!VeSCPR_b_FOTA_Conflict) &&
            (VeSCPR_b_InChrgWindow)));

        /* End of Outputs for SubSystem: '<S246>/Turn Off Delay Sample1' */

        /* Switch: '<S216>/Switch3' incorporates:
         *  UnitDelay: '<S216>/Unit Delay2'
         */
        if (SCPR_ac_DW.UnitDelay2_DSTATE_l)
        {
            /* Switch: '<S216>/Switch3' */
            VeSCPR_k_CancW_EndIndx = VeSCPR_K_NextSch_ChrgEnd;
        }
        else
        {
            /* Switch: '<S216>/Switch3' incorporates:
             *  DataStoreRead: '<S216>/Data Store Read1'
             */
            VeSCPR_k_CancW_EndIndx = SCPR_ac_DW.NeSCPR_e_EndIndexCanc;
        }

        /* End of Switch: '<S216>/Switch3' */

        /* DataStoreWrite: '<S216>/Data Store Write1' */
        SCPR_ac_DW.NeSCPR_e_EndIndexCanc = VeSCPR_k_CancW_EndIndx;

        /* Switch: '<S216>/Switch1' incorporates:
         *  DataStoreRead: '<S216>/Data Store Read'
         *  RelationalOperator: '<S216>/Comparison2'
         */
        if (SCPR_ac_DW.NeSCPR_e_CancStartIdxHold > VeSCPR_k_CancW_EndIndx)
        {
            /* Switch: '<S216>/Switch1' incorporates:
             *  Sum: '<S216>/Sum1'
             */
            VeSCPR_K_CancEndIndxProc = (sint16)(VeSCPR_k_CancW_EndIndx +
                VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            /* Switch: '<S216>/Switch1' */
            VeSCPR_K_CancEndIndxProc = VeSCPR_k_CancW_EndIndx;
        }

        /* End of Switch: '<S216>/Switch1' */

        /* Outputs for Atomic SubSystem: '<S218>/Turn On Delay Sample' */
        /* Outputs for Atomic SubSystem: '<S232>/EdgeRising' */
        /* Logic: '<S238>/AND' incorporates:
         *  Logic: '<S238>/OR1'
         *  UnitDelay: '<S238>/Unit Delay'
         */
        rtb_OR1_ep = !SCPR_ac_DW.UnitDelay_DSTATE_k3;

        /* Update for UnitDelay: '<S238>/Unit Delay' incorporates:
         *  Constant: '<S218>/TRUE Constant'
         */
        SCPR_ac_DW.UnitDelay_DSTATE_k3 = true;

        /* End of Outputs for SubSystem: '<S232>/EdgeRising' */

        /* Switch: '<S232>/Switch1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Constant: '<S232>/Constant Value'
         *  Logic: '<S232>/OR'
         *  MinMax: '<S232>/Minimum'
         *  Sum: '<S232>/Summation'
         *  UnitDelay: '<S232>/Unit Delay'
         */
        if (rtb_OR1_ep)
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value1'
             */
            rtb_Switch1_hi = 0U;
        }
        else if (KeSCPR_Cnt_CancW_WUDelay < ((uint16)(((uint32)
                    SCPR_ac_DW.UnitDelay_DSTATE_ei) + 1U)))
        {
            /* MinMax: '<S232>/Minimum' incorporates:
             *  Constant: '<S231>/Calib'
             *  Switch: '<S232>/Switch1'
             */
            rtb_Switch1_hi = KeSCPR_Cnt_CancW_WUDelay;
        }
        else
        {
            /* Switch: '<S232>/Switch1' incorporates:
             *  Constant: '<S232>/Constant Value'
             *  MinMax: '<S232>/Minimum'
             *  Sum: '<S232>/Summation'
             *  UnitDelay: '<S232>/Unit Delay'
             */
            rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_ei) +
                1U);
        }

        /* End of Switch: '<S232>/Switch1' */

        /* Logic: '<S232>/AND' incorporates:
         *  Constant: '<S231>/Calib'
         *  RelationalOperator: '<S232>/Greater  Than'
         */
        rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_Switch1_hi >=
            KeSCPR_Cnt_CancW_WUDelay);

        /* Update for UnitDelay: '<S232>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_ei = rtb_Switch1_hi;

        /* End of Outputs for SubSystem: '<S218>/Turn On Delay Sample' */

        /* UnitDelay: '<S220>/Unit Delay2' */
        rtb_Sum2_h = SCPR_ac_DW.UnitDelay2_DSTATE_h;

        /* Switch: '<S220>/Switch1' incorporates:
         *  DataStoreRead: '<S220>/Data Store Read4'
         *  Logic: '<S220>/Logical34'
         */
        if (!SCPR_ac_DW.NeSCPR_b_AllowCancel)
        {
            /* Switch: '<S220>/Switch1' */
            VeSCPR_K_CancIdx_proc = rtb_Sum2_h;
        }
        else
        {
            /* Switch: '<S220>/Switch1' incorporates:
             *  DataStoreRead: '<S220>/Data Store Read1'
             */
            VeSCPR_K_CancIdx_proc = SCPR_ac_DW.NeSCPR_e_CancelStartIndx;
        }

        /* End of Switch: '<S220>/Switch1' */

        /* If: '<S218>/If' incorporates:
         *  Logic: '<S218>/Logical'
         */
        if (!rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
        {
            /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem' incorporates:
             *  ActionPort: '<S229>/Action Port'
             */
            /* Switch: '<S229>/Switch3' incorporates:
             *  DataStoreRead: '<S229>/Data Store Read8'
             *  RelationalOperator: '<S229>/Comparison2'
             */
            if (SCPR_ac_DW.NeSCPR_e_LastNowIndex > VeSCPR_K_NowIndex_Min)
            {
                /* Switch: '<S229>/Switch3' incorporates:
                 *  Sum: '<S229>/Sum1'
                 */
                VeSCPR_K_NowIndexUpdateWU = (sint16)(VeSCPR_K_NowIndex_Min +
                    VeSCPR_k_NumOfMinPerWeek);
            }
            else
            {
                /* Switch: '<S229>/Switch3' */
                VeSCPR_K_NowIndexUpdateWU = VeSCPR_K_NowIndex_Min;
            }

            /* End of Switch: '<S229>/Switch3' */

            /* Merge: '<S218>/Merge' incorporates:
             *  SignalConversion: '<S229>/Signal Conversion1'
             */
            VeSCPR_K_NowIndxMinUpdated = VeSCPR_K_NowIndexUpdateWU;

            /* End of Outputs for SubSystem: '<S218>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S218>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S230>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S230>/Turn Off Delay Sample' */
            /* Outputs for Atomic SubSystem: '<S236>/EdgeFalling1' */
            /* UnitDelay: '<S237>/Unit Delay' */
            rtb_OR1_ep = SCPR_ac_DW.UnitDelay_DSTATE_do;

            /* Update for UnitDelay: '<S237>/Unit Delay' */
            SCPR_ac_DW.UnitDelay_DSTATE_do = VeSCPR_b_SchInNormalWind;

            /* Switch: '<S236>/Switch' incorporates:
             *  Logic: '<S237>/AND'
             *  Logic: '<S237>/OR1'
             */
            if ((!VeSCPR_b_SchInNormalWind) && rtb_OR1_ep)
            {
                /* Switch: '<S236>/Switch' incorporates:
                 *  Constant: '<S234>/Calib'
                 */
                rtb_Switch1_hi = KeSCPR_Cnt_CancW_WindEndDelay;
            }
            else
            {
                /* Sum: '<S236>/Summation' incorporates:
                 *  Constant: '<S236>/Constant Value'
                 *  UnitDelay: '<S236>/Unit Delay'
                 */
                i = ((sint32)SCPR_ac_DW.UnitDelay_DSTATE_li) - 1;
                if ((((sint32)SCPR_ac_DW.UnitDelay_DSTATE_li) - 1) < 0)
                {
                    i = 0;
                }

                /* Switch: '<S236>/Switch' incorporates:
                 *  Sum: '<S236>/Summation'
                 */
                rtb_Switch1_hi = (uint16)i;
            }

            /* End of Switch: '<S236>/Switch' */
            /* End of Outputs for SubSystem: '<S236>/EdgeFalling1' */

            /* Update for UnitDelay: '<S236>/Unit Delay' */
            SCPR_ac_DW.UnitDelay_DSTATE_li = rtb_Switch1_hi;

            /* Switch: '<S230>/Switch1' incorporates:
             *  Constant: '<S236>/Constant Value2'
             *  Logic: '<S230>/Logical'
             *  Logic: '<S236>/AND'
             *  RelationalOperator: '<S230>/Comparison1'
             *  RelationalOperator: '<S236>/Greater  Than'
             */
            if ((VeSCPR_K_NowIndex_Min < VeSCPR_K_CancIdx_proc) &&
                    ((VeSCPR_b_SchInNormalWind) || (((sint32)rtb_Switch1_hi) > 0)))
            {
                /* Switch: '<S230>/Switch1' incorporates:
                 *  Sum: '<S230>/Sum3'
                 */
                VeSCPR_K_NowIndexUpdateAW = (sint16)(VeSCPR_K_NowIndex_Min +
                    VeSCPR_k_NumOfMinPerWeek);
            }
            else
            {
                /* Switch: '<S230>/Switch1' */
                VeSCPR_K_NowIndexUpdateAW = VeSCPR_K_NowIndex_Min;
            }

            /* End of Switch: '<S230>/Switch1' */
            /* End of Outputs for SubSystem: '<S230>/Turn Off Delay Sample' */

            /* Merge: '<S218>/Merge' incorporates:
             *  SignalConversion: '<S230>/Signal Conversion'
             */
            VeSCPR_K_NowIndxMinUpdated = VeSCPR_K_NowIndexUpdateAW;

            /* End of Outputs for SubSystem: '<S218>/If Action Subsystem1' */
        }

        /* End of If: '<S218>/If' */

        /* Outputs for Atomic SubSystem: '<S217>/Turn On Delay Sample' */
        /* RelationalOperator: '<S227>/Greater  Than1' incorporates:
         *  UnitDelay: '<S227>/Unit Delay1'
         */
        rtb_OR1_ep = (VeSCPR_K_NowIndxMinUpdated ==
                      SCPR_ac_DW.UnitDelay1_DSTATE_p);

        /* Outputs for Atomic SubSystem: '<S227>/EdgeRising' */
        /* Logic: '<S228>/AND' incorporates:
         *  Logic: '<S228>/OR1'
         *  UnitDelay: '<S228>/Unit Delay'
         */
        rtb_Merge_n = (rtb_OR1_ep && (!SCPR_ac_DW.UnitDelay_DSTATE_dp0));

        /* Update for UnitDelay: '<S228>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_dp0 = rtb_OR1_ep;

        /* End of Outputs for SubSystem: '<S227>/EdgeRising' */

        /* Switch: '<S227>/Switch1' incorporates:
         *  Constant: '<S224>/Calib'
         *  Constant: '<S227>/Constant Value'
         *  Logic: '<S227>/OR'
         *  Logic: '<S227>/OR1'
         *  MinMax: '<S227>/Minimum'
         *  Sum: '<S227>/Summation'
         *  UnitDelay: '<S227>/Unit Delay'
         */
        if ((!rtb_OR1_ep) || rtb_Merge_n)
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  Constant: '<S227>/Constant Value1'
             */
            rtb_Switch1_hi = 0U;
        }
        else if (KeSCPR_Cnt_CancW_NowIndxDel < ((uint16)(((uint32)
                    SCPR_ac_DW.UnitDelay_DSTATE_pv) + 1U)))
        {
            /* MinMax: '<S227>/Minimum' incorporates:
             *  Constant: '<S224>/Calib'
             *  Switch: '<S227>/Switch1'
             */
            rtb_Switch1_hi = KeSCPR_Cnt_CancW_NowIndxDel;
        }
        else
        {
            /* Switch: '<S227>/Switch1' incorporates:
             *  Constant: '<S227>/Constant Value'
             *  MinMax: '<S227>/Minimum'
             *  Sum: '<S227>/Summation'
             *  UnitDelay: '<S227>/Unit Delay'
             */
            rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_pv) +
                1U);
        }

        /* End of Switch: '<S227>/Switch1' */

        /* Switch: '<S227>/Switch2' incorporates:
         *  Constant: '<S224>/Calib'
         *  Logic: '<S227>/AND'
         *  RelationalOperator: '<S227>/Greater  Than'
         */
        if (rtb_OR1_ep && (rtb_Switch1_hi >= KeSCPR_Cnt_CancW_NowIndxDel))
        {
            /* Switch: '<S227>/Switch2' */
            rtb_NextStart = VeSCPR_K_NowIndxMinUpdated;
        }
        else
        {
            /* Switch: '<S227>/Switch2' incorporates:
             *  UnitDelay: '<S227>/Unit Delay2'
             */
            rtb_NextStart = SCPR_ac_DW.UnitDelay2_DSTATE_i;
        }

        /* End of Switch: '<S227>/Switch2' */

        /* Update for UnitDelay: '<S227>/Unit Delay1' */
        SCPR_ac_DW.UnitDelay1_DSTATE_p = VeSCPR_K_NowIndxMinUpdated;

        /* Update for UnitDelay: '<S227>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_pv = rtb_Switch1_hi;

        /* Update for UnitDelay: '<S227>/Unit Delay2' */
        SCPR_ac_DW.UnitDelay2_DSTATE_i = rtb_NextStart;

        /* End of Outputs for SubSystem: '<S217>/Turn On Delay Sample' */

        /* Outputs for Atomic SubSystem: '<S217>/Signal Latch Off With Reset' */
        /* Logic: '<S225>/OR2' incorporates:
         *  Logic: '<S225>/OR'
         *  Logic: '<S225>/OR1'
         *  RelationalOperator: '<S217>/Comparison1'
         *  RelationalOperator: '<S217>/Comparison2'
         *  UnitDelay: '<S217>/Unit Delay5'
         *  UnitDelay: '<S225>/Unit Delay'
         */
        rtb_OR1_ep = ((rtb_NextStart < VeSCPR_K_CancEndIndxProc) &&
                      ((VeSCPR_K_CancEndIndxProc !=
                        SCPR_ac_DW.UnitDelay5_DSTATE_m) ||
                       (!SCPR_ac_DW.UnitDelay_DSTATE_m0)));

        /* Update for UnitDelay: '<S225>/Unit Delay' incorporates:
         *  Logic: '<S225>/OR3'
         */
        SCPR_ac_DW.UnitDelay_DSTATE_m0 = !rtb_OR1_ep;

        /* End of Outputs for SubSystem: '<S217>/Signal Latch Off With Reset' */

        /* Switch: '<S217>/Switch3' incorporates:
         *  UnitDelay: '<S217>/Unit Delay3'
         */
        VeSCPR_b_CancWindowOn = ((!SCPR_ac_DW.UnitDelay3_DSTATE_m) || rtb_OR1_ep);

        /* DataStoreWrite: '<S217>/Data Store Write1' */
        SCPR_ac_DW.NeSCPR_b_CancWindow = VeSCPR_b_CancWindowOn;

        /* UnitDelay: '<S211>/Unit Delay7' */
        rtb_Merge_n = SCPR_ac_DW.UnitDelay7_DSTATE;

        /* Switch: '<S219>/Switch5' incorporates:
         *  DataStoreWrite: '<S219>/Data Store Write5'
         */
        if (VeSCPR_b_CancelChunk_BEV)
        {
            SCPR_ac_DW.NeSCPR_b_CancSchedIsUF = rtb_Merge_n;
        }

        /* End of Switch: '<S219>/Switch5' */

        /* Outputs for Atomic SubSystem: '<S219>/EdgeFalling3' */
        /* Logic: '<S219>/Logical21' incorporates:
         *  DataStoreRead: '<S219>/Data Store Read12'
         *  DataStoreWrite: '<S219>/Data Store Write5'
         *  Logic: '<S219>/Logical22'
         *  Logic: '<S240>/AND'
         *  UnitDelay: '<S240>/Unit Delay'
         */
        VeSCPR_b_UnplugResume = (((!SCPR_ac_DW.NeSCPR_b_CancSchedIsUF) &&
            (SCPR_ac_DW.NeSCPR_b_CancWindow)) && (VeSCPR_b_ChrgNowRstLatch_tmp &&
            (SCPR_ac_DW.UnitDelay_DSTATE_pt)));

        /* End of Outputs for SubSystem: '<S219>/EdgeFalling3' */

        /* Logic: '<S219>/Logical31' incorporates:
         *  Constant: '<S241>/Calib'
         *  Logic: '<S219>/Logical26'
         *  Logic: '<S219>/Logical27'
         *  UnitDelay: '<S219>/Unit Delay1'
         */
        VeSCPR_b_SchChangeResume = (((!KeSCPR_b_EnableCancCanc) && rtb_Switch4_m)
            || (SCPR_ac_DW.UnitDelay1_DSTATE_nz));

        /* Outputs for Atomic SubSystem: '<S219>/EdgeFalling1' */
        /* UnitDelay: '<S245>/Unit Delay' incorporates:
         *  UnitDelay: '<S239>/Unit Delay'
         */
        rtb_AND_ck = SCPR_ac_DW.UnitDelay_DSTATE_lpc;

        /* Update for UnitDelay: '<S239>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_lpc = VeSCPR_b_WholeWeekOvrlp;

        /* Logic: '<S239>/OR1' incorporates:
         *  Logic: '<S217>/Logical34'
         */
        rtb_Comparison4_du = !VeSCPR_b_WholeWeekOvrlp;

        /* Logic: '<S219>/Logical1' incorporates:
         *  Logic: '<S239>/AND'
         *  Logic: '<S239>/OR1'
         */
        VeSCPR_b_SchedResumeTrg = (((VeSCPR_b_UnplugResume) ||
            (VeSCPR_b_SchChangeResume)) || (rtb_Comparison4_du && rtb_AND_ck));

        /* End of Outputs for SubSystem: '<S219>/EdgeFalling1' */

        /* Logic: '<S217>/Logical12' incorporates:
         *  DataStoreRead: '<S217>/Data Store Read'
         *  DataStoreRead: '<S217>/Data Store Read1'
         *  Delay: '<S217>/Integer Delay'
         *  Logic: '<S217>/Logical10'
         *  Logic: '<S217>/Logical11'
         */
        VeSCPR_b_CancW_ActiveTest = (((SCPR_ac_DW.NeSCPR_b_AllowCancel) &&
            (SCPR_ac_DW.NeSCPR_b_CancWindow)) ||
            ((SCPR_ac_DW.NeSCPR_b_CancWindow) &&
             (SCPR_ac_DW.IntegerDelay_DSTATE_i[0])));

        /* Logic: '<S217>/Logical13' incorporates:
         *  DataStoreRead: '<S217>/Data Store Read2'
         *  Logic: '<S217>/Logical14'
         *  Logic: '<S217>/Logical15'
         *  UnitDelay: '<S217>/Unit Delay4'
         */
        VeSCPR_b_CancW_ResetTest = ((!SCPR_ac_DW.NeSCPR_b_CancWindow) ||
            (!SCPR_ac_DW.UnitDelay4_DSTATE_o));

        /* Outputs for Atomic SubSystem: '<S217>/Signal Latch On With Reset' */
        /* Logic: '<S226>/OR1' incorporates:
         *  Logic: '<S226>/NOT'
         *  Logic: '<S226>/OR'
         *  UnitDelay: '<S226>/Unit Delay'
         */
        rtb_OR1_ep = ((VeSCPR_b_CancW_ActiveTest) || ((!VeSCPR_b_CancW_ResetTest)
                       && (SCPR_ac_DW.UnitDelay_DSTATE_gg)));

        /* Update for UnitDelay: '<S226>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_gg = rtb_OR1_ep;

        /* End of Outputs for SubSystem: '<S217>/Signal Latch On With Reset' */

        /* Switch: '<S217>/Switch2' */
        VeSCPR_b_CancelWindAllowed = ((!VeSCPR_b_SchedResumeTrg) && rtb_OR1_ep);

        /* DataStoreWrite: '<S217>/Data Store Write' */
        SCPR_ac_DW.NeSCPR_b_AllowCancel = VeSCPR_b_CancelWindAllowed;

        /* Logic: '<S217>/Logical34' */
        rtb_OR1_ep = rtb_Comparison4_du;

        /* Switch: '<S218>/Switch2' incorporates:
         *  DataStoreWrite: '<S218>/Data Store Write3'
         *  UnitDelay: '<S218>/Unit Delay1'
         */
        if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
        {
            SCPR_ac_DW.NeSCPR_e_LastNowIndex = SCPR_ac_DW.UnitDelay1_DSTATE_e;
        }

        /* End of Switch: '<S218>/Switch2' */

        /* DataStoreWrite: '<S220>/Data Store Write' */
        SCPR_ac_DW.NeSCPR_e_CancelStartIndx = VeSCPR_K_CancIdx_proc;

        /* UnitDelay: '<S245>/Unit Delay' incorporates:
         *  Logic: '<S221>/Logical3'
         *  Logic: '<S221>/Logical4'
         *  Logic: '<S221>/Logical5'
         */
        rtb_AND_ck = ((((VeSCPR_b_CancelChunk_BEV) && (!VeSCPR_b_CancelActive)) &&
                       (!VeSCPR_e_ChrgTypeIsDC)) && VeSCPR_b_SchChrgInWindow_tmp);

        /* Logic: '<S221>/Logical6' incorporates:
         *  Logic: '<S221>/Logical18'
         *  Logic: '<S221>/Logical32'
         *  Logic: '<S221>/Logical33'
         *  RelationalOperator: '<S373>/Comparison1'
         */
        VeSCPR_b_CancelTrigger = (((((VeSCPR_K_StartArrayPos !=
            VeSCPR_K_EndArrayPos) && (VeSCPR_b_xMinInWindFull)) ||
            (VeSCPR_b_SchInNormalWind)) && rtb_AND_ck) ||
            (VeSCPR_b_FOTA_CancelTrigger));

        /* Switch: '<S220>/Switch2' */
        if (VeSCPR_b_CancelTrigger)
        {
            /* Switch: '<S220>/Switch2' */
            VeSCPR_K_CancelStartIndx = rtb_Sum2_h;
        }
        else
        {
            /* Switch: '<S220>/Switch2' incorporates:
             *  DataStoreRead: '<S220>/Data Store Read'
             */
            VeSCPR_K_CancelStartIndx = SCPR_ac_DW.NeSCPR_e_CancStartIdxHold;
        }

        /* End of Switch: '<S220>/Switch2' */

        /* DataStoreWrite: '<S220>/Data Store Write1' */
        SCPR_ac_DW.NeSCPR_e_CancStartIdxHold = VeSCPR_K_CancelStartIndx;

        /* Logic: '<S221>/Logical1' */
        VeSCPR_b_CancelTriggerUF = (rtb_Merge_n && rtb_AND_ck);

        /* UnitDelay: '<S245>/Unit Delay' incorporates:
         *  DataStoreRead: '<S222>/Data Store Read6'
         *  Logic: '<S222>/Logical2'
         */
        rtb_AND_ck = ((VeSCPR_b_CancelTriggerUF) && (SCPR_ac_DW.NeSCPR_b_xMinUF));

        /* Switch: '<S222>/Switch4' incorporates:
         *  DataStoreRead: '<S222>/Data Store Read6'
         *  Logic: '<S222>/Logical3'
         *  Logic: '<S222>/Logical4'
         */
        if (rtb_AND_ck || (!SCPR_ac_DW.NeSCPR_b_xMinUF))
        {
            /* Switch: '<S222>/Switch4' */
            VeSCPR_b_xMinUFCancelTest = rtb_AND_ck;
        }
        else
        {
            /* Switch: '<S222>/Switch4' incorporates:
             *  DataStoreRead: '<S222>/Data Store Read7'
             */
            VeSCPR_b_xMinUFCancelTest = SCPR_ac_DW.NeSCPR_b_xMinUFCancel;
        }

        /* End of Switch: '<S222>/Switch4' */

        /* DataStoreWrite: '<S222>/Data Store Write4' */
        SCPR_ac_DW.NeSCPR_b_xMinUFCancel = VeSCPR_b_xMinUFCancelTest;

        /* Outputs for Atomic SubSystem: '<S222>/Turn On Delay Sample1' */
        /* Outputs for Atomic SubSystem: '<S244>/EdgeRising' */
        /* Logic: '<S245>/AND' incorporates:
         *  Logic: '<S245>/OR1'
         *  UnitDelay: '<S245>/Unit Delay'
         */
        rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = !SCPR_ac_DW.UnitDelay_DSTATE_gs;

        /* Update for UnitDelay: '<S245>/Unit Delay' incorporates:
         *  Constant: '<S222>/TRUE Constant'
         */
        SCPR_ac_DW.UnitDelay_DSTATE_gs = true;

        /* End of Outputs for SubSystem: '<S244>/EdgeRising' */

        /* Switch: '<S244>/Switch1' incorporates:
         *  Constant: '<S242>/Calib'
         *  Constant: '<S244>/Constant Value'
         *  Logic: '<S244>/OR'
         *  MinMax: '<S244>/Minimum'
         *  Sum: '<S244>/Summation'
         *  UnitDelay: '<S244>/Unit Delay'
         */
        if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
        {
            /* Switch: '<S244>/Switch1' incorporates:
             *  Constant: '<S244>/Constant Value1'
             */
            rtb_Switch1_hi = 0U;
        }
        else if (KeSCPR_Cnt_UFDelayAtWU < ((uint16)(((uint32)
                    SCPR_ac_DW.UnitDelay_DSTATE_bm) + 1U)))
        {
            /* MinMax: '<S244>/Minimum' incorporates:
             *  Constant: '<S242>/Calib'
             *  Switch: '<S244>/Switch1'
             */
            rtb_Switch1_hi = KeSCPR_Cnt_UFDelayAtWU;
        }
        else
        {
            /* Switch: '<S244>/Switch1' incorporates:
             *  Constant: '<S244>/Constant Value'
             *  MinMax: '<S244>/Minimum'
             *  Sum: '<S244>/Summation'
             *  UnitDelay: '<S244>/Unit Delay'
             */
            rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_bm) +
                1U);
        }

        /* End of Switch: '<S244>/Switch1' */

        /* Update for UnitDelay: '<S244>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_bm = rtb_Switch1_hi;

        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S242>/Calib'
         *  DataStoreWrite: '<S222>/Data Store Write3'
         *  RelationalOperator: '<S244>/Greater  Than'
         */
        if (rtb_Switch1_hi >= KeSCPR_Cnt_UFDelayAtWU)
        {
            SCPR_ac_DW.NeSCPR_b_xMinUF = VeSCPR_b_xMinInWindFull;
        }

        /* End of Switch: '<S222>/Switch1' */
        /* End of Outputs for SubSystem: '<S222>/Turn On Delay Sample1' */

        /* Gain: '<S243>/Gain' incorporates:
         *  DataStoreRead: '<S222>/Data Store Read11'
         */
        VeSCPR_b_xMinUFWindow = SCPR_ac_DW.NeSCPR_b_xMinUF;
    }

    /* End of Constant: '<S249>/Calib' */
    /* End of Outputs for SubSystem: '<S212>/FOTA_CancelLogic' */
    /* End of Outputs for SubSystem: '<S114>/CancelLogic' */

    /* RelationalOperator: '<S247>/Comparison9' incorporates:
     *  Constant: '<S260>/Constant'
     *  RelationalOperator: '<S118>/Comparison5'
     *  Switch: '<S793>/Switch1'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_FOTASchedule);

    /* Logic: '<S247>/Logical4' incorporates:
     *  Constant: '<S259>/Constant'
     *  Constant: '<S263>/Constant'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S247>/Comparison1'
     *  RelationalOperator: '<S247>/Comparison6'
     *  Switch: '<S793>/Switch1'
     */
    VeSCPR_b_FOTA_NoFOTAChrgAllwd = ((((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_NoFOTA) && (((uint32)VeSCPR_b_FOTACommCharge_tmp) !=
        CeCITR_e_Installation_Started));

    /* Logic: '<S247>/Logical5' incorporates:
     *  Constant: '<S258>/Constant'
     *  Constant: '<S264>/Constant'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S247>/Comparison3'
     *  RelationalOperator: '<S247>/Comparison5'
     *  Switch: '<S793>/Switch1'
     */
    VeSCPR_b_FOTA_FOTANowChrgAllwd = ((((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_FOTANow) && (((uint32)VeSCPR_b_FOTACommCharge_tmp) ==
        CeCITR_e_Installation_Complete));

    /* Logic: '<S247>/Logical2' incorporates:
     *  Constant: '<S261>/Constant'
     *  Logic: '<S247>/Logical6'
     *  RelationalOperator: '<S247>/Comparison7'
     */
    rtb_Merge_n = ((!rtb_VeSCPR_b_CoCH_ImmSOC_ChReq) || (((uint32)
                     VeSCPR_b_FOTACommCharge_tmp) !=
                    CeCITR_e_Installation_Complete));

    /* Outputs for Atomic SubSystem: '<S247>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising' */
    /* Logic: '<S267>/OR1' incorporates:
     *  UnitDelay: '<S267>/Unit Delay'
     */
    rtb_AND_ck = !SCPR_ac_DW.UnitDelay_DSTATE_ac;

    /* Update for UnitDelay: '<S267>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ac = rtb_Merge_n;

    /* End of Outputs for SubSystem: '<S266>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising1' */
    /* Logic: '<S268>/OR1' incorporates:
     *  UnitDelay: '<S268>/Unit Delay'
     */
    rtb_Comparison4_du = !SCPR_ac_DW.UnitDelay_DSTATE_ay;

    /* Update for UnitDelay: '<S268>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ay = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S266>/EdgeRising1' */

    /* Logic: '<S266>/OR1' incorporates:
     *  Logic: '<S266>/AND'
     */
    tmp_3 = !rtb_Merge_n;

    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S266>/EdgeRising1' */
    /* Switch: '<S266>/Switch1' incorporates:
     *  Constant: '<S265>/Calib'
     *  Constant: '<S266>/Constant Value'
     *  Logic: '<S266>/AND1'
     *  Logic: '<S266>/OR'
     *  Logic: '<S266>/OR1'
     *  Logic: '<S267>/AND'
     *  Logic: '<S268>/AND'
     *  MinMax: '<S266>/Minimum'
     *  Sum: '<S266>/Summation'
     *  UnitDelay: '<S266>/Unit Delay'
     */
    if (tmp_3 || ((rtb_Merge_n && rtb_AND_ck) || (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq
          && rtb_Comparison4_du)))
    {
        /* Switch: '<S266>/Switch1' incorporates:
         *  Constant: '<S266>/Constant Value1'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (KeSCPR_Cnt_FOTACancelWait < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_fx) + 1U)))
    {
        /* MinMax: '<S266>/Minimum' incorporates:
         *  Constant: '<S265>/Calib'
         *  Switch: '<S266>/Switch1'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_FOTACancelWait;
    }
    else
    {
        /* Switch: '<S266>/Switch1' incorporates:
         *  Constant: '<S266>/Constant Value'
         *  MinMax: '<S266>/Minimum'
         *  Sum: '<S266>/Summation'
         *  UnitDelay: '<S266>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_fx) + 1U);
    }

    /* End of Switch: '<S266>/Switch1' */
    /* End of Outputs for SubSystem: '<S266>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S266>/EdgeRising' */

    /* Update for UnitDelay: '<S266>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fx = rtb_Switch1_hi;

    /* Logic: '<S247>/Logical7' incorporates:
     *  Constant: '<S262>/Constant'
     *  Constant: '<S265>/Calib'
     *  Logic: '<S247>/Logical3'
     *  Logic: '<S266>/AND'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S247>/Comparison21'
     *  RelationalOperator: '<S266>/Greater  Than'
     *  Switch: '<S793>/Switch1'
     */
    VeSCPR_b_FOTA_FOTASchChrgAllwd = ((tmp_3 || (rtb_Switch1_hi <
        KeSCPR_Cnt_FOTACancelWait)) || (((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_FOTACancelled));

    /* End of Outputs for SubSystem: '<S247>/Turn On Delay Sample' */

    /* Logic: '<S247>/Logical1' */
    VeSCPR_b_FOTAAllowsCharge = (((VeSCPR_b_FOTA_NoFOTAChrgAllwd) ||
        (VeSCPR_b_FOTA_FOTANowChrgAllwd)) || (VeSCPR_b_FOTA_FOTASchChrgAllwd));

    /* Outputs for Atomic SubSystem: '<S248>/EdgeRising4' */
    /* Logic: '<S271>/OR1' incorporates:
     *  UnitDelay: '<S271>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = !SCPR_ac_DW.UnitDelay_DSTATE_mqr;

    /* Update for UnitDelay: '<S271>/Unit Delay' incorporates:
     *  DataStoreRead: '<S248>/Data Store Read5'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_mqr = FeSCPR_b_FOTA_Conflict;

    /* Logic: '<S248>/Logical8' incorporates:
     *  DataStoreRead: '<S248>/Data Store Read5'
     *  Logic: '<S271>/AND'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (((FeSCPR_b_FOTA_Conflict) &&
        rtb_VeSCPR_b_CoCH_ImmSOC_ChReq) || (VeSCPR_b_checkFOTAconflict));

    /* End of Outputs for SubSystem: '<S248>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S248>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S285>/EdgeFalling1' */
    /* Logic: '<S289>/AND' incorporates:
     *  Logic: '<S289>/OR1'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    rtb_Merge_n = ((!rtb_VeSCPR_b_CoCH_ImmSOC_ChReq) &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_nt));

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nt = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S285>/EdgeFalling1' */

    /* Switch: '<S285>/Switch' */
    if (rtb_Merge_n)
    {
        /* Sum: '<S285>/Summation1' incorporates:
         *  Constant: '<S281>/Calib'
         *  Constant: '<S285>/Constant Value3'
         */
        rtb_Switch2_h_idx_0 = ((uint32)KeSCPR_Cnt_FOTAcnflt_DelayWU) + 2U;
        if ((((uint32)KeSCPR_Cnt_FOTAcnflt_DelayWU) + 2U) > 65535U)
        {
            rtb_Switch2_h_idx_0 = 65535U;
        }

        /* Switch: '<S285>/Switch' incorporates:
         *  Sum: '<S285>/Summation1'
         */
        rtb_Switch1_hi = (uint16)rtb_Switch2_h_idx_0;
    }
    else
    {
        /* Sum: '<S285>/Summation' incorporates:
         *  Constant: '<S285>/Constant Value'
         *  UnitDelay: '<S285>/Unit Delay'
         */
        i = ((sint32)SCPR_ac_DW.UnitDelay_DSTATE_ft) - 1;
        if ((((sint32)SCPR_ac_DW.UnitDelay_DSTATE_ft) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S285>/Switch' incorporates:
         *  Sum: '<S285>/Summation'
         */
        rtb_Switch1_hi = (uint16)i;
    }

    /* End of Switch: '<S285>/Switch' */

    /* Update for UnitDelay: '<S285>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ft = rtb_Switch1_hi;

    /* RelationalOperator: '<S248>/Comparison16' incorporates:
     *  Constant: '<S285>/Constant Value2'
     *  DataStoreRead: '<S248>/Data Store Read5'
     *  Logic: '<S285>/AND'
     *  RelationalOperator: '<S285>/Greater  Than'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (((sint32)((rtb_VeSCPR_b_CoCH_ImmSOC_ChReq ||
        (((sint32)rtb_Switch1_hi) > 0)) ? 1 : 0)) != ((sint32)
        (FeSCPR_b_FOTA_Conflict ? 1 : 0)));

    /* End of Outputs for SubSystem: '<S248>/Turn Off Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S248>/EdgeRising3' */
    /* Logic: '<S270>/OR1' incorporates:
     *  UnitDelay: '<S270>/Unit Delay'
     */
    rtb_Merge_n = !SCPR_ac_DW.UnitDelay_DSTATE_jy;

    /* Update for UnitDelay: '<S270>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_jy = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* Outputs for Enabled SubSystem: '<S248>/SaveFOTAConflict' incorporates:
     *  EnablePort: '<S284>/Enable'
     */
    /* Logic: '<S270>/AND' */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq && rtb_Merge_n)
    {
        /* DataStoreWrite: '<S284>/Data Store Write2' */
        FeSCPR_b_FOTA_Conflict = VeSCPR_b_FOTA_Conflict;
    }

    /* End of Logic: '<S270>/AND' */
    /* End of Outputs for SubSystem: '<S248>/SaveFOTAConflict' */
    /* End of Outputs for SubSystem: '<S248>/EdgeRising3' */

    /* Logic: '<S580>/Logical1' incorporates:
     *  Constant: '<S279>/Constant'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S248>/Comparison2'
     *  Switch: '<S793>/Switch1'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (((uint32)VeSCPR_e_FOTA_Install_Type) ==
        CeCITR_e_FOTASchedule);

    /* Logic: '<S248>/Logical5' incorporates:
     *  Constant: '<S278>/Constant'
     *  Logic: '<S248>/Logical4'
     *  Logic: '<S248>/Logical6'
     *  RelationalOperator: '<S248>/Comparison1'
     *  Switch: '<S809>/Switch2'
     */
    VeSCPR_b_FOTASch_ACDC_Confl = (((((uint32)VeSCPR_e_ChrgSysStat) ==
        CeOBCR_e_Charging) && rtb_VeSCPR_b_CoCH_ImmSOC_ChReq) ||
        (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq && (VeSCPR_e_ChrgTypeIsDC)));

    /* Logic: '<S248>/Logical7' incorporates:
     *  Constant: '<S276>/Constant'
     *  DataStoreRead: '<S248>/Data Store Read2'
     *  Logic: '<S248>/Logical19'
     *  RelationalOperator: '<S118>/Comparison5'
     *  RelationalOperator: '<S248>/Comparison10'
     *  Switch: '<S793>/Switch1'
     */
    VeSCPR_b_FOTASched_Conflict = (((FeSCPR_b_FOTA_Conflict) && (((uint32)
        VeSCPR_e_FOTA_Install_Type) == CeCITR_e_FOTASchedule)) ||
        (VeSCPR_b_FOTASch_ACDC_Confl));

    /* Outputs for Atomic SubSystem: '<S215>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S315>/Calib'
     *  Constant: '<S317>/Constant Value'
     *  Logic: '<S317>/OR'
     *  Logic: '<S322>/AND'
     *  Logic: '<S322>/OR1'
     *  MinMax: '<S317>/Minimum'
     *  Sum: '<S317>/Summation'
     *  UnitDelay: '<S317>/Unit Delay'
     *  UnitDelay: '<S322>/Unit Delay'
     */
    if (VeSCPR_b_ChrgNowRstLatch_tmp || ((VeSCPR_b_PluggedIn) &&
            (!SCPR_ac_DW.UnitDelay_DSTATE_oq)))
    {
        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S317>/Constant Value1'
         */
        rtb_Switch1_hi = 0U;
    }
    else if (KeSCPR_Cnt_PlugInDelayUF < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_hg) + 1U)))
    {
        /* MinMax: '<S317>/Minimum' incorporates:
         *  Constant: '<S315>/Calib'
         *  Switch: '<S317>/Switch1'
         */
        rtb_Switch1_hi = KeSCPR_Cnt_PlugInDelayUF;
    }
    else
    {
        /* Switch: '<S317>/Switch1' incorporates:
         *  Constant: '<S317>/Constant Value'
         *  MinMax: '<S317>/Minimum'
         *  Sum: '<S317>/Summation'
         *  UnitDelay: '<S317>/Unit Delay'
         */
        rtb_Switch1_hi = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_hg) + 1U);
    }

    /* End of Switch: '<S317>/Switch1' */
    /* End of Outputs for SubSystem: '<S317>/EdgeRising' */

    /* Logic: '<S317>/AND' incorporates:
     *  Constant: '<S315>/Calib'
     *  RelationalOperator: '<S317>/Greater  Than'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = ((VeSCPR_b_PluggedIn) && (rtb_Switch1_hi >=
        KeSCPR_Cnt_PlugInDelayUF));

    /* End of Outputs for SubSystem: '<S215>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling' */
    /* Logic: '<S324>/OR1' incorporates:
     *  Logic: '<S318>/Logical13'
     */
    rtb_Logical1_oz = !rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* Logic: '<S324>/AND' incorporates:
     *  Logic: '<S324>/OR1'
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_Merge_n = (rtb_Logical1_oz && (SCPR_ac_DW.UnitDelay_DSTATE_hls));

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_hls = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S318>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S318>/EdgeRising2' */
    /* Logic: '<S328>/OR1' incorporates:
     *  UnitDelay: '<S328>/Unit Delay'
     */
    rtb_AND_ck = !SCPR_ac_DW.UnitDelay_DSTATE_lip;

    /* Update for UnitDelay: '<S328>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_lip = VeSCPR_b_SCPRChargeComplete;

    /* Logic: '<S318>/Logical1' incorporates:
     *  Logic: '<S328>/AND'
     */
    VeSCPR_b_DisableUF_Test1 = (rtb_Merge_n || ((VeSCPR_b_SCPRChargeComplete) &&
        rtb_AND_ck));

    /* End of Outputs for SubSystem: '<S318>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling3' */
    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling2' */
    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling1' */
    /* Logic: '<S318>/Logical15' incorporates:
     *  Logic: '<S325>/OR1'
     *  Logic: '<S326>/OR1'
     *  Logic: '<S327>/OR1'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = !VeSCPR_b_xMinUFWindow;

    /* End of Outputs for SubSystem: '<S318>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S318>/EdgeFalling2' */
    /* End of Outputs for SubSystem: '<S318>/EdgeFalling3' */

    /* Logic: '<S318>/Logical5' incorporates:
     *  Logic: '<S318>/Logical15'
     */
    VeSCPR_b_DisableUF_Test2 = (((VeSCPR_b_DisableUF_Test1) &&
        (VeSCPR_b_NowInUFWindow)) && rtb_VeSCPR_b_CoCH_ImmSOC_ChReq);

    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset5' */
    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset4' */
    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset' */
    /* Logic: '<S331>/NOT' incorporates:
     *  Logic: '<S333>/NOT'
     *  Logic: '<S335>/NOT'
     *  Logic: '<S336>/NOT'
     *  UnitDelay: '<S316>/Unit Delay2'
     */
    VeSCPR_b_ChrgNowRstLatch_tmp = !SCPR_ac_DW.UnitDelay2_DSTATE_ha;

    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset4' */
    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset5' */

    /* Logic: '<S331>/OR1' incorporates:
     *  Logic: '<S331>/NOT'
     *  Logic: '<S331>/OR'
     *  UnitDelay: '<S331>/Unit Delay'
     */
    VeSCPR_b_DisableUF_Test3 = ((VeSCPR_b_DisableUF_Test2) ||
        (VeSCPR_b_ChrgNowRstLatch_tmp && (SCPR_ac_DW.UnitDelay_DSTATE_nxv)));

    /* Update for UnitDelay: '<S331>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nxv = VeSCPR_b_DisableUF_Test3;

    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising' */
    /* Logic: '<S350>/AND' incorporates:
     *  Logic: '<S350>/OR1'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    rtb_Merge_n = (rtb_Logical1_d0 && (!SCPR_ac_DW.UnitDelay_DSTATE_pr));

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_pr = rtb_Logical1_d0;

    /* End of Outputs for SubSystem: '<S340>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising1' */
    /* Logic: '<S351>/AND' incorporates:
     *  Logic: '<S351>/OR1'
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_AND_ck = (rtb_AND_liv && (!SCPR_ac_DW.UnitDelay_DSTATE_fd));

    /* Update for UnitDelay: '<S351>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fd = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S340>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset4' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeFalling6' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeFalling5' */
    /* Logic: '<S335>/OR1' incorporates:
     *  Constant: '<S340>/Constant'
     *  Constant: '<S340>/Constant1'
     *  Logic: '<S335>/OR'
     *  Logic: '<S340>/Logical10'
     *  Logic: '<S340>/Logical15'
     *  Logic: '<S340>/Logical17'
     *  Logic: '<S340>/Logical21'
     *  Logic: '<S340>/Logical22'
     *  Logic: '<S348>/AND'
     *  Logic: '<S349>/AND'
     *  RelationalOperator: '<S340>/Comparison1'
     *  RelationalOperator: '<S340>/Comparison4'
     *  UnitDelay: '<S335>/Unit Delay'
     *  UnitDelay: '<S348>/Unit Delay'
     *  UnitDelay: '<S349>/Unit Delay'
     */
    VeSCPR_b_UFschedChange = ((((rtb_UnitDelay1_iqj == 1) &&
        ((rtb_RelatonalOperator2_idx_2 && (SCPR_ac_DW.UnitDelay_DSTATE_gin)) ||
         rtb_Merge_n)) || ((rtb_UnitDelay1_iqj == 2) && ((tmp &&
        (SCPR_ac_DW.UnitDelay_DSTATE_dz)) || rtb_AND_ck))) ||
        (VeSCPR_b_ChrgNowRstLatch_tmp && (SCPR_ac_DW.UnitDelay_DSTATE_iw)));

    /* End of Outputs for SubSystem: '<S340>/EdgeFalling5' */
    /* End of Outputs for SubSystem: '<S340>/EdgeFalling6' */

    /* Update for UnitDelay: '<S335>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_iw = VeSCPR_b_UFschedChange;

    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset4' */

    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling1' */
    /* UnitDelay: '<S445>/Unit Delay' incorporates:
     *  UnitDelay: '<S325>/Unit Delay'
     */
    rtb_Comparison4_du = SCPR_ac_DW.UnitDelay_DSTATE_ev;

    /* Update for UnitDelay: '<S325>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ev = VeSCPR_b_xMinUFWindow;

    /* Logic: '<S318>/Logical11' incorporates:
     *  Logic: '<S325>/AND'
     */
    VeSCPR_b_noPlugOnTimePulse = ((rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
        rtb_Comparison4_du) && rtb_Logical1_oz);

    /* End of Outputs for SubSystem: '<S318>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling2' */
    /* UnitDelay: '<S445>/Unit Delay' incorporates:
     *  UnitDelay: '<S326>/Unit Delay'
     */
    rtb_Comparison4_du = SCPR_ac_DW.UnitDelay_DSTATE_dk;

    /* Update for UnitDelay: '<S326>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_dk = VeSCPR_b_xMinUFWindow;

    /* Logic: '<S318>/Logical9' incorporates:
     *  Logic: '<S326>/AND'
     */
    VeSCPR_b_BattAlreadyFullPulse = ((rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
        rtb_Comparison4_du) && (VeSCPR_b_SCPRChargeComplete));

    /* End of Outputs for SubSystem: '<S318>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S318>/EdgeFalling3' */
    /* Logic: '<S327>/AND' incorporates:
     *  UnitDelay: '<S327>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
        (SCPR_ac_DW.UnitDelay_DSTATE_cj));

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cj = VeSCPR_b_xMinUFWindow;

    /* End of Outputs for SubSystem: '<S318>/EdgeFalling3' */

    /* Outputs for Atomic SubSystem: '<S318>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S339>/Signal Latch On With Reset' */
    /* Logic: '<S347>/OR1' incorporates:
     *  Logic: '<S347>/NOT'
     *  Logic: '<S347>/OR'
     *  UnitDelay: '<S339>/Unit Delay1'
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq ||
        ((!SCPR_ac_DW.UnitDelay1_DSTATE_eb) && (SCPR_ac_DW.UnitDelay_DSTATE_ips)));

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ips = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S339>/Signal Latch On With Reset' */

    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S329>/Calib'
     *  Constant: '<S339>/Constant Value'
     *  Logic: '<S339>/Logical Operator'
     *  MinMax: '<S339>/Minimum'
     *  Sum: '<S339>/Summation'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    if (!rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S339>/Constant Value1'
         */
        rtb_Switch1_e0 = 0U;
    }
    else if (KeSCPR_Cnt_CoCH_VehLocDbnc < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_fh) + 1U)))
    {
        /* MinMax: '<S339>/Minimum' incorporates:
         *  Constant: '<S329>/Calib'
         *  Switch: '<S339>/Switch1'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_CoCH_VehLocDbnc;
    }
    else
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S339>/Constant Value'
         *  MinMax: '<S339>/Minimum'
         *  Sum: '<S339>/Summation'
         *  UnitDelay: '<S339>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_fh) + 1U);
    }

    /* End of Switch: '<S339>/Switch1' */

    /* RelationalOperator: '<S339>/Greater  Than' incorporates:
     *  Constant: '<S329>/Calib'
     */
    rtb_Merge_n = (rtb_Switch1_e0 >= KeSCPR_Cnt_CoCH_VehLocDbnc);

    /* Update for UnitDelay: '<S339>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_eb = rtb_Merge_n;

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fh = rtb_Switch1_e0;

    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset2' */
    /* Logic: '<S333>/OR1' incorporates:
     *  Logic: '<S318>/Logical14'
     *  Logic: '<S318>/Logical2'
     *  Logic: '<S333>/OR'
     *  Logic: '<S339>/AND'
     *  UnitDelay: '<S333>/Unit Delay'
     */
    VeSCPR_b_noPlugOrBattFull = ((((VeSCPR_b_noPlugOnTimePulse) ||
        (VeSCPR_b_BattAlreadyFullPulse)) || ((rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
        rtb_Merge_n) && rtb_AND_dp)) || (VeSCPR_b_ChrgNowRstLatch_tmp &&
        (SCPR_ac_DW.UnitDelay_DSTATE_ae)));

    /* End of Outputs for SubSystem: '<S318>/Turn On Delay Sample2' */

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ae = VeSCPR_b_noPlugOrBattFull;

    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset2' */
    for (i = 0; i < 14; i++)
    {
        /* Gain: '<S456>/Gain' */
        VaSCPR_K_SchGlobalUF[(i)] = SCPR_ac_B.GlobalUF[i];
    }

    /* Gain: '<S460>/Gain' incorporates:
     *  Chart: '<S373>/ChargeUF'
     */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/ChargeUF */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/ChargeUF */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/ChargeUF */
    /* Transition: '<S448>:43' */
    VeSCPR_b_UntilFullWindow = false;

    /* Chart: '<S373>/ChargeUF' */
    rtb_Merge_n = false;
    SCPR_ac_DW.backFlag = false;

    /* Update for UnitDelay: '<S318>/Unit Delay1' incorporates:
     *  Chart: '<S373>/ChargeUF'
     */
    SCPR_ac_DW.UnitDelay1_DSTATE_j = 0;

    /* Chart: '<S373>/ChargeUF' */
    if ((!VeSCPR_b_WholeWeekOvrlp) && (VeSCPR_K_EndArrayPos >= 0))
    {
        /* Transition: '<S448>:46' */
        j = VeSCPR_K_EndArrayPos;
        do
        {
            exitg2 = 0;
            if (j >= VeSCPR_K_CurrentIndex)
            {
                /* Transition: '<S448>:50' */
                if (VaSCPR_K_SchGlobalUF[(j)] > 0)
                {
                    /* Transition: '<S448>:53' */
                    /* Transition: '<S448>:55' */
                    VeSCPR_b_UntilFullWindow = SCPR_ac_UFwindow(j);
                    exitg2 = 1;
                }
                else
                {
                    /* Transition: '<S448>:57' */
                    rtb_Merge_n = true;

                    /* Transition: '<S448>:59' */
                    j--;
                }
            }
            else if (!rtb_Merge_n)
            {
                /* Transition: '<S448>:77' */
                do
                {
                    exitg1 = 0;
                    if (j >= 0)
                    {
                        /* Transition: '<S448>:67' */
                        if (VaSCPR_K_SchGlobalUF[(j)] > 0)
                        {
                            /* Transition: '<S448>:72' */
                            /* Transition: '<S448>:70' */
                            SCPR_ac_DW.backFlag = true;
                            VeSCPR_b_UntilFullWindow = SCPR_ac_UFwindow(j);

                            /* Transition: '<S448>:81' */
                            /* Transition: '<S448>:105' */
                            exitg1 = 1;
                        }
                        else
                        {
                            /* Transition: '<S448>:64' */
                            /* Transition: '<S448>:65' */
                            j--;
                        }
                    }
                    else
                    {
                        /* Transition: '<S448>:80' */
                        j = 13;
                        exitg1 = 2;
                    }
                }
                while (exitg1 == 0);

                if (exitg1 == 1)
                {
                    exitg2 = 1;
                }
            }
            else
            {
                /* Transition: '<S448>:79' */
                /* Transition: '<S448>:105' */
                exitg2 = 1;
            }
        }
        while (exitg2 == 0);

        if (j >= 0)
        {
            /* Update for UnitDelay: '<S318>/Unit Delay1' */
            /* Transition: '<S448>:161' */
            /* Transition: '<S448>:100' */
            SCPR_ac_DW.UnitDelay1_DSTATE_j = VaSCPR_K_SchGlobalUF[(j)];
        }
        else
        {
            /* Transition: '<S448>:107' */
            /* Transition: '<S448>:108' */
        }

        /* Transition: '<S448>:101' */
    }
    else
    {
        /* Transition: '<S448>:86' */
        /* Transition: '<S448>:90' */
    }

    /* Outputs for Atomic SubSystem: '<S318>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S337>/EdgeFalling1' */
    /* Logic: '<S345>/OR1' incorporates:
     *  Logic: '<S337>/AND'
     */
    /* Transition: '<S448>:103' */
    rtb_AND_ck = !VeSCPR_b_ResetUFwindow;

    /* Logic: '<S345>/AND' incorporates:
     *  Logic: '<S345>/OR1'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_AND_ck &&
        (SCPR_ac_DW.UnitDelay_DSTATE_kk));

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_kk = VeSCPR_b_ResetUFwindow;

    /* End of Outputs for SubSystem: '<S337>/EdgeFalling1' */

    /* Switch: '<S337>/Switch' */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S337>/Switch' incorporates:
         *  Constant: '<S314>/Calib'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_DbcTimeToReset;
    }
    else
    {
        /* Sum: '<S337>/Summation' incorporates:
         *  Constant: '<S337>/Constant Value'
         *  UnitDelay: '<S337>/Unit Delay'
         */
        i = ((sint32)SCPR_ac_DW.UnitDelay_DSTATE_nw) - 1;
        if ((((sint32)SCPR_ac_DW.UnitDelay_DSTATE_nw) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S337>/Switch' incorporates:
         *  Sum: '<S337>/Summation'
         */
        rtb_Switch1_e0 = (uint16)i;
    }

    /* End of Switch: '<S337>/Switch' */

    /* Update for UnitDelay: '<S337>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nw = rtb_Switch1_e0;

    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset1' */
    /* Logic: '<S332>/OR1' incorporates:
     *  Constant: '<S337>/Constant Value2'
     *  Logic: '<S332>/NOT'
     *  Logic: '<S332>/OR'
     *  Logic: '<S337>/AND'
     *  RelationalOperator: '<S337>/Greater  Than'
     *  UnitDelay: '<S332>/Unit Delay'
     */
    VeSCPR_b_UFAllowed = ((VeSCPR_b_UntilFullWindow) || ((rtb_AND_ck &&
                            (((sint32)rtb_Switch1_e0) <= 0)) &&
                           (SCPR_ac_DW.UnitDelay_DSTATE_ic)));

    /* End of Outputs for SubSystem: '<S318>/Turn Off Delay Sample' */

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ic = VeSCPR_b_UFAllowed;

    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S330>/EdgeRising2' */
    /* Logic: '<S344>/AND' incorporates:
     *  Logic: '<S344>/OR1'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_Logical1_d0 &&
        (!SCPR_ac_DW.UnitDelay_DSTATE_ku));

    /* Update for UnitDelay: '<S344>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ku = rtb_Logical1_d0;

    /* End of Outputs for SubSystem: '<S330>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S330>/EdgeRising1' */
    /* Logic: '<S343>/AND' incorporates:
     *  Logic: '<S343>/OR1'
     *  UnitDelay: '<S343>/Unit Delay'
     */
    rtb_Logical1_d0 = (rtb_AND_liv && (!SCPR_ac_DW.UnitDelay_DSTATE_eq));

    /* Update for UnitDelay: '<S343>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_eq = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S330>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S318>/Signal Latch On With Reset5' */
    /* Logic: '<S336>/OR1' incorporates:
     *  Logic: '<S318>/Logical20'
     *  Logic: '<S318>/Logical6'
     *  Logic: '<S330>/Logical19'
     *  Logic: '<S330>/Logical2'
     *  Logic: '<S336>/OR'
     *  UnitDelay: '<S336>/Unit Delay'
     */
    VeSCPR_b_NewSchedCheck = ((((VeSCPR_b_UFAllowed) &&
        (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq || rtb_Logical1_d0)) &&
        (!VeSCPR_b_NowInUFWindow)) || (VeSCPR_b_ChrgNowRstLatch_tmp &&
        (SCPR_ac_DW.UnitDelay_DSTATE_frm)));

    /* Update for UnitDelay: '<S336>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_frm = VeSCPR_b_NewSchedCheck;

    /* End of Outputs for SubSystem: '<S318>/Signal Latch On With Reset5' */

    /* Outputs for Atomic SubSystem: '<S323>/Count Down  Reset Enabled' */
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S341>/Constant Value'
     *  Logic: '<S341>/AND'
     *  RelationalOperator: '<S341>/Greater  Than'
     *  Switch: '<S341>/Switch2'
     *  UnitDelay: '<S323>/Unit Delay3'
     *  UnitDelay: '<S323>/Unit Delay5'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    if (SCPR_ac_DW.UnitDelay3_DSTATE_b)
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S314>/Calib'
         *  Constant: '<S323>/Constant4'
         *  Sum: '<S323>/Sum'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)KeSCPR_Cnt_DbcTimeToReset) + 4U);
    }
    else if ((SCPR_ac_DW.UnitDelay5_DSTATE_f) && (((sint32)
               SCPR_ac_DW.UnitDelay_DSTATE_cr) > 0))
    {
        /* Switch: '<S341>/Switch2' incorporates:
         *  Constant: '<S341>/Constant Value1'
         *  Sum: '<S341>/Subtraction'
         *  Switch: '<S341>/Switch1'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_cr) - 1));
    }
    else
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Switch: '<S341>/Switch2'
         *  UnitDelay: '<S341>/Unit Delay'
         */
        rtb_Switch1_e0 = SCPR_ac_DW.UnitDelay_DSTATE_cr;
    }

    /* End of Switch: '<S341>/Switch1' */

    /* Logic: '<S341>/AND1' incorporates:
     *  Constant: '<S341>/Constant Value2'
     *  RelationalOperator: '<S341>/Greater  Than1'
     */
    rtb_Logical1_d0 = (((sint32)rtb_Switch1_e0) <= 0);

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cr = rtb_Switch1_e0;

    /* End of Outputs for SubSystem: '<S323>/Count Down  Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S323>/Signal Latch On With Reset' */
    /* Logic: '<S342>/OR1' incorporates:
     *  Logic: '<S323>/Logical19'
     *  Logic: '<S342>/NOT'
     *  Logic: '<S342>/OR'
     *  UnitDelay: '<S342>/Unit Delay'
     */
    rtb_AND_liv = (((VeSCPR_b_NewSchedCheck) || (VeSCPR_b_UFschedChange)) ||
                   ((!rtb_Logical1_d0) && (SCPR_ac_DW.UnitDelay_DSTATE_cs)));

    /* Update for UnitDelay: '<S342>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cs = rtb_AND_liv;

    /* End of Outputs for SubSystem: '<S323>/Signal Latch On With Reset' */

    /* Logic: '<S323>/Logical31' incorporates:
     *  Constant: '<S323>/Constant1'
     *  Constant: '<S323>/Constant3'
     *  Logic: '<S323>/Logical27'
     *  Logic: '<S323>/Logical29'
     *  Logic: '<S323>/Logical30'
     *  RelationalOperator: '<S323>/Comparison5'
     *  RelationalOperator: '<S323>/Comparison6'
     *  RelationalOperator: '<S323>/Comparison7'
     *  UnitDelay: '<S323>/Unit Delay6'
     */
    VeSCPR_b_UFchangeOfSched = ((((rtb_UnitDelay1_iqj != 0) &&
        (SCPR_ac_DW.UnitDelay6_DSTATE_k != 0)) && (rtb_UnitDelay1_iqj !=
        SCPR_ac_DW.UnitDelay6_DSTATE_k)) && (!rtb_AND_liv));

    /* Logic: '<S316>/Logical16' incorporates:
     *  Logic: '<S316>/Logical19'
     *  Logic: '<S316>/Logical2'
     *  Logic: '<S316>/Logical21'
     *  Logic: '<S316>/Logical22'
     *  Logic: '<S316>/Logical23'
     */
    VeSCPR_b_CondToDisplayUF_Test = (((((!VeSCPR_b_DisableUF_Test3) &&
        (!VeSCPR_b_UFschedChange)) && (!VeSCPR_b_noPlugOrBattFull)) &&
        (!VeSCPR_b_NewSchedCheck)) && (!VeSCPR_b_UFchangeOfSched));

    /* Logic: '<S316>/Logical17' incorporates:
     *  Logic: '<S316>/Logical18'
     */
    VeSCPR_b_CondToDisplayUF = ((VeSCPR_b_CondToDisplayUF_Test) &&
        (!VeSCPR_b_CancelTriggerUF));

    /* Outputs for Atomic SubSystem: '<S316>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S320>/EdgeRising' */
    /* Logic: '<S321>/AND' incorporates:
     *  Logic: '<S321>/OR1'
     *  UnitDelay: '<S321>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = !SCPR_ac_DW.UnitDelay_DSTATE_iol;

    /* Update for UnitDelay: '<S321>/Unit Delay' incorporates:
     *  Constant: '<S316>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_iol = true;

    /* End of Outputs for SubSystem: '<S320>/EdgeRising' */

    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S319>/Calib'
     *  Constant: '<S320>/Constant Value'
     *  Logic: '<S320>/OR'
     *  MinMax: '<S320>/Minimum'
     *  Sum: '<S320>/Summation'
     *  UnitDelay: '<S320>/Unit Delay'
     */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S320>/Switch1' incorporates:
         *  Constant: '<S320>/Constant Value1'
         */
        rtb_Switch1_e0 = 0U;
    }
    else if (KeSCPR_Cnt_DisplayUFDelayWU < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_bc) + 1U)))
    {
        /* MinMax: '<S320>/Minimum' incorporates:
         *  Constant: '<S319>/Calib'
         *  Switch: '<S320>/Switch1'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_DisplayUFDelayWU;
    }
    else
    {
        /* Switch: '<S320>/Switch1' incorporates:
         *  Constant: '<S320>/Constant Value'
         *  MinMax: '<S320>/Minimum'
         *  Sum: '<S320>/Summation'
         *  UnitDelay: '<S320>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_bc) + 1U);
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_bc = rtb_Switch1_e0;

    /* Logic: '<S316>/Logical3' incorporates:
     *  Constant: '<S319>/Calib'
     *  Logic: '<S316>/Logical8'
     *  RelationalOperator: '<S320>/Greater  Than'
     */
    VeSCPR_b_DisplayUF = (((VeSCPR_b_UFAllowed) && (VeSCPR_b_CondToDisplayUF)) &&
                          (rtb_Switch1_e0 >= KeSCPR_Cnt_DisplayUFDelayWU));

    /* End of Outputs for SubSystem: '<S316>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S318>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S338>/Signal Latch On With Reset' */
    /* Logic: '<S346>/OR1' incorporates:
     *  Logic: '<S346>/NOT'
     *  Logic: '<S346>/OR'
     *  UnitDelay: '<S316>/Unit Delay2'
     *  UnitDelay: '<S338>/Unit Delay1'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    rtb_AND_ck = ((SCPR_ac_DW.UnitDelay2_DSTATE_ha) ||
                  ((!SCPR_ac_DW.UnitDelay1_DSTATE_in) &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_mc)));

    /* Update for UnitDelay: '<S346>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_mc = rtb_AND_ck;

    /* End of Outputs for SubSystem: '<S338>/Signal Latch On With Reset' */

    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S338>/Constant Value'
     *  Logic: '<S338>/Logical Operator'
     *  MinMax: '<S338>/Minimum'
     *  Sum: '<S338>/Summation'
     *  UnitDelay: '<S338>/Unit Delay'
     */
    if (!rtb_AND_ck)
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Constant: '<S338>/Constant Value1'
         */
        rtb_Switch1_e0 = 0U;
    }
    else if (KeSCPR_Cnt_DbcTimeToReset < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_i) + 1U)))
    {
        /* MinMax: '<S338>/Minimum' incorporates:
         *  Constant: '<S314>/Calib'
         *  Switch: '<S338>/Switch1'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_DbcTimeToReset;
    }
    else
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Constant: '<S338>/Constant Value'
         *  MinMax: '<S338>/Minimum'
         *  Sum: '<S338>/Summation'
         *  UnitDelay: '<S338>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_i) + 1U);
    }

    /* End of Switch: '<S338>/Switch1' */

    /* RelationalOperator: '<S338>/Greater  Than' incorporates:
     *  Constant: '<S314>/Calib'
     */
    rtb_Comparison4_du = (rtb_Switch1_e0 >= KeSCPR_Cnt_DbcTimeToReset);

    /* Update for UnitDelay: '<S338>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_in = rtb_Comparison4_du;

    /* Update for UnitDelay: '<S338>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_e0;

    /* End of Outputs for SubSystem: '<S318>/Turn On Delay Sample1' */

    /* Chart: '<S573>/NextWakeUp' */
    SCPR_ac_NextWakeUp(VeSCPR_K_NowIndex_Min, rtb_Switch_k4,
                       VeSCPR_k_NumOfMinPerWeek, VeSCPR_k_DayOfWeek_num,
                       &SCPR_ac_B.sf_NextWakeUp_n);

    /* Gain: '<S575>/Gain' */
    VeSCPR_K_Sch1CP_NextWU = SCPR_ac_B.sf_NextWakeUp_n.NextWU;

    /* Switch: '<S572>/Switch2' incorporates:
     *  Constant: '<S572>/Constant4'
     *  Logic: '<S572>/Logical1'
     *  Logic: '<S572>/Logical2'
     */
    if ((SCPR_ac_B.sf_NextWakeUp_n.noWU) || (!SCPR_ac_B.DataStoreRead26))
    {
        rtb_day = 0;
    }
    else
    {
        rtb_day = VeSCPR_K_Sch1CP_NextWU;
    }

    /* End of Switch: '<S572>/Switch2' */

    /* Product: '<S572>/Product2' incorporates:
     *  Constant: '<S572>/Constant6'
     */
    VeSCPR_K_Sch1CP_NextWUsec = (uint32)((sint32)(((sint32)rtb_day) * 60));

    /* Sum: '<S524>/Sum5' */
    rtb_Switch2_h_idx_0 = VeSCPR_K_Sch1CP_NextWUsec +
        SCPR_ac_B.VeSCPR_t_HVBatRTC;

    /* Logic: '<S5>/Logical3' */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = ((VeSCPR_b_HUSch1CP_Sub) ||
        (SCPR_ac_B.TBM_Sch3_Submit));

    /* Outputs for Atomic SubSystem: '<S525>/EdgeRising1' */
    /* Logic: '<S528>/AND' incorporates:
     *  Logic: '<S528>/OR1'
     *  UnitDelay: '<S528>/Unit Delay'
     */
    rtb_Merge_n = (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
                   (!SCPR_ac_DW.UnitDelay_DSTATE_i5));

    /* Update for UnitDelay: '<S528>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_i5 = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S525>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S533>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S535>/Signal Latch On With Reset' */
    /* Logic: '<S536>/OR1' incorporates:
     *  Logic: '<S525>/Logical3'
     *  Logic: '<S536>/NOT'
     *  Logic: '<S536>/OR'
     *  UnitDelay: '<S535>/Unit Delay1'
     *  UnitDelay: '<S536>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = ((rtb_Merge_n || rtb_OR1_ii) ||
        ((!SCPR_ac_DW.UnitDelay1_DSTATE_d3) && (SCPR_ac_DW.UnitDelay_DSTATE_hv)));

    /* Update for UnitDelay: '<S536>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_hv = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S535>/Signal Latch On With Reset' */

    /* Switch: '<S535>/Switch1' incorporates:
     *  Constant: '<S532>/Calib'
     *  Constant: '<S535>/Constant Value'
     *  Logic: '<S535>/Logical Operator'
     *  MinMax: '<S535>/Minimum'
     *  Sum: '<S535>/Summation'
     *  UnitDelay: '<S535>/Unit Delay'
     */
    if (!rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S535>/Switch1' incorporates:
         *  Constant: '<S535>/Constant Value1'
         */
        rtb_Switch1_e0 = 0U;
    }
    else if (KeSCPR_Cnt_SamplesOfDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_p) + 1U)))
    {
        /* MinMax: '<S535>/Minimum' incorporates:
         *  Constant: '<S532>/Calib'
         *  Switch: '<S535>/Switch1'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_SamplesOfDelay;
    }
    else
    {
        /* Switch: '<S535>/Switch1' incorporates:
         *  Constant: '<S535>/Constant Value'
         *  MinMax: '<S535>/Minimum'
         *  Sum: '<S535>/Summation'
         *  UnitDelay: '<S535>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_p) + 1U);
    }

    /* End of Switch: '<S535>/Switch1' */

    /* RelationalOperator: '<S535>/Greater  Than' incorporates:
     *  Constant: '<S532>/Calib'
     */
    rtb_Merge_n = (rtb_Switch1_e0 >= KeSCPR_Cnt_SamplesOfDelay);

    /* Update for UnitDelay: '<S535>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_d3 = rtb_Merge_n;

    /* Update for UnitDelay: '<S535>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_p = rtb_Switch1_e0;

    /* Switch: '<S533>/Switch2' incorporates:
     *  DataStoreWrite: '<S533>/Data Store Write1'
     *  Logic: '<S535>/AND'
     */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq && rtb_Merge_n)
    {
        SCPR_ac_DW.NeSCPR_g_Sch1CP_DNRvalue = rtb_Switch2_h_idx_0;
    }

    /* End of Switch: '<S533>/Switch2' */
    /* End of Outputs for SubSystem: '<S533>/Turn On Delay Sample' */

    /* Switch: '<S533>/Switch' incorporates:
     *  Constant: '<S533>/Constant'
     *  DataStoreWrite: '<S533>/Data Store Write1'
     *  RelationalOperator: '<S533>/Greater  Than2'
     */
    if (SCPR_ac_DW.NeSCPR_g_Sch1CP_DNRvalue == 0U)
    {
        /* Switch: '<S533>/Switch' incorporates:
         *  Constant: '<S533>/Constant1'
         *  Sum: '<S533>/Sum'
         */
        VeSCPR_K_Sch1CP_DNRnxtCanc = rtb_Switch2_h_idx_0 + 1U;
    }
    else
    {
        /* Switch: '<S533>/Switch' */
        VeSCPR_K_Sch1CP_DNRnxtCanc = SCPR_ac_DW.NeSCPR_g_Sch1CP_DNRvalue;
    }

    /* End of Switch: '<S533>/Switch' */

    /* RelationalOperator: '<S525>/notEqualTo' */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (SCPR_ac_B.VeSCPR_t_HVBatRTC >
        VeSCPR_K_Sch1CP_DNRnxtCanc);

    /* Outputs for Atomic SubSystem: '<S525>/EdgeRising3' */
    /* Logic: '<S530>/OR1' incorporates:
     *  UnitDelay: '<S530>/Unit Delay'
     */
    rtb_Merge_n = !SCPR_ac_DW.UnitDelay_DSTATE_c0o;

    /* Update for UnitDelay: '<S530>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_c0o = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* Logic: '<S525>/Logical' incorporates:
     *  Logic: '<S530>/AND'
     */
    VeSCPR_b_Sch1CP_DNRCanc_Test = ((rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
        rtb_Merge_n) && (SCPR_ac_B.DataStoreRead26));

    /* End of Outputs for SubSystem: '<S525>/EdgeRising3' */

    /* Chart: '<S574>/NextWakeUp' */
    SCPR_ac_NextWakeUp(VeSCPR_K_NowIndex_Min, rtb_Switch_bw,
                       VeSCPR_k_NumOfMinPerWeek, VeSCPR_k_DayOfWeek_num,
                       &SCPR_ac_B.sf_NextWakeUp_n4);

    /* Gain: '<S576>/Gain' */
    VeSCPR_K_Sch2CP_NextWU = SCPR_ac_B.sf_NextWakeUp_n4.NextWU;

    /* Switch: '<S572>/Switch1' incorporates:
     *  Constant: '<S572>/Constant2'
     *  Logic: '<S572>/Logical3'
     *  Logic: '<S572>/Logical4'
     */
    if ((SCPR_ac_B.sf_NextWakeUp_n4.noWU) || (!SCPR_ac_B.DataStoreRead28_d))
    {
        rtb_day = 0;
    }
    else
    {
        rtb_day = VeSCPR_K_Sch2CP_NextWU;
    }

    /* End of Switch: '<S572>/Switch1' */

    /* Product: '<S572>/Product1' incorporates:
     *  Constant: '<S572>/Constant7'
     */
    VeSCPR_K_Sch2CP_NextWUsec = (uint32)((sint32)(((sint32)rtb_day) * 60));

    /* Sum: '<S524>/Sum1' */
    rtb_Switch2_h_idx_0 = VeSCPR_K_Sch2CP_NextWUsec +
        SCPR_ac_B.VeSCPR_t_HVBatRTC;

    /* Logic: '<S5>/Logical5' */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = ((VeSCPR_b_HUSch2CP_Sub) ||
        (SCPR_ac_B.TBM_Sch4_Submit));

    /* Outputs for Atomic SubSystem: '<S525>/EdgeRising2' */
    /* Logic: '<S529>/AND' incorporates:
     *  Logic: '<S529>/OR1'
     *  UnitDelay: '<S529>/Unit Delay'
     */
    rtb_Merge_n = (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq &&
                   (!SCPR_ac_DW.UnitDelay_DSTATE_gm));

    /* Update for UnitDelay: '<S529>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gm = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* End of Outputs for SubSystem: '<S525>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S534>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S537>/Signal Latch On With Reset' */
    /* Logic: '<S538>/OR1' incorporates:
     *  Logic: '<S525>/Logical4'
     *  Logic: '<S538>/NOT'
     *  Logic: '<S538>/OR'
     *  UnitDelay: '<S537>/Unit Delay1'
     *  UnitDelay: '<S538>/Unit Delay'
     */
    rtb_OR1_ii = ((rtb_OR1_ii || rtb_Merge_n) ||
                  ((!SCPR_ac_DW.UnitDelay1_DSTATE_j5) &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_cf)));

    /* Update for UnitDelay: '<S538>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cf = rtb_OR1_ii;

    /* End of Outputs for SubSystem: '<S537>/Signal Latch On With Reset' */

    /* Switch: '<S537>/Switch1' incorporates:
     *  Constant: '<S532>/Calib'
     *  Constant: '<S537>/Constant Value'
     *  Logic: '<S537>/Logical Operator'
     *  MinMax: '<S537>/Minimum'
     *  Sum: '<S537>/Summation'
     *  UnitDelay: '<S537>/Unit Delay'
     */
    if (!rtb_OR1_ii)
    {
        /* Switch: '<S537>/Switch1' incorporates:
         *  Constant: '<S537>/Constant Value1'
         */
        rtb_Switch1_e0 = 0U;
    }
    else if (KeSCPR_Cnt_SamplesOfDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_b) + 1U)))
    {
        /* MinMax: '<S537>/Minimum' incorporates:
         *  Constant: '<S532>/Calib'
         *  Switch: '<S537>/Switch1'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_SamplesOfDelay;
    }
    else
    {
        /* Switch: '<S537>/Switch1' incorporates:
         *  Constant: '<S537>/Constant Value'
         *  MinMax: '<S537>/Minimum'
         *  Sum: '<S537>/Summation'
         *  UnitDelay: '<S537>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_b) + 1U);
    }

    /* End of Switch: '<S537>/Switch1' */

    /* RelationalOperator: '<S537>/Greater  Than' incorporates:
     *  Constant: '<S532>/Calib'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_Switch1_e0 >=
        KeSCPR_Cnt_SamplesOfDelay);

    /* Update for UnitDelay: '<S537>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_j5 = rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* Update for UnitDelay: '<S537>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch1_e0;

    /* Switch: '<S534>/Switch2' incorporates:
     *  DataStoreWrite: '<S534>/Data Store Write1'
     *  Logic: '<S537>/AND'
     */
    if (rtb_OR1_ii && rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        SCPR_ac_DW.NeSCPR_g_Sch2CP_DNRvalue = rtb_Switch2_h_idx_0;
    }

    /* End of Switch: '<S534>/Switch2' */
    /* End of Outputs for SubSystem: '<S534>/Turn On Delay Sample' */

    /* Switch: '<S534>/Switch' incorporates:
     *  Constant: '<S534>/Constant'
     *  DataStoreWrite: '<S534>/Data Store Write1'
     *  RelationalOperator: '<S534>/Greater  Than2'
     */
    if (SCPR_ac_DW.NeSCPR_g_Sch2CP_DNRvalue == 0U)
    {
        /* Switch: '<S534>/Switch' incorporates:
         *  Constant: '<S534>/Constant1'
         *  Sum: '<S534>/Sum'
         */
        VeSCPR_K_Sch2CP_DNRnxtCanc = rtb_Switch2_h_idx_0 + 1U;
    }
    else
    {
        /* Switch: '<S534>/Switch' */
        VeSCPR_K_Sch2CP_DNRnxtCanc = SCPR_ac_DW.NeSCPR_g_Sch2CP_DNRvalue;
    }

    /* End of Switch: '<S534>/Switch' */

    /* RelationalOperator: '<S525>/notEqualTo1' */
    rtb_OR1_ii = (SCPR_ac_B.VeSCPR_t_HVBatRTC > VeSCPR_K_Sch2CP_DNRnxtCanc);

    /* Outputs for Atomic SubSystem: '<S525>/EdgeRising4' */
    /* Logic: '<S531>/OR1' incorporates:
     *  UnitDelay: '<S531>/Unit Delay'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = !SCPR_ac_DW.UnitDelay_DSTATE_nr;

    /* Update for UnitDelay: '<S531>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nr = rtb_OR1_ii;

    /* Logic: '<S525>/Logical2' incorporates:
     *  Logic: '<S531>/AND'
     */
    VeSCPR_b_Sch2CP_DNRCanc_Test = ((rtb_OR1_ii &&
        rtb_VeSCPR_b_CoCH_ImmSOC_ChReq) && (SCPR_ac_B.DataStoreRead28_d));

    /* End of Outputs for SubSystem: '<S525>/EdgeRising4' */

    /* Logic: '<S525>/Logical1' */
    VeSCPR_b_CP_DNRCancel = ((VeSCPR_b_Sch1CP_DNRCanc_Test) ||
        (VeSCPR_b_Sch2CP_DNRCanc_Test));

    /* If: '<S490>/If' */
    if (VeSCPR_b_CP_DNRCancel)
    {
        /* Outputs for IfAction SubSystem: '<S490>/If Action Subsystem' incorporates:
         *  ActionPort: '<S526>/Action Port'
         */
        /* Switch: '<S526>/Switch2' incorporates:
         *  Logic: '<S526>/Logical'
         */
        if ((SCPR_ac_B.DataStoreRead17_c) && (VeSCPR_b_Sch1CP_DNRCanc_Test))
        {
            /* Gain: '<S540>/Gain' incorporates:
             *  Constant: '<S526>/Constant1'
             */
            VeSCPR_b_Sch1CP_DNREnblOvrd = false;
        }
        else
        {
            /* Gain: '<S540>/Gain' incorporates:
             *  DataStoreRead: '<S526>/Data Store Read'
             */
            VeSCPR_b_Sch1CP_DNREnblOvrd = FeSCPR_b_Sch1CP_Enbl;
        }

        /* End of Switch: '<S526>/Switch2' */

        /* Merge: '<S490>/Merge2' incorporates:
         *  SignalConversion: '<S526>/Signal Conversion'
         */
        VeSCPR_b_Sch1CP_Enbl_DNR = VeSCPR_b_Sch1CP_DNREnblOvrd;

        /* Switch: '<S526>/Switch' incorporates:
         *  Logic: '<S526>/Logical1'
         */
        if ((SCPR_ac_B.DataStoreRead23_i) && (VeSCPR_b_Sch2CP_DNRCanc_Test))
        {
            /* Gain: '<S539>/Gain' incorporates:
             *  Constant: '<S526>/Constant2'
             */
            VeSCPR_b_Sch2CP_DNREnblOvrd = false;
        }
        else
        {
            /* Gain: '<S539>/Gain' incorporates:
             *  DataStoreRead: '<S526>/Data Store Read1'
             */
            VeSCPR_b_Sch2CP_DNREnblOvrd = FeSCPR_b_Sch2CP_Enbl;
        }

        /* End of Switch: '<S526>/Switch' */

        /* Merge: '<S490>/Merge' incorporates:
         *  SignalConversion: '<S526>/Signal Conversion1'
         */
        VeSCPR_b_Sch2CP_Enbl_DNR = VeSCPR_b_Sch2CP_DNREnblOvrd;

        /* End of Outputs for SubSystem: '<S490>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S490>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S527>/Action Port'
         */
        /* Merge: '<S490>/Merge2' incorporates:
         *  DataStoreRead: '<S490>/Data Store Read'
         *  Inport: '<S527>/Sch1CP_EnblSts_In'
         */
        VeSCPR_b_Sch1CP_Enbl_DNR = FeSCPR_b_Sch1CP_Enbl;

        /* Merge: '<S490>/Merge' incorporates:
         *  DataStoreRead: '<S490>/Data Store Read1'
         *  Inport: '<S527>/Sch2CP_EnblSts_In'
         */
        VeSCPR_b_Sch2CP_Enbl_DNR = FeSCPR_b_Sch2CP_Enbl;

        /* End of Outputs for SubSystem: '<S490>/If Action Subsystem1' */
    }

    /* End of If: '<S490>/If' */

    /* DataStoreWrite: '<S490>/Data Store Write' */
    FeSCPR_b_Sch1CP_Enbl = VeSCPR_b_Sch1CP_Enbl_DNR;

    /* DataStoreWrite: '<S490>/Data Store Write1' */
    FeSCPR_b_Sch2CP_Enbl = VeSCPR_b_Sch2CP_Enbl_DNR;

    /* If: '<S489>/If' */
    if (VeSCPR_b_CH_DNRCancel)
    {
        /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem' incorporates:
         *  ActionPort: '<S501>/Action Port'
         */
        /* Switch: '<S501>/Switch2' incorporates:
         *  Logic: '<S501>/Logical'
         */
        if ((SCPR_ac_B.DataStoreRead5_d) && (VeSCPR_b_Sch1CH_DNRCanc_Test))
        {
            /* Gain: '<S523>/Gain' incorporates:
             *  Constant: '<S501>/Constant1'
             */
            VeSCPR_b_Sch1CH_DNREnblOvrd = false;
        }
        else
        {
            /* Gain: '<S523>/Gain' incorporates:
             *  DataStoreRead: '<S501>/Data Store Read2'
             */
            VeSCPR_b_Sch1CH_DNREnblOvrd = FeSCPR_b_Sch1CH_Enbl;
        }

        /* End of Switch: '<S501>/Switch2' */

        /* Merge: '<S489>/Merge2' incorporates:
         *  SignalConversion: '<S501>/Signal Conversion'
         */
        VeSCPR_b_Sch1CH_Enbl_DNR = VeSCPR_b_Sch1CH_DNREnblOvrd;

        /* Switch: '<S501>/Switch' incorporates:
         *  Logic: '<S501>/Logical1'
         */
        if ((SCPR_ac_B.DataStoreRead12_g) && (VeSCPR_b_Sch2CH_DNRCanc_Test))
        {
            /* Gain: '<S522>/Gain' incorporates:
             *  Constant: '<S501>/Constant2'
             */
            VeSCPR_b_Sch2CH_DNREnblOvrd = false;
        }
        else
        {
            /* Gain: '<S522>/Gain' incorporates:
             *  DataStoreRead: '<S501>/Data Store Read3'
             */
            VeSCPR_b_Sch2CH_DNREnblOvrd = FeSCPR_b_Sch2CH_Enbl;
        }

        /* End of Switch: '<S501>/Switch' */

        /* Merge: '<S489>/Merge' incorporates:
         *  SignalConversion: '<S501>/Signal Conversion1'
         */
        VeSCPR_b_Sch2CH_Enbl_DNR = VeSCPR_b_Sch2CH_DNREnblOvrd;

        /* End of Outputs for SubSystem: '<S489>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S502>/Action Port'
         */
        /* Merge: '<S489>/Merge2' incorporates:
         *  DataStoreRead: '<S489>/Data Store Read2'
         *  Inport: '<S502>/Sch1CH_EnblSts_In'
         */
        VeSCPR_b_Sch1CH_Enbl_DNR = FeSCPR_b_Sch1CH_Enbl;

        /* Merge: '<S489>/Merge' incorporates:
         *  DataStoreRead: '<S489>/Data Store Read3'
         *  Inport: '<S502>/Sch2CH_EnblSts_In'
         */
        VeSCPR_b_Sch2CH_Enbl_DNR = FeSCPR_b_Sch2CH_Enbl;

        /* End of Outputs for SubSystem: '<S489>/If Action Subsystem1' */
    }

    /* End of If: '<S489>/If' */

    /* DataStoreWrite: '<S489>/Data Store Write2' */
    FeSCPR_b_Sch1CH_Enbl = VeSCPR_b_Sch1CH_Enbl_DNR;

    /* DataStoreWrite: '<S489>/Data Store Write3' */
    FeSCPR_b_Sch2CH_Enbl = VeSCPR_b_Sch2CH_Enbl_DNR;

    /* If: '<S491>/If' */
    if (rtb_Logical1_f)
    {
        /* Outputs for IfAction SubSystem: '<S491>/If Action Subsystem' incorporates:
         *  ActionPort: '<S543>/Action Port'
         */
        /* Switch: '<S543>/Switch2' incorporates:
         *  Logic: '<S543>/Logical'
         */
        if ((SCPR_ac_B.DataStoreRead47) && rtb_AND_fl)
        {
            /* DataStoreWrite: '<S491>/Data Store Write2' incorporates:
             *  Constant: '<S543>/Constant1'
             *  Logic: '<S580>/Logical1'
             *  SignalConversion: '<S543>/Signal Conversion'
             */
            SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl = false;
        }

        /* End of Switch: '<S543>/Switch2' */

        /* Switch: '<S543>/Switch' incorporates:
         *  Logic: '<S543>/Logical1'
         */
        if ((SCPR_ac_B.DataStoreRead43) && rtb_AND_c2)
        {
            /* DataStoreWrite: '<S491>/Data Store Write3' incorporates:
             *  Constant: '<S543>/Constant2'
             *  Merge: '<S491>/Merge'
             *  SignalConversion: '<S543>/Signal Conversion1'
             */
            SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl = false;
        }

        /* End of Switch: '<S543>/Switch' */
        /* End of Outputs for SubSystem: '<S491>/If Action Subsystem' */
    }

    /* End of If: '<S491>/If' */

    /* Chart: '<S560>/ChrgEnd_DNR1' */
    SCPR_ac_ChrgEnd_DNR1(&rtb_Switch_gp[7], SCPR_ac_B.DataStoreRead6_a,
                         SCPR_ac_B.DataStoreRead5_d, SCPR_ac_B.DataStoreRead27_d,
                         VeSCPR_k_NumOfMinPerDay, VeSCPR_K_ArrElementTimeIncSize,
                         &SCPR_ac_B.sf_ChrgEnd_DNR1);

    /* Chart: '<S560>/ChrgEnd_DNR2' */
    SCPR_ac_ChrgEnd_DNR1(&rtb_Switch_jl[7], SCPR_ac_B.DataStoreRead13_d,
                         SCPR_ac_B.DataStoreRead12_g, SCPR_ac_B.DataStoreRead29,
                         VeSCPR_k_NumOfMinPerDay, VeSCPR_K_ArrElementTimeIncSize,
                         &SCPR_ac_B.sf_ChrgEnd_DNR2);

    /* Switch: '<S560>/Switch2' incorporates:
     *  Constant: '<S560>/Constant4'
     *  Logic: '<S560>/Logical1'
     */
    if ((SCPR_ac_B.DataStoreRead5_d) && (SCPR_ac_B.DataStoreRead27_d))
    {
        /* Switch: '<S560>/Switch3' incorporates:
         *  RelationalOperator: '<S560>/Comparison1'
         *  Sum: '<S560>/Sum2'
         *  Sum: '<S560>/Sum4'
         */
        if (SCPR_ac_B.sf_ChrgEnd_DNR1.DNR_EndTime > VeSCPR_K_NowIndex_Min)
        {
            rtb_day = (sint16)(SCPR_ac_B.sf_ChrgEnd_DNR1.DNR_EndTime -
                               VeSCPR_K_NowIndex_Min);
        }
        else
        {
            rtb_day = (sint16)(((sint16)(SCPR_ac_B.sf_ChrgEnd_DNR1.DNR_EndTime -
                                 VeSCPR_K_NowIndex_Min)) +
                               VeSCPR_k_NumOfMinPerWeek);
        }

        /* End of Switch: '<S560>/Switch3' */
    }
    else
    {
        rtb_day = 0;
    }

    /* End of Switch: '<S560>/Switch2' */

    /* Product: '<S560>/Product2' incorporates:
     *  Constant: '<S560>/Constant6'
     */
    VeSCPR_K_Sch1CH_DNRend_sec = (uint32)((sint32)(((sint32)rtb_day) * 60));

    /* Switch: '<S560>/Switch4' incorporates:
     *  Constant: '<S560>/Constant2'
     *  Logic: '<S560>/Logical2'
     */
    if ((SCPR_ac_B.DataStoreRead12_g) && (SCPR_ac_B.DataStoreRead29))
    {
        /* Switch: '<S560>/Switch1' incorporates:
         *  RelationalOperator: '<S560>/Comparison2'
         *  Sum: '<S560>/Sum1'
         *  Sum: '<S560>/Sum3'
         */
        if (SCPR_ac_B.sf_ChrgEnd_DNR2.DNR_EndTime > VeSCPR_K_NowIndex_Min)
        {
            rtb_day = (sint16)(SCPR_ac_B.sf_ChrgEnd_DNR2.DNR_EndTime -
                               VeSCPR_K_NowIndex_Min);
        }
        else
        {
            rtb_day = (sint16)(((sint16)(SCPR_ac_B.sf_ChrgEnd_DNR2.DNR_EndTime -
                                 VeSCPR_K_NowIndex_Min)) +
                               VeSCPR_k_NumOfMinPerWeek);
        }

        /* End of Switch: '<S560>/Switch1' */
    }
    else
    {
        rtb_day = 0;
    }

    /* End of Switch: '<S560>/Switch4' */

    /* Product: '<S560>/Product3' incorporates:
     *  Constant: '<S560>/Constant1'
     */
    VeSCPR_K_Sch2CH_DNRend_sec = (uint32)((sint32)(((sint32)rtb_day) * 60));

    /* Chart: '<S562>/NextWakeUp' */
    SCPR_ac_NextWakeUp(VeSCPR_K_NowIndex_Min, &rtb_Switch_gp[0],
                       VeSCPR_k_NumOfMinPerWeek, VeSCPR_k_DayOfWeek_num,
                       &SCPR_ac_B.sf_NextWakeUp);

    /* Chart: '<S563>/NextWakeUp' */
    SCPR_ac_NextWakeUp(VeSCPR_K_NowIndex_Min, &rtb_Switch_jl[0],
                       VeSCPR_k_NumOfMinPerWeek, VeSCPR_k_DayOfWeek_num,
                       &SCPR_ac_B.sf_NextWakeUp_p);

    /* Gain: '<S564>/Gain' */
    VeSCPR_K_Sch1CH_NextWU = SCPR_ac_B.sf_NextWakeUp.NextWU;

    /* Gain: '<S565>/Gain' */
    VeSCPR_K_Sch2CH_NextWU = SCPR_ac_B.sf_NextWakeUp_p.NextWU;

    /* Switch: '<S561>/Switch2' incorporates:
     *  Delay: '<S561>/Delay'
     *  Logic: '<S561>/Logical1'
     *  RelationalOperator: '<S561>/Comparison2'
     *  Switch: '<S561>/Switch3'
     */
    if (!SCPR_ac_DW.Delay_DSTATE[0U])
    {
        /* Switch: '<S561>/Switch' incorporates:
         *  Logic: '<S495>/Logical'
         *  MinMax: '<S495>/MinMax1'
         */
        if ((SCPR_ac_B.sf_NextWakeUp.noWU) && (SCPR_ac_B.sf_NextWakeUp_p.noWU))
        {
            /* Switch: '<S561>/Switch2' incorporates:
             *  Constant: '<S561>/Constant1'
             *  Switch: '<S561>/Switch'
             */
            VeSCPR_K_NextChargeWUTest = 0;
        }
        else if (VeSCPR_K_Sch1CH_NextWU < VeSCPR_K_Sch2CH_NextWU)
        {
            /* MinMax: '<S495>/MinMax1' incorporates:
             *  Switch: '<S561>/Switch'
             *  Switch: '<S561>/Switch2'
             */
            VeSCPR_K_NextChargeWUTest = VeSCPR_K_Sch1CH_NextWU;
        }
        else
        {
            /* Switch: '<S561>/Switch2' incorporates:
             *  MinMax: '<S495>/MinMax1'
             *  Switch: '<S561>/Switch'
             */
            VeSCPR_K_NextChargeWUTest = VeSCPR_K_Sch2CH_NextWU;
        }

        /* End of Switch: '<S561>/Switch' */
    }
    else if (VeSCPR_K_NextSch_ChrgStart > VeSCPR_K_NowIndex_Min)
    {
        /* Switch: '<S561>/Switch3' incorporates:
         *  Sum: '<S561>/Sum3'
         *  Switch: '<S561>/Switch2'
         */
        VeSCPR_K_NextChargeWUTest = (sint16)(VeSCPR_K_NextSch_ChrgStart -
            VeSCPR_K_NowIndex_Min);
    }
    else
    {
        /* Switch: '<S561>/Switch2' incorporates:
         *  Sum: '<S561>/Sum1'
         *  Sum: '<S561>/Sum3'
         *  Switch: '<S561>/Switch3'
         */
        VeSCPR_K_NextChargeWUTest = (sint16)(((sint16)
            (VeSCPR_K_NextSch_ChrgStart - VeSCPR_K_NowIndex_Min)) +
            VeSCPR_k_NumOfMinPerWeek);
    }

    /* End of Switch: '<S561>/Switch2' */

    /* Switch: '<S497>/Switch' incorporates:
     *  Logic: '<S497>/Logical'
     *  MinMax: '<S497>/MinMax1'
     */
    if ((SCPR_ac_B.sf_NextWakeUp_n.noWU) && (SCPR_ac_B.sf_NextWakeUp_n4.noWU))
    {
        /* Switch: '<S497>/Switch' incorporates:
         *  Constant: '<S497>/Constant1'
         */
        VeSCPR_K_NextCondWU = 0;
    }
    else if (VeSCPR_K_Sch1CP_NextWU < VeSCPR_K_Sch2CP_NextWU)
    {
        /* MinMax: '<S497>/MinMax1' incorporates:
         *  Switch: '<S497>/Switch'
         */
        VeSCPR_K_NextCondWU = VeSCPR_K_Sch1CP_NextWU;
    }
    else
    {
        /* Switch: '<S497>/Switch' incorporates:
         *  MinMax: '<S497>/MinMax1'
         */
        VeSCPR_K_NextCondWU = VeSCPR_K_Sch2CP_NextWU;
    }

    /* End of Switch: '<S497>/Switch' */

    /* Logic: '<S498>/Logical' incorporates:
     *  Logic: '<S580>/Logical6'
     */
    rtb_RelatonalOperator2_idx_2 = !VeSCPR_b_SCPRChargeComplete;

    /* Switch: '<S498>/Switch' incorporates:
     *  Constant: '<S579>/Calib'
     *  Logic: '<S498>/Logical'
     *  Logic: '<S498>/Logical1'
     *  Logic: '<S498>/Logical2'
     *  Logic: '<S498>/Logical3'
     *  Logic: '<S498>/Logical4'
     *  Logic: '<S498>/Logical5'
     */
    if ((((VeSCPR_b_PluggedIn) && (rtb_RelatonalOperator2_idx_2 ||
            (!KeSCPR_b_WUtimerChrgCmpltAllow))) && ((!VeSCPR_b_FOTANow_Conflict)
          || (VeSCPR_b_InChrgWindow))) && VeSCPR_b_SchChrgInWindow_tmp)
    {
        /* Switch: '<S498>/Switch' */
        VeSCPR_K_NextChargeWU = VeSCPR_K_NextChargeWUTest;
    }
    else
    {
        /* Switch: '<S498>/Switch' incorporates:
         *  Constant: '<S498>/Constant'
         */
        VeSCPR_K_NextChargeWU = 0;
    }

    /* End of Switch: '<S498>/Switch' */

    /* DataStoreWrite: '<S615>/Data Store Write' */
    SCPR_ac_DW.NeSCPR_b_PluginLatchOverride = VeSCPR_b_DoublePlugInOvrd;

    /* RelationalOperator: '<S373>/Comparison2' */
    rtb_OR1_ii = (SCPR_ac_B.DataStoreRead33 > SCPR_ac_B.DataStoreRead39);

    /* Chart: '<S373>/CoopChNxtSch' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CoopChNxtSch */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CoopChNxtSch */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CoopChNxtSch */
    /* Transition: '<S450>:5' */
    add = 0;
    j = 0;
    rtb_Sum2_h = -1;
    guard1 = false;
    do
    {
        exitg2 = 0;
        if (j < 14)
        {
            /* Transition: '<S450>:8' */
            if (VeSCPR_K_NowIndex_Min <= SCPR_ac_B.GlobalCoCH[j])
            {
                /* Transition: '<S450>:10' */
                /* Transition: '<S450>:17' */
                guard1 = true;
                exitg2 = 1;
            }
            else
            {
                /* Transition: '<S450>:35' */
                /* Transition: '<S450>:15' */
                j++;
                guard1 = false;
            }
        }
        else
        {
            /* Transition: '<S450>:21' */
            j = 0;
            exitg2 = 2;
        }
    }
    while (exitg2 == 0);

    if (exitg2 == 1)
    {
    }
    else
    {
        do
        {
            exitg1 = 0;
            if (j < 14)
            {
                /* Transition: '<S450>:23' */
                if (SCPR_ac_B.GlobalCoCH[j] >= 0)
                {
                    /* Transition: '<S450>:25' */
                    guard1 = true;
                    exitg1 = 1;
                }
                else
                {
                    /* Transition: '<S450>:34' */
                    /* Transition: '<S450>:33' */
                    j++;
                }
            }
            else
            {
                /* Transition: '<S450>:92' */
                /* Transition: '<S450>:93' */
                /* Transition: '<S450>:105' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);
    }

    if (guard1)
    {
        /* Transition: '<S450>:26' */
        rtb_Sum2_h = SCPR_ac_B.GlobalCoCH[j];
        add = SCPR_ac_B.GlobalCoCH_track[j];
        if (((j < 13) && (SCPR_ac_B.GlobalCoCH[j + 1] == SCPR_ac_B.GlobalCoCH[j]))
            && rtb_OR1_ii)
        {
            /* Transition: '<S450>:101' */
            /* Transition: '<S450>:103' */
            add = SCPR_ac_B.GlobalCoCH_track[j + 1];
        }
        else
        {
            /* Transition: '<S450>:106' */
            /* Transition: '<S450>:105' */
        }
    }

    /* Logic: '<S580>/Logical1' incorporates:
     *  Constant: '<S371>/Constant Value'
     *  RelationalOperator: '<S371>/Comparison4'
     */
    /* Transition: '<S450>:96' */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (add == 1);

    /* RelationalOperator: '<S371>/Comparison1' incorporates:
     *  Constant: '<S371>/Constant Value1'
     */
    rtb_OR1_ii = (add == 2);

    /* Switch: '<S388>/Switch1' incorporates:
     *  Switch: '<S388>/Switch3'
     */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S388>/Switch1' */
        rtb_Switch1_ls = SCPR_ac_B.DataStoreRead38;
    }
    else if (rtb_OR1_ii)
    {
        /* Switch: '<S388>/Switch3' incorporates:
         *  Switch: '<S388>/Switch1'
         */
        rtb_Switch1_ls = SCPR_ac_B.DataStoreRead32;
    }
    else
    {
        /* Switch: '<S388>/Switch1' incorporates:
         *  Constant: '<S371>/Constant'
         *  Switch: '<S388>/Switch3'
         */
        rtb_Switch1_ls = 100.0F;
    }

    /* End of Switch: '<S388>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S580>/Signal Latch On With Reset1' */
    /* Sum: '<S590>/Add' incorporates:
     *  UnitDelay: '<S590>/Unit Delay1'
     */
    rtb_Switch1_ky = rtb_Switch1_ls - SCPR_ac_DW.UnitDelay1_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S590>/inTolerance' */
    /* Switch: '<S590>/Switch' incorporates:
     *  Constant: '<S590>/Constant1'
     *  Constant: '<S590>/Tolerance'
     *  Delay: '<S590>/Integer Delay'
     *  Logic: '<S590>/OR1'
     *  Logic: '<S595>/OR1'
     *  RelationalOperator: '<S590>/Comparison1'
     *  RelationalOperator: '<S595>/Comparison1'
     *  RelationalOperator: '<S595>/Comparison2'
     *  UnitDelay: '<S590>/Unit Delay1'
     */
    if ((((rtb_Switch1_ky > 0.1F) && (rtb_Switch1_ky < 0.1F)) ||
            (SCPR_ac_DW.UnitDelay1_DSTATE_c < 1.0F)) ||
            (SCPR_ac_DW.IntegerDelay_DSTATE_c[0]))
    {
        /* Switch: '<S590>/Switch' */
        rtb_Sum1_a = rtb_Switch1_ls;
    }
    else
    {
        /* Switch: '<S590>/Switch' */
        rtb_Sum1_a = SCPR_ac_DW.UnitDelay1_DSTATE_c;
    }

    /* End of Switch: '<S590>/Switch' */
    /* End of Outputs for SubSystem: '<S590>/inTolerance' */
    /* End of Outputs for SubSystem: '<S580>/Signal Latch On With Reset1' */

    /* Switch: '<S389>/Switch1' incorporates:
     *  Switch: '<S389>/Switch3'
     */
    if (rtb_VeSCPR_b_CoCH_ImmSOC_ChReq)
    {
        /* Switch: '<S389>/Switch1' */
        rtb_Switch1_ky = SCPR_ac_B.DataStoreRead39;
    }
    else if (rtb_OR1_ii)
    {
        /* Switch: '<S389>/Switch3' incorporates:
         *  Switch: '<S389>/Switch1'
         */
        rtb_Switch1_ky = SCPR_ac_B.DataStoreRead33;
    }
    else
    {
        /* Switch: '<S389>/Switch1' incorporates:
         *  Constant: '<S371>/Constant1'
         *  Switch: '<S389>/Switch3'
         */
        rtb_Switch1_ky = 100.0F;
    }

    /* End of Switch: '<S389>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S580>/Signal Latch On With Reset2' */
    /* Sum: '<S591>/Add' incorporates:
     *  UnitDelay: '<S591>/Unit Delay1'
     */
    rtb_Switch1_no = rtb_Switch1_ky - SCPR_ac_DW.UnitDelay1_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S591>/inTolerance' */
    /* Switch: '<S591>/Switch' incorporates:
     *  Constant: '<S591>/Constant1'
     *  Constant: '<S591>/Tolerance'
     *  Delay: '<S591>/Integer Delay'
     *  Logic: '<S591>/OR1'
     *  Logic: '<S596>/OR1'
     *  RelationalOperator: '<S591>/Comparison1'
     *  RelationalOperator: '<S596>/Comparison1'
     *  RelationalOperator: '<S596>/Comparison2'
     *  UnitDelay: '<S591>/Unit Delay1'
     */
    if ((((rtb_Switch1_no > 0.1F) && (rtb_Switch1_no < 0.1F)) ||
            (SCPR_ac_DW.UnitDelay1_DSTATE_o < 1.0F)) ||
            (SCPR_ac_DW.IntegerDelay_DSTATE_e[0]))
    {
        /* Switch: '<S591>/Switch' */
        rtb_Switch1_no = rtb_Switch1_ky;
    }
    else
    {
        /* Switch: '<S591>/Switch' */
        rtb_Switch1_no = SCPR_ac_DW.UnitDelay1_DSTATE_o;
    }

    /* End of Switch: '<S591>/Switch' */
    /* End of Outputs for SubSystem: '<S591>/inTolerance' */
    /* End of Outputs for SubSystem: '<S580>/Signal Latch On With Reset2' */

    /* RelationalOperator: '<S580>/Comparison4' incorporates:
     *  Inport: '<S6>/TBM_CoopCh_ChargeCmd_In'
     *  RelationalOperator: '<S580>/Comparison3'
     *  RelationalOperator: '<S580>/Comparison6'
     */
    rtb_AND_fz_tmp = SCPR_ac_B.TBM_CoopCh_ChargeCmd_In;

    /* RelationalOperator: '<S580>/Comparison4' incorporates:
     *  Constant: '<S593>/Constant'
     */
    rtb_AND_c2 = (((uint32)rtb_AND_fz_tmp) == CeCITR_e_sna);

    /* Logic: '<S580>/Logical1' incorporates:
     *  Constant: '<S580>/Constant'
     *  RelationalOperator: '<S580>/Comparison5'
     *  Sum: '<S580>/Add'
     */
    rtb_VeSCPR_b_CoCH_ImmSOC_ChReq = (rtb_Comparison4_ah &&
        (SCPR_ac_B.DisplaySOC_In <= (rtb_Sum1_a + 0.5F)));

    /* Outputs for Atomic SubSystem: '<S580>/Signal Latch On With Reset3' */
    /* Logic: '<S592>/OR1' incorporates:
     *  Constant: '<S583>/Constant'
     *  Constant: '<S594>/Constant'
     *  Logic: '<S580>/Logical7'
     *  Logic: '<S592>/NOT'
     *  Logic: '<S592>/OR'
     *  RelationalOperator: '<S580>/Comparison3'
     *  RelationalOperator: '<S580>/Comparison6'
     *  UnitDelay: '<S592>/Unit Delay'
     */
    rtb_OR1_ii = ((((uint32)rtb_AND_fz_tmp) == CeCITR_e_Charge_Now) ||
                  (((((uint32)rtb_AND_fz_tmp) != CeCITR_e_Stop_Charge) &&
                    (!rtb_AND_c2)) && (SCPR_ac_DW.UnitDelay_DSTATE_cuy)));

    /* Update for UnitDelay: '<S592>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cuy = rtb_OR1_ii;

    /* End of Outputs for SubSystem: '<S580>/Signal Latch On With Reset3' */

    /* RelationalOperator: '<S391>/Comparison4' incorporates:
     *  Constant: '<S580>/Constant1'
     *  Logic: '<S580>/Logical3'
     *  RelationalOperator: '<S580>/Comparison1'
     *  Sum: '<S580>/Add1'
     */
    rtb_Comparison4_ah = (((rtb_Comparison4_ah && rtb_OR1_ii) &&
                           rtb_RelatonalOperator2_idx_2) &&
                          (SCPR_ac_B.DisplaySOC_In <= (rtb_Switch1_no + 0.5F)));

    /* Logic: '<S580>/Logical12' incorporates:
     *  Logic: '<S580>/Logical2'
     */
    rtb_OR1_ii = ((rtb_VeSCPR_b_CoCH_ImmSOC_ChReq || rtb_Comparison4_ah) &&
                  (SCPR_ac_B.Logical9));

    /* Switch: '<S587>/Switch1' incorporates:
     *  Logic: '<S580>/Logical10'
     *  Logic: '<S580>/Logical8'
     *  Logic: '<S580>/Logical9'
     *  Switch: '<S587>/Switch2'
     *  Switch: '<S587>/Switch3'
     */
    if (!VeSCPR_b_ActvCharging)
    {
        /* Switch: '<S587>/Switch1' incorporates:
         *  Constant: '<S585>/Constant'
         */
        Switch1_k = CeSCPR_e_DefaultSts;
    }
    else if ((VeSCPR_b_ActvCharging) && (VeSCPR_b_InChrgWindow))
    {
        /* Switch: '<S587>/Switch2' incorporates:
         *  Constant: '<S589>/Constant'
         *  Switch: '<S587>/Switch1'
         */
        Switch1_k = CeSCPR_e_Regular_Charging;
    }
    else if ((VeSCPR_b_ActvCharging) && rtb_OR1_ii)
    {
        /* Switch: '<S587>/Switch3' incorporates:
         *  Constant: '<S586>/Constant'
         *  Switch: '<S587>/Switch1'
         *  Switch: '<S587>/Switch2'
         */
        Switch1_k = CeSCPR_e_External_Charging;
    }
    else
    {
        /* Switch: '<S587>/Switch1' incorporates:
         *  Constant: '<S588>/Constant'
         *  Switch: '<S587>/Switch2'
         *  Switch: '<S587>/Switch3'
         *  Switch: '<S587>/Switch4'
         */
        Switch1_k = CeSCPR_e_Other_reason;
    }

    /* End of Switch: '<S587>/Switch1' */

    /* Switch: '<S602>/Switch1' */
    if (SCPR_ac_B.Logical9)
    {
        /* Switch: '<S602>/Switch1' incorporates:
         *  Constant: '<S581>/FALSE Constant'
         */
        VeSCPR_b_ChargeRequest_BEV = false;
    }
    else
    {
        /* Switch: '<S602>/Switch1' incorporates:
         *  Logic: '<S581>/Logical1'
         *  Switch: '<S602>/Switch2'
         */
        VeSCPR_b_ChargeRequest_BEV = ((((VeSCPR_b_ForcedChrgReq) ||
            (VeSCPR_b_HU_CHImplDataRcvd)) || rtb_AND_c2) ||
            (VeSCPR_b_ChrgDontChrg));
    }

    /* End of Switch: '<S602>/Switch1' */

    /* Logic: '<S603>/Logical2' */
    VeSCPR_b_IntededChargeReq_PHEV = (((VeSCPR_b_SchChrgInWindow) ||
        (VeSCPR_b_ChrgDontChrg_PHEV)) || (VeSCPR_b_NoChScheduleSet));

    /* Switch: '<S606>/Switch1' incorporates:
     *  Constant: '<S610>/Calib'
     */
    if (KeSCPR_b_UseBPCM_RTC)
    {
        /* Switch: '<S606>/Switch1' incorporates:
         *  Constant: '<S609>/Constant'
         *  DataStoreRead: '<S609>/StatusByte_LosCommBECM_A'
         *  RelationalOperator: '<S609>/Relational Operator'
         *  S-Function (sfix_bitop): '<S609>/Bitwise Operator7'
         */
        VeSCPR_b_RTCFaulted = ((((sint32)SCPR_ac_DW.StatusByte_LosCommBECM_A) &
                                1) > 0);
    }
    else
    {
        /* Switch: '<S606>/Switch1' incorporates:
         *  Constant: '<S608>/Constant'
         *  DataStoreRead: '<S608>/StatusByte_IgnKeyOffTmrPerfTooFast'
         *  RelationalOperator: '<S608>/Relational Operator'
         *  S-Function (sfix_bitop): '<S608>/Bitwise Operator7'
         */
        VeSCPR_b_RTCFaulted = ((((sint32)
            SCPR_ac_DW.StatusByte_IgnKeyOffTmrPerfTooF) & 1) > 0);
    }

    /* End of Switch: '<S606>/Switch1' */

    /* RelationalOperator: '<S581>/Comparison12' incorporates:
     *  RelationalOperator: '<S581>/Comparison1'
     *  RelationalOperator: '<S581>/Comparison13'
     *  RelationalOperator: '<S581>/Comparison3'
     *  Switch: '<S809>/Switch1'
     */
    VeSCPR_b_HCP_SchMaster_tmp = SCPR_ac_B.Switch1_mm;

    /* Logic: '<S581>/Logical4' incorporates:
     *  Constant: '<S597>/Constant'
     *  Constant: '<S600>/Constant'
     *  RelationalOperator: '<S581>/Comparison1'
     *  RelationalOperator: '<S581>/Comparison12'
     */
    VeSCPR_b_HCP_SchMaster = ((((uint32)VeSCPR_b_HCP_SchMaster_tmp) ==
        CeCITR_e_RRM_VP_Level2) || (((uint32)VeSCPR_b_HCP_SchMaster_tmp) ==
        CeCITR_e_RRM_VP_Level3));

    /* Outputs for Atomic SubSystem: '<S604>/Count Down  Reset Enabled' */
    /* Switch: '<S611>/Switch1' incorporates:
     *  Constant: '<S611>/Constant Value'
     *  Logic: '<S604>/Logical1'
     *  RelationalOperator: '<S611>/Greater  Than'
     *  Switch: '<S611>/Switch2'
     *  UnitDelay: '<S604>/Unit Delay'
     *  UnitDelay: '<S611>/Unit Delay'
     */
    if (!SCPR_ac_DW.UnitDelay_DSTATE_nf)
    {
        /* Switch: '<S611>/Switch1' incorporates:
         *  Constant: '<S612>/Calib'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_RadioChrgEnblDbncTm;
    }
    else if (((sint32)SCPR_ac_DW.UnitDelay_DSTATE_f0) > 0)
    {
        /* Switch: '<S611>/Switch2' incorporates:
         *  Constant: '<S611>/Constant Value1'
         *  Sum: '<S611>/Subtraction'
         *  Switch: '<S611>/Switch1'
         *  UnitDelay: '<S611>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)((sint32)(((sint32)
            SCPR_ac_DW.UnitDelay_DSTATE_f0) - 1));
    }
    else
    {
        /* Switch: '<S611>/Switch1' incorporates:
         *  Switch: '<S611>/Switch2'
         *  UnitDelay: '<S611>/Unit Delay'
         */
        rtb_Switch1_e0 = SCPR_ac_DW.UnitDelay_DSTATE_f0;
    }

    /* End of Switch: '<S611>/Switch1' */

    /* RelationalOperator: '<S611>/Greater  Than1' incorporates:
     *  Constant: '<S611>/Constant Value2'
     */
    VeSCPR_b_RadReqTest2 = (((sint32)rtb_Switch1_e0) > 0);

    /* Update for UnitDelay: '<S611>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_f0 = rtb_Switch1_e0;

    /* End of Outputs for SubSystem: '<S604>/Count Down  Reset Enabled' */

    /* Switch: '<S604>/Switch' */
    if (VeSCPR_b_RadReqTest2)
    {
        /* Switch: '<S604>/Switch' incorporates:
         *  DataStoreRead: '<S604>/Data Store Read1'
         *  Logic: '<S604>/Logical3'
         */
        VeSCPR_b_ArbRadioReq = !SCPR_ac_DW.NeSCPR_b_RadioRqLstVldStt;
    }
    else
    {
        /* Switch: '<S604>/Switch' */
        VeSCPR_b_ArbRadioReq = VeSCPR_b_ChargeReqRadio;
    }

    /* End of Switch: '<S604>/Switch' */

    /* Switch: '<S603>/Switch1' incorporates:
     *  Constant: '<S607>/Calib'
     *  Logic: '<S603>/Logical7'
     */
    if ((VeSCPR_b_HCP_SchMaster) || (KeSCPR_b_SchChrg_Master))
    {
        /* Switch: '<S603>/Switch1' incorporates:
         *  Logic: '<S603>/Logical3'
         */
        VeSCPR_b_ChrgReq_PHEV = (((VeSCPR_b_IntededChargeReq_PHEV) ||
            (VeSCPR_b_RTCFaulted)) || (VeSCPR_b_HU_CHImplDataRcvd));
    }
    else
    {
        /* Switch: '<S603>/Switch1' */
        VeSCPR_b_ChrgReq_PHEV = VeSCPR_b_ArbRadioReq;
    }

    /* End of Switch: '<S603>/Switch1' */

    /* Logic: '<S603>/Logical1' */
    VeSCPR_b_ChargeReq_PHEV = ((VeSCPR_b_ForcedChrgReq) ||
        (VeSCPR_b_ChrgReq_PHEV));

    /* Switch: '<S601>/Switch' incorporates:
     *  Constant: '<S605>/Calib'
     */
    if (KeSCPR_b_isBEV)
    {
        /* Switch: '<S601>/Switch' */
        VeSCPR_b_SWChargeReq = VeSCPR_b_ChargeRequest_BEV;
    }
    else
    {
        /* Switch: '<S601>/Switch' */
        VeSCPR_b_SWChargeReq = VeSCPR_b_ChargeReq_PHEV;
    }

    /* End of Switch: '<S601>/Switch' */

    /* Logic: '<S601>/Logical18' */
    VeSCPR_b_FinalChargeReq = ((VeSCPR_b_SWChargeReq) &&
        (VeSCPR_b_FOTAAllowsCharge));

    /* Logic: '<S581>/Logical5' incorporates:
     *  Constant: '<S598>/Constant'
     *  Constant: '<S599>/Constant'
     *  RelationalOperator: '<S581>/Comparison13'
     *  RelationalOperator: '<S581>/Comparison3'
     */
    VeSCPR_b_SCPnotSupported = ((((uint32)VeSCPR_b_HCP_SchMaster_tmp) ==
        CeCITR_e_RRM_VP_Level1) || (((uint32)VeSCPR_b_HCP_SchMaster_tmp) ==
        CeCITR_e_RRM_VP_Level4));

    /* Outputs for Enabled SubSystem: '<S604>/LstRadioChrgRq' incorporates:
     *  EnablePort: '<S613>/Enable'
     */
    /* Logic: '<S604>/Logical4' */
    if (!VeSCPR_b_RadReqTest2)
    {
        /* DataStoreWrite: '<S613>/Data Store Write' incorporates:
         *  Logic: '<S604>/Logical2'
         */
        SCPR_ac_DW.NeSCPR_b_RadioRqLstVldStt = !VeSCPR_b_ChargeReqRadio;
    }

    /* End of Logic: '<S604>/Logical4' */
    /* End of Outputs for SubSystem: '<S604>/LstRadioChrgRq' */

    /* Outputs for Atomic SubSystem: '<S755>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S766>/EdgeRising' */
    /* Logic: '<S770>/AND' incorporates:
     *  Logic: '<S770>/OR1'
     *  UnitDelay: '<S770>/Unit Delay'
     */
    rtb_AND_c2 = !SCPR_ac_DW.UnitDelay_DSTATE_pb;

    /* Update for UnitDelay: '<S770>/Unit Delay' incorporates:
     *  Constant: '<S755>/TRUE Constant1'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_pb = true;

    /* End of Outputs for SubSystem: '<S766>/EdgeRising' */

    /* Switch: '<S766>/Switch1' incorporates:
     *  Constant: '<S762>/Calib'
     *  Constant: '<S766>/Constant Value'
     *  Logic: '<S766>/OR'
     *  MinMax: '<S766>/Minimum'
     *  Sum: '<S766>/Summation'
     *  UnitDelay: '<S766>/Unit Delay'
     */
    if (rtb_AND_c2)
    {
        /* Switch: '<S766>/Switch1' incorporates:
         *  Constant: '<S766>/Constant Value1'
         */
        rtb_Switch1_e0 = 0U;
    }
    else if (KeSCPR_Cnt_DNR_ValHoldDbnc < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_ht) + 1U)))
    {
        /* MinMax: '<S766>/Minimum' incorporates:
         *  Constant: '<S762>/Calib'
         *  Switch: '<S766>/Switch1'
         */
        rtb_Switch1_e0 = KeSCPR_Cnt_DNR_ValHoldDbnc;
    }
    else
    {
        /* Switch: '<S766>/Switch1' incorporates:
         *  Constant: '<S766>/Constant Value'
         *  MinMax: '<S766>/Minimum'
         *  Sum: '<S766>/Summation'
         *  UnitDelay: '<S766>/Unit Delay'
         */
        rtb_Switch1_e0 = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_ht) + 1U);
    }

    /* End of Switch: '<S766>/Switch1' */

    /* Update for UnitDelay: '<S766>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ht = rtb_Switch1_e0;

    /* Switch: '<S755>/Switch2' incorporates:
     *  Constant: '<S762>/Calib'
     *  DataStoreWrite: '<S755>/Data Store Write2'
     *  DataStoreWrite: '<S755>/Data Store Write3'
     *  RelationalOperator: '<S766>/Greater  Than'
     *  Switch: '<S755>/Switch3'
     *  UnitDelay: '<S755>/Unit Delay5'
     *  UnitDelay: '<S755>/Unit Delay6'
     */
    if (rtb_Switch1_e0 >= KeSCPR_Cnt_DNR_ValHoldDbnc)
    {
        SCPR_ac_DW.NeSCPR_k_LastSecond = SCPR_ac_DW.UnitDelay6_DSTATE;
        SCPR_ac_DW.NeSCPR_k_LastRTC = SCPR_ac_DW.UnitDelay5_DSTATE;
    }

    /* End of Switch: '<S755>/Switch2' */
    /* End of Outputs for SubSystem: '<S755>/Turn On Delay Sample1' */

    /* Switch: '<S740>/Switch1' incorporates:
     *  Constant: '<S719>/Constant Value11'
     *  Constant: '<S719>/Constant Value4'
     *  Constant: '<S719>/Constant Value5'
     *  Constant: '<S719>/Constant Value6'
     *  Constant: '<S719>/Constant Value7'
     *  Constant: '<S719>/Constant Value8'
     *  Constant: '<S719>/Constant Value9'
     *  RelationalOperator: '<S719>/Comparison1'
     *  RelationalOperator: '<S719>/Comparison2'
     *  RelationalOperator: '<S719>/Comparison3'
     *  RelationalOperator: '<S719>/Comparison4'
     *  RelationalOperator: '<S719>/Comparison5'
     *  RelationalOperator: '<S719>/Comparison6'
     *  RelationalOperator: '<S719>/Comparison7'
     *  Switch: '<S740>/Switch2'
     *  Switch: '<S740>/Switch3'
     *  Switch: '<S740>/Switch4'
     *  Switch: '<S740>/Switch5'
     *  Switch: '<S740>/Switch6'
     *  Switch: '<S740>/Switch7'
     */
    if (VeSCPR_k_DayOfWeek_num == 1)
    {
        /* Switch: '<S740>/Switch1' incorporates:
         *  Constant: '<S738>/Constant'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Monday;
    }
    else if (VeSCPR_k_DayOfWeek_num == 2)
    {
        /* Switch: '<S740>/Switch2' incorporates:
         *  Constant: '<S739>/Constant'
         *  Switch: '<S740>/Switch1'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Tuesday;
    }
    else if (VeSCPR_k_DayOfWeek_num == 3)
    {
        /* Switch: '<S740>/Switch3' incorporates:
         *  Constant: '<S732>/Constant'
         *  Switch: '<S740>/Switch1'
         *  Switch: '<S740>/Switch2'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Wednesday;
    }
    else if (VeSCPR_k_DayOfWeek_num == 4)
    {
        /* Switch: '<S740>/Switch4' incorporates:
         *  Constant: '<S733>/Constant'
         *  Switch: '<S740>/Switch1'
         *  Switch: '<S740>/Switch2'
         *  Switch: '<S740>/Switch3'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Thursday;
    }
    else if (VeSCPR_k_DayOfWeek_num == 5)
    {
        /* Switch: '<S740>/Switch5' incorporates:
         *  Constant: '<S734>/Constant'
         *  Switch: '<S740>/Switch1'
         *  Switch: '<S740>/Switch2'
         *  Switch: '<S740>/Switch3'
         *  Switch: '<S740>/Switch4'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Friday;
    }
    else if (VeSCPR_k_DayOfWeek_num == 6)
    {
        /* Switch: '<S740>/Switch6' incorporates:
         *  Constant: '<S735>/Constant'
         *  Switch: '<S740>/Switch1'
         *  Switch: '<S740>/Switch2'
         *  Switch: '<S740>/Switch3'
         *  Switch: '<S740>/Switch4'
         *  Switch: '<S740>/Switch5'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Saturday;
    }
    else if (VeSCPR_k_DayOfWeek_num == 0)
    {
        /* Switch: '<S740>/Switch7' incorporates:
         *  Constant: '<S736>/Constant'
         *  Switch: '<S740>/Switch1'
         *  Switch: '<S740>/Switch2'
         *  Switch: '<S740>/Switch3'
         *  Switch: '<S740>/Switch4'
         *  Switch: '<S740>/Switch5'
         *  Switch: '<S740>/Switch6'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_Sunday;
    }
    else
    {
        /* Switch: '<S740>/Switch1' incorporates:
         *  Constant: '<S737>/Constant'
         *  Switch: '<S740>/Switch2'
         *  Switch: '<S740>/Switch3'
         *  Switch: '<S740>/Switch4'
         *  Switch: '<S740>/Switch5'
         *  Switch: '<S740>/Switch6'
         *  Switch: '<S740>/Switch7'
         */
        VeSCPR_e_DayOfWeek = CeSCPR_e_Day_NoDay;
    }

    /* End of Switch: '<S740>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S714>/Protected Division' */
    /* Switch: '<S751>/Switch1' incorporates:
     *  Constant: '<S751>/Constant Value1'
     *  DataTypeConversion: '<S714>/FixToFloat'
     *  RelationalOperator: '<S751>/Not Equal1'
     */
    if (VeSCPR_K_ArrElementTimeIncSize != 0)
    {
        /* Switch: '<S751>/Switch1' incorporates:
         *  Constant: '<S714>/Constant3'
         *  Product: '<S751>/Division'
         */
        rtb_Sum1_nz = 60.0F / ((float32)VeSCPR_K_ArrElementTimeIncSize);
    }
    else
    {
        /* Switch: '<S751>/Switch1' */
        rtb_Sum1_nz = 3.402823466E+38F;
    }

    /* End of Switch: '<S751>/Switch1' */
    /* End of Outputs for SubSystem: '<S714>/Protected Division' */

    /* DataTypeConversion: '<S714>/FloatToFix' */
    rtb_Sum1_nz = fmodf(floorf(rtb_Sum1_nz), 65536.0F);

    /* Product: '<S714>/Product' incorporates:
     *  Constant: '<S714>/Constant4'
     *  DataTypeConversion: '<S714>/FloatToFix'
     */
    VeSCPR_K_NbrArrElementsPerDay = (sint16)(((rtb_Sum1_nz < 0.0F) ? ((sint32)
        ((sint16)(-((sint16)((uint16)((float32)(-rtb_Sum1_nz))))))) : ((sint32)
        ((sint16)((uint16)rtb_Sum1_nz)))) * 24);

    /* Product: '<S714>/Product1' incorporates:
     *  Constant: '<S714>/Constant5'
     */
    VeSCPR_K_NbrArrElementsPerWeek = (sint16)(VeSCPR_K_NbrArrElementsPerDay * 7);

    /* Outputs for Enabled SubSystem: '<S5>/Est_SOC' incorporates:
     *  EnablePort: '<S115>/Enable'
     */
    /* Constant: '<S116>/Calib' */
    if (HeSCPR_b_SOCestimation_enbl)
    {
        /* UnitDelay: '<S368>/Unit Delay' incorporates:
         *  Constant: '<S356>/Constant'
         *  RelationalOperator: '<S214>/Comparison1'
         *  RelationalOperator: '<S353>/Comparison1'
         *  Switch: '<S809>/Switch60'
         */
        rtb_AND_c2 = (((uint32)VeSCPR_e_ChargingSysSts) ==
                      CeOBCR_e_ChargingSts_Charging);

        /* Switch: '<S352>/Switch1' incorporates:
         *  Logic: '<S352>/Logical'
         *  RelationalOperator: '<S352>/Comparison1'
         */
        if ((VeSCPR_K_NowIndex_Min < VeSCPR_K_NextSch_ChrgStart) &&
                (VeSCPR_b_InChrgWindow))
        {
            /* Switch: '<S352>/Switch1' incorporates:
             *  Sum: '<S352>/Sum3'
             */
            VeSCPR_K_EstSOC_Test2 = (sint16)(VeSCPR_K_NowIndex_Min +
                VeSCPR_k_NumOfMinPerWeek);
        }
        else
        {
            /* Switch: '<S352>/Switch1' */
            VeSCPR_K_EstSOC_Test2 = VeSCPR_K_NowIndex_Min;
        }

        /* End of Switch: '<S352>/Switch1' */

        /* Switch: '<S352>/Switch3' incorporates:
         *  RelationalOperator: '<S352>/Comparison3'
         *  Sum: '<S352>/Sum2'
         */
        if (VeSCPR_K_NextSch_ChrgEnd >= VeSCPR_K_NextSch_ChrgStart)
        {
            rtb_day = VeSCPR_K_NextSch_ChrgEnd;
        }
        else
        {
            rtb_day = (sint16)(VeSCPR_K_NextSch_ChrgEnd +
                               VeSCPR_k_NumOfMinPerWeek);
        }

        /* End of Switch: '<S352>/Switch3' */

        /* Switch: '<S352>/Switch2' */
        if (VeSCPR_b_InChrgWindow)
        {
            rtb_NextStart = VeSCPR_K_EstSOC_Test2;
        }
        else
        {
            rtb_NextStart = VeSCPR_K_NextSch_ChrgStart;
        }

        /* End of Switch: '<S352>/Switch2' */

        /* Sum: '<S352>/Sum1' */
        VeSCPR_K_EstSOC_Test3 = (sint16)(rtb_day - rtb_NextStart);

        /* Switch: '<S352>/Switch' incorporates:
         *  Constant: '<S352>/Constant Value'
         *  RelationalOperator: '<S352>/Comparison4'
         */
        if (VeSCPR_K_EstSOC_Test3 < 0)
        {
            /* Switch: '<S352>/Switch' incorporates:
             *  Constant: '<S352>/Constant Value2'
             */
            VeSCPR_K_Index_Delta = 0;
        }
        else
        {
            /* Switch: '<S352>/Switch' */
            VeSCPR_K_Index_Delta = VeSCPR_K_EstSOC_Test3;
        }

        /* End of Switch: '<S352>/Switch' */

        /* If: '<S353>/If' incorporates:
         *  DataStoreRead: '<S353>/Data Store Read'
         *  RelationalOperator: '<S353>/Comparison4'
         *  UnitDelay: '<S353>/Unit Delay'
         */
        if (VeSCPR_K_Index_Delta != SCPR_ac_DW.UnitDelay_DSTATE_g)
        {
            /* Outputs for IfAction SubSystem: '<S353>/If Action Subsystem' incorporates:
             *  ActionPort: '<S358>/Action Port'
             */
            SCPR_ac_IfActionSubsystem(VeSCPR_Pct_HV_BatSOC, &rtb_Sum1_nz);

            /* End of Outputs for SubSystem: '<S353>/If Action Subsystem' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S353>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S359>/Action Port'
             */
            SCPR_ac_IfActionSubsystem(SCPR_ac_DW.NeSCPR_Pct_SOCArb, &rtb_Sum1_nz);

            /* End of Outputs for SubSystem: '<S353>/If Action Subsystem1' */
        }

        /* End of If: '<S353>/If' */

        /* Switch: '<S353>/Switch4' incorporates:
         *  Logic: '<S353>/Logical2'
         */
        if (!rtb_AND_c2)
        {
            /* Switch: '<S353>/Switch4' */
            VeSCPR_Pct_SOCArbfrEst = VeSCPR_Pct_HV_BatSOC;
        }
        else
        {
            /* Switch: '<S353>/Switch4' */
            VeSCPR_Pct_SOCArbfrEst = rtb_Sum1_nz;
        }

        /* End of Switch: '<S353>/Switch4' */

        /* DataStoreWrite: '<S353>/Data Store Write' */
        SCPR_ac_DW.NeSCPR_Pct_SOCArb = VeSCPR_Pct_SOCArbfrEst;

        /* Outputs for Atomic SubSystem: '<S353>/EdgeRising1' */
        /* Logic: '<S354>/AND' incorporates:
         *  Logic: '<S354>/OR1'
         *  UnitDelay: '<S354>/Unit Delay'
         */
        rtb_Logical1_f = !SCPR_ac_DW.UnitDelay_DSTATE_gx;

        /* Update for UnitDelay: '<S354>/Unit Delay' incorporates:
         *  Constant: '<S353>/TRUE Constant3'
         */
        SCPR_ac_DW.UnitDelay_DSTATE_gx = true;

        /* End of Outputs for SubSystem: '<S353>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S353>/Lowpass Second Order Enabled1' */
        /* Switch: '<S365>/Switch3' incorporates:
         *  Switch: '<S365>/Switch1'
         */
        if (rtb_Logical1_f)
        {
            /* Switch: '<S365>/Switch3' */
            rtb_Switch3_kq = SCPR_ac_B.Switch104;

            /* Switch: '<S365>/Switch1' */
            rtb_Multiplication1 = SCPR_ac_B.Switch104;
        }
        else
        {
            /* Switch: '<S365>/Switch3' incorporates:
             *  UnitDelay: '<S365>/x2'
             */
            rtb_Switch3_kq = SCPR_ac_DW.x2_DSTATE;

            /* Product: '<S365>/Multiplication1' incorporates:
             *  Constant: '<S357>/Calib'
             *  Constant: '<S362>/Calib'
             *  MinMax: '<S365>/Maximum'
             */
            rtb_Multiplication1 = (1.0F / fmaxf
                                   (KeSCPR_K_MaxAlwCurr_FilterTimeConst_T,
                                    HeSCPR_t_ExecRate)) * HeSCPR_t_ExecRate;

            /* Switch: '<S365>/Switch1' incorporates:
             *  Constant: '<S361>/Calib'
             *  Gain: '<S365>/Gain'
             *  Gain: '<S365>/Gain1'
             *  Math: '<S365>/Square'
             *  Product: '<S365>/Multiplication2'
             *  Product: '<S365>/Multiplication3'
             *  Sum: '<S365>/Subtraction'
             *  Sum: '<S365>/Subtraction1'
             *  Sum: '<S365>/Summation'
             *  UnitDelay: '<S365>/temp'
             *  UnitDelay: '<S365>/x2'
             */
            rtb_Multiplication1 = (((((SCPR_ac_DW.temp_DSTATE -
                SCPR_ac_DW.x2_DSTATE) * (2.0F *
                KeSCPR_K_MaxAlwCurr_FilterTimeConst_D)) * rtb_Multiplication1) +
                                    ((rtb_Multiplication1 * rtb_Multiplication1)
                * (SCPR_ac_B.Switch104 - SCPR_ac_DW.temp_DSTATE))) -
                                   SCPR_ac_DW.temp_DSTATE) + (2.0F *
                SCPR_ac_DW.x2_DSTATE);
        }

        /* End of Switch: '<S365>/Switch3' */
        /* End of Outputs for SubSystem: '<S353>/Lowpass Second Order Enabled1' */

        /* Switch: '<S353>/Switch2' incorporates:
         *  Constant: '<S360>/Calib'
         *  Sum: '<S353>/Sum1'
         */
        if (rtb_AND_c2)
        {
            rtb_Sum1_nz = rtb_Multiplication1 - KeSCPR_I_CurrOffset_EstSOC;
        }
        else
        {
            rtb_Sum1_nz = VeSCPR_I_ChrgCurrEstSOC;
        }

        /* End of Switch: '<S353>/Switch2' */

        /* MinMax: '<S353>/MinMax2' incorporates:
         *  Constant: '<S353>/Constant Value2'
         */
        VeSCPR_I_ChrgCurrAvblAct = fmaxf(rtb_Sum1_nz, 0.0F);

        /* Product: '<S353>/Product2' incorporates:
         *  Constant: '<S353>/Constant Value1'
         *  Product: '<S353>/Product1'
         */
        rtb_Sum1_nz = (((float32)VeSCPR_K_Index_Delta) / 60.0F) *
            VeSCPR_I_ChrgCurrAvblAct;

        /* Outputs for Atomic SubSystem: '<S353>/Protected Division1' */
        /* Switch: '<S366>/Switch1' incorporates:
         *  Constant: '<S366>/Constant Value'
         *  Constant: '<S366>/Constant Value1'
         *  Constant: '<S366>/Constant Value2'
         *  Constant: '<S366>/Constant Value3'
         *  Logic: '<S366>/AND'
         *  RelationalOperator: '<S366>/Greater Than or Equal '
         *  RelationalOperator: '<S366>/Greater Than or Equal 1'
         *  RelationalOperator: '<S366>/Not Equal'
         *  RelationalOperator: '<S366>/Not Equal1'
         *  Switch: '<S366>/Switch2'
         *  Switch: '<S366>/Switch3'
         */
        if ((rtb_Sum1_nz != 0.0F) && (SCPR_ac_B.VeSCPR_q_FullAmpHrCap != 0.0F))
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Product: '<S366>/Division'
             */
            VeSCPR_K_EstPwrBdgt_Test6 = rtb_Sum1_nz /
                SCPR_ac_B.VeSCPR_q_FullAmpHrCap;
        }
        else if (rtb_Sum1_nz > 0.0F)
        {
            /* Switch: '<S366>/Switch2' incorporates:
             *  Constant: '<S366>/MAXFLOAT'
             *  Switch: '<S366>/Switch1'
             */
            VeSCPR_K_EstPwrBdgt_Test6 = 3.402823466E+38F;
        }
        else if (rtb_Sum1_nz < 0.0F)
        {
            /* Switch: '<S366>/Switch3' incorporates:
             *  Constant: '<S366>/MINFLOAT'
             *  Switch: '<S366>/Switch1'
             *  Switch: '<S366>/Switch2'
             */
            VeSCPR_K_EstPwrBdgt_Test6 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S366>/Switch1' incorporates:
             *  Constant: '<S366>/Constant Value4'
             *  Switch: '<S366>/Switch2'
             *  Switch: '<S366>/Switch3'
             */
            VeSCPR_K_EstPwrBdgt_Test6 = 0.0F;
        }

        /* End of Switch: '<S366>/Switch1' */
        /* End of Outputs for SubSystem: '<S353>/Protected Division1' */

        /* Product: '<S353>/Product4' incorporates:
         *  Constant: '<S353>/MaxSOC1'
         */
        VeSCPR_Pct_SOC_Delta = VeSCPR_K_EstPwrBdgt_Test6 * 100.0F;

        /* Sum: '<S353>/Sum' incorporates:
         *  DataStoreRead: '<S353>/Data Store Read1'
         */
        VeSCPR_Pct_EstSOC_Test1 = SCPR_ac_DW.NeSCPR_Pct_SOCArb +
            VeSCPR_Pct_SOC_Delta;

        /* Outputs for Atomic SubSystem: '<S353>/Turn Off Delay Time' */
        /* Outputs for Atomic SubSystem: '<S367>/EdgeFalling1' */
        /* UnitDelay: '<S368>/Unit Delay' */
        rtb_AND_c2 = SCPR_ac_DW.UnitDelay_DSTATE_cx;

        /* Update for UnitDelay: '<S368>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_cx = VeSCPR_b_DisplayUF;

        /* Switch: '<S367>/Switch' incorporates:
         *  Logic: '<S368>/AND'
         *  Logic: '<S368>/OR1'
         */
        if ((!VeSCPR_b_DisplayUF) && rtb_AND_c2)
        {
            /* Switch: '<S367>/Switch' incorporates:
             *  Constant: '<S363>/Calib'
             */
            rtb_Sum1_nz = KeSCPR_t_SOCest_UFDelay;
        }
        else
        {
            /* Switch: '<S367>/Switch' incorporates:
             *  Constant: '<S357>/Calib'
             *  Constant: '<S367>/Constant Value1'
             *  MinMax: '<S367>/Minimum'
             *  Sum: '<S367>/Summation'
             *  UnitDelay: '<S367>/Unit Delay'
             */
            rtb_Sum1_nz = fmaxf(SCPR_ac_DW.UnitDelay_DSTATE_f -
                                HeSCPR_t_ExecRate, 0.0F);
        }

        /* End of Switch: '<S367>/Switch' */
        /* End of Outputs for SubSystem: '<S367>/EdgeFalling1' */

        /* Update for UnitDelay: '<S367>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_f = rtb_Sum1_nz;

        /* Switch: '<S353>/Switch' incorporates:
         *  Constant: '<S353>/MaxSOC'
         *  Constant: '<S367>/Constant Value2'
         *  Logic: '<S367>/AND'
         *  RelationalOperator: '<S364>/Relational Operator'
         *  RelationalOperator: '<S367>/Greater  Than'
         *  Switch: '<S364>/Switch1'
         */
        if ((VeSCPR_b_DisplayUF) || (rtb_Sum1_nz > 0.0F))
        {
            /* Switch: '<S353>/Switch' incorporates:
             *  Constant: '<S353>/MaxSOC2'
             */
            VeSCPR_Pct_SOC_estimateTest = 100.0F;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S353>/Limiter' */
            if (100.0F < VeSCPR_Pct_EstSOC_Test1)
            {
                /* Switch: '<S364>/Switch1' incorporates:
                 *  Constant: '<S353>/MaxSOC'
                 */
                rtb_Sum1_nz = 100.0F;
            }
            else
            {
                /* Switch: '<S364>/Switch1' */
                rtb_Sum1_nz = VeSCPR_Pct_EstSOC_Test1;
            }

            /* Switch: '<S364>/Switch' incorporates:
             *  Constant: '<S353>/MinSOC'
             *  RelationalOperator: '<S364>/Relational Operator1'
             */
            if (rtb_Sum1_nz > 0.0F)
            {
                /* Switch: '<S353>/Switch' */
                VeSCPR_Pct_SOC_estimateTest = rtb_Sum1_nz;
            }
            else
            {
                /* Switch: '<S353>/Switch' */
                VeSCPR_Pct_SOC_estimateTest = 0.0F;
            }

            /* End of Switch: '<S364>/Switch' */
            /* End of Outputs for SubSystem: '<S353>/Limiter' */
        }

        /* End of Switch: '<S353>/Switch' */
        /* End of Outputs for SubSystem: '<S353>/Turn Off Delay Time' */

        /* Switch: '<S353>/Switch1' incorporates:
         *  Constant: '<S355>/Constant'
         *  Logic: '<S353>/Logical3'
         *  RelationalOperator: '<S353>/Comparison7'
         */
        if ((VeSCPR_b_PluggedIn) && (((uint32)VeSCPR_e_ChrgTypeIsDC_tmp) ==
                CeOBCR_e_AC))
        {
            /* Switch: '<S353>/Switch1' */
            VeSCPR_Pct_SOC_estimate = VeSCPR_Pct_SOC_estimateTest;
        }
        else
        {
            /* Switch: '<S353>/Switch1' */
            VeSCPR_Pct_SOC_estimate = VeSCPR_Pct_HV_BatSOC;
        }

        /* End of Switch: '<S353>/Switch1' */
    }

    /* End of Outputs for SubSystem: '<S5>/Est_SOC' */
    for (i = 0; i < 14; i++)
    {
        /* Gain: '<S474>/Gain' */
        VaSCPR_K_SchGlobalCP[(i)] = SCPR_ac_B.Global_CP[i];

        /* Gain: '<S461>/Gain' */
        VaSCPR_K_SchGlobalCPtrack[(i)] = SCPR_ac_B.GlobalCP_track[i];
    }

    /* Gain: '<S463>/Gain' incorporates:
     *  Chart: '<S373>/CabPrecondNxtSch'
     */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CabPrecondNxtSch */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CabPrecondNxtSch */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CabPrecondNxtSch */
    /* Transition: '<S446>:5' */
    VeSCPR_K_CPschedActive = 0;

    /* Chart: '<S373>/CabPrecondNxtSch' */
    j = 0;

    /* Gain: '<S468>/Gain' incorporates:
     *  Chart: '<S373>/CabPrecondNxtSch'
     */
    VeSCPR_K_NextSch_CPStart = -1;
    guard1 = false;
    do
    {
        exitg2 = 0;
        if (j < 14)
        {
            /* Transition: '<S446>:8' */
            if (VeSCPR_K_NowIndex_Min <= VaSCPR_K_SchGlobalCP[(j)])
            {
                /* Transition: '<S446>:10' */
                /* Transition: '<S446>:17' */
                guard1 = true;
                exitg2 = 1;
            }
            else
            {
                /* Transition: '<S446>:35' */
                /* Transition: '<S446>:15' */
                j++;
                guard1 = false;
            }
        }
        else
        {
            /* Transition: '<S446>:21' */
            j = 0;
            exitg2 = 2;
        }
    }
    while (exitg2 == 0);

    if (exitg2 == 1)
    {
    }
    else
    {
        do
        {
            exitg1 = 0;
            if (j < 14)
            {
                /* Transition: '<S446>:23' */
                if (VaSCPR_K_SchGlobalCP[(j)] >= 0)
                {
                    /* Transition: '<S446>:25' */
                    guard1 = true;
                    exitg1 = 1;
                }
                else
                {
                    /* Transition: '<S446>:34' */
                    /* Transition: '<S446>:33' */
                    j++;
                }
            }
            else
            {
                /* Transition: '<S446>:92' */
                /* Transition: '<S446>:93' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);
    }

    if (guard1)
    {
        /* Transition: '<S446>:26' */
        VeSCPR_K_NextSch_CPStart = VaSCPR_K_SchGlobalCP[(j)];
        VeSCPR_K_CPschedActive = VaSCPR_K_SchGlobalCPtrack[(j)];
    }

    /* Switch: '<S374>/Switch1' incorporates:
     *  Constant: '<S369>/Constant Value'
     *  Constant: '<S369>/Constant Value1'
     *  RelationalOperator: '<S369>/Comparison1'
     *  RelationalOperator: '<S369>/Comparison4'
     *  Switch: '<S374>/Switch3'
     *  Switch: '<S375>/Switch1'
     *  Switch: '<S375>/Switch3'
     */
    /* Transition: '<S446>:96' */
    if (VeSCPR_K_CPschedActive == 1)
    {
        /* Switch: '<S374>/Switch1' */
        VeSCPR_T_NextDepTemp = SCPR_ac_B.DataStoreRead19;

        /* Switch: '<S375>/Switch1' incorporates:
         *  DataStoreRead: '<S799>/Data Store Read18'
         */
        VeSCPR_e_NextCondAllow = SCPR_ac_B.DataStoreRead18_k;
    }
    else if (VeSCPR_K_CPschedActive == 2)
    {
        /* Switch: '<S374>/Switch3' incorporates:
         *  Switch: '<S374>/Switch1'
         */
        VeSCPR_T_NextDepTemp = SCPR_ac_B.DataStoreRead25;

        /* Switch: '<S375>/Switch3' incorporates:
         *  DataStoreRead: '<S799>/Data Store Read24'
         *  Switch: '<S375>/Switch1'
         */
        VeSCPR_e_NextCondAllow = SCPR_ac_B.DataStoreRead24_k;
    }
    else
    {
        /* Switch: '<S374>/Switch1' incorporates:
         *  Constant: '<S376>/Calib'
         *  Switch: '<S374>/Switch3'
         */
        VeSCPR_T_NextDepTemp = KeSCPR_T_SchTemp_Default;

        /* Switch: '<S375>/Switch1' incorporates:
         *  Constant: '<S377>/Calib'
         *  Switch: '<S375>/Switch3'
         */
        VeSCPR_e_NextCondAllow = KeSCPR_e_SchCPAllow_Default;
    }

    /* End of Switch: '<S374>/Switch1' */

    /* UnitDelay: '<S372>/Unit Delay2' */
    rtb_AND_c2 = SCPR_ac_DW.UnitDelay2_DSTATE_b;

    /* Switch: '<S396>/Switch3' incorporates:
     *  Logic: '<S396>/Logical1'
     */
    if ((SCPR_ac_B.DataStoreRead5_d) || (SCPR_ac_B.DataStoreRead12_g))
    {
        /* Switch: '<S396>/Switch3' */
        rtb_Switch3_ge[0] = VeSCPR_K_NextSch_ChrgStart;
        rtb_Switch3_ge[1] = VeSCPR_K_NextSch_ChrgEnd;
    }
    else
    {
        /* Switch: '<S396>/Switch3' */
        rtb_Switch3_ge[0] = -1;
        rtb_Switch3_ge[1] = -1;
    }

    /* End of Switch: '<S396>/Switch3' */

    /* Chart: '<S396>/NextTimeStart' */
    SCPR_ac_NextDepTime(rtb_Switch3_ge[0], &SCPR_ac_B.sf_NextTimeStart);

    /* Chart: '<S396>/NextTimeEnd' */
    /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextDisplay/SchCharging/NextTimeEnd */
    /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextDisplay/SchCharging/NextTimeEnd */
    /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextDisplay/SchCharging/NextTimeEnd */
    /* Transition: '<S443>:164' */
    j = 0;
    rtb_day = 0;
    rtb_NextStart = rtb_Switch3_ge[1];
    do
    {
        exitg1 = 0;
        if (j < 7)
        {
            /* Transition: '<S443>:167' */
            /* Transition: '<S443>:169' */
            if (((sint16)(rtb_NextStart - 1440)) >= 0)
            {
                /* Transition: '<S443>:170' */
                /* Transition: '<S443>:172' */
                j++;
                rtb_NextStart = (sint16)(rtb_NextStart - 1440);
            }
            else
            {
                /* Transition: '<S443>:174' */
                rtb_day = (sint16)j;
                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S443>:176' */
            /* Transition: '<S443>:214' */
            /* Transition: '<S443>:233' */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Transition: '<S443>:287' */
    j = 0;
    do
    {
        exitg1 = 0;
        if (j < 25)
        {
            /* Transition: '<S443>:191' */
            /* Transition: '<S443>:193' */
            if (((sint16)(rtb_NextStart - 60)) >= 0)
            {
                /* Transition: '<S443>:195' */
                /* Transition: '<S443>:196' */
                j++;
                rtb_NextStart = (sint16)(rtb_NextStart - 60);
            }
            else
            {
                /* Transition: '<S443>:200' */
                SCPR_ac_B.hr = (sint16)j;
                SCPR_ac_B.min = rtb_NextStart;
                if (rtb_NextStart < 0)
                {
                    /* Transition: '<S443>:240' */
                    /* Transition: '<S443>:242' */
                    rtb_day = -1;
                    SCPR_ac_B.min = 0;

                    /* Transition: '<S443>:244' */
                }
                else
                {
                    /* Transition: '<S443>:237' */
                    /* Transition: '<S443>:239' */
                }

                exitg1 = 1;
            }
        }
        else
        {
            /* Transition: '<S443>:198' */
            /* Transition: '<S443>:219' */
            /* Transition: '<S443>:239' */
            exitg1 = 1;
        }
    }
    while (exitg1 == 0);

    /* Outputs for Atomic SubSystem: '<S397>/EdgeRising2' */
    /* Logic: '<S445>/AND' incorporates:
     *  Logic: '<S445>/OR1'
     *  UnitDelay: '<S445>/Unit Delay'
     */
    /* Transition: '<S443>:234' */
    rtb_Logical1_f = (rtb_AND_c2 && (!SCPR_ac_DW.UnitDelay_DSTATE_c1));

    /* Update for UnitDelay: '<S445>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_c1 = rtb_AND_c2;

    /* End of Outputs for SubSystem: '<S397>/EdgeRising2' */

    /* Switch: '<S397>/Switch2' incorporates:
     *  Switch: '<S397>/Switch'
     *  Switch: '<S397>/Switch1'
     */
    if (rtb_Logical1_f)
    {
        /* Switch: '<S397>/Switch2' */
        rtb_NextStart = SCPR_ac_B.sf_NextTimeStart.day;

        /* Switch: '<S397>/Switch' */
        rtb_Switch_bd = SCPR_ac_B.sf_NextTimeStart.hr;

        /* Switch: '<S397>/Switch1' */
        rtb_Switch1_h25 = SCPR_ac_B.sf_NextTimeStart.min;
    }
    else
    {
        /* Switch: '<S397>/Switch2' incorporates:
         *  UnitDelay: '<S397>/Unit Delay'
         */
        rtb_NextStart = SCPR_ac_DW.UnitDelay_DSTATE_d;

        /* Switch: '<S397>/Switch' incorporates:
         *  UnitDelay: '<S397>/Unit Delay1'
         */
        rtb_Switch_bd = SCPR_ac_DW.UnitDelay1_DSTATE_n;

        /* Switch: '<S397>/Switch1' incorporates:
         *  UnitDelay: '<S397>/Unit Delay3'
         */
        rtb_Switch1_h25 = SCPR_ac_DW.UnitDelay3_DSTATE_o;
    }

    /* End of Switch: '<S397>/Switch2' */

    /* If: '<S372>/If' */
    if (rtb_AND_c2)
    {
        /* Outputs for IfAction SubSystem: '<S372>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S394>/Action Port'
         */
        /* Merge: '<S372>/Merge' incorporates:
         *  Gain: '<S441>/Gain'
         */
        rtb_Merge = rtb_NextStart;

        /* Merge: '<S372>/Merge1' incorporates:
         *  Gain: '<S440>/Gain'
         */
        VeSCPR_k_NextStartChrgHourTest = rtb_Switch_bd;

        /* Merge: '<S372>/Merge2' incorporates:
         *  Gain: '<S442>/Gain'
         */
        VeSCPR_k_NextStartChrgMinTest = rtb_Switch1_h25;

        /* Merge: '<S372>/Merge3' incorporates:
         *  Constant: '<S394>/Constant Value6'
         *  SignalConversion generated from: '<S394>/EndDay'
         */
        rtb_day = 25;

        /* Merge: '<S372>/Merge4' incorporates:
         *  Constant: '<S394>/Constant Value1'
         *  SignalConversion generated from: '<S394>/EndHour'
         */
        rtb_Merge4 = 25;

        /* Merge: '<S372>/Merge5' incorporates:
         *  Constant: '<S394>/Constant Value2'
         *  SignalConversion generated from: '<S394>/EndMin'
         */
        rtb_Merge5_e = 25;

        /* End of Outputs for SubSystem: '<S372>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S372>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S395>/Action Port'
         */
        /* Merge: '<S372>/Merge' incorporates:
         *  Inport: '<S395>/StartDayIn'
         */
        rtb_Merge = SCPR_ac_B.sf_NextTimeStart.day;

        /* Merge: '<S372>/Merge1' incorporates:
         *  Inport: '<S395>/StartHourIn'
         */
        VeSCPR_k_NextStartChrgHourTest = SCPR_ac_B.sf_NextTimeStart.hr;

        /* Merge: '<S372>/Merge2' incorporates:
         *  Inport: '<S395>/StartMinIn'
         */
        VeSCPR_k_NextStartChrgMinTest = SCPR_ac_B.sf_NextTimeStart.min;

        /* Merge: '<S372>/Merge4' incorporates:
         *  Inport: '<S395>/EndHourIn'
         */
        rtb_Merge4 = SCPR_ac_B.hr;

        /* Merge: '<S372>/Merge5' incorporates:
         *  Inport: '<S395>/EndMinIn'
         */
        rtb_Merge5_e = SCPR_ac_B.min;

        /* End of Outputs for SubSystem: '<S372>/If Action Subsystem2' */
    }

    /* End of If: '<S372>/If' */

    /* Switch: '<S427>/Switch1' incorporates:
     *  Constant: '<S391>/Constant Value14'
     *  Constant: '<S391>/Constant Value15'
     *  Constant: '<S391>/Constant Value16'
     *  Constant: '<S391>/Constant Value17'
     *  Constant: '<S391>/Constant Value18'
     *  Constant: '<S391>/Constant Value19'
     *  Constant: '<S391>/Constant Value20'
     *  RelationalOperator: '<S391>/Comparison15'
     *  RelationalOperator: '<S391>/Comparison16'
     *  RelationalOperator: '<S391>/Comparison17'
     *  RelationalOperator: '<S391>/Comparison18'
     *  RelationalOperator: '<S391>/Comparison19'
     *  RelationalOperator: '<S391>/Comparison20'
     *  RelationalOperator: '<S391>/Comparison21'
     *  Switch: '<S427>/Switch2'
     *  Switch: '<S427>/Switch3'
     *  Switch: '<S427>/Switch4'
     *  Switch: '<S427>/Switch5'
     *  Switch: '<S427>/Switch6'
     *  Switch: '<S427>/Switch7'
     */
    if (rtb_Merge == 0)
    {
        /* Switch: '<S427>/Switch1' */
        VeSCPR_K_NextStartChrgDayTest = 7;
    }
    else if (rtb_Merge == 1)
    {
        /* Switch: '<S427>/Switch2' incorporates:
         *  Switch: '<S427>/Switch1'
         */
        VeSCPR_K_NextStartChrgDayTest = 1;
    }
    else if (rtb_Merge == 2)
    {
        /* Switch: '<S427>/Switch3' incorporates:
         *  Switch: '<S427>/Switch1'
         *  Switch: '<S427>/Switch2'
         */
        VeSCPR_K_NextStartChrgDayTest = 2;
    }
    else if (rtb_Merge == 3)
    {
        /* Switch: '<S427>/Switch4' incorporates:
         *  Switch: '<S427>/Switch1'
         *  Switch: '<S427>/Switch2'
         *  Switch: '<S427>/Switch3'
         */
        VeSCPR_K_NextStartChrgDayTest = 3;
    }
    else if (rtb_Merge == 4)
    {
        /* Switch: '<S427>/Switch5' incorporates:
         *  Switch: '<S427>/Switch1'
         *  Switch: '<S427>/Switch2'
         *  Switch: '<S427>/Switch3'
         *  Switch: '<S427>/Switch4'
         */
        VeSCPR_K_NextStartChrgDayTest = 4;
    }
    else if (rtb_Merge == 5)
    {
        /* Switch: '<S427>/Switch6' incorporates:
         *  Switch: '<S427>/Switch1'
         *  Switch: '<S427>/Switch2'
         *  Switch: '<S427>/Switch3'
         *  Switch: '<S427>/Switch4'
         *  Switch: '<S427>/Switch5'
         */
        VeSCPR_K_NextStartChrgDayTest = 5;
    }
    else if (rtb_Merge == 6)
    {
        /* Switch: '<S427>/Switch7' incorporates:
         *  Switch: '<S427>/Switch1'
         *  Switch: '<S427>/Switch2'
         *  Switch: '<S427>/Switch3'
         *  Switch: '<S427>/Switch4'
         *  Switch: '<S427>/Switch5'
         *  Switch: '<S427>/Switch6'
         */
        VeSCPR_K_NextStartChrgDayTest = 6;
    }
    else
    {
        /* Switch: '<S427>/Switch1' incorporates:
         *  Switch: '<S427>/Switch2'
         *  Switch: '<S427>/Switch3'
         *  Switch: '<S427>/Switch4'
         *  Switch: '<S427>/Switch5'
         *  Switch: '<S427>/Switch6'
         *  Switch: '<S427>/Switch7'
         */
        VeSCPR_K_NextStartChrgDayTest = 9;
    }

    /* End of Switch: '<S427>/Switch1' */

    /* Switch: '<S393>/Switch2' incorporates:
     *  Delay: '<S393>/Integer Delay'
     *  RelationalOperator: '<S393>/Comparison5'
     */
    if (rtb_Merge4 == SCPR_ac_DW.IntegerDelay_DSTATE[0])
    {
        /* Switch: '<S393>/Switch2' */
        rtb_Switch2_kb[0] = rtb_day;
        rtb_Switch2_kb[1] = rtb_Merge4;
        rtb_Switch2_kb[2] = rtb_Merge5_e;
    }
    else
    {
        /* Switch: '<S393>/Switch2' incorporates:
         *  UnitDelay: '<S393>/Unit Delay1'
         */
        rtb_Switch2_kb[0] = SCPR_ac_DW.UnitDelay1_DSTATE_co[0];
        rtb_Switch2_kb[1] = SCPR_ac_DW.UnitDelay1_DSTATE_co[1];
        rtb_Switch2_kb[2] = SCPR_ac_DW.UnitDelay1_DSTATE_co[2];
    }

    /* End of Switch: '<S393>/Switch2' */

    /* Switch: '<S426>/Switch1' incorporates:
     *  Constant: '<S391>/Constant Value1'
     *  Constant: '<S391>/Constant Value2'
     *  Constant: '<S391>/Constant Value3'
     *  Constant: '<S391>/Constant Value4'
     *  Constant: '<S391>/Constant Value5'
     *  Constant: '<S391>/Constant Value6'
     *  Constant: '<S391>/Constant Value7'
     *  RelationalOperator: '<S391>/Comparison1'
     *  RelationalOperator: '<S391>/Comparison2'
     *  RelationalOperator: '<S391>/Comparison3'
     *  RelationalOperator: '<S391>/Comparison4'
     *  RelationalOperator: '<S391>/Comparison5'
     *  RelationalOperator: '<S391>/Comparison6'
     *  RelationalOperator: '<S391>/Comparison7'
     *  Switch: '<S426>/Switch2'
     *  Switch: '<S426>/Switch3'
     *  Switch: '<S426>/Switch4'
     *  Switch: '<S426>/Switch5'
     *  Switch: '<S426>/Switch6'
     *  Switch: '<S426>/Switch7'
     */
    if (rtb_Switch2_kb[0] == 0)
    {
        /* Switch: '<S426>/Switch1' */
        VeSCPR_K_NextEndChrgDayTest = 7;
    }
    else if (rtb_Switch2_kb[0] == 1)
    {
        /* Switch: '<S426>/Switch2' incorporates:
         *  Switch: '<S426>/Switch1'
         */
        VeSCPR_K_NextEndChrgDayTest = 1;
    }
    else if (rtb_Switch2_kb[0] == 2)
    {
        /* Switch: '<S426>/Switch3' incorporates:
         *  Switch: '<S426>/Switch1'
         *  Switch: '<S426>/Switch2'
         */
        VeSCPR_K_NextEndChrgDayTest = 2;
    }
    else if (rtb_Switch2_kb[0] == 3)
    {
        /* Switch: '<S426>/Switch4' incorporates:
         *  Switch: '<S426>/Switch1'
         *  Switch: '<S426>/Switch2'
         *  Switch: '<S426>/Switch3'
         */
        VeSCPR_K_NextEndChrgDayTest = 3;
    }
    else if (rtb_Switch2_kb[0] == 4)
    {
        /* Switch: '<S426>/Switch5' incorporates:
         *  Switch: '<S426>/Switch1'
         *  Switch: '<S426>/Switch2'
         *  Switch: '<S426>/Switch3'
         *  Switch: '<S426>/Switch4'
         */
        VeSCPR_K_NextEndChrgDayTest = 4;
    }
    else if (rtb_Switch2_kb[0] == 5)
    {
        /* Switch: '<S426>/Switch6' incorporates:
         *  Switch: '<S426>/Switch1'
         *  Switch: '<S426>/Switch2'
         *  Switch: '<S426>/Switch3'
         *  Switch: '<S426>/Switch4'
         *  Switch: '<S426>/Switch5'
         */
        VeSCPR_K_NextEndChrgDayTest = 5;
    }
    else if (rtb_Switch2_kb[0] == 6)
    {
        /* Switch: '<S426>/Switch7' incorporates:
         *  Switch: '<S426>/Switch1'
         *  Switch: '<S426>/Switch2'
         *  Switch: '<S426>/Switch3'
         *  Switch: '<S426>/Switch4'
         *  Switch: '<S426>/Switch5'
         *  Switch: '<S426>/Switch6'
         */
        VeSCPR_K_NextEndChrgDayTest = 6;
    }
    else
    {
        /* Switch: '<S426>/Switch1' incorporates:
         *  Switch: '<S426>/Switch2'
         *  Switch: '<S426>/Switch3'
         *  Switch: '<S426>/Switch4'
         *  Switch: '<S426>/Switch5'
         *  Switch: '<S426>/Switch6'
         *  Switch: '<S426>/Switch7'
         */
        VeSCPR_K_NextEndChrgDayTest = 9;
    }

    /* End of Switch: '<S426>/Switch1' */

    /* SignalConversion: '<S393>/Signal Conversion' */
    VeSCPR_k_NextEndChrgHourTest = rtb_Switch2_kb[1];

    /* SignalConversion: '<S393>/Signal Conversion1' */
    VeSCPR_k_NextEndChrgMinTest = rtb_Switch2_kb[2];

    /* Switch: '<S390>/Switch3' incorporates:
     *  Constant: '<S390>/Constant'
     *  Logic: '<S390>/Logical1'
     */
    if ((SCPR_ac_B.DataStoreRead17_c) || (SCPR_ac_B.DataStoreRead23_i))
    {
        rtb_day = VeSCPR_K_NextSch_CPStart;
    }
    else
    {
        rtb_day = -1;
    }

    /* End of Switch: '<S390>/Switch3' */

    /* Chart: '<S390>/NextDepTime' */
    SCPR_ac_NextDepTime(rtb_day, &SCPR_ac_B.sf_NextDepTime);

    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S390>/Constant Value'
     *  Constant: '<S390>/Constant Value1'
     *  Constant: '<S390>/Constant Value2'
     *  Constant: '<S390>/Constant Value3'
     *  Constant: '<S390>/Constant Value4'
     *  Constant: '<S390>/Constant Value5'
     *  Constant: '<S390>/Constant Value7'
     *  RelationalOperator: '<S390>/Comparison1'
     *  RelationalOperator: '<S390>/Comparison2'
     *  RelationalOperator: '<S390>/Comparison3'
     *  RelationalOperator: '<S390>/Comparison4'
     *  RelationalOperator: '<S390>/Comparison5'
     *  RelationalOperator: '<S390>/Comparison6'
     *  RelationalOperator: '<S390>/Comparison8'
     *  Switch: '<S406>/Switch2'
     *  Switch: '<S406>/Switch3'
     *  Switch: '<S406>/Switch4'
     *  Switch: '<S406>/Switch5'
     *  Switch: '<S406>/Switch6'
     *  Switch: '<S406>/Switch7'
     */
    if (SCPR_ac_B.sf_NextDepTime.day == 0)
    {
        /* Switch: '<S406>/Switch1' */
        VeSCPR_K_NextDep_DayTest = 7;
    }
    else if (SCPR_ac_B.sf_NextDepTime.day == 1)
    {
        /* Switch: '<S406>/Switch2' incorporates:
         *  Switch: '<S406>/Switch1'
         */
        VeSCPR_K_NextDep_DayTest = 1;
    }
    else if (SCPR_ac_B.sf_NextDepTime.day == 2)
    {
        /* Switch: '<S406>/Switch3' incorporates:
         *  Switch: '<S406>/Switch1'
         *  Switch: '<S406>/Switch2'
         */
        VeSCPR_K_NextDep_DayTest = 2;
    }
    else if (SCPR_ac_B.sf_NextDepTime.day == 3)
    {
        /* Switch: '<S406>/Switch4' incorporates:
         *  Switch: '<S406>/Switch1'
         *  Switch: '<S406>/Switch2'
         *  Switch: '<S406>/Switch3'
         */
        VeSCPR_K_NextDep_DayTest = 3;
    }
    else if (SCPR_ac_B.sf_NextDepTime.day == 4)
    {
        /* Switch: '<S406>/Switch5' incorporates:
         *  Switch: '<S406>/Switch1'
         *  Switch: '<S406>/Switch2'
         *  Switch: '<S406>/Switch3'
         *  Switch: '<S406>/Switch4'
         */
        VeSCPR_K_NextDep_DayTest = 4;
    }
    else if (SCPR_ac_B.sf_NextDepTime.day == 5)
    {
        /* Switch: '<S406>/Switch6' incorporates:
         *  Switch: '<S406>/Switch1'
         *  Switch: '<S406>/Switch2'
         *  Switch: '<S406>/Switch3'
         *  Switch: '<S406>/Switch4'
         *  Switch: '<S406>/Switch5'
         */
        VeSCPR_K_NextDep_DayTest = 5;
    }
    else if (SCPR_ac_B.sf_NextDepTime.day == 6)
    {
        /* Switch: '<S406>/Switch7' incorporates:
         *  Switch: '<S406>/Switch1'
         *  Switch: '<S406>/Switch2'
         *  Switch: '<S406>/Switch3'
         *  Switch: '<S406>/Switch4'
         *  Switch: '<S406>/Switch5'
         *  Switch: '<S406>/Switch6'
         */
        VeSCPR_K_NextDep_DayTest = 6;
    }
    else
    {
        /* Switch: '<S406>/Switch1' incorporates:
         *  Switch: '<S406>/Switch2'
         *  Switch: '<S406>/Switch3'
         *  Switch: '<S406>/Switch4'
         *  Switch: '<S406>/Switch5'
         *  Switch: '<S406>/Switch6'
         *  Switch: '<S406>/Switch7'
         */
        VeSCPR_K_NextDep_DayTest = 9;
    }

    /* End of Switch: '<S406>/Switch1' */

    /* Gain: '<S408>/Gain' */
    VeSCPR_K_NextDep_HrTest = SCPR_ac_B.sf_NextDepTime.hr;

    /* Gain: '<S409>/Gain' */
    VeSCPR_K_NextDep_MinTest = SCPR_ac_B.sf_NextDepTime.min;

    /* Switch: '<S392>/Switch3' incorporates:
     *  Constant: '<S392>/Constant'
     *  Logic: '<S392>/Logical1'
     */
    if ((!SCPR_ac_B.DataStoreRead47) && (!SCPR_ac_B.DataStoreRead43))
    {
        rtb_Sum2_h = -1;
    }

    /* End of Switch: '<S392>/Switch3' */

    /* Chart: '<S392>/NextCoCH_Time' */
    SCPR_ac_NextDepTime(rtb_Sum2_h, &SCPR_ac_B.sf_NextCoCH_Time);

    /* Outputs for Enabled SubSystem: '<S373>/CancelCancelSF' incorporates:
     *  EnablePort: '<S447>/Enable'
     */
    /* Logic: '<S373>/Logical1' incorporates:
     *  Constant: '<S451>/Calib'
     *  Constant: '<S452>/Calib'
     *  Delay: '<S447>/Integer Delay'
     *  UnitDelay: '<S373>/Unit Delay'
     */
    if (((HeSCPR_b_CancelAndButtonLogic_enbl) && (SCPR_ac_DW.UnitDelay_DSTATE_dp))
        && (KeSCPR_b_EnableCancCanc))
    {
        /* Chart: '<S447>/CancStartEnd_pos' */
        /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/CancStartEnd_pos */
        /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/CancStartEnd_pos */
        /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/CancStartEnd_pos */
        /* Transition: '<S480>:1' */
        rtb_Sum2_h = 0;

        /* Gain: '<S484>/Gain' incorporates:
         *  Chart: '<S447>/CancStartEnd_pos'
         */
        VeSCPR_k_CancStartIndx = -1;

        /* Gain: '<S485>/Gain' incorporates:
         *  Chart: '<S447>/CancStartEnd_pos'
         */
        VeSCPR_k_CancEndIndx = -1;
        do
        {
            exitg1 = 0;
            if (rtb_Sum2_h < 14)
            {
                /* Transition: '<S480>:4' */
                if (VaSCPR_K_SchGlobalStrt[(rtb_Sum2_h)] != -1)
                {
                    /* Transition: '<S480>:43' */
                    if (VaSCPR_K_SchGlobalStrt[(rtb_Sum2_h)] ==
                            VeSCPR_K_CancelStartIndx)
                    {
                        /* Transition: '<S480>:12' */
                        /* Transition: '<S480>:14' */
                        VeSCPR_k_CancStartIndx = rtb_Sum2_h;

                        /* Transition: '<S480>:15' */
                        exitg1 = 1;
                    }
                    else
                    {
                        /* Transition: '<S480>:6' */
                        /* Transition: '<S480>:7' */
                        rtb_Sum2_h++;
                    }
                }
                else
                {
                    /* Transition: '<S480>:6' */
                    /* Transition: '<S480>:7' */
                    rtb_Sum2_h++;
                }
            }
            else
            {
                /* Transition: '<S480>:10' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Chart: '<S447>/CancStartEnd_pos' */
        /* Transition: '<S480>:29' */
        rtb_Sum2_h = 0;
        do
        {
            exitg1 = 0;
            if (rtb_Sum2_h < 14)
            {
                /* Transition: '<S480>:16' */
                if (VaSCPR_K_SchGlobalEnd[(rtb_Sum2_h)] != -1)
                {
                    /* Transition: '<S480>:42' */
                    if (VaSCPR_K_SchGlobalEnd[(rtb_Sum2_h)] ==
                            VeSCPR_k_CancW_EndIndx)
                    {
                        /* Transition: '<S480>:22' */
                        /* Transition: '<S480>:26' */
                        VeSCPR_k_CancEndIndx = rtb_Sum2_h;

                        /* Transition: '<S480>:24' */
                        exitg1 = 1;
                    }
                    else
                    {
                        /* Transition: '<S480>:17' */
                        /* Transition: '<S480>:18' */
                        rtb_Sum2_h++;
                    }
                }
                else
                {
                    /* Transition: '<S480>:17' */
                    /* Transition: '<S480>:18' */
                    rtb_Sum2_h++;
                }
            }
            else
            {
                /* Transition: '<S480>:28' */
                exitg1 = 1;
            }
        }
        while (exitg1 == 0);

        /* Chart: '<S447>/Canc_StartEndProc' */
        /* Transition: '<S480>:31' */
        /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/Canc_StartEndProc */
        /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/Canc_StartEndProc */
        /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/Canc_StartEndProc */
        /* Transition: '<S482>:1' */
        rtb_Sum1_nz = 0.0F;
        rtb_days = 0.0F;
        rtb_Merge_n = true;
        rtb_AND_c2 = false;
        if ((VeSCPR_k_CancStartIndx != -1) && (VeSCPR_k_CancEndIndx != -1))
        {
            /* Transition: '<S482>:4' */
            /* Transition: '<S482>:8' */
            rtb_Sum2_h = VeSCPR_k_CancStartIndx;
            for (i = 0; i < 14; i++)
            {
                rtb_Switch_jl[i] = VaSCPR_K_SchGlobalStrt[(i)];
            }

            do
            {
                exitg1 = 0;
                if (VeSCPR_k_CancStartIndx > VeSCPR_k_CancEndIndx)
                {
                    /* Transition: '<S482>:12' */
                    /* Transition: '<S482>:29' */
                    while ((rtb_Merge_n && (rtb_Sum2_h < 14)) || (rtb_Sum2_h <=
                            VeSCPR_k_CancEndIndx))
                    {
                        /* Transition: '<S482>:26' */
                        if (rtb_Switch_jl[rtb_Sum2_h] != -1)
                        {
                            /* Transition: '<S482>:32' */
                            /* Transition: '<S482>:151' */
                            if (rtb_AND_c2)
                            {
                                /* Transition: '<S482>:156' */
                                /* Transition: '<S482>:154' */
                                rtb_days += (103.0F / ((float32)((sint32)
                                               (((sint32)
                                                 rtb_Switch_jl[rtb_Sum2_h]) + 1))))
                                    + ((float32)rtb_Switch_jl[rtb_Sum2_h]);
                            }
                            else
                            {
                                /* Transition: '<S482>:152' */
                                /* Transition: '<S482>:153' */
                                rtb_Sum1_nz += (103.0F / ((float32)((sint32)
                                                  (((sint32)
                                                    rtb_Switch_jl[rtb_Sum2_h]) +
                                                   1)))) + ((float32)
                                    rtb_Switch_jl[rtb_Sum2_h]);

                                /* Transition: '<S482>:161' */
                            }

                            /* Transition: '<S482>:160' */
                            if (rtb_Sum2_h >= 13)
                            {
                                /* Transition: '<S482>:44' */
                                /* Transition: '<S482>:45' */
                                rtb_Merge_n = false;
                                rtb_Sum2_h = -1;
                            }
                            else
                            {
                                /* Transition: '<S482>:40' */
                            }
                        }
                        else
                        {
                            /* Transition: '<S482>:36' */
                        }

                        /* Transition: '<S482>:37' */
                        rtb_Sum2_h++;
                    }

                    /* Transition: '<S482>:39' */
                    /* Transition: '<S482>:47' */
                }
                else
                {
                    /* Transition: '<S482>:10' */
                    /* Transition: '<S482>:14' */
                    while (rtb_Sum2_h <= VeSCPR_k_CancEndIndx)
                    {
                        /* Transition: '<S482>:16' */
                        if (rtb_Switch_jl[rtb_Sum2_h] != -1)
                        {
                            /* Transition: '<S482>:119' */
                            /* Transition: '<S482>:25' */
                            if (rtb_AND_c2)
                            {
                                /* Transition: '<S482>:136' */
                                /* Transition: '<S482>:138' */
                                rtb_days += (103.0F / ((float32)((sint32)
                                               (((sint32)
                                                 rtb_Switch_jl[rtb_Sum2_h]) + 1))))
                                    + ((float32)rtb_Switch_jl[rtb_Sum2_h]);

                                /* Transition: '<S482>:142' */
                            }
                            else
                            {
                                /* Transition: '<S482>:27' */
                                /* Transition: '<S482>:141' */
                                rtb_Sum1_nz += (103.0F / ((float32)((sint32)
                                                  (((sint32)
                                                    rtb_Switch_jl[rtb_Sum2_h]) +
                                                   1)))) + ((float32)
                                    rtb_Switch_jl[rtb_Sum2_h]);
                            }

                            /* Transition: '<S482>:147' */
                        }
                        else
                        {
                            /* Transition: '<S482>:123' */
                        }

                        /* Transition: '<S482>:19' */
                        rtb_Sum2_h++;
                    }

                    /* Transition: '<S482>:21' */
                    /* Transition: '<S482>:48' */
                }

                if (!rtb_AND_c2)
                {
                    /* Transition: '<S482>:105' */
                    for (i = 0; i < 14; i++)
                    {
                        rtb_Switch_jl[i] = VaSCPR_K_SchGlobalEnd[(i)];
                    }

                    rtb_Sum2_h = VeSCPR_k_CancStartIndx;
                    rtb_AND_c2 = true;
                    rtb_Merge_n = true;
                }
                else
                {
                    exitg1 = 1;
                }
            }
            while (exitg1 == 0);

            /* Transition: '<S482>:50' */
            /* Transition: '<S482>:169' */
        }
        else
        {
            /* Transition: '<S482>:6' */
            /* Transition: '<S482>:165' */
        }

        /* End of Chart: '<S447>/Canc_StartEndProc' */

        /* Chart: '<S447>/Canc_OverlapProc' */
        /* Transition: '<S482>:171' */
        /* Gateway: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/Canc_OverlapProc */
        /* During: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/Canc_OverlapProc */
        /* Entry Internal: SCPR_FUNC_MedTEH/SCPC/Next_Sch_Det/NextTime_Dtrm/CancelCancelSF/Canc_OverlapProc */
        /* Transition: '<S481>:141' */
        rtb_xOvlp = 0;
        if ((VeSCPR_k_CancStartIndx != -1) && (VeSCPR_k_CancEndIndx != -1))
        {
            /* Transition: '<S481>:139' */
            /* Transition: '<S481>:147' */
            if ((((sint16)(VeSCPR_k_CancStartIndx - 1)) >= 0) && (((sint16)
                    (VeSCPR_k_CancEndIndx + 1)) <= 13))
            {
                /* Transition: '<S481>:149' */
                /* Transition: '<S481>:182' */
                /* Transition: '<S481>:184' */
                /* Transition: '<S481>:192' */
                /* Transition: '<S481>:193' */
                /* Transition: '<S481>:194' */
                /* Transition: '<S481>:199' */
                rtb_xOvlp = (sint32)SCPR_ac_Sum((&(VaSCPR_b_SchOverlapDet[0])),
                    (sint16)(VeSCPR_k_CancStartIndx - 1), (sint16)
                    (VeSCPR_k_CancEndIndx + 1));

                /* Transition: '<S481>:201' */
                /* Transition: '<S481>:202' */
            }
            else
            {
                /* Transition: '<S481>:153' */
                if ((((sint16)(VeSCPR_k_CancStartIndx - 1)) == -1) && (((sint16)
                        (VeSCPR_k_CancEndIndx + 1)) <= 13))
                {
                    /* Transition: '<S481>:154' */
                    /* Transition: '<S481>:178' */
                    /* Transition: '<S481>:186' */
                    /* Transition: '<S481>:193' */
                    /* Transition: '<S481>:194' */
                    /* Transition: '<S481>:199' */
                    rtb_xOvlp = (sint32)SCPR_ac_Sum((&(VaSCPR_b_SchOverlapDet[0])),
                        13, (sint16)(VeSCPR_k_CancEndIndx + 1));

                    /* Transition: '<S481>:201' */
                    /* Transition: '<S481>:202' */
                }
                else
                {
                    /* Transition: '<S481>:172' */
                    if ((((sint16)(VeSCPR_k_CancStartIndx - 1)) >= 0) &&
                            (((sint16)(VeSCPR_k_CancEndIndx + 1)) == 14))
                    {
                        /* Transition: '<S481>:173' */
                        /* Transition: '<S481>:174' */
                        /* Transition: '<S481>:188' */
                        /* Transition: '<S481>:194' */
                        /* Transition: '<S481>:199' */
                        rtb_xOvlp = (sint32)SCPR_ac_Sum
                            ((&(VaSCPR_b_SchOverlapDet[0])), (sint16)
                             (VeSCPR_k_CancStartIndx - 1), 0);

                        /* Transition: '<S481>:201' */
                        /* Transition: '<S481>:202' */
                    }
                    else
                    {
                        /* Transition: '<S481>:169' */
                        if ((((sint16)(VeSCPR_k_CancStartIndx - 1)) == -1) &&
                                (((sint16)(VeSCPR_k_CancEndIndx + 1)) == 14))
                        {
                            /* Transition: '<S481>:163' */
                            /* Transition: '<S481>:160' */
                            /* Transition: '<S481>:190' */
                            /* Transition: '<S481>:199' */
                            rtb_xOvlp = (sint32)SCPR_ac_Sum
                                ((&(VaSCPR_b_SchOverlapDet[0])), 0, 13);

                            /* Transition: '<S481>:201' */
                            /* Transition: '<S481>:202' */
                        }
                        else
                        {
                            /* Transition: '<S481>:166' */
                        }
                    }
                }
            }

            /* Transition: '<S481>:197' */
        }
        else
        {
            /* Transition: '<S481>:143' */
            /* Transition: '<S481>:196' */
        }

        /* End of Chart: '<S447>/Canc_OverlapProc' */

        /* Switch: '<S483>/Switch' incorporates:
         *  Delay: '<S483>/Integer Delay'
         */
        /* Transition: '<S481>:204' */
        if (SCPR_ac_DW.IntegerDelay_DSTATE_cd[0U])
        {
            /* Switch: '<S483>/Switch' */
            rtb_Switch_nv[0] = rtb_Sum1_nz;
            rtb_Switch_nv[1] = rtb_days;
            rtb_Switch_nv[2] = (float32)rtb_xOvlp;
        }
        else
        {
            /* Switch: '<S483>/Switch' incorporates:
             *  DataStoreRead: '<S483>/Data Store Read'
             *  DataStoreRead: '<S483>/Data Store Read1'
             *  DataStoreRead: '<S483>/Data Store Read2'
             */
            rtb_Switch_nv[0] = SCPR_ac_DW.NeSCPR_k_CancGlStartTrack;
            rtb_Switch_nv[1] = SCPR_ac_DW.NeSCPR_k_CancGlEndTrack;
            rtb_Switch_nv[2] = SCPR_ac_DW.NeSCPR_k_CancOverlapTrack;
        }

        /* End of Switch: '<S483>/Switch' */

        /* DataStoreWrite: '<S483>/Data Store Write' */
        SCPR_ac_DW.NeSCPR_k_CancGlStartTrack = rtb_Switch_nv[0];

        /* DataStoreWrite: '<S483>/Data Store Write1' */
        SCPR_ac_DW.NeSCPR_k_CancOverlapTrack = rtb_Switch_nv[2];

        /* DataStoreWrite: '<S483>/Data Store Write2' */
        SCPR_ac_DW.NeSCPR_k_CancGlEndTrack = rtb_Switch_nv[1];

        /* Outputs for Atomic SubSystem: '<S483>/EdgeRising2' */
        /* Logic: '<S488>/OR1' incorporates:
         *  UnitDelay: '<S488>/Unit Delay'
         */
        rtb_AND_c2 = !SCPR_ac_DW.UnitDelay_DSTATE_hl;

        /* Update for UnitDelay: '<S488>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_hl = VeSCPR_b_CancelActive;

        /* End of Outputs for SubSystem: '<S483>/EdgeRising2' */

        /* Outputs for Enabled SubSystem: '<S447>/CancCancelCheck' incorporates:
         *  EnablePort: '<S479>/Enable'
         */
        if (SCPR_ac_DW.IntegerDelay_DSTATE_l[0U])
        {
            for (i = 0; i < 3; i++)
            {
                /* Sum: '<S487>/Sum3' incorporates:
                 *  Constant: '<S486>/Calib'
                 *  Sum: '<S487>/Sum1'
                 */
                rtb_Sum3_g[i] = rtb_Switch_nv[i] + KeSCPR_k_CancelTollerance;
            }

            /* RelationalOperator: '<S487>/Relatonal Operator2' */
            rtb_AND_fl = (rtb_Sum1_nz > rtb_Sum3_g[0]);
            rtb_Logical1_f = (rtb_days > rtb_Sum3_g[1]);
            rtb_RelatonalOperator2_idx_2 = (((float32)rtb_xOvlp) > rtb_Sum3_g[2]);
            for (i = 0; i < 3; i++)
            {
                /* Sum: '<S487>/Sum3' incorporates:
                 *  Constant: '<S486>/Calib'
                 */
                rtb_Sum3_g[i] = rtb_Switch_nv[i] - KeSCPR_k_CancelTollerance;
            }

            /* Logic: '<S479>/Logical' incorporates:
             *  Logic: '<S479>/Logical2'
             *  Logic: '<S487>/Logical Operator'
             *  Logic: '<S487>/Logical2'
             *  RelationalOperator: '<S487>/Relatonal Operator3'
             */
            SCPR_ac_B.Logical = (((rtb_AND_fl || (rtb_Sum1_nz < rtb_Sum3_g[0])) ||
                                  (rtb_Logical1_f || (rtb_days < rtb_Sum3_g[1])))
                                 || (rtb_RelatonalOperator2_idx_2 || (((float32)
                                    rtb_xOvlp) < rtb_Sum3_g[2])));
        }

        /* End of Outputs for SubSystem: '<S447>/CancCancelCheck' */

        /* Switch: '<S447>/Switch' incorporates:
         *  Delay: '<S447>/Integer Delay'
         */
        VeSCPR_b_CancelTheCancel = ((SCPR_ac_DW.IntegerDelay_DSTATE_l[0]) &&
            (SCPR_ac_B.Logical));

        /* Update for Delay: '<S483>/Integer Delay' incorporates:
         *  Logic: '<S488>/AND'
         */
        for (i = 0; i < 3; i++)
        {
            SCPR_ac_DW.IntegerDelay_DSTATE_cd[i] =
                SCPR_ac_DW.IntegerDelay_DSTATE_cd[i + 1];
        }

        /* Outputs for Atomic SubSystem: '<S483>/EdgeRising2' */
        SCPR_ac_DW.IntegerDelay_DSTATE_cd[3] = ((VeSCPR_b_CancelActive) &&
            rtb_AND_c2);

        /* End of Update for Delay: '<S483>/Integer Delay' */
        /* End of Outputs for SubSystem: '<S483>/EdgeRising2' */

        /* Update for Delay: '<S447>/Integer Delay' */
        for (i = 0; i < 2; i++)
        {
            SCPR_ac_DW.IntegerDelay_DSTATE_l[i] =
                SCPR_ac_DW.IntegerDelay_DSTATE_l[i + 1];
        }

        SCPR_ac_DW.IntegerDelay_DSTATE_l[2] = rtb_Switch4_m;

        /* End of Update for Delay: '<S447>/Integer Delay' */
    }

    /* End of Logic: '<S373>/Logical1' */
    /* End of Outputs for SubSystem: '<S373>/CancelCancelSF' */

    /* Update for UnitDelay: '<S126>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_hb = VeSCPR_b_ChrgNowTest2;

    /* Update for Atomic SubSystem: '<S124>/EdgeRising1' */
    /* Update for UnitDelay: '<S197>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_p1 = VeSCPR_b_ChrgPortButton_Sts;

    /* End of Update for SubSystem: '<S124>/EdgeRising1' */

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_kp = VeSCPR_b_ForcedChrgReq;

    /* Update for UnitDelay: '<S214>/Unit Delay3' */
    SCPR_ac_DW.UnitDelay3_DSTATE_h = rtb_Logical6_ko;

    /* Update for UnitDelay: '<S499>/Unit Delay3' */
    SCPR_ac_DW.UnitDelay3_DSTATE = VeSCPR_K_Sch1CH_DNRend_sec;

    /* Update for UnitDelay: '<S758>/Unit Delay2' incorporates:
     *  RelationalOperator: '<S758>/Comparison7'
     *  UnitDelay: '<S758>/Unit Delay'
     */
    SCPR_ac_DW.UnitDelay2_DSTATE_a = (VeSCPR_K_SysTimeMin !=
        SCPR_ac_DW.UnitDelay_DSTATE);

    /* Update for UnitDelay: '<S499>/Unit Delay5' */
    SCPR_ac_DW.UnitDelay5_DSTATE_i = SCPR_ac_B.VeSCPR_t_HVBatRTC;

    /* Update for UnitDelay: '<S499>/Unit Delay6' */
    SCPR_ac_DW.UnitDelay6_DSTATE_n = rtb_Sum;

    /* Update for UnitDelay: '<S499>/Unit Delay4' */
    SCPR_ac_DW.UnitDelay4_DSTATE = VeSCPR_K_Sch2CH_DNRend_sec;

    /* Update for UnitDelay: '<S499>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_h = rtb_FloatToFix;

    /* Update for Atomic SubSystem: '<S318>/Signal Latch On With Reset3' */
    /* Update for UnitDelay: '<S334>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_g = rtb_UnitDelay1_iqj;

    /* Update for Delay: '<S334>/Integer Delay' incorporates:
     *  Logic: '<S338>/AND'
     */
    SCPR_ac_DW.IntegerDelay_DSTATE_a[0] = SCPR_ac_DW.IntegerDelay_DSTATE_a[1];

    /* Outputs for Atomic SubSystem: '<S318>/Turn On Delay Sample1' */
    SCPR_ac_DW.IntegerDelay_DSTATE_a[1] = (rtb_AND_ck && rtb_Comparison4_du);

    /* End of Outputs for SubSystem: '<S318>/Turn On Delay Sample1' */
    /* End of Update for SubSystem: '<S318>/Signal Latch On With Reset3' */

    /* Update for UnitDelay: '<S316>/Unit Delay4' incorporates:
     *  Logic: '<S316>/Logical7'
     */
    SCPR_ac_DW.UnitDelay4_DSTATE_j = !VeSCPR_b_CondToDisplayUF;

    /* Update for UnitDelay: '<S297>/Unit Delay4' */
    SCPR_ac_DW.UnitDelay4_DSTATE_n = VeSCPR_b_ResetUFwindow;

    /* Update for UnitDelay: '<S757>/Unit Delay2' */
    SCPR_ac_DW.UnitDelay2_DSTATE = rtb_Sum2;

    /* Update for UnitDelay: '<S214>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_k = VeSCPR_b_DisplayUF;

    /* Update for UnitDelay: '<S214>/Unit Delay4' */
    SCPR_ac_DW.UnitDelay4_DSTATE_e = rtb_Logical11_i;

    /* Update for UnitDelay: '<S542>/Unit Delay1' incorporates:
     *  Switch: '<S587>/Switch1'
     */
    SCPR_ac_DW.UnitDelay1_DSTATE_ff = Switch1_k;

    /* Update for Atomic SubSystem: '<S293>/Turn On Delay Sample' */
    /* Update for Atomic SubSystem: '<S310>/EdgeRising' */
    /* Update for UnitDelay: '<S311>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_bg = VeSCPR_b_PluggedIn;

    /* End of Update for SubSystem: '<S310>/EdgeRising' */

    /* Update for UnitDelay: '<S310>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gl = rtb_Switch1_al;

    /* End of Update for SubSystem: '<S293>/Turn On Delay Sample' */

    /* Update for Enabled SubSystem: '<S114>/CancelLogic' incorporates:
     *  EnablePort: '<S211>/Enable'
     */
    /* Update for Enabled SubSystem: '<S122>/BEV_Button' incorporates:
     *  EnablePort: '<S125>/Enable'
     */
    /* Constant: '<S128>/Calib' */
    if (HeSCPR_b_CancelAndButtonLogic_enbl)
    {
        /* Update for UnitDelay: '<S125>/Unit Delay3' */
        SCPR_ac_DW.UnitDelay3_DSTATE_l = VeSCPR_b_InChrgWindow;

        /* Update for UnitDelay: '<S125>/Unit Delay4' */
        SCPR_ac_DW.UnitDelay4_DSTATE_i = rtb_ChrgDontChrg;

        /* Update for UnitDelay: '<S125>/Unit Delay1' */
        SCPR_ac_DW.UnitDelay1_DSTATE_ni = rtb_OR1_ii;

        /* Update for Atomic SubSystem: '<S125>/EdgeFalling' */
        /* Update for UnitDelay: '<S131>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_ptt = VeSCPR_b_PluggedIn;

        /* End of Update for SubSystem: '<S125>/EdgeFalling' */

        /* Update for Atomic SubSystem: '<S150>/EdgeFalling1' */
        /* Update for UnitDelay: '<S151>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_no = VeSCPR_b_PluggedIn;

        /* End of Update for SubSystem: '<S150>/EdgeFalling1' */

        /* Update for UnitDelay: '<S150>/Unit Delay3' incorporates:
         *  Switch: '<S809>/Switch8'
         */
        SCPR_ac_DW.UnitDelay3_DSTATE_c = SCPR_ac_B.Switch8_m;

        /* Update for UnitDelay: '<S216>/Unit Delay2' */
        SCPR_ac_DW.UnitDelay2_DSTATE_l = VeSCPR_b_CancelTrigger;

        /* Update for UnitDelay: '<S220>/Unit Delay2' */
        SCPR_ac_DW.UnitDelay2_DSTATE_h = VeSCPR_K_NextSch_ChrgStart;

        /* Update for UnitDelay: '<S217>/Unit Delay5' */
        SCPR_ac_DW.UnitDelay5_DSTATE_m = VeSCPR_K_CancEndIndxProc;

        /* Update for UnitDelay: '<S217>/Unit Delay3' */
        SCPR_ac_DW.UnitDelay3_DSTATE_m = rtb_OR1_ep;

        /* Update for UnitDelay: '<S211>/Unit Delay7' */
        SCPR_ac_DW.UnitDelay7_DSTATE = VeSCPR_b_DisplayUF;

        /* Update for Atomic SubSystem: '<S219>/EdgeFalling3' */
        /* Update for UnitDelay: '<S240>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_pt = VeSCPR_b_PluggedIn;

        /* End of Update for SubSystem: '<S219>/EdgeFalling3' */

        /* Update for UnitDelay: '<S219>/Unit Delay1' */
        SCPR_ac_DW.UnitDelay1_DSTATE_nz = VeSCPR_b_CancelTheCancel;

        /* Update for Delay: '<S217>/Integer Delay' */
        SCPR_ac_DW.IntegerDelay_DSTATE_i[0] = SCPR_ac_DW.IntegerDelay_DSTATE_i[1];
        SCPR_ac_DW.IntegerDelay_DSTATE_i[1] = VeSCPR_b_CancelTrigger;

        /* Update for UnitDelay: '<S217>/Unit Delay4' */
        SCPR_ac_DW.UnitDelay4_DSTATE_o = VeSCPR_b_CancelWindAllowed;

        /* Update for UnitDelay: '<S218>/Unit Delay1' */
        SCPR_ac_DW.UnitDelay1_DSTATE_e = VeSCPR_K_NowIndxMinUpdated;
    }

    /* End of Update for SubSystem: '<S122>/BEV_Button' */
    /* End of Update for SubSystem: '<S114>/CancelLogic' */

    /* Update for UnitDelay: '<S171>/Unit Delay' incorporates:
     *  Switch: '<S171>/Switch2'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_hc = rtb_Switch2_ac;

    /* Update for UnitDelay: '<S214>/Unit Delay2' */
    SCPR_ac_DW.UnitDelay2_DSTATE_ip = rtb_AND_dp;

    /* Update for UnitDelay: '<S370>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_a = rtb_AND_ec;

    /* Update for UnitDelay: '<S370>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_d3 = VeSCPR_b_xMinUFCancelTest;

    /* Update for UnitDelay: '<S381>/Unit Delay2' */
    SCPR_ac_DW.UnitDelay2_DSTATE_k = rtb_Sum7;

    /* Update for Atomic SubSystem: '<S381>/Signal Latch On With Reset3' */
    /* Update for UnitDelay: '<S385>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_d = rtb_Switch_mc;

    /* Update for Delay: '<S385>/Integer Delay' */
    SCPR_ac_DW.IntegerDelay_DSTATE_ce[0] = SCPR_ac_DW.IntegerDelay_DSTATE_ce[1];
    SCPR_ac_DW.IntegerDelay_DSTATE_ce[1] = tmp_2;

    /* End of Update for SubSystem: '<S381>/Signal Latch On With Reset3' */

    /* Update for UnitDelay: '<S370>/Unit Delay2' */
    SCPR_ac_DW.UnitDelay2_DSTATE_n = VeSCPR_k_CancW_EndIndx;

    /* Update for Atomic SubSystem: '<S215>/Turn On Delay Sample' */
    /* Update for Atomic SubSystem: '<S317>/EdgeRising' */
    /* Update for UnitDelay: '<S322>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_oq = VeSCPR_b_PluggedIn;

    /* End of Update for SubSystem: '<S317>/EdgeRising' */

    /* Update for UnitDelay: '<S317>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_hg = rtb_Switch1_hi;

    /* End of Update for SubSystem: '<S215>/Turn On Delay Sample' */

    /* Update for UnitDelay: '<S316>/Unit Delay2' incorporates:
     *  Logic: '<S316>/Logical26'
     */
    SCPR_ac_DW.UnitDelay2_DSTATE_ha = !VeSCPR_b_DisplayUF;

    /* Update for Atomic SubSystem: '<S340>/EdgeFalling6' */
    /* Update for UnitDelay: '<S349>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gin = SCPR_ac_B.DataStoreRead5_d;

    /* End of Update for SubSystem: '<S340>/EdgeFalling6' */

    /* Update for Atomic SubSystem: '<S340>/EdgeFalling5' */
    /* Update for UnitDelay: '<S348>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_dz = SCPR_ac_B.DataStoreRead12_g;

    /* End of Update for SubSystem: '<S340>/EdgeFalling5' */

    /* Update for UnitDelay: '<S323>/Unit Delay6' */
    SCPR_ac_DW.UnitDelay6_DSTATE_k = rtb_UnitDelay1_iqj;

    /* Update for UnitDelay: '<S323>/Unit Delay5' */
    SCPR_ac_DW.UnitDelay5_DSTATE_f = rtb_AND_liv;

    /* Update for UnitDelay: '<S323>/Unit Delay3' */
    SCPR_ac_DW.UnitDelay3_DSTATE_b = rtb_Logical1_d0;

    /* Update for Delay: '<S561>/Delay' */
    SCPR_ac_DW.Delay_DSTATE[0] = SCPR_ac_DW.Delay_DSTATE[1];
    SCPR_ac_DW.Delay_DSTATE[1] = VeSCPR_b_CancelActive;

    /* Update for Atomic SubSystem: '<S580>/Signal Latch On With Reset1' */
    /* Update for UnitDelay: '<S590>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_c = rtb_Sum1_a;

    /* Update for Delay: '<S590>/Integer Delay' incorporates:
     *  UnitDelay: '<S580>/Unit Delay1'
     */
    SCPR_ac_DW.IntegerDelay_DSTATE_c[0] = SCPR_ac_DW.IntegerDelay_DSTATE_c[1];
    SCPR_ac_DW.IntegerDelay_DSTATE_c[1] = SCPR_ac_DW.UnitDelay1_DSTATE_b;

    /* End of Update for SubSystem: '<S580>/Signal Latch On With Reset1' */

    /* Update for Atomic SubSystem: '<S580>/Signal Latch On With Reset2' */
    /* Update for UnitDelay: '<S591>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_o = rtb_Switch1_no;

    /* Update for Delay: '<S591>/Integer Delay' incorporates:
     *  UnitDelay: '<S580>/Unit Delay2'
     */
    SCPR_ac_DW.IntegerDelay_DSTATE_e[0] = SCPR_ac_DW.IntegerDelay_DSTATE_e[1];
    SCPR_ac_DW.IntegerDelay_DSTATE_e[1] = SCPR_ac_DW.UnitDelay2_DSTATE_c;

    /* End of Update for SubSystem: '<S580>/Signal Latch On With Reset2' */

    /* Update for UnitDelay: '<S580>/Unit Delay1' incorporates:
     *  Logic: '<S580>/Logical4'
     */
    SCPR_ac_DW.UnitDelay1_DSTATE_b = !rtb_VeSCPR_b_CoCH_ImmSOC_ChReq;

    /* Update for UnitDelay: '<S580>/Unit Delay2' incorporates:
     *  Logic: '<S580>/Logical5'
     */
    SCPR_ac_DW.UnitDelay2_DSTATE_c = !rtb_Comparison4_ah;

    /* Update for UnitDelay: '<S604>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_nf = VeSCPR_b_ChargeReqSgnlRcvdArb;

    /* Update for UnitDelay: '<S755>/Unit Delay6' */
    SCPR_ac_DW.UnitDelay6_DSTATE = VeSCPR_k_SpareSecCnt;

    /* Update for UnitDelay: '<S755>/Unit Delay5' incorporates:
     *  DataTypeConversion: '<S755>/FixToFloat'
     */
    SCPR_ac_DW.UnitDelay5_DSTATE = (float32)SCPR_ac_B.VeSCPR_t_HVBatRTC;

    /* Update for UnitDelay: '<S758>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE = VeSCPR_K_SysTimeMin;

    /* Update for Enabled SubSystem: '<S5>/Est_SOC' incorporates:
     *  EnablePort: '<S115>/Enable'
     */
    /* Constant: '<S116>/Calib' */
    if (HeSCPR_b_SOCestimation_enbl)
    {
        /* Update for UnitDelay: '<S353>/Unit Delay' */
        SCPR_ac_DW.UnitDelay_DSTATE_g = VeSCPR_K_Index_Delta;

        /* Update for Atomic SubSystem: '<S353>/Lowpass Second Order Enabled1' */
        /* Update for UnitDelay: '<S365>/x2' */
        SCPR_ac_DW.x2_DSTATE = rtb_Multiplication1;

        /* Update for UnitDelay: '<S365>/temp' */
        SCPR_ac_DW.temp_DSTATE = rtb_Switch3_kq;

        /* End of Update for SubSystem: '<S353>/Lowpass Second Order Enabled1' */
    }

    /* End of Update for SubSystem: '<S5>/Est_SOC' */

    /* Update for UnitDelay: '<S372>/Unit Delay2' */
    SCPR_ac_DW.UnitDelay2_DSTATE_b = VeSCPR_b_DisplayUF;

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_d = rtb_NextStart;

    /* Update for UnitDelay: '<S397>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_n = rtb_Switch_bd;

    /* Update for UnitDelay: '<S397>/Unit Delay3' */
    SCPR_ac_DW.UnitDelay3_DSTATE_o = rtb_Switch1_h25;

    /* Update for Delay: '<S393>/Integer Delay' */
    for (i = 0; i < 2; i++)
    {
        SCPR_ac_DW.IntegerDelay_DSTATE[i] = SCPR_ac_DW.IntegerDelay_DSTATE[i + 1];
    }

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<Root>/VeCITR_e_FOTA_Install_Type' */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Type_Value(&rtb_Switch3_n3);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPC'
     */
    /* Update for Delay: '<S393>/Integer Delay' */
    SCPR_ac_DW.IntegerDelay_DSTATE[2] = rtb_Merge4;

    /* Update for UnitDelay: '<S393>/Unit Delay1' */
    for (i = 0; i < 3; i++)
    {
        SCPR_ac_DW.UnitDelay1_DSTATE_co[i] = rtb_Switch2_kb[i];
    }

    /* End of Update for UnitDelay: '<S393>/Unit Delay1' */

    /* Update for UnitDelay: '<S373>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_dp = VeSCPR_b_CancelActive;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Switch: '<S809>/Switch3' incorporates:
     *  Constant: '<S887>/Calib'
     */
    if (KeSCPR_b_FOTAInstallTypeOvrd)
    {
        /* Switch: '<S809>/Switch3' incorporates:
         *  Constant: '<S916>/Calib'
         */
        rtb_Switch3_n3 = KeSCPR_e_FOTAInstallTypeOvrdVal;
    }

    /* End of Switch: '<S809>/Switch3' */

    /* Switch: '<S809>/Switch65' incorporates:
     *  DataStoreRead: '<S793>/Data Store Read2'
     *  RelationalOperator: '<S793>/Comparison5'
     *  Switch: '<S809>/Switch3'
     */
    rtb_OR1_ep = (rtb_Switch3_n3 != FeSCPR_e_FOTA_Install_Type);

    /* Logic: '<S793>/Logical5' incorporates:
     *  Constant: '<S803>/Constant'
     *  RelationalOperator: '<S793>/Comparison5'
     *  RelationalOperator: '<S793>/Comparison6'
     *  Switch: '<S809>/Switch3'
     */
    rtb_ChrgDontChrg = ((CeCITR_e_NoFOTA == ((uint32)rtb_Switch3_n3)) &&
                        rtb_OR1_ep);

    /* Outputs for Atomic SubSystem: '<S793>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S805>/EdgeRising' */
    /* Logic: '<S806>/AND' incorporates:
     *  Logic: '<S806>/OR1'
     *  UnitDelay: '<S806>/Unit Delay'
     */
    rtb_AND_ec = (rtb_ChrgDontChrg && (!SCPR_ac_DW.UnitDelay_DSTATE_aa));

    /* Update for UnitDelay: '<S806>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_aa = rtb_ChrgDontChrg;

    /* End of Outputs for SubSystem: '<S805>/EdgeRising' */

    /* Switch: '<S805>/Switch1' incorporates:
     *  Constant: '<S805>/Constant Value'
     *  Logic: '<S805>/OR'
     *  Logic: '<S805>/OR1'
     *  MinMax: '<S805>/Minimum'
     *  Sum: '<S805>/Summation'
     *  UnitDelay: '<S805>/Unit Delay'
     */
    if ((!rtb_ChrgDontChrg) || rtb_AND_ec)
    {
        /* Switch: '<S805>/Switch1' incorporates:
         *  Constant: '<S805>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (150 < ((sint32)((uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_h) +
                1U))))
    {
        /* MinMax: '<S805>/Minimum' incorporates:
         *  Switch: '<S805>/Switch1'
         */
        rtb_Switch1_al = 150U;
    }
    else
    {
        /* Switch: '<S805>/Switch1' incorporates:
         *  Constant: '<S805>/Constant Value'
         *  MinMax: '<S805>/Minimum'
         *  Sum: '<S805>/Summation'
         *  UnitDelay: '<S805>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_h) + 1U);
    }

    /* End of Switch: '<S805>/Switch1' */
    /* End of Outputs for SubSystem: '<S793>/Turn On Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<Root>/VeHPMR_e_HybSysSt' */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value(&tmpRead_2i);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Outputs for Atomic SubSystem: '<S793>/Turn On Delay Sample' */
    /* Update for UnitDelay: '<S805>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_h = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S793>/Turn On Delay Sample' */

    /* Switch: '<S809>/Switch5' incorporates:
     *  Constant: '<S894>/Calib'
     *  Constant: '<S917>/Calib'
     */
    if (KeSCPR_b_HybSysStOvrd)
    {
        tmpRead_2i = KeSCPR_e_HybSysStOvrdVal;
    }

    /* End of Switch: '<S809>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S793>/Turn On Delay Sample' */
    /* Logic: '<S793>/Logical3' incorporates:
     *  Constant: '<S793>/Constant'
     *  Constant: '<S802>/Constant'
     *  Constant: '<S804>/Constant'
     *  Logic: '<S793>/Logical4'
     *  Logic: '<S805>/AND'
     *  RelationalOperator: '<S793>/Comparison3'
     *  RelationalOperator: '<S793>/Comparison5'
     *  RelationalOperator: '<S793>/Comparison8'
     *  RelationalOperator: '<S805>/Greater  Than'
     *  Switch: '<S809>/Switch3'
     */
    rtb_OR1_ep = (((rtb_ChrgDontChrg && (((sint32)rtb_Switch1_al) >= 150)) ||
                   (rtb_OR1_ep && (((uint32)rtb_Switch3_n3) != CeCITR_e_NoFOTA)))
                  || (((uint32)tmpRead_2i) == CeHPMR_e_CMND_BUS_DISCHARGE));

    /* End of Outputs for SubSystem: '<S793>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S793>/EdgeRising3' */
    /* Logic: '<S801>/OR1' incorporates:
     *  UnitDelay: '<S801>/Unit Delay'
     */
    rtb_ChrgDontChrg = !SCPR_ac_DW.UnitDelay_DSTATE_n4;

    /* Update for UnitDelay: '<S801>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_n4 = rtb_OR1_ep;

    /* Switch: '<S793>/Switch1' incorporates:
     *  Logic: '<S801>/AND'
     */
    if (rtb_OR1_ep && rtb_ChrgDontChrg)
    {
        /* Switch: '<S793>/Switch1' incorporates:
         *  Switch: '<S809>/Switch3'
         */
        VeSCPR_e_FOTA_Install_Type = rtb_Switch3_n3;
    }
    else
    {
        /* Switch: '<S793>/Switch1' incorporates:
         *  DataStoreRead: '<S793>/Data Store Read1'
         */
        VeSCPR_e_FOTA_Install_Type = FeSCPR_e_FOTA_Install_Type;
    }

    /* End of Switch: '<S793>/Switch1' */
    /* End of Outputs for SubSystem: '<S793>/EdgeRising3' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<S6>/TBM_Sch2_Submit' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBM_Sch2_Submit'
     */
    (void)Rte_Read_VeCITR_b_TBM_Sch2_Submit_Value(&SCPR_ac_B.TBM_Sch2_Submit);

    /* Inport: '<S6>/TBM_Sch1_Submit' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBM_Sch1_Submit'
     */
    (void)Rte_Read_VeCITR_b_TBM_Sch1_Submit_Value(&SCPR_ac_B.TBM_Sch1_Submit);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_Enbl' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_Enbl_Value(&rtb_AND_do);

    /* Inport: '<Root>/VeCITR_K_HU_Sch2_Day' */
    (void)Rte_Read_VeCITR_K_HU_Sch2_Day_Value(&tmpRead_l);

    /* Inport: '<Root>/VeCITR_K_HU_Sch2_End_Time_Min' */
    (void)Rte_Read_VeCITR_K_HU_Sch2_End_Time_Min_Value(&rtb_Merge4_m);

    /* Inport: '<Root>/VeCITR_K_HU_Sch2_End_Time_Hr' */
    (void)Rte_Read_VeCITR_K_HU_Sch2_End_Time_Hr_Value(&rtb_Merge5);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_Submit' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_Submit_Value(&rtb_Logical3_li);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_Enbl' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_Enbl_Value(&rtb_OR1_pka);

    /* Inport: '<Root>/VeCITR_K_HU_Sch1_Day' */
    (void)Rte_Read_VeCITR_K_HU_Sch1_Day_Value(&tmpRead_k);

    /* Inport: '<Root>/VeCITR_K_HU_Sch1_End_Time_Min' */
    (void)Rte_Read_VeCITR_K_HU_Sch1_End_Time_Min_Value(&rtb_Merge6);

    /* Inport: '<Root>/VeCITR_K_HU_Sch1_End_Time_Hr' */
    (void)Rte_Read_VeCITR_K_HU_Sch1_End_Time_Hr_Value(&rtb_Merge7);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_Submit' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_Submit_Value(&tmpRead_j);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* DataStoreWrite: '<S793>/Data Store Write' incorporates:
     *  Switch: '<S793>/Switch1'
     */
    FeSCPR_e_FOTA_Install_Type = VeSCPR_e_FOTA_Install_Type;

    /* DataStoreRead: '<S799>/Data Store Read17' */
    SCPR_ac_B.DataStoreRead17_c = FeSCPR_b_Sch1CP_Enbl;

    /* DataStoreRead: '<S799>/Data Store Read16' */
    SCPR_ac_B.DataStoreRead16_d = FeSCPR_y_Sch1CP_Day;

    /* Logic: '<S791>/Logical1' incorporates:
     *  Constant: '<S791>/Constant Value'
     *  DataStoreWrite: '<S791>/Data Store Write'
     *  RelationalOperator: '<S791>/Comparison'
     */
    FeSCPR_b_Sch1CP_DNR = ((SCPR_ac_B.DataStoreRead17_c) && (((sint32)
        SCPR_ac_B.DataStoreRead16_d) == 0));

    /* DataStoreRead: '<S799>/Data Store Read23' */
    SCPR_ac_B.DataStoreRead23_i = FeSCPR_b_Sch2CP_Enbl;

    /* DataStoreRead: '<S799>/Data Store Read22' */
    SCPR_ac_B.DataStoreRead22_o = FeSCPR_y_Sch2CP_Day;

    /* Logic: '<S791>/Logical2' incorporates:
     *  Constant: '<S791>/Constant Value4'
     *  DataStoreWrite: '<S791>/Data Store Write1'
     *  RelationalOperator: '<S791>/Comparison1'
     */
    FeSCPR_b_Sch2CP_DNR = ((SCPR_ac_B.DataStoreRead23_i) && (((sint32)
        SCPR_ac_B.DataStoreRead22_o) == 0));

    /* DataStoreRead: '<S799>/Data Store Read5' */
    SCPR_ac_B.DataStoreRead5_d = FeSCPR_b_Sch1CH_Enbl;

    /* DataStoreRead: '<S799>/Data Store Read4' */
    SCPR_ac_B.DataStoreRead4_h = FeSCPR_y_Sch1CH_Day;

    /* Logic: '<S791>/Logical3' incorporates:
     *  Constant: '<S791>/Constant Value2'
     *  DataStoreWrite: '<S791>/Data Store Write2'
     *  RelationalOperator: '<S791>/Comparison2'
     */
    FeSCPR_b_Sch1CH_DNR = ((SCPR_ac_B.DataStoreRead5_d) && (((sint32)
        SCPR_ac_B.DataStoreRead4_h) == 0));

    /* DataStoreRead: '<S799>/Data Store Read12' */
    SCPR_ac_B.DataStoreRead12_g = FeSCPR_b_Sch2CH_Enbl;

    /* DataStoreRead: '<S799>/Data Store Read11' */
    SCPR_ac_B.DataStoreRead11_m = FeSCPR_y_Sch2CH_Day;

    /* Logic: '<S791>/Logical4' incorporates:
     *  Constant: '<S791>/Constant Value1'
     *  DataStoreWrite: '<S791>/Data Store Write3'
     *  RelationalOperator: '<S791>/Comparison3'
     */
    FeSCPR_b_Sch2CH_DNR = ((SCPR_ac_B.DataStoreRead12_g) && (((sint32)
        SCPR_ac_B.DataStoreRead11_m) == 0));

    /* DataStoreRead: '<S799>/Data Store Read47' */
    SCPR_ac_B.DataStoreRead47 = SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl;

    /* DataStoreRead: '<S799>/Data Store Read36' */
    SCPR_ac_B.DataStoreRead36_f = SCPR_ac_DW.NeSCPR_y_Sch1CoCH_Day;

    /* Logic: '<S791>/Logical6' incorporates:
     *  Constant: '<S791>/Constant Value7'
     *  DataStoreWrite: '<S791>/Data Store Write8'
     *  RelationalOperator: '<S791>/Comparison5'
     */
    SCPR_ac_DW.NeSCPR_b_CoCH_Sch1_DNR = ((SCPR_ac_B.DataStoreRead47) &&
        (((sint32)SCPR_ac_B.DataStoreRead36_f) == 0));

    /* DataStoreRead: '<S799>/Data Store Read43' */
    SCPR_ac_B.DataStoreRead43 = SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl;

    /* DataStoreRead: '<S799>/Data Store Read42' */
    SCPR_ac_B.DataStoreRead42 = SCPR_ac_DW.NeSCPR_y_Sch2CoCH_Day;

    /* Logic: '<S791>/Logical8' incorporates:
     *  Constant: '<S791>/Constant Value5'
     *  DataStoreWrite: '<S791>/Data Store Write9'
     *  RelationalOperator: '<S791>/Comparison7'
     */
    SCPR_ac_DW.NeSCPR_b_CoCH_Sch2_DNR = ((SCPR_ac_B.DataStoreRead43) &&
        (((sint32)SCPR_ac_B.DataStoreRead42) == 0));

    /* Switch: '<S810>/Switch12' incorporates:
     *  Constant: '<S932>/Calib'
     *  Switch: '<S810>/Switch15'
     *  Switch: '<S810>/Switch16'
     *  Switch: '<S810>/Switch17'
     *  Switch: '<S810>/Switch18'
     */
    if (KeSCPR_b_HU_Sch1_Ovrd)
    {
        /* Switch: '<S810>/Switch12' incorporates:
         *  Constant: '<S933>/Calib'
         */
        VeSCPR_b_HUSch1CH_Sub = KeSCPR_b_HU_Sch1_Sub_OvrdVal;

        /* Switch: '<S810>/Switch15' incorporates:
         *  Constant: '<S925>/Calib'
         */
        VeSCPR_K_HU_Sch1_CH_EndHr = KeSCPR_K_HU_Sch1EndHr_OvrdVal;

        /* Switch: '<S810>/Switch16' incorporates:
         *  Constant: '<S926>/Calib'
         */
        VeSCPR_K_HU_Sch1_CH_EndMin = KeSCPR_K_HU_Sch1EndMin_OvrdVal;

        /* Switch: '<S810>/Switch17' incorporates:
         *  Constant: '<S929>/Calib'
         */
        VeSCPR_K_HUSch1CH_Day = KeSCPR_K_HU_Sch1_Day_OvrdVal;

        /* Switch: '<S810>/Switch18' incorporates:
         *  Constant: '<S931>/Calib'
         */
        VeSCPR_b_HUSch1CH_Enbl = KeSCPR_b_HU_Sch1_Enbl_OvrdVal;
    }
    else
    {
        /* Switch: '<S810>/Switch12' */
        VeSCPR_b_HUSch1CH_Sub = tmpRead_j;

        /* Switch: '<S810>/Switch15' */
        VeSCPR_K_HU_Sch1_CH_EndHr = rtb_Merge7;

        /* Switch: '<S810>/Switch16' */
        VeSCPR_K_HU_Sch1_CH_EndMin = rtb_Merge6;

        /* Switch: '<S810>/Switch17' */
        VeSCPR_K_HUSch1CH_Day = tmpRead_k;

        /* Switch: '<S810>/Switch18' */
        VeSCPR_b_HUSch1CH_Enbl = rtb_OR1_pka;
    }

    /* End of Switch: '<S810>/Switch12' */

    /* Switch: '<S811>/Switch23' incorporates:
     *  Constant: '<S941>/Calib'
     *  Switch: '<S811>/Switch27'
     *  Switch: '<S811>/Switch28'
     *  Switch: '<S811>/Switch29'
     *  Switch: '<S811>/Switch30'
     */
    if (KeSCPR_b_HU_Sch2_Ovrd)
    {
        /* Switch: '<S811>/Switch23' incorporates:
         *  Constant: '<S942>/Calib'
         */
        VeSCPR_b_HUSch2CH_Sub = KeSCPR_b_HU_Sch2_Sub_OvrdVal;

        /* Switch: '<S811>/Switch27' incorporates:
         *  Constant: '<S934>/Calib'
         */
        VeSCPR_K_HUSch2CH_EndHr = KeSCPR_K_HU_Sch2EndHr_OvrdVal;

        /* Switch: '<S811>/Switch28' incorporates:
         *  Constant: '<S935>/Calib'
         */
        VeSCPR_K_HUSch2CH_EndMin = KeSCPR_K_HU_Sch2EndMin_OvrdVal;

        /* Switch: '<S811>/Switch29' incorporates:
         *  Constant: '<S938>/Calib'
         */
        VeSCPR_K_HUSch2CH_Day = KeSCPR_K_HU_Sch2_Day_OvrdVal;

        /* Switch: '<S811>/Switch30' incorporates:
         *  Constant: '<S940>/Calib'
         */
        VeSCPR_b_HUSch2CH_Enbl = KeSCPR_b_HU_Sch2_Enbl_OvrdVal;
    }
    else
    {
        /* Switch: '<S811>/Switch23' */
        VeSCPR_b_HUSch2CH_Sub = rtb_Logical3_li;

        /* Switch: '<S811>/Switch27' */
        VeSCPR_K_HUSch2CH_EndHr = rtb_Merge5;

        /* Switch: '<S811>/Switch28' */
        VeSCPR_K_HUSch2CH_EndMin = rtb_Merge4_m;

        /* Switch: '<S811>/Switch29' */
        VeSCPR_K_HUSch2CH_Day = tmpRead_l;

        /* Switch: '<S811>/Switch30' */
        VeSCPR_b_HUSch2CH_Enbl = rtb_AND_do;
    }

    /* End of Switch: '<S811>/Switch23' */

    /* Logic: '<S798>/Logical3' incorporates:
     *  Constant: '<S975>/Constant'
     *  RelationalOperator: '<S798>/Comparison'
     *  RelationalOperator: '<S798>/Comparison1'
     *  RelationalOperator: '<S798>/Comparison2'
     *  RelationalOperator: '<S798>/Comparison5'
     */
    rtb_Logical3_li = ((((((uint32)rtb_TmpSignalConversionAtVeCI_c) ==
                          CeCITR_e_External_Charge) || (((uint32)
                           rtb_TmpSignalConversionAtVeCI_o) ==
                          CeCITR_e_External_Charge)) || (((uint32)
                          rtb_TmpSignalConversionAtVeC_pc) ==
                         CeCITR_e_External_Charge)) || (((uint32)
                         rtb_TmpSignalConversionAtVeCI_f) ==
                        CeCITR_e_External_Charge));

    /* Outputs for Atomic SubSystem: '<S798>/EdgeRising3' */
    /* Logic: '<S973>/AND' incorporates:
     *  Logic: '<S973>/OR1'
     *  UnitDelay: '<S973>/Unit Delay'
     */
    rtb_AND_do = (rtb_Logical3_li && (!SCPR_ac_DW.UnitDelay_DSTATE_jr));

    /* Update for UnitDelay: '<S973>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_jr = rtb_Logical3_li;

    /* End of Outputs for SubSystem: '<S798>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S798>/Counter Reset  Enabled 2' */
    /* Outputs for Atomic SubSystem: '<S971>/EdgeRising2' */
    /* Logic: '<S982>/AND' incorporates:
     *  Logic: '<S982>/OR1'
     *  UnitDelay: '<S982>/Unit Delay'
     */
    rtb_Logical3_li = (rtb_AND_do && (!SCPR_ac_DW.UnitDelay_DSTATE_gp));

    /* Update for UnitDelay: '<S982>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gp = rtb_AND_do;

    /* End of Outputs for SubSystem: '<S971>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S971>/Signal Latch On With Reset1' */
    /* Logic: '<S983>/OR1' incorporates:
     *  UnitDelay: '<S983>/Unit Delay'
     */
    rtb_OR1_pka = (rtb_Logical3_li || (SCPR_ac_DW.UnitDelay_DSTATE_cg));

    /* Update for UnitDelay: '<S983>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_cg = rtb_OR1_pka;

    /* End of Outputs for SubSystem: '<S971>/Signal Latch On With Reset1' */

    /* Switch: '<S971>/Switch1' incorporates:
     *  Switch: '<S971>/Switch2'
     */
    if (rtb_Logical3_li)
    {
        /* Switch: '<S971>/Switch1' incorporates:
         *  Constant: '<S971>/Constant Value2'
         */
        rtb_Switch1_al = 0U;
    }
    else if (rtb_OR1_pka)
    {
        /* MinMax: '<S971>/Max' incorporates:
         *  Constant: '<S971>/Constant Value1'
         *  Constant: '<S971>/Constant Value3'
         *  Constant: '<S976>/Calib'
         *  Sum: '<S971>/Subtraction'
         *  Sum: '<S971>/Subtraction1'
         *  Switch: '<S971>/Switch2'
         *  UnitDelay: '<S971>/Unit Delay'
         */
        if (((uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_gb) + 1U)) < ((uint16)
                (((uint32)KeSCPR_Cnt_SchTypeSaveMaxT) + 1U)))
        {
            /* Switch: '<S971>/Switch1' incorporates:
             *  Switch: '<S971>/Switch2'
             */
            rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_gb) +
                1U);
        }
        else
        {
            /* Switch: '<S971>/Switch1' incorporates:
             *  Switch: '<S971>/Switch2'
             */
            rtb_Switch1_al = (uint16)(((uint32)KeSCPR_Cnt_SchTypeSaveMaxT) + 1U);
        }

        /* End of MinMax: '<S971>/Max' */
    }
    else
    {
        /* Switch: '<S971>/Switch1' incorporates:
         *  Switch: '<S971>/Switch2'
         *  UnitDelay: '<S971>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_gb;
    }

    /* End of Switch: '<S971>/Switch1' */

    /* Update for UnitDelay: '<S971>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_gb = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S798>/Counter Reset  Enabled 2' */

    /* Logic: '<S798>/Logical1' incorporates:
     *  Constant: '<S974>/Constant'
     *  RelationalOperator: '<S798>/Comparison3'
     *  RelationalOperator: '<S798>/Comparison4'
     *  RelationalOperator: '<S798>/Comparison6'
     *  RelationalOperator: '<S798>/Comparison7'
     */
    rtb_OR1_pka = ((((((uint32)rtb_TmpSignalConversionAtVeCI_c) ==
                      CeCITR_e_Standard_Charge) || (((uint32)
                       rtb_TmpSignalConversionAtVeCI_o) ==
                      CeCITR_e_Standard_Charge)) || (((uint32)
                      rtb_TmpSignalConversionAtVeC_pc) ==
                     CeCITR_e_Standard_Charge)) || (((uint32)
                     rtb_TmpSignalConversionAtVeCI_f) ==
                    CeCITR_e_Standard_Charge));

    /* Outputs for Atomic SubSystem: '<S798>/EdgeRising2' */
    /* Logic: '<S972>/AND' incorporates:
     *  Logic: '<S972>/OR1'
     *  UnitDelay: '<S972>/Unit Delay'
     */
    rtb_Logical3_li = (rtb_OR1_pka && (!SCPR_ac_DW.UnitDelay_DSTATE_lo));

    /* Update for UnitDelay: '<S972>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_lo = rtb_OR1_pka;

    /* End of Outputs for SubSystem: '<S798>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S798>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S798>/Counter Reset  Enabled 2' */
    /* Logic: '<S979>/OR1' incorporates:
     *  Constant: '<S976>/Calib'
     *  Logic: '<S798>/Logical2'
     *  Logic: '<S979>/NOT'
     *  Logic: '<S979>/OR'
     *  RelationalOperator: '<S971>/Greater  Than1'
     *  UnitDelay: '<S798>/Unit Delay'
     *  UnitDelay: '<S979>/Unit Delay'
     */
    rtb_OR1_pka = ((SCPR_ac_DW.UnitDelay_DSTATE_ov) || (((rtb_Switch1_al <=
                      KeSCPR_Cnt_SchTypeSaveMaxT) && (!rtb_Logical3_li)) &&
                    (SCPR_ac_DW.UnitDelay_DSTATE_l3)));

    /* End of Outputs for SubSystem: '<S798>/Counter Reset  Enabled 2' */

    /* Update for UnitDelay: '<S979>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_l3 = rtb_OR1_pka;

    /* End of Outputs for SubSystem: '<S798>/Signal Latch On With Reset2' */

    /* Outputs for Enabled SubSystem: '<S797>/CoopChSchSaving' incorporates:
     *  EnablePort: '<S956>/Enable'
     */
    /* Logic: '<S798>/Logical7' incorporates:
     *  Constant: '<S977>/Calib'
     */
    if (rtb_OR1_pka && (KeSCPR_b_CoopCharging_enbl))
    {
        /* If: '<S956>/If4' incorporates:
         *  Logic: '<S956>/Logical8'
         *  Logic: '<S956>/Logical9'
         */
        if (VeSCPR_b_HUSch1CH_Sub)
        {
            /* Outputs for IfAction SubSystem: '<S956>/HU_Sch1_CoCH' incorporates:
             *  ActionPort: '<S962>/Action Port'
             */
            /* DataStoreWrite: '<S962>/Data Store Write5' incorporates:
             *  Inport: '<Root>/VeCITR_Pct_HU_ExtChrgTarget1'
             */
            (void)Rte_Read_VeCITR_Pct_HU_ExtChrgTarget1_Value
                (&SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt);

            /* DataStoreWrite: '<S962>/Data Store Write4' incorporates:
             *  Inport: '<Root>/VeCITR_Pct_HU_ImmChrgTarget1'
             */
            (void)Rte_Read_VeCITR_Pct_HU_ImmChrgTarget1_Value
                (&SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt);

            /* DataStoreWrite: '<S962>/Data Store Write' */
            SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopHr = VeSCPR_K_HU_Sch1_CH_EndHr;

            /* DataStoreWrite: '<S962>/Data Store Write1' */
            SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopMin = VeSCPR_K_HU_Sch1_CH_EndMin;

            /* DataStoreWrite: '<S962>/Data Store Write2' */
            SCPR_ac_DW.NeSCPR_y_Sch1CoCH_Day = VeSCPR_K_HUSch1CH_Day;

            /* DataStoreWrite: '<S962>/Data Store Write3' */
            SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl = VeSCPR_b_HUSch1CH_Enbl;

            /* DataStoreWrite: '<S962>/Data Store Write6' incorporates:
             *  SignalConversion generated from: '<S1>/VeCITR_e_HU_ChrgSchedType1'
             */
            SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType = rtb_TmpSignalConversionAtVeCI_c;

            /* DataStoreWrite: '<S962>/Data Store Write8' incorporates:
             *  Constant: '<S962>/TRUE Constant'
             */
            FeSCPR_b_Sch1CH_Enbl = false;

            /* End of Outputs for SubSystem: '<S956>/HU_Sch1_CoCH' */
        }
        else
        {
            if ((!VeSCPR_b_HUSch1CH_Sub) && (SCPR_ac_B.TBM_Sch1_Submit))
            {
                /* Outputs for IfAction SubSystem: '<S956>/TBM_Sch1_CoCH' incorporates:
                 *  ActionPort: '<S964>/Action Port'
                 */
                /* DataStoreWrite: '<S964>/Data Store Write5' incorporates:
                 *  Inport: '<Root>/VeCITR_Pct_TBM_ExtChrgTarget1'
                 */
                (void)Rte_Read_VeCITR_Pct_TBM_ExtChrgTarget1_Value
                    (&SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt);

                /* DataStoreWrite: '<S964>/Data Store Write4' incorporates:
                 *  Inport: '<Root>/VeCITR_Pct_TBM_ImmChrgTarget1'
                 */
                (void)Rte_Read_VeCITR_Pct_TBM_ImmChrgTarget1_Value
                    (&SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt);

                /* DataStoreWrite: '<S964>/Data Store Write' */
                SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopHr =
                    rtb_TmpSignalConversionAtVeCITR;

                /* DataStoreWrite: '<S964>/Data Store Write1' */
                SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopMin =
                    rtb_TmpSignalConversionAtVeC_cs;

                /* DataStoreWrite: '<S964>/Data Store Write2' */
                SCPR_ac_DW.NeSCPR_y_Sch1CoCH_Day =
                    rtb_TmpSignalConversionAtVeC_ir;

                /* DataStoreWrite: '<S964>/Data Store Write3' */
                SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl =
                    rtb_TmpSignalConversionAtVeCI_l;

                /* DataStoreWrite: '<S964>/Data Store Write6' incorporates:
                 *  SignalConversion generated from: '<S1>/VeCITR_e_TBM_ChrgSchedType1'
                 */
                SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType =
                    rtb_TmpSignalConversionAtVeCI_o;

                /* DataStoreWrite: '<S964>/Data Store Write8' incorporates:
                 *  Constant: '<S964>/TRUE Constant'
                 */
                FeSCPR_b_Sch1CH_Enbl = false;

                /* End of Outputs for SubSystem: '<S956>/TBM_Sch1_CoCH' */
            }
        }

        /* End of If: '<S956>/If4' */

        /* If: '<S956>/If5' incorporates:
         *  Logic: '<S956>/Logical10'
         *  Logic: '<S956>/Logical11'
         */
        if (VeSCPR_b_HUSch2CH_Sub)
        {
            /* Outputs for IfAction SubSystem: '<S956>/HU_Sch2_CoCH2' incorporates:
             *  ActionPort: '<S963>/Action Port'
             */
            /* DataStoreWrite: '<S963>/Data Store Write11' incorporates:
             *  Inport: '<Root>/VeCITR_Pct_HU_ExtChrgTarget2'
             */
            (void)Rte_Read_VeCITR_Pct_HU_ExtChrgTarget2_Value
                (&SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt);

            /* DataStoreWrite: '<S963>/Data Store Write10' incorporates:
             *  Inport: '<Root>/VeCITR_Pct_HU_ImmChrgTarget2'
             */
            (void)Rte_Read_VeCITR_Pct_HU_ImmChrgTarget2_Value
                (&SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt);

            /* DataStoreWrite: '<S963>/Data Store Write6' */
            SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopHr = VeSCPR_K_HUSch2CH_EndHr;

            /* DataStoreWrite: '<S963>/Data Store Write7' */
            SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopMin = VeSCPR_K_HUSch2CH_EndMin;

            /* DataStoreWrite: '<S963>/Data Store Write8' */
            SCPR_ac_DW.NeSCPR_y_Sch2CoCH_Day = VeSCPR_K_HUSch2CH_Day;

            /* DataStoreWrite: '<S963>/Data Store Write9' */
            SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl = VeSCPR_b_HUSch2CH_Enbl;

            /* DataStoreWrite: '<S963>/Data Store Write' incorporates:
             *  SignalConversion generated from: '<S1>/VeCITR_e_HU_ChrgSchedType2'
             */
            SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType = rtb_TmpSignalConversionAtVeC_pc;

            /* DataStoreWrite: '<S963>/Data Store Write1' incorporates:
             *  Constant: '<S963>/TRUE Constant'
             */
            FeSCPR_b_Sch2CH_Enbl = false;

            /* End of Outputs for SubSystem: '<S956>/HU_Sch2_CoCH2' */
        }
        else
        {
            if ((!VeSCPR_b_HUSch2CH_Sub) && (SCPR_ac_B.TBM_Sch2_Submit))
            {
                /* Outputs for IfAction SubSystem: '<S956>/TBM_Sch2_CoCH' incorporates:
                 *  ActionPort: '<S965>/Action Port'
                 */
                /* DataStoreWrite: '<S965>/Data Store Write11' incorporates:
                 *  Inport: '<Root>/VeCITR_Pct_TBM_ExtChrgTarget2'
                 */
                (void)Rte_Read_VeCITR_Pct_TBM_ExtChrgTarget2_Value
                    (&SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt);

                /* DataStoreWrite: '<S965>/Data Store Write10' incorporates:
                 *  Inport: '<Root>/VeCITR_Pct_TBM_ImmChrgTarget2'
                 */
                (void)Rte_Read_VeCITR_Pct_TBM_ImmChrgTarget2_Value
                    (&SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt);

                /* DataStoreWrite: '<S965>/Data Store Write6' */
                SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopHr =
                    rtb_TmpSignalConversionAtVeCI_g;

                /* DataStoreWrite: '<S965>/Data Store Write7' */
                SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopMin =
                    rtb_TmpSignalConversionAtVeCI_p;

                /* DataStoreWrite: '<S965>/Data Store Write8' */
                SCPR_ac_DW.NeSCPR_y_Sch2CoCH_Day =
                    rtb_TmpSignalConversionAtVeCI_e;

                /* DataStoreWrite: '<S965>/Data Store Write9' */
                SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl =
                    rtb_TmpSignalConversionAtVeC_i0;

                /* DataStoreWrite: '<S965>/Data Store Write' incorporates:
                 *  SignalConversion generated from: '<S1>/VeCITR_e_TBM_ChrgSchedType2'
                 */
                SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType =
                    rtb_TmpSignalConversionAtVeCI_f;

                /* DataStoreWrite: '<S965>/Data Store Write1' incorporates:
                 *  Constant: '<S965>/TRUE Constant'
                 */
                FeSCPR_b_Sch2CH_Enbl = false;

                /* End of Outputs for SubSystem: '<S956>/TBM_Sch2_CoCH' */
            }
        }

        /* End of If: '<S956>/If5' */
    }

    /* End of Logic: '<S798>/Logical7' */
    /* End of Outputs for SubSystem: '<S797>/CoopChSchSaving' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_ChargeUntilFull' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_ChargeUntilFull_Value(&rtb_AND_eb);

    /* Inport: '<Root>/VeCITR_K_HU_Sch2_Start_Time_Min' */
    (void)Rte_Read_VeCITR_K_HU_Sch2_Start_Time_Min_Value(&rtb_Merge8);

    /* Inport: '<Root>/VeCITR_K_HU_Sch2_Start_Time_Hr' */
    (void)Rte_Read_VeCITR_K_HU_Sch2_Start_Time_Hr_Value(&Merge10_e);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_ChargeUntilFull' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_ChargeUntilFull_Value(&rtb_OR1_lu);

    /* Inport: '<Root>/VeCITR_K_HU_Sch1_Start_Time_Min' */
    (void)Rte_Read_VeCITR_K_HU_Sch1_Start_Time_Min_Value(&Merge11_h);

    /* Inport: '<Root>/VeCITR_K_HU_Sch1_Start_Time_Hr' */
    (void)Rte_Read_VeCITR_K_HU_Sch1_Start_Time_Hr_Value(&Merge12_g);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Switch: '<S810>/Switch13' incorporates:
     *  Constant: '<S932>/Calib'
     *  Switch: '<S810>/Switch14'
     *  Switch: '<S810>/Switch20'
     */
    if (KeSCPR_b_HU_Sch1_Ovrd)
    {
        /* Switch: '<S810>/Switch13' incorporates:
         *  Constant: '<S927>/Calib'
         */
        VeSCPR_K_HUSch1CH_StrtHr = KeSCPR_K_HU_Sch1StartHr_OvrdVal;

        /* Switch: '<S810>/Switch14' incorporates:
         *  Constant: '<S928>/Calib'
         */
        VeSCPR_K_HUSch1CH_StrtMin = KeSCPR_K_HU_Sch1StartMin_OvrdVal;

        /* Switch: '<S810>/Switch20' incorporates:
         *  Constant: '<S930>/Calib'
         */
        VeSCPR_b_HUSch1CH_ChrgUntFl = KeSCPR_b_HU_Sch1_ChrgUntilFull_OvrdVal;
    }
    else
    {
        /* Switch: '<S810>/Switch13' */
        VeSCPR_K_HUSch1CH_StrtHr = Merge12_g;

        /* Switch: '<S810>/Switch14' */
        VeSCPR_K_HUSch1CH_StrtMin = Merge11_h;

        /* Switch: '<S810>/Switch20' */
        VeSCPR_b_HUSch1CH_ChrgUntFl = rtb_OR1_lu;
    }

    /* End of Switch: '<S810>/Switch13' */

    /* Switch: '<S811>/Switch25' incorporates:
     *  Constant: '<S941>/Calib'
     *  Switch: '<S811>/Switch26'
     *  Switch: '<S811>/Switch32'
     */
    if (KeSCPR_b_HU_Sch2_Ovrd)
    {
        /* Switch: '<S811>/Switch25' incorporates:
         *  Constant: '<S936>/Calib'
         */
        VeSCPR_K_HUSch2CH_StrtHr = KeSCPR_K_HU_Sch2StartHr_OvrdVal;

        /* Switch: '<S811>/Switch26' incorporates:
         *  Constant: '<S937>/Calib'
         */
        VeSCPR_K_HUSch2CH_StrtMin = KeSCPR_K_HU_Sch2StartMin_OvrdVal;

        /* Switch: '<S811>/Switch32' incorporates:
         *  Constant: '<S939>/Calib'
         */
        VeSCPR_b_HUSch2CH_ChrgUntFl = KeSCPR_b_HU_Sch2_ChrgUntilFull_OvrdVal;
    }
    else
    {
        /* Switch: '<S811>/Switch25' */
        VeSCPR_K_HUSch2CH_StrtHr = Merge10_e;

        /* Switch: '<S811>/Switch26' */
        VeSCPR_K_HUSch2CH_StrtMin = rtb_Merge8;

        /* Switch: '<S811>/Switch32' */
        VeSCPR_b_HUSch2CH_ChrgUntFl = rtb_AND_eb;
    }

    /* End of Switch: '<S811>/Switch25' */

    /* Outputs for Atomic SubSystem: '<S798>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S970>/EdgeRising2' */
    /* Logic: '<S980>/AND' incorporates:
     *  Logic: '<S980>/OR1'
     *  UnitDelay: '<S980>/Unit Delay'
     */
    rtb_AND_eb = (rtb_Logical3_li && (!SCPR_ac_DW.UnitDelay_DSTATE_pf));

    /* Update for UnitDelay: '<S980>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_pf = rtb_Logical3_li;

    /* End of Outputs for SubSystem: '<S970>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S970>/Signal Latch On With Reset1' */
    /* Logic: '<S981>/OR1' incorporates:
     *  UnitDelay: '<S981>/Unit Delay'
     */
    rtb_OR1_lu = (rtb_AND_eb || (SCPR_ac_DW.UnitDelay_DSTATE_io));

    /* Update for UnitDelay: '<S981>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_io = rtb_OR1_lu;

    /* End of Outputs for SubSystem: '<S970>/Signal Latch On With Reset1' */

    /* Switch: '<S970>/Switch1' incorporates:
     *  Switch: '<S970>/Switch2'
     */
    if (rtb_AND_eb)
    {
        /* Switch: '<S970>/Switch1' incorporates:
         *  Constant: '<S970>/Constant Value2'
         */
        rtb_Switch1_al = 0U;
    }
    else if (rtb_OR1_lu)
    {
        /* MinMax: '<S970>/Max' incorporates:
         *  Constant: '<S970>/Constant Value1'
         *  Constant: '<S970>/Constant Value3'
         *  Constant: '<S976>/Calib'
         *  Sum: '<S970>/Subtraction'
         *  Sum: '<S970>/Subtraction1'
         *  Switch: '<S970>/Switch2'
         *  UnitDelay: '<S970>/Unit Delay'
         */
        if (((uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_fu) + 1U)) < ((uint16)
                (((uint32)KeSCPR_Cnt_SchTypeSaveMaxT) + 1U)))
        {
            /* Switch: '<S970>/Switch1' incorporates:
             *  Switch: '<S970>/Switch2'
             */
            rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_fu) +
                1U);
        }
        else
        {
            /* Switch: '<S970>/Switch1' incorporates:
             *  Switch: '<S970>/Switch2'
             */
            rtb_Switch1_al = (uint16)(((uint32)KeSCPR_Cnt_SchTypeSaveMaxT) + 1U);
        }

        /* End of MinMax: '<S970>/Max' */
    }
    else
    {
        /* Switch: '<S970>/Switch1' incorporates:
         *  Switch: '<S970>/Switch2'
         *  UnitDelay: '<S970>/Unit Delay'
         */
        rtb_Switch1_al = SCPR_ac_DW.UnitDelay_DSTATE_fu;
    }

    /* End of Switch: '<S970>/Switch1' */

    /* Update for UnitDelay: '<S970>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_fu = rtb_Switch1_al;

    /* Outputs for Atomic SubSystem: '<S798>/Signal Latch On With Reset1' */
    /* Logic: '<S978>/OR1' incorporates:
     *  Constant: '<S976>/Calib'
     *  Logic: '<S798>/Logical4'
     *  Logic: '<S978>/NOT'
     *  Logic: '<S978>/OR'
     *  RelationalOperator: '<S970>/Greater  Than1'
     *  UnitDelay: '<S798>/Unit Delay1'
     *  UnitDelay: '<S978>/Unit Delay'
     */
    rtb_AND_eb = ((SCPR_ac_DW.UnitDelay1_DSTATE_ip) || (((rtb_Switch1_al <=
                     KeSCPR_Cnt_SchTypeSaveMaxT) && (!rtb_AND_do)) &&
                   (SCPR_ac_DW.UnitDelay_DSTATE_oh)));

    /* End of Outputs for SubSystem: '<S798>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S978>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_oh = rtb_AND_eb;

    /* End of Outputs for SubSystem: '<S798>/Signal Latch On With Reset1' */

    /* Outputs for Enabled SubSystem: '<S797>/RegularSchSaving' incorporates:
     *  EnablePort: '<S957>/Enable'
     */
    /* Logic: '<S798>/Logical5' incorporates:
     *  Constant: '<S977>/Calib'
     *  Logic: '<S798>/Logical6'
     */
    if (rtb_AND_eb || (!KeSCPR_b_CoopCharging_enbl))
    {
        /* If: '<S957>/If' incorporates:
         *  Logic: '<S957>/Logical'
         *  Logic: '<S957>/Logical1'
         */
        if (VeSCPR_b_HUSch1CH_Sub)
        {
            /* Outputs for IfAction SubSystem: '<S957>/HU_Sch1_CH' incorporates:
             *  ActionPort: '<S966>/Action Port'
             */
            /* DataStoreWrite: '<S966>/Data Store Write' */
            FeSCPR_e_Sch1CH_StrtHr = VeSCPR_K_HUSch1CH_StrtHr;

            /* DataStoreWrite: '<S966>/Data Store Write1' */
            FeSCPR_e_Sch1CH_StrtMin = VeSCPR_K_HUSch1CH_StrtMin;

            /* DataStoreWrite: '<S966>/Data Store Write2' */
            FeSCPR_e_Sch1CH_EndHr = VeSCPR_K_HU_Sch1_CH_EndHr;

            /* DataStoreWrite: '<S966>/Data Store Write3' */
            FeSCPR_e_Sch1CH_EndMin = VeSCPR_K_HU_Sch1_CH_EndMin;

            /* DataStoreWrite: '<S966>/Data Store Write4' */
            FeSCPR_y_Sch1CH_Day = VeSCPR_K_HUSch1CH_Day;

            /* DataStoreWrite: '<S966>/Data Store Write5' */
            FeSCPR_b_Sch1CH_Enbl = VeSCPR_b_HUSch1CH_Enbl;

            /* DataStoreWrite: '<S966>/Data Store Write7' */
            FeSCPR_b_Sch1CH_ChrgUntFl = VeSCPR_b_HUSch1CH_ChrgUntFl;

            /* DataStoreWrite: '<S966>/Data Store Write6' incorporates:
             *  SignalConversion generated from: '<S1>/VeCITR_e_HU_ChrgSchedType1'
             */
            SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType = rtb_TmpSignalConversionAtVeCI_c;

            /* DataStoreWrite: '<S966>/Data Store Write8' incorporates:
             *  Constant: '<S966>/TRUE Constant'
             */
            SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl = false;

            /* End of Outputs for SubSystem: '<S957>/HU_Sch1_CH' */
        }
        else
        {
            if ((!VeSCPR_b_HUSch1CH_Sub) && (SCPR_ac_B.TBM_Sch1_Submit))
            {
                /* Outputs for IfAction SubSystem: '<S957>/TBM_Sch1_CH' incorporates:
                 *  ActionPort: '<S968>/Action Port'
                 */
                /* DataStoreWrite: '<S968>/Data Store Write7' incorporates:
                 *  Inport: '<Root>/VeCITR_b_TBM_Sch1_ChargeUntilFull'
                 */
                (void)Rte_Read_VeCITR_b_TBM_Sch1_ChargeUntilFull_Value
                    ((&(FeSCPR_b_Sch1CH_ChrgUntFl)));

                /* DataStoreWrite: '<S968>/Data Store Write1' incorporates:
                 *  Inport: '<Root>/VeCITR_K_TBM_Sch1_Start_Time_Min'
                 */
                (void)Rte_Read_VeCITR_K_TBM_Sch1_Start_Time_Min_Value
                    ((&(FeSCPR_e_Sch1CH_StrtMin)));

                /* DataStoreWrite: '<S968>/Data Store Write' incorporates:
                 *  Inport: '<Root>/VeCITR_K_TBM_Sch1_Start_Time_Hr'
                 */
                (void)Rte_Read_VeCITR_K_TBM_Sch1_Start_Time_Hr_Value
                    ((&(FeSCPR_e_Sch1CH_StrtHr)));

                /* DataStoreWrite: '<S968>/Data Store Write2' */
                FeSCPR_e_Sch1CH_EndHr = rtb_TmpSignalConversionAtVeCITR;

                /* DataStoreWrite: '<S968>/Data Store Write3' */
                FeSCPR_e_Sch1CH_EndMin = rtb_TmpSignalConversionAtVeC_cs;

                /* DataStoreWrite: '<S968>/Data Store Write4' */
                FeSCPR_y_Sch1CH_Day = rtb_TmpSignalConversionAtVeC_ir;

                /* DataStoreWrite: '<S968>/Data Store Write5' */
                FeSCPR_b_Sch1CH_Enbl = rtb_TmpSignalConversionAtVeCI_l;

                /* DataStoreWrite: '<S968>/Data Store Write6' incorporates:
                 *  SignalConversion generated from: '<S1>/VeCITR_e_TBM_ChrgSchedType1'
                 */
                SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType =
                    rtb_TmpSignalConversionAtVeCI_o;

                /* DataStoreWrite: '<S968>/Data Store Write8' incorporates:
                 *  Constant: '<S968>/TRUE Constant'
                 */
                SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl = false;

                /* End of Outputs for SubSystem: '<S957>/TBM_Sch1_CH' */
            }
        }

        /* End of If: '<S957>/If' */

        /* If: '<S957>/If3' incorporates:
         *  Logic: '<S957>/Logical2'
         *  Logic: '<S957>/Logical3'
         */
        if (VeSCPR_b_HUSch2CH_Sub)
        {
            /* Outputs for IfAction SubSystem: '<S957>/HU_Sch2_CH' incorporates:
             *  ActionPort: '<S967>/Action Port'
             */
            /* DataStoreWrite: '<S967>/Data Store Write' */
            FeSCPR_e_Sch2CH_StrtHr = VeSCPR_K_HUSch2CH_StrtHr;

            /* DataStoreWrite: '<S967>/Data Store Write1' */
            FeSCPR_e_Sch2CH_StrtMin = VeSCPR_K_HUSch2CH_StrtMin;

            /* DataStoreWrite: '<S967>/Data Store Write2' */
            FeSCPR_e_Sch2CH_EndHr = VeSCPR_K_HUSch2CH_EndHr;

            /* DataStoreWrite: '<S967>/Data Store Write3' */
            FeSCPR_e_Sch2CH_EndMin = VeSCPR_K_HUSch2CH_EndMin;

            /* DataStoreWrite: '<S967>/Data Store Write4' */
            FeSCPR_y_Sch2CH_Day = VeSCPR_K_HUSch2CH_Day;

            /* DataStoreWrite: '<S967>/Data Store Write5' */
            FeSCPR_b_Sch2CH_Enbl = VeSCPR_b_HUSch2CH_Enbl;

            /* DataStoreWrite: '<S967>/Data Store Write7' */
            FeSCPR_b_Sch2CH_ChrgUntFl = VeSCPR_b_HUSch2CH_ChrgUntFl;

            /* DataStoreWrite: '<S967>/Data Store Write6' incorporates:
             *  SignalConversion generated from: '<S1>/VeCITR_e_HU_ChrgSchedType2'
             */
            SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType = rtb_TmpSignalConversionAtVeC_pc;

            /* DataStoreWrite: '<S967>/Data Store Write9' incorporates:
             *  Constant: '<S967>/TRUE Constant'
             */
            SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl = false;

            /* End of Outputs for SubSystem: '<S957>/HU_Sch2_CH' */
        }
        else
        {
            if ((!VeSCPR_b_HUSch2CH_Sub) && (SCPR_ac_B.TBM_Sch2_Submit))
            {
                /* Outputs for IfAction SubSystem: '<S957>/TBM_Sch2_CH' incorporates:
                 *  ActionPort: '<S969>/Action Port'
                 */
                /* DataStoreWrite: '<S969>/Data Store Write7' incorporates:
                 *  Inport: '<Root>/VeCITR_b_TBM_Sch2_ChargeUntilFull'
                 */
                (void)Rte_Read_VeCITR_b_TBM_Sch2_ChargeUntilFull_Value
                    ((&(FeSCPR_b_Sch2CH_ChrgUntFl)));

                /* DataStoreWrite: '<S969>/Data Store Write1' incorporates:
                 *  Inport: '<Root>/VeCITR_K_TBM_Sch2_Start_Time_Min'
                 */
                (void)Rte_Read_VeCITR_K_TBM_Sch2_Start_Time_Min_Value
                    ((&(FeSCPR_e_Sch2CH_StrtMin)));

                /* DataStoreWrite: '<S969>/Data Store Write' incorporates:
                 *  Inport: '<Root>/VeCITR_K_TBM_Sch2_Start_Time_Hr'
                 */
                (void)Rte_Read_VeCITR_K_TBM_Sch2_Start_Time_Hr_Value
                    ((&(FeSCPR_e_Sch2CH_StrtHr)));

                /* DataStoreWrite: '<S969>/Data Store Write2' */
                FeSCPR_e_Sch2CH_EndHr = rtb_TmpSignalConversionAtVeCI_g;

                /* DataStoreWrite: '<S969>/Data Store Write3' */
                FeSCPR_e_Sch2CH_EndMin = rtb_TmpSignalConversionAtVeCI_p;

                /* DataStoreWrite: '<S969>/Data Store Write4' */
                FeSCPR_y_Sch2CH_Day = rtb_TmpSignalConversionAtVeCI_e;

                /* DataStoreWrite: '<S969>/Data Store Write5' */
                FeSCPR_b_Sch2CH_Enbl = rtb_TmpSignalConversionAtVeC_i0;

                /* DataStoreWrite: '<S969>/Data Store Write6' incorporates:
                 *  SignalConversion generated from: '<S1>/VeCITR_e_TBM_ChrgSchedType2'
                 */
                SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType =
                    rtb_TmpSignalConversionAtVeCI_f;

                /* DataStoreWrite: '<S969>/Data Store Write9' incorporates:
                 *  Constant: '<S969>/TRUE Constant'
                 */
                SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl = false;

                /* End of Outputs for SubSystem: '<S957>/TBM_Sch2_CH' */
            }
        }

        /* End of If: '<S957>/If3' */
    }

    /* End of Logic: '<S798>/Logical5' */
    /* End of Outputs for SubSystem: '<S797>/RegularSchSaving' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<Root>/VePLTR_e_ProxyHybridType' */
    (void)Rte_Read_VePLTR_e_ProxyHybridType_Value(&tmpRead_2f);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_AllowFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_AllowFA_Value(&tmpRead_2b);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_TemperatureFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_TemperatureFA_Value(&tmpRead_2a);

    /* Inport: '<Root>/VeCITR_b_TBM_Sch3_TemperatureFA' */
    (void)Rte_Read_VeCITR_b_TBM_Sch3_TemperatureFA_Value(&tmpRead_25);

    /* Inport: '<Root>/VeCITR_T_TBM_Sch3_Temperature' */
    (void)Rte_Read_VeCITR_T_TBM_Sch3_Temperature_Value(&Merge13);

    /* Inport: '<Root>/VeCITR_b_TBM_Sch3_AllowFA' */
    (void)Rte_Read_VeCITR_b_TBM_Sch3_AllowFA_Value(&tmpRead_24);

    /* Inport: '<Root>/VeCITR_e_TBM_Sch3_Allow' */
    (void)Rte_Read_VeCITR_e_TBM_Sch3_Allow_Value(&tmpRead_23);

    /* Inport: '<S6>/TBM_Sch3_Submit' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBM_Sch3_Submit'
     */
    (void)Rte_Read_VeCITR_b_TBM_Sch3_Submit_Value(&SCPR_ac_B.TBM_Sch3_Submit);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_Enbl' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_Enbl_Value(&tmpRead_q);

    /* Inport: '<Root>/VeCITR_K_HU_Sch3_Day' */
    (void)Rte_Read_VeCITR_K_HU_Sch3_Day_Value(&tmpRead_p);

    /* Inport: '<Root>/VeCITR_T_HU_Sch3_Temperature' */
    (void)Rte_Read_VeCITR_T_HU_Sch3_Temperature_Value(&Merge14);

    /* Inport: '<Root>/VeCITR_e_HU_Sch3_Allow' */
    (void)Rte_Read_VeCITR_e_HU_Sch3_Allow_Value(&tmpRead_o);

    /* Inport: '<Root>/VeCITR_K_HU_Sch3_Start_Time_Min' */
    (void)Rte_Read_VeCITR_K_HU_Sch3_Start_Time_Min_Value
        (&VeSCPR_t_TimeToDeparture);

    /* Inport: '<Root>/VeCITR_K_HU_Sch3_Start_Time_Hr' */
    (void)Rte_Read_VeCITR_K_HU_Sch3_Start_Time_Hr_Value(&tmpRead_n);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_Submit' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_Submit_Value(&tmpRead_m);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Switch: '<S812>/Switch35' incorporates:
     *  Constant: '<S947>/Calib'
     *  Switch: '<S812>/Switch36'
     *  Switch: '<S812>/Switch37'
     *  Switch: '<S812>/Switch40'
     *  Switch: '<S812>/Switch41'
     */
    if (KeSCPR_b_HU_Sch3_Ovrd)
    {
        /* Switch: '<S812>/Switch35' incorporates:
         *  Constant: '<S948>/Calib'
         */
        VeSCPR_b_HUSch1CP_Sub = KeSCPR_b_HU_Sch3_Sub_OvrdVal;

        /* Switch: '<S812>/Switch36' incorporates:
         *  Constant: '<S943>/Calib'
         */
        VeSCPR_K_HUSch1CP_StrtHr = KeSCPR_K_HU_Sch3StartHr_OvrdVal;

        /* Switch: '<S812>/Switch37' incorporates:
         *  Constant: '<S944>/Calib'
         */
        VeSCPR_K_HUSch1CP_StrtMin = KeSCPR_K_HU_Sch3StartMin_OvrdVal;

        /* Switch: '<S812>/Switch40' incorporates:
         *  Constant: '<S945>/Calib'
         */
        VeSCPR_K_HUSch1CP_Day = KeSCPR_K_HU_Sch3_Day_OvrdVal;

        /* Switch: '<S812>/Switch41' incorporates:
         *  Constant: '<S946>/Calib'
         */
        VeSCPR_b_HUSch1CP_Enbl = KeSCPR_b_HU_Sch3_Enbl_OvrdVal;
    }
    else
    {
        /* Switch: '<S812>/Switch35' */
        VeSCPR_b_HUSch1CP_Sub = tmpRead_m;

        /* Switch: '<S812>/Switch36' */
        VeSCPR_K_HUSch1CP_StrtHr = tmpRead_n;

        /* Switch: '<S812>/Switch37' */
        VeSCPR_K_HUSch1CP_StrtMin = VeSCPR_t_TimeToDeparture;

        /* Switch: '<S812>/Switch40' */
        VeSCPR_K_HUSch1CP_Day = tmpRead_p;

        /* Switch: '<S812>/Switch41' */
        VeSCPR_b_HUSch1CP_Enbl = tmpRead_q;
    }

    /* End of Switch: '<S812>/Switch35' */

    /* Switch: '<S812>/Switch1' incorporates:
     *  Constant: '<S947>/Calib'
     *  Logic: '<S812>/Logical1'
     */
    if ((KeSCPR_b_HU_Sch3_Ovrd) || tmpRead_2b)
    {
        /* Switch: '<S812>/Switch1' incorporates:
         *  Constant: '<S796>/Calib'
         */
        VeSCPR_e_HUSch1CP_Allow = KeSCPR_e_SchCPAllow_Default;
    }
    else
    {
        /* Switch: '<S812>/Switch1' incorporates:
         *  Inport: '<Root>/VeCITR_e_HU_Sch3_Allow'
         */
        VeSCPR_e_HUSch1CP_Allow = tmpRead_o;
    }

    /* End of Switch: '<S812>/Switch1' */

    /* Logic: '<S812>/Logical2' incorporates:
     *  Constant: '<S792>/Constant'
     *  Inport: '<Root>/VePLTR_e_ProxyHybridType'
     *  Logic: '<S800>/Logical1'
     *  Logic: '<S800>/Logical2'
     *  Logic: '<S813>/Logical2'
     *  RelationalOperator: '<S6>/Comparison4'
     */
    rtb_RelatonalOperator2_idx_2 = (((uint32)tmpRead_2f) != CePLTR_e_BattEVeh);

    /* Switch: '<S812>/Switch39' incorporates:
     *  Constant: '<S947>/Calib'
     *  Logic: '<S812>/Logical2'
     *  Logic: '<S812>/Logical6'
     */
    if (((KeSCPR_b_HU_Sch3_Ovrd) || tmpRead_2a) || rtb_RelatonalOperator2_idx_2)
    {
        /* Switch: '<S812>/Switch39' incorporates:
         *  Constant: '<S795>/Calib'
         */
        VeSCPR_T_HUSch1CP_Temp = KeSCPR_T_SchTemp_Default;
    }
    else
    {
        /* Switch: '<S812>/Switch39' */
        VeSCPR_T_HUSch1CP_Temp = Merge14;
    }

    /* End of Switch: '<S812>/Switch39' */

    /* If: '<S955>/If1' incorporates:
     *  Logic: '<S955>/Logical4'
     *  Logic: '<S955>/Logical5'
     */
    if (VeSCPR_b_HUSch1CP_Sub)
    {
        /* Outputs for IfAction SubSystem: '<S955>/HU_Sch1_CP' incorporates:
         *  ActionPort: '<S958>/Action Port'
         */
        /* DataStoreWrite: '<S958>/Data Store Write' */
        FeSCPR_e_Sch1CP_DepHr = VeSCPR_K_HUSch1CP_StrtHr;

        /* DataStoreWrite: '<S958>/Data Store Write1' */
        FeSCPR_e_Sch1CP_DepMin = VeSCPR_K_HUSch1CP_StrtMin;

        /* DataStoreWrite: '<S958>/Data Store Write4' */
        FeSCPR_y_Sch1CP_Day = VeSCPR_K_HUSch1CP_Day;

        /* DataStoreWrite: '<S958>/Data Store Write5' */
        FeSCPR_b_Sch1CP_Enbl = VeSCPR_b_HUSch1CP_Enbl;

        /* DataStoreWrite: '<S958>/Data Store Write9' incorporates:
         *  Switch: '<S812>/Switch1'
         */
        FeSCPR_e_Sch1CP_Allow = VeSCPR_e_HUSch1CP_Allow;

        /* DataStoreWrite: '<S958>/Data Store Write2' */
        FeSCPR_T_Sch1CP_DepTemp = VeSCPR_T_HUSch1CP_Temp;

        /* End of Outputs for SubSystem: '<S955>/HU_Sch1_CP' */
    }
    else
    {
        if ((!VeSCPR_b_HUSch1CP_Sub) && (SCPR_ac_B.TBM_Sch3_Submit))
        {
            /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch1_CP' incorporates:
             *  ActionPort: '<S960>/Action Port'
             */
            /* DataStoreWrite: '<S960>/Data Store Write5' incorporates:
             *  Inport: '<Root>/VeCITR_b_TBM_Sch3_Enbl'
             */
            (void)Rte_Read_VeCITR_b_TBM_Sch3_Enbl_Value((&(FeSCPR_b_Sch1CP_Enbl)));

            /* DataStoreWrite: '<S960>/Data Store Write4' incorporates:
             *  Inport: '<Root>/VeCITR_K_TBM_Sch3_Day'
             */
            (void)Rte_Read_VeCITR_K_TBM_Sch3_Day_Value((&(FeSCPR_y_Sch1CP_Day)));

            /* DataStoreWrite: '<S960>/Data Store Write1' incorporates:
             *  Inport: '<Root>/VeCITR_K_TBM_Sch3_Start_Time_Min'
             */
            (void)Rte_Read_VeCITR_K_TBM_Sch3_Start_Time_Min_Value
                ((&(FeSCPR_e_Sch1CP_DepMin)));

            /* DataStoreWrite: '<S960>/Data Store Write' incorporates:
             *  Inport: '<Root>/VeCITR_K_TBM_Sch3_Start_Time_Hr'
             */
            (void)Rte_Read_VeCITR_K_TBM_Sch3_Start_Time_Hr_Value
                ((&(FeSCPR_e_Sch1CP_DepHr)));

            /* End of Outputs for SubSystem: '<S955>/TBM_Sch1_CP' */

            /* Switch: '<S800>/Switch1' */
            if (tmpRead_24)
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch1_CP' incorporates:
                 *  ActionPort: '<S960>/Action Port'
                 */
                /* DataStoreWrite: '<S960>/Data Store Write9' incorporates:
                 *  Constant: '<S796>/Calib'
                 */
                FeSCPR_e_Sch1CP_Allow = KeSCPR_e_SchCPAllow_Default;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch1_CP' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch1_CP' incorporates:
                 *  ActionPort: '<S960>/Action Port'
                 */
                /* DataStoreWrite: '<S960>/Data Store Write9' incorporates:
                 *  Inport: '<Root>/VeCITR_e_TBM_Sch3_Allow'
                 */
                FeSCPR_e_Sch1CP_Allow = tmpRead_23;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch1_CP' */
            }

            /* End of Switch: '<S800>/Switch1' */

            /* Switch: '<S800>/Switch78' incorporates:
             *  Logic: '<S800>/Logical6'
             */
            if (tmpRead_25 || rtb_RelatonalOperator2_idx_2)
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch1_CP' incorporates:
                 *  ActionPort: '<S960>/Action Port'
                 */
                /* DataStoreWrite: '<S960>/Data Store Write2' incorporates:
                 *  Constant: '<S795>/Calib'
                 */
                FeSCPR_T_Sch1CP_DepTemp = KeSCPR_T_SchTemp_Default;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch1_CP' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch1_CP' incorporates:
                 *  ActionPort: '<S960>/Action Port'
                 */
                /* DataStoreWrite: '<S960>/Data Store Write2' */
                FeSCPR_T_Sch1CP_DepTemp = Merge13;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch1_CP' */
            }

            /* End of Switch: '<S800>/Switch78' */
        }
    }

    /* End of If: '<S955>/If1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_AllowFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_AllowFA_Value(&tmpRead_2d);

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_TemperatureFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_TemperatureFA_Value(&tmpRead_2c);

    /* Inport: '<Root>/VeCITR_b_TBM_Sch4_TemperatureFA' */
    (void)Rte_Read_VeCITR_b_TBM_Sch4_TemperatureFA_Value(&tmpRead_29);

    /* Inport: '<Root>/VeCITR_T_TBM_Sch4_Temperature' */
    (void)Rte_Read_VeCITR_T_TBM_Sch4_Temperature_Value(&tmpRead_28);

    /* Inport: '<Root>/VeCITR_b_TBM_Sch4_AllowFA' */
    (void)Rte_Read_VeCITR_b_TBM_Sch4_AllowFA_Value(&tmpRead_27);

    /* Inport: '<Root>/VeCITR_e_TBM_Sch4_Allow' */
    (void)Rte_Read_VeCITR_e_TBM_Sch4_Allow_Value(&tmpRead_26);

    /* Inport: '<S6>/TBM_Sch4_Submit' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBM_Sch4_Submit'
     */
    (void)Rte_Read_VeCITR_b_TBM_Sch4_Submit_Value(&SCPR_ac_B.TBM_Sch4_Submit);

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_Enbl' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_Enbl_Value(&tmpRead_x);

    /* Inport: '<Root>/VeCITR_K_HU_Sch4_Day' */
    (void)Rte_Read_VeCITR_K_HU_Sch4_Day_Value(&tmpRead_w);

    /* Inport: '<Root>/VeCITR_T_HU_Sch4_Temperature' */
    (void)Rte_Read_VeCITR_T_HU_Sch4_Temperature_Value(&tmpRead_v);

    /* Inport: '<Root>/VeCITR_e_HU_Sch4_Allow' */
    (void)Rte_Read_VeCITR_e_HU_Sch4_Allow_Value(&tmpRead_u);

    /* Inport: '<Root>/VeCITR_K_HU_Sch4_Start_Time_Min' */
    (void)Rte_Read_VeCITR_K_HU_Sch4_Start_Time_Min_Value(&tmpRead_t);

    /* Inport: '<Root>/VeCITR_K_HU_Sch4_Start_Time_Hr' */
    (void)Rte_Read_VeCITR_K_HU_Sch4_Start_Time_Hr_Value(&tmpRead_s);

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_Submit' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_Submit_Value(&tmpRead_r);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Switch: '<S813>/Switch31' incorporates:
     *  Constant: '<S953>/Calib'
     *  Switch: '<S813>/Switch19'
     *  Switch: '<S813>/Switch33'
     *  Switch: '<S813>/Switch34'
     *  Switch: '<S813>/Switch45'
     */
    if (KeSCPR_b_HU_Sch4_Ovrd)
    {
        /* Switch: '<S813>/Switch31' incorporates:
         *  Constant: '<S954>/Calib'
         */
        VeSCPR_b_HUSch2CP_Sub = KeSCPR_b_HU_Sch4_Sub_OvrdVal;

        /* Switch: '<S813>/Switch33' incorporates:
         *  Constant: '<S949>/Calib'
         */
        VeSCPR_K_HUSch2CP_StrtHr = KeSCPR_K_HU_Sch4StartHr_OvrdVal;

        /* Switch: '<S813>/Switch34' incorporates:
         *  Constant: '<S950>/Calib'
         */
        VeSCPR_K_HUSch2CP_StrtMin = KeSCPR_K_HU_Sch4StartMin_OvrdVal;

        /* Switch: '<S813>/Switch45' incorporates:
         *  Constant: '<S951>/Calib'
         */
        VeSCPR_K_HUSch2CP_Day = KeSCPR_K_HU_Sch4_Day_OvrdVal;

        /* Switch: '<S813>/Switch19' incorporates:
         *  Constant: '<S952>/Calib'
         */
        VeSCPR_b_HUSch2CP_Enbl = KeSCPR_b_HU_Sch4_Enbl_OvrdVal;
    }
    else
    {
        /* Switch: '<S813>/Switch31' */
        VeSCPR_b_HUSch2CP_Sub = tmpRead_r;

        /* Switch: '<S813>/Switch33' */
        VeSCPR_K_HUSch2CP_StrtHr = tmpRead_s;

        /* Switch: '<S813>/Switch34' */
        VeSCPR_K_HUSch2CP_StrtMin = tmpRead_t;

        /* Switch: '<S813>/Switch45' */
        VeSCPR_K_HUSch2CP_Day = tmpRead_w;

        /* Switch: '<S813>/Switch19' */
        VeSCPR_b_HUSch2CP_Enbl = tmpRead_x;
    }

    /* End of Switch: '<S813>/Switch31' */

    /* Switch: '<S813>/Switch1' incorporates:
     *  Constant: '<S953>/Calib'
     *  Logic: '<S813>/Logical1'
     */
    if ((KeSCPR_b_HU_Sch4_Ovrd) || tmpRead_2d)
    {
        /* Switch: '<S813>/Switch1' incorporates:
         *  Constant: '<S796>/Calib'
         */
        VeSCPR_e_HUSch2CP_Allow = KeSCPR_e_SchCPAllow_Default;
    }
    else
    {
        /* Switch: '<S813>/Switch1' incorporates:
         *  Inport: '<Root>/VeCITR_e_HU_Sch4_Allow'
         */
        VeSCPR_e_HUSch2CP_Allow = tmpRead_u;
    }

    /* End of Switch: '<S813>/Switch1' */

    /* Switch: '<S813>/Switch44' incorporates:
     *  Constant: '<S953>/Calib'
     *  Logic: '<S813>/Logical6'
     */
    if (((KeSCPR_b_HU_Sch4_Ovrd) || tmpRead_2c) || rtb_RelatonalOperator2_idx_2)
    {
        /* Switch: '<S813>/Switch44' incorporates:
         *  Constant: '<S795>/Calib'
         */
        VeSCPR_T_HUSch2CP_Temp = KeSCPR_T_SchTemp_Default;
    }
    else
    {
        /* Switch: '<S813>/Switch44' */
        VeSCPR_T_HUSch2CP_Temp = tmpRead_v;
    }

    /* End of Switch: '<S813>/Switch44' */

    /* If: '<S955>/If2' incorporates:
     *  Logic: '<S955>/Logical6'
     *  Logic: '<S955>/Logical7'
     */
    if (VeSCPR_b_HUSch2CP_Sub)
    {
        /* Outputs for IfAction SubSystem: '<S955>/HU_Sch2_CP' incorporates:
         *  ActionPort: '<S959>/Action Port'
         */
        /* DataStoreWrite: '<S959>/Data Store Write' */
        FeSCPR_e_Sch2CP_DepHr = VeSCPR_K_HUSch2CP_StrtHr;

        /* DataStoreWrite: '<S959>/Data Store Write1' */
        FeSCPR_e_Sch2CP_DepMin = VeSCPR_K_HUSch2CP_StrtMin;

        /* DataStoreWrite: '<S959>/Data Store Write4' */
        FeSCPR_y_Sch2CP_Day = VeSCPR_K_HUSch2CP_Day;

        /* DataStoreWrite: '<S959>/Data Store Write5' */
        FeSCPR_b_Sch2CP_Enbl = VeSCPR_b_HUSch2CP_Enbl;

        /* DataStoreWrite: '<S959>/Data Store Write9' incorporates:
         *  Switch: '<S813>/Switch1'
         */
        FeSCPR_e_Sch2CP_Allow = VeSCPR_e_HUSch2CP_Allow;

        /* DataStoreWrite: '<S959>/Data Store Write2' */
        FeSCPR_T_Sch2CP_DepTemp = VeSCPR_T_HUSch2CP_Temp;

        /* End of Outputs for SubSystem: '<S955>/HU_Sch2_CP' */
    }
    else
    {
        if ((!VeSCPR_b_HUSch2CP_Sub) && (SCPR_ac_B.TBM_Sch4_Submit))
        {
            /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch2_CP' incorporates:
             *  ActionPort: '<S961>/Action Port'
             */
            /* DataStoreWrite: '<S961>/Data Store Write5' incorporates:
             *  Inport: '<Root>/VeCITR_b_TBM_Sch4_Enbl'
             */
            (void)Rte_Read_VeCITR_b_TBM_Sch4_Enbl_Value((&(FeSCPR_b_Sch2CP_Enbl)));

            /* DataStoreWrite: '<S961>/Data Store Write4' incorporates:
             *  Inport: '<Root>/VeCITR_K_TBM_Sch4_Day'
             */
            (void)Rte_Read_VeCITR_K_TBM_Sch4_Day_Value((&(FeSCPR_y_Sch2CP_Day)));

            /* DataStoreWrite: '<S961>/Data Store Write' incorporates:
             *  Inport: '<Root>/VeCITR_K_TBM_Sch4_Start_Time_Hr'
             */
            (void)Rte_Read_VeCITR_K_TBM_Sch4_Start_Time_Hr_Value
                ((&(FeSCPR_e_Sch2CP_DepHr)));

            /* DataStoreWrite: '<S961>/Data Store Write1' incorporates:
             *  Inport: '<Root>/VeCITR_K_TBM_Sch4_Start_Time_Min'
             */
            (void)Rte_Read_VeCITR_K_TBM_Sch4_Start_Time_Min_Value
                ((&(FeSCPR_e_Sch2CP_DepMin)));

            /* End of Outputs for SubSystem: '<S955>/TBM_Sch2_CP' */

            /* Switch: '<S800>/Switch2' */
            if (tmpRead_27)
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch2_CP' incorporates:
                 *  ActionPort: '<S961>/Action Port'
                 */
                /* DataStoreWrite: '<S961>/Data Store Write9' incorporates:
                 *  Constant: '<S796>/Calib'
                 */
                FeSCPR_e_Sch2CP_Allow = KeSCPR_e_SchCPAllow_Default;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch2_CP' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch2_CP' incorporates:
                 *  ActionPort: '<S961>/Action Port'
                 */
                /* DataStoreWrite: '<S961>/Data Store Write9' incorporates:
                 *  Inport: '<Root>/VeCITR_e_TBM_Sch4_Allow'
                 */
                FeSCPR_e_Sch2CP_Allow = tmpRead_26;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch2_CP' */
            }

            /* End of Switch: '<S800>/Switch2' */

            /* Switch: '<S800>/Switch3' incorporates:
             *  Logic: '<S800>/Logical3'
             */
            if (tmpRead_29 || rtb_RelatonalOperator2_idx_2)
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch2_CP' incorporates:
                 *  ActionPort: '<S961>/Action Port'
                 */
                /* DataStoreWrite: '<S961>/Data Store Write2' incorporates:
                 *  Constant: '<S795>/Calib'
                 */
                FeSCPR_T_Sch2CP_DepTemp = KeSCPR_T_SchTemp_Default;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch2_CP' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S955>/TBM_Sch2_CP' incorporates:
                 *  ActionPort: '<S961>/Action Port'
                 */
                /* DataStoreWrite: '<S961>/Data Store Write2' */
                FeSCPR_T_Sch2CP_DepTemp = tmpRead_28;

                /* End of Outputs for SubSystem: '<S955>/TBM_Sch2_CP' */
            }

            /* End of Switch: '<S800>/Switch3' */
        }
    }

    /* End of If: '<S955>/If2' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */

    /* Inport: '<Root>/VeTIMR_e_RacePrep' */
    (void)Rte_Read_VeTIMR_e_RacePrep_Value(&tmpRead_2l);

    /* Inport: '<Root>/VeTPCR_b_RacePrepEVSysStatus' */
    (void)Rte_Read_VeTPCR_b_RacePrepEVSysStatus_Value(&tmpRead_2k);

    /* Inport: '<Root>/VeTPCR_b_RacePrepAmbCheck' */
    (void)Rte_Read_VeTPCR_b_RacePrepAmbCheck_Value(&tmpRead_2j);

    /* Inport: '<S6>/TBM_StopCharge_In' incorporates:
     *  Inport: '<Root>/VeCITR_b_TBMStopChrg'
     */
    (void)Rte_Read_VeCITR_b_TBMStopChrg_Value(&SCPR_ac_B.TBM_StopCharge_In);

    /* Inport: '<S6>/DisplaySOC_In' incorporates:
     *  Inport: '<Root>/VeHMIR_Pct_HVBatSOC_HCP'
     */
    (void)Rte_Read_VeHMIR_Pct_HVBatSOC_HCP_Value(&SCPR_ac_B.DisplaySOC_In);

    /* Inport: '<S6>/TBM_Vehicle_Location_In' incorporates:
     *  Inport: '<Root>/VeCITR_b_CoopCh_VehLocation'
     */
    (void)Rte_Read_VeCITR_b_CoopCh_VehLocation_Value
        (&SCPR_ac_B.TBM_Vehicle_Location_In);

    /* Inport: '<S6>/TBM_CoopCh_ChargeCmd_In' incorporates:
     *  Inport: '<Root>/VeCITR_e_CoopCh_ChrgCmd'
     */
    (void)Rte_Read_VeCITR_e_CoopCh_ChrgCmd_Value
        (&SCPR_ac_B.TBM_CoopCh_ChargeCmd_In);

    /* Inport: '<Root>/VeCITR_e_FOTA_Install_Status' */
    (void)Rte_Read_VeCITR_e_FOTA_Install_Status_Value(&tmpRead_2h);

    /* Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF' */
    (void)Rte_Read_VeOBCR_e_ChrgSysStat_SF_Value(&tmpRead_2g);

    /* Inport: '<Root>/VeOBCR_I_ChrgCurrEstSOC' */
    (void)Rte_Read_VeOBCR_I_ChrgCurrEstSOC_Value(&tmpRead_2e);

    /* Inport: '<Root>/VeCITR_b_TBM_ChargeNow' */
    (void)Rte_Read_VeCITR_b_TBM_ChargeNow_Value(&tmpRead_22);

    /* Inport: '<Root>/VeOBCR_I_MaxAllowedCurr' */
    (void)Rte_Read_VeOBCR_I_MaxAllowedCurr_Value(&tmpRead_21);

    /* Inport: '<Root>/VeSSDR_b_CabPrecDny_BattCond' */
    (void)Rte_Read_VeSSDR_b_CabPrecDny_BattCond_Value(&tmpRead_20);

    /* Inport: '<Root>/VeOBCR_e_ChargeType' */
    (void)Rte_Read_VeOBCR_e_ChargeType_Value(&tmpRead_1z);

    /* Inport: '<Root>/VeOBCR_b_ChrgSysFault' */
    (void)Rte_Read_VeOBCR_b_ChrgSysFault_Value(&tmpRead_1y);

    /* Inport: '<Root>/VeSSDR_b_HV_PerWU_CabinPre' */
    (void)Rte_Read_VeSSDR_b_HV_PerWU_CabinPre_Value(&tmpRead_1x);

    /* Inport: '<Root>/VeCITR_e_RRM_VP_Level' */
    (void)Rte_Read_VeCITR_e_RRM_VP_Level_Value(&tmpRead_1w);

    /* Inport: '<Root>/VeBPCR_q_FullAmpHrCap' */
    (void)Rte_Read_VeBPCR_q_FullAmpHrCap_Value(&tmpRead_1v);

    /* Inport: '<Root>/VeIDCR_I_ChrgCrntAvail' */
    (void)Rte_Read_VeIDCR_I_ChrgCrntAvail_Value(&tmpRead_1u);

    /* Inport: '<Root>/VePLTR_t_RTC_CurrentTime' */
    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value(&tmpRead_1t);

    /* Inport: '<Root>/VeCITR_e_DoorLockLastElSts' */
    (void)Rte_Read_VeCITR_e_DoorLockLastElSts_Value(&tmpRead_1s);

    /* Inport: '<Root>/VeCITR_b_ChrgPortButton_Sts' */
    (void)Rte_Read_VeCITR_b_ChrgPortButton_Sts_Value(&tmpRead_1r);

    /* Inport: '<Root>/VeCITR_b_ChargeNow' */
    (void)Rte_Read_VeCITR_b_ChargeNow_Value(&tmpRead_1q);

    /* Inport: '<Root>/VePLTR_b_ChargeReq' */
    (void)Rte_Read_VePLTR_b_ChargeReq_Value(&tmpRead_1p);

    /* Inport: '<Root>/VePLTR_b_ChargeReqSgnlRcvd' */
    (void)Rte_Read_VePLTR_b_ChargeReqSgnlRcvd_Value(&tmpRead_1o);

    /* Inport: '<Root>/VeOBCR_e_ChargingLevel' */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&tmpRead_1n);

    /* Inport: '<Root>/VeTHMR_b_RdyForShtDwn' */
    (void)Rte_Read_VeTHMR_b_RdyForShtDwn_Value(&tmpRead_1m);

    /* Inport: '<Root>/VeSSDR_b_HVBatPerWUThermal' */
    (void)Rte_Read_VeSSDR_b_HVBatPerWUThermal_Value(&tmpRead_1l);

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(&tmpRead_1k);

    /* Inport: '<Root>/VeOBCR_b_SmartEvse_Dtctd' */
    (void)Rte_Read_VeOBCR_b_SmartEvse_Dtctd_Value(&tmpRead_1j);

    /* Inport: '<Root>/VePMDR_e_PMM_PowerMode' */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value(&tmpRead_1i);

    /* Inport: '<Root>/VeOBCR_b_PluggedIn' */
    (void)Rte_Read_VeOBCR_b_PluggedIn_Value(&tmpRead_1h);

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead_1g);

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_MinFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_Start_Time_MinFA_Value(&tmpRead_1f);

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_Start_Time_HrFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_Start_Time_HrFA_Value(&tmpRead_1e);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_MinFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_Start_Time_MinFA_Value(&tmpRead_1d);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_Start_Time_HrFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_Start_Time_HrFA_Value(&tmpRead_1c);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_End_Time_MinFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_End_Time_MinFA_Value(&tmpRead_1b);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_End_Time_HrFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_End_Time_HrFA_Value(&tmpRead_1a);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_MinFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_Start_Time_MinFA_Value(&tmpRead_19);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_Start_Time_HrFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_Start_Time_HrFA_Value(&tmpRead_18);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_End_Time_MinFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_End_Time_MinFA_Value(&tmpRead_17);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_End_Time_HrFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_End_Time_HrFA_Value(&tmpRead_16);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_MinFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_Start_Time_MinFA_Value(&tmpRead_15);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_Start_Time_HrFA' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_Start_Time_HrFA_Value(&tmpRead_14);

    /* Inport: '<Root>/VeCITR_b_HU_Sch4_Day_FA' */
    (void)Rte_Read_VeCITR_b_HU_Sch4_Day_FA_Value(&tmpRead_13);

    /* Inport: '<Root>/VeCITR_b_HU_Sch3_Day_FA' */
    (void)Rte_Read_VeCITR_b_HU_Sch3_Day_FA_Value(&tmpRead_12);

    /* Inport: '<Root>/VeCITR_b_HU_Sch2_Day_FA' */
    (void)Rte_Read_VeCITR_b_HU_Sch2_Day_FA_Value(&tmpRead_11);

    /* Inport: '<Root>/VeCITR_b_HU_Sch1_Day_FA' */
    (void)Rte_Read_VeCITR_b_HU_Sch1_Day_FA_Value(&tmpRead_10);

    /* Inport: '<Root>/VeCITR_b_Date_Day1_SgnlRcvd' */
    (void)Rte_Read_VeCITR_b_Date_Day1_SgnlRcvd_Value(&tmpRead_z);

    /* Inport: '<Root>/VeCITR_b_Date_Day1_FA' */
    (void)Rte_Read_VeCITR_b_Date_Day1_FA_Value(&tmpRead_y);

    /* Inport: '<Root>/VeCITR_K_DateTmSec' */
    (void)Rte_Read_VeCITR_K_DateTmSec_Value(&tmpRead_i);

    /* Inport: '<Root>/VeCITR_K_DateTmMin' */
    (void)Rte_Read_VeCITR_K_DateTmMin_Value(&tmpRead_h);

    /* Inport: '<Root>/VeCITR_K_DateTmHour' */
    (void)Rte_Read_VeCITR_K_DateTmHour_Value(&tmpRead_g);

    /* Inport: '<Root>/VeCITR_K_DateTmYear' */
    (void)Rte_Read_VeCITR_K_DateTmYear_Value(&tmpRead_f);

    /* Inport: '<Root>/VeCITR_K_DateTmMon' */
    (void)Rte_Read_VeCITR_K_DateTmMon_Value(&tmpRead_e);

    /* Inport: '<Root>/VeCITR_b_DateTmDay_SgnlRcvd' */
    (void)Rte_Read_VeCITR_b_DateTmDay_SgnlRcvd_Value(&tmpRead_d);

    /* Inport: '<Root>/VeCITR_b_DateTmDay_FA' */
    (void)Rte_Read_VeCITR_b_DateTmDay_FA_Value(&tmpRead_c);

    /* Inport: '<Root>/VeCITR_K_DateTmDay' */
    (void)Rte_Read_VeCITR_K_DateTmDay_Value(&tmpRead_b);

    /* Inport: '<Root>/VeCITR_K_Date_Year4' */
    (void)Rte_Read_VeCITR_K_Date_Year4_Value(&tmpRead_a);

    /* Inport: '<Root>/VeCITR_K_Date_Year3' */
    (void)Rte_Read_VeCITR_K_Date_Year3_Value(&tmpRead_9);

    /* Inport: '<Root>/VeCITR_K_Date_Year2' */
    (void)Rte_Read_VeCITR_K_Date_Year2_Value(&tmpRead_8);

    /* Inport: '<Root>/VeCITR_K_Date_Year1' */
    (void)Rte_Read_VeCITR_K_Date_Year1_Value(&tmpRead_7);

    /* Inport: '<Root>/VeCITR_K_Date_Month2' */
    (void)Rte_Read_VeCITR_K_Date_Month2_Value(&tmpRead_6);

    /* Inport: '<Root>/VeCITR_K_Date_Month1' */
    (void)Rte_Read_VeCITR_K_Date_Month1_Value(&tmpRead_5);

    /* Inport: '<Root>/VeCITR_K_Date_Day2' */
    (void)Rte_Read_VeCITR_K_Date_Day2_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCITR_K_Date_Day1' */
    (void)Rte_Read_VeCITR_K_Date_Day1_Value(&tmpRead_3);

    /* Inport: '<Root>/VeCITR_K_Time_Hour2' */
    (void)Rte_Read_VeCITR_K_Time_Hour2_Value(&tmpRead_2);

    /* Inport: '<Root>/VeCITR_K_Time_Hour1' */
    (void)Rte_Read_VeCITR_K_Time_Hour1_Value(&tmpRead_1);

    /* Inport: '<Root>/VeCITR_K_Time_Minute2' */
    (void)Rte_Read_VeCITR_K_Time_Minute2_Value(&tmpRead_0);

    /* Inport: '<Root>/VeCITR_K_Time_Minute1' */
    (void)Rte_Read_VeCITR_K_Time_Minute1_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Switch: '<S807>/Switch1' incorporates:
     *  Constant: '<S834>/Calib'
     *  Switch: '<S807>/Switch10'
     *  Switch: '<S807>/Switch100'
     *  Switch: '<S807>/Switch101'
     *  Switch: '<S807>/Switch102'
     *  Switch: '<S807>/Switch103'
     *  Switch: '<S807>/Switch11'
     *  Switch: '<S807>/Switch2'
     *  Switch: '<S807>/Switch24'
     *  Switch: '<S807>/Switch3'
     *  Switch: '<S807>/Switch4'
     *  Switch: '<S807>/Switch5'
     *  Switch: '<S807>/Switch6'
     *  Switch: '<S807>/Switch7'
     *  Switch: '<S807>/Switch8'
     *  Switch: '<S807>/Switch9'
     *  Switch: '<S807>/Switch96'
     *  Switch: '<S807>/Switch97'
     *  Switch: '<S807>/Switch98'
     *  Switch: '<S807>/Switch99'
     */
    if (KeSCPR_b_DateTm_Ovrd)
    {
        /* Switch: '<S807>/Switch1' incorporates:
         *  Constant: '<S831>/Calib'
         */
        VeSCPR_K_Time_Minute2 = KeSCPR_K_Time_Minute2_OvrdVal;

        /* Switch: '<S807>/Switch10' incorporates:
         *  Constant: '<S826>/Calib'
         */
        VeSCPR_K_Date_Year3 = KeSCPR_K_Date_Year3_OvrdVal;

        /* Switch: '<S807>/Switch100' incorporates:
         *  Constant: '<S819>/Calib'
         */
        VeSCPR_K_DateTmYear = KeSCPR_K_DateTmYear_OvrdVal;

        /* Switch: '<S807>/Switch101' incorporates:
         *  Constant: '<S816>/Calib'
         */
        VeSCPR_K_DateTmMin = KeSCPR_K_DateTmMin_OvrdVal;

        /* Switch: '<S807>/Switch102' incorporates:
         *  Constant: '<S818>/Calib'
         */
        VeSCPR_K_DateTmSec = KeSCPR_K_DateTmSec_OvrdVal;

        /* Switch: '<S807>/Switch103' incorporates:
         *  Constant: '<S815>/Calib'
         */
        VeSCPR_K_DateTmHour = KeSCPR_K_DateTmHour_OvrdVal;

        /* Switch: '<S807>/Switch11' incorporates:
         *  Constant: '<S827>/Calib'
         */
        VeSCPR_K_Date_Year4 = KeSCPR_K_Date_Year4_OvrdVal;

        /* Switch: '<S807>/Switch2' incorporates:
         *  Constant: '<S829>/Calib'
         */
        VeSCPR_K_Time_Hour2 = KeSCPR_K_Time_Hour2_OvrdVal;

        /* Switch: '<S807>/Switch24' incorporates:
         *  Constant: '<S830>/Calib'
         */
        VeSCPR_K_Time_Minute1 = KeSCPR_K_Time_Minute1_OvrdVal;

        /* Switch: '<S807>/Switch3' incorporates:
         *  Constant: '<S828>/Calib'
         */
        VeSCPR_K_Time_Hour1 = KeSCPR_K_Time_Hour1_OvrdVal;

        /* Switch: '<S807>/Switch4' incorporates:
         *  Constant: '<S821>/Calib'
         */
        VeSCPR_K_Date_Day2 = KeSCPR_K_Date_Day2_OvrdVal;

        /* Switch: '<S807>/Switch5' incorporates:
         *  Constant: '<S820>/Calib'
         */
        VeSCPR_K_Date_Day1 = KeSCPR_K_Date_Day1_OvrdVal;

        /* Switch: '<S807>/Switch6' incorporates:
         *  Constant: '<S822>/Calib'
         */
        VeSCPR_K_Date_Month1 = KeSCPR_K_Date_Month1_OvrdVal;

        /* Switch: '<S807>/Switch7' incorporates:
         *  Constant: '<S823>/Calib'
         */
        VeSCPR_K_Date_Month2 = KeSCPR_K_Date_Month2_OvrdVal;

        /* Switch: '<S807>/Switch8' incorporates:
         *  Constant: '<S824>/Calib'
         */
        VeSCPR_K_Date_Year1 = KeSCPR_K_Date_Year1_OvrdVal;

        /* Switch: '<S807>/Switch9' incorporates:
         *  Constant: '<S825>/Calib'
         */
        VeSCPR_K_Date_Year2 = KeSCPR_K_Date_Year2_OvrdVal;

        /* Switch: '<S807>/Switch96' incorporates:
         *  Constant: '<S832>/Calib'
         */
        VeSCPR_b_DateTmDay_FA = KeSCPR_b_DateTmDayFA_OvrdVal;

        /* Switch: '<S807>/Switch97' incorporates:
         *  Constant: '<S817>/Calib'
         */
        VeSCPR_K_DateTmMon = KeSCPR_K_DateTmMon_OvrdVal;

        /* Switch: '<S807>/Switch98' incorporates:
         *  Constant: '<S814>/Calib'
         */
        VeSCPR_K_DateTmDay = KeSCPR_K_DateTmDay_OvrdVal;

        /* Switch: '<S807>/Switch99' incorporates:
         *  Constant: '<S833>/Calib'
         */
        VeSCPR_b_DateTmDay_SgnlRcvd = KeSCPR_b_DateTmDayRcvd_OvrdVal;
    }
    else
    {
        /* Switch: '<S807>/Switch1' */
        VeSCPR_K_Time_Minute2 = tmpRead_0;

        /* Switch: '<S807>/Switch10' */
        VeSCPR_K_Date_Year3 = tmpRead_9;

        /* Switch: '<S807>/Switch100' */
        VeSCPR_K_DateTmYear = tmpRead_f;

        /* Switch: '<S807>/Switch101' */
        VeSCPR_K_DateTmMin = tmpRead_h;

        /* Switch: '<S807>/Switch102' */
        VeSCPR_K_DateTmSec = tmpRead_i;

        /* Switch: '<S807>/Switch103' */
        VeSCPR_K_DateTmHour = tmpRead_g;

        /* Switch: '<S807>/Switch11' */
        VeSCPR_K_Date_Year4 = tmpRead_a;

        /* Switch: '<S807>/Switch2' */
        VeSCPR_K_Time_Hour2 = tmpRead_2;

        /* Switch: '<S807>/Switch24' */
        VeSCPR_K_Time_Minute1 = tmpRead;

        /* Switch: '<S807>/Switch3' */
        VeSCPR_K_Time_Hour1 = tmpRead_1;

        /* Switch: '<S807>/Switch4' */
        VeSCPR_K_Date_Day2 = tmpRead_4;

        /* Switch: '<S807>/Switch5' */
        VeSCPR_K_Date_Day1 = tmpRead_3;

        /* Switch: '<S807>/Switch6' */
        VeSCPR_K_Date_Month1 = tmpRead_5;

        /* Switch: '<S807>/Switch7' */
        VeSCPR_K_Date_Month2 = tmpRead_6;

        /* Switch: '<S807>/Switch8' */
        VeSCPR_K_Date_Year1 = tmpRead_7;

        /* Switch: '<S807>/Switch9' */
        VeSCPR_K_Date_Year2 = tmpRead_8;

        /* Switch: '<S807>/Switch96' */
        VeSCPR_b_DateTmDay_FA = tmpRead_c;

        /* Switch: '<S807>/Switch97' */
        VeSCPR_K_DateTmMon = tmpRead_e;

        /* Switch: '<S807>/Switch98' */
        VeSCPR_K_DateTmDay = tmpRead_b;

        /* Switch: '<S807>/Switch99' */
        VeSCPR_b_DateTmDay_SgnlRcvd = tmpRead_d;
    }

    /* End of Switch: '<S807>/Switch1' */

    /* Switch: '<S808>/Switch46' incorporates:
     *  Constant: '<S837>/Calib'
     */
    if (KeSCPR_b_Date_Day1_FA_Ovrd)
    {
        /* Switch: '<S808>/Switch46' incorporates:
         *  Constant: '<S838>/Calib'
         */
        VeSCPR_b_DateDay1_FA = KeSCPR_b_Date_Day1_FA_OvrdVal;
    }
    else
    {
        /* Switch: '<S808>/Switch46' */
        VeSCPR_b_DateDay1_FA = tmpRead_y;
    }

    /* End of Switch: '<S808>/Switch46' */

    /* Switch: '<S808>/Switch47' incorporates:
     *  Constant: '<S835>/Calib'
     */
    if (KeSCPR_b_Date_Day1SgnlRcvd_Ovrd)
    {
        /* Switch: '<S808>/Switch47' incorporates:
         *  Constant: '<S836>/Calib'
         */
        VeSCPR_b_DateDay1_SgnlRcvd = KeSCPR_b_Date_Day1SgnlRcvd_OvrdVal;
    }
    else
    {
        /* Switch: '<S808>/Switch47' */
        VeSCPR_b_DateDay1_SgnlRcvd = tmpRead_z;
    }

    /* End of Switch: '<S808>/Switch47' */

    /* Switch: '<S808>/Switch73' incorporates:
     *  Constant: '<S843>/Calib'
     */
    if (KeSCPR_b_Sch1_StartTimeHrFA_Ovrd)
    {
        /* Switch: '<S808>/Switch73' incorporates:
         *  Constant: '<S844>/Calib'
         */
        VeSCPR_b_HUSch1CHStrt_HrFA = KeSCPR_b_Sch1_StartTimeHrFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch73' */
        VeSCPR_b_HUSch1CHStrt_HrFA = tmpRead_14;
    }

    /* End of Switch: '<S808>/Switch73' */

    /* Switch: '<S808>/Switch79' incorporates:
     *  Constant: '<S845>/Calib'
     */
    if (KeSCPR_b_Sch1_StartTimeMinFA_Ovrd)
    {
        /* Switch: '<S808>/Switch79' incorporates:
         *  Constant: '<S846>/Calib'
         */
        VeSCPR_b_HUSch1CH_StrtMinFA = KeSCPR_b_Sch1_StartTimeMinFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch79' */
        VeSCPR_b_HUSch1CH_StrtMinFA = tmpRead_15;
    }

    /* End of Switch: '<S808>/Switch79' */

    /* Switch: '<S808>/Switch80' incorporates:
     *  Constant: '<S839>/Calib'
     */
    if (KeSCPR_b_Sch1_EndTimeHrFA_Ovrd)
    {
        /* Switch: '<S808>/Switch80' incorporates:
         *  Constant: '<S840>/Calib'
         */
        VeSCPR_b_HUSch1CH_EndHrFA = KeSCPR_b_Sch1_EndTimeHrFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch80' */
        VeSCPR_b_HUSch1CH_EndHrFA = tmpRead_16;
    }

    /* End of Switch: '<S808>/Switch80' */

    /* Switch: '<S808>/Switch81' incorporates:
     *  Constant: '<S841>/Calib'
     */
    if (KeSCPR_b_Sch1_EndTimeMinFA_Ovrd)
    {
        /* Switch: '<S808>/Switch81' incorporates:
         *  Constant: '<S842>/Calib'
         */
        VeSCPR_b_HUSch1CH_EndMinFA = KeSCPR_b_Sch1_EndTimeMinFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch81' */
        VeSCPR_b_HUSch1CH_EndMinFA = tmpRead_17;
    }

    /* End of Switch: '<S808>/Switch81' */

    /* Switch: '<S808>/Switch83' incorporates:
     *  Constant: '<S851>/Calib'
     */
    if (KeSCPR_b_Sch2_StartTimeHrFA_Ovrd)
    {
        /* Switch: '<S808>/Switch83' incorporates:
         *  Constant: '<S852>/Calib'
         */
        VeSCPR_b_HUSch2CH_StrtHrFA = KeSCPR_b_Sch2_StartTimeHrFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch83' */
        VeSCPR_b_HUSch2CH_StrtHrFA = tmpRead_18;
    }

    /* End of Switch: '<S808>/Switch83' */

    /* Switch: '<S808>/Switch84' incorporates:
     *  Constant: '<S853>/Calib'
     */
    if (KeSCPR_b_Sch2_StartTimeMinFA_Ovrd)
    {
        /* Switch: '<S808>/Switch84' incorporates:
         *  Constant: '<S854>/Calib'
         */
        VeSCPR_b_HUSch2CH_StrtMinFA = KeSCPR_b_Sch2_StartTimeMinFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch84' */
        VeSCPR_b_HUSch2CH_StrtMinFA = tmpRead_19;
    }

    /* End of Switch: '<S808>/Switch84' */

    /* Switch: '<S808>/Switch85' incorporates:
     *  Constant: '<S847>/Calib'
     */
    if (KeSCPR_b_Sch2_EndTimeHrFA_Ovrd)
    {
        /* Switch: '<S808>/Switch85' incorporates:
         *  Constant: '<S848>/Calib'
         */
        VeSCPR_b_HUSch2CH_EndHrFA = KeSCPR_b_Sch2_EndTimeHrFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch85' */
        VeSCPR_b_HUSch2CH_EndHrFA = tmpRead_1a;
    }

    /* End of Switch: '<S808>/Switch85' */

    /* Switch: '<S808>/Switch86' incorporates:
     *  Constant: '<S849>/Calib'
     */
    if (KeSCPR_b_Sch2_EndTimeMinFA_Ovrd)
    {
        /* Switch: '<S808>/Switch86' incorporates:
         *  Constant: '<S850>/Calib'
         */
        VeSCPR_b_HUSch2CH_EndMinFA = KeSCPR_b_Sch2_EndTimeMinFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch86' */
        VeSCPR_b_HUSch2CH_EndMinFA = tmpRead_1b;
    }

    /* End of Switch: '<S808>/Switch86' */

    /* Logic: '<S808>/Logical1' */
    VeSCPR_b_HU_CHImplDataRcvd = ((((((((((VeSCPR_b_HUSch1CHStrt_HrFA) ||
        (VeSCPR_b_HUSch1CH_StrtMinFA)) || (VeSCPR_b_HUSch1CH_EndHrFA)) ||
        (VeSCPR_b_HUSch1CH_EndMinFA)) || (VeSCPR_b_HUSch2CH_StrtHrFA)) ||
        (VeSCPR_b_HUSch2CH_StrtMinFA)) || (VeSCPR_b_HUSch2CH_EndHrFA)) ||
        (VeSCPR_b_HUSch2CH_EndMinFA)) || tmpRead_10) || tmpRead_11);

    /* Switch: '<S808>/Switch88' incorporates:
     *  Constant: '<S859>/Calib'
     */
    if (KeSCPR_b_Sch3_StartTimeHrFA_Ovrd)
    {
        /* Switch: '<S808>/Switch88' incorporates:
         *  Constant: '<S860>/Calib'
         */
        VeSCPR_b_HUSch1CP_StrtHrFA = KeSCPR_b_Sch3_StartTimeHrFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch88' */
        VeSCPR_b_HUSch1CP_StrtHrFA = tmpRead_1c;
    }

    /* End of Switch: '<S808>/Switch88' */

    /* Switch: '<S808>/Switch89' incorporates:
     *  Constant: '<S861>/Calib'
     */
    if (KeSCPR_b_Sch3_StartTimeMinFA_Ovrd)
    {
        /* Switch: '<S808>/Switch89' incorporates:
         *  Constant: '<S862>/Calib'
         */
        VeSCPR_b_HUSch1CP_StrtMinFA = KeSCPR_b_Sch3_StartTimeMinFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch89' */
        VeSCPR_b_HUSch1CP_StrtMinFA = tmpRead_1d;
    }

    /* End of Switch: '<S808>/Switch89' */

    /* Switch: '<S808>/Switch90' incorporates:
     *  Constant: '<S855>/Calib'
     */
    if (KeSCPR_b_Sch3_EndTimeHrFA_Ovrd)
    {
        /* Switch: '<S808>/Switch90' incorporates:
         *  Constant: '<S856>/Calib'
         */
        VeSCPR_b_HUSch2CP_StrtHrFA = KeSCPR_b_Sch3_EndTimeHrFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch90' */
        VeSCPR_b_HUSch2CP_StrtHrFA = tmpRead_1e;
    }

    /* End of Switch: '<S808>/Switch90' */

    /* Switch: '<S808>/Switch91' incorporates:
     *  Constant: '<S857>/Calib'
     */
    if (KeSCPR_b_Sch3_EndTimeMinFA_Ovrd)
    {
        /* Switch: '<S808>/Switch91' incorporates:
         *  Constant: '<S858>/Calib'
         */
        VeSCPR_b_HUSch2CP_StrtMinFA = KeSCPR_b_Sch3_EndTimeMinFA_Val;
    }
    else
    {
        /* Switch: '<S808>/Switch91' */
        VeSCPR_b_HUSch2CP_StrtMinFA = tmpRead_1f;
    }

    /* End of Switch: '<S808>/Switch91' */

    /* Logic: '<S808>/Logical2' */
    VeSCPR_b_HU_CPImplDataRcvd = ((((((VeSCPR_b_HUSch1CP_StrtHrFA) ||
        (VeSCPR_b_HUSch1CP_StrtMinFA)) || (VeSCPR_b_HUSch2CP_StrtHrFA)) ||
        (VeSCPR_b_HUSch2CP_StrtMinFA)) || tmpRead_12) || tmpRead_13);

    /* Switch: '<S809>/Switch60' incorporates:
     *  Constant: '<S897>/Calib'
     */
    if (KeSCPR_b_OvrdEnblChrgSysSts)
    {
        /* Switch: '<S809>/Switch60' incorporates:
         *  Constant: '<S920>/Calib'
         */
        VeSCPR_e_ChargingSysSts = KeSCPR_e_OvrdValChrgSysSts;
    }
    else
    {
        /* Switch: '<S809>/Switch60' incorporates:
         *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
         */
        VeSCPR_e_ChargingSysSts = tmpRead_1g;
    }

    /* End of Switch: '<S809>/Switch60' */

    /* Switch: '<S809>/Switch61' incorporates:
     *  Constant: '<S902>/Calib'
     */
    if (KeSCPR_b_PluggedIn_Ovrd)
    {
        /* Switch: '<S809>/Switch61' incorporates:
         *  Constant: '<S903>/Calib'
         */
        VeSCPR_b_PluggedIn = KeSCPR_b_PluggedIn_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch61' */
        VeSCPR_b_PluggedIn = tmpRead_1h;
    }

    /* End of Switch: '<S809>/Switch61' */

    /* Switch: '<S809>/Switch62' incorporates:
     *  Constant: '<S898>/Calib'
     */
    if (KeSCPR_b_OvrdEnblKeySts)
    {
        /* Switch: '<S809>/Switch62' incorporates:
         *  Constant: '<S918>/Calib'
         */
        VeSCPR_e_PMM_PowerMode = KeSCPR_e_OvrdKeyStsVal;
    }
    else
    {
        /* Switch: '<S809>/Switch62' incorporates:
         *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
         */
        VeSCPR_e_PMM_PowerMode = tmpRead_1i;
    }

    /* End of Switch: '<S809>/Switch62' */

    /* Switch: '<S809>/Switch63' incorporates:
     *  Constant: '<S900>/Calib'
     */
    if (KeSCPR_b_OvrdEnblSmartEVSEDtctd)
    {
        /* Switch: '<S809>/Switch63' incorporates:
         *  Constant: '<S901>/Calib'
         */
        VeSCPR_b_SmartEVSE_Dtctd = KeSCPR_b_OvrdValSmartEVSEDtctd;
    }
    else
    {
        /* Switch: '<S809>/Switch63' */
        VeSCPR_b_SmartEVSE_Dtctd = tmpRead_1j;
    }

    /* End of Switch: '<S809>/Switch63' */

    /* Switch: '<S809>/Switch64' incorporates:
     *  Constant: '<S899>/Calib'
     */
    if (KeSCPR_b_OvrdEnblSOC)
    {
        /* Switch: '<S809>/Switch64' incorporates:
         *  Constant: '<S866>/Calib'
         */
        VeSCPR_Pct_HV_BatSOC = KeSCPR_Pct_OvrdSOCVal;
    }
    else
    {
        /* Switch: '<S809>/Switch64' */
        VeSCPR_Pct_HV_BatSOC = tmpRead_1k;
    }

    /* End of Switch: '<S809>/Switch64' */

    /* Switch: '<S809>/Switch65' incorporates:
     *  Constant: '<S890>/Calib'
     *  Constant: '<S891>/Calib'
     */
    if (KeSCPR_b_HVPerWUTherm_Ovrd)
    {
        tmpRead_1l = KeSCPR_b_HVPerWUTherm_Val;
    }

    /* End of Switch: '<S809>/Switch65' */

    /* Switch: '<S809>/Switch95' incorporates:
     *  Constant: '<S867>/Calib'
     *  Constant: '<S868>/Calib'
     */
    if (KeSCPR_b_CabPrecDny_BattCond_Ovrd)
    {
        tmpRead_20 = KeSCPR_b_CabPrecDny_BattCond_Val;
    }

    /* End of Switch: '<S809>/Switch95' */

    /* Logic: '<S809>/Logical16' */
    VeSCPR_b_HVBatPerWUThermal = (tmpRead_1l || tmpRead_20);

    /* Switch: '<S809>/Switch67' incorporates:
     *  Constant: '<S911>/Calib'
     */
    if (KeSCPR_b_THMR_RdyOvrd)
    {
        /* Switch: '<S809>/Switch67' incorporates:
         *  Constant: '<S910>/Calib'
         */
        VeSCPR_b_THMR_RdyForShtDwn = KeSCPR_b_THMR_Rdy4ShtDwn;
    }
    else
    {
        /* Switch: '<S809>/Switch67' */
        VeSCPR_b_THMR_RdyForShtDwn = tmpRead_1m;
    }

    /* End of Switch: '<S809>/Switch67' */

    /* Switch: '<S809>/Switch68' incorporates:
     *  Constant: '<S896>/Calib'
     */
    if (KeSCPR_b_OvrdEnblChargingLvl)
    {
        /* Switch: '<S809>/Switch68' incorporates:
         *  Constant: '<S919>/Calib'
         */
        VeSCPR_e_ChargingLevel = KeSCPR_e_OvrdValChargingLvl;
    }
    else
    {
        /* Switch: '<S809>/Switch68' incorporates:
         *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
         */
        VeSCPR_e_ChargingLevel = tmpRead_1n;
    }

    /* End of Switch: '<S809>/Switch68' */

    /* Switch: '<S809>/Switch69' incorporates:
     *  Constant: '<S875>/Calib'
     */
    if (KeSCPR_b_ChargeReqSgnlRcvdOvrd)
    {
        /* Switch: '<S809>/Switch69' incorporates:
         *  Constant: '<S876>/Calib'
         */
        VeSCPR_b_ChargeReqSgnlRcvdArb = KeSCPR_b_ChargeReqSgnlRcvdOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch69' */
        VeSCPR_b_ChargeReqSgnlRcvdArb = tmpRead_1o;
    }

    /* End of Switch: '<S809>/Switch69' */

    /* Switch: '<S809>/Switch70' incorporates:
     *  Constant: '<S873>/Calib'
     */
    if (KeSCPR_b_ChargeReqOvrd)
    {
        /* Switch: '<S809>/Switch70' incorporates:
         *  Constant: '<S874>/Calib'
         */
        VeSCPR_b_ChargeReqRadio = KeSCPR_b_ChargeReqOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch70' */
        VeSCPR_b_ChargeReqRadio = tmpRead_1p;
    }

    /* End of Switch: '<S809>/Switch70' */

    /* Switch: '<S809>/Switch71' incorporates:
     *  Constant: '<S869>/Calib'
     */
    if (KeSCPR_b_ChargeNowOvrd)
    {
        /* Switch: '<S809>/Switch71' incorporates:
         *  Constant: '<S870>/Calib'
         */
        VeSCPR_b_ChargeNowRadio_In = KeSCPR_b_ChargeNowOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch71' */
        VeSCPR_b_ChargeNowRadio_In = tmpRead_1q;
    }

    /* End of Switch: '<S809>/Switch71' */

    /* Switch: '<S809>/Switch74' incorporates:
     *  Constant: '<S880>/Calib'
     */
    if (KeSCPR_b_ChrgPortButton_Sts_Ovrd)
    {
        /* Switch: '<S809>/Switch74' incorporates:
         *  Constant: '<S881>/Calib'
         */
        VeSCPR_b_ChrgPortButton_Sts = KeSCPR_b_ChrgPortButton_Sts_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch74' */
        VeSCPR_b_ChrgPortButton_Sts = tmpRead_1r;
    }

    /* End of Switch: '<S809>/Switch74' */

    /* Switch: '<S809>/Switch75' incorporates:
     *  Constant: '<S885>/Calib'
     */
    if (KeSCPR_b_DoorLockLastElSts_Ovrd)
    {
        /* Switch: '<S809>/Switch75' incorporates:
         *  Constant: '<S914>/Calib'
         */
        VeSCPR_e_DoorLockLastElSts = KeSCPR_e_DoorLockLastElSts_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch75' incorporates:
         *  Inport: '<Root>/VeCITR_e_DoorLockLastElSts'
         */
        VeSCPR_e_DoorLockLastElSts = tmpRead_1s;
    }

    /* End of Switch: '<S809>/Switch75' */

    /* Switch: '<S809>/Switch76' incorporates:
     *  Constant: '<S889>/Calib'
     */
    if (KeSCPR_b_HVBatRTC_Ovrd)
    {
        /* Switch: '<S809>/Switch76' incorporates:
         *  Constant: '<S924>/Calib'
         */
        SCPR_ac_B.VeSCPR_t_HVBatRTC = KeSCPR_t_HVBatRTC_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch76' */
        SCPR_ac_B.VeSCPR_t_HVBatRTC = tmpRead_1t;
    }

    /* End of Switch: '<S809>/Switch76' */

    /* Switch: '<S809>/Switch77' incorporates:
     *  Constant: '<S878>/Calib'
     */
    if (KeSCPR_b_ChrgCrntAvailOvrd)
    {
        /* Switch: '<S809>/Switch77' incorporates:
         *  Constant: '<S863>/Calib'
         */
        VeSCPR_I_ChrgCrntAvail = KeSCPR_I_ChrgCrntAvailOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch77' */
        VeSCPR_I_ChrgCrntAvail = tmpRead_1u;
    }

    /* End of Switch: '<S809>/Switch77' */

    /* Switch: '<S809>/Switch78' incorporates:
     *  Constant: '<S888>/Calib'
     */
    if (KeSCPR_b_FullAmpHrCapOvrd)
    {
        /* Switch: '<S809>/Switch78' incorporates:
         *  Constant: '<S923>/Calib'
         */
        SCPR_ac_B.VeSCPR_q_FullAmpHrCap = KeSCPR_q_FullAmpHrCapOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch78' */
        SCPR_ac_B.VeSCPR_q_FullAmpHrCap = tmpRead_1v;
    }

    /* End of Switch: '<S809>/Switch78' */

    /* Switch: '<S809>/Switch1' incorporates:
     *  Constant: '<S904>/Calib'
     */
    if (KeSCPR_b_RRM_VP_Level)
    {
        /* Switch: '<S809>/Switch1' incorporates:
         *  Constant: '<S921>/Calib'
         */
        SCPR_ac_B.Switch1_mm = KeSCPR_e_RRM_VP_Level;
    }
    else
    {
        /* Switch: '<S809>/Switch1' incorporates:
         *  Inport: '<Root>/VeCITR_e_RRM_VP_Level'
         */
        SCPR_ac_B.Switch1_mm = tmpRead_1w;
    }

    /* End of Switch: '<S809>/Switch1' */

    /* Switch: '<S809>/Switch66' incorporates:
     *  Constant: '<S892>/Calib'
     */
    if (KeSCPR_b_HVPerWU_CabinPre_Ovrd)
    {
        /* Switch: '<S809>/Switch66' incorporates:
         *  Constant: '<S893>/Calib'
         */
        VeSCPR_b_HVPerWU_CabinPre = KeSCPR_b_HVPerWU_CabinPre_Val;
    }
    else
    {
        /* Switch: '<S809>/Switch66' */
        VeSCPR_b_HVPerWU_CabinPre = tmpRead_1x;
    }

    /* End of Switch: '<S809>/Switch66' */

    /* Switch: '<S809>/Switch93' incorporates:
     *  Constant: '<S882>/Calib'
     */
    if (KeSCPR_b_ChrgSysFault_Ovrd)
    {
        /* Switch: '<S809>/Switch93' incorporates:
         *  Constant: '<S883>/Calib'
         */
        SCPR_ac_B.Switch93 = KeSCPR_b_ChrgSysFault_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch93' */
        SCPR_ac_B.Switch93 = tmpRead_1y;
    }

    /* End of Switch: '<S809>/Switch93' */

    /* Switch: '<S809>/Switch94' incorporates:
     *  Constant: '<S877>/Calib'
     */
    if (KeSCPR_b_ChargeType_Ovrd)
    {
        /* Switch: '<S809>/Switch94' incorporates:
         *  Constant: '<S912>/Calib'
         */
        SCPR_ac_B.Switch94 = KeSCPR_e_ChargeType_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch94' incorporates:
         *  Inport: '<Root>/VeOBCR_e_ChargeType'
         */
        SCPR_ac_B.Switch94 = tmpRead_1z;
    }

    /* End of Switch: '<S809>/Switch94' */

    /* Switch: '<S809>/Switch104' incorporates:
     *  Constant: '<S895>/Calib'
     */
    if (KeSCPR_b_MaxAllwdCurr_Ovrd)
    {
        /* Switch: '<S809>/Switch104' incorporates:
         *  Constant: '<S865>/Calib'
         */
        SCPR_ac_B.Switch104 = KeSCPR_I_MaxAllwdCurr_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch104' */
        SCPR_ac_B.Switch104 = tmpRead_21;
    }

    /* End of Switch: '<S809>/Switch104' */

    /* Switch: '<S809>/Switch105' incorporates:
     *  Constant: '<S871>/Calib'
     */
    if (KeSCPR_b_ChargeNowTBM_Ovrd)
    {
        /* Switch: '<S809>/Switch105' incorporates:
         *  Constant: '<S872>/Calib'
         */
        SCPR_ac_B.Switch105 = KeSCPR_b_ChargeNowTBM_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch105' */
        SCPR_ac_B.Switch105 = tmpRead_22;
    }

    /* End of Switch: '<S809>/Switch105' */

    /* Switch: '<S809>/Switch106' incorporates:
     *  Constant: '<S879>/Calib'
     */
    if (KeSCPR_b_ChrgCurrEstSOCOvrd)
    {
        /* Switch: '<S809>/Switch106' incorporates:
         *  Constant: '<S864>/Calib'
         */
        VeSCPR_I_ChrgCurrEstSOC = KeSCPR_I_ChrgCurrEstSOCOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch106' */
        VeSCPR_I_ChrgCurrEstSOC = tmpRead_2e;
    }

    /* End of Switch: '<S809>/Switch106' */

    /* Switch: '<S809>/Switch2' incorporates:
     *  Constant: '<S884>/Calib'
     */
    if (KeSCPR_b_ChrgSysStat_Ovrd)
    {
        /* Switch: '<S809>/Switch2' incorporates:
         *  Constant: '<S913>/Calib'
         */
        VeSCPR_e_ChrgSysStat = KeSCPR_e_ChrgSysStat_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch2' incorporates:
         *  Inport: '<Root>/VeOBCR_e_ChrgSysStat_SF'
         */
        VeSCPR_e_ChrgSysStat = tmpRead_2g;
    }

    /* End of Switch: '<S809>/Switch2' */

    /* Switch: '<S809>/Switch4' incorporates:
     *  Constant: '<S886>/Calib'
     */
    if (KeSCPR_b_FOTAInstallStsOvrd)
    {
        /* Switch: '<S809>/Switch4' incorporates:
         *  Constant: '<S915>/Calib'
         */
        SCPR_ac_B.Switch4_b = KeSCPR_e_FOTAInstallStsOvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch4' incorporates:
         *  Inport: '<Root>/VeCITR_e_FOTA_Install_Status'
         */
        SCPR_ac_B.Switch4_b = tmpRead_2h;
    }

    /* End of Switch: '<S809>/Switch4' */

    /* Switch: '<S809>/Switch6' incorporates:
     *  Constant: '<S905>/Calib'
     */
    if (KeSCPR_b_RacePrAmbChk_Ovrd)
    {
        /* Switch: '<S809>/Switch6' incorporates:
         *  Constant: '<S906>/Calib'
         */
        VeSCPR_b_RacePrepAmbCheck = KeSCPR_b_RacePrAmbChk_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch6' */
        VeSCPR_b_RacePrepAmbCheck = tmpRead_2j;
    }

    /* End of Switch: '<S809>/Switch6' */

    /* Switch: '<S809>/Switch7' incorporates:
     *  Constant: '<S907>/Calib'
     */
    if (KeSCPR_b_RacePrEVSts_Ovrd)
    {
        /* Switch: '<S809>/Switch7' incorporates:
         *  Constant: '<S908>/Calib'
         */
        VeSCPR_b_RacePrepEVSysStatus = KeSCPR_b_RacePrEVSts_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch7' */
        VeSCPR_b_RacePrepEVSysStatus = tmpRead_2k;
    }

    /* End of Switch: '<S809>/Switch7' */

    /* Switch: '<S809>/Switch8' incorporates:
     *  Constant: '<S909>/Calib'
     */
    if (KeSCPR_b_RacePrep_Ovrd)
    {
        /* Switch: '<S809>/Switch8' incorporates:
         *  Constant: '<S922>/Calib'
         */
        SCPR_ac_B.Switch8_m = KeSCPR_e_RacePrep_OvrdVal;
    }
    else
    {
        /* Switch: '<S809>/Switch8' incorporates:
         *  Inport: '<Root>/VeTIMR_e_RacePrep'
         */
        SCPR_ac_B.Switch8_m = tmpRead_2l;
    }

    /* End of Switch: '<S809>/Switch8' */

    /* DataStoreRead: '<S799>/Data Store Read' */
    SCPR_ac_B.DataStoreRead_p = FeSCPR_e_Sch1CH_StrtHr;

    /* DataStoreRead: '<S799>/Data Store Read1' */
    SCPR_ac_B.DataStoreRead1_m = FeSCPR_e_Sch1CH_StrtMin;

    /* DataStoreRead: '<S799>/Data Store Read2' */
    SCPR_ac_B.DataStoreRead2_a = FeSCPR_e_Sch1CH_EndHr;

    /* DataStoreRead: '<S799>/Data Store Read3' */
    SCPR_ac_B.DataStoreRead3_f = FeSCPR_e_Sch1CH_EndMin;

    /* DataStoreRead: '<S799>/Data Store Read27' */
    SCPR_ac_B.DataStoreRead27_d = FeSCPR_b_Sch1CH_DNR;

    /* DataStoreRead: '<S799>/Data Store Read6' */
    SCPR_ac_B.DataStoreRead6_a = FeSCPR_b_Sch1CH_ChrgUntFl;

    /* DataStoreRead: '<S799>/Data Store Read7' */
    SCPR_ac_B.DataStoreRead7_k = FeSCPR_e_Sch2CH_StrtHr;

    /* DataStoreRead: '<S799>/Data Store Read8' */
    SCPR_ac_B.DataStoreRead8_h = FeSCPR_e_Sch2CH_StrtMin;

    /* DataStoreRead: '<S799>/Data Store Read9' */
    SCPR_ac_B.DataStoreRead9_d = FeSCPR_e_Sch2CH_EndHr;

    /* DataStoreRead: '<S799>/Data Store Read10' */
    SCPR_ac_B.DataStoreRead10_k = FeSCPR_e_Sch2CH_EndMin;

    /* DataStoreRead: '<S799>/Data Store Read29' */
    SCPR_ac_B.DataStoreRead29 = FeSCPR_b_Sch2CH_DNR;

    /* DataStoreRead: '<S799>/Data Store Read13' */
    SCPR_ac_B.DataStoreRead13_d = FeSCPR_b_Sch2CH_ChrgUntFl;

    /* DataStoreRead: '<S799>/Data Store Read14' */
    SCPR_ac_B.DataStoreRead14 = FeSCPR_e_Sch1CP_DepHr;

    /* DataStoreRead: '<S799>/Data Store Read15' */
    SCPR_ac_B.DataStoreRead15_n = FeSCPR_e_Sch1CP_DepMin;

    /* DataStoreRead: '<S799>/Data Store Read18' */
    SCPR_ac_B.DataStoreRead18_k = FeSCPR_e_Sch1CP_Allow;

    /* DataStoreRead: '<S799>/Data Store Read19' */
    SCPR_ac_B.DataStoreRead19 = FeSCPR_T_Sch1CP_DepTemp;

    /* DataStoreRead: '<S799>/Data Store Read26' */
    SCPR_ac_B.DataStoreRead26 = FeSCPR_b_Sch1CP_DNR;

    /* DataStoreRead: '<S799>/Data Store Read20' */
    SCPR_ac_B.DataStoreRead20_a = FeSCPR_e_Sch2CP_DepHr;

    /* DataStoreRead: '<S799>/Data Store Read21' */
    SCPR_ac_B.DataStoreRead21_m = FeSCPR_e_Sch2CP_DepMin;

    /* DataStoreRead: '<S799>/Data Store Read24' */
    SCPR_ac_B.DataStoreRead24_k = FeSCPR_e_Sch2CP_Allow;

    /* DataStoreRead: '<S799>/Data Store Read25' */
    SCPR_ac_B.DataStoreRead25 = FeSCPR_T_Sch2CP_DepTemp;

    /* DataStoreRead: '<S799>/Data Store Read28' */
    SCPR_ac_B.DataStoreRead28_d = FeSCPR_b_Sch2CP_DNR;

    /* DataStoreRead: '<S799>/Data Store Read30' */
    SCPR_ac_B.DataStoreRead30 = SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopHr;

    /* DataStoreRead: '<S799>/Data Store Read31' */
    SCPR_ac_B.DataStoreRead31 = SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopMin;

    /* DataStoreRead: '<S799>/Data Store Read38' */
    SCPR_ac_B.DataStoreRead38 = SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt;

    /* DataStoreRead: '<S799>/Data Store Read39' */
    SCPR_ac_B.DataStoreRead39 = SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt;

    /* DataStoreRead: '<S799>/Data Store Read40' */
    SCPR_ac_B.DataStoreRead40 = SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopHr;

    /* DataStoreRead: '<S799>/Data Store Read41' */
    SCPR_ac_B.DataStoreRead41 = SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopMin;

    /* DataStoreRead: '<S799>/Data Store Read32' */
    SCPR_ac_B.DataStoreRead32 = SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt;

    /* DataStoreRead: '<S799>/Data Store Read33' */
    SCPR_ac_B.DataStoreRead33 = SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt;

    /* DataStoreRead: '<S799>/Data Store Read37' */
    SCPR_ac_B.DataStoreRead37_a = SCPR_ac_DW.NeSCPR_b_CoCH_Sch1_DNR;

    /* DataStoreRead: '<S799>/Data Store Read44' */
    SCPR_ac_B.DataStoreRead44 = SCPR_ac_DW.NeSCPR_b_CoCH_Sch2_DNR;

    /* Update for UnitDelay: '<S798>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_ov = rtb_AND_do;

    /* Update for UnitDelay: '<S798>/Unit Delay1' */
    SCPR_ac_DW.UnitDelay1_DSTATE_ip = rtb_Logical3_li;

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* If: '<S17>/If1' incorporates:
     *  Constant: '<S94>/Constant'
     *  DataStoreRead: '<S799>/Data Store Read34'
     *  RelationalOperator: '<S17>/Comparison'
     */
    if (CeCITR_e_Standard_Charge == ((uint32)SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType))
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S98>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_Start_Time_Hr_Sts' incorporates:
         *  Inport: '<S98>/Sch1CH_StrtHr'
         *  Outport: '<Root>/VeSCPR_K_Sch1_Start_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_Start_Time_Hr_Sts_Value
            (SCPR_ac_B.DataStoreRead_p);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_Start_Time_Min_Sts' incorporates:
         *  Inport: '<S98>/Sch1CH_StrtMin'
         *  Outport: '<Root>/VeSCPR_K_Sch1_Start_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_Start_Time_Min_Sts_Value
            (SCPR_ac_B.DataStoreRead1_m);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_End_Time_Hr_Sts' incorporates:
         *  Inport: '<S98>/Sch1CH_EndHr'
         *  Outport: '<Root>/VeSCPR_K_Sch1_End_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_End_Time_Hr_Sts_Value
            (SCPR_ac_B.DataStoreRead2_a);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_End_Time_Min_Sts' incorporates:
         *  Inport: '<S98>/Sch1CH_EndMin'
         *  Outport: '<Root>/VeSCPR_K_Sch1_End_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_End_Time_Min_Sts_Value
            (SCPR_ac_B.DataStoreRead3_f);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_Day_Sts' incorporates:
         *  Inport: '<S98>/Sch1CH_Day'
         *  Outport: '<Root>/VeSCPR_K_Sch1_Day_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_Day_Sts_Value(SCPR_ac_B.DataStoreRead4_h);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch1_Confirmed' incorporates:
         *  Inport: '<S98>/Sch1CH_Enbl'
         *  Outport: '<Root>/VeSCPR_b_Sch1_Confirmed'
         */
        (void)Rte_Write_VeSCPR_b_Sch1_Confirmed_Value(SCPR_ac_B.DataStoreRead5_d);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch1_ChargeUntilFull_Sts' incorporates:
         *  Inport: '<S98>/Sch1CH_ChrgUntFl'
         *  Outport: '<Root>/VeSCPR_b_Sch1_ChargeUntilFull_Sts'
         */
        (void)Rte_Write_VeSCPR_b_Sch1_ChargeUntilFull_Sts_Value
            (SCPR_ac_B.DataStoreRead6_a);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts' incorporates:
         *  Constant: '<S98>/Constant'
         *  Outport: '<Root>/VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts'
         *  SignalConversion generated from: '<S98>/Sch1_ImmedSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts_Value(100.0F);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts' incorporates:
         *  Constant: '<S98>/Constant1'
         *  Outport: '<Root>/VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts'
         *  SignalConversion generated from: '<S98>/Sch1_ExtSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts_Value(100.0F);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S99>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_Start_Time_Hr_Sts' incorporates:
         *  Constant: '<S99>/Constant2'
         *  Outport: '<Root>/VeSCPR_K_Sch1_Start_Time_Hr_Sts'
         *  SignalConversion generated from: '<S99>/Sch1_Start_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_Start_Time_Hr_Sts_Value((sint16)0);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_Start_Time_Min_Sts' incorporates:
         *  Constant: '<S99>/Constant4'
         *  Outport: '<Root>/VeSCPR_K_Sch1_Start_Time_Min_Sts'
         *  SignalConversion generated from: '<S99>/Sch1_Start_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_Start_Time_Min_Sts_Value((sint16)0);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_End_Time_Hr_Sts' incorporates:
         *  Inport: '<S99>/Sch1CoCH_StopHr'
         *  Outport: '<Root>/VeSCPR_K_Sch1_End_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_End_Time_Hr_Sts_Value
            (SCPR_ac_B.DataStoreRead30);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_End_Time_Min_Sts' incorporates:
         *  Inport: '<S99>/Sch1CoCH_StopMin'
         *  Outport: '<Root>/VeSCPR_K_Sch1_End_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_End_Time_Min_Sts_Value
            (SCPR_ac_B.DataStoreRead31);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch1_Day_Sts' incorporates:
         *  Inport: '<S99>/Sch1CoCH_Day'
         *  Outport: '<Root>/VeSCPR_K_Sch1_Day_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch1_Day_Sts_Value(SCPR_ac_B.DataStoreRead36_f);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch1_Confirmed' incorporates:
         *  Inport: '<S99>/Sch1CoCH_Enbl'
         *  Outport: '<Root>/VeSCPR_b_Sch1_Confirmed'
         */
        (void)Rte_Write_VeSCPR_b_Sch1_Confirmed_Value(SCPR_ac_B.DataStoreRead47);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch1_ChargeUntilFull_Sts' incorporates:
         *  Constant: '<S99>/Constant8'
         *  Outport: '<Root>/VeSCPR_b_Sch1_ChargeUntilFull_Sts'
         *  SignalConversion generated from: '<S99>/Sch1_ChargeUntilFull_Sts'
         */
        (void)Rte_Write_VeSCPR_b_Sch1_ChargeUntilFull_Sts_Value(false);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts' incorporates:
         *  Inport: '<S99>/Sch1CoCH_ImmSOCtrgt'
         *  Outport: '<Root>/VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts_Value
            (SCPR_ac_B.DataStoreRead38);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts' incorporates:
         *  Inport: '<S99>/Sch1CoCH_ExtSOCtrgt'
         *  Outport: '<Root>/VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts_Value
            (SCPR_ac_B.DataStoreRead39);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem3' */
    }

    /* End of If: '<S17>/If1' */

    /* If: '<S17>/If' incorporates:
     *  Constant: '<S95>/Constant'
     *  DataStoreRead: '<S799>/Data Store Read35'
     *  RelationalOperator: '<S17>/Comparison1'
     */
    if (CeCITR_e_Standard_Charge == ((uint32)SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType))
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem' incorporates:
         *  ActionPort: '<S96>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_Start_Time_Hr_Sts' incorporates:
         *  Inport: '<S96>/Sch2CH_StrtHr'
         *  Outport: '<Root>/VeSCPR_K_Sch2_Start_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_Start_Time_Hr_Sts_Value
            (SCPR_ac_B.DataStoreRead7_k);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_Start_Time_Min_Sts' incorporates:
         *  Inport: '<S96>/Sch2CH_StrtMin'
         *  Outport: '<Root>/VeSCPR_K_Sch2_Start_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_Start_Time_Min_Sts_Value
            (SCPR_ac_B.DataStoreRead8_h);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_End_Time_Hr_Sts' incorporates:
         *  Inport: '<S96>/Sch2CH_EndHr'
         *  Outport: '<Root>/VeSCPR_K_Sch2_End_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_End_Time_Hr_Sts_Value
            (SCPR_ac_B.DataStoreRead9_d);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_End_Time_Min_Sts' incorporates:
         *  Inport: '<S96>/Sch2CH_EndMin'
         *  Outport: '<Root>/VeSCPR_K_Sch2_End_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_End_Time_Min_Sts_Value
            (SCPR_ac_B.DataStoreRead10_k);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_Day_Sts' incorporates:
         *  Inport: '<S96>/Sch2CH_Day'
         *  Outport: '<Root>/VeSCPR_K_Sch2_Day_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_Day_Sts_Value(SCPR_ac_B.DataStoreRead11_m);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch2_Confirmed' incorporates:
         *  Inport: '<S96>/Sch2CH_Enbl'
         *  Outport: '<Root>/VeSCPR_b_Sch2_Confirmed'
         */
        (void)Rte_Write_VeSCPR_b_Sch2_Confirmed_Value
            (SCPR_ac_B.DataStoreRead12_g);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch2_ChargeUntilFull_Sts' incorporates:
         *  Inport: '<S96>/Sch2CH_ChrgUntFl'
         *  Outport: '<Root>/VeSCPR_b_Sch2_ChargeUntilFull_Sts'
         */
        (void)Rte_Write_VeSCPR_b_Sch2_ChargeUntilFull_Sts_Value
            (SCPR_ac_B.DataStoreRead13_d);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts' incorporates:
         *  Constant: '<S96>/Constant5'
         *  Outport: '<Root>/VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts'
         *  SignalConversion generated from: '<S96>/Sch2_ImmedSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts_Value(100.0F);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts' incorporates:
         *  Constant: '<S96>/Constant6'
         *  Outport: '<Root>/VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts'
         *  SignalConversion generated from: '<S96>/Sch2_ExtSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts_Value(100.0F);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S17>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S97>/Action Port'
         */
        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_Start_Time_Hr_Sts' incorporates:
         *  Constant: '<S97>/Constant10'
         *  Outport: '<Root>/VeSCPR_K_Sch2_Start_Time_Hr_Sts'
         *  SignalConversion generated from: '<S97>/Sch2_Start_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_Start_Time_Hr_Sts_Value((sint16)0);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_Start_Time_Min_Sts' incorporates:
         *  Constant: '<S97>/Constant11'
         *  Outport: '<Root>/VeSCPR_K_Sch2_Start_Time_Min_Sts'
         *  SignalConversion generated from: '<S97>/Sch2_Start_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_Start_Time_Min_Sts_Value((sint16)0);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_End_Time_Hr_Sts' incorporates:
         *  Inport: '<S97>/Sch2CoCH_StopHr'
         *  Outport: '<Root>/VeSCPR_K_Sch2_End_Time_Hr_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_End_Time_Hr_Sts_Value
            (SCPR_ac_B.DataStoreRead40);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_End_Time_Min_Sts' incorporates:
         *  Inport: '<S97>/Sch2CoCH_StopMin'
         *  Outport: '<Root>/VeSCPR_K_Sch2_End_Time_Min_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_End_Time_Min_Sts_Value
            (SCPR_ac_B.DataStoreRead41);

        /* SignalConversion generated from: '<S1>/VeSCPR_K_Sch2_Day_Sts' incorporates:
         *  Inport: '<S97>/Sch2CoCH_Day'
         *  Outport: '<Root>/VeSCPR_K_Sch2_Day_Sts'
         */
        (void)Rte_Write_VeSCPR_K_Sch2_Day_Sts_Value(SCPR_ac_B.DataStoreRead42);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch2_Confirmed' incorporates:
         *  Inport: '<S97>/Sch2CoCH_Enbl'
         *  Outport: '<Root>/VeSCPR_b_Sch2_Confirmed'
         */
        (void)Rte_Write_VeSCPR_b_Sch2_Confirmed_Value(SCPR_ac_B.DataStoreRead43);

        /* SignalConversion generated from: '<S1>/VeSCPR_b_Sch2_ChargeUntilFull_Sts' incorporates:
         *  Constant: '<S97>/Constant7'
         *  Outport: '<Root>/VeSCPR_b_Sch2_ChargeUntilFull_Sts'
         *  SignalConversion generated from: '<S97>/Sch2_ChargeUntilFull_Sts'
         */
        (void)Rte_Write_VeSCPR_b_Sch2_ChargeUntilFull_Sts_Value(false);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts' incorporates:
         *  Inport: '<S97>/Sch2CoCH_ImmSOCtrgt'
         *  Outport: '<Root>/VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts_Value
            (SCPR_ac_B.DataStoreRead32);

        /* SignalConversion generated from: '<S1>/VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts' incorporates:
         *  Inport: '<S97>/Sch2CoCH_ExtSOCtrgt'
         *  Outport: '<Root>/VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts'
         */
        (void)Rte_Write_VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts_Value
            (SCPR_ac_B.DataStoreRead33);

        /* End of Outputs for SubSystem: '<S17>/If Action Subsystem1' */
    }

    /* End of If: '<S17>/If' */

    /* Outputs for Atomic SubSystem: '<S4>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S20>/EdgeRising' */
    /* Logic: '<S112>/AND' incorporates:
     *  Logic: '<S112>/OR1'
     *  UnitDelay: '<S112>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCI_l = !SCPR_ac_DW.UnitDelay_DSTATE_e5;

    /* Update for UnitDelay: '<S112>/Unit Delay' incorporates:
     *  Constant: '<S4>/TRUE Constant'
     */
    SCPR_ac_DW.UnitDelay_DSTATE_e5 = true;

    /* End of Outputs for SubSystem: '<S20>/EdgeRising' */

    /* Switch: '<S20>/Switch1' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S20>/Constant Value'
     *  Logic: '<S20>/OR'
     *  MinMax: '<S20>/Minimum'
     *  Sum: '<S20>/Summation'
     *  UnitDelay: '<S20>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeCI_l)
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  Constant: '<S20>/Constant Value1'
         */
        rtb_Switch1_al = 0U;
    }
    else if (KeSCPR_Cnt_OutputDelay < ((uint16)(((uint32)
                SCPR_ac_DW.UnitDelay_DSTATE_k) + 1U)))
    {
        /* MinMax: '<S20>/Minimum' incorporates:
         *  Constant: '<S10>/Calib'
         *  Switch: '<S20>/Switch1'
         */
        rtb_Switch1_al = KeSCPR_Cnt_OutputDelay;
    }
    else
    {
        /* Switch: '<S20>/Switch1' incorporates:
         *  Constant: '<S20>/Constant Value'
         *  MinMax: '<S20>/Minimum'
         *  Sum: '<S20>/Summation'
         *  UnitDelay: '<S20>/Unit Delay'
         */
        rtb_Switch1_al = (uint16)(((uint32)SCPR_ac_DW.UnitDelay_DSTATE_k) + 1U);
    }

    /* End of Switch: '<S20>/Switch1' */

    /* Logic: '<S20>/AND' incorporates:
     *  Constant: '<S10>/Calib'
     *  RelationalOperator: '<S20>/Greater  Than'
     */
    rtb_TmpSignalConversionAtVeCI_l = (rtb_Switch1_al >= KeSCPR_Cnt_OutputDelay);

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_al;

    /* End of Outputs for SubSystem: '<S4>/Turn On Delay Sample' */

    /* If: '<S4>/If' */
    if (!rtb_TmpSignalConversionAtVeCI_l)
    {
        /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem' incorporates:
         *  ActionPort: '<S8>/Action Port'
         */
        /* Merge: '<S4>/Merge38' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read16'
         */
        rtb_TmpSignalConversionAtVeCITR = SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtHr;

        /* Merge: '<S4>/Merge1' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read17'
         */
        rtb_TmpSignalConversionAtVeC_cs = SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtMin;

        /* Merge: '<S4>/Merge2' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read18'
         */
        rtb_TmpSignalConversionAtVeCI_g = SCPR_ac_DW.NeSCPR_e_NxtSchCP_Day;

        /* Merge: '<S4>/Merge3' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read13'
         */
        rtb_TmpSignalConversionAtVeCI_p = SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtHr;

        /* Merge: '<S4>/Merge4' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read14'
         */
        rtb_Merge4_m = SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtMin;

        /* Merge: '<S4>/Merge5' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read10'
         */
        rtb_Merge5 = SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndHr;

        /* Merge: '<S4>/Merge6' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read11'
         */
        rtb_Merge6 = SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndMin;

        /* Merge: '<S4>/Merge7' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read15'
         */
        rtb_Merge7 = SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtDay;

        /* Merge: '<S4>/Merge8' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read12'
         */
        rtb_Merge8 = SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndDay;

        /* SignalConversion generated from: '<S1>/VeSCPR_T_CabinTempSetPt' incorporates:
         *  DataStoreRead: '<S8>/Data Store Read'
         *  Outport: '<Root>/VeSCPR_T_CabinTempSetPt'
         */
        (void)Rte_Write_VeSCPR_T_CabinTempSetPt_Value
            (SCPR_ac_DW.NeSCPR_k_CabinTempSetPoint);

        /* Merge: '<S4>/Merge10' incorporates:
         *  Constant: '<S8>/Constant'
         *  SignalConversion generated from: '<S8>/NextCoCH_StopDay_'
         */
        Merge10_e = 0;

        /* Merge: '<S4>/Merge11' incorporates:
         *  Constant: '<S8>/Constant1'
         *  SignalConversion generated from: '<S8>/NextCoCH_StopHour_'
         */
        Merge11_h = 0;

        /* Merge: '<S4>/Merge12' incorporates:
         *  Constant: '<S8>/Constant2'
         *  SignalConversion generated from: '<S8>/NextCoCH_StopMin_'
         */
        Merge12_g = 0;

        /* Merge: '<S4>/Merge13' incorporates:
         *  Constant: '<S8>/Constant3'
         *  SignalConversion generated from: '<S8>/NextCoCH_ImmSOC_'
         */
        Merge13 = 100.0F;

        /* Merge: '<S4>/Merge14' incorporates:
         *  Constant: '<S8>/Constant4'
         *  SignalConversion generated from: '<S8>/NextCoCH_ExtSOC_'
         */
        Merge14 = 100.0F;

        /* End of Outputs for SubSystem: '<S4>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S9>/Action Port'
         */
        /* DataStoreWrite: '<S9>/Data Store Write' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtHr = VeSCPR_K_NextDep_HrTest;

        /* DataStoreWrite: '<S9>/Data Store Write1' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtMin = VeSCPR_K_NextDep_MinTest;

        /* DataStoreWrite: '<S9>/Data Store Write2' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCP_Day = VeSCPR_K_NextDep_DayTest;

        /* DataStoreWrite: '<S9>/Data Store Write3' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtHr = VeSCPR_k_NextStartChrgHourTest;

        /* DataStoreWrite: '<S9>/Data Store Write4' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtMin = VeSCPR_k_NextStartChrgMinTest;

        /* DataStoreWrite: '<S9>/Data Store Write5' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndHr = VeSCPR_k_NextEndChrgHourTest;

        /* DataStoreWrite: '<S9>/Data Store Write6' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndMin = VeSCPR_k_NextEndChrgMinTest;

        /* DataStoreWrite: '<S9>/Data Store Write7' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtDay = VeSCPR_K_NextStartChrgDayTest;

        /* DataStoreWrite: '<S9>/Data Store Write9' */
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndDay = VeSCPR_K_NextEndChrgDayTest;

        /* DataStoreWrite: '<S9>/Data Store Write8' */
        SCPR_ac_DW.NeSCPR_k_CabinTempSetPoint = VeSCPR_T_NextDepTemp;

        /* Merge: '<S4>/Merge38' incorporates:
         *  Gain: '<S40>/Gain'
         */
        rtb_TmpSignalConversionAtVeCITR = VeSCPR_K_NextDep_HrTest;

        /* Merge: '<S4>/Merge1' incorporates:
         *  Gain: '<S39>/Gain'
         */
        rtb_TmpSignalConversionAtVeC_cs = VeSCPR_K_NextDep_MinTest;

        /* Merge: '<S4>/Merge2' incorporates:
         *  Gain: '<S46>/Gain'
         */
        rtb_TmpSignalConversionAtVeCI_g = VeSCPR_K_NextDep_DayTest;

        /* Merge: '<S4>/Merge3' incorporates:
         *  Gain: '<S47>/Gain'
         */
        rtb_TmpSignalConversionAtVeCI_p = VeSCPR_k_NextStartChrgHourTest;

        /* Merge: '<S4>/Merge4' incorporates:
         *  Gain: '<S48>/Gain'
         */
        rtb_Merge4_m = VeSCPR_k_NextStartChrgMinTest;

        /* Merge: '<S4>/Merge5' incorporates:
         *  Gain: '<S49>/Gain'
         */
        rtb_Merge5 = VeSCPR_k_NextEndChrgHourTest;

        /* Merge: '<S4>/Merge6' incorporates:
         *  Gain: '<S50>/Gain'
         */
        rtb_Merge6 = VeSCPR_k_NextEndChrgMinTest;

        /* Merge: '<S4>/Merge7' incorporates:
         *  Gain: '<S51>/Gain'
         */
        rtb_Merge7 = VeSCPR_K_NextStartChrgDayTest;

        /* Merge: '<S4>/Merge8' incorporates:
         *  Gain: '<S52>/Gain'
         */
        rtb_Merge8 = VeSCPR_K_NextEndChrgDayTest;

        /* SignalConversion generated from: '<S1>/VeSCPR_T_CabinTempSetPt' incorporates:
         *  Gain: '<S53>/Gain'
         *  Outport: '<Root>/VeSCPR_T_CabinTempSetPt'
         */
        (void)Rte_Write_VeSCPR_T_CabinTempSetPt_Value(VeSCPR_T_NextDepTemp);

        /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */

        /* Outputs for Function Call SubSystem: '<S1>/SCPC' */
        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S392>/Constant Value'
         *  Constant: '<S392>/Constant Value1'
         *  Constant: '<S392>/Constant Value2'
         *  Constant: '<S392>/Constant Value3'
         *  Constant: '<S392>/Constant Value4'
         *  Constant: '<S392>/Constant Value5'
         *  Constant: '<S392>/Constant Value7'
         *  RelationalOperator: '<S392>/Comparison1'
         *  RelationalOperator: '<S392>/Comparison2'
         *  RelationalOperator: '<S392>/Comparison3'
         *  RelationalOperator: '<S392>/Comparison4'
         *  RelationalOperator: '<S392>/Comparison5'
         *  RelationalOperator: '<S392>/Comparison6'
         *  RelationalOperator: '<S392>/Comparison8'
         *  Switch: '<S436>/Switch2'
         *  Switch: '<S436>/Switch3'
         *  Switch: '<S436>/Switch4'
         *  Switch: '<S436>/Switch5'
         *  Switch: '<S436>/Switch6'
         *  Switch: '<S436>/Switch7'
         */
        if (SCPR_ac_B.sf_NextCoCH_Time.day == 0)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Merge: '<S4>/Merge10' incorporates:
             *  Gain: '<S41>/Gain'
             */
            Merge10_e = 7;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else if (SCPR_ac_B.sf_NextCoCH_Time.day == 1)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Switch: '<S436>/Switch2' incorporates:
             *  Gain: '<S41>/Gain'
             *  Merge: '<S4>/Merge10'
             */
            Merge10_e = 1;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else if (SCPR_ac_B.sf_NextCoCH_Time.day == 2)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Switch: '<S436>/Switch3' incorporates:
             *  Gain: '<S41>/Gain'
             *  Merge: '<S4>/Merge10'
             *  Switch: '<S436>/Switch2'
             */
            Merge10_e = 2;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else if (SCPR_ac_B.sf_NextCoCH_Time.day == 3)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Switch: '<S436>/Switch4' incorporates:
             *  Gain: '<S41>/Gain'
             *  Merge: '<S4>/Merge10'
             *  Switch: '<S436>/Switch2'
             *  Switch: '<S436>/Switch3'
             */
            Merge10_e = 3;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else if (SCPR_ac_B.sf_NextCoCH_Time.day == 4)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Switch: '<S436>/Switch5' incorporates:
             *  Gain: '<S41>/Gain'
             *  Merge: '<S4>/Merge10'
             *  Switch: '<S436>/Switch2'
             *  Switch: '<S436>/Switch3'
             *  Switch: '<S436>/Switch4'
             */
            Merge10_e = 4;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else if (SCPR_ac_B.sf_NextCoCH_Time.day == 5)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Switch: '<S436>/Switch6' incorporates:
             *  Gain: '<S41>/Gain'
             *  Merge: '<S4>/Merge10'
             *  Switch: '<S436>/Switch2'
             *  Switch: '<S436>/Switch3'
             *  Switch: '<S436>/Switch4'
             *  Switch: '<S436>/Switch5'
             */
            Merge10_e = 5;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else if (SCPR_ac_B.sf_NextCoCH_Time.day == 6)
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Switch: '<S436>/Switch7' incorporates:
             *  Gain: '<S41>/Gain'
             *  Merge: '<S4>/Merge10'
             *  Switch: '<S436>/Switch2'
             *  Switch: '<S436>/Switch3'
             *  Switch: '<S436>/Switch4'
             *  Switch: '<S436>/Switch5'
             *  Switch: '<S436>/Switch6'
             */
            Merge10_e = 6;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S9>/Action Port'
             */
            /* Merge: '<S4>/Merge10' incorporates:
             *  Gain: '<S41>/Gain'
             *  Switch: '<S436>/Switch2'
             *  Switch: '<S436>/Switch3'
             *  Switch: '<S436>/Switch4'
             *  Switch: '<S436>/Switch5'
             *  Switch: '<S436>/Switch6'
             *  Switch: '<S436>/Switch7'
             */
            Merge10_e = 9;

            /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */
        }

        /* End of Switch: '<S436>/Switch1' */

        /* Outputs for IfAction SubSystem: '<S4>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S9>/Action Port'
         */
        /* Merge: '<S4>/Merge11' incorporates:
         *  Gain: '<S42>/Gain'
         *  Gain: '<S438>/Gain'
         */
        Merge11_h = SCPR_ac_B.sf_NextCoCH_Time.hr;

        /* Merge: '<S4>/Merge12' incorporates:
         *  Gain: '<S439>/Gain'
         *  Gain: '<S43>/Gain'
         */
        Merge12_g = SCPR_ac_B.sf_NextCoCH_Time.min;

        /* End of Outputs for SubSystem: '<S1>/SCPC' */

        /* Merge: '<S4>/Merge13' incorporates:
         *  Gain: '<S44>/Gain'
         */
        Merge13 = rtb_Switch1_ls;

        /* Merge: '<S4>/Merge14' incorporates:
         *  Gain: '<S45>/Gain'
         */
        Merge14 = rtb_Switch1_ky;

        /* End of Outputs for SubSystem: '<S4>/If Action Subsystem1' */

        /* Outputs for Enabled SubSystem: '<S4>/OutputDelay' incorporates:
         *  EnablePort: '<S14>/Enable'
         */
        /* Switch: '<S14>/Switch13' incorporates:
         *  Constant: '<S64>/Calib'
         */
        if (KeSCPR_b_SchCP_AllowOvrd)
        {
            /* Switch: '<S14>/Switch13' incorporates:
             *  Constant: '<S66>/Calib'
             */
            SCPR_ac_B.VeSCPR_e_SchCP_Allow = KeSCPR_e_SchCP_Allow;
        }
        else
        {
            /* Switch: '<S14>/Switch13' incorporates:
             *  Switch: '<S375>/Switch1'
             */
            SCPR_ac_B.VeSCPR_e_SchCP_Allow = VeSCPR_e_NextCondAllow;
        }

        /* End of Switch: '<S14>/Switch13' */

        /* Switch: '<S14>/Switch10' incorporates:
         *  Constant: '<S65>/Calib'
         */
        if (KeSCPR_b_SchChrg_WUTime_Ovrd)
        {
            /* Switch: '<S14>/Switch10' incorporates:
             *  Constant: '<S67>/Calib'
             */
            SCPR_ac_B.VeSCPR_t_SchChrg_WUTime = KeSCPR_t_SchChrg_WUTime_OvrdVal;
        }
        else
        {
            /* Switch: '<S14>/Switch10' */
            SCPR_ac_B.VeSCPR_t_SchChrg_WUTime = VeSCPR_K_NextChargeWU;
        }

        /* End of Switch: '<S14>/Switch10' */

        /* Switch: '<S14>/Switch12' incorporates:
         *  Constant: '<S62>/Calib'
         */
        if (KeSCPR_b_OvrdEnblBCMChrgReq)
        {
            /* Switch: '<S14>/Switch12' incorporates:
             *  Constant: '<S63>/Calib'
             */
            SCPR_ac_B.VeSCPR_b_ChargeReq = KeSCPR_b_OvrdValBCMChrgReq;
        }
        else
        {
            /* Switch: '<S14>/Switch12' */
            SCPR_ac_B.VeSCPR_b_ChargeReq = VeSCPR_b_FinalChargeReq;
        }

        /* End of Switch: '<S14>/Switch12' */

        /* DataTypeConversion: '<S56>/DataTypeConversion' incorporates:
         *  Switch: '<S172>/Switch'
         */
        SCPR_ac_B.DataTypeConversion_mr = VeSCPR_e_Icon1_Cmd;

        /* DataTypeConversion: '<S57>/DataTypeConversion' incorporates:
         *  Switch: '<S172>/Switch1'
         */
        SCPR_ac_B.DataTypeConversion_k = VeSCPR_e_Icon2_Cmd;

        /* Switch: '<S14>/Switch14' incorporates:
         *  Constant: '<S59>/Calib'
         */
        if (KeSCPR_b_Est_SOC_Ovrd)
        {
            /* Switch: '<S14>/Switch14' incorporates:
             *  Constant: '<S58>/Calib'
             */
            SCPR_ac_B.VeSCPR_Pct_Est_SOC = KeSCPR_Pct_Est_SOC_OvrdVal;
        }
        else
        {
            /* Switch: '<S14>/Switch14' */
            SCPR_ac_B.VeSCPR_Pct_Est_SOC = VeSCPR_Pct_SOC_estimate;
        }

        /* End of Switch: '<S14>/Switch14' */

        /* Switch: '<S14>/Switch15' incorporates:
         *  Constant: '<S60>/Calib'
         */
        if (KeSCPR_b_NoChrgInterval_Ovrd)
        {
            /* Switch: '<S14>/Switch15' incorporates:
             *  Constant: '<S61>/Calib'
             */
            SCPR_ac_B.VeSCPR_b_NoChrgSchEnbl = KeSCPR_b_NoChrgInterval_OvrdVal;
        }
        else
        {
            /* Switch: '<S14>/Switch15' */
            SCPR_ac_B.VeSCPR_b_NoChrgSchEnbl = VeSCPR_b_NoChScheduleSet;
        }

        /* End of Switch: '<S14>/Switch15' */

        /* Gain: '<S68>/Gain' */
        SCPR_ac_B.Gain_co = VeSCPR_b_ButtonActive_Dr;

        /* DataTypeConversion: '<S55>/DataTypeConversion' incorporates:
         *  Switch: '<S587>/Switch1'
         */
        SCPR_ac_B.DataTypeConversion_b = Switch1_k;

        /* End of Outputs for SubSystem: '<S4>/OutputDelay' */

        /* Outputs for Function Call SubSystem: '<S1>/SCPC' */
        /* Switch: '<S306>/Switch1' incorporates:
         *  Logic: '<S293>/Logical12'
         *  Logic: '<S293>/Logical14'
         *  Logic: '<S293>/Logical15'
         *  Logic: '<S293>/Logical7'
         *  Logic: '<S293>/Logical8'
         *  Switch: '<S306>/Switch2'
         *  Switch: '<S306>/Switch3'
         */
        if (rtb_Logical6_ko && rtb_Logical11_i)
        {
            /* Outputs for Enabled SubSystem: '<S4>/OutputDelay' incorporates:
             *  EnablePort: '<S14>/Enable'
             */
            /* DataTypeConversion: '<S54>/DataTypeConversion' incorporates:
             *  Constant: '<S308>/Constant'
             */
            SCPR_ac_B.DataTypeConversion = CeSCPR_e_No_Selection;

            /* End of Outputs for SubSystem: '<S4>/OutputDelay' */
        }
        else if ((!rtb_Logical6_ko) && rtb_Logical11_i)
        {
            /* Outputs for Enabled SubSystem: '<S4>/OutputDelay' incorporates:
             *  EnablePort: '<S14>/Enable'
             */
            /* Switch: '<S306>/Switch2' incorporates:
             *  Constant: '<S309>/Constant'
             *  DataTypeConversion: '<S54>/DataTypeConversion'
             */
            SCPR_ac_B.DataTypeConversion = CeSCPR_e_Standard_Charge;

            /* End of Outputs for SubSystem: '<S4>/OutputDelay' */
        }
        else if (rtb_Logical6_ko && (!rtb_Logical11_i))
        {
            /* Outputs for Enabled SubSystem: '<S4>/OutputDelay' incorporates:
             *  EnablePort: '<S14>/Enable'
             */
            /* Switch: '<S306>/Switch3' incorporates:
             *  Constant: '<S305>/Constant'
             *  DataTypeConversion: '<S54>/DataTypeConversion'
             *  Switch: '<S306>/Switch2'
             */
            SCPR_ac_B.DataTypeConversion = CeSCPR_e_External_Charge;

            /* End of Outputs for SubSystem: '<S4>/OutputDelay' */
        }
        else
        {
            /* Outputs for Enabled SubSystem: '<S4>/OutputDelay' incorporates:
             *  EnablePort: '<S14>/Enable'
             */
            /* DataTypeConversion: '<S54>/DataTypeConversion' incorporates:
             *  Constant: '<S303>/Constant'
             *  Switch: '<S306>/Switch2'
             *  Switch: '<S306>/Switch3'
             */
            SCPR_ac_B.DataTypeConversion = CeSCPR_e_Both;

            /* End of Outputs for SubSystem: '<S4>/OutputDelay' */
        }

        /* End of Switch: '<S306>/Switch1' */
        /* End of Outputs for SubSystem: '<S1>/SCPC' */
    }

    /* End of If: '<S4>/If' */

    /* Outputs for Atomic SubSystem: '<S16>/Signal Latch On' */
    /* Logic: '<S91>/OR2' incorporates:
     *  Logic: '<S16>/OR1'
     *  UnitDelay: '<S91>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeC_i0 = ((!rtb_Logical4_d) ||
        (SCPR_ac_DW.UnitDelay_DSTATE_c2));

    /* Update for UnitDelay: '<S91>/Unit Delay' */
    SCPR_ac_DW.UnitDelay_DSTATE_c2 = rtb_TmpSignalConversionAtVeC_i0;

    /* End of Outputs for SubSystem: '<S16>/Signal Latch On' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Day' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Ext_Next_StopTime_Day'
     */
    (void)Rte_Write_VeSCPR_K_Ext_Next_StopTime_Day_Value(Merge10_e);

    /* Outport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Hr' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Ext_Next_StopTime_Hr'
     */
    (void)Rte_Write_VeSCPR_K_Ext_Next_StopTime_Hr_Value(Merge11_h);

    /* Outport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Min' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Ext_Next_StopTime_Min'
     */
    (void)Rte_Write_VeSCPR_K_Ext_Next_StopTime_Min_Value(Merge12_g);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Switch: '<S15>/Switch2' incorporates:
     *  Constant: '<S78>/Calib'
     */
    if (KeSCPR_b_NxtClimate_Day_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Climate_Day' incorporates:
         *  Constant: '<S69>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Climate_Day'
         */
        (void)Rte_Write_VeSCPR_K_Next_Climate_Day_Value
            (KeSCPR_K_NxtClimate_Day_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Climate_Day' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Climate_Day'
         */
        (void)Rte_Write_VeSCPR_K_Next_Climate_Day_Value
            (rtb_TmpSignalConversionAtVeCI_g);
    }

    /* End of Switch: '<S15>/Switch2' */

    /* Switch: '<S15>/Switch70' incorporates:
     *  Constant: '<S79>/Calib'
     */
    if (KeSCPR_b_NxtClimate_TimeHr_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Climate_Time_Hr' incorporates:
         *  Constant: '<S70>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Climate_Time_Hr'
         */
        (void)Rte_Write_VeSCPR_K_Next_Climate_Time_Hr_Value
            (KeSCPR_K_NxtClimate_TimeHr_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Climate_Time_Hr' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Climate_Time_Hr'
         */
        (void)Rte_Write_VeSCPR_K_Next_Climate_Time_Hr_Value
            (rtb_TmpSignalConversionAtVeCITR);
    }

    /* End of Switch: '<S15>/Switch70' */

    /* Switch: '<S15>/Switch1' incorporates:
     *  Constant: '<S80>/Calib'
     */
    if (KeSCPR_b_NxtClimate_TimeMin_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Climate_Time_Min' incorporates:
         *  Constant: '<S71>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Climate_Time_Min'
         */
        (void)Rte_Write_VeSCPR_K_Next_Climate_Time_Min_Value
            (KeSCPR_K_NxtClimate_TimeMin_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Climate_Time_Min' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Climate_Time_Min'
         */
        (void)Rte_Write_VeSCPR_K_Next_Climate_Time_Min_Value
            (rtb_TmpSignalConversionAtVeC_cs);
    }

    /* End of Switch: '<S15>/Switch1' */

    /* Switch: '<S15>/Switch5' incorporates:
     *  Constant: '<S82>/Calib'
     */
    if (KeSCPR_b_NxtSch_EndTimeHr_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Hr' incorporates:
         *  Constant: '<S73>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchEnd_Time_Hr'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchEnd_Time_Hr_Value
            (KeSCPR_K_NxtSch_EndTimeHr_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Hr' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchEnd_Time_Hr'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchEnd_Time_Hr_Value(rtb_Merge5);
    }

    /* End of Switch: '<S15>/Switch5' */

    /* Switch: '<S15>/Switch6' incorporates:
     *  Constant: '<S83>/Calib'
     */
    if (KeSCPR_b_NxtSch_EndTimeMin_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Min' incorporates:
         *  Constant: '<S74>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchEnd_Time_Min'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchEnd_Time_Min_Value
            (KeSCPR_K_NxtSch_EndTimeMin_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Min' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchEnd_Time_Min'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchEnd_Time_Min_Value(rtb_Merge6);
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Switch: '<S15>/Switch3' incorporates:
     *  Constant: '<S85>/Calib'
     */
    if (KeSCPR_b_NxtSch_StrtTimeHr_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchStart_Time_Hr' incorporates:
         *  Constant: '<S76>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchStart_Time_Hr'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchStart_Time_Hr_Value
            (KeSCPR_K_NxtSch_StrtTimeHr_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchStart_Time_Hr' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchStart_Time_Hr'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchStart_Time_Hr_Value
            (rtb_TmpSignalConversionAtVeCI_p);
    }

    /* End of Switch: '<S15>/Switch3' */

    /* Switch: '<S15>/Switch4' incorporates:
     *  Constant: '<S86>/Calib'
     */
    if (KeSCPR_b_NxtSch_StrtTimeMin_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchStart_Time_Min' incorporates:
         *  Constant: '<S77>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchStart_Time_Min'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchStart_Time_Min_Value
            (KeSCPR_K_NxtSch_StrtTimeMin_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_SchStart_Time_Min' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_SchStart_Time_Min'
         */
        (void)Rte_Write_VeSCPR_K_Next_SchStart_Time_Min_Value(rtb_Merge4_m);
    }

    /* End of Switch: '<S15>/Switch4' */

    /* Switch: '<S15>/Switch8' incorporates:
     *  Constant: '<S81>/Calib'
     */
    if (KeSCPR_b_NxtSch_EndDay_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Schedule_EndDay' incorporates:
         *  Constant: '<S72>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Schedule_EndDay'
         */
        (void)Rte_Write_VeSCPR_K_Next_Schedule_EndDay_Value
            (KeSCPR_K_NxtSch_EndDay_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Schedule_EndDay' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Schedule_EndDay'
         */
        (void)Rte_Write_VeSCPR_K_Next_Schedule_EndDay_Value(rtb_Merge8);
    }

    /* End of Switch: '<S15>/Switch8' */

    /* Switch: '<S15>/Switch7' incorporates:
     *  Constant: '<S84>/Calib'
     */
    if (KeSCPR_b_NxtSch_StrtDay_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Schedule_StartDay' incorporates:
         *  Constant: '<S75>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Schedule_StartDay'
         */
        (void)Rte_Write_VeSCPR_K_Next_Schedule_StartDay_Value
            (KeSCPR_K_NxtSch_StrtDay_OvrdVal);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_K_Next_Schedule_StartDay' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_K_Next_Schedule_StartDay'
         */
        (void)Rte_Write_VeSCPR_K_Next_Schedule_StartDay_Value(rtb_Merge7);
    }

    /* End of Switch: '<S15>/Switch7' */

    /* Outport: '<Root>/VeSCPR_K_Sch3_DaySts' incorporates:
     *  Gain: '<S108>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_DaySts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_DaySts_Value(SCPR_ac_B.DataStoreRead16_d);

    /* Outport: '<Root>/VeSCPR_K_Sch3_Day_Sts' incorporates:
     *  Constant: '<S7>/Constant Value10'
     *  Gain: '<S26>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_Day_Sts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_Day_Sts_Value((uint8)0U);

    /* Outport: '<Root>/VeSCPR_K_Sch3_DepHrSts' incorporates:
     *  Gain: '<S104>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_DepHrSts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_DepHrSts_Value(SCPR_ac_B.DataStoreRead14);

    /* Outport: '<Root>/VeSCPR_K_Sch3_DepMinSts' incorporates:
     *  Gain: '<S110>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_DepMinSts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_DepMinSts_Value(SCPR_ac_B.DataStoreRead15_n);

    /* Outport: '<Root>/VeSCPR_K_Sch3_End_Time_Hr_Sts' incorporates:
     *  Constant: '<S7>/Constant Value3'
     *  Gain: '<S32>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_End_Time_Hr_Sts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_End_Time_Hr_Sts_Value((sint16)0);

    /* Outport: '<Root>/VeSCPR_K_Sch3_End_Time_Min_Sts' incorporates:
     *  Constant: '<S7>/Constant Value6'
     *  Gain: '<S35>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_End_Time_Min_Sts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_End_Time_Min_Sts_Value((sint16)0);

    /* Outport: '<Root>/VeSCPR_K_Sch3_Start_Time_Hr_Sts' incorporates:
     *  Constant: '<S7>/Constant Value15'
     *  Gain: '<S29>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_Start_Time_Hr_Sts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_Start_Time_Hr_Sts_Value((sint16)0);

    /* Outport: '<Root>/VeSCPR_K_Sch3_Start_Time_Min_Sts' incorporates:
     *  Constant: '<S7>/Constant Value12'
     *  Gain: '<S27>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch3_Start_Time_Min_Sts'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_Start_Time_Min_Sts_Value((sint16)0);

    /* Outport: '<Root>/VeSCPR_K_Sch4_DaySts' incorporates:
     *  Gain: '<S105>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch4_DaySts'
     */
    (void)Rte_Write_VeSCPR_K_Sch4_DaySts_Value(SCPR_ac_B.DataStoreRead22_o);

    /* Outport: '<Root>/VeSCPR_K_Sch4_DepHrSts' incorporates:
     *  Gain: '<S102>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch4_DepHrSts'
     */
    (void)Rte_Write_VeSCPR_K_Sch4_DepHrSts_Value(SCPR_ac_B.DataStoreRead20_a);

    /* Outport: '<Root>/VeSCPR_K_Sch4_DepMinSts' incorporates:
     *  Gain: '<S111>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_K_Sch4_DepMinSts'
     */
    (void)Rte_Write_VeSCPR_K_Sch4_DepMinSts_Value(SCPR_ac_B.DataStoreRead21_m);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_Pct_Est_SOC' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_Pct_Est_SOC'
     */
    (void)Rte_Write_VeSCPR_Pct_Est_SOC_Value(SCPR_ac_B.VeSCPR_Pct_Est_SOC);

    /* Outport: '<Root>/VeSCPR_Pct_Ext_Next_ExtSOC_Trgt' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_Pct_Ext_Next_ExtSOC_Trgt'
     */
    (void)Rte_Write_VeSCPR_Pct_Ext_Next_ExtSOC_Trgt_Value(Merge14);

    /* Outport: '<Root>/VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt'
     */
    (void)Rte_Write_VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt_Value(Merge13);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Outport: '<Root>/VeSCPR_T_Sch3_DepTempSts' incorporates:
     *  Gain: '<S109>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_T_Sch3_DepTempSts'
     */
    (void)Rte_Write_VeSCPR_T_Sch3_DepTempSts_Value(SCPR_ac_B.DataStoreRead19);

    /* Outport: '<Root>/VeSCPR_T_Sch4_DepTempSts' incorporates:
     *  Gain: '<S103>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_T_Sch4_DepTempSts'
     */
    (void)Rte_Write_VeSCPR_T_Sch4_DepTempSts_Value(SCPR_ac_B.DataStoreRead25);

    /* Outport: '<Root>/VeSCPR_b_BattCabinPriority' incorporates:
     *  Constant: '<S7>/Constant Value11'
     *  Gain: '<S25>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_BattCabinPriority'
     */
    (void)Rte_Write_VeSCPR_b_BattCabinPriority_Value(false);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_b_ButtonActive_Door' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_b_ButtonActive_Door'
     */
    (void)Rte_Write_VeSCPR_b_ButtonActive_Door_Value(SCPR_ac_B.Gain_co);

    /* Outport: '<Root>/VeSCPR_b_ChargeReq' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_b_ChargeReq'
     */
    (void)Rte_Write_VeSCPR_b_ChargeReq_Value(SCPR_ac_B.VeSCPR_b_ChargeReq);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Outport: '<Root>/VeSCPR_b_FOTASchCnflct' incorporates:
     *  Gain: '<S18>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_FOTASchCnflct'
     */
    (void)Rte_Write_VeSCPR_b_FOTASchCnflct_Value(VeSCPR_b_FOTASched_Conflict);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_b_NoChrgSchEnbl' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_b_NoChrgSchEnbl'
     */
    (void)Rte_Write_VeSCPR_b_NoChrgSchEnbl_Value
        (SCPR_ac_B.VeSCPR_b_NoChrgSchEnbl);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Outport: '<Root>/VeSCPR_b_Sch1_Batt_CabinPriority_Sts' incorporates:
     *  Constant: '<S7>/Constant Value1'
     *  Gain: '<S24>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch1_Batt_CabinPriority_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch1_Batt_CabinPriority_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch1_Do_Not_Repeat_Sts' incorporates:
     *  Constant: '<S7>/Constant Value2'
     *  Gain: '<S31>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch1_Do_Not_Repeat_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch1_Do_Not_Repeat_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch2_Batt_CabinPriority_Sts' incorporates:
     *  Constant: '<S7>/Constant Value4'
     *  Gain: '<S33>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch2_Batt_CabinPriority_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch2_Batt_CabinPriority_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch2_Do_Not_Repeat_Sts' incorporates:
     *  Constant: '<S7>/Constant Value5'
     *  Gain: '<S34>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch2_Do_Not_Repeat_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch2_Do_Not_Repeat_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch3_Batt_CabinPriority_Sts' incorporates:
     *  Constant: '<S7>/Constant Value7'
     *  Gain: '<S36>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch3_Batt_CabinPriority_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_Batt_CabinPriority_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch3_ChargeUntilFull_Sts' incorporates:
     *  Constant: '<S7>/Constant Value8'
     *  Gain: '<S37>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch3_ChargeUntilFull_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_ChargeUntilFull_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch3_Confirmed' incorporates:
     *  Constant: '<S7>/Constant Value13'
     *  Gain: '<S28>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch3_Confirmed'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_Confirmed_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch3_Do_Not_Repeat_Sts' incorporates:
     *  Constant: '<S7>/Constant Value9'
     *  Gain: '<S38>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch3_Do_Not_Repeat_Sts'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_Do_Not_Repeat_Sts_Value(false);

    /* Outport: '<Root>/VeSCPR_b_Sch3_EnblSts' incorporates:
     *  Gain: '<S107>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch3_EnblSts'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_EnblSts_Value(SCPR_ac_B.DataStoreRead17_c);

    /* Outport: '<Root>/VeSCPR_b_Sch4_EnblSts' incorporates:
     *  Gain: '<S106>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_Sch4_EnblSts'
     */
    (void)Rte_Write_VeSCPR_b_Sch4_EnblSts_Value(SCPR_ac_B.DataStoreRead23_i);

    /* Outport: '<Root>/VeSCPR_b_SchChrg_OktoCharge' incorporates:
     *  Constant: '<S7>/Constant Value18'
     *  Gain: '<S30>/Gain'
     *  SignalConversion generated from: '<S1>/VeSCPR_b_SchChrg_OktoCharge'
     */
    (void)Rte_Write_VeSCPR_b_SchChrg_OktoCharge_Value(false);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_e_CPIM_Icon1_Cmd' incorporates:
     *  DataTypeConversion: '<S56>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_CPIM_Icon1_Cmd'
     */
    (void)Rte_Write_VeSCPR_e_CPIM_Icon1_Cmd_Value
        (SCPR_ac_B.DataTypeConversion_mr);

    /* Outport: '<Root>/VeSCPR_e_CPIM_Icon2_Cmd' incorporates:
     *  DataTypeConversion: '<S57>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_CPIM_Icon2_Cmd'
     */
    (void)Rte_Write_VeSCPR_e_CPIM_Icon2_Cmd_Value(SCPR_ac_B.DataTypeConversion_k);

    /* Outport: '<Root>/VeSCPR_e_CoopChrgStatus' incorporates:
     *  DataTypeConversion: '<S55>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_CoopChrgStatus'
     */
    (void)Rte_Write_VeSCPR_e_CoopChrgStatus_Value(SCPR_ac_B.DataTypeConversion_b);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S87>/Constant'
     *  Constant: '<S89>/Constant'
     *  Logic: '<S16>/OR2'
     *  Switch: '<S90>/Switch2'
     */
    if (!rtb_TmpSignalConversionAtVeCI_l)
    {
        rtb_TmpSignalConversionAtVeCI_0 = CeSCPR_e_InitInProg;
    }
    else if (rtb_TmpSignalConversionAtVeC_i0)
    {
        /* Switch: '<S90>/Switch2' incorporates:
         *  Constant: '<S88>/Constant'
         */
        rtb_TmpSignalConversionAtVeCI_0 = CeSCPR_e_InitComplete;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCI_0 = CeSCPR_e_InitDefault;
    }

    /* End of Switch: '<S90>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_e_InitStatus' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_e_InitStatus'
     */
    (void)Rte_Write_VeSCPR_e_InitStatus_Value(rtb_TmpSignalConversionAtVeCI_0);

    /* Outport: '<Root>/VeSCPR_e_Next_ChrgSchType' incorporates:
     *  DataTypeConversion: '<S54>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Next_ChrgSchType'
     */
    (void)Rte_Write_VeSCPR_e_Next_ChrgSchType_Value(SCPR_ac_B.DataTypeConversion);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Outport: '<Root>/VeSCPR_e_Sch1_ChrgSchType_Sts' incorporates:
     *  DataStoreRead: '<S799>/Data Store Read34'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch1_ChrgSchType_Sts'
     */
    (void)Rte_Write_VeSCPR_e_Sch1_ChrgSchType_Sts_Value
        (SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Outport: '<Root>/VeSCPR_e_Sch1_Type_Sts' incorporates:
     *  DataTypeConversion: '<S23>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch1_Type_Sts'
     */
    (void)Rte_Write_VeSCPR_e_Sch1_Type_Sts_Value((TeCITR_e_SchType)0U);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPI'
     */
    /* Outport: '<Root>/VeSCPR_e_Sch2_ChrgSchType_Sts' incorporates:
     *  DataStoreRead: '<S799>/Data Store Read35'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch2_ChrgSchType_Sts'
     */
    (void)Rte_Write_VeSCPR_e_Sch2_ChrgSchType_Sts_Value
        (SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Outport: '<Root>/VeSCPR_e_Sch2_Type_Sts' incorporates:
     *  DataTypeConversion: '<S21>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch2_Type_Sts'
     */
    (void)Rte_Write_VeSCPR_e_Sch2_Type_Sts_Value((TeCITR_e_SchType)0U);

    /* Outport: '<Root>/VeSCPR_e_Sch3_AllowSts' incorporates:
     *  DataStoreRead: '<S799>/Data Store Read18'
     *  DataTypeConversion: '<S100>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch3_AllowSts'
     */
    (void)Rte_Write_VeSCPR_e_Sch3_AllowSts_Value(SCPR_ac_B.DataStoreRead18_k);

    /* Outport: '<Root>/VeSCPR_e_Sch3_Type_Sts' incorporates:
     *  DataTypeConversion: '<S22>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch3_Type_Sts'
     */
    (void)Rte_Write_VeSCPR_e_Sch3_Type_Sts_Value((TeCITR_e_SchType)0U);

    /* Outport: '<Root>/VeSCPR_e_Sch4_AllowSts' incorporates:
     *  DataStoreRead: '<S799>/Data Store Read24'
     *  DataTypeConversion: '<S101>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeSCPR_e_Sch4_AllowSts'
     */
    (void)Rte_Write_VeSCPR_e_Sch4_AllowSts_Value(SCPR_ac_B.DataStoreRead24_k);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_e_SchCP_Allow' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_e_SchCP_Allow'
     *  Switch: '<S14>/Switch13'
     */
    (void)Rte_Write_VeSCPR_e_SchCP_Allow_Value(SCPR_ac_B.VeSCPR_e_SchCP_Allow);

    /* Outport: '<Root>/VeSCPR_t_SchChrg_WUTime' incorporates:
     *  SignalConversion generated from: '<S1>/VeSCPR_t_SchChrg_WUTime'
     */
    (void)Rte_Write_VeSCPR_t_SchChrg_WUTime_Value
        (SCPR_ac_B.VeSCPR_t_SchChrg_WUTime);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/OutputBlock'
     */
    /* Switch: '<S4>/Switch11' incorporates:
     *  Constant: '<S11>/Calib'
     *  Logic: '<S4>/OR1'
     *  Logic: '<S4>/OR2'
     *  Switch: '<S4>/Switch'
     */
    if (KeSCPR_b_TimeToDeparture_Ovrd)
    {
        /* Outport: '<Root>/VeSCPR_t_TimeToDeparture' incorporates:
         *  Constant: '<S13>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_t_TimeToDeparture'
         */
        (void)Rte_Write_VeSCPR_t_TimeToDeparture_Value
            (KeSCPR_t_TimeToDeparture_OvrdVal);
    }
    else if (rtb_TmpSignalConversionAtVeCI_l && (!VeSCPR_b_HU_CPImplDataRcvd))
    {
        /* Outport: '<Root>/VeSCPR_t_TimeToDeparture' incorporates:
         *  SignalConversion generated from: '<S1>/VeSCPR_t_TimeToDeparture'
         *  Switch: '<S4>/Switch'
         */
        (void)Rte_Write_VeSCPR_t_TimeToDeparture_Value(VeSCPR_K_NextCondWU);
    }
    else
    {
        /* Outport: '<Root>/VeSCPR_t_TimeToDeparture' incorporates:
         *  Constant: '<S12>/Calib'
         *  SignalConversion generated from: '<S1>/VeSCPR_t_TimeToDeparture'
         *  Switch: '<S4>/Switch'
         */
        (void)Rte_Write_VeSCPR_t_TimeToDeparture_Value(KeSCPR_t_DepInitTime);
    }

    /* End of Switch: '<S4>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_SCPR_1

FUNC(void, SCPR_CODE) SCPR_PwrOff(void)
{

#if Rte_SysCon_Variant_SCPR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/SCPR_FUNC_PwrOff' */
    /* Outport: '<Root>/FeSCPR_y_Sch1CH_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_y_Sch1CH_Day'
     */
    (void)Rte_Write_FeSCPR_y_Sch1CH_Day_FeSCPR_y_Sch1CH_Day(FeSCPR_y_Sch1CH_Day);

    /* Outport: '<Root>/FeSCPR_b_Sch1CP_DNR_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch1CP_DNR'
     */
    (void)Rte_Write_FeSCPR_b_Sch1CP_DNR_FeSCPR_b_Sch1CP_DNR(FeSCPR_b_Sch1CP_DNR);

    /* Outport: '<Root>/FeSCPR_y_Sch1CP_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_y_Sch1CP_Day'
     */
    (void)Rte_Write_FeSCPR_y_Sch1CP_Day_FeSCPR_y_Sch1CP_Day(FeSCPR_y_Sch1CP_Day);

    /* Outport: '<Root>/FeSCPR_y_Sch2CH_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_y_Sch2CH_Day'
     */
    (void)Rte_Write_FeSCPR_y_Sch2CH_Day_FeSCPR_y_Sch2CH_Day(FeSCPR_y_Sch2CH_Day);

    /* Outport: '<Root>/FeSCPR_b_Sch2CH_Enbl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch2CH_Enbl'
     */
    (void)Rte_Write_FeSCPR_b_Sch2CH_Enbl_FeSCPR_b_Sch2CH_Enbl
        (FeSCPR_b_Sch2CH_Enbl);

    /* Outport: '<Root>/FeSCPR_b_Sch2CH_ChrgUntFl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch2CH_ChrgUntFl'
     */
    (void)Rte_Write_FeSCPR_b_Sch2CH_ChrgUntFl_FeSCPR_b_Sch2CH_ChrgUntFl
        (FeSCPR_b_Sch2CH_ChrgUntFl);

    /* Outport: '<Root>/FeSCPR_b_Sch2CH_DNR_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch2CH_DNR'
     */
    (void)Rte_Write_FeSCPR_b_Sch2CH_DNR_FeSCPR_b_Sch2CH_DNR(FeSCPR_b_Sch2CH_DNR);

    /* Outport: '<Root>/FeSCPR_e_Sch2CH_StrtHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CH_StrtHr'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CH_StrtHr_FeSCPR_e_Sch2CH_StrtHr
        (FeSCPR_e_Sch2CH_StrtHr);

    /* Outport: '<Root>/FeSCPR_e_Sch2CH_StrtMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CH_StrtMin'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CH_StrtMin_FeSCPR_e_Sch2CH_StrtMin
        (FeSCPR_e_Sch2CH_StrtMin);

    /* Outport: '<Root>/FeSCPR_e_Sch2CH_EndHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CH_EndHr'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CH_EndHr_FeSCPR_e_Sch2CH_EndHr
        (FeSCPR_e_Sch2CH_EndHr);

    /* Outport: '<Root>/FeSCPR_e_Sch2CH_EndMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CH_EndMin'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CH_EndMin_FeSCPR_e_Sch2CH_EndMin
        (FeSCPR_e_Sch2CH_EndMin);

    /* Outport: '<Root>/FeSCPR_b_Sch1CH_Enbl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch1CH_Enbl'
     */
    (void)Rte_Write_FeSCPR_b_Sch1CH_Enbl_FeSCPR_b_Sch1CH_Enbl
        (FeSCPR_b_Sch1CH_Enbl);

    /* Outport: '<Root>/FeSCPR_b_Sch2CP_Enbl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch2CP_Enbl'
     */
    (void)Rte_Write_FeSCPR_b_Sch2CP_Enbl_FeSCPR_b_Sch2CP_Enbl
        (FeSCPR_b_Sch2CP_Enbl);

    /* Outport: '<Root>/FeSCPR_T_Sch2CP_DepTemp_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_T_Sch2CP_DepTemp'
     */
    (void)Rte_Write_FeSCPR_T_Sch2CP_DepTemp_FeSCPR_T_Sch2CP_DepTemp
        (FeSCPR_T_Sch2CP_DepTemp);

    /* Outport: '<Root>/FeSCPR_e_Sch2CP_Allow_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CP_Allow'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CP_Allow_FeSCPR_e_Sch2CP_Allow
        (FeSCPR_e_Sch2CP_Allow);

    /* Outport: '<Root>/FeSCPR_e_Sch2CP_DepHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CP_DepHr'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CP_DepHr_FeSCPR_e_Sch2CP_DepHr
        (FeSCPR_e_Sch2CP_DepHr);

    /* Outport: '<Root>/FeSCPR_e_Sch2CP_DepMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch2CP_DepMin'
     */
    (void)Rte_Write_FeSCPR_e_Sch2CP_DepMin_FeSCPR_e_Sch2CP_DepMin
        (FeSCPR_e_Sch2CP_DepMin);

    /* Outport: '<Root>/FeSCPR_b_Sch2CP_DNR_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch2CP_DNR'
     */
    (void)Rte_Write_FeSCPR_b_Sch2CP_DNR_FeSCPR_b_Sch2CP_DNR(FeSCPR_b_Sch2CP_DNR);

    /* Outport: '<Root>/FeSCPR_y_Sch2CP_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_y_Sch2CP_Day'
     */
    (void)Rte_Write_FeSCPR_y_Sch2CP_Day_FeSCPR_y_Sch2CP_Day(FeSCPR_y_Sch2CP_Day);

    /* Outport: '<Root>/FeSCPR_e_Sch1CH_StrtHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CH_StrtHr'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CH_StrtHr_FeSCPR_e_Sch1CH_StrtHr
        (FeSCPR_e_Sch1CH_StrtHr);

    /* Outport: '<Root>/FeSCPR_e_Sch1CH_StrtMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CH_StrtMin'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CH_StrtMin_FeSCPR_e_Sch1CH_StrtMin
        (FeSCPR_e_Sch1CH_StrtMin);

    /* Outport: '<Root>/FeSCPR_e_Sch1CH_EndHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CH_EndHr'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CH_EndHr_FeSCPR_e_Sch1CH_EndHr
        (FeSCPR_e_Sch1CH_EndHr);

    /* Outport: '<Root>/FeSCPR_b_Sch1CH_ChrgUntFl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch1CH_ChrgUntFl'
     */
    (void)Rte_Write_FeSCPR_b_Sch1CH_ChrgUntFl_FeSCPR_b_Sch1CH_ChrgUntFl
        (FeSCPR_b_Sch1CH_ChrgUntFl);

    /* Outport: '<Root>/FeSCPR_e_Sch1CH_EndMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CH_EndMin'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CH_EndMin_FeSCPR_e_Sch1CH_EndMin
        (FeSCPR_e_Sch1CH_EndMin);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCP_StrtMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCP_StrtMin'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCP_StrtMin_NeSCPR_e_NxtSchCP_StrtMin
        (SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtMin);

    /* Outport: '<Root>/NeSCPR_k_CabinTempSetPoint_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_k_CabinTempSetPoint'
     */
    (void)Rte_Write_NeSCPR_k_CabinTempSetPoint_NeSCPR_k_CabinTempSetPoint
        (SCPR_ac_DW.NeSCPR_k_CabinTempSetPoint);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCP_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCP_Day'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCP_Day_NeSCPR_e_NxtSchCP_Day
        (SCPR_ac_DW.NeSCPR_e_NxtSchCP_Day);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCP_StrtHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCP_StrtHr'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCP_StrtHr_NeSCPR_e_NxtSchCP_StrtHr
        (SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtHr);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCH_StrtHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCH_StrtHr'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCH_StrtHr_NeSCPR_e_NxtSchCH_StrtHr
        (SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtHr);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCH_StrtMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCH_StrtMin'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCH_StrtMin_NeSCPR_e_NxtSchCH_StrtMin
        (SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtMin);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCH_StrtDay_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCH_StrtDay'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCH_StrtDay_NeSCPR_e_NxtSchCH_StrtDay
        (SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtDay);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCH_EndHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCH_EndHr'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCH_EndHr_NeSCPR_e_NxtSchCH_EndHr
        (SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndHr);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCH_EndMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCH_EndMin'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCH_EndMin_NeSCPR_e_NxtSchCH_EndMin
        (SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndMin);

    /* Outport: '<Root>/FeSCPR_b_Sch1CH_DNR_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch1CH_DNR'
     */
    (void)Rte_Write_FeSCPR_b_Sch1CH_DNR_FeSCPR_b_Sch1CH_DNR(FeSCPR_b_Sch1CH_DNR);

    /* Outport: '<Root>/NeSCPR_e_NxtSchCH_EndDay_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_NxtSchCH_EndDay'
     */
    (void)Rte_Write_NeSCPR_e_NxtSchCH_EndDay_NeSCPR_e_NxtSchCH_EndDay
        (SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndDay);

    /* Outport: '<Root>/FeSCPR_b_Sch1CP_Enbl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_Sch1CP_Enbl'
     */
    (void)Rte_Write_FeSCPR_b_Sch1CP_Enbl_FeSCPR_b_Sch1CP_Enbl
        (FeSCPR_b_Sch1CP_Enbl);

    /* Outport: '<Root>/FeSCPR_T_Sch1CP_DepTemp_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_T_Sch1CP_DepTemp'
     */
    (void)Rte_Write_FeSCPR_T_Sch1CP_DepTemp_FeSCPR_T_Sch1CP_DepTemp
        (FeSCPR_T_Sch1CP_DepTemp);

    /* Outport: '<Root>/FeSCPR_e_Sch1CP_Allow_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CP_Allow'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CP_Allow_FeSCPR_e_Sch1CP_Allow
        (FeSCPR_e_Sch1CP_Allow);

    /* Outport: '<Root>/FeSCPR_e_Sch1CP_DepHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CP_DepHr'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CP_DepHr_FeSCPR_e_Sch1CP_DepHr
        (FeSCPR_e_Sch1CP_DepHr);

    /* Outport: '<Root>/FeSCPR_e_Sch1CP_DepMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_Sch1CP_DepMin'
     */
    (void)Rte_Write_FeSCPR_e_Sch1CP_DepMin_FeSCPR_e_Sch1CP_DepMin
        (FeSCPR_e_Sch1CP_DepMin);

    /* Outport: '<Root>/FeSCPR_b_CancelActFOTA_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_CancelActFOTA'
     */
    (void)Rte_Write_FeSCPR_b_CancelActFOTA_FeSCPR_b_CancelActFOTA
        (FeSCPR_b_CancelActFOTA);

    /* Outport: '<Root>/FeSCPR_b_ChrgNowLatch_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_ChrgNowLatch'
     */
    (void)Rte_Write_FeSCPR_b_ChrgNowLatch_FeSCPR_b_ChrgNowLatch
        (FeSCPR_b_ChrgNowLatch);

    /* Outport: '<Root>/FeSCPR_b_FOTA_Conflict_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_b_FOTA_Conflict'
     */
    (void)Rte_Write_FeSCPR_b_FOTA_Conflict_FeSCPR_b_FOTA_Conflict
        (FeSCPR_b_FOTA_Conflict);

    /* Outport: '<Root>/FeSCPR_e_FOTA_Install_Type_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_e_FOTA_Install_Type'
     */
    (void)Rte_Write_FeSCPR_e_FOTA_Install_Type_FeSCPR_e_FOTA_Install_Type
        (FeSCPR_e_FOTA_Install_Type);

    /* Outport: '<Root>/FeSCPR_g_ChrgNowMaxTimetoPlugin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/FeSCPR_g_ChrgNowMaxTimetoPlugin'
     */
    (void)
        Rte_Write_FeSCPR_g_ChrgNowMaxTimetoPlugin_FeSCPR_g_ChrgNowMaxTimetoPlugin
        (FeSCPR_g_ChrgNowMaxTimetoPlugin);

    /* Outport: '<Root>/NeSCPR_Pct_SOCArb_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_Pct_SOCArb'
     */
    (void)Rte_Write_NeSCPR_Pct_SOCArb_NeSCPR_Pct_SOCArb
        (SCPR_ac_DW.NeSCPR_Pct_SOCArb);

    /* Outport: '<Root>/NeSCPR_b_AllowCancel_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_AllowCancel'
     */
    (void)Rte_Write_NeSCPR_b_AllowCancel_NeSCPR_b_AllowCancel
        (SCPR_ac_DW.NeSCPR_b_AllowCancel);

    /* Outport: '<Root>/NeSCPR_b_CancSchedIsUF_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_CancSchedIsUF'
     */
    (void)Rte_Write_NeSCPR_b_CancSchedIsUF_NeSCPR_b_CancSchedIsUF
        (SCPR_ac_DW.NeSCPR_b_CancSchedIsUF);

    /* Outport: '<Root>/NeSCPR_b_CancWindow_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_CancWindow'
     */
    (void)Rte_Write_NeSCPR_b_CancWindow_NeSCPR_b_CancWindow
        (SCPR_ac_DW.NeSCPR_b_CancWindow);

    /* Outport: '<Root>/NeSCPR_b_ChrgComplete_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_ChrgComplete'
     */
    (void)Rte_Write_NeSCPR_b_ChrgComplete_NeSCPR_b_ChrgComplete
        (SCPR_ac_DW.NeSCPR_b_ChrgComplete);

    /* Outport: '<Root>/NeSCPR_b_PluginLatchOverride_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_PluginLatchOverride'
     */
    (void)Rte_Write_NeSCPR_b_PluginLatchOverride_NeSCPR_b_PluginLatchOverride
        (SCPR_ac_DW.NeSCPR_b_PluginLatchOverride);

    /* Outport: '<Root>/NeSCPR_b_RadioRqLstVldStt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_RadioRqLstVldStt'
     */
    (void)Rte_Write_NeSCPR_b_RadioRqLstVldStt_NeSCPR_b_RadioRqLstVldStt
        (SCPR_ac_DW.NeSCPR_b_RadioRqLstVldStt);

    /* Outport: '<Root>/NeSCPR_b_StopChrg_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_StopChrg'
     */
    (void)Rte_Write_NeSCPR_b_StopChrg_NeSCPR_b_StopChrg
        (SCPR_ac_DW.NeSCPR_b_StopChrg);

    /* Outport: '<Root>/NeSCPR_b_xMinUF_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_xMinUF'
     */
    (void)Rte_Write_NeSCPR_b_xMinUF_NeSCPR_b_xMinUF(SCPR_ac_DW.NeSCPR_b_xMinUF);

    /* Outport: '<Root>/NeSCPR_b_xMinUFCancel_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_b_xMinUFCancel'
     */
    (void)Rte_Write_NeSCPR_b_xMinUFCancel_NeSCPR_b_xMinUFCancel
        (SCPR_ac_DW.NeSCPR_b_xMinUFCancel);

    /* Outport: '<Root>/NeSCPR_e_CancStartIdxHold_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_CancStartIdxHold'
     */
    (void)Rte_Write_NeSCPR_e_CancStartIdxHold_NeSCPR_e_CancStartIdxHold
        (SCPR_ac_DW.NeSCPR_e_CancStartIdxHold);

    /* Outport: '<Root>/NeSCPR_e_CancelStartIndx_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_CancelStartIndx'
     */
    (void)Rte_Write_NeSCPR_e_CancelStartIndx_NeSCPR_e_CancelStartIndx
        (SCPR_ac_DW.NeSCPR_e_CancelStartIndx);

    /* Outport: '<Root>/NeSCPR_e_EndIndexCanc_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_EndIndexCanc'
     */
    (void)Rte_Write_NeSCPR_e_EndIndexCanc_NeSCPR_e_EndIndexCanc
        (SCPR_ac_DW.NeSCPR_e_EndIndexCanc);

    /* Outport: '<Root>/NeSCPR_e_LastNowIndex_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_e_LastNowIndex'
     */
    (void)Rte_Write_NeSCPR_e_LastNowIndex_NeSCPR_e_LastNowIndex
        (SCPR_ac_DW.NeSCPR_e_LastNowIndex);

    /* Outport: '<Root>/NeSCPR_g_DoNotRepeatValSch1_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_g_DoNotRepeatValSch1'
     */
    (void)Rte_Write_NeSCPR_g_DoNotRepeatValSch1_NeSCPR_g_DoNotRepeatValSch1
        (SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch1);

    /* Outport: '<Root>/NeSCPR_g_DoNotRepeatValSch2_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_g_DoNotRepeatValSch2'
     */
    (void)Rte_Write_NeSCPR_g_DoNotRepeatValSch2_NeSCPR_g_DoNotRepeatValSch2
        (SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch2);

    /* Outport: '<Root>/NeSCPR_g_Sch1CP_DNRvalue_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_g_Sch1CP_DNRvalue'
     */
    (void)Rte_Write_NeSCPR_g_Sch1CP_DNRvalue_NeSCPR_g_Sch1CP_DNRvalue
        (SCPR_ac_DW.NeSCPR_g_Sch1CP_DNRvalue);

    /* Outport: '<Root>/NeSCPR_g_Sch2CP_DNRvalue_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_g_Sch2CP_DNRvalue'
     */
    (void)Rte_Write_NeSCPR_g_Sch2CP_DNRvalue_NeSCPR_g_Sch2CP_DNRvalue
        (SCPR_ac_DW.NeSCPR_g_Sch2CP_DNRvalue);

    /* Outport: '<Root>/NeSCPR_k_CancGlEndTrack_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_k_CancGlEndTrack'
     */
    (void)Rte_Write_NeSCPR_k_CancGlEndTrack_NeSCPR_k_CancGlEndTrack
        (SCPR_ac_DW.NeSCPR_k_CancGlEndTrack);

    /* Outport: '<Root>/NeSCPR_k_CancGlStartTrack_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_k_CancGlStartTrack'
     */
    (void)Rte_Write_NeSCPR_k_CancGlStartTrack_NeSCPR_k_CancGlStartTrack
        (SCPR_ac_DW.NeSCPR_k_CancGlStartTrack);

    /* Outport: '<Root>/NeSCPR_k_CancOverlapTrack_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_k_CancOverlapTrack'
     */
    (void)Rte_Write_NeSCPR_k_CancOverlapTrack_NeSCPR_k_CancOverlapTrack
        (SCPR_ac_DW.NeSCPR_k_CancOverlapTrack);

    /* Outport: '<Root>/NeSCPR_k_LastRTC_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_k_LastRTC'
     */
    (void)Rte_Write_NeSCPR_k_LastRTC_NeSCPR_k_LastRTC
        (SCPR_ac_DW.NeSCPR_k_LastRTC);

    /* Outport: '<Root>/NeSCPR_k_LastSecond_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeSCPR_k_LastSecond'
     */
    (void)Rte_Write_NeSCPR_k_LastSecond_NeSCPR_k_LastSecond
        (SCPR_ac_DW.NeSCPR_k_LastSecond);

    /* Outport: '<Root>/NeSCPR_e_Sch1CoCH_StopHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read45'
     */
    (void)Rte_Write_NeSCPR_e_Sch1CoCH_StopHr_NeSCPR_e_Sch1CoCH_StopHr
        (SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopHr);

    /* Outport: '<Root>/NeSCPR_e_Sch1CoCH_StopMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read51'
     */
    (void)Rte_Write_NeSCPR_e_Sch1CoCH_StopMin_NeSCPR_e_Sch1CoCH_StopMin
        (SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopMin);

    /* Outport: '<Root>/NeSCPR_y_Sch1CoCH_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read52'
     */
    (void)Rte_Write_NeSCPR_y_Sch1CoCH_Day_NeSCPR_y_Sch1CoCH_Day
        (SCPR_ac_DW.NeSCPR_y_Sch1CoCH_Day);

    /* Outport: '<Root>/NeSCPR_b_Sch1CoCH_Enbl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read55'
     */
    (void)Rte_Write_NeSCPR_b_Sch1CoCH_Enbl_NeSCPR_b_Sch1CoCH_Enbl
        (SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl);

    /* Outport: '<Root>/NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read53'
     */
    (void)
        Rte_Write_NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt_NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt
        (SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt);

    /* Outport: '<Root>/NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read54'
     */
    (void)
        Rte_Write_NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt_NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt
        (SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt);

    /* Outport: '<Root>/NeSCPR_e_Sch1CH_SchType_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read34'
     */
    (void)Rte_Write_NeSCPR_e_Sch1CH_SchType_NeSCPR_e_Sch1CH_SchType
        (SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType);

    /* Outport: '<Root>/NeSCPR_e_Sch2CoCH_StopHr_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read46'
     */
    (void)Rte_Write_NeSCPR_e_Sch2CoCH_StopHr_NeSCPR_e_Sch2CoCH_StopHr
        (SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopHr);

    /* Outport: '<Root>/NeSCPR_e_Sch2CoCH_StopMin_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read48'
     */
    (void)Rte_Write_NeSCPR_e_Sch2CoCH_StopMin_NeSCPR_e_Sch2CoCH_StopMin
        (SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopMin);

    /* Outport: '<Root>/NeSCPR_y_Sch2CoCH_Day_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read49'
     */
    (void)Rte_Write_NeSCPR_y_Sch2CoCH_Day_NeSCPR_y_Sch2CoCH_Day
        (SCPR_ac_DW.NeSCPR_y_Sch2CoCH_Day);

    /* Outport: '<Root>/NeSCPR_b_Sch2CoCH_Enbl_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read50'
     */
    (void)Rte_Write_NeSCPR_b_Sch2CoCH_Enbl_NeSCPR_b_Sch2CoCH_Enbl
        (SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl);

    /* Outport: '<Root>/NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read37'
     */
    (void)
        Rte_Write_NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt_NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt
        (SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt);

    /* Outport: '<Root>/NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read44'
     */
    (void)
        Rte_Write_NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt_NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt
        (SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt);

    /* Outport: '<Root>/NeSCPR_e_Sch2CH_SchType_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read35'
     */
    (void)Rte_Write_NeSCPR_e_Sch2CH_SchType_NeSCPR_e_Sch2CH_SchType
        (SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType);

    /* Outport: '<Root>/NeSCPR_b_CoCh_VehLocation_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read'
     */
    (void)Rte_Write_NeSCPR_b_CoCh_VehLocation_NeSCPR_b_CoCh_VehLocation
        (SCPR_ac_DW.NeSCPR_b_CoCh_VehLocation);

    /* Outport: '<Root>/NeSCPR_b_CoCH_Sch1_DNR_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read1'
     */
    (void)Rte_Write_NeSCPR_b_CoCH_Sch1_DNR_NeSCPR_b_CoCH_Sch1_DNR
        (SCPR_ac_DW.NeSCPR_b_CoCH_Sch1_DNR);

    /* Outport: '<Root>/NeSCPR_b_CoCH_Sch2_DNR_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read2'
     */
    (void)Rte_Write_NeSCPR_b_CoCH_Sch2_DNR_NeSCPR_b_CoCH_Sch2_DNR
        (SCPR_ac_DW.NeSCPR_b_CoCH_Sch2_DNR);

    /* Outport: '<Root>/NeSCPR_g_Sch1CoCH_DNRvalue_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read4'
     */
    (void)Rte_Write_NeSCPR_g_Sch1CoCH_DNRvalue_NeSCPR_g_Sch1CoCH_DNRvalue
        (SCPR_ac_DW.NeSCPR_g_Sch2CoCH_DNRvalue);

    /* Outport: '<Root>/NeSCPR_g_Sch2CoCH_DNRvalue_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/Data Store Read3'
     */
    (void)Rte_Write_NeSCPR_g_Sch2CoCH_DNRvalue_NeSCPR_g_Sch2CoCH_DNRvalue
        (SCPR_ac_DW.NeSCPR_g_Sch1CoCH_DNRvalue);

    /* End of Outputs for SubSystem: '<Root>/SCPR_FUNC_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, SCPR_CODE) SCPR_PwrOn(void)
{

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_TmpSignalConversionAtFeSCPR;

#endif

#if Rte_SysCon_Variant_SCPR_1

    float32 rtb_TmpSignalConversionAtFeSC_n;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SCPR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* Outputs for Atomic SubSystem: '<S986>/Variant Subsystem' */
    /* SignalConversion generated from: '<S3>/FeSCPR_T_Sch2CP_DepTemp_PM_In' incorporates:
     *  SignalConversion generated from: '<S3>/FeSCPR_T_Sch1CP_DepTemp_PM_In'
     */
#if Rte_SysCon_Variant_SCPR_1

    /* Outputs for Atomic SubSystem: '<S989>/FUNC' */
    /* SignalConversion generated from: '<S3>/FeSCPR_T_Sch2CP_DepTemp_PM_In' incorporates:
     *  Inport: '<Root>/FeSCPR_T_Sch2CP_DepTemp_PM_In'
     */
    (void)Rte_Read_FeSCPR_T_Sch2CP_DepTemp_Rx_FeSCPR_T_Sch2CP_DepTemp
        (&rtb_TmpSignalConversionAtFeSCPR);

    /* SignalConversion generated from: '<S3>/FeSCPR_T_Sch1CP_DepTemp_PM_In' incorporates:
     *  Inport: '<Root>/FeSCPR_T_Sch1CP_DepTemp_PM_In'
     */
    (void)Rte_Read_FeSCPR_T_Sch1CP_DepTemp_Rx_FeSCPR_T_Sch1CP_DepTemp
        (&rtb_TmpSignalConversionAtFeSC_n);

    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S984>/Data Store Write18' incorporates:
     *  Inport: '<Root>/NeSCPR_g_Sch2CoCH_DNRvalue_PM_In'
     */
    (void)Rte_Read_NeSCPR_g_Sch2CoCH_DNRvalue_Rx_NeSCPR_g_Sch2CoCH_DNRvalue
        (&SCPR_ac_DW.NeSCPR_g_Sch2CoCH_DNRvalue);

    /* DataStoreWrite: '<S984>/Data Store Write17' incorporates:
     *  Inport: '<Root>/NeSCPR_g_Sch1CoCH_DNRvalue_PM_In'
     */
    (void)Rte_Read_NeSCPR_g_Sch1CoCH_DNRvalue_Rx_NeSCPR_g_Sch1CoCH_DNRvalue
        (&SCPR_ac_DW.NeSCPR_g_Sch1CoCH_DNRvalue);

    /* DataStoreWrite: '<S984>/Data Store Write16' incorporates:
     *  Inport: '<Root>/NeSCPR_b_CoCH_Sch2_DNR_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_CoCH_Sch2_DNR_Rx_NeSCPR_b_CoCH_Sch2_DNR
        (&SCPR_ac_DW.NeSCPR_b_CoCH_Sch2_DNR);

    /* DataStoreWrite: '<S984>/Data Store Write15' incorporates:
     *  Inport: '<Root>/NeSCPR_b_CoCH_Sch1_DNR_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_CoCH_Sch1_DNR_Rx_NeSCPR_b_CoCH_Sch1_DNR
        (&SCPR_ac_DW.NeSCPR_b_CoCH_Sch1_DNR);

    /* DataStoreWrite: '<S984>/Data Store Write' incorporates:
     *  Inport: '<Root>/NeSCPR_b_CoCh_VehLocation_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_CoCh_VehLocation_Rx_NeSCPR_b_CoCh_VehLocation
        (&SCPR_ac_DW.NeSCPR_b_CoCh_VehLocation);

    /* DataStoreWrite: '<S984>/Data Store Write13' incorporates:
     *  Inport: '<Root>/NeSCPR_e_Sch2CH_SchType_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_Sch2CH_SchType_Rx_NeSCPR_e_Sch2CH_SchType
        (&SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType);

    /* DataStoreWrite: '<S984>/Data Store Write12' incorporates:
     *  Inport: '<Root>/NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt_PM_In'
     */
    (void)
        Rte_Read_NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt_Rx_NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt
        (&SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt);

    /* DataStoreWrite: '<S984>/Data Store Write11' incorporates:
     *  Inport: '<Root>/NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt_PM_In'
     */
    (void)
        Rte_Read_NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt_Rx_NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt
        (&SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt);

    /* DataStoreWrite: '<S984>/Data Store Write10' incorporates:
     *  Inport: '<Root>/NeSCPR_b_Sch2CoCH_Enbl_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_Sch2CoCH_Enbl_Rx_NeSCPR_b_Sch2CoCH_Enbl
        (&SCPR_ac_DW.NeSCPR_b_Sch2CoCH_Enbl);

    /* DataStoreWrite: '<S984>/Data Store Write14' incorporates:
     *  Inport: '<Root>/NeSCPR_y_Sch2CoCH_Day_PM_In'
     */
    (void)Rte_Read_NeSCPR_y_Sch2CoCH_Day_Rx_NeSCPR_y_Sch2CoCH_Day
        (&SCPR_ac_DW.NeSCPR_y_Sch2CoCH_Day);

    /* DataStoreWrite: '<S984>/Data Store Write9' incorporates:
     *  Inport: '<Root>/NeSCPR_e_Sch2CoCH_StopMin_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_Sch2CoCH_StopMin_Rx_NeSCPR_e_Sch2CoCH_StopMin
        (&SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopMin);

    /* DataStoreWrite: '<S984>/Data Store Write8' incorporates:
     *  Inport: '<Root>/NeSCPR_e_Sch2CoCH_StopHr_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_Sch2CoCH_StopHr_Rx_NeSCPR_e_Sch2CoCH_StopHr
        (&SCPR_ac_DW.NeSCPR_e_Sch2CoCH_StopHr);

    /* DataStoreWrite: '<S984>/Data Store Write7' incorporates:
     *  Inport: '<Root>/NeSCPR_e_Sch1CH_SchType_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_Sch1CH_SchType_Rx_NeSCPR_e_Sch1CH_SchType
        (&SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType);

    /* DataStoreWrite: '<S984>/Data Store Write6' incorporates:
     *  Inport: '<Root>/NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt_PM_In'
     */
    (void)
        Rte_Read_NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt_Rx_NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt
        (&SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt);

    /* DataStoreWrite: '<S984>/Data Store Write5' incorporates:
     *  Inport: '<Root>/NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt_PM_In'
     */
    (void)
        Rte_Read_NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt_Rx_NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt
        (&SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt);

    /* DataStoreWrite: '<S984>/Data Store Write4' incorporates:
     *  Inport: '<Root>/NeSCPR_b_Sch1CoCH_Enbl_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_Sch1CoCH_Enbl_Rx_NeSCPR_b_Sch1CoCH_Enbl
        (&SCPR_ac_DW.NeSCPR_b_Sch1CoCH_Enbl);

    /* DataStoreWrite: '<S984>/Data Store Write3' incorporates:
     *  Inport: '<Root>/NeSCPR_y_Sch1CoCH_Day_PM_In'
     */
    (void)Rte_Read_NeSCPR_y_Sch1CoCH_Day_Rx_NeSCPR_y_Sch1CoCH_Day
        (&SCPR_ac_DW.NeSCPR_y_Sch1CoCH_Day);

    /* DataStoreWrite: '<S984>/Data Store Write2' incorporates:
     *  Inport: '<Root>/NeSCPR_e_Sch1CoCH_StopMin_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_Sch1CoCH_StopMin_Rx_NeSCPR_e_Sch1CoCH_StopMin
        (&SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopMin);

    /* DataStoreWrite: '<S984>/Data Store Write1' incorporates:
     *  Inport: '<Root>/NeSCPR_e_Sch1CoCH_StopHr_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_Sch1CoCH_StopHr_Rx_NeSCPR_e_Sch1CoCH_StopHr
        (&SCPR_ac_DW.NeSCPR_e_Sch1CoCH_StopHr);

    /* DataStoreWrite: '<S984>/NeSCPR_k_LastSecond' incorporates:
     *  Inport: '<Root>/NeSCPR_k_LastSecond_PM_In'
     */
    (void)Rte_Read_NeSCPR_k_LastSecond_Rx_NeSCPR_k_LastSecond
        (&SCPR_ac_DW.NeSCPR_k_LastSecond);

    /* DataStoreWrite: '<S984>/NeSCPR_k_LastRTC' incorporates:
     *  Inport: '<Root>/NeSCPR_k_LastRTC_PM_In'
     */
    (void)Rte_Read_NeSCPR_k_LastRTC_Rx_NeSCPR_k_LastRTC
        (&SCPR_ac_DW.NeSCPR_k_LastRTC);

    /* DataStoreWrite: '<S984>/NeSCPR_k_CancOverlapTrack' incorporates:
     *  Inport: '<Root>/NeSCPR_k_CancOverlapTrack_PM_In'
     */
    (void)Rte_Read_NeSCPR_k_CancOverlapTrack_Rx_NeSCPR_k_CancOverlapTrack
        (&SCPR_ac_DW.NeSCPR_k_CancOverlapTrack);

    /* DataStoreWrite: '<S984>/NeSCPR_k_CancGlStartTrack' incorporates:
     *  Inport: '<Root>/NeSCPR_k_CancGlStartTrack_PM_In'
     */
    (void)Rte_Read_NeSCPR_k_CancGlStartTrack_Rx_NeSCPR_k_CancGlStartTrack
        (&SCPR_ac_DW.NeSCPR_k_CancGlStartTrack);

    /* DataStoreWrite: '<S984>/NeSCPR_k_CancGlEndTrack' incorporates:
     *  Inport: '<Root>/NeSCPR_k_CancGlEndTrack_PM_In'
     */
    (void)Rte_Read_NeSCPR_k_CancGlEndTrack_Rx_NeSCPR_k_CancGlEndTrack
        (&SCPR_ac_DW.NeSCPR_k_CancGlEndTrack);

    /* DataStoreWrite: '<S984>/NeSCPR_g_Sch2CP_DNRvalue' incorporates:
     *  Inport: '<Root>/NeSCPR_g_Sch2CP_DNRvalue_PM_In'
     */
    (void)Rte_Read_NeSCPR_g_Sch2CP_DNRvalue_Rx_NeSCPR_g_Sch2CP_DNRvalue
        (&SCPR_ac_DW.NeSCPR_g_Sch2CP_DNRvalue);

    /* DataStoreWrite: '<S984>/NeSCPR_g_Sch1CP_DNRvalue' incorporates:
     *  Inport: '<Root>/NeSCPR_g_Sch1CP_DNRvalue_PM_In'
     */
    (void)Rte_Read_NeSCPR_g_Sch1CP_DNRvalue_Rx_NeSCPR_g_Sch1CP_DNRvalue
        (&SCPR_ac_DW.NeSCPR_g_Sch1CP_DNRvalue);

    /* DataStoreWrite: '<S984>/NeSCPR_g_DoNotRepeatValSch2' incorporates:
     *  Inport: '<Root>/NeSCPR_g_DoNotRepeatValSch2_PM_In'
     */
    (void)Rte_Read_NeSCPR_g_DoNotRepeatValSch2_Rx_NeSCPR_g_DoNotRepeatValSch2
        (&SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch2);

    /* DataStoreWrite: '<S984>/NeSCPR_g_DoNotRepeatValSch1' incorporates:
     *  Inport: '<Root>/NeSCPR_g_DoNotRepeatValSch1_PM_In'
     */
    (void)Rte_Read_NeSCPR_g_DoNotRepeatValSch1_Rx_NeSCPR_g_DoNotRepeatValSch1
        (&SCPR_ac_DW.NeSCPR_g_DoNotRepeatValSch1);

    /* DataStoreWrite: '<S984>/NeSCPR_e_LastNowIndex' incorporates:
     *  Inport: '<Root>/NeSCPR_e_LastNowIndex_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_LastNowIndex_Rx_NeSCPR_e_LastNowIndex
        (&SCPR_ac_DW.NeSCPR_e_LastNowIndex);

    /* DataStoreWrite: '<S984>/NeSCPR_e_EndIndexCanc' incorporates:
     *  Inport: '<Root>/NeSCPR_e_EndIndexCanc_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_EndIndexCanc_Rx_NeSCPR_e_EndIndexCanc
        (&SCPR_ac_DW.NeSCPR_e_EndIndexCanc);

    /* DataStoreWrite: '<S984>/NeSCPR_e_CancelStartIndx' incorporates:
     *  Inport: '<Root>/NeSCPR_e_CancelStartIndx_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_CancelStartIndx_Rx_NeSCPR_e_CancelStartIndx
        (&SCPR_ac_DW.NeSCPR_e_CancelStartIndx);

    /* DataStoreWrite: '<S984>/NeSCPR_e_CancStartIdxHold' incorporates:
     *  Inport: '<Root>/NeSCPR_e_CancStartIdxHold_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_CancStartIdxHold_Rx_NeSCPR_e_CancStartIdxHold
        (&SCPR_ac_DW.NeSCPR_e_CancStartIdxHold);

    /* DataStoreWrite: '<S984>/NeSCPR_b_xMinUFCancel' incorporates:
     *  Inport: '<Root>/NeSCPR_b_xMinUFCancel_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_xMinUFCancel_Rx_NeSCPR_b_xMinUFCancel
        (&SCPR_ac_DW.NeSCPR_b_xMinUFCancel);

    /* DataStoreWrite: '<S984>/NeSCPR_b_xMinUF' incorporates:
     *  Inport: '<Root>/NeSCPR_b_xMinUF_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_xMinUF_Rx_NeSCPR_b_xMinUF
        (&SCPR_ac_DW.NeSCPR_b_xMinUF);

    /* DataStoreWrite: '<S984>/NeSCPR_b_StopChrg' incorporates:
     *  Inport: '<Root>/NeSCPR_b_StopChrg_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_StopChrg_Rx_NeSCPR_b_StopChrg
        (&SCPR_ac_DW.NeSCPR_b_StopChrg);

    /* DataStoreWrite: '<S984>/NeSCPR_b_RadioRqLstVldStt' incorporates:
     *  Inport: '<Root>/NeSCPR_b_RadioRqLstVldStt_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_RadioRqLstVldStt_Rx_NeSCPR_b_RadioRqLstVldStt
        (&SCPR_ac_DW.NeSCPR_b_RadioRqLstVldStt);

    /* DataStoreWrite: '<S984>/NeSCPR_b_PluginLatchOverride' incorporates:
     *  Inport: '<Root>/NeSCPR_b_PluginLatchOverride_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_PluginLatchOverride_Rx_NeSCPR_b_PluginLatchOverride(
        &SCPR_ac_DW.NeSCPR_b_PluginLatchOverride);

    /* DataStoreWrite: '<S984>/NeSCPR_b_ChrgComplete' incorporates:
     *  Inport: '<Root>/NeSCPR_b_ChrgComplete_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_ChrgComplete_Rx_NeSCPR_b_ChrgComplete
        (&SCPR_ac_DW.NeSCPR_b_ChrgComplete);

    /* DataStoreWrite: '<S984>/NeSCPR_b_CancWindow' incorporates:
     *  Inport: '<Root>/NeSCPR_b_CancWindow_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_CancWindow_Rx_NeSCPR_b_CancWindow
        (&SCPR_ac_DW.NeSCPR_b_CancWindow);

    /* DataStoreWrite: '<S984>/NeSCPR_b_CancSchedIsUF' incorporates:
     *  Inport: '<Root>/NeSCPR_b_CancSchedIsUF_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_CancSchedIsUF_Rx_NeSCPR_b_CancSchedIsUF
        (&SCPR_ac_DW.NeSCPR_b_CancSchedIsUF);

    /* DataStoreWrite: '<S984>/NeSCPR_b_AllowCancel' incorporates:
     *  Inport: '<Root>/NeSCPR_b_AllowCancel_PM_In'
     */
    (void)Rte_Read_NeSCPR_b_AllowCancel_Rx_NeSCPR_b_AllowCancel
        (&SCPR_ac_DW.NeSCPR_b_AllowCancel);

    /* DataStoreWrite: '<S984>/NeSCPR_Pct_SOCArb' incorporates:
     *  Inport: '<Root>/NeSCPR_Pct_SOCArb_PM_In'
     */
    (void)Rte_Read_NeSCPR_Pct_SOCArb_Rx_NeSCPR_Pct_SOCArb
        (&SCPR_ac_DW.NeSCPR_Pct_SOCArb);

    /* DataStoreWrite: '<S984>/FeSCPR_g_ChrgNowMaxTimetoPlugin' incorporates:
     *  Inport: '<Root>/FeSCPR_g_ChrgNowMaxTimetoPlugin_PM_In'
     */
    (void)
        Rte_Read_FeSCPR_g_ChrgNowMaxTimetoPlugin_Rx_FeSCPR_g_ChrgNowMaxTimetoPlugin
        ((&(FeSCPR_g_ChrgNowMaxTimetoPlugin)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_FOTA_Install_Type' incorporates:
     *  Inport: '<Root>/FeSCPR_e_FOTA_Install_Type_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_FOTA_Install_Type_Rx_FeSCPR_e_FOTA_Install_Type
        ((&(FeSCPR_e_FOTA_Install_Type)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_FOTA_Conflict' incorporates:
     *  Inport: '<Root>/FeSCPR_b_FOTA_Conflict_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_FOTA_Conflict_Rx_FeSCPR_b_FOTA_Conflict
        ((&(FeSCPR_b_FOTA_Conflict)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_ChrgNowLatch' incorporates:
     *  Inport: '<Root>/FeSCPR_b_ChrgNowLatch_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_ChrgNowLatch_Rx_FeSCPR_b_ChrgNowLatch
        ((&(FeSCPR_b_ChrgNowLatch)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_CancelActFOTA' incorporates:
     *  Inport: '<Root>/FeSCPR_b_CancelActFOTA_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_CancelActFOTA_Rx_FeSCPR_b_CancelActFOTA
        ((&(FeSCPR_b_CancelActFOTA)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CP_DepMin' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CP_DepMin_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CP_DepMin_Rx_FeSCPR_e_Sch1CP_DepMin
        ((&(FeSCPR_e_Sch1CP_DepMin)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CP_DepHr' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CP_DepHr_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CP_DepHr_Rx_FeSCPR_e_Sch1CP_DepHr
        ((&(FeSCPR_e_Sch1CP_DepHr)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CP_Allow' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CP_Allow_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CP_Allow_Rx_FeSCPR_e_Sch1CP_Allow
        ((&(FeSCPR_e_Sch1CP_Allow)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch1CP_Enbl' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch1CP_Enbl_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch1CP_Enbl_Rx_FeSCPR_b_Sch1CP_Enbl
        ((&(FeSCPR_b_Sch1CP_Enbl)));

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCH_EndDay' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCH_EndDay_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCH_EndDay_Rx_NeSCPR_e_NxtSchCH_EndDay
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndDay);

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch1CH_DNR' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch1CH_DNR_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch1CH_DNR_Rx_FeSCPR_b_Sch1CH_DNR
        ((&(FeSCPR_b_Sch1CH_DNR)));

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCH_EndMin' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCH_EndMin_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCH_EndMin_Rx_NeSCPR_e_NxtSchCH_EndMin
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndMin);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCH_EndHr' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCH_EndHr_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCH_EndHr_Rx_NeSCPR_e_NxtSchCH_EndHr
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndHr);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCH_StrtDay' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCH_StrtDay_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCH_StrtDay_Rx_NeSCPR_e_NxtSchCH_StrtDay
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtDay);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCH_StrtMin' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCH_StrtMin_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCH_StrtMin_Rx_NeSCPR_e_NxtSchCH_StrtMin
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtMin);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCH_StrtHr' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCH_StrtHr_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCH_StrtHr_Rx_NeSCPR_e_NxtSchCH_StrtHr
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtHr);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCP_StrtHr' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCP_StrtHr_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCP_StrtHr_Rx_NeSCPR_e_NxtSchCP_StrtHr
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtHr);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCP_Day' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCP_Day_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCP_Day_Rx_NeSCPR_e_NxtSchCP_Day
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCP_Day);

    /* DataStoreWrite: '<S984>/NeSCPR_k_CabinTempSetPoint' incorporates:
     *  Inport: '<Root>/NeSCPR_k_CabinTempSetPoint_PM_In'
     */
    (void)Rte_Read_NeSCPR_k_CabinTempSetPoint_Rx_NeSCPR_k_CabinTempSetPoint
        (&SCPR_ac_DW.NeSCPR_k_CabinTempSetPoint);

    /* DataStoreWrite: '<S984>/NeSCPR_e_NxtSchCP_StrtMin' incorporates:
     *  Inport: '<Root>/NeSCPR_e_NxtSchCP_StrtMin_PM_In'
     */
    (void)Rte_Read_NeSCPR_e_NxtSchCP_StrtMin_Rx_NeSCPR_e_NxtSchCP_StrtMin
        (&SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtMin);

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CH_EndMin' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CH_EndMin_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CH_EndMin_Rx_FeSCPR_e_Sch1CH_EndMin
        ((&(FeSCPR_e_Sch1CH_EndMin)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch1CH_ChrgUntFl' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch1CH_ChrgUntFl_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch1CH_ChrgUntFl_Rx_FeSCPR_b_Sch1CH_ChrgUntFl
        ((&(FeSCPR_b_Sch1CH_ChrgUntFl)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CH_EndHr' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CH_EndHr_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CH_EndHr_Rx_FeSCPR_e_Sch1CH_EndHr
        ((&(FeSCPR_e_Sch1CH_EndHr)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CH_StrtMin' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CH_StrtMin_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CH_StrtMin_Rx_FeSCPR_e_Sch1CH_StrtMin
        ((&(FeSCPR_e_Sch1CH_StrtMin)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch1CH_StrtHr' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch1CH_StrtHr_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch1CH_StrtHr_Rx_FeSCPR_e_Sch1CH_StrtHr
        ((&(FeSCPR_e_Sch1CH_StrtHr)));

    /* DataStoreWrite: '<S984>/FeSCPR_y_Sch2CP_Day' incorporates:
     *  Inport: '<Root>/FeSCPR_y_Sch2CP_Day_PM_In'
     */
    (void)Rte_Read_FeSCPR_y_Sch2CP_Day_Rx_FeSCPR_y_Sch2CP_Day
        ((&(FeSCPR_y_Sch2CP_Day)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch2CP_DNR' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch2CP_DNR_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch2CP_DNR_Rx_FeSCPR_b_Sch2CP_DNR
        ((&(FeSCPR_b_Sch2CP_DNR)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CP_DepMin' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CP_DepMin_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CP_DepMin_Rx_FeSCPR_e_Sch2CP_DepMin
        ((&(FeSCPR_e_Sch2CP_DepMin)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CP_DepHr' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CP_DepHr_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CP_DepHr_Rx_FeSCPR_e_Sch2CP_DepHr
        ((&(FeSCPR_e_Sch2CP_DepHr)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CP_Allow' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CP_Allow_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CP_Allow_Rx_FeSCPR_e_Sch2CP_Allow
        ((&(FeSCPR_e_Sch2CP_Allow)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch2CP_Enbl' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch2CP_Enbl_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch2CP_Enbl_Rx_FeSCPR_b_Sch2CP_Enbl
        ((&(FeSCPR_b_Sch2CP_Enbl)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch1CH_Enbl' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch1CH_Enbl_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch1CH_Enbl_Rx_FeSCPR_b_Sch1CH_Enbl
        ((&(FeSCPR_b_Sch1CH_Enbl)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CH_EndMin' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CH_EndMin_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CH_EndMin_Rx_FeSCPR_e_Sch2CH_EndMin
        ((&(FeSCPR_e_Sch2CH_EndMin)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CH_EndHr' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CH_EndHr_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CH_EndHr_Rx_FeSCPR_e_Sch2CH_EndHr
        ((&(FeSCPR_e_Sch2CH_EndHr)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CH_StrtMin' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CH_StrtMin_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CH_StrtMin_Rx_FeSCPR_e_Sch2CH_StrtMin
        ((&(FeSCPR_e_Sch2CH_StrtMin)));

    /* DataStoreWrite: '<S984>/FeSCPR_e_Sch2CH_StrtHr' incorporates:
     *  Inport: '<Root>/FeSCPR_e_Sch2CH_StrtHr_PM_In'
     */
    (void)Rte_Read_FeSCPR_e_Sch2CH_StrtHr_Rx_FeSCPR_e_Sch2CH_StrtHr
        ((&(FeSCPR_e_Sch2CH_StrtHr)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch2CH_DNR' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch2CH_DNR_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch2CH_DNR_Rx_FeSCPR_b_Sch2CH_DNR
        ((&(FeSCPR_b_Sch2CH_DNR)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch2CH_ChrgUntFl' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch2CH_ChrgUntFl_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch2CH_ChrgUntFl_Rx_FeSCPR_b_Sch2CH_ChrgUntFl
        ((&(FeSCPR_b_Sch2CH_ChrgUntFl)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch2CH_Enbl' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch2CH_Enbl_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch2CH_Enbl_Rx_FeSCPR_b_Sch2CH_Enbl
        ((&(FeSCPR_b_Sch2CH_Enbl)));

    /* DataStoreWrite: '<S984>/FeSCPR_y_Sch2CH_Day' incorporates:
     *  Inport: '<Root>/FeSCPR_y_Sch2CH_Day_PM_In'
     */
    (void)Rte_Read_FeSCPR_y_Sch2CH_Day_Rx_FeSCPR_y_Sch2CH_Day
        ((&(FeSCPR_y_Sch2CH_Day)));

    /* DataStoreWrite: '<S984>/FeSCPR_y_Sch1CP_Day' incorporates:
     *  Inport: '<Root>/FeSCPR_y_Sch1CP_Day_PM_In'
     */
    (void)Rte_Read_FeSCPR_y_Sch1CP_Day_Rx_FeSCPR_y_Sch1CP_Day
        ((&(FeSCPR_y_Sch1CP_Day)));

    /* DataStoreWrite: '<S984>/FeSCPR_b_Sch1CP_DNR' incorporates:
     *  Inport: '<Root>/FeSCPR_b_Sch1CP_DNR_PM_In'
     */
    (void)Rte_Read_FeSCPR_b_Sch1CP_DNR_Rx_FeSCPR_b_Sch1CP_DNR
        ((&(FeSCPR_b_Sch1CP_DNR)));

    /* DataStoreWrite: '<S984>/FeSCPR_y_Sch1CH_Day' incorporates:
     *  Inport: '<Root>/FeSCPR_y_Sch1CH_Day_PM_In'
     */
    (void)Rte_Read_FeSCPR_y_Sch1CH_Day_Rx_FeSCPR_y_Sch1CH_Day
        ((&(FeSCPR_y_Sch1CH_Day)));

    /* Switch: '<S984>/Switch1' incorporates:
     *  Constant: '<S984>/Constant1'
     *  Constant: '<S988>/Calib'
     *  DataStoreWrite: '<S984>/FeSCPR_T_Sch2CP_DepTemp'
     *  RelationalOperator: '<S984>/notEqualTo1'
     */
    if (rtb_TmpSignalConversionAtFeSCPR > -7.777777E+6F)
    {
        FeSCPR_T_Sch2CP_DepTemp = rtb_TmpSignalConversionAtFeSCPR;
    }
    else
    {
        FeSCPR_T_Sch2CP_DepTemp = KeSCPR_T_Sch4_DepTemp_Init;
    }

    /* End of Switch: '<S984>/Switch1' */

    /* Switch: '<S984>/Switch' incorporates:
     *  Constant: '<S984>/Constant'
     *  Constant: '<S987>/Calib'
     *  DataStoreWrite: '<S984>/FeSCPR_T_Sch1CP_DepTemp'
     *  RelationalOperator: '<S984>/notEqualTo'
     */
    if (rtb_TmpSignalConversionAtFeSC_n > -7.777777E+6F)
    {
        FeSCPR_T_Sch1CP_DepTemp = rtb_TmpSignalConversionAtFeSC_n;
    }
    else
    {
        FeSCPR_T_Sch1CP_DepTemp = KeSCPR_T_Sch3_DepTemp_Init;
    }

    /* End of Switch: '<S984>/Switch' */
    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */

    /* Outputs for Function Call SubSystem: '<S3>/InitOutputs' */
    /* SignalConversion generated from: '<S985>/Init_Ext_Next_StopTime_Day' */
    SCPR_ac_B.OutportBufferForInit_Ext_Next_S = 0;

    /* SignalConversion generated from: '<S985>/Init_Ext_Next_StopTime_Hr' */
    SCPR_ac_B.OutportBufferForInit_Ext_Next_a = 0;

    /* SignalConversion generated from: '<S985>/Init_Next_StopTime_Min' */
    SCPR_ac_B.OutportBufferForInit_Next_StopT = 0;

    /* SignalConversion generated from: '<S985>/Init_Ext_Next_ImmedSOC_Trgt' */
    SCPR_ac_B.OutportBufferForInit_Ext_Next_I = 100.0F;

    /* SignalConversion generated from: '<S985>/Init_Ext_Next_ExtSOC_Trgt' */
    SCPR_ac_B.OutportBufferForInit_Ext_Next_E = 100.0F;

    /* VariantMerge generated from: '<S989>/Sch1CH_StrtHr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read8'
     *  Inport: '<S990>/Sch1CH_StrtHr'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_St = FeSCPR_e_Sch1CH_StrtHr;

    /* VariantMerge generated from: '<S989>/Sch1CH_StrtMin_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read10'
     *  Inport: '<S990>/Sch1CH_StrtMin'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH__a = FeSCPR_e_Sch1CH_StrtMin;

    /* VariantMerge generated from: '<S989>/Sch1CH_EndHr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read21'
     *  Inport: '<S990>/Sch1CH_EndHr'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_En = FeSCPR_e_Sch1CH_EndHr;

    /* VariantMerge generated from: '<S989>/Sch1CH_EndMin_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read32'
     *  Inport: '<S990>/Sch1CH_EndMin'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH__g = FeSCPR_e_Sch1CH_EndMin;

    /* VariantMerge generated from: '<S989>/Sch1CH_Days_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read33'
     *  Inport: '<S990>/Sch1CH_Days'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_Da = FeSCPR_y_Sch1CH_Day;

    /* VariantMerge generated from: '<S989>/Sch1CH_Enbl_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read34'
     *  Inport: '<S990>/Sch1CH_Enbl'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH__j = FeSCPR_b_Sch1CH_Enbl;

    /* VariantMerge generated from: '<S989>/Sch1CH_ChrgUntFl_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read35'
     *  Inport: '<S990>/Sch1CH_ChrgUntFl'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_Ch = FeSCPR_b_Sch1CH_ChrgUntFl;

    /* VariantMerge generated from: '<S989>/Sch2CH_StrtHr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read36'
     *  Inport: '<S990>/Sch2CH_StrtHr'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_St = FeSCPR_e_Sch2CH_StrtHr;

    /* VariantMerge generated from: '<S989>/Sch2CH_StrtMin_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read37'
     *  Inport: '<S990>/Sch2CH_StrtMin'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_fa = FeSCPR_e_Sch2CH_StrtMin;

    /* VariantMerge generated from: '<S989>/Sch2CH_EndHr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read38'
     *  Inport: '<S990>/Sch2CH_EndHr'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_En = FeSCPR_e_Sch2CH_EndHr;

    /* VariantMerge generated from: '<S989>/Sch2CH_EndMin_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read11'
     *  Inport: '<S990>/Sch2CH_EndMin'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH__f = FeSCPR_e_Sch2CH_EndMin;

    /* VariantMerge generated from: '<S989>/Sch2CH_Days_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read12'
     *  Inport: '<S990>/Sch2CH_Days'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_Da = FeSCPR_y_Sch2CH_Day;

    /* VariantMerge generated from: '<S989>/Sch2CH_Enbl_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read13'
     *  Inport: '<S990>/Sch2CH_Enbl'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH__i = FeSCPR_b_Sch2CH_Enbl;

    /* VariantMerge generated from: '<S989>/Sch2CH_ChrgUntFl_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read14'
     *  Inport: '<S990>/Sch2CH_ChrgUntFl'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_Ch = FeSCPR_b_Sch2CH_ChrgUntFl;

    /* VariantMerge generated from: '<S989>/Sch1CP_DepHr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read15'
     *  Inport: '<S990>/Sch1CP_DepHr'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP__k = FeSCPR_e_Sch1CP_DepHr;

    /* VariantMerge generated from: '<S989>/Sch1CP_DepMin_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read16'
     *  Inport: '<S990>/Sch1CP_DepMin'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP__o = FeSCPR_e_Sch1CP_DepMin;

    /* VariantMerge generated from: '<S989>/Sch1CP_Days_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read17'
     *  Inport: '<S990>/Sch1CP_Days'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_Da = FeSCPR_y_Sch1CP_Day;

    /* VariantMerge generated from: '<S989>/Sch1CP_Enbl_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read18'
     *  Inport: '<S990>/Sch1CP_Enbl'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_En = FeSCPR_b_Sch1CP_Enbl;

    /* VariantMerge generated from: '<S989>/Sch1CP_Allow_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read19'
     *  Inport: '<S990>/Sch1CP_Allow'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_Al = FeSCPR_e_Sch1CP_Allow;

    /* VariantMerge generated from: '<S989>/Sch1CP_DepTemp_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read20'
     *  Inport: '<S990>/Sch1CP_DepTemp'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_De = FeSCPR_T_Sch1CP_DepTemp;

    /* VariantMerge generated from: '<S989>/Sch2CP_DepHr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read22'
     *  Inport: '<S990>/Sch2CP_DepHr'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP__f = FeSCPR_e_Sch2CP_DepHr;

    /* VariantMerge generated from: '<S989>/Sch2CP_DepMin_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read23'
     *  Inport: '<S990>/Sch2CP_DepMin'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP__b = FeSCPR_e_Sch2CP_DepMin;

    /* VariantMerge generated from: '<S989>/Sch2CP_Days_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read24'
     *  Inport: '<S990>/Sch2CP_Days'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_Da = FeSCPR_y_Sch2CP_Day;

    /* VariantMerge generated from: '<S989>/Sch2CP_Enbl_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read25'
     *  Inport: '<S990>/Sch2CP_Enbl'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_En = FeSCPR_b_Sch2CP_Enbl;

    /* VariantMerge generated from: '<S989>/Sch2CP_Allow_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read26'
     *  Inport: '<S990>/Sch2CP_Allow'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_Al = FeSCPR_e_Sch2CP_Allow;

    /* VariantMerge generated from: '<S989>/Sch2CP_DepTemp_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read27'
     *  Inport: '<S990>/Sch2CP_DepTemp'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_De = FeSCPR_T_Sch2CP_DepTemp;

    /* VariantMerge generated from: '<S989>/CabinTempSetPoint_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read28'
     *  Inport: '<S990>/CabinTempSetPoint'
     */
    SCPR_ac_B.VariantMergeForOutportCabinTemp =
        SCPR_ac_DW.NeSCPR_k_CabinTempSetPoint;

    /* VariantMerge generated from: '<S989>/Next_Climate_Time_Hr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read'
     *  Inport: '<S990>/Init_Next_Climate_Time_Hr'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Cl_g =
        SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtHr;

    /* VariantMerge generated from: '<S989>/Next_Climate_Time_Min_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read1'
     *  Inport: '<S990>/Init_Next_Climate_Time_Min'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Cl_d =
        SCPR_ac_DW.NeSCPR_e_NxtSchCP_StrtMin;

    /* VariantMerge generated from: '<S989>/Next_Climate_Day_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read2'
     *  Inport: '<S990>/Init_Next_Climate_Day'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Clim = SCPR_ac_DW.NeSCPR_e_NxtSchCP_Day;

    /* VariantMerge generated from: '<S989>/Next_SchStart_Time_Hr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read3'
     *  Inport: '<S990>/Init_Next_SchStart_Time_Hr'
     */
    SCPR_ac_B.VariantMergeForOutportNext_SchS =
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtHr;

    /* VariantMerge generated from: '<S989>/Next_SchStart_Time_Min_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read4'
     *  Inport: '<S990>/Init_Next_SchStart_Time_Min'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sc_h =
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtMin;

    /* VariantMerge generated from: '<S989>/Next_SchEnd_Time_Hr_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read6'
     *  Inport: '<S990>/Init_Next_SchEnd_Time_Hr'
     */
    SCPR_ac_B.VariantMergeForOutportNext_SchE =
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndHr;

    /* VariantMerge generated from: '<S989>/Next_SchEnd_Time_Min_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read7'
     *  Inport: '<S990>/Init_Next_SchEnd_Time_Min'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sc_p =
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndMin;

    /* VariantMerge generated from: '<S989>/Next_Schedule_StartDay_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read5'
     *  Inport: '<S990>/Init_Next_Schedule_StartDay'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sc_i =
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_StrtDay;

    /* VariantMerge generated from: '<S989>/Next_Schedule_EndDay_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read9'
     *  Inport: '<S990>/Init_Next_Schedule_EndDay'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sche =
        SCPR_ac_DW.NeSCPR_e_NxtSchCH_EndDay;

    /* End of Outputs for SubSystem: '<S3>/InitOutputs' */

    /* VariantMerge generated from: '<S989>/Ext_Next_StopTime_Day_Out_Init' incorporates:
     *  Inport: '<S990>/Init_Ext_Next_StopTime_Day'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Nex_b =
        SCPR_ac_B.OutportBufferForInit_Ext_Next_S;

    /* VariantMerge generated from: '<S989>/Ext_Next_StopTime_Hr_Out_Init' incorporates:
     *  Inport: '<S990>/Init_Ext_Next_StopTime_Hr'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Nex_g =
        SCPR_ac_B.OutportBufferForInit_Ext_Next_a;

    /* VariantMerge generated from: '<S989>/Next_StopTime_Min_Out_Init' incorporates:
     *  Inport: '<S990>/Init_Next_StopTime_Min'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Stop =
        SCPR_ac_B.OutportBufferForInit_Next_StopT;

    /* VariantMerge generated from: '<S989>/Ext_Next_ImmedSOC_Trgt_Out_Init' incorporates:
     *  Inport: '<S990>/Init_Ext_Next_ImmedSOC_Trgt'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Nex_l =
        SCPR_ac_B.OutportBufferForInit_Ext_Next_I;

    /* VariantMerge generated from: '<S989>/Ext_Next_ExtSOC_Trgt_Out_Init' incorporates:
     *  Inport: '<S990>/Init_Ext_Next_ExtSOC_Trgt'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Next_ =
        SCPR_ac_B.OutportBufferForInit_Ext_Next_E;

    /* Outputs for Function Call SubSystem: '<S3>/InitOutputs' */
    /* VariantMerge generated from: '<S989>/Sch1_ImmedSOC_Trgt_Sts_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read59'
     *  Inport: '<S990>/Sch1_ImmedSOC_Trgt_Sts'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Imme =
        SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ImmSOCtrgt;

    /* VariantMerge generated from: '<S989>/Sch1_ExtSOC_Trgt_Sts_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read60'
     *  Inport: '<S990>/Sch1_ExtSOC_Trgt_Sts'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_ExtS =
        SCPR_ac_DW.NeSCPR_Pct_Sch1CoCH_ExtSOCtrgt;

    /* VariantMerge generated from: '<S989>/Sch1_ChrgSchType_Sts_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read29'
     *  Inport: '<S990>/Sch1_ChrgSchType_Sts'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Chrg =
        SCPR_ac_DW.NeSCPR_e_Sch1CH_SchType;

    /* VariantMerge generated from: '<S989>/Sch2_ImmedSOC_Trgt_Sts_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read50'
     *  Inport: '<S990>/Sch2_ImmedSOC_Trgt_Sts'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Imme =
        SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ImmSOCtrgt;

    /* VariantMerge generated from: '<S989>/Sch2_ExtSOC_Trgt_Sts_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read51'
     *  Inport: '<S990>/Sch2_ExtSOC_Trgt_Sts'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_ExtS =
        SCPR_ac_DW.NeSCPR_Pct_Sch2CoCH_ExtSOCtrgt;

    /* VariantMerge generated from: '<S989>/Sch2_ChrgSchType_Sts_Out_Init' incorporates:
     *  DataStoreRead: '<S985>/Data Store Read30'
     *  Inport: '<S990>/Sch2_ChrgSchType_Sts'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Chrg =
        SCPR_ac_DW.NeSCPR_e_Sch2CH_SchType;

    /* End of Outputs for SubSystem: '<S3>/InitOutputs' */

    /* VariantMerge generated from: '<S989>/CoopChrgStatus_Out_Init' incorporates:
     *  Constant: '<S990>/Const31'
     */
    SCPR_ac_B.VariantMergeForOutportCoopChrgS = CeSCPR_e_DefaultSts;

    /* VariantMerge generated from: '<S989>/Next_ChrgSchType_Out_Init' incorporates:
     *  Constant: '<S990>/Const30'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Chrg = CeSCPR_e_No_Selection;

    /* VariantMerge generated from: '<S989>/TimeToDeparture_Out_Init' incorporates:
     *  Constant: '<S990>/Const1'
     */
    SCPR_ac_B.VariantMergeForOutportTimeToDep = 0;

    /* VariantMerge generated from: '<S989>/SchCP_Allow_Out_Init' incorporates:
     *  Constant: '<S990>/Const2'
     */
    SCPR_ac_B.VariantMergeForOutportSchCP_All = CeCITR_e_PluggedInOnly;

    /* VariantMerge generated from: '<S989>/SchChrg_WUTime_Out_Init' incorporates:
     *  Constant: '<S990>/Const3'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_W = 0;

    /* VariantMerge generated from: '<S989>/ChargeReq_Out_Init' incorporates:
     *  Constant: '<S990>/Const4'
     */
    SCPR_ac_B.VariantMergeForOutportChargeReq = false;

    /* VariantMerge generated from: '<S989>/CPIM_Icon1_Cmd_Out_Init' incorporates:
     *  Constant: '<S990>/Const5'
     */
    SCPR_ac_B.VariantMergeForOutportCPIM_Icon = CeCITR_e_CPIM_Icon_OFF;

    /* VariantMerge generated from: '<S989>/CPIM_Icon2_Cmd_Out_Init' incorporates:
     *  Constant: '<S990>/Const6'
     */
    SCPR_ac_B.VariantMergeForOutportCPIM_Ic_h = CeCITR_e_CPIM_Icon_OFF;

    /* VariantMerge generated from: '<S989>/Est_SOC_Out_Init' incorporates:
     *  Constant: '<S990>/Const7'
     */
    SCPR_ac_B.VariantMergeForOutportEst_SOC_O = 0.0F;

    /* VariantMerge generated from: '<S989>/NoChrgSchEnbl_Out_Init' incorporates:
     *  Constant: '<S990>/Const8'
     */
    SCPR_ac_B.VariantMergeForOutportNoChrgSch = false;

    /* VariantMerge generated from: '<S989>/ButtonActive_Door_Out_Init' incorporates:
     *  Constant: '<S990>/Const9'
     */
    SCPR_ac_B.VariantMergeForOutportButtonAct = false;

    /* VariantMerge generated from: '<S989>/Sch1_Batt_CabinPriority_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const10'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Batt = false;

    /* VariantMerge generated from: '<S989>/Sch1_Do_Not_Repeat_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const11'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Do_N = false;

    /* VariantMerge generated from: '<S989>/Sch1_Type_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const12'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Type = CeCITR_e_SchType_NoSelection;

    /* VariantMerge generated from: '<S989>/Sch2_Batt_CabinPriority_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const13'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Batt = false;

    /* VariantMerge generated from: '<S989>/Sch2_Do_Not_Repeat_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const14'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Do_N = false;

    /* VariantMerge generated from: '<S989>/Sch2_Type_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const15'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Type = CeCITR_e_SchType_NoSelection;

    /* VariantMerge generated from: '<S989>/Sch3_Batt_CabinPriority_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const16'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Batt = false;

    /* VariantMerge generated from: '<S989>/Sch3_ChargeUntilFull_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const17'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Char = false;

    /* VariantMerge generated from: '<S989>/Sch3_Do_Not_Repeat_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const18'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Do_N = false;

    /* VariantMerge generated from: '<S989>/Sch3_End_Time_Hr_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const19'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_End_ = 0;

    /* VariantMerge generated from: '<S989>/Sch3_End_Time_Min_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const20'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_En_f = 0;

    /* VariantMerge generated from: '<S989>/Sch3_Confirmed_Out_Init' incorporates:
     *  Constant: '<S990>/Const21'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Conf = false;

    /* VariantMerge generated from: '<S989>/Sch3_Day_Sts _Out_Init' incorporates:
     *  Constant: '<S990>/Const22'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Day_ = 0U;

    /* VariantMerge generated from: '<S989>/Sch3_Type_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const23'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Type = CeCITR_e_SchType_NoSelection;

    /* VariantMerge generated from: '<S989>/Sch3_Start_Time_Hr_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const24'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Star = 0;

    /* VariantMerge generated from: '<S989>/Sch3_Start_Time_Min_Sts_Out_Init' incorporates:
     *  Constant: '<S990>/Const25'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_St_p = 0;

    /* VariantMerge generated from: '<S989>/BattCabinPriority_Out_Init' incorporates:
     *  Constant: '<S990>/Const26'
     */
    SCPR_ac_B.VariantMergeForOutportBattCabin = false;

    /* VariantMerge generated from: '<S989>/SchChrg_OktoCharge_Out_Init' incorporates:
     *  Constant: '<S990>/Const27'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_O = false;

    /* VariantMerge generated from: '<S989>/InitStatus_Out_Init' incorporates:
     *  Constant: '<S990>/Const28'
     */
    SCPR_ac_B.VariantMergeForOutportInitStatu = CeSCPR_e_InitDefault;

    /* VariantMerge generated from: '<S989>/FOTASchCnflct_Out_Init' incorporates:
     *  Constant: '<S990>/Const29'
     */
    SCPR_ac_B.VariantMergeForOutportFOTASchCn = false;

    /* End of Outputs for SubSystem: '<S989>/FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S989>/NF' */
    /* VariantMerge generated from: '<S989>/Sch1CH_StrtHr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_St = 0;

    /* VariantMerge generated from: '<S989>/Sch1CH_StrtMin_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value1'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH__a = 0;

    /* VariantMerge generated from: '<S989>/Sch1CH_EndHr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value2'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_En = 0;

    /* VariantMerge generated from: '<S989>/Sch1CH_EndMin_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value3'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH__g = 0;

    /* VariantMerge generated from: '<S989>/Sch1CH_Days_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value4'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_Da = 0U;

    /* VariantMerge generated from: '<S989>/Sch1CH_Enbl_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH__j = false;

    /* VariantMerge generated from: '<S989>/Sch1CH_ChrgUntFl_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant2'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CH_Ch = false;

    /* VariantMerge generated from: '<S989>/Sch2CH_StrtHr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value5'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_St = 0;

    /* VariantMerge generated from: '<S989>/Sch2CH_StrtMin_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value6'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_fa = 0;

    /* VariantMerge generated from: '<S989>/Sch2CH_EndHr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value7'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_En = 0;

    /* VariantMerge generated from: '<S989>/Sch2CH_EndMin_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value8'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH__f = 0;

    /* VariantMerge generated from: '<S989>/Sch2CH_Days_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value9'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_Da = 0U;

    /* VariantMerge generated from: '<S989>/Sch2CH_Enbl_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant4'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH__i = false;

    /* VariantMerge generated from: '<S989>/Sch2CH_ChrgUntFl_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant6'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CH_Ch = false;

    /* VariantMerge generated from: '<S989>/Sch1CP_DepHr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value21'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP__k = 0;

    /* VariantMerge generated from: '<S989>/Sch1CP_DepMin_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value22'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP__o = 0;

    /* VariantMerge generated from: '<S989>/Sch1CP_Days_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value23'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_Da = 0U;

    /* VariantMerge generated from: '<S989>/Sch1CP_Enbl_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value17'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_En = false;

    /* VariantMerge generated from: '<S989>/Sch1CP_Allow_Out_Init' incorporates:
     *  Constant: '<S1002>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_Al = CeCITR_e_AnyTime;

    /* VariantMerge generated from: '<S989>/Sch1CP_DepTemp_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value19'
     */
    SCPR_ac_B.VariantMergeForOutportSch1CP_De = 0.0F;

    /* VariantMerge generated from: '<S989>/Sch2CP_DepHr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value24'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP__f = 0;

    /* VariantMerge generated from: '<S989>/Sch2CP_DepMin_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value25'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP__b = 0;

    /* VariantMerge generated from: '<S989>/Sch2CP_Days_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value26'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_Da = 0U;

    /* VariantMerge generated from: '<S989>/Sch2CP_Enbl_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value18'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_En = false;

    /* VariantMerge generated from: '<S989>/Sch2CP_Allow_Out_Init' incorporates:
     *  Constant: '<S1004>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_Al = CeCITR_e_AnyTime;

    /* VariantMerge generated from: '<S989>/Sch2CP_DepTemp_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value20'
     */
    SCPR_ac_B.VariantMergeForOutportSch2CP_De = 0.0F;

    /* VariantMerge generated from: '<S989>/CabinTempSetPoint_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value27'
     */
    SCPR_ac_B.VariantMergeForOutportCabinTemp = 0.0F;

    /* VariantMerge generated from: '<S989>/Next_Climate_Time_Hr_Out_Init' incorporates:
     *  Constant: '<S1006>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Cl_g =
        KeSCPR_K_NxtClimate_TimeHr_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_Climate_Time_Min_Out_Init' incorporates:
     *  Constant: '<S1007>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Cl_d =
        KeSCPR_K_NxtClimate_TimeMin_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_Climate_Day_Out_Init' incorporates:
     *  Constant: '<S1005>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Clim = KeSCPR_K_NxtClimate_Day_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_SchStart_Time_Hr_Out_Init' incorporates:
     *  Constant: '<S1012>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_SchS =
        KeSCPR_K_NxtSch_StrtTimeHr_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_SchStart_Time_Min_Out_Init' incorporates:
     *  Constant: '<S1013>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sc_h =
        KeSCPR_K_NxtSch_StrtTimeMin_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_SchEnd_Time_Hr_Out_Init' incorporates:
     *  Constant: '<S1009>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_SchE =
        KeSCPR_K_NxtSch_EndTimeHr_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_SchEnd_Time_Min_Out_Init' incorporates:
     *  Constant: '<S1010>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sc_p =
        KeSCPR_K_NxtSch_EndTimeMin_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_Schedule_StartDay_Out_Init' incorporates:
     *  Constant: '<S1011>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sc_i = KeSCPR_K_NxtSch_StrtDay_OvrdVal;

    /* VariantMerge generated from: '<S989>/Next_Schedule_EndDay_Out_Init' incorporates:
     *  Constant: '<S1008>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Sche = KeSCPR_K_NxtSch_EndDay_OvrdVal;

    /* VariantMerge generated from: '<S989>/Ext_Next_StopTime_Day_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value15'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Nex_b = 0;

    /* VariantMerge generated from: '<S989>/Ext_Next_StopTime_Hr_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value16'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Nex_g = 0;

    /* VariantMerge generated from: '<S989>/Next_StopTime_Min_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value29'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Stop = 0;

    /* VariantMerge generated from: '<S989>/Ext_Next_ImmedSOC_Trgt_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value30'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Nex_l = 0.0F;

    /* VariantMerge generated from: '<S989>/Ext_Next_ExtSOC_Trgt_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value31'
     */
    SCPR_ac_B.VariantMergeForOutportExt_Next_ = 0.0F;

    /* VariantMerge generated from: '<S989>/Sch1_ImmedSOC_Trgt_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value32'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Imme = 0.0F;

    /* VariantMerge generated from: '<S989>/Sch1_ExtSOC_Trgt_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value33'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_ExtS = 0.0F;

    /* VariantMerge generated from: '<S989>/Sch1_ChrgSchType_Sts_Out_Init' incorporates:
     *  Constant: '<S1003>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Chrg = CeCITR_e_No_Selection;

    /* VariantMerge generated from: '<S989>/Sch2_ImmedSOC_Trgt_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value34'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Imme = 0.0F;

    /* VariantMerge generated from: '<S989>/Sch2_ExtSOC_Trgt_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value35'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_ExtS = 0.0F;

    /* VariantMerge generated from: '<S989>/Sch2_ChrgSchType_Sts_Out_Init' incorporates:
     *  Constant: '<S994>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Chrg = CeCITR_e_No_Selection;

    /* VariantMerge generated from: '<S989>/CoopChrgStatus_Out_Init' incorporates:
     *  Constant: '<S995>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportCoopChrgS = CeSCPR_e_DefaultSts;

    /* VariantMerge generated from: '<S989>/Next_ChrgSchType_Out_Init' incorporates:
     *  Constant: '<S996>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportNext_Chrg = CeSCPR_e_No_Selection;

    /* VariantMerge generated from: '<S989>/TimeToDeparture_Out_Init' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportTimeToDep = KeSCPR_t_TimeToDeparture_OvrdVal;

    /* VariantMerge generated from: '<S989>/SchCP_Allow_Out_Init' incorporates:
     *  Constant: '<S1000>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSchCP_All = CeCITR_e_AnyTime;

    /* VariantMerge generated from: '<S989>/SchChrg_WUTime_Out_Init' incorporates:
     *  Constant: '<S1019>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_W = KeSCPR_t_SchChrg_WUTime_OvrdVal;

    /* VariantMerge generated from: '<S989>/ChargeReq_Out_Init' incorporates:
     *  Constant: '<S1018>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportChargeReq = KeSCPR_b_OvrdValBCMChrgReq;

    /* VariantMerge generated from: '<S989>/CPIM_Icon1_Cmd_Out_Init' incorporates:
     *  Constant: '<S998>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportCPIM_Icon = CeCITR_e_CPIM_Icon_OFF;

    /* VariantMerge generated from: '<S989>/CPIM_Icon2_Cmd_Out_Init' incorporates:
     *  Constant: '<S999>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportCPIM_Ic_h = CeCITR_e_CPIM_Icon_OFF;

    /* VariantMerge generated from: '<S989>/Est_SOC_Out_Init' incorporates:
     *  Constant: '<S1014>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportEst_SOC_O = KeSCPR_Pct_Est_SOC_OvrdVal;

    /* VariantMerge generated from: '<S989>/NoChrgSchEnbl_Out_Init' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNoChrgSch = KeSCPR_b_NoChrgInterval_OvrdVal;

    /* VariantMerge generated from: '<S989>/ButtonActive_Door_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant12'
     */
    SCPR_ac_B.VariantMergeForOutportButtonAct = false;

    /* VariantMerge generated from: '<S989>/Sch1_Batt_CabinPriority_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant3'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Batt = false;

    /* VariantMerge generated from: '<S989>/Sch1_Do_Not_Repeat_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant1'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Do_N = false;

    /* VariantMerge generated from: '<S989>/Sch1_Type_Sts_Out_Init' incorporates:
     *  Constant: '<S992>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch1_Type = CeCITR_e_SchType_NoSelection;

    /* VariantMerge generated from: '<S989>/Sch2_Batt_CabinPriority_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant7'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Batt = false;

    /* VariantMerge generated from: '<S989>/Sch2_Do_Not_Repeat_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant5'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Do_N = false;

    /* VariantMerge generated from: '<S989>/Sch2_Type_Sts_Out_Init' incorporates:
     *  Constant: '<S993>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch2_Type = CeCITR_e_SchType_NoSelection;

    /* VariantMerge generated from: '<S989>/Sch3_Batt_CabinPriority_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant11'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Batt = false;

    /* VariantMerge generated from: '<S989>/Sch3_ChargeUntilFull_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant10'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Char = false;

    /* VariantMerge generated from: '<S989>/Sch3_Do_Not_Repeat_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant9'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Do_N = false;

    /* VariantMerge generated from: '<S989>/Sch3_End_Time_Hr_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value12'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_End_ = 0;

    /* VariantMerge generated from: '<S989>/Sch3_End_Time_Min_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value13'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_En_f = 0;

    /* VariantMerge generated from: '<S989>/Sch3_Confirmed_Out_Init' incorporates:
     *  Constant: '<S991>/FALSE Constant8'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Conf = false;

    /* VariantMerge generated from: '<S989>/Sch3_Day_Sts _Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value14'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Day_ = 0U;

    /* VariantMerge generated from: '<S989>/Sch3_Type_Sts_Out_Init' incorporates:
     *  Constant: '<S997>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Type = CeCITR_e_SchType_NoSelection;

    /* VariantMerge generated from: '<S989>/Sch3_Start_Time_Hr_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value10'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_Star = 0;

    /* VariantMerge generated from: '<S989>/Sch3_Start_Time_Min_Sts_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value11'
     */
    SCPR_ac_B.VariantMergeForOutportSch3_St_p = 0;

    /* VariantMerge generated from: '<S989>/BattCabinPriority_Out_Init' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportBattCabin = KeSCPR_b_BattCabinPriority;

    /* VariantMerge generated from: '<S989>/SchChrg_OktoCharge_Out_Init' incorporates:
     *  Constant: '<S1017>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_O = KeSCPR_b_OK_to_Charge_OvrdVal;

    /* VariantMerge generated from: '<S989>/InitStatus_Out_Init' incorporates:
     *  Constant: '<S1001>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportInitStatu = CeSCPR_e_InitDefault;

    /* VariantMerge generated from: '<S989>/FOTASchCnflct_Out_Init' incorporates:
     *  Constant: '<S991>/Constant Value28'
     */
    SCPR_ac_B.VariantMergeForOutportFOTASchCn = false;

    /* End of Outputs for SubSystem: '<S989>/NF' */
#endif

    /* End of SignalConversion generated from: '<S3>/FeSCPR_T_Sch2CP_DepTemp_PM_In' */
    /* End of Outputs for SubSystem: '<S986>/Variant Subsystem' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeSCPR_b_BattCabinPriority' incorporates:
     *  SignalConversion generated from: '<S3>/BattCabinPriority_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_BattCabinPriority_Value
        (SCPR_ac_B.VariantMergeForOutportBattCabin);

    /* Outport: '<Root>/VeSCPR_b_ButtonActive_Door' incorporates:
     *  SignalConversion generated from: '<S3>/ButtonActive_Door_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_ButtonActive_Door_Value
        (SCPR_ac_B.VariantMergeForOutportButtonAct);

    /* Outport: '<Root>/VeSCPR_e_CPIM_Icon1_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/CPIM_Icon1_Cmd_Out_Init'
     *  VariantMerge generated from: '<S989>/CPIM_Icon1_Cmd_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_CPIM_Icon1_Cmd_Value
        (SCPR_ac_B.VariantMergeForOutportCPIM_Icon);

    /* Outport: '<Root>/VeSCPR_e_CPIM_Icon2_Cmd' incorporates:
     *  SignalConversion generated from: '<S3>/CPIM_Icon2_Cmd_Out_Init'
     *  VariantMerge generated from: '<S989>/CPIM_Icon2_Cmd_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_CPIM_Icon2_Cmd_Value
        (SCPR_ac_B.VariantMergeForOutportCPIM_Ic_h);

    /* Outport: '<Root>/VeSCPR_T_CabinTempSetPt' incorporates:
     *  SignalConversion generated from: '<S3>/CabinTempSetPoint_Out_Init'
     */
    (void)Rte_Write_VeSCPR_T_CabinTempSetPt_Value
        (SCPR_ac_B.VariantMergeForOutportCabinTemp);

    /* Outport: '<Root>/VeSCPR_b_ChargeReq' incorporates:
     *  SignalConversion generated from: '<S3>/ChargeReq_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_ChargeReq_Value
        (SCPR_ac_B.VariantMergeForOutportChargeReq);

    /* Outport: '<Root>/VeSCPR_e_CoopChrgStatus' incorporates:
     *  SignalConversion generated from: '<S3>/CoopChrgStatus_Out_Init'
     *  VariantMerge generated from: '<S989>/CoopChrgStatus_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_CoopChrgStatus_Value
        (SCPR_ac_B.VariantMergeForOutportCoopChrgS);

    /* Outport: '<Root>/VeSCPR_Pct_Est_SOC' incorporates:
     *  SignalConversion generated from: '<S3>/Est_SOC_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Est_SOC_Value
        (SCPR_ac_B.VariantMergeForOutportEst_SOC_O);

    /* Outport: '<Root>/VeSCPR_Pct_Ext_Next_ExtSOC_Trgt' incorporates:
     *  SignalConversion generated from: '<S3>/Ext_Next_ExtSOC_Trgt_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Ext_Next_ExtSOC_Trgt_Value
        (SCPR_ac_B.VariantMergeForOutportExt_Next_);

    /* Outport: '<Root>/VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt' incorporates:
     *  SignalConversion generated from: '<S3>/Ext_Next_ImmedSOC_Trgt_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Ext_Next_ImmedSOC_Trgt_Value
        (SCPR_ac_B.VariantMergeForOutportExt_Nex_l);

    /* Outport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Day' incorporates:
     *  SignalConversion generated from: '<S3>/Ext_Next_StopTime_Day_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Ext_Next_StopTime_Day_Value
        (SCPR_ac_B.VariantMergeForOutportExt_Nex_b);

    /* Outport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Hr' incorporates:
     *  SignalConversion generated from: '<S3>/Ext_Next_StopTime_Hr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Ext_Next_StopTime_Hr_Value
        (SCPR_ac_B.VariantMergeForOutportExt_Nex_g);

    /* Outport: '<Root>/VeSCPR_b_FOTASchCnflct' incorporates:
     *  SignalConversion generated from: '<S3>/FOTASchCnflct_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_FOTASchCnflct_Value
        (SCPR_ac_B.VariantMergeForOutportFOTASchCn);

    /* Outport: '<Root>/VeSCPR_e_InitStatus' incorporates:
     *  SignalConversion generated from: '<S3>/InitStatus_Out_Init'
     *  VariantMerge generated from: '<S989>/InitStatus_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_InitStatus_Value
        (SCPR_ac_B.VariantMergeForOutportInitStatu);

    /* Outport: '<Root>/VeSCPR_e_Next_ChrgSchType' incorporates:
     *  SignalConversion generated from: '<S3>/Next_ChrgSchType_Out_Init'
     *  VariantMerge generated from: '<S989>/Next_ChrgSchType_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Next_ChrgSchType_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Chrg);

    /* Outport: '<Root>/VeSCPR_K_Next_Climate_Day' incorporates:
     *  SignalConversion generated from: '<S3>/Next_Climate_Day_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_Climate_Day_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Clim);

    /* Outport: '<Root>/VeSCPR_K_Next_Climate_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S3>/Next_Climate_Time_Hr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_Climate_Time_Hr_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Cl_g);

    /* Outport: '<Root>/VeSCPR_K_Next_Climate_Time_Min' incorporates:
     *  SignalConversion generated from: '<S3>/Next_Climate_Time_Min_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_Climate_Time_Min_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Cl_d);

    /* Outport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S3>/Next_SchEnd_Time_Hr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_SchEnd_Time_Hr_Value
        (SCPR_ac_B.VariantMergeForOutportNext_SchE);

    /* Outport: '<Root>/VeSCPR_K_Next_SchEnd_Time_Min' incorporates:
     *  SignalConversion generated from: '<S3>/Next_SchEnd_Time_Min_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_SchEnd_Time_Min_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Sc_p);

    /* Outport: '<Root>/VeSCPR_K_Next_SchStart_Time_Hr' incorporates:
     *  SignalConversion generated from: '<S3>/Next_SchStart_Time_Hr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_SchStart_Time_Hr_Value
        (SCPR_ac_B.VariantMergeForOutportNext_SchS);

    /* Outport: '<Root>/VeSCPR_K_Next_SchStart_Time_Min' incorporates:
     *  SignalConversion generated from: '<S3>/Next_SchStart_Time_Min_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_SchStart_Time_Min_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Sc_h);

    /* Outport: '<Root>/VeSCPR_K_Next_Schedule_EndDay' incorporates:
     *  SignalConversion generated from: '<S3>/Next_Schedule_EndDay_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_Schedule_EndDay_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Sche);

    /* Outport: '<Root>/VeSCPR_K_Next_Schedule_StartDay' incorporates:
     *  SignalConversion generated from: '<S3>/Next_Schedule_StartDay_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Next_Schedule_StartDay_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Sc_i);

    /* Outport: '<Root>/VeSCPR_K_Ext_Next_StopTime_Min' incorporates:
     *  SignalConversion generated from: '<S3>/Next_StopTime_Min_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Ext_Next_StopTime_Min_Value
        (SCPR_ac_B.VariantMergeForOutportNext_Stop);

    /* Outport: '<Root>/VeSCPR_b_NoChrgSchEnbl' incorporates:
     *  SignalConversion generated from: '<S3>/NoChrgSchEnbl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_NoChrgSchEnbl_Value
        (SCPR_ac_B.VariantMergeForOutportNoChrgSch);

    /* Outport: '<Root>/VeSCPR_b_Sch1_ChargeUntilFull_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_ChrgUntFl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch1_ChargeUntilFull_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH_Ch);

    /* Outport: '<Root>/VeSCPR_K_Sch1_Day_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_Days_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch1_Day_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH_Da);

    /* Outport: '<Root>/VeSCPR_b_Sch1_Confirmed' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_Enbl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch1_Confirmed_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH__j);

    /* Outport: '<Root>/VeSCPR_K_Sch1_End_Time_Hr_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_EndHr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch1_End_Time_Hr_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH_En);

    /* Outport: '<Root>/VeSCPR_K_Sch1_End_Time_Min_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_EndMin_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch1_End_Time_Min_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH__g);

    /* Outport: '<Root>/VeSCPR_K_Sch1_Start_Time_Hr_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_StrtHr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch1_Start_Time_Hr_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH_St);

    /* Outport: '<Root>/VeSCPR_K_Sch1_Start_Time_Min_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CH_StrtMin_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch1_Start_Time_Min_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CH__a);

    /* Outport: '<Root>/VeSCPR_e_Sch3_AllowSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CP_Allow_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch1CP_Allow_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch3_AllowSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CP_Al);

    /* Outport: '<Root>/VeSCPR_K_Sch3_DaySts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CP_Days_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_DaySts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CP_Da);

    /* Outport: '<Root>/VeSCPR_K_Sch3_DepHrSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CP_DepHr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_DepHrSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CP__k);

    /* Outport: '<Root>/VeSCPR_K_Sch3_DepMinSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CP_DepMin_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_DepMinSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CP__o);

    /* Outport: '<Root>/VeSCPR_T_Sch3_DepTempSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CP_DepTemp_Out_Init'
     */
    (void)Rte_Write_VeSCPR_T_Sch3_DepTempSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CP_De);

    /* Outport: '<Root>/VeSCPR_b_Sch3_EnblSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1CP_Enbl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_EnblSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1CP_En);

    /* Outport: '<Root>/VeSCPR_b_Sch1_Batt_CabinPriority_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1_Batt_CabinPriority_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch1_Batt_CabinPriority_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1_Batt);

    /* Outport: '<Root>/VeSCPR_e_Sch1_ChrgSchType_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1_ChrgSchType_Sts_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch1_ChrgSchType_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch1_ChrgSchType_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1_Chrg);

    /* Outport: '<Root>/VeSCPR_b_Sch1_Do_Not_Repeat_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1_Do_Not_Repeat_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch1_Do_Not_Repeat_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1_Do_N);

    /* Outport: '<Root>/VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1_ExtSOC_Trgt_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Sch1_ExtSOC_Trgt_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1_ExtS);

    /* Outport: '<Root>/VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1_ImmedSOC_Trgt_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Sch1_ImmedSOC_Trgt_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1_Imme);

    /* Outport: '<Root>/VeSCPR_e_Sch1_Type_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch1_Type_Sts_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch1_Type_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch1_Type_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch1_Type);

    /* Outport: '<Root>/VeSCPR_b_Sch2_ChargeUntilFull_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_ChrgUntFl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch2_ChargeUntilFull_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH_Ch);

    /* Outport: '<Root>/VeSCPR_K_Sch2_Day_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_Days_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch2_Day_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH_Da);

    /* Outport: '<Root>/VeSCPR_b_Sch2_Confirmed' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_Enbl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch2_Confirmed_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH__i);

    /* Outport: '<Root>/VeSCPR_K_Sch2_End_Time_Hr_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_EndHr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch2_End_Time_Hr_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH_En);

    /* Outport: '<Root>/VeSCPR_K_Sch2_End_Time_Min_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_EndMin_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch2_End_Time_Min_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH__f);

    /* Outport: '<Root>/VeSCPR_K_Sch2_Start_Time_Hr_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_StrtHr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch2_Start_Time_Hr_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH_St);

    /* Outport: '<Root>/VeSCPR_K_Sch2_Start_Time_Min_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CH_StrtMin_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch2_Start_Time_Min_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CH_fa);

    /* Outport: '<Root>/VeSCPR_e_Sch4_AllowSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CP_Allow_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch2CP_Allow_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch4_AllowSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CP_Al);

    /* Outport: '<Root>/VeSCPR_K_Sch4_DaySts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CP_Days_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch4_DaySts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CP_Da);

    /* Outport: '<Root>/VeSCPR_K_Sch4_DepHrSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CP_DepHr_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch4_DepHrSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CP__f);

    /* Outport: '<Root>/VeSCPR_K_Sch4_DepMinSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CP_DepMin_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch4_DepMinSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CP__b);

    /* Outport: '<Root>/VeSCPR_T_Sch4_DepTempSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CP_DepTemp_Out_Init'
     */
    (void)Rte_Write_VeSCPR_T_Sch4_DepTempSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CP_De);

    /* Outport: '<Root>/VeSCPR_b_Sch4_EnblSts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2CP_Enbl_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch4_EnblSts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2CP_En);

    /* Outport: '<Root>/VeSCPR_b_Sch2_Batt_CabinPriority_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2_Batt_CabinPriority_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch2_Batt_CabinPriority_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2_Batt);

    /* Outport: '<Root>/VeSCPR_e_Sch2_ChrgSchType_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2_ChrgSchType_Sts_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch2_ChrgSchType_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch2_ChrgSchType_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2_Chrg);

    /* Outport: '<Root>/VeSCPR_b_Sch2_Do_Not_Repeat_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2_Do_Not_Repeat_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch2_Do_Not_Repeat_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2_Do_N);

    /* Outport: '<Root>/VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2_ExtSOC_Trgt_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Sch2_ExtSOC_Trgt_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2_ExtS);

    /* Outport: '<Root>/VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2_ImmedSOC_Trgt_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_Pct_Sch2_ImmedSOC_Trgt_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2_Imme);

    /* Outport: '<Root>/VeSCPR_e_Sch2_Type_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch2_Type_Sts_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch2_Type_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch2_Type_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch2_Type);

    /* Outport: '<Root>/VeSCPR_b_Sch3_Batt_CabinPriority_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Batt_CabinPriority_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_Batt_CabinPriority_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Batt);

    /* Outport: '<Root>/VeSCPR_b_Sch3_ChargeUntilFull_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_ChargeUntilFull_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_ChargeUntilFull_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Char);

    /* Outport: '<Root>/VeSCPR_b_Sch3_Confirmed' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Confirmed_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_Confirmed_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Conf);

    /* Outport: '<Root>/VeSCPR_K_Sch3_Day_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Day_Sts _Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_Day_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Day_);

    /* Outport: '<Root>/VeSCPR_b_Sch3_Do_Not_Repeat_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Do_Not_Repeat_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_Sch3_Do_Not_Repeat_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Do_N);

    /* Outport: '<Root>/VeSCPR_K_Sch3_End_Time_Hr_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_End_Time_Hr_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_End_Time_Hr_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_End_);

    /* Outport: '<Root>/VeSCPR_K_Sch3_End_Time_Min_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_End_Time_Min_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_End_Time_Min_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_En_f);

    /* Outport: '<Root>/VeSCPR_K_Sch3_Start_Time_Hr_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Start_Time_Hr_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_Start_Time_Hr_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Star);

    /* Outport: '<Root>/VeSCPR_K_Sch3_Start_Time_Min_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Start_Time_Min_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_K_Sch3_Start_Time_Min_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_St_p);

    /* Outport: '<Root>/VeSCPR_e_Sch3_Type_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/Sch3_Type_Sts_Out_Init'
     *  VariantMerge generated from: '<S989>/Sch3_Type_Sts_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_Sch3_Type_Sts_Value
        (SCPR_ac_B.VariantMergeForOutportSch3_Type);

    /* Outport: '<Root>/VeSCPR_e_SchCP_Allow' incorporates:
     *  SignalConversion generated from: '<S3>/SchCP_Allow_Out_Init'
     *  VariantMerge generated from: '<S989>/SchCP_Allow_Out_Init'
     */
    (void)Rte_Write_VeSCPR_e_SchCP_Allow_Value
        (SCPR_ac_B.VariantMergeForOutportSchCP_All);

    /* Outport: '<Root>/VeSCPR_b_SchChrg_OktoCharge' incorporates:
     *  SignalConversion generated from: '<S3>/SchChrg_OktoCharge_Out_Init'
     */
    (void)Rte_Write_VeSCPR_b_SchChrg_OktoCharge_Value
        (SCPR_ac_B.VariantMergeForOutportSchChrg_O);

    /* Outport: '<Root>/VeSCPR_t_SchChrg_WUTime' incorporates:
     *  SignalConversion generated from: '<S3>/SchChrg_WUTime_Out_Init'
     */
    (void)Rte_Write_VeSCPR_t_SchChrg_WUTime_Value
        (SCPR_ac_B.VariantMergeForOutportSchChrg_W);

    /* Outport: '<Root>/VeSCPR_t_TimeToDeparture' incorporates:
     *  SignalConversion generated from: '<S3>/TimeToDeparture_Out_Init'
     */
    (void)Rte_Write_VeSCPR_t_TimeToDeparture_Value
        (SCPR_ac_B.VariantMergeForOutportTimeToDep);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, SCPR_CODE) SCPR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */

    /* custom signals */
#if Rte_SysCon_Variant_SCPR_1

    VeSCPR_e_DayOfWeek = CeSCPR_e_Day_NoDay;

#endif

    /* Start for DataStoreMemory: '<Root>/DSM_54' incorporates:
     *  DataStoreMemory: '<Root>/DSM_77'
     */
#if Rte_SysCon_Variant_SCPR_1

    FeSCPR_T_Sch2CP_DepTemp = -8.888888E+6F;
    FeSCPR_T_Sch1CP_DepTemp = -8.888888E+6F;

#endif

    /* End of Start for DataStoreMemory: '<Root>/DSM_54' */
#if Rte_SysCon_Variant_SCPR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/SCPR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for Atomic SubSystem: '<S986>/Variant Subsystem' */
    /* SystemInitialize for Atomic SubSystem: '<S989>/FUNC' */
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/InitOutputs' */
    /* SystemInitialize for SignalConversion generated from: '<S985>/Init_Ext_Next_ImmedSOC_Trgt' */
    SCPR_ac_B.OutportBufferForInit_Ext_Next_I = 100.0F;

    /* SystemInitialize for SignalConversion generated from: '<S985>/Init_Ext_Next_ExtSOC_Trgt' */
    SCPR_ac_B.OutportBufferForInit_Ext_Next_E = 100.0F;

    /* End of SystemInitialize for SubSystem: '<S3>/InitOutputs' */

    /* Start for VariantMerge generated from: '<S989>/TimeToDeparture_Out_Init' incorporates:
     *  Constant: '<S990>/Const1'
     */
    SCPR_ac_B.VariantMergeForOutportTimeToDep = 0;

    /* Start for VariantMerge generated from: '<S989>/SchCP_Allow_Out_Init' incorporates:
     *  Constant: '<S990>/Const2'
     */
    SCPR_ac_B.VariantMergeForOutportSchCP_All = CeCITR_e_PluggedInOnly;

    /* Start for VariantMerge generated from: '<S989>/SchChrg_WUTime_Out_Init' incorporates:
     *  Constant: '<S990>/Const3'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_W = 0;

    /* Start for VariantMerge generated from: '<S989>/ChargeReq_Out_Init' incorporates:
     *  Constant: '<S990>/Const4'
     */
    SCPR_ac_B.VariantMergeForOutportChargeReq = false;

    /* Start for VariantMerge generated from: '<S989>/Est_SOC_Out_Init' incorporates:
     *  Constant: '<S990>/Const7'
     */
    SCPR_ac_B.VariantMergeForOutportEst_SOC_O = 0.0F;

    /* Start for VariantMerge generated from: '<S989>/NoChrgSchEnbl_Out_Init' incorporates:
     *  Constant: '<S990>/Const8'
     */
    SCPR_ac_B.VariantMergeForOutportNoChrgSch = false;

    /* Start for VariantMerge generated from: '<S989>/BattCabinPriority_Out_Init' incorporates:
     *  Constant: '<S990>/Const26'
     */
    SCPR_ac_B.VariantMergeForOutportBattCabin = false;

    /* Start for VariantMerge generated from: '<S989>/SchChrg_OktoCharge_Out_Init' incorporates:
     *  Constant: '<S990>/Const27'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_O = false;

    /* SystemInitialize for Function Call SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SCPC'
     */
    /* Start for Constant: '<S741>/Calib' */
    VeSCPR_k_NumOfMinPerDay = KeSCPR_k_NumOfMinPerDay;

    /* Start for Constant: '<S742>/Calib' */
    VeSCPR_k_NumOfMinPerWeek = KeSCPR_k_NumOfMinPerWeek;

    /* Start for If: '<S248>/If' */
    SCPR_ac_DW.If_ActiveSubsystem = -1;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/SCPR_FUNC_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* End of SystemInitialize for SubSystem: '<S989>/FUNC' */
    /* End of SystemInitialize for SubSystem: '<S986>/Variant Subsystem' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S989>/NF' */
    /* Start for VariantMerge generated from: '<S989>/TimeToDeparture_Out_Init' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportTimeToDep = KeSCPR_t_TimeToDeparture_OvrdVal;

    /* Start for VariantMerge generated from: '<S989>/SchCP_Allow_Out_Init' incorporates:
     *  Constant: '<S1000>/Constant'
     */
    SCPR_ac_B.VariantMergeForOutportSchCP_All = CeCITR_e_AnyTime;

    /* Start for VariantMerge generated from: '<S989>/SchChrg_WUTime_Out_Init' incorporates:
     *  Constant: '<S1019>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_W = KeSCPR_t_SchChrg_WUTime_OvrdVal;

    /* Start for VariantMerge generated from: '<S989>/ChargeReq_Out_Init' incorporates:
     *  Constant: '<S1018>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportChargeReq = KeSCPR_b_OvrdValBCMChrgReq;

    /* Start for VariantMerge generated from: '<S989>/Est_SOC_Out_Init' incorporates:
     *  Constant: '<S1014>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportEst_SOC_O = KeSCPR_Pct_Est_SOC_OvrdVal;

    /* Start for VariantMerge generated from: '<S989>/NoChrgSchEnbl_Out_Init' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportNoChrgSch = KeSCPR_b_NoChrgInterval_OvrdVal;

    /* Start for VariantMerge generated from: '<S989>/BattCabinPriority_Out_Init' incorporates:
     *  Constant: '<S1015>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportBattCabin = KeSCPR_b_BattCabinPriority;

    /* Start for VariantMerge generated from: '<S989>/SchChrg_OktoCharge_Out_Init' incorporates:
     *  Constant: '<S1017>/Calib'
     */
    SCPR_ac_B.VariantMergeForOutportSchChrg_O = KeSCPR_b_OK_to_Charge_OvrdVal;

    /* End of SystemInitialize for SubSystem: '<S989>/NF' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch3_AllowSts' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeSCPR_e_Sch3_AllowSts_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch4_AllowSts' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    (void)Rte_Write_VeSCPR_e_Sch4_AllowSts_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch1_ChrgSchType_Sts' incorporates:
     *  Merge: '<Root>/Merge_44'
     */
    (void)Rte_Write_VeSCPR_e_Sch1_ChrgSchType_Sts_Value(CeCITR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch2_ChrgSchType_Sts' incorporates:
     *  Merge: '<Root>/Merge_47'
     */
    (void)Rte_Write_VeSCPR_e_Sch2_ChrgSchType_Sts_Value(CeCITR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_CoopChrgStatus' incorporates:
     *  Merge: '<Root>/Merge_48'
     */
    (void)Rte_Write_VeSCPR_e_CoopChrgStatus_Value(CeSCPR_e_DefaultSts);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Next_ChrgSchType' incorporates:
     *  Merge: '<Root>/Merge_49'
     */
    (void)Rte_Write_VeSCPR_e_Next_ChrgSchType_Value(CeSCPR_e_No_Selection);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_SchCP_Allow' incorporates:
     *  Merge: '<Root>/Merge_Outport_28'
     */
    (void)Rte_Write_VeSCPR_e_SchCP_Allow_Value(CeCITR_e_AnyTime);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_CPIM_Icon1_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_31'
     */
    (void)Rte_Write_VeSCPR_e_CPIM_Icon1_Cmd_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_CPIM_Icon2_Cmd' incorporates:
     *  Merge: '<Root>/Merge_Outport_32'
     */
    (void)Rte_Write_VeSCPR_e_CPIM_Icon2_Cmd_Value(CeCITR_e_CPIM_Icon_OFF);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch1_Type_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_48'
     */
    (void)Rte_Write_VeSCPR_e_Sch1_Type_Sts_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch2_Type_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_51'
     */
    (void)Rte_Write_VeSCPR_e_Sch2_Type_Sts_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_Sch3_Type_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_59'
     */
    (void)Rte_Write_VeSCPR_e_Sch3_Type_Sts_Value(CeCITR_e_SchType_NoSelection);

    /* SystemInitialize for Outport: '<Root>/VeSCPR_e_InitStatus' incorporates:
     *  Merge: '<Root>/Merge_Outport_64'
     */
    (void)Rte_Write_VeSCPR_e_InitStatus_Value(CeSCPR_e_InitDefault);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
