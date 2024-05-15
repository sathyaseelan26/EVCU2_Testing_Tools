/*
 * File: DTRR_ac.c
 *
 * Code generated for Simulink model 'DTRR_ac'.
 *
 * Model version                  : 9.434
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:34:03 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DTRR_ac.h"
#include "look1_iflf_binlcapw.h"
#include "look2_iflf_binlcapw.h"

/* Named constants for Chart: '<S496>/PdlPctTrqArbCond_Determination' */
#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_CAMEL               ((uint8)1U)
#endif

#define DTRR_ac_IN_NORMAL              ((uint8)2U)
#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_RANGE               ((uint8)3U)
#endif

/* Named constants for Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' */
#define DTRR_ac_IN_ECO                 ((uint8)1U)
#define DTRR_ac_IN_ELETRIC             ((uint8)2U)
#define DTRR_ac_IN_MUDSAND             ((uint8)1U)
#define DTRR_ac_IN_ROCK                ((uint8)3U)
#define DTRR_ac_IN_SNOW                ((uint8)4U)
#define DTRR_ac_IN_SPORT               ((uint8)5U)
#define DTRR_ac_IN_TOW                 ((uint8)6U)

/* Named constants for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
#define DTRR_ac_IN_DRAG                ((uint8)1U)
#define DTRR_ac_IN_ECO_d               ((uint8)2U)
#define DTRR_ac_IN_MUDSAND_e           ((uint8)3U)
#define DTRR_ac_IN_NORMAL_i            ((uint8)4U)
#define DTRR_ac_IN_ROCK_e              ((uint8)5U)
#define DTRR_ac_IN_SNOW_f              ((uint8)6U)
#define DTRR_ac_IN_SPORT_o             ((uint8)7U)
#define DTRR_ac_IN_TOW_m               ((uint8)8U)
#define DTRR_ac_IN_TRACK               ((uint8)9U)
#define DTRR_ac_IN_VALET               ((uint8)10U)

/* Named constants for Chart: '<S498>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_2
#define DTRR_ac_IN_FullRangePower      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_2
#define DTRR_ac_IN_OFFROAD             ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_2
#define DTRR_ac_IN_PowerLimitation     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_2
#define DTRR_ac_IN_SPORT_l             ((uint8)4U)
#endif

/* Named constants for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_ELECTRIC            ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_MUDSAND_e1          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_NORMAL_k            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_ROCK_b              ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_SNOW_b              ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_SPORT_f             ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_TOW_mb              ((uint8)7U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_TRACK_m             ((uint8)8U)
#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5
#define DTRR_ac_IN_VALET_c             ((uint8)9U)
#endif

/* Named constants for Chart: '<S500>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_3
#define DTRR_ac_IN_POWER               ((uint8)3U)
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFU) ) || ( LONG_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_DTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, DTRR_VAR_INIT) HeDTRR_b_ACCM182Ena = 0;/* Referenced by: '<S28>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) HeDTRR_b_ACCSysStsSNAFaultEna = 0;/* Referenced by: '<S17>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) HeDTRR_b_CreepEnblSelection = 1;/* Referenced by: '<S422>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) HeDTRR_b_MaxRegenSelection = 0;/* Referenced by: '<S421>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) HeDTRR_b_OPD_Disable = 0;/* Referenced by: '<S414>/Calib' */
static volatile CONST(uint8, DTRR_VAR_INIT) KaDTRR_i_PropMd_To_BiasMap[14] =
{
    1U, 1U, 3U, 1U, 2U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U
} ;                                    /* Referenced by: '<S141>/Calib' */

static volatile CONST(uint8, DTRR_VAR_INIT) KaDTRR_i_PropMd_To_CstCtrllrMode[14]
    =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U
} ;                                    /* Referenced by: '<S233>/Calib' */

static volatile CONST(uint8, DTRR_VAR_INIT)
    KaDTRR_i_TCase_Stat_To_CstCtrllrMode[8] =
{
    1U, 1U, 1U, 1U, 1U, 1U, 1U, 1U
} ;                                    /* Referenced by: '<S234>/Calib' */

static volatile CONST(uint16, DTRR_VAR_INIT) KeDTRR_Cnt_ACCTrqChkDec = 1U;/* Referenced by: '<S31>/Calib' */
static volatile CONST(uint16, DTRR_VAR_INIT) KeDTRR_Cnt_ACCTrqChkInc = 1U;/* Referenced by: '<S32>/Calib' */
static volatile CONST(uint16, DTRR_VAR_INIT) KeDTRR_Cnt_ACCTrqChkLim = 1U;/* Referenced by: '<S33>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_J_WhlInertia = 0.35F;/* Referenced by: '<S254>/Calib' */

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_AeCoastGradDwn_Fast =
    -50.0F;                            /* Referenced by: '<S460>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_AeCoastGradDwn_Slow =
    -5.0F;                             /* Referenced by: '<S461>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_AeCoastGradUp_Fast =
    50.0F;                             /* Referenced by: '<S462>/Calib' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_AeCoastGradUp_Slow = 5.0F;/* Referenced by: '<S463>/Calib' */

#endif

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_PdlPctFctr = 0.05F;/* Referenced by: '<S424>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_PdlWhlTrqReqFcOp = 0.05F;/* Referenced by: '<S174>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_PtcPdlWhlHevImpndSkidFc =
    0.05F;                             /* Referenced by: '<S175>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_PtcPdlWhlTrqReqFcCp =
    0.05F;                             /* Referenced by: '<S176>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_PtcWhlTrqToPwrFctr =
    0.001201F;                         /* Referenced by: '<S700>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_K_acc_DeltaTrq_Gain = 1.0F;/* Referenced by: '<S241>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_ACCMinTrqThresh =
    -7767.0F;                          /* Referenced by: '<S29>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_ACCTrqOvrrd_LowerThrsh =
    0.0F;                              /* Referenced by: '<S97>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_ACCTrqOvrrd_UpperThrsh =
    0.0F;                              /* Referenced by: '<S98>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_ACCTrqRampDec = 1.0F;/* Referenced by: '<S36>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_ACCTrqRampInc = 1.0F;/* Referenced by: '<S37>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_ACCTrq_BSM_OvrdVal =
    -10.0F;                            /* Referenced by: '<S46>/Calib' */

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_AeCoastLatchThrsld =
    10.0F;                             /* Referenced by: '<S464>/Calib' */

#endif

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_BrkTrq_CancelMinTrq =
    100.0F;                            /* Referenced by: '<S284>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_BrkTrq_CreepLmtLSP =
    200.0F;                            /* Referenced by: '<S304>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_BrkTrq_CreepLmtRSP =
    400.0F;                            /* Referenced by: '<S305>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_BrkTrq_EnblCrpCancel =
    20.0F;                             /* Referenced by: '<S289>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_BrkTrq_ResetCond = 20.0F;/* Referenced by: '<S286>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_CCTrqOvrrd_LowerThrsh =
    0.0F;                              /* Referenced by: '<S99>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_CCTrqOvrrd_UpperThrsh =
    0.0F;                              /* Referenced by: '<S100>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_CstCtrllr_DeltaTrqFrz =
    10.0F;                             /* Referenced by: '<S195>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_M_CstCtrllr_deltaTrqActvtnLimit = 0.0F;/* Referenced by: '<S216>/Calib' */

#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_DeltaTrqThresh = 0.0001F;/* Referenced by: '<S514>/Calib' */

#endif

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_InitPtcMinTrq_AftCCCxl =
    2.0F;                              /* Referenced by: '<S349>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_Lv1IpPvMod5HiCreepOffset =
    0.0F;                              /* Referenced by: '<S266>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_Lv1PvMod5HiCreepOffset =
    0.0F;                              /* Referenced by: '<S267>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_Lv1PvMod5HiCreepTrqInc =
    0.0F;                              /* Referenced by: '<S268>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_MinCreepWheelTrq = 400.0F;/* Referenced by: '<S47>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_MinTrqBlndCmptThresh =
    0.5F;                              /* Referenced by: '<S410>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_MinTrq_LatchCond = 0.0F;/* Referenced by: '<S287>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_NominalMinTrqLD = -500.0F;/* Referenced by: '<S300>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_NominalMinTrqLU = 1000.0F;/* Referenced by: '<S301>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_OPDMinTrqLD = 0.0F;/* Referenced by: '<S378>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_OPDMinTrqLD_Latch =
    -10.0F;                            /* Referenced by: '<S354>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_OPDMinTrqLU = 0.0F;/* Referenced by: '<S384>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_OPDMinTrqLU_Latch = 10.0F;/* Referenced by: '<S355>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_PtcMinWhlTrqImpndSkid =
    0.0F;                              /* Referenced by: '<S277>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_PtcMinWhlTrqMphFault =
    50.0F;                             /* Referenced by: '<S269>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_PtcMinWhlTrqRampDec =
    -5.0F;                             /* Referenced by: '<S350>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_PtcMinWhlTrqRampInc =
    1.0F;                              /* Referenced by: '<S347>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_PtcPdlMaxWhlTrqOffset =
    0.0F;                              /* Referenced by: '<S34>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_PtcPdlMinWhlTrqOffset =
    0.0F;                              /* Referenced by: '<S35>/Calib' */

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_eCoastLvlDeltaTrqThresh =
    0.1F;                              /* Referenced by: '<S479>/Calib' */

#endif

static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_eCreepRampTrqThresh =
    1.0F;                              /* Referenced by: '<S311>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_eCreepTrqThresh = 300.0F;/* Referenced by: '<S328>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_M_minCreep = 0.0F;/* Referenced by:
                                                                      * '<S278>/Calib'
                                                                      * '<S302>/Calib'
                                                                      */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_P_BrkPress_CreepLmtLSP =
    200.0F;                            /* Referenced by: '<S329>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_P_BrkPress_CreepLmtRSP =
    400.0F;                            /* Referenced by: '<S330>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_P_CCDesPwr_CxlTrq_Min =
    -1.0F;                             /* Referenced by: '<S348>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_P_MinBattPwrforNoPropLSP =
    2.0F;                              /* Referenced by: '<S152>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_P_MinBattPwrforNoPropRSP =
    3.0F;                              /* Referenced by: '<S153>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_AccPdlNotAppliedLim =
    0.01F;                             /* Referenced by:
                                        * '<S194>/Constant5'
                                        * '<S331>/Calib'
                                        * '<S480>/Calib'
                                        */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_Pct_AccelPdlStndStillReqOPDLSP = 1.0F;/* Referenced by: '<S445>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_Pct_AccelPdlStndStillReqOPDRSP = 0.5F;/* Referenced by: '<S446>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_DeltaPctTrqThresh =
    0.01F;                             /* Referenced by:
                                        * '<S585>/Calib'
                                        * '<S607>/Calib'
                                        * '<S655>/Calib'
                                        * '<S675>/Calib'
                                        */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_MinBattforNoProp = 3.0F;/* Referenced by: '<S154>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_OPDActvtMaxFlagThresh =
    0.0F;                              /* Referenced by: '<S433>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_OPDActvtMinFlagThresh =
    0.0F;                              /* Referenced by: '<S434>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_PdlPctTrqThresh = 0.0F;/* Referenced by:
                                                                      * '<S379>/Calib'
                                                                      * '<S385>/Calib'
                                                                      */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_PdlPctTrqTipOutThresh =
    0.01F;                             /* Referenced by: '<S411>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_PtcPdlWot = 99.0F;/* Referenced by: '<S494>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_SocRampDec = -0.5F;/* Referenced by: '<S158>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_SocRampInc = 0.5F;/* Referenced by: '<S159>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_StepPdlPctTrqLDThresh =
    0.1F;                              /* Referenced by: '<S380>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_Pct_StepPdlPctTrqLUThresh =
    0.5F;                              /* Referenced by: '<S386>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_U_PtcCcMinPdlOvrrd = 0.7F;/* Referenced by: '<S341>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_U_PtcDriverOvrrd_ACCLowerThrsh = 0.1F;/* Referenced by: '<S101>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_U_PtcDriverOvrrd_ACCUpperThrsh = 0.1F;/* Referenced by: '<S102>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_U_PtcDriverOvrrd_CCLowerThrsh = 0.1F;/* Referenced by: '<S103>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_U_PtcDriverOvrrd_CCUpperThrsh = 0.1F;/* Referenced by: '<S104>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_a_CstDwn_AccCtrlLim_High =
    -0.05F;                            /* Referenced by: '<S242>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_a_CstDwn_AccCtrlLim_Low =
    -0.1F;                             /* Referenced by: '<S243>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ACCTrqEnabled_BSMFA = 0;/* Referenced by: '<S48>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT)
    KeDTRR_b_ACCTrqEnabled_BSMFAOvrrdEnbl = 0;/* Referenced by: '<S49>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT)
    KeDTRR_b_ACCTrqEnabled_BSMOvrrdEnbl = 0;/* Referenced by: '<S50>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ACCTrqEnabled_BSM_OvrdVal
    = 0;                               /* Referenced by: '<S51>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ACCTrq_BSMFA = 0;/* Referenced by: '<S52>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ACCTrq_BSMFAOvrrdEnbl = 0;/* Referenced by: '<S53>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ACCTrq_BSMOvrrdEnbl = 0;/* Referenced by: '<S54>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ASL_ActiveOvrrd = 0;/* Referenced by: '<S55>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ASL_Active_OvrrdVal = 0;/* Referenced by: '<S56>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_AeCoastReadyFAOvrrd = 0;/* Referenced by: '<S57>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_AeCoastReadyFA_OvrrdVal =
    0;                                 /* Referenced by: '<S58>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_AeCoastReadyOvrrd = 0;/* Referenced by: '<S59>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_AeCoastReady_OvrrdVal = 0;/* Referenced by: '<S60>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_BiasPoint_TC_Enbl = 0;/* Referenced by: '<S142>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_BrkPrssCreepEnbl = 1;/* Referenced by: '<S279>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_CC_Type_Ovrrd = 0;/* Referenced by: '<S61>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_CC_Type_OvrrdEna = 0;/* Referenced by: '<S62>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_Creep_Apprch = 1;/* Referenced by: '<S177>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_CstCtrllr_Enbl = 1;/* Referenced by: '<S184>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_CstCtrllr_TC_Enbl = 0;/* Referenced by: '<S235>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_DrvMdInhb4eCreepEnbl = 1;/* Referenced by: '<S332>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_DsblMinPedalClip = 0;/* Referenced by: '<S88>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_EVCUOvr_Enbl = 1;/* Referenced by: '<S105>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_EcoMdInhb4eCreepEnbl = 1;/* Referenced by: '<S333>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_EnblCreepCancelImprvmnt =
    1;                                 /* Referenced by: '<S285>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_IgnoreBrkPedal = 0;/* Referenced by: '<S290>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_InhibitCruise = 0;/* Referenced by: '<S63>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_InhibitCruiseOvrrdEnbl =
    0;                                 /* Referenced by: '<S64>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_LBProgEnbl = 1;/* Referenced by:
                                                                      * '<S495>/Calib'
                                                                      * '<S545>/Calib'
                                                                      */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_MinCreepWheel_Ovrrd = 0;/* Referenced by: '<S65>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_MinCrpWhlEnb_Ovrrd = 0;/* Referenced by: '<S66>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_MinCrpWhlTrq_Enb = 1;/* Referenced by: '<S67>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_NCCHandledHALF = 1;/* Referenced by: '<S342>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_OPDPdlPctSrc = 0;/* Referenced by: '<S425>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_OvrdACCSystemSts = 0;/* Referenced by: '<S68>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_OvrdSRAROPD_Dsbl = 0;/* Referenced by: '<S69>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_PMBD_EVCU2_Conf = 1;/* Referenced by: '<S178>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_PdlFail4eCreepEnbl = 1;/* Referenced by: '<S334>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ProxiACCOvrrdEnbl = 0;/* Referenced by: '<S70>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_ProxyOvrEnbl = 0;/* Referenced by: '<S106>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_RunCrankActiveAnalog = 0;/* Referenced by: '<S71>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT)
    KeDTRR_b_RunCrankActiveAnalogOvrrdEnbl = 0;/* Referenced by: '<S72>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_SRAROPD_DsblOvrdVal = 0;/* Referenced by: '<S73>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_TrqBias_Enable = 1;/* Referenced by:
                                                                      * '<S143>/Calib'
                                                                      * '<S481>/Calib'
                                                                      */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_TurtleMdSts4eCreepEnbl =
    1;                                 /* Referenced by: '<S335>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_VehSpdFA_OvrrdEnbl = 0;/* Referenced by: '<S74>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_VehSpdFA_OvrrdVal = 0;/* Referenced by: '<S75>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT)
    KeDTRR_b_VehSpdVSOSigFailSts_OvrrdEnbl = 0;/* Referenced by: '<S76>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT)
    KeDTRR_b_VehSpdVSOSigFailSts_OvrrdVal = 0;/* Referenced by: '<S77>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_eCreepingEna = 1;/* Referenced by: '<S272>/Calib' */
static volatile CONST(boolean, DTRR_VAR_INIT) KeDTRR_b_enablLv2RedPerf = 0;/* Referenced by: '<S706>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_dM_eCreepTrqCancRateLD =
    -5.0F;                             /* Referenced by: '<S312>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_dM_eCreepTrqCancRateLU =
    5.0F;                              /* Referenced by: '<S313>/Calib' */
static volatile CONST(TePLTR_e_ACCSystemSts, DTRR_VAR_INIT)
    KeDTRR_e_ACCSystemSts_OvrrdVal = CePLTR_e_Off;/* Referenced by: '<S78>/Calib' */
static volatile CONST(TePLTR_e_AdaptiveCruiseCtrl, DTRR_VAR_INIT)
    KeDTRR_e_ProxiACC_OvrdVal = CePLTR_e_ACC_Absent;/* Referenced by: '<S79>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_k_CstCtrllr_GrdMax = 0.05F;/* Referenced by: '<S205>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_k_CstCtrllr_GrdMin_Std =
    -10.0F;                            /* Referenced by: '<S206>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_k_FiltPdlPctTrqVirtual =
    0.1F;                              /* Referenced by: '<S110>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_k_MinTrqFinalFc = 0.05F;/* Referenced by: '<S371>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_k_MinTrqFinalFc_Inhibit =
    0.1F;                              /* Referenced by: '<S372>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_k_PtcPdlWhlTrqMphFilt =
    0.1F;                              /* Referenced by: '<S701>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_l_WhlRad = 0.3F;/* Referenced by:
                                                                      * '<S244>/Calib'
                                                                      * '<S255>/Calib'
                                                                      */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_m_NomMass = 2500.0F;/* Referenced by: '<S256>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_r_OPDConstantPdlFact =
    1.0E-5F;                           /* Referenced by: '<S435>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_t_6p25dt = 1.0F;/* Referenced by:
                                                                      * '<S18>/Calib'
                                                                      * '<S280>/Calib'
                                                                      * '<S336>/Calib'
                                                                      */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_t_ACCSysStsSNATime = 2.0F;/* Referenced by: '<S19>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_t_BrkTrq_Dervtv_CutOffT =
    1.0F;                              /* Referenced by: '<S281>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_t_SmplTime = 0.00625F;/* Referenced by:
                                                                      * '<S237>/Calib'
                                                                      * '<S245>/Calib'
                                                                      */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_t_eCreepMaxTime = 3.0F;/* Referenced by: '<S337>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT)
    KeDTRR_v_CstDwn_AccCtrl_SpdDeadband = 5.0F;/* Referenced by: '<S246>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_v_VehSpdStndStillReqOPDLSP =
    8.0F;                              /* Referenced by: '<S447>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_v_VehSpdStndStillReqOPDRSP =
    7.0F;                              /* Referenced by: '<S448>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KeDTRR_v_VehSpd_EnblCrpCancel =
    5.0F;                              /* Referenced by: '<S288>/Calib' */
static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_BrkPrssConvTbl[10] =
{
    1.0F, 0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_AccErr_Gain[2] =
{
    -10000.0F, 10000.0F
} ;                                    /* Referenced by:
                                        * '<S219>/Vector'
                                        * '<S226>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_AccErr_GainInt
    [2] =
{
    -10000.0F, 10000.0F
} ;                                    /* Referenced by:
                                        * '<S223>/Vector'
                                        * '<S230>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_RoadSlpGain[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S221>/Vector'
                                        * '<S228>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_SpdErr_Gain[2] =
{
    -10000.0F, 10000.0F
} ;                                    /* Referenced by:
                                        * '<S220>/Vector'
                                        * '<S227>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_SpdErr_GainInt
    [2] =
{
    -10000.0F, 10000.0F
} ;                                    /* Referenced by:
                                        * '<S224>/Vector'
                                        * '<S231>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_TrqLmtMax[2] =
{
    0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S218>/Vector'
                                        * '<S225>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_CstCtrllr_TrqLmtMin[2] =
{
    -10000.0F, -10000.0F
} ;                                    /* Referenced by:
                                        * '<S222>/Vector'
                                        * '<S229>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcBrkOffsetMultTbl[18] =
{
    0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S283>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl[289] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.008F, 0.008F, 0.008F, 0.04099F, 0.052F, 0.064F,
    0.065F, 0.06699F, 0.069F, 0.073F, 0.077F, 0.082F, 0.09399F, 0.099F, 0.10199F,
    0.10199F, 0.10199F, 0.01498F, 0.01498F, 0.01599F, 0.048F, 0.05899F, 0.07001F,
    0.07001F, 0.07401F, 0.07501F, 0.07999F, 0.08301F, 0.08899F, 0.10001F,
    0.10501F, 0.108F, 0.10901F, 0.117F, 0.02798F, 0.02798F, 0.02899F, 0.061F,
    0.07101F, 0.08301F, 0.08401F, 0.07599F, 0.08801F, 0.09201F, 0.09601F,
    0.10101F, 0.112F, 0.117F, 0.12F, 0.121F, 0.133F, 0.04199F, 0.04199F,
    0.04199F, 0.07401F, 0.08401F, 0.095F, 0.09601F, 0.09799F, 0.10001F, 0.104F,
    0.108F, 0.11301F, 0.125F, 0.129F, 0.13199F, 0.133F, 0.14899F, 0.05499F,
    0.05499F, 0.05499F, 0.08701F, 0.09698F, 0.108F, 0.10901F, 0.11099F, 0.11301F,
    0.117F, 0.11401F, 0.12601F, 0.13699F, 0.142F, 0.14401F, 0.14499F, 0.164F,
    0.10098F, 0.10098F, 0.10101F, 0.13101F, 0.14099F, 0.15201F, 0.15201F,
    0.15399F, 0.15601F, 0.16F, 0.16299F, 0.14301F, 0.17401F, 0.18399F, 0.186F,
    0.18701F, 0.21899F, 0.12698F, 0.12698F, 0.12799F, 0.15701F, 0.16599F, 0.177F,
    0.177F, 0.17899F, 0.181F, 0.185F, 0.18799F, 0.19299F, 0.215F, 0.21899F,
    0.20999F, 0.211F, 0.25101F, 0.16098F, 0.16098F, 0.16101F, 0.189F, 0.198F,
    0.20801F, 0.20901F, 0.20999F, 0.21201F, 0.216F, 0.21899F, 0.224F, 0.233F,
    0.25201F, 0.26801F, 0.26599F, 0.29001F, 0.194F, 0.194F, 0.194F, 0.22101F,
    0.23001F, 0.23901F, 0.23999F, 0.242F, 0.24301F, 0.24701F, 0.25F, 0.254F,
    0.26401F, 0.26801F, 0.26999F, 0.28601F, 0.32901F, 0.30298F, 0.30298F,
    0.30301F, 0.32599F, 0.33401F, 0.34201F, 0.34299F, 0.34399F, 0.345F, 0.34799F,
    0.35101F, 0.35501F, 0.36301F, 0.367F, 0.36899F, 0.36899F, 0.44299F, 0.414F,
    0.414F, 0.41501F, 0.435F, 0.44101F, 0.448F, 0.448F, 0.45001F, 0.45099F,
    0.453F, 0.45499F, 0.45901F, 0.465F, 0.46799F, 0.47F, 0.47F, 0.47F, 0.59198F,
    0.59198F, 0.59299F, 0.60699F, 0.61099F, 0.616F, 0.616F, 0.617F, 0.61801F,
    0.62F, 0.621F, 0.62399F, 0.62799F, 0.63F, 0.63199F, 0.63199F, 0.63199F,
    0.694F, 0.694F, 0.69501F, 0.70499F, 0.70801F, 0.71201F, 0.71201F, 0.71301F,
    0.71399F, 0.715F, 0.716F, 0.71799F, 0.72101F, 0.72299F, 0.724F, 0.724F,
    0.724F, 0.79599F, 0.79599F, 0.797F, 0.80399F, 0.806F, 0.80801F, 0.80801F,
    0.80899F, 0.80899F, 0.81F, 0.811F, 0.81201F, 0.814F, 0.815F, 0.81601F,
    0.81601F, 0.81601F, 0.89798F, 0.89798F, 0.89899F, 0.90201F, 0.90302F,
    0.90399F, 0.90399F, 0.905F, 0.905F, 0.905F, 0.90601F, 0.90601F, 0.90701F,
    0.90799F, 0.90799F, 0.90799F, 0.923F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S681>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Boost[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.008F, 0.008F, 0.008F, 0.04099F, 0.052F, 0.064F,
    0.065F, 0.06699F, 0.069F, 0.073F, 0.077F, 0.082F, 0.09399F, 0.099F, 0.10199F,
    0.10199F, 0.10199F, 0.01498F, 0.01498F, 0.01599F, 0.048F, 0.05899F, 0.07001F,
    0.07001F, 0.07401F, 0.07501F, 0.07999F, 0.08301F, 0.08899F, 0.10001F,
    0.10501F, 0.108F, 0.10901F, 0.117F, 0.02798F, 0.02798F, 0.02899F, 0.061F,
    0.07101F, 0.08301F, 0.08401F, 0.07599F, 0.08801F, 0.09201F, 0.09601F,
    0.10101F, 0.112F, 0.117F, 0.12F, 0.121F, 0.133F, 0.04199F, 0.04199F,
    0.04199F, 0.07401F, 0.08401F, 0.095F, 0.09601F, 0.09799F, 0.10001F, 0.104F,
    0.108F, 0.11301F, 0.125F, 0.129F, 0.13199F, 0.133F, 0.14899F, 0.05499F,
    0.05499F, 0.05499F, 0.08701F, 0.09698F, 0.108F, 0.10901F, 0.11099F, 0.11301F,
    0.117F, 0.11401F, 0.12601F, 0.13699F, 0.142F, 0.14401F, 0.14499F, 0.164F,
    0.10098F, 0.10098F, 0.10101F, 0.13101F, 0.14099F, 0.15201F, 0.15201F,
    0.15399F, 0.15601F, 0.16F, 0.16299F, 0.14301F, 0.17401F, 0.18399F, 0.186F,
    0.18701F, 0.21899F, 0.12698F, 0.12698F, 0.12799F, 0.15701F, 0.16599F, 0.177F,
    0.177F, 0.17899F, 0.181F, 0.185F, 0.18799F, 0.19299F, 0.215F, 0.21899F,
    0.20999F, 0.211F, 0.25101F, 0.16098F, 0.16098F, 0.16101F, 0.189F, 0.198F,
    0.20801F, 0.20901F, 0.20999F, 0.21201F, 0.216F, 0.21899F, 0.224F, 0.233F,
    0.25201F, 0.26801F, 0.26599F, 0.29001F, 0.194F, 0.194F, 0.194F, 0.22101F,
    0.23001F, 0.23901F, 0.23999F, 0.242F, 0.24301F, 0.24701F, 0.25F, 0.254F,
    0.26401F, 0.26801F, 0.26999F, 0.28601F, 0.32901F, 0.30298F, 0.30298F,
    0.30301F, 0.32599F, 0.33401F, 0.34201F, 0.34299F, 0.34399F, 0.345F, 0.34799F,
    0.35101F, 0.35501F, 0.36301F, 0.367F, 0.36899F, 0.36899F, 0.44299F, 0.414F,
    0.414F, 0.41501F, 0.435F, 0.44101F, 0.448F, 0.448F, 0.45001F, 0.45099F,
    0.453F, 0.45499F, 0.45901F, 0.465F, 0.46799F, 0.47F, 0.47F, 0.47F, 0.59198F,
    0.59198F, 0.59299F, 0.60699F, 0.61099F, 0.616F, 0.616F, 0.617F, 0.61801F,
    0.62F, 0.621F, 0.62399F, 0.62799F, 0.63F, 0.63199F, 0.63199F, 0.63199F,
    0.694F, 0.694F, 0.69501F, 0.70499F, 0.70801F, 0.71201F, 0.71201F, 0.71301F,
    0.71399F, 0.715F, 0.716F, 0.71799F, 0.72101F, 0.72299F, 0.724F, 0.724F,
    0.724F, 0.79599F, 0.79599F, 0.797F, 0.80399F, 0.806F, 0.80801F, 0.80801F,
    0.80899F, 0.80899F, 0.81F, 0.811F, 0.81201F, 0.814F, 0.815F, 0.81601F,
    0.81601F, 0.81601F, 0.89798F, 0.89798F, 0.89899F, 0.90201F, 0.90302F,
    0.90399F, 0.90399F, 0.905F, 0.905F, 0.905F, 0.90601F, 0.90601F, 0.90701F,
    0.90799F, 0.90799F, 0.90799F, 0.923F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S682>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Camel[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.008F, 0.008F, 0.008F, 0.04099F, 0.052F, 0.064F,
    0.065F, 0.06699F, 0.069F, 0.073F, 0.077F, 0.082F, 0.09399F, 0.099F, 0.10199F,
    0.10199F, 0.10199F, 0.01498F, 0.01498F, 0.01599F, 0.048F, 0.05899F, 0.07001F,
    0.07001F, 0.07401F, 0.07501F, 0.07999F, 0.08301F, 0.08899F, 0.10001F,
    0.10501F, 0.108F, 0.10901F, 0.117F, 0.02798F, 0.02798F, 0.02899F, 0.061F,
    0.07101F, 0.08301F, 0.08401F, 0.07599F, 0.08801F, 0.09201F, 0.09601F,
    0.10101F, 0.112F, 0.117F, 0.12F, 0.121F, 0.133F, 0.04199F, 0.04199F,
    0.04199F, 0.07401F, 0.08401F, 0.095F, 0.09601F, 0.09799F, 0.10001F, 0.104F,
    0.108F, 0.11301F, 0.125F, 0.129F, 0.13199F, 0.133F, 0.14899F, 0.05499F,
    0.05499F, 0.05499F, 0.08701F, 0.09698F, 0.108F, 0.10901F, 0.11099F, 0.11301F,
    0.117F, 0.11401F, 0.12601F, 0.13699F, 0.142F, 0.14401F, 0.14499F, 0.164F,
    0.10098F, 0.10098F, 0.10101F, 0.13101F, 0.14099F, 0.15201F, 0.15201F,
    0.15399F, 0.15601F, 0.16F, 0.16299F, 0.14301F, 0.17401F, 0.18399F, 0.186F,
    0.18701F, 0.21899F, 0.12698F, 0.12698F, 0.12799F, 0.15701F, 0.16599F, 0.177F,
    0.177F, 0.17899F, 0.181F, 0.185F, 0.18799F, 0.19299F, 0.215F, 0.21899F,
    0.20999F, 0.211F, 0.25101F, 0.16098F, 0.16098F, 0.16101F, 0.189F, 0.198F,
    0.20801F, 0.20901F, 0.20999F, 0.21201F, 0.216F, 0.21899F, 0.224F, 0.233F,
    0.25201F, 0.26801F, 0.26599F, 0.29001F, 0.194F, 0.194F, 0.194F, 0.22101F,
    0.23001F, 0.23901F, 0.23999F, 0.242F, 0.24301F, 0.24701F, 0.25F, 0.254F,
    0.26401F, 0.26801F, 0.26999F, 0.28601F, 0.32901F, 0.30298F, 0.30298F,
    0.30301F, 0.32599F, 0.33401F, 0.34201F, 0.34299F, 0.34399F, 0.345F, 0.34799F,
    0.35101F, 0.35501F, 0.36301F, 0.367F, 0.36899F, 0.36899F, 0.44299F, 0.414F,
    0.414F, 0.41501F, 0.435F, 0.44101F, 0.448F, 0.448F, 0.45001F, 0.45099F,
    0.453F, 0.45499F, 0.45901F, 0.465F, 0.46799F, 0.47F, 0.47F, 0.47F, 0.59198F,
    0.59198F, 0.59299F, 0.60699F, 0.61099F, 0.616F, 0.616F, 0.617F, 0.61801F,
    0.62F, 0.621F, 0.62399F, 0.62799F, 0.63F, 0.63199F, 0.63199F, 0.63199F,
    0.694F, 0.694F, 0.69501F, 0.70499F, 0.70801F, 0.71201F, 0.71201F, 0.71301F,
    0.71399F, 0.715F, 0.716F, 0.71799F, 0.72101F, 0.72299F, 0.724F, 0.724F,
    0.724F, 0.79599F, 0.79599F, 0.797F, 0.80399F, 0.806F, 0.80801F, 0.80801F,
    0.80899F, 0.80899F, 0.81F, 0.811F, 0.81201F, 0.814F, 0.815F, 0.81601F,
    0.81601F, 0.81601F, 0.89798F, 0.89798F, 0.89899F, 0.90201F, 0.90302F,
    0.90399F, 0.90399F, 0.905F, 0.905F, 0.905F, 0.90601F, 0.90601F, 0.90701F,
    0.90799F, 0.90799F, 0.90799F, 0.923F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S683>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_K_PtcPdlPctTrqWhl_Camel_Boost[289] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0100000007F, 0.0100000007F, 0.0100000007F,
    0.0512374975F, 0.065F, 0.0800000057F, 0.08125F, 0.0837375075F, 0.08625F,
    0.09125F, 0.09625F, 0.102500007F, 0.117487498F, 0.12375F, 0.127487496F,
    0.127487496F, 0.127487496F, 0.018725F, 0.018725F, 0.0199875012F,
    0.0600000024F, 0.0737375F, 0.0875125F, 0.0875125F, 0.0925125F, 0.0937625F,
    0.0999875F, 0.103762507F, 0.111237504F, 0.125012502F, 0.131262511F, 0.135F,
    0.136262506F, 0.14625F, 0.034975F, 0.034975F, 0.0362375F, 0.07625F,
    0.0887625F, 0.103762507F, 0.105012499F, 0.0949875F, 0.110012501F,
    0.115012497F, 0.120012499F, 0.126262501F, 0.14F, 0.14625F, 0.149999991F,
    0.15125F, 0.16625F, 0.0524875F, 0.0524875F, 0.0524875F, 0.0925125F,
    0.105012499F, 0.11875F, 0.120012499F, 0.1224875F, 0.125012502F, 0.13F,
    0.135F, 0.141262501F, 0.15625F, 0.16125F, 0.164987504F, 0.16625F,
    0.186237514F, 0.0687375F, 0.0687375F, 0.0687375F, 0.108762503F, 0.121225F,
    0.135F, 0.136262506F, 0.1387375F, 0.141262501F, 0.14625F, 0.1425125F,
    0.157512501F, 0.171237499F, 0.17750001F, 0.180012509F, 0.181237489F,
    0.205000013F, 0.126225F, 0.126225F, 0.126262501F, 0.163762495F, 0.176237509F,
    0.190012485F, 0.190012485F, 0.192487508F, 0.19501251F, 0.199999988F,
    0.203737497F, 0.17876251F, 0.217512488F, 0.229987502F, 0.2325F, 0.233762503F,
    0.27373749F, 0.158725008F, 0.158725008F, 0.159987509F, 0.196262509F,
    0.207487494F, 0.22125F, 0.22125F, 0.223737508F, 0.22625F, 0.23125F,
    0.234987497F, 0.241237506F, 0.26875F, 0.27373749F, 0.262487501F, 0.26375F,
    0.313762486F, 0.201225F, 0.201225F, 0.201262504F, 0.23625F, 0.2475F,
    0.260012507F, 0.261262506F, 0.262487501F, 0.265012503F, 0.27F, 0.27373749F,
    0.28F, 0.29125F, 0.315012485F, 0.335012496F, 0.332487494F, 0.362512499F,
    0.2425F, 0.2425F, 0.2425F, 0.276262492F, 0.287512511F, 0.2987625F,
    0.299987495F, 0.3025F, 0.303762496F, 0.308762491F, 0.3125F, 0.3175F,
    0.3300125F, 0.335012496F, 0.337487489F, 0.357512504F, 0.411262512F,
    0.378725F, 0.378725F, 0.378762484F, 0.407487482F, 0.417512506F, 0.427512497F,
    0.428737521F, 0.42998749F, 0.43125F, 0.434987515F, 0.438762486F,
    0.443762511F, 0.453762472F, 0.45875F, 0.46123749F, 0.46123749F, 0.553737521F,
    0.5175F, 0.5175F, 0.518762529F, 0.54375F, 0.551262498F, 0.56F, 0.56F,
    0.562512517F, 0.563737512F, 0.56625F, 0.568737507F, 0.573762536F, 0.58125F,
    0.584987521F, 0.5875F, 0.5875F, 0.5875F, 0.739975F, 0.739975F, 0.741237462F,
    0.758737445F, 0.7637375F, 0.77F, 0.77F, 0.77125F, 0.772512496F, 0.775F,
    0.77625F, 0.779987514F, 0.784987509F, 0.7875F, 0.789987504F, 0.789987504F,
    0.789987504F, 0.8675F, 0.8675F, 0.868762493F, 0.881237507F, 0.885012507F,
    0.890012503F, 0.890012503F, 0.891262531F, 0.892487466F, 0.893749952F,
    0.895000041F, 0.897487462F, 0.901262522F, 0.903737485F, 0.905F, 0.905F,
    0.905F, 0.994987488F, 0.994987488F, 0.99625F, 1.00498748F, 1.00749993F,
    1.01001251F, 1.01001251F, 1.0112375F, 1.0112375F, 1.0125F, 1.01375F,
    1.0150125F, 1.0175F, 1.01875F, 1.0200125F, 1.0200125F, 1.0200125F,
    1.12247491F, 1.12247491F, 1.12373745F, 1.12751257F, 1.128775F, 1.12998748F,
    1.12998748F, 1.1312499F, 1.1312499F, 1.1312499F, 1.13251245F, 1.13251245F,
    1.13376248F, 1.13498747F, 1.13498747F, 1.13498747F, 1.15375F, 1.25F, 1.25F,
    1.25F, 1.25F, 1.25F, 1.25F, 1.25F, 1.25F, 1.25F, 1.25F, 1.25F, 1.25F, 1.25F,
    1.25F, 1.25F, 1.25F, 1.25F
} ;                                    /* Referenced by: '<S684>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_K_PtcPdlPctTrqWhl_Camel_Lim[289] =
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
} ;                                    /* Referenced by: '<S685>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Drag[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0092F, 0.0092F, 0.0092F, 0.0471385F, 0.0598F,
    0.0736F, 0.07475F, 0.0770385F, 0.07935F, 0.08395F, 0.08855F, 0.0943F,
    0.108088501F, 0.11385F, 0.1172885F, 0.1172885F, 0.1172885F, 0.017227F,
    0.017227F, 0.0183885F, 0.0552F, 0.0678385F, 0.0805115F, 0.0805115F,
    0.0851115F, 0.0862615F, 0.0919885F, 0.0954615F, 0.1023385F, 0.115011498F,
    0.120761499F, 0.1242F, 0.125361502F, 0.13455F, 0.032177F, 0.032177F,
    0.0333385F, 0.07015F, 0.0816615F, 0.0954615F, 0.0966115F, 0.0873885F,
    0.101211503F, 0.105811499F, 0.110411502F, 0.116161503F, 0.1288F, 0.13455F,
    0.138F, 0.13915F, 0.15295F, 0.0482885F, 0.0482885F, 0.0482885F, 0.0851115F,
    0.0966115F, 0.10925F, 0.110411502F, 0.112688497F, 0.115011498F, 0.1196F,
    0.1242F, 0.129961506F, 0.14375F, 0.14835F, 0.151788503F, 0.15295F,
    0.171338499F, 0.0632385F, 0.0632385F, 0.0632385F, 0.100061499F, 0.111527F,
    0.1242F, 0.125361502F, 0.127638504F, 0.129961506F, 0.13455F, 0.131111503F,
    0.144911498F, 0.157538503F, 0.1633F, 0.165611506F, 0.166738495F, 0.1886F,
    0.116127F, 0.116127F, 0.116161503F, 0.150661498F, 0.162138507F, 0.174811497F,
    0.174811497F, 0.177088499F, 0.179411501F, 0.184F, 0.187438503F, 0.164461493F,
    0.200111493F, 0.211588502F, 0.2139F, 0.215061501F, 0.251838505F, 0.146027F,
    0.146027F, 0.1471885F, 0.180561498F, 0.190888494F, 0.20355F, 0.20355F,
    0.205838501F, 0.20815F, 0.21275F, 0.216188505F, 0.221938506F, 0.24725F,
    0.251838505F, 0.241488501F, 0.24265F, 0.28866151F, 0.185127F, 0.185127F,
    0.185161501F, 0.21735F, 0.2277F, 0.2392115F, 0.240361497F, 0.241488501F,
    0.243811503F, 0.2484F, 0.251838505F, 0.2576F, 0.26795F, 0.289811492F,
    0.308211505F, 0.305888504F, 0.333511502F, 0.2231F, 0.2231F, 0.2231F,
    0.254161507F, 0.264511496F, 0.274861515F, 0.275988489F, 0.2783F,
    0.279461503F, 0.284061491F, 0.2875F, 0.2921F, 0.303611487F, 0.308211505F,
    0.310488492F, 0.328911513F, 0.378361493F, 0.348427F, 0.348427F, 0.348461509F,
    0.37488851F, 0.384111494F, 0.393311501F, 0.394438505F, 0.395588487F,
    0.39675F, 0.400188506F, 0.403661489F, 0.408261508F, 0.417461514F, 0.42205F,
    0.42433849F, 0.42433849F, 0.509438515F, 0.4761F, 0.4761F, 0.477261513F,
    0.50025F, 0.507161498F, 0.5152F, 0.5152F, 0.517511487F, 0.518638492F,
    0.52095F, 0.52323848F, 0.527861476F, 0.53475F, 0.538188517F, 0.5405F,
    0.5405F, 0.5405F, 0.680777F, 0.680777F, 0.681938529F, 0.698038518F,
    0.702638507F, 0.7084F, 0.7084F, 0.70955F, 0.710711479F, 0.713F, 0.71415F,
    0.717588484F, 0.722188473F, 0.7245F, 0.726788521F, 0.726788521F,
    0.726788521F, 0.7981F, 0.7981F, 0.79926151F, 0.810738504F, 0.814211488F,
    0.818811476F, 0.818811476F, 0.819961488F, 0.821088493F, 0.82225F, 0.8234F,
    0.825688481F, 0.829161525F, 0.831438482F, 0.8326F, 0.8326F, 0.8326F,
    0.915388525F, 0.915388525F, 0.91655F, 0.924588501F, 0.9269F, 0.929211497F,
    0.929211497F, 0.930338502F, 0.930338502F, 0.9315F, 0.93265F, 0.933811486F,
    0.9361F, 0.93725F, 0.938411474F, 0.938411474F, 0.938411474F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S686>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_MudSand
    [289] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.008F, 0.008F, 0.008F, 0.04099F, 0.052F, 0.064F,
    0.065F, 0.06699F, 0.069F, 0.073F, 0.077F, 0.082F, 0.09399F, 0.099F, 0.10199F,
    0.10199F, 0.10199F, 0.01498F, 0.01498F, 0.01599F, 0.048F, 0.05899F, 0.07001F,
    0.07001F, 0.07401F, 0.07501F, 0.07999F, 0.08301F, 0.08899F, 0.10001F,
    0.10501F, 0.108F, 0.10901F, 0.117F, 0.02798F, 0.02798F, 0.02899F, 0.061F,
    0.07101F, 0.08301F, 0.08401F, 0.07599F, 0.08801F, 0.09201F, 0.09601F,
    0.10101F, 0.112F, 0.117F, 0.12F, 0.121F, 0.133F, 0.04199F, 0.04199F,
    0.04199F, 0.07401F, 0.08401F, 0.095F, 0.09601F, 0.09799F, 0.10001F, 0.104F,
    0.108F, 0.11301F, 0.125F, 0.129F, 0.13199F, 0.133F, 0.14899F, 0.05499F,
    0.05499F, 0.05499F, 0.08701F, 0.09698F, 0.108F, 0.10901F, 0.11099F, 0.11301F,
    0.117F, 0.11401F, 0.12601F, 0.13699F, 0.142F, 0.14401F, 0.14499F, 0.164F,
    0.10098F, 0.10098F, 0.10101F, 0.13101F, 0.14099F, 0.15201F, 0.15201F,
    0.15399F, 0.15601F, 0.16F, 0.16299F, 0.14301F, 0.17401F, 0.18399F, 0.186F,
    0.18701F, 0.21899F, 0.12698F, 0.12698F, 0.12799F, 0.15701F, 0.16599F, 0.177F,
    0.177F, 0.17899F, 0.181F, 0.185F, 0.18799F, 0.19299F, 0.215F, 0.21899F,
    0.20999F, 0.211F, 0.25101F, 0.16098F, 0.16098F, 0.16101F, 0.189F, 0.198F,
    0.20801F, 0.20901F, 0.20999F, 0.21201F, 0.216F, 0.21899F, 0.224F, 0.233F,
    0.25201F, 0.26801F, 0.26599F, 0.29001F, 0.194F, 0.194F, 0.194F, 0.22101F,
    0.23001F, 0.23901F, 0.23999F, 0.242F, 0.24301F, 0.24701F, 0.25F, 0.254F,
    0.26401F, 0.26801F, 0.26999F, 0.28601F, 0.32901F, 0.30298F, 0.30298F,
    0.30301F, 0.32599F, 0.33401F, 0.34201F, 0.34299F, 0.34399F, 0.345F, 0.34799F,
    0.35101F, 0.35501F, 0.36301F, 0.367F, 0.36899F, 0.36899F, 0.44299F, 0.414F,
    0.414F, 0.41501F, 0.435F, 0.44101F, 0.448F, 0.448F, 0.45001F, 0.45099F,
    0.453F, 0.45499F, 0.45901F, 0.465F, 0.46799F, 0.47F, 0.47F, 0.47F, 0.59198F,
    0.59198F, 0.59299F, 0.60699F, 0.61099F, 0.616F, 0.616F, 0.617F, 0.61801F,
    0.62F, 0.621F, 0.62399F, 0.62799F, 0.63F, 0.63199F, 0.63199F, 0.63199F,
    0.694F, 0.694F, 0.69501F, 0.70499F, 0.70801F, 0.71201F, 0.71201F, 0.71301F,
    0.71399F, 0.715F, 0.716F, 0.71799F, 0.72101F, 0.72299F, 0.724F, 0.724F,
    0.724F, 0.79599F, 0.79599F, 0.797F, 0.80399F, 0.806F, 0.80801F, 0.80801F,
    0.80899F, 0.80899F, 0.81F, 0.811F, 0.81201F, 0.814F, 0.815F, 0.81601F,
    0.81601F, 0.81601F, 0.89798F, 0.89798F, 0.89899F, 0.90201F, 0.90302F,
    0.90399F, 0.90399F, 0.905F, 0.905F, 0.905F, 0.90601F, 0.90601F, 0.90701F,
    0.90799F, 0.90799F, 0.90799F, 0.923F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S687>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_OffRoad
    [289] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0092F, 0.0092F, 0.0092F, 0.0471385F, 0.0598F,
    0.0736F, 0.07475F, 0.0770385F, 0.07935F, 0.08395F, 0.08855F, 0.0943F,
    0.108088501F, 0.11385F, 0.1172885F, 0.1172885F, 0.1172885F, 0.017227F,
    0.017227F, 0.0183885F, 0.0552F, 0.0678385F, 0.0805115F, 0.0805115F,
    0.0851115F, 0.0862615F, 0.0919885F, 0.0954615F, 0.1023385F, 0.115011498F,
    0.120761499F, 0.1242F, 0.125361502F, 0.13455F, 0.032177F, 0.032177F,
    0.0333385F, 0.07015F, 0.0816615F, 0.0954615F, 0.0966115F, 0.0873885F,
    0.101211503F, 0.105811499F, 0.110411502F, 0.116161503F, 0.1288F, 0.13455F,
    0.138F, 0.13915F, 0.15295F, 0.0482885F, 0.0482885F, 0.0482885F, 0.0851115F,
    0.0966115F, 0.10925F, 0.110411502F, 0.112688497F, 0.115011498F, 0.1196F,
    0.1242F, 0.129961506F, 0.14375F, 0.14835F, 0.151788503F, 0.15295F,
    0.171338499F, 0.0632385F, 0.0632385F, 0.0632385F, 0.100061499F, 0.111527F,
    0.1242F, 0.125361502F, 0.127638504F, 0.129961506F, 0.13455F, 0.131111503F,
    0.144911498F, 0.157538503F, 0.1633F, 0.165611506F, 0.166738495F, 0.1886F,
    0.116127F, 0.116127F, 0.116161503F, 0.150661498F, 0.162138507F, 0.174811497F,
    0.174811497F, 0.177088499F, 0.179411501F, 0.184F, 0.187438503F, 0.164461493F,
    0.200111493F, 0.211588502F, 0.2139F, 0.215061501F, 0.251838505F, 0.146027F,
    0.146027F, 0.1471885F, 0.180561498F, 0.190888494F, 0.20355F, 0.20355F,
    0.205838501F, 0.20815F, 0.21275F, 0.216188505F, 0.221938506F, 0.24725F,
    0.251838505F, 0.241488501F, 0.24265F, 0.28866151F, 0.185127F, 0.185127F,
    0.185161501F, 0.21735F, 0.2277F, 0.2392115F, 0.240361497F, 0.241488501F,
    0.243811503F, 0.2484F, 0.251838505F, 0.2576F, 0.26795F, 0.289811492F,
    0.308211505F, 0.305888504F, 0.333511502F, 0.2231F, 0.2231F, 0.2231F,
    0.254161507F, 0.264511496F, 0.274861515F, 0.275988489F, 0.2783F,
    0.279461503F, 0.284061491F, 0.2875F, 0.2921F, 0.303611487F, 0.308211505F,
    0.310488492F, 0.328911513F, 0.378361493F, 0.348427F, 0.348427F, 0.348461509F,
    0.37488851F, 0.384111494F, 0.393311501F, 0.394438505F, 0.395588487F,
    0.39675F, 0.400188506F, 0.403661489F, 0.408261508F, 0.417461514F, 0.42205F,
    0.42433849F, 0.42433849F, 0.509438515F, 0.4761F, 0.4761F, 0.477261513F,
    0.50025F, 0.507161498F, 0.5152F, 0.5152F, 0.517511487F, 0.518638492F,
    0.52095F, 0.52323848F, 0.527861476F, 0.53475F, 0.538188517F, 0.5405F,
    0.5405F, 0.5405F, 0.680777F, 0.680777F, 0.681938529F, 0.698038518F,
    0.702638507F, 0.7084F, 0.7084F, 0.70955F, 0.710711479F, 0.713F, 0.71415F,
    0.717588484F, 0.722188473F, 0.7245F, 0.726788521F, 0.726788521F,
    0.726788521F, 0.7981F, 0.7981F, 0.79926151F, 0.810738504F, 0.814211488F,
    0.818811476F, 0.818811476F, 0.819961488F, 0.821088493F, 0.82225F, 0.8234F,
    0.825688481F, 0.829161525F, 0.831438482F, 0.8326F, 0.8326F, 0.8326F,
    0.915388525F, 0.915388525F, 0.91655F, 0.924588501F, 0.9269F, 0.929211497F,
    0.929211497F, 0.930338502F, 0.930338502F, 0.9315F, 0.93265F, 0.933811486F,
    0.9361F, 0.93725F, 0.938411474F, 0.938411474F, 0.938411474F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S688>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Power[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0112F, 0.0112F, 0.057386F, 0.0728F, 0.0896F,
    0.091F, 0.093786F, 0.0966F, 0.1022F, 0.1078F, 0.1148F, 0.131586F, 0.1386F,
    0.142786F, 0.142786F, 0.142786F, 0.142786F, 0.020972F, 0.022386F, 0.0672F,
    0.082586F, 0.098014F, 0.098014F, 0.103614F, 0.105014F, 0.111986F, 0.116214F,
    0.124586F, 0.140014F, 0.147014F, 0.1512F, 0.152614F, 0.1638F, 0.1638F,
    0.039172F, 0.040586F, 0.0854F, 0.099414F, 0.116214F, 0.117614F, 0.106386F,
    0.123214F, 0.128814F, 0.134414F, 0.141414F, 0.1568F, 0.1638F, 0.168F,
    0.1694F, 0.1862F, 0.1862F, 0.058786F, 0.058786F, 0.103614F, 0.117614F,
    0.133F, 0.134414F, 0.137186F, 0.140014F, 0.1456F, 0.1512F, 0.158214F, 0.175F,
    0.1806F, 0.184786F, 0.1862F, 0.208586F, 0.208586F, 0.076986F, 0.076986F,
    0.121814F, 0.135772F, 0.1512F, 0.152614F, 0.155386F, 0.158214F, 0.1638F,
    0.159614F, 0.176414F, 0.191786F, 0.1988F, 0.201614F, 0.202986F, 0.2296F,
    0.2296F, 0.141372F, 0.141414F, 0.183414F, 0.197386F, 0.212814F, 0.212814F,
    0.215586F, 0.218414F, 0.224F, 0.228186F, 0.200214F, 0.243614F, 0.257586F,
    0.2604F, 0.261814F, 0.306586F, 0.306586F, 0.177772F, 0.179186F, 0.219814F,
    0.232386F, 0.2478F, 0.2478F, 0.250586F, 0.2534F, 0.259F, 0.263186F,
    0.270186F, 0.301F, 0.306586F, 0.293986F, 0.2954F, 0.351414F, 0.351414F,
    0.225372F, 0.225414F, 0.2646F, 0.2772F, 0.291214F, 0.292614F, 0.293986F,
    0.296814F, 0.3024F, 0.306586F, 0.3136F, 0.3262F, 0.352814F, 0.375214F,
    0.372386F, 0.406014F, 0.406014F, 0.3726F, 0.373509F, 0.3915F, 0.396909F,
    0.4032F, 0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F,
    0.4185F, 0.421191F, 0.423F, 0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F,
    0.3915F, 0.396909F, 0.4032F, 0.4032F, 0.405009F, 0.405891F, 0.4077F,
    0.409491F, 0.413109F, 0.4185F, 0.421191F, 0.423F, 0.423F, 0.423F, 0.423F,
    0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F, 0.4032F, 0.405009F,
    0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F, 0.421191F, 0.423F, 0.423F,
    0.423F, 0.423F, 0.532782F, 0.533691F, 0.546291F, 0.549891F, 0.5544F, 0.5544F,
    0.5553F, 0.556209F, 0.558F, 0.5589F, 0.561591F, 0.565191F, 0.567F, 0.568791F,
    0.568791F, 0.568791F, 0.568791F, 0.6246F, 0.625509F, 0.634491F, 0.637209F,
    0.640809F, 0.640809F, 0.641709F, 0.642591F, 0.6435F, 0.6444F, 0.646191F,
    0.648909F, 0.650691F, 0.6516F, 0.6516F, 0.6516F, 0.6516F, 0.716391F, 0.7173F,
    0.723591F, 0.7254F, 0.727209F, 0.727209F, 0.728091F, 0.728091F, 0.729F,
    0.7299F, 0.730809F, 0.7326F, 0.7335F, 0.734409F, 0.734409F, 0.734409F,
    0.734409F, 0.808182F, 0.809091F, 0.811809F, 0.812718F, 0.813591F, 0.813591F,
    0.8145F, 0.8145F, 0.8145F, 0.815409F, 0.815409F, 0.816309F, 0.817191F,
    0.817191F, 0.817191F, 0.8307F, 0.8307F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S689>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Range[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.008F, 0.008F, 0.008F, 0.04099F, 0.052F, 0.064F,
    0.065F, 0.06699F, 0.069F, 0.073F, 0.077F, 0.082F, 0.09399F, 0.099F, 0.10199F,
    0.10199F, 0.10199F, 0.01498F, 0.01498F, 0.01599F, 0.048F, 0.05899F, 0.07001F,
    0.07001F, 0.07401F, 0.07501F, 0.07999F, 0.08301F, 0.08899F, 0.10001F,
    0.10501F, 0.108F, 0.10901F, 0.117F, 0.02798F, 0.02798F, 0.02899F, 0.061F,
    0.07101F, 0.08301F, 0.08401F, 0.07599F, 0.08801F, 0.09201F, 0.09601F,
    0.10101F, 0.112F, 0.117F, 0.12F, 0.121F, 0.133F, 0.04199F, 0.04199F,
    0.04199F, 0.07401F, 0.08401F, 0.095F, 0.09601F, 0.09799F, 0.10001F, 0.104F,
    0.108F, 0.11301F, 0.125F, 0.129F, 0.13199F, 0.133F, 0.14899F, 0.05499F,
    0.05499F, 0.05499F, 0.08701F, 0.09698F, 0.108F, 0.10901F, 0.11099F, 0.11301F,
    0.117F, 0.11401F, 0.12601F, 0.13699F, 0.142F, 0.14401F, 0.14499F, 0.164F,
    0.10098F, 0.10098F, 0.10101F, 0.13101F, 0.14099F, 0.15201F, 0.15201F,
    0.15399F, 0.15601F, 0.16F, 0.16299F, 0.14301F, 0.17401F, 0.18399F, 0.186F,
    0.18701F, 0.21899F, 0.12698F, 0.12698F, 0.12799F, 0.15701F, 0.16599F, 0.177F,
    0.177F, 0.17899F, 0.181F, 0.185F, 0.18799F, 0.19299F, 0.215F, 0.21899F,
    0.20999F, 0.211F, 0.25101F, 0.16098F, 0.16098F, 0.16101F, 0.189F, 0.198F,
    0.20801F, 0.20901F, 0.20999F, 0.21201F, 0.216F, 0.21899F, 0.224F, 0.233F,
    0.25201F, 0.26801F, 0.26599F, 0.29001F, 0.194F, 0.194F, 0.194F, 0.22101F,
    0.23001F, 0.23901F, 0.23999F, 0.242F, 0.24301F, 0.24701F, 0.25F, 0.254F,
    0.26401F, 0.26801F, 0.26999F, 0.28601F, 0.32901F, 0.30298F, 0.30298F,
    0.30301F, 0.32599F, 0.33401F, 0.34201F, 0.34299F, 0.34399F, 0.345F, 0.34799F,
    0.35101F, 0.35501F, 0.36301F, 0.367F, 0.36899F, 0.36899F, 0.44299F, 0.414F,
    0.414F, 0.41501F, 0.435F, 0.44101F, 0.448F, 0.448F, 0.45001F, 0.45099F,
    0.453F, 0.45499F, 0.45901F, 0.465F, 0.46799F, 0.47F, 0.47F, 0.47F, 0.59198F,
    0.59198F, 0.59299F, 0.60699F, 0.61099F, 0.616F, 0.616F, 0.617F, 0.61801F,
    0.62F, 0.621F, 0.62399F, 0.62799F, 0.63F, 0.63199F, 0.63199F, 0.63199F,
    0.694F, 0.694F, 0.69501F, 0.70499F, 0.70801F, 0.71201F, 0.71201F, 0.71301F,
    0.71399F, 0.715F, 0.716F, 0.71799F, 0.72101F, 0.72299F, 0.724F, 0.724F,
    0.724F, 0.79599F, 0.79599F, 0.797F, 0.80399F, 0.806F, 0.80801F, 0.80801F,
    0.80899F, 0.80899F, 0.81F, 0.811F, 0.81201F, 0.814F, 0.815F, 0.81601F,
    0.81601F, 0.81601F, 0.89798F, 0.89798F, 0.89899F, 0.90201F, 0.90302F,
    0.90399F, 0.90399F, 0.905F, 0.905F, 0.905F, 0.90601F, 0.90601F, 0.90701F,
    0.90799F, 0.90799F, 0.90799F, 0.923F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S690>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Rock[272]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0112F, 0.0112F, 0.057386F, 0.0728F, 0.0896F, 0.091F,
    0.093786F, 0.0966F, 0.1022F, 0.1078F, 0.1148F, 0.131586F, 0.1386F, 0.142786F,
    0.142786F, 0.142786F, 0.020972F, 0.022386F, 0.0672F, 0.082586F, 0.098014F,
    0.098014F, 0.103614F, 0.105014F, 0.111986F, 0.116214F, 0.124586F, 0.140014F,
    0.147014F, 0.1512F, 0.152614F, 0.1638F, 0.039172F, 0.040586F, 0.0854F,
    0.099414F, 0.116214F, 0.117614F, 0.106386F, 0.123214F, 0.128814F, 0.134414F,
    0.141414F, 0.1568F, 0.1638F, 0.168F, 0.1694F, 0.1862F, 0.058786F, 0.058786F,
    0.103614F, 0.117614F, 0.133F, 0.134414F, 0.137186F, 0.140014F, 0.1456F,
    0.1512F, 0.158214F, 0.175F, 0.1806F, 0.184786F, 0.1862F, 0.208586F,
    0.076986F, 0.076986F, 0.121814F, 0.135772F, 0.1512F, 0.152614F, 0.155386F,
    0.158214F, 0.1638F, 0.159614F, 0.176414F, 0.191786F, 0.1988F, 0.201614F,
    0.202986F, 0.2296F, 0.141372F, 0.141414F, 0.183414F, 0.197386F, 0.212814F,
    0.212814F, 0.215586F, 0.218414F, 0.224F, 0.228186F, 0.200214F, 0.243614F,
    0.257586F, 0.2604F, 0.261814F, 0.306586F, 0.177772F, 0.179186F, 0.219814F,
    0.232386F, 0.2478F, 0.2478F, 0.250586F, 0.2534F, 0.259F, 0.263186F,
    0.270186F, 0.301F, 0.306586F, 0.293986F, 0.2954F, 0.351414F, 0.225372F,
    0.225414F, 0.2646F, 0.2772F, 0.291214F, 0.292614F, 0.293986F, 0.296814F,
    0.3024F, 0.306586F, 0.3136F, 0.3262F, 0.352814F, 0.375214F, 0.372386F,
    0.406014F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F, 0.4032F,
    0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F, 0.421191F,
    0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F,
    0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F,
    0.421191F, 0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F,
    0.4032F, 0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F,
    0.4185F, 0.421191F, 0.423F, 0.423F, 0.423F, 0.532782F, 0.533691F, 0.546291F,
    0.549891F, 0.5544F, 0.5544F, 0.5553F, 0.556209F, 0.558F, 0.5589F, 0.561591F,
    0.565191F, 0.567F, 0.568791F, 0.568791F, 0.568791F, 0.6246F, 0.625509F,
    0.634491F, 0.637209F, 0.640809F, 0.640809F, 0.641709F, 0.642591F, 0.6435F,
    0.6444F, 0.646191F, 0.648909F, 0.650691F, 0.6516F, 0.6516F, 0.6516F,
    0.716391F, 0.7173F, 0.723591F, 0.7254F, 0.727209F, 0.727209F, 0.728091F,
    0.728091F, 0.729F, 0.7299F, 0.730809F, 0.7326F, 0.7335F, 0.734409F,
    0.734409F, 0.734409F, 0.808182F, 0.809091F, 0.811809F, 0.812718F, 0.813591F,
    0.813591F, 0.8145F, 0.8145F, 0.8145F, 0.815409F, 0.815409F, 0.816309F,
    0.817191F, 0.817191F, 0.817191F, 0.8307F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S691>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Snow[272]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0112F, 0.0112F, 0.057386F, 0.0728F, 0.0896F, 0.091F,
    0.093786F, 0.0966F, 0.1022F, 0.1078F, 0.1148F, 0.131586F, 0.1386F, 0.142786F,
    0.142786F, 0.142786F, 0.020972F, 0.022386F, 0.0672F, 0.082586F, 0.098014F,
    0.098014F, 0.103614F, 0.105014F, 0.111986F, 0.116214F, 0.124586F, 0.140014F,
    0.147014F, 0.1512F, 0.152614F, 0.1638F, 0.039172F, 0.040586F, 0.0854F,
    0.099414F, 0.116214F, 0.117614F, 0.106386F, 0.123214F, 0.128814F, 0.134414F,
    0.141414F, 0.1568F, 0.1638F, 0.168F, 0.1694F, 0.1862F, 0.058786F, 0.058786F,
    0.103614F, 0.117614F, 0.133F, 0.134414F, 0.137186F, 0.140014F, 0.1456F,
    0.1512F, 0.158214F, 0.175F, 0.1806F, 0.184786F, 0.1862F, 0.208586F,
    0.076986F, 0.076986F, 0.121814F, 0.135772F, 0.1512F, 0.152614F, 0.155386F,
    0.158214F, 0.1638F, 0.159614F, 0.176414F, 0.191786F, 0.1988F, 0.201614F,
    0.202986F, 0.2296F, 0.141372F, 0.141414F, 0.183414F, 0.197386F, 0.212814F,
    0.212814F, 0.215586F, 0.218414F, 0.224F, 0.228186F, 0.200214F, 0.243614F,
    0.257586F, 0.2604F, 0.261814F, 0.306586F, 0.177772F, 0.179186F, 0.219814F,
    0.232386F, 0.2478F, 0.2478F, 0.250586F, 0.2534F, 0.259F, 0.263186F,
    0.270186F, 0.301F, 0.306586F, 0.293986F, 0.2954F, 0.351414F, 0.225372F,
    0.225414F, 0.2646F, 0.2772F, 0.291214F, 0.292614F, 0.293986F, 0.296814F,
    0.3024F, 0.306586F, 0.3136F, 0.3262F, 0.352814F, 0.375214F, 0.372386F,
    0.406014F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F, 0.4032F,
    0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F, 0.421191F,
    0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F,
    0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F,
    0.421191F, 0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F,
    0.4032F, 0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F,
    0.4185F, 0.421191F, 0.423F, 0.423F, 0.423F, 0.532782F, 0.533691F, 0.546291F,
    0.549891F, 0.5544F, 0.5544F, 0.5553F, 0.556209F, 0.558F, 0.5589F, 0.561591F,
    0.565191F, 0.567F, 0.568791F, 0.568791F, 0.568791F, 0.6246F, 0.625509F,
    0.634491F, 0.637209F, 0.640809F, 0.640809F, 0.641709F, 0.642591F, 0.6435F,
    0.6444F, 0.646191F, 0.648909F, 0.650691F, 0.6516F, 0.6516F, 0.6516F,
    0.716391F, 0.7173F, 0.723591F, 0.7254F, 0.727209F, 0.727209F, 0.728091F,
    0.728091F, 0.729F, 0.7299F, 0.730809F, 0.7326F, 0.7335F, 0.734409F,
    0.734409F, 0.734409F, 0.808182F, 0.809091F, 0.811809F, 0.812718F, 0.813591F,
    0.813591F, 0.8145F, 0.8145F, 0.8145F, 0.815409F, 0.815409F, 0.816309F,
    0.817191F, 0.817191F, 0.817191F, 0.8307F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S692>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Sport[272]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0112F, 0.0112F, 0.057386F, 0.0728F, 0.0896F, 0.091F,
    0.093786F, 0.0966F, 0.1022F, 0.1078F, 0.1148F, 0.131586F, 0.1386F, 0.142786F,
    0.142786F, 0.142786F, 0.020972F, 0.022386F, 0.0672F, 0.082586F, 0.098014F,
    0.098014F, 0.103614F, 0.105014F, 0.111986F, 0.116214F, 0.124586F, 0.140014F,
    0.147014F, 0.1512F, 0.152614F, 0.1638F, 0.039172F, 0.040586F, 0.0854F,
    0.099414F, 0.116214F, 0.117614F, 0.106386F, 0.123214F, 0.128814F, 0.134414F,
    0.141414F, 0.1568F, 0.1638F, 0.168F, 0.1694F, 0.1862F, 0.058786F, 0.058786F,
    0.103614F, 0.117614F, 0.133F, 0.134414F, 0.137186F, 0.140014F, 0.1456F,
    0.1512F, 0.158214F, 0.175F, 0.1806F, 0.184786F, 0.1862F, 0.208586F,
    0.076986F, 0.076986F, 0.121814F, 0.135772F, 0.1512F, 0.152614F, 0.155386F,
    0.158214F, 0.1638F, 0.159614F, 0.176414F, 0.191786F, 0.1988F, 0.201614F,
    0.202986F, 0.2296F, 0.141372F, 0.141414F, 0.183414F, 0.197386F, 0.212814F,
    0.212814F, 0.215586F, 0.218414F, 0.224F, 0.228186F, 0.200214F, 0.243614F,
    0.257586F, 0.2604F, 0.261814F, 0.306586F, 0.177772F, 0.179186F, 0.219814F,
    0.232386F, 0.2478F, 0.2478F, 0.250586F, 0.2534F, 0.259F, 0.263186F,
    0.270186F, 0.301F, 0.306586F, 0.293986F, 0.2954F, 0.351414F, 0.225372F,
    0.225414F, 0.2646F, 0.2772F, 0.291214F, 0.292614F, 0.293986F, 0.296814F,
    0.3024F, 0.306586F, 0.3136F, 0.3262F, 0.352814F, 0.375214F, 0.372386F,
    0.406014F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F, 0.4032F,
    0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F, 0.421191F,
    0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F,
    0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F,
    0.421191F, 0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F,
    0.4032F, 0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F,
    0.4185F, 0.421191F, 0.423F, 0.423F, 0.423F, 0.532782F, 0.533691F, 0.546291F,
    0.549891F, 0.5544F, 0.5544F, 0.5553F, 0.556209F, 0.558F, 0.5589F, 0.561591F,
    0.565191F, 0.567F, 0.568791F, 0.568791F, 0.568791F, 0.6246F, 0.625509F,
    0.634491F, 0.637209F, 0.640809F, 0.640809F, 0.641709F, 0.642591F, 0.6435F,
    0.6444F, 0.646191F, 0.648909F, 0.650691F, 0.6516F, 0.6516F, 0.6516F,
    0.716391F, 0.7173F, 0.723591F, 0.7254F, 0.727209F, 0.727209F, 0.728091F,
    0.728091F, 0.729F, 0.7299F, 0.730809F, 0.7326F, 0.7335F, 0.734409F,
    0.734409F, 0.734409F, 0.808182F, 0.809091F, 0.811809F, 0.812718F, 0.813591F,
    0.813591F, 0.8145F, 0.8145F, 0.8145F, 0.815409F, 0.815409F, 0.816309F,
    0.817191F, 0.817191F, 0.817191F, 0.8307F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S693>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_K_PtcPdlPctTrqWhl_Sport_Boost[272] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.01344F, 0.01344F, 0.0688632F, 0.08736F, 0.10752F,
    0.1092F, 0.112543203F, 0.115920007F, 0.12264F, 0.12936F, 0.13776F,
    0.157903194F, 0.166320011F, 0.171343192F, 0.171343192F, 0.171343192F,
    0.0251664F, 0.0268631987F, 0.0806399956F, 0.0991032F, 0.117616795F,
    0.117616795F, 0.124336801F, 0.126016796F, 0.134383202F, 0.139456794F,
    0.149503201F, 0.168016791F, 0.176416814F, 0.18144F, 0.183136791F, 0.19656F,
    0.0470064022F, 0.0487031974F, 0.10248F, 0.119296797F, 0.139456794F,
    0.141136795F, 0.127663195F, 0.147856802F, 0.154576793F, 0.1612968F,
    0.169696808F, 0.18816F, 0.19656F, 0.2016F, 0.20328F, 0.223439991F,
    0.0705432F, 0.0705432F, 0.124336801F, 0.141136795F, 0.1596F, 0.1612968F,
    0.164623201F, 0.168016791F, 0.17472F, 0.18144F, 0.189856797F, 0.21F,
    0.21672F, 0.221743211F, 0.223439991F, 0.250303209F, 0.0923832F, 0.0923832F,
    0.1461768F, 0.162926406F, 0.18144F, 0.183136791F, 0.186463207F, 0.189856797F,
    0.19656F, 0.191536799F, 0.211696804F, 0.230143204F, 0.238559991F,
    0.241936803F, 0.243583202F, 0.27552F, 0.169646397F, 0.169696808F,
    0.220096797F, 0.236863196F, 0.255376816F, 0.255376816F, 0.258703202F,
    0.262096792F, 0.26880002F, 0.273823202F, 0.240256801F, 0.292336792F,
    0.309103191F, 0.31248F, 0.314176798F, 0.367903203F, 0.213326395F,
    0.215023205F, 0.263776809F, 0.278863192F, 0.29736F, 0.29736F, 0.300703198F,
    0.30408F, 0.310800016F, 0.315823197F, 0.32422322F, 0.3612F, 0.367903203F,
    0.352783203F, 0.35448F, 0.421696782F, 0.27044639F, 0.270496786F,
    0.317520022F, 0.332640022F, 0.349456787F, 0.351136804F, 0.352783203F,
    0.356176794F, 0.36288F, 0.367903203F, 0.37632F, 0.39144F, 0.423376799F,
    0.450256824F, 0.446863204F, 0.4872168F, 0.447119981F, 0.448210776F, 0.4698F,
    0.476290792F, 0.48384F, 0.48384F, 0.48601079F, 0.48706919F, 0.48924F,
    0.491389215F, 0.495730817F, 0.5022F, 0.505429208F, 0.5076F, 0.5076F, 0.5076F,
    0.447119981F, 0.448210776F, 0.4698F, 0.476290792F, 0.48384F, 0.48384F,
    0.48601079F, 0.48706919F, 0.48924F, 0.491389215F, 0.495730817F, 0.5022F,
    0.505429208F, 0.5076F, 0.5076F, 0.5076F, 0.447119981F, 0.448210776F, 0.4698F,
    0.476290792F, 0.48384F, 0.48384F, 0.48601079F, 0.48706919F, 0.48924F,
    0.491389215F, 0.495730817F, 0.5022F, 0.505429208F, 0.5076F, 0.5076F, 0.5076F,
    0.639338434F, 0.640429199F, 0.655549169F, 0.659869194F, 0.665280044F,
    0.665280044F, 0.66636F, 0.667450845F, 0.6696F, 0.67068F, 0.673909247F,
    0.678229153F, 0.680399954F, 0.682549179F, 0.682549179F, 0.682549179F,
    0.74952F, 0.750610828F, 0.761389256F, 0.764650822F, 0.768970788F,
    0.768970788F, 0.770050824F, 0.771109223F, 0.7722F, 0.77328F, 0.775429189F,
    0.778690755F, 0.780829191F, 0.78192F, 0.78192F, 0.78192F, 0.859669209F,
    0.86076F, 0.868309259F, 0.870479941F, 0.872650743F, 0.872650743F,
    0.873709202F, 0.873709202F, 0.874799967F, 0.87588F, 0.876970768F, 0.87912F,
    0.8802F, 0.881290793F, 0.881290793F, 0.881290793F, 0.969818413F,
    0.970909178F, 0.974170804F, 0.975261569F, 0.97630918F, 0.97630918F,
    0.977399945F, 0.977399945F, 0.977399945F, 0.978490829F, 0.978490829F,
    0.979570746F, 0.980629206F, 0.980629206F, 0.980629206F, 0.99684F, 1.2F, 1.2F,
    1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F, 1.2F,
    1.2F
} ;                                    /* Referenced by: '<S694>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Tow[272] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0112F, 0.0112F, 0.057386F, 0.0728F, 0.0896F, 0.091F,
    0.093786F, 0.0966F, 0.1022F, 0.1078F, 0.1148F, 0.131586F, 0.1386F, 0.142786F,
    0.142786F, 0.142786F, 0.020972F, 0.022386F, 0.0672F, 0.082586F, 0.098014F,
    0.098014F, 0.103614F, 0.105014F, 0.111986F, 0.116214F, 0.124586F, 0.140014F,
    0.147014F, 0.1512F, 0.152614F, 0.1638F, 0.039172F, 0.040586F, 0.0854F,
    0.099414F, 0.116214F, 0.117614F, 0.106386F, 0.123214F, 0.128814F, 0.134414F,
    0.141414F, 0.1568F, 0.1638F, 0.168F, 0.1694F, 0.1862F, 0.058786F, 0.058786F,
    0.103614F, 0.117614F, 0.133F, 0.134414F, 0.137186F, 0.140014F, 0.1456F,
    0.1512F, 0.158214F, 0.175F, 0.1806F, 0.184786F, 0.1862F, 0.208586F,
    0.076986F, 0.076986F, 0.121814F, 0.135772F, 0.1512F, 0.152614F, 0.155386F,
    0.158214F, 0.1638F, 0.159614F, 0.176414F, 0.191786F, 0.1988F, 0.201614F,
    0.202986F, 0.2296F, 0.141372F, 0.141414F, 0.183414F, 0.197386F, 0.212814F,
    0.212814F, 0.215586F, 0.218414F, 0.224F, 0.228186F, 0.200214F, 0.243614F,
    0.257586F, 0.2604F, 0.261814F, 0.306586F, 0.177772F, 0.179186F, 0.219814F,
    0.232386F, 0.2478F, 0.2478F, 0.250586F, 0.2534F, 0.259F, 0.263186F,
    0.270186F, 0.301F, 0.306586F, 0.293986F, 0.2954F, 0.351414F, 0.225372F,
    0.225414F, 0.2646F, 0.2772F, 0.291214F, 0.292614F, 0.293986F, 0.296814F,
    0.3024F, 0.306586F, 0.3136F, 0.3262F, 0.352814F, 0.375214F, 0.372386F,
    0.406014F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F, 0.4032F,
    0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F, 0.421191F,
    0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F, 0.4032F,
    0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F, 0.4185F,
    0.421191F, 0.423F, 0.423F, 0.423F, 0.3726F, 0.373509F, 0.3915F, 0.396909F,
    0.4032F, 0.4032F, 0.405009F, 0.405891F, 0.4077F, 0.409491F, 0.413109F,
    0.4185F, 0.421191F, 0.423F, 0.423F, 0.423F, 0.532782F, 0.533691F, 0.546291F,
    0.549891F, 0.5544F, 0.5544F, 0.5553F, 0.556209F, 0.558F, 0.5589F, 0.561591F,
    0.565191F, 0.567F, 0.568791F, 0.568791F, 0.568791F, 0.6246F, 0.625509F,
    0.634491F, 0.637209F, 0.640809F, 0.640809F, 0.641709F, 0.642591F, 0.6435F,
    0.6444F, 0.646191F, 0.648909F, 0.650691F, 0.6516F, 0.6516F, 0.6516F,
    0.716391F, 0.7173F, 0.723591F, 0.7254F, 0.727209F, 0.727209F, 0.728091F,
    0.728091F, 0.729F, 0.7299F, 0.730809F, 0.7326F, 0.7335F, 0.734409F,
    0.734409F, 0.734409F, 0.808182F, 0.809091F, 0.811809F, 0.812718F, 0.813591F,
    0.813591F, 0.8145F, 0.8145F, 0.8145F, 0.815409F, 0.815409F, 0.816309F,
    0.817191F, 0.817191F, 0.817191F, 0.8307F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S695>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Track[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0092F, 0.0092F, 0.0092F, 0.0471385F, 0.0598F,
    0.0736F, 0.07475F, 0.0770385F, 0.07935F, 0.08395F, 0.08855F, 0.0943F,
    0.108088501F, 0.11385F, 0.1172885F, 0.1172885F, 0.1172885F, 0.017227F,
    0.017227F, 0.0183885F, 0.0552F, 0.0678385F, 0.0805115F, 0.0805115F,
    0.0851115F, 0.0862615F, 0.0919885F, 0.0954615F, 0.1023385F, 0.115011498F,
    0.120761499F, 0.1242F, 0.125361502F, 0.13455F, 0.032177F, 0.032177F,
    0.0333385F, 0.07015F, 0.0816615F, 0.0954615F, 0.0966115F, 0.0873885F,
    0.101211503F, 0.105811499F, 0.110411502F, 0.116161503F, 0.1288F, 0.13455F,
    0.138F, 0.13915F, 0.15295F, 0.0482885F, 0.0482885F, 0.0482885F, 0.0851115F,
    0.0966115F, 0.10925F, 0.110411502F, 0.112688497F, 0.115011498F, 0.1196F,
    0.1242F, 0.129961506F, 0.14375F, 0.14835F, 0.151788503F, 0.15295F,
    0.171338499F, 0.0632385F, 0.0632385F, 0.0632385F, 0.100061499F, 0.111527F,
    0.1242F, 0.125361502F, 0.127638504F, 0.129961506F, 0.13455F, 0.131111503F,
    0.144911498F, 0.157538503F, 0.1633F, 0.165611506F, 0.166738495F, 0.1886F,
    0.116127F, 0.116127F, 0.116161503F, 0.150661498F, 0.162138507F, 0.174811497F,
    0.174811497F, 0.177088499F, 0.179411501F, 0.184F, 0.187438503F, 0.164461493F,
    0.200111493F, 0.211588502F, 0.2139F, 0.215061501F, 0.251838505F, 0.146027F,
    0.146027F, 0.1471885F, 0.180561498F, 0.190888494F, 0.20355F, 0.20355F,
    0.205838501F, 0.20815F, 0.21275F, 0.216188505F, 0.221938506F, 0.24725F,
    0.251838505F, 0.241488501F, 0.24265F, 0.28866151F, 0.185127F, 0.185127F,
    0.185161501F, 0.21735F, 0.2277F, 0.2392115F, 0.240361497F, 0.241488501F,
    0.243811503F, 0.2484F, 0.251838505F, 0.2576F, 0.26795F, 0.289811492F,
    0.308211505F, 0.305888504F, 0.333511502F, 0.2231F, 0.2231F, 0.2231F,
    0.254161507F, 0.264511496F, 0.274861515F, 0.275988489F, 0.2783F,
    0.279461503F, 0.284061491F, 0.2875F, 0.2921F, 0.303611487F, 0.308211505F,
    0.310488492F, 0.328911513F, 0.378361493F, 0.348427F, 0.348427F, 0.348461509F,
    0.37488851F, 0.384111494F, 0.393311501F, 0.394438505F, 0.395588487F,
    0.39675F, 0.400188506F, 0.403661489F, 0.408261508F, 0.417461514F, 0.42205F,
    0.42433849F, 0.42433849F, 0.509438515F, 0.4761F, 0.4761F, 0.477261513F,
    0.50025F, 0.507161498F, 0.5152F, 0.5152F, 0.517511487F, 0.518638492F,
    0.52095F, 0.52323848F, 0.527861476F, 0.53475F, 0.538188517F, 0.5405F,
    0.5405F, 0.5405F, 0.680777F, 0.680777F, 0.681938529F, 0.698038518F,
    0.702638507F, 0.7084F, 0.7084F, 0.70955F, 0.710711479F, 0.713F, 0.71415F,
    0.717588484F, 0.722188473F, 0.7245F, 0.726788521F, 0.726788521F,
    0.726788521F, 0.7981F, 0.7981F, 0.79926151F, 0.810738504F, 0.814211488F,
    0.818811476F, 0.818811476F, 0.819961488F, 0.821088493F, 0.82225F, 0.8234F,
    0.825688481F, 0.829161525F, 0.831438482F, 0.8326F, 0.8326F, 0.8326F,
    0.915388525F, 0.915388525F, 0.91655F, 0.924588501F, 0.9269F, 0.929211497F,
    0.929211497F, 0.930338502F, 0.930338502F, 0.9315F, 0.93265F, 0.933811486F,
    0.9361F, 0.93725F, 0.938411474F, 0.938411474F, 0.938411474F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S696>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_K_PtcPdlPctTrqWhl_Track_Boost[289] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0101200007F, 0.0101200007F, 0.0101200007F,
    0.0518523529F, 0.06578F, 0.0809600055F, 0.0822249949F, 0.0847423449F,
    0.0872850046F, 0.092345F, 0.097405F, 0.10373F, 0.118897349F, 0.125234991F,
    0.129017353F, 0.129017353F, 0.129017353F, 0.0189496987F, 0.0189496987F,
    0.0202273503F, 0.06072F, 0.074622348F, 0.0885626525F, 0.0885626525F,
    0.0936226472F, 0.0948876515F, 0.101187348F, 0.105007656F, 0.11257235F,
    0.126512647F, 0.132837653F, 0.13662F, 0.137897655F, 0.148005009F,
    0.0353947021F, 0.0353947021F, 0.0366723463F, 0.077165F, 0.0898276493F,
    0.105007656F, 0.106272653F, 0.0961273536F, 0.111332655F, 0.11639265F,
    0.121452652F, 0.127777651F, 0.14168F, 0.148005009F, 0.151799992F, 0.153065F,
    0.168245F, 0.0531173535F, 0.0531173535F, 0.0531173535F, 0.0936226472F,
    0.106272653F, 0.120175004F, 0.121452652F, 0.123957343F, 0.126512647F,
    0.13156F, 0.13662F, 0.142957658F, 0.158125F, 0.163185F, 0.166967347F,
    0.168245F, 0.188472345F, 0.0695623532F, 0.0695623532F, 0.0695623532F,
    0.110067651F, 0.122679703F, 0.13662F, 0.137897655F, 0.140402347F,
    0.142957658F, 0.148005009F, 0.144222647F, 0.159402654F, 0.173292354F,
    0.17963F, 0.182172656F, 0.183412343F, 0.20746F, 0.127739698F, 0.127739698F,
    0.127777651F, 0.165727645F, 0.178352356F, 0.192292646F, 0.192292646F,
    0.194797352F, 0.197352648F, 0.2024F, 0.206182361F, 0.180907637F, 0.22012265F,
    0.232747346F, 0.23529F, 0.236567646F, 0.277022362F, 0.160629705F,
    0.160629705F, 0.161907345F, 0.198617652F, 0.209977344F, 0.223905F, 0.223905F,
    0.226422355F, 0.228965F, 0.234025F, 0.237807363F, 0.244132355F, 0.271975F,
    0.277022362F, 0.265637338F, 0.266915F, 0.317527652F, 0.203639701F,
    0.203639701F, 0.203677654F, 0.239085F, 0.250469983F, 0.263132662F,
    0.264397651F, 0.265637338F, 0.268192649F, 0.27324F, 0.277022362F, 0.28336F,
    0.294745F, 0.318792641F, 0.33903265F, 0.336477339F, 0.366862655F,
    0.24541001F, 0.24541001F, 0.24541001F, 0.279577672F, 0.290962636F,
    0.30234766F, 0.303587347F, 0.30613F, 0.307407647F, 0.312467635F, 0.31625F,
    0.32131F, 0.333972633F, 0.33903265F, 0.341537356F, 0.361802667F,
    0.416197658F, 0.383269697F, 0.383269697F, 0.383307666F, 0.412377357F,
    0.422522634F, 0.432642639F, 0.433882356F, 0.435147345F, 0.436425F,
    0.440207362F, 0.444027632F, 0.44908765F, 0.459207654F, 0.464255F,
    0.466772348F, 0.466772348F, 0.560382366F, 0.52371F, 0.52371F, 0.524987638F,
    0.550274968F, 0.55787766F, 0.56672F, 0.56672F, 0.569262624F, 0.570502341F,
    0.573045F, 0.575562358F, 0.580647647F, 0.588225F, 0.592007399F, 0.59455F,
    0.59455F, 0.59455F, 0.748854697F, 0.748854697F, 0.750132382F, 0.767842352F,
    0.772902369F, 0.77924F, 0.77924F, 0.780505F, 0.781782627F, 0.7843F,
    0.785565F, 0.789347351F, 0.794407308F, 0.79695F, 0.799467385F, 0.799467385F,
    0.799467385F, 0.87791F, 0.87791F, 0.879187644F, 0.891812384F, 0.895632625F,
    0.900692642F, 0.900692642F, 0.901957631F, 0.903197348F, 0.904475033F,
    0.90574F, 0.908257306F, 0.912077665F, 0.914582312F, 0.91586F, 0.91586F,
    0.91586F, 1.00692737F, 1.00692737F, 1.00820494F, 1.01704741F, 1.01959F,
    1.02213264F, 1.02213264F, 1.02337241F, 1.02337241F, 1.02465F, 1.02591503F,
    1.02719259F, 1.02971F, 1.03097498F, 1.03225267F, 1.03225267F, 1.03225267F,
    1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F,
    1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F,
    1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F, 1.1F
} ;                                    /* Referenced by: '<S697>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_PtcPdlPctTrqWhl_Valet[289]
    =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0092F, 0.0092F, 0.0092F, 0.0471385F, 0.0598F,
    0.0736F, 0.07475F, 0.0770385F, 0.07935F, 0.08395F, 0.08855F, 0.0943F,
    0.108088501F, 0.11385F, 0.1172885F, 0.1172885F, 0.1172885F, 0.017227F,
    0.017227F, 0.0183885F, 0.0552F, 0.0678385F, 0.0805115F, 0.0805115F,
    0.0851115F, 0.0862615F, 0.0919885F, 0.0954615F, 0.1023385F, 0.115011498F,
    0.120761499F, 0.1242F, 0.125361502F, 0.13455F, 0.032177F, 0.032177F,
    0.0333385F, 0.07015F, 0.0816615F, 0.0954615F, 0.0966115F, 0.0873885F,
    0.101211503F, 0.105811499F, 0.110411502F, 0.116161503F, 0.1288F, 0.13455F,
    0.138F, 0.13915F, 0.15295F, 0.0482885F, 0.0482885F, 0.0482885F, 0.0851115F,
    0.0966115F, 0.10925F, 0.110411502F, 0.112688497F, 0.115011498F, 0.1196F,
    0.1242F, 0.129961506F, 0.14375F, 0.14835F, 0.151788503F, 0.15295F,
    0.171338499F, 0.0632385F, 0.0632385F, 0.0632385F, 0.100061499F, 0.111527F,
    0.1242F, 0.125361502F, 0.127638504F, 0.129961506F, 0.13455F, 0.131111503F,
    0.144911498F, 0.157538503F, 0.1633F, 0.165611506F, 0.166738495F, 0.1886F,
    0.116127F, 0.116127F, 0.116161503F, 0.150661498F, 0.162138507F, 0.174811497F,
    0.174811497F, 0.177088499F, 0.179411501F, 0.184F, 0.187438503F, 0.164461493F,
    0.200111493F, 0.211588502F, 0.2139F, 0.215061501F, 0.251838505F, 0.146027F,
    0.146027F, 0.1471885F, 0.180561498F, 0.190888494F, 0.20355F, 0.20355F,
    0.205838501F, 0.20815F, 0.21275F, 0.216188505F, 0.221938506F, 0.24725F,
    0.251838505F, 0.241488501F, 0.24265F, 0.28866151F, 0.185127F, 0.185127F,
    0.185161501F, 0.21735F, 0.2277F, 0.2392115F, 0.240361497F, 0.241488501F,
    0.243811503F, 0.2484F, 0.251838505F, 0.2576F, 0.26795F, 0.289811492F,
    0.308211505F, 0.305888504F, 0.333511502F, 0.2231F, 0.2231F, 0.2231F,
    0.254161507F, 0.264511496F, 0.274861515F, 0.275988489F, 0.2783F,
    0.279461503F, 0.284061491F, 0.2875F, 0.2921F, 0.303611487F, 0.308211505F,
    0.310488492F, 0.328911513F, 0.378361493F, 0.348427F, 0.348427F, 0.348461509F,
    0.37488851F, 0.384111494F, 0.393311501F, 0.394438505F, 0.395588487F,
    0.39675F, 0.400188506F, 0.403661489F, 0.408261508F, 0.417461514F, 0.42205F,
    0.42433849F, 0.42433849F, 0.509438515F, 0.4761F, 0.4761F, 0.477261513F,
    0.50025F, 0.507161498F, 0.5152F, 0.5152F, 0.517511487F, 0.518638492F,
    0.52095F, 0.52323848F, 0.527861476F, 0.53475F, 0.538188517F, 0.5405F,
    0.5405F, 0.5405F, 0.680777F, 0.680777F, 0.681938529F, 0.698038518F,
    0.702638507F, 0.7084F, 0.7084F, 0.70955F, 0.710711479F, 0.713F, 0.71415F,
    0.717588484F, 0.722188473F, 0.7245F, 0.726788521F, 0.726788521F,
    0.726788521F, 0.7981F, 0.7981F, 0.79926151F, 0.810738504F, 0.814211488F,
    0.818811476F, 0.818811476F, 0.819961488F, 0.821088493F, 0.82225F, 0.8234F,
    0.825688481F, 0.829161525F, 0.831438482F, 0.8326F, 0.8326F, 0.8326F,
    0.915388525F, 0.915388525F, 0.91655F, 0.924588501F, 0.9269F, 0.929211497F,
    0.929211497F, 0.930338502F, 0.930338502F, 0.9315F, 0.93265F, 0.933811486F,
    0.9361F, 0.93725F, 0.938411474F, 0.938411474F, 0.938411474F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F,
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S698>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_K_eCreepMult4RoadSlope[19] =
{
    0.0F, 0.0F, 0.1406F, 0.25F, 0.4492F, 0.6016F, 0.8516F, 0.8994F, 0.9688F,
    1.0F, 0.9688F, 0.8984F, 0.8516F, 0.6016F, 0.4492F, 0.25F, 0.1406F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S314>/Vector' */

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_AeCoast_MinTrqDTbl[8] =
{
    280.0F, 35.588F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S467>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC0Tbl[8] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC1Tbl[8] =
{
    400.0F, 50.84F, -400.76F, -430.0F, -525.0F, -740.08F, -750.08F, -650.84F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC1Tbl_OPD[8] =
{
    400.0F, 97.6128F, -769.459167F, -825.6F, -1008.0F, -1420.95361F,
    -1440.15356F, -1249.61279F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC2Tbl[8] =
{
    480.0F, 61.008F, -480.912F, -516.0F, -630.0F, -888.096F, -900.096F,
    -781.008F
} ;                                    /* Referenced by: '<S485>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC2Tbl_OPD[8] =
{
    400.0F, 97.6128F, -769.459167F, -825.6F, -1008.0F, -1420.95361F,
    -1440.15356F, -1249.61279F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC3Tbl[8] =
{
    560.0F, 71.176F, -561.064F, -602.0F, -735.0F, -1036.11206F, -1050.11206F,
    -911.176F
} ;                                    /* Referenced by: '<S487>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqAeC3Tbl_OPD[8] =
{
    450.0F, 113.881607F, -897.702454F, -963.2F, -1176.0F, -1657.7793F,
    -1680.17932F, -1457.88159F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqDTbl[8] =
{
    400.0F, 50.84F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S469>/Vector' */

#endif

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_MinTrqRTbl[9] =
{
    499.84F, 190.08F, -140.08F, -414.72F, -376.96F, -264.96F, -103.04F, 0.0F,
    0.0F
} ;                                    /* Referenced by: '<S452>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_OPDMinLDNormzPdlPct[11] =
{
    0.0F, -0.05F, -0.25F, -1.25F, -2.5F, -3.5F, -5.0F, -6.0F, -7.5F, -10.0F,
    -12.5F
} ;                                    /* Referenced by: '<S381>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_OPDMinLDStepPdlPctTrq[11]
    =
{
    0.0F, -110.0F, -220.0F, -330.0F, -440.0F, -550.0F, -660.0F, -770.0F, -880.0F,
    -990.0F, -1100.0F
} ;                                    /* Referenced by: '<S382>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_OPDMinLUNormzPdlPct[11] =
{
    0.0F, 0.05F, 0.25F, 1.25F, 2.5F, 3.5F, 5.0F, 6.0F, 7.5F, 10.0F, 12.5F
} ;                                    /* Referenced by: '<S387>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_OPDMinLUStepPdlPctTrq[11]
    =
{
    0.0F, 110.0F, 220.0F, 330.0F, 440.0F, 550.0F, 660.0F, 770.0F, 880.0F, 990.0F,
    1100.0F
} ;                                    /* Referenced by: '<S388>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_OPDMinTrqDTbl[9] =
{
    0.0F, 0.0F, -1000.1F, -986.4F, -919.4F, -849.1F, -762.1F, -639.3F, -525.9F
} ;                                    /* Referenced by:
                                        * '<S453>/Vector'
                                        * '<S489>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_OPDMinTrqRTbl[9] =
{
    -525.9F, -639.3F, -762.1F, -849.1F, -919.4F, -986.4F, -1000.1F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S454>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PdlTrqBias[9] =
{
    250.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F, 650.0F
} ;                                    /* Referenced by: '<S144>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PdlTrqBias_4Lo[9] =
{
    150.0F, 200.0F, 250.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F
} ;                                    /* Referenced by: '<S145>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PdlTrqBias_High[9] =
{
    250.0F, 300.0F, 350.0F, 400.0F, 450.0F, 500.0F, 550.0F, 600.0F, 650.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PdlTrqBias_Low[9] =
{
    125.0F, 150.0F, 175.0F, 200.0F, 225.0F, 250.0F, 275.0F, 300.0F, 325.0F
} ;                                    /* Referenced by: '<S147>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PdlTrqBias_Std[9] =
{
    187.5F, 225.0F, 262.5F, 300.0F, 337.5F, 375.0F, 412.5F, 450.0F, 487.5F
} ;                                    /* Referenced by: '<S148>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PtcPdlCcMinWhlTrq[8] =
{
    -500.0F, -500.0F, -500.0F, -500.0F, -500.0F, -500.0F, -500.0F, -500.0F
} ;                                    /* Referenced by: '<S343>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PtcPdlMaxWhlTrqGearRTbl
    [24] =
{
    2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F,
    2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F,
    1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_M_PtcPdlMaxWhlTrqTbl[64] =
{
    2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F,
    2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F,
    1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F,
    1650.0F, 1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F,
    1350.0F, 1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F,
    1000.0F, 450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F,
    450.0F, 50.0F, 2500.0F, 2200.0F, 1900.0F, 1650.0F, 1350.0F, 1000.0F, 450.0F,
    50.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_a_CstCtrllrAccMax_A[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_a_CstCtrllrAccMax_B[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_a_CstCtrllrAccMin_A[10] =
{
    -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F
} ;                                    /* Referenced by: '<S259>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_a_CstCtrllrAccMin_B[10] =
{
    -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F, -0.5F
} ;                                    /* Referenced by: '<S262>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_a_CstCtrllrAccTgt_A[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S260>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_a_CstCtrllrAccTgt_B[10] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S263>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_dPct_PtcPdlTrqRateLD[11] =
{
    -1.0F, -0.005F, -0.005F, -0.01F, -0.015F, -0.04F, -0.1F, -0.15F, -0.2F,
    -0.25F, -0.3F
} ;                                    /* Referenced by:
                                        * '<S586>/Vector'
                                        * '<S608>/Vector'
                                        * '<S656>/Vector'
                                        * '<S676>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_dPct_PtcPdlTrqRateLU[11] =
{
    1.0F, 0.005F, 0.005F, 0.01F, 0.015F, 0.04F, 0.1F, 0.15F, 0.2F, 0.25F, 0.3F
} ;                                    /* Referenced by:
                                        * '<S587>/Vector'
                                        * '<S609>/Vector'
                                        * '<S657>/Vector'
                                        * '<S677>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_CstCtrllr_GrdMin_Fast[10]
    =
{
    0.0F, 11.1111107F, 22.2222214F, 33.3333321F, 44.4444427F, 55.5555573F,
    66.6666641F, 77.7777786F, 88.8888855F, 100.0F
} ;                                    /* Referenced by: '<S207>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual[289] =
{
    0.0F, 3.95905161F, 7.1156249F, 9.98593712F, 13.1736107F, 16.2265625F,
    19.0968742F, 21.9671879F, 24.8375F, 28.0086803F, 31.796875F, 36.5807304F,
    41.1822777F, 45.5737877F, 54.2552109F, 72.8190155F, 100.0F, 0.0F,
    2.39048147F, 4.78096294F, 8.17782402F, 11.8477602F, 15.6259527F, 19.0538979F,
    22.7920704F, 26.8840065F, 31.8079052F, 37.1272888F, 42.1485023F, 48.3188057F,
    58.9782104F, 75.6941147F, 90.9823227F, 100.0F, 0.0F, 2.88539696F,
    6.13467646F, 10.4176979F, 15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F,
    34.4206619F, 39.6862F, 44.9517441F, 50.4345703F, 61.448452F, 75.7483597F,
    82.3643646F, 93.351387F, 100.0F, 0.0F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 93.7042313F,
    100.0F, 0.0F, 3.73482919F, 8.37164402F, 13.4705324F, 18.5694199F,
    23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F, 49.1627426F,
    58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 93.6545868F, 100.0F, 0.0F,
    3.87137341F, 8.59730816F, 13.6748905F, 18.7524738F, 23.8300571F, 28.9076385F,
    33.9852219F, 39.0628052F, 44.1403885F, 49.217968F, 58.591095F, 73.1194F,
    78.3402481F, 85.5939636F, 93.5893097F, 100.0F, 0.0F, 4.03802681F,
    8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F, 29.0774517F, 34.1338577F,
    39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F, 73.2476578F, 78.7927094F,
    86.1679382F, 93.5628738F, 100.0F, 0.0F, 3.90202522F, 8.54561424F,
    13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F, 33.215416F, 38.1493797F,
    43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F, 77.8191833F, 85.506279F,
    93.5139F, 100.0F, 0.0F, 3.9014473F, 8.4503355F, 13.2529802F, 18.055624F,
    22.8582649F, 27.6609058F, 32.4635506F, 37.2661972F, 42.0688362F, 46.8714828F,
    53.3482552F, 64.4303F, 76.2794113F, 82.1641083F, 92.2052383F, 100.0F, 0.0F,
    3.65441155F, 8.12584305F, 13.0734358F, 18.0210285F, 22.9686222F, 27.916214F,
    32.8638077F, 37.8113976F, 42.7589874F, 47.7065811F, 55.3083534F, 67.8053F,
    77.5493546F, 84.9939F, 93.3790131F, 100.0F, 0.0F, 3.47751474F, 7.92066526F,
    13.1158066F, 18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F,
    44.2866554F, 49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F,
    96.1151123F, 100.0F, 0.0F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 97.4864426F,
    100.0F, 0.0F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F, 22.3264484F,
    27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F, 61.4447632F,
    76.0074539F, 83.0666F, 92.059166F, 98.5936127F, 100.0F, 0.0F, 2.31966639F,
    4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F, 26.6400795F, 32.268898F,
    37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F, 75.4129715F, 82.0835571F,
    91.6706F, 99.9241104F, 100.0F, 0.0F, 2.23514366F, 4.47028732F, 9.25783253F,
    14.8381634F, 20.4184914F, 25.9988213F, 31.5791531F, 37.159481F, 42.7398071F,
    48.3201408F, 57.8009338F, 73.4423904F, 80.1222534F, 90.6214676F, 100.0F,
    100.0F, 0.0F, 2.141325F, 4.28265F, 8.74183273F, 14.3686752F, 19.9955139F,
    25.6223507F, 31.2491932F, 36.8760338F, 42.5028725F, 48.129715F, 57.5131035F,
    73.1501846F, 80.0204544F, 90.7585373F, 100.0F, 100.0F, 0.0F, 1.9098891F,
    3.8197782F, 7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F,
    35.0056152F, 40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F,
    100.0F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Boost[289] =
{
    0.0F, 4.75086212F, 8.53875F, 11.9831247F, 15.8083324F, 19.4718742F,
    22.9162483F, 26.3606262F, 29.805F, 33.6104164F, 38.15625F, 43.8968773F,
    49.4187317F, 54.6885452F, 65.1062546F, 87.3828201F, 120.0F, 0.0F,
    2.86857772F, 5.73715544F, 9.81338882F, 14.2173119F, 18.7511425F, 22.8646774F,
    27.3504848F, 32.260807F, 38.169487F, 44.5527458F, 50.5782F, 57.9825668F,
    70.7738495F, 90.8329391F, 109.178787F, 120.0F, 0.0F, 3.46247625F,
    7.36161184F, 12.5012379F, 18.0602131F, 22.7694206F, 28.6675F, 34.9861488F,
    41.3047943F, 47.6234398F, 53.9420929F, 60.5214844F, 73.7381439F, 90.8980331F,
    98.8372345F, 112.021667F, 120.0F, 0.0F, 3.91794372F, 8.909729F, 15.1193447F,
    21.3289604F, 27.5385742F, 33.748188F, 39.9578056F, 46.1674156F, 52.3770294F,
    58.5866508F, 69.592514F, 87.0176239F, 93.6134415F, 102.052277F, 112.445076F,
    120.0F, 0.0F, 4.48179483F, 10.0459728F, 16.1646385F, 22.2833042F,
    28.4019661F, 34.5206337F, 40.6392975F, 46.7579651F, 52.8766289F, 58.9952927F,
    70.2279129F, 87.6978531F, 93.9789124F, 102.718781F, 112.385506F, 120.0F,
    0.0F, 4.645648F, 10.3167696F, 16.4098682F, 22.5029678F, 28.5960693F,
    34.689167F, 40.7822647F, 46.8753662F, 52.9684677F, 59.0615616F, 70.3093109F,
    87.7432785F, 94.0083F, 102.712753F, 112.307175F, 120.0F, 0.0F, 4.84563208F,
    10.6221905F, 16.6898785F, 22.7575645F, 28.8252563F, 34.8929405F, 40.9606285F,
    47.0283127F, 53.0960045F, 59.1636925F, 70.4627533F, 87.8971863F, 94.5512543F,
    103.401527F, 112.275452F, 120.0F, 0.0F, 4.68243027F, 10.2547369F,
    16.1754894F, 22.0962391F, 28.0169926F, 33.9377441F, 39.8584976F, 45.7792549F,
    51.7000084F, 57.6207542F, 67.0830231F, 82.386795F, 93.3830185F, 102.607536F,
    112.216682F, 120.0F, 0.0F, 4.68173695F, 10.1404028F, 15.9035759F, 21.666748F,
    27.4299183F, 33.1930885F, 38.9562607F, 44.7194366F, 50.482605F, 56.2457809F,
    64.0179062F, 77.3163605F, 91.5352936F, 98.5969315F, 110.646286F, 120.0F,
    0.0F, 4.38529396F, 9.75101185F, 15.6881227F, 21.6252346F, 27.5623474F,
    33.4994583F, 39.4365692F, 45.3736763F, 51.3107834F, 57.2479F, 66.3700256F,
    81.3663559F, 93.059227F, 101.992676F, 112.054817F, 120.0F, 0.0F, 4.1730175F,
    9.50479794F, 15.7389679F, 21.9731369F, 28.2073059F, 34.4414787F, 40.6756516F,
    46.9098206F, 53.1439857F, 59.3781548F, 71.2246399F, 89.5394897F, 96.1613312F,
    108.342F, 115.338135F, 120.0F, 0.0F, 3.66528058F, 8.34438229F, 14.8024244F,
    21.2604675F, 27.7185078F, 34.176548F, 40.6345901F, 47.0926361F, 53.5506744F,
    60.0174561F, 73.4003067F, 90.9248047F, 98.765686F, 109.840897F, 116.983734F,
    120.0F, 0.0F, 3.21805954F, 6.89865255F, 13.5296803F, 20.1607113F,
    26.7917385F, 33.4227638F, 40.0537949F, 46.6848259F, 53.3158531F, 59.9468803F,
    73.7337189F, 91.2089462F, 99.6799164F, 110.471F, 118.312332F, 120.0F, 0.0F,
    2.78359962F, 5.56719923F, 11.7043657F, 18.4589386F, 25.2135162F, 31.9680958F,
    38.7226791F, 45.4772491F, 52.2318268F, 58.9864044F, 71.4819717F, 90.4955673F,
    98.500267F, 110.004723F, 119.908936F, 120.0F, 0.0F, 2.6821723F, 5.3643446F,
    11.1093988F, 17.8057957F, 24.5021896F, 31.1985855F, 37.8949852F, 44.5913773F,
    51.2877693F, 57.984169F, 69.3611221F, 88.130867F, 96.1467056F, 108.745758F,
    120.0F, 120.0F, 0.0F, 2.56959F, 5.13918F, 10.4901991F, 17.2424107F,
    23.9946175F, 30.7468204F, 37.4990311F, 44.2512398F, 51.0034485F, 57.7556572F,
    69.0157242F, 87.78022F, 96.0245438F, 108.910248F, 120.0F, 120.0F, 0.0F,
    2.29186702F, 4.58373404F, 8.55595398F, 15.24611F, 21.9362679F, 28.6264229F,
    35.3165779F, 42.0067368F, 48.6968956F, 55.3870544F, 64.1544266F, 80.3021F,
    93.4575272F, 120.0F, 120.0F, 120.0F
} ;                                    /* Referenced by: '<S112>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Camel[289] =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_k_PdlPctVirtual_Camel_Boost[289] =
{
    0.0F, 1.18771553F, 2.37543106F, 4.75086212F, 8.53875F, 11.9831247F,
    15.8083324F, 19.4718742F, 22.9162483F, 26.3606262F, 29.805F, 33.6104164F,
    38.15625F, 43.8968773F, 49.4187317F, 54.6885452F, 65.1062546F, 0.0F,
    0.71714443F, 1.43428886F, 2.86857772F, 5.73715544F, 9.81338882F, 14.2173119F,
    18.7511425F, 22.8646774F, 27.3504848F, 32.260807F, 38.169487F, 44.5527458F,
    50.5782F, 57.9825668F, 70.7738495F, 90.8329391F, 0.0F, 0.865619063F,
    1.73123813F, 3.46247625F, 7.36161184F, 12.5012379F, 18.0602131F, 22.7694206F,
    28.6675F, 34.9861488F, 41.3047943F, 47.6234398F, 53.9420929F, 60.5214844F,
    73.7381439F, 90.8980331F, 98.8372345F, 0.0F, 0.979485929F, 1.95897186F,
    3.91794372F, 8.909729F, 15.1193447F, 21.3289604F, 27.5385742F, 33.748188F,
    39.9578056F, 46.1674156F, 52.3770294F, 58.5866508F, 69.592514F, 87.0176239F,
    93.6134415F, 102.052277F, 0.0F, 1.12044871F, 2.24089742F, 4.48179483F,
    10.0459728F, 16.1646385F, 22.2833042F, 28.4019661F, 34.5206337F, 40.6392975F,
    46.7579651F, 52.8766289F, 58.9952927F, 70.2279129F, 87.6978531F, 93.9789124F,
    102.718781F, 0.0F, 1.161412F, 2.322824F, 4.645648F, 10.3167696F, 16.4098682F,
    22.5029678F, 28.5960693F, 34.689167F, 40.7822647F, 46.8753662F, 52.9684677F,
    59.0615616F, 70.3093109F, 87.7432785F, 94.0083F, 102.712753F, 0.0F,
    1.21140802F, 2.42281604F, 4.84563208F, 10.6221905F, 16.6898785F, 22.7575645F,
    28.8252563F, 34.8929405F, 40.9606285F, 47.0283127F, 53.0960045F, 59.1636925F,
    70.4627533F, 87.8971863F, 94.5512543F, 103.401527F, 0.0F, 1.17060757F,
    2.34121513F, 4.68243027F, 10.2547369F, 16.1754894F, 22.0962391F, 28.0169926F,
    33.9377441F, 39.8584976F, 45.7792549F, 51.7000084F, 57.6207542F, 67.0830231F,
    82.386795F, 93.3830185F, 102.607536F, 0.0F, 1.17043424F, 2.34086847F,
    4.68173695F, 10.1404028F, 15.9035759F, 21.666748F, 27.4299183F, 33.1930885F,
    38.9562607F, 44.7194366F, 50.482605F, 56.2457809F, 64.0179062F, 77.3163605F,
    91.5352936F, 98.5969315F, 0.0F, 1.09632349F, 2.19264698F, 4.38529396F,
    9.75101185F, 15.6881227F, 21.6252346F, 27.5623474F, 33.4994583F, 39.4365692F,
    45.3736763F, 51.3107834F, 57.2479F, 66.3700256F, 81.3663559F, 93.059227F,
    101.992676F, 0.0F, 1.04325438F, 2.08650875F, 4.1730175F, 9.50479794F,
    15.7389679F, 21.9731369F, 28.2073059F, 34.4414787F, 40.6756516F, 46.9098206F,
    53.1439857F, 59.3781548F, 71.2246399F, 89.5394897F, 96.1613312F, 108.342F,
    0.0F, 0.916320145F, 1.83264029F, 3.66528058F, 8.34438229F, 14.8024244F,
    21.2604675F, 27.7185078F, 34.176548F, 40.6345901F, 47.0926361F, 53.5506744F,
    60.0174561F, 73.4003067F, 90.9248047F, 98.765686F, 109.840897F, 0.0F,
    0.804514885F, 1.60902977F, 3.21805954F, 6.89865255F, 13.5296803F,
    20.1607113F, 26.7917385F, 33.4227638F, 40.0537949F, 46.6848259F, 53.3158531F,
    59.9468803F, 73.7337189F, 91.2089462F, 99.6799164F, 110.471F, 0.0F,
    0.695899904F, 1.39179981F, 2.78359962F, 5.56719923F, 11.7043657F,
    18.4589386F, 25.2135162F, 31.9680958F, 38.7226791F, 45.4772491F, 52.2318268F,
    58.9864044F, 71.4819717F, 90.4955673F, 98.500267F, 110.004723F, 0.0F,
    0.670543075F, 1.34108615F, 2.6821723F, 5.3643446F, 11.1093988F, 17.8057957F,
    24.5021896F, 31.1985855F, 37.8949852F, 44.5913773F, 51.2877693F, 57.984169F,
    69.3611221F, 88.130867F, 96.1467056F, 108.745758F, 0.0F, 0.642397523F,
    1.28479505F, 2.56959F, 5.13918F, 10.4901991F, 17.2424107F, 23.9946175F,
    30.7468204F, 37.4990311F, 44.2512398F, 51.0034485F, 57.7556572F, 69.0157242F,
    87.78022F, 96.0245438F, 108.910248F, 0.0F, 0.572966754F, 1.14593351F,
    2.29186702F, 4.58373404F, 8.55595398F, 15.24611F, 21.9362679F, 28.6264229F,
    35.3165779F, 42.0067368F, 48.6968956F, 55.3870544F, 64.1544266F, 80.3021F,
    93.4575272F, 120.0F
} ;                                    /* Referenced by: '<S114>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Drag[289] =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_MudSand[289]
    =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_OffRoad[289]
    =
{
    0.0F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F, 13.1736107F,
    16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F, 31.796875F,
    36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 72.8190155F, 0.0F,
    1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F, 11.8477602F, 15.6259527F,
    19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F, 37.1272888F, 42.1485023F,
    48.3188057F, 58.9782104F, 75.6941147F, 90.9823227F, 0.0F, 1.44269848F,
    2.88539696F, 6.13467646F, 10.4176979F, 15.0501776F, 18.9745178F, 23.8895836F,
    29.1551247F, 34.4206619F, 39.6862F, 44.9517441F, 50.4345703F, 61.448452F,
    75.7483597F, 82.3643646F, 93.351387F, 0.0F, 1.63247657F, 3.26495314F,
    7.42477417F, 12.5994539F, 17.7741337F, 22.9488125F, 28.1234913F, 33.298172F,
    38.472847F, 43.6475258F, 48.8222084F, 57.993763F, 72.5146866F, 78.0112F,
    85.0435638F, 93.7042313F, 0.0F, 1.86741459F, 3.73482919F, 8.37164402F,
    13.4705324F, 18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F,
    44.063858F, 49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F,
    93.6545868F, 0.0F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 93.5893097F,
    0.0F, 2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F,
    24.0210476F, 29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F,
    58.7189636F, 73.2476578F, 78.7927094F, 86.1679382F, 93.5628738F, 0.0F,
    1.95101261F, 3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F,
    28.2814541F, 33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F,
    68.6556625F, 77.8191833F, 85.506279F, 93.5139F, 0.0F, 1.95072365F,
    3.9014473F, 8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F,
    32.4635506F, 37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F,
    76.2794113F, 82.1641083F, 92.2052383F, 0.0F, 1.82720578F, 3.65441155F,
    8.12584305F, 13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F,
    37.8113976F, 42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F,
    84.9939F, 93.3790131F, 0.0F, 1.73875737F, 3.47751474F, 7.92066526F,
    13.1158066F, 18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F,
    44.2866554F, 49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F,
    96.1151123F, 0.0F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 97.4864426F,
    0.0F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 98.5936127F, 0.0F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 99.9241104F, 0.0F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 100.0F, 0.0F, 1.0706625F, 2.141325F, 4.28265F,
    8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F, 36.8760338F,
    42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F, 90.7585373F,
    100.0F, 0.0F, 0.954944551F, 1.9098891F, 3.8197782F, 7.12996149F, 12.7050915F,
    18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F, 40.5807457F, 46.15588F,
    53.4620209F, 66.9184189F, 77.8812714F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Power[289] =
{
    0.0F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F, 13.1736107F,
    16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F, 31.796875F,
    36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 72.8190155F, 0.0F,
    1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F, 11.8477602F, 15.6259527F,
    19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F, 37.1272888F, 42.1485023F,
    48.3188057F, 58.9782104F, 75.6941147F, 90.9823227F, 0.0F, 1.44269848F,
    2.88539696F, 6.13467646F, 10.4176979F, 15.0501776F, 18.9745178F, 23.8895836F,
    29.1551247F, 34.4206619F, 39.6862F, 44.9517441F, 50.4345703F, 61.448452F,
    75.7483597F, 82.3643646F, 93.351387F, 0.0F, 1.63247657F, 3.26495314F,
    7.42477417F, 12.5994539F, 17.7741337F, 22.9488125F, 28.1234913F, 33.298172F,
    38.472847F, 43.6475258F, 48.8222084F, 57.993763F, 72.5146866F, 78.0112F,
    85.0435638F, 93.7042313F, 0.0F, 1.86741459F, 3.73482919F, 8.37164402F,
    13.4705324F, 18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F,
    44.063858F, 49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F,
    93.6545868F, 0.0F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 93.5893097F,
    0.0F, 2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F,
    24.0210476F, 29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F,
    58.7189636F, 73.2476578F, 78.7927094F, 86.1679382F, 93.5628738F, 0.0F,
    1.95101261F, 3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F,
    28.2814541F, 33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F,
    68.6556625F, 77.8191833F, 85.506279F, 93.5139F, 0.0F, 1.95072365F,
    3.9014473F, 8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F,
    32.4635506F, 37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F,
    76.2794113F, 82.1641083F, 92.2052383F, 0.0F, 1.82720578F, 3.65441155F,
    8.12584305F, 13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F,
    37.8113976F, 42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F,
    84.9939F, 93.3790131F, 0.0F, 1.73875737F, 3.47751474F, 7.92066526F,
    13.1158066F, 18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F,
    44.2866554F, 49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F,
    96.1151123F, 0.0F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 97.4864426F,
    0.0F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 98.5936127F, 0.0F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 99.9241104F, 0.0F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 100.0F, 0.0F, 1.0706625F, 2.141325F, 4.28265F,
    8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F, 36.8760338F,
    42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F, 90.7585373F,
    100.0F, 0.0F, 0.954944551F, 1.9098891F, 3.8197782F, 7.12996149F, 12.7050915F,
    18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F, 40.5807457F, 46.15588F,
    53.4620209F, 66.9184189F, 77.8812714F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S119>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_PwrLimActv
    [289] =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Range[289] =
{
    0.0F, 1.38566804F, 2.77133608F, 4.98093748F, 6.99015617F, 9.2215271F,
    11.3585939F, 13.3678122F, 15.3770313F, 17.3862495F, 19.6060772F, 22.2578125F,
    25.6065121F, 28.8275948F, 31.9016514F, 37.9786491F, 50.9733124F, 0.0F,
    0.836668491F, 1.67333698F, 3.34667397F, 5.72447681F, 8.29343224F,
    10.9381666F, 13.3377285F, 15.9544497F, 18.8188038F, 22.2655334F, 25.9891014F,
    29.503952F, 33.8231659F, 41.2847481F, 52.9858818F, 63.6876259F, 0.0F,
    1.00988889F, 2.01977777F, 4.29427338F, 7.29238844F, 10.5351238F, 13.2821627F,
    16.7227077F, 20.4085865F, 24.0944633F, 27.7803402F, 31.4662209F, 35.3042F,
    43.013916F, 53.0238533F, 57.655056F, 65.3459702F, 0.0F, 1.14273357F,
    2.28546715F, 5.19734192F, 8.81961823F, 12.4418936F, 16.0641689F, 19.6864433F,
    23.3087196F, 26.9309921F, 30.5532684F, 34.1755447F, 40.5956345F, 50.7602806F,
    54.6078415F, 59.5304947F, 65.5929642F, 0.0F, 1.30719018F, 2.61438036F,
    5.86015081F, 9.42937279F, 12.9985943F, 16.5678139F, 20.1370373F, 23.7062569F,
    27.2754784F, 30.8447F, 34.4139214F, 40.9662819F, 51.1570816F, 54.8210297F,
    59.9192886F, 65.5582123F, 0.0F, 1.35498071F, 2.70996141F, 6.01811552F,
    9.57242298F, 13.1267319F, 16.6810398F, 20.2353477F, 23.7896557F, 27.3439636F,
    30.8982716F, 34.4525795F, 41.0137672F, 51.1835785F, 54.8381729F, 59.9157753F,
    65.5125198F, 0.0F, 1.41330934F, 2.82661867F, 6.1962781F, 9.7357626F,
    13.2752466F, 16.8147335F, 20.3542156F, 23.8937F, 27.4331837F, 30.9726696F,
    34.5121536F, 41.1032753F, 51.2733612F, 55.1548958F, 60.3175583F, 65.4940109F,
    0.0F, 1.36570883F, 2.73141766F, 5.98193F, 9.43570232F, 12.889473F,
    16.3432465F, 19.7970181F, 23.2507915F, 26.704565F, 30.1583385F, 33.6121063F,
    39.1317635F, 48.0589638F, 54.4734268F, 59.8543968F, 65.4597321F, 0.0F,
    1.36550653F, 2.73101306F, 5.91523504F, 9.27708626F, 12.638937F, 16.0007858F,
    19.3626347F, 22.7244854F, 26.086338F, 29.448185F, 32.8100395F, 37.3437805F,
    45.1012077F, 53.3955879F, 57.5148773F, 64.543663F, 0.0F, 1.27904403F,
    2.55808806F, 5.68809032F, 9.15140533F, 12.6147203F, 16.0780354F, 19.5413494F,
    23.0046654F, 26.4679775F, 29.9312916F, 33.3946075F, 38.715847F, 47.463707F,
    54.2845497F, 59.4957275F, 65.3653107F, 0.0F, 1.21713018F, 2.43426037F,
    5.54446554F, 9.18106461F, 12.8176632F, 16.4542618F, 20.0908623F, 23.7274647F,
    27.3640633F, 31.000658F, 34.6372566F, 41.5477066F, 52.231369F, 56.0941124F,
    63.1995F, 67.2805786F, 0.0F, 1.06904018F, 2.13808036F, 4.86755657F,
    8.63474751F, 12.4019394F, 16.1691303F, 19.9363194F, 23.7035122F, 27.4707031F,
    31.2378922F, 35.0101814F, 42.8168449F, 53.0394669F, 57.6133194F, 64.0738602F,
    68.240509F, 0.0F, 0.938600659F, 1.87720132F, 4.02421379F, 7.89231348F,
    11.7604151F, 15.6285143F, 19.4966125F, 23.3647137F, 27.2328148F, 31.100914F,
    34.9690132F, 43.0113335F, 53.2052193F, 58.1466179F, 64.4414139F, 69.0155258F,
    0.0F, 0.811883211F, 1.62376642F, 3.24753284F, 6.8275466F, 10.7677135F,
    14.7078838F, 18.648056F, 22.5882282F, 26.5283966F, 30.4685669F, 34.4087372F,
    41.6978188F, 52.7890816F, 57.4584885F, 64.1694183F, 69.9468765F, 0.0F,
    0.782300293F, 1.56460059F, 3.12920117F, 6.48048258F, 10.386714F, 14.292944F,
    18.1991749F, 22.1054077F, 26.0116367F, 29.9178658F, 33.8240967F, 40.4606552F,
    51.4096718F, 56.0855789F, 63.4350281F, 70.0F, 0.0F, 0.749463737F,
    1.49892747F, 2.99785495F, 6.11928272F, 10.058073F, 13.9968596F, 17.9356461F,
    21.8744354F, 25.8132229F, 29.7520103F, 33.6908F, 40.2591743F, 51.2051277F,
    56.0143166F, 63.5309753F, 70.0F, 0.0F, 0.668461204F, 1.33692241F,
    2.67384481F, 4.990973F, 8.89356422F, 12.7961569F, 16.6987476F, 20.6013374F,
    24.503931F, 28.4065228F, 32.3091164F, 37.4234161F, 46.8428917F, 54.5168915F,
    70.0F, 70.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Rock[289] =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S122>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Snow[289] =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S123>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Sport[289] =
{
    0.0F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F, 13.1736107F,
    16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F, 31.796875F,
    36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 72.8190155F, 0.0F,
    1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F, 11.8477602F, 15.6259527F,
    19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F, 37.1272888F, 42.1485023F,
    48.3188057F, 58.9782104F, 75.6941147F, 90.9823227F, 0.0F, 1.44269848F,
    2.88539696F, 6.13467646F, 10.4176979F, 15.0501776F, 18.9745178F, 23.8895836F,
    29.1551247F, 34.4206619F, 39.6862F, 44.9517441F, 50.4345703F, 61.448452F,
    75.7483597F, 82.3643646F, 93.351387F, 0.0F, 1.63247657F, 3.26495314F,
    7.42477417F, 12.5994539F, 17.7741337F, 22.9488125F, 28.1234913F, 33.298172F,
    38.472847F, 43.6475258F, 48.8222084F, 57.993763F, 72.5146866F, 78.0112F,
    85.0435638F, 93.7042313F, 0.0F, 1.86741459F, 3.73482919F, 8.37164402F,
    13.4705324F, 18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F,
    44.063858F, 49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F,
    93.6545868F, 0.0F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 93.5893097F,
    0.0F, 2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F,
    24.0210476F, 29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F,
    58.7189636F, 73.2476578F, 78.7927094F, 86.1679382F, 93.5628738F, 0.0F,
    1.95101261F, 3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F,
    28.2814541F, 33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F,
    68.6556625F, 77.8191833F, 85.506279F, 93.5139F, 0.0F, 1.95072365F,
    3.9014473F, 8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F,
    32.4635506F, 37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F,
    76.2794113F, 82.1641083F, 92.2052383F, 0.0F, 1.82720578F, 3.65441155F,
    8.12584305F, 13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F,
    37.8113976F, 42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F,
    84.9939F, 93.3790131F, 0.0F, 1.73875737F, 3.47751474F, 7.92066526F,
    13.1158066F, 18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F,
    44.2866554F, 49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F,
    96.1151123F, 0.0F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 97.4864426F,
    0.0F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 98.5936127F, 0.0F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 99.9241104F, 0.0F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 100.0F, 0.0F, 1.0706625F, 2.141325F, 4.28265F,
    8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F, 36.8760338F,
    42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F, 90.7585373F,
    100.0F, 0.0F, 0.954944551F, 1.9098891F, 3.8197782F, 7.12996149F, 12.7050915F,
    18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F, 40.5807457F, 46.15588F,
    53.4620209F, 66.9184189F, 77.8812714F, 100.0F, 100.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_k_PdlPctVirtual_Sport_Boost[289] =
{
    0.0F, 2.37543106F, 4.75086212F, 8.53875F, 11.9831247F, 15.8083324F,
    19.4718742F, 22.9162483F, 26.3606262F, 29.805F, 33.6104164F, 38.15625F,
    43.8968773F, 49.4187317F, 54.6885452F, 65.1062546F, 87.3828201F, 0.0F,
    1.43428886F, 2.86857772F, 5.73715544F, 9.81338882F, 14.2173119F, 18.7511425F,
    22.8646774F, 27.3504848F, 32.260807F, 38.169487F, 44.5527458F, 50.5782F,
    57.9825668F, 70.7738495F, 90.8329391F, 109.178787F, 0.0F, 1.73123813F,
    3.46247625F, 7.36161184F, 12.5012379F, 18.0602131F, 22.7694206F, 28.6675F,
    34.9861488F, 41.3047943F, 47.6234398F, 53.9420929F, 60.5214844F, 73.7381439F,
    90.8980331F, 98.8372345F, 112.021667F, 0.0F, 1.95897186F, 3.91794372F,
    8.909729F, 15.1193447F, 21.3289604F, 27.5385742F, 33.748188F, 39.9578056F,
    46.1674156F, 52.3770294F, 58.5866508F, 69.592514F, 87.0176239F, 93.6134415F,
    102.052277F, 112.445076F, 0.0F, 2.24089742F, 4.48179483F, 10.0459728F,
    16.1646385F, 22.2833042F, 28.4019661F, 34.5206337F, 40.6392975F, 46.7579651F,
    52.8766289F, 58.9952927F, 70.2279129F, 87.6978531F, 93.9789124F, 102.718781F,
    112.385506F, 0.0F, 2.322824F, 4.645648F, 10.3167696F, 16.4098682F,
    22.5029678F, 28.5960693F, 34.689167F, 40.7822647F, 46.8753662F, 52.9684677F,
    59.0615616F, 70.3093109F, 87.7432785F, 94.0083F, 102.712753F, 112.307175F,
    0.0F, 2.42281604F, 4.84563208F, 10.6221905F, 16.6898785F, 22.7575645F,
    28.8252563F, 34.8929405F, 40.9606285F, 47.0283127F, 53.0960045F, 59.1636925F,
    70.4627533F, 87.8971863F, 94.5512543F, 103.401527F, 112.275452F, 0.0F,
    2.34121513F, 4.68243027F, 10.2547369F, 16.1754894F, 22.0962391F, 28.0169926F,
    33.9377441F, 39.8584976F, 45.7792549F, 51.7000084F, 57.6207542F, 67.0830231F,
    82.386795F, 93.3830185F, 102.607536F, 112.216682F, 0.0F, 2.34086847F,
    4.68173695F, 10.1404028F, 15.9035759F, 21.666748F, 27.4299183F, 33.1930885F,
    38.9562607F, 44.7194366F, 50.482605F, 56.2457809F, 64.0179062F, 77.3163605F,
    91.5352936F, 98.5969315F, 110.646286F, 0.0F, 2.19264698F, 4.38529396F,
    9.75101185F, 15.6881227F, 21.6252346F, 27.5623474F, 33.4994583F, 39.4365692F,
    45.3736763F, 51.3107834F, 57.2479F, 66.3700256F, 81.3663559F, 93.059227F,
    101.992676F, 112.054817F, 0.0F, 2.08650875F, 4.1730175F, 9.50479794F,
    15.7389679F, 21.9731369F, 28.2073059F, 34.4414787F, 40.6756516F, 46.9098206F,
    53.1439857F, 59.3781548F, 71.2246399F, 89.5394897F, 96.1613312F, 108.342F,
    115.338135F, 0.0F, 1.83264029F, 3.66528058F, 8.34438229F, 14.8024244F,
    21.2604675F, 27.7185078F, 34.176548F, 40.6345901F, 47.0926361F, 53.5506744F,
    60.0174561F, 73.4003067F, 90.9248047F, 98.765686F, 109.840897F, 116.983734F,
    0.0F, 1.60902977F, 3.21805954F, 6.89865255F, 13.5296803F, 20.1607113F,
    26.7917385F, 33.4227638F, 40.0537949F, 46.6848259F, 53.3158531F, 59.9468803F,
    73.7337189F, 91.2089462F, 99.6799164F, 110.471F, 118.312332F, 0.0F,
    1.39179981F, 2.78359962F, 5.56719923F, 11.7043657F, 18.4589386F, 25.2135162F,
    31.9680958F, 38.7226791F, 45.4772491F, 52.2318268F, 58.9864044F, 71.4819717F,
    90.4955673F, 98.500267F, 110.004723F, 119.908936F, 0.0F, 1.34108615F,
    2.6821723F, 5.3643446F, 11.1093988F, 17.8057957F, 24.5021896F, 31.1985855F,
    37.8949852F, 44.5913773F, 51.2877693F, 57.984169F, 69.3611221F, 88.130867F,
    96.1467056F, 108.745758F, 120.0F, 0.0F, 1.28479505F, 2.56959F, 5.13918F,
    10.4901991F, 17.2424107F, 23.9946175F, 30.7468204F, 37.4990311F, 44.2512398F,
    51.0034485F, 57.7556572F, 69.0157242F, 87.78022F, 96.0245438F, 108.910248F,
    120.0F, 0.0F, 1.14593351F, 2.29186702F, 4.58373404F, 8.55595398F, 15.24611F,
    21.9362679F, 28.6264229F, 35.3165779F, 42.0067368F, 48.6968956F, 55.3870544F,
    64.1544266F, 80.3021F, 93.4575272F, 120.0F, 120.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Tow[289] =
{
    0.0F, 1.38566804F, 2.77133608F, 4.98093748F, 6.99015617F, 9.2215271F,
    11.3585939F, 13.3678122F, 15.3770313F, 17.3862495F, 19.6060772F, 22.2578125F,
    25.6065121F, 28.8275948F, 31.9016514F, 37.9786491F, 50.9733124F, 0.0F,
    0.836668491F, 1.67333698F, 3.34667397F, 5.72447681F, 8.29343224F,
    10.9381666F, 13.3377285F, 15.9544497F, 18.8188038F, 22.2655334F, 25.9891014F,
    29.503952F, 33.8231659F, 41.2847481F, 52.9858818F, 63.6876259F, 0.0F,
    1.00988889F, 2.01977777F, 4.29427338F, 7.29238844F, 10.5351238F, 13.2821627F,
    16.7227077F, 20.4085865F, 24.0944633F, 27.7803402F, 31.4662209F, 35.3042F,
    43.013916F, 53.0238533F, 57.655056F, 65.3459702F, 0.0F, 1.14273357F,
    2.28546715F, 5.19734192F, 8.81961823F, 12.4418936F, 16.0641689F, 19.6864433F,
    23.3087196F, 26.9309921F, 30.5532684F, 34.1755447F, 40.5956345F, 50.7602806F,
    54.6078415F, 59.5304947F, 65.5929642F, 0.0F, 1.30719018F, 2.61438036F,
    5.86015081F, 9.42937279F, 12.9985943F, 16.5678139F, 20.1370373F, 23.7062569F,
    27.2754784F, 30.8447F, 34.4139214F, 40.9662819F, 51.1570816F, 54.8210297F,
    59.9192886F, 65.5582123F, 0.0F, 1.35498071F, 2.70996141F, 6.01811552F,
    9.57242298F, 13.1267319F, 16.6810398F, 20.2353477F, 23.7896557F, 27.3439636F,
    30.8982716F, 34.4525795F, 41.0137672F, 51.1835785F, 54.8381729F, 59.9157753F,
    65.5125198F, 0.0F, 1.41330934F, 2.82661867F, 6.1962781F, 9.7357626F,
    13.2752466F, 16.8147335F, 20.3542156F, 23.8937F, 27.4331837F, 30.9726696F,
    34.5121536F, 41.1032753F, 51.2733612F, 55.1548958F, 60.3175583F, 65.4940109F,
    0.0F, 1.36570883F, 2.73141766F, 5.98193F, 9.43570232F, 12.889473F,
    16.3432465F, 19.7970181F, 23.2507915F, 26.704565F, 30.1583385F, 33.6121063F,
    39.1317635F, 48.0589638F, 54.4734268F, 59.8543968F, 65.4597321F, 0.0F,
    1.36550653F, 2.73101306F, 5.91523504F, 9.27708626F, 12.638937F, 16.0007858F,
    19.3626347F, 22.7244854F, 26.086338F, 29.448185F, 32.8100395F, 37.3437805F,
    45.1012077F, 53.3955879F, 57.5148773F, 64.543663F, 0.0F, 1.27904403F,
    2.55808806F, 5.68809032F, 9.15140533F, 12.6147203F, 16.0780354F, 19.5413494F,
    23.0046654F, 26.4679775F, 29.9312916F, 33.3946075F, 38.715847F, 47.463707F,
    54.2845497F, 59.4957275F, 65.3653107F, 0.0F, 1.21713018F, 2.43426037F,
    5.54446554F, 9.18106461F, 12.8176632F, 16.4542618F, 20.0908623F, 23.7274647F,
    27.3640633F, 31.000658F, 34.6372566F, 41.5477066F, 52.231369F, 56.0941124F,
    63.1995F, 67.2805786F, 0.0F, 1.06904018F, 2.13808036F, 4.86755657F,
    8.63474751F, 12.4019394F, 16.1691303F, 19.9363194F, 23.7035122F, 27.4707031F,
    31.2378922F, 35.0101814F, 42.8168449F, 53.0394669F, 57.6133194F, 64.0738602F,
    68.240509F, 0.0F, 0.938600659F, 1.87720132F, 4.02421379F, 7.89231348F,
    11.7604151F, 15.6285143F, 19.4966125F, 23.3647137F, 27.2328148F, 31.100914F,
    34.9690132F, 43.0113335F, 53.2052193F, 58.1466179F, 64.4414139F, 69.0155258F,
    0.0F, 0.811883211F, 1.62376642F, 3.24753284F, 6.8275466F, 10.7677135F,
    14.7078838F, 18.648056F, 22.5882282F, 26.5283966F, 30.4685669F, 34.4087372F,
    41.6978188F, 52.7890816F, 57.4584885F, 64.1694183F, 69.9468765F, 0.0F,
    0.782300293F, 1.56460059F, 3.12920117F, 6.48048258F, 10.386714F, 14.292944F,
    18.1991749F, 22.1054077F, 26.0116367F, 29.9178658F, 33.8240967F, 40.4606552F,
    51.4096718F, 56.0855789F, 63.4350281F, 70.0F, 0.0F, 0.749463737F,
    1.49892747F, 2.99785495F, 6.11928272F, 10.058073F, 13.9968596F, 17.9356461F,
    21.8744354F, 25.8132229F, 29.7520103F, 33.6908F, 40.2591743F, 51.2051277F,
    56.0143166F, 63.5309753F, 70.0F, 0.0F, 0.668461204F, 1.33692241F,
    2.67384481F, 4.990973F, 8.89356422F, 12.7961569F, 16.6987476F, 20.6013374F,
    24.503931F, 28.4065228F, 32.3091164F, 37.4234161F, 46.8428917F, 54.5168915F,
    70.0F, 70.0F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Track[289] =
{
    0.0F, 0.989762902F, 1.9795258F, 3.95905161F, 7.1156249F, 9.98593712F,
    13.1736107F, 16.2265625F, 19.0968742F, 21.9671879F, 24.8375F, 28.0086803F,
    31.796875F, 36.5807304F, 41.1822777F, 45.5737877F, 54.2552109F, 0.0F,
    0.597620368F, 1.19524074F, 2.39048147F, 4.78096294F, 8.17782402F,
    11.8477602F, 15.6259527F, 19.0538979F, 22.7920704F, 26.8840065F, 31.8079052F,
    37.1272888F, 42.1485023F, 48.3188057F, 58.9782104F, 75.6941147F, 0.0F,
    0.721349239F, 1.44269848F, 2.88539696F, 6.13467646F, 10.4176979F,
    15.0501776F, 18.9745178F, 23.8895836F, 29.1551247F, 34.4206619F, 39.6862F,
    44.9517441F, 50.4345703F, 61.448452F, 75.7483597F, 82.3643646F, 0.0F,
    0.816238284F, 1.63247657F, 3.26495314F, 7.42477417F, 12.5994539F,
    17.7741337F, 22.9488125F, 28.1234913F, 33.298172F, 38.472847F, 43.6475258F,
    48.8222084F, 57.993763F, 72.5146866F, 78.0112F, 85.0435638F, 0.0F,
    0.933707297F, 1.86741459F, 3.73482919F, 8.37164402F, 13.4705324F,
    18.5694199F, 23.6683044F, 28.7671947F, 33.8660812F, 38.9649696F, 44.063858F,
    49.1627426F, 58.523262F, 73.081543F, 78.3157578F, 85.5989838F, 0.0F,
    0.967843354F, 1.93568671F, 3.87137341F, 8.59730816F, 13.6748905F,
    18.7524738F, 23.8300571F, 28.9076385F, 33.9852219F, 39.0628052F, 44.1403885F,
    49.217968F, 58.591095F, 73.1194F, 78.3402481F, 85.5939636F, 0.0F, 1.0095067F,
    2.0190134F, 4.03802681F, 8.85182571F, 13.9082317F, 18.9646378F, 24.0210476F,
    29.0774517F, 34.1338577F, 39.1902618F, 44.2466698F, 49.3030777F, 58.7189636F,
    73.2476578F, 78.7927094F, 86.1679382F, 0.0F, 0.975506306F, 1.95101261F,
    3.90202522F, 8.54561424F, 13.4795742F, 18.4135323F, 23.3474941F, 28.2814541F,
    33.215416F, 38.1493797F, 43.0833397F, 48.0172958F, 55.9025192F, 68.6556625F,
    77.8191833F, 85.506279F, 0.0F, 0.975361824F, 1.95072365F, 3.9014473F,
    8.4503355F, 13.2529802F, 18.055624F, 22.8582649F, 27.6609058F, 32.4635506F,
    37.2661972F, 42.0688362F, 46.8714828F, 53.3482552F, 64.4303F, 76.2794113F,
    82.1641083F, 0.0F, 0.913602889F, 1.82720578F, 3.65441155F, 8.12584305F,
    13.0734358F, 18.0210285F, 22.9686222F, 27.916214F, 32.8638077F, 37.8113976F,
    42.7589874F, 47.7065811F, 55.3083534F, 67.8053F, 77.5493546F, 84.9939F, 0.0F,
    0.869378686F, 1.73875737F, 3.47751474F, 7.92066526F, 13.1158066F,
    18.3109474F, 23.5060883F, 28.7012329F, 33.8963776F, 39.0915184F, 44.2866554F,
    49.4817963F, 59.3538666F, 74.6162415F, 80.1344452F, 90.285F, 0.0F,
    0.763600111F, 1.52720022F, 3.05440044F, 6.95365191F, 12.3353539F,
    17.7170563F, 23.0987568F, 28.4804573F, 33.8621597F, 39.2438622F, 44.6255608F,
    50.0145454F, 61.1669197F, 75.770668F, 82.3047409F, 91.5340805F, 0.0F,
    0.670429051F, 1.3408581F, 2.6817162F, 5.74887705F, 11.2747335F, 16.8005924F,
    22.3264484F, 27.8523045F, 33.3781624F, 38.9040222F, 44.4298782F, 49.9557343F,
    61.4447632F, 76.0074539F, 83.0666F, 92.059166F, 0.0F, 0.579916596F,
    1.15983319F, 2.31966639F, 4.63933277F, 9.75363827F, 15.3824482F, 21.0112629F,
    26.6400795F, 32.268898F, 37.8977089F, 43.5265236F, 49.1553383F, 59.5683098F,
    75.4129715F, 82.0835571F, 91.6706F, 0.0F, 0.558785915F, 1.11757183F,
    2.23514366F, 4.47028732F, 9.25783253F, 14.8381634F, 20.4184914F, 25.9988213F,
    31.5791531F, 37.159481F, 42.7398071F, 48.3201408F, 57.8009338F, 73.4423904F,
    80.1222534F, 90.6214676F, 0.0F, 0.535331249F, 1.0706625F, 2.141325F,
    4.28265F, 8.74183273F, 14.3686752F, 19.9955139F, 25.6223507F, 31.2491932F,
    36.8760338F, 42.5028725F, 48.129715F, 57.5131035F, 73.1501846F, 80.0204544F,
    90.7585373F, 0.0F, 0.477472275F, 0.954944551F, 1.9098891F, 3.8197782F,
    7.12996149F, 12.7050915F, 18.2802238F, 23.8553524F, 29.4304829F, 35.0056152F,
    40.5807457F, 46.15588F, 53.4620209F, 66.9184189F, 77.8812714F, 100.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KtDTRR_k_PdlPctVirtual_Track_Boost[289] =
{
    0.0F, 1.18771553F, 2.37543106F, 4.75086212F, 8.53875F, 11.9831247F,
    15.8083324F, 19.4718742F, 22.9162483F, 26.3606262F, 29.805F, 33.6104164F,
    38.15625F, 43.8968773F, 49.4187317F, 54.6885452F, 65.1062546F, 0.0F,
    0.71714443F, 1.43428886F, 2.86857772F, 5.73715544F, 9.81338882F, 14.2173119F,
    18.7511425F, 22.8646774F, 27.3504848F, 32.260807F, 38.169487F, 44.5527458F,
    50.5782F, 57.9825668F, 70.7738495F, 90.8329391F, 0.0F, 0.865619063F,
    1.73123813F, 3.46247625F, 7.36161184F, 12.5012379F, 18.0602131F, 22.7694206F,
    28.6675F, 34.9861488F, 41.3047943F, 47.6234398F, 53.9420929F, 60.5214844F,
    73.7381439F, 90.8980331F, 98.8372345F, 0.0F, 0.979485929F, 1.95897186F,
    3.91794372F, 8.909729F, 15.1193447F, 21.3289604F, 27.5385742F, 33.748188F,
    39.9578056F, 46.1674156F, 52.3770294F, 58.5866508F, 69.592514F, 87.0176239F,
    93.6134415F, 102.052277F, 0.0F, 1.12044871F, 2.24089742F, 4.48179483F,
    10.0459728F, 16.1646385F, 22.2833042F, 28.4019661F, 34.5206337F, 40.6392975F,
    46.7579651F, 52.8766289F, 58.9952927F, 70.2279129F, 87.6978531F, 93.9789124F,
    102.718781F, 0.0F, 1.161412F, 2.322824F, 4.645648F, 10.3167696F, 16.4098682F,
    22.5029678F, 28.5960693F, 34.689167F, 40.7822647F, 46.8753662F, 52.9684677F,
    59.0615616F, 70.3093109F, 87.7432785F, 94.0083F, 102.712753F, 0.0F,
    1.21140802F, 2.42281604F, 4.84563208F, 10.6221905F, 16.6898785F, 22.7575645F,
    28.8252563F, 34.8929405F, 40.9606285F, 47.0283127F, 53.0960045F, 59.1636925F,
    70.4627533F, 87.8971863F, 94.5512543F, 103.401527F, 0.0F, 1.17060757F,
    2.34121513F, 4.68243027F, 10.2547369F, 16.1754894F, 22.0962391F, 28.0169926F,
    33.9377441F, 39.8584976F, 45.7792549F, 51.7000084F, 57.6207542F, 67.0830231F,
    82.386795F, 93.3830185F, 102.607536F, 0.0F, 1.17043424F, 2.34086847F,
    4.68173695F, 10.1404028F, 15.9035759F, 21.666748F, 27.4299183F, 33.1930885F,
    38.9562607F, 44.7194366F, 50.482605F, 56.2457809F, 64.0179062F, 77.3163605F,
    91.5352936F, 98.5969315F, 0.0F, 1.09632349F, 2.19264698F, 4.38529396F,
    9.75101185F, 15.6881227F, 21.6252346F, 27.5623474F, 33.4994583F, 39.4365692F,
    45.3736763F, 51.3107834F, 57.2479F, 66.3700256F, 81.3663559F, 93.059227F,
    101.992676F, 0.0F, 1.04325438F, 2.08650875F, 4.1730175F, 9.50479794F,
    15.7389679F, 21.9731369F, 28.2073059F, 34.4414787F, 40.6756516F, 46.9098206F,
    53.1439857F, 59.3781548F, 71.2246399F, 89.5394897F, 96.1613312F, 108.342F,
    0.0F, 0.916320145F, 1.83264029F, 3.66528058F, 8.34438229F, 14.8024244F,
    21.2604675F, 27.7185078F, 34.176548F, 40.6345901F, 47.0926361F, 53.5506744F,
    60.0174561F, 73.4003067F, 90.9248047F, 98.765686F, 109.840897F, 0.0F,
    0.804514885F, 1.60902977F, 3.21805954F, 6.89865255F, 13.5296803F,
    20.1607113F, 26.7917385F, 33.4227638F, 40.0537949F, 46.6848259F, 53.3158531F,
    59.9468803F, 73.7337189F, 91.2089462F, 99.6799164F, 110.471F, 0.0F,
    0.695899904F, 1.39179981F, 2.78359962F, 5.56719923F, 11.7043657F,
    18.4589386F, 25.2135162F, 31.9680958F, 38.7226791F, 45.4772491F, 52.2318268F,
    58.9864044F, 71.4819717F, 90.4955673F, 98.500267F, 110.004723F, 0.0F,
    0.670543075F, 1.34108615F, 2.6821723F, 5.3643446F, 11.1093988F, 17.8057957F,
    24.5021896F, 31.1985855F, 37.8949852F, 44.5913773F, 51.2877693F, 57.984169F,
    69.3611221F, 88.130867F, 96.1467056F, 108.745758F, 0.0F, 0.642397523F,
    1.28479505F, 2.56959F, 5.13918F, 10.4901991F, 17.2424107F, 23.9946175F,
    30.7468204F, 37.4990311F, 44.2512398F, 51.0034485F, 57.7556572F, 69.0157242F,
    87.78022F, 96.0245438F, 108.910248F, 0.0F, 0.572966754F, 1.14593351F,
    2.29186702F, 4.58373404F, 8.55595398F, 15.24611F, 21.9362679F, 28.6264229F,
    35.3165779F, 42.0067368F, 48.6968956F, 55.3870544F, 64.1544266F, 80.3021F,
    93.4575272F, 120.0F
} ;                                    /* Referenced by: '<S128>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KtDTRR_k_PdlPctVirtual_Valet[289] =
{
    0.0F, 0.498840511F, 0.997681F, 1.79313743F, 2.51645613F, 3.31974983F,
    4.08909369F, 4.81241226F, 5.53573132F, 6.25905F, 7.05818748F, 8.01281261F,
    9.21834373F, 10.3779335F, 11.4845943F, 13.6723127F, 18.3503914F, 0.0F,
    0.301200658F, 0.602401316F, 1.20480263F, 2.06081176F, 2.98563552F, 3.93774F,
    4.80158234F, 5.7436018F, 6.77477F, 8.01559258F, 9.35607719F, 10.6214228F,
    12.1763391F, 14.8625088F, 19.0749168F, 22.9275455F, 0.0F, 0.363560021F,
    0.727120042F, 1.54593849F, 2.62525988F, 3.79264474F, 4.78157854F,
    6.02017498F, 7.3470912F, 8.67400646F, 10.0009222F, 11.3278399F, 12.7095118F,
    15.4850101F, 19.0885868F, 20.7558193F, 23.5245495F, 0.0F, 0.411384106F,
    0.822768211F, 1.87104309F, 3.17506242F, 4.47908163F, 5.78310061F,
    7.08711958F, 8.39113903F, 9.69515705F, 10.999176F, 12.3031969F, 14.6144285F,
    18.2737F, 19.658823F, 21.4309788F, 23.6134663F, 0.0F, 0.470588475F,
    0.941176951F, 2.10965419F, 3.39457417F, 4.6794939F, 5.96441269F, 7.2493329F,
    8.53425217F, 9.81917191F, 11.1040926F, 12.3890114F, 14.7478619F, 18.4165497F,
    19.7355709F, 21.5709438F, 23.600956F, 0.0F, 0.487793058F, 0.975586116F,
    2.16652155F, 3.44607234F, 4.72562361F, 6.00517464F, 7.28472471F, 8.56427574F,
    9.84382725F, 11.1233778F, 12.4029284F, 14.7649555F, 18.4260883F, 19.7417431F,
    21.5696793F, 23.584507F, 0.0F, 0.508791387F, 1.01758277F, 2.23066F,
    3.50487447F, 4.7790885F, 6.0533042F, 7.32751799F, 8.60173225F, 9.87594604F,
    11.1501608F, 12.4243755F, 14.7971792F, 18.4584103F, 19.8557625F, 21.7143211F,
    23.5778446F, 0.0F, 0.491655171F, 0.983310342F, 2.15349483F, 3.39685273F,
    4.64021F, 5.88356829F, 7.12692642F, 8.37028503F, 9.61364365F, 10.8570013F,
    12.100359F, 14.0874348F, 17.3012276F, 19.6104336F, 21.5475826F, 23.5655022F,
    0.0F, 0.491582364F, 0.983164728F, 2.12948465F, 3.33975101F, 4.55001736F,
    5.76028299F, 6.97054815F, 8.18081474F, 9.39108181F, 10.601347F, 11.811614F,
    13.4437599F, 16.2364349F, 19.2224121F, 20.7053547F, 23.2357197F, 0.0F,
    0.460455865F, 0.920911729F, 2.04771256F, 3.29450583F, 4.54129934F,
    5.78809261F, 7.03488588F, 8.28167915F, 9.52847195F, 10.7752647F, 12.0220585F,
    13.937705F, 17.086935F, 19.5424366F, 21.4184628F, 23.5315113F, 0.0F,
    0.438166857F, 0.876333714F, 1.99600768F, 3.30518317F, 4.6143589F,
    5.92353439F, 7.23271084F, 8.54188728F, 9.85106277F, 11.1602373F, 12.4694128F,
    14.9571743F, 18.8032932F, 20.1938801F, 22.7518215F, 24.2210083F, 0.0F,
    0.384854466F, 0.769708931F, 1.75232029F, 3.10850906F, 4.46469831F,
    5.82088661F, 7.17707539F, 8.53326416F, 9.88945293F, 11.2456417F, 12.6036654F,
    15.4140635F, 19.0942078F, 20.7407951F, 23.0665874F, 24.5665836F, 0.0F,
    0.337896228F, 0.675792456F, 1.448717F, 2.84123278F, 4.23374939F, 5.62626505F,
    7.01878071F, 8.41129684F, 9.80381393F, 11.1963291F, 12.5888453F, 15.4840803F,
    19.1538792F, 20.9327831F, 23.1989098F, 24.8455906F, 0.0F, 0.292277962F,
    0.584555924F, 1.16911185F, 2.45791674F, 3.87637687F, 5.29483843F, 6.7133F,
    8.1317625F, 9.5502224F, 10.9686842F, 12.387145F, 15.0112143F, 19.0040684F,
    20.6850567F, 23.1009922F, 25.1808758F, 0.0F, 0.281628102F, 0.563256204F,
    1.12651241F, 2.33297372F, 3.73921728F, 5.14545965F, 6.55170298F, 7.95794678F,
    9.36418915F, 10.7704315F, 12.1766758F, 14.565835F, 18.5074825F, 20.1908073F,
    22.8366089F, 25.2F, 0.0F, 0.269806951F, 0.539613903F, 1.07922781F,
    2.20294189F, 3.62090611F, 5.03886938F, 6.45683241F, 7.87479687F, 9.29276085F,
    10.7107239F, 12.1286879F, 14.4933023F, 18.4338474F, 20.1651554F, 22.871151F,
    25.2F, 0.0F, 0.24064602F, 0.481292039F, 0.962584078F, 1.79675031F,
    3.20168304F, 4.6066165F, 6.011549F, 7.41648149F, 8.82141495F, 10.2263479F,
    11.6312819F, 13.4724293F, 16.8634415F, 19.6260796F, 25.2F, 25.2F
} ;                                    /* Referenced by: '<S118>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_BrkPrssConvTbl[10] =
{
    0.0F, 200.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1800.0F,
    2000.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_AccErr_Gain[2] =
{
    -100.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S219>/Vector'
                                        * '<S226>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_AccErr_GainInt
    [2] =
{
    -100.0F, 100.0F
} ;                                    /* Referenced by:
                                        * '<S223>/Vector'
                                        * '<S230>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_RoadSlpGain[2] =
{
    -1000.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S221>/Vector'
                                        * '<S228>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_SpdErr_Gain[2] =
{
    -1000.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S220>/Vector'
                                        * '<S227>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_SpdErr_GainInt
    [2] =
{
    -1000.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S224>/Vector'
                                        * '<S231>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_TrqLmtMax[2] =
{
    -1000.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S218>/Vector'
                                        * '<S225>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_CstCtrllr_TrqLmtMin[2] =
{
    -1000.0F, 1000.0F
} ;                                    /* Referenced by:
                                        * '<S222>/Vector'
                                        * '<S229>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcBrkOffsetMultTbl[9] =
{
    200.0F, 500.0F, 600.0F, 700.0F, 800.0F, 1000.0F, 1200.0F, 1800.0F, 2000.0F
} ;                                    /* Referenced by: '<S283>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl[17] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S681>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Boost[17]
    =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S682>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Camel[17]
    =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S683>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_K_PtcPdlPctTrqWhl_Camel_Boost[17] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_K_PtcPdlPctTrqWhl_Camel_Lim[17] =
{
    0.0F, 1.5625F, 3.125F, 4.6875F, 6.25F, 9.375F, 12.5F, 15.625F, 18.75F,
    21.875F, 25.0F, 28.125F, 31.25F, 37.5F, 43.75F, 53.125F, 62.5F
} ;                                    /* Referenced by: '<S685>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Drag[17] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S686>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_MudSand
    [17] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S687>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_OffRoad
    [17] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S688>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Power[17]
    =
{
    2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 60.0F, 70.0F, 85.0F, 100.0F, 100.1F
} ;                                    /* Referenced by: '<S689>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Range[17]
    =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S690>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Rock[16] =
{
    2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S691>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Snow[16] =
{
    2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S692>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Sport[16]
    =
{
    2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S693>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_K_PtcPdlPctTrqWhl_Sport_Boost[16] =
{
    2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S694>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Tow[16] =
{
    2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F,
    50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S695>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Track[17]
    =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S696>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_K_PtcPdlPctTrqWhl_Track_Boost[17] =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S697>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_PtcPdlPctTrqWhl_Valet[17]
    =
{
    0.0F, 2.5F, 5.0F, 7.5F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F,
    45.0F, 50.0F, 60.0F, 70.0F, 85.0F, 100.0F
} ;                                    /* Referenced by: '<S698>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_K_eCreepMult4RoadSlope[19] =
{
    -100.0F, -18.0F, -12.0F, -10.0F, -8.0F, -7.0F, -6.0F, -5.0F, -4.0F, 0.0F,
    4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 10.0F, 12.0F, 18.0F, 100.0F
} ;                                    /* Referenced by: '<S314>/Vector' */

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_AeCoast_MinTrqDTbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S467>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC0Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC1Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC1Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S484>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC2Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S485>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC2Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S486>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC3Tbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S487>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqAeC3Tbl_OPD[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S488>/Vector' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_1

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqDTbl[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S469>/Vector' */

#endif

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_MinTrqRTbl[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 110.0F
} ;                                    /* Referenced by: '<S452>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_OPDMinLDNormzPdlPct[11] =
{
    0.0F, 0.1F, 0.2F, 0.35F, 0.4F, 0.5F, 0.65F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S381>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_OPDMinLDStepPdlPctTrq[11]
    =
{
    0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S382>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_OPDMinLUNormzPdlPct[11] =
{
    0.0F, 0.1F, 0.2F, 0.35F, 0.4F, 0.5F, 0.65F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S387>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_OPDMinLUStepPdlPctTrq[11]
    =
{
    0.0F, 0.1F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.7F, 0.8F, 0.9F, 1.0F
} ;                                    /* Referenced by: '<S388>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_OPDMinTrqDTbl[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 35.0F, 50.0F, 70.0F, 100.0F, 130.0F
} ;                                    /* Referenced by:
                                        * '<S453>/Vector'
                                        * '<S489>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_OPDMinTrqRTbl[9] =
{
    -110.0F, -90.0F, -70.0F, -50.0F, -30.0F, -20.0F, -10.0F, -5.0F, 0.0F
} ;                                    /* Referenced by: '<S454>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PdlTrqBias[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S144>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PdlTrqBias_4Lo[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S145>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PdlTrqBias_High[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S146>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PdlTrqBias_Low[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S147>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PdlTrqBias_Std[9] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S148>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PtcPdlCcMinWhlTrq[8] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 50.0F, 70.0F, 90.0F
} ;                                    /* Referenced by: '<S343>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PtcPdlMaxWhlTrqGearRTbl[8]
    =
{
    0.0F, 20.0F, 35.0F, 45.0F, 55.0F, 75.0F, 100.0F, 110.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_M_PtcPdlMaxWhlTrqTbl[8] =
{
    0.0F, 20.0F, 35.0F, 45.0F, 55.0F, 75.0F, 100.0F, 110.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_a_CstCtrllrAccMax_A[10] =
{
    -1000.0F, -777.777771F, -555.555542F, -333.333344F, -111.111115F,
    111.111115F, 333.333344F, 555.555542F, 777.777771F, 1000.0F
} ;                                    /* Referenced by: '<S258>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_a_CstCtrllrAccMax_B[10] =
{
    -1000.0F, -777.777771F, -555.555542F, -333.333344F, -111.111115F,
    111.111115F, 333.333344F, 555.555542F, 777.777771F, 1000.0F
} ;                                    /* Referenced by: '<S261>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_a_CstCtrllrAccMin_A[10] =
{
    -1000.0F, -777.777771F, -555.555542F, -333.333344F, -111.111115F,
    111.111115F, 333.333344F, 555.555542F, 777.777771F, 1000.0F
} ;                                    /* Referenced by: '<S259>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_a_CstCtrllrAccMin_B[10] =
{
    -1000.0F, -777.777771F, -555.555542F, -333.333344F, -111.111115F,
    111.111115F, 333.333344F, 555.555542F, 777.777771F, 1000.0F
} ;                                    /* Referenced by: '<S262>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_a_CstCtrllrAccTgt_A[10] =
{
    -1000.0F, -777.777771F, -555.555542F, -333.333344F, -111.111115F,
    111.111115F, 333.333344F, 555.555542F, 777.777771F, 1000.0F
} ;                                    /* Referenced by: '<S260>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_a_CstCtrllrAccTgt_B[10] =
{
    -1000.0F, -777.777771F, -555.555542F, -333.333344F, -111.111115F,
    111.111115F, 333.333344F, 555.555542F, 777.777771F, 1000.0F
} ;                                    /* Referenced by: '<S263>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_dPct_PtcPdlTrqRateLD[11] =
{
    0.0F, 0.01F, 0.05F, 0.15F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.85F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S586>/Vector'
                                        * '<S608>/Vector'
                                        * '<S656>/Vector'
                                        * '<S676>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_dPct_PtcPdlTrqRateLU[11] =
{
    0.0F, 0.01F, 0.05F, 0.15F, 0.2F, 0.3F, 0.4F, 0.5F, 0.6F, 0.85F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S587>/Vector'
                                        * '<S609>/Vector'
                                        * '<S657>/Vector'
                                        * '<S677>/Vector'
                                        */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_CstCtrllr_GrdMin_Fast[10]
    =
{
    0.0F, 11.1111107F, 22.2222214F, 33.3333321F, 44.4444427F, 55.5555573F,
    66.6666641F, 77.7777786F, 88.8888855F, 100.0F
} ;                                    /* Referenced by: '<S207>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Boost[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S112>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Camel[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_k_PdlPctVirtual_Camel_Boost[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S114>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Drag[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_MudSand[17]
    =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_OffRoad[17]
    =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Power[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S119>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_PwrLimActv
    [17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Range[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Rock[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S122>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Snow[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S123>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Sport[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_k_PdlPctVirtual_Sport_Boost[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Tow[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Track[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KxDTRR_k_PdlPctVirtual_Track_Boost[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S128>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KxDTRR_k_PdlPctVirtual_Valet[17] =
{
    0.0F, 0.0625F, 0.125F, 0.1875F, 0.25F, 0.3125F, 0.375F, 0.4375F, 0.5F,
    0.5625F, 0.625F, 0.6875F, 0.75F, 0.8125F, 0.875F, 0.9375F, 1.0F
} ;                                    /* Referenced by: '<S118>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcBrkOffsetMultTbl[2] =
{
    0.0F, 1.0F
} ;                                    /* Referenced by: '<S283>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S681>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Boost[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S682>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Camel[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S683>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_K_PtcPdlPctTrqWhl_Camel_Boost[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S684>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_K_PtcPdlPctTrqWhl_Camel_Lim[17] =
{
    0.0F, 1.875F, 3.125F, 4.375F, 5.625F, 6.875F, 11.25F, 13.75F, 17.5F, 20.0F,
    26.25F, 31.25F, 37.5F, 43.75F, 50.0F, 56.25F, 62.5F
} ;                                    /* Referenced by: '<S685>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Drag[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S686>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_MudSand
    [17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S687>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_OffRoad
    [17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S688>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Power[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S689>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Range[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S690>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Rock[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S691>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Snow[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S692>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Sport[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S693>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_K_PtcPdlPctTrqWhl_Sport_Boost[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S694>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Tow[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S695>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Track[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S696>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_K_PtcPdlPctTrqWhl_Track_Boost[17] =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S697>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_K_PtcPdlPctTrqWhl_Valet[17]
    =
{
    0.0F, 3.0F, 5.0F, 7.0F, 9.0F, 11.0F, 18.0F, 22.0F, 28.0F, 32.0F, 42.0F,
    50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S698>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_M_PtcPdlMaxWhlTrqGearRTbl[3]
    =
{
    0.0F, 20.0F, 35.0F
} ;                                    /* Referenced by: '<S155>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_M_PtcPdlMaxWhlTrqTbl[8] =
{
    0.0F, 20.0F, 35.0F, 45.0F, 55.0F, 65.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S156>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S111>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Boost[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S112>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Camel[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S113>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_k_PdlPctVirtual_Camel_Boost[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S114>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Drag[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_MudSand[17]
    =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S116>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_OffRoad[17]
    =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S117>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Power[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S119>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_PwrLimActv
    [17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S120>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Range[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S121>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Rock[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S122>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Snow[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S123>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Sport[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S124>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_k_PdlPctVirtual_Sport_Boost[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Tow[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Track[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT)
    KyDTRR_k_PdlPctVirtual_Track_Boost[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S128>/Vector' */

static volatile CONST(float32, DTRR_VAR_INIT) KyDTRR_k_PdlPctVirtual_Valet[17] =
{
    0.0F, 9.0F, 19.0F, 28.0F, 37.0F, 47.0F, 56.0F, 65.0F, 75.0F, 84.0F, 93.0F,
    103.0F, 112.0F, 121.0F, 131.0F, 140.0F, 160.0F
} ;                                    /* Referenced by: '<S118>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_DTRR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DTRR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, DTRR_VAR_INIT) VaDTRC_M_PtcPdlMinWhlTrqFilt[2];/* '<S167>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VaDTRR_M_DrvrIntndedAxleTorqRaw[2];/* '<S86>/Gain' */
static VAR(float32, DTRR_VAR_INIT) VeDTRC_M_PtcPdlMaxWhlTrq;/* '<S131>/switch4' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRC_b_Lv2RdPrfmActive;/* '<S83>/Logical5' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRC_b_OPDInhibit;/* '<S361>/Logical1' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRC_b_OPDInhibit_HMI;/* '<S415>/Logical1' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRC_b_OPD_Selection;/* '<S362>/Logical1' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRC_b_OPD_SelectionFinal;/* '<S362>/Switch' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRC_b_VehStndStillReqOPD;/* '<S367>/Logical1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRI_M_ACCTrq_BSM;/* '<S7>/Switch13' */
static VAR(float32, DTRR_VAR_INIT) VeDTRI_M_WheelMin4ECM;/* '<S7>/Switch1' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_ACCTrqEnabled_BSM;/* '<S7>/Switch12' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_ACCTrqEnabled_BSMFA;/* '<S7>/Switch7' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_ACCTrq_BSMFA;/* '<S7>/Switch6' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_ASL_Active;/* '<S7>/Switch14' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_AeCoastReady;/* '<S7>/Switch3' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_AeCoastReadyFA;/* '<S7>/Switch2' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_CC_Type;/* '<S7>/Switch16' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_InhibitCruise;/* '<S7>/Switch8' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_MinCreepWheelTrq_Enable;/* '<S7>/Switch15' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_OnePedalDriveDsbl;/* '<S7>/Switch5' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_RunCrankActiveAnalog;/* '<S7>/Switch9' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_VehSpdFA;/* '<S7>/Switch20' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRI_b_VehSpdVSOSigFailSts;/* '<S7>/Switch10' */
static VAR(TePLTR_e_ACCSystemSts, DTRR_VAR_INIT) VeDTRI_e_ACCSystemSts;/* '<S7>/Switch4' */
static VAR(TePLTR_e_AdaptiveCruiseCtrl, DTRR_VAR_INIT) VeDTRI_e_ProxiACC;/* '<S7>/Switch11' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_Cnt_ACC_TrqFailedCntIn;/* '<S13>/Logical3' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_Cnt_ACC_TrqRangeChk;/* '<S13>/Logical1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_K_NormzPdlPctLD;/* '<S436>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_K_NormzPdlPctLU;/* '<S437>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_ACCWhlTrqClpd;/* '<S38>/Switch' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_ACCWhlTrqClpd_in;/* '<S14>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_ACCWhlTrqLmtd;/* '<S14>/Switch2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_ACCWhlTrqRamped;/* '<S14>/Switch' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_AeCoastMinTrqOfst;
                               /* '<S187>/SigConvForSigProp_Variant_Source_0' */

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_AggressiveMinTrqRaw;/* '<S456>/Merge' */

#endif

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_CreepArbMinTrq;/* '<S310>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_CreepOfst;/* '<S164>/switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_CreepReqMinTrq;/* '<S273>/switch12' */

#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_DelCurr2CamelWhlTrqReq;/* '<S507>/Abs1' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_M_DelCurr2Level0TrqReq;/* '<S456>/Relational Operator4' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_M_DelCurr2Level1TrqReq;/* '<S456>/Relational Operator5' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_M_DelCurr2Level2TrqReq;/* '<S456>/Relational Operator6' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_M_DelCurr2Level3TrqReq;/* '<S456>/Relational Operator7' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_DelCurr2NormalWhlTrqReq;/* '<S507>/Abs2' */

#endif

#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_DelCurr2RangeWhlTrqReq;/* '<S507>/Abs' */

#endif

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_DrvLnTrqRqMod;/* '<S10>/Product' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_FullPedalAxlTorqFiltd;/* '<S134>/Gain' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_MinPdlTrqBiased;/* '<S130>/Sum4' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_MinPdlTrqNomBiased;/* '<S130>/Sum3' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_MinTrqArb;/* '<S185>/switch13' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_MinTrqArbShaped;/* '<S356>/switch3' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_MinTrqDTbl;
                              /* '<S187>/SigConvForSigProp_Variant_Source1_0' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_MinTrqFinal;/* '<S373>/Switch' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_NomMinTrq;/* '<S187>/switch2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_NormalMinTrq_Out;/* '<S298>/Sum3' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_NormalMinTrq_PN_arb;/* '<S186>/switch10' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_OPDMinTrq;/* '<S187>/switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_OPDMinTrqLD;/* '<S185>/switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_OPDMinTrqLU;/* '<S185>/switch2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_OPDMinTrq_OPDoff;/* '<S374>/switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PdlMinMaxDeltaTrq;/* '<S130>/Sum2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PdlTrqBias;/* '<S130>/switch7' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PdlTrqReq;/* '<S130>/switch2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PdlTrqReqBiased;/* '<S130>/Sum1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlCcMinWhlTrq;/* '<S183>/Clip I5' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlMaxWhlTrqGearRTbl;/* '<S155>/Vector' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlMaxWhlTrqTbl;/* '<S156>/Vector' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlMinWhlTrq;/* '<S164>/Sum1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlMinWhlTrqNoLv1Offset;/* '<S181>/switch8' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlMinWhlTrqRamped;/* '<S340>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlMinWhlTrqRaw;/* '<S181>/switch9' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlWhlTrqReq;/* '<S130>/switch5' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlWhlTrqReqNom;/* '<S130>/xx1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcPdlWhlTrqReqRaw;/* '<S130>/xx4' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_PtcWhlCCTrqReq;/* '<S90>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_ZeroPedalAxlTorqFiltd;/* '<S135>/Gain' */

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_eCoastLevel0TrqReq;/* '<S482>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_eCoastLevel1TrqReq;/* '<S483>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_eCoastLevel2TrqReq;/* '<S485>/Vector' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_eCoastLevel3TrqReq;/* '<S487>/Vector' */

#endif

static VAR(float32, DTRR_VAR_INIT) VeDTRR_M_eCreepWhlTrq;/* '<S273>/Multiply2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_P_PtcPdlMaxPwr_Out;
                           /* '<S131>/Max wheel power for this vehicle speed' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_P_PtcPdlMinPwr_Out;
                           /* '<S164>/Max wheel power for this vehicle speed' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_P_PtcPdlPwrReq_Out;
                           /* '<S130>/Max wheel power for this vehicle speed' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_CalculatedPctTrq;/* '<S129>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_LV1LV2AccelPdlVirtActPosn;/* '<S87>/Switch5' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_MaxPdlPctFrozen;/* '<S364>/MinMax4' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_MinPdlPctFrozen;/* '<S364>/MinMax1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PctPdlDeltaTrq;/* '<S547>/Abs2' */

#if Rte_SysCon_Variant_DTRR_FUNC_3

static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PctPdlDeltaTrq_x250;/* '<S668>/Abs2' */

#endif

static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PctPdlTrqBlndRequest;/* '<S497>/Merge2' */

#if Rte_SysCon_Variant_DTRR_FUNC_3

static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PctPdlTrqBlndRequest_x250;/* '<S500>/Merge' */

#endif

static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PdlPctFiltTrq;/* '<S423>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PdlPctMax;/* '<S364>/MinMax2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PdlPctMin;/* '<S364>/MinMax3' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PdlPctUnFiltTrq;/* '<S363>/Switch' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PtcPdlPctTrq_Camel;/* '<S501>/Switch3' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PtcPdlPctTrq_Camel_Lim;/* '<S685>/Vector' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PtcPdlPctTrq_Normal;/* '<S501>/Switch1' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PtcPdlPctTrq_OffRoad;/* '<S688>/Vector' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PtcPdlPctTrq_Power;/* '<S689>/Vector' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_PtcPdlPctTrq_Range;/* '<S690>/Vector' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_Pct_VirtualAccelPdlPosn;/* '<S87>/Switch7' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ACCRampSetCondA;/* '<S39>/Logical3' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ACCRampSetCondB;/* '<S39>/Logical7' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ACCTrqEnabled_BSM_Arb;/* '<S12>/Logical5' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ACCWhlTrqClpd;/* '<S14>/Logical5' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ACC_Disabled;/* '<S11>/Logical1' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ACC_TrqFailed;/* '<S30>/Comparison' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_ConstantPdlActv;/* '<S364>/Logical2' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_InPlantMode;/* '<S7>/Logical1' */

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_MinTrqLev0Actv;/* '<S456>/Logical Operator' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_MinTrqLev1Actv;/* '<S456>/Logical Operator3' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_MinTrqLev2Actv;/* '<S456>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_MinTrqLev3Actv;/* '<S456>/Logical Operator4' */

#endif

static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_OPDActvtMaxFlag;/* '<S364>/Comparison4' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_OPDActvtMinFlag;/* '<S364>/Comparison5' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_OPDEntryCond;/* '<S360>/Logical5' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_OPDExitCond;/* '<S360>/Logical4' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_OPEN_PVS;/* '<S164>/Comparison' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_eCreepAvail;/* '<S274>/Logical8' */
static VAR(boolean, DTRR_VAR_INIT) VeDTRR_b_eCreepEna;/* '<S274>/Logical Operator2' */
static VAR(float32, DTRR_VAR_INIT) VeDTRR_v_PtcPdlWhlTrqKPH;/* '<S699>/Switch1' */

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DTRR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DTRR
#include "MemMap.h"

CONST(ConstB_DTRR_ac_T, DTRR_VAR_INIT) DTRR_ac_ConstB =
{
    CePTAR_e_Inactive,                 /* '<S762>/Const12' */
    CePTAR_e_Inactive,                 /* '<S762>/Const39' */
    CeDTRR_e_Potential,                /* '<S762>/Const13' */
    CeDTRR_e_Potential,                /* '<S762>/Const14' */
    CeDTRR_e_Temp_Unavail,             /* '<S762>/Const47' */
    CeDTRR_e_Temp_Unavail,             /* '<S762>/Constant' */
    CeDTRR_e_Off,                      /* '<S762>/Const38' */
    CeDMIR_e_Normal                    /* '<S762>/Const36' */
};

#define STOP_SEC_CONST_UNSPECIFIED_DTRR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DTRR
#include "MemMap.h"

CONST(ConstP_DTRR_ac_T, DTRR_VAR_INIT) DTRR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S111>/Vector'
     *   '<S112>/Vector'
     *   '<S113>/Vector'
     *   '<S114>/Vector'
     *   '<S115>/Vector'
     *   '<S116>/Vector'
     *   '<S117>/Vector'
     *   '<S118>/Vector'
     *   '<S119>/Vector'
     *   '<S120>/Vector'
     *   '<S121>/Vector'
     *   '<S122>/Vector'
     *   '<S123>/Vector'
     *   '<S124>/Vector'
     *   '<S125>/Vector'
     *   '<S126>/Vector'
     *   '<S127>/Vector'
     *   '<S128>/Vector'
     *   '<S681>/Vector'
     *   '<S682>/Vector'
     *   '<S683>/Vector'
     *   '<S684>/Vector'
     *   '<S685>/Vector'
     *   '<S686>/Vector'
     *   '<S687>/Vector'
     *   '<S688>/Vector'
     *   '<S689>/Vector'
     *   '<S690>/Vector'
     *   '<S696>/Vector'
     *   '<S697>/Vector'
     *   '<S698>/Vector'
     */
    {
        16U, 16U
    },

    /* Computed Parameter: Vector_maxIndex
     * Referenced by: '<S155>/Vector'
     */
    {
        7U, 2U
    },

    /* Computed Parameter: Vector_maxIndex_j
     * Referenced by: '<S156>/Vector'
     */
    {
        7U, 7U
    },

    /* Computed Parameter: Vector_maxIndex_i
     * Referenced by: '<S283>/Vector'
     */
    {
        8U, 1U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S691>/Vector'
     *   '<S692>/Vector'
     *   '<S693>/Vector'
     *   '<S694>/Vector'
     *   '<S695>/Vector'
     */
    {
        15U, 16U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_DTRR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DTRR
#include "MemMap.h"

VAR(B_DTRR_ac_T, DTRR_VAR_INIT) DTRR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DTRR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DTRR
#include "MemMap.h"

VAR(DW_DTRR_ac_T, DTRR_VAR_INIT) DTRR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DTRR
#include "MemMap.h"

static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_Mode1(VAR(float32, AUTOMATIC)
    rtu_road_slope, VAR(float32, AUTOMATIC) rtu_veh_spd, VAR(float32, AUTOMATIC)
    rtu_acc_err_raw, VAR(float32, AUTOMATIC) rtu_spd_err_raw, P2VAR(float32,
    AUTOMATIC, DTRR_VAR_INIT) rty_Output, P2VAR(float32, AUTOMATIC,
    DTRR_VAR_INIT) rty_Output_k, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT)
    rty_Output_c, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Output_a, P2VAR
    (float32, AUTOMATIC, DTRR_VAR_INIT) rty_Output_e, P2VAR(float32, AUTOMATIC,
    DTRR_VAR_INIT) rty_Output_p, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT)
    rty_Output_kf);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_Normal(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq_Normal, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Normal);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Sport(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Sport);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Rock(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Rock);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Snow(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Snow);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_MudSand(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_MudSand);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Tow(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Eco_Tow);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Eco(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Eco);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_Normal_p(VAR
    (TeDMIR_e_DriveStyleSts, AUTOMATIC) rtu_CeDMIR_e_Normal, P2VAR
    (TeDMIR_e_DriveStyleSts, AUTOMATIC, DTRR_VAR_INIT) rty_DrvMdNormal);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_Eco(VAR(TeDMIR_e_DriveStyleSts,
    AUTOMATIC) rtu_CeDMIR_e_Eco, P2VAR(TeDMIR_e_DriveStyleSts, AUTOMATIC,
    DTRR_VAR_INIT) rty_DrvMdEco);
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_PropDrvMd_Track(VAR(float32,
    AUTOMATIC) rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Track);

#if Rte_SysCon_Variant_DTRR_FUNC_2 || Rte_SysCon_Variant_DTRR_FUNC_3

static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_EcoPwrLim(VAR(float32,
    AUTOMATIC) rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT)
    rty_Eco_PwrLim);

#endif

/* Forward declaration for local functions */
static void DTRR_ac_enter_atomic_SNOW(void);
static void DTRR_ac_enter_atomic_SPORT(void);
static void DTRR_ac_enter_atomic_MUDSAND(void);
static void DTRR_ac_enter_atomic_TRACK(void);
static void DTRR_ac_enter_atomic_ECO(void);
static void DTRR_ac_enter_atomic_NORMAL(void);
static void DTRR_ac_enter_atomic_DRAG(void);
static void DTRR_ac_enter_atomic_TOW(void);
static void DTRR_ac_enter_atomic_VALET(void);
static void DTRR_ac_enter_atomic_ROCK(void);
static void DTRR_ac_MUDSAND(void);
static void DTRR_ac_ROCK(void);
static void DTRR_ac_SNOW_g(void);
static void DTRR_ac_SPORT_b(void);
static void DTRR_ac_TRACK(void);
static void DTRR_ac_TOW(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h);
static void DTRR_ac_SNOW(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h);
static void DTRR_ac_SPORT(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h);
static void DTRR_ac_ELETRIC(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h);

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_NORMAL_m(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_SPORT_b(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_TOW_n(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_SNOW_k(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_MUDSAND_a(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_ROCK_b(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_TRACK_e(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_DRAG_j(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_VALET_c(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_VALET(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_SNOW_a(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_SPORT_e(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_TOW_n(void);

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_TRACK_i(void);

#endif

/*
 * Output and update for action system:
 *    '<S188>/Mode1'
 *    '<S188>/Mode2'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_Mode1(VAR(float32, AUTOMATIC)
    rtu_road_slope, VAR(float32, AUTOMATIC) rtu_veh_spd, VAR(float32, AUTOMATIC)
    rtu_acc_err_raw, VAR(float32, AUTOMATIC) rtu_spd_err_raw, P2VAR(float32,
    AUTOMATIC, DTRR_VAR_INIT) rty_Output, P2VAR(float32, AUTOMATIC,
    DTRR_VAR_INIT) rty_Output_k, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT)
    rty_Output_c, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Output_a, P2VAR
    (float32, AUTOMATIC, DTRR_VAR_INIT) rty_Output_e, P2VAR(float32, AUTOMATIC,
    DTRR_VAR_INIT) rty_Output_p, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT)
    rty_Output_kf)
{
    /* Lookup_n-D: '<S218>/Vector' */
    *rty_Output_k = look1_iflf_binlcapw(rtu_veh_spd, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_TrqLmtMax[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_TrqLmtMax[0])), 1U);

    /* Lookup_n-D: '<S219>/Vector' */
    *rty_Output_a = look1_iflf_binlcapw(rtu_acc_err_raw, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_AccErr_Gain[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_AccErr_Gain[0])), 1U);

    /* Lookup_n-D: '<S220>/Vector' */
    *rty_Output_e = look1_iflf_binlcapw(rtu_spd_err_raw, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_SpdErr_Gain[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_SpdErr_Gain[0])), 1U);

    /* Lookup_n-D: '<S221>/Vector' */
    *rty_Output = look1_iflf_binlcapw(rtu_road_slope, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_RoadSlpGain[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_RoadSlpGain[0])), 1U);

    /* Lookup_n-D: '<S222>/Vector' */
    *rty_Output_c = look1_iflf_binlcapw(rtu_veh_spd, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_TrqLmtMin[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_TrqLmtMin[0])), 1U);

    /* Lookup_n-D: '<S223>/Vector' */
    *rty_Output_p = look1_iflf_binlcapw(rtu_acc_err_raw, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_AccErr_GainInt[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_AccErr_GainInt[0])), 1U);

    /* Lookup_n-D: '<S224>/Vector' */
    *rty_Output_kf = look1_iflf_binlcapw(rtu_spd_err_raw, ((const float32 *)
        &(KxDTRR_K_CstCtrllr_SpdErr_GainInt[0])), ((const float32 *)
        &(KtDTRR_K_CstCtrllr_SpdErr_GainInt[0])), 1U);
}

/*
 * Output and update for action system:
 *    '<S496>/DrvMd_Normal'
 *    '<S497>/DrvMd_Normal_Map'
 *    '<S497>/PropDrvMd_Normal_Map'
 *    '<S498>/DrvMd_Normal'
 *    '<S499>/PropDrvMd_Normal_Map'
 *    '<S500>/DrvMd_Normal'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_Normal(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq_Normal, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Normal)
{
    /* Inport: '<S509>/PdlPctTrq_Normal' */
    *rty_Normal = rtu_PdlPctTrq_Normal;
}

/*
 * Output and update for action system:
 *    '<S497>/TrrMd_Sport'
 *    '<S497>/PropDrvMd_Sport'
 *    '<S498>/DrvMd_Sport'
 *    '<S499>/PropDrvMd_Sport'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Sport(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Sport)
{
    /* Inport: '<S581>/PdlPctTrq' */
    *rty_Sport = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S497>/TrrMd_Rock'
 *    '<S497>/PropDrvMd_Rock'
 *    '<S499>/PropDrvMd_Rock'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Rock(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Rock)
{
    /* Inport: '<S579>/PdlPctTrq' */
    *rty_Rock = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S497>/TrrMd_Snow'
 *    '<S497>/PropDrvMd_Snow'
 *    '<S499>/PropDrvMd_Snow'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Snow(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Snow)
{
    /* Inport: '<S580>/PdlPctTrq' */
    *rty_Snow = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S497>/TrrMd_MudSand'
 *    '<S497>/PropDrv Md_MudSand'
 *    '<S499>/PropDrv Md_MudSand'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_MudSand(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_MudSand)
{
    /* Inport: '<S578>/PdlPctTrq' */
    *rty_MudSand = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S497>/TrrMd_Tow'
 *    '<S497>/PropDrvMd_Tow'
 *    '<S499>/PropDrvMd_Tow'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Tow(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Eco_Tow)
{
    /* Inport: '<S582>/PdlPctTrq' */
    *rty_Eco_Tow = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S497>/TrrMd_Eco'
 *    '<S497>/PropDrvMd_Eco'
 *    '<S498>/DrvMd_Eco'
 *    '<S499>/PropDrvMd_Eco'
 *    '<S500>/DrvMd_Eco'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_TrrMd_Eco(VAR(float32, AUTOMATIC)
    rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Eco)
{
    /* Inport: '<S577>/PdlPctTrq' */
    *rty_Eco = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S497>/DrvMd_Normal'
 *    '<S499>/DrvMd_Normal'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_Normal_p(VAR
    (TeDMIR_e_DriveStyleSts, AUTOMATIC) rtu_CeDMIR_e_Normal, P2VAR
    (TeDMIR_e_DriveStyleSts, AUTOMATIC, DTRR_VAR_INIT) rty_DrvMdNormal)
{
    /* Inport: '<S520>/CeDMIR_e_Normal' */
    *rty_DrvMdNormal = rtu_CeDMIR_e_Normal;
}

/*
 * Output and update for action system:
 *    '<S497>/DrvMd_Eco'
 *    '<S499>/DrvMd_Eco'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_Eco(VAR(TeDMIR_e_DriveStyleSts,
    AUTOMATIC) rtu_CeDMIR_e_Eco, P2VAR(TeDMIR_e_DriveStyleSts, AUTOMATIC,
    DTRR_VAR_INIT) rty_DrvMdEco)
{
    /* Inport: '<S519>/CeDMIR_e_Eco' */
    *rty_DrvMdEco = rtu_CeDMIR_e_Eco;
}

/*
 * Output and update for action system:
 *    '<S497>/PropDrvMd_Track'
 *    '<S497>/PropDrvMd_Drag'
 *    '<S499>/PropDrvMd_Track'
 *    '<S499>/PropDrvMd_Drag1'
 */
static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_PropDrvMd_Track(VAR(float32,
    AUTOMATIC) rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT) rty_Track)
{
    /* Inport: '<S558>/PdlPctTrq' */
    *rty_Track = rtu_PdlPctTrq;
}

/*
 * Output and update for action system:
 *    '<S498>/DrvMd_EcoPwrLim'
 *    '<S500>/DrvMd_Power'
 */
#if Rte_SysCon_Variant_DTRR_FUNC_2 || Rte_SysCon_Variant_DTRR_FUNC_3

static FUNC(void, DTRR_CODE_LOCAL) DTRR_ac_DrvMd_EcoPwrLim(VAR(float32,
    AUTOMATIC) rtu_PdlPctTrq, P2VAR(float32, AUTOMATIC, DTRR_VAR_INIT)
    rty_Eco_PwrLim)
{
    /* Inport: '<S591>/PdlPctTrq' */
    *rty_Eco_PwrLim = rtu_PdlPctTrq;
}

#endif

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_SNOW(void)
{
    /* Entry 'SNOW': '<S549>:101' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 4U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_SPORT(void)
{
    /* Entry 'SPORT': '<S549>:3' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 2U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_MUDSAND(void)
{
    /* Entry 'MUDSAND': '<S549>:116' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 5U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_TRACK(void)
{
    /* Entry 'TRACK': '<S549>:287' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 8U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_ECO(void)
{
    /* Entry 'ECO': '<S549>:292' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 9U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_NORMAL(void)
{
    /* Entry 'NORMAL': '<S549>:1' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 1U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_DRAG(void)
{
    /* Entry 'DRAG': '<S549>:361' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 10U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_TOW(void)
{
    /* Entry 'TOW': '<S549>:117' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 6U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_VALET(void)
{
    /* Entry 'VALET': '<S549>:281' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 7U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_enter_atomic_ROCK(void)
{
    /* Entry 'ROCK': '<S549>:76' */
    DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active = true;
    DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active = false;
    DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active = false;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 3U;
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_MUDSAND(void)
{
    TeTMDR_e_TrrnMd tmpRead;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 5U;

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    /* During 'MUDSAND': '<S549>:116' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead);

    /* Constant: '<S533>/Constant' incorporates:
     *  Constant: '<S527>/Constant'
     *  Constant: '<S528>/Constant'
     *  Constant: '<S529>/Constant'
     *  Constant: '<S530>/Constant'
     *  Constant: '<S531>/Constant'
     *  Constant: '<S532>/Constant'
     *  Constant: '<S535>/Constant'
     *  Constant: '<S536>/Constant'
     */
    if (((uint32)tmpRead) == CeTMDR_e_ECO)
    {
        /* Transition: '<S549>:498' */
        /* Transition: '<S549>:497' */
        /* Transition: '<S549>:495' */
        /* Transition: '<S549>:548' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
        DTRR_ac_enter_atomic_ECO();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Drag)
    {
        /* Transition: '<S549>:475' */
        /* Transition: '<S549>:474' */
        /* Transition: '<S549>:472' */
        /* Transition: '<S549>:467' */
        /* Transition: '<S549>:466' */
        /* Transition: '<S549>:458' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
        DTRR_ac_enter_atomic_DRAG();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Valet)
    {
        /* Transition: '<S549>:440' */
        /* Transition: '<S549>:444' */
        /* Transition: '<S549>:435' */
        /* Transition: '<S549>:432' */
        /* Transition: '<S549>:430' */
        /* Transition: '<S549>:427' */
        /* Transition: '<S549>:425' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
        DTRR_ac_enter_atomic_VALET();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Snow)
    {
        /* Transition: '<S549>:417' */
        /* Transition: '<S549>:418' */
        /* Transition: '<S549>:419' */
        /* Transition: '<S549>:411' */
        /* Transition: '<S549>:407' */
        /* Transition: '<S549>:405' */
        /* Transition: '<S549>:402' */
        /* Transition: '<S549>:399' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
        DTRR_ac_enter_atomic_SNOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Auto)
    {
        /* Transition: '<S549>:397' */
        /* Transition: '<S549>:396' */
        /* Transition: '<S549>:395' */
        /* Transition: '<S549>:389' */
        /* Transition: '<S549>:386' */
        /* Transition: '<S549>:383' */
        /* Transition: '<S549>:381' */
        /* Transition: '<S549>:377' */
        /* Transition: '<S549>:378' */
        /* Transition: '<S549>:339' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
        DTRR_ac_enter_atomic_NORMAL();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Track)
    {
        /* Transition: '<S549>:354' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
        DTRR_ac_enter_atomic_TRACK();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Tow)
    {
        /* Transition: '<S549>:346' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
        DTRR_ac_enter_atomic_TOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Rock)
    {
        /* Transition: '<S549>:662' */
        /* Transition: '<S549>:661' */
        /* Transition: '<S549>:659' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
        DTRR_ac_enter_atomic_ROCK();
    }
    else
    {
        if (((uint32)tmpRead) == CeTMDR_e_Sport)
        {
            /* Transition: '<S549>:345' */
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
            DTRR_ac_enter_atomic_SPORT();
        }
    }

    /* End of Constant: '<S533>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_ROCK(void)
{
    TeTMDR_e_TrrnMd tmpRead;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 3U;

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    /* During 'ROCK': '<S549>:76' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead);

    /* Constant: '<S532>/Constant' incorporates:
     *  Constant: '<S527>/Constant'
     *  Constant: '<S528>/Constant'
     *  Constant: '<S529>/Constant'
     *  Constant: '<S530>/Constant'
     *  Constant: '<S531>/Constant'
     *  Constant: '<S533>/Constant'
     *  Constant: '<S535>/Constant'
     *  Constant: '<S537>/Constant'
     */
    if (((uint32)tmpRead) == CeTMDR_e_Sport)
    {
        /* Transition: '<S549>:328' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
        DTRR_ac_enter_atomic_SPORT();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_MudSand)
    {
        /* Transition: '<S549>:603' */
        /* Transition: '<S549>:605' */
        /* Transition: '<S549>:606' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
        DTRR_ac_enter_atomic_MUDSAND();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Track)
    {
        /* Transition: '<S549>:608' */
        /* Transition: '<S549>:610' */
        /* Transition: '<S549>:611' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
        DTRR_ac_enter_atomic_TRACK();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Tow)
    {
        /* Transition: '<S549>:352' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
        DTRR_ac_enter_atomic_TOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Valet)
    {
        /* Transition: '<S549>:577' */
        /* Transition: '<S549>:579' */
        /* Transition: '<S549>:584' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
        DTRR_ac_enter_atomic_VALET();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_ECO)
    {
        /* Transition: '<S549>:589' */
        /* Transition: '<S549>:591' */
        /* Transition: '<S549>:593' */
        /* Transition: '<S549>:594' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
        DTRR_ac_enter_atomic_ECO();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Drag)
    {
        /* Transition: '<S549>:596' */
        /* Transition: '<S549>:598' */
        /* Transition: '<S549>:599' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
        DTRR_ac_enter_atomic_DRAG();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Snow)
    {
        /* Transition: '<S549>:329' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
        DTRR_ac_enter_atomic_SNOW();
    }
    else
    {
        if (((uint32)tmpRead) == CeTMDR_e_Auto)
        {
            /* Transition: '<S549>:331' */
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
            DTRR_ac_enter_atomic_NORMAL();
        }
    }

    /* End of Constant: '<S532>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_SNOW_g(void)
{
    TeTMDR_e_TrrnMd tmpRead;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 4U;

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    /* During 'SNOW': '<S549>:101' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead);

    /* Constant: '<S536>/Constant' incorporates:
     *  Constant: '<S528>/Constant'
     *  Constant: '<S529>/Constant'
     *  Constant: '<S530>/Constant'
     *  Constant: '<S531>/Constant'
     *  Constant: '<S532>/Constant'
     *  Constant: '<S533>/Constant'
     *  Constant: '<S535>/Constant'
     *  Constant: '<S537>/Constant'
     */
    if (((uint32)tmpRead) == CeTMDR_e_Rock)
    {
        /* Transition: '<S549>:91' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
        DTRR_ac_enter_atomic_ROCK();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Tow)
    {
        /* Transition: '<S549>:641' */
        /* Transition: '<S549>:642' */
        /* Transition: '<S549>:643' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
        DTRR_ac_enter_atomic_TOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Valet)
    {
        /* Transition: '<S549>:351' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
        DTRR_ac_enter_atomic_VALET();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Drag)
    {
        /* Transition: '<S549>:465' */
        /* Transition: '<S549>:464' */
        /* Transition: '<S549>:463' */
        /* Transition: '<S549>:458' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
        DTRR_ac_enter_atomic_DRAG();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_ECO)
    {
        /* Transition: '<S549>:515' */
        /* Transition: '<S549>:514' */
        /* Transition: '<S549>:491' */
        /* Transition: '<S549>:484' */
        /* Transition: '<S549>:548' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
        DTRR_ac_enter_atomic_ECO();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Track)
    {
        /* Transition: '<S549>:512' */
        /* Transition: '<S549>:517' */
        /* Transition: '<S549>:520' */
        /* Transition: '<S549>:506' */
        /* Transition: '<S549>:507' */
        /* Transition: '<S549>:575' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
        DTRR_ac_enter_atomic_TRACK();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_MudSand)
    {
        /* Transition: '<S549>:538' */
        /* Transition: '<S549>:540' */
        /* Transition: '<S549>:543' */
        /* Transition: '<S549>:535' */
        /* Transition: '<S549>:546' */
        /* Transition: '<S549>:532' */
        /* Transition: '<S549>:530' */
        /* Transition: '<S549>:528' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
        DTRR_ac_enter_atomic_MUDSAND();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Sport)
    {
        /* Transition: '<S549>:559' */
        /* Transition: '<S549>:561' */
        /* Transition: '<S549>:564' */
        /* Transition: '<S549>:557' */
        /* Transition: '<S549>:567' */
        /* Transition: '<S549>:555' */
        /* Transition: '<S549>:570' */
        /* Transition: '<S549>:553' */
        /* Transition: '<S549>:552' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
        DTRR_ac_enter_atomic_SPORT();
    }
    else
    {
        if (((uint32)tmpRead) == CeTMDR_e_Auto)
        {
            /* Transition: '<S549>:338' */
            /* Transition: '<S549>:339' */
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
            DTRR_ac_enter_atomic_NORMAL();
        }
    }

    /* End of Constant: '<S536>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_SPORT_b(void)
{
    TeTMDR_e_TrrnMd tmpRead;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 2U;

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    /* During 'SPORT': '<S549>:3' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead);

    /* Constant: '<S530>/Constant' incorporates:
     *  Constant: '<S527>/Constant'
     *  Constant: '<S528>/Constant'
     *  Constant: '<S529>/Constant'
     *  Constant: '<S531>/Constant'
     *  Constant: '<S533>/Constant'
     *  Constant: '<S535>/Constant'
     *  Constant: '<S536>/Constant'
     *  Constant: '<S537>/Constant'
     */
    if (((uint32)tmpRead) == CeTMDR_e_Track)
    {
        /* Transition: '<S549>:525' */
        /* Transition: '<S549>:526' */
        /* Transition: '<S549>:574' */
        /* Transition: '<S549>:575' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
        DTRR_ac_enter_atomic_TRACK();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_ECO)
    {
        /* Transition: '<S549>:500' */
        /* Transition: '<S549>:499' */
        /* Transition: '<S549>:497' */
        /* Transition: '<S549>:495' */
        /* Transition: '<S549>:548' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
        DTRR_ac_enter_atomic_ECO();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Drag)
    {
        /* Transition: '<S549>:478' */
        /* Transition: '<S549>:477' */
        /* Transition: '<S549>:474' */
        /* Transition: '<S549>:472' */
        /* Transition: '<S549>:467' */
        /* Transition: '<S549>:466' */
        /* Transition: '<S549>:458' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
        DTRR_ac_enter_atomic_DRAG();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Valet)
    {
        /* Transition: '<S549>:442' */
        /* Transition: '<S549>:445' */
        /* Transition: '<S549>:444' */
        /* Transition: '<S549>:435' */
        /* Transition: '<S549>:432' */
        /* Transition: '<S549>:430' */
        /* Transition: '<S549>:427' */
        /* Transition: '<S549>:425' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
        DTRR_ac_enter_atomic_VALET();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Snow)
    {
        /* Transition: '<S549>:447' */
        /* Transition: '<S549>:448' */
        /* Transition: '<S549>:418' */
        /* Transition: '<S549>:419' */
        /* Transition: '<S549>:411' */
        /* Transition: '<S549>:407' */
        /* Transition: '<S549>:405' */
        /* Transition: '<S549>:402' */
        /* Transition: '<S549>:399' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
        DTRR_ac_enter_atomic_SNOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_MudSand)
    {
        /* Transition: '<S549>:330' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
        DTRR_ac_enter_atomic_MUDSAND();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Tow)
    {
        /* Transition: '<S549>:653' */
        /* Transition: '<S549>:652' */
        /* Transition: '<S549>:651' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
        DTRR_ac_enter_atomic_TOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Rock)
    {
        /* Transition: '<S549>:90' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
        DTRR_ac_enter_atomic_ROCK();
    }
    else
    {
        if (((uint32)tmpRead) == CeTMDR_e_Auto)
        {
            /* Transition: '<S549>:14' */
            /* Transition: '<S549>:15' */
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
            DTRR_ac_enter_atomic_NORMAL();
        }
    }

    /* End of Constant: '<S530>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */
static void DTRR_ac_TRACK(void)
{
    TeTMDR_e_TrrnMd tmpRead;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 8U;

    /* Inport: '<Root>/VeTMDR_e_PropulsionMd' */
    /* During 'TRACK': '<S549>:287' */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead);

    /* Constant: '<S532>/Constant' incorporates:
     *  Constant: '<S527>/Constant'
     *  Constant: '<S528>/Constant'
     *  Constant: '<S529>/Constant'
     *  Constant: '<S531>/Constant'
     *  Constant: '<S533>/Constant'
     *  Constant: '<S535>/Constant'
     *  Constant: '<S536>/Constant'
     *  Constant: '<S537>/Constant'
     */
    if (((uint32)tmpRead) == CeTMDR_e_Sport)
    {
        /* Transition: '<S549>:571' */
        /* Transition: '<S549>:570' */
        /* Transition: '<S549>:553' */
        /* Transition: '<S549>:552' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
        DTRR_ac_enter_atomic_SPORT();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Drag)
    {
        /* Transition: '<S549>:470' */
        /* Transition: '<S549>:467' */
        /* Transition: '<S549>:466' */
        /* Transition: '<S549>:458' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
        DTRR_ac_enter_atomic_DRAG();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Valet)
    {
        /* Transition: '<S549>:433' */
        /* Transition: '<S549>:432' */
        /* Transition: '<S549>:430' */
        /* Transition: '<S549>:427' */
        /* Transition: '<S549>:425' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
        DTRR_ac_enter_atomic_VALET();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Snow)
    {
        /* Transition: '<S549>:410' */
        /* Transition: '<S549>:411' */
        /* Transition: '<S549>:407' */
        /* Transition: '<S549>:405' */
        /* Transition: '<S549>:402' */
        /* Transition: '<S549>:399' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
        DTRR_ac_enter_atomic_SNOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Auto)
    {
        /* Transition: '<S549>:388' */
        /* Transition: '<S549>:389' */
        /* Transition: '<S549>:386' */
        /* Transition: '<S549>:383' */
        /* Transition: '<S549>:381' */
        /* Transition: '<S549>:377' */
        /* Transition: '<S549>:378' */
        /* Transition: '<S549>:339' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
        DTRR_ac_enter_atomic_NORMAL();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Tow)
    {
        /* Transition: '<S549>:622' */
        /* Transition: '<S549>:621' */
        /* Transition: '<S549>:618' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
        DTRR_ac_enter_atomic_TOW();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_ECO)
    {
        /* Transition: '<S549>:358' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
        DTRR_ac_enter_atomic_ECO();
    }
    else if (((uint32)tmpRead) == CeTMDR_e_Rock)
    {
        /* Transition: '<S549>:655' */
        /* Transition: '<S549>:658' */
        /* Transition: '<S549>:661' */
        /* Transition: '<S549>:659' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
        DTRR_ac_enter_atomic_ROCK();
    }
    else
    {
        if (((uint32)tmpRead) == CeTMDR_e_MudSand)
        {
            /* Transition: '<S549>:355' */
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
            DTRR_ac_enter_atomic_MUDSAND();
        }
    }

    /* End of Constant: '<S532>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' */
static void DTRR_ac_TOW(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h)
{
    TeTMDR_e_TrrnMd tmp;
    *LeDTRR_cnt_DrvMdIdxDTWS_h = 6U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'TOW': '<S548>:117' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S544>/Constant' incorporates:
     *  Constant: '<S543>/Constant'
     */
    if (((uint32)tmp) == CeTMDR_e_MudSand)
    {
        /* Transition: '<S548>:120' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_MUDSAND;

        /* Entry 'MUDSAND': '<S548>:116' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = true;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 5U;
    }
    else if (((uint32)tmp) == CeTMDR_e_Rock)
    {
        /* Transition: '<S548>:127' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_ROCK;

        /* Entry 'ROCK': '<S548>:76' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = true;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 3U;
    }
    else
    {
        /* Constant: '<S523>/Constant' */
        /* Transition: '<S548>:187' */
        /* Transition: '<S548>:181' */
        /* Transition: '<S548>:180' */
        if (((uint32)tmp) == CeTMDR_e_Snow)
        {
            /* Transition: '<S548>:179' */
            DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SNOW;

            /* Entry 'SNOW': '<S548>:101' */
            DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
            DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = true;
            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
            DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

            /* Constant: '<S540>/Constant' */
            DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
            *LeDTRR_cnt_DrvMdIdxDTWS_h = 4U;
        }
        else
        {
            /* Constant: '<S542>/Constant' */
            /* Transition: '<S548>:198' */
            if (((uint32)tmp) == CeTMDR_e_Auto)
            {
                /* Transition: '<S548>:199' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

                /* Entry 'NORMAL': '<S548>:1' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

                /* Constant: '<S540>/Constant' */
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 1U;
            }
            else
            {
                /* Constant: '<S534>/Constant' */
                /* Transition: '<S548>:188' */
                /* Transition: '<S548>:189' */
                if (((uint32)tmp) == CeTMDR_e_Sport)
                {
                    /* Transition: '<S548>:190' */
                    DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SPORT;

                    /* Entry 'SPORT': '<S548>:3' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = true;
                    DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

                    /* Constant: '<S540>/Constant' */
                    DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                    *LeDTRR_cnt_DrvMdIdxDTWS_h = 2U;
                }

                /* End of Constant: '<S534>/Constant' */
            }

            /* End of Constant: '<S542>/Constant' */
        }

        /* End of Constant: '<S523>/Constant' */
    }

    /* End of Constant: '<S544>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' */
static void DTRR_ac_SNOW(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h)
{
    TeTMDR_e_TrrnMd tmp;
    *LeDTRR_cnt_DrvMdIdxDTWS_h = 4U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'SNOW': '<S548>:101' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S543>/Constant' incorporates:
     *  Constant: '<S542>/Constant'
     */
    if (((uint32)tmp) == CeTMDR_e_Rock)
    {
        /* Transition: '<S548>:91' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_ROCK;

        /* Entry 'ROCK': '<S548>:76' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = true;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 3U;
    }
    else if (((uint32)tmp) == CeTMDR_e_Auto)
    {
        /* Transition: '<S548>:20' */
        /* Transition: '<S548>:21' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S548>:1' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 1U;
    }
    else
    {
        /* Constant: '<S524>/Constant' */
        /* Transition: '<S548>:145' */
        /* Transition: '<S548>:158' */
        /* Transition: '<S548>:160' */
        if (((uint32)tmp) == CeTMDR_e_Tow)
        {
            /* Transition: '<S548>:167' */
            DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_TOW;

            /* Entry 'TOW': '<S548>:117' */
            DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
            DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
            DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = true;

            /* Constant: '<S540>/Constant' */
            DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
            *LeDTRR_cnt_DrvMdIdxDTWS_h = 6U;
        }
        else
        {
            /* Constant: '<S544>/Constant' */
            /* Transition: '<S548>:164' */
            if (((uint32)tmp) == CeTMDR_e_MudSand)
            {
                /* Transition: '<S548>:170' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_MUDSAND;

                /* Entry 'MUDSAND': '<S548>:116' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = true;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

                /* Constant: '<S540>/Constant' */
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 5U;
            }
            else
            {
                /* Constant: '<S534>/Constant' */
                /* Transition: '<S548>:165' */
                /* Transition: '<S548>:166' */
                if (((uint32)tmp) == CeTMDR_e_Sport)
                {
                    /* Transition: '<S548>:171' */
                    DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SPORT;

                    /* Entry 'SPORT': '<S548>:3' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = true;
                    DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

                    /* Constant: '<S540>/Constant' */
                    DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                    *LeDTRR_cnt_DrvMdIdxDTWS_h = 2U;
                }

                /* End of Constant: '<S534>/Constant' */
            }

            /* End of Constant: '<S544>/Constant' */
        }

        /* End of Constant: '<S524>/Constant' */
    }

    /* End of Constant: '<S543>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' */
static void DTRR_ac_SPORT(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h)
{
    TeTMDR_e_TrrnMd tmp;
    *LeDTRR_cnt_DrvMdIdxDTWS_h = 2U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'SPORT': '<S548>:3' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S544>/Constant' incorporates:
     *  Constant: '<S542>/Constant'
     *  Constant: '<S543>/Constant'
     */
    if (((uint32)tmp) == CeTMDR_e_MudSand)
    {
        /* Transition: '<S548>:119' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_MUDSAND;

        /* Entry 'MUDSAND': '<S548>:116' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = true;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 5U;
    }
    else if (((uint32)tmp) == CeTMDR_e_Rock)
    {
        /* Transition: '<S548>:90' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_ROCK;

        /* Entry 'ROCK': '<S548>:76' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = true;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 3U;
    }
    else if (((uint32)tmp) == CeTMDR_e_Auto)
    {
        /* Transition: '<S548>:14' */
        /* Transition: '<S548>:15' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S548>:1' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

        /* Constant: '<S540>/Constant' */
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 1U;
    }
    else
    {
        /* Constant: '<S524>/Constant' */
        /* Transition: '<S548>:249' */
        /* Transition: '<S548>:251' */
        /* Transition: '<S548>:253' */
        if (((uint32)tmp) == CeTMDR_e_Tow)
        {
            /* Transition: '<S548>:254' */
            DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_TOW;

            /* Entry 'TOW': '<S548>:117' */
            DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
            DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
            DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = true;

            /* Constant: '<S540>/Constant' */
            DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
            *LeDTRR_cnt_DrvMdIdxDTWS_h = 6U;
        }
        else
        {
            /* Constant: '<S523>/Constant' */
            /* Transition: '<S548>:257' */
            /* Transition: '<S548>:259' */
            /* Transition: '<S548>:261' */
            if (((uint32)tmp) == CeTMDR_e_Snow)
            {
                /* Transition: '<S548>:262' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SNOW;

                /* Entry 'SNOW': '<S548>:101' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = true;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;

                /* Constant: '<S540>/Constant' */
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 4U;
            }

            /* End of Constant: '<S523>/Constant' */
        }

        /* End of Constant: '<S524>/Constant' */
    }

    /* End of Constant: '<S544>/Constant' */
}

/* Function for Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' */
static void DTRR_ac_ELETRIC(uint16 *LeDTRR_cnt_DrvMdIdxDTWS_h)
{
    TeTMDR_e_TrrnMd tmp;

    /* SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' incorporates:
     *  Constant: '<S523>/Constant'
     *  Constant: '<S524>/Constant'
     *  Constant: '<S534>/Constant'
     *  Constant: '<S538>/Constant'
     *  Constant: '<S540>/Constant'
     *  Constant: '<S542>/Constant'
     *  Constant: '<S543>/Constant'
     *  Constant: '<S544>/Constant'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd'
     */
    /* During 'ELETRIC': '<S548>:151' */
    if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeDMDR_e_D) ==
            CeDMDR_e_Camel_Mode)
    {
        /* Transition: '<S548>:156' */
        /* Exit Internal 'ELETRIC': '<S548>:151' */
        DTRR_ac_DW.is_ELETRIC = 0;
        DTRR_ac_DW.is_c5_DTRR_ac = DTRR_ac_IN_ECO;

        /* Entry 'ECO': '<S548>:154' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
        DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_a = true;
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Camel_Mode;
        *LeDTRR_cnt_DrvMdIdxDTWS_h = 8U;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
    }
    else
    {
        switch (DTRR_ac_DW.is_ELETRIC)
        {
          case DTRR_ac_IN_MUDSAND:
            *LeDTRR_cnt_DrvMdIdxDTWS_h = 5U;

            /* During 'MUDSAND': '<S548>:116' */
            tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
            if (((uint32)tmp) == CeTMDR_e_Auto)
            {
                /* Transition: '<S548>:277' */
                /* Transition: '<S548>:278' */
                /* Transition: '<S548>:206' */
                /* Transition: '<S548>:207' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

                /* Entry 'NORMAL': '<S548>:1' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 1U;
            }
            else if (((uint32)tmp) == CeTMDR_e_Tow)
            {
                /* Transition: '<S548>:121' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_TOW;

                /* Entry 'TOW': '<S548>:117' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = true;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 6U;
            }
            else if (((uint32)tmp) == CeTMDR_e_Sport)
            {
                /* Transition: '<S548>:23' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SPORT;

                /* Entry 'SPORT': '<S548>:3' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = true;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 2U;
            }
            else
            {
                /* Transition: '<S548>:237' */
                /* Transition: '<S548>:238' */
                if (((uint32)tmp) == CeTMDR_e_Rock)
                {
                    /* Transition: '<S548>:239' */
                    DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_ROCK;

                    /* Entry 'ROCK': '<S548>:76' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = true;
                    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                    DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                    *LeDTRR_cnt_DrvMdIdxDTWS_h = 3U;
                }
            }
            break;

          case DTRR_ac_IN_NORMAL:
            *LeDTRR_cnt_DrvMdIdxDTWS_h = 1U;

            /* During 'NORMAL': '<S548>:1' */
            tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
            if (((uint32)tmp) == CeTMDR_e_Rock)
            {
                /* Transition: '<S548>:86' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_ROCK;

                /* Entry 'ROCK': '<S548>:76' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = true;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 3U;
            }
            else
            {
                /* Transition: '<S548>:12' */
                if (((uint32)tmp) == CeTMDR_e_Sport)
                {
                    /* Transition: '<S548>:11' */
                    DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SPORT;

                    /* Entry 'SPORT': '<S548>:3' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = true;
                    DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                    DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                    *LeDTRR_cnt_DrvMdIdxDTWS_h = 2U;
                }
                else
                {
                    /* Transition: '<S548>:16' */
                    if (((uint32)tmp) == CeTMDR_e_Snow)
                    {
                        /* Transition: '<S548>:18' */
                        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SNOW;

                        /* Entry 'SNOW': '<S548>:101' */
                        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = true;
                        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                        *LeDTRR_cnt_DrvMdIdxDTWS_h = 4U;
                    }
                    else
                    {
                        /* Transition: '<S548>:241' */
                        /* Transition: '<S548>:243' */
                        /* Transition: '<S548>:245' */
                        if (((uint32)tmp) == CeTMDR_e_Tow)
                        {
                            /* Transition: '<S548>:268' */
                            DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_TOW;

                            /* Entry 'TOW': '<S548>:117' */
                            DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                            DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                            DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                            DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = true;
                            DTRR_ac_B.LeDTRR_e_DrvMdActive_e =
                                CeDMDR_e_Normal_Mode;
                            *LeDTRR_cnt_DrvMdIdxDTWS_h = 6U;
                        }
                        else
                        {
                            /* Transition: '<S548>:267' */
                            if (((uint32)tmp) == CeTMDR_e_MudSand)
                            {
                                /* Transition: '<S548>:246' */
                                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_MUDSAND;

                                /* Entry 'MUDSAND': '<S548>:116' */
                                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = true;
                                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                                DTRR_ac_B.LeDTRR_e_DrvMdActive_e =
                                    CeDMDR_e_Normal_Mode;
                                *LeDTRR_cnt_DrvMdIdxDTWS_h = 5U;
                            }
                        }
                    }
                }
            }
            break;

          case DTRR_ac_IN_ROCK:
            *LeDTRR_cnt_DrvMdIdxDTWS_h = 3U;

            /* During 'ROCK': '<S548>:76' */
            tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
            if (((uint32)tmp) == CeTMDR_e_Sport)
            {
                /* Transition: '<S548>:89' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SPORT;

                /* Entry 'SPORT': '<S548>:3' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = true;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 2U;
            }
            else if (((uint32)tmp) == CeTMDR_e_Tow)
            {
                /* Transition: '<S548>:126' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_TOW;

                /* Entry 'TOW': '<S548>:117' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = true;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 6U;
            }
            else if (((uint32)tmp) == CeTMDR_e_Snow)
            {
                /* Transition: '<S548>:88' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_SNOW;

                /* Entry 'SNOW': '<S548>:101' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = true;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 4U;
            }
            else if (((uint32)tmp) == CeTMDR_e_Auto)
            {
                /* Transition: '<S548>:87' */
                DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

                /* Entry 'NORMAL': '<S548>:1' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
                DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
                DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                *LeDTRR_cnt_DrvMdIdxDTWS_h = 1U;
            }
            else
            {
                /* Transition: '<S548>:232' */
                /* Transition: '<S548>:234' */
                if (((uint32)tmp) == CeTMDR_e_MudSand)
                {
                    /* Transition: '<S548>:235' */
                    DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_MUDSAND;

                    /* Entry 'MUDSAND': '<S548>:116' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
                    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = true;
                    DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
                    DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
                    *LeDTRR_cnt_DrvMdIdxDTWS_h = 5U;
                }
            }
            break;

          case DTRR_ac_IN_SNOW:
            DTRR_ac_SNOW(LeDTRR_cnt_DrvMdIdxDTWS_h);
            break;

          case DTRR_ac_IN_SPORT:
            DTRR_ac_SPORT(LeDTRR_cnt_DrvMdIdxDTWS_h);
            break;

          default:
            DTRR_ac_TOW(LeDTRR_cnt_DrvMdIdxDTWS_h);
            break;
        }
    }

    /* End of SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' */
}

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_NORMAL_m(void)
{
    /* Entry 'NORMAL': '<S632>:281' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 2U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_SPORT_b(void)
{
    /* Entry 'SPORT': '<S632>:282' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 3U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_TOW_n(void)
{
    /* Entry 'TOW': '<S632>:284' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 4U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_SNOW_k(void)
{
    /* Entry 'SNOW': '<S632>:286' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 5U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_MUDSAND_a(void)
{
    /* Entry 'MUDSAND': '<S632>:283' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 6U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_ROCK_b(void)
{
    /* Entry 'ROCK': '<S632>:285' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 7U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_TRACK_e(void)
{
    /* Entry 'TRACK': '<S632>:350' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 8U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_DRAG_j(void)
{
    /* Entry 'DRAG': '<S632>:352' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = true;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 9U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_enter_atomic_VALET_c(void)
{
    /* Entry 'VALET': '<S632>:452' */
    DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
    DTRR_ac_B.LeDTRR_b_TrrMdValet_active = true;

    /* Constant: '<S616>/Constant' */
    DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Normal_Mode;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 10U;
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_VALET(void)
{
    TeTMDR_e_TrrnMd tmp;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 10U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'VALET': '<S632>:452' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S615>/Constant' */
    if (((uint32)tmp) != CeTMDR_e_Valet)
    {
        /* Transition: '<S632>:457' */
        /* Transition: '<S632>:458' */
        if (((uint32)tmp) == CeTMDR_e_Valet)
        {
            /* Transition: '<S632>:456' */
            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
            DTRR_ac_enter_atomic_VALET_c();
        }
        else
        {
            /* Constant: '<S622>/Constant' */
            /* Transition: '<S632>:455' */
            if (((uint32)tmp) == CeTMDR_e_Drag)
            {
                /* Transition: '<S632>:356' */
                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG_j();
            }
            else
            {
                /* Constant: '<S621>/Constant' */
                /* Transition: '<S632>:430' */
                if (((uint32)tmp) == CeTMDR_e_Track)
                {
                    /* Transition: '<S632>:353' */
                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                    DTRR_ac_enter_atomic_TRACK_e();
                }
                else
                {
                    /* Constant: '<S626>/Constant' */
                    /* Transition: '<S632>:431' */
                    if (((uint32)tmp) == CeTMDR_e_Rock)
                    {
                        /* Transition: '<S632>:329' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                        DTRR_ac_enter_atomic_ROCK_b();
                    }
                    else
                    {
                        /* Constant: '<S627>/Constant' */
                        /* Transition: '<S632>:428' */
                        if (((uint32)tmp) == CeTMDR_e_MudSand)
                        {
                            /* Transition: '<S632>:328' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_MUDSAND_e1;
                            DTRR_ac_enter_atomic_MUDSAND_a();
                        }
                        else
                        {
                            /* Constant: '<S618>/Constant' */
                            /* Transition: '<S632>:429' */
                            if (((uint32)tmp) == CeTMDR_e_Snow)
                            {
                                /* Transition: '<S632>:327' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_SNOW_b;
                                DTRR_ac_enter_atomic_SNOW_k();
                            }
                            else
                            {
                                /* Constant: '<S619>/Constant' */
                                /* Transition: '<S632>:426' */
                                if (((uint32)tmp) == CeTMDR_e_Tow)
                                {
                                    /* Transition: '<S632>:326' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TOW_mb;
                                    DTRR_ac_enter_atomic_TOW_n();
                                }
                                else
                                {
                                    /* Constant: '<S623>/Constant' */
                                    /* Transition: '<S632>:425' */
                                    if (((uint32)tmp) == CeTMDR_e_Sport)
                                    {
                                        /* Transition: '<S632>:325' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_SPORT_f;
                                        DTRR_ac_enter_atomic_SPORT_b();
                                    }
                                    else
                                    {
                                        /* Constant: '<S625>/Constant' */
                                        /* Transition: '<S632>:424' */
                                        if (((uint32)tmp) == CeTMDR_e_Auto)
                                        {
                                            /* Transition: '<S632>:323' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_NORMAL_k;
                                            DTRR_ac_enter_atomic_NORMAL_m();
                                        }

                                        /* End of Constant: '<S625>/Constant' */
                                    }

                                    /* End of Constant: '<S623>/Constant' */
                                }

                                /* End of Constant: '<S619>/Constant' */
                            }

                            /* End of Constant: '<S618>/Constant' */
                        }

                        /* End of Constant: '<S627>/Constant' */
                    }

                    /* End of Constant: '<S626>/Constant' */
                }

                /* End of Constant: '<S621>/Constant' */
            }

            /* End of Constant: '<S622>/Constant' */
        }
    }

    /* End of Constant: '<S615>/Constant' */
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_SNOW_a(void)
{
    TeTMDR_e_TrrnMd tmp;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 5U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'SNOW': '<S632>:286' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S618>/Constant' */
    if (((uint32)tmp) != CeTMDR_e_Snow)
    {
        /* Constant: '<S615>/Constant' */
        /* Transition: '<S632>:311' */
        /* Transition: '<S632>:445' */
        /* Transition: '<S632>:441' */
        /* Transition: '<S632>:440' */
        /* Transition: '<S632>:449' */
        /* Transition: '<S632>:450' */
        /* Transition: '<S632>:458' */
        if (((uint32)tmp) == CeTMDR_e_Valet)
        {
            /* Transition: '<S632>:456' */
            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
            DTRR_ac_enter_atomic_VALET_c();
        }
        else
        {
            /* Constant: '<S622>/Constant' */
            /* Transition: '<S632>:455' */
            if (((uint32)tmp) == CeTMDR_e_Drag)
            {
                /* Transition: '<S632>:356' */
                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG_j();
            }
            else
            {
                /* Constant: '<S621>/Constant' */
                /* Transition: '<S632>:430' */
                if (((uint32)tmp) == CeTMDR_e_Track)
                {
                    /* Transition: '<S632>:353' */
                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                    DTRR_ac_enter_atomic_TRACK_e();
                }
                else
                {
                    /* Constant: '<S626>/Constant' */
                    /* Transition: '<S632>:431' */
                    if (((uint32)tmp) == CeTMDR_e_Rock)
                    {
                        /* Transition: '<S632>:329' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                        DTRR_ac_enter_atomic_ROCK_b();
                    }
                    else
                    {
                        /* Constant: '<S627>/Constant' */
                        /* Transition: '<S632>:428' */
                        if (((uint32)tmp) == CeTMDR_e_MudSand)
                        {
                            /* Transition: '<S632>:328' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_MUDSAND_e1;
                            DTRR_ac_enter_atomic_MUDSAND_a();
                        }
                        else
                        {
                            /* Transition: '<S632>:429' */
                            if (((uint32)tmp) == CeTMDR_e_Snow)
                            {
                                /* Transition: '<S632>:327' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_SNOW_b;
                                DTRR_ac_enter_atomic_SNOW_k();
                            }
                            else
                            {
                                /* Constant: '<S619>/Constant' */
                                /* Transition: '<S632>:426' */
                                if (((uint32)tmp) == CeTMDR_e_Tow)
                                {
                                    /* Transition: '<S632>:326' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TOW_mb;
                                    DTRR_ac_enter_atomic_TOW_n();
                                }
                                else
                                {
                                    /* Constant: '<S623>/Constant' */
                                    /* Transition: '<S632>:425' */
                                    if (((uint32)tmp) == CeTMDR_e_Sport)
                                    {
                                        /* Transition: '<S632>:325' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_SPORT_f;
                                        DTRR_ac_enter_atomic_SPORT_b();
                                    }
                                    else
                                    {
                                        /* Constant: '<S625>/Constant' */
                                        /* Transition: '<S632>:424' */
                                        if (((uint32)tmp) == CeTMDR_e_Auto)
                                        {
                                            /* Transition: '<S632>:323' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_NORMAL_k;
                                            DTRR_ac_enter_atomic_NORMAL_m();
                                        }

                                        /* End of Constant: '<S625>/Constant' */
                                    }

                                    /* End of Constant: '<S623>/Constant' */
                                }

                                /* End of Constant: '<S619>/Constant' */
                            }
                        }

                        /* End of Constant: '<S627>/Constant' */
                    }

                    /* End of Constant: '<S626>/Constant' */
                }

                /* End of Constant: '<S621>/Constant' */
            }

            /* End of Constant: '<S622>/Constant' */
        }

        /* End of Constant: '<S615>/Constant' */
    }

    /* End of Constant: '<S618>/Constant' */
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_SPORT_e(void)
{
    TeTMDR_e_TrrnMd tmp;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 3U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'SPORT': '<S632>:282' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S623>/Constant' */
    if (((uint32)tmp) != CeTMDR_e_Sport)
    {
        /* Constant: '<S615>/Constant' */
        /* Transition: '<S632>:303' */
        /* Transition: '<S632>:446' */
        /* Transition: '<S632>:447' */
        /* Transition: '<S632>:445' */
        /* Transition: '<S632>:441' */
        /* Transition: '<S632>:440' */
        /* Transition: '<S632>:449' */
        /* Transition: '<S632>:450' */
        /* Transition: '<S632>:458' */
        if (((uint32)tmp) == CeTMDR_e_Valet)
        {
            /* Transition: '<S632>:456' */
            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
            DTRR_ac_enter_atomic_VALET_c();
        }
        else
        {
            /* Constant: '<S622>/Constant' */
            /* Transition: '<S632>:455' */
            if (((uint32)tmp) == CeTMDR_e_Drag)
            {
                /* Transition: '<S632>:356' */
                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG_j();
            }
            else
            {
                /* Constant: '<S621>/Constant' */
                /* Transition: '<S632>:430' */
                if (((uint32)tmp) == CeTMDR_e_Track)
                {
                    /* Transition: '<S632>:353' */
                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                    DTRR_ac_enter_atomic_TRACK_e();
                }
                else
                {
                    /* Constant: '<S626>/Constant' */
                    /* Transition: '<S632>:431' */
                    if (((uint32)tmp) == CeTMDR_e_Rock)
                    {
                        /* Transition: '<S632>:329' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                        DTRR_ac_enter_atomic_ROCK_b();
                    }
                    else
                    {
                        /* Constant: '<S627>/Constant' */
                        /* Transition: '<S632>:428' */
                        if (((uint32)tmp) == CeTMDR_e_MudSand)
                        {
                            /* Transition: '<S632>:328' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_MUDSAND_e1;
                            DTRR_ac_enter_atomic_MUDSAND_a();
                        }
                        else
                        {
                            /* Constant: '<S618>/Constant' */
                            /* Transition: '<S632>:429' */
                            if (((uint32)tmp) == CeTMDR_e_Snow)
                            {
                                /* Transition: '<S632>:327' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_SNOW_b;
                                DTRR_ac_enter_atomic_SNOW_k();
                            }
                            else
                            {
                                /* Constant: '<S619>/Constant' */
                                /* Transition: '<S632>:426' */
                                if (((uint32)tmp) == CeTMDR_e_Tow)
                                {
                                    /* Transition: '<S632>:326' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TOW_mb;
                                    DTRR_ac_enter_atomic_TOW_n();
                                }
                                else
                                {
                                    /* Transition: '<S632>:425' */
                                    if (((uint32)tmp) == CeTMDR_e_Sport)
                                    {
                                        /* Transition: '<S632>:325' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_SPORT_f;
                                        DTRR_ac_enter_atomic_SPORT_b();
                                    }
                                    else
                                    {
                                        /* Constant: '<S625>/Constant' */
                                        /* Transition: '<S632>:424' */
                                        if (((uint32)tmp) == CeTMDR_e_Auto)
                                        {
                                            /* Transition: '<S632>:323' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_NORMAL_k;
                                            DTRR_ac_enter_atomic_NORMAL_m();
                                        }

                                        /* End of Constant: '<S625>/Constant' */
                                    }
                                }

                                /* End of Constant: '<S619>/Constant' */
                            }

                            /* End of Constant: '<S618>/Constant' */
                        }

                        /* End of Constant: '<S627>/Constant' */
                    }

                    /* End of Constant: '<S626>/Constant' */
                }

                /* End of Constant: '<S621>/Constant' */
            }

            /* End of Constant: '<S622>/Constant' */
        }

        /* End of Constant: '<S615>/Constant' */
    }

    /* End of Constant: '<S623>/Constant' */
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_TOW_n(void)
{
    TeTMDR_e_TrrnMd tmp;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 4U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'TOW': '<S632>:284' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S619>/Constant' */
    if (((uint32)tmp) != CeTMDR_e_Tow)
    {
        /* Constant: '<S615>/Constant' */
        /* Transition: '<S632>:310' */
        /* Transition: '<S632>:447' */
        /* Transition: '<S632>:445' */
        /* Transition: '<S632>:441' */
        /* Transition: '<S632>:440' */
        /* Transition: '<S632>:449' */
        /* Transition: '<S632>:450' */
        /* Transition: '<S632>:458' */
        if (((uint32)tmp) == CeTMDR_e_Valet)
        {
            /* Transition: '<S632>:456' */
            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
            DTRR_ac_enter_atomic_VALET_c();
        }
        else
        {
            /* Constant: '<S622>/Constant' */
            /* Transition: '<S632>:455' */
            if (((uint32)tmp) == CeTMDR_e_Drag)
            {
                /* Transition: '<S632>:356' */
                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG_j();
            }
            else
            {
                /* Constant: '<S621>/Constant' */
                /* Transition: '<S632>:430' */
                if (((uint32)tmp) == CeTMDR_e_Track)
                {
                    /* Transition: '<S632>:353' */
                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                    DTRR_ac_enter_atomic_TRACK_e();
                }
                else
                {
                    /* Constant: '<S626>/Constant' */
                    /* Transition: '<S632>:431' */
                    if (((uint32)tmp) == CeTMDR_e_Rock)
                    {
                        /* Transition: '<S632>:329' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                        DTRR_ac_enter_atomic_ROCK_b();
                    }
                    else
                    {
                        /* Constant: '<S627>/Constant' */
                        /* Transition: '<S632>:428' */
                        if (((uint32)tmp) == CeTMDR_e_MudSand)
                        {
                            /* Transition: '<S632>:328' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_MUDSAND_e1;
                            DTRR_ac_enter_atomic_MUDSAND_a();
                        }
                        else
                        {
                            /* Constant: '<S618>/Constant' */
                            /* Transition: '<S632>:429' */
                            if (((uint32)tmp) == CeTMDR_e_Snow)
                            {
                                /* Transition: '<S632>:327' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_SNOW_b;
                                DTRR_ac_enter_atomic_SNOW_k();
                            }
                            else
                            {
                                /* Transition: '<S632>:426' */
                                if (((uint32)tmp) == CeTMDR_e_Tow)
                                {
                                    /* Transition: '<S632>:326' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TOW_mb;
                                    DTRR_ac_enter_atomic_TOW_n();
                                }
                                else
                                {
                                    /* Constant: '<S623>/Constant' */
                                    /* Transition: '<S632>:425' */
                                    if (((uint32)tmp) == CeTMDR_e_Sport)
                                    {
                                        /* Transition: '<S632>:325' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_SPORT_f;
                                        DTRR_ac_enter_atomic_SPORT_b();
                                    }
                                    else
                                    {
                                        /* Constant: '<S625>/Constant' */
                                        /* Transition: '<S632>:424' */
                                        if (((uint32)tmp) == CeTMDR_e_Auto)
                                        {
                                            /* Transition: '<S632>:323' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_NORMAL_k;
                                            DTRR_ac_enter_atomic_NORMAL_m();
                                        }

                                        /* End of Constant: '<S625>/Constant' */
                                    }

                                    /* End of Constant: '<S623>/Constant' */
                                }
                            }

                            /* End of Constant: '<S618>/Constant' */
                        }

                        /* End of Constant: '<S627>/Constant' */
                    }

                    /* End of Constant: '<S626>/Constant' */
                }

                /* End of Constant: '<S621>/Constant' */
            }

            /* End of Constant: '<S622>/Constant' */
        }

        /* End of Constant: '<S615>/Constant' */
    }

    /* End of Constant: '<S619>/Constant' */
}

#endif

/* Function for Chart: '<S499>/PdlPctTrqArbCond_Determination' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

static void DTRR_ac_TRACK_i(void)
{
    TeTMDR_e_TrrnMd tmp;
    DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 8U;

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' */
    /* During 'TRACK': '<S632>:350' */
    tmp = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;

    /* Constant: '<S621>/Constant' */
    if (((uint32)tmp) != CeTMDR_e_Track)
    {
        /* Constant: '<S615>/Constant' */
        /* Transition: '<S632>:354' */
        /* Transition: '<S632>:449' */
        /* Transition: '<S632>:450' */
        /* Transition: '<S632>:458' */
        if (((uint32)tmp) == CeTMDR_e_Valet)
        {
            /* Transition: '<S632>:456' */
            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
            DTRR_ac_enter_atomic_VALET_c();
        }
        else
        {
            /* Constant: '<S622>/Constant' */
            /* Transition: '<S632>:455' */
            if (((uint32)tmp) == CeTMDR_e_Drag)
            {
                /* Transition: '<S632>:356' */
                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG_j();
            }
            else
            {
                /* Transition: '<S632>:430' */
                if (((uint32)tmp) == CeTMDR_e_Track)
                {
                    /* Transition: '<S632>:353' */
                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                    DTRR_ac_enter_atomic_TRACK_e();
                }
                else
                {
                    /* Constant: '<S626>/Constant' */
                    /* Transition: '<S632>:431' */
                    if (((uint32)tmp) == CeTMDR_e_Rock)
                    {
                        /* Transition: '<S632>:329' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                        DTRR_ac_enter_atomic_ROCK_b();
                    }
                    else
                    {
                        /* Constant: '<S627>/Constant' */
                        /* Transition: '<S632>:428' */
                        if (((uint32)tmp) == CeTMDR_e_MudSand)
                        {
                            /* Transition: '<S632>:328' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_MUDSAND_e1;
                            DTRR_ac_enter_atomic_MUDSAND_a();
                        }
                        else
                        {
                            /* Constant: '<S618>/Constant' */
                            /* Transition: '<S632>:429' */
                            if (((uint32)tmp) == CeTMDR_e_Snow)
                            {
                                /* Transition: '<S632>:327' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_SNOW_b;
                                DTRR_ac_enter_atomic_SNOW_k();
                            }
                            else
                            {
                                /* Constant: '<S619>/Constant' */
                                /* Transition: '<S632>:426' */
                                if (((uint32)tmp) == CeTMDR_e_Tow)
                                {
                                    /* Transition: '<S632>:326' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TOW_mb;
                                    DTRR_ac_enter_atomic_TOW_n();
                                }
                                else
                                {
                                    /* Constant: '<S623>/Constant' */
                                    /* Transition: '<S632>:425' */
                                    if (((uint32)tmp) == CeTMDR_e_Sport)
                                    {
                                        /* Transition: '<S632>:325' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_SPORT_f;
                                        DTRR_ac_enter_atomic_SPORT_b();
                                    }
                                    else
                                    {
                                        /* Constant: '<S625>/Constant' */
                                        /* Transition: '<S632>:424' */
                                        if (((uint32)tmp) == CeTMDR_e_Auto)
                                        {
                                            /* Transition: '<S632>:323' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_NORMAL_k;
                                            DTRR_ac_enter_atomic_NORMAL_m();
                                        }

                                        /* End of Constant: '<S625>/Constant' */
                                    }

                                    /* End of Constant: '<S623>/Constant' */
                                }

                                /* End of Constant: '<S619>/Constant' */
                            }

                            /* End of Constant: '<S618>/Constant' */
                        }

                        /* End of Constant: '<S627>/Constant' */
                    }

                    /* End of Constant: '<S626>/Constant' */
                }
            }

            /* End of Constant: '<S622>/Constant' */
        }

        /* End of Constant: '<S615>/Constant' */
    }

    /* End of Constant: '<S621>/Constant' */
}

#endif

/* Model step function for TID1 */
FUNC(void, DTRR_CODE) DTRR_FastTEF(void) /* Explicit Task: FastTEF */
{
    /* local block i/o variables */
    float32 rtb_TmpSignalConversionAtVeCSVR;
    float32 rtb_TmpSignalConversionAtVePLTR;
    float32 rtb_LeDTRR_M_TrqReqTemp[2];

#if Rte_SysCon_Variant_DTRR_FUNC_3

    uint16 rtb_LeDTRR_cnt_DrvMdIdx;

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_2

    uint16 rtb_LeDTRR_cnt_DrvMdIdx_i;

#endif

    boolean rtb_TmpSignalConversionAtVeBR_k;
    float32 rtb_Add1[3];
    float32 rtb_TmpSignalConversionAtSFun_m[2];
    float32 rtb_TmpSignalConversionAtSFun_n[2];
    float32 rtb_Sum2_ij;
    float32 rtb_Sum3;
    float32 rtb_Sum5;
    float32 rtb_Sum7;
    float32 rtb_Switch2_i;
    float32 rtb_Switch_h2;
    float32 rtb_Switch_km;
    float32 rtb_TmpSignalConversionAtVeAPSR;
    float32 rtb_TmpSignalConversionAtVeA_ev;
    float32 rtb_TmpSignalConversionAtVeBPCR;
    float32 rtb_TmpSignalConversionAtVeCC_l;
    float32 rtb_TmpSignalConversionAtVeESMR;
    float32 rtb_UnitDelay1;
    float32 rtb_UnitDelay3;
    float32 rtb_VeDTRR_Pct_PtcPdlPctTrq_Tra;
    float32 rtb_Vector_bb;
    float32 rtb_Vector_k;
    float32 rtb_switch10;
    float32 rtb_switch8;
    float32 tmpRead_c;
    float32 tmpRead_d;
    uint16 rtb_Switch_i4;
    uint16 rtb_Switch_ki;
    TeCSVR_e_VehSpdSrc tmpRead;
    TeDMDR_e_TurtleMdSts tmpRead_8;
    TeDMIR_e_CreepSts tmpRead_i;
    TeDMIR_e_RegenSts tmpRead_e;
    TeHMIR_e_LimitMaxPowerSel tmpRead_7;
    TeINVR_e_MtrInvrtrSt tmpRead_f;
    TeINVR_e_MtrInvrtrSt tmpRead_g;
    TePLTR_e_ACCSystemSts tmpRead_2;
    TePLTR_e_AdaptiveCruiseCtrl tmpRead_0;
    TePLTR_e_Cruise_Control_Logic tmpRead_6;
    TeSTMR_e_RdPrfmMd_MinMax tmpRead_b;
    TeTMDR_e_TrrnMd tmpRead_h;
    uint8 rtb_switch1_d;
    boolean rtb_TmpSignalConversionAtGainIn[14];
    boolean rtb_AND_o1;
    boolean rtb_Gain_ki;
    boolean rtb_Logical2;
    boolean rtb_Logical6;
    boolean rtb_LogicalOperator_ku;
    boolean rtb_NotEqual_ff;
    boolean rtb_RelationalOperator;
    boolean rtb_RelationalOperator8;
    boolean rtb_Switch1_h;
    boolean rtb_Switch2_kx;
    boolean rtb_TmpSignalConversionAtVeCC_i;
    boolean rtb_TmpSignalConversionAtVeDMIR;
    boolean rtb_TmpSignalConversionAtVeST_c;
    boolean rtb_UnitDelay_km;
    boolean rtb_VeDTRR_b_ACCTrqEnabled;
    boolean tmpRead_1;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_5;
    boolean tmpRead_9;
    boolean tmpRead_a;
    boolean tmpRead_j;

#if !Rte_SysCon_Variant_DTRR_FUNC_1

    float32 rtb_Merge;

#endif

    float32 rtb_UnitDelay3_c[2];
    float32 rtb_Summation;
    float32 rtb_Switch_m2;
    float32 rtb_TmpSignalConversionAtVeCCTR;
    float32 rtb_TmpSignalConversionAtVeSTMR;
    float32 rtb_Vector_mt;
    float32 rtb_switch4;
    boolean rtb_AND_gli;
    boolean rtb_Logical6_fd;
    boolean rtb_NotEqual_p;

#if Rte_SysCon_Variant_DTRR_FUNC_2

    float32 rtb_Vector_gf4;

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_1 || Rte_SysCon_Variant_DTRR_FUNC_5

    float32 rtb_Vector_j2;

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_5

    float32 rtb_Vector_d;

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_3

    float32 rtb_Vector_c2;

#endif

#if Rte_SysCon_Variant_DTRR_FUNC_3

    float32 rtb_Vector_fe;

#endif

    float32 rtb_Multiplication2;
    float32 rtb_TmpSignalConversionAtVeBRKR;
    float32 rtb_Vector_mn;
    float32 rtb_Vector_om;
    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR;
    sint8 rtb_DataTypeConversion[14];
    boolean rtb_AND_au;
    boolean rtb_TmpSignalConversionAtVeAECR;
    boolean rtb_UnitDelay3_d;

#if Rte_SysCon_Variant_DTRR_FUNC_2

    TeDMIR_e_DriveStyleSts rtb_LeDTRR_e_DrvMdActive_i;

#endif

    TeDMIR_e_DriveStyleSts rtb_TmpSignalConversionAtVeDM_c;

#if Rte_SysCon_Variant_DTRR_FUNC_3

    TeDMIR_e_DriveStyleSts rtb_LeDTRR_e_DrvMdActive;

#endif

    TeEBMR_e_eBoostStatus rtb_TmpSignalConversionAtVeEBMR;

#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    TeDMIR_e_DriveStyleSts rtb_LeDTRR_e_DrvMdActv;

#endif

    TeFWDR_e_TrnsfrCaseRange rtb_TmpSignalConversionAtVeFWDR;

#if Rte_SysCon_Variant_DTRR_FUNC_1

    TeDMIR_e_eCoastSel rtb_TmpSignalConversionAtVeDM_e;

#endif

    sint32 i;
    float32 switch5[2];
    sint16 rtb_Gain_bg;
    TeAPSR_e_Lv1PvMode rtb_TmpSignalConversionAtVeAP_j;
    TeASLR_e_HDC_Status rtb_TmpSignalConversionAtVeASLR;
    TeBRKR_e_BrkPdl_Stat rtb_TmpSignalConversionAtVeBR_d;
    TeDTRR_e_CreepingSts VeDTRR_e_eCreepStatus;
    TeDTRR_e_OPD_Sts Switch;
    TeDTRR_e_OPD_Sts Switch4;
    TePLTR_e_BSM_AxleTrq_Enbld rtb_TmpSignalConversionAtVePL_k;
    TePLTR_e_EPBHoldSts rtb_TmpSignalConversionAtVePL_m;
    TePTAR_e_ImmediateTorqRespType tmpRead_k;
    boolean Equal;
    boolean Equal2;
    boolean Equal3;
    boolean VeDTRR_b_ACC_OK;
    boolean tmp;

#if Rte_SysCon_Variant_DTRR_FUNC_2 || Rte_SysCon_Variant_DTRR_FUNC_5

    TeTMDR_e_TrrnMd tmp_0;

#endif

    float32 VeDTRR_P_PtcPdlMaxPwr_Out_tmp;
    TeDMDR_e_DrvMd tmp_1;
    boolean guard1 = false;
    boolean guard2 = false;

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&rtb_TmpSignalConversionAtVeAPSR);

    /* SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value(&rtb_TmpSignalConversionAtVeCSVR);

    /* SignalConversion generated from: '<S1>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR);

    /* SignalConversion generated from: '<S1>/VeBRKR_b_ImpndSkid' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ImpndSkid'
     */
    (void)Rte_Read_VeBRKR_b_ImpndSkid_Value(&rtb_TmpSignalConversionAtVeBR_k);

    /* SignalConversion generated from: '<S1>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&rtb_TmpSignalConversionAtVeBR_d);

    /* SignalConversion generated from: '<S1>/VeAPSR_e_Lv1PVMode' incorporates:
     *  Inport: '<Root>/VeAPSR_e_Lv1PVMode'
     */
    (void)Rte_Read_VeAPSR_e_Lv1PVMode_Value(&rtb_TmpSignalConversionAtVeAP_j);

    /* SignalConversion generated from: '<S1>/VeDMIR_e_DriveStyleSts' incorporates:
     *  Inport: '<Root>/VeDMIR_e_DriveStyleSts'
     */
    (void)Rte_Read_VeDMIR_e_DriveStyleSts_Value(&rtb_TmpSignalConversionAtVeDM_c);

    /* SignalConversion generated from: '<S1>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR);

    /* SignalConversion generated from: '<S1>/VeCCTR_b_CcEngaged' incorporates:
     *  Inport: '<Root>/VeCCTR_b_CcEngaged'
     */
    (void)Rte_Read_VeCCTR_b_CcEngaged_Value(&rtb_TmpSignalConversionAtVeCC_i);

    /* SignalConversion generated from: '<S1>/VeCCTR_P_CcDesiredPwr' incorporates:
     *  Inport: '<Root>/VeCCTR_P_CcDesiredPwr'
     */
    (void)Rte_Read_VeCCTR_P_CcDesiredPwr_Value(&rtb_TmpSignalConversionAtVeCCTR);

    /* SignalConversion generated from: '<S1>/VeCCTR_P_CcPIDTerm' incorporates:
     *  Inport: '<Root>/VeCCTR_P_CcPIDTerm'
     */
    (void)Rte_Read_VeCCTR_P_CcPIDTerm_Value(&rtb_TmpSignalConversionAtVeCC_l);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value(&rtb_TmpSignalConversionAtVeESMR);

    /* SignalConversion generated from: '<S1>/VeAPSR_U_Lv1DelPVSHires' incorporates:
     *  Inport: '<Root>/VeAPSR_U_Lv1DelPVSHires'
     */
    (void)Rte_Read_VeAPSR_U_Lv1DelPVSHires_Value
        (&rtb_TmpSignalConversionAtVeA_ev);

    /* SignalConversion generated from: '<S1>/VePLTR_e_EPBHoldSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value(&rtb_TmpSignalConversionAtVePL_m);

    /* SignalConversion generated from: '<S1>/VeDMIR_e_eCoastingSel' */
#if Rte_SysCon_Variant_DTRR_FUNC_1

    /* SignalConversion generated from: '<S1>/VeDMIR_e_eCoastingSel' incorporates:
     *  Inport: '<Root>/VeDMIR_e_eCoastingSel'
     */
    (void)Rte_Read_VeDMIR_e_eCoastingSel_Value(&rtb_TmpSignalConversionAtVeDM_e);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMIR_e_eCoastingSel' */

    /* SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value
        (&DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T);

    /* SignalConversion generated from: '<S1>/VeDMIR_b_DriveStyleStsFA' incorporates:
     *  Inport: '<Root>/VeDMIR_b_DriveStyleStsFA'
     */
    (void)Rte_Read_VeDMIR_b_DriveStyleStsFA_Value
        (&rtb_TmpSignalConversionAtVeDMIR);

    /* SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat' incorporates:
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     */
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value(&rtb_TmpSignalConversionAtVeFWDR);

    /* SignalConversion generated from: '<S1>/VeBRKR_P_BrkPrss' incorporates:
     *  Inport: '<Root>/VeBRKR_P_BrkPrss'
     */
    (void)Rte_Read_VeBRKR_P_BrkPrss_Value(&rtb_TmpSignalConversionAtVeBRKR);

    /* SignalConversion generated from: '<S1>/VePLTR_Pct_EstSlopeAnglePct' incorporates:
     *  Inport: '<Root>/VePLTR_Pct_EstSlopeAnglePct'
     */
    (void)Rte_Read_VePLTR_Pct_EstSlopeAnglePct_Value
        (&rtb_TmpSignalConversionAtVePLTR);

    /* SignalConversion generated from: '<S1>/VeSTMR_b_Lv2ReducedPerfMode' incorporates:
     *  Inport: '<Root>/VeSTMR_b_Lv2ReducedPerfMode'
     */
    (void)Rte_Read_VeSTMR_b_Lv2ReducedPerfMode_Value
        (&rtb_TmpSignalConversionAtVeST_c);

    /* SignalConversion generated from: '<S1>/VeSTMR_M_Lv2ReducedPrfmTrq' incorporates:
     *  Inport: '<Root>/VeSTMR_M_Lv2ReducedPrfmTrq'
     */
    (void)Rte_Read_VeSTMR_M_Lv2ReducedPrfmTrq_Value
        (&rtb_TmpSignalConversionAtVeSTMR);

    /* SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&DTRR_ac_B.TmpSignalConversionAtVeDMDR_e_D);

    /* SignalConversion generated from: '<S1>/VePLTR_e_BSM_AxleTrq_Enbld' incorporates:
     *  Inport: '<Root>/VePLTR_e_BSM_AxleTrq_Enbld'
     */
    (void)Rte_Read_VePLTR_e_BSM_AxleTrq_Enbld_Value
        (&rtb_TmpSignalConversionAtVePL_k);

    /* SignalConversion generated from: '<S1>/VeAECR_b_AeCoastRampFast' */
#if !Rte_SysCon_Variant_DTRR_FUNC_1

    /* SignalConversion generated from: '<S1>/VeAECR_b_AeCoastRampFast' incorporates:
     *  Inport: '<Root>/VeAECR_b_AeCoastRampFast'
     */
    (void)Rte_Read_VeAECR_b_AeCoastRampFast_Value
        (&rtb_TmpSignalConversionAtVeAECR);

#endif

    /* End of SignalConversion generated from: '<S1>/VeAECR_b_AeCoastRampFast' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VePLTR_e_ACCSystemSts' */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value(&tmpRead_2);

    /* Inport: '<Root>/VeBRKR_b_AeCoastReady' */
    (void)Rte_Read_VeBRKR_b_AeCoastReady_Value(&rtb_Logical2);

    /* Inport: '<Root>/VeBRKR_b_AeCoastReadyFA' */
    (void)Rte_Read_VeBRKR_b_AeCoastReadyFA_Value(&rtb_Logical6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* SignalConversion generated from: '<S1>/VeASLR_e_HDC_Status' incorporates:
     *  Inport: '<Root>/VeASLR_e_HDC_Status'
     */
    (void)Rte_Read_VeASLR_e_HDC_Status_Value(&rtb_TmpSignalConversionAtVeASLR);

    /* SignalConversion generated from: '<S1>/VeEBMR_e_eBoostStatus' incorporates:
     *  Inport: '<Root>/VeEBMR_e_eBoostStatus'
     */
    (void)Rte_Read_VeEBMR_e_eBoostStatus_Value(&rtb_TmpSignalConversionAtVeEBMR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Switch: '<S7>/Switch2' incorporates:
     *  Constant: '<S57>/Calib'
     */
    if (KeDTRR_b_AeCoastReadyFAOvrrd)
    {
        /* Switch: '<S7>/Switch2' incorporates:
         *  Constant: '<S58>/Calib'
         */
        VeDTRI_b_AeCoastReadyFA = KeDTRR_b_AeCoastReadyFA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch2' */
        VeDTRI_b_AeCoastReadyFA = rtb_Logical6;
    }

    /* End of Switch: '<S7>/Switch2' */

    /* Switch: '<S7>/Switch3' incorporates:
     *  Constant: '<S59>/Calib'
     */
    if (KeDTRR_b_AeCoastReadyOvrrd)
    {
        /* Switch: '<S7>/Switch3' incorporates:
         *  Constant: '<S60>/Calib'
         */
        VeDTRI_b_AeCoastReady = KeDTRR_b_AeCoastReady_OvrrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch3' */
        VeDTRI_b_AeCoastReady = rtb_Logical2;
    }

    /* End of Switch: '<S7>/Switch3' */

    /* Switch: '<S7>/Switch4' incorporates:
     *  Constant: '<S68>/Calib'
     */
    if (KeDTRR_b_OvrdACCSystemSts)
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Constant: '<S78>/Calib'
         */
        VeDTRI_e_ACCSystemSts = KeDTRR_e_ACCSystemSts_OvrrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch4' incorporates:
         *  Inport: '<Root>/VePLTR_e_ACCSystemSts'
         */
        VeDTRI_e_ACCSystemSts = tmpRead_2;
    }

    /* End of Switch: '<S7>/Switch4' */

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S28>/Calib'
     *  Inport: '<Root>/VePLTR_e_Proxi_CC_Logic'
     */
    if (HeDTRR_b_ACCM182Ena)
    {
        (void)Rte_Read_VePLTR_e_Proxi_CC_Logic_Value(&tmpRead_6);

        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S25>/Constant'
         *  Inport: '<Root>/VePLTR_e_Proxi_CC_Logic'
         *  RelationalOperator: '<S12>/Comparison6'
         */
        rtb_Switch2_kx = (((uint32)tmpRead_6) == CePLTR_e_Logic2);
    }
    else
    {
        /* Switch: '<S11>/Switch2' incorporates:
         *  Constant: '<S12>/FALSE Constant1'
         */
        rtb_Switch2_kx = false;
    }

    /* End of Switch: '<S12>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VePLTR_b_CC_Type' */
    (void)Rte_Read_VePLTR_b_CC_Type_Value(&rtb_Switch1_h);

    /* Inport: '<Root>/VeCTCR_M_WheelMin4ECM' */
    (void)Rte_Read_VeCTCR_M_WheelMin4ECM_Value(&rtb_Summation);

    /* Inport: '<Root>/VeCTCR_b_MinCreepWheelTrq_Enable' */
    (void)Rte_Read_VeCTCR_b_MinCreepWheelTrq_Enable_Value(&rtb_AND_gli);

    /* Inport: '<Root>/VeCSVR_b_VehSpdVSOSigFailSts' */
    (void)Rte_Read_VeCSVR_b_VehSpdVSOSigFailSts_Value(&rtb_LogicalOperator_ku);

    /* Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA' */
    (void)Rte_Read_VeCSVR_b_CanSigVehSpd_FA_Value(&rtb_AND_o1);

    /* Inport: '<Root>/VePLTR_b_InFieldMode' */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value(&rtb_RelationalOperator);

    /* Inport: '<Root>/VeSRAR_b_OnePedalDriveDsbl' */
    (void)Rte_Read_VeSRAR_b_OnePedalDriveDsbl_Value(&tmpRead_5);

    /* Inport: '<Root>/VePLTR_e_ProxiACC' */
    (void)Rte_Read_VePLTR_e_ProxiACC_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Switch: '<S7>/Switch11' incorporates:
     *  Constant: '<S70>/Calib'
     */
    if (KeDTRR_b_ProxiACCOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch11' incorporates:
         *  Constant: '<S79>/Calib'
         */
        VeDTRI_e_ProxiACC = KeDTRR_e_ProxiACC_OvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch11' incorporates:
         *  Inport: '<Root>/VePLTR_e_ProxiACC'
         */
        VeDTRI_e_ProxiACC = tmpRead_0;
    }

    /* End of Switch: '<S7>/Switch11' */

    /* Logic: '<S12>/Logical6' incorporates:
     *  Constant: '<S24>/Constant'
     *  RelationalOperator: '<S12>/Comparison3'
     *  Switch: '<S7>/Switch11'
     */
    rtb_Logical6 = (rtb_Switch2_kx || (((uint32)VeDTRI_e_ProxiACC) !=
                     CePLTR_e_ACC_Absent));

    /* Switch: '<S12>/Switch2' incorporates:
     *  Constant: '<S12>/FALSE Constant'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Calib'
     *  Logic: '<S12>/Logical7'
     *  RelationalOperator: '<S12>/Comparison7'
     *  RelationalOperator: '<S12>/Comparison8'
     *  Switch: '<S7>/Switch4'
     */
    if (HeDTRR_b_ACCM182Ena)
    {
        tmp = ((((uint32)VeDTRI_e_ACCSystemSts) == CePLTR_e_HAS_BSoC) ||
               (((uint32)VeDTRI_e_ACCSystemSts) == CePLTR_e_NCC_Engaged));
    }
    else
    {
        tmp = false;
    }

    /* End of Switch: '<S12>/Switch2' */

    /* Logic: '<S12>/Logical4' incorporates:
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Logic: '<S12>/Logical2'
     *  RelationalOperator: '<S12>/Comparison1'
     *  RelationalOperator: '<S12>/Comparison2'
     *  RelationalOperator: '<S12>/Comparison5'
     *  Switch: '<S7>/Switch4'
     */
    rtb_Logical2 = (((((((uint32)VeDTRI_e_ACCSystemSts) == CePLTR_e_Engaged) ||
                       (((uint32)VeDTRI_e_ACCSystemSts) ==
                        CePLTR_e_Engaged_BrakeOnly)) || (((uint32)
                        VeDTRI_e_ACCSystemSts) == CePLTR_e_Override)) || tmp) &&
                    rtb_Logical6);

    /* Switch: '<S7>/Switch5' incorporates:
     *  Constant: '<S69>/Calib'
     */
    if (KeDTRR_b_OvrdSRAROPD_Dsbl)
    {
        /* Switch: '<S7>/Switch5' incorporates:
         *  Constant: '<S73>/Calib'
         */
        VeDTRI_b_OnePedalDriveDsbl = KeDTRR_b_SRAROPD_DsblOvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch5' */
        VeDTRI_b_OnePedalDriveDsbl = tmpRead_5;
    }

    /* End of Switch: '<S7>/Switch5' */

    /* Logic: '<S7>/Logical1' */
    VeDTRR_b_InPlantMode = !rtb_RelationalOperator;

    /* Switch: '<S7>/Switch20' incorporates:
     *  Constant: '<S74>/Calib'
     */
    if (KeDTRR_b_VehSpdFA_OvrrdEnbl)
    {
        /* Switch: '<S7>/Switch20' incorporates:
         *  Constant: '<S75>/Calib'
         */
        VeDTRI_b_VehSpdFA = KeDTRR_b_VehSpdFA_OvrrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch20' */
        VeDTRI_b_VehSpdFA = rtb_AND_o1;
    }

    /* End of Switch: '<S7>/Switch20' */

    /* Switch: '<S7>/Switch10' incorporates:
     *  Constant: '<S76>/Calib'
     */
    if (KeDTRR_b_VehSpdVSOSigFailSts_OvrrdEnbl)
    {
        /* Switch: '<S7>/Switch10' incorporates:
         *  Constant: '<S77>/Calib'
         */
        VeDTRI_b_VehSpdVSOSigFailSts = KeDTRR_b_VehSpdVSOSigFailSts_OvrrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch10' */
        VeDTRI_b_VehSpdVSOSigFailSts = rtb_LogicalOperator_ku;
    }

    /* End of Switch: '<S7>/Switch10' */

    /* Switch: '<S7>/Switch1' incorporates:
     *  Constant: '<S65>/Calib'
     */
    if (KeDTRR_b_MinCreepWheel_Ovrrd)
    {
        /* Switch: '<S7>/Switch1' incorporates:
         *  Constant: '<S47>/Calib'
         */
        VeDTRI_M_WheelMin4ECM = KeDTRR_M_MinCreepWheelTrq;
    }
    else
    {
        /* Switch: '<S7>/Switch1' */
        VeDTRI_M_WheelMin4ECM = rtb_Summation;
    }

    /* End of Switch: '<S7>/Switch1' */

    /* Switch: '<S7>/Switch15' incorporates:
     *  Constant: '<S66>/Calib'
     */
    if (KeDTRR_b_MinCrpWhlEnb_Ovrrd)
    {
        /* Switch: '<S7>/Switch15' incorporates:
         *  Constant: '<S67>/Calib'
         */
        VeDTRI_b_MinCreepWheelTrq_Enable = KeDTRR_b_MinCrpWhlTrq_Enb;
    }
    else
    {
        /* Switch: '<S7>/Switch15' */
        VeDTRI_b_MinCreepWheelTrq_Enable = rtb_AND_gli;
    }

    /* End of Switch: '<S7>/Switch15' */

    /* Switch: '<S7>/Switch16' incorporates:
     *  Constant: '<S62>/Calib'
     */
    if (KeDTRR_b_CC_Type_OvrrdEna)
    {
        /* Switch: '<S7>/Switch16' incorporates:
         *  Constant: '<S61>/Calib'
         */
        VeDTRI_b_CC_Type = KeDTRR_b_CC_Type_Ovrrd;
    }
    else
    {
        /* Switch: '<S7>/Switch16' */
        VeDTRI_b_CC_Type = rtb_Switch1_h;
    }

    /* End of Switch: '<S7>/Switch16' */

    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Wheel_Trq_In' */
    /* Outputs for Atomic SubSystem: '<S136>/Digital Lowpass Reset Enabled' */
    /* Sum: '<S13>/Sum' incorporates:
     *  UnitDelay: '<S699>/Unit Delay'
     */
    rtb_Summation = DTRR_ac_DW.UnitDelay_DSTATE_g;

    /* Sum: '<S699>/Summation' incorporates:
     *  Constant: '<S701>/Calib'
     *  Product: '<S699>/Multiplication'
     *  Sum: '<S699>/Subtraction'
     */
    rtb_Summation += (rtb_TmpSignalConversionAtVeCSVR - rtb_Summation) *
        KeDTRR_k_PtcPdlWhlTrqMphFilt;

    /* Switch: '<S699>/Switch1' incorporates:
     *  Switch: '<S699>/Switch2'
     */
    VeDTRR_v_PtcPdlWhlTrqKPH = rtb_Summation;

    /* Update for UnitDelay: '<S699>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_g = VeDTRR_v_PtcPdlWhlTrqKPH;

    /* End of Outputs for SubSystem: '<S136>/Digital Lowpass Reset Enabled' */
    /* End of Outputs for SubSystem: '<S9>/Wheel_Trq_In' */

    /* Outputs for Atomic SubSystem: '<S9>/Max_Torque' */
    /* Outputs for Atomic SubSystem: '<S131>/Hysteresis1' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S153>/Calib'
     *  RelationalOperator: '<S151>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeESMR > KeDTRR_P_MinBattPwrforNoPropRSP)
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S151>/Constant Value'
         */
        rtb_Switch1_h = true;
    }
    else
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S152>/Calib'
         *  RelationalOperator: '<S151>/Greater  Than1'
         *  UnitDelay: '<S151>/Unit Delay'
         */
        rtb_Switch1_h = ((rtb_TmpSignalConversionAtVeESMR >=
                          KeDTRR_P_MinBattPwrforNoPropLSP) &&
                         (DTRR_ac_DW.UnitDelay_DSTATE_iy));
    }

    /* End of Switch: '<S151>/Switch1' */

    /* Update for UnitDelay: '<S151>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_iy = rtb_Switch1_h;

    /* End of Outputs for SubSystem: '<S131>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S157>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S161>/EdgeFalling1' */
    /* Logic: '<S163>/AND' incorporates:
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_AND_gli = DTRR_ac_DW.UnitDelay_DSTATE_mw;

    /* Update for UnitDelay: '<S163>/Unit Delay' incorporates:
     *  Constant: '<S157>/ 1'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_mw = false;

    /* End of Outputs for SubSystem: '<S161>/EdgeFalling1' */

    /* Switch: '<S161>/Switch' */
    if (rtb_AND_gli)
    {
        /* Switch: '<S161>/Switch' incorporates:
         *  Constant: '<S157>/ 5'
         */
        rtb_Switch_ki = 5U;
    }
    else
    {
        /* Sum: '<S161>/Summation' incorporates:
         *  Constant: '<S161>/Constant Value'
         *  UnitDelay: '<S161>/Unit Delay'
         */
        i = ((sint32)DTRR_ac_DW.UnitDelay_DSTATE_bh) - 1;
        if ((((sint32)DTRR_ac_DW.UnitDelay_DSTATE_bh) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S161>/Switch' incorporates:
         *  Sum: '<S161>/Summation'
         */
        rtb_Switch_ki = (uint16)i;
    }

    /* End of Switch: '<S161>/Switch' */

    /* Update for UnitDelay: '<S161>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_bh = rtb_Switch_ki;

    /* Switch: '<S160>/Switch3' incorporates:
     *  Constant: '<S154>/Calib'
     *  Constant: '<S161>/Constant Value2'
     *  Logic: '<S131>/Logical Operator5'
     *  Logic: '<S131>/Logical1'
     *  RelationalOperator: '<S131>/REVERSE ? 2'
     *  RelationalOperator: '<S161>/Greater  Than'
     *  Switch: '<S131>/switch1'
     */
    if (((sint32)rtb_Switch_ki) > 0)
    {
        /* Switch: '<S131>/switch1' incorporates:
         *  Constant: '<S154>/Calib'
         *  Logic: '<S131>/Logical Operator5'
         *  Logic: '<S131>/Logical1'
         *  RelationalOperator: '<S131>/REVERSE ? 2'
         */
        if ((!rtb_Switch1_h) && (rtb_TmpSignalConversionAtVeBPCR <=
                                 KeDTRR_Pct_MinBattforNoProp))
        {
            /* Switch: '<S160>/Switch3' incorporates:
             *  Constant: '<S131>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeBPCR = 0.0F;
        }
    }
    else
    {
        if ((!rtb_Switch1_h) && (rtb_TmpSignalConversionAtVeBPCR <=
                                 KeDTRR_Pct_MinBattforNoProp))
        {
            /* Switch: '<S131>/switch1' incorporates:
             *  Constant: '<S131>/Constant Value'
             */
            rtb_TmpSignalConversionAtVeBPCR = 0.0F;
        }

        /* Sum: '<S160>/Sum2' incorporates:
         *  UnitDelay: '<S160>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR -= DTRR_ac_DW.UnitDelay_DSTATE_isv;

        /* Outputs for Atomic SubSystem: '<S160>/Limiter' */
        /* Switch: '<S162>/Switch1' incorporates:
         *  Constant: '<S159>/Calib'
         *  RelationalOperator: '<S162>/Relational Operator'
         */
        if (KeDTRR_Pct_SocRampInc < rtb_TmpSignalConversionAtVeBPCR)
        {
            /* Switch: '<S162>/Switch1' */
            rtb_TmpSignalConversionAtVeBPCR = KeDTRR_Pct_SocRampInc;
        }

        /* End of Switch: '<S162>/Switch1' */

        /* Switch: '<S162>/Switch' incorporates:
         *  Constant: '<S158>/Calib'
         *  RelationalOperator: '<S162>/Relational Operator1'
         */
        if (rtb_TmpSignalConversionAtVeBPCR <= KeDTRR_Pct_SocRampDec)
        {
            rtb_TmpSignalConversionAtVeBPCR = KeDTRR_Pct_SocRampDec;
        }

        /* End of Switch: '<S162>/Switch' */
        /* End of Outputs for SubSystem: '<S160>/Limiter' */

        /* Switch: '<S160>/Switch3' incorporates:
         *  Sum: '<S160>/Sum3'
         *  UnitDelay: '<S160>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeBPCR += DTRR_ac_DW.UnitDelay_DSTATE_isv;
    }

    /* End of Switch: '<S160>/Switch3' */
    /* End of Outputs for SubSystem: '<S157>/Turn Off Delay Sample' */
    /* End of Outputs for SubSystem: '<S9>/Max_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeHMIR_e_LimitMaxPower_Sel' */
    (void)Rte_Read_VeHMIR_e_LimitMaxPower_Sel_Value(&tmpRead_7);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Max_Torque' */
    /* Lookup_n-D: '<S155>/Vector' incorporates:
     *  Switch: '<S160>/Switch3'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_PtcPdlMaxWhlTrqGearRTbl = look2_iflf_binlcapw
        (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeBPCR, ((const
           float32 *)&(KxDTRR_M_PtcPdlMaxWhlTrqGearRTbl[0])), ((const float32 *)
          &(KyDTRR_M_PtcPdlMaxWhlTrqGearRTbl[0])), ((const float32 *)
          &(KtDTRR_M_PtcPdlMaxWhlTrqGearRTbl[0])),
         DTRR_ac_ConstP.Vector_maxIndex, 8U);

    /* Lookup_n-D: '<S156>/Vector' incorporates:
     *  Switch: '<S160>/Switch3'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_PtcPdlMaxWhlTrqTbl = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeBPCR, ((const float32 *)
        &(KxDTRR_M_PtcPdlMaxWhlTrqTbl[0])), ((const float32 *)
        &(KyDTRR_M_PtcPdlMaxWhlTrqTbl[0])), ((const float32 *)
        &(KtDTRR_M_PtcPdlMaxWhlTrqTbl[0])), DTRR_ac_ConstP.Vector_maxIndex_j, 8U);

    /* Switch: '<S131>/switch4' incorporates:
     *  Constant: '<S150>/Constant'
     *  RelationalOperator: '<S131>/REVERSE ? '
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeReverse)
    {
        /* Switch: '<S131>/switch4' */
        VeDTRC_M_PtcPdlMaxWhlTrq = VeDTRR_M_PtcPdlMaxWhlTrqGearRTbl;
    }
    else
    {
        /* Switch: '<S131>/switch4' */
        VeDTRC_M_PtcPdlMaxWhlTrq = VeDTRR_M_PtcPdlMaxWhlTrqTbl;
    }

    /* End of Switch: '<S131>/switch4' */

    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Product: '<S131>/Max wheel power for this vehicle speed' incorporates:
     *  Constant: '<S700>/Calib'
     *  Product: '<S164>/Max wheel power for this vehicle speed'
     */
    VeDTRR_P_PtcPdlMaxPwr_Out_tmp = KeDTRR_K_PtcWhlTrqToPwrFctr *
        VeDTRR_v_PtcPdlWhlTrqKPH;

    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */

    /* Product: '<S131>/Max wheel power for this vehicle speed' */
    VeDTRR_P_PtcPdlMaxPwr_Out = VeDTRR_P_PtcPdlMaxPwr_Out_tmp *
        VeDTRC_M_PtcPdlMaxWhlTrq;

    /* Update for UnitDelay: '<S160>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_isv = rtb_TmpSignalConversionAtVeBPCR;

    /* End of Outputs for SubSystem: '<S9>/Max_Torque' */

    /* Outputs for Atomic SubSystem: '<S9>/Pedal_Percent' */
    /* RelationalOperator: '<S133>/Comparison' incorporates:
     *  Constant: '<S494>/Calib'
     */
    rtb_Switch1_h = (rtb_TmpSignalConversionAtVeAPSR > KeDTRR_Pct_PtcPdlWot);

    /* Logic: '<S133>/Logical Operator' incorporates:
     *  Constant: '<S492>/Constant'
     *  Inport: '<Root>/VeHMIR_e_LimitMaxPower_Sel'
     *  Logic: '<S133>/Logical Operator1'
     *  RelationalOperator: '<S133>/Comparison1'
     */
    rtb_AND_gli = ((!rtb_Switch1_h) && (((uint32)tmpRead_7) == CeHMIR_e_Active));

    /* Chart: '<S498>/PdlPctTrqArbCond_Determination' incorporates:
     *  Constant: '<S596>/Constant'
     *  Constant: '<S597>/Constant'
     *  Constant: '<S598>/Constant'
     *  Constant: '<S599>/Constant'
     *  Gain: '<S504>/Gain'
     *  Gain: '<S603>/Gain'
     *  Gain: '<S604>/Gain'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd'
     *  SignalConversion generated from: '<S504>/Gain'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_2

    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_M182/PdlPctTrqArbCond_Determination */
    /* During: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_M182/PdlPctTrqArbCond_Determination */
    if (((uint32)DTRR_ac_DW.is_active_c3_DTRR_ac) == 0U)
    {
        /* Entry: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_M182/PdlPctTrqArbCond_Determination */
        DTRR_ac_DW.is_active_c3_DTRR_ac = 1U;

        /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_M182/PdlPctTrqArbCond_Determination */
        /* Transition: '<S602>:2' */
        DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S602>:1' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = true;
        DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
        DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
        DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
        DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
        rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Normal;
        rtb_LeDTRR_cnt_DrvMdIdx_i = 0U;
    }
    else
    {
        switch (DTRR_ac_DW.is_c3_DTRR_ac)
        {
          case DTRR_ac_IN_ECO:
            /* During 'ECO': '<S602>:4' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_OffRoad)
            {
                /* Transition: '<S602>:91' */
                /* Exit Internal 'ECO': '<S602>:4' */
                DTRR_ac_DW.is_ECO = 0;
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_OFFROAD;

                /* Entry 'OFFROAD': '<S602>:76' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_OffRoad;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 2U;
            }
            else if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T) ==
                     CeTMDR_e_Sport)
            {
                /* Transition: '<S602>:23' */
                /* Transition: '<S602>:80' */
                /* Transition: '<S602>:81' */
                /* Exit Internal 'ECO': '<S602>:4' */
                DTRR_ac_DW.is_ECO = 0;
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_SPORT_l;

                /* Entry 'SPORT': '<S602>:3' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_SportFun;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 1U;
            }
            else if (((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                     CeDMIR_e_Normal)
            {
                /* Transition: '<S602>:20' */
                /* Transition: '<S602>:21' */
                /* Exit Internal 'ECO': '<S602>:4' */
                DTRR_ac_DW.is_ECO = 0;
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_NORMAL;

                /* Entry 'NORMAL': '<S602>:1' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = true;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Normal;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 0U;
            }
            else if (((sint32)DTRR_ac_DW.is_ECO) == 1)
            {
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Eco;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 3U;

                /* During 'FullRangePower': '<S602>:101' */
                if (rtb_AND_gli)
                {
                    /* Transition: '<S602>:98' */
                    /* Transition: '<S602>:106' */
                    DTRR_ac_DW.is_ECO = DTRR_ac_IN_PowerLimitation;

                    /* Entry 'PowerLimitation': '<S602>:97' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = true;
                    rtb_LeDTRR_cnt_DrvMdIdx_i = 4U;
                }
            }
            else
            {
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Eco;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 4U;

                /* During 'PowerLimitation': '<S602>:97' */
                if (!rtb_AND_gli)
                {
                    /* Transition: '<S602>:104' */
                    /* Transition: '<S602>:105' */
                    DTRR_ac_DW.is_ECO = DTRR_ac_IN_FullRangePower;

                    /* Entry 'FullRangePower': '<S602>:101' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                    rtb_LeDTRR_cnt_DrvMdIdx_i = 3U;
                }
            }
            break;

          case DTRR_ac_IN_NORMAL:
            rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Normal;
            rtb_LeDTRR_cnt_DrvMdIdx_i = 0U;

            /* During 'NORMAL': '<S602>:1' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_OffRoad)
            {
                /* Transition: '<S602>:86' */
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_OFFROAD;

                /* Entry 'OFFROAD': '<S602>:76' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_OffRoad;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 2U;
            }
            else
            {
                /* Transition: '<S602>:12' */
                if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T) ==
                        CeTMDR_e_Sport)
                {
                    /* Transition: '<S602>:11' */
                    DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_SPORT_l;

                    /* Entry 'SPORT': '<S602>:3' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdSport_active = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                    rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_SportFun;
                    rtb_LeDTRR_cnt_DrvMdIdx_i = 1U;
                }
                else
                {
                    /* Transition: '<S602>:16' */
                    if (((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                            CeDMIR_e_Eco)
                    {
                        /* Transition: '<S602>:18' */
                        DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_ECO;

                        /* Entry Internal 'ECO': '<S602>:4' */
                        /* Transition: '<S602>:107' */
                        DTRR_ac_DW.is_ECO = DTRR_ac_IN_FullRangePower;

                        /* Entry 'FullRangePower': '<S602>:101' */
                        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                        DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                        DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = true;
                        DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                        DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                        rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Eco;
                        rtb_LeDTRR_cnt_DrvMdIdx_i = 3U;
                    }
                }
            }
            break;

          case DTRR_ac_IN_OFFROAD:
            rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_OffRoad;
            rtb_LeDTRR_cnt_DrvMdIdx_i = 2U;

            /* During 'OFFROAD': '<S602>:76' */
            if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T) ==
                    CeTMDR_e_Sport)
            {
                /* Transition: '<S602>:89' */
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_SPORT_l;

                /* Entry 'SPORT': '<S602>:3' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_SportFun;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 1U;
            }
            else if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Eco)
            {
                /* Transition: '<S602>:88' */
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_ECO;

                /* Entry Internal 'ECO': '<S602>:4' */
                /* Transition: '<S602>:107' */
                DTRR_ac_DW.is_ECO = DTRR_ac_IN_FullRangePower;

                /* Entry 'FullRangePower': '<S602>:101' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = true;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Eco;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 3U;
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Normal)
                {
                    /* Transition: '<S602>:87' */
                    DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_NORMAL;

                    /* Entry 'NORMAL': '<S602>:1' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                    rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Normal;
                    rtb_LeDTRR_cnt_DrvMdIdx_i = 0U;
                }
            }
            break;

          default:
            rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_SportFun;
            rtb_LeDTRR_cnt_DrvMdIdx_i = 1U;

            /* During 'SPORT': '<S602>:3' */
            tmp_0 = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
            if ((((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Eco) &&
                    (((uint32)tmp_0) != CeTMDR_e_Sport))
            {
                /* Transition: '<S602>:22' */
                /* Transition: '<S602>:84' */
                /* Transition: '<S602>:85' */
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_ECO;

                /* Entry Internal 'ECO': '<S602>:4' */
                /* Transition: '<S602>:107' */
                DTRR_ac_DW.is_ECO = DTRR_ac_IN_FullRangePower;

                /* Entry 'FullRangePower': '<S602>:101' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = true;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Eco;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 3U;
            }
            else if ((((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                      CeDMIR_e_OffRoad) && (((uint32)tmp_0) != CeTMDR_e_Sport))
            {
                /* Transition: '<S602>:90' */
                DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_OFFROAD;

                /* Entry 'OFFROAD': '<S602>:76' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = false;
                DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_OffRoad;
                rtb_LeDTRR_cnt_DrvMdIdx_i = 2U;
            }
            else
            {
                if ((((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                        CeDMIR_e_Normal) && (((uint32)tmp_0) != CeTMDR_e_Sport))
                {
                    /* Transition: '<S602>:14' */
                    /* Transition: '<S602>:15' */
                    DTRR_ac_DW.is_c3_DTRR_ac = DTRR_ac_IN_NORMAL;

                    /* Entry 'NORMAL': '<S602>:1' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdSport_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active = false;
                    rtb_LeDTRR_e_DrvMdActive_i = CeDMIR_e_Normal;
                    rtb_LeDTRR_cnt_DrvMdIdx_i = 0U;
                }
            }
            break;
        }
    }

    /* VariantMerge generated from: '<S133>/Variant_Source1' incorporates:
     *  Constant: '<S498>/FALSE Constant1'
     *  Constant: '<S596>/Constant'
     *  Constant: '<S597>/Constant'
     *  Constant: '<S598>/Constant'
     *  Constant: '<S599>/Constant'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd'
     */
    rtb_TmpSignalConversionAtGainIn[0] = DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i;
    rtb_TmpSignalConversionAtGainIn[1] = DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active;
    rtb_TmpSignalConversionAtGainIn[2] = DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d;
    rtb_TmpSignalConversionAtGainIn[3] =
        DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active;
    rtb_TmpSignalConversionAtGainIn[4] = DTRR_ac_B.LeDTRR_b_DrvMdSport_active;
    rtb_TmpSignalConversionAtGainIn[5] = false;
    rtb_TmpSignalConversionAtGainIn[6] = false;
    rtb_TmpSignalConversionAtGainIn[7] = false;
    rtb_TmpSignalConversionAtGainIn[8] = false;
    rtb_TmpSignalConversionAtGainIn[9] = false;
    rtb_TmpSignalConversionAtGainIn[10] = false;
    rtb_TmpSignalConversionAtGainIn[11] = false;
    rtb_TmpSignalConversionAtGainIn[12] = false;
    rtb_TmpSignalConversionAtGainIn[13] = false;

#endif

    /* End of Chart: '<S498>/PdlPctTrqArbCond_Determination' */

    /* Chart: '<S500>/PdlPctTrqArbCond_Determination' incorporates:
     *  Constant: '<S664>/Constant'
     *  Constant: '<S665>/Constant'
     *  Constant: '<S666>/Constant'
     *  Gain: '<S502>/Gain'
     *  Gain: '<S670>/Gain'
     *  Gain: '<S671>/Gain'
     *  Gain: '<S672>/Gain'
     *  SignalConversion generated from: '<S502>/Gain'
     *  Sum: '<S507>/Sum7'
     *  UnitDelay: '<S507>/Unit Delay1'
     *  UnitDelay: '<S507>/Unit Delay2'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_3

    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_X250Ducato/PdlPctTrqArbCond_Determination */
    /* During: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_X250Ducato/PdlPctTrqArbCond_Determination */
    if (((uint32)DTRR_ac_DW.is_active_c1_DTRR_ac) == 0U)
    {
        /* Entry: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_X250Ducato/PdlPctTrqArbCond_Determination */
        DTRR_ac_DW.is_active_c1_DTRR_ac = 1U;

        /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_X250Ducato/PdlPctTrqArbCond_Determination */
        /* Transition: '<S669>:2' */
        DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S669>:1' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = true;
        DTRR_ac_B.LeDTRR_b_DrvMdEco_active = false;
        DTRR_ac_B.LeDTRR_b_DrvMdPower_active = false;
        rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Normal;
        rtb_LeDTRR_cnt_DrvMdIdx = 0U;
    }
    else
    {
        switch (DTRR_ac_DW.is_c1_DTRR_ac)
        {
          case DTRR_ac_IN_ECO:
            rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Eco;
            rtb_LeDTRR_cnt_DrvMdIdx = 1U;

            /* During 'ECO': '<S669>:4' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_TracPlus)
            {
                /* Transition: '<S669>:116' */
                /* Transition: '<S669>:122' */
                DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_POWER;

                /* Entry 'POWER': '<S669>:110' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdPower_active = true;
                rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_TracPlus;
                rtb_LeDTRR_cnt_DrvMdIdx = 2U;
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Normal)
                {
                    /* Transition: '<S669>:20' */
                    DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_NORMAL;

                    /* Entry 'NORMAL': '<S669>:1' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdPower_active = false;
                    rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Normal;
                    rtb_LeDTRR_cnt_DrvMdIdx = 0U;
                }
            }
            break;

          case DTRR_ac_IN_NORMAL:
            rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Normal;
            rtb_LeDTRR_cnt_DrvMdIdx = 0U;

            /* During 'NORMAL': '<S669>:1' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Eco)
            {
                /* Transition: '<S669>:18' */
                DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_ECO;

                /* Entry 'ECO': '<S669>:4' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdPower_active = false;
                rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Eco;
                rtb_LeDTRR_cnt_DrvMdIdx = 1U;
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                        CeDMIR_e_TracPlus)
                {
                    /* Transition: '<S669>:111' */
                    DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_POWER;

                    /* Entry 'POWER': '<S669>:110' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdPower_active = true;
                    rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_TracPlus;
                    rtb_LeDTRR_cnt_DrvMdIdx = 2U;
                }
            }
            break;

          default:
            rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_TracPlus;
            rtb_LeDTRR_cnt_DrvMdIdx = 2U;

            /* During 'POWER': '<S669>:110' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Normal)
            {
                /* Transition: '<S669>:112' */
                DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_NORMAL;

                /* Entry 'NORMAL': '<S669>:1' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdEco_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdPower_active = false;
                rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Normal;
                rtb_LeDTRR_cnt_DrvMdIdx = 0U;
            }
            else
            {
                if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Eco)
                {
                    /* Transition: '<S669>:115' */
                    /* Transition: '<S669>:124' */
                    DTRR_ac_DW.is_c1_DTRR_ac = DTRR_ac_IN_ECO;

                    /* Entry 'ECO': '<S669>:4' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdEco_active = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdPower_active = false;
                    rtb_LeDTRR_e_DrvMdActive = CeDMIR_e_Eco;
                    rtb_LeDTRR_cnt_DrvMdIdx = 1U;
                }
            }
            break;
        }
    }

    /* VariantMerge generated from: '<S133>/Variant_Source1' incorporates:
     *  Constant: '<S500>/FALSE Constant'
     *  Constant: '<S664>/Constant'
     *  Constant: '<S665>/Constant'
     *  Constant: '<S666>/Constant'
     */
    rtb_TmpSignalConversionAtGainIn[0] = DTRR_ac_B.LeDTRR_b_DrvMdNormal_active;
    rtb_TmpSignalConversionAtGainIn[1] = false;
    rtb_TmpSignalConversionAtGainIn[2] = DTRR_ac_B.LeDTRR_b_DrvMdEco_active;
    rtb_TmpSignalConversionAtGainIn[3] = false;
    rtb_TmpSignalConversionAtGainIn[4] = false;
    rtb_TmpSignalConversionAtGainIn[5] = false;
    rtb_TmpSignalConversionAtGainIn[6] = DTRR_ac_B.LeDTRR_b_DrvMdPower_active;
    rtb_TmpSignalConversionAtGainIn[7] = false;
    rtb_TmpSignalConversionAtGainIn[8] = false;
    rtb_TmpSignalConversionAtGainIn[9] = false;
    rtb_TmpSignalConversionAtGainIn[10] = false;
    rtb_TmpSignalConversionAtGainIn[11] = false;
    rtb_TmpSignalConversionAtGainIn[12] = false;
    rtb_TmpSignalConversionAtGainIn[13] = false;

#elif !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    /* UnitDelay: '<S507>/Unit Delay1' */
    rtb_UnitDelay1 = DTRR_ac_DW.UnitDelay1_DSTATE;

    /* Sum: '<S13>/Sum' incorporates:
     *  UnitDelay: '<S507>/Unit Delay2'
     */
    rtb_Summation = DTRR_ac_DW.UnitDelay2_DSTATE;

    /* Sum: '<S507>/Sum7' incorporates:
     *  UnitDelay: '<S507>/Unit Delay2'
     */
    rtb_Sum7 = VeDTRC_M_PtcPdlMaxWhlTrq - DTRR_ac_DW.UnitDelay2_DSTATE;

#endif

    /* End of Chart: '<S500>/PdlPctTrqArbCond_Determination' */

    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S680>/Constant'
     *  RelationalOperator: '<S501>/Equal'
     */
    rtb_Switch2_kx = (((uint32)rtb_TmpSignalConversionAtVeEBMR) ==
                      CeEBMR_e_eBoostEngaged);

    /* Switch: '<S501>/Switch1' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S501>/Switch1' incorporates:
         *  Lookup_n-D: '<S682>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_Pct_PtcPdlPctTrq_Normal = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Boost[0])), ((const float32 *)
              &(KyDTRR_K_PtcPdlPctTrqWhl_Boost[0])), ((const float32 *)
              &(KtDTRR_K_PtcPdlPctTrqWhl_Boost[0])), DTRR_ac_ConstP.pooled6, 17U);
    }
    else
    {
        /* Switch: '<S501>/Switch1' incorporates:
         *  Lookup_n-D: '<S681>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_Pct_PtcPdlPctTrq_Normal = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl[0])), ((const float32 *)
              &(KyDTRR_K_PtcPdlPctTrqWhl[0])), ((const float32 *)
              &(KtDTRR_K_PtcPdlPctTrqWhl[0])), DTRR_ac_ConstP.pooled6, 17U);
    }

    /* End of Switch: '<S501>/Switch1' */

    /* Lookup_n-D: '<S690>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_Pct_PtcPdlPctTrq_Range = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
        &(KxDTRR_K_PtcPdlPctTrqWhl_Range[0])), ((const float32 *)
        &(KyDTRR_K_PtcPdlPctTrqWhl_Range[0])), ((const float32 *)
        &(KtDTRR_K_PtcPdlPctTrqWhl_Range[0])), DTRR_ac_ConstP.pooled6, 17U);

    /* Product: '<S507>/Product3' incorporates:
     *  Abs: '<S507>/Abs2'
     *  Sum: '<S507>/Sum3'
     *  Sum: '<S507>/Sum4'
     *  Sum: '<S507>/xx3'
     *  UnitDelay: '<S507>/Unit Delay3'
     */
#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    /* Abs: '<S507>/Abs2' */
    VeDTRR_M_DelCurr2NormalWhlTrqReq = fabsf(rtb_UnitDelay1 - ((rtb_Sum7 *
        VeDTRR_Pct_PtcPdlPctTrq_Normal) + rtb_Summation));

    /* UnitDelay: '<S507>/Unit Delay3' */
    rtb_UnitDelay3 = DTRR_ac_DW.UnitDelay3_DSTATE;

    /* Sum: '<S507>/Sum3' */
    rtb_Sum3 = VeDTRC_M_PtcPdlMaxWhlTrq - rtb_UnitDelay3;

#endif

    /* End of Product: '<S507>/Product3' */

    /* Switch: '<S501>/Switch3' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S501>/Switch3' incorporates:
         *  Lookup_n-D: '<S684>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_Pct_PtcPdlPctTrq_Camel = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Camel_Boost[0])), ((const
               float32 *)&(KyDTRR_K_PtcPdlPctTrqWhl_Camel_Boost[0])), ((const
               float32 *)&(KtDTRR_K_PtcPdlPctTrqWhl_Camel_Boost[0])),
             DTRR_ac_ConstP.pooled6, 17U);
    }
    else
    {
        /* Switch: '<S501>/Switch3' incorporates:
         *  Lookup_n-D: '<S683>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_Pct_PtcPdlPctTrq_Camel = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Camel[0])), ((const float32 *)
              &(KyDTRR_K_PtcPdlPctTrqWhl_Camel[0])), ((const float32 *)
              &(KtDTRR_K_PtcPdlPctTrqWhl_Camel[0])), DTRR_ac_ConstP.pooled6, 17U);
    }

    /* End of Switch: '<S501>/Switch3' */

    /* Product: '<S507>/Product1' incorporates:
     *  Abs: '<S507>/Abs'
     *  Abs: '<S507>/Abs1'
     *  Chart: '<S496>/PdlPctTrqArbCond_Determination'
     *  Constant: '<S511>/Constant'
     *  Constant: '<S512>/Constant'
     *  Constant: '<S513>/Constant'
     *  Constant: '<S514>/Calib'
     *  Gain: '<S503>/Gain'
     *  Gain: '<S517>/Gain'
     *  Gain: '<S518>/Gain'
     *  Logic: '<S496>/Logical Operator'
     *  Product: '<S507>/Product2'
     *  SignalConversion generated from: '<S503>/Gain'
     *  Sum: '<S507>/Sum1'
     *  Sum: '<S507>/Sum2'
     *  Sum: '<S507>/Sum5'
     *  Sum: '<S507>/xx1'
     *  Sum: '<S507>/xx2'
     *  UnitDelay: '<S496>/Unit Delay1'
     */
#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    /* Abs: '<S507>/Abs' */
    VeDTRR_M_DelCurr2RangeWhlTrqReq = fabsf(rtb_UnitDelay1 - ((rtb_Sum3 *
        VeDTRR_Pct_PtcPdlPctTrq_Range) + rtb_UnitDelay3));

    /* Abs: '<S507>/Abs1' */
    VeDTRR_M_DelCurr2CamelWhlTrqReq = fabsf(rtb_UnitDelay1 -
        (((VeDTRC_M_PtcPdlMaxWhlTrq - rtb_UnitDelay3) *
          VeDTRR_Pct_PtcPdlPctTrq_Camel) + rtb_UnitDelay3));

    /* Logic: '<S496>/Logical Operator' */
    rtb_LogicalOperator_ku = ((DTRR_ac_DW.UnitDelay1_DSTATE_e) ||
        rtb_TmpSignalConversionAtVeDMIR);

    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_All_Apps/PdlPctTrqArbCond_Determination */
    /* During: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_All_Apps/PdlPctTrqArbCond_Determination */
    if (((uint32)DTRR_ac_DW.is_active_c2_DTRR_ac) == 0U)
    {
        /* Entry: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_All_Apps/PdlPctTrqArbCond_Determination */
        DTRR_ac_DW.is_active_c2_DTRR_ac = 1U;

        /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_All_Apps/PdlPctTrqArbCond_Determination */
        /* Transition: '<S516>:2' */
        DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S516>:1' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = true;
        DTRR_ac_B.LeDTRR_b_DrvMdRange_active = false;
        DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = false;
        rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Normal;
    }
    else
    {
        switch (DTRR_ac_DW.is_c2_DTRR_ac)
        {
          case DTRR_ac_IN_CAMEL:
            rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Eco;

            /* During 'CAMEL': '<S516>:4' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_City)
            {
                /* Transition: '<S516>:23' */
                DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_RANGE;

                /* Entry 'RANGE': '<S516>:3' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = false;
                DTRR_ac_B.LeDTRR_b_DrvMdRange_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = false;
                rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_City;
            }
            else
            {
                if (((((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                        CeDMIR_e_Normal) && (VeDTRR_M_DelCurr2NormalWhlTrqReq <
                        KeDTRR_M_DeltaTrqThresh)) || rtb_LogicalOperator_ku)
                {
                    /* Transition: '<S516>:20' */
                    /* Transition: '<S516>:21' */
                    DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_NORMAL;

                    /* Entry 'NORMAL': '<S516>:1' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdRange_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = false;
                    rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Normal;
                }
            }
            break;

          case DTRR_ac_IN_NORMAL:
            rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Normal;

            /* During 'NORMAL': '<S516>:1' */
            /* Transition: '<S516>:12' */
            tmp = !rtb_LogicalOperator_ku;
            if (((((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_City) &&
                 (VeDTRR_M_DelCurr2RangeWhlTrqReq < KeDTRR_M_DeltaTrqThresh)) &&
                tmp)
            {
                /* Transition: '<S516>:11' */
                DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_RANGE;

                /* Entry 'RANGE': '<S516>:3' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = false;
                DTRR_ac_B.LeDTRR_b_DrvMdRange_active = true;
                DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = false;
                rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_City;
            }
            else
            {
                /* Transition: '<S516>:16' */
                if (((((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Eco)
                     && (VeDTRR_M_DelCurr2CamelWhlTrqReq <
                         KeDTRR_M_DeltaTrqThresh)) && tmp)
                {
                    /* Transition: '<S516>:18' */
                    DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_CAMEL;

                    /* Entry 'CAMEL': '<S516>:4' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdRange_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = true;
                    rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Eco;
                }
            }
            break;

          default:
            rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_City;

            /* During 'RANGE': '<S516>:3' */
            if (((uint32)rtb_TmpSignalConversionAtVeDM_c) == CeDMIR_e_Eco)
            {
                /* Transition: '<S516>:22' */
                DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_CAMEL;

                /* Entry 'CAMEL': '<S516>:4' */
                DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = false;
                DTRR_ac_B.LeDTRR_b_DrvMdRange_active = false;
                DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = true;
                rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Eco;
            }
            else
            {
                if (((((uint32)rtb_TmpSignalConversionAtVeDM_c) ==
                        CeDMIR_e_Normal) && (VeDTRR_M_DelCurr2NormalWhlTrqReq <
                        KeDTRR_M_DeltaTrqThresh)) || rtb_LogicalOperator_ku)
                {
                    /* Transition: '<S516>:14' */
                    /* Transition: '<S516>:15' */
                    DTRR_ac_DW.is_c2_DTRR_ac = DTRR_ac_IN_NORMAL;

                    /* Entry 'NORMAL': '<S516>:1' */
                    DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my = true;
                    DTRR_ac_B.LeDTRR_b_DrvMdRange_active = false;
                    DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o = false;
                    rtb_LeDTRR_e_DrvMdActv = CeDMIR_e_Normal;
                }
            }
            break;
        }
    }

    /* VariantMerge generated from: '<S133>/Variant_Source1' incorporates:
     *  Constant: '<S496>/FALSE Constant'
     *  Constant: '<S511>/Constant'
     *  Constant: '<S512>/Constant'
     *  Constant: '<S513>/Constant'
     *  Constant: '<S514>/Calib'
     */
    rtb_TmpSignalConversionAtGainIn[0] =
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my;
    rtb_TmpSignalConversionAtGainIn[1] = false;
    rtb_TmpSignalConversionAtGainIn[2] = DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o;
    rtb_TmpSignalConversionAtGainIn[3] = false;
    rtb_TmpSignalConversionAtGainIn[4] = false;
    rtb_TmpSignalConversionAtGainIn[5] = DTRR_ac_B.LeDTRR_b_DrvMdRange_active;
    rtb_TmpSignalConversionAtGainIn[6] = false;
    rtb_TmpSignalConversionAtGainIn[7] = false;
    rtb_TmpSignalConversionAtGainIn[8] = false;
    rtb_TmpSignalConversionAtGainIn[9] = false;
    rtb_TmpSignalConversionAtGainIn[10] = false;
    rtb_TmpSignalConversionAtGainIn[11] = false;
    rtb_TmpSignalConversionAtGainIn[12] = false;
    rtb_TmpSignalConversionAtGainIn[13] = false;

#endif

    /* End of Product: '<S507>/Product1' */

    /* Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' incorporates:
     *  Constant: '<S527>/Constant'
     *  Constant: '<S528>/Constant'
     *  Constant: '<S529>/Constant'
     *  Constant: '<S530>/Constant'
     *  Constant: '<S531>/Constant'
     *  Constant: '<S532>/Constant'
     *  Constant: '<S533>/Constant'
     *  Constant: '<S535>/Constant'
     *  Constant: '<S536>/Constant'
     *  Constant: '<S537>/Constant'
     *  Inport: '<Root>/VeTMDR_e_PropulsionMd'
     */
    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination_LB */
    /* During: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination_LB */
    if (((uint32)DTRR_ac_DW.is_active_c6_DTRR_ac) == 0U)
    {
        /* Entry: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination_LB */
        DTRR_ac_DW.is_active_c6_DTRR_ac = 1U;

        /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination_LB */
        /* Transition: '<S549>:265' */
        DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
        DTRR_ac_enter_atomic_NORMAL();
    }
    else
    {
        (void)Rte_Read_VeTMDR_e_PropulsionMd_Value(&tmpRead_h);
        guard1 = false;
        guard2 = false;
        switch (DTRR_ac_DW.is_c6_DTRR_ac)
        {
          case DTRR_ac_IN_DRAG:
            DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 10U;

            /* During 'DRAG': '<S549>:361' */
            if (((uint32)tmpRead_h) == CeTMDR_e_ECO)
            {
                /* Transition: '<S549>:364' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
                DTRR_ac_enter_atomic_ECO();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Tow)
            {
                /* Transition: '<S549>:633' */
                /* Transition: '<S549>:632' */
                /* Transition: '<S549>:630' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
                DTRR_ac_enter_atomic_TOW();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Auto)
            {
                /* Transition: '<S549>:380' */
                /* Transition: '<S549>:381' */
                /* Transition: '<S549>:377' */
                /* Transition: '<S549>:378' */
                /* Transition: '<S549>:339' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
                DTRR_ac_enter_atomic_NORMAL();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Snow)
            {
                /* Transition: '<S549>:403' */
                /* Transition: '<S549>:402' */
                /* Transition: '<S549>:399' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
                DTRR_ac_enter_atomic_SNOW();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Track)
            {
                /* Transition: '<S549>:521' */
                /* Transition: '<S549>:506' */
                /* Transition: '<S549>:507' */
                /* Transition: '<S549>:575' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
                DTRR_ac_enter_atomic_TRACK();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_MudSand)
            {
                /* Transition: '<S549>:544' */
                /* Transition: '<S549>:535' */
                /* Transition: '<S549>:546' */
                /* Transition: '<S549>:532' */
                /* Transition: '<S549>:530' */
                /* Transition: '<S549>:528' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
                DTRR_ac_enter_atomic_MUDSAND();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Sport)
            {
                /* Transition: '<S549>:565' */
                /* Transition: '<S549>:557' */
                /* Transition: '<S549>:567' */
                /* Transition: '<S549>:555' */
                /* Transition: '<S549>:570' */
                /* Transition: '<S549>:553' */
                /* Transition: '<S549>:552' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
                DTRR_ac_enter_atomic_SPORT();
            }
            else
            {
                if (((uint32)tmpRead_h) == CeTMDR_e_Valet)
                {
                    /* Transition: '<S549>:366' */
                    DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
                    DTRR_ac_enter_atomic_VALET();
                }
            }
            break;

          case DTRR_ac_IN_ECO_d:
            DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 9U;

            /* During 'ECO': '<S549>:292' */
            if (((uint32)tmpRead_h) == CeTMDR_e_Track)
            {
                /* Transition: '<S549>:359' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
                DTRR_ac_enter_atomic_TRACK();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Sport)
            {
                /* Transition: '<S549>:568' */
                /* Transition: '<S549>:555' */
                /* Transition: '<S549>:570' */
                /* Transition: '<S549>:553' */
                /* Transition: '<S549>:552' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
                DTRR_ac_enter_atomic_SPORT();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_MudSand)
            {
                /* Transition: '<S549>:547' */
                /* Transition: '<S549>:532' */
                /* Transition: '<S549>:530' */
                /* Transition: '<S549>:528' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
                DTRR_ac_enter_atomic_MUDSAND();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Valet)
            {
                /* Transition: '<S549>:429' */
                /* Transition: '<S549>:430' */
                /* Transition: '<S549>:427' */
                /* Transition: '<S549>:425' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
                DTRR_ac_enter_atomic_VALET();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Snow)
            {
                /* Transition: '<S549>:408' */
                /* Transition: '<S549>:407' */
                /* Transition: '<S549>:405' */
                /* Transition: '<S549>:402' */
                /* Transition: '<S549>:399' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
                DTRR_ac_enter_atomic_SNOW();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Auto)
            {
                /* Transition: '<S549>:385' */
                /* Transition: '<S549>:386' */
                /* Transition: '<S549>:383' */
                /* Transition: '<S549>:381' */
                /* Transition: '<S549>:377' */
                /* Transition: '<S549>:378' */
                /* Transition: '<S549>:339' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
                DTRR_ac_enter_atomic_NORMAL();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Drag)
            {
                /* Transition: '<S549>:365' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Rock)
            {
                /* Transition: '<S549>:666' */
                /* Transition: '<S549>:667' */
                /* Transition: '<S549>:669' */
                /* Transition: '<S549>:664' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
                DTRR_ac_enter_atomic_ROCK();
            }
            else
            {
                if (((uint32)tmpRead_h) == CeTMDR_e_Tow)
                {
                    /* Transition: '<S549>:357' */
                    DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
                    DTRR_ac_enter_atomic_TOW();
                }
            }
            break;

          case DTRR_ac_IN_MUDSAND_e:
            DTRR_ac_MUDSAND();
            break;

          case DTRR_ac_IN_NORMAL_i:
            DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 1U;

            /* During 'NORMAL': '<S549>:1' */
            if (((uint32)tmpRead_h) == CeTMDR_e_Sport)
            {
                /* Transition: '<S549>:12' */
                /* Transition: '<S549>:11' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
                DTRR_ac_enter_atomic_SPORT();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Rock)
            {
                /* Transition: '<S549>:332' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
                DTRR_ac_enter_atomic_ROCK();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Snow)
            {
                /* Transition: '<S549>:344' */
                /* Transition: '<S549>:340' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
                DTRR_ac_enter_atomic_SNOW();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Valet)
            {
                /* Transition: '<S549>:423' */
                /* Transition: '<S549>:424' */
                /* Transition: '<S549>:425' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
                DTRR_ac_enter_atomic_VALET();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Drag)
            {
                /* Transition: '<S549>:461' */
                /* Transition: '<S549>:460' */
                /* Transition: '<S549>:464' */
                /* Transition: '<S549>:463' */
                /* Transition: '<S549>:458' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_ECO)
            {
                /* Transition: '<S549>:489' */
                /* Transition: '<S549>:490' */
                /* Transition: '<S549>:514' */
                /* Transition: '<S549>:491' */
                /* Transition: '<S549>:484' */
                /* Transition: '<S549>:548' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
                DTRR_ac_enter_atomic_ECO();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Track)
            {
                /* Transition: '<S549>:502' */
                /* Transition: '<S549>:511' */
                /* Transition: '<S549>:517' */
                /* Transition: '<S549>:520' */
                /* Transition: '<S549>:506' */
                /* Transition: '<S549>:507' */
                /* Transition: '<S549>:575' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
                DTRR_ac_enter_atomic_TRACK();
            }
            else
            {
                if (((uint32)tmpRead_h) == CeTMDR_e_MudSand)
                {
                    /* Transition: '<S549>:534' */
                    /* Transition: '<S549>:537' */
                    /* Transition: '<S549>:540' */
                    /* Transition: '<S549>:543' */
                    /* Transition: '<S549>:535' */
                    /* Transition: '<S549>:546' */
                    /* Transition: '<S549>:532' */
                    /* Transition: '<S549>:530' */
                    /* Transition: '<S549>:528' */
                    DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
                    DTRR_ac_enter_atomic_MUDSAND();
                }
            }
            break;

          case DTRR_ac_IN_ROCK_e:
            DTRR_ac_ROCK();
            break;

          case DTRR_ac_IN_SNOW_f:
            DTRR_ac_SNOW_g();
            break;

          case DTRR_ac_IN_SPORT_o:
            DTRR_ac_SPORT_b();
            break;

          case DTRR_ac_IN_TOW_m:
            DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 6U;

            /* During 'TOW': '<S549>:117' */
            if (((uint32)tmpRead_h) == CeTMDR_e_Sport)
            {
                /* Transition: '<S549>:648' */
                /* Transition: '<S549>:649' */
                /* Transition: '<S549>:650' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
                DTRR_ac_enter_atomic_SPORT();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_MudSand)
            {
                /* Transition: '<S549>:347' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
                DTRR_ac_enter_atomic_MUDSAND();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Track)
            {
                /* Transition: '<S549>:613' */
                /* Transition: '<S549>:616' */
                /* Transition: '<S549>:615' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
                DTRR_ac_enter_atomic_TRACK();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_ECO)
            {
                /* Transition: '<S549>:356' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
                DTRR_ac_enter_atomic_ECO();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Drag)
            {
                /* Transition: '<S549>:624' */
                /* Transition: '<S549>:627' */
                /* Transition: '<S549>:629' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
                DTRR_ac_enter_atomic_DRAG();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Valet)
            {
                /* Transition: '<S549>:348' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_VALET;
                DTRR_ac_enter_atomic_VALET();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Rock)
            {
                /* Transition: '<S549>:670' */
                /* Transition: '<S549>:669' */
                /* Transition: '<S549>:664' */
                guard2 = true;
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Snow)
            {
                /* Transition: '<S549>:638' */
                /* Transition: '<S549>:639' */
                /* Transition: '<S549>:640' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
                DTRR_ac_enter_atomic_SNOW();
            }
            else
            {
                if (((uint32)tmpRead_h) == CeTMDR_e_Rock)
                {
                    /* Transition: '<S549>:353' */
                    guard2 = true;
                }
            }
            break;

          case DTRR_ac_IN_TRACK:
            DTRR_ac_TRACK();
            break;

          default:
            DTRR_ac_B.LeDTRR_cnt_DrvMdIdx = 7U;

            /* During 'VALET': '<S549>:281' */
            if (((uint32)tmpRead_h) == CeTMDR_e_Tow)
            {
                /* Transition: '<S549>:349' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TOW_m;
                DTRR_ac_enter_atomic_TOW();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Drag)
            {
                /* Transition: '<S549>:367' */
                guard1 = true;
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Auto)
            {
                /* Transition: '<S549>:376' */
                /* Transition: '<S549>:377' */
                /* Transition: '<S549>:378' */
                /* Transition: '<S549>:339' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_NORMAL_i;
                DTRR_ac_enter_atomic_NORMAL();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Drag)
            {
                /* Transition: '<S549>:462' */
                /* Transition: '<S549>:463' */
                /* Transition: '<S549>:458' */
                guard1 = true;
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_ECO)
            {
                /* Transition: '<S549>:492' */
                /* Transition: '<S549>:491' */
                /* Transition: '<S549>:484' */
                /* Transition: '<S549>:548' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ECO_d;
                DTRR_ac_enter_atomic_ECO();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Track)
            {
                /* Transition: '<S549>:518' */
                /* Transition: '<S549>:520' */
                /* Transition: '<S549>:506' */
                /* Transition: '<S549>:507' */
                /* Transition: '<S549>:575' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_TRACK;
                DTRR_ac_enter_atomic_TRACK();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_MudSand)
            {
                /* Transition: '<S549>:541' */
                /* Transition: '<S549>:543' */
                /* Transition: '<S549>:535' */
                /* Transition: '<S549>:546' */
                /* Transition: '<S549>:532' */
                /* Transition: '<S549>:530' */
                /* Transition: '<S549>:528' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_MUDSAND_e;
                DTRR_ac_enter_atomic_MUDSAND();
            }
            else if (((uint32)tmpRead_h) == CeTMDR_e_Sport)
            {
                /* Transition: '<S549>:562' */
                /* Transition: '<S549>:564' */
                /* Transition: '<S549>:557' */
                /* Transition: '<S549>:567' */
                /* Transition: '<S549>:555' */
                /* Transition: '<S549>:570' */
                /* Transition: '<S549>:553' */
                /* Transition: '<S549>:552' */
                DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SPORT_o;
                DTRR_ac_enter_atomic_SPORT();
            }
            else
            {
                if (((uint32)tmpRead_h) == CeTMDR_e_Snow)
                {
                    /* Transition: '<S549>:350' */
                    DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_SNOW_f;
                    DTRR_ac_enter_atomic_SNOW();
                }
            }
            break;
        }

        if (guard2)
        {
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_ROCK_e;
            DTRR_ac_enter_atomic_ROCK();
        }

        if (guard1)
        {
            DTRR_ac_DW.is_c6_DTRR_ac = DTRR_ac_IN_DRAG;
            DTRR_ac_enter_atomic_DRAG();
        }
    }

    /* End of Chart: '<S497>/PdlPctTrqArbCond_Determination_LB' */

    /* Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' incorporates:
     *  Constant: '<S540>/Constant'
     *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
     */
    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination DTBEV */
    /* During: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination DTBEV */
    if (((uint32)DTRR_ac_DW.is_active_c5_DTRR_ac) == 0U)
    {
        /* Entry: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination DTBEV */
        DTRR_ac_DW.is_active_c5_DTRR_ac = 1U;

        /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_DTBEV/PdlPctTrqArbCond_Determination DTBEV */
        /* Transition: '<S548>:265' */
        DTRR_ac_DW.is_c5_DTRR_ac = DTRR_ac_IN_ELETRIC;

        /* Entry Internal 'ELETRIC': '<S548>:151' */
        /* Transition: '<S548>:2' */
        DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

        /* Entry 'NORMAL': '<S548>:1' */
        DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
        DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
        DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
        DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
        DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
        DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
        DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
        rtb_Switch_ki = 1U;
    }
    else if (((sint32)DTRR_ac_DW.is_c5_DTRR_ac) == 1)
    {
        rtb_Switch_ki = 8U;

        /* During 'ECO': '<S548>:154' */
        if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeDMDR_e_D) ==
                CeDMDR_e_Normal_Mode)
        {
            /* Transition: '<S548>:155' */
            /* Transition: '<S548>:275' */
            DTRR_ac_DW.is_c5_DTRR_ac = DTRR_ac_IN_ELETRIC;
            DTRR_ac_DW.is_ELETRIC = DTRR_ac_IN_NORMAL;

            /* Entry 'NORMAL': '<S548>:1' */
            DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m = true;
            DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e = false;
            DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m = false;
            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f = false;
            DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h = false;
            DTRR_ac_B.LeDTRR_e_DrvMdActive_e = CeDMDR_e_Normal_Mode;
            rtb_Switch_ki = 1U;
        }
    }
    else
    {
        DTRR_ac_ELETRIC(&rtb_Switch_ki);
    }

    /* End of Chart: '<S497>/PdlPctTrqArbCond_Determination DTBEV' */

    /* Switch: '<S133>/Switch1' incorporates:
     *  Constant: '<S495>/Calib'
     *  Gain: '<S505>/Gain'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_4

    if (KeDTRR_b_LBProgEnbl)
    {
        /* SignalConversion generated from: '<S506>/Gain' incorporates:
         *  Constant: '<S497>/FALSE Constant1'
         *  Gain: '<S562>/Gain'
         *  Gain: '<S563>/Gain'
         *  Gain: '<S564>/Gain'
         *  Gain: '<S565>/Gain'
         *  Gain: '<S566>/Gain'
         *  Gain: '<S567>/Gain'
         *  Gain: '<S568>/Gain'
         *  Gain: '<S574>/Gain'
         *  Gain: '<S575>/Gain'
         *  Gain: '<S576>/Gain'
         */
        rtb_TmpSignalConversionAtGainIn[0] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active;
        rtb_TmpSignalConversionAtGainIn[1] = false;
        rtb_TmpSignalConversionAtGainIn[2] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active;
        rtb_TmpSignalConversionAtGainIn[3] = false;
        rtb_TmpSignalConversionAtGainIn[4] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active;
        rtb_TmpSignalConversionAtGainIn[5] = false;
        rtb_TmpSignalConversionAtGainIn[6] = false;
        rtb_TmpSignalConversionAtGainIn[7] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active;
        rtb_TmpSignalConversionAtGainIn[8] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active;
        rtb_TmpSignalConversionAtGainIn[9] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active;
        rtb_TmpSignalConversionAtGainIn[10] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active;
        rtb_TmpSignalConversionAtGainIn[11] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active;
        rtb_TmpSignalConversionAtGainIn[12] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ;
        rtb_TmpSignalConversionAtGainIn[13] =
            DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active;
    }
    else
    {
        /* SignalConversion generated from: '<S506>/Gain' incorporates:
         *  Constant: '<S497>/FALSE Constant'
         *  Gain: '<S560>/Gain'
         *  Gain: '<S561>/Gain'
         *  Gain: '<S569>/Gain'
         *  Gain: '<S570>/Gain'
         *  Gain: '<S571>/Gain'
         *  Gain: '<S572>/Gain'
         *  Gain: '<S573>/Gain'
         */
        rtb_TmpSignalConversionAtGainIn[0] =
            DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m;
        rtb_TmpSignalConversionAtGainIn[1] = false;
        rtb_TmpSignalConversionAtGainIn[2] =
            DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_a;
        rtb_TmpSignalConversionAtGainIn[3] = false;
        rtb_TmpSignalConversionAtGainIn[4] =
            DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e;
        rtb_TmpSignalConversionAtGainIn[5] = false;
        rtb_TmpSignalConversionAtGainIn[6] = false;
        rtb_TmpSignalConversionAtGainIn[7] =
            DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k;
        rtb_TmpSignalConversionAtGainIn[8] =
            DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h;
        rtb_TmpSignalConversionAtGainIn[9] = false;
        rtb_TmpSignalConversionAtGainIn[10] = false;
        rtb_TmpSignalConversionAtGainIn[11] = false;
        rtb_TmpSignalConversionAtGainIn[12] =
            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f;
        rtb_TmpSignalConversionAtGainIn[13] =
            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m;
    }

#endif

    /* End of Switch: '<S133>/Switch1' */

    /* Chart: '<S499>/PdlPctTrqArbCond_Determination' incorporates:
     *  Constant: '<S615>/Constant'
     *  Constant: '<S616>/Constant'
     *  Constant: '<S617>/Constant'
     *  Constant: '<S618>/Constant'
     *  Constant: '<S619>/Constant'
     *  Constant: '<S621>/Constant'
     *  Constant: '<S622>/Constant'
     *  Constant: '<S623>/Constant'
     *  Constant: '<S625>/Constant'
     *  Constant: '<S626>/Constant'
     *  Constant: '<S627>/Constant'
     *  Gain: '<S506>/Gain'
     *  Gain: '<S643>/Gain'
     *  Gain: '<S644>/Gain'
     *  Gain: '<S645>/Gain'
     *  Gain: '<S646>/Gain'
     *  Gain: '<S647>/Gain'
     *  Gain: '<S648>/Gain'
     *  Gain: '<S649>/Gain'
     *  Gain: '<S650>/Gain'
     *  Gain: '<S651>/Gain'
     *  Gain: '<S652>/Gain'
     *  If: '<S496>/If_DrvMd'
     *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd'
     *  SignalConversion generated from: '<S506>/Gain'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_5

    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_REPB/PdlPctTrqArbCond_Determination */
    /* During: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_REPB/PdlPctTrqArbCond_Determination */
    if (((uint32)DTRR_ac_DW.is_active_c4_DTRR_ac) == 0U)
    {
        /* Entry: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_REPB/PdlPctTrqArbCond_Determination */
        DTRR_ac_DW.is_active_c4_DTRR_ac = 1U;

        /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Pedal_Mapping/Pedal_Percent/PM_REPB/PdlPctTrqArbCond_Determination */
        /* Transition: '<S632>:291' */
        DTRR_ac_DW.is_c4_DTRR_ac = DTRR_ac_IN_ELECTRIC;

        /* Entry 'ELECTRIC': '<S632>:280' */
        DTRR_ac_B.LeDTRR_b_DrvMdCamel_active = false;

        /* Entry Internal 'ELECTRIC': '<S632>:280' */
        /* Transition: '<S632>:292' */
        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_NORMAL_k;
        DTRR_ac_enter_atomic_NORMAL_m();
    }
    else if (((sint32)DTRR_ac_DW.is_c4_DTRR_ac) == 1)
    {
        DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 1U;

        /* During 'ECO': '<S632>:332' */
        if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeDMDR_e_D) ==
                CeDMDR_e_Normal_Mode)
        {
            /* Transition: '<S632>:336' */
            DTRR_ac_DW.is_c4_DTRR_ac = DTRR_ac_IN_ELECTRIC;

            /* Entry 'ELECTRIC': '<S632>:280' */
            DTRR_ac_B.LeDTRR_b_DrvMdCamel_active = false;

            /* Entry Internal 'ELECTRIC': '<S632>:280' */
            /* Transition: '<S632>:292' */
            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_NORMAL_k;
            DTRR_ac_enter_atomic_NORMAL_m();
        }
    }
    else
    {
        /* During 'ELECTRIC': '<S632>:280' */
        if (((uint32)DTRR_ac_B.TmpSignalConversionAtVeDMDR_e_D) ==
                CeDMDR_e_Camel_Mode)
        {
            /* Transition: '<S632>:337' */
            /* Exit Internal 'ELECTRIC': '<S632>:280' */
            DTRR_ac_DW.is_ELECTRIC = 0;
            DTRR_ac_DW.is_c4_DTRR_ac = DTRR_ac_IN_ECO;

            /* Entry 'ECO': '<S632>:332' */
            DTRR_ac_B.LeDTRR_b_DrvMdCamel_active = true;
            DTRR_ac_B.LeDTRR_b_TrrMdNormal_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSport_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdRock_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdSnow_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdTow_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdTrack_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdDrag_active = false;
            DTRR_ac_B.LeDTRR_b_TrrMdValet_active = false;
            DTRR_ac_B.LeDTRR_e_DrvMdActive = CeDMDR_e_Camel_Mode;
            DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 1U;
        }
        else
        {
            switch (DTRR_ac_DW.is_ELECTRIC)
            {
              case DTRR_ac_IN_DRAG:
                DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 9U;

                /* During 'DRAG': '<S632>:352' */
                tmp_0 = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
                if (((uint32)tmp_0) != CeTMDR_e_Drag)
                {
                    /* Transition: '<S632>:355' */
                    /* Transition: '<S632>:450' */
                    /* Transition: '<S632>:458' */
                    if (((uint32)tmp_0) == CeTMDR_e_Valet)
                    {
                        /* Transition: '<S632>:456' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
                        DTRR_ac_enter_atomic_VALET_c();
                    }
                    else
                    {
                        /* Transition: '<S632>:455' */
                        if (((uint32)tmp_0) == CeTMDR_e_Drag)
                        {
                            /* Transition: '<S632>:356' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                            DTRR_ac_enter_atomic_DRAG_j();
                        }
                        else
                        {
                            /* Transition: '<S632>:430' */
                            if (((uint32)tmp_0) == CeTMDR_e_Track)
                            {
                                /* Transition: '<S632>:353' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                                DTRR_ac_enter_atomic_TRACK_e();
                            }
                            else
                            {
                                /* Transition: '<S632>:431' */
                                if (((uint32)tmp_0) == CeTMDR_e_Rock)
                                {
                                    /* Transition: '<S632>:329' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                                    DTRR_ac_enter_atomic_ROCK_b();
                                }
                                else
                                {
                                    /* Transition: '<S632>:428' */
                                    if (((uint32)tmp_0) == CeTMDR_e_MudSand)
                                    {
                                        /* Transition: '<S632>:328' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_MUDSAND_e1;
                                        DTRR_ac_enter_atomic_MUDSAND_a();
                                    }
                                    else
                                    {
                                        /* Transition: '<S632>:429' */
                                        if (((uint32)tmp_0) == CeTMDR_e_Snow)
                                        {
                                            /* Transition: '<S632>:327' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_SNOW_b;
                                            DTRR_ac_enter_atomic_SNOW_k();
                                        }
                                        else
                                        {
                                            /* Transition: '<S632>:426' */
                                            if (((uint32)tmp_0) == CeTMDR_e_Tow)
                                            {
                                                /* Transition: '<S632>:326' */
                                                DTRR_ac_DW.is_ELECTRIC =
                                                    DTRR_ac_IN_TOW_mb;
                                                DTRR_ac_enter_atomic_TOW_n();
                                            }
                                            else
                                            {
                                                /* Transition: '<S632>:425' */
                                                if (((uint32)tmp_0) ==
                                                        CeTMDR_e_Sport)
                                                {
                                                    /* Transition: '<S632>:325' */
                                                    DTRR_ac_DW.is_ELECTRIC =
                                                        DTRR_ac_IN_SPORT_f;
                                                    DTRR_ac_enter_atomic_SPORT_b
                                                        ();
                                                }
                                                else
                                                {
                                                    /* Transition: '<S632>:424' */
                                                    if (((uint32)tmp_0) ==
                                                            CeTMDR_e_Auto)
                                                    {
                                                        /* Transition: '<S632>:323' */
                                                        DTRR_ac_DW.is_ELECTRIC =
                                                            DTRR_ac_IN_NORMAL_k;
                                                        DTRR_ac_enter_atomic_NORMAL_m
                                                            ();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;

              case DTRR_ac_IN_MUDSAND_e1:
                DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 6U;

                /* During 'MUDSAND': '<S632>:283' */
                tmp_0 = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
                if (((uint32)tmp_0) != CeTMDR_e_MudSand)
                {
                    /* Transition: '<S632>:313' */
                    /* Transition: '<S632>:441' */
                    /* Transition: '<S632>:440' */
                    /* Transition: '<S632>:449' */
                    /* Transition: '<S632>:450' */
                    /* Transition: '<S632>:458' */
                    if (((uint32)tmp_0) == CeTMDR_e_Valet)
                    {
                        /* Transition: '<S632>:456' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
                        DTRR_ac_enter_atomic_VALET_c();
                    }
                    else
                    {
                        /* Transition: '<S632>:455' */
                        if (((uint32)tmp_0) == CeTMDR_e_Drag)
                        {
                            /* Transition: '<S632>:356' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                            DTRR_ac_enter_atomic_DRAG_j();
                        }
                        else
                        {
                            /* Transition: '<S632>:430' */
                            if (((uint32)tmp_0) == CeTMDR_e_Track)
                            {
                                /* Transition: '<S632>:353' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                                DTRR_ac_enter_atomic_TRACK_e();
                            }
                            else
                            {
                                /* Transition: '<S632>:431' */
                                if (((uint32)tmp_0) == CeTMDR_e_Rock)
                                {
                                    /* Transition: '<S632>:329' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                                    DTRR_ac_enter_atomic_ROCK_b();
                                }
                                else
                                {
                                    /* Transition: '<S632>:428' */
                                    if (((uint32)tmp_0) == CeTMDR_e_MudSand)
                                    {
                                        /* Transition: '<S632>:328' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_MUDSAND_e1;
                                        DTRR_ac_enter_atomic_MUDSAND_a();
                                    }
                                    else
                                    {
                                        /* Transition: '<S632>:429' */
                                        if (((uint32)tmp_0) == CeTMDR_e_Snow)
                                        {
                                            /* Transition: '<S632>:327' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_SNOW_b;
                                            DTRR_ac_enter_atomic_SNOW_k();
                                        }
                                        else
                                        {
                                            /* Transition: '<S632>:426' */
                                            if (((uint32)tmp_0) == CeTMDR_e_Tow)
                                            {
                                                /* Transition: '<S632>:326' */
                                                DTRR_ac_DW.is_ELECTRIC =
                                                    DTRR_ac_IN_TOW_mb;
                                                DTRR_ac_enter_atomic_TOW_n();
                                            }
                                            else
                                            {
                                                /* Transition: '<S632>:425' */
                                                if (((uint32)tmp_0) ==
                                                        CeTMDR_e_Sport)
                                                {
                                                    /* Transition: '<S632>:325' */
                                                    DTRR_ac_DW.is_ELECTRIC =
                                                        DTRR_ac_IN_SPORT_f;
                                                    DTRR_ac_enter_atomic_SPORT_b
                                                        ();
                                                }
                                                else
                                                {
                                                    /* Transition: '<S632>:424' */
                                                    if (((uint32)tmp_0) ==
                                                            CeTMDR_e_Auto)
                                                    {
                                                        /* Transition: '<S632>:323' */
                                                        DTRR_ac_DW.is_ELECTRIC =
                                                            DTRR_ac_IN_NORMAL_k;
                                                        DTRR_ac_enter_atomic_NORMAL_m
                                                            ();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;

              case DTRR_ac_IN_NORMAL_k:
                DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 2U;

                /* During 'NORMAL': '<S632>:281' */
                tmp_0 = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
                if (((uint32)tmp_0) != CeTMDR_e_Auto)
                {
                    /* Transition: '<S632>:294' */
                    /* Transition: '<S632>:448' */
                    /* Transition: '<S632>:446' */
                    /* Transition: '<S632>:447' */
                    /* Transition: '<S632>:445' */
                    /* Transition: '<S632>:441' */
                    /* Transition: '<S632>:440' */
                    /* Transition: '<S632>:449' */
                    /* Transition: '<S632>:450' */
                    /* Transition: '<S632>:458' */
                    if (((uint32)tmp_0) == CeTMDR_e_Valet)
                    {
                        /* Transition: '<S632>:456' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
                        DTRR_ac_enter_atomic_VALET_c();
                    }
                    else
                    {
                        /* Transition: '<S632>:455' */
                        if (((uint32)tmp_0) == CeTMDR_e_Drag)
                        {
                            /* Transition: '<S632>:356' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                            DTRR_ac_enter_atomic_DRAG_j();
                        }
                        else
                        {
                            /* Transition: '<S632>:430' */
                            if (((uint32)tmp_0) == CeTMDR_e_Track)
                            {
                                /* Transition: '<S632>:353' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                                DTRR_ac_enter_atomic_TRACK_e();
                            }
                            else
                            {
                                /* Transition: '<S632>:431' */
                                if (((uint32)tmp_0) == CeTMDR_e_Rock)
                                {
                                    /* Transition: '<S632>:329' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                                    DTRR_ac_enter_atomic_ROCK_b();
                                }
                                else
                                {
                                    /* Transition: '<S632>:428' */
                                    if (((uint32)tmp_0) == CeTMDR_e_MudSand)
                                    {
                                        /* Transition: '<S632>:328' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_MUDSAND_e1;
                                        DTRR_ac_enter_atomic_MUDSAND_a();
                                    }
                                    else
                                    {
                                        /* Transition: '<S632>:429' */
                                        if (((uint32)tmp_0) == CeTMDR_e_Snow)
                                        {
                                            /* Transition: '<S632>:327' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_SNOW_b;
                                            DTRR_ac_enter_atomic_SNOW_k();
                                        }
                                        else
                                        {
                                            /* Transition: '<S632>:426' */
                                            if (((uint32)tmp_0) == CeTMDR_e_Tow)
                                            {
                                                /* Transition: '<S632>:326' */
                                                DTRR_ac_DW.is_ELECTRIC =
                                                    DTRR_ac_IN_TOW_mb;
                                                DTRR_ac_enter_atomic_TOW_n();
                                            }
                                            else
                                            {
                                                /* Transition: '<S632>:425' */
                                                if (((uint32)tmp_0) ==
                                                        CeTMDR_e_Sport)
                                                {
                                                    /* Transition: '<S632>:325' */
                                                    DTRR_ac_DW.is_ELECTRIC =
                                                        DTRR_ac_IN_SPORT_f;
                                                    DTRR_ac_enter_atomic_SPORT_b
                                                        ();
                                                }
                                                else
                                                {
                                                    /* Transition: '<S632>:424' */
                                                    if (((uint32)tmp_0) ==
                                                            CeTMDR_e_Auto)
                                                    {
                                                        /* Transition: '<S632>:323' */
                                                        DTRR_ac_DW.is_ELECTRIC =
                                                            DTRR_ac_IN_NORMAL_k;
                                                        DTRR_ac_enter_atomic_NORMAL_m
                                                            ();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;

              case DTRR_ac_IN_ROCK_b:
                DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS = 7U;

                /* During 'ROCK': '<S632>:285' */
                tmp_0 = DTRR_ac_B.TmpSignalConversionAtVeTMDR_e_T;
                if (((uint32)tmp_0) != CeTMDR_e_Rock)
                {
                    /* Transition: '<S632>:314' */
                    /* Transition: '<S632>:440' */
                    /* Transition: '<S632>:449' */
                    /* Transition: '<S632>:450' */
                    /* Transition: '<S632>:458' */
                    if (((uint32)tmp_0) == CeTMDR_e_Valet)
                    {
                        /* Transition: '<S632>:456' */
                        DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_VALET_c;
                        DTRR_ac_enter_atomic_VALET_c();
                    }
                    else
                    {
                        /* Transition: '<S632>:455' */
                        if (((uint32)tmp_0) == CeTMDR_e_Drag)
                        {
                            /* Transition: '<S632>:356' */
                            DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_DRAG;
                            DTRR_ac_enter_atomic_DRAG_j();
                        }
                        else
                        {
                            /* Transition: '<S632>:430' */
                            if (((uint32)tmp_0) == CeTMDR_e_Track)
                            {
                                /* Transition: '<S632>:353' */
                                DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_TRACK_m;
                                DTRR_ac_enter_atomic_TRACK_e();
                            }
                            else
                            {
                                /* Transition: '<S632>:431' */
                                if (((uint32)tmp_0) == CeTMDR_e_Rock)
                                {
                                    /* Transition: '<S632>:329' */
                                    DTRR_ac_DW.is_ELECTRIC = DTRR_ac_IN_ROCK_b;
                                    DTRR_ac_enter_atomic_ROCK_b();
                                }
                                else
                                {
                                    /* Transition: '<S632>:428' */
                                    if (((uint32)tmp_0) == CeTMDR_e_MudSand)
                                    {
                                        /* Transition: '<S632>:328' */
                                        DTRR_ac_DW.is_ELECTRIC =
                                            DTRR_ac_IN_MUDSAND_e1;
                                        DTRR_ac_enter_atomic_MUDSAND_a();
                                    }
                                    else
                                    {
                                        /* Transition: '<S632>:429' */
                                        if (((uint32)tmp_0) == CeTMDR_e_Snow)
                                        {
                                            /* Transition: '<S632>:327' */
                                            DTRR_ac_DW.is_ELECTRIC =
                                                DTRR_ac_IN_SNOW_b;
                                            DTRR_ac_enter_atomic_SNOW_k();
                                        }
                                        else
                                        {
                                            /* Transition: '<S632>:426' */
                                            if (((uint32)tmp_0) == CeTMDR_e_Tow)
                                            {
                                                /* Transition: '<S632>:326' */
                                                DTRR_ac_DW.is_ELECTRIC =
                                                    DTRR_ac_IN_TOW_mb;
                                                DTRR_ac_enter_atomic_TOW_n();
                                            }
                                            else
                                            {
                                                /* Transition: '<S632>:425' */
                                                if (((uint32)tmp_0) ==
                                                        CeTMDR_e_Sport)
                                                {
                                                    /* Transition: '<S632>:325' */
                                                    DTRR_ac_DW.is_ELECTRIC =
                                                        DTRR_ac_IN_SPORT_f;
                                                    DTRR_ac_enter_atomic_SPORT_b
                                                        ();
                                                }
                                                else
                                                {
                                                    /* Transition: '<S632>:424' */
                                                    if (((uint32)tmp_0) ==
                                                            CeTMDR_e_Auto)
                                                    {
                                                        /* Transition: '<S632>:323' */
                                                        DTRR_ac_DW.is_ELECTRIC =
                                                            DTRR_ac_IN_NORMAL_k;
                                                        DTRR_ac_enter_atomic_NORMAL_m
                                                            ();
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                break;

              case DTRR_ac_IN_SNOW_b:
                DTRR_ac_SNOW_a();
                break;

              case DTRR_ac_IN_SPORT_f:
                DTRR_ac_SPORT_e();
                break;

              case DTRR_ac_IN_TOW_mb:
                DTRR_ac_TOW_n();
                break;

              case DTRR_ac_IN_TRACK_m:
                DTRR_ac_TRACK_i();
                break;

              default:
                DTRR_ac_VALET();
                break;
            }
        }
    }

    /* VariantMerge generated from: '<S133>/Variant_Source1' incorporates:
     *  Constant: '<S499>/FALSE Constant'
     *  Constant: '<S615>/Constant'
     *  Constant: '<S616>/Constant'
     *  Constant: '<S617>/Constant'
     *  Constant: '<S618>/Constant'
     *  Constant: '<S619>/Constant'
     *  Constant: '<S621>/Constant'
     *  Constant: '<S622>/Constant'
     *  Constant: '<S623>/Constant'
     *  Constant: '<S625>/Constant'
     *  Constant: '<S626>/Constant'
     *  Constant: '<S627>/Constant'
     *  SignalConversion generated from: '<S1>/VeDMDR_e_DrvMdArb'
     *  SignalConversion generated from: '<S1>/VeTMDR_e_TrrnMd'
     */
    rtb_TmpSignalConversionAtGainIn[0] = DTRR_ac_B.LeDTRR_b_TrrMdNormal_active;
    rtb_TmpSignalConversionAtGainIn[1] = false;
    rtb_TmpSignalConversionAtGainIn[2] = DTRR_ac_B.LeDTRR_b_DrvMdCamel_active;
    rtb_TmpSignalConversionAtGainIn[3] = false;
    rtb_TmpSignalConversionAtGainIn[4] = DTRR_ac_B.LeDTRR_b_TrrMdSport_active;
    rtb_TmpSignalConversionAtGainIn[5] = false;
    rtb_TmpSignalConversionAtGainIn[6] = false;
    rtb_TmpSignalConversionAtGainIn[7] = DTRR_ac_B.LeDTRR_b_TrrMdRock_active;
    rtb_TmpSignalConversionAtGainIn[8] = DTRR_ac_B.LeDTRR_b_TrrMdTow_active;
    rtb_TmpSignalConversionAtGainIn[9] = DTRR_ac_B.LeDTRR_b_TrrMdValet_active;
    rtb_TmpSignalConversionAtGainIn[10] = DTRR_ac_B.LeDTRR_b_TrrMdTrack_active;
    rtb_TmpSignalConversionAtGainIn[11] = DTRR_ac_B.LeDTRR_b_TrrMdDrag_active;
    rtb_TmpSignalConversionAtGainIn[12] = DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active;
    rtb_TmpSignalConversionAtGainIn[13] = DTRR_ac_B.LeDTRR_b_TrrMdSnow_active;

#elif !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    /* Outputs for Atomic SubSystem: '<S496>/Limiter1' */
    /* If: '<S496>/If_DrvMd' */
    if (DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_my)
    {
        /* Outputs for IfAction SubSystem: '<S496>/DrvMd_Normal' incorporates:
         *  ActionPort: '<S509>/Action Port'
         */
        DTRR_ac_DrvMd_Normal(VeDTRR_Pct_PtcPdlPctTrq_Normal, &DTRR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S496>/DrvMd_Normal' */
    }
    else if (DTRR_ac_B.LeDTRR_b_DrvMdRange_active)
    {
        /* Outputs for IfAction SubSystem: '<S496>/DrvMd_Range' incorporates:
         *  ActionPort: '<S510>/Action Port'
         */
        /* Merge: '<S496>/Merge' incorporates:
         *  Inport: '<S510>/PdlPctTrq'
         */
        DTRR_ac_B.Merge = VeDTRR_Pct_PtcPdlPctTrq_Range;

        /* End of Outputs for SubSystem: '<S496>/DrvMd_Range' */
    }
    else
    {
        if (DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_o)
        {
            /* Outputs for IfAction SubSystem: '<S496>/DrvMd_Camel' incorporates:
             *  ActionPort: '<S508>/Action Port'
             */
            /* Merge: '<S496>/Merge' incorporates:
             *  Inport: '<S508>/PdlPctTrq'
             */
            DTRR_ac_B.Merge = VeDTRR_Pct_PtcPdlPctTrq_Camel;

            /* End of Outputs for SubSystem: '<S496>/DrvMd_Camel' */
        }
    }

    /* Switch: '<S515>/Switch1' incorporates:
     *  Constant: '<S496>/5'
     *  RelationalOperator: '<S515>/Relational Operator'
     */
    if (1.0F < DTRR_ac_B.Merge)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = 1.0F;
    }
    else
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = DTRR_ac_B.Merge;
    }

    /* End of Switch: '<S515>/Switch1' */

    /* Switch: '<S515>/Switch' incorporates:
     *  Constant: '<S496>/6'
     *  RelationalOperator: '<S515>/Relational Operator1'
     */
    if (rtb_Sum7 > 0.0F)
    {
        /* Switch: '<S515>/Switch' */
        rtb_Switch_km = rtb_Sum7;
    }
    else
    {
        /* Switch: '<S515>/Switch' */
        rtb_Switch_km = 0.0F;
    }

    /* End of Switch: '<S515>/Switch' */
    /* End of Outputs for SubSystem: '<S496>/Limiter1' */
#endif

    /* End of Chart: '<S499>/PdlPctTrqArbCond_Determination' */

    /* RelationalOperator: '<S497>/REVERSE ? ' incorporates:
     *  RelationalOperator: '<S497>/REVERSE ? 1'
     */
    tmp_1 = DTRR_ac_B.LeDTRR_e_DrvMdActive_e;

    /* If: '<S497>/If_DrvMdActive' incorporates:
     *  Constant: '<S525>/Constant'
     *  Constant: '<S526>/Constant'
     *  Constant: '<S539>/Constant'
     *  Constant: '<S541>/Constant'
     *  RelationalOperator: '<S497>/REVERSE ? '
     *  RelationalOperator: '<S497>/REVERSE ? 1'
     */
    if (((uint32)tmp_1) == CeDMDR_e_Normal_Mode)
    {
        /* Outputs for IfAction SubSystem: '<S497>/DrvMd_Normal' incorporates:
         *  ActionPort: '<S520>/Action Port'
         */
        DTRR_ac_DrvMd_Normal_p(CeDMIR_e_Normal, &DTRR_ac_B.Merge1_f);

        /* End of Outputs for SubSystem: '<S497>/DrvMd_Normal' */
    }
    else
    {
        if (((uint32)tmp_1) == CeDMDR_e_Camel_Mode)
        {
            /* Outputs for IfAction SubSystem: '<S497>/DrvMd_Eco' incorporates:
             *  ActionPort: '<S519>/Action Port'
             */
            DTRR_ac_DrvMd_Eco(CeDMIR_e_Eco, &DTRR_ac_B.Merge1_f);

            /* End of Outputs for SubSystem: '<S497>/DrvMd_Eco' */
        }
    }

    /* End of If: '<S497>/If_DrvMdActive' */

    /* Lookup_n-D: '<S695>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    rtb_Sum5 = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
        &(KxDTRR_K_PtcPdlPctTrqWhl_Tow[0])), ((const float32 *)
        &(KyDTRR_K_PtcPdlPctTrqWhl_Tow[0])), ((const float32 *)
        &(KtDTRR_K_PtcPdlPctTrqWhl_Tow[0])), DTRR_ac_ConstP.pooled7, 16U);

    /* Switch: '<S501>/Switch4' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S501>/Switch4' incorporates:
         *  Lookup_n-D: '<S694>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Sport_Boost[0])), ((const
               float32 *)&(KyDTRR_K_PtcPdlPctTrqWhl_Sport_Boost[0])), ((const
               float32 *)&(KtDTRR_K_PtcPdlPctTrqWhl_Sport_Boost[0])),
             DTRR_ac_ConstP.pooled7, 16U);
    }
    else
    {
        /* Switch: '<S501>/Switch4' incorporates:
         *  Lookup_n-D: '<S693>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Sport[0])), ((const float32 *)
              &(KyDTRR_K_PtcPdlPctTrqWhl_Sport[0])), ((const float32 *)
              &(KtDTRR_K_PtcPdlPctTrqWhl_Sport[0])), DTRR_ac_ConstP.pooled7, 16U);
    }

    /* End of Switch: '<S501>/Switch4' */

    /* Lookup_n-D: '<S692>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    rtb_TmpSignalConversionAtVeESMR = look2_iflf_binlcapw
        (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
           float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Snow[0])), ((const float32 *)
          &(KyDTRR_K_PtcPdlPctTrqWhl_Snow[0])), ((const float32 *)
          &(KtDTRR_K_PtcPdlPctTrqWhl_Snow[0])), DTRR_ac_ConstP.pooled7, 16U);

    /* Lookup_n-D: '<S691>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    rtb_Vector_mn = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
        &(KxDTRR_K_PtcPdlPctTrqWhl_Rock[0])), ((const float32 *)
        &(KyDTRR_K_PtcPdlPctTrqWhl_Rock[0])), ((const float32 *)
        &(KtDTRR_K_PtcPdlPctTrqWhl_Rock[0])), DTRR_ac_ConstP.pooled7, 16U);

    /* Lookup_n-D: '<S688>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_Pct_PtcPdlPctTrq_OffRoad = look2_iflf_binlcapw
        (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
           float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_OffRoad[0])), ((const float32 *)
          &(KyDTRR_K_PtcPdlPctTrqWhl_OffRoad[0])), ((const float32 *)
          &(KtDTRR_K_PtcPdlPctTrqWhl_OffRoad[0])), DTRR_ac_ConstP.pooled6, 17U);

    /* If: '<S497>/If_DrvMd' */
    if (DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_m)
    {
        /* Outputs for IfAction SubSystem: '<S497>/DrvMd_Normal_Map' incorporates:
         *  ActionPort: '<S521>/Action Port'
         */
        DTRR_ac_DrvMd_Normal(VeDTRR_Pct_PtcPdlPctTrq_Normal, &DTRR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S497>/DrvMd_Normal_Map' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdSport_active_e)
    {
        /* Outputs for IfAction SubSystem: '<S497>/TrrMd_Sport' incorporates:
         *  ActionPort: '<S581>/Action Port'
         */
        DTRR_ac_TrrMd_Sport(rtb_TmpSignalConversionAtVeBPCR, &DTRR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S497>/TrrMd_Sport' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdRock_active_k)
    {
        /* Outputs for IfAction SubSystem: '<S497>/TrrMd_Rock' incorporates:
         *  ActionPort: '<S579>/Action Port'
         */
        DTRR_ac_TrrMd_Rock(rtb_Vector_mn, &DTRR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S497>/TrrMd_Rock' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdSnow_active_m)
    {
        /* Outputs for IfAction SubSystem: '<S497>/TrrMd_Snow' incorporates:
         *  ActionPort: '<S580>/Action Port'
         */
        DTRR_ac_TrrMd_Snow(rtb_TmpSignalConversionAtVeESMR, &DTRR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S497>/TrrMd_Snow' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active_f)
    {
        /* Outputs for IfAction SubSystem: '<S497>/TrrMd_MudSand' incorporates:
         *  ActionPort: '<S578>/Action Port'
         */
        DTRR_ac_TrrMd_MudSand(VeDTRR_Pct_PtcPdlPctTrq_OffRoad,
                              &DTRR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S497>/TrrMd_MudSand' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdTow_active_h)
    {
        /* Outputs for IfAction SubSystem: '<S497>/TrrMd_Tow' incorporates:
         *  ActionPort: '<S582>/Action Port'
         */
        DTRR_ac_TrrMd_Tow(rtb_Sum5, &DTRR_ac_B.Merge_i);

        /* End of Outputs for SubSystem: '<S497>/TrrMd_Tow' */
    }
    else
    {
        if (DTRR_ac_B.LeDTRR_b_DrvMdCamel_active_a)
        {
            /* Outputs for IfAction SubSystem: '<S497>/TrrMd_Eco' incorporates:
             *  ActionPort: '<S577>/Action Port'
             */
            DTRR_ac_TrrMd_Eco(VeDTRR_Pct_PtcPdlPctTrq_Camel, &DTRR_ac_B.Merge_i);

            /* End of Outputs for SubSystem: '<S497>/TrrMd_Eco' */
        }
    }

    /* End of If: '<S497>/If_DrvMd' */

    /* Switch: '<S497>/Switch1' incorporates:
     *  Constant: '<S545>/Calib'
     */
    if (KeDTRR_b_LBProgEnbl)
    {
        /* Switch: '<S497>/Switch1' */
        rtb_Switch_ki = DTRR_ac_B.LeDTRR_cnt_DrvMdIdx;
    }

    /* End of Switch: '<S497>/Switch1' */

    /* RelationalOperator: '<S497>/Relational Operator' incorporates:
     *  UnitDelay: '<S497>/Unit Delay2'
     */
    rtb_RelationalOperator = (rtb_Switch_ki != DTRR_ac_DW.UnitDelay2_DSTATE_e);

    /* Outputs for Atomic SubSystem: '<S497>/EdgeRising' */
    /* Logic: '<S164>/Logical Operator9' incorporates:
     *  UnitDelay: '<S522>/Unit Delay'
     */
    rtb_LogicalOperator_ku = DTRR_ac_DW.UnitDelay_DSTATE_ne;

    /* Logic: '<S522>/AND' incorporates:
     *  Logic: '<S522>/OR1'
     *  UnitDelay: '<S522>/Unit Delay'
     */
    rtb_AND_o1 = (rtb_RelationalOperator && (!DTRR_ac_DW.UnitDelay_DSTATE_ne));

    /* Update for UnitDelay: '<S522>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ne = rtb_RelationalOperator;

    /* End of Outputs for SubSystem: '<S497>/EdgeRising' */

    /* Lookup_n-D: '<S698>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    rtb_Vector_bb = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
        &(KxDTRR_K_PtcPdlPctTrqWhl_Valet[0])), ((const float32 *)
        &(KyDTRR_K_PtcPdlPctTrqWhl_Valet[0])), ((const float32 *)
        &(KtDTRR_K_PtcPdlPctTrqWhl_Valet[0])), DTRR_ac_ConstP.pooled6, 17U);

    /* Switch: '<S501>/Switch2' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S501>/Switch2' incorporates:
         *  Lookup_n-D: '<S697>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        rtb_VeDTRR_Pct_PtcPdlPctTrq_Tra = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Track_Boost[0])), ((const
               float32 *)&(KyDTRR_K_PtcPdlPctTrqWhl_Track_Boost[0])), ((const
               float32 *)&(KtDTRR_K_PtcPdlPctTrqWhl_Track_Boost[0])),
             DTRR_ac_ConstP.pooled6, 17U);
    }
    else
    {
        /* Switch: '<S501>/Switch2' incorporates:
         *  Lookup_n-D: '<S696>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         *  Switch: '<S699>/Switch1'
         */
        rtb_VeDTRR_Pct_PtcPdlPctTrq_Tra = look2_iflf_binlcapw
            (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
               float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Track[0])), ((const float32 *)
              &(KyDTRR_K_PtcPdlPctTrqWhl_Track[0])), ((const float32 *)
              &(KtDTRR_K_PtcPdlPctTrqWhl_Track[0])), DTRR_ac_ConstP.pooled6, 17U);
    }

    /* End of Switch: '<S501>/Switch2' */

    /* Lookup_n-D: '<S686>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    rtb_Vector_k = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
        &(KxDTRR_K_PtcPdlPctTrqWhl_Drag[0])), ((const float32 *)
        &(KyDTRR_K_PtcPdlPctTrqWhl_Drag[0])), ((const float32 *)
        &(KtDTRR_K_PtcPdlPctTrqWhl_Drag[0])), DTRR_ac_ConstP.pooled6, 17U);

    /* If: '<S497>/If_PropDrvMd' */
    if (DTRR_ac_B.LeDTRR_b_PropDrvMdNormal_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Normal_Map' incorporates:
         *  ActionPort: '<S553>/Action Port'
         */
        DTRR_ac_DrvMd_Normal(VeDTRR_Pct_PtcPdlPctTrq_Normal,
                             (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Normal_Map' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdSport_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Sport' incorporates:
         *  ActionPort: '<S556>/Action Port'
         */
        DTRR_ac_TrrMd_Sport(rtb_TmpSignalConversionAtVeBPCR,
                            (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Sport' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdRock_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Rock' incorporates:
         *  ActionPort: '<S554>/Action Port'
         */
        DTRR_ac_TrrMd_Rock(rtb_Vector_mn, (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Rock' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdSnow_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Snow' incorporates:
         *  ActionPort: '<S555>/Action Port'
         */
        DTRR_ac_TrrMd_Snow(rtb_TmpSignalConversionAtVeESMR,
                           (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Snow' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdMudSand_activ)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrv Md_MudSand' incorporates:
         *  ActionPort: '<S550>/Action Port'
         */
        DTRR_ac_TrrMd_MudSand(VeDTRR_Pct_PtcPdlPctTrq_OffRoad,
                              (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrv Md_MudSand' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdTow_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Tow' incorporates:
         *  ActionPort: '<S557>/Action Port'
         */
        DTRR_ac_TrrMd_Tow(rtb_Sum5, (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Tow' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdEco_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Eco' incorporates:
         *  ActionPort: '<S552>/Action Port'
         */
        DTRR_ac_TrrMd_Eco(VeDTRR_Pct_PtcPdlPctTrq_Camel,
                          (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Eco' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdValet_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Valet' incorporates:
         *  ActionPort: '<S559>/Action Port'
         */
        /* Merge: '<S497>/Merge2' incorporates:
         *  Inport: '<S559>/PdlPctTrq'
         */
        VeDTRR_Pct_PctPdlTrqBlndRequest = rtb_Vector_bb;

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Valet' */
    }
    else if (DTRR_ac_B.LeDTRR_b_PropDrvMdTrack_active)
    {
        /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Track' incorporates:
         *  ActionPort: '<S558>/Action Port'
         */
        DTRR_ac_PropDrvMd_Track(rtb_VeDTRR_Pct_PtcPdlPctTrq_Tra,
                                (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

        /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Track' */
    }
    else
    {
        if (DTRR_ac_B.LeDTRR_b_PropDrvMdDrag_active)
        {
            /* Outputs for IfAction SubSystem: '<S497>/PropDrvMd_Drag' incorporates:
             *  ActionPort: '<S551>/Action Port'
             */
            DTRR_ac_PropDrvMd_Track(rtb_Vector_k,
                                    (&(VeDTRR_Pct_PctPdlTrqBlndRequest)));

            /* End of Outputs for SubSystem: '<S497>/PropDrvMd_Drag' */
        }
    }

    /* End of If: '<S497>/If_PropDrvMd' */

    /* Switch: '<S497>/Switch' incorporates:
     *  Constant: '<S545>/Calib'
     */
    if (KeDTRR_b_LBProgEnbl)
    {
        /* Switch: '<S497>/Switch' */
        rtb_UnitDelay1 = VeDTRR_Pct_PctPdlTrqBlndRequest;
    }
    else
    {
        /* Switch: '<S497>/Switch' */
        rtb_UnitDelay1 = DTRR_ac_B.Merge_i;
    }

    /* End of Switch: '<S497>/Switch' */

    /* Abs: '<S547>/Abs2' incorporates:
     *  Sum: '<S547>/Sum1'
     *  UnitDelay: '<S547>/Unit Delay'
     */
    VeDTRR_Pct_PctPdlDeltaTrq = fabsf(rtb_UnitDelay1 -
        DTRR_ac_DW.UnitDelay_DSTATE_i);

    /* Lookup_n-D: '<S587>/Vector' incorporates:
     *  Abs: '<S547>/Abs2'
     */
    rtb_Summation = look1_iflf_binlcapw(VeDTRR_Pct_PctPdlDeltaTrq, ((const
        float32 *)&(KxDTRR_dPct_PtcPdlTrqRateLU[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLU[0])), 10U);

    /* Lookup_n-D: '<S586>/Vector' incorporates:
     *  Abs: '<S547>/Abs2'
     */
    rtb_Sum7 = look1_iflf_binlcapw(VeDTRR_Pct_PctPdlDeltaTrq, ((const float32 *)
        &(KxDTRR_dPct_PtcPdlTrqRateLD[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLD[0])), 10U);

    /* Outputs for Atomic SubSystem: '<S547>/GradientLimiter' */
    /* Sum: '<S584>/Sum2' incorporates:
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_UnitDelay3 = rtb_UnitDelay1 - DTRR_ac_DW.UnitDelay_DSTATE_l;

    /* Outputs for Atomic SubSystem: '<S584>/Limiter' */
    /* Switch: '<S589>/Switch1' incorporates:
     *  RelationalOperator: '<S589>/Relational Operator'
     */
    if (rtb_Summation < rtb_UnitDelay3)
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_Summation;
    }
    else
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_UnitDelay3;
    }

    /* End of Switch: '<S589>/Switch1' */

    /* Switch: '<S589>/Switch' incorporates:
     *  RelationalOperator: '<S589>/Relational Operator1'
     */
    if (rtb_Sum3 > rtb_Sum7)
    {
        rtb_Sum7 = rtb_Sum3;
    }

    /* End of Switch: '<S589>/Switch' */
    /* End of Outputs for SubSystem: '<S584>/Limiter' */

    /* Sum: '<S584>/Sum3' incorporates:
     *  UnitDelay: '<S584>/Unit Delay'
     */
    rtb_Sum7 += DTRR_ac_DW.UnitDelay_DSTATE_l;

    /* Update for UnitDelay: '<S584>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_l = rtb_Sum7;

    /* End of Outputs for SubSystem: '<S547>/GradientLimiter' */

    /* RelationalOperator: '<S547>/Relational Operator' incorporates:
     *  Constant: '<S585>/Calib'
     */
    rtb_Switch2_kx = (VeDTRR_Pct_PctPdlDeltaTrq <= KeDTRR_Pct_DeltaPctTrqThresh);

    /* Outputs for Atomic SubSystem: '<S547>/EdgeRising' */
    /* Logic: '<S583>/AND' incorporates:
     *  Logic: '<S583>/OR1'
     *  UnitDelay: '<S583>/Unit Delay'
     */
    rtb_RelationalOperator = (rtb_Switch2_kx && (!DTRR_ac_DW.UnitDelay_DSTATE_ac));

    /* Update for UnitDelay: '<S583>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ac = rtb_Switch2_kx;

    /* End of Outputs for SubSystem: '<S547>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S547>/Signal Latch On With Reset' */
    /* Logic: '<S588>/OR1' incorporates:
     *  Logic: '<S547>/Logical Operator'
     *  Logic: '<S547>/Logical Operator1'
     *  Logic: '<S588>/NOT'
     *  Logic: '<S588>/OR'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_AND_o1 || ((rtb_AND_o1 || (!rtb_RelationalOperator)) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_mr)));

    /* Update for UnitDelay: '<S588>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_mr = rtb_Switch2_kx;

    /* End of Outputs for SubSystem: '<S547>/Signal Latch On With Reset' */

    /* Switch: '<S547>/Switch2' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S547>/Switch2' */
        rtb_UnitDelay1 = rtb_Sum7;
    }

    /* End of Switch: '<S547>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S497>/Limiter1' */
    /* Switch: '<S546>/Switch1' incorporates:
     *  Constant: '<S497>/PtcPdlPctTrq_Max'
     *  RelationalOperator: '<S546>/Relational Operator'
     */
    if (1.0F < rtb_UnitDelay1)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = 1.0F;
    }
    else
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_UnitDelay1;
    }

    /* End of Switch: '<S546>/Switch1' */

    /* Switch: '<S546>/Switch' incorporates:
     *  Constant: '<S497>/PtcPdlPctTrq_Sand'
     *  RelationalOperator: '<S546>/Relational Operator1'
     */
    if (rtb_Sum7 > 0.0F)
    {
        /* Switch: '<S546>/Switch' */
        rtb_UnitDelay3 = rtb_Sum7;
    }
    else
    {
        /* Switch: '<S546>/Switch' */
        rtb_UnitDelay3 = 0.0F;
    }

    /* End of Switch: '<S546>/Switch' */
    /* End of Outputs for SubSystem: '<S497>/Limiter1' */

    /* Lookup_n-D: '<S685>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_Pct_PtcPdlPctTrq_Camel_Lim = look2_iflf_binlcapw
        (VeDTRR_v_PtcPdlWhlTrqKPH, rtb_TmpSignalConversionAtVeAPSR, ((const
           float32 *)&(KxDTRR_K_PtcPdlPctTrqWhl_Camel_Lim[0])), ((const float32 *)
          &(KyDTRR_K_PtcPdlPctTrqWhl_Camel_Lim[0])), ((const float32 *)
          &(KtDTRR_K_PtcPdlPctTrqWhl_Camel_Lim[0])), DTRR_ac_ConstP.pooled6, 17U);

    /* If: '<S498>/If_DrvMd' incorporates:
     *  Abs: '<S601>/Abs2'
     *  Logic: '<S601>/Logical Operator'
     *  Logic: '<S601>/Logical Operator1'
     *  Lookup_n-D: '<S608>/Vector'
     *  Lookup_n-D: '<S609>/Vector'
     *  RelationalOperator: '<S498>/Relational Operator'
     *  RelationalOperator: '<S601>/Relational Operator'
     *  Sum: '<S601>/Sum1'
     *  Switch: '<S601>/Switch2'
     *  UnitDelay: '<S498>/Unit Delay2'
     *  UnitDelay: '<S601>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_2

    /* Outputs for Atomic SubSystem: '<S498>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S601>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S601>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S601>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S498>/EdgeRising' */
    if (DTRR_ac_B.LeDTRR_b_DrvMdNormal_active_i)
    {
        /* Outputs for IfAction SubSystem: '<S498>/DrvMd_Normal' incorporates:
         *  ActionPort: '<S592>/Action Port'
         */
        DTRR_ac_DrvMd_Normal(VeDTRR_Pct_PtcPdlPctTrq_Normal,
                             &DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n);

        /* End of Outputs for SubSystem: '<S498>/DrvMd_Normal' */
    }
    else if (DTRR_ac_B.LeDTRR_b_DrvMdSport_active)
    {
        /* Outputs for IfAction SubSystem: '<S498>/DrvMd_Sport' incorporates:
         *  ActionPort: '<S594>/Action Port'
         */
        DTRR_ac_TrrMd_Sport(rtb_TmpSignalConversionAtVeBPCR,
                            &DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n);

        /* End of Outputs for SubSystem: '<S498>/DrvMd_Sport' */
    }
    else if (DTRR_ac_B.LeDTRR_b_DrvMdEco_active_d)
    {
        /* Outputs for IfAction SubSystem: '<S498>/DrvMd_Eco' incorporates:
         *  ActionPort: '<S590>/Action Port'
         */
        DTRR_ac_TrrMd_Eco(VeDTRR_Pct_PtcPdlPctTrq_Camel,
                          &DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n);

        /* End of Outputs for SubSystem: '<S498>/DrvMd_Eco' */
    }
    else if (DTRR_ac_B.LeDTRR_b_DrvMdOffRoad_active)
    {
        /* Outputs for IfAction SubSystem: '<S498>/DrvMd_OffRoad' incorporates:
         *  ActionPort: '<S593>/Action Port'
         */
        /* Merge: '<S498>/Merge' incorporates:
         *  Inport: '<S593>/PdlPctTrq'
         */
        DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n =
            VeDTRR_Pct_PtcPdlPctTrq_OffRoad;

        /* End of Outputs for SubSystem: '<S498>/DrvMd_OffRoad' */
    }
    else
    {
        if (DTRR_ac_B.LeDTRR_b_DrvMdEcoPwrLim_active)
        {
            /* Outputs for IfAction SubSystem: '<S498>/DrvMd_EcoPwrLim' incorporates:
             *  ActionPort: '<S591>/Action Port'
             */
            DTRR_ac_DrvMd_EcoPwrLim(VeDTRR_Pct_PtcPdlPctTrq_Camel_Lim,
                                    &DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n);

            /* End of Outputs for SubSystem: '<S498>/DrvMd_EcoPwrLim' */
        }
    }

    /* RelationalOperator: '<S498>/Relational Operator' */
    rtb_AND_o1 = (rtb_LeDTRR_cnt_DrvMdIdx_i != DTRR_ac_DW.UnitDelay2_DSTATE_b);

    /* Logic: '<S595>/AND' incorporates:
     *  Logic: '<S595>/OR1'
     *  UnitDelay: '<S595>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_AND_o1 && (!DTRR_ac_DW.UnitDelay_DSTATE_fa));

    /* Update for UnitDelay: '<S595>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_fa = rtb_AND_o1;

    /* Sum: '<S13>/Sum' */
    rtb_Summation = fabsf(DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n -
                          DTRR_ac_DW.UnitDelay_DSTATE_e);

    /* Lookup_n-D: '<S609>/Vector' incorporates:
     *  Sum: '<S13>/Sum'
     */
    rtb_Vector_mt = look1_iflf_binlcapw(rtb_Summation, ((const float32 *)
        &(KxDTRR_dPct_PtcPdlTrqRateLU[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLU[0])), 10U);

    /* Lookup_n-D: '<S608>/Vector' incorporates:
     *  Sum: '<S13>/Sum'
     */
    rtb_Vector_gf4 = look1_iflf_binlcapw(rtb_Summation, ((const float32 *)
        &(KxDTRR_dPct_PtcPdlTrqRateLD[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLD[0])), 10U);

    /* Sum: '<S606>/Sum2' incorporates:
     *  UnitDelay: '<S606>/Unit Delay'
     */
    rtb_Sum7 = DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n -
        DTRR_ac_DW.UnitDelay_DSTATE_k;

    /* Outputs for Atomic SubSystem: '<S606>/Limiter' */
    /* Switch: '<S611>/Switch1' incorporates:
     *  RelationalOperator: '<S611>/Relational Operator'
     */
    if (rtb_Vector_mt < rtb_Sum7)
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_Vector_mt;
    }
    else
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_Sum7;
    }

    /* End of Switch: '<S611>/Switch1' */

    /* Switch: '<S611>/Switch' incorporates:
     *  RelationalOperator: '<S611>/Relational Operator1'
     */
    if (rtb_Sum3 > rtb_Vector_gf4)
    {
        rtb_Vector_gf4 = rtb_Sum3;
    }

    /* End of Switch: '<S611>/Switch' */
    /* End of Outputs for SubSystem: '<S606>/Limiter' */

    /* Sum: '<S606>/Sum3' incorporates:
     *  UnitDelay: '<S606>/Unit Delay'
     */
    rtb_Vector_gf4 += DTRR_ac_DW.UnitDelay_DSTATE_k;

    /* Update for UnitDelay: '<S606>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_k = rtb_Vector_gf4;

    /* RelationalOperator: '<S601>/Relational Operator' incorporates:
     *  Constant: '<S607>/Calib'
     */
    rtb_AND_o1 = (rtb_Summation <= KeDTRR_Pct_DeltaPctTrqThresh);

    /* Logic: '<S605>/AND' incorporates:
     *  Logic: '<S605>/OR1'
     *  UnitDelay: '<S605>/Unit Delay'
     */
    rtb_RelationalOperator = (rtb_AND_o1 && (!DTRR_ac_DW.UnitDelay_DSTATE_my));

    /* Update for UnitDelay: '<S605>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_my = rtb_AND_o1;

    /* Logic: '<S610>/OR1' incorporates:
     *  Logic: '<S610>/NOT'
     *  Logic: '<S610>/OR'
     *  UnitDelay: '<S610>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_Switch2_kx || ((rtb_Switch2_kx ||
                        (!rtb_RelationalOperator)) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_dd)));

    /* Update for UnitDelay: '<S610>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_dd = rtb_Switch2_kx;
    if (!rtb_Switch2_kx)
    {
        /* Switch: '<S601>/Switch2' */
        rtb_Vector_gf4 = DTRR_ac_B.VeDTRR_Pct_PctPdlTrqBlndReque_n;
    }

    /* Switch: '<S600>/Switch1' incorporates:
     *  Constant: '<S498>/5'
     *  RelationalOperator: '<S600>/Relational Operator'
     */
    if (1.0F < rtb_Vector_gf4)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = 1.0F;
    }
    else
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_Vector_gf4;
    }

    /* End of Switch: '<S600>/Switch1' */

    /* Switch: '<S600>/Switch' incorporates:
     *  Constant: '<S498>/6'
     *  RelationalOperator: '<S600>/Relational Operator1'
     */
    if (rtb_Sum7 > 0.0F)
    {
        /* Switch: '<S600>/Switch' */
        rtb_Vector_mt = rtb_Sum7;
    }
    else
    {
        /* Switch: '<S600>/Switch' */
        rtb_Vector_mt = 0.0F;
    }

    /* End of Switch: '<S600>/Switch' */
    /* End of Outputs for SubSystem: '<S498>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S601>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S601>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S601>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S498>/Limiter1' */
#endif

    /* End of If: '<S498>/If_DrvMd' */

    /* If: '<S499>/If_PropDrvMd' incorporates:
     *  Abs: '<S631>/Abs2'
     *  Constant: '<S620>/Constant'
     *  Constant: '<S624>/Constant'
     *  Constant: '<S628>/Constant'
     *  Constant: '<S629>/Constant'
     *  If: '<S499>/If_DrvMdActive'
     *  Logic: '<S631>/Logical Operator'
     *  Logic: '<S631>/Logical Operator1'
     *  Lookup_n-D: '<S656>/Vector'
     *  Lookup_n-D: '<S657>/Vector'
     *  Lookup_n-D: '<S687>/Vector'
     *  RelationalOperator: '<S499>/REVERSE ? '
     *  RelationalOperator: '<S499>/REVERSE ? 1'
     *  RelationalOperator: '<S499>/Relational Operator'
     *  RelationalOperator: '<S631>/Relational Operator'
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Sum: '<S631>/Sum1'
     *  Switch: '<S631>/Switch2'
     *  Switch: '<S699>/Switch1'
     *  UnitDelay: '<S499>/Unit Delay2'
     *  UnitDelay: '<S631>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_5

    /* Outputs for Atomic SubSystem: '<S499>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S631>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S631>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S631>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S499>/EdgeRising' */
    tmp_1 = DTRR_ac_B.LeDTRR_e_DrvMdActive;
    if (((uint32)tmp_1) == CeDMDR_e_Normal_Mode)
    {
        /* Outputs for IfAction SubSystem: '<S499>/DrvMd_Normal' incorporates:
         *  ActionPort: '<S613>/Action Port'
         */
        DTRR_ac_DrvMd_Normal_p(CeDMIR_e_Normal,
                               &DTRR_ac_B.VariantMerge_For_Variant_Source);

        /* End of Outputs for SubSystem: '<S499>/DrvMd_Normal' */
    }
    else
    {
        if (((uint32)tmp_1) == CeDMDR_e_Camel_Mode)
        {
            /* Outputs for IfAction SubSystem: '<S499>/DrvMd_Eco' incorporates:
             *  ActionPort: '<S612>/Action Port'
             */
            DTRR_ac_DrvMd_Eco(CeDMIR_e_Eco,
                              &DTRR_ac_B.VariantMerge_For_Variant_Source);

            /* End of Outputs for SubSystem: '<S499>/DrvMd_Eco' */
        }
    }

    /* RelationalOperator: '<S499>/Relational Operator' incorporates:
     *  Constant: '<S620>/Constant'
     *  Constant: '<S624>/Constant'
     *  Constant: '<S628>/Constant'
     *  Constant: '<S629>/Constant'
     */
    rtb_AND_o1 = (DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS !=
                  DTRR_ac_DW.UnitDelay2_DSTATE_p);

    /* Logic: '<S614>/AND' incorporates:
     *  Logic: '<S614>/OR1'
     *  UnitDelay: '<S614>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_AND_o1 && (!DTRR_ac_DW.UnitDelay_DSTATE_b1));

    /* Update for UnitDelay: '<S614>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_b1 = rtb_AND_o1;
    if (DTRR_ac_B.LeDTRR_b_TrrMdNormal_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Normal_Map' incorporates:
         *  ActionPort: '<S637>/Action Port'
         */
        DTRR_ac_DrvMd_Normal(VeDTRR_Pct_PtcPdlPctTrq_Normal, &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Normal_Map' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdSport_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Sport' incorporates:
         *  ActionPort: '<S640>/Action Port'
         */
        DTRR_ac_TrrMd_Sport(rtb_TmpSignalConversionAtVeBPCR, &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Sport' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdRock_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Rock' incorporates:
         *  ActionPort: '<S638>/Action Port'
         */
        DTRR_ac_TrrMd_Rock(rtb_Vector_mn, &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Rock' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdSnow_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Snow' incorporates:
         *  ActionPort: '<S639>/Action Port'
         */
        DTRR_ac_TrrMd_Snow(rtb_TmpSignalConversionAtVeESMR, &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Snow' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdMudSand_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrv Md_MudSand' incorporates:
         *  ActionPort: '<S633>/Action Port'
         */
        DTRR_ac_TrrMd_MudSand(look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
                               rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
                                &(KxDTRR_K_PtcPdlPctTrqWhl_MudSand[0])), ((const
            float32 *)&(KyDTRR_K_PtcPdlPctTrqWhl_MudSand[0])), ((const float32 *)
                                &(KtDTRR_K_PtcPdlPctTrqWhl_MudSand[0])),
                               DTRR_ac_ConstP.pooled6, 17U), &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrv Md_MudSand' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdTow_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Tow' incorporates:
         *  ActionPort: '<S641>/Action Port'
         */
        DTRR_ac_TrrMd_Tow(rtb_Sum5, &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Tow' */
    }
    else if (DTRR_ac_B.LeDTRR_b_DrvMdCamel_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Eco' incorporates:
         *  ActionPort: '<S636>/Action Port'
         */
        DTRR_ac_TrrMd_Eco(VeDTRR_Pct_PtcPdlPctTrq_Camel, &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Eco' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdTrack_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Track' incorporates:
         *  ActionPort: '<S642>/Action Port'
         */
        DTRR_ac_PropDrvMd_Track(rtb_VeDTRR_Pct_PtcPdlPctTrq_Tra,
                                &DTRR_ac_B.Merge2);

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Track' */
    }
    else if (DTRR_ac_B.LeDTRR_b_TrrMdDrag_active)
    {
        /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Drag' incorporates:
         *  ActionPort: '<S634>/Action Port'
         */
        /* Merge: '<S499>/Merge2' incorporates:
         *  Inport: '<S634>/PdlPctTrq'
         */
        DTRR_ac_B.Merge2 = rtb_Vector_k;

        /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Drag' */
    }
    else
    {
        if (DTRR_ac_B.LeDTRR_b_TrrMdValet_active)
        {
            /* Outputs for IfAction SubSystem: '<S499>/PropDrvMd_Drag1' incorporates:
             *  ActionPort: '<S635>/Action Port'
             */
            DTRR_ac_PropDrvMd_Track(rtb_Vector_bb, &DTRR_ac_B.Merge2);

            /* End of Outputs for SubSystem: '<S499>/PropDrvMd_Drag1' */
        }
    }

    /* Sum: '<S13>/Sum' incorporates:
     *  Lookup_n-D: '<S687>/Vector'
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    rtb_Summation = fabsf(DTRR_ac_B.Merge2 - DTRR_ac_DW.UnitDelay_DSTATE_iu);

    /* Lookup_n-D: '<S657>/Vector' incorporates:
     *  Sum: '<S13>/Sum'
     */
    rtb_Vector_j2 = look1_iflf_binlcapw(rtb_Summation, ((const float32 *)
        &(KxDTRR_dPct_PtcPdlTrqRateLU[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLU[0])), 10U);

    /* Lookup_n-D: '<S656>/Vector' incorporates:
     *  Sum: '<S13>/Sum'
     */
    rtb_Vector_d = look1_iflf_binlcapw(rtb_Summation, ((const float32 *)
        &(KxDTRR_dPct_PtcPdlTrqRateLD[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLD[0])), 10U);

    /* Sum: '<S654>/Sum2' incorporates:
     *  UnitDelay: '<S654>/Unit Delay'
     */
    rtb_Sum7 = DTRR_ac_B.Merge2 - DTRR_ac_DW.UnitDelay_DSTATE_p;

    /* Outputs for Atomic SubSystem: '<S654>/Limiter' */
    /* Switch: '<S659>/Switch1' incorporates:
     *  RelationalOperator: '<S659>/Relational Operator'
     */
    if (rtb_Vector_j2 < rtb_Sum7)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_Vector_j2;
    }

    /* End of Switch: '<S659>/Switch1' */

    /* Switch: '<S659>/Switch' incorporates:
     *  RelationalOperator: '<S659>/Relational Operator1'
     */
    if (rtb_Sum7 > rtb_Vector_d)
    {
        rtb_Vector_d = rtb_Sum7;
    }

    /* End of Switch: '<S659>/Switch' */
    /* End of Outputs for SubSystem: '<S654>/Limiter' */

    /* Sum: '<S654>/Sum3' incorporates:
     *  UnitDelay: '<S654>/Unit Delay'
     */
    rtb_Vector_d += DTRR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S654>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_p = rtb_Vector_d;

    /* RelationalOperator: '<S631>/Relational Operator' incorporates:
     *  Constant: '<S655>/Calib'
     */
    rtb_AND_o1 = (rtb_Summation <= KeDTRR_Pct_DeltaPctTrqThresh);

    /* Logic: '<S653>/AND' incorporates:
     *  Logic: '<S653>/OR1'
     *  UnitDelay: '<S653>/Unit Delay'
     */
    rtb_RelationalOperator = (rtb_AND_o1 && (!DTRR_ac_DW.UnitDelay_DSTATE_ml));

    /* Update for UnitDelay: '<S653>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ml = rtb_AND_o1;

    /* Logic: '<S658>/OR1' incorporates:
     *  Logic: '<S658>/NOT'
     *  Logic: '<S658>/OR'
     *  UnitDelay: '<S658>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_Switch2_kx || ((rtb_Switch2_kx ||
                        (!rtb_RelationalOperator)) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_c0)));

    /* Update for UnitDelay: '<S658>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_c0 = rtb_Switch2_kx;
    if (!rtb_Switch2_kx)
    {
        /* Switch: '<S631>/Switch2' */
        rtb_Vector_d = DTRR_ac_B.Merge2;
    }

    /* Switch: '<S630>/Switch1' incorporates:
     *  Constant: '<S499>/PtcPdlPctTrq_Max'
     *  RelationalOperator: '<S630>/Relational Operator'
     */
    if (1.0F < rtb_Vector_d)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = 1.0F;
    }
    else
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_Vector_d;
    }

    /* End of Switch: '<S630>/Switch1' */

    /* Switch: '<S630>/Switch' incorporates:
     *  Constant: '<S499>/PtcPdlPctTrq_Sand'
     *  RelationalOperator: '<S630>/Relational Operator1'
     */
    if (rtb_Sum7 > 0.0F)
    {
        /* Switch: '<S630>/Switch' */
        rtb_Vector_j2 = rtb_Sum7;
    }
    else
    {
        /* Switch: '<S630>/Switch' */
        rtb_Vector_j2 = 0.0F;
    }

    /* End of Switch: '<S630>/Switch' */
    /* End of Outputs for SubSystem: '<S499>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S631>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S631>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S631>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S499>/Limiter1' */
#endif

    /* End of If: '<S499>/If_PropDrvMd' */

    /* Lookup_n-D: '<S689>/Vector' incorporates:
     *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_Pct_PtcPdlPctTrq_Power = look2_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
        &(KxDTRR_K_PtcPdlPctTrqWhl_Power[0])), ((const float32 *)
        &(KyDTRR_K_PtcPdlPctTrqWhl_Power[0])), ((const float32 *)
        &(KtDTRR_K_PtcPdlPctTrqWhl_Power[0])), DTRR_ac_ConstP.pooled6, 17U);

    /* If: '<S500>/If_DrvMd' incorporates:
     *  Abs: '<S668>/Abs2'
     *  Logic: '<S668>/Logical Operator'
     *  Logic: '<S668>/Logical Operator1'
     *  Lookup_n-D: '<S676>/Vector'
     *  Lookup_n-D: '<S677>/Vector'
     *  RelationalOperator: '<S500>/Relational Operator'
     *  RelationalOperator: '<S668>/Relational Operator'
     *  Sum: '<S668>/Sum1'
     *  Switch: '<S668>/Switch2'
     *  UnitDelay: '<S500>/Unit Delay2'
     *  UnitDelay: '<S668>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_3

    /* Outputs for Atomic SubSystem: '<S500>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S668>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S668>/EdgeRising' */
    /* Outputs for Atomic SubSystem: '<S668>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S500>/EdgeRising' */
    if (DTRR_ac_B.LeDTRR_b_DrvMdNormal_active)
    {
        /* Outputs for IfAction SubSystem: '<S500>/DrvMd_Normal' incorporates:
         *  ActionPort: '<S661>/Action Port'
         */
        DTRR_ac_DrvMd_Normal(VeDTRR_Pct_PtcPdlPctTrq_Normal,
                             (&(VeDTRR_Pct_PctPdlTrqBlndRequest_x250)));

        /* End of Outputs for SubSystem: '<S500>/DrvMd_Normal' */
    }
    else if (DTRR_ac_B.LeDTRR_b_DrvMdEco_active)
    {
        /* Outputs for IfAction SubSystem: '<S500>/DrvMd_Eco' incorporates:
         *  ActionPort: '<S660>/Action Port'
         */
        DTRR_ac_TrrMd_Eco(VeDTRR_Pct_PtcPdlPctTrq_Camel,
                          (&(VeDTRR_Pct_PctPdlTrqBlndRequest_x250)));

        /* End of Outputs for SubSystem: '<S500>/DrvMd_Eco' */
    }
    else
    {
        if (DTRR_ac_B.LeDTRR_b_DrvMdPower_active)
        {
            /* Outputs for IfAction SubSystem: '<S500>/DrvMd_Power' incorporates:
             *  ActionPort: '<S662>/Action Port'
             */
            DTRR_ac_DrvMd_EcoPwrLim(VeDTRR_Pct_PtcPdlPctTrq_Power,
                                    (&(VeDTRR_Pct_PctPdlTrqBlndRequest_x250)));

            /* End of Outputs for SubSystem: '<S500>/DrvMd_Power' */
        }
    }

    /* RelationalOperator: '<S500>/Relational Operator' */
    rtb_AND_o1 = (rtb_LeDTRR_cnt_DrvMdIdx != DTRR_ac_DW.UnitDelay2_DSTATE_a);

    /* Logic: '<S663>/AND' incorporates:
     *  Logic: '<S663>/OR1'
     *  UnitDelay: '<S663>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_AND_o1 && (!DTRR_ac_DW.UnitDelay_DSTATE_kp));

    /* Update for UnitDelay: '<S663>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_kp = rtb_AND_o1;

    /* Abs: '<S668>/Abs2' */
    VeDTRR_Pct_PctPdlDeltaTrq_x250 = fabsf(VeDTRR_Pct_PctPdlTrqBlndRequest_x250
        - DTRR_ac_DW.UnitDelay_DSTATE_h);

    /* Lookup_n-D: '<S677>/Vector' incorporates:
     *  Abs: '<S668>/Abs2'
     */
    rtb_Vector_c2 = look1_iflf_binlcapw(VeDTRR_Pct_PctPdlDeltaTrq_x250, ((const
        float32 *)&(KxDTRR_dPct_PtcPdlTrqRateLU[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLU[0])), 10U);

    /* Lookup_n-D: '<S676>/Vector' incorporates:
     *  Abs: '<S668>/Abs2'
     */
    rtb_Vector_fe = look1_iflf_binlcapw(VeDTRR_Pct_PctPdlDeltaTrq_x250, ((const
        float32 *)&(KxDTRR_dPct_PtcPdlTrqRateLD[0])), ((const float32 *)
        &(KtDTRR_dPct_PtcPdlTrqRateLD[0])), 10U);

    /* Sum: '<S674>/Sum2' incorporates:
     *  UnitDelay: '<S674>/Unit Delay'
     */
    rtb_Sum7 = VeDTRR_Pct_PctPdlTrqBlndRequest_x250 -
        DTRR_ac_DW.UnitDelay_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S674>/Limiter' */
    /* Switch: '<S679>/Switch1' incorporates:
     *  RelationalOperator: '<S679>/Relational Operator'
     */
    if (rtb_Vector_c2 < rtb_Sum7)
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_Vector_c2;
    }
    else
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_Sum7;
    }

    /* End of Switch: '<S679>/Switch1' */

    /* Switch: '<S679>/Switch' incorporates:
     *  RelationalOperator: '<S679>/Relational Operator1'
     */
    if (rtb_Sum3 > rtb_Vector_fe)
    {
        rtb_Vector_fe = rtb_Sum3;
    }

    /* End of Switch: '<S679>/Switch' */
    /* End of Outputs for SubSystem: '<S674>/Limiter' */

    /* Sum: '<S674>/Sum3' incorporates:
     *  UnitDelay: '<S674>/Unit Delay'
     */
    rtb_Vector_fe += DTRR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S674>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_c = rtb_Vector_fe;

    /* RelationalOperator: '<S668>/Relational Operator' incorporates:
     *  Constant: '<S675>/Calib'
     */
    rtb_AND_o1 = (VeDTRR_Pct_PctPdlDeltaTrq_x250 <= KeDTRR_Pct_DeltaPctTrqThresh);

    /* Logic: '<S673>/AND' incorporates:
     *  Logic: '<S673>/OR1'
     *  UnitDelay: '<S673>/Unit Delay'
     */
    rtb_RelationalOperator = (rtb_AND_o1 && (!DTRR_ac_DW.UnitDelay_DSTATE_k3));

    /* Update for UnitDelay: '<S673>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_k3 = rtb_AND_o1;

    /* Logic: '<S678>/OR1' incorporates:
     *  Logic: '<S678>/NOT'
     *  Logic: '<S678>/OR'
     *  UnitDelay: '<S678>/Unit Delay'
     */
    rtb_Switch2_kx = (rtb_Switch2_kx || ((rtb_Switch2_kx ||
                        (!rtb_RelationalOperator)) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_cn)));

    /* Update for UnitDelay: '<S678>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_cn = rtb_Switch2_kx;
    if (!rtb_Switch2_kx)
    {
        /* Switch: '<S668>/Switch2' */
        rtb_Vector_fe = VeDTRR_Pct_PctPdlTrqBlndRequest_x250;
    }

    /* Switch: '<S667>/Switch1' incorporates:
     *  Constant: '<S500>/5'
     *  RelationalOperator: '<S667>/Relational Operator'
     */
    if (1.0F < rtb_Vector_fe)
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = 1.0F;
    }
    else
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_Vector_fe;
    }

    /* End of Switch: '<S667>/Switch1' */

    /* Switch: '<S667>/Switch' incorporates:
     *  Constant: '<S500>/6'
     *  RelationalOperator: '<S667>/Relational Operator1'
     */
    if (rtb_Sum3 > 0.0F)
    {
        /* Switch: '<S667>/Switch' */
        rtb_Vector_c2 = rtb_Sum3;
    }
    else
    {
        /* Switch: '<S667>/Switch' */
        rtb_Vector_c2 = 0.0F;
    }

    /* End of Switch: '<S667>/Switch' */
    /* End of Outputs for SubSystem: '<S500>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S668>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S668>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S668>/Signal Latch On With Reset' */
    /* End of Outputs for SubSystem: '<S500>/Limiter1' */
#endif

    /* End of If: '<S500>/If_DrvMd' */

    /* SignalConversion generated from: '<S133>/Variant_Source3' */
#if Rte_SysCon_Variant_DTRR_FUNC_2

    /* Switch: '<S456>/switch10' */
    rtb_switch10 = rtb_Vector_mt;

#endif

    /* End of SignalConversion generated from: '<S133>/Variant_Source3' */

    /* SignalConversion generated from: '<S133>/Variant_Source3' */
#if Rte_SysCon_Variant_DTRR_FUNC_3

    /* Switch: '<S456>/switch10' */
    rtb_switch10 = rtb_Vector_c2;

#elif !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    /* Switch: '<S456>/switch10' incorporates:
     *  SignalConversion generated from: '<S133>/Variant_Source3'
     */
    rtb_switch10 = rtb_Switch_km;

#endif

    /* End of SignalConversion generated from: '<S133>/Variant_Source3' */

    /* SignalConversion generated from: '<S133>/Variant_Source3' */
#if Rte_SysCon_Variant_DTRR_FUNC_4

    /* Switch: '<S456>/switch10' */
    rtb_switch10 = rtb_UnitDelay3;

#endif

    /* End of SignalConversion generated from: '<S133>/Variant_Source3' */

    /* SignalConversion generated from: '<S133>/Variant_Source3' */
#if Rte_SysCon_Variant_DTRR_FUNC_5

    /* Switch: '<S456>/switch10' */
    rtb_switch10 = rtb_Vector_j2;

#endif

    /* End of SignalConversion generated from: '<S133>/Variant_Source3' */

    /* SignalConversion generated from: '<S133>/Variant_Source3' */
    rtb_Switch_km = rtb_switch10;

    /* Switch: '<S133>/Switch2' incorporates:
     *  Constant: '<S495>/Calib'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_4

    if (KeDTRR_b_LBProgEnbl)
    {
        /* VariantMerge generated from: '<S133>/Variant_Source2' incorporates:
         *  Constant: '<S493>/Constant'
         */
        DTRR_ac_B.VariantMerge_For_Variant_Source = CeDMIR_e_Normal;
    }
    else
    {
        /* VariantMerge generated from: '<S133>/Variant_Source2' incorporates:
         *  Merge: '<S497>/Merge1'
         */
        DTRR_ac_B.VariantMerge_For_Variant_Source = DTRR_ac_B.Merge1_f;
    }

#endif

    /* End of Switch: '<S133>/Switch2' */

    /* SignalConversion generated from: '<S133>/Variant_Source2' */
#if Rte_SysCon_Variant_DTRR_FUNC_2

    /* VariantMerge generated from: '<S133>/Variant_Source2' */
    DTRR_ac_B.VariantMerge_For_Variant_Source = rtb_LeDTRR_e_DrvMdActive_i;

#endif

    /* End of SignalConversion generated from: '<S133>/Variant_Source2' */

    /* SignalConversion generated from: '<S133>/Variant_Source2' */
#if Rte_SysCon_Variant_DTRR_FUNC_3

    /* VariantMerge generated from: '<S133>/Variant_Source2' */
    DTRR_ac_B.VariantMerge_For_Variant_Source = rtb_LeDTRR_e_DrvMdActive;

#elif !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    /* VariantMerge generated from: '<S133>/Variant_Source2' incorporates:
     *  SignalConversion generated from: '<S133>/Variant_Source2'
     */
    DTRR_ac_B.VariantMerge_For_Variant_Source = rtb_LeDTRR_e_DrvMdActv;

#endif

    /* End of SignalConversion generated from: '<S133>/Variant_Source2' */
    /* End of Outputs for SubSystem: '<S9>/Pedal_Percent' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeAXLR_M_OutTorqReqModHH_Axle' */
    (void)Rte_Read_VeAXLR_M_OutTorqReqModHH_Axle_Value(&rtb_Switch_m2);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* UnitDelay: '<S180>/Unit Delay' */
    rtb_Vector_mt = DTRR_ac_DW.UnitDelay_DSTATE_f;

    /* Switch: '<S189>/switch1' incorporates:
     *  Constant: '<S235>/Calib'
     */
    if (KeDTRR_b_CstCtrllr_TC_Enbl)
    {
        /* Switch: '<S189>/switch1' incorporates:
         *  Constant: '<S234>/Calib'
         *  DataTypeConversion: '<S189>/Data Type Conversion6'
         *  Selector: '<S189>/Selector4'
         *  SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat'
         */
        rtb_switch1_d = KaDTRR_i_TCase_Stat_To_CstCtrllrMode[(sint8)
            rtb_TmpSignalConversionAtVeFWDR];
    }
    else
    {
        for (i = 0; i < 14; i++)
        {
            /* DataTypeConversion: '<S232>/Data Type Conversion' */
            rtb_DataTypeConversion[i] = (sint8)
                (rtb_TmpSignalConversionAtGainIn[i] ? 1 : 0);
        }

        /* Switch: '<S189>/switch1' incorporates:
         *  Constant: '<S233>/Calib'
         *  Product: '<S232>/Product'
         *  Product: '<S232>/Product1'
         *  Product: '<S232>/Product10'
         *  Product: '<S232>/Product11'
         *  Product: '<S232>/Product12'
         *  Product: '<S232>/Product13'
         *  Product: '<S232>/Product2'
         *  Product: '<S232>/Product3'
         *  Product: '<S232>/Product4'
         *  Product: '<S232>/Product5'
         *  Product: '<S232>/Product6'
         *  Product: '<S232>/Product7'
         *  Product: '<S232>/Product8'
         *  Product: '<S232>/Product9'
         *  Sum: '<S232>/Sum1'
         */
        rtb_switch1_d = (uint8)(((uint32)((uint8)(((uint32)((uint8)(((uint32)
            ((uint8)(((uint32)((uint8)(((uint32)((uint8)(((uint32)((uint8)
            (((uint32)((uint8)(((uint32)((uint8)(((uint32)((uint8)(((uint32)
            ((uint8)(((uint32)((uint8)(((uint32)((uint8)((((uint32)((uint8)
            rtb_DataTypeConversion[0])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[0])) + (((uint32)((uint8)
            rtb_DataTypeConversion[1])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[1]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[2])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[2]))))) + ((uint32)((uint8)
            (((uint32)((uint8)rtb_DataTypeConversion[3])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[3]))))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[4])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[4]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[5])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[5]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[6])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[6]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[7])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[7]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[8])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[8]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[9])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[9]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[10])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[10]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[11])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[11]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[12])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[12]))))) + (((uint32)((uint8)
            rtb_DataTypeConversion[13])) * ((uint32)
            KaDTRR_i_PropMd_To_CstCtrllrMode[13])));
    }

    /* End of Switch: '<S189>/switch1' */

    /* SwitchCase: '<S191>/Switch Case' incorporates:
     *  DataTypeConversion: '<S189>/Data Type Conversion'
     */
    switch (rtb_switch1_d)
    {
      case 1:
        /* Outputs for IfAction SubSystem: '<S191>/Subsystem' incorporates:
         *  ActionPort: '<S251>/Action Port'
         */
        /* Lookup_n-D: '<S258>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
         */
        DTRR_ac_B.Merge1[0] = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
              &(KxDTRR_a_CstCtrllrAccMax_A[0])), ((const float32 *)
              &(KtDTRR_a_CstCtrllrAccMax_A[0])), 9U);

        /* Lookup_n-D: '<S259>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
         */
        DTRR_ac_B.Merge1[1] = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
              &(KxDTRR_a_CstCtrllrAccMin_A[0])), ((const float32 *)
              &(KtDTRR_a_CstCtrllrAccMin_A[0])), 9U);

        /* Lookup_n-D: '<S260>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
         */
        DTRR_ac_B.Merge1[2] = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
              &(KxDTRR_a_CstCtrllrAccTgt_A[0])), ((const float32 *)
              &(KtDTRR_a_CstCtrllrAccTgt_A[0])), 9U);

        /* End of Outputs for SubSystem: '<S191>/Subsystem' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S191>/Subsystem1' incorporates:
         *  ActionPort: '<S252>/Action Port'
         */
        /* Lookup_n-D: '<S261>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
         */
        DTRR_ac_B.Merge1[0] = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
              &(KxDTRR_a_CstCtrllrAccMax_B[0])), ((const float32 *)
              &(KtDTRR_a_CstCtrllrAccMax_B[0])), 9U);

        /* Lookup_n-D: '<S262>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
         */
        DTRR_ac_B.Merge1[1] = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
              &(KxDTRR_a_CstCtrllrAccMin_B[0])), ((const float32 *)
              &(KtDTRR_a_CstCtrllrAccMin_B[0])), 9U);

        /* Lookup_n-D: '<S263>/Vector' incorporates:
         *  SignalConversion generated from: '<S1>/VeCSVR_v_VehSpdSigned'
         */
        DTRR_ac_B.Merge1[2] = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCSVR, ((const float32 *)
              &(KxDTRR_a_CstCtrllrAccTgt_B[0])), ((const float32 *)
              &(KtDTRR_a_CstCtrllrAccTgt_B[0])), 9U);

        /* End of Outputs for SubSystem: '<S191>/Subsystem1' */
        break;

      case 0:
        /* Outputs for IfAction SubSystem: '<S191>/Subsystem2' incorporates:
         *  ActionPort: '<S253>/Action Port'
         */
        for (i = 0; i < 3; i++)
        {
            /* Merge: '<S191>/Merge1' incorporates:
             *  Inport: '<S253>/H1'
             *  UnitDelay: '<S191>/Unit Delay1'
             */
            DTRR_ac_B.Merge1[i] = DTRR_ac_DW.UnitDelay1_DSTATE_h[i];
        }

        /* End of Outputs for SubSystem: '<S191>/Subsystem2' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S191>/Switch Case' */

    /* Lookup_n-D: '<S489>/Vector' incorporates:
     *  RelationalOperator: '<S456>/Relational Operator8'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_1

    /* Lookup_n-D: '<S489>/Vector' incorporates:
     *  Switch: '<S699>/Switch1'
     */
    rtb_Vector_om = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((const
        float32 *)&(KxDTRR_M_OPDMinTrqDTbl[0])), ((const float32 *)
        &(KtDTRR_M_OPDMinTrqDTbl[0])), 8U);

    /* RelationalOperator: '<S456>/Relational Operator8' incorporates:
     *  Constant: '<S477>/Constant'
     *  SignalConversion generated from: '<S1>/VeDMIR_e_eCoastingSel'
     */
    rtb_RelationalOperator8 = (CeDMIR_e_NotAvail == ((uint32)
        rtb_TmpSignalConversionAtVeDM_e));

#endif

    /* End of Lookup_n-D: '<S489>/Vector' */

    /* Logic: '<S362>/Logical1' incorporates:
     *  Constant: '<S418>/Constant'
     *  Constant: '<S419>/Constant'
     *  RelationalOperator: '<S362>/Comparison1'
     *  RelationalOperator: '<S362>/Comparison2'
     */
    VeDTRC_b_OPD_Selection = ((CeDMIR_e_City == ((uint32)
        rtb_TmpSignalConversionAtVeDM_c)) || (CeDMIR_e_Eco == ((uint32)
        rtb_TmpSignalConversionAtVeDM_c)));

    /* Switch: '<S362>/Switch' incorporates:
     *  Constant: '<S421>/Calib'
     *  Constant: '<S422>/Calib'
     *  Inport: '<Root>/VeDMIR_e_CreepSts'
     *  Inport: '<Root>/VeDMIR_e_RegenSts'
     *  Switch: '<S362>/Switch1'
     */
    if (HeDTRR_b_MaxRegenSelection)
    {
        (void)Rte_Read_VeDMIR_e_RegenSts_Value(&tmpRead_e);

        /* Switch: '<S362>/Switch' incorporates:
         *  Constant: '<S417>/Constant'
         *  Inport: '<Root>/VeDMIR_e_RegenSts'
         *  RelationalOperator: '<S362>/Comparison3'
         */
        VeDTRC_b_OPD_SelectionFinal = (((uint32)tmpRead_e) == CeDMIR_e_MaxRegen);
    }
    else if (HeDTRR_b_CreepEnblSelection)
    {
        (void)Rte_Read_VeDMIR_e_CreepSts_Value(&tmpRead_i);

        /* Switch: '<S362>/Switch' incorporates:
         *  Constant: '<S420>/Constant'
         *  Inport: '<Root>/VeDMIR_e_CreepSts'
         *  RelationalOperator: '<S362>/Comparison4'
         *  Switch: '<S362>/Switch1'
         */
        VeDTRC_b_OPD_SelectionFinal = (((uint32)tmpRead_i) == CeDMIR_e_CreepOff);
    }
    else
    {
        /* Switch: '<S362>/Switch' incorporates:
         *  Switch: '<S362>/Switch1'
         */
        VeDTRC_b_OPD_SelectionFinal = VeDTRC_b_OPD_Selection;
    }

    /* End of Switch: '<S362>/Switch' */

    /* Logic: '<S415>/Logical3' incorporates:
     *  Logic: '<S403>/Logical3'
     */
    rtb_RelationalOperator = !VeDTRI_b_AeCoastReady;

    /* Logic: '<S415>/Logical1' incorporates:
     *  Constant: '<S416>/Constant'
     *  Logic: '<S415>/Logical3'
     *  RelationalOperator: '<S415>/Pedal not OK'
     */
    VeDTRC_b_OPDInhibit_HMI = (((((rtb_RelationalOperator ||
        (VeDTRI_b_AeCoastReadyFA)) || (((uint32)rtb_TmpSignalConversionAtVeAP_j)
        != CeAPSR_e_LV1PVMode_PVOk)) || (VeDTRI_b_OnePedalDriveDsbl)) ||
        (VeDTRI_b_VehSpdFA)) || (VeDTRI_b_VehSpdVSOSigFailSts));

    /* Logic: '<S361>/Logical1' incorporates:
     *  Constant: '<S412>/Constant'
     *  Constant: '<S413>/Constant'
     *  Constant: '<S414>/Calib'
     *  Logic: '<S361>/Logical Operator4'
     *  RelationalOperator: '<S361>/Comparison4'
     *  RelationalOperator: '<S361>/Comparison6'
     */
    VeDTRC_b_OPDInhibit = ((((((VeDTRC_b_OPDInhibit_HMI) ||
        rtb_TmpSignalConversionAtVeCC_i) || rtb_Logical2) ||
        ((CeTRGR_e_TransRangePark == ((uint32)rtb_TmpSignalConversionAtVeTRGR)) ||
         (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
          CeTRGR_e_TransRangeNeutral))) || (HeDTRR_b_OPD_Disable)) ||
                           rtb_TmpSignalConversionAtVeDMIR);

    /* Logic: '<S185>/Logical2' incorporates:
     *  Logic: '<S185>/Logical5'
     *  Logic: '<S359>/Logical3'
     */
    rtb_TmpSignalConversionAtVeDMIR = ((VeDTRC_b_OPD_SelectionFinal) &&
        (!VeDTRC_b_OPDInhibit));

    /* If: '<S456>/If' incorporates:
     *  Abs: '<S456>/Abs'
     *  Abs: '<S456>/Abs1'
     *  Abs: '<S456>/Abs2'
     *  Abs: '<S456>/Abs3'
     *  Constant: '<S480>/Calib'
     *  Constant: '<S481>/Calib'
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S456>/Logical Operator'
     *  Logic: '<S456>/Logical Operator1'
     *  Logic: '<S456>/Logical Operator2'
     *  Logic: '<S456>/Logical Operator3'
     *  Logic: '<S456>/Logical Operator4'
     *  Logic: '<S456>/Logical Operator5'
     *  Logic: '<S456>/Logical Operator6'
     *  Logic: '<S456>/Logical Operator7'
     *  Lookup_n-D: '<S482>/Vector'
     *  Lookup_n-D: '<S483>/Vector'
     *  Lookup_n-D: '<S485>/Vector'
     *  Lookup_n-D: '<S487>/Vector'
     *  RelationalOperator: '<S456>/Relational Operator'
     *  RelationalOperator: '<S456>/Relational Operator1'
     *  RelationalOperator: '<S456>/Relational Operator10'
     *  RelationalOperator: '<S456>/Relational Operator2'
     *  RelationalOperator: '<S456>/Relational Operator3'
     *  RelationalOperator: '<S456>/Relational Operator4'
     *  RelationalOperator: '<S456>/Relational Operator5'
     *  RelationalOperator: '<S456>/Relational Operator6'
     *  RelationalOperator: '<S456>/Relational Operator7'
     *  RelationalOperator: '<S456>/Relational Operator9'
     *  SignalConversion generated from: '<S187>/Variant_Source'
     *  Sum: '<S456>/Sum1'
     *  Sum: '<S456>/Sum2'
     *  Sum: '<S456>/Sum3'
     *  Sum: '<S456>/Sum4'
     *  Switch: '<S456>/switch1'
     *  Switch: '<S456>/switch10'
     *  Switch: '<S456>/switch11'
     *  Switch: '<S456>/switch13'
     *  Switch: '<S456>/switch2'
     *  Switch: '<S456>/switch3'
     *  Switch: '<S456>/switch4'
     *  Switch: '<S456>/switch6'
     *  Switch: '<S456>/switch7'
     *  Switch: '<S456>/switch8'
     *  Switch: '<S456>/switch9'
     *  UnitDelay: '<S456>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_1

    /* Lookup_n-D: '<S482>/Vector' incorporates:
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_eCoastLevel0TrqReq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        ((const float32 *)&(KxDTRR_M_MinTrqAeC0Tbl[0])), ((const float32 *)
        &(KtDTRR_M_MinTrqAeC0Tbl[0])), 7U);
    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        rtb_switch10 = rtb_Vector_om;
    }
    else
    {
        rtb_switch10 = VeDTRR_M_eCoastLevel0TrqReq;
    }

    /* RelationalOperator: '<S456>/Relational Operator4' incorporates:
     *  Constant: '<S479>/Calib'
     *  Logic: '<S185>/Logical2'
     */
    VeDTRR_M_DelCurr2Level0TrqReq = (fabsf(rtb_switch10 -
        DTRR_ac_DW.UnitDelay_DSTATE_a) <= KeDTRR_M_eCoastLvlDeltaTrqThresh);
    rtb_Switch2_kx = ((rtb_TmpSignalConversionAtVeAPSR <
                       KeDTRR_Pct_AccPdlNotAppliedLim) ||
                      (KeDTRR_b_TrqBias_Enable));

    /* Logic: '<S456>/Logical Operator' incorporates:
     *  Constant: '<S474>/Constant'
     *  Constant: '<S480>/Calib'
     *  Constant: '<S481>/Calib'
     */
    VeDTRR_b_MinTrqLev0Actv = (rtb_RelationalOperator8 || ((rtb_Switch2_kx ||
        (VeDTRR_M_DelCurr2Level0TrqReq)) && (((uint32)
        rtb_TmpSignalConversionAtVeDM_e) == CeDMIR_e_Level0)));

    /* Lookup_n-D: '<S483>/Vector' incorporates:
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_eCoastLevel1TrqReq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        ((const float32 *)&(KxDTRR_M_MinTrqAeC1Tbl[0])), ((const float32 *)
        &(KtDTRR_M_MinTrqAeC1Tbl[0])), 7U);
    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S456>/switch8' incorporates:
         *  Lookup_n-D: '<S484>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        rtb_switch8 = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((const
            float32 *)&(KxDTRR_M_MinTrqAeC1Tbl_OPD[0])), ((const float32 *)
            &(KtDTRR_M_MinTrqAeC1Tbl_OPD[0])), 7U);
    }
    else
    {
        /* Switch: '<S456>/switch8' */
        rtb_switch8 = VeDTRR_M_eCoastLevel1TrqReq;
    }

    /* RelationalOperator: '<S456>/Relational Operator5' incorporates:
     *  Constant: '<S479>/Calib'
     *  Logic: '<S185>/Logical2'
     */
    VeDTRR_M_DelCurr2Level1TrqReq = (fabsf(rtb_switch8 -
        DTRR_ac_DW.UnitDelay_DSTATE_a) <= KeDTRR_M_eCoastLvlDeltaTrqThresh);

    /* Logic: '<S456>/Logical Operator3' incorporates:
     *  Constant: '<S478>/Constant'
     */
    VeDTRR_b_MinTrqLev1Actv = ((rtb_Switch2_kx || (VeDTRR_M_DelCurr2Level1TrqReq))
        && (((uint32)rtb_TmpSignalConversionAtVeDM_e) == CeDMIR_e_Level1));

    /* Lookup_n-D: '<S485>/Vector' incorporates:
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_eCoastLevel2TrqReq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        ((const float32 *)&(KxDTRR_M_MinTrqAeC2Tbl[0])), ((const float32 *)
        &(KtDTRR_M_MinTrqAeC2Tbl[0])), 7U);
    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S456>/switch7' incorporates:
         *  Lookup_n-D: '<S486>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        rtb_switch10 = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((const
            float32 *)&(KxDTRR_M_MinTrqAeC2Tbl_OPD[0])), ((const float32 *)
            &(KtDTRR_M_MinTrqAeC2Tbl_OPD[0])), 7U);
    }
    else
    {
        /* Switch: '<S456>/switch7' */
        rtb_switch10 = VeDTRR_M_eCoastLevel2TrqReq;
    }

    /* RelationalOperator: '<S456>/Relational Operator6' incorporates:
     *  Constant: '<S479>/Calib'
     *  Logic: '<S185>/Logical2'
     */
    VeDTRR_M_DelCurr2Level2TrqReq = (fabsf(rtb_switch10 -
        DTRR_ac_DW.UnitDelay_DSTATE_a) <= KeDTRR_M_eCoastLvlDeltaTrqThresh);

    /* Logic: '<S456>/Logical Operator1' incorporates:
     *  Constant: '<S475>/Constant'
     */
    VeDTRR_b_MinTrqLev2Actv = ((rtb_Switch2_kx || (VeDTRR_M_DelCurr2Level2TrqReq))
        && (((uint32)rtb_TmpSignalConversionAtVeDM_e) == CeDMIR_e_Level2));

    /* Lookup_n-D: '<S487>/Vector' incorporates:
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_eCoastLevel3TrqReq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
        ((const float32 *)&(KxDTRR_M_MinTrqAeC3Tbl[0])), ((const float32 *)
        &(KtDTRR_M_MinTrqAeC3Tbl[0])), 7U);
    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S456>/switch9' incorporates:
         *  Lookup_n-D: '<S488>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        rtb_Vector_j2 = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((const
            float32 *)&(KxDTRR_M_MinTrqAeC3Tbl_OPD[0])), ((const float32 *)
            &(KtDTRR_M_MinTrqAeC3Tbl_OPD[0])), 7U);
    }
    else
    {
        /* Switch: '<S456>/switch9' */
        rtb_Vector_j2 = VeDTRR_M_eCoastLevel3TrqReq;
    }

    /* RelationalOperator: '<S456>/Relational Operator7' incorporates:
     *  Constant: '<S479>/Calib'
     *  Logic: '<S185>/Logical2'
     */
    VeDTRR_M_DelCurr2Level3TrqReq = (fabsf(rtb_Vector_j2 -
        DTRR_ac_DW.UnitDelay_DSTATE_a) <= KeDTRR_M_eCoastLvlDeltaTrqThresh);

    /* Logic: '<S456>/Logical Operator4' incorporates:
     *  Constant: '<S476>/Constant'
     */
    VeDTRR_b_MinTrqLev3Actv = ((rtb_Switch2_kx || (VeDTRR_M_DelCurr2Level3TrqReq))
        && (((uint32)rtb_TmpSignalConversionAtVeDM_e) == CeDMIR_e_Level3));
    if (VeDTRR_b_MinTrqLev0Actv)
    {
        if (rtb_TmpSignalConversionAtVeDMIR)
        {
            /* Outputs for IfAction SubSystem: '<S456>/AeCoastLv0MinTrq' incorporates:
             *  ActionPort: '<S470>/Action Port'
             */
            /* Merge: '<S456>/Merge' incorporates:
             *  Inport: '<S470>/PTC_PDL_WHL_TRQ_KPH'
             */
            VeDTRR_M_AggressiveMinTrqRaw = rtb_Vector_om;

            /* End of Outputs for SubSystem: '<S456>/AeCoastLv0MinTrq' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S456>/AeCoastLv0MinTrq' incorporates:
             *  ActionPort: '<S470>/Action Port'
             */
            /* Merge: '<S456>/Merge' incorporates:
             *  Inport: '<S470>/PTC_PDL_WHL_TRQ_KPH'
             */
            VeDTRR_M_AggressiveMinTrqRaw = VeDTRR_M_eCoastLevel0TrqReq;

            /* End of Outputs for SubSystem: '<S456>/AeCoastLv0MinTrq' */
        }
    }
    else if (VeDTRR_b_MinTrqLev1Actv)
    {
        /* Outputs for IfAction SubSystem: '<S456>/AeCoastLv1MinTrq' incorporates:
         *  ActionPort: '<S471>/Action Port'
         */
        /* Merge: '<S456>/Merge' incorporates:
         *  Inport: '<S471>/PTC_PDL_WHL_TRQ_KPH'
         */
        VeDTRR_M_AggressiveMinTrqRaw = rtb_switch8;

        /* End of Outputs for SubSystem: '<S456>/AeCoastLv1MinTrq' */
    }
    else if (VeDTRR_b_MinTrqLev2Actv)
    {
        /* Outputs for IfAction SubSystem: '<S456>/AeCoastLv2MinTrq' incorporates:
         *  ActionPort: '<S472>/Action Port'
         */
        /* Merge: '<S456>/Merge' incorporates:
         *  Inport: '<S472>/PTC_PDL_WHL_TRQ_KPH'
         */
        VeDTRR_M_AggressiveMinTrqRaw = rtb_switch10;

        /* End of Outputs for SubSystem: '<S456>/AeCoastLv2MinTrq' */
    }
    else
    {
        if (VeDTRR_b_MinTrqLev3Actv)
        {
            /* Outputs for IfAction SubSystem: '<S456>/AeCoastLv3MinTrq' incorporates:
             *  ActionPort: '<S473>/Action Port'
             */
            /* Merge: '<S456>/Merge' incorporates:
             *  Inport: '<S473>/PTC_PDL_WHL_TRQ_KPH'
             */
            VeDTRR_M_AggressiveMinTrqRaw = rtb_Vector_j2;

            /* End of Outputs for SubSystem: '<S456>/AeCoastLv3MinTrq' */
        }
    }

    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S456>/switch10' incorporates:
         *  Sum: '<S456>/Sum6'
         */
        rtb_switch10 = rtb_Vector_om - VeDTRR_M_AggressiveMinTrqRaw;
    }
    else
    {
        /* Switch: '<S456>/switch10' incorporates:
         *  Sum: '<S456>/Sum5'
         */
        rtb_switch10 = VeDTRR_M_eCoastLevel0TrqReq -
            VeDTRR_M_AggressiveMinTrqRaw;
    }

    /* Logic: '<S164>/Logical Operator9' incorporates:
     *  Constant: '<S456>/Constant1'
     *  Constant: '<S481>/Calib'
     *  Logic: '<S185>/Logical2'
     */
    rtb_LogicalOperator_ku = ((rtb_switch10 >= 0.0F) && (KeDTRR_b_TrqBias_Enable));
    if (rtb_LogicalOperator_ku)
    {
        /* Switch: '<S84>/Switch8' */
        rtb_switch8 = rtb_switch10;
    }
    else
    {
        /* Switch: '<S84>/Switch8' incorporates:
         *  Constant: '<S456>/Constant3'
         */
        rtb_switch8 = 0.0F;
    }

#else

    /* Switch: '<S84>/Switch8' incorporates:
     *  Constant: '<S455>/Constant'
     *  SignalConversion generated from: '<S187>/Variant_Source'
     */
    rtb_switch8 = 0.0F;

#endif

    /* End of If: '<S456>/If' */

    /* SignalConversion generated from: '<S187>/Variant_Source' */
    VeDTRR_M_AeCoastMinTrqOfst = rtb_switch8;

    /* Outputs for Atomic SubSystem: '<S191>/Protected Division' */
    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S244>/Calib'
     *  Constant: '<S247>/Constant Value'
     *  Constant: '<S247>/Constant Value1'
     *  Constant: '<S247>/Constant Value2'
     *  Constant: '<S247>/Constant Value3'
     *  Logic: '<S247>/AND'
     *  RelationalOperator: '<S247>/Greater Than or Equal '
     *  RelationalOperator: '<S247>/Greater Than or Equal 1'
     *  RelationalOperator: '<S247>/Not Equal'
     *  RelationalOperator: '<S247>/Not Equal1'
     *  Switch: '<S247>/Switch2'
     *  Switch: '<S247>/Switch3'
     */
    if ((VeDTRR_M_AeCoastMinTrqOfst != 0.0F) && (KeDTRR_l_WhlRad != 0.0F))
    {
        /* Switch: '<S247>/Switch1' incorporates:
         *  Product: '<S247>/Division'
         */
        rtb_switch8 = VeDTRR_M_AeCoastMinTrqOfst / KeDTRR_l_WhlRad;
    }
    else if (VeDTRR_M_AeCoastMinTrqOfst > 0.0F)
    {
        /* Switch: '<S247>/Switch2' incorporates:
         *  Constant: '<S247>/MAXFLOAT'
         *  Switch: '<S247>/Switch1'
         */
        rtb_switch8 = 3.402823466E+38F;
    }
    else if (VeDTRR_M_AeCoastMinTrqOfst < 0.0F)
    {
        /* Switch: '<S247>/Switch3' incorporates:
         *  Constant: '<S247>/MINFLOAT'
         *  Switch: '<S247>/Switch1'
         *  Switch: '<S247>/Switch2'
         */
        rtb_switch8 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value4'
         *  Switch: '<S247>/Switch2'
         *  Switch: '<S247>/Switch3'
         */
        rtb_switch8 = 0.0F;
    }

    /* End of Switch: '<S247>/Switch1' */
    /* End of Outputs for SubSystem: '<S191>/Protected Division' */

    /* Product: '<S240>/Product2' incorporates:
     *  Constant: '<S255>/Calib'
     */
    rtb_Vector_om = KeDTRR_l_WhlRad * KeDTRR_l_WhlRad;

    /* Outputs for Atomic SubSystem: '<S240>/Protected Division2' */
    /* Switch: '<S257>/Switch1' incorporates:
     *  Constant: '<S254>/Calib'
     *  Constant: '<S257>/Constant Value'
     *  Constant: '<S257>/Constant Value1'
     *  Constant: '<S257>/Constant Value2'
     *  Constant: '<S257>/Constant Value3'
     *  Logic: '<S257>/AND'
     *  RelationalOperator: '<S257>/Greater Than or Equal '
     *  RelationalOperator: '<S257>/Greater Than or Equal 1'
     *  RelationalOperator: '<S257>/Not Equal'
     *  RelationalOperator: '<S257>/Not Equal1'
     *  Switch: '<S257>/Switch2'
     *  Switch: '<S257>/Switch3'
     */
    if ((KeDTRR_J_WhlInertia != 0.0F) && (rtb_Vector_om != 0.0F))
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Product: '<S257>/Division'
         */
        rtb_Vector_om = KeDTRR_J_WhlInertia / rtb_Vector_om;
    }
    else if (KeDTRR_J_WhlInertia > 0.0F)
    {
        /* Switch: '<S257>/Switch2' incorporates:
         *  Constant: '<S257>/MAXFLOAT'
         *  Switch: '<S257>/Switch1'
         */
        rtb_Vector_om = 3.402823466E+38F;
    }
    else if (KeDTRR_J_WhlInertia < 0.0F)
    {
        /* Switch: '<S257>/Switch3' incorporates:
         *  Constant: '<S257>/MINFLOAT'
         *  Switch: '<S257>/Switch1'
         *  Switch: '<S257>/Switch2'
         */
        rtb_Vector_om = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S257>/Constant Value4'
         *  Switch: '<S257>/Switch2'
         *  Switch: '<S257>/Switch3'
         */
        rtb_Vector_om = 0.0F;
    }

    /* End of Switch: '<S257>/Switch1' */
    /* End of Outputs for SubSystem: '<S240>/Protected Division2' */

    /* Sum: '<S240>/Minus1' incorporates:
     *  Constant: '<S240>/Constant'
     *  Constant: '<S256>/Calib'
     *  Product: '<S240>/Product3'
     */
    rtb_Vector_om = (4.0F * rtb_Vector_om) + KeDTRR_m_NomMass;

    /* Outputs for Atomic SubSystem: '<S191>/Protected Division1' */
    /* Switch: '<S248>/Switch1' incorporates:
     *  Constant: '<S248>/Constant Value'
     *  Constant: '<S248>/Constant Value1'
     *  Constant: '<S248>/Constant Value2'
     *  Constant: '<S248>/Constant Value3'
     *  Logic: '<S248>/AND'
     *  RelationalOperator: '<S248>/Greater Than or Equal '
     *  RelationalOperator: '<S248>/Greater Than or Equal 1'
     *  RelationalOperator: '<S248>/Not Equal'
     *  RelationalOperator: '<S248>/Not Equal1'
     *  Switch: '<S248>/Switch2'
     *  Switch: '<S248>/Switch3'
     */
    if ((rtb_switch8 != 0.0F) && (rtb_Vector_om != 0.0F))
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  Product: '<S248>/Division'
         */
        rtb_switch8 /= rtb_Vector_om;
    }
    else if (rtb_switch8 > 0.0F)
    {
        /* Switch: '<S248>/Switch2' incorporates:
         *  Constant: '<S248>/MAXFLOAT'
         *  Switch: '<S248>/Switch1'
         */
        rtb_switch8 = 3.402823466E+38F;
    }
    else if (rtb_switch8 < 0.0F)
    {
        /* Switch: '<S248>/Switch3' incorporates:
         *  Constant: '<S248>/MINFLOAT'
         *  Switch: '<S248>/Switch1'
         *  Switch: '<S248>/Switch2'
         */
        rtb_switch8 = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S248>/Switch1' incorporates:
         *  Constant: '<S248>/Constant Value4'
         *  Switch: '<S248>/Switch2'
         *  Switch: '<S248>/Switch3'
         */
        rtb_switch8 = 0.0F;
    }

    /* End of Switch: '<S248>/Switch1' */
    /* End of Outputs for SubSystem: '<S191>/Protected Division1' */

    /* Product: '<S191>/Product' incorporates:
     *  Constant: '<S241>/Calib'
     */
    rtb_switch8 *= KeDTRR_K_acc_DeltaTrq_Gain;
    for (i = 0; i < 3; i++)
    {
        /* Sum: '<S191>/Add1' */
        rtb_Add1[i] = DTRR_ac_B.Merge1[i] + rtb_switch8;
    }

    /* Outputs for Atomic SubSystem: '<S190>/EdgeRising' */
    /* Logic: '<S236>/OR1' incorporates:
     *  UnitDelay: '<S236>/Unit Delay'
     */
    rtb_Switch2_kx = !DTRR_ac_DW.UnitDelay_DSTATE_oc;

    /* Update for UnitDelay: '<S236>/Unit Delay' incorporates:
     *  Constant: '<S190>/Constant'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_oc = true;

    /* Switch: '<S190>/Switch' incorporates:
     *  Logic: '<S236>/AND'
     */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S190>/Switch' incorporates:
         *  Constant: '<S190>/Zero'
         */
        rtb_Vector_om = 0.0F;
    }
    else
    {
        /* Sum: '<S190>/Subtract' incorporates:
         *  UnitDelay: '<S190>/Unit Delay'
         */
        rtb_switch8 = rtb_TmpSignalConversionAtVeCSVR -
            DTRR_ac_DW.UnitDelay_DSTATE_hp;

        /* Outputs for Atomic SubSystem: '<S190>/Protected Division' */
        /* Switch: '<S238>/Switch1' incorporates:
         *  Constant: '<S237>/Calib'
         *  Constant: '<S238>/Constant Value'
         *  Constant: '<S238>/Constant Value1'
         *  Constant: '<S238>/Constant Value2'
         *  Constant: '<S238>/Constant Value3'
         *  Logic: '<S238>/AND'
         *  RelationalOperator: '<S238>/Greater Than or Equal '
         *  RelationalOperator: '<S238>/Greater Than or Equal 1'
         *  RelationalOperator: '<S238>/Not Equal'
         *  RelationalOperator: '<S238>/Not Equal1'
         *  Switch: '<S238>/Switch2'
         *  Switch: '<S238>/Switch3'
         */
        if ((rtb_switch8 != 0.0F) && (KeDTRR_t_SmplTime != 0.0F))
        {
            /* Switch: '<S190>/Switch' incorporates:
             *  Product: '<S238>/Division'
             *  Switch: '<S238>/Switch1'
             */
            rtb_Vector_om = rtb_switch8 / KeDTRR_t_SmplTime;
        }
        else if (rtb_switch8 > 0.0F)
        {
            /* Switch: '<S238>/Switch2' incorporates:
             *  Constant: '<S238>/MAXFLOAT'
             *  Switch: '<S190>/Switch'
             */
            rtb_Vector_om = 3.402823466E+38F;
        }
        else if (rtb_switch8 < 0.0F)
        {
            /* Switch: '<S238>/Switch3' incorporates:
             *  Constant: '<S238>/MINFLOAT'
             *  Switch: '<S190>/Switch'
             *  Switch: '<S238>/Switch2'
             */
            rtb_Vector_om = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S190>/Switch' incorporates:
             *  Constant: '<S238>/Constant Value4'
             *  Switch: '<S238>/Switch2'
             *  Switch: '<S238>/Switch3'
             */
            rtb_Vector_om = 0.0F;
        }

        /* End of Switch: '<S238>/Switch1' */
        /* End of Outputs for SubSystem: '<S190>/Protected Division' */
    }

    /* End of Switch: '<S190>/Switch' */
    /* End of Outputs for SubSystem: '<S190>/EdgeRising' */

    /* Switch: '<S249>/Switch2' incorporates:
     *  RelationalOperator: '<S249>/LowerRelop1'
     *  RelationalOperator: '<S249>/UpperRelop'
     *  Switch: '<S249>/Switch'
     */
    if (rtb_Vector_om > rtb_Add1[0])
    {
        rtb_switch10 = rtb_Add1[0];
    }
    else if (rtb_Vector_om < rtb_Add1[1])
    {
        /* Switch: '<S249>/Switch' */
        rtb_switch10 = rtb_Add1[1];
    }
    else
    {
        rtb_switch10 = rtb_Vector_om;
    }

    /* End of Switch: '<S249>/Switch2' */

    /* Sum: '<S191>/Sum' */
    rtb_switch10 -= rtb_Vector_om;

    /* Outputs for Atomic SubSystem: '<S191>/EdgeRising' */
    /* Logic: '<S239>/OR1' incorporates:
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_Switch2_kx = !DTRR_ac_DW.UnitDelay_DSTATE_hw;

    /* Update for UnitDelay: '<S239>/Unit Delay' incorporates:
     *  Constant: '<S191>/Constant2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_hw = true;

    /* End of Outputs for SubSystem: '<S191>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S191>/Signal Latch On With Reset' */
    /* Logic: '<S250>/OR1' incorporates:
     *  Constant: '<S242>/Calib'
     *  Constant: '<S243>/Calib'
     *  Logic: '<S250>/NOT'
     *  Logic: '<S250>/OR'
     *  RelationalOperator: '<S191>/GreaterThanOrEqual'
     *  RelationalOperator: '<S191>/LessThanOrEqual'
     *  UnitDelay: '<S250>/Unit Delay'
     */
    rtb_RelationalOperator8 = ((rtb_switch10 >= KeDTRR_a_CstDwn_AccCtrlLim_High)
        || ((rtb_switch10 > KeDTRR_a_CstDwn_AccCtrlLim_Low) &&
            (DTRR_ac_DW.UnitDelay_DSTATE_gy)));

    /* Update for UnitDelay: '<S250>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_gy = rtb_RelationalOperator8;

    /* End of Outputs for SubSystem: '<S191>/Signal Latch On With Reset' */

    /* Switch: '<S191>/Switch' */
    if (rtb_RelationalOperator8)
    {
        /* Outputs for Atomic SubSystem: '<S191>/EdgeRising' */
        /* Switch: '<S191>/Switch2' incorporates:
         *  Logic: '<S239>/AND'
         *  UnitDelay: '<S191>/Unit Delay'
         */
        if (rtb_Switch2_kx)
        {
            rtb_Vector_om = rtb_TmpSignalConversionAtVeCSVR;
        }
        else
        {
            rtb_Vector_om = DTRR_ac_DW.UnitDelay_DSTATE_f0;
        }

        /* End of Switch: '<S191>/Switch2' */
        /* End of Outputs for SubSystem: '<S191>/EdgeRising' */

        /* Switch: '<S191>/Switch' incorporates:
         *  Constant: '<S245>/Calib'
         *  Product: '<S191>/Product1'
         *  Sum: '<S191>/Sum2'
         */
        rtb_Vector_om += rtb_Add1[2] * KeDTRR_t_SmplTime;
    }
    else
    {
        /* Switch: '<S191>/Switch' */
        rtb_Vector_om = rtb_TmpSignalConversionAtVeCSVR;
    }

    /* End of Switch: '<S191>/Switch' */

    /* Switch: '<S84>/Switch8' incorporates:
     *  Sum: '<S191>/Sum3'
     */
    rtb_switch8 = rtb_Vector_om - rtb_TmpSignalConversionAtVeCSVR;

    /* SwitchCase: '<S188>/Switch Case' incorporates:
     *  DataTypeConversion: '<S189>/Data Type Conversion'
     */
    switch (rtb_switch1_d)
    {
      case 1:
        /* Switch: '<S191>/Switch3' incorporates:
         *  Constant: '<S191>/Zero'
         *  Constant: '<S191>/Zero1'
         *  Constant: '<S246>/Calib'
         *  Logic: '<S191>/Logic1'
         *  RelationalOperator: '<S191>/GreaterThanOrEqual1'
         *  RelationalOperator: '<S191>/GreaterThanOrEqual2'
         */
        if ((rtb_switch8 < KeDTRR_v_CstDwn_AccCtrl_SpdDeadband) && (rtb_switch8 >
             0.0F))
        {
            rtb_switch8 = 0.0F;
        }

        /* Outputs for IfAction SubSystem: '<S188>/Mode1' incorporates:
         *  ActionPort: '<S197>/Action Port'
         */
        DTRR_ac_Mode1(rtb_TmpSignalConversionAtVePLTR,
                      rtb_TmpSignalConversionAtVeCSVR, rtb_switch10, rtb_switch8,
                      &DTRR_ac_B.Merge1_c[0], &DTRR_ac_B.Merge1_c[1],
                      &DTRR_ac_B.Merge1_c[2], &DTRR_ac_B.Merge1_c[3],
                      &DTRR_ac_B.Merge1_c[4], &DTRR_ac_B.Merge1_c[5],
                      &DTRR_ac_B.Merge1_c[6]);

        /* End of Outputs for SubSystem: '<S188>/Mode1' */
        break;

      case 2:
        /* Switch: '<S191>/Switch3' incorporates:
         *  Constant: '<S191>/Zero'
         *  Constant: '<S191>/Zero1'
         *  Constant: '<S246>/Calib'
         *  Logic: '<S191>/Logic1'
         *  RelationalOperator: '<S191>/GreaterThanOrEqual1'
         *  RelationalOperator: '<S191>/GreaterThanOrEqual2'
         */
        if ((rtb_switch8 < KeDTRR_v_CstDwn_AccCtrl_SpdDeadband) && (rtb_switch8 >
             0.0F))
        {
            rtb_switch8 = 0.0F;
        }

        /* Outputs for IfAction SubSystem: '<S188>/Mode2' incorporates:
         *  ActionPort: '<S198>/Action Port'
         */
        DTRR_ac_Mode1(rtb_TmpSignalConversionAtVePLTR,
                      rtb_TmpSignalConversionAtVeCSVR, rtb_switch10, rtb_switch8,
                      &DTRR_ac_B.Merge1_c[0], &DTRR_ac_B.Merge1_c[1],
                      &DTRR_ac_B.Merge1_c[2], &DTRR_ac_B.Merge1_c[3],
                      &DTRR_ac_B.Merge1_c[4], &DTRR_ac_B.Merge1_c[5],
                      &DTRR_ac_B.Merge1_c[6]);

        /* End of Outputs for SubSystem: '<S188>/Mode2' */
        break;

      case 0:
        /* Outputs for IfAction SubSystem: '<S188>/Mode0' incorporates:
         *  ActionPort: '<S196>/Action Port'
         */
        /* Merge: '<S188>/Merge1' incorporates:
         *  Constant: '<S196>/Constant'
         *  Constant: '<S196>/Constant1'
         *  Constant: '<S196>/Constant2'
         *  Constant: '<S196>/Constant3'
         *  Constant: '<S196>/Constant4'
         *  Constant: '<S196>/Constant5'
         *  Constant: '<S196>/Constant6'
         *  SignalConversion generated from: '<S196>/Output'
         */
        DTRR_ac_B.Merge1_c[0] = 0.0F;
        DTRR_ac_B.Merge1_c[1] = 0.0F;
        DTRR_ac_B.Merge1_c[2] = 0.0F;
        DTRR_ac_B.Merge1_c[3] = 0.0F;
        DTRR_ac_B.Merge1_c[4] = 0.0F;
        DTRR_ac_B.Merge1_c[5] = 0.0F;
        DTRR_ac_B.Merge1_c[6] = 0.0F;

        /* End of Outputs for SubSystem: '<S188>/Mode0' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S188>/Switch Case' */

    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S451>/Constant'
     *  RelationalOperator: '<S187>/REVERSE ? '
     */
    rtb_Switch2_kx = (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                      CeTRGR_e_TransRangeReverse);

    /* Switch: '<S456>/switch5' incorporates:
     *  Abs: '<S455>/Abs'
     *  Gain: '<S491>/Gain'
     *  If: '<S455>/If'
     *  Inport: '<Root>/VeAECR_b_AeCoastStat'
     *  Logic: '<S185>/Logical2'
     *  RelationalOperator: '<S455>/Equal'
     *  RelationalOperator: '<S455>/LessThanOrEqual'
     *  SignalConversion generated from: '<S187>/Variant_Source1'
     *  Sum: '<S455>/Subtract'
     *  Switch: '<S455>/switch1'
     *  Switch: '<S455>/switch2'
     *  Switch: '<S455>/switch3'
     *  Switch: '<S456>/switch12'
     *  UnitDelay: '<S455>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_1

    if (rtb_LogicalOperator_ku)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_eCoastLevel0TrqReq;
    }
    else if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S456>/switch12' incorporates:
         *  Switch: '<S108>/Switch2'
         */
        rtb_Switch2_i = VeDTRR_M_eCoastLevel0TrqReq;
    }
    else
    {
        /* Switch: '<S108>/Switch2' incorporates:
         *  Switch: '<S456>/switch12'
         */
        rtb_Switch2_i = VeDTRR_M_AggressiveMinTrqRaw;
    }

#else

    /* Outputs for Atomic SubSystem: '<S455>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S455>/EdgeBi' */
    /* Outputs for Atomic SubSystem: '<S455>/GradientLimiter' */
    /* Switch: '<S455>/switch1' */
    if (rtb_TmpSignalConversionAtVeAECR)
    {
        /* Switch: '<S455>/switch1' incorporates:
         *  Constant: '<S462>/Calib'
         */
        rtb_switch8 = KeDTRR_K_AeCoastGradUp_Fast;

        /* Switch: '<S455>/switch3' incorporates:
         *  Constant: '<S460>/Calib'
         */
        rtb_Switch2_i = KeDTRR_K_AeCoastGradDwn_Fast;
    }
    else
    {
        /* Switch: '<S455>/switch1' incorporates:
         *  Constant: '<S463>/Calib'
         */
        rtb_switch8 = KeDTRR_K_AeCoastGradUp_Slow;

        /* Switch: '<S455>/switch3' incorporates:
         *  Constant: '<S461>/Calib'
         */
        rtb_Switch2_i = KeDTRR_K_AeCoastGradDwn_Slow;
    }

    (void)Rte_Read_VeAECR_b_AeCoastStat_Value(&rtb_AND_au);

    /* If: '<S455>/If' incorporates:
     *  Inport: '<Root>/VeAECR_b_AeCoastStat'
     *  RelationalOperator: '<S455>/Equal'
     */
    if (rtb_AND_au)
    {
        /* Outputs for IfAction SubSystem: '<S455>/AeCoast_MinTorqueMap' incorporates:
         *  ActionPort: '<S457>/Action Port'
         */
        /* Merge: '<S455>/Merge' incorporates:
         *  Lookup_n-D: '<S467>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        rtb_Merge = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((const
            float32 *)&(KxDTRR_M_AeCoast_MinTrqDTbl[0])), ((const float32 *)
            &(KtDTRR_M_AeCoast_MinTrqDTbl[0])), 7U);

        /* End of Outputs for SubSystem: '<S455>/AeCoast_MinTorqueMap' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S455>/Normal_MinTorqueMap' incorporates:
         *  ActionPort: '<S465>/Action Port'
         */
        /* Merge: '<S455>/Merge' incorporates:
         *  Lookup_n-D: '<S469>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        rtb_Merge = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((const
            float32 *)&(KxDTRR_M_MinTrqDTbl[0])), ((const float32 *)
            &(KtDTRR_M_MinTrqDTbl[0])), 7U);

        /* End of Outputs for SubSystem: '<S455>/Normal_MinTorqueMap' */
    }

    /* Sum: '<S459>/Sum2' incorporates:
     *  UnitDelay: '<S459>/Unit Delay'
     */
    rtb_switch10 = rtb_Merge - DTRR_ac_DW.UnitDelay_DSTATE_by;

    /* Outputs for Atomic SubSystem: '<S459>/Limiter' */
    /* Switch: '<S468>/Switch1' incorporates:
     *  RelationalOperator: '<S468>/Relational Operator'
     */
    if (rtb_switch8 < rtb_switch10)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_switch8;
    }
    else
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_switch10;
    }

    /* End of Switch: '<S468>/Switch1' */

    /* Switch: '<S468>/Switch' incorporates:
     *  RelationalOperator: '<S468>/Relational Operator1'
     */
    if (rtb_Sum7 > rtb_Switch2_i)
    {
        rtb_Switch2_i = rtb_Sum7;
    }

    /* End of Switch: '<S468>/Switch' */
    /* End of Outputs for SubSystem: '<S459>/Limiter' */

    /* Sum: '<S459>/Sum3' incorporates:
     *  UnitDelay: '<S459>/Unit Delay'
     */
    rtb_Switch2_i += DTRR_ac_DW.UnitDelay_DSTATE_by;

    /* Update for UnitDelay: '<S459>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_by = rtb_Switch2_i;

    /* RelationalOperator: '<S458>/Not Equal' incorporates:
     *  RelationalOperator: '<S455>/Equal'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    rtb_LogicalOperator_ku = (rtb_AND_au != DTRR_ac_DW.UnitDelay_DSTATE_ex);

    /* Update for UnitDelay: '<S458>/Unit Delay' incorporates:
     *  RelationalOperator: '<S455>/Equal'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_ex = rtb_AND_au;

    /* Logic: '<S466>/OR1' incorporates:
     *  Abs: '<S455>/Abs'
     *  Constant: '<S464>/Calib'
     *  Logic: '<S466>/NOT'
     *  Logic: '<S466>/OR'
     *  RelationalOperator: '<S455>/LessThanOrEqual'
     *  Sum: '<S455>/Subtract'
     *  UnitDelay: '<S455>/Unit Delay'
     *  UnitDelay: '<S466>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = (rtb_LogicalOperator_ku || ((fabsf
        (rtb_Merge - DTRR_ac_DW.UnitDelay_DSTATE_ka) >
        KeDTRR_M_AeCoastLatchThrsld) && (DTRR_ac_DW.UnitDelay_DSTATE_o)));

    /* Update for UnitDelay: '<S466>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_o = rtb_TmpSignalConversionAtVeAECR;

    /* Switch: '<S455>/switch2' */
    if (rtb_TmpSignalConversionAtVeAECR)
    {
        /* Switch: '<S455>/switch2' */
        rtb_Merge = rtb_Switch2_i;
    }

    /* Switch: '<S108>/Switch2' incorporates:
     *  SignalConversion generated from: '<S187>/Variant_Source1'
     */
    rtb_Switch2_i = rtb_Merge;

    /* End of Outputs for SubSystem: '<S455>/GradientLimiter' */
    /* End of Outputs for SubSystem: '<S455>/EdgeBi' */
    /* End of Outputs for SubSystem: '<S455>/Signal Latch On With Reset' */
#endif

    /* End of Switch: '<S456>/switch5' */

    /* SignalConversion generated from: '<S187>/Variant_Source1' */
    VeDTRR_M_MinTrqDTbl = rtb_Switch2_i;

    /* Switch: '<S187>/switch2' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S187>/switch2' incorporates:
         *  Lookup_n-D: '<S452>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_M_NomMinTrq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((
            const float32 *)&(KxDTRR_M_MinTrqRTbl[0])), ((const float32 *)
            &(KtDTRR_M_MinTrqRTbl[0])), 8U);
    }
    else
    {
        /* Switch: '<S187>/switch2' */
        VeDTRR_M_NomMinTrq = VeDTRR_M_MinTrqDTbl;
    }

    /* End of Switch: '<S187>/switch2' */

    /* Switch: '<S270>/switch4' incorporates:
     *  Constant: '<S279>/Calib'
     *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq'
     *  Inport: '<Root>/VeATRR_M_OutCommndTotBrkFricTorq'
     */
    if (KeDTRR_b_BrkPrssCreepEnbl)
    {
        /* Switch: '<S270>/switch4' incorporates:
         *  Lookup_n-D: '<S282>/Vector'
         *  Product: '<S270>/Multiply1'
         *  SignalConversion generated from: '<S1>/VeBRKR_P_BrkPrss'
         */
        rtb_switch4 = rtb_TmpSignalConversionAtVeBRKR * look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeBRKR, ((const float32 *)
              &(KxDTRR_K_BrkPrssConvTbl[0])), ((const float32 *)
              &(KtDTRR_K_BrkPrssConvTbl[0])), 9U);
    }
    else
    {
        (void)Rte_Read_VeATRR_M_OutCommndTotBrkFricTorq_Value(&rtb_switch4);
        (void)Rte_Read_VeATRR_M_DrvIntndTotBrkOutTorq_Value(&rtb_Multiplication2);

        /* Switch: '<S270>/switch4' incorporates:
         *  Inport: '<Root>/VeATRR_M_DrvIntndTotBrkOutTorq'
         *  Inport: '<Root>/VeATRR_M_OutCommndTotBrkFricTorq'
         *  MinMax: '<S270>/Clip I4'
         */
        rtb_switch4 = fmaxf(rtb_Multiplication2, rtb_switch4);
    }

    /* End of Switch: '<S270>/switch4' */

    /* Switch: '<S84>/Switch8' incorporates:
     *  Constant: '<S275>/Constant Value1'
     *  Constant: '<S280>/Calib'
     *  Product: '<S275>/Multiplication3'
     */
    rtb_switch8 = KeDTRR_t_6p25dt / 2.0F;

    /* Product: '<S275>/Multiplication2' incorporates:
     *  Constant: '<S281>/Calib'
     *  Product: '<S275>/Multiplication4'
     *  Sum: '<S275>/Summation'
     *  Sum: '<S275>/Summation1'
     *  Sum: '<S275>/Summation2'
     *  UnitDelay: '<S275>/Unit Delay'
     *  UnitDelay: '<S275>/Unit Delay1'
     */
    rtb_Multiplication2 = ((rtb_switch4 - ((rtb_switch8 -
        KeDTRR_t_BrkTrq_Dervtv_CutOffT) * DTRR_ac_DW.UnitDelay1_DSTATE_o)) -
                           DTRR_ac_DW.UnitDelay_DSTATE_b) / (rtb_switch8 +
        KeDTRR_t_BrkTrq_Dervtv_CutOffT);

    /* MinMax: '<S183>/Clip I5' incorporates:
     *  Constant: '<S183>/Constant Value6'
     *  Lookup_n-D: '<S343>/Vector'
     *  Switch: '<S699>/Switch1'
     */
    VeDTRR_M_PtcPdlCcMinWhlTrq = fminf(look1_iflf_binlcapw
        (VeDTRR_v_PtcPdlWhlTrqKPH, ((const float32 *)
        &(KxDTRR_M_PtcPdlCcMinWhlTrq[0])), ((const float32 *)
        &(KtDTRR_M_PtcPdlCcMinWhlTrq[0])), 7U), 0.0F);

    /* Logic: '<S183>/Logical3' incorporates:
     *  Constant: '<S341>/Calib'
     *  Constant: '<S342>/Calib'
     *  Logic: '<S183>/Logical1'
     *  Logic: '<S183>/Logical2'
     *  RelationalOperator: '<S183>/Relational Operator1'
     *  RelationalOperator: '<S183>/Relational Operator2'
     *  UnitDelay: '<S183>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeAECR = (((((VeDTRI_b_CC_Type) &&
        (DTRR_ac_DW.UnitDelay2_DSTATE_h)) && (KeDTRR_b_NCCHandledHALF)) ||
        rtb_TmpSignalConversionAtVeCC_i) && (rtb_TmpSignalConversionAtVeA_ev <=
        KeDTRR_U_PtcCcMinPdlOvrrd));

    /* UnitDelay: '<S165>/Unit Delay2' */
    rtb_Switch2_i = DTRR_ac_DW.UnitDelay2_DSTATE_m;

    /* RelationalOperator: '<S344>/Relational Operator6' incorporates:
     *  Constant: '<S348>/Calib'
     */
    rtb_LogicalOperator_ku = (rtb_TmpSignalConversionAtVeCCTR <=
        KeDTRR_P_CCDesPwr_CxlTrq_Min);

    /* Outputs for Atomic SubSystem: '<S183>/EdgeFalling' */
    /* Logic: '<S339>/AND' incorporates:
     *  Logic: '<S339>/OR1'
     *  UnitDelay: '<S339>/Unit Delay'
     */
    rtb_AND_au = ((!rtb_TmpSignalConversionAtVeAECR) &&
                  (DTRR_ac_DW.UnitDelay_DSTATE_fc));

    /* Update for UnitDelay: '<S339>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_fc = rtb_TmpSignalConversionAtVeAECR;

    /* End of Outputs for SubSystem: '<S183>/EdgeFalling' */

    /* Switch: '<S346>/switch1' */
    if (rtb_AND_au)
    {
        /* Switch: '<S346>/switch1' incorporates:
         *  Constant: '<S349>/Calib'
         */
        rtb_switch8 = KeDTRR_M_InitPtcMinTrq_AftCCCxl;
    }
    else
    {
        /* Switch: '<S346>/switch1' incorporates:
         *  Constant: '<S350>/Calib'
         *  Sum: '<S346>/LV1_BRAKE_SW1_ON_CNTR1'
         */
        rtb_switch8 = rtb_Switch2_i + KeDTRR_M_PtcMinWhlTrqRampDec;
    }

    /* End of Switch: '<S346>/switch1' */

    /* Switch: '<S344>/switch1' incorporates:
     *  RelationalOperator: '<S344>/Relational Operator1'
     *  RelationalOperator: '<S344>/Relational Operator2'
     */
    if (rtb_LogicalOperator_ku)
    {
        rtb_RelationalOperator8 = (VeDTRR_M_NomMinTrq <= rtb_Switch2_i);
    }
    else
    {
        rtb_RelationalOperator8 = (rtb_switch8 <= VeDTRR_M_NomMinTrq);
    }

    /* End of Switch: '<S344>/switch1' */

    /* Outputs for Atomic SubSystem: '<S183>/Signal Latch On With Reset' */
    /* Logic: '<S345>/OR1' incorporates:
     *  Logic: '<S345>/NOT'
     *  Logic: '<S345>/OR'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    rtb_AND_au = (rtb_AND_au || ((!rtb_RelationalOperator8) &&
                   (DTRR_ac_DW.UnitDelay_DSTATE_kb)));

    /* Update for UnitDelay: '<S345>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_kb = rtb_AND_au;

    /* End of Outputs for SubSystem: '<S183>/Signal Latch On With Reset' */

    /* Switch: '<S340>/Switch1' */
    if (rtb_AND_au)
    {
        /* Switch: '<S344>/switch11' */
        if (rtb_LogicalOperator_ku)
        {
            /* Switch: '<S340>/Switch1' incorporates:
             *  Constant: '<S347>/Calib'
             *  Sum: '<S344>/LV1_BRAKE_SW1_ON_CNTR2'
             *  Switch: '<S344>/switch11'
             */
            VeDTRR_M_PtcPdlMinWhlTrqRamped = rtb_Switch2_i +
                KeDTRR_M_PtcMinWhlTrqRampInc;
        }
        else
        {
            /* Switch: '<S340>/Switch1' incorporates:
             *  Switch: '<S344>/switch11'
             */
            VeDTRR_M_PtcPdlMinWhlTrqRamped = rtb_switch8;
        }

        /* End of Switch: '<S344>/switch11' */
    }
    else
    {
        /* Switch: '<S340>/Switch1' */
        VeDTRR_M_PtcPdlMinWhlTrqRamped = VeDTRR_M_NomMinTrq;
    }

    /* End of Switch: '<S340>/Switch1' */

    /* Switch: '<S270>/switch1' incorporates:
     *  Switch: '<S183>/switch12'
     */
    if (rtb_TmpSignalConversionAtVeBR_k)
    {
        /* Switch: '<S368>/Switch1' incorporates:
         *  Constant: '<S277>/Calib'
         */
        rtb_Sum7 = KeDTRR_M_PtcMinWhlTrqImpndSkid;
    }
    else if (rtb_TmpSignalConversionAtVeAECR)
    {
        /* Switch: '<S183>/switch12' incorporates:
         *  Switch: '<S368>/Switch1'
         */
        rtb_Sum7 = VeDTRR_M_PtcPdlCcMinWhlTrq;
    }
    else
    {
        /* Switch: '<S368>/Switch1' incorporates:
         *  Switch: '<S183>/switch12'
         */
        rtb_Sum7 = VeDTRR_M_PtcPdlMinWhlTrqRamped;
    }

    /* End of Switch: '<S270>/switch1' */

    /* Switch: '<S84>/Switch8' incorporates:
     *  Lookup_n-D: '<S283>/Vector'
     *  Product: '<S270>/Multiply'
     *  Product: '<S275>/Multiplication2'
     *  Switch: '<S270>/switch4'
     */
    rtb_switch8 = look2_iflf_binlcapw(rtb_switch4, rtb_Multiplication2, ((const
        float32 *)&(KxDTRR_K_PtcBrkOffsetMultTbl[0])), ((const float32 *)
        &(KyDTRR_K_PtcBrkOffsetMultTbl[0])), ((const float32 *)
        &(KtDTRR_K_PtcBrkOffsetMultTbl[0])), DTRR_ac_ConstP.Vector_maxIndex_i,
        9U) * rtb_Sum7;

    /* Outputs for Atomic SubSystem: '<S270>/Signal Latch On With Reset' */
    /* Logic: '<S291>/OR1' incorporates:
     *  Constant: '<S286>/Calib'
     *  Constant: '<S287>/Calib'
     *  Logic: '<S291>/NOT'
     *  Logic: '<S291>/OR'
     *  RelationalOperator: '<S270>/Relational Operator3'
     *  RelationalOperator: '<S270>/Relational Operator4'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = ((rtb_Sum7 <= KeDTRR_M_MinTrq_LatchCond) ||
        ((rtb_switch4 > KeDTRR_M_BrkTrq_ResetCond) &&
         (DTRR_ac_DW.UnitDelay_DSTATE_m5j)));

    /* Update for UnitDelay: '<S291>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_m5j = rtb_TmpSignalConversionAtVeAECR;

    /* End of Outputs for SubSystem: '<S270>/Signal Latch On With Reset' */

    /* RelationalOperator: '<S270>/Relational Operator7' incorporates:
     *  Constant: '<S276>/Constant'
     */
    rtb_LogicalOperator_ku = (((uint32)rtb_TmpSignalConversionAtVeBR_d) ==
        CeBRKR_e_BrkApplied);

    /* Switch: '<S270>/Switch1' incorporates:
     *  Constant: '<S285>/Calib'
     *  Constant: '<S288>/Calib'
     *  Constant: '<S289>/Calib'
     *  Logic: '<S270>/Logical4'
     *  Logic: '<S270>/Logical5'
     *  Logic: '<S270>/Logical6'
     *  RelationalOperator: '<S270>/Relational Operator5'
     *  RelationalOperator: '<S270>/Relational Operator6'
     */
    if (KeDTRR_b_EnblCreepCancelImprvmnt)
    {
        tmp = (((rtb_switch4 > KeDTRR_M_BrkTrq_EnblCrpCancel) &&
                (VeDTRR_v_PtcPdlWhlTrqKPH <= KeDTRR_v_VehSpd_EnblCrpCancel)) ||
               rtb_TmpSignalConversionAtVeAECR);
    }
    else
    {
        tmp = !KeDTRR_b_EnblCreepCancelImprvmnt;
    }

    /* End of Switch: '<S270>/Switch1' */

    /* Switch: '<S270>/switch2' incorporates:
     *  Constant: '<S278>/Calib'
     *  Constant: '<S290>/Calib'
     *  Logic: '<S270>/Logical'
     *  Logic: '<S270>/Logical2'
     *  Logic: '<S270>/Logical3'
     *  RelationalOperator: '<S270>/Relational Operator'
     */
    if (((rtb_Sum7 > KeDTRR_M_minCreep) && (rtb_LogicalOperator_ku ||
            (KeDTRR_b_IgnoreBrkPedal))) && tmp)
    {
        /* Switch: '<S270>/Switch' incorporates:
         *  Constant: '<S284>/Calib'
         *  Logic: '<S270>/Logical1'
         *  RelationalOperator: '<S270>/Relational Operator1'
         *  RelationalOperator: '<S270>/Relational Operator2'
         *  Switch: '<S270>/switch3'
         */
        if ((rtb_switch4 <= KeDTRR_M_BrkTrq_CancelMinTrq) &&
                rtb_TmpSignalConversionAtVeAECR)
        {
            /* Switch: '<S270>/switch3' incorporates:
             *  RelationalOperator: '<S270>/Relational Operator1'
             */
            if (rtb_switch8 < KeDTRR_M_minCreep)
            {
                rtb_switch8 = KeDTRR_M_minCreep;
            }

            /* Switch: '<S270>/switch2' incorporates:
             *  Constant: '<S270>/Constant'
             *  MinMax: '<S270>/Min'
             *  Switch: '<S270>/Switch'
             */
            rtb_Sum7 = fminf(0.0F, rtb_switch8);
        }
        else if (rtb_switch8 >= KeDTRR_M_minCreep)
        {
            /* Switch: '<S270>/switch3' incorporates:
             *  Switch: '<S270>/Switch'
             *  Switch: '<S270>/switch2'
             */
            rtb_Sum7 = rtb_switch8;
        }
        else
        {
            /* Switch: '<S270>/switch2' incorporates:
             *  Switch: '<S270>/Switch'
             *  Switch: '<S270>/switch3'
             */
            rtb_Sum7 = KeDTRR_M_minCreep;
        }

        /* End of Switch: '<S270>/Switch' */
    }

    /* End of Switch: '<S270>/switch2' */

    /* Product: '<S273>/Multiply2' incorporates:
     *  Lookup_n-D: '<S314>/Vector'
     *  SignalConversion generated from: '<S1>/VePLTR_Pct_EstSlopeAnglePct'
     */
    VeDTRR_M_eCreepWhlTrq = look1_iflf_binlcapw(rtb_TmpSignalConversionAtVePLTR,
        ((const float32 *)&(KxDTRR_K_eCreepMult4RoadSlope[0])), ((const float32 *)
        &(KtDTRR_K_eCreepMult4RoadSlope[0])), 18U) * rtb_Sum7;

    /* Outputs for Atomic SubSystem: '<S274>/Hysteresis' */
    /* Switch: '<S327>/Switch1' incorporates:
     *  Constant: '<S330>/Calib'
     *  RelationalOperator: '<S327>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeBRKR > KeDTRR_P_BrkPress_CreepLmtRSP)
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Constant: '<S327>/Constant Value'
         */
        rtb_AND_o1 = true;
    }
    else
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Constant: '<S329>/Calib'
         *  RelationalOperator: '<S327>/Greater  Than1'
         *  UnitDelay: '<S327>/Unit Delay'
         */
        rtb_AND_o1 = ((rtb_TmpSignalConversionAtVeBRKR >=
                       KeDTRR_P_BrkPress_CreepLmtLSP) &&
                      (DTRR_ac_DW.UnitDelay_DSTATE_ll));
    }

    /* End of Switch: '<S327>/Switch1' */

    /* Update for UnitDelay: '<S327>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ll = rtb_AND_o1;

    /* End of Outputs for SubSystem: '<S274>/Hysteresis' */

    /* RelationalOperator: '<S274>/Comparison5' incorporates:
     *  Constant: '<S331>/Calib'
     */
    rtb_AND_au = (rtb_TmpSignalConversionAtVeAPSR <
                  KeDTRR_Pct_AccPdlNotAppliedLim);

    /* Switch: '<S274>/switch8' incorporates:
     *  Constant: '<S335>/Calib'
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     */
    if (KeDTRR_b_TurtleMdSts4eCreepEnbl)
    {
        (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value(&tmpRead_8);

        /* UnitDelay: '<S375>/Unit Delay' incorporates:
         *  Constant: '<S320>/Constant'
         *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
         *  RelationalOperator: '<S274>/Comparison10'
         */
        rtb_RelationalOperator8 = (((uint32)tmpRead_8) ==
            CeDMDR_e_No_Turtle_Mode);
    }
    else
    {
        /* UnitDelay: '<S375>/Unit Delay' incorporates:
         *  Constant: '<S274>/TRUE Constant1'
         */
        rtb_RelationalOperator8 = true;
    }

    /* End of Switch: '<S274>/switch8' */

    /* Switch: '<S274>/switch7' incorporates:
     *  Constant: '<S332>/Calib'
     *  Inport: '<Root>/VeSRAR_b_Inhibit_DriveMode'
     */
    if (KeDTRR_b_DrvMdInhb4eCreepEnbl)
    {
        (void)Rte_Read_VeSRAR_b_Inhibit_DriveMode_Value(&rtb_UnitDelay_km);

        /* UnitDelay: '<S107>/Unit Delay' incorporates:
         *  Inport: '<Root>/VeSRAR_b_Inhibit_DriveMode'
         *  RelationalOperator: '<S274>/Comparison9'
         */
        rtb_UnitDelay_km = !rtb_UnitDelay_km;
    }
    else
    {
        /* UnitDelay: '<S107>/Unit Delay' incorporates:
         *  Constant: '<S274>/TRUE Constant'
         */
        rtb_UnitDelay_km = true;
    }

    /* End of Switch: '<S274>/switch7' */

    /* Switch: '<S274>/switch1' incorporates:
     *  Constant: '<S334>/Calib'
     *  Inport: '<Root>/VeAPSR_b_Lv1Pv1LimFailed'
     *  Inport: '<Root>/VeAPSR_b_Lv1Pv2LimFailed'
     */
    if (KeDTRR_b_PdlFail4eCreepEnbl)
    {
        (void)Rte_Read_VeAPSR_b_Lv1Pv2LimFailed_Value(&rtb_Gain_ki);
        (void)Rte_Read_VeAPSR_b_Lv1Pv1LimFailed_Value(&rtb_NotEqual_p);

        /* Gain: '<S85>/Gain' incorporates:
         *  Inport: '<Root>/VeAPSR_b_Lv1Pv1LimFailed'
         *  Inport: '<Root>/VeAPSR_b_Lv1Pv2LimFailed'
         *  Logic: '<S274>/Logical Operator1'
         *  RelationalOperator: '<S274>/Comparison1'
         *  RelationalOperator: '<S274>/Comparison2'
         */
        rtb_Gain_ki = ((!rtb_NotEqual_p) && (!rtb_Gain_ki));
    }
    else
    {
        /* Gain: '<S85>/Gain' incorporates:
         *  Constant: '<S274>/TRUE Constant3'
         */
        rtb_Gain_ki = true;
    }

    /* End of Switch: '<S274>/switch1' */
    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_g);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_f);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Switch: '<S274>/switch13' incorporates:
     *  Constant: '<S274>/TRUE Constant2'
     *  Constant: '<S326>/Constant'
     *  Constant: '<S333>/Calib'
     *  RelationalOperator: '<S274>/Comparison8'
     */
    if (KeDTRR_b_EcoMdInhb4eCreepEnbl)
    {
        tmp = (((uint32)rtb_TmpSignalConversionAtVeDM_c) != CeDMIR_e_Eco);
    }
    else
    {
        tmp = true;
    }

    /* End of Switch: '<S274>/switch13' */

    /* Logic: '<S401>/Logical1' incorporates:
     *  RelationalOperator: '<S274>/Comparison11'
     */
    tmpRead_5 = !rtb_Logical2;

    /* Logic: '<S274>/Logical Operator2' incorporates:
     *  Constant: '<S319>/Constant'
     *  Constant: '<S321>/Constant'
     *  Constant: '<S322>/Constant'
     *  Constant: '<S323>/Constant'
     *  Constant: '<S324>/Constant'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  Logic: '<S274>/Logical Operator3'
     *  Logic: '<S274>/Logical Operator4'
     *  Logic: '<S274>/Logical Operator5'
     *  RelationalOperator: '<S274>/Comparison26'
     *  RelationalOperator: '<S274>/Comparison27'
     *  RelationalOperator: '<S274>/Comparison3'
     *  RelationalOperator: '<S274>/Comparison4'
     *  RelationalOperator: '<S274>/Comparison6'
     */
    VeDTRR_b_eCreepEna = (((((((((((((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
        CeTRGR_e_TransRangePark) && (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        != CeTRGR_e_TransRangeNeutral)) && tmpRead_5) && (((uint32)
        rtb_TmpSignalConversionAtVePL_m) == CePLTR_e_EPBHoldSts_REL)) &&
        (!rtb_AND_o1)) && rtb_AND_au) && rtb_RelationalOperator8) && tmp) &&
                            rtb_UnitDelay_km) && rtb_Gain_ki) && ((((uint32)
        tmpRead_f) != CeINVR_e_InverterFaulted) && (((uint32)tmpRead_g) !=
                            CeINVR_e_InverterFaulted)));

    /* Outputs for Atomic SubSystem: '<S274>/Stop Watch Reset Enabled' */
    /* Switch: '<S338>/Switch2' incorporates:
     *  Constant: '<S328>/Calib'
     *  Logic: '<S274>/Logical5'
     *  Logic: '<S274>/Logical7'
     *  RelationalOperator: '<S274>/Pedal not OK1'
     *  Switch: '<S338>/Switch'
     *  UnitDelay: '<S273>/Unit Delay3'
     */
    if ((DTRR_ac_DW.UnitDelay3_DSTATE_m < KeDTRR_M_eCreepTrqThresh) ||
            (!VeDTRR_b_eCreepEna))
    {
        /* Switch: '<S338>/Switch' incorporates:
         *  Constant: '<S338>/Constant Value2'
         */
        rtb_Switch2_i = 0.0F;
    }
    else
    {
        /* Switch: '<S338>/Switch' incorporates:
         *  Constant: '<S336>/Calib'
         *  Sum: '<S338>/Subtraction'
         *  Switch: '<S338>/Switch2'
         *  UnitDelay: '<S338>/Unit Delay'
         */
        rtb_Switch2_i = KeDTRR_t_6p25dt + DTRR_ac_DW.UnitDelay_DSTATE_cd;
    }

    /* End of Switch: '<S338>/Switch2' */

    /* Update for UnitDelay: '<S338>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_cd = rtb_Switch2_i;

    /* End of Outputs for SubSystem: '<S274>/Stop Watch Reset Enabled' */

    /* Logic: '<S274>/Logical8' incorporates:
     *  Constant: '<S337>/Calib'
     *  Logic: '<S274>/Logical9'
     *  RelationalOperator: '<S274>/Comparison12'
     */
    VeDTRR_b_eCreepAvail = ((VeDTRR_b_eCreepEna) && (rtb_Switch2_i <
        KeDTRR_t_eCreepMaxTime));

    /* Switch: '<S273>/switch12' */
    if (VeDTRR_b_eCreepAvail)
    {
        /* Switch: '<S273>/switch12' */
        VeDTRR_M_CreepReqMinTrq = VeDTRR_M_eCreepWhlTrq;
    }
    else
    {
        /* Switch: '<S273>/switch12' incorporates:
         *  Constant: '<S273>/Constant'
         */
        VeDTRR_M_CreepReqMinTrq = 0.0F;
    }

    /* End of Switch: '<S273>/switch12' */

    /* Switch: '<S273>/switch10' incorporates:
     *  Constant: '<S273>/Constant1'
     *  RelationalOperator: '<S273>/Comparison1'
     */
    if (VeDTRR_M_CreepReqMinTrq > 0.0F)
    {
        /* Switch: '<S273>/switch10' incorporates:
         *  Constant: '<S307>/Constant'
         */
        VeDTRR_e_eCreepStatus = CeDTRR_e_Standard;
    }
    else
    {
        /* Switch: '<S273>/switch10' incorporates:
         *  Constant: '<S308>/Constant'
         */
        VeDTRR_e_eCreepStatus = CeDTRR_e_Off;
    }

    /* End of Switch: '<S273>/switch10' */

    /* Sum: '<S194>/Add2' */
    rtb_TmpSignalConversionAtVeBPCR = fmodf(floorf(((rtb_Vector_mt -
        VeDTRR_M_NomMinTrq) * 512.0F) + 262144.0F), 65536.0F);

    /* Outputs for Atomic SubSystem: '<S194>/Signal Latch On With Reset' */
    /* Logic: '<S194>/Logical7' incorporates:
     *  Constant: '<S194>/Constant5'
     *  Constant: '<S210>/Constant'
     *  Constant: '<S211>/Constant'
     *  Constant: '<S212>/Constant'
     *  Constant: '<S213>/Constant'
     *  Constant: '<S214>/Constant'
     *  Constant: '<S215>/Constant'
     *  Logic: '<S194>/Logic2'
     *  Logic: '<S217>/NOT'
     *  RelationalOperator: '<S194>/Equal'
     *  RelationalOperator: '<S194>/Equal1'
     *  RelationalOperator: '<S194>/Equal2'
     *  RelationalOperator: '<S194>/Equal4'
     *  RelationalOperator: '<S194>/Equal5'
     *  RelationalOperator: '<S194>/Equal6'
     *  RelationalOperator: '<S194>/GreaterThan'
     *  UnitDelay: '<S180>/Unit Delay2'
     */
    rtb_Gain_ki = ((((((((((CeTRGR_e_TransRangePark != ((uint32)
        rtb_TmpSignalConversionAtVeTRGR)) && (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangeNeutral)) &&
                          (((uint32)VeDTRR_e_eCreepStatus) != CeDTRR_e_Standard))
                         && (!rtb_TmpSignalConversionAtVeBR_k)) && (((uint32)
                          rtb_TmpSignalConversionAtVeBR_d) !=
                         CeBRKR_e_BrkApplied)) && (((uint32)
                         rtb_TmpSignalConversionAtVePL_m) !=
                        CePLTR_e_EPBHoldSts_APPLIED)) &&
                      (rtb_TmpSignalConversionAtVeAPSR <=
                       KeDTRR_Pct_AccPdlNotAppliedLim)) && (CeASLR_e_HDC_ACT !=
                      ((uint32)rtb_TmpSignalConversionAtVeASLR))) &&
                    (!rtb_TmpSignalConversionAtVeCC_i)) &&
                   (!DTRR_ac_DW.UnitDelay2_DSTATE_i));

    /* Logic: '<S217>/OR1' incorporates:
     *  Constant: '<S209>/Constant'
     *  Constant: '<S216>/Calib'
     *  DataTypeConversion: '<S189>/Data Type Conversion'
     *  Logic: '<S194>/Logical Operator2'
     *  Logic: '<S194>/Logical7'
     *  Logic: '<S217>/OR'
     *  RelationalOperator: '<S194>/Relational Operator'
     *  RelationalOperator: '<S209>/Compare'
     *  Sum: '<S194>/Add2'
     *  UnitDelay: '<S217>/Unit Delay'
     */
    rtb_Gain_ki = ((((((((float32)((sint32)((rtb_TmpSignalConversionAtVeBPCR <
                            0.0F) ? ((sint32)((uint16)((sint32)(-((sint32)
        ((sint16)((uint16)((float32)(-rtb_TmpSignalConversionAtVeBPCR))))))))) :
                           ((sint32)((uint16)rtb_TmpSignalConversionAtVeBPCR)))))
                        * 0.001953125F) - 512.0F) <
                      KeDTRR_M_CstCtrllr_deltaTrqActvtnLimit) && (((sint32)
                       rtb_switch1_d) != 0)) && rtb_Gain_ki) || (rtb_Gain_ki &&
                    (DTRR_ac_DW.UnitDelay_DSTATE_j4)));

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_j4 = rtb_Gain_ki;

    /* End of Outputs for SubSystem: '<S194>/Signal Latch On With Reset' */

    /* Switch: '<S188>/Switch' incorporates:
     *  Abs: '<S188>/Abs'
     *  Constant: '<S195>/Calib'
     *  Logic: '<S188>/Logic2'
     *  Logic: '<S188>/Logical7'
     *  RelationalOperator: '<S188>/GreaterThan1'
     *  Sum: '<S188>/Subtract'
     *  UnitDelay: '<S188>/Unit Delay2'
     */
    if (((fabsf(rtb_Vector_mt - rtb_Switch_m2) < KeDTRR_M_CstCtrllr_DeltaTrqFrz)
         && rtb_Gain_ki) && (!DTRR_ac_DW.UnitDelay2_DSTATE_f))
    {
        /* Switch: '<S188>/Switch' incorporates:
         *  Sum: '<S188>/Sum2'
         *  Sum: '<S188>/Sum3'
         *  UnitDelay: '<S188>/Unit Delay'
         */
        rtb_Switch_m2 = (DTRR_ac_B.Merge1_c[5] + DTRR_ac_B.Merge1_c[6]) +
            DTRR_ac_DW.UnitDelay_DSTATE_is;
    }
    else
    {
        /* Switch: '<S188>/Switch' incorporates:
         *  UnitDelay: '<S188>/Unit Delay'
         */
        rtb_Switch_m2 = DTRR_ac_DW.UnitDelay_DSTATE_is;
    }

    /* End of Switch: '<S188>/Switch' */

    /* Sum: '<S188>/Sum1' incorporates:
     *  Sum: '<S188>/Subtract2'
     */
    rtb_switch8 = (DTRR_ac_B.Merge1_c[0] + rtb_Switch_m2) + (DTRR_ac_B.Merge1_c
        [3] + DTRR_ac_B.Merge1_c[4]);

    /* Switch: '<S199>/Switch2' incorporates:
     *  RelationalOperator: '<S199>/LowerRelop1'
     *  RelationalOperator: '<S199>/UpperRelop'
     *  Switch: '<S199>/Switch'
     */
    if (rtb_switch8 > DTRR_ac_B.Merge1_c[1])
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = DTRR_ac_B.Merge1_c[1];
    }
    else if (rtb_switch8 < DTRR_ac_B.Merge1_c[2])
    {
        /* Switch: '<S199>/Switch' incorporates:
         *  Switch: '<S108>/Switch2'
         */
        rtb_Switch2_i = DTRR_ac_B.Merge1_c[2];
    }
    else
    {
        /* Switch: '<S108>/Switch2' incorporates:
         *  Switch: '<S199>/Switch'
         */
        rtb_Switch2_i = rtb_switch8;
    }

    /* End of Switch: '<S199>/Switch2' */

    /* Switch: '<S192>/Switch' incorporates:
     *  Constant: '<S200>/Constant'
     *  Constant: '<S201>/Constant'
     *  Constant: '<S202>/Constant'
     *  Constant: '<S203>/Constant'
     *  Logic: '<S192>/Logical Operator'
     *  RelationalOperator: '<S192>/Equal'
     *  RelationalOperator: '<S192>/Equal1'
     *  RelationalOperator: '<S192>/Equal2'
     *  RelationalOperator: '<S192>/Equal4'
     */
    if ((((((CeTRGR_e_TransRangePark == ((uint32)rtb_TmpSignalConversionAtVeTRGR))
            || (((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                CeTRGR_e_TransRangeNeutral)) || (((uint32)
             rtb_TmpSignalConversionAtVeASLR) == CeASLR_e_HDC_ACT)) || (((uint32)
            VeDTRR_e_eCreepStatus) == CeDTRR_e_Standard)) ||
            rtb_TmpSignalConversionAtVeBR_k) || rtb_TmpSignalConversionAtVeCC_i)
    {
        /* Switch: '<S192>/Switch' incorporates:
         *  Constant: '<S206>/Calib'
         */
        rtb_TmpSignalConversionAtVeBRKR = KeDTRR_k_CstCtrllr_GrdMin_Std;
    }
    else
    {
        /* Switch: '<S192>/Switch' incorporates:
         *  Lookup_n-D: '<S207>/Vector'
         *  SignalConversion generated from: '<S1>/VeAPSR_Pct_AccelPedalEffPosition'
         */
        rtb_TmpSignalConversionAtVeBRKR = look1_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeAPSR, ((const float32 *)
              &(KxDTRR_k_CstCtrllr_GrdMin_Fast[0])), ((const float32 *)
              &(KtDTRR_k_CstCtrllr_GrdMin_Fast[0])), 9U);
    }

    /* End of Switch: '<S192>/Switch' */
    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeCSVR_e_VehSpdSrc' */
    (void)Rte_Read_VeCSVR_e_VehSpdSrc_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Outputs for Atomic SubSystem: '<S192>/GradientLimiter' */
    /* Sum: '<S204>/Sum2' incorporates:
     *  Switch: '<S192>/Switch1'
     *  UnitDelay: '<S204>/Unit Delay'
     */
    rtb_switch10 = ((float32)(rtb_Gain_ki ? 1.0F : 0.0F)) -
        DTRR_ac_DW.UnitDelay_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S204>/Limiter' */
    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S205>/Calib'
     *  RelationalOperator: '<S208>/Relational Operator'
     */
    if (KeDTRR_k_CstCtrllr_GrdMax < rtb_switch10)
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = KeDTRR_k_CstCtrllr_GrdMax;
    }
    else
    {
        /* Switch: '<S208>/Switch1' */
        rtb_Sum3 = rtb_switch10;
    }

    /* End of Switch: '<S208>/Switch1' */

    /* Switch: '<S208>/Switch' incorporates:
     *  RelationalOperator: '<S208>/Relational Operator1'
     */
    if (rtb_Sum3 > rtb_TmpSignalConversionAtVeBRKR)
    {
        rtb_TmpSignalConversionAtVeBRKR = rtb_Sum3;
    }

    /* End of Switch: '<S208>/Switch' */
    /* End of Outputs for SubSystem: '<S204>/Limiter' */

    /* Sum: '<S204>/Sum3' incorporates:
     *  UnitDelay: '<S204>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBRKR += DTRR_ac_DW.UnitDelay_DSTATE_d;

    /* Update for UnitDelay: '<S204>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_d = rtb_TmpSignalConversionAtVeBRKR;

    /* End of Outputs for SubSystem: '<S192>/GradientLimiter' */

    /* Switch: '<S188>/Switch1' incorporates:
     *  UnitDelay: '<S188>/Unit Delay1'
     */
    if (rtb_Gain_ki)
    {
        rtb_TmpSignalConversionAtVeBPCR = fmodf(floorf(rtb_Switch2_i / 0.64F),
            65536.0F);
        rtb_Gain_bg = (sint16)((rtb_TmpSignalConversionAtVeBPCR < 0.0F) ?
                               ((sint32)((sint16)(-((sint16)((uint16)((float32)(
            -rtb_TmpSignalConversionAtVeBPCR))))))) : ((sint32)((sint16)((uint16)
            rtb_TmpSignalConversionAtVeBPCR))));
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR = fmodf(floorf
            (DTRR_ac_DW.UnitDelay1_DSTATE_j / 0.64F), 65536.0F);
        rtb_Gain_bg = (sint16)((rtb_TmpSignalConversionAtVeBPCR < 0.0F) ?
                               ((sint32)((sint16)(-((sint16)((uint16)((float32)(
            -rtb_TmpSignalConversionAtVeBPCR))))))) : ((sint32)((sint16)((uint16)
            rtb_TmpSignalConversionAtVeBPCR))));
    }

    /* End of Switch: '<S188>/Switch1' */

    /* Product: '<S192>/Product' */
    rtb_TmpSignalConversionAtVeBRKR *= ((float32)rtb_Gain_bg) * 0.64F;

    /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Update for UnitDelay: '<S188>/Unit Delay2' incorporates:
     *  Abs: '<S188>/Abs1'
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S193>/Compare'
     *  Sum: '<S188>/Subtract1'
     */
    DTRR_ac_DW.UnitDelay2_DSTATE_f = (fabsf(rtb_switch8 - rtb_Switch2_i) > 0.0F);

    /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Update for SubSystem: '<S9>/Min_Torque' */
    /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */

    /* Outputs for Atomic SubSystem: '<S292>/Hysteresis' */
    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S305>/Calib'
     *  RelationalOperator: '<S303>/Greater  Than'
     */
    if (rtb_switch4 > KeDTRR_M_BrkTrq_CreepLmtRSP)
    {
        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S303>/Constant Value'
         */
        rtb_Gain_ki = true;
    }
    else
    {
        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S304>/Calib'
         *  RelationalOperator: '<S303>/Greater  Than1'
         *  UnitDelay: '<S303>/Unit Delay'
         */
        rtb_Gain_ki = ((rtb_switch4 >= KeDTRR_M_BrkTrq_CreepLmtLSP) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_fr));
    }

    /* End of Switch: '<S303>/Switch1' */

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_fr = rtb_Gain_ki;

    /* End of Outputs for SubSystem: '<S292>/Hysteresis' */

    /* Switch: '<S273>/switch7' incorporates:
     *  Logic: '<S274>/Logical2'
     */
    if (!rtb_AND_au)
    {
        /* Switch: '<S273>/switch7' */
        rtb_Switch2_i = rtb_Sum7;
    }
    else
    {
        /* Switch: '<S273>/switch7' */
        rtb_Switch2_i = VeDTRR_M_CreepReqMinTrq;
    }

    /* End of Switch: '<S273>/switch7' */

    /* Outputs for Atomic SubSystem: '<S273>/GradientLimiter' */
    /* Sum: '<S309>/Sum2' incorporates:
     *  UnitDelay: '<S309>/Unit Delay'
     */
    rtb_switch8 = rtb_Switch2_i - DTRR_ac_DW.UnitDelay_DSTATE_ip;

    /* Outputs for Atomic SubSystem: '<S309>/Limiter' */
    /* Switch: '<S316>/Switch1' incorporates:
     *  Constant: '<S313>/Calib'
     *  RelationalOperator: '<S316>/Relational Operator'
     */
    if (KeDTRR_dM_eCreepTrqCancRateLU < rtb_switch8)
    {
        /* Switch: '<S84>/Switch8' */
        rtb_switch8 = KeDTRR_dM_eCreepTrqCancRateLU;
    }

    /* End of Switch: '<S316>/Switch1' */

    /* Switch: '<S316>/Switch' incorporates:
     *  Constant: '<S312>/Calib'
     *  RelationalOperator: '<S316>/Relational Operator1'
     */
    if (rtb_switch8 <= KeDTRR_dM_eCreepTrqCancRateLD)
    {
        rtb_switch8 = KeDTRR_dM_eCreepTrqCancRateLD;
    }

    /* End of Switch: '<S316>/Switch' */
    /* End of Outputs for SubSystem: '<S309>/Limiter' */

    /* Sum: '<S309>/Sum3' incorporates:
     *  UnitDelay: '<S309>/Unit Delay'
     */
    rtb_switch8 += DTRR_ac_DW.UnitDelay_DSTATE_ip;

    /* Update for UnitDelay: '<S309>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ip = rtb_switch8;

    /* End of Outputs for SubSystem: '<S273>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S274>/EdgeBi' */
    /* RelationalOperator: '<S317>/Not Equal' incorporates:
     *  UnitDelay: '<S317>/Unit Delay'
     */
    rtb_NotEqual_p = (VeDTRR_b_eCreepAvail != DTRR_ac_DW.UnitDelay_DSTATE_gg);

    /* Update for UnitDelay: '<S317>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_gg = VeDTRR_b_eCreepAvail;

    /* End of Outputs for SubSystem: '<S274>/EdgeBi' */

    /* Outputs for Atomic SubSystem: '<S274>/EdgeFalling' */
    /* Logic: '<S318>/AND' incorporates:
     *  Logic: '<S318>/OR1'
     *  UnitDelay: '<S318>/Unit Delay'
     */
    rtb_UnitDelay_km = ((!rtb_AND_au) && (DTRR_ac_DW.UnitDelay_DSTATE_bz));

    /* Update for UnitDelay: '<S318>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_bz = rtb_AND_au;

    /* End of Outputs for SubSystem: '<S274>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S273>/Signal Latch On With Reset' */
    /* Logic: '<S315>/OR1' incorporates:
     *  Abs: '<S273>/Abs1'
     *  Constant: '<S311>/Calib'
     *  Logic: '<S274>/Logical1'
     *  Logic: '<S315>/NOT'
     *  Logic: '<S315>/OR'
     *  RelationalOperator: '<S273>/Relational Operator8'
     *  Sum: '<S273>/Add'
     *  UnitDelay: '<S273>/Unit Delay1'
     *  UnitDelay: '<S315>/Unit Delay'
     */
    rtb_NotEqual_p = ((rtb_NotEqual_p || rtb_UnitDelay_km) || ((fabsf
                        (rtb_Switch2_i - DTRR_ac_DW.UnitDelay1_DSTATE_g) >
                        KeDTRR_M_eCreepRampTrqThresh) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_lkw)));

    /* Update for UnitDelay: '<S315>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_lkw = rtb_NotEqual_p;

    /* End of Outputs for SubSystem: '<S273>/Signal Latch On With Reset' */

    /* Switch: '<S310>/Switch1' */
    if (rtb_NotEqual_p)
    {
        /* Switch: '<S310>/Switch1' */
        VeDTRR_M_CreepArbMinTrq = rtb_switch8;
    }
    else
    {
        /* Switch: '<S310>/Switch1' */
        VeDTRR_M_CreepArbMinTrq = rtb_Switch2_i;
    }

    /* End of Switch: '<S310>/Switch1' */

    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S293>/Constant'
     *  Constant: '<S294>/Constant'
     *  Constant: '<S295>/Constant'
     *  Constant: '<S296>/Constant'
     *  Constant: '<S297>/Constant'
     *  Inport: '<Root>/VeHTDR_b_AHH_ModifyAccel_Req'
     *  Logic: '<S271>/Logical1'
     *  RelationalOperator: '<S271>/Relational Operator1'
     *  RelationalOperator: '<S271>/Relational Operator2'
     *  RelationalOperator: '<S271>/Relational Operator3'
     *  RelationalOperator: '<S271>/Relational Operator5'
     *  RelationalOperator: '<S271>/Relational Operator6'
     */
    if (((((((uint32)rtb_TmpSignalConversionAtVePL_m) ==
            CePLTR_e_EPBHoldSts_APPLIED) || (((uint32)
             rtb_TmpSignalConversionAtVePL_m) == CePLTR_e_EPBHoldSts_ReClamping))
          || (((uint32)rtb_TmpSignalConversionAtVePL_m) ==
              CePLTR_e_EPBHoldSts_Flt_EPBAppl)) || (((uint32)
            rtb_TmpSignalConversionAtVePL_m) == CePLTR_e_EPBHoldSts_DynamBrkEPB))
        || (((uint32)rtb_TmpSignalConversionAtVePL_m) ==
            CePLTR_e_EPBHoldSts_Flt_Prsnt))
    {
        /* Switch: '<S299>/Switch1' incorporates:
         *  Constant: '<S302>/Calib'
         */
        rtb_switch8 = KeDTRR_M_minCreep;
    }
    else
    {
        (void)Rte_Read_VeHTDR_b_AHH_ModifyAccel_Req_Value(&rtb_UnitDelay3_d);

        /* Switch: '<S299>/Switch2' incorporates:
         *  Constant: '<S272>/Calib'
         *  Inport: '<Root>/VeHTDR_b_AHH_ModifyAccel_Req'
         *  Logic: '<S271>/Logical2'
         *  Logic: '<S271>/Logical3'
         *  Logic: '<S271>/Logical4'
         *  Switch: '<S182>/switch9'
         */
        if ((rtb_Gain_ki && (!rtb_LogicalOperator_ku)) && (!rtb_UnitDelay3_d))
        {
            /* Switch: '<S299>/Switch1' incorporates:
             *  Constant: '<S302>/Calib'
             *  Switch: '<S299>/Switch2'
             */
            rtb_switch8 = KeDTRR_M_minCreep;
        }
        else if (KeDTRR_b_eCreepingEna)
        {
            /* Switch: '<S182>/switch9' incorporates:
             *  Switch: '<S299>/Switch1'
             *  Switch: '<S299>/Switch2'
             */
            rtb_switch8 = VeDTRR_M_CreepArbMinTrq;
        }
        else
        {
            /* Switch: '<S299>/Switch1' incorporates:
             *  Switch: '<S182>/switch9'
             *  Switch: '<S299>/Switch2'
             */
            rtb_switch8 = rtb_Sum7;
        }

        /* End of Switch: '<S299>/Switch2' */
    }

    /* End of Switch: '<S299>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S271>/GradientLimiter' */
    /* Switch: '<S108>/Switch2' incorporates:
     *  UnitDelay: '<S298>/Unit Delay'
     */
    rtb_Switch2_i = DTRR_ac_DW.UnitDelay_DSTATE_n;

    /* Sum: '<S298>/Sum2' */
    rtb_switch8 -= rtb_Switch2_i;

    /* Outputs for Atomic SubSystem: '<S298>/Limiter' */
    /* Switch: '<S306>/Switch1' incorporates:
     *  Constant: '<S301>/Calib'
     *  RelationalOperator: '<S306>/Relational Operator'
     */
    if (KeDTRR_M_NominalMinTrqLU < rtb_switch8)
    {
        /* Switch: '<S84>/Switch8' */
        rtb_switch8 = KeDTRR_M_NominalMinTrqLU;
    }

    /* End of Switch: '<S306>/Switch1' */

    /* Switch: '<S306>/Switch' incorporates:
     *  Constant: '<S300>/Calib'
     *  RelationalOperator: '<S306>/Relational Operator1'
     */
    if (rtb_switch8 <= KeDTRR_M_NominalMinTrqLD)
    {
        rtb_switch8 = KeDTRR_M_NominalMinTrqLD;
    }

    /* End of Switch: '<S306>/Switch' */
    /* End of Outputs for SubSystem: '<S298>/Limiter' */

    /* Sum: '<S298>/Sum3' */
    VeDTRR_M_NormalMinTrq_Out = rtb_switch8 + rtb_Switch2_i;

    /* Update for UnitDelay: '<S298>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_n = VeDTRR_M_NormalMinTrq_Out;

    /* End of Outputs for SubSystem: '<S271>/GradientLimiter' */

    /* Switch: '<S186>/switch10' incorporates:
     *  Constant: '<S449>/Constant'
     *  Constant: '<S450>/Constant'
     *  Logic: '<S186>/Logical Operator4'
     *  RelationalOperator: '<S186>/Comparison1'
     *  RelationalOperator: '<S186>/Comparison2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeNeutral)
        || (((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark))
    {
        /* Switch: '<S186>/switch10' incorporates:
         *  Constant: '<S186>/Constant1'
         */
        VeDTRR_M_NormalMinTrq_PN_arb = 0.0F;
    }
    else
    {
        /* Switch: '<S186>/switch10' */
        VeDTRR_M_NormalMinTrq_PN_arb = VeDTRR_M_NormalMinTrq_Out;
    }

    /* End of Switch: '<S186>/switch10' */

    /* Switch: '<S187>/switch1' */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S187>/switch1' incorporates:
         *  Lookup_n-D: '<S454>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_M_OPDMinTrq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((
            const float32 *)&(KxDTRR_M_OPDMinTrqRTbl[0])), ((const float32 *)
            &(KtDTRR_M_OPDMinTrqRTbl[0])), 8U);
    }
    else
    {
        /* Switch: '<S187>/switch1' incorporates:
         *  Lookup_n-D: '<S453>/Vector'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_M_OPDMinTrq = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH, ((
            const float32 *)&(KxDTRR_M_OPDMinTrqDTbl[0])), ((const float32 *)
            &(KtDTRR_M_OPDMinTrqDTbl[0])), 8U);
    }

    /* End of Switch: '<S187>/switch1' */

    /* Switch: '<S363>/Switch' incorporates:
     *  Constant: '<S425>/Calib'
     */
    if (KeDTRR_b_OPDPdlPctSrc)
    {
        /* Switch: '<S363>/Switch' incorporates:
         *  Constant: '<S363>/Constant Value1'
         *  Product: '<S363>/Product3'
         */
        VeDTRR_Pct_PdlPctUnFiltTrq = rtb_TmpSignalConversionAtVeAPSR / 100.0F;
    }
    else
    {
        /* Switch: '<S363>/Switch' */
        VeDTRR_Pct_PdlPctUnFiltTrq = rtb_Switch_km;
    }

    /* End of Switch: '<S363>/Switch' */

    /* Outputs for Atomic SubSystem: '<S363>/Digital Lowpass Reset Enabled' */
    /* Switch: '<S108>/Switch2' incorporates:
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_Switch2_i = DTRR_ac_DW.UnitDelay_DSTATE_ef;

    /* Switch: '<S423>/Switch1' incorporates:
     *  Constant: '<S424>/Calib'
     *  Product: '<S423>/Multiplication'
     *  Sum: '<S423>/Subtraction'
     *  Sum: '<S423>/Summation'
     */
    VeDTRR_Pct_PdlPctFiltTrq = ((VeDTRR_Pct_PdlPctUnFiltTrq - rtb_Switch2_i) *
        KeDTRR_K_PdlPctFctr) + rtb_Switch2_i;

    /* Update for UnitDelay: '<S423>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ef = VeDTRR_Pct_PdlPctFiltTrq;

    /* End of Outputs for SubSystem: '<S363>/Digital Lowpass Reset Enabled' */

    /* UnitDelay: '<S364>/Unit Delay3' */
    rtb_UnitDelay3_d = DTRR_ac_DW.UnitDelay3_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising2' */
    /* Logic: '<S429>/OR1' incorporates:
     *  UnitDelay: '<S429>/Unit Delay'
     */
    rtb_Gain_ki = !DTRR_ac_DW.UnitDelay_DSTATE_lnn;

    /* Update for UnitDelay: '<S429>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_lnn = rtb_UnitDelay3_d;

    /* End of Outputs for SubSystem: '<S364>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising3' */
    /* Logic: '<S430>/OR1' incorporates:
     *  UnitDelay: '<S430>/Unit Delay'
     */
    rtb_NotEqual_p = !DTRR_ac_DW.UnitDelay_DSTATE_ba;

    /* Update for UnitDelay: '<S430>/Unit Delay' incorporates:
     *  Constant: '<S364>/TRUE Constant3'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_ba = true;

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising2' */
    /* Gain: '<S85>/Gain' incorporates:
     *  Logic: '<S364>/Logical4'
     *  Logic: '<S429>/AND'
     *  Logic: '<S430>/AND'
     */
    rtb_Gain_ki = ((rtb_UnitDelay3_d && rtb_Gain_ki) || rtb_NotEqual_p);

    /* End of Outputs for SubSystem: '<S364>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S364>/EdgeRising3' */

    /* Switch: '<S439>/Switch1' incorporates:
     *  UnitDelay: '<S439>/Unit Delay'
     */
    if (rtb_Gain_ki)
    {
        rtb_Vector_mt = VeDTRR_Pct_PdlPctFiltTrq;
    }
    else
    {
        rtb_Vector_mt = DTRR_ac_DW.UnitDelay_DSTATE_j;
    }

    /* End of Switch: '<S439>/Switch1' */

    /* MinMax: '<S364>/MinMax4' */
    VeDTRR_Pct_MaxPdlPctFrozen = fmaxf(VeDTRR_Pct_PdlPctFiltTrq, rtb_Vector_mt);

    /* UnitDelay: '<S364>/Unit Delay2' */
    rtb_UnitDelay3_d = DTRR_ac_DW.UnitDelay2_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
    /* Logic: '<S427>/OR1' incorporates:
     *  UnitDelay: '<S427>/Unit Delay'
     */
    rtb_NotEqual_p = !DTRR_ac_DW.UnitDelay_DSTATE_gc;

    /* Update for UnitDelay: '<S427>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_gc = rtb_UnitDelay3_d;

    /* End of Outputs for SubSystem: '<S364>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising1' */
    /* Logic: '<S428>/OR1' incorporates:
     *  UnitDelay: '<S428>/Unit Delay'
     */
    rtb_UnitDelay_km = !DTRR_ac_DW.UnitDelay_DSTATE_o5;

    /* Update for UnitDelay: '<S428>/Unit Delay' incorporates:
     *  Constant: '<S364>/TRUE Constant2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_o5 = true;

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising' */
    /* UnitDelay: '<S107>/Unit Delay' incorporates:
     *  Logic: '<S364>/Logical3'
     *  Logic: '<S427>/AND'
     *  Logic: '<S428>/AND'
     */
    rtb_UnitDelay_km = ((rtb_UnitDelay3_d && rtb_NotEqual_p) || rtb_UnitDelay_km);

    /* End of Outputs for SubSystem: '<S364>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S364>/EdgeRising1' */

    /* Switch: '<S438>/Switch1' incorporates:
     *  UnitDelay: '<S438>/Unit Delay'
     */
    if (rtb_UnitDelay_km)
    {
        rtb_switch10 = VeDTRR_Pct_PdlPctFiltTrq;
    }
    else
    {
        rtb_switch10 = DTRR_ac_DW.UnitDelay_DSTATE_ha;
    }

    /* End of Switch: '<S438>/Switch1' */

    /* MinMax: '<S364>/MinMax1' */
    VeDTRR_Pct_MinPdlPctFrozen = fminf(VeDTRR_Pct_PdlPctFiltTrq, rtb_switch10);

    /* Logic: '<S364>/Logical2' incorporates:
     *  Abs: '<S364>/Abs'
     *  Abs: '<S364>/Abs1'
     *  Constant: '<S435>/Calib'
     *  RelationalOperator: '<S364>/Comparison1'
     *  RelationalOperator: '<S364>/Comparison2'
     *  Sum: '<S364>/Add5'
     *  Sum: '<S364>/Add6'
     *  UnitDelay: '<S364>/Unit Delay4'
     *  UnitDelay: '<S364>/Unit Delay5'
     */
    VeDTRR_b_ConstantPdlActv = ((fabsf(VeDTRR_Pct_MaxPdlPctFrozen -
        DTRR_ac_DW.UnitDelay4_DSTATE) < KeDTRR_r_OPDConstantPdlFact) && (fabsf
        (VeDTRR_Pct_MinPdlPctFrozen - DTRR_ac_DW.UnitDelay5_DSTATE) <
        KeDTRR_r_OPDConstantPdlFact));

    /* RelationalOperator: '<S364>/Comparison5' incorporates:
     *  Constant: '<S434>/Calib'
     *  Sum: '<S364>/Add2'
     */
    VeDTRR_b_OPDActvtMinFlag = ((VeDTRR_Pct_PdlPctFiltTrq -
        VeDTRR_Pct_MaxPdlPctFrozen) < KeDTRR_Pct_OPDActvtMinFlagThresh);

    /* Sum: '<S358>/Sum1' incorporates:
     *  UnitDelay: '<S358>/Unit Delay1'
     */
    rtb_Vector_mt = VeDTRR_Pct_PdlPctUnFiltTrq - DTRR_ac_DW.UnitDelay1_DSTATE_oj;

    /* RelationalOperator: '<S358>/Comparison1' incorporates:
     *  Constant: '<S386>/Calib'
     */
    rtb_TmpSignalConversionAtVeAECR = (rtb_Vector_mt >
        KeDTRR_Pct_StepPdlPctTrqLUThresh);

    /* Outputs for Atomic SubSystem: '<S358>/EdgeRising' */
    /* Logic: '<S383>/OR1' incorporates:
     *  UnitDelay: '<S383>/Unit Delay'
     */
    rtb_AND_au = !DTRR_ac_DW.UnitDelay_DSTATE_gz;

    /* Update for UnitDelay: '<S383>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_gz = rtb_TmpSignalConversionAtVeAECR;

    /* End of Outputs for SubSystem: '<S358>/EdgeRising' */

    /* Switch: '<S108>/Switch2' incorporates:
     *  Constant: '<S364>/Constant Value3'
     *  MinMax: '<S364>/MinMax5'
     */
    rtb_Switch2_i = fminf(0.99F, VeDTRR_Pct_PdlPctUnFiltTrq);

    /* Outputs for Atomic SubSystem: '<S374>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling' */
    /* Outputs for Atomic SubSystem: '<S364>/EdgeFalling' */
    /* Logic: '<S426>/OR1' incorporates:
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S351>/OR1'
     *  Logic: '<S375>/OR1'
     */
    rtb_AND_o1 = !rtb_TmpSignalConversionAtVeDMIR;

    /* End of Outputs for SubSystem: '<S185>/EdgeFalling' */
    /* End of Outputs for SubSystem: '<S374>/EdgeFalling' */

    /* Logic: '<S426>/AND' incorporates:
     *  Logic: '<S426>/OR1'
     *  UnitDelay: '<S426>/Unit Delay'
     */
    rtb_NotEqual_p = (rtb_AND_o1 && (DTRR_ac_DW.UnitDelay_DSTATE_ah));

    /* Update for UnitDelay: '<S426>/Unit Delay' incorporates:
     *  Logic: '<S185>/Logical2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_ah = rtb_TmpSignalConversionAtVeDMIR;

    /* End of Outputs for SubSystem: '<S364>/EdgeFalling' */

    /* Switch: '<S440>/Switch1' incorporates:
     *  UnitDelay: '<S440>/Unit Delay'
     */
    if (rtb_NotEqual_p)
    {
        rtb_switch10 = rtb_Switch2_i;
    }
    else
    {
        rtb_switch10 = DTRR_ac_DW.UnitDelay_DSTATE_m;
    }

    /* End of Switch: '<S440>/Switch1' */

    /* MinMax: '<S364>/MinMax3' */
    VeDTRR_Pct_PdlPctMin = fminf(VeDTRR_Pct_PdlPctUnFiltTrq, rtb_switch10);

    /* Sum: '<S364>/Add3' */
    rtb_switch8 = VeDTRR_Pct_PdlPctUnFiltTrq - VeDTRR_Pct_PdlPctMin;

    /* Outputs for Atomic SubSystem: '<S364>/Protected Division1' */
    /* Switch: '<S437>/Switch1' incorporates:
     *  Constant: '<S364>/Constant Value1'
     *  Constant: '<S437>/Constant Value'
     *  Constant: '<S437>/Constant Value1'
     *  Constant: '<S437>/Constant Value2'
     *  Constant: '<S437>/Constant Value3'
     *  Logic: '<S437>/AND'
     *  RelationalOperator: '<S437>/Greater Than or Equal '
     *  RelationalOperator: '<S437>/Greater Than or Equal 1'
     *  RelationalOperator: '<S437>/Not Equal'
     *  RelationalOperator: '<S437>/Not Equal1'
     *  Sum: '<S364>/Add'
     *  Switch: '<S437>/Switch2'
     *  Switch: '<S437>/Switch3'
     */
    if ((rtb_switch8 != 0.0F) && ((1.0F - VeDTRR_Pct_PdlPctMin) != 0.0F))
    {
        /* Switch: '<S437>/Switch1' incorporates:
         *  Product: '<S437>/Division'
         */
        VeDTRR_K_NormzPdlPctLU = rtb_switch8 / (1.0F - VeDTRR_Pct_PdlPctMin);
    }
    else if (rtb_switch8 > 0.0F)
    {
        /* Switch: '<S437>/Switch2' incorporates:
         *  Constant: '<S437>/MAXFLOAT'
         *  Switch: '<S437>/Switch1'
         */
        VeDTRR_K_NormzPdlPctLU = 3.402823466E+38F;
    }
    else if (rtb_switch8 < 0.0F)
    {
        /* Switch: '<S437>/Switch3' incorporates:
         *  Constant: '<S437>/MINFLOAT'
         *  Switch: '<S437>/Switch1'
         *  Switch: '<S437>/Switch2'
         */
        VeDTRR_K_NormzPdlPctLU = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S437>/Switch1' incorporates:
         *  Constant: '<S437>/Constant Value4'
         *  Switch: '<S437>/Switch2'
         *  Switch: '<S437>/Switch3'
         */
        VeDTRR_K_NormzPdlPctLU = 0.0F;
    }

    /* End of Switch: '<S437>/Switch1' */
    /* End of Outputs for SubSystem: '<S364>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S185>/EdgeFalling' */
    /* Logic: '<S351>/AND' incorporates:
     *  UnitDelay: '<S351>/Unit Delay'
     */
    rtb_UnitDelay3_d = (rtb_AND_o1 && (DTRR_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S351>/Unit Delay' incorporates:
     *  Logic: '<S185>/Logical2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_m5 = rtb_TmpSignalConversionAtVeDMIR;

    /* End of Outputs for SubSystem: '<S185>/EdgeFalling' */

    /* UnitDelay: '<S356>/Unit Delay2' */
    rtb_switch10 = DTRR_ac_DW.UnitDelay2_DSTATE_g;

    /* Logic: '<S164>/Logical Operator9' incorporates:
     *  Constant: '<S411>/Calib'
     *  RelationalOperator: '<S360>/Comparison1'
     */
    rtb_LogicalOperator_ku = (VeDTRR_Pct_PdlPctUnFiltTrq <
        KeDTRR_Pct_PdlPctTrqTipOutThresh);

    /* Logic: '<S360>/Logical4' incorporates:
     *  Constant: '<S360>/Constant Value1'
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S360>/Comparison2'
     *  RelationalOperator: '<S360>/Comparison7'
     *  Sum: '<S360>/Sum5'
     */
    VeDTRR_b_OPDExitCond = (((((VeDTRR_M_NormalMinTrq_PN_arb - rtb_switch10) <
        KeDTRR_M_MinTrqBlndCmptThresh) || (rtb_switch10 > -0.001F)) ||
        rtb_LogicalOperator_ku) || (rtb_TmpSignalConversionAtGainIn[0]));

    /* Outputs for Atomic SubSystem: '<S185>/Signal Latch On With Reset1' */
    /* Logic: '<S366>/OR1' incorporates:
     *  Logic: '<S366>/NOT'
     *  Logic: '<S366>/OR'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    rtb_UnitDelay3_d = (rtb_UnitDelay3_d || ((!VeDTRR_b_OPDExitCond) &&
                         (DTRR_ac_DW.UnitDelay_DSTATE_ca)));

    /* Update for UnitDelay: '<S366>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ca = rtb_UnitDelay3_d;

    /* End of Outputs for SubSystem: '<S185>/Signal Latch On With Reset1' */

    /* Switch: '<S185>/switch2' */
    if (rtb_UnitDelay3_d)
    {
        /* Switch: '<S358>/switch6' incorporates:
         *  Constant: '<S385>/Calib'
         *  Logic: '<S358>/Logical3'
         *  Logic: '<S358>/Logical6'
         *  Logic: '<S383>/AND'
         *  RelationalOperator: '<S358>/Comparison2'
         *  Switch: '<S358>/switch1'
         */
        if (((VeDTRR_Pct_PdlPctUnFiltTrq > KeDTRR_Pct_PdlPctTrqThresh) &&
                (VeDTRR_b_ConstantPdlActv)) || (VeDTRR_b_OPDActvtMinFlag))
        {
            /* Switch: '<S185>/switch2' incorporates:
             *  Constant: '<S384>/Calib'
             *  Switch: '<S358>/switch6'
             */
            VeDTRR_M_OPDMinTrqLU = KeDTRR_M_OPDMinTrqLU;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S358>/EdgeRising' */
            if (rtb_TmpSignalConversionAtVeAECR && rtb_AND_au)
            {
                /* Switch: '<S358>/switch1' incorporates:
                 *  Lookup_n-D: '<S388>/Vector'
                 *  Sum: '<S358>/Sum1'
                 *  Switch: '<S185>/switch2'
                 */
                VeDTRR_M_OPDMinTrqLU = look1_iflf_binlcapw(rtb_Vector_mt, ((
                    const float32 *)&(KxDTRR_M_OPDMinLUStepPdlPctTrq[0])), ((
                    const float32 *)&(KtDTRR_M_OPDMinLUStepPdlPctTrq[0])), 10U);
            }
            else
            {
                /* Switch: '<S185>/switch2' incorporates:
                 *  Lookup_n-D: '<S387>/Vector'
                 *  Switch: '<S358>/switch1'
                 *  Switch: '<S437>/Switch1'
                 */
                VeDTRR_M_OPDMinTrqLU = look1_iflf_binlcapw
                    (VeDTRR_K_NormzPdlPctLU, ((const float32 *)
                      &(KxDTRR_M_OPDMinLUNormzPdlPct[0])), ((const float32 *)
                      &(KtDTRR_M_OPDMinLUNormzPdlPct[0])), 10U);
            }

            /* End of Outputs for SubSystem: '<S358>/EdgeRising' */
        }

        /* End of Switch: '<S358>/switch6' */
    }
    else
    {
        /* Switch: '<S185>/switch2' incorporates:
         *  Constant: '<S355>/Calib'
         */
        VeDTRR_M_OPDMinTrqLU = KeDTRR_M_OPDMinTrqLU_Latch;
    }

    /* End of Switch: '<S185>/switch2' */

    /* RelationalOperator: '<S364>/Comparison4' incorporates:
     *  Constant: '<S433>/Calib'
     *  Sum: '<S364>/Add1'
     */
    VeDTRR_b_OPDActvtMaxFlag = ((VeDTRR_Pct_PdlPctFiltTrq -
        VeDTRR_Pct_MinPdlPctFrozen) > KeDTRR_Pct_OPDActvtMaxFlagThresh);

    /* Sum: '<S357>/Sum1' incorporates:
     *  UnitDelay: '<S357>/Unit Delay1'
     */
    rtb_Vector_mt = DTRR_ac_DW.UnitDelay1_DSTATE_m - VeDTRR_Pct_PdlPctUnFiltTrq;

    /* RelationalOperator: '<S357>/Comparison4' incorporates:
     *  Constant: '<S380>/Calib'
     */
    rtb_AND_au = (rtb_Vector_mt > KeDTRR_Pct_StepPdlPctTrqLDThresh);

    /* Outputs for Atomic SubSystem: '<S357>/EdgeRising' */
    /* Logic: '<S377>/OR1' incorporates:
     *  UnitDelay: '<S377>/Unit Delay'
     */
    rtb_Switch2_kx = !DTRR_ac_DW.UnitDelay_DSTATE_mq;

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_mq = rtb_AND_au;

    /* End of Outputs for SubSystem: '<S357>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising4' */
    /* Logic: '<S431>/OR1' incorporates:
     *  UnitDelay: '<S431>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeAECR = !DTRR_ac_DW.UnitDelay_DSTATE_hs;

    /* Update for UnitDelay: '<S431>/Unit Delay' incorporates:
     *  Constant: '<S364>/TRUE Constant5'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_hs = true;

    /* End of Outputs for SubSystem: '<S364>/EdgeRising4' */

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising5' */
    /* Logic: '<S432>/OR1' incorporates:
     *  UnitDelay: '<S432>/Unit Delay'
     */
    rtb_RelationalOperator8 = !DTRR_ac_DW.UnitDelay_DSTATE_e5;

    /* Update for UnitDelay: '<S432>/Unit Delay' incorporates:
     *  Logic: '<S185>/Logical2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_e5 = rtb_TmpSignalConversionAtVeDMIR;

    /* Outputs for Atomic SubSystem: '<S364>/EdgeRising4' */
    /* Logic: '<S364>/Logical1' incorporates:
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S431>/AND'
     *  Logic: '<S432>/AND'
     */
    rtb_TmpSignalConversionAtVeAECR = (rtb_TmpSignalConversionAtVeAECR ||
        (rtb_TmpSignalConversionAtVeDMIR && rtb_RelationalOperator8));

    /* End of Outputs for SubSystem: '<S364>/EdgeRising4' */
    /* End of Outputs for SubSystem: '<S364>/EdgeRising5' */

    /* Switch: '<S441>/Switch1' incorporates:
     *  Constant: '<S364>/Constant Value2'
     *  UnitDelay: '<S441>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeAECR)
    {
        rtb_switch8 = 0.0001F;
    }
    else
    {
        rtb_switch8 = DTRR_ac_DW.UnitDelay_DSTATE_cp;
    }

    /* End of Switch: '<S441>/Switch1' */

    /* MinMax: '<S364>/MinMax2' */
    VeDTRR_Pct_PdlPctMax = fmaxf(VeDTRR_Pct_PdlPctUnFiltTrq, rtb_switch8);

    /* Sum: '<S364>/Add4' */
    rtb_switch8 = VeDTRR_Pct_PdlPctMax - VeDTRR_Pct_PdlPctUnFiltTrq;

    /* Outputs for Atomic SubSystem: '<S364>/Protected Division' */
    /* Switch: '<S436>/Switch1' incorporates:
     *  Constant: '<S436>/Constant Value'
     *  Constant: '<S436>/Constant Value1'
     *  Constant: '<S436>/Constant Value2'
     *  Constant: '<S436>/Constant Value3'
     *  Logic: '<S436>/AND'
     *  RelationalOperator: '<S436>/Greater Than or Equal '
     *  RelationalOperator: '<S436>/Greater Than or Equal 1'
     *  RelationalOperator: '<S436>/Not Equal'
     *  RelationalOperator: '<S436>/Not Equal1'
     *  Switch: '<S436>/Switch2'
     *  Switch: '<S436>/Switch3'
     */
    if ((rtb_switch8 != 0.0F) && (VeDTRR_Pct_PdlPctMax != 0.0F))
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Product: '<S436>/Division'
         */
        VeDTRR_K_NormzPdlPctLD = rtb_switch8 / VeDTRR_Pct_PdlPctMax;
    }
    else if (rtb_switch8 > 0.0F)
    {
        /* Switch: '<S436>/Switch2' incorporates:
         *  Constant: '<S436>/MAXFLOAT'
         *  Switch: '<S436>/Switch1'
         */
        VeDTRR_K_NormzPdlPctLD = 3.402823466E+38F;
    }
    else if (rtb_switch8 < 0.0F)
    {
        /* Switch: '<S436>/Switch3' incorporates:
         *  Constant: '<S436>/MINFLOAT'
         *  Switch: '<S436>/Switch1'
         *  Switch: '<S436>/Switch2'
         */
        VeDTRR_K_NormzPdlPctLD = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S436>/Switch1' incorporates:
         *  Constant: '<S436>/Constant Value4'
         *  Switch: '<S436>/Switch2'
         *  Switch: '<S436>/Switch3'
         */
        VeDTRR_K_NormzPdlPctLD = 0.0F;
    }

    /* End of Switch: '<S436>/Switch1' */
    /* End of Outputs for SubSystem: '<S364>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S185>/EdgeRising' */
    /* Logic: '<S352>/AND' incorporates:
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S352>/OR1'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    rtb_RelationalOperator8 = (rtb_TmpSignalConversionAtVeDMIR &&
        (!DTRR_ac_DW.UnitDelay_DSTATE_aq));

    /* Update for UnitDelay: '<S352>/Unit Delay' incorporates:
     *  Logic: '<S185>/Logical2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_aq = rtb_TmpSignalConversionAtVeDMIR;

    /* End of Outputs for SubSystem: '<S185>/EdgeRising' */

    /* Logic: '<S360>/Logical5' incorporates:
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S360>/Comparison8'
     *  Sum: '<S360>/Sum6'
     */
    VeDTRR_b_OPDEntryCond = (((rtb_LogicalOperator_ku || ((rtb_switch10 -
        VeDTRR_M_OPDMinTrq) < KeDTRR_M_MinTrqBlndCmptThresh)) ||
        (rtb_TmpSignalConversionAtGainIn[5])) ||
        (rtb_TmpSignalConversionAtGainIn[2]));

    /* Outputs for Atomic SubSystem: '<S185>/Signal Latch On With Reset' */
    /* Logic: '<S365>/OR1' incorporates:
     *  Logic: '<S365>/NOT'
     *  Logic: '<S365>/OR'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    rtb_LogicalOperator_ku = (rtb_RelationalOperator8 ||
        ((!VeDTRR_b_OPDEntryCond) && (DTRR_ac_DW.UnitDelay_DSTATE_oa)));

    /* Update for UnitDelay: '<S365>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_oa = rtb_LogicalOperator_ku;

    /* End of Outputs for SubSystem: '<S185>/Signal Latch On With Reset' */

    /* Switch: '<S185>/switch1' */
    if (rtb_LogicalOperator_ku)
    {
        /* Switch: '<S357>/switch5' incorporates:
         *  Constant: '<S379>/Calib'
         *  Logic: '<S357>/Logical2'
         *  Logic: '<S357>/Logical7'
         *  Logic: '<S377>/AND'
         *  RelationalOperator: '<S357>/Comparison6'
         *  Switch: '<S357>/switch1'
         */
        if (((VeDTRR_Pct_PdlPctUnFiltTrq > KeDTRR_Pct_PdlPctTrqThresh) &&
                (VeDTRR_b_ConstantPdlActv)) || (VeDTRR_b_OPDActvtMaxFlag))
        {
            /* Switch: '<S185>/switch1' incorporates:
             *  Constant: '<S378>/Calib'
             *  Switch: '<S357>/switch5'
             */
            VeDTRR_M_OPDMinTrqLD = KeDTRR_M_OPDMinTrqLD;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S357>/EdgeRising' */
            if (rtb_AND_au && rtb_Switch2_kx)
            {
                /* Switch: '<S357>/switch1' incorporates:
                 *  Lookup_n-D: '<S382>/Vector'
                 *  Sum: '<S357>/Sum1'
                 *  Switch: '<S185>/switch1'
                 */
                VeDTRR_M_OPDMinTrqLD = look1_iflf_binlcapw(rtb_Vector_mt, ((
                    const float32 *)&(KxDTRR_M_OPDMinLDStepPdlPctTrq[0])), ((
                    const float32 *)&(KtDTRR_M_OPDMinLDStepPdlPctTrq[0])), 10U);
            }
            else
            {
                /* Switch: '<S185>/switch1' incorporates:
                 *  Lookup_n-D: '<S381>/Vector'
                 *  Switch: '<S357>/switch1'
                 *  Switch: '<S436>/Switch1'
                 */
                VeDTRR_M_OPDMinTrqLD = look1_iflf_binlcapw
                    (VeDTRR_K_NormzPdlPctLD, ((const float32 *)
                      &(KxDTRR_M_OPDMinLDNormzPdlPct[0])), ((const float32 *)
                      &(KtDTRR_M_OPDMinLDNormzPdlPct[0])), 10U);
            }

            /* End of Outputs for SubSystem: '<S357>/EdgeRising' */
        }

        /* End of Switch: '<S357>/switch5' */
    }
    else
    {
        /* Switch: '<S185>/switch1' incorporates:
         *  Constant: '<S354>/Calib'
         */
        VeDTRR_M_OPDMinTrqLD = KeDTRR_M_OPDMinTrqLD_Latch;
    }

    /* End of Switch: '<S185>/switch1' */

    /* Switch: '<S185>/switch13' incorporates:
     *  Logic: '<S185>/Logical2'
     */
    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S185>/switch13' */
        VeDTRR_M_MinTrqArb = VeDTRR_M_OPDMinTrq;
    }
    else
    {
        /* Switch: '<S185>/switch13' */
        VeDTRR_M_MinTrqArb = VeDTRR_M_NormalMinTrq_PN_arb;
    }

    /* End of Switch: '<S185>/switch13' */

    /* Outputs for Atomic SubSystem: '<S185>/GradientLimiter1' */
    /* Switch: '<S369>/Switch1' */
    if (rtb_RelationalOperator8)
    {
        /* Switch: '<S84>/Switch8' */
        rtb_switch8 = rtb_switch10;
    }
    else
    {
        /* Switch: '<S84>/Switch8' incorporates:
         *  UnitDelay: '<S369>/Unit Delay'
         */
        rtb_switch8 = DTRR_ac_DW.UnitDelay_DSTATE_lk;
    }

    /* End of Switch: '<S369>/Switch1' */

    /* Sum: '<S353>/Sum2' */
    rtb_Vector_mt = VeDTRR_M_MinTrqArb - rtb_switch8;

    /* Outputs for Atomic SubSystem: '<S353>/Limiter1' */
    /* Switch: '<S368>/Switch1' incorporates:
     *  RelationalOperator: '<S368>/Relational Operator'
     */
    if (VeDTRR_M_OPDMinTrqLU < rtb_Vector_mt)
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = VeDTRR_M_OPDMinTrqLU;
    }
    else
    {
        /* Switch: '<S368>/Switch1' */
        rtb_Sum7 = rtb_Vector_mt;
    }

    /* End of Switch: '<S368>/Switch1' */

    /* Switch: '<S368>/Switch' incorporates:
     *  RelationalOperator: '<S368>/Relational Operator1'
     */
    if (rtb_Sum7 <= VeDTRR_M_OPDMinTrqLD)
    {
        rtb_Sum7 = VeDTRR_M_OPDMinTrqLD;
    }

    /* End of Switch: '<S368>/Switch' */
    /* End of Outputs for SubSystem: '<S353>/Limiter1' */

    /* Sum: '<S353>/Sum3' */
    rtb_switch8 += rtb_Sum7;

    /* Switch: '<S369>/Switch3' */
    if (rtb_RelationalOperator8)
    {
        /* Update for UnitDelay: '<S369>/Unit Delay' */
        DTRR_ac_DW.UnitDelay_DSTATE_lk = rtb_switch10;
    }
    else
    {
        /* Update for UnitDelay: '<S369>/Unit Delay' */
        DTRR_ac_DW.UnitDelay_DSTATE_lk = rtb_switch8;
    }

    /* End of Switch: '<S369>/Switch3' */
    /* End of Outputs for SubSystem: '<S185>/GradientLimiter1' */

    /* Switch: '<S356>/switch2' incorporates:
     *  Constant: '<S371>/Calib'
     *  Constant: '<S372>/Calib'
     */
    if (VeDTRC_b_OPDInhibit)
    {
        rtb_TmpSignalConversionAtVeBPCR = KeDTRR_k_MinTrqFinalFc_Inhibit;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR = KeDTRR_k_MinTrqFinalFc;
    }

    /* End of Switch: '<S356>/switch2' */

    /* Outputs for Atomic SubSystem: '<S356>/Digital Lowpass Reset Enabled' */
    /* Sum: '<S370>/Summation' incorporates:
     *  Product: '<S370>/Multiplication'
     *  Sum: '<S370>/Subtraction'
     *  UnitDelay: '<S370>/Unit Delay'
     */
    rtb_Vector_mt = ((rtb_switch8 - DTRR_ac_DW.UnitDelay_DSTATE_md) *
                     rtb_TmpSignalConversionAtVeBPCR) +
        DTRR_ac_DW.UnitDelay_DSTATE_md;

    /* Update for UnitDelay: '<S370>/Unit Delay' incorporates:
     *  Switch: '<S370>/Switch2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_md = rtb_Vector_mt;

    /* End of Outputs for SubSystem: '<S356>/Digital Lowpass Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S374>/EdgeFalling' */
    /* Logic: '<S375>/AND' incorporates:
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_AND_au = (rtb_AND_o1 && (DTRR_ac_DW.UnitDelay_DSTATE_f5));

    /* Update for UnitDelay: '<S375>/Unit Delay' incorporates:
     *  Logic: '<S185>/Logical2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_f5 = rtb_TmpSignalConversionAtVeDMIR;

    /* End of Outputs for SubSystem: '<S374>/EdgeFalling' */

    /* Switch: '<S374>/switch6' incorporates:
     *  Logic: '<S374>/Logical1'
     */
    if (rtb_AND_au || (VeDTRR_b_OPDActvtMinFlag))
    {
        /* Sum: '<S374>/Add' incorporates:
         *  Product: '<S374>/Product'
         */
        rtb_switch10 = VeDTRR_M_NormalMinTrq_PN_arb - (VeDTRC_M_PtcPdlMaxWhlTrq *
            rtb_Switch_km);

        /* Outputs for Atomic SubSystem: '<S374>/Protected Division' */
        /* Switch: '<S376>/Switch1' incorporates:
         *  Constant: '<S374>/Constant Value1'
         *  Constant: '<S376>/Constant Value'
         *  Constant: '<S376>/Constant Value1'
         *  Constant: '<S376>/Constant Value2'
         *  Constant: '<S376>/Constant Value3'
         *  Logic: '<S376>/AND'
         *  RelationalOperator: '<S376>/Greater Than or Equal '
         *  RelationalOperator: '<S376>/Greater Than or Equal 1'
         *  RelationalOperator: '<S376>/Not Equal'
         *  RelationalOperator: '<S376>/Not Equal1'
         *  Sum: '<S374>/Add1'
         *  Switch: '<S376>/Switch2'
         *  Switch: '<S376>/Switch3'
         */
        if ((rtb_switch10 != 0.0F) && ((1.0F - rtb_Switch_km) != 0.0F))
        {
            /* Switch: '<S374>/switch6' incorporates:
             *  Product: '<S376>/Division'
             *  Switch: '<S376>/Switch1'
             */
            rtb_switch10 /= 1.0F - rtb_Switch_km;
        }
        else if (rtb_switch10 > 0.0F)
        {
            /* Switch: '<S376>/Switch2' incorporates:
             *  Constant: '<S376>/MAXFLOAT'
             *  Switch: '<S374>/switch6'
             */
            rtb_switch10 = 3.402823466E+38F;
        }
        else if (rtb_switch10 < 0.0F)
        {
            /* Switch: '<S376>/Switch3' incorporates:
             *  Constant: '<S376>/MINFLOAT'
             *  Switch: '<S374>/switch6'
             *  Switch: '<S376>/Switch2'
             */
            rtb_switch10 = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S374>/switch6' incorporates:
             *  Constant: '<S376>/Constant Value4'
             *  Switch: '<S376>/Switch2'
             *  Switch: '<S376>/Switch3'
             */
            rtb_switch10 = 0.0F;
        }

        /* End of Switch: '<S376>/Switch1' */
        /* End of Outputs for SubSystem: '<S374>/Protected Division' */
    }
    else
    {
        /* Switch: '<S374>/switch6' incorporates:
         *  UnitDelay: '<S374>/Unit Delay6'
         */
        rtb_switch10 = DTRR_ac_DW.UnitDelay6_DSTATE;
    }

    /* End of Switch: '<S374>/switch6' */

    /* Switch: '<S374>/switch1' */
    if (rtb_UnitDelay3_d)
    {
        /* Switch: '<S374>/switch1' */
        VeDTRR_M_OPDMinTrq_OPDoff = rtb_switch10;
    }
    else
    {
        /* Switch: '<S374>/switch1' */
        VeDTRR_M_OPDMinTrq_OPDoff = VeDTRR_M_NormalMinTrq_PN_arb;
    }

    /* End of Switch: '<S374>/switch1' */

    /* Switch: '<S356>/switch3' incorporates:
     *  Logic: '<S185>/Logical2'
     *  Logic: '<S356>/Logical1'
     *  Switch: '<S356>/switch1'
     */
    if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S356>/switch1' incorporates:
         *  Logic: '<S356>/Logical1'
         */
        if (rtb_LogicalOperator_ku || rtb_UnitDelay3_d)
        {
            /* Outputs for Atomic SubSystem: '<S356>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S356>/switch3' incorporates:
             *  Switch: '<S370>/Switch2'
             */
            VeDTRR_M_MinTrqArbShaped = rtb_Vector_mt;

            /* End of Outputs for SubSystem: '<S356>/Digital Lowpass Reset Enabled' */
        }
        else
        {
            /* Switch: '<S356>/switch3' */
            VeDTRR_M_MinTrqArbShaped = rtb_switch8;
        }
    }
    else
    {
        if (rtb_LogicalOperator_ku || rtb_UnitDelay3_d)
        {
            /* Outputs for Atomic SubSystem: '<S356>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S356>/switch1' incorporates:
             *  Switch: '<S370>/Switch2'
             */
            rtb_switch8 = rtb_Vector_mt;

            /* End of Outputs for SubSystem: '<S356>/Digital Lowpass Reset Enabled' */
        }

        /* Switch: '<S356>/switch3' incorporates:
         *  MinMax: '<S356>/MinMax1'
         */
        VeDTRR_M_MinTrqArbShaped = fmaxf(rtb_switch8, VeDTRR_M_OPDMinTrq_OPDoff);
    }

    /* End of Switch: '<S356>/switch3' */
    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeAPSR_b_Lv1PvMod5HighCreepTrqReq' */
    (void)Rte_Read_VeAPSR_b_Lv1PvMod5HighCreepTrqReq_Value(&rtb_Logical6_fd);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Outputs for Atomic SubSystem: '<S356>/Limiter' */
    /* Switch: '<S373>/Switch1' incorporates:
     *  RelationalOperator: '<S373>/Relational Operator'
     */
    if (VeDTRR_M_NormalMinTrq_PN_arb < VeDTRR_M_MinTrqArbShaped)
    {
        /* Switch: '<S84>/Switch8' */
        rtb_switch8 = VeDTRR_M_NormalMinTrq_PN_arb;
    }
    else
    {
        /* Switch: '<S84>/Switch8' */
        rtb_switch8 = VeDTRR_M_MinTrqArbShaped;
    }

    /* End of Switch: '<S373>/Switch1' */

    /* Switch: '<S373>/Switch' incorporates:
     *  RelationalOperator: '<S373>/Relational Operator1'
     */
    if (rtb_switch8 > VeDTRR_M_OPDMinTrq)
    {
        /* Switch: '<S373>/Switch' */
        VeDTRR_M_MinTrqFinal = rtb_switch8;
    }
    else
    {
        /* Switch: '<S373>/Switch' */
        VeDTRR_M_MinTrqFinal = VeDTRR_M_OPDMinTrq;
    }

    /* End of Switch: '<S373>/Switch' */
    /* End of Outputs for SubSystem: '<S356>/Limiter' */

    /* Switch: '<S181>/switch8' incorporates:
     *  Constant: '<S264>/Constant'
     *  Inport: '<Root>/VeCSVR_e_VehSpdSrc'
     *  RelationalOperator: '<S181>/Relational Operator6'
     */
    if (((uint32)tmpRead) == CeCSVR_e_NoValidVehSpdSrcAvail)
    {
        /* Switch: '<S181>/switch8' incorporates:
         *  Constant: '<S269>/Calib'
         */
        VeDTRR_M_PtcPdlMinWhlTrqNoLv1Offset = KeDTRR_M_PtcMinWhlTrqMphFault;
    }
    else
    {
        /* Switch: '<S181>/switch8' */
        VeDTRR_M_PtcPdlMinWhlTrqNoLv1Offset = VeDTRR_M_MinTrqFinal;
    }

    /* End of Switch: '<S181>/switch8' */

    /* Switch: '<S181>/switch9' incorporates:
     *  Constant: '<S265>/Constant'
     *  Logic: '<S181>/Logical2'
     *  RelationalOperator: '<S181>/Relational Operator5'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeAP_j) ==
            CeAPSR_e_LV1PVMode_NotValid) && rtb_Logical6_fd)
    {
        /* Switch: '<S181>/switch7' incorporates:
         *  Constant: '<S266>/Calib'
         *  Constant: '<S267>/Calib'
         */
        if (VeDTRR_b_InPlantMode)
        {
            rtb_TmpSignalConversionAtVeBPCR = KeDTRR_M_Lv1IpPvMod5HiCreepOffset;
        }
        else
        {
            rtb_TmpSignalConversionAtVeBPCR = KeDTRR_M_Lv1PvMod5HiCreepOffset;
        }

        /* End of Switch: '<S181>/switch7' */

        /* Switch: '<S181>/switch9' incorporates:
         *  Constant: '<S268>/Calib'
         *  MinMax: '<S181>/Clip I3'
         *  Sum: '<S181>/Summation1'
         *  Sum: '<S181>/Summation2'
         *  UnitDelay: '<S181>/Unit Delay1'
         */
        VeDTRR_M_PtcPdlMinWhlTrqRaw = fminf(KeDTRR_M_Lv1PvMod5HiCreepTrqInc +
            DTRR_ac_DW.UnitDelay1_DSTATE_jd, VeDTRR_M_PtcPdlMinWhlTrqNoLv1Offset
            + rtb_TmpSignalConversionAtVeBPCR);
    }
    else
    {
        /* Switch: '<S181>/switch9' */
        VeDTRR_M_PtcPdlMinWhlTrqRaw = VeDTRR_M_PtcPdlMinWhlTrqNoLv1Offset;
    }

    /* End of Switch: '<S181>/switch9' */

    /* Outputs for Atomic SubSystem: '<S164>/EdgeFalling' */
    /* Logic: '<S401>/Logical1' incorporates:
     *  Logic: '<S168>/OR1'
     */
    rtb_RelationalOperator8 = !rtb_TmpSignalConversionAtVeCC_i;

    /* End of Outputs for SubSystem: '<S164>/EdgeFalling' */

    /* Logic: '<S359>/Logical6' incorporates:
     *  Constant: '<S404>/Constant'
     *  Constant: '<S405>/Constant'
     *  Constant: '<S406>/Constant'
     *  Logic: '<S359>/Logical8'
     *  Logic: '<S401>/Logical Operator4'
     *  Logic: '<S401>/Logical1'
     *  Logic: '<S401>/Logical7'
     *  RelationalOperator: '<S401>/Comparison4'
     *  RelationalOperator: '<S401>/Comparison6'
     *  RelationalOperator: '<S401>/Pedal not OK'
     */
    rtb_Logical6_fd = ((!VeDTRC_b_OPD_SelectionFinal) &&
                       ((((((((CeTRGR_e_TransRangePark != ((uint32)
        rtb_TmpSignalConversionAtVeTRGR)) && (((uint32)
        rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangeNeutral)) &&
        tmpRead_5) && (((uint32)rtb_TmpSignalConversionAtVeAP_j) ==
                       CeAPSR_e_LV1PVMode_PVOk)) && (!VeDTRI_b_OnePedalDriveDsbl))
                          && (!VeDTRI_b_VehSpdFA)) &&
                         (!VeDTRI_b_VehSpdVSOSigFailSts)) &&
                        rtb_RelationalOperator8));

    /* Logic: '<S403>/Logical1' incorporates:
     *  Constant: '<S408>/Constant'
     *  Constant: '<S409>/Constant'
     *  Logic: '<S403>/Logical Operator4'
     *  RelationalOperator: '<S403>/Comparison4'
     *  RelationalOperator: '<S403>/Comparison6'
     */
    rtb_AND_au = ((((rtb_RelationalOperator || rtb_TmpSignalConversionAtVeCC_i) ||
                    rtb_Logical2) || ((CeTRGR_e_TransRangePark == ((uint32)
                      rtb_TmpSignalConversionAtVeTRGR)) || (((uint32)
                      rtb_TmpSignalConversionAtVeTRGR) ==
                     CeTRGR_e_TransRangeNeutral))) || (VeDTRI_b_AeCoastReadyFA));

    /* Logic: '<S402>/Logical1' incorporates:
     *  Constant: '<S407>/Constant'
     *  RelationalOperator: '<S402>/Pedal not OK'
     */
    rtb_Switch2_kx = ((((VeDTRI_b_VehSpdFA) || (VeDTRI_b_VehSpdVSOSigFailSts)) ||
                       (((uint32)rtb_TmpSignalConversionAtVeAP_j) !=
                        CeAPSR_e_LV1PVMode_PVOk)) || (VeDTRI_b_OnePedalDriveDsbl));

    /* Switch: '<S359>/Switch' incorporates:
     *  Switch: '<S359>/Switch1'
     *  Switch: '<S359>/Switch2'
     *  Switch: '<S359>/Switch3'
     */
    if (rtb_Logical6_fd)
    {
        /* Switch: '<S359>/Switch' incorporates:
         *  Constant: '<S399>/Constant'
         */
        Switch = CeDTRR_e_Available;
    }
    else if (rtb_TmpSignalConversionAtVeDMIR)
    {
        /* Switch: '<S359>/Switch1' incorporates:
         *  Constant: '<S396>/Constant'
         *  Switch: '<S359>/Switch'
         */
        Switch = CeDTRR_e_Active;
    }
    else if (rtb_Switch2_kx)
    {
        /* Switch: '<S359>/Switch2' incorporates:
         *  Constant: '<S397>/Constant'
         *  Switch: '<S359>/Switch'
         *  Switch: '<S359>/Switch1'
         */
        Switch = CeDTRR_e_Faulted;
    }
    else if (rtb_AND_au)
    {
        /* Switch: '<S359>/Switch3' incorporates:
         *  Constant: '<S398>/Constant'
         *  Switch: '<S359>/Switch'
         *  Switch: '<S359>/Switch1'
         *  Switch: '<S359>/Switch2'
         */
        Switch = CeDTRR_e_Temp_Unavail;
    }
    else
    {
        /* Switch: '<S359>/Switch' incorporates:
         *  Constant: '<S400>/Constant'
         *  Switch: '<S359>/Switch1'
         *  Switch: '<S359>/Switch2'
         *  Switch: '<S359>/Switch3'
         */
        Switch = CeDTRR_e_Unknown;
    }

    /* End of Switch: '<S359>/Switch' */

    /* Switch: '<S359>/Switch4' incorporates:
     *  Constant: '<S392>/Constant'
     *  Constant: '<S393>/Constant'
     *  Constant: '<S394>/Constant'
     *  Constant: '<S395>/Constant'
     *  Logic: '<S359>/Logical Operator1'
     *  Logic: '<S359>/Logical Operator2'
     *  Logic: '<S359>/Logical Operator4'
     *  Logic: '<S359>/Logical1'
     *  Logic: '<S359>/Logical4'
     *  Logic: '<S359>/Logical5'
     *  Logic: '<S359>/Logical7'
     *  RelationalOperator: '<S359>/Comparison1'
     *  RelationalOperator: '<S359>/Comparison2'
     *  RelationalOperator: '<S359>/Comparison3'
     *  RelationalOperator: '<S359>/Comparison4'
     *  Switch: '<S359>/Switch5'
     *  Switch: '<S359>/Switch6'
     */
    if (rtb_Switch2_kx)
    {
        /* Switch: '<S359>/Switch4' incorporates:
         *  Constant: '<S389>/Constant'
         */
        Switch4 = CeDTRR_e_Unavailable;
    }
    else if ((rtb_Logical6_fd || rtb_TmpSignalConversionAtVeDMIR) || (rtb_AND_au
              && ((((uint32)rtb_TmpSignalConversionAtVeTRGR) ==
                   CeTRGR_e_TransRangeNeutral) || (((uint32)
                 rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark))))
    {
        /* Switch: '<S359>/Switch5' incorporates:
         *  Switch: '<S359>/Switch'
         *  Switch: '<S359>/Switch4'
         */
        Switch4 = Switch;
    }
    else if (rtb_AND_au && ((((uint32)rtb_TmpSignalConversionAtVeTRGR) !=
                             CeTRGR_e_TransRangeNeutral) && (((uint32)
                rtb_TmpSignalConversionAtVeTRGR) != CeTRGR_e_TransRangePark)))
    {
        /* Switch: '<S359>/Switch6' incorporates:
         *  Constant: '<S390>/Constant'
         *  Switch: '<S359>/Switch4'
         *  Switch: '<S359>/Switch5'
         */
        Switch4 = CeDTRR_e_OPDOff;
    }
    else
    {
        /* Switch: '<S359>/Switch4' incorporates:
         *  Constant: '<S391>/Constant'
         *  Switch: '<S359>/Switch5'
         *  Switch: '<S359>/Switch6'
         */
        Switch4 = CeDTRR_e_Unknown;
    }

    /* End of Switch: '<S359>/Switch4' */

    /* Switch: '<S440>/Switch3' */
    if (rtb_NotEqual_p)
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S440>/Unit Delay' incorporates:
         *  Switch: '<S440>/Switch3'
         */
        DTRR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch2_i;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }
    else
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S440>/Unit Delay' incorporates:
         *  Switch: '<S440>/Switch3'
         */
        DTRR_ac_DW.UnitDelay_DSTATE_m = VeDTRR_Pct_PdlPctMin;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }

    /* End of Switch: '<S440>/Switch3' */

    /* Switch: '<S439>/Switch3' */
    if (rtb_Gain_ki)
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S439>/Unit Delay' incorporates:
         *  Switch: '<S439>/Switch3'
         */
        DTRR_ac_DW.UnitDelay_DSTATE_j = VeDTRR_Pct_PdlPctFiltTrq;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }
    else
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S439>/Unit Delay' incorporates:
         *  Switch: '<S439>/Switch3'
         */
        DTRR_ac_DW.UnitDelay_DSTATE_j = VeDTRR_Pct_MaxPdlPctFrozen;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }

    /* End of Switch: '<S439>/Switch3' */

    /* Abs: '<S367>/Abs' */
    rtb_Switch2_i = fabsf(rtb_TmpSignalConversionAtVeCSVR);

    /* Outputs for Atomic SubSystem: '<S367>/Hysteresis' */
    /* Switch: '<S443>/Switch1' incorporates:
     *  Constant: '<S448>/Calib'
     *  RelationalOperator: '<S443>/Greater  Than'
     */
    if (rtb_Switch2_i > KeDTRR_v_VehSpdStndStillReqOPDRSP)
    {
        /* Switch: '<S443>/Switch1' incorporates:
         *  Constant: '<S443>/Constant Value'
         */
        rtb_Logical6_fd = true;
    }
    else
    {
        /* Switch: '<S443>/Switch1' incorporates:
         *  Constant: '<S447>/Calib'
         *  RelationalOperator: '<S443>/Greater  Than1'
         *  UnitDelay: '<S443>/Unit Delay'
         */
        rtb_Logical6_fd = ((rtb_Switch2_i >= KeDTRR_v_VehSpdStndStillReqOPDLSP) &&
                           (DTRR_ac_DW.UnitDelay_DSTATE_fb));
    }

    /* End of Switch: '<S443>/Switch1' */

    /* Update for UnitDelay: '<S443>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_fb = rtb_Logical6_fd;

    /* End of Outputs for SubSystem: '<S367>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S367>/Hysteresis1' */
    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S446>/Calib'
     *  RelationalOperator: '<S444>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeAPSR > KeDTRR_Pct_AccelPdlStndStillReqOPDRSP)
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Constant: '<S444>/Constant Value'
         */
        rtb_Gain_ki = true;
    }
    else
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Constant: '<S445>/Calib'
         *  RelationalOperator: '<S444>/Greater  Than1'
         *  UnitDelay: '<S444>/Unit Delay'
         */
        rtb_Gain_ki = ((rtb_TmpSignalConversionAtVeAPSR >=
                        KeDTRR_Pct_AccelPdlStndStillReqOPDLSP) &&
                       (DTRR_ac_DW.UnitDelay_DSTATE_a5));
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Update for UnitDelay: '<S444>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_a5 = rtb_Gain_ki;

    /* End of Outputs for SubSystem: '<S367>/Hysteresis1' */

    /* Logic: '<S367>/Logical1' incorporates:
     *  Constant: '<S442>/Constant'
     *  Logic: '<S367>/Logical3'
     *  Logic: '<S367>/Logical4'
     *  RelationalOperator: '<S367>/Equal'
     *  Switch: '<S359>/Switch'
     */
    VeDTRC_b_VehStndStillReqOPD = (((!rtb_Logical6_fd) && (!rtb_Gain_ki)) &&
        (((uint32)Switch) == CeDTRR_e_Active));

    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    for (i = 0; i < 2; i++)
    {
        /* UnitDelay: '<S164>/Unit Delay3' */
        rtb_UnitDelay3_c[i] = DTRR_ac_DW.UnitDelay3_DSTATE_b[i];
    }

    /* Outputs for Atomic SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */
    /* Outputs for Atomic SubSystem: '<S164>/Digital Lowpass Reset Enabled2' */
    /* Sum: '<S167>/Subtraction' incorporates:
     *  Sum: '<S166>/Subtraction'
     *  Switch: '<S164>/switch5'
     */
    rtb_Switch2_i = VeDTRR_M_PtcPdlMinWhlTrqRaw - rtb_UnitDelay3_c[0];

    /* End of Outputs for SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */

    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S175>/Calib'
     *  Product: '<S167>/Multiplication'
     *  Sum: '<S167>/Subtraction'
     *  Sum: '<S167>/Summation'
     */
    VaDTRC_M_PtcPdlMinWhlTrqFilt[0] = (rtb_Switch2_i *
        KeDTRR_K_PtcPdlWhlHevImpndSkidFc) + rtb_UnitDelay3_c[0];

    /* Outputs for Atomic SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */
    /* Sum: '<S167>/Subtraction' incorporates:
     *  Sum: '<S166>/Subtraction'
     *  Switch: '<S164>/switch5'
     */
    rtb_Vector_mt = VeDTRR_M_NormalMinTrq_PN_arb - rtb_UnitDelay3_c[1];

    /* End of Outputs for SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */

    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S175>/Calib'
     *  Product: '<S167>/Multiplication'
     *  Sum: '<S167>/Subtraction'
     *  Sum: '<S167>/Summation'
     */
    VaDTRC_M_PtcPdlMinWhlTrqFilt[1] = (rtb_Vector_mt *
        KeDTRR_K_PtcPdlWhlHevImpndSkidFc) + rtb_UnitDelay3_c[1];

    /* End of Outputs for SubSystem: '<S164>/Digital Lowpass Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising' */
    /* Logic: '<S169>/AND' incorporates:
     *  Logic: '<S169>/OR1'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtb_Logical6_fd = ((rtb_TmpSignalConversionAtGainIn[0]) &&
                       (!DTRR_ac_DW.UnitDelay_DSTATE_hi));

    /* Update for UnitDelay: '<S169>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_hi = rtb_TmpSignalConversionAtGainIn[0];

    /* End of Outputs for SubSystem: '<S164>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising1' */
    /* Logic: '<S170>/AND' incorporates:
     *  Logic: '<S170>/OR1'
     *  UnitDelay: '<S170>/Unit Delay'
     */
    rtb_Gain_ki = ((rtb_TmpSignalConversionAtGainIn[5]) &&
                   (!DTRR_ac_DW.UnitDelay_DSTATE_pe));

    /* Update for UnitDelay: '<S170>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_pe = rtb_TmpSignalConversionAtGainIn[5];

    /* End of Outputs for SubSystem: '<S164>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising2' */
    /* Logic: '<S171>/AND' incorporates:
     *  Logic: '<S171>/OR1'
     *  UnitDelay: '<S171>/Unit Delay'
     */
    rtb_LogicalOperator_ku = ((rtb_TmpSignalConversionAtGainIn[2]) &&
        (!DTRR_ac_DW.UnitDelay_DSTATE_iw));

    /* Update for UnitDelay: '<S171>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_iw = rtb_TmpSignalConversionAtGainIn[2];

    /* End of Outputs for SubSystem: '<S164>/EdgeRising2' */

    /* RelationalOperator: '<S164>/Comparison' incorporates:
     *  Constant: '<S164>/0'
     */
    VeDTRR_b_OPEN_PVS = (rtb_TmpSignalConversionAtVeA_ev > 0.0F);

    /* Outputs for Atomic SubSystem: '<S164>/EdgeFalling' */
    /* Logic: '<S168>/AND' incorporates:
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_NotEqual_p = (rtb_RelationalOperator8 && (DTRR_ac_DW.UnitDelay_DSTATE_he));

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_he = rtb_TmpSignalConversionAtVeCC_i;

    /* End of Outputs for SubSystem: '<S164>/EdgeFalling' */

    /* Switch: '<S164>/switch5' incorporates:
     *  Constant: '<S172>/Constant'
     *  Constant: '<S173>/Constant'
     *  Logic: '<S164>/Logical Operator4'
     *  RelationalOperator: '<S164>/Comparison1'
     *  RelationalOperator: '<S164>/Comparison2'
     *  Switch: '<S164>/switch4'
     */
    if ((CeTRGR_e_TransRangePark == ((uint32)rtb_TmpSignalConversionAtVeTRGR)) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeNeutral))
    {
        /* Switch: '<S164>/switch5' */
        for (i = 0; i < 2; i++)
        {
            switch5[i] = 0.0F;
        }
    }
    else
    {
        if (VeDTRR_b_OPEN_PVS)
        {
            /* Switch: '<S164>/switch4' incorporates:
             *  Constant: '<S174>/Calib'
             */
            rtb_switch8 = KeDTRR_K_PdlWhlTrqReqFcOp;
        }
        else
        {
            /* Switch: '<S164>/switch4' incorporates:
             *  Constant: '<S176>/Calib'
             */
            rtb_switch8 = KeDTRR_K_PtcPdlWhlTrqReqFcCp;
        }

        /* Logic: '<S164>/Logical Operator10' incorporates:
         *  Logic: '<S164>/Logical Operator11'
         *  Logic: '<S164>/Logical Operator8'
         */
        rtb_RelationalOperator8 = (((!rtb_Logical6_fd) && (!rtb_Gain_ki)) &&
            (!rtb_LogicalOperator_ku));

        /* Logic: '<S164>/Logical Operator6' incorporates:
         *  Logic: '<S164>/Logical Operator7'
         */
        rtb_Gain_ki = !rtb_UnitDelay3_d;

        /* Logic: '<S164>/Logical Operator5' */
        rtb_NotEqual_p = !rtb_NotEqual_p;

        /* Logic: '<S164>/Logical Operator2' */
        rtb_LogicalOperator_ku = !rtb_TmpSignalConversionAtVeBR_k;

        /* Switch: '<S164>/switch2' incorporates:
         *  Logic: '<S164>/Logical Operator1'
         *  Logic: '<S164>/Logical Operator10'
         *  Logic: '<S164>/Logical Operator3'
         *  Logic: '<S164>/Logical Operator6'
         *  RelationalOperator: '<S164>/Relational Operator'
         *  RelationalOperator: '<S164>/Relational Operator1'
         *  RelationalOperator: '<S164>/Relational Operator2'
         *  Switch: '<S164>/switch3'
         *  UnitDelay: '<S164>/Unit Delay1'
         */
        if (((((VeDTRR_M_PtcPdlMinWhlTrqRaw < rtb_UnitDelay3_c[0]) &&
                (VeDTRR_M_PtcPdlMinWhlTrqRaw < 0.0F)) && rtb_Gain_ki) &&
                (DTRR_ac_DW.UnitDelay1_DSTATE_eb)) && rtb_RelationalOperator8)
        {
            /* Switch: '<S164>/switch5' */
            switch5[0] = VaDTRC_M_PtcPdlMinWhlTrqFilt[0];
        }
        else if ((((rtb_LogicalOperator_ku && (VeDTRR_M_PtcPdlMinWhlTrqRaw >
                     rtb_UnitDelay3_c[0])) && rtb_NotEqual_p) && rtb_Gain_ki) &&
                 rtb_RelationalOperator8)
        {
            /* Outputs for Atomic SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */
            /* Switch: '<S164>/switch3' incorporates:
             *  Product: '<S166>/Multiplication'
             *  Sum: '<S166>/Summation'
             *  Switch: '<S164>/switch5'
             */
            switch5[0] = (rtb_Switch2_i * rtb_switch8) + rtb_UnitDelay3_c[0];

            /* End of Outputs for SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */
        }
        else
        {
            /* Switch: '<S164>/switch5' incorporates:
             *  Switch: '<S164>/switch3'
             */
            switch5[0] = VeDTRR_M_PtcPdlMinWhlTrqRaw;
        }

        if (((((VeDTRR_M_NormalMinTrq_PN_arb < rtb_UnitDelay3_c[1]) &&
                (VeDTRR_M_NormalMinTrq_PN_arb < 0.0F)) && rtb_Gain_ki) &&
                (DTRR_ac_DW.UnitDelay1_DSTATE_eb)) && rtb_RelationalOperator8)
        {
            /* Switch: '<S164>/switch5' */
            switch5[1] = VaDTRC_M_PtcPdlMinWhlTrqFilt[1];
        }
        else if ((((rtb_LogicalOperator_ku && (VeDTRR_M_NormalMinTrq_PN_arb >
                     rtb_UnitDelay3_c[1])) && rtb_NotEqual_p) && rtb_Gain_ki) &&
                 rtb_RelationalOperator8)
        {
            /* Outputs for Atomic SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */
            /* Switch: '<S164>/switch3' incorporates:
             *  Product: '<S166>/Multiplication'
             *  Sum: '<S166>/Summation'
             *  Switch: '<S164>/switch5'
             */
            switch5[1] = (rtb_Vector_mt * rtb_switch8) + rtb_UnitDelay3_c[1];

            /* End of Outputs for SubSystem: '<S164>/Digital Lowpass Reset Enabled1' */
        }
        else
        {
            /* Switch: '<S164>/switch5' incorporates:
             *  Switch: '<S164>/switch3'
             */
            switch5[1] = VeDTRR_M_NormalMinTrq_PN_arb;
        }

        /* End of Switch: '<S164>/switch2' */
    }

    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Switch: '<S165>/Switch' incorporates:
     *  Constant: '<S165>/Constant'
     *  Constant: '<S184>/Calib'
     *  MinMax: '<S188>/Min'
     */
    if (KeDTRR_b_CstCtrllr_Enbl)
    {
        rtb_TmpSignalConversionAtVeBPCR = fmaxf(rtb_TmpSignalConversionAtVeBRKR,
            DTRR_ac_B.Merge1_c[2]);
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR = 0.0F;
    }

    /* End of Switch: '<S165>/Switch' */
    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */

    /* Sum: '<S164>/Sum1' */
    VeDTRR_M_PtcPdlMinWhlTrq = (switch5[0] - VeDTRR_M_AeCoastMinTrqOfst) +
        rtb_TmpSignalConversionAtVeBPCR;

    /* Product: '<S164>/Max wheel power for this vehicle speed' */
    VeDTRR_P_PtcPdlMinPwr_Out = VeDTRR_P_PtcPdlMaxPwr_Out_tmp *
        VeDTRR_M_PtcPdlMinWhlTrq;

    /* Switch: '<S164>/switch1' incorporates:
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  Logic: '<S164>/Logical Operator13'
     */
    if (((VeDTRI_b_MinCreepWheelTrq_Enable) && (KeDTRR_b_Creep_Apprch)) &&
            (KeDTRR_b_PMBD_EVCU2_Conf))
    {
        /* Switch: '<S164>/switch1' incorporates:
         *  MinMax: '<S164>/Clip I1'
         *  Sum: '<S164>/xx3'
         */
        VeDTRR_M_CreepOfst = fmaxf(VeDTRI_M_WheelMin4ECM,
            VeDTRR_M_PtcPdlMinWhlTrq) - VeDTRR_M_PtcPdlMinWhlTrq;
    }
    else
    {
        /* Switch: '<S164>/switch1' incorporates:
         *  Constant: '<S164>/1 2'
         */
        VeDTRR_M_CreepOfst = 0.0F;
    }

    /* End of Switch: '<S164>/switch1' */

    /* Switch: '<S164>/switch7' incorporates:
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  Logic: '<S164>/Logical Operator12'
     *  Logic: '<S164>/Logical Operator9'
     */
    if (((VeDTRI_b_MinCreepWheelTrq_Enable) && (!KeDTRR_b_Creep_Apprch)) &&
            (KeDTRR_b_PMBD_EVCU2_Conf))
    {
        /* Switch: '<S164>/switch7' incorporates:
         *  MinMax: '<S164>/Clip I2'
         */
        rtb_UnitDelay3_c[0] = fmaxf(VeDTRI_M_WheelMin4ECM,
            VeDTRR_M_NormalMinTrq_Out);
        rtb_UnitDelay3_c[1] = fmaxf(VeDTRI_M_WheelMin4ECM,
            VeDTRR_M_PtcPdlMinWhlTrq);
    }
    else
    {
        /* Switch: '<S164>/switch7' */
        rtb_UnitDelay3_c[0] = VeDTRR_M_NormalMinTrq_Out;
        rtb_UnitDelay3_c[1] = VeDTRR_M_PtcPdlMinWhlTrq;
    }

    /* End of Switch: '<S164>/switch7' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */

    /* Outputs for Atomic SubSystem: '<S9>/Drvr_Trq_Req' */
    /* Switch: '<S130>/switch7' incorporates:
     *  Constant: '<S142>/Calib'
     */
    if (KeDTRR_b_BiasPoint_TC_Enbl)
    {
        /* Switch: '<S130>/switch6' incorporates:
         *  Constant: '<S140>/Constant'
         *  RelationalOperator: '<S130>/Comparison4'
         *  SignalConversion generated from: '<S1>/VeFWDR_e_Tcase_Stat'
         */
        if (((uint32)rtb_TmpSignalConversionAtVeFWDR) == CeFWDR_e_TfrCas4Low)
        {
            /* Switch: '<S130>/switch7' incorporates:
             *  Lookup_n-D: '<S145>/Vector'
             *  Switch: '<S130>/switch6'
             *  Switch: '<S699>/Switch1'
             */
            VeDTRR_M_PdlTrqBias = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
                ((const float32 *)&(KxDTRR_M_PdlTrqBias_4Lo[0])), ((const
                float32 *)&(KtDTRR_M_PdlTrqBias_4Lo[0])), 8U);
        }
        else
        {
            /* Switch: '<S130>/switch7' incorporates:
             *  Lookup_n-D: '<S144>/Vector'
             *  Switch: '<S130>/switch6'
             *  Switch: '<S699>/Switch1'
             */
            VeDTRR_M_PdlTrqBias = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
                ((const float32 *)&(KxDTRR_M_PdlTrqBias[0])), ((const float32 *)
                &(KtDTRR_M_PdlTrqBias[0])), 8U);
        }

        /* End of Switch: '<S130>/switch6' */
    }
    else
    {
        for (i = 0; i < 14; i++)
        {
            /* DataTypeConversion: '<S137>/Data Type Conversion' */
            rtb_DataTypeConversion[i] = (sint8)
                (rtb_TmpSignalConversionAtGainIn[i] ? 1 : 0);
        }

        /* MultiPortSwitch: '<S130>/Multiport Switch' incorporates:
         *  Constant: '<S141>/Calib'
         *  Product: '<S137>/Product'
         *  Product: '<S137>/Product1'
         *  Product: '<S137>/Product10'
         *  Product: '<S137>/Product11'
         *  Product: '<S137>/Product12'
         *  Product: '<S137>/Product13'
         *  Product: '<S137>/Product2'
         *  Product: '<S137>/Product3'
         *  Product: '<S137>/Product4'
         *  Product: '<S137>/Product5'
         *  Product: '<S137>/Product6'
         *  Product: '<S137>/Product7'
         *  Product: '<S137>/Product8'
         *  Product: '<S137>/Product9'
         *  Sum: '<S137>/Sum1'
         */
        switch ((sint32)((uint32)(((((((((((((uint32)((uint16)(((((uint32)
            ((uint8)rtb_DataTypeConversion[0])) * ((uint32)
            KaDTRR_i_PropMd_To_BiasMap[0])) + (((uint32)((uint8)
            rtb_DataTypeConversion[1])) * ((uint32)KaDTRR_i_PropMd_To_BiasMap[1])))
                               + (((uint32)((uint8)rtb_DataTypeConversion[2])) *
                                ((uint32)KaDTRR_i_PropMd_To_BiasMap[2]))))) +
                            ((uint32)((uint16)(((uint32)((uint8)
            rtb_DataTypeConversion[3])) * ((uint32)KaDTRR_i_PropMd_To_BiasMap[3])))))
                           + (((uint32)((uint8)rtb_DataTypeConversion[4])) *
                              ((uint32)KaDTRR_i_PropMd_To_BiasMap[4]))) +
                          (((uint32)((uint8)rtb_DataTypeConversion[5])) *
                           ((uint32)KaDTRR_i_PropMd_To_BiasMap[5]))) + (((uint32)
                           ((uint8)rtb_DataTypeConversion[6])) * ((uint32)
                           KaDTRR_i_PropMd_To_BiasMap[6]))) + (((uint32)((uint8)
                           rtb_DataTypeConversion[7])) * ((uint32)
                          KaDTRR_i_PropMd_To_BiasMap[7]))) + (((uint32)((uint8)
                          rtb_DataTypeConversion[8])) * ((uint32)
                         KaDTRR_i_PropMd_To_BiasMap[8]))) + (((uint32)((uint8)
                         rtb_DataTypeConversion[9])) * ((uint32)
                        KaDTRR_i_PropMd_To_BiasMap[9]))) + (((uint32)((uint8)
                        rtb_DataTypeConversion[10])) * ((uint32)
                       KaDTRR_i_PropMd_To_BiasMap[10]))) + (((uint32)((uint8)
                       rtb_DataTypeConversion[11])) * ((uint32)
                      KaDTRR_i_PropMd_To_BiasMap[11]))) + (((uint32)((uint8)
                      rtb_DataTypeConversion[12])) * ((uint32)
                     KaDTRR_i_PropMd_To_BiasMap[12]))) + (((uint32)((uint8)
                     rtb_DataTypeConversion[13])) * ((uint32)
                    KaDTRR_i_PropMd_To_BiasMap[13])))))
        {
          case 1:
            /* Switch: '<S130>/switch7' incorporates:
             *  Lookup_n-D: '<S146>/Vector'
             *  MultiPortSwitch: '<S130>/Multiport Switch'
             *  Switch: '<S699>/Switch1'
             */
            VeDTRR_M_PdlTrqBias = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
                ((const float32 *)&(KxDTRR_M_PdlTrqBias_High[0])), ((const
                float32 *)&(KtDTRR_M_PdlTrqBias_High[0])), 8U);
            break;

          case 2:
            /* Switch: '<S130>/switch7' incorporates:
             *  Lookup_n-D: '<S147>/Vector'
             *  MultiPortSwitch: '<S130>/Multiport Switch'
             *  Switch: '<S699>/Switch1'
             */
            VeDTRR_M_PdlTrqBias = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
                ((const float32 *)&(KxDTRR_M_PdlTrqBias_Low[0])), ((const
                float32 *)&(KtDTRR_M_PdlTrqBias_Low[0])), 8U);
            break;

          default:
            /* Switch: '<S130>/switch7' incorporates:
             *  Lookup_n-D: '<S148>/Vector'
             *  MultiPortSwitch: '<S130>/Multiport Switch'
             *  Switch: '<S699>/Switch1'
             */
            VeDTRR_M_PdlTrqBias = look1_iflf_binlcapw(VeDTRR_v_PtcPdlWhlTrqKPH,
                ((const float32 *)&(KxDTRR_M_PdlTrqBias_Std[0])), ((const
                float32 *)&(KtDTRR_M_PdlTrqBias_Std[0])), 8U);
            break;
        }

        /* End of MultiPortSwitch: '<S130>/Multiport Switch' */
    }

    /* End of Switch: '<S130>/switch7' */
    /* End of Outputs for SubSystem: '<S9>/Drvr_Trq_Req' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTMIR_b_RaceDeadPedal' */
    (void)Rte_Read_VeTMIR_b_RaceDeadPedal_Value(&VeDTRR_b_ACC_OK);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Drvr_Trq_Req' */
    /* Sum: '<S130>/Sum4' */
    VeDTRR_M_MinPdlTrqBiased = rtb_UnitDelay3_c[1] - VeDTRR_M_PdlTrqBias;

    /* Switch: '<S130>/switch3' incorporates:
     *  Constant: '<S143>/Calib'
     */
    if (KeDTRR_b_TrqBias_Enable)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = rtb_UnitDelay3_c[0];
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = rtb_UnitDelay3_c[1];
    }

    /* End of Switch: '<S130>/switch3' */

    /* Sum: '<S130>/Sum3' */
    VeDTRR_M_MinPdlTrqNomBiased = rtb_Switch2_i - VeDTRR_M_PdlTrqBias;

    /* Sum: '<S130>/Sum2' */
    VeDTRR_M_PdlMinMaxDeltaTrq = VeDTRC_M_PtcPdlMaxWhlTrq - rtb_Switch2_i;

    /* Switch: '<S130>/switch4' incorporates:
     *  Constant: '<S130>/1 2'
     */
    if (VeDTRR_b_ACC_OK)
    {
        VeDTRR_P_PtcPdlMaxPwr_Out_tmp = 0.0F;
    }
    else
    {
        VeDTRR_P_PtcPdlMaxPwr_Out_tmp = rtb_Switch_km;
    }

    /* End of Switch: '<S130>/switch4' */

    /* Sum: '<S130>/xx1' incorporates:
     *  Product: '<S130>/Product1'
     */
    VeDTRR_M_PtcPdlWhlTrqReqNom = (VeDTRR_M_PdlMinMaxDeltaTrq *
        VeDTRR_P_PtcPdlMaxPwr_Out_tmp) + rtb_Switch2_i;

    /* Sum: '<S130>/Sum1' */
    VeDTRR_M_PdlTrqReqBiased = VeDTRR_M_PtcPdlWhlTrqReqNom - VeDTRR_M_PdlTrqBias;

    /* Switch: '<S130>/switch2' incorporates:
     *  Constant: '<S130>/1 1'
     *  RelationalOperator: '<S130>/Comparison3'
     */
    if (VeDTRR_M_PdlTrqReqBiased < 0.0F)
    {
        /* Outputs for Atomic SubSystem: '<S130>/Protected Division' */
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value'
         *  Constant: '<S149>/Constant Value1'
         *  Constant: '<S149>/Constant Value2'
         *  Constant: '<S149>/Constant Value3'
         *  Logic: '<S149>/AND'
         *  RelationalOperator: '<S149>/Greater Than or Equal '
         *  RelationalOperator: '<S149>/Greater Than or Equal 1'
         *  RelationalOperator: '<S149>/Not Equal'
         *  RelationalOperator: '<S149>/Not Equal1'
         *  Switch: '<S149>/Switch2'
         *  Switch: '<S149>/Switch3'
         */
        if ((VeDTRR_M_MinPdlTrqBiased != 0.0F) && (VeDTRR_M_MinPdlTrqNomBiased
                != 0.0F))
        {
            /* Switch: '<S149>/Switch1' incorporates:
             *  Product: '<S149>/Division'
             */
            rtb_Switch2_i = VeDTRR_M_MinPdlTrqBiased /
                VeDTRR_M_MinPdlTrqNomBiased;
        }
        else if (VeDTRR_M_MinPdlTrqBiased > 0.0F)
        {
            /* Switch: '<S149>/Switch2' incorporates:
             *  Constant: '<S149>/MAXFLOAT'
             *  Switch: '<S149>/Switch1'
             */
            rtb_Switch2_i = 3.402823466E+38F;
        }
        else if (VeDTRR_M_MinPdlTrqBiased < 0.0F)
        {
            /* Switch: '<S149>/Switch3' incorporates:
             *  Constant: '<S149>/MINFLOAT'
             *  Switch: '<S149>/Switch1'
             *  Switch: '<S149>/Switch2'
             */
            rtb_Switch2_i = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S149>/Switch1' incorporates:
             *  Constant: '<S149>/Constant Value4'
             *  Switch: '<S149>/Switch2'
             *  Switch: '<S149>/Switch3'
             */
            rtb_Switch2_i = 0.0F;
        }

        /* End of Switch: '<S149>/Switch1' */
        /* End of Outputs for SubSystem: '<S130>/Protected Division' */

        /* Switch: '<S130>/switch2' incorporates:
         *  Product: '<S130>/Product2'
         *  Sum: '<S130>/xx2'
         */
        VeDTRR_M_PdlTrqReq = (rtb_Switch2_i * VeDTRR_M_PdlTrqReqBiased) +
            VeDTRR_M_PdlTrqBias;
    }
    else
    {
        /* Switch: '<S130>/switch2' */
        VeDTRR_M_PdlTrqReq = VeDTRR_M_PtcPdlWhlTrqReqNom;
    }

    /* End of Switch: '<S130>/switch2' */
    /* End of Outputs for SubSystem: '<S9>/Drvr_Trq_Req' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSRAR_b_InhibitCruise' */
    (void)Rte_Read_VeSRAR_b_InhibitCruise_Value(&rtb_NotEqual_ff);

    /* Inport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSMFA' */
    (void)Rte_Read_VeCCTR_b_ACCTrqEnabled_BSMFA_Value(&Equal2);

    /* Inport: '<Root>/VeCCTR_b_ACCTrq_BSMFA' */
    (void)Rte_Read_VeCCTR_b_ACCTrq_BSMFA_Value(&Equal3);

    /* Inport: '<Root>/VeCCTR_M_ACCTrq_BSM' */
    (void)Rte_Read_VeCCTR_M_ACCTrq_BSM_Value(&rtb_Switch_h2);

    /* Inport: '<Root>/VeCCTR_b_ACCTrqEnabled_BSM' */
    (void)Rte_Read_VeCCTR_b_ACCTrqEnabled_BSM_Value(&tmpRead_1);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Drvr_Trq_Req' */
    /* Switch: '<S130>/switch1' incorporates:
     *  Constant: '<S143>/Calib'
     */
    if (KeDTRR_b_TrqBias_Enable)
    {
        rtb_TmpSignalConversionAtVeBPCR = VeDTRR_M_PdlTrqReq;
    }
    else
    {
        rtb_TmpSignalConversionAtVeBPCR = VeDTRR_M_PtcPdlWhlTrqReqNom;
    }

    /* End of Switch: '<S130>/switch1' */

    /* Sum: '<S130>/xx4' */
    VeDTRR_M_PtcPdlWhlTrqReqRaw = VeDTRR_M_CreepOfst +
        rtb_TmpSignalConversionAtVeBPCR;

    /* Switch: '<S130>/switch5' incorporates:
     *  Constant: '<S138>/Constant'
     *  Constant: '<S139>/Constant'
     *  Logic: '<S130>/Logical Operator1'
     *  RelationalOperator: '<S130>/Comparison1'
     *  RelationalOperator: '<S130>/Comparison2'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangePark) ||
        (((uint32)rtb_TmpSignalConversionAtVeTRGR) == CeTRGR_e_TransRangeNeutral))
    {
        /* Switch: '<S130>/switch5' incorporates:
         *  Constant: '<S130>/1 3'
         */
        VeDTRR_M_PtcPdlWhlTrqReq = 0.0F;
    }
    else
    {
        /* Switch: '<S130>/switch5' */
        VeDTRR_M_PtcPdlWhlTrqReq = VeDTRR_M_PtcPdlWhlTrqReqRaw;
    }

    /* End of Switch: '<S130>/switch5' */

    /* Product: '<S130>/Max wheel power for this vehicle speed' incorporates:
     *  Constant: '<S700>/Calib'
     *  MinMax: '<S130>/Clip I3'
     */
    VeDTRR_P_PtcPdlPwrReq_Out = (fmaxf(switch5[1], VeDTRR_M_PtcPdlWhlTrqReq) *
        VeDTRR_v_PtcPdlWhlTrqKPH) * KeDTRR_K_PtcWhlTrqToPwrFctr;

    /* End of Outputs for SubSystem: '<S9>/Drvr_Trq_Req' */

    /* Gain: '<S134>/Gain' */
    VeDTRR_M_FullPedalAxlTorqFiltd = VeDTRC_M_PtcPdlMaxWhlTrq;

    /* Gain: '<S135>/Gain' */
    VeDTRR_M_ZeroPedalAxlTorqFiltd = rtb_UnitDelay3_c[1];

    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */

    /* Switch: '<S7>/Switch13' incorporates:
     *  Constant: '<S54>/Calib'
     */
    if (KeDTRR_b_ACCTrq_BSMOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch13' incorporates:
         *  Constant: '<S46>/Calib'
         */
        VeDTRI_M_ACCTrq_BSM = KeDTRR_M_ACCTrq_BSM_OvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch13' */
        VeDTRI_M_ACCTrq_BSM = rtb_Switch_h2;
    }

    /* End of Switch: '<S7>/Switch13' */

    /* Switch: '<S7>/Switch12' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KeDTRR_b_ACCTrqEnabled_BSMOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch12' incorporates:
         *  Constant: '<S51>/Calib'
         */
        VeDTRI_b_ACCTrqEnabled_BSM = KeDTRR_b_ACCTrqEnabled_BSM_OvrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch12' */
        VeDTRI_b_ACCTrqEnabled_BSM = tmpRead_1;
    }

    /* End of Switch: '<S7>/Switch12' */

    /* Logic: '<S12>/Logical5' incorporates:
     *  Constant: '<S29>/Calib'
     *  RelationalOperator: '<S12>/Comparison4'
     */
    VeDTRR_b_ACCTrqEnabled_BSM_Arb = ((VeDTRI_M_ACCTrq_BSM >
        KeDTRR_M_ACCMinTrqThresh) && (VeDTRI_b_ACCTrqEnabled_BSM));

    /* Switch: '<S7>/Switch6' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeDTRR_b_ACCTrq_BSMFAOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch6' incorporates:
         *  Constant: '<S52>/Calib'
         */
        VeDTRI_b_ACCTrq_BSMFA = KeDTRR_b_ACCTrq_BSMFA;
    }
    else
    {
        /* Switch: '<S7>/Switch6' */
        VeDTRI_b_ACCTrq_BSMFA = Equal2;
    }

    /* End of Switch: '<S7>/Switch6' */

    /* Switch: '<S7>/Switch7' incorporates:
     *  Constant: '<S49>/Calib'
     */
    if (KeDTRR_b_ACCTrqEnabled_BSMFAOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch7' incorporates:
         *  Constant: '<S48>/Calib'
         */
        VeDTRI_b_ACCTrqEnabled_BSMFA = KeDTRR_b_ACCTrqEnabled_BSMFA;
    }
    else
    {
        /* Switch: '<S7>/Switch7' */
        VeDTRI_b_ACCTrqEnabled_BSMFA = Equal3;
    }

    /* End of Switch: '<S7>/Switch7' */

    /* Switch: '<S7>/Switch8' incorporates:
     *  Constant: '<S64>/Calib'
     */
    if (KeDTRR_b_InhibitCruiseOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch8' incorporates:
         *  Constant: '<S63>/Calib'
         */
        VeDTRI_b_InhibitCruise = KeDTRR_b_InhibitCruise;
    }
    else
    {
        /* Switch: '<S7>/Switch8' */
        VeDTRI_b_InhibitCruise = rtb_NotEqual_ff;
    }

    /* End of Switch: '<S7>/Switch8' */

    /* Outputs for Atomic SubSystem: '<S11>/Stop Watch Reset Enabled' */
    /* Switch: '<S20>/Switch2' incorporates:
     *  Constant: '<S15>/Constant'
     *  Logic: '<S11>/Logical3'
     *  RelationalOperator: '<S11>/Pedal not OK1'
     *  RelationalOperator: '<S12>/Comparison5'
     *  Switch: '<S20>/Switch'
     *  Switch: '<S7>/Switch4'
     */
    if (((uint32)VeDTRI_e_ACCSystemSts) != CePLTR_e_ACCSystemSts_SNA)
    {
        /* Switch: '<S20>/Switch' incorporates:
         *  Constant: '<S20>/Constant Value2'
         */
        rtb_Switch_h2 = 0.0F;
    }
    else
    {
        /* Switch: '<S20>/Switch' incorporates:
         *  Constant: '<S18>/Calib'
         *  Sum: '<S20>/Subtraction'
         *  Switch: '<S20>/Switch2'
         *  UnitDelay: '<S20>/Unit Delay'
         */
        rtb_Switch_h2 = KeDTRR_t_6p25dt + DTRR_ac_DW.UnitDelay_DSTATE_eh;
    }

    /* End of Switch: '<S20>/Switch2' */

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_eh = rtb_Switch_h2;

    /* End of Outputs for SubSystem: '<S11>/Stop Watch Reset Enabled' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeGRAR_b_DisableACC' */
    (void)Rte_Read_VeGRAR_b_DisableACC_Value(&tmpRead_j);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S11>/FALSE Constant1'
     *  Constant: '<S17>/Calib'
     *  Constant: '<S19>/Calib'
     *  RelationalOperator: '<S11>/Comparison4'
     */
    if (HeDTRR_b_ACCSysStsSNAFaultEna)
    {
        tmp = (rtb_Switch_h2 >= KeDTRR_t_ACCSysStsSNATime);
    }
    else
    {
        tmp = false;
    }

    /* End of Switch: '<S11>/Switch2' */

    /* Logic: '<S11>/Logical1' incorporates:
     *  Constant: '<S16>/Constant'
     *  RelationalOperator: '<S11>/Pedal not OK'
     *  UnitDelay: '<S5>/Unit Delay'
     */
    VeDTRR_b_ACC_Disabled = (((((((VeDTRI_b_ACCTrq_BSMFA) ||
        (VeDTRI_b_ACCTrqEnabled_BSMFA)) || (VeDTRI_b_InhibitCruise)) ||
        (((uint32)rtb_TmpSignalConversionAtVeAP_j) != CeAPSR_e_LV1PVMode_PVOk)) ||
        (DTRR_ac_DW.UnitDelay_DSTATE_ff)) || tmp) || tmpRead_j);

    /* Logic: '<S11>/Logical2' incorporates:
     *  Logic: '<S39>/Logical4'
     */
    rtb_AND_au = !VeDTRR_b_ACC_Disabled;

    /* Outputs for Atomic SubSystem: '<S39>/EdgeBi' */
    /* RelationalOperator: '<S40>/Not Equal' incorporates:
     *  UnitDelay: '<S40>/Unit Delay'
     */
    rtb_NotEqual_ff = (VeDTRR_b_ACC_Disabled != DTRR_ac_DW.UnitDelay_DSTATE_py);

    /* Update for UnitDelay: '<S40>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_py = VeDTRR_b_ACC_Disabled;

    /* End of Outputs for SubSystem: '<S39>/EdgeBi' */

    /* Switch: '<S14>/Switch' */
    if (VeDTRR_b_ACC_Disabled)
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S14>/Constant Value'
         *  Constant: '<S36>/Calib'
         *  MinMax: '<S14>/MinMax1'
         *  MinMax: '<S14>/MinMax2'
         *  Sum: '<S14>/Sum1'
         *  UnitDelay: '<S14>/Unit Delay'
         */
        VeDTRR_M_ACCWhlTrqRamped = fmaxf(DTRR_ac_DW.UnitDelay_DSTATE - fmaxf
            (KeDTRR_M_ACCTrqRampDec, 0.0F), rtb_UnitDelay3_c[1]);
    }
    else
    {
        /* Switch: '<S14>/Switch' incorporates:
         *  Constant: '<S37>/Calib'
         *  Sum: '<S14>/Sum'
         *  UnitDelay: '<S14>/Unit Delay'
         */
        VeDTRR_M_ACCWhlTrqRamped = DTRR_ac_DW.UnitDelay_DSTATE +
            KeDTRR_M_ACCTrqRampInc;
    }

    /* End of Switch: '<S14>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeWTAR_b_ASL_Active' */
    (void)Rte_Read_VeWTAR_b_ASL_Active_Value(&Equal);

    /* Inport: '<Root>/VePMDR_b_RunCrankActiveAnalog' */
    (void)Rte_Read_VePMDR_b_RunCrankActiveAnalog_Value
        (&rtb_VeDTRR_b_ACCTrqEnabled);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Switch: '<S7>/Switch9' incorporates:
     *  Constant: '<S72>/Calib'
     */
    if (KeDTRR_b_RunCrankActiveAnalogOvrrdEnbl)
    {
        /* Switch: '<S7>/Switch9' incorporates:
         *  Constant: '<S71>/Calib'
         */
        VeDTRI_b_RunCrankActiveAnalog = KeDTRR_b_RunCrankActiveAnalog;
    }
    else
    {
        /* Switch: '<S7>/Switch9' */
        VeDTRI_b_RunCrankActiveAnalog = rtb_VeDTRR_b_ACCTrqEnabled;
    }

    /* End of Switch: '<S7>/Switch9' */

    /* Logic: '<S14>/Logical5' incorporates:
     *  Logic: '<S14>/Logical2'
     *  Logic: '<S14>/Logical7'
     */
    VeDTRR_b_ACCWhlTrqClpd = (((!VeDTRI_b_RunCrankActiveAnalog) ||
        (VeDTRR_b_ACC_Disabled)) || (!VeDTRR_b_ACCTrqEnabled_BSM_Arb));

    /* Switch: '<S14>/Switch1' */
    if (VeDTRR_b_ACCWhlTrqClpd)
    {
        /* Switch: '<S14>/Switch1' */
        VeDTRR_M_ACCWhlTrqClpd_in = rtb_UnitDelay3_c[1];
    }
    else
    {
        /* Switch: '<S14>/Switch1' */
        VeDTRR_M_ACCWhlTrqClpd_in = VeDTRI_M_ACCTrq_BSM;
    }

    /* End of Switch: '<S14>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S14>/Limiter' */
    /* Switch: '<S38>/Switch1' incorporates:
     *  RelationalOperator: '<S38>/Relational Operator'
     */
    if (VeDTRC_M_PtcPdlMaxWhlTrq < VeDTRR_M_ACCWhlTrqClpd_in)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRC_M_PtcPdlMaxWhlTrq;
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_ACCWhlTrqClpd_in;
    }

    /* End of Switch: '<S38>/Switch1' */

    /* Switch: '<S38>/Switch' incorporates:
     *  RelationalOperator: '<S38>/Relational Operator1'
     */
    if (rtb_Switch2_i > rtb_UnitDelay3_c[1])
    {
        /* Switch: '<S38>/Switch' */
        VeDTRR_M_ACCWhlTrqClpd = rtb_Switch2_i;
    }
    else
    {
        /* Switch: '<S38>/Switch' */
        VeDTRR_M_ACCWhlTrqClpd = rtb_UnitDelay3_c[1];
    }

    /* End of Switch: '<S38>/Switch' */
    /* End of Outputs for SubSystem: '<S14>/Limiter' */

    /* Logic: '<S39>/Logical3' incorporates:
     *  RelationalOperator: '<S39>/Comparison4'
     */
    VeDTRR_b_ACCRampSetCondA = ((VeDTRR_M_ACCWhlTrqRamped >=
        VeDTRR_M_ACCWhlTrqClpd) && rtb_AND_au);

    /* Logic: '<S39>/Logical7' incorporates:
     *  RelationalOperator: '<S39>/Comparison1'
     */
    VeDTRR_b_ACCRampSetCondB = ((VeDTRR_b_ACC_Disabled) &&
        (VeDTRR_M_ACCWhlTrqClpd >= VeDTRR_M_ACCWhlTrqRamped));

    /* Outputs for Atomic SubSystem: '<S39>/Signal Latch On With Reset' */
    /* Logic: '<S41>/OR1' incorporates:
     *  Logic: '<S39>/Logical6'
     *  Logic: '<S41>/NOT'
     *  Logic: '<S41>/OR'
     *  UnitDelay: '<S41>/Unit Delay'
     */
    rtb_NotEqual_ff = (rtb_NotEqual_ff || (((!VeDTRR_b_ACCRampSetCondA) &&
                         (!VeDTRR_b_ACCRampSetCondB)) &&
                        (DTRR_ac_DW.UnitDelay_DSTATE_n3)));

    /* Update for UnitDelay: '<S41>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_n3 = rtb_NotEqual_ff;

    /* End of Outputs for SubSystem: '<S39>/Signal Latch On With Reset' */

    /* Logic: '<S12>/Logical3' incorporates:
     *  Logic: '<S11>/Logical2'
     *  Logic: '<S12>/Logical1'
     */
    rtb_VeDTRR_b_ACCTrqEnabled = (((VeDTRR_b_ACCTrqEnabled_BSM_Arb) &&
        rtb_AND_au) || rtb_NotEqual_ff);

    /* Switch: '<S14>/Switch2' */
    if (rtb_NotEqual_ff)
    {
        /* Switch: '<S14>/Switch2' */
        VeDTRR_M_ACCWhlTrqLmtd = VeDTRR_M_ACCWhlTrqRamped;
    }
    else
    {
        /* Switch: '<S14>/Switch2' */
        VeDTRR_M_ACCWhlTrqLmtd = VeDTRR_M_ACCWhlTrqClpd;
    }

    /* End of Switch: '<S14>/Switch2' */

    /* Switch: '<S7>/Switch14' incorporates:
     *  Constant: '<S55>/Calib'
     */
    if (KeDTRR_b_ASL_ActiveOvrrd)
    {
        /* Switch: '<S7>/Switch14' incorporates:
         *  Constant: '<S56>/Calib'
         */
        VeDTRI_b_ASL_Active = KeDTRR_b_ASL_Active_OvrrdVal;
    }
    else
    {
        /* Switch: '<S7>/Switch14' */
        VeDTRI_b_ASL_Active = Equal;
    }

    /* End of Switch: '<S7>/Switch14' */

    /* RelationalOperator: '<S6>/Equal' incorporates:
     *  Constant: '<S42>/Constant'
     */
    Equal = (((uint32)rtb_TmpSignalConversionAtVePL_k) == CePLTR_e_ACC_NCC);

    /* RelationalOperator: '<S6>/Equal1' incorporates:
     *  Constant: '<S43>/Constant'
     */
    rtb_NotEqual_ff = (((uint32)rtb_TmpSignalConversionAtVePL_k) == CePLTR_e_SSC);

    /* RelationalOperator: '<S6>/Equal2' incorporates:
     *  Constant: '<S44>/Constant'
     */
    Equal2 = (((uint32)rtb_TmpSignalConversionAtVePL_k) == CePLTR_e_RRCC);

    /* RelationalOperator: '<S6>/Equal3' incorporates:
     *  Constant: '<S45>/Constant'
     */
    Equal3 = (((uint32)rtb_TmpSignalConversionAtVePL_k) == CePLTR_e_PPPA);

    /* Outputs for Atomic SubSystem: '<S3>/Driver_Demand' */
    /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
    /* Switch: '<S80>/Switch2' incorporates:
     *  Constant: '<S88>/Calib'
     */
    if (KeDTRR_b_DsblMinPedalClip)
    {
        /* Switch: '<S80>/Switch2' incorporates:
         *  Constant: '<S80>/Constant Value1'
         */
        rtb_Switch_h2 = -100000.0F;
    }
    else
    {
        /* Switch: '<S80>/Switch2' incorporates:
         *  Inport: '<S80>/ZeroPedalAxlTorqFiltd'
         */
        rtb_Switch_h2 = VeDTRR_M_ZeroPedalAxlTorqFiltd;
    }

    /* End of Switch: '<S80>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S80>/Protected Division' */
    /* Switch: '<S89>/Switch1' incorporates:
     *  Constant: '<S700>/Calib'
     *  Constant: '<S89>/Constant Value'
     *  Constant: '<S89>/Constant Value1'
     *  Constant: '<S89>/Constant Value2'
     *  Constant: '<S89>/Constant Value3'
     *  Logic: '<S89>/AND'
     *  RelationalOperator: '<S89>/Greater Than or Equal '
     *  RelationalOperator: '<S89>/Greater Than or Equal 1'
     *  RelationalOperator: '<S89>/Not Equal'
     *  RelationalOperator: '<S89>/Not Equal1'
     *  Switch: '<S89>/Switch2'
     *  Switch: '<S89>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeCCTR != 0.0F) &&
            (KeDTRR_K_PtcWhlTrqToPwrFctr != 0.0F))
    {
        /* Switch: '<S89>/Switch1' incorporates:
         *  Product: '<S89>/Division'
         */
        rtb_TmpSignalConversionAtVeCCTR /= KeDTRR_K_PtcWhlTrqToPwrFctr;
    }
    else if (rtb_TmpSignalConversionAtVeCCTR > 0.0F)
    {
        /* Switch: '<S89>/Switch2' incorporates:
         *  Constant: '<S89>/MAXFLOAT'
         *  Switch: '<S89>/Switch1'
         */
        rtb_TmpSignalConversionAtVeCCTR = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeCCTR < 0.0F)
    {
        /* Switch: '<S89>/Switch3' incorporates:
         *  Constant: '<S89>/MINFLOAT'
         *  Switch: '<S89>/Switch1'
         *  Switch: '<S89>/Switch2'
         */
        rtb_TmpSignalConversionAtVeCCTR = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S89>/Switch1' incorporates:
         *  Constant: '<S89>/Constant Value4'
         *  Switch: '<S89>/Switch2'
         *  Switch: '<S89>/Switch3'
         */
        rtb_TmpSignalConversionAtVeCCTR = 0.0F;
    }

    /* End of Switch: '<S89>/Switch1' */
    /* End of Outputs for SubSystem: '<S80>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S80>/Protected Division1' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S90>/Constant Value'
     *  Constant: '<S90>/Constant Value1'
     *  Constant: '<S90>/Constant Value2'
     *  Constant: '<S90>/Constant Value3'
     *  Logic: '<S90>/AND'
     *  RelationalOperator: '<S90>/Greater Than or Equal '
     *  RelationalOperator: '<S90>/Greater Than or Equal 1'
     *  RelationalOperator: '<S90>/Not Equal'
     *  RelationalOperator: '<S90>/Not Equal1'
     *  Switch: '<S90>/Switch2'
     *  Switch: '<S90>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeCCTR != 0.0F) && (VeDTRR_v_PtcPdlWhlTrqKPH
            != 0.0F))
    {
        /* Switch: '<S90>/Switch1' incorporates:
         *  Product: '<S90>/Division'
         */
        VeDTRR_M_PtcWhlCCTrqReq = rtb_TmpSignalConversionAtVeCCTR /
            VeDTRR_v_PtcPdlWhlTrqKPH;
    }
    else if (rtb_TmpSignalConversionAtVeCCTR > 0.0F)
    {
        /* Switch: '<S90>/Switch2' incorporates:
         *  Constant: '<S90>/MAXFLOAT'
         *  Switch: '<S90>/Switch1'
         */
        VeDTRR_M_PtcWhlCCTrqReq = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeCCTR < 0.0F)
    {
        /* Switch: '<S90>/Switch3' incorporates:
         *  Constant: '<S90>/MINFLOAT'
         *  Switch: '<S90>/Switch1'
         *  Switch: '<S90>/Switch2'
         */
        VeDTRR_M_PtcWhlCCTrqReq = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S90>/Switch1' incorporates:
         *  Constant: '<S90>/Constant Value4'
         *  Switch: '<S90>/Switch2'
         *  Switch: '<S90>/Switch3'
         */
        VeDTRR_M_PtcWhlCCTrqReq = 0.0F;
    }

    /* End of Switch: '<S90>/Switch1' */
    /* End of Outputs for SubSystem: '<S80>/Protected Division1' */
    /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */
    /* End of Outputs for SubSystem: '<S3>/Driver_Demand' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeSTMR_e_RdPrfmMd_MinMax' */
    (void)Rte_Read_VeSTMR_e_RdPrfmMd_MinMax_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Driver_Demand' */
    /* Outputs for Atomic SubSystem: '<S8>/Lv2RedPerformance' */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Constant: '<S83>/Constant Value3'
     *  Constant: '<S95>/Constant'
     *  Logic: '<S83>/Logical'
     *  RelationalOperator: '<S83>/Equal1'
     */
    if (rtb_TmpSignalConversionAtVeST_c && (((uint32)tmpRead_b) ==
            CeSTMR_e_RdPerfmMd_Max))
    {
        rtb_TmpSignalConversionAtVeCCTR = rtb_TmpSignalConversionAtVeSTMR;
    }
    else
    {
        rtb_TmpSignalConversionAtVeCCTR = 999999.0F;
    }

    /* End of Switch: '<S83>/Switch1' */

    /* MinMax: '<S83>/MinMax3' incorporates:
     *  Constant: '<S83>/Constant Value5'
     */
    rtb_TmpSignalConversionAtVeCCTR = fmaxf(rtb_TmpSignalConversionAtVeCCTR,
        0.0F);

    /* Switch: '<S83>/Switch5' incorporates:
     *  Constant: '<S83>/Constant Value4'
     *  Constant: '<S96>/Constant'
     *  Logic: '<S83>/Logical1'
     *  RelationalOperator: '<S83>/Equal2'
     */
    if ((!rtb_TmpSignalConversionAtVeST_c) || (((uint32)tmpRead_b) !=
            CeSTMR_e_RdPerfmMd_Min))
    {
        rtb_TmpSignalConversionAtVeSTMR = -999999.0F;
    }

    /* End of Switch: '<S83>/Switch5' */

    /* MinMax: '<S83>/MinMax6' incorporates:
     *  Constant: '<S83>/Constant Value6'
     */
    rtb_TmpSignalConversionAtVeSTMR = fminf(rtb_TmpSignalConversionAtVeSTMR,
        0.0F);

    /* Outputs for Atomic SubSystem: '<S83>/Limiter' */
    /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
    /* Switch: '<S92>/Switch1' incorporates:
     *  Inport: '<S80>/PTC_PDL_WHL_TRQ_REQ'
     *  RelationalOperator: '<S92>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCCTR < VeDTRR_M_PtcPdlWhlTrqReq)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = rtb_TmpSignalConversionAtVeCCTR;
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_PtcPdlWhlTrqReq;
    }

    /* End of Switch: '<S92>/Switch1' */
    /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */

    /* Switch: '<S92>/Switch' incorporates:
     *  RelationalOperator: '<S92>/Relational Operator1'
     */
    if (rtb_Switch2_i > rtb_TmpSignalConversionAtVeSTMR)
    {
        /* Switch: '<S92>/Switch' */
        rtb_LeDTRR_M_TrqReqTemp[0] = rtb_Switch2_i;
    }
    else
    {
        /* Switch: '<S92>/Switch' */
        rtb_LeDTRR_M_TrqReqTemp[0] = rtb_TmpSignalConversionAtVeSTMR;
    }

    /* End of Switch: '<S92>/Switch' */
    /* End of Outputs for SubSystem: '<S83>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S83>/Limiter1' */
    /* Switch: '<S93>/Switch1' incorporates:
     *  Inport: '<S83>/CCTrqReq_Raw'
     *  RelationalOperator: '<S93>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCCTR < VeDTRR_M_PtcWhlCCTrqReq)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = rtb_TmpSignalConversionAtVeCCTR;
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_PtcWhlCCTrqReq;
    }

    /* End of Switch: '<S93>/Switch1' */

    /* Switch: '<S93>/Switch' incorporates:
     *  RelationalOperator: '<S93>/Relational Operator1'
     */
    if (rtb_Switch2_i > rtb_TmpSignalConversionAtVeSTMR)
    {
        /* SignalConversion generated from: '<S82>/ SFunction ' incorporates:
         *  Switch: '<S93>/Switch'
         */
        rtb_TmpSignalConversionAtSFun_m[0] = rtb_Switch2_i;
    }
    else
    {
        /* SignalConversion generated from: '<S82>/ SFunction ' incorporates:
         *  Switch: '<S93>/Switch'
         */
        rtb_TmpSignalConversionAtSFun_m[0] = rtb_TmpSignalConversionAtVeSTMR;
    }

    /* End of Switch: '<S93>/Switch' */
    /* End of Outputs for SubSystem: '<S83>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S83>/Limiter2' */
    /* Switch: '<S94>/Switch1' incorporates:
     *  Inport: '<S83>/ACC_TrqRqst_BSM_raw'
     *  RelationalOperator: '<S94>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeCCTR < VeDTRR_M_ACCWhlTrqLmtd)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = rtb_TmpSignalConversionAtVeCCTR;
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_ACCWhlTrqLmtd;
    }

    /* End of Switch: '<S94>/Switch1' */
    /* End of Outputs for SubSystem: '<S83>/Limiter2' */

    /* Logic: '<S83>/Logical5' incorporates:
     *  Abs: '<S83>/Abs'
     *  Abs: '<S83>/Abs1'
     *  Constant: '<S83>/Constant Value2'
     *  Constant: '<S83>/Constant Value7'
     *  RelationalOperator: '<S83>/Comparison1'
     *  RelationalOperator: '<S83>/Comparison2'
     *  Sum: '<S83>/Sum1'
     *  Sum: '<S83>/Sum2'
     *  UnitDelay: '<S83>/Unit Delay3'
     */
    VeDTRC_b_Lv2RdPrfmActive = ((fabsf(DTRR_ac_DW.UnitDelay3_DSTATE_me[0] -
        rtb_TmpSignalConversionAtVeCCTR) < 1.0F) || (fabsf
        (DTRR_ac_DW.UnitDelay3_DSTATE_me[0] - rtb_TmpSignalConversionAtVeSTMR) <
        1.0F));

    /* End of Outputs for SubSystem: '<S8>/Lv2RedPerformance' */

    /* Outputs for Atomic SubSystem: '<S8>/CC_Engaged_Latch' */
    /* Logic: '<S81>/or' incorporates:
     *  Logic: '<S81>/or2'
     *  RelationalOperator: '<S81>/pdl > cc3'
     *  UnitDelay: '<S81>/Unit Delay'
     *  UnitDelay: '<S81>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeST_c = (rtb_TmpSignalConversionAtVeCC_i &&
        ((rtb_TmpSignalConversionAtVeCC_l != DTRR_ac_DW.UnitDelay_DSTATE_mh) ||
         (DTRR_ac_DW.UnitDelay2_DSTATE_jc)));

    /* Update for UnitDelay: '<S81>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_mh = rtb_TmpSignalConversionAtVeCC_l;

    /* Update for UnitDelay: '<S81>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_jc = rtb_TmpSignalConversionAtVeST_c;

    /* End of Outputs for SubSystem: '<S8>/CC_Engaged_Latch' */

    /* Outputs for Atomic SubSystem: '<S8>/Lv2RedPerformance' */
    /* SignalConversion generated from: '<S82>/ SFunction ' incorporates:
     *  Chart: '<S8>/Drvr_Trq_Arb_Slw'
     *  Inport: '<S83>/CCTrqReq_Raw'
     */
    rtb_TmpSignalConversionAtSFun_m[1] = VeDTRR_M_PtcWhlCCTrqReq;

    /* Outputs for Atomic SubSystem: '<S83>/Limiter2' */
    /* Switch: '<S94>/Switch' incorporates:
     *  RelationalOperator: '<S94>/Relational Operator1'
     */
    if (rtb_Switch2_i > rtb_TmpSignalConversionAtVeSTMR)
    {
        /* SignalConversion generated from: '<S82>/ SFunction ' incorporates:
         *  Chart: '<S8>/Drvr_Trq_Arb_Slw'
         */
        rtb_TmpSignalConversionAtSFun_n[0] = rtb_Switch2_i;
    }
    else
    {
        /* SignalConversion generated from: '<S82>/ SFunction ' incorporates:
         *  Chart: '<S8>/Drvr_Trq_Arb_Slw'
         */
        rtb_TmpSignalConversionAtSFun_n[0] = rtb_TmpSignalConversionAtVeSTMR;
    }

    /* End of Switch: '<S94>/Switch' */
    /* End of Outputs for SubSystem: '<S83>/Limiter2' */

    /* SignalConversion generated from: '<S82>/ SFunction ' incorporates:
     *  Chart: '<S8>/Drvr_Trq_Arb_Slw'
     *  Inport: '<S83>/ACC_TrqRqst_BSM_raw'
     */
    rtb_TmpSignalConversionAtSFun_n[1] = VeDTRR_M_ACCWhlTrqLmtd;

    /* End of Outputs for SubSystem: '<S8>/Lv2RedPerformance' */

    /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
    /* Chart: '<S8>/Drvr_Trq_Arb_Slw' incorporates:
     *  Inport: '<S80>/FullPedalAxlTorqFiltd'
     *  Inport: '<S80>/PTC_PDL_WHL_TRQ_REQ'
     *  Inport: '<S83>/ACC_TrqRqst_BSM_raw'
     *  Inport: '<S83>/CCTrqReq_Raw'
     */
    /* Gateway: DTRR_FUNC_FastTEF/DTRC/Driver_Demand/Drvr_Trq_Arb_Slw */
    /* During: DTRR_FUNC_FastTEF/DTRC/Driver_Demand/Drvr_Trq_Arb_Slw */
    /* Entry Internal: DTRR_FUNC_FastTEF/DTRC/Driver_Demand/Drvr_Trq_Arb_Slw */
    /* Transition: '<S82>:1' */
    rtb_LeDTRR_M_TrqReqTemp[1] = VeDTRR_M_PtcPdlWhlTrqReq;

    /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */

    /* Outputs for Atomic SubSystem: '<S8>/Lv2RedPerformance' */
    if ((rtb_Logical6 && rtb_VeDTRR_b_ACCTrqEnabled) && (VeDTRR_M_ACCWhlTrqLmtd >
         rtb_LeDTRR_M_TrqReqTemp[1]))
    {
        /* Transition: '<S82>:27' */
        /* Transition: '<S82>:29' */
        for (i = 0; i < 2; i++)
        {
            rtb_LeDTRR_M_TrqReqTemp[i] = rtb_TmpSignalConversionAtSFun_n[i];

            /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
            rtb_TmpSignalConversionAtSFun_m[i] = fmaxf(fminf
                (rtb_LeDTRR_M_TrqReqTemp[i], VeDTRR_M_FullPedalAxlTorqFiltd),
                rtb_Switch_h2);

            /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */
        }

        rtb_TmpSignalConversionAtVeST_c = false;
    }
    else
    {
        /* Transition: '<S82>:2' */
        if ((VeDTRR_M_PtcWhlCCTrqReq > rtb_LeDTRR_M_TrqReqTemp[1]) &&
                rtb_TmpSignalConversionAtVeST_c)
        {
            /* Transition: '<S82>:3' */
            /* Transition: '<S82>:4' */
            for (i = 0; i < 2; i++)
            {
                rtb_LeDTRR_M_TrqReqTemp[i] = rtb_TmpSignalConversionAtSFun_m[i];

                /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
                rtb_TmpSignalConversionAtSFun_m[i] = fmaxf(fminf
                    (rtb_LeDTRR_M_TrqReqTemp[i], VeDTRR_M_FullPedalAxlTorqFiltd),
                    rtb_Switch_h2);

                /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */
            }

            rtb_TmpSignalConversionAtVeST_c = false;
        }
        else
        {
            /* Transition: '<S82>:23' */
            for (i = 0; i < 2; i++)
            {
                /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
                rtb_TmpSignalConversionAtSFun_m[i] = fmaxf(fminf
                    (rtb_LeDTRR_M_TrqReqTemp[i], VeDTRR_M_FullPedalAxlTorqFiltd),
                    rtb_Switch_h2);

                /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */
            }

            rtb_TmpSignalConversionAtVeST_c = true;
        }
    }

    /* End of Outputs for SubSystem: '<S8>/Lv2RedPerformance' */

    /* Switch: '<S84>/Switch1' incorporates:
     *  Constant: '<S105>/Calib'
     */
    if (KeDTRR_b_EVCUOvr_Enbl)
    {
        /* Gain: '<S85>/Gain' incorporates:
         *  Constant: '<S106>/Calib'
         */
        rtb_Gain_ki = KeDTRR_b_ProxyOvrEnbl;
    }
    else
    {
        /* Gain: '<S85>/Gain' */
        rtb_Gain_ki = rtb_Logical6;
    }

    /* End of Switch: '<S84>/Switch1' */

    /* Switch: '<S84>/Switch4' */
    if (rtb_Logical6)
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_ACCWhlTrqLmtd;
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VeDTRR_M_PtcWhlCCTrqReq;
    }

    /* End of Switch: '<S84>/Switch4' */

    /* Switch: '<S84>/Switch5' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S97>/Calib'
     *  Constant: '<S98>/Calib'
     *  Constant: '<S99>/Calib'
     *  Switch: '<S84>/Switch3'
     *  Switch: '<S84>/Switch6'
     *  Switch: '<S84>/Switch7'
     *  Switch: '<S84>/Switch8'
     */
    if (rtb_Gain_ki)
    {
        rtb_Vector_mt = KeDTRR_M_ACCTrqOvrrd_UpperThrsh;
        rtb_TmpSignalConversionAtVeCC_l = KeDTRR_U_PtcDriverOvrrd_ACCUpperThrsh;
        rtb_TmpSignalConversionAtVeSTMR = KeDTRR_M_ACCTrqOvrrd_LowerThrsh;
        rtb_Switch_h2 = KeDTRR_U_PtcDriverOvrrd_ACCLowerThrsh;

        /* Switch: '<S84>/Switch2' incorporates:
         *  Constant: '<S101>/Calib'
         *  Constant: '<S102>/Calib'
         *  Constant: '<S105>/Calib'
         *  Constant: '<S97>/Calib'
         *  Constant: '<S98>/Calib'
         */
        if (KeDTRR_b_EVCUOvr_Enbl)
        {
            /* Gain: '<S85>/Gain' incorporates:
             *  Logic: '<S6>/Logical6'
             *  Switch: '<S84>/Switch2'
             */
            rtb_Gain_ki = (((Equal || rtb_NotEqual_ff) || Equal2) || Equal3);
        }
        else
        {
            /* Gain: '<S85>/Gain' incorporates:
             *  Switch: '<S84>/Switch2'
             */
            rtb_Gain_ki = rtb_Logical2;
        }

        /* End of Switch: '<S84>/Switch2' */
    }
    else
    {
        rtb_Vector_mt = KeDTRR_M_CCTrqOvrrd_UpperThrsh;
        rtb_TmpSignalConversionAtVeCC_l = KeDTRR_U_PtcDriverOvrrd_CCUpperThrsh;
        rtb_TmpSignalConversionAtVeSTMR = KeDTRR_M_CCTrqOvrrd_LowerThrsh;
        rtb_Switch_h2 = KeDTRR_U_PtcDriverOvrrd_CCLowerThrsh;

        /* Gain: '<S85>/Gain' incorporates:
         *  Constant: '<S100>/Calib'
         *  Constant: '<S103>/Calib'
         *  Constant: '<S104>/Calib'
         *  Constant: '<S99>/Calib'
         */
        rtb_Gain_ki = rtb_TmpSignalConversionAtVeCC_i;
    }

    /* End of Switch: '<S84>/Switch5' */

    /* Outputs for Atomic SubSystem: '<S84>/Signal Latch On With Reset' */
    /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
    /* Logic: '<S107>/OR1' incorporates:
     *  Inport: '<S80>/PTC_PDL_WHL_TRQ_REQ'
     *  Logic: '<S107>/NOT'
     *  Logic: '<S107>/OR'
     *  Logic: '<S84>/Logical4'
     *  Logic: '<S84>/Logical6'
     *  RelationalOperator: '<S84>/Comparison1'
     *  RelationalOperator: '<S84>/Comparison2'
     *  RelationalOperator: '<S84>/Comparison3'
     *  RelationalOperator: '<S84>/Comparison5'
     *  Sum: '<S84>/Sum3'
     *  Sum: '<S84>/Sum4'
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_Logical6 = (((VeDTRR_M_PtcPdlWhlTrqReq > (rtb_Switch2_i + rtb_Vector_mt))
                     && (rtb_TmpSignalConversionAtVeA_ev >
                         rtb_TmpSignalConversionAtVeCC_l)) || ((((rtb_Switch2_i
                        - rtb_TmpSignalConversionAtVeSTMR) <
                       VeDTRR_M_PtcPdlWhlTrqReq) && (rtb_Switch_h2 <
                       rtb_TmpSignalConversionAtVeA_ev)) &&
                     (DTRR_ac_DW.UnitDelay_DSTATE_nc)));

    /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_nc = rtb_Logical6;

    /* End of Outputs for SubSystem: '<S84>/Signal Latch On With Reset' */

    /* Logic: '<S84>/Logical5' */
    rtb_Logical6 = (rtb_Logical6 && rtb_Gain_ki);

    /* Gain: '<S85>/Gain' */
    rtb_Gain_ki = rtb_TmpSignalConversionAtVeST_c;
    for (i = 0; i < 2; i++)
    {
        /* Gain: '<S86>/Gain' */
        VaDTRR_M_DrvrIntndedAxleTorqRaw[(i)] = rtb_TmpSignalConversionAtSFun_m[i];
    }

    /* Switch: '<S87>/Switch6' incorporates:
     *  Inport: '<Root>/VeWTAR_M_ASL_PIDTrq'
     */
    if (VeDTRI_b_ASL_Active)
    {
        (void)Rte_Read_VeWTAR_M_ASL_PIDTrq_Value(&rtb_Sum2_ij);

        /* Switch: '<S108>/Switch2' incorporates:
         *  Inport: '<Root>/VeWTAR_M_ASL_PIDTrq'
         *  MinMax: '<S87>/Clip I3'
         */
        rtb_Switch2_i = fminf(VaDTRR_M_DrvrIntndedAxleTorqRaw[1], rtb_Sum2_ij);
    }
    else
    {
        /* Switch: '<S108>/Switch2' */
        rtb_Switch2_i = VaDTRR_M_DrvrIntndedAxleTorqRaw[1];
    }

    /* End of Switch: '<S87>/Switch6' */

    /* Sum: '<S87>/Sum1' */
    rtb_TmpSignalConversionAtVeCC_l = rtb_Switch2_i - rtb_UnitDelay3_c[1];

    /* Sum: '<S87>/Sum2' */
    rtb_Sum2_ij = VeDTRC_M_PtcPdlMaxWhlTrq - rtb_UnitDelay3_c[1];

    /* Outputs for Atomic SubSystem: '<S87>/Protected Division' */
    /* Switch: '<S129>/Switch1' incorporates:
     *  Constant: '<S129>/Constant Value'
     *  Constant: '<S129>/Constant Value1'
     *  Constant: '<S129>/Constant Value2'
     *  Constant: '<S129>/Constant Value3'
     *  Logic: '<S129>/AND'
     *  RelationalOperator: '<S129>/Greater Than or Equal '
     *  RelationalOperator: '<S129>/Greater Than or Equal 1'
     *  RelationalOperator: '<S129>/Not Equal'
     *  RelationalOperator: '<S129>/Not Equal1'
     *  Switch: '<S129>/Switch2'
     *  Switch: '<S129>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeCC_l != 0.0F) && (rtb_Sum2_ij != 0.0F))
    {
        /* Switch: '<S129>/Switch1' incorporates:
         *  Product: '<S129>/Division'
         */
        VeDTRR_Pct_CalculatedPctTrq = rtb_TmpSignalConversionAtVeCC_l /
            rtb_Sum2_ij;
    }
    else if (rtb_TmpSignalConversionAtVeCC_l > 0.0F)
    {
        /* Switch: '<S129>/Switch2' incorporates:
         *  Constant: '<S129>/MAXFLOAT'
         *  Switch: '<S129>/Switch1'
         */
        VeDTRR_Pct_CalculatedPctTrq = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeCC_l < 0.0F)
    {
        /* Switch: '<S129>/Switch3' incorporates:
         *  Constant: '<S129>/MINFLOAT'
         *  Switch: '<S129>/Switch1'
         *  Switch: '<S129>/Switch2'
         */
        VeDTRR_Pct_CalculatedPctTrq = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S129>/Switch1' incorporates:
         *  Constant: '<S129>/Constant Value4'
         *  Switch: '<S129>/Switch2'
         *  Switch: '<S129>/Switch3'
         */
        VeDTRR_Pct_CalculatedPctTrq = 0.0F;
    }

    /* End of Switch: '<S129>/Switch1' */
    /* End of Outputs for SubSystem: '<S87>/Protected Division' */

    /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    /* Sum: '<S108>/Summation' incorporates:
     *  Constant: '<S110>/Calib'
     *  Product: '<S108>/Multiplication'
     *  Sum: '<S108>/Subtraction'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeCC_l = ((VeDTRR_Pct_CalculatedPctTrq -
        DTRR_ac_DW.UnitDelay_DSTATE_ln) * KeDTRR_k_FiltPdlPctTrqVirtual) +
        DTRR_ac_DW.UnitDelay_DSTATE_ln;

    /* Update for UnitDelay: '<S108>/Unit Delay' incorporates:
     *  Switch: '<S108>/Switch2'
     */
    DTRR_ac_DW.UnitDelay_DSTATE_ln = rtb_TmpSignalConversionAtVeCC_l;

    /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */

    /* RelationalOperator: '<S87>/Equal' incorporates:
     *  Constant: '<S109>/Constant'
     */
    rtb_TmpSignalConversionAtVeST_c = (((uint32)rtb_TmpSignalConversionAtVeEBMR)
        == CeEBMR_e_eBoostEngaged);

    /* Switch: '<S87>/Switch7' incorporates:
     *  Switch: '<S87>/Switch1'
     *  Switch: '<S87>/Switch10'
     *  Switch: '<S87>/Switch11'
     *  Switch: '<S87>/Switch12'
     *  Switch: '<S87>/Switch13'
     *  Switch: '<S87>/Switch14'
     *  Switch: '<S87>/Switch15'
     *  Switch: '<S87>/Switch17'
     *  Switch: '<S87>/Switch18'
     *  Switch: '<S87>/Switch2'
     *  Switch: '<S87>/Switch3'
     *  Switch: '<S87>/Switch4'
     *  Switch: '<S87>/Switch9'
     */
    if (rtb_TmpSignalConversionAtGainIn[6])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S119>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Power[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Power[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Power[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[2])
    {
        /* Switch: '<S87>/Switch8' incorporates:
         *  Switch: '<S87>/Switch1'
         */
        if (rtb_TmpSignalConversionAtVeST_c)
        {
            /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S87>/Switch7' incorporates:
             *  Lookup_n-D: '<S114>/Vector'
             *  Switch: '<S108>/Switch2'
             *  Switch: '<S699>/Switch1'
             *  Switch: '<S87>/Switch1'
             *  Switch: '<S87>/Switch8'
             */
            VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((
                   const float32 *)&(KxDTRR_k_PdlPctVirtual_Camel_Boost[0])), ((
                   const float32 *)&(KyDTRR_k_PdlPctVirtual_Camel_Boost[0])), ((
                   const float32 *)&(KtDTRR_k_PdlPctVirtual_Camel_Boost[0])),
                 DTRR_ac_ConstP.pooled6, 17U);

            /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S87>/Switch7' incorporates:
             *  Lookup_n-D: '<S113>/Vector'
             *  Switch: '<S108>/Switch2'
             *  Switch: '<S699>/Switch1'
             *  Switch: '<S87>/Switch1'
             *  Switch: '<S87>/Switch8'
             */
            VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((
                   const float32 *)&(KxDTRR_k_PdlPctVirtual_Camel[0])), ((const
                   float32 *)&(KyDTRR_k_PdlPctVirtual_Camel[0])), ((const
                   float32 *)&(KtDTRR_k_PdlPctVirtual_Camel[0])),
                 DTRR_ac_ConstP.pooled6, 17U);

            /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        }

        /* End of Switch: '<S87>/Switch8' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[5])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S121>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch2'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Range[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Range[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Range[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[4])
    {
        /* Switch: '<S87>/Switch19' incorporates:
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         */
        if (rtb_TmpSignalConversionAtVeST_c)
        {
            /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S87>/Switch7' incorporates:
             *  Lookup_n-D: '<S125>/Vector'
             *  Switch: '<S108>/Switch2'
             *  Switch: '<S699>/Switch1'
             *  Switch: '<S87>/Switch19'
             *  Switch: '<S87>/Switch3'
             */
            VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((
                   const float32 *)&(KxDTRR_k_PdlPctVirtual_Sport_Boost[0])), ((
                   const float32 *)&(KyDTRR_k_PdlPctVirtual_Sport_Boost[0])), ((
                   const float32 *)&(KtDTRR_k_PdlPctVirtual_Sport_Boost[0])),
                 DTRR_ac_ConstP.pooled6, 17U);

            /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S87>/Switch7' incorporates:
             *  Lookup_n-D: '<S124>/Vector'
             *  Switch: '<S108>/Switch2'
             *  Switch: '<S699>/Switch1'
             *  Switch: '<S87>/Switch19'
             *  Switch: '<S87>/Switch3'
             */
            VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((
                   const float32 *)&(KxDTRR_k_PdlPctVirtual_Sport[0])), ((const
                   float32 *)&(KyDTRR_k_PdlPctVirtual_Sport[0])), ((const
                   float32 *)&(KtDTRR_k_PdlPctVirtual_Sport[0])),
                 DTRR_ac_ConstP.pooled6, 17U);

            /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        }

        /* End of Switch: '<S87>/Switch19' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[1])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S117>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_OffRoad[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_OffRoad[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_OffRoad[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[3])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S120>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_PwrLimActv[0])), ((const
               float32 *)&(KyDTRR_k_PdlPctVirtual_PwrLimActv[0])), ((const
               float32 *)&(KtDTRR_k_PdlPctVirtual_PwrLimActv[0])),
             DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[7])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S122>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Rock[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Rock[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Rock[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[8])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S126>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Tow[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Tow[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Tow[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[9])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S118>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Valet[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Valet[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Valet[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[10])
    {
        /* Switch: '<S87>/Switch16' incorporates:
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch13'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        if (rtb_TmpSignalConversionAtVeST_c)
        {
            /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S87>/Switch7' incorporates:
             *  Lookup_n-D: '<S128>/Vector'
             *  Switch: '<S108>/Switch2'
             *  Switch: '<S699>/Switch1'
             *  Switch: '<S87>/Switch11'
             *  Switch: '<S87>/Switch13'
             *  Switch: '<S87>/Switch16'
             */
            VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((
                   const float32 *)&(KxDTRR_k_PdlPctVirtual_Track_Boost[0])), ((
                   const float32 *)&(KyDTRR_k_PdlPctVirtual_Track_Boost[0])), ((
                   const float32 *)&(KtDTRR_k_PdlPctVirtual_Track_Boost[0])),
                 DTRR_ac_ConstP.pooled6, 17U);

            /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
            /* Switch: '<S87>/Switch7' incorporates:
             *  Lookup_n-D: '<S127>/Vector'
             *  Switch: '<S108>/Switch2'
             *  Switch: '<S699>/Switch1'
             *  Switch: '<S87>/Switch11'
             *  Switch: '<S87>/Switch13'
             *  Switch: '<S87>/Switch16'
             */
            VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
                (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((
                   const float32 *)&(KxDTRR_k_PdlPctVirtual_Track[0])), ((const
                   float32 *)&(KyDTRR_k_PdlPctVirtual_Track[0])), ((const
                   float32 *)&(KtDTRR_k_PdlPctVirtual_Track[0])),
                 DTRR_ac_ConstP.pooled6, 17U);

            /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        }

        /* End of Switch: '<S87>/Switch16' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[11])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S115>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch13'
         *  Switch: '<S87>/Switch14'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Drag[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Drag[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Drag[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[12])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S116>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch13'
         *  Switch: '<S87>/Switch14'
         *  Switch: '<S87>/Switch15'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_MudSand[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_MudSand[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_MudSand[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtGainIn[13])
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S123>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch13'
         *  Switch: '<S87>/Switch14'
         *  Switch: '<S87>/Switch15'
         *  Switch: '<S87>/Switch17'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Snow[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Snow[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Snow[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else if (rtb_TmpSignalConversionAtVeST_c)
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S112>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch13'
         *  Switch: '<S87>/Switch14'
         *  Switch: '<S87>/Switch15'
         *  Switch: '<S87>/Switch17'
         *  Switch: '<S87>/Switch18'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual_Boost[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual_Boost[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual_Boost[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
        /* Switch: '<S87>/Switch7' incorporates:
         *  Lookup_n-D: '<S111>/Vector'
         *  Switch: '<S108>/Switch2'
         *  Switch: '<S699>/Switch1'
         *  Switch: '<S87>/Switch1'
         *  Switch: '<S87>/Switch10'
         *  Switch: '<S87>/Switch11'
         *  Switch: '<S87>/Switch12'
         *  Switch: '<S87>/Switch13'
         *  Switch: '<S87>/Switch14'
         *  Switch: '<S87>/Switch15'
         *  Switch: '<S87>/Switch17'
         *  Switch: '<S87>/Switch18'
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         *  Switch: '<S87>/Switch4'
         *  Switch: '<S87>/Switch9'
         */
        VeDTRR_Pct_VirtualAccelPdlPosn = look2_iflf_binlcapw
            (rtb_TmpSignalConversionAtVeCC_l, VeDTRR_v_PtcPdlWhlTrqKPH, ((const
               float32 *)&(KxDTRR_k_PdlPctVirtual[0])), ((const float32 *)
              &(KyDTRR_k_PdlPctVirtual[0])), ((const float32 *)
              &(KtDTRR_k_PdlPctVirtual[0])), DTRR_ac_ConstP.pooled6, 17U);

        /* End of Outputs for SubSystem: '<S87>/Digital Lowpass Reset Enabled' */
    }

    /* End of Switch: '<S87>/Switch7' */

    /* Switch: '<S87>/Switch5' incorporates:
     *  Logic: '<S87>/Logical2'
     *  Logic: '<S87>/Logical3'
     */
    if (rtb_Gain_ki && (!VeDTRI_b_ASL_Active))
    {
        /* Switch: '<S87>/Switch5' */
        VeDTRR_Pct_LV1LV2AccelPdlVirtActPosn = rtb_TmpSignalConversionAtVeAPSR;
    }
    else
    {
        /* Switch: '<S87>/Switch5' */
        VeDTRR_Pct_LV1LV2AccelPdlVirtActPosn = VeDTRR_Pct_VirtualAccelPdlPosn;
    }

    /* End of Switch: '<S87>/Switch5' */

    /* Update for Atomic SubSystem: '<S8>/Lv2RedPerformance' */
    /* Update for UnitDelay: '<S83>/Unit Delay3' */
    for (i = 0; i < 2; i++)
    {
        DTRR_ac_DW.UnitDelay3_DSTATE_me[i] = rtb_LeDTRR_M_TrqReqTemp[i];
    }

    /* End of Update for UnitDelay: '<S83>/Unit Delay3' */
    /* End of Update for SubSystem: '<S8>/Lv2RedPerformance' */
    /* End of Outputs for SubSystem: '<S3>/Driver_Demand' */

    /* Logic: '<S13>/Logical1' incorporates:
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     *  RelationalOperator: '<S13>/Comparison'
     *  RelationalOperator: '<S13>/Comparison2'
     *  Sum: '<S13>/Sum'
     *  Sum: '<S13>/Sum1'
     */
    VeDTRR_Cnt_ACC_TrqRangeChk = ((VeDTRI_M_ACCTrq_BSM < (rtb_UnitDelay3_c[1] -
        KeDTRR_M_PtcPdlMinWhlTrqOffset)) || (VeDTRI_M_ACCTrq_BSM >
        (VeDTRC_M_PtcPdlMaxWhlTrq + KeDTRR_M_PtcPdlMaxWhlTrqOffset)));

    /* Logic: '<S13>/Logical3' */
    VeDTRR_Cnt_ACC_TrqFailedCntIn = (((VeDTRR_Cnt_ACC_TrqRangeChk) &&
        (VeDTRR_b_ACCTrqEnabled_BSM_Arb)) && (VeDTRI_b_RunCrankActiveAnalog));

    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S31>/Calib'
     *  MinMax: '<S30>/MinMax1'
     *  UnitDelay: '<S30>/Unit Delay'
     */
    if (VeDTRR_Cnt_ACC_TrqFailedCntIn)
    {
        /* MinMax: '<S30>/MinMax2' incorporates:
         *  UnitDelay: '<S30>/Unit Delay'
         */
        if (((sint32)DTRR_ac_DW.UnitDelay_DSTATE_pp) < 100)
        {
            rtb_Switch_i4 = DTRR_ac_DW.UnitDelay_DSTATE_pp;
        }
        else
        {
            rtb_Switch_i4 = 100U;
        }

        /* End of MinMax: '<S30>/MinMax2' */

        /* Switch: '<S30>/Switch' incorporates:
         *  Constant: '<S32>/Calib'
         *  Sum: '<S30>/Sum2'
         */
        rtb_Switch_i4 = (uint16)(((uint32)rtb_Switch_i4) + ((uint32)
            KeDTRR_Cnt_ACCTrqChkInc));
    }
    else
    {
        if (DTRR_ac_DW.UnitDelay_DSTATE_pp > KeDTRR_Cnt_ACCTrqChkDec)
        {
            /* MinMax: '<S30>/MinMax1' incorporates:
             *  UnitDelay: '<S30>/Unit Delay'
             */
            rtb_Switch_i4 = DTRR_ac_DW.UnitDelay_DSTATE_pp;
        }
        else
        {
            /* MinMax: '<S30>/MinMax1' incorporates:
             *  Constant: '<S31>/Calib'
             */
            rtb_Switch_i4 = KeDTRR_Cnt_ACCTrqChkDec;
        }

        /* Switch: '<S30>/Switch' incorporates:
         *  Constant: '<S31>/Calib'
         *  Sum: '<S30>/Sum3'
         */
        rtb_Switch_i4 -= KeDTRR_Cnt_ACCTrqChkDec;
    }

    /* End of Switch: '<S30>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */

    /* Inport: '<Root>/VeTINR_M_DrvLnTrqRq_Axle' */
    (void)Rte_Read_VeTINR_M_DrvLnTrqRq_Axle_Value(&tmpRead_d);

    /* Inport: '<Root>/VeBTQR_r_TrqDmnConvSumToAxl' */
    (void)Rte_Read_VeBTQR_r_TrqDmnConvSumToAxl_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSCCR_b_RrAxlMinRq' */
    (void)Rte_Read_VeSCCR_b_RrAxlMinRq_Value(&tmpRead_a);

    /* Inport: '<Root>/VeSCCR_b_RrAxlMaxRq' */
    (void)Rte_Read_VeSCCR_b_RrAxlMaxRq_Value(&tmpRead_9);

    /* Inport: '<Root>/VeSCCR_b_FrntAxlMinRq' */
    (void)Rte_Read_VeSCCR_b_FrntAxlMinRq_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSCCR_b_FrntAxlMaxRq' */
    (void)Rte_Read_VeSCCR_b_FrntAxlMaxRq_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_FastTEF'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* RelationalOperator: '<S30>/Comparison' incorporates:
     *  Constant: '<S33>/Calib'
     */
    VeDTRR_b_ACC_TrqFailed = (rtb_Switch_i4 >= KeDTRR_Cnt_ACCTrqChkLim);

    /* Outputs for Atomic SubSystem: '<S3>/PwtArbitrationSlw' */
    /* Logic: '<S10>/Logical Operator5' incorporates:
     *  Constant: '<S704>/Constant'
     *  Constant: '<S705>/Constant'
     *  RelationalOperator: '<S10>/Comparison1'
     *  RelationalOperator: '<S10>/Comparison2'
     */
    rtb_TmpSignalConversionAtVeST_c = ((((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_TransRangePark) || (((uint32)rtb_TmpSignalConversionAtVeTRGR)
        == CeTRGR_e_TransRangeNeutral));
    for (i = 0; i < 2; i++)
    {
        /* Switch: '<S10>/switch1' */
        if (rtb_TmpSignalConversionAtVeST_c)
        {
            /* Switch: '<S10>/switch1' */
            rtb_TmpSignalConversionAtSFun_m[i] = 0.0F;
        }
        else
        {
            /* Switch: '<S10>/switch1' incorporates:
             *  Inport: '<S10>/DrvrIntndedAxleTrqRaw_Lv2RedPerf'
             */
            rtb_TmpSignalConversionAtSFun_m[i] =
                VaDTRR_M_DrvrIntndedAxleTorqRaw[(i)];
        }

        /* End of Switch: '<S10>/switch1' */
    }

    /* Switch: '<S10>/switch2' incorporates:
     *  Constant: '<S706>/Calib'
     */
    if (KeDTRR_b_enablLv2RedPerf)
    {
        /* Switch: '<S10>/switch2' incorporates:
         *  Inport: '<S10>/DrvrIntndedAxleTrqRaw_Lv2RedPerf'
         */
        rtb_TmpSignalConversionAtVeAPSR = VaDTRR_M_DrvrIntndedAxleTorqRaw[0];
    }
    else
    {
        /* Switch: '<S10>/switch2' incorporates:
         *  Inport: '<S10>/DrvrIntndedAxleTrqRaw_Lv2RedPerf'
         */
        rtb_TmpSignalConversionAtVeAPSR = VaDTRR_M_DrvrIntndedAxleTorqRaw[1];
    }

    /* End of Switch: '<S10>/switch2' */

    /* Product: '<S10>/Product' */
    VeDTRR_M_DrvLnTrqRqMod = tmpRead_c * tmpRead_d;

    /* End of Outputs for SubSystem: '<S3>/PwtArbitrationSlw' */

    /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Update for Atomic SubSystem: '<S9>/Pedal_Percent' */
    /* Update for UnitDelay: '<S507>/Unit Delay1' incorporates:
     *  UnitDelay: '<S496>/Unit Delay1'
     *  UnitDelay: '<S507>/Unit Delay2'
     *  UnitDelay: '<S507>/Unit Delay3'
     */
#if !Rte_SysCon_Variant_DTRR_FUNC_2 && !Rte_SysCon_Variant_DTRR_FUNC_3 && !Rte_SysCon_Variant_DTRR_FUNC_4 && !Rte_SysCon_Variant_DTRR_FUNC_5

    DTRR_ac_DW.UnitDelay1_DSTATE = VeDTRR_M_PtcPdlWhlTrqReq;
    DTRR_ac_DW.UnitDelay2_DSTATE = rtb_UnitDelay3_c[0];
    DTRR_ac_DW.UnitDelay3_DSTATE = VeDTRR_M_OPDMinTrq;
    DTRR_ac_DW.UnitDelay1_DSTATE_e = VeDTRC_b_OPDInhibit_HMI;

#endif

    /* End of Update for UnitDelay: '<S507>/Unit Delay1' */

    /* Update for UnitDelay: '<S497>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_e = rtb_Switch_ki;

    /* Update for UnitDelay: '<S547>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_i = rtb_UnitDelay1;

    /* Update for UnitDelay: '<S498>/Unit Delay2' incorporates:
     *  UnitDelay: '<S601>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_2

    DTRR_ac_DW.UnitDelay2_DSTATE_b = rtb_LeDTRR_cnt_DrvMdIdx_i;
    DTRR_ac_DW.UnitDelay_DSTATE_e = rtb_Vector_gf4;

#endif

    /* End of Update for UnitDelay: '<S498>/Unit Delay2' */

    /* Update for UnitDelay: '<S499>/Unit Delay2' incorporates:
     *  UnitDelay: '<S631>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_5

    DTRR_ac_DW.UnitDelay2_DSTATE_p = DTRR_ac_B.LeDTRR_cnt_DrvMdIdxDTWS;
    DTRR_ac_DW.UnitDelay_DSTATE_iu = rtb_Vector_d;

#endif

    /* End of Update for UnitDelay: '<S499>/Unit Delay2' */

    /* Update for UnitDelay: '<S500>/Unit Delay2' incorporates:
     *  UnitDelay: '<S668>/Unit Delay'
     */
#if Rte_SysCon_Variant_DTRR_FUNC_3

    DTRR_ac_DW.UnitDelay2_DSTATE_a = rtb_LeDTRR_cnt_DrvMdIdx;
    DTRR_ac_DW.UnitDelay_DSTATE_h = rtb_Vector_fe;

#endif

    /* End of Update for UnitDelay: '<S500>/Unit Delay2' */
    /* End of Update for SubSystem: '<S9>/Pedal_Percent' */

    /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Update for UnitDelay: '<S180>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_f = rtb_TmpSignalConversionAtVeAPSR;

    /* Update for UnitDelay: '<S191>/Unit Delay1' */
    for (i = 0; i < 3; i++)
    {
        DTRR_ac_DW.UnitDelay1_DSTATE_h[i] = DTRR_ac_B.Merge1[i];
    }

    /* End of Update for UnitDelay: '<S191>/Unit Delay1' */

    /* Update for UnitDelay: '<S456>/Unit Delay' */
#if Rte_SysCon_Variant_DTRR_FUNC_1

    DTRR_ac_DW.UnitDelay_DSTATE_a = VeDTRR_M_AggressiveMinTrqRaw;

#endif

    /* End of Update for UnitDelay: '<S456>/Unit Delay' */

    /* Update for UnitDelay: '<S190>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_hp = rtb_TmpSignalConversionAtVeCSVR;

    /* Update for UnitDelay: '<S191>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_f0 = rtb_Vector_om;

    /* Update for UnitDelay: '<S188>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_is = rtb_Switch_m2;

    /* Update for UnitDelay: '<S455>/Unit Delay' */
#if !Rte_SysCon_Variant_DTRR_FUNC_1

    DTRR_ac_DW.UnitDelay_DSTATE_ka = rtb_Merge;

#endif

    /* End of Update for UnitDelay: '<S455>/Unit Delay' */

    /* Update for UnitDelay: '<S275>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_o = rtb_Multiplication2;

    /* Update for UnitDelay: '<S275>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_b = rtb_switch4;

    /* Update for UnitDelay: '<S183>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_h = rtb_VeDTRR_b_ACCTrqEnabled;

    /* Update for UnitDelay: '<S165>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_m = VeDTRR_M_NormalMinTrq_PN_arb;

    /* Update for UnitDelay: '<S273>/Unit Delay3' */
    DTRR_ac_DW.UnitDelay3_DSTATE_m = VeDTRR_M_eCreepWhlTrq;

    /* Update for UnitDelay: '<S180>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_i = rtb_VeDTRR_b_ACCTrqEnabled;

    /* Update for UnitDelay: '<S188>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_j = rtb_TmpSignalConversionAtVeBRKR;

    /* Update for UnitDelay: '<S181>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_jd = VeDTRR_M_PtcPdlMinWhlTrqRaw;

    /* Update for UnitDelay: '<S273>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_g = VeDTRR_M_CreepArbMinTrq;

    /* Update for UnitDelay: '<S364>/Unit Delay3' */
    DTRR_ac_DW.UnitDelay3_DSTATE_j = VeDTRR_b_OPDActvtMaxFlag;

    /* Update for UnitDelay: '<S364>/Unit Delay4' */
    DTRR_ac_DW.UnitDelay4_DSTATE = VeDTRR_Pct_MaxPdlPctFrozen;

    /* Update for UnitDelay: '<S364>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_j = VeDTRR_b_OPDActvtMinFlag;

    /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Update for SubSystem: '<S9>/Min_Torque' */
    /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */

    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Switch: '<S438>/Switch3' */
    if (rtb_UnitDelay_km)
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S438>/Unit Delay' */
        DTRR_ac_DW.UnitDelay_DSTATE_ha = VeDTRR_Pct_PdlPctFiltTrq;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }
    else
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S438>/Unit Delay' */
        DTRR_ac_DW.UnitDelay_DSTATE_ha = VeDTRR_Pct_MinPdlPctFrozen;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }

    /* End of Switch: '<S438>/Switch3' */
    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */

    /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Update for UnitDelay: '<S364>/Unit Delay5' */
    DTRR_ac_DW.UnitDelay5_DSTATE = VeDTRR_Pct_MinPdlPctFrozen;

    /* Update for UnitDelay: '<S358>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_oj = VeDTRR_Pct_PdlPctUnFiltTrq;

    /* Update for UnitDelay: '<S356>/Unit Delay2' */
    DTRR_ac_DW.UnitDelay2_DSTATE_g = VeDTRR_M_MinTrqFinal;

    /* Update for UnitDelay: '<S357>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_m = VeDTRR_Pct_PdlPctUnFiltTrq;

    /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Update for SubSystem: '<S9>/Min_Torque' */
    /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */

    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Switch: '<S441>/Switch3' */
    if (rtb_TmpSignalConversionAtVeAECR)
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S441>/Unit Delay' incorporates:
         *  Constant: '<S364>/Constant Value2'
         */
        DTRR_ac_DW.UnitDelay_DSTATE_cp = 0.0001F;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }
    else
    {
        /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
        /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
        /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
        /* Update for UnitDelay: '<S441>/Unit Delay' */
        DTRR_ac_DW.UnitDelay_DSTATE_cp = VeDTRR_Pct_PdlPctMax;

        /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */
        /* End of Update for SubSystem: '<S9>/Min_Torque' */
        /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */
    }

    /* End of Switch: '<S441>/Switch3' */
    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */

    /* Update for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Update for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Update for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Update for UnitDelay: '<S374>/Unit Delay6' */
    DTRR_ac_DW.UnitDelay6_DSTATE = rtb_switch10;

    /* End of Update for SubSystem: '<S132>/Min_Wheel_Torque' */

    /* Update for UnitDelay: '<S164>/Unit Delay3' */
    for (i = 0; i < 2; i++)
    {
        DTRR_ac_DW.UnitDelay3_DSTATE_b[i] = switch5[i];
    }

    /* End of Update for UnitDelay: '<S164>/Unit Delay3' */

    /* Update for UnitDelay: '<S164>/Unit Delay1' */
    DTRR_ac_DW.UnitDelay1_DSTATE_eb = rtb_TmpSignalConversionAtVeBR_k;

    /* End of Update for SubSystem: '<S9>/Min_Torque' */
    /* End of Update for SubSystem: '<S3>/Pedal_Mapping' */

    /* Update for UnitDelay: '<S5>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_ff = VeDTRR_b_ACC_TrqFailed;

    /* Update for UnitDelay: '<S14>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE = VeDTRR_M_ACCWhlTrqLmtd;

    /* Update for UnitDelay: '<S30>/Unit Delay' */
    DTRR_ac_DW.UnitDelay_DSTATE_pp = rtb_Switch_i4;

    /* Outport: '<Root>/VeDTRR_M_AxleTrqPotential' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqPotential'
     *  SignalConversion generated from: '<S3>/PtcArbInitWhlTrqReq'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqPotential_Value
        (rtb_TmpSignalConversionAtSFun_m[0]);

    /* Outputs for Atomic SubSystem: '<S3>/Driver_Demand' */
    /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMax' incorporates:
     *  Inport: '<S80>/FullPedalAxlTorqFiltd'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMax'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMax_Value(VeDTRR_M_FullPedalAxlTorqFiltd);

    /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */
    /* End of Outputs for SubSystem: '<S3>/Driver_Demand' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMaxFA' incorporates:
     *  Constant: '<S4>/Constant5'
     *  Gain: '<S731>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMaxFA'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMaxFA_Value(0.0F);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Driver_Demand' */
    /* Outputs for Atomic SubSystem: '<S8>/ArbitrationTorque' */
    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMin' incorporates:
     *  Inport: '<S80>/ZeroPedalAxlTorqFiltd'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMin'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMin_Value(VeDTRR_M_ZeroPedalAxlTorqFiltd);

    /* End of Outputs for SubSystem: '<S8>/ArbitrationTorque' */
    /* End of Outputs for SubSystem: '<S3>/Driver_Demand' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMinFA' incorporates:
     *  Constant: '<S4>/Constant4'
     *  Gain: '<S761>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqMinFA'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMinFA_Value(0.0F);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqPrdt'
     *  SignalConversion generated from: '<S3>/PtcArbInitWhlTrqReq'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_Value
        (rtb_TmpSignalConversionAtSFun_m[0]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf' incorporates:
     *  Gain: '<S749>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf_Value
        (rtb_TmpSignalConversionAtSFun_m[1]);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/PwtArbitrationSlw' */
    /* Switch: '<S10>/switch3' incorporates:
     *  Constant: '<S706>/Calib'
     */
    if (KeDTRR_b_enablLv2RedPerf)
    {
        /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xSEM' incorporates:
         *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqPrdt_xSEM'
         */
        (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_xSEM_Value
            (rtb_TmpSignalConversionAtSFun_m[0]);
    }
    else
    {
        /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xSEM' incorporates:
         *  SignalConversion generated from: '<S1>/VeDTRR_M_AxleTrqReqPrdt_xSEM'
         */
        (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_xSEM_Value
            (rtb_TmpSignalConversionAtSFun_m[1]);
    }

    /* End of Switch: '<S10>/switch3' */
    /* End of Outputs for SubSystem: '<S3>/PwtArbitrationSlw' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_M_DrvLnTrqRqMod_Axle' incorporates:
     *  Gain: '<S748>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_DrvLnTrqRqMod_Axle'
     */
    (void)Rte_Write_VeDTRR_M_DrvLnTrqRqMod_Axle_Value(VeDTRR_M_DrvLnTrqRqMod);

    /* Outport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrq' incorporates:
     *  Gain: '<S744>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_DrvrIntndedAxleTrq'
     */
    (void)Rte_Write_VeDTRR_M_DrvrIntndedAxleTrq_Value
        (rtb_TmpSignalConversionAtVeAPSR);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/PwtArbitrationSlw' */
    /* Outport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrqRaw' incorporates:
     *  Inport: '<S10>/DrvrIntndedAxleTrqRaw_Lv2RedPerf'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_DrvrIntndedAxleTrqRaw'
     */
    (void)Rte_Write_VeDTRR_M_DrvrIntndedAxleTrqRaw_Value
        (VaDTRR_M_DrvrIntndedAxleTorqRaw[1]);

    /* End of Outputs for SubSystem: '<S3>/PwtArbitrationSlw' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_M_MgateMinTrq' incorporates:
     *  Gain: '<S737>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_MgateMinTrq'
     */
    (void)Rte_Write_VeDTRR_M_MgateMinTrq_Value(switch5[1]);

    /* Outport: '<Root>/VeDTRR_M_NormalMinStgc' incorporates:
     *  Gain: '<S736>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_NormalMinStgc'
     */
    (void)Rte_Write_VeDTRR_M_NormalMinStgc_Value(switch5[1]);

    /* Outport: '<Root>/VeDTRR_M_NormalMinTrq' incorporates:
     *  Gain: '<S722>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_NormalMinTrq'
     */
    (void)Rte_Write_VeDTRR_M_NormalMinTrq_Value(switch5[1]);

    /* Outport: '<Root>/VeDTRR_M_PtcPdlMaxWhlTrq' incorporates:
     *  Gain: '<S741>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_M_PtcPdlMaxWhlTrq'
     */
    (void)Rte_Write_VeDTRR_M_PtcPdlMaxWhlTrq_Value(VeDTRC_M_PtcPdlMaxWhlTrq);

    /* Outport: '<Root>/VeDTRR_P_PtcPdlMaxPwr' incorporates:
     *  Gain: '<S728>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_P_PtcPdlMaxPwr'
     */
    (void)Rte_Write_VeDTRR_P_PtcPdlMaxPwr_Value(VeDTRR_P_PtcPdlMaxPwr_Out);

    /* Outport: '<Root>/VeDTRR_P_PtcPdlMinPwr' incorporates:
     *  Gain: '<S729>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_P_PtcPdlMinPwr'
     */
    (void)Rte_Write_VeDTRR_P_PtcPdlMinPwr_Value(VeDTRR_P_PtcPdlMinPwr_Out);

    /* Outport: '<Root>/VeDTRR_P_PtcPdlPwrReq' incorporates:
     *  Gain: '<S727>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_P_PtcPdlPwrReq'
     */
    (void)Rte_Write_VeDTRR_P_PtcPdlPwrReq_Value(VeDTRR_P_PtcPdlPwrReq_Out);

    /* Outport: '<Root>/VeDTRR_Pct_AccelPdlVirtActPosn' incorporates:
     *  Gain: '<S739>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_Pct_AccelPdlVirtActPosn'
     */
    (void)Rte_Write_VeDTRR_Pct_AccelPdlVirtActPosn_Value
        (VeDTRR_Pct_LV1LV2AccelPdlVirtActPosn);

    /* Outport: '<Root>/VeDTRR_Pct_PdlPctTrq' incorporates:
     *  Gain: '<S740>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_Pct_PdPctTrq'
     */
    (void)Rte_Write_VeDTRR_Pct_PdlPctTrq_Value(rtb_Switch_km);

    /* Outport: '<Root>/VeDTRR_b_ACCTrqEnabled' incorporates:
     *  Gain: '<S752>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_ACCTrqEnabled'
     */
    (void)Rte_Write_VeDTRR_b_ACCTrqEnabled_Value(Equal);

    /* Outport: '<Root>/VeDTRR_b_ACC_Engaged' incorporates:
     *  Gain: '<S760>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_ACC_Engaged'
     */
    (void)Rte_Write_VeDTRR_b_ACC_Engaged_Value(rtb_Logical2);

    /* Outport: '<Root>/VeDTRR_b_AxleTrqPotentialFA' incorporates:
     *  Constant: '<S4>/Constant3'
     *  Gain: '<S725>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_AxleTrqPotentialFA'
     */
    (void)Rte_Write_VeDTRR_b_AxleTrqPotentialFA_Value(false);

    /* Outport: '<Root>/VeDTRR_b_AxleTrqReqPrdtFA' incorporates:
     *  Constant: '<S4>/Constant2'
     *  Gain: '<S732>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_AxleTrqReqPrdtFA'
     */
    (void)Rte_Write_VeDTRR_b_AxleTrqReqPrdtFA_Value(false);

    /* Outport: '<Root>/VeDTRR_b_AxleTrqReqPrdt_xSEMFA' incorporates:
     *  Constant: '<S4>/Constant7'
     *  Gain: '<S733>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_AxleTrqReqPrdt_xSEMFA'
     */
    (void)Rte_Write_VeDTRR_b_AxleTrqReqPrdt_xSEMFA_Value(false);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Pedal_Percent' */
    /* Outport: '<Root>/VeDTRR_b_DrvMdPwrLim' incorporates:
     *  Logic: '<S133>/Logical Operator2'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_DrvMdPwrLim'
     */
    (void)Rte_Write_VeDTRR_b_DrvMdPwrLim_Value(rtb_AND_gli &&
        (rtb_TmpSignalConversionAtGainIn[3]));

    /* End of Outputs for SubSystem: '<S9>/Pedal_Percent' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' incorporates:
     *  Constant: '<S4>/Constant1'
     *  Gain: '<S730>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_DrvrIntndedAxleTrqRawFA'
     */
    (void)Rte_Write_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value(false);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outport: '<Root>/VeDTRR_b_EngTrqEnblRqDAS' incorporates:
     *  Logic: '<S11>/Logical2'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_EngTrqEnblRqDAS'
     */
    (void)Rte_Write_VeDTRR_b_EngTrqEnblRqDAS_Value(rtb_AND_au);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_b_Lv2RdPrfmActive' incorporates:
     *  Gain: '<S750>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_Lv2RdPrfmActive'
     */
    (void)Rte_Write_VeDTRR_b_Lv2RdPrfmActive_Value(VeDTRC_b_Lv2RdPrfmActive);

    /* Outport: '<Root>/VeDTRR_b_OPDInhibit_HMI' incorporates:
     *  Gain: '<S738>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_OPDInhibit_HMI'
     */
    (void)Rte_Write_VeDTRR_b_OPDInhibit_HMI_Value(VeDTRC_b_OPDInhibit_HMI);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Pedal_Mapping' */
    /* Outputs for Atomic SubSystem: '<S9>/Min_Torque' */
    /* Outputs for Atomic SubSystem: '<S132>/Min_Wheel_Torque' */
    /* Outport: '<Root>/VeDTRR_b_OPD_Active' incorporates:
     *  Logic: '<S185>/Logical2'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_OPD_Active'
     */
    (void)Rte_Write_VeDTRR_b_OPD_Active_Value(rtb_TmpSignalConversionAtVeDMIR);

    /* End of Outputs for SubSystem: '<S132>/Min_Wheel_Torque' */
    /* End of Outputs for SubSystem: '<S9>/Min_Torque' */
    /* End of Outputs for SubSystem: '<S3>/Pedal_Mapping' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_b_OPD_Selection' incorporates:
     *  Gain: '<S742>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_OPD_Selection'
     */
    (void)Rte_Write_VeDTRR_b_OPD_Selection_Value(VeDTRC_b_OPD_SelectionFinal);

    /* Outport: '<Root>/VeDTRR_b_PPPATrqEnabled' incorporates:
     *  Gain: '<S753>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_PPPATrqEnabled'
     */
    (void)Rte_Write_VeDTRR_b_PPPATrqEnabled_Value(Equal3);

    /* Outport: '<Root>/VeDTRR_b_PtcCcDriverOverride' incorporates:
     *  Gain: '<S751>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_PtcCcDriverOverride'
     */
    (void)Rte_Write_VeDTRR_b_PtcCcDriverOverride_Value(rtb_Logical6);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/Driver_Demand' */
    /* Outport: '<Root>/VeDTRR_b_PtcPdlInChrgVsCC' incorporates:
     *  Constant: '<S87>/Constant Value2'
     *  Logic: '<S87>/Logical7'
     *  RelationalOperator: '<S87>/Comparison6'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_PtcPdlInChrgVsCC'
     */
    (void)Rte_Write_VeDTRR_b_PtcPdlInChrgVsCC_Value((rtb_Gain_ki &&
        rtb_TmpSignalConversionAtVeCC_i) && (rtb_TmpSignalConversionAtVeA_ev >
        0.0F));

    /* End of Outputs for SubSystem: '<S3>/Driver_Demand' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_b_PtcPedal_WOT' incorporates:
     *  Gain: '<S726>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_PtcPedal_WOT'
     */
    (void)Rte_Write_VeDTRR_b_PtcPedal_WOT_Value(rtb_Switch1_h);

    /* Outport: '<Root>/VeDTRR_b_RRCCTrqEnabled' incorporates:
     *  Gain: '<S755>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_RCCTrqEnabled'
     */
    (void)Rte_Write_VeDTRR_b_RRCCTrqEnabled_Value(Equal2);

    /* Outport: '<Root>/VeDTRR_b_SSCTrqEnabled' incorporates:
     *  Gain: '<S754>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_SSCTrqEnabled'
     */
    (void)Rte_Write_VeDTRR_b_SSCTrqEnabled_Value(rtb_NotEqual_ff);

    /* Outport: '<Root>/VeDTRR_b_SumFWIDFstFA' incorporates:
     *  Constant: '<S4>/Constant6'
     *  Gain: '<S735>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_SumFWIDFstFA'
     */
    (void)Rte_Write_VeDTRR_b_SumFWIDFstFA_Value(false);

    /* Outport: '<Root>/VeDTRR_b_VehStndStillReq_OPD' incorporates:
     *  Gain: '<S759>/Gain'
     *  SignalConversion generated from: '<S1>/VeDTRR_b_VehStndStillReq_OPD'
     */
    (void)Rte_Write_VeDTRR_b_VehStndStillReq_OPD_Value
        (VeDTRC_b_VehStndStillReqOPD);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/PwtArbitrationSlw' */
    /* Outputs for Atomic SubSystem: '<S10>/AxleTrq_Resp_Type' */
    /* Switch: '<S703>/switch' incorporates:
     *  Constant: '<S709>/Constant'
     *  Constant: '<S712>/Constant'
     *  Logic: '<S703>/Logical1'
     */
    if ((rtb_TmpSignalConversionAtVeBR_k || tmpRead_3) || tmpRead_4)
    {
        tmpRead_k = CePTAR_e_PleasibilityLimited;
    }
    else
    {
        tmpRead_k = CePTAR_e_Inactive;
    }

    /* Outport: '<Root>/VeDTRR_e_AxleTrqRespType' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTRR_e_AxleTrqRespType'
     *  Switch: '<S703>/switch'
     */
    (void)Rte_Write_VeDTRR_e_AxleTrqRespType_Value(tmpRead_k);

    /* End of Outputs for SubSystem: '<S10>/AxleTrq_Resp_Type' */
    /* End of Outputs for SubSystem: '<S3>/PwtArbitrationSlw' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_e_DrvMdActv' incorporates:
     *  DataTypeConversion: '<S716>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTRR_e_DrvMdActv'
     *  VariantMerge generated from: '<S133>/Variant_Source2'
     */
    (void)Rte_Write_VeDTRR_e_DrvMdActv_Value
        (DTRR_ac_B.VariantMerge_For_Variant_Source);

    /* Outport: '<Root>/VeDTRR_e_OPD_HMI' incorporates:
     *  DataTypeConversion: '<S720>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTRR_e_OPD_HMI'
     *  Switch: '<S359>/Switch4'
     */
    (void)Rte_Write_VeDTRR_e_OPD_HMI_Value(Switch4);

    /* Outport: '<Root>/VeDTRR_e_OPD_Sts' incorporates:
     *  DataTypeConversion: '<S719>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTRR_e_OPD_Sts'
     *  Switch: '<S359>/Switch'
     */
    (void)Rte_Write_VeDTRR_e_OPD_Sts_Value(Switch);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRC'
     */
    /* Outputs for Atomic SubSystem: '<S3>/PwtArbitrationSlw' */
    /* Outputs for Atomic SubSystem: '<S10>/AxleTrq_Resp_Type' */
    /* Switch: '<S703>/switch1' incorporates:
     *  Constant: '<S710>/Constant'
     *  Constant: '<S711>/Constant'
     *  Logic: '<S703>/Logical2'
     */
    if (tmpRead_9 || tmpRead_a)
    {
        tmpRead_k = CePTAR_e_PleasibilityLimited;
    }
    else
    {
        tmpRead_k = CePTAR_e_Inactive;
    }

    /* Outport: '<Root>/VeDTRR_e_RrAxleTrqRespType' incorporates:
     *  SignalConversion generated from: '<S1>/VeDTRR_e_RrAxleTrqRespType'
     *  Switch: '<S703>/switch1'
     */
    (void)Rte_Write_VeDTRR_e_RrAxleTrqRespType_Value(tmpRead_k);

    /* End of Outputs for SubSystem: '<S10>/AxleTrq_Resp_Type' */
    /* End of Outputs for SubSystem: '<S3>/PwtArbitrationSlw' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DTRO'
     */
    /* Outport: '<Root>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Constant: '<S721>/Constant'
     *  DataTypeConversion: '<S714>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTRR_e_SumFWIDFst'
     */
    (void)Rte_Write_VeDTRR_e_SumFWIDFst_Value(CeDTRR_e_Pedal_Cruise);

    /* Outport: '<Root>/VeDTRR_e_SumFWIDSlw' incorporates:
     *  Constant: '<S721>/Constant'
     *  DataTypeConversion: '<S715>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTRR_e_SumFWIDSlw'
     */
    (void)Rte_Write_VeDTRR_e_SumFWIDSlw_Value(CeDTRR_e_Pedal_Cruise);

    /* Outport: '<Root>/VeDTRR_e_eCreepSts' incorporates:
     *  DataTypeConversion: '<S717>/DataTypeConversion'
     *  SignalConversion generated from: '<S1>/VeDTRR_e_eCreepSts'
     *  Switch: '<S273>/switch10'
     */
    (void)Rte_Write_VeDTRR_e_eCreepSts_Value(VeDTRR_e_eCreepStatus);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/FastTEF' */
}

/* Output function */
FUNC(void, DTRR_CODE) DTRR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S762>/VeDTRR_P_PtcPdlMinPwr_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_P_PtcPdl = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_P_PtcPdlMaxPwr_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_P_PtcP_i = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_P_PtcPdlPwrReq_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_P_PtcP_a = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_PtcPedal_WOT_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_PtcPed = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqMax_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_AxleTr = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqMin_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_m = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_DrvrIntndedAxleTrqRaw_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_DrvrIn = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_PtcCcDriverOverride_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_PtcCcD = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqPrdt_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_j = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqPrdt_xSEM_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axl_mx = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqPotential_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_n = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_AxleTrqRespType_Out_Init' incorporates:
     *  Constant: '<S762>/Const12'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_AxleTr = DTRR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_SumFWIDFst_Out_Init' incorporates:
     *  Constant: '<S762>/Const13'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_SumFWI = DTRR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_SumFWIDSlw_Out_Init' incorporates:
     *  Constant: '<S762>/Const14'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_SumF_k = DTRR_ac_ConstB.Const14;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_NormalMinTrq_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Normal = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqMinFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_k = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqMaxFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_a = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_DrvrIntndedAxleTrqRawFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_DrvrIn = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_AxleTrqReqPrdtFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_AxleTr = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_AxleTrqPotentialFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_Axle_e = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_SumFWIDFstFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_SumFWI = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_AxleTrqReqPrdt_xSEMFA_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_Axle_n = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_VehStndStillReq_OPD_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_VehStn = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_OPD_Active_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_OPD_Ac = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_NormalMinStgc_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Norm_b = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_MgateMinTrq_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_MgateM = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_OPDInhibit_HMI_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_OPDInh = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_Pct_AccelPdlVirtActPosn_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_Pct_Acce = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_Pct_PdlPctTrq_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_Pct_PdlP = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_PtcPdlMaxWhlTrq_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_PtcPdl = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_OPD_Selection_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_OPD_Se = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_EngTrqEnblRqDAS_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_EngTrq = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_DrvrIntndedAxleTrq_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Drvr_o = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_PtcPdlInChrgVsCC_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_PtcPdl = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_ACC_Engaged_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_ACC_En = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_DrvMdActv_Out_Init' incorporates:
     *  Constant: '<S762>/Const36'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_DrvMdA = DTRR_ac_ConstB.Const36;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_DrvMdPwrLim_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_DrvMdP = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_eCreepSts_Out_Init' incorporates:
     *  Constant: '<S762>/Const38'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_eCreep = DTRR_ac_ConstB.Const38;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_RrAxleTrqRespType_Out_Init' incorporates:
     *  Constant: '<S762>/Const39'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_RrAxle = DTRR_ac_ConstB.Const39;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_Lv2RdPrfmActive_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_Lv2RdP = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_Axl_a3 = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_M_DrvLnTrqRqMod_Axle_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_M_DrvLnT = 0.0F;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_SSCTrqEnabled_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_SSCTrq = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_RRCCTrqEnabled_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_RRCCTr = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_ACCTrqEnabled_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_ACCTrq = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_b_PPPATrqEnabled_Out_Init' */
    DTRR_ac_B.OutportBufferForVeDTRR_b_PPPATr = false;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_OPD_Sts_Out_Init' incorporates:
     *  Constant: '<S762>/Const47'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_OPD_St = DTRR_ac_ConstB.Const47;

    /* SignalConversion generated from: '<S762>/VeDTRR_e_OPD_HMI_Out_Init' incorporates:
     *  Constant: '<S762>/Constant'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_OPD_HM = DTRR_ac_ConstB.Constant;

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeDTRR_M_AxleTrqPotential' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqPotential_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqPotential_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_n);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMaxFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqMaxFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMaxFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_a);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMax' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqMax_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMax_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_AxleTr);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMinFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqMinFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMinFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_k);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqMin' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqMin_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqMin_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_m);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqPrdt_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axle_j);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_xLv2RedPerf_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axl_a3);

    /* Outport: '<Root>/VeDTRR_M_AxleTrqReqPrdt_xSEM' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_AxleTrqReqPrdt_xSEM_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_AxleTrqReqPrdt_xSEM_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Axl_mx);

    /* Outport: '<Root>/VeDTRR_M_DrvLnTrqRqMod_Axle' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_DrvLnTrqRqMod_Axle_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_DrvLnTrqRqMod_Axle_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_DrvLnT);

    /* Outport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrqRaw' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_DrvrIntndedAxleTrqRaw_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_DrvrIntndedAxleTrqRaw_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_DrvrIn);

    /* Outport: '<Root>/VeDTRR_M_DrvrIntndedAxleTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_DrvrIntndedAxleTrq_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_DrvrIntndedAxleTrq_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Drvr_o);

    /* Outport: '<Root>/VeDTRR_M_MgateMinTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_MgateMinTrq_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_MgateMinTrq_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_MgateM);

    /* Outport: '<Root>/VeDTRR_M_NormalMinStgc' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_NormalMinStgc_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_NormalMinStgc_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Norm_b);

    /* Outport: '<Root>/VeDTRR_M_NormalMinTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_NormalMinTrq_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_NormalMinTrq_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_Normal);

    /* Outport: '<Root>/VeDTRR_M_PtcPdlMaxWhlTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_M_PtcPdlMaxWhlTrq_Out_Init'
     */
    (void)Rte_Write_VeDTRR_M_PtcPdlMaxWhlTrq_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_M_PtcPdl);

    /* Outport: '<Root>/VeDTRR_P_PtcPdlMaxPwr' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_P_PtcPdlMaxPwr_Out_Init'
     */
    (void)Rte_Write_VeDTRR_P_PtcPdlMaxPwr_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_P_PtcP_i);

    /* Outport: '<Root>/VeDTRR_P_PtcPdlMinPwr' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_P_PtcPdlMinPwr_Out_Init'
     */
    (void)Rte_Write_VeDTRR_P_PtcPdlMinPwr_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_P_PtcPdl);

    /* Outport: '<Root>/VeDTRR_P_PtcPdlPwrReq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_P_PtcPdlPwrReq_Out_Init'
     */
    (void)Rte_Write_VeDTRR_P_PtcPdlPwrReq_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_P_PtcP_a);

    /* Outport: '<Root>/VeDTRR_Pct_AccelPdlVirtActPosn' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_Pct_AccelPdlVirtActPosn_Out_Init'
     */
    (void)Rte_Write_VeDTRR_Pct_AccelPdlVirtActPosn_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_Pct_Acce);

    /* Outport: '<Root>/VeDTRR_Pct_PdlPctTrq' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_Pct_PdlPctTrq_Out_Init'
     */
    (void)Rte_Write_VeDTRR_Pct_PdlPctTrq_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_Pct_PdlP);

    /* Outport: '<Root>/VeDTRR_b_ACCTrqEnabled' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_ACCTrqEnabled_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_ACCTrqEnabled_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_ACCTrq);

    /* Outport: '<Root>/VeDTRR_b_ACC_Engaged' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_ACC_Engaged_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_ACC_Engaged_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_ACC_En);

    /* Outport: '<Root>/VeDTRR_b_AxleTrqPotentialFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_AxleTrqPotentialFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_AxleTrqPotentialFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_Axle_e);

    /* Outport: '<Root>/VeDTRR_b_AxleTrqReqPrdtFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_AxleTrqReqPrdtFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_AxleTrqReqPrdtFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_AxleTr);

    /* Outport: '<Root>/VeDTRR_b_AxleTrqReqPrdt_xSEMFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_AxleTrqReqPrdt_xSEMFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_AxleTrqReqPrdt_xSEMFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_Axle_n);

    /* Outport: '<Root>/VeDTRR_b_DrvMdPwrLim' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_DrvMdPwrLim_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_DrvMdPwrLim_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_DrvMdP);

    /* Outport: '<Root>/VeDTRR_b_DrvrIntndedAxleTrqRawFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_DrvrIntndedAxleTrqRawFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_DrvrIntndedAxleTrqRawFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_DrvrIn);

    /* Outport: '<Root>/VeDTRR_b_EngTrqEnblRqDAS' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_EngTrqEnblRqDAS_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_EngTrqEnblRqDAS_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_EngTrq);

    /* Outport: '<Root>/VeDTRR_b_Lv2RdPrfmActive' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_Lv2RdPrfmActive_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_Lv2RdPrfmActive_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_Lv2RdP);

    /* Outport: '<Root>/VeDTRR_b_OPDInhibit_HMI' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_OPDInhibit_HMI_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_OPDInhibit_HMI_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_OPDInh);

    /* Outport: '<Root>/VeDTRR_b_OPD_Active' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_OPD_Active_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_OPD_Active_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_OPD_Ac);

    /* Outport: '<Root>/VeDTRR_b_OPD_Selection' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_OPD_Selection_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_OPD_Selection_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_OPD_Se);

    /* Outport: '<Root>/VeDTRR_b_PPPATrqEnabled' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_PPPATrqEnabled_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_PPPATrqEnabled_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_PPPATr);

    /* Outport: '<Root>/VeDTRR_b_PtcCcDriverOverride' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_PtcCcDriverOverride_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_PtcCcDriverOverride_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_PtcCcD);

    /* Outport: '<Root>/VeDTRR_b_PtcPdlInChrgVsCC' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_PtcPdlInChrgVsCC_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_PtcPdlInChrgVsCC_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_PtcPdl);

    /* Outport: '<Root>/VeDTRR_b_PtcPedal_WOT' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_PtcPedal_WOT_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_PtcPedal_WOT_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_PtcPed);

    /* Outport: '<Root>/VeDTRR_b_RRCCTrqEnabled' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_RRCCTrqEnabled_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_RRCCTrqEnabled_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_RRCCTr);

    /* Outport: '<Root>/VeDTRR_b_SSCTrqEnabled' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_SSCTrqEnabled_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_SSCTrqEnabled_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_SSCTrq);

    /* Outport: '<Root>/VeDTRR_b_SumFWIDFstFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_SumFWIDFstFA_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_SumFWIDFstFA_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_SumFWI);

    /* Outport: '<Root>/VeDTRR_b_VehStndStillReq_OPD' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_b_VehStndStillReq_OPD_Out_Init'
     */
    (void)Rte_Write_VeDTRR_b_VehStndStillReq_OPD_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_b_VehStn);

    /* Outport: '<Root>/VeDTRR_e_AxleTrqRespType' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_AxleTrqRespType_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_AxleTrqRespType_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_AxleTrqRespType_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_AxleTr);

    /* Outport: '<Root>/VeDTRR_e_DrvMdActv' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_DrvMdActv_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_DrvMdActv_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_DrvMdActv_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_DrvMdA);

    /* Outport: '<Root>/VeDTRR_e_OPD_HMI' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_OPD_HMI_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_OPD_HMI_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_OPD_HMI_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_OPD_HM);

    /* Outport: '<Root>/VeDTRR_e_OPD_Sts' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_OPD_Sts_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_OPD_Sts_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_OPD_Sts_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_OPD_St);

    /* Outport: '<Root>/VeDTRR_e_RrAxleTrqRespType' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_RrAxleTrqRespType_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_RrAxleTrqRespType_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_RrAxleTrqRespType_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_RrAxle);

    /* Outport: '<Root>/VeDTRR_e_SumFWIDFst' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_SumFWIDFst_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_SumFWIDFst_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_SumFWIDFst_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_SumFWI);

    /* Outport: '<Root>/VeDTRR_e_SumFWIDSlw' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_SumFWIDSlw_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_SumFWIDSlw_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_SumFWIDSlw_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_SumF_k);

    /* Outport: '<Root>/VeDTRR_e_eCreepSts' incorporates:
     *  SignalConversion generated from: '<S2>/VeDTRR_e_eCreepSts_Out_Init'
     *  SignalConversion generated from: '<S762>/VeDTRR_e_eCreepSts_Out_Init'
     */
    (void)Rte_Write_VeDTRR_e_eCreepSts_Value
        (DTRR_ac_B.OutportBufferForVeDTRR_e_eCreep);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, DTRR_CODE) DTRR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DTRR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_AxleTrqRespType_Out_Init' incorporates:
     *  Constant: '<S762>/Const12'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_AxleTr = DTRR_ac_ConstB.Const12;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_SumFWIDFst_Out_Init' incorporates:
     *  Constant: '<S762>/Const13'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_SumFWI = DTRR_ac_ConstB.Const13;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_SumFWIDSlw_Out_Init' incorporates:
     *  Constant: '<S762>/Const14'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_SumF_k = DTRR_ac_ConstB.Const14;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_DrvMdActv_Out_Init' incorporates:
     *  Constant: '<S762>/Const36'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_DrvMdA = DTRR_ac_ConstB.Const36;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_eCreepSts_Out_Init' incorporates:
     *  Constant: '<S762>/Const38'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_eCreep = DTRR_ac_ConstB.Const38;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_RrAxleTrqRespType_Out_Init' incorporates:
     *  Constant: '<S762>/Const39'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_RrAxle = DTRR_ac_ConstB.Const39;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_OPD_Sts_Out_Init' incorporates:
     *  Constant: '<S762>/Const47'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_OPD_St = DTRR_ac_ConstB.Const47;

    /* SystemInitialize for SignalConversion generated from: '<S762>/VeDTRR_e_OPD_HMI_Out_Init' incorporates:
     *  Constant: '<S762>/Constant'
     */
    DTRR_ac_B.OutportBufferForVeDTRR_e_OPD_HM = DTRR_ac_ConstB.Constant;

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_AxleTrqRespType' incorporates:
     *  Merge: '<Root>/Merge_Outport_12'
     */
    (void)Rte_Write_VeDTRR_e_AxleTrqRespType_Value(CePTAR_e_Inactive);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_SumFWIDFst' incorporates:
     *  Merge: '<Root>/Merge_Outport_13'
     */
    (void)Rte_Write_VeDTRR_e_SumFWIDFst_Value(CeDTRR_e_Potential);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_SumFWIDSlw' incorporates:
     *  Merge: '<Root>/Merge_Outport_14'
     */
    (void)Rte_Write_VeDTRR_e_SumFWIDSlw_Value(CeDTRR_e_Potential);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_DrvMdActv' incorporates:
     *  Merge: '<Root>/Merge_Outport_36'
     */
    (void)Rte_Write_VeDTRR_e_DrvMdActv_Value(CeDMIR_e_Normal);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_eCreepSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_38'
     */
    (void)Rte_Write_VeDTRR_e_eCreepSts_Value(CeDTRR_e_Off);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_RrAxleTrqRespType' incorporates:
     *  Merge: '<Root>/Merge_Outport_39'
     */
    (void)Rte_Write_VeDTRR_e_RrAxleTrqRespType_Value(CePTAR_e_Inactive);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_OPD_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_47'
     */
    (void)Rte_Write_VeDTRR_e_OPD_Sts_Value(CeDTRR_e_Available);

    /* SystemInitialize for Outport: '<Root>/VeDTRR_e_OPD_HMI' incorporates:
     *  Merge: '<Root>/Merge_Outport_48'
     */
    (void)Rte_Write_VeDTRR_e_OPD_HMI_Value(CeDTRR_e_Available);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
