/*
 * File: FSCR_ac.c
 *
 * Code generated for Simulink model 'FSCR_ac'.
 *
 * Model version                  : 9.118
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:43:07 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "FSCR_ac.h"
#include "look1_iflf_binlca_16a.h"
#include "look1_iu8bflftf_binlca_16a.h"

/* Named constants for Chart: '<S10>/AGS_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Boost_Close_Grill_Req ((uint8)1U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Boost_Open_Grill_Req ((uint8)2U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calib_Failure       ((uint8)3U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calib_Failure_Freeze ((uint8)4U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calib_Failure_Wait  ((uint8)5U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calibration         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calibration_Attempt ((uint8)1U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calibration_Attempt_Failure ((uint8)2U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calibration_Fail    ((uint8)3U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Calibration_Success ((uint8)4U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Close_Pos_Wait      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Failure             ((uint8)2U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Normal_Command      ((uint8)3U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Open_Pos_Wait       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Powerdown           ((uint8)4U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Pwd_Fail            ((uint8)1U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Pwd_Grill_Req       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Pwd_Success         ((uint8)3U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Pwd_Wait            ((uint8)4U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Req_Close_Pos_Calib ((uint8)3U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Req_Open_Pos_Calib  ((uint8)4U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_Start               ((uint8)5U)
#endif

/* Named constants for Chart: '<S212>/StateflowChart' */
#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_a_IN_FSCR_Handshake_TimerEnd_Passed ((uint8)15U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_TimeEnd_Strt ((uint8)2U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer0_Passed ((uint8)3U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer0_Strt ((uint8)4U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer1_Passed ((uint8)5U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer1_Strt ((uint8)6U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer2_Passed ((uint8)7U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer2_Strt ((uint8)8U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer3_Passed ((uint8)9U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer3_Strt ((uint8)10U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer4_Passed ((uint8)11U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer4_Strt ((uint8)12U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer5_Passed ((uint8)13U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Handshake_Timer5_Strt ((uint8)14U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define FSCR_ac_IN_FSCR_Timer_Failed   ((uint8)16U)
#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3
#define F_IN_FSCR_Handshake_DualFanTimer4_Passed ((uint8)1U)
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
#define START_SEC_CALIB_UNSPECIFIED_FSCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCF_b_RadFan_DVC_LimDial = 0;/* Referenced by: '<S541>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCF_b_RadFan_DVC_LimSlct = 0;/* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint16, FSCR_VAR_INIT) KeFSCR_Cnt_AGS2_CalibRq_Cntr = 50U;/* Referenced by: '<S122>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint16, FSCR_VAR_INIT)
    KeFSCR_Cnt_AGS2_CoastDwnDurationTime = 100U;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS2_MaxCalAtmpt = 50U;/* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS2_MaxCalTry = 50U;/* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt = 50U;/* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT)
    KeFSCR_Cnt_AGS2_RoutineCtrl_MaxCalTry = 10U;/* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS2_TotCalMaxAtmpt = 50U;/* Referenced by: '<S127>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint16, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_CalibRq_Cntr = 50U;/* Referenced by: '<S24>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint16, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_CoastDwnDurationTime
    = 100U;                            /* Referenced by: '<S89>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_MaxCalAtmpt = 50U;/* Referenced by: '<S25>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_MaxCalTry = 50U;/* Referenced by: '<S26>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_MaxFrzCalAtmpt = 50U;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_RoutineCtrl_MaxCalTry
    = 10U;                             /* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint8, FSCR_VAR_INIT) KeFSCR_Cnt_AGS_TotCalMaxAtmpt = 50U;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(uint16, FSCR_VAR_INIT) KeFSCR_Cnt_HoodAjar_Aftrrun_Delay =
    12U;                               /* Referenced by: '<S300>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_P_PWRbudget_MinHi = 600.0F;/* Referenced by:
                                                                      * '<S252>/Calib'
                                                                      * '<S269>/Calib'
                                                                      * '<S283>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_P_PWRbudget_MinLo = 550.0F;/* Referenced by:
                                                                      * '<S253>/Calib'
                                                                      * '<S270>/Calib'
                                                                      * '<S284>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS1_MinAchvblPos_INIT =
    0.0F;                              /* Referenced by: '<S576>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_Pct_AGS1_MinAchvblPos_NFDial = 0.0F;/* Referenced by: '<S577>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_AccelPosDevLSP =
    -1.0F;                             /* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_AccelPosDevRSP =
    1.0F;                              /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_AirFlowThrshldHi =
    10.0F;                             /* Referenced by: '<S167>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_AirFlowThrshldLo =
    0.0F;                              /* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_Close = 0.0F;/* Referenced by: '<S128>/Calib' */

#endif

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_MinAchvblPos_INIT =
    0.0F;                              /* Referenced by:
                                        * '<S578>/Calib'
                                        * '<S580>/Calib'
                                        * '<S581>/Calib'
                                        * '<S582>/Calib'
                                        * '<S583>/Calib'
                                        */

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_Pct_AGS2_MinAchvblPos_NFDial = 0.0F;/* Referenced by: '<S579>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_Open = 100.0F;/* Referenced by: '<S129>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_PosCmpThrshold =
    0.5F;                              /* Referenced by: '<S130>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_RadFanPwrDwn =
    0.0F;                              /* Referenced by: '<S131>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_RadFanPwrDwnError =
    0.5F;                              /* Referenced by: '<S132>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_RadFanThrshldHi =
    10.0F;                             /* Referenced by: '<S169>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_RadFanThrshldLo =
    0.0F;                              /* Referenced by: '<S170>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS2_ShtDwnPos = 0.0F;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_AccelPosDevLSP =
    -1.0F;                             /* Referenced by: '<S90>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_AccelPosDevRSP =
    1.0F;                              /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_AirFlowThrshldHi =
    10.0F;                             /* Referenced by: '<S69>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_AirFlowThrshldLo =
    0.0F;                              /* Referenced by: '<S70>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_Close = 0.0F;/* Referenced by: '<S30>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_Open = 100.0F;/* Referenced by: '<S31>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_PosCmpThrshold =
    0.5F;                              /* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_RadFanPwrDwn = 0.0F;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_RadFanPwrDwnError =
    0.5F;                              /* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_RadFanThrshldHi =
    10.0F;                             /* Referenced by: '<S71>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_RadFanThrshldLo =
    0.0F;                              /* Referenced by: '<S72>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_AGS_ShtDwnPos = 0.0F;/* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_EOL_FanPctErr_Min =
    5.0F;                              /* Referenced by: '<S218>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_EOL_HandShk_FanCmd =
    50.0F;                             /* Referenced by: '<S219>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_EOL_HandShk_FanCmdMax =
    100.0F;                            /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_EOL_HandShk_FanCmdMin =
    0.0F;                              /* Referenced by: '<S221>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_Emrgy_RadFanCmd_On =
    80.0F;                             /* Referenced by: '<S271>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_Emrgy_RadFanCmd_OnDft =
    7.0F;                              /* Referenced by: '<S272>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_Emrgy_RadFanCmd_OnLo =
    25.0F;                             /* Referenced by: '<S273>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HCP_DfltFanCmd_delta =
    15.0F;                             /* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HVRadFanCmd_D = 0.0F;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HVRadFanDwnLim = 15.0F;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HVRadFanIncrs_High =
    15.0F;                             /* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HVRadFanIncrs_Low =
    5.0F;                              /* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HVRadFanUpLim = 87.0F;/* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HoodAjar_RadFanCmd =
    51.0F;                             /* Referenced by:
                                        * '<S254>/Calib'
                                        * '<S275>/Calib'
                                        * '<S285>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_HoodAjar_RadFanCmd_Min =
    7.0F;                              /* Referenced by:
                                        * '<S255>/Calib'
                                        * '<S276>/Calib'
                                        * '<S286>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan1DwnLim = 15.0F;/* Referenced by: '<S388>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan1Incrs_High =
    15.0F;                             /* Referenced by: '<S389>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan1Incrs_Low =
    5.0F;                              /* Referenced by: '<S390>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan1UpLim = 87.0F;/* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan2Cmd_D = 0.0F;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan2DwnLim = 15.0F;/* Referenced by: '<S408>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan2Incrs_High =
    15.0F;                             /* Referenced by: '<S409>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan2Incrs_Low =
    5.0F;                              /* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_LVRadFan2UpLim = 87.0F;/* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_NoFlyZoneMax = 35.0F;/* Referenced by:
                                                                      * '<S379>/Calib'
                                                                      * '<S399>/Calib'
                                                                      * '<S419>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_NoFlyZoneMin = 31.0F;/* Referenced by:
                                                                      * '<S380>/Calib'
                                                                      * '<S400>/Calib'
                                                                      * '<S420>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_NoFlyZoneTh = 30.0F;/* Referenced by:
                                                                      * '<S381>/Calib'
                                                                      * '<S401>/Calib'
                                                                      * '<S421>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadFanCmd_D = 0.0F;/* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadFanCmd_INIT = 0.0F;/* Referenced by: '<S584>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadFanCmd_LowLim =
    11.0F;                             /* Referenced by: '<S442>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadFanCmd_NFDial = 0.0F;/* Referenced by: '<S585>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadFanCmd_UpLim = 90.0F;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadHVFanDisable = 7.0F;/* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadHVFanFlt = 0.0F;/* Referenced by: '<S243>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadHVFanOff = 7.0F;/* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadLVFan1Disable = 7.0F;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadLVFan1Flt = 0.0F;/* Referenced by: '<S244>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadLVFan1Off = 7.0F;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadLVFan2Disable = 7.0F;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadLVFan2Flt = 0.0F;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_Pct_RadLVFan2Off = 7.0F;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS2_AmbFrzCond = -273.0F;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS2_AmbTmpThreshldHi =
    10.0F;                             /* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS2_AmbTmpThreshldLo =
    -10.0F;                            /* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS2_EngineClntTempThrshldHi = 10.0F;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS2_EngineClntTempThrshldLo = -10.0F;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMaxHi = 10.0F;/* Referenced by: '<S198>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMaxLo = -10.0F;/* Referenced by: '<S199>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMinHi = 10.0F;/* Referenced by: '<S200>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMinLo = -10.0F;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS2_LTLClnTempThrshldHi =
    10.0F;                             /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS2_LTLClnTempThrshldLo =
    -10.0F;                            /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS_AmbFrzCond = -273.0F;/* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS_AmbTmpThreshldHi =
    10.0F;                             /* Referenced by: '<S75>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS_AmbTmpThreshldLo =
    -10.0F;                            /* Referenced by: '<S76>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS_EngineClntTempThrshldHi = 10.0F;/* Referenced by: '<S81>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS_EngineClntTempThrshldLo = -10.0F;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMaxHi = 10.0F;/* Referenced by: '<S99>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMaxLo = -10.0F;/* Referenced by: '<S100>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMinHi = 10.0F;/* Referenced by: '<S101>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMinLo = -10.0F;/* Referenced by: '<S102>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS_LTLClnTempThrshldHi =
    10.0F;                             /* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_AGS_LTLClnTempThrshldLo =
    -10.0F;                            /* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_T_HoodAjarKeyCrankTimer =
    1.5F;                              /* Referenced by: '<S339>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_BoostEnbl = 0;/* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_BoostReq_D = 0;/* Referenced by: '<S494>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_BoostReq_NFDial = 0;/* Referenced by: '<S586>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_BoostReq_SD = 0;/* Referenced by: '<S495>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_Byp2CalSeq = 0;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalAtmptThrshold_D =
    0;                                 /* Referenced by: '<S498>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT)
    KeFSCR_b_AGS2_CalAtmptThrshold_NFDial = 0;/* Referenced by: '<S587>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalAtmptThrshold_SD =
    0;                                 /* Referenced by: '<S499>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalReq_D = 1;/* Referenced by: '<S484>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalReq_NFDial = 0;/* Referenced by: '<S588>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalReq_SD = 1;/* Referenced by: '<S485>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalSuccess_D = 0;/* Referenced by: '<S492>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalSuccess_NFDial =
    0;                                 /* Referenced by: '<S589>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_CalSuccess_SD = 0;/* Referenced by: '<S493>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_PosReq_SD = 0;/* Referenced by: '<S529>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_RoutineControl_SD =
    0;                                 /* Referenced by: '<S502>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_SleepReq_D = 0;/* Referenced by: '<S496>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_SleepReq_NFDial = 0;/* Referenced by: '<S590>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS2_SleepReq_SD = 0;/* Referenced by: '<S497>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_BoostEnbl = 0;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_BoostReq_D = 0;/* Referenced by: '<S486>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_BoostReq_NFDial = 0;/* Referenced by: '<S591>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_BoostReq_SD = 0;/* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_Byp2CalSeq = 0;/* Referenced by: '<S38>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalAtmptThrshold_D =
    0;                                 /* Referenced by: '<S490>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT)
    KeFSCR_b_AGS_CalAtmptThrshold_NFDial = 0;/* Referenced by: '<S592>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalAtmptThrshold_SD =
    0;                                 /* Referenced by: '<S491>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalReq_D = 1;/* Referenced by: '<S516>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalReq_NFDial = 0;/* Referenced by: '<S593>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalReq_SD = 1;/* Referenced by: '<S517>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalSuccess_D = 0;/* Referenced by: '<S480>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalSuccess_NFDial = 0;/* Referenced by: '<S594>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalSuccess_SD = 0;/* Referenced by: '<S481>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_CalibRq_DelayEnbl = 0;/* Referenced by:
                                                                      * '<S39>/Calib'
                                                                      * '<S137>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_PosReq_SD = 0;/* Referenced by: '<S482>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_RoutineControl_SD = 0;/* Referenced by: '<S500>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_SleepReq_D = 0;/* Referenced by: '<S488>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_SleepReq_NFDial = 0;/* Referenced by: '<S595>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_AGS_SleepReq_SD = 0;/* Referenced by: '<S489>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_BEV_Enable = 0;/* Referenced by: '<S357>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT)
    KeFSCR_b_DisblFunc_HVFuncRejHdAjar_NFDial = 0;/* Referenced by: '<S596>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_EOL_HandShk_DualFan_En =
    0;                                 /* Referenced by: '<S222>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_Enb_PSAHdAjrFanOn_BEV = 0;/* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_EngineONtoEV_Trans_En = 1;/* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_FlashingFlagDsblFunc = 0;/* Referenced by: '<S325>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_FlashingFlag_D = 0;/* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_FlashingFlag_SD = 0;/* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_FrunkProgram = 0;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HVRadFanCmd_SD = 0;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT)
    KeFSCR_b_HV_Functionalities_Rejected_HdAjar_D = 0;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT)
    KeFSCR_b_HV_Functionalities_Rejected_HdAjar_SD = 0;/* Referenced by: '<S528>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjarBatCrit_D = 0;/* Referenced by: '<S518>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjarBatCrit_SD = 0;/* Referenced by: '<S519>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjarCritBatLatch_Slct
    = 0;                               /* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjarEngOffLatch_Slct =
    0;                                 /* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjarOverVoltage = 0;/* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjarRst_Enbl = 1;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjar_D = 0;/* Referenced by: '<S568>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjar_FanOff_SD = 0;/* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HoodAjar_SD = 0;/* Referenced by: '<S569>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_HybEngSysActv_SD = 0;/* Referenced by: '<S558>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_InFieldMode_D = 0;/* Referenced by: '<S554>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_InFieldMode_SD = 0;/* Referenced by: '<S555>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_KeyStatus_SD = 0;/* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_LVRadFan2Cmd_SD = 0;/* Referenced by: '<S508>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_LimitCheckSts_D = 0;/* Referenced by: '<S552>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_LimitCheckSts_SD = 0;/* Referenced by: '<S553>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_NoFlyZone_Enable = 0;/* Referenced by:
                                                                      * '<S372>/Calib'
                                                                      * '<S392>/Calib'
                                                                      * '<S412>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_OverVoltage_D = 0;/* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_OverVoltage_SD = 0;/* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_PowerMode_SD = 0;/* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_PropSysActv_D = 0;/* Referenced by: '<S556>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_PropSysActv_SD = 0;/* Referenced by: '<S557>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFanCmd_SD = 0;/* Referenced by: '<S505>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFanEOL_SleepFlag_D = 0;/* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFanEOL_SleepFlag_INIT =
    0;                                 /* Referenced by: '<S597>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFanEOL_SleepFlag_SD =
    0;                                 /* Referenced by: '<S521>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFanEOL_SleepFlg_NFDial
    = 0;                               /* Referenced by: '<S598>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFanState_Slct = 0;/* Referenced by: '<S315>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_CktHiFlt_Enb = 1;/* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_CntrlCktFlt_Enb =
    1;                                 /* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_CntrlCktLoFlt_Enb =
    1;                                 /* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_FltDtct_D = 0;/* Referenced by: '<S525>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_FltDtct_NFDial = 0;/* Referenced by: '<S599>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_FltDtct_SD = 0;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_IUMPR_CmdOn_D = 0;/* Referenced by: '<S523>/Calib' */

#endif

#if !Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_IUMPR_CmdOn_NFDial
    = 0;                               /* Referenced by: '<S600>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_IUMPR_CmdOn_SD = 0;/* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_M1Fault_Enb = 0;/* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_M2Fault_Enb = 0;/* Referenced by: '<S454>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_M3Fault_Enb = 0;/* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_RadFan_Status_FA_Enb = 0;/* Referenced by: '<S456>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_Slct_HCP_FanCmd = 0;/* Referenced by: '<S277>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_UseNucleusFCCntrls = 0;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(boolean, FSCR_VAR_INIT) KeFSCR_b_isChargingOverride = 1;/* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_dT_KeyCrankSampleTime =
    0.1F;                              /* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS2_AntiFrzOvrPos = CeFSCR_e_Open100;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS2_CoastDownPosition = CeFSCR_e_Open0;/* Referenced by: '<S161>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT) KeFSCR_e_AGS2_PosReq_D =
    CeFSCR_e_Open100;                  /* Referenced by: '<S530>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_4

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS2_PosReq_NFDial = CeFSCR_e_Open100;/* Referenced by: '<S601>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_RoutineControl, FSCR_VAR_INIT)
    KeFSCR_e_AGS2_RoutineControl_D = CeFSCR_e_AGS_Cal_Failed;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_4

static volatile CONST(TeFSCR_e_AGS_RoutineControl, FSCR_VAR_INIT)
    KeFSCR_e_AGS2_RoutineControl_NFDial = CeFSCR_e_AGS_Cal_Failed;/* Referenced by: '<S602>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS2_VehSpdOvrPos = CeFSCR_e_Open100;/* Referenced by: '<S162>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS_AntiFrzOvrPos = CeFSCR_e_Open100;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS_CoastDownPosition = CeFSCR_e_Open0;/* Referenced by: '<S63>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT) KeFSCR_e_AGS_PosReq_D =
    CeFSCR_e_Open100;                  /* Referenced by: '<S483>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_4

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS_PosReq_NFDial = CeFSCR_e_Open100;/* Referenced by: '<S603>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_RoutineControl, FSCR_VAR_INIT)
    KeFSCR_e_AGS_RoutineControl_D = CeFSCR_e_AGS_Cal_Failed;/* Referenced by: '<S501>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_4

static volatile CONST(TeFSCR_e_AGS_RoutineControl, FSCR_VAR_INIT)
    KeFSCR_e_AGS_RoutineControl_NFDial = CeFSCR_e_AGS_Cal_Failed;/* Referenced by: '<S604>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT)
    KeFSCR_e_AGS_VehSpdOvrPos = CeFSCR_e_Open100;/* Referenced by: '<S64>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TeESSR_e_HybEngSysActv, FSCR_VAR_INIT)
    KeFSCR_e_HybEngSysActv_D = CeESSR_e_HybEngEnabledOff;/* Referenced by: '<S559>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TePMDR_e_KeyStatus, FSCR_VAR_INIT) KeFSCR_e_KeyStatus_D =
    CePMDR_e_KeySt_Off;                /* Referenced by: '<S566>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(TePMDR_e_PowerMode, FSCR_VAR_INIT) KeFSCR_e_PowerMode_D =
    CePMDR_e_PowerMode_Off;            /* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_Boost = 100.0F;/* Referenced by: '<S138>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_CalAtmptFailr =
    100.0F;                            /* Referenced by: '<S139>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_CalAtmptFrzFailr =
    100.0F;                            /* Referenced by: '<S140>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_ChgOfMind = 10.0F;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_ClosePos_ReqTime =
    3.5F;                              /* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_ClosePos_WaitTime =
    1.0F;                              /* Referenced by: '<S143>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_OpenPos_ReqTime =
    3.5F;                              /* Referenced by: '<S144>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_OpenPos_WaitTime =
    1.0F;                              /* Referenced by: '<S145>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_PostVentn = 10.0F;/* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_PwrDwnWait = 100.0F;/* Referenced by: '<S147>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_StartState_Wait =
    10.0F;                             /* Referenced by: '<S148>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS2_TskRateCntDwn = 0.1F;/* Referenced by: '<S149>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_Boost = 100.0F;/* Referenced by: '<S40>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_CalAtmptFailr =
    100.0F;                            /* Referenced by: '<S41>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_CalAtmptFrzFailr =
    100.0F;                            /* Referenced by: '<S42>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_ChgOfMind = 10.0F;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_ClosePos_ReqTime =
    3.5F;                              /* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_ClosePos_WaitTime =
    1.0F;                              /* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_OpenPos_ReqTime =
    3.5F;                              /* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_OpenPos_WaitTime =
    1.0F;                              /* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_PostVentn = 10.0F;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_PwrDwnWait = 100.0F;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_StartState_Wait =
    10.0F;                             /* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_AGS_TskRateCntDwn = 0.1F;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_DualFan_TimeOff4 =
    0.5F;                              /* Referenced by: '<S223>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_DualFan_TimeOff5 =
    0.5F;                              /* Referenced by: '<S224>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_DualFan_TimeOff6 =
    0.5F;                              /* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_Fan_SleepTime = 2.5F;/* Referenced by: '<S226>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_Fan_TimeEnd = 0.6F;/* Referenced by: '<S227>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_Fan_TimeOff1 = 0.6F;/* Referenced by: '<S228>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_Fan_TimeOff2 = 0.6F;/* Referenced by: '<S229>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_Fan_TimeOff3 = 1.0F;/* Referenced by: '<S230>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_DVC_Fan_TimeOff4 = 1.5F;/* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_HoodAjar_EngOnTimer =
    3.0F;                              /* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_SampleRate = 0.1F;/* Referenced by: '<S335>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_t_dT = 0.1F;/* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_v_AGS2_AntiFrzVehSpdThrshldHi = 10.0F;/* Referenced by: '<S175>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_v_AGS2_AntiFrzVehSpdThrshldLo = -10.0F;/* Referenced by: '<S176>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_v_AGS2_VehSpdThrshldOvrrHi =
    10.0F;                             /* Referenced by:
                                        * '<S201>/Calib'
                                        * '<S190>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_v_AGS2_VehSpdThrshldOvrrLo =
    -10.0F;                            /* Referenced by:
                                        * '<S202>/Calib'
                                        * '<S191>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_v_AGS_AntiFrzVehSpdThrshldHi = 10.0F;/* Referenced by: '<S77>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT)
    KeFSCR_v_AGS_AntiFrzVehSpdThrshldLo = -10.0F;/* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_v_AGS_VehSpdThrshldOvrrHi =
    10.0F;                             /* Referenced by:
                                        * '<S103>/Calib'
                                        * '<S92>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_v_AGS_VehSpdThrshldOvrrLo =
    -10.0F;                            /* Referenced by:
                                        * '<S104>/Calib'
                                        * '<S93>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_v_NoFlyZone_VehicleSpeed =
    10.0F;                             /* Referenced by:
                                        * '<S373>/Calib'
                                        * '<S393>/Calib'
                                        * '<S413>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KeFSCR_v_VehSpdThrsHld = 50.0F;/* Referenced by:
                                                                      * '<S52>/Calib'
                                                                      * '<S150>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_AGS2_NormalizeFunction
    [11] =
{
    9.0F, 8.0F, 7.0F, 6.0F, 5.0F, 4.0F, 3.0F, 2.0F, 1.0F, 1.0F, 0.0F
} ;                                    /* Referenced by: '<S210>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_AGS_NormalizeFunction
    [11] =
{
    9.0F, 8.0F, 7.0F, 6.0F, 5.0F, 4.0F, 3.0F, 2.0F, 1.0F, 1.0F, 0.0F
} ;                                    /* Referenced by: '<S112>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_DfltFanCmd[7] =
{
    0.0F, 35.0F, 45.0F, 55.0F, 65.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S278>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_DfltHVFanCmd[7] =
{
    0.0F, 35.0F, 45.0F, 55.0F, 65.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S256>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_DfltLVFan2Cmd[7] =
{
    0.0F, 35.0F, 45.0F, 55.0F, 65.0F, 75.0F, 85.0F
} ;                                    /* Referenced by: '<S287>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_MinFanCmd[7] =
{
    7.0F, 7.0F, 7.0F, 17.0F, 17.0F, 54.0F, 54.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_MinHVFanCmd[7] =
{
    7.0F, 7.0F, 7.0F, 17.0F, 17.0F, 54.0F, 54.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_Pct_MinLVFan2Cmd[7] =
{
    7.0F, 7.0F, 7.0F, 17.0F, 17.0F, 54.0F, 54.0F
} ;                                    /* Referenced by: '<S288>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_e_AGS2_NormalizeFunction[11]
    =
{
    100.0F, 75.0F, 50.0F, 35.0F, 30.0F, 25.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F
} ;                                    /* Referenced by: '<S163>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KtFSCR_e_AGS_NormalizeFunction[11]
    =
{
    100.0F, 75.0F, 50.0F, 35.0F, 30.0F, 25.0F, 20.0F, 15.0F, 10.0F, 5.0F, 0.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_AGS2_NormalizeFunction
    [11] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 50.0F, 75.0F, 100.0F
} ;                                    /* Referenced by: '<S210>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_AGS_NormalizeFunction
    [11] =
{
    0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 50.0F, 75.0F, 100.0F
} ;                                    /* Referenced by: '<S112>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_DfltFanCmd[7] =
{
    0.001F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3000.0F
} ;                                    /* Referenced by: '<S278>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_DfltHVFanCmd[7] =
{
    0.001F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3000.0F
} ;                                    /* Referenced by: '<S256>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_DfltLVFan2Cmd[7] =
{
    0.001F, 500.0F, 1000.0F, 1500.0F, 2000.0F, 2500.0F, 3000.0F
} ;                                    /* Referenced by: '<S287>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_MinFanCmd[7] =
{
    0.0001F, 10.0F, 20.0F, 33.0F, 66.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_MinHVFanCmd[7] =
{
    0.0001F, 10.0F, 20.0F, 33.0F, 66.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_Pct_MinLVFan2Cmd[7] =
{
    0.0001F, 10.0F, 20.0F, 33.0F, 66.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S288>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_e_AGS2_NormalizeFunction[11]
    =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F
} ;                                    /* Referenced by: '<S163>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static volatile CONST(float32, FSCR_VAR_INIT) KxFSCR_e_AGS_NormalizeFunction[11]
    =
{
    0.0F, 1.0F, 2.0F, 3.0F, 4.0F, 5.0F, 6.0F, 7.0F, 8.0F, 9.0F, 10.0F
} ;                                    /* Referenced by: '<S65>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_FSCR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FSCR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) EeFSCR_b_HoodAjar_FanOff;/* '<Root>/DSM_3' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) LeFSCR_Pct_AGS2_Pos;/* '<S11>/AGS2_Control' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) LeFSCR_Pct_AGS_Pos;/* '<S10>/AGS_Control' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS2_AccelPosDev;/* '<S183>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS2_AirFlowThrshld;/* '<S166>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS2_HighVehSpdAmbTmpThrshldOvrrMax;/* '<S164>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS2_RadFanThrshld;/* '<S165>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS2_VehSpdCoastDwnOvrr;/* '<S186>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS_AccelPosDev;/* '<S85>/LogicalOperator' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS_AirFlowThrshld;/* '<S67>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS_AmbTmpThreshld;/* '<S58>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS_HighVehSpdAmbTmpThrshldOvrrMax;/* '<S66>/LogicalOperator1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS_RadFanThrshld;/* '<S68>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) LeFSCR_b_AGS_VehSpdCoastDwnOvrr;/* '<S88>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_2 && Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT) LeFSCR_e_AGS2_Pos;/* '<S121>/Switch2' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_1 && Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(TeFSCR_e_AGS_PosRq, FSCR_VAR_INIT) LeFSCR_e_AGS_Pos;/* '<S23>/Switch2' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCF_b_Fan_DVC_Lim_AD;/* '<S534>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCF_b_Fan_DVC_Lim_AM1;/* '<S532>/Merge' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCF_b_Fan_isLimitCheckOk;/* '<S536>/Logical3' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_Emrgy_RadFanCmd_On;/* '<S268>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_DfltFanCmd;/* '<S278>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_DfltHVFanCmd;/* '<S256>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_DfltLVFan2Cmd;/* '<S287>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_MinFanCmd;/* '<S279>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_MinHVFanCmd;/* '<S257>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_MinLVFan2Cmd;/* '<S288>/Vector' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HCP_NormalFanCmd;/* '<S247>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HVRadFanActualCmd_BD;/* '<S366>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HVRadFanActualCmd_BG;/* '<S374>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_HVRadFanCmd_Raw;/* '<S246>/MinMax1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_LVRadFan1ActualCmd_BD;/* '<S386>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_LVRadFan1ActualCmd_BG;/* '<S394>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_LVRadFan2ActualCmd_BD;/* '<S406>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_LVRadFan2ActualCmd_BG;/* '<S414>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_LVRadFan2Cmd_Raw;/* '<S248>/MinMax1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_NormalRadFanCmd_On;/* '<S265>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_RadFanCmd_Raw;/* '<S247>/MinMax1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_RadHVFanActualCmd_Raw;/* '<S13>/Merge2' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_RadLVFan1ActualCmd_Raw;/* '<S13>/Merge' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(float32, FSCR_VAR_INIT) VeFSCR_Pct_RadLVFan2ActualCmd_Raw;/* '<S13>/Merge1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_FlashingFlag_AD;/* '<S547>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjarBatCritSet_Crnk;/* '<S320>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjarBatCrit_Flag;/* '<S312>/Logical7' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjarBatCrit_LatchOff;/* '<S343>/OR2' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_AD;/* '<S549>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_EngineONtoEV_Trans;/* '<S319>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_EngineONtoEV_Trans_LatchON;/* '<S336>/OR1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_FanFaulty_Cond;/* '<S302>/OR1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_FanOff_Cond;/* '<S239>/Logical1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_FanOff_Final;/* '<S239>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_FanOn_Cond;/* '<S239>/Logical6' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_HoodAjar_Set_BD;/* '<S321>/Logical1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met_BD;/* '<S425>/LogicalOperator9' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_InFieldMode_AD;/* '<S551>/Switch3' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_KeyCycle_Set;/* '<S321>/Logical9' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_LimCheckingStatus_AD;/* '<S550>/Switch2' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_Normal_On_Cond;/* '<S239>/Logical' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_OverVoltage;/* '<S546>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_PropSysActv_AD;/* '<S544>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_RadFanOff_Cond;/* '<S239>/Logical9' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(boolean, FSCR_VAR_INIT) VeFSCR_b_RadFan_fault;/* '<S426>/Logical1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(TeESSR_e_HybEngSysActv, FSCR_VAR_INIT) VeFSCR_e_HybEngSysActv_AD;/* '<S545>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(TePMDR_e_KeyStatus, FSCR_VAR_INIT) VeFSCR_e_KeyStatus_AD;/* '<S548>/Switch1' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(TePMDR_e_PowerMode, FSCR_VAR_INIT) VeFSCR_e_PowerMode_AD;/* '<S548>/Switch' */

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static VAR(TeFSCR_e_RadFanState_Adjtd, FSCR_VAR_INIT) VeFSCR_e_RadFanState_Adjtd;/* '<S311>/Switch' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FSCR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FSCR
#include "MemMap.h"

VAR(B_FSCR_ac_T, FSCR_VAR_INIT) FSCR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FSCR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_FSCR
#include "MemMap.h"

VAR(DW_FSCR_ac_T, FSCR_VAR_INIT) FSCR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_FSCR
#include "MemMap.h"

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static float32 FSCR_ac_StateTimeCounter(float32 Time);

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_exit_internal_Calibration(void);

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_Calibration(const boolean *LogicalOperator, const boolean
    *OR1_o);

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static float32 FSCR_ac_StateTimeCounter_k(float32 Time);

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_exit_internal_Calibration_n(void);

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_Calibration_e(const boolean *LogicalOperator_a, const
    boolean *OR1);

#endif

/* Function for Chart: '<S10>/AGS_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static float32 FSCR_ac_StateTimeCounter(float32 Time)
{
    float32 CntDwnTime;

    /* Constant: '<S51>/Calib' */
    /* Graphical Function 'StateTimeCounter': '<S15>:5' */
    /* Transition: '<S15>:7' */
    if (Time > KeFSCR_t_AGS_TskRateCntDwn)
    {
        /* Transition: '<S15>:13' */
        /* Transition: '<S15>:15' */
        CntDwnTime = Time - KeFSCR_t_AGS_TskRateCntDwn;

        /* Transition: '<S15>:17' */
    }
    else
    {
        /* Transition: '<S15>:18' */
        CntDwnTime = 0.0F;
    }

    /* End of Constant: '<S51>/Calib' */
    /* Transition: '<S15>:97' */
    return CntDwnTime;
}

#endif

/* Function for Chart: '<S10>/AGS_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_exit_internal_Calibration(void)
{
    /* Exit Internal 'Calibration': '<S15>:20' */
    switch (FSCR_ac_DW.is_Calibration_e)
    {
      case FSCR_ac_IN_Calibration_Attempt:
        /* Exit Internal 'Calibration_Attempt': '<S15>:32' */
        switch (FSCR_ac_DW.is_Calibration_Attempt_k)
        {
          case FSCR_ac_IN_Req_Close_Pos_Calib:
            /* Exit 'Req_Close_Pos_Calib': '<S15>:28' */
            FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
            FSCR_ac_DW.is_Calibration_Attempt_k = FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case FSCR_ac_IN_Req_Open_Pos_Calib:
            /* Exit 'Req_Open_Pos_Calib': '<S15>:22' */
            FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
            FSCR_ac_DW.is_Calibration_Attempt_k = FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            FSCR_ac_DW.is_Calibration_Attempt_k = FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case FSCR_ac_IN_Calibration_Attempt_Failure:
        /* Exit Internal 'Calibration_Attempt_Failure': '<S15>:126' */
        switch (FSCR_ac_DW.is_Calibration_Attempt_Failure_f)
        {
          case FSCR_ac_IN_Boost_Close_Grill_Req:
            /* Exit 'Boost_Close_Grill_Req': '<S15>:148' */
            FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b = false;
            FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case FSCR_ac_IN_Boost_Open_Grill_Req:
            /* Exit 'Boost_Open_Grill_Req': '<S15>:147' */
            FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
            FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_NO_ACTIVE_CHILD;
        break;

      default:
        FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_NO_ACTIVE_CHILD;
        break;
    }
}

#endif

/* Function for Chart: '<S10>/AGS_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_Calibration(const boolean *LogicalOperator, const boolean
    *OR1_o)
{
    boolean tmp;

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Constant: '<S25>/Calib'
     *  Constant: '<S26>/Calib'
     *  Constant: '<S27>/Calib'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S29>/Calib'
     *  Constant: '<S30>/Calib'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S37>/Calib'
     *  Constant: '<S40>/Calib'
     *  Constant: '<S41>/Calib'
     *  Constant: '<S42>/Calib'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S44>/Calib'
     *  Constant: '<S45>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S47>/Calib'
     *  Constant: '<S48>/Calib'
     */
    /* During 'Calibration': '<S15>:20' */
    if (((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
            CePMTR_e_ENB_All_Thrml)
    {
        /* Transition: '<S15>:122' */
        FSCR_ac_exit_internal_Calibration();
        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Powerdown;

        /* Entry Internal 'Powerdown': '<S15>:100' */
        /* Transition: '<S15>:106' */
        FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_Pwd_Wait;

        /* Entry 'Pwd_Wait': '<S15>:99' */
        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 14U;
        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time = KeFSCR_t_AGS_ChgOfMind;
        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time2 = KeFSCR_t_AGS_PostVentn;
        FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b = false;
    }
    else if ((((sint32)FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 12) ||
             (*LogicalOperator))
    {
        /* Transition: '<S15>:123' */
        FSCR_ac_exit_internal_Calibration();
        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Failure;

        /* Entry 'Failure': '<S15>:61' */
        FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
        LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 13U;
        FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
    }
    else if (((sint32)FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 6)
    {
        /* Transition: '<S15>:124' */
        FSCR_ac_exit_internal_Calibration();
        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Normal_Command;

        /* Entry 'Normal_Command': '<S15>:3' */
        FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = true;
        FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
        FSCR_ac_DW.LeFSCR_b_AGS_Actv = true;
        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 1U;
        FSCR_ac_B.LeFSCR_b_SleepReq_b2 = false;
        FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
    }
    else
    {
        switch (FSCR_ac_DW.is_Calibration_e)
        {
          case FSCR_ac_IN_Calibration_Attempt:
            /* During 'Calibration_Attempt': '<S15>:32' */
            switch (FSCR_ac_DW.is_Calibration_Attempt_k)
            {
              case FSCR_ac_IN_Close_Pos_Wait:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 5U;

                /* During 'Close_Pos_Wait': '<S15>:30' */
                if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S15>:46' */
                    /* Transition: '<S15>:48' */
                    /* Transition: '<S15>:53' */
                    /*  unsuccesfull calibration attempt */
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration_e =
                        FSCR_ac_IN_Calibration_Attempt_Failure;

                    /* Entry Internal 'Calibration_Attempt_Failure': '<S15>:126' */
                    /* Transition: '<S15>:131' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Calib_Failure;

                    /* Entry 'Calib_Failure': '<S15>:145' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 7U;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_CalAtmptFailr;
                }
                else if (((fabsf(LeFSCR_Pct_AGS_Pos -
                                 FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l)
                           < KeFSCR_Pct_AGS_PosCmpThrshold) && (((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45) ==
                           CeTAIR_e_AGS_Calibrated)) &&
                         (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy))
                {
                    /* Transition: '<S15>:36' */
                    /* Transition: '<S15>:56' */
                    /*  succesfull calibration */
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_Calibration_Success;

                    /* Entry 'Calibration_Success': '<S15>:39' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 6U;
                    FSCR_ac_DW.LeFSCR_b_AGS_DfctCalSeqFrz = false;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt = 0U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_DfctCalAtmpt = 0U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt = 0U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt = 0U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Open_Pos_Wait:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 3U;

                /* During 'Open_Pos_Wait': '<S15>:26' */
                if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S15>:47' */
                    /* Transition: '<S15>:53' */
                    /*  unsuccesfull calibration attempt */
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration_e =
                        FSCR_ac_IN_Calibration_Attempt_Failure;

                    /* Entry Internal 'Calibration_Attempt_Failure': '<S15>:126' */
                    /* Transition: '<S15>:131' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Calib_Failure;

                    /* Entry 'Calib_Failure': '<S15>:145' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 7U;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_CalAtmptFailr;
                }
                else if (((fabsf(LeFSCR_Pct_AGS_Pos -
                                 FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l)
                           < KeFSCR_Pct_AGS_PosCmpThrshold) && (((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45) ==
                           CeTAIR_e_AGS_NotCalibrated)) &&
                         (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy))
                {
                    /* Transition: '<S15>:29' */
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_Req_Close_Pos_Calib;

                    /* Entry 'Req_Close_Pos_Calib': '<S15>:28' */
                    LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Close;
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_ClosePos_ReqTime;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 4U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Req_Close_Pos_Calib:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 4U;

                /* During 'Req_Close_Pos_Calib': '<S15>:28' */
                if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S15>:31' */
                    /* Exit 'Req_Close_Pos_Calib': '<S15>:28' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_Close_Pos_Wait;

                    /* Entry 'Close_Pos_Wait': '<S15>:30' */
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_ClosePos_WaitTime;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 5U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;

              default:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 2U;

                /* During 'Req_Open_Pos_Calib': '<S15>:22' */
                if ((FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt >=
                        KeFSCR_Cnt_AGS_MaxCalTry) ||
                        ((FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt >=
                          KeFSCR_Cnt_AGS_RoutineCtrl_MaxCalTry) && (*OR1_o)))
                {
                    /* Transition: '<S15>:51' */
                    /* Transition: '<S15>:52' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold_l = false;

                    /* Transition: '<S15>:53' */
                    /*  unsuccesfull calibration attempt */
                    /* Exit 'Req_Open_Pos_Calib': '<S15>:22' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration_e =
                        FSCR_ac_IN_Calibration_Attempt_Failure;

                    /* Entry Internal 'Calibration_Attempt_Failure': '<S15>:126' */
                    /* Transition: '<S15>:131' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Calib_Failure;

                    /* Entry 'Calib_Failure': '<S15>:145' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 7U;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_CalAtmptFailr;
                }
                else if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S15>:27' */
                    /* Exit 'Req_Open_Pos_Calib': '<S15>:22' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_Open_Pos_Wait;

                    /* Entry 'Open_Pos_Wait': '<S15>:26' */
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_OpenPos_WaitTime;
                    FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold_l = true;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 3U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;
            }
            break;

          case FSCR_ac_IN_Calibration_Attempt_Failure:
            /* During 'Calibration_Attempt_Failure': '<S15>:126' */
            switch (FSCR_ac_DW.is_Calibration_Attempt_Failure_f)
            {
              case FSCR_ac_IN_Boost_Close_Grill_Req:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 10U;

                /* During 'Boost_Close_Grill_Req': '<S15>:148' */
                if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S15>:160' */
                    /* Exit 'Boost_Close_Grill_Req': '<S15>:148' */
                    FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b = false;
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Calib_Failure_Wait;

                    /* Entry 'Calib_Failure_Wait': '<S15>:157' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 11U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_DfctCalAtmpt = (uint8)
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt -
                         FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt);
                    FSCR_ac_DW.LeFSCR_b_AGS_DfctCalSeqFrz =
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt >=
                         KeFSCR_Cnt_AGS_MaxFrzCalAtmpt);
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Boost_Open_Grill_Req:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 9U;

                /* During 'Boost_Open_Grill_Req': '<S15>:147' */
                if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S15>:140' */
                    /* Exit 'Boost_Open_Grill_Req': '<S15>:147' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Boost_Close_Grill_Req;

                    /* Entry 'Boost_Close_Grill_Req': '<S15>:148' */
                    LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Close;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 10U;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time = KeFSCR_t_AGS_Boost;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Calib_Failure:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 7U;

                /* During 'Calib_Failure': '<S15>:145' */
                if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
                        KeFSCR_T_AGS_AmbFrzCond)
                {
                    /* Transition: '<S15>:132' */
                    /* Transition: '<S15>:166' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Calib_Failure_Wait;

                    /* Entry 'Calib_Failure_Wait': '<S15>:157' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 11U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_DfctCalAtmpt = (uint8)
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt -
                         FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt);
                    FSCR_ac_DW.LeFSCR_b_AGS_DfctCalSeqFrz =
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt >=
                         KeFSCR_Cnt_AGS_MaxFrzCalAtmpt);
                }
                else
                {
                    /*  Freeze condition */
                    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi <
                            KeFSCR_T_AGS_AmbFrzCond)
                    {
                        /* Transition: '<S15>:134' */
                        FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                            FSCR_ac_IN_Calib_Failure_Freeze;

                        /* Entry 'Calib_Failure_Freeze': '<S15>:146' */
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 8U;
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                            KeFSCR_t_AGS_CalAtmptFrzFailr;
                        FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt = (uint8)((sint32)
                            (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt) + 1));
                    }
                }
                break;

              case FSCR_ac_IN_Calib_Failure_Freeze:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 8U;

                /* During 'Calib_Failure_Freeze': '<S15>:146' */
                /*  anti-freeze condition */
                tmp = !KeFSCR_b_AGS_BoostEnbl;
                if ((tmp || (FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt >
                             KeFSCR_Cnt_AGS_MaxFrzCalAtmpt)) && ((tmp ||
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt >
                         KeFSCR_Cnt_AGS_MaxFrzCalAtmpt)) ||
                        (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
                         KeFSCR_T_AGS_AmbFrzCond)))
                {
                    /* Transition: '<S15>:159' */
                    /* Transition: '<S15>:166' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Calib_Failure_Wait;

                    /* Entry 'Calib_Failure_Wait': '<S15>:157' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 11U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_DfctCalAtmpt = (uint8)
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt -
                         FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt);
                    FSCR_ac_DW.LeFSCR_b_AGS_DfctCalSeqFrz =
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt >=
                         KeFSCR_Cnt_AGS_MaxFrzCalAtmpt);
                }
                else if ((KeFSCR_b_AGS_BoostEnbl) &&
                         (FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt <=
                          KeFSCR_Cnt_AGS_MaxFrzCalAtmpt))
                {
                    /* Transition: '<S15>:139' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_Boost_Open_Grill_Req;

                    /* Entry 'Boost_Open_Grill_Req': '<S15>:147' */
                    LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 9U;
                    FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b = true;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time = KeFSCR_t_AGS_Boost;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        FSCR_ac_StateTimeCounter
                        (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                }
                break;

              default:
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 11U;

                /* During 'Calib_Failure_Wait': '<S15>:157' */
                /*  exceed maximum number of calibration attempts */
                if (((FSCR_ac_DW.LeFSCR_b_AGS_DfctCalSeqFrz) ||
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_DfctCalAtmpt >=
                         KeFSCR_Cnt_AGS_MaxCalAtmpt)) ||
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt >=
                         KeFSCR_Cnt_AGS_TotCalMaxAtmpt))
                {
                    /* Transition: '<S15>:142' */
                    /* Transition: '<S15>:144' */
                    /*  unsuccessful calibration  */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_Calibration_Fail;

                    /* Entry 'Calibration_Fail': '<S15>:49' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 12U;
                    FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = false;
                }
                else
                {
                    /*  timer expired  */
                    if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                    {
                        /* Transition: '<S15>:161' */
                        /* Transition: '<S15>:162' */
                        /*  new calibration attempt  */
                        FSCR_ac_DW.is_Calibration_Attempt_Failure_f =
                            FSCR_ac_IN_NO_ACTIVE_CHILD;
                        FSCR_ac_DW.is_Calibration_e =
                            FSCR_ac_IN_Calibration_Attempt;

                        /* Entry Internal 'Calibration_Attempt': '<S15>:32' */
                        /* Transition: '<S15>:23' */
                        FSCR_ac_DW.is_Calibration_Attempt_k =
                            FSCR_ac_IN_Req_Open_Pos_Calib;

                        /* Entry 'Req_Open_Pos_Calib': '<S15>:22' */
                        LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                        FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                            KeFSCR_t_AGS_OpenPos_ReqTime;
                        FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt = (uint8)((sint32)
                            (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt) + 1));
                        FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt = (uint8)((sint32)
                            (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt) + 1));
                        FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 2U;
                    }
                    else
                    {
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                            FSCR_ac_StateTimeCounter
                            (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                    }
                }
                break;
            }
            break;

          case FSCR_ac_IN_Calibration_Fail:
            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 12U;
            FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = false;

            /* During 'Calibration_Fail': '<S15>:49' */
            break;

          default:
            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 6U;

            /* During 'Calibration_Success': '<S15>:39' */
            break;
        }
    }

    /* End of SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
}

#endif

/* Function for Chart: '<S11>/AGS2_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static float32 FSCR_ac_StateTimeCounter_k(float32 Time)
{
    float32 CntDwnTime;

    /* Constant: '<S149>/Calib' */
    /* Graphical Function 'StateTimeCounter': '<S113>:5' */
    /* Transition: '<S113>:7' */
    if (Time > KeFSCR_t_AGS2_TskRateCntDwn)
    {
        /* Transition: '<S113>:13' */
        /* Transition: '<S113>:15' */
        CntDwnTime = Time - KeFSCR_t_AGS2_TskRateCntDwn;

        /* Transition: '<S113>:17' */
    }
    else
    {
        /* Transition: '<S113>:18' */
        CntDwnTime = 0.0F;
    }

    /* End of Constant: '<S149>/Calib' */
    /* Transition: '<S113>:97' */
    return CntDwnTime;
}

#endif

/* Function for Chart: '<S11>/AGS2_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_exit_internal_Calibration_n(void)
{
    /* Exit Internal 'Calibration': '<S113>:20' */
    switch (FSCR_ac_DW.is_Calibration)
    {
      case FSCR_ac_IN_Calibration_Attempt:
        /* Exit Internal 'Calibration_Attempt': '<S113>:32' */
        switch (FSCR_ac_DW.is_Calibration_Attempt)
        {
          case FSCR_ac_IN_Req_Close_Pos_Calib:
            /* Exit 'Req_Close_Pos_Calib': '<S113>:28' */
            FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
            FSCR_ac_DW.is_Calibration_Attempt = FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case FSCR_ac_IN_Req_Open_Pos_Calib:
            /* Exit 'Req_Open_Pos_Calib': '<S113>:22' */
            FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
            FSCR_ac_DW.is_Calibration_Attempt = FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            FSCR_ac_DW.is_Calibration_Attempt = FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        FSCR_ac_DW.is_Calibration = FSCR_ac_IN_NO_ACTIVE_CHILD;
        break;

      case FSCR_ac_IN_Calibration_Attempt_Failure:
        /* Exit Internal 'Calibration_Attempt_Failure': '<S113>:126' */
        switch (FSCR_ac_DW.is_Calibration_Attempt_Failure)
        {
          case FSCR_ac_IN_Boost_Close_Grill_Req:
            /* Exit 'Boost_Close_Grill_Req': '<S113>:148' */
            FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m = false;
            FSCR_ac_DW.is_Calibration_Attempt_Failure =
                FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case FSCR_ac_IN_Boost_Open_Grill_Req:
            /* Exit 'Boost_Open_Grill_Req': '<S113>:147' */
            FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
            FSCR_ac_DW.is_Calibration_Attempt_Failure =
                FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            FSCR_ac_DW.is_Calibration_Attempt_Failure =
                FSCR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        FSCR_ac_DW.is_Calibration = FSCR_ac_IN_NO_ACTIVE_CHILD;
        break;

      default:
        FSCR_ac_DW.is_Calibration = FSCR_ac_IN_NO_ACTIVE_CHILD;
        break;
    }
}

#endif

/* Function for Chart: '<S11>/AGS2_Control' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

static void FSCR_ac_Calibration_e(const boolean *LogicalOperator_a, const
    boolean *OR1)
{
    boolean tmp;

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Constant: '<S123>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S125>/Calib'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Calib'
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  Constant: '<S138>/Calib'
     *  Constant: '<S139>/Calib'
     *  Constant: '<S140>/Calib'
     *  Constant: '<S141>/Calib'
     *  Constant: '<S142>/Calib'
     *  Constant: '<S143>/Calib'
     *  Constant: '<S144>/Calib'
     *  Constant: '<S145>/Calib'
     *  Constant: '<S146>/Calib'
     */
    /* During 'Calibration': '<S113>:20' */
    if (((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
            CePMTR_e_ENB_All_Thrml)
    {
        /* Transition: '<S113>:122' */
        FSCR_ac_exit_internal_Calibration_n();
        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Powerdown;

        /* Entry Internal 'Powerdown': '<S113>:100' */
        /* Transition: '<S113>:106' */
        FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Wait;

        /* Entry 'Pwd_Wait': '<S113>:99' */
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 14U;
        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time = KeFSCR_t_AGS2_ChgOfMind;
        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time2 = KeFSCR_t_AGS2_PostVentn;
        FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m = false;
    }
    else if ((((sint32)FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 12) ||
             (*LogicalOperator_a))
    {
        /* Transition: '<S113>:123' */
        FSCR_ac_exit_internal_Calibration_n();
        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Failure;

        /* Entry 'Failure': '<S113>:61' */
        FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
        LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 13U;
        FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
    }
    else if (((sint32)FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 6)
    {
        /* Transition: '<S113>:124' */
        FSCR_ac_exit_internal_Calibration_n();
        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Normal_Command;

        /* Entry 'Normal_Command': '<S113>:3' */
        FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = true;
        FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
        FSCR_ac_DW.LeFSCR_b_AGS2_Actv = true;
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 1U;
        FSCR_ac_B.LeFSCR_b_SleepReq_a = false;
        FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
    }
    else
    {
        switch (FSCR_ac_DW.is_Calibration)
        {
          case FSCR_ac_IN_Calibration_Attempt:
            /* During 'Calibration_Attempt': '<S113>:32' */
            switch (FSCR_ac_DW.is_Calibration_Attempt)
            {
              case FSCR_ac_IN_Close_Pos_Wait:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 5U;

                /* During 'Close_Pos_Wait': '<S113>:30' */
                if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S113>:46' */
                    /* Transition: '<S113>:48' */
                    /* Transition: '<S113>:53' */
                    /*  unsuccesfull calibration attempt */
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration =
                        FSCR_ac_IN_Calibration_Attempt_Failure;

                    /* Entry Internal 'Calibration_Attempt_Failure': '<S113>:126' */
                    /* Transition: '<S113>:131' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Calib_Failure;

                    /* Entry 'Calib_Failure': '<S113>:145' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 7U;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_CalAtmptFailr;
                }
                else if (((fabsf(LeFSCR_Pct_AGS2_Pos -
                                 FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c)
                           < KeFSCR_Pct_AGS2_PosCmpThrshold) && (((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f) ==
                           CeTAIR_e_AGS_Calibrated)) &&
                         (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5))
                {
                    /* Transition: '<S113>:36' */
                    /* Transition: '<S113>:56' */
                    /*  succesfull calibration */
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration = FSCR_ac_IN_Calibration_Success;

                    /* Entry 'Calibration_Success': '<S113>:39' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 6U;
                    FSCR_ac_DW.LeFSCR_b_AGS2_DfctCalSeqFrz = false;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt = 0U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_DfctCalAtmpt = 0U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt = 0U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt = 0U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Open_Pos_Wait:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 3U;

                /* During 'Open_Pos_Wait': '<S113>:26' */
                if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S113>:47' */
                    /* Transition: '<S113>:53' */
                    /*  unsuccesfull calibration attempt */
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration =
                        FSCR_ac_IN_Calibration_Attempt_Failure;

                    /* Entry Internal 'Calibration_Attempt_Failure': '<S113>:126' */
                    /* Transition: '<S113>:131' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Calib_Failure;

                    /* Entry 'Calib_Failure': '<S113>:145' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 7U;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_CalAtmptFailr;
                }
                else if (((fabsf(LeFSCR_Pct_AGS2_Pos -
                                 FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c)
                           < KeFSCR_Pct_AGS2_PosCmpThrshold) && (((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f) ==
                           CeTAIR_e_AGS_NotCalibrated)) &&
                         (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5))
                {
                    /* Transition: '<S113>:29' */
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_Req_Close_Pos_Calib;

                    /* Entry 'Req_Close_Pos_Calib': '<S113>:28' */
                    LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Close;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_ClosePos_ReqTime;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 4U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Req_Close_Pos_Calib:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 4U;

                /* During 'Req_Close_Pos_Calib': '<S113>:28' */
                if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S113>:31' */
                    /* Exit 'Req_Close_Pos_Calib': '<S113>:28' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_Close_Pos_Wait;

                    /* Entry 'Close_Pos_Wait': '<S113>:30' */
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_ClosePos_WaitTime;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 5U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;

              default:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 2U;

                /* During 'Req_Open_Pos_Calib': '<S113>:22' */
                if ((FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt >=
                        KeFSCR_Cnt_AGS2_MaxCalTry) ||
                        ((FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt >=
                          KeFSCR_Cnt_AGS2_RoutineCtrl_MaxCalTry) && (*OR1)))
                {
                    /* Transition: '<S113>:51' */
                    /* Transition: '<S113>:52' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold_d = false;

                    /* Transition: '<S113>:53' */
                    /*  unsuccesfull calibration attempt */
                    /* Exit 'Req_Open_Pos_Calib': '<S113>:22' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration =
                        FSCR_ac_IN_Calibration_Attempt_Failure;

                    /* Entry Internal 'Calibration_Attempt_Failure': '<S113>:126' */
                    /* Transition: '<S113>:131' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Calib_Failure;

                    /* Entry 'Calib_Failure': '<S113>:145' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 7U;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_CalAtmptFailr;
                }
                else if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S113>:27' */
                    /* Exit 'Req_Open_Pos_Calib': '<S113>:22' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                    FSCR_ac_DW.is_Calibration_Attempt = FSCR_ac_IN_Open_Pos_Wait;

                    /* Entry 'Open_Pos_Wait': '<S113>:26' */
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_OpenPos_WaitTime;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold_d = true;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 3U;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;
            }
            break;

          case FSCR_ac_IN_Calibration_Attempt_Failure:
            /* During 'Calibration_Attempt_Failure': '<S113>:126' */
            switch (FSCR_ac_DW.is_Calibration_Attempt_Failure)
            {
              case FSCR_ac_IN_Boost_Close_Grill_Req:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 10U;

                /* During 'Boost_Close_Grill_Req': '<S113>:148' */
                if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S113>:160' */
                    /* Exit 'Boost_Close_Grill_Req': '<S113>:148' */
                    FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m = false;
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Calib_Failure_Wait;

                    /* Entry 'Calib_Failure_Wait': '<S113>:157' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 11U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_DfctCalAtmpt = (uint8)
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt -
                         FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt);
                    FSCR_ac_DW.LeFSCR_b_AGS2_DfctCalSeqFrz =
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt >=
                         KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt);
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Boost_Open_Grill_Req:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 9U;

                /* During 'Boost_Open_Grill_Req': '<S113>:147' */
                if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                {
                    /* Transition: '<S113>:140' */
                    /* Exit 'Boost_Open_Grill_Req': '<S113>:147' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Boost_Close_Grill_Req;

                    /* Entry 'Boost_Close_Grill_Req': '<S113>:148' */
                    LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Close;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 10U;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_Boost;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;

              case FSCR_ac_IN_Calib_Failure:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 7U;

                /* During 'Calib_Failure': '<S113>:145' */
                if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
                        KeFSCR_T_AGS2_AmbFrzCond)
                {
                    /* Transition: '<S113>:132' */
                    /* Transition: '<S113>:166' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Calib_Failure_Wait;

                    /* Entry 'Calib_Failure_Wait': '<S113>:157' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 11U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_DfctCalAtmpt = (uint8)
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt -
                         FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt);
                    FSCR_ac_DW.LeFSCR_b_AGS2_DfctCalSeqFrz =
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt >=
                         KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt);
                }
                else
                {
                    /*  Freeze condition */
                    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi <
                            KeFSCR_T_AGS2_AmbFrzCond)
                    {
                        /* Transition: '<S113>:134' */
                        FSCR_ac_DW.is_Calibration_Attempt_Failure =
                            FSCR_ac_IN_Calib_Failure_Freeze;

                        /* Entry 'Calib_Failure_Freeze': '<S113>:146' */
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 8U;
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                            KeFSCR_t_AGS2_CalAtmptFrzFailr;
                        FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt = (uint8)((sint32)
                            (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt) +
                             1));
                    }
                }
                break;

              case FSCR_ac_IN_Calib_Failure_Freeze:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 8U;

                /* During 'Calib_Failure_Freeze': '<S113>:146' */
                /*  anti-freeze condition */
                tmp = !KeFSCR_b_AGS2_BoostEnbl;
                if ((tmp || (FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt >
                             KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt)) && ((tmp ||
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt >
                         KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt)) ||
                        (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
                         KeFSCR_T_AGS2_AmbFrzCond)))
                {
                    /* Transition: '<S113>:159' */
                    /* Transition: '<S113>:166' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Calib_Failure_Wait;

                    /* Entry 'Calib_Failure_Wait': '<S113>:157' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 11U;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_DfctCalAtmpt = (uint8)
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt -
                         FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt);
                    FSCR_ac_DW.LeFSCR_b_AGS2_DfctCalSeqFrz =
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt >=
                         KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt);
                }
                else if ((KeFSCR_b_AGS2_BoostEnbl) &&
                         (FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt <=
                          KeFSCR_Cnt_AGS2_MaxFrzCalAtmpt))
                {
                    /* Transition: '<S113>:139' */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_Boost_Open_Grill_Req;

                    /* Entry 'Boost_Open_Grill_Req': '<S113>:147' */
                    LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 9U;
                    FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m = true;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_Boost;
                }
                else
                {
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        FSCR_ac_StateTimeCounter_k
                        (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                }
                break;

              default:
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 11U;

                /* During 'Calib_Failure_Wait': '<S113>:157' */
                /*  exceed maximum number of calibration attempts */
                if (((FSCR_ac_DW.LeFSCR_b_AGS2_DfctCalSeqFrz) ||
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_DfctCalAtmpt >=
                         KeFSCR_Cnt_AGS2_MaxCalAtmpt)) ||
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt >=
                         KeFSCR_Cnt_AGS2_TotCalMaxAtmpt))
                {
                    /* Transition: '<S113>:142' */
                    /* Transition: '<S113>:144' */
                    /*  unsuccessful calibration  */
                    FSCR_ac_DW.is_Calibration_Attempt_Failure =
                        FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_Calibration = FSCR_ac_IN_Calibration_Fail;

                    /* Entry 'Calibration_Fail': '<S113>:49' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 12U;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = false;
                }
                else
                {
                    /*  timer expired  */
                    if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                    {
                        /* Transition: '<S113>:161' */
                        /* Transition: '<S113>:162' */
                        /*  new calibration attempt  */
                        FSCR_ac_DW.is_Calibration_Attempt_Failure =
                            FSCR_ac_IN_NO_ACTIVE_CHILD;
                        FSCR_ac_DW.is_Calibration =
                            FSCR_ac_IN_Calibration_Attempt;

                        /* Entry Internal 'Calibration_Attempt': '<S113>:32' */
                        /* Transition: '<S113>:23' */
                        FSCR_ac_DW.is_Calibration_Attempt =
                            FSCR_ac_IN_Req_Open_Pos_Calib;

                        /* Entry 'Req_Open_Pos_Calib': '<S113>:22' */
                        LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                        FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                            KeFSCR_t_AGS2_OpenPos_ReqTime;
                        FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt = (uint8)((sint32)
                            (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt) + 1));
                        FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt = (uint8)((sint32)
                            (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt) +
                             1));
                        FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 2U;
                    }
                    else
                    {
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                            FSCR_ac_StateTimeCounter_k
                            (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                    }
                }
                break;
            }
            break;

          case FSCR_ac_IN_Calibration_Fail:
            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 12U;
            FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = false;

            /* During 'Calibration_Fail': '<S113>:49' */
            break;

          default:
            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 6U;

            /* During 'Calibration_Success': '<S113>:39' */
            break;
        }
    }

    /* End of SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_FSCR_FUNC_3

FUNC(void, FSCR_CODE) FSCR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean tmpRead;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_Comparison2_lg;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_Comparison7_k;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_Comparison1_m;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_AND_do;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_Logical15;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_AND_pi;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_AND_p;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_VM_Conditional_Signal_CountDownReset;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    uint8 rtb_LeFSCR_i_AGS2_SF_State;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    float32 rtb_Sum_k;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_AND_c0;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_VM_Conditional_Signal_CountDownRes_p;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_AND_ai;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    boolean rtb_AND_e;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    float32 rtb_Merge;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    float32 rtb_Sum1_d;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    TeFSCR_e_AGS_PosRq rtb_DataTypeConversion_c;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    TeFSCR_e_AGS_PosRq rtb_LeFSCR_e_AGS2_Pos;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    float32 Switch5;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    float32 Switch5_n;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    float32 Merge1;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    TeFSCR_e_AGS_PosRq rtb_LogicalOperator_e_0;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    TeFSCR_e_AGS_RoutineControl tmp;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    TeTAIR_e_AGS_Calibration_Sts tmp_0;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ep);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VePMDR_e_KeyStatus'
     */
    (void)Rte_Read_VePMDR_e_KeyStatus_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeHSWR_b_HoodOpen'
     */
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_e2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cs);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeBSWR_b_LimCheckingStatus'
     */
    (void)Rte_Read_VeBSWR_b_LimCheckingStatus_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_p1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    (void)Rte_Read_VePLTR_b_InFieldMode_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeESSR_e_HybEngSysActv'
     */
    (void)Rte_Read_VeESSR_e_HybEngSysActv_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeBPCR_b_BPCM_OVActv'
     */
    (void)Rte_Read_VeBPCR_b_BPCM_OVActv_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ly);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDFIR_b_Flashing_InProgress'
     */
    (void)Rte_Read_VeDFIR_b_Flashing_InProgress_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ll);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_e_RadFan_State'
     */
    (void)Rte_Read_VeTHMR_e_RadFan_State_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_e_EmrgcyFanRq_Lvl'
     */
    (void)Rte_Read_VeTHMR_e_EmrgcyFanRq_Lvl_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_b_isCharging'
     */
    (void)Rte_Read_VeTHMR_b_isCharging_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ap);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_e_EngOrBattPwrDschg_State'
     */
    (void)Rte_Read_VeTHMR_e_EngOrBattPwrDschg_State_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeBTRR_b_Batt_CritOrMarg'
     */
    (void)Rte_Read_VeBTRR_b_Batt_CritOrMarg_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_b_AftrRunFanRqst'
     */
    (void)Rte_Read_VeTHMR_b_AftrRunFanRqst_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_im);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VePMTR_e_ThrmlDevEnbl'
     */
    (void)Rte_Read_VePMTR_e_ThrmlDevEnbl_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_AirFlowReq'
     */
    (void)Rte_Read_VeTHMR_Pct_AirFlowReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_P_PwrBdgt_PwrLimitAvail'
     */
    (void)Rte_Read_VeTHMR_P_PwrBdgt_PwrLimitAvail_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_ECM_RadFanReq'
     */
    (void)Rte_Read_VeTAIR_Pct_ECM_RadFanReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_RadFanHndShk_dsbld'
     */
    (void)Rte_Read_VeTAIR_b_RadFanHndShk_dsbld_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_DVC_RadFanCmd'
     */
    (void)Rte_Read_VeTAIR_Pct_DVC_RadFanCmd_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_RadFanSts'
     */
    (void)Rte_Read_VeTAIR_Pct_RadFanSts_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeAATR_T_EstAmbAirTemp'
     */
    (void)Rte_Read_VeAATR_T_EstAmbAirTemp_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_AGS_CurrPos'
     */
    (void)Rte_Read_VeTAIR_Pct_AGS_CurrPos_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS_CalibrationSts'
     */
    (void)Rte_Read_VeTAIR_e_AGS_CalibrationSts_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS_CalibrationActv'
     */
    (void)Rte_Read_VeTAIR_b_AGS_CalibrationActv_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS_ErrOverTemp'
     */
    (void)Rte_Read_VeTAIR_b_AGS_ErrOverTemp_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS_ErrOverVolt'
     */
    (void)Rte_Read_VeTAIR_b_AGS_ErrOverVolt_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ln);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS_ErrUnderVolt'
     */
    (void)Rte_Read_VeTAIR_b_AGS_ErrUnderVolt_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS_ResErr'
     */
    (void)Rte_Read_VeTAIR_b_AGS_ResErr_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrMechBreak' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrMechBreak_Value(&tmpRead);

    /* Inport: '<Root>/VeTAIR_b_AGS_ErrMechStuck' */
    (void)Rte_Read_VeTAIR_b_AGS_ErrMechStuck_Value(&tmpRead_0);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ko);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_Pct_AGS2_CurrPos'
     */
    (void)Rte_Read_VeTAIR_Pct_AGS2_CurrPos_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS2_CalibrationSts'
     */
    (void)Rte_Read_VeTAIR_e_AGS2_CalibrationSts_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS2_CalibrationActv'
     */
    (void)Rte_Read_VeTAIR_b_AGS2_CalibrationActv_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS2_ErrOverTemp'
     */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrOverTemp_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS2_ErrOverVolt'
     */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrOverVolt_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g4k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS2_ErrUnderVolt'
     */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrUnderVolt_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_of);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_AGS2_ResErr'
     */
    (void)Rte_Read_VeTAIR_b_AGS2_ResErr_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_by);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrMechBreak' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrMechBreak_Value(&rtb_AND_do);

    /* Inport: '<Root>/VeTAIR_b_AGS2_ErrMechStuck' */
    (void)Rte_Read_VeTAIR_b_AGS2_ErrMechStuck_Value(&rtb_Comparison7_k);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_DVC_AGS_Calibration_Start'
     */
    (void)Rte_Read_VeTAIR_b_DVC_AGS_Calibration_Start_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
#if Rte_SysCon_Variant_FSCR_FUNC_1 && Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS_PstnCmnd'
     */
    (void)Rte_Read_VeTAIR_e_AGS_PstnCmnd_Value
        (&FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_AGS_IO_CntrlSt_Value
        (&FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !Rte_SysCon_Variant_FSCR_FUNC_1 && Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
    FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b = CeFSCR_e_Open100;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
    FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy =
        CeTAIR_e_Return_Control_to_ECU;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_DVC_AGS2_Calibration_Start'
     */
    (void)Rte_Read_VeTAIR_b_DVC_AGS2_Calibration_Start_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_as);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
#if Rte_SysCon_Variant_FSCR_FUNC_2 && Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS2_PstnCmnd'
     */
    (void)Rte_Read_VeTAIR_e_AGS2_PstnCmnd_Value
        (&FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_AGS2_IO_CntrlSt'
     */
    (void)Rte_Read_VeTAIR_e_AGS2_IO_CntrlSt_Value
        (&FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f);

#elif !Rte_SysCon_Variant_FSCR_FUNC_2 && Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
    FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j = CeFSCR_e_Open100;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' */
    FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f =
        CeTAIR_e_Return_Control_to_ECU;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     */
    (void)Rte_Read_VeTRNR_e_ActualGear_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalActPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalActPosition_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeENGR_T_EngCoolantTemp'
     */
    (void)Rte_Read_VeENGR_T_EngCoolantTemp_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTMIR_T_PsvPmpClnt_TmpIn'
     */
    (void)Rte_Read_VeTMIR_T_PsvPmpClnt_TmpIn_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_b_RadFanSts_FA'
     */
    (void)Rte_Read_VeTAIR_b_RadFanSts_FA_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_as3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTAIR_e_RadFab_IO_Cnt'
     */
    (void)Rte_Read_VeTAIR_e_RadFab_IO_Cnt_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o5);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_AGS_PosReq'
     */
    (void)Rte_Read_VeTHMR_Pct_AGS_PosReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lk);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_AGS2_PosReq'
     */
    (void)Rte_Read_VeTHMR_Pct_AGS2_PosReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_FCHTRRadFanReq'
     */
    (void)Rte_Read_VeTHMR_Pct_FCHTRRadFanReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fan1CntrlCktHi'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fan1CntrlCktHi_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fan1CntrlCktLo'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fan1CntrlCktLo_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_px);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_Fan1CntrlCkt'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_Fan1CntrlCkt_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jf);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RadFanDiagErrM0'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RadFanDiagErrM0_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RadFanDiagErrM1'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RadFanDiagErrM1_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g4);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RadFanDiagErrM2'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RadFanDiagErrM2_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_LTR_AirFlowReq'
     */
    (void)Rte_Read_VeTHMR_Pct_LTR_AirFlowReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dz);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeTHMR_Pct_HTR_AirFlowReq'
     */
    (void)Rte_Read_VeTHMR_Pct_HTR_AirFlowReq_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68' incorporates:
     *  Inport: '<Root>/VeBPCR_e_HV_BatCntctrStat'
     */
    (void)Rte_Read_VeBPCR_e_HV_BatCntctrStat_Value
        (&FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ln2);

    /* Outputs for Function Call SubSystem: '<Root>/FSCR_FUNC_MedTEH' */
    /* DataStoreWrite: '<S1>/DSW_StatusByte_Fan1CntrlCktHi' */
    FSCR_ac_DW.StatusByte_Fan1CntrlCktHi =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_p;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_Fan1CntrlCktLo' */
    FSCR_ac_DW.StatusByte_Fan1CntrlCktLo =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_px;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_Fan1CntrlCkt' */
    FSCR_ac_DW.StatusByte_Fan1CntrlCkt =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jf;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_RadFanDiagErrM0' */
    FSCR_ac_DW.StatusByte_RadFanDiagErrM0 =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_RadFanDiagErrM1' */
    FSCR_ac_DW.StatusByte_RadFanDiagErrM1 =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g4;

    /* DataStoreWrite: '<S1>/DSW_StatusByte_RadFanDiagErrM2' */
    FSCR_ac_DW.StatusByte_RadFanDiagErrM2 =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_k2;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Subsystem5'
     */
    /* Switch: '<S548>/Switch' incorporates:
     *  Constant: '<S565>/Calib'
     */
    if (KeFSCR_b_PowerMode_SD)
    {
        /* RelationalOperator: '<S247>/Comparison3' incorporates:
         *  Constant: '<S567>/Calib'
         *  Switch: '<S548>/Switch'
         */
        VeFSCR_e_PowerMode_AD = KeFSCR_e_PowerMode_D;
    }
    else
    {
        /* RelationalOperator: '<S247>/Comparison3' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         *  Switch: '<S548>/Switch'
         */
        VeFSCR_e_PowerMode_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ep;
    }

    /* End of Switch: '<S548>/Switch' */

    /* Switch: '<S548>/Switch1' incorporates:
     *  Constant: '<S564>/Calib'
     */
    if (KeFSCR_b_KeyStatus_SD)
    {
        /* RelationalOperator: '<S312>/Comparison2' incorporates:
         *  Constant: '<S566>/Calib'
         *  Switch: '<S548>/Switch1'
         */
        VeFSCR_e_KeyStatus_AD = KeFSCR_e_KeyStatus_D;
    }
    else
    {
        /* RelationalOperator: '<S312>/Comparison2' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         *  Switch: '<S548>/Switch1'
         */
        VeFSCR_e_KeyStatus_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cn;
    }

    /* End of Switch: '<S548>/Switch1' */

    /* Switch: '<S549>/Switch' incorporates:
     *  Constant: '<S569>/Calib'
     */
    if (KeFSCR_b_HoodAjar_SD)
    {
        /* Switch: '<S549>/Switch' incorporates:
         *  Constant: '<S568>/Calib'
         */
        VeFSCR_b_HoodAjar_AD = KeFSCR_b_HoodAjar_D;
    }
    else
    {
        /* Switch: '<S549>/Switch' */
        VeFSCR_b_HoodAjar_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_e2;
    }

    /* End of Switch: '<S549>/Switch' */

    /* Switch: '<S544>/Switch' incorporates:
     *  Constant: '<S557>/Calib'
     */
    if (KeFSCR_b_PropSysActv_SD)
    {
        /* Switch: '<S544>/Switch' incorporates:
         *  Constant: '<S556>/Calib'
         */
        VeFSCR_b_PropSysActv_AD = KeFSCR_b_PropSysActv_D;
    }
    else
    {
        /* Switch: '<S544>/Switch' */
        VeFSCR_b_PropSysActv_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cs;
    }

    /* End of Switch: '<S544>/Switch' */

    /* Switch: '<S550>/Switch2' incorporates:
     *  Constant: '<S553>/Calib'
     */
    if (KeFSCR_b_LimitCheckSts_SD)
    {
        /* Switch: '<S550>/Switch2' incorporates:
         *  Constant: '<S552>/Calib'
         */
        VeFSCR_b_LimCheckingStatus_AD = KeFSCR_b_LimitCheckSts_D;
    }
    else
    {
        /* Switch: '<S550>/Switch2' */
        VeFSCR_b_LimCheckingStatus_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_p1;
    }

    /* End of Switch: '<S550>/Switch2' */

    /* Switch: '<S551>/Switch3' incorporates:
     *  Constant: '<S555>/Calib'
     */
    if (KeFSCR_b_InFieldMode_SD)
    {
        /* Switch: '<S551>/Switch3' incorporates:
         *  Constant: '<S554>/Calib'
         */
        VeFSCR_b_InFieldMode_AD = KeFSCR_b_InFieldMode_D;
    }
    else
    {
        /* Switch: '<S551>/Switch3' */
        VeFSCR_b_InFieldMode_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cf;
    }

    /* End of Switch: '<S551>/Switch3' */

    /* Switch: '<S545>/Switch' incorporates:
     *  Constant: '<S558>/Calib'
     */
    if (KeFSCR_b_HybEngSysActv_SD)
    {
        /* Switch: '<S545>/Switch' incorporates:
         *  Constant: '<S559>/Calib'
         */
        VeFSCR_e_HybEngSysActv_AD = KeFSCR_e_HybEngSysActv_D;
    }
    else
    {
        /* Switch: '<S545>/Switch' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_e_HybEngSysActv_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_n;
    }

    /* End of Switch: '<S545>/Switch' */

    /* Switch: '<S546>/Switch' incorporates:
     *  Constant: '<S561>/Calib'
     */
    if (KeFSCR_b_OverVoltage_SD)
    {
        /* Switch: '<S546>/Switch' incorporates:
         *  Constant: '<S560>/Calib'
         */
        VeFSCR_b_OverVoltage = KeFSCR_b_OverVoltage_D;
    }
    else
    {
        /* Switch: '<S546>/Switch' */
        VeFSCR_b_OverVoltage =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ly;
    }

    /* End of Switch: '<S546>/Switch' */

    /* Switch: '<S547>/Switch' incorporates:
     *  Constant: '<S563>/Calib'
     */
    if (KeFSCR_b_FlashingFlag_SD)
    {
        /* Switch: '<S547>/Switch' incorporates:
         *  Constant: '<S562>/Calib'
         */
        VeFSCR_b_FlashingFlag_AD = KeFSCR_b_FlashingFlag_D;
    }
    else
    {
        /* Switch: '<S547>/Switch' */
        VeFSCR_b_FlashingFlag_AD =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ll;
    }

    /* End of Switch: '<S547>/Switch' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FSCR_Controls'
     */
    /* Logic: '<S312>/LogicalOperator' incorporates:
     *  RelationalOperator: '<S312>/Comparison6'
     *  Switch: '<S322>/Switch1'
     *  Switch: '<S323>/Switch1'
     *  Switch: '<S324>/Switch1'
     */
    tmpRead = !VeFSCR_b_PropSysActv_AD;

    /* RelationalOperator: '<S312>/Comparison2' incorporates:
     *  Constant: '<S317>/Constant'
     */
    rtb_Comparison2_lg = (((uint32)VeFSCR_e_KeyStatus_AD) ==
                          CePMDR_e_KeySt_RunPostCrank);

    /* Logic: '<S321>/Logical13' incorporates:
     *  Logic: '<S312>/LogicalOperator'
     *  Logic: '<S320>/Logical12'
     *  Switch: '<S322>/Switch1'
     *  Switch: '<S323>/Switch1'
     *  Switch: '<S324>/Switch1'
     */
    tmpRead_0 = !FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_im;

    /* Logic: '<S321>/Logical1' incorporates:
     *  Constant: '<S359>/Calib'
     *  Logic: '<S321>/Logical10'
     *  Logic: '<S321>/Logical13'
     *  Logic: '<S321>/Logical2'
     *  Logic: '<S321>/Logical4'
     *  RelationalOperator: '<S321>/Comparison1'
     *  RelationalOperator: '<S321>/Comparison5'
     */
    VeFSCR_b_HoodAjar_Set_BD = (((((VeFSCR_b_HoodAjar_AD) &&
        ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ap) ||
         (KeFSCR_b_isChargingOverride))) && tmpRead) && (!rtb_Comparison2_lg)) &&
        tmpRead_0);

    /* Switch: '<S311>/Switch' incorporates:
     *  Constant: '<S315>/Calib'
     */
    if (KeFSCR_b_RadFanState_Slct)
    {
        /* Switch: '<S314>/Switch1' */
        if (FSCR_ac_B.Switch1_m)
        {
            /* RelationalOperator: '<S239>/Comparison7' incorporates:
             *  Constant: '<S313>/Constant'
             *  Switch: '<S311>/Switch'
             */
            VeFSCR_e_RadFanState_Adjtd = CeFSCR_e_RadFan_Faulty;
        }
        else
        {
            /* RelationalOperator: '<S239>/Comparison7' incorporates:
             *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
             *  Switch: '<S311>/Switch'
             */
            VeFSCR_e_RadFanState_Adjtd =
                FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o2;
        }

        /* End of Switch: '<S314>/Switch1' */
    }
    else
    {
        /* RelationalOperator: '<S239>/Comparison7' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         *  Switch: '<S311>/Switch'
         */
        VeFSCR_e_RadFanState_Adjtd =
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o2;
    }

    /* End of Switch: '<S311>/Switch' */

    /* RelationalOperator: '<S239>/Comparison7' incorporates:
     *  Constant: '<S294>/Constant'
     */
    rtb_Comparison7_k = (((uint32)VeFSCR_e_RadFanState_Adjtd) !=
                         CeFSCR_e_RadFan_Faulty);

    /* Logic: '<S239>/Logical1' */
    VeFSCR_b_HoodAjar_FanOff_Cond = ((VeFSCR_b_HoodAjar_Set_BD) &&
        rtb_Comparison7_k);

    /* RelationalOperator: '<S312>/Comparison1' incorporates:
     *  Constant: '<S316>/Constant'
     */
    rtb_Comparison1_m = (((uint32)VeFSCR_e_KeyStatus_AD) == CePMDR_e_KeySt_Off);

    /* Outputs for Atomic SubSystem: '<S239>/EdgeFalling' */
    /* Logic: '<S290>/OR1' incorporates:
     *  Logic: '<S320>/Logical7'
     */
    rtb_AND_pi = !rtb_Comparison1_m;

    /* Logic: '<S290>/AND' incorporates:
     *  Logic: '<S290>/OR1'
     *  UnitDelay: '<S290>/UnitDelay'
     */
    rtb_AND_do = (rtb_AND_pi && (FSCR_ac_DW.UnitDelay_DSTATE_bk));

    /* Update for UnitDelay: '<S290>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_bk = rtb_Comparison1_m;

    /* End of Outputs for SubSystem: '<S239>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S239>/SignalLatchOnWithReset' */
    /* Logic: '<S302>/OR1' incorporates:
     *  Constant: '<S295>/Constant'
     *  Logic: '<S239>/Logical11'
     *  Logic: '<S239>/Logical16'
     *  Logic: '<S239>/Logical17'
     *  Logic: '<S239>/Logical8'
     *  Logic: '<S302>/NOT'
     *  Logic: '<S302>/OR'
     *  RelationalOperator: '<S239>/Comparison5'
     *  UnitDelay: '<S302>/UnitDelay'
     */
    VeFSCR_b_HoodAjar_FanFaulty_Cond = ((((VeFSCR_b_HoodAjar_AD) &&
        (!VeFSCR_b_HoodAjar_Set_BD)) && (((uint32)VeFSCR_e_RadFanState_Adjtd) ==
        CeFSCR_e_RadFan_Faulty)) || (((!rtb_AND_do) && (VeFSCR_b_HoodAjar_AD)) &&
        (VeFSCR_b_HoodAjar_FanFaulty_Cond)));

    /* End of Outputs for SubSystem: '<S239>/SignalLatchOnWithReset' */

    /* Logic: '<S239>/Logical12' */
    VeFSCR_b_HoodAjar_FanOff_Final = ((VeFSCR_b_HoodAjar_FanOff_Cond) ||
        (VeFSCR_b_HoodAjar_FanFaulty_Cond));

    /* Logic: '<S321>/Logical3' incorporates:
     *  Logic: '<S239>/Logical10'
     */
    rtb_AND_e = !VeFSCR_b_HoodAjar_AD;

    /* Logic: '<S321>/Logical9' incorporates:
     *  Constant: '<S347>/Constant'
     *  Constant: '<S348>/Constant'
     *  Constant: '<S349>/Constant'
     *  Constant: '<S350>/Constant'
     *  Constant: '<S351>/Constant'
     *  Constant: '<S352>/Constant'
     *  Constant: '<S353>/Constant'
     *  Constant: '<S354>/Constant'
     *  Constant: '<S355>/Constant'
     *  Constant: '<S356>/Constant'
     *  Constant: '<S357>/Calib'
     *  Constant: '<S358>/Calib'
     *  Logic: '<S321>/Logical11'
     *  Logic: '<S321>/Logical12'
     *  Logic: '<S321>/Logical14'
     *  Logic: '<S321>/Logical18'
     *  Logic: '<S321>/Logical3'
     *  Logic: '<S321>/Logical5'
     *  Logic: '<S321>/Logical6'
     *  Logic: '<S321>/Logical7'
     *  Logic: '<S321>/Logical8'
     *  RelationalOperator: '<S321>/Comparison10'
     *  RelationalOperator: '<S321>/Comparison11'
     *  RelationalOperator: '<S321>/Comparison12'
     *  RelationalOperator: '<S321>/Comparison13'
     *  RelationalOperator: '<S321>/Comparison2'
     *  RelationalOperator: '<S321>/Comparison3'
     *  RelationalOperator: '<S321>/Comparison4'
     *  RelationalOperator: '<S321>/Comparison7'
     *  RelationalOperator: '<S321>/Comparison8'
     *  RelationalOperator: '<S321>/Comparison9'
     *  UnitDelay: '<S321>/UnitDelay'
     *  UnitDelay: '<S321>/UnitDelay1'
     *  UnitDelay: '<S321>/UnitDelay2'
     *  UnitDelay: '<S321>/UnitDelay3'
     *  UnitDelay: '<S321>/UnitDelay4'
     */
    VeFSCR_b_KeyCycle_Set = (((((((uint32)VeFSCR_e_KeyStatus_AD) !=
        CePMDR_e_KeySt_Off) && (((uint32)FSCR_ac_DW.UnitDelay_DSTATE_bq) ==
        CePMDR_e_KeySt_Off)) || ((((uint32)VeFSCR_e_KeyStatus_AD) ==
        CePMDR_e_KeySt_RunPostCrank) && (((uint32)FSCR_ac_DW.UnitDelay3_DSTATE) ==
        CePMDR_e_KeySt_Crank))) || (((((((uint32)VeFSCR_e_KeyStatus_AD) ==
        CePMDR_e_KeySt_RunPreCrank) && (((uint32)FSCR_ac_DW.UnitDelay1_DSTATE) ==
        CePMDR_e_KeySt_Acc)) || ((((uint32)VeFSCR_e_KeyStatus_AD) ==
        CePMDR_e_KeySt_Crank) && (((uint32)FSCR_ac_DW.UnitDelay2_DSTATE) ==
        CePMDR_e_KeySt_RunPreCrank))) || (((((uint32)VeFSCR_e_KeyStatus_AD) ==
        CePMDR_e_KeySt_RunPostCrank) && (((uint32)FSCR_ac_DW.UnitDelay4_DSTATE) ==
        CePMDR_e_KeySt_RunPreCrank)) && (KeFSCR_b_BEV_Enable))) &&
        (KeFSCR_b_HoodAjarRst_Enbl))) || rtb_AND_e);

    /* Switch: '<S298>/Switch1' incorporates:
     *  Logic: '<S239>/Logical13'
     *  Switch: '<S297>/Switch1'
     */
    if (VeFSCR_b_HoodAjar_FanOff_Final)
    {
        /* UnitDelay: '<S422>/UnitDelay' */
        rtb_AND_do = true;
    }
    else if (VeFSCR_b_KeyCycle_Set)
    {
        /* Switch: '<S297>/Switch1' incorporates:
         *  Constant: '<S239>/ConstantValue'
         *  UnitDelay: '<S422>/UnitDelay'
         */
        rtb_AND_do = false;
    }
    else
    {
        /* UnitDelay: '<S422>/UnitDelay' incorporates:
         *  DataStoreRead: '<S239>/DataStoreRead2'
         *  Switch: '<S297>/Switch1'
         */
        rtb_AND_do = EeFSCR_b_HoodAjar_FanOff;
    }

    /* End of Switch: '<S298>/Switch1' */

    /* Logic: '<S239>/Logical15' */
    rtb_Logical15 = (rtb_AND_do && rtb_Comparison1_m);

    /* Outputs for Atomic SubSystem: '<S239>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S303>/EdgeRising' */
    /* Logic: '<S304>/AND' incorporates:
     *  Logic: '<S304>/OR1'
     *  UnitDelay: '<S304>/UnitDelay'
     */
    rtb_AND_ai = (rtb_Logical15 && (!FSCR_ac_DW.UnitDelay_DSTATE_ac));

    /* Update for UnitDelay: '<S304>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_ac = rtb_Logical15;

    /* End of Outputs for SubSystem: '<S303>/EdgeRising' */

    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     *  Constant: '<S303>/ConstantValue'
     *  Constant: '<S303>/ConstantValue1'
     *  Logic: '<S303>/OR'
     *  Logic: '<S303>/OR1'
     *  MinMax: '<S303>/Minimum'
     *  Sum: '<S303>/Summation'
     *  UnitDelay: '<S303>/UnitDelay'
     */
    if ((!rtb_Logical15) || rtb_AND_ai)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_ii = 0U;
    }
    else if (KeFSCR_Cnt_HoodAjar_Aftrrun_Delay < ((uint16)(((uint32)
                FSCR_ac_DW.UnitDelay_DSTATE_ii) + 1U)))
    {
        /* MinMax: '<S303>/Minimum' incorporates:
         *  Constant: '<S300>/Calib'
         */
        FSCR_ac_DW.UnitDelay_DSTATE_ii = KeFSCR_Cnt_HoodAjar_Aftrrun_Delay;
    }
    else
    {
        /* MinMax: '<S303>/Minimum' incorporates:
         *  Constant: '<S303>/ConstantValue'
         *  Sum: '<S303>/Summation'
         *  UnitDelay: '<S303>/UnitDelay'
         */
        FSCR_ac_DW.UnitDelay_DSTATE_ii = (uint16)(((uint32)
            FSCR_ac_DW.UnitDelay_DSTATE_ii) + 1U);
    }

    /* End of Switch: '<S303>/Switch1' */
    /* End of Outputs for SubSystem: '<S239>/TurnOnDelaySample' */

    /* Switch: '<S299>/Switch1' incorporates:
     *  Constant: '<S300>/Calib'
     *  DataStoreWrite: '<S239>/DataStoreWrite2'
     *  RelationalOperator: '<S303>/GreaterThan'
     *  UnitDelay: '<S303>/UnitDelay'
     */
    if (rtb_Logical15)
    {
        /* Outputs for Atomic SubSystem: '<S239>/TurnOnDelaySample' */
        EeFSCR_b_HoodAjar_FanOff = (FSCR_ac_DW.UnitDelay_DSTATE_ii >=
            KeFSCR_Cnt_HoodAjar_Aftrrun_Delay);

        /* End of Outputs for SubSystem: '<S239>/TurnOnDelaySample' */
    }
    else
    {
        EeFSCR_b_HoodAjar_FanOff = rtb_AND_do;
    }

    /* End of Switch: '<S299>/Switch1' */

    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  Constant: '<S291>/Constant'
     *  Constant: '<S296>/Constant'
     *  Logic: '<S239>/Logical5'
     *  RelationalOperator: '<S239>/Comparison2'
     *  RelationalOperator: '<S239>/Comparison6'
     */
    rtb_AND_do = ((((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da)
                   != CePMTR_e_DISBL_All_Thrml) && (((uint32)
                    FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                   CePMTR_e_ENB_Only_Pmps));

    /* Logic: '<S239>/Logical' incorporates:
     *  Constant: '<S293>/Constant'
     *  RelationalOperator: '<S239>/Comparison1'
     */
    VeFSCR_b_Normal_On_Cond = ((((uint32)VeFSCR_e_RadFanState_Adjtd) ==
        CeFSCR_e_RadFan_ON) && rtb_AND_do);

    /* Logic: '<S239>/Logical4' */
    rtb_Logical15 = !rtb_AND_do;

    /* RelationalOperator: '<S312>/Comparison3' incorporates:
     *  Constant: '<S318>/Constant'
     */
    rtb_AND_ai = (((uint32)VeFSCR_e_KeyStatus_AD) == CePMDR_e_KeySt_Crank);

    /* Outputs for Atomic SubSystem: '<S320>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S345>/EdgeRising' */
    /* Logic: '<S346>/AND' incorporates:
     *  Logic: '<S346>/OR1'
     *  UnitDelay: '<S346>/UnitDelay'
     */
    rtb_AND_do = (rtb_AND_ai && (!FSCR_ac_DW.UnitDelay_DSTATE_it));

    /* Update for UnitDelay: '<S346>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_it = rtb_AND_ai;

    /* End of Outputs for SubSystem: '<S345>/EdgeRising' */

    /* Switch: '<S345>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S342>/Calib'
     *  Constant: '<S345>/ConstantValue1'
     *  Logic: '<S345>/OR'
     *  Logic: '<S345>/OR1'
     *  MinMax: '<S345>/Minimum'
     *  Sum: '<S345>/Summation'
     *  UnitDelay: '<S345>/UnitDelay'
     */
    if ((!rtb_AND_ai) || rtb_AND_do)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_o = 0.0F;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_o = fminf(KeFSCR_T_HoodAjarKeyCrankTimer,
            KeFSCR_dT_KeyCrankSampleTime + FSCR_ac_DW.UnitDelay_DSTATE_o);
    }

    /* End of Switch: '<S345>/Switch1' */
    /* End of Outputs for SubSystem: '<S320>/TurnOnDelayTime' */

    /* Switch: '<S320>/Switch1' incorporates:
     *  Constant: '<S338>/Constant'
     *  Constant: '<S341>/Calib'
     *  RelationalOperator: '<S320>/Comparison4'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
     */
    if (KeFSCR_b_HoodAjarOverVoltage)
    {
        rtb_AND_do = VeFSCR_b_OverVoltage;
    }
    else
    {
        rtb_AND_do = (((uint32)
                       FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_cg) !=
                      CePDTR_e_No_Dischrg);
    }

    /* End of Switch: '<S320>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S320>/TurnOnDelayTime' */
    /* Logic: '<S320>/Logical3' incorporates:
     *  Constant: '<S339>/Calib'
     *  Logic: '<S320>/Logical5'
     *  Logic: '<S320>/Logical6'
     *  Logic: '<S345>/AND'
     *  RelationalOperator: '<S345>/GreaterThan'
     *  UnitDelay: '<S345>/UnitDelay'
     */
    rtb_AND_do = (((((VeFSCR_b_HoodAjar_AD) && tmpRead) && (rtb_AND_do ||
                     (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mk))) &&
                   tmpRead_0) && (rtb_Comparison2_lg || (rtb_AND_ai &&
                    (FSCR_ac_DW.UnitDelay_DSTATE_o >=
                     KeFSCR_T_HoodAjarKeyCrankTimer))));

    /* End of Outputs for SubSystem: '<S320>/TurnOnDelayTime' */

    /* Outputs for Atomic SubSystem: '<S320>/SignalLatchOnWithReset' */
    /* Logic: '<S344>/OR1' incorporates:
     *  Logic: '<S320>/Logical1'
     *  Logic: '<S320>/Logical7'
     *  Logic: '<S344>/NOT'
     *  Logic: '<S344>/OR'
     *  UnitDelay: '<S344>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_o0 = (rtb_AND_do || ((rtb_AND_pi && rtb_AND_do) &&
        (FSCR_ac_DW.UnitDelay_DSTATE_o0)));

    /* End of Outputs for SubSystem: '<S320>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S320>/SignalLatchOffWithReset' */
    /* Logic: '<S343>/OR2' incorporates:
     *  Logic: '<S320>/Logical8'
     *  Logic: '<S343>/OR'
     *  UnitDelay: '<S343>/UnitDelay'
     */
    VeFSCR_b_HoodAjarBatCrit_LatchOff = (rtb_AND_do && ((rtb_AND_ai ||
        rtb_Comparison1_m) || (VeFSCR_b_HoodAjarBatCrit_LatchOff)));

    /* End of Outputs for SubSystem: '<S320>/SignalLatchOffWithReset' */

    /* Switch: '<S320>/Switch' incorporates:
     *  Constant: '<S340>/Calib'
     */
    if (KeFSCR_b_HoodAjarCritBatLatch_Slct)
    {
        /* Switch: '<S320>/Switch' incorporates:
         *  UnitDelay: '<S344>/UnitDelay'
         */
        VeFSCR_b_HoodAjarBatCritSet_Crnk = FSCR_ac_DW.UnitDelay_DSTATE_o0;
    }
    else
    {
        /* Switch: '<S320>/Switch' */
        VeFSCR_b_HoodAjarBatCritSet_Crnk = VeFSCR_b_HoodAjarBatCrit_LatchOff;
    }

    /* End of Switch: '<S320>/Switch' */

    /* Logic: '<S319>/Logical9' incorporates:
     *  Constant: '<S329>/Constant'
     *  Constant: '<S331>/Calib'
     *  Constant: '<S332>/Calib'
     *  Logic: '<S319>/Logical4'
     *  RelationalOperator: '<S319>/Comparison8'
     *  Switch: '<S545>/Switch'
     */
    rtb_AND_do = (((((((uint32)VeFSCR_e_HybEngSysActv_AD) ==
                      CeESSR_e_HybEngEnabledOff) ||
                     (KeFSCR_b_Enb_PSAHdAjrFanOn_BEV)) &&
                    (VeFSCR_b_PropSysActv_AD)) && (VeFSCR_b_HoodAjar_AD)) &&
                  (KeFSCR_b_EngineONtoEV_Trans_En));

    /* Logic: '<S319>/Logical2' incorporates:
     *  Logic: '<S319>/Logical3'
     */
    rtb_Comparison1_m = ((!rtb_AND_do) || rtb_Comparison1_m);

    /* Outputs for Atomic SubSystem: '<S319>/EdgeRising1' */
    /* Logic: '<S328>/AND' incorporates:
     *  Logic: '<S328>/OR1'
     *  UnitDelay: '<S328>/UnitDelay'
     */
    rtb_Comparison2_lg = (rtb_Comparison1_m && (!FSCR_ac_DW.UnitDelay_DSTATE_ne));

    /* Update for UnitDelay: '<S328>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_ne = rtb_Comparison1_m;

    /* End of Outputs for SubSystem: '<S319>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S319>/EdgeRising' */
    /* Logic: '<S327>/AND' incorporates:
     *  Logic: '<S327>/OR1'
     *  UnitDelay: '<S327>/UnitDelay'
     */
    rtb_AND_pi = !FSCR_ac_DW.UnitDelay_DSTATE_nh;

    /* Update for UnitDelay: '<S327>/UnitDelay' incorporates:
     *  Constant: '<S319>/TRUEConstant'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_nh = true;

    /* End of Outputs for SubSystem: '<S319>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S319>/TimerRetriggerResetTriggerEnabled' */
    /* Switch: '<S337>/Switch1' incorporates:
     *  Logic: '<S319>/Logical6'
     *  Switch: '<S337>/Switch2'
     */
    if (rtb_Comparison2_lg || rtb_AND_pi)
    {
        /* Switch: '<S330>/Switch1' incorporates:
         *  Logic: '<S319>/Logical5'
         *  Logic: '<S319>/Logical7'
         */
        if ((rtb_AND_pi && rtb_AND_do) && (!rtb_Comparison2_lg))
        {
            /* UnitDelay: '<S337>/UnitDelay' incorporates:
             *  Constant: '<S334>/Calib'
             *  Constant: '<S335>/Calib'
             *  Sum: '<S319>/Subtract'
             *  Switch: '<S330>/Switch1'
             */
            FSCR_ac_DW.UnitDelay_DSTATE_d = KeFSCR_t_HoodAjar_EngOnTimer -
                KeFSCR_t_SampleRate;
        }
        else
        {
            /* UnitDelay: '<S337>/UnitDelay' incorporates:
             *  Constant: '<S334>/Calib'
             *  Switch: '<S330>/Switch1'
             */
            FSCR_ac_DW.UnitDelay_DSTATE_d = KeFSCR_t_HoodAjar_EngOnTimer;
        }

        /* End of Switch: '<S330>/Switch1' */
    }
    else
    {
        if (rtb_AND_do)
        {
            /* UnitDelay: '<S337>/UnitDelay' incorporates:
             *  Constant: '<S335>/Calib'
             *  Constant: '<S337>/ConstantValue4'
             *  MinMax: '<S337>/Maximum'
             *  Sum: '<S337>/Subtraction'
             *  Switch: '<S337>/Switch2'
             */
            FSCR_ac_DW.UnitDelay_DSTATE_d = fmaxf(FSCR_ac_DW.UnitDelay_DSTATE_d
                - KeFSCR_t_SampleRate, 0.0F);
        }
    }

    /* End of Switch: '<S337>/Switch1' */

    /* Logic: '<S319>/Logical1' incorporates:
     *  Constant: '<S337>/ConstantValue2'
     *  Logic: '<S337>/Logical5'
     *  RelationalOperator: '<S337>/GreaterThan1'
     *  UnitDelay: '<S337>/UnitDelay'
     */
    VeFSCR_b_HoodAjar_EngineONtoEV_Trans = (rtb_AND_do &&
        (FSCR_ac_DW.UnitDelay_DSTATE_d <= 0.0F));

    /* End of Outputs for SubSystem: '<S319>/TimerRetriggerResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S319>/SignalLatchOnWithReset1' */
    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  UnitDelay: '<S336>/UnitDelay'
     */
    rtb_AND_do = VeFSCR_b_HoodAjar_EngineONtoEV_Trans_LatchON;

    /* Logic: '<S336>/OR1' incorporates:
     *  Logic: '<S336>/NOT'
     *  Logic: '<S336>/OR'
     *  UnitDelay: '<S336>/UnitDelay'
     */
    VeFSCR_b_HoodAjar_EngineONtoEV_Trans_LatchON =
        ((VeFSCR_b_HoodAjar_EngineONtoEV_Trans) || ((!rtb_Comparison1_m) &&
          (VeFSCR_b_HoodAjar_EngineONtoEV_Trans_LatchON)));

    /* End of Outputs for SubSystem: '<S319>/SignalLatchOnWithReset1' */

    /* Switch: '<S319>/Switch' incorporates:
     *  Constant: '<S333>/Calib'
     */
    if (KeFSCR_b_HoodAjarEngOffLatch_Slct)
    {
        /* Switch: '<S319>/Switch' */
        VeFSCR_b_HoodAjar_EngineONtoEV_Trans =
            VeFSCR_b_HoodAjar_EngineONtoEV_Trans_LatchON;
    }

    /* End of Switch: '<S319>/Switch' */

    /* Logic: '<S312>/Logical7' */
    VeFSCR_b_HoodAjarBatCrit_Flag = ((VeFSCR_b_HoodAjarBatCritSet_Crnk) ||
        (VeFSCR_b_HoodAjar_EngineONtoEV_Trans));

    /* Logic: '<S239>/Logical6' */
    VeFSCR_b_HoodAjar_FanOn_Cond = ((VeFSCR_b_HoodAjarBatCrit_Flag) &&
        rtb_Comparison7_k);

    /* Logic: '<S239>/Logical9' incorporates:
     *  Constant: '<S292>/Constant'
     *  Logic: '<S239>/Logical3'
     *  RelationalOperator: '<S239>/Comparison4'
     */
    VeFSCR_b_RadFanOff_Cond = (((((uint32)VeFSCR_e_RadFanState_Adjtd) ==
        CeFSCR_e_RadFan_OFF) || rtb_Logical15) && rtb_AND_e);

    /* Switch: '<S239>/Switch' incorporates:
     *  Constant: '<S301>/Calib'
     */
    if (!KeFSCR_b_HoodAjar_FanOff_SD)
    {
        /* Switch: '<S239>/Switch' incorporates:
         *  DataStoreRead: '<S239>/DataStoreRead1'
         */
        VeFSCR_b_HoodAjar_FanOff_Final = EeFSCR_b_HoodAjar_FanOff;
    }

    /* End of Switch: '<S239>/Switch' */

    /* If: '<S13>/If' */
    if (VeFSCR_b_HoodAjar_FanOff_Final)
    {
        /* Outputs for IfAction SubSystem: '<S13>/Off1' incorporates:
         *  ActionPort: '<S241>/ActionPort'
         */
        /* Merge: '<S13>/Merge' incorporates:
         *  Constant: '<S309>/Calib'
         *  SignalConversion generated from: '<S241>/HoodAjar_RadLVFan1Disable'
         */
        VeFSCR_Pct_RadLVFan1ActualCmd_Raw = KeFSCR_Pct_RadLVFan1Disable;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Constant: '<S310>/Calib'
         *  SignalConversion generated from: '<S241>/HoodAjar_RadLVFan2Disable'
         */
        VeFSCR_Pct_RadLVFan2ActualCmd_Raw = KeFSCR_Pct_RadLVFan2Disable;

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S308>/Calib'
         *  SignalConversion generated from: '<S241>/HoodAjar_RadHVFanDisable'
         */
        VeFSCR_Pct_RadHVFanActualCmd_Raw = KeFSCR_Pct_RadHVFanDisable;

        /* End of Outputs for SubSystem: '<S13>/Off1' */
    }
    else if (VeFSCR_b_RadFanOff_Cond)
    {
        /* Outputs for IfAction SubSystem: '<S13>/Off' incorporates:
         *  ActionPort: '<S240>/ActionPort'
         */
        /* Merge: '<S13>/Merge' incorporates:
         *  Constant: '<S306>/Calib'
         *  SignalConversion generated from: '<S240>/RadiatorLVFan1Comd_Off'
         */
        VeFSCR_Pct_RadLVFan1ActualCmd_Raw = KeFSCR_Pct_RadLVFan1Off;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Constant: '<S307>/Calib'
         *  SignalConversion generated from: '<S240>/RadiatorLVFan2Comd_Off'
         */
        VeFSCR_Pct_RadLVFan2ActualCmd_Raw = KeFSCR_Pct_RadLVFan2Off;

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S305>/Calib'
         *  SignalConversion generated from: '<S240>/RadiatorFanHVComd_Off'
         */
        VeFSCR_Pct_RadHVFanActualCmd_Raw = KeFSCR_Pct_RadHVFanOff;

        /* End of Outputs for SubSystem: '<S13>/Off' */
    }
    else if ((VeFSCR_b_Normal_On_Cond) || (VeFSCR_b_HoodAjar_FanOn_Cond))
    {
        /* Outputs for IfAction SubSystem: '<S13>/HoodAjar_FanOn' incorporates:
         *  ActionPort: '<S238>/ActionPort'
         */
        /* Outputs for Atomic SubSystem: '<S238>/HoodAjar_HVFanOn' */
        /* Outputs for Atomic SubSystem: '<S246>/Hysteresis1' */
        /* Switch: '<S250>/Switch1' incorporates:
         *  Constant: '<S250>/ConstantValue'
         *  Constant: '<S252>/Calib'
         *  Constant: '<S253>/Calib'
         *  RelationalOperator: '<S250>/GreaterThan'
         *  RelationalOperator: '<S250>/GreaterThan1'
         *  UnitDelay: '<S250>/UnitDelay'
         */
        if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >
                KeFSCR_P_PWRbudget_MinHi)
        {
            FSCR_ac_DW.UnitDelay_DSTATE_h0 = true;
        }
        else
        {
            FSCR_ac_DW.UnitDelay_DSTATE_h0 =
                ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >=
                  KeFSCR_P_PWRbudget_MinLo) && (FSCR_ac_DW.UnitDelay_DSTATE_h0));
        }

        /* End of Switch: '<S250>/Switch1' */
        /* End of Outputs for SubSystem: '<S246>/Hysteresis1' */

        /* Lookup_n-D: '<S256>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_Pct_HCP_DfltHVFanCmd = look1_iflf_binlca_16a
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e, ((const float32
               *)&(KxFSCR_Pct_DfltHVFanCmd[0])), ((const float32 *)
              &(KtFSCR_Pct_DfltHVFanCmd[0])), 6U);

        /* Lookup_n-D: '<S257>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_Pct_HCP_MinHVFanCmd = look1_iflf_binlca_16a
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e, ((const float32
               *)&(KxFSCR_Pct_MinHVFanCmd[0])), ((const float32 *)
              &(KtFSCR_Pct_MinHVFanCmd[0])), 6U);

        /* Switch: '<S246>/Switch' incorporates:
         *  Constant: '<S249>/Constant'
         *  Logic: '<S246>/Logical Operator'
         *  RelationalOperator: '<S246>/Comparison1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         *  UnitDelay: '<S250>/UnitDelay'
         */
        if ((FSCR_ac_DW.UnitDelay_DSTATE_h0) || (((uint32)
                FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_ln2) !=
                CeHVTR_e_Closed))
        {
            rtb_Merge = VeFSCR_Pct_HCP_DfltHVFanCmd;
        }
        else
        {
            rtb_Merge = VeFSCR_Pct_HCP_MinHVFanCmd;
        }

        /* End of Switch: '<S246>/Switch' */

        /* Switch: '<S251>/Switch1' incorporates:
         *  Constant: '<S254>/Calib'
         *  Constant: '<S255>/Calib'
         */
        if (VeFSCR_b_HoodAjar_FanOn_Cond)
        {
            Merge1 = KeFSCR_Pct_HoodAjar_RadFanCmd;
        }
        else
        {
            Merge1 = KeFSCR_Pct_HoodAjar_RadFanCmd_Min;
        }

        /* End of Switch: '<S251>/Switch1' */

        /* MinMax: '<S246>/MinMax1' */
        VeFSCR_Pct_HVRadFanCmd_Raw = fmaxf(rtb_Merge, Merge1);

        /* Merge: '<S13>/Merge2' incorporates:
         *  Gain: '<S258>/Gain'
         */
        VeFSCR_Pct_RadHVFanActualCmd_Raw = VeFSCR_Pct_HVRadFanCmd_Raw;

        /* End of Outputs for SubSystem: '<S238>/HoodAjar_HVFanOn' */

        /* Lookup_n-D: '<S278>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_Pct_HCP_DfltFanCmd = look1_iflf_binlca_16a
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys, ((const float32
               *)&(KxFSCR_Pct_DfltFanCmd[0])), ((const float32 *)
              &(KtFSCR_Pct_DfltFanCmd[0])), 6U);

        /* Outputs for Atomic SubSystem: '<S247>/Hysteresis1' */
        /* Switch: '<S263>/Switch1' incorporates:
         *  Constant: '<S263>/ConstantValue'
         *  Constant: '<S269>/Calib'
         *  Constant: '<S270>/Calib'
         *  RelationalOperator: '<S263>/GreaterThan'
         *  RelationalOperator: '<S263>/GreaterThan1'
         *  UnitDelay: '<S263>/UnitDelay'
         */
        if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >
                KeFSCR_P_PWRbudget_MinHi)
        {
            FSCR_ac_DW.UnitDelay_DSTATE_iw = true;
        }
        else
        {
            FSCR_ac_DW.UnitDelay_DSTATE_iw =
                ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >=
                  KeFSCR_P_PWRbudget_MinLo) && (FSCR_ac_DW.UnitDelay_DSTATE_iw));
        }

        /* End of Switch: '<S263>/Switch1' */
        /* End of Outputs for SubSystem: '<S247>/Hysteresis1' */

        /* Lookup_n-D: '<S279>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_Pct_HCP_MinFanCmd = look1_iflf_binlca_16a
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys, ((const float32
               *)&(KxFSCR_Pct_MinFanCmd[0])), ((const float32 *)
              &(KtFSCR_Pct_MinFanCmd[0])), 6U);

        /* Switch: '<S247>/Switch' incorporates:
         *  UnitDelay: '<S263>/UnitDelay'
         */
        if (FSCR_ac_DW.UnitDelay_DSTATE_iw)
        {
            /* Switch: '<S247>/Switch' */
            VeFSCR_Pct_HCP_NormalFanCmd = VeFSCR_Pct_HCP_DfltFanCmd;
        }
        else
        {
            /* Switch: '<S247>/Switch' */
            VeFSCR_Pct_HCP_NormalFanCmd = VeFSCR_Pct_HCP_MinFanCmd;
        }

        /* End of Switch: '<S247>/Switch' */

        /* Switch: '<S265>/Switch1' incorporates:
         *  Constant: '<S259>/Constant'
         *  Constant: '<S260>/Constant'
         *  Constant: '<S277>/Calib'
         *  Logic: '<S247>/Logical1'
         *  RelationalOperator: '<S247>/Comparison2'
         *  RelationalOperator: '<S247>/Comparison3'
         *  Switch: '<S247>/Switch1'
         */
        if ((((uint32)VeFSCR_e_PowerMode_AD) == CePMDR_e_PowerMode_Off) ||
                (((uint32)VeFSCR_e_PowerMode_AD) == CePMDR_e_PowerMode_SNA))
        {
            /* Switch: '<S265>/Switch1' */
            VeFSCR_Pct_NormalRadFanCmd_On = VeFSCR_Pct_HCP_NormalFanCmd;
        }
        else if (KeFSCR_b_Slct_HCP_FanCmd)
        {
            /* Switch: '<S264>/Switch1' incorporates:
             *  Constant: '<S274>/Calib'
             *  RelationalOperator: '<S247>/Comparison1'
             *  Sum: '<S247>/Sum1'
             *  Switch: '<S247>/Switch1'
             */
            if (VeFSCR_Pct_HCP_NormalFanCmd >
                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m -
                     KeFSCR_Pct_HCP_DfltFanCmd_delta))
            {
                /* Switch: '<S265>/Switch1' incorporates:
                 *  Switch: '<S247>/Switch1'
                 */
                VeFSCR_Pct_NormalRadFanCmd_On = VeFSCR_Pct_HCP_NormalFanCmd;
            }
            else
            {
                /* Switch: '<S265>/Switch1' incorporates:
                 *  Switch: '<S247>/Switch1'
                 */
                VeFSCR_Pct_NormalRadFanCmd_On =
                    FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;
            }

            /* End of Switch: '<S264>/Switch1' */
        }
        else
        {
            /* Switch: '<S265>/Switch1' incorporates:
             *  Switch: '<S247>/Switch1'
             */
            VeFSCR_Pct_NormalRadFanCmd_On =
                FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m;
        }

        /* End of Switch: '<S265>/Switch1' */

        /* Switch: '<S268>/Switch1' incorporates:
         *  Constant: '<S261>/Constant'
         *  Constant: '<S262>/Constant'
         *  RelationalOperator: '<S247>/Comparison4'
         *  RelationalOperator: '<S247>/Comparison5'
         *  Switch: '<S267>/Switch1'
         */
        if (CeTHMR_e_Low_EmrgcyFanRq_Lv1 == ((uint32)
                FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jl))
        {
            /* Switch: '<S268>/Switch1' incorporates:
             *  Constant: '<S273>/Calib'
             */
            VeFSCR_Pct_Emrgy_RadFanCmd_On = KeFSCR_Pct_Emrgy_RadFanCmd_OnLo;
        }
        else if (((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_jl) ==
                 CeTHMR_e_High_EmrgcyFanRq_Lv2)
        {
            /* Switch: '<S267>/Switch1' incorporates:
             *  Constant: '<S271>/Calib'
             *  Switch: '<S268>/Switch1'
             */
            VeFSCR_Pct_Emrgy_RadFanCmd_On = KeFSCR_Pct_Emrgy_RadFanCmd_On;
        }
        else
        {
            /* Switch: '<S268>/Switch1' incorporates:
             *  Constant: '<S272>/Calib'
             *  Switch: '<S267>/Switch1'
             */
            VeFSCR_Pct_Emrgy_RadFanCmd_On = KeFSCR_Pct_Emrgy_RadFanCmd_OnDft;
        }

        /* End of Switch: '<S268>/Switch1' */

        /* Switch: '<S266>/Switch1' incorporates:
         *  Constant: '<S275>/Calib'
         *  Constant: '<S276>/Calib'
         */
        if (VeFSCR_b_HoodAjar_FanOn_Cond)
        {
            rtb_Merge = KeFSCR_Pct_HoodAjar_RadFanCmd;
        }
        else
        {
            rtb_Merge = KeFSCR_Pct_HoodAjar_RadFanCmd_Min;
        }

        /* End of Switch: '<S266>/Switch1' */

        /* MinMax: '<S247>/MinMax1' */
        VeFSCR_Pct_RadFanCmd_Raw = fmaxf(fmaxf(VeFSCR_Pct_Emrgy_RadFanCmd_On,
            VeFSCR_Pct_NormalRadFanCmd_On), rtb_Merge);

        /* Merge: '<S13>/Merge' incorporates:
         *  Gain: '<S280>/Gain'
         */
        VeFSCR_Pct_RadLVFan1ActualCmd_Raw = VeFSCR_Pct_RadFanCmd_Raw;

        /* Outputs for Atomic SubSystem: '<S238>/HoodAjar_LVFan2On' */
        /* Outputs for Atomic SubSystem: '<S248>/Hysteresis1' */
        /* Switch: '<S281>/Switch1' incorporates:
         *  Constant: '<S281>/ConstantValue'
         *  Constant: '<S283>/Calib'
         *  Constant: '<S284>/Calib'
         *  RelationalOperator: '<S281>/GreaterThan'
         *  RelationalOperator: '<S281>/GreaterThan1'
         *  UnitDelay: '<S281>/UnitDelay'
         */
        if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >
                KeFSCR_P_PWRbudget_MinHi)
        {
            FSCR_ac_DW.UnitDelay_DSTATE_e = true;
        }
        else
        {
            FSCR_ac_DW.UnitDelay_DSTATE_e =
                ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_k >=
                  KeFSCR_P_PWRbudget_MinLo) && (FSCR_ac_DW.UnitDelay_DSTATE_e));
        }

        /* End of Switch: '<S281>/Switch1' */
        /* End of Outputs for SubSystem: '<S248>/Hysteresis1' */

        /* Lookup_n-D: '<S287>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_Pct_HCP_DfltLVFan2Cmd = look1_iflf_binlca_16a
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dz, ((const float32
               *)&(KxFSCR_Pct_DfltLVFan2Cmd[0])), ((const float32 *)
              &(KtFSCR_Pct_DfltLVFan2Cmd[0])), 6U);

        /* Lookup_n-D: '<S288>/Vector' incorporates:
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         */
        VeFSCR_Pct_HCP_MinLVFan2Cmd = look1_iflf_binlca_16a
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_dz, ((const float32
               *)&(KxFSCR_Pct_MinLVFan2Cmd[0])), ((const float32 *)
              &(KtFSCR_Pct_MinLVFan2Cmd[0])), 6U);

        /* Switch: '<S248>/Switch' incorporates:
         *  UnitDelay: '<S281>/UnitDelay'
         */
        if (FSCR_ac_DW.UnitDelay_DSTATE_e)
        {
            rtb_Merge = VeFSCR_Pct_HCP_DfltLVFan2Cmd;
        }
        else
        {
            rtb_Merge = VeFSCR_Pct_HCP_MinLVFan2Cmd;
        }

        /* End of Switch: '<S248>/Switch' */

        /* Switch: '<S282>/Switch1' incorporates:
         *  Constant: '<S285>/Calib'
         *  Constant: '<S286>/Calib'
         */
        if (VeFSCR_b_HoodAjar_FanOn_Cond)
        {
            Merge1 = KeFSCR_Pct_HoodAjar_RadFanCmd;
        }
        else
        {
            Merge1 = KeFSCR_Pct_HoodAjar_RadFanCmd_Min;
        }

        /* End of Switch: '<S282>/Switch1' */

        /* MinMax: '<S248>/MinMax1' */
        VeFSCR_Pct_LVRadFan2Cmd_Raw = fmaxf(rtb_Merge, Merge1);

        /* Merge: '<S13>/Merge1' incorporates:
         *  Gain: '<S289>/Gain'
         */
        VeFSCR_Pct_RadLVFan2ActualCmd_Raw = VeFSCR_Pct_LVRadFan2Cmd_Raw;

        /* End of Outputs for SubSystem: '<S238>/HoodAjar_LVFan2On' */
        /* End of Outputs for SubSystem: '<S13>/HoodAjar_FanOn' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S13>/Fault' incorporates:
         *  ActionPort: '<S237>/ActionPort'
         */
        /* Merge: '<S13>/Merge' incorporates:
         *  Constant: '<S244>/Calib'
         *  SignalConversion generated from: '<S237>/RadLVFan1Comd_Fault'
         */
        VeFSCR_Pct_RadLVFan1ActualCmd_Raw = KeFSCR_Pct_RadLVFan1Flt;

        /* Merge: '<S13>/Merge1' incorporates:
         *  Constant: '<S245>/Calib'
         *  SignalConversion generated from: '<S237>/RadLVFan2Comd_Fault'
         */
        VeFSCR_Pct_RadLVFan2ActualCmd_Raw = KeFSCR_Pct_RadLVFan2Flt;

        /* Merge: '<S13>/Merge2' incorporates:
         *  Constant: '<S243>/Calib'
         *  SignalConversion generated from: '<S237>/RadHVFanComd_Fault'
         */
        VeFSCR_Pct_RadHVFanActualCmd_Raw = KeFSCR_Pct_RadHVFanFlt;

        /* End of Outputs for SubSystem: '<S13>/Fault' */
    }

    /* End of If: '<S13>/If' */

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising' */
    /* Logic: '<S21>/OR1' incorporates:
     *  UnitDelay: '<S21>/UnitDelay'
     */
    rtb_Comparison7_k = !FSCR_ac_DW.UnitDelay_DSTATE_li;

    /* Update for UnitDelay: '<S21>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_li =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn;

    /* End of Outputs for SubSystem: '<S10>/EdgeRising' */

    /* UnitDelay: '<S10>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S10>/CountDownResetEnabled'
     * */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising1' */
    /* Logic: '<S22>/AND' incorporates:
     *  Logic: '<S22>/OR1'
     *  UnitDelay: '<S22>/UnitDelay'
     */
    rtb_AND_p = ((FSCR_ac_DW.UnitDelay_DSTATE_c) &&
                 (!FSCR_ac_DW.UnitDelay_DSTATE_pe));

    /* Update for UnitDelay: '<S22>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_pe = FSCR_ac_DW.UnitDelay_DSTATE_c;

    /* VariantMerge generated from: '<S10>/CountDownResetEnabled' */
    rtb_VM_Conditional_Signal_CountDownReset = rtb_AND_p;

    /* End of Outputs for SubSystem: '<S10>/EdgeRising1' */
#else

    /* VariantMerge generated from: '<S10>/CountDownResetEnabled' incorporates:
     *  SignalConversion generated from: '<S10>/CountDownResetEnabled'
     */
    rtb_VM_Conditional_Signal_CountDownReset = false;

#endif

    /* Outputs for Atomic SubSystem: '<S10>/CountDownResetEnabled' */
    /* Switch: '<S19>/Switch1' incorporates:
     *  Constant: '<S19>/ConstantValue'
     *  Constant: '<S24>/Calib'
     *  RelationalOperator: '<S19>/GreaterThan'
     *  Switch: '<S19>/Switch2'
     *  UnitDelay: '<S19>/UnitDelay'
     */
    if (rtb_VM_Conditional_Signal_CountDownReset)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_ie = KeFSCR_Cnt_AGS_CalibRq_Cntr;
    }
    else
    {
        if (((sint32)FSCR_ac_DW.UnitDelay_DSTATE_ie) > 0)
        {
            /* UnitDelay: '<S19>/UnitDelay' incorporates:
             *  Constant: '<S19>/ConstantValue1'
             *  Sum: '<S19>/Subtraction'
             *  Switch: '<S19>/Switch2'
             */
            FSCR_ac_DW.UnitDelay_DSTATE_ie = (uint16)((sint32)(((sint32)
                FSCR_ac_DW.UnitDelay_DSTATE_ie) - 1));
        }
    }

    /* End of Switch: '<S19>/Switch1' */

    /* RelationalOperator: '<S19>/GreaterThan1' incorporates:
     *  Constant: '<S19>/ConstantValue2'
     *  UnitDelay: '<S19>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownReset = (((sint32)
        FSCR_ac_DW.UnitDelay_DSTATE_ie) > 0);

    /* End of Outputs for SubSystem: '<S10>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S10>/EdgeFalling2' */
    /* Logic: '<S20>/AND' incorporates:
     *  Logic: '<S20>/OR1'
     *  UnitDelay: '<S20>/UnitDelay'
     */
    rtb_AND_e = ((!rtb_VM_Conditional_Signal_CountDownReset) &&
                 (FSCR_ac_DW.UnitDelay_DSTATE_hq));

    /* Update for UnitDelay: '<S20>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_hq = rtb_VM_Conditional_Signal_CountDownReset;

    /* End of Outputs for SubSystem: '<S10>/EdgeFalling2' */

    /* SignalConversion generated from: '<S10>/Switch2' */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* UnitDelay: '<S422>/UnitDelay' */
    rtb_AND_do = rtb_AND_p;

#else

    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S10>/Switch2'
     */
    rtb_AND_do = false;

#endif

    /* End of SignalConversion generated from: '<S10>/Switch2' */

    /* Switch: '<S10>/Switch2' incorporates:
     *  Constant: '<S39>/Calib'
     */
    if (KeFSCR_b_AGS_CalibRq_DelayEnbl)
    {
        rtb_AND_do = rtb_AND_e;
    }

    /* End of Switch: '<S10>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S10>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S10>/EdgeRising' */
    /* Logic: '<S53>/OR1' incorporates:
     *  Logic: '<S21>/AND'
     *  Logic: '<S53>/NOT'
     *  Logic: '<S53>/OR'
     *  UnitDelay: '<S53>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_jd =
        (((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bn) &&
          rtb_Comparison7_k) || ((!rtb_AND_do) &&
          (FSCR_ac_DW.UnitDelay_DSTATE_jd)));

    /* End of Outputs for SubSystem: '<S10>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S10>/SignalLatchOnWithReset' */

    /* SignalConversion generated from: '<S1>/VeFSCR_b_FanTstNot_Cmplt_Write' incorporates:
     *  DataStoreRead: '<S12>/DataStoreRead'
     *  Outport: '<Root>/VeFSCR_b_RadFanTst_NotCmplte'
     */
    (void)Rte_Write_VeFSCR_b_RadFanTst_NotCmplte_Value
        (FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte);

    /* SignalConversion generated from: '<S1>/VeFSCR_b_FanTstFaild_Write' incorporates:
     *  DataStoreRead: '<S12>/DataStoreRead2'
     *  Outport: '<Root>/VeFSCR_b_RadFanTst_Failed'
     */
    (void)Rte_Write_VeFSCR_b_RadFanTst_Failed_Value
        (FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed);

    /* Outputs for Atomic SubSystem: '<S395>/Hysteresis' */
    /* Switch: '<S397>/Switch1' incorporates:
     *  Constant: '<S397>/ConstantValue'
     *  Constant: '<S400>/Calib'
     *  Constant: '<S401>/Calib'
     *  RelationalOperator: '<S397>/GreaterThan'
     *  RelationalOperator: '<S397>/GreaterThan1'
     *  UnitDelay: '<S397>/UnitDelay'
     */
    if (VeFSCR_Pct_RadLVFan1ActualCmd_Raw > KeFSCR_Pct_NoFlyZoneMin)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_pr = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_pr = ((VeFSCR_Pct_RadLVFan1ActualCmd_Raw >=
            KeFSCR_Pct_NoFlyZoneTh) && (FSCR_ac_DW.UnitDelay_DSTATE_pr));
    }

    /* End of Switch: '<S397>/Switch1' */
    /* End of Outputs for SubSystem: '<S395>/Hysteresis' */

    /* Switch: '<S387>/Switch1' incorporates:
     *  Constant: '<S392>/Calib'
     *  Constant: '<S393>/Calib'
     *  Logic: '<S361>/Logical1'
     *  RelationalOperator: '<S361>/Comparison1'
     */
    if ((KeFSCR_b_NoFlyZone_Enable) &&
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g <
             KeFSCR_v_NoFlyZone_VehicleSpeed))
    {
        /* Switch: '<S398>/Switch1' incorporates:
         *  Constant: '<S399>/Calib'
         *  Logic: '<S395>/Logical1'
         *  RelationalOperator: '<S395>/Comparison3'
         *  UnitDelay: '<S397>/UnitDelay'
         */
        if ((FSCR_ac_DW.UnitDelay_DSTATE_pr) &&
                (VeFSCR_Pct_RadLVFan1ActualCmd_Raw < KeFSCR_Pct_NoFlyZoneMax))
        {
            /* Switch: '<S387>/Switch1' */
            rtb_Sum1_d = KeFSCR_Pct_NoFlyZoneMax;
        }
        else
        {
            /* Switch: '<S387>/Switch1' */
            rtb_Sum1_d = VeFSCR_Pct_RadLVFan1ActualCmd_Raw;
        }

        /* End of Switch: '<S398>/Switch1' */
    }
    else
    {
        /* Switch: '<S387>/Switch1' */
        rtb_Sum1_d = VeFSCR_Pct_RadLVFan1ActualCmd_Raw;
    }

    /* End of Switch: '<S387>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S361>/Limiter' */
    /* Switch: '<S394>/Switch1' incorporates:
     *  Constant: '<S391>/Calib'
     *  RelationalOperator: '<S394>/RelationalOperator'
     */
    if (KeFSCR_Pct_LVRadFan1UpLim < rtb_Sum1_d)
    {
        /* Switch: '<S423>/Switch1' */
        rtb_Sum1_d = KeFSCR_Pct_LVRadFan1UpLim;
    }

    /* End of Switch: '<S394>/Switch1' */

    /* Switch: '<S394>/Switch' incorporates:
     *  Constant: '<S388>/Calib'
     *  RelationalOperator: '<S394>/RelationalOperator1'
     */
    if (rtb_Sum1_d > KeFSCR_Pct_LVRadFan1DwnLim)
    {
        /* Switch: '<S394>/Switch' */
        VeFSCR_Pct_LVRadFan1ActualCmd_BG = rtb_Sum1_d;
    }
    else
    {
        /* Switch: '<S394>/Switch' */
        VeFSCR_Pct_LVRadFan1ActualCmd_BG = KeFSCR_Pct_LVRadFan1DwnLim;
    }

    /* End of Switch: '<S394>/Switch' */
    /* End of Outputs for SubSystem: '<S361>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S396>/EdgeRising' */
    /* Logic: '<S402>/AND' incorporates:
     *  Logic: '<S402>/OR1'
     *  UnitDelay: '<S402>/UnitDelay'
     */
    rtb_AND_p = !FSCR_ac_DW.UnitDelay_DSTATE_n;

    /* Update for UnitDelay: '<S402>/UnitDelay' incorporates:
     *  Constant: '<S396>/TRUEConstant'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_n = true;

    /* End of Outputs for SubSystem: '<S396>/EdgeRising' */

    /* Switch: '<S404>/Switch1' */
    if (rtb_AND_p)
    {
        /* Sum: '<S396>/Sum' incorporates:
         *  Constant: '<S388>/Calib'
         */
        FSCR_ac_DW.UnitDelay_DSTATE_a0 = KeFSCR_Pct_LVRadFan1DwnLim;
    }

    /* End of Switch: '<S404>/Switch1' */

    /* Sum: '<S396>/Sum1' */
    rtb_Sum1_d = VeFSCR_Pct_LVRadFan1ActualCmd_BG -
        FSCR_ac_DW.UnitDelay_DSTATE_a0;

    /* Outputs for Atomic SubSystem: '<S396>/Limiter1' */
    /* Switch: '<S403>/Switch1' incorporates:
     *  Constant: '<S389>/Calib'
     *  RelationalOperator: '<S403>/RelationalOperator'
     */
    if (KeFSCR_Pct_LVRadFan1Incrs_High < rtb_Sum1_d)
    {
        /* Switch: '<S423>/Switch1' */
        rtb_Sum1_d = KeFSCR_Pct_LVRadFan1Incrs_High;
    }

    /* End of Switch: '<S403>/Switch1' */

    /* Switch: '<S403>/Switch' incorporates:
     *  Constant: '<S390>/Calib'
     *  RelationalOperator: '<S403>/RelationalOperator1'
     */
    if (rtb_Sum1_d <= KeFSCR_Pct_LVRadFan1Incrs_Low)
    {
        rtb_Sum1_d = KeFSCR_Pct_LVRadFan1Incrs_Low;
    }

    /* End of Switch: '<S403>/Switch' */
    /* End of Outputs for SubSystem: '<S396>/Limiter1' */

    /* Sum: '<S396>/Sum' */
    FSCR_ac_DW.UnitDelay_DSTATE_a0 += rtb_Sum1_d;

    /* Switch: '<S386>/Switch1' incorporates:
     *  Constant: '<S385>/Constant'
     *  RelationalOperator: '<S361>/Comparison4'
     */
    if (((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
            CePMTR_e_DISBL_All_Thrml)
    {
        /* Switch: '<S386>/Switch1' incorporates:
         *  Constant: '<S388>/Calib'
         */
        VeFSCR_Pct_LVRadFan1ActualCmd_BD = KeFSCR_Pct_LVRadFan1DwnLim;
    }
    else
    {
        /* Switch: '<S386>/Switch1' */
        VeFSCR_Pct_LVRadFan1ActualCmd_BD = FSCR_ac_DW.UnitDelay_DSTATE_a0;
    }

    /* End of Switch: '<S386>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S375>/Hysteresis' */
    /* Switch: '<S377>/Switch1' incorporates:
     *  Constant: '<S377>/ConstantValue'
     *  Constant: '<S380>/Calib'
     *  Constant: '<S381>/Calib'
     *  RelationalOperator: '<S377>/GreaterThan'
     *  RelationalOperator: '<S377>/GreaterThan1'
     *  UnitDelay: '<S377>/UnitDelay'
     */
    if (VeFSCR_Pct_RadHVFanActualCmd_Raw > KeFSCR_Pct_NoFlyZoneMin)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_dh = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_dh = ((VeFSCR_Pct_RadHVFanActualCmd_Raw >=
            KeFSCR_Pct_NoFlyZoneTh) && (FSCR_ac_DW.UnitDelay_DSTATE_dh));
    }

    /* End of Switch: '<S377>/Switch1' */
    /* End of Outputs for SubSystem: '<S375>/Hysteresis' */

    /* Switch: '<S367>/Switch1' incorporates:
     *  Constant: '<S372>/Calib'
     *  Constant: '<S373>/Calib'
     *  Logic: '<S360>/Logical1'
     *  RelationalOperator: '<S360>/Comparison1'
     */
    if ((KeFSCR_b_NoFlyZone_Enable) &&
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g <
             KeFSCR_v_NoFlyZone_VehicleSpeed))
    {
        /* Switch: '<S378>/Switch1' incorporates:
         *  Constant: '<S379>/Calib'
         *  Logic: '<S375>/Logical1'
         *  RelationalOperator: '<S375>/Comparison3'
         *  UnitDelay: '<S377>/UnitDelay'
         */
        if ((FSCR_ac_DW.UnitDelay_DSTATE_dh) &&
                (VeFSCR_Pct_RadHVFanActualCmd_Raw < KeFSCR_Pct_NoFlyZoneMax))
        {
            /* Switch: '<S367>/Switch1' */
            rtb_Sum1_d = KeFSCR_Pct_NoFlyZoneMax;
        }
        else
        {
            /* Switch: '<S367>/Switch1' */
            rtb_Sum1_d = VeFSCR_Pct_RadHVFanActualCmd_Raw;
        }

        /* End of Switch: '<S378>/Switch1' */
    }
    else
    {
        /* Switch: '<S367>/Switch1' */
        rtb_Sum1_d = VeFSCR_Pct_RadHVFanActualCmd_Raw;
    }

    /* End of Switch: '<S367>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S360>/Limiter' */
    /* Switch: '<S374>/Switch1' incorporates:
     *  Constant: '<S371>/Calib'
     *  RelationalOperator: '<S374>/RelationalOperator'
     */
    if (KeFSCR_Pct_HVRadFanUpLim < rtb_Sum1_d)
    {
        /* Switch: '<S423>/Switch1' */
        rtb_Sum1_d = KeFSCR_Pct_HVRadFanUpLim;
    }

    /* End of Switch: '<S374>/Switch1' */

    /* Switch: '<S374>/Switch' incorporates:
     *  Constant: '<S368>/Calib'
     *  RelationalOperator: '<S374>/RelationalOperator1'
     */
    if (rtb_Sum1_d > KeFSCR_Pct_HVRadFanDwnLim)
    {
        /* Switch: '<S374>/Switch' */
        VeFSCR_Pct_HVRadFanActualCmd_BG = rtb_Sum1_d;
    }
    else
    {
        /* Switch: '<S374>/Switch' */
        VeFSCR_Pct_HVRadFanActualCmd_BG = KeFSCR_Pct_HVRadFanDwnLim;
    }

    /* End of Switch: '<S374>/Switch' */
    /* End of Outputs for SubSystem: '<S360>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S376>/EdgeRising' */
    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  UnitDelay: '<S382>/UnitDelay'
     */
    rtb_AND_do = FSCR_ac_DW.UnitDelay_DSTATE_ph;

    /* Logic: '<S382>/AND' incorporates:
     *  Logic: '<S382>/OR1'
     *  UnitDelay: '<S382>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownReset = !FSCR_ac_DW.UnitDelay_DSTATE_ph;

    /* Update for UnitDelay: '<S382>/UnitDelay' incorporates:
     *  Constant: '<S376>/TRUEConstant'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_ph = true;

    /* End of Outputs for SubSystem: '<S376>/EdgeRising' */

    /* Switch: '<S384>/Switch1' */
    if (rtb_VM_Conditional_Signal_CountDownReset)
    {
        /* Sum: '<S376>/Sum' incorporates:
         *  Constant: '<S368>/Calib'
         */
        FSCR_ac_DW.UnitDelay_DSTATE_g = KeFSCR_Pct_HVRadFanDwnLim;
    }

    /* End of Switch: '<S384>/Switch1' */

    /* Sum: '<S376>/Sum1' */
    rtb_Sum1_d = VeFSCR_Pct_HVRadFanActualCmd_BG - FSCR_ac_DW.UnitDelay_DSTATE_g;

    /* Outputs for Atomic SubSystem: '<S376>/Limiter1' */
    /* Switch: '<S383>/Switch1' incorporates:
     *  Constant: '<S369>/Calib'
     *  RelationalOperator: '<S383>/RelationalOperator'
     */
    if (KeFSCR_Pct_HVRadFanIncrs_High < rtb_Sum1_d)
    {
        /* Switch: '<S423>/Switch1' */
        rtb_Sum1_d = KeFSCR_Pct_HVRadFanIncrs_High;
    }

    /* End of Switch: '<S383>/Switch1' */

    /* Switch: '<S383>/Switch' incorporates:
     *  Constant: '<S370>/Calib'
     *  RelationalOperator: '<S383>/RelationalOperator1'
     */
    if (rtb_Sum1_d <= KeFSCR_Pct_HVRadFanIncrs_Low)
    {
        rtb_Sum1_d = KeFSCR_Pct_HVRadFanIncrs_Low;
    }

    /* End of Switch: '<S383>/Switch' */
    /* End of Outputs for SubSystem: '<S376>/Limiter1' */

    /* Sum: '<S376>/Sum' */
    FSCR_ac_DW.UnitDelay_DSTATE_g += rtb_Sum1_d;

    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S363>/Constant'
     *  Constant: '<S364>/Constant'
     *  Constant: '<S365>/Constant'
     *  Logic: '<S360>/Logical2'
     *  RelationalOperator: '<S360>/Comparison2'
     *  RelationalOperator: '<S360>/Comparison3'
     *  RelationalOperator: '<S360>/Comparison4'
     */
    if (((((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
            CePMTR_e_DISBL_All_Thrml) || (((uint32)
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
            CePMTR_e_Enb_Only_LT_Pmp_N_Fan)) || (((uint32)
            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
            CePMTR_e_ENB_Only_Pmps))
    {
        /* Switch: '<S366>/Switch1' incorporates:
         *  Constant: '<S368>/Calib'
         */
        VeFSCR_Pct_HVRadFanActualCmd_BD = KeFSCR_Pct_HVRadFanDwnLim;
    }
    else
    {
        /* Switch: '<S366>/Switch1' */
        VeFSCR_Pct_HVRadFanActualCmd_BD = FSCR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S366>/Switch1' */

    /* If: '<S12>/If' incorporates:
     *  DataStoreRead: '<S12>/DataStoreRead'
     *  DataStoreRead: '<S12>/DataStoreRead2'
     *  Logic: '<S213>/Logical1'
     *  Logic: '<S213>/Logical2'
     *  RelationalOperator: '<S213>/Comparison1'
     *  RelationalOperator: '<S213>/Comparison2'
     *  RelationalOperator: '<S213>/Comparison3'
     *  RelationalOperator: '<S213>/Comparison4'
     */
    if ((VeFSCF_b_Fan_DVC_Lim_AD) &&
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg))
    {
        /* Outputs for IfAction SubSystem: '<S12>/DVC_IO' incorporates:
         *  ActionPort: '<S211>/ActionPort'
         */
        /* Merge: '<S12>/Merge' incorporates:
         *  Inport: '<S211>/DVC_RadFan_Cmd_AD'
         *  SignalConversion generated from: '<S211>/RadFanComd_DVC_IO'
         */
        rtb_Merge = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;

        /* Merge: '<S12>/Merge1' incorporates:
         *  Gain: '<S217>/Gain'
         *  Inport: '<S211>/DVC_RadFan_Cmd_AD'
         */
        Merge1 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_a;

        /* End of Outputs for SubSystem: '<S12>/DVC_IO' */
    }
    else if ((((!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_gg) &&
               (!VeFSCF_b_Fan_DVC_Lim_AD)) &&
              (FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte)) &&
             (FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed))
    {
        /* Outputs for IfAction SubSystem: '<S12>/HandShaking1' incorporates:
         *  ActionPort: '<S212>/ActionPort'
         */
        /* Chart: '<S212>/StateflowChart' incorporates:
         *  Constant: '<S218>/Calib'
         *  Constant: '<S219>/Calib'
         *  Constant: '<S220>/Calib'
         *  Constant: '<S221>/Calib'
         *  Constant: '<S222>/Calib'
         *  Constant: '<S223>/Calib'
         *  Constant: '<S224>/Calib'
         *  Constant: '<S226>/Calib'
         *  Constant: '<S227>/Calib'
         *  Constant: '<S228>/Calib'
         *  Constant: '<S229>/Calib'
         *  Constant: '<S230>/Calib'
         *  Constant: '<S231>/Calib'
         *  Constant: '<S232>/Calib'
         */
        /* Gateway: FSCR_FUNC_MedTEH/FSCR_Controls/FSCR_EOL_Handshake/HandShaking1/StateflowChart */
        /* During: FSCR_FUNC_MedTEH/FSCR_Controls/FSCR_EOL_Handshake/HandShaking1/StateflowChart */
        if (((uint32)FSCR_ac_DW.is_active_c1_FSCR_ac) == 0U)
        {
            /* Entry: FSCR_FUNC_MedTEH/FSCR_Controls/FSCR_EOL_Handshake/HandShaking1/StateflowChart */
            FSCR_ac_DW.is_active_c1_FSCR_ac = 1U;

            /* Entry Internal: FSCR_FUNC_MedTEH/FSCR_Controls/FSCR_EOL_Handshake/HandShaking1/StateflowChart */
            /* Transition: '<S236>:26' */
            FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Handshake_Timer0_Strt;

            /* Entry 'FSCR_Handshake_Timer0_Strt': '<S236>:16' */
            FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
            FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                KeFSCR_Pct_EOL_HandShk_FanCmdMin;
            FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
            FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
            FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = true;
        }
        else
        {
            switch (FSCR_ac_DW.is_c1_FSCR_ac)
            {
              case F_IN_FSCR_Handshake_DualFanTimer4_Passed:
                /* During 'FSCR_Handshake_DualFanTimer4_Passed': '<S236>:111' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >=
                        KeFSCR_t_DVC_DualFan_TimeOff4)
                {
                    /* Transition: '<S236>:116' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer5_Strt;

                    /* Entry 'FSCR_Handshake_Timer5_Strt': '<S236>:117' */
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmd;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_TimeEnd_Strt:
                /* During 'FSCR_Handshake_TimeEnd_Strt': '<S236>:67' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_TimeEnd)
                {
                    /* Transition: '<S236>:74' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else if ((FSCR_ac_B.VeFSCR_t_StateTimer <=
                          KeFSCR_t_DVC_Fan_TimeEnd) && (fabsf
                          (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                           KeFSCR_Pct_EOL_HandShk_FanCmd) <=
                          KeFSCR_Pct_EOL_FanPctErr_Min))
                {
                    /* Transition: '<S236>:72' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_a_IN_FSCR_Handshake_TimerEnd_Passed;

                    /* Entry 'FSCR_Handshake_TimerEnd_Passed': '<S236>:70' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = false;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer0_Passed:
                FSCR_ac_B.VeFSCR_b_EOL_FanSleep_Flag_AS = true;

                /* During 'FSCR_Handshake_Timer0_Passed': '<S236>:29' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >= KeFSCR_t_DVC_Fan_SleepTime)
                {
                    /* Transition: '<S236>:34' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer1_Strt;

                    /* Entry 'FSCR_Handshake_Timer1_Strt': '<S236>:21' */
                    FSCR_ac_B.VeFSCR_b_EOL_FanSleep_Flag_AS = false;
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmd;
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer0_Strt:
                /* During 'FSCR_Handshake_Timer0_Strt': '<S236>:16' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_SleepTime)
                {
                    /* Transition: '<S236>:32' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else if ((FSCR_ac_B.VeFSCR_t_StateTimer <=
                          KeFSCR_t_DVC_Fan_SleepTime) && (fabsf
                          (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                           KeFSCR_Pct_EOL_HandShk_FanCmdMin) <=
                          KeFSCR_Pct_EOL_FanPctErr_Min))
                {
                    /* Transition: '<S236>:22' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer0_Passed;

                    /* Entry 'FSCR_Handshake_Timer0_Passed': '<S236>:29' */
                    FSCR_ac_B.VeFSCR_b_EOL_FanSleep_Flag_AS = true;
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer1_Passed:
                /* During 'FSCR_Handshake_Timer1_Passed': '<S236>:36' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >= KeFSCR_t_DVC_Fan_TimeOff1)
                {
                    /* Transition: '<S236>:41' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer2_Strt;

                    /* Entry 'FSCR_Handshake_Timer2_Strt': '<S236>:40' */
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmdMax;
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer1_Strt:
                FSCR_ac_B.VeFSCR_b_EOL_FanSleep_Flag_AS = false;

                /* During 'FSCR_Handshake_Timer1_Strt': '<S236>:21' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_TimeOff1)
                {
                    /* Transition: '<S236>:39' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else if ((FSCR_ac_B.VeFSCR_t_StateTimer <=
                          KeFSCR_t_DVC_Fan_TimeOff1) && (fabsf
                          (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                           KeFSCR_Pct_EOL_HandShk_FanCmd) <=
                          KeFSCR_Pct_EOL_FanPctErr_Min))
                {
                    /* Transition: '<S236>:37' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer1_Passed;

                    /* Entry 'FSCR_Handshake_Timer1_Passed': '<S236>:36' */
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer2_Passed:
                /* During 'FSCR_Handshake_Timer2_Passed': '<S236>:42' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >= KeFSCR_t_DVC_Fan_TimeOff2)
                {
                    /* Transition: '<S236>:50' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer3_Strt;

                    /* Entry 'FSCR_Handshake_Timer3_Strt': '<S236>:51' */
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmd;
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer2_Strt:
                /* During 'FSCR_Handshake_Timer2_Strt': '<S236>:40' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_TimeOff2)
                {
                    /* Transition: '<S236>:46' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else if ((FSCR_ac_B.VeFSCR_t_StateTimer <=
                          KeFSCR_t_DVC_Fan_TimeOff2) && (fabsf
                          (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                           KeFSCR_Pct_EOL_HandShk_FanCmdMax) <=
                          KeFSCR_Pct_EOL_FanPctErr_Min))
                {
                    /* Transition: '<S236>:44' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer2_Passed;

                    /* Entry 'FSCR_Handshake_Timer2_Passed': '<S236>:42' */
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer3_Passed:
                /* During 'FSCR_Handshake_Timer3_Passed': '<S236>:57' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >= KeFSCR_t_DVC_Fan_TimeOff3)
                {
                    /* Transition: '<S236>:59' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer4_Strt;

                    /* Entry 'FSCR_Handshake_Timer4_Strt': '<S236>:55' */
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmd;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer3_Strt:
                /* During 'FSCR_Handshake_Timer3_Strt': '<S236>:51' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_TimeOff3)
                {
                    /* Transition: '<S236>:61' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else if ((FSCR_ac_B.VeFSCR_t_StateTimer <=
                          KeFSCR_t_DVC_Fan_TimeOff3) && (fabsf
                          (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                           KeFSCR_Pct_EOL_HandShk_FanCmd) <=
                          KeFSCR_Pct_EOL_FanPctErr_Min))
                {
                    /* Transition: '<S236>:58' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer3_Passed;

                    /* Entry 'FSCR_Handshake_Timer3_Passed': '<S236>:57' */
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer4_Passed:
                /* During 'FSCR_Handshake_Timer4_Passed': '<S236>:62' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_TimeOff4)
                {
                    /* Transition: '<S236>:68' */
                    /* Transition: '<S236>:135' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_TimeEnd_Strt;

                    /* Entry 'FSCR_Handshake_TimeEnd_Strt': '<S236>:67' */
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmd;
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer4_Strt:
                /* During 'FSCR_Handshake_Timer4_Strt': '<S236>:55' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer > KeFSCR_t_DVC_Fan_TimeOff4)
                {
                    /* Transition: '<S236>:65' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else
                {
                    rtb_Merge = fabsf
                        (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                         KeFSCR_Pct_EOL_HandShk_FanCmdMax);
                    if (((FSCR_ac_B.VeFSCR_t_StateTimer <=
                            KeFSCR_t_DVC_DualFan_TimeOff4) && (rtb_Merge <=
                            KeFSCR_Pct_EOL_FanPctErr_Min)) &&
                            (KeFSCR_b_EOL_HandShk_DualFan_En))
                    {
                        /* Transition: '<S236>:112' */
                        FSCR_ac_DW.is_c1_FSCR_ac =
                            F_IN_FSCR_Handshake_DualFanTimer4_Passed;

                        /* Entry 'FSCR_Handshake_DualFanTimer4_Passed': '<S236>:111' */
                        FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                    }
                    else if (((FSCR_ac_B.VeFSCR_t_StateTimer <=
                               KeFSCR_t_DVC_Fan_TimeOff4) && (rtb_Merge <=
                               KeFSCR_Pct_EOL_FanPctErr_Min)) &&
                             (!KeFSCR_b_EOL_HandShk_DualFan_En))
                    {
                        /* Transition: '<S236>:142' */
                        /* Transition: '<S236>:63' */
                        FSCR_ac_DW.is_c1_FSCR_ac =
                            FSCR_ac_IN_FSCR_Handshake_Timer4_Passed;

                        /* Entry 'FSCR_Handshake_Timer4_Passed': '<S236>:62' */
                        FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                    }
                    else
                    {
                        FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                    }
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer5_Passed:
                /* During 'FSCR_Handshake_Timer5_Passed': '<S236>:118' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >=
                        KeFSCR_t_DVC_DualFan_TimeOff5)
                {
                    /* Transition: '<S236>:121' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_TimeEnd_Strt;

                    /* Entry 'FSCR_Handshake_TimeEnd_Strt': '<S236>:67' */
                    FSCR_ac_B.VeFSCR_t_StateTimer = 0.0F;
                    FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd =
                        KeFSCR_Pct_EOL_HandShk_FanCmd;
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_ac_IN_FSCR_Handshake_Timer5_Strt:
                /* During 'FSCR_Handshake_Timer5_Strt': '<S236>:117' */
                if (FSCR_ac_B.VeFSCR_t_StateTimer >
                        KeFSCR_t_DVC_DualFan_TimeOff5)
                {
                    /* Transition: '<S236>:136' */
                    FSCR_ac_DW.is_c1_FSCR_ac = FSCR_ac_IN_FSCR_Timer_Failed;

                    /* Entry 'FSCR_Timer_Failed': '<S236>:31' */
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed = true;
                    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte = false;
                }
                else if ((FSCR_ac_B.VeFSCR_t_StateTimer <=
                          KeFSCR_t_DVC_DualFan_TimeOff5) && (fabsf
                          (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_i -
                           KeFSCR_Pct_EOL_HandShk_FanCmdMax) <=
                          KeFSCR_Pct_EOL_FanPctErr_Min))
                {
                    /* Transition: '<S236>:119' */
                    FSCR_ac_DW.is_c1_FSCR_ac =
                        FSCR_ac_IN_FSCR_Handshake_Timer5_Passed;

                    /* Entry 'FSCR_Handshake_Timer5_Passed': '<S236>:118' */
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                else
                {
                    FSCR_ac_B.VeFSCR_t_StateTimer += KeFSCR_t_dT;
                }
                break;

              case FSCR_a_IN_FSCR_Handshake_TimerEnd_Passed:
                /* During 'FSCR_Handshake_TimerEnd_Passed': '<S236>:70' */
                break;

              default:
                /* During 'FSCR_Timer_Failed': '<S236>:31' */
                break;
            }
        }

        /* End of Chart: '<S212>/StateflowChart' */

        /* Merge: '<S12>/Merge' incorporates:
         *  SignalConversion generated from: '<S212>/EOL_HandShk_FanCmd'
         */
        rtb_Merge = FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd;

        /* Merge: '<S12>/Merge1' incorporates:
         *  Gain: '<S234>/Gain'
         */
        Merge1 = FSCR_ac_B.VeFSCR_Pct_EOL_HndShkFan_Cmd;

        /* End of Outputs for SubSystem: '<S12>/HandShaking1' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S12>/NormalOperation' incorporates:
         *  ActionPort: '<S215>/ActionPort'
         */
        /* Merge: '<S12>/Merge' incorporates:
         *  Inport: '<S215>/RadFanActualCmd_BD'
         */
        rtb_Merge = VeFSCR_Pct_LVRadFan1ActualCmd_BD;

        /* Merge: '<S12>/Merge1' incorporates:
         *  Inport: '<S215>/LVRadFan2ActualCmd_BD'
         */
        Merge1 = VeFSCR_Pct_HVRadFanActualCmd_BD;

        /* End of Outputs for SubSystem: '<S12>/NormalOperation' */
    }

    /* End of If: '<S12>/If' */

    /* Switch: '<S12>/Switch' incorporates:
     *  Constant: '<S214>/Calib'
     */
    if (KeFSCR_b_UseNucleusFCCntrls)
    {
        /* Switch: '<S12>/Switch' incorporates:
         *  MinMax: '<S12>/Max'
         */
        rtb_Merge = fmaxf(FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g3,
                          rtb_Merge);
    }

    /* End of Switch: '<S12>/Switch' */

    /* Logic: '<S16>/LogicalOperator' */
    rtb_Comparison7_k = ((((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_i2) ||
                           (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ln))
                          || (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ay))
                         || (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_h));

    /* Chart: '<S10>/AGS_Control' incorporates:
     *  Constant: '<S25>/Calib'
     *  Constant: '<S28>/Calib'
     *  Constant: '<S31>/Calib'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  Constant: '<S35>/Calib'
     *  Constant: '<S43>/Calib'
     *  Constant: '<S46>/Calib'
     *  Constant: '<S48>/Calib'
     *  Constant: '<S49>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S52>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
     */
    /* Gateway: FSCR_FUNC_MedTEH/FSCR_Controls/AGS/AGS_Control */
    /* During: FSCR_FUNC_MedTEH/FSCR_Controls/AGS/AGS_Control */
    if (((uint32)FSCR_ac_DW.is_active_c3_FSCR_ac) == 0U)
    {
        /* Entry: FSCR_FUNC_MedTEH/FSCR_Controls/AGS/AGS_Control */
        FSCR_ac_DW.is_active_c3_FSCR_ac = 1U;

        /* Entry Internal: FSCR_FUNC_MedTEH/FSCR_Controls/AGS/AGS_Control */
        /* Transition: '<S15>:2' */
        FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt = 0U;
        FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold_l = true;
        FSCR_ac_DW.LeFSCR_Cnt_AGS_FrzCalAtmpt = 0U;
        FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt = 0U;
        FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Start;

        /* Entry 'Start': '<S15>:1' */
        FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
        LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
        FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time = KeFSCR_t_AGS_StartState_Wait;
        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 0U;
    }
    else
    {
        switch (FSCR_ac_DW.is_c3_FSCR_ac)
        {
          case FSCR_ac_IN_Calibration:
            FSCR_ac_Calibration(&rtb_Comparison7_k,
                                &FSCR_ac_DW.UnitDelay_DSTATE_jd);
            break;

          case FSCR_ac_IN_Failure:
            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 13U;

            /* During 'Failure': '<S15>:61' */
            if ((!rtb_Comparison7_k) && ((((uint32)
                    FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45) ==
                    CeTAIR_e_AGS_Calibrated) &&
                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy)))
            {
                /* Transition: '<S15>:115' */
                FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Normal_Command;

                /* Entry 'Normal_Command': '<S15>:3' */
                FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = true;
                FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                FSCR_ac_DW.LeFSCR_b_AGS_Actv = true;
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 1U;
                FSCR_ac_B.LeFSCR_b_SleepReq_b2 = false;
                FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
            }
            else if (!rtb_Comparison7_k)
            {
                /* Transition: '<S15>:118' */
                FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Start;

                /* Entry 'Start': '<S15>:1' */
                FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                    KeFSCR_t_AGS_StartState_Wait;
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 0U;
            }
            else
            {
                /*   */
                if ((FSCR_ac_DW.UnitDelay_DSTATE_jd) &&
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt <=
                         KeFSCR_Cnt_AGS_RoutineCtrl_MaxCalTry))
                {
                    /* Transition: '<S15>:229' */
                    FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Calibration;

                    /* Entry Internal 'Calibration': '<S15>:20' */
                    /* Transition: '<S15>:33' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReset = 1.0F;
                    FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_Calibration_Attempt;

                    /* Entry Internal 'Calibration_Attempt': '<S15>:32' */
                    /* Transition: '<S15>:23' */
                    FSCR_ac_DW.is_Calibration_Attempt_k =
                        FSCR_ac_IN_Req_Open_Pos_Calib;

                    /* Entry 'Req_Open_Pos_Calib': '<S15>:22' */
                    LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_OpenPos_ReqTime;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt = (uint8)((sint32)
                        (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt) + 1));
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt = (uint8)((sint32)
                        (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt) + 1));
                    FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 2U;
                }
                else
                {
                    if (((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da)
                            != CePMTR_e_ENB_All_Thrml)
                    {
                        /* Transition: '<S15>:119' */
                        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Powerdown;
                        FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_Pwd_Fail;

                        /* Entry 'Pwd_Fail': '<S15>:104' */
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 17U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_b2 = true;
                    }
                }
            }
            break;

          case FSCR_ac_IN_Normal_Command:
            FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = true;
            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 1U;
            FSCR_ac_B.LeFSCR_b_SleepReq_b2 = false;

            /* During 'Normal_Command': '<S15>:3' */
            /*   */
            tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45;
            if ((!rtb_Comparison7_k) && (((uint32)tmp_0) ==
                    CeTAIR_e_AGS_NotCalibrated))
            {
                /* Transition: '<S15>:221' */
                FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Start;

                /* Entry 'Start': '<S15>:1' */
                FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                    KeFSCR_t_AGS_StartState_Wait;
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 0U;
            }
            else if ((FSCR_ac_DW.UnitDelay_DSTATE_jd) &&
                     (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt <=
                      KeFSCR_Cnt_AGS_RoutineCtrl_MaxCalTry))
            {
                /* Transition: '<S15>:228' */
                FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Calibration;

                /* Entry Internal 'Calibration': '<S15>:20' */
                /* Transition: '<S15>:33' */
                FSCR_ac_B.LeFSCR_b_AGS_CalReset = 1.0F;
                FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_Calibration_Attempt;

                /* Entry Internal 'Calibration_Attempt': '<S15>:32' */
                /* Transition: '<S15>:23' */
                FSCR_ac_DW.is_Calibration_Attempt_k =
                    FSCR_ac_IN_Req_Open_Pos_Calib;

                /* Entry 'Req_Open_Pos_Calib': '<S15>:22' */
                LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                    KeFSCR_t_AGS_OpenPos_ReqTime;
                FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt = (uint8)((sint32)(((sint32)
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt = (uint8)((sint32)
                    (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 2U;
            }
            else
            {
                /*   */
                if ((((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated) ||
                        (!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy))
                {
                    /* Transition: '<S15>:63' */
                    FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Failure;

                    /* Entry 'Failure': '<S15>:61' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                    LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 13U;
                    FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
                }
                else if (((uint32)
                          FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                         CePMTR_e_ENB_All_Thrml)
                {
                    /* Transition: '<S15>:114' */
                    FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Powerdown;

                    /* Entry Internal 'Powerdown': '<S15>:100' */
                    /* Transition: '<S15>:106' */
                    FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_Pwd_Wait;

                    /* Entry 'Pwd_Wait': '<S15>:99' */
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 14U;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                        KeFSCR_t_AGS_ChgOfMind;
                    FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time2 =
                        KeFSCR_t_AGS_PostVentn;
                    FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b = false;
                }
                else
                {
                    LeFSCR_Pct_AGS_Pos =
                        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_lk;
                }
            }
            break;

          case FSCR_ac_IN_Powerdown:
            /* During 'Powerdown': '<S15>:100' */
            /*  .  */
            tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45;
            if ((((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                 CePMTR_e_DISBL_All_Thrml) && (((!FSCR_ac_DW.LeFSCR_b_AGS_Actv) ||
                  (((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated)) ||
                    (!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy)))
            {
                /* Transition: '<S15>:219' */
                /* Exit Internal 'Powerdown': '<S15>:100' */
                FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_NO_ACTIVE_CHILD;
                FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Start;

                /* Entry 'Start': '<S15>:1' */
                FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                    KeFSCR_t_AGS_StartState_Wait;
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 0U;
            }
            else
            {
                /*   */
                if ((((FSCR_ac_DW.LeFSCR_b_AGS_Actv) && (((uint32)
                        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
                        CePMTR_e_ENB_All_Thrml)) && (((uint32)tmp_0) ==
                        CeTAIR_e_AGS_Calibrated)) &&
                        (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy))
                {
                    /* Transition: '<S15>:220' */
                    /* Exit Internal 'Powerdown': '<S15>:100' */
                    FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Normal_Command;

                    /* Entry 'Normal_Command': '<S15>:3' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = true;
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                    FSCR_ac_DW.LeFSCR_b_AGS_Actv = true;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 1U;
                    FSCR_ac_B.LeFSCR_b_SleepReq_b2 = false;
                    FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
                }
                else
                {
                    switch (FSCR_ac_DW.is_Powerdown_e)
                    {
                      case FSCR_ac_IN_Pwd_Fail:
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 17U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_b2 = true;

                        /* During 'Pwd_Fail': '<S15>:104' */
                        break;

                      case FSCR_ac_IN_Pwd_Grill_Req:
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 15U;

                        /* During 'Pwd_Grill_Req': '<S15>:101' */
                        if (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)
                        {
                            /* Transition: '<S15>:108' */
                            FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_Pwd_Fail;

                            /* Entry 'Pwd_Fail': '<S15>:104' */
                            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 17U;
                            FSCR_ac_B.LeFSCR_b_SleepReq_b2 = true;
                        }
                        else
                        {
                            /*   */
                            if ((fabsf
                                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l
                                     - KeFSCR_Pct_AGS_ShtDwnPos) <
                                    KeFSCR_Pct_AGS_PosCmpThrshold) &&
                                    (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time <
                                     KeFSCR_t_AGS_PwrDwnWait))
                            {
                                /* Transition: '<S15>:107' */
                                FSCR_ac_DW.is_Powerdown_e =
                                    FSCR_ac_IN_Pwd_Success;

                                /* Entry 'Pwd_Success': '<S15>:102' */
                                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                                    KeFSCR_t_AGS_StartState_Wait;
                                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 16U;
                                FSCR_ac_B.LeFSCR_b_SleepReq_b2 = true;
                            }
                            else
                            {
                                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                                    FSCR_ac_StateTimeCounter
                                    (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                            }
                        }
                        break;

                      case FSCR_ac_IN_Pwd_Success:
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 16U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_b2 = true;

                        /* During 'Pwd_Success': '<S15>:102' */
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                            FSCR_ac_StateTimeCounter
                            (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                        break;

                      default:
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 14U;

                        /* During 'Pwd_Wait': '<S15>:99' */
                        /*   */
                        if ((FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F) &&
                                ((FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time2 ==
                                  0.0F) || (fabsf(rtb_Merge -
                                                  KeFSCR_Pct_AGS_RadFanPwrDwn) <
                                            KeFSCR_Pct_AGS_RadFanPwrDwnError)))
                        {
                            /* Transition: '<S15>:105' */
                            FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_Pwd_Grill_Req;

                            /* Entry 'Pwd_Grill_Req': '<S15>:101' */
                            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 15U;
                            FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                                KeFSCR_t_AGS_StartState_Wait;
                            LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_ShtDwnPos;
                        }
                        else
                        {
                            FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                                FSCR_ac_StateTimeCounter
                                (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                            FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time2 =
                                FSCR_ac_StateTimeCounter
                                (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time2);
                        }
                        break;
                    }
                }
            }
            break;

          default:
            FSCR_ac_B.LeFSCR_i_AGS_SF_State = 0U;

            /* During 'Start': '<S15>:1' */
            /*   */
            tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45;
            if ((((((((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated) &&
                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g <
                     KeFSCR_v_VehSpdThrsHld)) &&
                    (!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ko)) &&
                    (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)) &&
                    (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt <=
                     KeFSCR_Cnt_AGS_MaxCalAtmpt)) ||
                    (((FSCR_ac_DW.UnitDelay_DSTATE_jd) &&
                      (FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt <=
                       KeFSCR_Cnt_AGS_RoutineCtrl_MaxCalTry)) &&
                     (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F)))
            {
                /* Transition: '<S15>:59' */
                /* Transition: '<S15>:227' */
                FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Calibration;

                /* Entry Internal 'Calibration': '<S15>:20' */
                /* Transition: '<S15>:33' */
                FSCR_ac_B.LeFSCR_b_AGS_CalReset = 1.0F;
                FSCR_ac_DW.is_Calibration_e = FSCR_ac_IN_Calibration_Attempt;

                /* Entry Internal 'Calibration_Attempt': '<S15>:32' */
                /* Transition: '<S15>:23' */
                FSCR_ac_DW.is_Calibration_Attempt_k =
                    FSCR_ac_IN_Req_Open_Pos_Calib;

                /* Entry 'Req_Open_Pos_Calib': '<S15>:22' */
                LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                    KeFSCR_t_AGS_OpenPos_ReqTime;
                FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt = (uint8)((sint32)(((sint32)
                    FSCR_ac_DW.LeFSCR_Cnt_AGS_CalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt = (uint8)((sint32)
                    (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS_TotCalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_b_AGS_Actv = false;
                FSCR_ac_B.LeFSCR_i_AGS_SF_State = 2U;
            }
            else
            {
                /*  AGS Faulty */
                if (rtb_Comparison7_k && (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time
                     == 0.0F))
                {
                    /* Transition: '<S15>:125' */
                    FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Failure;

                    /* Entry 'Failure': '<S15>:61' */
                    FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = true;
                    LeFSCR_Pct_AGS_Pos = KeFSCR_Pct_AGS_Open;
                    FSCR_ac_B.LeFSCR_i_AGS_SF_State = 13U;
                    FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
                }
                else
                {
                    /*  AGS already calibrated and not faulty  */
                    if ((((((uint32)tmp_0) == CeTAIR_e_AGS_Calibrated) &&
                            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy))
                         && (!rtb_Comparison7_k)) &&
                            (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F))
                    {
                        /* Transition: '<S15>:224' */
                        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Normal_Command;

                        /* Entry 'Normal_Command': '<S15>:3' */
                        FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g = true;
                        FSCR_ac_B.LeFSCR_b_AGS_CalReq_l = false;
                        FSCR_ac_DW.LeFSCR_b_AGS_Actv = true;
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 1U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_b2 = false;
                        FSCR_ac_B.LeFSCR_b_AGS_CalReset = 0.0F;
                    }
                    else if ((((uint32)
                               FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da)
                              != CePMTR_e_ENB_All_Thrml) &&
                             (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time == 0.0F))
                    {
                        /* Transition: '<S15>:113' */
                        FSCR_ac_DW.is_c3_FSCR_ac = FSCR_ac_IN_Powerdown;

                        /* Entry Internal 'Powerdown': '<S15>:100' */
                        /* Transition: '<S15>:106' */
                        FSCR_ac_DW.is_Powerdown_e = FSCR_ac_IN_Pwd_Wait;

                        /* Entry 'Pwd_Wait': '<S15>:99' */
                        FSCR_ac_B.LeFSCR_i_AGS_SF_State = 14U;
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                            KeFSCR_t_AGS_ChgOfMind;
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time2 =
                            KeFSCR_t_AGS_PostVentn;
                        FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b = false;
                    }
                    else
                    {
                        FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time =
                            FSCR_ac_StateTimeCounter
                            (FSCR_ac_DW.LeFSCR_t_AGS_StateWait_Time);
                    }
                }
            }
            break;
        }
    }

    /* End of Chart: '<S10>/AGS_Control' */

    /* SignalConversion generated from: '<S10>/AGS_Overrides' */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* VariantMerge generated from: '<S11>/AGS2_Overrides' */
    rtb_LeFSCR_i_AGS2_SF_State = FSCR_ac_B.LeFSCR_i_AGS_SF_State;

#else

    /* VariantMerge generated from: '<S11>/AGS2_Overrides' incorporates:
     *  SignalConversion generated from: '<S10>/AGS_Overrides'
     */
    rtb_LeFSCR_i_AGS2_SF_State = 0U;

#endif

    /* End of SignalConversion generated from: '<S10>/AGS_Overrides' */

    /* Outputs for Atomic SubSystem: '<S57>/Hysteresis_1' */
    /* Switch: '<S67>/Switch1' incorporates:
     *  Constant: '<S69>/Calib'
     *  RelationalOperator: '<S67>/GreaterThan'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >=
            KeFSCR_Pct_AGS_AirFlowThrshldHi)
    {
        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S67>/ConstantValue'
         */
        LeFSCR_b_AGS_AirFlowThrshld = true;
    }
    else
    {
        /* Switch: '<S67>/Switch1' incorporates:
         *  Constant: '<S70>/Calib'
         *  RelationalOperator: '<S67>/GreaterThan1'
         *  UnitDelay: '<S67>/UnitDelay'
         */
        LeFSCR_b_AGS_AirFlowThrshld =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >
              KeFSCR_Pct_AGS_AirFlowThrshldLo) && (LeFSCR_b_AGS_AirFlowThrshld));
    }

    /* End of Switch: '<S67>/Switch1' */
    /* End of Outputs for SubSystem: '<S57>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S57>/Hysteresis_3' */
    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S71>/Calib'
     *  RelationalOperator: '<S68>/GreaterThan'
     */
    if (rtb_Merge >= KeFSCR_Pct_AGS_RadFanThrshldHi)
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S68>/ConstantValue'
         */
        LeFSCR_b_AGS_RadFanThrshld = true;
    }
    else
    {
        /* Switch: '<S68>/Switch1' incorporates:
         *  Constant: '<S72>/Calib'
         *  RelationalOperator: '<S68>/GreaterThan1'
         *  UnitDelay: '<S68>/UnitDelay'
         */
        LeFSCR_b_AGS_RadFanThrshld = ((rtb_Merge >
            KeFSCR_Pct_AGS_RadFanThrshldLo) && (LeFSCR_b_AGS_RadFanThrshld));
    }

    /* End of Switch: '<S68>/Switch1' */
    /* End of Outputs for SubSystem: '<S57>/Hysteresis_3' */

    /* Logic: '<S57>/LogicalOperator' */
    rtb_Comparison7_k = ((LeFSCR_b_AGS_RadFanThrshld) ||
                         (LeFSCR_b_AGS_AirFlowThrshld));

    /* Outputs for Atomic SubSystem: '<S58>/Hysteresis_1' */
    /* Switch: '<S73>/Switch1' incorporates:
     *  Constant: '<S73>/ConstantValue'
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  RelationalOperator: '<S73>/GreaterThan'
     *  RelationalOperator: '<S73>/GreaterThan1'
     *  UnitDelay: '<S73>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
            KeFSCR_T_AGS_AmbTmpThreshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_p5 = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_p5 =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >
              KeFSCR_T_AGS_AmbTmpThreshldLo) && (FSCR_ac_DW.UnitDelay_DSTATE_p5));
    }

    /* End of Switch: '<S73>/Switch1' */
    /* End of Outputs for SubSystem: '<S58>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S58>/Hysteresis_3' */
    /* Switch: '<S74>/Switch1' incorporates:
     *  Constant: '<S74>/ConstantValue'
     *  Constant: '<S77>/Calib'
     *  Constant: '<S78>/Calib'
     *  RelationalOperator: '<S74>/GreaterThan'
     *  RelationalOperator: '<S74>/GreaterThan1'
     *  UnitDelay: '<S74>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >=
            KeFSCR_v_AGS_AntiFrzVehSpdThrshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_ah = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_ah =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >
              KeFSCR_v_AGS_AntiFrzVehSpdThrshldLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_ah));
    }

    /* End of Switch: '<S74>/Switch1' */
    /* End of Outputs for SubSystem: '<S58>/Hysteresis_3' */

    /* Logic: '<S58>/LogicalOperator1' incorporates:
     *  UnitDelay: '<S73>/UnitDelay'
     */
    LeFSCR_b_AGS_AmbTmpThreshld = !FSCR_ac_DW.UnitDelay_DSTATE_p5;

    /* Logic: '<S58>/LogicalOperator' incorporates:
     *  UnitDelay: '<S74>/UnitDelay'
     */
    rtb_AND_e = ((FSCR_ac_DW.UnitDelay_DSTATE_ah) &&
                 (LeFSCR_b_AGS_AmbTmpThreshld));

    /* Outputs for Atomic SubSystem: '<S59>/Hysteresis_1' */
    /* Switch: '<S79>/Switch1' incorporates:
     *  Constant: '<S79>/ConstantValue'
     *  Constant: '<S83>/Calib'
     *  Constant: '<S84>/Calib'
     *  RelationalOperator: '<S79>/GreaterThan'
     *  RelationalOperator: '<S79>/GreaterThan1'
     *  UnitDelay: '<S79>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b >=
            KeFSCR_T_AGS_LTLClnTempThrshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_emm = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_emm =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b >
              KeFSCR_T_AGS_LTLClnTempThrshldLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_emm));
    }

    /* End of Switch: '<S79>/Switch1' */
    /* End of Outputs for SubSystem: '<S59>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S59>/Hysteresis_3' */
    /* Switch: '<S80>/Switch1' incorporates:
     *  Constant: '<S80>/ConstantValue'
     *  Constant: '<S81>/Calib'
     *  Constant: '<S82>/Calib'
     *  RelationalOperator: '<S80>/GreaterThan'
     *  RelationalOperator: '<S80>/GreaterThan1'
     *  UnitDelay: '<S80>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g1 >=
            KeFSCR_T_AGS_EngineClntTempThrshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_nv = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_nv =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g1 >
              KeFSCR_T_AGS_EngineClntTempThrshldLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_nv));
    }

    /* End of Switch: '<S80>/Switch1' */
    /* End of Outputs for SubSystem: '<S59>/Hysteresis_3' */

    /* Outputs for Atomic SubSystem: '<S85>/Hysteresis' */
    /* Switch: '<S87>/Switch1' incorporates:
     *  Constant: '<S87>/ConstantValue'
     *  Constant: '<S90>/Calib'
     *  Constant: '<S91>/Calib'
     *  RelationalOperator: '<S87>/GreaterThan'
     *  RelationalOperator: '<S87>/GreaterThan1'
     *  UnitDelay: '<S87>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d >
            KeFSCR_Pct_AGS_AccelPosDevRSP)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_cu = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_cu =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d >=
              KeFSCR_Pct_AGS_AccelPosDevLSP) && (FSCR_ac_DW.UnitDelay_DSTATE_cu));
    }

    /* End of Switch: '<S87>/Switch1' */
    /* End of Outputs for SubSystem: '<S85>/Hysteresis' */

    /* Logic: '<S85>/LogicalOperator' incorporates:
     *  UnitDelay: '<S87>/UnitDelay'
     */
    LeFSCR_b_AGS_AccelPosDev = !FSCR_ac_DW.UnitDelay_DSTATE_cu;

    /* Outputs for Atomic SubSystem: '<S85>/Hysteresis_2' */
    /* Switch: '<S88>/Switch1' incorporates:
     *  Constant: '<S92>/Calib'
     *  RelationalOperator: '<S88>/GreaterThan'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >=
            KeFSCR_v_AGS_VehSpdThrshldOvrrHi)
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S88>/ConstantValue'
         */
        LeFSCR_b_AGS_VehSpdCoastDwnOvrr = true;
    }
    else
    {
        /* Switch: '<S88>/Switch1' incorporates:
         *  Constant: '<S93>/Calib'
         *  RelationalOperator: '<S88>/GreaterThan1'
         *  UnitDelay: '<S88>/UnitDelay'
         */
        LeFSCR_b_AGS_VehSpdCoastDwnOvrr =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >
              KeFSCR_v_AGS_VehSpdThrshldOvrrLo) &&
             (LeFSCR_b_AGS_VehSpdCoastDwnOvrr));
    }

    /* End of Switch: '<S88>/Switch1' */
    /* End of Outputs for SubSystem: '<S85>/Hysteresis_2' */

    /* Logic: '<S85>/LogicalOperator1' incorporates:
     *  Constant: '<S86>/Constant'
     *  RelationalOperator: '<S85>/RelationalOperator'
     */
    rtb_Logical15 = (((((uint32)
                        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi) ==
                       CeTRNR_e_Neutral) && (LeFSCR_b_AGS_AccelPosDev)) &&
                     (LeFSCR_b_AGS_VehSpdCoastDwnOvrr));

    /* Outputs for Atomic SubSystem: '<S85>/SignalLatchOnWithReset' */
    /* Logic: '<S94>/OR1' incorporates:
     *  Logic: '<S94>/NOT'
     *  Logic: '<S94>/OR'
     *  UnitDelay: '<S85>/Unit Delay'
     *  UnitDelay: '<S94>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_oc = (rtb_Logical15 ||
        ((!FSCR_ac_DW.UnitDelay_DSTATE_cy) && (FSCR_ac_DW.UnitDelay_DSTATE_oc)));

    /* End of Outputs for SubSystem: '<S85>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S85>/Timer Reset Enabled' */
    /* Switch: '<S95>/Switch1' incorporates:
     *  Constant: '<S85>/Constant'
     *  Constant: '<S89>/Calib'
     *  Constant: '<S95>/Constant Value3'
     *  Constant: '<S95>/Constant Value4'
     *  DataTypeConversion: '<S85>/Data Type Conversion'
     *  Logic: '<S95>/AND1'
     *  MinMax: '<S95>/Maximum'
     *  RelationalOperator: '<S95>/Greater  Than2'
     *  Sum: '<S95>/Subtraction'
     *  UnitDelay: '<S94>/UnitDelay'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    if ((FSCR_ac_DW.UnitDelay_DSTATE_oc) && (FSCR_ac_DW.UnitDelay_DSTATE_h <=
            0.0F))
    {
        FSCR_ac_DW.UnitDelay_DSTATE_h = (float32)
            KeFSCR_Cnt_AGS_CoastDwnDurationTime;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_h = fmaxf(FSCR_ac_DW.UnitDelay_DSTATE_h -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S95>/Switch1' */

    /* Logic: '<S59>/LogicalOperator' incorporates:
     *  Constant: '<S95>/Constant Value2'
     *  Logic: '<S85>/Logical Operator'
     *  RelationalOperator: '<S95>/Greater  Than1'
     *  UnitDelay: '<S79>/UnitDelay'
     *  UnitDelay: '<S80>/UnitDelay'
     *  UnitDelay: '<S95>/Unit Delay'
     */
    rtb_Logical15 = (((rtb_Logical15 || (FSCR_ac_DW.UnitDelay_DSTATE_h > 0.0F)) &&
                      (FSCR_ac_DW.UnitDelay_DSTATE_nv)) &&
                     (FSCR_ac_DW.UnitDelay_DSTATE_emm));

    /* End of Outputs for SubSystem: '<S85>/Timer Reset Enabled' */

    /* SignalConversion generated from: '<S10>/AGS_Overrides' */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* Sum: '<S416>/Sum' */
    rtb_Sum_k = FSCR_ac_B.LeFSCR_b_AGS_CalReset;

    /* UnitDelay: '<S422>/UnitDelay' */
    rtb_AND_do = FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g;

#else

    /* Sum: '<S416>/Sum' incorporates:
     *  SignalConversion generated from: '<S10>/AGS_Overrides'
     */
    rtb_Sum_k = 0.0F;

    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S10>/AGS_Overrides'
     */
    rtb_AND_do = false;

#endif

    /* End of SignalConversion generated from: '<S10>/AGS_Overrides' */

    /* Logic: '<S17>/LogicalOperator' incorporates:
     *  Logic: '<S17>/LogicalOperator1'
     */
    rtb_Comparison1_m = ((rtb_Sum_k == 0.0F) && rtb_AND_do);

    /* Outputs for Atomic SubSystem: '<S66>/Hysteresis_1' */
    /* Switch: '<S96>/Switch1' incorporates:
     *  Constant: '<S103>/Calib'
     *  Constant: '<S104>/Calib'
     *  Constant: '<S96>/ConstantValue'
     *  RelationalOperator: '<S96>/GreaterThan'
     *  RelationalOperator: '<S96>/GreaterThan1'
     *  UnitDelay: '<S96>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >=
            KeFSCR_v_AGS_VehSpdThrshldOvrrHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_dd = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_dd =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >
              KeFSCR_v_AGS_VehSpdThrshldOvrrLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_dd));
    }

    /* End of Switch: '<S96>/Switch1' */
    /* End of Outputs for SubSystem: '<S66>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S66>/Hysteresis_2' */
    /* Switch: '<S97>/Switch1' incorporates:
     *  Constant: '<S101>/Calib'
     *  Constant: '<S102>/Calib'
     *  Constant: '<S97>/ConstantValue'
     *  RelationalOperator: '<S97>/GreaterThan'
     *  RelationalOperator: '<S97>/GreaterThan1'
     *  UnitDelay: '<S97>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
            KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMinHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_hjh = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_hjh =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >
              KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMinLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_hjh));
    }

    /* End of Switch: '<S97>/Switch1' */
    /* End of Outputs for SubSystem: '<S66>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S66>/Hysteresis_3' */
    /* Switch: '<S98>/Switch1' incorporates:
     *  Constant: '<S100>/Calib'
     *  Constant: '<S98>/ConstantValue'
     *  Constant: '<S99>/Calib'
     *  RelationalOperator: '<S98>/GreaterThan'
     *  RelationalOperator: '<S98>/GreaterThan1'
     *  UnitDelay: '<S98>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
            KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMaxHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_mc = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_mc =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >
              KeFSCR_T_AGS_HighVehSpdAmbTmpThrshldOvrrMaxLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_mc));
    }

    /* End of Switch: '<S98>/Switch1' */
    /* End of Outputs for SubSystem: '<S66>/Hysteresis_3' */

    /* Logic: '<S66>/LogicalOperator1' incorporates:
     *  UnitDelay: '<S98>/UnitDelay'
     */
    LeFSCR_b_AGS_HighVehSpdAmbTmpThrshldOvrrMax =
        !FSCR_ac_DW.UnitDelay_DSTATE_mc;

    /* Logic: '<S66>/LogicalOperator' incorporates:
     *  UnitDelay: '<S96>/UnitDelay'
     *  UnitDelay: '<S97>/UnitDelay'
     */
    rtb_Comparison2_lg = (((FSCR_ac_DW.UnitDelay_DSTATE_dd) &&
                           (FSCR_ac_DW.UnitDelay_DSTATE_hjh)) &&
                          (LeFSCR_b_AGS_HighVehSpdAmbTmpThrshldOvrrMax));

    /* Sum: '<S416>/Sum' incorporates:
     *  Lookup_n-D: '<S112>/Vector'
     */
    rtb_Sum_k = look1_iflf_binlca_16a(LeFSCR_Pct_AGS_Pos, ((const float32 *)
        &(KxFSCR_Pct_AGS_NormalizeFunction[0])), ((const float32 *)
        &(KtFSCR_Pct_AGS_NormalizeFunction[0])), 10U);

    /* DataTypeConversion: '<S111>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S55>/FloatToFix'
     */
    rtb_DataTypeConversion_c = (TeFSCR_e_AGS_PosRq)((uint16)rtb_Sum_k);

    /* Switch: '<S17>/Switch5' incorporates:
     *  Constant: '<S56>/Constant'
     *  Constant: '<S56>/Constant1'
     *  Constant: '<S56>/Constant2'
     *  Constant: '<S56>/Constant3'
     *  Logic: '<S56>/LogicalOperator3'
     *  Logic: '<S56>/LogicalOperator4'
     *  RelationalOperator: '<S56>/RelationalOperator'
     *  RelationalOperator: '<S56>/RelationalOperator1'
     *  RelationalOperator: '<S56>/RelationalOperator2'
     *  RelationalOperator: '<S56>/RelationalOperator3'
     */
    if ((((((sint32)rtb_LeFSCR_i_AGS2_SF_State) != 14) && (((sint32)
            rtb_LeFSCR_i_AGS2_SF_State) != 15)) && (((sint32)
            rtb_LeFSCR_i_AGS2_SF_State) != 16)) && (((sint32)
            rtb_LeFSCR_i_AGS2_SF_State) != 17))
    {
        /* Switch: '<S17>/Switch6' incorporates:
         *  Constant: '<S60>/Constant'
         *  Constant: '<S61>/Constant'
         *  Logic: '<S17>/LogicalOperator2'
         *  Switch: '<S17>/Switch7'
         *  Switch: '<S17>/Switch8'
         *  Switch: '<S17>/Switch9'
         */
        if (rtb_Comparison1_m || rtb_Comparison7_k)
        {
            rtb_LogicalOperator_e_0 = CeFSCR_e_Open100;
        }
        else if (rtb_Logical15)
        {
            /* Switch: '<S17>/Switch7' incorporates:
             *  Constant: '<S63>/Calib'
             */
            rtb_LogicalOperator_e_0 = KeFSCR_e_AGS_CoastDownPosition;
        }
        else if (rtb_Comparison2_lg)
        {
            /* Switch: '<S17>/Switch8' incorporates:
             *  Constant: '<S64>/Calib'
             *  Switch: '<S17>/Switch7'
             */
            rtb_LogicalOperator_e_0 = KeFSCR_e_AGS_VehSpdOvrPos;
        }
        else if (rtb_AND_e)
        {
            /* Switch: '<S17>/Switch9' incorporates:
             *  Constant: '<S62>/Calib'
             *  Switch: '<S17>/Switch7'
             *  Switch: '<S17>/Switch8'
             */
            rtb_LogicalOperator_e_0 = KeFSCR_e_AGS_AntiFrzOvrPos;
        }
        else
        {
            rtb_LogicalOperator_e_0 = CeFSCR_e_Open0;
        }

        /* End of Switch: '<S17>/Switch6' */

        /* Switch: '<S17>/Switch5' incorporates:
         *  DataTypeConversion: '<S17>/FloatToFix'
         *  Lookup_n-D: '<S65>/Vector'
         */
        Switch5 = look1_iu8bflftf_binlca_16a((uint8)rtb_LogicalOperator_e_0, ((
            const float32 *)&(KxFSCR_e_AGS_NormalizeFunction[0])), ((const
            float32 *)&(KtFSCR_e_AGS_NormalizeFunction[0])), 10U);
    }
    else
    {
        /* Switch: '<S17>/Switch5' */
        Switch5 = LeFSCR_Pct_AGS_Pos;
    }

    /* End of Switch: '<S17>/Switch5' */

    /* RelationalOperator: '<S18>/RelationalOperator' incorporates:
     *  Constant: '<S105>/Constant'
     *  Constant: '<S18>/Constant'
     *  Constant: '<S18>/Constant1'
     *  Constant: '<S18>/Constant2'
     *  Constant: '<S18>/Constant3'
     *  Constant: '<S18>/Constant4'
     *  Constant: '<S18>/Constant5'
     *  Logic: '<S18>/LogicalOperator'
     *  RelationalOperator: '<S18>/RelationalOperator1'
     *  RelationalOperator: '<S18>/RelationalOperator2'
     *  RelationalOperator: '<S18>/RelationalOperator3'
     *  RelationalOperator: '<S18>/RelationalOperator4'
     *  RelationalOperator: '<S18>/RelationalOperator5'
     *  RelationalOperator: '<S23>/RelationalOperator'
     *  Switch: '<S23>/Switch2'
     *  UnitDelay: '<S10>/UnitDelay'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    FSCR_ac_DW.UnitDelay_DSTATE_c = ((((((((sint32)
        FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 2) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 3)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 4)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 5)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 9)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS_SF_State) == 10));
    if (((uint32)FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy) ==
            CeTAIR_e_Return_Control_to_ECU)
    {
        /* Switch: '<S17>/Switch4' */
        if (rtb_Comparison1_m)
        {
            /* Switch: '<S17>/Switch' incorporates:
             *  Switch: '<S17>/Switch1'
             *  Switch: '<S17>/Switch2'
             *  Switch: '<S17>/Switch3'
             */
            if (rtb_Comparison7_k)
            {
                /* Switch: '<S23>/Switch2' incorporates:
                 *  Constant: '<S60>/Constant'
                 *  Switch: '<S17>/Switch'
                 */
                LeFSCR_e_AGS_Pos = CeFSCR_e_Open100;
            }
            else if (rtb_Logical15)
            {
                /* Switch: '<S17>/Switch1' incorporates:
                 *  Constant: '<S63>/Calib'
                 *  Switch: '<S17>/Switch'
                 *  Switch: '<S23>/Switch2'
                 */
                LeFSCR_e_AGS_Pos = KeFSCR_e_AGS_CoastDownPosition;
            }
            else if (rtb_Comparison2_lg)
            {
                /* Switch: '<S17>/Switch2' incorporates:
                 *  Constant: '<S64>/Calib'
                 *  Switch: '<S17>/Switch1'
                 *  Switch: '<S23>/Switch2'
                 */
                LeFSCR_e_AGS_Pos = KeFSCR_e_AGS_VehSpdOvrPos;
            }
            else if (rtb_AND_e)
            {
                /* Switch: '<S17>/Switch3' incorporates:
                 *  Constant: '<S62>/Calib'
                 *  Switch: '<S17>/Switch1'
                 *  Switch: '<S17>/Switch2'
                 *  Switch: '<S23>/Switch2'
                 */
                LeFSCR_e_AGS_Pos = KeFSCR_e_AGS_AntiFrzOvrPos;
            }
            else
            {
                /* Switch: '<S23>/Switch2' incorporates:
                 *  DataTypeConversion: '<S111>/DataTypeConversion'
                 *  Switch: '<S17>/Switch1'
                 *  Switch: '<S17>/Switch2'
                 *  Switch: '<S17>/Switch3'
                 */
                LeFSCR_e_AGS_Pos = rtb_DataTypeConversion_c;
            }

            /* End of Switch: '<S17>/Switch' */
        }
        else
        {
            /* Switch: '<S23>/Switch2' incorporates:
             *  DataTypeConversion: '<S111>/DataTypeConversion'
             *  Switch: '<S17>/Switch4'
             */
            LeFSCR_e_AGS_Pos = rtb_DataTypeConversion_c;
        }

        /* End of Switch: '<S17>/Switch4' */
    }
    else
    {
        /* Switch: '<S23>/Switch2' */
        LeFSCR_e_AGS_Pos = FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_b;
    }

#endif

    /* End of RelationalOperator: '<S18>/RelationalOperator' */

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising' */
    /* Logic: '<S119>/OR1' incorporates:
     *  UnitDelay: '<S119>/UnitDelay'
     */
    rtb_Comparison7_k = !FSCR_ac_DW.UnitDelay_DSTATE_ln;

    /* Update for UnitDelay: '<S119>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_ln =
        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_as;

    /* End of Outputs for SubSystem: '<S11>/EdgeRising' */

    /* UnitDelay: '<S11>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S11>/CountDownResetEnabled'
     * */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising1' */
    /* Logic: '<S120>/AND' incorporates:
     *  Logic: '<S120>/OR1'
     *  UnitDelay: '<S120>/UnitDelay'
     */
    rtb_AND_c0 = ((FSCR_ac_DW.UnitDelay_DSTATE_g5) &&
                  (!FSCR_ac_DW.UnitDelay_DSTATE_ee));

    /* Update for UnitDelay: '<S120>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_ee = FSCR_ac_DW.UnitDelay_DSTATE_g5;

    /* VariantMerge generated from: '<S11>/CountDownResetEnabled' */
    rtb_VM_Conditional_Signal_CountDownRes_p = rtb_AND_c0;

    /* End of Outputs for SubSystem: '<S11>/EdgeRising1' */
#else

    /* VariantMerge generated from: '<S11>/CountDownResetEnabled' incorporates:
     *  SignalConversion generated from: '<S11>/CountDownResetEnabled'
     */
    rtb_VM_Conditional_Signal_CountDownRes_p = false;

#endif

    /* Outputs for Atomic SubSystem: '<S11>/CountDownResetEnabled' */
    /* Switch: '<S117>/Switch1' incorporates:
     *  Constant: '<S117>/ConstantValue'
     *  Constant: '<S122>/Calib'
     *  RelationalOperator: '<S117>/GreaterThan'
     *  Switch: '<S117>/Switch2'
     *  UnitDelay: '<S117>/UnitDelay'
     */
    if (rtb_VM_Conditional_Signal_CountDownRes_p)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_k = KeFSCR_Cnt_AGS2_CalibRq_Cntr;
    }
    else
    {
        if (((sint32)FSCR_ac_DW.UnitDelay_DSTATE_k) > 0)
        {
            /* UnitDelay: '<S117>/UnitDelay' incorporates:
             *  Constant: '<S117>/ConstantValue1'
             *  Sum: '<S117>/Subtraction'
             *  Switch: '<S117>/Switch2'
             */
            FSCR_ac_DW.UnitDelay_DSTATE_k = (uint16)((sint32)(((sint32)
                FSCR_ac_DW.UnitDelay_DSTATE_k) - 1));
        }
    }

    /* End of Switch: '<S117>/Switch1' */

    /* RelationalOperator: '<S117>/GreaterThan1' incorporates:
     *  Constant: '<S117>/ConstantValue2'
     *  UnitDelay: '<S117>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownRes_p = (((sint32)
        FSCR_ac_DW.UnitDelay_DSTATE_k) > 0);

    /* End of Outputs for SubSystem: '<S11>/CountDownResetEnabled' */

    /* Outputs for Atomic SubSystem: '<S11>/EdgeFalling2' */
    /* Logic: '<S118>/AND' incorporates:
     *  Logic: '<S118>/OR1'
     *  UnitDelay: '<S118>/UnitDelay'
     */
    rtb_AND_e = ((!rtb_VM_Conditional_Signal_CountDownRes_p) &&
                 (FSCR_ac_DW.UnitDelay_DSTATE_lu));

    /* Update for UnitDelay: '<S118>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_lu = rtb_VM_Conditional_Signal_CountDownRes_p;

    /* End of Outputs for SubSystem: '<S11>/EdgeFalling2' */

    /* SignalConversion generated from: '<S11>/Switch2' */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* UnitDelay: '<S422>/UnitDelay' */
    rtb_AND_do = rtb_AND_c0;

#else

    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S11>/Switch2'
     */
    rtb_AND_do = false;

#endif

    /* End of SignalConversion generated from: '<S11>/Switch2' */

    /* Switch: '<S11>/Switch2' incorporates:
     *  Constant: '<S137>/Calib'
     */
    if (!KeFSCR_b_AGS_CalibRq_DelayEnbl)
    {
        rtb_AND_e = rtb_AND_do;
    }

    /* End of Switch: '<S11>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S11>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S11>/EdgeRising' */
    /* Logic: '<S151>/OR1' incorporates:
     *  Logic: '<S119>/AND'
     *  Logic: '<S151>/NOT'
     *  Logic: '<S151>/OR'
     *  UnitDelay: '<S151>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_gr =
        (((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_as) &&
          rtb_Comparison7_k) || ((!rtb_AND_e) && (FSCR_ac_DW.UnitDelay_DSTATE_gr)));

    /* End of Outputs for SubSystem: '<S11>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S11>/SignalLatchOnWithReset' */

    /* Logic: '<S115>/LogicalOperator' */
    rtb_AND_c0 = ((((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ic) ||
                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g4k)) ||
                   (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_of)) ||
                  (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_by));

    /* Chart: '<S11>/AGS2_Control' incorporates:
     *  Constant: '<S123>/Calib'
     *  Constant: '<S126>/Calib'
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     *  Constant: '<S131>/Calib'
     *  Constant: '<S132>/Calib'
     *  Constant: '<S133>/Calib'
     *  Constant: '<S141>/Calib'
     *  Constant: '<S144>/Calib'
     *  Constant: '<S146>/Calib'
     *  Constant: '<S147>/Calib'
     *  Constant: '<S148>/Calib'
     *  Constant: '<S150>/Calib'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
     */
    /* Gateway: FSCR_FUNC_MedTEH/FSCR_Controls/AGS2/AGS2_Control */
    /* During: FSCR_FUNC_MedTEH/FSCR_Controls/AGS2/AGS2_Control */
    if (((uint32)FSCR_ac_DW.is_active_c4_FSCR_ac) == 0U)
    {
        /* Entry: FSCR_FUNC_MedTEH/FSCR_Controls/AGS2/AGS2_Control */
        FSCR_ac_DW.is_active_c4_FSCR_ac = 1U;

        /* Entry Internal: FSCR_FUNC_MedTEH/FSCR_Controls/AGS2/AGS2_Control */
        /* Transition: '<S113>:2' */
        FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt = 0U;
        FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold_d = true;
        FSCR_ac_DW.LeFSCR_Cnt_AGS2_FrzCalAtmpt = 0U;
        FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt = 0U;
        FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Start;

        /* Entry 'Start': '<S113>:1' */
        FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
        LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
        FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time = KeFSCR_t_AGS2_StartState_Wait;
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 0U;
    }
    else
    {
        switch (FSCR_ac_DW.is_c4_FSCR_ac)
        {
          case FSCR_ac_IN_Calibration:
            FSCR_ac_Calibration_e(&rtb_AND_c0, &FSCR_ac_DW.UnitDelay_DSTATE_gr);
            break;

          case FSCR_ac_IN_Failure:
            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 13U;

            /* During 'Failure': '<S113>:61' */
            if ((!rtb_AND_c0) && ((((uint32)
                                    FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f)
                                   == CeTAIR_e_AGS_Calibrated) &&
                                  (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5)))
            {
                /* Transition: '<S113>:115' */
                FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Normal_Command;

                /* Entry 'Normal_Command': '<S113>:3' */
                FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = true;
                FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                FSCR_ac_DW.LeFSCR_b_AGS2_Actv = true;
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 1U;
                FSCR_ac_B.LeFSCR_b_SleepReq_a = false;
                FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
            }
            else if (!rtb_AND_c0)
            {
                /* Transition: '<S113>:118' */
                FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Start;

                /* Entry 'Start': '<S113>:1' */
                FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                    KeFSCR_t_AGS2_StartState_Wait;
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 0U;
            }
            else
            {
                /*   */
                if ((FSCR_ac_DW.UnitDelay_DSTATE_gr) &&
                        (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt <=
                         KeFSCR_Cnt_AGS2_RoutineCtrl_MaxCalTry))
                {
                    /* Transition: '<S113>:229' */
                    FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Calibration;

                    /* Entry Internal 'Calibration': '<S113>:20' */
                    /* Transition: '<S113>:33' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 1.0F;
                    FSCR_ac_DW.is_Calibration = FSCR_ac_IN_Calibration_Attempt;

                    /* Entry Internal 'Calibration_Attempt': '<S113>:32' */
                    /* Transition: '<S113>:23' */
                    FSCR_ac_DW.is_Calibration_Attempt =
                        FSCR_ac_IN_Req_Open_Pos_Calib;

                    /* Entry 'Req_Open_Pos_Calib': '<S113>:22' */
                    LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_OpenPos_ReqTime;
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt = (uint8)((sint32)
                        (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt) + 1));
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt = (uint8)((sint32)
                        (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt) + 1));
                    FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 2U;
                }
                else
                {
                    if (((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da)
                            != CePMTR_e_ENB_All_Thrml)
                    {
                        /* Transition: '<S113>:119' */
                        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Powerdown;
                        FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Fail;

                        /* Entry 'Pwd_Fail': '<S113>:104' */
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 17U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_a = true;
                    }
                }
            }
            break;

          case FSCR_ac_IN_Normal_Command:
            FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = true;
            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 1U;
            FSCR_ac_B.LeFSCR_b_SleepReq_a = false;

            /* During 'Normal_Command': '<S113>:3' */
            /*   */
            tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;
            if ((!rtb_AND_c0) && (((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated))
            {
                /* Transition: '<S113>:221' */
                FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Start;

                /* Entry 'Start': '<S113>:1' */
                FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                    KeFSCR_t_AGS2_StartState_Wait;
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 0U;
            }
            else if ((FSCR_ac_DW.UnitDelay_DSTATE_gr) &&
                     (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt <=
                      KeFSCR_Cnt_AGS2_RoutineCtrl_MaxCalTry))
            {
                /* Transition: '<S113>:228' */
                FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Calibration;

                /* Entry Internal 'Calibration': '<S113>:20' */
                /* Transition: '<S113>:33' */
                FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 1.0F;
                FSCR_ac_DW.is_Calibration = FSCR_ac_IN_Calibration_Attempt;

                /* Entry Internal 'Calibration_Attempt': '<S113>:32' */
                /* Transition: '<S113>:23' */
                FSCR_ac_DW.is_Calibration_Attempt =
                    FSCR_ac_IN_Req_Open_Pos_Calib;

                /* Entry 'Req_Open_Pos_Calib': '<S113>:22' */
                LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                    KeFSCR_t_AGS2_OpenPos_ReqTime;
                FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt = (uint8)((sint32)(((sint32)
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt = (uint8)((sint32)
                    (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 2U;
            }
            else
            {
                /*   */
                if ((((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated) ||
                        (!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5))
                {
                    /* Transition: '<S113>:63' */
                    FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Failure;

                    /* Entry 'Failure': '<S113>:61' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                    LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 13U;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
                }
                else if (((uint32)
                          FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                         CePMTR_e_ENB_All_Thrml)
                {
                    /* Transition: '<S113>:114' */
                    FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Powerdown;

                    /* Entry Internal 'Powerdown': '<S113>:100' */
                    /* Transition: '<S113>:106' */
                    FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Wait;

                    /* Entry 'Pwd_Wait': '<S113>:99' */
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 14U;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                        KeFSCR_t_AGS2_ChgOfMind;
                    FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time2 =
                        KeFSCR_t_AGS2_PostVentn;
                    FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m = false;
                }
                else
                {
                    LeFSCR_Pct_AGS2_Pos =
                        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j;
                }
            }
            break;

          case FSCR_ac_IN_Powerdown:
            /* During 'Powerdown': '<S113>:100' */
            /*  .  */
            tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;
            if ((((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                 CePMTR_e_DISBL_All_Thrml) && (((!FSCR_ac_DW.LeFSCR_b_AGS2_Actv)
                  || (((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated)) ||
                    (!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5)))
            {
                /* Transition: '<S113>:219' */
                /* Exit Internal 'Powerdown': '<S113>:100' */
                FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_NO_ACTIVE_CHILD;
                FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Start;

                /* Entry 'Start': '<S113>:1' */
                FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                    KeFSCR_t_AGS2_StartState_Wait;
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 0U;
            }
            else
            {
                /*   */
                if ((((FSCR_ac_DW.LeFSCR_b_AGS2_Actv) && (((uint32)
                        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
                        CePMTR_e_ENB_All_Thrml)) && (((uint32)tmp_0) ==
                        CeTAIR_e_AGS_Calibrated)) &&
                        (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5))
                {
                    /* Transition: '<S113>:220' */
                    /* Exit Internal 'Powerdown': '<S113>:100' */
                    FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_NO_ACTIVE_CHILD;
                    FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Normal_Command;

                    /* Entry 'Normal_Command': '<S113>:3' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = true;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                    FSCR_ac_DW.LeFSCR_b_AGS2_Actv = true;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 1U;
                    FSCR_ac_B.LeFSCR_b_SleepReq_a = false;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
                }
                else
                {
                    switch (FSCR_ac_DW.is_Powerdown)
                    {
                      case FSCR_ac_IN_Pwd_Fail:
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 17U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_a = true;

                        /* During 'Pwd_Fail': '<S113>:104' */
                        break;

                      case FSCR_ac_IN_Pwd_Grill_Req:
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 15U;

                        /* During 'Pwd_Grill_Req': '<S113>:101' */
                        if (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)
                        {
                            /* Transition: '<S113>:108' */
                            FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Fail;

                            /* Entry 'Pwd_Fail': '<S113>:104' */
                            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 17U;
                            FSCR_ac_B.LeFSCR_b_SleepReq_a = true;
                        }
                        else
                        {
                            /*   */
                            if ((fabsf
                                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_c
                                     - KeFSCR_Pct_AGS2_ShtDwnPos) <
                                    KeFSCR_Pct_AGS2_PosCmpThrshold) &&
                                    (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time <
                                     KeFSCR_t_AGS2_PwrDwnWait))
                            {
                                /* Transition: '<S113>:107' */
                                FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Success;

                                /* Entry 'Pwd_Success': '<S113>:102' */
                                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                                    KeFSCR_t_AGS2_StartState_Wait;
                                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 16U;
                                FSCR_ac_B.LeFSCR_b_SleepReq_a = true;
                            }
                            else
                            {
                                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                                    FSCR_ac_StateTimeCounter_k
                                    (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                            }
                        }
                        break;

                      case FSCR_ac_IN_Pwd_Success:
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 16U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_a = true;

                        /* During 'Pwd_Success': '<S113>:102' */
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                            FSCR_ac_StateTimeCounter_k
                            (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                        break;

                      default:
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 14U;

                        /* During 'Pwd_Wait': '<S113>:99' */
                        /*   */
                        if ((FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F) &&
                            ((FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time2 == 0.0F) ||
                             (fabsf(rtb_Merge - KeFSCR_Pct_AGS2_RadFanPwrDwn) <
                                KeFSCR_Pct_AGS2_RadFanPwrDwnError)))
                        {
                            /* Transition: '<S113>:105' */
                            FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Grill_Req;

                            /* Entry 'Pwd_Grill_Req': '<S113>:101' */
                            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 15U;
                            FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                                KeFSCR_t_AGS2_StartState_Wait;
                            LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_ShtDwnPos;
                        }
                        else
                        {
                            FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                                FSCR_ac_StateTimeCounter_k
                                (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                            FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time2 =
                                FSCR_ac_StateTimeCounter_k
                                (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time2);
                        }
                        break;
                    }
                }
            }
            break;

          default:
            FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 0U;

            /* During 'Start': '<S113>:1' */
            /*   */
            tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;
            if ((((((((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated) &&
                    (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g <
                     KeFSCR_v_VehSpdThrsHld)) &&
                    (!FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_ko)) &&
                    (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)) &&
                    (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt <=
                     KeFSCR_Cnt_AGS2_MaxCalAtmpt)) ||
                    (((FSCR_ac_DW.UnitDelay_DSTATE_gr) &&
                      (FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt <=
                       KeFSCR_Cnt_AGS2_RoutineCtrl_MaxCalTry)) &&
                     (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F)))
            {
                /* Transition: '<S113>:59' */
                /* Transition: '<S113>:227' */
                FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Calibration;

                /* Entry Internal 'Calibration': '<S113>:20' */
                /* Transition: '<S113>:33' */
                FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 1.0F;
                FSCR_ac_DW.is_Calibration = FSCR_ac_IN_Calibration_Attempt;

                /* Entry Internal 'Calibration_Attempt': '<S113>:32' */
                /* Transition: '<S113>:23' */
                FSCR_ac_DW.is_Calibration_Attempt =
                    FSCR_ac_IN_Req_Open_Pos_Calib;

                /* Entry 'Req_Open_Pos_Calib': '<S113>:22' */
                LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                    KeFSCR_t_AGS2_OpenPos_ReqTime;
                FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt = (uint8)((sint32)(((sint32)
                    FSCR_ac_DW.LeFSCR_Cnt_AGS2_CalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt = (uint8)((sint32)
                    (((sint32)FSCR_ac_DW.LeFSCR_Cnt_AGS2_TotCalAtmpt) + 1));
                FSCR_ac_DW.LeFSCR_b_AGS2_Actv = false;
                FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 2U;
            }
            else
            {
                /*  AGS2 Faulty */
                if (rtb_AND_c0 && (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time ==
                                   0.0F))
                {
                    /* Transition: '<S113>:125' */
                    FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Failure;

                    /* Entry 'Failure': '<S113>:61' */
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = true;
                    LeFSCR_Pct_AGS2_Pos = KeFSCR_Pct_AGS2_Open;
                    FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 13U;
                    FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
                }
                else
                {
                    /*  AGS2 already calibrated and not faulty  */
                    if ((((((uint32)tmp_0) == CeTAIR_e_AGS_Calibrated) &&
                            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5))
                         && (!rtb_AND_c0)) &&
                            (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F))
                    {
                        /* Transition: '<S113>:224' */
                        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Normal_Command;

                        /* Entry 'Normal_Command': '<S113>:3' */
                        FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h = true;
                        FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m = false;
                        FSCR_ac_DW.LeFSCR_b_AGS2_Actv = true;
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 1U;
                        FSCR_ac_B.LeFSCR_b_SleepReq_a = false;
                        FSCR_ac_B.LeFSCR_b_AGS2_CalReset = 0.0F;
                    }
                    else if ((((uint32)
                               FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da)
                              != CePMTR_e_ENB_All_Thrml) &&
                             (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time == 0.0F))
                    {
                        /* Transition: '<S113>:113' */
                        FSCR_ac_DW.is_c4_FSCR_ac = FSCR_ac_IN_Powerdown;

                        /* Entry Internal 'Powerdown': '<S113>:100' */
                        /* Transition: '<S113>:106' */
                        FSCR_ac_DW.is_Powerdown = FSCR_ac_IN_Pwd_Wait;

                        /* Entry 'Pwd_Wait': '<S113>:99' */
                        FSCR_ac_B.LeFSCR_i_AGS2_SF_State = 14U;
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                            KeFSCR_t_AGS2_ChgOfMind;
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time2 =
                            KeFSCR_t_AGS2_PostVentn;
                        FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m = false;
                    }
                    else
                    {
                        FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time =
                            FSCR_ac_StateTimeCounter_k
                            (FSCR_ac_DW.LeFSCR_t_AGS2_StateWait_Time);
                    }
                }
            }
            break;
        }
    }

    /* End of Chart: '<S11>/AGS2_Control' */

    /* SignalConversion generated from: '<S11>/AGS2_Overrides' */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* VariantMerge generated from: '<S11>/AGS2_Overrides' */
    rtb_LeFSCR_i_AGS2_SF_State = FSCR_ac_B.LeFSCR_i_AGS2_SF_State;

#else

    /* VariantMerge generated from: '<S11>/AGS2_Overrides' incorporates:
     *  SignalConversion generated from: '<S11>/AGS2_Overrides'
     */
    rtb_LeFSCR_i_AGS2_SF_State = 0U;

#endif

    /* End of SignalConversion generated from: '<S11>/AGS2_Overrides' */

    /* Outputs for Atomic SubSystem: '<S155>/Hysteresis_1' */
    /* Switch: '<S165>/Switch1' incorporates:
     *  Constant: '<S169>/Calib'
     *  RelationalOperator: '<S165>/GreaterThan'
     */
    if (rtb_Merge >= KeFSCR_Pct_AGS2_RadFanThrshldHi)
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S165>/ConstantValue'
         */
        LeFSCR_b_AGS2_RadFanThrshld = true;
    }
    else
    {
        /* Switch: '<S165>/Switch1' incorporates:
         *  Constant: '<S170>/Calib'
         *  RelationalOperator: '<S165>/GreaterThan1'
         *  UnitDelay: '<S165>/UnitDelay'
         */
        LeFSCR_b_AGS2_RadFanThrshld = ((rtb_Merge >
            KeFSCR_Pct_AGS2_RadFanThrshldLo) && (LeFSCR_b_AGS2_RadFanThrshld));
    }

    /* End of Switch: '<S165>/Switch1' */
    /* End of Outputs for SubSystem: '<S155>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S155>/Hysteresis_2' */
    /* Switch: '<S166>/Switch1' incorporates:
     *  Constant: '<S167>/Calib'
     *  RelationalOperator: '<S166>/GreaterThan'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >=
            KeFSCR_Pct_AGS2_AirFlowThrshldHi)
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S166>/ConstantValue'
         */
        LeFSCR_b_AGS2_AirFlowThrshld = true;
    }
    else
    {
        /* Switch: '<S166>/Switch1' incorporates:
         *  Constant: '<S168>/Calib'
         *  RelationalOperator: '<S166>/GreaterThan1'
         *  UnitDelay: '<S166>/UnitDelay'
         */
        LeFSCR_b_AGS2_AirFlowThrshld =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >
              KeFSCR_Pct_AGS2_AirFlowThrshldLo) && (LeFSCR_b_AGS2_AirFlowThrshld));
    }

    /* End of Switch: '<S166>/Switch1' */
    /* End of Outputs for SubSystem: '<S155>/Hysteresis_2' */

    /* Logic: '<S155>/LogicalOperator' */
    rtb_AND_c0 = ((LeFSCR_b_AGS2_RadFanThrshld) || (LeFSCR_b_AGS2_AirFlowThrshld));

    /* Outputs for Atomic SubSystem: '<S156>/Hysteresis_1' */
    /* Switch: '<S171>/Switch1' incorporates:
     *  Constant: '<S171>/ConstantValue'
     *  Constant: '<S175>/Calib'
     *  Constant: '<S176>/Calib'
     *  RelationalOperator: '<S171>/GreaterThan'
     *  RelationalOperator: '<S171>/GreaterThan1'
     *  UnitDelay: '<S171>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >=
            KeFSCR_v_AGS2_AntiFrzVehSpdThrshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_js = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_js =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >
              KeFSCR_v_AGS2_AntiFrzVehSpdThrshldLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_js));
    }

    /* End of Switch: '<S171>/Switch1' */
    /* End of Outputs for SubSystem: '<S156>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S156>/Hysteresis_2' */
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S172>/ConstantValue'
     *  Constant: '<S173>/Calib'
     *  Constant: '<S174>/Calib'
     *  RelationalOperator: '<S172>/GreaterThan'
     *  RelationalOperator: '<S172>/GreaterThan1'
     *  UnitDelay: '<S172>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
            KeFSCR_T_AGS2_AmbTmpThreshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_jt = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_jt =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >
              KeFSCR_T_AGS2_AmbTmpThreshldLo) && (FSCR_ac_DW.UnitDelay_DSTATE_jt));
    }

    /* End of Switch: '<S172>/Switch1' */
    /* End of Outputs for SubSystem: '<S156>/Hysteresis_2' */

    /* Logic: '<S156>/LogicalOperator' incorporates:
     *  Logic: '<S156>/LogicalOperator1'
     *  UnitDelay: '<S171>/UnitDelay'
     *  UnitDelay: '<S172>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownRes_p = ((FSCR_ac_DW.UnitDelay_DSTATE_js)
        && (!FSCR_ac_DW.UnitDelay_DSTATE_jt));

    /* Outputs for Atomic SubSystem: '<S157>/Hysteresis_1' */
    /* Switch: '<S177>/Switch1' incorporates:
     *  Constant: '<S177>/ConstantValue'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  RelationalOperator: '<S177>/GreaterThan'
     *  RelationalOperator: '<S177>/GreaterThan1'
     *  UnitDelay: '<S177>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g1 >=
            KeFSCR_T_AGS2_EngineClntTempThrshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_is = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_is =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_g1 >
              KeFSCR_T_AGS2_EngineClntTempThrshldLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_is));
    }

    /* End of Switch: '<S177>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S157>/Hysteresis_2' */
    /* Switch: '<S178>/Switch1' incorporates:
     *  Constant: '<S178>/ConstantValue'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     *  RelationalOperator: '<S178>/GreaterThan'
     *  RelationalOperator: '<S178>/GreaterThan1'
     *  UnitDelay: '<S178>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b >=
            KeFSCR_T_AGS2_LTLClnTempThrshldHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_g3 = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_g3 =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b >
              KeFSCR_T_AGS2_LTLClnTempThrshldLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_g3));
    }

    /* End of Switch: '<S178>/Switch1' */
    /* End of Outputs for SubSystem: '<S157>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S183>/Hysteresis' */
    /* Switch: '<S185>/Switch1' incorporates:
     *  Constant: '<S185>/ConstantValue'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     *  RelationalOperator: '<S185>/GreaterThan'
     *  RelationalOperator: '<S185>/GreaterThan1'
     *  UnitDelay: '<S185>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d >
            KeFSCR_Pct_AGS2_AccelPosDevRSP)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_pm = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_pm =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d >=
              KeFSCR_Pct_AGS2_AccelPosDevLSP) && (FSCR_ac_DW.UnitDelay_DSTATE_pm));
    }

    /* End of Switch: '<S185>/Switch1' */
    /* End of Outputs for SubSystem: '<S183>/Hysteresis' */

    /* Logic: '<S183>/LogicalOperator' incorporates:
     *  UnitDelay: '<S185>/UnitDelay'
     */
    LeFSCR_b_AGS2_AccelPosDev = !FSCR_ac_DW.UnitDelay_DSTATE_pm;

    /* Outputs for Atomic SubSystem: '<S183>/Hysteresis_3' */
    /* Switch: '<S186>/Switch1' incorporates:
     *  Constant: '<S190>/Calib'
     *  RelationalOperator: '<S186>/GreaterThan'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >=
            KeFSCR_v_AGS2_VehSpdThrshldOvrrHi)
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S186>/ConstantValue'
         */
        LeFSCR_b_AGS2_VehSpdCoastDwnOvrr = true;
    }
    else
    {
        /* Switch: '<S186>/Switch1' incorporates:
         *  Constant: '<S191>/Calib'
         *  RelationalOperator: '<S186>/GreaterThan1'
         *  UnitDelay: '<S186>/UnitDelay'
         */
        LeFSCR_b_AGS2_VehSpdCoastDwnOvrr =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >
              KeFSCR_v_AGS2_VehSpdThrshldOvrrLo) &&
             (LeFSCR_b_AGS2_VehSpdCoastDwnOvrr));
    }

    /* End of Switch: '<S186>/Switch1' */
    /* End of Outputs for SubSystem: '<S183>/Hysteresis_3' */

    /* Logic: '<S183>/LogicalOperator1' incorporates:
     *  Constant: '<S184>/Constant'
     *  RelationalOperator: '<S183>/RelationalOperator'
     */
    rtb_Comparison7_k = (((((uint32)
                            FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_pi) ==
                           CeTRNR_e_Neutral) && (LeFSCR_b_AGS2_AccelPosDev)) &&
                         (LeFSCR_b_AGS2_VehSpdCoastDwnOvrr));

    /* Outputs for Atomic SubSystem: '<S183>/SignalLatchOnWithReset1' */
    /* Logic: '<S192>/OR1' incorporates:
     *  Logic: '<S192>/NOT'
     *  Logic: '<S192>/OR'
     *  UnitDelay: '<S183>/Unit Delay'
     *  UnitDelay: '<S192>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_l = (rtb_Comparison7_k ||
        ((!FSCR_ac_DW.UnitDelay_DSTATE_l) && (FSCR_ac_DW.UnitDelay_DSTATE_f)));

    /* Update for UnitDelay: '<S192>/UnitDelay' incorporates:
     *  UnitDelay: '<S183>/Unit Delay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_f = FSCR_ac_DW.UnitDelay_DSTATE_l;

    /* End of Outputs for SubSystem: '<S183>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S183>/Timer Reset Enabled' */
    /* Switch: '<S193>/Switch1' incorporates:
     *  Constant: '<S183>/Constant'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S193>/Constant Value3'
     *  Constant: '<S193>/Constant Value4'
     *  DataTypeConversion: '<S183>/Data Type Conversion'
     *  Logic: '<S193>/AND1'
     *  MinMax: '<S193>/Maximum'
     *  RelationalOperator: '<S193>/Greater  Than2'
     *  Sum: '<S193>/Subtraction'
     *  UnitDelay: '<S183>/Unit Delay'
     *  UnitDelay: '<S193>/Unit Delay'
     */
    if ((FSCR_ac_DW.UnitDelay_DSTATE_l) && (FSCR_ac_DW.UnitDelay_DSTATE_m <=
            0.0F))
    {
        FSCR_ac_DW.UnitDelay_DSTATE_m = (float32)
            KeFSCR_Cnt_AGS2_CoastDwnDurationTime;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_m = fmaxf(FSCR_ac_DW.UnitDelay_DSTATE_m -
            0.1F, 0.0F);
    }

    /* End of Switch: '<S193>/Switch1' */

    /* Logic: '<S157>/LogicalOperator' incorporates:
     *  Constant: '<S193>/Constant Value2'
     *  Logic: '<S183>/Logical Operator'
     *  RelationalOperator: '<S193>/Greater  Than1'
     *  UnitDelay: '<S177>/UnitDelay'
     *  UnitDelay: '<S178>/UnitDelay'
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_Comparison7_k = (((rtb_Comparison7_k || (FSCR_ac_DW.UnitDelay_DSTATE_m >
                            0.0F)) && (FSCR_ac_DW.UnitDelay_DSTATE_is)) &&
                         (FSCR_ac_DW.UnitDelay_DSTATE_g3));

    /* End of Outputs for SubSystem: '<S183>/Timer Reset Enabled' */

    /* SignalConversion generated from: '<S11>/AGS2_Overrides' */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* Sum: '<S416>/Sum' */
    rtb_Sum_k = FSCR_ac_B.LeFSCR_b_AGS2_CalReset;

    /* UnitDelay: '<S422>/UnitDelay' */
    rtb_AND_do = FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h;

#else

    /* Sum: '<S416>/Sum' incorporates:
     *  SignalConversion generated from: '<S11>/AGS2_Overrides'
     */
    rtb_Sum_k = 0.0F;

    /* UnitDelay: '<S422>/UnitDelay' incorporates:
     *  SignalConversion generated from: '<S11>/AGS2_Overrides'
     */
    rtb_AND_do = false;

#endif

    /* End of SignalConversion generated from: '<S11>/AGS2_Overrides' */

    /* Logic: '<S114>/LogicalOperator' */
    rtb_AND_do = ((rtb_Sum_k != 0.0F) && rtb_AND_do);

    /* Outputs for Atomic SubSystem: '<S164>/Hysteresis_1' */
    /* Switch: '<S194>/Switch1' incorporates:
     *  Constant: '<S194>/ConstantValue'
     *  Constant: '<S201>/Calib'
     *  Constant: '<S202>/Calib'
     *  RelationalOperator: '<S194>/GreaterThan'
     *  RelationalOperator: '<S194>/GreaterThan1'
     *  UnitDelay: '<S194>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >=
            KeFSCR_v_AGS2_VehSpdThrshldOvrrHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_j0 = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_j0 =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g >
              KeFSCR_v_AGS2_VehSpdThrshldOvrrLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_j0));
    }

    /* End of Switch: '<S194>/Switch1' */
    /* End of Outputs for SubSystem: '<S164>/Hysteresis_1' */

    /* Outputs for Atomic SubSystem: '<S164>/Hysteresis_2' */
    /* Switch: '<S195>/Switch1' incorporates:
     *  Constant: '<S195>/ConstantValue'
     *  Constant: '<S197>/Calib'
     *  Constant: '<S200>/Calib'
     *  RelationalOperator: '<S195>/GreaterThan'
     *  RelationalOperator: '<S195>/GreaterThan1'
     *  UnitDelay: '<S195>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
            KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMinHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_em = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_em =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >
              KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMinLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_em));
    }

    /* End of Switch: '<S195>/Switch1' */
    /* End of Outputs for SubSystem: '<S164>/Hysteresis_2' */

    /* Outputs for Atomic SubSystem: '<S164>/Hysteresis_3' */
    /* Switch: '<S196>/Switch1' incorporates:
     *  Constant: '<S196>/ConstantValue'
     *  Constant: '<S198>/Calib'
     *  Constant: '<S199>/Calib'
     *  RelationalOperator: '<S196>/GreaterThan'
     *  RelationalOperator: '<S196>/GreaterThan1'
     *  UnitDelay: '<S196>/UnitDelay'
     */
    if (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >=
            KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMaxHi)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_m3 = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_m3 =
            ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_mi >
              KeFSCR_T_AGS2_HighVehSpdAmbTmpThrshldOvrrMaxLo) &&
             (FSCR_ac_DW.UnitDelay_DSTATE_m3));
    }

    /* End of Switch: '<S196>/Switch1' */
    /* End of Outputs for SubSystem: '<S164>/Hysteresis_3' */

    /* Logic: '<S164>/LogicalOperator1' incorporates:
     *  UnitDelay: '<S196>/UnitDelay'
     */
    LeFSCR_b_AGS2_HighVehSpdAmbTmpThrshldOvrrMax =
        !FSCR_ac_DW.UnitDelay_DSTATE_m3;

    /* Logic: '<S164>/LogicalOperator' incorporates:
     *  UnitDelay: '<S194>/UnitDelay'
     *  UnitDelay: '<S195>/UnitDelay'
     */
    rtb_AND_e = (((FSCR_ac_DW.UnitDelay_DSTATE_j0) &&
                  (FSCR_ac_DW.UnitDelay_DSTATE_em)) &&
                 (LeFSCR_b_AGS2_HighVehSpdAmbTmpThrshldOvrrMax));

    /* DataTypeConversion: '<S209>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S153>/FloatToFix'
     *  Lookup_n-D: '<S210>/Vector'
     */
    rtb_DataTypeConversion_c = (TeFSCR_e_AGS_PosRq)((uint16)
        look1_iflf_binlca_16a(LeFSCR_Pct_AGS2_Pos, ((const float32 *)
        &(KxFSCR_Pct_AGS2_NormalizeFunction[0])), ((const float32 *)
        &(KtFSCR_Pct_AGS2_NormalizeFunction[0])), 10U));

    /* Switch: '<S114>/Switch5' incorporates:
     *  Constant: '<S154>/Constant'
     *  Constant: '<S154>/Constant1'
     *  Constant: '<S154>/Constant2'
     *  Constant: '<S154>/Constant3'
     *  Logic: '<S154>/LogicalOperator3'
     *  Logic: '<S154>/LogicalOperator4'
     *  RelationalOperator: '<S154>/RelationalOperator'
     *  RelationalOperator: '<S154>/RelationalOperator1'
     *  RelationalOperator: '<S154>/RelationalOperator2'
     *  RelationalOperator: '<S154>/RelationalOperator3'
     */
    if ((((((sint32)rtb_LeFSCR_i_AGS2_SF_State) != 14) && (((sint32)
            rtb_LeFSCR_i_AGS2_SF_State) != 15)) && (((sint32)
            rtb_LeFSCR_i_AGS2_SF_State) != 16)) && (((sint32)
            rtb_LeFSCR_i_AGS2_SF_State) != 17))
    {
        /* Switch: '<S114>/Switch6' incorporates:
         *  Constant: '<S158>/Constant'
         *  Constant: '<S159>/Constant'
         *  Logic: '<S114>/LogicalOperator2'
         *  Switch: '<S114>/Switch7'
         *  Switch: '<S114>/Switch8'
         *  Switch: '<S114>/Switch9'
         */
        if (rtb_AND_do || rtb_AND_c0)
        {
            rtb_LogicalOperator_e_0 = CeFSCR_e_Open100;
        }
        else if (rtb_Comparison7_k)
        {
            /* Switch: '<S114>/Switch7' incorporates:
             *  Constant: '<S161>/Calib'
             */
            rtb_LogicalOperator_e_0 = KeFSCR_e_AGS2_CoastDownPosition;
        }
        else if (rtb_AND_e)
        {
            /* Switch: '<S114>/Switch8' incorporates:
             *  Constant: '<S162>/Calib'
             *  Switch: '<S114>/Switch7'
             */
            rtb_LogicalOperator_e_0 = KeFSCR_e_AGS2_VehSpdOvrPos;
        }
        else if (rtb_VM_Conditional_Signal_CountDownRes_p)
        {
            /* Switch: '<S114>/Switch9' incorporates:
             *  Constant: '<S160>/Calib'
             *  Switch: '<S114>/Switch7'
             *  Switch: '<S114>/Switch8'
             */
            rtb_LogicalOperator_e_0 = KeFSCR_e_AGS2_AntiFrzOvrPos;
        }
        else
        {
            rtb_LogicalOperator_e_0 = CeFSCR_e_Open0;
        }

        /* End of Switch: '<S114>/Switch6' */

        /* Switch: '<S114>/Switch5' incorporates:
         *  DataTypeConversion: '<S114>/FloatToFix'
         *  Lookup_n-D: '<S163>/Vector'
         */
        Switch5_n = look1_iu8bflftf_binlca_16a((uint8)rtb_LogicalOperator_e_0,
            ((const float32 *)&(KxFSCR_e_AGS2_NormalizeFunction[0])), ((const
            float32 *)&(KtFSCR_e_AGS2_NormalizeFunction[0])), 10U);
    }
    else
    {
        /* Switch: '<S114>/Switch5' */
        Switch5_n = LeFSCR_Pct_AGS2_Pos;
    }

    /* End of Switch: '<S114>/Switch5' */

    /* RelationalOperator: '<S116>/RelationalOperator' incorporates:
     *  Constant: '<S116>/Constant'
     *  Constant: '<S116>/Constant1'
     *  Constant: '<S116>/Constant2'
     *  Constant: '<S116>/Constant3'
     *  Constant: '<S116>/Constant4'
     *  Constant: '<S116>/Constant5'
     *  Constant: '<S203>/Constant'
     *  Logic: '<S116>/LogicalOperator'
     *  RelationalOperator: '<S116>/RelationalOperator1'
     *  RelationalOperator: '<S116>/RelationalOperator2'
     *  RelationalOperator: '<S116>/RelationalOperator3'
     *  RelationalOperator: '<S116>/RelationalOperator4'
     *  RelationalOperator: '<S116>/RelationalOperator5'
     *  RelationalOperator: '<S121>/RelationalOperator'
     *  Switch: '<S121>/Switch2'
     *  UnitDelay: '<S11>/UnitDelay'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    FSCR_ac_DW.UnitDelay_DSTATE_g5 = ((((((((sint32)
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 2) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 3)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 4)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 5)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 9)) || (((sint32)
        FSCR_ac_B.LeFSCR_i_AGS2_SF_State) == 10));
    if (((uint32)FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f) ==
            CeTAIR_e_Return_Control_to_ECU)
    {
        /* Switch: '<S114>/Switch4' */
        if (rtb_AND_do)
        {
            /* Switch: '<S114>/Switch' incorporates:
             *  Switch: '<S114>/Switch1'
             *  Switch: '<S114>/Switch2'
             *  Switch: '<S114>/Switch3'
             */
            if (rtb_AND_c0)
            {
                /* Switch: '<S121>/Switch2' incorporates:
                 *  Constant: '<S158>/Constant'
                 *  Switch: '<S114>/Switch'
                 */
                LeFSCR_e_AGS2_Pos = CeFSCR_e_Open100;
            }
            else if (rtb_Comparison7_k)
            {
                /* Switch: '<S114>/Switch1' incorporates:
                 *  Constant: '<S161>/Calib'
                 *  Switch: '<S114>/Switch'
                 *  Switch: '<S121>/Switch2'
                 */
                LeFSCR_e_AGS2_Pos = KeFSCR_e_AGS2_CoastDownPosition;
            }
            else if (rtb_AND_e)
            {
                /* Switch: '<S114>/Switch2' incorporates:
                 *  Constant: '<S162>/Calib'
                 *  Switch: '<S114>/Switch1'
                 *  Switch: '<S121>/Switch2'
                 */
                LeFSCR_e_AGS2_Pos = KeFSCR_e_AGS2_VehSpdOvrPos;
            }
            else if (rtb_VM_Conditional_Signal_CountDownRes_p)
            {
                /* Switch: '<S114>/Switch3' incorporates:
                 *  Constant: '<S160>/Calib'
                 *  Switch: '<S114>/Switch1'
                 *  Switch: '<S114>/Switch2'
                 *  Switch: '<S121>/Switch2'
                 */
                LeFSCR_e_AGS2_Pos = KeFSCR_e_AGS2_AntiFrzOvrPos;
            }
            else
            {
                /* Switch: '<S121>/Switch2' incorporates:
                 *  DataTypeConversion: '<S209>/DataTypeConversion'
                 *  Switch: '<S114>/Switch1'
                 *  Switch: '<S114>/Switch2'
                 *  Switch: '<S114>/Switch3'
                 */
                LeFSCR_e_AGS2_Pos = rtb_DataTypeConversion_c;
            }

            /* End of Switch: '<S114>/Switch' */
        }
        else
        {
            /* Switch: '<S121>/Switch2' incorporates:
             *  DataTypeConversion: '<S209>/DataTypeConversion'
             *  Switch: '<S114>/Switch4'
             */
            LeFSCR_e_AGS2_Pos = rtb_DataTypeConversion_c;
        }

        /* End of Switch: '<S114>/Switch4' */
    }
    else
    {
        /* Switch: '<S121>/Switch2' */
        LeFSCR_e_AGS2_Pos = FSCR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j;
    }

#endif

    /* End of RelationalOperator: '<S116>/RelationalOperator' */

    /* Outputs for Atomic SubSystem: '<S415>/Hysteresis' */
    /* Switch: '<S417>/Switch1' incorporates:
     *  Constant: '<S417>/ConstantValue'
     *  Constant: '<S420>/Calib'
     *  Constant: '<S421>/Calib'
     *  RelationalOperator: '<S417>/GreaterThan'
     *  RelationalOperator: '<S417>/GreaterThan1'
     *  UnitDelay: '<S417>/UnitDelay'
     */
    if (VeFSCR_Pct_RadLVFan2ActualCmd_Raw > KeFSCR_Pct_NoFlyZoneMin)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_lm = true;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_lm = ((VeFSCR_Pct_RadLVFan2ActualCmd_Raw >=
            KeFSCR_Pct_NoFlyZoneTh) && (FSCR_ac_DW.UnitDelay_DSTATE_lm));
    }

    /* End of Switch: '<S417>/Switch1' */
    /* End of Outputs for SubSystem: '<S415>/Hysteresis' */

    /* Switch: '<S407>/Switch1' incorporates:
     *  Constant: '<S412>/Calib'
     *  Constant: '<S413>/Calib'
     *  Logic: '<S362>/Logical1'
     *  RelationalOperator: '<S362>/Comparison1'
     */
    if ((KeFSCR_b_NoFlyZone_Enable) &&
            (FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g <
             KeFSCR_v_NoFlyZone_VehicleSpeed))
    {
        /* Switch: '<S418>/Switch1' incorporates:
         *  Constant: '<S419>/Calib'
         *  Logic: '<S415>/Logical1'
         *  RelationalOperator: '<S415>/Comparison3'
         *  UnitDelay: '<S417>/UnitDelay'
         */
        if ((FSCR_ac_DW.UnitDelay_DSTATE_lm) &&
                (VeFSCR_Pct_RadLVFan2ActualCmd_Raw < KeFSCR_Pct_NoFlyZoneMax))
        {
            /* Switch: '<S407>/Switch1' */
            rtb_Sum1_d = KeFSCR_Pct_NoFlyZoneMax;
        }
        else
        {
            /* Switch: '<S407>/Switch1' */
            rtb_Sum1_d = VeFSCR_Pct_RadLVFan2ActualCmd_Raw;
        }

        /* End of Switch: '<S418>/Switch1' */
    }
    else
    {
        /* Switch: '<S407>/Switch1' */
        rtb_Sum1_d = VeFSCR_Pct_RadLVFan2ActualCmd_Raw;
    }

    /* End of Switch: '<S407>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S362>/Limiter' */
    /* Switch: '<S414>/Switch1' incorporates:
     *  Constant: '<S411>/Calib'
     *  RelationalOperator: '<S414>/RelationalOperator'
     */
    if (KeFSCR_Pct_LVRadFan2UpLim < rtb_Sum1_d)
    {
        /* Switch: '<S423>/Switch1' */
        rtb_Sum1_d = KeFSCR_Pct_LVRadFan2UpLim;
    }

    /* End of Switch: '<S414>/Switch1' */

    /* Switch: '<S414>/Switch' incorporates:
     *  Constant: '<S408>/Calib'
     *  RelationalOperator: '<S414>/RelationalOperator1'
     */
    if (rtb_Sum1_d > KeFSCR_Pct_LVRadFan2DwnLim)
    {
        /* Switch: '<S414>/Switch' */
        VeFSCR_Pct_LVRadFan2ActualCmd_BG = rtb_Sum1_d;
    }
    else
    {
        /* Switch: '<S414>/Switch' */
        VeFSCR_Pct_LVRadFan2ActualCmd_BG = KeFSCR_Pct_LVRadFan2DwnLim;
    }

    /* End of Switch: '<S414>/Switch' */
    /* End of Outputs for SubSystem: '<S362>/Limiter' */

    /* Outputs for Atomic SubSystem: '<S416>/EdgeRising' */
    /* Logic: '<S422>/AND' incorporates:
     *  Logic: '<S422>/OR1'
     *  UnitDelay: '<S422>/UnitDelay'
     */
    rtb_AND_c0 = !FSCR_ac_DW.UnitDelay_DSTATE_mz;

    /* Update for UnitDelay: '<S422>/UnitDelay' incorporates:
     *  Constant: '<S416>/TRUEConstant'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_mz = true;

    /* End of Outputs for SubSystem: '<S416>/EdgeRising' */

    /* Switch: '<S424>/Switch1' */
    if (rtb_AND_c0)
    {
        /* Sum: '<S416>/Sum' incorporates:
         *  Constant: '<S408>/Calib'
         */
        rtb_Sum_k = KeFSCR_Pct_LVRadFan2DwnLim;
    }
    else
    {
        /* Sum: '<S416>/Sum' incorporates:
         *  UnitDelay: '<S424>/UnitDelay'
         */
        rtb_Sum_k = FSCR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S424>/Switch1' */

    /* Sum: '<S416>/Sum1' */
    rtb_Sum1_d = VeFSCR_Pct_LVRadFan2ActualCmd_BG - rtb_Sum_k;

    /* Outputs for Atomic SubSystem: '<S416>/Limiter1' */
    /* Switch: '<S423>/Switch1' incorporates:
     *  Constant: '<S409>/Calib'
     *  RelationalOperator: '<S423>/RelationalOperator'
     */
    if (KeFSCR_Pct_LVRadFan2Incrs_High < rtb_Sum1_d)
    {
        /* Switch: '<S423>/Switch1' */
        rtb_Sum1_d = KeFSCR_Pct_LVRadFan2Incrs_High;
    }

    /* End of Switch: '<S423>/Switch1' */

    /* Switch: '<S423>/Switch' incorporates:
     *  Constant: '<S410>/Calib'
     *  RelationalOperator: '<S423>/RelationalOperator1'
     */
    if (rtb_Sum1_d <= KeFSCR_Pct_LVRadFan2Incrs_Low)
    {
        rtb_Sum1_d = KeFSCR_Pct_LVRadFan2Incrs_Low;
    }

    /* End of Switch: '<S423>/Switch' */
    /* End of Outputs for SubSystem: '<S416>/Limiter1' */

    /* Sum: '<S416>/Sum' */
    rtb_Sum_k += rtb_Sum1_d;

    /* Switch: '<S406>/Switch1' incorporates:
     *  Constant: '<S405>/Constant'
     *  RelationalOperator: '<S362>/Comparison4'
     */
    if (((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) ==
            CePMTR_e_DISBL_All_Thrml)
    {
        /* Switch: '<S406>/Switch1' incorporates:
         *  Constant: '<S408>/Calib'
         */
        VeFSCR_Pct_LVRadFan2ActualCmd_BD = KeFSCR_Pct_LVRadFan2DwnLim;
    }
    else
    {
        /* Switch: '<S406>/Switch1' */
        VeFSCR_Pct_LVRadFan2ActualCmd_BD = rtb_Sum_k;
    }

    /* End of Switch: '<S406>/Switch1' */

    /* SignalConversion generated from: '<S5>/AGS2_BoostReq' incorporates:
     *  SignalConversion generated from: '<S5>/AGS2_CalAtmptThrshold'
     *  SignalConversion generated from: '<S5>/AGS2_CalReq'
     *  SignalConversion generated from: '<S5>/AGS2_CalSuccess'
     *  SignalConversion generated from: '<S5>/AGS2_SleepReq'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* VariantMerge generated from: '<S7>/AGS2_BoostReq' */
    FSCR_ac_B.LeFSCR_b_AGS2_BoostReq = FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m;

    /* VariantMerge generated from: '<S7>/AGS2_CalAtmptThrshold' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold =
        FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold_d;

    /* VariantMerge generated from: '<S7>/AGS2_CalReq' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalReq = FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m;

    /* VariantMerge generated from: '<S7>/AGS2_CalSuccess' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess = FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h;

    /* VariantMerge generated from: '<S7>/AGS2_SleepReq' */
    FSCR_ac_B.LeFSCR_b_SleepReq_b = FSCR_ac_B.LeFSCR_b_SleepReq_a;

#endif

    /* End of SignalConversion generated from: '<S5>/AGS2_BoostReq' */

    /* SignalConversion generated from: '<S5>/AGS_BoostReq' incorporates:
     *  SignalConversion generated from: '<S5>/AGS_CalAtmptThrshold'
     *  SignalConversion generated from: '<S5>/AGS_CalReq'
     *  SignalConversion generated from: '<S5>/AGS_CalSuccess'
     *  SignalConversion generated from: '<S5>/AGS_SleepReq'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* VariantMerge generated from: '<S7>/AGS_BoostReq' */
    FSCR_ac_B.LeFSCR_b_AGS_BoostReq = FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b;

    /* VariantMerge generated from: '<S7>/AGS_CalAtmptThrshold' */
    FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold =
        FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold_l;

    /* VariantMerge generated from: '<S7>/AGS_CalReq' */
    FSCR_ac_B.LeFSCR_b_AGS_CalReq = FSCR_ac_B.LeFSCR_b_AGS_CalReq_l;

    /* VariantMerge generated from: '<S7>/AGS_CalSuccess' */
    FSCR_ac_B.LeFSCR_b_AGS_CalSuccess = FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g;

    /* VariantMerge generated from: '<S7>/AGS_SleepReq' */
    FSCR_ac_B.LeFSCR_b_SleepReq = FSCR_ac_B.LeFSCR_b_SleepReq_b2;

#endif

    /* End of SignalConversion generated from: '<S5>/AGS_BoostReq' */

    /* Switch: '<S384>/Switch3' incorporates:
     *  Constant: '<S368>/Calib'
     *  UnitDelay: '<S384>/UnitDelay'
     */
    if (rtb_VM_Conditional_Signal_CountDownReset)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_g = KeFSCR_Pct_HVRadFanDwnLim;
    }

    /* End of Switch: '<S384>/Switch3' */

    /* Switch: '<S404>/Switch3' incorporates:
     *  Constant: '<S388>/Calib'
     *  UnitDelay: '<S404>/UnitDelay'
     */
    if (rtb_AND_p)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_a0 = KeFSCR_Pct_LVRadFan1DwnLim;
    }

    /* End of Switch: '<S404>/Switch3' */

    /* Switch: '<S424>/Switch3' incorporates:
     *  Constant: '<S408>/Calib'
     *  UnitDelay: '<S424>/UnitDelay'
     */
    if (rtb_AND_c0)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_i = KeFSCR_Pct_LVRadFan2DwnLim;
    }
    else
    {
        FSCR_ac_DW.UnitDelay_DSTATE_i = rtb_Sum_k;
    }

    /* End of Switch: '<S424>/Switch3' */

    /* Update for UnitDelay: '<S321>/UnitDelay' incorporates:
     *  Switch: '<S548>/Switch1'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_bq = VeFSCR_e_KeyStatus_AD;

    /* Update for UnitDelay: '<S321>/UnitDelay3' incorporates:
     *  Switch: '<S548>/Switch1'
     */
    FSCR_ac_DW.UnitDelay3_DSTATE = VeFSCR_e_KeyStatus_AD;

    /* Update for UnitDelay: '<S321>/UnitDelay1' incorporates:
     *  Switch: '<S548>/Switch1'
     */
    FSCR_ac_DW.UnitDelay1_DSTATE = VeFSCR_e_KeyStatus_AD;

    /* Update for UnitDelay: '<S321>/UnitDelay2' incorporates:
     *  Switch: '<S548>/Switch1'
     */
    FSCR_ac_DW.UnitDelay2_DSTATE = VeFSCR_e_KeyStatus_AD;

    /* Update for UnitDelay: '<S321>/UnitDelay4' incorporates:
     *  Switch: '<S548>/Switch1'
     */
    FSCR_ac_DW.UnitDelay4_DSTATE = VeFSCR_e_KeyStatus_AD;

    /* Update for UnitDelay: '<S85>/Unit Delay' incorporates:
     *  UnitDelay: '<S94>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_cy = FSCR_ac_DW.UnitDelay_DSTATE_oc;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FSCR_Diagnostics'
     */
    /* Logic: '<S426>/Logical1' incorporates:
     *  Constant: '<S444>/Constant1'
     *  Constant: '<S444>/Constant2'
     *  Constant: '<S445>/Constant1'
     *  Constant: '<S445>/Constant2'
     *  Constant: '<S446>/Constant1'
     *  Constant: '<S446>/Constant2'
     *  Constant: '<S447>/Constant1'
     *  Constant: '<S447>/Constant2'
     *  Constant: '<S448>/Constant1'
     *  Constant: '<S448>/Constant2'
     *  Constant: '<S449>/Constant1'
     *  Constant: '<S449>/Constant2'
     *  Constant: '<S450>/Calib'
     *  Constant: '<S451>/Calib'
     *  Constant: '<S452>/Calib'
     *  Constant: '<S453>/Calib'
     *  Constant: '<S454>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Calib'
     *  DataStoreRead: '<S444>/StatusByte_Fan1CntrlCktHi'
     *  DataStoreRead: '<S445>/StatusByte_Fan1CntrlCktLo'
     *  DataStoreRead: '<S446>/StatusByte_Fan1CntrlCkt'
     *  DataStoreRead: '<S447>/StatusByte_RadFanDiagErrM0'
     *  DataStoreRead: '<S448>/StatusByte_RadFanDiagErrM1'
     *  DataStoreRead: '<S449>/StatusByte_RadFanDiagErrM2'
     *  Logic: '<S426>/Logical2'
     *  Logic: '<S426>/Logical3'
     *  Logic: '<S426>/Logical4'
     *  Logic: '<S426>/Logical5'
     *  Logic: '<S426>/Logical6'
     *  Logic: '<S426>/Logical7'
     *  Logic: '<S426>/Logical8'
     *  Logic: '<S444>/LogicalOperator'
     *  Logic: '<S445>/LogicalOperator'
     *  Logic: '<S446>/LogicalOperator'
     *  Logic: '<S447>/LogicalOperator'
     *  Logic: '<S448>/LogicalOperator'
     *  Logic: '<S449>/LogicalOperator'
     *  RelationalOperator: '<S444>/RelationalOperator1'
     *  RelationalOperator: '<S444>/RelationalOperator2'
     *  RelationalOperator: '<S445>/RelationalOperator1'
     *  RelationalOperator: '<S445>/RelationalOperator2'
     *  RelationalOperator: '<S446>/RelationalOperator1'
     *  RelationalOperator: '<S446>/RelationalOperator2'
     *  RelationalOperator: '<S447>/RelationalOperator1'
     *  RelationalOperator: '<S447>/RelationalOperator2'
     *  RelationalOperator: '<S448>/RelationalOperator1'
     *  RelationalOperator: '<S448>/RelationalOperator2'
     *  RelationalOperator: '<S449>/RelationalOperator1'
     *  RelationalOperator: '<S449>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S444>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S444>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S445>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S445>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S446>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S446>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S447>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S447>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S448>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S448>/BitwiseOperator2'
     *  S-Function (sfix_bitop): '<S449>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S449>/BitwiseOperator2'
     */
    VeFSCR_b_RadFan_fault =
        ((((((((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_as3) &&
               (KeFSCR_b_RadFan_Status_FA_Enb)) || ((((((uint32)
                   FSCR_ac_DW.StatusByte_RadFanDiagErrM0) & 1U) != 0U) &&
                ((((uint32)FSCR_ac_DW.StatusByte_RadFanDiagErrM0) & 64U) == 0U))
               && (KeFSCR_b_RadFan_M1Fault_Enb))) || ((((((uint32)
                  FSCR_ac_DW.StatusByte_RadFanDiagErrM1) & 1U) != 0U) &&
               ((((uint32)FSCR_ac_DW.StatusByte_RadFanDiagErrM1) & 64U) == 0U)) &&
              (KeFSCR_b_RadFan_M2Fault_Enb))) || ((((((uint32)
                 FSCR_ac_DW.StatusByte_RadFanDiagErrM2) & 1U) != 0U) &&
              ((((uint32)FSCR_ac_DW.StatusByte_RadFanDiagErrM2) & 64U) == 0U)) &&
             (KeFSCR_b_RadFan_M3Fault_Enb))) || ((((((uint32)
                FSCR_ac_DW.StatusByte_Fan1CntrlCkt) & 1U) != 0U) && ((((uint32)
                FSCR_ac_DW.StatusByte_Fan1CntrlCkt) & 64U) == 0U)) &&
            (KeFSCR_b_RadFan_CntrlCktFlt_Enb))) || ((((((uint32)
               FSCR_ac_DW.StatusByte_Fan1CntrlCktLo) & 1U) != 0U) && ((((uint32)
               FSCR_ac_DW.StatusByte_Fan1CntrlCktLo) & 64U) == 0U)) &&
           (KeFSCR_b_RadFan_CntrlCktLoFlt_Enb))) || ((((((uint32)
              FSCR_ac_DW.StatusByte_Fan1CntrlCktHi) & 1U) != 0U) && ((((uint32)
              FSCR_ac_DW.StatusByte_Fan1CntrlCktHi) & 64U) == 0U)) &&
          (KeFSCR_b_RadFan_CktHiFlt_Enb)));

    /* Logic: '<S435>/LogicalOperator2' incorporates:
     *  Constant: '<S442>/Calib'
     *  Constant: '<S443>/Calib'
     *  Logic: '<S435>/LogicalOperator4'
     *  RelationalOperator: '<S435>/Comparison1'
     *  RelationalOperator: '<S435>/Comparison2'
     */
    rtb_AND_c0 = (((KeFSCR_Pct_RadFanCmd_UpLim > FSCR_ac_B.Gain) &&
                   (FSCR_ac_B.Gain > KeFSCR_Pct_RadFanCmd_LowLim)) &&
                  (VeFSCR_b_PropSysActv_AD));

    /* Outputs for Atomic SubSystem: '<S431>/EdgeRising' */
    /* Logic: '<S438>/OR1' incorporates:
     *  UnitDelay: '<S438>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownRes_p = !FSCR_ac_DW.UnitDelay_DSTATE_if;

    /* Update for UnitDelay: '<S438>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_if = rtb_AND_c0;

    /* End of Outputs for SubSystem: '<S431>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S431>/EdgeRising1' */
    /* Logic: '<S439>/OR1' incorporates:
     *  UnitDelay: '<S439>/UnitDelay'
     */
    rtb_AND_do = !FSCR_ac_DW.UnitDelay_DSTATE_ij;

    /* Update for UnitDelay: '<S439>/UnitDelay' incorporates:
     *  Constant: '<S431>/TRUEConstant'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_ij = true;

    /* Outputs for Atomic SubSystem: '<S431>/EdgeRising' */
    /* Logic: '<S431>/LogicalOperator' incorporates:
     *  Logic: '<S438>/AND'
     *  Logic: '<S439>/AND'
     */
    rtb_VM_Conditional_Signal_CountDownRes_p = ((rtb_AND_c0 &&
        rtb_VM_Conditional_Signal_CountDownRes_p) || rtb_AND_do);

    /* End of Outputs for SubSystem: '<S431>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S431>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S431>/TimerRetriggerResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S440>/EdgeRising' */
    /* Logic: '<S441>/OR1' incorporates:
     *  UnitDelay: '<S441>/UnitDelay'
     */
    rtb_AND_do = !FSCR_ac_DW.UnitDelay_DSTATE_om;

    /* Update for UnitDelay: '<S441>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_om = rtb_VM_Conditional_Signal_CountDownRes_p;

    /* Switch: '<S440>/Switch1' incorporates:
     *  Constant: '<S425>/Constant2'
     *  Logic: '<S441>/AND'
     *  Switch: '<S440>/Switch2'
     *  UnitDelay: '<S440>/UnitDelay'
     */
    if (rtb_VM_Conditional_Signal_CountDownRes_p && rtb_AND_do)
    {
        FSCR_ac_DW.UnitDelay_DSTATE = 2.0F;
    }
    else
    {
        if (rtb_AND_c0)
        {
            /* UnitDelay: '<S440>/UnitDelay' incorporates:
             *  Constant: '<S431>/Constant1'
             *  Constant: '<S440>/ConstantValue4'
             *  MinMax: '<S440>/Maximum'
             *  Sum: '<S440>/Subtraction'
             *  Switch: '<S440>/Switch2'
             */
            FSCR_ac_DW.UnitDelay_DSTATE = fmaxf(FSCR_ac_DW.UnitDelay_DSTATE -
                0.1F, 0.0F);
        }
    }

    /* End of Switch: '<S440>/Switch1' */
    /* End of Outputs for SubSystem: '<S440>/EdgeRising' */

    /* Logic: '<S431>/LogicalOperator2' incorporates:
     *  Constant: '<S440>/ConstantValue2'
     *  Logic: '<S431>/LogicalOperator1'
     *  RelationalOperator: '<S440>/GreaterThan1'
     *  UnitDelay: '<S440>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownRes_p = (rtb_AND_c0 &&
        (FSCR_ac_DW.UnitDelay_DSTATE <= 0.0F));

    /* End of Outputs for SubSystem: '<S431>/TimerRetriggerResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S425>/EdgeRising1' */
    /* Logic: '<S427>/AND' incorporates:
     *  Logic: '<S427>/OR1'
     *  UnitDelay: '<S427>/UnitDelay'
     */
    rtb_AND_do = (rtb_VM_Conditional_Signal_CountDownRes_p &&
                  (!FSCR_ac_DW.UnitDelay_DSTATE_b2));

    /* Update for UnitDelay: '<S427>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_b2 = rtb_VM_Conditional_Signal_CountDownRes_p;

    /* End of Outputs for SubSystem: '<S425>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S425>/EdgeRising2' */
    /* Logic: '<S428>/OR1' incorporates:
     *  UnitDelay: '<S428>/UnitDelay'
     */
    rtb_AND_p = !FSCR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S428>/UnitDelay' incorporates:
     *  Constant: '<S425>/TRUEConstant'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_p = true;

    /* End of Outputs for SubSystem: '<S425>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S425>/EdgeRising3' */
    /* Logic: '<S429>/OR1' incorporates:
     *  UnitDelay: '<S429>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownReset = !FSCR_ac_DW.UnitDelay_DSTATE_kq;

    /* Update for UnitDelay: '<S429>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_kq = VeFSCR_b_PropSysActv_AD;

    /* Outputs for Atomic SubSystem: '<S425>/EdgeRising2' */
    /* Logic: '<S425>/LogicalOperator3' incorporates:
     *  Logic: '<S428>/AND'
     *  Logic: '<S429>/AND'
     */
    rtb_AND_p = (rtb_AND_p || ((VeFSCR_b_PropSysActv_AD) &&
                  rtb_VM_Conditional_Signal_CountDownReset));

    /* End of Outputs for SubSystem: '<S425>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S425>/EdgeRising3' */

    /* Outputs for Atomic SubSystem: '<S430>/TimerRetriggerResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S436>/EdgeRising' */
    /* Logic: '<S437>/OR1' incorporates:
     *  UnitDelay: '<S437>/UnitDelay'
     */
    rtb_VM_Conditional_Signal_CountDownReset = !FSCR_ac_DW.UnitDelay_DSTATE_hj;

    /* Update for UnitDelay: '<S437>/UnitDelay' */
    FSCR_ac_DW.UnitDelay_DSTATE_hj = rtb_AND_p;

    /* Switch: '<S436>/Switch1' incorporates:
     *  Constant: '<S425>/Constant'
     *  Logic: '<S437>/AND'
     *  Switch: '<S436>/Switch2'
     *  UnitDelay: '<S436>/UnitDelay'
     */
    if (rtb_AND_p && rtb_VM_Conditional_Signal_CountDownReset)
    {
        FSCR_ac_DW.UnitDelay_DSTATE_a = 10.0F;
    }
    else
    {
        if (rtb_AND_c0)
        {
            /* UnitDelay: '<S436>/UnitDelay' incorporates:
             *  Constant: '<S430>/Constant1'
             *  Constant: '<S436>/ConstantValue4'
             *  MinMax: '<S436>/Maximum'
             *  Sum: '<S436>/Subtraction'
             *  Switch: '<S436>/Switch2'
             */
            FSCR_ac_DW.UnitDelay_DSTATE_a = fmaxf(FSCR_ac_DW.UnitDelay_DSTATE_a
                - 0.1F, 0.0F);
        }
    }

    /* End of Switch: '<S436>/Switch1' */
    /* End of Outputs for SubSystem: '<S436>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S430>/TimerRetriggerResetTriggerEnabled' */

    /* Outputs for Atomic SubSystem: '<S425>/SignalLatchOnWithReset1' */
    /* Outputs for Atomic SubSystem: '<S425>/SignalLatchOnWithReset4' */
    /* Outputs for Atomic SubSystem: '<S425>/SignalLatchOnWithReset2' */
    /* Logic: '<S433>/NOT' incorporates:
     *  Logic: '<S432>/NOT'
     *  Logic: '<S434>/NOT'
     */
    rtb_AND_p = !rtb_AND_p;

    /* End of Outputs for SubSystem: '<S425>/SignalLatchOnWithReset4' */
    /* End of Outputs for SubSystem: '<S425>/SignalLatchOnWithReset1' */

    /* Outputs for Atomic SubSystem: '<S430>/TimerRetriggerResetTriggerEnabled' */
    /* Logic: '<S433>/OR1' incorporates:
     *  Constant: '<S436>/ConstantValue2'
     *  Logic: '<S430>/LogicalOperator1'
     *  Logic: '<S430>/LogicalOperator2'
     *  Logic: '<S433>/NOT'
     *  Logic: '<S433>/OR'
     *  RelationalOperator: '<S436>/GreaterThan1'
     *  UnitDelay: '<S433>/UnitDelay'
     *  UnitDelay: '<S436>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_du = ((rtb_AND_c0 &&
        (FSCR_ac_DW.UnitDelay_DSTATE_a <= 0.0F)) || (rtb_AND_p &&
        (FSCR_ac_DW.UnitDelay_DSTATE_du)));

    /* End of Outputs for SubSystem: '<S430>/TimerRetriggerResetTriggerEnabled' */
    /* End of Outputs for SubSystem: '<S425>/SignalLatchOnWithReset2' */

    /* Outputs for Atomic SubSystem: '<S425>/SignalLatchOnWithReset4' */
    /* Logic: '<S434>/OR1' incorporates:
     *  Delay: '<S425>/Delay'
     *  Logic: '<S425>/LogicalOperator1'
     *  Logic: '<S434>/OR'
     *  UnitDelay: '<S434>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_j = (((FSCR_ac_DW.Delay_DSTATE) && rtb_AND_do) ||
        (rtb_AND_p && (FSCR_ac_DW.UnitDelay_DSTATE_j)));

    /* End of Outputs for SubSystem: '<S425>/SignalLatchOnWithReset4' */

    /* Logic: '<S425>/LogicalOperator9' incorporates:
     *  Logic: '<S425>/LogicalOperator'
     *  UnitDelay: '<S433>/UnitDelay'
     */
    VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met_BD = (((FSCR_ac_DW.UnitDelay_DSTATE_du)
        || (FSCR_ac_DW.UnitDelay_DSTATE_j)) && (VeFSCR_b_PropSysActv_AD));

    /* Outputs for Atomic SubSystem: '<S425>/SignalLatchOnWithReset1' */
    /* Logic: '<S432>/OR1' incorporates:
     *  Logic: '<S432>/OR'
     *  UnitDelay: '<S432>/UnitDelay'
     */
    FSCR_ac_DW.UnitDelay_DSTATE_b = (rtb_VM_Conditional_Signal_CountDownRes_p ||
        (rtb_AND_p && (FSCR_ac_DW.UnitDelay_DSTATE_b)));

    /* End of Outputs for SubSystem: '<S425>/SignalLatchOnWithReset1' */

    /* Update for Delay: '<S425>/Delay' */
    FSCR_ac_DW.Delay_DSTATE = FSCR_ac_DW.UnitDelay_DSTATE_b;

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S469>/Switch1' incorporates:
     *  Constant: '<S505>/Calib'
     */
    if (KeFSCR_b_RadFanCmd_SD)
    {
        /* Gain: '<S506>/Gain' incorporates:
         *  Constant: '<S504>/Calib'
         */
        FSCR_ac_B.Gain = KeFSCR_Pct_RadFanCmd_D;
    }
    else
    {
        /* Gain: '<S506>/Gain' */
        FSCR_ac_B.Gain = rtb_Merge;
    }

    /* End of Switch: '<S469>/Switch1' */

    /* Switch: '<S477>/Switch1' incorporates:
     *  Constant: '<S526>/Calib'
     */
    if (KeFSCR_b_RadFan_FltDtct_SD)
    {
        /* Switch: '<S477>/Switch1' incorporates:
         *  Constant: '<S525>/Calib'
         */
        FSCR_ac_B.Switch1_m = KeFSCR_b_RadFan_FltDtct_D;
    }
    else
    {
        /* Switch: '<S477>/Switch1' */
        FSCR_ac_B.Switch1_m = VeFSCR_b_RadFan_fault;
    }

    /* End of Switch: '<S477>/Switch1' */

    /* SignalConversion generated from: '<S7>/AGS_PosReq' */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* VariantMerge generated from: '<S7>/AGS2_PosReq' incorporates:
     *  Switch: '<S23>/Switch2'
     */
    rtb_LeFSCR_e_AGS2_Pos = LeFSCR_e_AGS_Pos;

#else

    /* VariantMerge generated from: '<S7>/AGS2_PosReq' incorporates:
     *  SignalConversion generated from: '<S7>/AGS_PosReq'
     */
    rtb_LeFSCR_e_AGS2_Pos = CeFSCR_e_Open100;

#endif

    /* End of SignalConversion generated from: '<S7>/AGS_PosReq' */

    /* Switch: '<S458>/Switch1' incorporates:
     *  Constant: '<S482>/Calib'
     */
    if (KeFSCR_b_AGS_PosReq_SD)
    {
        /* Switch: '<S458>/Switch1' incorporates:
         *  Constant: '<S483>/Calib'
         */
        rtb_DataTypeConversion_c = KeFSCR_e_AGS_PosReq_D;
    }
    else
    {
        /* Switch: '<S458>/Switch1' incorporates:
         *  VariantMerge generated from: '<S7>/AGS2_PosReq'
         */
        rtb_DataTypeConversion_c = rtb_LeFSCR_e_AGS2_Pos;
    }

    /* End of Switch: '<S458>/Switch1' */

    /* SignalConversion generated from: '<S7>/AGS2_PosReq' incorporates:
     *  SignalConversion generated from: '<S7>/AGS2_CalReq'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* VariantMerge generated from: '<S7>/AGS2_PosReq' incorporates:
     *  Switch: '<S121>/Switch2'
     */
    rtb_LeFSCR_e_AGS2_Pos = LeFSCR_e_AGS2_Pos;

#else

    /* VariantMerge generated from: '<S7>/AGS2_PosReq' incorporates:
     *  SignalConversion generated from: '<S7>/AGS2_PosReq'
     */
    rtb_LeFSCR_e_AGS2_Pos = CeFSCR_e_Open100;

    /* VariantMerge generated from: '<S7>/AGS2_CalReq' incorporates:
     *  SignalConversion generated from: '<S7>/AGS2_CalReq'
     */
    FSCR_ac_B.LeFSCR_b_AGS2_CalReq = false;

#endif

    /* End of SignalConversion generated from: '<S7>/AGS2_PosReq' */

    /* SignalConversion generated from: '<S7>/AGS_CalReq' incorporates:
     *  SignalConversion generated from: '<S7>/AGS_BoostReq'
     *  SignalConversion generated from: '<S7>/AGS_CalAtmptThrshold'
     *  SignalConversion generated from: '<S7>/AGS_CalSuccess'
     *  SignalConversion generated from: '<S7>/AGS_SleepReq'
     */
#if !Rte_SysCon_Variant_FSCR_FUNC_1

    /* VariantMerge generated from: '<S7>/AGS_CalReq' */
    FSCR_ac_B.LeFSCR_b_AGS_CalReq = false;

    /* VariantMerge generated from: '<S7>/AGS_CalSuccess' */
    FSCR_ac_B.LeFSCR_b_AGS_CalSuccess = false;

    /* VariantMerge generated from: '<S7>/AGS_BoostReq' */
    FSCR_ac_B.LeFSCR_b_AGS_BoostReq = false;

    /* VariantMerge generated from: '<S7>/AGS_SleepReq' */
    FSCR_ac_B.LeFSCR_b_SleepReq = false;

    /* VariantMerge generated from: '<S7>/AGS_CalAtmptThrshold' */
    FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold = false;

#endif

    /* End of SignalConversion generated from: '<S7>/AGS_CalReq' */

    /* SignalConversion generated from: '<S7>/AGS2_CalSuccess' incorporates:
     *  SignalConversion generated from: '<S7>/AGS2_BoostReq'
     *  SignalConversion generated from: '<S7>/AGS2_CalAtmptThrshold'
     *  SignalConversion generated from: '<S7>/AGS2_SleepReq'
     */
#if !Rte_SysCon_Variant_FSCR_FUNC_2

    /* VariantMerge generated from: '<S7>/AGS2_CalSuccess' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess = false;

    /* VariantMerge generated from: '<S7>/AGS2_BoostReq' */
    FSCR_ac_B.LeFSCR_b_AGS2_BoostReq = false;

    /* VariantMerge generated from: '<S7>/AGS2_SleepReq' */
    FSCR_ac_B.LeFSCR_b_SleepReq_b = false;

    /* VariantMerge generated from: '<S7>/AGS2_CalAtmptThrshold' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold = false;

#endif

    /* End of SignalConversion generated from: '<S7>/AGS2_CalSuccess' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/RadFan_DVC'
     */
    /* If: '<S8>/If' incorporates:
     *  Constant: '<S533>/Constant'
     *  RelationalOperator: '<S8>/Comparison3'
     *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
     */
    if (((uint32)FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_o5) ==
            CeTAIR_e_Short_Term_Adjustment)
    {
        /* Outputs for IfAction SubSystem: '<S8>/ChkFanDVC_Limits' incorporates:
         *  ActionPort: '<S532>/ActionPort'
         */
        /* If: '<S532>/If' */
        if (VeFSCR_b_LimCheckingStatus_AD)
        {
            /* Outputs for IfAction SubSystem: '<S532>/ChkPmpLimits' incorporates:
             *  ActionPort: '<S536>/ActionPort'
             */
            /* Logic: '<S536>/Logical3' incorporates:
             *  Constant: '<S538>/Constant'
             *  Constant: '<S539>/Constant'
             *  Logic: '<S536>/Logical1'
             *  RelationalOperator: '<S536>/Comparison1'
             *  RelationalOperator: '<S536>/Comparison2'
             *  RelationalOperator: '<S536>/Comparison3'
             *  RelationalOperator: '<S536>/Comparison4'
             */
            VeFSCF_b_Fan_isLimitCheckOk = ((((((uint32)
                FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                CePMTR_e_DISBL_All_Thrml) && (((uint32)
                FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_da) !=
                CePMTR_e_ENB_Only_Pmps)) && (!FSCR_ac_B.Switch1_m)) &&
                (!VeFSCR_b_InFieldMode_AD));

            /* Merge: '<S532>/Merge' incorporates:
             *  Gain: '<S540>/Gain'
             */
            VeFSCF_b_Fan_DVC_Lim_AM1 = VeFSCF_b_Fan_isLimitCheckOk;

            /* End of Outputs for SubSystem: '<S532>/ChkPmpLimits' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S532>/Check_DVC_Limits' incorporates:
             *  ActionPort: '<S535>/ActionPort'
             */
            /* Merge: '<S532>/Merge' incorporates:
             *  Constant: '<S535>/TRUEConstant'
             *  SignalConversion generated from: '<S535>/True'
             */
            VeFSCF_b_Fan_DVC_Lim_AM1 = true;

            /* End of Outputs for SubSystem: '<S532>/Check_DVC_Limits' */
        }

        /* End of If: '<S532>/If' */

        /* Merge: '<S8>/Merge' incorporates:
         *  Gain: '<S537>/Gain'
         */
        VeFSCF_b_Fan_DVC_Lim_AD = VeFSCF_b_Fan_DVC_Lim_AM1;

        /* End of Outputs for SubSystem: '<S8>/ChkFanDVC_Limits' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S8>/Check_DVC_Action' incorporates:
         *  ActionPort: '<S531>/ActionPort'
         */
        /* Merge: '<S8>/Merge' incorporates:
         *  Constant: '<S531>/Constant12'
         *  SignalConversion generated from: '<S531>/False'
         */
        VeFSCF_b_Fan_DVC_Lim_AD = false;

        /* End of Outputs for SubSystem: '<S8>/Check_DVC_Action' */
    }

    /* End of If: '<S8>/If' */

    /* Switch: '<S534>/Switch' incorporates:
     *  Constant: '<S542>/Calib'
     */
    if (KeFSCF_b_RadFan_DVC_LimSlct)
    {
        /* Switch: '<S534>/Switch' incorporates:
         *  Constant: '<S541>/Calib'
         */
        VeFSCF_b_Fan_DVC_Lim_AD = KeFSCF_b_RadFan_DVC_LimDial;
    }

    /* End of Switch: '<S534>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFSCR_Pct_AGS1_MinAchvblPos' incorporates:
     *  SignalConversion generated from: '<S1>/AGS1_MinAchvblPos'
     */
    (void)Rte_Write_VeFSCR_Pct_AGS1_MinAchvblPos_Value(Switch5);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S464>/Switch1' incorporates:
     *  Constant: '<S495>/Calib'
     */
    if (KeFSCR_b_AGS2_BoostReq_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_BoostReq' incorporates:
         *  Constant: '<S494>/Calib'
         *  SignalConversion generated from: '<S1>/AGS2_BoostReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_BoostReq_Value(KeFSCR_b_AGS2_BoostReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_BoostReq' incorporates:
         *  SignalConversion generated from: '<S1>/AGS2_BoostReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_BoostReq_Value
            (FSCR_ac_B.LeFSCR_b_AGS2_BoostReq);
    }

    /* End of Switch: '<S464>/Switch1' */

    /* Switch: '<S466>/Switch1' incorporates:
     *  Constant: '<S499>/Calib'
     */
    if (KeFSCR_b_AGS2_CalAtmptThrshold_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_CalAtmptThrshold' incorporates:
         *  Constant: '<S498>/Calib'
         *  SignalConversion generated from: '<S1>/AGS2_CalAtmptThrshold_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_CalAtmptThrshold_Value
            (KeFSCR_b_AGS2_CalAtmptThrshold_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_CalAtmptThrshold' incorporates:
         *  SignalConversion generated from: '<S1>/AGS2_CalAtmptThrshold_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_CalAtmptThrshold_Value
            (FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold);
    }

    /* End of Switch: '<S466>/Switch1' */

    /* Switch: '<S459>/Switch1' incorporates:
     *  Constant: '<S485>/Calib'
     */
    if (KeFSCR_b_AGS2_CalReq_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_CalReq' incorporates:
         *  Constant: '<S484>/Calib'
         *  SignalConversion generated from: '<S1>/AGS2_CalReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_CalReq_Value(KeFSCR_b_AGS2_CalReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_CalReq' incorporates:
         *  SignalConversion generated from: '<S1>/AGS2_CalReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_CalReq_Value
            (FSCR_ac_B.LeFSCR_b_AGS2_CalReq);
    }

    /* End of Switch: '<S459>/Switch1' */

    /* Switch: '<S463>/Switch1' incorporates:
     *  Constant: '<S493>/Calib'
     */
    if (KeFSCR_b_AGS2_CalSuccess_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_CalSuccess' incorporates:
         *  Constant: '<S492>/Calib'
         *  SignalConversion generated from: '<S1>/AGS2_CalSuccess_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_CalSuccess_Value
            (KeFSCR_b_AGS2_CalSuccess_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_CalSuccess' incorporates:
         *  SignalConversion generated from: '<S1>/AGS2_CalSuccess_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_CalSuccess_Value
            (FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess);
    }

    /* End of Switch: '<S463>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFSCR_Pct_AGS2_MinAchvblPos' incorporates:
     *  SignalConversion generated from: '<S1>/AGS2_MinAchvblPos'
     */
    (void)Rte_Write_VeFSCR_Pct_AGS2_MinAchvblPos_Value(Switch5_n);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S479>/Switch1' incorporates:
     *  Constant: '<S529>/Calib'
     *  Constant: '<S530>/Calib'
     */
    if (KeFSCR_b_AGS2_PosReq_SD)
    {
        rtb_LeFSCR_e_AGS2_Pos = KeFSCR_e_AGS2_PosReq_D;
    }

    /* Outport: '<Root>/VeFSCR_e_AGS2_PosReq' incorporates:
     *  SignalConversion generated from: '<S1>/AGS2_PosReq_AD'
     *  Switch: '<S479>/Switch1'
     */
    (void)Rte_Write_VeFSCR_e_AGS2_PosReq_Value(rtb_LeFSCR_e_AGS2_Pos);

    /* Switch: '<S468>/Switch1' incorporates:
     *  Constant: '<S502>/Calib'
     *  Constant: '<S503>/Calib'
     */
    if (KeFSCR_b_AGS2_RoutineControl_SD)
    {
        tmp = KeFSCR_e_AGS2_RoutineControl_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/FSCR_Controls' */
        /* RelationalOperator: '<S152>/RelationalOperator' incorporates:
         *  RelationalOperator: '<S152>/RelationalOperator1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         *  Switch: '<S152>/Switch1'
         */
        tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f;

        /* Switch: '<S152>/Switch1' incorporates:
         *  Constant: '<S205>/Constant'
         *  Constant: '<S206>/Constant'
         *  Constant: '<S207>/Constant'
         *  Constant: '<S208>/Constant'
         *  Logic: '<S152>/LogicalOperator'
         *  RelationalOperator: '<S152>/RelationalOperator'
         *  RelationalOperator: '<S152>/RelationalOperator1'
         *  Switch: '<S152>/Switch2'
         */
        if ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_c5) && (((uint32)
                tmp_0) == CeTAIR_e_AGS_NotCalibrated))
        {
            tmp = CeFSCR_e_AGS_Cal_In_Progress;
        }
        else if (((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated)
        {
            /* Switch: '<S152>/Switch2' incorporates:
             *  Constant: '<S204>/Constant'
             */
            tmp = CeFSCR_e_AGS_Cal_Failed;
        }
        else
        {
            tmp = CeFSCR_e_AGS_Cal_Passed;
        }

        /* End of Outputs for SubSystem: '<S1>/FSCR_Controls' */
    }

    /* Outport: '<Root>/VeFSCR_e_AGS2_RoutineControl' incorporates:
     *  SignalConversion generated from: '<S1>/AGS2_RoutineControl_AD'
     *  Switch: '<S468>/Switch1'
     */
    (void)Rte_Write_VeFSCR_e_AGS2_RoutineControl_Value(tmp);

    /* Switch: '<S465>/Switch1' incorporates:
     *  Constant: '<S497>/Calib'
     */
    if (KeFSCR_b_AGS2_SleepReq_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_SleepReq' incorporates:
         *  Constant: '<S496>/Calib'
         *  SignalConversion generated from: '<S1>/AGS2_SleepReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_SleepReq_Value(KeFSCR_b_AGS2_SleepReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS2_SleepReq' incorporates:
         *  SignalConversion generated from: '<S1>/AGS2_SleepReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS2_SleepReq_Value
            (FSCR_ac_B.LeFSCR_b_SleepReq_b);
    }

    /* End of Switch: '<S465>/Switch1' */

    /* Switch: '<S460>/Switch1' incorporates:
     *  Constant: '<S487>/Calib'
     */
    if (KeFSCR_b_AGS_BoostReq_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_BoostReq' incorporates:
         *  Constant: '<S486>/Calib'
         *  SignalConversion generated from: '<S1>/AGS_BoostReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_BoostReq_Value(KeFSCR_b_AGS_BoostReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_BoostReq' incorporates:
         *  SignalConversion generated from: '<S1>/AGS_BoostReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_BoostReq_Value
            (FSCR_ac_B.LeFSCR_b_AGS_BoostReq);
    }

    /* End of Switch: '<S460>/Switch1' */

    /* Switch: '<S462>/Switch1' incorporates:
     *  Constant: '<S491>/Calib'
     */
    if (KeFSCR_b_AGS_CalAtmptThrshold_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_CalAtmptThrshold' incorporates:
         *  Constant: '<S490>/Calib'
         *  SignalConversion generated from: '<S1>/AGS_CalAtmptThrshold_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_CalAtmptThrshold_Value
            (KeFSCR_b_AGS_CalAtmptThrshold_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_CalAtmptThrshold' incorporates:
         *  SignalConversion generated from: '<S1>/AGS_CalAtmptThrshold_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_CalAtmptThrshold_Value
            (FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold);
    }

    /* End of Switch: '<S462>/Switch1' */

    /* Switch: '<S473>/Switch1' incorporates:
     *  Constant: '<S517>/Calib'
     */
    if (KeFSCR_b_AGS_CalReq_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_CalReq' incorporates:
         *  Constant: '<S516>/Calib'
         *  SignalConversion generated from: '<S1>/AGS_CalReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_CalReq_Value(KeFSCR_b_AGS_CalReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_CalReq' incorporates:
         *  SignalConversion generated from: '<S1>/AGS_CalReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_CalReq_Value(FSCR_ac_B.LeFSCR_b_AGS_CalReq);
    }

    /* End of Switch: '<S473>/Switch1' */

    /* Switch: '<S457>/Switch1' incorporates:
     *  Constant: '<S481>/Calib'
     */
    if (KeFSCR_b_AGS_CalSuccess_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_CalSuccess' incorporates:
         *  Constant: '<S480>/Calib'
         *  SignalConversion generated from: '<S1>/AGS_CalSuccess_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_CalSuccess_Value(KeFSCR_b_AGS_CalSuccess_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_CalSuccess' incorporates:
         *  SignalConversion generated from: '<S1>/AGS_CalSuccess_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_CalSuccess_Value
            (FSCR_ac_B.LeFSCR_b_AGS_CalSuccess);
    }

    /* End of Switch: '<S457>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFSCR_e_AGS_PosReq' incorporates:
     *  SignalConversion generated from: '<S1>/AGS_PosReq_AD'
     *  Switch: '<S458>/Switch1'
     */
    (void)Rte_Write_VeFSCR_e_AGS_PosReq_Value(rtb_DataTypeConversion_c);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S467>/Switch1' incorporates:
     *  Constant: '<S500>/Calib'
     *  Constant: '<S501>/Calib'
     */
    if (KeFSCR_b_AGS_RoutineControl_SD)
    {
        tmp = KeFSCR_e_AGS_RoutineControl_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/FSCR_Controls' */
        /* RelationalOperator: '<S54>/RelationalOperator' incorporates:
         *  RelationalOperator: '<S54>/RelationalOperator1'
         *  SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtFSCR_FUNC_MedTEHInport68'
         *  Switch: '<S54>/Switch1'
         */
        tmp_0 = FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45;

        /* Switch: '<S54>/Switch1' incorporates:
         *  Constant: '<S107>/Constant'
         *  Constant: '<S108>/Constant'
         *  Constant: '<S109>/Constant'
         *  Constant: '<S110>/Constant'
         *  Logic: '<S54>/LogicalOperator'
         *  RelationalOperator: '<S54>/RelationalOperator'
         *  RelationalOperator: '<S54>/RelationalOperator1'
         *  Switch: '<S54>/Switch2'
         */
        if ((FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_lyy) && (((uint32)
                tmp_0) == CeTAIR_e_AGS_NotCalibrated))
        {
            tmp = CeFSCR_e_AGS_Cal_In_Progress;
        }
        else if (((uint32)tmp_0) == CeTAIR_e_AGS_NotCalibrated)
        {
            /* Switch: '<S54>/Switch2' incorporates:
             *  Constant: '<S106>/Constant'
             */
            tmp = CeFSCR_e_AGS_Cal_Failed;
        }
        else
        {
            tmp = CeFSCR_e_AGS_Cal_Passed;
        }

        /* End of Outputs for SubSystem: '<S1>/FSCR_Controls' */
    }

    /* Outport: '<Root>/VeFSCR_e_AGS_RoutineControl' incorporates:
     *  SignalConversion generated from: '<S1>/AGS_RoutineControl_AD'
     *  Switch: '<S467>/Switch1'
     */
    (void)Rte_Write_VeFSCR_e_AGS_RoutineControl_Value(tmp);

    /* Switch: '<S461>/Switch1' incorporates:
     *  Constant: '<S489>/Calib'
     */
    if (KeFSCR_b_AGS_SleepReq_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_SleepReq' incorporates:
         *  Constant: '<S488>/Calib'
         *  SignalConversion generated from: '<S1>/AGS_SleepReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_SleepReq_Value(KeFSCR_b_AGS_SleepReq_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_AGS_SleepReq' incorporates:
         *  SignalConversion generated from: '<S1>/AGS_SleepReq_AD'
         */
        (void)Rte_Write_VeFSCR_b_AGS_SleepReq_Value(FSCR_ac_B.LeFSCR_b_SleepReq);
    }

    /* End of Switch: '<S461>/Switch1' */

    /* Switch: '<S476>/Switch1' incorporates:
     *  Constant: '<S524>/Calib'
     */
    if (KeFSCR_b_RadFan_IUMPR_CmdOn_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met' incorporates:
         *  Constant: '<S523>/Calib'
         *  SignalConversion generated from: '<S1>/Fan_IUMPR_CmdOn_AD'
         */
        (void)Rte_Write_VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met_Value
            (KeFSCR_b_RadFan_IUMPR_CmdOn_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met' incorporates:
         *  SignalConversion generated from: '<S1>/Fan_IUMPR_CmdOn_AD'
         */
        (void)Rte_Write_VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met_Value
            (VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met_BD);
    }

    /* End of Switch: '<S476>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFSCR_b_RadFan_FltDtct' incorporates:
     *  SignalConversion generated from: '<S1>/Fan_Shutt_Command__RadFan_Fault'
     */
    (void)Rte_Write_VeFSCR_b_RadFan_FltDtct_Value(FSCR_ac_B.Switch1_m);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S478>/Switch1' incorporates:
     *  Constant: '<S312>/FALSEConstant1'
     *  Constant: '<S325>/Calib'
     *  Constant: '<S326>/Calib'
     *  Constant: '<S527>/Calib'
     *  Constant: '<S528>/Calib'
     *  Logic: '<S312>/Logical1'
     *  Switch: '<S322>/Switch1'
     *  Switch: '<S323>/Switch1'
     *  Switch: '<S324>/Switch1'
     */
    if (KeFSCR_b_HV_Functionalities_Rejected_HdAjar_SD)
    {
        rtb_AND_do = KeFSCR_b_HV_Functionalities_Rejected_HdAjar_D;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/FSCR_Controls' */
        if (KeFSCR_b_FrunkProgram)
        {
            /* Switch: '<S324>/Switch1' incorporates:
             *  Constant: '<S312>/FALSEConstant2'
             */
            rtb_AND_do = false;
        }
        else if ((VeFSCR_b_FlashingFlag_AD) && (KeFSCR_b_FlashingFlagDsblFunc))
        {
            /* Switch: '<S323>/Switch1' incorporates:
             *  Constant: '<S312>/TRUEConstant'
             *  Switch: '<S324>/Switch1'
             */
            rtb_AND_do = true;
        }
        else if (VeFSCR_b_HoodAjar_AD)
        {
            /* Switch: '<S322>/Switch1' incorporates:
             *  Logic: '<S312>/LogicalOperator'
             *  Logic: '<S312>/LogicalOperator1'
             *  Switch: '<S323>/Switch1'
             *  Switch: '<S324>/Switch1'
             */
            rtb_AND_do = ((tmpRead && tmpRead_0) &&
                          (!VeFSCR_b_HoodAjarBatCrit_Flag));
        }
        else
        {
            rtb_AND_do = false;
        }

        /* End of Outputs for SubSystem: '<S1>/FSCR_Controls' */
    }

    /* End of Switch: '<S478>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFSCR_b_HVFuncRejHdAjar' incorporates:
     *  SignalConversion generated from: '<S1>/HVFunctionalitiesRejectedHdAjar_AD'
     */
    (void)Rte_Write_VeFSCR_b_HVFuncRejHdAjar_Value(rtb_AND_do);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S471>/Switch1' incorporates:
     *  Constant: '<S511>/Calib'
     */
    if (KeFSCR_b_HVRadFanCmd_SD)
    {
        /* Outport: '<Root>/VeFSCR_Pct_HVRadFanCMD_AD' incorporates:
         *  Constant: '<S510>/Calib'
         *  SignalConversion generated from: '<S1>/HVRadFanCMD_AD'
         */
        (void)Rte_Write_VeFSCR_Pct_HVRadFanCMD_AD_Value(KeFSCR_Pct_HVRadFanCmd_D);
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/FSCR_Controls' */
        /* Outport: '<Root>/VeFSCR_Pct_HVRadFanCMD_AD' incorporates:
         *  Gain: '<S216>/Gain'
         *  SignalConversion generated from: '<S1>/HVRadFanCMD_AD'
         */
        (void)Rte_Write_VeFSCR_Pct_HVRadFanCMD_AD_Value
            (VeFSCR_Pct_LVRadFan2ActualCmd_BD);

        /* End of Outputs for SubSystem: '<S1>/FSCR_Controls' */
    }

    /* End of Switch: '<S471>/Switch1' */

    /* Switch: '<S474>/Switch1' incorporates:
     *  Constant: '<S519>/Calib'
     */
    if (KeFSCR_b_HoodAjarBatCrit_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_HoodAjarBatCrit' incorporates:
         *  Constant: '<S518>/Calib'
         *  SignalConversion generated from: '<S1>/HoodAjarBatCrit'
         */
        (void)Rte_Write_VeFSCR_b_HoodAjarBatCrit_Value
            (KeFSCR_b_HoodAjarBatCrit_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_HoodAjarBatCrit' incorporates:
         *  SignalConversion generated from: '<S1>/HoodAjarBatCrit'
         */
        (void)Rte_Write_VeFSCR_b_HoodAjarBatCrit_Value
            (VeFSCR_b_HoodAjarBatCrit_Flag);
    }

    /* End of Switch: '<S474>/Switch1' */

    /* Switch: '<S470>/Switch1' incorporates:
     *  Constant: '<S508>/Calib'
     */
    if (KeFSCR_b_LVRadFan2Cmd_SD)
    {
        /* Outport: '<Root>/VeFSCR_Pct_LVRadFan1CMD_AD' incorporates:
         *  Constant: '<S507>/Calib'
         *  SignalConversion generated from: '<S1>/LVRadFan1CMD_AD'
         */
        (void)Rte_Write_VeFSCR_Pct_LVRadFan1CMD_AD_Value
            (KeFSCR_Pct_LVRadFan2Cmd_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_Pct_LVRadFan1CMD_AD' incorporates:
         *  SignalConversion generated from: '<S1>/LVRadFan1CMD_AD'
         */
        (void)Rte_Write_VeFSCR_Pct_LVRadFan1CMD_AD_Value(Merge1);
    }

    /* End of Switch: '<S470>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Outport: '<Root>/VeFSCR_Pct_RadFanCmd' incorporates:
     *  SignalConversion generated from: '<S1>/RadFanCmd_AftDial'
     */
    (void)Rte_Write_VeFSCR_Pct_RadFanCmd_Value(FSCR_ac_B.Gain);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/Fan_Shutt_Command'
     */
    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S521>/Calib'
     */
    if (KeFSCR_b_RadFanEOL_SleepFlag_SD)
    {
        /* Outport: '<Root>/VeFSCR_b_RadFanEOL_SleepFlg' incorporates:
         *  Constant: '<S520>/Calib'
         *  SignalConversion generated from: '<S1>/RadFanEOL_SleepFlag'
         */
        (void)Rte_Write_VeFSCR_b_RadFanEOL_SleepFlg_Value
            (KeFSCR_b_RadFanEOL_SleepFlag_D);
    }
    else
    {
        /* Outport: '<Root>/VeFSCR_b_RadFanEOL_SleepFlg' incorporates:
         *  SignalConversion generated from: '<S1>/RadFanEOL_SleepFlag'
         */
        (void)Rte_Write_VeFSCR_b_RadFanEOL_SleepFlg_Value
            (FSCR_ac_B.VeFSCR_b_EOL_FanSleep_Flag_AS);
    }

    /* End of Switch: '<S475>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/FSCR_FUNC_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, FSCR_CODE) DIDWrite_RadFanTst(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RadFanTst' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RadFanTst_DidWrite'
     */
    /* DataStoreWrite: '<S4>/DataStoreWrite1' incorporates:
     *  Inport: '<Root>/VeDCAB_b_RadFanTst_NotCmplte_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_RadFanTst_NotCmplte_DidWrite_Value
        (&FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte);

    /* DataStoreWrite: '<S4>/DataStoreWrite' incorporates:
     *  Inport: '<Root>/VeDCAB_b_RadFanTst_Failed_DidWrite'
     */
    (void)Rte_Read_VeDCAB_b_RadFanTst_Failed_DidWrite_Value
        (&FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RadFanTst' */
}

/* Output function */
#if Rte_SysCon_Variant_FSCR_FUNC_3

FUNC(void, FSCR_CODE) FSCR_PwrOff(void)
{

#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/FSCR_FUNC_PwrOff' */
    /* Outport: '<Root>/BeFSCR_b_RadFanTst_Failed_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeFSCR_b_RadFanTst_Failed'
     */
    (void)Rte_Write_BeFSCR_b_RadFanTst_Failed_BeFSCR_b_RadFanTst_Failed
        (FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed);

    /* Outport: '<Root>/BeFSCR_b_RadFanTst_NotCmplte_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeFSCR_b_RadFanTst_NotCmplte'
     */
    (void)Rte_Write_BeFSCR_b_RadFanTst_NotCmplte_BeFSCR_b_RadFanTst_NotCmplte
        (FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte);

    /* Outport: '<Root>/EeFSCR_b_HoodAjar_FanOff_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/EeFSCR_b_HoodAjar_FanOff'
     */
    (void)Rte_Write_EeFSCR_b_HoodAjar_FanOff_EeFSCR_b_HoodAjar_FanOff
        (EeFSCR_b_HoodAjar_FanOff);

    /* End of Outputs for SubSystem: '<Root>/FSCR_FUNC_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, FSCR_CODE) FSCR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FSCR_FUNC_PwrOn'
     */
    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/INIT'
     */
    /* SignalConversion generated from: '<S571>/VariantSource1' incorporates:
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S571>/FALSEConstant'
     *  Constant: '<S580>/Calib'
     *  Constant: '<S581>/Calib'
     *  Constant: '<S584>/Calib'
     *  Constant: '<S585>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Calib = KeFSCR_Pct_RadFanCmd_INIT;

    /* VariantMerge generated from: '<S571>/VariantSource1' incorporates:
     *  Constant: '<S581>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_VariantS = FSCR_ac_B.Calib;

#else

    FSCR_ac_B.Calib_n = KeFSCR_Pct_RadFanCmd_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource1' incorporates:
     *  Constant: '<S580>/Calib'
     *  Constant: '<S585>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource1'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_VariantS = FSCR_ac_B.Calib_n;
    FSCR_ac_B.Constant15 = false;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource1' */

    /* SignalConversion generated from: '<S571>/VariantSource2' incorporates:
     *  Constant: '<S571>/Constant'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S598>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Calib_p = false;

    /* VariantMerge generated from: '<S571>/VariantSource2' incorporates:
     *  Constant: '<S587>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_hl = FSCR_ac_B.Calib_p;

#else

    /* VariantMerge generated from: '<S571>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource2'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_hl = FSCR_ac_B.Constant15;
    FSCR_ac_B.Calib_p = KeFSCR_b_RadFanEOL_SleepFlg_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource2' */

    /* SignalConversion generated from: '<S571>/VariantSource3' incorporates:
     *  Constant: '<S571>/Constant1'
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S597>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = KeFSCR_b_RadFanEOL_SleepFlag_INIT;

    /* VariantMerge generated from: '<S571>/VariantSource3' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = FSCR_ac_B.Constant15;
    FSCR_ac_B.Constant15 = false;

#else

    /* VariantMerge generated from: '<S571>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource3'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource3' */

    /* SignalConversion generated from: '<S571>/VariantSource4' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S596>/Calib'
     *  Constant: '<S599>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource4' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_a = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_RadFan_FltDtct_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource4' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S599>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource4'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_a = FSCR_ac_B.Calib_p;
    FSCR_ac_B.Calib_p = KeFSCR_b_DisblFunc_HVFuncRejHdAjar_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource4' */

    /* SignalConversion generated from: '<S571>/VariantSource5' incorporates:
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S571>/Constant2'
     *  Constant: '<S571>/Constant3'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource5' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = FSCR_ac_B.Constant15;
    FSCR_ac_B.Constant15 = false;

#else

    /* VariantMerge generated from: '<S571>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource5'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource5' */

    /* SignalConversion generated from: '<S571>/VariantSource6' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S600>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource6' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_RadFan_IUMPR_CmdOn_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource6' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S600>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource6'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource6' */

    /* SignalConversion generated from: '<S571>/VariantSource7' incorporates:
     *  Constant: '<S572>/Constant'
     *  Constant: '<S573>/Constant'
     *  Constant: '<S601>/Calib'
     *  Constant: '<S603>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    FSCR_ac_B.Constant_e = KeFSCR_e_AGS_PosReq_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource7' incorporates:
     *  Constant: '<S573>/Constant'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_k = FSCR_ac_B.Constant_e;

#else

    FSCR_ac_B.Calib_d = CeFSCR_e_Open100;

    /* VariantMerge generated from: '<S571>/VariantSource7' incorporates:
     *  Constant: '<S572>/Constant'
     *  Constant: '<S601>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource7'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_k = FSCR_ac_B.Calib_d;
    FSCR_ac_B.Constant_e = CeFSCR_e_Open100;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource7' */

    /* SignalConversion generated from: '<S571>/VariantSource8' incorporates:
     *  Constant: '<S601>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    FSCR_ac_B.Calib_d = KeFSCR_e_AGS2_PosReq_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource8' incorporates:
     *  Constant: '<S601>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = FSCR_ac_B.Calib_d;

#else

    /* VariantMerge generated from: '<S571>/VariantSource8' incorporates:
     *  Constant: '<S573>/Constant'
     *  SignalConversion generated from: '<S571>/VariantSource8'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = FSCR_ac_B.Constant_e;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource8' */

    /* SignalConversion generated from: '<S571>/VariantSource9' incorporates:
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S571>/Constant6'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S588>/Calib'
     *  Constant: '<S593>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource9' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_CalReq_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource9' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S593>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource9'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = FSCR_ac_B.Calib_p;
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_CalReq_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource9' */

    /* SignalConversion generated from: '<S571>/VariantSource10' incorporates:
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S571>/Constant7'
     *  Constant: '<S571>/Constant8'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource10' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_iu = FSCR_ac_B.Constant15;
    FSCR_ac_B.Constant15 = false;

#else

    /* VariantMerge generated from: '<S571>/VariantSource10' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource10'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_iu = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource10' */

    /* SignalConversion generated from: '<S571>/VariantSource11' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S591>/Calib'
     *  Constant: '<S594>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource11' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_c = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_CalSuccess_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource11' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S594>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource11'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_c = FSCR_ac_B.Calib_p;
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_BoostReq_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource11' */

    /* SignalConversion generated from: '<S571>/VariantSource12' incorporates:
     *  Constant: '<S571>/Constant10'
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S571>/Constant9'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource12' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ai = FSCR_ac_B.Constant15;
    FSCR_ac_B.Constant15 = false;

#else

    /* VariantMerge generated from: '<S571>/VariantSource12' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource12'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ai = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource12' */

    /* SignalConversion generated from: '<S571>/VariantSource13' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S592>/Calib'
     *  Constant: '<S595>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource13' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_l = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_SleepReq_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource13' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S595>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource13'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_l = FSCR_ac_B.Calib_p;
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_CalAtmptThrshold_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource13' */

    /* SignalConversion generated from: '<S571>/VariantSource14' incorporates:
     *  Constant: '<S571>/Constant11'
     *  Constant: '<S571>/Constant12'
     *  Constant: '<S571>/Constant15'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource14' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ot = FSCR_ac_B.Constant15;
    FSCR_ac_B.Constant15 = false;

#else

    /* VariantMerge generated from: '<S571>/VariantSource14' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource14'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ot = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource14' */

    /* SignalConversion generated from: '<S571>/VariantSource15' incorporates:
     *  Constant: '<S586>/Calib'
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource15' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_e = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_CalSuccess_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource15' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S589>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_e = FSCR_ac_B.Calib_p;
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_BoostReq_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource15' */

    /* SignalConversion generated from: '<S571>/VariantSource16' incorporates:
     *  Constant: '<S571>/Constant13'
     *  Constant: '<S571>/Constant14'
     *  Constant: '<S571>/Constant15'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource16' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gs = FSCR_ac_B.Constant15;
    FSCR_ac_B.Constant15 = false;

#else

    /* VariantMerge generated from: '<S571>/VariantSource16' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource16'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gs = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource16' */

    /* SignalConversion generated from: '<S571>/VariantSource17' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S590>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource17' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_jo = FSCR_ac_B.Constant15;

#else

    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_SleepReq_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource17' incorporates:
     *  Constant: '<S587>/Calib'
     *  Constant: '<S590>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource17'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_jo = FSCR_ac_B.Calib_p;
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_CalAtmptThrshold_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource17' */

    /* SignalConversion generated from: '<S571>/VariantSource18' incorporates:
     *  Constant: '<S571>/Constant15'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Constant15 = false;

    /* VariantMerge generated from: '<S571>/VariantSource18' incorporates:
     *  Constant: '<S571>/Constant15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_h3 = FSCR_ac_B.Constant15;

#else

    /* VariantMerge generated from: '<S571>/VariantSource18' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource18'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_h3 = FSCR_ac_B.Calib_p;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource18' */

    /* SignalConversion generated from: '<S571>/VariantSource19' incorporates:
     *  Constant: '<S574>/Constant'
     *  Constant: '<S575>/Constant'
     *  Constant: '<S602>/Calib'
     *  Constant: '<S604>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    FSCR_ac_B.Constant = KeFSCR_e_AGS_RoutineControl_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource19' incorporates:
     *  Constant: '<S575>/Constant'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_p = FSCR_ac_B.Constant;

#else

    FSCR_ac_B.Calib_i = CeFSCR_e_AGS_Cal_In_Progress;

    /* VariantMerge generated from: '<S571>/VariantSource19' incorporates:
     *  Constant: '<S574>/Constant'
     *  Constant: '<S602>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource19'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_p = FSCR_ac_B.Calib_i;
    FSCR_ac_B.Constant = CeFSCR_e_AGS_Cal_In_Progress;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource19' */

    /* SignalConversion generated from: '<S571>/VariantSource20' incorporates:
     *  Constant: '<S602>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    FSCR_ac_B.Calib_i = KeFSCR_e_AGS2_RoutineControl_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource20' incorporates:
     *  Constant: '<S602>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_p4 = FSCR_ac_B.Calib_i;

#else

    /* VariantMerge generated from: '<S571>/VariantSource20' incorporates:
     *  Constant: '<S575>/Constant'
     *  SignalConversion generated from: '<S571>/VariantSource20'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_p4 = FSCR_ac_B.Constant;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource20' */

    /* SignalConversion generated from: '<S571>/VariantSource21' incorporates:
     *  Constant: '<S576>/Calib'
     *  Constant: '<S577>/Calib'
     *  Constant: '<S579>/Calib'
     *  Constant: '<S580>/Calib'
     *  Constant: '<S581>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Calib_n = KeFSCR_Pct_AGS1_MinAchvblPos_INIT;

    /* VariantMerge generated from: '<S571>/VariantSource21' incorporates:
     *  Constant: '<S580>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_i = FSCR_ac_B.Calib_n;

#else

    FSCR_ac_B.Calib = KeFSCR_Pct_AGS1_MinAchvblPos_NFDial;

    /* VariantMerge generated from: '<S571>/VariantSource21' incorporates:
     *  Constant: '<S577>/Calib'
     *  Constant: '<S581>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource21'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_i = FSCR_ac_B.Calib;
    FSCR_ac_B.Calib = KeFSCR_Pct_AGS2_MinAchvblPos_NFDial;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource21' */

    /* SignalConversion generated from: '<S571>/VariantSource22' incorporates:
     *  Constant: '<S578>/Calib'
     *  Constant: '<S580>/Calib'
     *  Constant: '<S582>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    FSCR_ac_B.Calib_n = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

    /* VariantMerge generated from: '<S571>/VariantSource22' incorporates:
     *  Constant: '<S580>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_j = FSCR_ac_B.Calib_n;

#else

    /* VariantMerge generated from: '<S571>/VariantSource22' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource22'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_j = FSCR_ac_B.Calib;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource22' */

    /* SignalConversion generated from: '<S571>/VariantSource23' incorporates:
     *  Constant: '<S581>/Calib'
     *  Constant: '<S583>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource23' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_h = FSCR_ac_B.Calib_n;

#else

    FSCR_ac_B.Calib = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource23' */

    /* Constant: '<S580>/Calib' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource23'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Constant: '<S580>/Calib' */
    FSCR_ac_B.Calib_n = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#else

    /* VariantMerge generated from: '<S571>/VariantSource23' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource23'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_h = FSCR_ac_B.Calib;

#endif

    /* End of Constant: '<S580>/Calib' */

    /* SignalConversion generated from: '<S571>/VariantSource24' incorporates:
     *  Constant: '<S581>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* VariantMerge generated from: '<S571>/VariantSource24' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_o = FSCR_ac_B.Calib_n;

#else

    FSCR_ac_B.Calib = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

    /* VariantMerge generated from: '<S571>/VariantSource24' incorporates:
     *  Constant: '<S581>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource24'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_o = FSCR_ac_B.Calib;

#endif

    /* End of SignalConversion generated from: '<S571>/VariantSource24' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S570>/EeFSCR_b_HoodAjar_FanOff' incorporates:
     *  Inport: '<Root>/EeFSCR_b_HoodAjar_FanOff_PM_In'
     */
    (void)Rte_Read_EeFSCR_b_HoodAjar_FanOff_Rx_EeFSCR_b_HoodAjar_FanOff
        ((&(EeFSCR_b_HoodAjar_FanOff)));

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */

    /* Inport: '<S570>/BeFSCR_b_RadFanTst_NotCmplte_PM_In' incorporates:
     *  Inport: '<Root>/BeFSCR_b_RadFanTst_NotCmplte_PM_In'
     */
    (void)Rte_Read_BeFSCR_b_RadFanTst_NotCmplte_Rx_BeFSCR_b_RadFanTst_NotCmplte(
        &FSCR_ac_B.BeFSCR_b_RadFanTst_NotCmplte_PM_In);

    /* Inport: '<S570>/BeFSCR_b_RadFanTst_Failed_In' incorporates:
     *  Inport: '<Root>/BeFSCR_b_RadFanTst_Failed_PM_In'
     */
    (void)Rte_Read_BeFSCR_b_RadFanTst_Failed_Rx_BeFSCR_b_RadFanTst_Failed
        (&FSCR_ac_B.BeFSCR_b_RadFanTst_Failed_In);

    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S570>/BeFSCR_b_RadFanTst_NotCmplte' */
    FSCR_ac_DW.BeFSCR_b_RadFanTst_NotCmplte =
        FSCR_ac_B.BeFSCR_b_RadFanTst_NotCmplte_PM_In;

    /* DataStoreWrite: '<S570>/BeFSCR_b_RadFanTst_Failed' */
    FSCR_ac_DW.BeFSCR_b_RadFanTst_Failed =
        FSCR_ac_B.BeFSCR_b_RadFanTst_Failed_In;

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeFSCR_Pct_AGS1_MinAchvblPos' incorporates:
     *  SignalConversion generated from: '<S3>/AGS1_MinAchvblPos_INIT'
     */
    (void)Rte_Write_VeFSCR_Pct_AGS1_MinAchvblPos_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* Outport: '<Root>/VeFSCR_b_AGS2_BoostReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_BoostReq_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS2_BoostReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gs);

    /* Outport: '<Root>/VeFSCR_b_AGS2_CalAtmptThrshold' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_CalAtmptThrshold_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS2_CalAtmptThrshold_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_h3);

    /* Outport: '<Root>/VeFSCR_b_AGS2_CalReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_CalReq_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS2_CalReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_iu);

    /* Outport: '<Root>/VeFSCR_b_AGS2_CalSuccess' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_CalSuccess_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS2_CalSuccess_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_e);

    /* Outport: '<Root>/VeFSCR_Pct_AGS2_MinAchvblPos' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_MinAchvblPos_INIT'
     */
    (void)Rte_Write_VeFSCR_Pct_AGS2_MinAchvblPos_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_j);

    /* Outport: '<Root>/VeFSCR_e_AGS2_PosReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_PosReq_AD'
     *  VariantMerge generated from: '<S571>/VariantSource8'
     */
    (void)Rte_Write_VeFSCR_e_AGS2_PosReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_cr);

    /* Outport: '<Root>/VeFSCR_e_AGS2_RoutineControl' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_RoutineControl_AD'
     *  VariantMerge generated from: '<S571>/VariantSource20'
     */
    (void)Rte_Write_VeFSCR_e_AGS2_RoutineControl_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_p4);

    /* Outport: '<Root>/VeFSCR_b_AGS2_SleepReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS2_SleepReq_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS2_SleepReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_jo);

    /* Outport: '<Root>/VeFSCR_b_AGS_BoostReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_BoostReq_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS_BoostReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ai);

    /* Outport: '<Root>/VeFSCR_b_AGS_CalAtmptThrshold' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_CalAtmptThrshold_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS_CalAtmptThrshold_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ot);

    /* Outport: '<Root>/VeFSCR_b_AGS_CalReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_CalReq_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS_CalReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_j0);

    /* Outport: '<Root>/VeFSCR_b_AGS_CalSuccess' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_CalSuccess_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS_CalSuccess_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_c);

    /* Outport: '<Root>/VeFSCR_e_AGS_PosReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_PosReq_AD'
     *  VariantMerge generated from: '<S571>/VariantSource7'
     */
    (void)Rte_Write_VeFSCR_e_AGS_PosReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_k);

    /* Outport: '<Root>/VeFSCR_e_AGS_RoutineControl' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_RoutineControl_AD'
     *  VariantMerge generated from: '<S571>/VariantSource19'
     */
    (void)Rte_Write_VeFSCR_e_AGS_RoutineControl_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_p);

    /* Outport: '<Root>/VeFSCR_b_AGS_SleepReq' incorporates:
     *  SignalConversion generated from: '<S3>/AGS_SleepReq_AD'
     */
    (void)Rte_Write_VeFSCR_b_AGS_SleepReq_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_l);

    /* Outport: '<Root>/VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met' incorporates:
     *  SignalConversion generated from: '<S3>/Fan_IUMPR_CmdOn'
     */
    (void)Rte_Write_VeFSCR_b_IUMPR_Fan_MinCmdThrshld_Met_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_i0);

    /* Outport: '<Root>/VeFSCR_b_HVFuncRejHdAjar' incorporates:
     *  SignalConversion generated from: '<S3>/HVFuncRejHdAjar'
     */
    (void)Rte_Write_VeFSCR_b_HVFuncRejHdAjar_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gh);

    /* Outport: '<Root>/VeFSCR_Pct_HVRadFanCMD_AD' incorporates:
     *  SignalConversion generated from: '<S3>/HVRadFanCMD_INIT'
     */
    (void)Rte_Write_VeFSCR_Pct_HVRadFanCMD_AD_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_o);

    /* Outport: '<Root>/VeFSCR_b_HoodAjarBatCrit' incorporates:
     *  SignalConversion generated from: '<S3>/HoodAjarBatCrit'
     */
    (void)Rte_Write_VeFSCR_b_HoodAjarBatCrit_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_hl);

    /* Outport: '<Root>/VeFSCR_Pct_LVRadFan1CMD_AD' incorporates:
     *  SignalConversion generated from: '<S3>/LVRadFan1CMD_INIT'
     */
    (void)Rte_Write_VeFSCR_Pct_LVRadFan1CMD_AD_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_h);

    /* Outport: '<Root>/VeFSCR_Pct_RadFanCmd' incorporates:
     *  SignalConversion generated from: '<S3>/RadFanCmd_INIT'
     */
    (void)Rte_Write_VeFSCR_Pct_RadFanCmd_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_VariantS);

    /* Outport: '<Root>/VeFSCR_b_RadFanEOL_SleepFlg' incorporates:
     *  SignalConversion generated from: '<S3>/RadFanEOL_SleepFlag_INIT'
     */
    (void)Rte_Write_VeFSCR_b_RadFanEOL_SleepFlg_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_g);

    /* SignalConversion generated from: '<S3>/RadFanTst_Failed_INIT' incorporates:
     *  SignalConversion generated from: '<S3>/RadFanTst_NotCmplte_INIT'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Outport: '<Root>/VeFSCR_b_RadFanTst_Failed' */
    (void)Rte_Write_VeFSCR_b_RadFanTst_Failed_Value
        (FSCR_ac_B.BeFSCR_b_RadFanTst_Failed_In);

    /* Outport: '<Root>/VeFSCR_b_RadFanTst_NotCmplte' */
    (void)Rte_Write_VeFSCR_b_RadFanTst_NotCmplte_Value
        (FSCR_ac_B.BeFSCR_b_RadFanTst_NotCmplte_PM_In);

#endif

    /* End of SignalConversion generated from: '<S3>/RadFanTst_Failed_INIT' */

    /* Outport: '<Root>/VeFSCR_b_RadFan_FltDtct' incorporates:
     *  SignalConversion generated from: '<S3>/RadFan_FltDtct'
     */
    (void)Rte_Write_VeFSCR_b_RadFan_FltDtct_Value
        (FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_a);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, FSCR_CODE) FSCR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_FSCR_FUNC_3

        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSu_g45 =
            CeTAIR_e_AGS_NotCalibrated;

#endif

#if Rte_SysCon_Variant_FSCR_FUNC_3

        FSCR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_f =
            CeTAIR_e_AGS_NotCalibrated;

#endif

    }

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/FSCR_FUNC_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/INIT'
     */
    /* Start for Constant: '<S584>/Calib' incorporates:
     *  Constant: '<S571>/Constant'
     *  Constant: '<S571>/FALSEConstant'
     *  Constant: '<S585>/Calib'
     *  Constant: '<S598>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S581>/Calib' */
    FSCR_ac_B.Calib = KeFSCR_Pct_RadFanCmd_INIT;

    /* Start for Constant: '<S587>/Calib' */
    FSCR_ac_B.Calib_p = false;

#else

    /* Start for Constant: '<S580>/Calib' incorporates:
     *  Constant: '<S585>/Calib'
     */
    FSCR_ac_B.Calib_n = KeFSCR_Pct_RadFanCmd_NFDial;

    /* Start for Constant: '<S571>/Constant15' incorporates:
     *  Constant: '<S571>/FALSEConstant'
     */
    FSCR_ac_B.Constant15 = false;

    /* Start for Constant: '<S587>/Calib' incorporates:
     *  Constant: '<S598>/Calib'
     */
    FSCR_ac_B.Calib_p = KeFSCR_b_RadFanEOL_SleepFlg_NFDial;

#endif

    /* End of Start for Constant: '<S584>/Calib' */

    /* Start for Constant: '<S597>/Calib' incorporates:
     *  Constant: '<S571>/Constant1'
     *  Constant: '<S571>/Constant2'
     *  Constant: '<S596>/Calib'
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S571>/Constant15' */
    FSCR_ac_B.Constant15 = false;

#else

    /* Start for Constant: '<S587>/Calib' incorporates:
     *  Constant: '<S600>/Calib'
     */
    FSCR_ac_B.Calib_p = KeFSCR_b_RadFan_IUMPR_CmdOn_NFDial;

#endif

    /* End of Start for Constant: '<S597>/Calib' */

    /* Start for Constant: '<S571>/Constant3' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S571>/Constant15' */
    FSCR_ac_B.Constant15 = false;

#endif

    /* End of Start for Constant: '<S571>/Constant3' */

    /* Start for Constant: '<S603>/Calib' incorporates:
     *  Constant: '<S572>/Constant'
     *  Constant: '<S573>/Constant'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* Start for Constant: '<S573>/Constant' */
    FSCR_ac_B.Constant_e = KeFSCR_e_AGS_PosReq_NFDial;

#else

    /* Start for Constant: '<S601>/Calib' incorporates:
     *  Constant: '<S572>/Constant'
     */
    FSCR_ac_B.Calib_d = CeFSCR_e_Open100;

    /* Start for Constant: '<S573>/Constant' */
    FSCR_ac_B.Constant_e = CeFSCR_e_Open100;

#endif

    /* End of Start for Constant: '<S603>/Calib' */

    /* Start for Constant: '<S601>/Calib' */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* Start for Constant: '<S601>/Calib' */
    FSCR_ac_B.Calib_d = KeFSCR_e_AGS2_PosReq_NFDial;

#endif

    /* End of Start for Constant: '<S601>/Calib' */

    /* Start for Constant: '<S571>/Constant6' incorporates:
     *  Constant: '<S571>/Constant7'
     *  Constant: '<S588>/Calib'
     *  Constant: '<S593>/Calib'
     *  Constant: '<S594>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S571>/Constant15' */
    FSCR_ac_B.Constant15 = false;

#else

    /* Start for Constant: '<S587>/Calib' incorporates:
     *  Constant: '<S594>/Calib'
     */
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_CalSuccess_NFDial;

#endif

    /* End of Start for Constant: '<S571>/Constant6' */

    /* Start for Constant: '<S571>/Constant8' incorporates:
     *  Constant: '<S571>/Constant10'
     *  Constant: '<S571>/Constant9'
     *  Constant: '<S591>/Calib'
     *  Constant: '<S592>/Calib'
     *  Constant: '<S595>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S571>/Constant15' */
    FSCR_ac_B.Constant15 = false;

#else

    /* Start for Constant: '<S587>/Calib' incorporates:
     *  Constant: '<S592>/Calib'
     */
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS_CalAtmptThrshold_NFDial;

#endif

    /* End of Start for Constant: '<S571>/Constant8' */

    /* Start for Constant: '<S571>/Constant11' incorporates:
     *  Constant: '<S571>/Constant12'
     *  Constant: '<S571>/Constant13'
     *  Constant: '<S586>/Calib'
     *  Constant: '<S589>/Calib'
     *  Constant: '<S590>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S571>/Constant15' */
    FSCR_ac_B.Constant15 = false;

#else

    /* Start for Constant: '<S587>/Calib' incorporates:
     *  Constant: '<S590>/Calib'
     */
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_SleepReq_NFDial;

#endif

    /* End of Start for Constant: '<S571>/Constant11' */

    /* Start for Constant: '<S571>/Constant14' incorporates:
     *  Constant: '<S571>/Constant15'
     *  Constant: '<S587>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S571>/Constant15' */
    FSCR_ac_B.Constant15 = false;

#else

    /* Start for Constant: '<S587>/Calib' */
    FSCR_ac_B.Calib_p = KeFSCR_b_AGS2_CalAtmptThrshold_NFDial;

#endif

    /* End of Start for Constant: '<S571>/Constant14' */

    /* Start for Constant: '<S604>/Calib' incorporates:
     *  Constant: '<S574>/Constant'
     *  Constant: '<S575>/Constant'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* Start for Constant: '<S575>/Constant' */
    FSCR_ac_B.Constant = KeFSCR_e_AGS_RoutineControl_NFDial;

#else

    /* Start for Constant: '<S602>/Calib' incorporates:
     *  Constant: '<S574>/Constant'
     */
    FSCR_ac_B.Calib_i = CeFSCR_e_AGS_Cal_In_Progress;

    /* Start for Constant: '<S575>/Constant' */
    FSCR_ac_B.Constant = CeFSCR_e_AGS_Cal_In_Progress;

#endif

    /* End of Start for Constant: '<S604>/Calib' */

    /* Start for Constant: '<S602>/Calib' */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* Start for Constant: '<S602>/Calib' */
    FSCR_ac_B.Calib_i = KeFSCR_e_AGS2_RoutineControl_NFDial;

#endif

    /* End of Start for Constant: '<S602>/Calib' */

    /* Start for Constant: '<S576>/Calib' incorporates:
     *  Constant: '<S577>/Calib'
     *  Constant: '<S578>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S580>/Calib' */
    FSCR_ac_B.Calib_n = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#else

    /* Start for Constant: '<S581>/Calib' incorporates:
     *  Constant: '<S577>/Calib'
     */
    FSCR_ac_B.Calib = KeFSCR_Pct_AGS1_MinAchvblPos_NFDial;

#endif

    /* End of Start for Constant: '<S576>/Calib' */

    /* Start for Constant: '<S582>/Calib' incorporates:
     *  Constant: '<S579>/Calib'
     *  Constant: '<S583>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S580>/Calib' */
    FSCR_ac_B.Calib_n = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#else

    /* Start for Constant: '<S581>/Calib' incorporates:
     *  Constant: '<S583>/Calib'
     */
    FSCR_ac_B.Calib = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#endif

    /* End of Start for Constant: '<S582>/Calib' */

    /* Start for Constant: '<S580>/Calib' incorporates:
     *  Constant: '<S581>/Calib'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* Start for Constant: '<S580>/Calib' */
    FSCR_ac_B.Calib_n = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#else

    /* Start for Constant: '<S581>/Calib' */
    FSCR_ac_B.Calib = KeFSCR_Pct_AGS2_MinAchvblPos_INIT;

#endif

    /* End of Start for Constant: '<S580>/Calib' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource2'
     * */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource1' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_VariantS = FSCR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource2' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_hl = FSCR_ac_B.Calib_p;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource1' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource1'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_VariantS = FSCR_ac_B.Calib_n;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource2'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_hl = FSCR_ac_B.Constant15;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource1' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource4'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource3' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = FSCR_ac_B.Constant15;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource4' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_a = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource3'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_g = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource3' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource4'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource5' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource4' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource4'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_a = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource5' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource5'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource6' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource5' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource5'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = FSCR_ac_B.Calib_p;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource6' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource6'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_i0 = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource6' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource7' */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource7' incorporates:
     *  Constant: '<S573>/Constant'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_k = FSCR_ac_B.Constant_e;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource7' incorporates:
     *  Constant: '<S601>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource7'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_k = FSCR_ac_B.Calib_d;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource7' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource8' */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource8' incorporates:
     *  Constant: '<S601>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = FSCR_ac_B.Calib_d;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource8' incorporates:
     *  Constant: '<S573>/Constant'
     *  SignalConversion generated from: '<S571>/VariantSource8'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = FSCR_ac_B.Constant_e;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource8' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource10'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource9' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = FSCR_ac_B.Constant15;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource10' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_iu = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource9' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource9'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_j0 = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource9' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource11' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource10'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource11' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_c = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource10' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource10'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_iu = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource11' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource12' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource11'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource12' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ai = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource11' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource11'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_c = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource12' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource13' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource12'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource13' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_l = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource12' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource12'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ai = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource13' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource14' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource13'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource14' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ot = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource13' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource13'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_l = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource14' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource15' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource14'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource15' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_e = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource14' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource14'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_ot = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource15' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource16' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource15'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource16' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gs = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource15' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource15'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_e = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource16' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource17' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource16'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource17' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_jo = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource16' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource16'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_gs = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource17' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource18' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource17'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource18' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_h3 = FSCR_ac_B.Constant15;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource17' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource17'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_jo = FSCR_ac_B.Calib_p;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource18' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource18'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_h3 = FSCR_ac_B.Calib_p;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource18' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource19' */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource19' incorporates:
     *  Constant: '<S575>/Constant'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_p = FSCR_ac_B.Constant;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource19' incorporates:
     *  Constant: '<S602>/Calib'
     *  SignalConversion generated from: '<S571>/VariantSource19'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_p = FSCR_ac_B.Calib_i;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource19' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource20' */
#if Rte_SysCon_Variant_FSCR_FUNC_4

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource20' incorporates:
     *  Constant: '<S602>/Calib'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_p4 = FSCR_ac_B.Calib_i;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource20' incorporates:
     *  Constant: '<S575>/Constant'
     *  SignalConversion generated from: '<S571>/VariantSource20'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varia_p4 = FSCR_ac_B.Constant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource20' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource21' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource22'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource21' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_i = FSCR_ac_B.Calib_n;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource22' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_j = FSCR_ac_B.Calib_n;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource21' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource21'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_i = FSCR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource21' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource23' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource22'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource23' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_h = FSCR_ac_B.Calib_n;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource22' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource22'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_j = FSCR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource23' */

    /* SystemInitialize for SignalConversion generated from: '<S571>/VariantSource24' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource23'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource24' */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_o = FSCR_ac_B.Calib_n;

#else

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource23' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource23'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_h = FSCR_ac_B.Calib;

    /* SystemInitialize for VariantMerge generated from: '<S571>/VariantSource24' incorporates:
     *  SignalConversion generated from: '<S571>/VariantSource24'
     */
    FSCR_ac_B.VariantMerge_For_Variant_Source_Varian_o = FSCR_ac_B.Calib;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S571>/VariantSource24' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
#if Rte_SysCon_Variant_FSCR_FUNC_3

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/FSCR_FUNC_MedTEH' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/FSCR_Controls'
     */
    /* SystemInitialize for SignalConversion generated from: '<S5>/AGS2_BoostReq' incorporates:
     *  SignalConversion generated from: '<S5>/AGS2_CalAtmptThrshold'
     *  SignalConversion generated from: '<S5>/AGS2_CalReq'
     *  SignalConversion generated from: '<S5>/AGS2_CalSuccess'
     *  SignalConversion generated from: '<S5>/AGS2_SleepReq'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_2

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS2_BoostReq' */
    FSCR_ac_B.LeFSCR_b_AGS2_BoostReq = FSCR_ac_B.LeFSCR_b_AGS2_BoostReq_m;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS2_CalAtmptThrshold' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold =
        FSCR_ac_B.LeFSCR_b_AGS2_CalAtmptThrshold_d;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS2_CalReq' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalReq = FSCR_ac_B.LeFSCR_b_AGS2_CalReq_m;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS2_CalSuccess' */
    FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess = FSCR_ac_B.LeFSCR_b_AGS2_CalSuccess_h;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS2_SleepReq' */
    FSCR_ac_B.LeFSCR_b_SleepReq_b = FSCR_ac_B.LeFSCR_b_SleepReq_a;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S5>/AGS2_BoostReq' */

    /* SystemInitialize for SignalConversion generated from: '<S5>/AGS_BoostReq' incorporates:
     *  SignalConversion generated from: '<S5>/AGS_CalAtmptThrshold'
     *  SignalConversion generated from: '<S5>/AGS_CalReq'
     *  SignalConversion generated from: '<S5>/AGS_CalSuccess'
     *  SignalConversion generated from: '<S5>/AGS_SleepReq'
     */
#if Rte_SysCon_Variant_FSCR_FUNC_1

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS_BoostReq' */
    FSCR_ac_B.LeFSCR_b_AGS_BoostReq = FSCR_ac_B.LeFSCR_b_AGS_BoostReq_b;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS_CalAtmptThrshold' */
    FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold =
        FSCR_ac_B.LeFSCR_b_AGS_CalAtmptThrshold_l;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS_CalReq' */
    FSCR_ac_B.LeFSCR_b_AGS_CalReq = FSCR_ac_B.LeFSCR_b_AGS_CalReq_l;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS_CalSuccess' */
    FSCR_ac_B.LeFSCR_b_AGS_CalSuccess = FSCR_ac_B.LeFSCR_b_AGS_CalSuccess_g;

    /* SystemInitialize for VariantMerge generated from: '<S7>/AGS_SleepReq' */
    FSCR_ac_B.LeFSCR_b_SleepReq = FSCR_ac_B.LeFSCR_b_SleepReq_b2;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S5>/AGS_BoostReq' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/FSCR_FUNC_MedTEH' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

    /* SystemInitialize for Outport: '<Root>/VeFSCR_e_AGS_PosReq' incorporates:
     *  Merge: '<Root>/Merge_18'
     */
    (void)Rte_Write_VeFSCR_e_AGS_PosReq_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeFSCR_e_AGS2_PosReq' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeFSCR_e_AGS2_PosReq_Value(CeFSCR_e_Open100);

    /* SystemInitialize for Outport: '<Root>/VeFSCR_e_AGS_RoutineControl' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeFSCR_e_AGS_RoutineControl_Value
        (CeFSCR_e_AGS_Cal_In_Progress);

    /* SystemInitialize for Outport: '<Root>/VeFSCR_e_AGS2_RoutineControl' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeFSCR_e_AGS2_RoutineControl_Value
        (CeFSCR_e_AGS_Cal_In_Progress);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
