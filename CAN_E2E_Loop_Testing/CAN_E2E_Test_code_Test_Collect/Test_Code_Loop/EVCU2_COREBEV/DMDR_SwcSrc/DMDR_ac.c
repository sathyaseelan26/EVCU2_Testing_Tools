/*
 * File: DMDR_ac.c
 *
 * Code generated for Simulink model 'DMDR_ac'.
 *
 * Model version                  : 9.509
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:24:14 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DMDR_ac.h"
#include "look1_iflf_binlca_16a.h"

/* Named constants for Chart: '<S25>/Drive_Modes1' */
#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Blink_Verify        ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_DecideState         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_DenyHybrid          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_DriveModeActive     ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_ESave               ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_ESave_f             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_EV                  ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_EVBlink             ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_EV_k                ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Eco                 ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_EcoBlink            ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Eco_o               ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_EsaveBlink          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Hybrid              ((uint8)5U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Hybrid_h            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Input_Val           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Input_Val_a         ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Input_Val_ax        ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_NoDrivemode         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_SetDeny             ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_SetDeny_i           ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Sport               ((uint8)6U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_SportBlink          ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld
#define DMDR_ac_IN_Sport_c             ((uint8)3U)
#endif

/* Named constants for Chart: '<S392>/Drive_Modes' */
#if Rte_SysCon_Variant_DMDR_BEVEnbld
#define DMDR_ac_IN_DecisionState       ((uint8)1U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld
#define DMDR_ac_IN_DriveStyle          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld
#define DMDR_ac_IN_Eco_b               ((uint8)3U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld
#define DMDR_ac_IN_Normal              ((uint8)4U)
#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld
#define DMDR_ac_IN_Normal_h            ((uint8)2U)
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
#define START_SEC_CALIB_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_DMDR_BEVEnbld

static volatile CONST(TeDMDR_e_DrvMd, DMDR_VAR_INIT) HaDMDR_e_DrvStylSts_Map[15]
    =
{
    CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode,
    CeDMDR_e_Normal_Mode, CeDMDR_e_Camel_Mode, CeDMDR_e_Normal_Mode,
    CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode,
    CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode,
    CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode, CeDMDR_e_Normal_Mode
};                                     /* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) HeDMDR_b_Enbl_DrvMdInhibit = 1;/* Referenced by:
                                                                      * '<S396>/Calib'
                                                                      * '<S417>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) HeDMDR_b_Enbl_ShipMdDrvMd = 1;/* Referenced by: '<S397>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld || Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) HeDMDR_b_REEVEnbld = 0;/* Referenced by:
                                                                      * '<S364>/Calib'
                                                                      * '<S25>/Drive_Modes1'
                                                                      * '<S75>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) HeDMDR_t_MedTED_dT = 0.02F;/* Referenced by:
                                                                      * '<S36>/Calib'
                                                                      * '<S57>/Calib'
                                                                      * '<S151>/Calib'
                                                                      * '<S120>/Calib'
                                                                      * '<S167>/Calib'
                                                                      * '<S186>/Calib'
                                                                      * '<S200>/Calib'
                                                                      * '<S228>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

static volatile CONST(float32, DMDR_VAR_INIT) HeDMDR_t_MedTEH_dT = 0.1F;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KaDMDR_b_TCaseTrrnMdESaveAllwdRaw
    [30] =
{
    0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S123>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KaDMDR_b_TCaseTrrnMdEVAllwd[30] =
{
    0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S231>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KaDMDR_b_TCaseTrrnMdEVAllwdRaw[30]
    =
{
    0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S232>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KaDMDR_b_TCaseTrrnMdEsaveAllwd[30]
    =
{
    0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S124>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KaDMDR_b_TrnDrvMdCmbAllwdBEV[150] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint8, DMDR_VAR_INIT) KaDMDR_i_DrvMdArbIndex[13] =
{
    0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by:
                                        * '<S400>/Calib'
                                        * '<S42>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint16, DMDR_VAR_INIT) KeDMDR_Cnt_PPDefaultMdOnDelaySample
    = 1U;                              /* Referenced by: '<S66>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Cnt_TargetSOC_BlendInRate =
    0.1F;                              /* Referenced by: '<S304>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Cnt_TargetSOC_BlendOutRate =
    -0.1F;                             /* Referenced by: '<S305>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_P_BattCTMinLimOvrrdVal =
    -200.0F;                           /* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_P_EchrgPwrLngLim = -10.0F;/* Referenced by: '<S134>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_P_EchrgPwrLngLimHyst =
    -0.2F;                             /* Referenced by: '<S135>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_ActualSOCOffsetDefault =
    100.0F;                            /* Referenced by: '<S330>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT)
    KeDMDR_Pct_ActualSOCOffsetESaveAggrMd = 100.0F;/* Referenced by: '<S317>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT)
    KeDMDR_Pct_ActualSOCOffsetESavePassiveMd = 100.0F;/* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_ActualSOCOffsetSportMd =
    100.0F;                            /* Referenced by: '<S333>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_FixedEsvActvTrgtSOC =
    60.0F;                             /* Referenced by:
                                        * '<S76>/Calib'
                                        * '<S318>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_SOCIncrease = 2.0F;/* Referenced by: '<S326>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_SOCTargetMax = 85.0F;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_SOCTargetMin = 26.0F;/* Referenced by: '<S307>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_SOCTargetOvrrdVal =
    80.0F;                             /* Referenced by: '<S308>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_TargetSOCDefault =
    20.0F;                             /* Referenced by: '<S331>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_Pct_TargetSOCSport = 80.0F;/* Referenced by: '<S334>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_AllwEVECMOvrrd = 0;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_AllwEVECMOvrrdVal = 0;/* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_AllwManInESaveActv = 0;/* Referenced by: '<S136>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ArbDrvMdOvrrd = 0;/* Referenced by: '<S43>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_BattCTMinLimOvrrd = 0;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ByPassSportAllwdForHornet
    = 0;                               /* Referenced by: '<S289>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_DNATipHMIEna = 0;/* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_DenyEV = 0;/* Referenced by: '<S156>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_DenyEVMdRemedialStop = 1;/* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld && Rte_SysCon_Variant_DMDR_SportMdNotOnTrrnMd

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_DenySportMdRemedialStop =
    1;                                 /* Referenced by: '<S290>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_DrivabilityRsnOvrrd = 0;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveAllwdOvrrd = 0;/* Referenced by: '<S84>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveAllwdOvrrdVal = 0;/* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveAllwdTerrainOvrrd =
    0;                                 /* Referenced by: '<S125>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveAllwdTerrainOvrrdVal
    = 0;                               /* Referenced by: '<S126>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveDenEVSportMsg = 0;/* Referenced by: '<S109>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveMdDeniedOvrrd = 0;/* Referenced by: '<S44>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveMdDeniedOvrrdVal = 0;/* Referenced by: '<S45>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveRockDenMsg = 1;/* Referenced by: '<S110>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveSandDenMsg = 1;/* Referenced by: '<S111>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveSnowDenMsg = 1;/* Referenced by: '<S112>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ESaveSportDenMsg = 1;/* Referenced by:
                                                                      * '<S113>/Calib'
                                                                      * '<S233>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVAllwdOvrrd = 0;/* Referenced by: '<S157>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVAllwdOvrrdVal = 0;/* Referenced by: '<S158>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVAllwdTerrainOvrrd = 0;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVAllwdTerrainOvrrdVal =
    0;                                 /* Referenced by: '<S235>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVLockDenMsg = 1;/* Referenced by: '<S236>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVManLockDenMsg = 1;/* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVManLowDenMsg = 1;/* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVMdDeniedOvrrd = 0;/* Referenced by: '<S46>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVMdDeniedOvrrdVal = 0;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVModeInhibit2Ovrrd = 0;/* Referenced by: '<S349>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EVModeInhibitOvrrd = 0;/* Referenced by: '<S350>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EnblDrvStylMap = 0;/* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EnblDrvTrrnCmbntn = 0;/* Referenced by: '<S137>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EnblEngOnInEV = 0;/* Referenced by: '<S187>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EnblNwSOCTrgtRst = 0;/* Referenced by: '<S327>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EnblOppositeBattCTPwr = 0;/* Referenced by: '<S351>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_EnblRcvHMISOCRng = 0;/* Referenced by: '<S319>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_GoDirectHybDrvMd = 0;/* Referenced by: '<S283>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_HybDrvMdAllwd = 1;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_HybMdDeniedOvrrd = 0;/* Referenced by: '<S48>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_HybMdDeniedOvrrdVal = 0;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ManualMdAllwInEV = 0;/* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ManualModeOvrrd = 0;/* Referenced by: '<S352>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_ManualModeOvrrdVal = 1;/* Referenced by: '<S353>/Calib' */

#endif

#if !Rte_SysCon_Variant_DMDR_SportMdNotOnTrrnMd && Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_NoSportMd = 1;/* Referenced by: '<S291>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_NoTempEVInbitCheck = 0;/* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_SOCInSportNotDefault = 1;/* Referenced by: '<S309>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_SOCTargetOvrrd = 0;/* Referenced by: '<S310>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld && Rte_SysCon_Variant_DMDR_SportMdNotOnTrrnMd

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_SportInAllLeverPstns = 0;/* Referenced by: '<S292>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_SportMdDeniedOvrrd = 0;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_SportMdDeniedOvrrdVal = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_TCaseStOvrrd = 0;/* Referenced by: '<S354>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_TowHaulVal = 0;/* Referenced by: '<S355>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncOrBEVEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_TrrnMdOvrrd = 0;/* Referenced by: '<S356>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_UseEVEngOnBlnkTimer = 0;/* Referenced by: '<S58>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_UseRemedialStopForDrvMd =
    1;                                 /* Referenced by: '<S284>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(boolean, DMDR_VAR_INIT) KeDMDR_b_UseTargetSOCCalValue = 0;/* Referenced by: '<S311>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint16, DMDR_VAR_INIT) KeDMDR_d_DrivabilityRsnOvrrdVal =
    0U;                                /* Referenced by: '<S357>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint16, DMDR_VAR_INIT) KeDMDR_d_EVModeInhibitDrivability =
    63U;                               /* Referenced by: '<S201>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint16, DMDR_VAR_INIT) KeDMDR_d_EVModeInhibitWOT = 8U;/* Referenced by: '<S202>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint16, DMDR_VAR_INIT) KeDMDR_d_EVModeTempInhibitMtrBLimit
    = 64U;                             /* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(TeDMDR_e_DrvMd, DMDR_VAR_INIT) KeDMDR_e_ArbDrvMdOvrrVal =
    CeDMDR_e_NoDrvMd;                  /* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(TeDMDR_e_DrvMd, DMDR_VAR_INIT) KeDMDR_e_InitDrvMd =
    CeDMDR_e_Hybrid;                   /* Referenced by: '<S67>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(TeTMDR_e_LockLowSt, DMDR_VAR_INIT)
    KeDMDR_e_TCaseStOvrrdVal = CeTMDR_e_Off;/* Referenced by: '<S358>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncOrBEVEnbld

static volatile CONST(TeTMDR_e_TrrnMd, DMDR_VAR_INIT) KeDMDR_e_TrrnMdOvrrdVal =
    CeTMDR_e_Auto;                     /* Referenced by: '<S359>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT)
    KeDMDR_g_ESaveModeTempInhibitMaskVal = 8675328U;/* Referenced by: '<S115>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT)
    KeDMDR_g_ESaveModeTempInhibitMaskVal2 = 1024U;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeInhibit2AcceptVal =
    4294967295U;                       /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeInhibit2OvrrdVal =
    0U;                                /* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeInhibitAcceptVal =
    4260232383U;                       /* Referenced by: '<S204>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeInhibitGraceTime =
    524288U;                           /* Referenced by: '<S205>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeInhibitOvrrdVal = 0U;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT)
    KeDMDR_g_EVModeOptPerInhibit2MaskVal = 1573376U;/* Referenced by: '<S264>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeOptPerInhibitMaskVal
    = 1082130432U;                     /* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeSOCInhibitMaskVal =
    136U;                              /* Referenced by: '<S266>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeTempInhibit2MaskVal =
    4285005311U;                       /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT) KeDMDR_g_EVModeTempInhibitMaskVal =
    2909142071U;                       /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(uint32, DMDR_VAR_INIT)
    KeDMDR_g_EVModeThermalInhibitMaskVal = 268435456U;/* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_EstRng_TrtlMd2_LSP =
    16.0F;                             /* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_EstRng_TrtlMd2_RSP =
    18.0F;                             /* Referenced by: '<S371>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_EstRng_TrtlMd3_LSP = 8.0F;/* Referenced by: '<S372>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_EstRng_TrtlMd3_RSP =
    10.0F;                             /* Referenced by: '<S373>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_EstRng_TrtlMd4_LSP = 0.0F;/* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_EstRng_TrtlMd4_RSP = 2.0F;/* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_TurtleMd_LSP = 24.0F;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_l_TurtleMd_RSP = 30.0F;/* Referenced by: '<S377>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_AccptWtTime = 0.25F;/* Referenced by: '<S59>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_ECMAllwEVSyncDelay = 1.0F;/* Referenced by: '<S168>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_EngOnAllwdWOT = 5.0F;/* Referenced by: '<S206>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_LatchEngMaxTimeRsn = 2.0F;/* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_LatchWOTRsn = 5.0F;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_MaxECMTrnMdSwitchTime =
    1.0F;                              /* Referenced by:
                                        * '<S127>/Calib'
                                        * '<S237>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_MaxEngOnTimeEVMode =
    10.0F;                             /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KeDMDR_t_StayInBlinkState = 5.0F;/* Referenced by:
                                                                      * '<S404>/Calib'
                                                                      * '<S60>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KtDMDR_Pct_DispSOCTarget[11] =
{
    28.0F, 30.0F, 40.0F, 47.0F, 53.0F, 57.0F, 60.0F, 63.0F, 67.0F, 74.0F, 91.2F
} ;                                    /* Referenced by: '<S320>/Vector' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static volatile CONST(float32, DMDR_VAR_INIT) KxDMDR_Pct_DispSOCTarget[11] =
{
    1.0F, 10.0F, 20.0F, 30.0F, 40.0F, 50.0F, 60.0F, 70.0F, 80.0F, 90.0F, 100.0F
} ;                                    /* Referenced by: '<S320>/Vector' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_DMDR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(float32, DMDR_VAR_INIT) VeDMDC_Pct_SOCTarget;/* '<S312>/Switch' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(float32, DMDR_VAR_INIT) VeDMDC_Pct_SOCTargetRaw;/* '<S302>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_BlinkStatePassed;/* '<S25>/Drive_Modes1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ESaveActive;/* '<S80>/Logical1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ESaveAllwd;/* '<S83>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ESaveModeAllwdTrrn;/* '<S87>/Selector1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ESaveModeAllwdTrrnTemp;/* '<S128>/AND' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ESaveNotAllwGen;/* '<S79>/Logical6' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVAllwd;/* '<S155>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVModeAllwdTemp;/* '<S238>/AND' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVModeDenied;/* '<S37>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVNotAvailAccel;/* '<S271>/Gain' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVNotAvailDiag;/* '<S270>/Gain' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVNotAvailSOC;/* '<S149>/Comparison2' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVNotAvailThermal;/* '<S149>/Comparison3' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EVTempNotAvail;/* '<S149>/Logical1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EngOnGraceTimeRsnRaw;/* '<S162>/Logical9' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EngOnInEV;/* '<S160>/Logical' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EngOnInEVFinal;/* '<S190>/AND' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EngOnWOTRsnFinal;/* '<S208>/AND' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_EngOnWOTRsnRaw;/* '<S162>/Logical2' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_GoHyb;/* '<S32>/Logical1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ManLock;/* '<S159>/Logical7' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_ManLow;/* '<S159>/Logical5' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_STRRESaveAllwd;/* '<S86>/Logical2' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_STRREVAllwd;/* '<S162>/Logical1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_STRREVAllwdWoWOT;/* '<S162>/Logical' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_STRREVNotAllwdDrivability;/* '<S162>/Logical4' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_STRREVNotAllwdWOT;/* '<S209>/AND' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_SportAllwd;/* '<S34>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_SportAllwdRaw;
                                 /* '<S34>/SigConvForSigProp_VariantSource_0' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_TempEVInhibitEVAllwd;/* '<S163>/Logical1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_TerrainMdEvAllw;/* '<S229>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_TrrnLock;/* '<S164>/Logical2' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDC_b_TrrnLow;/* '<S164>/Logical3' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(TeDMDR_e_DrvMd, DMDR_VAR_INIT) VeDMDC_e_DrvMdArb_DS;/* '<Root>/DSM_1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(float32, DMDR_VAR_INIT) VeDMDC_t_EngOnBlink;/* '<S152>/Switch' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(float32, DMDR_VAR_INIT) VeDMDI_P_BattCTMinLimOvrrdVal;/* '<S341>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDI_b_ManualMode;/* '<S340>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(TeTMDR_e_LockLowSt, DMDR_VAR_INIT) VeDMDI_e_DTCMPstn;/* '<S339>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncOrBEVEnbld

static VAR(TeTMDR_e_TrrnMd, DMDR_VAR_INIT) VeDMDI_e_TerrainMd;/* '<S338>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint32, DMDR_VAR_INIT) VeDMDI_g_EVModeInhibit;/* '<S343>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint32, DMDR_VAR_INIT) VeDMDI_g_EVModeInhibit2;/* '<S337>/Switch1' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDR_b_TrtlMd2;/* '<S6>/Logical8' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDR_b_TrtlMd3;/* '<S6>/Logical7' */

#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

static VAR(boolean, DMDR_VAR_INIT) VeDMDR_b_TrtlMd4;/* '<S6>/Logical5' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint16, DMDR_VAR_INIT) VeDMDR_d_ECODeniedRsn_DS;/* '<Root>/DSM_7' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint16, DMDR_VAR_INIT) VeDMDR_d_ESaveActvDeniedRsn_DS;/* '<Root>/DSM_3' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint16, DMDR_VAR_INIT) VeDMDR_d_EVDeniedRsn_DS;/* '<Root>/DSM_4' */

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint16, DMDR_VAR_INIT) VeDMDR_d_EVSaveDeniedRsn_DS;/* '<Root>/DSM_5' */

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncEnbld

static VAR(uint16, DMDR_VAR_INIT) VeDMDR_i_DrvMdState;/* '<Root>/DSM_2' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_DMDR
#include "MemMap.h"

CONST(ConstB_DMDR_ac_T, DMDR_VAR_INIT) DMDR_ac_ConstB =
{
    CeTMDR_e_NotDefine,                /* '<S428>/Constant' */
    CePLTR_e_ShipingMode_CUST_MD,      /* '<S427>/Constant' */
    CeDMIR_e_Normal,                   /* '<S429>/Constant' */

#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld

    CeDMDR_e_No_Turtle_Mode            /* '<S422>/Constant' */
#endif
};

#define STOP_SEC_CONST_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

VAR(B_DMDR_ac_T, DMDR_VAR_INIT) DMDR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

VAR(DW_DMDR_ac_T, DMDR_VAR_INIT) DMDR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_DMDR
#include "MemMap.h"

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_enter_internal_EV(const boolean *VeDMIR_b_LatchEV);

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_Sport(const boolean *VeDMIR_b_LatchEV, const boolean
    *Logical3, const TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw);

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_ESave(const boolean *VeDMIR_b_LatchEV, const boolean
    *Logical4, const TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw);

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_EV(const boolean *Logical2, const boolean *Gain_ot, const
                       TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw);

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_Eco(const boolean *VeDMIR_b_LatchEV, const boolean *Logical5,
                        const TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw);

#endif

/* Function for Chart: '<S25>/Drive_Modes1' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_enter_internal_EV(const boolean *VeDMIR_b_LatchEV)
{
    /* Entry Internal 'EV': '<S56>:103' */
    /* Transition: '<S56>:1060' */
    if (*VeDMIR_b_LatchEV)
    {
        /* Transition: '<S56>:1062' */
        DMDR_ac_DW.is_EV = DMDR_ac_IN_EV_k;

        /* Entry 'EV': '<S56>:118' */
        DMDR_ac_B.DrvMdSts_p = CeDMDR_e_EV;
        DMDR_ac_B.DrvMdState_a = 2U;
        DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
        DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
        DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
        DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
    }
    else
    {
        /* Transition: '<S56>:1061' */
        DMDR_ac_DW.is_EV = DMDR_ac_IN_Input_Val_a;

        /* Entry 'Input_Val': '<S56>:1030' */
        DMDR_ac_B.DrvMdState_a = 21U;
        DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
        VeDMDC_b_BlinkStatePassed = false;
    }
}

#endif

