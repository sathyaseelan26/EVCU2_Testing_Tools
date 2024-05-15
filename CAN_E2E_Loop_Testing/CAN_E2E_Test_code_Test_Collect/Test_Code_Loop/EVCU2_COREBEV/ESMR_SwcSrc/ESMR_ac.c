/*
 * File: ESMR_ac.c
 *
 * Code generated for Simulink model 'ESMR_ac'.
 *
 * Model version                  : 9.144
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:38:56 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ESMR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look2_iflf_binlca_16a.h"

/* Named constants for Chart: '<S530>/LT_PL_Aribitration' */
#define ESMR_ac_IN_BatPackExtTermPwrLim ((uint8)1U)
#define ESMR_ac_IN_BatPackLongTermPwrLim ((uint8)2U)
#define IN_VeESMR_Cnt_CounterSigMonitoredBPETPwr ((uint8)3U)
#define IN_VeESMR_Cnt_CounterSigMonitoredBPLTPwr ((uint8)4U)

/* user code (top of source file) */
//////////////////////////////////////////////////////////////////////////////////////
//
// This is the production code generation configuration for R2016a.
//
// PROD Model Config Ver#16a.2 6 28 2018
//
//////////////////////////////////////////////////////////////////////////////////////

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_ESMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Cnt_ChrgPL_HLAlwdCnt =
    10.0F;                             /* Referenced by: '<S520>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Cnt_ChrgPL_RecoveryCnt =
    10.0F;                             /* Referenced by: '<S521>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Cnt_DschrgPL_HLAlwdCnt =
    10.0F;                             /* Referenced by: '<S554>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Cnt_DschrgPL_RecoveryCnt =
    10.0F;                             /* Referenced by: '<S555>/Calib' */
static volatile CONST(uint16, ESMR_VAR_INIT) KeESMR_Cnt_HVBatPL_InitDelay = 2U;/* Referenced by: '<S728>/Calib' */
static volatile CONST(uint16, ESMR_VAR_INIT) KeESMR_Cnt_LimpDebounce = 2U;/* Referenced by: '<S42>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(uint16, ESMR_VAR_INIT) KeESMR_Cnt_OV_Actv_Dbnc = 10U;/* Referenced by: '<S153>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_I_HV_BatCurrArbOvrd = 0.0F;/* Referenced by: '<S661>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_K_CellVoltFilter = 0.1F;/* Referenced by: '<S170>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_M_CmndPrdtAxleTorqOvrd =
    0.0F;                              /* Referenced by: '<S662>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_M_RevGradePwrTorqLSP =
    40.0F;                             /* Referenced by: '<S713>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_M_RevGradePwrTorqRSP =
    50.0F;                             /* Referenced by: '<S714>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BPCM_ChrgLimLT_Ovrd =
    -33.0F;                            /* Referenced by: '<S514>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BPCM_ChrgLimST_Ovrd =
    -33.0F;                            /* Referenced by: '<S331>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BPCM_DschrgLimLT_Ovrd =
    33.0F;                             /* Referenced by: '<S548>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BPCM_DschrgLimST_Ovrd =
    33.0F;                             /* Referenced by: '<S377>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BPCM_DschrgPwrLimLT_Ovrd =
    50.0F;                             /* Referenced by: '<S540>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatBE_FinalMinChrgLim =
    0.0F;                              /* Referenced by: '<S729>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatEV_MaxLimInit = 20.0F;/* Referenced by: '<S765>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatEV_MinLimInit = -20.0F;/* Referenced by: '<S766>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatEngyUsageInit = 2.0F;/* Referenced by: '<S767>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatEstd_ChrgPwrLim =
    -31.0F;                            /* Referenced by: '<S400>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatEstd_DschrgPwrLim =
    31.0F;                             /* Referenced by: '<S401>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatLT_FinalMaxDschrgLim =
    0.0F;                              /* Referenced by: '<S730>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatLT_FinalMinChrgLim =
    0.0F;                              /* Referenced by: '<S731>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatLT_MaxLimInit = 20.0F;/* Referenced by:
                                                                      * '<S593>/Calib'
                                                                      * '<S752>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatLT_MinLimInit = -20.0F;/* Referenced by:
                                                                      * '<S594>/Calib'
                                                                      * '<S753>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatST_FinalMaxDschrgLim =
    0.0F;                              /* Referenced by: '<S732>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatST_FinalMinChrgLim =
    0.0F;                              /* Referenced by: '<S733>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatST_MaxLimInit = 20.0F;/* Referenced by:
                                                                      * '<S595>/Calib'
                                                                      * '<S754>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BatST_MinLimInit = -20.0F;/* Referenced by:
                                                                      * '<S596>/Calib'
                                                                      * '<S755>/Calib'
                                                                      */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BattRsrvdPwr = 25.0F;/* Referenced by: '<S626>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Init = 0.0F;/* Referenced by: '<S757>/Calib' */

#if !Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_NF = -9999.0F;/* Referenced by: '<S293>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Init = 0.0F;/* Referenced by: '<S758>/Calib' */

#if !Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_NF = 9999.0F;/* Referenced by: '<S294>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Init = 0.0F;/* Referenced by: '<S759>/Calib' */

#if !Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_NF = -9999.0F;/* Referenced by: '<S295>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Init = 0.0F;/* Referenced by: '<S760>/Calib' */

#if !Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_NF = 9999.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_LTchrgPL_Default
    = -3.0F;                           /* Referenced by: '<S259>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_LTchrgPL_MN =
    -100.0F;                           /* Referenced by: '<S260>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_LTchrgPL_MX =
    0.0F;                              /* Referenced by: '<S261>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BstCnvtr_LTdschrgPL_Default = 3.0F;/* Referenced by: '<S262>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_LTdschrgPL_MN =
    0.0F;                              /* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_LTdschrgPL_MX =
    100.0F;                            /* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_STchrgPL_Default
    = -3.0F;                           /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_STchrgPL_MN =
    -100.0F;                           /* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_STchrgPL_MX =
    0.0F;                              /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_BstCnvtr_STdschrgPL_Default = 3.0F;/* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_STdschrgPL_MN =
    0.0F;                              /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_BstCnvtr_STdschrgPL_MX =
    100.0F;                            /* Referenced by: '<S270>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ChrgPwrLimLT_Def =
    -120.0F;                           /* Referenced by: '<S507>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ChrgPwrLimLT_Ovrd = 0.0F;/* Referenced by: '<S486>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ChrgPwrLimLT_ThrmlDerate =
    0.0F;                              /* Referenced by: '<S16>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ChrgPwrLimMM = -1.0F;/* Referenced by: '<S402>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ChrgPwrLimST_Def =
    -125.0F;                           /* Referenced by: '<S326>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ChrgPwrLimST_ThrmlDerate =
    -3.0F;                             /* Referenced by: '<S59>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ColdPowLimExpChrg = -8.5F;/* Referenced by:
                                                                      * '<S515>/Calib'
                                                                      * '<S332>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ColdPowLimExpDschrg =
    8.6F;                              /* Referenced by:
                                        * '<S549>/Calib'
                                        * '<S378>/Calib'
                                        */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_DschrgPwrLimLT_Def =
    120.0F;                            /* Referenced by: '<S541>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_DschrgPwrLimLT_ThrmlDerate = 0.0F;/* Referenced by: '<S17>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_DschrgPwrLimMM = 1.0F;/* Referenced by: '<S403>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_DschrgPwrLimST_Def =
    125.0F;                            /* Referenced by: '<S371>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_DschrgPwrLimST_ThrmlDerate = 3.0F;/* Referenced by: '<S60>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_FCMinPwr = 3.0F;/* Referenced by: '<S627>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_FCMinPwr2Bus_LT = 5.0F;/* Referenced by: '<S628>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_FCMinPwr2Bus_ST = 5.0F;/* Referenced by: '<S629>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_FCPS_Gen_Pwr_OvrdVal =
    0.0F;                              /* Referenced by:
                                        * '<S630>/Calib'
                                        * '<S663>/Calib'
                                        */
static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_FCPS_StarUp_PwrDmnd_OvrdVal = 0.0F;/* Referenced by:
                                                 * '<S631>/Calib'
                                                 * '<S664>/Calib'
                                                 */
static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_FC_Dschrg_PwrLim_LT_OvrdVal = 0.0F;/* Referenced by: '<S665>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT)
    KeESMR_P_FC_Dschrg_PwrLim_ST_OvrdVal = 0.0F;/* Referenced by: '<S666>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_FC_Max_Pwr_Default =
    9999.0F;                           /* Referenced by:
                                        * '<S101>/Calib'
                                        * '<S154>/Calib'
                                        */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_FC_Max_Pwr_Min = 0.0F;/* Referenced by: '<S155>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_HV_BatPwrOvrd = 0.0F;/* Referenced by: '<S667>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_LimpMax = 4.0F;/* Referenced by: '<S43>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_LimpMin = -4.0F;/* Referenced by: '<S44>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxChrgLimLT = -4.0F;/* Referenced by: '<S484>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxChrgLimST = -6.0F;/* Referenced by: '<S308>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxDschrgLimLT = 31.0F;/* Referenced by:
                                                                      * '<S456>/Calib'
                                                                      * '<S542>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxDschrgLimST = 33.0F;/* Referenced by:
                                                                      * '<S350>/Calib'
                                                                      * '<S372>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxMinDeltaBE = 2.0F;/* Referenced by: '<S404>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxMinDeltaLT = 2.0F;/* Referenced by:
                                                                      * '<S37>/Calib'
                                                                      * '<S45>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MaxMinDeltaST = 2.0F;/* Referenced by: '<S64>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_Max_LT_Chrg_PwrLmt =
    -500.0F;                           /* Referenced by: '<S604>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_Max_LT_DsChrg_PwrLmt =
    500.0F;                            /* Referenced by: '<S609>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_NoFunc

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_Max_ST_Chrg_PwrLmt =
    -500.0F;                           /* Referenced by: '<S614>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_Max_ST_DsChrg_PwrLmt =
    500.0F;                            /* Referenced by: '<S619>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MinChrgLimLT = -31.0F;/* Referenced by:
                                                                      * '<S485>/Calib'
                                                                      * '<S508>/Calib'
                                                                      */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MinChrgLimST = -33.0F;/* Referenced by: '<S309>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MinDschrgLimLT = 4.0F;/* Referenced by: '<S457>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_MinDschrgLimST = 6.0F;/* Referenced by: '<S351>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVCtrl_FC_D_Term = 5.0F;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVCtrl_FC_I_Term = 0.0F;/* Referenced by: '<S172>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVCtrl_FC_P_Term = 50.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVMaxITerm_FC = 60.0F;/* Referenced by: '<S174>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVMaxIntTerm = 57.0F;/* Referenced by: '<S123>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVMinITerm_FC = -60.0F;/* Referenced by: '<S175>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVMinIntTerm = -10.0F;/* Referenced by: '<S124>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_OVSTMinLim_Max = 1.0F;/* Referenced by: '<S105>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_PD_OV_OvrdVal = -4.0F;/* Referenced by: '<S106>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_PD_UV_OvrdVal = 4.0F;/* Referenced by: '<S183>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_PwrFallRateLimLT = -2.0F;/* Referenced by: '<S597>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_PwrFallRateLimST = -2.0F;/* Referenced by: '<S598>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_PwrRiseRateLimLT = 1.0F;/* Referenced by: '<S599>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_PwrRiseRateLimST = 1.0F;/* Referenced by: '<S600>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ST_MaxLim = 5.0F;/* Referenced by: '<S61>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_ST_MinLim = -5.0F;/* Referenced by: '<S62>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_UVMaxIntTerm = 10.0F;/* Referenced by: '<S200>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_UVMinIntTerm = -57.0F;/* Referenced by: '<S201>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_P_UVSTMaxLim_Min = -1.0F;/* Referenced by: '<S184>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_BattRsrvdSOC = 35.0F;/* Referenced by: '<S632>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_HV_SOCHi_LTPwr = 79.0F;/* Referenced by: '<S570>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_HV_SOCLo_LTPwr = 0.0F;/* Referenced by: '<S571>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_IP_SOCSetPt_Val = 35.0F;/* Referenced by: '<S240>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_LoSOC_ZeroLTPL = 22.4F;/* Referenced by: '<S576>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_LogisticsSOCSetPt_Val =
    35.0F;                             /* Referenced by: '<S241>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_Max_CSSOC = 50.0F;/* Referenced by: '<S242>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_RevGradePwrSOCLSP =
    25.0F;                             /* Referenced by: '<S715>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_Pct_RevGradePwrSOCRSP =
    59.0F;                             /* Referenced by: '<S716>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_T_BatTempHi_LTPwr = 65.0F;/* Referenced by: '<S572>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_T_BatTempLo_LTPwr = -30.0F;/* Referenced by: '<S573>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_T_ColdPowLimExpTemp =
    -30.0F;                            /* Referenced by:
                                        * '<S516>/Calib'
                                        * '<S550>/Calib'
                                        * '<S333>/Calib'
                                        * '<S379>/Calib'
                                        */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_T_RevGradePwrTempLSP =
    10.0F;                             /* Referenced by: '<S717>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_T_RevGradePwrTempRSP =
    20.0F;                             /* Referenced by: '<S718>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_BatVoltModMaxArbOvrd =
    14.8F;                             /* Referenced by: '<S223>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_BatVoltModMinArbOvrd =
    12.6F;                             /* Referenced by: '<S224>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_FCPS_LowerVoltLIM_OvrdVal
    = 0.0F;                            /* Referenced by: '<S668>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_FCPS_UpperVoltLIM_OvrdVal
    = 0.0F;                            /* Referenced by: '<S669>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_FCPS_Volt_OvrdVal = 0.0F;/* Referenced by: '<S670>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_HV_VoltOvrd = 340.0F;/* Referenced by: '<S671>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_MaxBatPackVolt = 390.0F;/* Referenced by: '<S768>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_MinBatPackVolt = 216.0F;/* Referenced by: '<S769>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVActvLimpHome = 15.75F;/* Referenced by: '<S87>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVHiLim = 20.0F;/* Referenced by: '<S116>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVITermDelta = 0.25F;/* Referenced by: '<S133>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVITermThsld = 0.0F;/* Referenced by: '<S134>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVLoLim = 15.0F;/* Referenced by: '<S117>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVPTermDelta = 0.25F;/* Referenced by: '<S142>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OVPTermThsld = 0.0F;/* Referenced by: '<S143>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OV_ActvTH_Final = 4.5F;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OV_ActvTH_Lvl1 = 3.9F;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OV_DeActvTH_Lvl1 = 3.8F;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_OV_Target = 3.7F;/* Referenced by: '<S159>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVActvLimpHome = 9.5F;/* Referenced by: '<S88>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVHiLim = 10.0F;/* Referenced by: '<S193>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVITermDelta = 0.25F;/* Referenced by: '<S208>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVITermThsld = 0.0F;/* Referenced by: '<S209>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVLoLim = 6.0F;/* Referenced by: '<S194>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVPTermDelta = 0.25F;/* Referenced by: '<S215>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_U_UVPTermThsld = 0.0F;/* Referenced by: '<S216>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_BE_MaxDschrgLim_DevCalMode = 0;/* Referenced by: '<S734>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BE_MinChrgLim_DevCalMode =
    0;                                 /* Referenced by: '<S735>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BPCM_ChrgLim2s_Ovrd = 0;/* Referenced by: '<S334>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BPCM_ChrgLimLT_Ovrd = 0;/* Referenced by: '<S517>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BPCM_ChrgLimST_Ovrd = 0;/* Referenced by: '<S335>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BPCM_DschrgLim2s_Ovrd = 0;/* Referenced by: '<S380>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BPCM_DschrgLimLT_Ovrd = 0;/* Referenced by: '<S551>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BPCM_DschrgLimST_Ovrd = 0;/* Referenced by: '<S381>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_BatVolt_Use12p5 = 1;/* Referenced by: '<S225>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_CmndPrdtAxleTorqOvrdEnbl =
    0;                                 /* Referenced by: '<S672>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_ColdPowLimExpEnbl = 0;/* Referenced by:
                                                                      * '<S518>/Calib'
                                                                      * '<S552>/Calib'
                                                                      * '<S336>/Calib'
                                                                      * '<S382>/Calib'
                                                                      */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_CurrOvrd = 0;/* Referenced by: '<S673>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_EnblLoSOC_ZeroLTPLSw = 0;/* Referenced by: '<S577>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_EngStartStopStOvrd = 0;/* Referenced by: '<S674>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_Gen_Pwr_FA_Ovrd = 0;/* Referenced by: '<S675>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_Gen_Pwr_FA_OvrdVal =
    0;                                 /* Referenced by: '<S676>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_Gen_Pwr_Ovrd = 0;/* Referenced by: '<S677>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_LowerVoltLIM_Ovrd =
    0;                                 /* Referenced by: '<S678>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FCPS_Lower_Voltage_LIM_FA_Ovrd = 0;/* Referenced by: '<S679>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FCPS_Lower_Voltage_LIM_FA_OvrdVal = 0;/* Referenced by: '<S680>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FCPS_StarUp_PwrDmnd_FA_Ovrd = 0;/* Referenced by: '<S681>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FCPS_StarUp_PwrDmnd_FA_OvrdVal = 0;/* Referenced by: '<S682>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_StarUp_PwrDmnd_Ovrd =
    0;                                 /* Referenced by: '<S683>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_UpperVoltLIM_Ovrd =
    0;                                 /* Referenced by: '<S684>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FCPS_Upper_Voltage_LIM_FA_Ovrd = 0;/* Referenced by: '<S685>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FCPS_Upper_Voltage_LIM_FA_OvrdVal = 0;/* Referenced by: '<S686>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_Volt_FA_Ovrd = 0;/* Referenced by: '<S687>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_Volt_FA_OvrdVal = 0;/* Referenced by: '<S688>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FCPS_Volt_Ovrd = 0;/* Referenced by: '<S689>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FC_Dschrg_PwrLim_LT_FA_Ovrd = 0;/* Referenced by: '<S690>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FC_Dschrg_PwrLim_LT_FA_OvrdVal = 0;/* Referenced by: '<S691>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FC_Dschrg_PwrLim_LT_Ovrd =
    0;                                 /* Referenced by: '<S692>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FC_Dschrg_PwrLim_ST_FA_Ovrd = 0;/* Referenced by: '<S693>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_FC_Dschrg_PwrLim_ST_FA_OvrdVal = 0;/* Referenced by: '<S694>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_FC_Dschrg_PwrLim_ST_Ovrd =
    0;                                 /* Referenced by: '<S695>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_HVBatCntctrStatOvrd = 0;/* Referenced by: '<S696>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_HV_BatPwrOvrd = 0;/* Referenced by: '<S697>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_HV_VoltFAOvrd = 0;/* Referenced by: '<S698>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_HV_VoltOvrdEnbl = 0;/* Referenced by: '<S699>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_HybAlternatorMdOvrd = 0;/* Referenced by: '<S700>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_HybAlternatorMdOvrdEnbl =
    0;                                 /* Referenced by: '<S701>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_IP_SOCSetPt_Ovrd = 0;/* Referenced by: '<S243>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_InPlantSOCSetPt_Enbl = 0;/* Referenced by: '<S244>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_LT_MaxDschrgLim_DevCalMode = 0;/* Referenced by: '<S736>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_LT_MinChrgLim_DevCalMode =
    0;                                 /* Referenced by: '<S737>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_LogisticsSOCSetPt_Ovrd =
    0;                                 /* Referenced by: '<S245>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_NoSTPLadj = 0;/* Referenced by: '<S46>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_Ovrd_BE_ChrgPL = 0;/* Referenced by: '<S405>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_Ovrd_BE_DschrgPL = 0;/* Referenced by: '<S406>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_PD_OV_Ovrd = 0;/* Referenced by: '<S107>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_PD_UV_Ovrd = 0;/* Referenced by: '<S185>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_RevGradeDschrgPwrEnbl = 0;/* Referenced by: '<S719>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT)
    KeESMR_b_ST_MaxDschrgLim_DevCalMode = 0;/* Referenced by: '<S738>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_ST_MinChrgLim_DevCalMode =
    0;                                 /* Referenced by: '<S739>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_UseBase_OVOffset = 0;/* Referenced by:
                                                                      * '<S135>/Calib'
                                                                      * '<S144>/Calib'
                                                                      */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_UseDelta_OVOffset = 0;/* Referenced by:
                                                                      * '<S136>/Calib'
                                                                      * '<S145>/Calib'
                                                                      */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_UsrSelChrgLTPL = 0;/* Referenced by: '<S522>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_UsrSelChrgLTPL10sec = 0;/* Referenced by: '<S523>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_UsrSelDschrgLTPL = 0;/* Referenced by: '<S556>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_UsrSelDschrgLTPL10sec = 0;/* Referenced by: '<S557>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_VehicleSignedOvrdEnbl = 0;/* Referenced by: '<S702>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_b_VldtdTransRngStOvrdEnbl =
    0;                                 /* Referenced by: '<S703>/Calib' */

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_LTchrgPL_Fall =
    -0.1F;                             /* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_LTchrgPL_Rise =
    0.1F;                              /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_LTdschrgPL_Fall
    = -0.1F;                           /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_LTdschrgPL_Rise
    = 0.1F;                            /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_STchrgPL_Fall =
    -0.1F;                             /* Referenced by: '<S275>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_STchrgPL_Rise =
    0.1F;                              /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_STdschrgPL_Fall
    = -0.1F;                           /* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_BstCnvtr_STdschrgPL_Rise
    = 0.1F;                            /* Referenced by: '<S278>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_FCMaxPwr_LD = -0.1F;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_FCMaxPwr_LU = 0.1F;/* Referenced by: '<S161>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_OVSTMinLim_FallRL =
    -0.125F;                           /* Referenced by: '<S108>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_OVSTMinLim_RiseRL =
    0.125F;                            /* Referenced by: '<S109>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_UVSTMaxLim_FallRL =
    -0.125F;                           /* Referenced by: '<S186>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dP_UVSTMaxLim_RiseRL =
    0.125F;                            /* Referenced by: '<S187>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_OVITermFallRL = 0.0F;/* Referenced by: '<S137>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_OVITermRiseRL = 0.0F;/* Referenced by: '<S138>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_OVPTermFallRL = 0.0F;/* Referenced by: '<S146>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_OVPTermRiseRL = 0.0F;/* Referenced by: '<S147>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_UVITermFallRL = 0.0F;/* Referenced by: '<S210>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_UVITermRiseRL = 0.0F;/* Referenced by: '<S211>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_UVPTermFallRL = 0.0F;/* Referenced by: '<S217>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_dU_UVPTermRiseRL = 0.0F;/* Referenced by: '<S218>/Calib' */
static volatile CONST(uint8, ESMR_VAR_INIT) KeESMR_d_EngStartStopStOvrd = 0U;/* Referenced by: '<S704>/Calib' */
static volatile CONST(boolean, ESMR_VAR_INIT) KeESMR_d_HVBatCnctrStat = 0;/* Referenced by: '<S705>/Calib' */
static volatile CONST(uint16, ESMR_VAR_INIT) KeESMR_d_InputOvrdEnbl_OVUV = 0U;/* Referenced by: '<S226>/Calib' */
static volatile CONST(uint8, ESMR_VAR_INIT) KeESMR_d_VldtdTransRngStOvrd = 0U;/* Referenced by: '<S706>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_Ahrperhr_FiltCoef =
    0.001F;                            /* Referenced by: '<S439>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_Ahrperhr_NormFact = 16.0F;/* Referenced by: '<S440>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_Ahrperhr_NormOffst = 0.0F;/* Referenced by: '<S441>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_ChrgLTNegRL = -1.0F;/* Referenced by: '<S524>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_ChrgLTPosRL = 1.0F;/* Referenced by: '<S525>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_DschrgLTNegRL = -1.0F;/* Referenced by: '<S558>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_DschrgLTPosRL = 1.0F;/* Referenced by: '<S559>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_LimpMaxFactor = 1.0F;/* Referenced by: '<S47>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_LimpMinFactor = 1.0F;/* Referenced by: '<S48>/Calib' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_k_NumOfModule = 84.0F;/* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(uint16, ESMR_VAR_INIT) KeESMR_n_FCPwrRampUpDelay = 600U;/* Referenced by: '<S633>/Calib' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_r_ST_LT_Factor = 0.85F;/* Referenced by: '<S18>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_v_MinVehSpeed_LTPwr = 1.0F;/* Referenced by: '<S487>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KeESMR_v_VehicleSignedOvrd = 0.0F;/* Referenced by: '<S707>/Calib' */
static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_ChrgPL_CntrDecrPL10[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S526>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_ChrgPL_CntrDecrPL30[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S527>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_ChrgPL_CntrIncrPL10[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S528>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_ChrgPL_CntrIncrPL30[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S529>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_DschrgPL_CntrDecrPL10[6]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S560>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_DschrgPL_CntrDecrPL30[6]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S561>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_DschrgPL_CntrIncrPL10[6]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S562>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Cnt_DschrgPL_CntrIncrPL30[6]
    =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S563>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_AhrpX_ChrgPwrLimLT[7] =
{
    -37.0F, -37.0F, -37.0F, -37.0F, -37.0F, -37.0F, -37.0F
} ;                                    /* Referenced by: '<S536>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_AhrpX_ChrgPwrLimST[7] =
{
    -37.0F, -37.0F, -37.0F, -37.0F, -37.0F, -37.0F, -37.0F
} ;                                    /* Referenced by: '<S337>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_AhrpX_DschrgPwrLimLT[7] =
{
    37.0F, 37.0F, 37.0F, 37.0F, 37.0F, 37.0F, 37.0F
} ;                                    /* Referenced by: '<S578>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_AhrpX_DschrgPwrLimST[7] =
{
    37.0F, 37.0F, 37.0F, 37.0F, 37.0F, 37.0F, 37.0F
} ;                                    /* Referenced by: '<S383>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_BattLTMaxLim_STDelta[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S38>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_BattLTMinLim_STDelta[6] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S39>/Vector' */

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_BstCnvtr_LTST_ChrgPL_Delta[6] =
{
    3.0F, 2.5F, 2.5F, 2.5F, 1.5F, 0.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_BstCnvtr_LTST_DsChrgPL_Delta[6] =
{
    0.0F, 1.5F, 2.5F, 2.5F, 2.5F, 3.0F
} ;                                    /* Referenced by: '<S280>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_BstCnvtr_LT_ChrgPL_TempBased[5] =
{
    -38.0F, -36.9F, -36.9F, -23.6F, -9.7F
} ;                                    /* Referenced by: '<S281>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_BstCnvtr_LT_DsChrgPL_TempBased[5] =
{
    27.0F, 23.9F, 23.9F, 17.0F, 5.7F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_BstCnvtr_ST_ChrgPL_TempBased[5] =
{
    -38.0F, -36.9F, -36.9F, -23.6F, -9.7F
} ;                                    /* Referenced by: '<S283>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_BstCnvtr_ST_DsChrgPL_TempBased[5] =
{
    41.0F, 36.0F, 36.4F, 25.9F, 8.6F
} ;                                    /* Referenced by: '<S284>/Vector' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_OVDFac[7] =
{
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_OVIFac[7] =
{
    0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_OVPFac[7] =
{
    0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F
} ;                                    /* Referenced by: '<S127>/Vector' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_PwrAvailForFCPS[12] =
{
    0.0F, 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 50.0F,
    50.0F
} ;                                    /* Referenced by: '<S634>/Vector' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_PwrLimLT_RA[5] =
{
    2.0F, 3.0F, 5.0F, 5.0F, 1.0F
} ;                                    /* Referenced by:
                                        * '<S509>/Vector'
                                        * '<S543>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_PwrLimST_RA[5] =
{
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F
} ;                                    /* Referenced by:
                                        * '<S327>/Vector'
                                        * '<S373>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_RevGradePwrLim[225] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F,
    0.8F, 0.8F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F,
    1.4F, 1.4F, 1.4F, 1.4F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F,
    6.0F, 6.0F, 6.0F, 6.0F, 2.0F, 2.0F, 7.0F, 7.0F, 7.0F, 8.0F, 9.0F, 10.0F,
    10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 9.0F, 7.0F, 8.0F, 8.0F,
    8.0F, 9.0F, 10.0F, 12.0F, 12.0F, 12.0F, 12.0F, 12.0F, 12.0F, 12.0F, 12.0F,
    10.0F, 8.0F, 9.0F, 9.0F, 9.0F, 15.0F, 18.0F, 18.0F, 18.0F, 18.0F, 18.0F,
    18.0F, 18.0F, 18.0F, 18.0F, 10.0F, 8.0F, 5.0F, 5.0F, 5.0F, 18.0F, 20.0F,
    24.0F, 24.0F, 24.0F, 24.0F, 24.0F, 24.0F, 24.0F, 24.0F, 10.0F, 8.0F, 5.0F,
    5.0F, 5.0F, 10.0F, 20.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F, 30.0F,
    30.0F, 10.0F, 8.0F, 5.0F, 5.0F, 5.0F, 10.0F, 20.0F, 40.0F, 40.0F, 40.0F,
    40.0F, 40.0F, 40.0F, 40.0F, 30.0F, 10.0F, 8.0F, 5.0F, 5.0F, 5.0F, 10.0F,
    20.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 30.0F, 10.0F, 8.0F,
    5.0F, 5.0F, 5.0F, 10.0F, 20.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F, 40.0F,
    40.0F, 30.0F, 10.0F, 8.0F, 5.0F, 5.0F, 5.0F, 10.0F, 20.0F, 30.0F, 35.0F,
    35.0F, 35.0F, 35.0F, 35.0F, 35.0F, 30.0F, 10.0F, 8.0F, 5.0F, 5.0F, 5.0F,
    10.0F, 20.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 20.0F, 10.0F,
    8.0F, 5.0F, 5.0F, 5.0F, 10.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F,
    15.0F, 15.0F, 15.0F, 10.0F, 8.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by:
                                        * '<S390>/Vector'
                                        * '<S585>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_SOC_BT_ChrgPwrLimLT[225] =
{
    -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -10.0F, -3.4F,
    -3.4F, -3.4F, 0.0F, 4.0F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F,
    -3.4F, -3.4F, -11.0F, -3.4F, -3.4F, -3.4F, 0.0F, 4.0F, -4.0F, -4.2F, -4.2F,
    -4.2F, -4.2F, -4.2F, -4.2F, -4.2F, -4.2F, -12.0F, -4.2F, -4.2F, -3.4F, 0.0F,
    4.0F, -4.0F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -13.0F,
    -6.4F, -6.4F, -3.4F, 0.0F, 4.0F, -4.0F, -7.0F, -8.2F, -8.2F, -8.2F, -8.2F,
    -8.2F, -8.2F, -8.2F, -14.0F, -8.2F, -8.2F, -4.1F, 0.0F, 4.0F, -4.0F, -7.0F,
    -10.1F, -10.1F, -10.1F, -10.1F, -10.1F, -10.1F, -10.1F, -15.0F, -10.1F,
    -10.1F, -6.0F, 0.0F, 4.0F, -4.0F, -7.0F, -12.2F, -12.2F, -12.2F, -12.2F,
    -12.2F, -12.2F, -12.2F, -16.0F, -12.2F, -12.2F, -8.0F, 0.0F, 4.0F, -4.0F,
    -7.0F, -12.2F, -15.0F, -15.0F, -15.0F, -15.0F, -15.0F, -15.0F, -17.0F,
    -15.0F, -15.0F, -10.0F, 0.0F, 4.0F, -4.0F, -7.0F, -14.0F, -17.3F, -17.3F,
    -17.3F, -17.3F, -17.3F, -17.3F, -25.0F, -17.3F, -17.3F, -11.0F, 0.0F, 4.0F,
    -5.0F, -7.0F, -10.0F, -15.0F, -20.0F, -22.0F, -24.0F, -26.0F, -28.0F, -30.0F,
    -28.0F, -26.0F, -24.0F, -22.0F, -20.0F, -5.0F, -7.0F, -10.0F, -15.0F, -20.0F,
    -22.0F, -24.0F, -26.0F, -28.0F, -30.0F, -28.0F, -26.0F, -24.0F, -22.0F,
    -20.0F, -4.0F, -10.0F, -15.0F, -20.0F, -35.0F, -35.0F, -35.0F, -35.0F,
    -35.0F, -25.0F, -35.0F, -32.0F, -16.0F, 0.0F, 4.0F, -4.0F, -10.0F, -15.0F,
    -20.0F, -26.0F, -26.0F, -26.0F, -26.0F, -26.0F, -25.0F, -26.0F, -18.0F,
    -10.0F, 0.0F, 4.0F, -3.0F, -7.0F, -8.0F, -10.0F, -13.0F, -14.0F, -14.0F,
    -14.0F, -13.0F, -20.0F, -11.0F, -10.0F, -8.0F, 2.0F, 4.0F, -2.0F, -2.0F,
    -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -0.0F, -2.0F, -0.0F, 1.0F,
    2.5F, 4.0F
} ;                                    /* Referenced by: '<S537>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_SOC_BT_ChrgPwrLimST[225] =
{
    -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -10.0F, -3.4F,
    -3.4F, -3.4F, 0.0F, 4.0F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F, -3.4F,
    -3.4F, -3.4F, -11.0F, -3.4F, -3.4F, -3.4F, 0.0F, 4.0F, -4.0F, -4.2F, -4.2F,
    -4.2F, -4.2F, -4.2F, -4.2F, -4.2F, -4.2F, -12.0F, -4.2F, -4.2F, -3.4F, 0.0F,
    4.0F, -4.0F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -6.4F, -13.0F,
    -6.4F, -6.4F, -3.4F, 0.0F, 4.0F, -4.0F, -7.0F, -8.2F, -8.2F, -8.2F, -8.2F,
    -8.2F, -8.2F, -8.2F, -14.0F, -8.2F, -8.2F, -4.1F, 0.0F, 4.0F, -4.0F, -7.0F,
    -10.1F, -10.1F, -10.1F, -10.1F, -10.1F, -10.1F, -10.1F, -15.0F, -10.1F,
    -10.1F, -6.0F, 0.0F, 4.0F, -4.0F, -7.0F, -12.2F, -12.2F, -12.2F, -12.2F,
    -12.2F, -12.2F, -12.2F, -16.0F, -12.2F, -12.2F, -8.0F, 0.0F, 4.0F, -4.0F,
    -7.0F, -12.2F, -15.0F, -15.0F, -15.0F, -15.0F, -15.0F, -15.0F, -17.0F,
    -15.0F, -15.0F, -10.0F, 0.0F, 4.0F, -4.0F, -7.0F, -14.0F, -17.3F, -17.3F,
    -17.3F, -17.3F, -17.3F, -17.3F, -25.0F, -17.3F, -17.3F, -11.0F, 0.0F, 4.0F,
    -5.0F, -7.0F, -10.0F, -15.0F, -20.0F, -22.0F, -24.0F, -26.0F, -28.0F, -30.0F,
    -28.0F, -26.0F, -24.0F, -22.0F, -20.0F, -5.0F, -7.0F, -10.0F, -15.0F, -20.0F,
    -22.0F, -24.0F, -26.0F, -28.0F, -36.0F, -28.0F, -26.0F, -24.0F, -22.0F,
    -20.0F, -4.0F, -10.0F, -15.0F, -20.0F, -38.0F, -38.0F, -38.0F, -38.0F,
    -38.0F, -25.0F, -38.0F, -32.0F, -16.0F, 0.0F, 4.0F, -4.0F, -10.0F, -15.0F,
    -20.0F, -26.0F, -26.0F, -26.0F, -26.0F, -26.0F, -25.0F, -26.0F, -18.0F,
    -10.0F, 0.0F, 4.0F, -3.0F, -7.0F, -8.0F, -10.0F, -13.0F, -14.0F, -14.0F,
    -14.0F, -13.0F, -20.0F, -11.0F, -10.0F, -8.0F, 2.0F, 4.0F, -2.0F, -2.0F,
    -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -2.0F, -0.0F, -2.0F, -0.0F, 1.0F,
    2.5F, 4.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_SOC_BT_DschrgPwrLimLT[225]
    =
{
    4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 4.0F, 10.0F, 4.0F, 4.0F,
    4.0F, 4.0F, 4.0F, 4.5F, 4.5F, 4.5F, 4.5F, 4.5F, 4.5F, 4.5F, 4.5F, 4.5F,
    11.0F, 4.5F, 4.5F, 4.5F, 4.5F, 4.5F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F,
    5.0F, 5.0F, 5.0F, 12.0F, 5.0F, 5.0F, 5.0F, 5.0F, 5.0F, 7.0F, 7.0F, 7.0F,
    7.0F, 8.0F, 8.0F, 8.0F, 8.0F, 8.0F, 13.0F, 8.0F, 8.0F, 8.0F, 8.0F, 7.0F,
    8.0F, 8.0F, 8.0F, 8.0F, 10.0F, 10.0F, 10.0F, 10.0F, 10.0F, 14.0F, 10.0F,
    10.0F, 10.0F, 10.0F, 8.0F, 9.0F, 9.0F, 9.0F, 12.0F, 15.0F, 15.0F, 15.0F,
    15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 11.0F, 8.0F, 5.0F, 5.0F, 5.0F,
    15.0F, 17.0F, 17.0F, 17.0F, 17.0F, 17.0F, 16.0F, 17.0F, 17.0F, 17.0F, 12.0F,
    8.0F, 5.0F, 5.0F, 5.0F, 16.0F, 20.4F, 20.4F, 20.4F, 20.4F, 20.4F, 17.0F,
    20.4F, 20.4F, 20.4F, 13.0F, 8.0F, 5.0F, 5.0F, 5.0F, 10.0F, 20.0F, 24.7F,
    24.7F, 24.7F, 24.7F, 25.0F, 24.7F, 24.7F, 24.7F, 14.0F, 9.0F, 5.0F, 7.0F,
    10.0F, 15.0F, 20.0F, 22.0F, 24.0F, 26.0F, 28.0F, 30.0F, 28.0F, 26.0F, 24.0F,
    22.0F, 20.0F, 5.0F, 7.0F, 10.0F, 15.0F, 20.0F, 22.0F, 24.0F, 26.0F, 28.0F,
    30.0F, 28.0F, 26.0F, 24.0F, 22.0F, 20.0F, 5.0F, 5.0F, 5.0F, 10.0F, 20.0F,
    30.0F, 33.4F, 33.4F, 33.4F, 25.0F, 33.4F, 33.4F, 33.4F, 17.0F, 12.0F, 5.0F,
    5.0F, 5.0F, 18.0F, 25.0F, 30.0F, 33.4F, 33.4F, 33.4F, 25.0F, 33.4F, 33.4F,
    33.4F, 18.0F, 13.0F, 5.0F, 5.0F, 5.0F, 10.0F, 13.0F, 13.0F, 13.0F, 13.0F,
    13.0F, 20.0F, 13.0F, 13.0F, 13.0F, 19.0F, 14.0F, 3.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 0.0F, 3.0F, 3.0F, 3.0F, 20.0F, 15.0F
} ;                                    /* Referenced by: '<S579>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_SOC_BT_DschrgPwrLimLT_Altered[56] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.9F, 3.5F, 4.3F, 0.0F, 2.5F, 4.5F, 5.8F, 0.0F,
    3.8F, 6.3F, 8.9F, 0.0F, 6.8F, 10.3F, 15.1F, 0.0F, 15.7F, 23.7F, 33.6F, 0.0F,
    21.7F, 35.2F, 41.8F, 0.0F, 27.7F, 46.6F, 49.9F, 0.0F, 49.8F, 78.9F, 71.1F,
    0.0F, 52.0F, 78.1F, 77.2F, 0.0F, 73.0F, 83.6F, 86.7F, 0.0F, 83.3F, 87.9F,
    88.8F, 0.0F, 84.8F, 88.5F, 89.6F, 0.0F, 3.0F, 0.3F, 0.3F
} ;                                    /* Referenced by: '<S580>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_SOC_BT_DschrgPwrLimST[225]
    =
{
    4.8F, 4.8F, 4.8F, 4.8F, 4.8F, 4.8F, 4.8F, 4.8F, 4.8F, 10.0F, 4.8F, 4.8F,
    4.8F, 4.8F, 4.8F, 5.4F, 5.4F, 5.4F, 5.4F, 5.4F, 5.4F, 5.4F, 5.4F, 5.4F,
    11.0F, 5.4F, 5.4F, 5.4F, 5.4F, 5.4F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F,
    6.0F, 6.0F, 6.0F, 12.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 7.0F, 7.0F, 7.0F,
    8.0F, 9.0F, 10.0F, 10.0F, 10.0F, 10.0F, 13.0F, 10.0F, 10.0F, 10.0F, 9.0F,
    7.0F, 8.0F, 8.0F, 8.0F, 9.0F, 10.0F, 12.0F, 12.0F, 12.0F, 12.0F, 14.0F,
    12.0F, 12.0F, 12.0F, 10.0F, 8.0F, 9.0F, 9.0F, 9.0F, 15.0F, 18.0F, 18.0F,
    18.0F, 18.0F, 18.0F, 15.0F, 18.0F, 18.0F, 18.0F, 11.0F, 8.0F, 5.0F, 5.0F,
    5.0F, 18.0F, 20.0F, 24.0F, 24.0F, 24.0F, 24.0F, 16.0F, 24.0F, 24.0F, 18.0F,
    12.0F, 8.0F, 5.0F, 5.0F, 5.0F, 10.0F, 20.0F, 30.0F, 30.0F, 30.0F, 30.0F,
    17.0F, 30.0F, 30.0F, 20.0F, 13.0F, 8.0F, 5.0F, 5.0F, 5.0F, 10.0F, 20.0F,
    35.0F, 35.0F, 35.0F, 35.0F, 25.0F, 35.0F, 35.0F, 22.0F, 14.0F, 9.0F, 5.0F,
    7.0F, 10.0F, 15.0F, 20.0F, 22.0F, 24.0F, 26.0F, 28.0F, 30.0F, 28.0F, 26.0F,
    24.0F, 22.0F, 20.0F, 5.0F, 7.0F, 10.0F, 15.0F, 20.0F, 22.0F, 24.0F, 26.0F,
    28.0F, 36.0F, 28.0F, 26.0F, 24.0F, 22.0F, 20.0F, 5.0F, 5.0F, 5.0F, 10.0F,
    20.0F, 30.0F, 36.0F, 36.0F, 36.0F, 25.0F, 36.0F, 36.0F, 26.0F, 17.0F, 12.0F,
    5.0F, 5.0F, 5.0F, 18.0F, 25.0F, 30.0F, 36.0F, 36.0F, 36.0F, 25.0F, 36.0F,
    36.0F, 36.0F, 18.0F, 13.0F, 5.0F, 5.0F, 5.0F, 10.0F, 16.0F, 16.0F, 16.0F,
    16.0F, 16.0F, 20.0F, 16.0F, 16.0F, 16.0F, 19.0F, 14.0F, 3.0F, 3.0F, 3.0F,
    3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 3.0F, 0.0F, 3.0F, 3.0F, 3.0F, 20.0F, 15.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT)
    KtESMR_P_SOC_BT_DschrgPwrLimST_Altered[56] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 10.0F, 14.8F, 14.8F, 0.0F, 12.6F, 17.2F, 17.2F,
    0.0F, 16.9F, 20.6F, 20.6F, 0.0F, 31.1F, 39.7F, 39.7F, 0.0F, 39.4F, 58.0F,
    58.0F, 0.0F, 58.8F, 70.6F, 70.6F, 0.0F, 78.1F, 83.1F, 83.1F, 0.0F, 84.8F,
    88.3F, 88.3F, 0.0F, 85.9F, 89.1F, 89.1F, 0.0F, 89.7F, 91.7F, 91.7F, 0.0F,
    91.4F, 93.1F, 93.1F, 0.0F, 91.7F, 93.4F, 93.4F, 0.0F, 3.0F, 3.0F, 3.0F
} ;                                    /* Referenced by: '<S385>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_UVDFac[7] =
{
    80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F, 80.0F
} ;                                    /* Referenced by: '<S202>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_UVIFac[7] =
{
    0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F
} ;                                    /* Referenced by: '<S203>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_UVPFac[7] =
{
    0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F, 0.125F
} ;                                    /* Referenced by: '<S204>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_VoltChrgPwrLim[225] =
{
    -0.8F, -0.8F, -0.8F, -0.8F, -0.8F, -0.8F, -0.8F, -0.8F, -0.8F, -10.0F, -0.8F,
    -0.8F, -0.8F, -0.8F, -0.8F, -1.4F, -1.4F, -1.4F, -1.4F, -1.4F, -1.4F, -1.4F,
    -1.4F, -1.4F, -11.0F, -1.4F, -1.4F, -1.4F, -1.4F, -1.4F, -6.0F, -6.0F, -6.0F,
    -6.0F, -6.0F, -6.0F, -6.0F, -6.0F, -6.0F, -12.0F, -6.0F, -6.0F, -6.0F, -2.0F,
    -2.0F, -7.0F, -7.0F, -7.0F, -8.0F, -9.0F, -10.0F, -10.0F, -10.0F, -10.0F,
    -13.0F, -10.0F, -10.0F, -10.0F, -9.0F, -7.0F, -8.0F, -8.0F, -8.0F, -9.0F,
    -10.0F, -12.0F, -12.0F, -12.0F, -12.0F, -14.0F, -12.0F, -12.0F, -12.0F,
    -10.0F, -8.0F, -8.0F, -9.0F, -9.0F, -15.0F, -15.0F, -15.0F, -15.0F, -15.0F,
    -15.0F, -15.0F, -15.0F, -15.0F, -15.0F, -10.0F, -8.0F, -5.0F, -7.0F, -10.0F,
    -15.0F, -17.0F, -17.0F, -17.0F, -17.0F, -17.0F, -16.0F, -17.0F, -17.0F,
    -17.0F, -10.0F, -8.0F, -5.0F, -7.0F, -10.0F, -15.0F, -20.0F, -20.0F, -20.0F,
    -20.0F, -20.0F, -17.0F, -20.0F, -20.0F, -20.0F, -10.0F, -8.0F, -5.0F, -7.0F,
    -10.0F, -15.0F, -20.0F, -20.0F, -20.0F, -20.0F, -20.0F, -18.0F, -20.0F,
    -20.0F, -20.0F, -10.0F, -8.0F, -5.0F, -7.0F, -10.0F, -15.0F, -20.0F, -22.0F,
    -24.0F, -26.0F, -28.0F, -30.0F, -28.0F, -26.0F, -24.0F, -22.0F, -20.0F,
    -5.0F, -7.0F, -10.0F, -15.0F, -20.0F, -22.0F, -24.0F, -26.0F, -28.0F, -36.0F,
    -28.0F, -26.0F, -24.0F, -22.0F, -20.0F, -5.0F, -7.0F, -10.0F, -15.0F, -20.0F,
    -24.0F, -24.0F, -24.0F, -24.0F, -25.0F, -24.0F, -24.0F, -20.0F, -10.0F,
    -8.0F, -5.0F, -7.0F, -10.0F, -15.0F, -20.0F, -25.0F, -25.0F, -25.0F, -25.0F,
    -25.0F, -25.0F, -25.0F, -20.0F, -10.0F, -8.0F, -5.0F, -7.0F, -10.0F, -15.0F,
    -20.0F, -25.0F, -25.0F, -25.0F, -25.0F, -20.0F, -25.0F, -25.0F, -20.0F,
    -10.0F, -8.0F, -0.0F, -0.0F, -0.0F, -0.0F, -0.0F, -0.0F, -0.0F, -0.0F, -0.0F,
    -0.0F, -0.0F, -0.0F, -0.0F, -0.0F, -0.0F
} ;                                    /* Referenced by: '<S393>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_P_VoltDschrgPwrLim[225] =
{
    0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 0.8F, 10.0F, 0.8F, 0.8F,
    0.8F, 0.8F, 0.8F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F,
    11.0F, 1.4F, 1.4F, 1.4F, 1.4F, 1.4F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F, 6.0F,
    6.0F, 6.0F, 6.0F, 12.0F, 6.0F, 6.0F, 6.0F, 2.0F, 2.0F, 7.0F, 7.0F, 7.0F,
    8.0F, 9.0F, 10.0F, 10.0F, 10.0F, 10.0F, 13.0F, 10.0F, 10.0F, 10.0F, 9.0F,
    7.0F, 8.0F, 8.0F, 8.0F, 9.0F, 10.0F, 12.0F, 12.0F, 12.0F, 12.0F, 14.0F,
    12.0F, 12.0F, 12.0F, 10.0F, 8.0F, 8.0F, 9.0F, 9.0F, 15.0F, 15.0F, 15.0F,
    15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 15.0F, 10.0F, 8.0F, 5.0F, 7.0F,
    10.0F, 15.0F, 17.0F, 17.0F, 17.0F, 17.0F, 17.0F, 16.0F, 17.0F, 17.0F, 17.0F,
    10.0F, 8.0F, 5.0F, 7.0F, 10.0F, 15.0F, 20.0F, 20.0F, 20.0F, 20.0F, 20.0F,
    17.0F, 20.0F, 20.0F, 20.0F, 10.0F, 8.0F, 5.0F, 7.0F, 10.0F, 15.0F, 20.0F,
    20.0F, 20.0F, 20.0F, 20.0F, 18.0F, 20.0F, 20.0F, 20.0F, 10.0F, 8.0F, 5.0F,
    7.0F, 10.0F, 15.0F, 20.0F, 22.0F, 24.0F, 26.0F, 28.0F, 30.0F, 28.0F, 26.0F,
    24.0F, 22.0F, 20.0F, 5.0F, 7.0F, 10.0F, 15.0F, 20.0F, 22.0F, 24.0F, 26.0F,
    28.0F, 36.0F, 28.0F, 26.0F, 24.0F, 22.0F, 20.0F, 5.0F, 7.0F, 10.0F, 15.0F,
    20.0F, 24.0F, 24.0F, 24.0F, 24.0F, 25.0F, 24.0F, 24.0F, 20.0F, 10.0F, 8.0F,
    5.0F, 7.0F, 10.0F, 15.0F, 20.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F, 25.0F,
    25.0F, 20.0F, 10.0F, 8.0F, 5.0F, 7.0F, 10.0F, 15.0F, 20.0F, 25.0F, 25.0F,
    25.0F, 25.0F, 20.0F, 25.0F, 25.0F, 20.0F, 10.0F, 8.0F, 0.0F, 0.0F, 0.0F,
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F
} ;                                    /* Referenced by: '<S394>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_Pct_SOHLow_CSSOC[7] =
{
    24.9F, 24.9F, 24.9F, 24.9F, 24.9F, 24.9F, 24.9F
} ;                                    /* Referenced by: '<S246>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_U_OVThrshOffset[105] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F
} ;                                    /* Referenced by: '<S115>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_U_UVThrshOffset[105] =
{
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F, 0.2F,
    0.2F
} ;                                    /* Referenced by: '<S189>/Vector' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KtESMR_k_BattPwrDerateFctr[5] =
{
    0.0F, 0.0F, 0.5F, 1.0F, 1.0F
} ;                                    /* Referenced by: '<S635>/Vector' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_ChrgPL_CntrDecrPL10[6] =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S526>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_ChrgPL_CntrDecrPL30[6] =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S527>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_ChrgPL_CntrIncrPL10[6] =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S528>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_ChrgPL_CntrIncrPL30[6] =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S529>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_DschrgPL_CntrDecrPL10[6]
    =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S560>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_DschrgPL_CntrDecrPL30[6]
    =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S561>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_DschrgPL_CntrIncrPL10[6]
    =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S562>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Cnt_DschrgPL_CntrIncrPL30[6]
    =
{
    0.0F, 0.1F, 0.4F, 0.6F, 0.8F, 1.0F
} ;                                    /* Referenced by: '<S563>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_AhrpX_ChrgPwrLimLT[7] =
{
    0.0F, 0.3F, 0.6F, 0.91F, 1.2F, 1.5F, 1.8F
} ;                                    /* Referenced by: '<S536>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_AhrpX_ChrgPwrLimST[7] =
{
    0.0F, 0.3F, 0.6F, 0.91F, 1.2F, 1.5F, 1.8F
} ;                                    /* Referenced by: '<S337>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_AhrpX_DschrgPwrLimLT[7] =
{
    0.0F, 0.3F, 0.6F, 0.91F, 1.2F, 1.5F, 1.8F
} ;                                    /* Referenced by: '<S578>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_AhrpX_DschrgPwrLimST[7] =
{
    0.0F, 0.3F, 0.6F, 0.91F, 1.2F, 1.5F, 1.8F
} ;                                    /* Referenced by: '<S383>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_BattLTMaxLim_STDelta[6] =
{
    -2.0F, 0.0F, 2.0F, 5.0F, 30.0F, 49.0F
} ;                                    /* Referenced by: '<S38>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_BattLTMinLim_STDelta[6] =
{
    -49.0F, -30.0F, -5.0F, -2.0F, -0.0F, 2.0F
} ;                                    /* Referenced by: '<S39>/Vector' */

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_BstCnvtr_LTST_ChrgPL_Delta[6] =
{
    -50.0F, -40.0F, -30.0F, -20.0F, -10.0F, 0.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_BstCnvtr_LTST_DsChrgPL_Delta[6] =
{
    0.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F
} ;                                    /* Referenced by: '<S280>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_BstCnvtr_LT_ChrgPL_TempBased[5] =
{
    65.0F, 80.0F, 87.0F, 100.0F, 110.0F
} ;                                    /* Referenced by: '<S281>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_BstCnvtr_LT_DsChrgPL_TempBased[5] =
{
    60.0F, 65.0F, 87.0F, 99.0F, 110.0F
} ;                                    /* Referenced by: '<S282>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_BstCnvtr_ST_ChrgPL_TempBased[5] =
{
    65.0F, 80.0F, 87.0F, 100.0F, 110.0F
} ;                                    /* Referenced by: '<S283>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_BstCnvtr_ST_DsChrgPL_TempBased[5] =
{
    60.0F, 65.0F, 87.0F, 99.0F, 110.0F
} ;                                    /* Referenced by: '<S284>/Vector' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_OVDFac[7] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S125>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_OVIFac[7] =
{
    -40.0F, -23.3333F, -6.6667F, 10.0F, 26.6667F, 43.3333F, 62.0F
} ;                                    /* Referenced by: '<S126>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_OVPFac[7] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S127>/Vector' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_PwrAvailForFCPS[12] =
{
    0.0F, 5.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F,
    100.0F
} ;                                    /* Referenced by: '<S634>/Vector' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_PwrLimLT_RA[5] =
{
    -40.0F, -10.0F, 39.0F, 44.0F, 50.0F
} ;                                    /* Referenced by:
                                        * '<S509>/Vector'
                                        * '<S543>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_PwrLimST_RA[5] =
{
    -40.0F, -10.0F, 39.0F, 44.0F, 50.0F
} ;                                    /* Referenced by:
                                        * '<S327>/Vector'
                                        * '<S373>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_RevGradePwrLim[15] =
{
    10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F,
    65.0F, 70.0F, 80.0F, 90.0F
} ;                                    /* Referenced by:
                                        * '<S390>/Vector'
                                        * '<S585>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_SOC_BT_ChrgPwrLimLT[15] =
{
    10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S537>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_SOC_BT_ChrgPwrLimST[15] =
{
    10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_SOC_BT_DschrgPwrLimLT[15]
    =
{
    10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S579>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_SOC_BT_DschrgPwrLimLT_Altered[4] =
{
    15.9F, 16.0F, 20.0F, 22.3F
} ;                                    /* Referenced by: '<S580>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_SOC_BT_DschrgPwrLimST[15]
    =
{
    10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT)
    KxESMR_P_SOC_BT_DschrgPwrLimST_Altered[4] =
{
    10.0F, 16.0F, 20.0F, 22.3F
} ;                                    /* Referenced by: '<S385>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_UVDFac[7] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S202>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_UVIFac[7] =
{
    -40.0F, -23.3333F, -6.6667F, 10.0F, 26.6667F, 43.3333F, 62.0F
} ;                                    /* Referenced by: '<S203>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_UVPFac[7] =
{
    -30.0F, -20.0F, -10.0F, 0.0F, 20.0F, 40.0F, 60.0F
} ;                                    /* Referenced by: '<S204>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_VoltChrgPwrLim[15] =
{
    10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S393>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_P_VoltDschrgPwrLim[15] =
{
    10.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F, 55.0F, 60.0F, 65.0F,
    70.0F, 75.0F, 80.0F, 90.0F
} ;                                    /* Referenced by: '<S394>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_Pct_SOHLow_CSSOC[7] =
{
    0.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S246>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_U_OVThrshOffset[7] =
{
    2.0F, 3.0F, 3.5F, 3.8F, 4.1F, 4.5F, 5.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_U_UVThrshOffset[7] =
{
    2.0F, 2.3F, 2.6F, 2.9F, 3.2F, 3.6F, 5.0F
} ;                                    /* Referenced by: '<S189>/Vector' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static volatile CONST(float32, ESMR_VAR_INIT) KxESMR_k_BattPwrDerateFctr[5] =
{
    0.0F, 25.0F, 30.0F, 35.0F, 100.0F
} ;                                    /* Referenced by: '<S635>/Vector' */

#endif

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_RevGradePwrLim[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by:
                                        * '<S390>/Vector'
                                        * '<S585>/Vector'
                                        */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_SOC_BT_ChrgPwrLimLT[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S537>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_SOC_BT_ChrgPwrLimST[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S338>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_SOC_BT_DschrgPwrLimLT[15]
    =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S579>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT)
    KyESMR_P_SOC_BT_DschrgPwrLimLT_Altered[14] =
{
    -35.0F, -30.0F, -25.0F, -20.0F, -10.0F, 0.0F, 5.0F, 10.0F, 20.0F, 25.0F,
    35.0F, 45.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S580>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_SOC_BT_DschrgPwrLimST[15]
    =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S384>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT)
    KyESMR_P_SOC_BT_DschrgPwrLimST_Altered[14] =
{
    -35.0F, -30.0F, -25.0F, -20.0F, -10.0F, 0.0F, 5.0F, 10.0F, 20.0F, 25.0F,
    35.0F, 45.0F, 50.0F, 55.0F
} ;                                    /* Referenced by: '<S385>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_VoltChrgPwrLim[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S393>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_P_VoltDschrgPwrLim[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S394>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_U_OVThrshOffset[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S115>/Vector' */

static volatile CONST(float32, ESMR_VAR_INIT) KyESMR_U_UVThrshOffset[15] =
{
    -40.0F, -30.0F, -25.0F, -15.0F, -10.0F, -5.0F, 0.0F, 5.0F, 10.0F, 15.0F,
    25.0F, 35.0F, 40.0F, 50.0F, 60.0F
} ;                                    /* Referenced by: '<S189>/Vector' */

#define STOP_SEC_CALIB_UNSPECIFIED_ESMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ESMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_AhrpX_ChrgPwrLimLT1;/* '<S536>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_BPCM_ChrgPwrLimLT1;/* '<S512>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_BPCM_DschrgPwrLimLT1;/* '<S546>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_BatLT_MaxLimInit1;/* '<S749>/Data Store Read2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_BatLT_MinLimInit1;/* '<S749>/Data Store Read4' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_BatST_MaxLimInit1;/* '<S749>/Data Store Read' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_BatST_MinLimInit1;/* '<S749>/Data Store Read1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_OVDTerm;/* '<S119>/Multiplication1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_OVITerm;/* '<S119>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_OVPIDTerm;/* '<S92>/Switch2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_OVPTerm;/* '<S119>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_SOC_BT_ChrgPwrLimLT1;/* '<S537>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_SOC_BT_DschrgPwrLimLT1;/* '<S544>/Switch2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_STMaxLim_LTFac;/* '<S19>/MinMax2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_STMaxLim_UV;/* '<S188>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_STMinLim_LTFac;/* '<S19>/MinMax1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_STMinLim_OV;/* '<S110>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_UVDTerm;/* '<S196>/Multiplication1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_UVITerm;/* '<S196>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_UVPIDTerm;/* '<S94>/Switch3' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_UVPTerm;/* '<S196>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_VoltChrgPwrLim;/* '<S393>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_P_VoltDschrgPwrLim;/* '<S394>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVActvThsld;/* '<S111>/Sum3' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVITermRL;/* '<S132>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVITermRL_Diff;/* '<S119>/Sum2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVPITermActvThsld;/* '<S120>/Sum2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVPTermActvThsld;/* '<S121>/Sum2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVPTermRL;/* '<S141>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_OVPTermRL_Diff;/* '<S119>/Sum1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVActvThsld;/* '<S180>/Sum1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVITermRL;/* '<S207>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVITermRLActvThsld;/* '<S197>/Sum2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVITermRL_Diff;/* '<S196>/Sum2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVPTermRL;/* '<S214>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVPTermRLActvThsld;/* '<S198>/Sum2' */
static VAR(float32, ESMR_VAR_INIT) VeESMC_U_UVPTermRL_Diff;/* '<S196>/Sum1' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_BE_MMFlag;/* '<S397>/Merge3' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_LTMMErr;/* '<S15>/Merge3' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_OVActv;/* '<S111>/Comparison2' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_OVITermRLActvd;/* '<S120>/Comparison3' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_OVPTermRLActvd;/* '<S121>/Comparison3' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_ST_MMErr;/* '<S63>/Merge3' */
static VAR(boolean, ESMR_VAR_INIT) VeESMC_b_UVActv;/* '<S180>/Comparison2' */
static VAR(TeESMR_e_ActiveST_PwrLim, ESMR_VAR_INIT) VeESMC_e_STMinLim_OV_ID;/* '<S82>/DataTypeConversion' */
static VAR(TeESMR_e_ActiveST_PwrLim, ESMR_VAR_INIT) VeESMC_e_STMinLim_UV_ID;/* '<S83>/DataTypeConversion' */
static VAR(float32, ESMR_VAR_INIT) VeESMI_I_HV_BatCurrArb;/* '<S640>/Switch10' */
static VAR(float32, ESMR_VAR_INIT) VeESMI_P_BstCnvtr_LT_Chrg;/* '<S642>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMI_P_BstCnvtr_LT_DsChrg;/* '<S643>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMI_P_BstCnvtr_ST_Chrg;/* '<S644>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMI_P_BstCnvtr_ST_DsChrg;/* '<S645>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMI_T_PIM_A_CoolantTemp;/* '<S646>/Gain' */
static VAR(boolean, ESMR_VAR_INIT) VeESMI_b_BstCnvtr_LT_Chrg_FA;/* '<S649>/Gain' */
static VAR(boolean, ESMR_VAR_INIT) VeESMI_b_BstCnvtr_LT_DsChrg_FA;/* '<S650>/Gain' */
static VAR(boolean, ESMR_VAR_INIT) VeESMI_b_BstCnvtr_ST_Chrg_FA;/* '<S647>/Gain' */
static VAR(boolean, ESMR_VAR_INIT) VeESMI_b_BstCnvtr_ST_DsChrg_FA;/* '<S648>/Gain' */
static VAR(boolean, ESMR_VAR_INIT) VeESMI_b_PIM_A_CoolantTemp_FA;/* '<S651>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_M_CmndPrdtAxleTorq;/* '<S640>/Switch24' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_P_HV_BatPwr;/* '<S640>/Switch30' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_BatVoltModMaxArb;/* '<S7>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_BatVoltModMaxArb_12p5;/* '<S7>/Switch22' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_BatVoltModMaxArb_Init;/* '<S774>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_BatVoltModMinArb;/* '<S7>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_BatVoltModMinArb_12p5;/* '<S7>/Switch21' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_BatVoltModMinArb_Init;/* '<S775>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_HV_BatVoltArb;/* '<S640>/Switch13' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_U_HV_Volt;/* '<S640>/Switch14' */
static VAR(boolean, ESMR_VAR_INIT) VeESMN_b_RevGradeEnbl;/* '<S641>/Logical' */
static VAR(TeESSR_e_EngStartStopSt, ESMR_VAR_INIT) VeESMN_e_EngStartStopSt;/* '<S640>/Switch19' */
static VAR(TeHVTR_e_HV_BatCntctrStat, ESMR_VAR_INIT) VeESMN_e_HVBatCntctrStat;/* '<S640>/Switch17' */
static VAR(TeTRGR_e_TransRangeState, ESMR_VAR_INIT) VeESMN_e_VldtdTransRngSt;/* '<S640>/Switch25' */
static VAR(float32, ESMR_VAR_INIT) VeESMN_v_VehicleSigned;/* '<S640>/Switch23' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_I_AccumChrgCurr_Test;/* '<S424>/Summation' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_I_AccumDschrgCurr_Test;/* '<S425>/Summation2' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_AhrpX_ChrgPwrLimLT1;/* '<S578>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_AhrpX_ChrgPwrLimST;/* '<S337>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_AhrpX_DschrgPwrLimST;/* '<S383>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_ArbChrgPwrLimLT;/* '<S492>/Merge' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_ArbChrgPwrLimST_Ovrd;/* '<S314>/Merge' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_ArbDschrgPwrLimLT;/* '<S462>/Merge' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_ArbDschrgPwrLimST_Ovrd;/* '<S357>/Merge' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BE_ST_Chrg_PwrLim;/* '<S9>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BE_ST_DsChrg_PwrLim;/* '<S9>/Switch2' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BPCM_ChrgPwrLimST;/* '<S329>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BPCM_DschrgPwrLimST;/* '<S375>/Switch1' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BP_Dschrg_LT_Modified;/* '<S624>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BP_Dschrg_ST_Modified;/* '<S625>/Switch1' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BatEstdVoltMaxLim1;/* '<S399>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BatEstdVoltMinLim1;/* '<S398>/Switch1' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BatSTMaxLim1;/* '<S11>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BatSTMinLim1;/* '<S10>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BattLTMaxLim1;/* '<S13>/Gain' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BattLTMinLim1;/* '<S14>/Gain' */

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BoostCnvrtr_LT_Chrg_1;/* '<S257>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BoostCnvrtr_LT_Chrg_2;/* '<S249>/Switch14' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BoostCnvrtr_LT_Dschrg_1;/* '<S258>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BoostCnvrtr_LT_Dschrg_2;/* '<S249>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BoostCnvrtr_ST_Chrg_1;/* '<S255>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_BoostCnvrtr_ST_Dschrg_1;/* '<S256>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_FCOff_LowSOC_Totl_Dschrg_LT;/* '<S592>/MinMax' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_FCOff_LowSOC_Totl_Dschrg_ST;/* '<S592>/MinMax1' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_FCOn_LowSOC_Totl_Dschrg_LT;/* '<S592>/Sum2' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_FCOn_LowSOC_Totl_Dschrg_ST;/* '<S592>/Sum3' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_FC_Dschrg_LT_Modified;/* '<S622>/Switch1' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_FC_Dschrg_ST_Modified;/* '<S623>/Switch1' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LTChrg_LmpHomeAjst;/* '<S20>/Switch5' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LTDsChrg_LmpHomeAjst;/* '<S20>/Switch4' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LTMaxPinched;/* '<S20>/Switch3' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LTMinPinched;/* '<S20>/Switch2' */

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LT_ChrgPL_TempBased;/* '<S281>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LT_DsChrgPL_TempBased;/* '<S282>/Vector' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LT_MaxArb_UVLim;/* '<S19>/Switch4' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_LT_MinArb_UVLim;/* '<S19>/Switch3' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_OVCtrl_FC_D_Term;/* '<S162>/Product2' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_OVCtrl_FC_I_Term;/* '<S176>/Switch' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_OVCtrl_FC_PID;/* '<S93>/Merge' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_OVCtrl_FC_P_Term;/* '<S162>/Product' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_RevGradeDschrgPwr_LT;/* '<S583>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_RevGradeDschrgPwr_ST;/* '<S386>/Switch' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_RevGradePwrLT;/* '<S585>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_SOC_BT_ChrgPwrLimST;/* '<S338>/Vector' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_P_SOC_BT_DschrgPwrLimST;/* '<S374>/Switch2' */

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_ST_ChrgPL_TempBased;/* '<S283>/Vector' */

#endif

#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_ST_DsChrgPL_TempBased;/* '<S284>/Vector' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_P_Total_ST_Chrg_PL_FC_OV;
                                 /* '<S6>/SigConvForSigProp_VariantSource4_0' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_Pct_CS_SOCSetPt_Test;/* '<S239>/Switch1' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_U_FCPS_Lower_ModulVoltLIM;/* '<S86>/Product3' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_U_FCPS_Module_Volt;/* '<S86>/Product1' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_U_FCPS_Upper_ModulVoltLIM;/* '<S86>/Product2' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_U_MaxModuleVolt_Measure;
                                  /* '<S6>/SigConvForSigProp_VariantSource_0' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_U_MinModuleVolt_Measure;
                                 /* '<S6>/SigConvForSigProp_VariantSource2_0' */
static VAR(float32, ESMR_VAR_INIT) VeESMR_U_OV_BaseThrsh;
                                 /* '<S6>/SigConvForSigProp_VariantSource1_0' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_U_OV_Error;/* '<S162>/Sum' */

#endif

static VAR(float32, ESMR_VAR_INIT) VeESMR_U_UV_BaseThrsh;
                                 /* '<S6>/SigConvForSigProp_VariantSource3_0' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_FCPS_Dschrg_LT_Enbl;/* '<S592>/Logical1' */

#endif

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_FCPS_Dschrg_ST_Enbl;/* '<S592>/Logical2' */

#endif

static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_MtrFail_LoSOC;/* '<S544>/Logical2' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_OV_Actv_FC;/* '<S164>/AND' */

#endif

static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_OV_UV_RegAllwd;/* '<S6>/Logical2' */
static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_STMaxPinched;/* '<S20>/Logical2' */
static VAR(boolean, ESMR_VAR_INIT) VeESMR_b_STMinPinched;/* '<S20>/Logical1' */
static VAR(TeESMR_e_ActiveLT_PwrLim, ESMR_VAR_INIT) VeESMR_e_ChrgPwrLimLT_ID_A;/* '<S492>/Merge1' */
static VAR(TeESMR_e_ActiveST_PwrLim, ESMR_VAR_INIT)
    VeESMR_e_ChrgPwrLimST_ID_A_Ovrd;   /* '<S314>/Merge1' */
static VAR(TeESMR_e_ActiveLT_PwrLim, ESMR_VAR_INIT) VeESMR_e_DschrgPwrLimLT_ID_A;/* '<S462>/Merge1' */
static VAR(TeESMR_e_ActiveLT_PwrLim, ESMR_VAR_INIT)
    VeESMR_e_DschrgPwrLimLT_ID_B_LT;   /* '<S583>/Switch1' */
static VAR(TeESMR_e_ActiveST_PwrLim, ESMR_VAR_INIT)
    VeESMR_e_DschrgPwrLimST_ID_A_Ovrd; /* '<S357>/Merge1' */
static VAR(TeESMR_e_ActiveST_PwrLim, ESMR_VAR_INIT)
    VeESMR_e_DschrgPwrLim_ID_B_ST;     /* '<S388>/Switch1' */

#if Rte_SysCon_Variant_ESMR_FCPS_Func

static VAR(float32, ESMR_VAR_INIT) VeESMR_k_BattPwrDerateFctr;/* '<S635>/Vector' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ESMR
#include "MemMap.h"

/* Constant parameters (default storage) */
#define START_SEC_CONST_UNSPECIFIED_ESMR
#include "MemMap.h"

CONST(ConstP_ESMR_ac_T, ESMR_VAR_INIT) ESMR_ac_ConstP =
{
    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S189>/Vector'
     *   '<S115>/Vector'
     */
    {
        6U, 14U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S580>/Vector'
     *   '<S385>/Vector'
     */
    {
        3U, 13U
    },

    /* Pooled Parameter (Expression: )
     * Referenced by:
     *   '<S393>/Vector'
     *   '<S394>/Vector'
     *   '<S537>/Vector'
     *   '<S579>/Vector'
     *   '<S338>/Vector'
     *   '<S384>/Vector'
     *   '<S390>/Vector'
     *   '<S585>/Vector'
     */
    {
        14U, 14U
    }
};

#define STOP_SEC_CONST_UNSPECIFIED_ESMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ESMR
#include "MemMap.h"

VAR(B_ESMR_ac_T, ESMR_VAR_INIT) ESMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ESMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_ESMR
#include "MemMap.h"

VAR(DW_ESMR_ac_T, ESMR_VAR_INIT) ESMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_ESMR
#include "MemMap.h"

static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_ESMC_NotActv(P2VAR(float32, AUTOMATIC,
    ESMR_VAR_INIT) rty_PIDTermNotActv);
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_LT_PL_Aribitration(VAR(float32,
    AUTOMATIC) rtu_HVBatPwr, VAR(float32, AUTOMATIC) rtu_BPLTPL, VAR(float32,
    AUTOMATIC) rtu_BPETPL, VAR(float32, AUTOMATIC) rtu_HLAlwdCnt, VAR(float32,
    AUTOMATIC) rtu_RecoveryCnt, VAR(float32, AUTOMATIC) rtu_CntIncr_BPLTPL, VAR
    (float32, AUTOMATIC) rtu_CntIncr_BPETPL, VAR(float32, AUTOMATIC)
    rtu_CntDecr_BPLTPL, VAR(float32, AUTOMATIC) rtu_CntDecr_BPETPL, P2VAR
    (B_LT_PL_Aribitration_ESMR_ac_T, AUTOMATIC, ESMR_VAR_INIT) localB, P2VAR
    (DW_LT_PL_Aribitration_ESMR_ac_T, AUTOMATIC, ESMR_VAR_INIT) localDW);
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_Arb_ST_LT_PwrLim(void);
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_BE_Arb_ST_PwrLim(void);

/* Outputs for atomic system: '<S8>/Arb_ST_LT_PwrLim' */
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_Arb_ST_LT_PwrLim(void)
{
    float32 rtb_Merge2_n;
    float32 rtb_MinMax5;
    boolean Comparison;
    boolean Comparison2;
    boolean NotEqual_m;
    boolean rtb_Logical1_m;

    /* MinMax: '<S19>/MinMax1' incorporates:
     *  Constant: '<S18>/Calib'
     *  Lookup_n-D: '<S39>/Vector'
     *  Product: '<S19>/Product1'
     *  Sum: '<S19>/Sum4'
     *  Switch: '<S9>/Switch1'
     */
    VeESMC_P_STMinLim_LTFac = fmaxf(look1_iflf_binlca_16a
        (VeESMR_P_BE_ST_Chrg_PwrLim, ((const float32 *)
        &(KxESMR_P_BattLTMinLim_STDelta[0])), ((const float32 *)
        &(KtESMR_P_BattLTMinLim_STDelta[0])), 5U) + ESMR_ac_B.Merge2,
        ESMR_ac_B.Merge2 * KeESMR_r_ST_LT_Factor);

    /* MinMax: '<S19>/MinMax6' */
    VeESMR_P_LT_MinArb_UVLim = fmaxf(VeESMC_P_STMinLim_LTFac,
        ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* MinMax: '<S19>/MinMax2' incorporates:
     *  Constant: '<S18>/Calib'
     *  Lookup_n-D: '<S38>/Vector'
     *  Product: '<S19>/Product'
     *  Sum: '<S19>/Sum1'
     *  Switch: '<S9>/Switch2'
     */
    VeESMC_P_STMaxLim_LTFac = fminf(ESMR_ac_B.Merge1 - look1_iflf_binlca_16a
        (VeESMR_P_BE_ST_DsChrg_PwrLim, ((const float32 *)
        &(KxESMR_P_BattLTMaxLim_STDelta[0])), ((const float32 *)
        &(KtESMR_P_BattLTMaxLim_STDelta[0])), 5U), ESMR_ac_B.Merge1 *
        KeESMR_r_ST_LT_Factor);

    /* MinMax: '<S19>/MinMax5' */
    rtb_MinMax5 = fminf(VeESMC_P_STMaxLim_LTFac,
                        ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* Switch: '<S19>/Switch4' */
    if (VeESMC_b_OVActv)
    {
        /* Switch: '<S19>/Switch4' incorporates:
         *  Constant: '<S37>/Calib'
         *  MinMax: '<S19>/MinMax4'
         *  Sum: '<S19>/Sum3'
         */
        VeESMR_P_LT_MaxArb_UVLim = fmaxf(KeESMR_P_MaxMinDeltaLT +
            VeESMR_P_LT_MinArb_UVLim, rtb_MinMax5);
    }
    else
    {
        /* Switch: '<S19>/Switch4' */
        VeESMR_P_LT_MaxArb_UVLim = rtb_MinMax5;
    }

    /* End of Switch: '<S19>/Switch4' */

    /* Switch: '<S19>/Switch3' */
    if (VeESMC_b_UVActv)
    {
        /* Switch: '<S19>/Switch3' incorporates:
         *  Constant: '<S37>/Calib'
         *  MinMax: '<S19>/MinMax3'
         *  Sum: '<S19>/Sum2'
         */
        VeESMR_P_LT_MinArb_UVLim = fminf(rtb_MinMax5 - KeESMR_P_MaxMinDeltaLT,
            VeESMR_P_LT_MinArb_UVLim);
    }

    /* End of Switch: '<S19>/Switch3' */

    /* If: '<S15>/If' incorporates:
     *  Constant: '<S15>/Constant Value2'
     *  Constant: '<S15>/Constant Value3'
     *  Constant: '<S15>/Constant Value6'
     *  Constant: '<S21>/Constant Value3'
     *  Constant: '<S37>/Calib'
     *  If: '<S21>/If'
     *  Logic: '<S15>/Logical1'
     *  Product: '<S21>/Product1'
     *  RelationalOperator: '<S15>/Comparison'
     *  RelationalOperator: '<S15>/Comparison1'
     *  RelationalOperator: '<S15>/Comparison2'
     */
    if (VeESMR_P_LT_MaxArb_UVLim >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S15>/Regular or Both Discharge' incorporates:
         *  ActionPort: '<S23>/Both Discharge'
         */
        /* If: '<S23>/If' incorporates:
         *  Constant: '<S23>/Constant Value4'
         *  Constant: '<S37>/Calib'
         *  Product: '<S23>/Product'
         */
        if (VeESMR_P_LT_MaxArb_UVLim < (KeESMR_P_MaxMinDeltaLT * 0.5F))
        {
            /* Outputs for IfAction SubSystem: '<S23>/Small Values' incorporates:
             *  ActionPort: '<S35>/Small Values'
             */
            /* Merge: '<S23>/Merge2' incorporates:
             *  Constant: '<S35>/Constant Value4'
             *  MinMax: '<S35>/MinMax'
             *  MinMax: '<S35>/MinMax1'
             *  Product: '<S35>/Product'
             *  Sum: '<S35>/Sum'
             */
            rtb_Merge2_n = fminf(fmaxf(VeESMR_P_LT_MinArb_UVLim +
                                  KeESMR_P_MaxMinDeltaLT,
                                  VeESMR_P_LT_MaxArb_UVLim),
                                 KeESMR_P_MaxMinDeltaLT * 0.5F);

            /* End of Outputs for SubSystem: '<S23>/Small Values' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S23>/PassThrough' incorporates:
             *  ActionPort: '<S33>/Small Values'
             */
            /* Merge: '<S23>/Merge2' incorporates:
             *  Gain: '<S36>/Gain'
             */
            rtb_Merge2_n = VeESMR_P_LT_MaxArb_UVLim;

            /* End of Outputs for SubSystem: '<S23>/PassThrough' */
        }

        /* End of If: '<S23>/If' */

        /* Merge: '<S15>/Merge2' incorporates:
         *  Constant: '<S37>/Calib'
         *  MinMax: '<S23>/MinMax'
         *  Sum: '<S23>/Sum1'
         */
        rtb_MinMax5 = fminf(rtb_Merge2_n - KeESMR_P_MaxMinDeltaLT,
                            VeESMR_P_LT_MinArb_UVLim);

        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S23>/Constant Value2'
         *  Logic: '<S32>/AND'
         */
        VeESMC_b_LTMMErr = false;

        /* End of Outputs for SubSystem: '<S15>/Regular or Both Discharge' */
    }
    else if ((VeESMR_P_LT_MaxArb_UVLim < 0.0F) && (VeESMR_P_LT_MinArb_UVLim >
              0.0F))
    {
        /* Outputs for IfAction SubSystem: '<S15>/Mismatch' incorporates:
         *  ActionPort: '<S22>/Mismatch'
         */
        /* Merge: '<S15>/Merge2' incorporates:
         *  Constant: '<S22>/Constant Value6'
         *  Gain: '<S30>/Gain'
         */
        rtb_MinMax5 = 0.0F;

        /* Merge: '<S15>/Merge1' incorporates:
         *  Constant: '<S22>/Constant Value3'
         *  Gain: '<S31>/Gain'
         */
        rtb_Merge2_n = 0.0F;

        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S22>/Constant Value5'
         *  Logic: '<S29>/AND'
         */
        VeESMC_b_LTMMErr = true;

        /* End of Outputs for SubSystem: '<S15>/Mismatch' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S15>/Both Charge' incorporates:
         *  ActionPort: '<S21>/Both Charge'
         */
        if (VeESMR_P_LT_MinArb_UVLim > (KeESMR_P_MaxMinDeltaLT * -0.5F))
        {
            /* Outputs for IfAction SubSystem: '<S21>/Small Values' incorporates:
             *  ActionPort: '<S27>/Small Values'
             */
            /* If: '<S21>/If' incorporates:
             *  Constant: '<S27>/Constant Value4'
             *  Constant: '<S37>/Calib'
             *  Merge: '<S21>/Merge1'
             *  MinMax: '<S27>/MinMax'
             *  MinMax: '<S27>/MinMax1'
             *  Product: '<S27>/Product'
             *  Sum: '<S27>/Sum2'
             */
            rtb_MinMax5 = fmaxf(fminf(VeESMR_P_LT_MaxArb_UVLim -
                                 KeESMR_P_MaxMinDeltaLT,
                                 VeESMR_P_LT_MinArb_UVLim),
                                KeESMR_P_MaxMinDeltaLT * -0.5F);

            /* End of Outputs for SubSystem: '<S21>/Small Values' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S21>/PassThrough' incorporates:
             *  ActionPort: '<S25>/Small Values'
             */
            /* If: '<S21>/If' incorporates:
             *  Gain: '<S28>/Gain'
             *  Merge: '<S21>/Merge1'
             */
            rtb_MinMax5 = VeESMR_P_LT_MinArb_UVLim;

            /* End of Outputs for SubSystem: '<S21>/PassThrough' */
        }

        /* Merge: '<S15>/Merge1' incorporates:
         *  Constant: '<S37>/Calib'
         *  MinMax: '<S21>/MinMax2'
         *  Sum: '<S21>/Sum'
         */
        rtb_Merge2_n = fmaxf(rtb_MinMax5 + KeESMR_P_MaxMinDeltaLT,
                             VeESMR_P_LT_MaxArb_UVLim);

        /* Merge: '<S15>/Merge3' incorporates:
         *  Constant: '<S21>/Constant Value1'
         *  Logic: '<S24>/AND'
         */
        VeESMC_b_LTMMErr = false;

        /* End of Outputs for SubSystem: '<S15>/Both Charge' */
    }

    /* End of If: '<S15>/If' */

    /* RelationalOperator: '<S20>/Comparison' incorporates:
     *  Constant: '<S44>/Calib'
     */
    Comparison = (VeESMR_P_BE_ST_Chrg_PwrLim > KeESMR_P_LimpMin);

    /* RelationalOperator: '<S20>/Comparison2' incorporates:
     *  Constant: '<S43>/Calib'
     */
    Comparison2 = (VeESMR_P_BE_ST_DsChrg_PwrLim < KeESMR_P_LimpMax);

    /* Outputs for Atomic SubSystem: '<S20>/Debounce1' */
    /* Outputs for Atomic SubSystem: '<S40>/EdgeBi' */
    /* RelationalOperator: '<S50>/Not Equal' incorporates:
     *  UnitDelay: '<S50>/Unit Delay'
     */
    NotEqual_m = (Comparison2 != ESMR_ac_DW.UnitDelay_DSTATE_h1);

    /* Update for UnitDelay: '<S50>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_h1 = Comparison2;

    /* End of Outputs for SubSystem: '<S40>/EdgeBi' */

    /* Logic: '<S40>/Logical1' incorporates:
     *  UnitDelay: '<S40>/Unit Delay1'
     */
    rtb_Logical1_m = (NotEqual_m || (ESMR_ac_DW.UnitDelay1_DSTATE_m));

    /* Outputs for Atomic SubSystem: '<S40>/Signal Latch On With Reset' */
    /* Logic: '<S51>/OR1' incorporates:
     *  Logic: '<S51>/NOT'
     *  Logic: '<S51>/OR'
     *  UnitDelay: '<S40>/Unit Delay3'
     *  UnitDelay: '<S51>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_ny = ((ESMR_ac_DW.UnitDelay3_DSTATE_h) ||
        ((!rtb_Logical1_m) && (ESMR_ac_DW.UnitDelay_DSTATE_ny)));

    /* End of Outputs for SubSystem: '<S40>/Signal Latch On With Reset' */

    /* Switch: '<S53>/Init' incorporates:
     *  Constant: '<S53>/Initial Condition'
     *  Logic: '<S53>/FixPt Logical Operator'
     *  Logic: '<S53>/Logical2'
     *  Sum: '<S40>/Sum1'
     *  Switch: '<S40>/Switch2'
     *  Switch: '<S57>/Init'
     *  UnitDelay: '<S51>/Unit Delay'
     *  UnitDelay: '<S53>/FixPt Unit Delay2'
     */
    if (rtb_Logical1_m || (((sint32)ESMR_ac_DW.FixPtUnitDelay2_DSTATE_j) == 0))
    {
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE_p = 0U;
    }

    ESMR_ac_DW.FixPtUnitDelay1_DSTATE_p = (uint16)(((uint32)
        (ESMR_ac_DW.UnitDelay_DSTATE_ny ? 1U : 0U)) + ((uint32)
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE_p));

    /* RelationalOperator: '<S40>/Equal1' incorporates:
     *  Constant: '<S42>/Calib'
     *  UnitDelay: '<S40>/Unit Delay1'
     */
    ESMR_ac_DW.UnitDelay1_DSTATE_m = (ESMR_ac_DW.FixPtUnitDelay1_DSTATE_p >=
        KeESMR_Cnt_LimpDebounce);

    /* Switch: '<S40>/Switch' incorporates:
     *  Logic: '<S52>/Logical2'
     *  Switch: '<S52>/Init'
     *  UnitDelay: '<S40>/Unit Delay1'
     *  UnitDelay: '<S52>/FixPt Unit Delay1'
     *  UnitDelay: '<S52>/FixPt Unit Delay2'
     */
    if (ESMR_ac_DW.UnitDelay1_DSTATE_m)
    {
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE_f = Comparison2;
    }
    else
    {
        if (((sint32)ESMR_ac_DW.FixPtUnitDelay2_DSTATE_a) == 0)
        {
            /* Switch: '<S52>/Init' incorporates:
             *  UnitDelay: '<S52>/FixPt Unit Delay1'
             */
            ESMR_ac_DW.FixPtUnitDelay1_DSTATE_f = Comparison2;
        }
    }

    /* End of Switch: '<S40>/Switch' */

    /* Switch: '<S53>/Reset' */
    if (rtb_Logical1_m)
    {
        /* Switch: '<S53>/Init' incorporates:
         *  Constant: '<S53>/Initial Condition'
         *  UnitDelay: '<S53>/FixPt Unit Delay1'
         */
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE_p = 0U;
    }

    /* End of Switch: '<S53>/Reset' */

    /* Update for UnitDelay: '<S40>/Unit Delay3' */
    ESMR_ac_DW.UnitDelay3_DSTATE_h = NotEqual_m;

    /* Update for UnitDelay: '<S53>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S53>/FixPt Constant'
     */
    ESMR_ac_DW.FixPtUnitDelay2_DSTATE_j = 1U;

    /* Update for UnitDelay: '<S52>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S52>/FixPt Constant'
     */
    ESMR_ac_DW.FixPtUnitDelay2_DSTATE_a = 1U;

    /* End of Outputs for SubSystem: '<S20>/Debounce1' */

    /* Outputs for Atomic SubSystem: '<S20>/Debounce3' */
    /* Outputs for Atomic SubSystem: '<S41>/EdgeBi' */
    /* RelationalOperator: '<S54>/Not Equal' incorporates:
     *  UnitDelay: '<S54>/Unit Delay'
     */
    Comparison2 = (Comparison != ESMR_ac_DW.UnitDelay_DSTATE_mn);

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_mn = Comparison;

    /* End of Outputs for SubSystem: '<S41>/EdgeBi' */

    /* Logic: '<S41>/Logical1' incorporates:
     *  UnitDelay: '<S41>/Unit Delay1'
     */
    NotEqual_m = (Comparison2 || (ESMR_ac_DW.UnitDelay1_DSTATE_a));

    /* Outputs for Atomic SubSystem: '<S41>/Signal Latch On With Reset' */
    /* Logic: '<S55>/OR1' incorporates:
     *  Logic: '<S55>/NOT'
     *  Logic: '<S55>/OR'
     *  UnitDelay: '<S41>/Unit Delay3'
     *  UnitDelay: '<S55>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_kg = ((ESMR_ac_DW.UnitDelay3_DSTATE) ||
        ((!NotEqual_m) && (ESMR_ac_DW.UnitDelay_DSTATE_kg)));

    /* End of Outputs for SubSystem: '<S41>/Signal Latch On With Reset' */

    /* Switch: '<S57>/Init' incorporates:
     *  Constant: '<S57>/Initial Condition'
     *  Logic: '<S57>/FixPt Logical Operator'
     *  Logic: '<S57>/Logical2'
     *  Sum: '<S41>/Sum1'
     *  Switch: '<S41>/Switch2'
     *  UnitDelay: '<S55>/Unit Delay'
     *  UnitDelay: '<S57>/FixPt Unit Delay2'
     */
    if (NotEqual_m || (((sint32)ESMR_ac_DW.FixPtUnitDelay2_DSTATE) == 0))
    {
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE = 0U;
    }

    ESMR_ac_DW.FixPtUnitDelay1_DSTATE = (uint16)(((uint32)
        (ESMR_ac_DW.UnitDelay_DSTATE_kg ? 1U : 0U)) + ((uint32)
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE));

    /* RelationalOperator: '<S41>/Equal1' incorporates:
     *  Constant: '<S42>/Calib'
     *  UnitDelay: '<S41>/Unit Delay1'
     */
    ESMR_ac_DW.UnitDelay1_DSTATE_a = (ESMR_ac_DW.FixPtUnitDelay1_DSTATE >=
        KeESMR_Cnt_LimpDebounce);

    /* Switch: '<S41>/Switch' incorporates:
     *  Logic: '<S56>/Logical2'
     *  Switch: '<S56>/Init'
     *  UnitDelay: '<S41>/Unit Delay1'
     *  UnitDelay: '<S56>/FixPt Unit Delay1'
     *  UnitDelay: '<S56>/FixPt Unit Delay2'
     */
    if (ESMR_ac_DW.UnitDelay1_DSTATE_a)
    {
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE_m = Comparison;
    }
    else
    {
        if (((sint32)ESMR_ac_DW.FixPtUnitDelay2_DSTATE_e) == 0)
        {
            /* Switch: '<S56>/Init' incorporates:
             *  UnitDelay: '<S56>/FixPt Unit Delay1'
             */
            ESMR_ac_DW.FixPtUnitDelay1_DSTATE_m = Comparison;
        }
    }

    /* End of Switch: '<S41>/Switch' */

    /* Switch: '<S57>/Reset' */
    if (NotEqual_m)
    {
        /* Switch: '<S57>/Init' incorporates:
         *  Constant: '<S57>/Initial Condition'
         *  UnitDelay: '<S57>/FixPt Unit Delay1'
         */
        ESMR_ac_DW.FixPtUnitDelay1_DSTATE = 0U;
    }

    /* End of Switch: '<S57>/Reset' */

    /* Update for UnitDelay: '<S41>/Unit Delay3' */
    ESMR_ac_DW.UnitDelay3_DSTATE = Comparison2;

    /* Update for UnitDelay: '<S57>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S57>/FixPt Constant'
     */
    ESMR_ac_DW.FixPtUnitDelay2_DSTATE = 1U;

    /* Update for UnitDelay: '<S56>/FixPt Unit Delay2' incorporates:
     *  Constant: '<S56>/FixPt Constant'
     */
    ESMR_ac_DW.FixPtUnitDelay2_DSTATE_e = 1U;

    /* End of Outputs for SubSystem: '<S20>/Debounce3' */

    /* Logic: '<S20>/Logical1' incorporates:
     *  UnitDelay: '<S56>/FixPt Unit Delay1'
     */
    VeESMR_b_STMinPinched = ((ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn)
        && (ESMR_ac_DW.FixPtUnitDelay1_DSTATE_m));

    /* Logic: '<S20>/Logical2' incorporates:
     *  UnitDelay: '<S52>/FixPt Unit Delay1'
     */
    VeESMR_b_STMaxPinched = ((ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn)
        && (ESMR_ac_DW.FixPtUnitDelay1_DSTATE_f));

    /* Logic: '<S20>/Logical6' incorporates:
     *  Constant: '<S46>/Calib'
     *  Logic: '<S20>/Logical3'
     *  Logic: '<S20>/Logical4'
     *  Logic: '<S20>/Logical7'
     */
    Comparison = (((!VeESMR_b_STMinPinched) || (!VeESMR_b_STMaxPinched)) &&
                  (!KeESMR_b_NoSTPLadj));

    /* Switch: '<S20>/Switch3' incorporates:
     *  Logic: '<S20>/Logical5'
     *  Logic: '<S20>/Logical6'
     */
    if ((VeESMR_b_STMaxPinched) && Comparison)
    {
        /* Switch: '<S20>/Switch3' incorporates:
         *  Constant: '<S47>/Calib'
         *  Gain: '<S20>/Gain'
         *  Product: '<S20>/Product1'
         */
        VeESMR_P_LTMaxPinched = KeESMR_k_LimpMaxFactor *
            (-ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic);
    }
    else
    {
        /* Switch: '<S20>/Switch3' */
        VeESMR_P_LTMaxPinched = rtb_Merge2_n;
    }

    /* End of Switch: '<S20>/Switch3' */

    /* Switch: '<S20>/Switch2' incorporates:
     *  Logic: '<S20>/Logical'
     */
    if ((VeESMR_b_STMinPinched) && Comparison)
    {
        /* Switch: '<S20>/Switch2' incorporates:
         *  Constant: '<S48>/Calib'
         *  Product: '<S20>/Product'
         */
        VeESMR_P_LTMinPinched = KeESMR_k_LimpMinFactor *
            ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic;
    }
    else
    {
        /* Switch: '<S20>/Switch2' */
        VeESMR_P_LTMinPinched = rtb_MinMax5;
    }

    /* End of Switch: '<S20>/Switch2' */

    /* Switch: '<S20>/Switch4' */
    if (VeESMR_b_STMinPinched)
    {
        /* Switch: '<S20>/Switch4' incorporates:
         *  Constant: '<S45>/Calib'
         *  MinMax: '<S20>/MinMax1'
         *  Sum: '<S20>/Sum'
         */
        VeESMR_P_LTDsChrg_LmpHomeAjst = fmaxf(rtb_Merge2_n,
            VeESMR_P_LTMinPinched + KeESMR_P_MaxMinDeltaLT);
    }
    else
    {
        /* Switch: '<S20>/Switch4' */
        VeESMR_P_LTDsChrg_LmpHomeAjst = VeESMR_P_LTMaxPinched;
    }

    /* End of Switch: '<S20>/Switch4' */

    /* Switch: '<S20>/Switch5' */
    if (VeESMR_b_STMaxPinched)
    {
        /* Switch: '<S20>/Switch5' incorporates:
         *  Constant: '<S45>/Calib'
         *  MinMax: '<S20>/MinMax'
         *  Sum: '<S20>/Sum1'
         */
        VeESMR_P_LTChrg_LmpHomeAjst = fminf(rtb_MinMax5, VeESMR_P_LTMaxPinched -
            KeESMR_P_MaxMinDeltaLT);
    }
    else
    {
        /* Switch: '<S20>/Switch5' */
        VeESMR_P_LTChrg_LmpHomeAjst = VeESMR_P_LTMinPinched;
    }

    /* End of Switch: '<S20>/Switch5' */

    /* Switch: '<S12>/Switch1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Constant: '<S17>/Calib'
     *  DataStoreWrite: '<S8>/Data Store Write'
     *  DataStoreWrite: '<S8>/Data Store Write3'
     *  Switch: '<S12>/Switch2'
     */
    if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eb)
    {
        ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb =
            KeESMR_P_ChrgPwrLimLT_ThrmlDerate;
        ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb =
            KeESMR_P_DschrgPwrLimLT_ThrmlDerate;
    }
    else
    {
        ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb = VeESMR_P_LTDsChrg_LmpHomeAjst;
        ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb = VeESMR_P_LTChrg_LmpHomeAjst;
    }

    /* End of Switch: '<S12>/Switch1' */
}

/* Output and update for atomic system: '<S9>/BE_Arb_ST_PwrLim' */
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_BE_Arb_ST_PwrLim(void)
{
    /* Switch: '<S58>/Switch2' incorporates:
     *  RelationalOperator: '<S58>/Relational Operator1'
     */
    if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f <
            VeESMC_P_STMaxLim_UV)
    {
        /* Switch: '<S58>/Switch2' */
        ESMR_ac_B.Merge1 = ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;
    }
    else
    {
        /* Switch: '<S58>/Switch2' */
        ESMR_ac_B.Merge1 = VeESMC_P_STMaxLim_UV;
    }

    /* End of Switch: '<S58>/Switch2' */

    /* Switch: '<S58>/Switch1' incorporates:
     *  RelationalOperator: '<S58>/Relational Operator'
     */
    if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h >
            VeESMC_P_STMinLim_OV)
    {
        /* Switch: '<S58>/Switch1' */
        ESMR_ac_B.Merge2 = ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h;
    }
    else
    {
        /* Switch: '<S58>/Switch1' */
        ESMR_ac_B.Merge2 = VeESMC_P_STMinLim_OV;
    }

    /* End of Switch: '<S58>/Switch1' */

    /* If: '<S63>/If' incorporates:
     *  Constant: '<S63>/Constant Value2'
     *  Constant: '<S63>/Constant Value3'
     *  Constant: '<S63>/Constant Value6'
     *  Constant: '<S64>/Calib'
     *  Constant: '<S65>/Constant Value3'
     *  If: '<S65>/If'
     *  Logic: '<S63>/Logical1'
     *  Product: '<S65>/Product1'
     *  RelationalOperator: '<S63>/Comparison'
     *  RelationalOperator: '<S63>/Comparison1'
     *  RelationalOperator: '<S63>/Comparison2'
     */
    if (ESMR_ac_B.Merge1 >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S63>/Regular or Both Discharge' incorporates:
         *  ActionPort: '<S67>/Both Discharge'
         */
        /* If: '<S67>/If' incorporates:
         *  Constant: '<S64>/Calib'
         *  Constant: '<S67>/Constant Value4'
         *  Product: '<S67>/Product'
         */
        if (ESMR_ac_B.Merge1 < (KeESMR_P_MaxMinDeltaST * 0.5F))
        {
            /* Outputs for IfAction SubSystem: '<S67>/Small Values' incorporates:
             *  ActionPort: '<S79>/Small Values'
             */
            /* Merge: '<S67>/Merge2' incorporates:
             *  Constant: '<S79>/Constant Value4'
             *  MinMax: '<S79>/MinMax'
             *  MinMax: '<S79>/MinMax1'
             *  Product: '<S79>/Product'
             *  Sum: '<S79>/Sum'
             */
            ESMR_ac_B.Merge1 = fminf(fmaxf(ESMR_ac_B.Merge2 +
                KeESMR_P_MaxMinDeltaST, ESMR_ac_B.Merge1),
                KeESMR_P_MaxMinDeltaST * 0.5F);

            /* End of Outputs for SubSystem: '<S67>/Small Values' */
        }

        /* End of If: '<S67>/If' */

        /* MinMax: '<S67>/MinMax' incorporates:
         *  Constant: '<S64>/Calib'
         *  Sum: '<S67>/Sum1'
         */
        ESMR_ac_B.Merge2 = fminf(ESMR_ac_B.Merge1 - KeESMR_P_MaxMinDeltaST,
            ESMR_ac_B.Merge2);

        /* Merge: '<S63>/Merge3' incorporates:
         *  Constant: '<S67>/Constant Value2'
         *  Logic: '<S76>/AND'
         */
        VeESMC_b_ST_MMErr = false;

        /* End of Outputs for SubSystem: '<S63>/Regular or Both Discharge' */
    }
    else if ((ESMR_ac_B.Merge1 < 0.0F) && (ESMR_ac_B.Merge2 > 0.0F))
    {
        /* Outputs for IfAction SubSystem: '<S63>/Mismatch' incorporates:
         *  ActionPort: '<S66>/Mismatch'
         */
        /* Gain: '<S74>/Gain' incorporates:
         *  Constant: '<S66>/Constant Value6'
         */
        ESMR_ac_B.Merge2 = 0.0F;

        /* Gain: '<S75>/Gain' incorporates:
         *  Constant: '<S66>/Constant Value3'
         */
        ESMR_ac_B.Merge1 = 0.0F;

        /* Merge: '<S63>/Merge3' incorporates:
         *  Constant: '<S66>/Constant Value5'
         *  Logic: '<S73>/AND'
         */
        VeESMC_b_ST_MMErr = true;

        /* End of Outputs for SubSystem: '<S63>/Mismatch' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S63>/Both Charge' incorporates:
         *  ActionPort: '<S65>/Both Charge'
         */
        if (ESMR_ac_B.Merge2 > (KeESMR_P_MaxMinDeltaST * -0.5F))
        {
            /* Outputs for IfAction SubSystem: '<S65>/Small Values' incorporates:
             *  ActionPort: '<S71>/Small Values'
             */
            /* If: '<S65>/If' incorporates:
             *  Constant: '<S64>/Calib'
             *  Constant: '<S71>/Constant Value4'
             *  Merge: '<S65>/Merge1'
             *  MinMax: '<S71>/MinMax'
             *  MinMax: '<S71>/MinMax1'
             *  Product: '<S71>/Product'
             *  Sum: '<S71>/Sum2'
             */
            ESMR_ac_B.Merge2 = fmaxf(fminf(ESMR_ac_B.Merge1 -
                KeESMR_P_MaxMinDeltaST, ESMR_ac_B.Merge2),
                KeESMR_P_MaxMinDeltaST * -0.5F);

            /* End of Outputs for SubSystem: '<S65>/Small Values' */
        }

        /* MinMax: '<S65>/MinMax2' incorporates:
         *  Constant: '<S64>/Calib'
         *  Sum: '<S65>/Sum'
         */
        ESMR_ac_B.Merge1 = fmaxf(ESMR_ac_B.Merge2 + KeESMR_P_MaxMinDeltaST,
            ESMR_ac_B.Merge1);

        /* Merge: '<S63>/Merge3' incorporates:
         *  Constant: '<S65>/Constant Value1'
         *  Logic: '<S68>/AND'
         */
        VeESMC_b_ST_MMErr = false;

        /* End of Outputs for SubSystem: '<S63>/Both Charge' */
    }

    /* End of If: '<S63>/If' */
}

/*
 * Output and update for action system:
 *    '<S92>/ESMC_NotActv'
 *    '<S94>/ESMC_NotActv'
 */
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_ESMC_NotActv(P2VAR(float32, AUTOMATIC,
    ESMR_VAR_INIT) rty_PIDTermNotActv)
{
    /* SignalConversion generated from: '<S103>/PIDTermNotActv' incorporates:
     *  Constant: '<S103>/Constant Value'
     */
    *rty_PIDTermNotActv = 0.0F;
}

/*
 * Output and update for atomic system:
 *    '<S530>/LT_PL_Aribitration'
 *    '<S564>/LT_PL_Aribitration'
 */
static FUNC(void, ESMR_CODE_LOCAL) ESMR_ac_LT_PL_Aribitration(VAR(float32,
    AUTOMATIC) rtu_HVBatPwr, VAR(float32, AUTOMATIC) rtu_BPLTPL, VAR(float32,
    AUTOMATIC) rtu_BPETPL, VAR(float32, AUTOMATIC) rtu_HLAlwdCnt, VAR(float32,
    AUTOMATIC) rtu_RecoveryCnt, VAR(float32, AUTOMATIC) rtu_CntIncr_BPLTPL, VAR
    (float32, AUTOMATIC) rtu_CntIncr_BPETPL, VAR(float32, AUTOMATIC)
    rtu_CntDecr_BPLTPL, VAR(float32, AUTOMATIC) rtu_CntDecr_BPETPL, P2VAR
    (B_LT_PL_Aribitration_ESMR_ac_T, AUTOMATIC, ESMR_VAR_INIT) localB, P2VAR
    (DW_LT_PL_Aribitration_ESMR_ac_T, AUTOMATIC, ESMR_VAR_INIT) localDW)
{
    /* Chart: '<S530>/LT_PL_Aribitration' */
    /* Gateway: LT_PL_Aribitration/LT_PL_Aribitration */
    /* During: LT_PL_Aribitration/LT_PL_Aribitration */
    if (((uint32)localDW->is_active_c1_ESMC_ArbLTPL) == 0U)
    {
        /* Entry: LT_PL_Aribitration/LT_PL_Aribitration */
        localDW->is_active_c1_ESMC_ArbLTPL = 1U;

        /* Entry Internal: LT_PL_Aribitration/LT_PL_Aribitration */
        /* Transition: '<S535>:13' */
        localB->VeESMR_Cnt_CounterSig = 1.0F;
        localDW->is_c1_ESMC_ArbLTPL = ESMR_ac_IN_BatPackLongTermPwrLim;

        /* Entry 'BatPackLongTermPwrLim': '<S535>:1' */
        localB->LTPL = rtu_BPLTPL;

        /* Entry Internal 'BatPackLongTermPwrLim': '<S535>:1' */
        /* Transition: '<S535>:29' */
        if (localB->VeESMR_Cnt_CounterSig == 1.0F)
        {
            /* Transition: '<S535>:39' */
            /* Transition: '<S535>:82' */
            localB->VeESMR_Cnt_CounterSig = 1.0F;
        }
        else
        {
            if (localB->VeESMR_Cnt_CounterSig > 1.0F)
            {
                /* Transition: '<S535>:37' */
                /* Transition: '<S535>:71' */
                localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPLTPL;
            }
        }
    }
    else
    {
        switch (localDW->is_c1_ESMC_ArbLTPL)
        {
          case ESMR_ac_IN_BatPackExtTermPwrLim:
            /* During 'BatPackExtTermPwrLim': '<S535>:45' */
            if (rtu_HVBatPwr < rtu_BPETPL)
            {
                /* Transition: '<S535>:10' */
                localDW->is_c1_ESMC_ArbLTPL =
                    IN_VeESMR_Cnt_CounterSigMonitoredBPETPwr;

                /* Entry 'VeESMR_Cnt_CounterSigMonitoredBPETPwrLim': '<S535>:4' */
                localB->LTPL = rtu_BPETPL;
            }
            else
            {
                localB->LTPL = rtu_BPETPL;

                /* Transition: '<S535>:79' */
                /* Entry Internal 'BatPackExtTermPwrLim': '<S535>:45' */
                /* Transition: '<S535>:50' */
                if (localB->VeESMR_Cnt_CounterSig == 1.0F)
                {
                    /* Transition: '<S535>:53' */
                    /* Transition: '<S535>:84' */
                    localB->VeESMR_Cnt_CounterSig = 1.0F;
                }
                else
                {
                    if (localB->VeESMR_Cnt_CounterSig > 1.0F)
                    {
                        /* Transition: '<S535>:51' */
                        /* Transition: '<S535>:75' */
                        localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPETPL;
                    }
                }
            }
            break;

          case ESMR_ac_IN_BatPackLongTermPwrLim:
            /* During 'BatPackLongTermPwrLim': '<S535>:1' */
            if (rtu_HVBatPwr >= rtu_BPETPL)
            {
                /* Transition: '<S535>:5' */
                localDW->is_c1_ESMC_ArbLTPL =
                    IN_VeESMR_Cnt_CounterSigMonitoredBPLTPwr;

                /* Entry 'VeESMR_Cnt_CounterSigMonitoredBPLTPwrLim': '<S535>:2' */
                localB->LTPL = rtu_BPLTPL;
            }
            else
            {
                localB->LTPL = rtu_BPLTPL;

                /* Transition: '<S535>:78' */
                /* Entry Internal 'BatPackLongTermPwrLim': '<S535>:1' */
                /* Transition: '<S535>:29' */
                if (localB->VeESMR_Cnt_CounterSig == 1.0F)
                {
                    /* Transition: '<S535>:39' */
                    /* Transition: '<S535>:82' */
                    localB->VeESMR_Cnt_CounterSig = 1.0F;
                }
                else
                {
                    if (localB->VeESMR_Cnt_CounterSig > 1.0F)
                    {
                        /* Transition: '<S535>:37' */
                        /* Transition: '<S535>:71' */
                        localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPLTPL;
                    }
                }
            }
            break;

          case IN_VeESMR_Cnt_CounterSigMonitoredBPETPwr:
            /* During 'VeESMR_Cnt_CounterSigMonitoredBPETPwrLim': '<S535>:4' */
            if (localB->VeESMR_Cnt_CounterSig >= rtu_RecoveryCnt)
            {
                /* Transition: '<S535>:12' */
                /* Transition: '<S535>:90' */
                localB->VeESMR_Cnt_CounterSig = 1.0F;
                localDW->is_c1_ESMC_ArbLTPL = ESMR_ac_IN_BatPackLongTermPwrLim;

                /* Entry 'BatPackLongTermPwrLim': '<S535>:1' */
                localB->LTPL = rtu_BPLTPL;

                /* Entry Internal 'BatPackLongTermPwrLim': '<S535>:1' */
                /* Transition: '<S535>:29' */
                if (localB->VeESMR_Cnt_CounterSig == 1.0F)
                {
                    /* Transition: '<S535>:39' */
                    /* Transition: '<S535>:82' */
                    localB->VeESMR_Cnt_CounterSig = 1.0F;
                }
                else
                {
                    if (localB->VeESMR_Cnt_CounterSig > 1.0F)
                    {
                        /* Transition: '<S535>:37' */
                        /* Transition: '<S535>:71' */
                        localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPLTPL;
                    }
                }
            }
            else if (rtu_HVBatPwr >= rtu_BPETPL)
            {
                /* Transition: '<S535>:11' */
                localDW->is_c1_ESMC_ArbLTPL = ESMR_ac_IN_BatPackExtTermPwrLim;

                /* Entry 'BatPackExtTermPwrLim': '<S535>:45' */
                localB->LTPL = rtu_BPETPL;

                /* Entry Internal 'BatPackExtTermPwrLim': '<S535>:45' */
                /* Transition: '<S535>:50' */
                if (localB->VeESMR_Cnt_CounterSig == 1.0F)
                {
                    /* Transition: '<S535>:53' */
                    /* Transition: '<S535>:84' */
                    localB->VeESMR_Cnt_CounterSig = 1.0F;
                }
                else
                {
                    if (localB->VeESMR_Cnt_CounterSig > 1.0F)
                    {
                        /* Transition: '<S535>:51' */
                        /* Transition: '<S535>:75' */
                        localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPETPL;
                    }
                }
            }
            else
            {
                localB->LTPL = rtu_BPETPL;
                localB->VeESMR_Cnt_CounterSig += rtu_CntIncr_BPETPL;
            }
            break;

          default:
            /* During 'VeESMR_Cnt_CounterSigMonitoredBPLTPwrLim': '<S535>:2' */
            if (rtu_HVBatPwr < rtu_BPETPL)
            {
                /* Transition: '<S535>:6' */
                localDW->is_c1_ESMC_ArbLTPL = ESMR_ac_IN_BatPackLongTermPwrLim;

                /* Entry 'BatPackLongTermPwrLim': '<S535>:1' */
                localB->LTPL = rtu_BPLTPL;

                /* Entry Internal 'BatPackLongTermPwrLim': '<S535>:1' */
                /* Transition: '<S535>:29' */
                if (localB->VeESMR_Cnt_CounterSig == 1.0F)
                {
                    /* Transition: '<S535>:39' */
                    /* Transition: '<S535>:82' */
                    localB->VeESMR_Cnt_CounterSig = 1.0F;
                }
                else
                {
                    if (localB->VeESMR_Cnt_CounterSig > 1.0F)
                    {
                        /* Transition: '<S535>:37' */
                        /* Transition: '<S535>:71' */
                        localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPLTPL;
                    }
                }
            }
            else if (localB->VeESMR_Cnt_CounterSig >= rtu_HLAlwdCnt)
            {
                /* Transition: '<S535>:7' */
                /* Transition: '<S535>:88' */
                localB->VeESMR_Cnt_CounterSig = 1.0F;
                localDW->is_c1_ESMC_ArbLTPL = ESMR_ac_IN_BatPackExtTermPwrLim;

                /* Entry 'BatPackExtTermPwrLim': '<S535>:45' */
                localB->LTPL = rtu_BPETPL;

                /* Entry Internal 'BatPackExtTermPwrLim': '<S535>:45' */
                /* Transition: '<S535>:50' */
                if (localB->VeESMR_Cnt_CounterSig == 1.0F)
                {
                    /* Transition: '<S535>:53' */
                    /* Transition: '<S535>:84' */
                    localB->VeESMR_Cnt_CounterSig = 1.0F;
                }
                else
                {
                    if (localB->VeESMR_Cnt_CounterSig > 1.0F)
                    {
                        /* Transition: '<S535>:51' */
                        /* Transition: '<S535>:75' */
                        localB->VeESMR_Cnt_CounterSig -= rtu_CntDecr_BPETPL;
                    }
                }
            }
            else
            {
                localB->LTPL = rtu_BPLTPL;
                localB->VeESMR_Cnt_CounterSig += rtu_CntIncr_BPLTPL;
            }
            break;
        }
    }

    /* End of Chart: '<S530>/LT_PL_Aribitration' */
}

/* Model step function for TID1 */
FUNC(void, ESMR_CODE) ESMR_MedTEB(void) /* Explicit Task: MedTEB */
{
    float32 TmpSignalConversionAtTmpVM_FcnCallSub_bz;
    float32 TmpSignalConversionAtTmpVM_FcnCallSub_h3;
    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_c;
    float32 TmpSignalConversionAtTmpVM_FcnCallSubs_k;
    float32 rtb_Sum9_i;
    float32 rtb_Switch2_kx;
    float32 rtb_Switch2_nw;
    TeESSR_e_EngStartStopSt TmpSignalConversionAtTmpVM_FcnCallSub_bs;
    TeHVTR_e_HV_BatCntctrStat TmpSignalConversionAtTmpVM_FcnCallSub_j1;
    sint8 rtAction;
    sint8 rtPrevAction;
    boolean TmpSignalConversionAtTmpVM_FcnCallSub_pp;
    boolean rtb_AND_gn;
    boolean rtb_Comparison3_p;

#if Rte_SysCon_Variant_ESMR_FCPS_Func

    sint32 tmp;

#endif

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value
        ((&(VeESMN_U_BatVoltModMinArb_12p5)));

    /* Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb' */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value
        ((&(VeESMN_U_BatVoltModMaxArb_12p5)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_AccPwr'
     */
    (void)Rte_Read_VeHVTR_P_HV_AccPwr_Value
        (&ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Inport: '<Root>/VeBPCR_b_PwrLimON'
     */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value
        (&ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Merge: '<Root>/Merge_7_Irv'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_BatEstdVoltMaxLim_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Merge: '<Root>/Merge_6_Irv'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_BatEstdVoltMinLim_write_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_Total_LT_DsChrg_PwrLmtRL'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_Total_LT_DsChrg_PwrLmtRL_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_Total_LT_Chrg_PwrLmtRL'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_Total_LT_Chrg_PwrLmtRL_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_DsChrg_PwrLmtRL'
     */
    TmpSignalConversionAtTmpVM_FcnCallSubs_k =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_Total_ST_DsChrg_PwrLmtRL_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMC_e_DschrgPwrLimST_ID_A'
     */
    VeESMC_e_STMinLim_UV_ID =
        Rte_IrvRead_ESMR_MedTEB_VeESMC_e_DschrgPwrLimST_ID_A_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' */
#if !Rte_SysCon_Variant_ESMR_FCPS_Func && Rte_SysCon_Variant_ESMR_FCPS_NoFunc

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL'
     */
    ESMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_Total_ST_Chrg_PwrLmtRL_IRV();

#elif !(!Rte_SysCon_Variant_ESMR_FCPS_Func) || !Rte_SysCon_Variant_ESMR_FCPS_NoFunc

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' */
    ESMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Inport: '<Root>/VeBPCR_U_CellVoltUVThrsh'
     */
    (void)Rte_Read_VeBPCR_U_CellVoltUVThrsh_Value
        (&TmpSignalConversionAtTmpVM_FcnCallSub_h3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Inport: '<Root>/VeBPCR_U_CellVoltOVThrsh'
     */
    (void)Rte_Read_VeBPCR_U_CellVoltOVThrsh_Value
        (&TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value
        (&TmpSignalConversionAtTmpVM_FcnCallSub_bz);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMC_e_ChrgPwrLimST_ID_A'
     */
    VeESMC_e_STMinLim_OV_ID =
        Rte_IrvRead_ESMR_MedTEB_VeESMC_e_ChrgPwrLimST_ID_A_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMN_e_EngStartStopSt'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_bs =
        Rte_IrvRead_ESMR_MedTEB_VeESMN_e_EngStartStopSt_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMN_e_HVBatCntctrStat'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_j1 =
        Rte_IrvRead_ESMR_MedTEB_VeESMN_e_HVBatCntctrStat_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  Inport: '<Root>/VeBPCR_b_CmdBatPwrLimSFA_Enbl'
     */
    (void)Rte_Read_VeBPCR_b_CmdBatPwrLimSFA_Enbl_Value
        (&TmpSignalConversionAtTmpVM_FcnCallSub_pp);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_U_FCPS_Volt'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_U_FCPS_Volt_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Volt_FA'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_b_FCPS_Volt_FA_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_U_FCPS_UpperVoltLIM'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hb =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_U_FCPS_UpperVoltLIM_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Upper_Voltage_LIM_FA'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hn =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_b_FCPS_Upper_Voltage_LIM_FA_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_U_FCPS_LowerVoltLIM'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cb =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_U_FCPS_LowerVoltLIM_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Lower_Voltage_LIM_FA'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_b_FCPS_Lower_Voltage_LIM_FA_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMC_P_ChrgPwrLimST_RL'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g =
        Rte_IrvRead_ESMR_MedTEB_VeESMC_P_ChrgPwrLimST_RL_IRV();

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_FCPS_Gen_Pwr'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eu =
        Rte_IrvRead_ESMR_MedTEB_VeESMR_P_FCPS_Gen_Pwr_IRV();

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30' incorporates:
     *  SignalConversion generated from: '<S2>/HybAlternatorMd'
     */
    ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eb =
        Rte_IrvRead_ESMR_MedTEB_HybAlternatorMd_IRV();

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEB'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Process_BatModVlt'
     */
    /* Outputs for Atomic SubSystem: '<S7>/Bit Selector3' */
    /* Switch: '<S7>/Switch22' incorporates:
     *  Constant: '<S222>/Constant Value'
     *  Constant: '<S226>/Calib'
     *  RelationalOperator: '<S222>/Greater  Than'
     *  S-Function (sfix_bitop): '<S222>/Bitwise Logical Operator'
     */
    if ((((sint32)KeESMR_d_InputOvrdEnbl_OVUV) & 2) > 0)
    {
        /* Switch: '<S7>/Switch22' incorporates:
         *  Constant: '<S223>/Calib'
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb'
         */
        VeESMN_U_BatVoltModMaxArb_12p5 = KeESMR_U_BatVoltModMaxArbOvrd;
    }

    /* End of Switch: '<S7>/Switch22' */
    /* End of Outputs for SubSystem: '<S7>/Bit Selector3' */

    /* Outputs for Atomic SubSystem: '<S7>/Bit Selector14' */
    /* Switch: '<S7>/Switch21' incorporates:
     *  Constant: '<S221>/Constant Value'
     *  Constant: '<S226>/Calib'
     *  RelationalOperator: '<S221>/Greater  Than'
     *  S-Function (sfix_bitop): '<S221>/Bitwise Logical Operator'
     */
    if ((((sint32)KeESMR_d_InputOvrdEnbl_OVUV) & 4) > 0)
    {
        /* Switch: '<S7>/Switch21' incorporates:
         *  Constant: '<S224>/Calib'
         *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
         */
        VeESMN_U_BatVoltModMinArb_12p5 = KeESMR_U_BatVoltModMinArbOvrd;
    }

    /* End of Switch: '<S7>/Switch21' */
    /* End of Outputs for SubSystem: '<S7>/Bit Selector14' */

    /* Switch: '<S7>/Switch' incorporates:
     *  Constant: '<S225>/Calib'
     *  Switch: '<S7>/Switch1'
     */
    if (KeESMR_b_BatVolt_Use12p5)
    {
        /* Switch: '<S7>/Switch' */
        VeESMN_U_BatVoltModMaxArb = VeESMN_U_BatVoltModMaxArb_12p5;

        /* Switch: '<S7>/Switch1' */
        VeESMN_U_BatVoltModMinArb = VeESMN_U_BatVoltModMinArb_12p5;
    }
    else
    {
        /* Switch: '<S7>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
         *  SignalConversion generated from: '<S4>/VeESMN_U_BatVoltModMaxArb_Init'
         */
        VeESMN_U_BatVoltModMaxArb =
            Rte_IrvRead_ESMR_MedTEB_VeESMN_U_BatVoltModMaxArb_Init_IRV();

        /* Switch: '<S7>/Switch1' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
         *  SignalConversion generated from: '<S4>/VeESMN_U_BatVoltModMinArb_Init'
         */
        VeESMN_U_BatVoltModMinArb =
            Rte_IrvRead_ESMR_MedTEB_VeESMN_U_BatVoltModMinArb_Init_IRV();
    }

    /* End of Switch: '<S7>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESMC_ArbPwrLim'
     */

    /* Outputs for Atomic SubSystem: '<S9>/BE_Arb_ST_PwrLim' */
    ESMR_ac_BE_Arb_ST_PwrLim();

    /* End of Outputs for SubSystem: '<S9>/BE_Arb_ST_PwrLim' */

    /* Switch: '<S9>/Switch2' incorporates:
     *  Constant: '<S59>/Calib'
     *  Constant: '<S60>/Calib'
     *  Constant: '<S61>/Calib'
     *  Constant: '<S62>/Calib'
     *  MinMax: '<S9>/MinMax3'
     *  MinMax: '<S9>/MinMax4'
     *  MinMax: '<S9>/MinMax5'
     *  MinMax: '<S9>/MinMax6'
     *  Switch: '<S9>/Switch1'
     */
    if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eb)
    {
        VeESMR_P_BE_ST_DsChrg_PwrLim = KeESMR_P_DschrgPwrLimST_ThrmlDerate;
        VeESMR_P_BE_ST_Chrg_PwrLim = KeESMR_P_ChrgPwrLimST_ThrmlDerate;
    }
    else
    {
        VeESMR_P_BE_ST_DsChrg_PwrLim = fminf(fmaxf(ESMR_ac_B.Merge1,
            KeESMR_P_ST_MaxLim),
            ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);
        VeESMR_P_BE_ST_Chrg_PwrLim = fmaxf(fminf(ESMR_ac_B.Merge2,
            KeESMR_P_ST_MinLim),
            ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h);
    }

    /* End of Switch: '<S9>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S8>/Arb_ST_LT_PwrLim' */
    ESMR_ac_Arb_ST_LT_PwrLim();

    /* End of Outputs for SubSystem: '<S8>/Arb_ST_LT_PwrLim' */

    /* Gain: '<S13>/Gain' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write'
     */
    VeESMR_P_BattLTMaxLim1 = ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb;

    /* Gain: '<S14>/Gain' incorporates:
     *  DataStoreWrite: '<S8>/Data Store Write3'
     */
    VeESMR_P_BattLTMinLim1 = ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb;

    /* DataStoreWrite: '<S9>/Data Store Write1' */
    ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrSTArb = VeESMR_P_BE_ST_DsChrg_PwrLim;

    /* DataStoreWrite: '<S9>/Data Store Write2' */
    ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrSTArb = VeESMR_P_BE_ST_Chrg_PwrLim;

    /* Gain: '<S10>/Gain' */
    VeESMR_P_BatSTMinLim1 = VeESMR_P_BE_ST_Chrg_PwrLim;

    /* Gain: '<S11>/Gain' */
    VeESMR_P_BatSTMaxLim1 = VeESMR_P_BE_ST_DsChrg_PwrLim;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESMC_ST_OVUV'
     */

    /* Product: '<S86>/Product1' incorporates:
     *  Logic: '<S86>/Logical4'
     *  Logic: '<S86>/Logical8'
     *  Product: '<S86>/Product2'
     *  Product: '<S86>/Product3'
     *  Switch: '<S95>/Switch1'
     *  Switch: '<S96>/Switch1'
     *  Switch: '<S97>/Switch1'
     *  Switch: '<S97>/Switch2'
     *  Switch: '<S97>/Switch3'
     *  Switch: '<S98>/Switch1'
     *  Switch: '<S98>/Switch2'
     *  Switch: '<S98>/Switch3'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* Product: '<S86>/Product1' incorporates:
     *  Constant: '<S89>/Calib'
     */
    VeESMR_U_FCPS_Module_Volt =
        ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p /
        KeESMR_k_NumOfModule;
    if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n)
    {
        /* Switch: '<S167>/Switch1' */
        rtb_Switch2_kx = VeESMN_U_BatVoltModMaxArb;

        /* Switch: '<S220>/Switch1' */
        rtb_Switch2_nw = VeESMN_U_BatVoltModMinArb;
    }
    else
    {
        /* Switch: '<S167>/Switch1' incorporates:
         *  MinMax: '<S86>/MinMax1'
         */
        rtb_Switch2_kx = fmaxf(VeESMN_U_BatVoltModMaxArb,
                               VeESMR_U_FCPS_Module_Volt);

        /* Switch: '<S220>/Switch1' incorporates:
         *  MinMax: '<S86>/MinMax3'
         */
        rtb_Switch2_nw = fminf(VeESMN_U_BatVoltModMinArb,
                               VeESMR_U_FCPS_Module_Volt);
    }

    /* Product: '<S86>/Product2' incorporates:
     *  Constant: '<S89>/Calib'
     */
    VeESMR_U_FCPS_Upper_ModulVoltLIM =
        ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hb /
        KeESMR_k_NumOfModule;
    rtb_AND_gn = !TmpSignalConversionAtTmpVM_FcnCallSub_pp;
    if (rtb_AND_gn && (!ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hn))
    {
        /* UnitDelay: '<S150>/Unit Delay' incorporates:
         *  MinMax: '<S86>/MinMax2'
         */
        rtb_Sum9_i = fminf(VeESMR_U_FCPS_Upper_ModulVoltLIM,
                           TmpSignalConversionAtTmpVM_FcnCallSubs_c);
    }
    else if (TmpSignalConversionAtTmpVM_FcnCallSub_pp)
    {
        /* Switch: '<S97>/Switch2' incorporates:
         *  UnitDelay: '<S150>/Unit Delay'
         */
        rtb_Sum9_i = VeESMR_U_FCPS_Upper_ModulVoltLIM;
    }
    else if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_hn)
    {
        /* Switch: '<S97>/Switch3' incorporates:
         *  Switch: '<S97>/Switch2'
         *  UnitDelay: '<S150>/Unit Delay'
         */
        rtb_Sum9_i = TmpSignalConversionAtTmpVM_FcnCallSubs_c;
    }
    else
    {
        /* UnitDelay: '<S150>/Unit Delay' incorporates:
         *  Constant: '<S87>/Calib'
         *  Switch: '<S97>/Switch2'
         *  Switch: '<S97>/Switch3'
         */
        rtb_Sum9_i = KeESMR_U_OVActvLimpHome;
    }

    /* Product: '<S86>/Product3' incorporates:
     *  Constant: '<S89>/Calib'
     *  Switch: '<S97>/Switch2'
     *  Switch: '<S97>/Switch3'
     */
    VeESMR_U_FCPS_Lower_ModulVoltLIM =
        ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cb /
        KeESMR_k_NumOfModule;
    if (rtb_AND_gn && (!ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j))
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  MinMax: '<S86>/MinMax4'
         */
        VeESMC_P_STMaxLim_UV = fmaxf(VeESMR_U_FCPS_Lower_ModulVoltLIM,
            TmpSignalConversionAtTmpVM_FcnCallSub_h3);
    }
    else if (TmpSignalConversionAtTmpVM_FcnCallSub_pp)
    {
        /* Switch: '<S98>/Switch2' incorporates:
         *  Switch: '<S188>/Switch1'
         */
        VeESMC_P_STMaxLim_UV = VeESMR_U_FCPS_Lower_ModulVoltLIM;
    }
    else if (ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j)
    {
        /* Switch: '<S98>/Switch3' incorporates:
         *  Switch: '<S188>/Switch1'
         *  Switch: '<S98>/Switch2'
         */
        VeESMC_P_STMaxLim_UV = TmpSignalConversionAtTmpVM_FcnCallSub_h3;
    }
    else
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         *  Switch: '<S98>/Switch2'
         *  Switch: '<S98>/Switch3'
         */
        VeESMC_P_STMaxLim_UV = KeESMR_U_UVActvLimpHome;
    }

#endif

    /* End of Product: '<S86>/Product1' */

    /* Logic: '<S6>/Logical2' incorporates:
     *  Constant: '<S81>/Constant'
     *  Constant: '<S84>/Constant'
     *  Constant: '<S85>/Constant'
     *  Logic: '<S6>/Logical1'
     *  RelationalOperator: '<S6>/Comparison1'
     *  RelationalOperator: '<S6>/Comparison5'
     *  RelationalOperator: '<S6>/Equal3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
     */
    VeESMR_b_OV_UV_RegAllwd = (((((uint32)
        TmpSignalConversionAtTmpVM_FcnCallSub_bs) == CeESSR_e_EngOff) ||
        (((uint32)TmpSignalConversionAtTmpVM_FcnCallSub_bs) ==
         CeESSR_e_EngRunning)) && (((uint32)
        TmpSignalConversionAtTmpVM_FcnCallSub_j1) == CeHVTR_e_Closed));

    /* Gain: '<S99>/Gain' incorporates:
     *  Gain: '<S100>/Gain'
     *  Switch: '<S90>/Switch'
     *  Switch: '<S90>/Switch1'
     */
#if !Rte_SysCon_Variant_ESMR_FCPS_Func

    /* Switch: '<S167>/Switch1' */
    rtb_Switch2_kx = VeESMN_U_BatVoltModMaxArb;
    if (TmpSignalConversionAtTmpVM_FcnCallSub_pp)
    {
        /* Switch: '<S188>/Switch1' incorporates:
         *  Constant: '<S88>/Calib'
         */
        VeESMC_P_STMaxLim_UV = KeESMR_U_UVActvLimpHome;

        /* UnitDelay: '<S150>/Unit Delay' incorporates:
         *  Constant: '<S87>/Calib'
         */
        rtb_Sum9_i = KeESMR_U_OVActvLimpHome;
    }
    else
    {
        /* Switch: '<S188>/Switch1' */
        VeESMC_P_STMaxLim_UV = TmpSignalConversionAtTmpVM_FcnCallSub_h3;

        /* UnitDelay: '<S150>/Unit Delay' */
        rtb_Sum9_i = TmpSignalConversionAtTmpVM_FcnCallSubs_c;
    }

    /* Switch: '<S220>/Switch1' */
    rtb_Switch2_nw = VeESMN_U_BatVoltModMinArb;

#endif

    /* End of Gain: '<S99>/Gain' */

    /* SignalConversion generated from: '<S6>/VariantSource' */
    VeESMR_U_MaxModuleVolt_Measure = rtb_Switch2_kx;

    /* SignalConversion generated from: '<S6>/VariantSource1' */
    VeESMR_U_OV_BaseThrsh = rtb_Sum9_i;

    /* If: '<S92>/If' */
    rtPrevAction = ESMR_ac_DW.If_ActiveSubsystem;
    rtAction = (sint8)(VeESMR_b_OV_UV_RegAllwd ? 1 : 0);
    ESMR_ac_DW.If_ActiveSubsystem = (sint8)(VeESMR_b_OV_UV_RegAllwd ? 1 : 0);
    if (rtPrevAction != (VeESMR_b_OV_UV_RegAllwd ? 1 : 0))
    {
        if (rtPrevAction == 1)
        {
            /* Disable for If: '<S102>/If' */
            ESMR_ac_DW.If_ActiveSubsystem_d = -1;
        }
    }

    if (rtAction == 0)
    {
        /* Outputs for IfAction SubSystem: '<S92>/ESMC_NotActv' incorporates:
         *  ActionPort: '<S103>/Action Port'
         */
        ESMR_ac_ESMC_NotActv(&rtb_Sum9_i);

        /* End of Outputs for SubSystem: '<S92>/ESMC_NotActv' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* Enable for If: '<S92>/If' */
        }

        /* Outputs for IfAction SubSystem: '<S92>/DtrmnST_OV_PID' incorporates:
         *  ActionPort: '<S102>/Action Port'
         */

        /* Sum: '<S111>/Sum3' incorporates:
         *  Lookup_n-D: '<S115>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
         *  SignalConversion generated from: '<S6>/VariantSource1'
         */
        VeESMC_U_OVActvThsld = VeESMR_U_OV_BaseThrsh - look2_iflf_binlca_16a
            (VeESMR_U_OV_BaseThrsh, TmpSignalConversionAtTmpVM_FcnCallSub_bz, ((
               const float32 *)&(KxESMR_U_OVThrshOffset[0])), ((const float32 *)
              &(KyESMR_U_OVThrshOffset[0])), ((const float32 *)
              &(KtESMR_U_OVThrshOffset[0])), ESMR_ac_ConstP.pooled12, 7U);

        /* RelationalOperator: '<S111>/Comparison2' */
        VeESMC_b_OVActv = (VeESMR_U_MaxModuleVolt_Measure > VeESMC_U_OVActvThsld);

        /* If: '<S102>/If' */
        rtPrevAction = ESMR_ac_DW.If_ActiveSubsystem_d;
        ESMR_ac_DW.If_ActiveSubsystem_d = (sint8)(VeESMC_b_OVActv ? 1 : 0);
        if (!VeESMC_b_OVActv)
        {
            /* Outputs for IfAction SubSystem: '<S102>/OV_not_active' incorporates:
             *  ActionPort: '<S113>/Action Port'
             */
            /* UnitDelay: '<S150>/Unit Delay' incorporates:
             *  Constant: '<S113>/Constant Value'
             *  SignalConversion generated from: '<S113>/PIDTermDefault'
             */
            rtb_Sum9_i = 0.0F;

            /* End of Outputs for SubSystem: '<S102>/OV_not_active' */
        }
        else
        {
            if ((VeESMC_b_OVActv ? 1 : 0) != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S102>/OV_active' incorporates:
                 *  ActionPort: '<S112>/Action Port'
                 */
                /* InitializeConditions for If: '<S102>/If' incorporates:
                 *  Switch: '<S119>/Switch2'
                 *  UnitDelay: '<S119>/Unit Delay'
                 *  UnitDelay: '<S119>/Unit Delay1'
                 *  UnitDelay: '<S120>/Unit Delay2'
                 *  UnitDelay: '<S121>/Unit Delay2'
                 */
                ESMR_ac_DW.UnitDelay1_DSTATE_d = 0.0F;
                ESMR_ac_DW.UnitDelay2_DSTATE_d = 0.0F;
                ESMR_ac_DW.UnitDelay2_DSTATE_e = 0.0F;
                ESMR_ac_DW.UnitDelay_DSTATE_cj = 0.0F;

                /* End of InitializeConditions for SubSystem: '<S102>/OV_active' */

                /* SystemReset for IfAction SubSystem: '<S102>/OV_active' incorporates:
                 *  ActionPort: '<S112>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S119>/EdgeRising' */
                /* SystemReset for If: '<S102>/If' incorporates:
                 *  UnitDelay: '<S122>/Unit Delay'
                 *  UnitDelay: '<S128>/Unit Delay'
                 *  UnitDelay: '<S129>/Unit Delay'
                 *  UnitDelay: '<S131>/Unit Delay'
                 *  UnitDelay: '<S140>/Unit Delay'
                 */
                ESMR_ac_DW.UnitDelay_DSTATE_hi = false;

                /* End of SystemReset for SubSystem: '<S119>/EdgeRising' */

                /* SystemReset for Atomic SubSystem: '<S120>/EdgeRising' */
                ESMR_ac_DW.UnitDelay_DSTATE_dt = false;

                /* End of SystemReset for SubSystem: '<S120>/EdgeRising' */

                /* SystemReset for Atomic SubSystem: '<S121>/EdgeRising' */
                ESMR_ac_DW.UnitDelay_DSTATE_e3 = false;

                /* End of SystemReset for SubSystem: '<S121>/EdgeRising' */

                /* SystemReset for Atomic SubSystem: '<S119>/Signal Latch On' */
                ESMR_ac_DW.UnitDelay_DSTATE_ci = false;

                /* End of SystemReset for SubSystem: '<S119>/Signal Latch On' */

                /* SystemReset for Atomic SubSystem: '<S119>/Signal Latch On1' */
                ESMR_ac_DW.UnitDelay_DSTATE_gd = false;

                /* End of SystemReset for SubSystem: '<S119>/Signal Latch On1' */
                /* End of SystemReset for SubSystem: '<S102>/OV_active' */
            }

            /* Outputs for IfAction SubSystem: '<S102>/OV_active' incorporates:
             *  ActionPort: '<S112>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S112>/Limiter1' */
            /* Switch: '<S118>/Switch1' incorporates:
             *  Constant: '<S116>/Calib'
             *  RelationalOperator: '<S118>/Relational Operator'
             */
            if (KeESMR_U_OVHiLim < VeESMR_U_MaxModuleVolt_Measure)
            {
                /* Switch: '<S119>/Switch2' */
                rtb_Switch2_kx = KeESMR_U_OVHiLim;
            }
            else
            {
                /* Switch: '<S119>/Switch2' */
                rtb_Switch2_kx = VeESMR_U_MaxModuleVolt_Measure;
            }

            /* End of Switch: '<S118>/Switch1' */

            /* Switch: '<S118>/Switch' incorporates:
             *  Constant: '<S117>/Calib'
             *  RelationalOperator: '<S118>/Relational Operator1'
             */
            if (rtb_Switch2_kx <= KeESMR_U_OVLoLim)
            {
                /* Switch: '<S118>/Switch' */
                rtb_Switch2_kx = KeESMR_U_OVLoLim;
            }

            /* End of Switch: '<S118>/Switch' */
            /* End of Outputs for SubSystem: '<S112>/Limiter1' */

            /* Outputs for Atomic SubSystem: '<S119>/EdgeRising' */
            /* Logic: '<S122>/OR1' incorporates:
             *  UnitDelay: '<S122>/Unit Delay'
             */
            TmpSignalConversionAtTmpVM_FcnCallSub_pp =
                !ESMR_ac_DW.UnitDelay_DSTATE_hi;

            /* Update for UnitDelay: '<S122>/Unit Delay' incorporates:
             *  Constant: '<S119>/TRUE Constant'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_hi = true;

            /* Switch: '<S119>/Switch2' incorporates:
             *  Logic: '<S122>/AND'
             */
            if (TmpSignalConversionAtTmpVM_FcnCallSub_pp)
            {
                ESMR_ac_DW.UnitDelay1_DSTATE_d = rtb_Switch2_kx;
            }

            /* End of Switch: '<S119>/Switch2' */
            /* End of Outputs for SubSystem: '<S119>/EdgeRising' */

            /* Product: '<S119>/Multiplication1' incorporates:
             *  Lookup_n-D: '<S125>/Vector'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
             *  Sum: '<S119>/Sum3'
             */
            VeESMC_P_OVDTerm = (rtb_Switch2_kx - ESMR_ac_DW.UnitDelay1_DSTATE_d)
                * look1_iflf_binlca_16a(TmpSignalConversionAtTmpVM_FcnCallSub_bz,
                ((const float32 *)&(KxESMR_P_OVDFac[0])), ((const float32 *)
                &(KtESMR_P_OVDFac[0])), 6U);

            /* Switch: '<S120>/Switch' incorporates:
             *  Constant: '<S133>/Calib'
             *  Sum: '<S120>/Sum1'
             */
            VeESMC_U_OVITermRL = VeESMR_U_OV_BaseThrsh - KeESMR_U_OVITermDelta;

            /* Outputs for Atomic SubSystem: '<S120>/EdgeRising' */
            /* Logic: '<S131>/OR1' incorporates:
             *  UnitDelay: '<S131>/Unit Delay'
             */
            TmpSignalConversionAtTmpVM_FcnCallSub_pp =
                !ESMR_ac_DW.UnitDelay_DSTATE_dt;

            /* Update for UnitDelay: '<S131>/Unit Delay' incorporates:
             *  Constant: '<S120>/TRUE Constant'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_dt = true;

            /* End of Outputs for SubSystem: '<S120>/EdgeRising' */

            /* Sum: '<S120>/Sum2' incorporates:
             *  Constant: '<S134>/Calib'
             */
            VeESMC_U_OVPITermActvThsld = VeESMC_U_OVITermRL -
                KeESMR_U_OVITermThsld;

            /* RelationalOperator: '<S120>/Comparison3' */
            VeESMC_b_OVITermRLActvd = (rtb_Switch2_kx >
                VeESMC_U_OVPITermActvThsld);

            /* Outputs for Atomic SubSystem: '<S120>/EdgeRising' */
            /* Switch: '<S132>/Switch1' incorporates:
             *  Logic: '<S131>/AND'
             */
            if (!TmpSignalConversionAtTmpVM_FcnCallSub_pp)
            {
                /* Switch: '<S120>/Switch' incorporates:
                 *  Constant: '<S136>/Calib'
                 *  Switch: '<S120>/Switch2'
                 */
                if (VeESMC_b_OVITermRLActvd)
                {
                    /* Switch: '<S120>/Switch1' incorporates:
                     *  Constant: '<S135>/Calib'
                     */
                    if (KeESMR_b_UseBase_OVOffset)
                    {
                        VeESMC_U_OVITermRL = VeESMR_U_OV_BaseThrsh;
                    }

                    /* End of Switch: '<S120>/Switch1' */
                }
                else
                {
                    if (!KeESMR_b_UseDelta_OVOffset)
                    {
                        VeESMC_U_OVITermRL = VeESMR_U_OV_BaseThrsh;
                    }
                }

                /* Sum: '<S120>/Sum9' incorporates:
                 *  UnitDelay: '<S120>/Unit Delay2'
                 */
                rtb_Sum9_i = VeESMC_U_OVITermRL - ESMR_ac_DW.UnitDelay2_DSTATE_d;

                /* Outputs for Atomic SubSystem: '<S120>/Limiter2' */
                /* Switch: '<S139>/Switch1' incorporates:
                 *  Constant: '<S138>/Calib'
                 *  RelationalOperator: '<S139>/Relational Operator'
                 */
                if (KeESMR_dU_OVITermRiseRL < rtb_Sum9_i)
                {
                    /* Switch: '<S139>/Switch1' */
                    rtb_Sum9_i = KeESMR_dU_OVITermRiseRL;
                }

                /* End of Switch: '<S139>/Switch1' */

                /* Switch: '<S139>/Switch' incorporates:
                 *  Constant: '<S137>/Calib'
                 *  RelationalOperator: '<S139>/Relational Operator1'
                 */
                if (rtb_Sum9_i <= KeESMR_dU_OVITermFallRL)
                {
                    rtb_Sum9_i = KeESMR_dU_OVITermFallRL;
                }

                /* End of Switch: '<S139>/Switch' */
                /* End of Outputs for SubSystem: '<S120>/Limiter2' */

                /* Switch: '<S120>/Switch' incorporates:
                 *  Sum: '<S120>/Sum8'
                 *  Switch: '<S132>/Switch1'
                 *  UnitDelay: '<S120>/Unit Delay2'
                 */
                VeESMC_U_OVITermRL = rtb_Sum9_i + ESMR_ac_DW.UnitDelay2_DSTATE_d;
            }

            /* End of Switch: '<S132>/Switch1' */
            /* End of Outputs for SubSystem: '<S120>/EdgeRising' */

            /* Sum: '<S119>/Sum2' */
            VeESMC_U_OVITermRL_Diff = rtb_Switch2_kx - VeESMC_U_OVITermRL;

            /* Switch: '<S121>/Switch' incorporates:
             *  Constant: '<S142>/Calib'
             *  Sum: '<S121>/Sum1'
             */
            VeESMC_U_OVPTermRL = VeESMR_U_OV_BaseThrsh - KeESMR_U_OVPTermDelta;

            /* Outputs for Atomic SubSystem: '<S121>/EdgeRising' */
            /* Logic: '<S140>/OR1' incorporates:
             *  UnitDelay: '<S140>/Unit Delay'
             */
            TmpSignalConversionAtTmpVM_FcnCallSub_pp =
                !ESMR_ac_DW.UnitDelay_DSTATE_e3;

            /* Update for UnitDelay: '<S140>/Unit Delay' incorporates:
             *  Constant: '<S121>/TRUE Constant'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_e3 = true;

            /* End of Outputs for SubSystem: '<S121>/EdgeRising' */

            /* Sum: '<S121>/Sum2' incorporates:
             *  Constant: '<S143>/Calib'
             */
            VeESMC_U_OVPTermActvThsld = VeESMC_U_OVPTermRL -
                KeESMR_U_OVPTermThsld;

            /* RelationalOperator: '<S121>/Comparison3' */
            VeESMC_b_OVPTermRLActvd = (rtb_Switch2_kx >
                VeESMC_U_OVPTermActvThsld);

            /* Outputs for Atomic SubSystem: '<S121>/EdgeRising' */
            /* Switch: '<S141>/Switch1' incorporates:
             *  Logic: '<S140>/AND'
             */
            if (!TmpSignalConversionAtTmpVM_FcnCallSub_pp)
            {
                /* Switch: '<S121>/Switch' incorporates:
                 *  Constant: '<S145>/Calib'
                 *  Switch: '<S121>/Switch2'
                 */
                if (VeESMC_b_OVPTermRLActvd)
                {
                    /* Switch: '<S121>/Switch1' incorporates:
                     *  Constant: '<S144>/Calib'
                     */
                    if (KeESMR_b_UseBase_OVOffset)
                    {
                        VeESMC_U_OVPTermRL = VeESMR_U_OV_BaseThrsh;
                    }

                    /* End of Switch: '<S121>/Switch1' */
                }
                else
                {
                    if (!KeESMR_b_UseDelta_OVOffset)
                    {
                        VeESMC_U_OVPTermRL = VeESMR_U_OV_BaseThrsh;
                    }
                }

                /* Sum: '<S121>/Sum9' incorporates:
                 *  UnitDelay: '<S121>/Unit Delay2'
                 */
                rtb_Sum9_i = VeESMC_U_OVPTermRL - ESMR_ac_DW.UnitDelay2_DSTATE_e;

                /* Outputs for Atomic SubSystem: '<S121>/Limiter2' */
                /* Switch: '<S148>/Switch1' incorporates:
                 *  Constant: '<S147>/Calib'
                 *  RelationalOperator: '<S148>/Relational Operator'
                 */
                if (KeESMR_dU_OVPTermRiseRL < rtb_Sum9_i)
                {
                    /* Switch: '<S148>/Switch1' */
                    rtb_Sum9_i = KeESMR_dU_OVPTermRiseRL;
                }

                /* End of Switch: '<S148>/Switch1' */

                /* Switch: '<S148>/Switch' incorporates:
                 *  Constant: '<S146>/Calib'
                 *  RelationalOperator: '<S148>/Relational Operator1'
                 */
                if (rtb_Sum9_i <= KeESMR_dU_OVPTermFallRL)
                {
                    rtb_Sum9_i = KeESMR_dU_OVPTermFallRL;
                }

                /* End of Switch: '<S148>/Switch' */
                /* End of Outputs for SubSystem: '<S121>/Limiter2' */

                /* Switch: '<S121>/Switch' incorporates:
                 *  Sum: '<S121>/Sum8'
                 *  Switch: '<S141>/Switch1'
                 *  UnitDelay: '<S121>/Unit Delay2'
                 */
                VeESMC_U_OVPTermRL = rtb_Sum9_i + ESMR_ac_DW.UnitDelay2_DSTATE_e;
            }

            /* End of Switch: '<S141>/Switch1' */
            /* End of Outputs for SubSystem: '<S121>/EdgeRising' */

            /* Sum: '<S119>/Sum1' */
            VeESMC_U_OVPTermRL_Diff = rtb_Switch2_kx - VeESMC_U_OVPTermRL;

            /* Outputs for Atomic SubSystem: '<S119>/Signal Latch On' */
            /* Logic: '<S128>/OR2' incorporates:
             *  UnitDelay: '<S128>/Unit Delay'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_ci = ((VeESMC_b_OVPTermRLActvd) ||
                (ESMR_ac_DW.UnitDelay_DSTATE_ci));

            /* End of Outputs for SubSystem: '<S119>/Signal Latch On' */

            /* Outputs for Atomic SubSystem: '<S119>/Signal Latch On1' */
            /* Logic: '<S129>/OR2' incorporates:
             *  UnitDelay: '<S129>/Unit Delay'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_gd = ((VeESMC_b_OVITermRLActvd) ||
                (ESMR_ac_DW.UnitDelay_DSTATE_gd));

            /* End of Outputs for SubSystem: '<S119>/Signal Latch On1' */

            /* Switch: '<S119>/Switch' incorporates:
             *  UnitDelay: '<S128>/Unit Delay'
             */
            if (ESMR_ac_DW.UnitDelay_DSTATE_ci)
            {
                /* Switch: '<S119>/Switch' incorporates:
                 *  Lookup_n-D: '<S127>/Vector'
                 *  Product: '<S119>/Multiplication3'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
                 */
                VeESMC_P_OVPTerm = VeESMC_U_OVPTermRL_Diff *
                    look1_iflf_binlca_16a
                    (TmpSignalConversionAtTmpVM_FcnCallSub_bz, ((const float32 *)
                      &(KxESMR_P_OVPFac[0])), ((const float32 *)
                      &(KtESMR_P_OVPFac[0])), 6U);
            }
            else
            {
                /* Switch: '<S119>/Switch' incorporates:
                 *  Constant: '<S119>/Constant Value'
                 */
                VeESMC_P_OVPTerm = 0.0F;
            }

            /* End of Switch: '<S119>/Switch' */

            /* Switch: '<S119>/Switch1' */
            if (ESMR_ac_DW.UnitDelay_DSTATE_gd)
            {
                /* Sum: '<S119>/Sum4' incorporates:
                 *  Lookup_n-D: '<S126>/Vector'
                 *  Product: '<S119>/Multiplication2'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
                 *  UnitDelay: '<S119>/Unit Delay'
                 */
                VeESMC_P_OVITerm = (VeESMC_U_OVITermRL_Diff *
                                    look1_iflf_binlca_16a
                                    (TmpSignalConversionAtTmpVM_FcnCallSub_bz,
                                     ((const float32 *)&(KxESMR_P_OVIFac[0])),
                                     ((const float32 *)&(KtESMR_P_OVIFac[0])),
                                     6U)) + ESMR_ac_DW.UnitDelay_DSTATE_cj;

                /* Outputs for Atomic SubSystem: '<S119>/integral_term' */
                /* Switch: '<S130>/Switch1' incorporates:
                 *  Constant: '<S123>/Calib'
                 *  RelationalOperator: '<S130>/Relational Operator'
                 */
                if (KeESMR_P_OVMaxIntTerm < VeESMC_P_OVITerm)
                {
                    /* Switch: '<S130>/Switch1' */
                    VeESMC_P_OVITerm = KeESMR_P_OVMaxIntTerm;
                }

                /* End of Switch: '<S130>/Switch1' */

                /* Switch: '<S130>/Switch' incorporates:
                 *  Constant: '<S124>/Calib'
                 *  RelationalOperator: '<S130>/Relational Operator1'
                 */
                if (VeESMC_P_OVITerm <= KeESMR_P_OVMinIntTerm)
                {
                    /* Switch: '<S119>/Switch1' */
                    VeESMC_P_OVITerm = KeESMR_P_OVMinIntTerm;
                }

                /* End of Switch: '<S130>/Switch' */
                /* End of Outputs for SubSystem: '<S119>/integral_term' */
            }
            else
            {
                /* Switch: '<S119>/Switch1' incorporates:
                 *  Constant: '<S119>/Constant Value1'
                 */
                VeESMC_P_OVITerm = 0.0F;
            }

            /* End of Switch: '<S119>/Switch1' */

            /* UnitDelay: '<S150>/Unit Delay' incorporates:
             *  Sum: '<S112>/Sum'
             */
            rtb_Sum9_i = (VeESMC_P_OVPTerm + VeESMC_P_OVITerm) +
                VeESMC_P_OVDTerm;

            /* Update for Switch: '<S119>/Switch2' incorporates:
             *  UnitDelay: '<S119>/Unit Delay1'
             */
            ESMR_ac_DW.UnitDelay1_DSTATE_d = rtb_Switch2_kx;

            /* Update for UnitDelay: '<S120>/Unit Delay2' */
            ESMR_ac_DW.UnitDelay2_DSTATE_d = VeESMC_U_OVITermRL;

            /* Update for UnitDelay: '<S121>/Unit Delay2' */
            ESMR_ac_DW.UnitDelay2_DSTATE_e = VeESMC_U_OVPTermRL;

            /* Update for UnitDelay: '<S119>/Unit Delay' */
            ESMR_ac_DW.UnitDelay_DSTATE_cj = VeESMC_P_OVITerm;

            /* End of Outputs for SubSystem: '<S102>/OV_active' */
        }

        /* End of If: '<S102>/If' */

        /* End of Outputs for SubSystem: '<S92>/DtrmnST_OV_PID' */
    }

    /* End of If: '<S92>/If' */

    /* Switch: '<S92>/Switch2' incorporates:
     *  Constant: '<S107>/Calib'
     *  RelationalOperator: '<S92>/Equal'
     */
    if (KeESMR_b_PD_OV_Ovrd)
    {
        /* Switch: '<S92>/Switch2' incorporates:
         *  Constant: '<S106>/Calib'
         */
        VeESMC_P_OVPIDTerm = KeESMR_P_PD_OV_OvrdVal;
    }
    else
    {
        /* Switch: '<S92>/Switch2' */
        VeESMC_P_OVPIDTerm = rtb_Sum9_i;
    }

    /* End of Switch: '<S92>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S92>/GradientLimiter' */
    /* SignalConversion generated from: '<S6>/VariantSource4' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     *  UnitDelay: '<S150>/Unit Delay'
     */
    VeESMR_P_Total_ST_Chrg_PL_FC_OV = ESMR_ac_DW.UnitDelay_DSTATE_d;

    /* Sum: '<S104>/Sum2' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_Switch2_kx = VeESMC_P_OVPIDTerm - ESMR_ac_DW.UnitDelay_DSTATE_d;

    /* Outputs for Atomic SubSystem: '<S104>/Limiter' */
    /* Switch: '<S149>/Switch1' incorporates:
     *  Constant: '<S109>/Calib'
     *  RelationalOperator: '<S149>/Relational Operator'
     */
    if (KeESMR_dP_OVSTMinLim_RiseRL < rtb_Switch2_kx)
    {
        /* Switch: '<S167>/Switch1' */
        rtb_Switch2_kx = KeESMR_dP_OVSTMinLim_RiseRL;
    }

    /* End of Switch: '<S149>/Switch1' */

    /* Switch: '<S149>/Switch' incorporates:
     *  Constant: '<S108>/Calib'
     *  RelationalOperator: '<S149>/Relational Operator1'
     */
    if (rtb_Switch2_kx <= KeESMR_dP_OVSTMinLim_FallRL)
    {
        rtb_Switch2_kx = KeESMR_dP_OVSTMinLim_FallRL;
    }

    /* End of Switch: '<S149>/Switch' */
    /* End of Outputs for SubSystem: '<S104>/Limiter' */

    /* Sum: '<S104>/Sum3' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_d += rtb_Switch2_kx;

    /* End of Outputs for SubSystem: '<S92>/GradientLimiter' */

    /* Switch: '<S93>/Switch2' incorporates:
     *  SignalConversion generated from: '<S6>/VariantSource4'
     *  Sum: '<S93>/Sum'
     *  UnitDelay: '<S93>/Unit Delay'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* Outputs for Atomic SubSystem: '<S93>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S93>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S93>/Hysteresis' */
    /* Switch: '<S151>/Switch1' incorporates:
     *  Constant: '<S157>/Calib'
     *  RelationalOperator: '<S151>/Greater  Than'
     */
    if (VeESMR_U_MaxModuleVolt_Measure > KeESMR_U_OV_ActvTH_Lvl1)
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S151>/Constant Value'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_nnl = true;
    }
    else
    {
        /* Switch: '<S151>/Switch1' incorporates:
         *  Constant: '<S158>/Calib'
         *  RelationalOperator: '<S151>/Greater  Than1'
         *  UnitDelay: '<S151>/Unit Delay'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_nnl = ((VeESMR_U_MaxModuleVolt_Measure >=
            KeESMR_U_OV_DeActvTH_Lvl1) && (ESMR_ac_DW.UnitDelay_DSTATE_nnl));
    }

    /* End of Switch: '<S151>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S165>/EdgeRising' */
    /* Logic: '<S178>/AND' incorporates:
     *  Logic: '<S178>/OR1'
     *  UnitDelay: '<S178>/Unit Delay'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_pp = ((ESMR_ac_DW.UnitDelay_DSTATE_nnl)
        && (!ESMR_ac_DW.UnitDelay_DSTATE_nd));

    /* Update for UnitDelay: '<S178>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_nd = ESMR_ac_DW.UnitDelay_DSTATE_nnl;

    /* End of Outputs for SubSystem: '<S165>/EdgeRising' */

    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S153>/Calib'
     *  Constant: '<S165>/Constant Value'
     *  Constant: '<S165>/Constant Value1'
     *  Logic: '<S165>/OR'
     *  Logic: '<S165>/OR1'
     *  MinMax: '<S165>/Minimum'
     *  Sum: '<S165>/Summation'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    if ((!ESMR_ac_DW.UnitDelay_DSTATE_nnl) ||
            TmpSignalConversionAtTmpVM_FcnCallSub_pp)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_n0 = 0U;
    }
    else if (KeESMR_Cnt_OV_Actv_Dbnc < ((uint16)(((uint32)
                ESMR_ac_DW.UnitDelay_DSTATE_n0) + 1U)))
    {
        /* MinMax: '<S165>/Minimum' incorporates:
         *  Constant: '<S153>/Calib'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_n0 = KeESMR_Cnt_OV_Actv_Dbnc;
    }
    else
    {
        /* MinMax: '<S165>/Minimum' incorporates:
         *  Constant: '<S165>/Constant Value'
         *  Sum: '<S165>/Summation'
         *  UnitDelay: '<S165>/Unit Delay'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_n0 = (uint16)(((uint32)
            ESMR_ac_DW.UnitDelay_DSTATE_n0) + 1U);
    }

    /* End of Switch: '<S165>/Switch1' */

    /* Logic: '<S165>/AND' incorporates:
     *  Constant: '<S153>/Calib'
     *  RelationalOperator: '<S165>/Greater  Than'
     *  UnitDelay: '<S165>/Unit Delay'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_pp = ((ESMR_ac_DW.UnitDelay_DSTATE_nnl)
        && (ESMR_ac_DW.UnitDelay_DSTATE_n0 >= KeESMR_Cnt_OV_Actv_Dbnc));

    /* Outputs for Atomic SubSystem: '<S164>/EdgeFalling' */
    /* Logic: '<S177>/AND' incorporates:
     *  Logic: '<S177>/OR1'
     *  UnitDelay: '<S177>/Unit Delay'
     */
    rtb_AND_gn = ((!TmpSignalConversionAtTmpVM_FcnCallSub_pp) &&
                  (ESMR_ac_DW.UnitDelay_DSTATE_ax));

    /* Update for UnitDelay: '<S177>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_ax = TmpSignalConversionAtTmpVM_FcnCallSub_pp;

    /* End of Outputs for SubSystem: '<S164>/EdgeFalling' */

    /* Switch: '<S164>/Switch' incorporates:
     *  Constant: '<S153>/Calib'
     *  Sum: '<S164>/Summation'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    if (rtb_AND_gn)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_ay = KeESMR_Cnt_OV_Actv_Dbnc;
    }
    else
    {
        /* Sum: '<S164>/Summation' incorporates:
         *  Constant: '<S164>/Constant Value'
         *  UnitDelay: '<S164>/Unit Delay'
         */
        tmp = ((sint32)ESMR_ac_DW.UnitDelay_DSTATE_ay) - 1;
        if ((((sint32)ESMR_ac_DW.UnitDelay_DSTATE_ay) - 1) < 0)
        {
            tmp = 0;
        }

        ESMR_ac_DW.UnitDelay_DSTATE_ay = (uint16)tmp;
    }

    /* End of Switch: '<S164>/Switch' */

    /* Logic: '<S164>/AND' incorporates:
     *  Constant: '<S164>/Constant Value2'
     *  RelationalOperator: '<S164>/Greater  Than'
     *  UnitDelay: '<S164>/Unit Delay'
     */
    VeESMR_b_OV_Actv_FC = (TmpSignalConversionAtTmpVM_FcnCallSub_pp || (((sint32)
        ESMR_ac_DW.UnitDelay_DSTATE_ay) > 0));
    if (!VeESMR_b_OV_Actv_FC)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_fm =
            ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eu;
    }

    /* SignalConversion generated from: '<S6>/VariantSource4' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     *  UnitDelay: '<S93>/Unit Delay'
     */
    VeESMR_P_Total_ST_Chrg_PL_FC_OV =
        ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g +
        ESMR_ac_DW.UnitDelay_DSTATE_fm;

    /* End of Outputs for SubSystem: '<S93>/Hysteresis' */
    /* End of Outputs for SubSystem: '<S93>/Turn On Delay Sample' */
    /* End of Outputs for SubSystem: '<S93>/Turn Off Delay Sample' */
#else

    /* SignalConversion generated from: '<S6>/VariantSource4' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    VeESMR_P_Total_ST_Chrg_PL_FC_OV =
        ESMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy;

#endif

    /* End of Switch: '<S93>/Switch2' */

    /* Sum: '<S92>/Sum' incorporates:
     *  UnitDelay: '<S104>/Unit Delay'
     */
    rtb_Sum9_i = ESMR_ac_DW.UnitDelay_DSTATE_d + VeESMR_P_Total_ST_Chrg_PL_FC_OV;

    /* Outputs for Atomic SubSystem: '<S92>/Limiter' */
    /* Switch: '<S110>/Switch1' incorporates:
     *  Constant: '<S105>/Calib'
     *  RelationalOperator: '<S110>/Relational Operator'
     */
    if (KeESMR_P_OVSTMinLim_Max < rtb_Sum9_i)
    {
        /* UnitDelay: '<S150>/Unit Delay' */
        rtb_Sum9_i = KeESMR_P_OVSTMinLim_Max;
    }

    /* End of Switch: '<S110>/Switch1' */

    /* Switch: '<S110>/Switch' incorporates:
     *  RelationalOperator: '<S110>/Relational Operator1'
     */
    if (rtb_Sum9_i > VeESMR_P_Total_ST_Chrg_PL_FC_OV)
    {
        VeESMC_P_STMinLim_OV = rtb_Sum9_i;
    }
    else
    {
        VeESMC_P_STMinLim_OV = VeESMR_P_Total_ST_Chrg_PL_FC_OV;
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S92>/Limiter' */

    /* If: '<S93>/If' incorporates:
     *  Constant: '<S153>/Calib'
     *  Logic: '<S166>/AND'
     *  MinMax: '<S93>/MinMax1'
     *  RelationalOperator: '<S166>/Greater  Than'
     *  RelationalOperator: '<S93>/Relational Operator'
     *  SignalConversion generated from: '<S6>/VariantSource5'
     *  Switch: '<S152>/Switch1'
     *  Switch: '<S152>/Switch2'
     *  UnitDelay: '<S166>/Unit Delay'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* Outputs for Atomic SubSystem: '<S93>/GradientLimiter' */
    /* Outputs for Atomic SubSystem: '<S93>/Turn On Delay Sample1' */
    /* RelationalOperator: '<S93>/Relational Operator' incorporates:
     *  Constant: '<S156>/Calib'
     */
    TmpSignalConversionAtTmpVM_FcnCallSub_pp = (VeESMR_U_MaxModuleVolt_Measure >
        KeESMR_U_OV_ActvTH_Final);

    /* Outputs for Atomic SubSystem: '<S166>/EdgeRising' */
    /* Logic: '<S179>/AND' incorporates:
     *  Logic: '<S179>/OR1'
     *  UnitDelay: '<S179>/Unit Delay'
     */
    rtb_AND_gn = (TmpSignalConversionAtTmpVM_FcnCallSub_pp &&
                  (!ESMR_ac_DW.UnitDelay_DSTATE_fp));

    /* Update for UnitDelay: '<S179>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_fp = TmpSignalConversionAtTmpVM_FcnCallSub_pp;

    /* End of Outputs for SubSystem: '<S166>/EdgeRising' */

    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S153>/Calib'
     *  Constant: '<S166>/Constant Value'
     *  Constant: '<S166>/Constant Value1'
     *  Logic: '<S166>/OR'
     *  Logic: '<S166>/OR1'
     *  MinMax: '<S166>/Minimum'
     *  Sum: '<S166>/Summation'
     *  UnitDelay: '<S166>/Unit Delay'
     */
    if ((!TmpSignalConversionAtTmpVM_FcnCallSub_pp) || rtb_AND_gn)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_cv = 0U;
    }
    else if (KeESMR_Cnt_OV_Actv_Dbnc < ((uint16)(((uint32)
                ESMR_ac_DW.UnitDelay_DSTATE_cv) + 1U)))
    {
        /* MinMax: '<S166>/Minimum' incorporates:
         *  Constant: '<S153>/Calib'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_cv = KeESMR_Cnt_OV_Actv_Dbnc;
    }
    else
    {
        /* MinMax: '<S166>/Minimum' incorporates:
         *  Constant: '<S166>/Constant Value'
         *  Sum: '<S166>/Summation'
         *  UnitDelay: '<S166>/Unit Delay'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_cv = (uint16)(((uint32)
            ESMR_ac_DW.UnitDelay_DSTATE_cv) + 1U);
    }

    /* End of Switch: '<S166>/Switch1' */
    if (!VeESMR_b_OV_Actv_FC)
    {
        /* Outputs for IfAction SubSystem: '<S93>/OV_Not_Active' incorporates:
         *  ActionPort: '<S163>/Action Port'
         */
        /* Merge: '<S93>/Merge' incorporates:
         *  Constant: '<S163>/Constant'
         *  SignalConversion generated from: '<S163>/PIDTermDefault'
         */
        VeESMR_P_OVCtrl_FC_PID = 0.0F;

        /* End of Outputs for SubSystem: '<S93>/OV_Not_Active' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S93>/OV_Active' incorporates:
         *  ActionPort: '<S162>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S162>/EdgeRising' */
        /* Logic: '<S168>/OR1' incorporates:
         *  UnitDelay: '<S168>/Unit Delay'
         */
        rtb_AND_gn = !ESMR_ac_DW.UnitDelay_DSTATE_mz;

        /* Update for UnitDelay: '<S168>/Unit Delay' incorporates:
         *  Constant: '<S162>/TRUE Constant2'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_mz = true;

        /* End of Outputs for SubSystem: '<S162>/EdgeRising' */

        /* Sum: '<S169>/Subtraction1' incorporates:
         *  Constant: '<S170>/Calib'
         *  Product: '<S169>/Multiplication'
         *  Sum: '<S169>/Subtraction'
         *  UnitDelay: '<S162>/Unit Delay1'
         */
        ESMR_ac_DW.UnitDelay1_DSTATE += (VeESMR_U_MaxModuleVolt_Measure -
            ESMR_ac_DW.UnitDelay1_DSTATE) * KeESMR_K_CellVoltFilter;

        /* Sum: '<S162>/Sum' incorporates:
         *  Constant: '<S159>/Calib'
         */
        VeESMR_U_OV_Error = VeESMR_U_MaxModuleVolt_Measure - KeESMR_U_OV_Target;

        /* Sum: '<S162>/Sum2' incorporates:
         *  Constant: '<S172>/Calib'
         *  Product: '<S162>/Product1'
         *  UnitDelay: '<S162>/Unit Delay'
         */
        VeESMR_P_OVCtrl_FC_I_Term = (VeESMR_U_OV_Error *
            KeESMR_P_OVCtrl_FC_I_Term) + VeESMR_P_OVCtrl_FC_I_Term;

        /* Outputs for Atomic SubSystem: '<S162>/Limiter1' */
        /* Switch: '<S176>/Switch1' incorporates:
         *  Constant: '<S174>/Calib'
         *  RelationalOperator: '<S176>/Relational Operator'
         */
        if (KeESMR_P_OVMaxITerm_FC < VeESMR_P_OVCtrl_FC_I_Term)
        {
            /* Switch: '<S162>/Switch2' */
            VeESMR_P_OVCtrl_FC_I_Term = KeESMR_P_OVMaxITerm_FC;
        }

        /* End of Switch: '<S176>/Switch1' */

        /* Switch: '<S176>/Switch' incorporates:
         *  Constant: '<S175>/Calib'
         *  RelationalOperator: '<S176>/Relational Operator1'
         */
        if (VeESMR_P_OVCtrl_FC_I_Term <= KeESMR_P_OVMinITerm_FC)
        {
            /* Switch: '<S176>/Switch' */
            VeESMR_P_OVCtrl_FC_I_Term = KeESMR_P_OVMinITerm_FC;
        }

        /* End of Switch: '<S176>/Switch' */
        /* End of Outputs for SubSystem: '<S162>/Limiter1' */

        /* Product: '<S162>/Product' incorporates:
         *  Constant: '<S173>/Calib'
         */
        VeESMR_P_OVCtrl_FC_P_Term = VeESMR_U_OV_Error *
            KeESMR_P_OVCtrl_FC_P_Term;

        /* Outputs for Atomic SubSystem: '<S162>/EdgeRising' */
        /* Switch: '<S162>/Switch2' incorporates:
         *  Logic: '<S168>/AND'
         *  UnitDelay: '<S162>/Unit Delay1'
         */
        if (rtb_AND_gn)
        {
            ESMR_ac_DW.UnitDelay2_DSTATE_h = ESMR_ac_DW.UnitDelay1_DSTATE;
        }

        /* End of Switch: '<S162>/Switch2' */
        /* End of Outputs for SubSystem: '<S162>/EdgeRising' */

        /* Product: '<S162>/Product2' incorporates:
         *  Constant: '<S171>/Calib'
         *  Sum: '<S162>/Sum3'
         *  UnitDelay: '<S162>/Unit Delay1'
         */
        VeESMR_P_OVCtrl_FC_D_Term = (ESMR_ac_DW.UnitDelay1_DSTATE -
            ESMR_ac_DW.UnitDelay2_DSTATE_h) * KeESMR_P_OVCtrl_FC_D_Term;

        /* Merge: '<S93>/Merge' incorporates:
         *  Sum: '<S162>/Sum1'
         */
        VeESMR_P_OVCtrl_FC_PID = (VeESMR_P_OVCtrl_FC_P_Term +
            VeESMR_P_OVCtrl_FC_I_Term) + VeESMR_P_OVCtrl_FC_D_Term;

        /* Update for Switch: '<S162>/Switch2' incorporates:
         *  UnitDelay: '<S162>/Unit Delay1'
         *  UnitDelay: '<S162>/Unit Delay2'
         */
        ESMR_ac_DW.UnitDelay2_DSTATE_h = ESMR_ac_DW.UnitDelay1_DSTATE;

        /* End of Outputs for SubSystem: '<S93>/OV_Active' */
    }

    if (TmpSignalConversionAtTmpVM_FcnCallSub_pp &&
            (ESMR_ac_DW.UnitDelay_DSTATE_cv >= KeESMR_Cnt_OV_Actv_Dbnc))
    {
        /* UnitDelay: '<S150>/Unit Delay' incorporates:
         *  Constant: '<S155>/Calib'
         */
        rtb_Sum9_i = KeESMR_P_FC_Max_Pwr_Min;
    }
    else if (VeESMR_b_OV_Actv_FC)
    {
        /* Switch: '<S152>/Switch2' incorporates:
         *  Sum: '<S93>/Sum1'
         *  UnitDelay: '<S150>/Unit Delay'
         */
        rtb_Sum9_i = ESMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_eu -
            VeESMR_P_OVCtrl_FC_PID;
    }
    else
    {
        /* UnitDelay: '<S150>/Unit Delay' incorporates:
         *  Constant: '<S154>/Calib'
         *  Switch: '<S152>/Switch2'
         */
        rtb_Sum9_i = KeESMR_P_FC_Max_Pwr_Default;
    }

    /* Sum: '<S150>/Sum2' incorporates:
     *  Constant: '<S153>/Calib'
     *  Constant: '<S155>/Calib'
     *  Logic: '<S166>/AND'
     *  RelationalOperator: '<S166>/Greater  Than'
     *  Switch: '<S152>/Switch2'
     *  UnitDelay: '<S150>/Unit Delay'
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_Switch2_kx = fmaxf(rtb_Sum9_i, KeESMR_P_FC_Max_Pwr_Min) -
        ESMR_ac_DW.UnitDelay_DSTATE_fu;

    /* Outputs for Atomic SubSystem: '<S150>/Limiter' */
    /* Switch: '<S167>/Switch1' incorporates:
     *  Constant: '<S161>/Calib'
     *  RelationalOperator: '<S167>/Relational Operator'
     */
    if (KeESMR_dP_FCMaxPwr_LU < rtb_Switch2_kx)
    {
        /* Switch: '<S167>/Switch1' */
        rtb_Switch2_kx = KeESMR_dP_FCMaxPwr_LU;
    }

    /* End of Switch: '<S167>/Switch1' */

    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S160>/Calib'
     *  RelationalOperator: '<S167>/Relational Operator1'
     */
    if (rtb_Switch2_kx <= KeESMR_dP_FCMaxPwr_LD)
    {
        rtb_Switch2_kx = KeESMR_dP_FCMaxPwr_LD;
    }

    /* End of Switch: '<S167>/Switch' */
    /* End of Outputs for SubSystem: '<S150>/Limiter' */

    /* Sum: '<S150>/Sum3' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_fu += rtb_Switch2_kx;

    /* VariantMerge generated from: '<S6>/VariantSource5' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    ESMR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        ESMR_ac_DW.UnitDelay_DSTATE_fu;

    /* End of Outputs for SubSystem: '<S93>/Turn On Delay Sample1' */
    /* End of Outputs for SubSystem: '<S93>/GradientLimiter' */
#endif

    /* End of If: '<S93>/If' */

    /* SignalConversion generated from: '<S6>/VariantSource2' */
    VeESMR_U_MinModuleVolt_Measure = rtb_Switch2_nw;

    /* SignalConversion generated from: '<S6>/VariantSource3' */
    VeESMR_U_UV_BaseThrsh = VeESMC_P_STMaxLim_UV;

    /* SignalConversion generated from: '<S6>/VariantSource5' */
#if !Rte_SysCon_Variant_ESMR_FCPS_Func

    /* VariantMerge generated from: '<S6>/VariantSource5' incorporates:
     *  Constant: '<S101>/Calib'
     */
    ESMR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
        KeESMR_P_FC_Max_Pwr_Default;

#endif

    /* End of SignalConversion generated from: '<S6>/VariantSource5' */

    /* If: '<S94>/If1' */
    rtPrevAction = ESMR_ac_DW.If1_ActiveSubsystem;
    rtAction = (sint8)(VeESMR_b_OV_UV_RegAllwd ? 1 : 0);
    ESMR_ac_DW.If1_ActiveSubsystem = (sint8)(VeESMR_b_OV_UV_RegAllwd ? 1 : 0);
    if (rtPrevAction != (VeESMR_b_OV_UV_RegAllwd ? 1 : 0))
    {
        if (rtPrevAction == 1)
        {
            /* Disable for If: '<S180>/If' */
            ESMR_ac_DW.If_ActiveSubsystem_a = -1;
        }
    }

    if (rtAction == 0)
    {
        /* Outputs for IfAction SubSystem: '<S94>/ESMC_NotActv' incorporates:
         *  ActionPort: '<S181>/Action Port'
         */
        ESMR_ac_ESMC_NotActv((&(VeESMC_P_STMaxLim_UV)));

        /* End of Outputs for SubSystem: '<S94>/ESMC_NotActv' */
    }
    else
    {
        if (1 != rtPrevAction)
        {
            /* Enable for If: '<S94>/If1' */
        }

        /* Outputs for IfAction SubSystem: '<S94>/DtrmnST_UV_PID' incorporates:
         *  ActionPort: '<S180>/Action Port'
         */

        /* Sum: '<S180>/Sum1' incorporates:
         *  Lookup_n-D: '<S189>/Vector'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
         *  SignalConversion generated from: '<S6>/VariantSource3'
         */
        VeESMC_U_UVActvThsld = VeESMR_U_UV_BaseThrsh + look2_iflf_binlca_16a
            (VeESMR_U_UV_BaseThrsh, TmpSignalConversionAtTmpVM_FcnCallSub_bz, ((
               const float32 *)&(KxESMR_U_UVThrshOffset[0])), ((const float32 *)
              &(KyESMR_U_UVThrshOffset[0])), ((const float32 *)
              &(KtESMR_U_UVThrshOffset[0])), ESMR_ac_ConstP.pooled12, 7U);

        /* RelationalOperator: '<S180>/Comparison2' */
        VeESMC_b_UVActv = (VeESMR_U_MinModuleVolt_Measure < VeESMC_U_UVActvThsld);

        /* If: '<S180>/If' */
        rtPrevAction = ESMR_ac_DW.If_ActiveSubsystem_a;
        ESMR_ac_DW.If_ActiveSubsystem_a = (sint8)(VeESMC_b_UVActv ? 1 : 0);
        if (!VeESMC_b_UVActv)
        {
            /* Outputs for IfAction SubSystem: '<S180>/UV_not_active' incorporates:
             *  ActionPort: '<S192>/Action Port'
             */
            /* Switch: '<S188>/Switch1' incorporates:
             *  Constant: '<S192>/Constant Value'
             *  SignalConversion generated from: '<S192>/PIDTermDefault'
             */
            VeESMC_P_STMaxLim_UV = 0.0F;

            /* End of Outputs for SubSystem: '<S180>/UV_not_active' */
        }
        else
        {
            if ((VeESMC_b_UVActv ? 1 : 0) != rtPrevAction)
            {
                /* InitializeConditions for IfAction SubSystem: '<S180>/UV_active' incorporates:
                 *  ActionPort: '<S191>/Action Port'
                 */
                /* InitializeConditions for If: '<S180>/If' incorporates:
                 *  Switch: '<S196>/Switch2'
                 *  UnitDelay: '<S196>/Unit Delay'
                 *  UnitDelay: '<S196>/Unit Delay2'
                 *  UnitDelay: '<S197>/Unit Delay2'
                 *  UnitDelay: '<S198>/Unit Delay2'
                 */
                ESMR_ac_DW.UnitDelay2_DSTATE = 0.0F;
                ESMR_ac_DW.UnitDelay2_DSTATE_f = 0.0F;
                ESMR_ac_DW.UnitDelay2_DSTATE_l = 0.0F;
                ESMR_ac_DW.UnitDelay_DSTATE_l = 0.0F;

                /* End of InitializeConditions for SubSystem: '<S180>/UV_active' */

                /* SystemReset for IfAction SubSystem: '<S180>/UV_active' incorporates:
                 *  ActionPort: '<S191>/Action Port'
                 */
                /* SystemReset for Atomic SubSystem: '<S196>/EdgeRising' */
                /* SystemReset for If: '<S180>/If' incorporates:
                 *  UnitDelay: '<S199>/Unit Delay'
                 *  UnitDelay: '<S206>/Unit Delay'
                 *  UnitDelay: '<S213>/Unit Delay'
                 */
                ESMR_ac_DW.UnitDelay_DSTATE_fn = false;

                /* End of SystemReset for SubSystem: '<S196>/EdgeRising' */

                /* SystemReset for Atomic SubSystem: '<S197>/EdgeRising' */
                ESMR_ac_DW.UnitDelay_DSTATE_gr = false;

                /* End of SystemReset for SubSystem: '<S197>/EdgeRising' */

                /* SystemReset for Atomic SubSystem: '<S198>/EdgeRising' */
                ESMR_ac_DW.UnitDelay_DSTATE_nl = false;

                /* End of SystemReset for SubSystem: '<S198>/EdgeRising' */
                /* End of SystemReset for SubSystem: '<S180>/UV_active' */
            }

            /* Outputs for IfAction SubSystem: '<S180>/UV_active' incorporates:
             *  ActionPort: '<S191>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S191>/Limiter1' */
            /* Switch: '<S195>/Switch1' incorporates:
             *  Constant: '<S193>/Calib'
             *  RelationalOperator: '<S195>/Relational Operator'
             */
            if (KeESMR_U_UVHiLim < VeESMR_U_MinModuleVolt_Measure)
            {
                /* Switch: '<S196>/Switch2' */
                rtb_Switch2_nw = KeESMR_U_UVHiLim;
            }
            else
            {
                /* Switch: '<S196>/Switch2' */
                rtb_Switch2_nw = VeESMR_U_MinModuleVolt_Measure;
            }

            /* End of Switch: '<S195>/Switch1' */

            /* Switch: '<S195>/Switch' incorporates:
             *  Constant: '<S194>/Calib'
             *  RelationalOperator: '<S195>/Relational Operator1'
             */
            if (rtb_Switch2_nw <= KeESMR_U_UVLoLim)
            {
                /* Switch: '<S195>/Switch' */
                rtb_Switch2_nw = KeESMR_U_UVLoLim;
            }

            /* End of Switch: '<S195>/Switch' */
            /* End of Outputs for SubSystem: '<S191>/Limiter1' */

            /* Outputs for Atomic SubSystem: '<S196>/EdgeRising' */
            /* Logic: '<S199>/OR1' incorporates:
             *  UnitDelay: '<S199>/Unit Delay'
             */
            TmpSignalConversionAtTmpVM_FcnCallSub_pp =
                !ESMR_ac_DW.UnitDelay_DSTATE_fn;

            /* Update for UnitDelay: '<S199>/Unit Delay' incorporates:
             *  Constant: '<S196>/TRUE Constant'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_fn = true;

            /* Switch: '<S196>/Switch2' incorporates:
             *  Logic: '<S199>/AND'
             */
            if (TmpSignalConversionAtTmpVM_FcnCallSub_pp)
            {
                ESMR_ac_DW.UnitDelay2_DSTATE = rtb_Switch2_nw;
            }

            /* End of Switch: '<S196>/Switch2' */
            /* End of Outputs for SubSystem: '<S196>/EdgeRising' */

            /* Product: '<S196>/Multiplication1' incorporates:
             *  Lookup_n-D: '<S202>/Vector'
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
             *  Sum: '<S196>/Sum3'
             */
            VeESMC_P_UVDTerm = (rtb_Switch2_nw - ESMR_ac_DW.UnitDelay2_DSTATE) *
                look1_iflf_binlca_16a(TmpSignalConversionAtTmpVM_FcnCallSub_bz,
                ((const float32 *)&(KxESMR_P_UVDFac[0])), ((const float32 *)
                &(KtESMR_P_UVDFac[0])), 6U);

            /* Switch: '<S197>/Switch' incorporates:
             *  Constant: '<S208>/Calib'
             *  Sum: '<S197>/Sum1'
             */
            VeESMC_U_UVITermRL = VeESMR_U_UV_BaseThrsh + KeESMR_U_UVITermDelta;

            /* Outputs for Atomic SubSystem: '<S197>/EdgeRising' */
            /* Logic: '<S206>/OR1' incorporates:
             *  UnitDelay: '<S206>/Unit Delay'
             */
            rtb_AND_gn = !ESMR_ac_DW.UnitDelay_DSTATE_gr;

            /* Update for UnitDelay: '<S206>/Unit Delay' incorporates:
             *  Constant: '<S197>/TRUE Constant'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_gr = true;

            /* End of Outputs for SubSystem: '<S197>/EdgeRising' */

            /* Sum: '<S197>/Sum2' incorporates:
             *  Constant: '<S209>/Calib'
             */
            VeESMC_U_UVITermRLActvThsld = VeESMC_U_UVITermRL +
                KeESMR_U_UVITermThsld;

            /* RelationalOperator: '<S197>/Comparison3' */
            TmpSignalConversionAtTmpVM_FcnCallSub_pp = (rtb_Switch2_nw <
                VeESMC_U_UVITermRLActvThsld);

            /* Outputs for Atomic SubSystem: '<S197>/EdgeRising' */
            /* Switch: '<S207>/Switch1' incorporates:
             *  Logic: '<S206>/AND'
             */
            if (!rtb_AND_gn)
            {
                /* Switch: '<S197>/Switch' */
                if (!TmpSignalConversionAtTmpVM_FcnCallSub_pp)
                {
                    VeESMC_U_UVITermRL = VeESMR_U_UV_BaseThrsh;
                }

                /* Sum: '<S197>/Sum9' incorporates:
                 *  UnitDelay: '<S197>/Unit Delay2'
                 */
                rtb_Sum9_i = VeESMC_U_UVITermRL - ESMR_ac_DW.UnitDelay2_DSTATE_f;

                /* Outputs for Atomic SubSystem: '<S197>/Limiter2' */
                /* Switch: '<S212>/Switch1' incorporates:
                 *  Constant: '<S211>/Calib'
                 *  RelationalOperator: '<S212>/Relational Operator'
                 */
                if (KeESMR_dU_UVITermRiseRL < rtb_Sum9_i)
                {
                    /* Switch: '<S212>/Switch1' */
                    rtb_Sum9_i = KeESMR_dU_UVITermRiseRL;
                }

                /* End of Switch: '<S212>/Switch1' */

                /* Switch: '<S212>/Switch' incorporates:
                 *  Constant: '<S210>/Calib'
                 *  RelationalOperator: '<S212>/Relational Operator1'
                 */
                if (rtb_Sum9_i <= KeESMR_dU_UVITermFallRL)
                {
                    rtb_Sum9_i = KeESMR_dU_UVITermFallRL;
                }

                /* End of Switch: '<S212>/Switch' */
                /* End of Outputs for SubSystem: '<S197>/Limiter2' */

                /* Switch: '<S197>/Switch' incorporates:
                 *  Sum: '<S197>/Sum8'
                 *  Switch: '<S207>/Switch1'
                 *  UnitDelay: '<S197>/Unit Delay2'
                 */
                VeESMC_U_UVITermRL = rtb_Sum9_i + ESMR_ac_DW.UnitDelay2_DSTATE_f;
            }

            /* End of Switch: '<S207>/Switch1' */
            /* End of Outputs for SubSystem: '<S197>/EdgeRising' */

            /* Sum: '<S196>/Sum2' */
            VeESMC_U_UVITermRL_Diff = rtb_Switch2_nw - VeESMC_U_UVITermRL;

            /* Switch: '<S198>/Switch' incorporates:
             *  Constant: '<S215>/Calib'
             *  Sum: '<S198>/Sum1'
             */
            VeESMC_U_UVPTermRL = VeESMR_U_UV_BaseThrsh + KeESMR_U_UVPTermDelta;

            /* Outputs for Atomic SubSystem: '<S198>/EdgeRising' */
            /* Logic: '<S213>/OR1' incorporates:
             *  UnitDelay: '<S213>/Unit Delay'
             */
            rtb_AND_gn = !ESMR_ac_DW.UnitDelay_DSTATE_nl;

            /* Update for UnitDelay: '<S213>/Unit Delay' incorporates:
             *  Constant: '<S198>/TRUE Constant'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_nl = true;

            /* End of Outputs for SubSystem: '<S198>/EdgeRising' */

            /* Sum: '<S198>/Sum2' incorporates:
             *  Constant: '<S216>/Calib'
             */
            VeESMC_U_UVPTermRLActvThsld = VeESMC_U_UVPTermRL +
                KeESMR_U_UVPTermThsld;

            /* RelationalOperator: '<S198>/Comparison3' */
            rtb_Comparison3_p = (rtb_Switch2_nw < VeESMC_U_UVPTermRLActvThsld);

            /* Outputs for Atomic SubSystem: '<S198>/EdgeRising' */
            /* Switch: '<S214>/Switch1' incorporates:
             *  Logic: '<S213>/AND'
             */
            if (!rtb_AND_gn)
            {
                /* Switch: '<S198>/Switch' */
                if (!rtb_Comparison3_p)
                {
                    VeESMC_U_UVPTermRL = VeESMR_U_UV_BaseThrsh;
                }

                /* Sum: '<S198>/Sum9' incorporates:
                 *  UnitDelay: '<S198>/Unit Delay2'
                 */
                rtb_Sum9_i = VeESMC_U_UVPTermRL - ESMR_ac_DW.UnitDelay2_DSTATE_l;

                /* Outputs for Atomic SubSystem: '<S198>/Limiter2' */
                /* Switch: '<S219>/Switch1' incorporates:
                 *  Constant: '<S218>/Calib'
                 *  RelationalOperator: '<S219>/Relational Operator'
                 */
                if (KeESMR_dU_UVPTermRiseRL < rtb_Sum9_i)
                {
                    /* Switch: '<S219>/Switch1' */
                    rtb_Sum9_i = KeESMR_dU_UVPTermRiseRL;
                }

                /* End of Switch: '<S219>/Switch1' */

                /* Switch: '<S219>/Switch' incorporates:
                 *  Constant: '<S217>/Calib'
                 *  RelationalOperator: '<S219>/Relational Operator1'
                 */
                if (rtb_Sum9_i <= KeESMR_dU_UVPTermFallRL)
                {
                    rtb_Sum9_i = KeESMR_dU_UVPTermFallRL;
                }

                /* End of Switch: '<S219>/Switch' */
                /* End of Outputs for SubSystem: '<S198>/Limiter2' */

                /* Switch: '<S198>/Switch' incorporates:
                 *  Sum: '<S198>/Sum8'
                 *  Switch: '<S214>/Switch1'
                 *  UnitDelay: '<S198>/Unit Delay2'
                 */
                VeESMC_U_UVPTermRL = rtb_Sum9_i + ESMR_ac_DW.UnitDelay2_DSTATE_l;
            }

            /* End of Switch: '<S214>/Switch1' */
            /* End of Outputs for SubSystem: '<S198>/EdgeRising' */

            /* Sum: '<S196>/Sum1' */
            VeESMC_U_UVPTermRL_Diff = rtb_Switch2_nw - VeESMC_U_UVPTermRL;

            /* Switch: '<S196>/Switch' */
            if (rtb_Comparison3_p)
            {
                /* Switch: '<S196>/Switch' incorporates:
                 *  Lookup_n-D: '<S204>/Vector'
                 *  Product: '<S196>/Multiplication3'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
                 */
                VeESMC_P_UVPTerm = VeESMC_U_UVPTermRL_Diff *
                    look1_iflf_binlca_16a
                    (TmpSignalConversionAtTmpVM_FcnCallSub_bz, ((const float32 *)
                      &(KxESMR_P_UVPFac[0])), ((const float32 *)
                      &(KtESMR_P_UVPFac[0])), 6U);
            }
            else
            {
                /* Switch: '<S196>/Switch' incorporates:
                 *  Constant: '<S196>/Constant Value'
                 */
                VeESMC_P_UVPTerm = 0.0F;
            }

            /* End of Switch: '<S196>/Switch' */

            /* Switch: '<S196>/Switch1' */
            if (TmpSignalConversionAtTmpVM_FcnCallSub_pp)
            {
                /* Sum: '<S196>/Sum' incorporates:
                 *  Lookup_n-D: '<S203>/Vector'
                 *  Product: '<S196>/Multiplication2'
                 *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtESMR_MedTEBInport30'
                 *  UnitDelay: '<S196>/Unit Delay'
                 */
                VeESMC_P_UVITerm = (VeESMC_U_UVITermRL_Diff *
                                    look1_iflf_binlca_16a
                                    (TmpSignalConversionAtTmpVM_FcnCallSub_bz,
                                     ((const float32 *)&(KxESMR_P_UVIFac[0])),
                                     ((const float32 *)&(KtESMR_P_UVIFac[0])),
                                     6U)) + ESMR_ac_DW.UnitDelay_DSTATE_l;

                /* Outputs for Atomic SubSystem: '<S196>/integral_term' */
                /* Switch: '<S205>/Switch1' incorporates:
                 *  Constant: '<S200>/Calib'
                 *  RelationalOperator: '<S205>/Relational Operator'
                 */
                if (KeESMR_P_UVMaxIntTerm < VeESMC_P_UVITerm)
                {
                    /* Switch: '<S205>/Switch1' */
                    VeESMC_P_UVITerm = KeESMR_P_UVMaxIntTerm;
                }

                /* End of Switch: '<S205>/Switch1' */

                /* Switch: '<S205>/Switch' incorporates:
                 *  Constant: '<S201>/Calib'
                 *  RelationalOperator: '<S205>/Relational Operator1'
                 */
                if (VeESMC_P_UVITerm <= KeESMR_P_UVMinIntTerm)
                {
                    /* Switch: '<S196>/Switch1' */
                    VeESMC_P_UVITerm = KeESMR_P_UVMinIntTerm;
                }

                /* End of Switch: '<S205>/Switch' */
                /* End of Outputs for SubSystem: '<S196>/integral_term' */
            }
            else
            {
                /* Switch: '<S196>/Switch1' incorporates:
                 *  Constant: '<S196>/Constant Value1'
                 */
                VeESMC_P_UVITerm = 0.0F;
            }

            /* End of Switch: '<S196>/Switch1' */

            /* Switch: '<S188>/Switch1' incorporates:
             *  Sum: '<S191>/Sum4'
             */
            VeESMC_P_STMaxLim_UV = (VeESMC_P_UVPTerm + VeESMC_P_UVITerm) +
                VeESMC_P_UVDTerm;

            /* Update for Switch: '<S196>/Switch2' incorporates:
             *  UnitDelay: '<S196>/Unit Delay2'
             */
            ESMR_ac_DW.UnitDelay2_DSTATE = rtb_Switch2_nw;

            /* Update for UnitDelay: '<S197>/Unit Delay2' */
            ESMR_ac_DW.UnitDelay2_DSTATE_f = VeESMC_U_UVITermRL;

            /* Update for UnitDelay: '<S198>/Unit Delay2' */
            ESMR_ac_DW.UnitDelay2_DSTATE_l = VeESMC_U_UVPTermRL;

            /* Update for UnitDelay: '<S196>/Unit Delay' */
            ESMR_ac_DW.UnitDelay_DSTATE_l = VeESMC_P_UVITerm;

            /* End of Outputs for SubSystem: '<S180>/UV_active' */
        }

        /* End of If: '<S180>/If' */

        /* End of Outputs for SubSystem: '<S94>/DtrmnST_UV_PID' */
    }

    /* End of If: '<S94>/If1' */

    /* Switch: '<S94>/Switch3' incorporates:
     *  Constant: '<S185>/Calib'
     *  RelationalOperator: '<S94>/Equal1'
     */
    if (KeESMR_b_PD_UV_Ovrd)
    {
        /* Switch: '<S94>/Switch3' incorporates:
         *  Constant: '<S183>/Calib'
         */
        VeESMC_P_UVPIDTerm = KeESMR_P_PD_UV_OvrdVal;
    }
    else
    {
        /* Switch: '<S94>/Switch3' */
        VeESMC_P_UVPIDTerm = VeESMC_P_STMaxLim_UV;
    }

    /* End of Switch: '<S94>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S94>/GradientLimiter1' */
    /* Sum: '<S182>/Sum2' incorporates:
     *  UnitDelay: '<S182>/Unit Delay'
     */
    rtb_Switch2_nw = VeESMC_P_UVPIDTerm - ESMR_ac_DW.UnitDelay_DSTATE_l5;

    /* Outputs for Atomic SubSystem: '<S182>/Limiter' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S187>/Calib'
     *  RelationalOperator: '<S220>/Relational Operator'
     */
    if (KeESMR_dP_UVSTMaxLim_RiseRL < rtb_Switch2_nw)
    {
        /* Switch: '<S220>/Switch1' */
        rtb_Switch2_nw = KeESMR_dP_UVSTMaxLim_RiseRL;
    }

    /* End of Switch: '<S220>/Switch1' */

    /* Switch: '<S220>/Switch' incorporates:
     *  Constant: '<S186>/Calib'
     *  RelationalOperator: '<S220>/Relational Operator1'
     */
    if (rtb_Switch2_nw <= KeESMR_dP_UVSTMaxLim_FallRL)
    {
        rtb_Switch2_nw = KeESMR_dP_UVSTMaxLim_FallRL;
    }

    /* End of Switch: '<S220>/Switch' */
    /* End of Outputs for SubSystem: '<S182>/Limiter' */

    /* Sum: '<S182>/Sum3' incorporates:
     *  UnitDelay: '<S182>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_l5 += rtb_Switch2_nw;

    /* End of Outputs for SubSystem: '<S94>/GradientLimiter1' */

    /* Sum: '<S94>/Sum1' incorporates:
     *  UnitDelay: '<S182>/Unit Delay'
     */
    VeESMC_P_STMaxLim_UV = ESMR_ac_DW.UnitDelay_DSTATE_l5 +
        TmpSignalConversionAtTmpVM_FcnCallSubs_k;

    /* Outputs for Atomic SubSystem: '<S94>/Limiter1' */
    /* Switch: '<S188>/Switch1' incorporates:
     *  RelationalOperator: '<S188>/Relational Operator'
     */
    if (TmpSignalConversionAtTmpVM_FcnCallSubs_k < VeESMC_P_STMaxLim_UV)
    {
        /* Switch: '<S188>/Switch1' */
        VeESMC_P_STMaxLim_UV = TmpSignalConversionAtTmpVM_FcnCallSubs_k;
    }

    /* End of Switch: '<S188>/Switch1' */

    /* Switch: '<S188>/Switch' incorporates:
     *  Constant: '<S184>/Calib'
     *  RelationalOperator: '<S188>/Relational Operator1'
     */
    if (VeESMC_P_STMaxLim_UV <= KeESMR_P_UVSTMaxLim_Min)
    {
        VeESMC_P_STMaxLim_UV = KeESMR_P_UVSTMaxLim_Min;
    }

    /* End of Switch: '<S188>/Switch' */
    /* End of Outputs for SubSystem: '<S94>/Limiter1' */

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeESMR_P_FC_Max_Pwr_OV' incorporates:
     *  SignalConversion generated from: '<S1>/VeESMR_P_FC_Max_Pwr_OV'
     */
    (void)Rte_Write_VeESMR_P_FC_Max_Pwr_OV_Value
        (ESMR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BatSTMaxLim1' */
    Rte_IrvWrite_ESMR_MedTEB_VeESMR_P_BatSTMaxLim1_IRV(VeESMR_P_BatSTMaxLim1);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BatSTMinLim1' */
    Rte_IrvWrite_ESMR_MedTEB_VeESMR_P_BatSTMinLim1_IRV(VeESMR_P_BatSTMinLim1);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim1' */
    Rte_IrvWrite_ESMR_MedTEB_VeESMR_P_BattLTMaxLim1_IRV(VeESMR_P_BattLTMaxLim1);

    /* SignalConversion generated from: '<S1>/VeESMR_P_BattLTMinLim1' */
    Rte_IrvWrite_ESMR_MedTEB_VeESMR_P_BattLTMinLim1_IRV(VeESMR_P_BattLTMinLim1);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/* Model step function for TID2 */
FUNC(void, ESMR_CODE) ESMR_MedTEH(void) /* Explicit Task: MedTEH */
{
    /* local block i/o variables */
    float32 rtb_AhrperhrNorm_write_IRV;
    float32 rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b;
    float32 rtb_MinMax2_b;
    float32 rtb_MinMax_n;
    float32 rtb_TmpSignalConversionAtMedTEB__VeESMR_;
    float32 rtb_TmpSignalConversionAtMedTEB__VeESM_b;
    float32 rtb_TmpSignalConversionAtMedTEB__VeESM_l;
    float32 rtb_TmpSignalConversionAtMedTEB__VeESM_o;
    float32 rtb_TmpSignalConversionAtPwrOn__BatLT_Ma;
    float32 rtb_TmpSignalConversionAtPwrOn__BatLT_Mi;
    float32 rtb_TmpSignalConversionAtPwrOn__BatST_Ma;
    float32 rtb_TmpSignalConversionAtPwrOn__BatST_Mi;
    float32 rtb_TmpSignalConversionAtPwrOn__VeESMR_U;
    float32 rtb_TmpSignalConversionAtPwrOn__VeESMR_h;
    float32 rtb_TmpSignalConversionAtPwrOn__VeESMR_k;
    float32 rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a;
    float32 rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d;
    float32 rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f;
    float32 rtb_VariantMerge_For_Variant_Source_Vari;
    float32 tmpRead_4;
    TeINVR_e_MtrInvrtrSt tmpRead_9;
    TeINVR_e_MtrInvrtrSt tmpRead_a;
    boolean rtb_TmpSignalConversionAtPwrOn__VeESMR_b;
    boolean rtb_TmpSignalConversionAtPwrOn__VeESMR_f;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_CmdBat;
    boolean rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat;
    boolean tmpRead;
    boolean tmpRead_0;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_5;
    boolean tmpRead_6;
    boolean tmpRead_7;
    boolean tmpRead_8;

#if Rte_SysCon_Variant_ESMR_FCPS_Func

    float32 rtb_Switch1_cm;

#endif

    float32 Switch8;
    float32 VeESMR_P_FCPS_StarUp_PwrDmnd;
    float32 VeESMR_P_FC_Dschrg_PwrLim_LT;
    float32 VeESMR_P_FC_Dschrg_PwrLim_ST;
    float32 VeESMR_Pct_IP_SOCSetPt;
    float32 VeESMR_Pct_Logistics_SOCSetPt;
    float32 rtb_Sum2_bc;
    float32 rtb_Sum2_l;
    float32 rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;
    float32 rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat;
    float32 rtb_VariantMerge_For_Variant_Source_Va_d;
    float32 rtb_VariantMerge_For_Variant_Source_Va_j;
    TePLTR_e_ShipingMode rtb_TmpSignalConversionAtVePLTR_e_Shippi;
    boolean VeESMR_b_FCPS_Gen_Pwr_FA;
    boolean VeESMR_b_FCPS_StarUp_PwrDmnd_FA;
    boolean VeESMR_b_FC_Dschrg_PwrLim_LT_FA;
    boolean VeESMR_b_FC_Dschrg_PwrLim_ST_FA;
    boolean rtb_AND_dy;
    boolean rtb_TmpSignalConversionAtVePLTR_b_InFiel;

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* SignalConversion generated from: '<S2>/AhrperhrNorm_read' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    rtb_AhrperhrNorm_write_IRV = Rte_IrvRead_ESMR_MedTEH_AhrperhrNorm_write_IRV();

    /* SignalConversion generated from: '<S2>/MedTEB__VeESMR_P_BattLTMinLim1' incorporates:
     *  SignalConversion generated from: '<S1>/VeESMR_P_BattLTMinLim1'
     */
    rtb_TmpSignalConversionAtMedTEB__VeESMR_ =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_P_BattLTMinLim1_IRV();

    /* SignalConversion generated from: '<S2>/MedTEB__VeESMR_P_BattLTMaxLim1' incorporates:
     *  SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim1'
     */
    rtb_TmpSignalConversionAtMedTEB__VeESM_o =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_P_BattLTMaxLim1_IRV();

    /* SignalConversion generated from: '<S2>/MedTEB__VeESMR_P_BatSTMinLim1' incorporates:
     *  SignalConversion generated from: '<S1>/VeESMR_P_BatSTMinLim1'
     */
    rtb_TmpSignalConversionAtMedTEB__VeESM_b =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_P_BatSTMinLim1_IRV();

    /* SignalConversion generated from: '<S2>/MedTEB__VeESMR_P_BatSTMaxLim1' incorporates:
     *  SignalConversion generated from: '<S1>/VeESMR_P_BatSTMaxLim1'
     */
    rtb_TmpSignalConversionAtMedTEB__VeESM_l =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_P_BatSTMaxLim1_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__VeESMR_U_MaxBatPackVolt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_U_MaxBatPackVolt'
     */
    rtb_TmpSignalConversionAtPwrOn__VeESMR_U =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_U_MaxBatPackVolt_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__VeESMR_U_MinBatPackVolt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_U_MinBatPackVolt'
     */
    rtb_TmpSignalConversionAtPwrOn__VeESMR_h =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_U_MinBatPackVolt_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__VeESMR_k_BatModNo' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_k_BatModNo'
     */
    rtb_TmpSignalConversionAtPwrOn__VeESMR_k =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_k_BatModNo_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__VeESMR_b_SOCAcc' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc'
     */
    rtb_TmpSignalConversionAtPwrOn__VeESMR_b =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_b_SOCAcc_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__VeESMR_b_SOCAcc_ChargeFirst' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc_ChargeFirst'
     */
    rtb_TmpSignalConversionAtPwrOn__VeESMR_f =
        Rte_IrvRead_ESMR_MedTEH_VeESMR_b_SOCAcc_ChargeFirst_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__BatLT_MaxLimInit1' incorporates:
     *  SignalConversion generated from: '<S4>/BatLT_MaxLimInit1'
     */
    rtb_TmpSignalConversionAtPwrOn__BatLT_Ma =
        Rte_IrvRead_ESMR_MedTEH_BatLT_MaxLimInit1_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__BatLT_MinLimInit1' incorporates:
     *  SignalConversion generated from: '<S4>/BatLT_MinLimInit1'
     */
    rtb_TmpSignalConversionAtPwrOn__BatLT_Mi =
        Rte_IrvRead_ESMR_MedTEH_BatLT_MinLimInit1_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__BatST_MinLimInit1' incorporates:
     *  SignalConversion generated from: '<S4>/BatST_MinLimInit1'
     */
    rtb_TmpSignalConversionAtPwrOn__BatST_Mi =
        Rte_IrvRead_ESMR_MedTEH_BatST_MinLimInit1_IRV();

    /* SignalConversion generated from: '<S2>/PwrOn__BatST_MaxLimInit1' incorporates:
     *  SignalConversion generated from: '<S4>/BatST_MaxLimInit1'
     */
    rtb_TmpSignalConversionAtPwrOn__BatST_Ma =
        Rte_IrvRead_ESMR_MedTEH_BatST_MaxLimInit1_IRV();

    /* SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Ovrd' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Ovrd'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Ovrd_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B);

    /* SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMin'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMin_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatDschrgPwrLT_FA_Ovrd_Value
        (&rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat);

    /* SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMax_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d);

    /* SignalConversion generated from: '<S2>/VeBPCR_P_HV_BatChrgPwrLT_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_P_HV_BatChrgPwrLT_Arb'
     */
    (void)Rte_Read_VeBPCR_P_HV_BatChrgPwrLT_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat);

    /* SignalConversion generated from: '<S2>/VeBPCR_P_HV_BatDschrgPwrLT_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_P_HV_BatDschrgPwrLT_Arb'
     */
    (void)Rte_Read_VeBPCR_P_HV_BatDschrgPwrLT_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b);

    /* SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin_Arb' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempMin_Arb'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempMin_Arb_Value
        (&rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f);

    /* SignalConversion generated from: '<S2>/VeBPCR_b_CmdBatPwrLimSFA_Enbl' incorporates:
     *  Inport: '<Root>/VeBPCR_b_CmdBatPwrLimSFA_Enbl'
     */
    (void)Rte_Read_VeBPCR_b_CmdBatPwrLimSFA_Enbl_Value
        (&rtb_TmpSignalConversionAtVeBPCR_b_CmdBat);

    /* SignalConversion generated from: '<S2>/VePLTR_b_InFieldMode' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&rtb_TmpSignalConversionAtVePLTR_b_InFiel);

    /* SignalConversion generated from: '<S2>/VePLTR_e_ShippingMode' incorporates:
     *  Inport: '<Root>/VePLTR_e_ShippingMode'
     */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_Shippi);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Inputs_100ms_Task'
     */

    /* Switch: '<S640>/Switch17' incorporates:
     *  Constant: '<S696>/Calib'
     */
    if (KeESMR_b_HVBatCntctrStatOvrd)
    {
        /* MultiPortSwitch: '<S640>/Multiport Switch3' incorporates:
         *  Constant: '<S705>/Calib'
         */
        if (!KeESMR_d_HVBatCnctrStat)
        {
            /* Switch: '<S640>/Switch17' incorporates:
             *  Constant: '<S652>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch3'
             */
            VeESMN_e_HVBatCntctrStat = CeHVTR_e_Closed;
        }
        else
        {
            /* Switch: '<S640>/Switch17' incorporates:
             *  Constant: '<S653>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch3'
             */
            VeESMN_e_HVBatCntctrStat = CeHVTR_e_Open;
        }

        /* End of MultiPortSwitch: '<S640>/Multiport Switch3' */
    }
    else
    {
        /* Switch: '<S640>/Switch17' incorporates:
         *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
         */
        (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
            ((&(VeESMN_e_HVBatCntctrStat)));
    }

    /* End of Switch: '<S640>/Switch17' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeCSVR_v_VehSpdSigned' */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value((&(VeESMN_v_VehicleSigned)));

    /* Inport: '<Root>/VeSRAR_b_HybAlternatorMd' */
    (void)Rte_Read_VeSRAR_b_HybAlternatorMd_Value
        (&ESMR_ac_B.VeESMR_b_HybAlternatorMd);

    /* Inport: '<Root>/VeATRR_M_OutputTorqReqImmed' */
    (void)Rte_Read_VeATRR_M_OutputTorqReqImmed_Value
        ((&(VeESMN_M_CmndPrdtAxleTorq)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Inputs_100ms_Task'
     */
    /* Switch: '<S640>/Switch24' incorporates:
     *  Constant: '<S672>/Calib'
     */
    if (KeESMR_b_CmndPrdtAxleTorqOvrdEnbl)
    {
        /* Switch: '<S640>/Switch24' incorporates:
         *  Constant: '<S662>/Calib'
         *  Inport: '<Root>/VeATRR_M_OutputTorqReqImmed'
         */
        VeESMN_M_CmndPrdtAxleTorq = KeESMR_M_CmndPrdtAxleTorqOvrd;
    }

    /* End of Switch: '<S640>/Switch24' */

    /* Switch: '<S640>/Switch1' incorporates:
     *  Constant: '<S701>/Calib'
     */
    if (KeESMR_b_HybAlternatorMdOvrdEnbl)
    {
        /* Switch: '<S640>/Switch1' incorporates:
         *  Constant: '<S700>/Calib'
         *  Inport: '<Root>/VeSRAR_b_HybAlternatorMd'
         */
        ESMR_ac_B.VeESMR_b_HybAlternatorMd = KeESMR_b_HybAlternatorMdOvrd;
    }

    /* End of Switch: '<S640>/Switch1' */

    /* Switch: '<S640>/Switch23' incorporates:
     *  Constant: '<S702>/Calib'
     */
    if (KeESMR_b_VehicleSignedOvrdEnbl)
    {
        /* Switch: '<S640>/Switch23' incorporates:
         *  Constant: '<S707>/Calib'
         *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
         */
        VeESMN_v_VehicleSigned = KeESMR_v_VehicleSignedOvrd;
    }

    /* End of Switch: '<S640>/Switch23' */

    /* Switch: '<S640>/Switch25' incorporates:
     *  Constant: '<S703>/Calib'
     */
    if (KeESMR_b_VldtdTransRngStOvrdEnbl)
    {
        /* MultiPortSwitch: '<S640>/Multiport Switch1' incorporates:
         *  Constant: '<S706>/Calib'
         */
        switch (KeESMR_d_VldtdTransRngStOvrd)
        {
          case 0:
            /* Switch: '<S640>/Switch25' incorporates:
             *  Constant: '<S656>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch1'
             */
            VeESMN_e_VldtdTransRngSt = CeTRGR_e_TransRangeNeutral;
            break;

          case 1:
            /* Switch: '<S640>/Switch25' incorporates:
             *  Constant: '<S657>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch1'
             */
            VeESMN_e_VldtdTransRngSt = CeTRGR_e_TransRangeDrive1;
            break;

          case 2:
            /* Switch: '<S640>/Switch25' incorporates:
             *  Constant: '<S658>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch1'
             */
            VeESMN_e_VldtdTransRngSt = CeTRGR_e_TransRangeDrive;
            break;

          case 3:
            /* Switch: '<S640>/Switch25' incorporates:
             *  Constant: '<S659>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch1'
             */
            VeESMN_e_VldtdTransRngSt = CeTRGR_e_TransRangeReverse;
            break;

          default:
            /* Switch: '<S640>/Switch25' incorporates:
             *  Constant: '<S660>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch1'
             */
            VeESMN_e_VldtdTransRngSt = CeTRGR_e_TransRangePark;
            break;
        }

        /* End of MultiPortSwitch: '<S640>/Multiport Switch1' */
    }
    else
    {
        /* Switch: '<S640>/Switch25' incorporates:
         *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
         */
        (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
            ((&(VeESMN_e_VldtdTransRngSt)));
    }

    /* End of Switch: '<S640>/Switch25' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBPCR_b_HV_BatVoltFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatVoltFA_Value(&tmpRead_5);

    /* Inport: '<Root>/VeBPCR_U_HV_BatVolt' */
    (void)Rte_Read_VeBPCR_U_HV_BatVolt_Value((&(VeESMN_U_HV_BatVoltArb)));

    /* Inport: '<Root>/VeHVTR_I_HV_BatCurrArb' */
    (void)Rte_Read_VeHVTR_I_HV_BatCurrArb_Value((&(VeESMI_I_HV_BatCurrArb)));

    /* Inport: '<Root>/VeHVTR_U_HV_Volt' */
    (void)Rte_Read_VeHVTR_U_HV_Volt_Value((&(VeESMN_U_HV_Volt)));

    /* Inport: '<Root>/VeHVTR_P_HV_BatPwr' */
    (void)Rte_Read_VeHVTR_P_HV_BatPwr_Value((&(VeESMN_P_HV_BatPwr)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Inputs_100ms_Task'
     */
    /* Switch: '<S640>/Switch30' incorporates:
     *  Constant: '<S697>/Calib'
     */
    if (KeESMR_b_HV_BatPwrOvrd)
    {
        /* Switch: '<S640>/Switch30' incorporates:
         *  Constant: '<S667>/Calib'
         *  Inport: '<Root>/VeHVTR_P_HV_BatPwr'
         */
        VeESMN_P_HV_BatPwr = KeESMR_P_HV_BatPwrOvrd;
    }

    /* End of Switch: '<S640>/Switch30' */

    /* Switch: '<S640>/Switch10' incorporates:
     *  Constant: '<S673>/Calib'
     */
    if (KeESMR_b_CurrOvrd)
    {
        /* Switch: '<S640>/Switch10' incorporates:
         *  Constant: '<S661>/Calib'
         *  Inport: '<Root>/VeHVTR_I_HV_BatCurrArb'
         */
        VeESMI_I_HV_BatCurrArb = KeESMR_I_HV_BatCurrArbOvrd;
    }

    /* End of Switch: '<S640>/Switch10' */

    /* Switch: '<S640>/Switch14' incorporates:
     *  Constant: '<S699>/Calib'
     */
    if (KeESMR_b_HV_VoltOvrdEnbl)
    {
        /* Switch: '<S640>/Switch14' incorporates:
         *  Constant: '<S671>/Calib'
         *  Inport: '<Root>/VeHVTR_U_HV_Volt'
         */
        VeESMN_U_HV_Volt = KeESMR_U_HV_VoltOvrd;
    }

    /* End of Switch: '<S640>/Switch14' */

    /* Switch: '<S640>/Switch13' incorporates:
     *  Constant: '<S698>/Calib'
     *  Logic: '<S640>/Logical Operator27'
     */
    if (tmpRead_5 || (KeESMR_b_HV_VoltFAOvrd))
    {
        /* Switch: '<S640>/Switch13' incorporates:
         *  Inport: '<Root>/VeBPCR_U_HV_BatVolt'
         */
        VeESMN_U_HV_BatVoltArb = VeESMN_U_HV_Volt;
    }

    /* End of Switch: '<S640>/Switch13' */

    /* Switch: '<S640>/Switch19' incorporates:
     *  Constant: '<S674>/Calib'
     */
    if (KeESMR_b_EngStartStopStOvrd)
    {
        /* MultiPortSwitch: '<S640>/Multiport Switch2' incorporates:
         *  Constant: '<S704>/Calib'
         */
        if (((sint32)KeESMR_d_EngStartStopStOvrd) == 0)
        {
            /* Switch: '<S640>/Switch19' incorporates:
             *  Constant: '<S654>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch2'
             */
            VeESMN_e_EngStartStopSt = CeESSR_e_EngOff;
        }
        else
        {
            /* Switch: '<S640>/Switch19' incorporates:
             *  Constant: '<S655>/Constant'
             *  MultiPortSwitch: '<S640>/Multiport Switch2'
             */
            VeESMN_e_EngStartStopSt = CeESSR_e_EngRunning;
        }

        /* End of MultiPortSwitch: '<S640>/Multiport Switch2' */
    }
    else
    {
        /* Switch: '<S640>/Switch19' incorporates:
         *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
         */
        (void)Rte_Read_VeESSR_e_EngStartStopSt_Value((&(VeESMN_e_EngStartStopSt)));
    }

    /* End of Switch: '<S640>/Switch19' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeFCPR_b_FCPS_StarUp_PwrDmnd_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_StarUp_PwrDmnd_FA_Value
        (&VeESMR_b_FCPS_StarUp_PwrDmnd_FA);

    /* Inport: '<Root>/VeFCPR_b_FCPS_ActPwr_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_ActPwr_FA_Value(&VeESMR_b_FCPS_Gen_Pwr_FA);

    /* Inport: '<Root>/VeFCPR_b_FCPS_LongTiDchaPwrLim_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_LongTiDchaPwrLim_FA_Value
        (&VeESMR_b_FC_Dschrg_PwrLim_LT_FA);

    /* Inport: '<Root>/VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_ShoTiDchaPwrLim_FA_Value
        (&VeESMR_b_FC_Dschrg_PwrLim_ST_FA);

    /* Inport: '<Root>/VeFCPR_P_FCPS_StarUp_PwrDmnd' */
    (void)Rte_Read_VeFCPR_P_FCPS_StarUp_PwrDmnd_Value
        (&VeESMR_P_FCPS_StarUp_PwrDmnd);

    /* Inport: '<Root>/VeFCPR_P_FCPS_ActPwr' */
    (void)Rte_Read_VeFCPR_P_FCPS_ActPwr_Value(&ESMR_ac_B.VeESMR_P_FCPS_Gen_Pwr);

    /* Inport: '<Root>/VeFCPR_P_FCPS_LongTiDchaPwrLim' */
    (void)Rte_Read_VeFCPR_P_FCPS_LongTiDchaPwrLim_Value
        (&VeESMR_P_FC_Dschrg_PwrLim_LT);

    /* Inport: '<Root>/VeFCPR_P_FCPS_ShoTiDchaPwrLim' */
    (void)Rte_Read_VeFCPR_P_FCPS_ShoTiDchaPwrLim_Value
        (&VeESMR_P_FC_Dschrg_PwrLim_ST);

    /* Inport: '<Root>/VeFCPR_b_FCPS_LowerVoltLIM_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_LowerVoltLIM_FA_Value
        (&ESMR_ac_B.VeESMR_b_FCPS_Lower_Voltage_LIM_FA);

    /* Inport: '<Root>/VeFCPR_U_FCPS_LowerVoltLIM' */
    (void)Rte_Read_VeFCPR_U_FCPS_LowerVoltLIM_Value
        (&ESMR_ac_B.VeESMR_U_FCPS_LowerVoltLIM);

    /* Inport: '<Root>/VeFCPR_b_FCPS_UpperVoltLIM_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_UpperVoltLIM_FA_Value
        (&ESMR_ac_B.VeESMR_b_FCPS_Upper_Voltage_LIM_FA);

    /* Inport: '<Root>/VeFCPR_U_FCPS_UpperVoltLIM' */
    (void)Rte_Read_VeFCPR_U_FCPS_UpperVoltLIM_Value
        (&ESMR_ac_B.VeESMR_U_FCPS_UpperVoltLIM);

    /* Inport: '<Root>/VeFCPR_b_FCPS_Volt_FA' */
    (void)Rte_Read_VeFCPR_b_FCPS_Volt_FA_Value(&ESMR_ac_B.VeESMR_b_FCPS_Volt_FA);

    /* Inport: '<Root>/VeFCPR_U_FCPS_Volt' */
    (void)Rte_Read_VeFCPR_U_FCPS_Volt_Value(&ESMR_ac_B.VeESMR_U_FCPS_Volt);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Inputs_100ms_Task'
     */
    /* Switch: '<S640>/Switch2' incorporates:
     *  Constant: '<S689>/Calib'
     */
    if (KeESMR_b_FCPS_Volt_Ovrd)
    {
        /* Switch: '<S640>/Switch2' incorporates:
         *  Constant: '<S670>/Calib'
         *  Inport: '<Root>/VeFCPR_U_FCPS_Volt'
         */
        ESMR_ac_B.VeESMR_U_FCPS_Volt = KeESMR_U_FCPS_Volt_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch2' */

    /* Switch: '<S640>/Switch3' incorporates:
     *  Constant: '<S687>/Calib'
     */
    if (KeESMR_b_FCPS_Volt_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch3' incorporates:
         *  Constant: '<S688>/Calib'
         *  Inport: '<Root>/VeFCPR_b_FCPS_Volt_FA'
         */
        ESMR_ac_B.VeESMR_b_FCPS_Volt_FA = KeESMR_b_FCPS_Volt_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch3' */

    /* Switch: '<S640>/Switch4' incorporates:
     *  Constant: '<S684>/Calib'
     */
    if (KeESMR_b_FCPS_UpperVoltLIM_Ovrd)
    {
        /* Switch: '<S640>/Switch4' incorporates:
         *  Constant: '<S669>/Calib'
         *  Inport: '<Root>/VeFCPR_U_FCPS_UpperVoltLIM'
         */
        ESMR_ac_B.VeESMR_U_FCPS_UpperVoltLIM =
            KeESMR_U_FCPS_UpperVoltLIM_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch4' */

    /* Switch: '<S640>/Switch5' incorporates:
     *  Constant: '<S685>/Calib'
     */
    if (KeESMR_b_FCPS_Upper_Voltage_LIM_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch5' incorporates:
         *  Constant: '<S686>/Calib'
         *  Inport: '<Root>/VeFCPR_b_FCPS_UpperVoltLIM_FA'
         */
        ESMR_ac_B.VeESMR_b_FCPS_Upper_Voltage_LIM_FA =
            KeESMR_b_FCPS_Upper_Voltage_LIM_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch5' */

    /* Switch: '<S640>/Switch6' incorporates:
     *  Constant: '<S678>/Calib'
     */
    if (KeESMR_b_FCPS_LowerVoltLIM_Ovrd)
    {
        /* Switch: '<S640>/Switch6' incorporates:
         *  Constant: '<S668>/Calib'
         *  Inport: '<Root>/VeFCPR_U_FCPS_LowerVoltLIM'
         */
        ESMR_ac_B.VeESMR_U_FCPS_LowerVoltLIM =
            KeESMR_U_FCPS_LowerVoltLIM_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch6' */

    /* Switch: '<S640>/Switch7' incorporates:
     *  Constant: '<S679>/Calib'
     */
    if (KeESMR_b_FCPS_Lower_Voltage_LIM_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch7' incorporates:
         *  Constant: '<S680>/Calib'
         *  Inport: '<Root>/VeFCPR_b_FCPS_LowerVoltLIM_FA'
         */
        ESMR_ac_B.VeESMR_b_FCPS_Lower_Voltage_LIM_FA =
            KeESMR_b_FCPS_Lower_Voltage_LIM_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch7' */

    /* Switch: '<S640>/Switch8' incorporates:
     *  Constant: '<S695>/Calib'
     */
    if (KeESMR_b_FC_Dschrg_PwrLim_ST_Ovrd)
    {
        /* Switch: '<S640>/Switch8' incorporates:
         *  Constant: '<S666>/Calib'
         */
        VeESMR_P_FC_Dschrg_PwrLim_ST = KeESMR_P_FC_Dschrg_PwrLim_ST_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch8' */

    /* Switch: '<S640>/Switch9' incorporates:
     *  Constant: '<S692>/Calib'
     */
    if (KeESMR_b_FC_Dschrg_PwrLim_LT_Ovrd)
    {
        /* Switch: '<S640>/Switch9' incorporates:
         *  Constant: '<S665>/Calib'
         */
        VeESMR_P_FC_Dschrg_PwrLim_LT = KeESMR_P_FC_Dschrg_PwrLim_LT_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch9' */

    /* Switch: '<S640>/Switch11' incorporates:
     *  Constant: '<S677>/Calib'
     */
    if (KeESMR_b_FCPS_Gen_Pwr_Ovrd)
    {
        /* Switch: '<S640>/Switch11' incorporates:
         *  Constant: '<S663>/Calib'
         *  Inport: '<Root>/VeFCPR_P_FCPS_ActPwr'
         */
        ESMR_ac_B.VeESMR_P_FCPS_Gen_Pwr = KeESMR_P_FCPS_Gen_Pwr_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch11' */

    /* Switch: '<S640>/Switch12' incorporates:
     *  Constant: '<S683>/Calib'
     */
    if (KeESMR_b_FCPS_StarUp_PwrDmnd_Ovrd)
    {
        /* Switch: '<S640>/Switch12' incorporates:
         *  Constant: '<S664>/Calib'
         */
        VeESMR_P_FCPS_StarUp_PwrDmnd = KeESMR_P_FCPS_StarUp_PwrDmnd_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch12' */

    /* Switch: '<S640>/Switch15' incorporates:
     *  Constant: '<S693>/Calib'
     */
    if (KeESMR_b_FC_Dschrg_PwrLim_ST_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch15' incorporates:
         *  Constant: '<S694>/Calib'
         */
        VeESMR_b_FC_Dschrg_PwrLim_ST_FA =
            KeESMR_b_FC_Dschrg_PwrLim_ST_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch15' */

    /* Switch: '<S640>/Switch16' incorporates:
     *  Constant: '<S690>/Calib'
     */
    if (KeESMR_b_FC_Dschrg_PwrLim_LT_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch16' incorporates:
         *  Constant: '<S691>/Calib'
         */
        VeESMR_b_FC_Dschrg_PwrLim_LT_FA =
            KeESMR_b_FC_Dschrg_PwrLim_LT_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch16' */

    /* Switch: '<S640>/Switch18' incorporates:
     *  Constant: '<S675>/Calib'
     */
    if (KeESMR_b_FCPS_Gen_Pwr_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch18' incorporates:
         *  Constant: '<S676>/Calib'
         */
        VeESMR_b_FCPS_Gen_Pwr_FA = KeESMR_b_FCPS_Gen_Pwr_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch18' */

    /* Switch: '<S640>/Switch20' incorporates:
     *  Constant: '<S681>/Calib'
     */
    if (KeESMR_b_FCPS_StarUp_PwrDmnd_FA_Ovrd)
    {
        /* Switch: '<S640>/Switch20' incorporates:
         *  Constant: '<S682>/Calib'
         */
        VeESMR_b_FCPS_StarUp_PwrDmnd_FA =
            KeESMR_b_FCPS_StarUp_PwrDmnd_FA_OvrdVal;
    }

    /* End of Switch: '<S640>/Switch20' */

    /* Outputs for Atomic SubSystem: '<S641>/Hysteresis' */
    /* Switch: '<S710>/Switch1' incorporates:
     *  Constant: '<S710>/Constant Value'
     *  Constant: '<S713>/Calib'
     *  Constant: '<S714>/Calib'
     *  RelationalOperator: '<S710>/Greater  Than'
     *  RelationalOperator: '<S710>/Greater  Than1'
     *  UnitDelay: '<S710>/Unit Delay'
     */
    if (VeESMN_M_CmndPrdtAxleTorq > KeESMR_M_RevGradePwrTorqRSP)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_m5 = true;
    }
    else
    {
        ESMR_ac_DW.UnitDelay_DSTATE_m5 = ((VeESMN_M_CmndPrdtAxleTorq >=
            KeESMR_M_RevGradePwrTorqLSP) && (ESMR_ac_DW.UnitDelay_DSTATE_m5));
    }

    /* End of Switch: '<S710>/Switch1' */
    /* End of Outputs for SubSystem: '<S641>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S641>/Hysteresis1' */
    /* Switch: '<S711>/Switch1' incorporates:
     *  Constant: '<S711>/Constant Value'
     *  Constant: '<S715>/Calib'
     *  Constant: '<S716>/Calib'
     *  RelationalOperator: '<S711>/Greater  Than'
     *  RelationalOperator: '<S711>/Greater  Than1'
     *  UnitDelay: '<S711>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > KeESMR_Pct_RevGradePwrSOCRSP)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_m3n = true;
    }
    else
    {
        ESMR_ac_DW.UnitDelay_DSTATE_m3n =
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >=
              KeESMR_Pct_RevGradePwrSOCLSP) && (ESMR_ac_DW.UnitDelay_DSTATE_m3n));
    }

    /* End of Switch: '<S711>/Switch1' */
    /* End of Outputs for SubSystem: '<S641>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S641>/Hysteresis2' */
    /* Switch: '<S712>/Switch1' incorporates:
     *  Constant: '<S712>/Constant Value'
     *  Constant: '<S717>/Calib'
     *  Constant: '<S718>/Calib'
     *  RelationalOperator: '<S712>/Greater  Than'
     *  RelationalOperator: '<S712>/Greater  Than1'
     *  UnitDelay: '<S712>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat > KeESMR_T_RevGradePwrTempRSP)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_d5 = true;
    }
    else
    {
        ESMR_ac_DW.UnitDelay_DSTATE_d5 =
            ((rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat >=
              KeESMR_T_RevGradePwrTempLSP) && (ESMR_ac_DW.UnitDelay_DSTATE_d5));
    }

    /* End of Switch: '<S712>/Switch1' */
    /* End of Outputs for SubSystem: '<S641>/Hysteresis2' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_a);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_9);

    /* Gain: '<S651>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_CoolantTempFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_CoolantTempFA_Value
        ((&(VeESMI_b_PIM_A_CoolantTemp_FA)));

    /* Gain: '<S646>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_CoolantTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_CoolantTemp_Value((&(VeESMI_T_PIM_A_CoolantTemp)));

    /* Gain: '<S650>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmtFA'
     */
    (void)Rte_Read_VeINVR_b_BstCnvtrDschrgPwrLmtFA_Value
        ((&(VeESMI_b_BstCnvtr_LT_DsChrg_FA)));

    /* Gain: '<S643>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_P_BstCnvtrDschrgPwrLmt'
     */
    (void)Rte_Read_VeINVR_P_BstCnvtrDschrgPwrLmt_Value
        ((&(VeESMI_P_BstCnvtr_LT_DsChrg)));

    /* Gain: '<S649>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmtFA'
     */
    (void)Rte_Read_VeINVR_b_BstCnvtrChrgPwrLmtFA_Value
        ((&(VeESMI_b_BstCnvtr_LT_Chrg_FA)));

    /* Gain: '<S642>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_P_BstCnvtrChrgPwrLmt'
     */
    (void)Rte_Read_VeINVR_P_BstCnvtrChrgPwrLmt_Value
        ((&(VeESMI_P_BstCnvtr_LT_Chrg)));

    /* Gain: '<S648>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA'
     */
    (void)Rte_Read_VeINVR_b_BstCnvtrDschrgPwrLmt_ST_FA_Value
        ((&(VeESMI_b_BstCnvtr_ST_DsChrg_FA)));

    /* Gain: '<S645>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_P_BstCnvtrDschrgPwrLmt_ST'
     */
    (void)Rte_Read_VeINVR_P_BstCnvtrDschrgPwrLmt_ST_Value
        ((&(VeESMI_P_BstCnvtr_ST_DsChrg)));

    /* Gain: '<S647>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA'
     */
    (void)Rte_Read_VeINVR_b_BstCnvtrChrgPwrLmt_ST_FA_Value
        ((&(VeESMI_b_BstCnvtr_ST_Chrg_FA)));

    /* Gain: '<S644>/Gain' incorporates:
     *  Inport: '<Root>/VeINVR_P_BstCnvtrChrgPwrLmt_ST'
     */
    (void)Rte_Read_VeINVR_P_BstCnvtrChrgPwrLmt_ST_Value
        ((&(VeESMI_P_BstCnvtr_ST_Chrg)));

    /* Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_SFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_SFA_Value(&tmpRead_7);

    /* Inport: '<Root>/VeBPCR_b_HV_BatModTempMinFA' */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempMinFA_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Inputs_100ms_Task'
     */
    /* Logic: '<S641>/Logical' incorporates:
     *  Constant: '<S709>/Constant'
     *  Constant: '<S719>/Calib'
     *  Logic: '<S641>/Logical1'
     *  Logic: '<S641>/Logical2'
     *  Logic: '<S641>/Logical3'
     *  RelationalOperator: '<S641>/Equal7'
     *  Switch: '<S640>/Switch25'
     *  UnitDelay: '<S710>/Unit Delay'
     *  UnitDelay: '<S711>/Unit Delay'
     *  UnitDelay: '<S712>/Unit Delay'
     */
    VeESMN_b_RevGradeEnbl = ((((((((((uint32)VeESMN_e_VldtdTransRngSt) ==
        CeTRGR_e_TransRangeReverse) && (KeESMR_b_RevGradeDschrgPwrEnbl)) &&
        (!tmpRead_7)) && (ESMR_ac_DW.UnitDelay_DSTATE_m3n)) &&
        (ESMR_ac_DW.UnitDelay_DSTATE_d5)) && (ESMR_ac_DW.UnitDelay_DSTATE_m5)) &&
        (!tmpRead_6)) && (!rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat));

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_LT_PwrLimits'
     */

    /* Logic: '<S544>/Logical2' incorporates:
     *  Constant: '<S574>/Constant'
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Calib'
     *  Constant: '<S577>/Calib'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  Logic: '<S544>/Logical1'
     *  RelationalOperator: '<S544>/Relational Operator'
     *  RelationalOperator: '<S544>/Relational Operator1'
     *  RelationalOperator: '<S544>/Relational Operator2'
     */
    VeESMR_b_MtrFail_LoSOC = ((((((uint32)tmpRead_9) == CeINVR_e_InverterFaulted)
        || (((uint32)tmpRead_a) == CeINVR_e_InverterFaulted)) &&
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a < KeESMR_Pct_LoSOC_ZeroLTPL)) &&
        (KeESMR_b_EnblLoSOC_ZeroLTPLSw));

    /* Switch: '<S544>/Switch2' */
    if (VeESMR_b_MtrFail_LoSOC)
    {
        /* Switch: '<S544>/Switch2' incorporates:
         *  Lookup_n-D: '<S580>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMC_P_SOC_BT_DschrgPwrLimLT1 = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
             rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_SOC_BT_DschrgPwrLimLT_Altered[0])), ((const float32 *)
              &(KyESMR_P_SOC_BT_DschrgPwrLimLT_Altered[0])), ((const float32 *)
              &(KtESMR_P_SOC_BT_DschrgPwrLimLT_Altered[0])),
             ESMR_ac_ConstP.pooled13, 4U);
    }
    else
    {
        /* Switch: '<S544>/Switch2' incorporates:
         *  Lookup_n-D: '<S579>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMC_P_SOC_BT_DschrgPwrLimLT1 = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
             rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_SOC_BT_DschrgPwrLimLT[0])), ((const float32 *)
              &(KyESMR_P_SOC_BT_DschrgPwrLimLT[0])), ((const float32 *)
              &(KtESMR_P_SOC_BT_DschrgPwrLimLT[0])), ESMR_ac_ConstP.pooled14,
             15U);
    }

    /* End of Switch: '<S544>/Switch2' */

    /* If: '<S458>/If' incorporates:
     *  Constant: '<S456>/Calib'
     */
    if (KeESMR_P_MaxDschrgLimLT <= VeESMC_P_SOC_BT_DschrgPwrLimLT1)
    {
        /* Outputs for IfAction SubSystem: '<S458>/If Action Subsystem' incorporates:
         *  ActionPort: '<S464>/Action Port'
         */
        /* Merge: '<S458>/Merge' incorporates:
         *  Inport: '<S464>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = KeESMR_P_MaxDschrgLimLT;

        /* Merge: '<S458>/Merge1' incorporates:
         *  Constant: '<S449>/Constant'
         *  Inport: '<S464>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_MaxDschrgLimLT;

        /* End of Outputs for SubSystem: '<S458>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S458>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S465>/Action Port'
         */
        /* Merge: '<S458>/Merge' incorporates:
         *  Inport: '<S465>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B =
            VeESMC_P_SOC_BT_DschrgPwrLimLT1;

        /* Merge: '<S458>/Merge1' incorporates:
         *  Constant: '<S453>/Constant'
         *  Inport: '<S465>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_SOC_BT_DschrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S458>/If Action Subsystem1' */
    }

    /* End of If: '<S458>/If' */

    /* Lookup_n-D: '<S578>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/AhrperhrNorm_read'
     */
    VeESMR_P_AhrpX_ChrgPwrLimLT1 = look1_iflf_binlca_16a
        (rtb_AhrperhrNorm_write_IRV, ((const float32 *)
          &(KxESMR_P_AhrpX_DschrgPwrLimLT[0])), ((const float32 *)
          &(KtESMR_P_AhrpX_DschrgPwrLimLT[0])), 6U);

    /* If: '<S459>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B > VeESMR_P_AhrpX_ChrgPwrLimLT1)
    {
        /* Outputs for IfAction SubSystem: '<S459>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S467>/Action Port'
         */
        /* Merge: '<S459>/Merge' incorporates:
         *  Inport: '<S467>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = VeESMR_P_AhrpX_ChrgPwrLimLT1;

        /* Merge: '<S459>/Merge1' incorporates:
         *  Constant: '<S454>/Constant'
         *  Inport: '<S467>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_AhrpX_DschrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S459>/If Action Subsystem1' */
    }

    /* End of If: '<S459>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBPCR_P_HV_BatDschrgPwrET_Arb' */
    (void)Rte_Read_VeBPCR_P_HV_BatDschrgPwrET_Arb_Value(&rtb_Sum2_l);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_LT_PwrLimits'
     */
    /* MinMax: '<S545>/MinMax' */
    VeESMC_P_BPCM_DschrgPwrLimLT1 = fminf
        (rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b, rtb_Sum2_l);

    /* Outputs for Atomic SubSystem: '<S545>/Limiter' */
    /* Switch: '<S565>/Switch1' incorporates:
     *  Constant: '<S545>/Constant Value1'
     *  RelationalOperator: '<S565>/Relational Operator'
     */
    if (10000.0F < VeESMN_P_HV_BatPwr)
    {
        /* Switch: '<S534>/Switch1' */
        rtb_Sum2_l = 10000.0F;
    }
    else
    {
        /* Switch: '<S534>/Switch1' */
        rtb_Sum2_l = VeESMN_P_HV_BatPwr;
    }

    /* End of Switch: '<S565>/Switch1' */

    /* Switch: '<S565>/Switch' incorporates:
     *  Constant: '<S545>/Constant Value2'
     *  RelationalOperator: '<S565>/Relational Operator1'
     */
    if (rtb_Sum2_l <= 0.0F)
    {
        /* Switch: '<S565>/Switch' */
        rtb_Sum2_l = 0.0F;
    }

    /* End of Switch: '<S565>/Switch' */
    /* End of Outputs for SubSystem: '<S545>/Limiter' */

    /* Sum: '<S545>/Sum1' */
    rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = rtb_Sum2_l -
        VeESMC_P_BPCM_DschrgPwrLimLT1;

    /* Sum: '<S545>/Sum2' */
    rtb_Sum2_bc = rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b -
        VeESMC_P_BPCM_DschrgPwrLimLT1;

    /* Outputs for Atomic SubSystem: '<S545>/Protected Division1' */
    /* Switch: '<S567>/Switch1' incorporates:
     *  Constant: '<S567>/Constant Value'
     *  Constant: '<S567>/Constant Value1'
     *  Constant: '<S567>/Constant Value2'
     *  Constant: '<S567>/Constant Value3'
     *  Logic: '<S567>/AND'
     *  RelationalOperator: '<S567>/Greater Than or Equal '
     *  RelationalOperator: '<S567>/Greater Than or Equal 1'
     *  RelationalOperator: '<S567>/Not Equal'
     *  RelationalOperator: '<S567>/Not Equal1'
     *  Switch: '<S567>/Switch2'
     *  Switch: '<S567>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat != 0.0F) && (rtb_Sum2_bc !=
            0.0F))
    {
        /* Switch: '<S567>/Switch1' incorporates:
         *  Product: '<S567>/Division'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat /= rtb_Sum2_bc;
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat > 0.0F)
    {
        /* Switch: '<S567>/Switch2' incorporates:
         *  Constant: '<S567>/MAXFLOAT'
         *  Switch: '<S567>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat < 0.0F)
    {
        /* Switch: '<S567>/Switch3' incorporates:
         *  Constant: '<S567>/MINFLOAT'
         *  Switch: '<S567>/Switch1'
         *  Switch: '<S567>/Switch2'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S567>/Switch1' incorporates:
         *  Constant: '<S567>/Constant Value4'
         *  Switch: '<S567>/Switch2'
         *  Switch: '<S567>/Switch3'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = 0.0F;
    }

    /* End of Switch: '<S567>/Switch1' */
    /* End of Outputs for SubSystem: '<S545>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S545>/Protected Division' */
    /* Switch: '<S566>/Switch1' incorporates:
     *  Constant: '<S566>/Constant Value'
     *  Constant: '<S566>/Constant Value1'
     *  Constant: '<S566>/Constant Value2'
     *  Logic: '<S566>/AND'
     *  RelationalOperator: '<S566>/Greater Than or Equal '
     *  RelationalOperator: '<S566>/Not Equal'
     *  RelationalOperator: '<S566>/Not Equal1'
     *  Sum: '<S545>/Sum3'
     *  Sum: '<S545>/Sum4'
     *  Switch: '<S566>/Switch2'
     */
    if ((rtb_Sum2_l != 0.0F) && (VeESMC_P_BPCM_DschrgPwrLimLT1 != 0.0F))
    {
        /* Switch: '<S566>/Switch1' incorporates:
         *  Product: '<S566>/Division'
         */
        rtb_Sum2_bc = rtb_Sum2_l / VeESMC_P_BPCM_DschrgPwrLimLT1;
    }
    else if (rtb_Sum2_l > 0.0F)
    {
        /* Switch: '<S566>/Switch2' incorporates:
         *  Constant: '<S566>/MAXFLOAT'
         *  Switch: '<S566>/Switch1'
         */
        rtb_Sum2_bc = 3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S566>/Switch1' incorporates:
         *  Constant: '<S566>/Constant Value4'
         *  Switch: '<S566>/Switch2'
         *  Switch: '<S566>/Switch3'
         */
        rtb_Sum2_bc = 0.0F;
    }

    /* End of Switch: '<S566>/Switch1' */
    /* End of Outputs for SubSystem: '<S545>/Protected Division' */

    /* Chart: '<S564>/LT_PL_Aribitration' incorporates:
     *  Constant: '<S554>/Calib'
     *  Constant: '<S555>/Calib'
     *  Lookup_n-D: '<S560>/Vector'
     *  Lookup_n-D: '<S561>/Vector'
     *  Lookup_n-D: '<S562>/Vector'
     *  Lookup_n-D: '<S563>/Vector'
     *  Switch: '<S566>/Switch1'
     *  Switch: '<S567>/Switch1'
     */
    ESMR_ac_LT_PL_Aribitration(rtb_Sum2_l,
        rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b, VeESMC_P_BPCM_DschrgPwrLimLT1,
        KeESMR_Cnt_DschrgPL_HLAlwdCnt, KeESMR_Cnt_DschrgPL_RecoveryCnt,
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat, ((const
        float32 *)&(KxESMR_Cnt_DschrgPL_CntrIncrPL10[0])), ((const float32 *)
        &(KtESMR_Cnt_DschrgPL_CntrIncrPL10[0])), 5U), look1_iflf_binlca_16a
        (rtb_Sum2_bc, ((const float32 *)&(KxESMR_Cnt_DschrgPL_CntrIncrPL30[0])),
         ((const float32 *)&(KtESMR_Cnt_DschrgPL_CntrIncrPL30[0])), 5U),
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat, ((const
        float32 *)&(KxESMR_Cnt_DschrgPL_CntrDecrPL10[0])), ((const float32 *)
        &(KtESMR_Cnt_DschrgPL_CntrDecrPL10[0])), 5U), look1_iflf_binlca_16a
        (rtb_Sum2_bc, ((const float32 *)&(KxESMR_Cnt_DschrgPL_CntrDecrPL30[0])),
         ((const float32 *)&(KtESMR_Cnt_DschrgPL_CntrDecrPL30[0])), 5U),
        &ESMR_ac_B.sf_LT_PL_Aribitration_o, &ESMR_ac_DW.sf_LT_PL_Aribitration_o);

    /* Outputs for Atomic SubSystem: '<S545>/GradientLimiter' */
    /* Sum: '<S553>/Sum2' incorporates:
     *  UnitDelay: '<S553>/Unit Delay'
     */
    rtb_Sum2_l = ESMR_ac_B.sf_LT_PL_Aribitration_o.LTPL -
        ESMR_ac_DW.UnitDelay_DSTATE_c;

    /* Outputs for Atomic SubSystem: '<S553>/Limiter' */
    /* Switch: '<S568>/Switch1' incorporates:
     *  Constant: '<S559>/Calib'
     *  RelationalOperator: '<S568>/Relational Operator'
     */
    if (KeESMR_k_DschrgLTPosRL < rtb_Sum2_l)
    {
        /* UnitDelay: '<S519>/Unit Delay' */
        rtb_Sum2_l = KeESMR_k_DschrgLTPosRL;
    }

    /* End of Switch: '<S568>/Switch1' */

    /* Switch: '<S568>/Switch' incorporates:
     *  Constant: '<S558>/Calib'
     *  RelationalOperator: '<S568>/Relational Operator1'
     */
    if (rtb_Sum2_l <= KeESMR_k_DschrgLTNegRL)
    {
        rtb_Sum2_l = KeESMR_k_DschrgLTNegRL;
    }

    /* End of Switch: '<S568>/Switch' */
    /* End of Outputs for SubSystem: '<S553>/Limiter' */

    /* Sum: '<S553>/Sum3' incorporates:
     *  UnitDelay: '<S553>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_c += rtb_Sum2_l;

    /* End of Outputs for SubSystem: '<S545>/GradientLimiter' */

    /* Switch: '<S546>/Switch1' incorporates:
     *  Constant: '<S551>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd'
     */
    if (KeESMR_b_BPCM_DschrgLimLT_Ovrd)
    {
        /* Switch: '<S546>/Switch1' incorporates:
         *  Constant: '<S548>/Calib'
         */
        VeESMC_P_BPCM_DschrgPwrLimLT1 = KeESMR_P_BPCM_DschrgLimLT_Ovrd;
    }
    else
    {
        (void)Rte_Read_VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd_Value(&tmpRead_2);

        /* Switch: '<S547>/Switch1' incorporates:
         *  Constant: '<S550>/Calib'
         *  Constant: '<S552>/Calib'
         *  Constant: '<S556>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrET_FA_Ovrd'
         *  Logic: '<S538>/Logical'
         *  Logic: '<S538>/Logical1'
         *  Logic: '<S538>/Logical2'
         *  RelationalOperator: '<S538>/Comparison3'
         *  Switch: '<S545>/Switch1'
         */
        if ((((KeESMR_b_ColdPowLimExpEnbl) &&
                (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f <=
                 KeESMR_T_ColdPowLimExpTemp)) &&
                (!rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)) && (!tmpRead_2))
        {
            /* Switch: '<S546>/Switch1' incorporates:
             *  Constant: '<S549>/Calib'
             *  Switch: '<S547>/Switch1'
             */
            VeESMC_P_BPCM_DschrgPwrLimLT1 = KeESMR_P_ColdPowLimExpDschrg;
        }
        else if (KeESMR_b_UsrSelDschrgLTPL)
        {
            /* Switch: '<S545>/Switch' incorporates:
             *  Constant: '<S557>/Calib'
             *  Switch: '<S545>/Switch1'
             */
            if (KeESMR_b_UsrSelDschrgLTPL10sec)
            {
                /* Switch: '<S546>/Switch1' incorporates:
                 *  Switch: '<S545>/Switch1'
                 */
                VeESMC_P_BPCM_DschrgPwrLimLT1 =
                    rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b;
            }

            /* End of Switch: '<S545>/Switch' */
        }
        else
        {
            /* Switch: '<S546>/Switch1' incorporates:
             *  Switch: '<S545>/Switch1'
             *  UnitDelay: '<S553>/Unit Delay'
             */
            VeESMC_P_BPCM_DschrgPwrLimLT1 = ESMR_ac_DW.UnitDelay_DSTATE_c;
        }

        /* End of Switch: '<S547>/Switch1' */
    }

    /* End of Switch: '<S546>/Switch1' */

    /* Switch: '<S446>/Switch2' incorporates:
     *  Constant: '<S570>/Calib'
     *  Constant: '<S571>/Calib'
     *  Constant: '<S572>/Calib'
     *  Constant: '<S573>/Calib'
     *  Logic: '<S539>/Logical2'
     *  RelationalOperator: '<S539>/Relational Operator'
     *  RelationalOperator: '<S539>/Relational Operator1'
     *  RelationalOperator: '<S539>/Relational Operator2'
     *  RelationalOperator: '<S539>/Relational Operator3'
     */
    if ((((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a > KeESMR_Pct_HV_SOCHi_LTPwr)
          || (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <
              KeESMR_Pct_HV_SOCLo_LTPwr)) ||
            (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d > KeESMR_T_BatTempHi_LTPwr))
        || (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f < KeESMR_T_BatTempLo_LTPwr))
    {
        /* Switch: '<S446>/Switch2' incorporates:
         *  Constant: '<S540>/Calib'
         */
        rtb_Sum2_l = KeESMR_P_BPCM_DschrgPwrLimLT_Ovrd;
    }
    else
    {
        /* Switch: '<S446>/Switch2' */
        rtb_Sum2_l = VeESMC_P_BPCM_DschrgPwrLimLT1;
    }

    /* End of Switch: '<S446>/Switch2' */

    /* If: '<S460>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B <= rtb_Sum2_l)
    {
        /* Outputs for IfAction SubSystem: '<S460>/If Action Subsystem' incorporates:
         *  ActionPort: '<S468>/Action Port'
         */
        /* Merge: '<S460>/Merge' incorporates:
         *  Inport: '<S468>/In1'
         */
        rtb_Sum2_l = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;

        /* End of Outputs for SubSystem: '<S460>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S460>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S469>/Action Port'
         */
        /* Merge: '<S460>/Merge1' incorporates:
         *  Constant: '<S455>/Constant'
         *  Inport: '<S469>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_BPCM_DschrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S460>/If Action Subsystem1' */
    }

    /* End of If: '<S460>/If' */

    /* If: '<S461>/If' incorporates:
     *  Constant: '<S542>/Calib'
     */
    if (rtb_Sum2_l > KeESMR_P_MaxDschrgLimLT)
    {
        /* Outputs for IfAction SubSystem: '<S461>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S471>/Action Port'
         */
        /* Merge: '<S461>/Merge' incorporates:
         *  Inport: '<S471>/In1'
         */
        rtb_Sum2_l = KeESMR_P_MaxDschrgLimLT;

        /* Merge: '<S461>/Merge1' incorporates:
         *  Constant: '<S450>/Constant'
         *  Inport: '<S471>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_DschrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S461>/If Action Subsystem1' */
    }

    /* End of If: '<S461>/If' */

    /* Switch: '<S446>/Switch1' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat)
    {
        /* Switch: '<S446>/Switch1' incorporates:
         *  Lookup_n-D: '<S543>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMR_P_ArbDschrgPwrLimLT = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_PwrLimLT_RA[0])), ((const float32 *)
              &(KtESMR_P_PwrLimLT_RA[0])), 4U);
    }
    else
    {
        /* Switch: '<S446>/Switch1' incorporates:
         *  Constant: '<S541>/Calib'
         */
        VeESMR_P_ArbDschrgPwrLimLT = KeESMR_P_DschrgPwrLimLT_Def;
    }

    /* End of Switch: '<S446>/Switch1' */

    /* If: '<S463>/If' */
    if (rtb_Sum2_l <= VeESMR_P_ArbDschrgPwrLimLT)
    {
        /* Outputs for IfAction SubSystem: '<S463>/If Action Subsystem' incorporates:
         *  ActionPort: '<S474>/Action Port'
         */
        /* Merge: '<S463>/Merge' incorporates:
         *  Inport: '<S474>/In1'
         */
        VeESMR_P_ArbDschrgPwrLimLT = rtb_Sum2_l;

        /* End of Outputs for SubSystem: '<S463>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S463>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S475>/Action Port'
         */
        /* Merge: '<S463>/Merge1' incorporates:
         *  Constant: '<S451>/Constant'
         *  Inport: '<S475>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_RA_DschrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S463>/If Action Subsystem1' */
    }

    /* End of If: '<S463>/If' */

    /* If: '<S462>/If' incorporates:
     *  Constant: '<S457>/Calib'
     */
    if (VeESMR_P_ArbDschrgPwrLimLT < KeESMR_P_MinDschrgLimLT)
    {
        /* Outputs for IfAction SubSystem: '<S462>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S473>/Action Port'
         */
        /* Merge: '<S462>/Merge' incorporates:
         *  Inport: '<S473>/In1'
         */
        VeESMR_P_ArbDschrgPwrLimLT = KeESMR_P_MinDschrgLimLT;

        /* Merge: '<S462>/Merge1' incorporates:
         *  Constant: '<S452>/Constant'
         *  Inport: '<S473>/In2'
         */
        VeESMR_e_DschrgPwrLimLT_ID_A = CeESMR_e_MinDschrgLimLT;

        /* End of Outputs for SubSystem: '<S462>/If Action Subsystem1' */
    }

    /* End of If: '<S462>/If' */

    /* Lookup_n-D: '<S537>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    VeESMC_P_SOC_BT_ChrgPwrLimLT1 = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
         rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
          &(KxESMR_P_SOC_BT_ChrgPwrLimLT[0])), ((const float32 *)
          &(KyESMR_P_SOC_BT_ChrgPwrLimLT[0])), ((const float32 *)
          &(KtESMR_P_SOC_BT_ChrgPwrLimLT[0])), ESMR_ac_ConstP.pooled14, 15U);

    /* If: '<S488>/If' incorporates:
     *  Constant: '<S485>/Calib'
     */
    if (KeESMR_P_MinChrgLimLT >= VeESMC_P_SOC_BT_ChrgPwrLimLT1)
    {
        /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem' incorporates:
         *  ActionPort: '<S494>/Action Port'
         */
        /* Merge: '<S488>/Merge' incorporates:
         *  Inport: '<S494>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = KeESMR_P_MinChrgLimLT;

        /* Merge: '<S488>/Merge1' incorporates:
         *  Constant: '<S477>/Constant'
         *  Inport: '<S494>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_MinChrgLimLT;

        /* End of Outputs for SubSystem: '<S488>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S488>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S495>/Action Port'
         */
        /* Merge: '<S488>/Merge' incorporates:
         *  Inport: '<S495>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = VeESMC_P_SOC_BT_ChrgPwrLimLT1;

        /* Merge: '<S488>/Merge1' incorporates:
         *  Constant: '<S483>/Constant'
         *  Inport: '<S495>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_SOC_BT_ChrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S488>/If Action Subsystem1' */
    }

    /* End of If: '<S488>/If' */

    /* Lookup_n-D: '<S536>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/AhrperhrNorm_read'
     */
    VeESMC_P_AhrpX_ChrgPwrLimLT1 = look1_iflf_binlca_16a
        (rtb_AhrperhrNorm_write_IRV, ((const float32 *)
          &(KxESMR_P_AhrpX_ChrgPwrLimLT[0])), ((const float32 *)
          &(KtESMR_P_AhrpX_ChrgPwrLimLT[0])), 6U);

    /* If: '<S489>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < VeESMC_P_AhrpX_ChrgPwrLimLT1)
    {
        /* Outputs for IfAction SubSystem: '<S489>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S497>/Action Port'
         */
        /* Merge: '<S489>/Merge' incorporates:
         *  Inport: '<S497>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = VeESMC_P_AhrpX_ChrgPwrLimLT1;

        /* Merge: '<S489>/Merge1' incorporates:
         *  Constant: '<S482>/Constant'
         *  Inport: '<S497>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_AhrpX_ChrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S489>/If Action Subsystem1' */
    }

    /* End of If: '<S489>/If' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBPCR_P_HV_BatChrgPwrET_Arb' */
    (void)Rte_Read_VeBPCR_P_HV_BatChrgPwrET_Arb_Value(&rtb_MinMax_n);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_LT_PwrLimits'
     */
    /* MinMax: '<S511>/MinMax' incorporates:
     *  Gain: '<S511>/Gain'
     *  Gain: '<S511>/Gain1'
     */
    rtb_MinMax_n = fminf(-rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat,
                         -rtb_MinMax_n);

    /* Outputs for Atomic SubSystem: '<S511>/Limiter' */
    /* Switch: '<S531>/Switch1' incorporates:
     *  Constant: '<S511>/Constant Value1'
     *  RelationalOperator: '<S531>/Relational Operator'
     */
    if (0.0F < VeESMN_P_HV_BatPwr)
    {
        /* UnitDelay: '<S519>/Unit Delay' */
        rtb_Sum2_l = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S519>/Unit Delay' */
        rtb_Sum2_l = VeESMN_P_HV_BatPwr;
    }

    /* End of Switch: '<S531>/Switch1' */

    /* Switch: '<S531>/Switch' incorporates:
     *  Constant: '<S511>/Constant Value2'
     *  RelationalOperator: '<S531>/Relational Operator1'
     */
    if (rtb_Sum2_l > -10000.0F)
    {
        /* Gain: '<S511>/Gain2' */
        rtb_Sum2_l = -rtb_Sum2_l;
    }
    else
    {
        /* Gain: '<S511>/Gain2' */
        rtb_Sum2_l = 10000.0F;
    }

    /* End of Switch: '<S531>/Switch' */
    /* End of Outputs for SubSystem: '<S511>/Limiter' */

    /* Sum: '<S511>/Sum1' */
    rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = rtb_Sum2_l - rtb_MinMax_n;

    /* Sum: '<S511>/Sum2' incorporates:
     *  Gain: '<S511>/Gain'
     */
    rtb_Sum2_bc = (-rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat) - rtb_MinMax_n;

    /* Outputs for Atomic SubSystem: '<S511>/Protected Division1' */
    /* Switch: '<S533>/Switch1' incorporates:
     *  Constant: '<S533>/Constant Value'
     *  Constant: '<S533>/Constant Value1'
     *  Constant: '<S533>/Constant Value2'
     *  Constant: '<S533>/Constant Value3'
     *  Logic: '<S533>/AND'
     *  RelationalOperator: '<S533>/Greater Than or Equal '
     *  RelationalOperator: '<S533>/Greater Than or Equal 1'
     *  RelationalOperator: '<S533>/Not Equal'
     *  RelationalOperator: '<S533>/Not Equal1'
     *  Switch: '<S533>/Switch2'
     *  Switch: '<S533>/Switch3'
     */
    if ((rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat != 0.0F) && (rtb_Sum2_bc !=
            0.0F))
    {
        /* Switch: '<S533>/Switch1' incorporates:
         *  Product: '<S533>/Division'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat /= rtb_Sum2_bc;
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat > 0.0F)
    {
        /* Switch: '<S533>/Switch2' incorporates:
         *  Constant: '<S533>/MAXFLOAT'
         *  Switch: '<S533>/Switch1'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = 3.402823466E+38F;
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat < 0.0F)
    {
        /* Switch: '<S533>/Switch3' incorporates:
         *  Constant: '<S533>/MINFLOAT'
         *  Switch: '<S533>/Switch1'
         *  Switch: '<S533>/Switch2'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S533>/Switch1' incorporates:
         *  Constant: '<S533>/Constant Value4'
         *  Switch: '<S533>/Switch2'
         *  Switch: '<S533>/Switch3'
         */
        rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat = 0.0F;
    }

    /* End of Switch: '<S533>/Switch1' */
    /* End of Outputs for SubSystem: '<S511>/Protected Division1' */

    /* Outputs for Atomic SubSystem: '<S511>/Protected Division' */
    /* Switch: '<S532>/Switch1' incorporates:
     *  Constant: '<S532>/Constant Value'
     *  Constant: '<S532>/Constant Value1'
     *  Constant: '<S532>/Constant Value2'
     *  Constant: '<S532>/Constant Value3'
     *  Logic: '<S532>/AND'
     *  RelationalOperator: '<S532>/Greater Than or Equal '
     *  RelationalOperator: '<S532>/Greater Than or Equal 1'
     *  RelationalOperator: '<S532>/Not Equal'
     *  RelationalOperator: '<S532>/Not Equal1'
     *  Sum: '<S511>/Sum3'
     *  Sum: '<S511>/Sum4'
     *  Switch: '<S532>/Switch2'
     *  Switch: '<S532>/Switch3'
     */
    if ((rtb_Sum2_l != 0.0F) && (rtb_MinMax_n != 0.0F))
    {
        /* Switch: '<S532>/Switch1' incorporates:
         *  Product: '<S532>/Division'
         */
        rtb_Sum2_bc = rtb_Sum2_l / rtb_MinMax_n;
    }
    else if (rtb_Sum2_l > 0.0F)
    {
        /* Switch: '<S532>/Switch2' incorporates:
         *  Constant: '<S532>/MAXFLOAT'
         *  Switch: '<S532>/Switch1'
         */
        rtb_Sum2_bc = 3.402823466E+38F;
    }
    else if (rtb_Sum2_l < 0.0F)
    {
        /* Switch: '<S532>/Switch3' incorporates:
         *  Constant: '<S532>/MINFLOAT'
         *  Switch: '<S532>/Switch1'
         *  Switch: '<S532>/Switch2'
         */
        rtb_Sum2_bc = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S532>/Switch1' incorporates:
         *  Constant: '<S532>/Constant Value4'
         *  Switch: '<S532>/Switch2'
         *  Switch: '<S532>/Switch3'
         */
        rtb_Sum2_bc = 0.0F;
    }

    /* End of Switch: '<S532>/Switch1' */
    /* End of Outputs for SubSystem: '<S511>/Protected Division' */

    /* Chart: '<S530>/LT_PL_Aribitration' incorporates:
     *  Constant: '<S520>/Calib'
     *  Constant: '<S521>/Calib'
     *  Gain: '<S511>/Gain'
     *  Lookup_n-D: '<S526>/Vector'
     *  Lookup_n-D: '<S527>/Vector'
     *  Lookup_n-D: '<S528>/Vector'
     *  Lookup_n-D: '<S529>/Vector'
     *  Switch: '<S532>/Switch1'
     *  Switch: '<S533>/Switch1'
     */
    ESMR_ac_LT_PL_Aribitration(rtb_Sum2_l,
        -rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat, rtb_MinMax_n,
        KeESMR_Cnt_ChrgPL_HLAlwdCnt, KeESMR_Cnt_ChrgPL_RecoveryCnt,
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat, ((const
        float32 *)&(KxESMR_Cnt_ChrgPL_CntrIncrPL10[0])), ((const float32 *)
        &(KtESMR_Cnt_ChrgPL_CntrIncrPL10[0])), 5U), look1_iflf_binlca_16a
        (rtb_Sum2_bc, ((const float32 *)&(KxESMR_Cnt_ChrgPL_CntrIncrPL30[0])),
         ((const float32 *)&(KtESMR_Cnt_ChrgPL_CntrIncrPL30[0])), 5U),
        look1_iflf_binlca_16a(rtb_TmpSignalConversionAtVeBPCR_T_HV_Bat, ((const
        float32 *)&(KxESMR_Cnt_ChrgPL_CntrDecrPL10[0])), ((const float32 *)
        &(KtESMR_Cnt_ChrgPL_CntrDecrPL10[0])), 5U), look1_iflf_binlca_16a
        (rtb_Sum2_bc, ((const float32 *)&(KxESMR_Cnt_ChrgPL_CntrDecrPL30[0])),
         ((const float32 *)&(KtESMR_Cnt_ChrgPL_CntrDecrPL30[0])), 5U),
        &ESMR_ac_B.sf_LT_PL_Aribitration, &ESMR_ac_DW.sf_LT_PL_Aribitration);

    /* Outputs for Atomic SubSystem: '<S511>/GradientLimiter' */
    /* Sum: '<S519>/Sum2' incorporates:
     *  UnitDelay: '<S519>/Unit Delay'
     */
    rtb_Sum2_l = ESMR_ac_B.sf_LT_PL_Aribitration.LTPL -
        ESMR_ac_DW.UnitDelay_DSTATE_cd;

    /* Outputs for Atomic SubSystem: '<S519>/Limiter' */
    /* Switch: '<S534>/Switch1' incorporates:
     *  Constant: '<S525>/Calib'
     *  RelationalOperator: '<S534>/Relational Operator'
     */
    if (KeESMR_k_ChrgLTPosRL < rtb_Sum2_l)
    {
        /* Switch: '<S534>/Switch1' */
        rtb_Sum2_l = KeESMR_k_ChrgLTPosRL;
    }

    /* End of Switch: '<S534>/Switch1' */

    /* Switch: '<S534>/Switch' incorporates:
     *  Constant: '<S524>/Calib'
     *  RelationalOperator: '<S534>/Relational Operator1'
     */
    if (rtb_Sum2_l <= KeESMR_k_ChrgLTNegRL)
    {
        rtb_Sum2_l = KeESMR_k_ChrgLTNegRL;
    }

    /* End of Switch: '<S534>/Switch' */
    /* End of Outputs for SubSystem: '<S519>/Limiter' */

    /* Sum: '<S519>/Sum3' incorporates:
     *  UnitDelay: '<S519>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_cd += rtb_Sum2_l;

    /* End of Outputs for SubSystem: '<S511>/GradientLimiter' */

    /* Switch: '<S512>/Switch1' incorporates:
     *  Constant: '<S517>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd'
     *  Inport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd'
     */
    if (KeESMR_b_BPCM_ChrgLimLT_Ovrd)
    {
        /* Switch: '<S512>/Switch1' incorporates:
         *  Constant: '<S514>/Calib'
         */
        VeESMC_P_BPCM_ChrgPwrLimLT1 = KeESMR_P_BPCM_ChrgLimLT_Ovrd;
    }
    else
    {
        (void)Rte_Read_VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd_Value(&tmpRead_1);
        (void)Rte_Read_VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd_Value(&tmpRead_0);

        /* Switch: '<S513>/Switch1' incorporates:
         *  Constant: '<S516>/Calib'
         *  Constant: '<S518>/Calib'
         *  Constant: '<S522>/Calib'
         *  Inport: '<Root>/VeBPCR_b_HV_BatChrgPwrET_FA_Ovrd'
         *  Inport: '<Root>/VeBPCR_b_HV_BatChrgPwrLT_FA_Ovrd'
         *  Logic: '<S506>/Logical'
         *  Logic: '<S506>/Logical1'
         *  Logic: '<S506>/Logical2'
         *  RelationalOperator: '<S506>/Comparison3'
         *  Switch: '<S511>/Switch1'
         */
        if ((((KeESMR_b_ColdPowLimExpEnbl) &&
                (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f <=
                 KeESMR_T_ColdPowLimExpTemp)) && (!tmpRead_1)) && (!tmpRead_0))
        {
            /* Switch: '<S512>/Switch1' incorporates:
             *  Constant: '<S515>/Calib'
             *  Switch: '<S513>/Switch1'
             */
            VeESMC_P_BPCM_ChrgPwrLimLT1 = KeESMR_P_ColdPowLimExpChrg;
        }
        else if (KeESMR_b_UsrSelChrgLTPL)
        {
            /* Switch: '<S511>/Switch' incorporates:
             *  Constant: '<S523>/Calib'
             *  Switch: '<S511>/Switch1'
             */
            if (KeESMR_b_UsrSelChrgLTPL10sec)
            {
                /* Switch: '<S512>/Switch1' incorporates:
                 *  Gain: '<S511>/Gain'
                 *  Switch: '<S513>/Switch1'
                 */
                VeESMC_P_BPCM_ChrgPwrLimLT1 =
                    rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat;
            }
            else
            {
                /* Switch: '<S512>/Switch1' incorporates:
                 *  Gain: '<S511>/Gain3'
                 *  Switch: '<S513>/Switch1'
                 */
                VeESMC_P_BPCM_ChrgPwrLimLT1 = -rtb_MinMax_n;
            }

            /* End of Switch: '<S511>/Switch' */
        }
        else
        {
            /* Switch: '<S512>/Switch1' incorporates:
             *  Gain: '<S511>/Gain3'
             *  Switch: '<S511>/Switch1'
             *  Switch: '<S513>/Switch1'
             *  UnitDelay: '<S519>/Unit Delay'
             */
            VeESMC_P_BPCM_ChrgPwrLimLT1 = -ESMR_ac_DW.UnitDelay_DSTATE_cd;
        }

        /* End of Switch: '<S513>/Switch1' */
    }

    /* End of Switch: '<S512>/Switch1' */

    /* If: '<S490>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < VeESMC_P_BPCM_ChrgPwrLimLT1)
    {
        /* Outputs for IfAction SubSystem: '<S490>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S499>/Action Port'
         */
        /* Merge: '<S490>/Merge' incorporates:
         *  Inport: '<S499>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = VeESMC_P_BPCM_ChrgPwrLimLT1;

        /* Merge: '<S490>/Merge1' incorporates:
         *  Constant: '<S481>/Constant'
         *  Inport: '<S499>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_BPCM_ChrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S490>/If Action Subsystem1' */
    }

    /* End of If: '<S490>/If' */

    /* If: '<S491>/If' incorporates:
     *  Constant: '<S508>/Calib'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B < KeESMR_P_MinChrgLimLT)
    {
        /* Outputs for IfAction SubSystem: '<S491>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S501>/Action Port'
         */
        /* Merge: '<S491>/Merge' incorporates:
         *  Inport: '<S501>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B = KeESMR_P_MinChrgLimLT;

        /* Merge: '<S491>/Merge1' incorporates:
         *  Constant: '<S478>/Constant'
         *  Inport: '<S501>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_ChrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S491>/If Action Subsystem1' */
    }

    /* End of If: '<S491>/If' */

    /* Switch: '<S445>/Switch1' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat)
    {
        /* Switch: '<S445>/Switch1' incorporates:
         *  Gain: '<S445>/Gain'
         *  Lookup_n-D: '<S509>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        rtb_MinMax_n = -look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_PwrLimLT_RA[0])), ((const float32 *)
              &(KtESMR_P_PwrLimLT_RA[0])), 4U);
    }
    else
    {
        /* Switch: '<S445>/Switch1' incorporates:
         *  Constant: '<S507>/Calib'
         */
        rtb_MinMax_n = KeESMR_P_ChrgPwrLimLT_Def;
    }

    /* End of Switch: '<S445>/Switch1' */

    /* If: '<S493>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B >= rtb_MinMax_n)
    {
        /* Outputs for IfAction SubSystem: '<S493>/If Action Subsystem' incorporates:
         *  ActionPort: '<S504>/Action Port'
         */
        /* Merge: '<S493>/Merge' incorporates:
         *  Inport: '<S504>/In1'
         */
        rtb_MinMax_n = rtb_TmpSignalConversionAtVeBPCR_Pct_HV_B;

        /* End of Outputs for SubSystem: '<S493>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S493>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S505>/Action Port'
         */
        /* Merge: '<S493>/Merge1' incorporates:
         *  Constant: '<S479>/Constant'
         *  Inport: '<S505>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_RA_ChrgPwrLimLT;

        /* End of Outputs for SubSystem: '<S493>/If Action Subsystem1' */
    }

    /* End of If: '<S493>/If' */

    /* Switch: '<S476>/Switch2' incorporates:
     *  Constant: '<S487>/Calib'
     *  RelationalOperator: '<S476>/Relational Operator2'
     */
    if (VeESMN_v_VehicleSigned < KeESMR_v_MinVehSpeed_LTPwr)
    {
        /* Switch: '<S476>/Switch2' incorporates:
         *  Constant: '<S486>/Calib'
         */
        VeESMR_P_ArbChrgPwrLimLT = KeESMR_P_ChrgPwrLimLT_Ovrd;
    }
    else
    {
        /* Switch: '<S476>/Switch2' incorporates:
         *  Constant: '<S484>/Calib'
         */
        VeESMR_P_ArbChrgPwrLimLT = KeESMR_P_MaxChrgLimLT;
    }

    /* End of Switch: '<S476>/Switch2' */

    /* If: '<S492>/If' */
    if (rtb_MinMax_n <= VeESMR_P_ArbChrgPwrLimLT)
    {
        /* Outputs for IfAction SubSystem: '<S492>/If Action Subsystem' incorporates:
         *  ActionPort: '<S502>/Action Port'
         */
        /* Merge: '<S492>/Merge' incorporates:
         *  Inport: '<S502>/In1'
         */
        VeESMR_P_ArbChrgPwrLimLT = rtb_MinMax_n;

        /* End of Outputs for SubSystem: '<S492>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S492>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S503>/Action Port'
         */
        /* Merge: '<S492>/Merge1' incorporates:
         *  Constant: '<S480>/Constant'
         *  Inport: '<S503>/In2'
         */
        VeESMR_e_ChrgPwrLimLT_ID_A = CeESMR_e_MaxChrgLimLT;

        /* End of Outputs for SubSystem: '<S492>/If Action Subsystem1' */
    }

    /* End of If: '<S492>/If' */

    /* If: '<S582>/If' incorporates:
     *  Switch: '<S583>/Switch'
     *  Switch: '<S583>/Switch1'
     */
    if (VeESMN_b_RevGradeEnbl)
    {
        /* Outputs for IfAction SubSystem: '<S582>/RevGradePwrLookup' incorporates:
         *  ActionPort: '<S584>/Action Port'
         */
        /* Lookup_n-D: '<S585>/Vector' incorporates:
         *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin_Arb'
         */
        VeESMR_P_RevGradePwrLT = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
             rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f, ((const float32 *)
              &(KxESMR_P_RevGradePwrLim[0])), ((const float32 *)
              &(KyESMR_P_RevGradePwrLim[0])), ((const float32 *)
              &(KtESMR_P_RevGradePwrLim[0])), ESMR_ac_ConstP.pooled14, 15U);

        /* End of Outputs for SubSystem: '<S582>/RevGradePwrLookup' */

        /* Switch: '<S583>/Switch' */
        VeESMR_P_RevGradeDschrgPwr_LT = VeESMR_P_RevGradePwrLT;

        /* Switch: '<S583>/Switch1' incorporates:
         *  Constant: '<S586>/Constant'
         */
        VeESMR_e_DschrgPwrLimLT_ID_B_LT = CeESMR_e_RevGrDschrgPwrLimLT;
    }
    else
    {
        /* Switch: '<S583>/Switch' */
        VeESMR_P_RevGradeDschrgPwr_LT = VeESMR_P_ArbDschrgPwrLimLT;

        /* Switch: '<S583>/Switch1' incorporates:
         *  Merge: '<S462>/Merge1'
         */
        VeESMR_e_DschrgPwrLimLT_ID_B_LT = VeESMR_e_DschrgPwrLimLT_ID_A;
    }

    /* End of If: '<S582>/If' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_BE_PwrLimits'
     */

    /* Outputs for Atomic SubSystem: '<S230>/DtrmnBE_TableLims' */
    /* Lookup_n-D: '<S393>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    VeESMC_P_VoltChrgPwrLim = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
         rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
          &(KxESMR_P_VoltChrgPwrLim[0])), ((const float32 *)
          &(KyESMR_P_VoltChrgPwrLim[0])), ((const float32 *)
          &(KtESMR_P_VoltChrgPwrLim[0])), ESMR_ac_ConstP.pooled14, 15U);

    /* Lookup_n-D: '<S394>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    VeESMC_P_VoltDschrgPwrLim = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
         rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
          &(KxESMR_P_VoltDschrgPwrLim[0])), ((const float32 *)
          &(KyESMR_P_VoltDschrgPwrLim[0])), ((const float32 *)
          &(KtESMR_P_VoltDschrgPwrLim[0])), ESMR_ac_ConstP.pooled14, 15U);

    /* End of Outputs for SubSystem: '<S230>/DtrmnBE_TableLims' */

    /* If: '<S397>/If' incorporates:
     *  Constant: '<S397>/Constant Value2'
     *  Constant: '<S397>/Constant Value3'
     *  Constant: '<S397>/Constant Value6'
     *  Constant: '<S404>/Calib'
     *  Constant: '<S407>/Constant Value3'
     *  If: '<S407>/If'
     *  Logic: '<S397>/Logical1'
     *  Product: '<S407>/Product1'
     *  RelationalOperator: '<S397>/Comparison'
     *  RelationalOperator: '<S397>/Comparison1'
     *  RelationalOperator: '<S397>/Comparison2'
     */
    if (VeESMC_P_VoltDschrgPwrLim >= 0.0F)
    {
        /* Outputs for IfAction SubSystem: '<S397>/Regular or Both Discharge' incorporates:
         *  ActionPort: '<S409>/Both Discharge'
         */
        /* If: '<S409>/If' incorporates:
         *  Constant: '<S404>/Calib'
         *  Constant: '<S409>/Constant Value4'
         *  Product: '<S409>/Product'
         */
        if (VeESMC_P_VoltDschrgPwrLim < (KeESMR_P_MaxMinDeltaBE * 0.5F))
        {
            /* Outputs for IfAction SubSystem: '<S409>/Small Values' incorporates:
             *  ActionPort: '<S421>/Small Values'
             */
            /* Merge: '<S409>/Merge2' incorporates:
             *  Constant: '<S421>/Constant Value4'
             *  MinMax: '<S421>/MinMax'
             *  MinMax: '<S421>/MinMax1'
             *  Product: '<S421>/Product'
             *  Sum: '<S421>/Sum'
             */
            VeESMR_P_BatEstdVoltMaxLim1 = fminf(fmaxf(VeESMC_P_VoltChrgPwrLim +
                KeESMR_P_MaxMinDeltaBE, VeESMC_P_VoltDschrgPwrLim),
                KeESMR_P_MaxMinDeltaBE * 0.5F);

            /* End of Outputs for SubSystem: '<S409>/Small Values' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S409>/PassThrough' incorporates:
             *  ActionPort: '<S419>/Small Values'
             */
            /* Merge: '<S409>/Merge2' incorporates:
             *  Gain: '<S422>/Gain'
             */
            VeESMR_P_BatEstdVoltMaxLim1 = VeESMC_P_VoltDschrgPwrLim;

            /* End of Outputs for SubSystem: '<S409>/PassThrough' */
        }

        /* End of If: '<S409>/If' */

        /* Merge: '<S397>/Merge2' incorporates:
         *  Constant: '<S404>/Calib'
         *  MinMax: '<S409>/MinMax'
         *  Sum: '<S409>/Sum1'
         */
        VeESMR_P_BatEstdVoltMinLim1 = fminf(VeESMR_P_BatEstdVoltMaxLim1 -
            KeESMR_P_MaxMinDeltaBE, VeESMC_P_VoltChrgPwrLim);

        /* Merge: '<S397>/Merge3' incorporates:
         *  Constant: '<S409>/Constant Value2'
         *  Logic: '<S418>/AND'
         */
        VeESMC_b_BE_MMFlag = false;

        /* End of Outputs for SubSystem: '<S397>/Regular or Both Discharge' */
    }
    else if ((VeESMC_P_VoltDschrgPwrLim < 0.0F) && (VeESMC_P_VoltChrgPwrLim >
              0.0F))
    {
        /* Outputs for IfAction SubSystem: '<S397>/Mismatch' incorporates:
         *  ActionPort: '<S408>/Mismatch'
         */
        /* Merge: '<S397>/Merge2' incorporates:
         *  Constant: '<S408>/Constant Value6'
         *  Gain: '<S416>/Gain'
         */
        VeESMR_P_BatEstdVoltMinLim1 = 0.0F;

        /* Merge: '<S397>/Merge1' incorporates:
         *  Constant: '<S408>/Constant Value3'
         *  Gain: '<S417>/Gain'
         */
        VeESMR_P_BatEstdVoltMaxLim1 = 0.0F;

        /* Merge: '<S397>/Merge3' incorporates:
         *  Constant: '<S408>/Constant Value5'
         *  Logic: '<S415>/AND'
         */
        VeESMC_b_BE_MMFlag = true;

        /* End of Outputs for SubSystem: '<S397>/Mismatch' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S397>/Both Charge' incorporates:
         *  ActionPort: '<S407>/Both Charge'
         */
        if (VeESMC_P_VoltChrgPwrLim > (KeESMR_P_MaxMinDeltaBE * -0.5F))
        {
            /* Outputs for IfAction SubSystem: '<S407>/Small Values' incorporates:
             *  ActionPort: '<S413>/Small Values'
             */
            /* If: '<S407>/If' incorporates:
             *  Constant: '<S404>/Calib'
             *  Constant: '<S413>/Constant Value4'
             *  Merge: '<S407>/Merge1'
             *  MinMax: '<S413>/MinMax'
             *  MinMax: '<S413>/MinMax1'
             *  Product: '<S413>/Product'
             *  Sum: '<S413>/Sum2'
             */
            VeESMR_P_BatEstdVoltMinLim1 = fmaxf(fminf(VeESMC_P_VoltDschrgPwrLim
                - KeESMR_P_MaxMinDeltaBE, VeESMC_P_VoltChrgPwrLim),
                KeESMR_P_MaxMinDeltaBE * -0.5F);

            /* End of Outputs for SubSystem: '<S407>/Small Values' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S407>/PassThrough' incorporates:
             *  ActionPort: '<S411>/Small Values'
             */
            /* If: '<S407>/If' incorporates:
             *  Gain: '<S414>/Gain'
             *  Merge: '<S407>/Merge1'
             */
            VeESMR_P_BatEstdVoltMinLim1 = VeESMC_P_VoltChrgPwrLim;

            /* End of Outputs for SubSystem: '<S407>/PassThrough' */
        }

        /* Merge: '<S397>/Merge1' incorporates:
         *  Constant: '<S404>/Calib'
         *  MinMax: '<S407>/MinMax2'
         *  Sum: '<S407>/Sum'
         */
        VeESMR_P_BatEstdVoltMaxLim1 = fmaxf(VeESMR_P_BatEstdVoltMinLim1 +
            KeESMR_P_MaxMinDeltaBE, VeESMC_P_VoltDschrgPwrLim);

        /* Merge: '<S397>/Merge3' incorporates:
         *  Constant: '<S407>/Constant Value1'
         *  Logic: '<S410>/AND'
         */
        VeESMC_b_BE_MMFlag = false;

        /* End of Outputs for SubSystem: '<S397>/Both Charge' */
    }

    /* End of If: '<S397>/If' */

    /* Logic: '<S392>/Logical1' */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat = ((VeESMC_b_BE_MMFlag) ||
        rtb_TmpSignalConversionAtVeBPCR_b_CmdBat);

    /* Switch: '<S398>/Switch1' incorporates:
     *  Constant: '<S405>/Calib'
     *  Switch: '<S398>/Switch2'
     */
    if (KeESMR_b_Ovrd_BE_ChrgPL)
    {
        /* Switch: '<S398>/Switch1' incorporates:
         *  Constant: '<S400>/Calib'
         */
        VeESMR_P_BatEstdVoltMinLim1 = KeESMR_P_BatEstd_ChrgPwrLim;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)
        {
            /* Switch: '<S398>/Switch2' incorporates:
             *  Constant: '<S402>/Calib'
             *  Switch: '<S398>/Switch1'
             */
            VeESMR_P_BatEstdVoltMinLim1 = KeESMR_P_ChrgPwrLimMM;
        }
    }

    /* End of Switch: '<S398>/Switch1' */

    /* Switch: '<S399>/Switch1' incorporates:
     *  Constant: '<S406>/Calib'
     *  Switch: '<S399>/Switch2'
     */
    if (KeESMR_b_Ovrd_BE_DschrgPL)
    {
        /* Switch: '<S399>/Switch1' incorporates:
         *  Constant: '<S401>/Calib'
         */
        VeESMR_P_BatEstdVoltMaxLim1 = KeESMR_P_BatEstd_DschrgPwrLim;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)
        {
            /* Switch: '<S399>/Switch2' incorporates:
             *  Constant: '<S403>/Calib'
             *  Switch: '<S399>/Switch1'
             */
            VeESMR_P_BatEstdVoltMaxLim1 = KeESMR_P_DschrgPwrLimMM;
        }
    }

    /* End of Switch: '<S399>/Switch1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_CalcEngParm'
     */

    /* If: '<S232>/If2' incorporates:
     *  Constant: '<S437>/Constant'
     *  RelationalOperator: '<S232>/Equal3'
     *  Switch: '<S640>/Switch17'
     */
    if (((uint32)VeESMN_e_HVBatCntctrStat) == CeHVTR_e_Closed)
    {
        /* Outputs for IfAction SubSystem: '<S232>/CalcAhrperhour' incorporates:
         *  ActionPort: '<S436>/Action Port'
         */
        /* Sum: '<S438>/Subtraction1' incorporates:
         *  Abs: '<S436>/Abs'
         *  Constant: '<S439>/Calib'
         *  DataStoreRead: '<S436>/Data Store Read2'
         *  Product: '<S438>/Multiplication'
         *  Sum: '<S438>/Subtraction'
         */
        rtb_MinMax_n = ((fabsf(VeESMI_I_HV_BatCurrArb) -
                         ESMR_ac_DW.NeESMC_I_Ahrperhr_DS) *
                        KeESMR_k_Ahrperhr_FiltCoef) +
            ESMR_ac_DW.NeESMC_I_Ahrperhr_DS;

        /* DataStoreWrite: '<S436>/Data Store Write' */
        ESMR_ac_DW.NeESMC_I_Ahrperhr_DS = rtb_MinMax_n;

        /* Outputs for Atomic SubSystem: '<S436>/Protected Division1' */
        /* Switch: '<S442>/Switch1' incorporates:
         *  Constant: '<S440>/Calib'
         *  Constant: '<S442>/Constant Value'
         *  Constant: '<S442>/Constant Value1'
         *  Constant: '<S442>/Constant Value2'
         *  Constant: '<S442>/Constant Value3'
         *  Logic: '<S442>/AND'
         *  RelationalOperator: '<S442>/Greater Than or Equal '
         *  RelationalOperator: '<S442>/Greater Than or Equal 1'
         *  RelationalOperator: '<S442>/Not Equal'
         *  RelationalOperator: '<S442>/Not Equal1'
         *  Switch: '<S442>/Switch2'
         *  Switch: '<S442>/Switch3'
         */
        if ((rtb_MinMax_n != 0.0F) && (KeESMR_k_Ahrperhr_NormFact != 0.0F))
        {
            /* Switch: '<S442>/Switch1' incorporates:
             *  Product: '<S442>/Division'
             */
            rtb_MinMax_n /= KeESMR_k_Ahrperhr_NormFact;
        }
        else if (rtb_MinMax_n > 0.0F)
        {
            /* Switch: '<S442>/Switch2' incorporates:
             *  Constant: '<S442>/MAXFLOAT'
             *  Switch: '<S442>/Switch1'
             */
            rtb_MinMax_n = 3.402823466E+38F;
        }
        else if (rtb_MinMax_n < 0.0F)
        {
            /* Switch: '<S442>/Switch3' incorporates:
             *  Constant: '<S442>/MINFLOAT'
             *  Switch: '<S442>/Switch1'
             *  Switch: '<S442>/Switch2'
             */
            rtb_MinMax_n = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S442>/Switch1' incorporates:
             *  Constant: '<S442>/Constant Value4'
             *  Switch: '<S442>/Switch2'
             *  Switch: '<S442>/Switch3'
             */
            rtb_MinMax_n = 0.0F;
        }

        /* End of Switch: '<S442>/Switch1' */
        /* End of Outputs for SubSystem: '<S436>/Protected Division1' */

        /* Sum: '<S436>/Sum' incorporates:
         *  Constant: '<S441>/Calib'
         */
        ESMR_ac_B.Sum = rtb_MinMax_n + KeESMR_k_Ahrperhr_NormOffst;

        /* End of Outputs for SubSystem: '<S232>/CalcAhrperhour' */
    }

    /* End of If: '<S232>/If2' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DtrmnBaseSTPwrLim'
     */

    /* Lookup_n-D: '<S338>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
     */
    VeESMR_P_SOC_BT_ChrgPwrLimST = look2_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
         rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
          &(KxESMR_P_SOC_BT_ChrgPwrLimST[0])), ((const float32 *)
          &(KyESMR_P_SOC_BT_ChrgPwrLimST[0])), ((const float32 *)
          &(KtESMR_P_SOC_BT_ChrgPwrLimST[0])), ESMR_ac_ConstP.pooled14, 15U);

    /* If: '<S310>/If' incorporates:
     *  Constant: '<S309>/Calib'
     */
    if (KeESMR_P_MinChrgLimST >= VeESMR_P_SOC_BT_ChrgPwrLimST)
    {
        /* Outputs for IfAction SubSystem: '<S310>/If Action Subsystem' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        /* Merge: '<S310>/Merge' incorporates:
         *  Inport: '<S315>/In1'
         */
        rtb_MinMax_n = KeESMR_P_MinChrgLimST;

        /* Merge: '<S310>/Merge1' incorporates:
         *  Constant: '<S302>/Constant'
         *  Inport: '<S315>/In2'
         */
        VeESMR_e_ChrgPwrLimST_ID_A_Ovrd = CeESMR_e_MinChrgLimST;

        /* End of Outputs for SubSystem: '<S310>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S310>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S316>/Action Port'
         */
        /* Merge: '<S310>/Merge' incorporates:
         *  Inport: '<S316>/In1'
         */
        rtb_MinMax_n = VeESMR_P_SOC_BT_ChrgPwrLimST;

        /* Merge: '<S310>/Merge1' incorporates:
         *  Constant: '<S303>/Constant'
         *  Inport: '<S316>/In2'
         */
        VeESMR_e_ChrgPwrLimST_ID_A_Ovrd = CeESMR_e_SOC_BT_ChrgPwrLimST;

        /* End of Outputs for SubSystem: '<S310>/If Action Subsystem1' */
    }

    /* End of If: '<S310>/If' */

    /* Lookup_n-D: '<S337>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/AhrperhrNorm_read'
     */
    VeESMR_P_AhrpX_ChrgPwrLimST = look1_iflf_binlca_16a
        (rtb_AhrperhrNorm_write_IRV, ((const float32 *)
          &(KxESMR_P_AhrpX_ChrgPwrLimST[0])), ((const float32 *)
          &(KtESMR_P_AhrpX_ChrgPwrLimST[0])), 6U);

    /* If: '<S311>/If' */
    if (rtb_MinMax_n < VeESMR_P_AhrpX_ChrgPwrLimST)
    {
        /* Outputs for IfAction SubSystem: '<S311>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S318>/Action Port'
         */
        /* Merge: '<S311>/Merge' incorporates:
         *  Inport: '<S318>/In1'
         */
        rtb_MinMax_n = VeESMR_P_AhrpX_ChrgPwrLimST;

        /* Merge: '<S311>/Merge1' incorporates:
         *  Constant: '<S304>/Constant'
         *  Inport: '<S318>/In2'
         */
        VeESMR_e_ChrgPwrLimST_ID_A_Ovrd = CeESMR_e_AhrpX_ChrgPwrLimST;

        /* End of Outputs for SubSystem: '<S311>/If Action Subsystem1' */
    }

    /* End of If: '<S311>/If' */

    /* Switch: '<S329>/Switch1' incorporates:
     *  Constant: '<S335>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd'
     */
    if (KeESMR_b_BPCM_ChrgLimST_Ovrd)
    {
        /* Switch: '<S329>/Switch1' incorporates:
         *  Constant: '<S331>/Calib'
         *  Inport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb'
         */
        VeESMR_P_BPCM_ChrgPwrLimST = KeESMR_P_BPCM_ChrgLimST_Ovrd;
    }
    else
    {
        (void)Rte_Read_VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd_Value(&rtb_AND_dy);

        /* Switch: '<S330>/Switch1' incorporates:
         *  Constant: '<S333>/Calib'
         *  Constant: '<S336>/Calib'
         *  Inport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb'
         *  Inport: '<Root>/VeBPCR_b_HV_BatChrgPwrST_FA_Ovrd'
         *  Logic: '<S325>/Logical'
         *  Logic: '<S325>/Logical2'
         *  RelationalOperator: '<S325>/Comparison3'
         */
        if (((KeESMR_b_ColdPowLimExpEnbl) &&
                (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f <=
                 KeESMR_T_ColdPowLimExpTemp)) && (!rtb_AND_dy))
        {
            /* Switch: '<S329>/Switch1' incorporates:
             *  Constant: '<S332>/Calib'
             *  Inport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb'
             *  Switch: '<S330>/Switch1'
             */
            VeESMR_P_BPCM_ChrgPwrLimST = KeESMR_P_ColdPowLimExpChrg;
        }
        else
        {
            (void)Rte_Read_VeBPCR_P_HV_BatChrgPwrST_Arb_Value
                ((&(VeESMR_P_BPCM_ChrgPwrLimST)));

            /* Switch: '<S325>/Switch' incorporates:
             *  Constant: '<S334>/Calib'
             *  Inport: '<Root>/VeBPCR_P_HV_BatChrgPwrST_Arb'
             */
            if (KeESMR_b_BPCM_ChrgLim2s_Ovrd)
            {
                /* Switch: '<S329>/Switch1' incorporates:
                 *  Switch: '<S330>/Switch1'
                 */
                VeESMR_P_BPCM_ChrgPwrLimST =
                    rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat;
            }

            /* End of Switch: '<S325>/Switch' */
        }

        /* End of Switch: '<S330>/Switch1' */
    }

    /* End of Switch: '<S329>/Switch1' */

    /* If: '<S312>/If' */
    if (rtb_MinMax_n < VeESMR_P_BPCM_ChrgPwrLimST)
    {
        /* Outputs for IfAction SubSystem: '<S312>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S320>/Action Port'
         */
        /* Merge: '<S312>/Merge' incorporates:
         *  Inport: '<S320>/In1'
         */
        rtb_MinMax_n = VeESMR_P_BPCM_ChrgPwrLimST;

        /* Merge: '<S312>/Merge1' incorporates:
         *  Constant: '<S305>/Constant'
         *  Inport: '<S320>/In2'
         */
        VeESMR_e_ChrgPwrLimST_ID_A_Ovrd = CeESMR_e_BPCM_ChrgPwrLimST;

        /* End of Outputs for SubSystem: '<S312>/If Action Subsystem1' */
    }

    /* End of If: '<S312>/If' */

    /* Switch: '<S300>/Switch1' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat)
    {
        /* Switch: '<S300>/Switch1' incorporates:
         *  Gain: '<S300>/Gain'
         *  Lookup_n-D: '<S327>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMR_P_ArbChrgPwrLimST_Ovrd = -look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_PwrLimST_RA[0])), ((const float32 *)
              &(KtESMR_P_PwrLimST_RA[0])), 4U);
    }
    else
    {
        /* Switch: '<S300>/Switch1' incorporates:
         *  Constant: '<S326>/Calib'
         */
        VeESMR_P_ArbChrgPwrLimST_Ovrd = KeESMR_P_ChrgPwrLimST_Def;
    }

    /* End of Switch: '<S300>/Switch1' */

    /* If: '<S313>/If' */
    if (rtb_MinMax_n >= VeESMR_P_ArbChrgPwrLimST_Ovrd)
    {
        /* Outputs for IfAction SubSystem: '<S313>/If Action Subsystem' incorporates:
         *  ActionPort: '<S321>/Action Port'
         */
        /* Merge: '<S313>/Merge' incorporates:
         *  Inport: '<S321>/In1'
         */
        VeESMR_P_ArbChrgPwrLimST_Ovrd = rtb_MinMax_n;

        /* End of Outputs for SubSystem: '<S313>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S313>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S322>/Action Port'
         */
        /* Merge: '<S313>/Merge1' incorporates:
         *  Constant: '<S306>/Constant'
         *  Inport: '<S322>/In2'
         */
        VeESMR_e_ChrgPwrLimST_ID_A_Ovrd = CeESMR_e_RA_ChrgPwrLimST;

        /* End of Outputs for SubSystem: '<S313>/If Action Subsystem1' */
    }

    /* End of If: '<S313>/If' */

    /* If: '<S314>/If' incorporates:
     *  Constant: '<S308>/Calib'
     */
    if (VeESMR_P_ArbChrgPwrLimST_Ovrd > KeESMR_P_MaxChrgLimST)
    {
        /* Outputs for IfAction SubSystem: '<S314>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S324>/Action Port'
         */
        /* Merge: '<S314>/Merge' incorporates:
         *  Inport: '<S324>/In1'
         */
        VeESMR_P_ArbChrgPwrLimST_Ovrd = KeESMR_P_MaxChrgLimST;

        /* Merge: '<S314>/Merge1' incorporates:
         *  Constant: '<S307>/Constant'
         *  Inport: '<S324>/In2'
         */
        VeESMR_e_ChrgPwrLimST_ID_A_Ovrd = CeESMR_e_MaxChrgLimST;

        /* End of Outputs for SubSystem: '<S314>/If Action Subsystem1' */
    }

    /* End of If: '<S314>/If' */

    /* Switch: '<S374>/Switch2' */
    if (VeESMR_b_MtrFail_LoSOC)
    {
        /* Switch: '<S374>/Switch2' incorporates:
         *  Lookup_n-D: '<S385>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMR_P_SOC_BT_DschrgPwrLimST = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
             rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_SOC_BT_DschrgPwrLimST_Altered[0])), ((const float32 *)
              &(KyESMR_P_SOC_BT_DschrgPwrLimST_Altered[0])), ((const float32 *)
              &(KtESMR_P_SOC_BT_DschrgPwrLimST_Altered[0])),
             ESMR_ac_ConstP.pooled13, 4U);
    }
    else
    {
        /* Switch: '<S374>/Switch2' incorporates:
         *  Lookup_n-D: '<S384>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMR_P_SOC_BT_DschrgPwrLimST = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
             rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_SOC_BT_DschrgPwrLimST[0])), ((const float32 *)
              &(KyESMR_P_SOC_BT_DschrgPwrLimST[0])), ((const float32 *)
              &(KtESMR_P_SOC_BT_DschrgPwrLimST[0])), ESMR_ac_ConstP.pooled14,
             15U);
    }

    /* End of Switch: '<S374>/Switch2' */

    /* If: '<S352>/If' incorporates:
     *  Constant: '<S350>/Calib'
     */
    if (KeESMR_P_MaxDschrgLimST <= VeESMR_P_SOC_BT_DschrgPwrLimST)
    {
        /* Outputs for IfAction SubSystem: '<S352>/If Action Subsystem' incorporates:
         *  ActionPort: '<S358>/Action Port'
         */
        /* Merge: '<S352>/Merge' incorporates:
         *  Inport: '<S358>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat = KeESMR_P_MaxDschrgLimST;

        /* Merge: '<S352>/Merge1' incorporates:
         *  Constant: '<S343>/Constant'
         *  Inport: '<S358>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_MaxDschrgLimST;

        /* End of Outputs for SubSystem: '<S352>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S352>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S359>/Action Port'
         */
        /* Merge: '<S352>/Merge' incorporates:
         *  Inport: '<S359>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat =
            VeESMR_P_SOC_BT_DschrgPwrLimST;

        /* Merge: '<S352>/Merge1' incorporates:
         *  Constant: '<S344>/Constant'
         *  Inport: '<S359>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_SOC_BT_DschrgPwrLimST;

        /* End of Outputs for SubSystem: '<S352>/If Action Subsystem1' */
    }

    /* End of If: '<S352>/If' */

    /* Lookup_n-D: '<S383>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/AhrperhrNorm_read'
     */
    VeESMR_P_AhrpX_DschrgPwrLimST = look1_iflf_binlca_16a
        (rtb_AhrperhrNorm_write_IRV, ((const float32 *)
          &(KxESMR_P_AhrpX_DschrgPwrLimST[0])), ((const float32 *)
          &(KtESMR_P_AhrpX_DschrgPwrLimST[0])), 6U);

    /* If: '<S353>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat > VeESMR_P_AhrpX_DschrgPwrLimST)
    {
        /* Outputs for IfAction SubSystem: '<S353>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S361>/Action Port'
         */
        /* Merge: '<S353>/Merge' incorporates:
         *  Inport: '<S361>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat = VeESMR_P_AhrpX_DschrgPwrLimST;

        /* Merge: '<S353>/Merge1' incorporates:
         *  Constant: '<S345>/Constant'
         *  Inport: '<S361>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_AhrpX_DschrgPwrLimST;

        /* End of Outputs for SubSystem: '<S353>/If Action Subsystem1' */
    }

    /* End of If: '<S353>/If' */

    /* Switch: '<S375>/Switch1' incorporates:
     *  Constant: '<S381>/Calib'
     *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd'
     */
    if (KeESMR_b_BPCM_DschrgLimST_Ovrd)
    {
        /* Switch: '<S375>/Switch1' incorporates:
         *  Constant: '<S377>/Calib'
         *  Inport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb'
         */
        VeESMR_P_BPCM_DschrgPwrLimST = KeESMR_P_BPCM_DschrgLimST_Ovrd;
    }
    else
    {
        (void)Rte_Read_VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd_Value(&tmpRead_3);

        /* Switch: '<S376>/Switch1' incorporates:
         *  Constant: '<S379>/Calib'
         *  Constant: '<S382>/Calib'
         *  Inport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb'
         *  Inport: '<Root>/VeBPCR_b_HV_BatDschrgPwrST_FA_Ovrd'
         *  Logic: '<S370>/Logical'
         *  Logic: '<S370>/Logical2'
         *  RelationalOperator: '<S370>/Comparison3'
         */
        if (((KeESMR_b_ColdPowLimExpEnbl) &&
                (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f <=
                 KeESMR_T_ColdPowLimExpTemp)) && (!tmpRead_3))
        {
            /* Switch: '<S375>/Switch1' incorporates:
             *  Constant: '<S378>/Calib'
             *  Inport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb'
             *  Switch: '<S376>/Switch1'
             */
            VeESMR_P_BPCM_DschrgPwrLimST = KeESMR_P_ColdPowLimExpDschrg;
        }
        else
        {
            (void)Rte_Read_VeBPCR_P_HV_BatDschrgPwrST_Arb_Value
                ((&(VeESMR_P_BPCM_DschrgPwrLimST)));

            /* Switch: '<S370>/Switch' incorporates:
             *  Constant: '<S380>/Calib'
             *  Inport: '<Root>/VeBPCR_P_HV_BatDschrgPwrST_Arb'
             */
            if (KeESMR_b_BPCM_DschrgLim2s_Ovrd)
            {
                /* Switch: '<S375>/Switch1' incorporates:
                 *  Switch: '<S376>/Switch1'
                 */
                VeESMR_P_BPCM_DschrgPwrLimST =
                    rtb_TmpSignalConversionAtVeBPCR_P_HV_B_b;
            }

            /* End of Switch: '<S370>/Switch' */
        }

        /* End of Switch: '<S376>/Switch1' */
    }

    /* End of Switch: '<S375>/Switch1' */

    /* If: '<S354>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat > VeESMR_P_BPCM_DschrgPwrLimST)
    {
        /* Outputs for IfAction SubSystem: '<S354>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S363>/Action Port'
         */
        /* Merge: '<S354>/Merge' incorporates:
         *  Inport: '<S363>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat = VeESMR_P_BPCM_DschrgPwrLimST;

        /* Merge: '<S354>/Merge1' incorporates:
         *  Constant: '<S346>/Constant'
         *  Inport: '<S363>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_BPCM_DschrgPwrLimST;

        /* End of Outputs for SubSystem: '<S354>/If Action Subsystem1' */
    }

    /* End of If: '<S354>/If' */

    /* If: '<S356>/If' incorporates:
     *  Constant: '<S372>/Calib'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat > KeESMR_P_MaxDschrgLimST)
    {
        /* Outputs for IfAction SubSystem: '<S356>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S367>/Action Port'
         */
        /* Merge: '<S356>/Merge' incorporates:
         *  Inport: '<S367>/In1'
         */
        rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat = KeESMR_P_MaxDschrgLimST;

        /* Merge: '<S356>/Merge1' incorporates:
         *  Constant: '<S349>/Constant'
         *  Inport: '<S367>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_DschrgPwrLimST;

        /* End of Outputs for SubSystem: '<S356>/If Action Subsystem1' */
    }

    /* End of If: '<S356>/If' */

    /* Switch: '<S340>/Switch2' */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat)
    {
        /* Switch: '<S340>/Switch2' incorporates:
         *  Lookup_n-D: '<S373>/Vector'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMax_Arb'
         */
        VeESMR_P_ArbDschrgPwrLimST_Ovrd = look1_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_T_HV_B_d, ((const float32 *)
              &(KxESMR_P_PwrLimST_RA[0])), ((const float32 *)
              &(KtESMR_P_PwrLimST_RA[0])), 4U);
    }
    else
    {
        /* Switch: '<S340>/Switch2' incorporates:
         *  Constant: '<S371>/Calib'
         */
        VeESMR_P_ArbDschrgPwrLimST_Ovrd = KeESMR_P_DschrgPwrLimST_Def;
    }

    /* End of Switch: '<S340>/Switch2' */

    /* If: '<S355>/If' */
    if (rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat <=
            VeESMR_P_ArbDschrgPwrLimST_Ovrd)
    {
        /* Outputs for IfAction SubSystem: '<S355>/If Action Subsystem' incorporates:
         *  ActionPort: '<S364>/Action Port'
         */
        /* Merge: '<S355>/Merge' incorporates:
         *  Inport: '<S364>/In1'
         */
        VeESMR_P_ArbDschrgPwrLimST_Ovrd =
            rtb_TmpSignalConversionAtVeBPCR_P_HV_Bat;

        /* End of Outputs for SubSystem: '<S355>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S355>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S365>/Action Port'
         */
        /* Merge: '<S355>/Merge1' incorporates:
         *  Constant: '<S347>/Constant'
         *  Inport: '<S365>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_RA_DschrgPwrLimST;

        /* End of Outputs for SubSystem: '<S355>/If Action Subsystem1' */
    }

    /* End of If: '<S355>/If' */

    /* If: '<S357>/If' incorporates:
     *  Constant: '<S351>/Calib'
     */
    if (VeESMR_P_ArbDschrgPwrLimST_Ovrd < KeESMR_P_MinDschrgLimST)
    {
        /* Outputs for IfAction SubSystem: '<S357>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S369>/Action Port'
         */
        /* Merge: '<S357>/Merge' incorporates:
         *  Inport: '<S369>/In1'
         */
        VeESMR_P_ArbDschrgPwrLimST_Ovrd = KeESMR_P_MinDschrgLimST;

        /* Merge: '<S357>/Merge1' incorporates:
         *  Constant: '<S348>/Constant'
         *  Inport: '<S369>/In2'
         */
        VeESMR_e_DschrgPwrLimST_ID_A_Ovrd = CeESMR_e_MinDschrgLimST;

        /* End of Outputs for SubSystem: '<S357>/If Action Subsystem1' */
    }

    /* End of If: '<S357>/If' */

    /* If: '<S386>/If' incorporates:
     *  Switch: '<S386>/Switch'
     *  Switch: '<S388>/Switch1'
     */
    if (VeESMN_b_RevGradeEnbl)
    {
        /* Outputs for IfAction SubSystem: '<S386>/RevGradePwrLookup' incorporates:
         *  ActionPort: '<S389>/Action Port'
         */
        /* Lookup_n-D: '<S390>/Vector' incorporates:
         *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  SignalConversion generated from: '<S2>/VeBPCR_T_HV_BatModTempMin_Arb'
         */
        ESMR_ac_B.Vector_h = look2_iflf_binlca_16a
            (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a,
             rtb_TmpSignalConversionAtVeBPCR_T_HV_B_f, ((const float32 *)
              &(KxESMR_P_RevGradePwrLim[0])), ((const float32 *)
              &(KyESMR_P_RevGradePwrLim[0])), ((const float32 *)
              &(KtESMR_P_RevGradePwrLim[0])), ESMR_ac_ConstP.pooled14, 15U);

        /* End of Outputs for SubSystem: '<S386>/RevGradePwrLookup' */

        /* Switch: '<S388>/Switch1' incorporates:
         *  Constant: '<S387>/Constant'
         */
        VeESMR_e_DschrgPwrLim_ID_B_ST = CeESMR_e_RevGrDschrgPwrLimST;

        /* Switch: '<S386>/Switch' */
        VeESMR_P_RevGradeDschrgPwr_ST = ESMR_ac_B.Vector_h;
    }
    else
    {
        /* Switch: '<S388>/Switch1' incorporates:
         *  Merge: '<S357>/Merge1'
         */
        VeESMR_e_DschrgPwrLim_ID_B_ST = VeESMR_e_DschrgPwrLimST_ID_A_Ovrd;

        /* Switch: '<S386>/Switch' */
        VeESMR_P_RevGradeDschrgPwr_ST = VeESMR_P_ArbDschrgPwrLimST_Ovrd;
    }

    /* End of If: '<S386>/If' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/FC_BP_PwrLmt_Sum'
     */
    /* Outputs for Atomic SubSystem: '<S588>/EdgeRising' */
    /* Logic: '<S602>/OR1' incorporates:
     *  UnitDelay: '<S602>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !ESMR_ac_DW.UnitDelay_DSTATE_m3;

    /* Update for UnitDelay: '<S602>/Unit Delay' incorporates:
     *  Constant: '<S588>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_m3 = true;

    /* End of Outputs for SubSystem: '<S588>/EdgeRising' */

    /* Switch: '<S592>/Switch' incorporates:
     *  SignalConversion generated from: '<S234>/VariantSource2'
     *  Sum: '<S592>/Sum4'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    if (VeESMR_b_FCPS_Gen_Pwr_FA)
    {
        /* MinMax: '<S592>/MinMax2' incorporates:
         *  Constant: '<S630>/Calib'
         */
        rtb_MinMax2_b = KeESMR_P_FCPS_Gen_Pwr_OvrdVal;
    }
    else
    {
        /* MinMax: '<S592>/MinMax2' */
        rtb_MinMax2_b = ESMR_ac_B.VeESMR_P_FCPS_Gen_Pwr;
    }

    /* VariantMerge generated from: '<S234>/VariantSource2' */
    rtb_VariantMerge_For_Variant_Source_Vari = VeESMR_P_ArbChrgPwrLimLT +
        rtb_MinMax2_b;

#else

    /* VariantMerge generated from: '<S234>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S234>/VariantSource2'
     */
    rtb_VariantMerge_For_Variant_Source_Vari = VeESMR_P_ArbChrgPwrLimLT;

#endif

    /* End of Switch: '<S592>/Switch' */

    /* Outputs for Atomic SubSystem: '<S588>/EdgeRising' */
    /* Switch: '<S603>/Switch1' incorporates:
     *  Constant: '<S594>/Calib'
     *  Logic: '<S602>/AND'
     *  Sum: '<S588>/Sum3'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_e = KeESMR_P_BatLT_MinLimInit;
    }
    else
    {
        /* Sum: '<S588>/Sum2' incorporates:
         *  UnitDelay: '<S588>/Unit Delay'
         */
        rtb_VariantMerge_For_Variant_Source_Vari -=
            ESMR_ac_DW.UnitDelay_DSTATE_e;

        /* Outputs for Atomic SubSystem: '<S588>/Limiter' */
        /* Switch: '<S605>/Switch1' incorporates:
         *  Constant: '<S597>/Calib'
         *  Gain: '<S234>/Gain'
         *  RelationalOperator: '<S605>/Relational Operator'
         */
        if ((-KeESMR_P_PwrFallRateLimLT) <
                rtb_VariantMerge_For_Variant_Source_Vari)
        {
            /* Switch: '<S605>/Switch1' */
            rtb_VariantMerge_For_Variant_Source_Vari =
                -KeESMR_P_PwrFallRateLimLT;
        }

        /* End of Switch: '<S605>/Switch1' */

        /* Switch: '<S605>/Switch' incorporates:
         *  Constant: '<S599>/Calib'
         *  Gain: '<S234>/Gain1'
         *  RelationalOperator: '<S605>/Relational Operator1'
         */
        if (rtb_VariantMerge_For_Variant_Source_Vari <=
                (-KeESMR_P_PwrRiseRateLimLT))
        {
            rtb_VariantMerge_For_Variant_Source_Vari =
                -KeESMR_P_PwrRiseRateLimLT;
        }

        /* End of Switch: '<S605>/Switch' */
        /* End of Outputs for SubSystem: '<S588>/Limiter' */
        ESMR_ac_DW.UnitDelay_DSTATE_e +=
            rtb_VariantMerge_For_Variant_Source_Vari;
    }

    /* End of Switch: '<S603>/Switch1' */
    /* End of Outputs for SubSystem: '<S588>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S588>/Limiter2' */
    /* Switch: '<S606>/Switch1' incorporates:
     *  Constant: '<S588>/Constant Value1'
     *  RelationalOperator: '<S606>/Relational Operator'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    if (0.0F < ESMR_ac_DW.UnitDelay_DSTATE_e)
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = 0.0F;
    }
    else
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = ESMR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S606>/Switch1' */

    /* Switch: '<S606>/Switch' incorporates:
     *  Constant: '<S604>/Calib'
     *  RelationalOperator: '<S606>/Relational Operator1'
     */
    if (ESMR_ac_B.Switch > KeESMR_P_Max_LT_Chrg_PwrLmt)
    {
        /* Switch: '<S606>/Switch' */
        ESMR_ac_B.Switch_c = ESMR_ac_B.Switch;
    }
    else
    {
        /* Switch: '<S606>/Switch' */
        ESMR_ac_B.Switch_c = KeESMR_P_Max_LT_Chrg_PwrLmt;
    }

    /* End of Switch: '<S606>/Switch' */
    /* End of Outputs for SubSystem: '<S588>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S589>/EdgeRising' */
    /* Logic: '<S607>/OR1' incorporates:
     *  UnitDelay: '<S607>/Unit Delay'
     */
    VeESMR_b_FCPS_Gen_Pwr_FA = !ESMR_ac_DW.UnitDelay_DSTATE_m2;

    /* Update for UnitDelay: '<S607>/Unit Delay' incorporates:
     *  Constant: '<S589>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_m2 = true;

    /* End of Outputs for SubSystem: '<S589>/EdgeRising' */

    /* RelationalOperator: '<S592>/Comparison5' incorporates:
     *  Constant: '<S628>/Calib'
     *  Constant: '<S632>/Calib'
     *  Logic: '<S592>/Logical'
     *  Logic: '<S592>/Logical1'
     *  Logic: '<S592>/Logical12'
     *  Logic: '<S592>/Logical3'
     *  Logic: '<S592>/Logical6'
     *  Logic: '<S592>/Logical7'
     *  Logic: '<S592>/Logical8'
     *  Lookup_n-D: '<S634>/Vector'
     *  Lookup_n-D: '<S635>/Vector'
     *  MinMax: '<S592>/MinMax'
     *  MinMax: '<S592>/MinMax2'
     *  Product: '<S592>/Product'
     *  Product: '<S592>/Product2'
     *  RelationalOperator: '<S592>/Comparison1'
     *  RelationalOperator: '<S592>/Comparison2'
     *  RelationalOperator: '<S592>/Comparison7'
     *  RelationalOperator: '<S592>/Comparison8'
     *  SignalConversion generated from: '<S234>/VariantSource3'
     *  Sum: '<S592>/Sum'
     *  Sum: '<S592>/Sum2'
     *  Sum: '<S592>/Sum7'
     *  Switch: '<S592>/Switch1'
     *  Switch: '<S622>/Switch1'
     *  Switch: '<S624>/Switch1'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* Outputs for Atomic SubSystem: '<S592>/Turn On Delay Sample' */
    /* Lookup_n-D: '<S635>/Vector' incorporates:
     *  SignalConversion generated from: '<S2>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     */
    VeESMR_k_BattPwrDerateFctr = look1_iflf_binlca_16a
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a, ((const float32 *)
          &(KxESMR_k_BattPwrDerateFctr[0])), ((const float32 *)
          &(KtESMR_k_BattPwrDerateFctr[0])), 4U);

    /* Product: '<S592>/Product4' */
    VeESMR_P_BP_Dschrg_LT_Modified = VeESMR_P_RevGradeDschrgPwr_LT *
        VeESMR_k_BattPwrDerateFctr;

    /* Sum: '<S592>/Sum2' */
    VeESMR_P_FCOn_LowSOC_Totl_Dschrg_LT = VeESMR_P_BP_Dschrg_LT_Modified +
        VeESMR_P_FC_Dschrg_PwrLim_LT;

    /* MinMax: '<S592>/MinMax' incorporates:
     *  Constant: '<S626>/Calib'
     */
    VeESMR_P_FCOff_LowSOC_Totl_Dschrg_LT = fminf(VeESMR_P_RevGradeDschrgPwr_LT,
        VeESMR_P_BP_Dschrg_LT_Modified + KeESMR_P_BattRsrvdPwr);

    /* RelationalOperator: '<S592>/Comparison2' incorporates:
     *  Constant: '<S627>/Calib'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = (VeESMR_P_FC_Dschrg_PwrLim_LT >=
        KeESMR_P_FCMinPwr);

    /* Outputs for Atomic SubSystem: '<S636>/EdgeRising' */
    /* Logic: '<S638>/AND' incorporates:
     *  Logic: '<S638>/OR1'
     *  UnitDelay: '<S638>/Unit Delay'
     */
    rtb_AND_dy = (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
                  (!ESMR_ac_DW.UnitDelay_DSTATE_hu));

    /* Update for UnitDelay: '<S638>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_hu = rtb_TmpSignalConversionAtVeBPCR_b_CmdBat;

    /* End of Outputs for SubSystem: '<S636>/EdgeRising' */

    /* Switch: '<S636>/Switch1' incorporates:
     *  Constant: '<S633>/Calib'
     *  Constant: '<S636>/Constant Value'
     *  Constant: '<S636>/Constant Value1'
     *  Logic: '<S636>/OR'
     *  Logic: '<S636>/OR1'
     *  MinMax: '<S636>/Minimum'
     *  Sum: '<S636>/Summation'
     *  UnitDelay: '<S636>/Unit Delay'
     */
    if ((!rtb_TmpSignalConversionAtVeBPCR_b_CmdBat) || rtb_AND_dy)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_hp = 0U;
    }
    else if (KeESMR_n_FCPwrRampUpDelay < ((uint16)(((uint32)
                ESMR_ac_DW.UnitDelay_DSTATE_hp) + 1U)))
    {
        /* MinMax: '<S636>/Minimum' incorporates:
         *  Constant: '<S633>/Calib'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_hp = KeESMR_n_FCPwrRampUpDelay;
    }
    else
    {
        /* MinMax: '<S636>/Minimum' incorporates:
         *  Constant: '<S636>/Constant Value'
         *  Sum: '<S636>/Summation'
         *  UnitDelay: '<S636>/Unit Delay'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_hp = (uint16)(((uint32)
            ESMR_ac_DW.UnitDelay_DSTATE_hp) + 1U);
    }

    /* End of Switch: '<S636>/Switch1' */

    /* Logic: '<S592>/Logical1' incorporates:
     *  Constant: '<S633>/Calib'
     *  Logic: '<S636>/AND'
     *  RelationalOperator: '<S636>/Greater  Than'
     *  UnitDelay: '<S636>/Unit Delay'
     */
    VeESMR_b_FCPS_Dschrg_LT_Enbl = ((VeESMR_P_FCOn_LowSOC_Totl_Dschrg_LT >=
        VeESMR_P_FCOff_LowSOC_Totl_Dschrg_LT) ||
        (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
         (ESMR_ac_DW.UnitDelay_DSTATE_hp >= KeESMR_n_FCPwrRampUpDelay)));
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !VeESMR_b_FCPS_Dschrg_LT_Enbl;
    if (VeESMR_b_FC_Dschrg_PwrLim_LT_FA ||
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a < KeESMR_Pct_BattRsrvdSOC)
             && rtb_TmpSignalConversionAtVeBPCR_b_CmdBat))
    {
        /* Switch: '<S622>/Switch1' incorporates:
         *  Constant: '<S592>/Constant Value'
         */
        VeESMR_P_FC_Dschrg_LT_Modified = 0.0F;
    }
    else
    {
        /* Switch: '<S622>/Switch1' */
        VeESMR_P_FC_Dschrg_LT_Modified = VeESMR_P_FC_Dschrg_PwrLim_LT;
    }

    if ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a < KeESMR_Pct_BattRsrvdSOC) &&
            (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat ||
             (VeESMR_P_FC_Dschrg_LT_Modified < KeESMR_P_FCMinPwr2Bus_LT)))
    {
        /* Switch: '<S624>/Switch1' */
        VeESMR_P_BP_Dschrg_LT_Modified = VeESMR_P_FCOff_LowSOC_Totl_Dschrg_LT;
    }

    /* MinMax: '<S592>/MinMax2' incorporates:
     *  Constant: '<S628>/Calib'
     *  Constant: '<S632>/Calib'
     *  Switch: '<S583>/Switch'
     */
    rtb_MinMax2_b = fminf(look1_iflf_binlca_16a(VeESMR_P_RevGradeDschrgPwr_LT,
                           ((const float32 *)&(KxESMR_P_PwrAvailForFCPS[0])), ((
        const float32 *)&(KtESMR_P_PwrAvailForFCPS[0])), 11U),
                          VeESMR_P_FCPS_StarUp_PwrDmnd);
    if (VeESMR_b_FCPS_StarUp_PwrDmnd_FA)
    {
        /* Switch: '<S592>/Switch1' incorporates:
         *  Constant: '<S631>/Calib'
         */
        rtb_Switch1_cm = KeESMR_P_FCPS_StarUp_PwrDmnd_OvrdVal;
    }
    else
    {
        /* Switch: '<S592>/Switch1' */
        rtb_Switch1_cm = rtb_MinMax2_b;
    }

    /* VariantMerge generated from: '<S234>/VariantSource3' */
    rtb_VariantMerge_For_Variant_Source_Va_d = (VeESMR_P_FC_Dschrg_LT_Modified +
        VeESMR_P_BP_Dschrg_LT_Modified) - rtb_Switch1_cm;

    /* End of Outputs for SubSystem: '<S592>/Turn On Delay Sample' */
#else

    /* VariantMerge generated from: '<S234>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S234>/VariantSource3'
     */
    rtb_VariantMerge_For_Variant_Source_Va_d = VeESMR_P_RevGradeDschrgPwr_LT;

#endif

    /* End of RelationalOperator: '<S592>/Comparison5' */

    /* Outputs for Atomic SubSystem: '<S589>/EdgeRising' */
    /* Switch: '<S608>/Switch1' incorporates:
     *  Constant: '<S593>/Calib'
     *  Logic: '<S607>/AND'
     *  Sum: '<S589>/Sum3'
     *  UnitDelay: '<S589>/Unit Delay'
     */
    if (VeESMR_b_FCPS_Gen_Pwr_FA)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_p = KeESMR_P_BatLT_MaxLimInit;
    }
    else
    {
        /* Sum: '<S589>/Sum2' incorporates:
         *  UnitDelay: '<S589>/Unit Delay'
         */
        VeESMR_P_FC_Dschrg_PwrLim_LT = rtb_VariantMerge_For_Variant_Source_Va_d
            - ESMR_ac_DW.UnitDelay_DSTATE_p;

        /* Outputs for Atomic SubSystem: '<S589>/Limiter' */
        /* Switch: '<S610>/Switch1' incorporates:
         *  Constant: '<S599>/Calib'
         *  RelationalOperator: '<S610>/Relational Operator'
         */
        if (KeESMR_P_PwrRiseRateLimLT < VeESMR_P_FC_Dschrg_PwrLim_LT)
        {
            /* Switch: '<S610>/Switch1' */
            VeESMR_P_FC_Dschrg_PwrLim_LT = KeESMR_P_PwrRiseRateLimLT;
        }

        /* End of Switch: '<S610>/Switch1' */

        /* Switch: '<S610>/Switch' incorporates:
         *  Constant: '<S597>/Calib'
         *  RelationalOperator: '<S610>/Relational Operator1'
         */
        if (VeESMR_P_FC_Dschrg_PwrLim_LT <= KeESMR_P_PwrFallRateLimLT)
        {
            VeESMR_P_FC_Dschrg_PwrLim_LT = KeESMR_P_PwrFallRateLimLT;
        }

        /* End of Switch: '<S610>/Switch' */
        /* End of Outputs for SubSystem: '<S589>/Limiter' */
        ESMR_ac_DW.UnitDelay_DSTATE_p += VeESMR_P_FC_Dschrg_PwrLim_LT;
    }

    /* End of Switch: '<S608>/Switch1' */
    /* End of Outputs for SubSystem: '<S589>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S589>/Limiter3' */
    /* Switch: '<S611>/Switch1' incorporates:
     *  Constant: '<S609>/Calib'
     *  RelationalOperator: '<S611>/Relational Operator'
     *  UnitDelay: '<S589>/Unit Delay'
     */
    if (KeESMR_P_Max_LT_DsChrg_PwrLmt < ESMR_ac_DW.UnitDelay_DSTATE_p)
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = KeESMR_P_Max_LT_DsChrg_PwrLmt;
    }
    else
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = ESMR_ac_DW.UnitDelay_DSTATE_p;
    }

    /* End of Switch: '<S611>/Switch1' */

    /* Switch: '<S611>/Switch' incorporates:
     *  Constant: '<S589>/Constant Value3'
     *  RelationalOperator: '<S611>/Relational Operator1'
     */
    if (ESMR_ac_B.Switch > 0.0F)
    {
        /* Switch: '<S611>/Switch' */
        ESMR_ac_B.Switch_k = ESMR_ac_B.Switch;
    }
    else
    {
        /* Switch: '<S611>/Switch' */
        ESMR_ac_B.Switch_k = 0.0F;
    }

    /* End of Switch: '<S611>/Switch' */
    /* End of Outputs for SubSystem: '<S589>/Limiter3' */

    /* SignalConversion generated from: '<S234>/VariantSource' */
#if !Rte_SysCon_Variant_ESMR_FCPS_Func && Rte_SysCon_Variant_ESMR_FCPS_NoFunc

    /* VariantMerge generated from: '<S234>/VariantSource' */
    ESMR_ac_B.VariantMerge_For_Variant_Source_VariantS =
        VeESMR_P_ArbChrgPwrLimST_Ovrd;

#endif

    /* End of SignalConversion generated from: '<S234>/VariantSource' */

    /* UnitDelay: '<S590>/Unit Delay' incorporates:
     *  Constant: '<S596>/Calib'
     *  Sum: '<S590>/Sum3'
     *  Switch: '<S613>/Switch1'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_NoFunc

    /* Outputs for Atomic SubSystem: '<S590>/Limiter1' */
    /* Outputs for Atomic SubSystem: '<S590>/EdgeRising' */
    /* Logic: '<S612>/AND' incorporates:
     *  Logic: '<S612>/OR1'
     *  UnitDelay: '<S612>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat = !ESMR_ac_DW.UnitDelay_DSTATE_bm;

    /* Update for UnitDelay: '<S612>/Unit Delay' incorporates:
     *  Constant: '<S590>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_bm = true;
    if (rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_hm = KeESMR_P_BatST_MinLimInit;
    }
    else
    {
        /* Sum: '<S590>/Sum2' */
        VeESMR_P_FC_Dschrg_PwrLim_LT =
            ESMR_ac_B.VariantMerge_For_Variant_Source_VariantS -
            ESMR_ac_DW.UnitDelay_DSTATE_hm;

        /* Outputs for Atomic SubSystem: '<S590>/Limiter' */
        /* Switch: '<S615>/Switch1' incorporates:
         *  Constant: '<S598>/Calib'
         *  Gain: '<S234>/Gain2'
         *  RelationalOperator: '<S615>/Relational Operator'
         */
        if ((-KeESMR_P_PwrFallRateLimST) < VeESMR_P_FC_Dschrg_PwrLim_LT)
        {
            /* Switch: '<S615>/Switch1' */
            VeESMR_P_FC_Dschrg_PwrLim_LT = -KeESMR_P_PwrFallRateLimST;
        }

        /* End of Switch: '<S615>/Switch1' */

        /* Switch: '<S615>/Switch' incorporates:
         *  Constant: '<S600>/Calib'
         *  Gain: '<S234>/Gain3'
         *  RelationalOperator: '<S615>/Relational Operator1'
         */
        if (VeESMR_P_FC_Dschrg_PwrLim_LT <= (-KeESMR_P_PwrRiseRateLimST))
        {
            VeESMR_P_FC_Dschrg_PwrLim_LT = -KeESMR_P_PwrRiseRateLimST;
        }

        /* End of Switch: '<S615>/Switch' */
        /* End of Outputs for SubSystem: '<S590>/Limiter' */
        ESMR_ac_DW.UnitDelay_DSTATE_hm += VeESMR_P_FC_Dschrg_PwrLim_LT;
    }

    /* Switch: '<S616>/Switch1' incorporates:
     *  Constant: '<S590>/Constant Value'
     *  Constant: '<S596>/Calib'
     *  RelationalOperator: '<S616>/Relational Operator'
     *  Sum: '<S590>/Sum3'
     */
    if (0.0F < ESMR_ac_DW.UnitDelay_DSTATE_hm)
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = 0.0F;
    }
    else
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = ESMR_ac_DW.UnitDelay_DSTATE_hm;
    }

    /* End of Switch: '<S616>/Switch1' */

    /* Switch: '<S616>/Switch' incorporates:
     *  Constant: '<S614>/Calib'
     *  RelationalOperator: '<S616>/Relational Operator1'
     */
    if (ESMR_ac_B.Switch > KeESMR_P_Max_ST_Chrg_PwrLmt)
    {
        /* Switch: '<S616>/Switch' */
        ESMR_ac_B.Switch_g = ESMR_ac_B.Switch;
    }
    else
    {
        /* Switch: '<S616>/Switch' */
        ESMR_ac_B.Switch_g = KeESMR_P_Max_ST_Chrg_PwrLmt;
    }

    /* End of Switch: '<S616>/Switch' */
    /* End of Outputs for SubSystem: '<S590>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S590>/Limiter1' */
#endif

    /* End of UnitDelay: '<S590>/Unit Delay' */

    /* Outputs for Atomic SubSystem: '<S591>/EdgeRising' */
    /* Logic: '<S617>/OR1' incorporates:
     *  UnitDelay: '<S617>/Unit Delay'
     */
    VeESMR_b_FC_Dschrg_PwrLim_LT_FA = !ESMR_ac_DW.UnitDelay_DSTATE_nn;

    /* Update for UnitDelay: '<S617>/Unit Delay' incorporates:
     *  Constant: '<S591>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_nn = true;

    /* End of Outputs for SubSystem: '<S591>/EdgeRising' */

    /* Product: '<S592>/Product1' incorporates:
     *  Constant: '<S629>/Calib'
     *  Constant: '<S632>/Calib'
     *  Logic: '<S592>/Logical10'
     *  Logic: '<S592>/Logical11'
     *  Logic: '<S592>/Logical13'
     *  Logic: '<S592>/Logical2'
     *  Logic: '<S592>/Logical4'
     *  Logic: '<S592>/Logical5'
     *  Logic: '<S592>/Logical9'
     *  MinMax: '<S592>/MinMax1'
     *  Product: '<S592>/Product3'
     *  RelationalOperator: '<S592>/Comparison10'
     *  RelationalOperator: '<S592>/Comparison3'
     *  RelationalOperator: '<S592>/Comparison4'
     *  RelationalOperator: '<S592>/Comparison6'
     *  RelationalOperator: '<S592>/Comparison9'
     *  SignalConversion generated from: '<S234>/VariantSource1'
     *  Sum: '<S592>/Sum1'
     *  Sum: '<S592>/Sum3'
     *  Sum: '<S592>/Sum5'
     *  Switch: '<S623>/Switch1'
     *  Switch: '<S625>/Switch1'
     */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* Outputs for Atomic SubSystem: '<S592>/Turn On Delay Sample1' */
    /* Product: '<S592>/Product5' */
    VeESMR_P_BP_Dschrg_ST_Modified = VeESMR_P_RevGradeDschrgPwr_ST *
        VeESMR_k_BattPwrDerateFctr;

    /* MinMax: '<S592>/MinMax1' incorporates:
     *  Constant: '<S626>/Calib'
     */
    VeESMR_P_FCOff_LowSOC_Totl_Dschrg_ST = fminf(VeESMR_P_RevGradeDschrgPwr_ST,
        VeESMR_P_BP_Dschrg_ST_Modified + KeESMR_P_BattRsrvdPwr);

    /* Sum: '<S592>/Sum3' */
    VeESMR_P_FCOn_LowSOC_Totl_Dschrg_ST = VeESMR_P_BP_Dschrg_ST_Modified +
        VeESMR_P_FC_Dschrg_PwrLim_ST;

    /* RelationalOperator: '<S592>/Comparison4' incorporates:
     *  Constant: '<S627>/Calib'
     */
    VeESMR_b_FCPS_StarUp_PwrDmnd_FA = (VeESMR_P_FC_Dschrg_PwrLim_ST >=
        KeESMR_P_FCMinPwr);

    /* Outputs for Atomic SubSystem: '<S637>/EdgeRising' */
    /* Logic: '<S639>/AND' incorporates:
     *  Logic: '<S639>/OR1'
     *  UnitDelay: '<S639>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat = (VeESMR_b_FCPS_StarUp_PwrDmnd_FA &&
        (!ESMR_ac_DW.UnitDelay_DSTATE_ju));

    /* Update for UnitDelay: '<S639>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_ju = VeESMR_b_FCPS_StarUp_PwrDmnd_FA;

    /* End of Outputs for SubSystem: '<S637>/EdgeRising' */

    /* Switch: '<S637>/Switch1' incorporates:
     *  Constant: '<S633>/Calib'
     *  Constant: '<S637>/Constant Value'
     *  Constant: '<S637>/Constant Value1'
     *  Logic: '<S637>/OR'
     *  Logic: '<S637>/OR1'
     *  MinMax: '<S637>/Minimum'
     *  Sum: '<S637>/Summation'
     *  UnitDelay: '<S637>/Unit Delay'
     */
    if ((!VeESMR_b_FCPS_StarUp_PwrDmnd_FA) ||
            rtb_TmpSignalConversionAtVeBPCR_b_HV_Bat)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_bd = 0U;
    }
    else if (KeESMR_n_FCPwrRampUpDelay < ((uint16)(((uint32)
                ESMR_ac_DW.UnitDelay_DSTATE_bd) + 1U)))
    {
        /* MinMax: '<S637>/Minimum' incorporates:
         *  Constant: '<S633>/Calib'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_bd = KeESMR_n_FCPwrRampUpDelay;
    }
    else
    {
        /* MinMax: '<S637>/Minimum' incorporates:
         *  Constant: '<S637>/Constant Value'
         *  Sum: '<S637>/Summation'
         *  UnitDelay: '<S637>/Unit Delay'
         */
        ESMR_ac_DW.UnitDelay_DSTATE_bd = (uint16)(((uint32)
            ESMR_ac_DW.UnitDelay_DSTATE_bd) + 1U);
    }

    /* End of Switch: '<S637>/Switch1' */

    /* Logic: '<S592>/Logical2' incorporates:
     *  Constant: '<S633>/Calib'
     *  Logic: '<S637>/AND'
     *  RelationalOperator: '<S637>/Greater  Than'
     *  UnitDelay: '<S637>/Unit Delay'
     */
    VeESMR_b_FCPS_Dschrg_ST_Enbl = ((VeESMR_P_FCOn_LowSOC_Totl_Dschrg_ST >=
        VeESMR_P_FCOff_LowSOC_Totl_Dschrg_ST) ||
        (VeESMR_b_FCPS_StarUp_PwrDmnd_FA && (ESMR_ac_DW.UnitDelay_DSTATE_bd >=
        KeESMR_n_FCPwrRampUpDelay)));
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !VeESMR_b_FCPS_Dschrg_ST_Enbl;
    if (VeESMR_b_FC_Dschrg_PwrLim_ST_FA ||
            ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a < KeESMR_Pct_BattRsrvdSOC)
             && rtb_TmpSignalConversionAtVeBPCR_b_CmdBat))
    {
        /* Switch: '<S623>/Switch1' incorporates:
         *  Constant: '<S592>/Constant Value1'
         */
        VeESMR_P_FC_Dschrg_ST_Modified = 0.0F;
    }
    else
    {
        /* Switch: '<S623>/Switch1' */
        VeESMR_P_FC_Dschrg_ST_Modified = VeESMR_P_FC_Dschrg_PwrLim_ST;
    }

    if ((rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a < KeESMR_Pct_BattRsrvdSOC) &&
            (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat ||
             (VeESMR_P_FC_Dschrg_ST_Modified < KeESMR_P_FCMinPwr2Bus_ST)))
    {
        /* Switch: '<S625>/Switch1' */
        VeESMR_P_BP_Dschrg_ST_Modified = VeESMR_P_FCOff_LowSOC_Totl_Dschrg_ST;
    }

    /* VariantMerge generated from: '<S234>/VariantSource1' incorporates:
     *  Constant: '<S629>/Calib'
     *  Constant: '<S632>/Calib'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j = (VeESMR_P_BP_Dschrg_ST_Modified +
        VeESMR_P_FC_Dschrg_ST_Modified) - rtb_Switch1_cm;

    /* End of Outputs for SubSystem: '<S592>/Turn On Delay Sample1' */
#else

    /* VariantMerge generated from: '<S234>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S234>/VariantSource1'
     */
    rtb_VariantMerge_For_Variant_Source_Va_j = VeESMR_P_RevGradeDschrgPwr_ST;

#endif

    /* End of Product: '<S592>/Product1' */

    /* Outputs for Atomic SubSystem: '<S591>/EdgeRising' */
    /* Switch: '<S618>/Switch1' incorporates:
     *  Constant: '<S595>/Calib'
     *  Logic: '<S617>/AND'
     *  Sum: '<S591>/Sum3'
     *  UnitDelay: '<S591>/Unit Delay'
     */
    if (VeESMR_b_FC_Dschrg_PwrLim_LT_FA)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_id = KeESMR_P_BatST_MaxLimInit;
    }
    else
    {
        /* Sum: '<S591>/Sum2' incorporates:
         *  UnitDelay: '<S591>/Unit Delay'
         */
        VeESMR_P_FC_Dschrg_PwrLim_ST = rtb_VariantMerge_For_Variant_Source_Va_j
            - ESMR_ac_DW.UnitDelay_DSTATE_id;

        /* Outputs for Atomic SubSystem: '<S591>/Limiter' */
        /* Switch: '<S620>/Switch1' incorporates:
         *  Constant: '<S600>/Calib'
         *  RelationalOperator: '<S620>/Relational Operator'
         */
        if (KeESMR_P_PwrRiseRateLimST < VeESMR_P_FC_Dschrg_PwrLim_ST)
        {
            /* Switch: '<S620>/Switch1' */
            VeESMR_P_FC_Dschrg_PwrLim_ST = KeESMR_P_PwrRiseRateLimST;
        }

        /* End of Switch: '<S620>/Switch1' */

        /* Switch: '<S620>/Switch' incorporates:
         *  Constant: '<S598>/Calib'
         *  RelationalOperator: '<S620>/Relational Operator1'
         */
        if (VeESMR_P_FC_Dschrg_PwrLim_ST <= KeESMR_P_PwrFallRateLimST)
        {
            VeESMR_P_FC_Dschrg_PwrLim_ST = KeESMR_P_PwrFallRateLimST;
        }

        /* End of Switch: '<S620>/Switch' */
        /* End of Outputs for SubSystem: '<S591>/Limiter' */
        ESMR_ac_DW.UnitDelay_DSTATE_id += VeESMR_P_FC_Dschrg_PwrLim_ST;
    }

    /* End of Switch: '<S618>/Switch1' */
    /* End of Outputs for SubSystem: '<S591>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S591>/Limiter1' */
    /* Switch: '<S621>/Switch1' incorporates:
     *  Constant: '<S619>/Calib'
     *  RelationalOperator: '<S621>/Relational Operator'
     *  UnitDelay: '<S591>/Unit Delay'
     */
    if (KeESMR_P_Max_ST_DsChrg_PwrLmt < ESMR_ac_DW.UnitDelay_DSTATE_id)
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = KeESMR_P_Max_ST_DsChrg_PwrLmt;
    }
    else
    {
        /* Switch: '<S621>/Switch1' */
        ESMR_ac_B.Switch = ESMR_ac_DW.UnitDelay_DSTATE_id;
    }

    /* End of Switch: '<S621>/Switch1' */

    /* Switch: '<S621>/Switch' incorporates:
     *  Constant: '<S591>/Constant Value2'
     *  RelationalOperator: '<S621>/Relational Operator1'
     */
    if (ESMR_ac_B.Switch <= 0.0F)
    {
        /* Switch: '<S621>/Switch' */
        ESMR_ac_B.Switch = 0.0F;
    }

    /* End of Switch: '<S621>/Switch' */
    /* End of Outputs for SubSystem: '<S591>/Limiter1' */

    /* SignalConversion generated from: '<S234>/VariantSource4' */
#if Rte_SysCon_Variant_ESMR_FCPS_Func

    /* VariantMerge generated from: '<S234>/VariantSource4' */
    ESMR_ac_B.VariantMerge_For_Variant_Source_Varian_a = rtb_MinMax2_b;

#else

    /* VariantMerge generated from: '<S234>/VariantSource4' incorporates:
     *  Constant: '<S601>/Constant'
     *  SignalConversion generated from: '<S234>/VariantSource4'
     */
    ESMR_ac_B.VariantMerge_For_Variant_Source_Varian_a = 0.0F;

#endif

    /* End of SignalConversion generated from: '<S234>/VariantSource4' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_CalcBPM'
     */

    /* UnitDelay: '<S435>/Unit Delay' incorporates:
     *  Constant: '<S423>/Constant Value4'
     *  RelationalOperator: '<S423>/Greater  Than2'
     */
    VeESMR_b_FC_Dschrg_PwrLim_ST_FA = (VeESMI_I_HV_BatCurrArb > 0.0F);

    /* Switch: '<S423>/Switch1' incorporates:
     *  Logic: '<S423>/NOT'
     */
    if (!VeESMR_b_FC_Dschrg_PwrLim_ST_FA)
    {
        /* Switch: '<S423>/Switch1' */
        VeESMR_P_FC_Dschrg_PwrLim_ST = VeESMI_I_HV_BatCurrArb;
    }
    else
    {
        /* Switch: '<S423>/Switch1' incorporates:
         *  Constant: '<S423>/Constant Value5'
         */
        VeESMR_P_FC_Dschrg_PwrLim_ST = 0.0F;
    }

    /* End of Switch: '<S423>/Switch1' */

    /* Sum: '<S426>/Summation1' incorporates:
     *  Constant: '<S426>/Constant Value1'
     *  Constant: '<S426>/Constant Value2'
     *  Product: '<S423>/Multiplication3'
     *  Product: '<S426>/Multiplication1'
     *  UnitDelay: '<S426>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_g += ((VeESMR_P_FC_Dschrg_PwrLim_ST *
        VeESMN_U_HV_BatVoltArb) * 0.000277777785F) * 0.1F;

    /* Outputs for Atomic SubSystem: '<S432>/EdgeRising1' */
    /* Logic: '<S433>/OR1' incorporates:
     *  UnitDelay: '<S433>/Unit Delay'
     */
    VeESMR_b_FC_Dschrg_PwrLim_LT_FA = !ESMR_ac_DW.UnitDelay_DSTATE_pg;

    /* Update for UnitDelay: '<S433>/Unit Delay' incorporates:
     *  Constant: '<S432>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_pg = true;

    /* Switch: '<S432>/Switch3' incorporates:
     *  DataStoreRead: '<S426>/Data Store Read'
     *  Logic: '<S433>/AND'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    if (VeESMR_b_FC_Dschrg_PwrLim_LT_FA)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_i = ESMR_ac_DW.DeESMC_P_AccumChrgEnergy;
    }

    /* End of Switch: '<S432>/Switch3' */
    /* End of Outputs for SubSystem: '<S432>/EdgeRising1' */

    /* Sum: '<S426>/Summation' incorporates:
     *  DataStoreWrite: '<S426>/Data Store Write1'
     *  UnitDelay: '<S426>/Unit Delay'
     *  UnitDelay: '<S432>/Unit Delay'
     */
    ESMR_ac_DW.DeESMC_P_AccumChrgEnergy = ESMR_ac_DW.UnitDelay_DSTATE_i -
        ESMR_ac_DW.UnitDelay_DSTATE_g;

    /* Switch: '<S423>/Switch2' */
    if (VeESMR_b_FC_Dschrg_PwrLim_ST_FA)
    {
        /* Switch: '<S423>/Switch2' */
        rtb_MinMax2_b = VeESMI_I_HV_BatCurrArb;
    }
    else
    {
        /* Switch: '<S423>/Switch2' incorporates:
         *  Constant: '<S423>/Constant Value4'
         */
        rtb_MinMax2_b = 0.0F;
    }

    /* End of Switch: '<S423>/Switch2' */

    /* Sum: '<S427>/Summation1' incorporates:
     *  Constant: '<S427>/Constant Value1'
     *  Constant: '<S427>/Constant Value2'
     *  Product: '<S423>/Multiplication2'
     *  Product: '<S427>/Multiplication1'
     *  UnitDelay: '<S427>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_n += ((rtb_MinMax2_b * VeESMN_U_HV_BatVoltArb) *
        0.000277777785F) * 0.1F;

    /* Outputs for Atomic SubSystem: '<S434>/EdgeRising1' */
    /* Logic: '<S435>/OR1' incorporates:
     *  UnitDelay: '<S435>/Unit Delay'
     */
    VeESMR_b_FC_Dschrg_PwrLim_ST_FA = !ESMR_ac_DW.UnitDelay_DSTATE_m;

    /* Update for UnitDelay: '<S435>/Unit Delay' incorporates:
     *  Constant: '<S434>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_m = true;

    /* Switch: '<S434>/Switch3' incorporates:
     *  DataStoreRead: '<S427>/Data Store Read'
     *  Logic: '<S435>/AND'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    if (VeESMR_b_FC_Dschrg_PwrLim_ST_FA)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_h = ESMR_ac_DW.DeESMC_P_AccumDisChgEnergy;
    }

    /* End of Switch: '<S434>/Switch3' */
    /* End of Outputs for SubSystem: '<S434>/EdgeRising1' */

    /* Sum: '<S427>/Summation' incorporates:
     *  DataStoreWrite: '<S427>/Data Store Write1'
     *  UnitDelay: '<S427>/Unit Delay'
     *  UnitDelay: '<S434>/Unit Delay'
     */
    ESMR_ac_DW.DeESMC_P_AccumDisChgEnergy = ESMR_ac_DW.UnitDelay_DSTATE_n +
        ESMR_ac_DW.UnitDelay_DSTATE_h;

    /* Sum: '<S424>/Summation1' incorporates:
     *  Constant: '<S424>/Constant Value1'
     *  Constant: '<S424>/Constant Value2'
     *  Product: '<S424>/Multiplication1'
     *  UnitDelay: '<S424>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_jd += (VeESMR_P_FC_Dschrg_PwrLim_ST *
        0.000277777785F) * 0.1F;

    /* Outputs for Atomic SubSystem: '<S428>/EdgeRising1' */
    /* Logic: '<S429>/OR1' incorporates:
     *  UnitDelay: '<S429>/Unit Delay'
     */
    VeESMR_b_FC_Dschrg_PwrLim_ST_FA = !ESMR_ac_DW.UnitDelay_DSTATE_m0;

    /* Update for UnitDelay: '<S429>/Unit Delay' incorporates:
     *  Constant: '<S428>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_m0 = true;

    /* Switch: '<S428>/Switch3' incorporates:
     *  DataStoreRead: '<S424>/Data Store Read'
     *  Logic: '<S429>/AND'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    if (VeESMR_b_FC_Dschrg_PwrLim_ST_FA)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_oe = ESMR_ac_DW.DeESMC_I_AccumChrgCurr;
    }

    /* End of Switch: '<S428>/Switch3' */
    /* End of Outputs for SubSystem: '<S428>/EdgeRising1' */

    /* Sum: '<S424>/Summation' incorporates:
     *  UnitDelay: '<S424>/Unit Delay'
     *  UnitDelay: '<S428>/Unit Delay'
     */
    VeESMR_I_AccumChrgCurr_Test = ESMR_ac_DW.UnitDelay_DSTATE_oe -
        ESMR_ac_DW.UnitDelay_DSTATE_jd;

    /* DataStoreWrite: '<S424>/Data Store Write1' */
    ESMR_ac_DW.DeESMC_I_AccumChrgCurr = VeESMR_I_AccumChrgCurr_Test;

    /* Sum: '<S425>/Summation1' incorporates:
     *  Constant: '<S425>/Constant Value1'
     *  Constant: '<S425>/Constant Value2'
     *  Product: '<S425>/Multiplication1'
     *  UnitDelay: '<S425>/Unit Delay'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_f += (rtb_MinMax2_b * 0.000277777785F) * 0.1F;

    /* Outputs for Atomic SubSystem: '<S430>/EdgeRising1' */
    /* Logic: '<S431>/OR1' incorporates:
     *  UnitDelay: '<S431>/Unit Delay'
     */
    VeESMR_b_FC_Dschrg_PwrLim_ST_FA = !ESMR_ac_DW.UnitDelay_DSTATE_nv;

    /* Update for UnitDelay: '<S431>/Unit Delay' incorporates:
     *  Constant: '<S430>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_nv = true;

    /* Switch: '<S430>/Switch3' incorporates:
     *  DataStoreRead: '<S425>/Data Store Read'
     *  Logic: '<S431>/AND'
     *  UnitDelay: '<S430>/Unit Delay'
     */
    if (VeESMR_b_FC_Dschrg_PwrLim_ST_FA)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_ac = ESMR_ac_DW.DeESMC_I_AccumDisChrgCurr;
    }

    /* End of Switch: '<S430>/Switch3' */
    /* End of Outputs for SubSystem: '<S430>/EdgeRising1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VePLTR_Pct_InPlant_SOCSetPt' */
    (void)Rte_Read_VePLTR_Pct_InPlant_SOCSetPt_Value(&VeESMR_Pct_IP_SOCSetPt);

    /* Inport: '<Root>/VePLTR_Pct_REMLogisticSOCSetPt' */
    (void)Rte_Read_VePLTR_Pct_REMLogisticSOCSetPt_Value
        (&VeESMR_Pct_Logistics_SOCSetPt);

    /* Inport: '<Root>/VeBPCR_Pct_HVBatSOHLow' */
    (void)Rte_Read_VeBPCR_Pct_HVBatSOHLow_Value(&tmpRead_4);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_CalcBPM'
     */
    /* Sum: '<S425>/Summation2' incorporates:
     *  UnitDelay: '<S425>/Unit Delay'
     *  UnitDelay: '<S430>/Unit Delay'
     */
    VeESMR_I_AccumDschrgCurr_Test = ESMR_ac_DW.UnitDelay_DSTATE_f +
        ESMR_ac_DW.UnitDelay_DSTATE_ac;

    /* DataStoreWrite: '<S425>/Data Store Write1' */
    ESMR_ac_DW.DeESMC_I_AccumDisChrgCurr = VeESMR_I_AccumDschrgCurr_Test;

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CS_SOC_SetPt'
     */
    /* Lookup_n-D: '<S246>/Vector' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HVBatSOHLow'
     */
    VeESMR_Pct_CS_SOCSetPt_Test = look1_iflf_binlca_16a(tmpRead_4, ((const
        float32 *)&(KxESMR_Pct_SOHLow_CSSOC[0])), ((const float32 *)
        &(KtESMR_Pct_SOHLow_CSSOC[0])), 6U);

    /* Switch: '<S227>/Switch' incorporates:
     *  Constant: '<S243>/Calib'
     */
    if (KeESMR_b_IP_SOCSetPt_Ovrd)
    {
        /* Switch: '<S227>/Switch' incorporates:
         *  Constant: '<S240>/Calib'
         */
        VeESMR_Pct_IP_SOCSetPt = KeESMR_Pct_IP_SOCSetPt_Val;
    }

    /* End of Switch: '<S227>/Switch' */

    /* Switch: '<S227>/Switch1' incorporates:
     *  Constant: '<S245>/Calib'
     */
    if (KeESMR_b_LogisticsSOCSetPt_Ovrd)
    {
        /* Switch: '<S227>/Switch1' incorporates:
         *  Constant: '<S241>/Calib'
         */
        VeESMR_Pct_Logistics_SOCSetPt = KeESMR_Pct_LogisticsSOCSetPt_Val;
    }

    /* End of Switch: '<S227>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* Inport: '<Root>/VeBPCR_b_PwrLimON' */
    (void)Rte_Read_VeBPCR_b_PwrLimON_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/CS_SOC_SetPt'
     */
    /* Switch: '<S239>/Switch1' incorporates:
     *  Constant: '<S237>/Constant'
     *  Logic: '<S227>/Logical1'
     *  RelationalOperator: '<S227>/Comparison5'
     *  Switch: '<S239>/Switch2'
     *  Switch: '<S239>/Switch3'
     */
    if (tmpRead)
    {
        /* Sum: '<S227>/Sum1' incorporates:
         *  Constant: '<S242>/Calib'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = KeESMR_Pct_Max_CSSOC -
            VeESMR_Pct_CS_SOCSetPt_Test;

        /* Outputs for Atomic SubSystem: '<S227>/Protected Division' */
        /* Switch: '<S247>/Switch1' incorporates:
         *  Constant: '<S247>/Constant Value'
         *  RelationalOperator: '<S247>/Not Equal'
         */
        if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a != 0.0F)
        {
            /* Switch: '<S247>/Switch1' incorporates:
             *  Constant: '<S227>/Constant Value'
             *  Product: '<S247>/Division'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a /= 2.0F;
        }
        else
        {
            /* Switch: '<S247>/Switch1' incorporates:
             *  Constant: '<S247>/Constant Value4'
             *  Switch: '<S247>/Switch2'
             *  Switch: '<S247>/Switch3'
             */
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = 0.0F;
        }

        /* End of Switch: '<S247>/Switch1' */
        /* End of Outputs for SubSystem: '<S227>/Protected Division' */

        /* Switch: '<S239>/Switch1' incorporates:
         *  Constant: '<S227>/Constant Value1'
         *  MinMax: '<S227>/MinMax1'
         *  Sum: '<S227>/Sum'
         */
        VeESMR_Pct_CS_SOCSetPt_Test = fmaxf(0.0F,
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a) +
            VeESMR_Pct_CS_SOCSetPt_Test;
    }
    else if (!rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S227>/Switch4' incorporates:
         *  Constant: '<S244>/Calib'
         *  Inport: '<Root>/VePLTR_b_InPlantAllowCharge'
         *  Switch: '<S239>/Switch2'
         */
        if (KeESMR_b_InPlantSOCSetPt_Enbl)
        {
            (void)Rte_Read_VePLTR_b_InPlantAllowCharge_Value(&tmpRead_8);

            /* Switch: '<S227>/Switch3' incorporates:
             *  Inport: '<Root>/VePLTR_b_InPlantAllowCharge'
             */
            if (tmpRead_8)
            {
                /* Switch: '<S239>/Switch1' incorporates:
                 *  Switch: '<S227>/Switch4'
                 *  Switch: '<S239>/Switch2'
                 */
                VeESMR_Pct_CS_SOCSetPt_Test = VeESMR_Pct_IP_SOCSetPt;
            }
            else
            {
                /* Switch: '<S239>/Switch1' incorporates:
                 *  Switch: '<S227>/Switch4'
                 *  Switch: '<S239>/Switch2'
                 */
                VeESMR_Pct_CS_SOCSetPt_Test =
                    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a;
            }

            /* End of Switch: '<S227>/Switch3' */
        }
        else
        {
            /* Switch: '<S239>/Switch1' incorporates:
             *  Switch: '<S227>/Switch4'
             *  Switch: '<S239>/Switch2'
             */
            VeESMR_Pct_CS_SOCSetPt_Test = VeESMR_Pct_IP_SOCSetPt;
        }

        /* End of Switch: '<S227>/Switch4' */
    }
    else
    {
        if (((uint32)rtb_TmpSignalConversionAtVePLTR_e_Shippi) ==
                CePLTR_e_ShipingMode_SHIP_MD)
        {
            /* Switch: '<S239>/Switch4' incorporates:
             *  Constant: '<S238>/Constant'
             *  Inport: '<Root>/VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb'
             *  RelationalOperator: '<S227>/Comparison1'
             *  Switch: '<S239>/Switch2'
             *  Switch: '<S239>/Switch3'
             */
            if (((uint32)rtb_TmpSignalConversionAtVePLTR_e_Shippi) ==
                    CePLTR_e_ShipingMode_SHIP_MD)
            {
                (void)Rte_Read_VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb_Value
                    (&Switch8);

                /* Switch: '<S239>/Switch1' incorporates:
                 *  Inport: '<Root>/VeSTRR_Pct_SoftChkDeltaFromTgtSOCArb'
                 *  Sum: '<S227>/Sum2'
                 *  Switch: '<S239>/Switch2'
                 *  Switch: '<S239>/Switch4'
                 */
                VeESMR_Pct_CS_SOCSetPt_Test = VeESMR_Pct_Logistics_SOCSetPt -
                    Switch8;
            }

            /* End of Switch: '<S239>/Switch4' */
        }
    }

    /* End of Switch: '<S239>/Switch1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DPMI_Boost_Converter_Pwr_Lmt'
     */
    /* Outputs for Atomic SubSystem: '<S228>/Subsystem' */
#if Rte_SysCon_Variant_ESMR_BoostCnvrtrPwrLmt_Func

    /* Outputs for Atomic SubSystem: '<S248>/Boost_Converter_PwrLmt_Func' */
    /* Lookup_n-D: '<S283>/Vector' incorporates:
     *  Gain: '<S646>/Gain'
     */
    VeESMR_P_ST_ChrgPL_TempBased = look1_iflf_binlca_16a
        (VeESMI_T_PIM_A_CoolantTemp, ((const float32 *)
          &(KxESMR_P_BstCnvtr_ST_ChrgPL_TempBased[0])), ((const float32 *)
          &(KtESMR_P_BstCnvtr_ST_ChrgPL_TempBased[0])), 4U);

    /* Logic: '<S249>/Logical Operator1' incorporates:
     *  Logic: '<S249>/Logical Operator4'
     *  Switch: '<S255>/Switch1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !VeESMI_b_BstCnvtr_ST_Chrg_FA;

    /* Logic: '<S249>/Logical Operator2' incorporates:
     *  Logic: '<S249>/Logical Operator13'
     *  Logic: '<S249>/Logical Operator16'
     *  Logic: '<S249>/Logical Operator20'
     *  Logic: '<S249>/Logical Operator23'
     *  Logic: '<S249>/Logical Operator27'
     *  Logic: '<S249>/Logical Operator6'
     *  Logic: '<S249>/Logical Operator9'
     *  Switch: '<S255>/Switch1'
     *  Switch: '<S255>/Switch2'
     *  Switch: '<S256>/Switch1'
     *  Switch: '<S256>/Switch2'
     *  Switch: '<S257>/Switch1'
     *  Switch: '<S257>/Switch2'
     *  Switch: '<S258>/Switch1'
     *  Switch: '<S258>/Switch2'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !VeESMI_b_PIM_A_CoolantTemp_FA;

    /* Switch: '<S255>/Switch1' incorporates:
     *  Logic: '<S249>/Logical Operator'
     *  Logic: '<S249>/Logical Operator1'
     *  Logic: '<S249>/Logical Operator2'
     *  Logic: '<S249>/Logical Operator3'
     *  Logic: '<S249>/Logical Operator5'
     *  Switch: '<S255>/Switch2'
     *  Switch: '<S255>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
            rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  MinMax: '<S249>/MinMax'
         */
        VeESMR_P_BoostCnvrtr_ST_Chrg_1 = fmaxf(VeESMI_P_BstCnvtr_ST_Chrg,
            VeESMR_P_ST_ChrgPL_TempBased);
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
             (VeESMI_b_PIM_A_CoolantTemp_FA))
    {
        /* Switch: '<S255>/Switch2' incorporates:
         *  Switch: '<S255>/Switch1'
         */
        VeESMR_P_BoostCnvrtr_ST_Chrg_1 = VeESMI_P_BstCnvtr_ST_Chrg;
    }
    else if ((VeESMI_b_BstCnvtr_ST_Chrg_FA) &&
             rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S255>/Switch3' incorporates:
         *  Switch: '<S255>/Switch1'
         *  Switch: '<S255>/Switch2'
         */
        VeESMR_P_BoostCnvrtr_ST_Chrg_1 = VeESMR_P_ST_ChrgPL_TempBased;
    }
    else
    {
        /* Switch: '<S255>/Switch1' incorporates:
         *  Constant: '<S265>/Calib'
         *  Switch: '<S255>/Switch2'
         *  Switch: '<S255>/Switch3'
         */
        VeESMR_P_BoostCnvrtr_ST_Chrg_1 = KeESMR_P_BstCnvtr_STchrgPL_Default;
    }

    /* Outputs for Atomic SubSystem: '<S249>/Limiter1' */
    /* Switch: '<S285>/Switch1' incorporates:
     *  Constant: '<S267>/Calib'
     *  RelationalOperator: '<S285>/Relational Operator'
     */
    if (KeESMR_P_BstCnvtr_STchrgPL_MX < VeESMR_P_BoostCnvrtr_ST_Chrg_1)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = KeESMR_P_BstCnvtr_STchrgPL_MX;
    }
    else
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            VeESMR_P_BoostCnvrtr_ST_Chrg_1;
    }

    /* End of Switch: '<S285>/Switch1' */

    /* Switch: '<S285>/Switch' incorporates:
     *  Constant: '<S266>/Calib'
     *  RelationalOperator: '<S285>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_P_BstCnvtr_STchrgPL_MN)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = KeESMR_P_BstCnvtr_STchrgPL_MN;
    }

    /* End of Switch: '<S285>/Switch' */
    /* End of Outputs for SubSystem: '<S249>/Limiter1' */

    /* Outputs for Atomic SubSystem: '<S249>/GradientLimiter' */
    /* Sum: '<S251>/Sum2' incorporates:
     *  UnitDelay: '<S251>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a -= ESMR_ac_DW.UnitDelay_DSTATE_j;

    /* Outputs for Atomic SubSystem: '<S251>/Limiter' */
    /* Switch: '<S289>/Switch1' incorporates:
     *  Constant: '<S276>/Calib'
     *  RelationalOperator: '<S289>/Relational Operator'
     */
    if (KeESMR_dP_BstCnvtr_STchrgPL_Rise <
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_STchrgPL_Rise;
    }

    /* End of Switch: '<S289>/Switch1' */

    /* Switch: '<S289>/Switch' incorporates:
     *  Constant: '<S275>/Calib'
     *  RelationalOperator: '<S289>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_dP_BstCnvtr_STchrgPL_Fall)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_STchrgPL_Fall;
    }

    /* End of Switch: '<S289>/Switch' */
    /* End of Outputs for SubSystem: '<S251>/Limiter' */

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt' incorporates:
     *  Sum: '<S251>/Sum3'
     *  UnitDelay: '<S251>/Unit Delay'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_e =
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a + ESMR_ac_DW.UnitDelay_DSTATE_j;

    /* Update for UnitDelay: '<S251>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_j =
        ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_e;

    /* End of Outputs for SubSystem: '<S249>/GradientLimiter' */

    /* Lookup_n-D: '<S284>/Vector' incorporates:
     *  Gain: '<S646>/Gain'
     */
    VeESMR_P_ST_DsChrgPL_TempBased = look1_iflf_binlca_16a
        (VeESMI_T_PIM_A_CoolantTemp, ((const float32 *)
          &(KxESMR_P_BstCnvtr_ST_DsChrgPL_TempBased[0])), ((const float32 *)
          &(KtESMR_P_BstCnvtr_ST_DsChrgPL_TempBased[0])), 4U);

    /* Logic: '<S249>/Logical Operator8' incorporates:
     *  Logic: '<S249>/Logical Operator11'
     *  Switch: '<S256>/Switch1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !VeESMI_b_BstCnvtr_ST_DsChrg_FA;

    /* Switch: '<S256>/Switch1' incorporates:
     *  Logic: '<S249>/Logical Operator10'
     *  Logic: '<S249>/Logical Operator12'
     *  Logic: '<S249>/Logical Operator7'
     *  Logic: '<S249>/Logical Operator8'
     *  Switch: '<S256>/Switch2'
     *  Switch: '<S256>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
            rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S256>/Switch1' incorporates:
         *  MinMax: '<S249>/MinMax1'
         */
        VeESMR_P_BoostCnvrtr_ST_Dschrg_1 = fminf(VeESMI_P_BstCnvtr_ST_DsChrg,
            VeESMR_P_ST_DsChrgPL_TempBased);
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
             (VeESMI_b_PIM_A_CoolantTemp_FA))
    {
        /* Switch: '<S256>/Switch2' incorporates:
         *  Switch: '<S256>/Switch1'
         */
        VeESMR_P_BoostCnvrtr_ST_Dschrg_1 = VeESMI_P_BstCnvtr_ST_DsChrg;
    }
    else if ((VeESMI_b_BstCnvtr_ST_DsChrg_FA) &&
             rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S256>/Switch3' incorporates:
         *  Switch: '<S256>/Switch1'
         *  Switch: '<S256>/Switch2'
         */
        VeESMR_P_BoostCnvrtr_ST_Dschrg_1 = VeESMR_P_ST_DsChrgPL_TempBased;
    }
    else
    {
        /* Switch: '<S256>/Switch1' incorporates:
         *  Constant: '<S268>/Calib'
         *  Switch: '<S256>/Switch2'
         *  Switch: '<S256>/Switch3'
         */
        VeESMR_P_BoostCnvrtr_ST_Dschrg_1 = KeESMR_P_BstCnvtr_STdschrgPL_Default;
    }

    /* Outputs for Atomic SubSystem: '<S249>/Limiter2' */
    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S270>/Calib'
     *  RelationalOperator: '<S286>/Relational Operator'
     */
    if (KeESMR_P_BstCnvtr_STdschrgPL_MX < VeESMR_P_BoostCnvrtr_ST_Dschrg_1)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_P_BstCnvtr_STdschrgPL_MX;
    }
    else
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            VeESMR_P_BoostCnvrtr_ST_Dschrg_1;
    }

    /* End of Switch: '<S286>/Switch1' */

    /* Switch: '<S286>/Switch' incorporates:
     *  Constant: '<S269>/Calib'
     *  RelationalOperator: '<S286>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_P_BstCnvtr_STdschrgPL_MN)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_P_BstCnvtr_STdschrgPL_MN;
    }

    /* End of Switch: '<S286>/Switch' */
    /* End of Outputs for SubSystem: '<S249>/Limiter2' */

    /* Outputs for Atomic SubSystem: '<S249>/GradientLimiter1' */
    /* Sum: '<S252>/Sum2' incorporates:
     *  UnitDelay: '<S252>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a -= ESMR_ac_DW.UnitDelay_DSTATE_a;

    /* Outputs for Atomic SubSystem: '<S252>/Limiter' */
    /* Switch: '<S290>/Switch1' incorporates:
     *  Constant: '<S278>/Calib'
     *  RelationalOperator: '<S290>/Relational Operator'
     */
    if (KeESMR_dP_BstCnvtr_STdschrgPL_Rise <
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_STdschrgPL_Rise;
    }

    /* End of Switch: '<S290>/Switch1' */

    /* Switch: '<S290>/Switch' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S290>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_dP_BstCnvtr_STdschrgPL_Fall)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_STdschrgPL_Fall;
    }

    /* End of Switch: '<S290>/Switch' */
    /* End of Outputs for SubSystem: '<S252>/Limiter' */

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt' incorporates:
     *  Sum: '<S252>/Sum3'
     *  UnitDelay: '<S252>/Unit Delay'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_p =
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a + ESMR_ac_DW.UnitDelay_DSTATE_a;

    /* Update for UnitDelay: '<S252>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_a =
        ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_p;

    /* End of Outputs for SubSystem: '<S249>/GradientLimiter1' */

    /* Lookup_n-D: '<S281>/Vector' incorporates:
     *  Gain: '<S646>/Gain'
     */
    VeESMR_P_LT_ChrgPL_TempBased = look1_iflf_binlca_16a
        (VeESMI_T_PIM_A_CoolantTemp, ((const float32 *)
          &(KxESMR_P_BstCnvtr_LT_ChrgPL_TempBased[0])), ((const float32 *)
          &(KtESMR_P_BstCnvtr_LT_ChrgPL_TempBased[0])), 4U);

    /* Logic: '<S249>/Logical Operator15' incorporates:
     *  Logic: '<S249>/Logical Operator18'
     *  Switch: '<S257>/Switch1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !VeESMI_b_BstCnvtr_LT_Chrg_FA;

    /* Switch: '<S257>/Switch1' incorporates:
     *  Logic: '<S249>/Logical Operator14'
     *  Logic: '<S249>/Logical Operator15'
     *  Logic: '<S249>/Logical Operator17'
     *  Logic: '<S249>/Logical Operator19'
     *  Switch: '<S257>/Switch2'
     *  Switch: '<S257>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
            rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  MinMax: '<S249>/MinMax2'
         */
        VeESMR_P_BoostCnvrtr_LT_Chrg_1 = fmaxf(VeESMI_P_BstCnvtr_LT_Chrg,
            VeESMR_P_LT_ChrgPL_TempBased);
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
             (VeESMI_b_PIM_A_CoolantTemp_FA))
    {
        /* Switch: '<S257>/Switch2' incorporates:
         *  Switch: '<S257>/Switch1'
         */
        VeESMR_P_BoostCnvrtr_LT_Chrg_1 = VeESMI_P_BstCnvtr_LT_Chrg;
    }
    else if ((VeESMI_b_BstCnvtr_LT_Chrg_FA) &&
             rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S257>/Switch3' incorporates:
         *  Switch: '<S257>/Switch1'
         *  Switch: '<S257>/Switch2'
         */
        VeESMR_P_BoostCnvrtr_LT_Chrg_1 = VeESMR_P_LT_ChrgPL_TempBased;
    }
    else
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S259>/Calib'
         *  Switch: '<S257>/Switch2'
         *  Switch: '<S257>/Switch3'
         */
        VeESMR_P_BoostCnvrtr_LT_Chrg_1 = KeESMR_P_BstCnvtr_LTchrgPL_Default;
    }

    /* Switch: '<S249>/Switch14' incorporates:
     *  Logic: '<S249>/Logical Operator28'
     */
    if ((VeESMI_b_BstCnvtr_ST_Chrg_FA) && (VeESMI_b_PIM_A_CoolantTemp_FA))
    {
        /* Switch: '<S249>/Switch14' */
        VeESMR_P_BoostCnvrtr_LT_Chrg_2 = VeESMR_P_BoostCnvrtr_LT_Chrg_1;
    }
    else
    {
        /* Switch: '<S249>/Switch14' incorporates:
         *  Lookup_n-D: '<S279>/Vector'
         *  MinMax: '<S249>/MinMax4'
         *  Sum: '<S249>/Sum'
         *  VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt'
         */
        VeESMR_P_BoostCnvrtr_LT_Chrg_2 = fmaxf
            (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_e +
             look1_iflf_binlca_16a
             (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_e, ((const
                float32 *)&(KxESMR_P_BstCnvtr_LTST_ChrgPL_Delta[0])), ((const
                float32 *)&(KtESMR_P_BstCnvtr_LTST_ChrgPL_Delta[0])), 5U),
             VeESMR_P_BoostCnvrtr_LT_Chrg_1);
    }

    /* End of Switch: '<S249>/Switch14' */

    /* Outputs for Atomic SubSystem: '<S249>/Limiter3' */
    /* Switch: '<S287>/Switch1' incorporates:
     *  Constant: '<S261>/Calib'
     *  RelationalOperator: '<S287>/Relational Operator'
     */
    if (KeESMR_P_BstCnvtr_LTchrgPL_MX < VeESMR_P_BoostCnvrtr_LT_Chrg_2)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = KeESMR_P_BstCnvtr_LTchrgPL_MX;
    }
    else
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            VeESMR_P_BoostCnvrtr_LT_Chrg_2;
    }

    /* End of Switch: '<S287>/Switch1' */

    /* Switch: '<S287>/Switch' incorporates:
     *  Constant: '<S260>/Calib'
     *  RelationalOperator: '<S287>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_P_BstCnvtr_LTchrgPL_MN)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = KeESMR_P_BstCnvtr_LTchrgPL_MN;
    }

    /* End of Switch: '<S287>/Switch' */
    /* End of Outputs for SubSystem: '<S249>/Limiter3' */

    /* Outputs for Atomic SubSystem: '<S249>/GradientLimiter2' */
    /* Sum: '<S253>/Sum2' incorporates:
     *  UnitDelay: '<S253>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a -= ESMR_ac_DW.UnitDelay_DSTATE_o;

    /* Outputs for Atomic SubSystem: '<S253>/Limiter' */
    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S272>/Calib'
     *  RelationalOperator: '<S291>/Relational Operator'
     */
    if (KeESMR_dP_BstCnvtr_LTchrgPL_Rise <
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_LTchrgPL_Rise;
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Switch: '<S291>/Switch' incorporates:
     *  Constant: '<S271>/Calib'
     *  RelationalOperator: '<S291>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_dP_BstCnvtr_LTchrgPL_Fall)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_LTchrgPL_Fall;
    }

    /* End of Switch: '<S291>/Switch' */
    /* End of Outputs for SubSystem: '<S253>/Limiter' */

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt' incorporates:
     *  Sum: '<S253>/Sum3'
     *  UnitDelay: '<S253>/Unit Delay'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCnvr =
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a + ESMR_ac_DW.UnitDelay_DSTATE_o;

    /* Update for UnitDelay: '<S253>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE_o =
        ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCnvr;

    /* End of Outputs for SubSystem: '<S249>/GradientLimiter2' */

    /* Lookup_n-D: '<S282>/Vector' incorporates:
     *  Gain: '<S646>/Gain'
     */
    VeESMR_P_LT_DsChrgPL_TempBased = look1_iflf_binlca_16a
        (VeESMI_T_PIM_A_CoolantTemp, ((const float32 *)
          &(KxESMR_P_BstCnvtr_LT_DsChrgPL_TempBased[0])), ((const float32 *)
          &(KtESMR_P_BstCnvtr_LT_DsChrgPL_TempBased[0])), 4U);

    /* Logic: '<S249>/Logical Operator22' incorporates:
     *  Logic: '<S249>/Logical Operator25'
     *  Switch: '<S258>/Switch1'
     */
    rtb_TmpSignalConversionAtVeBPCR_b_CmdBat = !VeESMI_b_BstCnvtr_LT_DsChrg_FA;

    /* Switch: '<S258>/Switch1' incorporates:
     *  Logic: '<S249>/Logical Operator21'
     *  Logic: '<S249>/Logical Operator22'
     *  Logic: '<S249>/Logical Operator24'
     *  Logic: '<S249>/Logical Operator26'
     *  Switch: '<S258>/Switch2'
     *  Switch: '<S258>/Switch3'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
            rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  MinMax: '<S249>/MinMax3'
         */
        VeESMR_P_BoostCnvrtr_LT_Dschrg_1 = fminf(VeESMI_P_BstCnvtr_LT_DsChrg,
            VeESMR_P_LT_DsChrgPL_TempBased);
    }
    else if (rtb_TmpSignalConversionAtVeBPCR_b_CmdBat &&
             (VeESMI_b_PIM_A_CoolantTemp_FA))
    {
        /* Switch: '<S258>/Switch2' incorporates:
         *  Switch: '<S258>/Switch1'
         */
        VeESMR_P_BoostCnvrtr_LT_Dschrg_1 = VeESMI_P_BstCnvtr_LT_DsChrg;
    }
    else if ((VeESMI_b_BstCnvtr_LT_DsChrg_FA) &&
             rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        /* Switch: '<S258>/Switch3' incorporates:
         *  Switch: '<S258>/Switch1'
         *  Switch: '<S258>/Switch2'
         */
        VeESMR_P_BoostCnvrtr_LT_Dschrg_1 = VeESMR_P_LT_DsChrgPL_TempBased;
    }
    else
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S262>/Calib'
         *  Switch: '<S258>/Switch2'
         *  Switch: '<S258>/Switch3'
         */
        VeESMR_P_BoostCnvrtr_LT_Dschrg_1 = KeESMR_P_BstCnvtr_LTdschrgPL_Default;
    }

    /* Switch: '<S249>/Switch1' incorporates:
     *  Logic: '<S249>/Logical Operator29'
     */
    if ((VeESMI_b_BstCnvtr_ST_DsChrg_FA) && (VeESMI_b_PIM_A_CoolantTemp_FA))
    {
        /* Switch: '<S249>/Switch1' */
        VeESMR_P_BoostCnvrtr_LT_Dschrg_2 = VeESMR_P_BoostCnvrtr_LT_Dschrg_1;
    }
    else
    {
        /* Switch: '<S249>/Switch1' incorporates:
         *  Lookup_n-D: '<S280>/Vector'
         *  MinMax: '<S249>/MinMax5'
         *  Sum: '<S249>/Sum1'
         *  VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt'
         */
        VeESMR_P_BoostCnvrtr_LT_Dschrg_2 = fminf
            (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_p -
             look1_iflf_binlca_16a
             (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_p, ((const
                float32 *)&(KxESMR_P_BstCnvtr_LTST_DsChrgPL_Delta[0])), ((const
                float32 *)&(KtESMR_P_BstCnvtr_LTST_DsChrgPL_Delta[0])), 5U),
             VeESMR_P_BoostCnvrtr_LT_Dschrg_1);
    }

    /* End of Switch: '<S249>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S249>/Limiter4' */
    /* Switch: '<S288>/Switch1' incorporates:
     *  Constant: '<S264>/Calib'
     *  RelationalOperator: '<S288>/Relational Operator'
     */
    if (KeESMR_P_BstCnvtr_LTdschrgPL_MX < VeESMR_P_BoostCnvrtr_LT_Dschrg_2)
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_P_BstCnvtr_LTdschrgPL_MX;
    }
    else
    {
        /* UnitDelay: '<S254>/Unit Delay' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            VeESMR_P_BoostCnvrtr_LT_Dschrg_2;
    }

    /* End of Switch: '<S288>/Switch1' */

    /* Switch: '<S288>/Switch' incorporates:
     *  Constant: '<S263>/Calib'
     *  RelationalOperator: '<S288>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_P_BstCnvtr_LTdschrgPL_MN)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_P_BstCnvtr_LTdschrgPL_MN;
    }

    /* End of Switch: '<S288>/Switch' */
    /* End of Outputs for SubSystem: '<S249>/Limiter4' */

    /* Outputs for Atomic SubSystem: '<S249>/GradientLimiter3' */
    /* Sum: '<S254>/Sum2' incorporates:
     *  UnitDelay: '<S254>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a -= ESMR_ac_DW.UnitDelay_DSTATE;

    /* Outputs for Atomic SubSystem: '<S254>/Limiter' */
    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S274>/Calib'
     *  RelationalOperator: '<S292>/Relational Operator'
     */
    if (KeESMR_dP_BstCnvtr_LTdschrgPL_Rise <
            rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a)
    {
        /* Switch: '<S292>/Switch1' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_LTdschrgPL_Rise;
    }

    /* End of Switch: '<S292>/Switch1' */

    /* Switch: '<S292>/Switch' incorporates:
     *  Constant: '<S273>/Calib'
     *  RelationalOperator: '<S292>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a <=
            KeESMR_dP_BstCnvtr_LTdschrgPL_Fall)
    {
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_dP_BstCnvtr_LTdschrgPL_Fall;
    }

    /* End of Switch: '<S292>/Switch' */
    /* End of Outputs for SubSystem: '<S254>/Limiter' */

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  Sum: '<S254>/Sum3'
     *  UnitDelay: '<S254>/Unit Delay'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_b =
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a + ESMR_ac_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S254>/Unit Delay' */
    ESMR_ac_DW.UnitDelay_DSTATE =
        ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_b;

    /* End of Outputs for SubSystem: '<S249>/GradientLimiter3' */
    /* End of Outputs for SubSystem: '<S248>/Boost_Converter_PwrLmt_Func' */
    /* End of Outputs for SubSystem: '<S228>/Subsystem' */
#else

    /* Outputs for Atomic SubSystem: '<S248>/Boost_Converter_PwrLmt_No_Func' */
    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt' incorporates:
     *  Constant: '<S295>/Calib'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_e =
        KeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_NF;

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt' incorporates:
     *  Constant: '<S296>/Calib'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_p =
        KeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_NF;

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt' incorporates:
     *  Constant: '<S293>/Calib'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCnvr =
        KeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_NF;

    /* VariantMerge generated from: '<S248>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  Constant: '<S294>/Calib'
     */
    ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_b =
        KeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_NF;

    /* End of Outputs for SubSystem: '<S248>/Boost_Converter_PwrLmt_No_Func' */
#endif

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_ESMC_Outputs'
     */
    /* Outputs for Atomic SubSystem: '<S236>/EdgeRising' */
    /* Logic: '<S724>/OR1' incorporates:
     *  UnitDelay: '<S724>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !ESMR_ac_DW.UnitDelay_DSTATE_ag;

    /* Update for UnitDelay: '<S724>/Unit Delay' incorporates:
     *  Constant: '<S236>/TRUE Constant'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_ag = true;

    /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled' */
    /* Switch: '<S720>/Switch1' incorporates:
     *  Constant: '<S720>/Constant Value'
     *  Constant: '<S728>/Calib'
     *  Logic: '<S724>/AND'
     *  RelationalOperator: '<S720>/Greater  Than'
     *  Switch: '<S720>/Switch2'
     *  UnitDelay: '<S720>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_ba = KeESMR_Cnt_HVBatPL_InitDelay;
    }
    else
    {
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_ba) > 0)
        {
            /* UnitDelay: '<S720>/Unit Delay' incorporates:
             *  Constant: '<S720>/Constant Value1'
             *  Sum: '<S720>/Subtraction'
             *  Switch: '<S720>/Switch2'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_ba = (uint16)((sint32)(((sint32)
                ESMR_ac_DW.UnitDelay_DSTATE_ba) - 1));
        }
    }

    /* End of Switch: '<S720>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled' */
    /* End of Outputs for SubSystem: '<S236>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S236>/EdgeRising1' */
    /* Logic: '<S725>/OR1' incorporates:
     *  UnitDelay: '<S725>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !ESMR_ac_DW.UnitDelay_DSTATE_ko;

    /* Update for UnitDelay: '<S725>/Unit Delay' incorporates:
     *  Constant: '<S236>/TRUE Constant1'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_ko = true;

    /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled1' */
    /* Switch: '<S721>/Switch1' incorporates:
     *  Constant: '<S721>/Constant Value'
     *  Constant: '<S728>/Calib'
     *  Logic: '<S725>/AND'
     *  RelationalOperator: '<S721>/Greater  Than'
     *  Switch: '<S721>/Switch2'
     *  UnitDelay: '<S721>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_kh = KeESMR_Cnt_HVBatPL_InitDelay;
    }
    else
    {
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_kh) > 0)
        {
            /* UnitDelay: '<S721>/Unit Delay' incorporates:
             *  Constant: '<S721>/Constant Value1'
             *  Sum: '<S721>/Subtraction'
             *  Switch: '<S721>/Switch2'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_kh = (uint16)((sint32)(((sint32)
                ESMR_ac_DW.UnitDelay_DSTATE_kh) - 1));
        }
    }

    /* End of Switch: '<S721>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled1' */
    /* End of Outputs for SubSystem: '<S236>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S236>/EdgeRising2' */
    /* Logic: '<S726>/OR1' incorporates:
     *  UnitDelay: '<S726>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !ESMR_ac_DW.UnitDelay_DSTATE_j2;

    /* Update for UnitDelay: '<S726>/Unit Delay' incorporates:
     *  Constant: '<S236>/TRUE Constant2'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_j2 = true;

    /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled2' */
    /* Switch: '<S722>/Switch1' incorporates:
     *  Constant: '<S722>/Constant Value'
     *  Constant: '<S728>/Calib'
     *  Logic: '<S726>/AND'
     *  RelationalOperator: '<S722>/Greater  Than'
     *  Switch: '<S722>/Switch2'
     *  UnitDelay: '<S722>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_jn = KeESMR_Cnt_HVBatPL_InitDelay;
    }
    else
    {
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_jn) > 0)
        {
            /* UnitDelay: '<S722>/Unit Delay' incorporates:
             *  Constant: '<S722>/Constant Value1'
             *  Sum: '<S722>/Subtraction'
             *  Switch: '<S722>/Switch2'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_jn = (uint16)((sint32)(((sint32)
                ESMR_ac_DW.UnitDelay_DSTATE_jn) - 1));
        }
    }

    /* End of Switch: '<S722>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled2' */
    /* End of Outputs for SubSystem: '<S236>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S236>/EdgeRising3' */
    /* Logic: '<S727>/OR1' incorporates:
     *  UnitDelay: '<S727>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVePLTR_b_InFiel = !ESMR_ac_DW.UnitDelay_DSTATE_c0;

    /* Update for UnitDelay: '<S727>/Unit Delay' incorporates:
     *  Constant: '<S236>/TRUE Constant3'
     */
    ESMR_ac_DW.UnitDelay_DSTATE_c0 = true;

    /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled3' */
    /* Switch: '<S723>/Switch1' incorporates:
     *  Constant: '<S723>/Constant Value'
     *  Constant: '<S728>/Calib'
     *  Logic: '<S727>/AND'
     *  RelationalOperator: '<S723>/Greater  Than'
     *  Switch: '<S723>/Switch2'
     *  UnitDelay: '<S723>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtVePLTR_b_InFiel)
    {
        ESMR_ac_DW.UnitDelay_DSTATE_k = KeESMR_Cnt_HVBatPL_InitDelay;
    }
    else
    {
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_k) > 0)
        {
            /* UnitDelay: '<S723>/Unit Delay' incorporates:
             *  Constant: '<S723>/Constant Value1'
             *  Sum: '<S723>/Subtraction'
             *  Switch: '<S723>/Switch2'
             */
            ESMR_ac_DW.UnitDelay_DSTATE_k = (uint16)((sint32)(((sint32)
                ESMR_ac_DW.UnitDelay_DSTATE_k) - 1));
        }
    }

    /* End of Switch: '<S723>/Switch1' */
    /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled3' */
    /* End of Outputs for SubSystem: '<S236>/EdgeRising3' */

    /* Switch: '<S236>/Switch7' incorporates:
     *  Constant: '<S734>/Calib'
     */
    if (KeESMR_b_BE_MaxDschrgLim_DevCalMode)
    {
        /* Switch: '<S236>/Switch7' incorporates:
         *  Constant: '<S732>/Calib'
         */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a =
            KeESMR_P_BatST_FinalMaxDschrgLim;
    }
    else
    {
        /* Switch: '<S236>/Switch7' */
        rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a = VeESMR_P_BatEstdVoltMaxLim1;
    }

    /* End of Switch: '<S236>/Switch7' */

    /* Switch: '<S236>/Switch8' incorporates:
     *  Constant: '<S735>/Calib'
     */
    if (KeESMR_b_BE_MinChrgLim_DevCalMode)
    {
        /* Switch: '<S236>/Switch8' incorporates:
         *  Constant: '<S729>/Calib'
         */
        Switch8 = KeESMR_P_BatBE_FinalMinChrgLim;
    }
    else
    {
        /* Switch: '<S236>/Switch8' */
        Switch8 = VeESMR_P_BatEstdVoltMinLim1;
    }

    /* End of Switch: '<S236>/Switch8' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeESMR_Pct_IP_SOCSetPt' incorporates:
     *  SignalConversion generated from: '<S2>/IP_SOCSetPt'
     */
    (void)Rte_Write_VeESMR_Pct_IP_SOCSetPt_Value(VeESMR_Pct_IP_SOCSetPt);

    /* Outport: '<Root>/VeESMR_Pct_Logistics_SOCSetPt' incorporates:
     *  SignalConversion generated from: '<S2>/LogisticSOCSetPt'
     */
    (void)Rte_Write_VeESMR_Pct_Logistics_SOCSetPt_Value
        (VeESMR_Pct_Logistics_SOCSetPt);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_ESMC_Outputs'
     */
    /* Outport: '<Root>/VeESMR_I_AccumChrgCurr' incorporates:
     *  Gain: '<S744>/Gain'
     *  SignalConversion generated from: '<S2>/Proc_ESMC_Outputs__VeESMR_I_AccumChrgCurr'
     */
    (void)Rte_Write_VeESMR_I_AccumChrgCurr_Value(VeESMR_I_AccumChrgCurr_Test);

    /* Outport: '<Root>/VeESMR_I_AccumDschrgCurr' incorporates:
     *  Gain: '<S743>/Gain'
     *  SignalConversion generated from: '<S2>/Proc_ESMC_Outputs__VeESMR_I_AccumDschrgCurr'
     */
    (void)Rte_Write_VeESMR_I_AccumDschrgCurr_Value(VeESMR_I_AccumDschrgCurr_Test);

    /* Outport: '<Root>/VeESMR_Pct_CS_SOCSetPt' incorporates:
     *  Gain: '<S747>/Gain'
     *  SignalConversion generated from: '<S2>/Proc_ESMC_Outputs__VeESMR_Pct_CS_SOCSetPt'
     */
    (void)Rte_Write_VeESMR_Pct_CS_SOCSetPt_Value(VeESMR_Pct_CS_SOCSetPt_Test);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeESMR_P_BatEstdVoltMaxLim' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BatEstdVoltMaxLim'
     */
    (void)Rte_Write_VeESMR_P_BatEstdVoltMaxLim_Value
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* Outport: '<Root>/VeESMR_P_BatEstdVoltMinLim' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BatEstdVoltMinLim'
     */
    (void)Rte_Write_VeESMR_P_BatEstdVoltMinLim_Value(Switch8);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_ESMC_Outputs'
     */
    /* Switch: '<S236>/Switch6' incorporates:
     *  Constant: '<S723>/Constant Value2'
     *  Constant: '<S738>/Calib'
     *  RelationalOperator: '<S723>/Greater  Than1'
     *  Switch: '<S236>/Switch9'
     *  UnitDelay: '<S723>/Unit Delay'
     */
    if (KeESMR_b_ST_MaxDschrgLim_DevCalMode)
    {
        /* Outport: '<Root>/VeESMR_P_BatSTMaxLim' incorporates:
         *  Constant: '<S732>/Calib'
         *  SignalConversion generated from: '<S2>/VeESMR_P_BatSTMaxLim'
         */
        (void)Rte_Write_VeESMR_P_BatSTMaxLim_Value
            (KeESMR_P_BatST_FinalMaxDschrgLim);
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled3' */
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_k) > 0)
        {
            /* Outport: '<Root>/VeESMR_P_BatSTMaxLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BatSTMaxLim'
             *  Switch: '<S236>/Switch9'
             */
            (void)Rte_Write_VeESMR_P_BatSTMaxLim_Value
                (rtb_TmpSignalConversionAtPwrOn__BatST_Ma);
        }
        else
        {
            /* Outport: '<Root>/VeESMR_P_BatSTMaxLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BatSTMaxLim'
             *  Switch: '<S236>/Switch9'
             */
            (void)Rte_Write_VeESMR_P_BatSTMaxLim_Value
                (rtb_TmpSignalConversionAtMedTEB__VeESM_l);
        }

        /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled3' */
    }

    /* End of Switch: '<S236>/Switch6' */

    /* Switch: '<S236>/Switch5' incorporates:
     *  Constant: '<S722>/Constant Value2'
     *  Constant: '<S739>/Calib'
     *  RelationalOperator: '<S722>/Greater  Than1'
     *  Switch: '<S236>/Switch3'
     *  UnitDelay: '<S722>/Unit Delay'
     */
    if (KeESMR_b_ST_MinChrgLim_DevCalMode)
    {
        /* Outport: '<Root>/VeESMR_P_BatSTMinLim' incorporates:
         *  Constant: '<S733>/Calib'
         *  SignalConversion generated from: '<S2>/VeESMR_P_BatSTMinLim'
         */
        (void)Rte_Write_VeESMR_P_BatSTMinLim_Value
            (KeESMR_P_BatST_FinalMinChrgLim);
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled2' */
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_jn) > 0)
        {
            /* Outport: '<Root>/VeESMR_P_BatSTMinLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BatSTMinLim'
             *  Switch: '<S236>/Switch3'
             */
            (void)Rte_Write_VeESMR_P_BatSTMinLim_Value
                (rtb_TmpSignalConversionAtPwrOn__BatST_Mi);
        }
        else
        {
            /* Outport: '<Root>/VeESMR_P_BatSTMinLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BatSTMinLim'
             *  Switch: '<S236>/Switch3'
             */
            (void)Rte_Write_VeESMR_P_BatSTMinLim_Value
                (rtb_TmpSignalConversionAtMedTEB__VeESM_b);
        }

        /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled2' */
    }

    /* End of Switch: '<S236>/Switch5' */

    /* Switch: '<S236>/Switch4' incorporates:
     *  Constant: '<S720>/Constant Value2'
     *  Constant: '<S736>/Calib'
     *  RelationalOperator: '<S720>/Greater  Than1'
     *  Switch: '<S236>/Switch1'
     *  UnitDelay: '<S720>/Unit Delay'
     */
    if (KeESMR_b_LT_MaxDschrgLim_DevCalMode)
    {
        /* Outport: '<Root>/VeESMR_P_BattLTMaxLim' incorporates:
         *  Constant: '<S730>/Calib'
         *  SignalConversion generated from: '<S2>/VeESMR_P_BattLTMaxLim'
         */
        (void)Rte_Write_VeESMR_P_BattLTMaxLim_Value
            (KeESMR_P_BatLT_FinalMaxDschrgLim);
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled' */
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_ba) > 0)
        {
            /* Outport: '<Root>/VeESMR_P_BattLTMaxLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BattLTMaxLim'
             *  Switch: '<S236>/Switch1'
             */
            (void)Rte_Write_VeESMR_P_BattLTMaxLim_Value
                (rtb_TmpSignalConversionAtPwrOn__BatLT_Ma);
        }
        else
        {
            /* Outport: '<Root>/VeESMR_P_BattLTMaxLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BattLTMaxLim'
             *  Switch: '<S236>/Switch1'
             */
            (void)Rte_Write_VeESMR_P_BattLTMaxLim_Value
                (rtb_TmpSignalConversionAtMedTEB__VeESM_o);
        }

        /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled' */
    }

    /* End of Switch: '<S236>/Switch4' */

    /* Switch: '<S236>/Switch11' incorporates:
     *  Constant: '<S721>/Constant Value2'
     *  Constant: '<S737>/Calib'
     *  RelationalOperator: '<S721>/Greater  Than1'
     *  Switch: '<S236>/Switch2'
     *  UnitDelay: '<S721>/Unit Delay'
     */
    if (KeESMR_b_LT_MinChrgLim_DevCalMode)
    {
        /* Outport: '<Root>/VeESMR_P_BattLTMinLim' incorporates:
         *  Constant: '<S731>/Calib'
         *  SignalConversion generated from: '<S2>/VeESMR_P_BattLTMinLim'
         */
        (void)Rte_Write_VeESMR_P_BattLTMinLim_Value
            (KeESMR_P_BatLT_FinalMinChrgLim);
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S236>/Count Down  Reset Enabled1' */
        if (((sint32)ESMR_ac_DW.UnitDelay_DSTATE_kh) > 0)
        {
            /* Outport: '<Root>/VeESMR_P_BattLTMinLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BattLTMinLim'
             *  Switch: '<S236>/Switch2'
             */
            (void)Rte_Write_VeESMR_P_BattLTMinLim_Value
                (rtb_TmpSignalConversionAtPwrOn__BatLT_Mi);
        }
        else
        {
            /* Outport: '<Root>/VeESMR_P_BattLTMinLim' incorporates:
             *  SignalConversion generated from: '<S2>/VeESMR_P_BattLTMinLim'
             *  Switch: '<S236>/Switch2'
             */
            (void)Rte_Write_VeESMR_P_BattLTMinLim_Value
                (rtb_TmpSignalConversionAtMedTEB__VeESMR_);
        }

        /* End of Outputs for SubSystem: '<S236>/Count Down  Reset Enabled1' */
    }

    /* End of Switch: '<S236>/Switch11' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Value
        (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCnvr);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Value
        (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_b);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Value
        (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_e);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Value
        (ESMR_ac_B.VariantMergeForOutportVeESMR_P_BoostCn_p);

    /* Outport: '<Root>/VeESMR_P_EVCU_PwrAvailForFCPS' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_EVCU_PwrAvailForFCPS'
     */
    (void)Rte_Write_VeESMR_P_EVCU_PwrAvailForFCPS_Value
        (ESMR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Proc_ESMC_Outputs'
     */
    /* Outport: '<Root>/VeESMR_U_MaxBatPackVolt' incorporates:
     *  Gain: '<S741>/Gain'
     *  SignalConversion generated from: '<S2>/VeESMR_U_MaxBatPackVolt'
     */
    (void)Rte_Write_VeESMR_U_MaxBatPackVolt_Value
        (rtb_TmpSignalConversionAtPwrOn__VeESMR_U);

    /* Outport: '<Root>/VeESMR_U_MinBatPackVolt' incorporates:
     *  Gain: '<S740>/Gain'
     *  SignalConversion generated from: '<S2>/VeESMR_U_MinBatPackVolt'
     */
    (void)Rte_Write_VeESMR_U_MinBatPackVolt_Value
        (rtb_TmpSignalConversionAtPwrOn__VeESMR_h);

    /* Outport: '<Root>/VeESMR_b_SOCAcc' incorporates:
     *  Gain: '<S745>/Gain'
     *  SignalConversion generated from: '<S2>/VeESMR_b_SOCAcc'
     */
    (void)Rte_Write_VeESMR_b_SOCAcc_Value
        (rtb_TmpSignalConversionAtPwrOn__VeESMR_b);

    /* Outport: '<Root>/VeESMR_b_SOCAcc_ChargeFirst' incorporates:
     *  Gain: '<S746>/Gain'
     *  SignalConversion generated from: '<S2>/VeESMR_b_SOCAcc_ChargeFirst'
     */
    (void)Rte_Write_VeESMR_b_SOCAcc_ChargeFirst_Value
        (rtb_TmpSignalConversionAtPwrOn__VeESMR_f);

    /* Outport: '<Root>/VeESMR_k_BatModNo' incorporates:
     *  Gain: '<S742>/Gain'
     *  SignalConversion generated from: '<S2>/VeESMR_k_BatModNo'
     */
    (void)Rte_Write_VeESMR_k_BatModNo_Value
        (rtb_TmpSignalConversionAtPwrOn__VeESMR_k);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S2>/AhrperhrNorm_write'
     * */
    Rte_IrvWrite_ESMR_MedTEH_AhrperhrNorm_write_IRV(ESMR_ac_B.Sum);

    /* SignalConversion generated from: '<S2>/HybAlternatorMd' */
    Rte_IrvWrite_ESMR_MedTEH_HybAlternatorMd_IRV
        (ESMR_ac_B.VeESMR_b_HybAlternatorMd);

    /* SignalConversion generated from: '<S2>/VeESMC_P_ChrgPwrLimST_RL' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMC_P_ChrgPwrLimST_RL_IRV
        (VeESMR_P_ArbChrgPwrLimST_Ovrd);

    /* SignalConversion generated from: '<S2>/VeESMC_e_ChrgPwrLimST_ID_A' incorporates:
     *  Merge: '<S314>/Merge1'
     */
    Rte_IrvWrite_ESMR_MedTEH_VeESMC_e_ChrgPwrLimST_ID_A_IRV
        (VeESMR_e_ChrgPwrLimST_ID_A_Ovrd);

    /* SignalConversion generated from: '<S2>/VeESMC_e_DschrgPwrLimST_ID_A' incorporates:
     *  Switch: '<S388>/Switch1'
     */
    Rte_IrvWrite_ESMR_MedTEH_VeESMC_e_DschrgPwrLimST_ID_A_IRV
        (VeESMR_e_DschrgPwrLim_ID_B_ST);

    /* SignalConversion generated from: '<S2>/VeESMN_e_EngStartStopSt' incorporates:
     *  Switch: '<S640>/Switch19'
     */
    Rte_IrvWrite_ESMR_MedTEH_VeESMN_e_EngStartStopSt_IRV(VeESMN_e_EngStartStopSt);

    /* SignalConversion generated from: '<S2>/VeESMN_e_HVBatCntctrStat' incorporates:
     *  Switch: '<S640>/Switch17'
     */
    Rte_IrvWrite_ESMR_MedTEH_VeESMN_e_HVBatCntctrStat_IRV
        (VeESMN_e_HVBatCntctrStat);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BatEstdVoltMaxLim_write'
     * */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_BatEstdVoltMaxLim_write_IRV
        (rtb_TmpSignalConversionAtVeBPCR_Pct_HV_a);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S2>/VeESMR_P_BatEstdVoltMinLim_write'
     * */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_BatEstdVoltMinLim_write_IRV(Switch8);

    /* SignalConversion generated from: '<S2>/VeESMR_P_FCPS_Gen_Pwr' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_FCPS_Gen_Pwr_IRV
        (ESMR_ac_B.VeESMR_P_FCPS_Gen_Pwr);

    /* SignalConversion generated from: '<S2>/VeESMR_P_Total_LT_Chrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_Total_LT_Chrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch_c);

    /* SignalConversion generated from: '<S2>/VeESMR_P_Total_LT_DsChrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_Total_LT_DsChrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch_k);

    /* SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL' */
#if Rte_SysCon_Variant_ESMR_FCPS_NoFunc

    /* SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_Total_ST_Chrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch_g);

#endif

    /* End of SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL' */

    /* SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_DsChrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_P_Total_ST_DsChrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch);

    /* SignalConversion generated from: '<S2>/VeESMR_U_FCPS_LowerVoltLIM' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_U_FCPS_LowerVoltLIM_IRV
        (ESMR_ac_B.VeESMR_U_FCPS_LowerVoltLIM);

    /* SignalConversion generated from: '<S2>/VeESMR_U_FCPS_UpperVoltLIM' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_U_FCPS_UpperVoltLIM_IRV
        (ESMR_ac_B.VeESMR_U_FCPS_UpperVoltLIM);

    /* SignalConversion generated from: '<S2>/VeESMR_U_FCPS_Volt' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_U_FCPS_Volt_IRV(ESMR_ac_B.VeESMR_U_FCPS_Volt);

    /* SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Lower_Voltage_LIM_FA' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_b_FCPS_Lower_Voltage_LIM_FA_IRV
        (ESMR_ac_B.VeESMR_b_FCPS_Lower_Voltage_LIM_FA);

    /* SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Upper_Voltage_LIM_FA' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_b_FCPS_Upper_Voltage_LIM_FA_IRV
        (ESMR_ac_B.VeESMR_b_FCPS_Upper_Voltage_LIM_FA);

    /* SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Volt_FA' */
    Rte_IrvWrite_ESMR_MedTEH_VeESMR_b_FCPS_Volt_FA_IRV
        (ESMR_ac_B.VeESMR_b_FCPS_Volt_FA);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
}

/* Output function */
FUNC(void, ESMR_CODE) ESMR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/ESMR_PwrOff'
     */
    /* Outport: '<Root>/DeESMR_P_HV_BatDschrgPwrLTArb_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMR_P_HV_BatDschrgPwrLTArb'
     */
    (void)Rte_Write_DeESMR_P_HV_BatDschrgPwrLTArb_DeESMR_P_HV_BatDschrgPwrLTArb
        (ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb);

    /* Outport: '<Root>/DeESMR_P_HV_BatChrgPwrLTArb_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMR_P_HV_BatChrgPwrLTArb'
     */
    (void)Rte_Write_DeESMR_P_HV_BatChrgPwrLTArb_DeESMR_P_HV_BatChrgPwrLTArb
        (ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb);

    /* Outport: '<Root>/DeESMR_P_HV_BatChrgPwrSTArb_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMR_P_HV_BatChrgPwrSTArb'
     */
    (void)Rte_Write_DeESMR_P_HV_BatChrgPwrSTArb_DeESMR_P_HV_BatChrgPwrSTArb
        (ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrSTArb);

    /* Outport: '<Root>/DeESMR_P_HV_BatDschrgPwrSTArb_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMR_P_HV_BatDschrgPwrSTArb'
     */
    (void)Rte_Write_DeESMR_P_HV_BatDschrgPwrSTArb_DeESMR_P_HV_BatDschrgPwrSTArb
        (ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrSTArb);

    /* Outport: '<Root>/DeESMC_I_AccumChrgCurr_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMC_I_AccumChrgCurr'
     */
    (void)Rte_Write_DeESMC_I_AccumChrgCurr_DeESMC_I_AccumChrgCurr
        (ESMR_ac_DW.DeESMC_I_AccumChrgCurr);

    /* Outport: '<Root>/DeESMC_I_AccumDisChrgCurr_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMC_I_AccumDisChrgCurr'
     */
    (void)Rte_Write_DeESMC_I_AccumDisChrgCurr_DeESMC_I_AccumDisChrgCurr
        (ESMR_ac_DW.DeESMC_I_AccumDisChrgCurr);

    /* Outport: '<Root>/DeESMC_P_AccumChrgEnergy_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMC_P_AccumChrgEnergy'
     */
    (void)Rte_Write_DeESMC_P_AccumChrgEnergy_DeESMC_P_AccumChrgEnergy
        (ESMR_ac_DW.DeESMC_P_AccumChrgEnergy);

    /* Outport: '<Root>/DeESMC_P_AccumDisChgEnergy_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/DeESMC_P_AccumDisChgEnergy'
     */
    (void)Rte_Write_DeESMC_P_AccumDisChgEnergy_DeESMC_P_AccumDisChgEnergy
        (ESMR_ac_DW.DeESMC_P_AccumDisChgEnergy);

    /* Outport: '<Root>/NeESMC_I_Ahrperhr_DS_PM_Out' incorporates:
     *  DataStoreRead: '<S3>/NeESMC_I_Ahrperhr_DS'
     */
    (void)Rte_Write_NeESMC_I_Ahrperhr_DS_NeESMC_I_Ahrperhr_DS
        (ESMR_ac_DW.NeESMC_I_Ahrperhr_DS);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, ESMR_CODE) ESMR_PwrOn(void)
{
    float32 rtb_TmpSignalConversionAtDeESMR_P_HV_B_g;
    float32 rtb_TmpSignalConversionAtDeESMR_P_HV_B_h;
    float32 rtb_TmpSignalConversionAtDeESMR_P_HV_B_k;
    float32 rtb_TmpSignalConversionAtDeESMR_P_HV_Bat;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ESMR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* DataStoreWrite: '<S748>/NeESMC_I_Ahrperhr_DS' incorporates:
     *  Inport: '<Root>/NeESMC_I_Ahrperhr_DS_PM_In'
     */
    (void)Rte_Read_NeESMC_I_Ahrperhr_DS_Rx_NeESMC_I_Ahrperhr_DS
        (&ESMR_ac_DW.NeESMC_I_Ahrperhr_DS);

    /* DataStoreWrite: '<S748>/DeESMC_P_AccumDisChgEnergy' incorporates:
     *  Inport: '<Root>/DeESMC_P_AccumDisChgEnergy_PM_In'
     */
    (void)Rte_Read_DeESMC_P_AccumDisChgEnergy_Rx_DeESMC_P_AccumDisChgEnergy
        (&ESMR_ac_DW.DeESMC_P_AccumDisChgEnergy);

    /* DataStoreWrite: '<S748>/DeESMC_P_AccumChrgEnergy' incorporates:
     *  Inport: '<Root>/DeESMC_P_AccumChrgEnergy_PM_In'
     */
    (void)Rte_Read_DeESMC_P_AccumChrgEnergy_Rx_DeESMC_P_AccumChrgEnergy
        (&ESMR_ac_DW.DeESMC_P_AccumChrgEnergy);

    /* DataStoreWrite: '<S748>/DeESMC_I_AccumDisChrgCurr' incorporates:
     *  Inport: '<Root>/DeESMC_I_AccumDisChrgCurr_PM_In'
     */
    (void)Rte_Read_DeESMC_I_AccumDisChrgCurr_Rx_DeESMC_I_AccumDisChrgCurr
        (&ESMR_ac_DW.DeESMC_I_AccumDisChrgCurr);

    /* DataStoreWrite: '<S748>/DeESMC_I_AccumChrgCurr' incorporates:
     *  Inport: '<Root>/DeESMC_I_AccumChrgCurr_PM_In'
     */
    (void)Rte_Read_DeESMC_I_AccumChrgCurr_Rx_DeESMC_I_AccumChrgCurr
        (&ESMR_ac_DW.DeESMC_I_AccumChrgCurr);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* Gain: '<S775>/Gain' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMinArb'
     */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMinArb_Value
        ((&(VeESMN_U_BatVoltModMinArb_Init)));

    /* Gain: '<S774>/Gain' incorporates:
     *  Inport: '<Root>/VeHVTR_U_HV_BatVoltModMaxArb'
     */
    (void)Rte_Read_VeHVTR_U_HV_BatVoltModMaxArb_Value
        ((&(VeESMN_U_BatVoltModMaxArb_Init)));

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ESMR_PwrOn'
     */
    /* SignalConversion generated from: '<S4>/DeESMR_P_HV_BatDschrgPwrLTArb_PM_In' incorporates:
     *  Inport: '<Root>/DeESMR_P_HV_BatDschrgPwrLTArb_PM_In'
     */
    (void)
        Rte_Read_DeESMR_P_HV_BatDschrgPwrLTArb_Rx_DeESMR_P_HV_BatDschrgPwrLTArb(
        &rtb_TmpSignalConversionAtDeESMR_P_HV_Bat);

    /* SignalConversion generated from: '<S4>/DeESMR_P_HV_BatChrgPwrLTArb_PM_In' incorporates:
     *  Inport: '<Root>/DeESMR_P_HV_BatChrgPwrLTArb_PM_In'
     */
    (void)Rte_Read_DeESMR_P_HV_BatChrgPwrLTArb_Rx_DeESMR_P_HV_BatChrgPwrLTArb
        (&rtb_TmpSignalConversionAtDeESMR_P_HV_B_g);

    /* SignalConversion generated from: '<S4>/DeESMR_P_HV_BatChrgPwrSTArb_PM_In' incorporates:
     *  Inport: '<Root>/DeESMR_P_HV_BatChrgPwrSTArb_PM_In'
     */
    (void)Rte_Read_DeESMR_P_HV_BatChrgPwrSTArb_Rx_DeESMR_P_HV_BatChrgPwrSTArb
        (&rtb_TmpSignalConversionAtDeESMR_P_HV_B_k);

    /* SignalConversion generated from: '<S4>/DeESMR_P_HV_BatDschrgPwrSTArb_PM_In' incorporates:
     *  Inport: '<Root>/DeESMR_P_HV_BatDschrgPwrSTArb_PM_In'
     */
    (void)
        Rte_Read_DeESMR_P_HV_BatDschrgPwrSTArb_Rx_DeESMR_P_HV_BatDschrgPwrSTArb(
        &rtb_TmpSignalConversionAtDeESMR_P_HV_B_h);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/DSM_Init'
     */
    /* Switch: '<S748>/Switch1' incorporates:
     *  Constant: '<S748>/Constant'
     *  Constant: '<S752>/Calib'
     *  DataStoreWrite: '<S748>/DeESMR_P_HV_BatDschrgPwrLTArb'
     *  RelationalOperator: '<S748>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtDeESMR_P_HV_Bat > -9999.0F)
    {
        ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb =
            rtb_TmpSignalConversionAtDeESMR_P_HV_Bat;
    }
    else
    {
        ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb = KeESMR_P_BatLT_MaxLimInit;
    }

    /* End of Switch: '<S748>/Switch1' */

    /* Switch: '<S748>/Switch2' incorporates:
     *  Constant: '<S748>/Constant1'
     *  Constant: '<S753>/Calib'
     *  DataStoreWrite: '<S748>/DeESMR_P_HV_BatChrgPwrLTArb'
     *  RelationalOperator: '<S748>/Relational Operator1'
     */
    if (rtb_TmpSignalConversionAtDeESMR_P_HV_B_g > -9999.0F)
    {
        ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb =
            rtb_TmpSignalConversionAtDeESMR_P_HV_B_g;
    }
    else
    {
        ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb = KeESMR_P_BatLT_MinLimInit;
    }

    /* End of Switch: '<S748>/Switch2' */

    /* Switch: '<S748>/Switch3' incorporates:
     *  Constant: '<S748>/Constant4'
     *  Constant: '<S755>/Calib'
     *  DataStoreWrite: '<S748>/DeESMR_P_HV_BatChrgPwrSTArb'
     *  RelationalOperator: '<S748>/Relational Operator2'
     */
    if (rtb_TmpSignalConversionAtDeESMR_P_HV_B_k > -9999.0F)
    {
        ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrSTArb =
            rtb_TmpSignalConversionAtDeESMR_P_HV_B_k;
    }
    else
    {
        ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrSTArb = KeESMR_P_BatST_MinLimInit;
    }

    /* End of Switch: '<S748>/Switch3' */

    /* Switch: '<S748>/Switch4' incorporates:
     *  Constant: '<S748>/Constant3'
     *  Constant: '<S754>/Calib'
     *  DataStoreWrite: '<S748>/DeESMR_P_HV_BatDschrgPwrSTArb'
     *  RelationalOperator: '<S748>/Relational Operator3'
     */
    if (rtb_TmpSignalConversionAtDeESMR_P_HV_B_h > -9999.0F)
    {
        ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrSTArb =
            rtb_TmpSignalConversionAtDeESMR_P_HV_B_h;
    }
    else
    {
        ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrSTArb = KeESMR_P_BatST_MaxLimInit;
    }

    /* End of Switch: '<S748>/Switch4' */

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ESMC_InitCntrlr'
     */

    /* DataStoreRead: '<S749>/Data Store Read4' */
    VeESMC_P_BatLT_MinLimInit1 = ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb;

    /* DataStoreRead: '<S749>/Data Store Read2' */
    VeESMC_P_BatLT_MaxLimInit1 = ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb;

    /* Gain: '<S771>/Gain' incorporates:
     *  Constant: '<S768>/Calib'
     */
    ESMR_ac_B.Gain_g = KeESMR_U_MaxBatPackVolt;

    /* Gain: '<S772>/Gain' incorporates:
     *  Constant: '<S769>/Calib'
     */
    ESMR_ac_B.Gain_e = KeESMR_U_MinBatPackVolt;

    /* Gain: '<S773>/Gain' incorporates:
     *  Constant: '<S770>/Calib'
     */
    ESMR_ac_B.Gain_go = Rte_Prm_KeESMR_k_BatModNo_KeESMR_k_BatModNo();

    /* SignalConversion generated from: '<S749>/BatEV_MaxLimInit' incorporates:
     *  Constant: '<S765>/Calib'
     */
    ESMR_ac_B.OutportBufferForBatEV_MaxLimInit = KeESMR_P_BatEV_MaxLimInit;

    /* SignalConversion generated from: '<S749>/BatEV_MinLimInit' incorporates:
     *  Constant: '<S766>/Calib'
     */
    ESMR_ac_B.OutportBufferForBatEV_MinLimInit = KeESMR_P_BatEV_MinLimInit;

    /* SignalConversion generated from: '<S749>/BatEngyUsageInit' incorporates:
     *  Constant: '<S767>/Calib'
     */
    ESMR_ac_B.OutportBufferForBatEngyUsageInit = KeESMR_P_BatEngyUsageInit;

    /* SignalConversion generated from: '<S749>/VeESMR_b_SOCAcc' */
    ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc = true;

    /* SignalConversion generated from: '<S749>/VeESMR_b_SOCAcc_ChargeFirst' */
    ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_Charge_a = true;

    /* DataStoreRead: '<S749>/Data Store Read1' */
    VeESMC_P_BatST_MinLimInit1 = ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrSTArb;

    /* DataStoreRead: '<S749>/Data Store Read' */
    VeESMC_P_BatST_MaxLimInit1 = ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrSTArb;

    /* SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Init' incorporates:
     *  Constant: '<S759>/Calib'
     */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_ST_ =
        KeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Init;

    /* SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Init' incorporates:
     *  Constant: '<S760>/Calib'
     */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_S_b =
        KeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Init;

    /* SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Init' incorporates:
     *  Constant: '<S757>/Calib'
     */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_LT_ =
        KeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Init;

    /* SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Init' incorporates:
     *  Constant: '<S758>/Calib'
     */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_L_l =
        KeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Init;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S751>/VeESMR_U_MaxBatPackVolt_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_U_MaxBatPackVolt_ = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_U_MinBatPackVolt_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_U_MinBatPackVolt_ = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_k_BatModNo_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_k_BatModNo_Out_In = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_I_AccumDschrgCurr_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_I_AccumDschrgCurr = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_I_AccumChrgCurr_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_I_AccumChrgCurr_O = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_b_SOCAcc_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_Out_Init = false;

    /* SignalConversion generated from: '<S751>/VeESMR_b_SOCAcc_ChargeFirst_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_ChargeFi = false;

    /* SignalConversion generated from: '<S751>/VeESMR_Pct_CS_SOCSetPt_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_Pct_CS_SOCSetPt_O = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_Pct_Logistics_SOCSetPt_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_Pct_Logistics_SOC = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_Pct_IP_SOCSetPt_Out_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_Pct_IP_SOCSetPt_O = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_P_FC_Max_Pwr_OV_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_P_FC_Max_Pwr_OV_I = 0.0F;

    /* SignalConversion generated from: '<S751>/VeESMR_P_EVCU_PwrAvailForFCPS_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_P_EVCU_PwrAvailFo = 0.0F;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeESMR_P_BatEstdVoltMaxLim' incorporates:
     *  SignalConversion generated from: '<S4>/BatEV_MaxLimInit'
     */
    (void)Rte_Write_VeESMR_P_BatEstdVoltMaxLim_Value
        (ESMR_ac_B.OutportBufferForBatEV_MaxLimInit);

    /* Outport: '<Root>/VeESMR_P_BatEstdVoltMinLim' incorporates:
     *  SignalConversion generated from: '<S4>/BatEV_MinLimInit'
     */
    (void)Rte_Write_VeESMR_P_BatEstdVoltMinLim_Value
        (ESMR_ac_B.OutportBufferForBatEV_MinLimInit);

    /* Outport: '<Root>/VeESMR_P_BattLTMaxLim' incorporates:
     *  SignalConversion generated from: '<S4>/BatLT_MaxLimInit0'
     */
    (void)Rte_Write_VeESMR_P_BattLTMaxLim_Value(VeESMC_P_BatLT_MaxLimInit1);

    /* Outport: '<Root>/VeESMR_P_BattLTMinLim' incorporates:
     *  SignalConversion generated from: '<S4>/BatLT_MinLimInit0'
     */
    (void)Rte_Write_VeESMR_P_BattLTMinLim_Value(VeESMC_P_BatLT_MinLimInit1);

    /* Outport: '<Root>/VeESMR_P_BatSTMaxLim' incorporates:
     *  SignalConversion generated from: '<S4>/BatST_MaxLimInit0'
     */
    (void)Rte_Write_VeESMR_P_BatSTMaxLim_Value(VeESMC_P_BatST_MaxLimInit1);

    /* Outport: '<Root>/VeESMR_P_BatSTMinLim' incorporates:
     *  SignalConversion generated from: '<S4>/BatST_MinLimInit0'
     */
    (void)Rte_Write_VeESMR_P_BatSTMinLim_Value(VeESMC_P_BatST_MinLimInit1);

    /* Outport: '<Root>/VeESMR_I_AccumChrgCurr' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_I_AccumChrgCurr_Out_Init'
     */
    (void)Rte_Write_VeESMR_I_AccumChrgCurr_Value
        (ESMR_ac_B.OutportBufferForVeESMR_I_AccumChrgCurr_O);

    /* Outport: '<Root>/VeESMR_I_AccumDschrgCurr' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_I_AccumDschrgCurr_Out_Init'
     */
    (void)Rte_Write_VeESMR_I_AccumDschrgCurr_Value
        (ESMR_ac_B.OutportBufferForVeESMR_I_AccumDschrgCurr);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Init'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_LT_);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Init'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_L_l);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Init'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_ST_);

    /* Outport: '<Root>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Init'
     */
    (void)Rte_Write_VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_S_b);

    /* Outport: '<Root>/VeESMR_P_EVCU_PwrAvailForFCPS' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_EVCU_PwrAvailForFCPS_Init'
     */
    (void)Rte_Write_VeESMR_P_EVCU_PwrAvailForFCPS_Value
        (ESMR_ac_B.OutportBufferForVeESMR_P_EVCU_PwrAvailFo);

    /* Outport: '<Root>/VeESMR_P_FC_Max_Pwr_OV' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_FC_Max_Pwr_OV_Init'
     */
    (void)Rte_Write_VeESMR_P_FC_Max_Pwr_OV_Value
        (ESMR_ac_B.OutportBufferForVeESMR_P_FC_Max_Pwr_OV_I);

    /* Outport: '<Root>/VeESMR_Pct_CS_SOCSetPt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_Pct_CS_SOCSetPt_Out_Init'
     */
    (void)Rte_Write_VeESMR_Pct_CS_SOCSetPt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_Pct_CS_SOCSetPt_O);

    /* Outport: '<Root>/VeESMR_Pct_IP_SOCSetPt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_Pct_IP_SOCSetPt_Out_Init'
     */
    (void)Rte_Write_VeESMR_Pct_IP_SOCSetPt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_Pct_IP_SOCSetPt_O);

    /* Outport: '<Root>/VeESMR_Pct_Logistics_SOCSetPt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_Pct_Logistics_SOCSetPt_Out_Init'
     */
    (void)Rte_Write_VeESMR_Pct_Logistics_SOCSetPt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_Pct_Logistics_SOC);

    /* Outport: '<Root>/VeESMR_U_MaxBatPackVolt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_U_MaxBatPackVolt_Out_Init'
     */
    (void)Rte_Write_VeESMR_U_MaxBatPackVolt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_U_MaxBatPackVolt_);

    /* Outport: '<Root>/VeESMR_U_MinBatPackVolt' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_U_MinBatPackVolt_Out_Init'
     */
    (void)Rte_Write_VeESMR_U_MinBatPackVolt_Value
        (ESMR_ac_B.OutportBufferForVeESMR_U_MinBatPackVolt_);

    /* Outport: '<Root>/VeESMR_b_SOCAcc_ChargeFirst' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc_ChargeFirst_Out_Init'
     */
    (void)Rte_Write_VeESMR_b_SOCAcc_ChargeFirst_Value
        (ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_ChargeFi);

    /* Outport: '<Root>/VeESMR_b_SOCAcc' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc_Out_Init'
     */
    (void)Rte_Write_VeESMR_b_SOCAcc_Value
        (ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_Out_Init);

    /* Outport: '<Root>/VeESMR_k_BatModNo' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_k_BatModNo_Out_Init'
     */
    (void)Rte_Write_VeESMR_k_BatModNo_Value
        (ESMR_ac_B.OutportBufferForVeESMR_k_BatModNo_Out_In);

    /* Merge: '<Root>/Merge_1' incorporates:
     *  SignalConversion generated from: '<S4>/AhrperhrNorm_Init'
     * */
    Rte_IrvWrite_ESMR_PwrOn_AhrperhrNorm_write_IRV
        (ESMR_ac_B.OutportBufferForBatEngyUsageInit);

    /* SignalConversion generated from: '<S4>/BatLT_MaxLimInit1' */
    Rte_IrvWrite_ESMR_PwrOn_BatLT_MaxLimInit1_IRV(VeESMC_P_BatLT_MaxLimInit1);

    /* SignalConversion generated from: '<S4>/BatLT_MinLimInit1' */
    Rte_IrvWrite_ESMR_PwrOn_BatLT_MinLimInit1_IRV(VeESMC_P_BatLT_MinLimInit1);

    /* SignalConversion generated from: '<S4>/BatST_MaxLimInit1' */
    Rte_IrvWrite_ESMR_PwrOn_BatST_MaxLimInit1_IRV(VeESMC_P_BatST_MaxLimInit1);

    /* SignalConversion generated from: '<S4>/BatST_MinLimInit1' */
    Rte_IrvWrite_ESMR_PwrOn_BatST_MinLimInit1_IRV(VeESMC_P_BatST_MinLimInit1);

    /* SignalConversion generated from: '<S4>/VeESMN_U_BatVoltModMaxArb_Init' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMN_U_BatVoltModMaxArb_Init_IRV
        (VeESMN_U_BatVoltModMaxArb_Init);

    /* SignalConversion generated from: '<S4>/VeESMN_U_BatVoltModMinArb_Init' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMN_U_BatVoltModMinArb_Init_IRV
        (VeESMN_U_BatVoltModMinArb_Init);

    /* Merge: '<Root>/Merge_7_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_BatEstdVoltMaxLim_write_Init'
     * */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_P_BatEstdVoltMaxLim_write_IRV
        (ESMR_ac_B.OutportBufferForBatEV_MaxLimInit);

    /* Merge: '<Root>/Merge_6_Irv' incorporates:
     *  SignalConversion generated from: '<S4>/VeESMR_P_BatEstdVoltMinLim_write_Init'
     * */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_P_BatEstdVoltMinLim_write_IRV
        (ESMR_ac_B.OutportBufferForBatEV_MinLimInit);

    /* SignalConversion generated from: '<S4>/VeESMR_U_MaxBatPackVolt' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_U_MaxBatPackVolt_IRV(ESMR_ac_B.Gain_g);

    /* SignalConversion generated from: '<S4>/VeESMR_U_MinBatPackVolt' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_U_MinBatPackVolt_IRV(ESMR_ac_B.Gain_e);

    /* SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_b_SOCAcc_IRV
        (ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc);

    /* SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc_ChargeFirst' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_b_SOCAcc_ChargeFirst_IRV
        (ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_Charge_a);

    /* SignalConversion generated from: '<S4>/VeESMR_k_BatModNo' */
    Rte_IrvWrite_ESMR_PwrOn_VeESMR_k_BatModNo_IRV(ESMR_ac_B.Gain_go);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, ESMR_CODE) ESMR_ac_Init(void)
{
    /* Start for DataStoreMemory: '<Root>/DSM_1' */
    ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrLTArb = -100000.0F;

    /* Start for DataStoreMemory: '<Root>/DSM_2' */
    ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrLTArb = -100000.0F;

    /* Start for DataStoreMemory: '<Root>/DSM_3' */
    ESMR_ac_DW.DeESMR_P_HV_BatChrgPwrSTArb = -100000.0F;

    /* Start for DataStoreMemory: '<Root>/DSM_4' */
    ESMR_ac_DW.DeESMR_P_HV_BatDschrgPwrSTArb = -100000.0F;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/ESMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/ESMC_InitCntrlr'
     */

    /* SystemInitialize for SignalConversion generated from: '<S749>/BatEV_MaxLimInit' */
    ESMR_ac_B.OutportBufferForBatEV_MaxLimInit = KeESMR_P_BatEV_MaxLimInit;

    /* SystemInitialize for SignalConversion generated from: '<S749>/BatEV_MinLimInit' */
    ESMR_ac_B.OutportBufferForBatEV_MinLimInit = KeESMR_P_BatEV_MinLimInit;

    /* SystemInitialize for SignalConversion generated from: '<S749>/BatEngyUsageInit' */
    ESMR_ac_B.OutportBufferForBatEngyUsageInit = KeESMR_P_BatEngyUsageInit;

    /* SystemInitialize for SignalConversion generated from: '<S749>/VeESMR_b_SOCAcc' */
    ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc = true;

    /* SystemInitialize for SignalConversion generated from: '<S749>/VeESMR_b_SOCAcc_ChargeFirst' */
    ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_Charge_a = true;

    /* SystemInitialize for SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_ST_ =
        KeESMR_P_BoostCnvrtr_ST_ChrgPwrLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_S_b =
        KeESMR_P_BoostCnvrtr_ST_DschrgPwrLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_LT_ =
        KeESMR_P_BoostCnvrtr_LT_ChrgPwrLmt_Init;

    /* SystemInitialize for SignalConversion generated from: '<S749>/VeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Init' */
    ESMR_ac_B.OutportBufferForVeESMR_P_BoostCnvrtr_L_l =
        KeESMR_P_BoostCnvrtr_LT_DschrgPwrLmt_Init;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatLT_MaxLimInit1' */
    Rte_IrvWrite_ESMR_ac_Init_BatLT_MaxLimInit1_IRV(VeESMC_P_BatLT_MaxLimInit1);

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatLT_MinLimInit1' */
    Rte_IrvWrite_ESMR_ac_Init_BatLT_MinLimInit1_IRV(VeESMC_P_BatLT_MinLimInit1);

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatST_MaxLimInit1' */
    Rte_IrvWrite_ESMR_ac_Init_BatST_MaxLimInit1_IRV(VeESMC_P_BatST_MaxLimInit1);

    /* SystemInitialize for SignalConversion generated from: '<S4>/BatST_MinLimInit1' */
    Rte_IrvWrite_ESMR_ac_Init_BatST_MinLimInit1_IRV(VeESMC_P_BatST_MinLimInit1);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMN_U_BatVoltModMaxArb_Init' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMN_U_BatVoltModMaxArb_Init_IRV
        (VeESMN_U_BatVoltModMaxArb_Init);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMN_U_BatVoltModMinArb_Init' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMN_U_BatVoltModMinArb_Init_IRV
        (VeESMN_U_BatVoltModMinArb_Init);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMR_U_MaxBatPackVolt' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_U_MaxBatPackVolt_IRV(ESMR_ac_B.Gain_g);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMR_U_MinBatPackVolt' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_U_MinBatPackVolt_IRV(ESMR_ac_B.Gain_e);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_b_SOCAcc_IRV
        (ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMR_b_SOCAcc_ChargeFirst' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_b_SOCAcc_ChargeFirst_IRV
        (ESMR_ac_B.OutportBufferForVeESMR_b_SOCAcc_Charge_a);

    /* SystemInitialize for SignalConversion generated from: '<S4>/VeESMR_k_BatModNo' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_k_BatModNo_IRV(ESMR_ac_B.Gain_go);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEH'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/Inputs_100ms_Task'
     */

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_LT_PwrLimits'
     */

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_BE_PwrLimits'
     */

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/ESMC_CalcEngParm'
     */

    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DtrmnBaseSTPwrLim'
     */

    /* SystemInitialize for SignalConversion generated from: '<S2>/HybAlternatorMd' */
    Rte_IrvWrite_ESMR_ac_Init_HybAlternatorMd_IRV
        (ESMR_ac_B.VeESMR_b_HybAlternatorMd);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMC_P_ChrgPwrLimST_RL' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMC_P_ChrgPwrLimST_RL_IRV
        (VeESMR_P_ArbChrgPwrLimST_Ovrd);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMC_e_ChrgPwrLimST_ID_A' incorporates:
     *  Merge: '<S314>/Merge1'
     */
    Rte_IrvWrite_ESMR_ac_Init_VeESMC_e_ChrgPwrLimST_ID_A_IRV
        (VeESMR_e_ChrgPwrLimST_ID_A_Ovrd);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMC_e_DschrgPwrLimST_ID_A' incorporates:
     *  Switch: '<S388>/Switch1'
     */
    Rte_IrvWrite_ESMR_ac_Init_VeESMC_e_DschrgPwrLimST_ID_A_IRV
        (VeESMR_e_DschrgPwrLim_ID_B_ST);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMN_e_EngStartStopSt' incorporates:
     *  Switch: '<S640>/Switch19'
     */
    Rte_IrvWrite_ESMR_ac_Init_VeESMN_e_EngStartStopSt_IRV
        (VeESMN_e_EngStartStopSt);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMN_e_HVBatCntctrStat' incorporates:
     *  Switch: '<S640>/Switch17'
     */
    Rte_IrvWrite_ESMR_ac_Init_VeESMN_e_HVBatCntctrStat_IRV
        (VeESMN_e_HVBatCntctrStat);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_FCPS_Gen_Pwr' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_FCPS_Gen_Pwr_IRV
        (ESMR_ac_B.VeESMR_P_FCPS_Gen_Pwr);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_Total_LT_Chrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_Total_LT_Chrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch_c);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_Total_LT_DsChrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_Total_LT_DsChrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch_k);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL' */
#if Rte_SysCon_Variant_ESMR_FCPS_NoFunc

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_Total_ST_Chrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch_g);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_Chrg_PwrLmtRL' */

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_P_Total_ST_DsChrg_PwrLmtRL' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_Total_ST_DsChrg_PwrLmtRL_IRV
        (ESMR_ac_B.Switch);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_U_FCPS_LowerVoltLIM' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_U_FCPS_LowerVoltLIM_IRV
        (ESMR_ac_B.VeESMR_U_FCPS_LowerVoltLIM);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_U_FCPS_UpperVoltLIM' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_U_FCPS_UpperVoltLIM_IRV
        (ESMR_ac_B.VeESMR_U_FCPS_UpperVoltLIM);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_U_FCPS_Volt' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_U_FCPS_Volt_IRV
        (ESMR_ac_B.VeESMR_U_FCPS_Volt);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Lower_Voltage_LIM_FA' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_b_FCPS_Lower_Voltage_LIM_FA_IRV
        (ESMR_ac_B.VeESMR_b_FCPS_Lower_Voltage_LIM_FA);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Upper_Voltage_LIM_FA' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_b_FCPS_Upper_Voltage_LIM_FA_IRV
        (ESMR_ac_B.VeESMR_b_FCPS_Upper_Voltage_LIM_FA);

    /* SystemInitialize for SignalConversion generated from: '<S2>/VeESMR_b_FCPS_Volt_FA' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_b_FCPS_Volt_FA_IRV
        (ESMR_ac_B.VeESMR_b_FCPS_Volt_FA);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' incorporates:
     *  SubSystem: '<Root>/ESMR_MedTEB'
     */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESMC_ArbPwrLim'
     */

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/ESMC_ST_OVUV'
     */

    /* Start for If: '<S92>/If' */
    ESMR_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S94>/If1' */
    ESMR_ac_DW.If1_ActiveSubsystem = -1;

    /* SystemInitialize for IfAction SubSystem: '<S92>/DtrmnST_OV_PID' */

    /* Start for If: '<S102>/If' */
    ESMR_ac_DW.If_ActiveSubsystem_d = -1;

    /* End of SystemInitialize for SubSystem: '<S92>/DtrmnST_OV_PID' */

    /* SystemInitialize for IfAction SubSystem: '<S94>/DtrmnST_UV_PID' */

    /* Start for If: '<S180>/If' */
    ESMR_ac_DW.If_ActiveSubsystem_a = -1;

    /* End of SystemInitialize for SubSystem: '<S94>/DtrmnST_UV_PID' */

    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeESMR_P_BatSTMaxLim1' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_BatSTMaxLim1_IRV(VeESMR_P_BatSTMaxLim1);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeESMR_P_BatSTMinLim1' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_BatSTMinLim1_IRV(VeESMR_P_BatSTMinLim1);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeESMR_P_BattLTMaxLim1' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_BattLTMaxLim1_IRV(VeESMR_P_BattLTMaxLim1);

    /* SystemInitialize for SignalConversion generated from: '<S1>/VeESMR_P_BattLTMinLim1' */
    Rte_IrvWrite_ESMR_ac_Init_VeESMR_P_BattLTMinLim1_IRV(VeESMR_P_BattLTMinLim1);

    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
