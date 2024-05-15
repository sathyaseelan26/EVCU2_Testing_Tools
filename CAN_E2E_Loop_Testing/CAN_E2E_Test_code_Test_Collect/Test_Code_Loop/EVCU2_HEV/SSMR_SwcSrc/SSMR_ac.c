/*
 * File: SSMR_ac.c
 *
 * Code generated for Simulink model 'SSMR_ac'.
 *
 * Model version                  : 9.473
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:05:19 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SSMR_ac.h"
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
#define START_SEC_CALIB_UNSPECIFIED_SSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_Cf_CnvrtCircumToRadius =
    0.1592F;                           /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func

static volatile CONST(uint8, SSMR_VAR_INIT) KeSSMR_Cnt_Lv2SpdRatFailCntrInc = 3U;/* Referenced by:
                                                                      * '<S167>/Calib'
                                                                      * '<S35>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func

static volatile CONST(uint8, SSMR_VAR_INIT) KeSSMR_Cnt_Lv2SpdRatFailCntrLim =
    120U;                              /* Referenced by:
                                        * '<S168>/Calib'
                                        * '<S36>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_K_CANEngSpdFiltCoef = 0.35F;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_K_EPP_BufferBlendStepSize =
    0.01F;                             /* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_AxlTrqRespTypFA_OverdEnable = 1;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_AxlTrqRespTypFA_OverdValue = 0;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_BufferedSpdFA_OverdEnable
    = 0;                               /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_BufferedSpdFA_OverdValue =
    0;                                 /* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_CANVehSpdFA_OverdEnable =
    0;                                 /* Referenced by:
                                        * '<S104>/Calib'
                                        * '<S338>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_CANVehSpdFA_OverdValue =
    0;                                 /* Referenced by:
                                        * '<S105>/Calib'
                                        * '<S339>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_CANVehSpd_OverdEnable = 0;/* Referenced by:
                                                                      * '<S106>/Calib'
                                                                      * '<S340>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_DisblVehSpdRatFlag = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_DsblMtrTrnsSpd_P1P4 = 1;/* Referenced by: '<S249>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_EnblAtlantisHigh_SpdSource = 1;/* Referenced by: '<S86>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_EnblMtrBRtnl = 1;/* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_EngineSpeed_OverdEnable =
    0;                                 /* Referenced by: '<S184>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_Lv2EngineSpeed_MCP_OverdEnable = 0;/* Referenced by: '<S185>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_Lv2Lv1SharedMemFlt_OvrdEnable = 0;/* Referenced by: '<S186>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_Lv2Lv1SharedMemFlt_OvrdValue = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2MtrA_SpdFA_OverdEnable
    = 0;                               /* Referenced by:
                                        * '<S188>/Calib'
                                        * '<S95>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2MtrA_SpdFA_OverdValue =
    0;                                 /* Referenced by:
                                        * '<S189>/Calib'
                                        * '<S96>/Calib'
                                        * '<S326>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2MtrA_Spd_OverdEnable =
    0;                                 /* Referenced by:
                                        * '<S190>/Calib'
                                        * '<S97>/Calib'
                                        * '<S327>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2MtrB_SpdFA_OverdEnable
    = 0;                               /* Referenced by:
                                        * '<S191>/Calib'
                                        * '<S332>/Calib'
                                        * '<S100>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2MtrB_SpdFA_OverdValue =
    0;                                 /* Referenced by:
                                        * '<S192>/Calib'
                                        * '<S333>/Calib'
                                        * '<S101>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2MtrB_Spd_OverdEnable =
    0;                                 /* Referenced by:
                                        * '<S193>/Calib'
                                        * '<S334>/Calib'
                                        * '<S102>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2RatMonitorEnable = 1;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2SPIFlt_OverdEnable = 0;/* Referenced by:
                                                                      * '<S194>/Calib'
                                                                      * '<S328>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2SPIFlt_OverdValue = 0;/* Referenced by:
                                                                      * '<S195>/Calib'
                                                                      * '<S329>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT)
    KeSSMR_b_Lv2SharedMemFlt_OvrdEnable = 0;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_Lv2SharedMemFlt_OvrdValue
    = 0;                               /* Referenced by: '<S336>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_M182BEV_Enbl = 1;/* Referenced by:
                                                                      * '<S15>/Calib'
                                                                      * '<S98>/Calib'
                                                                      * '<S38>/Calib'
                                                                      * '<S53>/Calib'
                                                                      * '<S61>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_MtrASpd_OverdEnble = 1;/* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_TransOutSpdFA_OverdEnable
    = 0;                               /* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_TransOutSpdFA_OverdValue =
    0;                                 /* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_TransOutSpd_OverdEnable =
    0;                                 /* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_UseRearWhlSpdsInKmph = 1;/* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(boolean, SSMR_VAR_INIT) KeSSMR_b_UseWhlSpdsInKmph = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_cf_MtrBSpdVehSpd = 0.377F;/* Referenced by:
                                                                      * '<S242>/Calib'
                                                                      * '<S251>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_1Rev_BufferBlendStepSize =
    0.01F;                             /* Referenced by: '<S312>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_CANVehSpdFiltCoef = 0.05F;/* Referenced by:
                                                                      * '<S163>/Calib'
                                                                      * '<S243>/Calib'
                                                                      * '<S63>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_EngSpd_eTPUFiltCoef =
    0.35F;                             /* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_MtrASpdFiltCoef = 0.05F;/* Referenced by:
                                                                      * '<S16>/Calib'
                                                                      * '<S212>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_MtrBSpdFiltCoef = 0.05F;/* Referenced by:
                                                                      * '<S17>/Calib'
                                                                      * '<S155>/Calib'
                                                                      * '<S224>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_NTurbSpdFiltCoef = 0.05F;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_RearWhlSpdFiltCoef =
    0.35F;                             /* Referenced by: '<S87>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_TransOutSpdFiltCoef =
    0.05F;                             /* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_WhlSpdFiltCoef = 0.35F;/* Referenced by:
                                                                      * '<S88>/Calib'
                                                                      * '<S295>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_k_noSpeedFiltCoef = 0.325F;/* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_l_RollingWhlRadius =
    0.3617F;                           /* Referenced by:
                                        * '<S89>/Calib'
                                        * '<S245>/Calib'
                                        * '<S252>/Calib'
                                        * '<S263>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_l_WhlRadius = 0.3617F;/* Referenced by:
                                                                      * '<S123>/Calib'
                                                                      * '<S145>/Calib'
                                                                      * '<S157>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DefaultMtrASpd = 0.0F;/* Referenced by: '<S18>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DefaultMtrBSpd = 0.0F;/* Referenced by:
                                                                      * '<S19>/Calib'
                                                                      * '<S226>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DefaultTurbSpd = 1000.0F;/* Referenced by: '<S233>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DefaultWhlSpd = 20000.0F;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DefltEngSpd = 0.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DefltTransOutSpd =
    9999.0F;                           /* Referenced by: '<S238>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_DfltVehSpdErrorValue =
    5.0F;                              /* Referenced by: '<S121>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_EngSpdErrLim = 300.0F;/* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_EngineSpeed_OverdValue =
    0.0F;                              /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT)
    KeSSMR_n_Lv2EngineSpeed_MCP_OverdValue = 0.0F;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_Lv2MtrA_Spd_OverdValue =
    0.0F;                              /* Referenced by:
                                        * '<S198>/Calib'
                                        * '<S99>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_Lv2MtrB_Spd_OverdValue =
    0.0F;                              /* Referenced by:
                                        * '<S199>/Calib'
                                        * '<S337>/Calib'
                                        * '<S103>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_MtrASpdForSignedVehSpd =
    -0.5F;                             /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_MtrASpd_OverdValue =
    0.05F;                             /* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_MtrBSpdErrorLim = 300.0F;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_MtrBSpdForSignedVehSpd =
    -0.5F;                             /* Referenced by:
                                        * '<S179>/Calib'
                                        * '<S62>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_MtrBTrnsOutSpdError_Lim =
    300.0F;                            /* Referenced by: '<S253>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_TransOutSpd_OverdValue =
    0.0F;                              /* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_WhlErrorLim1 = 300.0F;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_n_WhlErrorLim2 = 300.0F;/* Referenced by: '<S298>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_r_All_NoFromNb_NCnDep =
    0.391304344F;                      /* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_r_BeltRatio = 2.323F;/* Referenced by: '<S216>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_r_BetaValue = 3.15384626F;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_r_FDR = 3.64024F;/* Referenced by:
                                                                      * '<S124>/Calib'
                                                                      * '<S147>/Calib'
                                                                      * '<S159>/Calib'
                                                                      * '<S239>/Calib'
                                                                      * '<S254>/Calib'
                                                                      * '<S55>/Calib'
                                                                      * '<S58>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_r_RearFDR = 11.2F;/* Referenced by: '<S255>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_t_CANVehSpdFiltdT = 0.0125F;/* Referenced by:
                                                                      * '<S209>/Calib'
                                                                      * '<S22>/Calib'
                                                                      * '<S165>/Calib'
                                                                      * '<S64>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_t_MtrBSpdFiltdT = 0.0125F;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_t_noSpeedFiltdT = 0.0125F;/* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_v_CANVehSpd_OverdValue =
    0.0F;                              /* Referenced by:
                                        * '<S107>/Calib'
                                        * '<S341>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_v_DefaultVehSpd = 50.0F;/* Referenced by:
                                                                      * '<S39>/Calib'
                                                                      * '<S261>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Bev || Rte_SysCon_Variant_SSMR_Func

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_v_ErrorVehSpdLim = 10.0F;/* Referenced by:
                                                                      * '<S169>/Calib'
                                                                      * '<S40>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static volatile CONST(float32, SSMR_VAR_INIT) KeSSMR_v_MtrWhlSpdSpdErrorLim =
    5.0F;                              /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KtSSMR_K_CoeffEngineSpeed6deg[12] =
{
    1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.9F, 0.7F, 0.5F, 0.3F, 0.1F, 0.0F
} ;                                    /* Referenced by: '<S316>/Vector' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KtSSMR_K_CoeffEngineSpeedEPP[14] =
{
    0.0F, 0.0F, 0.1F, 0.3F, 0.5F, 0.7F, 0.9F, 1.0F, 1.0F, 0.7F, 0.5F, 0.3F, 0.1F,
    0.0F
} ;                                    /* Referenced by: '<S321>/Vector' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KxSSMR_K_CoeffEngineSpeed6deg[12] =
{
    0.0F, 200.0F, 400.0F, 600.0F, 700.0F, 750.0F, 800.0F, 850.0F, 900.0F, 950.0F,
    1000.0F, 1050.0F
} ;                                    /* Referenced by: '<S316>/Vector' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static volatile CONST(float32, SSMR_VAR_INIT) KxSSMR_K_CoeffEngineSpeedEPP[14] =
{
    0.0F, 750.0F, 800.0F, 850.0F, 900.0F, 950.0F, 1000.0F, 1050.0F, 3600.0F,
    3650.0F, 3700.0F, 3750.0F, 3800.0F, 3850.0F
} ;                                    /* Referenced by: '<S321>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_SSMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SSMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_AllSpdOK;/* '<S204>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_AllSpdOK1;/* '<S204>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CANMtrAEngSpdFA;/* '<S203>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CANMtrAEngSpdGood;/* '<S203>/Logical6' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CANVehSpdGood;/* '<S25>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CANVehSpdGoodP1fPx;/* '<S248>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CANeTPUErrFA;/* '<S203>/Logical12' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CANeTPUErrGood;/* '<S203>/Comparison1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_CheckSrc;/* '<S118>/Comparison1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_EngSpdFA1;/* '<S203>/Logical15' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_EngSpdFA2;/* '<S203>/Logical10' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_EngSpdGd;/* '<S203>/Logical' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_FroMtrWhlSpdGood;/* '<S25>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrACANErrFA;/* '<S203>/Logical13' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrACANErrGood;/* '<S203>/Comparison3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrAeTPUErrFA;/* '<S203>/Logical11' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrAeTPUErrGood;/* '<S203>/Comparison2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBSpdErrorInRange;/* '<S204>/Comparison2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBSpdFA;/* '<S204>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBSpdFlt;/* '<S25>/Logical9' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBTrnsOutSpdErrorFA;/* '<S250>/Comparison' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBTrnsSpdFA;/* '<S241>/Logical' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBTrnsSpdGood;/* '<S248>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBTurbSpdGood;/* '<S204>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrBorMtrASpdGood;/* '<S25>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrSpdFA;/* '<S50>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrSpdFAInter;/* '<S50>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrSpdOK;/* '<S204>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrVehSpdFlt;/* '<S25>/Logical7' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrVehSpdGood;/* '<S25>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_MtrWhlSpdFlt;/* '<S25>/Logical8' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_NotWhlSpdGood;/* '<S206>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_RearMtrWhlSpdFlt;/* '<S33>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_RearMtrWhlSpdGood;/* '<S25>/Logical12' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_SignalsOK;/* '<S204>/Logical6' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_TransOutGood;/* '<S206>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_UseCAN;/* '<S203>/Logical9' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_UseETPU;/* '<S203>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_UseMtrA;/* '<S203>/Logical7' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_VehSsdFADebCtrInc;/* '<S25>/Logical17' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_WhlDirFL_StatFA;/* '<S68>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_WhlDirFR_StatFA;/* '<S69>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_WhlDirRL_StatFA;/* '<S71>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_WhlDirRR_StatFA;/* '<S70>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_WhlSpdGood;/* '<S25>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_WhlSpdGoodP1fPx;/* '<S248>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_eTPUCANEngSpdFA;/* '<S203>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_eTPUCANEngSpdGood;/* '<S203>/Logical8' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_eTPUMtrAEngSpdFA;/* '<S203>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMC_b_eTPUMtrAEngSpdGood;/* '<S203>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_cf_Temp;/* '<S207>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(uint8, SSMR_VAR_INIT) VeSSMC_e_WhlDirFL_Stat;/* '<S72>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(uint8, SSMR_VAR_INIT) VeSSMC_e_WhlDirFR_Stat;/* '<S73>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(uint8, SSMR_VAR_INIT) VeSSMC_e_WhlDirRL_Stat;/* '<S74>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(uint8, SSMR_VAR_INIT) VeSSMC_e_WhlDirRR_Stat;/* '<S75>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_1RevBufferGrad;/* '<S313>/Sum3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_EngineSpd_P1f;/* '<S220>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrASpd;/* '<S23>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrASpd2WhlSpd;/* '<S57>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrBSpdInter;/* '<S24>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrBSpdUnSgnd;/* '<S256>/LV2_Abs_switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrBTrnsOutSpdError;/* '<S250>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtraSpdRationalized;/* '<S10>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrbSpd2WhlSpd;/* '<S60>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrbSpd2WhlSpdP1fPx;/* '<S258>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrbSpdRationalized;/* '<S10>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_MtrbSpdRationalizedP1fPx;/* '<S222>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TempEngSpd;/* '<S210>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TempErr1;/* '<S203>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TempErr2;/* '<S203>/Sum2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TempErr3;/* '<S203>/Sum3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TempErrorSign;/* '<S204>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TransOutSpd;/* '<S235>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_n_TransOutSpd2WhlSpd;/* '<S257>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_AxleSpd;/* '<S117>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_DiffVehSign1;/* '<S118>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_DiffVehSign2;/* '<S118>/Sum2' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MinDiffVehSpd;/* '<S128>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MtrASpdFltrd;/* '<S221>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MtrASpdVehSpdIntm;/* '<S51>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MtrBSpdVehSpdIntm;/* '<S52>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MtrBSpdVehSpdIntmP1fPx;/* '<S250>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MtrSpdInter;/* '<S49>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_MtrSpdVehSpdIntm;/* '<S49>/Switch2' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_SpdSignMulFactr;/* '<S50>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_VehSpd;/* '<S34>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_VehSpdFrmWhlSpd;/* '<S262>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_VehSpdFromMtrB;/* '<S259>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_VehSpdP1fPx;/* '<S260>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_VehSpdSigned;/* '<S27>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_VehSpd_Inter;/* '<S29>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMC_v_piD;/* '<S117>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_AxlTrqFA;/* '<S112>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_CntNtFail;/* '<S138>/Comparison8' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_DTCTestPassed;/* '<S138>/Logical' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_EngSpd_FA;/* '<S140>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_MtrASpd_NtGood;/* '<S140>/Logical8' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_RatFailNot;/* '<S138>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_VehSpdRatMonitorEnbld;/* '<S112>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMD_b_tempDsbld;/* '<S112>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_n_EngSpd;/* '<S152>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_n_G2noSpd;/* '<S153>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_n_M2noSpd;/* '<S154>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_n_noSpd;/* '<S132>/Merge' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_n_tempna;/* '<S152>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_CanSigVehSpdFltrd;/* '<S136>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_CanVehSpdFltrd;/* '<S166>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_FltrdnoSpd;/* '<S150>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_MtrAEngSpd_VehSpd;/* '<S149>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_MtrBSpdVehTemp;/* '<S133>/Product3' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_MtrBVehSpdFltrd;/* '<S161>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_NOtempSpd;/* '<S132>/Product3' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_SpdSignMulFactr;/* '<S139>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMD_v_VehSpd;/* '<S131>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_I_ProxRadius;/* '<S77>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_I_WhlRadius;/* '<S77>/Switch2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_K_Buffer1RevUpdated;/* '<S307>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_K_BufferEPPUpdated;/* '<S309>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_K_BufferEPPUpdatedCoeff;/* '<S323>/Sum3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_K_CoeffEngSpdEPP_MinMax;/* '<S322>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_K_CoeffEngineSpeed6deg_EPP;/* '<S308>/Sum2' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_AxleTrqRespTypeFA;/* '<S113>/Switch10' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Buffer_1rev_Notupdated;/* '<S274>/Comparison2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Buffer_EPP_Notupdated;/* '<S274>/Comparison3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_CANBusOff_CANC;/* '<S202>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_CANBusOff_EPT;/* '<S202>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_ClrDiagCntrTmrs;/* '<S113>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_DiagReset;/* '<S80>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_EPP_updatedFA;/* '<S274>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FlRrFA;/* '<S273>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FlRrNotFA;/* '<S273>/Logical8' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FlRr_Good;/* '<S273>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FrRlFA;/* '<S273>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FrRlNotFA;/* '<S273>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FrRl_Good;/* '<S273>/Logical7' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_FroWhlSpdFA;/* '<S77>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_KeyOff;/* '<S80>/Switch2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_LOC_BSM;/* '<S202>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_LOC_TCM;/* '<S202>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2CAN_EngSpdFA;/* '<S302>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2CanSigVehSpdFA_temp;/* '<S277>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2EngineSpeedFA;/* '<S113>/Logical3' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2EngineSpeed_MCPFA;/* '<S113>/Switch9' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2HW_Ni_1revFA1;/* '<S274>/Comparison1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2HW_Ni_EPPFA1;/* '<S274>/Comparison4' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2Lv1DsblSpdRatCheck;/* '<S113>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2Lv1SharedMemFlt;/* '<S113>/Switch2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2MtrASpdFA;/* '<S275>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2MtrA_SpdFA;/* '<S113>/Switch5' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2MtrB_SpdFA;/* '<S113>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2SPIFlt;/* '<S113>/Switch7' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Lv2_EngSpd_eTPUFA;/* '<S303>/Comparison4' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_MtrASpdFA;/* '<S78>/Switch5' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_MtrASpdFAP1fPx;/* '<S275>/Switch34' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_MtrBSpdFA;/* '<S94>/Switch2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_MtrBSpdFAActv;/* '<S276>/Switch3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_MtrBSpdFAP1fPx;/* '<S276>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_NTurbSpdFA;/* '<S202>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Ni_1revFA;/* '<S274>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Ni_1revNoFA;/* '<S311>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_RearWhlSpdFA;/* '<S77>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_Reset_Fault;/* '<S80>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_SPIFlt;/* '<S202>/Logical6' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_SPIFltActv;/* '<S275>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_SharedMemFlt;/* '<S202>/Logical7' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_TransOutSpdDirFA;/* '<S288>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_TransOutSpdFA;/* '<S272>/Switch32' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_TransOutSpdFA_temp;/* '<S272>/Logical4' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_VehSpdFA;/* '<S79>/Switch14' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_VehSpdFA1;/* '<S79>/Logical2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_VehSpdFAP1fPx;/* '<S277>/Switch14' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlDirFL_StatFA;/* '<S271>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlDirFR_StatFA;/* '<S270>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlDirRL_StatFA;/* '<S269>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlDirRR_StatFA;/* '<S268>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlFLSpdFA;/* '<S267>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlFRSpdFA;/* '<S266>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlRLSpdFA;/* '<S265>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlRRSpdFA;/* '<S264>/AND' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlSpdFA;/* '<S273>/Logical6' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlSpdInBound1;/* '<S273>/Comparison2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlSpdInBound2;/* '<S273>/Comparison1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_WhlSpdNotFA;/* '<S273>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(boolean, SSMR_VAR_INIT) VeSSMI_b_sharedmemft;/* '<S276>/Switch2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(uint8, SSMR_VAR_INIT) VeSSMI_e_TransOutSpdDir;/* '<S293>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(uint8, SSMR_VAR_INIT) VeSSMI_e_WhlDirFL_Stat;/* '<S287>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(uint8, SSMR_VAR_INIT) VeSSMI_e_WhlDirFR_Stat;/* '<S286>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(uint8, SSMR_VAR_INIT) VeSSMI_e_WhlDirRL_Stat;/* '<S285>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(uint8, SSMR_VAR_INIT) VeSSMI_e_WhlDirRR_Stat;/* '<S284>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_1RevCoeff;/* '<S307>/Sum4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_1RevCoeffTemp;/* '<S311>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_1RevCoeff_prev;/* '<S311>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_CoeffEngSpdEPP;/* '<S309>/Switch3' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_CoeffEngineSpeedEPP;/* '<S321>/Vector' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_MaxCoeff_1rev;/* '<S317>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_Ni6Deg_Coeff;/* '<S316>/Vector' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_Ni_1rev_Coeff;/* '<S307>/Product7' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_Ni_1rev_Coeff_Old;/* '<S303>/Unit Delay1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_k_Ni_6Deg_Coeff;/* '<S318>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_1Rev;/* '<S304>/Product2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_1RevTemp;/* '<S304>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_1Rev_prev;/* '<S304>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_6degSpd;/* '<S308>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_AvgRearWhlSpd;/* '<S91>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_AvgWhlSpd;/* '<S90>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_DiffWhlSpd;/* '<S273>/Sum' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_DiffWhlSpd1;/* '<S273>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_EPP;/* '<S305>/Product1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2EngineSpeed;/* '<S113>/Switch8' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2EngineSpeed_MCP;/* '<S113>/Switch6' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2HW_Ni_6Deg;/* '<S278>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2MtrASpd;/* '<S275>/Switch33' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2MtrA_Spd;/* '<S113>/Switch4' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2MtrB_Spd;/* '<S113>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2_EngSpd_CANFlt;/* '<S302>/ApplyFILT_1stOrderLag_flt' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2_EngSpd_CANFlt_prev;/* '<S302>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2_EngSpd_eTPU;/* '<S303>/Sum' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2_EngSpd_eTPUFltrd;/* '<S303>/ApplyFILT_1stOrderLag_flt' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Lv2_EngSpd_eTPUFltrd_prev;/* '<S303>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_MtrASpd;/* '<S78>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_MtrBSpd;/* '<S94>/Switch4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_MtrBSpdP1fPx;/* '<S276>/Switch4' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_NTurbSpd;/* '<S279>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Ni_EPPTemp;/* '<S305>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Ni_EPP_Coeff;/* '<S309>/Product6' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_Ni_EPP_prev;/* '<S305>/Unit Delay1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_RearWhlSpdFltrd;/* '<S83>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_RearWhlSpdFltrd_prev1;/* '<S77>/Unit Delay1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_SumFrntWhlSpds;/* '<S77>/Switch11' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_SumRearWhlSpds;/* '<S77>/Sum1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_TransOutSpd;/* '<S272>/Switch31' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlFLSpd;/* '<S283>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlFRSpd;/* '<S282>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlRLSpd;/* '<S281>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlRRSpd;/* '<S280>/Gain' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlSpd;/* '<S294>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlSpdFltrd;/* '<S84>/Subtraction1' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlSpdFltrdP1fPx;/* '<S273>/ApplyFILT_1stOrderLag_flt' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlSpdFltrd_prev1;/* '<S77>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_n_WhlSpdFltrd_prev1P1fPx;/* '<S273>/Unit Delay' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_CANVehSpd;/* '<S79>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_Lv2CanSigVehSpd;/* '<S79>/Switch13' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_Lv2CanSigVehSpdP1fPx;/* '<S277>/Switch13' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_VehSpdFrmFroWhlSpd;/* '<S82>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_VehSpdFrmRearWhlSpd;/* '<S81>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_VehSpdFrmRearWhlSpd1;/* '<S81>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_Bev

static VAR(float32, SSMR_VAR_INIT) VeSSMI_v_VehSpdFrmWhlSpd1;/* '<S82>/Product' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMR_b_CanVehSpd_NtGood;/* '<S112>/CanSigVehSpdFA' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMR_b_MtrB_Spd_NtGood;/* '<S140>/Logical5' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMR_b_VehSpdFA1;/* '<S111>/Logical' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMR_b_VehSpdFA2;/* '<S111>/Logical1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(boolean, SSMR_VAR_INIT) VeSSMR_b_VehSpdRatFailing;/* '<S137>/Comparison2' */

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

static VAR(float32, SSMR_VAR_INIT) VeSSMR_n_TurbSpdIntm;/* '<S205>/Switch' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMR_v_VehSpdSignd1;/* '<S119>/Switch1' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMR_v_VehSpdSignd2;/* '<S118>/Switch5' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMR_v_VehSpdSigndTemp;/* '<S118>/Switch4' */

#endif

#if Rte_SysCon_Variant_SSMR_Func

static VAR(float32, SSMR_VAR_INIT) VeSSMR_v_tempVehSpd;/* '<S119>/Product' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SSMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_SSMR
#include "MemMap.h"

VAR(DW_SSMR_ac_T, SSMR_VAR_INIT) SSMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_SSMR
#include "MemMap.h"

/* Model step function for TID1 */
#if Rte_SysCon_Variant_SSMR_Func