/* Function for Chart: '<S25>/Drive_Modes1' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_Sport(const boolean *VeDMIR_b_LatchEV, const boolean
    *Logical3, const TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw)
{
    DMDR_ac_B.DrvMdInt = CeDMDR_e_Sport;

    /* Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
    /* During 'Sport': '<S56>:622' */
    if ((((sint32)(*VeDMIR_e_DrvMdRaw)) != 4) && (((sint32)(*VeDMIR_e_DrvMdRaw))
         != 0))
    {
        /* Transition: '<S56>:914' */
        /* Transition: '<S56>:920' */
        /* Exit Internal 'Sport': '<S56>:622' */
        switch (DMDR_ac_DW.is_Sport)
        {
          case DMDR_ac_IN_SetDeny:
            /* Exit 'SetDeny': '<S56>:1052' */
            DMDR_ac_B.VeDMDR_b_SportModeDenied = true;
            DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case DMDR_ac_IN_SportBlink:
            /* Exit 'SportBlink': '<S56>:641' */
            VeDMDC_b_BlinkStatePassed = true;
            DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_DecideState;

        /* Entry 'DecideState': '<S56>:418' */
        DMDR_ac_B.DrvMdState_a = 5U;
    }
    else
    {
        switch (DMDR_ac_DW.is_Sport)
        {
          case DMDR_ac_IN_Input_Val:
            /* Constant: '<S59>/Calib' */
            /* During 'Input_Val': '<S56>:1042' */
            if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_AccptWtTime) ||
                    (((sint32)DMDR_ac_B.DrvMdSts_p) == 4))
            {
                /* Transition: '<S56>:1046' */
                if (*Logical3)
                {
                    /* Transition: '<S56>:631' */
                    /* Transition: '<S56>:632' */
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_SportBlink;

                    /* Entry 'SportBlink': '<S56>:641' */
                    DMDR_ac_B.DrvMdState_a = 42U;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                }
                else
                {
                    /* Transition: '<S56>:952' */
                    /* Transition: '<S56>:633' */
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_Sport_c;

                    /* Entry 'Sport': '<S56>:642' */
                    DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Sport;
                    DMDR_ac_B.DrvMdState_a = 4U;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
            }

            /* End of Constant: '<S59>/Calib' */
            break;

          case DMDR_ac_IN_SetDeny:
            /* During 'SetDeny': '<S56>:1052' */
            /* Transition: '<S56>:1072' */
            /* Transition: '<S56>:640' */
            /* Sport denied directly to Hybrid */
            /* Transition: '<S56>:822' */
            /* Exit 'SetDeny': '<S56>:1052' */
            DMDR_ac_B.VeDMDR_b_SportModeDenied = true;
            DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
            DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

            /* Entry 'Hybrid': '<S56>:1' */
            DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

            /* Entry Internal 'Hybrid': '<S56>:1' */
            /* Transition: '<S56>:1020' */
            DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

            /* Entry 'Input_Val': '<S56>:1013' */
            DMDR_ac_B.DrvMdState_a = 11U;
            DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
            break;

          case DMDR_ac_IN_Sport_c:
            DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Sport;

            /* During 'Sport': '<S56>:642' */
            if ((VeDMDC_b_GoHyb) || (*Logical3))
            {
                /* Transition: '<S56>:636' */
                DMDR_ac_DW.is_Sport = DMDR_ac_IN_SetDeny;

                /* Entry 'SetDeny': '<S56>:1052' */
                DMDR_ac_B.DrvMdState_a = 43U;
            }
            break;

          default:
            /* Constant: '<S60>/Calib' */
            /* During 'SportBlink': '<S56>:641' */
            if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_StayInBlinkState) ||
                (VeDMDC_b_GoHyb))
            {
                /* Transition: '<S56>:634' */
                /* Transition: '<S56>:638' */
                /* Sport denied */
                switch (DMDR_ac_B.DrvMdSts_p)
                {
                  case 3:
                    /* Transition: '<S56>:827' */
                    /* Exit 'SportBlink': '<S56>:641' */
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_ESave;

                    /* Entry 'ESave': '<S56>:322' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_ESave;

                    /* Entry Internal 'ESave': '<S56>:322' */
                    /* Transition: '<S56>:1036' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_Input_Val_a;

                    /* Entry 'Input_Val': '<S56>:1038' */
                    DMDR_ac_B.DrvMdState_a = 31U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                    break;

                  case 2:
                    /* Transition: '<S56>:826' */
                    /* Transition: '<S56>:672' */
                    /* Exit 'SportBlink': '<S56>:641' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

                    /* Entry 'EV': '<S56>:103' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
                    DMDR_ac_enter_internal_EV(VeDMIR_b_LatchEV);
                    break;

                  default:
                    /* Transition: '<S56>:815' */
                    /* Transition: '<S56>:821' */
                    /* Transition: '<S56>:822' */
                    /* Exit 'SportBlink': '<S56>:641' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

                    /* Entry 'Hybrid': '<S56>:1' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

                    /* Entry Internal 'Hybrid': '<S56>:1' */
                    /* Transition: '<S56>:1020' */
                    DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

                    /* Entry 'Input_Val': '<S56>:1013' */
                    DMDR_ac_B.DrvMdState_a = 11U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    break;
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
                DMDR_ac_B.VeDMDR_b_SportModeDenied = true;
            }

            /* End of Constant: '<S60>/Calib' */
            break;
        }
    }

    /* End of Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
}

#endif

/* Function for Chart: '<S25>/Drive_Modes1' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_ESave(const boolean *VeDMIR_b_LatchEV, const boolean
    *Logical4, const TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw)
{
    sint32 tmp;
    boolean guard1 = false;
    DMDR_ac_B.DrvMdInt = CeDMDR_e_ESave;

    /* Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
    /* During 'ESave': '<S56>:322' */
    if ((((sint32)(*VeDMIR_e_DrvMdRaw)) != 3) && (((sint32)(*VeDMIR_e_DrvMdRaw))
         != 0))
    {
        /* Transition: '<S56>:908' */
        /* Exit Internal 'ESave': '<S56>:322' */
        switch (DMDR_ac_DW.is_ESave)
        {
          case DMDR_ac_IN_EsaveBlink:
            /* Exit 'EsaveBlink': '<S56>:341' */
            VeDMDC_b_BlinkStatePassed = true;
            DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case DMDR_ac_IN_SetDeny_i:
            /* Exit 'SetDeny': '<S56>:1051' */
            DMDR_ac_B.VeDMDR_b_ESaveModeDenied = true;
            DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_DecideState;

        /* Entry 'DecideState': '<S56>:418' */
        DMDR_ac_B.DrvMdState_a = 5U;
    }
    else
    {
        guard1 = false;
        switch (DMDR_ac_DW.is_ESave)
        {
          case DMDR_ac_IN_ESave_f:
            DMDR_ac_B.DrvMdSts_p = CeDMDR_e_ESave;

            /* During 'ESave': '<S56>:342' */
            if ((VeDMDC_b_GoHyb) || (*Logical4))
            {
                /* Transition: '<S56>:333' */
                DMDR_ac_DW.is_ESave = DMDR_ac_IN_SetDeny_i;

                /* Entry 'SetDeny': '<S56>:1051' */
                DMDR_ac_B.DrvMdState_a = 33U;
            }
            break;

          case DMDR_ac_IN_EsaveBlink:
            /* During 'EsaveBlink': '<S56>:341' */
            if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_StayInBlinkState) ||
                (VeDMDC_b_GoHyb))
            {
                /* Transition: '<S56>:332' */
                /* Transition: '<S56>:1109' */
                /* ESave denied */
                tmp = (sint32)DMDR_ac_B.DrvMdSts_p;
                if (tmp == 2)
                {
                    /* Transition: '<S56>:560' */
                    guard1 = true;
                }
                else if (tmp == 4)
                {
                    /* Transition: '<S56>:795' */
                    /* Transition: '<S56>:790' */
                    /* Transition: '<S56>:956' */
                    /* Exit 'EsaveBlink': '<S56>:341' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Sport;

                    /* Entry 'Sport': '<S56>:622' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Sport;

                    /* Entry Internal 'Sport': '<S56>:622' */
                    /* Transition: '<S56>:1043' */
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_Input_Val;

                    /* Entry 'Input_Val': '<S56>:1042' */
                    DMDR_ac_B.DrvMdState_a = 41U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                }
                else if (tmp == 8)
                {
                    /* Transition: '<S56>:1216' */
                    /* Transition: '<S56>:1217' */
                    /* Exit 'EsaveBlink': '<S56>:341' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Eco;

                    /* Entry 'Eco': '<S56>:1116' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Camel_Mode;

                    /* Entry Internal 'Eco': '<S56>:1116' */
                    /* Transition: '<S56>:1122' */
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_Input_Val_a;

                    /* Entry 'Input_Val': '<S56>:1135' */
                    DMDR_ac_B.DrvMdState_a = 80U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                }
                else if (!HeDMDR_b_REEVEnbld)
                {
                    /* Transition: '<S56>:832' */
                    /* Transition: '<S56>:834' */
                    /* Transition: '<S56>:837' */
                    /* Exit 'EsaveBlink': '<S56>:341' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

                    /* Entry 'Hybrid': '<S56>:1' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

                    /* Entry Internal 'Hybrid': '<S56>:1' */
                    /* Transition: '<S56>:1020' */
                    DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

                    /* Entry 'Input_Val': '<S56>:1013' */
                    DMDR_ac_B.DrvMdState_a = 11U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                }
                else
                {
                    /* Transition: '<S56>:1228' */
                    /* Transition: '<S56>:1226' */
                    guard1 = true;
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
                DMDR_ac_B.VeDMDR_b_ESaveModeDenied = true;
            }
            break;

          case DMDR_ac_IN_Input_Val_a:
            /* Constant: '<S59>/Calib' */
            /* During 'Input_Val': '<S56>:1038' */
            if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_AccptWtTime) ||
                    (((sint32)DMDR_ac_B.DrvMdSts_p) == 3))
            {
                /* Transition: '<S56>:1041' */
                if (*Logical4)
                {
                    /* Transition: '<S56>:329' */
                    /* Transition: '<S56>:330' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_EsaveBlink;

                    /* Entry 'EsaveBlink': '<S56>:341' */
                    DMDR_ac_B.DrvMdState_a = 32U;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                }
                else
                {
                    /* Transition: '<S56>:959' */
                    /* Transition: '<S56>:331' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_ESave_f;

                    /* Entry 'ESave': '<S56>:342' */
                    DMDR_ac_B.DrvMdSts_p = CeDMDR_e_ESave;
                    DMDR_ac_B.DrvMdState_a = 3U;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
            }

            /* End of Constant: '<S59>/Calib' */
            break;

          default:
            /* During 'SetDeny': '<S56>:1051' */
            /* Transition: '<S56>:1087' */
            if (HeDMDR_b_REEVEnbld)
            {
                /* Transition: '<S56>:1161' */
                /* Esave denied
                   directly to EV for REEV */
                /* Transition: '<S56>:1167' */
                /* Exit 'SetDeny': '<S56>:1051' */
                DMDR_ac_B.VeDMDR_b_ESaveModeDenied = true;
                DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

                /* Entry 'EV': '<S56>:103' */
                DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
                DMDR_ac_enter_internal_EV(VeDMIR_b_LatchEV);
            }
            else
            {
                /* Transition: '<S56>:338' */
                /* ESave denied directly to Hybrid */
                /* Transition: '<S56>:837' */
                /* Exit 'SetDeny': '<S56>:1051' */
                DMDR_ac_B.VeDMDR_b_ESaveModeDenied = true;
                DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

                /* Entry 'Hybrid': '<S56>:1' */
                DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

                /* Entry Internal 'Hybrid': '<S56>:1' */
                /* Transition: '<S56>:1020' */
                DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

                /* Entry 'Input_Val': '<S56>:1013' */
                DMDR_ac_B.DrvMdState_a = 11U;
                DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
            }
            break;
        }

        if (guard1)
        {
            /* Exit 'EsaveBlink': '<S56>:341' */
            VeDMDC_b_BlinkStatePassed = true;
            DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
            DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

            /* Entry 'EV': '<S56>:103' */
            DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
            DMDR_ac_enter_internal_EV(VeDMIR_b_LatchEV);
        }
    }

    /* End of Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
}

#endif

/* Function for Chart: '<S25>/Drive_Modes1' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_EV(const boolean *Logical2, const boolean *Gain_ot, const
                       TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw)
{
    sint32 tmp;
    boolean guard1 = false;
    boolean guard2 = false;
    DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;

    /* Inport: '<S5>/VeDMIR_e_DrvMdRaw' incorporates:
     *  Inport: '<S5>/VeBACR_e_ChargeSustn'
     */
    /* During 'EV': '<S56>:103' */
    if ((((sint32)(*VeDMIR_e_DrvMdRaw)) != 2) && (((sint32)(*VeDMIR_e_DrvMdRaw))
         != 0))
    {
        /* Transition: '<S56>:887' */
        /* Exit Internal 'EV': '<S56>:103' */
        switch (DMDR_ac_DW.is_EV)
        {
          case DMDR_ac_IN_EVBlink:
            /* Exit 'EVBlink': '<S56>:119' */
            VeDMDC_b_BlinkStatePassed = true;
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case DMDR_ac_IN_SetDeny_i:
            /* Exit 'SetDeny': '<S56>:1049' */
            DMDR_ac_B.VeDMDR_b_EVModeDenied = true;
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_DecideState;

        /* Entry 'DecideState': '<S56>:418' */
        DMDR_ac_B.DrvMdState_a = 5U;
    }
    else if ((HeDMDR_b_REEVEnbld) && (((uint32)DMDR_ac_B.VeBACR_e_ChargeSustn) ==
              CeBACR_e_ChargeSustaining))
    {
        /* Transition: '<S56>:1222' */
        /*  Hybrid for CS */
        /* Exit Internal 'EV': '<S56>:103' */
        switch (DMDR_ac_DW.is_EV)
        {
          case DMDR_ac_IN_EVBlink:
            /* Exit 'EVBlink': '<S56>:119' */
            VeDMDC_b_BlinkStatePassed = true;
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case DMDR_ac_IN_SetDeny_i:
            /* Exit 'SetDeny': '<S56>:1049' */
            DMDR_ac_B.VeDMDR_b_EVModeDenied = true;
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

        /* Entry 'Hybrid': '<S56>:1' */
        DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

        /* Entry Internal 'Hybrid': '<S56>:1' */
        /* Transition: '<S56>:1020' */
        DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

        /* Entry 'Input_Val': '<S56>:1013' */
        DMDR_ac_B.DrvMdState_a = 11U;
        DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
    }
    else
    {
        guard1 = false;
        guard2 = false;
        switch (DMDR_ac_DW.is_EV)
        {
          case DMDR_ac_IN_EV_k:
            DMDR_ac_B.DrvMdSts_p = CeDMDR_e_EV;

            /* During 'EV': '<S56>:118' */
            /*   */
            if ((((VeDMDC_b_GoHyb) || (*Gain_ot)) || (*Logical2)) &&
                    (!HeDMDR_b_REEVEnbld))
            {
                /* Transition: '<S56>:228' */
                DMDR_ac_DW.is_EV = DMDR_ac_IN_SetDeny_i;

                /* Entry 'SetDeny': '<S56>:1049' */
                DMDR_ac_B.DrvMdState_a = 23U;
            }
            break;

          case DMDR_ac_IN_EVBlink:
            /* During 'EVBlink': '<S56>:119' */
            if (((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_StayInBlinkState) ||
                 (VeDMDC_b_GoHyb)) || (*Gain_ot))
            {
                /* Transition: '<S56>:113' */
                /* Transition: '<S56>:232' */
                /* EV denied */
                tmp = (sint32)DMDR_ac_B.DrvMdSts_p;
                if ((((tmp == 3) || (tmp == 4)) || (tmp == 8)) &&
                        (!VeDMDC_b_GoHyb))
                {
                    /* Transition: '<S56>:527' */
                    if (tmp == 4)
                    {
                        /* Transition: '<S56>:773' */
                        /* Transition: '<S56>:787' */
                        /* Transition: '<S56>:790' */
                        /* Transition: '<S56>:956' */
                        /* Exit 'EVBlink': '<S56>:119' */
                        DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Sport;

                        /* Entry 'Sport': '<S56>:622' */
                        DMDR_ac_B.DrvMdInt = CeDMDR_e_Sport;

                        /* Entry Internal 'Sport': '<S56>:622' */
                        /* Transition: '<S56>:1043' */
                        DMDR_ac_DW.is_Sport = DMDR_ac_IN_Input_Val;

                        /* Entry 'Input_Val': '<S56>:1042' */
                        DMDR_ac_B.DrvMdState_a = 41U;
                        DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                        VeDMDC_b_BlinkStatePassed = false;
                    }
                    else if (tmp == 3)
                    {
                        /* Transition: '<S56>:540' */
                        /* Exit 'EVBlink': '<S56>:119' */
                        DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_ESave;

                        /* Entry 'ESave': '<S56>:322' */
                        DMDR_ac_B.DrvMdInt = CeDMDR_e_ESave;

                        /* Entry Internal 'ESave': '<S56>:322' */
                        /* Transition: '<S56>:1036' */
                        DMDR_ac_DW.is_ESave = DMDR_ac_IN_Input_Val_a;

                        /* Entry 'Input_Val': '<S56>:1038' */
                        DMDR_ac_B.DrvMdState_a = 31U;
                        DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                        VeDMDC_b_BlinkStatePassed = false;
                    }
                    else if (((sint32)DMDR_ac_B.DrvMdSts_p) == 8)
                    {
                        /* Transition: '<S56>:1193' */
                        /* Transition: '<S56>:1195' */
                        /* Transition: '<S56>:1197' */
                        /* Exit 'EVBlink': '<S56>:119' */
                        DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Eco;

                        /* Entry 'Eco': '<S56>:1116' */
                        DMDR_ac_B.DrvMdInt = CeDMDR_e_Camel_Mode;

                        /* Entry Internal 'Eco': '<S56>:1116' */
                        /* Transition: '<S56>:1122' */
                        DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_Input_Val_a;

                        /* Entry 'Input_Val': '<S56>:1135' */
                        DMDR_ac_B.DrvMdState_a = 80U;
                        DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                        VeDMDC_b_BlinkStatePassed = false;
                    }
                    else
                    {
                        guard2 = true;
                    }
                }
                else
                {
                    guard2 = true;
                }
            }
            else
            {
                guard1 = true;
            }
            break;

          case DMDR_ac_IN_Input_Val_a:
            /* Constant: '<S59>/Calib' */
            /* During 'Input_Val': '<S56>:1030' */
            if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_AccptWtTime) ||
                    (((sint32)DMDR_ac_B.DrvMdSts_p) == 2))
            {
                /* Transition: '<S56>:1035' */
                if (*Logical2)
                {
                    /* Transition: '<S56>:109' */
                    /* Transition: '<S56>:110' */
                    DMDR_ac_DW.is_EV = DMDR_ac_IN_EVBlink;

                    /* Entry 'EVBlink': '<S56>:119' */
                    DMDR_ac_B.DrvMdState_a = 22U;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                }
                else
                {
                    /* Transition: '<S56>:808' */
                    /* Transition: '<S56>:111' */
                    DMDR_ac_DW.is_EV = DMDR_ac_IN_EV_k;

                    /* Entry 'EV': '<S56>:118' */
                    DMDR_ac_B.DrvMdSts_p = CeDMDR_e_EV;
                    DMDR_ac_B.DrvMdState_a = 2U;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
            }

            /* End of Constant: '<S59>/Calib' */
            break;

          default:
            /* During 'SetDeny': '<S56>:1049' */
            /* Transition: '<S56>:1225' */
            /* Transition: '<S56>:226' */
            /* EV denied directly to Hybrid */
            /* Transition: '<S56>:315' */
            /* Exit 'SetDeny': '<S56>:1049' */
            DMDR_ac_B.VeDMDR_b_EVModeDenied = true;
            DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
            DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

            /* Entry 'Hybrid': '<S56>:1' */
            DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

            /* Entry Internal 'Hybrid': '<S56>:1' */
            /* Transition: '<S56>:1020' */
            DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

            /* Entry 'Input_Val': '<S56>:1013' */
            DMDR_ac_B.DrvMdState_a = 11U;
            DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
            break;
        }

        if (guard2)
        {
            if (!HeDMDR_b_REEVEnbld)
            {
                /* Transition: '<S56>:317' */
                /* Transition: '<S56>:315' */
                /* Exit 'EVBlink': '<S56>:119' */
                VeDMDC_b_BlinkStatePassed = true;
                DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

                /* Entry 'Hybrid': '<S56>:1' */
                DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

                /* Entry Internal 'Hybrid': '<S56>:1' */
                /* Transition: '<S56>:1020' */
                DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

                /* Entry 'Input_Val': '<S56>:1013' */
                DMDR_ac_B.DrvMdState_a = 11U;
                DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
            }
            else
            {
                guard1 = true;
            }
        }

        if (guard1)
        {
            /* Constant: '<S57>/Calib' */
            DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
            DMDR_ac_B.VeDMDR_b_EVModeDenied = true;
        }
    }

    /* End of Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
}

#endif

/* Function for Chart: '<S25>/Drive_Modes1' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

static void DMDR_ac_Eco(const boolean *VeDMIR_b_LatchEV, const boolean *Logical5,
                        const TeDMDR_e_DrvMd *VeDMIR_e_DrvMdRaw)
{
    DMDR_ac_B.DrvMdInt = CeDMDR_e_Camel_Mode;

    /* Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
    /* During 'Eco': '<S56>:1116' */
    if ((((sint32)(*VeDMIR_e_DrvMdRaw)) != 8) && (((sint32)(*VeDMIR_e_DrvMdRaw))
         != 0))
    {
        /* Transition: '<S56>:1160' */
        /* Transition: '<S56>:1159' */
        /* Exit Internal 'Eco': '<S56>:1116' */
        switch (DMDR_ac_DW.is_Eco_b)
        {
          case DMDR_ac_IN_EcoBlink:
            /* Exit 'EcoBlink': '<S56>:1137' */
            VeDMDC_b_BlinkStatePassed = true;
            DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          case DMDR_ac_IN_SetDeny_i:
            /* Exit 'SetDeny': '<S56>:1138' */
            DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = true;
            DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;

          default:
            DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
            break;
        }

        DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_DecideState;

        /* Entry 'DecideState': '<S56>:418' */
        DMDR_ac_B.DrvMdState_a = 5U;
    }
    else
    {
        switch (DMDR_ac_DW.is_Eco_b)
        {
          case DMDR_ac_IN_Eco_o:
            DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Camel_Mode;

            /* During 'Eco': '<S56>:1136' */
            if (*Logical5)
            {
                /* Transition: '<S56>:1128' */
                DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_SetDeny_i;

                /* Entry 'SetDeny': '<S56>:1138' */
                DMDR_ac_B.DrvMdState_a = 82U;
            }
            break;

          case DMDR_ac_IN_EcoBlink:
            /* Constant: '<S60>/Calib' */
            /* During 'EcoBlink': '<S56>:1137' */
            if (DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_StayInBlinkState)
            {
                /* Transition: '<S56>:1129' */
                /* Transition: '<S56>:1131' */
                /* Eco denied to previous
                   selected drive mode */
                if (((sint32)DMDR_ac_B.DrvMdSts_p) == 3)
                {
                    /* Transition: '<S56>:1213' */
                    /* Transition: '<S56>:1214' */
                    /* Transition: '<S56>:1212' */
                    /* Exit 'EcoBlink': '<S56>:1137' */
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_ESave;

                    /* Entry 'ESave': '<S56>:322' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_ESave;

                    /* Entry Internal 'ESave': '<S56>:322' */
                    /* Transition: '<S56>:1036' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_Input_Val_a;

                    /* Entry 'Input_Val': '<S56>:1038' */
                    DMDR_ac_B.DrvMdState_a = 31U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                }
                else
                {
                    /* Transition: '<S56>:1208' */
                    /* Exit 'EcoBlink': '<S56>:1137' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

                    /* Entry 'EV': '<S56>:103' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
                    DMDR_ac_enter_internal_EV(VeDMIR_b_LatchEV);
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
                DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = true;
            }

            /* End of Constant: '<S60>/Calib' */
            break;

          case DMDR_ac_IN_Input_Val_a:
            /* Constant: '<S59>/Calib' */
            /* During 'Input_Val': '<S56>:1135' */
            if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >= KeDMDR_t_AccptWtTime) ||
                    (((sint32)DMDR_ac_B.DrvMdSts_p) == 8))
            {
                /* Transition: '<S56>:1123' */
                if (*Logical5)
                {
                    /* Transition: '<S56>:1124' */
                    /* Transition: '<S56>:1126' */
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_EcoBlink;

                    /* Entry 'EcoBlink': '<S56>:1137' */
                    DMDR_ac_B.DrvMdState_a = 81U;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                }
                else
                {
                    /* Transition: '<S56>:1125' */
                    /* Transition: '<S56>:1127' */
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_Eco_o;

                    /* Entry 'Eco': '<S56>:1136' */
                    DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Camel_Mode;
                    DMDR_ac_B.DrvMdState_a = 8U;
                    DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                    DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                    DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                }
            }
            else
            {
                /* Constant: '<S57>/Calib' */
                DMDR_ac_B.VeDMDR_t_StateTimer_j += HeDMDR_t_MedTED_dT;
            }

            /* End of Constant: '<S59>/Calib' */
            break;

          default:
            /* During 'SetDeny': '<S56>:1138' */
            /* Transition: '<S56>:1132' */
            /* Transition: '<S56>:1134' */
            /* Eco denied directly to Electric for REEV */
            /* Transition: '<S56>:1206' */
            /* Exit 'SetDeny': '<S56>:1138' */
            DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = true;
            DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
            DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

            /* Entry 'EV': '<S56>:103' */
            DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
            DMDR_ac_enter_internal_EV(VeDMIR_b_LatchEV);
            break;
        }
    }

    /* End of Inport: '<S5>/VeDMIR_e_DrvMdRaw' */
}

#endif

/* Model step function for TID1 */
FUNC(void, DMDR_CODE) DMDR_MedTED(void) /* Explicit Task: MedTED */
{
    float32 tmpRead_7;
    uint32 tmpRead_a;
    uint32 tmpRead_b;
    uint16 tmpRead_c;
    TeDMDR_e_DrvMd tmpRead_0;
    TeDMDR_e_EChargetype tmpRead_1;
    TeDMIR_e_DriveStyleSts tmpRead;
    TeENGR_e_EngineMaintenanceSts tmpRead_5;
    TeESSR_e_EngStartStopSt tmpRead_6;
    TePLTR_e_ShipingMode tmpRead_8;
    TeTMDR_e_LockLowSt tmpRead_g;
    TeTMDR_e_TrrnMd tmpRead_e;
    TeTRGR_e_TransRangeState tmpRead_d;
    TeVTXR_e_PowerPanelMd tmpRead_h;
    uint8 tmpRead_f;
    boolean tmpRead_2;
    boolean tmpRead_3;
    boolean tmpRead_4;
    boolean tmpRead_9;

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_AND;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_Logical4_n;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_Logical1_hd;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_DMDC_b_EcoAllwd_n;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_Logical4_l;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_UnitDelay_n;

#endif

    float32 rtb_Merge3;
    float32 rtb_Sum2;
    float32 rtb_Sum3;
    boolean rtb_AND_j3;
    boolean rtb_AND_nz;
    boolean rtb_Logical1_mh;
    boolean rtb_RelationalOperator_e;
    boolean rtb_Switch1_ch;

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeDMDR_e_DrvMd rtb_UnitDelay_gb;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    TeTRGR_e_TransRangeState rtb_VM_Conditional_Signal_VeTRGR_e_Vldtd;

#endif

    boolean Logical2;
    boolean VeDMIR_b_LatchEV;

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Logical3;

#endif

    boolean Logical4;

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean Logical5;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean tmp;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    sint32 rtb_Logical4_c_tmp;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_Logical5_i_tmp;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean rtb_Logical2_o_tmp;

#endif

#if Rte_SysCon_Variant_DMDR_FuncEnbld

    boolean VeDMDC_b_EngOnInEV_tmp;

#endif

    /* Inport: '<Root>/VeSTRR_g_EVModeInhbtRsn' */
    (void)Rte_Read_VeSTRR_g_EVModeInhbtRsn_Value(&tmpRead_a);

    /* Inport: '<S5>/VeDMIR_b_LatchEV' incorporates:
     *  Inport: '<Root>/VeDMIR_b_LatchEV'
     */
    (void)Rte_Read_VeDMIR_b_LatchEV_Value(&VeDMIR_b_LatchEV);

    /* Inport: '<Root>/VeDMIR_e_DrvMdRaw' */
    (void)Rte_Read_VeDMIR_e_DrvMdRaw_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S343>/Switch1' incorporates:
     *  Constant: '<S350>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource'
     * */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_EVModeInhibitOvrrd)
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Constant: '<S361>/Calib'
         */
        VeDMDI_g_EVModeInhibit = KeDMDR_g_EVModeInhibitOvrrdVal;
    }
    else
    {
        /* Switch: '<S343>/Switch1' incorporates:
         *  Inport: '<S5>/VeSTRR_g_EVModeInhibit'
         */
        VeDMDI_g_EVModeInhibit = tmpRead_a;
    }

    /* VariantMerge generated from: '<S5>/VariantSource' incorporates:
     *  Constant: '<S350>/Calib'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS = VeDMDI_g_EVModeInhibit;

#else

    /* VariantMerge generated from: '<S5>/VariantSource' incorporates:
     *  Inport: '<S5>/VeSTRR_g_EVModeInhibit'
     *  SignalConversion generated from: '<S5>/VariantSource'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS = tmpRead_a;

#endif

    /* End of Switch: '<S343>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSTRR_g_EVModeInhbtRsn2' */
    (void)Rte_Read_VeSTRR_g_EVModeInhbtRsn2_Value(&tmpRead_b);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S337>/Switch1' incorporates:
     *  Constant: '<S349>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource1'
     * */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_EVModeInhibit2Ovrrd)
    {
        /* Switch: '<S337>/Switch1' incorporates:
         *  Constant: '<S360>/Calib'
         */
        VeDMDI_g_EVModeInhibit2 = KeDMDR_g_EVModeInhibit2OvrrdVal;
    }
    else
    {
        /* Switch: '<S337>/Switch1' incorporates:
         *  Inport: '<S5>/VeSTRR_g_EVModeInhibit2'
         */
        VeDMDI_g_EVModeInhibit2 = tmpRead_b;
    }

    /* VariantMerge generated from: '<S5>/VariantSource1' incorporates:
     *  Constant: '<S349>/Calib'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_c = VeDMDI_g_EVModeInhibit2;

#else

    /* VariantMerge generated from: '<S5>/VariantSource1' incorporates:
     *  Inport: '<S5>/VeSTRR_g_EVModeInhibit2'
     *  SignalConversion generated from: '<S5>/VariantSource1'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_c = tmpRead_b;

#endif

    /* End of Switch: '<S337>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTMDR_e_TrrnMd' */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value(&tmpRead_e);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S338>/Switch1' incorporates:
     *  Constant: '<S356>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource5'
     * */
#if Rte_SysCon_Variant_DMDR_FuncOrBEVEnbld

    if (KeDMDR_b_TrrnMdOvrrd)
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Constant: '<S359>/Calib'
         */
        VeDMDI_e_TerrainMd = KeDMDR_e_TrrnMdOvrrdVal;
    }
    else
    {
        /* Switch: '<S338>/Switch1' incorporates:
         *  Inport: '<Root>/VeTMDR_e_TrrnMd'
         *  Inport: '<S5>/VeTMDR_e_TrrnMd'
         */
        VeDMDI_e_TerrainMd = tmpRead_e;
    }

    /* RelationalOperator: '<S30>/Relational Operator' incorporates:
     *  Constant: '<S356>/Calib'
     *  Switch: '<S338>/Switch1'
     *  VariantMerge generated from: '<S5>/VariantSource5'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = VeDMDI_e_TerrainMd;

#else

    /* RelationalOperator: '<S30>/Relational Operator' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     *  Inport: '<S5>/VeTMDR_e_TrrnMd'
     *  SignalConversion generated from: '<S5>/VariantSource5'
     *  VariantMerge generated from: '<S5>/VariantSource5'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh = tmpRead_e;

#endif

    /* End of Switch: '<S338>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTMDR_e_LockLowSt' */
    (void)Rte_Read_VeTMDR_e_LockLowSt_Value(&tmpRead_g);

    /* Inport: '<Root>/VeTMDR_i_TrueTrrnMd' */
    (void)Rte_Read_VeTMDR_i_TrueTrrnMd_Value(&tmpRead_f);

    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_d);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S339>/Switch1' incorporates:
     *  Constant: '<S354>/Calib'
     *  Constant: '<S355>/Calib'
     *  Constant: '<S5>/FALSE Constant'
     *  SignalConversion generated from: '<S5>/VariantSource2'
     *  SignalConversion generated from: '<S5>/VariantSource6'
     * */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_TCaseStOvrrd)
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Constant: '<S358>/Calib'
         */
        VeDMDI_e_DTCMPstn = KeDMDR_e_TCaseStOvrrdVal;
    }
    else
    {
        /* Switch: '<S339>/Switch1' incorporates:
         *  Inport: '<Root>/VeTMDR_e_LockLowSt'
         *  Inport: '<S5>/VeTMDR_e_LockLowSt'
         */
        VeDMDI_e_DTCMPstn = tmpRead_g;
    }

    /* Selector: '<S164>/Selector2' incorporates:
     *  Constant: '<S354>/Calib'
     *  Switch: '<S339>/Switch1'
     *  VariantMerge generated from: '<S5>/VariantSource6'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i = VeDMDI_e_DTCMPstn;

    /* VariantMerge generated from: '<S5>/VariantSource2' */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_h = KeDMDR_b_TowHaulVal;

#else

    /* Selector: '<S164>/Selector2' incorporates:
     *  Inport: '<Root>/VeTMDR_e_LockLowSt'
     *  Inport: '<S5>/VeTMDR_e_LockLowSt'
     *  SignalConversion generated from: '<S5>/VariantSource6'
     *  VariantMerge generated from: '<S5>/VariantSource6'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i = tmpRead_g;
    DMDR_ac_B.FALSEConstant = false;

    /* VariantMerge generated from: '<S5>/VariantSource2' incorporates:
     *  Constant: '<S5>/FALSE Constant'
     *  SignalConversion generated from: '<S5>/VariantSource2'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_h = DMDR_ac_B.FALSEConstant;

#endif

    /* End of Switch: '<S339>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeSTRR_d_DrvbltyRsn' */
    (void)Rte_Read_VeSTRR_d_DrvbltyRsn_Value(&tmpRead_c);

    /* Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC_Arb' */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Arb_Value(&rtb_Sum3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S336>/Switch1' incorporates:
     *  Constant: '<S348>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource3'
     */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_DrivabilityRsnOvrrd)
    {
        /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
         *  Constant: '<S357>/Calib'
         */
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_g =
            KeDMDR_d_DrivabilityRsnOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
         *  Inport: '<S5>/VeSTRR_d_DrvbltyRsn'
         */
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_g = tmpRead_c;
    }

