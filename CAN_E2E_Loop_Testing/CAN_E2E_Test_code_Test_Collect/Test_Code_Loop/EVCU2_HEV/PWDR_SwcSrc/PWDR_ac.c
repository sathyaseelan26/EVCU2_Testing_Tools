/*
 * File: PWDR_ac.c
 *
 * Code generated for Simulink model 'PWDR_ac'.
 *
 * Model version                  : 9.120
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 18:45:02 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PWDR_ac.h"
#include "look1_iflf_binlcapw.h"

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_PWDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) HePWDR_b_FuseA_Available = 0;/* Referenced by: '<S288>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) HePWDR_b_FuseB_Available = 0;/* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) HePWDR_b_FuseC_Available = 0;/* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) HePWDR_b_FuseD_Available = 0;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) HePWDR_b_FuseE_Available = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) HePWDR_b_HVIL_Config_TwoSignals =
    0;                                 /* Referenced by: '<S306>/Calib' */

#endif

static volatile CONST(float32, PWDR_VAR_INIT) HePWDR_t_MedTEB = 0.01F;/* Referenced by:
                                                                      * '<S31>/Calib'
                                                                      * '<S307>/Calib'
                                                                      * '<S81>/Calib'
                                                                      */

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_BCMwuHwLineMonitor = 10U;/* Referenced by: '<S454>/Calib' */

#endif

static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_Cnt_BattOverTempFailureCntLmt = 0.0F;/* Referenced by: '<S532>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_Cnt_BattOverTempFailureSmplCntLmt = 0.0F;/* Referenced by: '<S533>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_ChargingStartWaitTime =
    0U;                                /* Referenced by: '<S534>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_DAPFail = 10U;/* Referenced by: '<S106>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_DAPInitDelay = 250U;/* Referenced by: '<S293>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_DAPKeyCylThreshold = 10U;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_DAPPass = 10U;/* Referenced by: '<S107>/Calib' */

#endif

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_DbncOutTqReq = 0U;/* Referenced by: '<S586>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_DbncPSA = 600U;/* Referenced by: '<S587>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_FailLmtIntrlck = 600U;/* Referenced by: '<S308>/Calib' */

#endif

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_FailLmtSOCPerf = 0U;/* Referenced by: '<S562>/Calib' */

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseA_Fail = 10U;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseA_Pass = 10U;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseB_Fail = 10U;/* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseB_Pass = 10U;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseC_Fail = 10U;/* Referenced by: '<S191>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseC_Pass = 10U;/* Referenced by: '<S192>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseD_Fail = 10U;/* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseD_Pass = 10U;/* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseE_Fail = 10U;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVFuseE_Pass = 10U;/* Referenced by: '<S248>/Calib' */

#endif

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVOverVoltFailureCntLmt =
    43U;                               /* Referenced by: '<S373>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT)
    KePWDR_Cnt_HVOverVoltFailureSmplCntLmt = 50U;/* Referenced by: '<S374>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVOverVoltWarningCntLmt =
    43U;                               /* Referenced by: '<S375>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT)
    KePWDR_Cnt_HVOverVoltWarningSmplCntLmt = 50U;/* Referenced by: '<S376>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVUnderVoltFailureCntLmt
    = 43U;                             /* Referenced by: '<S419>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT)
    KePWDR_Cnt_HVUnderVoltFailureSmplCntLmt = 50U;/* Referenced by: '<S420>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_HVUnderVoltWarningCntLmt
    = 43U;                             /* Referenced by: '<S421>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT)
    KePWDR_Cnt_HVUnderVoltWarningSmplCntLmt = 50U;/* Referenced by: '<S422>/Calib' */

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_InitDbncDelay = 10U;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_MsmtchLowFailLim = 380U;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_MsmtchLowSmplLim = 385U;/* Referenced by: '<S457>/Calib' */

#endif

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_OverTempBatteryAbuse =
    0U;                                /* Referenced by: '<S535>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_OverVoltWarningThrshld =
    0U;                                /* Referenced by: '<S377>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_PassLmtIntrlck = 600U;/* Referenced by: '<S309>/Calib' */

#endif

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_PassLmtSOCPerf = 0U;/* Referenced by: '<S563>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_Runtime1_MaxVal = 0U;/* Referenced by: '<S576>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_Runtime2_MaxVal = 0U;/* Referenced by: '<S584>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Cnt_SOCHighFailureCntLmt =
    0.0F;                              /* Referenced by: '<S624>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SOCHighFailureSmplCntLmt
    = 0U;                              /* Referenced by: '<S625>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Cnt_SOCHighWarningCntLmt =
    0.0F;                              /* Referenced by: '<S626>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SOCHighWarningSmplCntLmt
    = 0U;                              /* Referenced by: '<S627>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Cnt_SOCLowFailureCntLmt =
    0.0F;                              /* Referenced by: '<S671>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SOCLowFailureSmplCntLmt =
    0U;                                /* Referenced by: '<S672>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SOCLowWarningCntLmt = 0U;/* Referenced by: '<S673>/Calib' */
static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SOCLowWarningSmplCntLmt =
    0U;                                /* Referenced by: '<S674>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SmplLmtIntrlck = 600U;/* Referenced by: '<S310>/Calib' */

#endif

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_SmplLmtSOCPerf = 0U;/* Referenced by: '<S564>/Calib' */

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_StuckHiFailLim = 10U;/* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(uint16, PWDR_VAR_INIT) KePWDR_Cnt_StuckHiSmplLim = 15U;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(uint8, PWDR_VAR_INIT) KePWDR_Cnt_WarmupCycleThrhold = 3U;/* Referenced by: '<S93>/Calib' */

#endif

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_M_EngTorqMax = 0.0F;/* Referenced by: '<S588>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_M_EngTorqMin = 0.0F;/* Referenced by: '<S589>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_M_OutTqReqMin = 0.0F;/* Referenced by: '<S590>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_AStopBatSOCMin1 = 0.0F;/* Referenced by: '<S569>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCHighCntrlVal = 0.0F;/* Referenced by: '<S628>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCHighThrshld = 0.0F;/* Referenced by: '<S629>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCHighThrshldNtChrgng =
    0.0F;                              /* Referenced by: '<S630>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCHighWarningThrshld =
    0.0F;                              /* Referenced by: '<S631>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCLowCntrlVal = 0.0F;/* Referenced by: '<S675>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCLowThrshld = 0.0F;/* Referenced by: '<S676>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCLowThrshldNtChrgng =
    0.0F;                              /* Referenced by: '<S677>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_Pct_SOCLowThrshldNtChrgng_InPlant = 15.0F;/* Referenced by: '<S678>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_SOCLowWarningThrshld =
    0.0F;                              /* Referenced by: '<S679>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_Pct_SOCLowWarningThrshld_InPlant = 15.0F;/* Referenced by: '<S680>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_ZeroSpdStopBatSOCMin =
    0.0F;                              /* Referenced by: '<S570>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_Pct_delSOC = 0.0F;/* Referenced by: '<S578>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_T_BatOverTemp = 0.0F;/* Referenced by: '<S591>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_T_BatUnderTemp = 0.0F;/* Referenced by: '<S592>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_T_BattAbuseOverTempFailureThrshld = 0.0F;/* Referenced by: '<S536>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_T_BattOverTempCntrlVal =
    0.0F;                              /* Referenced by: '<S537>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_T_BattOverTempFailureThrshld = 0.0F;/* Referenced by: '<S538>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT)
    KePWDR_T_BattOverTempFailureThrshldNtChrgng = 0.0F;/* Referenced by: '<S539>/Calib' */

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_BCMwuHwLineThrshld =
    10.0F;                             /* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_DAPEnblVolt = 320.0F;/* Referenced by: '<S294>/Calib' */

#endif

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVOverVoltCntrlVal = 0.0F;/* Referenced by: '<S378>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVOverVoltFailureThrshld2
    = 430.0F;                          /* Referenced by: '<S379>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVOverVoltFailureThrshld3
    = 450.0F;                          /* Referenced by: '<S380>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVOverVoltWarningThrshld =
    390.0F;                            /* Referenced by: '<S381>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVUnderVoltCntrlVal =
    0.0F;                              /* Referenced by: '<S423>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVUnderVoltFailureThrshld
    = 170.0F;                          /* Referenced by: '<S424>/Calib' */
static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVUnderVoltWarningThrshld
    = 190.0F;                          /* Referenced by: '<S425>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVdeltaLowLim = -30.0F;/* Referenced by: '<S295>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_U_HVdeltaUpLim = 30.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_APMAvailable = 1;/* Referenced by:
                                                                      * '<S297>/Calib'
                                                                      * '<S137>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_BCMWupLineRstMsmtch = 0;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_BCMWupLineRstStuckHi = 1;/* Referenced by: '<S462>/Calib' */

#endif

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_BPCM_P1A26_LtchEnbl = 0;/* Referenced by: '<S565>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_BattOverTempCntrlEnbl = 0;/* Referenced by: '<S540>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_BattOverTempEnable = 0;/* Referenced by: '<S541>/Calib' */

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_CBCWupDiagn_EnblChrgRq =
    0;                                 /* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_CBCWupDiagn_EnblDrvDrAjar
    = 0;                               /* Referenced by: '<S464>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_CBCWupDiagn_EnblKey = 1;/* Referenced by: '<S465>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_CBCWupDiagn_EnblRS = 0;/* Referenced by: '<S466>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT)
    KePWDR_b_ConModImpWkupPerf_LtchEnbl = 0;/* Referenced by: '<S467>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT)
    KePWDR_b_ConModImpWkupPerf_StuckHi_LtchEnbl = 0;/* Referenced by: '<S468>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_DAPFailedOvrd = 0;/* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_DAPFailedOvrdEnbl = 0;/* Referenced by: '<S88>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_DAPPassedOvrd = 0;/* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_DAPPassedOvrdEnbl = 0;/* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_DsblChrgDlyHVIL = 1;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_EACAvailable = 1;/* Referenced by:
                                                                      * '<S298>/Calib'
                                                                      * '<S165>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_PWDR_5

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_EnableCntOpenDTC_Set = 1;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_EnableFailP0A0A = 1;/* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_EnablePassP0A0A = 1;/* Referenced by: '<S313>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_4

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_EnablePrechargeDTC_Set =
    1;                                 /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_EnblCBCWupDiagn = 0;/* Referenced by: '<S469>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(boolean, PWDR_VAR_INIT)
    KePWDR_b_GlobalCond_BCMWkupPerf_Ovrd = 0;/* Referenced by: '<S470>/Calib' */

#endif

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_GlobalCond_SOCFlt_Ovrd =
    0;                                 /* Referenced by: '<S516>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HB_BattSOC_Hi_LtchEnbl =
    0;                                 /* Referenced by: '<S632>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HB_BattSOC_Lo_LtchEnbl =
    0;                                 /* Referenced by: '<S681>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HB_Ovrtemp_LtchEnbl = 0;/* Referenced by: '<S542>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HVILCkt_LtchEnbl = 0;/* Referenced by: '<S314>/Calib' */

#endif

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HVOverVoltCntrlEnbl = 1;/* Referenced by: '<S382>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HVOverVoltEnable = 1;/* Referenced by: '<S383>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HVUnderVoltCntrlEnbl = 1;/* Referenced by: '<S426>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HVUnderVoltEnable = 1;/* Referenced by: '<S427>/Calib' */

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HiVoltageFuseB_LtchEnbl =
    0;                                 /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HiVoltageFuseC_LtchEnbl =
    0;                                 /* Referenced by: '<S193>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HiVoltageFuseD_LtchEnbl =
    0;                                 /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HiVoltageFuseE_LtchEnbl =
    0;                                 /* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HiVoltageFuse_LtchEnbl =
    0;                                 /* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_Htr2Available = 0;/* Referenced by:
                                                                      * '<S299>/Calib'
                                                                      * '<S222>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_Htr4Available = 0;/* Referenced by:
                                                                      * '<S300>/Calib'
                                                                      * '<S250>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_HtrAvailable = 1;/* Referenced by:
                                                                      * '<S301>/Calib'
                                                                      * '<S194>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_IUMPR_SOCHi_Ovrd = 0;/* Referenced by: '<S517>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_IUMPR_SOCHi_Val = 0;/* Referenced by: '<S518>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_IUMPR_SOCLow_Ovrd = 0;/* Referenced by: '<S519>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_IUMPR_SOCLow_Val = 0;/* Referenced by: '<S520>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_IUMPR_SOCPerf_Ovrd = 0;/* Referenced by: '<S521>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_IUMPR_SOCPerf_Val = 0;/* Referenced by: '<S522>/Calib' */

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_OpenCntctrOvrd = 0;/* Referenced by: '<S720>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_OpenCntctrOvrdEnbl = 1;/* Referenced by: '<S721>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_OpnHVCbl_LtchEnbl = 0;/* Referenced by: '<S108>/Calib' */

#endif

static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_SOCHighCntrlEnbl = 0;/* Referenced by: '<S633>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_SOCHighEnable = 0;/* Referenced by: '<S634>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_SOCLowCntrlEnbl = 0;/* Referenced by: '<S682>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_SOCLowEnable = 0;/* Referenced by: '<S683>/Calib' */
static volatile CONST(boolean, PWDR_VAR_INIT) KePWDR_b_SOCRatEnable = 0;/* Referenced by: '<S593>/Calib' */

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_l_DAPDistThreshold =
    1000.0F;                           /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_r_DistTravldScaling = 0.2F;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_t_CBCWupDiagn_Thrshld =
    10.0F;                             /* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_t_CBCWupDiagn_dT = 0.025F;/* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(uint32, PWDR_VAR_INIT) KePWDR_t_DAPTimeThreshold =
    1209600U;                          /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_t_TimeWaitUpdateHVIL = 0.5F;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static volatile CONST(float32, PWDR_VAR_INIT) KePWDR_v_VehicleSpdDAPThrhold =
    5.0F;                              /* Referenced by: '<S86>/Calib' */

#endif

static volatile CONST(float32, PWDR_VAR_INIT) KtPWDR_P_SOCHighActBatPowThrshld[3]
    =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S635>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT)
    KtPWDR_P_SOCHighActBatPowThrshldNtChrgng[3] =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S636>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT) KtPWDR_P_SOCLowActBatPowThrshld[3]
    =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT)
    KtPWDR_P_SOCLowActBatPowThrshldNtChrgng[3] =
{
    0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S685>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT) KxPWDR_P_SOCHighActBatPowThrshld[3]
    =
{
    0.0F, 1.0F, 2.0F
} ;                                    /* Referenced by: '<S635>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT)
    KxPWDR_P_SOCHighActBatPowThrshldNtChrgng[3] =
{
    0.0F, 1.0F, 2.0F
} ;                                    /* Referenced by: '<S636>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT) KxPWDR_P_SOCLowActBatPowThrshld[3]
    =
{
    0.0F, 1.0F, 2.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

static volatile CONST(float32, PWDR_VAR_INIT)
    KxPWDR_P_SOCLowActBatPowThrshldNtChrgng[3] =
{
    0.0F, 1.0F, 2.0F
} ;                                    /* Referenced by: '<S685>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_PWDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PWDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(uint8, PWDR_VAR_INIT) EePWDR_Cnt_DAP_FA_KeyCylCnt;/* '<Root>/DSM_2' */
static VAR(uint8, PWDR_VAR_INIT) EePWDR_Cnt_WarmupCycle;/* '<Root>/DSM_16' */
static VAR(boolean, PWDR_VAR_INIT) EePWDR_b_DAPFA_OpenCntctr;/* '<Root>/DSM_13' */
static VAR(float32, PWDR_VAR_INIT) EePWDR_l_DAP_FA_DistTravld;/* '<Root>/DSM_1' */
static VAR(uint32, PWDR_VAR_INIT) EePWDR_t_DAP_FA_ElapsedTime;/* '<Root>/DSM_17' */
static VAR(uint32, PWDR_VAR_INIT) EePWDR_t_DAP_FA_InitTime;/* '<Root>/DSM_12' */
static VAR(uint8, PWDR_VAR_INIT) EePWDR_y_DID_B524;/* '<Root>/DSM_11' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_BOT_Fail;/* '<S552>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_BOT_FailSmpl;/* '<S553>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCH_Fail;/* '<S647>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCH_FailSmpl;/* '<S648>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCH_Warning;/* '<S661>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCH_WarningSmpl;/* '<S662>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCL_Fail;/* '<S696>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCL_FailSmpl;/* '<S697>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCL_Warning;/* '<S710>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_SOCL_WarningSmpl;/* '<S711>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDD_Cnt_Timer2;/* '<S581>/Switch1' */
static VAR(float32, PWDR_VAR_INIT) VePWDD_Pct_SOCHighFBVal;/* '<S623>/Switch1' */
static VAR(float32, PWDR_VAR_INIT) VePWDD_Pct_SOCLowFBVal;/* '<S670>/Switch1' */
static VAR(float32, PWDR_VAR_INIT) VePWDD_T_BattOverTempFBVal;/* '<S531>/Switch1' */
static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_1A26_Test1;/* '<S561>/Logical5' */
static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_1A26_Test2;/* '<S561>/Logical8' */
static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_1A26_Test3;/* '<S585>/Logical Operator' */
static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_1A26_Test4;/* '<S594>/AND' */

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_InitDbncDelay;/* '<S477>/AND' */

#endif

static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_SOCHiFltEvent;/* '<S524>/Greater  Than4' */
static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_SOCLowRemdEvent;/* '<S525>/Logical Operator1' */

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_VoltBelowThrshld;/* '<S476>/AND' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDD_b_VoltChckEnblMsmtchLow;/* '<S451>/Logical32' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(uint8, PWDR_VAR_INIT) VePWDR_Cnt_DAPKeyCycl;/* '<S74>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_FailCntr;/* '<S118>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_Fail_CBCWupPerf_High;/* '<S505>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_Fail_CBCWupPerf_Low;/* '<S490>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseA_FailCntr;/* '<S153>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseA_SmplCntr;/* '<S154>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseB_FailCntr;/* '<S181>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseB_SmplCntr;/* '<S182>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseC_FailCntr;/* '<S209>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseC_SmplCntr;/* '<S210>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseD_FailCntr;/* '<S237>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseD_SmplCntr;/* '<S238>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseE_FailCntr;/* '<S265>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVFuseE_SmplCntr;/* '<S266>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVILCkt_FailCntr;/* '<S330>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVILCkt_PassCntr;/* '<S332>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVILCkt_SmplCntr;/* '<S331>/Switch1' */

#endif

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVOverVoltFailCnt;/* '<S411>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVOverVoltFailSmplCnt;/* '<S412>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVOverVoltWarnCnt;/* '<S401>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVOverVoltWarnSmplCnt;/* '<S402>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVUnderVoltFailCnt;/* '<S445>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVUnderVoltFailSmplCnt;/* '<S446>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVUnderVoltWarnCnt;/* '<S435>/Switch1' */
static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_HVUnderVoltWarnSmplCnt;/* '<S436>/Switch1' */

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(uint8, PWDR_VAR_INIT) VePWDR_Cnt_KeyCyclPass;/* '<S78>/Merge7' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_SmplCntr;/* '<S119>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_Smpl_CBCWupPerf_High;/* '<S506>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_Smpl_CBCWupPerf_Low;/* '<S491>/Switch1' */

#endif

static VAR(uint16, PWDR_VAR_INIT) VePWDR_Cnt_Timer1;/* '<S573>/Switch1' */

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(uint8, PWDR_VAR_INIT) VePWDR_Cnt_WarmupCyclPass;/* '<S78>/Merge8' */

#endif

static VAR(float32, PWDR_VAR_INIT) VePWDR_U_HVOverVoltFBVal;/* '<S371>/Switch1' */
static VAR(float32, PWDR_VAR_INIT) VePWDR_U_HVUnderVoltFBVal;/* '<S417>/Switch1' */

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_APM_HV_Valid;/* '<S64>/Logical6' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_BCMWupLineCntResetMsmtch;/* '<S451>/Logical25' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_BCMWupLineCntResetStuckHi;/* '<S451>/Logical26' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_BatCntctrDisablePass;/* '<S78>/Merge5' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CANFailCond;/* '<S451>/Logical21' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CBCWupPerf_High_Latched_Failed;/* '<S497>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CBCWupPerf_Low_Latched_Failed;/* '<S482>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_ChargeReq_FailCond;/* '<S451>/Logical17' */

#endif

#if Rte_SysCon_Variant_PWDR_5

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CntctrSeqIncrt_Fail;/* '<S50>/OR1' */

#endif

#if Rte_SysCon_Variant_PWDR_5

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CntctrSeqIncrt_FailCrit;/* '<S45>/AND' */

#endif

#if Rte_SysCon_Variant_PWDR_5

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CntctrSeqIncrt_Pass;/* '<S51>/OR1' */

#endif

#if Rte_SysCon_Variant_PWDR_5

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_CntctrSeqIncrt_PassCrit;/* '<S46>/AND' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAPBatCnctrDisable;/* '<S74>/Logical1' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAPFAOpenCntctrEEPROM;/* '<S718>/Switch1' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAPFA_Latched;/* '<S56>/Logical6' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAPKeyCycl_Incr;/* '<S74>/Logical2' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAP_FA;/* '<S110>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAP_FA_Intrnl;/* '<S71>/Logical10' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAP_NFA;/* '<S72>/Logical10' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAP_NFA_Intrnl;/* '<S71>/Logical4' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DAPdiagEnbl;/* '<S64>/Logical16' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_DrvDrAjar_FailCond;/* '<S451>/Logical19' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_EAC_HV_Valid;/* '<S64>/Logical3' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_EnblMsmtchLow;/* '<S451>/Logical6' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_EnblStuckHi;/* '<S451>/Logical31' */

#endif

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_FailMtrCntrlSys_FailCond;/* '<S23>/Gain' */

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_FuseA_Valid;/* '<S64>/Logical27' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_FuseB_Valid;/* '<S64>/Logical25' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_FuseC_Valid;/* '<S64>/Logical29' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_FuseD_Valid;/* '<S64>/Logical15' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_FuseE_Valid;/* '<S64>/Logical18' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVFuseA_FltDtct;/* '<S145>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVFuseB_FltDtct;/* '<S173>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVFuseC_FltDtct;/* '<S201>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVFuseD_FltDtct;/* '<S229>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVFuseE_FltDtct;/* '<S257>/Relational Operator' */

#endif

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVOverVoltFltStat;/* '<S407>/Greater Than or Equal ' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVOverVoltPassStat;/* '<S407>/NOT5' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVUnderVoltFltStat;/* '<S441>/Greater Than or Equal ' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_HVUnderVoltPassStat;/* '<S441>/NOT5' */

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_Htr2_HV_Valid;/* '<S64>/Logical10' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_Htr4_HV_Valid;/* '<S64>/Logical12' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_Htr_HV_Valid;/* '<S64>/Logical8' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_MsmtchLowEnblChk;/* '<S451>/Logical29' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_MsmtchLowFailCond;/* '<S451>/Logical22' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_MsmtchLowWindow;/* '<S475>/Greater  Than1' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_NewFail;/* '<S77>/Logical' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_P0A0ATestFailed;/* '<S65>/Logical8' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_P0A0ATestPassed;/* '<S65>/Logical6' */

#endif

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_PSA_Enable;/* '<S595>/AND' */

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_PowerMode_FailCond;/* '<S451>/Logical14' */

#endif

#if Rte_SysCon_Variant_PWDR_4

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_PrchrgTooLong_Fail;/* '<S36>/AND6' */

#endif

#if Rte_SysCon_Variant_PWDR_4

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_PrchrgTooLong_Pass;/* '<S36>/AND5' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_ResetMsmtchLow;/* '<S451>/Logical27' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_ResetStuckHi;/* '<S451>/Logical28' */

#endif

#if Rte_SysCon_Variant_PWDR_6

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_RmtVehStartReq_FailCond;/* '<S451>/Logical15' */

#endif

static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_SOCHiRemdEvent;/* '<S524>/Logical Operator1' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_SOCHighDiagEnbl;/* '<S524>/Logical' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_SOCMonResetTimer1;/* '<S572>/Logical4' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_SOCMonResetTimer2;/* '<S572>/Logical2' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_SOCRat_Pass;/* '<S560>/Logical9' */
static VAR(boolean, PWDR_VAR_INIT) VePWDR_b_TempTest_1A26;/* '<S561>/Logical2' */
static VAR(TeDFIB_e_FaultDebounceStatus, PWDR_VAR_INIT) VePWDR_e_SOCHighFltStat;/* '<S638>/Merge' */
static VAR(TeDFIB_e_FaultDebounceStatus, PWDR_VAR_INIT) VePWDR_e_SOCLowFltStat;/* '<S687>/Merge' */

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(float32, PWDR_VAR_INIT) VePWDR_l_DIstancePerSampleTimeinMtr;/* '<S74>/Multiplication' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(float32, PWDR_VAR_INIT) VePWDR_l_DistTravldPass;/* '<S78>/Merge6' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(uint32, PWDR_VAR_INIT) VePWDR_t_DAP_FA_InitTime;/* '<S77>/Merge' */

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static VAR(uint32, PWDR_VAR_INIT) VePWDR_t_ElapsedTimePass;/* '<S78>/Merge9' */

#endif

#if Rte_SysCon_Variant_PWDR_2

static VAR(uint8, PWDR_VAR_INIT) VePWDR_y_DID_B524_TestPoint;/* '<S96>/Bitwise Logical Operator' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PWDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_PWDR
#include "MemMap.h"

CONST(ConstB_PWDR_ac_T, PWDR_VAR_INIT) PWDR_ac_ConstB =
{
    CePWDR_e_FuseNotSupported,         /* '<S719>/Const32' */
    CePWDR_e_FuseNotSupported,         /* '<S719>/Const33' */
    CePWDR_e_FuseNotSupported,         /* '<S719>/Const34' */
    CePWDR_e_FuseNotSupported,         /* '<S719>/Const35' */
    CePWDR_e_FuseNotSupported,         /* '<S719>/Const36' */
    CeHVTR_e_HVOverVoltPass,           /* '<S719>/Const15' */
    CeDFIB_e_Init,                     /* '<S722>/Constant' */
    CeDFIB_e_Init,                     /* '<S723>/Constant' */
    CeDFIB_e_Init,                     /* '<S724>/Constant' */
    CeDFIB_e_Init,                     /* '<S725>/Constant' */
    CeDFIB_e_Init,                     /* '<S726>/Constant' */
    CeDFIB_e_Init,                     /* '<S727>/Constant' */
    CeDFIB_e_Init,                     /* '<S728>/Constant' */
    CeDFIB_e_Init,                     /* '<S729>/Constant' */
    CeDFIB_e_Init,                     /* '<S730>/Constant' */
    CeDFIB_e_Init,                     /* '<S731>/Constant' */
    CeDFIB_e_Init,                     /* '<S732>/Constant' */
    CeDFIB_e_Init,                     /* '<S733>/Constant' */
    CeDFIB_e_Init,                     /* '<S734>/Constant' */
    CeDFIB_e_Init                      /* '<S735>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_PWDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PWDR
#include "MemMap.h"

VAR(B_PWDR_ac_T, PWDR_VAR_INIT) PWDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PWDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_PWDR
#include "MemMap.h"

VAR(DW_PWDR_ac_T, PWDR_VAR_INIT) PWDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_PWDR
#include "MemMap.h"

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PWDR_VAR_INIT)
    rty_FaultSts);
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_Init_a(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PWDR_VAR_INIT)
    rty_FaultSts);
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PWDR_VAR_INIT)
    rty_FaultSts);
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_IfActionSubsystem1(P2VAR(boolean,
    AUTOMATIC, PWDR_VAR_INIT) rty_Out2);

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_HVFuse_Flt_Det_Init(void);

#endif

#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_HVFuse_Flt_Det(void);

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_DAP_FA_CntctrDsbl(void);

#endif

#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_NoFA_CntctrEnbl(void);

#endif

#if Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_DAP_Flt_Det_Init(void);

#endif

#if Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_DAP_Flt_Det(void);

#endif

#if Rte_SysCon_Variant_PWDR_7

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_SingleCAN(void);

#endif

/*
 * Output and update for enable system:
 *    '<S145>/Fail'
 *    '<S173>/Fail'
 *    '<S201>/Fail'
 *    '<S229>/Fail'
 *    '<S257>/Fail'
 *    '<S110>/Fail'
 *    '<S321>/Fail'
 *    '<S482>/Fail'
 *    '<S497>/Fail'
 *    '<S544>/Fail'
 *    ...
 */
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_Fail(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PWDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S145>/Fail' incorporates:
     *  EnablePort: '<S149>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S149>/FaultSts' incorporates:
         *  Constant: '<S155>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S145>/Fail' */
}

/*
 * Output and update for enable system:
 *    '<S145>/Init'
 *    '<S173>/Init'
 *    '<S201>/Init'
 *    '<S229>/Init'
 *    '<S257>/Init'
 *    '<S110>/Init'
 *    '<S321>/Init'
 *    '<S482>/Init'
 *    '<S497>/Init'
 *    '<S544>/Init'
 *    ...
 */
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_Init_a(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PWDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S145>/Init' incorporates:
     *  EnablePort: '<S150>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S150>/FaultSts' incorporates:
         *  Constant: '<S156>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Init;
    }

    /* End of Outputs for SubSystem: '<S145>/Init' */
}

/*
 * Output and update for enable system:
 *    '<S145>/Pass'
 *    '<S173>/Pass'
 *    '<S201>/Pass'
 *    '<S229>/Pass'
 *    '<S257>/Pass'
 *    '<S110>/Pass'
 *    '<S321>/Pass'
 *    '<S482>/Pass'
 *    '<S497>/Pass'
 *    '<S544>/Pass'
 *    ...
 */
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_Pass(VAR(boolean, AUTOMATIC)
    rtu_Enable, P2VAR(TeDFIB_e_FaultDebounceStatus, AUTOMATIC, PWDR_VAR_INIT)
    rty_FaultSts)
{
    /* Outputs for Enabled SubSystem: '<S145>/Pass' incorporates:
     *  EnablePort: '<S151>/Enable'
     */
    if (rtu_Enable)
    {
        /* SignalConversion generated from: '<S151>/FaultSts' incorporates:
         *  Constant: '<S157>/Constant'
         */
        *rty_FaultSts = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S145>/Pass' */
}

/* System initialize for atomic system: '<S63>/HVFuse_Flt_Det' */
#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_HVFuse_Flt_Det_Init(void)
{
    /* SystemInitialize for VariantMerge generated from: '<S54>/HVFuseA_Status' incorporates:
     *  Merge: '<S127>/Merge3'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseNotSupported;

    /* SystemInitialize for VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse' incorporates:
     *  Merge: '<S145>/Merge'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_h = CeDFIB_e_Init;

    /* SystemInitialize for VariantMerge generated from: '<S54>/HVFuseB_Status' incorporates:
     *  Merge: '<S128>/Merge3'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseNotSupported;

    /* SystemInitialize for VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB' incorporates:
     *  Merge: '<S173>/Merge'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_i = CeDFIB_e_Init;

    /* SystemInitialize for VariantMerge generated from: '<S54>/HVFuseC_Status' incorporates:
     *  Merge: '<S129>/Merge3'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseNotSupported;

    /* SystemInitialize for VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC' incorporates:
     *  Merge: '<S201>/Merge'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_o = CeDFIB_e_Init;

    /* SystemInitialize for VariantMerge generated from: '<S54>/HVFuseD_Status' incorporates:
     *  Merge: '<S130>/Merge3'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseNotSupported;

    /* SystemInitialize for VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD' incorporates:
     *  Merge: '<S229>/Merge'
     */
    PWDR_ac_B.VariantMergeForOutportFaultS_om = CeDFIB_e_Init;

    /* SystemInitialize for VariantMerge generated from: '<S54>/HVFuseE_Status' incorporates:
     *  Merge: '<S131>/Merge3'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseNotSupported;

    /* SystemInitialize for VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE' incorporates:
     *  Merge: '<S257>/Merge'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_f = CeDFIB_e_Init;
}

#endif

/* Output and update for atomic system: '<S63>/HVFuse_Flt_Det' */
#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_HVFuse_Flt_Det(void)
{
    boolean rtb_AND;
    boolean rtb_AND_if;
    boolean rtb_AND_j0;
    boolean rtb_AND_k4;
    boolean rtb_AND_la;
    boolean rtb_Logical1;
    boolean rtb_RelationalOperator3;
    boolean rtb_RelationalOperator3_b;
    boolean rtb_RelationalOperator3_m4;
    boolean rtb_RelationalOperator3_mh;
    boolean rtb_RelationalOperator3_mt;

    /* RelationalOperator: '<S145>/Relational Operator3' incorporates:
     *  Constant: '<S145>/Constant3'
     *  S-Function (sfix_bitop): '<S145>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_e) & 64U) == 0U);

    /* Logic: '<S145>/Logical1' incorporates:
     *  Constant: '<S138>/Calib'
     *  Constant: '<S145>/Constant1'
     *  Logic: '<S127>/Logical7'
     *  Logic: '<S145>/Logical Operator'
     *  Logic: '<S145>/Logical10'
     *  Logic: '<S145>/Logical12'
     *  RelationalOperator: '<S145>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S145>/Bitwise Operator3'
     */
    rtb_Logical1 = (((VePWDR_b_DAPdiagEnbl) && (VePWDR_b_FuseA_Valid)) &&
                    ((!KePWDR_b_HiVoltageFuse_LtchEnbl) || (((((uint32)
                         PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_e) & 1U) == 0U)
                      || (!rtb_RelationalOperator3))));

    /* Outputs for Atomic SubSystem: '<S145>/EdgeFalling1' */
    /* Logic: '<S147>/AND' incorporates:
     *  Logic: '<S147>/OR1'
     *  UnitDelay: '<S147>/Unit Delay'
     */
    rtb_AND_j0 = ((!rtb_RelationalOperator3) && (PWDR_ac_DW.UnitDelay_DSTATE_ay0));

    /* Update for UnitDelay: '<S147>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ay0 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S145>/EdgeFalling1' */

    /* Logic: '<S145>/Logical5' */
    rtb_AND_j0 = ((PWDR_ac_B.NOT4) || rtb_AND_j0);

    /* Outputs for Atomic SubSystem: '<S146>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S146>/Counter Reset  Enabled ' */
    /* Switch: '<S153>/Switch1' incorporates:
     *  Logic: '<S146>/Fail Counter Reset'
     *  Logic: '<S146>/NOT6'
     *  Switch: '<S153>/Switch2'
     *  Switch: '<S154>/Switch1'
     *  UnitDelay: '<S146>/Unit Delay'
     *  UnitDelay: '<S146>/Unit Delay1'
     */
    if ((rtb_AND_j0 || (PWDR_ac_DW.UnitDelay_DSTATE_ik)) ||
            (PWDR_ac_DW.UnitDelay1_DSTATE_mo))
    {
        /* Switch: '<S153>/Switch1' incorporates:
         *  Constant: '<S153>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseA_FailCntr = 0U;

        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S154>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseA_SmplCntr = 0U;
    }
    else
    {
        if (rtb_Logical1 && (PWDR_ac_B.VePWDR_b_APM_HV_VoltChkFail_Out))
        {
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S153>/Constant Value1'
             *  Sum: '<S153>/Subtraction'
             *  Switch: '<S153>/Switch2'
             *  UnitDelay: '<S153>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseA_FailCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseA_FailCntr) + 1U);
        }

        /* Switch: '<S154>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S154>/Switch1' incorporates:
             *  Constant: '<S154>/Constant Value1'
             *  Sum: '<S154>/Subtraction'
             *  Switch: '<S154>/Switch2'
             *  UnitDelay: '<S154>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseA_SmplCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseA_SmplCntr) + 1U);
        }

        /* End of Switch: '<S154>/Switch2' */
    }

    /* End of Switch: '<S153>/Switch1' */
    /* End of Outputs for SubSystem: '<S146>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S146>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S146>/Greater Than or Equal ' incorporates:
     *  Constant: '<S135>/Calib'
     */
    rtb_Logical1 = (VePWDR_Cnt_HVFuseA_FailCntr >= KePWDR_Cnt_HVFuseA_Fail);

    /* Logic: '<S146>/NOT5' incorporates:
     *  Constant: '<S136>/Calib'
     *  Logic: '<S146>/NOT3'
     *  RelationalOperator: '<S146>/Less Than  or Equal'
     */
    rtb_RelationalOperator3 = ((VePWDR_Cnt_HVFuseA_SmplCntr >=
        KePWDR_Cnt_HVFuseA_Pass) && (!rtb_Logical1));

    /* Switch: '<S159>/Switch1' incorporates:
     *  Constant: '<S152>/Constant Value'
     *  DataStoreWrite: '<S127>/Data Store Write1'
     *  Switch: '<S158>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVFuseAMFOP = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3)
        {
            /* MinMax: '<S152>/Minimum2' incorporates:
             *  DataStoreRead: '<S127>/Data Store Read2'
             *  Switch: '<S158>/Switch1'
             */
            if (VePWDR_Cnt_HVFuseA_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVFuseAMFOP)
            {
                /* DataStoreWrite: '<S127>/Data Store Write1' incorporates:
                 *  Switch: '<S158>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVFuseAMFOP = VePWDR_Cnt_HVFuseA_FailCntr;
            }

            /* End of MinMax: '<S152>/Minimum2' */
        }
    }

    /* End of Switch: '<S159>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S145>/Pass' */
    PWDR_ac_Pass(rtb_RelationalOperator3,
                 &PWDR_ac_B.VariantMergeForOutportFaultSt_h);

    /* End of Outputs for SubSystem: '<S145>/Pass' */

    /* Outputs for Enabled SubSystem: '<S145>/Fail' */
    PWDR_ac_Fail(rtb_Logical1, &PWDR_ac_B.VariantMergeForOutportFaultSt_h);

    /* End of Outputs for SubSystem: '<S145>/Fail' */

    /* Outputs for Enabled SubSystem: '<S145>/Init' */
    PWDR_ac_Init_a(rtb_AND_j0, &PWDR_ac_B.VariantMergeForOutportFaultSt_h);

    /* End of Outputs for SubSystem: '<S145>/Init' */

    /* RelationalOperator: '<S145>/Relational Operator' incorporates:
     *  Constant: '<S148>/Constant'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse'
     */
    VePWDR_b_HVFuseA_FltDtct = (((uint32)
        PWDR_ac_B.VariantMergeForOutportFaultSt_h) == CeDFIB_e_Fail);

    /* If: '<S127>/If1' incorporates:
     *  Constant: '<S137>/Calib'
     *  Logic: '<S127>/Logical1'
     */
    if (!KePWDR_b_APMAvailable)
    {
        /* Outputs for IfAction SubSystem: '<S127>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S134>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseA_Status' incorporates:
         *  Constant: '<S144>/Constant'
         *  SignalConversion generated from: '<S134>/HVFuseA_NotSupported'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseNotSupported;

        /* End of Outputs for SubSystem: '<S127>/If Action Subsystem3' */
    }
    else if (VePWDR_b_FuseA_Valid)
    {
        /* Outputs for IfAction SubSystem: '<S127>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S132>/Action Port'
         */
        /* Switch: '<S142>/Switch1' */
        if (VePWDR_b_HVFuseA_FltDtct)
        {
            /* VariantMerge generated from: '<S54>/HVFuseA_Status' incorporates:
             *  Constant: '<S141>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseFailed;
        }
        else
        {
            /* VariantMerge generated from: '<S54>/HVFuseA_Status' incorporates:
             *  Constant: '<S140>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FusePassed;
        }

        /* End of Switch: '<S142>/Switch1' */
        /* End of Outputs for SubSystem: '<S127>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S127>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S133>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseA_Status' incorporates:
         *  Constant: '<S143>/Constant'
         *  SignalConversion generated from: '<S133>/HVFuseA_Status_LOC'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseInvalid;

        /* End of Outputs for SubSystem: '<S127>/If Action Subsystem2' */
    }

    /* End of If: '<S127>/If1' */

    /* RelationalOperator: '<S173>/Relational Operator3' incorporates:
     *  Constant: '<S173>/Constant3'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_b = ((((uint32)
        PWDR_ac_B.TmpSignalConversionAtVeDMAB__e4) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S173>/EdgeFalling1' */
    /* Logic: '<S173>/Logical Operator' incorporates:
     *  Logic: '<S175>/OR1'
     */
    rtb_AND_if = !rtb_RelationalOperator3_b;

    /* End of Outputs for SubSystem: '<S173>/EdgeFalling1' */

    /* Logic: '<S173>/Logical1' incorporates:
     *  Constant: '<S166>/Calib'
     *  Constant: '<S173>/Constant1'
     *  Logic: '<S128>/Logical7'
     *  Logic: '<S173>/Logical Operator'
     *  Logic: '<S173>/Logical10'
     *  Logic: '<S173>/Logical12'
     *  RelationalOperator: '<S173>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S173>/Bitwise Operator3'
     */
    rtb_AND_j0 = (((VePWDR_b_DAPdiagEnbl) && (VePWDR_b_FuseB_Valid)) &&
                  ((!KePWDR_b_HiVoltageFuseB_LtchEnbl) || (((((uint32)
                       PWDR_ac_B.TmpSignalConversionAtVeDMAB__e4) & 1U) == 0U) ||
                    rtb_AND_if)));

    /* Outputs for Atomic SubSystem: '<S173>/EdgeFalling1' */
    /* Logic: '<S175>/AND' incorporates:
     *  UnitDelay: '<S175>/Unit Delay'
     */
    rtb_AND_if = (rtb_AND_if && (PWDR_ac_DW.UnitDelay_DSTATE_eg));

    /* Update for UnitDelay: '<S175>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_eg = rtb_RelationalOperator3_b;

    /* End of Outputs for SubSystem: '<S173>/EdgeFalling1' */

    /* Logic: '<S173>/Logical5' */
    rtb_AND_if = ((PWDR_ac_B.NOT4) || rtb_AND_if);

    /* Outputs for Atomic SubSystem: '<S174>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S174>/Counter Reset  Enabled ' */
    /* Switch: '<S181>/Switch1' incorporates:
     *  Logic: '<S174>/Fail Counter Reset'
     *  Logic: '<S174>/NOT6'
     *  Switch: '<S181>/Switch2'
     *  Switch: '<S182>/Switch1'
     *  UnitDelay: '<S174>/Unit Delay'
     *  UnitDelay: '<S174>/Unit Delay1'
     */
    if ((rtb_AND_if || (PWDR_ac_DW.UnitDelay_DSTATE_jx1)) ||
            (PWDR_ac_DW.UnitDelay1_DSTATE_i1))
    {
        /* Switch: '<S181>/Switch1' incorporates:
         *  Constant: '<S181>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseB_FailCntr = 0U;

        /* Switch: '<S182>/Switch1' incorporates:
         *  Constant: '<S182>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseB_SmplCntr = 0U;
    }
    else
    {
        if (rtb_AND_j0 && (PWDR_ac_B.VePWDR_b_EAC_HV_VoltChkFail_Out))
        {
            /* Switch: '<S181>/Switch1' incorporates:
             *  Constant: '<S181>/Constant Value1'
             *  Sum: '<S181>/Subtraction'
             *  Switch: '<S181>/Switch2'
             *  UnitDelay: '<S181>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseB_FailCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseB_FailCntr) + 1U);
        }

        /* Switch: '<S182>/Switch2' */
        if (rtb_AND_j0)
        {
            /* Switch: '<S182>/Switch1' incorporates:
             *  Constant: '<S182>/Constant Value1'
             *  Sum: '<S182>/Subtraction'
             *  Switch: '<S182>/Switch2'
             *  UnitDelay: '<S182>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseB_SmplCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseB_SmplCntr) + 1U);
        }

        /* End of Switch: '<S182>/Switch2' */
    }

    /* End of Switch: '<S181>/Switch1' */
    /* End of Outputs for SubSystem: '<S174>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S174>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S174>/Greater Than or Equal ' incorporates:
     *  Constant: '<S163>/Calib'
     */
    rtb_AND_j0 = (VePWDR_Cnt_HVFuseB_FailCntr >= KePWDR_Cnt_HVFuseB_Fail);

    /* Logic: '<S174>/NOT5' incorporates:
     *  Constant: '<S164>/Calib'
     *  Logic: '<S174>/NOT3'
     *  RelationalOperator: '<S174>/Less Than  or Equal'
     */
    rtb_RelationalOperator3_b = ((VePWDR_Cnt_HVFuseB_SmplCntr >=
        KePWDR_Cnt_HVFuseB_Pass) && (!rtb_AND_j0));

    /* Switch: '<S187>/Switch1' incorporates:
     *  Constant: '<S180>/Constant Value'
     *  DataStoreWrite: '<S128>/Data Store Write4'
     *  Switch: '<S186>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVFuseBMFOP = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_b)
        {
            /* MinMax: '<S180>/Minimum2' incorporates:
             *  DataStoreRead: '<S128>/Data Store Read2'
             *  Switch: '<S186>/Switch1'
             */
            if (VePWDR_Cnt_HVFuseB_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVFuseBMFOP)
            {
                /* DataStoreWrite: '<S128>/Data Store Write4' incorporates:
                 *  Switch: '<S186>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVFuseBMFOP = VePWDR_Cnt_HVFuseB_FailCntr;
            }

            /* End of MinMax: '<S180>/Minimum2' */
        }
    }

    /* End of Switch: '<S187>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S173>/Pass' */
    PWDR_ac_Pass(rtb_RelationalOperator3_b,
                 &PWDR_ac_B.VariantMergeForOutportFaultSt_i);

    /* End of Outputs for SubSystem: '<S173>/Pass' */

    /* Outputs for Enabled SubSystem: '<S173>/Fail' */
    PWDR_ac_Fail(rtb_AND_j0, &PWDR_ac_B.VariantMergeForOutportFaultSt_i);

    /* End of Outputs for SubSystem: '<S173>/Fail' */

    /* Outputs for Enabled SubSystem: '<S173>/Init' */
    PWDR_ac_Init_a(rtb_AND_if, &PWDR_ac_B.VariantMergeForOutportFaultSt_i);

    /* End of Outputs for SubSystem: '<S173>/Init' */

    /* RelationalOperator: '<S173>/Relational Operator' incorporates:
     *  Constant: '<S176>/Constant'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB'
     */
    VePWDR_b_HVFuseB_FltDtct = (((uint32)
        PWDR_ac_B.VariantMergeForOutportFaultSt_i) == CeDFIB_e_Fail);

    /* If: '<S128>/If1' incorporates:
     *  Constant: '<S165>/Calib'
     *  Logic: '<S128>/Logical1'
     */
    if (!KePWDR_b_EACAvailable)
    {
        /* Outputs for IfAction SubSystem: '<S128>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S162>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseB_Status' incorporates:
         *  Constant: '<S172>/Constant'
         *  SignalConversion generated from: '<S162>/HVFuseB_NotSupported'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseNotSupported;

        /* End of Outputs for SubSystem: '<S128>/If Action Subsystem3' */
    }
    else if (VePWDR_b_FuseB_Valid)
    {
        /* Outputs for IfAction SubSystem: '<S128>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S160>/Action Port'
         */
        /* Switch: '<S170>/Switch1' */
        if (VePWDR_b_HVFuseB_FltDtct)
        {
            /* VariantMerge generated from: '<S54>/HVFuseB_Status' incorporates:
             *  Constant: '<S169>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseFailed;
        }
        else
        {
            /* VariantMerge generated from: '<S54>/HVFuseB_Status' incorporates:
             *  Constant: '<S168>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FusePassed;
        }

        /* End of Switch: '<S170>/Switch1' */
        /* End of Outputs for SubSystem: '<S128>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S128>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S161>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseB_Status' incorporates:
         *  Constant: '<S171>/Constant'
         *  SignalConversion generated from: '<S161>/HVFuseB_Status_LOC'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseInvalid;

        /* End of Outputs for SubSystem: '<S128>/If Action Subsystem2' */
    }

    /* End of If: '<S128>/If1' */

    /* RelationalOperator: '<S201>/Relational Operator3' incorporates:
     *  Constant: '<S201>/Constant3'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_mh = ((((uint32)
        PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_p) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S201>/EdgeFalling1' */
    /* Logic: '<S201>/Logical Operator' incorporates:
     *  Logic: '<S203>/OR1'
     */
    rtb_AND_k4 = !rtb_RelationalOperator3_mh;

    /* End of Outputs for SubSystem: '<S201>/EdgeFalling1' */

    /* Logic: '<S201>/Logical1' incorporates:
     *  Constant: '<S193>/Calib'
     *  Constant: '<S201>/Constant1'
     *  Logic: '<S129>/Logical7'
     *  Logic: '<S201>/Logical Operator'
     *  Logic: '<S201>/Logical10'
     *  Logic: '<S201>/Logical12'
     *  RelationalOperator: '<S201>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S201>/Bitwise Operator3'
     */
    rtb_AND_if = (((VePWDR_b_DAPdiagEnbl) && (VePWDR_b_FuseC_Valid)) &&
                  ((!KePWDR_b_HiVoltageFuseC_LtchEnbl) || (((((uint32)
                       PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_p) & 1U) == 0U) ||
                    rtb_AND_k4)));

    /* Outputs for Atomic SubSystem: '<S201>/EdgeFalling1' */
    /* Logic: '<S203>/AND' incorporates:
     *  UnitDelay: '<S203>/Unit Delay'
     */
    rtb_AND_k4 = (rtb_AND_k4 && (PWDR_ac_DW.UnitDelay_DSTATE_ef));

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ef = rtb_RelationalOperator3_mh;

    /* End of Outputs for SubSystem: '<S201>/EdgeFalling1' */

    /* Logic: '<S201>/Logical5' */
    rtb_AND_k4 = ((PWDR_ac_B.NOT4) || rtb_AND_k4);

    /* Outputs for Atomic SubSystem: '<S202>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S202>/Counter Reset  Enabled ' */
    /* Switch: '<S209>/Switch1' incorporates:
     *  Logic: '<S202>/Fail Counter Reset'
     *  Logic: '<S202>/NOT6'
     *  Switch: '<S209>/Switch2'
     *  Switch: '<S210>/Switch1'
     *  UnitDelay: '<S202>/Unit Delay'
     *  UnitDelay: '<S202>/Unit Delay1'
     */
    if ((rtb_AND_k4 || (PWDR_ac_DW.UnitDelay_DSTATE_c0)) ||
            (PWDR_ac_DW.UnitDelay1_DSTATE_mn))
    {
        /* Switch: '<S209>/Switch1' incorporates:
         *  Constant: '<S209>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseC_FailCntr = 0U;

        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S210>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseC_SmplCntr = 0U;
    }
    else
    {
        if (rtb_AND_if && (PWDR_ac_B.VePWDR_b_Htr_HV_VoltChkFail_Out))
        {
            /* Switch: '<S209>/Switch1' incorporates:
             *  Constant: '<S209>/Constant Value1'
             *  Sum: '<S209>/Subtraction'
             *  Switch: '<S209>/Switch2'
             *  UnitDelay: '<S209>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseC_FailCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseC_FailCntr) + 1U);
        }

        /* Switch: '<S210>/Switch2' */
        if (rtb_AND_if)
        {
            /* Switch: '<S210>/Switch1' incorporates:
             *  Constant: '<S210>/Constant Value1'
             *  Sum: '<S210>/Subtraction'
             *  Switch: '<S210>/Switch2'
             *  UnitDelay: '<S210>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseC_SmplCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseC_SmplCntr) + 1U);
        }

        /* End of Switch: '<S210>/Switch2' */
    }

    /* End of Switch: '<S209>/Switch1' */
    /* End of Outputs for SubSystem: '<S202>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S202>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S202>/Greater Than or Equal ' incorporates:
     *  Constant: '<S191>/Calib'
     */
    rtb_AND_if = (VePWDR_Cnt_HVFuseC_FailCntr >= KePWDR_Cnt_HVFuseC_Fail);

    /* Logic: '<S202>/NOT5' incorporates:
     *  Constant: '<S192>/Calib'
     *  Logic: '<S202>/NOT3'
     *  RelationalOperator: '<S202>/Less Than  or Equal'
     */
    rtb_RelationalOperator3_mh = ((VePWDR_Cnt_HVFuseC_SmplCntr >=
        KePWDR_Cnt_HVFuseC_Pass) && (!rtb_AND_if));

    /* Switch: '<S215>/Switch1' incorporates:
     *  Constant: '<S208>/Constant Value'
     *  DataStoreWrite: '<S129>/Data Store Write4'
     *  Switch: '<S214>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVFuseCMFOP = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_mh)
        {
            /* MinMax: '<S208>/Minimum2' incorporates:
             *  DataStoreRead: '<S129>/Data Store Read2'
             *  Switch: '<S214>/Switch1'
             */
            if (VePWDR_Cnt_HVFuseC_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVFuseCMFOP)
            {
                /* DataStoreWrite: '<S129>/Data Store Write4' incorporates:
                 *  Switch: '<S214>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVFuseCMFOP = VePWDR_Cnt_HVFuseC_FailCntr;
            }

            /* End of MinMax: '<S208>/Minimum2' */
        }
    }

    /* End of Switch: '<S215>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S201>/Pass' */
    PWDR_ac_Pass(rtb_RelationalOperator3_mh,
                 &PWDR_ac_B.VariantMergeForOutportFaultSt_o);

    /* End of Outputs for SubSystem: '<S201>/Pass' */

    /* Outputs for Enabled SubSystem: '<S201>/Fail' */
    PWDR_ac_Fail(rtb_AND_if, &PWDR_ac_B.VariantMergeForOutportFaultSt_o);

    /* End of Outputs for SubSystem: '<S201>/Fail' */

    /* Outputs for Enabled SubSystem: '<S201>/Init' */
    PWDR_ac_Init_a(rtb_AND_k4, &PWDR_ac_B.VariantMergeForOutportFaultSt_o);

    /* End of Outputs for SubSystem: '<S201>/Init' */

    /* RelationalOperator: '<S201>/Relational Operator' incorporates:
     *  Constant: '<S204>/Constant'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC'
     */
    VePWDR_b_HVFuseC_FltDtct = (((uint32)
        PWDR_ac_B.VariantMergeForOutportFaultSt_o) == CeDFIB_e_Fail);

    /* If: '<S129>/If1' incorporates:
     *  Constant: '<S194>/Calib'
     *  Logic: '<S129>/Logical1'
     */
    if (!KePWDR_b_HtrAvailable)
    {
        /* Outputs for IfAction SubSystem: '<S129>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S190>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseC_Status' incorporates:
         *  Constant: '<S200>/Constant'
         *  SignalConversion generated from: '<S190>/HVFuseC_NotSupported'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseNotSupported;

        /* End of Outputs for SubSystem: '<S129>/If Action Subsystem3' */
    }
    else if (VePWDR_b_FuseC_Valid)
    {
        /* Outputs for IfAction SubSystem: '<S129>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S188>/Action Port'
         */
        /* Switch: '<S198>/Switch1' */
        if (VePWDR_b_HVFuseC_FltDtct)
        {
            /* VariantMerge generated from: '<S54>/HVFuseC_Status' incorporates:
             *  Constant: '<S197>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseFailed;
        }
        else
        {
            /* VariantMerge generated from: '<S54>/HVFuseC_Status' incorporates:
             *  Constant: '<S196>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FusePassed;
        }

        /* End of Switch: '<S198>/Switch1' */
        /* End of Outputs for SubSystem: '<S129>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S129>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S189>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseC_Status' incorporates:
         *  Constant: '<S199>/Constant'
         *  SignalConversion generated from: '<S189>/HVFuseC_Status_LOC'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseInvalid;

        /* End of Outputs for SubSystem: '<S129>/If Action Subsystem2' */
    }

    /* End of If: '<S129>/If1' */

    /* RelationalOperator: '<S229>/Relational Operator3' incorporates:
     *  Constant: '<S229>/Constant3'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_mt = ((((uint32)
        PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_l) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S229>/EdgeFalling1' */
    /* Logic: '<S229>/Logical Operator' incorporates:
     *  Logic: '<S231>/OR1'
     */
    rtb_AND_la = !rtb_RelationalOperator3_mt;

    /* End of Outputs for SubSystem: '<S229>/EdgeFalling1' */

    /* Logic: '<S229>/Logical1' incorporates:
     *  Constant: '<S221>/Calib'
     *  Constant: '<S229>/Constant1'
     *  Logic: '<S130>/Logical7'
     *  Logic: '<S229>/Logical Operator'
     *  Logic: '<S229>/Logical10'
     *  Logic: '<S229>/Logical12'
     *  RelationalOperator: '<S229>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S229>/Bitwise Operator3'
     */
    rtb_AND_k4 = (((VePWDR_b_DAPdiagEnbl) && (VePWDR_b_FuseD_Valid)) &&
                  ((!KePWDR_b_HiVoltageFuseD_LtchEnbl) || (((((uint32)
                       PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_l) & 1U) == 0U) ||
                    rtb_AND_la)));

    /* Outputs for Atomic SubSystem: '<S229>/EdgeFalling1' */
    /* Logic: '<S231>/AND' incorporates:
     *  UnitDelay: '<S231>/Unit Delay'
     */
    rtb_AND_la = (rtb_AND_la && (PWDR_ac_DW.UnitDelay_DSTATE_mu));

    /* Update for UnitDelay: '<S231>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_mu = rtb_RelationalOperator3_mt;

    /* End of Outputs for SubSystem: '<S229>/EdgeFalling1' */

    /* Logic: '<S229>/Logical5' */
    rtb_AND_la = ((PWDR_ac_B.NOT4) || rtb_AND_la);

    /* Outputs for Atomic SubSystem: '<S230>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S230>/Counter Reset  Enabled ' */
    /* Switch: '<S237>/Switch1' incorporates:
     *  Logic: '<S230>/Fail Counter Reset'
     *  Logic: '<S230>/NOT6'
     *  Switch: '<S237>/Switch2'
     *  Switch: '<S238>/Switch1'
     *  UnitDelay: '<S230>/Unit Delay'
     *  UnitDelay: '<S230>/Unit Delay1'
     */
    if ((rtb_AND_la || (PWDR_ac_DW.UnitDelay_DSTATE_ck)) ||
            (PWDR_ac_DW.UnitDelay1_DSTATE_j))
    {
        /* Switch: '<S237>/Switch1' incorporates:
         *  Constant: '<S237>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseD_FailCntr = 0U;

        /* Switch: '<S238>/Switch1' incorporates:
         *  Constant: '<S238>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseD_SmplCntr = 0U;
    }
    else
    {
        if (rtb_AND_k4 && (PWDR_ac_B.VePWDR_b_Htr2_HV_VoltChkFail_Ou))
        {
            /* Switch: '<S237>/Switch1' incorporates:
             *  Constant: '<S237>/Constant Value1'
             *  Sum: '<S237>/Subtraction'
             *  Switch: '<S237>/Switch2'
             *  UnitDelay: '<S237>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseD_FailCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseD_FailCntr) + 1U);
        }

        /* Switch: '<S238>/Switch2' */
        if (rtb_AND_k4)
        {
            /* Switch: '<S238>/Switch1' incorporates:
             *  Constant: '<S238>/Constant Value1'
             *  Sum: '<S238>/Subtraction'
             *  Switch: '<S238>/Switch2'
             *  UnitDelay: '<S238>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseD_SmplCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseD_SmplCntr) + 1U);
        }

        /* End of Switch: '<S238>/Switch2' */
    }

    /* End of Switch: '<S237>/Switch1' */
    /* End of Outputs for SubSystem: '<S230>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S230>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S230>/Greater Than or Equal ' incorporates:
     *  Constant: '<S219>/Calib'
     */
    rtb_AND_k4 = (VePWDR_Cnt_HVFuseD_FailCntr >= KePWDR_Cnt_HVFuseD_Fail);

    /* Logic: '<S230>/NOT5' incorporates:
     *  Constant: '<S220>/Calib'
     *  Logic: '<S230>/NOT3'
     *  RelationalOperator: '<S230>/Less Than  or Equal'
     */
    rtb_RelationalOperator3_mt = ((VePWDR_Cnt_HVFuseD_SmplCntr >=
        KePWDR_Cnt_HVFuseD_Pass) && (!rtb_AND_k4));

    /* Switch: '<S243>/Switch1' incorporates:
     *  Constant: '<S236>/Constant Value'
     *  DataStoreWrite: '<S130>/Data Store Write4'
     *  Switch: '<S242>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVFuseDMFOP = 0U;
    }
    else
    {
        if (rtb_RelationalOperator3_mt)
        {
            /* MinMax: '<S236>/Minimum2' incorporates:
             *  DataStoreRead: '<S130>/Data Store Read2'
             *  Switch: '<S242>/Switch1'
             */
            if (VePWDR_Cnt_HVFuseD_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVFuseDMFOP)
            {
                /* DataStoreWrite: '<S130>/Data Store Write4' incorporates:
                 *  Switch: '<S242>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVFuseDMFOP = VePWDR_Cnt_HVFuseD_FailCntr;
            }

            /* End of MinMax: '<S236>/Minimum2' */
        }
    }

    /* End of Switch: '<S243>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S229>/Pass' */
    PWDR_ac_Pass(rtb_RelationalOperator3_mt,
                 &PWDR_ac_B.VariantMergeForOutportFaultS_om);

    /* End of Outputs for SubSystem: '<S229>/Pass' */

    /* Outputs for Enabled SubSystem: '<S229>/Fail' */
    PWDR_ac_Fail(rtb_AND_k4, &PWDR_ac_B.VariantMergeForOutportFaultS_om);

    /* End of Outputs for SubSystem: '<S229>/Fail' */

    /* Outputs for Enabled SubSystem: '<S229>/Init' */
    PWDR_ac_Init_a(rtb_AND_la, &PWDR_ac_B.VariantMergeForOutportFaultS_om);

    /* End of Outputs for SubSystem: '<S229>/Init' */

    /* RelationalOperator: '<S229>/Relational Operator' incorporates:
     *  Constant: '<S232>/Constant'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD'
     */
    VePWDR_b_HVFuseD_FltDtct = (((uint32)
        PWDR_ac_B.VariantMergeForOutportFaultS_om) == CeDFIB_e_Fail);

    /* If: '<S130>/If1' incorporates:
     *  Constant: '<S222>/Calib'
     *  Logic: '<S130>/Logical1'
     */
    if (!KePWDR_b_Htr2Available)
    {
        /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S218>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseD_Status' incorporates:
         *  Constant: '<S228>/Constant'
         *  SignalConversion generated from: '<S218>/HVFuseD_NotSupported'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseNotSupported;

        /* End of Outputs for SubSystem: '<S130>/If Action Subsystem3' */
    }
    else if (VePWDR_b_FuseD_Valid)
    {
        /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S216>/Action Port'
         */
        /* Switch: '<S226>/Switch1' */
        if (VePWDR_b_HVFuseD_FltDtct)
        {
            /* VariantMerge generated from: '<S54>/HVFuseD_Status' incorporates:
             *  Constant: '<S225>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseFailed;
        }
        else
        {
            /* VariantMerge generated from: '<S54>/HVFuseD_Status' incorporates:
             *  Constant: '<S224>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FusePassed;
        }

        /* End of Switch: '<S226>/Switch1' */
        /* End of Outputs for SubSystem: '<S130>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S130>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S217>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseD_Status' incorporates:
         *  Constant: '<S227>/Constant'
         *  SignalConversion generated from: '<S217>/HVFuseD_Status_LOC'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseInvalid;

        /* End of Outputs for SubSystem: '<S130>/If Action Subsystem2' */
    }

    /* End of If: '<S130>/If1' */

    /* RelationalOperator: '<S257>/Relational Operator3' incorporates:
     *  Constant: '<S257>/Constant3'
     *  S-Function (sfix_bitop): '<S257>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_m4 = ((((uint32)
        PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_c) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S257>/EdgeFalling1' */
    /* Logic: '<S257>/Logical Operator' incorporates:
     *  Logic: '<S259>/OR1'
     */
    rtb_AND = !rtb_RelationalOperator3_m4;

    /* End of Outputs for SubSystem: '<S257>/EdgeFalling1' */

    /* Logic: '<S257>/Logical1' incorporates:
     *  Constant: '<S249>/Calib'
     *  Constant: '<S257>/Constant1'
     *  Logic: '<S131>/Logical7'
     *  Logic: '<S257>/Logical Operator'
     *  Logic: '<S257>/Logical10'
     *  Logic: '<S257>/Logical12'
     *  RelationalOperator: '<S257>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S257>/Bitwise Operator3'
     */
    rtb_AND_la = (((VePWDR_b_DAPdiagEnbl) && (VePWDR_b_FuseE_Valid)) &&
                  ((!KePWDR_b_HiVoltageFuseE_LtchEnbl) || (((((uint32)
                       PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_c) & 1U) == 0U) ||
                    rtb_AND)));

    /* Outputs for Atomic SubSystem: '<S257>/EdgeFalling1' */
    /* Logic: '<S259>/AND' incorporates:
     *  UnitDelay: '<S259>/Unit Delay'
     */
    rtb_AND = (rtb_AND && (PWDR_ac_DW.UnitDelay_DSTATE_lhc));

    /* Update for UnitDelay: '<S259>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lhc = rtb_RelationalOperator3_m4;

    /* End of Outputs for SubSystem: '<S257>/EdgeFalling1' */

    /* Logic: '<S257>/Logical5' */
    rtb_RelationalOperator3_m4 = ((PWDR_ac_B.NOT4) || rtb_AND);

    /* Outputs for Atomic SubSystem: '<S258>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S258>/Counter Reset  Enabled ' */
    /* Switch: '<S265>/Switch1' incorporates:
     *  Logic: '<S258>/Fail Counter Reset'
     *  Logic: '<S258>/NOT6'
     *  Switch: '<S265>/Switch2'
     *  Switch: '<S266>/Switch1'
     *  UnitDelay: '<S258>/Unit Delay'
     *  UnitDelay: '<S258>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3_m4 || (PWDR_ac_DW.UnitDelay_DSTATE_pz)) ||
            (PWDR_ac_DW.UnitDelay1_DSTATE_jv))
    {
        /* Switch: '<S265>/Switch1' incorporates:
         *  Constant: '<S265>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseE_FailCntr = 0U;

        /* Switch: '<S266>/Switch1' incorporates:
         *  Constant: '<S266>/Constant Value2'
         */
        VePWDR_Cnt_HVFuseE_SmplCntr = 0U;
    }
    else
    {
        if (rtb_AND_la && (PWDR_ac_B.VePWDR_b_Htr4_HV_VoltChkFail_Ou))
        {
            /* Switch: '<S265>/Switch1' incorporates:
             *  Constant: '<S265>/Constant Value1'
             *  Sum: '<S265>/Subtraction'
             *  Switch: '<S265>/Switch2'
             *  UnitDelay: '<S265>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseE_FailCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseE_FailCntr) + 1U);
        }

        /* Switch: '<S266>/Switch2' */
        if (rtb_AND_la)
        {
            /* Switch: '<S266>/Switch1' incorporates:
             *  Constant: '<S266>/Constant Value1'
             *  Sum: '<S266>/Subtraction'
             *  Switch: '<S266>/Switch2'
             *  UnitDelay: '<S266>/Unit Delay'
             */
            VePWDR_Cnt_HVFuseE_SmplCntr = (uint16)(((uint32)
                VePWDR_Cnt_HVFuseE_SmplCntr) + 1U);
        }

        /* End of Switch: '<S266>/Switch2' */
    }

    /* End of Switch: '<S265>/Switch1' */
    /* End of Outputs for SubSystem: '<S258>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S258>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S258>/Greater Than or Equal ' incorporates:
     *  Constant: '<S247>/Calib'
     */
    rtb_AND_la = (VePWDR_Cnt_HVFuseE_FailCntr >= KePWDR_Cnt_HVFuseE_Fail);

    /* Logic: '<S258>/NOT5' incorporates:
     *  Constant: '<S248>/Calib'
     *  Logic: '<S258>/NOT3'
     *  RelationalOperator: '<S258>/Less Than  or Equal'
     */
    rtb_AND = ((VePWDR_Cnt_HVFuseE_SmplCntr >= KePWDR_Cnt_HVFuseE_Pass) &&
               (!rtb_AND_la));

    /* Switch: '<S271>/Switch1' incorporates:
     *  Constant: '<S264>/Constant Value'
     *  DataStoreWrite: '<S131>/Data Store Write4'
     *  Switch: '<S270>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVFuseEMFOP = 0U;
    }
    else
    {
        if (rtb_AND)
        {
            /* MinMax: '<S264>/Minimum2' incorporates:
             *  DataStoreRead: '<S131>/Data Store Read2'
             *  Switch: '<S270>/Switch1'
             */
            if (VePWDR_Cnt_HVFuseE_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVFuseEMFOP)
            {
                /* DataStoreWrite: '<S131>/Data Store Write4' incorporates:
                 *  Switch: '<S270>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVFuseEMFOP = VePWDR_Cnt_HVFuseE_FailCntr;
            }

            /* End of MinMax: '<S264>/Minimum2' */
        }
    }

    /* End of Switch: '<S271>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S257>/Pass' */
    PWDR_ac_Pass(rtb_AND, &PWDR_ac_B.VariantMergeForOutportFaultSt_f);

    /* End of Outputs for SubSystem: '<S257>/Pass' */

    /* Outputs for Enabled SubSystem: '<S257>/Fail' */
    PWDR_ac_Fail(rtb_AND_la, &PWDR_ac_B.VariantMergeForOutportFaultSt_f);

    /* End of Outputs for SubSystem: '<S257>/Fail' */

    /* Outputs for Enabled SubSystem: '<S257>/Init' */
    PWDR_ac_Init_a(rtb_RelationalOperator3_m4,
                   &PWDR_ac_B.VariantMergeForOutportFaultSt_f);

    /* End of Outputs for SubSystem: '<S257>/Init' */

    /* RelationalOperator: '<S257>/Relational Operator' incorporates:
     *  Constant: '<S260>/Constant'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE'
     */
    VePWDR_b_HVFuseE_FltDtct = (((uint32)
        PWDR_ac_B.VariantMergeForOutportFaultSt_f) == CeDFIB_e_Fail);

    /* If: '<S131>/If1' incorporates:
     *  Constant: '<S250>/Calib'
     *  Logic: '<S131>/Logical1'
     */
    if (!KePWDR_b_Htr4Available)
    {
        /* Outputs for IfAction SubSystem: '<S131>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S246>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseE_Status' incorporates:
         *  Constant: '<S256>/Constant'
         *  SignalConversion generated from: '<S246>/HVFuseE_NotSupported'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseNotSupported;

        /* End of Outputs for SubSystem: '<S131>/If Action Subsystem3' */
    }
    else if (VePWDR_b_FuseE_Valid)
    {
        /* Outputs for IfAction SubSystem: '<S131>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S244>/Action Port'
         */
        /* Switch: '<S254>/Switch1' */
        if (VePWDR_b_HVFuseE_FltDtct)
        {
            /* VariantMerge generated from: '<S54>/HVFuseE_Status' incorporates:
             *  Constant: '<S253>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseFailed;
        }
        else
        {
            /* VariantMerge generated from: '<S54>/HVFuseE_Status' incorporates:
             *  Constant: '<S252>/Constant'
             */
            PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FusePassed;
        }

        /* End of Switch: '<S254>/Switch1' */
        /* End of Outputs for SubSystem: '<S131>/If Action Subsystem1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S131>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S245>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/HVFuseE_Status' incorporates:
         *  Constant: '<S255>/Constant'
         *  SignalConversion generated from: '<S245>/HVFuseE_Status_LOC'
         */
        PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseInvalid;

        /* End of Outputs for SubSystem: '<S131>/If Action Subsystem2' */
    }

    /* End of If: '<S131>/If1' */

    /* Update for UnitDelay: '<S146>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ik = rtb_RelationalOperator3;

    /* Update for UnitDelay: '<S146>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_mo = rtb_Logical1;

    /* Update for UnitDelay: '<S174>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_jx1 = rtb_RelationalOperator3_b;

    /* Update for UnitDelay: '<S174>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_i1 = rtb_AND_j0;

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_c0 = rtb_RelationalOperator3_mh;

    /* Update for UnitDelay: '<S202>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_mn = rtb_AND_if;

    /* Update for UnitDelay: '<S230>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ck = rtb_RelationalOperator3_mt;

    /* Update for UnitDelay: '<S230>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_j = rtb_AND_k4;

    /* Update for UnitDelay: '<S258>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_pz = rtb_AND;

    /* Update for UnitDelay: '<S258>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_jv = rtb_AND_la;
}

#endif

/* Output and update for enable system: '<S73>/DAP_FA_CntctrDsbl' */
#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_DAP_FA_CntctrDsbl(void)
{
    float32 tmpRead;
    boolean rtb_OR1_l;

    /* Outputs for Enabled SubSystem: '<S73>/DAP_FA_CntctrDsbl' incorporates:
     *  EnablePort: '<S74>/Enable'
     */
    if (PWDR_ac_B.Switch)
    {
        /* Inport: '<Root>/VeCSVR_v_VehSpd' */
        (void)Rte_Read_VeCSVR_v_VehSpd_Value(&tmpRead);

        /* Switch: '<S74>/Switch' incorporates:
         *  Constant: '<S74>/Constant Value8'
         *  Constant: '<S86>/Calib'
         *  RelationalOperator: '<S74>/Comparison5'
         */
        if (tmpRead <= KePWDR_v_VehicleSpdDAPThrhold)
        {
            tmpRead = 0.0F;
        }

        /* End of Switch: '<S74>/Switch' */

        /* Product: '<S74>/Multiplication' incorporates:
         *  Constant: '<S81>/Calib'
         *  Constant: '<S84>/Calib'
         */
        VePWDR_l_DIstancePerSampleTimeinMtr = (tmpRead * HePWDR_t_MedTEB) *
            KePWDR_r_DistTravldScaling;

        /* Sum: '<S74>/Sum' incorporates:
         *  DataStoreWrite: '<S74>/Data Store Write'
         */
        EePWDR_l_DAP_FA_DistTravld = VePWDR_l_DIstancePerSampleTimeinMtr +
            PWDR_ac_B.DataStoreRead1;

        /* Outputs for Atomic SubSystem: '<S74>/EdgeRising' */
        /* Logic: '<S80>/OR1' incorporates:
         *  UnitDelay: '<S80>/Unit Delay'
         */
        rtb_OR1_l = !PWDR_ac_DW.UnitDelay_DSTATE_hml;

        /* Update for UnitDelay: '<S80>/Unit Delay' */
        PWDR_ac_DW.UnitDelay_DSTATE_hml =
            PWDR_ac_B.TmpSignalConversionAtVeHPMR_b_P;

        /* Logic: '<S74>/Logical2' incorporates:
         *  Logic: '<S74>/Logical'
         *  Logic: '<S80>/AND'
         */
        VePWDR_b_DAPKeyCycl_Incr = (((VePWDR_b_NewFail) &&
            (PWDR_ac_B.TmpSignalConversionAtVeHPMR_b_P)) ||
            ((PWDR_ac_B.TmpSignalConversionAtVeHPMR_b_P) && rtb_OR1_l));

        /* End of Outputs for SubSystem: '<S74>/EdgeRising' */

        /* Switch: '<S74>/Switch1' */
        if (VePWDR_b_DAPKeyCycl_Incr)
        {
            /* Switch: '<S74>/Switch1' incorporates:
             *  Constant: '<S74>/Constant Value1'
             *  DataStoreRead: '<S74>/Data Store Read2'
             *  Sum: '<S74>/Sum2'
             */
            VePWDR_Cnt_DAPKeyCycl = (uint8)(((uint32)EePWDR_Cnt_DAP_FA_KeyCylCnt)
                + 1U);
        }
        else
        {
            /* Switch: '<S74>/Switch1' incorporates:
             *  DataStoreRead: '<S74>/Data Store Read'
             */
            VePWDR_Cnt_DAPKeyCycl = EePWDR_Cnt_DAP_FA_KeyCylCnt;
        }

        /* End of Switch: '<S74>/Switch1' */

        /* DataStoreWrite: '<S74>/Data Store Write1' */
        EePWDR_Cnt_DAP_FA_KeyCylCnt = VePWDR_Cnt_DAPKeyCycl;

        /* Sum: '<S74>/Sum1' incorporates:
         *  DataStoreRead: '<S74>/Data Store Read1'
         *  DataStoreWrite: '<S74>/Data Store Write4'
         */
        EePWDR_t_DAP_FA_ElapsedTime = PWDR_ac_B.TmpSignalConversionAtVePLTR_t_R
            - EePWDR_t_DAP_FA_InitTime;

        /* Logic: '<S74>/Logical1' incorporates:
         *  Constant: '<S82>/Calib'
         *  Constant: '<S83>/Calib'
         *  Constant: '<S85>/Calib'
         *  DataStoreWrite: '<S74>/Data Store Write'
         *  DataStoreWrite: '<S74>/Data Store Write4'
         *  RelationalOperator: '<S74>/Comparison1'
         *  RelationalOperator: '<S74>/Comparison2'
         *  RelationalOperator: '<S74>/Comparison3'
         */
        VePWDR_b_DAPBatCnctrDisable = (((EePWDR_l_DAP_FA_DistTravld >=
            KePWDR_l_DAPDistThreshold) || (EePWDR_t_DAP_FA_ElapsedTime >=
            KePWDR_t_DAPTimeThreshold)) || (((uint16)VePWDR_Cnt_DAPKeyCycl) >=
            KePWDR_Cnt_DAPKeyCylThreshold));

        /* DataStoreWrite: '<S74>/Data Store Write3' */
        EePWDR_b_DAPFA_OpenCntctr = VePWDR_b_DAPBatCnctrDisable;

        /* DataStoreWrite: '<S74>/Data Store Write2' incorporates:
         *  Constant: '<S74>/Constant Value7'
         */
        EePWDR_Cnt_WarmupCycle = 0U;

        /* Outputs for Enabled SubSystem: '<S74>/EEPROM_Update' incorporates:
         *  EnablePort: '<S79>/Enable'
         */
        if (VePWDR_b_DAPBatCnctrDisable)
        {
            /* DataStoreWrite: '<S79>/Data Store Write3' */
            EePWDR_y_DID_B524 = VePWDR_y_DID_B524_TestPoint;
        }

        /* End of Outputs for SubSystem: '<S74>/EEPROM_Update' */
    }

    /* End of Outputs for SubSystem: '<S73>/DAP_FA_CntctrDsbl' */
}

#endif

/* Output and update for enable system: '<S73>/NoFA_CntctrEnbl' */
#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_NoFA_CntctrEnbl(void)
{
    uint8 rtb_Switch1_fn;
    boolean rtb_OR1_p3;

    /* Outputs for Enabled SubSystem: '<S73>/NoFA_CntctrEnbl' incorporates:
     *  EnablePort: '<S78>/Enable'
     */
    if (PWDR_ac_B.Switch1_h)
    {
        /* Outputs for Atomic SubSystem: '<S78>/EdgeRising1' */
        /* Logic: '<S91>/OR1' incorporates:
         *  UnitDelay: '<S91>/Unit Delay'
         */
        rtb_OR1_p3 = !PWDR_ac_DW.UnitDelay_DSTATE_og;

        /* Update for UnitDelay: '<S91>/Unit Delay' */
        PWDR_ac_DW.UnitDelay_DSTATE_og =
            PWDR_ac_B.TmpSignalConversionAtVeENGR_b_W;

        /* Switch: '<S92>/Switch1' incorporates:
         *  Logic: '<S91>/AND'
         */
        if ((PWDR_ac_B.TmpSignalConversionAtVeENGR_b_W) && rtb_OR1_p3)
        {
            /* Switch: '<S92>/Switch1' incorporates:
             *  Constant: '<S78>/Constant Value1'
             *  Sum: '<S78>/Sum1'
             */
            rtb_Switch1_fn = (uint8)(((uint32)PWDR_ac_B.DataStoreRead2_n) + 1U);
        }
        else
        {
            /* Switch: '<S92>/Switch1' */
            rtb_Switch1_fn = PWDR_ac_B.DataStoreRead2_n;
        }

        /* End of Switch: '<S92>/Switch1' */
        /* End of Outputs for SubSystem: '<S78>/EdgeRising1' */

        /* Outputs for Enabled SubSystem: '<S78>/ResetCounters1' incorporates:
         *  EnablePort: '<S95>/Enable'
         */
        /* Outputs for Enabled SubSystem: '<S78>/NoResetCounters1' incorporates:
         *  EnablePort: '<S94>/Enable'
         */
        /* RelationalOperator: '<S78>/Comparison1' incorporates:
         *  Constant: '<S93>/Calib'
         */
        if (rtb_Switch1_fn >= KePWDR_Cnt_WarmupCycleThrhold)
        {
            /* Merge: '<S78>/Merge5' incorporates:
             *  Constant: '<S95>/FALSE Constant'
             *  SignalConversion generated from: '<S95>/DAPBatCnctrDisable'
             */
            VePWDR_b_BatCntctrDisablePass = false;

            /* Merge: '<S78>/Merge6' incorporates:
             *  Constant: '<S95>/Constant Value'
             *  SignalConversion generated from: '<S95>/DAPFA_DistTravld'
             */
            VePWDR_l_DistTravldPass = 0.0F;

            /* Merge: '<S78>/Merge7' incorporates:
             *  Constant: '<S95>/Constant Value1'
             *  SignalConversion generated from: '<S95>/DAPFA_KeyCylCnt'
             */
            VePWDR_Cnt_KeyCyclPass = 0U;

            /* Merge: '<S78>/Merge8' incorporates:
             *  Constant: '<S95>/Constant Value2'
             *  SignalConversion generated from: '<S95>/DAPFA_WarmupCyclCnt'
             */
            VePWDR_Cnt_WarmupCyclPass = 0U;

            /* Merge: '<S78>/Merge9' incorporates:
             *  Constant: '<S95>/Constant Value3'
             *  SignalConversion generated from: '<S95>/DAPFA_ElapsedTime'
             */
            VePWDR_t_ElapsedTimePass = 0U;
        }
        else
        {
            /* Merge: '<S78>/Merge5' incorporates:
             *  DataStoreRead: '<S94>/Data Store Read1'
             */
            VePWDR_b_BatCntctrDisablePass = EePWDR_b_DAPFA_OpenCntctr;

            /* Merge: '<S78>/Merge6' incorporates:
             *  DataStoreRead: '<S94>/Data Store Read2'
             */
            VePWDR_l_DistTravldPass = EePWDR_l_DAP_FA_DistTravld;

            /* Merge: '<S78>/Merge7' incorporates:
             *  DataStoreRead: '<S94>/Data Store Read3'
             */
            VePWDR_Cnt_KeyCyclPass = EePWDR_Cnt_DAP_FA_KeyCylCnt;

            /* Merge: '<S78>/Merge8' incorporates:
             *  Inport: '<S94>/WarmupCycleIncrementedCnt'
             */
            VePWDR_Cnt_WarmupCyclPass = rtb_Switch1_fn;

            /* Merge: '<S78>/Merge9' incorporates:
             *  DataStoreRead: '<S94>/Data Store Read4'
             */
            VePWDR_t_ElapsedTimePass = EePWDR_t_DAP_FA_ElapsedTime;
        }

        /* End of RelationalOperator: '<S78>/Comparison1' */
        /* End of Outputs for SubSystem: '<S78>/NoResetCounters1' */
        /* End of Outputs for SubSystem: '<S78>/ResetCounters1' */

        /* DataStoreWrite: '<S78>/Data Store Write5' */
        EePWDR_l_DAP_FA_DistTravld = VePWDR_l_DistTravldPass;

        /* DataStoreWrite: '<S78>/Data Store Write6' */
        EePWDR_Cnt_DAP_FA_KeyCylCnt = VePWDR_Cnt_KeyCyclPass;

        /* DataStoreWrite: '<S78>/Data Store Write7' */
        EePWDR_Cnt_WarmupCycle = VePWDR_Cnt_WarmupCyclPass;

        /* DataStoreWrite: '<S78>/Data Store Write8' */
        EePWDR_b_DAPFA_OpenCntctr = VePWDR_b_BatCntctrDisablePass;

        /* DataStoreWrite: '<S78>/Data Store Write9' */
        EePWDR_t_DAP_FA_ElapsedTime = VePWDR_t_ElapsedTimePass;
    }

    /* End of Outputs for SubSystem: '<S73>/NoFA_CntctrEnbl' */
}

#endif

/* System initialize for action system: '<S56>/DAP_Flt_Det' */
#if Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_DAP_Flt_Det_Init(void)
{

#if Rte_SysCon_Variant_PWDR_3
#endif

}

#endif

/* Output and update for action system: '<S56>/DAP_Flt_Det' */
#if Rte_SysCon_Variant_PWDR_2

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_DAP_Flt_Det(void)
{
    TeDFIB_e_FaultDebounceStatus VePWDR_b_DAP_NFA_tmp;
    uint8 rtb_Logical2_0;
    uint8 rtb_Logical3_e;
    uint8 rtb_Logical5_c;
    uint8 rtb_Logical6_0;
    boolean rtb_AND;
    boolean rtb_Logical1;
    boolean rtb_Logical1_gj;
    boolean rtb_Logical2;
    boolean rtb_Logical3_a;
    boolean rtb_Logical5_cj;
    boolean rtb_Logical6;
    boolean rtb_RelationalOperator3;

    /* RelationalOperator: '<S110>/Relational Operator3' incorporates:
     *  Constant: '<S110>/Constant3'
     *  S-Function (sfix_bitop): '<S110>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)
        PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_S) & 64U) == 0U);

    /* Logic: '<S110>/Logical1' incorporates:
     *  Constant: '<S108>/Calib'
     *  Constant: '<S110>/Constant1'
     *  Logic: '<S110>/Logical Operator'
     *  Logic: '<S110>/Logical10'
     *  Logic: '<S110>/Logical12'
     *  RelationalOperator: '<S110>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S110>/Bitwise Operator3'
     */
    rtb_Logical1 = ((VePWDR_b_DAPdiagEnbl) && ((!KePWDR_b_OpnHVCbl_LtchEnbl) ||
                     (((((uint32)PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_S) & 1U)
                       == 0U) || (!rtb_RelationalOperator3))));

    /* Logic: '<S71>/Logical1' */
    rtb_Logical1_gj = ((PWDR_ac_B.VePWDR_b_APM_HV_VoltChkFail_Out) &&
                       (VePWDR_b_APM_HV_Valid));

    /* Logic: '<S71>/Logical5' */
    rtb_Logical5_cj = ((PWDR_ac_B.VePWDR_b_EAC_HV_VoltChkFail_Out) &&
                       (VePWDR_b_EAC_HV_Valid));

    /* Logic: '<S71>/Logical6' */
    rtb_Logical6 = ((PWDR_ac_B.VePWDR_b_Htr_HV_VoltChkFail_Out) &&
                    (VePWDR_b_Htr_HV_Valid));

    /* Logic: '<S71>/Logical2' */
    rtb_Logical2 = ((PWDR_ac_B.VePWDR_b_Htr2_HV_VoltChkFail_Ou) &&
                    (VePWDR_b_Htr2_HV_Valid));

    /* Logic: '<S71>/Logical3' */
    rtb_Logical3_a = ((PWDR_ac_B.VePWDR_b_Htr4_HV_VoltChkFail_Ou) &&
                      (VePWDR_b_Htr4_HV_Valid));

    /* Logic: '<S71>/Logical10' */
    VePWDR_b_DAP_FA_Intrnl = ((((rtb_Logical1_gj || rtb_Logical5_cj) ||
        rtb_Logical6) || rtb_Logical2) || rtb_Logical3_a);

    /* Outputs for Atomic SubSystem: '<S110>/EdgeFalling1' */
    /* Logic: '<S112>/AND' incorporates:
     *  Logic: '<S112>/OR1'
     *  UnitDelay: '<S112>/Unit Delay'
     */
    rtb_AND = ((!rtb_RelationalOperator3) && (PWDR_ac_DW.UnitDelay_DSTATE_js));

    /* Update for UnitDelay: '<S112>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_js = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S110>/EdgeFalling1' */

    /* Logic: '<S110>/Logical5' */
    rtb_RelationalOperator3 = ((PWDR_ac_B.NOT4) || rtb_AND);

    /* Outputs for Atomic SubSystem: '<S111>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S111>/Counter Reset  Enabled ' */
    /* Switch: '<S118>/Switch1' incorporates:
     *  Logic: '<S111>/Fail Counter Reset'
     *  Logic: '<S111>/NOT6'
     *  Switch: '<S118>/Switch2'
     *  Switch: '<S119>/Switch1'
     *  UnitDelay: '<S111>/Unit Delay'
     *  UnitDelay: '<S111>/Unit Delay1'
     */
    if ((rtb_RelationalOperator3 || (PWDR_ac_DW.UnitDelay_DSTATE_m4)) ||
            (PWDR_ac_DW.UnitDelay1_DSTATE_e))
    {
        /* Switch: '<S118>/Switch1' incorporates:
         *  Constant: '<S118>/Constant Value2'
         */
        VePWDR_Cnt_FailCntr = 0U;

        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S119>/Constant Value2'
         */
        VePWDR_Cnt_SmplCntr = 0U;
    }
    else
    {
        if (rtb_Logical1 && (VePWDR_b_DAP_FA_Intrnl))
        {
            /* Switch: '<S118>/Switch1' incorporates:
             *  Constant: '<S118>/Constant Value1'
             *  Sum: '<S118>/Subtraction'
             *  Switch: '<S118>/Switch2'
             *  UnitDelay: '<S118>/Unit Delay'
             */
            VePWDR_Cnt_FailCntr = (uint16)(((uint32)VePWDR_Cnt_FailCntr) + 1U);
        }

        /* Switch: '<S119>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S119>/Switch1' incorporates:
             *  Constant: '<S119>/Constant Value1'
             *  Sum: '<S119>/Subtraction'
             *  Switch: '<S119>/Switch2'
             *  UnitDelay: '<S119>/Unit Delay'
             */
            VePWDR_Cnt_SmplCntr = (uint16)(((uint32)VePWDR_Cnt_SmplCntr) + 1U);
        }

        /* End of Switch: '<S119>/Switch2' */
    }

    /* End of Switch: '<S118>/Switch1' */
    /* End of Outputs for SubSystem: '<S111>/Counter Reset  Enabled ' */
    /* End of Outputs for SubSystem: '<S111>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S111>/Greater Than or Equal ' incorporates:
     *  Constant: '<S106>/Calib'
     */
    rtb_Logical1 = (VePWDR_Cnt_FailCntr >= KePWDR_Cnt_DAPFail);

    /* Logic: '<S111>/NOT5' incorporates:
     *  Constant: '<S107>/Calib'
     *  Logic: '<S111>/NOT3'
     *  RelationalOperator: '<S111>/Less Than  or Equal'
     */
    rtb_AND = ((VePWDR_Cnt_SmplCntr >= KePWDR_Cnt_DAPPass) && (!rtb_Logical1));

    /* Switch: '<S124>/Switch1' incorporates:
     *  Constant: '<S117>/Constant Value'
     *  DataStoreWrite: '<S72>/Data Store Write4'
     *  Switch: '<S123>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVDAPMFOP = 0U;
    }
    else
    {
        if (rtb_AND)
        {
            /* MinMax: '<S117>/Minimum2' incorporates:
             *  DataStoreRead: '<S72>/Data Store Read2'
             *  Switch: '<S123>/Switch1'
             */
            if (VePWDR_Cnt_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVDAPMFOP)
            {
                /* DataStoreWrite: '<S72>/Data Store Write4' incorporates:
                 *  Switch: '<S123>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVDAPMFOP = VePWDR_Cnt_FailCntr;
            }

            /* End of MinMax: '<S117>/Minimum2' */
        }
    }

    /* End of Switch: '<S124>/Switch1' */

    /* Logic: '<S71>/Logical4' */
    VePWDR_b_DAP_NFA_Intrnl = !VePWDR_b_DAP_FA_Intrnl;

    /* Outputs for Enabled SubSystem: '<S110>/Pass' */
    PWDR_ac_Pass(rtb_AND, &PWDR_ac_B.Merge_gc);

    /* End of Outputs for SubSystem: '<S110>/Pass' */

    /* Outputs for Enabled SubSystem: '<S110>/Fail' */
    PWDR_ac_Fail(rtb_Logical1, &PWDR_ac_B.Merge_gc);

    /* End of Outputs for SubSystem: '<S110>/Fail' */

    /* Outputs for Enabled SubSystem: '<S110>/Init' */
    PWDR_ac_Init_a(rtb_RelationalOperator3, &PWDR_ac_B.Merge_gc);

    /* End of Outputs for SubSystem: '<S110>/Init' */

    /* RelationalOperator: '<S72>/Relational Operator' incorporates:
     *  Merge: '<S110>/Merge'
     *  RelationalOperator: '<S110>/Relational Operator'
     */
    VePWDR_b_DAP_NFA_tmp = PWDR_ac_B.Merge_gc;

    /* Logic: '<S72>/Logical10' incorporates:
     *  Constant: '<S105>/Constant'
     *  RelationalOperator: '<S72>/Relational Operator'
     */
    VePWDR_b_DAP_NFA = ((VePWDR_b_DAP_NFA_Intrnl) && (((uint32)
                          VePWDR_b_DAP_NFA_tmp) == CeDFIB_e_Pass));

    /* RelationalOperator: '<S110>/Relational Operator' incorporates:
     *  Constant: '<S113>/Constant'
     */
    VePWDR_b_DAP_FA = (((uint32)VePWDR_b_DAP_NFA_tmp) == CeDFIB_e_Fail);

    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value2'
     *  Constant: '<S96>/Constant Value3'
     */
    if (rtb_Logical5_cj)
    {
        rtb_Logical5_c = 2U;
    }
    else
    {
        rtb_Logical5_c = 0U;
    }

    /* End of Switch: '<S98>/Switch1' */

    /* Switch: '<S99>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value4'
     *  Constant: '<S96>/Constant Value5'
     */
    if (rtb_Logical6)
    {
        rtb_Logical6_0 = 4U;
    }
    else
    {
        rtb_Logical6_0 = 0U;
    }

    /* End of Switch: '<S99>/Switch1' */

    /* Switch: '<S100>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value6'
     *  Constant: '<S96>/Constant Value7'
     */
    if (rtb_Logical2)
    {
        rtb_Logical2_0 = 8U;
    }
    else
    {
        rtb_Logical2_0 = 0U;
    }

    /* End of Switch: '<S100>/Switch1' */

    /* Switch: '<S101>/Switch1' incorporates:
     *  Constant: '<S96>/Constant Value8'
     *  Constant: '<S96>/Constant Value9'
     */
    if (rtb_Logical3_a)
    {
        rtb_Logical3_e = 16U;
    }
    else
    {
        rtb_Logical3_e = 0U;
    }

    /* End of Switch: '<S101>/Switch1' */

    /* S-Function (sfix_bitop): '<S96>/Bitwise Logical Operator' incorporates:
     *  Switch: '<S97>/Switch1'
     */
    VePWDR_y_DID_B524_TestPoint = (uint8)(((((rtb_Logical1_gj ? ((uint8)1) :
        ((uint8)0)) | rtb_Logical5_c) | rtb_Logical6_0) | rtb_Logical2_0) |
        rtb_Logical3_e);

#if Rte_SysCon_Variant_PWDR_3

    /* Outputs for Atomic SubSystem: '<S61>/DAPCounters' */
    /* Outputs for Atomic SubSystem: '<S70>/DAPCounters' */
    /* DataStoreRead: '<S73>/Data Store Read1' */
    PWDR_ac_B.DataStoreRead1 = EePWDR_l_DAP_FA_DistTravld;

    /* Outputs for Atomic SubSystem: '<S73>/New_Fail' */
    /* Switch: '<S77>/Switch' incorporates:
     *  Constant: '<S87>/Calib'
     *  Constant: '<S88>/Calib'
     */
    if (KePWDR_b_DAPFailedOvrdEnbl)
    {
        PWDR_ac_B.Switch = KePWDR_b_DAPFailedOvrd;
    }
    else
    {
        PWDR_ac_B.Switch = VePWDR_b_DAP_FA;
    }

    /* End of Switch: '<S77>/Switch' */

    /* Logic: '<S77>/Logical' incorporates:
     *  Constant: '<S77>/Constant Value1'
     *  Constant: '<S77>/Constant Value2'
     *  Constant: '<S77>/Constant Value3'
     *  DataStoreRead: '<S77>/Data Store Read1'
     *  DataStoreRead: '<S77>/Data Store Read2'
     *  DataStoreRead: '<S77>/Data Store Read4'
     *  RelationalOperator: '<S77>/Comparison1'
     *  RelationalOperator: '<S77>/Comparison2'
     *  RelationalOperator: '<S77>/Comparison4'
     */
    VePWDR_b_NewFail = ((((EePWDR_l_DAP_FA_DistTravld == 0.0F) && (((sint32)
                            EePWDR_Cnt_DAP_FA_KeyCylCnt) == 0)) && (((float32)
                           EePWDR_t_DAP_FA_ElapsedTime) == 0.0F)) &&
                        (PWDR_ac_B.Switch));

    /* Outputs for Enabled SubSystem: '<S77>/Subsystem' incorporates:
     *  EnablePort: '<S89>/Enable'
     */
    /* Outputs for Enabled SubSystem: '<S77>/Subsystem1' incorporates:
     *  EnablePort: '<S90>/Enable'
     */
    if (VePWDR_b_NewFail)
    {
        /* Merge: '<S77>/Merge' incorporates:
         *  Inport: '<S89>/BPCR_RealTime'
         */
        VePWDR_t_DAP_FA_InitTime = PWDR_ac_B.TmpSignalConversionAtVePLTR_t_R;
    }
    else
    {
        /* Merge: '<S77>/Merge' incorporates:
         *  DataStoreRead: '<S90>/Data Store Read'
         */
        VePWDR_t_DAP_FA_InitTime = EePWDR_t_DAP_FA_InitTime;
    }

    /* End of Outputs for SubSystem: '<S77>/Subsystem1' */
    /* End of Outputs for SubSystem: '<S77>/Subsystem' */

    /* DataStoreWrite: '<S77>/Data Store Write' */
    EePWDR_t_DAP_FA_InitTime = VePWDR_t_DAP_FA_InitTime;

    /* End of Outputs for SubSystem: '<S73>/New_Fail' */

    /* Outputs for Enabled SubSystem: '<S73>/DAP_FA_CntctrDsbl' */
    PWDR_ac_DAP_FA_CntctrDsbl();

    /* End of Outputs for SubSystem: '<S73>/DAP_FA_CntctrDsbl' */

    /* DataStoreRead: '<S73>/Data Store Read2' */
    PWDR_ac_B.DataStoreRead2_n = EePWDR_Cnt_WarmupCycle;

    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     */
    if (KePWDR_b_DAPPassedOvrdEnbl)
    {
        PWDR_ac_B.Switch1_h = KePWDR_b_DAPPassedOvrd;
    }
    else
    {
        PWDR_ac_B.Switch1_h = VePWDR_b_DAP_NFA;
    }

    /* End of Switch: '<S73>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S73>/NoFA_CntctrEnbl' */
    PWDR_ac_NoFA_CntctrEnbl();

    /* End of Outputs for SubSystem: '<S73>/NoFA_CntctrEnbl' */
    /* End of Outputs for SubSystem: '<S70>/DAPCounters' */
    /* End of Outputs for SubSystem: '<S61>/DAPCounters' */
#endif

    /* VariantMerge generated from: '<S54>/FaultSts_OpnHVCbl' incorporates:
     *  Merge: '<S110>/Merge'
     *  SignalConversion generated from: '<S61>/VePWDR_e_FaultSts_OpnHVCbl'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_d = PWDR_ac_B.Merge_gc;

    /* Update for UnitDelay: '<S111>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_m4 = rtb_AND;

    /* Update for UnitDelay: '<S111>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_e = rtb_Logical1;
}

#endif

/*
 * Output and update for action system:
 *    '<S568>/If Action Subsystem1'
 *    '<S571>/If Action Subsystem3'
 */
static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_IfActionSubsystem1(P2VAR(boolean,
    AUTOMATIC, PWDR_VAR_INIT) rty_Out2)
{
    /* SignalConversion generated from: '<S575>/Out2' incorporates:
     *  Constant: '<S575>/FALSE Constant1'
     */
    *rty_Out2 = false;
}

/* Output and update for atomic system: '<S515>/SingleCAN ' */
#if Rte_SysCon_Variant_PWDR_7

static FUNC(void, PWDR_CODE_LOCAL) PWDR_ac_SingleCAN(void)
{
    /* VariantMerge generated from: '<S515>/IUMPR_InhibitBit' incorporates:
     *  Constant: '<S620>/Constant1'
     *  Constant: '<S620>/Constant2'
     *  DataStoreRead: '<S620>/StatusByte_LosCommBECM_A'
     *  Logic: '<S620>/Logical Operator'
     *  RelationalOperator: '<S620>/Relational Operator1'
     *  RelationalOperator: '<S620>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S620>/Bitwise Operator2'
     */
    PWDR_ac_B.VariantMergeForOutportIUMPR_Inh = (((((sint32)
        PWDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        PWDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U));
}

#endif

/* Model step function for TID1 */
FUNC(void, PWDR_CODE) PWDR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_PWDR_2

    TeOBCR_e_ChargingSystemSts tmpRead;

#endif

    TeESSR_e_HybEngSysActv tmpRead_0;
    TeHPMR_e_BattCntctrCmd tmpRead_1;

#if Rte_SysCon_Variant_PWDR_2

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_PWDR_2

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_PWDR_2

    float32 tmpRead_4;

#endif

    TeINVR_e_SPTState tmpRead_8;
    TeINVR_e_SPTState tmpRead_9;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_a;
    boolean tmpRead_b;
    boolean tmpRead_c;

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_TmpSignalConversionAtDAPFAO;

#endif

    float32 rtb_TmpSignalConversionAtVeH_ka;
    uint16 rtb_Switch1_bp;
    uint16 rtb_Switch1_jay;
    uint16 rtb_Switch1_ni;
    boolean rtb_AND;
    boolean rtb_AND1_h;
    boolean rtb_FailCounterReset_gb;
    boolean rtb_FailCounterReset_h;
    boolean rtb_GreaterThan1_n;
    boolean rtb_NOT5_m;
    boolean rtb_TmpSignalConversionAtVeDF_g;
    boolean rtb_TmpSignalConversionAtVeHP_c;
    boolean rtb_TmpSignalConversionAtVeHV_m;
    boolean rtb_UnitDelay_oy;

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_RelationalOperator3;

#endif

    boolean rtb_Logical12_d;

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_TmpSignalConversionAtVeDF_e;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_Logical_e;

#endif

#if Rte_SysCon_Variant_PWDR_2

    float32 rtb_Switch1_jf;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_UnitDelay_co;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_UnitDelay_m1;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_DAPFAOpenCntctrEEPROM_write;

#endif

#if Rte_SysCon_Variant_PWDR_2 || Rte_SysCon_Variant_PWDR_4

    boolean rtb_TmpSignalConversionAtVeIDCR;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_TmpSignalConversionAtVeTAIR;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_TmpSignalConversionAtVeHTIR;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_TmpSignalConversionAtVeHT_l;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_TmpSignalConversionAtVeHT_h;

#endif

#if Rte_SysCon_Variant_PWDR_5

    boolean rtb_OR1_l;

#endif

#if Rte_SysCon_Variant_PWDR_5

    boolean rtb_Logical_m;

#endif

#if Rte_SysCon_Variant_PWDR_2

    uint8 rtb_TmpSignalConversionAtVeDM_g;

#endif

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_Merge;

#endif

#if Rte_SysCon_Variant_PWDR_2

    float32 rtb_Sum2_l;

#endif

#if Rte_SysCon_Variant_PWDR_2

    float32 rtb_Sum3;

#endif

#if Rte_SysCon_Variant_PWDR_2

    float32 rtb_Sum4;

#endif

    TeHVTR_e_HV_BatCntctrStat rtb_TmpSignalConversionAtVeB_nf;

#if Rte_SysCon_Variant_PWDR_2

    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeOB_k;

#endif

#if Rte_SysCon_Variant_PWDR_2

    TeHVTR_e_HV_IntrlkStat rtb_TmpSignalConversionAtVeHV_g;

#endif

#if Rte_SysCon_Variant_PWDR_2

    TeBPCR_e_HVBatIntrlk_InternalStat rtb_TmpSignalConversionAtVeHV_o;

#endif

    TeHPMR_e_HybSysState rtb_TmpSignalConversionAtVeHP_g;
    TeHVTR_e_HVOverVoltFailure VePWDR_e_HVOverVoltFailure;
    TeINVR_e_SPTState rtb_TmpSignalConversionAtVeBSWR;

#if Rte_SysCon_Variant_PWDR_2

    boolean rtb_Logical12_my_tmp;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeHVTR_U_HV_Volt_Arb2' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_Volt_Arb2'
     */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Arb2_Value(&rtb_TmpSignalConversionAtVeH_ka);

    /* SignalConversion generated from: '<S1>/VeHVTR_b_HV_VoltFA_Arb2' incorporates:
     *  Inport: '<Root>/VeHVTR_b_HV_VoltFA_Arb2'
     */
    (void)Rte_Read_VeHVTR_b_HV_VoltFA_Arb2_Value
        (&rtb_TmpSignalConversionAtVeHV_m);

    /* SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&rtb_TmpSignalConversionAtVeB_nf);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_DsblDiagFailSafe' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_TmpSignalConversionAtVeDF_g);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P);

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA'
     *  SignalConversion generated from: '<S1>/VeHVTR_e_HV_IntrlkStat'
     *  SignalConversion generated from: '<S1>/VeIDCR_b_APM_HV_VoltageFA'
     */
#if Rte_SysCon_Variant_PWDR_2

    /* SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&rtb_TmpSignalConversionAtVeOB_k);

    /* SignalConversion generated from: '<S1>/VeHVTR_e_HV_IntrlkStat' incorporates:
     *  Inport: '<Root>/VeHVTR_e_HV_IntrlkStat'
     */
    (void)Rte_Read_VeHVTR_e_HV_IntrlkStat_Value(&rtb_TmpSignalConversionAtVeHV_g);

    /* SignalConversion generated from: '<S1>/VeIDCR_b_APM_HV_VoltageFA' incorporates:
     *  Inport: '<Root>/VeIDCR_b_APM_HV_VoltageFA'
     */
    (void)Rte_Read_VeIDCR_b_APM_HV_VoltageFA_Value
        (&rtb_TmpSignalConversionAtVeIDCR);

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_Htr_HV_VltgAct_FA'
     */
    (void)Rte_Read_VeHTIR_b_HVC_Htr_HV_VltgAct_FA_Value
        (&rtb_TmpSignalConversionAtVeHTIR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel' */

    /* SignalConversion generated from: '<S1>/VePLTR_t_RTC_CurrentTime' incorporates:
     *  Inport: '<Root>/VeENGR_b_WarmUpCycCmplt'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VePLTR_t_RTC_CurrentTime'
     *  SignalConversion generated from: '<S1>/VeENGR_b_WarmUpCycCmplt'
     *  SignalConversion generated from: '<S1>/VeHPMR_b_PropSysActv'
     */
#if Rte_SysCon_Variant_PWDR_2 && Rte_SysCon_Variant_PWDR_3

    (void)Rte_Read_VePLTR_t_RTC_CurrentTime_Value
        (&PWDR_ac_B.TmpSignalConversionAtVePLTR_t_R);
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeHPMR_b_P);
    (void)Rte_Read_VeENGR_b_WarmUpCycCmplt_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeENGR_b_W);

#endif

    /* End of SignalConversion generated from: '<S1>/VePLTR_t_RTC_CurrentTime' */

    /* SignalConversion generated from: '<S1>/DAPFAOpenCntctrEEPROM_Read' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_OpnHVCbl'
     *  SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HVILCkt'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_OpnHVCbl'
     *  SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA'
     *  SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA'
     *  SignalConversion generated from: '<S1>/VeHVTR_e_HV_IntrnlIntrlkStat'
     *  SignalConversion generated from: '<S1>/VeTAIR_b_CompHVInp_FA'
     */
#if Rte_SysCon_Variant_PWDR_2

    /* SignalConversion generated from: '<S1>/DAPFAOpenCntctrEEPROM_Read' incorporates:
     *  SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write'
     */
    rtb_TmpSignalConversionAtDAPFAO =
        Rte_IrvRead_PWDR_MedTEB_DAPFAOpenCntctrEEPROM_write_IRV();

    /* SignalConversion generated from: '<S1>/VeTAIR_b_CompHVInp_FA' incorporates:
     *  Inport: '<Root>/VeTAIR_b_CompHVInp_FA'
     */
    (void)Rte_Read_VeTAIR_b_CompHVInp_FA_Value(&rtb_TmpSignalConversionAtVeTAIR);

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_Htr2_HV_VltgAct_FA'
     */
    (void)Rte_Read_VeHTIR_b_HVC_Htr2_HV_VltgAct_FA_Value
        (&rtb_TmpSignalConversionAtVeHT_l);

    /* SignalConversion generated from: '<S1>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA' incorporates:
     *  Inport: '<Root>/VeHTIR_b_HVC_Htr4_HV_VltgAct_FA'
     */
    (void)Rte_Read_VeHTIR_b_HVC_Htr4_HV_VltgAct_FA_Value
        (&rtb_TmpSignalConversionAtVeHT_h);

    /* SignalConversion generated from: '<S1>/VeHVTR_e_HV_IntrnlIntrlkStat' incorporates:
     *  Inport: '<Root>/VeHVTR_e_HV_IntrnlIntrlkStat'
     */
    (void)Rte_Read_VeHVTR_e_HV_IntrnlIntrlkStat_Value
        (&rtb_TmpSignalConversionAtVeHV_o);

    /* SignalConversion generated from: '<S1>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDF_e);

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HVILCkt' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HVILCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HVILCkt_Value
        (&rtb_TmpSignalConversionAtVeDM_g);
    (void)Rte_Read_VeDMAB_y_StatusByte_OpnHVCbl_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_S);

#endif

    /* End of SignalConversion generated from: '<S1>/DAPFAOpenCntctrEEPROM_Read' */

    /* SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HiVoltageFuse' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiVoltageFuse'
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiVoltageFuseB'
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiVoltageFuseC'
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiVoltageFuseD'
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiVoltageFuseE'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HiVoltageFuseB'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HiVoltageFuseC'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HiVoltageFuseD'
     *  SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HiVoltageFuseE'
     */
#if Rte_SysCon_Variant_PWDR_1 && Rte_SysCon_Variant_PWDR_2

    (void)Rte_Read_VeDMAB_y_StatusByte_HiVoltageFuse_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_e);
    (void)Rte_Read_VeDMAB_y_StatusByte_HiVoltageFuseB_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDMAB__e4);
    (void)Rte_Read_VeDMAB_y_StatusByte_HiVoltageFuseC_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_p);
    (void)Rte_Read_VeDMAB_y_StatusByte_HiVoltageFuseD_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_l);
    (void)Rte_Read_VeDMAB_y_StatusByte_HiVoltageFuseE_Value
        (&PWDR_ac_B.TmpSignalConversionAtVeDMAB_y_c);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMAB_y_StatusByte_HiVoltageFuse' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHPMR_e_HighVltCntctrCntrl' */
    (void)Rte_Read_VeHPMR_e_HighVltCntctrCntrl_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEB'
     */
    /* SignalConversion generated from: '<S1>/VeHPMR_b_PrechargeFailure' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PrechargeFailure'
     */
    (void)Rte_Read_VeHPMR_b_PrechargeFailure_Value
        (&rtb_TmpSignalConversionAtVeHP_c);

    /* SignalConversion generated from: '<S1>/VeHPMR_e_HybSysSt' incorporates:
     *  Inport: '<Root>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Read_VeHPMR_e_HybSysSt_Value(&rtb_TmpSignalConversionAtVeHP_g);

    /* SignalConversion generated from: '<S1>/VeBSWR_e_SPT_State' incorporates:
     *  Inport: '<Root>/VeBSWR_e_SPT_State'
     */
    (void)Rte_Read_VeBSWR_e_SPT_State_Value(&rtb_TmpSignalConversionAtVeBSWR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HVTR'
     */

    /* UnitDelay: '<S442>/Unit Delay' incorporates:
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Constant'
     *  Inport: '<Root>/VeHPMR_e_HighVltCntctrCntrl'
     *  Logic: '<S360>/AND1'
     *  Logic: '<S360>/Logical9'
     *  RelationalOperator: '<S360>/Equal'
     *  RelationalOperator: '<S360>/Equal1'
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
    rtb_UnitDelay_oy = (((!rtb_TmpSignalConversionAtVeHV_m) && (CeHVTR_e_Closed ==
                          ((uint32)rtb_TmpSignalConversionAtVeB_nf))) &&
                        (CeHPMR_e_Closed == ((uint32)tmpRead_1)));

    /* Logic: '<S361>/AND1' incorporates:
     *  Constant: '<S383>/Calib'
     */
    rtb_AND1_h = (rtb_UnitDelay_oy && (KePWDR_b_HVOverVoltEnable));

    /* Logic: '<S363>/NOT4' */
    PWDR_ac_B.NOT4 = (rtb_TmpSignalConversionAtVeDF_g ||
                      (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P));

    /* Logic: '<S397>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S397>/Unit Delay'
     *  UnitDelay: '<S397>/Unit Delay1'
     */
    rtb_FailCounterReset_gb = (((PWDR_ac_DW.UnitDelay1_DSTATE_i) ||
        (PWDR_ac_B.NOT4)) || (PWDR_ac_DW.UnitDelay_DSTATE_at));

    /* Outputs for Atomic SubSystem: '<S397>/Counter Reset  Enabled 1' */
    /* Switch: '<S402>/Switch1' incorporates:
     *  Switch: '<S402>/Switch2'
     */
    if (rtb_FailCounterReset_gb)
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S402>/Constant Value2'
         */
        VePWDR_Cnt_HVOverVoltWarnSmplCnt = 0U;
    }
    else if (rtb_AND1_h)
    {
        /* Switch: '<S402>/Switch2' incorporates:
         *  Constant: '<S402>/Constant Value1'
         *  Sum: '<S402>/Subtraction'
         *  Switch: '<S402>/Switch1'
         *  UnitDelay: '<S402>/Unit Delay'
         */
        VePWDR_Cnt_HVOverVoltWarnSmplCnt = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_lr) + 1U);
    }
    else
    {
        /* Switch: '<S402>/Switch1' incorporates:
         *  Switch: '<S402>/Switch2'
         *  UnitDelay: '<S402>/Unit Delay'
         */
        VePWDR_Cnt_HVOverVoltWarnSmplCnt = PWDR_ac_DW.UnitDelay_DSTATE_lr;
    }

    /* End of Switch: '<S402>/Switch1' */

    /* Update for UnitDelay: '<S402>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lr = VePWDR_Cnt_HVOverVoltWarnSmplCnt;

    /* End of Outputs for SubSystem: '<S397>/Counter Reset  Enabled 1' */

    /* Switch: '<S371>/Switch1' incorporates:
     *  Constant: '<S382>/Calib'
     */
    if (KePWDR_b_HVOverVoltCntrlEnbl)
    {
        /* Switch: '<S371>/Switch1' */
        VePWDR_U_HVOverVoltFBVal = rtb_TmpSignalConversionAtVeH_ka;
    }
    else
    {
        /* Switch: '<S371>/Switch1' incorporates:
         *  Constant: '<S378>/Calib'
         */
        VePWDR_U_HVOverVoltFBVal = KePWDR_U_HVOverVoltCntrlVal;
    }

    /* End of Switch: '<S371>/Switch1' */

    /* RelationalOperator: '<S361>/Greater  Than1' incorporates:
     *  Constant: '<S381>/Calib'
     */
    rtb_GreaterThan1_n = (VePWDR_U_HVOverVoltFBVal >
                          KePWDR_U_HVOverVoltWarningThrshld);

    /* Outputs for Atomic SubSystem: '<S397>/Counter Reset  Enabled ' */
    /* Switch: '<S401>/Switch1' incorporates:
     *  Logic: '<S397>/NOT6'
     *  Switch: '<S401>/Switch2'
     */
    if (rtb_FailCounterReset_gb)
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Constant: '<S401>/Constant Value2'
         */
        VePWDR_Cnt_HVOverVoltWarnCnt = 0U;
    }
    else if (rtb_GreaterThan1_n && rtb_AND1_h)
    {
        /* Switch: '<S401>/Switch2' incorporates:
         *  Constant: '<S401>/Constant Value1'
         *  Sum: '<S401>/Subtraction'
         *  Switch: '<S401>/Switch1'
         *  UnitDelay: '<S401>/Unit Delay'
         */
        VePWDR_Cnt_HVOverVoltWarnCnt = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_p) + 1U);
    }
    else
    {
        /* Switch: '<S401>/Switch1' incorporates:
         *  Switch: '<S401>/Switch2'
         *  UnitDelay: '<S401>/Unit Delay'
         */
        VePWDR_Cnt_HVOverVoltWarnCnt = PWDR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S401>/Switch1' */

    /* Update for UnitDelay: '<S401>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_p = VePWDR_Cnt_HVOverVoltWarnCnt;

    /* End of Outputs for SubSystem: '<S397>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S397>/Greater Than or Equal ' incorporates:
     *  Constant: '<S375>/Calib'
     */
    rtb_FailCounterReset_gb = (VePWDR_Cnt_HVOverVoltWarnCnt >=
        KePWDR_Cnt_HVOverVoltWarningCntLmt);

    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S400>/Constant Value'
     *  DataStoreWrite: '<S361>/Data Store Write'
     *  Switch: '<S405>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMSOF = MAX_uint16_T;
    }
    else
    {
        if (rtb_FailCounterReset_gb)
        {
            /* MinMax: '<S400>/Minimum1' incorporates:
             *  DataStoreRead: '<S361>/Data Store Read2'
             *  Switch: '<S405>/Switch1'
             */
            if (VePWDR_Cnt_HVOverVoltWarnSmplCnt <
                    PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMSOF)
            {
                /* DataStoreWrite: '<S361>/Data Store Write' incorporates:
                 *  Switch: '<S405>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMSOF =
                    VePWDR_Cnt_HVOverVoltWarnSmplCnt;
            }

            /* End of MinMax: '<S400>/Minimum1' */
        }
    }

    /* End of Switch: '<S406>/Switch1' */

    /* Logic: '<S397>/NOT5' incorporates:
     *  Constant: '<S376>/Calib'
     *  Logic: '<S397>/NOT3'
     *  RelationalOperator: '<S397>/Less Than  or Equal'
     */
    rtb_NOT5_m = ((!rtb_FailCounterReset_gb) &&
                  (VePWDR_Cnt_HVOverVoltWarnSmplCnt >=
                   KePWDR_Cnt_HVOverVoltWarningSmplCntLmt));

    /* Switch: '<S404>/Switch1' incorporates:
     *  Constant: '<S399>/Constant Value'
     *  DataStoreWrite: '<S361>/Data Store Write1'
     *  Switch: '<S403>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMFOP = 0U;
    }
    else
    {
        if (rtb_NOT5_m)
        {
            /* MinMax: '<S399>/Minimum2' incorporates:
             *  DataStoreRead: '<S361>/Data Store Read3'
             *  Switch: '<S403>/Switch1'
             */
            if (VePWDR_Cnt_HVOverVoltWarnCnt >
                    PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMFOP)
            {
                /* DataStoreWrite: '<S361>/Data Store Write1' incorporates:
                 *  Switch: '<S403>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMFOP =
                    VePWDR_Cnt_HVOverVoltWarnCnt;
            }

            /* End of MinMax: '<S399>/Minimum2' */
        }
    }

    /* End of Switch: '<S404>/Switch1' */

    /* Logic: '<S407>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S407>/Unit Delay'
     *  UnitDelay: '<S407>/Unit Delay1'
     */
    rtb_FailCounterReset_h = (((PWDR_ac_DW.UnitDelay1_DSTATE_ne) ||
        (PWDR_ac_B.NOT4)) || (PWDR_ac_DW.UnitDelay_DSTATE_if));

    /* Outputs for Atomic SubSystem: '<S407>/Counter Reset  Enabled ' */
    /* Outputs for Atomic SubSystem: '<S407>/Counter Reset  Enabled 1' */
    /* Switch: '<S412>/Switch1' incorporates:
     *  Switch: '<S411>/Switch1'
     *  Switch: '<S412>/Switch2'
     */
    if (rtb_FailCounterReset_h)
    {
        /* Switch: '<S412>/Switch1' incorporates:
         *  Constant: '<S412>/Constant Value2'
         */
        VePWDR_Cnt_HVOverVoltFailSmplCnt = 0U;

        /* Switch: '<S411>/Switch1' incorporates:
         *  Constant: '<S411>/Constant Value2'
         */
        VePWDR_Cnt_HVOverVoltFailCnt = 0U;
    }
    else
    {
        if (rtb_AND1_h)
        {
            /* Switch: '<S412>/Switch2' incorporates:
             *  Constant: '<S412>/Constant Value1'
             *  Sum: '<S412>/Subtraction'
             *  Switch: '<S412>/Switch1'
             *  UnitDelay: '<S412>/Unit Delay'
             */
            VePWDR_Cnt_HVOverVoltFailSmplCnt = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_et) + 1U);
        }
        else
        {
            /* Switch: '<S412>/Switch1' incorporates:
             *  Switch: '<S412>/Switch2'
             *  UnitDelay: '<S412>/Unit Delay'
             */
            VePWDR_Cnt_HVOverVoltFailSmplCnt = PWDR_ac_DW.UnitDelay_DSTATE_et;
        }

        /* Switch: '<S411>/Switch2' incorporates:
         *  Logic: '<S407>/NOT6'
         */
        if (rtb_GreaterThan1_n && rtb_AND1_h)
        {
            /* Switch: '<S411>/Switch1' incorporates:
             *  Constant: '<S411>/Constant Value1'
             *  Sum: '<S411>/Subtraction'
             *  Switch: '<S411>/Switch2'
             *  UnitDelay: '<S411>/Unit Delay'
             */
            VePWDR_Cnt_HVOverVoltFailCnt = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_fm5) + 1U);
        }
        else
        {
            /* Switch: '<S411>/Switch1' incorporates:
             *  Switch: '<S411>/Switch2'
             *  UnitDelay: '<S411>/Unit Delay'
             */
            VePWDR_Cnt_HVOverVoltFailCnt = PWDR_ac_DW.UnitDelay_DSTATE_fm5;
        }

        /* End of Switch: '<S411>/Switch2' */
    }

    /* End of Switch: '<S412>/Switch1' */
    /* End of Outputs for SubSystem: '<S407>/Counter Reset  Enabled ' */

    /* Update for UnitDelay: '<S412>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_et = VePWDR_Cnt_HVOverVoltFailSmplCnt;

    /* End of Outputs for SubSystem: '<S407>/Counter Reset  Enabled 1' */

    /* Outputs for Atomic SubSystem: '<S407>/Counter Reset  Enabled ' */
    /* Update for UnitDelay: '<S411>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_fm5 = VePWDR_Cnt_HVOverVoltFailCnt;

    /* End of Outputs for SubSystem: '<S407>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S407>/Greater Than or Equal ' incorporates:
     *  Constant: '<S373>/Calib'
     */
    VePWDR_b_HVOverVoltFltStat = (VePWDR_Cnt_HVOverVoltFailCnt >=
        KePWDR_Cnt_HVOverVoltFailureCntLmt);

    /* Switch: '<S416>/Switch1' incorporates:
     *  Constant: '<S410>/Constant Value'
     *  DataStoreWrite: '<S361>/Data Store Write4'
     *  Switch: '<S415>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMSO = MAX_uint16_T;
    }
    else
    {
        if (VePWDR_b_HVOverVoltFltStat)
        {
            /* MinMax: '<S410>/Minimum1' incorporates:
             *  DataStoreRead: '<S361>/Data Store Read4'
             *  Switch: '<S415>/Switch1'
             */
            if (VePWDR_Cnt_HVOverVoltFailSmplCnt <
                    PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMSO)
            {
                /* DataStoreWrite: '<S361>/Data Store Write4' incorporates:
                 *  Switch: '<S415>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMSO =
                    VePWDR_Cnt_HVOverVoltFailSmplCnt;
            }

            /* End of MinMax: '<S410>/Minimum1' */
        }
    }

    /* End of Switch: '<S416>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample2' */
    /* Logic: '<S407>/NOT3' incorporates:
     *  Logic: '<S386>/OR1'
     */
    rtb_Logical12_d = !VePWDR_b_HVOverVoltFltStat;

    /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample2' */

    /* Logic: '<S407>/NOT5' incorporates:
     *  Constant: '<S374>/Calib'
     *  Logic: '<S407>/NOT3'
     *  RelationalOperator: '<S407>/Less Than  or Equal'
     */
    VePWDR_b_HVOverVoltPassStat = (rtb_Logical12_d &&
        (VePWDR_Cnt_HVOverVoltFailSmplCnt >=
         KePWDR_Cnt_HVOverVoltFailureSmplCntLmt));

    /* Switch: '<S414>/Switch1' incorporates:
     *  Constant: '<S409>/Constant Value'
     *  DataStoreWrite: '<S361>/Data Store Write5'
     *  Switch: '<S413>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMFO = 0U;
    }
    else
    {
        if (VePWDR_b_HVOverVoltPassStat)
        {
            /* MinMax: '<S409>/Minimum2' incorporates:
             *  DataStoreRead: '<S361>/Data Store Read5'
             *  Switch: '<S413>/Switch1'
             */
            if (VePWDR_Cnt_HVOverVoltFailCnt >
                    PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMFO)
            {
                /* DataStoreWrite: '<S361>/Data Store Write5' incorporates:
                 *  Switch: '<S413>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMFO =
                    VePWDR_Cnt_HVOverVoltFailCnt;
            }

            /* End of MinMax: '<S409>/Minimum2' */
        }
    }

    /* End of Switch: '<S414>/Switch1' */

    /* Logic: '<S361>/AND2' incorporates:
     *  Constant: '<S380>/Calib'
     *  RelationalOperator: '<S361>/Greater  Than4'
     */
    rtb_GreaterThan1_n = ((VePWDR_U_HVOverVoltFBVal >=
                           KePWDR_U_HVOverVoltFailureThrshld3) &&
                          (VePWDR_b_HVOverVoltFltStat));

    /* Logic: '<S361>/AND3' incorporates:
     *  Constant: '<S379>/Calib'
     *  RelationalOperator: '<S361>/Greater  Than5'
     */
    rtb_FailCounterReset_h = ((VePWDR_U_HVOverVoltFBVal >=
        KePWDR_U_HVOverVoltFailureThrshld2) && (VePWDR_b_HVOverVoltFltStat));

    /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S384>/EdgeRising' */
    /* Logic: '<S392>/AND' incorporates:
     *  Logic: '<S392>/OR1'
     *  UnitDelay: '<S392>/Unit Delay'
     */
    rtb_AND = (rtb_GreaterThan1_n && (!PWDR_ac_DW.UnitDelay_DSTATE_lop));

    /* Update for UnitDelay: '<S392>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lop = rtb_GreaterThan1_n;

    /* End of Outputs for SubSystem: '<S384>/EdgeRising' */

    /* Switch: '<S384>/Switch1' incorporates:
     *  Constant: '<S377>/Calib'
     *  Constant: '<S384>/Constant Value'
     *  Logic: '<S384>/OR'
     *  Logic: '<S384>/OR1'
     *  MinMax: '<S384>/Minimum'
     *  Sum: '<S384>/Summation'
     *  UnitDelay: '<S384>/Unit Delay'
     */
    if ((!rtb_GreaterThan1_n) || rtb_AND)
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S384>/Constant Value1'
         */
        rtb_Switch1_ni = 0U;
    }
    else if (KePWDR_Cnt_OverVoltWarningThrshld < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_kg) + 1U)))
    {
        /* MinMax: '<S384>/Minimum' incorporates:
         *  Constant: '<S377>/Calib'
         *  Switch: '<S384>/Switch1'
         */
        rtb_Switch1_ni = KePWDR_Cnt_OverVoltWarningThrshld;
    }
    else
    {
        /* Switch: '<S384>/Switch1' incorporates:
         *  Constant: '<S384>/Constant Value'
         *  MinMax: '<S384>/Minimum'
         *  Sum: '<S384>/Summation'
         *  UnitDelay: '<S384>/Unit Delay'
         */
        rtb_Switch1_ni = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_kg) + 1U);
    }

    /* End of Switch: '<S384>/Switch1' */

    /* Update for UnitDelay: '<S384>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_kg = rtb_Switch1_ni;

    /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S385>/EdgeRising' */
    /* Logic: '<S393>/AND' incorporates:
     *  Logic: '<S393>/OR1'
     *  UnitDelay: '<S393>/Unit Delay'
     */
    rtb_AND = (rtb_FailCounterReset_h && (!PWDR_ac_DW.UnitDelay_DSTATE_n2));

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_n2 = rtb_FailCounterReset_h;

    /* End of Outputs for SubSystem: '<S385>/EdgeRising' */

    /* Switch: '<S385>/Switch1' incorporates:
     *  Constant: '<S377>/Calib'
     *  Constant: '<S385>/Constant Value'
     *  Logic: '<S385>/OR'
     *  Logic: '<S385>/OR1'
     *  MinMax: '<S385>/Minimum'
     *  Sum: '<S385>/Summation'
     *  UnitDelay: '<S385>/Unit Delay'
     */
    if ((!rtb_FailCounterReset_h) || rtb_AND)
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S385>/Constant Value1'
         */
        rtb_Switch1_jay = 0U;
    }
    else if (KePWDR_Cnt_OverVoltWarningThrshld < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_i) + 1U)))
    {
        /* MinMax: '<S385>/Minimum' incorporates:
         *  Constant: '<S377>/Calib'
         *  Switch: '<S385>/Switch1'
         */
        rtb_Switch1_jay = KePWDR_Cnt_OverVoltWarningThrshld;
    }
    else
    {
        /* Switch: '<S385>/Switch1' incorporates:
         *  Constant: '<S385>/Constant Value'
         *  MinMax: '<S385>/Minimum'
         *  Sum: '<S385>/Summation'
         *  UnitDelay: '<S385>/Unit Delay'
         */
        rtb_Switch1_jay = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_i) + 1U);
    }

    /* End of Switch: '<S385>/Switch1' */

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_jay;

    /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample1' */

    /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S386>/EdgeRising' */
    /* UnitDelay: '<S408>/Unit Delay' incorporates:
     *  UnitDelay: '<S394>/Unit Delay'
     */
    rtb_AND = PWDR_ac_DW.UnitDelay_DSTATE_hl;

    /* Update for UnitDelay: '<S394>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_hl = VePWDR_b_HVOverVoltFltStat;

    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S377>/Calib'
     *  Constant: '<S386>/Constant Value'
     *  Logic: '<S386>/OR'
     *  Logic: '<S394>/AND'
     *  Logic: '<S394>/OR1'
     *  MinMax: '<S386>/Minimum'
     *  Sum: '<S386>/Summation'
     *  UnitDelay: '<S386>/Unit Delay'
     */
    if (rtb_Logical12_d || ((VePWDR_b_HVOverVoltFltStat) && (!rtb_AND)))
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S386>/Constant Value1'
         */
        rtb_Switch1_bp = 0U;
    }
    else if (KePWDR_Cnt_OverVoltWarningThrshld < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_c) + 1U)))
    {
        /* MinMax: '<S386>/Minimum' incorporates:
         *  Constant: '<S377>/Calib'
         *  Switch: '<S386>/Switch1'
         */
        rtb_Switch1_bp = KePWDR_Cnt_OverVoltWarningThrshld;
    }
    else
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S386>/Constant Value'
         *  MinMax: '<S386>/Minimum'
         *  Sum: '<S386>/Summation'
         *  UnitDelay: '<S386>/Unit Delay'
         */
        rtb_Switch1_bp = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_c) + 1U);
    }

    /* End of Switch: '<S386>/Switch1' */
    /* End of Outputs for SubSystem: '<S386>/EdgeRising' */

    /* Update for UnitDelay: '<S386>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_bp;

    /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample' */
    /* If: '<S361>/If' incorporates:
     *  Constant: '<S377>/Calib'
     *  Logic: '<S361>/AND5'
     *  Logic: '<S384>/AND'
     *  Logic: '<S385>/AND'
     *  Logic: '<S386>/AND'
     *  RelationalOperator: '<S384>/Greater  Than'
     *  RelationalOperator: '<S385>/Greater  Than'
     *  RelationalOperator: '<S386>/Greater  Than'
     */
    if (rtb_GreaterThan1_n && (rtb_Switch1_ni >=
                               KePWDR_Cnt_OverVoltWarningThrshld))
    {
        /* Outputs for IfAction SubSystem: '<S361>/If Action Subsystem' incorporates:
         *  ActionPort: '<S366>/Action Port'
         */
        /* Merge: '<S361>/Merge' incorporates:
         *  Constant: '<S388>/Constant'
         *  SignalConversion generated from: '<S366>/VePWDR_e_HVOverVoltFailure3'
         */
        VePWDR_e_HVOverVoltFailure = CeHVTR_e_HVOverVoltFailureSysShtdwn;

        /* End of Outputs for SubSystem: '<S361>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample1' */
        if (rtb_FailCounterReset_h && (rtb_Switch1_jay >=
                KePWDR_Cnt_OverVoltWarningThrshld))
        {
            /* Outputs for IfAction SubSystem: '<S361>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S367>/Action Port'
             */
            /* Merge: '<S361>/Merge' incorporates:
             *  Constant: '<S389>/Constant'
             *  SignalConversion generated from: '<S367>/VePWDR_e_HVOverVoltFailure2'
             */
            VePWDR_e_HVOverVoltFailure = CeHVTR_e_HVOverVoltFailureLimVehicleSpd;

            /* End of Outputs for SubSystem: '<S361>/If Action Subsystem1' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S361>/Turn On Delay Sample2' */
            if ((VePWDR_b_HVOverVoltFltStat) && (rtb_Switch1_bp >=
                    KePWDR_Cnt_OverVoltWarningThrshld))
            {
                /* Outputs for IfAction SubSystem: '<S361>/If Action Subsystem2' incorporates:
                 *  ActionPort: '<S368>/Action Port'
                 */
                /* Merge: '<S361>/Merge' incorporates:
                 *  Constant: '<S390>/Constant'
                 *  SignalConversion generated from: '<S368>/VePWDR_e_HVOverVoltFailure1'
                 */
                VePWDR_e_HVOverVoltFailure =
                    CeHVTR_e_HVOverVoltFailureNoRegenLimp;

                /* End of Outputs for SubSystem: '<S361>/If Action Subsystem2' */
            }
            else if (!VePWDR_b_HVOverVoltPassStat)
            {
                /* Outputs for IfAction SubSystem: '<S361>/If Action Subsystem4' incorporates:
                 *  ActionPort: '<S370>/Action Port'
                 */
                /* Merge: '<S361>/Merge' incorporates:
                 *  Inport: '<S370>/VePWDR_e_HVOverVoltFailure_Prev'
                 *  UnitDelay: '<S361>/Unit Delay'
                 */
                VePWDR_e_HVOverVoltFailure = PWDR_ac_DW.UnitDelay_DSTATE_fq;

                /* End of Outputs for SubSystem: '<S361>/If Action Subsystem4' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S361>/If Action Subsystem3' incorporates:
                 *  ActionPort: '<S369>/Action Port'
                 */
                /* Merge: '<S361>/Merge' incorporates:
                 *  Constant: '<S391>/Constant'
                 *  SignalConversion generated from: '<S369>/VePWDR_e_HVOverVoltPassed'
                 */
                VePWDR_e_HVOverVoltFailure = CeHVTR_e_HVOverVoltPass;

                /* End of Outputs for SubSystem: '<S361>/If Action Subsystem3' */
            }

            /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample2' */
        }

        /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample1' */
    }

    /* End of If: '<S361>/If' */
    /* End of Outputs for SubSystem: '<S361>/Turn On Delay Sample' */

    /* Logic: '<S396>/NOT4' incorporates:
     *  Logic: '<S430>/NOT4'
     */
    rtb_Logical12_d = !PWDR_ac_B.NOT4;

    /* Outputs for Atomic SubSystem: '<S396>/Signal Latch On With Reset' */
    /* Logic: '<S408>/OR1' incorporates:
     *  Logic: '<S396>/NOT4'
     *  Logic: '<S408>/NOT'
     *  Logic: '<S408>/OR'
     *  UnitDelay: '<S408>/Unit Delay'
     */
    rtb_GreaterThan1_n = ((VePWDR_b_HVOverVoltFltStat) || ((rtb_Logical12_d && (
        !VePWDR_b_HVOverVoltPassStat)) && (PWDR_ac_DW.UnitDelay_DSTATE_j2)));

    /* Update for UnitDelay: '<S408>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_j2 = rtb_GreaterThan1_n;

    /* End of Outputs for SubSystem: '<S396>/Signal Latch On With Reset' */

    /* Switch: '<S372>/Switch1' */
    rtb_AND1_h = (rtb_AND1_h && rtb_GreaterThan1_n);

    /* Logic: '<S362>/AND1' incorporates:
     *  Constant: '<S427>/Calib'
     */
    rtb_UnitDelay_oy = (rtb_UnitDelay_oy && (KePWDR_b_HVUnderVoltEnable));

    /* Logic: '<S431>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S431>/Unit Delay'
     *  UnitDelay: '<S431>/Unit Delay1'
     */
    rtb_GreaterThan1_n = (((PWDR_ac_DW.UnitDelay1_DSTATE_px) || (PWDR_ac_B.NOT4))
                          || (PWDR_ac_DW.UnitDelay_DSTATE_j4));

    /* Outputs for Atomic SubSystem: '<S431>/Counter Reset  Enabled 1' */
    /* Switch: '<S436>/Switch1' incorporates:
     *  Switch: '<S436>/Switch2'
     */
    if (rtb_GreaterThan1_n)
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S436>/Constant Value2'
         */
        VePWDR_Cnt_HVUnderVoltWarnSmplCnt = 0U;
    }
    else if (rtb_UnitDelay_oy)
    {
        /* Switch: '<S436>/Switch2' incorporates:
         *  Constant: '<S436>/Constant Value1'
         *  Sum: '<S436>/Subtraction'
         *  Switch: '<S436>/Switch1'
         *  UnitDelay: '<S436>/Unit Delay'
         */
        VePWDR_Cnt_HVUnderVoltWarnSmplCnt = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_al) + 1U);
    }
    else
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Switch: '<S436>/Switch2'
         *  UnitDelay: '<S436>/Unit Delay'
         */
        VePWDR_Cnt_HVUnderVoltWarnSmplCnt = PWDR_ac_DW.UnitDelay_DSTATE_al;
    }

    /* End of Switch: '<S436>/Switch1' */

    /* Update for UnitDelay: '<S436>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_al = VePWDR_Cnt_HVUnderVoltWarnSmplCnt;

    /* End of Outputs for SubSystem: '<S431>/Counter Reset  Enabled 1' */

    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S426>/Calib'
     *  RelationalOperator: '<S362>/Equal'
     */
    if (KePWDR_b_HVUnderVoltCntrlEnbl)
    {
        /* Switch: '<S417>/Switch1' */
        VePWDR_U_HVUnderVoltFBVal = rtb_TmpSignalConversionAtVeH_ka;
    }
    else
    {
        /* Switch: '<S417>/Switch1' incorporates:
         *  Constant: '<S423>/Calib'
         */
        VePWDR_U_HVUnderVoltFBVal = KePWDR_U_HVUnderVoltCntrlVal;
    }

    /* End of Switch: '<S417>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S431>/Counter Reset  Enabled ' */
    /* Switch: '<S435>/Switch1' incorporates:
     *  Constant: '<S425>/Calib'
     *  Logic: '<S431>/NOT6'
     *  RelationalOperator: '<S362>/Greater  Than1'
     *  Switch: '<S435>/Switch2'
     */
    if (rtb_GreaterThan1_n)
    {
        /* Switch: '<S435>/Switch1' incorporates:
         *  Constant: '<S435>/Constant Value2'
         */
        VePWDR_Cnt_HVUnderVoltWarnCnt = 0U;
    }
    else if ((VePWDR_U_HVUnderVoltFBVal < KePWDR_U_HVUnderVoltWarningThrshld) &&
             rtb_UnitDelay_oy)
    {
        /* Switch: '<S435>/Switch2' incorporates:
         *  Constant: '<S435>/Constant Value1'
         *  Sum: '<S435>/Subtraction'
         *  Switch: '<S435>/Switch1'
         *  UnitDelay: '<S435>/Unit Delay'
         */
        VePWDR_Cnt_HVUnderVoltWarnCnt = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_hw) + 1U);
    }
    else
    {
        /* Switch: '<S435>/Switch1' incorporates:
         *  Switch: '<S435>/Switch2'
         *  UnitDelay: '<S435>/Unit Delay'
         */
        VePWDR_Cnt_HVUnderVoltWarnCnt = PWDR_ac_DW.UnitDelay_DSTATE_hw;
    }

    /* End of Switch: '<S435>/Switch1' */

    /* Update for UnitDelay: '<S435>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_hw = VePWDR_Cnt_HVUnderVoltWarnCnt;

    /* End of Outputs for SubSystem: '<S431>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S431>/Greater Than or Equal ' incorporates:
     *  Constant: '<S421>/Calib'
     */
    rtb_GreaterThan1_n = (VePWDR_Cnt_HVUnderVoltWarnCnt >=
                          KePWDR_Cnt_HVUnderVoltWarningCntLmt);

    /* Switch: '<S440>/Switch1' incorporates:
     *  Constant: '<S434>/Constant Value'
     *  DataStoreWrite: '<S362>/Data Store Write'
     *  Switch: '<S439>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMSOF = MAX_uint16_T;
    }
    else
    {
        if (rtb_GreaterThan1_n)
        {
            /* MinMax: '<S434>/Minimum1' incorporates:
             *  DataStoreRead: '<S362>/Data Store Read2'
             *  Switch: '<S439>/Switch1'
             */
            if (VePWDR_Cnt_HVUnderVoltWarnSmplCnt <
                    PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMSOF)
            {
                /* DataStoreWrite: '<S362>/Data Store Write' incorporates:
                 *  Switch: '<S439>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMSOF =
                    VePWDR_Cnt_HVUnderVoltWarnSmplCnt;
            }

            /* End of MinMax: '<S434>/Minimum1' */
        }
    }

    /* End of Switch: '<S440>/Switch1' */

    /* Logic: '<S431>/NOT5' incorporates:
     *  Constant: '<S422>/Calib'
     *  Logic: '<S431>/NOT3'
     *  RelationalOperator: '<S431>/Less Than  or Equal'
     */
    rtb_FailCounterReset_h = ((!rtb_GreaterThan1_n) &&
        (VePWDR_Cnt_HVUnderVoltWarnSmplCnt >=
         KePWDR_Cnt_HVUnderVoltWarningSmplCntLmt));

    /* Switch: '<S438>/Switch1' incorporates:
     *  Constant: '<S433>/Constant Value'
     *  DataStoreWrite: '<S362>/Data Store Write1'
     *  Switch: '<S437>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMFOP = 0U;
    }
    else
    {
        if (rtb_FailCounterReset_h)
        {
            /* MinMax: '<S433>/Minimum2' incorporates:
             *  DataStoreRead: '<S362>/Data Store Read3'
             *  Switch: '<S437>/Switch1'
             */
            if (VePWDR_Cnt_HVUnderVoltWarnCnt >
                    PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMFOP)
            {
                /* DataStoreWrite: '<S362>/Data Store Write1' incorporates:
                 *  Switch: '<S437>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMFOP =
                    VePWDR_Cnt_HVUnderVoltWarnCnt;
            }

            /* End of MinMax: '<S433>/Minimum2' */
        }
    }

    /* End of Switch: '<S438>/Switch1' */

    /* Logic: '<S441>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S441>/Unit Delay'
     *  UnitDelay: '<S441>/Unit Delay1'
     */
    rtb_AND = (((PWDR_ac_DW.UnitDelay1_DSTATE_h) || (PWDR_ac_B.NOT4)) ||
               (PWDR_ac_DW.UnitDelay_DSTATE_m3));

    /* Outputs for Atomic SubSystem: '<S441>/Counter Reset  Enabled ' */
    /* Outputs for Atomic SubSystem: '<S441>/Counter Reset  Enabled 1' */
    /* Switch: '<S446>/Switch1' incorporates:
     *  Switch: '<S445>/Switch1'
     *  Switch: '<S446>/Switch2'
     */
    if (rtb_AND)
    {
        /* Switch: '<S446>/Switch1' incorporates:
         *  Constant: '<S446>/Constant Value2'
         */
        VePWDR_Cnt_HVUnderVoltFailSmplCnt = 0U;

        /* Switch: '<S445>/Switch1' incorporates:
         *  Constant: '<S445>/Constant Value2'
         */
        VePWDR_Cnt_HVUnderVoltFailCnt = 0U;
    }
    else
    {
        if (rtb_UnitDelay_oy)
        {
            /* Switch: '<S446>/Switch2' incorporates:
             *  Constant: '<S446>/Constant Value1'
             *  Sum: '<S446>/Subtraction'
             *  Switch: '<S446>/Switch1'
             *  UnitDelay: '<S446>/Unit Delay'
             */
            VePWDR_Cnt_HVUnderVoltFailSmplCnt = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_ly) + 1U);
        }
        else
        {
            /* Switch: '<S446>/Switch1' incorporates:
             *  Switch: '<S446>/Switch2'
             *  UnitDelay: '<S446>/Unit Delay'
             */
            VePWDR_Cnt_HVUnderVoltFailSmplCnt = PWDR_ac_DW.UnitDelay_DSTATE_ly;
        }

        /* Switch: '<S445>/Switch2' incorporates:
         *  Constant: '<S424>/Calib'
         *  Logic: '<S441>/NOT6'
         *  RelationalOperator: '<S362>/Greater  Than2'
         */
        if ((VePWDR_U_HVUnderVoltFBVal < KePWDR_U_HVUnderVoltFailureThrshld) &&
                rtb_UnitDelay_oy)
        {
            /* Switch: '<S445>/Switch1' incorporates:
             *  Constant: '<S445>/Constant Value1'
             *  Sum: '<S445>/Subtraction'
             *  Switch: '<S445>/Switch2'
             *  UnitDelay: '<S445>/Unit Delay'
             */
            VePWDR_Cnt_HVUnderVoltFailCnt = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_d4) + 1U);
        }
        else
        {
            /* Switch: '<S445>/Switch1' incorporates:
             *  Switch: '<S445>/Switch2'
             *  UnitDelay: '<S445>/Unit Delay'
             */
            VePWDR_Cnt_HVUnderVoltFailCnt = PWDR_ac_DW.UnitDelay_DSTATE_d4;
        }

        /* End of Switch: '<S445>/Switch2' */
    }

    /* End of Switch: '<S446>/Switch1' */
    /* End of Outputs for SubSystem: '<S441>/Counter Reset  Enabled ' */

    /* Update for UnitDelay: '<S446>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ly = VePWDR_Cnt_HVUnderVoltFailSmplCnt;

    /* End of Outputs for SubSystem: '<S441>/Counter Reset  Enabled 1' */

    /* Outputs for Atomic SubSystem: '<S441>/Counter Reset  Enabled ' */
    /* Update for UnitDelay: '<S445>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_d4 = VePWDR_Cnt_HVUnderVoltFailCnt;

    /* End of Outputs for SubSystem: '<S441>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S441>/Greater Than or Equal ' incorporates:
     *  Constant: '<S419>/Calib'
     */
    VePWDR_b_HVUnderVoltFltStat = (VePWDR_Cnt_HVUnderVoltFailCnt >=
        KePWDR_Cnt_HVUnderVoltFailureCntLmt);

    /* Switch: '<S450>/Switch1' incorporates:
     *  Constant: '<S444>/Constant Value'
     *  DataStoreWrite: '<S362>/Data Store Write4'
     *  Switch: '<S449>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMS = MAX_uint16_T;
    }
    else
    {
        if (VePWDR_b_HVUnderVoltFltStat)
        {
            /* MinMax: '<S444>/Minimum1' incorporates:
             *  DataStoreRead: '<S362>/Data Store Read4'
             *  Switch: '<S449>/Switch1'
             */
            if (VePWDR_Cnt_HVUnderVoltFailSmplCnt <
                    PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMS)
            {
                /* DataStoreWrite: '<S362>/Data Store Write4' incorporates:
                 *  Switch: '<S449>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMS =
                    VePWDR_Cnt_HVUnderVoltFailSmplCnt;
            }

            /* End of MinMax: '<S444>/Minimum1' */
        }
    }

    /* End of Switch: '<S450>/Switch1' */

    /* Logic: '<S441>/NOT5' incorporates:
     *  Constant: '<S420>/Calib'
     *  Logic: '<S441>/NOT3'
     *  RelationalOperator: '<S441>/Less Than  or Equal'
     */
    VePWDR_b_HVUnderVoltPassStat = ((!VePWDR_b_HVUnderVoltFltStat) &&
        (VePWDR_Cnt_HVUnderVoltFailSmplCnt >=
         KePWDR_Cnt_HVUnderVoltFailureSmplCntLmt));

    /* Switch: '<S448>/Switch1' incorporates:
     *  Constant: '<S443>/Constant Value'
     *  DataStoreWrite: '<S362>/Data Store Write5'
     *  Switch: '<S447>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMF = 0U;
    }
    else
    {
        if (VePWDR_b_HVUnderVoltPassStat)
        {
            /* MinMax: '<S443>/Minimum2' incorporates:
             *  DataStoreRead: '<S362>/Data Store Read5'
             *  Switch: '<S447>/Switch1'
             */
            if (VePWDR_Cnt_HVUnderVoltFailCnt >
                    PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMF)
            {
                /* DataStoreWrite: '<S362>/Data Store Write5' incorporates:
                 *  Switch: '<S447>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMF =
                    VePWDR_Cnt_HVUnderVoltFailCnt;
            }

            /* End of MinMax: '<S443>/Minimum2' */
        }
    }

    /* End of Switch: '<S448>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S430>/Signal Latch On With Reset' */
    /* Logic: '<S442>/OR1' incorporates:
     *  Logic: '<S430>/NOT4'
     *  Logic: '<S442>/NOT'
     *  Logic: '<S442>/OR'
     *  UnitDelay: '<S442>/Unit Delay'
     */
    rtb_AND = ((VePWDR_b_HVUnderVoltFltStat) || ((rtb_Logical12_d &&
                 (!VePWDR_b_HVUnderVoltPassStat)) &&
                (PWDR_ac_DW.UnitDelay_DSTATE_jem)));

    /* Update for UnitDelay: '<S442>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_jem = rtb_AND;

    /* End of Outputs for SubSystem: '<S430>/Signal Latch On With Reset' */

    /* Switch: '<S418>/Switch1' */
    rtb_UnitDelay_oy = (rtb_UnitDelay_oy && rtb_AND);

    /* Outputs for Atomic SubSystem: '<S9>/HV_HVIL_DAP' */
#if Rte_SysCon_Variant_PWDR_2

    /* Outputs for Atomic SubSystem: '<S54>/HV_HVIL_DAP' */
    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead);

    /* RelationalOperator: '<S321>/Relational Operator3' incorporates:
     *  Constant: '<S321>/Constant3'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)rtb_TmpSignalConversionAtVeDM_g) & 64U)
        == 0U);

    /* Outputs for Atomic SubSystem: '<S321>/EdgeFalling1' */
    /* Logic: '<S321>/Logical Operator' incorporates:
     *  Logic: '<S324>/OR1'
     */
    rtb_Logical12_my_tmp = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S321>/EdgeFalling1' */

    /* Logic: '<S321>/Logical12' incorporates:
     *  Constant: '<S314>/Calib'
     *  Constant: '<S321>/Constant1'
     *  Logic: '<S321>/Logical Operator'
     *  Logic: '<S321>/Logical10'
     *  RelationalOperator: '<S321>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S321>/Bitwise Operator3'
     */
    rtb_Logical12_d = ((!KePWDR_b_HVILCkt_LtchEnbl) || (((((uint32)
                           rtb_TmpSignalConversionAtVeDM_g) & 1U) == 0U) ||
                        rtb_Logical12_my_tmp));

    /* Logic: '<S321>/OR7' incorporates:
     *  Constant: '<S312>/Calib'
     *  Logic: '<S65>/Logical9'
     */
    rtb_AND = (rtb_Logical12_d && ((KePWDR_b_EnableFailP0A0A) &&
                rtb_TmpSignalConversionAtVeDF_e));

    /* Logic: '<S65>/Logical' incorporates:
     *  Constant: '<S304>/Constant'
     *  Constant: '<S305>/Constant'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  RelationalOperator: '<S65>/Comparison4'
     *  RelationalOperator: '<S65>/Comparison5'
     *  SignalConversion generated from: '<S1>/VeOBCR_e_ChargingLevel'
     */
    rtb_Logical_e = ((CeOBCR_e_ChargingLvlDefault != ((uint32)
                       rtb_TmpSignalConversionAtVeOB_k)) && (((uint32)tmpRead) ==
                      CeOBCR_e_ChargingSts_Charging));

    /* If: '<S65>/If' incorporates:
     *  Constant: '<S306>/Calib'
     */
    if (!HePWDR_b_HVIL_Config_TwoSignals)
    {
        /* Outputs for IfAction SubSystem: '<S65>/Standard' incorporates:
         *  ActionPort: '<S318>/Action Port'
         */
        /* Merge: '<S65>/Merge' incorporates:
         *  Constant: '<S341>/Constant'
         *  RelationalOperator: '<S318>/Comparison1'
         */
        rtb_Merge = (((uint32)rtb_TmpSignalConversionAtVeHV_g) ==
                     CeHVTR_e_IntrlkNotSourced);

        /* UnitDelay: '<S303>/Unit Delay' incorporates:
         *  Constant: '<S339>/Constant'
         *  RelationalOperator: '<S318>/Comparison2'
         */
        rtb_UnitDelay_m1 = (((uint32)rtb_TmpSignalConversionAtVeHV_g) ==
                            CeHVTR_e_IntrlkPassed);

        /* UnitDelay: '<S322>/Unit Delay' incorporates:
         *  Constant: '<S340>/Constant'
         *  RelationalOperator: '<S318>/Comparison3'
         */
        rtb_UnitDelay_co = (((uint32)rtb_TmpSignalConversionAtVeHV_g) ==
                            CeHVTR_e_IntrlkFailed);

        /* End of Outputs for SubSystem: '<S65>/Standard' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S65>/VFCoreBEV' incorporates:
         *  ActionPort: '<S320>/Action Port'
         */
        /* UnitDelay: '<S303>/Unit Delay' incorporates:
         *  Constant: '<S342>/Constant'
         *  Constant: '<S344>/Constant'
         *  Logic: '<S320>/Logical'
         *  RelationalOperator: '<S320>/Comparison2'
         *  RelationalOperator: '<S320>/Comparison3'
         */
        rtb_UnitDelay_m1 = ((((uint32)rtb_TmpSignalConversionAtVeHV_g) ==
                             CeHVTR_e_IntrlkPassed) && (((uint32)
                              rtb_TmpSignalConversionAtVeHV_o) ==
                             CeBPCR_e_HVBatIntrlkPass));

        /* UnitDelay: '<S322>/Unit Delay' incorporates:
         *  Constant: '<S346>/Constant'
         *  Constant: '<S347>/Constant'
         *  Logic: '<S320>/Logical1'
         *  RelationalOperator: '<S320>/Comparison5'
         *  RelationalOperator: '<S320>/Comparison6'
         */
        rtb_UnitDelay_co = ((((uint32)rtb_TmpSignalConversionAtVeHV_g) ==
                             CeHVTR_e_IntrlkFailed) || (((uint32)
                              rtb_TmpSignalConversionAtVeHV_o) ==
                             CeBPCR_e_HVBatIntrlkFail));

        /* Merge: '<S65>/Merge' incorporates:
         *  Constant: '<S343>/Constant'
         *  Constant: '<S345>/Constant'
         *  Logic: '<S320>/Logical6'
         *  RelationalOperator: '<S320>/Comparison1'
         *  RelationalOperator: '<S320>/Comparison4'
         */
        rtb_Merge = ((((uint32)rtb_TmpSignalConversionAtVeHV_g) ==
                      CeHVTR_e_IntrlkNotSourced) || (((uint32)
                       rtb_TmpSignalConversionAtVeHV_o) ==
                      CeBPCR_e_HVBatIntrlkSNA));

        /* End of Outputs for SubSystem: '<S65>/VFCoreBEV' */
    }

    /* End of If: '<S65>/If' */

    /* Outputs for Atomic SubSystem: '<S65>/Stop Watch Reset Enabled' */
    /* Switch: '<S319>/Switch1' incorporates:
     *  Switch: '<S319>/Switch2'
     */
    if (rtb_Merge)
    {
        /* Switch: '<S319>/Switch1' incorporates:
         *  Constant: '<S319>/Constant Value2'
         */
        rtb_Switch1_jf = 0.0F;
    }
    else if (rtb_Logical_e)
    {
        /* Switch: '<S319>/Switch2' incorporates:
         *  Constant: '<S307>/Calib'
         *  Sum: '<S319>/Subtraction'
         *  Switch: '<S319>/Switch1'
         *  UnitDelay: '<S319>/Unit Delay'
         */
        rtb_Switch1_jf = HePWDR_t_MedTEB + PWDR_ac_DW.UnitDelay_DSTATE_j;
    }
    else
    {
        /* Switch: '<S319>/Switch1' incorporates:
         *  Switch: '<S319>/Switch2'
         *  UnitDelay: '<S319>/Unit Delay'
         */
        rtb_Switch1_jf = PWDR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S319>/Switch1' */

    /* Update for UnitDelay: '<S319>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_jf;

    /* End of Outputs for SubSystem: '<S65>/Stop Watch Reset Enabled' */

    /* Logic: '<S65>/Logical3' incorporates:
     *  Constant: '<S311>/Calib'
     *  Constant: '<S315>/Calib'
     *  RelationalOperator: '<S65>/Comparison2'
     */
    rtb_Merge = ((KePWDR_b_DsblChrgDlyHVIL) || (rtb_Switch1_jf >=
                  KePWDR_t_TimeWaitUpdateHVIL));

    /* Logic: '<S65>/Logical4' */
    rtb_Logical_e = !rtb_Logical_e;

    /* Logic: '<S65>/Logical8' incorporates:
     *  Logic: '<S65>/Logical2'
     *  Logic: '<S65>/Logical7'
     */
    VePWDR_b_P0A0ATestFailed = ((rtb_Merge && rtb_UnitDelay_co) ||
        (rtb_UnitDelay_co && rtb_Logical_e));

    /* Outputs for Atomic SubSystem: '<S321>/EdgeFalling1' */
    /* Logic: '<S324>/AND' incorporates:
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_UnitDelay_co = (rtb_Logical12_my_tmp && (PWDR_ac_DW.UnitDelay_DSTATE_f3));

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_f3 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S321>/EdgeFalling1' */

    /* Logic: '<S321>/OR6' incorporates:
     *  Logic: '<S317>/NOT4'
     *  Logic: '<S321>/OR2'
     */
    rtb_TmpSignalConversionAtVeDF_g = ((rtb_TmpSignalConversionAtVeDF_g ||
        (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)) || rtb_UnitDelay_co);

    /* Logic: '<S322>/Fail Counter Reset' incorporates:
     *  Logic: '<S321>/OR4'
     *  UnitDelay: '<S321>/Unit Delay'
     *  UnitDelay: '<S322>/Unit Delay'
     *  UnitDelay: '<S322>/Unit Delay1'
     */
    rtb_RelationalOperator3 = (((rtb_TmpSignalConversionAtVeDF_g ||
        (PWDR_ac_DW.UnitDelay_DSTATE_kx)) || (PWDR_ac_DW.UnitDelay_DSTATE_gm)) ||
        (PWDR_ac_DW.UnitDelay1_DSTATE_ii));

    /* Outputs for Atomic SubSystem: '<S322>/Counter Reset  Enabled ' */
    /* Switch: '<S330>/Switch1' incorporates:
     *  Logic: '<S322>/NOT6'
     *  Switch: '<S330>/Switch2'
     */
    if (rtb_RelationalOperator3)
    {
        /* Switch: '<S330>/Switch1' incorporates:
         *  Constant: '<S330>/Constant Value2'
         */
        VePWDR_Cnt_HVILCkt_FailCntr = 0U;
    }
    else if (rtb_AND && (VePWDR_b_P0A0ATestFailed))
    {
        /* Switch: '<S330>/Switch2' incorporates:
         *  Constant: '<S330>/Constant Value1'
         *  Sum: '<S330>/Subtraction'
         *  Switch: '<S330>/Switch1'
         *  UnitDelay: '<S330>/Unit Delay'
         */
        VePWDR_Cnt_HVILCkt_FailCntr = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_jk) + 1U);
    }
    else
    {
        /* Switch: '<S330>/Switch1' incorporates:
         *  Switch: '<S330>/Switch2'
         *  UnitDelay: '<S330>/Unit Delay'
         */
        VePWDR_Cnt_HVILCkt_FailCntr = PWDR_ac_DW.UnitDelay_DSTATE_jk;
    }

    /* End of Switch: '<S330>/Switch1' */

    /* Update for UnitDelay: '<S330>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_jk = VePWDR_Cnt_HVILCkt_FailCntr;

    /* End of Outputs for SubSystem: '<S322>/Counter Reset  Enabled ' */

    /* Logic: '<S321>/OR1' incorporates:
     *  Constant: '<S313>/Calib'
     *  Logic: '<S65>/Logical10'
     */
    rtb_Logical12_d = (rtb_Logical12_d && (rtb_TmpSignalConversionAtVeDF_e &&
                        (KePWDR_b_EnablePassP0A0A)));

    /* Logic: '<S65>/Logical6' incorporates:
     *  Logic: '<S65>/Logical1'
     *  Logic: '<S65>/Logical5'
     */
    VePWDR_b_P0A0ATestPassed = ((rtb_Logical_e && rtb_UnitDelay_m1) ||
        (rtb_UnitDelay_m1 && rtb_Merge));

    /* Logic: '<S323>/Fail Counter Reset' incorporates:
     *  Logic: '<S321>/OR5'
     *  UnitDelay: '<S321>/Unit Delay2'
     *  UnitDelay: '<S323>/Unit Delay'
     *  UnitDelay: '<S323>/Unit Delay1'
     */
    rtb_Logical_e = (((rtb_TmpSignalConversionAtVeDF_g ||
                       (PWDR_ac_DW.UnitDelay2_DSTATE_c)) ||
                      (PWDR_ac_DW.UnitDelay_DSTATE_h0)) ||
                     (PWDR_ac_DW.UnitDelay1_DSTATE_ps));

    /* Outputs for Atomic SubSystem: '<S323>/Counter Reset  Enabled ' */
    /* Switch: '<S332>/Switch1' incorporates:
     *  Logic: '<S323>/NOT6'
     *  Switch: '<S332>/Switch2'
     */
    if (rtb_Logical_e)
    {
        /* Switch: '<S332>/Switch1' incorporates:
         *  Constant: '<S332>/Constant Value2'
         */
        VePWDR_Cnt_HVILCkt_PassCntr = 0U;
    }
    else if (rtb_Logical12_d && (VePWDR_b_P0A0ATestPassed))
    {
        /* Switch: '<S332>/Switch2' incorporates:
         *  Constant: '<S332>/Constant Value1'
         *  Sum: '<S332>/Subtraction'
         *  Switch: '<S332>/Switch1'
         *  UnitDelay: '<S332>/Unit Delay'
         */
        VePWDR_Cnt_HVILCkt_PassCntr = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_df) + 1U);
    }
    else
    {
        /* Switch: '<S332>/Switch1' incorporates:
         *  Switch: '<S332>/Switch2'
         *  UnitDelay: '<S332>/Unit Delay'
         */
        VePWDR_Cnt_HVILCkt_PassCntr = PWDR_ac_DW.UnitDelay_DSTATE_df;
    }

    /* End of Switch: '<S332>/Switch1' */

    /* Update for UnitDelay: '<S332>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_df = VePWDR_Cnt_HVILCkt_PassCntr;

    /* End of Outputs for SubSystem: '<S323>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S323>/Greater Than or Equal ' incorporates:
     *  Constant: '<S309>/Calib'
     */
    rtb_UnitDelay_m1 = (VePWDR_Cnt_HVILCkt_PassCntr >= KePWDR_Cnt_PassLmtIntrlck);

    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S329>/Constant Value'
     *  DataStoreWrite: '<S65>/Data Store Write3'
     *  Switch: '<S337>/Switch1'
     */
    if (PWDR_ac_B.TmpSignalConversionAtVeDFIR_b_P)
    {
        PWDR_ac_DW.NePWDR_Cnt_HVILCkt_MFOP = 0U;
    }
    else
    {
        if (rtb_UnitDelay_m1)
        {
            /* MinMax: '<S329>/Minimum2' incorporates:
             *  DataStoreRead: '<S65>/Data Store Read3'
             *  Switch: '<S337>/Switch1'
             */
            if (VePWDR_Cnt_HVILCkt_FailCntr > PWDR_ac_DW.NePWDR_Cnt_HVILCkt_MFOP)
            {
                /* DataStoreWrite: '<S65>/Data Store Write3' incorporates:
                 *  Switch: '<S337>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_HVILCkt_MFOP = VePWDR_Cnt_HVILCkt_FailCntr;
            }

            /* End of MinMax: '<S329>/Minimum2' */
        }
    }

    /* End of Switch: '<S338>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S322>/Counter Reset  Enabled 1' */
    /* Switch: '<S331>/Switch1' incorporates:
     *  Switch: '<S331>/Switch2'
     */
    if (rtb_RelationalOperator3)
    {
        /* Switch: '<S331>/Switch1' incorporates:
         *  Constant: '<S331>/Constant Value2'
         */
        VePWDR_Cnt_HVILCkt_SmplCntr = 0U;
    }
    else if (rtb_AND)
    {
        /* Switch: '<S331>/Switch2' incorporates:
         *  Constant: '<S331>/Constant Value1'
         *  Sum: '<S331>/Subtraction'
         *  Switch: '<S331>/Switch1'
         *  UnitDelay: '<S331>/Unit Delay'
         */
        VePWDR_Cnt_HVILCkt_SmplCntr = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_dz) + 1U);
    }
    else
    {
        /* Switch: '<S331>/Switch1' incorporates:
         *  Switch: '<S331>/Switch2'
         *  UnitDelay: '<S331>/Unit Delay'
         */
        VePWDR_Cnt_HVILCkt_SmplCntr = PWDR_ac_DW.UnitDelay_DSTATE_dz;
    }

    /* End of Switch: '<S331>/Switch1' */

    /* Update for UnitDelay: '<S331>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_dz = VePWDR_Cnt_HVILCkt_SmplCntr;

    /* End of Outputs for SubSystem: '<S322>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S322>/Greater Than or Equal ' incorporates:
     *  Constant: '<S308>/Calib'
     */
    rtb_AND = (VePWDR_Cnt_HVILCkt_FailCntr >= KePWDR_Cnt_FailLmtIntrlck);

    /* Logic: '<S322>/NOT5' incorporates:
     *  Constant: '<S310>/Calib'
     *  Logic: '<S322>/NOT3'
     *  RelationalOperator: '<S322>/Less Than  or Equal'
     */
    rtb_Merge = ((VePWDR_Cnt_HVILCkt_SmplCntr >= KePWDR_Cnt_SmplLmtIntrlck) && (
                  !rtb_AND));

    /* Outputs for Atomic SubSystem: '<S323>/Counter Reset  Enabled 1' */
    /* Switch: '<S333>/Switch1' incorporates:
     *  Switch: '<S333>/Switch2'
     */
    if (rtb_Logical_e)
    {
        /* Switch: '<S333>/Switch1' incorporates:
         *  Constant: '<S333>/Constant Value2'
         */
        rtb_Switch1_ni = 0U;
    }
    else if (rtb_Logical12_d)
    {
        /* Switch: '<S333>/Switch2' incorporates:
         *  Constant: '<S333>/Constant Value1'
         *  Sum: '<S333>/Subtraction'
         *  Switch: '<S333>/Switch1'
         *  UnitDelay: '<S333>/Unit Delay'
         */
        rtb_Switch1_ni = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_ah) + 1U);
    }
    else
    {
        /* Switch: '<S333>/Switch1' incorporates:
         *  Switch: '<S333>/Switch2'
         *  UnitDelay: '<S333>/Unit Delay'
         */
        rtb_Switch1_ni = PWDR_ac_DW.UnitDelay_DSTATE_ah;
    }

    /* End of Switch: '<S333>/Switch1' */

    /* Update for UnitDelay: '<S333>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ah = rtb_Switch1_ni;

    /* End of Outputs for SubSystem: '<S323>/Counter Reset  Enabled 1' */

    /* Logic: '<S323>/NOT5' incorporates:
     *  Constant: '<S310>/Calib'
     *  Logic: '<S323>/NOT3'
     *  RelationalOperator: '<S323>/Less Than  or Equal'
     */
    rtb_Logical12_d = ((rtb_Switch1_ni >= KePWDR_Cnt_SmplLmtIntrlck) &&
                       (!rtb_UnitDelay_m1));

    /* Outputs for Enabled SubSystem: '<S321>/Fail' */
    PWDR_ac_Fail(rtb_AND, &PWDR_ac_B.VariantMergeForOutportFaultSts_);

    /* End of Outputs for SubSystem: '<S321>/Fail' */

    /* Outputs for Enabled SubSystem: '<S321>/Init' */
    PWDR_ac_Init_a(rtb_TmpSignalConversionAtVeDF_g,
                   &PWDR_ac_B.VariantMergeForOutportFaultSts_);

    /* End of Outputs for SubSystem: '<S321>/Init' */

    /* Outputs for Enabled SubSystem: '<S321>/Pass' */
    PWDR_ac_Pass(rtb_UnitDelay_m1, &PWDR_ac_B.VariantMergeForOutportFaultSts_);

    /* End of Outputs for SubSystem: '<S321>/Pass' */

    /* UnitDelay: '<S56>/Unit Delay1' */
    rtb_TmpSignalConversionAtVeDF_g = PWDR_ac_DW.UnitDelay1_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S56>/DAPFA_OpenCntctr' */
#if Rte_SysCon_Variant_PWDR_3

    /* Outputs for Atomic SubSystem: '<S59>/DAPCounters' */
    /* VariantMerge generated from: '<S59>/Out1' incorporates:
     *  Inport: '<S66>/DAPFAOpenCntctrEEPROM'
     */
    rtb_DAPFAOpenCntctrEEPROM_write = rtb_TmpSignalConversionAtDAPFAO;

    /* End of Outputs for SubSystem: '<S59>/DAPCounters' */
    /* End of Outputs for SubSystem: '<S56>/DAPFA_OpenCntctr' */
#else

    /* Outputs for Atomic SubSystem: '<S59>/No_DAPCounters' */
    /* VariantMerge generated from: '<S59>/Out1' incorporates:
     *  Logic: '<S67>/Logical2'
     */
    rtb_DAPFAOpenCntctrEEPROM_write = (rtb_TmpSignalConversionAtDAPFAO ||
        rtb_TmpSignalConversionAtVeDF_g);

    /* End of Outputs for SubSystem: '<S59>/No_DAPCounters' */
#endif

    /* VariantMerge generated from: '<S54>/DAPFA_OpenCntctrOut' incorporates:
     *  Logic: '<S58>/AND'
     */
    PWDR_ac_B.VePWDR_b_DAPFA_OpenCntctr_Out = rtb_DAPFAOpenCntctrEEPROM_write;

    /* Logic: '<S56>/Logical6' incorporates:
     *  Constant: '<S62>/Constant'
     *  RelationalOperator: '<S56>/Equal2'
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
    VePWDR_b_DAPFA_Latched = (rtb_DAPFAOpenCntctrEEPROM_write &&
        (CeHVTR_e_Closed != ((uint32)rtb_TmpSignalConversionAtVeB_nf)));

    /* RelationalOperator: '<S64>/Equal1' incorporates:
     *  Constant: '<S294>/Calib'
     */
    rtb_TmpSignalConversionAtDAPFAO = (rtb_TmpSignalConversionAtVeH_ka >=
        KePWDR_U_DAPEnblVolt);

    /* Outputs for Atomic SubSystem: '<S64>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S302>/EdgeRising' */
    /* Logic: '<S303>/AND' incorporates:
     *  Logic: '<S303>/OR1'
     *  UnitDelay: '<S303>/Unit Delay'
     */
    rtb_DAPFAOpenCntctrEEPROM_write = (rtb_TmpSignalConversionAtDAPFAO &&
        (!PWDR_ac_DW.UnitDelay_DSTATE_mc));

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_mc = rtb_TmpSignalConversionAtDAPFAO;

    /* End of Outputs for SubSystem: '<S302>/EdgeRising' */

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S293>/Calib'
     *  Constant: '<S302>/Constant Value'
     *  Logic: '<S302>/OR'
     *  Logic: '<S302>/OR1'
     *  MinMax: '<S302>/Minimum'
     *  Sum: '<S302>/Summation'
     *  UnitDelay: '<S302>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtDAPFAO) || rtb_DAPFAOpenCntctrEEPROM_write)
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S302>/Constant Value1'
         */
        rtb_Switch1_ni = 0U;
    }
    else if (KePWDR_Cnt_DAPInitDelay < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_dk) + 1U)))
    {
        /* MinMax: '<S302>/Minimum' incorporates:
         *  Constant: '<S293>/Calib'
         *  Switch: '<S302>/Switch1'
         */
        rtb_Switch1_ni = KePWDR_Cnt_DAPInitDelay;
    }
    else
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S302>/Constant Value'
         *  MinMax: '<S302>/Minimum'
         *  Sum: '<S302>/Summation'
         *  UnitDelay: '<S302>/Unit Delay'
         */
        rtb_Switch1_ni = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_dk) + 1U);
    }

    /* End of Switch: '<S302>/Switch1' */
    /* End of Outputs for SubSystem: '<S64>/Turn On Delay Sample' */

    /* Inport: '<Root>/VeHTIR_U_HVC_Htr4_HV_VltgAct' */
    (void)Rte_Read_VeHTIR_U_HVC_Htr4_HV_VltgAct_Value(&tmpRead_4);

    /* Inport: '<Root>/VeHTIR_U_HVC_Htr2_HV_VltgAct' */
    (void)Rte_Read_VeHTIR_U_HVC_Htr2_HV_VltgAct_Value(&rtb_Sum4);

    /* Inport: '<Root>/VeHTIR_U_HVC_Htr_HV_VltgAct' */
    (void)Rte_Read_VeHTIR_U_HVC_Htr_HV_VltgAct_Value(&rtb_Sum3);

    /* Inport: '<Root>/VeTAIR_U_CompHVInp' */
    (void)Rte_Read_VeTAIR_U_CompHVInp_Value(&rtb_Sum2_l);

    /* Inport: '<Root>/VeIDCR_U_APM_HV_Voltage' */
    (void)Rte_Read_VeIDCR_U_APM_HV_Voltage_Value(&tmpRead_3);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrStatFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrStatFA_Value(&tmpRead_2);

    /* Outputs for Atomic SubSystem: '<S64>/Turn On Delay Sample' */
    /* Logic: '<S302>/AND' incorporates:
     *  Constant: '<S293>/Calib'
     *  RelationalOperator: '<S302>/Greater  Than'
     */
    rtb_TmpSignalConversionAtDAPFAO = (rtb_TmpSignalConversionAtDAPFAO &&
        (rtb_Switch1_ni >= KePWDR_Cnt_DAPInitDelay));

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_dk = rtb_Switch1_ni;

    /* End of Outputs for SubSystem: '<S64>/Turn On Delay Sample' */

    /* Logic: '<S64>/Logical16' incorporates:
     *  Constant: '<S287>/Constant'
     *  Logic: '<S64>/Logical24'
     *  Logic: '<S64>/Logical4'
     *  RelationalOperator: '<S64>/Equal'
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
    VePWDR_b_DAPdiagEnbl = ((((rtb_TmpSignalConversionAtDAPFAO &&
        (CeHVTR_e_Closed == ((uint32)rtb_TmpSignalConversionAtVeB_nf))) &&
        (!tmpRead_2)) && (!rtb_TmpSignalConversionAtVeHV_m)) &&
                            rtb_TmpSignalConversionAtVeDF_e);

    /* Sum: '<S64>/Sum1' */
    rtb_Switch1_jf = tmpRead_3 - rtb_TmpSignalConversionAtVeH_ka;

    /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval2' */
    /* Logic: '<S64>/Logical21' incorporates:
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Logic: '<S283>/Logical Operator'
     *  RelationalOperator: '<S283>/Relatonal Operator'
     *  RelationalOperator: '<S283>/Relatonal Operator1'
     */
    PWDR_ac_B.VePWDR_b_APM_HV_VoltChkFail_Out = ((rtb_Switch1_jf <
        KePWDR_U_HVdeltaLowLim) || (rtb_Switch1_jf > KePWDR_U_HVdeltaUpLim));

    /* End of Outputs for SubSystem: '<S64>/ClosedInterval2' */

    /* Sum: '<S64>/Sum2' */
    rtb_Sum2_l -= rtb_TmpSignalConversionAtVeH_ka;

    /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval1' */
    /* Logic: '<S64>/Logical22' incorporates:
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Logic: '<S282>/Logical Operator'
     *  RelationalOperator: '<S282>/Relatonal Operator'
     *  RelationalOperator: '<S282>/Relatonal Operator1'
     */
    PWDR_ac_B.VePWDR_b_EAC_HV_VoltChkFail_Out = ((rtb_Sum2_l <
        KePWDR_U_HVdeltaLowLim) || (rtb_Sum2_l > KePWDR_U_HVdeltaUpLim));

    /* End of Outputs for SubSystem: '<S64>/ClosedInterval1' */

    /* Sum: '<S64>/Sum3' */
    rtb_Sum3 -= rtb_TmpSignalConversionAtVeH_ka;

    /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval4' */
    /* Logic: '<S64>/Logical23' incorporates:
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Logic: '<S285>/Logical Operator'
     *  RelationalOperator: '<S285>/Relatonal Operator'
     *  RelationalOperator: '<S285>/Relatonal Operator1'
     */
    PWDR_ac_B.VePWDR_b_Htr_HV_VoltChkFail_Out = ((rtb_Sum3 <
        KePWDR_U_HVdeltaLowLim) || (rtb_Sum3 > KePWDR_U_HVdeltaUpLim));

    /* End of Outputs for SubSystem: '<S64>/ClosedInterval4' */

    /* Sum: '<S64>/Sum4' */
    rtb_Sum4 -= rtb_TmpSignalConversionAtVeH_ka;

    /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval3' */
    /* Logic: '<S64>/Logical9' incorporates:
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Logic: '<S284>/Logical Operator'
     *  RelationalOperator: '<S284>/Relatonal Operator'
     *  RelationalOperator: '<S284>/Relatonal Operator1'
     */
    PWDR_ac_B.VePWDR_b_Htr2_HV_VoltChkFail_Ou = ((rtb_Sum4 <
        KePWDR_U_HVdeltaLowLim) || (rtb_Sum4 > KePWDR_U_HVdeltaUpLim));

    /* End of Outputs for SubSystem: '<S64>/ClosedInterval3' */

    /* Sum: '<S64>/Sum6' */
    rtb_TmpSignalConversionAtVeH_ka = tmpRead_4 -
        rtb_TmpSignalConversionAtVeH_ka;

    /* Outputs for Atomic SubSystem: '<S64>/ClosedInterval6' */
    /* Logic: '<S64>/Logical26' incorporates:
     *  Constant: '<S295>/Calib'
     *  Constant: '<S296>/Calib'
     *  Logic: '<S286>/Logical Operator'
     *  RelationalOperator: '<S286>/Relatonal Operator'
     *  RelationalOperator: '<S286>/Relatonal Operator1'
     */
    PWDR_ac_B.VePWDR_b_Htr4_HV_VoltChkFail_Ou =
        ((rtb_TmpSignalConversionAtVeH_ka < KePWDR_U_HVdeltaLowLim) ||
         (rtb_TmpSignalConversionAtVeH_ka > KePWDR_U_HVdeltaUpLim));

    /* End of Outputs for SubSystem: '<S64>/ClosedInterval6' */

    /* Logic: '<S64>/Logical2' incorporates:
     *  Logic: '<S64>/Logical20'
     */
    rtb_TmpSignalConversionAtVeHV_m = !rtb_TmpSignalConversionAtVeIDCR;

    /* Logic: '<S64>/Logical6' incorporates:
     *  Constant: '<S297>/Calib'
     *  Logic: '<S64>/Logical2'
     */
    VePWDR_b_APM_HV_Valid = (rtb_TmpSignalConversionAtVeHV_m &&
        (KePWDR_b_APMAvailable));

    /* Logic: '<S64>/Logical1' incorporates:
     *  Logic: '<S64>/Logical13'
     */
    rtb_TmpSignalConversionAtVeTAIR = !rtb_TmpSignalConversionAtVeTAIR;

    /* Logic: '<S64>/Logical3' incorporates:
     *  Constant: '<S298>/Calib'
     *  Logic: '<S64>/Logical1'
     */
    VePWDR_b_EAC_HV_Valid = (rtb_TmpSignalConversionAtVeTAIR &&
        (KePWDR_b_EACAvailable));

    /* Logic: '<S64>/Logical7' incorporates:
     *  Logic: '<S64>/Logical28'
     */
    rtb_TmpSignalConversionAtVeHTIR = !rtb_TmpSignalConversionAtVeHTIR;

    /* Logic: '<S64>/Logical8' incorporates:
     *  Constant: '<S301>/Calib'
     *  Logic: '<S64>/Logical7'
     */
    VePWDR_b_Htr_HV_Valid = (rtb_TmpSignalConversionAtVeHTIR &&
        (KePWDR_b_HtrAvailable));

    /* Logic: '<S64>/Logical11' incorporates:
     *  Logic: '<S64>/Logical17'
     */
    rtb_TmpSignalConversionAtVeHT_l = !rtb_TmpSignalConversionAtVeHT_l;

    /* Logic: '<S64>/Logical10' incorporates:
     *  Constant: '<S299>/Calib'
     *  Logic: '<S64>/Logical11'
     */
    VePWDR_b_Htr2_HV_Valid = (rtb_TmpSignalConversionAtVeHT_l &&
        (KePWDR_b_Htr2Available));

    /* Logic: '<S64>/Logical14' incorporates:
     *  Logic: '<S64>/Logical19'
     */
    rtb_TmpSignalConversionAtVeHT_h = !rtb_TmpSignalConversionAtVeHT_h;

    /* Logic: '<S64>/Logical12' incorporates:
     *  Constant: '<S300>/Calib'
     *  Logic: '<S64>/Logical14'
     */
    VePWDR_b_Htr4_HV_Valid = (rtb_TmpSignalConversionAtVeHT_h &&
        (KePWDR_b_Htr4Available));

    /* If: '<S56>/If' */
    if (VePWDR_b_DAPFA_Latched)
    {
        /* Outputs for IfAction SubSystem: '<S56>/DAPFA_OpnCntctr' incorporates:
         *  ActionPort: '<S60>/Action Port'
         */
        /* SignalConversion generated from: '<S60>/DAPFA_OpenCntctr' incorporates:
         *  Constant: '<S69>/Constant'
         *  VariantMerge generated from: '<S54>/FaultSts_OpnHVCbl'
         */
        PWDR_ac_B.VariantMergeForOutportFaultSt_d = CeDFIB_e_Fail;

        /* Outputs for Enabled SubSystem: '<S60>/EEPROM_Update' incorporates:
         *  EnablePort: '<S68>/Enable'
         */
        if (rtb_TmpSignalConversionAtVeDF_g)
        {
            /* DataStoreWrite: '<S68>/Data Store Write3' incorporates:
             *  UnitDelay: '<S56>/Unit Delay2'
             */
            EePWDR_y_DID_B524 = PWDR_ac_DW.UnitDelay2_DSTATE;

            /* DataStoreWrite: '<S68>/Data Store Write2' incorporates:
             *  Constant: '<S68>/TRUE Constant2'
             */
            EePWDR_b_DAPFA_OpenCntctr = true;
        }

        /* End of Outputs for SubSystem: '<S60>/EEPROM_Update' */
        /* End of Outputs for SubSystem: '<S56>/DAPFA_OpnCntctr' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S56>/DAP_Flt_Det' incorporates:
         *  ActionPort: '<S61>/Action Port'
         */
        PWDR_ac_DAP_Flt_Det();

        /* End of Outputs for SubSystem: '<S56>/DAP_Flt_Det' */
    }

    /* End of If: '<S56>/If' */

    /* Logic: '<S64>/Logical27' incorporates:
     *  Constant: '<S288>/Calib'
     */
    VePWDR_b_FuseA_Valid = (rtb_TmpSignalConversionAtVeHV_m &&
                            (HePWDR_b_FuseA_Available));

    /* Logic: '<S64>/Logical25' incorporates:
     *  Constant: '<S289>/Calib'
     */
    VePWDR_b_FuseB_Valid = (rtb_TmpSignalConversionAtVeTAIR &&
                            (HePWDR_b_FuseB_Available));

    /* Logic: '<S64>/Logical29' incorporates:
     *  Constant: '<S290>/Calib'
     */
    VePWDR_b_FuseC_Valid = (rtb_TmpSignalConversionAtVeHTIR &&
                            (HePWDR_b_FuseC_Available));

    /* Logic: '<S64>/Logical15' incorporates:
     *  Constant: '<S291>/Calib'
     */
    VePWDR_b_FuseD_Valid = (rtb_TmpSignalConversionAtVeHT_l &&
                            (HePWDR_b_FuseD_Available));

    /* Logic: '<S64>/Logical18' incorporates:
     *  Constant: '<S292>/Calib'
     */
    VePWDR_b_FuseE_Valid = (rtb_TmpSignalConversionAtVeHT_h &&
                            (HePWDR_b_FuseE_Available));

    /* Outputs for Atomic SubSystem: '<S56>/HVFuse_Flt_Det' */
#if Rte_SysCon_Variant_PWDR_1

    /* Outputs for Atomic SubSystem: '<S63>/HVFuse_Flt_Det' */
    PWDR_ac_HVFuse_Flt_Det();

    /* End of Outputs for SubSystem: '<S63>/HVFuse_Flt_Det' */
#else

    /* Outputs for Atomic SubSystem: '<S63>/HVFuse_Flt_Det_STUB' */
    /* Constant: '<S277>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseA_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S278>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseB_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S279>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseC_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S280>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseD_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S281>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseE_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S276>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_h = CeDFIB_e_Init;

    /* Constant: '<S272>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_i = CeDFIB_e_Init;

    /* Constant: '<S273>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_o = CeDFIB_e_Init;

    /* Constant: '<S274>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD'
     */
    PWDR_ac_B.VariantMergeForOutportFaultS_om = CeDFIB_e_Init;

    /* Constant: '<S275>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_f = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S63>/HVFuse_Flt_Det_STUB' */
#endif

    /* End of Outputs for SubSystem: '<S56>/HVFuse_Flt_Det' */

    /* VariantMerge generated from: '<S54>/HV_VoltTooLow' incorporates:
     *  Logic: '<S64>/Logical5'
     */
    PWDR_ac_B.VePWDR_b_HV_VoltTooLow_Out = !rtb_TmpSignalConversionAtDAPFAO;

    /* Update for UnitDelay: '<S321>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_kx = rtb_UnitDelay_m1;

    /* Update for UnitDelay: '<S322>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_gm = rtb_Merge;

    /* Update for UnitDelay: '<S322>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_ii = rtb_AND;

    /* Update for UnitDelay: '<S321>/Unit Delay2' */
    PWDR_ac_DW.UnitDelay2_DSTATE_c = rtb_AND;

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_h0 = rtb_Logical12_d;

    /* Update for UnitDelay: '<S323>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_ps = rtb_UnitDelay_m1;

    /* Update for UnitDelay: '<S56>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_o = VePWDR_b_DAP_FA;

    /* Update for UnitDelay: '<S56>/Unit Delay2' */
    PWDR_ac_DW.UnitDelay2_DSTATE = VePWDR_y_DID_B524_TestPoint;

    /* End of Outputs for SubSystem: '<S54>/HV_HVIL_DAP' */
    /* End of Outputs for SubSystem: '<S9>/HV_HVIL_DAP' */
#else

    /* Outputs for Atomic SubSystem: '<S54>/HV_Outputs_STUB' */
    /* VariantMerge generated from: '<S54>/DAPFA_OpenCntctrOut' incorporates:
     *  Constant: '<S57>/FALSE Constant1'
     */
    PWDR_ac_B.VePWDR_b_DAPFA_OpenCntctr_Out = false;

    /* VariantMerge generated from: '<S54>/HV_VoltTooLow' incorporates:
     *  Constant: '<S57>/FALSE Constant2'
     */
    PWDR_ac_B.VePWDR_b_HV_VoltTooLow_Out = false;

    /* Constant: '<S57>/FALSE Constant3' */
    PWDR_ac_B.VePWDR_b_APM_HV_VoltChkFail_Out = false;

    /* Constant: '<S57>/FALSE Constant4' */
    PWDR_ac_B.VePWDR_b_EAC_HV_VoltChkFail_Out = false;

    /* Constant: '<S57>/FALSE Constant5' */
    PWDR_ac_B.VePWDR_b_Htr_HV_VoltChkFail_Out = false;

    /* Constant: '<S57>/FALSE Constant6' */
    PWDR_ac_B.VePWDR_b_Htr2_HV_VoltChkFail_Ou = false;

    /* Constant: '<S57>/FALSE Constant7' */
    PWDR_ac_B.VePWDR_b_Htr4_HV_VoltChkFail_Ou = false;

    /* Constant: '<S356>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseA_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S357>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseB_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S358>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseC_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S359>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseD_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseNotSupported;

    /* Constant: '<S355>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseE_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseNotSupported;

    /* VariantMerge generated from: '<S54>/FaultSts_HVILCkt' incorporates:
     *  Constant: '<S352>/Constant'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSts_ = CeDFIB_e_Init;

    /* Constant: '<S348>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_OpnHVCbl'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_d = CeDFIB_e_Init;

    /* Constant: '<S354>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_h = CeDFIB_e_Init;

    /* Constant: '<S349>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_i = CeDFIB_e_Init;

    /* Constant: '<S350>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_o = CeDFIB_e_Init;

    /* Constant: '<S351>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD'
     */
    PWDR_ac_B.VariantMergeForOutportFaultS_om = CeDFIB_e_Init;

    /* Constant: '<S353>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_f = CeDFIB_e_Init;

    /* End of Outputs for SubSystem: '<S54>/HV_Outputs_STUB' */
#endif

    /* Update for UnitDelay: '<S397>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_i = rtb_FailCounterReset_gb;

    /* Update for UnitDelay: '<S397>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_at = rtb_NOT5_m;

    /* Update for UnitDelay: '<S407>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_ne = VePWDR_b_HVOverVoltFltStat;

    /* Update for UnitDelay: '<S407>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_if = VePWDR_b_HVOverVoltPassStat;

    /* Update for UnitDelay: '<S361>/Unit Delay' incorporates:
     *  Merge: '<S361>/Merge'
     */
    PWDR_ac_DW.UnitDelay_DSTATE_fq = VePWDR_e_HVOverVoltFailure;

    /* Update for UnitDelay: '<S431>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_px = rtb_GreaterThan1_n;

    /* Update for UnitDelay: '<S431>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_j4 = rtb_FailCounterReset_h;

    /* Update for UnitDelay: '<S441>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_h = VePWDR_b_HVUnderVoltFltStat;

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_m3 = VePWDR_b_HVUnderVoltPassStat;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HPMR'
     */
#if Rte_SysCon_Variant_PWDR_4

    /* Outputs for Atomic SubSystem: '<S8>/DTC_P0C78_Report' */
    /* Outputs for Atomic SubSystem: '<S11>/DTC_P0C78_Report' */
    /* RelationalOperator: '<S36>/Equal1' incorporates:
     *  Constant: '<S37>/Constant'
     *  SignalConversion generated from: '<S1>/VeHPMR_e_HybSysSt'
     */
    rtb_TmpSignalConversionAtVeHV_m = (((uint32)rtb_TmpSignalConversionAtVeHP_g)
        == CeHPMR_e_ENBL_HV_SYS);

    /* Logic: '<S36>/AND7' incorporates:
     *  Logic: '<S36>/AND9'
     *  UnitDelay: '<S36>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeIDCR = ((!rtb_TmpSignalConversionAtVeHV_m) &&
        (PWDR_ac_DW.UnitDelay1_DSTATE_l));

    /* Logic: '<S36>/AND6' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S41>/Calib'
     *  RelationalOperator: '<S36>/Equal2'
     *  SignalConversion generated from: '<S1>/VeBPCR_e_HV_BatCntctrStat'
     */
    VePWDR_b_PrchrgTooLong_Fail = (((rtb_TmpSignalConversionAtVeIDCR &&
        rtb_TmpSignalConversionAtVeHP_c) && (((uint32)
        rtb_TmpSignalConversionAtVeB_nf) != CeHVTR_e_PrechrgActv)) &&
        (KePWDR_b_EnablePrechargeDTC_Set));

    /* Outputs for Enabled SubSystem: '<S36>/Event_HB_SysPrchrgTmTooLong_ReportTestFailed_1' incorporates:
     *  EnablePort: '<S39>/Enable'
     */
    if (VePWDR_b_PrchrgTooLong_Fail)
    {
        /* DataStoreWrite: '<S39>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
         *  Constant: '<S42>/Constant'
         */
        PWDR_ac_DW.VePWDR_e_FaultSts_HB_SysPrchrgT = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S36>/Event_HB_SysPrchrgTmTooLong_ReportTestFailed_1' */

    /* Logic: '<S36>/AND5' incorporates:
     *  Constant: '<S41>/Calib'
     *  Logic: '<S36>/AND8'
     */
    VePWDR_b_PrchrgTooLong_Pass = (((KePWDR_b_EnablePrechargeDTC_Set) &&
        (!rtb_TmpSignalConversionAtVeHP_c)) && rtb_TmpSignalConversionAtVeIDCR);

    /* Outputs for Enabled SubSystem: '<S36>/Event_HB_SysPrchrgTmTooLong_ReportTestPassed_2' incorporates:
     *  EnablePort: '<S40>/Enable'
     */
    if (VePWDR_b_PrchrgTooLong_Pass)
    {
        /* DataStoreWrite: '<S40>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
         *  Constant: '<S43>/Constant'
         */
        PWDR_ac_DW.VePWDR_e_FaultSts_HB_SysPrchrgT = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S36>/Event_HB_SysPrchrgTmTooLong_ReportTestPassed_2' */

    /* Update for UnitDelay: '<S36>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_l = rtb_TmpSignalConversionAtVeHV_m;

    /* End of Outputs for SubSystem: '<S11>/DTC_P0C78_Report' */
    /* End of Outputs for SubSystem: '<S8>/DTC_P0C78_Report' */
#endif

#if Rte_SysCon_Variant_PWDR_5

    /* Outputs for Atomic SubSystem: '<S8>/DTC_P1A21_Report' */
    /* Inport: '<Root>/VeHPMR_b_ContactorsClosedThisKey' */
    (void)Rte_Read_VeHPMR_b_ContactorsClosedThisKey_Value(&rtb_Logical_m);

    /* Inport: '<Root>/VeHPMR_b_CntctrsOpenAfterClose' */
    (void)Rte_Read_VeHPMR_b_CntctrsOpenAfterClose_Value(&rtb_OR1_l);

    /* Outputs for Atomic SubSystem: '<S12>/DTC_P1A21_Report' */
    /* Logic: '<S44>/OR1' incorporates:
     *  Constant: '<S49>/Calib'
     */
    rtb_OR1_l = (rtb_OR1_l && (KePWDR_b_EnableCntOpenDTC_Set));

    /* Outputs for Atomic SubSystem: '<S44>/EdgeRising' */
    /* Logic: '<S45>/AND' incorporates:
     *  Logic: '<S45>/OR1'
     *  UnitDelay: '<S45>/Unit Delay'
     */
    VePWDR_b_CntctrSeqIncrt_FailCrit = (rtb_OR1_l &&
        (!PWDR_ac_DW.UnitDelay_DSTATE_p3));

    /* Update for UnitDelay: '<S45>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_p3 = rtb_OR1_l;

    /* End of Outputs for SubSystem: '<S44>/EdgeRising' */

    /* Logic: '<S44>/Logical' incorporates:
     *  Constant: '<S49>/Calib'
     *  Logic: '<S44>/Logical2'
     */
    rtb_Logical_m = (((KePWDR_b_EnableCntOpenDTC_Set) &&
                      (!rtb_TmpSignalConversionAtVeHP_c)) && rtb_Logical_m);

    /* Outputs for Atomic SubSystem: '<S44>/EdgeRising1' */
    /* Logic: '<S46>/AND' incorporates:
     *  Logic: '<S46>/OR1'
     *  UnitDelay: '<S46>/Unit Delay'
     */
    VePWDR_b_CntctrSeqIncrt_PassCrit = (rtb_Logical_m &&
        (!PWDR_ac_DW.UnitDelay_DSTATE_by));

    /* Update for UnitDelay: '<S46>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_by = rtb_Logical_m;

    /* End of Outputs for SubSystem: '<S44>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S44>/Signal Latch On With Reset' */
    /* Logic: '<S50>/OR1' incorporates:
     *  Logic: '<S50>/NOT'
     *  Logic: '<S50>/OR'
     *  UnitDelay: '<S50>/Unit Delay'
     */
    VePWDR_b_CntctrSeqIncrt_Fail = ((VePWDR_b_CntctrSeqIncrt_FailCrit) ||
        ((!VePWDR_b_CntctrSeqIncrt_PassCrit) && (PWDR_ac_DW.UnitDelay_DSTATE_nin)));

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_nin = VePWDR_b_CntctrSeqIncrt_Fail;

    /* End of Outputs for SubSystem: '<S44>/Signal Latch On With Reset' */

    /* Outputs for Enabled SubSystem: '<S44>/Event_HB_CntctrCntrlSeqIncrt_ReportTestFailed_3' incorporates:
     *  EnablePort: '<S47>/Enable'
     */
    if (VePWDR_b_CntctrSeqIncrt_Fail)
    {
        /* DataStoreWrite: '<S47>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
         *  Constant: '<S52>/Constant'
         */
        PWDR_ac_DW.VePWDR_e_FaultSts_HB_CntctrCntr = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S44>/Event_HB_CntctrCntrlSeqIncrt_ReportTestFailed_3' */

    /* Outputs for Atomic SubSystem: '<S44>/Signal Latch On With Reset1' */
    /* Logic: '<S51>/OR1' incorporates:
     *  Logic: '<S51>/NOT'
     *  Logic: '<S51>/OR'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    VePWDR_b_CntctrSeqIncrt_Pass = ((VePWDR_b_CntctrSeqIncrt_PassCrit) ||
        ((!VePWDR_b_CntctrSeqIncrt_FailCrit) && (PWDR_ac_DW.UnitDelay_DSTATE_ni)));

    /* Update for UnitDelay: '<S51>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ni = VePWDR_b_CntctrSeqIncrt_Pass;

    /* End of Outputs for SubSystem: '<S44>/Signal Latch On With Reset1' */

    /* Outputs for Enabled SubSystem: '<S44>/Event_HB_CntctrCntrlSeqIncrt_ReportTestPassed_4' incorporates:
     *  EnablePort: '<S48>/Enable'
     */
    if (VePWDR_b_CntctrSeqIncrt_Pass)
    {
        /* DataStoreWrite: '<S48>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
         *  Constant: '<S53>/Constant'
         */
        PWDR_ac_DW.VePWDR_e_FaultSts_HB_CntctrCntr = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S44>/Event_HB_CntctrCntrlSeqIncrt_ReportTestPassed_4' */
    /* End of Outputs for SubSystem: '<S12>/DTC_P1A21_Report' */
    /* End of Outputs for SubSystem: '<S8>/DTC_P1A21_Report' */
#endif

    /* Outputs for Atomic SubSystem: '<S13>/Stop Watch Reset Enabled' */
    /* Switch: '<S35>/Switch2' incorporates:
     *  Constant: '<S25>/Constant'
     *  Logic: '<S13>/Logical2'
     *  RelationalOperator: '<S13>/Comparison1'
     *  SignalConversion generated from: '<S1>/VeBSWR_e_SPT_State'
     *  Switch: '<S35>/Switch1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeBSWR) != CeINVR_e_Pending_SPT)
    {
        /* Switch: '<S35>/Switch1' incorporates:
         *  Constant: '<S35>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeH_ka = 0.0F;
    }
    else
    {
        /* Switch: '<S35>/Switch1' incorporates:
         *  Constant: '<S31>/Calib'
         *  Sum: '<S35>/Subtraction'
         *  Switch: '<S35>/Switch2'
         *  UnitDelay: '<S35>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeH_ka = HePWDR_t_MedTEB +
            PWDR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S35>/Switch2' */
    /* End of Outputs for SubSystem: '<S13>/Stop Watch Reset Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* Inport: '<Root>/VeHPMR_b_InverterFaultedOut' */
    (void)Rte_Read_VeHPMR_b_InverterFaultedOut_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSSDR_b_DsblPrplsnSysArb_Out' */
    (void)Rte_Read_VeSSDR_b_DsblPrplsnSysArb_Out_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHPMR_b_MCP_SPT_Timeout' */
    (void)Rte_Read_VeHPMR_b_MCP_SPT_Timeout_Value(&tmpRead_a);

    /* Inport: '<Root>/VeINVR_e_MCPB_SPT_State' */
    (void)Rte_Read_VeINVR_e_MCPB_SPT_State_Value(&tmpRead_9);

    /* Inport: '<Root>/VeINVR_e_MCPA_SPT_State' */
    (void)Rte_Read_VeINVR_e_MCPA_SPT_State_Value(&tmpRead_8);

    /* Inport: '<Root>/VeSSDR_b_HVBatRdyTimeOut' */
    (void)Rte_Read_VeSSDR_b_HVBatRdyTimeOut_Value(&tmpRead_7);

    /* Inport: '<Root>/VeBPCR_b_HV_BatCntctrOpenReq' */
    (void)Rte_Read_VeBPCR_b_HV_BatCntctrOpenReq_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSRAR_b_FltShtDwnCmnd' */
    (void)Rte_Read_VeSRAR_b_FltShtDwnCmnd_Value(&tmpRead_5);

    /* Inport: '<Root>/VeESSR_e_HybEngSysActv' */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HPMR'
     */
    /* Outputs for Atomic SubSystem: '<S13>/Stop Watch Reset Enabled' */
    /* Update for UnitDelay: '<S35>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_m = rtb_TmpSignalConversionAtVeH_ka;

    /* End of Outputs for SubSystem: '<S13>/Stop Watch Reset Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_b_APM_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S1>/APM_HV_VoltChkFail'
     */
    (void)Rte_Write_VePWDR_b_APM_HV_VoltChkFail_Value
        (PWDR_ac_B.VePWDR_b_APM_HV_VoltChkFail_Out);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HPMR'
     */
    /* Outport: '<Root>/VePWDR_b_BSW_SPT_FailCond' incorporates:
     *  Constant: '<S24>/Constant'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S32>/Calib'
     *  Logic: '<S13>/Logical'
     *  Logic: '<S13>/Logical1'
     *  RelationalOperator: '<S13>/Comparison'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison4'
     *  SignalConversion generated from: '<S1>/BSW_SPT_FailCond'
     *  SignalConversion generated from: '<S1>/VeBSWR_e_SPT_State'
     *  SignalConversion generated from: '<S1>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Write_VePWDR_b_BSW_SPT_FailCond_Value(((((uint32)
        rtb_TmpSignalConversionAtVeBSWR) == CeINVR_e_Failed_SPT) ||
        (rtb_TmpSignalConversionAtVeH_ka > ((float32)
        Rte_Prm_KeHPMR_t_BSWTimeout_SPT_KeHPMR_t_BSWTimeout_SPT()))) &&
        (((uint32)rtb_TmpSignalConversionAtVeHP_g) == CeHPMR_e_EVAL_HV_ENABLE));

    /* Outport: '<Root>/VePWDR_b_Cntctrs_HV_FailCond' incorporates:
     *  Gain: '<S17>/Gain'
     *  SignalConversion generated from: '<S1>/Cntctrs_HV_FailCond'
     */
    (void)Rte_Write_VePWDR_b_Cntctrs_HV_FailCond_Value
        (rtb_TmpSignalConversionAtVeHP_c);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_b_DAPFA_OpenCntctr' incorporates:
     *  SignalConversion generated from: '<S1>/DAPFA_OpenCntctrOut'
     */
    (void)Rte_Write_VePWDR_b_DAPFA_OpenCntctr_Value
        (PWDR_ac_B.VePWDR_b_DAPFA_OpenCntctr_Out);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EERead_DAPCntrs'
     */
    /* Outport: '<Root>/VePWDR_l_DAP_FA_DistTravld' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read'
     *  SignalConversion generated from: '<S1>/DAP_FA_DistTravld'
     */
    (void)Rte_Write_VePWDR_l_DAP_FA_DistTravld_Value(EePWDR_l_DAP_FA_DistTravld);

    /* Outport: '<Root>/VePWDR_t_DAP_FA_ElapsedTime' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read2'
     *  SignalConversion generated from: '<S1>/DAP_FA_ElapsedTime'
     */
    (void)Rte_Write_VePWDR_t_DAP_FA_ElapsedTime_Value
        (EePWDR_t_DAP_FA_ElapsedTime);

    /* Outport: '<Root>/VePWDR_Cnt_DAP_FA_KeyCylCnt' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read1'
     *  SignalConversion generated from: '<S1>/DAP_FA_KeyCylCnt'
     */
    (void)Rte_Write_VePWDR_Cnt_DAP_FA_KeyCylCnt_Value
        (EePWDR_Cnt_DAP_FA_KeyCylCnt);

    /* Outport: '<Root>/VePWDR_y_DID_B524' incorporates:
     *  DataStoreRead: '<S7>/Data Store Read3'
     *  SignalConversion generated from: '<S1>/DID_B524'
     */
    (void)Rte_Write_VePWDR_y_DID_B524_Value(EePWDR_y_DID_B524);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_b_EAC_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S1>/EAC_HV_VoltChkFail'
     */
    (void)Rte_Write_VePWDR_b_EAC_HV_VoltChkFail_Value
        (PWDR_ac_B.VePWDR_b_EAC_HV_VoltChkFail_Out);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HPMR'
     */
    /* Outport: '<Root>/VePWDR_b_EngCntrlSysDsbld_FailCond' incorporates:
     *  Constant: '<S30>/Constant'
     *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
     *  RelationalOperator: '<S13>/Comparison8'
     *  SignalConversion generated from: '<S1>/EngCntrlSysDsbld_FailCond'
     */
    (void)Rte_Write_VePWDR_b_EngCntrlSysDsbld_FailCond_Value(((uint32)tmpRead_0)
        == CeESSR_e_HybEngDisabled);

    /* Outport: '<Root>/VePWDR_b_FltShtDwnCmnd_FailCond' incorporates:
     *  Gain: '<S14>/Gain'
     *  SignalConversion generated from: '<S1>/FltShtDwnCmnd_FailCond'
     */
    (void)Rte_Write_VePWDR_b_FltShtDwnCmnd_FailCond_Value(tmpRead_5);

    /* Outport: '<Root>/VePWDR_b_HVBatRdyTimeOut_FailCond' incorporates:
     *  Gain: '<S19>/Gain'
     *  SignalConversion generated from: '<S1>/HVBatRdyTimeOut_FailCond'
     */
    (void)Rte_Write_VePWDR_b_HVBatRdyTimeOut_FailCond_Value(tmpRead_7);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_e_HVFuseA_Status' incorporates:
     *  SignalConversion generated from: '<S1>/HVFuseA_Status'
     *  VariantMerge generated from: '<S54>/HVFuseA_Status'
     */
    (void)Rte_Write_VePWDR_e_HVFuseA_Status_Value
        (PWDR_ac_B.VariantMergeForOutportHVFuseA_S);

    /* Outport: '<Root>/VePWDR_e_HVFuseB_Status' incorporates:
     *  SignalConversion generated from: '<S1>/HVFuseB_Status'
     *  VariantMerge generated from: '<S54>/HVFuseB_Status'
     */
    (void)Rte_Write_VePWDR_e_HVFuseB_Status_Value
        (PWDR_ac_B.VariantMergeForOutportHVFuseB_S);

    /* Outport: '<Root>/VePWDR_e_HVFuseC_Status' incorporates:
     *  SignalConversion generated from: '<S1>/HVFuseC_Status'
     *  VariantMerge generated from: '<S54>/HVFuseC_Status'
     */
    (void)Rte_Write_VePWDR_e_HVFuseC_Status_Value
        (PWDR_ac_B.VariantMergeForOutportHVFuseC_S);

    /* Outport: '<Root>/VePWDR_e_HVFuseD_Status' incorporates:
     *  SignalConversion generated from: '<S1>/HVFuseD_Status'
     *  VariantMerge generated from: '<S54>/HVFuseD_Status'
     */
    (void)Rte_Write_VePWDR_e_HVFuseD_Status_Value
        (PWDR_ac_B.VariantMergeForOutportHVFuseD_S);

    /* Outport: '<Root>/VePWDR_e_HVFuseE_Status' incorporates:
     *  SignalConversion generated from: '<S1>/HVFuseE_Status'
     *  VariantMerge generated from: '<S54>/HVFuseE_Status'
     */
    (void)Rte_Write_VePWDR_e_HVFuseE_Status_Value
        (PWDR_ac_B.VariantMergeForOutportHVFuseE_S);

    /* Outport: '<Root>/VePWDR_e_HVOverVoltFailure' incorporates:
     *  Merge: '<S361>/Merge'
     *  SignalConversion generated from: '<S1>/HVOverVoltFailure'
     */
    (void)Rte_Write_VePWDR_e_HVOverVoltFailure_Value(VePWDR_e_HVOverVoltFailure);

    /* Outport: '<Root>/VePWDR_b_HVOverVoltFltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/HVOverVoltFltDtct'
     */
    (void)Rte_Write_VePWDR_b_HVOverVoltFltDtct_Value(rtb_AND1_h);

    /* Outport: '<Root>/VePWDR_b_HVUnderVoltFltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/HVUnderVoltFltDtct'
     */
    (void)Rte_Write_VePWDR_b_HVUnderVoltFltDtct_Value(rtb_UnitDelay_oy);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HPMR'
     */
    /* Outport: '<Root>/VePWDR_b_HV_BatCntctrReqOpen_FailCond' incorporates:
     *  Gain: '<S15>/Gain'
     *  SignalConversion generated from: '<S1>/HV_BatCntctrReqOpen_FailCond'
     */
    (void)Rte_Write_VePWDR_b_HV_BatCntctrReqOpen_FailCond_Value(tmpRead_6);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_b_HV_VoltTooLow' incorporates:
     *  SignalConversion generated from: '<S1>/HV_VoltTooLow'
     */
    (void)Rte_Write_VePWDR_b_HV_VoltTooLow_Value
        (PWDR_ac_B.VePWDR_b_HV_VoltTooLow_Out);

    /* Outport: '<Root>/VePWDR_b_Htr2_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S1>/Htr2_HV_VoltChkFail'
     */
    (void)Rte_Write_VePWDR_b_Htr2_HV_VoltChkFail_Value
        (PWDR_ac_B.VePWDR_b_Htr2_HV_VoltChkFail_Ou);

    /* Outport: '<Root>/VePWDR_b_Htr4_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S1>/Htr4_HV_VoltChkFail'
     */
    (void)Rte_Write_VePWDR_b_Htr4_HV_VoltChkFail_Value
        (PWDR_ac_B.VePWDR_b_Htr4_HV_VoltChkFail_Ou);

    /* Outport: '<Root>/VePWDR_b_Htr_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S1>/Htr_HV_VoltChkFail'
     */
    (void)Rte_Write_VePWDR_b_Htr_HV_VoltChkFail_Value
        (PWDR_ac_B.VePWDR_b_Htr_HV_VoltChkFail_Out);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HPMR'
     */
    /* Outport: '<Root>/VePWDR_b_InverterFaulted_FailCond' incorporates:
     *  Gain: '<S18>/Gain'
     *  SignalConversion generated from: '<S1>/InverterFaulted_FailCond'
     */
    (void)Rte_Write_VePWDR_b_InverterFaulted_FailCond_Value(tmpRead_c);

    /* Outport: '<Root>/VePWDR_b_MCP_SPT_FailCond' incorporates:
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  Inport: '<Root>/VeINVR_e_MCPA_SPT_State'
     *  Inport: '<Root>/VeINVR_e_MCPB_SPT_State'
     *  Logic: '<S13>/Logical3'
     *  Logic: '<S13>/Logical4'
     *  Logic: '<S13>/Logical5'
     *  Logic: '<S13>/Logical6'
     *  RelationalOperator: '<S13>/Comparison3'
     *  RelationalOperator: '<S13>/Comparison5'
     *  RelationalOperator: '<S13>/Comparison6'
     *  RelationalOperator: '<S13>/Comparison7'
     *  SignalConversion generated from: '<S1>/MCP_SPT_FailCond'
     *  SignalConversion generated from: '<S1>/VeHPMR_e_HybSysSt'
     */
    (void)Rte_Write_VePWDR_b_MCP_SPT_FailCond_Value((((((uint32)tmpRead_8) ==
        CeINVR_e_Failed_SPT) || (CeINVR_e_Failed_SPT == ((uint32)tmpRead_9))) &&
        ((CeHPMR_e_HV_ENABLED == ((uint32)rtb_TmpSignalConversionAtVeHP_g)) ||
         (((uint32)rtb_TmpSignalConversionAtVeHP_g) == CeHPMR_e_ALT_HV_ENABLED)))
        || tmpRead_a);

    /* Outport: '<Root>/VePWDR_b_THMRShtDwnOnRS_FailCond' incorporates:
     *  Gain: '<S22>/Gain'
     *  SignalConversion generated from: '<S1>/THMRShtDwnOnRS_FailCond'
     */
    (void)Rte_Write_VePWDR_b_THMRShtDwnOnRS_FailCond_Value(tmpRead_b);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_e_FaultSts_HVILCkt' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_HVILCkt'
     *  VariantMerge generated from: '<S54>/FaultSts_HVILCkt'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HVILCkt_Value
        (PWDR_ac_B.VariantMergeForOutportFaultSts_);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuse' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_HiVoltageFuse'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuse_Value
        (PWDR_ac_B.VariantMergeForOutportFaultSt_h);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseB' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_HiVoltageFuseB'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseB_Value
        (PWDR_ac_B.VariantMergeForOutportFaultSt_i);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseC' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_HiVoltageFuseC'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseC_Value
        (PWDR_ac_B.VariantMergeForOutportFaultSt_o);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseD' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_HiVoltageFuseD'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseD_Value
        (PWDR_ac_B.VariantMergeForOutportFaultS_om);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseE' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_HiVoltageFuseE'
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseE_Value
        (PWDR_ac_B.VariantMergeForOutportFaultSt_f);

    /* Outport: '<Root>/VePWDR_e_FaultSts_OpnHVCbl' incorporates:
     *  SignalConversion generated from: '<S1>/VePWDR_e_FaultSts_OpnHVCbl'
     *  VariantMerge generated from: '<S54>/FaultSts_OpnHVCbl'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_OpnHVCbl_Value
        (PWDR_ac_B.VariantMergeForOutportFaultSt_d);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
     *  DataStoreRead: '<S1>/DSR_VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong_Value
        (PWDR_ac_DW.VePWDR_e_FaultSts_HB_SysPrchrgT);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
     *  DataStoreRead: '<S1>/DSR_VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt_Value
        (PWDR_ac_DW.VePWDR_e_FaultSts_HB_CntctrCntr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
#if Rte_SysCon_Variant_PWDR_6

FUNC(void, PWDR_CODE) PWDR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_PWDR_6

    TePMDR_e_PowerMode tmpRead;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_PWDR_6

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVeDF_e;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVePL_p;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVePMDR;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVePLTR;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVePL_o;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVeDF_p;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVeDF_g;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_UnitDelay_k4;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_AND_dt;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_TmpSignalConversionAtVePM_b;

#endif

#if Rte_SysCon_Variant_PWDR_6

    float32 rtb_Switch1_bw;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_AND_o0;

#endif

#if Rte_SysCon_Variant_PWDR_6

    uint16 rtb_Switch1_ds;

#endif

#if Rte_SysCon_Variant_PWDR_6

    boolean rtb_AND_d;

#endif

#if Rte_SysCon_Variant_PWDR_6

    uint8 rtb_TmpSignalConversionAtVeDM_c;

#endif

#if Rte_SysCon_Variant_PWDR_6

    uint32 rtb_AND_mu_tmp;

#endif

#if Rte_SysCon_Variant_PWDR_6

    uint32 rtb_AND_ns_tmp;

#endif

#if Rte_SysCon_Variant_PWDR_6

    TeDFIB_e_FaultDebounceStatus VePWDR_b_CBCWupPerf_Low_Latched;

#endif

#if Rte_SysCon_Variant_PWDR_6

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Outputs for Function Call SubSystem: '<Root>/PWDR_MedTED' */

    /* SignalConversion generated from: '<S2>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDF_g);

    /* Outputs for Atomic SubSystem: '<S451>/Timer Reset Enabled' */
    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S475>/Constant Value3'
     *  Logic: '<S451>/Logical2'
     *  Logic: '<S475>/AND1'
     *  RelationalOperator: '<S475>/Greater  Than2'
     *  Switch: '<S475>/Switch2'
     *  UnitDelay: '<S451>/Unit Delay'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    if ((!PWDR_ac_DW.UnitDelay_DSTATE_ek) && (PWDR_ac_DW.UnitDelay_DSTATE <=
            0.0F))
    {
        /* Switch: '<S475>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         */
        rtb_Switch1_bw = KePWDR_t_CBCWupDiagn_Thrshld;
    }
    else if (PWDR_ac_DW.UnitDelay_DSTATE_ek)
    {
        /* Switch: '<S475>/Switch2' incorporates:
         *  Constant: '<S472>/Calib'
         *  Constant: '<S475>/Constant Value4'
         *  MinMax: '<S475>/Maximum'
         *  Sum: '<S475>/Subtraction'
         *  Switch: '<S475>/Switch1'
         */
        rtb_Switch1_bw = fmaxf(PWDR_ac_DW.UnitDelay_DSTATE -
                               KePWDR_t_CBCWupDiagn_dT, 0.0F);
    }
    else
    {
        /* Switch: '<S475>/Switch1' incorporates:
         *  Switch: '<S475>/Switch2'
         */
        rtb_Switch1_bw = PWDR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S475>/Switch1' */
    /* End of Outputs for SubSystem: '<S451>/Timer Reset Enabled' */
    /* End of Outputs for SubSystem: '<Root>/PWDR_MedTED' */

    /* Inport: '<Root>/VePMDR_U_BF1_SysVolt' */
    (void)Rte_Read_VePMDR_U_BF1_SysVolt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeOBCR_b_EnableCANC' */
    (void)Rte_Read_VeOBCR_b_EnableCANC_Value(&rtb_AND);

    /* Outputs for Function Call SubSystem: '<Root>/PWDR_MedTED' */
    /* Outputs for Atomic SubSystem: '<S451>/Timer Reset Enabled' */
    /* RelationalOperator: '<S475>/Greater  Than1' incorporates:
     *  Constant: '<S475>/Constant Value2'
     */
    VePWDR_b_MsmtchLowWindow = (rtb_Switch1_bw > 0.0F);

    /* Update for UnitDelay: '<S475>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE = rtb_Switch1_bw;

    /* End of Outputs for SubSystem: '<S451>/Timer Reset Enabled' */

    /* SignalConversion generated from: '<S2>/VeDFIR_b_DiagSystemDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DiagSystemDsbl'
     */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value
        (&rtb_TmpSignalConversionAtVeDF_e);

    /* SignalConversion generated from: '<S2>/VePMDR_b_PowerModeRawFA' incorporates:
     *  Inport: '<Root>/VePMDR_b_PowerModeRawFA'
     */
    (void)Rte_Read_VePMDR_b_PowerModeRawFA_Value
        (&rtb_TmpSignalConversionAtVePMDR);

    /* SignalConversion generated from: '<S2>/VePLTR_b_DrvDrAjarFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_DrvDrAjarFA'
     */
    (void)Rte_Read_VePLTR_b_DrvDrAjarFA_Value(&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S2>/VePLTR_b_RmtVehStartReqFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_RmtVehStartReqFA'
     */
    (void)Rte_Read_VePLTR_b_RmtVehStartReqFA_Value
        (&rtb_TmpSignalConversionAtVePL_o);

    /* SignalConversion generated from: '<S2>/VePLTR_b_ChargeReqSgnlRcvd' incorporates:
     *  Inport: '<Root>/VePLTR_b_ChargeReqSgnlRcvd'
     */
    (void)Rte_Read_VePLTR_b_ChargeReqSgnlRcvd_Value
        (&rtb_TmpSignalConversionAtVePL_p);

    /* Logic: '<S451>/Logical9' incorporates:
     *  Logic: '<S451>/Logical13'
     *  Logic: '<S451>/Logical16'
     *  Logic: '<S451>/Logical20'
     */
    rtb_TmpSignalConversionAtVePMDR = !rtb_TmpSignalConversionAtVePMDR;
    rtb_TmpSignalConversionAtVePL_o = !rtb_TmpSignalConversionAtVePL_o;
    rtb_TmpSignalConversionAtVePLTR = !rtb_TmpSignalConversionAtVePLTR;

    /* Logic: '<S451>/Logical8' incorporates:
     *  Logic: '<S451>/Logical24'
     */
    rtb_TmpSignalConversionAtVeDF_e = !rtb_TmpSignalConversionAtVeDF_e;

    /* Logic: '<S451>/Logical29' incorporates:
     *  Logic: '<S451>/Logical30'
     *  Logic: '<S451>/Logical8'
     *  Logic: '<S451>/Logical9'
     */
    VePWDR_b_MsmtchLowEnblChk = (rtb_TmpSignalConversionAtVeDF_e &&
        (((rtb_TmpSignalConversionAtVePMDR || rtb_TmpSignalConversionAtVePLTR) ||
          rtb_TmpSignalConversionAtVePL_o) || rtb_TmpSignalConversionAtVePL_p));

    /* Outputs for Atomic SubSystem: '<S451>/Turn On Delay Sample3' */
    /* Outputs for Atomic SubSystem: '<S477>/EdgeRising' */
    /* Logic: '<S481>/AND' incorporates:
     *  Logic: '<S481>/OR1'
     *  UnitDelay: '<S481>/Unit Delay'
     */
    rtb_AND_o0 = !PWDR_ac_DW.UnitDelay_DSTATE_lj;

    /* Update for UnitDelay: '<S481>/Unit Delay' incorporates:
     *  Constant: '<S451>/TRUE Constant'
     */
    PWDR_ac_DW.UnitDelay_DSTATE_lj = true;

    /* End of Outputs for SubSystem: '<S477>/EdgeRising' */

    /* Switch: '<S477>/Switch1' incorporates:
     *  Constant: '<S455>/Calib'
     *  Constant: '<S477>/Constant Value'
     *  Logic: '<S477>/OR'
     *  MinMax: '<S477>/Minimum'
     *  Sum: '<S477>/Summation'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    if (rtb_AND_o0)
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Constant: '<S477>/Constant Value1'
         */
        rtb_Switch1_ds = 0U;
    }
    else if (KePWDR_Cnt_InitDbncDelay < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_mx) + 1U)))
    {
        /* MinMax: '<S477>/Minimum' incorporates:
         *  Constant: '<S455>/Calib'
         *  Switch: '<S477>/Switch1'
         */
        rtb_Switch1_ds = KePWDR_Cnt_InitDbncDelay;
    }
    else
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Constant: '<S477>/Constant Value'
         *  MinMax: '<S477>/Minimum'
         *  Sum: '<S477>/Summation'
         *  UnitDelay: '<S477>/Unit Delay'
         */
        rtb_Switch1_ds = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_mx) + 1U);
    }

    /* End of Switch: '<S477>/Switch1' */

    /* Logic: '<S477>/AND' incorporates:
     *  Constant: '<S455>/Calib'
     *  RelationalOperator: '<S477>/Greater  Than'
     */
    VePWDD_b_InitDbncDelay = (rtb_Switch1_ds >= KePWDR_Cnt_InitDbncDelay);

    /* Update for UnitDelay: '<S477>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_mx = rtb_Switch1_ds;

    /* End of Outputs for SubSystem: '<S451>/Turn On Delay Sample3' */

    /* Logic: '<S451>/Logical3' incorporates:
     *  Constant: '<S460>/Calib'
     *  RelationalOperator: '<S451>/Comparison2'
     */
    rtb_AND_o0 = ((tmpRead_3 < KePWDR_U_BCMwuHwLineThrshld) &&
                  (VePWDD_b_InitDbncDelay));

    /* Outputs for Atomic SubSystem: '<S451>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S476>/EdgeRising' */
    /* Logic: '<S480>/AND' incorporates:
     *  Logic: '<S480>/OR1'
     *  UnitDelay: '<S480>/Unit Delay'
     */
    rtb_AND_d = (rtb_AND_o0 && (!PWDR_ac_DW.UnitDelay_DSTATE_ix));

    /* Update for UnitDelay: '<S480>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ix = rtb_AND_o0;

    /* End of Outputs for SubSystem: '<S476>/EdgeRising' */

    /* Switch: '<S476>/Switch1' incorporates:
     *  Constant: '<S454>/Calib'
     *  Constant: '<S476>/Constant Value'
     *  Logic: '<S476>/OR'
     *  Logic: '<S476>/OR1'
     *  MinMax: '<S476>/Minimum'
     *  Sum: '<S476>/Summation'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    if ((!rtb_AND_o0) || rtb_AND_d)
    {
        /* Switch: '<S476>/Switch1' incorporates:
         *  Constant: '<S476>/Constant Value1'
         */
        rtb_Switch1_ds = 0U;
    }
    else if (KePWDR_Cnt_BCMwuHwLineMonitor < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_ee) + 1U)))
    {
        /* MinMax: '<S476>/Minimum' incorporates:
         *  Constant: '<S454>/Calib'
         *  Switch: '<S476>/Switch1'
         */
        rtb_Switch1_ds = KePWDR_Cnt_BCMwuHwLineMonitor;
    }
    else
    {
        /* Switch: '<S476>/Switch1' incorporates:
         *  Constant: '<S476>/Constant Value'
         *  MinMax: '<S476>/Minimum'
         *  Sum: '<S476>/Summation'
         *  UnitDelay: '<S476>/Unit Delay'
         */
        rtb_Switch1_ds = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_ee) + 1U);
    }

    /* End of Switch: '<S476>/Switch1' */
    /* End of Outputs for SubSystem: '<S451>/Turn On Delay Sample2' */
    /* End of Outputs for SubSystem: '<Root>/PWDR_MedTED' */

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_UnitDelay_k4);

    /* Outputs for Function Call SubSystem: '<Root>/PWDR_MedTED' */
    /* Outputs for Atomic SubSystem: '<S451>/Turn On Delay Sample2' */
    /* Logic: '<S476>/AND' incorporates:
     *  Constant: '<S454>/Calib'
     *  RelationalOperator: '<S476>/Greater  Than'
     */
    VePWDD_b_VoltBelowThrshld = (rtb_AND_o0 && (rtb_Switch1_ds >=
        KePWDR_Cnt_BCMwuHwLineMonitor));

    /* Update for UnitDelay: '<S476>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ee = rtb_Switch1_ds;

    /* End of Outputs for SubSystem: '<S451>/Turn On Delay Sample2' */

    /* Outputs for Atomic SubSystem: '<S451>/Signal Latch On' */
    /* Logic: '<S474>/OR2' incorporates:
     *  UnitDelay: '<S474>/Unit Delay'
     */
    rtb_AND_o0 = ((VePWDD_b_VoltBelowThrshld) || (PWDR_ac_DW.UnitDelay_DSTATE_na));

    /* Update for UnitDelay: '<S474>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_na = rtb_AND_o0;

    /* End of Outputs for SubSystem: '<S451>/Signal Latch On' */

    /* Logic: '<S451>/Logical32' incorporates:
     *  Logic: '<S451>/Logical1'
     */
    VePWDD_b_VoltChckEnblMsmtchLow = ((!rtb_AND_o0) && (VePWDD_b_InitDbncDelay));

    /* SignalConversion generated from: '<S2>/VeDFIR_b_IsDiagGlobalConditionsValid' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_TmpSignalConversionAtVeDF_p);

    /* Logic: '<S451>/Logical4' incorporates:
     *  Constant: '<S470>/Calib'
     *  Logic: '<S451>/Logical33'
     */
    rtb_TmpSignalConversionAtVeDF_p = (rtb_TmpSignalConversionAtVeDF_p ||
        (KePWDR_b_GlobalCond_BCMWkupPerf_Ovrd));

    /* Logic: '<S451>/Logical6' incorporates:
     *  Constant: '<S469>/Calib'
     *  Logic: '<S451>/Logical4'
     *  Logic: '<S451>/Logical7'
     */
    VePWDR_b_EnblMsmtchLow = ((((((KePWDR_b_EnblCBCWupDiagn) &&
        (VePWDR_b_MsmtchLowWindow)) && (VePWDR_b_MsmtchLowEnblChk)) && (!rtb_AND))
        && (VePWDD_b_VoltChckEnblMsmtchLow)) && rtb_TmpSignalConversionAtVeDF_p);

    /* SignalConversion generated from: '<S2>/VeDMAB_y_StatusByte_ConModImpWkupPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ConModImpWkupPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ConModImpWkupPerf_Value
        (&rtb_TmpSignalConversionAtVeDM_c);

    /* S-Function (sfix_bitop): '<S482>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S497>/Bitwise Operator2'
     */
    rtb_AND_mu_tmp = ((uint32)rtb_TmpSignalConversionAtVeDM_c) & 64U;

    /* RelationalOperator: '<S482>/Relational Operator3' incorporates:
     *  Constant: '<S482>/Constant3'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator2'
     */
    rtb_AND_d = (rtb_AND_mu_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S482>/EdgeFalling1' */
    /* Logic: '<S482>/Logical Operator' incorporates:
     *  Logic: '<S484>/OR1'
     */
    rtb_AND_dt = !rtb_AND_d;

    /* End of Outputs for SubSystem: '<S482>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S482>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S497>/Bitwise Operator3'
     */
    rtb_AND_ns_tmp = ((uint32)rtb_TmpSignalConversionAtVeDM_c) & 1U;

    /* Logic: '<S482>/Logical1' incorporates:
     *  Constant: '<S467>/Calib'
     *  Constant: '<S482>/Constant1'
     *  Logic: '<S482>/Logical Operator'
     *  Logic: '<S482>/Logical10'
     *  Logic: '<S482>/Logical12'
     *  RelationalOperator: '<S482>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S482>/Bitwise Operator3'
     */
    rtb_AND_o0 = ((VePWDR_b_EnblMsmtchLow) &&
                  ((!KePWDR_b_ConModImpWkupPerf_LtchEnbl) || ((rtb_AND_ns_tmp ==
                     0U) || rtb_AND_dt)));

    /* SignalConversion generated from: '<S2>/VePMDR_b_BCMWakeupLine' incorporates:
     *  Inport: '<Root>/VePMDR_b_BCMWakeupLine'
     */
    (void)Rte_Read_VePMDR_b_BCMWakeupLine_Value(&rtb_TmpSignalConversionAtVePM_b);

    /* Outputs for Atomic SubSystem: '<S451>/EdgeRising' */
    /* Logic: '<S452>/AND' incorporates:
     *  Logic: '<S452>/OR1'
     *  UnitDelay: '<S452>/Unit Delay'
     */
    rtb_AND = (rtb_TmpSignalConversionAtVePM_b &&
               (!PWDR_ac_DW.UnitDelay_DSTATE_kk));

    /* Update for UnitDelay: '<S452>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_kk = rtb_TmpSignalConversionAtVePM_b;

    /* End of Outputs for SubSystem: '<S451>/EdgeRising' */

    /* Logic: '<S451>/Logical25' incorporates:
     *  Constant: '<S461>/Calib'
     */
    VePWDR_b_BCMWupLineCntResetMsmtch = ((KePWDR_b_BCMWupLineRstMsmtch) &&
        rtb_AND);

    /* UnitDelay: '<S499>/Unit Delay' incorporates:
     *  Logic: '<S473>/NOT4'
     */
    rtb_UnitDelay_k4 = (rtb_UnitDelay_k4 || rtb_TmpSignalConversionAtVeDF_g);

    /* Logic: '<S451>/Logical27' */
    VePWDR_b_ResetMsmtchLow = ((VePWDR_b_BCMWupLineCntResetMsmtch) ||
        rtb_UnitDelay_k4);

    /* Outputs for Atomic SubSystem: '<S482>/EdgeFalling1' */
    /* Logic: '<S484>/AND' incorporates:
     *  UnitDelay: '<S484>/Unit Delay'
     */
    rtb_AND_dt = (rtb_AND_dt && (PWDR_ac_DW.UnitDelay_DSTATE_h5));

    /* Update for UnitDelay: '<S484>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_h5 = rtb_AND_d;

    /* End of Outputs for SubSystem: '<S482>/EdgeFalling1' */

    /* Logic: '<S482>/Logical5' */
    rtb_AND_d = ((VePWDR_b_ResetMsmtchLow) || rtb_AND_dt);

    /* Logic: '<S483>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S483>/Unit Delay'
     *  UnitDelay: '<S483>/Unit Delay1'
     */
    rtb_AND_dt = ((rtb_AND_d || (PWDR_ac_DW.UnitDelay_DSTATE_lm)) ||
                  (PWDR_ac_DW.UnitDelay1_DSTATE_p));

    /* Outputs for Atomic SubSystem: '<S483>/Counter Reset  Enabled 1' */
    /* Switch: '<S491>/Switch1' incorporates:
     *  Switch: '<S491>/Switch2'
     */
    if (rtb_AND_dt)
    {
        /* Switch: '<S491>/Switch1' incorporates:
         *  Constant: '<S491>/Constant Value2'
         */
        VePWDR_Cnt_Smpl_CBCWupPerf_Low = 0U;
    }
    else if (rtb_AND_o0)
    {
        /* Switch: '<S491>/Switch2' incorporates:
         *  Constant: '<S491>/Constant Value1'
         *  Sum: '<S491>/Subtraction'
         *  Switch: '<S491>/Switch1'
         *  UnitDelay: '<S491>/Unit Delay'
         */
        VePWDR_Cnt_Smpl_CBCWupPerf_Low = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_e) + 1U);
    }
    else
    {
        /* Switch: '<S491>/Switch1' incorporates:
         *  Switch: '<S491>/Switch2'
         *  UnitDelay: '<S491>/Unit Delay'
         */
        VePWDR_Cnt_Smpl_CBCWupPerf_Low = PWDR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S491>/Switch1' */
    /* End of Outputs for SubSystem: '<S483>/Counter Reset  Enabled 1' */
    /* End of Outputs for SubSystem: '<Root>/PWDR_MedTED' */

    /* Inport: '<Root>/VePLTR_b_ChargeReq' */
    (void)Rte_Read_VePLTR_b_ChargeReq_Value(&tmpRead_2);

    /* Inport: '<Root>/VePLTR_b_RmtVehStartReq' */
    (void)Rte_Read_VePLTR_b_RmtVehStartReq_Value(&tmpRead_1);

    /* Inport: '<Root>/VePLTR_b_DrvDrAjar' */
    (void)Rte_Read_VePLTR_b_DrvDrAjar_Value(&tmpRead_0);

    /* Inport: '<Root>/VePMDR_e_PowerModeRaw' */
    (void)Rte_Read_VePMDR_e_PowerModeRaw_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/PWDR_MedTED' */
    /* Outputs for Atomic SubSystem: '<S483>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S491>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_e = VePWDR_Cnt_Smpl_CBCWupPerf_Low;

    /* End of Outputs for SubSystem: '<S483>/Counter Reset  Enabled 1' */

    /* Logic: '<S451>/Logical14' incorporates:
     *  Constant: '<S453>/Constant'
     *  Constant: '<S465>/Calib'
     *  Inport: '<Root>/VePMDR_e_PowerModeRaw'
     *  RelationalOperator: '<S451>/Comparison5'
     */
    VePWDR_b_PowerMode_FailCond = (((((uint32)tmpRead) != CePMDR_e_PowerMode_Off)
        && rtb_TmpSignalConversionAtVePMDR) && (KePWDR_b_CBCWupDiagn_EnblKey));

    /* Logic: '<S451>/Logical15' incorporates:
     *  Constant: '<S466>/Calib'
     */
    VePWDR_b_RmtVehStartReq_FailCond = ((tmpRead_1 &&
        rtb_TmpSignalConversionAtVePL_o) && (KePWDR_b_CBCWupDiagn_EnblRS));

    /* Logic: '<S451>/Logical17' incorporates:
     *  Constant: '<S463>/Calib'
     *  Logic: '<S451>/Logical'
     */
    VePWDR_b_ChargeReq_FailCond = (((tmpRead_2 &&
        rtb_TmpSignalConversionAtVePL_p) && rtb_TmpSignalConversionAtVePL_p) &&
        (KePWDR_b_CBCWupDiagn_EnblChrgRq));

    /* Logic: '<S451>/Logical19' incorporates:
     *  Constant: '<S464>/Calib'
     */
    VePWDR_b_DrvDrAjar_FailCond = ((tmpRead_0 && rtb_TmpSignalConversionAtVePLTR)
        && (KePWDR_b_CBCWupDiagn_EnblDrvDrAjar));

    /* Logic: '<S451>/Logical21' */
    VePWDR_b_CANFailCond = ((((VePWDR_b_PowerMode_FailCond) ||
        (VePWDR_b_RmtVehStartReq_FailCond)) || (VePWDR_b_ChargeReq_FailCond)) ||
                            (VePWDR_b_DrvDrAjar_FailCond));

    /* Logic: '<S451>/Logical22' incorporates:
     *  Logic: '<S451>/Logical23'
     */
    VePWDR_b_MsmtchLowFailCond = ((!rtb_TmpSignalConversionAtVePM_b) &&
        (VePWDR_b_CANFailCond));

    /* Outputs for Atomic SubSystem: '<S483>/Counter Reset  Enabled ' */
    /* Switch: '<S490>/Switch1' incorporates:
     *  Logic: '<S483>/NOT6'
     *  Switch: '<S490>/Switch2'
     */
    if (rtb_AND_dt)
    {
        /* Switch: '<S490>/Switch1' incorporates:
         *  Constant: '<S490>/Constant Value2'
         */
        VePWDR_Cnt_Fail_CBCWupPerf_Low = 0U;
    }
    else if (rtb_AND_o0 && (VePWDR_b_MsmtchLowFailCond))
    {
        /* Switch: '<S490>/Switch2' incorporates:
         *  Constant: '<S490>/Constant Value1'
         *  Sum: '<S490>/Subtraction'
         *  Switch: '<S490>/Switch1'
         *  UnitDelay: '<S490>/Unit Delay'
         */
        VePWDR_Cnt_Fail_CBCWupPerf_Low = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_d) + 1U);
    }
    else
    {
        /* Switch: '<S490>/Switch1' incorporates:
         *  Switch: '<S490>/Switch2'
         *  UnitDelay: '<S490>/Unit Delay'
         */
        VePWDR_Cnt_Fail_CBCWupPerf_Low = PWDR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S490>/Switch1' */

    /* Update for UnitDelay: '<S490>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_d = VePWDR_Cnt_Fail_CBCWupPerf_Low;

    /* End of Outputs for SubSystem: '<S483>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S483>/Greater Than or Equal ' incorporates:
     *  Constant: '<S456>/Calib'
     */
    rtb_TmpSignalConversionAtVePMDR = (VePWDR_Cnt_Fail_CBCWupPerf_Low >=
        KePWDR_Cnt_MsmtchLowFailLim);

    /* Logic: '<S483>/NOT5' incorporates:
     *  Constant: '<S457>/Calib'
     *  Logic: '<S483>/NOT3'
     *  RelationalOperator: '<S483>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVePLTR = ((VePWDR_Cnt_Smpl_CBCWupPerf_Low >=
        KePWDR_Cnt_MsmtchLowSmplLim) && (!rtb_TmpSignalConversionAtVePMDR));

    /* Outputs for Enabled SubSystem: '<S482>/Pass' */
    PWDR_ac_Pass(rtb_TmpSignalConversionAtVePLTR, &PWDR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S482>/Pass' */

    /* Outputs for Enabled SubSystem: '<S482>/Fail' */
    PWDR_ac_Fail(rtb_TmpSignalConversionAtVePMDR, &PWDR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S482>/Fail' */

    /* Outputs for Enabled SubSystem: '<S482>/Init' */
    PWDR_ac_Init_a(rtb_AND_d, &PWDR_ac_B.Merge_e);

    /* End of Outputs for SubSystem: '<S482>/Init' */

    /* RelationalOperator: '<S482>/Relational Operator' incorporates:
     *  Merge: '<S482>/Merge'
     *  Switch: '<S451>/Switch'
     */
    VePWDR_b_CBCWupPerf_Low_Latched = PWDR_ac_B.Merge_e;

    /* RelationalOperator: '<S482>/Relational Operator' incorporates:
     *  Constant: '<S485>/Constant'
     */
    VePWDR_b_CBCWupPerf_Low_Latched_Failed = (((uint32)
        VePWDR_b_CBCWupPerf_Low_Latched) == CeDFIB_e_Fail);

    /* Logic: '<S451>/Logical31' incorporates:
     *  Constant: '<S469>/Calib'
     *  Logic: '<S451>/Logical10'
     *  Logic: '<S451>/Logical11'
     *  Logic: '<S451>/Logical12'
     */
    VePWDR_b_EnblStuckHi = ((((KePWDR_b_EnblCBCWupDiagn) &&
        ((!VePWDR_b_MsmtchLowWindow) && (!VePWDR_b_CBCWupPerf_Low_Latched_Failed)))
        && rtb_TmpSignalConversionAtVeDF_e) && rtb_TmpSignalConversionAtVeDF_p);

    /* RelationalOperator: '<S497>/Relational Operator3' incorporates:
     *  Constant: '<S497>/Constant3'
     */
    rtb_TmpSignalConversionAtVeDF_p = (rtb_AND_mu_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S497>/EdgeFalling1' */
    /* Logic: '<S497>/Logical Operator' incorporates:
     *  Logic: '<S499>/OR1'
     */
    rtb_TmpSignalConversionAtVePL_p = !rtb_TmpSignalConversionAtVeDF_p;

    /* End of Outputs for SubSystem: '<S497>/EdgeFalling1' */

    /* Logic: '<S497>/Logical1' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S497>/Constant1'
     *  Logic: '<S497>/Logical Operator'
     *  Logic: '<S497>/Logical10'
     *  Logic: '<S497>/Logical12'
     *  RelationalOperator: '<S497>/Relational Operator1'
     */
    rtb_TmpSignalConversionAtVeDF_e = ((VePWDR_b_EnblStuckHi) &&
        ((!KePWDR_b_ConModImpWkupPerf_StuckHi_LtchEnbl) || ((rtb_AND_ns_tmp ==
        0U) || rtb_TmpSignalConversionAtVePL_p)));

    /* Logic: '<S451>/Logical26' incorporates:
     *  Constant: '<S462>/Calib'
     */
    VePWDR_b_BCMWupLineCntResetStuckHi = (rtb_AND &&
        (KePWDR_b_BCMWupLineRstStuckHi));

    /* Logic: '<S451>/Logical28' */
    VePWDR_b_ResetStuckHi = ((VePWDR_b_BCMWupLineCntResetStuckHi) ||
        rtb_UnitDelay_k4);

    /* Outputs for Atomic SubSystem: '<S497>/EdgeFalling1' */
    /* Logic: '<S499>/AND' incorporates:
     *  UnitDelay: '<S499>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePL_o = (rtb_TmpSignalConversionAtVePL_p &&
        (PWDR_ac_DW.UnitDelay_DSTATE_of));

    /* Update for UnitDelay: '<S499>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_of = rtb_TmpSignalConversionAtVeDF_p;

    /* End of Outputs for SubSystem: '<S497>/EdgeFalling1' */

    /* Logic: '<S497>/Logical5' */
    rtb_TmpSignalConversionAtVeDF_p = ((VePWDR_b_ResetStuckHi) ||
        rtb_TmpSignalConversionAtVePL_o);

    /* Logic: '<S498>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S498>/Unit Delay'
     *  UnitDelay: '<S498>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVePL_o = ((rtb_TmpSignalConversionAtVeDF_p ||
        (PWDR_ac_DW.UnitDelay_DSTATE_p1)) || (PWDR_ac_DW.UnitDelay1_DSTATE_kz));

    /* Outputs for Atomic SubSystem: '<S498>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S498>/Counter Reset  Enabled ' */
    /* Switch: '<S505>/Switch1' incorporates:
     *  Logic: '<S498>/NOT6'
     *  Switch: '<S505>/Switch2'
     *  Switch: '<S506>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVePL_o)
    {
        /* Switch: '<S505>/Switch1' incorporates:
         *  Constant: '<S505>/Constant Value2'
         */
        VePWDR_Cnt_Fail_CBCWupPerf_High = 0U;

        /* Switch: '<S506>/Switch1' incorporates:
         *  Constant: '<S506>/Constant Value2'
         */
        VePWDR_Cnt_Smpl_CBCWupPerf_High = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDF_e && rtb_TmpSignalConversionAtVePM_b)
        {
            /* Switch: '<S505>/Switch2' incorporates:
             *  Constant: '<S505>/Constant Value1'
             *  Sum: '<S505>/Subtraction'
             *  Switch: '<S505>/Switch1'
             *  UnitDelay: '<S505>/Unit Delay'
             */
            VePWDR_Cnt_Fail_CBCWupPerf_High = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_a1) + 1U);
        }
        else
        {
            /* Switch: '<S505>/Switch1' incorporates:
             *  Switch: '<S505>/Switch2'
             *  UnitDelay: '<S505>/Unit Delay'
             */
            VePWDR_Cnt_Fail_CBCWupPerf_High = PWDR_ac_DW.UnitDelay_DSTATE_a1;
        }

        /* Switch: '<S506>/Switch2' */
        if (rtb_TmpSignalConversionAtVeDF_e)
        {
            /* Switch: '<S506>/Switch1' incorporates:
             *  Constant: '<S506>/Constant Value1'
             *  Sum: '<S506>/Subtraction'
             *  Switch: '<S506>/Switch2'
             *  UnitDelay: '<S506>/Unit Delay'
             */
            VePWDR_Cnt_Smpl_CBCWupPerf_High = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_fm) + 1U);
        }
        else
        {
            /* Switch: '<S506>/Switch1' incorporates:
             *  Switch: '<S506>/Switch2'
             *  UnitDelay: '<S506>/Unit Delay'
             */
            VePWDR_Cnt_Smpl_CBCWupPerf_High = PWDR_ac_DW.UnitDelay_DSTATE_fm;
        }

        /* End of Switch: '<S506>/Switch2' */
    }

    /* End of Switch: '<S505>/Switch1' */
    /* End of Outputs for SubSystem: '<S498>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S505>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_a1 = VePWDR_Cnt_Fail_CBCWupPerf_High;

    /* End of Outputs for SubSystem: '<S498>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S498>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S506>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_fm = VePWDR_Cnt_Smpl_CBCWupPerf_High;

    /* End of Outputs for SubSystem: '<S498>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S498>/Greater Than or Equal ' incorporates:
     *  Constant: '<S458>/Calib'
     */
    rtb_TmpSignalConversionAtVePM_b = (VePWDR_Cnt_Fail_CBCWupPerf_High >=
        KePWDR_Cnt_StuckHiFailLim);

    /* Logic: '<S498>/NOT5' incorporates:
     *  Constant: '<S459>/Calib'
     *  Logic: '<S498>/NOT3'
     *  RelationalOperator: '<S498>/Less Than  or Equal'
     */
    rtb_TmpSignalConversionAtVeDF_e = ((VePWDR_Cnt_Smpl_CBCWupPerf_High >=
        KePWDR_Cnt_StuckHiSmplLim) && (!rtb_TmpSignalConversionAtVePM_b));

    /* Switch: '<S511>/Switch1' incorporates:
     *  Constant: '<S504>/Constant Value'
     *  DataStoreWrite: '<S451>/Data Store Write4'
     *  Switch: '<S510>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDF_g)
    {
        PWDR_ac_DW.NePWDR_Cnt_StuckHiFOP = 0U;

        /* Switch: '<S496>/Switch1' incorporates:
         *  Constant: '<S489>/Constant Value'
         *  Constant: '<S504>/Constant Value'
         *  DataStoreWrite: '<S451>/Data Store Write4'
         *  DataStoreWrite: '<S451>/Data Store Write5'
         */
        PWDR_ac_DW.NePWDR_Cnt_MsmtchLowFOP = 0U;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeDF_e)
        {
            /* MinMax: '<S504>/Minimum2' incorporates:
             *  DataStoreRead: '<S451>/Data Store Read3'
             *  Switch: '<S510>/Switch1'
             */
            if (VePWDR_Cnt_Fail_CBCWupPerf_High >
                    PWDR_ac_DW.NePWDR_Cnt_StuckHiFOP)
            {
                /* DataStoreWrite: '<S451>/Data Store Write4' incorporates:
                 *  Switch: '<S510>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_StuckHiFOP =
                    VePWDR_Cnt_Fail_CBCWupPerf_High;
            }

            /* End of MinMax: '<S504>/Minimum2' */
        }

        /* Switch: '<S495>/Switch1' incorporates:
         *  Switch: '<S496>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVePLTR)
        {
            /* MinMax: '<S489>/Minimum2' incorporates:
             *  DataStoreRead: '<S451>/Data Store Read5'
             */
            if (VePWDR_Cnt_Fail_CBCWupPerf_Low >
                    PWDR_ac_DW.NePWDR_Cnt_MsmtchLowFOP)
            {
                /* DataStoreWrite: '<S451>/Data Store Write5' incorporates:
                 *  Switch: '<S495>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_MsmtchLowFOP =
                    VePWDR_Cnt_Fail_CBCWupPerf_Low;
            }

            /* End of MinMax: '<S489>/Minimum2' */
        }

        /* End of Switch: '<S495>/Switch1' */
    }

    /* End of Switch: '<S511>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S497>/Pass' */
    PWDR_ac_Pass(rtb_TmpSignalConversionAtVeDF_e, &PWDR_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S497>/Pass' */

    /* Outputs for Enabled SubSystem: '<S497>/Fail' */
    PWDR_ac_Fail(rtb_TmpSignalConversionAtVePM_b, &PWDR_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S497>/Fail' */

    /* Outputs for Enabled SubSystem: '<S497>/Init' */
    PWDR_ac_Init_a(rtb_TmpSignalConversionAtVeDF_p, &PWDR_ac_B.Merge_p);

    /* End of Outputs for SubSystem: '<S497>/Init' */

    /* Switch: '<S451>/Switch' incorporates:
     *  Merge: '<S497>/Merge'
     */
    if (!VePWDR_b_MsmtchLowWindow)
    {
        VePWDR_b_CBCWupPerf_Low_Latched = PWDR_ac_B.Merge_p;
    }

    /* Outport: '<Root>/VePWDR_e_FaultSts_ConModImpWkupPerf' incorporates:
     *  Switch: '<S451>/Switch'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_ConModImpWkupPerf_Value
        (VePWDR_b_CBCWupPerf_Low_Latched);

    /* RelationalOperator: '<S497>/Relational Operator' incorporates:
     *  Constant: '<S500>/Constant'
     *  Merge: '<S497>/Merge'
     */
    VePWDR_b_CBCWupPerf_High_Latched_Failed = (((uint32)PWDR_ac_B.Merge_p) ==
        CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S451>/Unit Delay' incorporates:
     *  Constant: '<S451>/TRUE Constant'
     */
    PWDR_ac_DW.UnitDelay_DSTATE_ek = true;

    /* Update for UnitDelay: '<S483>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lm = rtb_TmpSignalConversionAtVePLTR;

    /* Update for UnitDelay: '<S483>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_p = rtb_TmpSignalConversionAtVePMDR;

    /* Update for UnitDelay: '<S498>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_p1 = rtb_TmpSignalConversionAtVeDF_e;

    /* Update for UnitDelay: '<S498>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_kz = rtb_TmpSignalConversionAtVePM_b;

    /* End of Outputs for SubSystem: '<Root>/PWDR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Model step function for TID3 */
FUNC(void, PWDR_CODE) PWDR_MedTEH(void) /* Explicit Task: MedTEH */
{
    float32 rtb_Comparison5_b;
    float32 rtb_TmpSignalConversionAtVeBPCR;
    float32 rtb_TmpSignalConversionAtVeBP_a;
    float32 rtb_TmpSignalConversionAtVeHVTR;
    float32 rtb_TmpSignalConversionAtVeTITR;
    float32 tmpRead_1;
    uint32 rtb_AND_ip_tmp;
    uint32 rtb_AND_mp_tmp;
    uint32 rtb_GreaterThan4_tmp;
    uint32 rtb_Logical1_bu_tmp;
    uint16 rtb_Switch1_jt;
    uint16 rtb_Switch1_n2;
    TeESSR_e_HybEngSysActv tmpRead_0;
    TeOBCR_e_ChargingLevel rtb_TmpSignalConversionAtVeOBCR;
    TeOBCR_e_ChargingSystemSts tmpRead;
    uint8 rtb_TmpSignalConversionAtVeDMAB;
    uint8 rtb_TmpSignalConversionAtVeDM_c;
    uint8 rtb_TmpSignalConversionAtVeDM_i;
    uint8 rtb_TmpSignalConversionAtVeD_dm;
    boolean rtb_AND;
    boolean rtb_AND_d;
    boolean rtb_AND_f;
    boolean rtb_AND_fw;
    boolean rtb_AND_h5;
    boolean rtb_AND_k2;
    boolean rtb_AND_m;
    boolean rtb_AND_mp_tmp_0;
    boolean rtb_AND_o;
    boolean rtb_AND_py_tmp;
    boolean rtb_Comparison2_k;
    boolean rtb_Comparison5_l1;
    boolean rtb_Comparison5_o;
    boolean rtb_FailCounterReset_e0;
    boolean rtb_FailCounterReset_e2;
    boolean rtb_GreaterThan4;
    boolean rtb_GreaterThanorEqual_nv;
    boolean rtb_Logical1;
    boolean rtb_Logical1_bu_tmp_0;
    boolean rtb_Logical1_cx;
    boolean rtb_Logical1_d4;
    boolean rtb_Logical2;
    boolean rtb_LogicalOperator_ke;
    boolean rtb_NOT4_l;
    boolean rtb_RelationalOperator3;
    boolean rtb_RelationalOperator3_lx;
    boolean rtb_TmpSignalConversionAtVeDFIR;
    boolean rtb_TmpSignalConversionAtVeHPMR;
    boolean rtb_UnitDelay_cp;
    boolean rtb_UnitDelay_i1;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* DataStoreWrite: '<S3>/DSW_StatusByte_LosCommBECM_A' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_Value
        (&PWDR_ac_DW.StatusByte_LosCommBECM_A);

    /* DataStoreWrite: '<S3>/DSW_StatusByte_LosCommBECM_A_CANC11' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LosCommBECM_A_CANC11'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LosCommBECM_A_CANC11_Value
        (&PWDR_ac_DW.StatusByte_LosCommBECM_A_CANC11);

    /* SignalConversion generated from: '<S3>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value(&rtb_TmpSignalConversionAtVeHPMR);

    /* SignalConversion generated from: '<S3>/VeHVTR_P_HV_BatPwr_Arb2' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_BatPwr_Arb2'
     */
    (void)Rte_Read_VeHVTR_P_HV_BatPwr_Arb2_Value
        (&rtb_TmpSignalConversionAtVeHVTR);

    /* SignalConversion generated from: '<S3>/VeDFIR_b_PostCodeClrDiagDsbl' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&rtb_TmpSignalConversionAtVeDFIR);

    /* SignalConversion generated from: '<S3>/VeOBCR_e_ChargingLevel' incorporates:
     *  Inport: '<Root>/VeOBCR_e_ChargingLevel'
     */
    (void)Rte_Read_VeOBCR_e_ChargingLevel_Value(&rtb_TmpSignalConversionAtVeOBCR);

    /* SignalConversion generated from: '<S3>/VeBPCR_T_HV_BatModTempMax_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMax_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S3>/VeTITR_M_InputTrqMax' incorporates:
     *  Inport: '<Root>/VeTITR_M_InputTrqMax'
     */
    (void)Rte_Read_VeTITR_M_InputTrqMax_Value(&rtb_TmpSignalConversionAtVeTITR);

    /* SignalConversion generated from: '<S3>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBP_a);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HB_BattSOC_Hi' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_BattSOC_Hi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_BattSOC_Hi_Value
        (&rtb_TmpSignalConversionAtVeDMAB);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HB_BattSOC_Lo' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_BattSOC_Lo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_BattSOC_Lo_Value
        (&rtb_TmpSignalConversionAtVeD_dm);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_HB_Ovrtemp' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HB_Ovrtemp'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HB_Ovrtemp_Value
        (&rtb_TmpSignalConversionAtVeDM_i);

    /* SignalConversion generated from: '<S3>/VeDMAB_y_StatusByte_BPCM_P1A26' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BPCM_P1A26'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BPCM_P1A26_Value
        (&rtb_TmpSignalConversionAtVeDM_c);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */

    /* RelationalOperator: '<S513>/Comparison5' incorporates:
     *  Constant: '<S528>/Constant'
     */
    rtb_Comparison5_o = (((uint32)rtb_TmpSignalConversionAtVeOBCR) !=
                         CeOBCR_e_ChargingLvlDefault);

    /* Outputs for Atomic SubSystem: '<S513>/Counter Reset  Enabled ' */
    /* Switch: '<S526>/Switch2' incorporates:
     *  Logic: '<S513>/Logical1'
     *  Switch: '<S526>/Switch1'
     */
    if (!rtb_Comparison5_o)
    {
        /* Switch: '<S526>/Switch1' incorporates:
         *  Constant: '<S526>/Constant Value2'
         */
        rtb_Switch1_jt = 0U;
    }
    else
    {
        /* Switch: '<S526>/Switch1' incorporates:
         *  Constant: '<S526>/Constant Value1'
         *  Sum: '<S526>/Subtraction'
         *  Switch: '<S526>/Switch2'
         *  UnitDelay: '<S526>/Unit Delay'
         */
        rtb_Switch1_jt = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_k) + 1U);
    }

    /* End of Switch: '<S526>/Switch2' */
    /* End of Outputs for SubSystem: '<S513>/Counter Reset  Enabled ' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeOBCR_e_ChargingSystemSts' */
    (void)Rte_Read_VeOBCR_e_ChargingSystemSts_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */
    /* Outputs for Atomic SubSystem: '<S513>/Counter Reset  Enabled ' */
    /* Update for UnitDelay: '<S526>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_jt;

    /* End of Outputs for SubSystem: '<S513>/Counter Reset  Enabled ' */

    /* Logic: '<S513>/Logical2' incorporates:
     *  Constant: '<S529>/Constant'
     *  Constant: '<S534>/Calib'
     *  Inport: '<Root>/VeOBCR_e_ChargingSystemSts'
     *  Logic: '<S513>/Logical6'
     *  RelationalOperator: '<S513>/Comparison1'
     *  RelationalOperator: '<S513>/Greater  Than3'
     */
    rtb_Comparison5_o = ((rtb_Comparison5_o && (rtb_Switch1_jt <=
                           KePWDR_Cnt_ChargingStartWaitTime)) || (((uint32)
                           tmpRead) == CeOBCR_e_ChargingSts_Charging));

    /* Outputs for Atomic SubSystem: '<S513>/EdgeRising1' */
    /* Logic: '<S527>/AND' incorporates:
     *  Logic: '<S527>/OR1'
     *  UnitDelay: '<S527>/Unit Delay'
     */
    rtb_AND = (rtb_Comparison5_o && (!PWDR_ac_DW.UnitDelay_DSTATE_ps));

    /* Update for UnitDelay: '<S527>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ps = rtb_Comparison5_o;

    /* End of Outputs for SubSystem: '<S513>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S512>/IUMPR_InhibitBit' */
#if Rte_SysCon_Variant_PWDR_7

    /* Outputs for Atomic SubSystem: '<S515>/SingleCAN ' */
    PWDR_ac_SingleCAN();

    /* End of Outputs for SubSystem: '<S515>/SingleCAN ' */
    /* End of Outputs for SubSystem: '<S512>/IUMPR_InhibitBit' */
#else

    /* Outputs for Atomic SubSystem: '<S515>/RedundantCAN' */
    /* Logic: '<S616>/Logical Operator1' incorporates:
     *  Constant: '<S618>/Constant1'
     *  Constant: '<S618>/Constant2'
     *  Constant: '<S619>/Constant1'
     *  Constant: '<S619>/Constant2'
     *  DataStoreRead: '<S618>/StatusByte_LosCommBECM_A'
     *  DataStoreRead: '<S619>/StatusByte_LosCommBECM_A_CANC11'
     *  Logic: '<S618>/Logical Operator'
     *  Logic: '<S619>/Logical Operator'
     *  RelationalOperator: '<S618>/Relational Operator1'
     *  RelationalOperator: '<S618>/Relational Operator2'
     *  RelationalOperator: '<S619>/Relational Operator1'
     *  RelationalOperator: '<S619>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S618>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S619>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S619>/Bitwise Operator2'
     */
    PWDR_ac_B.VariantMergeForOutportIUMPR_Inh = ((((((sint32)
        PWDR_ac_DW.StatusByte_LosCommBECM_A) & 1) > 0) && ((((uint32)
        PWDR_ac_DW.StatusByte_LosCommBECM_A) & 64U) == 0U)) && (((((sint32)
        PWDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 1) > 0) && ((((uint32)
        PWDR_ac_DW.StatusByte_LosCommBECM_A_CANC11) & 64U) == 0U)));

    /* End of Outputs for SubSystem: '<S515>/RedundantCAN' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatMaxModTmpSFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatMaxModTmpSFA_Value(&rtb_Logical1);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&rtb_AND_fw);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */
    /* RelationalOperator: '<S544>/Relational Operator3' incorporates:
     *  Constant: '<S544>/Constant3'
     *  S-Function (sfix_bitop): '<S544>/Bitwise Operator2'
     */
    rtb_RelationalOperator3 = ((((uint32)rtb_TmpSignalConversionAtVeDM_i) & 64U)
        == 0U);

    /* Outputs for Atomic SubSystem: '<S544>/EdgeFalling1' */
    /* Logic: '<S544>/Logical Operator' incorporates:
     *  Logic: '<S546>/OR1'
     */
    rtb_Logical1_d4 = !rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S544>/EdgeFalling1' */

    /* Logic: '<S544>/Logical1' incorporates:
     *  Constant: '<S541>/Calib'
     *  Constant: '<S542>/Calib'
     *  Constant: '<S544>/Constant1'
     *  Logic: '<S512>/Logical2'
     *  Logic: '<S512>/Logical3'
     *  Logic: '<S513>/Logical'
     *  Logic: '<S544>/Logical Operator'
     *  Logic: '<S544>/Logical10'
     *  Logic: '<S544>/Logical12'
     *  RelationalOperator: '<S544>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S544>/Bitwise Operator3'
     */
    rtb_Logical1 = (((KePWDR_b_BattOverTempEnable) &&
                     ((!PWDR_ac_B.VariantMergeForOutportIUMPR_Inh) &&
                      (!rtb_Logical1))) && ((!KePWDR_b_HB_Ovrtemp_LtchEnbl) ||
                     (((((uint32)rtb_TmpSignalConversionAtVeDM_i) & 1U) == 0U) ||
                      rtb_Logical1_d4)));

    /* Switch: '<S531>/Switch1' incorporates:
     *  Constant: '<S540>/Calib'
     *  RelationalOperator: '<S513>/Equal'
     */
    if (KePWDR_b_BattOverTempCntrlEnbl)
    {
        /* Switch: '<S531>/Switch1' */
        VePWDD_T_BattOverTempFBVal = rtb_TmpSignalConversionAtVeBPCR;
    }
    else
    {
        /* Switch: '<S531>/Switch1' incorporates:
         *  Constant: '<S537>/Calib'
         */
        VePWDD_T_BattOverTempFBVal = KePWDR_T_BattOverTempCntrlVal;
    }

    /* End of Switch: '<S531>/Switch1' */

    /* Logic: '<S523>/NOT4' */
    rtb_NOT4_l = (rtb_AND_fw || rtb_TmpSignalConversionAtVeDFIR);

    /* Outputs for Atomic SubSystem: '<S544>/EdgeFalling1' */
    /* Logic: '<S546>/AND' incorporates:
     *  UnitDelay: '<S546>/Unit Delay'
     */
    rtb_AND_fw = (rtb_Logical1_d4 && (PWDR_ac_DW.UnitDelay_DSTATE_cd));

    /* Update for UnitDelay: '<S546>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_cd = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S544>/EdgeFalling1' */

    /* Logic: '<S544>/Logical5' incorporates:
     *  Logic: '<S513>/Logical3'
     */
    rtb_RelationalOperator3 = ((rtb_NOT4_l || rtb_AND) || rtb_AND_fw);

    /* Logic: '<S545>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S545>/Unit Delay'
     *  UnitDelay: '<S545>/Unit Delay1'
     */
    rtb_AND_fw = ((rtb_RelationalOperator3 || (PWDR_ac_DW.UnitDelay_DSTATE_aj)) ||
                  (PWDR_ac_DW.UnitDelay1_DSTATE));

    /* Outputs for Atomic SubSystem: '<S545>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S545>/Counter Reset  Enabled ' */
    /* Switch: '<S552>/Switch1' incorporates:
     *  Switch: '<S513>/Switch1'
     *  Switch: '<S553>/Switch1'
     */
    if (rtb_AND_fw)
    {
        /* Switch: '<S552>/Switch1' incorporates:
         *  Constant: '<S552>/Constant Value2'
         */
        VePWDD_Cnt_BOT_Fail = 0U;

        /* Switch: '<S553>/Switch1' incorporates:
         *  Constant: '<S553>/Constant Value2'
         */
        VePWDD_Cnt_BOT_FailSmpl = 0U;
    }
    else
    {
        if (rtb_Comparison5_o)
        {
            /* Switch: '<S513>/Switch1' incorporates:
             *  Constant: '<S538>/Calib'
             */
            rtb_Comparison5_b = KePWDR_T_BattOverTempFailureThrshld;
        }
        else
        {
            /* Switch: '<S513>/Switch1' incorporates:
             *  Constant: '<S539>/Calib'
             */
            rtb_Comparison5_b = KePWDR_T_BattOverTempFailureThrshldNtChrgng;
        }

        /* Switch: '<S552>/Switch2' incorporates:
         *  Logic: '<S545>/NOT6'
         *  RelationalOperator: '<S513>/Greater  Than2'
         */
        if (rtb_Logical1 && (VePWDD_T_BattOverTempFBVal > rtb_Comparison5_b))
        {
            /* Switch: '<S552>/Switch1' incorporates:
             *  Constant: '<S552>/Constant Value1'
             *  Sum: '<S552>/Subtraction'
             *  Switch: '<S552>/Switch2'
             *  UnitDelay: '<S552>/Unit Delay'
             */
            VePWDD_Cnt_BOT_Fail = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_my) + 1U);
        }
        else
        {
            /* Switch: '<S552>/Switch1' incorporates:
             *  Switch: '<S552>/Switch2'
             *  UnitDelay: '<S552>/Unit Delay'
             */
            VePWDD_Cnt_BOT_Fail = PWDR_ac_DW.UnitDelay_DSTATE_my;
        }

        /* End of Switch: '<S552>/Switch2' */

        /* Switch: '<S553>/Switch2' */
        if (rtb_Logical1)
        {
            /* Switch: '<S553>/Switch1' incorporates:
             *  Constant: '<S553>/Constant Value1'
             *  Sum: '<S553>/Subtraction'
             *  Switch: '<S553>/Switch2'
             *  UnitDelay: '<S553>/Unit Delay'
             */
            VePWDD_Cnt_BOT_FailSmpl = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_l4) + 1U);
        }
        else
        {
            /* Switch: '<S553>/Switch1' incorporates:
             *  Switch: '<S553>/Switch2'
             *  UnitDelay: '<S553>/Unit Delay'
             */
            VePWDD_Cnt_BOT_FailSmpl = PWDR_ac_DW.UnitDelay_DSTATE_l4;
        }

        /* End of Switch: '<S553>/Switch2' */
    }

    /* End of Switch: '<S552>/Switch1' */
    /* End of Outputs for SubSystem: '<S545>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S552>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_my = VePWDD_Cnt_BOT_Fail;

    /* End of Outputs for SubSystem: '<S545>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S545>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S553>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_l4 = VePWDD_Cnt_BOT_FailSmpl;

    /* End of Outputs for SubSystem: '<S545>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S545>/Greater Than or Equal ' incorporates:
     *  Constant: '<S532>/Calib'
     */
    rtb_Comparison5_o = (((float32)VePWDD_Cnt_BOT_Fail) >=
                         KePWDR_Cnt_BattOverTempFailureCntLmt);

    /* Logic: '<S545>/NOT5' incorporates:
     *  Constant: '<S533>/Calib'
     *  Logic: '<S545>/NOT3'
     *  RelationalOperator: '<S545>/Less Than  or Equal'
     */
    rtb_Logical1 = ((((float32)VePWDD_Cnt_BOT_FailSmpl) >=
                     KePWDR_Cnt_BattOverTempFailureSmplCntLmt) &&
                    (!rtb_Comparison5_o));

    /* Switch: '<S558>/Switch1' incorporates:
     *  Constant: '<S551>/Constant Value'
     *  DataStoreWrite: '<S513>/Data Store Write5'
     *  Logic: '<S513>/Logical4'
     *  Switch: '<S557>/Switch1'
     */
    if (rtb_AND || rtb_TmpSignalConversionAtVeDFIR)
    {
        PWDR_ac_DW.NePWDR_Cnt_BattOverTempFailureM = 0U;
    }
    else
    {
        if (rtb_Logical1)
        {
            /* MinMax: '<S551>/Minimum2' incorporates:
             *  DataStoreRead: '<S513>/Data Store Read5'
             *  Switch: '<S557>/Switch1'
             */
            if (VePWDD_Cnt_BOT_Fail > PWDR_ac_DW.NePWDR_Cnt_BattOverTempFailureM)
            {
                /* DataStoreWrite: '<S513>/Data Store Write5' incorporates:
                 *  Switch: '<S557>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_BattOverTempFailureM = VePWDD_Cnt_BOT_Fail;
            }

            /* End of MinMax: '<S551>/Minimum2' */
        }
    }

    /* End of Switch: '<S558>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S544>/Fail' */
    PWDR_ac_Fail(rtb_Comparison5_o, &PWDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S544>/Fail' */

    /* Outputs for Enabled SubSystem: '<S544>/Init' */
    PWDR_ac_Init_a(rtb_RelationalOperator3, &PWDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S544>/Init' */

    /* Outputs for Enabled SubSystem: '<S544>/Pass' */
    PWDR_ac_Pass(rtb_Logical1, &PWDR_ac_B.Merge);

    /* End of Outputs for SubSystem: '<S544>/Pass' */

    /* RelationalOperator: '<S544>/Relational Operator' incorporates:
     *  Constant: '<S547>/Constant'
     *  Merge: '<S544>/Merge'
     */
    rtb_AND = (((uint32)PWDR_ac_B.Merge) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S513>/Greater  Than1' incorporates:
     *  Constant: '<S536>/Calib'
     */
    rtb_RelationalOperator3 = (VePWDD_T_BattOverTempFBVal >
        KePWDR_T_BattAbuseOverTempFailureThrshld);

    /* Outputs for Atomic SubSystem: '<S513>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S543>/EdgeRising' */
    /* Logic: '<S559>/AND' incorporates:
     *  Logic: '<S559>/OR1'
     *  UnitDelay: '<S559>/Unit Delay'
     */
    rtb_AND_fw = (rtb_RelationalOperator3 && (!PWDR_ac_DW.UnitDelay_DSTATE_h3));

    /* Update for UnitDelay: '<S559>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_h3 = rtb_RelationalOperator3;

    /* End of Outputs for SubSystem: '<S543>/EdgeRising' */

    /* Switch: '<S543>/Switch1' incorporates:
     *  Constant: '<S535>/Calib'
     *  Constant: '<S543>/Constant Value'
     *  Logic: '<S543>/OR'
     *  Logic: '<S543>/OR1'
     *  MinMax: '<S543>/Minimum'
     *  Sum: '<S543>/Summation'
     *  UnitDelay: '<S543>/Unit Delay'
     */
    if ((!rtb_RelationalOperator3) || rtb_AND_fw)
    {
        /* Switch: '<S543>/Switch1' incorporates:
         *  Constant: '<S543>/Constant Value1'
         */
        rtb_Switch1_jt = 0U;
    }
    else if (KePWDR_Cnt_OverTempBatteryAbuse < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_hc) + 1U)))
    {
        /* MinMax: '<S543>/Minimum' incorporates:
         *  Constant: '<S535>/Calib'
         *  Switch: '<S543>/Switch1'
         */
        rtb_Switch1_jt = KePWDR_Cnt_OverTempBatteryAbuse;
    }
    else
    {
        /* Switch: '<S543>/Switch1' incorporates:
         *  Constant: '<S543>/Constant Value'
         *  MinMax: '<S543>/Minimum'
         *  Sum: '<S543>/Summation'
         *  UnitDelay: '<S543>/Unit Delay'
         */
        rtb_Switch1_jt = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_hc) + 1U);
    }

    /* End of Switch: '<S543>/Switch1' */

    /* Update for UnitDelay: '<S543>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_hc = rtb_Switch1_jt;

    /* Logic: '<S513>/Logical5' incorporates:
     *  Constant: '<S535>/Calib'
     *  Logic: '<S543>/AND'
     *  RelationalOperator: '<S543>/Greater  Than'
     */
    rtb_RelationalOperator3 = (rtb_AND && (rtb_RelationalOperator3 &&
        (rtb_Switch1_jt >= KePWDR_Cnt_OverTempBatteryAbuse)));

    /* End of Outputs for SubSystem: '<S513>/Turn On Delay Sample' */

    /* Outputs for Atomic SubSystem: '<S561>/Turn On Delay Sample2' */
    /* Outputs for Atomic SubSystem: '<S595>/EdgeRising' */
    /* Logic: '<S597>/AND' incorporates:
     *  Logic: '<S597>/OR1'
     *  UnitDelay: '<S597>/Unit Delay'
     */
    rtb_AND_fw = (rtb_TmpSignalConversionAtVeHPMR &&
                  (!PWDR_ac_DW.UnitDelay_DSTATE_es));

    /* Update for UnitDelay: '<S597>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_es = rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for SubSystem: '<S595>/EdgeRising' */

    /* Switch: '<S595>/Switch1' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S595>/Constant Value'
     *  Logic: '<S595>/OR'
     *  Logic: '<S595>/OR1'
     *  MinMax: '<S595>/Minimum'
     *  Sum: '<S595>/Summation'
     *  UnitDelay: '<S595>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeHPMR) || rtb_AND_fw)
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S595>/Constant Value1'
         */
        rtb_Switch1_jt = 0U;
    }
    else if (KePWDR_Cnt_DbncPSA < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_lh) + 1U)))
    {
        /* MinMax: '<S595>/Minimum' incorporates:
         *  Constant: '<S587>/Calib'
         *  Switch: '<S595>/Switch1'
         */
        rtb_Switch1_jt = KePWDR_Cnt_DbncPSA;
    }
    else
    {
        /* Switch: '<S595>/Switch1' incorporates:
         *  Constant: '<S595>/Constant Value'
         *  MinMax: '<S595>/Minimum'
         *  Sum: '<S595>/Summation'
         *  UnitDelay: '<S595>/Unit Delay'
         */
        rtb_Switch1_jt = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_lh) + 1U);
    }

    /* End of Switch: '<S595>/Switch1' */
    /* End of Outputs for SubSystem: '<S561>/Turn On Delay Sample2' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value(&rtb_AND_o);

    /* Inport: '<Root>/VeHVTR_b_HV_BatPwrFA' */
    (void)Rte_Read_VeHVTR_b_HV_BatPwrFA_Value(&rtb_Logical1_cx);

    /* Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA_Ovrd' */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Ovrd_Value(&rtb_Comparison5_l1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */
    /* Outputs for Atomic SubSystem: '<S561>/Turn On Delay Sample2' */
    /* Logic: '<S595>/AND' incorporates:
     *  Constant: '<S587>/Calib'
     *  RelationalOperator: '<S595>/Greater  Than'
     */
    VePWDR_b_PSA_Enable = (rtb_TmpSignalConversionAtVeHPMR && (rtb_Switch1_jt >=
                            KePWDR_Cnt_DbncPSA));

    /* Update for UnitDelay: '<S595>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lh = rtb_Switch1_jt;

    /* End of Outputs for SubSystem: '<S561>/Turn On Delay Sample2' */

    /* Logic: '<S561>/Logical2' incorporates:
     *  Constant: '<S591>/Calib'
     *  Constant: '<S592>/Calib'
     *  Logic: '<S561>/Logical7'
     *  RelationalOperator: '<S561>/Greater  Than1'
     *  RelationalOperator: '<S561>/Greater  Than2'
     */
    VePWDR_b_TempTest_1A26 = ((KePWDR_T_BatUnderTemp <=
        rtb_TmpSignalConversionAtVeBPCR) && (rtb_TmpSignalConversionAtVeBPCR <=
        KePWDR_T_BatOverTemp));

    /* Logic: '<S512>/Logical1' incorporates:
     *  Logic: '<S512>/Logical'
     *  Logic: '<S512>/Logical5'
     */
    rtb_RelationalOperator3_lx = ((!rtb_Comparison5_l1) &&
        (!PWDR_ac_B.VariantMergeForOutportIUMPR_Inh));

    /* Logic: '<S524>/Logical1' incorporates:
     *  Constant: '<S516>/Calib'
     *  Logic: '<S512>/Logical1'
     *  Logic: '<S512>/Logical4'
     *  Logic: '<S512>/Logical6'
     *  Logic: '<S512>/Logical7'
     */
    rtb_Logical1_d4 = (((KePWDR_b_GlobalCond_SOCFlt_Ovrd) || rtb_AND_o) &&
                       ((!rtb_Logical1_cx) && rtb_RelationalOperator3_lx));

    /* UnitDelay: '<S704>/Unit Delay' incorporates:
     *  Constant: '<S683>/Calib'
     *  Logic: '<S525>/Logical'
     */
    rtb_UnitDelay_cp = ((KePWDR_b_SOCLowEnable) && rtb_Logical1_d4);

    /* S-Function (sfix_bitop): '<S687>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S688>/Bitwise Operator2'
     */
    rtb_AND_ip_tmp = ((uint32)rtb_TmpSignalConversionAtVeD_dm) & 64U;

    /* RelationalOperator: '<S687>/Relational Operator3' incorporates:
     *  Constant: '<S687>/Constant3'
     *  S-Function (sfix_bitop): '<S687>/Bitwise Operator2'
     */
    rtb_AND_fw = (rtb_AND_ip_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S687>/EdgeFalling1' */
    /* Logic: '<S687>/Logical Operator' incorporates:
     *  Logic: '<S690>/OR1'
     */
    rtb_AND_f = !rtb_AND_fw;

    /* End of Outputs for SubSystem: '<S687>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S687>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S688>/Bitwise Operator3'
     */
    rtb_Logical1_bu_tmp = ((uint32)rtb_TmpSignalConversionAtVeD_dm) & 1U;

    /* Logic: '<S687>/Logical10' incorporates:
     *  Constant: '<S681>/Calib'
     *  Logic: '<S688>/Logical10'
     */
    rtb_Logical1_bu_tmp_0 = !KePWDR_b_HB_BattSOC_Lo_LtchEnbl;

    /* Logic: '<S687>/Logical1' incorporates:
     *  Constant: '<S687>/Constant1'
     *  Logic: '<S687>/Logical Operator'
     *  Logic: '<S687>/Logical10'
     *  Logic: '<S687>/Logical12'
     *  RelationalOperator: '<S687>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S687>/Bitwise Operator3'
     */
    rtb_Logical1_cx = (rtb_UnitDelay_cp && (rtb_Logical1_bu_tmp_0 ||
                        ((rtb_Logical1_bu_tmp == 0U) || rtb_AND_f)));

    /* RelationalOperator: '<S525>/Comparison5' incorporates:
     *  Constant: '<S669>/Constant'
     */
    rtb_Comparison5_l1 = (((uint32)rtb_TmpSignalConversionAtVeOBCR) !=
                          CeOBCR_e_ChargingLvlDefault);

    /* Outputs for Atomic SubSystem: '<S525>/EdgeRising' */
    /* Logic: '<S668>/AND' incorporates:
     *  Logic: '<S668>/OR1'
     *  UnitDelay: '<S668>/Unit Delay'
     */
    rtb_AND_o = (rtb_Comparison5_l1 && (!PWDR_ac_DW.UnitDelay_DSTATE_kj));

    /* Update for UnitDelay: '<S668>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_kj = rtb_Comparison5_l1;

    /* End of Outputs for SubSystem: '<S525>/EdgeRising' */

    /* Logic: '<S525>/Logical1' */
    rtb_TmpSignalConversionAtVeHPMR = (rtb_NOT4_l || rtb_AND_o);

    /* Outputs for Atomic SubSystem: '<S687>/EdgeFalling1' */
    /* Logic: '<S690>/AND' incorporates:
     *  UnitDelay: '<S690>/Unit Delay'
     */
    rtb_AND_f = (rtb_AND_f && (PWDR_ac_DW.UnitDelay_DSTATE_ld));

    /* Update for UnitDelay: '<S690>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ld = rtb_AND_fw;

    /* End of Outputs for SubSystem: '<S687>/EdgeFalling1' */

    /* Logic: '<S687>/Logical5' */
    rtb_AND_f = (rtb_TmpSignalConversionAtVeHPMR || rtb_AND_f);

    /* Logic: '<S689>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S689>/Unit Delay'
     *  UnitDelay: '<S689>/Unit Delay1'
     */
    rtb_FailCounterReset_e0 = ((rtb_AND_f || (PWDR_ac_DW.UnitDelay_DSTATE_ea)) ||
        (PWDR_ac_DW.UnitDelay1_DSTATE_m));

    /* Outputs for Atomic SubSystem: '<S689>/Counter Reset  Enabled 1' */
    /* Switch: '<S697>/Switch1' incorporates:
     *  Switch: '<S697>/Switch2'
     */
    if (rtb_FailCounterReset_e0)
    {
        /* Switch: '<S697>/Switch1' incorporates:
         *  Constant: '<S697>/Constant Value2'
         */
        VePWDD_Cnt_SOCL_FailSmpl = 0U;
    }
    else if (rtb_Logical1_cx)
    {
        /* Switch: '<S697>/Switch2' incorporates:
         *  Constant: '<S697>/Constant Value1'
         *  Sum: '<S697>/Subtraction'
         *  Switch: '<S697>/Switch1'
         *  UnitDelay: '<S697>/Unit Delay'
         */
        VePWDD_Cnt_SOCL_FailSmpl = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }
    else
    {
        /* Switch: '<S697>/Switch1' incorporates:
         *  Switch: '<S697>/Switch2'
         *  UnitDelay: '<S697>/Unit Delay'
         */
        VePWDD_Cnt_SOCL_FailSmpl = PWDR_ac_DW.UnitDelay_DSTATE_l;
    }

    /* End of Switch: '<S697>/Switch1' */

    /* Update for UnitDelay: '<S697>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_l = VePWDD_Cnt_SOCL_FailSmpl;

    /* End of Outputs for SubSystem: '<S689>/Counter Reset  Enabled 1' */

    /* Switch: '<S670>/Switch1' incorporates:
     *  Constant: '<S682>/Calib'
     */
    if (KePWDR_b_SOCLowCntrlEnbl)
    {
        /* Switch: '<S670>/Switch1' */
        VePWDD_Pct_SOCLowFBVal = rtb_TmpSignalConversionAtVeBP_a;
    }
    else
    {
        /* Switch: '<S670>/Switch1' incorporates:
         *  Constant: '<S675>/Calib'
         */
        VePWDD_Pct_SOCLowFBVal = KePWDR_Pct_SOCLowCntrlVal;
    }

    /* End of Switch: '<S670>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&rtb_GreaterThanorEqual_nv);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */
    /* Logic: '<S525>/Logical4' */
    rtb_AND_fw = !rtb_GreaterThanorEqual_nv;

    /* Switch: '<S525>/Switch2' incorporates:
     *  Constant: '<S676>/Calib'
     *  Lookup_n-D: '<S684>/Vector'
     *  Lookup_n-D: '<S685>/Vector'
     *  Switch: '<S525>/Switch1'
     *  Switch: '<S670>/Switch1'
     */
    if (rtb_Comparison5_l1)
    {
        rtb_TmpSignalConversionAtVeBPCR = look1_iflf_binlcapw
            (VePWDD_Pct_SOCLowFBVal, ((const float32 *)
              &(KxPWDR_P_SOCLowActBatPowThrshld[0])), ((const float32 *)
              &(KtPWDR_P_SOCLowActBatPowThrshld[0])), 2U);
        rtb_Comparison5_b = KePWDR_Pct_SOCLowThrshld;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR = look1_iflf_binlcapw
            (VePWDD_Pct_SOCLowFBVal, ((const float32 *)
              &(KxPWDR_P_SOCLowActBatPowThrshldNtChrgng[0])), ((const float32 *)
              &(KtPWDR_P_SOCLowActBatPowThrshldNtChrgng[0])), 2U);

        /* Switch: '<S525>/Switch3' incorporates:
         *  Constant: '<S677>/Calib'
         *  Constant: '<S678>/Calib'
         *  Lookup_n-D: '<S685>/Vector'
         *  Switch: '<S670>/Switch1'
         */
        if (rtb_AND_fw)
        {
            rtb_Comparison5_b = KePWDR_Pct_SOCLowThrshldNtChrgng_InPlant;
        }
        else
        {
            rtb_Comparison5_b = KePWDR_Pct_SOCLowThrshldNtChrgng;
        }

        /* End of Switch: '<S525>/Switch3' */
    }

    /* End of Switch: '<S525>/Switch2' */

    /* Logic: '<S525>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S525>/Greater  Than4'
     *  RelationalOperator: '<S525>/Greater  Than6'
     */
    VePWDD_b_SOCLowRemdEvent = ((rtb_TmpSignalConversionAtVeHVTR >
        rtb_TmpSignalConversionAtVeBPCR) && (VePWDD_Pct_SOCLowFBVal <
        rtb_Comparison5_b));

    /* Outputs for Atomic SubSystem: '<S689>/Counter Reset  Enabled ' */
    /* Switch: '<S696>/Switch1' incorporates:
     *  Logic: '<S689>/NOT6'
     *  Switch: '<S696>/Switch2'
     */
    if (rtb_FailCounterReset_e0)
    {
        /* Switch: '<S696>/Switch1' incorporates:
         *  Constant: '<S696>/Constant Value2'
         */
        VePWDD_Cnt_SOCL_Fail = 0U;
    }
    else if (rtb_Logical1_cx && (VePWDD_b_SOCLowRemdEvent))
    {
        /* Switch: '<S696>/Switch2' incorporates:
         *  Constant: '<S696>/Constant Value1'
         *  Sum: '<S696>/Subtraction'
         *  Switch: '<S696>/Switch1'
         *  UnitDelay: '<S696>/Unit Delay'
         */
        VePWDD_Cnt_SOCL_Fail = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_f)
            + 1U);
    }
    else
    {
        /* Switch: '<S696>/Switch1' incorporates:
         *  Switch: '<S696>/Switch2'
         *  UnitDelay: '<S696>/Unit Delay'
         */
        VePWDD_Cnt_SOCL_Fail = PWDR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S696>/Switch1' */

    /* Update for UnitDelay: '<S696>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_f = VePWDD_Cnt_SOCL_Fail;

    /* End of Outputs for SubSystem: '<S689>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S689>/Greater Than or Equal ' incorporates:
     *  Constant: '<S671>/Calib'
     */
    rtb_GreaterThanorEqual_nv = (((float32)VePWDD_Cnt_SOCL_Fail) >=
        KePWDR_Cnt_SOCLowFailureCntLmt);

    /* Logic: '<S689>/NOT5' incorporates:
     *  Constant: '<S672>/Calib'
     *  Logic: '<S689>/NOT3'
     *  RelationalOperator: '<S689>/Less Than  or Equal'
     */
    rtb_Logical1_cx = ((VePWDD_Cnt_SOCL_FailSmpl >=
                        KePWDR_Cnt_SOCLowFailureSmplCntLmt) &&
                       (!rtb_GreaterThanorEqual_nv));

    /* Outputs for Enabled SubSystem: '<S687>/Pass' */
    PWDR_ac_Pass(rtb_Logical1_cx, (&(VePWDR_e_SOCLowFltStat)));

    /* End of Outputs for SubSystem: '<S687>/Pass' */

    /* Outputs for Enabled SubSystem: '<S687>/Fail' */
    PWDR_ac_Fail(rtb_GreaterThanorEqual_nv, (&(VePWDR_e_SOCLowFltStat)));

    /* End of Outputs for SubSystem: '<S687>/Fail' */

    /* Outputs for Enabled SubSystem: '<S687>/Init' */
    PWDR_ac_Init_a(rtb_AND_f, (&(VePWDR_e_SOCLowFltStat)));

    /* End of Outputs for SubSystem: '<S687>/Init' */

    /* RelationalOperator: '<S687>/Relational Operator' incorporates:
     *  Constant: '<S691>/Constant'
     *  Merge: '<S687>/Merge'
     */
    rtb_Comparison5_l1 = (((uint32)VePWDR_e_SOCLowFltStat) == CeDFIB_e_Fail);

    /* Logic: '<S524>/Logical' incorporates:
     *  Constant: '<S634>/Calib'
     */
    VePWDR_b_SOCHighDiagEnbl = ((KePWDR_b_SOCHighEnable) && rtb_Logical1_d4);

    /* S-Function (sfix_bitop): '<S638>/Bitwise Operator2' incorporates:
     *  S-Function (sfix_bitop): '<S639>/Bitwise Operator2'
     */
    rtb_GreaterThan4_tmp = ((uint32)rtb_TmpSignalConversionAtVeDMAB) & 64U;

    /* RelationalOperator: '<S638>/Relational Operator3' incorporates:
     *  Constant: '<S638>/Constant3'
     *  S-Function (sfix_bitop): '<S638>/Bitwise Operator2'
     */
    rtb_GreaterThan4 = (rtb_GreaterThan4_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S638>/EdgeFalling1' */
    /* Logic: '<S638>/Logical Operator' incorporates:
     *  Logic: '<S641>/OR1'
     */
    rtb_AND_d = !rtb_GreaterThan4;

    /* End of Outputs for SubSystem: '<S638>/EdgeFalling1' */

    /* S-Function (sfix_bitop): '<S638>/Bitwise Operator3' incorporates:
     *  S-Function (sfix_bitop): '<S639>/Bitwise Operator3'
     */
    rtb_AND_mp_tmp = ((uint32)rtb_TmpSignalConversionAtVeDMAB) & 1U;

    /* Logic: '<S638>/Logical10' incorporates:
     *  Constant: '<S632>/Calib'
     *  Logic: '<S639>/Logical10'
     */
    rtb_AND_mp_tmp_0 = !KePWDR_b_HB_BattSOC_Hi_LtchEnbl;

    /* Logic: '<S638>/Logical1' incorporates:
     *  Constant: '<S638>/Constant1'
     *  Logic: '<S638>/Logical Operator'
     *  Logic: '<S638>/Logical10'
     *  Logic: '<S638>/Logical12'
     *  RelationalOperator: '<S638>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S638>/Bitwise Operator3'
     */
    rtb_AND_f = ((VePWDR_b_SOCHighDiagEnbl) && (rtb_AND_mp_tmp_0 ||
                  ((rtb_AND_mp_tmp == 0U) || rtb_AND_d)));

    /* RelationalOperator: '<S524>/Comparison5' incorporates:
     *  Constant: '<S622>/Constant'
     */
    rtb_FailCounterReset_e0 = (((uint32)rtb_TmpSignalConversionAtVeOBCR) !=
        CeOBCR_e_ChargingLvlDefault);

    /* Outputs for Atomic SubSystem: '<S524>/EdgeRising' */
    /* Logic: '<S621>/AND' incorporates:
     *  Logic: '<S621>/OR1'
     *  UnitDelay: '<S621>/Unit Delay'
     */
    rtb_AND_h5 = (rtb_FailCounterReset_e0 && (!PWDR_ac_DW.UnitDelay_DSTATE_ko));

    /* Update for UnitDelay: '<S621>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ko = rtb_FailCounterReset_e0;

    /* End of Outputs for SubSystem: '<S524>/EdgeRising' */

    /* Logic: '<S524>/Logical1' */
    rtb_Logical1_d4 = (rtb_NOT4_l || rtb_AND_h5);

    /* Outputs for Atomic SubSystem: '<S638>/EdgeFalling1' */
    /* Logic: '<S641>/AND' incorporates:
     *  UnitDelay: '<S641>/Unit Delay'
     */
    rtb_AND_d = (rtb_AND_d && (PWDR_ac_DW.UnitDelay_DSTATE_mq));

    /* Update for UnitDelay: '<S641>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_mq = rtb_GreaterThan4;

    /* End of Outputs for SubSystem: '<S638>/EdgeFalling1' */

    /* Logic: '<S638>/Logical5' */
    rtb_GreaterThan4 = (rtb_Logical1_d4 || rtb_AND_d);

    /* Logic: '<S640>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S640>/Unit Delay'
     *  UnitDelay: '<S640>/Unit Delay1'
     */
    rtb_AND_d = ((rtb_GreaterThan4 || (PWDR_ac_DW.UnitDelay_DSTATE_aq)) ||
                 (PWDR_ac_DW.UnitDelay1_DSTATE_a));

    /* Outputs for Atomic SubSystem: '<S640>/Counter Reset  Enabled 1' */
    /* Switch: '<S648>/Switch1' incorporates:
     *  Switch: '<S648>/Switch2'
     */
    if (rtb_AND_d)
    {
        /* Switch: '<S648>/Switch1' incorporates:
         *  Constant: '<S648>/Constant Value2'
         */
        VePWDD_Cnt_SOCH_FailSmpl = 0U;
    }
    else if (rtb_AND_f)
    {
        /* Switch: '<S648>/Switch2' incorporates:
         *  Constant: '<S648>/Constant Value1'
         *  Sum: '<S648>/Subtraction'
         *  Switch: '<S648>/Switch1'
         *  UnitDelay: '<S648>/Unit Delay'
         */
        VePWDD_Cnt_SOCH_FailSmpl = (uint16)(((uint32)
            PWDR_ac_DW.UnitDelay_DSTATE_o) + 1U);
    }
    else
    {
        /* Switch: '<S648>/Switch1' incorporates:
         *  Switch: '<S648>/Switch2'
         *  UnitDelay: '<S648>/Unit Delay'
         */
        VePWDD_Cnt_SOCH_FailSmpl = PWDR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S648>/Switch1' */

    /* Update for UnitDelay: '<S648>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_o = VePWDD_Cnt_SOCH_FailSmpl;

    /* End of Outputs for SubSystem: '<S640>/Counter Reset  Enabled 1' */

    /* Switch: '<S623>/Switch1' incorporates:
     *  Constant: '<S633>/Calib'
     */
    if (KePWDR_b_SOCHighCntrlEnbl)
    {
        /* Switch: '<S623>/Switch1' */
        VePWDD_Pct_SOCHighFBVal = rtb_TmpSignalConversionAtVeBP_a;
    }
    else
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  Constant: '<S628>/Calib'
         */
        VePWDD_Pct_SOCHighFBVal = KePWDR_Pct_SOCHighCntrlVal;
    }

    /* End of Switch: '<S623>/Switch1' */

    /* Switch: '<S524>/Switch2' incorporates:
     *  Constant: '<S629>/Calib'
     *  Constant: '<S630>/Calib'
     *  Switch: '<S524>/Switch1'
     */
    if (rtb_FailCounterReset_e0)
    {
        /* Switch: '<S560>/Switch' incorporates:
         *  Lookup_n-D: '<S635>/Vector'
         *  Switch: '<S623>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR = look1_iflf_binlcapw
            (VePWDD_Pct_SOCHighFBVal, ((const float32 *)
              &(KxPWDR_P_SOCHighActBatPowThrshld[0])), ((const float32 *)
              &(KtPWDR_P_SOCHighActBatPowThrshld[0])), 2U);
        rtb_Comparison5_b = KePWDR_Pct_SOCHighThrshld;
    }
    else
    {
        /* Switch: '<S560>/Switch' incorporates:
         *  Lookup_n-D: '<S636>/Vector'
         *  Switch: '<S623>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR = look1_iflf_binlcapw
            (VePWDD_Pct_SOCHighFBVal, ((const float32 *)
              &(KxPWDR_P_SOCHighActBatPowThrshldNtChrgng[0])), ((const float32 *)
              &(KtPWDR_P_SOCHighActBatPowThrshldNtChrgng[0])), 2U);
        rtb_Comparison5_b = KePWDR_Pct_SOCHighThrshldNtChrgng;
    }

    /* End of Switch: '<S524>/Switch2' */

    /* Logic: '<S524>/Logical Operator1' incorporates:
     *  RelationalOperator: '<S524>/Greater  Than2'
     *  RelationalOperator: '<S524>/Greater  Than3'
     */
    VePWDR_b_SOCHiRemdEvent = ((rtb_TmpSignalConversionAtVeHVTR <
        rtb_TmpSignalConversionAtVeBPCR) && (VePWDD_Pct_SOCHighFBVal >
        rtb_Comparison5_b));

    /* Outputs for Atomic SubSystem: '<S640>/Counter Reset  Enabled ' */
    /* Switch: '<S647>/Switch1' incorporates:
     *  Logic: '<S640>/NOT6'
     *  Switch: '<S647>/Switch2'
     */
    if (rtb_AND_d)
    {
        /* Switch: '<S647>/Switch1' incorporates:
         *  Constant: '<S647>/Constant Value2'
         */
        VePWDD_Cnt_SOCH_Fail = 0U;
    }
    else if (rtb_AND_f && (VePWDR_b_SOCHiRemdEvent))
    {
        /* Switch: '<S647>/Switch2' incorporates:
         *  Constant: '<S647>/Constant Value1'
         *  Sum: '<S647>/Subtraction'
         *  Switch: '<S647>/Switch1'
         *  UnitDelay: '<S647>/Unit Delay'
         */
        VePWDD_Cnt_SOCH_Fail = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_hv)
            + 1U);
    }
    else
    {
        /* Switch: '<S647>/Switch1' incorporates:
         *  Switch: '<S647>/Switch2'
         *  UnitDelay: '<S647>/Unit Delay'
         */
        VePWDD_Cnt_SOCH_Fail = PWDR_ac_DW.UnitDelay_DSTATE_hv;
    }

    /* End of Switch: '<S647>/Switch1' */
    /* End of Outputs for SubSystem: '<S640>/Counter Reset  Enabled ' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeHTDR_M_OutTorqReqModHH' */
    (void)Rte_Read_VeHTDR_M_OutTorqReqModHH_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSRAR_b_EngStrtStpEngShtDwn' */
    (void)Rte_Read_VeSRAR_b_EngStrtStpEngShtDwn_Value(&rtb_Comparison2_k);

    /* Inport: '<Root>/VeENGR_b_CatalystWarmUpEnabled' */
    (void)Rte_Read_VeENGR_b_CatalystWarmUpEnabled_Value(&rtb_AND_m);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */
    /* Outputs for Atomic SubSystem: '<S640>/Counter Reset  Enabled ' */
    /* Update for UnitDelay: '<S647>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_hv = VePWDD_Cnt_SOCH_Fail;

    /* End of Outputs for SubSystem: '<S640>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S640>/Greater Than or Equal ' incorporates:
     *  Constant: '<S624>/Calib'
     */
    rtb_AND_f = (((float32)VePWDD_Cnt_SOCH_Fail) >=
                 KePWDR_Cnt_SOCHighFailureCntLmt);

    /* Logic: '<S640>/NOT5' incorporates:
     *  Constant: '<S625>/Calib'
     *  Logic: '<S640>/NOT3'
     *  RelationalOperator: '<S640>/Less Than  or Equal'
     */
    rtb_FailCounterReset_e0 = ((VePWDD_Cnt_SOCH_FailSmpl >=
        KePWDR_Cnt_SOCHighFailureSmplCntLmt) && (!rtb_AND_f));

    /* Outputs for Enabled SubSystem: '<S638>/Pass' */
    PWDR_ac_Pass(rtb_FailCounterReset_e0, (&(VePWDR_e_SOCHighFltStat)));

    /* End of Outputs for SubSystem: '<S638>/Pass' */

    /* Outputs for Enabled SubSystem: '<S638>/Fail' */
    PWDR_ac_Fail(rtb_AND_f, (&(VePWDR_e_SOCHighFltStat)));

    /* End of Outputs for SubSystem: '<S638>/Fail' */

    /* Outputs for Enabled SubSystem: '<S638>/Init' */
    PWDR_ac_Init_a(rtb_GreaterThan4, (&(VePWDR_e_SOCHighFltStat)));

    /* End of Outputs for SubSystem: '<S638>/Init' */

    /* RelationalOperator: '<S638>/Relational Operator' incorporates:
     *  Constant: '<S642>/Constant'
     *  Merge: '<S638>/Merge'
     */
    rtb_GreaterThan4 = (((uint32)VePWDR_e_SOCHighFltStat) == CeDFIB_e_Fail);

    /* Logic: '<S561>/Logical5' */
    VePWDD_b_1A26_Test1 = !rtb_AND_m;

    /* Logic: '<S561>/Logical8' */
    VePWDD_b_1A26_Test2 = !rtb_Comparison2_k;

    /* Outputs for Atomic SubSystem: '<S561>/ClosedInterval' */
    /* Logic: '<S585>/Logical Operator' incorporates:
     *  Constant: '<S588>/Calib'
     *  Constant: '<S589>/Calib'
     *  RelationalOperator: '<S585>/Relatonal Operator'
     *  RelationalOperator: '<S585>/Relatonal Operator1'
     */
    VePWDD_b_1A26_Test3 = ((rtb_TmpSignalConversionAtVeTITR >=
                            KePWDR_M_EngTorqMin) &&
                           (rtb_TmpSignalConversionAtVeTITR <=
                            KePWDR_M_EngTorqMax));

    /* End of Outputs for SubSystem: '<S561>/ClosedInterval' */

    /* RelationalOperator: '<S561>/Comparison2' incorporates:
     *  Constant: '<S590>/Calib'
     */
    rtb_Comparison2_k = (tmpRead_1 < KePWDR_M_OutTqReqMin);

    /* Outputs for Atomic SubSystem: '<S561>/Turn On Delay Sample1' */
    /* Outputs for Atomic SubSystem: '<S594>/EdgeRising' */
    /* Logic: '<S596>/AND' incorporates:
     *  Logic: '<S596>/OR1'
     *  UnitDelay: '<S596>/Unit Delay'
     */
    rtb_AND_m = (rtb_Comparison2_k && (!PWDR_ac_DW.UnitDelay_DSTATE_je));

    /* Update for UnitDelay: '<S596>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_je = rtb_Comparison2_k;

    /* End of Outputs for SubSystem: '<S594>/EdgeRising' */

    /* Switch: '<S594>/Switch1' incorporates:
     *  Constant: '<S586>/Calib'
     *  Constant: '<S594>/Constant Value'
     *  Logic: '<S594>/OR'
     *  Logic: '<S594>/OR1'
     *  MinMax: '<S594>/Minimum'
     *  Sum: '<S594>/Summation'
     *  UnitDelay: '<S594>/Unit Delay'
     */
    if ((!rtb_Comparison2_k) || rtb_AND_m)
    {
        /* Switch: '<S594>/Switch1' incorporates:
         *  Constant: '<S594>/Constant Value1'
         */
        rtb_Switch1_jt = 0U;
    }
    else if (KePWDR_Cnt_DbncOutTqReq < ((uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_f1) + 1U)))
    {
        /* MinMax: '<S594>/Minimum' incorporates:
         *  Constant: '<S586>/Calib'
         *  Switch: '<S594>/Switch1'
         */
        rtb_Switch1_jt = KePWDR_Cnt_DbncOutTqReq;
    }
    else
    {
        /* Switch: '<S594>/Switch1' incorporates:
         *  Constant: '<S594>/Constant Value'
         *  MinMax: '<S594>/Minimum'
         *  Sum: '<S594>/Summation'
         *  UnitDelay: '<S594>/Unit Delay'
         */
        rtb_Switch1_jt = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_f1) + 1U);
    }

    /* End of Switch: '<S594>/Switch1' */
    /* End of Outputs for SubSystem: '<S561>/Turn On Delay Sample1' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeESSR_e_HybEngSysActv' */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEH'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/PWDR_Diag_ESMR'
     */
    /* Outputs for Atomic SubSystem: '<S561>/Turn On Delay Sample1' */
    /* Logic: '<S594>/AND' incorporates:
     *  Constant: '<S586>/Calib'
     *  RelationalOperator: '<S594>/Greater  Than'
     */
    VePWDD_b_1A26_Test4 = (rtb_Comparison2_k && (rtb_Switch1_jt >=
                            KePWDR_Cnt_DbncOutTqReq));

    /* Update for UnitDelay: '<S594>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_f1 = rtb_Switch1_jt;

    /* End of Outputs for SubSystem: '<S561>/Turn On Delay Sample1' */

    /* Logic: '<S561>/Logical' incorporates:
     *  Constant: '<S593>/Calib'
     *  Logic: '<S561>/Logical1'
     *  Logic: '<S561>/Logical4'
     */
    rtb_Comparison2_k = ((((((((((KePWDR_b_SOCRatEnable) && (VePWDR_b_PSA_Enable))
        && (VePWDR_b_TempTest_1A26)) && (!rtb_Comparison5_l1)) &&
        (!rtb_GreaterThan4)) && rtb_RelationalOperator3_lx) &&
                            (VePWDD_b_1A26_Test1)) && (VePWDD_b_1A26_Test2)) &&
                          (VePWDD_b_1A26_Test3)) && (VePWDD_b_1A26_Test4));

    /* RelationalOperator: '<S598>/Relational Operator3' incorporates:
     *  Constant: '<S598>/Constant3'
     *  S-Function (sfix_bitop): '<S598>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_lx = ((((uint32)rtb_TmpSignalConversionAtVeDM_c) &
        64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S598>/EdgeFalling1' */
    /* Logic: '<S598>/Logical Operator' incorporates:
     *  Logic: '<S601>/OR1'
     */
    rtb_AND_d = !rtb_RelationalOperator3_lx;

    /* End of Outputs for SubSystem: '<S598>/EdgeFalling1' */

    /* Logic: '<S598>/OR7' incorporates:
     *  Constant: '<S565>/Calib'
     *  Constant: '<S598>/Constant1'
     *  Logic: '<S598>/Logical Operator'
     *  Logic: '<S598>/Logical10'
     *  Logic: '<S598>/Logical12'
     *  Logic: '<S598>/OR1'
     *  RelationalOperator: '<S598>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S598>/Bitwise Operator3'
     */
    rtb_AND_py_tmp = ((rtb_Comparison2_k && ((!KePWDR_b_BPCM_P1A26_LtchEnbl) ||
                        (((((uint32)rtb_TmpSignalConversionAtVeDM_c) & 1U) == 0U)
                         || rtb_AND_d))) && rtb_Comparison2_k);

    /* Switch: '<S560>/Switch' incorporates:
     *  Constant: '<S567>/Constant'
     *  Constant: '<S569>/Calib'
     *  Constant: '<S570>/Calib'
     *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
     *  RelationalOperator: '<S560>/Comparison1'
     */
    if (((uint32)tmpRead_0) == CeESSR_e_HybEngEnabledOn)
    {
        tmpRead_1 = KePWDR_Pct_AStopBatSOCMin1;
    }
    else
    {
        tmpRead_1 = KePWDR_Pct_ZeroSpdStopBatSOCMin;
    }

    /* End of Switch: '<S560>/Switch' */

    /* Logic: '<S560>/Logical Operator' incorporates:
     *  RelationalOperator: '<S560>/Comparison'
     */
    rtb_LogicalOperator_ke = (rtb_Comparison2_k &&
        (rtb_TmpSignalConversionAtVeBP_a < tmpRead_1));

    /* Logic: '<S572>/Logical3' incorporates:
     *  Logic: '<S598>/OR3'
     */
    rtb_Logical2 = !rtb_Comparison2_k;

    /* Logic: '<S572>/Logical4' incorporates:
     *  Logic: '<S572>/Logical Operator'
     *  Logic: '<S572>/Logical3'
     *  Logic: '<S572>/Logical6'
     *  Logic: '<S572>/Logical8'
     *  UnitDelay: '<S572>/Unit Delay1'
     *  UnitDelay: '<S572>/Unit Delay2'
     */
    VePWDR_b_SOCMonResetTimer1 = ((((!rtb_LogicalOperator_ke) &&
        (!PWDR_ac_DW.UnitDelay1_DSTATE_k)) || (PWDR_ac_DW.UnitDelay2_DSTATE_n)) ||
        rtb_Logical2);

    /* Outputs for Atomic SubSystem: '<S568>/Counter Reset  Enabled ' */
    /* Switch: '<S573>/Switch1' incorporates:
     *  Switch: '<S573>/Switch2'
     */
    if (VePWDR_b_SOCMonResetTimer1)
    {
        /* Switch: '<S573>/Switch1' incorporates:
         *  Constant: '<S573>/Constant Value2'
         */
        VePWDR_Cnt_Timer1 = 0U;
    }
    else if (rtb_LogicalOperator_ke)
    {
        /* Switch: '<S573>/Switch2' incorporates:
         *  Constant: '<S573>/Constant Value1'
         *  Sum: '<S573>/Subtraction'
         *  Switch: '<S573>/Switch1'
         *  UnitDelay: '<S573>/Unit Delay'
         */
        VePWDR_Cnt_Timer1 = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_gq) +
            1U);
    }
    else
    {
        /* Switch: '<S573>/Switch1' incorporates:
         *  Switch: '<S573>/Switch2'
         *  UnitDelay: '<S573>/Unit Delay'
         */
        VePWDR_Cnt_Timer1 = PWDR_ac_DW.UnitDelay_DSTATE_gq;
    }

    /* End of Switch: '<S573>/Switch1' */

    /* Update for UnitDelay: '<S573>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_gq = VePWDR_Cnt_Timer1;

    /* End of Outputs for SubSystem: '<S568>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S568>/Comparison1' incorporates:
     *  Constant: '<S576>/Calib'
     */
    rtb_AND_m = (VePWDR_Cnt_Timer1 >= KePWDR_Cnt_Runtime1_MaxVal);

    /* Switch: '<S580>/Switch1' incorporates:
     *  Constant: '<S579>/Constant'
     *  RelationalOperator: '<S579>/Compare'
     */
    if (((sint32)VePWDR_Cnt_Timer1) == 0)
    {
        /* Switch: '<S580>/Switch1' */
        rtb_TmpSignalConversionAtVeHVTR = rtb_TmpSignalConversionAtVeBP_a;
    }
    else
    {
        /* Switch: '<S580>/Switch1' incorporates:
         *  UnitDelay: '<S577>/Unit Delay4'
         */
        rtb_TmpSignalConversionAtVeHVTR = PWDR_ac_DW.UnitDelay4_DSTATE;
    }

    /* End of Switch: '<S580>/Switch1' */

    /* If: '<S568>/If' */
    if (rtb_AND_m)
    {
        /* Outputs for IfAction SubSystem: '<S568>/If Action Subsystem' incorporates:
         *  ActionPort: '<S574>/Action Port'
         */
        /* Merge: '<S568>/Merge' incorporates:
         *  Constant: '<S578>/Calib'
         *  RelationalOperator: '<S574>/Comparison3'
         *  Sum: '<S574>/Sum1'
         */
        PWDR_ac_B.VePWDR_b_SOCRatFA = ((rtb_TmpSignalConversionAtVeBP_a -
            rtb_TmpSignalConversionAtVeHVTR) <= KePWDR_Pct_delSOC);

        /* End of Outputs for SubSystem: '<S568>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S568>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S575>/Action Port'
         */
        PWDR_ac_IfActionSubsystem1(&PWDR_ac_B.VePWDR_b_SOCRatFA);

        /* End of Outputs for SubSystem: '<S568>/If Action Subsystem1' */
    }

    /* End of If: '<S568>/If' */

    /* Outputs for Atomic SubSystem: '<S598>/EdgeFalling1' */
    /* Logic: '<S601>/AND' incorporates:
     *  UnitDelay: '<S601>/Unit Delay'
     */
    rtb_AND_k2 = (rtb_AND_d && (PWDR_ac_DW.UnitDelay_DSTATE_dc));

    /* Update for UnitDelay: '<S601>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_dc = rtb_RelationalOperator3_lx;

    /* End of Outputs for SubSystem: '<S598>/EdgeFalling1' */

    /* Logic: '<S598>/OR6' incorporates:
     *  Logic: '<S598>/OR2'
     */
    rtb_AND_k2 = (rtb_Logical2 || (rtb_NOT4_l || rtb_AND_k2));

    /* Logic: '<S599>/Fail Counter Reset' incorporates:
     *  Logic: '<S598>/OR4'
     *  UnitDelay: '<S598>/Unit Delay'
     *  UnitDelay: '<S599>/Unit Delay'
     *  UnitDelay: '<S599>/Unit Delay1'
     */
    rtb_FailCounterReset_e2 = (((rtb_AND_k2 || (PWDR_ac_DW.UnitDelay_DSTATE_bv))
        || (PWDR_ac_DW.UnitDelay_DSTATE_pr)) || (PWDR_ac_DW.UnitDelay1_DSTATE_f));

    /* Outputs for Atomic SubSystem: '<S599>/Counter Reset  Enabled ' */
    /* Switch: '<S607>/Switch1' incorporates:
     *  Logic: '<S598>/OR7'
     *  Logic: '<S599>/NOT6'
     *  Switch: '<S607>/Switch2'
     */
    if (rtb_FailCounterReset_e2)
    {
        /* Switch: '<S607>/Switch1' incorporates:
         *  Constant: '<S607>/Constant Value2'
         */
        rtb_Switch1_jt = 0U;
    }
    else if (rtb_AND_py_tmp && (PWDR_ac_B.VePWDR_b_SOCRatFA))
    {
        /* Switch: '<S607>/Switch2' incorporates:
         *  Constant: '<S607>/Constant Value1'
         *  Sum: '<S607>/Subtraction'
         *  Switch: '<S607>/Switch1'
         *  UnitDelay: '<S607>/Unit Delay'
         */
        rtb_Switch1_jt = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_n) + 1U);
    }
    else
    {
        /* Switch: '<S607>/Switch1' incorporates:
         *  Switch: '<S607>/Switch2'
         *  UnitDelay: '<S607>/Unit Delay'
         */
        rtb_Switch1_jt = PWDR_ac_DW.UnitDelay_DSTATE_n;
    }

    /* End of Switch: '<S607>/Switch1' */

    /* Update for UnitDelay: '<S607>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_n = rtb_Switch1_jt;

    /* End of Outputs for SubSystem: '<S599>/Counter Reset  Enabled ' */

    /* Logic: '<S572>/Logical2' incorporates:
     *  Logic: '<S572>/Logical Operator2'
     *  Logic: '<S572>/Logical3'
     *  Logic: '<S572>/Logical7'
     *  UnitDelay: '<S572>/Unit Delay'
     *  UnitDelay: '<S572>/Unit Delay3'
     */
    VePWDR_b_SOCMonResetTimer2 = ((rtb_Logical2 || (PWDR_ac_DW.UnitDelay3_DSTATE))
        || (rtb_LogicalOperator_ke && (!PWDR_ac_DW.UnitDelay_DSTATE_pm)));

    /* Outputs for Atomic SubSystem: '<S571>/Counter Reset  Enabled 1' */
    /* Switch: '<S581>/Switch1' incorporates:
     *  Logic: '<S560>/Logical1'
     *  Switch: '<S581>/Switch2'
     */
    if (VePWDR_b_SOCMonResetTimer2)
    {
        /* Switch: '<S581>/Switch1' incorporates:
         *  Constant: '<S581>/Constant Value2'
         */
        VePWDD_Cnt_Timer2 = 0U;
    }
    else if (!rtb_LogicalOperator_ke)
    {
        /* Switch: '<S581>/Switch2' incorporates:
         *  Constant: '<S581>/Constant Value1'
         *  Sum: '<S581>/Subtraction'
         *  Switch: '<S581>/Switch1'
         *  UnitDelay: '<S581>/Unit Delay'
         */
        VePWDD_Cnt_Timer2 = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_a3) +
            1U);
    }
    else
    {
        /* Switch: '<S581>/Switch1' incorporates:
         *  Switch: '<S581>/Switch2'
         *  UnitDelay: '<S581>/Unit Delay'
         */
        VePWDD_Cnt_Timer2 = PWDR_ac_DW.UnitDelay_DSTATE_a3;
    }

    /* End of Switch: '<S581>/Switch1' */

    /* Update for UnitDelay: '<S581>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_a3 = VePWDD_Cnt_Timer2;

    /* End of Outputs for SubSystem: '<S571>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S571>/Comparison2' incorporates:
     *  Constant: '<S584>/Calib'
     */
    rtb_NOT4_l = (VePWDD_Cnt_Timer2 >= KePWDR_Cnt_Runtime2_MaxVal);

    /* If: '<S571>/If1' */
    if (rtb_NOT4_l)
    {
        /* Outputs for IfAction SubSystem: '<S571>/If Action Subsystem4' incorporates:
         *  ActionPort: '<S583>/Action Port'
         */
        /* Logic: '<S525>/Logical2' incorporates:
         *  Constant: '<S583>/TRUE Constant'
         *  SignalConversion generated from: '<S583>/Out2'
         */
        rtb_Logical2 = true;

        /* End of Outputs for SubSystem: '<S571>/If Action Subsystem4' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S571>/If Action Subsystem3' incorporates:
         *  ActionPort: '<S582>/Action Port'
         */
        PWDR_ac_IfActionSubsystem1(&rtb_Logical2);

        /* End of Outputs for SubSystem: '<S571>/If Action Subsystem3' */
    }

    /* End of If: '<S571>/If1' */

    /* Logic: '<S560>/Logical9' incorporates:
     *  Logic: '<S560>/Logical Operator3'
     *  Logic: '<S560>/Logical4'
     */
    VePWDR_b_SOCRat_Pass = (((!PWDR_ac_B.VePWDR_b_SOCRatFA) && rtb_AND_m) ||
                            rtb_Logical2);

    /* Logic: '<S600>/Fail Counter Reset' incorporates:
     *  Logic: '<S598>/OR5'
     *  UnitDelay: '<S598>/Unit Delay2'
     *  UnitDelay: '<S600>/Unit Delay'
     *  UnitDelay: '<S600>/Unit Delay1'
     */
    rtb_LogicalOperator_ke = (((rtb_AND_k2 || (PWDR_ac_DW.UnitDelay2_DSTATE_a)) ||
        (PWDR_ac_DW.UnitDelay_DSTATE_ay)) || (PWDR_ac_DW.UnitDelay1_DSTATE_n));

    /* Outputs for Atomic SubSystem: '<S600>/Counter Reset  Enabled ' */
    /* Switch: '<S609>/Switch1' incorporates:
     *  Logic: '<S600>/NOT6'
     *  Switch: '<S609>/Switch2'
     */
    if (rtb_LogicalOperator_ke)
    {
        /* Switch: '<S609>/Switch1' incorporates:
         *  Constant: '<S609>/Constant Value2'
         */
        rtb_Switch1_n2 = 0U;
    }
    else if (rtb_AND_py_tmp && (VePWDR_b_SOCRat_Pass))
    {
        /* Switch: '<S609>/Switch2' incorporates:
         *  Constant: '<S609>/Constant Value1'
         *  Sum: '<S609>/Subtraction'
         *  Switch: '<S609>/Switch1'
         *  UnitDelay: '<S609>/Unit Delay'
         */
        rtb_Switch1_n2 = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_g) + 1U);
    }
    else
    {
        /* Switch: '<S609>/Switch1' incorporates:
         *  Switch: '<S609>/Switch2'
         *  UnitDelay: '<S609>/Unit Delay'
         */
        rtb_Switch1_n2 = PWDR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S609>/Switch1' */

    /* Update for UnitDelay: '<S609>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_n2;

    /* End of Outputs for SubSystem: '<S600>/Counter Reset  Enabled ' */

    /* RelationalOperator: '<S600>/Greater Than or Equal ' incorporates:
     *  Constant: '<S564>/Calib'
     */
    rtb_UnitDelay_i1 = (rtb_Switch1_n2 >= KePWDR_Cnt_SmplLmtSOCPerf);

    /* Switch: '<S615>/Switch1' incorporates:
     *  Constant: '<S606>/Constant Value'
     *  DataStoreWrite: '<S514>/Data Store Write3'
     *  Switch: '<S614>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeDFIR)
    {
        PWDR_ac_DW.NePWDR_Cnt_BPCM_MFOP = 0U;
    }
    else
    {
        if (rtb_UnitDelay_i1)
        {
            /* MinMax: '<S606>/Minimum2' incorporates:
             *  DataStoreRead: '<S514>/Data Store Read3'
             *  Switch: '<S614>/Switch1'
             */
            if (rtb_Switch1_jt > PWDR_ac_DW.NePWDR_Cnt_BPCM_MFOP)
            {
                /* DataStoreWrite: '<S514>/Data Store Write3' incorporates:
                 *  Switch: '<S614>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_BPCM_MFOP = rtb_Switch1_jt;
            }

            /* End of MinMax: '<S606>/Minimum2' */
        }
    }

    /* End of Switch: '<S615>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S599>/Counter Reset  Enabled 1' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  Logic: '<S598>/OR7'
     *  Switch: '<S608>/Switch2'
     */
    if (rtb_FailCounterReset_e2)
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Constant: '<S608>/Constant Value2'
         */
        rtb_Switch1_n2 = 0U;
    }
    else if (rtb_AND_py_tmp)
    {
        /* Switch: '<S608>/Switch2' incorporates:
         *  Constant: '<S608>/Constant Value1'
         *  Sum: '<S608>/Subtraction'
         *  Switch: '<S608>/Switch1'
         *  UnitDelay: '<S608>/Unit Delay'
         */
        rtb_Switch1_n2 = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_lv) + 1U);
    }
    else
    {
        /* Switch: '<S608>/Switch1' incorporates:
         *  Switch: '<S608>/Switch2'
         *  UnitDelay: '<S608>/Unit Delay'
         */
        rtb_Switch1_n2 = PWDR_ac_DW.UnitDelay_DSTATE_lv;
    }

    /* End of Switch: '<S608>/Switch1' */

    /* Update for UnitDelay: '<S608>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lv = rtb_Switch1_n2;

    /* End of Outputs for SubSystem: '<S599>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S599>/Greater Than or Equal ' incorporates:
     *  Constant: '<S562>/Calib'
     */
    rtb_AND_d = (rtb_Switch1_jt >= KePWDR_Cnt_FailLmtSOCPerf);

    /* Logic: '<S599>/NOT5' incorporates:
     *  Constant: '<S563>/Calib'
     *  Logic: '<S599>/NOT3'
     *  RelationalOperator: '<S599>/Less Than  or Equal'
     */
    rtb_Logical2 = ((rtb_Switch1_n2 >= KePWDR_Cnt_PassLmtSOCPerf) && (!rtb_AND_d));

    /* Outputs for Atomic SubSystem: '<S600>/Counter Reset  Enabled 1' */
    /* Switch: '<S610>/Switch1' incorporates:
     *  Switch: '<S610>/Switch2'
     */
    if (rtb_LogicalOperator_ke)
    {
        /* Switch: '<S610>/Switch1' incorporates:
         *  Constant: '<S610>/Constant Value2'
         */
        rtb_Switch1_jt = 0U;
    }
    else if (rtb_AND_py_tmp)
    {
        /* Switch: '<S610>/Switch2' incorporates:
         *  Constant: '<S610>/Constant Value1'
         *  Sum: '<S610>/Subtraction'
         *  Switch: '<S610>/Switch1'
         *  UnitDelay: '<S610>/Unit Delay'
         */
        rtb_Switch1_jt = (uint16)(((uint32)PWDR_ac_DW.UnitDelay_DSTATE_m1) + 1U);
    }
    else
    {
        /* Switch: '<S610>/Switch1' incorporates:
         *  Switch: '<S610>/Switch2'
         *  UnitDelay: '<S610>/Unit Delay'
         */
        rtb_Switch1_jt = PWDR_ac_DW.UnitDelay_DSTATE_m1;
    }

    /* End of Switch: '<S610>/Switch1' */

    /* Update for UnitDelay: '<S610>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_m1 = rtb_Switch1_jt;

    /* End of Outputs for SubSystem: '<S600>/Counter Reset  Enabled 1' */

    /* Logic: '<S600>/NOT5' incorporates:
     *  Constant: '<S563>/Calib'
     *  Logic: '<S600>/NOT3'
     *  RelationalOperator: '<S600>/Less Than  or Equal'
     */
    rtb_RelationalOperator3_lx = ((rtb_Switch1_jt >= KePWDR_Cnt_PassLmtSOCPerf) &&
        (!rtb_UnitDelay_i1));

    /* Outputs for Enabled SubSystem: '<S598>/Fail' */
    PWDR_ac_Fail(rtb_AND_d, &PWDR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S598>/Fail' */

    /* Outputs for Enabled SubSystem: '<S598>/Init' */
    PWDR_ac_Init_a(rtb_AND_k2, &PWDR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S598>/Init' */

    /* Outputs for Enabled SubSystem: '<S598>/Pass' */
    PWDR_ac_Pass(rtb_UnitDelay_i1, &PWDR_ac_B.Merge_k);

    /* End of Outputs for SubSystem: '<S598>/Pass' */

    /* RelationalOperator: '<S639>/Relational Operator3' incorporates:
     *  Constant: '<S639>/Constant3'
     */
    rtb_LogicalOperator_ke = (rtb_GreaterThan4_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S639>/EdgeFalling1' */
    /* Logic: '<S639>/Logical Operator' incorporates:
     *  Logic: '<S655>/OR1'
     */
    rtb_AND_py_tmp = !rtb_LogicalOperator_ke;

    /* End of Outputs for SubSystem: '<S639>/EdgeFalling1' */

    /* Logic: '<S639>/Logical1' incorporates:
     *  Constant: '<S639>/Constant1'
     *  Logic: '<S639>/Logical Operator'
     *  Logic: '<S639>/Logical10'
     *  Logic: '<S639>/Logical12'
     *  RelationalOperator: '<S639>/Relational Operator1'
     */
    rtb_AND_k2 = ((VePWDR_b_SOCHighDiagEnbl) && (rtb_AND_mp_tmp_0 ||
                   ((rtb_AND_mp_tmp == 0U) || rtb_AND_py_tmp)));

    /* RelationalOperator: '<S524>/Greater  Than4' incorporates:
     *  Constant: '<S631>/Calib'
     */
    VePWDD_b_SOCHiFltEvent = (VePWDD_Pct_SOCHighFBVal >
        KePWDR_Pct_SOCHighWarningThrshld);

    /* Outputs for Atomic SubSystem: '<S639>/EdgeFalling1' */
    /* Logic: '<S655>/AND' incorporates:
     *  UnitDelay: '<S655>/Unit Delay'
     */
    rtb_FailCounterReset_e2 = (rtb_AND_py_tmp && (PWDR_ac_DW.UnitDelay_DSTATE_nk));

    /* Update for UnitDelay: '<S655>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_nk = rtb_LogicalOperator_ke;

    /* End of Outputs for SubSystem: '<S639>/EdgeFalling1' */

    /* Logic: '<S639>/Logical5' */
    rtb_LogicalOperator_ke = (rtb_Logical1_d4 || rtb_FailCounterReset_e2);

    /* Logic: '<S654>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S654>/Unit Delay'
     *  UnitDelay: '<S654>/Unit Delay1'
     */
    rtb_Logical1_d4 = ((rtb_LogicalOperator_ke ||
                        (PWDR_ac_DW.UnitDelay_DSTATE_jx)) ||
                       (PWDR_ac_DW.UnitDelay1_DSTATE_n0));

    /* Outputs for Atomic SubSystem: '<S654>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S654>/Counter Reset  Enabled ' */
    /* Switch: '<S661>/Switch1' incorporates:
     *  Logic: '<S654>/NOT6'
     *  Switch: '<S661>/Switch2'
     *  Switch: '<S662>/Switch1'
     */
    if (rtb_Logical1_d4)
    {
        /* Switch: '<S661>/Switch1' incorporates:
         *  Constant: '<S661>/Constant Value2'
         */
        VePWDD_Cnt_SOCH_Warning = 0U;

        /* Switch: '<S662>/Switch1' incorporates:
         *  Constant: '<S662>/Constant Value2'
         */
        VePWDD_Cnt_SOCH_WarningSmpl = 0U;
    }
    else
    {
        if (rtb_AND_k2 && (VePWDD_b_SOCHiFltEvent))
        {
            /* Switch: '<S661>/Switch2' incorporates:
             *  Constant: '<S661>/Constant Value1'
             *  Sum: '<S661>/Subtraction'
             *  Switch: '<S661>/Switch1'
             *  UnitDelay: '<S661>/Unit Delay'
             */
            VePWDD_Cnt_SOCH_Warning = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_b) + 1U);
        }
        else
        {
            /* Switch: '<S661>/Switch1' incorporates:
             *  Switch: '<S661>/Switch2'
             *  UnitDelay: '<S661>/Unit Delay'
             */
            VePWDD_Cnt_SOCH_Warning = PWDR_ac_DW.UnitDelay_DSTATE_b;
        }

        /* Switch: '<S662>/Switch2' */
        if (rtb_AND_k2)
        {
            /* Switch: '<S662>/Switch1' incorporates:
             *  Constant: '<S662>/Constant Value1'
             *  Sum: '<S662>/Subtraction'
             *  Switch: '<S662>/Switch2'
             *  UnitDelay: '<S662>/Unit Delay'
             */
            VePWDD_Cnt_SOCH_WarningSmpl = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_lo) + 1U);
        }
        else
        {
            /* Switch: '<S662>/Switch1' incorporates:
             *  Switch: '<S662>/Switch2'
             *  UnitDelay: '<S662>/Unit Delay'
             */
            VePWDD_Cnt_SOCH_WarningSmpl = PWDR_ac_DW.UnitDelay_DSTATE_lo;
        }

        /* End of Switch: '<S662>/Switch2' */
    }

    /* End of Switch: '<S661>/Switch1' */
    /* End of Outputs for SubSystem: '<S654>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S661>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_b = VePWDD_Cnt_SOCH_Warning;

    /* End of Outputs for SubSystem: '<S654>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S654>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S662>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_lo = VePWDD_Cnt_SOCH_WarningSmpl;

    /* End of Outputs for SubSystem: '<S654>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S654>/Greater Than or Equal ' incorporates:
     *  Constant: '<S626>/Calib'
     */
    rtb_Logical1_d4 = (((float32)VePWDD_Cnt_SOCH_Warning) >=
                       KePWDR_Cnt_SOCHighWarningCntLmt);

    /* Logic: '<S654>/NOT5' incorporates:
     *  Constant: '<S627>/Calib'
     *  Logic: '<S654>/NOT3'
     *  RelationalOperator: '<S654>/Less Than  or Equal'
     */
    rtb_AND_k2 = ((VePWDD_Cnt_SOCH_WarningSmpl >=
                   KePWDR_Cnt_SOCHighWarningSmplCntLmt) && (!rtb_Logical1_d4));

    /* Switch: '<S667>/Switch1' incorporates:
     *  Constant: '<S646>/Constant Value'
     *  Constant: '<S660>/Constant Value'
     *  DataStoreWrite: '<S524>/Data Store Write1'
     *  DataStoreWrite: '<S524>/Data Store Write5'
     *  Logic: '<S524>/Logical2'
     *  Switch: '<S653>/Switch1'
     *  Switch: '<S666>/Switch1'
     */
    if (rtb_AND_h5 || rtb_TmpSignalConversionAtVeDFIR)
    {
        PWDR_ac_DW.NePWDR_Cnt_SOCHighWarnMFOP = 0U;
        PWDR_ac_DW.NePWDR_Cnt_SOCHighFailureMFOP = 0U;
    }
    else
    {
        if (rtb_AND_k2)
        {
            /* MinMax: '<S660>/Minimum2' incorporates:
             *  DataStoreRead: '<S524>/Data Store Read3'
             *  Switch: '<S666>/Switch1'
             */
            if (VePWDD_Cnt_SOCH_Warning > PWDR_ac_DW.NePWDR_Cnt_SOCHighWarnMFOP)
            {
                /* DataStoreWrite: '<S524>/Data Store Write1' incorporates:
                 *  Switch: '<S666>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_SOCHighWarnMFOP = VePWDD_Cnt_SOCH_Warning;
            }

            /* End of MinMax: '<S660>/Minimum2' */
        }

        /* Switch: '<S652>/Switch1' */
        if (rtb_FailCounterReset_e0)
        {
            /* MinMax: '<S646>/Minimum2' incorporates:
             *  DataStoreRead: '<S524>/Data Store Read5'
             */
            if (VePWDD_Cnt_SOCH_Fail > PWDR_ac_DW.NePWDR_Cnt_SOCHighFailureMFOP)
            {
                /* DataStoreWrite: '<S524>/Data Store Write5' incorporates:
                 *  Switch: '<S652>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_SOCHighFailureMFOP = VePWDD_Cnt_SOCH_Fail;
            }

            /* End of MinMax: '<S646>/Minimum2' */
        }

        /* End of Switch: '<S652>/Switch1' */
    }

    /* End of Switch: '<S667>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S639>/Fail' */
    PWDR_ac_Fail(rtb_Logical1_d4, &PWDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S639>/Fail' */

    /* Outputs for Enabled SubSystem: '<S639>/Init' */
    PWDR_ac_Init_a(rtb_LogicalOperator_ke, &PWDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S639>/Init' */

    /* Outputs for Enabled SubSystem: '<S639>/Pass' */
    PWDR_ac_Pass(rtb_AND_k2, &PWDR_ac_B.Merge_g);

    /* End of Outputs for SubSystem: '<S639>/Pass' */

    /* RelationalOperator: '<S639>/Relational Operator' incorporates:
     *  Constant: '<S656>/Constant'
     *  Merge: '<S639>/Merge'
     */
    rtb_AND_h5 = (((uint32)PWDR_ac_B.Merge_g) == CeDFIB_e_Fail);

    /* RelationalOperator: '<S688>/Relational Operator3' incorporates:
     *  Constant: '<S688>/Constant3'
     */
    rtb_LogicalOperator_ke = (rtb_AND_ip_tmp == 0U);

    /* Outputs for Atomic SubSystem: '<S688>/EdgeFalling1' */
    /* Logic: '<S688>/Logical Operator' incorporates:
     *  Logic: '<S704>/OR1'
     */
    rtb_AND_mp_tmp_0 = !rtb_LogicalOperator_ke;

    /* End of Outputs for SubSystem: '<S688>/EdgeFalling1' */

    /* Logic: '<S688>/Logical1' incorporates:
     *  Constant: '<S688>/Constant1'
     *  Logic: '<S688>/Logical Operator'
     *  Logic: '<S688>/Logical10'
     *  Logic: '<S688>/Logical12'
     *  RelationalOperator: '<S688>/Relational Operator1'
     */
    rtb_UnitDelay_cp = (rtb_UnitDelay_cp && (rtb_Logical1_bu_tmp_0 ||
                         ((rtb_Logical1_bu_tmp == 0U) || rtb_AND_mp_tmp_0)));

    /* Outputs for Atomic SubSystem: '<S688>/EdgeFalling1' */
    /* Logic: '<S704>/AND' incorporates:
     *  UnitDelay: '<S704>/Unit Delay'
     */
    rtb_FailCounterReset_e2 = (rtb_AND_mp_tmp_0 &&
        (PWDR_ac_DW.UnitDelay_DSTATE_l2));

    /* Update for UnitDelay: '<S704>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_l2 = rtb_LogicalOperator_ke;

    /* End of Outputs for SubSystem: '<S688>/EdgeFalling1' */

    /* Logic: '<S688>/Logical5' */
    rtb_LogicalOperator_ke = (rtb_TmpSignalConversionAtVeHPMR ||
        rtb_FailCounterReset_e2);

    /* Logic: '<S703>/Fail Counter Reset' incorporates:
     *  UnitDelay: '<S703>/Unit Delay'
     *  UnitDelay: '<S703>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtVeHPMR = ((rtb_LogicalOperator_ke ||
        (PWDR_ac_DW.UnitDelay_DSTATE_ly2)) || (PWDR_ac_DW.UnitDelay1_DSTATE_b));

    /* Outputs for Atomic SubSystem: '<S703>/Counter Reset  Enabled 1' */
    /* Outputs for Atomic SubSystem: '<S703>/Counter Reset  Enabled ' */
    /* Switch: '<S710>/Switch1' incorporates:
     *  Switch: '<S525>/Switch9'
     *  Switch: '<S711>/Switch1'
     */
    if (rtb_TmpSignalConversionAtVeHPMR)
    {
        /* Switch: '<S710>/Switch1' incorporates:
         *  Constant: '<S710>/Constant Value2'
         */
        VePWDD_Cnt_SOCL_Warning = 0U;

        /* Switch: '<S711>/Switch1' incorporates:
         *  Constant: '<S711>/Constant Value2'
         */
        VePWDD_Cnt_SOCL_WarningSmpl = 0U;
    }
    else
    {
        if (rtb_AND_fw)
        {
            /* Switch: '<S525>/Switch9' incorporates:
             *  Constant: '<S680>/Calib'
             */
            rtb_TmpSignalConversionAtVeTITR =
                KePWDR_Pct_SOCLowWarningThrshld_InPlant;
        }
        else
        {
            /* Switch: '<S525>/Switch9' incorporates:
             *  Constant: '<S679>/Calib'
             */
            rtb_TmpSignalConversionAtVeTITR = KePWDR_Pct_SOCLowWarningThrshld;
        }

        /* Switch: '<S710>/Switch2' incorporates:
         *  Logic: '<S703>/NOT6'
         *  RelationalOperator: '<S525>/Greater  Than3'
         */
        if (rtb_UnitDelay_cp && (VePWDD_Pct_SOCLowFBVal <
                                 rtb_TmpSignalConversionAtVeTITR))
        {
            /* Switch: '<S710>/Switch1' incorporates:
             *  Constant: '<S710>/Constant Value1'
             *  Sum: '<S710>/Subtraction'
             *  Switch: '<S710>/Switch2'
             *  UnitDelay: '<S710>/Unit Delay'
             */
            VePWDD_Cnt_SOCL_Warning = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_h) + 1U);
        }
        else
        {
            /* Switch: '<S710>/Switch1' incorporates:
             *  Switch: '<S710>/Switch2'
             *  UnitDelay: '<S710>/Unit Delay'
             */
            VePWDD_Cnt_SOCL_Warning = PWDR_ac_DW.UnitDelay_DSTATE_h;
        }

        /* End of Switch: '<S710>/Switch2' */

        /* Switch: '<S711>/Switch2' */
        if (rtb_UnitDelay_cp)
        {
            /* Switch: '<S711>/Switch1' incorporates:
             *  Constant: '<S711>/Constant Value1'
             *  Sum: '<S711>/Subtraction'
             *  Switch: '<S711>/Switch2'
             *  UnitDelay: '<S711>/Unit Delay'
             */
            VePWDD_Cnt_SOCL_WarningSmpl = (uint16)(((uint32)
                PWDR_ac_DW.UnitDelay_DSTATE_a) + 1U);
        }
        else
        {
            /* Switch: '<S711>/Switch1' incorporates:
             *  Switch: '<S711>/Switch2'
             *  UnitDelay: '<S711>/Unit Delay'
             */
            VePWDD_Cnt_SOCL_WarningSmpl = PWDR_ac_DW.UnitDelay_DSTATE_a;
        }

        /* End of Switch: '<S711>/Switch2' */
    }

    /* End of Switch: '<S710>/Switch1' */
    /* End of Outputs for SubSystem: '<S703>/Counter Reset  Enabled 1' */

    /* Update for UnitDelay: '<S710>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_h = VePWDD_Cnt_SOCL_Warning;

    /* End of Outputs for SubSystem: '<S703>/Counter Reset  Enabled ' */

    /* Outputs for Atomic SubSystem: '<S703>/Counter Reset  Enabled 1' */
    /* Update for UnitDelay: '<S711>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_a = VePWDD_Cnt_SOCL_WarningSmpl;

    /* End of Outputs for SubSystem: '<S703>/Counter Reset  Enabled 1' */

    /* RelationalOperator: '<S703>/Greater Than or Equal ' incorporates:
     *  Constant: '<S673>/Calib'
     */
    rtb_TmpSignalConversionAtVeHPMR = (VePWDD_Cnt_SOCL_Warning >=
        KePWDR_Cnt_SOCLowWarningCntLmt);

    /* Logic: '<S703>/NOT5' incorporates:
     *  Constant: '<S674>/Calib'
     *  Logic: '<S703>/NOT3'
     *  RelationalOperator: '<S703>/Less Than  or Equal'
     */
    rtb_AND_fw = ((VePWDD_Cnt_SOCL_WarningSmpl >=
                   KePWDR_Cnt_SOCLowWarningSmplCntLmt) &&
                  (!rtb_TmpSignalConversionAtVeHPMR));

    /* Switch: '<S716>/Switch1' incorporates:
     *  Constant: '<S695>/Constant Value'
     *  Constant: '<S709>/Constant Value'
     *  DataStoreWrite: '<S525>/Data Store Write1'
     *  DataStoreWrite: '<S525>/Data Store Write5'
     *  Logic: '<S525>/Logical2'
     *  Switch: '<S702>/Switch1'
     *  Switch: '<S715>/Switch1'
     */
    if (rtb_AND_o || rtb_TmpSignalConversionAtVeDFIR)
    {
        PWDR_ac_DW.NePWDR_Cnt_SOCLowWarnMFOP = 0U;
        PWDR_ac_DW.NePWDR_Cnt_SOCLowFailureMFOP = 0U;
    }
    else
    {
        if (rtb_AND_fw)
        {
            /* MinMax: '<S709>/Minimum2' incorporates:
             *  DataStoreRead: '<S525>/Data Store Read3'
             *  Switch: '<S715>/Switch1'
             */
            if (VePWDD_Cnt_SOCL_Warning > PWDR_ac_DW.NePWDR_Cnt_SOCLowWarnMFOP)
            {
                /* DataStoreWrite: '<S525>/Data Store Write1' incorporates:
                 *  Switch: '<S715>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_SOCLowWarnMFOP = VePWDD_Cnt_SOCL_Warning;
            }

            /* End of MinMax: '<S709>/Minimum2' */
        }

        /* Switch: '<S701>/Switch1' */
        if (rtb_Logical1_cx)
        {
            /* MinMax: '<S695>/Minimum2' incorporates:
             *  DataStoreRead: '<S525>/Data Store Read5'
             */
            if (VePWDD_Cnt_SOCL_Fail > PWDR_ac_DW.NePWDR_Cnt_SOCLowFailureMFOP)
            {
                /* DataStoreWrite: '<S525>/Data Store Write5' incorporates:
                 *  Switch: '<S701>/Switch1'
                 */
                PWDR_ac_DW.NePWDR_Cnt_SOCLowFailureMFOP = VePWDD_Cnt_SOCL_Fail;
            }

            /* End of MinMax: '<S695>/Minimum2' */
        }

        /* End of Switch: '<S701>/Switch1' */
    }

    /* End of Switch: '<S716>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S688>/Fail' */
    PWDR_ac_Fail(rtb_TmpSignalConversionAtVeHPMR, &PWDR_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S688>/Fail' */

    /* Outputs for Enabled SubSystem: '<S688>/Init' */
    PWDR_ac_Init_a(rtb_LogicalOperator_ke, &PWDR_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S688>/Init' */

    /* Outputs for Enabled SubSystem: '<S688>/Pass' */
    PWDR_ac_Pass(rtb_AND_fw, &PWDR_ac_B.Merge_f);

    /* End of Outputs for SubSystem: '<S688>/Pass' */

    /* RelationalOperator: '<S688>/Relational Operator' incorporates:
     *  Constant: '<S705>/Constant'
     *  Merge: '<S688>/Merge'
     */
    rtb_TmpSignalConversionAtVeDFIR = (((uint32)PWDR_ac_B.Merge_f) ==
        CeDFIB_e_Fail);

    /* Switch: '<S512>/Switch' incorporates:
     *  Constant: '<S517>/Calib'
     */
    if (KePWDR_b_IUMPR_SOCHi_Ovrd)
    {
        /* Switch: '<S512>/Switch' incorporates:
         *  Constant: '<S518>/Calib'
         */
        rtb_AND_o = KePWDR_b_IUMPR_SOCHi_Val;
    }
    else
    {
        /* Switch: '<S512>/Switch' */
        rtb_AND_o = PWDR_ac_B.VariantMergeForOutportIUMPR_Inh;
    }

    /* End of Switch: '<S512>/Switch' */

    /* Switch: '<S512>/Switch10' incorporates:
     *  Constant: '<S521>/Calib'
     */
    if (KePWDR_b_IUMPR_SOCPerf_Ovrd)
    {
        /* Switch: '<S512>/Switch10' incorporates:
         *  Constant: '<S522>/Calib'
         */
        rtb_UnitDelay_cp = KePWDR_b_IUMPR_SOCPerf_Val;
    }
    else
    {
        /* Switch: '<S512>/Switch10' */
        rtb_UnitDelay_cp = PWDR_ac_B.VariantMergeForOutportIUMPR_Inh;
    }

    /* End of Switch: '<S512>/Switch10' */

    /* Switch: '<S512>/Switch9' incorporates:
     *  Constant: '<S519>/Calib'
     */
    if (KePWDR_b_IUMPR_SOCLow_Ovrd)
    {
        /* Switch: '<S512>/Switch9' incorporates:
         *  Constant: '<S520>/Calib'
         */
        rtb_LogicalOperator_ke = KePWDR_b_IUMPR_SOCLow_Val;
    }
    else
    {
        /* Switch: '<S512>/Switch9' */
        rtb_LogicalOperator_ke = PWDR_ac_B.VariantMergeForOutportIUMPR_Inh;
    }

    /* End of Switch: '<S512>/Switch9' */

    /* Update for UnitDelay: '<S545>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_aj = rtb_Logical1;

    /* Update for UnitDelay: '<S545>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE = rtb_Comparison5_o;

    /* Update for UnitDelay: '<S689>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ea = rtb_Logical1_cx;

    /* Update for UnitDelay: '<S689>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_m = rtb_GreaterThanorEqual_nv;

    /* Update for UnitDelay: '<S640>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_aq = rtb_FailCounterReset_e0;

    /* Update for UnitDelay: '<S640>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_a = rtb_AND_f;

    /* Update for UnitDelay: '<S572>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_k = rtb_NOT4_l;

    /* Update for UnitDelay: '<S572>/Unit Delay2' */
    PWDR_ac_DW.UnitDelay2_DSTATE_n = rtb_AND_m;

    /* Update for UnitDelay: '<S577>/Unit Delay4' */
    PWDR_ac_DW.UnitDelay4_DSTATE = rtb_TmpSignalConversionAtVeHVTR;

    /* Update for UnitDelay: '<S598>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_bv = rtb_UnitDelay_i1;

    /* Update for UnitDelay: '<S599>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_pr = rtb_Logical2;

    /* Update for UnitDelay: '<S599>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_f = rtb_AND_d;

    /* Update for UnitDelay: '<S572>/Unit Delay3' */
    PWDR_ac_DW.UnitDelay3_DSTATE = rtb_NOT4_l;

    /* Update for UnitDelay: '<S572>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_pm = rtb_AND_m;

    /* Update for UnitDelay: '<S598>/Unit Delay2' */
    PWDR_ac_DW.UnitDelay2_DSTATE_a = rtb_AND_d;

    /* Update for UnitDelay: '<S600>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ay = rtb_RelationalOperator3_lx;

    /* Update for UnitDelay: '<S600>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_n = rtb_UnitDelay_i1;

    /* Update for UnitDelay: '<S654>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_jx = rtb_AND_k2;

    /* Update for UnitDelay: '<S654>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_n0 = rtb_Logical1_d4;

    /* Update for UnitDelay: '<S703>/Unit Delay' */
    PWDR_ac_DW.UnitDelay_DSTATE_ly2 = rtb_AND_fw;

    /* Update for UnitDelay: '<S703>/Unit Delay1' */
    PWDR_ac_DW.UnitDelay1_DSTATE_b = rtb_TmpSignalConversionAtVeHPMR;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_b_BattOverTempFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_BattOverTempFltDtct'
     */
    (void)Rte_Write_VePWDR_b_BattOverTempFltDtct_Value(rtb_RelationalOperator3);

    /* Outport: '<Root>/VePWDR_b_BattOverTempWarning' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_BattOverTempWarning'
     */
    (void)Rte_Write_VePWDR_b_BattOverTempWarning_Value(rtb_AND);

    /* Outport: '<Root>/VePWDR_b_IUMPR_InhibitBit' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_IUMPR_InhibitBit'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_InhibitBit_Value
        (PWDR_ac_B.VariantMergeForOutportIUMPR_Inh);

    /* Outport: '<Root>/VePWDR_b_IUMPR_SOCHigh' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_IUMPR_SOCHigh'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_SOCHigh_Value(rtb_AND_o);

    /* Outport: '<Root>/VePWDR_b_IUMPR_SOCLow' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_IUMPR_SOCLow'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_SOCLow_Value(rtb_LogicalOperator_ke);

    /* Outport: '<Root>/VePWDR_b_IUMPR_SOCPerf' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_IUMPR_SOCPerf'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_SOCPerf_Value(rtb_UnitDelay_cp);

    /* Outport: '<Root>/VePWDR_b_SOCHighDTCFA' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_SOCHighDTCFA'
     */
    (void)Rte_Write_VePWDR_b_SOCHighDTCFA_Value(rtb_AND_h5);

    /* Outport: '<Root>/VePWDR_b_SOCHighFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_SOCHighFltDtct'
     */
    (void)Rte_Write_VePWDR_b_SOCHighFltDtct_Value(rtb_GreaterThan4);

    /* Outport: '<Root>/VePWDR_b_SOCLowDTCFA' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_SOCLowDTCFA'
     */
    (void)Rte_Write_VePWDR_b_SOCLowDTCFA_Value(rtb_TmpSignalConversionAtVeDFIR);

    /* Outport: '<Root>/VePWDR_b_SOCLowFltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_SOCLowFltDtct'
     */
    (void)Rte_Write_VePWDR_b_SOCLowFltDtct_Value(rtb_Comparison5_l1);

    /* Outport: '<Root>/VePWDR_b_SOCRatEnbld' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_SOCRatEnbld'
     */
    (void)Rte_Write_VePWDR_b_SOCRatEnbld_Value(rtb_Comparison2_k);

    /* Outport: '<Root>/VePWDR_b_SOCRatFA' incorporates:
     *  SignalConversion generated from: '<S3>/VePWDR_b_SOCRatFA'
     */
    (void)Rte_Write_VePWDR_b_SOCRatFA_Value(PWDR_ac_B.VePWDR_b_SOCRatFA);

    /* Outport: '<Root>/VePWDR_e_FaultSts_BPCM_P1A26' incorporates:
     *  Merge: '<S598>/Merge'
     *  SignalConversion generated from: '<S3>/VePWDR_e_FaultSts_BPCM_P1A26'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_BPCM_P1A26_Value(PWDR_ac_B.Merge_k);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_BattSOC_Hi' incorporates:
     *  Merge: '<S639>/Merge'
     *  SignalConversion generated from: '<S3>/VePWDR_e_FaultSts_HB_BattSOC_Hi'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_BattSOC_Hi_Value(PWDR_ac_B.Merge_g);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_BattSOC_Lo' incorporates:
     *  Merge: '<S688>/Merge'
     *  SignalConversion generated from: '<S3>/VePWDR_e_FaultSts_HB_BattSOC_Lo'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_BattSOC_Lo_Value(PWDR_ac_B.Merge_f);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_Ovrtemp' incorporates:
     *  Merge: '<S544>/Merge'
     *  SignalConversion generated from: '<S3>/VePWDR_e_FaultSts_HB_Ovrtemp'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_Ovrtemp_Value(PWDR_ac_B.Merge);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, PWDR_CODE) PWDR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/PWDR_PwrOff'
     */
    /* Outport: '<Root>/EePWDR_l_DAP_FA_DistTravld_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_l_DAP_FA_DistTravld'
     */
    (void)Rte_Write_EePWDR_l_DAP_FA_DistTravld_EePWDR_l_DAP_FA_DistTravld
        (EePWDR_l_DAP_FA_DistTravld);

    /* Outport: '<Root>/NePWDR_Cnt_HVFuseEMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVFuseEMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVFuseEMFOP_NePWDR_Cnt_HVFuseEMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVFuseEMFOP);

    /* Outport: '<Root>/EePWDR_y_DID_B524_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_y_DID_B524'
     */
    (void)Rte_Write_EePWDR_y_DID_B524_EePWDR_y_DID_B524(EePWDR_y_DID_B524);

    /* Outport: '<Root>/EePWDR_t_DAP_FA_InitTime_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_t_DAP_FA_InitTime'
     */
    (void)Rte_Write_EePWDR_t_DAP_FA_InitTime_EePWDR_t_DAP_FA_InitTime
        (EePWDR_t_DAP_FA_InitTime);

    /* Outport: '<Root>/EePWDR_b_DAPFA_OpenCntctr_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_b_DAPFA_OpenCntctr'
     */
    (void)Rte_Write_EePWDR_b_DAPFA_OpenCntctr_EePWDR_b_DAPFA_OpenCntctr
        (EePWDR_b_DAPFA_OpenCntctr);

    /* Outport: '<Root>/NePWDR_Cnt_HVDAPMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVDAPMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVDAPMFOP_NePWDR_Cnt_HVDAPMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVDAPMFOP);

    /* Outport: '<Root>/EePWDR_Cnt_WarmupCycle_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_Cnt_WarmupCycle'
     */
    (void)Rte_Write_EePWDR_Cnt_WarmupCycle_EePWDR_Cnt_WarmupCycle
        (EePWDR_Cnt_WarmupCycle);

    /* Outport: '<Root>/EePWDR_t_DAP_FA_ElapsedTime_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_t_DAP_FA_ElapsedTime'
     */
    (void)Rte_Write_EePWDR_t_DAP_FA_ElapsedTime_EePWDR_t_DAP_FA_ElapsedTime
        (EePWDR_t_DAP_FA_ElapsedTime);

    /* Outport: '<Root>/NePWDR_Cnt_HVFuseAMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVFuseAMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVFuseAMFOP_NePWDR_Cnt_HVFuseAMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVFuseAMFOP);

    /* Outport: '<Root>/EePWDR_Cnt_DAP_FA_KeyCylCnt_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/EePWDR_Cnt_DAP_FA_KeyCylCnt'
     */
    (void)Rte_Write_EePWDR_Cnt_DAP_FA_KeyCylCnt_EePWDR_Cnt_DAP_FA_KeyCylCnt
        (EePWDR_Cnt_DAP_FA_KeyCylCnt);

    /* Outport: '<Root>/NePWDR_Cnt_HVFuseBMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVFuseBMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVFuseBMFOP_NePWDR_Cnt_HVFuseBMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVFuseBMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_HVFuseCMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVFuseCMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVFuseCMFOP_NePWDR_Cnt_HVFuseCMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVFuseCMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_HVFuseDMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVFuseDMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVFuseDMFOP_NePWDR_Cnt_HVFuseDMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVFuseDMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_BPCM_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_BPCM_MFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_BPCM_MFOP_NePWDR_Cnt_BPCM_MFOP
        (PWDR_ac_DW.NePWDR_Cnt_BPCM_MFOP);

    /* Outport: '<Root>/NePWDR_Cnt_BattOverTempFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_BattOverTempFailureMFOP'
     */
    (void)
        Rte_Write_NePWDR_Cnt_BattOverTempFailureMFOP_NePWDR_Cnt_BattOverTempFailureMFOP
        (PWDR_ac_DW.NePWDR_Cnt_BattOverTempFailureM);

    /* Outport: '<Root>/NePWDR_Cnt_HVILCkt_MFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVILCkt_MFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVILCkt_MFOP_NePWDR_Cnt_HVILCkt_MFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVILCkt_MFOP);

    /* Outport: '<Root>/NePWDR_Cnt_HVOverVoltFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVOverVoltFailureMFOP'
     */
    (void)
        Rte_Write_NePWDR_Cnt_HVOverVoltFailureMFOP_NePWDR_Cnt_HVOverVoltFailureMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMFO);

    /* Outport: '<Root>/NePWDR_Cnt_HVOverVoltFailureMSOF_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVOverVoltFailureMSOF'
     */
    (void)
        Rte_Write_NePWDR_Cnt_HVOverVoltFailureMSOF_NePWDR_Cnt_HVOverVoltFailureMSOF
        (PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMSO);

    /* Outport: '<Root>/NePWDR_Cnt_HVOverVoltWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVOverVoltWarnMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_HVOverVoltWarnMFOP_NePWDR_Cnt_HVOverVoltWarnMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_HVOverVoltWarnMSOF_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVOverVoltWarnMSOF'
     */
    (void)Rte_Write_NePWDR_Cnt_HVOverVoltWarnMSOF_NePWDR_Cnt_HVOverVoltWarnMSOF
        (PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMSOF);

    /* Outport: '<Root>/NePWDR_Cnt_HVUnderVoltFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVUnderVoltFailureMFOP'
     */
    (void)
        Rte_Write_NePWDR_Cnt_HVUnderVoltFailureMFOP_NePWDR_Cnt_HVUnderVoltFailureMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMF);

    /* Outport: '<Root>/NePWDR_Cnt_HVUnderVoltFailureMSOF_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVUnderVoltFailureMSOF'
     */
    (void)
        Rte_Write_NePWDR_Cnt_HVUnderVoltFailureMSOF_NePWDR_Cnt_HVUnderVoltFailureMSOF
        (PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMS);

    /* Outport: '<Root>/NePWDR_Cnt_HVUnderVoltWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVUnderVoltWarnMFOP'
     */
    (void)
        Rte_Write_NePWDR_Cnt_HVUnderVoltWarnMFOP_NePWDR_Cnt_HVUnderVoltWarnMFOP
        (PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_HVUnderVoltWarnMSOF_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_HVUnderVoltWarnMSOF'
     */
    (void)
        Rte_Write_NePWDR_Cnt_HVUnderVoltWarnMSOF_NePWDR_Cnt_HVUnderVoltWarnMSOF
        (PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMSOF);

    /* Outport: '<Root>/NePWDR_Cnt_MsmtchLowFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_MsmtchLowFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_MsmtchLowFOP_NePWDR_Cnt_MsmtchLowFOP
        (PWDR_ac_DW.NePWDR_Cnt_MsmtchLowFOP);

    /* Outport: '<Root>/NePWDR_Cnt_SOCHighFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_SOCHighFailureMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_SOCHighFailureMFOP_NePWDR_Cnt_SOCHighFailureMFOP
        (PWDR_ac_DW.NePWDR_Cnt_SOCHighFailureMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_SOCHighWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_SOCHighWarnMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_SOCHighWarnMFOP_NePWDR_Cnt_SOCHighWarnMFOP
        (PWDR_ac_DW.NePWDR_Cnt_SOCHighWarnMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_SOCLowFailureMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_SOCLowFailureMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_SOCLowFailureMFOP_NePWDR_Cnt_SOCLowFailureMFOP
        (PWDR_ac_DW.NePWDR_Cnt_SOCLowFailureMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_SOCLowWarnMFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_SOCLowWarnMFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_SOCLowWarnMFOP_NePWDR_Cnt_SOCLowWarnMFOP
        (PWDR_ac_DW.NePWDR_Cnt_SOCLowWarnMFOP);

    /* Outport: '<Root>/NePWDR_Cnt_StuckHiFOP_PM_Out' incorporates:
     *  DataStoreRead: '<S4>/NePWDR_Cnt_StuckHiFOP'
     */
    (void)Rte_Write_NePWDR_Cnt_StuckHiFOP_NePWDR_Cnt_StuckHiFOP
        (PWDR_ac_DW.NePWDR_Cnt_StuckHiFOP);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, PWDR_CODE) PWDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PWDR_PwrOn'
     */
    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/DSM_Init'
     */
    /* DataStoreWrite: '<S717>/NePWDR_Cnt_StuckHiFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_StuckHiFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_StuckHiFOP_Rx_NePWDR_Cnt_StuckHiFOP
        (&PWDR_ac_DW.NePWDR_Cnt_StuckHiFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_SOCLowWarnMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_SOCLowWarnMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_SOCLowWarnMFOP_Rx_NePWDR_Cnt_SOCLowWarnMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_SOCLowWarnMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_SOCLowFailureMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_SOCLowFailureMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_SOCLowFailureMFOP_Rx_NePWDR_Cnt_SOCLowFailureMFOP(
        &PWDR_ac_DW.NePWDR_Cnt_SOCLowFailureMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_SOCHighWarnMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_SOCHighWarnMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_SOCHighWarnMFOP_Rx_NePWDR_Cnt_SOCHighWarnMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_SOCHighWarnMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_SOCHighFailureMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_SOCHighFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_SOCHighFailureMFOP_Rx_NePWDR_Cnt_SOCHighFailureMFOP(
        &PWDR_ac_DW.NePWDR_Cnt_SOCHighFailureMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_MsmtchLowFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_MsmtchLowFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_MsmtchLowFOP_Rx_NePWDR_Cnt_MsmtchLowFOP
        (&PWDR_ac_DW.NePWDR_Cnt_MsmtchLowFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVUnderVoltWarnMSOF' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVUnderVoltWarnMSOF_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVUnderVoltWarnMSOF_Rx_NePWDR_Cnt_HVUnderVoltWarnMSOF
        (&PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMSOF);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVUnderVoltWarnMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVUnderVoltWarnMFOP_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVUnderVoltWarnMFOP_Rx_NePWDR_Cnt_HVUnderVoltWarnMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltWarnMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVUnderVoltFailureMSOF' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVUnderVoltFailureMSOF_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVUnderVoltFailureMSOF_Rx_NePWDR_Cnt_HVUnderVoltFailureMSOF
        (&PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMS);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVUnderVoltFailureMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVUnderVoltFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVUnderVoltFailureMFOP_Rx_NePWDR_Cnt_HVUnderVoltFailureMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVUnderVoltFailureMF);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVOverVoltWarnMSOF' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVOverVoltWarnMSOF_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVOverVoltWarnMSOF_Rx_NePWDR_Cnt_HVOverVoltWarnMSOF(
        &PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMSOF);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVOverVoltWarnMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVOverVoltWarnMFOP_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVOverVoltWarnMFOP_Rx_NePWDR_Cnt_HVOverVoltWarnMFOP(
        &PWDR_ac_DW.NePWDR_Cnt_HVOverVoltWarnMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVOverVoltFailureMSOF' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVOverVoltFailureMSOF_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVOverVoltFailureMSOF_Rx_NePWDR_Cnt_HVOverVoltFailureMSOF
        (&PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMSO);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVOverVoltFailureMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVOverVoltFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_HVOverVoltFailureMFOP_Rx_NePWDR_Cnt_HVOverVoltFailureMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVOverVoltFailureMFO);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVILCkt_MFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVILCkt_MFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVILCkt_MFOP_Rx_NePWDR_Cnt_HVILCkt_MFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVILCkt_MFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_BattOverTempFailureMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_BattOverTempFailureMFOP_PM_In'
     */
    (void)
        Rte_Read_NePWDR_Cnt_BattOverTempFailureMFOP_Rx_NePWDR_Cnt_BattOverTempFailureMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_BattOverTempFailureM);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_BPCM_MFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_BPCM_MFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_BPCM_MFOP_Rx_NePWDR_Cnt_BPCM_MFOP
        (&PWDR_ac_DW.NePWDR_Cnt_BPCM_MFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVFuseDMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVFuseDMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVFuseDMFOP_Rx_NePWDR_Cnt_HVFuseDMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVFuseDMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVFuseCMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVFuseCMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVFuseCMFOP_Rx_NePWDR_Cnt_HVFuseCMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVFuseCMFOP);

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVFuseBMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVFuseBMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVFuseBMFOP_Rx_NePWDR_Cnt_HVFuseBMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVFuseBMFOP);

    /* DataStoreWrite: '<S717>/EePWDR_Cnt_DAP_FA_KeyCylCnt' incorporates:
     *  Inport: '<Root>/EePWDR_Cnt_DAP_FA_KeyCylCnt_PM_In'
     */
    (void)Rte_Read_EePWDR_Cnt_DAP_FA_KeyCylCnt_Rx_EePWDR_Cnt_DAP_FA_KeyCylCnt
        ((&(EePWDR_Cnt_DAP_FA_KeyCylCnt)));

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVFuseAMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVFuseAMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVFuseAMFOP_Rx_NePWDR_Cnt_HVFuseAMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVFuseAMFOP);

    /* DataStoreWrite: '<S717>/EePWDR_t_DAP_FA_ElapsedTime' incorporates:
     *  Inport: '<Root>/EePWDR_t_DAP_FA_ElapsedTime_PM_In'
     */
    (void)Rte_Read_EePWDR_t_DAP_FA_ElapsedTime_Rx_EePWDR_t_DAP_FA_ElapsedTime
        ((&(EePWDR_t_DAP_FA_ElapsedTime)));

    /* DataStoreWrite: '<S717>/EePWDR_Cnt_WarmupCycle' incorporates:
     *  Inport: '<Root>/EePWDR_Cnt_WarmupCycle_PM_In'
     */
    (void)Rte_Read_EePWDR_Cnt_WarmupCycle_Rx_EePWDR_Cnt_WarmupCycle
        ((&(EePWDR_Cnt_WarmupCycle)));

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVDAPMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVDAPMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVDAPMFOP_Rx_NePWDR_Cnt_HVDAPMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVDAPMFOP);

    /* DataStoreWrite: '<S717>/EePWDR_b_DAPFA_OpenCntctr' incorporates:
     *  Inport: '<Root>/EePWDR_b_DAPFA_OpenCntctr_PM_In'
     */
    (void)Rte_Read_EePWDR_b_DAPFA_OpenCntctr_Rx_EePWDR_b_DAPFA_OpenCntctr
        ((&(EePWDR_b_DAPFA_OpenCntctr)));

    /* DataStoreWrite: '<S717>/EePWDR_t_DAP_FA_InitTime' incorporates:
     *  Inport: '<Root>/EePWDR_t_DAP_FA_InitTime_PM_In'
     */
    (void)Rte_Read_EePWDR_t_DAP_FA_InitTime_Rx_EePWDR_t_DAP_FA_InitTime
        ((&(EePWDR_t_DAP_FA_InitTime)));

    /* DataStoreWrite: '<S717>/EePWDR_y_DID_B524' incorporates:
     *  Inport: '<Root>/EePWDR_y_DID_B524_PM_In'
     */
    (void)Rte_Read_EePWDR_y_DID_B524_Rx_EePWDR_y_DID_B524((&(EePWDR_y_DID_B524)));

    /* DataStoreWrite: '<S717>/NePWDR_Cnt_HVFuseEMFOP' incorporates:
     *  Inport: '<Root>/NePWDR_Cnt_HVFuseEMFOP_PM_In'
     */
    (void)Rte_Read_NePWDR_Cnt_HVFuseEMFOP_Rx_NePWDR_Cnt_HVFuseEMFOP
        (&PWDR_ac_DW.NePWDR_Cnt_HVFuseEMFOP);

    /* DataStoreWrite: '<S717>/EePWDR_l_DAP_FA_DistTravld' incorporates:
     *  Inport: '<Root>/EePWDR_l_DAP_FA_DistTravld_PM_In'
     */
    (void)Rte_Read_EePWDR_l_DAP_FA_DistTravld_Rx_EePWDR_l_DAP_FA_DistTravld
        ((&(EePWDR_l_DAP_FA_DistTravld)));

#if Rte_SysCon_Variant_PWDR_2

    /* Outputs for Function Call SubSystem: '<S5>/InitPWDIOutput' */
    /* Switch: '<S718>/Switch1' incorporates:
     *  Constant: '<S721>/Calib'
     */
    if (KePWDR_b_OpenCntctrOvrdEnbl)
    {
        /* Switch: '<S718>/Switch1' incorporates:
         *  Constant: '<S720>/Calib'
         */
        VePWDR_b_DAPFAOpenCntctrEEPROM = KePWDR_b_OpenCntctrOvrd;
    }
    else
    {
        /* Switch: '<S718>/Switch1' incorporates:
         *  DataStoreRead: '<S718>/Data Store Read4'
         */
        VePWDR_b_DAPFAOpenCntctrEEPROM = EePWDR_b_DAPFA_OpenCntctr;
    }

    /* End of Switch: '<S718>/Switch1' */

    /* DataStoreWrite: '<S718>/Data Store Write' */
    EePWDR_b_DAPFA_OpenCntctr = VePWDR_b_DAPFAOpenCntctrEEPROM;

    /* End of Outputs for SubSystem: '<S5>/InitPWDIOutput' */
    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S719>/VePWDR_b_SOCHighFltDtct_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_SOCHig = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_SOCLowFltDtct_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_SOCLow = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_BattOverTempFltDtct_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_BattOv = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_SOCRatFA_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_SOCRat = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_BattOverTempWarning_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_Batt_k = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_IUMPR_InhibitBit_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_IUMPR_ = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_SOCLowDTCFA_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_SOCL_d = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_SOCHighDTCFA_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_SOCH_l = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_IUMPR_SOCHigh_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_IUMP_o = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_IUMPR_SOCLow_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_IUMP_a = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_IUMPR_SOCPerf_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_IUMP_p = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_HVOverVoltFltDtct_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_HVOver = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_HVUnderVoltFltDtct_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_HVUnde = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_DAPFA_OpenCntctr_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_DAPFA_ = false;

    /* SignalConversion generated from: '<S719>/VePWDR_e_HVOverVoltFailure_Out_Init' incorporates:
     *  Constant: '<S719>/Const15'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVOver = PWDR_ac_ConstB.Const15;

    /* SignalConversion generated from: '<S719>/VePWDR_b_HV_VoltTooLow_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_HV_Vol = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_APM_HV_VoltChkFail_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_APM_HV = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_EAC_HV_VoltChkFail_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_EAC_HV = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_Htr_HV_VoltChkFail_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_Htr_HV = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_Htr2_HV_VoltChkFail_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_Htr2_H = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_Htr4_HV_VoltChkFail_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_Htr4_H = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_SOCRatEnbld_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_SOCR_p = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_FltShtDwnCmnd_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_FltSht = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_HV_BatCntctrReqOpen_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_HV_Bat = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_BSW_SPT_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_BSW_SP = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_Cntctrs_HV_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_Cntctr = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_InverterFaulted_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_Invert = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_HVBatRdyTimeOut_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_HVBatR = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_MCP_SPT_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_MCP_SP = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_EngCntrlSysDsbld_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_EngCnt = false;

    /* SignalConversion generated from: '<S719>/VePWDR_b_THMRShtDwnOnRS_FailCond_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_THMRSh = false;

    /* SignalConversion generated from: '<S719>/VePWDR_e_HVFuseA_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const32'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFuse = PWDR_ac_ConstB.Const32;

    /* SignalConversion generated from: '<S719>/VePWDR_e_HVFuseB_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const33'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_m = PWDR_ac_ConstB.Const33;

    /* SignalConversion generated from: '<S719>/VePWDR_e_HVFuseC_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const34'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_g = PWDR_ac_ConstB.Const34;

    /* SignalConversion generated from: '<S719>/VePWDR_e_HVFuseD_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const35'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVF_gn = PWDR_ac_ConstB.Const35;

    /* SignalConversion generated from: '<S719>/VePWDR_e_HVFuseE_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const36'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_d = PWDR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
     *  Constant: '<S722>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_FaultS = PWDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
     *  Constant: '<S723>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_b = PWDR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_OpnHVCbl' incorporates:
     *  Constant: '<S724>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_i = PWDR_ac_ConstB.Constant_dz;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuse' incorporates:
     *  Constant: '<S725>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_j = PWDR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseB' incorporates:
     *  Constant: '<S726>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_o = PWDR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseC' incorporates:
     *  Constant: '<S727>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_c = PWDR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseD' incorporates:
     *  Constant: '<S728>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_br = PWDR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseE' incorporates:
     *  Constant: '<S729>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_a = PWDR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HVILCkt' incorporates:
     *  Constant: '<S730>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_g = PWDR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_ConModImpWkupPerf' incorporates:
     *  Constant: '<S731>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_k = PWDR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_Ovrtemp' incorporates:
     *  Constant: '<S732>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_io = PWDR_ac_ConstB.Constant_nf;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_BPCM_P1A26' incorporates:
     *  Constant: '<S733>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_l = PWDR_ac_ConstB.Constant_ap;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_BattSOC_Hi' incorporates:
     *  Constant: '<S734>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_bt = PWDR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_BattSOC_Lo' incorporates:
     *  Constant: '<S735>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_jl = PWDR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S719>/VePWDR_b_RC1300_RoutineResults_Out_Init' */
    PWDR_ac_B.OutportBufferForVePWDR_b_RC1300 = false;

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_e_FaultSts_BPCM_P1A26' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_BPCM_P1A26'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_BPCM_P1A26'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_BPCM_P1A26_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_l);

    /* Outport: '<Root>/VePWDR_e_FaultSts_ConModImpWkupPerf' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_ConModImpWkupPerf'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_ConModImpWkupPerf'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_ConModImpWkupPerf_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_k);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_BattSOC_Hi' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HB_BattSOC_Hi'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_BattSOC_Hi'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_BattSOC_Hi_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Fau_bt);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_BattSOC_Lo' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HB_BattSOC_Lo'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_BattSOC_Lo'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_BattSOC_Lo_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Fau_jl);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_b);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_Ovrtemp' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HB_Ovrtemp'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_Ovrtemp'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_Ovrtemp_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Fau_io);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_FaultS);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HVILCkt' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HVILCkt'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HVILCkt'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HVILCkt_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_g);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuse' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HiVoltageFuse'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuse'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuse_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_j);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseB' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HiVoltageFuseB'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseB'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseB_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_o);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseC' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HiVoltageFuseC'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseC'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseC_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_c);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseD' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HiVoltageFuseD'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseD'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseD_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Fau_br);

    /* Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseE' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_HiVoltageFuseE'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseE'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseE_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_a);

    /* Outport: '<Root>/VePWDR_e_FaultSts_OpnHVCbl' incorporates:
     *  SignalConversion generated from: '<S5>/R_VePWDR_e_FaultSts_OpnHVCbl'
     *  SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_OpnHVCbl'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_OpnHVCbl_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_Faul_i);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VePWDR_Cnt_DAP_FA_KeyCylCnt' incorporates:
     *  DataStoreRead: '<S719>/Data Store Read1'
     *  SignalConversion generated from: '<S5>/VePWDR_Cnt_DAP_FA_KeyCylCnt_Out_Init'
     */
    (void)Rte_Write_VePWDR_Cnt_DAP_FA_KeyCylCnt_Value
        (EePWDR_Cnt_DAP_FA_KeyCylCnt);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* Outport: '<Root>/VePWDR_b_APM_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_APM_HV_VoltChkFail_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_APM_HV_VoltChkFail_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_APM_HV);

    /* Outport: '<Root>/VePWDR_b_BSW_SPT_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_BSW_SPT_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_BSW_SPT_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_BSW_SP);

    /* Outport: '<Root>/VePWDR_b_BattOverTempFltDtct' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_BattOverTempFltDtct_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_BattOverTempFltDtct_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_BattOv);

    /* Outport: '<Root>/VePWDR_b_BattOverTempWarning' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_BattOverTempWarning_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_BattOverTempWarning_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_Batt_k);

    /* Outport: '<Root>/VePWDR_b_Cntctrs_HV_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_Cntctrs_HV_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_Cntctrs_HV_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_Cntctr);

    /* Outport: '<Root>/VePWDR_b_DAPFA_OpenCntctr' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_DAPFA_OpenCntctr_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_DAPFA_OpenCntctr_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_DAPFA_);

    /* Outport: '<Root>/VePWDR_b_EAC_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_EAC_HV_VoltChkFail_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_EAC_HV_VoltChkFail_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_EAC_HV);

    /* Outport: '<Root>/VePWDR_b_EngCntrlSysDsbld_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_EngCntrlSysDsbld_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_EngCntrlSysDsbld_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_EngCnt);

    /* Outport: '<Root>/VePWDR_b_FltShtDwnCmnd_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_FltShtDwnCmnd_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_FltShtDwnCmnd_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_FltSht);

    /* Outport: '<Root>/VePWDR_b_HVBatRdyTimeOut_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_HVBatRdyTimeOut_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_HVBatRdyTimeOut_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_HVBatR);

    /* Outport: '<Root>/VePWDR_b_HVOverVoltFltDtct' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_HVOverVoltFltDtct_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_HVOverVoltFltDtct_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_HVOver);

    /* Outport: '<Root>/VePWDR_b_HVUnderVoltFltDtct' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_HVUnderVoltFltDtct_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_HVUnderVoltFltDtct_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_HVUnde);

    /* Outport: '<Root>/VePWDR_b_HV_BatCntctrReqOpen_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_HV_BatCntctrReqOpen_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_HV_BatCntctrReqOpen_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_HV_Bat);

    /* Outport: '<Root>/VePWDR_b_HV_VoltTooLow' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_HV_VoltTooLow_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_HV_VoltTooLow_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_HV_Vol);

    /* Outport: '<Root>/VePWDR_b_Htr2_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_Htr2_HV_VoltChkFail_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_Htr2_HV_VoltChkFail_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_Htr2_H);

    /* Outport: '<Root>/VePWDR_b_Htr4_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_Htr4_HV_VoltChkFail_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_Htr4_HV_VoltChkFail_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_Htr4_H);

    /* Outport: '<Root>/VePWDR_b_Htr_HV_VoltChkFail' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_Htr_HV_VoltChkFail_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_Htr_HV_VoltChkFail_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_Htr_HV);

    /* Outport: '<Root>/VePWDR_b_IUMPR_InhibitBit' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_IUMPR_InhibitBit_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_InhibitBit_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_IUMPR_);

    /* Outport: '<Root>/VePWDR_b_IUMPR_SOCHigh' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_IUMPR_SOCHigh_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_SOCHigh_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_IUMP_o);

    /* Outport: '<Root>/VePWDR_b_IUMPR_SOCLow' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_IUMPR_SOCLow_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_SOCLow_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_IUMP_a);

    /* Outport: '<Root>/VePWDR_b_IUMPR_SOCPerf' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_IUMPR_SOCPerf_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_IUMPR_SOCPerf_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_IUMP_p);

    /* Outport: '<Root>/VePWDR_b_InverterFaulted_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_InverterFaulted_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_InverterFaulted_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_Invert);

    /* Outport: '<Root>/VePWDR_b_MCP_SPT_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_MCP_SPT_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_MCP_SPT_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_MCP_SP);

    /* Outport: '<Root>/VePWDR_b_RC1300_RoutineResults' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_RC1300_RoutineResults_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_RC1300_RoutineResults_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_RC1300);

    /* Outport: '<Root>/VePWDR_b_SOCHighDTCFA' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_SOCHighDTCFA_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_SOCHighDTCFA_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_SOCH_l);

    /* Outport: '<Root>/VePWDR_b_SOCHighFltDtct' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_SOCHighFltDtct_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_SOCHighFltDtct_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_SOCHig);

    /* Outport: '<Root>/VePWDR_b_SOCLowDTCFA' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_SOCLowDTCFA_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_SOCLowDTCFA_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_SOCL_d);

    /* Outport: '<Root>/VePWDR_b_SOCLowFltDtct' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_SOCLowFltDtct_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_SOCLowFltDtct_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_SOCLow);

    /* Outport: '<Root>/VePWDR_b_SOCRatEnbld' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_SOCRatEnbld_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_SOCRatEnbld_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_SOCR_p);

    /* Outport: '<Root>/VePWDR_b_SOCRatFA' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_SOCRatFA_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_SOCRatFA_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_SOCRat);

    /* Outport: '<Root>/VePWDR_b_THMRShtDwnOnRS_FailCond' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_b_THMRShtDwnOnRS_FailCond_Out_Init'
     */
    (void)Rte_Write_VePWDR_b_THMRShtDwnOnRS_FailCond_Value
        (PWDR_ac_B.OutportBufferForVePWDR_b_THMRSh);

    /* Outport: '<Root>/VePWDR_e_HVFuseA_Status' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_e_HVFuseA_Status_Out_Init'
     *  SignalConversion generated from: '<S719>/VePWDR_e_HVFuseA_Status_Out_Init'
     */
    (void)Rte_Write_VePWDR_e_HVFuseA_Status_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_HVFuse);

    /* Outport: '<Root>/VePWDR_e_HVFuseB_Status' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_e_HVFuseB_Status_Out_Init'
     *  SignalConversion generated from: '<S719>/VePWDR_e_HVFuseB_Status_Out_Init'
     */
    (void)Rte_Write_VePWDR_e_HVFuseB_Status_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_m);

    /* Outport: '<Root>/VePWDR_e_HVFuseC_Status' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_e_HVFuseC_Status_Out_Init'
     *  SignalConversion generated from: '<S719>/VePWDR_e_HVFuseC_Status_Out_Init'
     */
    (void)Rte_Write_VePWDR_e_HVFuseC_Status_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_g);

    /* Outport: '<Root>/VePWDR_e_HVFuseD_Status' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_e_HVFuseD_Status_Out_Init'
     *  SignalConversion generated from: '<S719>/VePWDR_e_HVFuseD_Status_Out_Init'
     */
    (void)Rte_Write_VePWDR_e_HVFuseD_Status_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_HVF_gn);

    /* Outport: '<Root>/VePWDR_e_HVFuseE_Status' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_e_HVFuseE_Status_Out_Init'
     *  SignalConversion generated from: '<S719>/VePWDR_e_HVFuseE_Status_Out_Init'
     */
    (void)Rte_Write_VePWDR_e_HVFuseE_Status_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_d);

    /* Outport: '<Root>/VePWDR_e_HVOverVoltFailure' incorporates:
     *  SignalConversion generated from: '<S5>/VePWDR_e_HVOverVoltFailure_Out_Init'
     *  SignalConversion generated from: '<S719>/VePWDR_e_HVOverVoltFailure_Out_Init'
     */
    (void)Rte_Write_VePWDR_e_HVOverVoltFailure_Value
        (PWDR_ac_B.OutportBufferForVePWDR_e_HVOver);

    /* S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* Outport: '<Root>/VePWDR_l_DAP_FA_DistTravld' incorporates:
     *  DataStoreRead: '<S719>/Data Store Read'
     *  SignalConversion generated from: '<S5>/VePWDR_l_DAP_FA_DistTravld_Out_Init'
     */
    (void)Rte_Write_VePWDR_l_DAP_FA_DistTravld_Value(EePWDR_l_DAP_FA_DistTravld);

    /* Outport: '<Root>/VePWDR_t_DAP_FA_ElapsedTime' incorporates:
     *  DataStoreRead: '<S719>/Data Store Read2'
     *  SignalConversion generated from: '<S5>/VePWDR_t_DAP_FA_ElapsedTime_Out_Init'
     */
    (void)Rte_Write_VePWDR_t_DAP_FA_ElapsedTime_Value
        (EePWDR_t_DAP_FA_ElapsedTime);

    /* Outport: '<Root>/VePWDR_y_DID_B524' incorporates:
     *  DataStoreRead: '<S719>/Data Store Read3'
     *  SignalConversion generated from: '<S5>/VePWDR_y_DID_B524_Out_Init'
     */
    (void)Rte_Write_VePWDR_y_DID_B524_Value(EePWDR_y_DID_B524);

    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write' */
#if Rte_SysCon_Variant_PWDR_2

    /* SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write' */
    Rte_IrvWrite_PWDR_PwrOn_DAPFAOpenCntctrEEPROM_write_IRV
        (VePWDR_b_DAPFAOpenCntctrEEPROM);

#endif

    /* End of SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
FUNC(void, PWDR_CODE) Routine_RC1300_HVOpnCblReset(void)
{
    TeDCAB_e_RoutineOpType rtb_TmpSignalConversionAtVeDCAB;

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1300_HVOpnCblReset' incorporates:
     *  SubSystem: '<Root>/RC1300_HVOpnCblReset'
     */
    /* SignalConversion generated from: '<S6>/VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op' incorporates:
     *  Inport: '<Root>/VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op'
     */
    (void)Rte_Read_VeDCAB_e_Routine_RC1300_HVOpnCblReset_Op_Value
        (&rtb_TmpSignalConversionAtVeDCAB);

    /* If: '<S6>/If1' incorporates:
     *  Constant: '<S736>/Constant'
     *  Constant: '<S737>/Constant'
     *  RelationalOperator: '<S6>/Equal'
     *  RelationalOperator: '<S6>/Equal1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeDCAB) == CeDCAB_e_Routine_Start)
    {
        /* Outputs for IfAction SubSystem: '<S6>/IfAct' incorporates:
         *  ActionPort: '<S738>/Action Port'
         */
        /* DataStoreWrite: '<S738>/Data Store Write1' incorporates:
         *  Constant: '<S738>/Constant Value1'
         */
        EePWDR_y_DID_B524 = 0U;

        /* DataStoreWrite: '<S738>/Data Store Write5' incorporates:
         *  Constant: '<S738>/Constant Value5'
         */
        EePWDR_b_DAPFA_OpenCntctr = false;

#if Rte_SysCon_Variant_PWDR_3

        /* Outputs for Atomic SubSystem: '<S738>/DAPCounters' */
        /* Outputs for Atomic SubSystem: '<S740>/DAPCounters' */
        /* DataStoreWrite: '<S741>/Data Store Write' incorporates:
         *  Constant: '<S741>/Constant Value'
         */
        EePWDR_l_DAP_FA_DistTravld = 0.0F;

        /* DataStoreWrite: '<S741>/Data Store Write1' incorporates:
         *  Constant: '<S741>/Constant Value1'
         */
        EePWDR_Cnt_DAP_FA_KeyCylCnt = 0U;

        /* DataStoreWrite: '<S741>/Data Store Write4' incorporates:
         *  Constant: '<S741>/Constant Value4'
         */
        EePWDR_t_DAP_FA_ElapsedTime = 0U;

        /* End of Outputs for SubSystem: '<S740>/DAPCounters' */
        /* End of Outputs for SubSystem: '<S738>/DAPCounters' */
#endif

        /* End of Outputs for SubSystem: '<S6>/IfAct' */
    }
    else
    {
        if (((uint32)rtb_TmpSignalConversionAtVeDCAB) ==
                CeDCAB_e_Routine_ResultRequest)
        {
            /* Outputs for IfAction SubSystem: '<S6>/IfAct1' incorporates:
             *  ActionPort: '<S739>/Action Port'
             */
            /* DataStoreRead: '<S739>/Data Store Read' */
            PWDR_ac_B.DataStoreRead_a = EePWDR_b_DAPFA_OpenCntctr;

            /* End of Outputs for SubSystem: '<S6>/IfAct1' */
        }
    }

    /* End of If: '<S6>/If1' */

    /* Outport: '<Root>/VePWDR_b_RC1300_RoutineResults' incorporates:
     *  SignalConversion generated from: '<S6>/RC1300_RoutineResults'
     */
    (void)Rte_Write_VePWDR_b_RC1300_RoutineResults_Value
        (PWDR_ac_B.DataStoreRead_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC1300_HVOpnCblReset' */
}

/* Model initialize function */
FUNC(void, PWDR_CODE) PWDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/PWDR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' incorporates:
     *  SubSystem: '<S5>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_HVOverVoltFailure_Out_Init' incorporates:
     *  Constant: '<S719>/Const15'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVOver = PWDR_ac_ConstB.Const15;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_HVFuseA_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const32'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFuse = PWDR_ac_ConstB.Const32;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_HVFuseB_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const33'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_m = PWDR_ac_ConstB.Const33;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_HVFuseC_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const34'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_g = PWDR_ac_ConstB.Const34;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_HVFuseD_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const35'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVF_gn = PWDR_ac_ConstB.Const35;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_HVFuseE_Status_Out_Init' incorporates:
     *  Constant: '<S719>/Const36'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_HVFu_d = PWDR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
     *  Constant: '<S722>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_FaultS = PWDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
     *  Constant: '<S723>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_b = PWDR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_OpnHVCbl' incorporates:
     *  Constant: '<S724>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_i = PWDR_ac_ConstB.Constant_dz;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuse' incorporates:
     *  Constant: '<S725>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_j = PWDR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseB' incorporates:
     *  Constant: '<S726>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_o = PWDR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseC' incorporates:
     *  Constant: '<S727>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_c = PWDR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseD' incorporates:
     *  Constant: '<S728>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_br = PWDR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HiVoltageFuseE' incorporates:
     *  Constant: '<S729>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_a = PWDR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HVILCkt' incorporates:
     *  Constant: '<S730>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_g = PWDR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_ConModImpWkupPerf' incorporates:
     *  Constant: '<S731>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_k = PWDR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_Ovrtemp' incorporates:
     *  Constant: '<S732>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_io = PWDR_ac_ConstB.Constant_nf;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_BPCM_P1A26' incorporates:
     *  Constant: '<S733>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Faul_l = PWDR_ac_ConstB.Constant_ap;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_BattSOC_Hi' incorporates:
     *  Constant: '<S734>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_bt = PWDR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S719>/VePWDR_e_FaultSts_HB_BattSOC_Lo' incorporates:
     *  Constant: '<S735>/Constant'
     */
    PWDR_ac_B.OutportBufferForVePWDR_e_Fau_jl = PWDR_ac_ConstB.Constant_g;

    /* End of SystemInitialize for S-Function (fcgen): '<S5>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write' */
#if Rte_SysCon_Variant_PWDR_2

    /* SystemInitialize for SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write' */
    Rte_IrvWrite_PWDR_ac_Init_DAPFAOpenCntctrEEPROM_write_IRV
        (VePWDR_b_DAPFAOpenCntctrEEPROM);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S5>/DAPFAOpenCntctrEEPROM_write' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/PWDR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/PWDR_Diag_HVTR'
     */

    /* SystemInitialize for Atomic SubSystem: '<S9>/HV_HVIL_DAP' */
#if Rte_SysCon_Variant_PWDR_2

    /* SystemInitialize for Atomic SubSystem: '<S54>/HV_HVIL_DAP' */

    /* SystemInitialize for IfAction SubSystem: '<S56>/DAP_Flt_Det' */
    PWDR_ac_DAP_Flt_Det_Init();

    /* End of SystemInitialize for SubSystem: '<S56>/DAP_Flt_Det' */

    /* SystemInitialize for Atomic SubSystem: '<S56>/HVFuse_Flt_Det' */
#if Rte_SysCon_Variant_PWDR_1

    /* SystemInitialize for Atomic SubSystem: '<S63>/HVFuse_Flt_Det' */
    PWDR_ac_HVFuse_Flt_Det_Init();

    /* End of SystemInitialize for SubSystem: '<S63>/HVFuse_Flt_Det' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S63>/HVFuse_Flt_Det_STUB' */
    /* Start for Constant: '<S277>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseA_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S278>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseB_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S279>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseC_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S280>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseD_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S281>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseE_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S276>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_h = CeDFIB_e_Init;

    /* Start for Constant: '<S272>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_i = CeDFIB_e_Init;

    /* Start for Constant: '<S273>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_o = CeDFIB_e_Init;

    /* Start for Constant: '<S274>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD'
     */
    PWDR_ac_B.VariantMergeForOutportFaultS_om = CeDFIB_e_Init;

    /* Start for Constant: '<S275>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_f = CeDFIB_e_Init;

    /* End of SystemInitialize for SubSystem: '<S63>/HVFuse_Flt_Det_STUB' */
#endif

    /* End of SystemInitialize for SubSystem: '<S56>/HVFuse_Flt_Det' */

    /* End of SystemInitialize for SubSystem: '<S54>/HV_HVIL_DAP' */
    /* End of SystemInitialize for SubSystem: '<S9>/HV_HVIL_DAP' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S54>/HV_Outputs_STUB' */
    /* Start for Constant: '<S356>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseA_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseA_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S357>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseB_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseB_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S358>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseC_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseC_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S359>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseD_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseD_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S355>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/HVFuseE_Status'
     */
    PWDR_ac_B.VariantMergeForOutportHVFuseE_S = CePWDR_e_FuseNotSupported;

    /* Start for Constant: '<S354>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuse'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_h = CeDFIB_e_Init;

    /* Start for Constant: '<S349>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseB'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_i = CeDFIB_e_Init;

    /* Start for Constant: '<S350>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseC'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_o = CeDFIB_e_Init;

    /* Start for Constant: '<S351>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseD'
     */
    PWDR_ac_B.VariantMergeForOutportFaultS_om = CeDFIB_e_Init;

    /* Start for Constant: '<S353>/Constant' incorporates:
     *  VariantMerge generated from: '<S54>/FaultSts_HiVoltageFuseE'
     */
    PWDR_ac_B.VariantMergeForOutportFaultSt_f = CeDFIB_e_Init;

    /* End of SystemInitialize for SubSystem: '<S54>/HV_Outputs_STUB' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_HVOverVoltFailure' incorporates:
     *  Merge: '<Root>/Merge_Outport_15'
     */
    (void)Rte_Write_VePWDR_e_HVOverVoltFailure_Value(CeHVTR_e_HVOverVoltPass);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_HVFuseA_Status' incorporates:
     *  Merge: '<Root>/Merge_Outport_32'
     */
    (void)Rte_Write_VePWDR_e_HVFuseA_Status_Value(CePWDR_e_FuseNotSupported);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_HVFuseB_Status' incorporates:
     *  Merge: '<Root>/Merge_Outport_33'
     */
    (void)Rte_Write_VePWDR_e_HVFuseB_Status_Value(CePWDR_e_FuseNotSupported);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_HVFuseC_Status' incorporates:
     *  Merge: '<Root>/Merge_Outport_34'
     */
    (void)Rte_Write_VePWDR_e_HVFuseC_Status_Value(CePWDR_e_FuseNotSupported);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_HVFuseD_Status' incorporates:
     *  Merge: '<Root>/Merge_Outport_35'
     */
    (void)Rte_Write_VePWDR_e_HVFuseD_Status_Value(CePWDR_e_FuseNotSupported);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_HVFuseE_Status' incorporates:
     *  Merge: '<Root>/Merge_Outport_36'
     */
    (void)Rte_Write_VePWDR_e_HVFuseE_Status_Value(CePWDR_e_FuseNotSupported);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_SysPrchrgTmTooLong_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_CntctrCntrlSeqIncrt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_OpnHVCbl' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_OpnHVCbl'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_OpnHVCbl_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuse' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HiVoltageFuse'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuse_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseB' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HiVoltageFuseB'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseB_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseC' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HiVoltageFuseC'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseC_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseD' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HiVoltageFuseD'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseD_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HiVoltageFuseE' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HiVoltageFuseE'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HiVoltageFuseE_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HVILCkt' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HVILCkt'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HVILCkt_Value(CeDFIB_e_Init);

#if Rte_SysCon_Variant_PWDR_6
#endif

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_ConModImpWkupPerf' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_ConModImpWkupPerf'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_ConModImpWkupPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HB_Ovrtemp' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HB_Ovrtemp'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_Ovrtemp_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_BPCM_P1A26' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_BPCM_P1A26'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_BPCM_P1A26_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HB_BattSOC_Hi' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HB_BattSOC_Hi'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_BattSOC_Hi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VePWDR_e_FaultSts_HB_BattSOC_Lo' incorporates:
     *  Merge: '<Root>/M_VePWDR_e_FaultSts_HB_BattSOC_Lo'
     */
    (void)Rte_Write_VePWDR_e_FaultSts_HB_BattSOC_Lo_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