FUNC(void, SSMR_CODE) SSMR_MedTEB(void) /* Explicit Task: MedTEB */
{

#if Rte_SysCon_Variant_SSMR_Func

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    TeSSMR_e_CmndAxleTorqRespTyp tmpRead_4;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    TeHSER_e_RngEqnSel tmpRead_5;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    float32 rtb_Switch2_b;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    float32 rtb_Sum1_i;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    uint8 rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean VeSSMR_b_VehSpdFA;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    boolean VeSSMR_b_VehSpdRatMonitorDisabled;

#endif

#if Rte_SysCon_Variant_SSMR_Func

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
    /* Inport: '<Root>/VeSCMR_b_Lv2LOC_ECM_EPT' */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ECM_EPT_Value(&VeSSMR_b_VehSpdFA);

    /* Inport: '<Root>/VeSCMR_n_Lv2EngineSpeed' */
    (void)Rte_Read_VeSCMR_n_Lv2EngineSpeed_Value((&(VeSSMI_n_Lv2EngineSpeed)));

    /* Inport: '<Root>/VeHWIO_b_Lv2EngineSpeed_MCPFA' */
    (void)Rte_Read_VeHWIO_b_Lv2EngineSpeed_MCPFA_Value
        ((&(VeSSMI_b_Lv2EngineSpeed_MCPFA)));

    /* Inport: '<Root>/VeLTIR_b_Lv2EngineSpeed_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2EngineSpeed_FA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCMR_b_AxleTrqRespTypeFA' */
    (void)Rte_Read_VeSCMR_b_AxleTrqRespTypeFA_Value
        ((&(VeSSMI_b_AxleTrqRespTypeFA)));

    /* Inport: '<Root>/VeSRAR_b_SPIFlt' */
    (void)Rte_Read_VeSRAR_b_SPIFlt_Value((&(VeSSMI_b_Lv2SPIFlt)));

    /* Inport: '<Root>/VeHSER_e_RngEqnSel' */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value(&tmpRead_5);

    /* Inport: '<Root>/VeESPR_n_EngineSpeed_MCP' */
    (void)Rte_Read_VeESPR_n_EngineSpeed_MCP_Value((&(VeSSMI_n_Lv2EngineSpeed_MCP)));

    /* Inport: '<Root>/VeSRAR_b_SharedMemFlt' */
    (void)Rte_Read_VeSRAR_b_SharedMemFlt_Value((&(VeSSMI_b_Lv2Lv1SharedMemFlt)));

    /* Inport: '<Root>/VeSCMR_e_AxleTrqRespType' */
    (void)Rte_Read_VeSCMR_e_AxleTrqRespType_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSCMR_b_Lv2ImpendingSkid' */
    (void)Rte_Read_VeSCMR_b_Lv2ImpendingSkid_Value
        (&VeSSMR_b_VehSpdRatMonitorDisabled);

    /* Inport: '<Root>/VeCSVR_b_FrontAxleRatlFlt_FltDtct' */
    (void)Rte_Read_VeCSVR_b_FrontAxleRatlFlt_FltDtct_Value(&tmpRead_3);

    /* Inport: '<Root>/VeCSVR_b_DsblFrontAxlSpdRatCheck' */
    (void)Rte_Read_VeCSVR_b_DsblFrontAxlSpdRatCheck_Value(&tmpRead_2);

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&tmpRead_0);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead);

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_Spd_FA_Value((&(VeSSMI_b_Lv2MtrA_SpdFA)));

    /* Inport: '<S112>/CanSigVehSpdFA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2VehSpdCANC_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2VehSpdCANC_FA_Value((&(VeSSMR_b_CanVehSpd_NtGood)));

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrB_Spd_FA_Value((&(VeSSMI_b_Lv2MtrB_SpdFA)));

    /* Inport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2MtrB_Spd_Value((&(VeSSMI_n_Lv2MtrB_Spd)));

    /* Inport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2MtrA_Spd_Value((&(VeSSMI_n_Lv2MtrA_Spd)));

    /* Inport: '<Root>/VeSCMR_v_Lv2VehSpdCANC' */
    (void)Rte_Read_VeSCMR_v_Lv2VehSpdCANC_Value(&rtb_Sum1_i);

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_Func_MedTEB' */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSMR_Func_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S114>/SSMR_Func_FastTEF_StartCheckpoint ' */
    Rte_Call_SSMR_Func_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSMI_Proc'
     */
    /* Switch: '<S113>/Switch' incorporates:
     *  Constant: '<S193>/Calib'
     */
    if (KeSSMR_b_Lv2MtrB_Spd_OverdEnable)
    {
        /* Switch: '<S113>/Switch' incorporates:
         *  Constant: '<S199>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2MtrB_Spd'
         */
        VeSSMI_n_Lv2MtrB_Spd = KeSSMR_n_Lv2MtrB_Spd_OverdValue;
    }

    /* End of Switch: '<S113>/Switch' */

    /* Switch: '<S113>/Switch1' incorporates:
     *  Constant: '<S191>/Calib'
     */
    if (KeSSMR_b_Lv2MtrB_SpdFA_OverdEnable)
    {
        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S192>/Calib'
         *  Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA'
         */
        VeSSMI_b_Lv2MtrB_SpdFA = KeSSMR_b_Lv2MtrB_SpdFA_OverdValue;
    }

    /* End of Switch: '<S113>/Switch1' */

    /* Logic: '<S113>/Logical4' */
    VeSSMI_b_Lv2Lv1DsblSpdRatCheck = (tmpRead_2 || tmpRead_3);

    /* Switch: '<S113>/Switch2' incorporates:
     *  Constant: '<S186>/Calib'
     */
    if (KeSSMR_b_Lv2Lv1SharedMemFlt_OvrdEnable)
    {
        /* Switch: '<S113>/Switch2' incorporates:
         *  Constant: '<S187>/Calib'
         *  Inport: '<Root>/VeSRAR_b_SharedMemFlt'
         */
        VeSSMI_b_Lv2Lv1SharedMemFlt = KeSSMR_b_Lv2Lv1SharedMemFlt_OvrdValue;
    }

    /* End of Switch: '<S113>/Switch2' */

    /* Switch: '<S113>/Switch4' incorporates:
     *  Constant: '<S190>/Calib'
     */
    if (KeSSMR_b_Lv2MtrA_Spd_OverdEnable)
    {
        /* Switch: '<S113>/Switch4' incorporates:
         *  Constant: '<S198>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2MtrA_Spd'
         */
        VeSSMI_n_Lv2MtrA_Spd = KeSSMR_n_Lv2MtrA_Spd_OverdValue;
    }

    /* End of Switch: '<S113>/Switch4' */

    /* Switch: '<S113>/Switch5' incorporates:
     *  Constant: '<S188>/Calib'
     */
    if (KeSSMR_b_Lv2MtrA_SpdFA_OverdEnable)
    {
        /* Switch: '<S113>/Switch5' incorporates:
         *  Constant: '<S189>/Calib'
         *  Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA'
         */
        VeSSMI_b_Lv2MtrA_SpdFA = KeSSMR_b_Lv2MtrA_SpdFA_OverdValue;
    }

    /* End of Switch: '<S113>/Switch5' */

    /* Switch: '<S113>/Switch6' incorporates:
     *  Constant: '<S185>/Calib'
     */
    if (KeSSMR_b_Lv2EngineSpeed_MCP_OverdEnable)
    {
        /* Switch: '<S113>/Switch6' incorporates:
         *  Constant: '<S197>/Calib'
         *  Inport: '<Root>/VeESPR_n_EngineSpeed_MCP'
         */
        VeSSMI_n_Lv2EngineSpeed_MCP = KeSSMR_n_Lv2EngineSpeed_MCP_OverdValue;
    }

    /* End of Switch: '<S113>/Switch6' */

    /* Switch: '<S113>/Switch7' incorporates:
     *  Constant: '<S194>/Calib'
     */
    if (KeSSMR_b_Lv2SPIFlt_OverdEnable)
    {
        /* Switch: '<S113>/Switch7' incorporates:
         *  Constant: '<S195>/Calib'
         *  Inport: '<Root>/VeSRAR_b_SPIFlt'
         */
        VeSSMI_b_Lv2SPIFlt = KeSSMR_b_Lv2SPIFlt_OverdValue;
    }

    /* End of Switch: '<S113>/Switch7' */

    /* Logic: '<S113>/Logical1' */
    VeSSMI_b_ClrDiagCntrTmrs = ((tmpRead || tmpRead_0) || tmpRead_1);

    /* Switch: '<S113>/Switch10' incorporates:
     *  Constant: '<S180>/Calib'
     */
    if (KeSSMR_b_AxlTrqRespTypFA_OverdEnable)
    {
        /* Switch: '<S113>/Switch10' incorporates:
         *  Constant: '<S181>/Calib'
         *  Inport: '<Root>/VeSCMR_b_AxleTrqRespTypeFA'
         */
        VeSSMI_b_AxleTrqRespTypeFA = KeSSMR_b_AxlTrqRespTypFA_OverdValue;
    }

    /* End of Switch: '<S113>/Switch10' */

    /* Logic: '<S113>/Logical3' */
    VeSSMI_b_Lv2EngineSpeedFA = (tmpRead_6 || VeSSMR_b_VehSpdFA);

    /* Switch: '<S113>/Switch9' incorporates:
     *  Constant: '<S182>/Calib'
     */
    if (KeSSMR_b_BufferedSpdFA_OverdEnable)
    {
        /* Switch: '<S113>/Switch9' incorporates:
         *  Constant: '<S183>/Calib'
         *  Inport: '<Root>/VeHWIO_b_Lv2EngineSpeed_MCPFA'
         */
        VeSSMI_b_Lv2EngineSpeed_MCPFA = KeSSMR_b_BufferedSpdFA_OverdValue;
    }

    /* End of Switch: '<S113>/Switch9' */

    /* Switch: '<S113>/Switch8' incorporates:
     *  Constant: '<S184>/Calib'
     */
    if (KeSSMR_b_EngineSpeed_OverdEnable)
    {
        /* Switch: '<S113>/Switch8' incorporates:
         *  Constant: '<S196>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2EngineSpeed'
         */
        VeSSMI_n_Lv2EngineSpeed = KeSSMR_n_EngineSpeed_OverdValue;
    }

    /* End of Switch: '<S113>/Switch8' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSMD_VehSpdRatCheck'
     */
    /* If: '<S132>/If' incorporates:
     *  Constant: '<S141>/Constant'
     *  Constant: '<S142>/Constant'
     *  RelationalOperator: '<S132>/Comparison2'
     *  RelationalOperator: '<S132>/Comparison3'
     */
    if (((uint32)tmpRead_5) == CeHSER_e_UseM2Eqn)
    {
        /* Outputs for IfAction SubSystem: '<S132>/Mode_M2' incorporates:
         *  ActionPort: '<S152>/Action Port'
         */
        /* Switch: '<S152>/Switch' */
        if (VeSSMI_b_Lv2EngineSpeed_MCPFA)
        {
            /* Switch: '<S152>/Switch' */
            VeSSMD_n_EngSpd = VeSSMI_n_Lv2EngineSpeed;
        }
        else
        {
            /* Switch: '<S152>/Switch' */
            VeSSMD_n_EngSpd = VeSSMI_n_Lv2EngineSpeed_MCP;
        }

        /* End of Switch: '<S152>/Switch' */

        /* Sum: '<S152>/Sum1' incorporates:
         *  Constant: '<S146>/Calib'
         *  Constant: '<S152>/Constant'
         *  Product: '<S152>/Product'
         *  Sum: '<S152>/Sum'
         */
        VeSSMD_n_tempna = ((KeSSMR_r_BetaValue + 1.0F) * VeSSMD_n_EngSpd) -
            VeSSMI_n_Lv2MtrA_Spd;

        /* Outputs for Atomic SubSystem: '<S152>/LV2_DivideWithProtection' */
        /* Switch: '<S154>/Switch1' incorporates:
         *  Constant: '<S146>/Calib'
         *  Constant: '<S154>/Constant Value'
         *  Constant: '<S154>/Constant Value1'
         *  Constant: '<S154>/Constant Value2'
         *  Constant: '<S154>/Constant Value3'
         *  Logic: '<S154>/AND'
         *  RelationalOperator: '<S154>/Greater Than or Equal '
         *  RelationalOperator: '<S154>/Greater Than or Equal 1'
         *  RelationalOperator: '<S154>/Not Equal'
         *  RelationalOperator: '<S154>/Not Equal1'
         *  Switch: '<S154>/Switch2'
         *  Switch: '<S154>/Switch3'
         */
        if ((VeSSMD_n_tempna != 0.0F) && (KeSSMR_r_BetaValue != 0.0F))
        {
            /* Switch: '<S154>/Switch1' incorporates:
             *  Product: '<S154>/Division'
             */
            VeSSMD_n_M2noSpd = VeSSMD_n_tempna / KeSSMR_r_BetaValue;
        }
        else if (VeSSMD_n_tempna > 0.0F)
        {
            /* Switch: '<S154>/Switch2' incorporates:
             *  Constant: '<S154>/MAXFLOAT'
             *  Switch: '<S154>/Switch1'
             */
            VeSSMD_n_M2noSpd = 3.402823466E+38F;
        }
        else if (VeSSMD_n_tempna < 0.0F)
        {
            /* Switch: '<S154>/Switch3' incorporates:
             *  Constant: '<S154>/MINFLOAT'
             *  Switch: '<S154>/Switch1'
             *  Switch: '<S154>/Switch2'
             */
            VeSSMD_n_M2noSpd = -3.402823466E+38F;
        }
        else
        {
            /* Switch: '<S154>/Switch1' incorporates:
             *  Constant: '<S154>/Constant Value4'
             *  Switch: '<S154>/Switch2'
             *  Switch: '<S154>/Switch3'
             */
            VeSSMD_n_M2noSpd = 0.0F;
        }

        /* End of Switch: '<S154>/Switch1' */
        /* End of Outputs for SubSystem: '<S152>/LV2_DivideWithProtection' */

        /* Merge: '<S132>/Merge' incorporates:
         *  SignalConversion: '<S152>/SignalConversion'
         */
        VeSSMD_n_noSpd = VeSSMD_n_M2noSpd;

        /* End of Outputs for SubSystem: '<S132>/Mode_M2' */
    }
    else
    {
        if (((uint32)tmpRead_5) == CeHSER_e_UseG2Eqn)
        {
            /* Outputs for IfAction SubSystem: '<S132>/Mode_G2' incorporates:
             *  ActionPort: '<S151>/Action Port'
             */
            /* Outputs for Atomic SubSystem: '<S151>/LV2_DivideWithProtection' */
            /* Switch: '<S153>/Switch1' incorporates:
             *  Constant: '<S146>/Calib'
             *  Constant: '<S153>/Constant Value'
             *  Constant: '<S153>/Constant Value1'
             *  Constant: '<S153>/Constant Value2'
             *  Constant: '<S153>/Constant Value3'
             *  Gain: '<S151>/Gain1'
             *  Logic: '<S153>/AND'
             *  RelationalOperator: '<S153>/Greater Than or Equal '
             *  RelationalOperator: '<S153>/Greater Than or Equal 1'
             *  RelationalOperator: '<S153>/Not Equal'
             *  RelationalOperator: '<S153>/Not Equal1'
             *  Switch: '<S153>/Switch2'
             *  Switch: '<S153>/Switch3'
             */
            if (((-VeSSMI_n_Lv2MtrA_Spd) != 0.0F) && (KeSSMR_r_BetaValue != 0.0F))
            {
                /* Switch: '<S153>/Switch1' incorporates:
                 *  Product: '<S153>/Division'
                 */
                VeSSMD_n_G2noSpd = (-VeSSMI_n_Lv2MtrA_Spd) / KeSSMR_r_BetaValue;
            }
            else if ((-VeSSMI_n_Lv2MtrA_Spd) > 0.0F)
            {
                /* Switch: '<S153>/Switch2' incorporates:
                 *  Constant: '<S153>/MAXFLOAT'
                 *  Switch: '<S153>/Switch1'
                 */
                VeSSMD_n_G2noSpd = 3.402823466E+38F;
            }
            else if ((-VeSSMI_n_Lv2MtrA_Spd) < 0.0F)
            {
                /* Switch: '<S153>/Switch3' incorporates:
                 *  Constant: '<S153>/MINFLOAT'
                 *  Switch: '<S153>/Switch1'
                 *  Switch: '<S153>/Switch2'
                 */
                VeSSMD_n_G2noSpd = -3.402823466E+38F;
            }
            else
            {
                /* Switch: '<S153>/Switch1' incorporates:
                 *  Constant: '<S153>/Constant Value4'
                 *  Switch: '<S153>/Switch2'
                 *  Switch: '<S153>/Switch3'
                 */
                VeSSMD_n_G2noSpd = 0.0F;
            }

            /* End of Switch: '<S153>/Switch1' */
            /* End of Outputs for SubSystem: '<S151>/LV2_DivideWithProtection' */

            /* Merge: '<S132>/Merge' incorporates:
             *  SignalConversion: '<S151>/SignalConversion'
             */
            VeSSMD_n_noSpd = VeSSMD_n_G2noSpd;

            /* End of Outputs for SubSystem: '<S132>/Mode_G2' */
        }
    }

    /* End of If: '<S132>/If' */

    /* Outputs for Atomic SubSystem: '<S132>/LV2_LowpassT_Reset_Enabled' */
    /* Switch: '<S166>/Switch2' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_Switch2_b = SSMR_ac_DW.VeSSMD_v_FltrdnoVehSpd_prev;

    /* Switch: '<S150>/Switch1' incorporates:
     *  Constant: '<S143>/Calib'
     *  Constant: '<S148>/Calib'
     *  MinMax: '<S150>/Maximum'
     *  Product: '<S150>/Multiplication'
     *  Product: '<S150>/Multiplication1'
     *  Sum: '<S150>/Subtraction'
     *  Sum: '<S150>/Summation'
     */
    VeSSMD_v_FltrdnoSpd = (((VeSSMD_n_noSpd - rtb_Switch2_b) *
                            KeSSMR_t_noSpeedFiltdT) * (1.0F / fmaxf
                            (KeSSMR_k_noSpeedFiltCoef, KeSSMR_t_noSpeedFiltdT)))
        + rtb_Switch2_b;

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    SSMR_ac_DW.VeSSMD_v_FltrdnoVehSpd_prev = VeSSMD_v_FltrdnoSpd;

    /* End of Outputs for SubSystem: '<S132>/LV2_LowpassT_Reset_Enabled' */

    /* Product: '<S132>/Product3' incorporates:
     *  Constant: '<S132>/Constant Value'
     *  Constant: '<S145>/Calib'
     */
    VeSSMD_v_NOtempSpd = (VeSSMD_v_FltrdnoSpd * KeSSMR_l_WhlRadius) * 0.377F;

    /* Outputs for Atomic SubSystem: '<S132>/LV2_DivideWithProtection' */
    /* Switch: '<S149>/Switch1' incorporates:
     *  Constant: '<S147>/Calib'
     *  Constant: '<S149>/Constant Value'
     *  Constant: '<S149>/Constant Value1'
     *  Constant: '<S149>/Constant Value2'
     *  Constant: '<S149>/Constant Value3'
     *  Logic: '<S149>/AND'
     *  RelationalOperator: '<S149>/Greater Than or Equal 1'
     *  RelationalOperator: '<S149>/GreaterThanorEqual '
     *  RelationalOperator: '<S149>/Not Equal'
     *  RelationalOperator: '<S149>/Not Equal1'
     *  Switch: '<S149>/Switch2'
     *  Switch: '<S149>/Switch3'
     */
    if ((VeSSMD_v_NOtempSpd != 0.0F) && (KeSSMR_r_FDR != 0.0F))
    {
        /* Switch: '<S149>/Switch1' incorporates:
         *  Product: '<S149>/Division'
         */
        VeSSMD_v_MtrAEngSpd_VehSpd = VeSSMD_v_NOtempSpd / KeSSMR_r_FDR;
    }
    else if (VeSSMD_v_NOtempSpd > 0.0F)
    {
        /* Switch: '<S149>/Switch2' incorporates:
         *  Constant: '<S149>/MAXFLOAT'
         *  Switch: '<S149>/Switch1'
         */
        VeSSMD_v_MtrAEngSpd_VehSpd = 3.402823466E+38F;
    }
    else if (VeSSMD_v_NOtempSpd < 0.0F)
    {
        /* Switch: '<S149>/Switch3' incorporates:
         *  Constant: '<S149>/MINFLOAT'
         *  Switch: '<S149>/Switch1'
         *  Switch: '<S149>/Switch2'
         */
        VeSSMD_v_MtrAEngSpd_VehSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S149>/Switch1' incorporates:
         *  Constant: '<S149>/Constant Value4'
         *  Switch: '<S149>/Switch2'
         *  Switch: '<S149>/Switch3'
         */
        VeSSMD_v_MtrAEngSpd_VehSpd = 0.0F;
    }

    /* End of Switch: '<S149>/Switch1' */
    /* End of Outputs for SubSystem: '<S132>/LV2_DivideWithProtection' */

    /* Outputs for Atomic SubSystem: '<S133>/LV2_LowpassT_Reset_Enabled' */
    /* Switch: '<S162>/Switch1' incorporates:
     *  Constant: '<S155>/Calib'
     *  Constant: '<S160>/Calib'
     *  MinMax: '<S162>/Maximum'
     *  Product: '<S162>/Multiplication'
     *  Product: '<S162>/Multiplication1'
     *  Sum: '<S162>/Subtraction'
     *  Sum: '<S162>/Summation'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    SSMR_ac_DW.VeSSMR_n_MtrBSpdFltrd_prev += ((VeSSMI_n_Lv2MtrB_Spd -
        SSMR_ac_DW.VeSSMR_n_MtrBSpdFltrd_prev) * KeSSMR_t_MtrBSpdFiltdT) * (1.0F
        / fmaxf(KeSSMR_k_MtrBSpdFiltCoef, KeSSMR_t_MtrBSpdFiltdT));

    /* End of Outputs for SubSystem: '<S133>/LV2_LowpassT_Reset_Enabled' */

    /* Product: '<S133>/Product3' incorporates:
     *  Constant: '<S133>/Constant Value'
     *  Constant: '<S157>/Calib'
     *  Constant: '<S158>/Calib'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    VeSSMD_v_MtrBSpdVehTemp = ((SSMR_ac_DW.VeSSMR_n_MtrBSpdFltrd_prev *
        KeSSMR_r_All_NoFromNb_NCnDep) * 0.377F) * KeSSMR_l_WhlRadius;

    /* Outputs for Atomic SubSystem: '<S133>/LV2_DivideWithProtection' */
    /* Switch: '<S161>/Switch1' incorporates:
     *  Constant: '<S159>/Calib'
     *  Constant: '<S161>/Constant Value'
     *  Constant: '<S161>/Constant Value1'
     *  Constant: '<S161>/Constant Value2'
     *  Constant: '<S161>/Constant Value3'
     *  Logic: '<S161>/AND'
     *  RelationalOperator: '<S161>/Greater Than or Equal '
     *  RelationalOperator: '<S161>/Greater Than or Equal 1'
     *  RelationalOperator: '<S161>/Not Equal'
     *  RelationalOperator: '<S161>/Not Equal1'
     *  Switch: '<S161>/Switch2'
     *  Switch: '<S161>/Switch3'
     */
    if ((VeSSMD_v_MtrBSpdVehTemp != 0.0F) && (KeSSMR_r_FDR != 0.0F))
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Product: '<S161>/Division'
         */
        VeSSMD_v_MtrBVehSpdFltrd = VeSSMD_v_MtrBSpdVehTemp / KeSSMR_r_FDR;
    }
    else if (VeSSMD_v_MtrBSpdVehTemp > 0.0F)
    {
        /* Switch: '<S161>/Switch2' incorporates:
         *  Constant: '<S161>/MAXFLOAT'
         *  Switch: '<S161>/Switch1'
         */
        VeSSMD_v_MtrBVehSpdFltrd = 3.402823466E+38F;
    }
    else if (VeSSMD_v_MtrBSpdVehTemp < 0.0F)
    {
        /* Switch: '<S161>/Switch3' incorporates:
         *  Constant: '<S161>/MINFLOAT'
         *  Switch: '<S161>/Switch1'
         *  Switch: '<S161>/Switch2'
         */
        VeSSMD_v_MtrBVehSpdFltrd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S161>/Switch1' incorporates:
         *  Constant: '<S161>/Constant Value4'
         *  Switch: '<S161>/Switch2'
         *  Switch: '<S161>/Switch3'
         */
        VeSSMD_v_MtrBVehSpdFltrd = 0.0F;
    }

    /* End of Switch: '<S161>/Switch1' */
    /* End of Outputs for SubSystem: '<S133>/LV2_DivideWithProtection' */

    /* Outputs for Atomic SubSystem: '<S136>/LV2_LowpassT_Reset_Enabled' */
    /* Switch: '<S166>/Switch2' incorporates:
     *  UnitDelay: '<S166>/Unit Delay'
     */
    rtb_Switch2_b = SSMR_ac_DW.VeSSMD_v_CanVehSpdFltrd_prev;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSMI_Proc'
     */
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S163>/Calib'
     *  Constant: '<S165>/Calib'
     *  Inport: '<S113>/VeSCMR_v_Lv2VehSpdCANC'
     *  MinMax: '<S166>/Maximum'
     *  Product: '<S166>/Multiplication'
     *  Product: '<S166>/Multiplication1'
     *  Sum: '<S166>/Subtraction'
     *  Sum: '<S166>/Summation'
     */
    VeSSMD_v_CanVehSpdFltrd = (((rtb_Sum1_i - rtb_Switch2_b) *
        KeSSMR_t_CANVehSpdFiltdT) * (1.0F / fmaxf(KeSSMR_k_CANVehSpdFiltCoef,
        KeSSMR_t_CANVehSpdFiltdT))) + rtb_Switch2_b;

    /* Update for UnitDelay: '<S166>/Unit Delay' */
    SSMR_ac_DW.VeSSMD_v_CanVehSpdFltrd_prev = VeSSMD_v_CanVehSpdFltrd;

    /* End of Outputs for SubSystem: '<S136>/LV2_LowpassT_Reset_Enabled' */

    /* Logic: '<S140>/Logical1' */
    VeSSMD_b_EngSpd_FA = ((VeSSMI_b_Lv2EngineSpeedFA) &&
                          (VeSSMI_b_Lv2EngineSpeed_MCPFA));

    /* Logic: '<S140>/Logical8' */
    VeSSMD_b_MtrASpd_NtGood = (((VeSSMI_b_Lv2SPIFlt) || (VeSSMI_b_Lv2MtrA_SpdFA))
        || (VeSSMD_b_EngSpd_FA));

    /* Logic: '<S140>/Logical5' */
    VeSSMR_b_MtrB_Spd_NtGood = ((VeSSMI_b_Lv2MtrB_SpdFA) ||
        (VeSSMI_b_Lv2Lv1SharedMemFlt));

    /* Switch: '<S139>/Switch' incorporates:
     *  Constant: '<S179>/Calib'
     *  RelationalOperator: '<S139>/Comparison2'
     *  Switch: '<S139>/Switch2'
     */
    if (VeSSMR_b_MtrB_Spd_NtGood)
    {
        /* Switch: '<S139>/Switch1' */
        if (!VeSSMD_b_MtrASpd_NtGood)
        {
            /* Switch: '<S139>/Switch3' incorporates:
             *  Constant: '<S178>/Calib'
             *  RelationalOperator: '<S139>/Comparison1'
             */
            if (VeSSMD_v_MtrAEngSpd_VehSpd < KeSSMR_n_MtrASpdForSignedVehSpd)
            {
                /* Switch: '<S139>/Switch' incorporates:
                 *  Constant: '<S139>/Constant Value3'
                 *  Switch: '<S139>/Switch1'
                 */
                VeSSMD_v_SpdSignMulFactr = -1.0F;
            }
            else
            {
                /* Switch: '<S139>/Switch' incorporates:
                 *  Constant: '<S139>/Constant Value4'
                 *  Switch: '<S139>/Switch1'
                 */
                VeSSMD_v_SpdSignMulFactr = 1.0F;
            }

            /* End of Switch: '<S139>/Switch3' */
        }

        /* End of Switch: '<S139>/Switch1' */
    }
    else if (VeSSMD_v_MtrBVehSpdFltrd < KeSSMR_n_MtrBSpdForSignedVehSpd)
    {
        /* Switch: '<S139>/Switch2' incorporates:
         *  Constant: '<S139>/Constant Value'
         *  Switch: '<S139>/Switch'
         */
        VeSSMD_v_SpdSignMulFactr = -1.0F;
    }
    else
    {
        /* Switch: '<S139>/Switch' incorporates:
         *  Constant: '<S139>/Constant Value2'
         *  Switch: '<S139>/Switch2'
         */
        VeSSMD_v_SpdSignMulFactr = 1.0F;
    }

    /* End of Switch: '<S139>/Switch' */

    /* Product: '<S136>/Product' */
    VeSSMD_v_CanSigVehSpdFltrd = VeSSMD_v_CanVehSpdFltrd *
        VeSSMD_v_SpdSignMulFactr;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/SSMI_Proc'
     */
    /* Logic: '<S112>/Logical5' incorporates:
     *  Constant: '<S135>/Constant'
     *  Inport: '<Root>/VeSCMR_e_AxleTrqRespType'
     *  Inport: '<S113>/VeSCMR_e_AxleTrqRespType'
     *  RelationalOperator: '<S112>/Comparison1'
     */
    VeSSMD_b_AxlTrqFA = ((CeSSMR_e_Inactive != ((uint32)tmpRead_4)) ||
                         (VeSSMI_b_AxleTrqRespTypeFA));

    /* Logic: '<S112>/Logical1' incorporates:
     *  Inport: '<S113>/VeSCMR_b_Lv2ImpendingSkid'
     *  UnitDelay: '<S112>/Unit Delay1'
     */
    VeSSMR_b_VehSpdRatMonitorDisabled = ((((((VeSSMI_b_Lv2Lv1DsblSpdRatCheck) ||
        (VeSSMR_b_CanVehSpd_NtGood)) || (VeSSMR_b_MtrB_Spd_NtGood)) ||
        (SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev)) ||
        VeSSMR_b_VehSpdRatMonitorDisabled) || (VeSSMD_b_AxlTrqFA));

    /* Logic: '<S112>/Logical3' */
    VeSSMD_b_tempDsbld = !VeSSMR_b_VehSpdRatMonitorDisabled;

    /* Logic: '<S112>/Logical2' */
    VeSSMD_b_VehSpdRatMonitorEnbld = ((VeSSMD_b_tempDsbld) ||
        (VeSSMI_b_ClrDiagCntrTmrs));

    /* If: '<S112>/If' */
    if (VeSSMD_b_VehSpdRatMonitorEnbld)
    {
        /* Outputs for IfAction SubSystem: '<S112>/Lv2VehSpdRatCheck' incorporates:
         *  ActionPort: '<S137>/Action Port'
         */
        /* Sum: '<S137>/Sum1' */
        rtb_Sum1_i = VeSSMD_v_CanSigVehSpdFltrd - VeSSMD_v_MtrBVehSpdFltrd;

        /* Switch: '<S170>/LV2_Abs_switch' incorporates:
         *  Constant: '<S170>/Constant Value1'
         *  Product: '<S170>/Product'
         *  RelationalOperator: '<S170>/Comparison'
         */
        if (rtb_Sum1_i < 0.0F)
        {
            rtb_Sum1_i = -rtb_Sum1_i;
        }

        /* End of Switch: '<S170>/LV2_Abs_switch' */

        /* RelationalOperator: '<S137>/Comparison2' incorporates:
         *  Constant: '<S169>/Calib'
         */
        VeSSMR_b_VehSpdRatFailing = (KeSSMR_v_ErrorVehSpdLim < rtb_Sum1_i);

        /* Switch: '<S171>/dec_if_Ok_else_inc' incorporates:
         *  MinMax: '<S171>/FixPtMinax'
         *  UnitDelay: '<S171>/Unit Delay2'
         */
        if (VeSSMR_b_VehSpdRatFailing)
        {
            /* Sum: '<S171>/Inc_Cntr' incorporates:
             *  Constant: '<S167>/Calib'
             *  UnitDelay: '<S171>/Unit Delay2'
             */
            rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c = (uint8)(((uint32)
                SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev) + ((uint32)
                KeSSMR_Cnt_Lv2SpdRatFailCntrInc));

            /* Switch: '<S171>/Switch1' incorporates:
             *  RelationalOperator: '<S171>/Greater  Than1'
             *  UnitDelay: '<S171>/Unit Delay2'
             */
            if (rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c <
                    SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev)
            {
                /* Switch: '<S171>/dec_if_Ok_else_inc' incorporates:
                 *  Constant: '<S171>/Constant Value3'
                 */
                rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c = MAX_uint8_T;
            }

            /* End of Switch: '<S171>/Switch1' */
        }
        else
        {
            if (((sint32)SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev) <= 1)
            {
                /* MinMax: '<S171>/FixPtMinax' */
                SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev = 1U;
            }

            /* Switch: '<S171>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S137>/Fixed Decrement1'
             *  Sum: '<S171>/Dec_Cntr'
             */
            rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c = (uint8)((sint32)(((sint32)
                SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev) - 1));
        }

        /* End of Switch: '<S171>/dec_if_Ok_else_inc' */

        /* Switch: '<S171>/Switch2' incorporates:
         *  Constant: '<S168>/Calib'
         *  Constant: '<S171>/Constant Value2'
         *  Logic: '<S171>/Cntr_fail'
         *  RelationalOperator: '<S171>/Enough_counts_to_Fail'
         *  Switch: '<S171>/Switch3'
         *  UnitDelay: '<S171>/Unit Delay1'
         */
        if (VeSSMI_b_ClrDiagCntrTmrs)
        {
            /* MinMax: '<S171>/FixPtMinax' incorporates:
             *  Constant: '<S171>/Constant Value1'
             *  UnitDelay: '<S171>/Unit Delay2'
             */
            SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev = 0U;
            SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Lv2_prev = false;
        }
        else
        {
            /* MinMax: '<S171>/FixPtMinax' incorporates:
             *  UnitDelay: '<S171>/Unit Delay2'
             */
            SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev =
                rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c;
            SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Lv2_prev =
                ((rtb_VeSSMR_Cnt_VehSpdRatFailed_Lv2_inc_c >=
                  KeSSMR_Cnt_Lv2SpdRatFailCntrLim) ||
                 (SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Lv2_prev));
        }

        /* End of Switch: '<S171>/Switch2' */
        /* End of Outputs for SubSystem: '<S112>/Lv2VehSpdRatCheck' */
    }

    /* End of If: '<S112>/If' */

    /* Logic: '<S138>/Logical5' incorporates:
     *  Constant: '<S175>/Calib'
     *  UnitDelay: '<S171>/Unit Delay1'
     */
    SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev = ((KeSSMR_b_Lv2RatMonitorEnable) &&
        (SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Lv2_prev));

    /* Outputs for Enabled SubSystem: '<S138>/Event_CM_VehSpdPerf_ReportTestFailed1' incorporates:
     *  EnablePort: '<S173>/Enable'
     */
    if (SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev)
    {
        /* DataStoreWrite: '<S173>/VeDFIR_FaultSts_CM_VehSpdPerf' incorporates:
         *  Constant: '<S176>/Constant'
         */
        SSMR_ac_DW.VeDFIR_FaultSts_CM_VehSpdPerf = CeDFIB_e_Fail;
    }

    /* End of Outputs for SubSystem: '<S138>/Event_CM_VehSpdPerf_ReportTestFailed1' */

    /* Logic: '<S138>/Logical2' */
    VeSSMD_b_RatFailNot = !SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev;

    /* RelationalOperator: '<S138>/Comparison8' incorporates:
     *  Constant: '<S138>/Backward_Movement'
     *  UnitDelay: '<S171>/Unit Delay2'
     */
    VeSSMD_b_CntNtFail = (((sint32)
                           SSMR_ac_DW.VeSSMR_Cnt_VehSpdRatFailed_Lv2_prev) == 0);

    /* Logic: '<S138>/Logical' */
    VeSSMD_b_DTCTestPassed = ((VeSSMD_b_RatFailNot) && (VeSSMD_b_CntNtFail));

    /* Outputs for Enabled SubSystem: '<S138>/Event_CM_VehSpdPerf_ReportTestPassed2' incorporates:
     *  EnablePort: '<S174>/Enable'
     */
    if (VeSSMD_b_DTCTestPassed)
    {
        /* DataStoreWrite: '<S174>/VeDFIR_FaultSts_CM_VehSpdPerf' incorporates:
         *  Constant: '<S177>/Constant'
         */
        SSMR_ac_DW.VeDFIR_FaultSts_CM_VehSpdPerf = CeDFIB_e_Pass;
    }

    /* End of Outputs for SubSystem: '<S138>/Event_CM_VehSpdPerf_ReportTestPassed2' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Calc_Lv2VehSpd'
     */
    /* Logic: '<S111>/Logical' */
    VeSSMR_b_VehSpdFA1 = (((VeSSMD_b_MtrASpd_NtGood) &&
                           (VeSSMR_b_CanVehSpd_NtGood)) &&
                          (VeSSMR_b_MtrB_Spd_NtGood));

    /* Logic: '<S111>/Logical1' */
    VeSSMR_b_VehSpdFA2 = ((SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev) &&
                          (VeSSMD_b_MtrASpd_NtGood));

    /* Logic: '<S111>/Logical2' */
    VeSSMR_b_VehSpdFA = ((VeSSMR_b_VehSpdFA1) || (VeSSMR_b_VehSpdFA2));

    /* Sum: '<S118>/Sum1' */
    VeSSMC_v_DiffVehSign1 = VeSSMD_v_CanSigVehSpdFltrd -
        VeSSMD_v_MtrAEngSpd_VehSpd;

    /* Switch: '<S126>/LV2_Abs_switch' incorporates:
     *  Constant: '<S126>/Constant Value1'
     *  RelationalOperator: '<S126>/Comparison'
     */
    if (VeSSMC_v_DiffVehSign1 < 0.0F)
    {
        /* Switch: '<S129>/LV2_Abs_switch' incorporates:
         *  Product: '<S126>/Product'
         */
        VeSSMD_v_VehSpd = -VeSSMC_v_DiffVehSign1;
    }
    else
    {
        /* Switch: '<S129>/LV2_Abs_switch' */
        VeSSMD_v_VehSpd = VeSSMC_v_DiffVehSign1;
    }

    /* End of Switch: '<S126>/LV2_Abs_switch' */

    /* Sum: '<S118>/Sum2' */
    VeSSMC_v_DiffVehSign2 = VeSSMD_v_MtrBVehSpdFltrd -
        VeSSMD_v_MtrAEngSpd_VehSpd;

    /* Switch: '<S127>/LV2_Abs_switch' incorporates:
     *  Constant: '<S127>/Constant Value1'
     *  RelationalOperator: '<S127>/Comparison'
     */
    if (VeSSMC_v_DiffVehSign2 < 0.0F)
    {
        /* Switch: '<S130>/LV2_Abs_switch' incorporates:
         *  Product: '<S127>/Product'
         */
        rtb_Sum1_i = -VeSSMC_v_DiffVehSign2;
    }
    else
    {
        /* Switch: '<S130>/LV2_Abs_switch' */
        rtb_Sum1_i = VeSSMC_v_DiffVehSign2;
    }

    /* End of Switch: '<S127>/LV2_Abs_switch' */

    /* Switch: '<S128>/Switch' incorporates:
     *  RelationalOperator: '<S128>/Comparison'
     */
    if (VeSSMD_v_VehSpd < rtb_Sum1_i)
    {
        /* Switch: '<S128>/Switch' */
        VeSSMC_v_MinDiffVehSpd = VeSSMD_v_VehSpd;
    }
    else
    {
        /* Switch: '<S128>/Switch' */
        VeSSMC_v_MinDiffVehSpd = rtb_Sum1_i;
    }

    /* End of Switch: '<S128>/Switch' */

    /* RelationalOperator: '<S118>/Comparison1' */
    VeSSMC_b_CheckSrc = (VeSSMC_v_MinDiffVehSpd != rtb_Sum1_i);

    /* Switch: '<S118>/Switch4' */
    if (VeSSMC_b_CheckSrc)
    {
        /* Switch: '<S118>/Switch4' */
        VeSSMR_v_VehSpdSigndTemp = VeSSMD_v_CanSigVehSpdFltrd;
    }
    else
    {
        /* Switch: '<S118>/Switch4' */
        VeSSMR_v_VehSpdSigndTemp = VeSSMD_v_MtrBVehSpdFltrd;
    }

    /* End of Switch: '<S118>/Switch4' */

    /* Switch: '<S118>/Switch5' */
    if (VeSSMD_b_MtrASpd_NtGood)
    {
        /* Switch: '<S118>/Switch5' incorporates:
         *  Constant: '<S121>/Calib'
         */
        VeSSMR_v_VehSpdSignd2 = KeSSMR_n_DfltVehSpdErrorValue;
    }
    else
    {
        /* Switch: '<S118>/Switch5' */
        VeSSMR_v_VehSpdSignd2 = VeSSMR_v_VehSpdSigndTemp;
    }

    /* End of Switch: '<S118>/Switch5' */

    /* Switch: '<S130>/LV2_Abs_switch' incorporates:
     *  Constant: '<S130>/Constant Value1'
     *  RelationalOperator: '<S130>/Comparison'
     */
    if (VeSSMD_v_CanSigVehSpdFltrd < 0.0F)
    {
        /* Switch: '<S130>/LV2_Abs_switch' incorporates:
         *  Product: '<S130>/Product'
         */
        rtb_Sum1_i = -VeSSMD_v_CanSigVehSpdFltrd;
    }
    else
    {
        /* Switch: '<S130>/LV2_Abs_switch' */
        rtb_Sum1_i = VeSSMD_v_CanSigVehSpdFltrd;
    }

    /* End of Switch: '<S130>/LV2_Abs_switch' */

    /* Switch: '<S129>/LV2_Abs_switch' incorporates:
     *  Constant: '<S129>/Constant Value1'
     *  RelationalOperator: '<S129>/Comparison'
     */
    if (VeSSMD_v_MtrBVehSpdFltrd < 0.0F)
    {
        /* Switch: '<S129>/LV2_Abs_switch' incorporates:
         *  Product: '<S129>/Product'
         */
        VeSSMD_v_VehSpd = -VeSSMD_v_MtrBVehSpdFltrd;
    }
    else
    {
        /* Switch: '<S129>/LV2_Abs_switch' */
        VeSSMD_v_VehSpd = VeSSMD_v_MtrBVehSpdFltrd;
    }

    /* End of Switch: '<S129>/LV2_Abs_switch' */

    /* Switch: '<S131>/Switch' incorporates:
     *  RelationalOperator: '<S131>/Comparison'
     */
    if (rtb_Sum1_i > VeSSMD_v_VehSpd)
    {
        /* Switch: '<S131>/Switch' */
        VeSSMD_v_VehSpd = rtb_Sum1_i;
    }

    /* End of Switch: '<S131>/Switch' */

    /* Product: '<S119>/Product' */
    VeSSMR_v_tempVehSpd = VeSSMD_v_SpdSignMulFactr * VeSSMD_v_VehSpd;

    /* Switch: '<S119>/Switch1' incorporates:
     *  Switch: '<S119>/Switch'
     */
    if (VeSSMI_b_Lv2Lv1DsblSpdRatCheck)
    {
        /* Switch: '<S119>/Switch1' */
        VeSSMR_v_VehSpdSignd1 = VeSSMR_v_tempVehSpd;
    }
    else if (VeSSMR_b_CanVehSpd_NtGood)
    {
        /* Switch: '<S119>/Switch2' incorporates:
         *  Switch: '<S119>/Switch'
         */
        if (VeSSMR_b_MtrB_Spd_NtGood)
        {
            /* Switch: '<S119>/Switch3' */
            if (VeSSMD_b_MtrASpd_NtGood)
            {
                /* Switch: '<S119>/Switch1' incorporates:
                 *  Constant: '<S121>/Calib'
                 *  Switch: '<S119>/Switch2'
                 */
                VeSSMR_v_VehSpdSignd1 = KeSSMR_n_DfltVehSpdErrorValue;
            }
            else
            {
                /* Switch: '<S119>/Switch1' incorporates:
                 *  Switch: '<S119>/Switch2'
                 */
                VeSSMR_v_VehSpdSignd1 = VeSSMD_v_MtrAEngSpd_VehSpd;
            }

            /* End of Switch: '<S119>/Switch3' */
        }
        else
        {
            /* Switch: '<S119>/Switch1' incorporates:
             *  Switch: '<S119>/Switch2'
             */
            VeSSMR_v_VehSpdSignd1 = VeSSMD_v_MtrBVehSpdFltrd;
        }

        /* End of Switch: '<S119>/Switch2' */
    }
    else
    {
        /* Switch: '<S119>/Switch1' incorporates:
         *  Switch: '<S119>/Switch'
         */
        VeSSMR_v_VehSpdSignd1 = VeSSMD_v_CanSigVehSpdFltrd;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Switch: '<S111>/Switch1' */
    if (SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev)
    {
        /* Switch: '<S111>/Switch1' */
        rtb_Sum1_i = VeSSMR_v_VehSpdSignd2;
    }
    else
    {
        /* Switch: '<S111>/Switch1' */
        rtb_Sum1_i = VeSSMR_v_VehSpdSignd1;
    }

    /* End of Switch: '<S111>/Switch1' */

    /* Product: '<S117>/Product' incorporates:
     *  Constant: '<S124>/Calib'
     */
    VeSSMC_v_AxleSpd = rtb_Sum1_i * KeSSMR_r_FDR;

    /* Product: '<S117>/Product1' incorporates:
     *  Constant: '<S117>/Constant Value'
     *  Constant: '<S123>/Calib'
     */
    VeSSMC_v_piD = KeSSMR_l_WhlRadius * 0.377F;

    /* Outputs for Atomic SubSystem: '<S117>/LV2_DivideWithProtection' */
    /* Switch: '<S125>/Switch1' incorporates:
     *  Constant: '<S125>/Constant Value'
     *  Constant: '<S125>/Constant Value1'
     *  Constant: '<S125>/Constant Value2'
     *  Constant: '<S125>/Constant Value3'
     *  Logic: '<S125>/AND'
     *  RelationalOperator: '<S125>/GreaterThanorEqual '
     *  RelationalOperator: '<S125>/GreaterThanorEqual1'
     *  RelationalOperator: '<S125>/Not Equal'
     *  RelationalOperator: '<S125>/Not Equal1'
     *  Switch: '<S125>/Switch2'
     *  Switch: '<S125>/Switch3'
     */
    if ((VeSSMC_v_AxleSpd != 0.0F) && (VeSSMC_v_piD != 0.0F))
    {
        /* Switch: '<S125>/Switch1' incorporates:
         *  Product: '<S125>/Division'
         */
        rtb_Switch2_b = VeSSMC_v_AxleSpd / VeSSMC_v_piD;
    }
    else if (VeSSMC_v_AxleSpd > 0.0F)
    {
        /* Switch: '<S125>/Switch2' incorporates:
         *  Constant: '<S125>/MAXFLOAT'
         *  Switch: '<S125>/Switch1'
         */
        rtb_Switch2_b = 3.402823466E+38F;
    }
    else if (VeSSMC_v_AxleSpd < 0.0F)
    {
        /* Switch: '<S125>/Switch3' incorporates:
         *  Constant: '<S125>/MINFLOAT'
         *  Switch: '<S125>/Switch1'
         *  Switch: '<S125>/Switch2'
         */
        rtb_Switch2_b = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S125>/Switch1' incorporates:
         *  Constant: '<S125>/Constant Value4'
         *  Switch: '<S125>/Switch2'
         *  Switch: '<S125>/Switch3'
         */
        rtb_Switch2_b = 0.0F;
    }

    /* End of Switch: '<S125>/Switch1' */
    /* End of Outputs for SubSystem: '<S117>/LV2_DivideWithProtection' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_v_VehSpdSignd' incorporates:
     *  SignalConversion generated from: '<S3>/Lv2SignedVehSpd'
     */
    (void)Rte_Write_VeSSMR_v_VehSpdSignd_Value(rtb_Sum1_i);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Calc_Lv2VehSpd'
     */
    /* Switch: '<S122>/LV2_Abs_switch' incorporates:
     *  Constant: '<S122>/Constant Value1'
     *  Product: '<S122>/Product'
     *  RelationalOperator: '<S122>/Comparison'
     */
    if (rtb_Sum1_i < 0.0F)
    {
        rtb_Sum1_i = -rtb_Sum1_i;
    }

    /* End of Switch: '<S122>/LV2_Abs_switch' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S3>/Lv2VehSpd'
     */
    (void)Rte_Write_VeSSMR_v_VehSpd_Value(rtb_Sum1_i);

    /* Outport: '<Root>/VeSSMR_b_VehSpdFA' incorporates:
     *  SignalConversion generated from: '<S3>/Lv2VehSpdFA'
     */
    (void)Rte_Write_VeSSMR_b_VehSpdFA_Value(VeSSMR_b_VehSpdFA);

    /* Outport: '<Root>/VeSSMR_b_VehSpdRatFailed' incorporates:
     *  SignalConversion generated from: '<S3>/Lv2VehSpdRatFailed'
     */
    (void)Rte_Write_VeSSMR_b_VehSpdRatFailed_Value
        (SSMR_ac_DW.VeSSMR_b_VehSpdRatFailed_Prev);

    /* Outport: '<Root>/VeSSMR_b_VehSpdRatMonitorDisabled' incorporates:
     *  SignalConversion generated from: '<S3>/Lv2_RatMonitorDisabled'
     */
    (void)Rte_Write_VeSSMR_b_VehSpdRatMonitorDisabled_Value
        (VeSSMR_b_VehSpdRatMonitorDisabled);

    /* Outport: '<Root>/VeSSMR_n_MtrBSpdFltrd' incorporates:
     *  SignalConversion generated from: '<S3>/MtrBSpd_Fltrd'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_n_MtrBSpdFltrd_Value
        (SSMR_ac_DW.VeSSMR_n_MtrBSpdFltrd_prev);

    /* Outport: '<Root>/VeSSMR_n_No' incorporates:
     *  SignalConversion generated from: '<S3>/no'
     */
    (void)Rte_Write_VeSSMR_n_No_Value(rtb_Switch2_b);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Calc_Lv2VehSpd'
     */
    /* Outport: '<Root>/VeSSMR_b_NoFA' incorporates:
     *  Logic: '<S116>/AND'
     *  SignalConversion generated from: '<S3>/noFA'
     */
    (void)Rte_Write_VeSSMR_b_NoFA_Value(VeSSMR_b_VehSpdFA);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VeDFIR_FaultSts_CM_VehSpdPerf' incorporates:
     *  DataStoreRead: '<S3>/DSR_VeDFIR_FaultSts_CM_VehSpdPerf'
     */
    (void)Rte_Write_VeDFIR_FaultSts_CM_VehSpdPerf_Value
        (SSMR_ac_DW.VeDFIR_FaultSts_CM_VehSpdPerf);

    /* Outputs for Atomic SubSystem: '<S3>/SSMR_Func_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S115>/SSMR_Func_FastTEF_StopCheckpoint ' */
    Rte_Call_SSMR_Func_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S3>/SSMR_Func_FastTEF_StopCheckpoint' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_Func_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB' */
#endif

}