#else

    /* VariantMerge generated from: '<S5>/VariantSource3' incorporates:
     *  Inport: '<S5>/VeSTRR_d_DrvbltyRsn'
     *  SignalConversion generated from: '<S5>/VariantSource3'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_g = tmpRead_c;

#endif

    /* End of Switch: '<S336>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeENGR_b_AllwEVECM' */
    (void)Rte_Read_VeENGR_b_AllwEVECM_Value(&tmpRead_3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S335>/Switch1' incorporates:
     *  Constant: '<S345>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource4'
     */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_AllwEVECMOvrrd)
    {
        /* VariantMerge generated from: '<S5>/VariantSource4' incorporates:
         *  Constant: '<S346>/Calib'
         */
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_a =
            KeDMDR_b_AllwEVECMOvrrdVal;
    }
    else
    {
        /* VariantMerge generated from: '<S5>/VariantSource4' incorporates:
         *  Inport: '<S5>/VeENGR_b_AllwEVECM'
         */
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_a = tmpRead_3;
    }

#else

    /* VariantMerge generated from: '<S5>/VariantSource4' incorporates:
     *  Inport: '<S5>/VeENGR_b_AllwEVECM'
     *  SignalConversion generated from: '<S5>/VariantSource4'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_a = tmpRead_3;

#endif

    /* End of Switch: '<S335>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeTRGR_b_ManualMode' */
    (void)Rte_Read_VeTRGR_b_ManualMode_Value(&rtb_AND_nz);

    /* Inport: '<Root>/VeSTRR_b_RemedialStop' */
    (void)Rte_Read_VeSTRR_b_RemedialStop_Value(&rtb_Switch1_ch);

    /* Inport: '<Root>/VeSRAR_b_Inhibit_DriveMode' */
    (void)Rte_Read_VeSRAR_b_Inhibit_DriveMode_Value(&tmpRead_9);

    /* Inport: '<Root>/VeESSR_e_EngStartStopSt' */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_6);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S352>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource7'
     * */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_ManualModeOvrrd)
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S353>/Calib'
         */
        VeDMDI_b_ManualMode = KeDMDR_b_ManualModeOvrrdVal;
    }
    else
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Inport: '<S5>/VeTRGR_b_ManualMode'
         */
        VeDMDI_b_ManualMode = rtb_AND_nz;
    }

    /* VariantMerge generated from: '<S5>/VariantSource7' incorporates:
     *  Constant: '<S352>/Calib'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k = VeDMDI_b_ManualMode;

#else

    /* VariantMerge generated from: '<S5>/VariantSource7' incorporates:
     *  Inport: '<S5>/VeTRGR_b_ManualMode'
     *  SignalConversion generated from: '<S5>/VariantSource7'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k = rtb_AND_nz;

#endif

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeBPCR_P_TracBat_EChrgPowLongMod' */
    (void)Rte_Read_VeBPCR_P_TracBat_EChrgPowLongMod_Value(&rtb_Merge3);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Switch: '<S341>/Switch1' incorporates:
     *  Constant: '<S347>/Calib'
     *  Constant: '<S351>/Calib'
     *  SignalConversion generated from: '<S5>/VariantSource8'
     *  Switch: '<S342>/Switch1'
     * */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    if (KeDMDR_b_BattCTMinLimOvrrd)
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Constant: '<S344>/Calib'
         */
        VeDMDI_P_BattCTMinLimOvrrdVal = KeDMDR_P_BattCTMinLimOvrrdVal;
    }
    else if (KeDMDR_b_EnblOppositeBattCTPwr)
    {
        /* Switch: '<S342>/Switch1' incorporates:
         *  Gain: '<S5>/Gain'
         *  Inport: '<S5>/VeBPCR_P_TracBat_EChrgPowLongMod'
         *  Switch: '<S341>/Switch1'
         */
        VeDMDI_P_BattCTMinLimOvrrdVal = -rtb_Merge3;
    }
    else
    {
        /* Switch: '<S341>/Switch1' incorporates:
         *  Inport: '<S5>/VeBPCR_P_TracBat_EChrgPowLongMod'
         */
        VeDMDI_P_BattCTMinLimOvrrdVal = rtb_Merge3;
    }

    /* VariantMerge generated from: '<S5>/VariantSource8' incorporates:
     *  Constant: '<S347>/Calib'
     *  Constant: '<S351>/Calib'
     *  Switch: '<S342>/Switch1'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_cr =
        VeDMDI_P_BattCTMinLimOvrrdVal;

#else

    /* VariantMerge generated from: '<S5>/VariantSource8' incorporates:
     *  Inport: '<S5>/VeBPCR_P_TracBat_EChrgPowLongMod'
     *  SignalConversion generated from: '<S5>/VariantSource8'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_cr = rtb_Merge3;

#endif

    /* End of Switch: '<S341>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeVTXR_e_PowerPanelMd' */
    (void)Rte_Read_VeVTXR_e_PowerPanelMd_Value(&tmpRead_h);

    /* Inport: '<Root>/VePLTR_e_ShippingMode' */
    (void)Rte_Read_VePLTR_e_ShippingMode_Value(&tmpRead_8);

    /* Inport: '<Root>/VeOSMR_b_TempEVDrvMdInhibit' */
    (void)Rte_Read_VeOSMR_b_TempEVDrvMdInhibit_Value(&Logical2);

    /* Inport: '<Root>/VeHMIR_b_DriveReady' */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value(&rtb_RelationalOperator_e);

    /* Inport: '<Root>/VeERER_l_EstRange' */
    (void)Rte_Read_VeERER_l_EstRange_Value(&tmpRead_7);

    /* Inport: '<Root>/VeENGR_e_EngineMaintenanceSts' */
    (void)Rte_Read_VeENGR_e_EngineMaintenanceSts_Value(&tmpRead_5);

    /* Inport: '<Root>/VeENGR_b_EngSysLowFuel' */
    (void)Rte_Read_VeENGR_b_EngSysLowFuel_Value(&tmpRead_4);

    /* Inport: '<Root>/VeDMIR_b_DenyESave_TonaleDiag' */
    (void)Rte_Read_VeDMIR_b_DenyESave_TonaleDiag_Value(&Logical4);

    /* Inport: '<Root>/VeDMIR_b_CommFaultESave' */
    (void)Rte_Read_VeDMIR_b_CommFaultESave_Value(&rtb_Logical1_mh);

    /* Inport: '<Root>/VeDMIR_b_CommFault' */
    (void)Rte_Read_VeDMIR_b_CommFault_Value(&tmpRead_2);

    /* Inport: '<Root>/VeDMIR_b_DrvMdNotAvailDiag' */
    (void)Rte_Read_VeDMIR_b_DrvMdNotAvailDiag_Value(&rtb_AND_j3);

    /* Inport: '<Root>/VeDMIR_Pct_HV_BatSOCTarget' */
    (void)Rte_Read_VeDMIR_Pct_HV_BatSOCTarget_Value(&rtb_Sum2);

    /* Inport: '<Root>/VeDMIR_e_EChargeType' */
    (void)Rte_Read_VeDMIR_e_EChargeType_Value(&tmpRead_1);

    /* Inport: '<Root>/VeDMIR_e_DriveStyleSts' */
    (void)Rte_Read_VeDMIR_e_DriveStyleSts_Value(&tmpRead);

    /* Inport: '<S5>/VeBACR_e_ChargeSustn' incorporates:
     *  Inport: '<Root>/VeBACR_e_ChargeSustn'
     */
    (void)Rte_Read_VeBACR_e_ChargeSustn_Value(&DMDR_ac_B.VeBACR_e_ChargeSustn);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    /* S-Function (fcgen): '<S1>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S1>/DMDC_FUNC' */
    /* UnitDelay: '<S13>/Unit Delay' */
    rtb_UnitDelay_gb = DMDR_ac_DW.UnitDelay_DSTATE_a;

    /* Logic: '<S162>/Logical2' incorporates:
     *  Constant: '<S162>/Constant Value3'
     *  Constant: '<S198>/Constant'
     *  Constant: '<S202>/Calib'
     *  RelationalOperator: '<S162>/Comparison2'
     *  RelationalOperator: '<S162>/Comparison4'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator2'
     */
    VeDMDC_b_EngOnWOTRsnRaw = ((((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) ==
        CeDMDR_e_EV) && ((((sint32)
                           DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_g) &
                          ((sint32)KeDMDR_d_EVModeInhibitWOT)) >= 1));

    /* Logic: '<S162>/Logical4' incorporates:
     *  Constant: '<S201>/Calib'
     *  Logic: '<S162>/Logical3'
     *  RelationalOperator: '<S162>/Comparison3'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator3'
     */
    VeDMDC_b_STRREVNotAllwdDrivability = (((((sint32)
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_g) & ((sint32)
        KeDMDR_d_EVModeInhibitDrivability)) >= 1) && (!VeDMDC_b_EngOnWOTRsnRaw));

    /* Logic: '<S162>/Logical' incorporates:
     *  Constant: '<S162>/Constant Value'
     *  Constant: '<S162>/Constant Value1'
     *  Constant: '<S203>/Calib'
     *  Constant: '<S204>/Calib'
     *  RelationalOperator: '<S162>/Comparison'
     *  RelationalOperator: '<S162>/Comparison1'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator1'
     */
    VeDMDC_b_STRREVAllwdWoWOT =
        ((((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
            KeDMDR_g_EVModeInhibitAcceptVal) >= 1U) ||
          ((DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_c &
            KeDMDR_g_EVModeInhibit2AcceptVal) >= 1U)) ||
         (VeDMDC_b_STRREVNotAllwdDrivability));

    /* Logic: '<S162>/Logical5' incorporates:
     *  Logic: '<S162>/Logical7'
     */
    Logical5 = !VeDMDC_b_STRREVAllwdWoWOT;

    /* Logic: '<S162>/Logical1' incorporates:
     *  Logic: '<S162>/Logical5'
     *  UnitDelay: '<S162>/Unit Delay'
     */
    VeDMDC_b_STRREVAllwd = (Logical5 && (!DMDR_ac_DW.UnitDelay_DSTATE_d5));

    /* Outputs for Atomic SubSystem: '<S154>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S169>/EdgeFalling' */
    /* UnitDelay: '<S296>/Unit Delay' incorporates:
     *  UnitDelay: '<S170>/Unit Delay'
     */
    rtb_UnitDelay_n = DMDR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S170>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_p =
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_a;

    /* Logic: '<S170>/OR1' incorporates:
     *  Logic: '<S149>/NOT'
     *  Logic: '<S149>/NOT1'
     *  Logic: '<S149>/NOT2'
     */
    tmpRead_3 = !DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_a;

    /* Switch: '<S169>/Switch' incorporates:
     *  Constant: '<S167>/Calib'
     *  Constant: '<S168>/Calib'
     *  Constant: '<S169>/Constant Value1'
     *  Logic: '<S170>/AND'
     *  Logic: '<S170>/OR1'
     *  MinMax: '<S169>/Minimum'
     *  Sum: '<S169>/Summation'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    if (tmpRead_3 && rtb_UnitDelay_n)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_ba = KeDMDR_t_ECMAllwEVSyncDelay;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_ba = fmaxf(DMDR_ac_DW.UnitDelay_DSTATE_ba -
            HeDMDR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S169>/Switch' */
    /* End of Outputs for SubSystem: '<S169>/EdgeFalling' */

    /* Logic: '<S154>/AND' incorporates:
     *  Constant: '<S166>/Constant'
     *  Constant: '<S169>/Constant Value2'
     *  DataStoreRead: '<S154>/DSRead11'
     *  Logic: '<S169>/AND'
     *  RelationalOperator: '<S166>/Compare'
     *  RelationalOperator: '<S169>/Greater  Than'
     *  S-Function (sfix_bitop): '<S154>/Bitwise AND'
     *  UnitDelay: '<S169>/Unit Delay'
     */
    rtb_AND = (((DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_a) ||
                (DMDR_ac_DW.UnitDelay_DSTATE_ba > 0.0F)) && ((((uint32)
                  VeDMDR_d_EVDeniedRsn_DS) & 3584U) == 0U));

    /* End of Outputs for SubSystem: '<S154>/Turn Off Delay Time' */

    /* Logic: '<S165>/Logical2' incorporates:
     *  Logic: '<S79>/Logical2'
     */
    rtb_Logical2_o_tmp = !DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_h;

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Selector: '<S164>/Selector2' incorporates:
     *  Constant: '<S123>/Calib'
     *  Constant: '<S124>/Calib'
     *  Constant: '<S231>/Calib'
     *  Constant: '<S232>/Calib'
     *  DataTypeConversion: '<S164>/Data Type Conversion3'
     *  Inport: '<S5>/VeTMDR_i_TrueTrrnMd'
     *  Selector: '<S164>/Selector1'
     *  Selector: '<S87>/Selector1'
     *  Selector: '<S87>/Selector3'
     *  Switch: '<S229>/Switch1'
     *  Switch: '<S230>/Switch1'
     */
    rtb_Logical4_c_tmp = (3 * ((sint32)tmpRead_f)) + ((sint32)
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i);

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Logic: '<S164>/Logical4' incorporates:
     *  Constant: '<S227>/Constant'
     *  Constant: '<S232>/Calib'
     *  RelationalOperator: '<S164>/Comparison8'
     *  Selector: '<S164>/Selector2'
     */
    rtb_Logical4_n = ((((uint32)tmpRead_0) == CeDMDR_e_EV) &&
                      (KaDMDR_b_TCaseTrrnMdEVAllwdRaw[(rtb_Logical4_c_tmp)]));

    /* Outputs for Atomic SubSystem: '<S164>/EdgeRising' */
    /* Logic: '<S219>/AND' incorporates:
     *  Logic: '<S219>/OR1'
     *  UnitDelay: '<S219>/Unit Delay'
     */
    rtb_AND_nz = (rtb_Logical4_n && (!DMDR_ac_DW.UnitDelay_DSTATE_i));

    /* Update for UnitDelay: '<S219>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_i = rtb_Logical4_n;

    /* End of Outputs for SubSystem: '<S164>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S164>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S238>/EdgeFalling' */
    /* Logic: '<S239>/AND' incorporates:
     *  Logic: '<S239>/OR1'
     *  UnitDelay: '<S239>/Unit Delay'
     */
    rtb_Logical4_n = ((!rtb_AND_nz) && (DMDR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S239>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_m = rtb_AND_nz;

    /* End of Outputs for SubSystem: '<S238>/EdgeFalling' */

    /* Switch: '<S238>/Switch' incorporates:
     *  Constant: '<S228>/Calib'
     *  Constant: '<S237>/Calib'
     *  Constant: '<S238>/Constant Value1'
     *  MinMax: '<S238>/Minimum'
     *  Sum: '<S238>/Summation'
     *  UnitDelay: '<S238>/Unit Delay'
     */
    if (rtb_Logical4_n)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_h = KeDMDR_t_MaxECMTrnMdSwitchTime;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_h = fmaxf(DMDR_ac_DW.UnitDelay_DSTATE_h -
            HeDMDR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S238>/Switch' */

    /* Logic: '<S238>/AND' incorporates:
     *  Constant: '<S238>/Constant Value2'
     *  RelationalOperator: '<S238>/Greater  Than'
     *  UnitDelay: '<S238>/Unit Delay'
     */
    VeDMDC_b_EVModeAllwdTemp = (rtb_AND_nz || (DMDR_ac_DW.UnitDelay_DSTATE_h >
        0.0F));

    /* End of Outputs for SubSystem: '<S164>/TurnOffDelayTime' */

    /* Switch: '<S229>/Switch1' incorporates:
     *  Constant: '<S234>/Calib'
     *  Switch: '<S230>/Switch1'
     */
    if (KeDMDR_b_EVAllwdTerrainOvrrd)
    {
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S235>/Calib'
         */
        VeDMDC_b_TerrainMdEvAllw = KeDMDR_b_EVAllwdTerrainOvrrdVal;
    }
    else if (VeDMDC_b_EVModeAllwdTemp)
    {
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S164>/TRUE Constant'
         *  Switch: '<S230>/Switch1'
         */
        VeDMDC_b_TerrainMdEvAllw = true;
    }
    else
    {
        /* Switch: '<S229>/Switch1' incorporates:
         *  Constant: '<S231>/Calib'
         *  Selector: '<S164>/Selector1'
         *  Switch: '<S230>/Switch1'
         */
        VeDMDC_b_TerrainMdEvAllw = KaDMDR_b_TCaseTrrnMdEVAllwd
            [(rtb_Logical4_c_tmp)];
    }

    /* Logic: '<S148>/Logical1' incorporates:
     *  Constant: '<S156>/Calib'
     */
    rtb_Logical1_hd = !KeDMDR_b_DenyEV;

    /* Logic: '<S162>/Logical9' incorporates:
     *  Constant: '<S162>/Constant Value4'
     *  Constant: '<S199>/Constant'
     *  Constant: '<S205>/Calib'
     *  RelationalOperator: '<S162>/Comparison5'
     *  RelationalOperator: '<S162>/Comparison6'
     *  S-Function (sfix_bitop): '<S162>/BitwiseOperator4'
     */
    VeDMDC_b_EngOnGraceTimeRsnRaw = ((((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) ==
        CeDMDR_e_EV) && ((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
                          KeDMDR_g_EVModeInhibitGraceTime) >= 1U));

    /* Logic: '<S162>/Logical8' */
    DMDR_ac_B.Gain_is = ((VeDMDC_b_EngOnWOTRsnRaw) ||
                         (VeDMDC_b_EngOnGraceTimeRsnRaw));

    /* Outputs for Atomic SubSystem: '<S162>/TurnOnDelayTime' */
    /* Logic: '<S160>/LogicalOperator' incorporates:
     *  Logic: '<S209>/OR1'
     */
    VeDMDC_b_EngOnInEV_tmp = !DMDR_ac_B.Gain_is;

    /* End of Outputs for SubSystem: '<S162>/TurnOnDelayTime' */

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Logic: '<S160>/Logical' incorporates:
     *  Constant: '<S184>/Constant'
     *  Constant: '<S185>/Constant'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<S5>/VeESSR_e_EngStartStopSt'
     *  Logic: '<S160>/LogicalOperator'
     *  RelationalOperator: '<S160>/Comparison1'
     *  RelationalOperator: '<S160>/Comparison2'
     */
    VeDMDC_b_EngOnInEV = (((CeESSR_e_EngRunning == ((uint32)tmpRead_6)) &&
                           (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) ==
                            CeDMDR_e_EV)) && VeDMDC_b_EngOnInEV_tmp);

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Outputs for Atomic SubSystem: '<S160>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S191>/EdgeRising' */
    /* UnitDelay: '<S296>/Unit Delay' incorporates:
     *  UnitDelay: '<S193>/Unit Delay'
     */
    rtb_UnitDelay_n = DMDR_ac_DW.UnitDelay_DSTATE_c;

    /* Update for UnitDelay: '<S193>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_c = VeDMDC_b_EngOnInEV;

    /* Switch: '<S191>/Switch1' incorporates:
     *  Constant: '<S186>/Calib'
     *  Constant: '<S189>/Calib'
     *  Constant: '<S191>/Constant Value1'
     *  Logic: '<S191>/OR'
     *  Logic: '<S191>/OR1'
     *  Logic: '<S193>/AND'
     *  Logic: '<S193>/OR1'
     *  MinMax: '<S191>/Minimum'
     *  Sum: '<S191>/Summation'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    if ((!VeDMDC_b_EngOnInEV) || ((VeDMDC_b_EngOnInEV) && (!rtb_UnitDelay_n)))
    {
        DMDR_ac_DW.UnitDelay_DSTATE_ke = 0.0F;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_ke = fminf(KeDMDR_t_MaxEngOnTimeEVMode,
            HeDMDR_t_MedTED_dT + DMDR_ac_DW.UnitDelay_DSTATE_ke);
    }

    /* End of Switch: '<S191>/Switch1' */
    /* End of Outputs for SubSystem: '<S191>/EdgeRising' */

    /* Logic: '<S191>/AND' incorporates:
     *  Constant: '<S189>/Calib'
     *  RelationalOperator: '<S191>/Greater  Than'
     *  UnitDelay: '<S191>/Unit Delay'
     */
    rtb_AND_nz = ((VeDMDC_b_EngOnInEV) && (DMDR_ac_DW.UnitDelay_DSTATE_ke >=
                   KeDMDR_t_MaxEngOnTimeEVMode));

    /* End of Outputs for SubSystem: '<S160>/TurnOnDelayTime' */

    /* Outputs for Atomic SubSystem: '<S160>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S190>/EdgeFalling' */
    /* Logic: '<S192>/AND' incorporates:
     *  Logic: '<S192>/OR1'
     *  UnitDelay: '<S192>/Unit Delay'
     */
    rtb_Logical4_n = ((!rtb_AND_nz) && (DMDR_ac_DW.UnitDelay_DSTATE_iw));

    /* Update for UnitDelay: '<S192>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_iw = rtb_AND_nz;

    /* End of Outputs for SubSystem: '<S190>/EdgeFalling' */

    /* Switch: '<S190>/Switch' incorporates:
     *  Constant: '<S186>/Calib'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S190>/Constant Value1'
     *  MinMax: '<S190>/Minimum'
     *  Sum: '<S190>/Summation'
     *  UnitDelay: '<S190>/Unit Delay'
     */
    if (rtb_Logical4_n)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_be = KeDMDR_t_LatchEngMaxTimeRsn;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_be = fmaxf(DMDR_ac_DW.UnitDelay_DSTATE_be -
            HeDMDR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S190>/Switch' */

    /* Logic: '<S190>/AND' incorporates:
     *  Constant: '<S190>/Constant Value2'
     *  RelationalOperator: '<S190>/Greater  Than'
     *  UnitDelay: '<S190>/Unit Delay'
     */
    VeDMDC_b_EngOnInEVFinal = (rtb_AND_nz || (DMDR_ac_DW.UnitDelay_DSTATE_be >
        0.0F));

    /* End of Outputs for SubSystem: '<S160>/TurnOffDelayTime' */

    /* Switch: '<S160>/Switch' incorporates:
     *  Constant: '<S187>/Calib'
     */
    DMDR_ac_B.Gain_c = ((KeDMDR_b_EnblEngOnInEV) && (VeDMDC_b_EngOnInEVFinal));

    /* Logic: '<S159>/Logical2' incorporates:
     *  Constant: '<S175>/Constant'
     *  RelationalOperator: '<S159>/Comparison3'
     */
    rtb_AND_nz = ((DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k) &&
                  (((uint32)DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i) ==
                   CeTMDR_e_AWD_Lock));

    /* Logic: '<S159>/Logical3' incorporates:
     *  Constant: '<S176>/Constant'
     *  RelationalOperator: '<S159>/Comparison2'
     */
    rtb_Logical4_n = ((((uint32)
                        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i) ==
                       CeTMDR_e_AWD_Low) &&
                      (DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k));

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Logic: '<S148>/Logical5' incorporates:
     *  Inport: '<S5>/VeDMIR_b_CommFault'
     *  Logic: '<S34>/Logical8'
     *  Logic: '<S79>/Logical5'
     */
    rtb_Logical5_i_tmp = !tmpRead_2;

    /* Logic: '<S148>/Logical2' incorporates:
     *  Gain: '<S362>/Gain'
     *  Logic: '<S30>/Logical1'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S79>/Logical4'
     */
    tmpRead_2 = !tmpRead_9;

    /* Logic: '<S161>/Logical5' incorporates:
     *  Constant: '<S284>/Calib'
     *  Inport: '<S5>/VeSTRR_b_RemedialStop'
     *  Logic: '<S33>/Logical'
     *  Logic: '<S34>/Logical5'
     *  Logic: '<S79>/Logical3'
     */
    rtb_UnitDelay_n = ((!rtb_Switch1_ch) || (!KeDMDR_b_UseRemedialStopForDrvMd));

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Switch: '<S195>/Switch1' incorporates:
     *  Constant: '<S194>/Constant'
     *  Constant: '<S196>/Calib'
     *  Logic: '<S161>/Logical5'
     *  Logic: '<S161>/Logical6'
     *  RelationalOperator: '<S161>/Comparison4'
     */
    rtb_Switch1_ch = ((((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) == CeDMDR_e_EV) ||
                      (rtb_UnitDelay_n || (!KeDMDR_b_DenyEVMdRemedialStop)));

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Logic: '<S163>/Logical1' incorporates:
     *  Constant: '<S213>/Calib'
     *  Inport: '<S5>/VeOSMR_b_TempEVDrvMdInhibit'
     *  Logic: '<S163>/Logical2'
     */
    VeDMDC_b_TempEVInhibitEVAllwd = ((!Logical2) || (KeDMDR_b_NoTempEVInbitCheck));

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Switch: '<S155>/Switch1' incorporates:
     *  Constant: '<S157>/Calib'
     *  Constant: '<S182>/Calib'
     *  Switch: '<S178>/Switch1'
     */
    if (KeDMDR_b_EVAllwdOvrrd)
    {
        /* Switch: '<S155>/Switch1' incorporates:
         *  Constant: '<S158>/Calib'
         */
        VeDMDC_b_EVAllwd = KeDMDR_b_EVAllwdOvrrdVal;
    }
    else
    {
        if (KeDMDR_b_ManualMdAllwInEV)
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  Logic: '<S159>/Logical4'
             */
            tmp = ((!rtb_AND_nz) && (!rtb_Logical4_n));
        }
        else
        {
            /* Switch: '<S178>/Switch1' incorporates:
             *  Logic: '<S159>/Logical8'
             */
            tmp = !DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k;
        }

        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
        /* Switch: '<S155>/Switch1' incorporates:
         *  Inport: '<S5>/VeDMIR_b_DrvMdNotAvailDiag'
         *  Logic: '<S148>/Logical'
         *  Logic: '<S148>/Logical2'
         *  Logic: '<S148>/Logical4'
         *  Logic: '<S148>/Logical5'
         *  Logic: '<S148>/Logical6'
         *  Logic: '<S165>/Logical2'
         */
        VeDMDC_b_EVAllwd = ((((((((((((VeDMDC_b_STRREVAllwd) && (!rtb_AND_j3)) &&
            rtb_AND) && rtb_Logical2_o_tmp) && (VeDMDC_b_TerrainMdEvAllw)) &&
            rtb_Logical1_hd) && (!DMDR_ac_B.Gain_c)) && tmp) &&
                               rtb_Logical5_i_tmp) && tmpRead_2) &&
                             rtb_Switch1_ch) && (VeDMDC_b_TempEVInhibitEVAllwd));

        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
    }

    /* End of Switch: '<S155>/Switch1' */

    /* Logic: '<S25>/Logical2' */
    Logical2 = !VeDMDC_b_EVAllwd;

    /* SignalConversion generated from: '<S4>/VeTRGR_e_VldtdTransRngSt' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld && Rte_SysCon_Variant_DMDR_SportMdNotOnTrrnMd

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* VariantMerge generated from: '<S4>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     *  Inport: '<S5>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_VM_Conditional_Signal_VeTRGR_e_Vldtd = tmpRead_d;

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
#elif !Rte_SysCon_Variant_DMDR_FuncEnbld || !Rte_SysCon_Variant_DMDR_SportMdNotOnTrrnMd

    /* VariantMerge generated from: '<S4>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  SignalConversion generated from: '<S4>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_VM_Conditional_Signal_VeTRGR_e_Vldtd = CeTRGR_e_NoSelectionAvailable;

#endif

    /* End of SignalConversion generated from: '<S4>/VeTRGR_e_VldtdTransRngSt' */

    /* RelationalOperator: '<S34>/Comparison4' incorporates:
     *  Logic: '<S34>/Logical'
     *  Logic: '<S34>/Logical1'
     *  Logic: '<S34>/Logical2'
     *  Logic: '<S34>/Logical3'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S34>/Logical5'
     *  Logic: '<S34>/Logical6'
     *  Logic: '<S34>/Logical7'
     *  Logic: '<S34>/Logical8'
     *  RelationalOperator: '<S34>/Comparison1'
     *  SignalConversion generated from: '<S34>/VariantSource'
     *  Switch: '<S288>/Switch1'
     */
#if Rte_SysCon_Variant_DMDR_SportMdNotOnTrrnMd

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* RelationalOperator: '<S30>/Relational Operator' incorporates:
     *  Constant: '<S286>/Constant'
     *  Constant: '<S287>/Constant'
     *  Constant: '<S290>/Calib'
     *  Constant: '<S292>/Calib'
     *  Inport: '<S5>/VeDMIR_b_DrvMdNotAvailDiag'
     *  VariantMerge generated from: '<S4>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_DMDC_b_EcoAllwd_n = ((((((KeDMDR_b_SportInAllLeverPstns) || (((uint32)
        rtb_VM_Conditional_Signal_VeTRGR_e_Vldtd) != CeTRGR_e_TransRangeDrive1))
        && ((((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) == CeDMDR_e_Sport) ||
            (rtb_UnitDelay_n || (!KeDMDR_b_DenySportMdRemedialStop)))) &&
        (!rtb_AND_j3)) && tmpRead_2) && rtb_Logical5_i_tmp);

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
#else

    /* RelationalOperator: '<S30>/Relational Operator' incorporates:
     *  Constant: '<S291>/Calib'
     *  SignalConversion generated from: '<S34>/VariantSource'
     */
    rtb_DMDC_b_EcoAllwd_n = KeDMDR_b_NoSportMd;

