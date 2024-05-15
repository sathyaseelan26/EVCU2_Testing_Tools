/*
 * File: APSR_ac.c
 *
 * Code generated for Simulink model 'APSR_ac'.
 *
 * Model version                  : 9.303
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:06:46 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "APSR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* Named constants for Chart: '<S23>/EEPROM_Manage' */
#if Rte_SysCon_Variant_APSR_7
#define APSR_ac_IN_EE_PENDING          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_APSR_7
#define APSR_ac_IN_WAIT_TRIGGER        ((uint8)2U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_APSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Cnt_FixedPedalIncCntr =
    1.0F;                              /* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Cnt_FixedPedalRstCntr =
    0.0F;                              /* Referenced by: '<S115>/Calib' */

#endif

#if (Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

static volatile CONST(uint16, APSR_VAR_INIT) KeAPSR_Cnt_FxdPdlAccStuckSmp = 0U;/* Referenced by: '<S119>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(uint8, APSR_VAR_INIT) KeAPSR_Cnt_KickDownTmr = 100U;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_LV1_5VRefAuxCntrLim = 18;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_LV1_5VRefOutCntrLim = 18;/* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1CohDecCntr = -1;/* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1CntrDec = -1;/* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1CntrInc = 3;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1CntrLim = 30;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1IpMaxCntrInc = 1;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1IpMaxCntrLim = 20;/* Referenced by: '<S286>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1IpMinCntrInc = 1;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv1IpMinCntrLim = 20;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2CntrDec = -1;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2CntrInc = 3;/* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2CntrLim = 30;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2IpMaxCntrInc = 1;/* Referenced by: '<S396>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2IpMaxCntrLim = 20;/* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2IpMinCntrInc = 1;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1Pv2IpMinCntrLim = 20;/* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1PvCohCntrInc = 3;/* Referenced by: '<S506>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1PvCohCntrLim = 42;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1_5VRefAuxCntrInc = 3;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(sint16, APSR_VAR_INIT) KeAPSR_Cnt_Lv1_5VRefOutCntrInc = 3;/* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(uint8, APSR_VAR_INIT) KeAPSR_Cnt_WrtAttempts = 3U;/* Referenced by: '<S57>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_K_Lv1Pv2Slope = 1.96F;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_K_Lv1PvTrqRampDec = 0.0F;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_K_Lv1PvTrqRampInc = 0.0F;/* Referenced by: '<S128>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_K_Lv1PvTrqRampMultMin =
    0.5F;                              /* Referenced by: '<S129>/Calib' */

#endif

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Pct_AccPdlPos_OBD_Dflt =
    0.0F;                              /* Referenced by: '<S563>/Calib' */

#if Rte_SysCon_Variant_APSR_6

static volatile CONST(float32, APSR_VAR_INIT)
    KeAPSR_Pct_AccelPedalActPositionDflt = 0.0F;/* Referenced by:
                                                 * '<S5>/FsftAPSR_Pct_AccelPedalActPositionChrt'
                                                 * '<S564>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_APSR_6

static volatile CONST(float32, APSR_VAR_INIT)
    KeAPSR_Pct_AccelPedalEffPositionDflt = 0.0F;/* Referenced by:
                                                 * '<S6>/FsftAPSR_Pct_AccelPedalEffPositionChrt'
                                                 * '<S8>/PokeAPSR_Pct_AccelPedalEffPositionChrt'
                                                 * '<S565>/Calib'
                                                 */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Pct_DrvBehThr = 80.0F;/* Referenced by: '<S53>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Pct_KickDownLimit = 85.0F;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Pct_KickDownLwr = 80.0F;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_Pct_KickDownUp = 90.0F;/* Referenced by: '<S132>/Calib' */

#endif

#if (Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_FxdPdlDelta = 0.1F;/* Referenced by: '<S97>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_FxdPdlMinPdl = 0.0F;/* Referenced by:
                                                                      * '<S98>/Calib'
                                                                      * '<S120>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_IpLv1PvLhMax = 1.0F;/* Referenced by: '<S498>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_LV1_5VRefAuxNoiseMax =
    0.0978F;                           /* Referenced by: '<S163>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_LV1_5VRefOutNoiseMax =
    0.0978F;                           /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv1IpMaxLim = 4.2F;/* Referenced by:
                                                                      * '<S264>/Calib'
                                                                      * '<S281>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv1IpMinLim = 1.2F;/* Referenced by:
                                                                      * '<S265>/Calib'
                                                                      * '<S282>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv1Max = 4.8F;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv1Min = 0.1F;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv1MinClip = -0.45F;/* Referenced by: '<S492>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv1MinNorm = 0.8F;/* Referenced by: '<S493>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv2IpMaxLim = 2.1F;/* Referenced by:
                                                                      * '<S374>/Calib'
                                                                      * '<S392>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv2IpMinLim = 0.6F;/* Referenced by:
                                                                      * '<S375>/Calib'
                                                                      * '<S393>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv2Max = 2.6F;/* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv2Min = 0.05F;/* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv2MinClip = -0.45F;/* Referenced by: '<S490>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1Pv2MinNorm = 0.0F;/* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvAdapMax = 0.518F;/* Referenced by: '<S519>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvAdapMin = 0.318F;/* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvAdapt = 0.02F;/* Referenced by: '<S494>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvBrkLHMax = 1.0F;/* Referenced by:
                                                                      * '<S94>/Calib'
                                                                      * '<S99>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvBrkPvRateThrsh =
    0.03F;                             /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvBrkRampDec = 0.1F;/* Referenced by:
                                                                      * '<S95>/Calib'
                                                                      * '<S100>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvBrkRampInc = 0.2F;/* Referenced by:
                                                                      * '<S96>/Calib'
                                                                      * '<S101>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvLHMax = 2.5F;/* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvLHMaxIncPerLoop =
    0.01F;                             /* Referenced by: '<S486>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvLHMin = 0.0F;/* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvMaxChangePerUpdate =
    0.02F;                             /* Referenced by: '<S523>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvMaxDecPerLoop = 0.5F;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvMode1DecPerLoop =
    0.5F;                              /* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1PvOffset = 0.0F;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1_5VRefAuxMax = 5.25F;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1_5VRefAuxMin = 4.75F;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1_5VRefOutMax = 5.25F;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_Lv1_5VRefOutMin = 4.7F;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_PVIncPerLoopMin = 0.503F;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_PvMaxValue = 5.0F;/* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_RawAux_Init = 5.0F;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_U_RawOut_Init = 5.0F;/* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_AccPedalFAArb = 1;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_AccPedalFAMap = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_BrkStsOvrd = 0;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_DiagGlbCondOvrd = 0;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_DialLv1PvTrqSel = 0;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_EEPROMStoreNew_Enb = 1;/* Referenced by: '<S65>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_EnbPdlFaultCond = 0;/* Referenced by: '<S546>/Calib' */

#endif

#if (Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_FxdPdlBld = 0;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_FxdPdlStckOvrdCond = 1;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_HighCreepCohChk = 0;/* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_Lv1PvAdaptEnbl = 0;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_Lv1PvBrkEnable = 1;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_OvrdPSAPdlLrn = 0;/* Referenced by: '<S551>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_OvrdPwrSupFlt = 0;/* Referenced by:
                                                                      * '<S250>/Calib'
                                                                      * '<S362>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_PRNDSel = 0;/* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_PVBrkNewStrg = 0;/* Referenced by:
                                                                      * '<S76>/Calib'
                                                                      * '<S125>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_APSR_3 && Rte_SysCon_Variant_APSR_7

static volatile CONST(boolean, APSR_VAR_INIT) KeAPSR_b_ParHybConf = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(TeAPSR_e_Lv1PvMode, APSR_VAR_INIT) KeAPSR_e_Lv1PVIPMode =
    CeAPSR_e_LV1PVMode_CohFail;        /* Referenced by: '<S548>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(TeAPSR_e_Lv1PvMode, APSR_VAR_INIT)
    KeAPSR_e_Lv1PvIdleModeValue = CeAPSR_e_LV1PVMode_NotValid;/* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_k_Lv1Pv1IpMinFilter = 0.1F;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_k_Lv1Pv2IpMinFilter = 0.1F;/* Referenced by: '<S394>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_k_Lv1PvAdaptEwmaGain = 0.1F;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_k_Lv1_5VRefAuxFilt =
    0.6563F;                           /* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_k_Lv1_5VRefOutFilt =
    0.6563F;                           /* Referenced by: '<S208>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_3 && Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_n_EngSpdThr = 0.0F;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_6

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_t_MinDefaultTime = 0.25F;
              /* Referenced by: '<S8>/PokeAPSR_Pct_AccelPedalEffPositionChrt' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_v_Default = 50.0F;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KeAPSR_v_FxdPdlMinVehSpd = 0.0F;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KtAPSR_Cnt_LV1PvBrkCntrLim[25] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F, 2.0F,
    2.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F, 4.0F, 4.0F, 2.0F, 2.0F, 3.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KtAPSR_K_Lv1PvTrqRampMultMinTbl[5]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KtAPSR_Pct_PtcPdlPct[9] =
{
    0.0F, 12.5F, 25.0F, 37.5F, 50.0F, 62.5F, 75.0F, 87.5F, 100.0F
} ;                                    /* Referenced by: '<S539>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KtAPSR_U_Lv1PvCohLimTbl[4] =
{
    0.15F, 0.15F, 0.2F, 0.2F
} ;                                    /* Referenced by: '<S508>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KtAPSR_U_PvMaxIncPerLoopTbl[5] =
{
    0.1F, 0.15F, 0.4F, 0.4F, 0.4F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KtAPSR_k_DelpvsFiltConstDr[5] =
{
    0.0F, 0.1F, 0.4F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S540>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KxAPSR_Cnt_LV1PvBrkCntrLim[5] =
{
    0.0F, 1.0F, 3.0F, 4.0F, 5.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KxAPSR_K_Lv1PvTrqRampMultMinTbl[5]
    =
{
    0.0F, 9.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S130>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KxAPSR_Pct_PtcPdlPct[9] =
{
    0.0F, 0.33F, 0.66F, 0.99F, 1.32F, 1.65F, 1.98F, 2.31F, 3.3F
} ;                                    /* Referenced by: '<S539>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KxAPSR_U_Lv1PvCohLimTbl[4] =
{
    0.1F, 1.0F, 2.0F, 3.0F
} ;                                    /* Referenced by: '<S508>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KxAPSR_U_PvMaxIncPerLoopTbl[5] =
{
    0.0F, 0.1F, 0.4F, 1.3F, 2.4F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KxAPSR_k_DelpvsFiltConstDr[5] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F
} ;                                    /* Referenced by: '<S540>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static volatile CONST(float32, APSR_VAR_INIT) KyAPSR_Cnt_LV1PvBrkCntrLim[5] =
{
    0.0F, 10.0F, 30.0F, 50.0F, 70.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_APSR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, APSR_VAR_INIT) AeAPSR_U_Pvs1MaxValue;/* '<Root>/DSM_EeAPSR_U_Pvs1MaxValue' */
static VAR(float32, APSR_VAR_INIT) AeAPSR_U_Pvs1MinValue;/* '<Root>/DSM_EeAPSR_U_Pvs1MinValue' */
static VAR(float32, APSR_VAR_INIT) AeAPSR_U_Pvs2MaxValue;/* '<Root>/DSM_EeAPSR_U_Pvs2MaxValue' */
static VAR(float32, APSR_VAR_INIT) AeAPSR_U_Pvs2MinValue;/* '<Root>/DSM_EeAPSR_U_Pvs2MinValue' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv1MaxTestFailed;
                                    /* '<Root>/DSM_EeAPSR_b_Pv1MaxTestFailed' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv1MaxTestNotCmplt;
                                  /* '<Root>/DSM_EeAPSR_b_Pv1MaxTestNotCmplt' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv1MinTestFailed;
                                    /* '<Root>/DSM_EeAPSR_b_Pv1MinTestFailed' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv1MinTestNotCmplt;
                                  /* '<Root>/DSM_EeAPSR_b_Pv1MinTestNotCmplt' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv2MaxTestFailed;
                                    /* '<Root>/DSM_EeAPSR_b_Pv2MaxTestFailed' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv2MaxTestNotCmplt;
                                  /* '<Root>/DSM_EeAPSR_b_Pv2MaxTestNotCmplt' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv2MinTestFailed;
                                    /* '<Root>/DSM_EeAPSR_b_Pv2MinTestFailed' */
static VAR(boolean, APSR_VAR_INIT) AeAPSR_b_Pv2MinTestNotCmplt;
                                  /* '<Root>/DSM_EeAPSR_b_Pv2MinTestNotCmplt' */

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSI_b_IpEEIsInPlantMode;/* '<S20>/Logical_Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_IpEELv1Pv1Maxcntr;/* '<S289>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_IpEELv1Pv1Mincntr;/* '<S295>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_IpEELv1Pv2Maxcntr;/* '<S400>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_IpEELv1Pv2Mincntr;/* '<S405>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_Cnt_LV1PvBrkCntrLim;/* '<S113>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_Cnt_LV1PvBrkCntrPassed;/* '<S85>/relOp' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_Lv15VRefAuxDbc;/* '<S142>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_Lv15VRefOutDbc;/* '<S199>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_Lv1PVCohCntr;/* '<S510>/switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_Lv1Pv1Cntr;/* '<S328>/switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(sint16, APSR_VAR_INIT) VeAPSR_Cnt_Lv1Pv2Cntr;/* '<S437>/switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_Cnt_Lv1PvBrkCntr;/* '<S116>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_K_Lv1PvTrqLimMult;/* '<S87>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_K_Lv1PvTrqRampMultMin;/* '<S130>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_Pct_PedalPercent;/* '<S541>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_Pct_PtcPdlPctTbl;/* '<S539>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Cohresult;/* '<S44>/Abs' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_DelPvsHires;/* '<S46>/x2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_DeltaPvRate;/* '<S86>/DELTA_PV_RATE' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_IpEEETCPvs1MaxValue;/* '<S251>/Merge1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_IpEEETCPvs1MinValue;/* '<S251>/Merge3' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_IpEEETCPvs2MaxValue;/* '<S363>/Merge1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_IpEEETCPvs2MinValue;/* '<S363>/Merge3' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv15VRefAuxErr;/* '<S145>/Abs' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv15VRefAuxErrAvg;/* '<S144>/Sum2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv15VRefAvg;/* '<S145>/Sum2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv15VRefOutAvg;/* '<S202>/Sum2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv15VRefOutErr;/* '<S202>/Abs' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv15VRefOutErrAvg;/* '<S201>/Sum2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1DelPVS;/* '<S481>/LV1_DELPVS' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1DelPvsLmtdHires;/* '<S87>/switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1IPPvs1Filt;/* '<S284>/sum' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1IPPvs2Filt;/* '<S395>/sum' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PVAdaptMaxThisTrip;/* '<S522>/LV1_PV_ADAPT_MAX_THIS_TRIP' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PVAdaptMinThisTrip;/* '<S522>/LV1_PV_ADAPT_MIN_THIS_TRIP' */

#endif

#if (!Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PVBrkDelPVS;/* '<S79>/PrevValue' */

#endif

#if (Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PVBrkDelPVS_New;/* '<S80>/PrevValue' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1Pv1Mode;/* '<S479>/LV1_PV1_MODE' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1Pv1Norm;/* '<S477>/LV1_PVS_MIN_NORM2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1Pv2Mode;/* '<S479>/LV1_PV1_MODE1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1Pv2Norm;/* '<S476>/LV1_PVS_MIN_NORM3' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvAdaptDesiredThisTrip;
                                   /* '<S509>/LV1_PV_ADAPT_DESIRED_THIS_TRIP' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvCohLim;/* '<S508>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvInterm1;/* '<S509>/LV1_PV_INTERM1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvInterm2;/* '<S509>/LV1_PV_INTERM2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvRawFilt;
                                    /* '<S509>/Put EWMA here to reduce noise' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvsMinNorm;/* '<S478>/LV1_PVS_MIN_NORM' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_Lv1PvsMinNorm1;/* '<S479>/LV1_PVS_MIN_NORM1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_PvMaxIncPerLoopTbl;/* '<S488>/Vector' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_U_PvModeSnsArb;/* '<S475>/Stateflow' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_BrakeStatus;/* '<S91>/Switch1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_BrkTransitionOn;/* '<S73>/BRAKE_TRANSITION_ON' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_EEPROM_Ready;/* '<S23>/EEPROM_Manage' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_EEPROM_Store;/* '<S58>/Logical1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Failing5VRefAux;/* '<S143>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Failing5VRefOut;/* '<S200>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_FailingPv1;/* '<S329>/FAILING_PV1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_FailingPv2;/* '<S438>/Logical1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_FixedPdlChk;/* '<S86>/Start conditions1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv1MaxTestFailed;/* '<S251>/Merge6' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv1MaxTestNotCmplt;/* '<S251>/Merge4' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv1MinTestFailed;/* '<S251>/Merge5' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv1MinTestNotCmplt;/* '<S251>/Merge2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv2MaxTestFailed;/* '<S363>/Merge6' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv2MaxTestNotCmplt;/* '<S363>/Merge2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv2MinTestFailed;/* '<S363>/Merge5' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_IpEELv1Pv2MinTestNotCmplt;/* '<S363>/Merge7' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Lv1Pv1IPMaxFailing;/* '<S276>/LV1_PV1_IP_MAX_FAILING' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Lv1Pv1IPMinFailing;/* '<S277>/LV1_PV1_IP_MIN_FAILING' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Lv1Pv2IPMaxFailing;/* '<S388>/LV1_PV2_IP_MAX_FAILING' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Lv1Pv2IPMinFailing;/* '<S389>/LV1_PV2_IP_MIN_FAILING' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Lv1PvCohFailing;/* '<S44>/Comparison1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Lv1PvFailBrkOn;/* '<S42>/LV1_PV_FAIL_BRK_ON' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_ModulePowerdown_tmp;/* '<S509>/Logical' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_PropSysActvPdlLrn;/* '<S48>/switch1' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Pv1FailHi;/* '<S339>/PV1_FAIL_HI' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Pv1FailLo;/* '<S340>/PV1_FAIL_LO' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Pv2FailHi;/* '<S448>/Comparison' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_Pv2FailLo;/* '<S449>/Comparison2' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_PvBrkEnabled;/* '<S77>/PV_BRK_ENABLED' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_RefAuxFailHi;/* '<S166>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_RefAuxFailLo;/* '<S151>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_RefAuxFailNoisy;/* '<S143>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_RefOutFailHi;/* '<S223>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_RefOutFailLo;/* '<S203>/Relational Operator' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_RefOutFailNoisy;/* '<S200>/Switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(boolean, APSR_VAR_INIT) VeAPSR_b_VehSpdSrcNotValid;/* '<S84>/Comparison4' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(TeAPSR_e_Lv1PvMode, APSR_VAR_INIT) VeAPSR_e_Lv1PvFieldMode;/* '<S42>/switch' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(TeAPSR_e_Lv1PvMode, APSR_VAR_INIT) VeAPSR_e_Lv1_IP_MODE;/* '<S47>/Max_Chart' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(TeAPSR_e_Lv1PvMode, APSR_VAR_INIT) VeAPSR_e_Lv1_Pvmode;/* '<S42>/Mode_Detection' */

#endif

#if Rte_SysCon_Variant_APSR_7

static VAR(float32, APSR_VAR_INIT) VeAPSR_k_DelpvsFiltConstDr;/* '<S540>/Vector' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_APSR
#include "MemMap.h"

CONST(ConstB_APSR_ac_T, APSR_VAR_INIT) APSR_ac_ConstB =
{
    CeDFIB_e_Init,                     /* '<S566>/Constant' */
    CeDFIB_e_Init,                     /* '<S567>/Constant' */
    CeDFIB_e_Init,                     /* '<S568>/Constant' */
    CeDFIB_e_Init,                     /* '<S569>/Constant' */
    CeDFIB_e_Init,                     /* '<S570>/Constant' */
    CeDFIB_e_Init,                     /* '<S571>/Constant' */
    CeDFIB_e_Init,                     /* '<S572>/Constant' */
    CeDFIB_e_Init,                     /* '<S573>/Constant' */
    CeDFIB_e_Init,                     /* '<S574>/Constant' */
    CeDFIB_e_Init,                     /* '<S575>/Constant' */
    CeDFIB_e_Init,                     /* '<S576>/Constant' */
    CeDFIB_e_Init,                     /* '<S577>/Constant' */
    CeDFIB_e_Init,                     /* '<S578>/Constant' */
    CeDFIB_e_Init,                     /* '<S579>/Constant' */
    CeDFIB_e_Init,                     /* '<S580>/Constant' */
    CeDFIB_e_Init,                     /* '<S581>/Constant' */
    CeAPSR_e_LV1PVMode_PVOk            /* '<S562>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_APSR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_APSR
#include "MemMap.h"

CONST(ConstP_APSR_ac_T, APSR_VAR_INIT) APSR_ac_ConstP =
{

#if Rte_SysCon_Variant_APSR_7

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S113>/Vector'
     */
    {
        4U, 4U
    },

#endif

#ifndef CONSTP_APSR_AC_T_VARIANT_EXISTS

    0
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_APSR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSR
#include "MemMap.h"

VAR(B_APSR_ac_T, APSR_VAR_INIT) APSR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_APSR
#include "MemMap.h"

VAR(DW_APSR_ac_T, APSR_VAR_INIT) APSR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_APSR
#include "MemMap.h"
#if Rte_SysCon_Variant_APSR_7

static FUNC(void, APSR_CODE_LOCAL) APSR_ac_Init_j(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, APSR_VAR_INIT) rty_e_FaultStsInit);

#endif

#if Rte_SysCon_Variant_APSR_7

static FUNC(void, APSR_CODE_LOCAL) APSR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, APSR_VAR_INIT) rty_e_FaultStsPass);

#endif

#if Rte_SysCon_Variant_APSR_7

static FUNC(void, APSR_CODE_LOCAL) APSR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, APSR_VAR_INIT) rty_e_FaultStsFail);

#endif

/*
 * Output and update for action system:
 *    '<S81>/Init'
 *    '<S152>/Init'
 *    '<S153>/Init'
 *    '<S154>/Init'
 *    '<S209>/Init'
 *    '<S210>/Init'
 *    '<S211>/Init'
 *    '<S268>/Init'
 *    '<S269>/Init'
 *    '<S330>/Init'
 *    ...
 */
#if Rte_SysCon_Variant_APSR_7

static FUNC(void, APSR_CODE_LOCAL) APSR_ac_Init_j(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, APSR_VAR_INIT) rty_e_FaultStsInit)
{
    /* SignalConversion generated from: '<S106>/e_FaultStsInit' incorporates:
     *  Constant: '<S109>/Constant'
     */
    *rty_e_FaultStsInit = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for action system:
 *    '<S81>/Pass'
 *    '<S152>/Pass'
 *    '<S153>/Pass'
 *    '<S154>/Pass'
 *    '<S209>/Pass'
 *    '<S210>/Pass'
 *    '<S211>/Pass'
 *    '<S268>/Pass'
 *    '<S269>/Pass'
 *    '<S330>/Pass'
 *    ...
 */
#if Rte_SysCon_Variant_APSR_7

static FUNC(void, APSR_CODE_LOCAL) APSR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, APSR_VAR_INIT) rty_e_FaultStsPass)
{
    /* SignalConversion generated from: '<S107>/e_FaultStsPass' incorporates:
     *  Constant: '<S110>/Constant'
     */
    *rty_e_FaultStsPass = CeDFIB_e_Pass;
}

#endif

/*
 * Output and update for action system:
 *    '<S81>/Fail'
 *    '<S152>/Fail'
 *    '<S153>/Fail'
 *    '<S154>/Fail'
 *    '<S209>/Fail'
 *    '<S210>/Fail'
 *    '<S211>/Fail'
 *    '<S268>/Fail'
 *    '<S269>/Fail'
 *    '<S330>/Fail'
 *    ...
 */
#if Rte_SysCon_Variant_APSR_7

static FUNC(void, APSR_CODE_LOCAL) APSR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, APSR_VAR_INIT) rty_e_FaultStsFail)
{
    /* SignalConversion generated from: '<S105>/e_FaultStsFail' incorporates:
     *  Constant: '<S108>/Constant'
     */
    *rty_e_FaultStsFail = CeDFIB_e_Fail;
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_APSR_7

FUNC(void, APSR_CODE) APSR_FastTEF(void) /* Explicit Task: FastTEF */
{

#if Rte_SysCon_Variant_APSR_7

    float32 tmpForInput[3];

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_VariantMerge_For_Variant_So;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_nott2;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_OR1_n;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_VariantMerge_For_Variant__e;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_ORR3;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_FixPtUnitDelay2;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_Logical2_j;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint32 i;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint16 rtb_Switch_dt;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_relOp2_i;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_inactive_n;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_ntt2;

#endif

#if (Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

    boolean rtb_Logical3_o;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 rtb_MinMax1;

#endif

#if (!Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

    boolean rtb_Logical3_b;

#endif

#if (!Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

    float32 rtb_MinMax1_f;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_VariantMerge_For_Variant__d;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_Comparison_h;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_Comparison1_kk;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_VariantMerge_For_Variant__a;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_VariantMerge_For_Variant__o;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_UnitDelay_n1;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_AND_oe;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_OR1_ld;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_VariantMerge_For_Variant__f;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_andd;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_RelationalOperator3_ht;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_AND_eb;

#endif

#if (Rte_SysCon_Variant_APSR_4 && Rte_SysCon_Variant_APSR_7) || (Rte_SysCon_Variant_APSR_5 && Rte_SysCon_Variant_APSR_7)

    float32 rtb_switchhh;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_RelationalOperator3_f;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_AND_af;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_LatchaPass_k;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_LatchaPass_p0;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_AND_dn;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint16 rtb_PLUSS;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_AND_nc;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint16 rtb_Sum1_d;

#endif

#if Rte_SysCon_Variant_APSR_7

    TeAPSR_e_Lv1PvMode rtb_SwitchHH;

#endif

#if Rte_SysCon_Variant_APSR_7

    TeAPSR_e_Lv1PvMode rtb_SwitchHHH;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean TmpSignalConversionAtTmpVM_F_hr;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 TmpSignalConversionAtTmpVM_Fc_h;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 TmpSignalConversionAtTmpVM_Fc_p;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 TmpSignalConversionAtTmpVM_Fc_a;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 TmpSignalConversionAtTmpVM_F_p0;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 rtb_RelationalOperator3_h;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 tmp;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 tmp_0;

#endif

#if Rte_SysCon_Variant_APSR_7

    TeBRKR_e_BrkPdl_Stat tmp_1;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint32 rtb_andd_tmp;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 rtb_andd_tmp_0;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint32 rtb_andd_tmp_1;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 rtb_andd_tmp_2;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint32 rtb_andd_tmp_3;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 rtb_andd_tmp_4;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 rtb_Logical2_o_tmp;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint32 rtb_Logical2_o_tmp_0;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 rtb_Logical2_o_tmp_1;

#endif

#if Rte_SysCon_Variant_APSR_7

    sint32 rtb_Logical2_o_tmp_2;

#endif

#if Rte_SysCon_Variant_APSR_7

    uint32 rtb_Logical2_o_tmp_3;

#endif

#if Rte_SysCon_Variant_APSR_7

    TeTRGR_e_TransRangeState rtb_ORR3_tmp;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_APSR_7

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_ec);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_n5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeCSVR_e_VehSpdSrc'
     */
    (void)Rte_Read_VeCSVR_e_VehSpdSrc_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_ln);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_FcnC);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_ol);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VePSMR_Pct_Lv2AccelPedalEffPosition'
     */
    (void)Rte_Read_VePSMR_Pct_Lv2AccelPedalEffPosition_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrakeSrc'
     */
    (void)Rte_Read_VeBRKR_e_BrakeSrc_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_gi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    TmpSignalConversionAtTmpVM_F_hr =
        Rte_IrvRead_APSR_FastTEF_ServRoutStrt_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeBSWR_e_PedalSensorEEProgStatus'
     */
    (void)Rte_Read_VeBSWR_e_PedalSensorEEProgStatus_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Merge: '<Root>/Merge_7_Irv'
     */
    TmpSignalConversionAtTmpVM_Fc_h = Rte_IrvRead_APSR_FastTEF_RawPVS1_write_IRV
        ();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Merge: '<Root>/Merge_9_Irv'
     */
    TmpSignalConversionAtTmpVM_Fc_p = Rte_IrvRead_APSR_FastTEF_RawPVS2_write_IRV
        ();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    TmpSignalConversionAtTmpVM_Fc_a =
        Rte_IrvRead_APSR_FastTEF_RawOut5V_Init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    TmpSignalConversionAtTmpVM_F_p0 =
        Rte_IrvRead_APSR_FastTEF_RawAux5V_Init_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid'
     */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_g2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' */
#if Rte_SysCon_Variant_APSR_3 && Rte_SysCon_Variant_APSR_7

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    (void)Rte_Read_VeTISR_n_InputSpeed_Value
        (&APSR_ac_B.VM_Conditional_Signal_TmpVM_Fcn);

#elif !Rte_SysCon_Variant_APSR_3 && Rte_SysCon_Variant_APSR_7

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' */
    APSR_ac_B.VM_Conditional_Signal_TmpVM_Fcn = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_bv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' */
#if Rte_SysCon_Variant_APSR_3 && Rte_SysCon_Variant_APSR_7

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeENGR_b_LV12PwrFreeRq'
     */
    (void)Rte_Read_VeENGR_b_LV12PwrFreeRq_Value
        (&APSR_ac_B.VM_Conditional_Signal_TmpVM_F_g);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeENGR_i_ECM_LHOM_Trans'
     */
    (void)Rte_Read_VeENGR_i_ECM_LHOM_Trans_Value
        (&APSR_ac_B.VM_Conditional_Signal_TmpVM_F_b);

#elif !Rte_SysCon_Variant_APSR_3 && Rte_SysCon_Variant_APSR_7

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' */
    APSR_ac_B.VM_Conditional_Signal_TmpVM_F_g = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' */
    APSR_ac_B.VM_Conditional_Signal_TmpVM_F_b = 0;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
     */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_ov);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeHMIR_b_DriveReady'
     */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_di);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr12_Corr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr12_Corr_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr1CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr1CktHi_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr1CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr1CktLo_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt1Noisy'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt1Noisy_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt5CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt5CktHi_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_kn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt5CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt5CktLo_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr2CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr2CktHi_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_pv);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr2CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr2CktLo_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt2Noisy'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt2Noisy_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_er);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt6CktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt6CktHi_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_av);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_SnsrRefVolt6CktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_SnsrRefVolt6CktLo_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr1_MaxStpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr1_MaxStpPerf_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr1_MinStpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr1_MinStpPerf_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr2_MaxStpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr2_MaxStpPerf_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_dw);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_APP_Snsr2_MinStpPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_APP_Snsr2_MinStpPerf_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_BrkAccStuckPdl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_BrkAccStuckPdl_Value
        (&APSR_ac_B.TmpSignalConversionAtTmpVM_F_e2);

    /* Outputs for Function Call SubSystem: '<Root>/APSR_FastTEF' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_APP_Snsr12_Corr' */
    APSR_ac_DW.StatusByte_APP_Snsr12_Corr =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_m;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_APP_Snsr1CktHi' */
    APSR_ac_DW.StatusByte_APP_Snsr1CktHi =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_n;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_APP_Snsr1CktLo' */
    APSR_ac_DW.StatusByte_APP_Snsr1CktLo =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_g;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_SnsrRefVolt1Noisy' */
    APSR_ac_DW.StatusByte_SnsrRefVolt1Noisy =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_l;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_SnsrRefVolt5CktHi' */
    APSR_ac_DW.StatusByte_SnsrRefVolt5CktHi =
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_kn;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_SnsrRefVolt5CktLo' */
    APSR_ac_DW.StatusByte_SnsrRefVolt5CktLo =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_d;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_APP_Snsr2CktHi' */
    APSR_ac_DW.StatusByte_APP_Snsr2CktHi =
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_pv;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_APP_Snsr2CktLo' */
    APSR_ac_DW.StatusByte_APP_Snsr2CktLo =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_f;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_SnsrRefVolt2Noisy' */
    APSR_ac_DW.StatusByte_SnsrRefVolt2Noisy =
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_er;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_SnsrRefVolt6CktHi' */
    APSR_ac_DW.StatusByte_SnsrRefVolt6CktHi =
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_av;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_SnsrRefVolt6CktLo' */
    APSR_ac_DW.StatusByte_SnsrRefVolt6CktLo =
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_i;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Logic: '<S20>/Logical_Operator' */
    VeAPSI_b_IpEEIsInPlantMode = !APSR_ac_B.TmpSignalConversionAtTmpVM_F_n5;

    /* UnitDelay: '<S20>/FixPt Unit Delay2' */
    rtb_FixPtUnitDelay2 = APSR_ac_DW.FixPtUnitDelay2_DSTATE;

    /* Logic: '<S20>/Logical1' incorporates:
     *  Constant: '<S31>/Calib'
     */
    rtb_Logical1 = ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_g2) ||
                    (KeAPSR_b_DiagGlbCondOvrd));

    /* RelationalOperator: '<S363>/Comparison' incorporates:
     *  SignalConversion generated from: '<S363>/Variant Source1'
     */
#if Rte_SysCon_Variant_APSR_3

    /* VariantMerge generated from: '<S363>/Variant Source1' incorporates:
     *  Constant: '<S376>/Calib'
     */
    rtb_VariantMerge_For_Variant_So = (APSR_ac_B.VM_Conditional_Signal_TmpVM_Fcn
        < KeAPSR_n_EngSpdThr);

#else

    /* VariantMerge generated from: '<S363>/Variant Source1' incorporates:
     *  Constant: '<S363>/TRUE Constant'
     *  SignalConversion generated from: '<S363>/Variant Source1'
     */
    rtb_VariantMerge_For_Variant_So = true;

#endif

    /* End of RelationalOperator: '<S363>/Comparison' */

    /* Outputs for Atomic SubSystem: '<S48>/EdgeRising' */
    /* Logic: '<S550>/AND' incorporates:
     *  Logic: '<S550>/OR1'
     *  UnitDelay: '<S550>/Unit Delay'
     */
    rtb_AND_oe = !APSR_ac_DW.UnitDelay_DSTATE_oi;

    /* Update for UnitDelay: '<S550>/Unit Delay' incorporates:
     *  Constant: '<S48>/ONE2'
     */
    APSR_ac_DW.UnitDelay_DSTATE_oi = true;

    /* End of Outputs for SubSystem: '<S48>/EdgeRising' */

    /* Switch: '<S48>/switch1' incorporates:
     *  Constant: '<S551>/Calib'
     */
    VeAPSR_b_PropSysActvPdlLrn = ((!KeAPSR_b_OvrdPSAPdlLrn) &&
        (APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_b));

    /* Logic: '<S48>/nott2' incorporates:
     *  Switch: '<S48>/switch2'
     */
    rtb_nott2 = ((!rtb_AND_oe) && (VeAPSR_b_PropSysActvPdlLrn));

    /* Outputs for Atomic SubSystem: '<S20>/PVS1_Limit_Check' */
    /* S-Function (sfix_bitop): '<S357>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S357>/StatusByte_SnsrRefVolt1Noisy'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator2'
     */
    i = ((sint32)APSR_ac_DW.StatusByte_SnsrRefVolt1Noisy) & 1;

    /* Outputs for Enabled SubSystem: '<S139>/Out_Diagnostic' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    /* S-Function (sfix_bitop): '<S357>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S357>/StatusByte_SnsrRefVolt1Noisy'
     *  S-Function (sfix_bitop): '<S196>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S212>/Bitwise Operator2'
     */
    rtb_Logical2_o_tmp = ((uint32)APSR_ac_DW.StatusByte_SnsrRefVolt1Noisy) & 64U;

    /* End of Outputs for SubSystem: '<S139>/Out_Diagnostic' */

    /* S-Function (sfix_bitop): '<S359>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S359>/StatusByte_SnsrRefVolt5CktLo'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator2'
     */
    rtb_Logical2_o_tmp_0 = ((sint32)APSR_ac_DW.StatusByte_SnsrRefVolt5CktLo) & 1;

    /* Outputs for Enabled SubSystem: '<S139>/Out_Diagnostic' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    /* S-Function (sfix_bitop): '<S359>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S359>/StatusByte_SnsrRefVolt5CktLo'
     *  S-Function (sfix_bitop): '<S198>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S213>/Bitwise Operator2'
     */
    rtb_Logical2_o_tmp_1 = ((uint32)APSR_ac_DW.StatusByte_SnsrRefVolt5CktLo) &
        64U;

    /* End of Outputs for SubSystem: '<S139>/Out_Diagnostic' */

    /* S-Function (sfix_bitop): '<S358>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S358>/StatusByte_SnsrRefVolt5CktHi'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator2'
     */
    rtb_Logical2_o_tmp_2 = ((sint32)APSR_ac_DW.StatusByte_SnsrRefVolt5CktHi) & 1;

    /* Outputs for Enabled SubSystem: '<S139>/Out_Diagnostic' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    /* S-Function (sfix_bitop): '<S358>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S358>/StatusByte_SnsrRefVolt5CktHi'
     *  S-Function (sfix_bitop): '<S197>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S214>/Bitwise Operator2'
     */
    rtb_Logical2_o_tmp_3 = ((uint32)APSR_ac_DW.StatusByte_SnsrRefVolt5CktHi) &
        64U;

    /* End of Outputs for SubSystem: '<S139>/Out_Diagnostic' */

    /* Outputs for Atomic SubSystem: '<S257>/EdgeRising' */
    /* Logic: '<S274>/AND' incorporates:
     *  Logic: '<S274>/OR1'
     *  UnitDelay: '<S274>/Unit Delay'
     */
    rtb_AND_oe = (TmpSignalConversionAtTmpVM_F_hr &&
                  (!APSR_ac_DW.UnitDelay_DSTATE_oe));

    /* Update for UnitDelay: '<S274>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_oe = TmpSignalConversionAtTmpVM_F_hr;

    /* End of Outputs for SubSystem: '<S257>/EdgeRising' */

    /* Logic: '<S257>/Logical2' incorporates:
     *  Logic: '<S256>/noyy1'
     *  Logic: '<S258>/Logical1'
     *  Logic: '<S363>/Logical3'
     *  Logic: '<S368>/not1'
     *  Logic: '<S383>/Logical2'
     */
    rtb_nott2 = !rtb_nott2;

    /* UnitDelay: '<S257>/Unit Delay' incorporates:
     *  Logic: '<S257>/Logical'
     *  Logic: '<S257>/Logical1'
     */
#if Rte_SysCon_Variant_APSR_3

    /* Outputs for Atomic SubSystem: '<S257>/Signal Latch On With Reset' */
    /* Logic: '<S275>/OR1' incorporates:
     *  Logic: '<S275>/NOT'
     *  Logic: '<S275>/OR'
     *  UnitDelay: '<S275>/Unit Delay'
     */
    rtb_OR1_ld = (rtb_AND_oe || ((!APSR_ac_DW.UnitDelay_DSTATE_p0) &&
                   (APSR_ac_DW.UnitDelay_DSTATE_bm)));

    /* Update for UnitDelay: '<S275>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_bm = rtb_OR1_ld;

    /* VariantMerge generated from: '<S257>/Variant Source' incorporates:
     *  Logic: '<S257>/Logical2'
     */
    rtb_VariantMerge_For_Variant__f = ((rtb_OR1_ld &&
        rtb_VariantMerge_For_Variant_So) && rtb_nott2);

    /* End of Outputs for SubSystem: '<S257>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S257>/Variant Source' incorporates:
     *  Logic: '<S257>/Logical1'
     *  Logic: '<S257>/Logical2'
     */
    rtb_VariantMerge_For_Variant__f = (rtb_nott2 && rtb_AND_oe);

#endif

    /* End of UnitDelay: '<S257>/Unit Delay' */

    /* Logic: '<S256>/noyy' incorporates:
     *  Logic: '<S258>/Logical1'
     */
    rtb_Logical2_j = !rtb_VariantMerge_For_Variant__f;

    /* Logic: '<S256>/andd' incorporates:
     *  Logic: '<S256>/nott2'
     *  Logic: '<S256>/noyy'
     *  Logic: '<S256>/orr'
     *  UnitDelay: '<S363>/Unit Delay3'
     *  UnitDelay: '<S536>/Unit Delay'
     */
    rtb_andd = (((rtb_Logical2_j && (APSR_ac_DW.UnitDelay_DSTATE_o)) &&
                 (((VeAPSI_b_IpEEIsInPlantMode) || (APSR_ac_DW.UnitDelay3_DSTATE))
                  && rtb_VariantMerge_For_Variant_So)) && rtb_nott2);

    /* RelationalOperator: '<S270>/Relational Operator3' incorporates:
     *  Constant: '<S270>/Constant3'
     *  S-Function (sfix_bitop): '<S270>/Bitwise Operator2'
     */
    rtb_OR1_ld = ((((uint32)APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_o) & 64U) ==
                  0U);

    /* Outputs for Atomic SubSystem: '<S270>/EdgeFalling1' */
    /* Logic: '<S323>/AND' incorporates:
     *  Logic: '<S323>/OR1'
     *  UnitDelay: '<S323>/Unit Delay'
     */
    rtb_AND_oe = ((!rtb_OR1_ld) && (APSR_ac_DW.UnitDelay_DSTATE_od));

    /* Update for UnitDelay: '<S323>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_od = rtb_OR1_ld;

    /* End of Outputs for SubSystem: '<S270>/EdgeFalling1' */

    /* RelationalOperator: '<S271>/Relational Operator3' incorporates:
     *  Constant: '<S271>/Constant3'
     *  S-Function (sfix_bitop): '<S271>/Bitwise Operator2'
     */
    rtb_RelationalOperator3_ht = ((((uint32)
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_c) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S271>/EdgeFalling1' */
    /* Logic: '<S324>/AND' incorporates:
     *  Logic: '<S324>/OR1'
     *  UnitDelay: '<S324>/Unit Delay'
     */
    rtb_OR1_ld = ((!rtb_RelationalOperator3_ht) &&
                  (APSR_ac_DW.UnitDelay_DSTATE_by));

    /* Update for UnitDelay: '<S324>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_by = rtb_RelationalOperator3_ht;

    /* End of Outputs for SubSystem: '<S271>/EdgeFalling1' */

    /* Outputs for Enabled SubSystem: '<S251>/IP_PV1_MinMax_Chk' incorporates:
     *  EnablePort: '<S261>/Enable'
     */
    if (rtb_andd)
    {
        /* Outputs for Atomic SubSystem: '<S284>/EdgeRising1' */
        /* Logic: '<S300>/OR1' incorporates:
         *  UnitDelay: '<S300>/Unit Delay'
         */
        rtb_RelationalOperator3_ht = !APSR_ac_DW.UnitDelay_DSTATE_dh;

        /* Update for UnitDelay: '<S300>/Unit Delay' incorporates:
         *  Constant: '<S284>/TRUE Constant'
         */
        APSR_ac_DW.UnitDelay_DSTATE_dh = true;

        /* Switch: '<S284>/Switch' incorporates:
         *  Constant: '<S284>/ONE1'
         *  Logic: '<S300>/AND'
         *  UnitDelay: '<S284>/delay'
         */
        if (rtb_RelationalOperator3_ht)
        {
            rtb_RelationalOperator3_h = 2.5F;
        }
        else
        {
            rtb_RelationalOperator3_h = APSR_ac_DW.delay_DSTATE_k;
        }

        /* End of Switch: '<S284>/Switch' */
        /* End of Outputs for SubSystem: '<S284>/EdgeRising1' */

        /* Sum: '<S284>/sum' incorporates:
         *  Constant: '<S283>/Calib'
         *  Constant: '<S284>/One'
         *  Product: '<S284>/Current Value Product'
         *  Product: '<S284>/Previous Value Product'
         *  Sum: '<S284>/1-Filt Coef'
         */
        VeAPSR_U_Lv1IPPvs1Filt = ((1.0F - KeAPSR_k_Lv1Pv1IpMinFilter) *
            rtb_RelationalOperator3_h) + (TmpSignalConversionAtTmpVM_Fc_h *
            KeAPSR_k_Lv1Pv1IpMinFilter);

        /* If: '<S261>/If' incorporates:
         *  DataStoreRead: '<S36>/Pv1MaxTestFailed_Read'
         *  DataStoreRead: '<S36>/Pv1MaxTestNotCmplt_Read'
         *  Logic: '<S261>/EE_LV1_PV1_MIN_IP_TEST_CMPLT1'
         *  Logic: '<S261>/EE_LV1_PV1_MIN_IP_TEST_CMPLT2'
         *  UnitDelay: '<S363>/Unit Delay3'
         */
        if ((APSR_ac_DW.UnitDelay3_DSTATE) || ((AeAPSR_b_Pv1MaxTestNotCmplt) &&
                (AeAPSR_b_Pv1MaxTestFailed)))
        {
            APSR_ac_DW.If_ActiveSubsystem_l = 0;

            /* Outputs for IfAction SubSystem: '<S261>/Else_PV1_Max_Test' incorporates:
             *  ActionPort: '<S276>/Action Port'
             */
            /* Merge: '<S251>/Merge1' incorporates:
             *  MinMax: '<S276>/IP_EE_ETC_PVS1_MAX_VALUE'
             *  UnitDelay: '<S276>/delay'
             */
            VeAPSR_U_IpEEETCPvs1MaxValue = fmaxf(VeAPSR_U_Lv1IPPvs1Filt,
                APSR_ac_DW.delay_DSTATE_j);

            /* RelationalOperator: '<S276>/LV1_PV1_IP_MAX_FAILING' incorporates:
             *  Constant: '<S281>/Calib'
             */
            VeAPSR_b_Lv1Pv1IPMaxFailing = (VeAPSR_U_Lv1IPPvs1Filt <=
                KeAPSR_U_Lv1Pv1IpMaxLim);

            /* Switch: '<S289>/Switch' incorporates:
             *  Switch: '<S287>/dec if Failed  inc if passed'
             */
            if (rtb_AND_oe)
            {
                /* Switch: '<S289>/Switch' incorporates:
                 *  Constant: '<S287>/Constant'
                 */
                VeAPSR_Cnt_IpEELv1Pv1Maxcntr = 0;
            }
            else
            {
                if (VeAPSR_b_Lv1Pv1IPMaxFailing)
                {
                    /* Switch: '<S287>/dec if Failed  inc if passed' incorporates:
                     *  Constant: '<S287>/CNTR_DEC'
                     */
                    rtb_Sum1_d = -1;
                }
                else
                {
                    /* Switch: '<S287>/dec if Failed  inc if passed' incorporates:
                     *  Constant: '<S285>/Calib'
                     */
                    rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv1IpMaxCntrInc;
                }

                /* Sum: '<S287>/Sum1' incorporates:
                 *  UnitDelay: '<S287>/Prev Counter'
                 */
                rtb_Sum1_d += APSR_ac_DW.PrevCounter_DSTATE_n;

                /* Outputs for Atomic SubSystem: '<S287>/Limiter' */
                /* Switch: '<S288>/Switch1' incorporates:
                 *  Constant: '<S287>/max limit'
                 *  RelationalOperator: '<S288>/Relational Operator'
                 */
                if (127 < rtb_Sum1_d)
                {
                    /* Switch: '<S288>/Switch1' */
                    rtb_Sum1_d = 127;
                }

                /* End of Switch: '<S288>/Switch1' */

                /* Switch: '<S288>/Switch' incorporates:
                 *  Constant: '<S287>/min limit'
                 *  RelationalOperator: '<S288>/Relational Operator1'
                 */
                if (rtb_Sum1_d > 0)
                {
                    /* Switch: '<S289>/Switch' */
                    VeAPSR_Cnt_IpEELv1Pv1Maxcntr = rtb_Sum1_d;
                }
                else
                {
                    /* Switch: '<S289>/Switch' */
                    VeAPSR_Cnt_IpEELv1Pv1Maxcntr = 0;
                }

                /* End of Switch: '<S288>/Switch' */
                /* End of Outputs for SubSystem: '<S287>/Limiter' */
            }

            /* End of Switch: '<S289>/Switch' */

            /* Logic: '<S287>/Latch a Pass' incorporates:
             *  Constant: '<S286>/Calib'
             *  RelationalOperator: '<S287>/Enough counts to Pass?'
             *  UnitDelay: '<S287>/ '
             */
            rtb_LatchaPass_p0 = ((VeAPSR_Cnt_IpEELv1Pv1Maxcntr >=
                                  KeAPSR_Cnt_Lv1Pv1IpMaxCntrLim) ||
                                 (APSR_ac_DW._DSTATE));

            /* Merge: '<S251>/Merge6' incorporates:
             *  Logic: '<S287>/EE_LV1_PV1_MAX_IP_FAILED'
             */
            VeAPSR_b_IpEELv1Pv1MaxTestFailed = !rtb_LatchaPass_p0;

            /* End of Outputs for SubSystem: '<S261>/Else_PV1_Max_Test' */
        }
        else
        {
            APSR_ac_DW.If_ActiveSubsystem_l = 1;

            /* Outputs for IfAction SubSystem: '<S261>/If_PV1_Max_Test' incorporates:
             *  ActionPort: '<S279>/Action Port'
             */
            /* Merge: '<S251>/Merge6' incorporates:
             *  Logic: '<S296>/AND'
             */
            VeAPSR_b_IpEELv1Pv1MaxTestFailed = AeAPSR_b_Pv1MaxTestFailed;

            /* Merge: '<S251>/Merge1' incorporates:
             *  DataStoreRead: '<S36>/Pvs1MaxValue_Read'
             *  Gain: '<S297>/Gain'
             */
            VeAPSR_U_IpEEETCPvs1MaxValue = AeAPSR_U_Pvs1MaxValue;

            /* End of Outputs for SubSystem: '<S261>/If_PV1_Max_Test' */
        }

        /* End of If: '<S261>/If' */

        /* If: '<S261>/If1' incorporates:
         *  DataStoreRead: '<S36>/Pv1MaxTestFailed_Read'
         *  DataStoreRead: '<S36>/Pv1MinTestFailed_Read'
         *  DataStoreRead: '<S36>/Pv1MinTestNotCmplt_Read'
         *  Logic: '<S278>/EE_LV1_PV1_MIN_IP_TEST_CMPLT'
         *  Logic: '<S278>/EE_LV1_PV1_MIN_IP_TEST_CMPLT3'
         *  Logic: '<S278>/EE_LV1_PV1_MIN_IP_TEST_CMPLT5'
         *  Logic: '<S278>/Max Not Failed'
         *  Logic: '<S278>/Max Not Failed1'
         *  UnitDelay: '<S251>/FixPt Unit Delay1'
         *  UnitDelay: '<S363>/Unit Delay3'
         */
        if (((APSR_ac_DW.UnitDelay3_DSTATE) &&
                (!APSR_ac_DW.FixPtUnitDelay1_DSTATE_i)) ||
                (((!AeAPSR_b_Pv1MaxTestFailed) && (AeAPSR_b_Pv1MinTestNotCmplt))
                 && (AeAPSR_b_Pv1MinTestFailed)))
        {
            APSR_ac_DW.If1_ActiveSubsystem_a = 0;

            /* Outputs for IfAction SubSystem: '<S261>/Else_PV1_Min_Test' incorporates:
             *  ActionPort: '<S277>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S277>/EdgeRising1' */
            /* Logic: '<S290>/AND' incorporates:
             *  Logic: '<S290>/OR1'
             *  UnitDelay: '<S290>/Unit Delay'
             */
            rtb_AND_nc = !APSR_ac_DW.UnitDelay_DSTATE_ak;

            /* Update for UnitDelay: '<S290>/Unit Delay' incorporates:
             *  Constant: '<S277>/TRUE Constant'
             */
            APSR_ac_DW.UnitDelay_DSTATE_ak = true;

            /* End of Outputs for SubSystem: '<S277>/EdgeRising1' */

            /* Switch: '<S277>/Switch' incorporates:
             *  Constant: '<S277>/ONE1'
             *  UnitDelay: '<S277>/delay'
             */
            if (rtb_AND_nc)
            {
                rtb_RelationalOperator3_h = 5.0F;
            }
            else
            {
                rtb_RelationalOperator3_h = APSR_ac_DW.delay_DSTATE_k3;
            }

            /* End of Switch: '<S277>/Switch' */

            /* Merge: '<S251>/Merge3' incorporates:
             *  MinMax: '<S277>/IP_EE_ETC_PVS1_MIN_VALUE'
             */
            VeAPSR_U_IpEEETCPvs1MinValue = fminf(VeAPSR_U_Lv1IPPvs1Filt,
                rtb_RelationalOperator3_h);

            /* RelationalOperator: '<S277>/LV1_PV1_IP_MIN_FAILING' incorporates:
             *  Constant: '<S282>/Calib'
             */
            VeAPSR_b_Lv1Pv1IPMinFailing = (VeAPSR_U_Lv1IPPvs1Filt >=
                KeAPSR_U_Lv1Pv1IpMinLim);

            /* Switch: '<S295>/Switch' incorporates:
             *  Switch: '<S293>/dec if Failed  inc if passed'
             */
            if (rtb_OR1_ld)
            {
                /* Switch: '<S295>/Switch' incorporates:
                 *  Constant: '<S293>/Constant'
                 */
                VeAPSR_Cnt_IpEELv1Pv1Mincntr = 0;
            }
            else
            {
                if (VeAPSR_b_Lv1Pv1IPMinFailing)
                {
                    /* Switch: '<S293>/dec if Failed  inc if passed' incorporates:
                     *  Constant: '<S293>/CNTR_DEC'
                     */
                    rtb_Sum1_d = -1;
                }
                else
                {
                    /* Switch: '<S293>/dec if Failed  inc if passed' incorporates:
                     *  Constant: '<S291>/Calib'
                     */
                    rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv1IpMinCntrInc;
                }

                /* Sum: '<S293>/Old+chng' incorporates:
                 *  UnitDelay: '<S293>/Prev Counter'
                 */
                rtb_Sum1_d += APSR_ac_DW.PrevCounter_DSTATE_b;

                /* Outputs for Atomic SubSystem: '<S293>/Limiter' */
                /* Switch: '<S294>/Switch1' incorporates:
                 *  Constant: '<S293>/max limit'
                 *  RelationalOperator: '<S294>/Relational Operator'
                 */
                if (127 < rtb_Sum1_d)
                {
                    /* Switch: '<S294>/Switch1' */
                    rtb_Sum1_d = 127;
                }

                /* End of Switch: '<S294>/Switch1' */

                /* Switch: '<S294>/Switch' incorporates:
                 *  Constant: '<S293>/min limit'
                 *  RelationalOperator: '<S294>/Relational Operator1'
                 */
                if (rtb_Sum1_d > 0)
                {
                    /* Switch: '<S295>/Switch' */
                    VeAPSR_Cnt_IpEELv1Pv1Mincntr = rtb_Sum1_d;
                }
                else
                {
                    /* Switch: '<S295>/Switch' */
                    VeAPSR_Cnt_IpEELv1Pv1Mincntr = 0;
                }

                /* End of Switch: '<S294>/Switch' */
                /* End of Outputs for SubSystem: '<S293>/Limiter' */
            }

            /* End of Switch: '<S295>/Switch' */

            /* Logic: '<S293>/Latch a Pass' incorporates:
             *  Constant: '<S292>/Calib'
             *  RelationalOperator: '<S293>/Enough counts to Pass?'
             *  UnitDelay: '<S293>/Pre Pass Condition'
             */
            rtb_AND_nc = ((VeAPSR_Cnt_IpEELv1Pv1Mincntr >=
                           KeAPSR_Cnt_Lv1Pv1IpMinCntrLim) ||
                          (APSR_ac_DW.PrePassCondition_DSTATE));

            /* Merge: '<S251>/Merge5' incorporates:
             *  Logic: '<S293>/EE_LV1_PV1_MIN_IP_FAILED'
             */
            VeAPSR_b_IpEELv1Pv1MinTestFailed = !rtb_AND_nc;

            /* End of Outputs for SubSystem: '<S261>/Else_PV1_Min_Test' */
        }
        else
        {
            APSR_ac_DW.If1_ActiveSubsystem_a = 1;

            /* Outputs for IfAction SubSystem: '<S261>/If_PV1_Min_Test' incorporates:
             *  ActionPort: '<S280>/Action Port'
             */
            /* Merge: '<S251>/Merge5' incorporates:
             *  Logic: '<S298>/AND'
             */
            VeAPSR_b_IpEELv1Pv1MinTestFailed = AeAPSR_b_Pv1MinTestFailed;

            /* Merge: '<S251>/Merge3' incorporates:
             *  DataStoreRead: '<S36>/Pvs1MinValue_Read'
             *  Gain: '<S299>/Gain'
             */
            VeAPSR_U_IpEEETCPvs1MinValue = AeAPSR_U_Pvs1MinValue;

            /* End of Outputs for SubSystem: '<S261>/If_PV1_Min_Test' */
        }

        /* End of If: '<S261>/If1' */
    }

    /* End of Outputs for SubSystem: '<S251>/IP_PV1_MinMax_Chk' */

    /* Outputs for Enabled SubSystem: '<S251>/Init_EEPROM_Srv' incorporates:
     *  EnablePort: '<S262>/Enable'
     */
    if (rtb_VariantMerge_For_Variant__f)
    {
        /* Merge: '<S251>/Merge3' incorporates:
         *  Constant: '<S262>/ONE1'
         *  SignalConversion generated from: '<S262>/IpEEPvs1MinValue_Init'
         */
        VeAPSR_U_IpEEETCPvs1MinValue = 2.5024F;

        /* Merge: '<S251>/Merge1' incorporates:
         *  Constant: '<S262>/ONE2'
         *  SignalConversion generated from: '<S262>/IpEEPvs1MaxValue_Init'
         */
        VeAPSR_U_IpEEETCPvs1MaxValue = 2.5024F;
    }

    /* End of Outputs for SubSystem: '<S251>/Init_EEPROM_Srv' */

    /* Outputs for Enabled SubSystem: '<S251>/Init_RAM' incorporates:
     *  EnablePort: '<S263>/Enable'
     */
    /* Logic: '<S258>/Logical2' incorporates:
     *  Logic: '<S258>/Logical1'
     */
    if (((!rtb_andd) && rtb_Logical2_j) && rtb_nott2)
    {
        /* Merge: '<S251>/Merge3' incorporates:
         *  DataStoreRead: '<S36>/Pvs1MinValue_Read'
         *  Gain: '<S305>/Gain'
         */
        VeAPSR_U_IpEEETCPvs1MinValue = AeAPSR_U_Pvs1MinValue;

        /* Merge: '<S251>/Merge1' incorporates:
         *  DataStoreRead: '<S36>/Pvs1MaxValue_Read'
         *  Gain: '<S306>/Gain'
         */
        VeAPSR_U_IpEEETCPvs1MaxValue = AeAPSR_U_Pvs1MaxValue;

        /* Merge: '<S251>/Merge2' incorporates:
         *  DataStoreRead: '<S36>/Pv1MinTestNotCmplt_Read'
         *  Logic: '<S303>/AND'
         */
        VeAPSR_b_IpEELv1Pv1MinTestNotCmplt = AeAPSR_b_Pv1MinTestNotCmplt;

        /* Merge: '<S251>/Merge4' incorporates:
         *  DataStoreRead: '<S36>/Pv1MaxTestNotCmplt_Read'
         *  Logic: '<S304>/AND'
         */
        VeAPSR_b_IpEELv1Pv1MaxTestNotCmplt = AeAPSR_b_Pv1MaxTestNotCmplt;

        /* Merge: '<S251>/Merge5' incorporates:
         *  DataStoreRead: '<S36>/Pv1MinTestFailed_Read'
         *  Logic: '<S301>/AND'
         */
        VeAPSR_b_IpEELv1Pv1MinTestFailed = AeAPSR_b_Pv1MinTestFailed;

        /* Merge: '<S251>/Merge6' incorporates:
         *  DataStoreRead: '<S36>/Pv1MaxTestFailed_Read'
         *  Logic: '<S302>/AND'
         */
        VeAPSR_b_IpEELv1Pv1MaxTestFailed = AeAPSR_b_Pv1MaxTestFailed;
    }

    /* End of Logic: '<S258>/Logical2' */
    /* End of Outputs for SubSystem: '<S251>/Init_RAM' */

    /* Switch: '<S266>/switch' */
    if (VeAPSI_b_IpEEIsInPlantMode)
    {
        /* Gain: '<S307>/Gain' */
        rtb_VariantMerge_For_Variant__f = VeAPSR_b_IpEELv1Pv1MinTestFailed;
    }
    else
    {
        /* Gain: '<S307>/Gain' incorporates:
         *  Constant: '<S265>/Calib'
         *  DataStoreRead: '<S36>/Pvs1MinValue_Read'
         *  RelationalOperator: '<S266>/relOp2'
         */
        rtb_VariantMerge_For_Variant__f = (KeAPSR_U_Lv1Pv1IpMinLim <=
            AeAPSR_U_Pvs1MinValue);
    }

    /* End of Switch: '<S266>/switch' */

    /* Outputs for Enabled SubSystem: '<S40>/PVS1_Limit_Check' incorporates:
     *  EnablePort: '<S252>/Enable'
     */
    /* S-Function (sfix_bitop): '<S255>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S255>/StatusByte_APP_Snsr1CktLo'
     *  S-Function (sfix_bitop): '<S332>/Bitwise Operator2'
     */
    tmp = ((uint32)APSR_ac_DW.StatusByte_APP_Snsr1CktLo) & 64U;

    /* S-Function (sfix_bitop): '<S254>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S254>/StatusByte_APP_Snsr1CktHi'
     *  S-Function (sfix_bitop): '<S333>/Bitwise Operator2'
     */
    tmp_0 = ((uint32)APSR_ac_DW.StatusByte_APP_Snsr1CktHi) & 64U;

    /* End of Outputs for SubSystem: '<S40>/PVS1_Limit_Check' */

    /* Logic: '<S249>/Logical' incorporates:
     *  Constant: '<S250>/Calib'
     *  Constant: '<S357>/Constant1'
     *  Constant: '<S357>/Constant2'
     *  Constant: '<S358>/Constant1'
     *  Constant: '<S358>/Constant2'
     *  Constant: '<S359>/Constant1'
     *  Constant: '<S359>/Constant2'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S253>/Logical1'
     *  Logic: '<S357>/Logical Operator'
     *  Logic: '<S358>/Logical Operator'
     *  Logic: '<S359>/Logical Operator'
     *  Logic: '<S40>/Logical2'
     *  RelationalOperator: '<S357>/Relational Operator1'
     *  RelationalOperator: '<S357>/Relational Operator2'
     *  RelationalOperator: '<S358>/Relational Operator1'
     *  RelationalOperator: '<S358>/Relational Operator2'
     *  RelationalOperator: '<S359>/Relational Operator1'
     *  RelationalOperator: '<S359>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S357>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S357>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S358>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S358>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S359>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S359>/Bitwise Operator2'
     */
    rtb_Logical2_j = (((((i <= 0) || (rtb_Logical2_o_tmp != 0U)) &&
                        ((rtb_Logical2_o_tmp_0 <= 0) || (rtb_Logical2_o_tmp_1 !=
                          0U))) && ((rtb_Logical2_o_tmp_2 <= 0) ||
                        (rtb_Logical2_o_tmp_3 != 0U))) ||
                      (!KeAPSR_b_OvrdPwrSupFlt));

    /* Outputs for Enabled SubSystem: '<S40>/PVS1_Limit_Check' incorporates:
     *  EnablePort: '<S252>/Enable'
     */
    /* Logic: '<S249>/Logical Operator1' incorporates:
     *  Constant: '<S254>/Constant1'
     *  Constant: '<S254>/Constant2'
     *  Constant: '<S255>/Constant1'
     *  Constant: '<S255>/Constant2'
     *  DataStoreRead: '<S254>/StatusByte_APP_Snsr1CktHi'
     *  DataStoreRead: '<S255>/StatusByte_APP_Snsr1CktLo'
     *  Logic: '<S249>/Logical'
     *  Logic: '<S249>/Logical Operator'
     *  Logic: '<S249>/Logical1'
     *  Logic: '<S249>/Logical2'
     *  Logic: '<S254>/Logical Operator'
     *  Logic: '<S255>/Logical Operator'
     *  Logic: '<S329>/NOT'
     *  RelationalOperator: '<S254>/Relational Operator1'
     *  RelationalOperator: '<S254>/Relational Operator2'
     *  RelationalOperator: '<S255>/Relational Operator1'
     *  RelationalOperator: '<S255>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S254>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S255>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S255>/Bitwise Operator2'
     */
    if ((((((((((sint32)APSR_ac_DW.StatusByte_APP_Snsr1CktLo) & 1) <= 0) || (tmp
              != 0U)) && (((((sint32)APSR_ac_DW.StatusByte_APP_Snsr1CktHi) & 1) <=
                           0) || (tmp_0 != 0U))) && rtb_Logical2_j) &&
            rtb_Logical1) || (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew))
    {
        /* Logic: '<S333>/Logical5' incorporates:
         *  Logic: '<S252>/OR1'
         */
        rtb_RelationalOperator3_ht = ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew)
            || (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz));

        /* RelationalOperator: '<S332>/Relational Operator3' incorporates:
         *  Constant: '<S332>/Constant3'
         */
        rtb_RelationalOperator3_f = (tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S332>/EdgeFalling1' */
        /* Logic: '<S355>/AND' incorporates:
         *  Logic: '<S355>/OR1'
         *  UnitDelay: '<S355>/Unit Delay'
         */
        rtb_AND_af = ((!rtb_RelationalOperator3_f) &&
                      (APSR_ac_DW.UnitDelay_DSTATE_fk));

        /* Update for UnitDelay: '<S355>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_fk = rtb_RelationalOperator3_f;

        /* End of Outputs for SubSystem: '<S332>/EdgeFalling1' */

        /* Logic: '<S332>/Logical5' */
        rtb_RelationalOperator3_f = (rtb_RelationalOperator3_ht || rtb_AND_af);

        /* RelationalOperator: '<S333>/Relational Operator3' incorporates:
         *  Constant: '<S333>/Constant3'
         */
        rtb_AND_af = (tmp_0 == 0U);

        /* Outputs for Atomic SubSystem: '<S333>/EdgeFalling1' */
        /* Logic: '<S356>/AND' incorporates:
         *  Logic: '<S356>/OR1'
         *  UnitDelay: '<S356>/Unit Delay'
         */
        rtb_relOp2_i = ((!rtb_AND_af) && (APSR_ac_DW.UnitDelay_DSTATE_or));

        /* Update for UnitDelay: '<S356>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_or = rtb_AND_af;

        /* End of Outputs for SubSystem: '<S333>/EdgeFalling1' */

        /* Logic: '<S333>/Logical5' */
        rtb_RelationalOperator3_ht = (rtb_RelationalOperator3_ht || rtb_relOp2_i);

        /* Logic: '<S252>/Logical Operator' */
        rtb_AND_af = (rtb_RelationalOperator3_f || rtb_RelationalOperator3_ht);

        /* RelationalOperator: '<S340>/PV1_FAIL_LO' incorporates:
         *  Constant: '<S327>/Calib'
         */
        VeAPSR_b_Pv1FailLo = (TmpSignalConversionAtTmpVM_Fc_h <
                              KeAPSR_U_Lv1Pv1Min);

        /* Outputs for Enabled SubSystem: '<S329>/Max_Fail' incorporates:
         *  EnablePort: '<S339>/Enable'
         */
        if (!VeAPSR_b_Pv1FailLo)
        {
            /* RelationalOperator: '<S339>/PV1_FAIL_HI' incorporates:
             *  Constant: '<S326>/Calib'
             */
            VeAPSR_b_Pv1FailHi = (TmpSignalConversionAtTmpVM_Fc_h >
                                  KeAPSR_U_Lv1Pv1Max);
        }

        /* End of Outputs for SubSystem: '<S329>/Max_Fail' */

        /* Logic: '<S329>/FAILING_PV1' incorporates:
         *  Logic: '<S329>/NOT'
         */
        VeAPSR_b_FailingPv1 = ((VeAPSR_b_Pv1FailLo) || (VeAPSR_b_Pv1FailHi));

        /* Switch: '<S328>/switch' incorporates:
         *  Switch: '<S328>/dec if Ok else inc'
         */
        if (rtb_AND_af)
        {
            /* Switch: '<S328>/switch' incorporates:
             *  Constant: '<S328>/constant'
             */
            VeAPSR_Cnt_Lv1Pv1Cntr = 0;
        }
        else
        {
            if (VeAPSR_b_FailingPv1)
            {
                /* Switch: '<S328>/dec if Ok else inc' incorporates:
                 *  Constant: '<S325>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv1CntrInc;
            }
            else
            {
                /* Switch: '<S328>/dec if Ok else inc' incorporates:
                 *  Constant: '<S336>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv1CntrDec;
            }

            /* Sum: '<S328>/LV1_PV1_CNTR' incorporates:
             *  UnitDelay: '<S328>/Prev Counter value initial value zero'
             */
            rtb_Sum1_d += APSR_ac_DW.PrevCountervalueinitialvaluezer;

            /* Outputs for Atomic SubSystem: '<S328>/Limiter' */
            /* Switch: '<S337>/Switch1' incorporates:
             *  Constant: '<S328>/Max_Limit'
             *  RelationalOperator: '<S337>/Relational Operator'
             */
            if (255 < rtb_Sum1_d)
            {
                /* Switch: '<S337>/Switch1' */
                rtb_Sum1_d = 255;
            }

            /* End of Switch: '<S337>/Switch1' */

            /* Switch: '<S337>/Switch' incorporates:
             *  Constant: '<S328>/Min_Limit'
             *  RelationalOperator: '<S337>/Relational Operator1'
             */
            if (rtb_Sum1_d > 0)
            {
                /* Switch: '<S328>/switch' */
                VeAPSR_Cnt_Lv1Pv1Cntr = rtb_Sum1_d;
            }
            else
            {
                /* Switch: '<S328>/switch' */
                VeAPSR_Cnt_Lv1Pv1Cntr = 0;
            }

            /* End of Switch: '<S337>/Switch' */
            /* End of Outputs for SubSystem: '<S328>/Limiter' */
        }

        /* End of Switch: '<S328>/switch' */

        /* Outputs for Atomic SubSystem: '<S328>/Signal Latch On With Reset' */
        /* Logic: '<S338>/OR1' incorporates:
         *  Constant: '<S27>/Calib'
         *  Logic: '<S338>/NOT'
         *  Logic: '<S338>/OR'
         *  RelationalOperator: '<S328>/relOp'
         *  UnitDelay: '<S338>/Unit Delay'
         */
        APSR_ac_B.OR1_p = ((VeAPSR_Cnt_Lv1Pv1Cntr >= KeAPSR_Cnt_Lv1Pv1CntrLim) ||
                           ((!rtb_AND_af) && (APSR_ac_DW.UnitDelay_DSTATE_oh)));

        /* Update for UnitDelay: '<S338>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_oh = APSR_ac_B.OR1_p;

        /* End of Outputs for SubSystem: '<S328>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S330>/EdgeFalling1' */
        /* Update for UnitDelay: '<S341>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_j2 = true;

        /* End of Outputs for SubSystem: '<S330>/EdgeFalling1' */

        /* If: '<S330>/If' incorporates:
         *  Logic: '<S252>/Logical2'
         *  Logic: '<S252>/Logical3'
         *  Logic: '<S330>/Logical5'
         */
        if (rtb_RelationalOperator3_f)
        {
            /* Outputs for IfAction SubSystem: '<S330>/Init' incorporates:
             *  ActionPort: '<S343>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_eo);

            /* End of Outputs for SubSystem: '<S330>/Init' */
        }
        else if (!VeAPSR_b_Pv1FailLo)
        {
            /* Outputs for IfAction SubSystem: '<S330>/Pass' incorporates:
             *  ActionPort: '<S344>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_eo);

            /* End of Outputs for SubSystem: '<S330>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_p) && (VeAPSR_b_Pv1FailLo))
            {
                /* Outputs for IfAction SubSystem: '<S330>/Fail' incorporates:
                 *  ActionPort: '<S342>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_eo);

                /* End of Outputs for SubSystem: '<S330>/Fail' */
            }
        }

        /* End of If: '<S330>/If' */

        /* Outputs for Atomic SubSystem: '<S331>/EdgeFalling1' */
        /* Update for UnitDelay: '<S348>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_ip = true;

        /* End of Outputs for SubSystem: '<S331>/EdgeFalling1' */

        /* If: '<S331>/If' incorporates:
         *  Logic: '<S252>/Logical1'
         *  Logic: '<S252>/Logical4'
         *  Logic: '<S331>/Logical5'
         */
        if (rtb_RelationalOperator3_ht)
        {
            /* Outputs for IfAction SubSystem: '<S331>/Init' incorporates:
             *  ActionPort: '<S350>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_d);

            /* End of Outputs for SubSystem: '<S331>/Init' */
        }
        else if (!VeAPSR_b_Pv1FailHi)
        {
            /* Outputs for IfAction SubSystem: '<S331>/Pass' incorporates:
             *  ActionPort: '<S351>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_d);

            /* End of Outputs for SubSystem: '<S331>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_p) && (VeAPSR_b_Pv1FailHi))
            {
                /* Outputs for IfAction SubSystem: '<S331>/Fail' incorporates:
                 *  ActionPort: '<S349>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_d);

                /* End of Outputs for SubSystem: '<S331>/Fail' */
            }
        }

        /* End of If: '<S331>/If' */

        /* Update for UnitDelay: '<S328>/Prev Counter value initial value zero' */
        APSR_ac_DW.PrevCountervalueinitialvaluezer = VeAPSR_Cnt_Lv1Pv1Cntr;
    }

    /* End of Logic: '<S249>/Logical Operator1' */
    /* End of Outputs for SubSystem: '<S40>/PVS1_Limit_Check' */

    /* Switch: '<S266>/switch1' */
    if (VeAPSI_b_IpEEIsInPlantMode)
    {
        /* RelationalOperator: '<S86>/relOp2' */
        rtb_relOp2_i = VeAPSR_b_IpEELv1Pv1MaxTestFailed;
    }
    else
    {
        /* RelationalOperator: '<S86>/relOp2' incorporates:
         *  Constant: '<S264>/Calib'
         *  DataStoreRead: '<S36>/Pvs1MaxValue_Read'
         *  RelationalOperator: '<S266>/relOp'
         */
        rtb_relOp2_i = (KeAPSR_U_Lv1Pv1IpMaxLim >= AeAPSR_U_Pvs1MaxValue);
    }

    /* End of Switch: '<S266>/switch1' */

    /* Outputs for Enabled SubSystem: '<S251>/PVS1_Test_Not_Cmt' incorporates:
     *  EnablePort: '<S267>/Enable'
     */
    if (rtb_andd)
    {
        /* Logic: '<S267>/EE_LV1_PV1_MIN_IP_TEST_CMPLT' incorporates:
         *  Logic: '<S267>/EE_LV1_PV1_MAX_IP_TEST_CMPLT'
         *  Logic: '<S267>/FixPt Logical Operator1'
         */
        rtb_RelationalOperator3_ht = ((!APSR_ac_B.OR1_p) &&
            (!rtb_FixPtUnitDelay2));

        /* Merge: '<S251>/Merge2' incorporates:
         *  Logic: '<S267>/EE_LV1_PV1_MIN_IP_TEST_CMPLT'
         *  Logic: '<S267>/Service zero Pedal1'
         *  Logic: '<S267>/Service zero Pedal2'
         */
        VeAPSR_b_IpEELv1Pv1MinTestNotCmplt = (rtb_VariantMerge_For_Variant__f &&
            rtb_RelationalOperator3_ht);

        /* Merge: '<S251>/Merge4' incorporates:
         *  Gain: '<S308>/Gain'
         *  Logic: '<S267>/EE_LV1_PV1_MAX_IP_TEST_CMPLT'
         *  Logic: '<S267>/Service zero Pedal4'
         */
        VeAPSR_b_IpEELv1Pv1MaxTestNotCmplt = (rtb_RelationalOperator3_ht &&
            rtb_relOp2_i);
    }

    /* End of Outputs for SubSystem: '<S251>/PVS1_Test_Not_Cmt' */

    /* Outputs for Atomic SubSystem: '<S268>/EdgeFalling1' */
    /* Update for UnitDelay: '<S309>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_pn = true;

    /* End of Outputs for SubSystem: '<S268>/EdgeFalling1' */

    /* If: '<S268>/If' incorporates:
     *  Logic: '<S251>/NOT1'
     *  Logic: '<S268>/Logical5'
     */
    if (rtb_OR1_ld)
    {
        /* Outputs for IfAction SubSystem: '<S268>/Init' incorporates:
         *  ActionPort: '<S311>/Action Port'
         */
        APSR_ac_Init_j(&APSR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S268>/Init' */
    }
    else if (!rtb_VariantMerge_For_Variant__f)
    {
        /* Outputs for IfAction SubSystem: '<S268>/Pass' incorporates:
         *  ActionPort: '<S312>/Action Port'
         */
        APSR_ac_Pass(&APSR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S268>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S268>/Fail' incorporates:
         *  ActionPort: '<S310>/Action Port'
         */
        APSR_ac_Fail(&APSR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S268>/Fail' */
    }

    /* End of If: '<S268>/If' */

    /* RelationalOperator: '<S251>/Relational Operator' incorporates:
     *  Constant: '<S260>/Constant'
     *  Merge: '<S268>/Merge'
     */
    rtb_OR1_ld = (((uint32)APSR_ac_B.Merge_f) == CeDFIB_e_Fail);

    /* Outputs for Atomic SubSystem: '<S269>/EdgeFalling1' */
    /* Update for UnitDelay: '<S316>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_er = true;

    /* End of Outputs for SubSystem: '<S269>/EdgeFalling1' */

    /* If: '<S269>/If' incorporates:
     *  Gain: '<S308>/Gain'
     *  Logic: '<S251>/NOT3'
     *  Logic: '<S269>/Logical5'
     */
    if (rtb_AND_oe)
    {
        /* Outputs for IfAction SubSystem: '<S269>/Init' incorporates:
         *  ActionPort: '<S318>/Action Port'
         */
        APSR_ac_Init_j(&APSR_ac_B.Merge_j);

        /* End of Outputs for SubSystem: '<S269>/Init' */
    }
    else if (!rtb_relOp2_i)
    {
        /* Outputs for IfAction SubSystem: '<S269>/Pass' incorporates:
         *  ActionPort: '<S319>/Action Port'
         */
        APSR_ac_Pass(&APSR_ac_B.Merge_j);

        /* End of Outputs for SubSystem: '<S269>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S269>/Fail' incorporates:
         *  ActionPort: '<S317>/Action Port'
         */
        APSR_ac_Fail(&APSR_ac_B.Merge_j);

        /* End of Outputs for SubSystem: '<S269>/Fail' */
    }

    /* End of If: '<S269>/If' */

    /* RelationalOperator: '<S251>/Relational Operator1' incorporates:
     *  Constant: '<S259>/Constant'
     *  Merge: '<S269>/Merge'
     */
    rtb_AND_oe = (((uint32)APSR_ac_B.Merge_j) == CeDFIB_e_Fail);

    /* Update for UnitDelay: '<S257>/Unit Delay' */
#if Rte_SysCon_Variant_APSR_3

    APSR_ac_DW.UnitDelay_DSTATE_p0 = rtb_VariantMerge_For_Variant_So;

#endif

    /* End of Update for UnitDelay: '<S257>/Unit Delay' */

    /* Update for UnitDelay: '<S251>/FixPt Unit Delay1' incorporates:
     *  Gain: '<S308>/Gain'
     */
    APSR_ac_DW.FixPtUnitDelay1_DSTATE_i = rtb_relOp2_i;

    /* Update for Enabled SubSystem: '<S251>/IP_PV1_MinMax_Chk' incorporates:
     *  EnablePort: '<S261>/Enable'
     */
    if (rtb_andd)
    {
        /* Update for UnitDelay: '<S284>/delay' */
        APSR_ac_DW.delay_DSTATE_k = VeAPSR_U_Lv1IPPvs1Filt;

        /* Update for If: '<S261>/If' */
        if (APSR_ac_DW.If_ActiveSubsystem_l == 0)
        {
            /* Update for IfAction SubSystem: '<S261>/Else_PV1_Max_Test' incorporates:
             *  ActionPort: '<S276>/Action Port'
             */
            /* Update for UnitDelay: '<S276>/delay' */
            APSR_ac_DW.delay_DSTATE_j = VeAPSR_U_IpEEETCPvs1MaxValue;

            /* Update for UnitDelay: '<S287>/ ' */
            APSR_ac_DW._DSTATE = rtb_LatchaPass_p0;

            /* Update for UnitDelay: '<S287>/Prev Counter' */
            APSR_ac_DW.PrevCounter_DSTATE_n = VeAPSR_Cnt_IpEELv1Pv1Maxcntr;

            /* End of Update for SubSystem: '<S261>/Else_PV1_Max_Test' */
        }

        /* End of Update for If: '<S261>/If' */

        /* Update for If: '<S261>/If1' */
        if (APSR_ac_DW.If1_ActiveSubsystem_a == 0)
        {
            /* Update for IfAction SubSystem: '<S261>/Else_PV1_Min_Test' incorporates:
             *  ActionPort: '<S277>/Action Port'
             */
            /* Update for UnitDelay: '<S277>/delay' */
            APSR_ac_DW.delay_DSTATE_k3 = VeAPSR_U_IpEEETCPvs1MinValue;

            /* Update for UnitDelay: '<S293>/Prev Counter' */
            APSR_ac_DW.PrevCounter_DSTATE_b = VeAPSR_Cnt_IpEELv1Pv1Mincntr;

            /* Update for UnitDelay: '<S293>/Pre Pass Condition' */
            APSR_ac_DW.PrePassCondition_DSTATE = rtb_AND_nc;

            /* End of Update for SubSystem: '<S261>/Else_PV1_Min_Test' */
        }

        /* End of Update for If: '<S261>/If1' */
    }

    /* End of Update for SubSystem: '<S251>/IP_PV1_MinMax_Chk' */
    /* End of Outputs for SubSystem: '<S20>/PVS1_Limit_Check' */

    /* DataStoreWrite: '<S37>/Pv1MinTestFailed_Write' */
    AeAPSR_b_Pv1MinTestFailed = VeAPSR_b_IpEELv1Pv1MinTestFailed;

    /* DataStoreWrite: '<S37>/Pv1MaxTestFailed_Write' */
    AeAPSR_b_Pv1MaxTestFailed = VeAPSR_b_IpEELv1Pv1MaxTestFailed;

    /* DataStoreWrite: '<S37>/Pv1MinTestNotCmplt_Write' */
    AeAPSR_b_Pv1MinTestNotCmplt = VeAPSR_b_IpEELv1Pv1MinTestNotCmplt;

    /* DataStoreWrite: '<S37>/Pv1MaxTestNotCmplt_Write' */
    AeAPSR_b_Pv1MaxTestNotCmplt = VeAPSR_b_IpEELv1Pv1MaxTestNotCmplt;

    /* DataStoreWrite: '<S37>/Pvs1MinValue_Write' */
    AeAPSR_U_Pvs1MinValue = VeAPSR_U_IpEEETCPvs1MinValue;

    /* DataStoreWrite: '<S37>/Pvs1MaxValue_Write' */
    AeAPSR_U_Pvs1MaxValue = VeAPSR_U_IpEEETCPvs1MaxValue;

    /* Outputs for Atomic SubSystem: '<S383>/EdgeRising' */
    /* Logic: '<S430>/AND' incorporates:
     *  Logic: '<S430>/OR1'
     *  UnitDelay: '<S430>/Unit Delay'
     */
    rtb_LatchaPass_p0 = (TmpSignalConversionAtTmpVM_F_hr &&
                         (!APSR_ac_DW.UnitDelay_DSTATE_ch));

    /* Update for UnitDelay: '<S430>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_ch = TmpSignalConversionAtTmpVM_F_hr;

    /* End of Outputs for SubSystem: '<S383>/EdgeRising' */

    /* UnitDelay: '<S383>/Unit Delay' incorporates:
     *  Logic: '<S383>/Logical'
     *  Logic: '<S383>/Logical1'
     */
#if Rte_SysCon_Variant_APSR_3

    /* Outputs for Atomic SubSystem: '<S383>/Signal Latch On With Reset' */
    /* Logic: '<S431>/OR1' incorporates:
     *  Logic: '<S431>/NOT'
     *  Logic: '<S431>/OR'
     *  UnitDelay: '<S431>/Unit Delay'
     */
    rtb_OR1_n = (rtb_LatchaPass_p0 || ((!APSR_ac_DW.UnitDelay_DSTATE_hg) &&
                  (APSR_ac_DW.UnitDelay_DSTATE_av)));

    /* Update for UnitDelay: '<S431>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_av = rtb_OR1_n;

    /* VariantMerge generated from: '<S383>/Variant Source1' */
    rtb_VariantMerge_For_Variant__e = ((rtb_OR1_n &&
        rtb_VariantMerge_For_Variant_So) && rtb_nott2);

    /* End of Outputs for SubSystem: '<S383>/Signal Latch On With Reset' */
#else

    /* VariantMerge generated from: '<S383>/Variant Source1' incorporates:
     *  Logic: '<S383>/Logical1'
     */
    rtb_VariantMerge_For_Variant__e = (rtb_nott2 && rtb_LatchaPass_p0);

#endif

    /* End of UnitDelay: '<S383>/Unit Delay' */

    /* Outputs for Atomic SubSystem: '<S363>/Signal Latch On With Reset' */
    /* Logic: '<S382>/OR1' incorporates:
     *  Logic: '<S363>/Logical'
     *  Logic: '<S363>/Logical1'
     *  Logic: '<S382>/OR'
     *  UnitDelay: '<S363>/Unit Delay1'
     *  UnitDelay: '<S363>/Unit Delay2'
     *  UnitDelay: '<S382>/Unit Delay'
     */
    rtb_OR1_n = ((((((APSR_ac_DW.UnitDelay2_DSTATE) &&
                     (APSR_ac_DW.UnitDelay1_DSTATE)) && rtb_OR1_ld) &&
                   rtb_AND_oe) && TmpSignalConversionAtTmpVM_F_hr) ||
                 (TmpSignalConversionAtTmpVM_F_hr &&
                  (APSR_ac_DW.UnitDelay_DSTATE_bx)));

    /* Update for UnitDelay: '<S382>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_bx = rtb_OR1_n;

    /* End of Outputs for SubSystem: '<S363>/Signal Latch On With Reset' */

    /* Logic: '<S368>/not' incorporates:
     *  Logic: '<S363>/Logical3'
     */
    rtb_VariantMerge_For_Variant__f = !rtb_VariantMerge_For_Variant__e;

    /* Logic: '<S368>/and' incorporates:
     *  Logic: '<S368>/IP and no fault?1'
     *  Logic: '<S368>/and2'
     *  Logic: '<S368>/not'
     *  UnitDelay: '<S536>/Unit Delay'
     */
    rtb_LatchaPass_p0 = (((rtb_VariantMerge_For_Variant__f &&
                           (APSR_ac_DW.UnitDelay_DSTATE_o)) &&
                          (((VeAPSI_b_IpEEIsInPlantMode) || rtb_OR1_n) &&
                           rtb_VariantMerge_For_Variant_So)) && rtb_nott2);

    /* Outputs for Enabled SubSystem: '<S363>/Init_RAM' incorporates:
     *  EnablePort: '<S373>/Enable'
     */
    /* Logic: '<S363>/Logical2' incorporates:
     *  Logic: '<S363>/Logical3'
     */
    if ((rtb_nott2 && (!rtb_LatchaPass_p0)) && rtb_VariantMerge_For_Variant__f)
    {
        /* Merge: '<S363>/Merge3' incorporates:
         *  DataStoreRead: '<S39>/Pvs2MinValue_Read'
         *  Gain: '<S414>/Gain'
         */
        VeAPSR_U_IpEEETCPvs2MinValue = AeAPSR_U_Pvs2MinValue;

        /* Merge: '<S363>/Merge1' incorporates:
         *  DataStoreRead: '<S39>/Pvs2MaxValue_Read'
         *  Gain: '<S415>/Gain'
         */
        VeAPSR_U_IpEEETCPvs2MaxValue = AeAPSR_U_Pvs2MaxValue;

        /* Merge: '<S363>/Merge7' incorporates:
         *  DataStoreRead: '<S39>/Pv2MinTestNotCmplt_Read'
         *  Logic: '<S412>/AND'
         */
        VeAPSR_b_IpEELv1Pv2MinTestNotCmplt = AeAPSR_b_Pv2MinTestNotCmplt;

        /* Merge: '<S363>/Merge2' incorporates:
         *  DataStoreRead: '<S39>/Pv2MaxTestNotCmplt_Read'
         *  Logic: '<S413>/AND'
         */
        VeAPSR_b_IpEELv1Pv2MaxTestNotCmplt = AeAPSR_b_Pv2MaxTestNotCmplt;

        /* Merge: '<S363>/Merge5' incorporates:
         *  DataStoreRead: '<S39>/Pv2MinTestFailed_Read'
         *  Logic: '<S410>/AND'
         */
        VeAPSR_b_IpEELv1Pv2MinTestFailed = AeAPSR_b_Pv2MinTestFailed;

        /* Merge: '<S363>/Merge6' incorporates:
         *  DataStoreRead: '<S39>/Pv2MaxTestFailed_Read'
         *  Logic: '<S411>/AND'
         */
        VeAPSR_b_IpEELv1Pv2MaxTestFailed = AeAPSR_b_Pv2MaxTestFailed;
    }

    /* End of Logic: '<S363>/Logical2' */
    /* End of Outputs for SubSystem: '<S363>/Init_RAM' */

    /* RelationalOperator: '<S385>/Relational Operator3' incorporates:
     *  Constant: '<S385>/Constant3'
     *  S-Function (sfix_bitop): '<S385>/Bitwise Operator2'
     */
    rtb_nott2 = ((((uint32)APSR_ac_B.TmpSignalConversionAtTmpVM_F_dw) & 64U) ==
                 0U);

    /* Outputs for Atomic SubSystem: '<S385>/EdgeFalling1' */
    /* Logic: '<S433>/AND' incorporates:
     *  Logic: '<S433>/OR1'
     *  UnitDelay: '<S433>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__f = ((!rtb_nott2) &&
        (APSR_ac_DW.UnitDelay_DSTATE_bg));

    /* Update for UnitDelay: '<S433>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_bg = rtb_nott2;

    /* End of Outputs for SubSystem: '<S385>/EdgeFalling1' */

    /* RelationalOperator: '<S384>/Relational Operator3' incorporates:
     *  Constant: '<S384>/Constant3'
     *  S-Function (sfix_bitop): '<S384>/Bitwise Operator2'
     */
    rtb_nott2 = ((((uint32)APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_j) & 64U) ==
                 0U);

    /* Outputs for Atomic SubSystem: '<S384>/EdgeFalling1' */
    /* Logic: '<S432>/AND' incorporates:
     *  Logic: '<S432>/OR1'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    rtb_RelationalOperator3_ht = ((!rtb_nott2) && (APSR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S432>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_c = rtb_nott2;

    /* End of Outputs for SubSystem: '<S384>/EdgeFalling1' */

    /* Outputs for Enabled SubSystem: '<S363>/IP_PV2_MinMax_Chk' incorporates:
     *  EnablePort: '<S371>/Enable'
     */
    if (rtb_LatchaPass_p0)
    {
        /* Outputs for Atomic SubSystem: '<S395>/EdgeRising1' */
        /* Logic: '<S409>/OR1' incorporates:
         *  UnitDelay: '<S409>/Unit Delay'
         */
        rtb_nott2 = !APSR_ac_DW.UnitDelay_DSTATE_m;

        /* Update for UnitDelay: '<S409>/Unit Delay' incorporates:
         *  Constant: '<S395>/TRUE Constant'
         */
        APSR_ac_DW.UnitDelay_DSTATE_m = true;

        /* Switch: '<S395>/Switch' incorporates:
         *  Constant: '<S395>/ONE1'
         *  Logic: '<S409>/AND'
         *  UnitDelay: '<S395>/delay'
         */
        if (rtb_nott2)
        {
            rtb_RelationalOperator3_h = 1.25F;
        }
        else
        {
            rtb_RelationalOperator3_h = APSR_ac_DW.delay_DSTATE;
        }

        /* End of Switch: '<S395>/Switch' */
        /* End of Outputs for SubSystem: '<S395>/EdgeRising1' */

        /* Sum: '<S395>/sum' incorporates:
         *  Constant: '<S394>/Calib'
         *  Constant: '<S395>/One'
         *  Product: '<S395>/Current Value Product'
         *  Product: '<S395>/Previous Value Product'
         *  Sum: '<S395>/ADDD'
         */
        VeAPSR_U_Lv1IPPvs2Filt = ((1.0F - KeAPSR_k_Lv1Pv2IpMinFilter) *
            rtb_RelationalOperator3_h) + (TmpSignalConversionAtTmpVM_Fc_p *
            KeAPSR_k_Lv1Pv2IpMinFilter);

        /* If: '<S371>/If' incorporates:
         *  DataStoreRead: '<S39>/Pv2MaxTestFailed_Read'
         *  DataStoreRead: '<S39>/Pv2MaxTestNotCmplt_Read'
         *  Logic: '<S371>/ ANDD'
         *  Logic: '<S371>/EE_LV1_PV1_MIN_IP_TEST_CMPLT2'
         */
        if (rtb_OR1_n || ((AeAPSR_b_Pv2MaxTestNotCmplt) &&
                          (AeAPSR_b_Pv2MaxTestFailed)))
        {
            APSR_ac_DW.If_ActiveSubsystem = 0;

            /* Outputs for IfAction SubSystem: '<S371>/Else_Max_Test_Value' incorporates:
             *  ActionPort: '<S388>/Action Port'
             */
            /* Merge: '<S363>/Merge1' incorporates:
             *  MinMax: '<S388>/IP_EE_ETC_PVS2_MAX_VALUE'
             *  UnitDelay: '<S388>/delay'
             */
            VeAPSR_U_IpEEETCPvs2MaxValue = fmaxf(VeAPSR_U_Lv1IPPvs2Filt,
                APSR_ac_DW.delay_DSTATE_o);

            /* RelationalOperator: '<S388>/LV1_PV2_IP_MAX_FAILING' incorporates:
             *  Constant: '<S392>/Calib'
             */
            VeAPSR_b_Lv1Pv2IPMaxFailing = (VeAPSR_U_Lv1IPPvs2Filt <=
                KeAPSR_U_Lv1Pv2IpMaxLim);

            /* Switch: '<S400>/Switch' incorporates:
             *  Switch: '<S398>/dec if Failed  inc if passed'
             */
            if (rtb_VariantMerge_For_Variant__f)
            {
                /* Switch: '<S400>/Switch' incorporates:
                 *  Constant: '<S398>/Constant'
                 */
                VeAPSR_Cnt_IpEELv1Pv2Maxcntr = 0;
            }
            else
            {
                if (VeAPSR_b_Lv1Pv2IPMaxFailing)
                {
                    /* Switch: '<S398>/dec if Failed  inc if passed' incorporates:
                     *  Constant: '<S398>/CNTR_DEC'
                     */
                    rtb_Sum1_d = -1;
                }
                else
                {
                    /* Switch: '<S398>/dec if Failed  inc if passed' incorporates:
                     *  Constant: '<S396>/Calib'
                     */
                    rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv2IpMaxCntrInc;
                }

                /* Sum: '<S398>/PLUSS' incorporates:
                 *  UnitDelay: '<S398>/Prev Counter'
                 */
                rtb_Sum1_d += APSR_ac_DW.PrevCounter_DSTATE_j;

                /* Outputs for Atomic SubSystem: '<S398>/Limiter1' */
                /* Switch: '<S399>/Switch1' incorporates:
                 *  Constant: '<S398>/max limit1'
                 *  RelationalOperator: '<S399>/Relational Operator'
                 */
                if (127 < rtb_Sum1_d)
                {
                    /* Switch: '<S399>/Switch1' */
                    rtb_Sum1_d = 127;
                }

                /* End of Switch: '<S399>/Switch1' */

                /* Switch: '<S399>/Switch' incorporates:
                 *  Constant: '<S398>/min limit1'
                 *  RelationalOperator: '<S399>/Relational Operator1'
                 */
                if (rtb_Sum1_d > 0)
                {
                    /* Switch: '<S400>/Switch' */
                    VeAPSR_Cnt_IpEELv1Pv2Maxcntr = rtb_Sum1_d;
                }
                else
                {
                    /* Switch: '<S400>/Switch' */
                    VeAPSR_Cnt_IpEELv1Pv2Maxcntr = 0;
                }

                /* End of Switch: '<S399>/Switch' */
                /* End of Outputs for SubSystem: '<S398>/Limiter1' */
            }

            /* End of Switch: '<S400>/Switch' */

            /* Logic: '<S398>/Latch a Pass' incorporates:
             *  Constant: '<S397>/Calib'
             *  RelationalOperator: '<S398>/relOp'
             *  UnitDelay: '<S398>/Prev Pass Condition'
             */
            rtb_LatchaPass_k = ((VeAPSR_Cnt_IpEELv1Pv2Maxcntr >=
                                 KeAPSR_Cnt_Lv1Pv2IpMaxCntrLim) ||
                                (APSR_ac_DW.PrevPassCondition_DSTATE_g));

            /* Logic: '<S398>/EE_LV1_PV2_MAX_IP_FAILED' */
            APSR_ac_B.EE_LV1_PV2_MAX_IP_FAILED = !rtb_LatchaPass_k;

            /* End of Outputs for SubSystem: '<S371>/Else_Max_Test_Value' */
        }
        else
        {
            APSR_ac_DW.If_ActiveSubsystem = 1;

            /* Outputs for IfAction SubSystem: '<S371>/If_Max_Test_Value' incorporates:
             *  ActionPort: '<S390>/Action Port'
             */
            /* Merge: '<S363>/Merge1' incorporates:
             *  DataStoreRead: '<S39>/Pvs2MaxValue_Read'
             *  Gain: '<S407>/Gain'
             */
            VeAPSR_U_IpEEETCPvs2MaxValue = AeAPSR_U_Pvs2MaxValue;

            /* End of Outputs for SubSystem: '<S371>/If_Max_Test_Value' */
        }

        /* End of If: '<S371>/If' */

        /* If: '<S371>/If1' incorporates:
         *  DataStoreRead: '<S39>/Pv2MaxTestFailed_Read'
         *  DataStoreRead: '<S39>/Pv2MinTestFailed_Read'
         *  DataStoreRead: '<S39>/Pv2MinTestNotCmplt_Read'
         *  Logic: '<S371>/EE_LV1_PV1_MIN_IP_TEST_CMPLT3'
         *  Logic: '<S371>/EE_LV1_PV1_MIN_IP_TEST_CMPLT4'
         *  Logic: '<S371>/Max Not Failed'
         *  Logic: '<S371>/Max Not Failed1'
         *  Logic: '<S371>/NDD'
         *  UnitDelay: '<S363>/FixPt Unit Delay1'
         */
        if ((rtb_OR1_n && (!APSR_ac_DW.FixPtUnitDelay1_DSTATE)) ||
                (((!AeAPSR_b_Pv2MaxTestFailed) && (AeAPSR_b_Pv2MinTestNotCmplt))
                 && (AeAPSR_b_Pv2MinTestFailed)))
        {
            APSR_ac_DW.If1_ActiveSubsystem = 0;

            /* Outputs for IfAction SubSystem: '<S371>/Else_Min_Test_Value' incorporates:
             *  ActionPort: '<S389>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S389>/EdgeRising1' */
            /* Logic: '<S401>/AND' incorporates:
             *  Logic: '<S401>/OR1'
             *  UnitDelay: '<S401>/Unit Delay'
             */
            rtb_AND_dn = !APSR_ac_DW.UnitDelay_DSTATE_nf;

            /* Update for UnitDelay: '<S401>/Unit Delay' incorporates:
             *  Constant: '<S389>/TRUE Constant'
             */
            APSR_ac_DW.UnitDelay_DSTATE_nf = true;

            /* End of Outputs for SubSystem: '<S389>/EdgeRising1' */

            /* Switch: '<S389>/Switch' incorporates:
             *  Constant: '<S389>/ONE1'
             *  UnitDelay: '<S389>/delay'
             */
            if (rtb_AND_dn)
            {
                rtb_RelationalOperator3_h = 5.0F;
            }
            else
            {
                rtb_RelationalOperator3_h = APSR_ac_DW.delay_DSTATE_a;
            }

            /* End of Switch: '<S389>/Switch' */

            /* Merge: '<S363>/Merge3' incorporates:
             *  MinMax: '<S389>/IP_EE_ETC_PVS2_MIN_VALUE'
             */
            VeAPSR_U_IpEEETCPvs2MinValue = fminf(VeAPSR_U_Lv1IPPvs2Filt,
                rtb_RelationalOperator3_h);

            /* RelationalOperator: '<S389>/LV1_PV2_IP_MIN_FAILING' incorporates:
             *  Constant: '<S393>/Calib'
             */
            VeAPSR_b_Lv1Pv2IPMinFailing = (VeAPSR_U_Lv1IPPvs2Filt >=
                KeAPSR_U_Lv1Pv2IpMinLim);

            /* Switch: '<S404>/dec if Failed  inc if passed' incorporates:
             *  Constant: '<S402>/Calib'
             *  Constant: '<S404>/CNTR_DEC'
             */
            if (VeAPSR_b_Lv1Pv2IPMinFailing)
            {
                rtb_Sum1_d = -1;
            }
            else
            {
                rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv2IpMinCntrInc;
            }

            /* End of Switch: '<S404>/dec if Failed  inc if passed' */

            /* Sum: '<S404>/PLUSS' incorporates:
             *  UnitDelay: '<S404>/Prev Counter'
             */
            rtb_PLUSS = (sint16)(APSR_ac_DW.PrevCounter_DSTATE + rtb_Sum1_d);

            /* Outputs for Atomic SubSystem: '<S404>/Limiter' */
            /* Switch: '<S405>/Switch1' incorporates:
             *  Constant: '<S404>/max limit'
             *  RelationalOperator: '<S405>/Relational Operator'
             */
            if (127 < rtb_PLUSS)
            {
                /* Switch: '<S405>/Switch1' */
                rtb_PLUSS = 127;
            }

            /* End of Switch: '<S405>/Switch1' */

            /* Switch: '<S405>/Switch' incorporates:
             *  Constant: '<S404>/min limit'
             *  RelationalOperator: '<S405>/Relational Operator1'
             */
            if (rtb_PLUSS > 0)
            {
                /* Switch: '<S405>/Switch' */
                VeAPSR_Cnt_IpEELv1Pv2Mincntr = rtb_PLUSS;
            }
            else
            {
                /* Switch: '<S405>/Switch' */
                VeAPSR_Cnt_IpEELv1Pv2Mincntr = 0;
            }

            /* End of Switch: '<S405>/Switch' */
            /* End of Outputs for SubSystem: '<S404>/Limiter' */

            /* Switch: '<S406>/Switch' */
            if (rtb_RelationalOperator3_ht)
            {
                /* Switch: '<S406>/Switch' incorporates:
                 *  Constant: '<S404>/Constant'
                 */
                rtb_PLUSS = 0;
            }
            else
            {
                /* Switch: '<S406>/Switch' */
                rtb_PLUSS = VeAPSR_Cnt_IpEELv1Pv2Mincntr;
            }

            /* End of Switch: '<S406>/Switch' */

            /* Logic: '<S404>/Latch a Pass' incorporates:
             *  Constant: '<S403>/Calib'
             *  RelationalOperator: '<S404>/relOp'
             *  UnitDelay: '<S404>/Prev Pass Condition'
             */
            rtb_AND_dn = ((rtb_PLUSS >= KeAPSR_Cnt_Lv1Pv2IpMinCntrLim) ||
                          (APSR_ac_DW.PrevPassCondition_DSTATE));

            /* Merge: '<S363>/Merge5' incorporates:
             *  Logic: '<S404>/EE_LV1_PV2_MIN_IP_FAILED'
             */
            VeAPSR_b_IpEELv1Pv2MinTestFailed = !rtb_AND_dn;

            /* End of Outputs for SubSystem: '<S371>/Else_Min_Test_Value' */
        }
        else
        {
            APSR_ac_DW.If1_ActiveSubsystem = 1;

            /* Outputs for IfAction SubSystem: '<S371>/If_Min_Test_Value' incorporates:
             *  ActionPort: '<S391>/Action Port'
             */
            /* Merge: '<S363>/Merge5' incorporates:
             *  Inport: '<S391>/IpEELv1Pv2MinTestFailed_Read'
             */
            VeAPSR_b_IpEELv1Pv2MinTestFailed = AeAPSR_b_Pv2MinTestFailed;

            /* Merge: '<S363>/Merge3' incorporates:
             *  DataStoreRead: '<S39>/Pvs2MinValue_Read'
             *  Gain: '<S408>/Gain'
             */
            VeAPSR_U_IpEEETCPvs2MinValue = AeAPSR_U_Pvs2MinValue;

            /* End of Outputs for SubSystem: '<S371>/If_Min_Test_Value' */
        }

        /* End of If: '<S371>/If1' */

        /* Merge: '<S363>/Merge6' incorporates:
         *  SignalConversion generated from: '<S371>/IpEELv1Pv2MaxTestFailed'
         */
        VeAPSR_b_IpEELv1Pv2MaxTestFailed = APSR_ac_B.EE_LV1_PV2_MAX_IP_FAILED;
    }

    /* End of Outputs for SubSystem: '<S363>/IP_PV2_MinMax_Chk' */

    /* DataStoreWrite: '<S38>/Pv2MinTestFailed_Write' */
    AeAPSR_b_Pv2MinTestFailed = VeAPSR_b_IpEELv1Pv2MinTestFailed;

    /* DataStoreWrite: '<S38>/Pv2MaxTestFailed_Write' */
    AeAPSR_b_Pv2MaxTestFailed = VeAPSR_b_IpEELv1Pv2MaxTestFailed;

    /* Switch: '<S363>/switch' */
    if (VeAPSI_b_IpEEIsInPlantMode)
    {
        /* Gain: '<S378>/Gain' */
        rtb_nott2 = VeAPSR_b_IpEELv1Pv2MinTestFailed;
    }
    else
    {
        /* Gain: '<S378>/Gain' incorporates:
         *  Constant: '<S375>/Calib'
         *  DataStoreRead: '<S39>/Pvs2MinValue_Read'
         *  RelationalOperator: '<S363>/relOp2'
         */
        rtb_nott2 = (KeAPSR_U_Lv1Pv2IpMinLim <= AeAPSR_U_Pvs2MinValue);
    }

    /* End of Switch: '<S363>/switch' */

    /* S-Function (sfix_bitop): '<S466>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S466>/StatusByte_SnsrRefVolt2Noisy'
     *  S-Function (sfix_bitop): '<S191>/Bitwise Operator2'
     */
    rtb_andd_tmp = ((sint32)APSR_ac_DW.StatusByte_SnsrRefVolt2Noisy) & 1;

    /* Outputs for Enabled SubSystem: '<S138>/Aux_Diagnostic' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    /* S-Function (sfix_bitop): '<S466>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S466>/StatusByte_SnsrRefVolt2Noisy'
     *  S-Function (sfix_bitop): '<S155>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S191>/Bitwise Operator1'
     */
    rtb_andd_tmp_0 = ((uint32)APSR_ac_DW.StatusByte_SnsrRefVolt2Noisy) & 64U;

    /* End of Outputs for SubSystem: '<S138>/Aux_Diagnostic' */

    /* S-Function (sfix_bitop): '<S468>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S468>/StatusByte_SnsrRefVolt6CktLo'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator2'
     */
    rtb_andd_tmp_1 = ((sint32)APSR_ac_DW.StatusByte_SnsrRefVolt6CktLo) & 1;

    /* Outputs for Enabled SubSystem: '<S138>/Aux_Diagnostic' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    /* S-Function (sfix_bitop): '<S468>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S468>/StatusByte_SnsrRefVolt6CktLo'
     *  S-Function (sfix_bitop): '<S156>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S193>/Bitwise Operator1'
     */
    rtb_andd_tmp_2 = ((uint32)APSR_ac_DW.StatusByte_SnsrRefVolt6CktLo) & 64U;

    /* End of Outputs for SubSystem: '<S138>/Aux_Diagnostic' */

    /* S-Function (sfix_bitop): '<S467>/Bitwise Operator2' incorporates:
     *  DataStoreRead: '<S467>/StatusByte_SnsrRefVolt6CktHi'
     *  S-Function (sfix_bitop): '<S192>/Bitwise Operator2'
     */
    rtb_andd_tmp_3 = ((sint32)APSR_ac_DW.StatusByte_SnsrRefVolt6CktHi) & 1;

    /* Outputs for Enabled SubSystem: '<S138>/Aux_Diagnostic' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    /* S-Function (sfix_bitop): '<S467>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S467>/StatusByte_SnsrRefVolt6CktHi'
     *  S-Function (sfix_bitop): '<S157>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S192>/Bitwise Operator1'
     */
    rtb_andd_tmp_4 = ((uint32)APSR_ac_DW.StatusByte_SnsrRefVolt6CktHi) & 64U;

    /* End of Outputs for SubSystem: '<S138>/Aux_Diagnostic' */

    /* Outputs for Enabled SubSystem: '<S41>/LV1_PV2_Limit_Check' incorporates:
     *  EnablePort: '<S364>/Enable'
     */
    /* S-Function (sfix_bitop): '<S366>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S366>/StatusByte_APP_Snsr2CktHi'
     *  S-Function (sfix_bitop): '<S441>/Bitwise Operator2'
     */
    tmp = ((uint32)APSR_ac_DW.StatusByte_APP_Snsr2CktHi) & 64U;

    /* S-Function (sfix_bitop): '<S367>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S367>/StatusByte_APP_Snsr2CktLo'
     *  S-Function (sfix_bitop): '<S442>/Bitwise Operator2'
     */
    tmp_0 = ((uint32)APSR_ac_DW.StatusByte_APP_Snsr2CktLo) & 64U;

    /* End of Outputs for SubSystem: '<S41>/LV1_PV2_Limit_Check' */

    /* Logic: '<S361>/Logical' incorporates:
     *  Constant: '<S362>/Calib'
     *  Constant: '<S466>/Constant1'
     *  Constant: '<S466>/Constant2'
     *  Constant: '<S467>/Constant1'
     *  Constant: '<S467>/Constant2'
     *  Constant: '<S468>/Constant1'
     *  Constant: '<S468>/Constant2'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S365>/Logical'
     *  Logic: '<S41>/Logical2'
     *  Logic: '<S466>/Logical Operator'
     *  Logic: '<S467>/Logical Operator'
     *  Logic: '<S468>/Logical Operator'
     *  RelationalOperator: '<S466>/Relational Operator1'
     *  RelationalOperator: '<S466>/Relational Operator2'
     *  RelationalOperator: '<S467>/Relational Operator1'
     *  RelationalOperator: '<S467>/Relational Operator2'
     *  RelationalOperator: '<S468>/Relational Operator1'
     *  RelationalOperator: '<S468>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S466>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S466>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S467>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S467>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S468>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S468>/Bitwise Operator2'
     */
    rtb_andd = (((((rtb_andd_tmp_1 <= 0) || (rtb_andd_tmp_2 != 0U)) &&
                  ((rtb_andd_tmp_3 <= 0) || (rtb_andd_tmp_4 != 0U))) &&
                 ((rtb_andd_tmp <= 0) || (rtb_andd_tmp_0 != 0U))) ||
                (!KeAPSR_b_OvrdPwrSupFlt));

    /* Outputs for Enabled SubSystem: '<S41>/LV1_PV2_Limit_Check' incorporates:
     *  EnablePort: '<S364>/Enable'
     */
    /* Logic: '<S361>/Logical Operator' incorporates:
     *  Constant: '<S366>/Constant1'
     *  Constant: '<S366>/Constant2'
     *  Constant: '<S367>/Constant1'
     *  Constant: '<S367>/Constant2'
     *  DataStoreRead: '<S366>/StatusByte_APP_Snsr2CktHi'
     *  DataStoreRead: '<S367>/StatusByte_APP_Snsr2CktLo'
     *  Logic: '<S361>/Logical'
     *  Logic: '<S361>/Logical1'
     *  Logic: '<S361>/Logical2'
     *  Logic: '<S361>/Logical3'
     *  Logic: '<S366>/Logical Operator'
     *  Logic: '<S367>/Logical Operator'
     *  Logic: '<S438>/Logical Operator'
     *  RelationalOperator: '<S366>/Relational Operator1'
     *  RelationalOperator: '<S366>/Relational Operator2'
     *  RelationalOperator: '<S367>/Relational Operator1'
     *  RelationalOperator: '<S367>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S366>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S367>/Bitwise Operator2'
     */
    if ((((((((((sint32)APSR_ac_DW.StatusByte_APP_Snsr2CktLo) & 1) <= 0) ||
             (tmp_0 != 0U)) && (((((sint32)APSR_ac_DW.StatusByte_APP_Snsr2CktHi)
               & 1) <= 0) || (tmp != 0U))) && rtb_Logical1) && rtb_andd) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew))
    {
        /* Logic: '<S442>/Logical5' incorporates:
         *  Logic: '<S364>/OR1'
         */
        rtb_AND_nc = ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew) ||
                      (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz));

        /* RelationalOperator: '<S441>/Relational Operator3' incorporates:
         *  Constant: '<S441>/Constant3'
         */
        rtb_RelationalOperator3_f = (tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S441>/EdgeFalling1' */
        /* Logic: '<S464>/AND' incorporates:
         *  Logic: '<S464>/OR1'
         *  UnitDelay: '<S464>/Unit Delay'
         */
        rtb_AND_af = ((!rtb_RelationalOperator3_f) &&
                      (APSR_ac_DW.UnitDelay_DSTATE_b3));

        /* Update for UnitDelay: '<S464>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_b3 = rtb_RelationalOperator3_f;

        /* End of Outputs for SubSystem: '<S441>/EdgeFalling1' */

        /* Logic: '<S441>/Logical5' */
        rtb_RelationalOperator3_f = (rtb_AND_nc || rtb_AND_af);

        /* RelationalOperator: '<S442>/Relational Operator3' incorporates:
         *  Constant: '<S442>/Constant3'
         */
        rtb_AND_af = (tmp_0 == 0U);

        /* Outputs for Atomic SubSystem: '<S442>/EdgeFalling1' */
        /* Logic: '<S465>/AND' incorporates:
         *  Logic: '<S465>/OR1'
         *  UnitDelay: '<S465>/Unit Delay'
         */
        rtb_relOp2_i = ((!rtb_AND_af) && (APSR_ac_DW.UnitDelay_DSTATE_lh));

        /* Update for UnitDelay: '<S465>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_lh = rtb_AND_af;

        /* End of Outputs for SubSystem: '<S442>/EdgeFalling1' */

        /* Logic: '<S442>/Logical5' */
        rtb_AND_nc = (rtb_AND_nc || rtb_relOp2_i);

        /* Logic: '<S364>/Logical Operator1' */
        rtb_AND_af = (rtb_RelationalOperator3_f || rtb_AND_nc);

        /* RelationalOperator: '<S449>/Comparison2' incorporates:
         *  Constant: '<S436>/Calib'
         */
        VeAPSR_b_Pv2FailLo = (TmpSignalConversionAtTmpVM_Fc_p <
                              KeAPSR_U_Lv1Pv2Min);

        /* Outputs for Enabled SubSystem: '<S438>/PV2_Fail_Hi' incorporates:
         *  EnablePort: '<S448>/Enable'
         */
        if (!VeAPSR_b_Pv2FailLo)
        {
            /* RelationalOperator: '<S448>/Comparison' incorporates:
             *  Constant: '<S435>/Calib'
             */
            VeAPSR_b_Pv2FailHi = (TmpSignalConversionAtTmpVM_Fc_p >
                                  KeAPSR_U_Lv1Pv2Max);
        }

        /* End of Outputs for SubSystem: '<S438>/PV2_Fail_Hi' */

        /* Logic: '<S438>/Logical1' incorporates:
         *  Logic: '<S438>/Logical Operator'
         */
        VeAPSR_b_FailingPv2 = ((VeAPSR_b_Pv2FailLo) || (VeAPSR_b_Pv2FailHi));

        /* Switch: '<S437>/switch' incorporates:
         *  Switch: '<S437>/dec if Ok else inc'
         */
        if (rtb_AND_af)
        {
            /* Switch: '<S437>/switch' incorporates:
             *  Constant: '<S437>/constant'
             */
            VeAPSR_Cnt_Lv1Pv2Cntr = 0;
        }
        else
        {
            if (VeAPSR_b_FailingPv2)
            {
                /* Switch: '<S437>/dec if Ok else inc' incorporates:
                 *  Constant: '<S434>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv2CntrInc;
            }
            else
            {
                /* Switch: '<S437>/dec if Ok else inc' incorporates:
                 *  Constant: '<S445>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1Pv2CntrDec;
            }

            /* Sum: '<S437>/LV1_PV2_CNTR' incorporates:
             *  UnitDelay: '<S437>/Prev Counter initial Value zero'
             */
            rtb_Sum1_d += APSR_ac_DW.PrevCounterinitialValuezero_DST;

            /* Outputs for Atomic SubSystem: '<S437>/Limiter' */
            /* Switch: '<S446>/Switch1' incorporates:
             *  Constant: '<S437>/Max_Limit'
             *  RelationalOperator: '<S446>/Relational Operator'
             */
            if (127 < rtb_Sum1_d)
            {
                /* Switch: '<S446>/Switch1' */
                rtb_Sum1_d = 127;
            }

            /* End of Switch: '<S446>/Switch1' */

            /* Switch: '<S446>/Switch' incorporates:
             *  Constant: '<S437>/Min_Limit'
             *  RelationalOperator: '<S446>/Relational Operator1'
             */
            if (rtb_Sum1_d > 0)
            {
                /* Switch: '<S437>/switch' */
                VeAPSR_Cnt_Lv1Pv2Cntr = rtb_Sum1_d;
            }
            else
            {
                /* Switch: '<S437>/switch' */
                VeAPSR_Cnt_Lv1Pv2Cntr = 0;
            }

            /* End of Switch: '<S446>/Switch' */
            /* End of Outputs for SubSystem: '<S437>/Limiter' */
        }

        /* End of Switch: '<S437>/switch' */

        /* Outputs for Atomic SubSystem: '<S437>/Signal Latch On With Reset' */
        /* Logic: '<S447>/OR1' incorporates:
         *  Constant: '<S28>/Calib'
         *  Logic: '<S447>/NOT'
         *  Logic: '<S447>/OR'
         *  RelationalOperator: '<S437>/relOp'
         *  UnitDelay: '<S447>/Unit Delay'
         */
        APSR_ac_B.OR1 = ((VeAPSR_Cnt_Lv1Pv2Cntr >= KeAPSR_Cnt_Lv1Pv2CntrLim) ||
                         ((!rtb_AND_af) && (APSR_ac_DW.UnitDelay_DSTATE_om)));

        /* Update for UnitDelay: '<S447>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_om = APSR_ac_B.OR1;

        /* End of Outputs for SubSystem: '<S437>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S439>/EdgeFalling1' */
        /* Update for UnitDelay: '<S450>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_n = true;

        /* End of Outputs for SubSystem: '<S439>/EdgeFalling1' */

        /* If: '<S439>/If' incorporates:
         *  Logic: '<S364>/Logical2'
         *  Logic: '<S364>/Logical4'
         *  Logic: '<S439>/Logical5'
         */
        if (rtb_RelationalOperator3_f)
        {
            /* Outputs for IfAction SubSystem: '<S439>/Init' incorporates:
             *  ActionPort: '<S452>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_e);

            /* End of Outputs for SubSystem: '<S439>/Init' */
        }
        else if (!VeAPSR_b_Pv2FailLo)
        {
            /* Outputs for IfAction SubSystem: '<S439>/Pass' incorporates:
             *  ActionPort: '<S453>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_e);

            /* End of Outputs for SubSystem: '<S439>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1) && (VeAPSR_b_Pv2FailLo))
            {
                /* Outputs for IfAction SubSystem: '<S439>/Fail' incorporates:
                 *  ActionPort: '<S451>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_e);

                /* End of Outputs for SubSystem: '<S439>/Fail' */
            }
        }

        /* End of If: '<S439>/If' */

        /* Outputs for Atomic SubSystem: '<S440>/EdgeFalling1' */
        /* Update for UnitDelay: '<S457>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_e = true;

        /* End of Outputs for SubSystem: '<S440>/EdgeFalling1' */

        /* If: '<S440>/If' incorporates:
         *  Logic: '<S364>/Logical1'
         *  Logic: '<S364>/Logical3'
         *  Logic: '<S440>/Logical5'
         */
        if (rtb_AND_nc)
        {
            /* Outputs for IfAction SubSystem: '<S440>/Init' incorporates:
             *  ActionPort: '<S459>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_h);

            /* End of Outputs for SubSystem: '<S440>/Init' */
        }
        else if (!VeAPSR_b_Pv2FailHi)
        {
            /* Outputs for IfAction SubSystem: '<S440>/Pass' incorporates:
             *  ActionPort: '<S460>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_h);

            /* End of Outputs for SubSystem: '<S440>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1) && (VeAPSR_b_Pv2FailHi))
            {
                /* Outputs for IfAction SubSystem: '<S440>/Fail' incorporates:
                 *  ActionPort: '<S458>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_h);

                /* End of Outputs for SubSystem: '<S440>/Fail' */
            }
        }

        /* End of If: '<S440>/If' */

        /* Update for UnitDelay: '<S437>/Prev Counter initial Value zero' */
        APSR_ac_DW.PrevCounterinitialValuezero_DST = VeAPSR_Cnt_Lv1Pv2Cntr;
    }

    /* End of Logic: '<S361>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S41>/LV1_PV2_Limit_Check' */

    /* Switch: '<S363>/switch1' */
    if (VeAPSI_b_IpEEIsInPlantMode)
    {
        /* Logic: '<S47>/ORR3' */
        rtb_ORR3 = VeAPSR_b_IpEELv1Pv2MaxTestFailed;
    }
    else
    {
        /* Logic: '<S47>/ORR3' incorporates:
         *  Constant: '<S374>/Calib'
         *  DataStoreRead: '<S39>/Pvs2MaxValue_Read'
         *  RelationalOperator: '<S363>/relOp'
         */
        rtb_ORR3 = (KeAPSR_U_Lv1Pv2IpMaxLim >= AeAPSR_U_Pvs2MaxValue);
    }

    /* End of Switch: '<S363>/switch1' */

    /* Gain: '<S379>/Gain' */
    rtb_AND_nc = rtb_ORR3;

    /* Outputs for Enabled SubSystem: '<S363>/PVS2_Test_Not_Cmt' incorporates:
     *  EnablePort: '<S377>/Enable'
     */
    if (rtb_LatchaPass_p0)
    {
        /* Logic: '<S377>/EE_LV1_PV2_MAX_IP_TEST_CMPLT' incorporates:
         *  Logic: '<S377>/EE_LV1_PV2_MIN_IP_TEST_CMPLT'
         *  Logic: '<S377>/FixPt Logical Operator2'
         */
        rtb_relOp2_i = ((!APSR_ac_B.OR1) && (!rtb_FixPtUnitDelay2));

        /* Merge: '<S363>/Merge2' incorporates:
         *  Gain: '<S379>/Gain'
         *  Logic: '<S377>/EE_LV1_PV2_MAX_IP_TEST_CMPLT'
         *  Logic: '<S377>/Service zero Pedal1'
         */
        VeAPSR_b_IpEELv1Pv2MaxTestNotCmplt = (rtb_ORR3 && rtb_relOp2_i);

        /* Merge: '<S363>/Merge7' incorporates:
         *  Logic: '<S377>/EE_LV1_PV2_MIN_IP_TEST_CMPLT'
         *  Logic: '<S377>/Service zero Pedal3'
         *  Logic: '<S377>/Service zero Pedal4'
         */
        VeAPSR_b_IpEELv1Pv2MinTestNotCmplt = (rtb_relOp2_i && rtb_nott2);
    }

    /* End of Outputs for SubSystem: '<S363>/PVS2_Test_Not_Cmt' */

    /* DataStoreWrite: '<S38>/Pv2MinTestNotCmplt_Write' */
    AeAPSR_b_Pv2MinTestNotCmplt = VeAPSR_b_IpEELv1Pv2MinTestNotCmplt;

    /* DataStoreWrite: '<S38>/Pv2MaxTestNotCmplt_Write' */
    AeAPSR_b_Pv2MaxTestNotCmplt = VeAPSR_b_IpEELv1Pv2MaxTestNotCmplt;

    /* Outputs for Enabled SubSystem: '<S363>/Init_EEPROM_Srv' incorporates:
     *  EnablePort: '<S372>/Enable'
     */
    if (rtb_VariantMerge_For_Variant__e)
    {
        /* Merge: '<S363>/Merge3' incorporates:
         *  Constant: '<S372>/Constant 1'
         *  SignalConversion generated from: '<S372>/IpEEPvs2MinValue_Init'
         */
        VeAPSR_U_IpEEETCPvs2MinValue = 1.2512F;

        /* Merge: '<S363>/Merge1' incorporates:
         *  Constant: '<S372>/Constant 2'
         *  SignalConversion generated from: '<S372>/IpEEPvs2MaxValue_Init'
         */
        VeAPSR_U_IpEEETCPvs2MaxValue = 1.2512F;
    }

    /* End of Outputs for SubSystem: '<S363>/Init_EEPROM_Srv' */

    /* DataStoreWrite: '<S38>/Pvs2MinValue_Write' */
    AeAPSR_U_Pvs2MinValue = VeAPSR_U_IpEEETCPvs2MinValue;

    /* DataStoreWrite: '<S38>/Pvs2MaxValue_Write' */
    AeAPSR_U_Pvs2MaxValue = VeAPSR_U_IpEEETCPvs2MaxValue;

    /* RelationalOperator: '<S72>/Comparison3' incorporates:
     *  Constant: '<S90>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     */
    rtb_VariantMerge_For_Variant__e = (((uint32)
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_gi) == CeBRKR_e_BrkTravelSts);

    /* RelationalOperator: '<S72>/Comparison5' incorporates:
     *  RelationalOperator: '<S71>/Justapplied'
     *  RelationalOperator: '<S72>/Comparison1'
     *  RelationalOperator: '<S86>/Comparison2'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     *  Switch: '<S91>/Switch1'
     */
    tmp_1 = APSR_ac_B.TmpSignalConversionAtTmpVM_F_ec;

    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S88>/Constant'
     *  Logic: '<S72>/Logical'
     *  RelationalOperator: '<S72>/Comparison5'
     */
    if ((((uint32)tmp_1) == CeBRKR_e_BrkApplied) &&
            rtb_VariantMerge_For_Variant__e)
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S72>/TRUE Constant'
         */
        VeAPSR_b_BrakeStatus = true;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S89>/Constant'
         *  Logic: '<S72>/Logical1'
         *  RelationalOperator: '<S72>/Comparison1'
         */
        VeAPSR_b_BrakeStatus = ((!rtb_VariantMerge_For_Variant__e) || (((uint32)
            tmp_1) != CeBRKR_e_BrkNotApplied));
    }

    /* Outputs for Enabled SubSystem: '<S138>/Aux_Diagnostic' incorporates:
     *  EnablePort: '<S140>/Enable'
     */
    /* Logic: '<S141>/Logical Operator' incorporates:
     *  Constant: '<S191>/Constant1'
     *  Constant: '<S191>/Constant2'
     *  Constant: '<S192>/Constant1'
     *  Constant: '<S192>/Constant2'
     *  Constant: '<S193>/Constant1'
     *  Constant: '<S193>/Constant2'
     *  Logic: '<S141>/Logical Operator1'
     *  Logic: '<S141>/Logical Operator2'
     *  Logic: '<S141>/Logical Operator3'
     *  Logic: '<S141>/Logical Operator4'
     *  Logic: '<S151>/ '
     *  Logic: '<S191>/Logical Operator'
     *  Logic: '<S192>/Logical Operator'
     *  Logic: '<S193>/Logical Operator'
     *  RelationalOperator: '<S191>/Relational Operator1'
     *  RelationalOperator: '<S191>/Relational Operator2'
     *  RelationalOperator: '<S192>/Relational Operator1'
     *  RelationalOperator: '<S192>/Relational Operator2'
     *  RelationalOperator: '<S193>/Relational Operator1'
     *  RelationalOperator: '<S193>/Relational Operator2'
     */
    if (((((((rtb_andd_tmp <= 0) || (rtb_andd_tmp_0 != 0U)) && ((rtb_andd_tmp_1 <=
              0) || (rtb_andd_tmp_2 != 0U))) && ((rtb_andd_tmp_3 <= 0) ||
            (rtb_andd_tmp_4 != 0U))) && rtb_Logical1) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew))
    {
        /* RelationalOperator: '<S151>/Relational Operator' incorporates:
         *  Constant: '<S149>/Calib'
         */
        VeAPSR_b_RefAuxFailLo = (TmpSignalConversionAtTmpVM_F_p0 <
            KeAPSR_U_Lv1_5VRefAuxMin);

        /* Outputs for Enabled SubSystem: '<S151>/Max_chk' incorporates:
         *  EnablePort: '<S166>/Enable'
         */
        if (!VeAPSR_b_RefAuxFailLo)
        {
            /* RelationalOperator: '<S166>/Relational Operator' incorporates:
             *  Constant: '<S148>/Calib'
             */
            VeAPSR_b_RefAuxFailHi = (TmpSignalConversionAtTmpVM_F_p0 >
                KeAPSR_U_Lv1_5VRefAuxMax);
        }

        /* End of Outputs for SubSystem: '<S151>/Max_chk' */

        /* Logic: '<S157>/Logical5' incorporates:
         *  Logic: '<S151>/ '
         *  Logic: '<S151>/Logical Operator'
         */
        rtb_VariantMerge_For_Variant__e = ((VeAPSR_b_RefAuxFailLo) ||
            (VeAPSR_b_RefAuxFailHi));

        /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
        /* Logic: '<S164>/OR1' incorporates:
         *  UnitDelay: '<S164>/Unit Delay'
         */
        rtb_RelationalOperator3_f = !APSR_ac_DW.UnitDelay_DSTATE_eo;

        /* Update for UnitDelay: '<S164>/Unit Delay' incorporates:
         *  Constant: '<S145>/TRUE Constant'
         */
        APSR_ac_DW.UnitDelay_DSTATE_eo = true;

        /* Switch: '<S145>/Switch' incorporates:
         *  Constant: '<S165>/Calib'
         *  Delay: '<S145>/Integer_Delay'
         *  Logic: '<S164>/AND'
         */
        if (rtb_RelationalOperator3_f)
        {
            rtb_RelationalOperator3_h = KeAPSR_U_RawAux_Init;
        }
        else
        {
            rtb_RelationalOperator3_h = APSR_ac_DW.Integer_Delay_DSTATE_j;
        }

        /* End of Switch: '<S145>/Switch' */
        /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

        /* Sum: '<S145>/Sum2' incorporates:
         *  Constant: '<S145>/Constant Value'
         *  Constant: '<S150>/Calib'
         *  Product: '<S145>/Product'
         *  Product: '<S145>/Product1'
         *  Sum: '<S145>/Sum1'
         */
        VeAPSR_U_Lv15VRefAvg = ((1.0F - KeAPSR_k_Lv1_5VRefAuxFilt) *
                                rtb_RelationalOperator3_h) +
            (TmpSignalConversionAtTmpVM_F_p0 * KeAPSR_k_Lv1_5VRefAuxFilt);

        /* Abs: '<S145>/Abs' incorporates:
         *  Sum: '<S145>/Sum3'
         */
        VeAPSR_U_Lv15VRefAuxErr = fabsf(TmpSignalConversionAtTmpVM_F_p0 -
            VeAPSR_U_Lv15VRefAvg);

        /* Sum: '<S144>/Sum2' incorporates:
         *  Constant: '<S144>/Constant Value'
         *  Constant: '<S150>/Calib'
         *  Product: '<S144>/Product'
         *  Product: '<S144>/Product1'
         *  Sum: '<S144>/Sum1'
         *  UnitDelay: '<S144>/Unit Delay'
         */
        VeAPSR_U_Lv15VRefAuxErrAvg = ((1.0F - KeAPSR_k_Lv1_5VRefAuxFilt) *
            APSR_ac_DW.UnitDelay_DSTATE_i) + (VeAPSR_U_Lv15VRefAuxErr *
            KeAPSR_k_Lv1_5VRefAuxFilt);

        /* Switch: '<S143>/Switch' */
        if (rtb_VariantMerge_For_Variant__e)
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Constant: '<S143>/FALSE Constant'
             */
            VeAPSR_b_RefAuxFailNoisy = false;
        }
        else
        {
            /* Switch: '<S143>/Switch' incorporates:
             *  Constant: '<S163>/Calib'
             *  RelationalOperator: '<S144>/Relational Operator'
             */
            VeAPSR_b_RefAuxFailNoisy = (VeAPSR_U_Lv15VRefAuxErrAvg >=
                KeAPSR_U_LV1_5VRefAuxNoiseMax);
        }

        /* End of Switch: '<S143>/Switch' */

        /* Logic: '<S143>/Logical Operator' */
        VeAPSR_b_Failing5VRefAux = (rtb_VariantMerge_For_Variant__e ||
            (VeAPSR_b_RefAuxFailNoisy));

        /* Logic: '<S157>/Logical5' incorporates:
         *  Logic: '<S140>/OR1'
         */
        rtb_VariantMerge_For_Variant__e =
            ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew) ||
             (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz));

        /* RelationalOperator: '<S155>/Relational Operator3' incorporates:
         *  Constant: '<S155>/Constant3'
         */
        rtb_RelationalOperator3_f = (rtb_andd_tmp_0 == 0U);

        /* Outputs for Atomic SubSystem: '<S155>/EdgeFalling1' */
        /* Logic: '<S188>/AND' incorporates:
         *  Logic: '<S188>/OR1'
         *  UnitDelay: '<S188>/Unit Delay'
         */
        rtb_AND_af = ((!rtb_RelationalOperator3_f) &&
                      (APSR_ac_DW.UnitDelay_DSTATE_cs));

        /* Update for UnitDelay: '<S188>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_cs = rtb_RelationalOperator3_f;

        /* End of Outputs for SubSystem: '<S155>/EdgeFalling1' */

        /* Logic: '<S155>/Logical5' */
        rtb_RelationalOperator3_f = (rtb_VariantMerge_For_Variant__e ||
            rtb_AND_af);

        /* RelationalOperator: '<S156>/Relational Operator3' incorporates:
         *  Constant: '<S156>/Constant3'
         */
        rtb_AND_af = (rtb_andd_tmp_2 == 0U);

        /* Outputs for Atomic SubSystem: '<S156>/EdgeFalling1' */
        /* Logic: '<S189>/AND' incorporates:
         *  Logic: '<S189>/OR1'
         *  UnitDelay: '<S189>/Unit Delay'
         */
        rtb_relOp2_i = ((!rtb_AND_af) && (APSR_ac_DW.UnitDelay_DSTATE_oe4));

        /* Update for UnitDelay: '<S189>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_oe4 = rtb_AND_af;

        /* End of Outputs for SubSystem: '<S156>/EdgeFalling1' */

        /* Logic: '<S156>/Logical5' */
        rtb_AND_af = (rtb_VariantMerge_For_Variant__e || rtb_relOp2_i);

        /* RelationalOperator: '<S157>/Relational Operator3' incorporates:
         *  Constant: '<S157>/Constant3'
         */
        rtb_relOp2_i = (rtb_andd_tmp_4 == 0U);

        /* Outputs for Atomic SubSystem: '<S157>/EdgeFalling1' */
        /* Logic: '<S190>/AND' incorporates:
         *  Logic: '<S190>/OR1'
         *  UnitDelay: '<S190>/Unit Delay'
         */
        rtb_ORR3 = ((!rtb_relOp2_i) && (APSR_ac_DW.UnitDelay_DSTATE_k));

        /* Update for UnitDelay: '<S190>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_k = rtb_relOp2_i;

        /* End of Outputs for SubSystem: '<S157>/EdgeFalling1' */

        /* Logic: '<S157>/Logical5' */
        rtb_VariantMerge_For_Variant__e = (rtb_VariantMerge_For_Variant__e ||
            rtb_ORR3);

        /* Logic: '<S140>/OR2' */
        rtb_relOp2_i = ((rtb_RelationalOperator3_f || rtb_AND_af) ||
                        rtb_VariantMerge_For_Variant__e);

        /* Switch: '<S142>/Switch' incorporates:
         *  Switch: '<S142>/Switch1'
         */
        if (rtb_relOp2_i)
        {
            /* Switch: '<S142>/Switch' incorporates:
             *  Constant: '<S142>/Constant'
             */
            VeAPSR_Cnt_Lv15VRefAuxDbc = 0;
        }
        else
        {
            if (VeAPSR_b_Failing5VRefAux)
            {
                /* Switch: '<S142>/Switch1' incorporates:
                 *  Constant: '<S147>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1_5VRefAuxCntrInc;
            }
            else
            {
                /* Switch: '<S142>/Switch1' incorporates:
                 *  Constant: '<S142>/Constant Value'
                 */
                rtb_Sum1_d = -1;
            }

            /* Sum: '<S142>/Sum2' incorporates:
             *  UnitDelay: '<S142>/Unit Delay'
             */
            rtb_Sum1_d += APSR_ac_DW.UnitDelay_DSTATE_h;

            /* Outputs for Atomic SubSystem: '<S142>/Limiter' */
            /* Switch: '<S161>/Switch1' incorporates:
             *  Constant: '<S142>/Constant Value1'
             *  RelationalOperator: '<S161>/Relational Operator'
             */
            if (250 < rtb_Sum1_d)
            {
                /* Switch: '<S161>/Switch1' */
                rtb_Sum1_d = 250;
            }

            /* End of Switch: '<S161>/Switch1' */

            /* Switch: '<S161>/Switch' incorporates:
             *  Constant: '<S142>/Constant Value2'
             *  RelationalOperator: '<S161>/Relational Operator1'
             */
            if (rtb_Sum1_d > 0)
            {
                /* Switch: '<S142>/Switch' */
                VeAPSR_Cnt_Lv15VRefAuxDbc = rtb_Sum1_d;
            }
            else
            {
                /* Switch: '<S142>/Switch' */
                VeAPSR_Cnt_Lv15VRefAuxDbc = 0;
            }

            /* End of Switch: '<S161>/Switch' */
            /* End of Outputs for SubSystem: '<S142>/Limiter' */
        }

        /* End of Switch: '<S142>/Switch' */

        /* Outputs for Atomic SubSystem: '<S142>/Signal Latch On With Reset' */
        /* Logic: '<S162>/OR1' incorporates:
         *  Constant: '<S146>/Calib'
         *  Logic: '<S162>/NOT'
         *  Logic: '<S162>/OR'
         *  RelationalOperator: '<S142>/Relational Operator1'
         *  UnitDelay: '<S162>/Unit Delay'
         */
        APSR_ac_B.OR1_a = ((VeAPSR_Cnt_Lv15VRefAuxDbc >=
                            KeAPSR_Cnt_LV1_5VRefAuxCntrLim) || ((!rtb_relOp2_i) &&
                            (APSR_ac_DW.UnitDelay_DSTATE_lj)));

        /* Update for UnitDelay: '<S162>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_lj = APSR_ac_B.OR1_a;

        /* End of Outputs for SubSystem: '<S142>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S152>/EdgeFalling1' */
        /* Update for UnitDelay: '<S167>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_af = true;

        /* End of Outputs for SubSystem: '<S152>/EdgeFalling1' */

        /* If: '<S152>/If' incorporates:
         *  Logic: '<S140>/Logical2'
         *  Logic: '<S140>/Logical4'
         *  Logic: '<S152>/Logical5'
         */
        if (rtb_AND_af)
        {
            /* Outputs for IfAction SubSystem: '<S152>/Init' incorporates:
             *  ActionPort: '<S169>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_oq);

            /* End of Outputs for SubSystem: '<S152>/Init' */
        }
        else if (!VeAPSR_b_RefAuxFailLo)
        {
            /* Outputs for IfAction SubSystem: '<S152>/Pass' incorporates:
             *  ActionPort: '<S170>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_oq);

            /* End of Outputs for SubSystem: '<S152>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_a) && (VeAPSR_b_RefAuxFailLo))
            {
                /* Outputs for IfAction SubSystem: '<S152>/Fail' incorporates:
                 *  ActionPort: '<S168>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_oq);

                /* End of Outputs for SubSystem: '<S152>/Fail' */
            }
        }

        /* End of If: '<S152>/If' */

        /* Outputs for Atomic SubSystem: '<S153>/EdgeFalling1' */
        /* Update for UnitDelay: '<S174>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_ov = true;

        /* End of Outputs for SubSystem: '<S153>/EdgeFalling1' */

        /* If: '<S153>/If' incorporates:
         *  Logic: '<S140>/Logical1'
         *  Logic: '<S140>/Logical6'
         *  Logic: '<S153>/Logical5'
         */
        if (rtb_VariantMerge_For_Variant__e)
        {
            /* Outputs for IfAction SubSystem: '<S153>/Init' incorporates:
             *  ActionPort: '<S176>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_or);

            /* End of Outputs for SubSystem: '<S153>/Init' */
        }
        else if (!VeAPSR_b_RefAuxFailHi)
        {
            /* Outputs for IfAction SubSystem: '<S153>/Pass' incorporates:
             *  ActionPort: '<S177>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_or);

            /* End of Outputs for SubSystem: '<S153>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_a) && (VeAPSR_b_RefAuxFailHi))
            {
                /* Outputs for IfAction SubSystem: '<S153>/Fail' incorporates:
                 *  ActionPort: '<S175>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_or);

                /* End of Outputs for SubSystem: '<S153>/Fail' */
            }
        }

        /* End of If: '<S153>/If' */

        /* Outputs for Atomic SubSystem: '<S154>/EdgeFalling1' */
        /* Update for UnitDelay: '<S181>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_lhj = true;

        /* End of Outputs for SubSystem: '<S154>/EdgeFalling1' */

        /* If: '<S154>/If' incorporates:
         *  Logic: '<S140>/Logical3'
         *  Logic: '<S140>/Logical5'
         *  Logic: '<S154>/Logical5'
         */
        if (rtb_RelationalOperator3_f)
        {
            /* Outputs for IfAction SubSystem: '<S154>/Init' incorporates:
             *  ActionPort: '<S183>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_p);

            /* End of Outputs for SubSystem: '<S154>/Init' */
        }
        else if (!VeAPSR_b_RefAuxFailNoisy)
        {
            /* Outputs for IfAction SubSystem: '<S154>/Pass' incorporates:
             *  ActionPort: '<S184>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_p);

            /* End of Outputs for SubSystem: '<S154>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_a) && (VeAPSR_b_RefAuxFailNoisy))
            {
                /* Outputs for IfAction SubSystem: '<S154>/Fail' incorporates:
                 *  ActionPort: '<S182>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_p);

                /* End of Outputs for SubSystem: '<S154>/Fail' */
            }
        }

        /* End of If: '<S154>/If' */

        /* Update for UnitDelay: '<S142>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_h = VeAPSR_Cnt_Lv15VRefAuxDbc;

        /* Update for Delay: '<S145>/Integer_Delay' */
        APSR_ac_DW.Integer_Delay_DSTATE_j = VeAPSR_U_Lv15VRefAvg;

        /* Update for UnitDelay: '<S144>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_i = VeAPSR_U_Lv15VRefAuxErrAvg;
    }

    /* End of Logic: '<S141>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S138>/Aux_Diagnostic' */

    /* Logic: '<S42>/Any Level 1 PV1 Failure' */
    rtb_VariantMerge_For_Variant__e = ((APSR_ac_B.OR1_p) || (APSR_ac_B.OR1_a));

    /* Outputs for Enabled SubSystem: '<S139>/Out_Diagnostic' incorporates:
     *  EnablePort: '<S195>/Enable'
     */
    /* Logic: '<S194>/Logical Operator2' incorporates:
     *  Constant: '<S196>/Constant1'
     *  Constant: '<S196>/Constant2'
     *  Constant: '<S197>/Constant1'
     *  Constant: '<S197>/Constant2'
     *  Constant: '<S198>/Constant1'
     *  Constant: '<S198>/Constant2'
     *  Logic: '<S194>/Logical Operator'
     *  Logic: '<S194>/Logical Operator1'
     *  Logic: '<S194>/Logical Operator3'
     *  Logic: '<S194>/Logical Operator4'
     *  Logic: '<S196>/Logical Operator'
     *  Logic: '<S197>/Logical Operator'
     *  Logic: '<S198>/Logical Operator'
     *  Logic: '<S203>/Logical_Operator_NOT'
     *  RelationalOperator: '<S196>/Relational Operator1'
     *  RelationalOperator: '<S196>/Relational Operator2'
     *  RelationalOperator: '<S197>/Relational Operator1'
     *  RelationalOperator: '<S197>/Relational Operator2'
     *  RelationalOperator: '<S198>/Relational Operator1'
     *  RelationalOperator: '<S198>/Relational Operator2'
     */
    if (((((((i <= 0) || (rtb_Logical2_o_tmp != 0U)) && ((rtb_Logical2_o_tmp_0 <=
              0) || (rtb_Logical2_o_tmp_1 != 0U))) && ((rtb_Logical2_o_tmp_2 <=
             0) || (rtb_Logical2_o_tmp_3 != 0U))) && rtb_Logical1) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew))
    {
        /* RelationalOperator: '<S203>/Relational Operator' incorporates:
         *  Constant: '<S207>/Calib'
         */
        VeAPSR_b_RefOutFailLo = (TmpSignalConversionAtTmpVM_Fc_a <
            KeAPSR_U_Lv1_5VRefOutMin);

        /* Outputs for Enabled SubSystem: '<S203>/Max_chk' incorporates:
         *  EnablePort: '<S223>/Enable'
         */
        if (!VeAPSR_b_RefOutFailLo)
        {
            /* RelationalOperator: '<S223>/Relational Operator' incorporates:
             *  Constant: '<S206>/Calib'
             */
            VeAPSR_b_RefOutFailHi = (TmpSignalConversionAtTmpVM_Fc_a >
                KeAPSR_U_Lv1_5VRefOutMax);
        }

        /* End of Outputs for SubSystem: '<S203>/Max_chk' */

        /* Logic: '<S214>/Logical5' incorporates:
         *  Logic: '<S203>/Logical_Operator'
         *  Logic: '<S203>/Logical_Operator_NOT'
         */
        rtb_RelationalOperator3_f = ((VeAPSR_b_RefOutFailLo) ||
            (VeAPSR_b_RefOutFailHi));

        /* Outputs for Atomic SubSystem: '<S202>/EdgeRising' */
        /* Logic: '<S221>/OR1' incorporates:
         *  UnitDelay: '<S221>/Unit Delay'
         */
        rtb_AND_af = !APSR_ac_DW.UnitDelay_DSTATE_ev;

        /* Update for UnitDelay: '<S221>/Unit Delay' incorporates:
         *  Constant: '<S202>/TRUE Constant'
         */
        APSR_ac_DW.UnitDelay_DSTATE_ev = true;

        /* Switch: '<S202>/Switch' incorporates:
         *  Constant: '<S222>/Calib'
         *  Delay: '<S202>/Integer_Delay'
         *  Logic: '<S221>/AND'
         */
        if (rtb_AND_af)
        {
            TmpSignalConversionAtTmpVM_F_p0 = KeAPSR_U_RawOut_Init;
        }
        else
        {
            TmpSignalConversionAtTmpVM_F_p0 = APSR_ac_DW.Integer_Delay_DSTATE;
        }

        /* End of Switch: '<S202>/Switch' */
        /* End of Outputs for SubSystem: '<S202>/EdgeRising' */

        /* Sum: '<S202>/Sum2' incorporates:
         *  Constant: '<S202>/Constant Value'
         *  Constant: '<S208>/Calib'
         *  Product: '<S202>/Product'
         *  Product: '<S202>/Product1'
         *  Sum: '<S202>/Sum1'
         */
        VeAPSR_U_Lv15VRefOutAvg = ((1.0F - KeAPSR_k_Lv1_5VRefOutFilt) *
            TmpSignalConversionAtTmpVM_F_p0) + (TmpSignalConversionAtTmpVM_Fc_a *
            KeAPSR_k_Lv1_5VRefOutFilt);

        /* Abs: '<S202>/Abs' incorporates:
         *  Sum: '<S202>/Sum3'
         */
        VeAPSR_U_Lv15VRefOutErr = fabsf(TmpSignalConversionAtTmpVM_Fc_a -
            VeAPSR_U_Lv15VRefOutAvg);

        /* Sum: '<S201>/Sum2' incorporates:
         *  Constant: '<S201>/Constant Value'
         *  Constant: '<S208>/Calib'
         *  Product: '<S201>/Product'
         *  Product: '<S201>/Product1'
         *  Sum: '<S201>/Sum1'
         *  UnitDelay: '<S201>/Unit Delay'
         */
        VeAPSR_U_Lv15VRefOutErrAvg = ((1.0F - KeAPSR_k_Lv1_5VRefOutFilt) *
            APSR_ac_DW.UnitDelay_DSTATE_a) + (VeAPSR_U_Lv15VRefOutErr *
            KeAPSR_k_Lv1_5VRefOutFilt);

        /* Switch: '<S200>/Switch' */
        if (rtb_RelationalOperator3_f)
        {
            /* Switch: '<S200>/Switch' incorporates:
             *  Constant: '<S200>/FALSE Constant'
             */
            VeAPSR_b_RefOutFailNoisy = false;
        }
        else
        {
            /* Switch: '<S200>/Switch' incorporates:
             *  Constant: '<S220>/Calib'
             *  RelationalOperator: '<S201>/Relational Operator'
             */
            VeAPSR_b_RefOutFailNoisy = (VeAPSR_U_Lv15VRefOutErrAvg >=
                KeAPSR_U_LV1_5VRefOutNoiseMax);
        }

        /* End of Switch: '<S200>/Switch' */

        /* Logic: '<S200>/Logical Operator' */
        VeAPSR_b_Failing5VRefOut = (rtb_RelationalOperator3_f ||
            (VeAPSR_b_RefOutFailNoisy));

        /* Logic: '<S214>/Logical5' incorporates:
         *  Logic: '<S195>/OR1'
         */
        rtb_RelationalOperator3_f = ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew)
            || (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz));

        /* RelationalOperator: '<S212>/Relational Operator3' incorporates:
         *  Constant: '<S212>/Constant3'
         */
        rtb_AND_af = (rtb_Logical2_o_tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S212>/EdgeFalling1' */
        /* Logic: '<S245>/AND' incorporates:
         *  Logic: '<S245>/OR1'
         *  UnitDelay: '<S245>/Unit Delay'
         */
        rtb_relOp2_i = ((!rtb_AND_af) && (APSR_ac_DW.UnitDelay_DSTATE_ga));

        /* Update for UnitDelay: '<S245>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_ga = rtb_AND_af;

        /* End of Outputs for SubSystem: '<S212>/EdgeFalling1' */

        /* Logic: '<S212>/Logical5' */
        rtb_AND_af = (rtb_RelationalOperator3_f || rtb_relOp2_i);

        /* RelationalOperator: '<S213>/Relational Operator3' incorporates:
         *  Constant: '<S213>/Constant3'
         */
        rtb_relOp2_i = (rtb_Logical2_o_tmp_1 == 0U);

        /* Outputs for Atomic SubSystem: '<S213>/EdgeFalling1' */
        /* Logic: '<S246>/AND' incorporates:
         *  Logic: '<S246>/OR1'
         *  UnitDelay: '<S246>/Unit Delay'
         */
        rtb_ORR3 = ((!rtb_relOp2_i) && (APSR_ac_DW.UnitDelay_DSTATE_bd));

        /* Update for UnitDelay: '<S246>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_bd = rtb_relOp2_i;

        /* End of Outputs for SubSystem: '<S213>/EdgeFalling1' */

        /* Logic: '<S213>/Logical5' */
        rtb_relOp2_i = (rtb_RelationalOperator3_f || rtb_ORR3);

        /* RelationalOperator: '<S214>/Relational Operator3' incorporates:
         *  Constant: '<S214>/Constant3'
         */
        rtb_ORR3 = (rtb_Logical2_o_tmp_3 == 0U);

        /* Outputs for Atomic SubSystem: '<S214>/EdgeFalling1' */
        /* Logic: '<S247>/AND' incorporates:
         *  Logic: '<S247>/OR1'
         *  UnitDelay: '<S247>/Unit Delay'
         */
        rtb_AND_eb = ((!rtb_ORR3) && (APSR_ac_DW.UnitDelay_DSTATE_lf));

        /* Update for UnitDelay: '<S247>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_lf = rtb_ORR3;

        /* End of Outputs for SubSystem: '<S214>/EdgeFalling1' */

        /* Logic: '<S214>/Logical5' */
        rtb_RelationalOperator3_f = (rtb_RelationalOperator3_f || rtb_AND_eb);

        /* Logic: '<S195>/OR2' */
        rtb_ORR3 = ((rtb_AND_af || rtb_relOp2_i) || rtb_RelationalOperator3_f);

        /* Switch: '<S199>/Switch' incorporates:
         *  Switch: '<S199>/Switch1'
         */
        if (rtb_ORR3)
        {
            /* Switch: '<S199>/Switch' incorporates:
             *  Constant: '<S199>/Constant'
             */
            VeAPSR_Cnt_Lv15VRefOutDbc = 0;
        }
        else
        {
            if (VeAPSR_b_Failing5VRefOut)
            {
                /* Switch: '<S199>/Switch1' incorporates:
                 *  Constant: '<S205>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1_5VRefOutCntrInc;
            }
            else
            {
                /* Switch: '<S199>/Switch1' incorporates:
                 *  Constant: '<S199>/Constant Value'
                 */
                rtb_Sum1_d = -1;
            }

            /* Sum: '<S199>/Sum2' incorporates:
             *  UnitDelay: '<S199>/Unit Delay'
             */
            rtb_Sum1_d += APSR_ac_DW.UnitDelay_DSTATE_i0;

            /* Outputs for Atomic SubSystem: '<S199>/Limiter' */
            /* Switch: '<S218>/Switch1' incorporates:
             *  Constant: '<S199>/Constant Value1'
             *  RelationalOperator: '<S218>/Relational Operator'
             */
            if (250 < rtb_Sum1_d)
            {
                /* Switch: '<S218>/Switch1' */
                rtb_Sum1_d = 250;
            }

            /* End of Switch: '<S218>/Switch1' */

            /* Switch: '<S218>/Switch' incorporates:
             *  Constant: '<S199>/Constant Value2'
             *  RelationalOperator: '<S218>/Relational Operator1'
             */
            if (rtb_Sum1_d > 0)
            {
                /* Switch: '<S199>/Switch' */
                VeAPSR_Cnt_Lv15VRefOutDbc = rtb_Sum1_d;
            }
            else
            {
                /* Switch: '<S199>/Switch' */
                VeAPSR_Cnt_Lv15VRefOutDbc = 0;
            }

            /* End of Switch: '<S218>/Switch' */
            /* End of Outputs for SubSystem: '<S199>/Limiter' */
        }

        /* End of Switch: '<S199>/Switch' */

        /* Outputs for Atomic SubSystem: '<S199>/Signal Latch On With Reset' */
        /* Logic: '<S219>/OR1' incorporates:
         *  Constant: '<S204>/Calib'
         *  Logic: '<S219>/NOT'
         *  Logic: '<S219>/OR'
         *  RelationalOperator: '<S199>/Relational Operator1'
         *  UnitDelay: '<S219>/Unit Delay'
         */
        APSR_ac_B.OR1_m = ((VeAPSR_Cnt_Lv15VRefOutDbc >=
                            KeAPSR_Cnt_LV1_5VRefOutCntrLim) || ((!rtb_ORR3) &&
                            (APSR_ac_DW.UnitDelay_DSTATE_nx)));

        /* Update for UnitDelay: '<S219>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_nx = APSR_ac_B.OR1_m;

        /* End of Outputs for SubSystem: '<S199>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S209>/EdgeFalling1' */
        /* Update for UnitDelay: '<S224>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_c1 = true;

        /* End of Outputs for SubSystem: '<S209>/EdgeFalling1' */

        /* If: '<S209>/If' incorporates:
         *  Logic: '<S195>/Logical1'
         *  Logic: '<S195>/Logical7'
         *  Logic: '<S209>/Logical5'
         */
        if (rtb_AND_af)
        {
            /* Outputs for IfAction SubSystem: '<S209>/Init' incorporates:
             *  ActionPort: '<S226>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_o);

            /* End of Outputs for SubSystem: '<S209>/Init' */
        }
        else if (!VeAPSR_b_RefOutFailNoisy)
        {
            /* Outputs for IfAction SubSystem: '<S209>/Pass' incorporates:
             *  ActionPort: '<S227>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_o);

            /* End of Outputs for SubSystem: '<S209>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_m) && (VeAPSR_b_RefOutFailNoisy))
            {
                /* Outputs for IfAction SubSystem: '<S209>/Fail' incorporates:
                 *  ActionPort: '<S225>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_o);

                /* End of Outputs for SubSystem: '<S209>/Fail' */
            }
        }

        /* End of If: '<S209>/If' */

        /* Outputs for Atomic SubSystem: '<S210>/EdgeFalling1' */
        /* Update for UnitDelay: '<S231>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_p2 = true;

        /* End of Outputs for SubSystem: '<S210>/EdgeFalling1' */

        /* If: '<S210>/If' incorporates:
         *  Logic: '<S195>/Logical3'
         *  Logic: '<S195>/Logical8'
         *  Logic: '<S210>/Logical5'
         */
        if (rtb_RelationalOperator3_f)
        {
            /* Outputs for IfAction SubSystem: '<S210>/Init' incorporates:
             *  ActionPort: '<S233>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_lk);

            /* End of Outputs for SubSystem: '<S210>/Init' */
        }
        else if (!VeAPSR_b_RefOutFailHi)
        {
            /* Outputs for IfAction SubSystem: '<S210>/Pass' incorporates:
             *  ActionPort: '<S234>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_lk);

            /* End of Outputs for SubSystem: '<S210>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_m) && (VeAPSR_b_RefOutFailHi))
            {
                /* Outputs for IfAction SubSystem: '<S210>/Fail' incorporates:
                 *  ActionPort: '<S232>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_lk);

                /* End of Outputs for SubSystem: '<S210>/Fail' */
            }
        }

        /* End of If: '<S210>/If' */

        /* Outputs for Atomic SubSystem: '<S211>/EdgeFalling1' */
        /* Update for UnitDelay: '<S238>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_j0 = true;

        /* End of Outputs for SubSystem: '<S211>/EdgeFalling1' */

        /* If: '<S211>/If' incorporates:
         *  Logic: '<S195>/Logical2'
         *  Logic: '<S195>/Logical4'
         *  Logic: '<S211>/Logical5'
         */
        if (rtb_relOp2_i)
        {
            /* Outputs for IfAction SubSystem: '<S211>/Init' incorporates:
             *  ActionPort: '<S240>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_ct);

            /* End of Outputs for SubSystem: '<S211>/Init' */
        }
        else if (!VeAPSR_b_RefOutFailLo)
        {
            /* Outputs for IfAction SubSystem: '<S211>/Pass' incorporates:
             *  ActionPort: '<S241>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_ct);

            /* End of Outputs for SubSystem: '<S211>/Pass' */
        }
        else
        {
            if ((APSR_ac_B.OR1_m) && (VeAPSR_b_RefOutFailLo))
            {
                /* Outputs for IfAction SubSystem: '<S211>/Fail' incorporates:
                 *  ActionPort: '<S239>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_ct);

                /* End of Outputs for SubSystem: '<S211>/Fail' */
            }
        }

        /* End of If: '<S211>/If' */

        /* Update for UnitDelay: '<S199>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_i0 = VeAPSR_Cnt_Lv15VRefOutDbc;

        /* Update for Delay: '<S202>/Integer_Delay' */
        APSR_ac_DW.Integer_Delay_DSTATE = VeAPSR_U_Lv15VRefOutAvg;

        /* Update for UnitDelay: '<S201>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_a = VeAPSR_U_Lv15VRefOutErrAvg;
    }

    /* End of Logic: '<S194>/Logical Operator2' */
    /* End of Outputs for SubSystem: '<S139>/Out_Diagnostic' */

    /* Logic: '<S42>/Any Level 1 PV2 Failure' */
    rtb_RelationalOperator3_f = ((APSR_ac_B.OR1) || (APSR_ac_B.OR1_m));

    /* Logic: '<S42>/LV1_PV_FAIL_BRK_ON' incorporates:
     *  Logic: '<S42>/Any Level 1 PV Failure'
     */
    VeAPSR_b_Lv1PvFailBrkOn = ((VeAPSR_b_BrakeStatus) && ((rtb_FixPtUnitDelay2 ||
        rtb_VariantMerge_For_Variant__e) || rtb_RelationalOperator3_f));

    /* Chart: '<S42>/Mode_Detection' */
    /* Gateway: APSR_FastTEF/APSC_FUNC/PVS_Mode_Detection/Mode_Detection */
    /* During: APSR_FastTEF/APSC_FUNC/PVS_Mode_Detection/Mode_Detection */
    /* Entry Internal: APSR_FastTEF/APSC_FUNC/PVS_Mode_Detection/Mode_Detection */
    /* Transition: '<S472>:1' */
    /* Transition: '<S472>:2' */
    if (((!rtb_VariantMerge_For_Variant__e) && (!rtb_RelationalOperator3_f)) &&
            (!rtb_FixPtUnitDelay2))
    {
        /* Transition: '<S472>:3' */
        /* Transition: '<S472>:5' */
        VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_PVOk;

        /* Transition: '<S472>:46' */
        /* Transition: '<S472>:45' */
        /* Transition: '<S472>:44' */
        /* Transition: '<S472>:43' */
        /* Transition: '<S472>:42' */
        /* Transition: '<S472>:41' */
        /* Transition: '<S472>:40' */
        /* Transition: '<S472>:39' */
        /* Transition: '<S472>:38' */
        /* Transition: '<S472>:47' */
    }
    else
    {
        /* Transition: '<S472>:4' */
        if (rtb_FixPtUnitDelay2)
        {
            /* Transition: '<S472>:6' */
            /* Transition: '<S472>:8' */
            VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_CohFail;
            if (rtb_RelationalOperator3_f)
            {
                /* Transition: '<S472>:12' */
                /* Transition: '<S472>:15' */
                VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_PV2Fail;
                if (rtb_VariantMerge_For_Variant__e)
                {
                    /* Transition: '<S472>:22' */
                    /* Transition: '<S472>:27' */
                    VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_NotValid;

                    /* Transition: '<S472>:45' */
                    /* Transition: '<S472>:44' */
                    /* Transition: '<S472>:43' */
                    /* Transition: '<S472>:42' */
                    /* Transition: '<S472>:41' */
                    /* Transition: '<S472>:40' */
                    /* Transition: '<S472>:39' */
                    /* Transition: '<S472>:38' */
                    /* Transition: '<S472>:47' */
                }
                else
                {
                    /* Transition: '<S472>:26' */
                    /* Transition: '<S472>:44' */
                    /* Transition: '<S472>:43' */
                    /* Transition: '<S472>:42' */
                    /* Transition: '<S472>:41' */
                    /* Transition: '<S472>:40' */
                    /* Transition: '<S472>:39' */
                    /* Transition: '<S472>:38' */
                    /* Transition: '<S472>:47' */
                }
            }
            else
            {
                /* Transition: '<S472>:14' */
                if (rtb_VariantMerge_For_Variant__e)
                {
                    /* Transition: '<S472>:23' */
                    /* Transition: '<S472>:29' */
                    VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_PV1Fail;

                    /* Transition: '<S472>:43' */
                    /* Transition: '<S472>:42' */
                    /* Transition: '<S472>:41' */
                    /* Transition: '<S472>:40' */
                    /* Transition: '<S472>:39' */
                    /* Transition: '<S472>:38' */
                    /* Transition: '<S472>:47' */
                }
                else
                {
                    /* Transition: '<S472>:28' */
                    /* Transition: '<S472>:42' */
                    /* Transition: '<S472>:41' */
                    /* Transition: '<S472>:40' */
                    /* Transition: '<S472>:39' */
                    /* Transition: '<S472>:38' */
                    /* Transition: '<S472>:47' */
                }
            }
        }
        else
        {
            /* Transition: '<S472>:7' */
            if (rtb_RelationalOperator3_f)
            {
                /* Transition: '<S472>:9' */
                /* Transition: '<S472>:11' */
                VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_PV2Fail;

                /* Transition: '<S472>:19' */
                if (rtb_VariantMerge_For_Variant__e)
                {
                    /* Transition: '<S472>:30' */
                    /* Transition: '<S472>:31' */
                    VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_NotValid;

                    /* Transition: '<S472>:39' */
                    /* Transition: '<S472>:38' */
                    /* Transition: '<S472>:47' */
                }
                else
                {
                    /* Transition: '<S472>:32' */
                    /* Transition: '<S472>:38' */
                    /* Transition: '<S472>:47' */
                }
            }
            else
            {
                /* Transition: '<S472>:10' */
                if (rtb_VariantMerge_For_Variant__e)
                {
                    /* Transition: '<S472>:13' */
                    /* Transition: '<S472>:16' */
                    VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_PV1Fail;

                    /* Transition: '<S472>:24' */
                    /* Transition: '<S472>:37' */
                    /* Transition: '<S472>:47' */
                }
                else
                {
                    /* Transition: '<S472>:17' */
                }
            }
        }
    }

    /* End of Chart: '<S42>/Mode_Detection' */

    /* Switch: '<S42>/switch' */
    /* Transition: '<S472>:48' */
    if (VeAPSR_b_Lv1PvFailBrkOn)
    {
        /* Switch: '<S42>/switch' incorporates:
         *  Constant: '<S32>/Calib'
         */
        VeAPSR_e_Lv1PvFieldMode = KeAPSR_e_Lv1PvIdleModeValue;
    }
    else
    {
        /* Switch: '<S42>/switch' */
        VeAPSR_e_Lv1PvFieldMode = VeAPSR_e_Lv1_Pvmode;
    }

    /* End of Switch: '<S42>/switch' */

    /* RelationalOperator: '<S47>/Comparison4' incorporates:
     *  RelationalOperator: '<S47>/Comparison1'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     */
    rtb_ORR3_tmp = APSR_ac_B.TmpSignalConversionAtTmpVM_F_bv;

    /* Logic: '<S47>/ORR3' incorporates:
     *  Constant: '<S544>/Constant'
     *  Constant: '<S545>/Constant'
     *  RelationalOperator: '<S47>/Comparison1'
     *  RelationalOperator: '<S47>/Comparison4'
     */
    rtb_ORR3 = ((CeTRGR_e_TransRangeNeutral == ((uint32)rtb_ORR3_tmp)) ||
                (((uint32)rtb_ORR3_tmp) == CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S380>/EdgeFalling1' */
    /* Update for UnitDelay: '<S416>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_oa = true;

    /* End of Outputs for SubSystem: '<S380>/EdgeFalling1' */

    /* If: '<S380>/If' incorporates:
     *  Logic: '<S363>/NOT2'
     *  Logic: '<S380>/Logical5'
     */
    if (rtb_RelationalOperator3_ht)
    {
        /* Outputs for IfAction SubSystem: '<S380>/Init' incorporates:
         *  ActionPort: '<S418>/Action Port'
         */
        APSR_ac_Init_j(&APSR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S380>/Init' */
    }
    else if (!rtb_nott2)
    {
        /* Outputs for IfAction SubSystem: '<S380>/Pass' incorporates:
         *  ActionPort: '<S419>/Action Port'
         */
        APSR_ac_Pass(&APSR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S380>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S380>/Fail' incorporates:
         *  ActionPort: '<S417>/Action Port'
         */
        APSR_ac_Fail(&APSR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S380>/Fail' */
    }

    /* End of If: '<S380>/If' */

    /* RelationalOperator: '<S363>/Relational Operator1' incorporates:
     *  Constant: '<S369>/Constant'
     *  Merge: '<S380>/Merge'
     */
    rtb_RelationalOperator3_ht = (((uint32)APSR_ac_B.Merge) == CeDFIB_e_Fail);

    /* Outputs for Atomic SubSystem: '<S381>/EdgeFalling1' */
    /* RelationalOperator: '<S86>/relOp2' incorporates:
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_relOp2_i = APSR_ac_DW.UnitDelay_DSTATE_lw;

    /* Update for UnitDelay: '<S423>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_lw = true;

    /* End of Outputs for SubSystem: '<S381>/EdgeFalling1' */

    /* If: '<S381>/If' incorporates:
     *  Logic: '<S363>/NOT4'
     *  Logic: '<S381>/Logical5'
     */
    if (rtb_VariantMerge_For_Variant__f)
    {
        /* Outputs for IfAction SubSystem: '<S381>/Init' incorporates:
         *  ActionPort: '<S425>/Action Port'
         */
        APSR_ac_Init_j(&APSR_ac_B.Merge_c);

        /* End of Outputs for SubSystem: '<S381>/Init' */
    }
    else if (!rtb_AND_nc)
    {
        /* Outputs for IfAction SubSystem: '<S381>/Pass' incorporates:
         *  ActionPort: '<S426>/Action Port'
         */
        APSR_ac_Pass(&APSR_ac_B.Merge_c);

        /* End of Outputs for SubSystem: '<S381>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S381>/Fail' incorporates:
         *  ActionPort: '<S424>/Action Port'
         */
        APSR_ac_Fail(&APSR_ac_B.Merge_c);

        /* End of Outputs for SubSystem: '<S381>/Fail' */
    }

    /* End of If: '<S381>/If' */

    /* RelationalOperator: '<S363>/Relational Operator2' incorporates:
     *  Constant: '<S370>/Constant'
     *  Merge: '<S381>/Merge'
     */
    rtb_VariantMerge_For_Variant__f = (((uint32)APSR_ac_B.Merge_c) ==
        CeDFIB_e_Fail);

    /* Switch: '<S47>/SwitchHH' incorporates:
     *  Constant: '<S546>/Calib'
     *  Constant: '<S547>/Calib'
     *  Logic: '<S47>/AND'
     *  Logic: '<S47>/ANDD2'
     *  Logic: '<S47>/OR2'
     *  Logic: '<S47>/OR3'
     *  Logic: '<S47>/ORR'
     *  UnitDelay: '<S363>/Unit Delay3'
     */
    if ((((VeAPSI_b_IpEEIsInPlantMode) && rtb_ORR3) && (KeAPSR_b_PRNDSel)) ||
            ((TmpSignalConversionAtTmpVM_F_hr || (APSR_ac_DW.UnitDelay3_DSTATE))
             || ((((rtb_OR1_ld || rtb_AND_oe) || rtb_RelationalOperator3_ht) ||
                  rtb_VariantMerge_For_Variant__f) && (KeAPSR_b_EnbPdlFaultCond))))
    {
        /* Switch: '<S47>/SwitchHH' incorporates:
         *  Constant: '<S32>/Calib'
         */
        rtb_SwitchHH = KeAPSR_e_Lv1PvIdleModeValue;
    }
    else
    {
        /* Switch: '<S47>/SwitchHH' incorporates:
         *  Constant: '<S542>/Constant'
         */
        rtb_SwitchHH = CeAPSR_e_LV1PVMode_PVOk;
    }

    /* End of Switch: '<S47>/SwitchHH' */

    /* Switch: '<S47>/SwitchHHH' */
    if (VeAPSI_b_IpEEIsInPlantMode)
    {
        /* Switch: '<S47>/SwitchHHH' incorporates:
         *  Constant: '<S548>/Calib'
         */
        rtb_SwitchHHH = KeAPSR_e_Lv1PVIPMode;
    }
    else
    {
        /* Switch: '<S47>/SwitchHHH' incorporates:
         *  Constant: '<S543>/Constant'
         */
        rtb_SwitchHHH = CeAPSR_e_LV1PVMode_PVOk;
    }

    /* End of Switch: '<S47>/SwitchHHH' */

    /* Chart: '<S47>/Max_Chart' incorporates:
     *  Switch: '<S47>/SwitchHH'
     */
    /* Gateway: APSR_FastTEF/APSC_FUNC/Pedal_Position_Mode_Detection_IP_Service/Max_Chart */
    /* During: APSR_FastTEF/APSC_FUNC/Pedal_Position_Mode_Detection_IP_Service/Max_Chart */
    /* Entry Internal: APSR_FastTEF/APSC_FUNC/Pedal_Position_Mode_Detection_IP_Service/Max_Chart */
    /* Transition: '<S549>:34' */
    if ((((uint32)rtb_SwitchHH) == CeAPSR_e_LV1PVMode_NotValid) || (((uint32)
            rtb_SwitchHHH) == CeAPSR_e_LV1PVMode_NotValid))
    {
        /* Transition: '<S549>:36' */
        /* Transition: '<S549>:38' */
        VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_NotValid;
    }
    else
    {
        /* Transition: '<S549>:40' */
        if ((((uint32)rtb_SwitchHH) == CeAPSR_e_LV1PVMode_CohFail) || (((uint32)
                rtb_SwitchHHH) == CeAPSR_e_LV1PVMode_CohFail))
        {
            /* Transition: '<S549>:42' */
            /* Transition: '<S549>:44' */
            VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_CohFail;
        }
        else
        {
            /* Transition: '<S549>:47' */
            if ((((uint32)rtb_SwitchHH) == CeAPSR_e_LV1PVMode_PV1Fail) ||
                    (((uint32)rtb_SwitchHHH) == CeAPSR_e_LV1PVMode_PV1Fail))
            {
                /* Transition: '<S549>:49' */
                /* Transition: '<S549>:51' */
                VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_PV1Fail;
            }
            else
            {
                /* Transition: '<S549>:54' */
                if ((((uint32)rtb_SwitchHH) == CeAPSR_e_LV1PVMode_PV2Fail) ||
                        (((uint32)rtb_SwitchHHH) == CeAPSR_e_LV1PVMode_PV2Fail))
                {
                    /* Transition: '<S549>:56' */
                    /* Transition: '<S549>:58' */
                    VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_PV2Fail;
                }
                else
                {
                    /* Transition: '<S549>:61' */
                    VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_PVOk;

                    /* Transition: '<S549>:63' */
                }

                /* Transition: '<S549>:60' */
            }

            /* Transition: '<S549>:53' */
        }

        /* Transition: '<S549>:46' */
    }

    /* End of Chart: '<S47>/Max_Chart' */

    /* Chart: '<S49>/Max_Chart' incorporates:
     *  Switch: '<S42>/switch'
     */
    /* Gateway: APSR_FastTEF/APSC_FUNC/Subsystem/Max_Chart */
    /* During: APSR_FastTEF/APSC_FUNC/Subsystem/Max_Chart */
    /* Entry Internal: APSR_FastTEF/APSC_FUNC/Subsystem/Max_Chart */
    /* Transition: '<S552>:34' */
    if ((((uint32)VeAPSR_e_Lv1PvFieldMode) == CeAPSR_e_LV1PVMode_NotValid) ||
            (((uint32)VeAPSR_e_Lv1_IP_MODE) == CeAPSR_e_LV1PVMode_NotValid))
    {
        /* Transition: '<S552>:36' */
        /* Transition: '<S552>:38' */
        rtb_SwitchHH = CeAPSR_e_LV1PVMode_NotValid;
    }
    else
    {
        /* Transition: '<S552>:40' */
        if ((((uint32)VeAPSR_e_Lv1PvFieldMode) == CeAPSR_e_LV1PVMode_CohFail) ||
            (((uint32)VeAPSR_e_Lv1_IP_MODE) == CeAPSR_e_LV1PVMode_CohFail))
        {
            /* Transition: '<S552>:42' */
            /* Transition: '<S552>:44' */
            rtb_SwitchHH = CeAPSR_e_LV1PVMode_CohFail;
        }
        else
        {
            /* Transition: '<S552>:47' */
            if ((((uint32)VeAPSR_e_Lv1PvFieldMode) == CeAPSR_e_LV1PVMode_PV1Fail)
                || (((uint32)VeAPSR_e_Lv1_IP_MODE) == CeAPSR_e_LV1PVMode_PV1Fail))
            {
                /* Transition: '<S552>:49' */
                /* Transition: '<S552>:51' */
                rtb_SwitchHH = CeAPSR_e_LV1PVMode_PV1Fail;
            }
            else
            {
                /* Transition: '<S552>:54' */
                if ((((uint32)VeAPSR_e_Lv1PvFieldMode) ==
                        CeAPSR_e_LV1PVMode_PV2Fail) || (((uint32)
                        VeAPSR_e_Lv1_IP_MODE) == CeAPSR_e_LV1PVMode_PV2Fail))
                {
                    /* Transition: '<S552>:56' */
                    /* Transition: '<S552>:58' */
                    rtb_SwitchHH = CeAPSR_e_LV1PVMode_PV2Fail;
                }
                else
                {
                    /* Transition: '<S552>:61' */
                    rtb_SwitchHH = CeAPSR_e_LV1PVMode_PVOk;

                    /* Transition: '<S552>:63' */
                }

                /* Transition: '<S552>:60' */
            }

            /* Transition: '<S552>:53' */
        }

        /* Transition: '<S552>:46' */
    }

    /* UnitDelay: '<S80>/PrevValue' */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    /* UnitDelay: '<S80>/PrevValue' */
    VeAPSR_U_Lv1PVBrkDelPVS_New = APSR_ac_DW.PrevValue_DSTATE;

#endif

    /* End of UnitDelay: '<S80>/PrevValue' */

    /* Logic: '<S73>/NOT' incorporates:
     *  Logic: '<S26>/freeze pvs'
     *  UnitDelay: '<S72>/OLD_VALUE2'
     */
    rtb_AND_af = !APSR_ac_DW.OLD_VALUE2_DSTATE;

    /* Logic: '<S73>/BRAKE_TRANSITION_ON' incorporates:
     *  Logic: '<S73>/AND'
     *  Logic: '<S73>/NOT'
     *  RelationalOperator: '<S71>/Justapplied'
     *  UnitDelay: '<S71>/OLD_VALUE3'
     *  UnitDelay: '<S73>/OLD_VALUE'
     */
    VeAPSR_b_BrkTransitionOn = ((tmp_1 > APSR_ac_DW.OLD_VALUE3_DSTATE) ||
        (rtb_AND_af && (APSR_ac_DW.OLD_VALUE_DSTATE_b)));

    /* RelationalOperator: '<S86>/Comparison2' incorporates:
     *  Constant: '<S118>/Constant'
     */
    rtb_AND_eb = (((uint32)tmp_1) != CeBRKR_e_UNKNOWN);

    /* MinMax: '<S477>/LV1_PVS_MIN_NORM2' incorporates:
     *  Constant: '<S492>/Calib'
     *  Constant: '<S493>/Calib'
     *  Sum: '<S477>/LV1_PV1_NORM1'
     */
    VeAPSR_U_Lv1Pv1Norm = fmaxf(TmpSignalConversionAtTmpVM_Fc_h -
        KeAPSR_U_Lv1Pv1MinNorm, KeAPSR_U_Lv1Pv1MinClip);

    /* Switch: '<S479>/FixPt Switch1' incorporates:
     *  Constant: '<S494>/Calib'
     *  Constant: '<S495>/Calib'
     *  DataStoreRead: '<S479>/Data Store Read'
     */
    if (KeAPSR_b_Lv1PvAdaptEnbl)
    {
        TmpSignalConversionAtTmpVM_Fc_a = APSR_ac_DW.NeAPSR_U_Lv1PvAdapt;
    }
    else
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_Lv1PvAdapt;
    }

    /* End of Switch: '<S479>/FixPt Switch1' */

    /* Sum: '<S479>/LV1_PV1_MODE' */
    VeAPSR_U_Lv1Pv1Mode = TmpSignalConversionAtTmpVM_Fc_a + VeAPSR_U_Lv1Pv1Norm;

    /* Outputs for Enabled SubSystem: '<S20>/PV_Coh_Chk' incorporates:
     *  EnablePort: '<S44>/Enable'
     */
    /* Product: '<S476>/Product' incorporates:
     *  Constant: '<S30>/Calib'
     *  Product: '<S44>/Product'
     */
    TmpSignalConversionAtTmpVM_Fc_p *= KeAPSR_K_Lv1Pv2Slope;

    /* End of Outputs for SubSystem: '<S20>/PV_Coh_Chk' */

    /* MinMax: '<S476>/LV1_PVS_MIN_NORM3' incorporates:
     *  Constant: '<S490>/Calib'
     *  Constant: '<S491>/Calib'
     *  Product: '<S476>/Product'
     *  Sum: '<S476>/LV1_PV2_NORM1'
     */
    VeAPSR_U_Lv1Pv2Norm = fmaxf(TmpSignalConversionAtTmpVM_Fc_p -
        KeAPSR_U_Lv1Pv2MinNorm, KeAPSR_U_Lv1Pv2MinClip);

    /* Outputs for Enabled SubSystem: '<S20>/PV_Coh_Chk' incorporates:
     *  EnablePort: '<S44>/Enable'
     */
    /* S-Function (sfix_bitop): '<S70>/Bitwise Operator1' incorporates:
     *  DataStoreRead: '<S70>/StatusByte_APP_Snsr12_Corr'
     *  S-Function (sfix_bitop): '<S511>/Bitwise Operator2'
     */
    tmp = ((uint32)APSR_ac_DW.StatusByte_APP_Snsr12_Corr) & 64U;

    /* Logic: '<S24>/Logical Operator' incorporates:
     *  Constant: '<S70>/Constant1'
     *  Constant: '<S70>/Constant2'
     *  DataStoreRead: '<S70>/StatusByte_APP_Snsr12_Corr'
     *  Logic: '<S24>/Logical1'
     *  Logic: '<S24>/Logical2'
     *  Logic: '<S24>/Logical3'
     *  Logic: '<S44>/only enable when not failing'
     *  Logic: '<S514>/AND'
     *  Logic: '<S70>/Logical Operator'
     *  RelationalOperator: '<S70>/Relational Operator1'
     *  RelationalOperator: '<S70>/Relational Operator2'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S70>/Bitwise Operator2'
     */
    if ((((((((((((sint32)APSR_ac_DW.StatusByte_APP_Snsr12_Corr) & 1) <= 0) ||
               (tmp != 0U)) && (!APSR_ac_B.OR1_p)) && (!APSR_ac_B.OR1)) &&
            rtb_Logical2_j) && rtb_andd) && rtb_Logical1) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)) ||
            (APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew))
    {
        /* Abs: '<S44>/Abs' incorporates:
         *  Constant: '<S507>/Calib'
         *  Sum: '<S44>/Sum'
         */
        VeAPSR_U_Cohresult = fabsf((TmpSignalConversionAtTmpVM_Fc_p -
            TmpSignalConversionAtTmpVM_Fc_h) + KeAPSR_U_Lv1PvOffset);

        /* Lookup_n-D: '<S508>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
         */
        VeAPSR_U_Lv1PvCohLim = look1_iflf_binlcapw
            (TmpSignalConversionAtTmpVM_Fc_h, ((const float32 *)
              &(KxAPSR_U_Lv1PvCohLimTbl[0])), ((const float32 *)
              &(KtAPSR_U_Lv1PvCohLimTbl[0])), 3U);

        /* RelationalOperator: '<S44>/Comparison1' */
        VeAPSR_b_Lv1PvCohFailing = (VeAPSR_U_Cohresult >= VeAPSR_U_Lv1PvCohLim);

        /* Outputs for Enabled SubSystem: '<S44>/PV1_Adapt' incorporates:
         *  EnablePort: '<S509>/Enable'
         */
        if (!VeAPSR_b_Lv1PvCohFailing)
        {
            /* Outputs for Atomic SubSystem: '<S509>/EdgeRising2' */
            /* Logic: '<S516>/OR1' incorporates:
             *  UnitDelay: '<S516>/Unit Delay'
             */
            rtb_Logical2_j = !APSR_ac_DW.UnitDelay_DSTATE_b;

            /* Update for UnitDelay: '<S516>/Unit Delay' incorporates:
             *  Constant: '<S509>/TRUE Constant1'
             */
            APSR_ac_DW.UnitDelay_DSTATE_b = true;

            /* Switch: '<S509>/Switch1' incorporates:
             *  Constant: '<S509>/ONE2'
             *  Logic: '<S516>/AND'
             *  UnitDelay: '<S509>/Prev min value init value 5'
             */
            if (rtb_Logical2_j)
            {
                TmpSignalConversionAtTmpVM_Fc_p = 5.0F;
            }
            else
            {
                TmpSignalConversionAtTmpVM_Fc_p =
                    APSR_ac_DW.Prevminvalueinitvalue5_DSTATE;
            }

            /* End of Switch: '<S509>/Switch1' */
            /* End of Outputs for SubSystem: '<S509>/EdgeRising2' */

            /* Sum: '<S509>/Put EWMA here to reduce noise' incorporates:
             *  Constant: '<S509>/ONE'
             *  Constant: '<S521>/Calib'
             *  Product: '<S509>/Scaled PV2'
             *  Product: '<S509>/Scaled PV3'
             *  Sum: '<S509>/P'
             */
            VeAPSR_U_Lv1PvRawFilt = ((1.0F - KeAPSR_k_Lv1PvAdaptEwmaGain) *
                TmpSignalConversionAtTmpVM_Fc_p) +
                (TmpSignalConversionAtTmpVM_Fc_h * KeAPSR_k_Lv1PvAdaptEwmaGain);

            /* Outputs for Atomic SubSystem: '<S509>/EdgeRising1' */
            /* Logic: '<S515>/AND' incorporates:
             *  Logic: '<S515>/OR1'
             *  UnitDelay: '<S515>/Unit Delay'
             */
            rtb_Logical2_j = !APSR_ac_DW.UnitDelay_DSTATE_jp;

            /* Update for UnitDelay: '<S515>/Unit Delay' incorporates:
             *  Constant: '<S509>/TRUE Constant'
             */
            APSR_ac_DW.UnitDelay_DSTATE_jp = true;

            /* End of Outputs for SubSystem: '<S509>/EdgeRising1' */

            /* Switch: '<S509>/Switch' incorporates:
             *  Constant: '<S509>/ONE1'
             *  UnitDelay: '<S509>/Prev min value init value Five'
             */
            if (rtb_Logical2_j)
            {
                TmpSignalConversionAtTmpVM_Fc_p = 5.0F;
            }
            else
            {
                TmpSignalConversionAtTmpVM_Fc_p =
                    APSR_ac_DW.PrevminvalueinitvalueFive_DSTAT;
            }

            /* End of Switch: '<S509>/Switch' */

            /* MinMax: '<S509>/LV1_PV_INTERM1' incorporates:
             *  Constant: '<S519>/Calib'
             */
            VeAPSR_U_Lv1PvInterm1 = fminf(fminf(VeAPSR_U_Lv1PvRawFilt,
                KeAPSR_U_Lv1PvAdapMax), TmpSignalConversionAtTmpVM_Fc_p);

            /* MinMax: '<S509>/LV1_PV_INTERM2' incorporates:
             *  Constant: '<S520>/Calib'
             */
            VeAPSR_U_Lv1PvInterm2 = fmaxf(KeAPSR_U_Lv1PvAdapMin,
                VeAPSR_U_Lv1PvInterm1);

            /* Sum: '<S509>/LV1_PV_ADAPT_DESIRED_THIS_TRIP' incorporates:
             *  Constant: '<S519>/Calib'
             */
            VeAPSR_U_Lv1PvAdaptDesiredThisTrip = KeAPSR_U_Lv1PvAdapMax -
                VeAPSR_U_Lv1PvInterm2;

            /* Logic: '<S509>/Logical' incorporates:
             *  Constant: '<S517>/Constant'
             *  Constant: '<S518>/Constant'
             *  RelationalOperator: '<S509>/Comparison1'
             *  RelationalOperator: '<S509>/Comparison4'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
             *  UnitDelay: '<S509>/Prev min value init value Five1'
             */
            VeAPSR_b_ModulePowerdown_tmp = ((CePMDR_e_PowerMode_Run == ((uint32)
                APSR_ac_DW.PrevminvalueinitvalueFive1_DSTA)) && (((uint32)
                APSR_ac_B.TmpSignalConversionAtTmpVM_F_ol) ==
                CePMDR_e_PowerMode_Off));

            /* Outputs for Atomic SubSystem: '<S509>/EdgeRising' */
            /* Logic: '<S514>/OR1' incorporates:
             *  UnitDelay: '<S514>/Unit Delay'
             */
            rtb_Logical2_j = !APSR_ac_DW.UnitDelay_DSTATE_aa;

            /* Update for UnitDelay: '<S514>/Unit Delay' */
            APSR_ac_DW.UnitDelay_DSTATE_aa = VeAPSR_b_ModulePowerdown_tmp;

            /* Outputs for Enabled SubSystem: '<S509>/Lim_Chk' incorporates:
             *  EnablePort: '<S522>/Enable'
             */
            if ((VeAPSR_b_ModulePowerdown_tmp) && rtb_Logical2_j)
            {
                /* Sum: '<S522>/LV1_PV_ADAPT_MIN_THIS_TRIP' incorporates:
                 *  Constant: '<S523>/Calib'
                 *  DataStoreRead: '<S509>/Data Store Read'
                 */
                VeAPSR_U_Lv1PVAdaptMinThisTrip = APSR_ac_DW.NeAPSR_U_Lv1PvAdapt
                    - KeAPSR_U_Lv1PvMaxChangePerUpdate;

                /* Sum: '<S522>/LV1_PV_ADAPT_MAX_THIS_TRIP' incorporates:
                 *  Constant: '<S523>/Calib'
                 *  DataStoreRead: '<S509>/Data Store Read'
                 */
                VeAPSR_U_Lv1PVAdaptMaxThisTrip = APSR_ac_DW.NeAPSR_U_Lv1PvAdapt
                    + KeAPSR_U_Lv1PvMaxChangePerUpdate;

                /* MinMax: '<S522>/LV1_PV_ADAPT' incorporates:
                 *  DataStoreWrite: '<S522>/Data Store Write'
                 *  MinMax: '<S522>/LV1_PVS_MIN_NORM3'
                 */
                APSR_ac_DW.NeAPSR_U_Lv1PvAdapt = fminf(fmaxf
                    (VeAPSR_U_Lv1PvAdaptDesiredThisTrip,
                     VeAPSR_U_Lv1PVAdaptMinThisTrip),
                    VeAPSR_U_Lv1PVAdaptMaxThisTrip);
            }

            /* End of Outputs for SubSystem: '<S509>/Lim_Chk' */
            /* End of Outputs for SubSystem: '<S509>/EdgeRising' */

            /* Update for UnitDelay: '<S509>/Prev min value init value 5' incorporates:
             *  Logic: '<S514>/AND'
             */
            APSR_ac_DW.Prevminvalueinitvalue5_DSTATE = VeAPSR_U_Lv1PvRawFilt;

            /* Update for UnitDelay: '<S509>/Prev min value init value Five' */
            APSR_ac_DW.PrevminvalueinitvalueFive_DSTAT = VeAPSR_U_Lv1PvInterm1;

            /* Update for UnitDelay: '<S509>/Prev min value init value Five1' incorporates:
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
             */
            APSR_ac_DW.PrevminvalueinitvalueFive1_DSTA =
                APSR_ac_B.TmpSignalConversionAtTmpVM_F_ol;
        }

        /* End of Outputs for SubSystem: '<S44>/PV1_Adapt' */

        /* RelationalOperator: '<S511>/Relational Operator3' incorporates:
         *  Constant: '<S511>/Constant3'
         *  Logic: '<S44>/only enable when not failing'
         *  Logic: '<S514>/AND'
         */
        rtb_Logical2_j = (tmp == 0U);

        /* Outputs for Atomic SubSystem: '<S511>/EdgeFalling1' */
        /* Logic: '<S527>/AND' incorporates:
         *  Logic: '<S527>/OR1'
         *  UnitDelay: '<S527>/Unit Delay'
         */
        rtb_andd = ((!rtb_Logical2_j) && (APSR_ac_DW.UnitDelay_DSTATE_f));

        /* Update for UnitDelay: '<S527>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_f = rtb_Logical2_j;

        /* End of Outputs for SubSystem: '<S511>/EdgeFalling1' */

        /* Logic: '<S511>/Logical5' incorporates:
         *  Logic: '<S511>/NOT4'
         */
        rtb_Logical2_j = (((APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew) ||
                           (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)) ||
                          rtb_andd);

        /* Switch: '<S510>/switch' incorporates:
         *  Switch: '<S510>/dec if Ok else inc'
         */
        if (rtb_Logical2_j)
        {
            /* Switch: '<S510>/switch' incorporates:
             *  Constant: '<S510>/constant'
             */
            VeAPSR_Cnt_Lv1PVCohCntr = 0;
        }
        else
        {
            if (VeAPSR_b_Lv1PvCohFailing)
            {
                /* Switch: '<S510>/dec if Ok else inc' incorporates:
                 *  Constant: '<S506>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1PvCohCntrInc;
            }
            else
            {
                /* Switch: '<S510>/dec if Ok else inc' incorporates:
                 *  Constant: '<S524>/Calib'
                 */
                rtb_Sum1_d = KeAPSR_Cnt_Lv1CohDecCntr;
            }

            /* Sum: '<S510>/LV1_PVCOH_CNTR' incorporates:
             *  UnitDelay: '<S510>/Prev Count init value zero'
             */
            rtb_Sum1_d += APSR_ac_DW.PrevCountinitvaluezero_DSTATE;

            /* Outputs for Atomic SubSystem: '<S510>/Limiter' */
            /* Switch: '<S525>/Switch1' incorporates:
             *  Constant: '<S510>/Max_Limit'
             *  RelationalOperator: '<S525>/Relational Operator'
             */
            if (127 < rtb_Sum1_d)
            {
                /* Switch: '<S525>/Switch1' */
                rtb_Sum1_d = 127;
            }

            /* End of Switch: '<S525>/Switch1' */

            /* Switch: '<S525>/Switch' incorporates:
             *  Constant: '<S510>/Min_Limit'
             *  RelationalOperator: '<S525>/Relational Operator1'
             */
            if (rtb_Sum1_d > 0)
            {
                /* Switch: '<S510>/switch' */
                VeAPSR_Cnt_Lv1PVCohCntr = rtb_Sum1_d;
            }
            else
            {
                /* Switch: '<S510>/switch' */
                VeAPSR_Cnt_Lv1PVCohCntr = 0;
            }

            /* End of Switch: '<S525>/Switch' */
            /* End of Outputs for SubSystem: '<S510>/Limiter' */
        }

        /* End of Switch: '<S510>/switch' */

        /* Outputs for Atomic SubSystem: '<S510>/Signal Latch On With Reset' */
        /* Logic: '<S526>/OR1' incorporates:
         *  Constant: '<S29>/Calib'
         *  Logic: '<S526>/NOT'
         *  Logic: '<S526>/OR'
         *  RelationalOperator: '<S510>/relOp'
         *  UnitDelay: '<S526>/Unit Delay'
         */
        rtb_andd = ((VeAPSR_Cnt_Lv1PVCohCntr >= KeAPSR_Cnt_Lv1PvCohCntrLim) ||
                    ((!rtb_Logical2_j) && (APSR_ac_DW.UnitDelay_DSTATE_g)));

        /* Update for UnitDelay: '<S526>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_g = rtb_andd;

        /* End of Outputs for SubSystem: '<S510>/Signal Latch On With Reset' */

        /* Outputs for Atomic SubSystem: '<S512>/EdgeFalling1' */
        /* Update for UnitDelay: '<S528>/Unit Delay' */
        APSR_ac_DW.UnitDelay_DSTATE_ol = true;

        /* End of Outputs for SubSystem: '<S512>/EdgeFalling1' */

        /* If: '<S512>/If' incorporates:
         *  Logic: '<S44>/not2'
         *  Logic: '<S512>/Logical5'
         */
        if (rtb_Logical2_j)
        {
            /* Outputs for IfAction SubSystem: '<S512>/Init' incorporates:
             *  ActionPort: '<S530>/Action Port'
             */
            APSR_ac_Init_j(&APSR_ac_B.Merge_l);

            /* End of Outputs for SubSystem: '<S512>/Init' */
        }
        else if (!VeAPSR_b_Lv1PvCohFailing)
        {
            /* Outputs for IfAction SubSystem: '<S512>/Pass' incorporates:
             *  ActionPort: '<S531>/Action Port'
             */
            APSR_ac_Pass(&APSR_ac_B.Merge_l);

            /* End of Outputs for SubSystem: '<S512>/Pass' */
        }
        else
        {
            if (rtb_andd)
            {
                /* Outputs for IfAction SubSystem: '<S512>/Fail' incorporates:
                 *  ActionPort: '<S529>/Action Port'
                 */
                APSR_ac_Fail(&APSR_ac_B.Merge_l);

                /* End of Outputs for SubSystem: '<S512>/Fail' */
            }
        }

        /* End of If: '<S512>/If' */

        /* RelationalOperator: '<S44>/Relational Operator2' incorporates:
         *  Constant: '<S505>/Constant'
         *  Merge: '<S512>/Merge'
         */
        APSR_ac_B.RelationalOperator2_g = (((uint32)APSR_ac_B.Merge_l) ==
            CeDFIB_e_Fail);

        /* Update for UnitDelay: '<S510>/Prev Count init value zero' */
        APSR_ac_DW.PrevCountinitvaluezero_DSTATE = VeAPSR_Cnt_Lv1PVCohCntr;
    }

    /* End of Logic: '<S24>/Logical Operator' */
    /* End of Outputs for SubSystem: '<S20>/PV_Coh_Chk' */

    /* Sum: '<S479>/LV1_PV1_MODE1' */
    VeAPSR_U_Lv1Pv2Mode = VeAPSR_U_Lv1Pv2Norm + VeAPSR_U_Lv1PvCohLim;

    /* MinMax: '<S479>/LV1_PVS_MIN_NORM1' */
    VeAPSR_U_Lv1PvsMinNorm1 = fminf(VeAPSR_U_Lv1Pv1Mode, VeAPSR_U_Lv1Pv2Mode);

    /* MinMax: '<S478>/LV1_PVS_MIN_NORM' */
    VeAPSR_U_Lv1PvsMinNorm = fminf(VeAPSR_U_Lv1Pv1Norm, VeAPSR_U_Lv1Pv2Norm);

    /* Chart: '<S475>/Stateflow' incorporates:
     *  Constant: '<S43>/LV1_PVS_IDLE_VALUE'
     */
    /* Gateway: APSR_FastTEF/APSC_FUNC/PVS_Value/PV_Mode_Sensor_Switch/Stateflow */
    /* During: APSR_FastTEF/APSC_FUNC/PVS_Value/PV_Mode_Sensor_Switch/Stateflow */
    /* Entry Internal: APSR_FastTEF/APSC_FUNC/PVS_Value/PV_Mode_Sensor_Switch/Stateflow */
    /* Transition: '<S489>:8' */
    if (((uint32)rtb_SwitchHH) != CeAPSR_e_LV1PVMode_PVOk)
    {
        /* Transition: '<S489>:10' */
        /* Transition: '<S489>:12' */
        if (((uint32)rtb_SwitchHH) != CeAPSR_e_LV1PVMode_PV2Fail)
        {
            /* Transition: '<S489>:17' */
            /* Transition: '<S489>:19' */
            if (((uint32)rtb_SwitchHH) != CeAPSR_e_LV1PVMode_PV1Fail)
            {
                /* Transition: '<S489>:24' */
                /* Transition: '<S489>:26' */
                if (((uint32)rtb_SwitchHH) != CeAPSR_e_LV1PVMode_CohFail)
                {
                    /* Transition: '<S489>:31' */
                    /* Transition: '<S489>:42' */
                    VeAPSR_U_PvModeSnsArb = 0.0F;
                }
                else
                {
                    /* Transition: '<S489>:35' */
                    VeAPSR_U_PvModeSnsArb = VeAPSR_U_Lv1PvsMinNorm;

                    /* Transition: '<S489>:48' */
                }
            }
            else
            {
                /* Transition: '<S489>:28' */
                VeAPSR_U_PvModeSnsArb = VeAPSR_U_Lv1Pv2Norm;

                /* Transition: '<S489>:47' */
                /* Transition: '<S489>:48' */
            }
        }
        else
        {
            /* Transition: '<S489>:21' */
            VeAPSR_U_PvModeSnsArb = VeAPSR_U_Lv1Pv1Norm;

            /* Transition: '<S489>:46' */
            /* Transition: '<S489>:47' */
            /* Transition: '<S489>:48' */
        }
    }
    else
    {
        /* Transition: '<S489>:14' */
        VeAPSR_U_PvModeSnsArb = VeAPSR_U_Lv1PvsMinNorm1;

        /* Transition: '<S489>:45' */
        /* Transition: '<S489>:46' */
        /* Transition: '<S489>:47' */
        /* Transition: '<S489>:48' */
    }

    /* End of Chart: '<S475>/Stateflow' */

    /* UnitDelay: '<S483>/PREV_VALUE' */
    TmpSignalConversionAtTmpVM_Fc_h = APSR_ac_DW.PREV_VALUE_DSTATE;

    /* MinMax: '<S483>/MinMax1' incorporates:
     *  UnitDelay: '<S483>/PREV_VALUE1'
     */
    tmpForInput[0] = VeAPSR_U_PvModeSnsArb;
    tmpForInput[1] = TmpSignalConversionAtTmpVM_Fc_h;
    tmpForInput[2] = APSR_ac_DW.PREV_VALUE1_DSTATE;
    TmpSignalConversionAtTmpVM_Fc_p = VeAPSR_U_PvModeSnsArb;
    for (i = 0; i < 2; i++)
    {
        TmpSignalConversionAtTmpVM_Fc_p = fmaxf(TmpSignalConversionAtTmpVM_Fc_p,
            tmpForInput[i + 1]);
    }

    /* MinMax: '<S483>/MinMax' incorporates:
     *  Sum: '<S483>/Sum'
     *  UnitDelay: '<S483>/PREV_VALUE1'
     */
    tmpForInput[0] = VeAPSR_U_PvModeSnsArb;
    tmpForInput[1] = TmpSignalConversionAtTmpVM_Fc_h;
    tmpForInput[2] = APSR_ac_DW.PREV_VALUE1_DSTATE;
    TmpSignalConversionAtTmpVM_F_p0 = VeAPSR_U_PvModeSnsArb;
    for (i = 0; i < 2; i++)
    {
        TmpSignalConversionAtTmpVM_F_p0 = fminf(TmpSignalConversionAtTmpVM_F_p0,
            tmpForInput[i + 1]);
    }

    /* Sum: '<S483>/Sum' */
    TmpSignalConversionAtTmpVM_Fc_a = -0.0F;
    for (i = 0; i < 3; i++)
    {
        TmpSignalConversionAtTmpVM_Fc_a += tmpForInput[i];
    }

    /* MinMax: '<S482>/Rate limit decrease' incorporates:
     *  MinMax: '<S483>/MinMax'
     *  MinMax: '<S483>/MinMax1'
     *  Sum: '<S483>/Sum1'
     */
    TmpSignalConversionAtTmpVM_Fc_p = (TmpSignalConversionAtTmpVM_Fc_a -
        TmpSignalConversionAtTmpVM_Fc_p) - TmpSignalConversionAtTmpVM_F_p0;

    /* Lookup_n-D: '<S488>/Vector' incorporates:
     *  UnitDelay: '<S474>/OLD_VALUE'
     */
    VeAPSR_U_PvMaxIncPerLoopTbl = look1_iflf_binlcapw
        (APSR_ac_DW.OLD_VALUE_DSTATE, ((const float32 *)
          &(KxAPSR_U_PvMaxIncPerLoopTbl[0])), ((const float32 *)
          &(KtAPSR_U_PvMaxIncPerLoopTbl[0])), 4U);

    /* Switch: '<S474>/FixPt Switch' incorporates:
     *  Constant: '<S485>/Constant'
     *  Constant: '<S486>/Calib'
     *  Constant: '<S487>/Calib'
     *  MinMax: '<S474>/Clip upper value2'
     *  RelationalOperator: '<S474>/Relational Operator1'
     */
    if (((uint32)rtb_SwitchHH) != CeAPSR_e_LV1PVMode_PVOk)
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_Lv1PvLHMaxIncPerLoop;
    }
    else
    {
        TmpSignalConversionAtTmpVM_Fc_a = fminf(VeAPSR_U_PvMaxIncPerLoopTbl,
            KeAPSR_U_PVIncPerLoopMin);
    }

    /* End of Switch: '<S474>/FixPt Switch' */

    /* MinMax: '<S482>/Rate limit decrease' incorporates:
     *  MinMax: '<S482>/Rate limit increase'
     *  Sum: '<S482>/MAX_VAL'
     *  UnitDelay: '<S482>/OLD_VALUE'
     */
    TmpSignalConversionAtTmpVM_Fc_p = fminf(TmpSignalConversionAtTmpVM_Fc_p,
        TmpSignalConversionAtTmpVM_Fc_a + APSR_ac_DW.OLD_VALUE_DSTATE_l);

    /* Switch: '<S484>/Switch' incorporates:
     *  Constant: '<S502>/Constant'
     *  Constant: '<S503>/Calib'
     *  Constant: '<S504>/Calib'
     *  RelationalOperator: '<S484>/Relational Operator'
     */
    if (((uint32)rtb_SwitchHH) == CeAPSR_e_LV1PVMode_PVOk)
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_Lv1PvMode1DecPerLoop;
    }
    else
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_Lv1PvMaxDecPerLoop;
    }

    /* End of Switch: '<S484>/Switch' */

    /* MinMax: '<S482>/Rate limit decrease' incorporates:
     *  Sum: '<S482>/MIN_VAL'
     *  UnitDelay: '<S482>/OLD_VALUE'
     */
    TmpSignalConversionAtTmpVM_Fc_p = fmaxf(TmpSignalConversionAtTmpVM_Fc_p,
        APSR_ac_DW.OLD_VALUE_DSTATE_l - TmpSignalConversionAtTmpVM_Fc_a);

    /* Switch: '<S480>/Select upper clip' incorporates:
     *  Constant: '<S496>/Constant'
     *  Constant: '<S500>/Calib'
     *  RelationalOperator: '<S480>/Relational Operator2'
     */
    if (((uint32)rtb_SwitchHH) != CeAPSR_e_LV1PVMode_PVOk)
    {
        /* Switch: '<S480>/Select upper clip1' incorporates:
         *  Chart: '<S49>/Max_Chart'
         *  Constant: '<S497>/Constant'
         *  Constant: '<S498>/Calib'
         *  Constant: '<S499>/Calib'
         *  RelationalOperator: '<S480>/Relational Operator3'
         */
        if (((uint32)VeAPSR_e_Lv1_IP_MODE) != CeAPSR_e_LV1PVMode_PVOk)
        {
            TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_IpLv1PvLhMax;
        }
        else
        {
            TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_Lv1PvLHMax;
        }

        /* End of Switch: '<S480>/Select upper clip1' */
    }
    else
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_PvMaxValue;
    }

    /* End of Switch: '<S480>/Select upper clip' */

    /* MinMax: '<S481>/clip upper value' */
    TmpSignalConversionAtTmpVM_F_p0 = fminf(TmpSignalConversionAtTmpVM_Fc_a,
        TmpSignalConversionAtTmpVM_Fc_p);

    /* MinMax: '<S481>/LV1_DELPVS' incorporates:
     *  Constant: '<S501>/Calib'
     */
    VeAPSR_U_Lv1DelPVS = fmaxf(TmpSignalConversionAtTmpVM_F_p0,
        KeAPSR_U_Lv1PvLHMin);

    /* RelationalOperator: '<S86>/relOp' incorporates:
     *  Constant: '<S120>/Calib'
     */
    rtb_andd = (VeAPSR_U_Lv1DelPVS > KeAPSR_U_FxdPdlMinPdl);

    /* Sum: '<S86>/DELTA_PV_RATE' incorporates:
     *  UnitDelay: '<S86>/OLD_VALUE1'
     */
    VeAPSR_U_DeltaPvRate = VeAPSR_U_Lv1DelPVS - APSR_ac_DW.OLD_VALUE1_DSTATE;

    /* RelationalOperator: '<S86>/relOp3' incorporates:
     *  Abs: '<S86>/Absolute Value1'
     *  Constant: '<S121>/Calib'
     */
    rtb_Logical2_j = (fabsf(VeAPSR_U_DeltaPvRate) < KeAPSR_U_Lv1PvBrkPvRateThrsh);

    /* Logic: '<S86>/nott1' incorporates:
     *  RelationalOperator: '<S86>/relOp2'
     */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    /* Outputs for Atomic SubSystem: '<S86>/Counter Reset  Enabled ' */
    /* Switch: '<S117>/Switch2' incorporates:
     *  Switch: '<S117>/Switch'
     */
    if (!rtb_Logical2_j)
    {
        /* Switch: '<S117>/Switch' incorporates:
         *  Constant: '<S117>/Constant Value2'
         */
        rtb_Switch_dt = 0U;
    }
    else
    {
        /* Switch: '<S117>/Switch' incorporates:
         *  Constant: '<S117>/Constant Value1'
         *  Sum: '<S117>/Subtraction'
         *  Switch: '<S117>/Switch2'
         *  UnitDelay: '<S117>/Unit Delay'
         */
        rtb_Switch_dt = (uint16)(((uint32)APSR_ac_DW.UnitDelay_DSTATE_l) + 1U);
    }

    /* End of Switch: '<S117>/Switch2' */

    /* Update for UnitDelay: '<S117>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_l = rtb_Switch_dt;

    /* RelationalOperator: '<S86>/relOp2' incorporates:
     *  Constant: '<S119>/Calib'
     */
    rtb_relOp2_i = (rtb_Switch_dt >= KeAPSR_Cnt_FxdPdlAccStuckSmp);

    /* End of Outputs for SubSystem: '<S86>/Counter Reset  Enabled ' */
#endif

    /* End of Logic: '<S86>/nott1' */

    /* SignalConversion generated from: '<S86>/Variant Source2' */
#if Rte_SysCon_Variant_APSR_4

    /* Logic: '<S86>/inactive' */
    rtb_inactive_n = rtb_relOp2_i;

#endif

    /* End of SignalConversion generated from: '<S86>/Variant Source2' */

    /* Switch: '<S86>/switch' incorporates:
     *  Constant: '<S125>/Calib'
     *  SignalConversion generated from: '<S86>/Variant Source2'
     */
#if Rte_SysCon_Variant_APSR_5

    if (KeAPSR_b_PVBrkNewStrg)
    {
        /* Logic: '<S86>/inactive' */
        rtb_inactive_n = rtb_relOp2_i;
    }
    else
    {
        /* Logic: '<S86>/inactive' */
        rtb_inactive_n = rtb_Logical2_j;
    }

#elif !Rte_SysCon_Variant_APSR_4 && !Rte_SysCon_Variant_APSR_5

    /* Logic: '<S86>/inactive' incorporates:
     *  SignalConversion generated from: '<S86>/Variant Source2'
     */
    rtb_inactive_n = rtb_Logical2_j;

#endif

    /* End of Switch: '<S86>/switch' */

    /* Logic: '<S86>/Start conditions1' incorporates:
     *  Constant: '<S122>/Calib'
     *  Constant: '<S123>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S126>/Calib'
     *  Logic: '<S86>/Clear conditions1'
     *  Logic: '<S86>/Clear conditions2'
     *  Logic: '<S86>/Clear conditions3'
     *  Logic: '<S86>/Clear conditions5'
     *  Logic: '<S86>/Clear conditions6'
     *  RelationalOperator: '<S86>/relOp1'
     *  UnitDelay: '<S26>/STUCK_Value'
     */
    VeAPSR_b_FixedPdlChk = ((((((((((VeAPSR_b_BrkTransitionOn) ||
        ((APSR_ac_DW.STUCK_Value_DSTATE_j) && (KeAPSR_b_BrkStsOvrd))) &&
        rtb_Logical1) && (KeAPSR_b_Lv1PvBrkEnable)) &&
        ((APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_b) ||
         (KeAPSR_b_FxdPdlStckOvrdCond))) && ((KeAPSR_b_FxdPdlStckOvrdCond) ||
        (!APSR_ac_B.TmpSignalConversionAtTmpVM_F_ov))) &&
        (APSR_ac_B.TmpSignalConversionAtTmpVM_FcnC >= KeAPSR_v_FxdPdlMinVehSpd))
        && rtb_AND_eb) && rtb_andd) && rtb_inactive_n);

    /* Switch: '<S85>/inc if Ok else reset' */
    if (VeAPSR_b_FixedPdlChk)
    {
        /* Switch: '<S85>/inc if Ok else reset' incorporates:
         *  Constant: '<S114>/Calib'
         *  Sum: '<S85>/LV1_PV_BRK_CNTR'
         *  UnitDelay: '<S85>/PrevV'
         */
        TmpSignalConversionAtTmpVM_Fc_a = APSR_ac_DW.PrevV_DSTATE +
            KeAPSR_Cnt_FixedPedalIncCntr;
    }
    else
    {
        /* Switch: '<S85>/inc if Ok else reset' incorporates:
         *  Constant: '<S115>/Calib'
         */
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_Cnt_FixedPedalRstCntr;
    }

    /* End of Switch: '<S85>/inc if Ok else reset' */

    /* Outputs for Atomic SubSystem: '<S85>/Limiter' */
    /* Switch: '<S116>/Switch1' incorporates:
     *  Constant: '<S85>/One1'
     *  RelationalOperator: '<S116>/Relational Operator'
     */
    if (300.0F < TmpSignalConversionAtTmpVM_Fc_a)
    {
        /* MinMax: '<S87>/clip to min' */
        TmpSignalConversionAtTmpVM_Fc_a = 300.0F;
    }

    /* End of Switch: '<S116>/Switch1' */

    /* Switch: '<S116>/Switch' incorporates:
     *  Constant: '<S85>/One2'
     *  RelationalOperator: '<S116>/Relational Operator1'
     */
    if (TmpSignalConversionAtTmpVM_Fc_a > 0.0F)
    {
        /* Switch: '<S116>/Switch' */
        VeAPSR_Cnt_Lv1PvBrkCntr = TmpSignalConversionAtTmpVM_Fc_a;
    }
    else
    {
        /* Switch: '<S116>/Switch' */
        VeAPSR_Cnt_Lv1PvBrkCntr = 0.0F;
    }

    /* End of Switch: '<S116>/Switch' */
    /* End of Outputs for SubSystem: '<S85>/Limiter' */

    /* RelationalOperator: '<S84>/Comparison4' incorporates:
     *  Constant: '<S111>/Constant'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     */
    VeAPSR_b_VehSpdSrcNotValid = (((uint32)
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_ln) ==
        CeCSVR_e_NoValidVehSpdSrcAvail);

    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S112>/Calib'
     */
    if (VeAPSR_b_VehSpdSrcNotValid)
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_v_Default;
    }
    else
    {
        TmpSignalConversionAtTmpVM_Fc_a =
            APSR_ac_B.TmpSignalConversionAtTmpVM_FcnC;
    }

    /* End of Switch: '<S84>/Switch1' */

    /* Lookup_n-D: '<S113>/Vector' incorporates:
     *  MinMax: '<S481>/LV1_DELPVS'
     */
    VeAPSR_Cnt_LV1PvBrkCntrLim = look2_iflf_binlcapw(VeAPSR_U_Lv1DelPVS,
        TmpSignalConversionAtTmpVM_Fc_a, ((const float32 *)
        &(KxAPSR_Cnt_LV1PvBrkCntrLim[0])), ((const float32 *)
        &(KyAPSR_Cnt_LV1PvBrkCntrLim[0])), ((const float32 *)
        &(KtAPSR_Cnt_LV1PvBrkCntrLim[0])), APSR_ac_ConstP.Vector_maxIndex, 5U);

    /* RelationalOperator: '<S85>/relOp' */
    VeAPSR_Cnt_LV1PvBrkCntrPassed = (VeAPSR_Cnt_Lv1PvBrkCntr >
        VeAPSR_Cnt_LV1PvBrkCntrLim);

    /* Logic: '<S77>/PV_BRK_ENABLED' incorporates:
     *  Logic: '<S77>/AND'
     *  Logic: '<S77>/NOT'
     *  Logic: '<S86>/Clear conditions'
     *  UnitDelay: '<S77>/OLD_VALUE1'
     */
    VeAPSR_b_PvBrkEnabled = ((VeAPSR_Cnt_LV1PvBrkCntrPassed) || (((rtb_AND_eb &&
        rtb_andd) && rtb_inactive_n) && (APSR_ac_DW.OLD_VALUE1_DSTATE_o)));

    /* UnitDelay: '<S87>/Unit Delay' */
    VeAPSR_K_Lv1PvTrqLimMult = APSR_ac_DW.UnitDelay_DSTATE;

    /* RelationalOperator: '<S78>/Comparison4' incorporates:
     *  Logic: '<S78>/Logical1'
     *  Logic: '<S78>/Logical2'
     *  Logic: '<S78>/Logical3'
     */
#if Rte_SysCon_Variant_APSR_3

    /* Logic: '<S86>/ntt2' incorporates:
     *  Constant: '<S78>/Constant Value'
     *  Constant: '<S93>/Calib'
     */
    rtb_ntt2 = ((APSR_ac_B.VM_Conditional_Signal_TmpVM_F_g) ||
                ((APSR_ac_B.VM_Conditional_Signal_TmpVM_F_b == 3) &&
                 (KeAPSR_b_ParHybConf)));

#else

    /* Logic: '<S86>/ntt2' incorporates:
     *  Logic: '<S78>/Logical2'
     *  UnitDelay: '<S536>/Unit Delay'
     */
    rtb_ntt2 = !APSR_ac_DW.UnitDelay_DSTATE_o;

#endif

    /* End of RelationalOperator: '<S78>/Comparison4' */

    /* Logic: '<S78>/LV1_PV_TRQ_LIMIT_REQ' incorporates:
     *  Constant: '<S92>/Calib'
     */
    rtb_Logical1 = (rtb_ntt2 || (KeAPSR_b_DialLv1PvTrqSel));

    /* Logic: '<S87>/Logical1' incorporates:
     *  Constant: '<S87>/FixedOne1'
     *  Logic: '<S87>/AND'
     *  Logic: '<S87>/NOT'
     *  RelationalOperator: '<S87>/relOp'
     *  UnitDelay: '<S87>/OLD_VALUE'
     */
    rtb_andd = (rtb_Logical1 || ((0.99609375F > VeAPSR_K_Lv1PvTrqLimMult) &&
                 (APSR_ac_DW.OLD_VALUE_DSTATE_b1)));

    /* Switch: '<S87>/switch' */
    if (rtb_andd)
    {
        /* Switch: '<S87>/switch' incorporates:
         *  Product: '<S87>/Product'
         */
        VeAPSR_U_Lv1DelPvsLmtdHires = VeAPSR_K_Lv1PvTrqLimMult *
            VeAPSR_U_Lv1DelPVS;
    }
    else
    {
        /* Switch: '<S87>/switch' */
        VeAPSR_U_Lv1DelPvsLmtdHires = VeAPSR_U_Lv1DelPVS;
    }

    /* End of Switch: '<S87>/switch' */

    /* UnitDelay: '<S80>/Unit Delay' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S99>/Calib'
     *  Logic: '<S80>/Logical1'
     *  Logic: '<S80>/Logical3'
     *  Logic: '<S80>/Logical4'
     *  Logic: '<S80>/Logical5'
     *  Logic: '<S80>/NOT'
     *  Logic: '<S80>/inactive'
     *  Logic: '<S80>/inactive1'
     *  MinMax: '<S80>/MinMax1'
     *  MinMax: '<S80>/cliptomax'
     *  RelationalOperator: '<S80>/relOp'
     *  RelationalOperator: '<S80>/relOp2'
     *  RelationalOperator: '<S80>/relOp3'
     *  RelationalOperator: '<S80>/relOp4'
     *  Sum: '<S80>/Sum1'
     *  Switch: '<S80>/DecifEnabledelseinc'
     *  Switch: '<S80>/switch'
     *  Switch: '<S80>/switch1'
     *  Switch: '<S80>/switchh'
     *  Switch: '<S80>/switchhh'
     *  UnitDelay: '<S80>/OLD_VALUE'
     *  UnitDelay: '<S80>/STUCK_Value'
     */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    /* Outputs for Atomic SubSystem: '<S80>/Signal Latch On With Reset1' */
    /* Logic: '<S80>/Logical3' incorporates:
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     */
    rtb_Logical3_o = ((VeAPSR_b_PvBrkEnabled) || (((VeAPSR_U_Lv1DelPvsLmtdHires >=
                         (APSR_ac_DW.UnitDelay_DSTATE_d - KeAPSR_U_FxdPdlDelta))
                        && (VeAPSR_U_Lv1DelPvsLmtdHires > KeAPSR_U_FxdPdlMinPdl))
                       && (APSR_ac_DW.OLD_VALUE_DSTATE_bv)));
    if (rtb_Logical3_o)
    {
        /* Switch: '<S80>/switchhh' */
        rtb_switchhh = APSR_ac_DW.STUCK_Value_DSTATE;
    }
    else
    {
        /* Switch: '<S80>/switchhh' */
        rtb_switchhh = VeAPSR_U_Lv1DelPvsLmtdHires;
    }

    if (rtb_Logical3_o && ((VeAPSR_b_BrakeStatus) || rtb_ORR3))
    {
        /* MinMax: '<S87>/clip to min' incorporates:
         *  Constant: '<S100>/Calib'
         *  Sum: '<S80>/Sum2'
         */
        TmpSignalConversionAtTmpVM_Fc_a = VeAPSR_U_Lv1PVBrkDelPVS_New -
            KeAPSR_U_Lv1PvBrkRampDec;
    }
    else
    {
        if (rtb_Logical3_o && (VeAPSR_U_Lv1PVBrkDelPVS_New >= fminf
                               (KeAPSR_U_Lv1PvBrkLHMax, rtb_switchhh)))
        {
            /* Switch: '<S80>/switchh' incorporates:
             *  Constant: '<S80>/Zero1'
             */
            rtb_MinMax1 = 0.0F;
        }
        else
        {
            /* Switch: '<S80>/switchh' incorporates:
             *  Constant: '<S101>/Calib'
             */
            rtb_MinMax1 = KeAPSR_U_Lv1PvBrkRampInc;
        }

        /* MinMax: '<S87>/clip to min' incorporates:
         *  Sum: '<S80>/Sum'
         */
        TmpSignalConversionAtTmpVM_Fc_a = rtb_MinMax1 +
            VeAPSR_U_Lv1PVBrkDelPVS_New;
    }

    /* Logic: '<S103>/OR1' incorporates:
     *  Constant: '<S99>/Calib'
     *  Logic: '<S103>/NOT'
     *  Logic: '<S103>/OR'
     *  Logic: '<S80>/inactive1'
     *  MinMax: '<S80>/cliptomax'
     *  RelationalOperator: '<S80>/relOp2'
     *  Switch: '<S80>/switchh'
     *  UnitDelay: '<S103>/Unit Delay'
     */
    rtb_ntt2 = (rtb_Logical3_o || ((VeAPSR_U_Lv1DelPvsLmtdHires >
                  TmpSignalConversionAtTmpVM_Fc_a) &&
                 (APSR_ac_DW.UnitDelay_DSTATE_hw)));

    /* Update for UnitDelay: '<S103>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_hw = rtb_ntt2;
    if (!KeAPSR_b_FxdPdlBld)
    {
        rtb_ntt2 = rtb_Logical3_o;
    }

    if (!rtb_ntt2)
    {
        /* MinMax: '<S87>/clip to min' */
        TmpSignalConversionAtTmpVM_Fc_a = VeAPSR_U_Lv1DelPvsLmtdHires;
    }

    /* MinMax: '<S80>/MinMax1' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S80>/Constant Value'
     */
    rtb_MinMax1 = fmaxf(TmpSignalConversionAtTmpVM_Fc_a, 0.0F);

    /* End of Outputs for SubSystem: '<S80>/Signal Latch On With Reset1' */
#endif

    /* End of UnitDelay: '<S80>/Unit Delay' */

    /* SignalConversion generated from: '<S26>/Variant Source' */
#if Rte_SysCon_Variant_APSR_4

    /* VariantMerge generated from: '<S26>/Variant Source' */
    APSR_ac_B.VariantMerge_For_Variant_Source = rtb_MinMax1;

#endif

    /* End of SignalConversion generated from: '<S26>/Variant Source' */

    /* UnitDelay: '<S79>/PrevValue' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S79>/Logical3'
     *  Logic: '<S79>/Logical4'
     *  Logic: '<S79>/NOT'
     *  Logic: '<S79>/inactive'
     *  Logic: '<S79>/inactive1'
     *  MinMax: '<S79>/MinMax1'
     *  MinMax: '<S79>/cliptomax'
     *  RelationalOperator: '<S79>/relational'
     *  RelationalOperator: '<S79>/relationaloperator'
     *  Switch: '<S79>/DecIfEnabledElseinc'
     *  Switch: '<S79>/LimitValueIfBrakeOnlyEvent'
     *  Switch: '<S79>/switchh'
     *  UnitDelay: '<S79>/OLD_VALUE'
     */
#if !Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    /* UnitDelay: '<S79>/PrevValue' */
    VeAPSR_U_Lv1PVBrkDelPVS = APSR_ac_DW.PrevValue_DSTATE_g;
    if ((VeAPSR_b_PvBrkEnabled) && (VeAPSR_b_BrakeStatus))
    {
        /* MinMax: '<S87>/clip to min' incorporates:
         *  Constant: '<S95>/Calib'
         *  Sum: '<S79>/Sum2'
         */
        TmpSignalConversionAtTmpVM_Fc_a = VeAPSR_U_Lv1PVBrkDelPVS -
            KeAPSR_U_Lv1PvBrkRampDec;
    }
    else
    {
        if ((VeAPSR_b_PvBrkEnabled) && (VeAPSR_U_Lv1PVBrkDelPVS >= fminf
                (KeAPSR_U_Lv1PvBrkLHMax, VeAPSR_U_Lv1DelPvsLmtdHires)))
        {
            /* Switch: '<S79>/LimitValueIfBrakeOnlyEvent' incorporates:
             *  Constant: '<S79>/Zero1'
             */
            TmpSignalConversionAtTmpVM_Fc_a = 0.0F;
        }
        else
        {
            /* Switch: '<S79>/LimitValueIfBrakeOnlyEvent' incorporates:
             *  Constant: '<S96>/Calib'
             */
            TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_U_Lv1PvBrkRampInc;
        }

        /* MinMax: '<S87>/clip to min' incorporates:
         *  Sum: '<S79>/Sum'
         */
        TmpSignalConversionAtTmpVM_Fc_a += VeAPSR_U_Lv1PVBrkDelPVS;
    }

    /* Logic: '<S79>/Logical3' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S79>/inactive1'
     *  MinMax: '<S79>/cliptomax'
     *  RelationalOperator: '<S79>/relational'
     *  Switch: '<S79>/LimitValueIfBrakeOnlyEvent'
     */
    rtb_Logical3_b = ((VeAPSR_b_PvBrkEnabled) || ((VeAPSR_U_Lv1DelPvsLmtdHires >
                        TmpSignalConversionAtTmpVM_Fc_a) &&
                       (APSR_ac_DW.OLD_VALUE_DSTATE_e)));
    if (!rtb_Logical3_b)
    {
        /* MinMax: '<S87>/clip to min' */
        TmpSignalConversionAtTmpVM_Fc_a = VeAPSR_U_Lv1DelPvsLmtdHires;
    }

    /* MinMax: '<S79>/MinMax1' incorporates:
     *  Constant: '<S79>/Constant Value'
     */
    rtb_MinMax1_f = fmaxf(TmpSignalConversionAtTmpVM_Fc_a, 0.0F);

#endif

    /* End of UnitDelay: '<S79>/PrevValue' */

    /* Switch: '<S26>/freeze when active' incorporates:
     *  Constant: '<S76>/Calib'
     *  SignalConversion generated from: '<S26>/Variant Source'
     */
#if Rte_SysCon_Variant_APSR_5

    if (KeAPSR_b_PVBrkNewStrg)
    {
        /* VariantMerge generated from: '<S26>/Variant Source' */
        APSR_ac_B.VariantMerge_For_Variant_Source = rtb_MinMax1;
    }
    else
    {
        /* VariantMerge generated from: '<S26>/Variant Source' */
        APSR_ac_B.VariantMerge_For_Variant_Source = rtb_MinMax1_f;
    }

#elif !Rte_SysCon_Variant_APSR_4 && !Rte_SysCon_Variant_APSR_5

    /* VariantMerge generated from: '<S26>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S26>/Variant Source'
     */
    APSR_ac_B.VariantMerge_For_Variant_Source = rtb_MinMax1_f;

#endif

    /* End of Switch: '<S26>/freeze when active' */

    /* Lookup_n-D: '<S540>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     */
    VeAPSR_k_DelpvsFiltConstDr = look1_iflf_binlcapw
        (APSR_ac_B.TmpSignalConversionAtTmpVM_FcnC, ((const float32 *)
          &(KxAPSR_k_DelpvsFiltConstDr[0])), ((const float32 *)
          &(KtAPSR_k_DelpvsFiltConstDr[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S46>/Digital Lowpass Reset Enabled' */
    /* Sum: '<S537>/Summation' incorporates:
     *  Product: '<S537>/Multiplication'
     *  Sum: '<S537>/Subtraction'
     *  UnitDelay: '<S537>/Unit Delay'
     */
    TmpSignalConversionAtTmpVM_Fc_a =
        ((APSR_ac_B.VariantMerge_For_Variant_Source -
          APSR_ac_DW.UnitDelay_DSTATE_p) * VeAPSR_k_DelpvsFiltConstDr) +
        APSR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S537>/Unit Delay' incorporates:
     *  Switch: '<S537>/Switch2'
     */
    APSR_ac_DW.UnitDelay_DSTATE_p = TmpSignalConversionAtTmpVM_Fc_a;

    /* MinMax: '<S46>/x2' incorporates:
     *  Switch: '<S537>/Switch2'
     */
    VeAPSR_U_DelPvsHires = fminf(APSR_ac_B.VariantMerge_For_Variant_Source,
        TmpSignalConversionAtTmpVM_Fc_a);

    /* End of Outputs for SubSystem: '<S46>/Digital Lowpass Reset Enabled' */

    /* Lookup_n-D: '<S539>/Vector' incorporates:
     *  MinMax: '<S46>/x2'
     */
    VeAPSR_Pct_PtcPdlPctTbl = look1_iflf_binlcapw(VeAPSR_U_DelPvsHires, ((const
        float32 *)&(KxAPSR_Pct_PtcPdlPct[0])), ((const float32 *)
        &(KtAPSR_Pct_PtcPdlPct[0])), 8U);

    /* MinMax: '<S46>/MinMax' */
    TmpSignalConversionAtTmpVM_Fc_a = fminf
        (APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_e, VeAPSR_Pct_PtcPdlPctTbl);

    /* Outputs for Atomic SubSystem: '<S46>/Limiter' */
    /* Switch: '<S541>/Switch1' incorporates:
     *  Constant: '<S46>/1'
     *  RelationalOperator: '<S541>/Relational Operator'
     */
    if (100.0F < TmpSignalConversionAtTmpVM_Fc_a)
    {
        /* MinMax: '<S87>/clip to min' */
        TmpSignalConversionAtTmpVM_Fc_a = 100.0F;
    }

    /* End of Switch: '<S541>/Switch1' */

    /* Switch: '<S541>/Switch' incorporates:
     *  Constant: '<S46>/2'
     *  RelationalOperator: '<S541>/Relational Operator1'
     */
    if (TmpSignalConversionAtTmpVM_Fc_a > 0.0F)
    {
        /* Switch: '<S541>/Switch' */
        VeAPSR_Pct_PedalPercent = TmpSignalConversionAtTmpVM_Fc_a;
    }
    else
    {
        /* Switch: '<S541>/Switch' */
        VeAPSR_Pct_PedalPercent = 0.0F;
    }

    /* End of Switch: '<S541>/Switch' */
    /* End of Outputs for SubSystem: '<S46>/Limiter' */
#if !Rte_SysCon_Variant_APSR_1

    /* Outputs for Atomic SubSystem: '<S54>/If Action Subsystem' */
    /* RelationalOperator: '<S61>/Comparison' incorporates:
     *  Constant: '<S61>/Constant Value'
     *  Constant: '<S61>/Constant Value1'
     *  S-Function (sfix_bitop): '<S61>/Bitwise Logical Operator'
     */
    rtb_Comparison_h = ((((sint32)APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_k) & 2)
                        > 0);

    /* End of Outputs for SubSystem: '<S54>/If Action Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S55>/If Action Subsystem' */
    /* Outputs for Atomic SubSystem: '<S54>/If Action Subsystem1' */
    /* VariantMerge generated from: '<S54>/Variant Source' incorporates:
     *  Constant: '<S62>/Constant Value2'
     *  RelationalOperator: '<S62>/Comparison1'
     *  SignalConversion generated from: '<S54>/Variant Source'
     */
    rtb_VariantMerge_For_Variant__d = (((sint32)
        APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_k) == 2);

    /* RelationalOperator: '<S63>/Comparison1' incorporates:
     *  Constant: '<S63>/Constant Value2'
     */
    rtb_Comparison1_kk = (1 == ((sint32)
                           APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_k));

    /* End of Outputs for SubSystem: '<S55>/If Action Subsystem' */
#endif

    /* SignalConversion generated from: '<S54>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S55>/Variant Source'
     */
#if !Rte_SysCon_Variant_APSR_1

    /* VariantMerge generated from: '<S54>/Variant Source' */
    rtb_VariantMerge_For_Variant__d = rtb_Comparison_h;

#else

    /* VariantMerge generated from: '<S55>/Variant Source' incorporates:
     *  SignalConversion generated from: '<S55>/Variant Source'
     */
    rtb_VariantMerge_For_Variant__a = rtb_Comparison1_kk;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source' */

    /* SignalConversion generated from: '<S55>/Variant Source' */
#if !Rte_SysCon_Variant_APSR_1

    /* Outputs for Atomic SubSystem: '<S55>/If Action Subsystem1' */
    /* RelationalOperator: '<S64>/Comparison' incorporates:
     *  Constant: '<S64>/Constant Value'
     *  Constant: '<S64>/Constant Value1'
     *  S-Function (sfix_bitop): '<S64>/Bitwise Logical Operator'
     */
    rtb_relOp2_i = ((((sint32)APSR_ac_B.TmpSignalConversionAtTmpVM_Fc_k) & 1) >
                    0);

    /* VariantMerge generated from: '<S55>/Variant Source' */
    rtb_VariantMerge_For_Variant__a = rtb_relOp2_i;

    /* End of Outputs for SubSystem: '<S55>/If Action Subsystem1' */
#endif

    /* End of SignalConversion generated from: '<S55>/Variant Source' */

    /* Outputs for Atomic SubSystem: '<S60>/EdgeFalling' */
    /* Logic: '<S66>/AND' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read'
     *  Logic: '<S66>/OR1'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    rtb_ntt2 = ((!AeAPSR_b_Pv2MinTestFailed) && (APSR_ac_DW.UnitDelay_DSTATE_en));

    /* Update for UnitDelay: '<S66>/Unit Delay' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read'
     */
    APSR_ac_DW.UnitDelay_DSTATE_en = AeAPSR_b_Pv2MinTestFailed;

    /* End of Outputs for SubSystem: '<S60>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S60>/EdgeFalling1' */
    /* Logic: '<S67>/AND' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read1'
     *  Logic: '<S67>/OR1'
     *  UnitDelay: '<S67>/Unit Delay'
     */
    rtb_Comparison_h = ((!AeAPSR_b_Pv2MaxTestFailed) &&
                        (APSR_ac_DW.UnitDelay_DSTATE_n3));

    /* Update for UnitDelay: '<S67>/Unit Delay' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read1'
     */
    APSR_ac_DW.UnitDelay_DSTATE_n3 = AeAPSR_b_Pv2MaxTestFailed;

    /* End of Outputs for SubSystem: '<S60>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S60>/EdgeFalling2' */
    /* Logic: '<S68>/AND' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read2'
     *  Logic: '<S68>/OR1'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    rtb_Comparison1_kk = ((!AeAPSR_b_Pv1MinTestFailed) &&
                          (APSR_ac_DW.UnitDelay_DSTATE_df));

    /* Update for UnitDelay: '<S68>/Unit Delay' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read2'
     */
    APSR_ac_DW.UnitDelay_DSTATE_df = AeAPSR_b_Pv1MinTestFailed;

    /* End of Outputs for SubSystem: '<S60>/EdgeFalling2' */

    /* Outputs for Atomic SubSystem: '<S60>/EdgeFalling3' */
    /* Logic: '<S69>/AND' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read3'
     *  Logic: '<S69>/OR1'
     *  UnitDelay: '<S69>/Unit Delay'
     */
    rtb_relOp2_i = ((!AeAPSR_b_Pv1MaxTestFailed) &&
                    (APSR_ac_DW.UnitDelay_DSTATE_mz));

    /* Update for UnitDelay: '<S69>/Unit Delay' incorporates:
     *  DataStoreRead: '<S60>/Data Store Read3'
     */
    APSR_ac_DW.UnitDelay_DSTATE_mz = AeAPSR_b_Pv1MaxTestFailed;

    /* End of Outputs for SubSystem: '<S60>/EdgeFalling3' */

    /* Logic: '<S86>/ntt2' incorporates:
     *  Logic: '<S60>/Logical1'
     */
    rtb_ntt2 = (((rtb_ntt2 || rtb_Comparison_h) || rtb_Comparison1_kk) ||
                rtb_relOp2_i);

    /* Logic: '<S60>/Logical5' incorporates:
     *  Logic: '<S60>/Logical2'
     *  Logic: '<S60>/Logical3'
     *  Logic: '<S60>/Logical4'
     */
    rtb_ntt2 = ((rtb_ntt2 && (VeAPSI_b_IpEEIsInPlantMode)) || ((rtb_ntt2 &&
                  (!VeAPSI_b_IpEEIsInPlantMode)) &&
                 TmpSignalConversionAtTmpVM_F_hr));

    /* Chart: '<S23>/EEPROM_Manage' */
    /* Gateway: APSR_FastTEF/APSC_FUNC/EEPROM_Save/EEPROM_Manage */
    /* During: APSR_FastTEF/APSC_FUNC/EEPROM_Save/EEPROM_Manage */
    if (((uint32)APSR_ac_DW.is_active_c10_APSR_ac) == 0U)
    {
        /* Entry: APSR_FastTEF/APSC_FUNC/EEPROM_Save/EEPROM_Manage */
        APSR_ac_DW.is_active_c10_APSR_ac = 1U;

        /* Entry Internal: APSR_FastTEF/APSC_FUNC/EEPROM_Save/EEPROM_Manage */
        /* Transition: '<S56>:5' */
        VeAPSR_b_EEPROM_Ready = false;
        APSR_ac_DW.LeAPSR_Cnt_FailCounter = 0U;
        APSR_ac_DW.is_c10_APSR_ac = APSR_ac_IN_WAIT_TRIGGER;
    }
    else if (((uint32)APSR_ac_DW.is_c10_APSR_ac) == APSR_ac_IN_EE_PENDING)
    {
        /* During 'EE_PENDING': '<S56>:17' */
        if (!rtb_VariantMerge_For_Variant__d)
        {
            /* Transition: '<S56>:19' */
            /* Transition: '<S56>:20' */
            /* Transition: '<S56>:22' */
            /* Transition: '<S56>:32' */
            VeAPSR_b_EEPROM_Ready = true;

            /* Transition: '<S56>:34' */
            /* Transition: '<S56>:36' */
            /* Transition: '<S56>:38' */
            APSR_ac_DW.is_c10_APSR_ac = APSR_ac_IN_WAIT_TRIGGER;
        }
    }
    else
    {
        /* During 'WAIT_TRIGGER': '<S56>:14' */
        if (rtb_ntt2 || rtb_VariantMerge_For_Variant__a)
        {
            /* Transition: '<S56>:6' */
            guard1 = false;
            if (rtb_ntt2)
            {
                /* Transition: '<S56>:8' */
                /* Transition: '<S56>:10' */
                APSR_ac_DW.LeAPSR_Cnt_FailCounter = 0U;
                if (!rtb_VariantMerge_For_Variant__d)
                {
                    /* Transition: '<S56>:12' */
                    /* Transition: '<S56>:15' */
                    /* Transition: '<S56>:20' */
                    /* Transition: '<S56>:22' */
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S56>:18' */
                    APSR_ac_DW.is_c10_APSR_ac = APSR_ac_IN_EE_PENDING;
                }
            }
            else
            {
                /* Transition: '<S56>:24' */
                if (APSR_ac_DW.LeAPSR_Cnt_FailCounter >= KeAPSR_Cnt_WrtAttempts)
                {
                    /* Transition: '<S56>:26' */
                    /* Transition: '<S56>:29' */
                    VeAPSR_b_EEPROM_Ready = false;

                    /* Transition: '<S56>:36' */
                    /* Transition: '<S56>:38' */
                    APSR_ac_DW.is_c10_APSR_ac = APSR_ac_IN_WAIT_TRIGGER;
                }
                else
                {
                    /* Transition: '<S56>:28' */
                    APSR_ac_DW.LeAPSR_Cnt_FailCounter = (uint8)((sint32)
                        (((sint32)APSR_ac_DW.LeAPSR_Cnt_FailCounter) + 1));
                    guard1 = true;
                }
            }

            if (guard1)
            {
                /* Transition: '<S56>:32' */
                VeAPSR_b_EEPROM_Ready = true;

                /* Transition: '<S56>:34' */
                /* Transition: '<S56>:36' */
                /* Transition: '<S56>:38' */
                APSR_ac_DW.is_c10_APSR_ac = APSR_ac_IN_WAIT_TRIGGER;
            }
        }
        else
        {
            VeAPSR_b_EEPROM_Ready = false;
        }
    }

    /* End of Chart: '<S23>/EEPROM_Manage' */

    /* Logic: '<S58>/Logical1' incorporates:
     *  Constant: '<S65>/Calib'
     *  Logic: '<S58>/Logical2'
     *  Logic: '<S58>/Logical3'
     *  Logic: '<S58>/Logical4'
     */
    VeAPSR_b_EEPROM_Store = ((rtb_ntt2 && (!KeAPSR_b_EEPROMStoreNew_Enb)) ||
        ((KeAPSR_b_EEPROMStoreNew_Enb) && (VeAPSR_b_EEPROM_Ready)));

    /* Outputs for Enabled SubSystem: '<S23>/Str_PV1PV2_EEPROM' incorporates:
     *  EnablePort: '<S59>/Enable'
     */
    if (VeAPSR_b_EEPROM_Store)
    {
        /* Outport: '<Root>/AeAPSR_b_Pv1MaxTestFailed_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv1MaxTestFailed_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv1MaxTestFailed_AeAPSR_b_Pv1MaxTestFailed
            (AeAPSR_b_Pv1MaxTestFailed);

        /* Outport: '<Root>/AeAPSR_b_Pv1MaxTestNotCmplt_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv1MaxTestNotCmplt_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv1MaxTestNotCmplt_AeAPSR_b_Pv1MaxTestNotCmplt
            (AeAPSR_b_Pv1MaxTestNotCmplt);

        /* Outport: '<Root>/AeAPSR_b_Pv1MinTestFailed_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv1MinTestFailed_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv1MinTestFailed_AeAPSR_b_Pv1MinTestFailed
            (AeAPSR_b_Pv1MinTestFailed);

        /* Outport: '<Root>/AeAPSR_b_Pv1MinTestNotCmplt_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv1MinTestNotCmplt_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv1MinTestNotCmplt_AeAPSR_b_Pv1MinTestNotCmplt
            (AeAPSR_b_Pv1MinTestNotCmplt);

        /* Outport: '<Root>/AeAPSR_b_Pv2MaxTestFailed_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv2MaxTestFailed_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv2MaxTestFailed_AeAPSR_b_Pv2MaxTestFailed
            (AeAPSR_b_Pv2MaxTestFailed);

        /* Outport: '<Root>/AeAPSR_b_Pv2MaxTestNotCmplt_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv2MaxTestNotCmplt_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv2MaxTestNotCmplt_AeAPSR_b_Pv2MaxTestNotCmplt
            (AeAPSR_b_Pv2MaxTestNotCmplt);

        /* Outport: '<Root>/AeAPSR_b_Pv2MinTestFailed_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv2MinTestFailed_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv2MinTestFailed_AeAPSR_b_Pv2MinTestFailed
            (AeAPSR_b_Pv2MinTestFailed);

        /* Outport: '<Root>/AeAPSR_b_Pv2MinTestNotCmplt_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pv2MinTestNotCmplt_Read'
         */
        (void)Rte_Write_AeAPSR_b_Pv2MinTestNotCmplt_AeAPSR_b_Pv2MinTestNotCmplt
            (AeAPSR_b_Pv2MinTestNotCmplt);

        /* Outport: '<Root>/AeAPSR_U_Pvs1MaxValue_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pvs1MaxValue_Read'
         */
        (void)Rte_Write_AeAPSR_U_Pvs1MaxValue_AeAPSR_U_Pvs1MaxValue
            (AeAPSR_U_Pvs1MaxValue);

        /* Outport: '<Root>/AeAPSR_U_Pvs1MinValue_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pvs1MinValue_Read'
         */
        (void)Rte_Write_AeAPSR_U_Pvs1MinValue_AeAPSR_U_Pvs1MinValue
            (AeAPSR_U_Pvs1MinValue);

        /* Outport: '<Root>/AeAPSR_U_Pvs2MaxValue_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pvs2MaxValue_Read'
         */
        (void)Rte_Write_AeAPSR_U_Pvs2MaxValue_AeAPSR_U_Pvs2MaxValue
            (AeAPSR_U_Pvs2MaxValue);

        /* Outport: '<Root>/AeAPSR_U_Pvs2MinValue_Strimm_out' incorporates:
         *  DataStoreRead: '<S59>/Pvs2MinValue_Read'
         */
        (void)Rte_Write_AeAPSR_U_Pvs2MinValue_AeAPSR_U_Pvs2MinValue
            (AeAPSR_U_Pvs2MinValue);
    }

    /* End of Outputs for SubSystem: '<S23>/Str_PV1PV2_EEPROM' */

    /* SignalConversion generated from: '<S26>/Variant Source2' */
#if Rte_SysCon_Variant_APSR_4

    /* VariantMerge generated from: '<S26>/Variant Source2' */
    rtb_VariantMerge_For_Variant__o = rtb_Logical3_o;

#endif

    /* End of SignalConversion generated from: '<S26>/Variant Source2' */

    /* Switch: '<S26>/freeze when active1' incorporates:
     *  Constant: '<S76>/Calib'
     *  SignalConversion generated from: '<S26>/Variant Source2'
     */
#if Rte_SysCon_Variant_APSR_5

    if (KeAPSR_b_PVBrkNewStrg)
    {
        /* VariantMerge generated from: '<S26>/Variant Source2' */
        rtb_VariantMerge_For_Variant__o = rtb_Logical3_o;
    }
    else
    {
        /* VariantMerge generated from: '<S26>/Variant Source2' */
        rtb_VariantMerge_For_Variant__o = rtb_Logical3_b;
    }

#elif !Rte_SysCon_Variant_APSR_4 && !Rte_SysCon_Variant_APSR_5

    /* VariantMerge generated from: '<S26>/Variant Source2' incorporates:
     *  SignalConversion generated from: '<S26>/Variant Source2'
     */
    rtb_VariantMerge_For_Variant__o = rtb_Logical3_b;

#endif

    /* End of Switch: '<S26>/freeze when active1' */

    /* RelationalOperator: '<S81>/Relational Operator3' incorporates:
     *  Constant: '<S81>/Constant3'
     *  S-Function (sfix_bitop): '<S81>/Bitwise Operator2'
     */
    rtb_VariantMerge_For_Variant__d = ((((uint32)
        APSR_ac_B.TmpSignalConversionAtTmpVM_F_e2) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S81>/EdgeFalling1' */
    /* Logic: '<S104>/AND' incorporates:
     *  Logic: '<S104>/OR1'
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__a = ((!rtb_VariantMerge_For_Variant__d) &&
        (APSR_ac_DW.UnitDelay_DSTATE_dv));

    /* Update for UnitDelay: '<S104>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_dv = rtb_VariantMerge_For_Variant__d;

    /* End of Outputs for SubSystem: '<S81>/EdgeFalling1' */

    /* If: '<S81>/If' incorporates:
     *  Logic: '<S26>/NOT'
     *  Logic: '<S26>/OR2'
     *  Logic: '<S81>/Logical5'
     */
    if (rtb_VariantMerge_For_Variant__a ||
            ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_ew) ||
             (APSR_ac_B.TmpSignalConversionAtTmpVM_F_fz)))
    {
        /* Outputs for IfAction SubSystem: '<S81>/Init' incorporates:
         *  ActionPort: '<S106>/Action Port'
         */
        APSR_ac_Init_j(&APSR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S81>/Init' */
    }
    else if (!rtb_VariantMerge_For_Variant__o)
    {
        /* Outputs for IfAction SubSystem: '<S81>/Pass' incorporates:
         *  ActionPort: '<S107>/Action Port'
         */
        APSR_ac_Pass(&APSR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S81>/Pass' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S81>/Fail' incorporates:
         *  ActionPort: '<S105>/Action Port'
         */
        APSR_ac_Fail(&APSR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S81>/Fail' */
    }

    /* End of If: '<S81>/If' */

    /* Logic: '<S82>/BRAKE_TRANSITION_ON' incorporates:
     *  Logic: '<S82>/AND'
     *  Logic: '<S86>/nott'
     *  UnitDelay: '<S82>/OLD_VALUE'
     */
    rtb_VariantMerge_For_Variant__d = (rtb_AND_af || (rtb_inactive_n &&
        (APSR_ac_DW.OLD_VALUE_DSTATE_bg)));

    /* Outputs for Atomic SubSystem: '<S26>/Signal Latch On' */
    /* Logic: '<S86>/ntt2' incorporates:
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_ntt2 = APSR_ac_DW.UnitDelay_DSTATE_j1;

    /* Logic: '<S83>/OR2' incorporates:
     *  UnitDelay: '<S83>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__o = (rtb_VariantMerge_For_Variant__o ||
        (APSR_ac_DW.UnitDelay_DSTATE_j1));

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_j1 = rtb_VariantMerge_For_Variant__o;

    /* End of Outputs for SubSystem: '<S26>/Signal Latch On' */

    /* UnitDelay: '<S86>/OLD_VALUE2' incorporates:
     *  Logic: '<S86>/ntt2'
     */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    /* Logic: '<S86>/ntt2' */
    rtb_ntt2 = !APSR_ac_DW.OLD_VALUE2_DSTATE_l;

#endif

    /* End of UnitDelay: '<S86>/OLD_VALUE2' */

    /* SignalConversion generated from: '<S86>/Variant Source1' */
#if Rte_SysCon_Variant_APSR_4

    /* UnitDelay: '<S137>/Unit Delay' */
    rtb_UnitDelay_n1 = rtb_ntt2;

#endif

    /* End of SignalConversion generated from: '<S86>/Variant Source1' */

    /* Logic: '<S86>/inactive' */
#if !Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    /* Logic: '<S86>/inactive' */
    rtb_inactive_n = !rtb_VariantMerge_For_Variant__d;

#endif

    /* End of Logic: '<S86>/inactive' */

    /* SignalConversion generated from: '<S86>/Variant Source1' incorporates:
     *  Switch: '<S86>/freezewhenactive1'
     */
#if !Rte_SysCon_Variant_APSR_4 && !Rte_SysCon_Variant_APSR_5

    /* UnitDelay: '<S137>/Unit Delay' */
    rtb_UnitDelay_n1 = rtb_inactive_n;

#elif Rte_SysCon_Variant_APSR_5

    /* Switch: '<S86>/freezewhenactive1' incorporates:
     *  Constant: '<S125>/Calib'
     */
    if (KeAPSR_b_PVBrkNewStrg)
    {
        /* UnitDelay: '<S137>/Unit Delay' */
        rtb_UnitDelay_n1 = rtb_ntt2;
    }
    else
    {
        /* UnitDelay: '<S137>/Unit Delay' */
        rtb_UnitDelay_n1 = rtb_inactive_n;
    }

#endif

    /* End of SignalConversion generated from: '<S86>/Variant Source1' */

    /* Lookup_n-D: '<S130>/Vector' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     */
    VeAPSR_K_Lv1PvTrqRampMultMin = look1_iflf_binlcapw
        (APSR_ac_B.TmpSignalConversionAtTmpVM_FcnC, ((const float32 *)
          &(KxAPSR_K_Lv1PvTrqRampMultMinTbl[0])), ((const float32 *)
          &(KtAPSR_K_Lv1PvTrqRampMultMinTbl[0])), 4U);

    /* Outputs for Atomic SubSystem: '<S33>/Counter Reset Enabled ' */
    /* Switch: '<S131>/Switch' incorporates:
     *  Constant: '<S132>/Calib'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S33>/Logical3'
     *  RelationalOperator: '<S33>/Comparison1'
     *  Switch: '<S131>/Switch2'
     *  UnitDelay: '<S33>/Unit Delay'
     */
    if (VeAPSR_Pct_PedalPercent < KeAPSR_Pct_KickDownUp)
    {
        /* Switch: '<S131>/Switch' incorporates:
         *  Constant: '<S131>/Constant Value2'
         */
        rtb_Switch_dt = 0U;
    }
    else if (!APSR_ac_DW.UnitDelay_DSTATE_ot)
    {
        /* Switch: '<S131>/Switch2' incorporates:
         *  Constant: '<S131>/Constant Value1'
         *  Sum: '<S131>/Subtraction'
         *  Switch: '<S131>/Switch'
         *  UnitDelay: '<S131>/Unit Delay'
         */
        rtb_Switch_dt = (uint16)(((uint32)APSR_ac_DW.UnitDelay_DSTATE_j) + 1U);
    }
    else
    {
        /* Switch: '<S131>/Switch' incorporates:
         *  Switch: '<S131>/Switch2'
         *  UnitDelay: '<S131>/Unit Delay'
         */
        rtb_Switch_dt = APSR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Update for UnitDelay: '<S131>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch_dt;

    /* End of Outputs for SubSystem: '<S33>/Counter Reset Enabled ' */

    /* RelationalOperator: '<S33>/Comparison2' incorporates:
     *  Constant: '<S133>/Calib'
     */
    rtb_inactive_n = (rtb_Switch_dt >= ((uint16)KeAPSR_Cnt_KickDownTmr));

    /* Outputs for Atomic SubSystem: '<S33>/Signal Latch On With Reset' */
    /* Logic: '<S137>/OR1' incorporates:
     *  Constant: '<S134>/Calib'
     *  Logic: '<S137>/NOT'
     *  Logic: '<S137>/OR'
     *  RelationalOperator: '<S33>/Comparison3'
     *  UnitDelay: '<S137>/Unit Delay'
     */
    rtb_VariantMerge_For_Variant__a = (rtb_inactive_n ||
        ((VeAPSR_Pct_PedalPercent > KeAPSR_Pct_KickDownLwr) &&
         (APSR_ac_DW.UnitDelay_DSTATE_gq)));

    /* Update for UnitDelay: '<S137>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_gq = rtb_VariantMerge_For_Variant__a;

    /* End of Outputs for SubSystem: '<S33>/Signal Latch On With Reset' */

    /* Switch: '<S33>/switchh' */
    if (rtb_VariantMerge_For_Variant__a)
    {
        /* Switch: '<S33>/switchh' */
        TmpSignalConversionAtTmpVM_Fc_p = VeAPSR_Pct_PedalPercent;
    }
    else
    {
        /* Switch: '<S33>/switchh' incorporates:
         *  Constant: '<S135>/Calib'
         *  MinMax: '<S33>/Min'
         */
        TmpSignalConversionAtTmpVM_Fc_p = fminf(VeAPSR_Pct_PedalPercent,
            KeAPSR_Pct_KickDownLimit);
    }

    /* End of Switch: '<S33>/switchh' */

    /* Update for UnitDelay: '<S363>/Unit Delay3' */
    APSR_ac_DW.UnitDelay3_DSTATE = rtb_OR1_n;

    /* Update for UnitDelay: '<S536>/Unit Delay' incorporates:
     *  Chart: '<S49>/Max_Chart'
     *  Constant: '<S535>/Constant'
     *  RelationalOperator: '<S536>/Comparison5'
     *  Switch: '<S42>/switch'
     */
    APSR_ac_DW.UnitDelay_DSTATE_o = (CeAPSR_e_LV1PVMode_PVOk == ((uint32)
        VeAPSR_e_Lv1PvFieldMode));

    /* Update for UnitDelay: '<S20>/FixPt Unit Delay2' */
    APSR_ac_DW.FixPtUnitDelay2_DSTATE = APSR_ac_B.RelationalOperator2_g;

    /* Update for UnitDelay: '<S383>/Unit Delay' */
#if Rte_SysCon_Variant_APSR_3

    APSR_ac_DW.UnitDelay_DSTATE_hg = rtb_VariantMerge_For_Variant_So;

#endif

    /* End of Update for UnitDelay: '<S383>/Unit Delay' */

    /* Update for UnitDelay: '<S363>/Unit Delay2' */
    APSR_ac_DW.UnitDelay2_DSTATE = rtb_nott2;

    /* Update for UnitDelay: '<S363>/Unit Delay1' */
    APSR_ac_DW.UnitDelay1_DSTATE = rtb_AND_nc;

    /* Update for UnitDelay: '<S363>/FixPt Unit Delay1' */
    APSR_ac_DW.FixPtUnitDelay1_DSTATE = rtb_AND_nc;

    /* Update for Enabled SubSystem: '<S363>/IP_PV2_MinMax_Chk' incorporates:
     *  EnablePort: '<S371>/Enable'
     */
    if (rtb_LatchaPass_p0)
    {
        /* Update for UnitDelay: '<S395>/delay' */
        APSR_ac_DW.delay_DSTATE = VeAPSR_U_Lv1IPPvs2Filt;

        /* Update for If: '<S371>/If' */
        if (APSR_ac_DW.If_ActiveSubsystem == 0)
        {
            /* Update for IfAction SubSystem: '<S371>/Else_Max_Test_Value' incorporates:
             *  ActionPort: '<S388>/Action Port'
             */
            /* Update for UnitDelay: '<S388>/delay' */
            APSR_ac_DW.delay_DSTATE_o = VeAPSR_U_IpEEETCPvs2MaxValue;

            /* Update for UnitDelay: '<S398>/Prev Counter' */
            APSR_ac_DW.PrevCounter_DSTATE_j = VeAPSR_Cnt_IpEELv1Pv2Maxcntr;

            /* Update for UnitDelay: '<S398>/Prev Pass Condition' */
            APSR_ac_DW.PrevPassCondition_DSTATE_g = rtb_LatchaPass_k;

            /* End of Update for SubSystem: '<S371>/Else_Max_Test_Value' */
        }

        /* End of Update for If: '<S371>/If' */

        /* Update for If: '<S371>/If1' */
        if (APSR_ac_DW.If1_ActiveSubsystem == 0)
        {
            /* Update for IfAction SubSystem: '<S371>/Else_Min_Test_Value' incorporates:
             *  ActionPort: '<S389>/Action Port'
             */
            /* Update for UnitDelay: '<S389>/delay' */
            APSR_ac_DW.delay_DSTATE_a = VeAPSR_U_IpEEETCPvs2MinValue;

            /* Update for UnitDelay: '<S404>/Prev Counter' */
            APSR_ac_DW.PrevCounter_DSTATE = rtb_PLUSS;

            /* Update for UnitDelay: '<S404>/Prev Pass Condition' */
            APSR_ac_DW.PrevPassCondition_DSTATE = rtb_AND_dn;

            /* End of Update for SubSystem: '<S371>/Else_Min_Test_Value' */
        }

        /* End of Update for If: '<S371>/If1' */
    }

    /* End of Update for SubSystem: '<S363>/IP_PV2_MinMax_Chk' */

    /* Update for UnitDelay: '<S80>/PrevValue' */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    APSR_ac_DW.PrevValue_DSTATE = rtb_MinMax1;

#endif

    /* End of Update for UnitDelay: '<S80>/PrevValue' */

    /* Update for UnitDelay: '<S85>/PrevV' */
    APSR_ac_DW.PrevV_DSTATE = VeAPSR_Cnt_Lv1PvBrkCntr;

    /* Update for UnitDelay: '<S71>/OLD_VALUE3' incorporates:
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtAPSR_FastTEFInport42'
     */
    APSR_ac_DW.OLD_VALUE3_DSTATE = APSR_ac_B.TmpSignalConversionAtTmpVM_F_ec;

    /* Update for UnitDelay: '<S72>/OLD_VALUE2' incorporates:
     *  Logic: '<S72>/Nand'
     */
    APSR_ac_DW.OLD_VALUE2_DSTATE = ((!VeAPSR_b_BrakeStatus) ||
        (!VeAPSR_b_FixedPdlChk));

    /* Update for UnitDelay: '<S73>/OLD_VALUE' */
    APSR_ac_DW.OLD_VALUE_DSTATE_b = VeAPSR_b_BrkTransitionOn;

    /* Update for UnitDelay: '<S26>/STUCK_Value' */
    APSR_ac_DW.STUCK_Value_DSTATE_j = rtb_VariantMerge_For_Variant__o;

    /* Update for UnitDelay: '<S483>/PREV_VALUE' */
    APSR_ac_DW.PREV_VALUE_DSTATE = VeAPSR_U_PvModeSnsArb;

    /* Update for UnitDelay: '<S483>/PREV_VALUE1' */
    APSR_ac_DW.PREV_VALUE1_DSTATE = TmpSignalConversionAtTmpVM_Fc_h;

    /* Update for UnitDelay: '<S474>/OLD_VALUE' */
    APSR_ac_DW.OLD_VALUE_DSTATE = APSR_ac_B.VariantMerge_For_Variant_Source;

    /* Update for UnitDelay: '<S482>/OLD_VALUE' */
    APSR_ac_DW.OLD_VALUE_DSTATE_l = TmpSignalConversionAtTmpVM_F_p0;

    /* Switch: '<S86>/freeze when active' */
    if (rtb_UnitDelay_n1)
    {
        /* Update for UnitDelay: '<S86>/OLD_VALUE1' */
        APSR_ac_DW.OLD_VALUE1_DSTATE = VeAPSR_U_Lv1DelPVS;
    }

    /* End of Switch: '<S86>/freeze when active' */

    /* Update for UnitDelay: '<S77>/OLD_VALUE1' */
    APSR_ac_DW.OLD_VALUE1_DSTATE_o = VeAPSR_b_PvBrkEnabled;

    /* Switch: '<S87>/Dec if Enabled else inc' incorporates:
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S87>/Zero'
     *  RelationalOperator: '<S87>/Comparison2'
     *  Sum: '<S87>/Dec'
     *  Sum: '<S87>/Inc'
     *  Switch: '<S87>/Hold while PVS is zero'
     */
    if (rtb_Logical1)
    {
        rtb_MinMax1 = VeAPSR_K_Lv1PvTrqLimMult - KeAPSR_K_Lv1PvTrqRampDec;
    }
    else if (VeAPSR_U_Lv1DelPVS < 0.001F)
    {
        /* Switch: '<S87>/Hold while PVS is zero' */
        rtb_MinMax1 = VeAPSR_K_Lv1PvTrqLimMult;
    }
    else
    {
        rtb_MinMax1 = KeAPSR_K_Lv1PvTrqRampInc + VeAPSR_K_Lv1PvTrqLimMult;
    }

    /* End of Switch: '<S87>/Dec if Enabled else inc' */

    /* Switch: '<S87>/Switch' incorporates:
     *  Constant: '<S129>/Calib'
     */
    if (VeAPSR_b_VehSpdSrcNotValid)
    {
        TmpSignalConversionAtTmpVM_Fc_a = KeAPSR_K_Lv1PvTrqRampMultMin;
    }
    else
    {
        TmpSignalConversionAtTmpVM_Fc_a = VeAPSR_K_Lv1PvTrqRampMultMin;
    }

    /* End of Switch: '<S87>/Switch' */

    /* Update for UnitDelay: '<S87>/Unit Delay' incorporates:
     *  Constant: '<S87>/Fixed One'
     *  MinMax: '<S87>/clip to min'
     *  MinMax: '<S87>/clip to one'
     */
    APSR_ac_DW.UnitDelay_DSTATE = fminf(1.0F, fmaxf(rtb_MinMax1,
        TmpSignalConversionAtTmpVM_Fc_a));

    /* Update for UnitDelay: '<S87>/OLD_VALUE' */
    APSR_ac_DW.OLD_VALUE_DSTATE_b1 = rtb_andd;

    /* Update for UnitDelay: '<S80>/Unit Delay' incorporates:
     *  UnitDelay: '<S80>/OLD_VALUE'
     *  UnitDelay: '<S80>/STUCK_Value'
     */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    APSR_ac_DW.UnitDelay_DSTATE_d = rtb_switchhh;
    APSR_ac_DW.OLD_VALUE_DSTATE_bv = rtb_Logical3_o;
    APSR_ac_DW.STUCK_Value_DSTATE = rtb_switchhh;

#endif

    /* End of Update for UnitDelay: '<S80>/Unit Delay' */

    /* Update for UnitDelay: '<S79>/PrevValue' incorporates:
     *  UnitDelay: '<S79>/OLD_VALUE'
     */
#if !Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    APSR_ac_DW.PrevValue_DSTATE_g = rtb_MinMax1_f;
    APSR_ac_DW.OLD_VALUE_DSTATE_e = rtb_Logical3_b;

#endif

    /* End of Update for UnitDelay: '<S79>/PrevValue' */

    /* Update for UnitDelay: '<S82>/OLD_VALUE' */
    APSR_ac_DW.OLD_VALUE_DSTATE_bg = rtb_VariantMerge_For_Variant__d;

    /* Update for UnitDelay: '<S86>/OLD_VALUE2' */
#if Rte_SysCon_Variant_APSR_4 || Rte_SysCon_Variant_APSR_5

    APSR_ac_DW.OLD_VALUE2_DSTATE_l = rtb_Logical2_j;

#endif

    /* End of Update for UnitDelay: '<S86>/OLD_VALUE2' */

    /* Update for UnitDelay: '<S33>/Unit Delay' */
    APSR_ac_DW.UnitDelay_DSTATE_ot = rtb_inactive_n;

    /* Switch: '<S21>/switch' incorporates:
     *  Chart: '<S49>/Max_Chart'
     *  Constant: '<S50>/Constant'
     *  Constant: '<S52>/Calib'
     *  RelationalOperator: '<S21>/Comparison1'
     *  RelationalOperator: '<S21>/Comparison2'
     *  Switch: '<S42>/switch'
     */
    if (KeAPSR_b_AccPedalFAArb)
    {
        rtb_Logical2_j = (((uint32)VeAPSR_e_Lv1PvFieldMode) !=
                          CeAPSR_e_LV1PVMode_PVOk);
    }
    else
    {
        rtb_Logical2_j = (CeAPSR_e_LV1PVMode_PVOk != ((uint32)rtb_SwitchHH));
    }

    /* End of Switch: '<S21>/switch' */

    /* Outport: '<Root>/VeAPSR_b_AccelPedalEffPositionFA' incorporates:
     *  Constant: '<S51>/Calib'
     *  Logic: '<S21>/Logical'
     *  SignalConversion generated from: '<S1>/AccPedalFA'
     */
    (void)Rte_Write_VeAPSR_b_AccelPedalEffPositionFA_Value(rtb_Logical2_j &&
        (KeAPSR_b_AccPedalFAMap));

    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalActPosition' incorporates:
     *  Gain: '<S136>/Gain'
     *  SignalConversion generated from: '<S1>/AccelPedalActPosition'
     */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalActPosition_Value
        (TmpSignalConversionAtTmpVM_Fc_p);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  SignalConversion generated from: '<S1>/AccelPedalEffPosition'
     */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalEffPosition_Value
        (TmpSignalConversionAtTmpVM_Fc_p);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Outport: '<Root>/VeAPSR_b_DrvBehAlert' incorporates:
     *  Constant: '<S53>/Calib'
     *  Logic: '<S22>/Logical'
     *  RelationalOperator: '<S22>/Comparison1'
     *  SignalConversion generated from: '<S1>/DrvBehAlert'
     */
    (void)Rte_Write_VeAPSR_b_DrvBehAlert_Value
        ((APSR_ac_B.TmpSignalConversionAtTmpVM_F_di) && (VeAPSR_Pct_PedalPercent
          >= KeAPSR_Pct_DrvBehThr));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_b_Failed5VRefAux' incorporates:
     *  SignalConversion generated from: '<S1>/Failed_5VRef_Aux'
     */
    (void)Rte_Write_VeAPSR_b_Failed5VRefAux_Value(APSR_ac_B.OR1_a);

    /* Outport: '<Root>/VeAPSR_b_Failed5VRefOut' incorporates:
     *  SignalConversion generated from: '<S1>/Failed_5VRef_Out'
     */
    (void)Rte_Write_VeAPSR_b_Failed5VRefOut_Value(APSR_ac_B.OR1_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Outport: '<Root>/VeAPSR_b_Lv1PvMod5HighCreepTrqReq' incorporates:
     *  Constant: '<S471>/Calib'
     *  Logic: '<S42>/HIGH_IDLE_REQ'
     *  Logic: '<S42>/HIGH_IDLE_REQ1'
     *  Logic: '<S42>/HIGH_IDLE_REQ2'
     *  Logic: '<S42>/HIGH_IDLE_REQ3'
     *  Logic: '<S42>/NOTT'
     *  SignalConversion generated from: '<S1>/High_Creep_Trq_Req'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvMod5HighCreepTrqReq_Value
        ((!VeAPSR_b_BrakeStatus) && ((rtb_FixPtUnitDelay2 &&
           (KeAPSR_b_HighCreepCohChk)) || (rtb_VariantMerge_For_Variant__e &&
           rtb_RelationalOperator3_f)));

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_b_KickDown' incorporates:
     *  SignalConversion generated from: '<S1>/KickDown'
     */
    (void)Rte_Write_VeAPSR_b_KickDown_Value(rtb_VariantMerge_For_Variant__a);

    /* Outport: '<Root>/VeAPSR_U_Lv1DelPVSHires' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1DelPVSHires'
     */
    (void)Rte_Write_VeAPSR_U_Lv1DelPVSHires_Value
        (APSR_ac_B.VariantMerge_For_Variant_Source);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv2MaxIPFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1Pv2MaxIPFailed'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv2MaxIPFailed_Value
        (rtb_VariantMerge_For_Variant__f);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv2MinIPFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1Pv2MinIPFailed'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv2MinIPFailed_Value(rtb_RelationalOperator3_ht);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Outport: '<Root>/VeAPSR_b_Lv1PvBrkActive' incorporates:
     *  Constant: '<S75>/Constant'
     *  Merge: '<S81>/Merge'
     *  RelationalOperator: '<S26>/Relational Operator2'
     *  SignalConversion generated from: '<S1>/Lv1PvBrkActive'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvBrkActive_Value(((uint32)APSR_ac_B.Merge_g) ==
        CeDFIB_e_Fail);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_b_Lv1PvTrqLimitReq' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1PvTrqLimitReq'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvTrqLimitReq_Value(rtb_Logical1);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv2LimFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_PV2_Lim_FAILED'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv2LimFailed_Value(APSR_ac_B.OR1);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Outport: '<Root>/VeAPSR_b_Lv1PvsValid' incorporates:
     *  Constant: '<S470>/Constant'
     *  RelationalOperator: '<S42>/relOp'
     *  SignalConversion generated from: '<S1>/Lv1_PVS_Valid'
     *  Switch: '<S42>/switch'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvsValid_Value(((uint32)VeAPSR_e_Lv1PvFieldMode)
        == CeAPSR_e_LV1PVMode_NotValid);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_b_Lv1PvCohFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_PV_Coh_FAILED'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvCohFailed_Value
        (APSR_ac_B.RelationalOperator2_g);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Outport: '<Root>/VeAPSR_e_Lv1PVMode' incorporates:
     *  DataTypeConversion: '<S25>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/Lv1_PV_MODE'
     */
    (void)Rte_Write_VeAPSR_e_Lv1PVMode_Value(rtb_SwitchHH);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv1LimFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_Pv1_Lim_FAILED'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv1LimFailed_Value(APSR_ac_B.OR1_p);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv1MaxIPFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_Pv1_Max_IP_Failed'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv1MaxIPFailed_Value(rtb_AND_oe);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv1MinIPFailed' incorporates:
     *  SignalConversion generated from: '<S1>/Lv1_Pv1_Min_IP_Failed'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv1MinIPFailed_Value(rtb_OR1_ld);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* Outport: '<Root>/VeAPSR_b_PVSMaxLearnt' incorporates:
     *  Logic: '<S35>/LV1_PV_FAIL_BRK_ON'
     *  Logic: '<S35>/Logical1'
     *  Logic: '<S35>/Logical2'
     *  Logic: '<S35>/Logical3'
     *  Logic: '<S35>/Logical4'
     *  SignalConversion generated from: '<S1>/PVS_MaxLearnt'
     */
    (void)Rte_Write_VeAPSR_b_PVSMaxLearnt_Value
        ((((!VeAPSR_b_IpEELv1Pv1MaxTestFailed) &&
           (!VeAPSR_b_IpEELv1Pv1MaxTestNotCmplt)) &&
          (!VeAPSR_b_IpEELv1Pv2MaxTestFailed)) &&
         (!VeAPSR_b_IpEELv1Pv2MaxTestNotCmplt));

    /* Outport: '<Root>/VeAPSR_b_PVSMinLearnt' incorporates:
     *  Logic: '<S35>/LV1_PV_FAIL_BRK_ON1'
     *  Logic: '<S35>/Logical5'
     *  Logic: '<S35>/Logical6'
     *  Logic: '<S35>/Logical7'
     *  Logic: '<S35>/Logical8'
     *  SignalConversion generated from: '<S1>/PVS_MinLearnt'
     */
    (void)Rte_Write_VeAPSR_b_PVSMinLearnt_Value
        ((((!VeAPSR_b_IpEELv1Pv1MinTestFailed) &&
           (!VeAPSR_b_IpEELv1Pv1MinTestNotCmplt)) &&
          (!VeAPSR_b_IpEELv1Pv2MinTestFailed)) &&
         (!VeAPSR_b_IpEELv1Pv2MinTestNotCmplt));

    /* Outport: '<Root>/VeAPSR_U_Pvs1MaxValue' incorporates:
     *  DataStoreRead: '<S23>/Pvs1MaxValue_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_U_Pvs1MaxValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs1MaxValue_Value(AeAPSR_U_Pvs1MaxValue);

    /* Outport: '<Root>/VeAPSR_U_Pvs1MinValue' incorporates:
     *  DataStoreRead: '<S23>/Pvs1MinValue_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_U_Pvs1MinValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs1MinValue_Value(AeAPSR_U_Pvs1MinValue);

    /* Outport: '<Root>/VeAPSR_U_Pvs2MaxValue' incorporates:
     *  DataStoreRead: '<S23>/Pvs2MaxValue_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_U_Pvs2MaxValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs2MaxValue_Value(AeAPSR_U_Pvs2MaxValue);

    /* Outport: '<Root>/VeAPSR_U_Pvs2MinValue' incorporates:
     *  DataStoreRead: '<S23>/Pvs2MinValue_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_U_Pvs2MinValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs2MinValue_Value(AeAPSR_U_Pvs2MinValue);

    /* Outport: '<Root>/VeAPSR_b_Pv1MaxTestFailed' incorporates:
     *  DataStoreRead: '<S23>/Pv1MaxTestFailed_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv1MaxTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MaxTestFailed_Value(AeAPSR_b_Pv1MaxTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv1MaxTestNotCmplt' incorporates:
     *  DataStoreRead: '<S23>/Pv1MaxTestNotCmplt_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv1MaxTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MaxTestNotCmplt_Value
        (AeAPSR_b_Pv1MaxTestNotCmplt);

    /* Outport: '<Root>/VeAPSR_b_Pv1MinTestFailed' incorporates:
     *  DataStoreRead: '<S23>/Pv1MinTestFailed_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv1MinTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MinTestFailed_Value(AeAPSR_b_Pv1MinTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv1MinTestNotCmplt' incorporates:
     *  DataStoreRead: '<S23>/Pv1MinTestNotCmplt_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv1MinTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MinTestNotCmplt_Value
        (AeAPSR_b_Pv1MinTestNotCmplt);

    /* Outport: '<Root>/VeAPSR_b_Pv2MaxTestFailed' incorporates:
     *  DataStoreRead: '<S23>/Pv2MaxTestFailed_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv2MaxTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MaxTestFailed_Value(AeAPSR_b_Pv2MaxTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv2MaxTestNotCmplt' incorporates:
     *  DataStoreRead: '<S23>/Pv2MaxTestNotCmplt_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv2MaxTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MaxTestNotCmplt_Value
        (AeAPSR_b_Pv2MaxTestNotCmplt);

    /* Outport: '<Root>/VeAPSR_b_Pv2MinTestFailed' incorporates:
     *  DataStoreRead: '<S23>/Pv2MinTestFailed_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv2MinTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MinTestFailed_Value(AeAPSR_b_Pv2MinTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv2MinTestNotCmplt' incorporates:
     *  DataStoreRead: '<S23>/Pv2MinTestNotCmplt_Read1'
     *  SignalConversion generated from: '<S1>/VeAPSR_b_Pv2MinTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MinTestNotCmplt_Value
        (AeAPSR_b_Pv2MinTestNotCmplt);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr12_Corr' incorporates:
     *  Merge: '<S512>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr12_Corr'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr12_Corr_Value(APSR_ac_B.Merge_l);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1CktHi' incorporates:
     *  Merge: '<S331>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr1CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1CktHi_Value(APSR_ac_B.Merge_d);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1CktLo' incorporates:
     *  Merge: '<S330>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr1CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1CktLo_Value(APSR_ac_B.Merge_eo);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf' incorporates:
     *  Merge: '<S269>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf_Value
        (APSR_ac_B.Merge_j);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf' incorporates:
     *  Merge: '<S268>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf_Value
        (APSR_ac_B.Merge_f);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2CktHi' incorporates:
     *  Merge: '<S440>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr2CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2CktHi_Value(APSR_ac_B.Merge_h);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2CktLo' incorporates:
     *  Merge: '<S439>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr2CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2CktLo_Value(APSR_ac_B.Merge_e);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf' incorporates:
     *  Merge: '<S381>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf_Value
        (APSR_ac_B.Merge_c);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf' incorporates:
     *  Merge: '<S380>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf_Value(APSR_ac_B.Merge);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_BrkAccStuckPdl' incorporates:
     *  Merge: '<S81>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_BrkAccStuckPdl'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_BrkAccStuckPdl_Value(APSR_ac_B.Merge_g);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy' incorporates:
     *  Merge: '<S209>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt1Noisy_Value(APSR_ac_B.Merge_o);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy' incorporates:
     *  Merge: '<S154>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt2Noisy_Value(APSR_ac_B.Merge_p);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi' incorporates:
     *  Merge: '<S210>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt5CktHi_Value(APSR_ac_B.Merge_lk);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo' incorporates:
     *  Merge: '<S211>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt5CktLo_Value(APSR_ac_B.Merge_ct);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi' incorporates:
     *  Merge: '<S153>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt6CktHi_Value(APSR_ac_B.Merge_or);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo' incorporates:
     *  Merge: '<S152>/Merge'
     *  SignalConversion generated from: '<S1>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt6CktLo_Value(APSR_ac_B.Merge_oq);

    /* End of Outputs for SubSystem: '<Root>/APSR_FastTEF' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_APSR_6

FUNC(void, APSR_CODE) APSR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_APSR_6
#endif

}

#endif

/* Output function */
FUNC(void, APSR_CODE) DIDWrite_RWD9E15_IPEEREG16FLG(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E15_IPEEREG16FLG' incorporates:
     *  SubSystem: '<Root>/Poke_DID_DIDWrite_RWD9E15_IPEEREG16FLG_DidWrite'
     */
    /* DataStoreWrite: '<S15>/Pv2MinTestNotCmplt_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv2MinTestNotCmplt_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv2MinTestNotCmplt_DidWrite_Value
        ((&(AeAPSR_b_Pv2MinTestNotCmplt)));

    /* DataStoreWrite: '<S15>/Pv1MinTestNotCmplt_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv1MinTestNotCmplt_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv1MinTestNotCmplt_DidWrite_Value
        ((&(AeAPSR_b_Pv1MinTestNotCmplt)));

    /* DataStoreWrite: '<S15>/Pv2MaxTestNotCmplt_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv2MaxTestNotCmplt_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv2MaxTestNotCmplt_DidWrite_Value
        ((&(AeAPSR_b_Pv2MaxTestNotCmplt)));

    /* DataStoreWrite: '<S15>/Pv1MaxTestNotCmplt_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv1MaxTestNotCmplt_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv1MaxTestNotCmplt_DidWrite_Value
        ((&(AeAPSR_b_Pv1MaxTestNotCmplt)));

    /* DataStoreWrite: '<S15>/Pv2MinTestFailed_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv2MinTestFailed_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv2MinTestFailed_DidWrite_Value
        ((&(AeAPSR_b_Pv2MinTestFailed)));

    /* DataStoreWrite: '<S15>/Pv1MinTestFailed_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv1MinTestFailed_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv1MinTestFailed_DidWrite_Value
        ((&(AeAPSR_b_Pv1MinTestFailed)));

    /* DataStoreWrite: '<S15>/Pv2MaxTestFailed_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv2MaxTestFailed_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv2MaxTestFailed_DidWrite_Value
        ((&(AeAPSR_b_Pv2MaxTestFailed)));

    /* DataStoreWrite: '<S15>/Pv1MaxTestFailed_Write' incorporates:
     *  Inport: '<Root>/VeDCAB_b_Pv1MaxTestFailed_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_Pv1MaxTestFailed_DidWrite_Value
        ((&(AeAPSR_b_Pv1MaxTestFailed)));

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E15_IPEEREG16FLG' */
}

/* Output function */
FUNC(void, APSR_CODE) DIDWrite_RWD9E20_IPEEETCPVS1MINVAL(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E20_IPEEETCPVS1MINVAL' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWD9E20_IPEEETCPVS1MINVAL_DidWrite'
     */
    /* DataStoreWrite: '<S16>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDCAB_U_Pvs1MinValue_DidWrite'
     */
    (void)Rte_Read_VeDCAB_U_Pvs1MinValue_DidWrite_Value((&(AeAPSR_U_Pvs1MinValue)));

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E20_IPEEETCPVS1MINVAL' */
}

/* Output function */
FUNC(void, APSR_CODE) DIDWrite_RWD9E21_IPEEETCPVS1MAXVAL(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E21_IPEEETCPVS1MAXVAL' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWD9E21_IPEEETCPVS1MAXVAL_DidWrite'
     */
    /* DataStoreWrite: '<S17>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDCAB_U_Pvs1MaxValue_DidWrite'
     */
    (void)Rte_Read_VeDCAB_U_Pvs1MaxValue_DidWrite_Value((&(AeAPSR_U_Pvs1MaxValue)));

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E21_IPEEETCPVS1MAXVAL' */
}

/* Output function */
FUNC(void, APSR_CODE) DIDWrite_RWD9E22_IPEEETCPVS2MINVAL(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E22_IPEEETCPVS2MINVAL' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWD9E22_IPEEETCPVS2MINVAL_DidWrite'
     */
    /* DataStoreWrite: '<S18>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDCAB_U_Pvs2MinValue_DidWrite'
     */
    (void)Rte_Read_VeDCAB_U_Pvs2MinValue_DidWrite_Value((&(AeAPSR_U_Pvs2MinValue)));

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E22_IPEEETCPVS2MINVAL' */
}

/* Output function */
FUNC(void, APSR_CODE) DIDWrite_RWD9E23_IPEEETCPVS2MAXVAL(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E23_IPEEETCPVS2MAXVAL' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWD9E23_IPEEETCPVS2MAXVAL_DidWrite'
     */
    /* DataStoreWrite: '<S19>/Data Store Write' incorporates:
     *  Inport: '<Root>/VeDCAB_U_Pvs2MaxValue_DidWrite'
     */
    (void)Rte_Read_VeDCAB_U_Pvs2MaxValue_DidWrite_Value((&(AeAPSR_U_Pvs2MaxValue)));

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD9E23_IPEEETCPVS2MAXVAL' */
}

/* Output function */
#if Rte_SysCon_Variant_APSR_6

FUNC(void, APSR_CODE) FsftAPSR_Pct_AccelPedalActPosition(void)
{

#if Rte_SysCon_Variant_APSR_6

    /* Outputs for Function Call SubSystem: '<Root>/FsftAPSR_Pct_AccelPedalActPosition' */
    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalActPosition' incorporates:
     *  Chart: '<S5>/FsftAPSR_Pct_AccelPedalActPositionChrt'
     *  SignalConversion generated from: '<S5>/VeAPSR_Pct_AccelPedalActPosition'
     */
    /* Gateway: FsftAPSR_Pct_AccelPedalActPosition/FsftAPSR_Pct_AccelPedalActPositionChrt */
    /* During: FsftAPSR_Pct_AccelPedalActPosition/FsftAPSR_Pct_AccelPedalActPositionChrt */
    /* Entry Internal: FsftAPSR_Pct_AccelPedalActPosition/FsftAPSR_Pct_AccelPedalActPositionChrt */
    /* Transition: '<S582>:2' */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalActPosition_Value
        (KeAPSR_Pct_AccelPedalActPositionDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftAPSR_Pct_AccelPedalActPosition' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_6

FUNC(void, APSR_CODE) FsftAPSR_Pct_AccelPedalEffPosition(void)
{

#if Rte_SysCon_Variant_APSR_6

    /* Outputs for Function Call SubSystem: '<Root>/FsftAPSR_Pct_AccelPedalEffPosition' */
    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Chart: '<S6>/FsftAPSR_Pct_AccelPedalEffPositionChrt'
     *  SignalConversion generated from: '<S6>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    /* Gateway: FsftAPSR_Pct_AccelPedalEffPosition/FsftAPSR_Pct_AccelPedalEffPositionChrt */
    /* During: FsftAPSR_Pct_AccelPedalEffPosition/FsftAPSR_Pct_AccelPedalEffPositionChrt */
    /* Entry Internal: FsftAPSR_Pct_AccelPedalEffPosition/FsftAPSR_Pct_AccelPedalEffPositionChrt */
    /* Transition: '<S583>:2' */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalEffPosition_Value
        (KeAPSR_Pct_AccelPedalEffPositionDflt);

    /* Outport: '<Root>/VeAPSR_b_AccelPedalEffPositionFA' incorporates:
     *  Chart: '<S6>/FsftAPSR_Pct_AccelPedalEffPositionChrt'
     *  SignalConversion generated from: '<S6>/VeAPSR_b_AccelPedalEffPositionFA'
     */
    (void)Rte_Write_VeAPSR_b_AccelPedalEffPositionFA_Value(true);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  Chart: '<S6>/FsftAPSR_Pct_AccelPedalEffPositionChrt'
     *  SignalConversion generated from: '<S6>/VeAPSR_b_AccelPedalEffPositionFA_write'
     */
    Rte_IrvWrite_FsftAPSR_Pct_AccelPedalEffPosition_LeAPSR_b_AccelPedalEffPositionFA_write_IRV
        (true);

    /* End of Outputs for SubSystem: '<Root>/FsftAPSR_Pct_AccelPedalEffPosition' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_6

FUNC(void, APSR_CODE) PokeAPSR_Pct_AccelPedalActPosition(VAR(float32, AUTOMATIC)
    LeAPSR_Pct_AccelPedalActPosition, VAR(boolean, AUTOMATIC)
    LeAPSR_b_AccelPedalActPositionFA)
{

#if !Rte_SysCon_Variant_APSR_6

    UNUSED_PARAMETER(LeAPSR_Pct_AccelPedalActPosition);

#endif

#if !Rte_SysCon_Variant_APSR_6

    UNUSED_PARAMETER(LeAPSR_b_AccelPedalActPositionFA);

#endif

#if Rte_SysCon_Variant_APSR_6

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_Pct_AccelPedalActPosition' */
    /* Chart: '<S7>/PokeAPSR_Pct_AccelPedalActPositionChrt' incorporates:
     *  SignalConversion generated from: '<S7>/LeAPSR_Pct_AccelPedalActPosition'
     *  SignalConversion generated from: '<S7>/LeAPSR_b_AccelPedalActPositionFA'
     */
    /* Gateway: PokeAPSR_Pct_AccelPedalActPosition/PokeAPSR_Pct_AccelPedalActPositionChrt */
    /* During: PokeAPSR_Pct_AccelPedalActPosition/PokeAPSR_Pct_AccelPedalActPositionChrt */
    /* Entry Internal: PokeAPSR_Pct_AccelPedalActPosition/PokeAPSR_Pct_AccelPedalActPositionChrt */
    /* Transition: '<S584>:2' */
    if (!LeAPSR_b_AccelPedalActPositionFA)
    {
        /* Transition: '<S584>:3' */
        /* Transition: '<S584>:15' */
        APSR_ac_B.LeAPSR_Pct_AccelPedalActPositio =
            LeAPSR_Pct_AccelPedalActPosition;

        /* Transition: '<S584>:18' */
    }
    else
    {
        /* Transition: '<S584>:4' */
    }

    /* End of Chart: '<S7>/PokeAPSR_Pct_AccelPedalActPositionChrt' */

    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalActPosition' incorporates:
     *  SignalConversion generated from: '<S7>/VeAPSR_Pct_AccelPedalActPosition'
     */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalActPosition_Value
        (APSR_ac_B.LeAPSR_Pct_AccelPedalActPositio);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_Pct_AccelPedalActPosition' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_6

FUNC(void, APSR_CODE) PokeAPSR_Pct_AccelPedalEffPosition(VAR(float32, AUTOMATIC)
    LeAPSR_Pct_AccelPedalEffPosition, VAR(boolean, AUTOMATIC)
    LeAPSR_b_AccelPedalEffPositionFA)
{

#if !Rte_SysCon_Variant_APSR_6

    UNUSED_PARAMETER(LeAPSR_Pct_AccelPedalEffPosition);

#endif

#if !Rte_SysCon_Variant_APSR_6

    UNUSED_PARAMETER(LeAPSR_b_AccelPedalEffPositionFA);

#endif

#if Rte_SysCon_Variant_APSR_6

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_Pct_AccelPedalEffPosition' */
    /* Chart: '<S8>/PokeAPSR_Pct_AccelPedalEffPositionChrt' incorporates:
     *  SignalConversion generated from: '<S8>/LeAPSR_b_AccelPedalEffPositionFA'
     */
    /* Gateway: PokeAPSR_Pct_AccelPedalEffPosition/PokeAPSR_Pct_AccelPedalEffPositionChrt */
    /* During: PokeAPSR_Pct_AccelPedalEffPosition/PokeAPSR_Pct_AccelPedalEffPositionChrt */
    /* Entry Internal: PokeAPSR_Pct_AccelPedalEffPosition/PokeAPSR_Pct_AccelPedalEffPositionChrt */
    /* Transition: '<S585>:2' */
    if (!LeAPSR_b_AccelPedalEffPositionFA)
    {
        /* SignalConversion generated from: '<S8>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
         *  Outport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
         *  SignalConversion generated from: '<S8>/LeAPSR_Pct_AccelPedalEffPosition'
         */
        /* Transition: '<S585>:3' */
        /* Transition: '<S585>:15' */
        (void)Rte_Write_VeAPSR_Pct_AccelPedalEffPosition_Value
            (LeAPSR_Pct_AccelPedalEffPosition);
        APSR_ac_B.LeAPSR_b_AccelPedalEffPositio_c = false;

        /* Transition: '<S585>:37' */
    }
    else
    {
        /* Transition: '<S585>:4' */
        if (0.0F >= KeAPSR_t_MinDefaultTime)
        {
            /* SignalConversion generated from: '<S8>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
             *  Outport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
             */
            /* Transition: '<S585>:25' */
            /* Transition: '<S585>:43' */
            (void)Rte_Write_VeAPSR_Pct_AccelPedalEffPosition_Value
                (KeAPSR_Pct_AccelPedalEffPositionDflt);
        }
        else
        {
            /* Transition: '<S585>:33' */
            APSR_ac_B.LeAPSR_b_AccelPedalEffPositio_c = true;

            /* SignalConversion generated from: '<S8>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
             *  Outport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
             *  SignalConversion generated from: '<S8>/LeAPSR_Pct_AccelPedalEffPosition'
             */
            (void)Rte_Write_VeAPSR_Pct_AccelPedalEffPosition_Value
                (LeAPSR_Pct_AccelPedalEffPosition);

            /* Transition: '<S585>:39' */
        }
    }

    /* End of Chart: '<S8>/PokeAPSR_Pct_AccelPedalEffPositionChrt' */

    /* Outport: '<Root>/VeAPSR_b_AccelPedalEffPositionFA' incorporates:
     *  SignalConversion generated from: '<S8>/VeAPSR_b_AccelPedalEffPositionFA'
     */
    (void)Rte_Write_VeAPSR_b_AccelPedalEffPositionFA_Value
        (APSR_ac_B.LeAPSR_b_AccelPedalEffPositio_c);

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S8>/VeAPSR_b_AccelPedalEffPositionFA_write'
     * */
    Rte_IrvWrite_PokeAPSR_Pct_AccelPedalEffPosition_LeAPSR_b_AccelPedalEffPositionFA_write_IRV
        (APSR_ac_B.LeAPSR_b_AccelPedalEffPositio_c);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_Pct_AccelPedalEffPosition' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_6

FUNC(void, APSR_CODE) PokeAPSR_Pct_AccelPedalPstn_OBD(VAR(float32, AUTOMATIC)
    LeAPSR_Pct_AccelPedalPstn_OBD)
{

#if !Rte_SysCon_Variant_APSR_6

    UNUSED_PARAMETER(LeAPSR_Pct_AccelPedalPstn_OBD);

#endif

#if Rte_SysCon_Variant_APSR_6

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_Pct_AccelPedalPstn_OBD' */
    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalPstn_OBD' incorporates:
     *  SignalConversion generated from: '<S9>/VeAPSR_Pct_AccelPedalPstn_OBD'
     *  SignalConversion generated from: '<S9>/LeAPSR_Pct_AccelPedalPstn_OBD'
     */
    /* Gateway: PokeAPSR_Pct_AccelPedalPstn_OBD/PokeAPSR_Pct_AccelPedalPstn_OBDChrt */
    /* During: PokeAPSR_Pct_AccelPedalPstn_OBD/PokeAPSR_Pct_AccelPedalPstn_OBDChrt */
    /* Entry Internal: PokeAPSR_Pct_AccelPedalPstn_OBD/PokeAPSR_Pct_AccelPedalPstn_OBDChrt */
    /* Transition: '<S586>:2' */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalPstn_OBD_Value
        (LeAPSR_Pct_AccelPedalPstn_OBD);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_Pct_AccelPedalPstn_OBD' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_7

FUNC(void, APSR_CODE) PokeAPSR_U_RawAux5V(VAR(float32, AUTOMATIC)
    LeAPSR_U_RawAux5V, VAR(boolean, AUTOMATIC) LeAPSR_b_RawAux5VFA)
{

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_LeAPSR_b_RawAux5VFA_out;

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_U_RawAux5V);

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_b_RawAux5VFA);

#endif

#if Rte_SysCon_Variant_APSR_7

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_U_RawAux5V' */
    /* Chart: '<S10>/PokeAPSR_U_RawAux5VChrt' incorporates:
     *  SignalConversion generated from: '<S10>/LeAPSR_U_RawAux5V'
     *  SignalConversion generated from: '<S10>/LeAPSR_b_RawAux5VFA'
     */
    /* Gateway: PokeAPSR_U_RawAux5V/PokeAPSR_U_RawAux5VChrt */
    /* During: PokeAPSR_U_RawAux5V/PokeAPSR_U_RawAux5VChrt */
    /* Entry Internal: PokeAPSR_U_RawAux5V/PokeAPSR_U_RawAux5VChrt */
    /* Transition: '<S587>:2' */
    if (!LeAPSR_b_RawAux5VFA)
    {
        /* Transition: '<S587>:3' */
        /* Transition: '<S587>:15' */
        APSR_ac_B.LeAPSR_U_RawAux5V_out = LeAPSR_U_RawAux5V;
        rtb_LeAPSR_b_RawAux5VFA_out = false;

        /* Transition: '<S587>:18' */
    }
    else
    {
        /* Transition: '<S587>:4' */
        rtb_LeAPSR_b_RawAux5VFA_out = true;
    }

    /* End of Chart: '<S10>/PokeAPSR_U_RawAux5VChrt' */

    /* Merge: '<Root>/Merge_11' incorporates:
     *  SignalConversion generated from: '<S10>/VeAPSR_U_RawAux5V_write'
     * */
    Rte_IrvWrite_PokeAPSR_U_RawAux5V_RawAux5V_Init_write_IRV
        (APSR_ac_B.LeAPSR_U_RawAux5V_out);

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S10>/VeAPSR_b_RawAux5VFA_write'
     * */
    Rte_IrvWrite_PokeAPSR_U_RawAux5V_RawAux5V_FA_Init_write_IRV
        (rtb_LeAPSR_b_RawAux5VFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_U_RawAux5V' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_7

FUNC(void, APSR_CODE) PokeAPSR_U_RawOut5V(VAR(float32, AUTOMATIC)
    LeAPSR_U_RawOut5V, VAR(boolean, AUTOMATIC) LeAPSR_b_RawOut5VFA)
{

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_LeAPSR_b_RawOut5VFA_out;

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_U_RawOut5V);

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_b_RawOut5VFA);

#endif

#if Rte_SysCon_Variant_APSR_7

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_U_RawOut5V' */
    /* Chart: '<S11>/PokeAPSR_U_RawOut5VChrt' incorporates:
     *  SignalConversion generated from: '<S11>/LeAPSR_U_RawOut5V'
     *  SignalConversion generated from: '<S11>/LeAPSR_b_RawOut5VFA'
     */
    /* Gateway: PokeAPSR_U_RawOut5V/PokeAPSR_U_RawOut5VChrt */
    /* During: PokeAPSR_U_RawOut5V/PokeAPSR_U_RawOut5VChrt */
    /* Entry Internal: PokeAPSR_U_RawOut5V/PokeAPSR_U_RawOut5VChrt */
    /* Transition: '<S588>:2' */
    if (!LeAPSR_b_RawOut5VFA)
    {
        /* Transition: '<S588>:3' */
        /* Transition: '<S588>:15' */
        APSR_ac_B.LeAPSR_U_RawOut5V_out = LeAPSR_U_RawOut5V;
        rtb_LeAPSR_b_RawOut5VFA_out = false;

        /* Transition: '<S588>:18' */
    }
    else
    {
        /* Transition: '<S588>:4' */
        rtb_LeAPSR_b_RawOut5VFA_out = true;
    }

    /* End of Chart: '<S11>/PokeAPSR_U_RawOut5VChrt' */

    /* Merge: '<Root>/Merge_6' incorporates:
     *  SignalConversion generated from: '<S11>/VeAPSR_U_RawOut5V_write'
     * */
    Rte_IrvWrite_PokeAPSR_U_RawOut5V_RawOut5V_Init_write_IRV
        (APSR_ac_B.LeAPSR_U_RawOut5V_out);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S11>/VeAPSR_b_RawOut5VFA_write'
     * */
    Rte_IrvWrite_PokeAPSR_U_RawOut5V_RawOut5V_FA_Init_write_IRV
        (rtb_LeAPSR_b_RawOut5VFA_out);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_U_RawOut5V' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_7

FUNC(void, APSR_CODE) PokeAPSR_U_RawPVS1(VAR(float32, AUTOMATIC)
    LeAPSR_U_RawPVS1, VAR(boolean, AUTOMATIC) LeAPSR_b_RawPVS1FA)
{

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_LeAPSR_b_RawPVS1FA_out;

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_U_RawPVS1);

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_b_RawPVS1FA);

#endif

#if Rte_SysCon_Variant_APSR_7

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_U_RawPVS1' */
    /* Chart: '<S12>/PokeAPSR_U_RawPVS1Chrt' incorporates:
     *  SignalConversion generated from: '<S12>/LeAPSR_U_RawPVS1'
     *  SignalConversion generated from: '<S12>/LeAPSR_b_RawPVS1FA'
     */
    /* Gateway: PokeAPSR_U_RawPVS1/PokeAPSR_U_RawPVS1Chrt */
    /* During: PokeAPSR_U_RawPVS1/PokeAPSR_U_RawPVS1Chrt */
    /* Entry Internal: PokeAPSR_U_RawPVS1/PokeAPSR_U_RawPVS1Chrt */
    /* Transition: '<S589>:2' */
    if (!LeAPSR_b_RawPVS1FA)
    {
        /* Transition: '<S589>:3' */
        /* Transition: '<S589>:15' */
        APSR_ac_B.LeAPSR_U_RawPVS1_out = LeAPSR_U_RawPVS1;
        rtb_LeAPSR_b_RawPVS1FA_out = false;

        /* Transition: '<S589>:18' */
    }
    else
    {
        /* Transition: '<S589>:4' */
        rtb_LeAPSR_b_RawPVS1FA_out = true;
    }

    /* End of Chart: '<S12>/PokeAPSR_U_RawPVS1Chrt' */

    /* Outport: '<Root>/VeAPSR_U_RawPVS1' incorporates:
     *  SignalConversion generated from: '<S12>/VeAPSR_U_RawPVS1'
     */
    (void)Rte_Write_VeAPSR_U_RawPVS1_Value(APSR_ac_B.LeAPSR_U_RawPVS1_out);

    /* Outport: '<Root>/VeAPSR_b_RawPVS1_FA' incorporates:
     *  SignalConversion generated from: '<S12>/VeAPSR_b_RawPVS1FA'
     */
    (void)Rte_Write_VeAPSR_b_RawPVS1_FA_Value(rtb_LeAPSR_b_RawPVS1FA_out);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S12>/VeAPSR_U_RawPVS1_write'
     * */
    Rte_IrvWrite_PokeAPSR_U_RawPVS1_RawPVS1_write_IRV
        (APSR_ac_B.LeAPSR_U_RawPVS1_out);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_U_RawPVS1' */
#endif

}

#endif

/* Output function */
#if Rte_SysCon_Variant_APSR_7

FUNC(void, APSR_CODE) PokeAPSR_U_RawPVS2(VAR(float32, AUTOMATIC)
    LeAPSR_U_RawPVS2, VAR(boolean, AUTOMATIC) LeAPSR_b_RawPVS2FA)
{

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_LeAPSR_b_RawPVS2FA_out;

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_U_RawPVS2);

#endif

#if !Rte_SysCon_Variant_APSR_7

    UNUSED_PARAMETER(LeAPSR_b_RawPVS2FA);

#endif

#if Rte_SysCon_Variant_APSR_7

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_U_RawPVS2' */
    /* Chart: '<S13>/PokeAPSR_U_RawPVS2Chrt' incorporates:
     *  SignalConversion generated from: '<S13>/LeAPSR_U_RawPVS2'
     *  SignalConversion generated from: '<S13>/LeAPSR_b_RawPVS2FA'
     */
    /* Gateway: PokeAPSR_U_RawPVS2/PokeAPSR_U_RawPVS2Chrt */
    /* During: PokeAPSR_U_RawPVS2/PokeAPSR_U_RawPVS2Chrt */
    /* Entry Internal: PokeAPSR_U_RawPVS2/PokeAPSR_U_RawPVS2Chrt */
    /* Transition: '<S590>:2' */
    if (!LeAPSR_b_RawPVS2FA)
    {
        /* Transition: '<S590>:3' */
        /* Transition: '<S590>:15' */
        APSR_ac_B.LeAPSR_U_RawPVS2_out = LeAPSR_U_RawPVS2;
        rtb_LeAPSR_b_RawPVS2FA_out = false;

        /* Transition: '<S590>:18' */
    }
    else
    {
        /* Transition: '<S590>:4' */
        rtb_LeAPSR_b_RawPVS2FA_out = true;
    }

    /* End of Chart: '<S13>/PokeAPSR_U_RawPVS2Chrt' */

    /* Outport: '<Root>/VeAPSR_U_RawPVS2' incorporates:
     *  SignalConversion generated from: '<S13>/VeAPSR_U_RawPVS2'
     */
    (void)Rte_Write_VeAPSR_U_RawPVS2_Value(APSR_ac_B.LeAPSR_U_RawPVS2_out);

    /* Outport: '<Root>/VeAPSR_b_RawPVS2_FA' incorporates:
     *  SignalConversion generated from: '<S13>/VeAPSR_b_RawPVS2FA'
     */
    (void)Rte_Write_VeAPSR_b_RawPVS2_FA_Value(rtb_LeAPSR_b_RawPVS2FA_out);

    /* Merge: '<Root>/Merge_9_Irv' incorporates:
     *  SignalConversion generated from: '<S13>/VeAPSR_U_RawPVS2_write'
     * */
    Rte_IrvWrite_PokeAPSR_U_RawPVS2_RawPVS2_write_IRV
        (APSR_ac_B.LeAPSR_U_RawPVS2_out);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_U_RawPVS2' */
#endif

}

#endif

/* Output function */
FUNC(void, APSR_CODE) APSR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/APSR_PwrOff'
     */
    /* Outport: '<Root>/NeAPSR_U_Lv1PvAdapt_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeAPSR_U_Lv1PvAdapt'
     */
    (void)Rte_Write_NeAPSR_U_Lv1PvAdapt_NeAPSR_U_Lv1PvAdapt
        (APSR_ac_DW.NeAPSR_U_Lv1PvAdapt);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, APSR_CODE) APSR_PwrOn(void)
{

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_OutportBufferForRawAux5V_FA;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 rtb_OutportBufferForRawAux5V_In;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_OutportBufferForRawOut5V_FA;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 rtb_OutportBufferForRawOut5V_In;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 rtb_OutportBufferForRawPVS1_wri;

#endif

#if Rte_SysCon_Variant_APSR_7

    float32 rtb_OutportBufferForRawPVS2_wri;

#endif

#if Rte_SysCon_Variant_APSR_7

    boolean rtb_OutportBufferForServRoutStr;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/APSR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S559>/NeAPSR_U_Lv1PvAdapt' incorporates:
     *  Inport: '<Root>/NeAPSR_U_Lv1PvAdapt_PM_In'
     */
    (void)Rte_Read_NeAPSR_U_Lv1PvAdapt_Rx_NeAPSR_U_Lv1PvAdapt
        (&APSR_ac_DW.NeAPSR_U_Lv1PvAdapt);

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv2MinTestNotCmplt' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv2MinTestNotCmplt_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv2MinTestNotCmplt_Rx_AeAPSR_b_Pv2MinTestNotCmplt
        ((&(AeAPSR_b_Pv2MinTestNotCmplt)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv2MinTestFailed' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv2MinTestFailed_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv2MinTestFailed_Rx_AeAPSR_b_Pv2MinTestFailed
        ((&(AeAPSR_b_Pv2MinTestFailed)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv2MaxTestNotCmplt' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv2MaxTestNotCmplt_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv2MaxTestNotCmplt_Rx_AeAPSR_b_Pv2MaxTestNotCmplt
        ((&(AeAPSR_b_Pv2MaxTestNotCmplt)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv2MaxTestFailed' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv2MaxTestFailed_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv2MaxTestFailed_Rx_AeAPSR_b_Pv2MaxTestFailed
        ((&(AeAPSR_b_Pv2MaxTestFailed)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv1MinTestNotCmplt' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv1MinTestNotCmplt_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv1MinTestNotCmplt_Rx_AeAPSR_b_Pv1MinTestNotCmplt
        ((&(AeAPSR_b_Pv1MinTestNotCmplt)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv1MinTestFailed' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv1MinTestFailed_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv1MinTestFailed_Rx_AeAPSR_b_Pv1MinTestFailed
        ((&(AeAPSR_b_Pv1MinTestFailed)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv1MaxTestNotCmplt' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv1MaxTestNotCmplt_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv1MaxTestNotCmplt_Rx_AeAPSR_b_Pv1MaxTestNotCmplt
        ((&(AeAPSR_b_Pv1MaxTestNotCmplt)));

    /* DataStoreWrite: '<S559>/EeAPSR_b_Pv1MaxTestFailed' incorporates:
     *  Inport: '<Root>/AeAPSR_b_Pv1MaxTestFailed_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_b_Pv1MaxTestFailed_Rx_AeAPSR_b_Pv1MaxTestFailed
        ((&(AeAPSR_b_Pv1MaxTestFailed)));

    /* DataStoreWrite: '<S559>/EeAPSR_U_Pvs2MaxValue' incorporates:
     *  Inport: '<Root>/AeAPSR_U_Pvs2MinValue_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_U_Pvs2MinValue_Rx_AeAPSR_U_Pvs2MinValue
        ((&(AeAPSR_U_Pvs2MinValue)));

    /* DataStoreWrite: '<S559>/EeAPSR_U_Pvs2MinValue' incorporates:
     *  Inport: '<Root>/AeAPSR_U_Pvs2MaxValue_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_U_Pvs2MaxValue_Rx_AeAPSR_U_Pvs2MaxValue
        ((&(AeAPSR_U_Pvs2MaxValue)));

    /* DataStoreWrite: '<S559>/EeAPSR_U_Pvs1MinValue' incorporates:
     *  Inport: '<Root>/AeAPSR_U_Pvs1MinValue_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_U_Pvs1MinValue_Rx_AeAPSR_U_Pvs1MinValue
        ((&(AeAPSR_U_Pvs1MinValue)));

    /* DataStoreWrite: '<S559>/EeAPSR_U_Pvs1MaxValue' incorporates:
     *  Inport: '<Root>/AeAPSR_U_Pvs1MaxValue_Strimm_In'
     */
    (void)Rte_Read_AeAPSR_U_Pvs1MaxValue_Rx_AeAPSR_U_Pvs1MaxValue
        ((&(AeAPSR_U_Pvs1MaxValue)));

#if Rte_SysCon_Variant_APSR_7

    /* Outputs for Function Call SubSystem: '<S4>/APSI_Init' */
    /* SignalConversion generated from: '<S557>/RawPVS1' */
    APSR_ac_B.OutportBufferForRawPVS1 = 0.0F;

    /* SignalConversion generated from: '<S557>/RawPVS1_FA' */
    APSR_ac_B.OutportBufferForRawPVS1_FA = false;

    /* SignalConversion generated from: '<S557>/RawPVS2' */
    APSR_ac_B.OutportBufferForRawPVS2 = 0.0F;

    /* SignalConversion generated from: '<S557>/RawPVS2_FA' */
    APSR_ac_B.OutportBufferForRawPVS2_FA = false;

    /* SignalConversion generated from: '<S557>/RawOut5V_Init' */
    APSR_ac_B.OutportBufferForRawOut5V_Init = 0.0F;

    /* SignalConversion generated from: '<S557>/RawOut5V_FA_Init' */
    APSR_ac_B.OutportBufferForRawOut5V_FA_Ini = false;

    /* SignalConversion generated from: '<S557>/RawAux5V_Init' */
    APSR_ac_B.OutportBufferForRawAux5V_Init = 0.0F;

    /* SignalConversion generated from: '<S557>/RawAux5V_FA_Init' */
    APSR_ac_B.OutportBufferForRawAux5V_FA_Ini = false;

    /* SignalConversion generated from: '<S557>/ServRoutStrt' */
    APSR_ac_B.OutportBufferForServRoutStrt = false;

    /* End of Outputs for SubSystem: '<S4>/APSI_Init' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init_APSI_Out'
     */
    /* SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalActPosition'
     */
#if Rte_SysCon_Variant_APSR_6

    /* SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalEffPosition' */
    APSR_ac_B.OutportBufferForLeAPSR_Pct_Acce =
        KeAPSR_Pct_AccelPedalEffPositionDflt;
    APSR_ac_B.Calib_k = KeAPSR_Pct_AccelPedalActPositionDflt;

    /* SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalActPosition' incorporates:
     *  Constant: '<S564>/Calib'
     */
    APSR_ac_B.OutportBufferForLeAPSR_Pct_Ac_c = APSR_ac_B.Calib_k;

#endif

    /* End of SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalEffPosition' */

    /* SignalConversion generated from: '<S560>/LeAPSR_b_AccelPedalEffPositionFA' */
    APSR_ac_B.OutportBufferForLeAPSR_b_AccelP = false;

    /* SignalConversion generated from: '<S560>/LeAPSR_Pct_AccPdlPos_OBD_Dflt' incorporates:
     *  Constant: '<S563>/Calib'
     */
    APSR_ac_B.OutportBufferForLeAPSR_Pct_AccP = KeAPSR_Pct_AccPdlPos_OBD_Dflt;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/APSI_Out'
     */
    /* SignalConversion generated from: '<S558>/Lv1PVMode_Init' incorporates:
     *  Constant: '<S562>/Constant'
     */
    APSR_ac_B.OutportBufferForLv1PVMode_Init = APSR_ac_ConstB.Constant_e;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S561>/VeAPSR_U_Lv1DelPVSHires_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_U_Lv1Del = 0.0F;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1PvMod5HighCreepTrqReq_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvM = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1Pv1LimFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1Pv1 = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1Pv2LimFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1Pv2 = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1PvCohFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvC = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1PvTrqLimitReq_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvT = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1PvsValid_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1Pvs = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1Pv1MinIPFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_i = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1Pv1MaxIPFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_p = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1Pv2MinIPFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_d = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1Pv2MaxIPFailed_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_o = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Failed5VRefOut_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Failed = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Failed5VRefAux_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Fail_j = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_PVSMaxLearnt_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_PVSMax = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_PVSMinLearnt_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_PVSMin = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_Lv1PvBrkActive_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvB = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_DrvBehAlert_Out_Init' */
    APSR_ac_B.OutportBufferForVeAPSR_b_DrvBeh = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_b_KickDown_OutInit' */
    APSR_ac_B.OutportBufferForVeAPSR_b_KickDo = false;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf' incorporates:
     *  Constant: '<S566>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_FaultS = APSR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf' incorporates:
     *  Constant: '<S567>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_j = APSR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf' incorporates:
     *  Constant: '<S568>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_f = APSR_ac_ConstB.Constant_m;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf' incorporates:
     *  Constant: '<S569>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_c = APSR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_BrkAccStuckPdl' incorporates:
     *  Constant: '<S570>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_o = APSR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy' incorporates:
     *  Constant: '<S571>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_g = APSR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi' incorporates:
     *  Constant: '<S572>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Fau_f0 = APSR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo' incorporates:
     *  Constant: '<S573>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_p = APSR_ac_ConstB.Constant_id;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy' incorporates:
     *  Constant: '<S574>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_l = APSR_ac_ConstB.Constant_cp;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi' incorporates:
     *  Constant: '<S575>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Fau_pj = APSR_ac_ConstB.Constant_hi;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo' incorporates:
     *  Constant: '<S576>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_i = APSR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1CktHi' incorporates:
     *  Constant: '<S577>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_k = APSR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1CktLo' incorporates:
     *  Constant: '<S578>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_e = APSR_ac_ConstB.Constant_jt;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2CktHi' incorporates:
     *  Constant: '<S579>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_d = APSR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2CktLo' incorporates:
     *  Constant: '<S580>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_a = APSR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr12_Corr' incorporates:
     *  Constant: '<S581>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_b = APSR_ac_ConstB.Constant_pj;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalPstn_OBD' incorporates:
     *  SignalConversion generated from: '<S4>/LeAPSR_Pct_AccPdlPos_OBD_Dflt'
     */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalPstn_OBD_Value
        (APSR_ac_B.OutportBufferForLeAPSR_Pct_AccP);

    /* SignalConversion generated from: '<S4>/LeAPSR_Pct_AccelPedalActPosition' incorporates:
     *  SignalConversion generated from: '<S4>/LeAPSR_Pct_AccelPedalEffPosition'
     */
#if Rte_SysCon_Variant_APSR_6

    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalActPosition' */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalActPosition_Value
        (APSR_ac_B.OutportBufferForLeAPSR_Pct_Ac_c);

    /* Outport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition' */
    (void)Rte_Write_VeAPSR_Pct_AccelPedalEffPosition_Value
        (APSR_ac_B.OutportBufferForLeAPSR_Pct_Acce);

#endif

    /* End of SignalConversion generated from: '<S4>/LeAPSR_Pct_AccelPedalActPosition' */

    /* Outport: '<Root>/VeAPSR_b_AccelPedalEffPositionFA' incorporates:
     *  SignalConversion generated from: '<S4>/LeAPSR_b_AccelPedalEffPositionFA'
     */
    (void)Rte_Write_VeAPSR_b_AccelPedalEffPositionFA_Value
        (APSR_ac_B.OutportBufferForLeAPSR_b_AccelP);

    /* Outport: '<Root>/VeAPSR_e_Lv1PVMode' incorporates:
     *  SignalConversion generated from: '<S4>/Lv1PVMode_Init'
     *  SignalConversion generated from: '<S558>/Lv1PVMode_Init'
     */
    (void)Rte_Write_VeAPSR_e_Lv1PVMode_Value
        (APSR_ac_B.OutportBufferForLv1PVMode_Init);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr12_Corr' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr12_Corr'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr12_Corr'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr12_Corr_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_b);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1CktHi' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr1CktHi'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1CktHi_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_k);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1CktLo' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr1CktLo'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1CktLo_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_e);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_FaultS);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_j);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2CktHi' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr2CktHi'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2CktHi_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_d);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2CktLo' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr2CktLo'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2CktLo_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_a);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_f);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_c);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_BrkAccStuckPdl' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_BrkAccStuckPdl'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_BrkAccStuckPdl'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_BrkAccStuckPdl_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_o);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_SnsrRefVolt1Noisy'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt1Noisy_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_l);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_SnsrRefVolt2Noisy'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt2Noisy_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_g);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_SnsrRefVolt5CktHi'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt5CktHi_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Fau_pj);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_SnsrRefVolt5CktLo'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt5CktLo_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_i);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_SnsrRefVolt6CktHi'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt6CktHi_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Fau_f0);

    /* Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo' incorporates:
     *  SignalConversion generated from: '<S4>/R_VeAPSR_e_FaultSts_SnsrRefVolt6CktLo'
     *  SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt6CktLo_Value
        (APSR_ac_B.OutportBufferForVeAPSR_e_Faul_p);

    /* SignalConversion generated from: '<S4>/RawAux5V_FA_Init_write' incorporates:
     *  SignalConversion generated from: '<S4>/RawAux5V_Init_write'
     *  SignalConversion generated from: '<S4>/RawOut5V_FA_Init_write'
     *  SignalConversion generated from: '<S4>/RawOut5V_Init_write'
     *  SignalConversion generated from: '<S4>/RawPVS1'
     *  SignalConversion generated from: '<S4>/RawPVS1_FA'
     *  SignalConversion generated from: '<S4>/RawPVS1_write'
     *  SignalConversion generated from: '<S4>/RawPVS2'
     *  SignalConversion generated from: '<S4>/RawPVS2_FA'
     *  SignalConversion generated from: '<S4>/RawPVS2_write'
     *  SignalConversion generated from: '<S4>/ServRoutStrt_write'
     */
#if Rte_SysCon_Variant_APSR_7

    /* SignalConversion generated from: '<S4>/RawAux5V_FA_Init_write' */
    rtb_OutportBufferForRawAux5V_FA = APSR_ac_B.OutportBufferForRawAux5V_FA_Ini;

    /* SignalConversion generated from: '<S4>/RawAux5V_Init_write' */
    rtb_OutportBufferForRawAux5V_In = APSR_ac_B.OutportBufferForRawAux5V_Init;

    /* SignalConversion generated from: '<S4>/RawOut5V_FA_Init_write' */
    rtb_OutportBufferForRawOut5V_FA = APSR_ac_B.OutportBufferForRawOut5V_FA_Ini;

    /* SignalConversion generated from: '<S4>/RawOut5V_Init_write' */
    rtb_OutportBufferForRawOut5V_In = APSR_ac_B.OutportBufferForRawOut5V_Init;

    /* Outport: '<Root>/VeAPSR_U_RawPVS1' */
    (void)Rte_Write_VeAPSR_U_RawPVS1_Value(APSR_ac_B.OutportBufferForRawPVS1);

    /* Outport: '<Root>/VeAPSR_b_RawPVS1_FA' */
    (void)Rte_Write_VeAPSR_b_RawPVS1_FA_Value
        (APSR_ac_B.OutportBufferForRawPVS1_FA);

    /* SignalConversion generated from: '<S4>/RawPVS1_write' */
    rtb_OutportBufferForRawPVS1_wri = APSR_ac_B.OutportBufferForRawPVS1;

    /* Outport: '<Root>/VeAPSR_U_RawPVS2' */
    (void)Rte_Write_VeAPSR_U_RawPVS2_Value(APSR_ac_B.OutportBufferForRawPVS2);

    /* Outport: '<Root>/VeAPSR_b_RawPVS2_FA' */
    (void)Rte_Write_VeAPSR_b_RawPVS2_FA_Value
        (APSR_ac_B.OutportBufferForRawPVS2_FA);

    /* SignalConversion generated from: '<S4>/RawPVS2_write' */
    rtb_OutportBufferForRawPVS2_wri = APSR_ac_B.OutportBufferForRawPVS2;

    /* SignalConversion generated from: '<S4>/ServRoutStrt_write' */
    rtb_OutportBufferForServRoutStr = APSR_ac_B.OutportBufferForServRoutStrt;

#endif

    /* End of SignalConversion generated from: '<S4>/RawAux5V_FA_Init_write' */

    /* Outport: '<Root>/VeAPSR_U_Lv1DelPVSHires' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_U_Lv1DelPVSHires_Out_Init'
     */
    (void)Rte_Write_VeAPSR_U_Lv1DelPVSHires_Value
        (APSR_ac_B.OutportBufferForVeAPSR_U_Lv1Del);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* Outport: '<Root>/VeAPSR_U_Pvs1MaxValue' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read1'
     *  SignalConversion generated from: '<S4>/VeAPSR_U_Pvs1MaxValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs1MaxValue_Value(AeAPSR_U_Pvs1MaxValue);

    /* Outport: '<Root>/VeAPSR_U_Pvs1MinValue' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read'
     *  SignalConversion generated from: '<S4>/VeAPSR_U_Pvs1MinValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs1MinValue_Value(AeAPSR_U_Pvs1MinValue);

    /* Outport: '<Root>/VeAPSR_U_Pvs2MaxValue' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read3'
     *  SignalConversion generated from: '<S4>/VeAPSR_U_Pvs2MaxValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs2MaxValue_Value(AeAPSR_U_Pvs2MaxValue);

    /* Outport: '<Root>/VeAPSR_U_Pvs2MinValue' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read2'
     *  SignalConversion generated from: '<S4>/VeAPSR_U_Pvs2MinValue'
     */
    (void)Rte_Write_VeAPSR_U_Pvs2MinValue_Value(AeAPSR_U_Pvs2MinValue);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeAPSR_b_DrvBehAlert' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_DrvBehAlert_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_DrvBehAlert_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_DrvBeh);

    /* Outport: '<Root>/VeAPSR_b_Failed5VRefAux' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Failed5VRefAux_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Failed5VRefAux_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Fail_j);

    /* Outport: '<Root>/VeAPSR_b_Failed5VRefOut' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Failed5VRefOut_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Failed5VRefOut_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Failed);

    /* Outport: '<Root>/VeAPSR_b_KickDown' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_KickDown_OutInit'
     */
    (void)Rte_Write_VeAPSR_b_KickDown_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_KickDo);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv1LimFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1Pv1LimFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv1LimFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1Pv1);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv1MaxIPFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1Pv1MaxIPFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv1MaxIPFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_p);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv1MinIPFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1Pv1MinIPFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv1MinIPFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_i);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv2LimFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1Pv2LimFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv2LimFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1Pv2);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv2MaxIPFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1Pv2MaxIPFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv2MaxIPFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_o);

    /* Outport: '<Root>/VeAPSR_b_Lv1Pv2MinIPFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1Pv2MinIPFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1Pv2MinIPFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1P_d);

    /* Outport: '<Root>/VeAPSR_b_Lv1PvBrkActive' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1PvBrkActive_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvBrkActive_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvB);

    /* Outport: '<Root>/VeAPSR_b_Lv1PvCohFailed' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1PvCohFailed_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvCohFailed_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvC);

    /* Outport: '<Root>/VeAPSR_b_Lv1PvMod5HighCreepTrqReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1PvMod5HighCreepTrqReq_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvMod5HighCreepTrqReq_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvM);

    /* Outport: '<Root>/VeAPSR_b_Lv1PvTrqLimitReq' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1PvTrqLimitReq_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvTrqLimitReq_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1PvT);

    /* Outport: '<Root>/VeAPSR_b_Lv1PvsValid' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Lv1PvsValid_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_Lv1PvsValid_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_Lv1Pvs);

    /* Outport: '<Root>/VeAPSR_b_PVSMaxLearnt' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_PVSMaxLearnt_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_PVSMaxLearnt_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_PVSMax);

    /* Outport: '<Root>/VeAPSR_b_PVSMinLearnt' incorporates:
     *  SignalConversion generated from: '<S4>/VeAPSR_b_PVSMinLearnt_Out_Init'
     */
    (void)Rte_Write_VeAPSR_b_PVSMinLearnt_Value
        (APSR_ac_B.OutportBufferForVeAPSR_b_PVSMin);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* Outport: '<Root>/VeAPSR_b_Pv1MaxTestFailed' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read4'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv1MaxTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MaxTestFailed_Value(AeAPSR_b_Pv1MaxTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv1MaxTestNotCmplt' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read5'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv1MaxTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MaxTestNotCmplt_Value
        (AeAPSR_b_Pv1MaxTestNotCmplt);

    /* Outport: '<Root>/VeAPSR_b_Pv1MinTestFailed' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read6'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv1MinTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MinTestFailed_Value(AeAPSR_b_Pv1MinTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv1MinTestNotCmplt' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read7'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv1MinTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv1MinTestNotCmplt_Value
        (AeAPSR_b_Pv1MinTestNotCmplt);

    /* Outport: '<Root>/VeAPSR_b_Pv2MaxTestFailed' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read8'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv2MaxTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MaxTestFailed_Value(AeAPSR_b_Pv2MaxTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv2MaxTestNotCmplt' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read9'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv2MaxTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MaxTestNotCmplt_Value
        (AeAPSR_b_Pv2MaxTestNotCmplt);

    /* Outport: '<Root>/VeAPSR_b_Pv2MinTestFailed' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read10'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv2MinTestFailed'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MinTestFailed_Value(AeAPSR_b_Pv2MinTestFailed);

    /* Outport: '<Root>/VeAPSR_b_Pv2MinTestNotCmplt' incorporates:
     *  DataStoreRead: '<S559>/Data Store Read11'
     *  SignalConversion generated from: '<S4>/VeAPSR_b_Pv2MinTestNotCmplt'
     */
    (void)Rte_Write_VeAPSR_b_Pv2MinTestNotCmplt_Value
        (AeAPSR_b_Pv2MinTestNotCmplt);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Merge: '<Root>/Merge_13_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/LeAPSR_b_AccelPedalEffPositionFA_write'
     * */
    Rte_IrvWrite_APSR_PwrOn_LeAPSR_b_AccelPedalEffPositionFA_write_IRV
        (APSR_ac_B.OutportBufferForLeAPSR_b_AccelP);

    /* SignalConversion generated from: '<S4>/RawAux5V_FA_Init_write' incorporates:
     *  SignalConversion generated from: '<S4>/RawAux5V_Init_write'
     *  SignalConversion generated from: '<S4>/RawOut5V_FA_Init_write'
     *  SignalConversion generated from: '<S4>/RawOut5V_Init_write'
     *  SignalConversion generated from: '<S4>/RawPVS1_write'
     *  SignalConversion generated from: '<S4>/RawPVS2_write'
     *  SignalConversion generated from: '<S4>/ServRoutStrt_write'
     */
#if Rte_SysCon_Variant_APSR_7

    /* Merge: '<Root>/Merge_10' */
    Rte_IrvWrite_APSR_PwrOn_RawAux5V_FA_Init_write_IRV
        (rtb_OutportBufferForRawAux5V_FA);

    /* Merge: '<Root>/Merge_11' */
    Rte_IrvWrite_APSR_PwrOn_RawAux5V_Init_write_IRV
        (rtb_OutportBufferForRawAux5V_In);

    /* Merge: '<Root>/Merge_1' */
    Rte_IrvWrite_APSR_PwrOn_RawOut5V_FA_Init_write_IRV
        (rtb_OutportBufferForRawOut5V_FA);

    /* Merge: '<Root>/Merge_6' */
    Rte_IrvWrite_APSR_PwrOn_RawOut5V_Init_write_IRV
        (rtb_OutportBufferForRawOut5V_In);

    /* Merge: '<Root>/Merge_7_Irv' */
    Rte_IrvWrite_APSR_PwrOn_RawPVS1_write_IRV(rtb_OutportBufferForRawPVS1_wri);

    /* Merge: '<Root>/Merge_9_Irv' */
    Rte_IrvWrite_APSR_PwrOn_RawPVS2_write_IRV(rtb_OutportBufferForRawPVS2_wri);

    /* Merge: '<Root>/Merge_12' */
    Rte_IrvWrite_APSR_PwrOn_ServRoutStrt_write_IRV
        (rtb_OutportBufferForServRoutStr);

#endif

    /* End of SignalConversion generated from: '<S4>/RawAux5V_FA_Init_write' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Output function */
#if Rte_SysCon_Variant_APSR_7

FUNC(void, APSR_CODE) Routine_RC130C_AccPedLea(void)
{

#if Rte_SysCon_Variant_APSR_7

    TeDCAB_e_RoutineOpType tmpRead;

#endif

#if Rte_SysCon_Variant_APSR_7

    /* RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130C_AccPedLea' */
    /* Inport: '<Root>/VeDCAB_e_Routine_RC130C_AccPedLea_Op' */
    (void)Rte_Read_VeDCAB_e_Routine_RC130C_AccPedLea_Op_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/PokeAPSR_b_ServRoutStrt' */
    /* Merge: '<Root>/Merge_12' incorporates:
     *  Constant: '<S591>/Constant'
     *  Inport: '<Root>/VeDCAB_e_Routine_RC130C_AccPedLea_Op'
     *  RelationalOperator: '<S14>/Equal'
     *  SignalConversion generated from: '<S14>/VeAPSR_b_ServRoutStrt_write'
     */
    Rte_IrvWrite_Routine_RC130C_AccPedLea_ServRoutStrt_write_IRV(((uint32)
        tmpRead) == CeDCAB_e_Routine_Start);

    /* End of Outputs for SubSystem: '<Root>/PokeAPSR_b_ServRoutStrt' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/Routine_RC130C_AccPedLea' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, APSR_CODE) APSR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        APSR_ac_B.OutportBufferForLv1PVMode_Init = CeAPSR_e_LV1PVMode_NotValid;
    }

    /* custom signals */
#if Rte_SysCon_Variant_APSR_7

    VeAPSR_e_Lv1PvFieldMode = CeAPSR_e_LV1PVMode_NotValid;

#endif

#if Rte_SysCon_Variant_APSR_7

    VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_NotValid;

#endif

#if Rte_SysCon_Variant_APSR_7

    VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_NotValid;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/APSR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Init_APSI_Out'
     */
    /* SystemInitialize for SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Constant: '<S564>/Calib'
     *  Constant: '<S565>/Calib'
     *  SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalActPosition'
     */
#if Rte_SysCon_Variant_APSR_6

    APSR_ac_B.Calib_k = KeAPSR_Pct_AccelPedalActPositionDflt;

    /* SystemInitialize for SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Constant: '<S564>/Calib'
     */
    APSR_ac_B.OutportBufferForLeAPSR_Pct_Acce =
        KeAPSR_Pct_AccelPedalEffPositionDflt;

    /* SystemInitialize for SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalActPosition' */
    APSR_ac_B.OutportBufferForLeAPSR_Pct_Ac_c = APSR_ac_B.Calib_k;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S560>/LeAPSR_Pct_AccelPedalEffPosition' */

    /* SystemInitialize for SignalConversion generated from: '<S560>/LeAPSR_Pct_AccPdlPos_OBD_Dflt' incorporates:
     *  Constant: '<S563>/Calib'
     */
    APSR_ac_B.OutportBufferForLeAPSR_Pct_AccP = KeAPSR_Pct_AccPdlPos_OBD_Dflt;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/APSI_Out'
     */
    /* SystemInitialize for SignalConversion generated from: '<S558>/Lv1PVMode_Init' incorporates:
     *  Constant: '<S562>/Constant'
     */
    APSR_ac_B.OutportBufferForLv1PVMode_Init = APSR_ac_ConstB.Constant_e;

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf' incorporates:
     *  Constant: '<S566>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_FaultS = APSR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf' incorporates:
     *  Constant: '<S567>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_j = APSR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf' incorporates:
     *  Constant: '<S568>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_f = APSR_ac_ConstB.Constant_m;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf' incorporates:
     *  Constant: '<S569>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_c = APSR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_BrkAccStuckPdl' incorporates:
     *  Constant: '<S570>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_o = APSR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy' incorporates:
     *  Constant: '<S571>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_g = APSR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi' incorporates:
     *  Constant: '<S572>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Fau_f0 = APSR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo' incorporates:
     *  Constant: '<S573>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_p = APSR_ac_ConstB.Constant_id;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy' incorporates:
     *  Constant: '<S574>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_l = APSR_ac_ConstB.Constant_cp;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi' incorporates:
     *  Constant: '<S575>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Fau_pj = APSR_ac_ConstB.Constant_hi;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo' incorporates:
     *  Constant: '<S576>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_i = APSR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1CktHi' incorporates:
     *  Constant: '<S577>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_k = APSR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr1CktLo' incorporates:
     *  Constant: '<S578>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_e = APSR_ac_ConstB.Constant_jt;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2CktHi' incorporates:
     *  Constant: '<S579>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_d = APSR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr2CktLo' incorporates:
     *  Constant: '<S580>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_a = APSR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S561>/VeAPSR_e_FaultSts_APP_Snsr12_Corr' incorporates:
     *  Constant: '<S581>/Constant'
     */
    APSR_ac_B.OutportBufferForVeAPSR_e_Faul_b = APSR_ac_ConstB.Constant_pj;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_APSR_7

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawAux5V' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawOut5V' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawPVS1' */
    /* SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawPVS2' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/APSR_FastTEF' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/APSC_FUNC'
     */
    /* SystemInitialize for Enabled SubSystem: '<S139>/Out_Diagnostic' */
    /* InitializeConditions for Delay: '<S202>/Integer_Delay' */
    APSR_ac_DW.Integer_Delay_DSTATE = 2.5F;

    /* End of SystemInitialize for SubSystem: '<S139>/Out_Diagnostic' */

    /* SystemInitialize for Atomic SubSystem: '<S20>/PVS1_Limit_Check' */
    /* SystemInitialize for Enabled SubSystem: '<S251>/IP_PV1_MinMax_Chk' */
    /* Start for If: '<S261>/If' */
    APSR_ac_DW.If_ActiveSubsystem_l = -1;

    /* Start for If: '<S261>/If1' */
    APSR_ac_DW.If1_ActiveSubsystem_a = -1;

    /* End of SystemInitialize for SubSystem: '<S251>/IP_PV1_MinMax_Chk' */
    /* End of SystemInitialize for SubSystem: '<S20>/PVS1_Limit_Check' */

    /* SystemInitialize for Enabled SubSystem: '<S363>/IP_PV2_MinMax_Chk' */
    /* Start for If: '<S371>/If' */
    APSR_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S371>/If1' */
    APSR_ac_DW.If1_ActiveSubsystem = -1;

    /* End of SystemInitialize for SubSystem: '<S363>/IP_PV2_MinMax_Chk' */

    /* SystemInitialize for Chart: '<S42>/Mode_Detection' */
    VeAPSR_e_Lv1_Pvmode = CeAPSR_e_LV1PVMode_NotValid;

    /* SystemInitialize for Chart: '<S47>/Max_Chart' */
    VeAPSR_e_Lv1_IP_MODE = CeAPSR_e_LV1PVMode_PVOk;

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/APSR_FastTEF' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawPVS2' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawPVS1' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawOut5V' */
    /* End of SystemInitialize for S-Function (sfun_private_function_caller) generated from: '<Root>/PokeAPSR_U_RawAux5V' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_Lv1PVMode' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeAPSR_e_Lv1PVMode_Value(CeAPSR_e_LV1PVMode_NotValid);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1_MaxStpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1_MinStpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2_MaxStpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2_MinStpPerf_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_BrkAccStuckPdl' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_BrkAccStuckPdl'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_BrkAccStuckPdl_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt2Noisy' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_SnsrRefVolt2Noisy'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt2Noisy_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt6CktHi' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_SnsrRefVolt6CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt6CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt6CktLo' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_SnsrRefVolt6CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt6CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt1Noisy' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_SnsrRefVolt1Noisy'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt1Noisy_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt5CktHi' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_SnsrRefVolt5CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt5CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_SnsrRefVolt5CktLo' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_SnsrRefVolt5CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_SnsrRefVolt5CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1CktHi' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr1CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr1CktLo' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr1CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr1CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2CktHi' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr2CktHi'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2CktHi_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr2CktLo' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr2CktLo'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr2CktLo_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeAPSR_e_FaultSts_APP_Snsr12_Corr' incorporates:
     *  Merge: '<Root>/M_VeAPSR_e_FaultSts_APP_Snsr12_Corr'
     */
    (void)Rte_Write_VeAPSR_e_FaultSts_APP_Snsr12_Corr_Value(CeDFIB_e_Init);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