#endif

/* Model step function for TID2 */
#if Rte_SysCon_Variant_SSMR_P1fPx

FUNC(void, SSMR_CODE) SSMR_MedTEB1(void) /* Explicit Task: MedTEB1 */
{

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    uint16 tmpRead_4;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    uint16 tmpRead_6;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    float32 tmpRead_7;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    uint16 tmpRead_8;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    uint16 tmpRead_9;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    uint16 tmpRead_a;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_b;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_c;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_f;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_g;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_h;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_i;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_j;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_k;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_l;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_m;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    boolean tmpRead_n;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    float32 rtb_VeSSMI_K_BufferEPPUpdate_intermediat;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    float32 rtb_VeSSMI_k_Buffer1RevUpdated_intermedi;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    float32 VeSSMR_n_VehSpeed;

#endif

#if Rte_SysCon_Variant_SSMR_P1fPx

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */
    /* Inport: '<Root>/VeHWIO_e_Lv2HW_Buffer_1rev_updated' */
    (void)Rte_Read_VeHWIO_e_Lv2HW_Buffer_1rev_updated_Value(&tmpRead_9);

    /* Inport: '<Root>/VeHWIO_e_Lv2HW_Ni_1revFA' */
    (void)Rte_Read_VeHWIO_e_Lv2HW_Ni_1revFA_Value(&tmpRead_8);

    /* Gain: '<S278>/Gain' incorporates:
     *  Inport: '<Root>/VeHWIO_n_Lv2HW_Ni_6Deg'
     */
    (void)Rte_Read_VeHWIO_n_Lv2HW_Ni_6Deg_Value((&(VeSSMI_n_Lv2HW_Ni_6Deg)));

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/SSMI_Proc'
     */
    /* UnitDelay: '<S303>/Unit Delay' */
    VeSSMI_n_Lv2_EngSpd_eTPUFltrd_prev =
        SSMR_ac_DW.VeSSMI_n_Lv2_EngSpd_eTPU_prev;

    /* Lookup_n-D: '<S316>/Vector' incorporates:
     *  Gain: '<S278>/Gain'
     */
    VeSSMI_k_Ni6Deg_Coeff = look1_iflf_binlca_16a(VeSSMI_n_Lv2HW_Ni_6Deg, ((
        const float32 *)&(KxSSMR_K_CoeffEngineSpeed6deg[0])), ((const float32 *)
        &(KtSSMR_K_CoeffEngineSpeed6deg[0])), 11U);

    /* Lookup_n-D: '<S321>/Vector' incorporates:
     *  Gain: '<S278>/Gain'
     */
    VeSSMI_k_CoeffEngineSpeedEPP = look1_iflf_binlca_16a(VeSSMI_n_Lv2HW_Ni_6Deg,
        ((const float32 *)&(KxSSMR_K_CoeffEngineSpeedEPP[0])), ((const float32 *)
        &(KtSSMR_K_CoeffEngineSpeedEPP[0])), 13U);

    /* RelationalOperator: '<S274>/Comparison2' incorporates:
     *  Constant: '<S274>/Constant Value2'
     */
    VeSSMI_b_Buffer_1rev_Notupdated = (((sint32)tmpRead_9) == 0);

    /* RelationalOperator: '<S274>/Comparison1' incorporates:
     *  Constant: '<S274>/Constant Value1'
     */
    VeSSMI_b_Lv2HW_Ni_1revFA1 = (1 == ((sint32)tmpRead_8));

    /* Logic: '<S274>/Logical1' */
    VeSSMI_b_Ni_1revFA = ((VeSSMI_b_Buffer_1rev_Notupdated) ||
                          (VeSSMI_b_Lv2HW_Ni_1revFA1));

    /* UnitDelay: '<S303>/Unit Delay1' */
    VeSSMI_k_Ni_1rev_Coeff_Old = SSMR_ac_DW.VeSSMI_k_Ni_1rev_Coeff_prev;

    /* Switch: '<S309>/Switch3' */
    if (VeSSMI_b_Ni_1revFA)
    {
        /* Switch: '<S309>/Switch3' */
        VeSSMI_k_CoeffEngSpdEPP = VeSSMI_k_CoeffEngineSpeedEPP;
    }
    else
    {
        /* Switch: '<S309>/Switch3' incorporates:
         *  Constant: '<S309>/Constant Value4'
         *  Sum: '<S309>/Sum2'
         */
        VeSSMI_k_CoeffEngSpdEPP = (1.0F - VeSSMI_k_Ni6Deg_Coeff) -
            VeSSMI_k_Ni_1rev_Coeff_Old;
    }

    /* End of Switch: '<S309>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */

    /* Inport: '<Root>/VeSCMR_b_Lv2LOC_TCM_CANC' */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_TCM_CANC_Value(&tmpRead_n);

    /* Inport: '<Root>/VeSCMR_b_MCPA_CommFlt' */
    (void)Rte_Read_VeSCMR_b_MCPA_CommFlt_Value(&tmpRead_m);

    /* Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_EPT' */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_EPT_Value(&tmpRead_k);

    /* Inport: '<Root>/VeSCMR_b_Lv2CANBusOff_CANC' */
    (void)Rte_Read_VeSCMR_b_Lv2CANBusOff_CANC_Value(&tmpRead_j);

    /* Inport: '<Root>/VeSCMR_b_LoC_BSM_CANC1' */
    (void)Rte_Read_VeSCMR_b_LoC_BSM_CANC1_Value(&tmpRead_i);

    /* Logic: '<S288>/AND' incorporates:
     *  Inport: '<Root>/VeSCMR_b_TransOutSpdDirFA'
     */
    (void)Rte_Read_VeSCMR_b_TransOutSpdDirFA_Value((&(VeSSMI_b_TransOutSpdDirFA)));

    /* Gain: '<S293>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_TransOutSpdDir'
     */
    (void)Rte_Read_VeSCMR_e_TransOutSpdDir_Value((&(VeSSMI_e_TransOutSpdDir)));

    /* Inport: '<Root>/VeSCMR_b_LOC_TCM_EPT' */
    (void)Rte_Read_VeSCMR_b_LOC_TCM_EPT_Value(&tmpRead_g);

    /* Inport: '<Root>/VeSCMR_b_ePT_BusOff' */
    (void)Rte_Read_VeSCMR_b_ePT_BusOff_Value(&tmpRead_f);

    /* Inport: '<Root>/VeSCMR_b_CANC_BusOff' */
    (void)Rte_Read_VeSCMR_b_CANC_BusOff_Value(&tmpRead_e);

    /* Inport: '<Root>/VeSCMR_b_Lv2LOC_ESC_CANC' */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ESC_CANC_Value(&tmpRead_d);

    /* Inport: '<Root>/VeSCMR_b_SPIFlt' */
    (void)Rte_Read_VeSCMR_b_SPIFlt_Value(&tmpRead_b);

    /* Inport: '<Root>/VeHWIO_e_Lv2HW_Buffer_EPP_updated' */
    (void)Rte_Read_VeHWIO_e_Lv2HW_Buffer_EPP_updated_Value(&tmpRead_a);

    /* Inport: '<Root>/VeHWIO_n_Lv2HW_Ni_1rev' */
    (void)Rte_Read_VeHWIO_n_Lv2HW_Ni_1rev_Value(&tmpRead_7);

    /* Inport: '<Root>/VeHWIO_e_Lv2HW_Ni_EPPFA' */
    (void)Rte_Read_VeHWIO_e_Lv2HW_Ni_EPPFA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeHWIO_n_Lv2HW_Ni_EPP' */
    (void)Rte_Read_VeHWIO_n_Lv2HW_Ni_EPP_Value(&tmpRead_5);

    /* Inport: '<Root>/VeHWIO_e_Lv2HW_Ni_6DegFA' */
    (void)Rte_Read_VeHWIO_e_Lv2HW_Ni_6DegFA_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSCMR_b_TransOutSpdFA' */
    (void)Rte_Read_VeSCMR_b_TransOutSpdFA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeSCMR_n_Lv2TransOutSpd' */
    (void)Rte_Read_VeSCMR_n_Lv2TransOutSpd_Value((&(VeSSMI_n_TransOutSpd)));

    /* Inport: '<Root>/VeSCMR_b_Lv2LOC_ECM_EPT' */
    (void)Rte_Read_VeSCMR_b_Lv2LOC_ECM_EPT_Value(&tmpRead_1);

    /* Inport: '<Root>/VeSCMR_n_Lv2EngineSpeed' */
    (void)Rte_Read_VeSCMR_n_Lv2EngineSpeed_Value(&VeSSMR_n_VehSpeed);

    /* Inport: '<Root>/VeLTIR_b_Lv2EngineSpeed_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2EngineSpeed_FA_Value(&tmpRead_0);

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_Spd_FA_Value((&(VeSSMI_b_MtrASpdFAP1fPx)));

    /* Inport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2MtrA_Spd_Value((&(VeSSMI_n_Lv2MtrASpd)));

    /* Logic: '<S264>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlRR_Spd_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlRR_Spd_FA_Value((&(VeSSMI_b_WhlRRSpdFA)));

    /* Logic: '<S265>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlRL_Spd_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlRL_Spd_FA_Value((&(VeSSMI_b_WhlRLSpdFA)));

    /* Logic: '<S266>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_Spd_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlFR_Spd_FA_Value((&(VeSSMI_b_WhlFRSpdFA)));

    /* Logic: '<S267>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_Spd_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlFL_Spd_FA_Value((&(VeSSMI_b_WhlFLSpdFA)));

    /* Gain: '<S281>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlRL_Spd'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlRL_Spd_Value((&(VeSSMI_n_WhlRLSpd)));

    /* Gain: '<S282>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_Spd'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlFR_Spd_Value((&(VeSSMI_n_WhlFRSpd)));

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/SSMI_Proc'
     */
    /* Outputs for Atomic SubSystem: '<S309>/Limiter' */
    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S309>/Constant Value1'
     *  RelationalOperator: '<S322>/Relational Operator'
     */
    if (1.0F < VeSSMI_k_CoeffEngSpdEPP)
    {
        /* Switch: '<S300>/LV2_Abs_switch' */
        rtb_VeSSMI_k_Buffer1RevUpdated_intermedi = 1.0F;
    }
    else
    {
        /* Switch: '<S300>/LV2_Abs_switch' */
        rtb_VeSSMI_k_Buffer1RevUpdated_intermedi = VeSSMI_k_CoeffEngSpdEPP;
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S309>/Constant Value3'
     *  RelationalOperator: '<S322>/Relational Operator1'
     */
    if (rtb_VeSSMI_k_Buffer1RevUpdated_intermedi > 0.0F)
    {
        /* Switch: '<S322>/Switch' */
        VeSSMI_K_CoeffEngSpdEPP_MinMax =
            rtb_VeSSMI_k_Buffer1RevUpdated_intermedi;
    }
    else
    {
        /* Switch: '<S322>/Switch' */
        VeSSMI_K_CoeffEngSpdEPP_MinMax = 0.0F;
    }

    /* End of Switch: '<S322>/Switch' */
    /* End of Outputs for SubSystem: '<S309>/Limiter' */

    /* RelationalOperator: '<S274>/Comparison3' incorporates:
     *  Constant: '<S274>/Constant Value3'
     */
    VeSSMI_b_Buffer_EPP_Notupdated = (((sint32)tmpRead_a) == 0);

    /* RelationalOperator: '<S274>/Comparison4' incorporates:
     *  Constant: '<S274>/Constant Value'
     */
    VeSSMI_b_Lv2HW_Ni_EPPFA1 = (1 == ((sint32)tmpRead_6));

    /* Logic: '<S274>/Logical3' */
    VeSSMI_b_EPP_updatedFA = ((VeSSMI_b_Buffer_EPP_Notupdated) ||
        (VeSSMI_b_Lv2HW_Ni_EPPFA1));

    /* Switch: '<S309>/Switch1' */
    VeSSMI_K_BufferEPPUpdated = (float32)((!VeSSMI_b_EPP_updatedFA) ? 1 : 0);

    /* Outputs for Atomic SubSystem: '<S319>/LV2_GradientLimiter' */
    /* Sum: '<S323>/Sum2' incorporates:
     *  UnitDelay: '<S323>/Unit Delay'
     */
    rtb_VeSSMI_K_BufferEPPUpdate_intermediat = VeSSMI_K_BufferEPPUpdated -
        VeSSMI_K_BufferEPPUpdatedCoeff;

    /* Outputs for Atomic SubSystem: '<S323>/Limiter' */
    /* Switch: '<S324>/LimiterSwitch' incorporates:
     *  Constant: '<S320>/Calib'
     *  RelationalOperator: '<S324>/Relational Operator'
     */
    if (KeSSMR_K_EPP_BufferBlendStepSize <
            rtb_VeSSMI_K_BufferEPPUpdate_intermediat)
    {
        /* UnitDelay: '<S313>/Unit Delay' */
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat =
            KeSSMR_K_EPP_BufferBlendStepSize;
    }

    /* End of Switch: '<S324>/LimiterSwitch' */

    /* Switch: '<S324>/LimiterSwitch1' incorporates:
     *  Constant: '<S320>/Calib'
     *  Gain: '<S319>/Gain'
     *  RelationalOperator: '<S324>/Relational Operator1'
     */
    if (rtb_VeSSMI_K_BufferEPPUpdate_intermediat <=
            (-KeSSMR_K_EPP_BufferBlendStepSize))
    {
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat =
            -KeSSMR_K_EPP_BufferBlendStepSize;
    }

    /* End of Switch: '<S324>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S323>/Limiter' */

    /* Sum: '<S323>/Sum3' incorporates:
     *  UnitDelay: '<S323>/Unit Delay'
     */
    VeSSMI_K_BufferEPPUpdatedCoeff = rtb_VeSSMI_K_BufferEPPUpdate_intermediat +
        VeSSMI_K_BufferEPPUpdatedCoeff;

    /* End of Outputs for SubSystem: '<S319>/LV2_GradientLimiter' */

    /* Product: '<S309>/Product6' */
    VeSSMI_n_Ni_EPP_Coeff = VeSSMI_K_CoeffEngSpdEPP_MinMax *
        VeSSMI_K_BufferEPPUpdatedCoeff;

    /* Sum: '<S308>/Sum2' incorporates:
     *  Constant: '<S308>/Constant Value2'
     */
    VeSSMI_K_CoeffEngineSpeed6deg_EPP = (1.0F - VeSSMI_n_Ni_EPP_Coeff) -
        VeSSMI_k_Ni_1rev_Coeff_Old;

    /* Switch: '<S317>/Switch' incorporates:
     *  RelationalOperator: '<S317>/Comparison'
     */
    if (VeSSMI_k_Ni6Deg_Coeff > VeSSMI_K_CoeffEngineSpeed6deg_EPP)
    {
        /* Switch: '<S317>/Switch' */
        VeSSMI_k_MaxCoeff_1rev = VeSSMI_k_Ni6Deg_Coeff;
    }
    else
    {
        /* Switch: '<S317>/Switch' */
        VeSSMI_k_MaxCoeff_1rev = VeSSMI_K_CoeffEngineSpeed6deg_EPP;
    }

    /* End of Switch: '<S317>/Switch' */

    /* Outputs for Atomic SubSystem: '<S308>/Limiter' */
    /* Switch: '<S318>/Switch1' incorporates:
     *  Constant: '<S308>/Constant Value1'
     *  RelationalOperator: '<S318>/Relational Operator'
     */
    if (1.0F < VeSSMI_k_MaxCoeff_1rev)
    {
        /* UnitDelay: '<S313>/Unit Delay' */
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat = 1.0F;
    }
    else
    {
        /* UnitDelay: '<S313>/Unit Delay' */
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat = VeSSMI_k_MaxCoeff_1rev;
    }

    /* End of Switch: '<S318>/Switch1' */

    /* Switch: '<S318>/Switch' incorporates:
     *  Constant: '<S308>/Constant Value3'
     *  RelationalOperator: '<S318>/Relational Operator1'
     */
    if (rtb_VeSSMI_K_BufferEPPUpdate_intermediat > 0.0F)
    {
        /* Switch: '<S318>/Switch' */
        VeSSMI_k_Ni_6Deg_Coeff = rtb_VeSSMI_K_BufferEPPUpdate_intermediat;
    }
    else
    {
        /* Switch: '<S318>/Switch' */
        VeSSMI_k_Ni_6Deg_Coeff = 0.0F;
    }

    /* End of Switch: '<S318>/Switch' */
    /* End of Outputs for SubSystem: '<S308>/Limiter' */

    /* Product: '<S308>/Product' */
    VeSSMI_n_6degSpd = VeSSMI_k_Ni_6Deg_Coeff * VeSSMI_n_Lv2HW_Ni_6Deg;

    /* UnitDelay: '<S305>/Unit Delay1' */
    VeSSMI_n_Ni_EPP_prev = VeSSMI_n_Ni_EPPTemp;

    /* Switch: '<S305>/Switch' */
    if (!VeSSMI_b_EPP_updatedFA)
    {
        /* Switch: '<S305>/Switch' */
        VeSSMI_n_Ni_EPPTemp = tmpRead_5;
    }

    /* End of Switch: '<S305>/Switch' */

    /* Product: '<S305>/Product1' */
    VeSSMI_n_EPP = VeSSMI_n_Ni_EPPTemp * VeSSMI_n_Ni_EPP_Coeff;

    /* UnitDelay: '<S304>/Unit Delay' */
    VeSSMI_n_1Rev_prev = VeSSMI_n_1RevTemp;

    /* Switch: '<S304>/Switch' */
    if (!VeSSMI_b_Ni_1revFA)
    {
        /* Switch: '<S304>/Switch' */
        VeSSMI_n_1RevTemp = tmpRead_7;
    }

    /* End of Switch: '<S304>/Switch' */

    /* Sum: '<S307>/Sum4' incorporates:
     *  Constant: '<S307>/Constant Value1'
     */
    VeSSMI_k_1RevCoeff = (1.0F - VeSSMI_k_Ni6Deg_Coeff) - VeSSMI_n_Ni_EPP_Coeff;

    /* Logic: '<S311>/Logical2' */
    VeSSMI_b_Ni_1revNoFA = !VeSSMI_b_Ni_1revFA;

    /* UnitDelay: '<S311>/Unit Delay' */
    VeSSMI_k_1RevCoeff_prev = VeSSMI_k_1RevCoeffTemp;

    /* Switch: '<S311>/Switch1' */
    if (VeSSMI_b_Ni_1revNoFA)
    {
        /* Switch: '<S311>/Switch1' */
        VeSSMI_k_1RevCoeffTemp = VeSSMI_k_1RevCoeff;
    }

    /* End of Switch: '<S311>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S311>/Limiter1' */
    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S311>/Constant Value4'
     *  RelationalOperator: '<S315>/Relational Operator'
     */
    if (1.0F < VeSSMI_k_1RevCoeffTemp)
    {
        /* UnitDelay: '<S313>/Unit Delay' */
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat = 1.0F;
    }
    else
    {
        /* UnitDelay: '<S313>/Unit Delay' */
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat = VeSSMI_k_1RevCoeffTemp;
    }

    /* End of Switch: '<S315>/Switch1' */
    /* End of Outputs for SubSystem: '<S311>/Limiter1' */

    /* Switch: '<S307>/Switch' */
    VeSSMI_K_Buffer1RevUpdated = (float32)(VeSSMI_b_Ni_1revNoFA ? 1.0F : 0.0F);

    /* Outputs for Atomic SubSystem: '<S310>/LV2_GradientLimiter' */
    /* Sum: '<S313>/Sum2' incorporates:
     *  UnitDelay: '<S313>/Unit Delay'
     */
    rtb_VeSSMI_k_Buffer1RevUpdated_intermedi = VeSSMI_K_Buffer1RevUpdated -
        VeSSMC_n_1RevBufferGrad;

    /* Outputs for Atomic SubSystem: '<S313>/Limiter' */
    /* Switch: '<S314>/LimiterSwitch' incorporates:
     *  Constant: '<S312>/Calib'
     *  RelationalOperator: '<S314>/Relational Operator'
     */
    if (KeSSMR_k_1Rev_BufferBlendStepSize <
            rtb_VeSSMI_k_Buffer1RevUpdated_intermedi)
    {
        /* Switch: '<S300>/LV2_Abs_switch' */
        rtb_VeSSMI_k_Buffer1RevUpdated_intermedi =
            KeSSMR_k_1Rev_BufferBlendStepSize;
    }

    /* End of Switch: '<S314>/LimiterSwitch' */

    /* Switch: '<S314>/LimiterSwitch1' incorporates:
     *  Constant: '<S312>/Calib'
     *  Gain: '<S310>/Gain'
     *  RelationalOperator: '<S314>/Relational Operator1'
     */
    if (rtb_VeSSMI_k_Buffer1RevUpdated_intermedi <=
            (-KeSSMR_k_1Rev_BufferBlendStepSize))
    {
        rtb_VeSSMI_k_Buffer1RevUpdated_intermedi =
            -KeSSMR_k_1Rev_BufferBlendStepSize;
    }

    /* End of Switch: '<S314>/LimiterSwitch1' */
    /* End of Outputs for SubSystem: '<S313>/Limiter' */

    /* Sum: '<S313>/Sum3' incorporates:
     *  UnitDelay: '<S313>/Unit Delay'
     */
    VeSSMC_n_1RevBufferGrad = rtb_VeSSMI_k_Buffer1RevUpdated_intermedi +
        VeSSMC_n_1RevBufferGrad;

    /* End of Outputs for SubSystem: '<S310>/LV2_GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S311>/Limiter1' */
    /* Switch: '<S315>/Switch' incorporates:
     *  Constant: '<S311>/Constant Value5'
     *  RelationalOperator: '<S315>/Relational Operator1'
     */
    if (rtb_VeSSMI_K_BufferEPPUpdate_intermediat <= 0.0F)
    {
        rtb_VeSSMI_K_BufferEPPUpdate_intermediat = 0.0F;
    }

    /* End of Switch: '<S315>/Switch' */
    /* End of Outputs for SubSystem: '<S311>/Limiter1' */

    /* Product: '<S307>/Product7' */
    VeSSMI_k_Ni_1rev_Coeff = rtb_VeSSMI_K_BufferEPPUpdate_intermediat *
        VeSSMC_n_1RevBufferGrad;

    /* Product: '<S304>/Product2' */
    VeSSMI_n_1Rev = VeSSMI_n_1RevTemp * VeSSMI_k_Ni_1rev_Coeff;

    /* Sum: '<S303>/Sum' */
    VeSSMI_n_Lv2_EngSpd_eTPU = (VeSSMI_n_6degSpd + VeSSMI_n_EPP) + VeSSMI_n_1Rev;

    /* S-Function (ApplyFILT_1stOrderLag_flt): '<S303>/ApplyFILT_1stOrderLag_flt' incorporates:
     *  Constant: '<S306>/Calib'
     */
    VeSSMI_n_Lv2_EngSpd_eTPUFltrd = ApplyFILT_1stOrderLag_flt
        (VeSSMI_n_Lv2_EngSpd_eTPUFltrd_prev, VeSSMI_n_Lv2_EngSpd_eTPU,
         KeSSMR_k_EngSpd_eTPUFiltCoef);
    ;

    /* RelationalOperator: '<S303>/Comparison4' incorporates:
     *  Constant: '<S303>/Constant Value'
     */
    VeSSMI_b_Lv2_EngSpd_eTPUFA = (1 == ((sint32)tmpRead_4));

    /* UnitDelay: '<S302>/Unit Delay' */
    VeSSMI_n_Lv2_EngSpd_CANFlt_prev = SSMR_ac_DW.VeSSMI_n_Lv2_EngSpd_prev;

    /* S-Function (ApplyFILT_1stOrderLag_flt): '<S302>/ApplyFILT_1stOrderLag_flt' incorporates:
     *  Constant: '<S325>/Calib'
     */
    VeSSMI_n_Lv2_EngSpd_CANFlt = ApplyFILT_1stOrderLag_flt
        (VeSSMI_n_Lv2_EngSpd_CANFlt_prev, VeSSMR_n_VehSpeed,
         KeSSMR_K_CANEngSpdFiltCoef);
    ;

    /* Logic: '<S202>/Logical3' */
    VeSSMI_b_CANBusOff_EPT = (tmpRead_f || tmpRead_k);

    /* Logic: '<S302>/Logical1' */
    VeSSMI_b_Lv2CAN_EngSpdFA = ((tmpRead_0 || tmpRead_1) ||
        (VeSSMI_b_CANBusOff_EPT));

    /* Switch: '<S275>/Switch33' incorporates:
     *  Constant: '<S330>/Calib'
     */
    if (KeSSMR_b_MtrASpd_OverdEnble)
    {
        /* Switch: '<S275>/Switch33' incorporates:
         *  Constant: '<S331>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2MtrA_Spd'
         */
        VeSSMI_n_Lv2MtrASpd = KeSSMR_n_MtrASpd_OverdValue;
    }

    /* End of Switch: '<S275>/Switch33' */

    /* Switch: '<S275>/Switch34' incorporates:
     *  Constant: '<S327>/Calib'
     */
    if (KeSSMR_b_Lv2MtrA_Spd_OverdEnable)
    {
        /* Switch: '<S275>/Switch34' incorporates:
         *  Constant: '<S326>/Calib'
         *  Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA'
         */
        VeSSMI_b_MtrASpdFAP1fPx = KeSSMR_b_Lv2MtrA_SpdFA_OverdValue;
    }

    /* End of Switch: '<S275>/Switch34' */

    /* Logic: '<S202>/Logical6' */
    VeSSMI_b_SPIFlt = (tmpRead_b || tmpRead_m);

    /* Switch: '<S275>/Switch1' incorporates:
     *  Constant: '<S328>/Calib'
     */
    if (KeSSMR_b_Lv2SPIFlt_OverdEnable)
    {
        /* Switch: '<S275>/Switch1' incorporates:
         *  Constant: '<S329>/Calib'
         */
        VeSSMI_b_SPIFltActv = KeSSMR_b_Lv2SPIFlt_OverdValue;
    }
    else
    {
        /* Switch: '<S275>/Switch1' */
        VeSSMI_b_SPIFltActv = VeSSMI_b_SPIFlt;
    }

    /* End of Switch: '<S275>/Switch1' */

    /* Logic: '<S275>/Logical1' */
    VeSSMI_b_Lv2MtrASpdFA = ((VeSSMI_b_MtrASpdFAP1fPx) || (VeSSMI_b_SPIFltActv));

    /* Switch: '<S272>/Switch31' incorporates:
     *  Constant: '<S291>/Calib'
     */
    if (KeSSMR_b_TransOutSpd_OverdEnable)
    {
        /* Switch: '<S272>/Switch31' incorporates:
         *  Constant: '<S292>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2TransOutSpd'
         */
        VeSSMI_n_TransOutSpd = KeSSMR_n_TransOutSpd_OverdValue;
    }

    /* End of Switch: '<S272>/Switch31' */

    /* Logic: '<S202>/Logical2' */
    VeSSMI_b_CANBusOff_CANC = (tmpRead_e || tmpRead_j);

    /* Logic: '<S202>/Logical4' */
    VeSSMI_b_LOC_TCM = (tmpRead_g || tmpRead_n);

    /* Logic: '<S272>/Logical4' */
    VeSSMI_b_TransOutSpdFA_temp = ((tmpRead_3 || (VeSSMI_b_CANBusOff_CANC)) ||
        (VeSSMI_b_LOC_TCM));

    /* Switch: '<S272>/Switch32' incorporates:
     *  Constant: '<S289>/Calib'
     */
    if (KeSSMR_b_TransOutSpdFA_OverdEnable)
    {
        /* Switch: '<S272>/Switch32' incorporates:
         *  Constant: '<S290>/Calib'
         */
        VeSSMI_b_TransOutSpdFA = KeSSMR_b_TransOutSpdFA_OverdValue;
    }
    else
    {
        /* Switch: '<S272>/Switch32' */
        VeSSMI_b_TransOutSpdFA = VeSSMI_b_TransOutSpdFA_temp;
    }

    /* End of Switch: '<S272>/Switch32' */

    /* UnitDelay: '<S273>/Unit Delay' */
    VeSSMI_n_WhlSpdFltrd_prev1P1fPx = SSMR_ac_DW.VeSSMI_n_WhlSpdFltrd_prev_b;

    /* Logic: '<S202>/Logical1' */
    VeSSMI_b_LOC_BSM = (tmpRead_d || tmpRead_i);

    /* Logic: '<S273>/Logical1' */
    VeSSMI_b_FrRlFA = ((((VeSSMI_b_WhlFRSpdFA) || (VeSSMI_b_WhlRLSpdFA)) ||
                        (VeSSMI_b_CANBusOff_CANC)) || (VeSSMI_b_LOC_BSM));

    /* Logic: '<S273>/Logical3' */
    VeSSMI_b_FrRlNotFA = !VeSSMI_b_FrRlFA;

    /* Sum: '<S273>/Sum' */
    VeSSMI_n_DiffWhlSpd = VeSSMI_n_WhlFRSpd - VeSSMI_n_WhlRLSpd;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */

    /* Gain: '<S280>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlRR_Spd'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlRR_Spd_Value((&(VeSSMI_n_WhlRRSpd)));

    /* Gain: '<S283>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_Spd'
     */
    (void)Rte_Read_VeSCMR_n_Lv2WhlFL_Spd_Value((&(VeSSMI_n_WhlFLSpd)));

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/SSMI_Proc'
     */
    /* Switch: '<S299>/LV2_Abs_switch' incorporates:
     *  Constant: '<S299>/Constant Value1'
     *  Product: '<S299>/Product'
     *  RelationalOperator: '<S299>/Comparison'
     */
    if (VeSSMI_n_DiffWhlSpd < 0.0F)
    {
        VeSSMR_n_VehSpeed = -VeSSMI_n_DiffWhlSpd;
    }
    else
    {
        VeSSMR_n_VehSpeed = VeSSMI_n_DiffWhlSpd;
    }

    /* End of Switch: '<S299>/LV2_Abs_switch' */

    /* RelationalOperator: '<S273>/Comparison2' incorporates:
     *  Constant: '<S297>/Calib'
     */
    VeSSMI_b_WhlSpdInBound1 = (VeSSMR_n_VehSpeed <= KeSSMR_n_WhlErrorLim1);

    /* Logic: '<S273>/Logical4' */
    VeSSMI_b_FlRr_Good = ((VeSSMI_b_FrRlNotFA) && (VeSSMI_b_WhlSpdInBound1));

    /* Logic: '<S273>/Logical2' */
    VeSSMI_b_FlRrFA = ((((VeSSMI_b_CANBusOff_CANC) || (VeSSMI_b_LOC_BSM)) ||
                        (VeSSMI_b_WhlFLSpdFA)) || (VeSSMI_b_WhlRRSpdFA));

    /* Logic: '<S273>/Logical8' */
    VeSSMI_b_FlRrNotFA = !VeSSMI_b_FlRrFA;

    /* Sum: '<S273>/Sum1' */
    VeSSMI_n_DiffWhlSpd1 = VeSSMI_n_WhlFLSpd - VeSSMI_n_WhlRRSpd;

    /* Switch: '<S300>/LV2_Abs_switch' incorporates:
     *  Constant: '<S300>/Constant Value1'
     *  Product: '<S300>/Product'
     *  RelationalOperator: '<S300>/Comparison'
     */
    if (VeSSMI_n_DiffWhlSpd1 < 0.0F)
    {
        VeSSMR_n_VehSpeed = -VeSSMI_n_DiffWhlSpd1;
    }
    else
    {
        VeSSMR_n_VehSpeed = VeSSMI_n_DiffWhlSpd1;
    }

    /* End of Switch: '<S300>/LV2_Abs_switch' */

    /* RelationalOperator: '<S273>/Comparison1' incorporates:
     *  Constant: '<S298>/Calib'
     */
    VeSSMI_b_WhlSpdInBound2 = (VeSSMR_n_VehSpeed <= KeSSMR_n_WhlErrorLim2);

    /* Logic: '<S273>/Logical7' */
    VeSSMI_b_FrRl_Good = ((VeSSMI_b_FlRrNotFA) && (VeSSMI_b_WhlSpdInBound2));

    /* Switch: '<S294>/Switch1' incorporates:
     *  Switch: '<S294>/Switch2'
     */
    if (VeSSMI_b_FlRr_Good)
    {
        /* Switch: '<S294>/Switch1' */
        VeSSMI_n_WhlSpd = VeSSMI_n_WhlRLSpd;
    }
    else if (VeSSMI_b_FrRl_Good)
    {
        /* Switch: '<S294>/Switch2' incorporates:
         *  Switch: '<S294>/Switch1'
         */
        VeSSMI_n_WhlSpd = VeSSMI_n_WhlRRSpd;
    }
    else
    {
        /* Switch: '<S294>/Switch1' incorporates:
         *  Constant: '<S296>/Calib'
         *  Switch: '<S294>/Switch2'
         */
        VeSSMI_n_WhlSpd = KeSSMR_n_DefaultWhlSpd;
    }

    /* End of Switch: '<S294>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */

    /* Inport: '<Root>/VeSCMR_b_MCPB_CommFlt' */
    (void)Rte_Read_VeSCMR_b_MCPB_CommFlt_Value(&tmpRead_l);

    /* Inport: '<Root>/VeSCMR_b_VehSpdSigFailSts' */
    (void)Rte_Read_VeSCMR_b_VehSpdSigFailSts_Value(&tmpRead_h);

    /* Inport: '<Root>/VeSCMR_b_SharedMemFlt' */
    (void)Rte_Read_VeSCMR_b_SharedMemFlt_Value(&tmpRead_c);

    /* Inport: '<Root>/VeSCMR_b_Lv2NTurbSpdFA' */
    (void)Rte_Read_VeSCMR_b_Lv2NTurbSpdFA_Value(&tmpRead_2);

    /* Gain: '<S279>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_n_Lv2NTurbSpd'
     */
    (void)Rte_Read_VeSCMR_n_Lv2NTurbSpd_Value((&(VeSSMI_n_NTurbSpd)));

    /* Inport: '<Root>/VeLTIR_b_Lv2VehSpdCANC_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2VehSpdCANC_FA_Value(&tmpRead);

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrB_Spd_FA_Value((&(VeSSMI_b_MtrBSpdFAActv)));

    /* Inport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2MtrB_Spd_Value((&(VeSSMI_n_MtrBSpdP1fPx)));

    /* Logic: '<S268>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirRR_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirRR_Stat_FA_Value
        ((&(VeSSMI_b_WhlDirRR_StatFA)));

    /* Logic: '<S269>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirRL_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirRL_Stat_FA_Value
        ((&(VeSSMI_b_WhlDirRL_StatFA)));

    /* Logic: '<S270>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirFR_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirFR_Stat_FA_Value
        ((&(VeSSMI_b_WhlDirFR_StatFA)));

    /* Logic: '<S271>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirFL_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirFL_Stat_FA_Value
        ((&(VeSSMI_b_WhlDirFL_StatFA)));

    /* Gain: '<S284>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirRR_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirRR_Stat_Value((&(VeSSMI_e_WhlDirRR_Stat)));

    /* Gain: '<S285>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirRL_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirRL_Stat_Value((&(VeSSMI_e_WhlDirRL_Stat)));

    /* Gain: '<S286>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirFR_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirFR_Stat_Value((&(VeSSMI_e_WhlDirFR_Stat)));

    /* Gain: '<S287>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirFL_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirFL_Stat_Value((&(VeSSMI_e_WhlDirFL_Stat)));

    /* Inport: '<Root>/VeSCMR_v_Lv2VehSpdCANC' */
    (void)Rte_Read_VeSCMR_v_Lv2VehSpdCANC_Value((&(VeSSMI_v_Lv2CanSigVehSpdP1fPx)));

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/SSMI_Proc'
     */
    /* S-Function (ApplyFILT_1stOrderLag_flt): '<S273>/ApplyFILT_1stOrderLag_flt' incorporates:
     *  Constant: '<S295>/Calib'
     */
    VeSSMI_n_WhlSpdFltrdP1fPx = ApplyFILT_1stOrderLag_flt
        (VeSSMI_n_WhlSpdFltrd_prev1P1fPx, VeSSMI_n_WhlSpd,
         KeSSMR_k_WhlSpdFiltCoef);
    ;

    /* Logic: '<S273>/Logical5' */
    VeSSMI_b_WhlSpdNotFA = ((VeSSMI_b_FrRl_Good) || (VeSSMI_b_FlRr_Good));

    /* Logic: '<S273>/Logical6' */
    VeSSMI_b_WhlSpdFA = !VeSSMI_b_WhlSpdNotFA;

    /* Logic: '<S202>/Logical5' */
    VeSSMI_b_NTurbSpdFA = ((tmpRead_2 || (VeSSMI_b_CANBusOff_CANC)) ||
                           (VeSSMI_b_LOC_TCM));

    /* Switch: '<S277>/Switch13' incorporates:
     *  Constant: '<S340>/Calib'
     */
    if (KeSSMR_b_CANVehSpd_OverdEnable)
    {
        /* Switch: '<S277>/Switch13' incorporates:
         *  Constant: '<S341>/Calib'
         *  Inport: '<Root>/VeSCMR_v_Lv2VehSpdCANC'
         */
        VeSSMI_v_Lv2CanSigVehSpdP1fPx = KeSSMR_v_CANVehSpd_OverdValue;
    }

    /* End of Switch: '<S277>/Switch13' */

    /* Logic: '<S277>/Logical3' */
    VeSSMI_b_Lv2CanSigVehSpdFA_temp = (((tmpRead || (VeSSMI_b_CANBusOff_CANC)) ||
        (VeSSMI_b_LOC_BSM)) || tmpRead_h);

    /* Switch: '<S277>/Switch14' incorporates:
     *  Constant: '<S338>/Calib'
     */
    if (KeSSMR_b_CANVehSpdFA_OverdEnable)
    {
        /* Switch: '<S277>/Switch14' incorporates:
         *  Constant: '<S339>/Calib'
         */
        VeSSMI_b_VehSpdFAP1fPx = KeSSMR_b_CANVehSpdFA_OverdValue;
    }
    else
    {
        /* Switch: '<S277>/Switch14' */
        VeSSMI_b_VehSpdFAP1fPx = VeSSMI_b_Lv2CanSigVehSpdFA_temp;
    }

    /* End of Switch: '<S277>/Switch14' */

    /* Switch: '<S276>/Switch4' incorporates:
     *  Constant: '<S334>/Calib'
     */
    if (KeSSMR_b_Lv2MtrB_Spd_OverdEnable)
    {
        /* Switch: '<S276>/Switch4' incorporates:
         *  Constant: '<S337>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2MtrB_Spd'
         */
        VeSSMI_n_MtrBSpdP1fPx = KeSSMR_n_Lv2MtrB_Spd_OverdValue;
    }

    /* End of Switch: '<S276>/Switch4' */

    /* Switch: '<S276>/Switch3' incorporates:
     *  Constant: '<S332>/Calib'
     */
    if (KeSSMR_b_Lv2MtrB_SpdFA_OverdEnable)
    {
        /* Switch: '<S276>/Switch3' incorporates:
         *  Constant: '<S333>/Calib'
         *  Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA'
         */
        VeSSMI_b_MtrBSpdFAActv = KeSSMR_b_Lv2MtrB_SpdFA_OverdValue;
    }

    /* End of Switch: '<S276>/Switch3' */

    /* Logic: '<S202>/Logical7' */
    VeSSMI_b_SharedMemFlt = (tmpRead_c || tmpRead_l);

    /* Switch: '<S276>/Switch2' incorporates:
     *  Constant: '<S335>/Calib'
     */
    if (KeSSMR_b_Lv2SharedMemFlt_OvrdEnable)
    {
        /* Switch: '<S276>/Switch2' incorporates:
         *  Constant: '<S336>/Calib'
         */
        VeSSMI_b_sharedmemft = KeSSMR_b_Lv2SharedMemFlt_OvrdValue;
    }
    else
    {
        /* Switch: '<S276>/Switch2' */
        VeSSMI_b_sharedmemft = VeSSMI_b_SharedMemFlt;
    }

    /* End of Switch: '<S276>/Switch2' */

    /* Logic: '<S276>/Logical2' */
    VeSSMI_b_MtrBSpdFAP1fPx = ((VeSSMI_b_MtrBSpdFAActv) || (VeSSMI_b_sharedmemft));

    /* Update for UnitDelay: '<S303>/Unit Delay' */
    SSMR_ac_DW.VeSSMI_n_Lv2_EngSpd_eTPU_prev = VeSSMI_n_Lv2_EngSpd_eTPUFltrd;

    /* Update for UnitDelay: '<S303>/Unit Delay1' */
    SSMR_ac_DW.VeSSMI_k_Ni_1rev_Coeff_prev = VeSSMI_k_Ni_1rev_Coeff;

    /* Update for UnitDelay: '<S302>/Unit Delay' */
    SSMR_ac_DW.VeSSMI_n_Lv2_EngSpd_prev = VeSSMI_n_Lv2_EngSpd_CANFlt;

    /* Update for UnitDelay: '<S273>/Unit Delay' */
    SSMR_ac_DW.VeSSMI_n_WhlSpdFltrd_prev_b = VeSSMI_n_WhlSpdFltrdP1fPx;

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Calc_Lv2Spds'
     */
    /* Sum: '<S203>/Sum2' */
    VeSSMC_n_TempErr2 = VeSSMI_n_Lv2_EngSpd_eTPUFltrd -
        VeSSMI_n_Lv2_EngSpd_CANFlt;

    /* Switch: '<S218>/LV2_Abs_switch' incorporates:
     *  Constant: '<S218>/Constant Value1'
     *  Product: '<S218>/Product'
     *  RelationalOperator: '<S218>/Comparison'
     */
    if (VeSSMC_n_TempErr2 < 0.0F)
    {
        VeSSMR_n_VehSpeed = -VeSSMC_n_TempErr2;
    }
    else
    {
        VeSSMR_n_VehSpeed = VeSSMC_n_TempErr2;
    }

    /* End of Switch: '<S218>/LV2_Abs_switch' */

    /* RelationalOperator: '<S203>/Comparison1' incorporates:
     *  Constant: '<S215>/Calib'
     */
    VeSSMC_b_CANeTPUErrGood = (VeSSMR_n_VehSpeed < KeSSMR_n_EngSpdErrLim);

    /* Outputs for Atomic SubSystem: '<S203>/LV2_LowpassT_Reset_Enabled3' */
    /* Switch: '<S221>/Switch1' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S212>/Calib'
     *  MinMax: '<S221>/Maximum'
     *  Product: '<S221>/Multiplication'
     *  Product: '<S221>/Multiplication1'
     *  Sum: '<S221>/Subtraction'
     *  Sum: '<S221>/Summation'
     *  UnitDelay: '<S221>/Unit Delay'
     */
    VeSSMC_v_MtrASpdFltrd = (((VeSSMI_n_Lv2MtrASpd - VeSSMC_v_MtrASpdFltrd) *
        KeSSMR_t_CANVehSpdFiltdT) * (1.0F / fmaxf(KeSSMR_k_MtrASpdFiltCoef,
        KeSSMR_t_CANVehSpdFiltdT))) + VeSSMC_v_MtrASpdFltrd;

    /* End of Outputs for SubSystem: '<S203>/LV2_LowpassT_Reset_Enabled3' */

    /* Outputs for Atomic SubSystem: '<S203>/LV2_DivideWithProtection' */
    /* Switch: '<S220>/Switch1' incorporates:
     *  Constant: '<S216>/Calib'
     *  Constant: '<S220>/Constant Value'
     *  Constant: '<S220>/Constant Value1'
     *  Constant: '<S220>/Constant Value2'
     *  Constant: '<S220>/Constant Value3'
     *  Logic: '<S220>/AND'
     *  RelationalOperator: '<S220>/Greater Than or Equal '
     *  RelationalOperator: '<S220>/Greater Than or Equal 1'
     *  RelationalOperator: '<S220>/Not Equal'
     *  RelationalOperator: '<S220>/Not Equal1'
     *  Switch: '<S220>/Switch2'
     *  Switch: '<S220>/Switch3'
     */
    if ((VeSSMC_v_MtrASpdFltrd != 0.0F) && (KeSSMR_r_BeltRatio != 0.0F))
    {
        /* Switch: '<S220>/Switch1' incorporates:
         *  Product: '<S220>/Division'
         */
        VeSSMC_n_EngineSpd_P1f = VeSSMC_v_MtrASpdFltrd / KeSSMR_r_BeltRatio;
    }
    else if (VeSSMC_v_MtrASpdFltrd > 0.0F)
    {
        /* Switch: '<S220>/Switch2' incorporates:
         *  Constant: '<S220>/MAXFLOAT'
         *  Switch: '<S220>/Switch1'
         */
        VeSSMC_n_EngineSpd_P1f = 3.402823466E+38F;
    }
    else if (VeSSMC_v_MtrASpdFltrd < 0.0F)
    {
        /* Switch: '<S220>/Switch3' incorporates:
         *  Constant: '<S220>/MINFLOAT'
         *  Switch: '<S220>/Switch1'
         *  Switch: '<S220>/Switch2'
         */
        VeSSMC_n_EngineSpd_P1f = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S220>/Switch1' incorporates:
         *  Constant: '<S220>/Constant Value4'
         *  Switch: '<S220>/Switch2'
         *  Switch: '<S220>/Switch3'
         */
        VeSSMC_n_EngineSpd_P1f = 0.0F;
    }

    /* End of Switch: '<S220>/Switch1' */
    /* End of Outputs for SubSystem: '<S203>/LV2_DivideWithProtection' */

    /* Sum: '<S203>/Sum1' */
    VeSSMC_n_TempErr1 = VeSSMC_n_EngineSpd_P1f - VeSSMI_n_Lv2_EngSpd_eTPUFltrd;

    /* Switch: '<S217>/LV2_Abs_switch' incorporates:
     *  Constant: '<S217>/Constant Value1'
     *  Product: '<S217>/Product'
     *  RelationalOperator: '<S217>/Comparison'
     */
    if (VeSSMC_n_TempErr1 < 0.0F)
    {
        VeSSMR_n_VehSpeed = -VeSSMC_n_TempErr1;
    }
    else
    {
        VeSSMR_n_VehSpeed = VeSSMC_n_TempErr1;
    }

    /* End of Switch: '<S217>/LV2_Abs_switch' */

    /* RelationalOperator: '<S203>/Comparison2' incorporates:
     *  Constant: '<S215>/Calib'
     */
    VeSSMC_b_MtrAeTPUErrGood = (VeSSMR_n_VehSpeed < KeSSMR_n_EngSpdErrLim);

    /* Sum: '<S203>/Sum3' */
    VeSSMC_n_TempErr3 = VeSSMC_n_EngineSpd_P1f - VeSSMI_n_Lv2_EngSpd_CANFlt;

    /* Switch: '<S219>/LV2_Abs_switch' incorporates:
     *  Constant: '<S219>/Constant Value1'
     *  Product: '<S219>/Product'
     *  RelationalOperator: '<S219>/Comparison'
     */
    if (VeSSMC_n_TempErr3 < 0.0F)
    {
        VeSSMR_n_VehSpeed = -VeSSMC_n_TempErr3;
    }
    else
    {
        VeSSMR_n_VehSpeed = VeSSMC_n_TempErr3;
    }

    /* End of Switch: '<S219>/LV2_Abs_switch' */

    /* RelationalOperator: '<S203>/Comparison3' incorporates:
     *  Constant: '<S215>/Calib'
     */
    VeSSMC_b_MtrACANErrGood = (VeSSMR_n_VehSpeed < KeSSMR_n_EngSpdErrLim);

    /* Logic: '<S203>/Logical3' */
    VeSSMC_b_eTPUCANEngSpdFA = ((VeSSMI_b_Lv2_EngSpd_eTPUFA) ||
        (VeSSMI_b_Lv2CAN_EngSpdFA));

    /* Logic: '<S203>/Logical8' */
    VeSSMC_b_eTPUCANEngSpdGood = !VeSSMC_b_eTPUCANEngSpdFA;

    /* Logic: '<S203>/Logical9' */
    VeSSMC_b_UseCAN = ((VeSSMC_b_CANeTPUErrGood) && (VeSSMC_b_eTPUCANEngSpdGood));

    /* Switch: '<S210>/Switch1' */
    if (VeSSMC_b_UseCAN)
    {
        /* Switch: '<S210>/Switch1' */
        VeSSMC_n_TempEngSpd = VeSSMI_n_Lv2_EngSpd_eTPUFltrd;
    }
    else
    {
        /* Switch: '<S210>/Switch1' incorporates:
         *  Constant: '<S214>/Calib'
         */
        VeSSMC_n_TempEngSpd = KeSSMR_n_DefltEngSpd;
    }

    /* End of Switch: '<S210>/Switch1' */

    /* Logic: '<S203>/Logical2' */
    VeSSMC_b_eTPUMtrAEngSpdFA = ((VeSSMI_b_Lv2_EngSpd_eTPUFA) ||
        (VeSSMI_b_Lv2MtrASpdFA));

    /* Logic: '<S203>/Logical4' */
    VeSSMC_b_eTPUMtrAEngSpdGood = !VeSSMC_b_eTPUMtrAEngSpdFA;

    /* Logic: '<S203>/Logical5' */
    VeSSMC_b_UseETPU = ((VeSSMC_b_MtrAeTPUErrGood) &&
                        (VeSSMC_b_eTPUMtrAEngSpdGood));

    /* Logic: '<S203>/Logical1' */
    VeSSMC_b_CANMtrAEngSpdFA = ((VeSSMI_b_Lv2CAN_EngSpdFA) ||
        (VeSSMI_b_Lv2MtrASpdFA));

    /* Logic: '<S203>/Logical6' */
    VeSSMC_b_CANMtrAEngSpdGood = !VeSSMC_b_CANMtrAEngSpdFA;

    /* Logic: '<S203>/Logical7' */
    VeSSMC_b_UseMtrA = ((VeSSMC_b_MtrACANErrGood) && (VeSSMC_b_CANMtrAEngSpdGood));

    /* Logic: '<S203>/Logical' */
    VeSSMC_b_EngSpdGd = (((VeSSMC_b_UseETPU) || (VeSSMC_b_UseMtrA)) ||
                         (VeSSMC_b_UseCAN));

    /* Logic: '<S203>/Logical11' */
    VeSSMC_b_MtrAeTPUErrFA = !VeSSMC_b_MtrAeTPUErrGood;

    /* Logic: '<S203>/Logical12' */
    VeSSMC_b_CANeTPUErrFA = !VeSSMC_b_CANeTPUErrGood;

    /* Logic: '<S203>/Logical13' */
    VeSSMC_b_MtrACANErrFA = !VeSSMC_b_MtrACANErrGood;

    /* Logic: '<S203>/Logical10' */
    VeSSMC_b_EngSpdFA2 = (((VeSSMC_b_MtrAeTPUErrFA) && (VeSSMC_b_CANeTPUErrFA)) &&
                          (VeSSMC_b_MtrACANErrFA));

    /* Logic: '<S203>/Logical15' */
    VeSSMC_b_EngSpdFA1 = !VeSSMC_b_EngSpdGd;

    /* Sum: '<S204>/Sum1' */
    VeSSMC_n_TempErrorSign = VeSSMI_n_NTurbSpd - VeSSMI_n_MtrBSpdP1fPx;

    /* Switch: '<S228>/LV2_Abs_switch' incorporates:
     *  Constant: '<S228>/Constant Value1'
     *  Product: '<S228>/Product'
     *  RelationalOperator: '<S228>/Comparison'
     */
    if (VeSSMC_n_TempErrorSign < 0.0F)
    {
        VeSSMR_n_VehSpeed = -VeSSMC_n_TempErrorSign;
    }
    else
    {
        VeSSMR_n_VehSpeed = VeSSMC_n_TempErrorSign;
    }

    /* End of Switch: '<S228>/LV2_Abs_switch' */

    /* RelationalOperator: '<S204>/Comparison2' incorporates:
     *  Constant: '<S227>/Calib'
     */
    VeSSMC_b_MtrBSpdErrorInRange = (VeSSMR_n_VehSpeed < KeSSMR_n_MtrBSpdErrorLim);

    /* Logic: '<S204>/Logical3' */
    VeSSMC_b_MtrBSpdFA = ((VeSSMI_b_MtrBSpdFAP1fPx) || (VeSSMI_b_NTurbSpdFA));

    /* Logic: '<S204>/Logical4' */
    VeSSMC_b_MtrBTurbSpdGood = !VeSSMC_b_MtrBSpdFA;

    /* Logic: '<S204>/Logical5' */
    VeSSMC_b_AllSpdOK = ((VeSSMC_b_MtrBTurbSpdGood) &&
                         (VeSSMC_b_MtrBSpdErrorInRange));

    /* Logic: '<S204>/Logical2' incorporates:
     *  Constant: '<S223>/Calib'
     */
    VeSSMC_b_AllSpdOK1 = ((KeSSMR_b_EnblMtrBRtnl) && (VeSSMC_b_AllSpdOK));

    /* Logic: '<S204>/Logical1' */
    VeSSMC_b_MtrSpdOK = !VeSSMI_b_MtrBSpdFAP1fPx;

    /* Switch: '<S222>/Switch1' incorporates:
     *  Switch: '<S222>/Switch2'
     */
    if (VeSSMC_b_AllSpdOK1)
    {
        /* Switch: '<S222>/Switch1' */
        VeSSMC_n_MtrbSpdRationalizedP1fPx = VeSSMI_n_MtrBSpdP1fPx;
    }
    else if (VeSSMC_b_MtrSpdOK)
    {
        /* Switch: '<S222>/Switch2' incorporates:
         *  Switch: '<S222>/Switch1'
         */
        VeSSMC_n_MtrbSpdRationalizedP1fPx = VeSSMI_n_MtrBSpdP1fPx;
    }
    else
    {
        /* Switch: '<S222>/Switch1' incorporates:
         *  Constant: '<S226>/Calib'
         *  Switch: '<S222>/Switch2'
         */
        VeSSMC_n_MtrbSpdRationalizedP1fPx = KeSSMR_n_DefaultMtrBSpd;
    }

    /* End of Switch: '<S222>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S204>/LV2_LowpassT_Reset_Enabled1' */
    /* Switch: '<S229>/Switch1' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S224>/Calib'
     *  MinMax: '<S229>/Maximum'
     *  Product: '<S229>/Multiplication'
     *  Product: '<S229>/Multiplication1'
     *  Sum: '<S229>/Subtraction'
     *  Sum: '<S229>/Summation'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    SSMR_ac_DW.VeSSMC_n_MtrBSpdFltrd_prev += ((VeSSMC_n_MtrbSpdRationalizedP1fPx
        - SSMR_ac_DW.VeSSMC_n_MtrBSpdFltrd_prev) * KeSSMR_t_CANVehSpdFiltdT) *
        (1.0F / fmaxf(KeSSMR_k_MtrBSpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT));

    /* End of Outputs for SubSystem: '<S204>/LV2_LowpassT_Reset_Enabled1' */

    /* Logic: '<S204>/Logical6' */
    VeSSMC_b_SignalsOK = ((VeSSMC_b_AllSpdOK1) || (VeSSMC_b_MtrSpdOK));

    /* Switch: '<S205>/Switch' */
    if (VeSSMI_b_NTurbSpdFA)
    {
        /* Switch: '<S205>/Switch' incorporates:
         *  Constant: '<S233>/Calib'
         */
        VeSSMR_n_TurbSpdIntm = KeSSMR_n_DefaultTurbSpd;
    }
    else
    {
        /* Switch: '<S205>/Switch' */
        VeSSMR_n_TurbSpdIntm = VeSSMI_n_NTurbSpd;
    }

    /* End of Switch: '<S205>/Switch' */

    /* Outputs for Atomic SubSystem: '<S205>/LV2_LowpassT_Reset_Enabled4' */
    /* Switch: '<S234>/Switch1' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S231>/Calib'
     *  MinMax: '<S234>/Maximum'
     *  Product: '<S234>/Multiplication'
     *  Product: '<S234>/Multiplication1'
     *  Sum: '<S234>/Subtraction'
     *  Sum: '<S234>/Summation'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    SSMR_ac_DW.VeSSMC_n_TurbSpd_prev += ((VeSSMR_n_TurbSpdIntm -
        SSMR_ac_DW.VeSSMC_n_TurbSpd_prev) * KeSSMR_t_CANVehSpdFiltdT) * (1.0F /
        fmaxf(KeSSMR_k_NTurbSpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT));

    /* End of Outputs for SubSystem: '<S205>/LV2_LowpassT_Reset_Enabled4' */

    /* Logic: '<S206>/Logical2' */
    VeSSMC_b_TransOutGood = !VeSSMI_b_TransOutSpdFA;

    /* Logic: '<S206>/Logical1' incorporates:
     *  Logic: '<S248>/Logical1'
     */
    VeSSMC_b_NotWhlSpdGood = !VeSSMI_b_WhlSpdFA;

    /* Switch: '<S235>/Switch1' incorporates:
     *  Switch: '<S235>/Switch2'
     */
    if (VeSSMC_b_TransOutGood)
    {
        /* Switch: '<S235>/Switch1' */
        VeSSMC_n_TransOutSpd = VeSSMI_n_TransOutSpd;
    }
    else if (VeSSMC_b_NotWhlSpdGood)
    {
        /* Switch: '<S235>/Switch2' incorporates:
         *  Constant: '<S239>/Calib'
         *  Product: '<S206>/Product'
         *  Switch: '<S235>/Switch1'
         */
        VeSSMC_n_TransOutSpd = VeSSMI_n_WhlSpdFltrdP1fPx * KeSSMR_r_FDR;
    }
    else
    {
        /* Switch: '<S235>/Switch1' incorporates:
         *  Constant: '<S238>/Calib'
         *  Switch: '<S235>/Switch2'
         */
        VeSSMC_n_TransOutSpd = KeSSMR_n_DefltTransOutSpd;
    }

    /* End of Switch: '<S235>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S206>/LV2_LowpassT_Reset_Enabled2' */
    /* Switch: '<S240>/Switch1' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S236>/Calib'
     *  MinMax: '<S240>/Maximum'
     *  Product: '<S240>/Multiplication'
     *  Product: '<S240>/Multiplication1'
     *  Sum: '<S240>/Subtraction'
     *  Sum: '<S240>/Summation'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    SSMR_ac_DW.VeSSMC_n_TransOutSpd_prev += ((VeSSMC_n_TransOutSpd -
        SSMR_ac_DW.VeSSMC_n_TransOutSpd_prev) * KeSSMR_t_CANVehSpdFiltdT) *
        (1.0F / fmaxf(KeSSMR_k_TransOutSpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT));

    /* End of Outputs for SubSystem: '<S206>/LV2_LowpassT_Reset_Enabled2' */

    /* Outputs for Atomic SubSystem: '<S250>/LV2_DivideWithProtection' */
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
    if ((VeSSMI_n_TransOutSpd != 0.0F) && (KeSSMR_r_FDR != 0.0F))
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Product: '<S257>/Division'
         */
        VeSSMC_n_TransOutSpd2WhlSpd = VeSSMI_n_TransOutSpd / KeSSMR_r_FDR;
    }
    else if (VeSSMI_n_TransOutSpd > 0.0F)
    {
        /* Switch: '<S257>/Switch2' incorporates:
         *  Constant: '<S257>/MAXFLOAT'
         *  Switch: '<S257>/Switch1'
         */
        VeSSMC_n_TransOutSpd2WhlSpd = 3.402823466E+38F;
    }
    else if (VeSSMI_n_TransOutSpd < 0.0F)
    {
        /* Switch: '<S257>/Switch3' incorporates:
         *  Constant: '<S257>/MINFLOAT'
         *  Switch: '<S257>/Switch1'
         *  Switch: '<S257>/Switch2'
         */
        VeSSMC_n_TransOutSpd2WhlSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S257>/Switch1' incorporates:
         *  Constant: '<S257>/Constant Value4'
         *  Switch: '<S257>/Switch2'
         *  Switch: '<S257>/Switch3'
         */
        VeSSMC_n_TransOutSpd2WhlSpd = 0.0F;
    }

    /* End of Switch: '<S257>/Switch1' */
    /* End of Outputs for SubSystem: '<S250>/LV2_DivideWithProtection' */

    /* Switch: '<S256>/LV2_Abs_switch' incorporates:
     *  Constant: '<S256>/Constant Value1'
     *  RelationalOperator: '<S256>/Comparison'
     */
    if (VeSSMI_n_MtrBSpdP1fPx < 0.0F)
    {
        /* Switch: '<S256>/LV2_Abs_switch' incorporates:
         *  Product: '<S256>/Product'
         */
        VeSSMC_n_MtrBSpdUnSgnd = -VeSSMI_n_MtrBSpdP1fPx;
    }
    else
    {
        /* Switch: '<S256>/LV2_Abs_switch' */
        VeSSMC_n_MtrBSpdUnSgnd = VeSSMI_n_MtrBSpdP1fPx;
    }

    /* End of Switch: '<S256>/LV2_Abs_switch' */

    /* Outputs for Atomic SubSystem: '<S250>/LV2_DivideWithProtection1' */
    /* Switch: '<S258>/Switch1' incorporates:
     *  Constant: '<S255>/Calib'
     *  Constant: '<S258>/Constant Value'
     *  Constant: '<S258>/Constant Value1'
     *  Constant: '<S258>/Constant Value2'
     *  Constant: '<S258>/Constant Value3'
     *  Logic: '<S258>/AND'
     *  RelationalOperator: '<S258>/Greater Than or Equal '
     *  RelationalOperator: '<S258>/Greater Than or Equal 1'
     *  RelationalOperator: '<S258>/Not Equal'
     *  RelationalOperator: '<S258>/Not Equal1'
     *  Switch: '<S258>/Switch2'
     *  Switch: '<S258>/Switch3'
     */
    if ((VeSSMC_n_MtrBSpdUnSgnd != 0.0F) && (KeSSMR_r_RearFDR != 0.0F))
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Product: '<S258>/Division'
         */
        VeSSMC_n_MtrbSpd2WhlSpdP1fPx = VeSSMC_n_MtrBSpdUnSgnd / KeSSMR_r_RearFDR;
    }
    else if (VeSSMC_n_MtrBSpdUnSgnd > 0.0F)
    {
        /* Switch: '<S258>/Switch2' incorporates:
         *  Constant: '<S258>/MAXFLOAT'
         *  Switch: '<S258>/Switch1'
         */
        VeSSMC_n_MtrbSpd2WhlSpdP1fPx = 3.402823466E+38F;
    }
    else if (VeSSMC_n_MtrBSpdUnSgnd < 0.0F)
    {
        /* Switch: '<S258>/Switch3' incorporates:
         *  Constant: '<S258>/MINFLOAT'
         *  Switch: '<S258>/Switch1'
         *  Switch: '<S258>/Switch2'
         */
        VeSSMC_n_MtrbSpd2WhlSpdP1fPx = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S258>/Switch1' incorporates:
         *  Constant: '<S258>/Constant Value4'
         *  Switch: '<S258>/Switch2'
         *  Switch: '<S258>/Switch3'
         */
        VeSSMC_n_MtrbSpd2WhlSpdP1fPx = 0.0F;
    }

    /* End of Switch: '<S258>/Switch1' */
    /* End of Outputs for SubSystem: '<S250>/LV2_DivideWithProtection1' */

    /* Sum: '<S250>/Sum1' */
    VeSSMC_n_MtrBTrnsOutSpdError = VeSSMC_n_TransOutSpd2WhlSpd -
        VeSSMC_n_MtrbSpd2WhlSpdP1fPx;

    /* RelationalOperator: '<S250>/Comparison' incorporates:
     *  Constant: '<S253>/Calib'
     */
    VeSSMC_b_MtrBTrnsOutSpdErrorFA = (VeSSMC_n_MtrBTrnsOutSpdError >
        KeSSMR_n_MtrBTrnsOutSpdError_Lim);

    /* Logic: '<S241>/Logical' incorporates:
     *  Constant: '<S249>/Calib'
     */
    VeSSMC_b_MtrBTrnsSpdFA = ((((VeSSMI_b_MtrBSpdFAP1fPx) ||
        (VeSSMI_b_TransOutSpdFA)) || (KeSSMR_b_DsblMtrTrnsSpd_P1P4)) ||
        (VeSSMC_b_MtrBTrnsOutSpdErrorFA));

    /* Product: '<S250>/Product1' incorporates:
     *  Constant: '<S251>/Calib'
     *  Constant: '<S252>/Calib'
     */
    VeSSMC_v_MtrBSpdVehSpdIntmP1fPx = (VeSSMC_n_MtrbSpd2WhlSpdP1fPx *
        KeSSMR_cf_MtrBSpdVehSpd) * KeSSMR_l_RollingWhlRadius;

    /* Logic: '<S248>/Logical2' */
    VeSSMC_b_CANVehSpdGoodP1fPx = !VeSSMI_b_VehSpdFAP1fPx;

    /* Product: '<S262>/Product' incorporates:
     *  Constant: '<S262>/Constant Value'
     *  Constant: '<S263>/Calib'
     */
    VeSSMC_v_VehSpdFrmWhlSpd = (VeSSMI_n_WhlSpdFltrdP1fPx *
        KeSSMR_l_RollingWhlRadius) * 0.377F;

    /* Logic: '<S248>/Logical1' */
    VeSSMC_b_WhlSpdGoodP1fPx = VeSSMC_b_NotWhlSpdGood;

    /* Logic: '<S248>/Logical3' */
    VeSSMC_b_MtrBTrnsSpdGood = !VeSSMC_b_MtrBTrnsSpdFA;

    /* Switch: '<S259>/Switch1' */
    if (VeSSMC_b_MtrBTrnsSpdGood)
    {
        /* Switch: '<S259>/Switch1' */
        VeSSMC_v_VehSpdFromMtrB = VeSSMC_v_MtrBSpdVehSpdIntmP1fPx;
    }
    else
    {
        /* Switch: '<S259>/Switch1' incorporates:
         *  Constant: '<S261>/Calib'
         */
        VeSSMC_v_VehSpdFromMtrB = KeSSMR_v_DefaultVehSpd;
    }

    /* End of Switch: '<S259>/Switch1' */

    /* Switch: '<S260>/Switch1' incorporates:
     *  Switch: '<S260>/Switch2'
     */
    if (VeSSMC_b_CANVehSpdGoodP1fPx)
    {
        /* Switch: '<S260>/Switch1' */
        VeSSMC_v_VehSpdP1fPx = VeSSMI_v_Lv2CanSigVehSpdP1fPx;
    }
    else if (VeSSMC_b_WhlSpdGoodP1fPx)
    {
        /* Switch: '<S260>/Switch2' incorporates:
         *  Switch: '<S260>/Switch1'
         */
        VeSSMC_v_VehSpdP1fPx = VeSSMC_v_VehSpdFrmWhlSpd;
    }
    else
    {
        /* Switch: '<S260>/Switch1' incorporates:
         *  Switch: '<S260>/Switch2'
         */
        VeSSMC_v_VehSpdP1fPx = VeSSMC_v_VehSpdFromMtrB;
    }

    /* End of Switch: '<S260>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S207>/LV2_LowpassT_Reset_Enabled' */
    /* Switch: '<S247>/Switch1' incorporates:
     *  Constant: '<S209>/Calib'
     *  Constant: '<S243>/Calib'
     *  MinMax: '<S247>/Maximum'
     *  Product: '<S247>/Multiplication'
     *  Product: '<S247>/Multiplication1'
     *  Sum: '<S247>/Subtraction'
     *  Sum: '<S247>/Summation'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d += ((VeSSMC_v_VehSpdP1fPx -
        SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d) * KeSSMR_t_CANVehSpdFiltdT) *
        (1.0F / fmaxf(KeSSMR_k_CANVehSpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT));

    /* End of Outputs for SubSystem: '<S207>/LV2_LowpassT_Reset_Enabled' */

    /* Product: '<S207>/Product1' incorporates:
     *  Constant: '<S242>/Calib'
     *  Constant: '<S245>/Calib'
     */
    VeSSMC_cf_Temp = KeSSMR_cf_MtrBSpdVehSpd * KeSSMR_l_RollingWhlRadius;

    /* Outputs for Atomic SubSystem: '<S207>/LV2_DivideWithProtection1' */
    /* Switch: '<S246>/Switch1' incorporates:
     *  Constant: '<S246>/Constant Value'
     *  Constant: '<S246>/Constant Value1'
     *  Constant: '<S246>/Constant Value2'
     *  Constant: '<S246>/Constant Value3'
     *  Logic: '<S246>/AND'
     *  RelationalOperator: '<S246>/Greater Than or Equal '
     *  RelationalOperator: '<S246>/Greater Than or Equal 1'
     *  RelationalOperator: '<S246>/Not Equal'
     *  RelationalOperator: '<S246>/Not Equal1'
     *  Switch: '<S246>/Switch2'
     *  Switch: '<S246>/Switch3'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    if ((SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d != 0.0F) && (VeSSMC_cf_Temp
            != 0.0F))
    {
        /* Switch: '<S246>/Switch1' incorporates:
         *  Product: '<S246>/Division'
         */
        VeSSMR_n_VehSpeed = SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d /
            VeSSMC_cf_Temp;
    }
    else if (SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d > 0.0F)
    {
        /* Switch: '<S246>/Switch2' incorporates:
         *  Constant: '<S246>/MAXFLOAT'
         *  Switch: '<S246>/Switch1'
         */
        VeSSMR_n_VehSpeed = 3.402823466E+38F;
    }
    else if (SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d < 0.0F)
    {
        /* Switch: '<S246>/Switch3' incorporates:
         *  Constant: '<S246>/MINFLOAT'
         *  Switch: '<S246>/Switch1'
         *  Switch: '<S246>/Switch2'
         */
        VeSSMR_n_VehSpeed = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S246>/Switch1' incorporates:
         *  Constant: '<S246>/Constant Value4'
         *  Switch: '<S246>/Switch2'
         *  Switch: '<S246>/Switch3'
         */
        VeSSMR_n_VehSpeed = 0.0F;
    }

    /* End of Switch: '<S246>/Switch1' */
    /* End of Outputs for SubSystem: '<S207>/LV2_DivideWithProtection1' */
    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_n_VehSpeed' incorporates:
     *  SignalConversion generated from: '<S4>/AngularVehSpw'
     */
    (void)Rte_Write_VeSSMR_n_VehSpeed_Value(VeSSMR_n_VehSpeed);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Calc_Lv2Spds'
     */
    /* Switch: '<S211>/Switch1' incorporates:
     *  Switch: '<S211>/Switch2'
     */
    if (VeSSMC_b_UseETPU)
    {
        /* Outport: '<Root>/VeSSMR_n_EngSpd' incorporates:
         *  SignalConversion generated from: '<S4>/Lv2_EngSpd'
         */
        (void)Rte_Write_VeSSMR_n_EngSpd_Value(VeSSMI_n_Lv2_EngSpd_eTPUFltrd);
    }
    else if (VeSSMC_b_UseMtrA)
    {
        /* Outport: '<Root>/VeSSMR_n_EngSpd' incorporates:
         *  SignalConversion generated from: '<S4>/Lv2_EngSpd'
         *  Switch: '<S211>/Switch2'
         */
        (void)Rte_Write_VeSSMR_n_EngSpd_Value(VeSSMC_n_EngineSpd_P1f);
    }
    else
    {
        /* Outport: '<Root>/VeSSMR_n_EngSpd' incorporates:
         *  SignalConversion generated from: '<S4>/Lv2_EngSpd'
         *  Switch: '<S211>/Switch2'
         */
        (void)Rte_Write_VeSSMR_n_EngSpd_Value(VeSSMC_n_TempEngSpd);
    }

    /* End of Switch: '<S211>/Switch1' */

    /* Outport: '<Root>/VeSSMR_b_EngSpdFA' incorporates:
     *  Logic: '<S203>/Logical14'
     *  SignalConversion generated from: '<S4>/Lv2_EngSpdFA'
     */
    (void)Rte_Write_VeSSMR_b_EngSpdFA_Value((VeSSMC_b_EngSpdFA1) ||
        (VeSSMC_b_EngSpdFA2));

    /* Outport: '<Root>/VeSSMR_b_MtrBSpdFA' incorporates:
     *  Logic: '<S204>/Logical7'
     *  SignalConversion generated from: '<S4>/MtrB_SpdFA'
     */
    (void)Rte_Write_VeSSMR_b_MtrBSpdFA_Value(!VeSSMC_b_SignalsOK);

    /* Outport: '<Root>/VeSSMR_b_TurbSpdFA' incorporates:
     *  Logic: '<S230>/AND'
     *  SignalConversion generated from: '<S4>/NTurbSpdFA_out'
     */
    (void)Rte_Write_VeSSMR_b_TurbSpdFA_Value(VeSSMI_b_NTurbSpdFA);

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_n_TurbSpd' incorporates:
     *  SignalConversion generated from: '<S4>/NTurbSpd_Out'
     *  UnitDelay: '<S234>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_n_TurbSpd_Value(SSMR_ac_DW.VeSSMC_n_TurbSpd_prev);

    /* Outport: '<Root>/VeSSMR_n_MtrBSpd' incorporates:
     *  SignalConversion generated from: '<S4>/Rationalized_MtrBSpd'
     *  UnitDelay: '<S229>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_n_MtrBSpd_Value(SSMR_ac_DW.VeSSMC_n_MtrBSpdFltrd_prev);

    /* Outport: '<Root>/VeSSMR_n_TransOutSpd' incorporates:
     *  SignalConversion generated from: '<S4>/TransOutSpd'
     *  UnitDelay: '<S240>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_n_TransOutSpd_Value
        (SSMR_ac_DW.VeSSMC_n_TransOutSpd_prev);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Calc_Lv2Spds'
     */
    /* Outport: '<Root>/VeSSMR_b_TransOutSpdFA' incorporates:
     *  Logic: '<S206>/Logical7'
     *  SignalConversion generated from: '<S4>/TransOutSpdFA'
     */
    (void)Rte_Write_VeSSMR_b_TransOutSpdFA_Value((VeSSMI_b_TransOutSpdFA) &&
        (VeSSMI_b_WhlSpdFA));

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S4>/VehSpd'
     *  UnitDelay: '<S247>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_v_VehSpd_Value
        (SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev_d);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Calc_Lv2Spds'
     */
    /* Outport: '<Root>/VeSSMR_b_VehSpdFA' incorporates:
     *  Logic: '<S207>/Logical4'
     *  SignalConversion generated from: '<S4>/VehSpdFA'
     */
    (void)Rte_Write_VeSSMR_b_VehSpdFA_Value(((VeSSMI_b_VehSpdFAP1fPx) &&
        (VeSSMI_b_WhlSpdFA)) && (VeSSMC_b_MtrBTrnsSpdFA));

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_P1fPx_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */
#endif

}