#endif

    /* End of RelationalOperator: '<S34>/Comparison4' */

    /* SignalConversion generated from: '<S34>/VariantSource' */
    VeDMDC_b_SportAllwdRaw = rtb_DMDC_b_EcoAllwd_n;

    /* Switch: '<S34>/Switch1' incorporates:
     *  Constant: '<S289>/Calib'
     */
    VeDMDC_b_SportAllwd = ((KeDMDR_b_ByPassSportAllwdForHornet) ||
                           (VeDMDC_b_SportAllwdRaw));

    /* Logic: '<S25>/Logical3' */
    Logical3 = !VeDMDC_b_SportAllwd;

    /* Logic: '<S86>/Logical2' incorporates:
     *  Constant: '<S115>/Calib'
     *  Constant: '<S116>/Calib'
     *  Constant: '<S86>/Constant Value1'
     *  Constant: '<S86>/Constant Value2'
     *  Logic: '<S86>/Logical1'
     *  RelationalOperator: '<S86>/Comparison'
     *  RelationalOperator: '<S86>/Comparison1'
     *  S-Function (sfix_bitop): '<S86>/BitwiseOperator'
     *  S-Function (sfix_bitop): '<S86>/BitwiseOperator1'
     */
    VeDMDC_b_STRRESaveAllwd =
        (((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
           KeDMDR_g_ESaveModeTempInhibitMaskVal) < 1U) &&
         ((DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_c &
           KeDMDR_g_ESaveModeTempInhibitMaskVal2) < 1U));

    /* Logic: '<S87>/Logical4' incorporates:
     *  Constant: '<S119>/Constant'
     *  Constant: '<S123>/Calib'
     *  RelationalOperator: '<S87>/Comparison8'
     *  Selector: '<S87>/Selector3'
     */
    rtb_Logical4_l = ((((uint32)tmpRead_0) == CeDMDR_e_ESave) &&
                      (KaDMDR_b_TCaseTrrnMdESaveAllwdRaw[(rtb_Logical4_c_tmp)]));

    /* Outputs for Atomic SubSystem: '<S87>/EdgeRising1' */
    /* Logic: '<S118>/AND' incorporates:
     *  Logic: '<S118>/OR1'
     *  UnitDelay: '<S118>/Unit Delay'
     */
    rtb_DMDC_b_EcoAllwd_n = (rtb_Logical4_l && (!DMDR_ac_DW.UnitDelay_DSTATE_e));

    /* Update for UnitDelay: '<S118>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_e = rtb_Logical4_l;

    /* End of Outputs for SubSystem: '<S87>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S87>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S128>/EdgeFalling' */
    /* Logic: '<S129>/AND' incorporates:
     *  Logic: '<S129>/OR1'
     *  UnitDelay: '<S129>/Unit Delay'
     */
    rtb_Logical4_l = ((!rtb_DMDC_b_EcoAllwd_n) &&
                      (DMDR_ac_DW.UnitDelay_DSTATE_fp));

    /* Update for UnitDelay: '<S129>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_fp = rtb_DMDC_b_EcoAllwd_n;

    /* End of Outputs for SubSystem: '<S128>/EdgeFalling' */

    /* Switch: '<S128>/Switch' incorporates:
     *  Constant: '<S120>/Calib'
     *  Constant: '<S127>/Calib'
     *  Constant: '<S128>/Constant Value1'
     *  MinMax: '<S128>/Minimum'
     *  Sum: '<S128>/Summation'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    if (rtb_Logical4_l)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_fm = KeDMDR_t_MaxECMTrnMdSwitchTime;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_fm = fmaxf(DMDR_ac_DW.UnitDelay_DSTATE_fm -
            HeDMDR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S128>/Switch' */

    /* Logic: '<S128>/AND' incorporates:
     *  Constant: '<S128>/Constant Value2'
     *  RelationalOperator: '<S128>/Greater  Than'
     *  UnitDelay: '<S128>/Unit Delay'
     */
    VeDMDC_b_ESaveModeAllwdTrrnTemp = (rtb_DMDC_b_EcoAllwd_n ||
        (DMDR_ac_DW.UnitDelay_DSTATE_fm > 0.0F));

    /* End of Outputs for SubSystem: '<S87>/TurnOffDelayTime' */

    /* Selector: '<S87>/Selector1' incorporates:
     *  Constant: '<S124>/Calib'
     */
    VeDMDC_b_ESaveModeAllwdTrrn = KaDMDR_b_TCaseTrrnMdEsaveAllwd
        [(rtb_Logical4_c_tmp)];

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Logic: '<S79>/Logical1' incorporates:
     *  Inport: '<S5>/VeDMIR_b_DrvMdNotAvailDiag'
     */
    rtb_Logical4_l = !rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Switch: '<S83>/Switch1' incorporates:
     *  Constant: '<S125>/Calib'
     *  Constant: '<S84>/Calib'
     *  Switch: '<S121>/Switch1'
     */
    if (KeDMDR_b_ESaveAllwdOvrrd)
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S85>/Calib'
         */
        VeDMDC_b_ESaveAllwd = KeDMDR_b_ESaveAllwdOvrrdVal;
    }
    else
    {
        if (KeDMDR_b_ESaveAllwdTerrainOvrrd)
        {
            /* Switch: '<S121>/Switch1' incorporates:
             *  Constant: '<S126>/Calib'
             */
            tmp = KeDMDR_b_ESaveAllwdTerrainOvrrdVal;
        }
        else
        {
            /* Switch: '<S121>/Switch1' incorporates:
             *  Switch: '<S122>/Switch1'
             */
            tmp = ((VeDMDC_b_ESaveModeAllwdTrrnTemp) ||
                   (VeDMDC_b_ESaveModeAllwdTrrn));
        }

        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
        /* Switch: '<S83>/Switch1' incorporates:
         *  Inport: '<S5>/VeDMIR_b_DenyEsave_TonaleDiag'
         *  Logic: '<S79>/Logical'
         *  Logic: '<S79>/Logical7'
         */
        VeDMDC_b_ESaveAllwd = ((((((((VeDMDC_b_STRRESaveAllwd) &&
            rtb_Logical2_o_tmp) && tmp) && rtb_Logical4_l) && rtb_UnitDelay_n) &&
            tmpRead_2) && rtb_Logical5_i_tmp) && (!Logical4));

        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
    }

    /* End of Switch: '<S83>/Switch1' */

    /* Logic: '<S25>/Logical4' */
    Logical4 = !VeDMDC_b_ESaveAllwd;

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Logic: '<S32>/Logical1' incorporates:
     *  Constant: '<S283>/Calib'
     *  Inport: '<S5>/VeDMIR_b_DrvMdNotAvailDiag'
     */
    VeDMDC_b_GoHyb = ((KeDMDR_b_GoDirectHybDrvMd) || rtb_AND_j3);

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Outputs for Atomic SubSystem: '<S162>/TurnOnDelayTime' */
    /* Outputs for Atomic SubSystem: '<S209>/EdgeRising' */
    /* Logic: '<S211>/AND' incorporates:
     *  Logic: '<S211>/OR1'
     *  UnitDelay: '<S211>/Unit Delay'
     */
    rtb_DMDC_b_EcoAllwd_n = ((DMDR_ac_B.Gain_is) &&
        (!DMDR_ac_DW.UnitDelay_DSTATE_lm));

    /* Update for UnitDelay: '<S211>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_lm = DMDR_ac_B.Gain_is;

    /* End of Outputs for SubSystem: '<S209>/EdgeRising' */

    /* Switch: '<S209>/Switch1' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S206>/Calib'
     *  Constant: '<S209>/Constant Value1'
     *  Logic: '<S209>/OR'
     *  MinMax: '<S209>/Minimum'
     *  Sum: '<S209>/Summation'
     *  UnitDelay: '<S209>/Unit Delay'
     */
    if (VeDMDC_b_EngOnInEV_tmp || rtb_DMDC_b_EcoAllwd_n)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_b = 0.0F;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_b = fminf(KeDMDR_t_EngOnAllwdWOT,
            HeDMDR_t_MedTED_dT + DMDR_ac_DW.UnitDelay_DSTATE_b);
    }

    /* End of Switch: '<S209>/Switch1' */

    /* Logic: '<S209>/AND' incorporates:
     *  Constant: '<S206>/Calib'
     *  RelationalOperator: '<S209>/Greater  Than'
     *  UnitDelay: '<S209>/Unit Delay'
     */
    VeDMDC_b_STRREVNotAllwdWOT = ((DMDR_ac_B.Gain_is) &&
        (DMDR_ac_DW.UnitDelay_DSTATE_b >= KeDMDR_t_EngOnAllwdWOT));

    /* End of Outputs for SubSystem: '<S162>/TurnOnDelayTime' */

    /* Logic: '<S162>/Logical6' */
    DMDR_ac_DW.UnitDelay_DSTATE_d5 = (Logical5 && (VeDMDC_b_STRREVNotAllwdWOT));

    /* Outputs for Atomic SubSystem: '<S162>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S208>/EdgeFalling' */
    /* Logic: '<S210>/AND' incorporates:
     *  Logic: '<S210>/OR1'
     *  UnitDelay: '<S210>/Unit Delay'
     */
    rtb_DMDC_b_EcoAllwd_n = ((!DMDR_ac_DW.UnitDelay_DSTATE_d5) &&
        (DMDR_ac_DW.UnitDelay_DSTATE_fu));

    /* Update for UnitDelay: '<S210>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_fu = DMDR_ac_DW.UnitDelay_DSTATE_d5;

    /* End of Outputs for SubSystem: '<S208>/EdgeFalling' */

    /* Switch: '<S208>/Switch' incorporates:
     *  Constant: '<S200>/Calib'
     *  Constant: '<S207>/Calib'
     *  Constant: '<S208>/Constant Value1'
     *  MinMax: '<S208>/Minimum'
     *  Sum: '<S208>/Summation'
     *  UnitDelay: '<S208>/Unit Delay'
     */
    if (rtb_DMDC_b_EcoAllwd_n)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_k = KeDMDR_t_LatchWOTRsn;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_k = fmaxf(DMDR_ac_DW.UnitDelay_DSTATE_k -
            HeDMDR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S208>/Switch' */

    /* Logic: '<S208>/AND' incorporates:
     *  Constant: '<S208>/Constant Value2'
     *  RelationalOperator: '<S208>/Greater  Than'
     *  UnitDelay: '<S208>/Unit Delay'
     */
    VeDMDC_b_EngOnWOTRsnFinal = ((DMDR_ac_DW.UnitDelay_DSTATE_d5) ||
        (DMDR_ac_DW.UnitDelay_DSTATE_k > 0.0F));

    /* End of Outputs for SubSystem: '<S162>/TurnOffDelayTime' */

    /* RelationalOperator: '<S30>/Relational Operator' incorporates:
     *  Constant: '<S273>/Constant'
     */
    rtb_DMDC_b_EcoAllwd_n = (((uint32)
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) == CeTMDR_e_Auto);

    /* Logic: '<S25>/Logical5' incorporates:
     *  Logic: '<S30>/Logical'
     */
    Logical5 = ((!rtb_DMDC_b_EcoAllwd_n) || (!tmpRead_2));

    /* Chart: '<S25>/Drive_Modes1' incorporates:
     *  Constant: '<S281>/Calib'
     *  Constant: '<S57>/Calib'
     *  Constant: '<S59>/Calib'
     *  Constant: '<S60>/Calib'
     *  Gain: '<S61>/Gain'
     *  Gain: '<S62>/Gain'
     *  Inport: '<Root>/VeDMIR_e_DrvMdRaw'
     *  Inport: '<S5>/VeBACR_e_ChargeSustn'
     *  Inport: '<S5>/VeDMIR_e_DrvMdRaw'
     *  Logic: '<S25>/Logical1'
     */
    /* Gateway: DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/Drive_Modes1 */
    /* During: DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/Drive_Modes1 */
    if (((uint32)DMDR_ac_DW.is_active_c1_DMDR_ac) == 0U)
    {
        /* Entry: DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/Drive_Modes1 */
        DMDR_ac_DW.is_active_c1_DMDR_ac = 1U;

        /* Entry Internal: DMDR_MedTED/DMDC_FUNC/DMDC_Func/DriveModeConditionCheck/Drive_Modes/Drive_Modes1 */
        /* Transition: '<S56>:4' */
        DMDR_ac_DW.is_c1_DMDR_ac = DMDR_ac_IN_NoDrivemode;

        /* Entry 'NoDrivemode': '<S56>:3' */
        DMDR_ac_B.DrvMdSts_p = CeDMDR_e_NoDrvMd;
        DMDR_ac_B.DrvMdInt = CeDMDR_e_NoDrvMd;
        DMDR_ac_B.DrvMdState_a = 0U;
        DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
        DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
        DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
        DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
    }
    else if (((sint32)DMDR_ac_DW.is_c1_DMDR_ac) == 1)
    {
        /* During 'DriveModeActive': '<S56>:978' */
        if (((sint32)tmpRead_0) == 0)
        {
            /* Transition: '<S56>:981' */
            /* Exit Internal 'DriveModeActive': '<S56>:978' */
            switch (DMDR_ac_DW.is_DriveModeActive)
            {
              case DMDR_ac_IN_ESave:
                /* Exit Internal 'ESave': '<S56>:322' */
                switch (DMDR_ac_DW.is_ESave)
                {
                  case DMDR_ac_IN_EsaveBlink:
                    /* Exit 'EsaveBlink': '<S56>:341' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case DMDR_ac_IN_SetDeny_i:
                    /* Exit 'SetDeny': '<S56>:1051' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_NO_ACTIVE_CHILD;
                break;

              case DMDR_ac_IN_EV:
                /* Exit Internal 'EV': '<S56>:103' */
                switch (DMDR_ac_DW.is_EV)
                {
                  case DMDR_ac_IN_EVBlink:
                    /* Exit 'EVBlink': '<S56>:119' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case DMDR_ac_IN_SetDeny_i:
                    /* Exit 'SetDeny': '<S56>:1049' */
                    DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    DMDR_ac_DW.is_EV = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_NO_ACTIVE_CHILD;
                break;

              case DMDR_ac_IN_Eco:
                /* Exit Internal 'Eco': '<S56>:1116' */
                switch (DMDR_ac_DW.is_Eco_b)
                {
                  case DMDR_ac_IN_EcoBlink:
                    /* Exit 'EcoBlink': '<S56>:1137' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case DMDR_ac_IN_SetDeny_i:
                    /* Exit 'SetDeny': '<S56>:1138' */
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_NO_ACTIVE_CHILD;
                break;

              case DMDR_ac_IN_Sport:
                /* Exit Internal 'Sport': '<S56>:622' */
                switch (DMDR_ac_DW.is_Sport)
                {
                  case DMDR_ac_IN_SetDeny:
                    /* Exit 'SetDeny': '<S56>:1052' */
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case DMDR_ac_IN_SportBlink:
                    /* Exit 'SportBlink': '<S56>:641' */
                    VeDMDC_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_NO_ACTIVE_CHILD;
                break;

              default:
                /* Exit Internal 'Hybrid': '<S56>:1' */
                DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_NO_ACTIVE_CHILD;
                DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_NO_ACTIVE_CHILD;
                break;
            }

            DMDR_ac_DW.is_c1_DMDR_ac = DMDR_ac_IN_NoDrivemode;

            /* Entry 'NoDrivemode': '<S56>:3' */
            DMDR_ac_B.DrvMdSts_p = CeDMDR_e_NoDrvMd;
            DMDR_ac_B.DrvMdInt = CeDMDR_e_NoDrvMd;
            DMDR_ac_B.DrvMdState_a = 0U;
            DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
            DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
            DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
            DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
        }
        else
        {
            switch (DMDR_ac_DW.is_DriveModeActive)
            {
              case DMDR_ac_IN_DecideState:
                /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                /* During 'DecideState': '<S56>:418' */
                /* Transition: '<S56>:881' */
                /* Transition: '<S56>:450' */
                switch (tmpRead_0)
                {
                  case 2:
                    /* Transition: '<S56>:454' */
                    /* Transition: '<S56>:453' */
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

                    /* Entry 'EV': '<S56>:103' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
                    DMDR_ac_enter_internal_EV(&VeDMIR_b_LatchEV);
                    break;

                  case 4:
                    /* Transition: '<S56>:647' */
                    /* Transition: '<S56>:951' */
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Sport;

                    /* Entry 'Sport': '<S56>:622' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Sport;

                    /* Entry Internal 'Sport': '<S56>:622' */
                    /* Transition: '<S56>:1043' */
                    DMDR_ac_DW.is_Sport = DMDR_ac_IN_Input_Val;

                    /* Entry 'Input_Val': '<S56>:1042' */
                    DMDR_ac_B.DrvMdState_a = 41U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                    break;

                  case 3:
                    /* Transition: '<S56>:458' */
                    /* Transition: '<S56>:452' */
                    /* Transition: '<S56>:468' */
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_ESave;

                    /* Entry 'ESave': '<S56>:322' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_ESave;

                    /* Entry Internal 'ESave': '<S56>:322' */
                    /* Transition: '<S56>:1036' */
                    DMDR_ac_DW.is_ESave = DMDR_ac_IN_Input_Val_a;

                    /* Entry 'Input_Val': '<S56>:1038' */
                    DMDR_ac_B.DrvMdState_a = 31U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                    break;

                  case 8:
                    /* Transition: '<S56>:1144' */
                    /* Transition: '<S56>:1145' */
                    /* Transition: '<S56>:1141' */
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Eco;

                    /* Entry 'Eco': '<S56>:1116' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Camel_Mode;

                    /* Entry Internal 'Eco': '<S56>:1116' */
                    /* Transition: '<S56>:1122' */
                    DMDR_ac_DW.is_Eco_b = DMDR_ac_IN_Input_Val_a;

                    /* Entry 'Input_Val': '<S56>:1135' */
                    DMDR_ac_B.DrvMdState_a = 80U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    VeDMDC_b_BlinkStatePassed = false;
                    break;

                  case 1:
                    /* Transition: '<S56>:451' */
                    /* Transition: '<S56>:518' */
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_Hybrid;

                    /* Entry 'Hybrid': '<S56>:1' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

                    /* Entry Internal 'Hybrid': '<S56>:1' */
                    /* Transition: '<S56>:1020' */
                    DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Input_Val_ax;

                    /* Entry 'Input_Val': '<S56>:1013' */
                    DMDR_ac_B.DrvMdState_a = 11U;
                    DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                    break;

                  default:
                    /* no actions */
                    break;
                }

                /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                break;

              case DMDR_ac_IN_ESave:
                /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                DMDR_ac_ESave(&VeDMIR_b_LatchEV, &Logical4, &tmpRead_0);

                /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                break;

              case DMDR_ac_IN_EV:
                /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                DMDR_ac_EV(&Logical2, (&(VeDMDC_b_EngOnWOTRsnFinal)), &tmpRead_0);

                /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                break;

              case DMDR_ac_IN_Eco:
                /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                DMDR_ac_Eco(&VeDMIR_b_LatchEV, &Logical5, &tmpRead_0);

                /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                break;

              case DMDR_ac_IN_Hybrid:
                DMDR_ac_B.DrvMdInt = CeDMDR_e_Hybrid;

                /* During 'Hybrid': '<S56>:1' */
                if ((HeDMDR_b_REEVEnbld) && (((uint32)
                        DMDR_ac_B.VeBACR_e_ChargeSustn) ==
                        CeBACR_e_ChargeDepleting))
                {
                    /* Transition: '<S56>:1223' */
                    /*  EV for CD */
                    /* Exit Internal 'Hybrid': '<S56>:1' */
                    DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_EV;

                    /* Entry 'EV': '<S56>:103' */
                    DMDR_ac_B.DrvMdInt = CeDMDR_e_EV;
                    DMDR_ac_enter_internal_EV(&VeDMIR_b_LatchEV);
                }
                else
                {
                    switch (DMDR_ac_DW.is_Hybrid)
                    {
                      case DMDR_ac_IN_Blink_Verify:
                        DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Hybrid;

                        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                        /* During 'Blink_Verify': '<S56>:1047' */
                        if (((sint32)tmpRead_0) != 1)
                        {
                            /* Transition: '<S56>:1057' */
                            /* Transition: '<S56>:1056' */
                            /* Transition: '<S56>:1054' */
                            /* Transition: '<S56>:503' */
                            /* Transition: '<S56>:504' */
                            /* Transition: '<S56>:703' */
                            /* Transition: '<S56>:941' */
                            DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_NO_ACTIVE_CHILD;
                            DMDR_ac_DW.is_DriveModeActive =
                                DMDR_ac_IN_DecideState;

                            /* Entry 'DecideState': '<S56>:418' */
                            DMDR_ac_B.DrvMdState_a = 5U;
                        }
                        else if ((((DMDR_ac_B.VeDMDR_t_StateTimer_j >=
                                    KeDMDR_t_StayInBlinkState) ||
                                   (VeDMDC_b_EngOnWOTRsnFinal)) ||
                                  (DMDR_ac_B.Gain_c)) ||
                                 (VeDMDC_b_BlinkStatePassed))
                        {
                            /* Transition: '<S56>:1048' */
                            DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Hybrid_h;

                            /* Entry 'Hybrid': '<S56>:18' */
                            DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Hybrid;
                            DMDR_ac_B.DrvMdState_a = 1U;
                            DMDR_ac_B.VeDMDR_b_EVModeDenied = false;
                            DMDR_ac_B.VeDMDR_b_ESaveModeDenied = false;
                            DMDR_ac_B.VeDMDR_b_SportModeDenied = false;
                            DMDR_ac_B.VeDMDR_b_HybModeDenied = false;
                            DMDR_ac_B.VeDMDR_b_EcoModeDenied_i = false;
                            DMDR_ac_B.VeDMDR_t_StateTimer_j = 0.0F;
                            VeDMDC_b_BlinkStatePassed = false;
                        }
                        else
                        {
                            DMDR_ac_B.VeDMDR_t_StateTimer_j +=
                                HeDMDR_t_MedTED_dT;
                        }

                        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                        break;

                      case DMDR_ac_IN_DenyHybrid:
                        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                        /* During 'DenyHybrid': '<S56>:49' */
                        if ((DMDR_ac_B.VeDMDR_t_StateTimer_j >=
                                KeDMDR_t_StayInBlinkState) || (((sint32)
                                tmpRead_0) != 1))
                        {
                            /* Transition: '<S56>:86' */
                            /* Transition: '<S56>:504' */
                            /* Transition: '<S56>:703' */
                            /* Transition: '<S56>:941' */
                            DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_NO_ACTIVE_CHILD;
                            DMDR_ac_DW.is_DriveModeActive =
                                DMDR_ac_IN_DecideState;

                            /* Entry 'DecideState': '<S56>:418' */
                            DMDR_ac_B.DrvMdState_a = 5U;
                        }
                        else
                        {
                            DMDR_ac_B.VeDMDR_t_StateTimer_j +=
                                HeDMDR_t_MedTED_dT;
                            DMDR_ac_B.VeDMDR_b_HybModeDenied = true;
                        }

                        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                        break;

                      case DMDR_ac_IN_Hybrid_h:
                        DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Hybrid;

                        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                        /* During 'Hybrid': '<S56>:18' */
                        if (((sint32)tmpRead_0) != 1)
                        {
                            /* Transition: '<S56>:94' */
                            /* Transition: '<S56>:503' */
                            /* Transition: '<S56>:504' */
                            /* Transition: '<S56>:703' */
                            /* Transition: '<S56>:941' */
                            DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_NO_ACTIVE_CHILD;
                            DMDR_ac_DW.is_DriveModeActive =
                                DMDR_ac_IN_DecideState;

                            /* Entry 'DecideState': '<S56>:418' */
                            DMDR_ac_B.DrvMdState_a = 5U;
                        }

                        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                        break;

                      default:
                        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                        /* During 'Input_Val': '<S56>:1013' */
                        if (((DMDR_ac_B.VeDMDR_t_StateTimer_j >=
                                KeDMDR_t_AccptWtTime) || (((sint32)tmpRead_0) !=
                              1)) || (VeDMDC_b_BlinkStatePassed))
                        {
                            /* Transition: '<S56>:1024' */
                            if (!KeDMDR_b_HybDrvMdAllwd)
                            {
                                /* Transition: '<S56>:52' */
                                /* Transition: '<S56>:53' */
                                DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_DenyHybrid;

                                /* Entry 'DenyHybrid': '<S56>:49' */
                                DMDR_ac_B.DrvMdState_a = 12U;
                            }
                            else
                            {
                                /* Transition: '<S56>:1016' */
                                /* Transition: '<S56>:1018' */
                                DMDR_ac_DW.is_Hybrid = DMDR_ac_IN_Blink_Verify;

                                /* Entry 'Blink_Verify': '<S56>:1047' */
                                DMDR_ac_B.DrvMdSts_p = CeDMDR_e_Hybrid;
                                DMDR_ac_B.DrvMdState_a = 13U;

                                /* Switch: '<S25>/Switch4' incorporates:
                                 *  Constant: '<S25>/Constant'
                                 *  Constant: '<S58>/Calib'
                                 */
                                if (!KeDMDR_b_UseEVEngOnBlnkTimer)
                                {
                                    DMDR_ac_DW.UnitDelay1_DSTATE = 0.0F;
                                }

                                /* End of Switch: '<S25>/Switch4' */
                                DMDR_ac_B.VeDMDR_t_StateTimer_j +=
                                    DMDR_ac_DW.UnitDelay1_DSTATE;
                            }
                        }
                        else
                        {
                            DMDR_ac_B.VeDMDR_t_StateTimer_j +=
                                HeDMDR_t_MedTED_dT;
                        }

                        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                        break;
                    }
                }
                break;

              default:
                /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
                DMDR_ac_Sport(&VeDMIR_b_LatchEV, &Logical3, &tmpRead_0);

                /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
                break;
            }
        }
    }
    else
    {
        DMDR_ac_B.DrvMdSts_p = CeDMDR_e_NoDrvMd;
        DMDR_ac_B.DrvMdInt = CeDMDR_e_NoDrvMd;

        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
        /* During 'NoDrivemode': '<S56>:3' */
        if (((sint32)tmpRead_0) != 0)
        {
            /* Transition: '<S56>:500' */
            DMDR_ac_DW.is_c1_DMDR_ac = DMDR_ac_IN_DriveModeActive;

            /* Entry Internal 'DriveModeActive': '<S56>:978' */
            /* Transition: '<S56>:1001' */
            DMDR_ac_DW.is_DriveModeActive = DMDR_ac_IN_DecideState;

            /* Entry 'DecideState': '<S56>:418' */
            DMDR_ac_B.DrvMdState_a = 5U;
        }

        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
    }

    /* End of Chart: '<S25>/Drive_Modes1' */

    /* DataStoreWrite: '<S25>/DSwrite' */
    DMDR_ac_DW.VeDMDR_t_StateTimer = DMDR_ac_B.VeDMDR_t_StateTimer_j;

    /* DataStoreWrite: '<S25>/DSwrite1' */
    VeDMDR_i_DrvMdState = DMDR_ac_B.DrvMdState_a;

    /* DataStoreWrite: '<S25>/DSwrite3' */
    VeDMDC_e_DrvMdArb_DS = DMDR_ac_B.DrvMdSts_p;

    /* Switch: '<S82>/Switch1' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S113>/Calib'
     *  DataStoreRead: '<S82>/DSread3'
     *  DataStoreRead: '<S82>/DSread4'
     *  DataStoreWrite: '<S82>/DSWrite1'
     *  Logic: '<S82>/Logical4'
     *  RelationalOperator: '<S82>/Comparison'
     *  S-Function (sfix_bitop): '<S89>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S89>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S89>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S95>/FixPt Bitwise Operator1'
     */
    if ((KeDMDR_b_ESaveSportDenMsg) && (((uint32)
            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
            CeTMDR_e_Sport))
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(VeDMDR_d_EVSaveDeniedRsn_DS |
            ((uint16)2));
    }
    else
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVSaveDeniedRsn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S82>/Switch1' */

    /* Switch: '<S82>/Switch2' incorporates:
     *  Constant: '<S101>/Constant'
     *  Constant: '<S112>/Calib'
     *  DataStoreRead: '<S82>/DSread5'
     *  DataStoreRead: '<S82>/DSread6'
     *  DataStoreWrite: '<S82>/DSWrite2'
     *  Logic: '<S82>/Logical2'
     *  RelationalOperator: '<S82>/Comparison1'
     *  S-Function (sfix_bitop): '<S90>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S90>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S90>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S96>/FixPt Bitwise Operator1'
     */
    if ((KeDMDR_b_ESaveSnowDenMsg) && (((uint32)
            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) == CeTMDR_e_Snow))
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(VeDMDR_d_EVSaveDeniedRsn_DS |
            ((uint16)4));
    }
    else
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVSaveDeniedRsn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S82>/Switch2' */

    /* Switch: '<S82>/Switch3' incorporates:
     *  Constant: '<S103>/Constant'
     *  Constant: '<S104>/Constant'
     *  Constant: '<S105>/Constant'
     *  Constant: '<S111>/Calib'
     *  DataStoreRead: '<S82>/DSread7'
     *  DataStoreRead: '<S82>/DSread8'
     *  DataStoreWrite: '<S82>/DSWrite3'
     *  Logic: '<S82>/Logical1'
     *  Logic: '<S82>/Logical3'
     *  RelationalOperator: '<S82>/Comparison2'
     *  RelationalOperator: '<S82>/Comparison3'
     *  RelationalOperator: '<S82>/Comparison4'
     *  S-Function (sfix_bitop): '<S91>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S91>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S91>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S97>/FixPt Bitwise Operator1'
     */
    if ((KeDMDR_b_ESaveSandDenMsg) && (((((uint32)
            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
            CeTMDR_e_MudSand) || (((uint32)
            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) == CeTMDR_e_Sand))
         || (((uint32)DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
             CeTMDR_e_Mud)))
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(VeDMDR_d_EVSaveDeniedRsn_DS |
            ((uint16)8));
    }
    else
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVSaveDeniedRsn_DS)) | ((uint16)8))));
    }

    /* End of Switch: '<S82>/Switch3' */

    /* Switch: '<S82>/Switch4' incorporates:
     *  Constant: '<S100>/Constant'
     *  Constant: '<S110>/Calib'
     *  DataStoreRead: '<S82>/DSread10'
     *  DataStoreRead: '<S82>/DSread9'
     *  DataStoreWrite: '<S82>/DSWrite4'
     *  Logic: '<S82>/Logical5'
     *  RelationalOperator: '<S82>/Comparison5'
     *  S-Function (sfix_bitop): '<S92>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S92>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S92>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S98>/FixPt Bitwise Operator1'
     */
    if ((KeDMDR_b_ESaveRockDenMsg) && (((uint32)
            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) == CeTMDR_e_Rock))
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(VeDMDR_d_EVSaveDeniedRsn_DS |
            ((uint16)16));
    }
    else
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVSaveDeniedRsn_DS)) | ((uint16)16))));
    }

    /* End of Switch: '<S82>/Switch4' */

    /* Logic: '<S79>/Logical6' */
    VeDMDC_b_ESaveNotAllwGen = ((((((!VeDMDC_b_STRRESaveAllwd) ||
        (!rtb_Logical2_o_tmp)) || (!rtb_Logical4_l)) || (!rtb_UnitDelay_n)) || (
        !tmpRead_2)) || (!rtb_Logical5_i_tmp));

    /* Switch: '<S82>/Switch' incorporates:
     *  DataStoreRead: '<S82>/DSread'
     *  DataStoreRead: '<S82>/DSread1'
     *  DataStoreWrite: '<S82>/DSWrite'
     *  S-Function (sfix_bitop): '<S88>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S88>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S88>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S94>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_ESaveNotAllwGen)
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(VeDMDR_d_EVSaveDeniedRsn_DS |
            ((uint16)1));
    }
    else
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVSaveDeniedRsn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S82>/Switch' */

    /* Switch: '<S82>/Switch5' incorporates:
     *  Constant: '<S106>/Constant'
     *  Constant: '<S107>/Constant'
     *  Constant: '<S108>/Constant'
     *  Constant: '<S109>/Calib'
     *  DataStoreRead: '<S82>/DSread11'
     *  DataStoreRead: '<S82>/DSread12'
     *  DataStoreWrite: '<S82>/DSWrite5'
     *  Logic: '<S82>/Logical6'
     *  Logic: '<S82>/Logical7'
     *  RelationalOperator: '<S82>/Comparison6'
     *  RelationalOperator: '<S82>/Comparison7'
     *  RelationalOperator: '<S82>/Comparison8'
     *  S-Function (sfix_bitop): '<S93>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S93>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S93>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S99>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    if (((((uint32)DMDR_ac_DW.UnitDelay_DSTATE_mc) == CeDMDR_e_ESave) &&
            ((((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) == CeDMDR_e_EV) ||
             (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) == CeDMDR_e_Sport))) &&
            (KeDMDR_b_ESaveDenEVSportMsg))
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(VeDMDR_d_EVSaveDeniedRsn_DS |
            ((uint16)32));
    }
    else
    {
        VeDMDR_d_EVSaveDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVSaveDeniedRsn_DS)) | ((uint16)32))));
    }

    /* End of Switch: '<S82>/Switch5' */

    /* Logic: '<S164>/Logical5' incorporates:
     *  Constant: '<S136>/Calib'
     *  Switch: '<S80>/Switch1'
     */
    Logical4 = ((!KeDMDR_b_AllwManInESaveActv) &&
                (DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k));

    /* Switch: '<S130>/Switch2' incorporates:
     *  DataStoreRead: '<S130>/DSRead1'
     *  DataStoreRead: '<S130>/DSRead2'
     *  DataStoreWrite: '<S130>/DSWrite'
     *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S138>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S142>/FixPt Bitwise Operator1'
     */
    if (Logical4)
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(VeDMDR_d_ESaveActvDeniedRsn_DS
            | ((uint16)1));
    }
    else
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ESaveActvDeniedRsn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S130>/Switch2' */

    /* Switch: '<S80>/Switch' incorporates:
     *  Constant: '<S137>/Calib'
     */
    if (KeDMDR_b_EnblDrvTrrnCmbntn)
    {
        /* UnitDelay: '<S296>/Unit Delay' incorporates:
         *  Constant: '<S132>/Constant'
         *  RelationalOperator: '<S80>/Comparison5'
         */
        rtb_UnitDelay_n = (((uint32)
                            DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i)
                           != CeTMDR_e_AWD_Low);
    }
    else
    {
        /* UnitDelay: '<S296>/Unit Delay' incorporates:
         *  Constant: '<S80>/TRUE Constant'
         */
        rtb_UnitDelay_n = true;
    }

    /* End of Switch: '<S80>/Switch' */

    /* Switch: '<S130>/Switch1' incorporates:
     *  DataStoreRead: '<S130>/DSRead3'
     *  DataStoreRead: '<S130>/DSRead4'
     *  DataStoreWrite: '<S130>/DSWrite1'
     *  Logic: '<S80>/Logical4'
     *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S139>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S143>/FixPt Bitwise Operator1'
     */
    if (!rtb_UnitDelay_n)
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(VeDMDR_d_ESaveActvDeniedRsn_DS
            | ((uint16)2));
    }
    else
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ESaveActvDeniedRsn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S130>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S80>/Hysteresis' */
    /* Switch: '<S133>/Switch1' incorporates:
     *  Constant: '<S133>/Constant Value'
     *  Constant: '<S134>/Calib'
     *  Constant: '<S135>/Calib'
     *  RelationalOperator: '<S133>/Greater  Than'
     *  RelationalOperator: '<S133>/Greater  Than1'
     *  Sum: '<S80>/Sum1'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    if (DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_cr >
            KeDMDR_P_EchrgPwrLngLim)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_co = true;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_co =
            ((DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_cr >=
              (KeDMDR_P_EchrgPwrLngLim - KeDMDR_P_EchrgPwrLngLimHyst)) &&
             (DMDR_ac_DW.UnitDelay_DSTATE_co));
    }

    /* End of Switch: '<S133>/Switch1' */
    /* End of Outputs for SubSystem: '<S80>/Hysteresis' */

    /* Switch: '<S130>/Switch3' incorporates:
     *  DataStoreRead: '<S130>/DSRead5'
     *  DataStoreRead: '<S130>/DSRead6'
     *  DataStoreWrite: '<S130>/DSWrite2'
     *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S140>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S144>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    if (DMDR_ac_DW.UnitDelay_DSTATE_co)
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(VeDMDR_d_ESaveActvDeniedRsn_DS
            | ((uint16)4));
    }
    else
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ESaveActvDeniedRsn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S130>/Switch3' */

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Switch: '<S130>/Switch4' incorporates:
     *  DataStoreRead: '<S130>/DSRead7'
     *  DataStoreRead: '<S130>/DSRead8'
     *  DataStoreWrite: '<S130>/DSWrite3'
     *  Inport: '<S5>/VeDMIR_b_CommFaultESave'
     *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S141>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S145>/FixPt Bitwise Operator1'
     */
    if (rtb_Logical1_mh)
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(VeDMDR_d_ESaveActvDeniedRsn_DS
            | ((uint16)8));
    }
    else
    {
        VeDMDR_d_ESaveActvDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ESaveActvDeniedRsn_DS)) | ((uint16)8))));
    }

    /* End of Switch: '<S130>/Switch4' */

    /* Logic: '<S80>/Logical1' incorporates:
     *  Constant: '<S131>/Constant'
     *  Inport: '<Root>/VeDMIR_e_EChargeType'
     *  Inport: '<S5>/VeDMIR_b_CommFaultESave'
     *  Inport: '<S5>/VeDMIR_e_EChargeType'
     *  Logic: '<S80>/Logical2'
     *  Logic: '<S80>/Logical3'
     *  Logic: '<S80>/Logical5'
     *  RelationalOperator: '<S80>/Comparison1'
     *  UnitDelay: '<S133>/Unit Delay'
     */
    VeDMDC_b_ESaveActive = (((((((uint32)tmpRead_1) == CeDMDR_e_Active_Charging)
        && rtb_UnitDelay_n) && (!DMDR_ac_DW.UnitDelay_DSTATE_co)) &&
        (!rtb_Logical1_mh)) && (!Logical4));

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Switch: '<S149>/Switch5' incorporates:
     *  Constant: '<S260>/Constant'
     *  DataStoreRead: '<S149>/DSRead11'
     *  DataStoreRead: '<S149>/DSRead12'
     *  DataStoreWrite: '<S149>/DSWrite5'
     *  Logic: '<S149>/AND'
     *  RelationalOperator: '<S149>/Comparison5'
     *  S-Function (sfix_bitop): '<S246>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S246>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S246>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S255>/FixPt Bitwise Operator1'
     */
    if ((((uint32)tmpRead_5) == CeENGR_e_Stale_Fuel) && tmpRead_3)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)
            512));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)512))));
    }

    /* End of Switch: '<S149>/Switch5' */

    /* Switch: '<S149>/Switch6' incorporates:
     *  Constant: '<S261>/Constant'
     *  DataStoreRead: '<S149>/DSRead13'
     *  DataStoreRead: '<S149>/DSRead14'
     *  DataStoreWrite: '<S149>/DSWrite6'
     *  Logic: '<S149>/AND1'
     *  RelationalOperator: '<S149>/Comparison6'
     *  S-Function (sfix_bitop): '<S247>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S247>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S247>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S256>/FixPt Bitwise Operator1'
     */
    if ((((uint32)tmpRead_5) == CeENGR_e_Oil_Dilution_Spark_Defouling) &&
            tmpRead_3)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)
            1024));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)1024))));
    }

    /* End of Switch: '<S149>/Switch6' */

    /* Switch: '<S149>/Switch7' incorporates:
     *  Constant: '<S262>/Constant'
     *  DataStoreRead: '<S149>/DSRead15'
     *  DataStoreRead: '<S149>/DSRead16'
     *  DataStoreWrite: '<S149>/DSWrite7'
     *  Logic: '<S149>/AND2'
     *  RelationalOperator: '<S149>/Comparison7'
     *  S-Function (sfix_bitop): '<S248>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S248>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S248>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S257>/FixPt Bitwise Operator1'
     */
    if ((((uint32)tmpRead_5) == CeENGR_e_Oil_Change_Required_EV_not_available) &&
        tmpRead_3)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)
            2048));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)2048))));
    }

    /* End of Switch: '<S149>/Switch7' */

    /* Logic: '<S149>/Logical1' incorporates:
     *  Constant: '<S149>/Constant Value'
     *  Constant: '<S149>/Constant Value1'
     *  Constant: '<S263>/Calib'
     *  Constant: '<S267>/Calib'
     *  Constant: '<S268>/Calib'
     *  Logic: '<S148>/Logical2'
     *  Logic: '<S148>/Logical3'
     *  Logic: '<S148>/Logical5'
     *  Logic: '<S165>/Logical2'
     *  RelationalOperator: '<S149>/Comparison'
     *  RelationalOperator: '<S149>/Comparison1'
     *  RelationalOperator: '<S149>/Comparison4'
     *  S-Function (sfix_bitop): '<S149>/BitwiseOperator'
     *  S-Function (sfix_bitop): '<S149>/BitwiseOperator1'
     *  S-Function (sfix_bitop): '<S149>/BitwiseOperator4'
     */
    VeDMDC_b_EVTempNotAvail = ((((((((((!rtb_AND) || (!rtb_Logical2_o_tmp)) || (
        !rtb_Logical1_hd)) || (!tmpRead_2)) || (!rtb_Switch1_ch)) ||
        (!rtb_Logical5_i_tmp)) || (!VeDMDC_b_TempEVInhibitEVAllwd)) ||
        ((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
          KeDMDR_g_EVModeTempInhibitMaskVal) >= 1U)) ||
        ((DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_c &
          KeDMDR_g_EVModeTempInhibit2MaskVal) >= 1U)) || ((((sint32)
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_g) & ((sint32)
        KeDMDR_d_EVModeTempInhibitMtrBLimit)) >= 1));

    /* Switch: '<S149>/Switch' incorporates:
     *  DataStoreRead: '<S149>/DSRead1'
     *  DataStoreRead: '<S149>/DSRead2'
     *  DataStoreWrite: '<S149>/DSWrite'
     *  S-Function (sfix_bitop): '<S241>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S241>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S241>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S250>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_EVTempNotAvail)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)1));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S149>/Switch' */

    /* RelationalOperator: '<S149>/Comparison2' incorporates:
     *  Constant: '<S149>/Constant Value2'
     *  Constant: '<S266>/Calib'
     *  S-Function (sfix_bitop): '<S149>/BitwiseOperator2'
     */
    VeDMDC_b_EVNotAvailSOC =
        ((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
          KeDMDR_g_EVModeSOCInhibitMaskVal) >= 1U);

    /* Switch: '<S149>/Switch1' incorporates:
     *  DataStoreRead: '<S149>/DSRead3'
     *  DataStoreRead: '<S149>/DSRead4'
     *  DataStoreWrite: '<S149>/DSWrite1'
     *  S-Function (sfix_bitop): '<S242>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S242>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S242>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S251>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_EVNotAvailSOC)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)2));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S149>/Switch1' */

    /* RelationalOperator: '<S149>/Comparison3' incorporates:
     *  Constant: '<S269>/Calib'
     *  S-Function (sfix_bitop): '<S149>/Bitwise Operator3'
     */
    VeDMDC_b_EVNotAvailThermal =
        ((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
          KeDMDR_g_EVModeThermalInhibitMaskVal) >= 1U);

    /* Switch: '<S149>/Switch2' incorporates:
     *  DataStoreRead: '<S149>/DSRead5'
     *  DataStoreRead: '<S149>/DSRead6'
     *  DataStoreWrite: '<S149>/DSWrite2'
     *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S243>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S252>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_EVNotAvailThermal)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)4));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S149>/Switch2' */

    /* Switch: '<S149>/Switch9' incorporates:
     *  Constant: '<S264>/Calib'
     *  Constant: '<S265>/Calib'
     *  DataStoreRead: '<S149>/DSRead19'
     *  DataStoreRead: '<S149>/DSRead20'
     *  DataStoreWrite: '<S149>/DSWrite9'
     *  Logic: '<S149>/OR'
     *  RelationalOperator: '<S149>/GreaterThan1'
     *  RelationalOperator: '<S149>/GreaterThan2'
     *  S-Function (sfix_bitop): '<S149>/Bitwise AND1'
     *  S-Function (sfix_bitop): '<S149>/Bitwise AND2'
     *  S-Function (sfix_bitop): '<S249>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S249>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S249>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S258>/FixPt Bitwise Operator1'
     */
    if (((DMDR_ac_B.VariantMerge_For_Variant_Source_VariantS &
            KeDMDR_g_EVModeOptPerInhibitMaskVal) >= 1U) ||
            ((DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_c &
              KeDMDR_g_EVModeOptPerInhibit2MaskVal) >= 1U))
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)
            4096));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)4096))));
    }

    /* End of Switch: '<S149>/Switch9' */

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Gain: '<S270>/Gain' incorporates:
     *  Inport: '<S5>/VeDMIR_b_DrvMdNotAvailDiag'
     */
    VeDMDC_b_EVNotAvailDiag = rtb_AND_j3;

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Switch: '<S149>/Switch4' incorporates:
     *  DataStoreRead: '<S149>/DSRead10'
     *  DataStoreRead: '<S149>/DSRead9'
     *  DataStoreWrite: '<S149>/DSWrite4'
     *  S-Function (sfix_bitop): '<S245>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S245>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S245>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S254>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_EVNotAvailDiag)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)16));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)16))));
    }

    /* End of Switch: '<S149>/Switch4' */

    /* Gain: '<S271>/Gain' */
    VeDMDC_b_EVNotAvailAccel = VeDMDC_b_EngOnWOTRsnFinal;

    /* Switch: '<S149>/Switch3' incorporates:
     *  DataStoreRead: '<S149>/DSRead7'
     *  DataStoreRead: '<S149>/DSRead8'
     *  DataStoreWrite: '<S149>/DSWrite3'
     *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S244>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S253>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_EVNotAvailAccel)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)8));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)8))));
    }

    /* End of Switch: '<S149>/Switch3' */

    /* Logic: '<S159>/Logical5' incorporates:
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     */
    VeDMDC_b_ManLow = ((rtb_Logical4_n && (KeDMDR_b_ManualMdAllwInEV)) &&
                       (KeDMDR_b_EVManLowDenMsg));

    /* Switch: '<S159>/Switch1' incorporates:
     *  DataStoreRead: '<S159>/DSRead1'
     *  DataStoreRead: '<S159>/DSRead2'
     *  DataStoreWrite: '<S159>/DSWrite1'
     *  S-Function (sfix_bitop): '<S171>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S171>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S171>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S173>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_ManLow)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)
            256));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)256))));
    }

    /* End of Switch: '<S159>/Switch1' */

    /* Logic: '<S159>/Logical7' incorporates:
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S182>/Calib'
     *  Logic: '<S159>/Logical1'
     *  Logic: '<S159>/Logical6'
     */
    VeDMDC_b_ManLock = ((((KeDMDR_b_EVManLockDenMsg) &&
                          (KeDMDR_b_ManualMdAllwInEV)) && rtb_AND_nz) ||
                        ((KeDMDR_b_DNATipHMIEna) &&
                         (DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_k)));

    /* Switch: '<S159>/Switch4' incorporates:
     *  DataStoreRead: '<S159>/DSRead10'
     *  DataStoreRead: '<S159>/DSRead9'
     *  DataStoreWrite: '<S159>/DSWrite4'
     *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S174>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_ManLock)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)64));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)64))));
    }

    /* End of Switch: '<S159>/Switch4' */

    /* UnitDelay: '<S296>/Unit Delay' incorporates:
     *  Constant: '<S222>/Constant'
     *  Constant: '<S223>/Constant'
     *  Constant: '<S224>/Constant'
     *  Constant: '<S225>/Constant'
     *  Constant: '<S226>/Constant'
     *  Logic: '<S164>/Logical1'
     *  RelationalOperator: '<S164>/Comparison2'
     *  RelationalOperator: '<S164>/Comparison4'
     *  RelationalOperator: '<S164>/Comparison5'
     *  RelationalOperator: '<S164>/Comparison6'
     *  RelationalOperator: '<S164>/Comparison7'
     */
    rtb_UnitDelay_n = (((((((uint32)
                            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
                           CeTMDR_e_Snow) || (((uint32)
                            DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
                           CeTMDR_e_MudSand)) || (((uint32)
                           DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
                          CeTMDR_e_Sand)) || (((uint32)
                          DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
                         CeTMDR_e_Mud)) || (((uint32)
                         DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
                        CeTMDR_e_Rock));

    /* Logic: '<S164>/Logical5' */
    Logical4 = !VeDMDC_b_TerrainMdEvAllw;

    /* Logic: '<S164>/Logical2' incorporates:
     *  Constant: '<S220>/Constant'
     *  Constant: '<S236>/Calib'
     *  RelationalOperator: '<S164>/Comparison3'
     */
    VeDMDC_b_TrrnLock = (((rtb_UnitDelay_n && (((uint32)
        DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i) == CeTMDR_e_AWD_Lock))
                          && (KeDMDR_b_EVLockDenMsg)) && Logical4);

    /* Switch: '<S164>/Switch1' incorporates:
     *  DataStoreRead: '<S164>/DSRead1'
     *  DataStoreRead: '<S164>/DSRead2'
     *  DataStoreWrite: '<S164>/DSWrite1'
     *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S214>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S216>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_TrrnLock)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)32));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)32))));
    }

    /* End of Switch: '<S164>/Switch1' */

    /* Logic: '<S164>/Logical3' incorporates:
     *  Constant: '<S221>/Constant'
     *  Constant: '<S233>/Calib'
     *  RelationalOperator: '<S164>/Comparison1'
     */
    VeDMDC_b_TrrnLow = ((((KeDMDR_b_ESaveSportDenMsg) && (((uint32)
                            DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_i) ==
                           CeTMDR_e_AWD_Low)) && rtb_UnitDelay_n) && Logical4);

    /* Switch: '<S164>/Switch4' incorporates:
     *  DataStoreRead: '<S164>/DSRead10'
     *  DataStoreRead: '<S164>/DSRead9'
     *  DataStoreWrite: '<S164>/DSWrite4'
     *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S215>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S217>/FixPt Bitwise Operator1'
     */
    if (VeDMDC_b_TrrnLow)
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(VeDMDR_d_EVDeniedRsn_DS | ((uint16)
            128));
    }
    else
    {
        VeDMDR_d_EVDeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_EVDeniedRsn_DS)) | ((uint16)128))));
    }

    /* End of Switch: '<S164>/Switch4' */

    /* UnitDelay: '<S296>/Unit Delay' incorporates:
     *  Constant: '<S150>/Constant'
     *  RelationalOperator: '<S146>/Comparison4'
     */
    rtb_UnitDelay_n = (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) == CeDMDR_e_EV);

    /* Logic: '<S146>/Logical1' */
    rtb_Logical1_mh = ((DMDR_ac_B.Gain_is) || (VeDMDC_b_EngOnInEV));

    /* Outputs for Atomic SubSystem: '<S146>/StopWatchResetEnabled' */
    /* Switch: '<S152>/Switch' incorporates:
     *  Logic: '<S146>/Logical2'
     *  Logic: '<S146>/Logical3'
     *  Logic: '<S146>/Logical4'
     *  Logic: '<S146>/Logical5'
     *  Switch: '<S152>/Switch2'
     */
    if (((!rtb_Logical1_mh) && rtb_UnitDelay_n) || (!rtb_UnitDelay_n))
    {
        /* Switch: '<S152>/Switch' incorporates:
         *  Constant: '<S152>/Constant Value2'
         */
        VeDMDC_t_EngOnBlink = 0.0F;
    }
    else
    {
        if (rtb_Logical1_mh)
        {
            /* Switch: '<S152>/Switch' incorporates:
             *  Constant: '<S151>/Calib'
             *  Sum: '<S152>/Subtraction'
             *  Switch: '<S152>/Switch2'
             *  UnitDelay: '<S152>/Unit Delay'
             */
            VeDMDC_t_EngOnBlink = HeDMDR_t_MedTED_dT + VeDMDC_t_EngOnBlink;
        }
    }

    /* End of Switch: '<S152>/Switch' */
    /* End of Outputs for SubSystem: '<S146>/StopWatchResetEnabled' */

    /* Switch: '<S272>/Switch' incorporates:
     *  DataStoreRead: '<S272>/Data Store Read'
     *  DataStoreRead: '<S272>/Data Store Read1'
     *  DataStoreWrite: '<S272>/Data Store Write'
     *  Logic: '<S30>/Logical6'
     *  S-Function (sfix_bitop): '<S274>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S274>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S274>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S277>/FixPt Bitwise Operator1'
     */
    if ((!rtb_DMDC_b_EcoAllwd_n) || (!tmpRead_2))
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(VeDMDR_d_ECODeniedRsn_DS | ((uint16)
            1));
    }
    else
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ECODeniedRsn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S272>/Switch' */

    /* Switch: '<S272>/Switch1' incorporates:
     *  DataStoreRead: '<S272>/Data Store Read2'
     *  DataStoreRead: '<S272>/Data Store Read3'
     *  DataStoreWrite: '<S272>/Data Store Write1'
     *  Logic: '<S272>/Logical'
     *  S-Function (sfix_bitop): '<S275>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S275>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S275>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S278>/FixPt Bitwise Operator1'
     */
    if (!rtb_DMDC_b_EcoAllwd_n)
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(VeDMDR_d_ECODeniedRsn_DS | ((uint16)
            2));
    }
    else
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ECODeniedRsn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S272>/Switch1' */

    /* Switch: '<S272>/Switch2' incorporates:
     *  DataStoreRead: '<S272>/Data Store Read4'
     *  DataStoreRead: '<S272>/Data Store Read5'
     *  DataStoreWrite: '<S272>/Data Store Write2'
     *  Logic: '<S272>/Logical1'
     *  S-Function (sfix_bitop): '<S276>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S276>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S276>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S279>/FixPt Bitwise Operator1'
     */
    if (!tmpRead_2)
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(VeDMDR_d_ECODeniedRsn_DS | ((uint16)
            4));
    }
    else
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ECODeniedRsn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S272>/Switch2' */

    /* RelationalOperator: '<S162>/Comparison4' incorporates:
     *  RelationalOperator: '<S27>/Comparison4'
     *  Switch: '<S27>/Switch4'
     *  Switch: '<S38>/Switch1'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_a = DMDR_ac_B.DrvMdSts_p;

    /* RelationalOperator: '<S27>/Comparison4' incorporates:
     *  Constant: '<S73>/Constant'
     */
    rtb_Logical1_mh = (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) == CeDMDR_e_ESave);

    /* Outputs for Atomic SubSystem: '<S27>/EdgeRising' */
    /* Logic: '<S72>/AND' incorporates:
     *  Logic: '<S72>/OR1'
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_AND_j3 = (rtb_Logical1_mh && (!DMDR_ac_DW.UnitDelay_DSTATE_g));

    /* Update for UnitDelay: '<S72>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_g = rtb_Logical1_mh;

    /* End of Outputs for SubSystem: '<S27>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S27>/Signal Latch Off With Reset' */
    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Logic: '<S77>/OR2' incorporates:
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Inport: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  Logic: '<S27>/Logical2'
     *  Logic: '<S77>/OR'
     *  RelationalOperator: '<S27>/Comparison1'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_bi = (((rtb_Sum3 <
        KeDMDR_Pct_FixedEsvActvTrgtSOC) && (HeDMDR_b_REEVEnbld)) && (rtb_AND_j3 ||
        (DMDR_ac_DW.UnitDelay_DSTATE_bi)));

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
    /* End of Outputs for SubSystem: '<S27>/Signal Latch Off With Reset' */

    /* Switch: '<S38>/Switch1' incorporates:
     *  Constant: '<S43>/Calib'
     *  Logic: '<S27>/Logical'
     *  Logic: '<S27>/Logical1'
     *  Switch: '<S27>/Switch4'
     *  UnitDelay: '<S77>/Unit Delay'
     */
    if (KeDMDR_b_ArbDrvMdOvrrd)
    {
        /* Switch: '<S38>/Switch1' incorporates:
         *  Constant: '<S52>/Calib'
         */
        DMDR_ac_B.DataTypeConversion_b = KeDMDR_e_ArbDrvMdOvrrVal;
    }
    else if (((DMDR_ac_DW.UnitDelay_DSTATE_bi) || (VeDMDC_b_ESaveActive)) &&
             rtb_Logical1_mh)
    {
        /* Switch: '<S27>/Switch4' incorporates:
         *  Constant: '<S74>/Constant'
         *  Switch: '<S38>/Switch1'
         */
        DMDR_ac_B.DataTypeConversion_b = CeDMDR_e_ESaveActive;
    }
    else
    {
        /* Switch: '<S38>/Switch1' */
        DMDR_ac_B.DataTypeConversion_b = DMDR_ac_DW.UnitDelay_DSTATE_a;
    }

    /* RelationalOperator: '<S162>/Comparison4' incorporates:
     *  DataTypeConversion: '<S24>/DataTypeConversion'
     *  RelationalOperator: '<S22>/Comparison2'
     *  RelationalOperator: '<S22>/Comparison4'
     *  RelationalOperator: '<S22>/Comparison5'
     *  Selector: '<S24>/Selector2'
     *  Switch: '<S38>/Switch1'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_a = DMDR_ac_B.DataTypeConversion_b;

    /* Selector: '<S24>/Selector2' incorporates:
     *  Constant: '<S42>/Calib'
     *  DataTypeConversion: '<S24>/DataTypeConversion'
     */
    DMDR_ac_B.Selector2_c = KaDMDR_i_DrvMdArbIndex
        [(DMDR_ac_DW.UnitDelay_DSTATE_a)];

    /* Switch: '<S37>/Switch1' incorporates:
     *  Constant: '<S46>/Calib'
     */
    if (KeDMDR_b_EVMdDeniedOvrrd)
    {
        /* Switch: '<S37>/Switch1' incorporates:
         *  Constant: '<S47>/Calib'
         */
        VeDMDC_b_EVModeDenied = KeDMDR_b_EVMdDeniedOvrrdVal;
    }
    else
    {
        /* Switch: '<S37>/Switch1' */
        VeDMDC_b_EVModeDenied = DMDR_ac_B.VeDMDR_b_EVModeDenied;
    }

    /* End of Switch: '<S37>/Switch1' */

    /* Switch: '<S39>/Switch1' incorporates:
     *  Constant: '<S48>/Calib'
     */
    if (KeDMDR_b_HybMdDeniedOvrrd)
    {
        /* Switch: '<S39>/Switch1' incorporates:
         *  Constant: '<S49>/Calib'
         */
        DMDR_ac_B.Switch1 = KeDMDR_b_HybMdDeniedOvrrdVal;
    }
    else
    {
        /* Switch: '<S39>/Switch1' */
        DMDR_ac_B.Switch1 = DMDR_ac_B.VeDMDR_b_HybModeDenied;
    }

    /* End of Switch: '<S39>/Switch1' */

    /* RelationalOperator: '<S24>/RelationalOperator' incorporates:
     *  DataStoreRead: '<S24>/DataStoreRead13'
     */
    rtb_Logical1_mh = (((sint32)VeDMDR_d_EVSaveDeniedRsn_DS) == 32);

    /* Outputs for Atomic SubSystem: '<S24>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S53>/EdgeFalling' */
    /* Logic: '<S54>/AND' incorporates:
     *  Logic: '<S54>/OR1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    rtb_AND_j3 = ((!rtb_Logical1_mh) && (DMDR_ac_DW.UnitDelay_DSTATE_ju));

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_ju = rtb_Logical1_mh;

    /* End of Outputs for SubSystem: '<S53>/EdgeFalling' */

    /* Switch: '<S53>/Switch' incorporates:
     *  Constant: '<S24>/Constant2'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S53>/Constant Value1'
     *  MinMax: '<S53>/Minimum'
     *  Sum: '<S53>/Summation'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    if (rtb_AND_j3)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_l = 5.0F;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_l = fmaxf(DMDR_ac_DW.UnitDelay_DSTATE_l -
            HeDMDR_t_MedTED_dT, 0.0F);
    }

    /* End of Switch: '<S53>/Switch' */

    /* Switch: '<S24>/Switch' incorporates:
     *  Constant: '<S44>/Calib'
     *  Constant: '<S53>/Constant Value2'
     *  Logic: '<S53>/AND'
     *  RelationalOperator: '<S53>/Greater  Than'
     *  Switch: '<S40>/Switch1'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    if (rtb_Logical1_mh || (DMDR_ac_DW.UnitDelay_DSTATE_l > 0.0F))
    {
        /* Switch: '<S24>/Switch' incorporates:
         *  Constant: '<S24>/Constant1'
         */
        DMDR_ac_B.VeDMDC_b_ESaveModeDenied = true;
    }
    else if (KeDMDR_b_ESaveMdDeniedOvrrd)
    {
        /* Switch: '<S40>/Switch1' incorporates:
         *  Constant: '<S45>/Calib'
         *  Switch: '<S24>/Switch'
         */
        DMDR_ac_B.VeDMDC_b_ESaveModeDenied = KeDMDR_b_ESaveMdDeniedOvrrdVal;
    }
    else
    {
        /* Switch: '<S24>/Switch' incorporates:
         *  Switch: '<S40>/Switch1'
         */
        DMDR_ac_B.VeDMDC_b_ESaveModeDenied = DMDR_ac_B.VeDMDR_b_ESaveModeDenied;
    }

    /* End of Switch: '<S24>/Switch' */
    /* End of Outputs for SubSystem: '<S24>/TurnOffDelayTime' */

    /* Switch: '<S41>/Switch1' incorporates:
     *  Constant: '<S50>/Calib'
     */
    if (KeDMDR_b_SportMdDeniedOvrrd)
    {
        /* Switch: '<S41>/Switch1' incorporates:
         *  Constant: '<S51>/Calib'
         */
        DMDR_ac_B.Switch1_p = KeDMDR_b_SportMdDeniedOvrrdVal;
    }
    else
    {
        /* Switch: '<S41>/Switch1' */
        DMDR_ac_B.Switch1_p = DMDR_ac_B.VeDMDR_b_SportModeDenied;
    }

    /* End of Switch: '<S41>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S63>/EdgeRising1' */
    /* Logic: '<S70>/OR1' incorporates:
     *  UnitDelay: '<S70>/Unit Delay'
     */
    rtb_Logical1_mh = !DMDR_ac_DW.UnitDelay_DSTATE_da;

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Update for UnitDelay: '<S70>/Unit Delay' incorporates:
     *  Inport: '<S5>/VeHMIR_b_DriveReady'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_da = rtb_RelationalOperator_e;

    /* Outputs for Atomic SubSystem: '<S63>/Count Down  Reset Enabled' */
    /* Switch: '<S69>/Switch1' incorporates:
     *  Constant: '<S63>/Constant Value1'
     *  Constant: '<S69>/Constant Value'
     *  Inport: '<S5>/VeHMIR_b_DriveReady'
     *  Logic: '<S69>/AND'
     *  Logic: '<S70>/AND'
     *  RelationalOperator: '<S69>/Greater  Than'
     *  Switch: '<S69>/Switch2'
     *  UnitDelay: '<S69>/Unit Delay'
     */
    if (rtb_RelationalOperator_e && rtb_Logical1_mh)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_bw = 3U;
    }
    else
    {
        if (rtb_RelationalOperator_e && (((sint32)DMDR_ac_DW.UnitDelay_DSTATE_bw)
             > 0))
        {
            /* UnitDelay: '<S69>/Unit Delay' incorporates:
             *  Constant: '<S69>/Constant Value1'
             *  Sum: '<S69>/Subtraction'
             *  Switch: '<S69>/Switch2'
             */
            DMDR_ac_DW.UnitDelay_DSTATE_bw = (uint16)((sint32)(((sint32)
                DMDR_ac_DW.UnitDelay_DSTATE_bw) - 1));
        }
    }

    /* End of Switch: '<S69>/Switch1' */
    /* End of Outputs for SubSystem: '<S63>/Count Down  Reset Enabled' */
    /* End of Outputs for SubSystem: '<S63>/EdgeRising1' */

    /* RelationalOperator: '<S26>/Relational Operator' incorporates:
     *  Constant: '<S65>/Constant'
     *  Inport: '<Root>/VeVTXR_e_PowerPanelMd'
     *  Inport: '<S5>/VeVTXR_e_PowerPanelMd'
     */
    rtb_RelationalOperator_e = (((uint32)tmpRead_h) == CeVTXR_e_DefaultMd);

    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Outputs for Atomic SubSystem: '<S26>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S68>/EdgeRising' */
    /* Logic: '<S71>/AND' incorporates:
     *  Logic: '<S71>/OR1'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    rtb_Logical1_mh = (rtb_RelationalOperator_e &&
                       (!DMDR_ac_DW.UnitDelay_DSTATE_fq));

    /* Update for UnitDelay: '<S71>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_fq = rtb_RelationalOperator_e;

    /* End of Outputs for SubSystem: '<S68>/EdgeRising' */

    /* Switch: '<S68>/Switch1' incorporates:
     *  Constant: '<S66>/Calib'
     *  Constant: '<S68>/Constant Value'
     *  Constant: '<S68>/Constant Value1'
     *  Logic: '<S68>/OR'
     *  Logic: '<S68>/OR1'
     *  MinMax: '<S68>/Minimum'
     *  Sum: '<S68>/Summation'
     *  UnitDelay: '<S68>/Unit Delay'
     */
    if ((!rtb_RelationalOperator_e) || rtb_Logical1_mh)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_d = 0U;
    }
    else if (KeDMDR_Cnt_PPDefaultMdOnDelaySample < ((uint16)(((uint32)
                DMDR_ac_DW.UnitDelay_DSTATE_d) + 1U)))
    {
        /* MinMax: '<S68>/Minimum' incorporates:
         *  Constant: '<S66>/Calib'
         */
        DMDR_ac_DW.UnitDelay_DSTATE_d = KeDMDR_Cnt_PPDefaultMdOnDelaySample;
    }
    else
    {
        /* MinMax: '<S68>/Minimum' incorporates:
         *  Constant: '<S68>/Constant Value'
         *  Sum: '<S68>/Summation'
         *  UnitDelay: '<S68>/Unit Delay'
         */
        DMDR_ac_DW.UnitDelay_DSTATE_d = (uint16)(((uint32)
            DMDR_ac_DW.UnitDelay_DSTATE_d) + 1U);
    }

    /* End of Switch: '<S68>/Switch1' */
    /* End of Outputs for SubSystem: '<S26>/Turn On Delay Sample' */

    /* Switch: '<S26>/Switch4' incorporates:
     *  Constant: '<S66>/Calib'
     *  Constant: '<S69>/Constant Value2'
     *  Logic: '<S68>/AND'
     *  RelationalOperator: '<S68>/Greater  Than'
     *  RelationalOperator: '<S69>/Greater  Than1'
     *  Switch: '<S26>/Switch1'
     *  Switch: '<S26>/Switch2'
     *  UnitDelay: '<S68>/Unit Delay'
     *  UnitDelay: '<S69>/Unit Delay'
     */
    if (VeDMIR_b_LatchEV)
    {
        /* Switch: '<S26>/Switch4' incorporates:
         *  Constant: '<S64>/Constant'
         */
        DMDR_ac_B.VeDMDC_e_DrvMdInt = CeDMDR_e_EV;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S63>/Count Down  Reset Enabled' */
        if (((sint32)DMDR_ac_DW.UnitDelay_DSTATE_bw) > 0)
        {
            /* Switch: '<S26>/Switch1' incorporates:
             *  Constant: '<S67>/Calib'
             *  Switch: '<S26>/Switch4'
             */
            DMDR_ac_B.VeDMDC_e_DrvMdInt = KeDMDR_e_InitDrvMd;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S26>/Turn On Delay Sample' */
            if (rtb_RelationalOperator_e && (DMDR_ac_DW.UnitDelay_DSTATE_d >=
                    KeDMDR_Cnt_PPDefaultMdOnDelaySample))
            {
                /* Switch: '<S26>/Switch2' incorporates:
                 *  Switch: '<S26>/Switch1'
                 *  Switch: '<S26>/Switch4'
                 */
                DMDR_ac_B.VeDMDC_e_DrvMdInt = DMDR_ac_B.DrvMdInt;
            }
            else
            {
                /* Switch: '<S26>/Switch4' incorporates:
                 *  Switch: '<S26>/Switch1'
                 *  UnitDelay: '<S26>/Unit Delay'
                 */
                DMDR_ac_B.VeDMDC_e_DrvMdInt = DMDR_ac_DW.UnitDelay_DSTATE_f3;
            }

            /* End of Outputs for SubSystem: '<S26>/Turn On Delay Sample' */
        }

        /* End of Outputs for SubSystem: '<S63>/Count Down  Reset Enabled' */
    }

    /* End of Switch: '<S26>/Switch4' */

    /* Gain: '<S15>/Gain' */
    DMDR_ac_B.Gain_d = VeDMDC_b_EngOnWOTRsnFinal;

    /* Gain: '<S17>/Gain' */
    DMDR_ac_B.Gain_j0 = VeDMDC_b_EngOnInEV;

    /* RelationalOperator: '<S22>/Comparison4' incorporates:
     *  Constant: '<S297>/Constant'
     */
    rtb_RelationalOperator_e = (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) ==
        CeDMDR_e_ESave);

    /* RelationalOperator: '<S22>/Comparison5' incorporates:
     *  Constant: '<S300>/Constant'
     */
    rtb_Logical1_mh = (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) ==
                       CeDMDR_e_ESaveActive);

    /* Outputs for Atomic SubSystem: '<S22>/EdgeRising' */
    /* Logic: '<S296>/OR1' incorporates:
     *  UnitDelay: '<S296>/Unit Delay'
     */
    VeDMIR_b_LatchEV = !DMDR_ac_DW.UnitDelay_DSTATE_lc;

    /* Update for UnitDelay: '<S296>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_lc = rtb_RelationalOperator_e;

    /* End of Outputs for SubSystem: '<S22>/EdgeRising' */

    /* If: '<S22>/If' incorporates:
     *  Constant: '<S298>/Constant'
     *  Constant: '<S299>/Constant'
     *  Constant: '<S309>/Calib'
     *  Constant: '<S326>/Calib'
     *  Inport: '<S322>/BatSOC_in'
     *  Inport: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Arb'
     *  Logic: '<S22>/Logical'
     *  Logic: '<S22>/Logical1'
     *  Logic: '<S324>/Logical1'
     *  RelationalOperator: '<S22>/Comparison2'
     *  RelationalOperator: '<S22>/Comparison3'
     *  RelationalOperator: '<S324>/Comparison1'
     *  Sum: '<S324>/Sum'
     */
    if (rtb_RelationalOperator_e && (!rtb_Logical1_mh))
    {
        /* Outputs for IfAction SubSystem: '<S22>/ESave_Passive' incorporates:
         *  ActionPort: '<S295>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S324>/EdgeRising1' */
        /* Logic: '<S325>/OR1' incorporates:
         *  UnitDelay: '<S325>/Unit Delay'
         */
        rtb_RelationalOperator_e = !DMDR_ac_DW.UnitDelay_DSTATE_lb;

        /* Update for UnitDelay: '<S325>/Unit Delay' incorporates:
         *  Constant: '<S324>/TRUE Constant'
         */
        DMDR_ac_DW.UnitDelay_DSTATE_lb = true;

        /* End of Outputs for SubSystem: '<S324>/EdgeRising1' */

        /* Switch: '<S324>/Switch' incorporates:
         *  Constant: '<S327>/Calib'
         *  Logic: '<S296>/AND'
         */
        if (KeDMDR_b_EnblNwSOCTrgtRst)
        {
            /* Outputs for Atomic SubSystem: '<S22>/EdgeRising' */
            rtb_RelationalOperator_e = VeDMIR_b_LatchEV;

            /* End of Outputs for SubSystem: '<S22>/EdgeRising' */
        }

        /* End of Switch: '<S324>/Switch' */

        /* Outputs for Enabled SubSystem: '<S295>/IfActionSubsystem' incorporates:
         *  EnablePort: '<S322>/Enable'
         */
        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
        if (rtb_RelationalOperator_e || (rtb_Sum3 >= (VeDMDC_Pct_SOCTargetRaw +
                KeDMDR_Pct_SOCIncrease)))
        {
            DMDR_ac_B.BatSOC_in = rtb_Sum3;
        }

        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
        /* End of Outputs for SubSystem: '<S295>/IfActionSubsystem' */

        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S326>/Calib'
         *  Inport: '<S322>/BatSOC_in'
         *  Inport: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         *  Logic: '<S324>/Logical1'
         *  RelationalOperator: '<S324>/Comparison1'
         *  SignalConversion generated from: '<S295>/VeDMDC_Pct_SOCTarget'
         *  Sum: '<S324>/Sum'
         */
        VeDMDC_Pct_SOCTarget = DMDR_ac_B.BatSOC_in;

        /* Merge: '<S22>/Merge3' incorporates:
         *  Constant: '<S323>/Calib'
         *  SignalConversion generated from: '<S295>/VeDMDC_Pct_SOCPctOffset'
         */
        rtb_Merge3 = KeDMDR_Pct_ActualSOCOffsetESavePassiveMd;

        /* End of Outputs for SubSystem: '<S22>/ESave_Passive' */
    }
    else if (rtb_Logical1_mh)
    {
        /* Outputs for IfAction SubSystem: '<S22>/ESave_Active' incorporates:
         *  ActionPort: '<S294>/Action Port'
         */
        /* Switch: '<S294>/Switch' incorporates:
         *  Constant: '<S319>/Calib'
         */
        if (KeDMDR_b_EnblRcvHMISOCRng)
        {
            /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
            /* Switch: '<S312>/Switch1' incorporates:
             *  Inport: '<S5>/VeDMIR_Pct_HV_BatSOCTarget'
             *  Lookup_n-D: '<S320>/Vector'
             */
            VeDMDC_Pct_SOCTarget = look1_iflf_binlca_16a(rtb_Sum2, ((const
                float32 *)&(KxDMDR_Pct_DispSOCTarget[0])), ((const float32 *)
                &(KtDMDR_Pct_DispSOCTarget[0])), 10U);

            /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
        }
        else
        {
            /* Switch: '<S312>/Switch1' incorporates:
             *  Constant: '<S318>/Calib'
             */
            VeDMDC_Pct_SOCTarget = KeDMDR_Pct_FixedEsvActvTrgtSOC;
        }

        /* End of Switch: '<S294>/Switch' */

        /* Merge: '<S22>/Merge3' incorporates:
         *  Constant: '<S317>/Calib'
         *  SignalConversion generated from: '<S294>/VeDMDC_Pct_SOCPctOffset'
         */
        rtb_Merge3 = KeDMDR_Pct_ActualSOCOffsetESaveAggrMd;

        /* End of Outputs for SubSystem: '<S22>/ESave_Active' */
    }
    else if (((((uint32)DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh) ==
               CeTMDR_e_Sport) || (((uint32)DMDR_ac_DW.UnitDelay_DSTATE_a) ==
               CeDMDR_e_Sport)) && (KeDMDR_b_SOCInSportNotDefault))
    {
        /* Outputs for IfAction SubSystem: '<S22>/Sport' incorporates:
         *  ActionPort: '<S315>/Action Port'
         */
        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S334>/Calib'
         *  SignalConversion generated from: '<S315>/VeDMDC_Pct_SOCTarget'
         */
        VeDMDC_Pct_SOCTarget = KeDMDR_Pct_TargetSOCSport;

        /* Merge: '<S22>/Merge3' incorporates:
         *  Constant: '<S333>/Calib'
         *  SignalConversion generated from: '<S315>/VeDMDC_Pct_SOCPctOffset'
         */
        rtb_Merge3 = KeDMDR_Pct_ActualSOCOffsetSportMd;

        /* End of Outputs for SubSystem: '<S22>/Sport' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S22>/Non_ESave' incorporates:
         *  ActionPort: '<S314>/Action Port'
         */
        /* Switch: '<S312>/Switch1' incorporates:
         *  Constant: '<S331>/Calib'
         *  SignalConversion generated from: '<S314>/VeDMDC_Pct_SOCTarget'
         */
        VeDMDC_Pct_SOCTarget = KeDMDR_Pct_TargetSOCDefault;

        /* Merge: '<S22>/Merge3' incorporates:
         *  Constant: '<S330>/Calib'
         *  SignalConversion generated from: '<S314>/VeDMDC_Pct_SOCPctOffset'
         */
        rtb_Merge3 = KeDMDR_Pct_ActualSOCOffsetDefault;

        /* End of Outputs for SubSystem: '<S22>/Non_ESave' */
    }

    /* End of If: '<S22>/If' */

    /* Switch: '<S302>/Switch1' incorporates:
     *  Constant: '<S310>/Calib'
     */
    if (KeDMDR_b_SOCTargetOvrrd)
    {
        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S308>/Calib'
         */
        VeDMDC_Pct_SOCTargetRaw = KeDMDR_Pct_SOCTargetOvrrdVal;
    }
    else
    {
        /* Switch: '<S302>/Switch1' */
        VeDMDC_Pct_SOCTargetRaw = VeDMDC_Pct_SOCTarget;
    }

    /* End of Switch: '<S302>/Switch1' */

    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S311>/Calib'
     */
    if (KeDMDR_b_UseTargetSOCCalValue)
    {
        /* Switch: '<S303>/Switch1' */
        rtb_Sum3 = VeDMDC_Pct_SOCTargetRaw;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
        /* Sum: '<S22>/Sum2' incorporates:
         *  Inport: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        rtb_Sum2 = rtb_Sum3 + rtb_Merge3;

        /* Sum: '<S22>/Sum3' incorporates:
         *  Inport: '<S5>/VeBPCR_Pct_HV_BatPackSOC_Arb'
         */
        rtb_Sum3 -= rtb_Merge3;

        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

        /* Outputs for Atomic SubSystem: '<S22>/Limiter2' */
        /* Switch: '<S313>/Switch1' incorporates:
         *  RelationalOperator: '<S313>/Relational Operator'
         */
        if (rtb_Sum2 >= VeDMDC_Pct_SOCTargetRaw)
        {
            /* Switch: '<S313>/Switch1' */
            rtb_Sum2 = VeDMDC_Pct_SOCTargetRaw;
        }

        /* End of Switch: '<S313>/Switch1' */

        /* Switch: '<S313>/Switch' incorporates:
         *  RelationalOperator: '<S313>/Relational Operator1'
         */
        if (rtb_Sum2 > rtb_Sum3)
        {
            /* Switch: '<S303>/Switch1' */
            rtb_Sum3 = rtb_Sum2;
        }

        /* End of Switch: '<S313>/Switch' */
        /* End of Outputs for SubSystem: '<S22>/Limiter2' */
    }

    /* End of Switch: '<S303>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S22>/GradientLimiter' */
    /* Sum: '<S301>/Sum2' incorporates:
     *  UnitDelay: '<S301>/Unit Delay'
     */
    rtb_Sum3 -= DMDR_ac_DW.UnitDelay_DSTATE_f;

    /* Outputs for Atomic SubSystem: '<S301>/Limiter' */
    /* Switch: '<S328>/Switch1' incorporates:
     *  Constant: '<S304>/Calib'
     *  RelationalOperator: '<S328>/Relational Operator'
     */
    if (KeDMDR_Cnt_TargetSOC_BlendInRate < rtb_Sum3)
    {
        /* Switch: '<S328>/Switch1' */
        rtb_Sum3 = KeDMDR_Cnt_TargetSOC_BlendInRate;
    }

    /* End of Switch: '<S328>/Switch1' */

    /* Switch: '<S328>/Switch' incorporates:
     *  Constant: '<S305>/Calib'
     *  RelationalOperator: '<S328>/Relational Operator1'
     */
    if (rtb_Sum3 <= KeDMDR_Cnt_TargetSOC_BlendOutRate)
    {
        rtb_Sum3 = KeDMDR_Cnt_TargetSOC_BlendOutRate;
    }

    /* End of Switch: '<S328>/Switch' */
    /* End of Outputs for SubSystem: '<S301>/Limiter' */

    /* Sum: '<S301>/Sum3' incorporates:
     *  UnitDelay: '<S301>/Unit Delay'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_f += rtb_Sum3;

    /* End of Outputs for SubSystem: '<S22>/GradientLimiter' */

    /* Outputs for Atomic SubSystem: '<S22>/Limiter1' */
    /* Switch: '<S312>/Switch1' incorporates:
     *  Constant: '<S306>/Calib'
     *  RelationalOperator: '<S312>/Relational Operator'
     *  UnitDelay: '<S301>/Unit Delay'
     */
    if (KeDMDR_Pct_SOCTargetMax < DMDR_ac_DW.UnitDelay_DSTATE_f)
    {
        /* Switch: '<S312>/Switch1' */
        VeDMDC_Pct_SOCTarget = KeDMDR_Pct_SOCTargetMax;
    }
    else
    {
        /* Switch: '<S312>/Switch1' */
        VeDMDC_Pct_SOCTarget = DMDR_ac_DW.UnitDelay_DSTATE_f;
    }

    /* End of Switch: '<S312>/Switch1' */

    /* Switch: '<S312>/Switch' incorporates:
     *  Constant: '<S307>/Calib'
     *  RelationalOperator: '<S312>/Relational Operator1'
     */
    if (VeDMDC_Pct_SOCTarget <= KeDMDR_Pct_SOCTargetMin)
    {
        /* Switch: '<S312>/Switch' */
        VeDMDC_Pct_SOCTarget = KeDMDR_Pct_SOCTargetMin;
    }

    /* End of Switch: '<S312>/Switch' */
    /* End of Outputs for SubSystem: '<S22>/Limiter1' */

    /* Gain: '<S19>/Gain' */
    DMDR_ac_B.Gain = VeDMDC_Pct_SOCTarget;

    /* Gain: '<S20>/Gain' */
    DMDR_ac_B.Gain_kd = VeDMDC_b_EVModeDenied;

    /* Gain: '<S21>/Gain' */
    DMDR_ac_B.Gain_a = DMDR_ac_B.VeDMDR_b_EcoModeDenied_i;

    /* Gain: '<S9>/Gain' incorporates:
     *  DataStoreRead: '<S4>/DSRead'
     */
    DMDR_ac_B.Gain_j = VeDMDR_d_ESaveActvDeniedRsn_DS;

    /* Gain: '<S10>/Gain' incorporates:
     *  DataStoreRead: '<S4>/DSRead1'
     */
    DMDR_ac_B.Gain_i = VeDMDR_d_EVDeniedRsn_DS;

    /* Gain: '<S11>/Gain' incorporates:
     *  DataStoreRead: '<S4>/DSRead2'
     */
    DMDR_ac_B.Gain_o = VeDMDR_d_EVSaveDeniedRsn_DS;

    /* Gain: '<S12>/Gain' incorporates:
     *  DataStoreRead: '<S4>/DSRead3'
     */
    DMDR_ac_B.Gain_b = VeDMDR_d_ECODeniedRsn_DS;

    /* Update for RelationalOperator: '<S162>/Comparison4' incorporates:
     *  UnitDelay: '<S13>/Unit Delay'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_a = DMDR_ac_B.DrvMdSts_p;

    /* Update for Switch: '<S25>/Switch4' incorporates:
     *  UnitDelay: '<S25>/Unit Delay1'
     */
    DMDR_ac_DW.UnitDelay1_DSTATE = VeDMDC_t_EngOnBlink;

    /* Update for UnitDelay: '<S82>/Unit Delay' incorporates:
     *  UnitDelay: '<S13>/Unit Delay'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_mc = rtb_UnitDelay_gb;

    /* Update for UnitDelay: '<S26>/Unit Delay' incorporates:
     *  Switch: '<S26>/Switch4'
     */
    DMDR_ac_DW.UnitDelay_DSTATE_f3 = DMDR_ac_B.VeDMDC_e_DrvMdInt;

    /* End of Outputs for SubSystem: '<S1>/DMDC_FUNC' */
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    /* Outputs for Function Call SubSystem: '<S1>/TurtleMd' */
    /* Outputs for Atomic SubSystem: '<S6>/Hysteresis' */
    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* Switch: '<S365>/Switch1' incorporates:
     *  Constant: '<S365>/Constant Value'
     *  Constant: '<S376>/Calib'
     *  Constant: '<S377>/Calib'
     *  Inport: '<S5>/VeERER_l_EstRange'
     *  RelationalOperator: '<S365>/Greater  Than'
     *  RelationalOperator: '<S365>/Greater  Than1'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    if (tmpRead_7 > KeDMDR_l_TurtleMd_RSP)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_fs = true;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_fs = ((tmpRead_7 >= KeDMDR_l_TurtleMd_LSP) &&
            (DMDR_ac_DW.UnitDelay_DSTATE_fs));
    }

    /* End of Switch: '<S365>/Switch1' */
    /* End of Outputs for SubSystem: '<S6>/Hysteresis' */

    /* Outputs for Atomic SubSystem: '<S6>/Hysteresis1' */
    /* Switch: '<S366>/Switch1' incorporates:
     *  Constant: '<S366>/Constant Value'
     *  Constant: '<S374>/Calib'
     *  Constant: '<S375>/Calib'
     *  Inport: '<S5>/VeERER_l_EstRange'
     *  RelationalOperator: '<S366>/Greater  Than'
     *  RelationalOperator: '<S366>/Greater  Than1'
     *  UnitDelay: '<S366>/Unit Delay'
     */
    if (tmpRead_7 > KeDMDR_l_EstRng_TrtlMd4_RSP)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_bb = true;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_bb = ((tmpRead_7 >=
            KeDMDR_l_EstRng_TrtlMd4_LSP) && (DMDR_ac_DW.UnitDelay_DSTATE_bb));
    }

    /* End of Switch: '<S366>/Switch1' */
    /* End of Outputs for SubSystem: '<S6>/Hysteresis1' */

    /* Outputs for Atomic SubSystem: '<S6>/Hysteresis2' */
    /* Switch: '<S367>/Switch1' incorporates:
     *  Constant: '<S367>/Constant Value'
     *  Constant: '<S372>/Calib'
     *  Constant: '<S373>/Calib'
     *  Inport: '<S5>/VeERER_l_EstRange'
     *  RelationalOperator: '<S367>/Greater  Than'
     *  RelationalOperator: '<S367>/Greater  Than1'
     *  UnitDelay: '<S367>/Unit Delay'
     */
    if (tmpRead_7 > KeDMDR_l_EstRng_TrtlMd3_RSP)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_k4 = true;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_k4 = ((tmpRead_7 >=
            KeDMDR_l_EstRng_TrtlMd3_LSP) && (DMDR_ac_DW.UnitDelay_DSTATE_k4));
    }

    /* End of Switch: '<S367>/Switch1' */
    /* End of Outputs for SubSystem: '<S6>/Hysteresis2' */

    /* Outputs for Atomic SubSystem: '<S6>/Hysteresis3' */
    /* Switch: '<S368>/Switch1' incorporates:
     *  Constant: '<S368>/Constant Value'
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  Inport: '<S5>/VeERER_l_EstRange'
     *  RelationalOperator: '<S368>/Greater  Than'
     *  RelationalOperator: '<S368>/Greater  Than1'
     *  UnitDelay: '<S368>/Unit Delay'
     */
    if (tmpRead_7 > KeDMDR_l_EstRng_TrtlMd2_RSP)
    {
        DMDR_ac_DW.UnitDelay_DSTATE_j = true;
    }
    else
    {
        DMDR_ac_DW.UnitDelay_DSTATE_j = ((tmpRead_7 >=
            KeDMDR_l_EstRng_TrtlMd2_LSP) && (DMDR_ac_DW.UnitDelay_DSTATE_j));
    }

    /* End of Switch: '<S368>/Switch1' */
    /* End of Outputs for SubSystem: '<S6>/Hysteresis3' */
    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */

    /* Logic: '<S6>/Logical5' incorporates:
     *  UnitDelay: '<S366>/Unit Delay'
     */
    VeDMDR_b_TrtlMd4 = !DMDR_ac_DW.UnitDelay_DSTATE_bb;

    /* Logic: '<S6>/Logical7' incorporates:
     *  UnitDelay: '<S367>/Unit Delay'
     */
    VeDMDR_b_TrtlMd3 = !DMDR_ac_DW.UnitDelay_DSTATE_k4;

    /* Logic: '<S6>/Logical8' incorporates:
     *  UnitDelay: '<S368>/Unit Delay'
     */
    VeDMDR_b_TrtlMd2 = !DMDR_ac_DW.UnitDelay_DSTATE_j;

    /* Switch: '<S369>/Switch1' incorporates:
     *  Constant: '<S364>/Calib'
     *  Inport: '<S5>/VeENGR_b_EngSysLowFuel'
     *  Logic: '<S6>/Logical2'
     *  Logic: '<S6>/Logical3'
     *  UnitDelay: '<S365>/Unit Delay'
     */
    if (HeDMDR_b_REEVEnbld)
    {
        /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
        tmpRead_3 = (tmpRead_4 && (!DMDR_ac_DW.UnitDelay_DSTATE_fs));

        /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
    }
    else
    {
        tmpRead_3 = !DMDR_ac_DW.UnitDelay_DSTATE_fs;
    }

    /* End of Switch: '<S369>/Switch1' */

    /* Outputs for Function Call SubSystem: '<S1>/DMDR_Inputs' */
    /* If: '<S6>/If' incorporates:
     *  Constant: '<S363>/Constant'
     *  Inport: '<Root>/VePLTR_e_ShippingMode'
     *  Inport: '<S5>/VePLTR_e_ShippingMode'
     *  Logic: '<S6>/Logical1'
     *  Logic: '<S6>/Logical6'
     *  RelationalOperator: '<S6>/Comparison6'
     */
    if ((!tmpRead_3) || (((uint32)tmpRead_8) == CePLTR_e_ShipingMode_SHIP_MD))
    {
        /* Outputs for IfAction SubSystem: '<S6>/TurtleMdNo' incorporates:
         *  ActionPort: '<S382>/Action Port'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S387>/Constant'
         *  SignalConversion generated from: '<S382>/TurtleMd'
         */
        DMDR_ac_B.VeDMDR_e_TurtleMdArb = CeDMDR_e_No_Turtle_Mode;

        /* End of Outputs for SubSystem: '<S6>/TurtleMdNo' */
    }
    else if (VeDMDR_b_TrtlMd4)
    {
        /* Outputs for IfAction SubSystem: '<S6>/TurtleMd4' incorporates:
         *  ActionPort: '<S381>/Action Port'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S386>/Constant'
         *  SignalConversion generated from: '<S381>/TurtleMd'
         */
        DMDR_ac_B.VeDMDR_e_TurtleMdArb = CeDMDR_e_Turtle_Mode4;

        /* End of Outputs for SubSystem: '<S6>/TurtleMd4' */
    }
    else if (VeDMDR_b_TrtlMd3)
    {
        /* Outputs for IfAction SubSystem: '<S6>/TurtleMd3' incorporates:
         *  ActionPort: '<S380>/Action Port'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S385>/Constant'
         *  SignalConversion generated from: '<S380>/TurtleMd'
         */
        DMDR_ac_B.VeDMDR_e_TurtleMdArb = CeDMDR_e_Turtle_Mode3;

        /* End of Outputs for SubSystem: '<S6>/TurtleMd3' */
    }
    else if (VeDMDR_b_TrtlMd2)
    {
        /* Outputs for IfAction SubSystem: '<S6>/TurtleMd2' incorporates:
         *  ActionPort: '<S379>/Action Port'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S384>/Constant'
         *  SignalConversion generated from: '<S379>/TurtleMd'
         */
        DMDR_ac_B.VeDMDR_e_TurtleMdArb = CeDMDR_e_Turtle_Mode2;

        /* End of Outputs for SubSystem: '<S6>/TurtleMd2' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S6>/TurtleMd1' incorporates:
         *  ActionPort: '<S378>/Action Port'
         */
        /* Merge: '<S6>/Merge' incorporates:
         *  Constant: '<S383>/Constant'
         *  SignalConversion generated from: '<S378>/TurtleMd'
         */
        DMDR_ac_B.VeDMDR_e_TurtleMdArb = CeDMDR_e_Turtle_Mode1;

        /* End of Outputs for SubSystem: '<S6>/TurtleMd1' */
    }

    /* End of If: '<S6>/If' */
    /* End of Outputs for SubSystem: '<S1>/DMDR_Inputs' */
    /* End of Outputs for SubSystem: '<S1>/TurtleMd' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
#endif

    /* SignalConversion generated from: '<S1>/EcoDenied_PHEV' */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    /* Outport: '<Root>/VeDMDR_b_EcoDenied' */
    (void)Rte_Write_VeDMDR_b_EcoDenied_Value(DMDR_ac_B.Gain_a);

#endif

    /* End of SignalConversion generated from: '<S1>/EcoDenied_PHEV' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Outport: '<Root>/VeDMDR_b_DrvMdInhibit' incorporates:
     *  Gain: '<S362>/Gain'
     *  SignalConversion generated from: '<S1>/Inhibit_DriveMode'
     */
    (void)Rte_Write_VeDMDR_b_DrvMdInhibit_Value(tmpRead_9);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeDMDC_Pct_SOCTarget' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMDC_b_ESaveModeDenied'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_EVModeDenied'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_EngOnInEV'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_EngOnInEVFinal'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_EngOnWOTRsnRaw'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_HybModeDenied'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_SportModeDenied'
     *  SignalConversion generated from: '<S1>/VeDMDC_d_ECODeniedRsn'
     *  SignalConversion generated from: '<S1>/VeDMDC_d_ESaveActvDeniedRsn'
     *  SignalConversion generated from: '<S1>/VeDMDC_d_ESaveDeniedRsn'
     *  SignalConversion generated from: '<S1>/VeDMDC_d_EVDeniedRsn'
     *  SignalConversion generated from: '<S1>/VeDMDC_e_DrvMdArb'
     *  SignalConversion generated from: '<S1>/VeDMDC_e_DrvMdInt'
     *  SignalConversion generated from: '<S1>/VeDMDC_i_DrvMdArbIdx'
     *  SignalConversion generated from: '<S1>/VeDMDR_b_EngOnWOTRsnFinal'
     */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    /* Outport: '<Root>/VeDMDR_Pct_SOCTarget' */
    (void)Rte_Write_VeDMDR_Pct_SOCTarget_Value(DMDR_ac_B.Gain);

    /* Outport: '<Root>/VeDMDR_b_ESaveDenied' */
    (void)Rte_Write_VeDMDR_b_ESaveDenied_Value
        (DMDR_ac_B.VeDMDC_b_ESaveModeDenied);

    /* Outport: '<Root>/VeDMDR_b_EVDenied' */
    (void)Rte_Write_VeDMDR_b_EVDenied_Value(DMDR_ac_B.Gain_kd);

    /* Outport: '<Root>/VeDMDR_b_EngOnEVLED' */
    (void)Rte_Write_VeDMDR_b_EngOnEVLED_Value(DMDR_ac_B.Gain_j0);

    /* Outport: '<Root>/VeDMDR_b_EngOnEVHMI' */
    (void)Rte_Write_VeDMDR_b_EngOnEVHMI_Value(DMDR_ac_B.Gain_c);

    /* Outport: '<Root>/VeDMDR_b_EngOnWOTRsnRaw' */
    (void)Rte_Write_VeDMDR_b_EngOnWOTRsnRaw_Value(DMDR_ac_B.Gain_is);

    /* Outport: '<Root>/VeDMDR_b_HybridDenied' */
    (void)Rte_Write_VeDMDR_b_HybridDenied_Value(DMDR_ac_B.Switch1);

    /* Outport: '<Root>/VeDMDR_b_SportDenied' */
    (void)Rte_Write_VeDMDR_b_SportDenied_Value(DMDR_ac_B.Switch1_p);

    /* Outport: '<Root>/VeDMDR_d_EcoDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_EcoDeniedRsn_Value(DMDR_ac_B.Gain_b);

    /* Outport: '<Root>/VeDMDR_d_ESaveActvDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_ESaveActvDeniedRsn_Value(DMDR_ac_B.Gain_j);

    /* Outport: '<Root>/VeDMDR_d_ESaveDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_ESaveDeniedRsn_Value(DMDR_ac_B.Gain_o);

    /* Outport: '<Root>/VeDMDR_d_EVDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_EVDeniedRsn_Value(DMDR_ac_B.Gain_i);

    /* Outport: '<Root>/VeDMDR_e_DrvMdArb' incorporates:
     *  DataTypeConversion: '<S14>/DataTypeConversion'
     */
    (void)Rte_Write_VeDMDR_e_DrvMdArb_Value(DMDR_ac_B.DataTypeConversion_b);

    /* Outport: '<Root>/VeDMDR_e_DrvMdInt' incorporates:
     *  Switch: '<S26>/Switch4'
     */
    (void)Rte_Write_VeDMDR_e_DrvMdInt_Value(DMDR_ac_B.VeDMDC_e_DrvMdInt);

    /* Outport: '<Root>/VeDMDR_i_DrvMdArbIdx' */
    (void)Rte_Write_VeDMDR_i_DrvMdArbIdx_Value(DMDR_ac_B.Selector2_c);

    /* Outport: '<Root>/VeDMDR_b_EngOnWOTRsnFinal' */
    (void)Rte_Write_VeDMDR_b_EngOnWOTRsnFinal_Value(DMDR_ac_B.Gain_d);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMDC_Pct_SOCTarget' */

    /* SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts' */