#endif

/* Model step function for TID3 */
#if Rte_SysCon_Variant_SSMR_Bev

FUNC(void, SSMR_CODE) SSMR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_SSMR_Bev

    float32 tmpRead;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_1;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_5;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_6;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    TeLTIR_e_KeySts tmpRead_7;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_8;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean rtb_TmpSignalConversionAtVeLTIR_b_Lv2Veh;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    float32 rtb_Sum1;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    float32 rtb_Sum2;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    float32 rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    float32 rtb_Sum3;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean rtb_VeSSMR_b_VehSpdRatFailing;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean rtb_VeSSMR_b_VehSpdFaultFailing;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    boolean rtb_Logical15;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    uint8 rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    uint8 rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn;

#endif

#if Rte_SysCon_Variant_SSMR_Bev

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* Inport: '<Root>/VeLTIR_b_Lv2VehSpdCANC2_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2VehSpdCANC2_FA_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSCMR_v_Lv2VehSpdCANC2' */
    (void)Rte_Read_VeSCMR_v_Lv2VehSpdCANC2_Value(&tmpRead_4);

    /* Inport: '<Root>/VeSCMR_v_Lv2VehSpdCANC' */
    (void)Rte_Read_VeSCMR_v_Lv2VehSpdCANC_Value((&(VeSSMI_v_CANVehSpd)));

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* SignalConversion generated from: '<S1>/VeLTIR_b_Lv2VehSpdCANC_FA' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2VehSpdCANC_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2VehSpdCANC_FA_Value
        (&rtb_TmpSignalConversionAtVeLTIR_b_Lv2Veh);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSMR_BEV_FastTEF_StartCheckpoint'
     */
    /* FunctionCaller: '<S8>/SSMR_BEV_FastTEF_StartCheckpoint' */
    Rte_Call_SSMR_BEV_FastTEF_StartCheckpoint_CheckpointReached();

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSMI_Proc'
     */
    /* Logic: '<S79>/Logical2' */
    VeSSMI_b_VehSpdFA1 = (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Veh && tmpRead_6);

    /* Switch: '<S79>/Switch1' */
    if (rtb_TmpSignalConversionAtVeLTIR_b_Lv2Veh)
    {
        /* Switch: '<S79>/Switch1' incorporates:
         *  Inport: '<Root>/VeSCMR_v_Lv2VehSpdCANC'
         */
        VeSSMI_v_CANVehSpd = tmpRead_4;
    }

    /* End of Switch: '<S79>/Switch1' */

    /* Switch: '<S79>/Switch13' incorporates:
     *  Constant: '<S106>/Calib'
     */
    if (KeSSMR_b_CANVehSpd_OverdEnable)
    {
        /* Switch: '<S79>/Switch13' incorporates:
         *  Constant: '<S107>/Calib'
         */
        VeSSMI_v_Lv2CanSigVehSpd = KeSSMR_v_CANVehSpd_OverdValue;
    }
    else
    {
        /* Switch: '<S79>/Switch13' */
        VeSSMI_v_Lv2CanSigVehSpd = VeSSMI_v_CANVehSpd;
    }

    /* End of Switch: '<S79>/Switch13' */

    /* Switch: '<S79>/Switch14' incorporates:
     *  Constant: '<S104>/Calib'
     */
    if (KeSSMR_b_CANVehSpdFA_OverdEnable)
    {
        /* Switch: '<S79>/Switch14' incorporates:
         *  Constant: '<S105>/Calib'
         */
        VeSSMI_b_VehSpdFA = KeSSMR_b_CANVehSpdFA_OverdValue;
    }
    else
    {
        /* Switch: '<S79>/Switch14' */
        VeSSMI_b_VehSpdFA = VeSSMI_b_VehSpdFA1;
    }

    /* End of Switch: '<S79>/Switch14' */

    /* Outputs for Enabled SubSystem: '<S78>/Determine_MtrBSpd' incorporates:
     *  EnablePort: '<S94>/Enable'
     */
    /* Constant: '<S98>/Calib' */
    if (KeSSMR_b_M182BEV_Enbl)
    {
        /* Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA' */
        (void)Rte_Read_VeLTIR_b_Lv2MtrB_Spd_FA_Value((&(VeSSMI_b_MtrBSpdFA)));

        /* Inport: '<Root>/VeSCMR_n_Lv2MtrB_Spd' */
        (void)Rte_Read_VeSCMR_n_Lv2MtrB_Spd_Value((&(VeSSMI_n_MtrBSpd)));

        /* Switch: '<S94>/Switch4' incorporates:
         *  Constant: '<S102>/Calib'
         */
        if (KeSSMR_b_Lv2MtrB_Spd_OverdEnable)
        {
            /* Switch: '<S94>/Switch4' incorporates:
             *  Constant: '<S103>/Calib'
             *  Inport: '<Root>/VeSCMR_n_Lv2MtrB_Spd'
             */
            VeSSMI_n_MtrBSpd = KeSSMR_n_Lv2MtrB_Spd_OverdValue;
        }

        /* End of Switch: '<S94>/Switch4' */

        /* Switch: '<S94>/Switch2' incorporates:
         *  Constant: '<S100>/Calib'
         */
        if (KeSSMR_b_Lv2MtrB_SpdFA_OverdEnable)
        {
            /* Switch: '<S94>/Switch2' incorporates:
             *  Constant: '<S101>/Calib'
             *  Inport: '<Root>/VeLTIR_b_Lv2MtrB_Spd_FA'
             */
            VeSSMI_b_MtrBSpdFA = KeSSMR_b_Lv2MtrB_SpdFA_OverdValue;
        }

        /* End of Switch: '<S94>/Switch2' */
    }

    /* End of Constant: '<S98>/Calib' */
    /* End of Outputs for SubSystem: '<S78>/Determine_MtrBSpd' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2MtrA_Spd_FA_Value((&(VeSSMI_b_MtrASpdFA)));

    /* Inport: '<Root>/VeSCMR_n_Lv2MtrA_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2MtrA_Spd_Value((&(VeSSMI_n_MtrASpd)));

    /* Inport: '<Root>/VeSCMR_n_Lv2WhlRR_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2WhlRR_Spd_Value(&rtb_Sum3);

    /* Inport: '<Root>/VeSCMR_n_Lv2WhlRL_Spd' */
    (void)Rte_Read_VeSCMR_n_Lv2WhlRL_Spd_Value(&tmpRead);

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSMI_Proc'
     */
    /* Switch: '<S78>/Switch1' incorporates:
     *  Constant: '<S97>/Calib'
     */
    if (KeSSMR_b_Lv2MtrA_Spd_OverdEnable)
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S99>/Calib'
         *  Inport: '<Root>/VeSCMR_n_Lv2MtrA_Spd'
         */
        VeSSMI_n_MtrASpd = KeSSMR_n_Lv2MtrA_Spd_OverdValue;
    }

    /* End of Switch: '<S78>/Switch1' */

    /* Switch: '<S78>/Switch5' incorporates:
     *  Constant: '<S95>/Calib'
     */
    if (KeSSMR_b_Lv2MtrA_SpdFA_OverdEnable)
    {
        /* Switch: '<S78>/Switch5' incorporates:
         *  Constant: '<S96>/Calib'
         *  Inport: '<Root>/VeLTIR_b_Lv2MtrA_Spd_FA'
         */
        VeSSMI_b_MtrASpdFA = KeSSMR_b_Lv2MtrA_SpdFA_OverdValue;
    }

    /* End of Switch: '<S78>/Switch5' */

    /* Sum: '<S77>/Sum1' */
    VeSSMI_n_SumRearWhlSpds = tmpRead + rtb_Sum3;

    /* Outputs for Atomic SubSystem: '<S77>/LV2_DivideWithProtection1' */
    /* Switch: '<S91>/Switch1' incorporates:
     *  Constant: '<S91>/Constant Value'
     *  Constant: '<S91>/Constant Value2'
     *  Constant: '<S91>/Constant Value3'
     *  RelationalOperator: '<S91>/Greater Than or Equal'
     *  RelationalOperator: '<S91>/Greater Than or Equal 1'
     *  RelationalOperator: '<S91>/Not Equal'
     *  Switch: '<S91>/Switch2'
     *  Switch: '<S91>/Switch3'
     */
    if (VeSSMI_n_SumRearWhlSpds != 0.0F)
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S77>/ConstantValue1'
         *  Product: '<S91>/Division'
         */
        VeSSMI_n_AvgRearWhlSpd = VeSSMI_n_SumRearWhlSpds / 2.0F;
    }
    else if (VeSSMI_n_SumRearWhlSpds > 0.0F)
    {
        /* Switch: '<S91>/Switch2' incorporates:
         *  Constant: '<S91>/MAXFLOAT'
         *  Switch: '<S91>/Switch1'
         */
        VeSSMI_n_AvgRearWhlSpd = 3.402823466E+38F;
    }
    else if (VeSSMI_n_SumRearWhlSpds < 0.0F)
    {
        /* Switch: '<S91>/Switch3' incorporates:
         *  Constant: '<S91>/MINFLOAT'
         *  Switch: '<S91>/Switch1'
         *  Switch: '<S91>/Switch2'
         */
        VeSSMI_n_AvgRearWhlSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S91>/Switch1' incorporates:
         *  Constant: '<S91>/Constant Value4'
         *  Switch: '<S91>/Switch2'
         *  Switch: '<S91>/Switch3'
         */
        VeSSMI_n_AvgRearWhlSpd = 0.0F;
    }

    /* End of Switch: '<S91>/Switch1' */
    /* End of Outputs for SubSystem: '<S77>/LV2_DivideWithProtection1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_MedTEB' */

    /* Inport: '<Root>/VeSCMR_b_Lv2TireSizeFA' */
    (void)Rte_Read_VeSCMR_b_Lv2TireSizeFA_Value(&tmpRead_5);

    /* Inport: '<Root>/VeSCMR_l_Lv2TireSize' */
    (void)Rte_Read_VeSCMR_l_Lv2TireSize_Value(&rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs);

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSMI_Proc'
     */
    /* UnitDelay: '<S77>/Unit Delay1' */
    VeSSMI_n_RearWhlSpdFltrd_prev1 = VeSSMI_n_RearWhlSpdFltrd;

    /* Sum: '<S83>/Subtraction1' incorporates:
     *  Constant: '<S87>/Calib'
     *  Product: '<S83>/Multiplication'
     *  Sum: '<S83>/Subtraction'
     */
    VeSSMI_n_RearWhlSpdFltrd = ((VeSSMI_n_AvgRearWhlSpd -
        VeSSMI_n_RearWhlSpdFltrd_prev1) * KeSSMR_k_RearWhlSpdFiltCoef) +
        VeSSMI_n_RearWhlSpdFltrd_prev1;

    /* Product: '<S77>/Product' incorporates:
     *  Constant: '<S85>/Calib'
     */
    VeSSMI_I_ProxRadius = rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs *
        KeSSMR_Cf_CnvrtCircumToRadius;

    /* Switch: '<S77>/Switch2' */
    if (tmpRead_5)
    {
        /* Switch: '<S77>/Switch2' incorporates:
         *  Constant: '<S89>/Calib'
         */
        VeSSMI_I_WhlRadius = KeSSMR_l_RollingWhlRadius;
    }
    else
    {
        /* Switch: '<S77>/Switch2' */
        VeSSMI_I_WhlRadius = VeSSMI_I_ProxRadius;
    }

    /* End of Switch: '<S77>/Switch2' */

    /* Product: '<S81>/Product' incorporates:
     *  Constant: '<S81>/ConstantValue'
     */
    VeSSMI_v_VehSpdFrmRearWhlSpd1 = (VeSSMI_n_RearWhlSpdFltrd *
        VeSSMI_I_WhlRadius) * 0.377F;

    /* Switch: '<S81>/Switch' incorporates:
     *  Constant: '<S92>/Calib'
     */
    if (KeSSMR_b_UseRearWhlSpdsInKmph)
    {
        /* Switch: '<S81>/Switch' */
        VeSSMI_v_VehSpdFrmRearWhlSpd = VeSSMI_n_RearWhlSpdFltrd;
    }
    else
    {
        /* Switch: '<S81>/Switch' */
        VeSSMI_v_VehSpdFrmRearWhlSpd = VeSSMI_v_VehSpdFrmRearWhlSpd1;
    }

    /* End of Switch: '<S81>/Switch' */

    /* Switch: '<S77>/Switch11' incorporates:
     *  Constant: '<S86>/Calib'
     *  Inport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS'
     *  Inport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS'
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_Spd'
     *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_Spd'
     */
    if (KeSSMR_b_EnblAtlantisHigh_SpdSource)
    {
        (void)Rte_Read_VeLTIR_n_Lv2WhlFR_RPS_Value(&rtb_Sum1);
        (void)Rte_Read_VeLTIR_n_Lv2WhlFL_RPS_Value(&rtb_Sum2);

        /* Switch: '<S77>/Switch11' incorporates:
         *  Gain: '<S77>/Gain3'
         *  Inport: '<Root>/VeLTIR_n_Lv2WhlFL_RPS'
         *  Inport: '<Root>/VeLTIR_n_Lv2WhlFR_RPS'
         *  Sum: '<S77>/Sum2'
         */
        VeSSMI_n_SumFrntWhlSpds = (rtb_Sum2 + rtb_Sum1) * 60.0F;
    }
    else
    {
        (void)Rte_Read_VeSCMR_n_Lv2WhlFR_Spd_Value(&rtb_Sum1);
        (void)Rte_Read_VeSCMR_n_Lv2WhlFL_Spd_Value(&rtb_Sum2);

        /* Switch: '<S77>/Switch11' incorporates:
         *  Inport: '<Root>/VeSCMR_n_Lv2WhlFL_Spd'
         *  Inport: '<Root>/VeSCMR_n_Lv2WhlFR_Spd'
         *  Sum: '<S77>/Sum'
         */
        VeSSMI_n_SumFrntWhlSpds = rtb_Sum1 + rtb_Sum2;
    }

    /* End of Switch: '<S77>/Switch11' */

    /* Outputs for Atomic SubSystem: '<S77>/LV2_DivideWithProtection' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Constant: '<S90>/Constant Value'
     *  Constant: '<S90>/Constant Value2'
     *  Constant: '<S90>/Constant Value3'
     *  RelationalOperator: '<S90>/Greater Than or Equal'
     *  RelationalOperator: '<S90>/Greater Than or Equal 1'
     *  RelationalOperator: '<S90>/Not Equal'
     *  Switch: '<S90>/Switch2'
     *  Switch: '<S90>/Switch3'
     */
    if (VeSSMI_n_SumFrntWhlSpds != 0.0F)
    {
        /* Switch: '<S90>/Switch1' incorporates:
         *  Constant: '<S77>/ConstantValue'
         *  Product: '<S90>/Division'
         */
        VeSSMI_n_AvgWhlSpd = VeSSMI_n_SumFrntWhlSpds / 2.0F;
    }
    else if (VeSSMI_n_SumFrntWhlSpds > 0.0F)
    {
        /* Switch: '<S90>/Switch2' incorporates:
         *  Constant: '<S90>/MAXFLOAT'
         *  Switch: '<S90>/Switch1'
         */
        VeSSMI_n_AvgWhlSpd = 3.402823466E+38F;
    }
    else if (VeSSMI_n_SumFrntWhlSpds < 0.0F)
    {
        /* Switch: '<S90>/Switch3' incorporates:
         *  Constant: '<S90>/MINFLOAT'
         *  Switch: '<S90>/Switch1'
         *  Switch: '<S90>/Switch2'
         */
        VeSSMI_n_AvgWhlSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S90>/Switch1' incorporates:
         *  Constant: '<S90>/Constant Value4'
         *  Switch: '<S90>/Switch2'
         *  Switch: '<S90>/Switch3'
         */
        VeSSMI_n_AvgWhlSpd = 0.0F;
    }

    /* End of Switch: '<S90>/Switch1' */
    /* End of Outputs for SubSystem: '<S77>/LV2_DivideWithProtection' */

    /* UnitDelay: '<S77>/Unit Delay' */
    VeSSMI_n_WhlSpdFltrd_prev1 = VeSSMI_n_WhlSpdFltrd;

    /* Sum: '<S84>/Subtraction1' incorporates:
     *  Constant: '<S88>/Calib'
     *  Product: '<S84>/Multiplication'
     *  Sum: '<S84>/Subtraction'
     */
    VeSSMI_n_WhlSpdFltrd = ((VeSSMI_n_AvgWhlSpd - VeSSMI_n_WhlSpdFltrd_prev1) *
                            KeSSMR_k_WhlSpdFiltCoef) +
        VeSSMI_n_WhlSpdFltrd_prev1;

    /* Product: '<S82>/Product' incorporates:
     *  Constant: '<S82>/ConstantValue'
     */
    VeSSMI_v_VehSpdFrmWhlSpd1 = (VeSSMI_n_WhlSpdFltrd * VeSSMI_I_WhlRadius) *
        0.377F;

    /* Switch: '<S82>/Switch' incorporates:
     *  Constant: '<S93>/Calib'
     */
    if (KeSSMR_b_UseWhlSpdsInKmph)
    {
        /* Switch: '<S82>/Switch' */
        VeSSMI_v_VehSpdFrmFroWhlSpd = VeSSMI_n_WhlSpdFltrd;
    }
    else
    {
        /* Switch: '<S82>/Switch' */
        VeSSMI_v_VehSpdFrmFroWhlSpd = VeSSMI_v_VehSpdFrmWhlSpd1;
    }

    /* End of Switch: '<S82>/Switch' */

    /* Switch: '<S77>/Switch1' incorporates:
     *  Constant: '<S86>/Calib'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_Spd_FA'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt'
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_Spd_FA'
     */
    if (KeSSMR_b_EnblAtlantisHigh_SpdSource)
    {
        (void)Rte_Read_VeLTIR_b_Lv2WhlFR_RPS_Flt_Value(&tmpRead_1);
        (void)Rte_Read_VeLTIR_b_Lv2WhlFL_RPS_Flt_Value(&tmpRead_0);

        /* Switch: '<S77>/Switch1' incorporates:
         *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_RPS_Flt'
         *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_RPS_Flt'
         *  Logic: '<S77>/Logical4'
         */
        VeSSMI_b_FroWhlSpdFA = (tmpRead_0 || tmpRead_1);
    }
    else
    {
        (void)Rte_Read_VeLTIR_b_Lv2WhlFR_Spd_FA_Value(&tmpRead_1);
        (void)Rte_Read_VeLTIR_b_Lv2WhlFL_Spd_FA_Value(&tmpRead_0);

        /* Switch: '<S77>/Switch1' incorporates:
         *  Inport: '<Root>/VeLTIR_b_Lv2WhlFL_Spd_FA'
         *  Inport: '<Root>/VeLTIR_b_Lv2WhlFR_Spd_FA'
         *  Logic: '<S77>/Logical1'
         */
        VeSSMI_b_FroWhlSpdFA = (tmpRead_1 || tmpRead_0);
    }

    /* End of Switch: '<S77>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_MedTEB' */

    /* Inport: '<Root>/VeDFIR_b_DiagSystemDsbl' */
    (void)Rte_Read_VeDFIR_b_DiagSystemDsbl_Value(&tmpRead_9);

    /* Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe' */
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value
        (&rtb_VeSSMR_b_VehSpdFaultFailing);

    /* Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl' */
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&tmpRead_8);

    /* Inport: '<Root>/VeLTIR_b_Lv2WhlRR_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2WhlRR_Spd_FA_Value(&tmpRead_3);

    /* Inport: '<Root>/VeLTIR_b_Lv2WhlRL_Spd_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2WhlRL_Spd_FA_Value(&tmpRead_2);

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSMI_Proc'
     */
    /* Logic: '<S77>/Logical2' */
    VeSSMI_b_RearWhlSpdFA = (tmpRead_2 || tmpRead_3);

    /* Logic: '<S80>/Logical1' */
    VeSSMI_b_DiagReset = ((tmpRead_8 || rtb_VeSSMR_b_VehSpdFaultFailing) ||
                          tmpRead_9);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_MedTEB' */

    /* Inport: '<Root>/VeLTIR_b_Lv2KeySts_FA' */
    (void)Rte_Read_VeLTIR_b_Lv2KeySts_FA_Value(&rtb_VeSSMR_b_VehSpdRatFailing);

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/SSMI_Proc'
     */
    /* Switch: '<S80>/Switch2' incorporates:
     *  Inport: '<Root>/VeHWIO_b_Lv2IgnSwitch'
     *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
     */
    if (rtb_VeSSMR_b_VehSpdRatFailing)
    {
        (void)Rte_Read_VeHWIO_b_Lv2IgnSwitch_Value(&rtb_Logical15);

        /* Switch: '<S80>/Switch2' incorporates:
         *  Inport: '<Root>/VeHWIO_b_Lv2IgnSwitch'
         *  Logic: '<S80>/Logical13'
         */
        VeSSMI_b_KeyOff = !rtb_Logical15;
    }
    else
    {
        (void)Rte_Read_VeLTIR_e_Lv2KeySts_Value(&tmpRead_7);

        /* Switch: '<S80>/Switch2' incorporates:
         *  Constant: '<S108>/Constant'
         *  Inport: '<Root>/VeLTIR_e_Lv2KeySts'
         *  RelationalOperator: '<S80>/Comparison3'
         */
        VeSSMI_b_KeyOff = (((uint32)tmpRead_7) == CeLTIR_e_IGN_LK);
    }

    /* End of Switch: '<S80>/Switch2' */

    /* Logic: '<S80>/Logical2' */
    VeSSMI_b_Reset_Fault = ((VeSSMI_b_DiagReset) || (VeSSMI_b_KeyOff));

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Calc_Lv2Spds'
     */
    /* Switch: '<S10>/Switch1' */
    if (VeSSMI_b_MtrASpdFA)
    {
        /* Switch: '<S10>/Switch1' incorporates:
         *  Constant: '<S18>/Calib'
         */
        VeSSMC_n_MtraSpdRationalized = KeSSMR_n_DefaultMtrASpd;
    }
    else
    {
        /* Switch: '<S10>/Switch1' */
        VeSSMC_n_MtraSpdRationalized = VeSSMI_n_MtrASpd;
    }

    /* End of Switch: '<S10>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S10>/LV2_LowpassT_Reset_Enabled1' */
    /* Switch: '<S23>/Switch1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Constant: '<S22>/Calib'
     *  MinMax: '<S23>/Maximum'
     *  Product: '<S23>/Multiplication'
     *  Product: '<S23>/Multiplication1'
     *  Sum: '<S23>/Subtraction'
     *  Sum: '<S23>/Summation'
     *  UnitDelay: '<S23>/Unit Delay'
     */
    VeSSMC_n_MtrASpd = (((VeSSMC_n_MtraSpdRationalized - VeSSMC_n_MtrASpd) *
                         KeSSMR_t_CANVehSpdFiltdT) * (1.0F / fmaxf
                         (KeSSMR_k_MtrASpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT)))
        + VeSSMC_n_MtrASpd;

    /* End of Outputs for SubSystem: '<S10>/LV2_LowpassT_Reset_Enabled1' */

    /* Switch: '<S10>/Switch' */
    if (VeSSMI_b_MtrBSpdFA)
    {
        /* Switch: '<S10>/Switch' incorporates:
         *  Constant: '<S19>/Calib'
         */
        VeSSMC_n_MtrbSpdRationalized = KeSSMR_n_DefaultMtrBSpd;
    }
    else
    {
        /* Switch: '<S10>/Switch' */
        VeSSMC_n_MtrbSpdRationalized = VeSSMI_n_MtrBSpd;
    }

    /* End of Switch: '<S10>/Switch' */

    /* Outputs for Atomic SubSystem: '<S10>/LV2_LowpassT_Reset_Enabled3' */
    /* Switch: '<S24>/Switch1' incorporates:
     *  Constant: '<S17>/Calib'
     *  Constant: '<S22>/Calib'
     *  MinMax: '<S24>/Maximum'
     *  Product: '<S24>/Multiplication'
     *  Product: '<S24>/Multiplication1'
     *  Sum: '<S24>/Subtraction'
     *  Sum: '<S24>/Summation'
     *  UnitDelay: '<S24>/Unit Delay'
     */
    VeSSMC_n_MtrBSpdInter = (((VeSSMC_n_MtrbSpdRationalized -
        VeSSMC_n_MtrBSpdInter) * KeSSMR_t_CANVehSpdFiltdT) * (1.0F / fmaxf
        (KeSSMR_k_MtrBSpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT))) +
        VeSSMC_n_MtrBSpdInter;

    /* End of Outputs for SubSystem: '<S10>/LV2_LowpassT_Reset_Enabled3' */

    /* Logic: '<S25>/Logical2' */
    VeSSMC_b_CANVehSpdGood = !VeSSMI_b_VehSpdFA;

    /* Logic: '<S50>/Logical4' */
    VeSSMC_b_MtrSpdFAInter = ((VeSSMI_b_MtrBSpdFA) && (VeSSMI_b_MtrASpdFA));

    /* Switch: '<S50>/Switch1' incorporates:
     *  Constant: '<S61>/Calib'
     */
    if (KeSSMR_b_M182BEV_Enbl)
    {
        /* Switch: '<S50>/Switch1' */
        VeSSMC_b_MtrSpdFA = VeSSMC_b_MtrSpdFAInter;
    }
    else
    {
        /* Switch: '<S50>/Switch1' */
        VeSSMC_b_MtrSpdFA = VeSSMI_b_MtrASpdFA;
    }

    /* End of Switch: '<S50>/Switch1' */

    /* Logic: '<S25>/Logical3' */
    VeSSMC_b_MtrBorMtrASpdGood = !VeSSMC_b_MtrSpdFA;

    /* Outputs for Atomic SubSystem: '<S51>/LV2_DivideWithProtection' */
    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S55>/Calib'
     *  Constant: '<S57>/Constant Value'
     *  Constant: '<S57>/Constant Value1'
     *  Constant: '<S57>/Constant Value2'
     *  Constant: '<S57>/Constant Value3'
     *  Logic: '<S57>/AND'
     *  RelationalOperator: '<S57>/Greater Than or Equal'
     *  RelationalOperator: '<S57>/Greater Than or Equal 1'
     *  RelationalOperator: '<S57>/Not Equal'
     *  RelationalOperator: '<S57>/Not Equal1'
     *  Switch: '<S57>/Switch2'
     *  Switch: '<S57>/Switch3'
     */
    if ((VeSSMI_n_MtrASpd != 0.0F) && (KeSSMR_r_FDR != 0.0F))
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  Product: '<S57>/Division'
         */
        VeSSMC_n_MtrASpd2WhlSpd = VeSSMI_n_MtrASpd / KeSSMR_r_FDR;
    }
    else if (VeSSMI_n_MtrASpd > 0.0F)
    {
        /* Switch: '<S57>/Switch2' incorporates:
         *  Constant: '<S57>/MAXFLOAT'
         *  Switch: '<S57>/Switch1'
         */
        VeSSMC_n_MtrASpd2WhlSpd = 3.402823466E+38F;
    }
    else if (VeSSMI_n_MtrASpd < 0.0F)
    {
        /* Switch: '<S57>/Switch3' incorporates:
         *  Constant: '<S57>/MINFLOAT'
         *  Switch: '<S57>/Switch1'
         *  Switch: '<S57>/Switch2'
         */
        VeSSMC_n_MtrASpd2WhlSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S57>/Switch1' incorporates:
         *  Constant: '<S57>/Constant Value4'
         *  Switch: '<S57>/Switch2'
         *  Switch: '<S57>/Switch3'
         */
        VeSSMC_n_MtrASpd2WhlSpd = 0.0F;
    }

    /* End of Switch: '<S57>/Switch1' */
    /* End of Outputs for SubSystem: '<S51>/LV2_DivideWithProtection' */

    /* Product: '<S51>/Product1' incorporates:
     *  Constant: '<S51>/ConstantValue'
     */
    VeSSMC_v_MtrASpdVehSpdIntm = (VeSSMC_n_MtrASpd2WhlSpd * 0.377F) *
        VeSSMI_I_WhlRadius;

    /* Outputs for Atomic SubSystem: '<S52>/LV2_DivideWithProtection' */
    /* Switch: '<S60>/Switch1' incorporates:
     *  Constant: '<S58>/Calib'
     *  Constant: '<S60>/Constant Value'
     *  Constant: '<S60>/Constant Value1'
     *  Constant: '<S60>/Constant Value2'
     *  Constant: '<S60>/Constant Value3'
     *  Logic: '<S60>/AND'
     *  RelationalOperator: '<S60>/Greater Than or Equal'
     *  RelationalOperator: '<S60>/Greater Than or Equal 1'
     *  RelationalOperator: '<S60>/Not Equal'
     *  RelationalOperator: '<S60>/Not Equal1'
     *  Switch: '<S60>/Switch2'
     *  Switch: '<S60>/Switch3'
     */
    if ((VeSSMI_n_MtrBSpd != 0.0F) && (KeSSMR_r_FDR != 0.0F))
    {
        /* Switch: '<S60>/Switch1' incorporates:
         *  Product: '<S60>/Division'
         */
        VeSSMC_n_MtrbSpd2WhlSpd = VeSSMI_n_MtrBSpd / KeSSMR_r_FDR;
    }
    else if (VeSSMI_n_MtrBSpd > 0.0F)
    {
        /* Switch: '<S60>/Switch2' incorporates:
         *  Constant: '<S60>/MAXFLOAT'
         *  Switch: '<S60>/Switch1'
         */
        VeSSMC_n_MtrbSpd2WhlSpd = 3.402823466E+38F;
    }
    else if (VeSSMI_n_MtrBSpd < 0.0F)
    {
        /* Switch: '<S60>/Switch3' incorporates:
         *  Constant: '<S60>/MINFLOAT'
         *  Switch: '<S60>/Switch1'
         *  Switch: '<S60>/Switch2'
         */
        VeSSMC_n_MtrbSpd2WhlSpd = -3.402823466E+38F;
    }
    else
    {
        /* Switch: '<S60>/Switch1' incorporates:
         *  Constant: '<S60>/Constant Value4'
         *  Switch: '<S60>/Switch2'
         *  Switch: '<S60>/Switch3'
         */
        VeSSMC_n_MtrbSpd2WhlSpd = 0.0F;
    }

    /* End of Switch: '<S60>/Switch1' */
    /* End of Outputs for SubSystem: '<S52>/LV2_DivideWithProtection' */

    /* Product: '<S52>/Product1' incorporates:
     *  Constant: '<S52>/ConstantValue'
     */
    VeSSMC_v_MtrBSpdVehSpdIntm = (VeSSMC_n_MtrbSpd2WhlSpd * 0.377F) *
        VeSSMI_I_WhlRadius;

    /* Switch: '<S49>/Switch1' */
    if (VeSSMI_b_MtrBSpdFA)
    {
        /* Switch: '<S49>/Switch1' */
        VeSSMC_v_MtrSpdInter = VeSSMC_v_MtrASpdVehSpdIntm;
    }
    else
    {
        /* Switch: '<S49>/Switch1' */
        VeSSMC_v_MtrSpdInter = VeSSMC_v_MtrBSpdVehSpdIntm;
    }

    /* End of Switch: '<S49>/Switch1' */

    /* Switch: '<S49>/Switch2' incorporates:
     *  Constant: '<S53>/Calib'
     */
    if (KeSSMR_b_M182BEV_Enbl)
    {
        /* Switch: '<S49>/Switch2' */
        VeSSMC_v_MtrSpdVehSpdIntm = VeSSMC_v_MtrSpdInter;
    }
    else
    {
        /* Switch: '<S49>/Switch2' */
        VeSSMC_v_MtrSpdVehSpdIntm = VeSSMC_v_MtrASpdVehSpdIntm;
    }

    /* End of Switch: '<S49>/Switch2' */

    /* Switch: '<S54>/LV2_Abs_switch' incorporates:
     *  Constant: '<S54>/Constant Value1'
     *  RelationalOperator: '<S54>/Comparison'
     */
    if (VeSSMC_v_MtrSpdVehSpdIntm < 0.0F)
    {
        /* Switch: '<S54>/LV2_Abs_switch' incorporates:
         *  Product: '<S54>/Product'
         */
        VeSSMC_v_VehSpd_Inter = -VeSSMC_v_MtrSpdVehSpdIntm;
    }
    else
    {
        /* Switch: '<S54>/LV2_Abs_switch' */
        VeSSMC_v_VehSpd_Inter = VeSSMC_v_MtrSpdVehSpdIntm;
    }

    /* End of Switch: '<S54>/LV2_Abs_switch' */

    /* Sum: '<S25>/Sum1' */
    rtb_Sum1 = VeSSMC_v_VehSpd_Inter - VeSSMI_v_Lv2CanSigVehSpd;

    /* Switch: '<S42>/LV2_Abs_switch' incorporates:
     *  Constant: '<S42>/ConstantValue1'
     *  Product: '<S42>/Product'
     *  RelationalOperator: '<S42>/Comparison'
     */
    if (rtb_Sum1 < 0.0F)
    {
        rtb_Sum1 = -rtb_Sum1;
    }

    /* End of Switch: '<S42>/LV2_Abs_switch' */

    /* Logic: '<S25>/Logical4' incorporates:
     *  Constant: '<S40>/Calib'
     *  RelationalOperator: '<S25>/Comparison2'
     */
    VeSSMC_b_MtrVehSpdGood = (((VeSSMC_b_CANVehSpdGood) &&
        (VeSSMC_b_MtrBorMtrASpdGood)) && (rtb_Sum1 < KeSSMR_v_ErrorVehSpdLim));

    /* Logic: '<S25>/Logical7' */
    VeSSMC_b_MtrVehSpdFlt = !VeSSMC_b_MtrVehSpdGood;

    /* Switch: '<S56>/LV2_Abs_switch' incorporates:
     *  Constant: '<S56>/Constant Value1'
     *  RelationalOperator: '<S56>/Comparison'
     */
    if (VeSSMC_v_MtrASpdVehSpdIntm < 0.0F)
    {
        /* Switch: '<S56>/LV2_Abs_switch' incorporates:
         *  Product: '<S56>/Product'
         */
        rtb_Sum1 = -VeSSMC_v_MtrASpdVehSpdIntm;
    }
    else
    {
        /* Switch: '<S56>/LV2_Abs_switch' */
        rtb_Sum1 = VeSSMC_v_MtrASpdVehSpdIntm;
    }

    /* End of Switch: '<S56>/LV2_Abs_switch' */

    /* Sum: '<S25>/Sum2' */
    rtb_Sum2 = VeSSMI_v_VehSpdFrmFroWhlSpd - rtb_Sum1;

    /* Switch: '<S59>/LV2_Abs_switch' incorporates:
     *  Constant: '<S59>/Constant Value1'
     *  RelationalOperator: '<S59>/Comparison'
     */
    if (VeSSMC_v_MtrBSpdVehSpdIntm < 0.0F)
    {
        /* Switch: '<S59>/LV2_Abs_switch' incorporates:
         *  Product: '<S59>/Product'
         */
        rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs = -VeSSMC_v_MtrBSpdVehSpdIntm;
    }
    else
    {
        /* Switch: '<S59>/LV2_Abs_switch' */
        rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs = VeSSMC_v_MtrBSpdVehSpdIntm;
    }

    /* End of Switch: '<S59>/LV2_Abs_switch' */

    /* Sum: '<S25>/Sum3' */
    rtb_Sum3 = VeSSMI_v_VehSpdFrmRearWhlSpd - rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs;

    /* Switch: '<S44>/LV2_Abs_switch' incorporates:
     *  Constant: '<S44>/ConstantValue1'
     *  Product: '<S44>/Product'
     *  RelationalOperator: '<S44>/Comparison'
     */
    if (rtb_Sum3 < 0.0F)
    {
        rtb_Sum3 = -rtb_Sum3;
    }

    /* End of Switch: '<S44>/LV2_Abs_switch' */

    /* Logic: '<S25>/Logical12' incorporates:
     *  Constant: '<S38>/Calib'
     *  Constant: '<S41>/Calib'
     *  Logic: '<S25>/Logical13'
     *  Logic: '<S25>/Logical14'
     *  RelationalOperator: '<S25>/Comparison3'
     */
    VeSSMC_b_RearMtrWhlSpdGood = ((((KeSSMR_b_M182BEV_Enbl) &&
        (!VeSSMI_b_MtrBSpdFA)) && (!VeSSMI_b_RearWhlSpdFA)) && (rtb_Sum3 <
        KeSSMR_v_MtrWhlSpdSpdErrorLim));

    /* Logic: '<S25>/Logical1' */
    VeSSMC_b_WhlSpdGood = !VeSSMI_b_FroWhlSpdFA;

    /* Switch: '<S43>/LV2_Abs_switch' incorporates:
     *  Constant: '<S43>/ConstantValue1'
     *  Product: '<S43>/Product'
     *  RelationalOperator: '<S43>/Comparison'
     */
    if (rtb_Sum2 < 0.0F)
    {
        rtb_Sum2 = -rtb_Sum2;
    }

    /* End of Switch: '<S43>/LV2_Abs_switch' */

    /* Logic: '<S25>/Logical5' incorporates:
     *  Constant: '<S41>/Calib'
     *  Logic: '<S25>/Logical11'
     *  RelationalOperator: '<S25>/Comparison1'
     */
    VeSSMC_b_FroMtrWhlSpdGood = (((!VeSSMI_b_MtrASpdFA) && (VeSSMC_b_WhlSpdGood))
        && (rtb_Sum2 < KeSSMR_v_MtrWhlSpdSpdErrorLim));

    /* Switch: '<S29>/Switch1' incorporates:
     *  Switch: '<S30>/Switch1'
     *  Switch: '<S31>/Switch1'
     *  Switch: '<S32>/Switch1'
     */
    if (VeSSMC_b_MtrVehSpdGood)
    {
        /* Switch: '<S29>/Switch1' */
        VeSSMC_v_VehSpd_Inter = VeSSMI_v_Lv2CanSigVehSpd;
    }
    else if (VeSSMC_b_RearMtrWhlSpdGood)
    {
        /* Switch: '<S30>/Switch1' incorporates:
         *  Switch: '<S29>/Switch1'
         */
        VeSSMC_v_VehSpd_Inter = rtb_VeSSMC_v_MtrBSpdUnSgnd_Abs;
    }
    else if (VeSSMC_b_FroMtrWhlSpdGood)
    {
        /* Switch: '<S31>/Switch1' incorporates:
         *  Switch: '<S29>/Switch1'
         *  Switch: '<S30>/Switch1'
         */
        VeSSMC_v_VehSpd_Inter = rtb_Sum1;
    }
    else
    {
        if (!VeSSMC_b_MtrBorMtrASpdGood)
        {
            /* Switch: '<S29>/Switch1' incorporates:
             *  Constant: '<S39>/Calib'
             *  Switch: '<S30>/Switch1'
             *  Switch: '<S31>/Switch1'
             *  Switch: '<S32>/Switch1'
             */
            VeSSMC_v_VehSpd_Inter = KeSSMR_v_DefaultVehSpd;
        }
    }

    /* End of Switch: '<S29>/Switch1' */

    /* Switch: '<S33>/Switch1' incorporates:
     *  Constant: '<S38>/Calib'
     */
    if (KeSSMR_b_M182BEV_Enbl)
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Logic: '<S25>/Logical16'
         */
        VeSSMC_b_RearMtrWhlSpdFlt = !VeSSMC_b_RearMtrWhlSpdGood;
    }
    else
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S25>/FixedDecrement4'
         */
        VeSSMC_b_RearMtrWhlSpdFlt = true;
    }

    /* End of Switch: '<S33>/Switch1' */

    /* Logic: '<S25>/Logical8' */
    VeSSMC_b_MtrWhlSpdFlt = !VeSSMC_b_FroMtrWhlSpdGood;

    /* Logic: '<S25>/Logical10' */
    rtb_VeSSMR_b_VehSpdRatFailing = (((VeSSMC_b_MtrVehSpdFlt) &&
        (VeSSMC_b_MtrWhlSpdFlt)) && (VeSSMC_b_RearMtrWhlSpdFlt));

    /* Logic: '<S25>/Logical9' */
    VeSSMC_b_MtrBSpdFlt = !VeSSMC_b_MtrBorMtrASpdGood;

    /* Logic: '<S25>/Logical6' */
    rtb_VeSSMR_b_VehSpdFaultFailing = (rtb_VeSSMR_b_VehSpdRatFailing &&
        (VeSSMC_b_MtrBSpdFlt));

    /* Logic: '<S25>/Logical15' incorporates:
     *  Constant: '<S37>/Calib'
     */
    rtb_Logical15 = ((VeSSMI_b_Reset_Fault) || (KeSSMR_b_DisblVehSpdRatFlag));

    /* Switch: '<S46>/dec_if_Ok_else_inc' incorporates:
     *  MinMax: '<S46>/FixPtMinax'
     *  UnitDelay: '<S46>/Unit Delay2'
     */
    if (rtb_VeSSMR_b_VehSpdFaultFailing)
    {
        /* Sum: '<S46>/Inc_Cntr' incorporates:
         *  Constant: '<S35>/Calib'
         *  UnitDelay: '<S46>/Unit Delay2'
         */
        rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr = (uint8)(((uint32)
            SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev) + ((uint32)
            KeSSMR_Cnt_Lv2SpdRatFailCntrInc));

        /* Switch: '<S46>/Switch1' incorporates:
         *  RelationalOperator: '<S46>/Greater Than1'
         *  UnitDelay: '<S46>/Unit Delay2'
         */
        if (rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr <
                SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev)
        {
            /* Switch: '<S46>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S46>/Constant Value3'
             */
            rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr = MAX_uint8_T;
        }

        /* End of Switch: '<S46>/Switch1' */
    }
    else
    {
        if (((sint32)SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev) <= 1)
        {
            /* MinMax: '<S46>/FixPtMinax' */
            SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev = 1U;
        }

        /* Switch: '<S46>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S25>/FixedDecrement2'
         *  Sum: '<S46>/Dec_Cntr'
         */
        rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr = (uint8)((sint32)(((sint32)
            SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev) - 1));
    }

    /* End of Switch: '<S46>/dec_if_Ok_else_inc' */

    /* Switch: '<S46>/Switch3' incorporates:
     *  Constant: '<S36>/Calib'
     *  Constant: '<S46>/Constant Value2'
     *  Logic: '<S46>/Cntr_fail'
     *  RelationalOperator: '<S46>/Enough_counts_to_Fail'
     *  UnitDelay: '<S46>/Unit Delay1'
     */
    if (rtb_Logical15)
    {
        SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev = false;
    }
    else
    {
        SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev =
            ((rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr >=
              KeSSMR_Cnt_Lv2SpdRatFailCntrLim) ||
             (SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev));
    }

    /* End of Switch: '<S46>/Switch3' */

    /* Logic: '<S48>/NOT' incorporates:
     *  Logic: '<S47>/NOT'
     */
    tmpRead_9 = !rtb_Logical15;

    /* Logic: '<S48>/OR1' incorporates:
     *  Logic: '<S48>/NOT'
     *  Logic: '<S48>/OR'
     *  UnitDelay: '<S46>/Unit Delay1'
     *  UnitDelay: '<S48>/Unit Delay1'
     */
    SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev =
        ((SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev) || (tmpRead_9 &&
          (SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev)));

    /* Logic: '<S25>/Logical17' incorporates:
     *  Logic: '<S25>/Logical18'
     *  UnitDelay: '<S48>/Unit Delay1'
     */
    VeSSMC_b_VehSsdFADebCtrInc = (rtb_VeSSMR_b_VehSpdFaultFailing &&
        (!SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev));

    /* Switch: '<S34>/Switch1' */
    if (!VeSSMC_b_VehSsdFADebCtrInc)
    {
        /* Switch: '<S34>/Switch1' */
        VeSSMC_v_VehSpd = VeSSMC_v_VehSpd_Inter;
    }

    /* End of Switch: '<S34>/Switch1' */

    /* Switch: '<S45>/dec_if_Ok_else_inc' incorporates:
     *  MinMax: '<S45>/FixPtMinax'
     *  UnitDelay: '<S45>/Unit Delay2'
     */
    if (rtb_VeSSMR_b_VehSpdRatFailing)
    {
        /* Sum: '<S45>/Inc_Cntr' incorporates:
         *  Constant: '<S35>/Calib'
         *  UnitDelay: '<S45>/Unit Delay2'
         */
        rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn = (uint8)(((uint32)
            SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev) + ((uint32)
            KeSSMR_Cnt_Lv2SpdRatFailCntrInc));

        /* Switch: '<S45>/Switch1' incorporates:
         *  RelationalOperator: '<S45>/Greater Than1'
         *  UnitDelay: '<S45>/Unit Delay2'
         */
        if (rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn <
                SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev)
        {
            /* Switch: '<S45>/dec_if_Ok_else_inc' incorporates:
             *  Constant: '<S45>/Constant Value3'
             */
            rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn = MAX_uint8_T;
        }

        /* End of Switch: '<S45>/Switch1' */
    }
    else
    {
        if (((sint32)SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev) <= 1)
        {
            /* MinMax: '<S45>/FixPtMinax' */
            SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev = 1U;
        }

        /* Switch: '<S45>/dec_if_Ok_else_inc' incorporates:
         *  Constant: '<S25>/FixedDecrement1'
         *  Sum: '<S45>/Dec_Cntr'
         */
        rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn = (uint8)((sint32)(((sint32)
            SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev) - 1));
    }

    /* End of Switch: '<S45>/dec_if_Ok_else_inc' */

    /* Switch: '<S45>/Switch2' incorporates:
     *  Constant: '<S36>/Calib'
     *  Constant: '<S45>/Constant Value2'
     *  Logic: '<S45>/Cntr_fail'
     *  RelationalOperator: '<S45>/Enough_counts_to_Fail'
     *  Switch: '<S45>/Switch3'
     *  Switch: '<S46>/Switch2'
     *  UnitDelay: '<S45>/Unit Delay1'
     */
    if (rtb_Logical15)
    {
        /* MinMax: '<S45>/FixPtMinax' incorporates:
         *  Constant: '<S45>/Constant Value1'
         *  UnitDelay: '<S45>/Unit Delay2'
         */
        SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev = 0U;
        SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev_j = false;

        /* MinMax: '<S46>/FixPtMinax' incorporates:
         *  Constant: '<S45>/Constant Value2'
         *  Constant: '<S46>/Constant Value1'
         *  UnitDelay: '<S45>/Unit Delay1'
         *  UnitDelay: '<S46>/Unit Delay2'
         */
        SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev = 0U;
    }
    else
    {
        /* MinMax: '<S45>/FixPtMinax' incorporates:
         *  UnitDelay: '<S45>/Unit Delay2'
         */
        SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseRatFailed_prev =
            rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn;
        SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev_j =
            ((rtb_VeCSMD_Cnt_Lv2CruiseRatFailed_inc_cn >=
              KeSSMR_Cnt_Lv2SpdRatFailCntrLim) ||
             (SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev_j));

        /* MinMax: '<S46>/FixPtMinax' incorporates:
         *  Constant: '<S36>/Calib'
         *  Logic: '<S45>/Cntr_fail'
         *  RelationalOperator: '<S45>/Enough_counts_to_Fail'
         *  UnitDelay: '<S45>/Unit Delay1'
         *  UnitDelay: '<S46>/Unit Delay2'
         */
        SSMR_ac_DW.VeCSMD_Cnt_Lv2CruiseFailed_prev =
            rtb_VeCSMD_Cnt_Lv2CruiseFailed_inc_cntr;
    }

    /* End of Switch: '<S45>/Switch2' */

    /* Logic: '<S47>/OR1' incorporates:
     *  Logic: '<S47>/OR'
     *  UnitDelay: '<S45>/Unit Delay1'
     *  UnitDelay: '<S47>/Unit Delay1'
     */
    SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev_b =
        ((SSMR_ac_DW.VeCSMD_b_Lv2CruiseFailed_prev_j) || (tmpRead_9 &&
          (SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev_b)));

    /* Switch: '<S50>/Switch' */
    if (!VeSSMC_b_MtrSpdFA)
    {
        /* Switch: '<S50>/Switch2' incorporates:
         *  Constant: '<S62>/Calib'
         *  RelationalOperator: '<S50>/Comparison2'
         */
        if (VeSSMC_v_MtrSpdVehSpdIntm < KeSSMR_n_MtrBSpdForSignedVehSpd)
        {
            /* Switch: '<S50>/Switch' incorporates:
             *  Constant: '<S50>/ConstantValue'
             */
            VeSSMC_v_SpdSignMulFactr = -1.0F;
        }
        else
        {
            /* Switch: '<S50>/Switch' incorporates:
             *  Constant: '<S50>/ConstantValue2'
             */
            VeSSMC_v_SpdSignMulFactr = 1.0F;
        }

        /* End of Switch: '<S50>/Switch2' */
    }

    /* End of Switch: '<S50>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_MedTEB' */

    /* Logic: '<S70>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirRR_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirRR_Stat_FA_Value
        ((&(VeSSMC_b_WhlDirRR_StatFA)));

    /* Logic: '<S71>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirRL_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirRL_Stat_FA_Value
        ((&(VeSSMC_b_WhlDirRL_StatFA)));

    /* Logic: '<S69>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirFR_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirFR_Stat_FA_Value
        ((&(VeSSMC_b_WhlDirFR_StatFA)));

    /* Logic: '<S68>/AND' incorporates:
     *  Inport: '<Root>/VeLTIR_b_Lv2WhlDirFL_Stat_FA'
     */
    (void)Rte_Read_VeLTIR_b_Lv2WhlDirFL_Stat_FA_Value
        ((&(VeSSMC_b_WhlDirFL_StatFA)));

    /* Gain: '<S75>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirRR_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirRR_Stat_Value((&(VeSSMC_e_WhlDirRR_Stat)));

    /* Gain: '<S74>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirRL_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirRL_Stat_Value((&(VeSSMC_e_WhlDirRL_Stat)));

    /* Gain: '<S73>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirFR_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirFR_Stat_Value((&(VeSSMC_e_WhlDirFR_Stat)));

    /* Gain: '<S72>/Gain' incorporates:
     *  Inport: '<Root>/VeSCMR_e_Lv2WhlDirFL_Stat'
     */
    (void)Rte_Read_VeSCMR_e_Lv2WhlDirFL_Stat_Value((&(VeSSMC_e_WhlDirFL_Stat)));

    /* Outputs for Function Call SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Calc_Lv2Spds'
     */
    /* Product: '<S27>/Product1' */
    VeSSMC_v_VehSpdSigned = VeSSMC_v_SpdSignMulFactr * VeSSMC_v_VehSpd;

    /* Outputs for Atomic SubSystem: '<S27>/LV2_LowpassT_Reset_Enabled' */
    /* Switch: '<S66>/Switch1' incorporates:
     *  Constant: '<S63>/Calib'
     *  Constant: '<S64>/Calib'
     *  MinMax: '<S66>/Maximum'
     *  Product: '<S66>/Multiplication'
     *  Product: '<S66>/Multiplication1'
     *  Sum: '<S66>/Subtraction'
     *  Sum: '<S66>/Summation'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev += ((VeSSMC_v_VehSpdSigned -
        SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev) * KeSSMR_t_CANVehSpdFiltdT) *
        (1.0F / fmaxf(KeSSMR_k_CANVehSpdFiltCoef, KeSSMR_t_CANVehSpdFiltdT));

    /* End of Outputs for SubSystem: '<S27>/LV2_LowpassT_Reset_Enabled' */

    /* Outport: '<Root>/VeSSMR_b_MtrASpdFA' incorporates:
     *  Logic: '<S13>/AND'
     *  SignalConversion generated from: '<S1>/MtrA_SpdFA'
     */
    (void)Rte_Write_VeSSMR_b_MtrASpdFA_Value(VeSSMI_b_MtrASpdFA);

    /* Outport: '<Root>/VeSSMR_b_MtrBSpdFA' incorporates:
     *  Logic: '<S14>/AND'
     *  SignalConversion generated from: '<S1>/MtrB_SpdFA'
     */
    (void)Rte_Write_VeSSMR_b_MtrBSpdFA_Value(VeSSMI_b_MtrBSpdFA);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_n_MtrASpd' incorporates:
     *  SignalConversion generated from: '<S1>/Rationalized_MtrASpd'
     */
    (void)Rte_Write_VeSSMR_n_MtrASpd_Value(VeSSMC_n_MtrASpd);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Calc_Lv2Spds'
     */
    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S15>/Calib'
     */
    if (KeSSMR_b_M182BEV_Enbl)
    {
        /* Outport: '<Root>/VeSSMR_n_MtrBSpd' incorporates:
         *  SignalConversion generated from: '<S1>/Rationalized_MtrBSpd'
         */
        (void)Rte_Write_VeSSMR_n_MtrBSpd_Value(VeSSMC_n_MtrBSpdInter);
    }
    else
    {
        /* Outport: '<Root>/VeSSMR_n_MtrBSpd' incorporates:
         *  SignalConversion generated from: '<S1>/Rationalized_MtrBSpd'
         */
        (void)Rte_Write_VeSSMR_n_MtrBSpd_Value(VeSSMC_n_MtrASpd);
    }

    /* End of Switch: '<S10>/Switch2' */

    /* Outport: '<Root>/VeSSMR_b_CANVehSpdNotValid' incorporates:
     *  Logic: '<S28>/AND'
     *  SignalConversion generated from: '<S1>/VeSSMR_b_CANVehSpdNotValid'
     */
    (void)Rte_Write_VeSSMR_b_CANVehSpdNotValid_Value(VeSSMC_b_MtrVehSpdFlt);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeSSMR_b_VehSpdRatFailed' incorporates:
     *  SignalConversion generated from: '<S1>/VeSSMR_b_VehSpdRatFailed'
     *  UnitDelay: '<S47>/Unit Delay1'
     */
    (void)Rte_Write_VeSSMR_b_VehSpdRatFailed_Value
        (SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev_b);

    /* Outport: '<Root>/VeSSMR_v_VehSpd' incorporates:
     *  SignalConversion generated from: '<S1>/VehSpd'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_v_VehSpd_Value
        (SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev);

    /* Outport: '<Root>/VeSSMR_b_VehSpdFA' incorporates:
     *  SignalConversion generated from: '<S1>/VehSpdFA'
     *  UnitDelay: '<S48>/Unit Delay1'
     */
    (void)Rte_Write_VeSSMR_b_VehSpdFA_Value
        (SSMR_ac_DW.VeMMMR_b_Lv2_MtrMdVldtnFlt_prev);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Calc_Lv2Spds'
     */
    /* Outport: '<Root>/VeSSMR_v_VehSpdSignd' incorporates:
     *  Gain: '<S67>/Gain'
     *  SignalConversion generated from: '<S1>/VehSpdSignd'
     *  UnitDelay: '<S66>/Unit Delay'
     */
    (void)Rte_Write_VeSSMR_v_VehSpdSignd_Value
        (SSMR_ac_DW.VeSSMC_v_Lv2CanSigVehSpd_prev);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outputs for Atomic SubSystem: '<S1>/SSMR_BEV_FastTEF_StopCheckpoint' */
    /* FunctionCaller: '<S9>/SSMR_BEV_FastTEF_StopCheckpoint' */
    Rte_Call_SSMR_BEV_FastTEF_StopCheckpoint_CheckpointReached();

    /* End of Outputs for SubSystem: '<S1>/SSMR_BEV_FastTEF_StopCheckpoint' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_MedTEB' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, SSMR_CODE) SSMR_ac_Init(void)
{
    /* Outputs for Atomic SubSystem: '<Root>/SSMR_BEV_PwrOn' */
    /* Outputs for Atomic SubSystem: '<S2>/Sub_Out_Init' */
    /* Outport: '<Root>/VeDFIR_FaultSts_CM_VehSpdPerf' incorporates:
     *  Constant: '<S110>/Constant'
     */
    (void)Rte_Write_VeDFIR_FaultSts_CM_VehSpdPerf_Value(CeDFIB_e_Init);

    /* End of Outputs for SubSystem: '<S2>/Sub_Out_Init' */
    /* End of Outputs for SubSystem: '<Root>/SSMR_BEV_PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