#if Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    /* Outport: '<Root>/VeDMDR_e_TurtleMdSts' incorporates:
     *  Merge: '<S6>/Merge'
     */
    (void)Rte_Write_VeDMDR_e_TurtleMdSts_Value(DMDR_ac_B.VeDMDR_e_TurtleMdArb);

#endif

    /* End of SignalConversion generated from: '<S1>/VeDMDR_e_TurtleMdSts' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Merge: '<Root>/ShippingMd_IRV_Merge' incorporates:
     *  Inport: '<Root>/VePLTR_e_ShippingMode'
     *  Inport: '<S5>/VePLTR_e_ShippingMode'
     *  SignalConversion generated from: '<S1>/VeDMDC_b_ShippingMd_write'
     */
    Rte_IrvWrite_DMDR_MedTED_VeDMDC_b_ShippingMd_write_IRV(tmpRead_8);

    /* Merge: '<Root>/DrvStyleSts_IRV_Merge' incorporates:
     *  Inport: '<Root>/VeDMIR_e_DriveStyleSts'
     *  Inport: '<S5>/VeCITR_e_DriveStyleSts'
     *  SignalConversion generated from: '<S1>/VeDMDC_e_DriveStyleSts_write'
     */
    Rte_IrvWrite_DMDR_MedTED_VeDMDC_e_DriveStyleSts_write_IRV(tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* Merge: '<Root>/TerrainMd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/VeDMDC_e_TerrainMd_write'
     *  VariantMerge generated from: '<S5>/VariantSource5'
     * */
    Rte_IrvWrite_DMDR_MedTED_VeDMDC_e_TerrainMd_write_IRV
        (DMDR_ac_B.VariantMerge_For_Variant_Source_Varia_gh);

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* Merge: '<Root>/Merge_23' incorporates:
     *  Inport: '<S5>/VeTMDR_i_TrueTrrnMd'
     *  SignalConversion generated from: '<S1>/VeDMDC_i_TerrainMdIdx_write'
     */
    Rte_IrvWrite_DMDR_MedTED_VeDMDC_i_TerrainMdIdx_write_IRV(tmpRead_f);

    /* Merge: '<Root>/Inhibit_DriveMode_IRV_Merge' incorporates:
     *  Gain: '<S362>/Gain'
     *  SignalConversion generated from: '<S1>/VeDMDR_b_Inhibit_DriveMode_write'
     */
    Rte_IrvWrite_DMDR_MedTED_VeDMDR_b_Inhibit_DriveMode_write_IRV(tmpRead_9);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Model step function for TID2 */
#if Rte_SysCon_Variant_DMDR_BEVEnbld

FUNC(void, DMDR_CODE) DMDR_MedTEH(void) /* Explicit Task: MedTEH */
{

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    boolean rtb_Selector;

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    boolean rtb_InhibitDrvMd;

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    boolean rtb_Logical1_fs;

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    boolean rtb_Logical4;

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    TeDMIR_e_DriveStyleSts rtb_Switch1_av;

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    TeDMDR_e_DrvMd Switch1_h;

#endif

#if Rte_SysCon_Variant_DMDR_BEVEnbld

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
    /* Outputs for Function Call SubSystem: '<Root>/DMDR_MedTEH' */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DrvMdArb'
     */
    /* Switch: '<S393>/Switch1' incorporates:
     *  Constant: '<S406>/Constant'
     *  Merge: '<Root>/TerrainMd_IRV_Merge'
     *  RelationalOperator: '<S393>/Relational Operator'
     *  SignalConversion generated from: '<S2>/TrnMd'
     */
    if (((uint32)Rte_IrvRead_DMDR_MedTEH_VeDMDC_e_TerrainMd_write_IRV()) ==
            CeTMDR_e_ECO)
    {
        /* Switch: '<S393>/Switch1' incorporates:
         *  Constant: '<S407>/Constant'
         */
        rtb_Switch1_av = CeDMIR_e_Eco;
    }
    else
    {
        /* Switch: '<S393>/Switch1' incorporates:
         *  Merge: '<Root>/DrvStyleSts_IRV_Merge'
         *  SignalConversion generated from: '<S2>/DriveStyleSts'
         */
        rtb_Switch1_av =
            Rte_IrvRead_DMDR_MedTEH_VeDMDC_e_DriveStyleSts_write_IRV();
    }

    /* End of Switch: '<S393>/Switch1' */

    /* Selector: '<S410>/Selector' incorporates:
     *  Constant: '<S418>/Calib'
     *  DataTypeConversion: '<S410>/Data Type Conversion1'
     *  Merge: '<Root>/Merge_23'
     *  SignalConversion generated from: '<S2>/TrrnMdIdx'
     *  Switch: '<S393>/Switch1'
     */
    rtb_Selector = KaDMDR_b_TrnDrvMdCmbAllwdBEV[(15 * ((sint32)
        Rte_IrvRead_DMDR_MedTEH_VeDMDC_i_TerrainMdIdx_write_IRV())) + ((sint32)
        rtb_Switch1_av)];

    /* Logic: '<S389>/Logical13' incorporates:
     *  Constant: '<S396>/Calib'
     *  Merge: '<Root>/Inhibit_DriveMode_IRV_Merge'
     *  SignalConversion generated from: '<S2>/Inhibit_DriveMd'
     */
    rtb_InhibitDrvMd =
        ((Rte_IrvRead_DMDR_MedTEH_VeDMDR_b_Inhibit_DriveMode_write_IRV()) &&
         (HeDMDR_b_Enbl_DrvMdInhibit));

    /* Logic: '<S409>/Logical1' incorporates:
     *  Constant: '<S417>/Calib'
     *  Logic: '<S409>/Logical13'
     */
    rtb_Logical1_fs = ((!rtb_InhibitDrvMd) || (!HeDMDR_b_Enbl_DrvMdInhibit));

    /* Logic: '<S392>/Logical4' incorporates:
     *  Logic: '<S394>/Logical'
     */
    rtb_Logical4 = ((!rtb_Selector) || (!rtb_Logical1_fs));

    /* Chart: '<S392>/Drive_Modes' incorporates:
     *  Constant: '<S402>/Calib'
     *  Constant: '<S403>/Calib'
     *  Constant: '<S404>/Calib'
     *  DataTypeConversion: '<S392>/Cast'
     *  Gain: '<S405>/Gain'
     *  Switch: '<S393>/Switch1'
     */
    /* Gateway: DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/Drive_Modes */
    /* During: DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/Drive_Modes */
    if (((uint32)DMDR_ac_DW.is_active_c3_DMDR_ac) == 0U)
    {
        /* Entry: DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/Drive_Modes */
        DMDR_ac_DW.is_active_c3_DMDR_ac = 1U;

        /* Entry Internal: DMDR_MedTEH/DrvMdArb/BEVDriveModes/BEVDrvMdDetermination/Drive_Modes */
        /* Transition: '<S401>:4' */
        /* Entry Internal 'BEVDriveModes': '<S401>:3' */
        /* Transition: '<S401>:250' */
        DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_DecisionState;

        /* Entry 'DecisionState': '<S401>:7' */
        DMDR_ac_B.DrvMdState = 121U;
    }
    else
    {
        /* During 'BEVDriveModes': '<S401>:3' */
        switch (DMDR_ac_DW.is_BEVDriveModes)
        {
          case DMDR_ac_IN_DecisionState:
            /* During 'DecisionState': '<S401>:7' */
            /* Transition: '<S401>:17' */
            if (KeDMDR_b_EnblDrvStylMap)
            {
                /* Transition: '<S401>:245' */
                /* Transition: '<S401>:249' */
                DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_DriveStyle;

                /* Entry 'DriveStyle': '<S401>:226' */
                if (rtb_InhibitDrvMd)
                {
                    DMDR_ac_B.DrvMdSts = 0;
                    DMDR_ac_B.DrvMdState = 100U;
                }
                else
                {
                    DMDR_ac_B.DrvMdSts = (sint16)rtb_Switch1_av;
                    DMDR_ac_B.DrvMdState = 101U;
                }
            }
            else
            {
                switch ((sint16)rtb_Switch1_av)
                {
                  case 4:
                    /* Transition: '<S401>:18' */
                    DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_Eco_b;

                    /* Entry Internal 'Eco': '<S401>:26' */
                    /* Transition: '<S401>:32' */
                    DMDR_ac_DW.is_Eco = DMDR_ac_IN_Input_Val_a;

                    /* Entry 'Input_Val': '<S401>:45' */
                    DMDR_ac_B.DrvMdState = 40U;
                    DMDR_ac_B.VeDMDR_t_StateTimer = 0.0F;
                    DMDR_ac_B.VeDMDR_b_BlinkStatePassed = false;
                    break;

                  case 0:
                    /* Transition: '<S401>:19' */
                    /* Transition: '<S401>:123' */
                    DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_Normal;

                    /* Entry Internal 'Normal': '<S401>:162' */
                    /* Transition: '<S401>:167' */
                    DMDR_ac_DW.is_Normal = DMDR_ac_IN_Blink_Verify;

                    /* Entry 'Blink_Verify': '<S401>:179' */
                    DMDR_ac_B.DrvMdSts = 0;
                    DMDR_ac_B.DrvMdState = 0U;
                    DMDR_ac_B.VeDMDR_t_StateTimer = 0.0F;
                    break;

                  default:
                    /* no actions */
                    break;
                }
            }
            break;

          case DMDR_ac_IN_DriveStyle:
            /* During 'DriveStyle': '<S401>:226' */
            if (!KeDMDR_b_EnblDrvStylMap)
            {
                /* Transition: '<S401>:241' */
                /* Transition: '<S401>:242' */
                DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_DecisionState;

                /* Entry 'DecisionState': '<S401>:7' */
                DMDR_ac_B.DrvMdState = 121U;
            }
            else if (rtb_InhibitDrvMd)
            {
                DMDR_ac_B.DrvMdSts = 0;
                DMDR_ac_B.DrvMdState = 100U;
            }
            else
            {
                DMDR_ac_B.DrvMdSts = (sint16)rtb_Switch1_av;
                DMDR_ac_B.DrvMdState = 101U;
            }
            break;

          case DMDR_ac_IN_Eco_b:
            /* During 'Eco': '<S401>:26' */
            if ((((sint32)rtb_Switch1_av) != 4) &&
                    (!DMDR_ac_B.VeDMDR_b_EcoModeDenied))
            {
                /* Transition: '<S401>:157' */
                /* Transition: '<S401>:158' */
                /* Exit Internal 'Eco': '<S401>:26' */
                switch (DMDR_ac_DW.is_Eco)
                {
                  case DMDR_ac_IN_EcoBlink:
                    /* Exit 'EcoBlink': '<S401>:47' */
                    DMDR_ac_B.VeDMDR_b_BlinkStatePassed = true;
                    DMDR_ac_DW.is_Eco = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case DMDR_ac_IN_SetDeny_i:
                    /* Exit 'SetDeny': '<S401>:48' */
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied = true;
                    DMDR_ac_DW.is_Eco = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    DMDR_ac_DW.is_Eco = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_DecisionState;

                /* Entry 'DecisionState': '<S401>:7' */
                DMDR_ac_B.DrvMdState = 121U;
            }
            else
            {
                switch (DMDR_ac_DW.is_Eco)
                {
                  case DMDR_ac_IN_Eco_o:
                    /* During 'Eco': '<S401>:46' */
                    if (rtb_Logical4)
                    {
                        /* Transition: '<S401>:38' */
                        DMDR_ac_DW.is_Eco = DMDR_ac_IN_SetDeny_i;

                        /* Entry 'SetDeny': '<S401>:48' */
                        DMDR_ac_B.DrvMdState = 43U;
                    }
                    break;

                  case DMDR_ac_IN_EcoBlink:
                    /* During 'EcoBlink': '<S401>:47' */
                    if (DMDR_ac_B.VeDMDR_t_StateTimer >=
                            KeDMDR_t_StayInBlinkState)
                    {
                        /* Transition: '<S401>:39' */
                        /* Transition: '<S401>:135' */
                        /* Transition: '<S401>:223' */
                        /* Exit 'EcoBlink': '<S401>:47' */
                        DMDR_ac_B.VeDMDR_b_BlinkStatePassed = true;
                        DMDR_ac_DW.is_Eco = DMDR_ac_IN_NO_ACTIVE_CHILD;
                        DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_Normal;

                        /* Entry Internal 'Normal': '<S401>:162' */
                        /* Transition: '<S401>:167' */
                        DMDR_ac_DW.is_Normal = DMDR_ac_IN_Blink_Verify;

                        /* Entry 'Blink_Verify': '<S401>:179' */
                        DMDR_ac_B.DrvMdSts = 0;
                        DMDR_ac_B.DrvMdState = 0U;
                        DMDR_ac_B.VeDMDR_t_StateTimer = 0.0F;
                    }
                    else
                    {
                        DMDR_ac_B.VeDMDR_t_StateTimer += HeDMDR_t_MedTEH_dT;
                        DMDR_ac_B.VeDMDR_b_EcoModeDenied = true;
                    }
                    break;

                  case DMDR_ac_IN_Input_Val_a:
                    /* During 'Input_Val': '<S401>:45' */
                    /* Transition: '<S401>:33' */
                    if (rtb_Logical4)
                    {
                        /* Transition: '<S401>:34' */
                        /* Transition: '<S401>:36' */
                        DMDR_ac_DW.is_Eco = DMDR_ac_IN_EcoBlink;

                        /* Entry 'EcoBlink': '<S401>:47' */
                        DMDR_ac_B.DrvMdState = 42U;
                    }
                    else
                    {
                        /* Transition: '<S401>:35' */
                        /* Transition: '<S401>:37' */
                        DMDR_ac_DW.is_Eco = DMDR_ac_IN_Eco_o;

                        /* Entry 'Eco': '<S401>:46' */
                        DMDR_ac_B.DrvMdSts = 4;
                        DMDR_ac_B.DrvMdState = 41U;
                        DMDR_ac_B.VeDMDR_b_EcoModeDenied = false;
                    }
                    break;

                  default:
                    /* During 'SetDeny': '<S401>:48' */
                    /* Transition: '<S401>:44' */
                    /* Transition: '<S401>:223' */
                    /* Exit 'SetDeny': '<S401>:48' */
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied = true;
                    DMDR_ac_DW.is_Eco = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_Normal;

                    /* Entry Internal 'Normal': '<S401>:162' */
                    /* Transition: '<S401>:167' */
                    DMDR_ac_DW.is_Normal = DMDR_ac_IN_Blink_Verify;

                    /* Entry 'Blink_Verify': '<S401>:179' */
                    DMDR_ac_B.DrvMdSts = 0;
                    DMDR_ac_B.DrvMdState = 0U;
                    DMDR_ac_B.VeDMDR_t_StateTimer = 0.0F;
                    break;
                }
            }
            break;

          default:
            /* During 'Normal': '<S401>:162' */
            if (((uint32)DMDR_ac_DW.is_Normal) == DMDR_ac_IN_Blink_Verify)
            {
                /* During 'Blink_Verify': '<S401>:179' */
                if ((DMDR_ac_B.VeDMDR_t_StateTimer >= KeDMDR_t_StayInBlinkState)
                    || (DMDR_ac_B.VeDMDR_b_BlinkStatePassed))
                {
                    /* Transition: '<S401>:168' */
                    DMDR_ac_DW.is_Normal = DMDR_ac_IN_Normal_h;

                    /* Entry 'Normal': '<S401>:181' */
                    DMDR_ac_B.DrvMdSts = 0;
                    DMDR_ac_B.DrvMdState = 1U;
                    DMDR_ac_B.VeDMDR_b_EcoModeDenied = false;
                    DMDR_ac_B.VeDMDR_t_StateTimer = 0.0F;
                    DMDR_ac_B.VeDMDR_b_BlinkStatePassed = false;
                }
                else if ((((sint32)rtb_Switch1_av) != 0) &&
                         (!DMDR_ac_B.VeDMDR_b_EcoModeDenied))
                {
                    /* Transition: '<S401>:187' */
                    /* Transition: '<S401>:189' */
                    /* Transition: '<S401>:155' */
                    DMDR_ac_DW.is_Normal = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_DecisionState;

                    /* Entry 'DecisionState': '<S401>:7' */
                    DMDR_ac_B.DrvMdState = 121U;
                }
                else
                {
                    DMDR_ac_B.VeDMDR_t_StateTimer += HeDMDR_t_MedTEH_dT;
                }
            }
            else
            {
                /* During 'Normal': '<S401>:181' */
                if (((sint32)rtb_Switch1_av) != 0)
                {
                    /* Transition: '<S401>:186' */
                    /* Transition: '<S401>:188' */
                    /* Transition: '<S401>:189' */
                    /* Transition: '<S401>:155' */
                    DMDR_ac_DW.is_Normal = DMDR_ac_IN_NO_ACTIVE_CHILD;
                    DMDR_ac_DW.is_BEVDriveModes = DMDR_ac_IN_DecisionState;

                    /* Entry 'DecisionState': '<S401>:7' */
                    DMDR_ac_B.DrvMdState = 121U;
                }
            }
            break;
        }
    }

    /* End of Chart: '<S392>/Drive_Modes' */

    /* DataStoreWrite: '<S392>/DSwrite' */
    DMDR_ac_DW.VeDMDR_t_StateTimer = DMDR_ac_B.VeDMDR_t_StateTimer;

    /* DataStoreWrite: '<S392>/DSwrite1' */
    VeDMDR_i_DrvMdState = DMDR_ac_B.DrvMdState;

    /* Switch: '<S408>/Switch' incorporates:
     *  DataStoreRead: '<S408>/Data Store Read'
     *  DataStoreRead: '<S408>/Data Store Read1'
     *  DataStoreWrite: '<S408>/Data Store Write'
     *  Logic: '<S394>/Logical6'
     *  S-Function (sfix_bitop): '<S411>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S411>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S411>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S414>/FixPt Bitwise Operator1'
     */
    if ((!rtb_Selector) || (!rtb_Logical1_fs))
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(VeDMDR_d_ECODeniedRsn_DS | ((uint16)
            1));
    }
    else
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ECODeniedRsn_DS)) | ((uint16)1))));
    }

    /* End of Switch: '<S408>/Switch' */

    /* Switch: '<S408>/Switch1' incorporates:
     *  DataStoreRead: '<S408>/Data Store Read2'
     *  DataStoreRead: '<S408>/Data Store Read3'
     *  DataStoreWrite: '<S408>/Data Store Write1'
     *  Logic: '<S408>/Logical'
     *  S-Function (sfix_bitop): '<S412>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S412>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S412>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S415>/FixPt Bitwise Operator1'
     */
    if (!rtb_Selector)
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(VeDMDR_d_ECODeniedRsn_DS | ((uint16)
            2));
    }
    else
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ECODeniedRsn_DS)) | ((uint16)2))));
    }

    /* End of Switch: '<S408>/Switch1' */

    /* Switch: '<S408>/Switch2' incorporates:
     *  DataStoreRead: '<S408>/Data Store Read4'
     *  DataStoreRead: '<S408>/Data Store Read5'
     *  DataStoreWrite: '<S408>/Data Store Write2'
     *  Logic: '<S408>/Logical1'
     *  S-Function (sfix_bitop): '<S413>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S413>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S413>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S416>/FixPt Bitwise Operator1'
     */
    if (!rtb_Logical1_fs)
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(VeDMDR_d_ECODeniedRsn_DS | ((uint16)
            4));
    }
    else
    {
        VeDMDR_d_ECODeniedRsn_DS = (uint16)(~((uint16)(((uint16)
            (~VeDMDR_d_ECODeniedRsn_DS)) | ((uint16)4))));
    }

    /* End of Switch: '<S408>/Switch2' */

    /* Switch: '<S391>/Switch1' incorporates:
     *  Constant: '<S395>/Constant'
     *  Constant: '<S397>/Calib'
     *  Logic: '<S389>/Logical4'
     *  Merge: '<Root>/ShippingMd_IRV_Merge'
     *  RelationalOperator: '<S389>/Comparison6'
     *  SignalConversion generated from: '<S2>/ShippingMode'
     */
    if ((((uint32)Rte_IrvRead_DMDR_MedTEH_VeDMDC_b_ShippingMd_write_IRV()) ==
            CePLTR_e_ShipingMode_SHIP_MD) && (HeDMDR_b_Enbl_ShipMdDrvMd))
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Constant: '<S398>/Constant'
         */
        Switch1_h = CeDMDR_e_NoDrvMd;
    }
    else
    {
        /* Switch: '<S391>/Switch1' incorporates:
         *  Constant: '<S399>/Calib'
         *  Selector: '<S391>/Selector4'
         */
        Switch1_h = HaDMDR_e_DrvStylSts_Map[(DMDR_ac_B.DrvMdSts)];
    }

    /* End of Switch: '<S391>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeDMDR_b_EcoDenied' incorporates:
     *  SignalConversion generated from: '<S2>/EcoDenied'
     */
    (void)Rte_Write_VeDMDR_b_EcoDenied_Value(DMDR_ac_B.VeDMDR_b_EcoModeDenied);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DrvMdArb'
     */
    /* Outport: '<Root>/VeDMDR_d_EcoDeniedRsn' incorporates:
     *  DataStoreRead: '<S388>/DSRead3'
     *  Gain: '<S390>/Gain'
     *  SignalConversion generated from: '<S2>/VeDMDC_d_ECODeniedRsn'
     */
    (void)Rte_Write_VeDMDR_d_EcoDeniedRsn_Value(VeDMDR_d_ECODeniedRsn_DS);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* Outport: '<Root>/VeDMDR_e_DrvMdArb' incorporates:
     *  SignalConversion generated from: '<S2>/VeDMDR_e_DrvMdArb'
     *  Switch: '<S391>/Switch1'
     */
    (void)Rte_Write_VeDMDR_e_DrvMdArb_Value(Switch1_h);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/DrvMdArb'
     */
    /* Outport: '<Root>/VeDMDR_i_DrvMdArbIdx' incorporates:
     *  Constant: '<S400>/Calib'
     *  DataTypeConversion: '<S391>/Data Type Conversion1'
     *  Selector: '<S391>/Selector2'
     *  SignalConversion generated from: '<S2>/VeDMDR_i_DrvMdArbIdx'
     *  Switch: '<S391>/Switch1'
     */
    (void)Rte_Write_VeDMDR_i_DrvMdArbIdx_Value(KaDMDR_i_DrvMdArbIndex[(Switch1_h)]);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/DMDR_MedTEH' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEH' */
#endif

}

#endif

/* Output function */
FUNC(void, DMDR_CODE) DMDR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DMDR_PwrOn'
     */
#if Rte_SysCon_Variant_DMDR_FuncDsbld

    /* S-Function (fcgen): '<S3>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S3>/DMDC_NF' */
    /* Outputs for Atomic SubSystem: '<S420>/DMDO_Initialization_NF' */
    /* DataTypeConversion: '<S424>/DataTypeConversion' incorporates:
     *  Constant: '<S426>/Constant'
     */
    DMDR_ac_B.DataTypeConversion = CeDMDR_e_NoDrvMd;

    /* DataTypeConversion: '<S425>/DataTypeConversion' incorporates:
     *  Constant: '<S426>/Constant'
     */
    DMDR_ac_B.DataTypeConversion_j = CeDMDR_e_NoDrvMd;

    /* End of Outputs for SubSystem: '<S420>/DMDO_Initialization_NF' */

    /* SignalConversion generated from: '<S420>/EcoDenied_NF' */
    DMDR_ac_B.OutportBufferForEcoDenied_NF = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_Pct_SOCTarget' */
    DMDR_ac_B.OutportBufferForVeDMDR_Pct_SOCTarget = 0.0F;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_ESaveDenied' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_ESaveDenied = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_EVDenied' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_EVDenied = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_EngOnEVHMI' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnEVHMI = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_EngOnEVLED' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnEVLED = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_EngOnWOTRsnFinal1' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnWOTRsnFina = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_EngOnWOTRsnRaw' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnWOTRsnRaw = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_HybridDenied' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_HybridDenied = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_b_SportDenied' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_SportDenied = false;

    /* SignalConversion generated from: '<S420>/VeDMDR_d_ESaveActvDeniedRsn' */
    DMDR_ac_B.OutportBufferForVeDMDR_d_ESaveActvDenied = 0U;

    /* SignalConversion generated from: '<S420>/VeDMDR_d_ESaveDeniedRsn' */
    DMDR_ac_B.OutportBufferForVeDMDR_d_ESaveDeniedRsn = 0U;

    /* SignalConversion generated from: '<S420>/VeDMDR_d_EVDeniedRsn' */
    DMDR_ac_B.OutportBufferForVeDMDR_d_EVDeniedRsn = 0U;

    /* SignalConversion generated from: '<S420>/VeDMDR_d_EcoDeniedRsn' */
    DMDR_ac_B.OutportBufferForVeDMDR_d_EcoDeniedRsn = 0U;

    /* SignalConversion generated from: '<S420>/VeDMDR_i_DrvMdArbIdx' */
    DMDR_ac_B.OutportBufferForVeDMDR_i_DrvMdArbIdx = 0U;

    /* End of Outputs for SubSystem: '<S3>/DMDC_NF' */
#endif

#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld

    /* Outputs for Function Call SubSystem: '<S3>/BEV_NF' */
    /* SignalConversion generated from: '<S419>/VeDMDR_e_TurtleMd_NF' incorporates:
     *  Constant: '<S422>/Constant'
     */
    DMDR_ac_B.VeDMDR_e_TurtleMd_Init = DMDR_ac_ConstB.Constant_c;

    /* End of Outputs for SubSystem: '<S3>/BEV_NF' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S421>/VeDMDR_b_DrvMdInhibit_Out_Init' */
    DMDR_ac_B.OutportBufferForVeDMDR_b_DrvMdInhibit_Ou = false;

    /* SignalConversion generated from: '<S421>/ShippingMd_write' incorporates:
     *  Constant: '<S427>/Constant'
     */
    DMDR_ac_B.OutportBufferForShippingMd_write = DMDR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S421>/TerrainMd_write' incorporates:
     *  Constant: '<S428>/Constant'
     */
    DMDR_ac_B.OutportBufferForTerrainMd_write = DMDR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S421>/TerrainMdIndex_write' */
    DMDR_ac_B.OutportBufferForTerrainMdIndex_write = 0U;

    /* SignalConversion generated from: '<S421>/DrvStyleSts_write' incorporates:
     *  Constant: '<S429>/Constant'
     */
    DMDR_ac_B.OutportBufferForDrvStyleSts_write = DMDR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S421>/Inhibit_DriveMode_write' */
    DMDR_ac_B.OutportBufferForInhibit_DriveMode_write = false;

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* SignalConversion generated from: '<S3>/EcoDenied_NF' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDR_Pct_SOCTarget'
     */
#if Rte_SysCon_Variant_DMDR_FuncDsbld

    /* Outport: '<Root>/VeDMDR_b_EcoDenied' */
    (void)Rte_Write_VeDMDR_b_EcoDenied_Value
        (DMDR_ac_B.OutportBufferForEcoDenied_NF);

    /* Outport: '<Root>/VeDMDR_Pct_SOCTarget' */
    (void)Rte_Write_VeDMDR_Pct_SOCTarget_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_Pct_SOCTarget);

#endif

    /* End of SignalConversion generated from: '<S3>/EcoDenied_NF' */

    /* Outport: '<Root>/VeDMDR_b_DrvMdInhibit' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDR_b_DrvMdInhibit_Out_Init'
     */
    (void)Rte_Write_VeDMDR_b_DrvMdInhibit_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_DrvMdInhibit_Ou);

    /* SignalConversion generated from: '<S3>/VeDMDR_b_ESaveDenied' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDR_b_EVDenied'
     *  SignalConversion generated from: '<S3>/VeDMDR_b_EngOnEVHMI'
     *  SignalConversion generated from: '<S3>/VeDMDR_b_EngOnEVLED'
     *  SignalConversion generated from: '<S3>/VeDMDR_b_EngOnWOTRsnFinal1'
     *  SignalConversion generated from: '<S3>/VeDMDR_b_EngOnWOTRsnRaw'
     *  SignalConversion generated from: '<S3>/VeDMDR_b_HybridDenied'
     *  SignalConversion generated from: '<S3>/VeDMDR_b_SportDenied'
     *  SignalConversion generated from: '<S3>/VeDMDR_d_ESaveActvDeniedRsn'
     *  SignalConversion generated from: '<S3>/VeDMDR_d_ESaveDeniedRsn'
     *  SignalConversion generated from: '<S3>/VeDMDR_d_EVDeniedRsn'
     *  SignalConversion generated from: '<S3>/VeDMDR_d_EcoDeniedRsn'
     *  SignalConversion generated from: '<S3>/VeDMDR_e_DrvMdArb_Init'
     *  SignalConversion generated from: '<S3>/VeDMDR_e_DrvMdInt'
     */
#if Rte_SysCon_Variant_DMDR_FuncDsbld

    /* Outport: '<Root>/VeDMDR_b_ESaveDenied' */
    (void)Rte_Write_VeDMDR_b_ESaveDenied_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_ESaveDenied);

    /* Outport: '<Root>/VeDMDR_b_EVDenied' */
    (void)Rte_Write_VeDMDR_b_EVDenied_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_EVDenied);

    /* Outport: '<Root>/VeDMDR_b_EngOnEVHMI' */
    (void)Rte_Write_VeDMDR_b_EngOnEVHMI_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnEVHMI);

    /* Outport: '<Root>/VeDMDR_b_EngOnEVLED' */
    (void)Rte_Write_VeDMDR_b_EngOnEVLED_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnEVLED);

    /* Outport: '<Root>/VeDMDR_b_EngOnWOTRsnFinal' */
    (void)Rte_Write_VeDMDR_b_EngOnWOTRsnFinal_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnWOTRsnFina);

    /* Outport: '<Root>/VeDMDR_b_EngOnWOTRsnRaw' */
    (void)Rte_Write_VeDMDR_b_EngOnWOTRsnRaw_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_EngOnWOTRsnRaw);

    /* Outport: '<Root>/VeDMDR_b_HybridDenied' */
    (void)Rte_Write_VeDMDR_b_HybridDenied_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_HybridDenied);

    /* Outport: '<Root>/VeDMDR_b_SportDenied' */
    (void)Rte_Write_VeDMDR_b_SportDenied_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_b_SportDenied);

    /* Outport: '<Root>/VeDMDR_d_ESaveDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_ESaveDeniedRsn_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_d_ESaveActvDenied);

    /* Outport: '<Root>/VeDMDR_d_ESaveActvDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_ESaveActvDeniedRsn_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_d_ESaveDeniedRsn);

    /* Outport: '<Root>/VeDMDR_d_EVDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_EVDeniedRsn_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_d_EVDeniedRsn);

    /* Outport: '<Root>/VeDMDR_d_EcoDeniedRsn' */
    (void)Rte_Write_VeDMDR_d_EcoDeniedRsn_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_d_EcoDeniedRsn);

    /* Outport: '<Root>/VeDMDR_e_DrvMdArb' incorporates:
     *  DataTypeConversion: '<S424>/DataTypeConversion'
     */
    (void)Rte_Write_VeDMDR_e_DrvMdArb_Value(DMDR_ac_B.DataTypeConversion);

    /* Outport: '<Root>/VeDMDR_e_DrvMdInt' incorporates:
     *  DataTypeConversion: '<S425>/DataTypeConversion'
     */
    (void)Rte_Write_VeDMDR_e_DrvMdInt_Value(DMDR_ac_B.DataTypeConversion_j);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMDR_b_ESaveDenied' */

    /* SignalConversion generated from: '<S3>/VeDMDR_e_TurtleMd_NF' */
#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld

    /* Outport: '<Root>/VeDMDR_e_TurtleMdSts' incorporates:
     *  SignalConversion generated from: '<S419>/VeDMDR_e_TurtleMd_NF'
     */
    (void)Rte_Write_VeDMDR_e_TurtleMdSts_Value(DMDR_ac_B.VeDMDR_e_TurtleMd_Init);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMDR_e_TurtleMd_NF' */

    /* SignalConversion generated from: '<S3>/VeDMDR_i_DrvMdArbIdx' */
#if Rte_SysCon_Variant_DMDR_FuncDsbld

    /* Outport: '<Root>/VeDMDR_i_DrvMdArbIdx' */
    (void)Rte_Write_VeDMDR_i_DrvMdArbIdx_Value
        (DMDR_ac_B.OutportBufferForVeDMDR_i_DrvMdArbIdx);

#endif

    /* End of SignalConversion generated from: '<S3>/VeDMDR_i_DrvMdArbIdx' */

    /* Merge: '<Root>/Inhibit_DriveMode_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDC_b_Inhibit_DriveMode_write'
     * */
    Rte_IrvWrite_DMDR_PwrOn_VeDMDR_b_Inhibit_DriveMode_write_IRV
        (DMDR_ac_B.OutportBufferForInhibit_DriveMode_write);

    /* Merge: '<Root>/DrvStyleSts_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDC_e_DrvStyleSts_write'
     *  SignalConversion generated from: '<S421>/DrvStyleSts_write'
     * */
    Rte_IrvWrite_DMDR_PwrOn_VeDMDC_e_DriveStyleSts_write_IRV
        (DMDR_ac_B.OutportBufferForDrvStyleSts_write);

    /* Merge: '<Root>/ShippingMd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDC_e_ShippingMd_write'
     *  SignalConversion generated from: '<S421>/ShippingMd_write'
     * */
    Rte_IrvWrite_DMDR_PwrOn_VeDMDC_b_ShippingMd_write_IRV
        (DMDR_ac_B.OutportBufferForShippingMd_write);

    /* Merge: '<Root>/TerrainMd_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDC_e_TerrainMd_write'
     *  SignalConversion generated from: '<S421>/TerrainMd_write'
     * */
    Rte_IrvWrite_DMDR_PwrOn_VeDMDC_e_TerrainMd_write_IRV
        (DMDR_ac_B.OutportBufferForTerrainMd_write);

    /* Merge: '<Root>/Merge_23' incorporates:
     *  SignalConversion generated from: '<S3>/VeDMDC_i_TerrainMdIdx_write'
     * */
    Rte_IrvWrite_DMDR_PwrOn_VeDMDC_i_TerrainMdIdx_write_IRV
        (DMDR_ac_B.OutportBufferForTerrainMdIndex_write);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, DMDR_CODE) DMDR_ac_Init(void)
{
    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/DMDR_MedTED'
     */
    /* SystemInitialize for SignalConversion generated from: '<S5>/VariantSource2' incorporates:
     *  Constant: '<S355>/Calib'
     */
#if Rte_SysCon_Variant_DMDR_FuncEnbld

    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/DMDR_Inputs'
     */
    /* SystemInitialize for VariantMerge generated from: '<S5>/VariantSource2' */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_h = KeDMDR_b_TowHaulVal;

    /* SystemInitialize for Function Call SubSystem: '<S1>/DMDC_FUNC' */
    /* SystemInitialize for Atomic SubSystem: '<S27>/Signal Latch Off With Reset' */
    /* InitializeConditions for UnitDelay: '<S77>/Unit Delay' */
    DMDR_ac_DW.UnitDelay_DSTATE_bi = true;

    /* End of SystemInitialize for SubSystem: '<S27>/Signal Latch Off With Reset' */
    /* End of SystemInitialize for SubSystem: '<S1>/DMDC_FUNC' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
#else

    /* SystemInitialize for VariantMerge generated from: '<S5>/VariantSource2' incorporates:
     *  SignalConversion generated from: '<S5>/VariantSource2'
     */
    DMDR_ac_B.VariantMerge_For_Variant_Source_Varian_h = DMDR_ac_B.FALSEConstant;

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S5>/VariantSource2' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/DMDR_PwrOn'
     */
#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* SystemInitialize for Function Call SubSystem: '<S3>/BEV_NF' */
    /* SystemInitialize for SignalConversion generated from: '<S419>/VeDMDR_e_TurtleMd_NF' incorporates:
     *  Constant: '<S422>/Constant'
     */
    DMDR_ac_B.VeDMDR_e_TurtleMd_Init = DMDR_ac_ConstB.Constant_c;

    /* End of SystemInitialize for SubSystem: '<S3>/BEV_NF' */
    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S421>/ShippingMd_write' incorporates:
     *  Constant: '<S427>/Constant'
     */
    DMDR_ac_B.OutportBufferForShippingMd_write = DMDR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S421>/TerrainMd_write' incorporates:
     *  Constant: '<S428>/Constant'
     */
    DMDR_ac_B.OutportBufferForTerrainMd_write = DMDR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S421>/DrvStyleSts_write' incorporates:
     *  Constant: '<S429>/Constant'
     */
    DMDR_ac_B.OutportBufferForDrvStyleSts_write = DMDR_ac_ConstB.Constant_f;

    /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for Merge: '<Root>/Merge_1' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
#if Rte_SysCon_Variant_DMDR_BEVEnbld || Rte_SysCon_Variant_DMDR_FuncDsbld || Rte_SysCon_Variant_DMDR_FuncEnbld

    /* SystemInitialize for Outport: '<Root>/VeDMDR_e_DrvMdArb' */
    (void)Rte_Write_VeDMDR_e_DrvMdArb_Value(CeDMDR_e_NoDrvMd);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_1' */

    /* SystemInitialize for Merge: '<Root>/Merge_2' incorporates:
     *  Merge: '<Root>/Merge_10'
     *  Merge: '<Root>/Merge_19'
     *  Merge: '<Root>/Merge_20'
     *  Merge: '<Root>/Merge_21'
     *  Merge: '<Root>/Merge_22'
     *  Merge: '<Root>/Merge_3'
     *  Merge: '<Root>/Merge_4'
     *  Merge: '<Root>/Merge_5'
     *  Merge: '<Root>/Merge_6'
     *  Merge: '<Root>/Merge_7'
     *  Merge: '<Root>/Merge_8'
     *  Merge: '<Root>/Merge_9'
     */
#if Rte_SysCon_Variant_DMDR_FuncDsbld || Rte_SysCon_Variant_DMDR_FuncEnbld

    /* SystemInitialize for Outport: '<Root>/VeDMDR_e_DrvMdInt' */
    (void)Rte_Write_VeDMDR_e_DrvMdInt_Value(CeDMDR_e_NoDrvMd);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_2' */

    /* SystemInitialize for Merge: '<Root>/Merge_11' */
#if Rte_SysCon_Variant_DMDR_TurtleMdDsbld || Rte_SysCon_Variant_DMDR_TurtleMdEnbld

    /* SystemInitialize for Outport: '<Root>/VeDMDR_e_TurtleMdSts' */
    (void)Rte_Write_VeDMDR_e_TurtleMdSts_Value(CeDMDR_e_No_Turtle_Mode);

#endif

    /* End of SystemInitialize for Merge: '<Root>/Merge_11' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
