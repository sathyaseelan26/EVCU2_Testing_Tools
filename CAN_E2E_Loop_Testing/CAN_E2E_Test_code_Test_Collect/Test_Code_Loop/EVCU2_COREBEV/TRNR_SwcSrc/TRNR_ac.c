/*
 * File: TRNR_ac.c
 *
 * Code generated for Simulink model 'TRNR_ac'.
 *
 * Model version                  : 9.59
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:53:32 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TRNR_ac.h"

/* Named constants for Chart: '<S107>/ClutchStartST_TLFArbStateMachine' */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_ClutchStartAbort    ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_ClutchStartActive   ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_ClutchStartInactive ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_EngineStartedArbAllowed ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_EngineStartedArbDenied ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_EngineStartupArbAllowed ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_EngineStartupArbDenied ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

/* Named constants for Chart: '<S264>/ShiftType_Manager' */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR__IN_PressureControlDirectTransition ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_PressureControlActive ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_PressureControlAtSSbeforeEqn ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_StableEqnState      ((uint8)4U)
#endif

/* Named constants for Chart: '<S117>/Stateflow Chart' */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_ShftTypeHold        ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_ShftTypePassThrough ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb
#define TRNR_ac_IN_TCMActModeCANDelay  ((uint8)3U)
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
#define START_SEC_CALIB_UNSPECIFIED_TRNR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_ClchStrtSTTLFArbAbort[49]
    =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
    1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_ClchStrtSTTLFArbEnd[49] =
{
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S178>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT)
    HaTRNR_b_ClchStrtSTTLFArbOddEngStrt[89] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
    1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S179>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT)
    HaTRNR_b_ClchStrtSTTLFArbOddSyncMvmt[89] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S180>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_ClchStrtSTTLFArbStrt[89] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S181>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_DsblBrkCheckForLaunch[3] =
{
    0, 0, 0
} ;                                    /* Referenced by: '<S540>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_DsblLaunchPrvntn[3] =
{
    1, 1, 1
} ;                                    /* Referenced by: '<S541>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_DsblRgnRmpCheckForLaunch
    [3] =
{
    0, 0, 0
} ;                                    /* Referenced by: '<S542>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_EngStForLaunch[3] =
{
    0, 0, 0
} ;                                    /* Referenced by: '<S543>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_ILEStateForLaunch[12] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S544>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_ShftTypeActTarGearFrz[89]
    =
{
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S188>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_ShftTypeStdyStDtct[7921] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S276>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) HaTRNR_b_TCMStrtTrgtMode[31] =
{
    0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S476>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMShftTypeTLF, TRNR_VAR_INIT)
    HaTRNR_e_ClchStrtSTTLFArbConv[89] =
{
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto1stGearDriveDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto1stGearDriveDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto1stGearDriveDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto1stGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto5thGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto3rdGearDriveDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_HEVto3rdGearDriveDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_HEVto3rdGearDriveDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_HEVto3rdGearDriveDCT, CeTRNR_e_HEVto1stGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto5thGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto5thGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto5thGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto5thGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto1stGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto5thGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto7thGearDriveDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto7thGearDriveDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto7thGearDriveDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_HEVto7thGearDriveDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_HEVto1stGearDriveDCT, CeTRNR_e_HEVto3rdGearDriveDCT,
    CeTRNR_e_HEVto5thGearDriveDCT, CeTRNR_e_HEVto7thGearDriveDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT,
    CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT, CeTRNR_e_SteadyStateDCT
};                                     /* Referenced by: '<S182>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(TeHCCR_e_ClutchStatus, TRNR_VAR_INIT)
    HaTRNR_e_ILEStatusDCT[6] =
{
    CeHCCR_e_ClReleased, CeHCCR_e_ClReleased, CeHCCR_e_ClActuated,
    CeHCCR_e_ClLocked, CeHCCR_e_ClLocked, CeHCCR_e_ClLocked
};                                     /* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TRNR_VAR_INIT)
    HaTRNR_e_Nti_TCMTgtMdOverRevMap[20] =
{
    CeTRNR_e_SerEngOn, CeTRNR_e_SerEngOn, CeTRNR_e_PrllEngOn,
    CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOn,
    CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff,
    CeTRNR_e_PrllEngOff, CeTRNR_e_SerEngOff, CeTRNR_e_SerEngOff,
    CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff,
    CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff,
    CeTRNR_e_PrllEngOff, CeTRNR_e_PrllEngOff
};                                     /* Referenced by: '<S560>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_PRNDLActualGearMap[30] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Park, CeTRNR_e_Reverse, CeTRNR_e_Neutral,
    CeTRNR_e_D1, CeTRNR_e_D1, CeTRNR_e_D2, CeTRNR_e_D3, CeTRNR_e_D4, CeTRNR_e_D5,
    CeTRNR_e_D6, CeTRNR_e_D7, CeTRNR_e_D8, CeTRNR_e_D9, CeTRNR_e_D9, CeTRNR_e_D9,
    CeTRNR_e_D9, CeTRNR_e_Park, CeTRNR_e_Park, CeTRNR_e_Park, CeTRNR_e_Reverse,
    CeTRNR_e_Reverse, CeTRNR_e_Reverse, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_D1, CeTRNR_e_D1, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S91>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_PRNDLTargetGearMap[30] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Park, CeTRNR_e_Reverse, CeTRNR_e_Neutral,
    CeTRNR_e_D1, CeTRNR_e_D1, CeTRNR_e_D2, CeTRNR_e_D3, CeTRNR_e_D4, CeTRNR_e_D5,
    CeTRNR_e_D6, CeTRNR_e_D7, CeTRNR_e_D8, CeTRNR_e_D9, CeTRNR_e_D9, CeTRNR_e_D9,
    CeTRNR_e_D9, CeTRNR_e_Reverse, CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_Park,
    CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_Park, CeTRNR_e_Reverse, CeTRNR_e_D1,
    CeTRNR_e_Park, CeTRNR_e_Reverse, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S92>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(TeOHSR_e_RngSel, TRNR_VAR_INIT) HaTRNR_e_RngStForLaunch[3]
    =
{
    CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2, CeOHSR_e_RngSel_M2
};                                     /* Referenced by: '<S545>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_ShftTypeActualGear[89] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral
};                                     /* Referenced by: '<S189>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_ShftTypeActualGearAbort[89] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral
};                                     /* Referenced by: '<S267>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_ShftTypeTargetGear[89] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral
};                                     /* Referenced by: '<S190>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_ShftTypeTargetGearAbort[89] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral
};                                     /* Referenced by: '<S268>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeHSER_e_RngEqnSel, TRNR_VAR_INIT)
    HaTRNR_e_ShftTypeToRngEqnSel[16] =
{
    CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2,
    CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2,
    CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2,
    CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2,
    CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2, CeHSER_e_UseNeutralEqn_2,
    CeHSER_e_UseNeutralEqn_2
};                                     /* Referenced by: '<S299>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMShftType, TRNR_VAR_INIT)
    HaTRNR_e_ShiftTypeAbortSt[89] =
{
    CeTRNR_e_SteadyState, CeTRNR_e_1stEngBrkTo1stGear, CeTRNR_e_1stTo2ndGear,
    CeTRNR_e_1stTo3rdGear, CeTRNR_e_2ndTo3rdGear, CeTRNR_e_2ndTo4thGear,
    CeTRNR_e_2ndTo6thGear, CeTRNR_e_3rdTo4thGear, CeTRNR_e_3rdTo5thGear,
    CeTRNR_e_4thTo5thGear, CeTRNR_e_4thTo6thGear, CeTRNR_e_5thTo6thGear,
    CeTRNR_e_1stTo1stEngBrkGear, CeTRNR_e_2ndTo1stEngBrkGear,
    CeTRNR_e_2ndTo1stGear, CeTRNR_e_3rdTo1stGear, CeTRNR_e_3rdTo2ndGear,
    CeTRNR_e_4thTo2ndGear, CeTRNR_e_6thTo2ndGear, CeTRNR_e_4thTo3rdGear,
    CeTRNR_e_5thTo3rdGear, CeTRNR_e_5thTo4thGear, CeTRNR_e_6thTo4thGear,
    CeTRNR_e_6thTo5thGear, CeTRNR_e_ReverseGearInhibited, CeTRNR_e_Neutral1st,
    CeTRNR_e_Neutral2nd, CeTRNR_e_Neutral3rd, CeTRNR_e_Neutral4th,
    CeTRNR_e_Neutral5th, CeTRNR_e_Neutral6th, CeTRNR_e_NeutralTo1stGearDrive,
    CeTRNR_e_NeutralTo2ndGearDrive, CeTRNR_e_NeutralTo3rdGearDrive,
    CeTRNR_e_NeutralTo4thGearDrive, CeTRNR_e_NeutralTo5thGearDrive,
    CeTRNR_e_NeutralTo6thGearDrive, CeTRNR_e_NeutralToReverse,
    CeTRNR_e_1stGearDriveToNeutral, CeTRNR_e_2ndGearDriveToNeutral,
    CeTRNR_e_3rdGearDriveToNeutral, CeTRNR_e_4thGearDriveToNeutral,
    CeTRNR_e_5thGearDriveToNeutral, CeTRNR_e_6thGearDriveToNeutral,
    CeTRNR_e_Reverse1stGearToNeutral, CeTRNR_e_Reverse2ndGearToNeutral,
    CeTRNR_e_Reverse3rdGearToNeutral, CeTRNR_e_Reverse4thGearToNeutral,
    CeTRNR_e_Reverse5thGearToNeutral, CeTRNR_e_Reverse6thGearToNeutral,
    CeTRNR_e_NeutralIdleControlEntryinDrive,
    CeTRNR_e_NeutralIdleControlTo1stEngBrkGearDrive,
    CeTRNR_e_NeutralIdleControlTo1stGearDrive,
    CeTRNR_e_NeutralIdleControlTo2ndGearDrive,
    CeTRNR_e_NeutralIdleControlTo3rdGearDrive,
    CeTRNR_e_NeutralIdleControlTo4tGearDrive,
    CeTRNR_e_NeutralIdleControlTo5thGearDrive,
    CeTRNR_e_NeutralIdleControlTo6thGearDrive,
    CeTRNR_e_NeutralIdleControlEntryinReverse,
    CeTRNR_e_NeutralIdleControlExitinReverse, CeTRNR_e_ReverseGearToHEV,
    CeTRNR_e_1stGearDriveToHEV, CeTRNR_e_2ndGearDriveToHEV,
    CeTRNR_e_3rdGearDriveToHEV, CeTRNR_e_4thGearDriveToHEV,
    CeTRNR_e_5thGearDriveToHEV, CeTRNR_e_6thGearDriveToHEV,
    CeTRNR_e_HEVToReverseGear, CeTRNR_e_HEVTo1stGearDrive_C1Oncoming,
    CeTRNR_e_HEVTo2ndGearDrive, CeTRNR_e_HEVTo3rdGearDrive,
    CeTRNR_e_HEVTo4thGearDrive, CeTRNR_e_HEVTo5thGearDrive,
    CeTRNR_e_HEVTo6thGearDrive, CeTRNR_e_Multi3rdTo2ndTo1stGear,
    CeTRNR_e_Multi4thTo2ndTo1stGear, CeTRNR_e_Multi4thTo3rdTo1stGear,
    CeTRNR_e_Multi4thTo3rdTo2ndGear, CeTRNR_e_Multi5thTo3rdTo1stGear,
    CeTRNR_e_Multi5thTo3rdTo2ndGear, CeTRNR_e_Multi5thTo4thTo2ndGear,
    CeTRNR_e_Multi5thTo4thTo3rdGear, CeTRNR_e_Multi6thTo4thTo2ndGear,
    CeTRNR_e_Multi6thTo4thTo3rdGear, CeTRNR_e_Multi6thTo5thTo3rdGear,
    CeTRNR_e_Multi6thTo5thTo4thGear, CeTRNR_e_undefine86, CeTRNR_e_undefine87,
    CeTRNR_e_HEVTo1stGearDrive_F1Oncoming
};                                     /* Referenced by: '<S269>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_TCMActOddGear_ST[89] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_D1,
    CeTRNR_e_D3, CeTRNR_e_D5, CeTRNR_e_D7, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral
};                                     /* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT)
    HaTRNR_e_TCMActOddGear_STTLF[67] =
{
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_D1, CeTRNR_e_D3, CeTRNR_e_D5, CeTRNR_e_D7, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_D3, CeTRNR_e_D5,
    CeTRNR_e_D7, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_D1, CeTRNR_e_D3, CeTRNR_e_D5, CeTRNR_e_D7, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_D1,
    CeTRNR_e_Neutral, CeTRNR_e_D3, CeTRNR_e_Neutral, CeTRNR_e_D5,
    CeTRNR_e_Neutral, CeTRNR_e_D7, CeTRNR_e_D1, CeTRNR_e_D3, CeTRNR_e_D5,
    CeTRNR_e_D7, CeTRNR_e_Neutral, CeTRNR_e_Neutral, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_D3, CeTRNR_e_D5, CeTRNR_e_D7, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_D5, CeTRNR_e_D7, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_D3, CeTRNR_e_D7, CeTRNR_e_Neutral,
    CeTRNR_e_Neutral, CeTRNR_e_D1, CeTRNR_e_D3, CeTRNR_e_D5
};                                     /* Referenced by: '<S166>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint8, TRNR_VAR_INIT) HaTRNR_i_TCMActEvenGear[89] =
{
    13U, 2U, 4U, 6U, 10U, 0U, 0U, 0U, 0U, 0U, 0U, 2U, 4U, 6U, 10U, 13U, 13U, 13U,
    13U, 13U, 13U, 13U, 13U, 13U, 2U, 13U, 4U, 13U, 6U, 13U, 2U, 2U, 2U, 2U, 2U,
    2U, 2U, 13U, 2U, 13U, 4U, 13U, 6U, 13U, 4U, 4U, 4U, 4U, 4U, 4U, 4U, 13U, 2U,
    13U, 4U, 13U, 6U, 13U, 6U, 6U, 6U, 6U, 6U, 6U, 6U, 13U, 2U, 13U, 4U, 13U, 6U,
    13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U, 13U,
    13U, 13U, 13U
} ;                                    /* Referenced by: '<S150>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

static volatile CONST(sint16, TRNR_VAR_INIT) HaTRNR_i_TSXRGearRatioSel[68] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S78>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_EnblILEStatusDCT = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_EnblPRNDLGearMap = 1;/* Referenced by: '<S93>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_EnblShftTypeHoldUpdate =
    1;                                 /* Referenced by: '<S323>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_Enbl_LaunchSpdCntrl = 0;/* Referenced by: '<S390>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_K1StatPassThrgh = 0;/* Referenced by: '<S62>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_ShftStBsdShftMngr = 0;/* Referenced by: '<S263>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_ShftTypePulsEna = 1;/* Referenced by: '<S183>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_Synchro2StsArbEna = 1;/* Referenced by: '<S39>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) HeTRNR_b_TarEvenGearFncSel = 1;/* Referenced by: '<S151>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint16, TRNR_VAR_INIT) HeTRNR_d_ShftTypeArbSel = 0U;/* Referenced by: '<S103>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(uint16, TRNR_VAR_INIT) HeTRNR_d_TCMFailureBit = 0U;/* Referenced by: '<S63>/Calib' */

#endif

static volatile CONST(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) HeTRNR_e_SteadyState =
    CeTRNR_e_SteadyState;              /* Referenced by:
                                        * '<S590>/Calib'
                                        * '<S304>/Calib'
                                        * '<S270>/Calib'
                                        * '<S277>/Calib'
                                        * '<S290>/Calib'
                                        * '<S288>/Calib'
                                        */

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(TeHCCR_e_ClutchStatus, TRNR_VAR_INIT)
    HeTRNR_e_TrqBrkShftOvrrd = CeHCCR_e_ClLocked;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint8, TRNR_VAR_INIT) HeTRNR_i_ActEvenGearFcnSel = 0U;/* Referenced by: '<S141>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint8, TRNR_VAR_INIT) HeTRNR_i_ActOddGearFcnSel = 0U;/* Referenced by: '<S142>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_LaunchSpdSrc1 = 1;/* Referenced by: '<S546>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_LaunchSpdSrc2 = 1;/* Referenced by: '<S547>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_LaunchSpdSrc3 = 1;/* Referenced by: '<S548>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_ShftTypeOfst = 0;/* Referenced by:
                                                                      * '<S184>/Calib'
                                                                      * '<S191>/Calib'
                                                                      * '<S214>/Calib'
                                                                      * '<S300>/Calib'
                                                                      * '<S152>/Calib'
                                                                      * '<S167>/Calib'
                                                                      * '<S271>/Calib'
                                                                      * '<S278>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_SlctStatusToC1Stat = 0;/* Referenced by: '<S27>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_SlctStatusToC2Stat = 3;/* Referenced by: '<S28>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(sint16, TRNR_VAR_INIT) HeTRNR_i_SlctStatusToC3Stat = 2;/* Referenced by: '<S29>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd || Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_ShftTypeArb || Rte_SysCon_Variant_TRNR_TCMStrtStpMd || Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(float32, TRNR_VAR_INIT) HeTRNR_t_MedTEB_dT = 0.01F;/* Referenced by:
                                                                      * '<S117>/Stateflow Chart'
                                                                      * '<S339>/Calib'
                                                                      * '<S264>/ShiftType_Manager'
                                                                      * '<S501>/Calib'
                                                                      * '<S279>/Calib'
                                                                      * '<S417>/Calib'
                                                                      * '<S427>/Calib'
                                                                      * '<S449>/Calib'
                                                                      * '<S549>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) HeTRNR_t_ShftTypeFAC1Delay =
    0.025F;                            /* Referenced by: '<S340>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) HeTRNR_t_ShftTypeFASync2Delay =
    0.025F;                            /* Referenced by: '<S341>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) HeTRNR_t_ShftTypeStdyStDly = 0.0F;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint16, TRNR_VAR_INIT) HeTRNR_y_ShftTypeFAMask = 0U;/* Referenced by: '<S342>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint16, TRNR_VAR_INIT) KaTRNR_Cnt_ShftTypeHoldDelay[9] =
{
    0U, 2U, 2U, 4U, 0U, 4U, 4U, 4U, 0U
} ;                                    /* Referenced by: '<S301>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_C2StatCheck[6] =
{
    0, 0, 0, 0, 0, 1
} ;                                    /* Referenced by: '<S411>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_EnblRgnEqn[10] =
{
    0, 1, 0, 1, 1, 1, 1, 1, 0, 0
} ;                                    /* Referenced by: '<S412>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_HasActStatCheck[4] =
{
    0, 0, 0, 1
} ;                                    /* Referenced by: '<S413>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_InhibitStratOptMd[68] =
{
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S470>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_MultiShftAct[88] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 0, 0
} ;                                    /* Referenced by: '<S215>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_ShftTypeFARngSt[68] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} ;                                    /* Referenced by: '<S343>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KaTRNR_b_TCMStrtType[31] =
{
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0
} ;                                    /* Referenced by: '<S477>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(TeTRNR_e_TCMShftType, TRNR_VAR_INIT)
    KaTRNR_e_ActualGearShftNeut[13] =
{
    CeTRNR_e_SteadyState, CeTRNR_e_1stGearDriveToNeutral,
    CeTRNR_e_2ndGearDriveToNeutral, CeTRNR_e_3rdGearDriveToNeutral,
    CeTRNR_e_4thGearDriveToNeutral, CeTRNR_e_5thGearDriveToNeutral,
    CeTRNR_e_6thGearDriveToNeutral, CeTRNR_e_SteadyState, CeTRNR_e_SteadyState,
    CeTRNR_e_SteadyState, CeTRNR_e_Reverse1stGearToNeutral,
    CeTRNR_e_Reverse2ndGearToNeutral, CeTRNR_e_SteadyState
};                                     /* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTMMR_e_ClchStat, TRNR_VAR_INIT)
    KaTRNR_e_OHSRRngDsrdTCMLCCTgt[8] =
{
    CeTMMR_e_ClchUnlock, CeTMMR_e_ClchUnlock, CeTMMR_e_ClchLock,
    CeTMMR_e_ClchUnlock, CeTMMR_e_ClchUnlock, CeTMMR_e_ClchLock,
    CeTMMR_e_ClchUnlock, CeTMMR_e_ClchLock
};                                     /* Referenced by: '<S471>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(TeTRNR_e_TCMStrtTypReq, TRNR_VAR_INIT)
    KaTRNR_e_TCMMdActvStrtTypReq[4] =
{
    CeTRNR_e_NormalStrt, CeTRNR_e_NormalStrt, CeTRNR_e_NormalStrt,
    CeTRNR_e_NormalStrt
};                                     /* Referenced by: '<S399>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTRNR_e_TCMStrtTypReq, TRNR_VAR_INIT)
    KaTRNR_e_TCMStrtTypReq[8] =
{
    CeTRNR_e_NormalStrt, CeTRNR_e_NormalStrt, CeTRNR_e_EmgyStrtNorm,
    CeTRNR_e_EmgyStrtCold, CeTRNR_e_StpNorm, CeTRNR_e_StpCoast,
    CeTRNR_e_ClutchStrt, CeTRNR_e_EMStrt
};                                     /* Referenced by: '<S450>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TRNR_VAR_INIT)
    KaTRNR_e_TCMTgtMd_Map[16] =
{
    CeTRNR_e_SerEngOff, CeTRNR_e_SerEngOn, CeTRNR_e_SerEngOff, CeTRNR_e_SerEngOn,
    CeTRNR_e_SerEngOff, CeTRNR_e_PrllEngOn, CeTRNR_e_SerEngOff,
    CeTRNR_e_SerEngOn, CeTRNR_e_SerEngOff, CeTRNR_e_PrllEngOn,
    CeTRNR_e_SerEngOff, CeTRNR_e_PrllEngOn, CeTRNR_e_SerEngOff,
    CeTRNR_e_PrllEngOn, CeTRNR_e_SerEngOff, CeTRNR_e_PrllEngOn
};                                     /* Referenced by: '<S478>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(sint16, TRNR_VAR_INIT) KaTRNR_i_Nti_TCMTgtMdReqMap[4] =
{
    0, 0, 0, 0
} ;                                    /* Referenced by: '<S561>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(sint16, TRNR_VAR_INIT) KaTRNR_i_PRNDL_Gr_Src[30] =
{
    3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3
} ;                                    /* Referenced by: '<S525>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

static volatile CONST(sint16, TRNR_VAR_INIT) KaTRNR_i_TCMGearStat[13] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
} ;                                    /* Referenced by: '<S85>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(uint16, TRNR_VAR_INIT) KeTRNR_Cnt_ShiftTypeStdyStDly = 16U;/* Referenced by: '<S281>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_M_FricTrqClutchThrsh = 8.0F;/* Referenced by: '<S47>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_Clch2Sel_4_OKToClose = 0;/* Referenced by: '<S428>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT)
    KeTRNR_b_ClchNotCloseTmOutFunctActv = 0;/* Referenced by: '<S418>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_DisableClchOffloadCnfrmd =
    0;                                 /* Referenced by: '<S472>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_InertTrqActv

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_InertiaTrqActv = 0;/* Referenced by: '<S520>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_K0AsyncCloseActv = 0;/* Referenced by: '<S400>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_K0AsyncCloseActvRel = 1;/* Referenced by: '<S410>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_MtrBStat_4_OKtoClose = 0;/* Referenced by: '<S429>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_MtrBZeroTrqActvRel = 1;/* Referenced by: '<S430>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_NiMinLaunchEna = 0;/* Referenced by: '<S526>/Calib' */

#endif

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_NiMinLaunchEnaInit = 0;/* Referenced by: '<S591>/Calib' */

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdClchCloseOk = 0;/* Referenced by: '<S431>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdHCPGearDsrd = 0;/* Referenced by: '<S503>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_InertTrqActv

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdInertiaTrqActv = 0;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdK0AsyncCloseActv = 0;/* Referenced by: '<S401>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdNiMinLaunch = 0;/* Referenced by: '<S527>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdNiMinLaunchEna = 0;/* Referenced by: '<S528>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdNtiMax = 0;/* Referenced by: '<S562>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdNtiMaxATRR = 0;/* Referenced by: '<S563>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdNtiMin = 0;/* Referenced by: '<S564>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdPwrTrnIdlSpdActvSts =
    0;                                 /* Referenced by: '<S391>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdShftTypeFA = 0;/* Referenced by: '<S344>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdTCMLCCTgt = 0;/* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdTCMStrtStpMd = 0;/* Referenced by: '<S402>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdTCMStrtTypReq = 0;/* Referenced by: '<S451>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_OvrdTCMTgtMdReq = 0;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_PwrTrnIdlSpdActvSts = 0;/* Referenced by: '<S392>/Calib' */

#endif

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_PwrTrnIdlSpdActvStsInit =
    1;                                 /* Referenced by: '<S592>/Calib' */

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_SlctGearSrcShftType = 1;/* Referenced by: '<S94>/Calib' */

#endif

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_TCC_Slip_Rgn_Init = 0;/* Referenced by: '<S593>/Calib' */

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_TCMStopTypeEna = 1;/* Referenced by: '<S452>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_UseHasActMode = 1;/* Referenced by: '<S414>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_UseMinGrInR = 1;/* Referenced by: '<S511>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static volatile CONST(boolean, TRNR_VAR_INIT) KeTRNR_b_UseSGDsrdOn_inEV = 0;/* Referenced by: '<S504>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TRNR_VAR_INIT) KeTRNR_e_K0Close =
    CeTRNR_e_PrllEngOn;                /* Referenced by: '<S479>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTMMR_e_ClchStat, TRNR_VAR_INIT) KeTRNR_e_TCMLCCTgt =
    CeTMMR_e_ClchUnlock;               /* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTRNR_e_TCMStrtTypReq, TRNR_VAR_INIT)
    KeTRNR_e_TCMNormStopTypReq = CeTRNR_e_StpNorm;/* Referenced by: '<S453>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(TeTRNR_e_TCMStrtStpMd, TRNR_VAR_INIT)
    KeTRNR_e_TCMStrtStpMd = CeTRNR_e_TCMStrtStpMd_inactv;/* Referenced by: '<S403>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTRNR_e_TCMStrtTypReq, TRNR_VAR_INIT)
    KeTRNR_e_TCMStrtTypReq = CeTRNR_e_NormalStrt;/* Referenced by: '<S454>/Calib' */

#endif

static volatile CONST(TeTRNR_e_TCMStrtTypReq, TRNR_VAR_INIT)
    KeTRNR_e_TCMStrtTypReqInit = CeTRNR_e_NormalStrt;/* Referenced by: '<S594>/Calib' */

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(TeTRNR_e_TCMTgtMdReq, TRNR_VAR_INIT) KeTRNR_e_TCMTgtMdReq =
    CeTRNR_e_SerEngOff;                /* Referenced by: '<S463>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(uint32, TRNR_VAR_INIT) KeTRNR_g_EngStrtRsn1_MaskVal = 0U;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(uint32, TRNR_VAR_INIT) KeTRNR_g_EngStrtRsn2_MaskVal = 0U;/* Referenced by: '<S433>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

static volatile CONST(sint16, TRNR_VAR_INIT) KeTRNR_i_ActGrCommVarDly = 4;/* Referenced by: '<S95>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static volatile CONST(sint16, TRNR_VAR_INIT) KeTRNR_i_GearDsrdSNAVal = 15;/* Referenced by:
                                                                      * '<S505>/Calib'
                                                                      * '<S512>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static volatile CONST(sint16, TRNR_VAR_INIT) KeTRNR_i_HCPGearDsrd = 0;/* Referenced by: '<S506>/Calib' */

#endif

static volatile CONST(sint16, TRNR_VAR_INIT) KeTRNR_i_HCPGearDsrdInit = 14;/* Referenced by: '<S595>/Calib' */

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

static volatile CONST(sint16, TRNR_VAR_INIT) KeTRNR_i_TgtGrCommVarDly = 4;/* Referenced by: '<S96>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_Clch2SlipDeadbandLowLim =
    -1.0F;                             /* Referenced by: '<S434>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_Clch2SlipDeadbandUpLim =
    1.0F;                              /* Referenced by: '<S435>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NTurbVirtTurb1stGearLSP =
    -5.0F;                             /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NTurbVirtTurb1stGearRSP =
    5.0F;                              /* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NiMinLaunch = 0.0F;/* Referenced by: '<S529>/Calib' */

#endif

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NiMinLaunchInit = 8190.0F;/* Referenced by: '<S596>/Calib' */

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NtiMax = 0.0F;/* Referenced by: '<S565>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NtiMaxATRR = 0.0F;/* Referenced by: '<S566>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_NtiMin = 0.0F;/* Referenced by: '<S567>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_OneWayClchOncLSP = -5.0F;/* Referenced by: '<S173>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_n_OneWayClchOncRSP = 1.0F;/* Referenced by: '<S174>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_ESC_Event_Delay = 0.0125F;/* Referenced by: '<S550>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_EnblGearDbnc = 0.15F;/* Referenced by: '<S507>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_MaxTimeForTCMStopType =
    1.0F;                              /* Referenced by: '<S455>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_MaxWaitPrlEngOnProdTrq =
    2.5F;                              /* Referenced by: '<S436>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_MaxWaitTmForRgnEqnChg =
    10.0F;                             /* Referenced by: '<S419>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_MinTmM2OrG2Active = 0.0F;/* Referenced by: '<S420>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_MinTmSlipCondActive =
    0.0F;                              /* Referenced by: '<S437>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_ShftTypeFAArbDelay = 3.0F;/* Referenced by: '<S345>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_ShftTypeFARngStDelay =
    0.05F;                             /* Referenced by: '<S346>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_ShftTypeFA_GRDelay = 0.1F;/* Referenced by: '<S347>/Calib' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static volatile CONST(float32, TRNR_VAR_INIT) KeTRNR_t_ShftTypeTCMActModeTm =
    0.05F;                             /* Referenced by: '<S324>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TRNR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_C1Stat_Locked;/* '<S33>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_C1Stat_Open;/* '<S33>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_C1Stat_Slipping;/* '<S33>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_C2Check;/* '<S406>/Selector1' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_ClchCloseSlipBased;/* '<S438>/AND' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_GearDsrdSNA;/* '<S484>/Comparison4' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_HasActCheck;/* '<S406>/Selector2' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_OHSRLaunchDsrd;/* '<S532>/Logical15' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_PrlEngOn_And_ProdTrq;/* '<S393>/Logical' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_RgnEqnCheck;/* '<S406>/Selector' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_SysGoActv;/* '<S393>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_SysGoEngProdTrq;/* '<S393>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(boolean, TRNR_VAR_INIT) VeTRNC_b_SysGoToInactive;/* '<S407>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNC_e_ShftType;/* '<S106>/Switch' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT) VeTRNC_e_ShftTypeActualGr;/* '<S108>/Switch3' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT) VeTRNC_e_ShftTypeTargetGr;/* '<S108>/Switch4' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static VAR(sint16, TRNR_VAR_INIT) VeTRNC_i_GearDsrd;/* '<S502>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

static VAR(sint16, TRNR_VAR_INIT) VeTRNC_i_GearDsrdRaw;/* '<S508>/Switch' */

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static VAR(sint16, TRNR_VAR_INIT) VeTRNC_i_LaunchSpdSrc;/* '<S532>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static VAR(float32, TRNR_VAR_INIT) VeTRNC_n_NtiMax;/* '<S557>/Selector3' */

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

static VAR(float32, TRNR_VAR_INIT) VeTRNC_n_NtiMin;/* '<S557>/Selector1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(float32, TRNR_VAR_INIT) VeTRNC_n_Vturb;/* '<S106>/Product' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(float32, TRNR_VAR_INIT) VeTRNC_n_Vturb1Gr;/* '<S109>/Product' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(uint16, TRNR_VAR_INIT) VeTRNR_Cnt_ShftTypeHoldDelay;/* '<S114>/Selector1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_CurrShftTypeCond;/* '<S265>/Logical12' */

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_HSERActualGearError;/* '<S77>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_NturbGrtVturbGr1;/* '<S194>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_PrevShftTypeCond;/* '<S265>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_RngDsrdReq;/* '<S265>/Logical10' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_ShftTypeHoldReset;/* '<S114>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(boolean, TRNR_VAR_INIT) VeTRNR_b_ShftTypeStdyStDtct;/* '<S265>/Selector' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_CurrShftType;/* '<S264>/ShiftType_Manager' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeHSER_e_RngEqnSel, TRNR_VAR_INIT) VeTRNR_e_CurrShftTypeEqn;/* '<S294>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

static VAR(TeTRNR_e_TCMGearStat, TRNR_VAR_INIT) VeTRNR_e_HSERActualGear;/* '<S77>/Merge' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_PrevShftType;/* '<S264>/ShiftType_Manager' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeHSER_e_RngEqnSel, TRNR_VAR_INIT) VeTRNR_e_PrevShftTypeEqn;/* '<S295>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_ShftTypeArb;/* '<S117>/Stateflow Chart' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_ShftTypeBlk;/* '<S104>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_ShftTypeEngStart;/* '<S109>/Merge' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_ShftTypeFACANArb;/* '<S115>/Switch' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftType, TRNR_VAR_INIT) VeTRNR_e_ShftTypePRNDL;/* '<S112>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(TeTRNR_e_TCMShftTypeTLF, TRNR_VAR_INIT) VeTRNR_e_ShftTypeTLFArb;
                                 /* '<S107>/ClutchStartST_TLFArbStateMachine' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(uint32, TRNR_VAR_INIT) VeTRNR_g_EngStrtRsn1Masked;/* '<S408>/Bitwise Logical Operator6' */

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

static VAR(uint32, TRNR_VAR_INIT) VeTRNR_g_EngStrtRsn2Masked;/* '<S408>/Bitwise Logical Operator1' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(sint16, TRNR_VAR_INIT) VeTRNR_i_ClchStrtSTTLFArbSt;
                                 /* '<S107>/ClutchStartST_TLFArbStateMachine' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(sint16, TRNR_VAR_INIT) VeTRNR_i_ShftTypeMngrSt;/* '<S264>/ShiftType_Manager' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(sint16, TRNR_VAR_INIT) VeTRNR_i_ShftTypeTCMActModeSt;/* '<S117>/Stateflow Chart' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(float32, TRNR_VAR_INIT) VeTRNR_t_ShftTypeTCMActModeTmr;/* '<S117>/Stateflow Chart' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(float32, TRNR_VAR_INIT) VeTRNR_t_ShftTypeTmr;/* '<S264>/ShiftType_Manager' */

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static VAR(uint16, TRNR_VAR_INIT) VeTRNR_y_ShftTypeFA;/* '<S327>/Switch15' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TRNR
#include "MemMap.h"

CONST(ConstB_TRNR_ac_T, TRNR_VAR_INIT) TRNR_ac_ConstB =
{
    CeTRNR_e_SerEngOff,                /* '<S574>/Constant' */
    CeTRNR_e_TCMStrtStpMd_inactv,      /* '<S575>/Constant' */
    CeTRNR_e_SteadyStateDCT,           /* '<S582>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S581>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S580>/Constant' */
    CeTRNR_e_D2,                       /* '<S584>/Constant' */
    CeTRNR_e_D1,                       /* '<S586>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S585>/Constant' */
    CeTRNR_e_D2,                       /* '<S587>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S583>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S588>/Constant' */
    CeTRNR_e_Neutral,                  /* '<S589>/Constant' */
    CeTMMR_e_ClchUnlock,               /* '<S576>/Constant' */
    CeHCCR_e_ClInvalid,                /* '<S570>/Constant' */
    CeHCCR_e_ClReleased,               /* '<S577>/Constant' */
    CeHCCR_e_ClReleased,               /* '<S579>/Constant' */
    CeHCCR_e_ClActuated,               /* '<S571>/Constant' */
    CeHCCR_e_ClActuated,               /* '<S572>/Constant' */
    CeHCCR_e_ClActuated,               /* '<S573>/Constant' */
    CeESSR_e_Trans_Stat_Off            /* '<S578>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TRNR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

VAR(B_TRNR_ac_T, TRNR_VAR_INIT) TRNR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

VAR(DW_TRNR_ac_T, TRNR_VAR_INIT) TRNR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

/* Previous zero-crossings (trigger) states */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"

VAR(PrevZCX_TRNR_ac_T, TRNR_VAR_INIT) TRNR_ac_PrevZCX;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRNR
#include "MemMap.h"
#if Rte_SysCon_Variant_TRNR_Clutch_Status

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_Subsystem1(VAR(TeHCCR_e_ClutchStatus,
    AUTOMATIC) rtu_In1, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC, TRNR_VAR_INIT)
    rty_Out1);

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_UseSynchro2GearCAN(VAR
    (TeTRNR_e_TCMGearStat, AUTOMATIC) rtu_VeTINR_e_Synchro2Gear, P2VAR
    (TeTRNR_e_TCMGearStat, AUTOMATIC, TRNR_VAR_INIT) rty_TCMActualEvenGear);

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_TRNC_ShiftType_CST(VAR
    (TeTRNR_e_TCMShftType, AUTOMATIC) rtu_ShftType_In, P2VAR
    (TeTRNR_e_TCMShftType, AUTOMATIC, TRNR_VAR_INIT) rty_ShftType);

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_LaunchSpd1(CONST(float32, AUTOMATIC)
    rtu_LaunchSpdDsrd[9], VAR(float32, AUTOMATIC) rty_NiMinLaunch[9]);

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_LaunchSpdSrc1(VAR(sint16, AUTOMATIC)
    rtu_LaunchSpdSrc, P2VAR(sint16, AUTOMATIC, TRNR_VAR_INIT)
    rty_TRNC_i_LaunchSpdSrc);

#endif

/*
 * Output and update for action system:
 *    '<S34>/Subsystem1'
 *    '<S34>/Subsystem2'
 *    '<S34>/Subsystem3'
 *    '<S34>/Subsystem4'
 *    '<S35>/Subsystem1'
 *    '<S35>/Subsystem2'
 *    '<S35>/Subsystem3'
 *    '<S35>/Subsystem4'
 *    '<S35>/Subsystem5'
 *    '<S36>/Subsystem1'
 *    ...
 */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_Subsystem1(VAR(TeHCCR_e_ClutchStatus,
    AUTOMATIC) rtu_In1, P2VAR(TeHCCR_e_ClutchStatus, AUTOMATIC, TRNR_VAR_INIT)
    rty_Out1)
{
    /* Inport: '<S64>/In1' */
    *rty_Out1 = rtu_In1;
}

#endif

/*
 * Output and update for action system:
 *    '<S105>/UseSynchro2GearCAN'
 *    '<S105>/UseSynchro1GearCAN'
 */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_UseSynchro2GearCAN(VAR
    (TeTRNR_e_TCMGearStat, AUTOMATIC) rtu_VeTINR_e_Synchro2Gear, P2VAR
    (TeTRNR_e_TCMGearStat, AUTOMATIC, TRNR_VAR_INIT) rty_TCMActualEvenGear)
{
    /* DataTypeConversion: '<S169>/DataTypeConversion' */
    *rty_TCMActualEvenGear = rtu_VeTINR_e_Synchro2Gear;
}

#endif

/*
 * Output and update for action system:
 *    '<S265>/TRNC_ShiftType_CST'
 *    '<S265>/TRNC_ShiftType_PST'
 */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_TRNC_ShiftType_CST(VAR
    (TeTRNR_e_TCMShftType, AUTOMATIC) rtu_ShftType_In, P2VAR
    (TeTRNR_e_TCMShftType, AUTOMATIC, TRNR_VAR_INIT) rty_ShftType)
{
    /* Inport: '<S283>/ShftType_In' */
    *rty_ShftType = rtu_ShftType_In;
}

#endif

/*
 * Output and update for action system:
 *    '<S530>/LaunchSpd1'
 *    '<S530>/LaunchSpd2'
 *    '<S530>/LaunchSpd3'
 *    '<S530>/LaunchSpd4'
 */
#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_LaunchSpd1(CONST(float32, AUTOMATIC)
    rtu_LaunchSpdDsrd[9], VAR(float32, AUTOMATIC) rty_NiMinLaunch[9])
{
    sint32 i;

    /* Inport: '<S535>/LaunchSpdDsrd' */
    for (i = 0; i < 9; i++)
    {
        rty_NiMinLaunch[i] = rtu_LaunchSpdDsrd[i];
    }

    /* End of Inport: '<S535>/LaunchSpdDsrd' */
}

#endif

/*
 * Output and update for action system:
 *    '<S532>/LaunchSpdSrc1'
 *    '<S532>/LaunchSpdSrc2'
 *    '<S532>/LaunchSpdSrc3'
 */
#if Rte_SysCon_Variant_TRNR_LaunchCntrl

static FUNC(void, TRNR_CODE_LOCAL) TRNR_ac_LaunchSpdSrc1(VAR(sint16, AUTOMATIC)
    rtu_LaunchSpdSrc, P2VAR(sint16, AUTOMATIC, TRNR_VAR_INIT)
    rty_TRNC_i_LaunchSpdSrc)
{
    /* Inport: '<S551>/LaunchSpdSrc' */
    *rty_TRNC_i_LaunchSpdSrc = rtu_LaunchSpdSrc;
}

#endif

/* Model step function for TID1 */
FUNC(void, TRNR_CODE) TRNR_MedTEB2(void) /* Explicit Task: MedTEB2 */
{
    /* local block i/o variables */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTINR_e_Target;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTINR_e_Actual;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_TmpSignalConversionAtVeTINR_e_Synchr;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTINR_e_HASSta;

#endif

    boolean tmpRead;

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean tmpRead_0;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    uint16 tmpRead_1;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeTINR_e_P2SpdCntrlReq tmpRead_2;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat tmpRead_3;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

    float32 tmpRead_7;

#endif

    TeESSR_e_TCM_TransitionStatus tmpRead_8;

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeSRAR_e_TCMECMComFail_ePTCAN tmpRead_9;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTMMR_e_TransShiftStat tmpRead_a;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_VeTRNR_b_HSERActualGearError;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_VeTRNR_b_HSERActualGearError_k;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    boolean rtb_VM_Conditional_Signal_TRNC_SelTgtAct;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_HSERActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    float32 rtb_Merge2;

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

    boolean rtb_Comparison6_n[13];

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear

    uint32 tmp;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Comparison9_b;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Logical4_lh;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_TmpSignalConversionAtVeTINR_b_Target;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_TmpSignalConversionAtVeTINR_b_Actual;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_HSERActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Comparison3_g;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Comparison_h;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Logical_a;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Logical3_l;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_TmpSignalConversionAtVeTINR_b_ShftTy;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_TmpSignalConversionAtVeTINR_b_TCMAct;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    float32 rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    sint16 rtb_DataTypeConversion;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHSER_e_RngEqnSel rtb_Selector_cz[2];

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    sint16 rtb_DataTypeConversion_gj;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_HSERActGear || Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    sint16 rtb_Sum1_b;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    sint8 rtPrevAction;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_AND_fi;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    float32 rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    sint16 rtb_Sum1_a[2];

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Comparison3_e;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean rtb_Comparison3_c;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMShftType rtb_DataTypeConversion_o4;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_DataTypeConversion_i3;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_DataTypeConversion_co;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHCCR_e_ClutchStatus rtb_VM_Conditional_Signal_TRNR_ShftTypeF;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeHCCR_e_ClutchStatus rtb_Switch_em;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeFWDR_e_PTU_State rtb_TmpSignalConversionAtVeFWDR_e_PTU_St;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHCCR_e_ClutchStatus rtb_VM_Conditional_Signal_TRNR_ShftTyp_j;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeFWDR_e_RDU_State rtb_TmpSignalConversionAtVeFWDR_e_RDU_St;

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER_e_RngS_p;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_VeTRNR_e_HSERActualGear;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeHCCR_e_ClutchStatus rtb_Switch3_m;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeOHSR_e_VLE_DriveStat rtb_TmpSignalConversionAtVeTINR_e_ILESta;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMGearStat rtb_VeTRNR_e_HSERActualGear_p;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMShftType rtb_TmpSignalConversionAtVeTINR_e_Shft_f;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeHCCR_e_ClutchStatus rtb_Switch5_m;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHCCR_e_ClutchStatus rtb_VM_Conditional_Signal_TRNC_ShftTypeA;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRGR_e_TransRangeState rtb_TmpSignalConversionAtVeTRGR_e_VldtdT;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMTgtMdReq rtb_TmpSignalConversionAtVeTINR_e_TCMAct;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    TeTRNR_e_TCMGearStat rtb_VeTRNC_e_ShftTypeTargetGr;

#endif

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    TeTRNR_e_TCMGearStat rtb_VeTRNC_e_ShftTypeActualGr;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER_e_RngE_h;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHSER_e_SteadyStates rtb_TmpSignalConversionAtVeHSER_e_HTDR_S;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_DisbClutchStatPostProcess

    TeHCCR_e_ClutchStatus rtb_SignalConversion_bc;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeOHSR_e_RngSel rtb_TmpSignalConversionAtVeOHSR_e_RngD_p;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMShftTypeTLF rtb_TmpSignalConversionAtVeTINR_e_ShftTy;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtVeTINR_e_Sync_b;

#endif

#if Rte_SysCon_Variant_TRNR_HSERActGear || Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    sint32 i;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    sint16 u1;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TeTRNR_e_TCMShftType rtb_Logical2_hu_tmp;

#endif

#if Rte_SysCon_Variant_TRNR_Clutch_Status

    TeHCCR_e_ClutchStatus rtb_Comparison3_e_tmp;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    uint8 rtb_Comparison5_o_tmp_tmp;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    boolean guard3 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/TRNR_MedTEB2'
     */
    /* SignalConversion generated from: '<S2>/VeTINR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S2>/VeTINR_b_ActualGearFA'
     *  SignalConversion generated from: '<S2>/VeTINR_b_TargetGearFA'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ShftType'
     */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeTINR_e_TargetGear' incorporates:
     *  Inport: '<Root>/VeTINR_e_TargetGear'
     */
    (void)Rte_Read_VeTINR_e_TargetGear_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_Target);

    /* SignalConversion generated from: '<S2>/VeTINR_b_TargetGearFA' incorporates:
     *  Inport: '<Root>/VeTINR_b_TargetGearFA'
     */
    (void)Rte_Read_VeTINR_b_TargetGearFA_Value
        (&rtb_TmpSignalConversionAtVeTINR_b_Target);

    /* SignalConversion generated from: '<S2>/VeTINR_e_ActualGear' incorporates:
     *  Inport: '<Root>/VeTINR_e_ActualGear'
     */
    (void)Rte_Read_VeTINR_e_ActualGear_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_Actual);

    /* SignalConversion generated from: '<S2>/VeTINR_b_ActualGearFA' incorporates:
     *  Inport: '<Root>/VeTINR_b_ActualGearFA'
     */
    (void)Rte_Read_VeTINR_b_ActualGearFA_Value
        (&rtb_TmpSignalConversionAtVeTINR_b_Actual);

    /* SignalConversion generated from: '<S2>/VeTINR_e_ShftType' incorporates:
     *  Inport: '<Root>/VeTINR_e_ShftType'
     */
    (void)Rte_Read_VeTINR_e_ShftType_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_Shft_f);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTINR_e_TargetGear' */

    /* SignalConversion generated from: '<S2>/VeTINR_b_ShftTypeFA' incorporates:
     *  SignalConversion generated from: '<S2>/VeTINR_b_TCMActModeFA'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ShftTypeTLF'
     *  SignalConversion generated from: '<S2>/VeTINR_e_TCMActMode'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeTINR_b_ShftTypeFA' incorporates:
     *  Inport: '<Root>/VeTINR_b_ShftTypeFA'
     */
    (void)Rte_Read_VeTINR_b_ShftTypeFA_Value
        (&rtb_TmpSignalConversionAtVeTINR_b_ShftTy);

    /* SignalConversion generated from: '<S2>/VeTINR_e_ShftTypeTLF' incorporates:
     *  Inport: '<Root>/VeTINR_e_ShftTypeTLF'
     */
    (void)Rte_Read_VeTINR_e_ShftTypeTLF_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_ShftTy);

    /* SignalConversion generated from: '<S2>/VeTINR_e_TCMActMode' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCMActMode'
     */
    (void)Rte_Read_VeTINR_e_TCMActMode_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_TCMAct);

    /* SignalConversion generated from: '<S2>/VeTINR_b_TCMActModeFA' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCMActModeFA'
     */
    (void)Rte_Read_VeTINR_b_TCMActModeFA_Value
        (&rtb_TmpSignalConversionAtVeTINR_b_TCMAct);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTINR_b_ShftTypeFA' */

    /* SignalConversion generated from: '<S2>/VeTINR_e_ILEStat' incorporates:
     *  SignalConversion generated from: '<S2>/VeTINR_e_HASStatusK0'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* SignalConversion generated from: '<S2>/VeTINR_e_ILEStat' incorporates:
     *  Inport: '<Root>/VeTINR_e_ILEStat'
     */
    (void)Rte_Read_VeTINR_e_ILEStat_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_ILESta);

    /* SignalConversion generated from: '<S2>/VeTINR_e_HASStatusK0' incorporates:
     *  Inport: '<Root>/VeTINR_e_HASStatusK0'
     */
    (void)Rte_Read_VeTINR_e_HASStatusK0_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_HASSta);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTINR_e_ILEStat' */

    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&rtb_TmpSignalConversionAtVeTRGR_e_VldtdT);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt' */

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' */
#if Rte_SysCon_Variant_TRNR_HSERActGear || Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngS_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeHSER_e_RngSt' */

    /* SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  SignalConversion generated from: '<S2>/VeHSER_e_HTDR_State'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     *  SignalConversion generated from: '<S2>/VeOHSR_e_RngDsrd'
     *  SignalConversion generated from: '<S2>/VeVSDR_n_NTurb'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd' incorporates:
     *  Inport: '<Root>/VeVSDR_n_PrimNoSgndFltrd'
     */
    (void)Rte_Read_VeVSDR_n_PrimNoSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_PrimNo);

    /* SignalConversion generated from: '<S2>/VeVSDR_n_NTurb' incorporates:
     *  Inport: '<Root>/VeVSDR_n_NTurb'
     */
    (void)Rte_Read_VeVSDR_n_NTurb_Value
        (&rtb_TmpSignalConversionAtVeVSDR_n_NTurbO);

    /* SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngE_h);

    /* SignalConversion generated from: '<S2>/VeHSER_e_HTDR_State' incorporates:
     *  Inport: '<Root>/VeHSER_e_HTDR_State'
     */
    (void)Rte_Read_VeHSER_e_HTDR_State_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_HTDR_S);

    /* SignalConversion generated from: '<S2>/VeOHSR_e_RngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     */
    (void)Rte_Read_VeOHSR_e_RngDsrd_Value
        (&rtb_TmpSignalConversionAtVeOHSR_e_RngD_p);

#endif

    /* End of SignalConversion generated from: '<S2>/VeVSDR_n_PrimNoSgndFltrd' */

    /* SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Gear' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status || Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Gear' incorporates:
     *  Inport: '<Root>/VeTINR_e_Synchro2Gear'
     */
    (void)Rte_Read_VeTINR_e_Synchro2Gear_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_Synchr);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Gear' */

    /* SignalConversion generated from: '<S2>/VeTINR_e_Synchro1Sts' */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SignalConversion generated from: '<S2>/VeTINR_e_Synchro1Sts' incorporates:
     *  Inport: '<Root>/VeTINR_e_Synchro1Sts'
     */
    (void)Rte_Read_VeTINR_e_Synchro1Sts_Value
        (&rtb_TmpSignalConversionAtVeTINR_e_Sync_b);

#endif

    /* End of SignalConversion generated from: '<S2>/VeTINR_e_Synchro1Sts' */

    /* SignalConversion generated from: '<S2>/VeFWDR_e_PTU_State' incorporates:
     *  SignalConversion generated from: '<S2>/VeFWDR_e_RDU_State'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* SignalConversion generated from: '<S2>/VeFWDR_e_PTU_State' incorporates:
     *  Inport: '<Root>/VeFWDR_e_PTU_State'
     */
    (void)Rte_Read_VeFWDR_e_PTU_State_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_PTU_St);

    /* SignalConversion generated from: '<S2>/VeFWDR_e_RDU_State' incorporates:
     *  Inport: '<Root>/VeFWDR_e_RDU_State'
     */
    (void)Rte_Read_VeFWDR_e_RDU_State_Value
        (&rtb_TmpSignalConversionAtVeFWDR_e_RDU_St);

#endif

    /* End of SignalConversion generated from: '<S2>/VeFWDR_e_PTU_State' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeESSR_e_TCM_TransitionStatus' */
    (void)Rte_Read_VeESSR_e_TCM_TransitionStatus_Value(&tmpRead_8);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/TRNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TRNC_Cntrls_Input'
     */
    /* UnitDelay: '<S9>/Unit Delay1' incorporates:
     *  DataTypeConversion: '<S13>/DataTypeConversion'
     *  DataTypeConversion: '<S15>/DataTypeConversion'
     *  DataTypeConversion: '<S16>/DataTypeConversion'
     *  UnitDelay: '<S9>/Unit Delay2'
     *  UnitDelay: '<S9>/Unit Delay3'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* DataTypeConversion: '<S13>/DataTypeConversion' */
    rtb_DataTypeConversion_o4 = (TeTRNR_e_TCMShftType)
        TRNR_ac_DW.UnitDelay1_DSTATE_j;

    /* DataTypeConversion: '<S15>/DataTypeConversion' */
    rtb_DataTypeConversion_i3 = (TeTRNR_e_TCMGearStat)
        TRNR_ac_DW.UnitDelay2_DSTATE;

    /* DataTypeConversion: '<S16>/DataTypeConversion' */
    rtb_DataTypeConversion_co = (TeTRNR_e_TCMGearStat)
        TRNR_ac_DW.UnitDelay3_DSTATE;

#endif

    /* End of UnitDelay: '<S9>/Unit Delay1' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* Outputs for Atomic SubSystem: '<S9>/TRNC_Clutch_Status' */
    /* Inport: '<Root>/VeFWDR_M_FricTrqClutch' */
    (void)Rte_Read_VeFWDR_M_FricTrqClutch_Value(&rtb_Merge2);

    /* Inport: '<Root>/VeTINR_e_Synchro2Sts' */
    (void)Rte_Read_VeTINR_e_Synchro2Sts_Value(&rtb_Switch_em);

    /* Inport: '<Root>/VeTINR_e_P2SpdCntrlReq' */
    (void)Rte_Read_VeTINR_e_P2SpdCntrlReq_Value(&tmpRead_2);

    /* Inport: '<Root>/VeTINR_d_TCMFailures' */
    (void)Rte_Read_VeTINR_d_TCMFailures_Value(&tmpRead_1);

    /* Inport: '<Root>/VeTINR_b_KSB' */
    (void)Rte_Read_VeTINR_b_KSB_Value(&tmpRead_0);

    /* Inport: '<Root>/VeTINR_b_KOB' */
    (void)Rte_Read_VeTINR_b_KOB_Value(&rtb_Logical4_lh);

    /* Inport: '<Root>/VeTINR_b_KGB' */
    (void)Rte_Read_VeTINR_b_KGB_Value(&rtb_Logical_a);

    /* Outputs for Atomic SubSystem: '<S20>/TRNC_Clutch_Status' */
    /* Switch: '<S30>/Switch' incorporates:
     *  Constant: '<S38>/Constant'
     *  Constant: '<S39>/Calib'
     *  Logic: '<S30>/Logical6'
     *  RelationalOperator: '<S30>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Gear'
     */
    if ((((uint32)rtb_TmpSignalConversionAtVeTINR_e_Synchr) == CeTRNR_e_Neutral)
        && (HeTRNR_b_Synchro2StsArbEna))
    {
        /* Switch: '<S30>/Switch' incorporates:
         *  Constant: '<S37>/Constant'
         */
        rtb_Switch_em = CeHCCR_e_ClReleased;
    }

    /* End of Switch: '<S30>/Switch' */

    /* Switch: '<S31>/Switch3' incorporates:
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S47>/Calib'
     *  Logic: '<S31>/Logical'
     *  Logic: '<S31>/Logical1'
     *  Logic: '<S31>/Logical2'
     *  Logic: '<S31>/Logical3'
     *  RelationalOperator: '<S31>/Comparison1'
     *  RelationalOperator: '<S31>/Comparison2'
     *  RelationalOperator: '<S31>/Comparison3'
     *  RelationalOperator: '<S31>/Comparison4'
     *  RelationalOperator: '<S31>/Comparison5'
     *  RelationalOperator: '<S31>/Comparison6'
     */
    if ((((((uint32)rtb_TmpSignalConversionAtVeFWDR_e_PTU_St) ==
            CeFWDR_e_PTU_4High) || (((uint32)
            rtb_TmpSignalConversionAtVeFWDR_e_PTU_St) == CeFWDR_e_PTU_2High)) ||
         (((uint32)rtb_TmpSignalConversionAtVeFWDR_e_PTU_St) == CeFWDR_e_PTU_Low))
        || (((((uint32)rtb_TmpSignalConversionAtVeFWDR_e_RDU_St) ==
              CeFWDR_e_RDU_High) || (((uint32)
            rtb_TmpSignalConversionAtVeFWDR_e_RDU_St) == CeFWDR_e_RDU_Low)) &&
            (rtb_Merge2 >= KeTRNR_M_FricTrqClutchThrsh)))
    {
        /* Switch: '<S31>/Switch3' incorporates:
         *  Constant: '<S46>/Constant'
         */
        rtb_Switch3_m = CeHCCR_e_ClLocked;
    }
    else
    {
        /* Switch: '<S31>/Switch3' incorporates:
         *  Constant: '<S45>/Constant'
         */
        rtb_Switch3_m = CeHCCR_e_ClReleased;
    }

    /* End of Switch: '<S31>/Switch3' */

    /* Logic: '<S33>/Logical1' incorporates:
     *  Constant: '<S33>/Constant Value'
     *  Constant: '<S57>/Constant'
     *  Constant: '<S63>/Calib'
     *  RelationalOperator: '<S33>/Comparison'
     *  RelationalOperator: '<S33>/Comparison4'
     *  S-Function (sfix_bitop): '<S33>/Bitwise Logical Operator'
     *  Switch: '<S33>/Switch4'
     */
    VeTRNC_b_C1Stat_Locked = ((((uint32)rtb_TmpSignalConversionAtVeTINR_e_ILESta)
        == CeOHSR_e_LaunchState) || (((((sint32)tmpRead_1) & ((sint32)
        HeTRNR_d_TCMFailureBit)) > 0) || rtb_Logical_a));

    /* Logic: '<S33>/Logical2' incorporates:
     *  Constant: '<S58>/Constant'
     *  RelationalOperator: '<S33>/Comparison1'
     */
    VeTRNC_b_C1Stat_Open = ((((uint32)rtb_TmpSignalConversionAtVeTINR_e_ILESta) ==
        CeOHSR_e_NeutralState) || rtb_Logical4_lh);

    /* Logic: '<S33>/Logical3' incorporates:
     *  Constant: '<S59>/Constant'
     *  Constant: '<S61>/Constant'
     *  Inport: '<Root>/VeTINR_e_P2SpdCntrlReq'
     *  RelationalOperator: '<S33>/Comparison2'
     *  RelationalOperator: '<S33>/Comparison3'
     */
    VeTRNC_b_C1Stat_Slipping = (((((uint32)
        rtb_TmpSignalConversionAtVeTINR_e_ILESta) == CeOHSR_e_CreepState) ||
        tmpRead_0) || (((uint32)tmpRead_2) == CeTINR_e_SpeedControlRequest));

    /* Switch: '<S33>/Switch5' incorporates:
     *  Constant: '<S62>/Calib'
     *  Inport: '<Root>/VeTINR_b_ILE_STO_Stat'
     */
    if (HeTRNR_b_K1StatPassThrgh)
    {
        /* Switch: '<S33>/Switch5' incorporates:
         *  Inport: '<Root>/VeTINR_e_K1Status'
         */
        (void)Rte_Read_VeTINR_e_K1Status_Value(&rtb_Switch5_m);
    }
    else
    {
        (void)Rte_Read_VeTINR_b_ILE_STO_Stat_Value(&rtb_Comparison3_g);

        /* Switch: '<S33>/Switch3' incorporates:
         *  Inport: '<Root>/VeTINR_b_ILE_STO_Stat'
         *  Switch: '<S33>/Switch'
         *  Switch: '<S33>/Switch1'
         *  Switch: '<S33>/Switch2'
         */
        if (rtb_Comparison3_g)
        {
            /* Switch: '<S33>/Switch5' incorporates:
             *  Constant: '<S56>/Constant'
             *  Switch: '<S33>/Switch3'
             */
            rtb_Switch5_m = CeHCCR_e_ClSynched;
        }
        else if (VeTRNC_b_C1Stat_Locked)
        {
            /* Switch: '<S33>/Switch' incorporates:
             *  Constant: '<S53>/Constant'
             *  Switch: '<S33>/Switch5'
             */
            rtb_Switch5_m = CeHCCR_e_ClLocked;
        }
        else if (VeTRNC_b_C1Stat_Open)
        {
            /* Switch: '<S33>/Switch1' incorporates:
             *  Constant: '<S54>/Constant'
             *  Switch: '<S33>/Switch'
             *  Switch: '<S33>/Switch5'
             */
            rtb_Switch5_m = CeHCCR_e_ClReleased;
        }
        else if (VeTRNC_b_C1Stat_Slipping)
        {
            /* Switch: '<S33>/Switch2' incorporates:
             *  Constant: '<S55>/Constant'
             *  Switch: '<S33>/Switch'
             *  Switch: '<S33>/Switch1'
             *  Switch: '<S33>/Switch5'
             */
            rtb_Switch5_m = CeHCCR_e_ClActuated;
        }
        else
        {
            /* Switch: '<S33>/Switch5' incorporates:
             *  Constant: '<S60>/Constant'
             *  Switch: '<S33>/Switch'
             *  Switch: '<S33>/Switch1'
             *  Switch: '<S33>/Switch2'
             */
            rtb_Switch5_m = CeHCCR_e_ClReleased;
        }

        /* End of Switch: '<S33>/Switch3' */
    }

    /* End of Switch: '<S33>/Switch5' */

    /* Switch: '<S32>/Switch' incorporates:
     *  Constant: '<S51>/Calib'
     *  Inport: '<Root>/VeTMMR_b_TrqBrkShftActv'
     */
    if (HeTRNR_b_EnblILEStatusDCT)
    {
        (void)Rte_Read_VeTMMR_b_TrqBrkShftActv_Value(&rtb_Comparison_h);

        /* Selector: '<S32>/Selector' incorporates:
         *  Constant: '<S48>/Constant'
         *  DataTypeConversion: '<S32>/Data Type Conversion1'
         *  Inport: '<Root>/VeTMMR_b_TrqBrkShftActv'
         *  MinMax: '<S32>/MinMax1'
         *  RelationalOperator: '<S32>/Comparison4'
         *  SignalConversion generated from: '<S2>/VeTINR_e_HASStatusK0'
         *  Switch: '<S30>/Switch'
         *  Switch: '<S32>/Switch1'
         *  Switch: '<S32>/Switch2'
         *  Switch: '<S33>/Switch5'
         */
        if (CeHCCR_e_ClReleased == ((uint32)rtb_Switch_em))
        {
            rtb_Comparison3_e_tmp = CeHCCR_e_ClReleased;
        }
        else
        {
            rtb_Comparison3_e_tmp = rtb_TmpSignalConversionAtVeTINR_e_HASSta;
        }

        rtb_Sum1_b = (sint16)rtb_Switch5_m;
        if (rtb_Comparison3_e_tmp > rtb_Switch5_m)
        {
            rtb_Sum1_b = (sint16)rtb_Comparison3_e_tmp;
        }

        if (rtb_Comparison_h)
        {
            /* DataTypeConversion: '<S32>/Data Type Conversion2' incorporates:
             *  Constant: '<S52>/Calib'
             */
            u1 = (sint16)HeTRNR_e_TrqBrkShftOvrrd;
        }
        else
        {
            /* DataTypeConversion: '<S32>/Data Type Conversion2' incorporates:
             *  Constant: '<S49>/Constant'
             */
            u1 = CeHCCR_e_ClReleased;
        }

        if (rtb_Sum1_b > u1)
        {
            u1 = rtb_Sum1_b;
        }

        /* Switch: '<S32>/Switch' incorporates:
         *  Constant: '<S50>/Calib'
         *  Selector: '<S32>/Selector'
         */
        TRNR_ac_B.Switch_c = HaTRNR_e_ILEStatusDCT[(u1)];
    }
    else
    {
        /* Switch: '<S32>/Switch' incorporates:
         *  Switch: '<S33>/Switch5'
         */
        TRNR_ac_B.Switch_c = rtb_Switch5_m;
    }

    /* End of Switch: '<S32>/Switch' */

    /* SwitchCase: '<S34>/Switch_Case' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Calib'
     */
    switch (HeTRNR_i_SlctStatusToC1Stat)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S34>/Subsystem1' incorporates:
         *  ActionPort: '<S64>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch5_m, &TRNR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S34>/Subsystem1' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S34>/Subsystem2' incorporates:
         *  ActionPort: '<S65>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_TmpSignalConversionAtVeTINR_e_HASSta,
                           &TRNR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S34>/Subsystem2' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S34>/Subsystem3' incorporates:
         *  ActionPort: '<S66>/Action Port'
         */
        TRNR_ac_Subsystem1(CeHCCR_e_ClActuated, &TRNR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S34>/Subsystem3' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S34>/Subsystem4' incorporates:
         *  ActionPort: '<S67>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch3_m, &TRNR_ac_B.Merge);

        /* End of Outputs for SubSystem: '<S34>/Subsystem4' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S34>/Switch_Case' */

    /* SwitchCase: '<S35>/Switch_Case' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S28>/Calib'
     */
    switch (HeTRNR_i_SlctStatusToC2Stat)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S35>/Subsystem1' incorporates:
         *  ActionPort: '<S68>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch5_m, &TRNR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S35>/Subsystem1' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S35>/Subsystem2' incorporates:
         *  ActionPort: '<S69>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_TmpSignalConversionAtVeTINR_e_HASSta,
                           &TRNR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S35>/Subsystem2' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S35>/Subsystem3' incorporates:
         *  ActionPort: '<S70>/Action Port'
         */
        TRNR_ac_Subsystem1(CeHCCR_e_ClActuated, &TRNR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S35>/Subsystem3' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S35>/Subsystem4' incorporates:
         *  ActionPort: '<S71>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch3_m, &TRNR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S35>/Subsystem4' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S35>/Subsystem5' incorporates:
         *  ActionPort: '<S72>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch_em, &TRNR_ac_B.Merge_f);

        /* End of Outputs for SubSystem: '<S35>/Subsystem5' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S35>/Switch_Case' */

    /* SwitchCase: '<S36>/Switch_Case' incorporates:
     *  Constant: '<S26>/Constant'
     *  Constant: '<S29>/Calib'
     */
    switch (HeTRNR_i_SlctStatusToC3Stat)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S36>/Subsystem1' incorporates:
         *  ActionPort: '<S73>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch5_m, &TRNR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S36>/Subsystem1' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S36>/Subsystem2' incorporates:
         *  ActionPort: '<S74>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_TmpSignalConversionAtVeTINR_e_HASSta,
                           &TRNR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S36>/Subsystem2' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S36>/Subsystem3' incorporates:
         *  ActionPort: '<S75>/Action Port'
         */
        TRNR_ac_Subsystem1(CeHCCR_e_ClActuated, &TRNR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S36>/Subsystem3' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S36>/Subsystem4' incorporates:
         *  ActionPort: '<S76>/Action Port'
         */
        TRNR_ac_Subsystem1(rtb_Switch3_m, &TRNR_ac_B.Merge_p);

        /* End of Outputs for SubSystem: '<S36>/Subsystem4' */
        break;

      default:
        /* no actions */
        break;
    }

    /* End of SwitchCase: '<S36>/Switch_Case' */
    /* End of Outputs for SubSystem: '<S20>/TRNC_Clutch_Status' */
    /* End of Outputs for SubSystem: '<S9>/TRNC_Clutch_Status' */
#endif

    /* SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  Merge: '<S35>/Merge'
     */
    rtb_VM_Conditional_Signal_TRNR_ShftTypeF = TRNR_ac_B.Merge_f;

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  Merge: '<S34>/Merge'
     */
    rtb_VM_Conditional_Signal_TRNR_ShftTyp_j = TRNR_ac_B.Merge;

#elif !Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_VM_Conditional_Signal_TRNR_ShftTypeF = CeHCCR_e_ClInvalid;

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_VM_Conditional_Signal_TRNR_ShftTyp_j = CeHCCR_e_ClInvalid;

#endif

    /* End of SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb' */
#if Rte_SysCon_Variant_TRNR_HSERActGear

    /* Outputs for Atomic SubSystem: '<S9>/TRNC_HSERActGear' */
    /* Outputs for Atomic SubSystem: '<S21>/TRNC_HSERActGear' */
    /* SwitchCase: '<S77>/SwitchCase' incorporates:
     *  Constant: '<S78>/Calib'
     *  DataTypeConversion: '<S77>/Data Type Conversion'
     *  Inport: '<Root>/VeHSER_r_TSXRGr1'
     *  Inport: '<Root>/VeHSER_r_TSXRGr2'
     *  Inport: '<Root>/VeHSER_r_TSXRGr3'
     *  Inport: '<Root>/VeHSER_r_TSXRGr4'
     *  Selector: '<S77>/Selector'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngSt'
     */
    switch (HaTRNR_i_TSXRGearRatioSel[(rtb_TmpSignalConversionAtVeHSER_e_RngS_p)])
    {
      case 1:
        (void)Rte_Read_VeHSER_r_TSXRGr2_Value(&tmpRead_7);
        (void)Rte_Read_VeHSER_r_TSXRGr1_Value(&tmpRead_6);

        /* Outputs for IfAction SubSystem: '<S77>/RngSt_M1_G2' incorporates:
         *  ActionPort: '<S81>/Action Port'
         */
        /* Merge: '<S77>/Merge2' incorporates:
         *  Inport: '<Root>/VeHSER_r_TSXRGr1'
         *  Inport: '<Root>/VeHSER_r_TSXRGr2'
         *  Product: '<S81>/Product'
         */
        rtb_Merge2 = tmpRead_6 * tmpRead_7;

        /* End of Outputs for SubSystem: '<S77>/RngSt_M1_G2' */
        break;

      case 2:
        (void)Rte_Read_VeHSER_r_TSXRGr4_Value(&tmpRead_7);
        (void)Rte_Read_VeHSER_r_TSXRGr3_Value(&tmpRead_6);

        /* Outputs for IfAction SubSystem: '<S77>/RngSt_M3_G4' incorporates:
         *  ActionPort: '<S82>/Action Port'
         */
        /* Merge: '<S77>/Merge2' incorporates:
         *  Inport: '<Root>/VeHSER_r_TSXRGr3'
         *  Inport: '<Root>/VeHSER_r_TSXRGr4'
         *  Product: '<S82>/Product'
         */
        rtb_Merge2 = tmpRead_6 * tmpRead_7;

        /* End of Outputs for SubSystem: '<S77>/RngSt_M3_G4' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S77>/RngSt_Else' incorporates:
         *  ActionPort: '<S80>/Action Port'
         */
        /* Merge: '<S77>/Merge2' incorporates:
         *  Constant: '<S80>/Constant Value'
         *  SignalConversion generated from: '<S80>/GearRatio'
         */
        rtb_Merge2 = 100.0F;

        /* End of Outputs for SubSystem: '<S77>/RngSt_Else' */
        break;
    }

    /* End of SwitchCase: '<S77>/SwitchCase' */

    /* Sum: '<S77>/Sum' */
    tmp = 0U;
    for (i = 0; i < 13; i++)
    {
        /* RelationalOperator: '<S77>/Comparison6' incorporates:
         *  Abs: '<S77>/Abs'
         *  Constant: '<S77>/Constant Value1'
         *  Constant: '<S79>/Calib'
         *  Sum: '<S77>/Sum1'
         */
        rtb_Comparison3_g = (fabsf(((float32)
                               (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios
                                ())[i]) - rtb_Merge2) <= 0.01F);

        /* Sum: '<S77>/Sum' */
        tmp += rtb_Comparison3_g ? 1U : 0U;

        /* RelationalOperator: '<S77>/Comparison6' */
        rtb_Comparison6_n[i] = rtb_Comparison3_g;
    }

    /* If: '<S77>/If' incorporates:
     *  Constant: '<S77>/Constant Value'
     *  RelationalOperator: '<S77>/Comparison3'
     *  Sum: '<S77>/Sum'
     */
    if (((sint16)tmp) == 1)
    {
        /* Outputs for IfAction SubSystem: '<S77>/TRNC_CalcActGear' incorporates:
         *  ActionPort: '<S83>/Action Port'
         */
        /* Product: '<S83>/Product' incorporates:
         *  Constant: '<S85>/Calib'
         */
        rtb_Sum1_b = 0;
        for (i = 0; i < 13; i++)
        {
            rtb_Sum1_b = (sint16)(((sint32)rtb_Sum1_b) + (rtb_Comparison6_n[i] ?
                                   ((sint32)KaTRNR_i_TCMGearStat[(i)]) : 0));
        }

        /* Merge: '<S77>/Merge' incorporates:
         *  DataTypeConversion: '<S83>/Data Type Conversion'
         *  Product: '<S83>/Product'
         */
        VeTRNR_e_HSERActualGear = (TeTRNR_e_TCMGearStat)rtb_Sum1_b;

        /* Merge: '<S77>/Merge1' incorporates:
         *  Constant: '<S83>/FALSE Constant'
         *  SignalConversion generated from: '<S83>/Error'
         */
        VeTRNR_b_HSERActualGearError = false;

        /* End of Outputs for SubSystem: '<S77>/TRNC_CalcActGear' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S77>/TRNC_CalcError' incorporates:
         *  ActionPort: '<S84>/Action Port'
         */
        /* Merge: '<S77>/Merge' incorporates:
         *  Constant: '<S86>/Constant'
         *  SignalConversion generated from: '<S84>/HSERActualGear'
         */
        VeTRNR_e_HSERActualGear = CeTRNR_e_Neutral;

        /* Merge: '<S77>/Merge1' incorporates:
         *  Constant: '<S84>/TRUE Constant'
         *  SignalConversion generated from: '<S84>/Error'
         */
        VeTRNR_b_HSERActualGearError = true;

        /* End of Outputs for SubSystem: '<S77>/TRNC_CalcError' */
    }

    /* End of If: '<S77>/If' */
    /* End of Outputs for SubSystem: '<S21>/TRNC_HSERActGear' */
    /* End of Outputs for SubSystem: '<S9>/TRNC_HSERActGear' */
#endif

    /* SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb' */
#if Rte_SysCon_Variant_TRNR_HSERActGear && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  Merge: '<S77>/Merge'
     */
    rtb_VeTRNR_e_HSERActualGear = VeTRNR_e_HSERActualGear;

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' */
    rtb_VeTRNR_b_HSERActualGearError = VeTRNR_b_HSERActualGearError;

#elif !Rte_SysCon_Variant_TRNR_HSERActGear && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_VeTRNR_e_HSERActualGear = CeTRNR_e_Neutral;

    /* VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_VeTRNR_b_HSERActualGearError = false;

#endif

    /* End of SignalConversion generated from: '<S9>/TRNR_ShftTypeFAArb' */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* Outputs for Atomic SubSystem: '<S9>/TRNR_ShftTypeFAArb' */
    /* Outputs for Atomic SubSystem: '<S24>/TRNR_ShftTypeFAArb' */
    /* RelationalOperator: '<S326>/Comparison9' incorporates:
     *  Constant: '<S335>/Constant'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ShftType'
     */
    rtb_Comparison9_b = (((uint32)rtb_TmpSignalConversionAtVeTINR_e_Shft_f) ==
                         CeTRNR_e_SteadyState);

    /* Logic: '<S326>/Logical4' */
    rtb_Logical4_lh = !rtb_Comparison9_b;

    /* Outputs for Atomic SubSystem: '<S326>/Signal Latch On' */
    /* Logic: '<S348>/OR2' incorporates:
     *  UnitDelay: '<S348>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_ds = (rtb_Logical4_lh ||
        (TRNR_ac_DW.UnitDelay_DSTATE_ds));

    /* End of Outputs for SubSystem: '<S326>/Signal Latch On' */

    /* RelationalOperator: '<S326>/Comparison3' incorporates:
     *  Constant: '<S331>/Constant'
     *  SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt'
     */
    rtb_Comparison3_g = (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                         CeTRGR_e_TransRangeDrive);

    /* RelationalOperator: '<S326>/Comparison' incorporates:
     *  Constant: '<S333>/Constant'
     *  Constant: '<S334>/Constant'
     *  Logic: '<S326>/Logical5'
     *  RelationalOperator: '<S326>/Comparison7'
     *  RelationalOperator: '<S326>/Comparison8'
     */
    rtb_Comparison_h = ((((uint32)rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                         CeTRNR_e_PrllEngOn) || (((uint32)
                          rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                         CeTRNR_e_PrllEngOff));

    /* Logic: '<S326>/Logical2' incorporates:
     *  Logic: '<S326>/Logical11'
     */
    tmpRead_0 = !rtb_TmpSignalConversionAtVeTINR_b_Actual;

    /* Logic: '<S326>/Logical' incorporates:
     *  Constant: '<S329>/Constant'
     *  DataTypeConversion: '<S13>/DataTypeConversion'
     *  DataTypeConversion: '<S15>/DataTypeConversion'
     *  DataTypeConversion: '<S16>/DataTypeConversion'
     *  Logic: '<S326>/Logical1'
     *  Logic: '<S326>/Logical2'
     *  RelationalOperator: '<S326>/Comparison1'
     *  RelationalOperator: '<S326>/Comparison2'
     *  RelationalOperator: '<S326>/Comparison5'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
     *  SignalConversion generated from: '<S2>/VeTINR_e_TargetGear'
     */
    rtb_Logical_a = ((((((((rtb_Comparison9_b && (TRNR_ac_DW.UnitDelay_DSTATE_ds))
                           && (((uint32)rtb_DataTypeConversion_o4) ==
                            CeTRNR_e_SteadyState)) &&
                          (rtb_TmpSignalConversionAtVeTINR_e_Target !=
                           rtb_DataTypeConversion_i3)) &&
                         (rtb_TmpSignalConversionAtVeTINR_e_Actual !=
                          rtb_DataTypeConversion_co)) &&
                        (!rtb_TmpSignalConversionAtVeTINR_b_Target)) &&
                       tmpRead_0) && rtb_Comparison3_g) && rtb_Comparison_h);

    /* Outputs for Atomic SubSystem: '<S326>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S352>/EdgeRising' */
    /* Logic: '<S373>/AND' incorporates:
     *  Logic: '<S373>/OR1'
     *  UnitDelay: '<S373>/Unit Delay'
     */
    rtb_AND_fi = (rtb_Logical_a && (!TRNR_ac_DW.UnitDelay_DSTATE_hz));

    /* Update for UnitDelay: '<S373>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_hz = rtb_Logical_a;

    /* End of Outputs for SubSystem: '<S352>/EdgeRising' */

    /* Switch: '<S352>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S345>/Calib'
     *  Constant: '<S352>/Constant Value1'
     *  Logic: '<S352>/OR'
     *  Logic: '<S352>/OR1'
     *  MinMax: '<S352>/Minimum'
     *  Sum: '<S352>/Summation'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    if ((!rtb_Logical_a) || rtb_AND_fi)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_le = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_le = fminf(KeTRNR_t_ShftTypeFAArbDelay,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_le);
    }

    /* End of Switch: '<S352>/Switch1' */
    /* End of Outputs for SubSystem: '<S326>/Turn On Delay Time' */

    /* Outputs for Atomic SubSystem: '<S326>/Signal Latch On With Reset2' */
    /* Outputs for Atomic SubSystem: '<S326>/Signal Latch On With Reset1' */
    /* Outputs for Atomic SubSystem: '<S326>/Signal Latch On With Reset' */
    /* Logic: '<S349>/NOT' incorporates:
     *  Logic: '<S350>/NOT'
     *  Logic: '<S351>/NOT'
     */
    rtb_Logical4_lh = !rtb_Logical4_lh;

    /* End of Outputs for SubSystem: '<S326>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S326>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S326>/Turn On Delay Time' */
    /* Logic: '<S349>/OR1' incorporates:
     *  Constant: '<S345>/Calib'
     *  Logic: '<S349>/NOT'
     *  Logic: '<S349>/OR'
     *  Logic: '<S352>/AND'
     *  RelationalOperator: '<S352>/Greater  Than'
     *  UnitDelay: '<S349>/Unit Delay'
     *  UnitDelay: '<S352>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_ab = ((rtb_Logical_a &&
        (TRNR_ac_DW.UnitDelay_DSTATE_le >= KeTRNR_t_ShftTypeFAArbDelay)) ||
        (rtb_Logical4_lh && (TRNR_ac_DW.UnitDelay_DSTATE_ab)));

    /* End of Outputs for SubSystem: '<S326>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S326>/Signal Latch On With Reset' */

    /* Switch: '<S327>/Switch1' */
    if (TRNR_ac_DW.UnitDelay_DSTATE_ab)
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  S-Function (sfix_bitop): '<S358>/FixPt Bitwise Operator1'
         *  Switch: '<S327>/Switch'
         */
        VeTRNR_y_ShftTypeFA = (uint16)((sint32)
            ((rtb_TmpSignalConversionAtVeTINR_b_ShftTy ? 1 : 0) | ((uint8)2)));
    }
    else
    {
        /* Switch: '<S327>/Switch1' incorporates:
         *  Switch: '<S327>/Switch'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(rtb_TmpSignalConversionAtVeTINR_b_ShftTy ?
            ((uint16)1) : ((uint16)0));
    }

    /* End of Switch: '<S327>/Switch1' */

    /* Switch: '<S327>/Switch2' */
    if (rtb_TmpSignalConversionAtVeTINR_b_TCMAct)
    {
        /* Switch: '<S327>/Switch2' incorporates:
         *  S-Function (sfix_bitop): '<S365>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)4));
    }

    /* End of Switch: '<S327>/Switch2' */
    /* End of Outputs for SubSystem: '<S24>/TRNR_ShftTypeFAArb' */

    /* Inport: '<Root>/VeTINR_b_ClchTrqFA' */
    (void)Rte_Read_VeTINR_b_ClchTrqFA_Value(&rtb_Logical3_l);

    /* Outputs for Atomic SubSystem: '<S24>/TRNR_ShftTypeFAArb' */
    /* Switch: '<S327>/Switch3' */
    if (rtb_Logical3_l)
    {
        /* Switch: '<S327>/Switch3' incorporates:
         *  S-Function (sfix_bitop): '<S366>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)8));
    }

    /* End of Switch: '<S327>/Switch3' */

    /* Logic: '<S326>/Logical3' incorporates:
     *  Constant: '<S343>/Calib'
     *  DataTypeConversion: '<S326>/Data Type Conversion3'
     *  Selector: '<S326>/Selector'
     */
    rtb_Logical3_l = (rtb_Comparison9_b && (KaTRNR_b_ShftTypeFARngSt
                       [(rtb_TmpSignalConversionAtVeHSER_e_RngS_p)]));

    /* Outputs for Atomic SubSystem: '<S326>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S353>/EdgeRising' */
    /* Logic: '<S374>/AND' incorporates:
     *  Logic: '<S374>/OR1'
     *  UnitDelay: '<S374>/Unit Delay'
     */
    rtb_Logical_a = (rtb_Logical3_l && (!TRNR_ac_DW.UnitDelay_DSTATE_no));

    /* Update for UnitDelay: '<S374>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_no = rtb_Logical3_l;

    /* End of Outputs for SubSystem: '<S353>/EdgeRising' */

    /* Switch: '<S353>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S346>/Calib'
     *  Constant: '<S353>/Constant Value1'
     *  Logic: '<S353>/OR'
     *  Logic: '<S353>/OR1'
     *  MinMax: '<S353>/Minimum'
     *  Sum: '<S353>/Summation'
     *  UnitDelay: '<S353>/Unit Delay'
     */
    if ((!rtb_Logical3_l) || rtb_Logical_a)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_k = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_k = fminf(KeTRNR_t_ShftTypeFARngStDelay,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_k);
    }

    /* End of Switch: '<S353>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S326>/Signal Latch On With Reset1' */
    /* Logic: '<S350>/OR1' incorporates:
     *  Constant: '<S346>/Calib'
     *  Logic: '<S350>/OR'
     *  Logic: '<S353>/AND'
     *  RelationalOperator: '<S353>/Greater  Than'
     *  UnitDelay: '<S350>/Unit Delay'
     *  UnitDelay: '<S353>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_mr = ((rtb_Logical3_l &&
        (TRNR_ac_DW.UnitDelay_DSTATE_k >= KeTRNR_t_ShftTypeFARngStDelay)) ||
        (rtb_Logical4_lh && (TRNR_ac_DW.UnitDelay_DSTATE_mr)));

    /* End of Outputs for SubSystem: '<S326>/Signal Latch On With Reset1' */
    /* End of Outputs for SubSystem: '<S326>/Turn On Delay Time1' */

    /* Switch: '<S327>/Switch4' */
    if (TRNR_ac_DW.UnitDelay_DSTATE_mr)
    {
        /* Switch: '<S327>/Switch4' incorporates:
         *  S-Function (sfix_bitop): '<S367>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)16));
    }

    /* End of Switch: '<S327>/Switch4' */

    /* Logic: '<S326>/Logical6' incorporates:
     *  Constant: '<S328>/Constant'
     *  Constant: '<S332>/Constant'
     *  RelationalOperator: '<S326>/Comparison4'
     *  RelationalOperator: '<S326>/Comparison6'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     *  VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_Logical3_l = ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngE_h) ==
                       CeHSER_e_UseM2Eqn) && (((uint32)
                        rtb_VM_Conditional_Signal_TRNR_ShftTypeF) ==
                       CeHCCR_e_ClReleased));

    /* Outputs for Atomic SubSystem: '<S326>/Turn On Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S354>/EdgeRising' */
    /* Logic: '<S375>/AND' incorporates:
     *  Logic: '<S375>/OR1'
     *  UnitDelay: '<S375>/Unit Delay'
     */
    rtb_Logical_a = (rtb_Logical3_l && (!TRNR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S375>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_n = rtb_Logical3_l;

    /* End of Outputs for SubSystem: '<S354>/EdgeRising' */

    /* Switch: '<S354>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S341>/Calib'
     *  Constant: '<S354>/Constant Value1'
     *  Logic: '<S354>/OR'
     *  Logic: '<S354>/OR1'
     *  MinMax: '<S354>/Minimum'
     *  Sum: '<S354>/Summation'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if ((!rtb_Logical3_l) || rtb_Logical_a)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_g = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_g = fminf(HeTRNR_t_ShftTypeFASync2Delay,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_g);
    }

    /* End of Switch: '<S354>/Switch1' */

    /* Switch: '<S327>/Switch12' incorporates:
     *  Constant: '<S341>/Calib'
     *  Logic: '<S354>/AND'
     *  RelationalOperator: '<S354>/Greater  Than'
     *  UnitDelay: '<S354>/Unit Delay'
     */
    if (rtb_Logical3_l && (TRNR_ac_DW.UnitDelay_DSTATE_g >=
                           HeTRNR_t_ShftTypeFASync2Delay))
    {
        /* Switch: '<S327>/Switch12' incorporates:
         *  S-Function (sfix_bitop): '<S361>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)32));
    }

    /* End of Switch: '<S327>/Switch12' */
    /* End of Outputs for SubSystem: '<S326>/Turn On Delay Time2' */

    /* Logic: '<S326>/Logical7' incorporates:
     *  Constant: '<S336>/Constant'
     *  Constant: '<S338>/Constant'
     *  RelationalOperator: '<S326>/Comparison11'
     *  RelationalOperator: '<S326>/Comparison12'
     *  RelationalOperator: '<S326>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     *  VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_Logical3_l = ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngE_h) ==
                       CeHSER_e_UseM1Eqn) && (((uint32)
                        rtb_VM_Conditional_Signal_TRNR_ShftTyp_j) ==
                       CeHCCR_e_ClReleased));

    /* Outputs for Atomic SubSystem: '<S326>/Turn On Delay Time3' */
    /* Outputs for Atomic SubSystem: '<S355>/EdgeRising' */
    /* Logic: '<S376>/AND' incorporates:
     *  Logic: '<S376>/OR1'
     *  UnitDelay: '<S376>/Unit Delay'
     */
    rtb_Logical_a = (rtb_Logical3_l && (!TRNR_ac_DW.UnitDelay_DSTATE_dh));

    /* Update for UnitDelay: '<S376>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_dh = rtb_Logical3_l;

    /* End of Outputs for SubSystem: '<S355>/EdgeRising' */

    /* Switch: '<S355>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S340>/Calib'
     *  Constant: '<S355>/Constant Value1'
     *  Logic: '<S355>/OR'
     *  Logic: '<S355>/OR1'
     *  MinMax: '<S355>/Minimum'
     *  Sum: '<S355>/Summation'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    if ((!rtb_Logical3_l) || rtb_Logical_a)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_aj = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_aj = fminf(HeTRNR_t_ShftTypeFAC1Delay,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_aj);
    }

    /* End of Switch: '<S355>/Switch1' */

    /* Switch: '<S327>/Switch5' incorporates:
     *  Constant: '<S340>/Calib'
     *  Logic: '<S355>/AND'
     *  RelationalOperator: '<S355>/Greater  Than'
     *  UnitDelay: '<S355>/Unit Delay'
     */
    if (rtb_Logical3_l && (TRNR_ac_DW.UnitDelay_DSTATE_aj >=
                           HeTRNR_t_ShftTypeFAC1Delay))
    {
        /* Switch: '<S327>/Switch5' incorporates:
         *  S-Function (sfix_bitop): '<S368>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)64));
    }

    /* End of Switch: '<S327>/Switch5' */
    /* End of Outputs for SubSystem: '<S326>/Turn On Delay Time3' */
    /* End of Outputs for SubSystem: '<S24>/TRNR_ShftTypeFAArb' */

    /* Inport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_ePT' */
    (void)Rte_Read_VeSRAR_e_LoCHCP_TCMECM_ePT_Value(&tmpRead_9);

    /* Outputs for Atomic SubSystem: '<S24>/TRNR_ShftTypeFAArb' */
    /* Switch: '<S327>/Switch6' incorporates:
     *  Constant: '<S330>/Constant'
     *  Inport: '<Root>/VeSRAR_e_LoCHCP_TCMECM_ePT'
     *  RelationalOperator: '<S326>/Comparison10'
     */
    if (((uint32)tmpRead_9) != CeSRAR_e_NoFaultHCPTCMECM_ePT)
    {
        /* Switch: '<S327>/Switch6' incorporates:
         *  S-Function (sfix_bitop): '<S369>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)128));
    }

    /* End of Switch: '<S327>/Switch6' */

    /* Logic: '<S326>/Logical9' incorporates:
     *  Constant: '<S337>/Constant'
     *  Logic: '<S326>/Logical10'
     *  Logic: '<S326>/Logical12'
     *  Logic: '<S326>/Logical13'
     *  RelationalOperator: '<S326>/Comparison13'
     *  RelationalOperator: '<S326>/Comparison14'
     *  RelationalOperator: '<S326>/Comparison2'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
     *  VariantMerge generated from: '<S9>/TRNR_ShftTypeFAArb'
     */
    rtb_Comparison9_b = (((((((((((uint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngS_p) <= CeHSER_e_G4) &&
        rtb_Comparison9_b) && (rtb_TmpSignalConversionAtVeTINR_e_Actual !=
        rtb_VeTRNR_e_HSERActualGear)) && rtb_Comparison3_g) && rtb_Comparison_h)
                            && (!rtb_TmpSignalConversionAtVeTINR_b_ShftTy)) &&
                           tmpRead_0) &&
                          (!rtb_TmpSignalConversionAtVeTINR_b_TCMAct)) &&
                         (!rtb_VeTRNR_b_HSERActualGearError));

    /* Outputs for Atomic SubSystem: '<S326>/Turn On Delay Time4' */
    /* Outputs for Atomic SubSystem: '<S356>/EdgeRising' */
    /* Logic: '<S377>/AND' incorporates:
     *  Logic: '<S377>/OR1'
     *  UnitDelay: '<S377>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeTINR_b_ShftTy = (rtb_Comparison9_b &&
        (!TRNR_ac_DW.UnitDelay_DSTATE_bp));

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_bp = rtb_Comparison9_b;

    /* End of Outputs for SubSystem: '<S356>/EdgeRising' */

    /* Switch: '<S356>/Switch1' incorporates:
     *  Constant: '<S339>/Calib'
     *  Constant: '<S347>/Calib'
     *  Constant: '<S356>/Constant Value1'
     *  Logic: '<S356>/OR'
     *  Logic: '<S356>/OR1'
     *  MinMax: '<S356>/Minimum'
     *  Sum: '<S356>/Summation'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    if ((!rtb_Comparison9_b) || rtb_TmpSignalConversionAtVeTINR_b_ShftTy)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_m = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_m = fminf(KeTRNR_t_ShftTypeFA_GRDelay,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_m);
    }

    /* End of Switch: '<S356>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S326>/Signal Latch On With Reset2' */
    /* Logic: '<S351>/OR1' incorporates:
     *  Constant: '<S347>/Calib'
     *  Logic: '<S351>/OR'
     *  Logic: '<S356>/AND'
     *  RelationalOperator: '<S356>/Greater  Than'
     *  UnitDelay: '<S351>/Unit Delay'
     *  UnitDelay: '<S356>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_hp = ((rtb_Comparison9_b &&
        (TRNR_ac_DW.UnitDelay_DSTATE_m >= KeTRNR_t_ShftTypeFA_GRDelay)) ||
        (rtb_Logical4_lh && (TRNR_ac_DW.UnitDelay_DSTATE_hp)));

    /* End of Outputs for SubSystem: '<S326>/Signal Latch On With Reset2' */
    /* End of Outputs for SubSystem: '<S326>/Turn On Delay Time4' */

    /* Switch: '<S327>/Switch7' */
    if (TRNR_ac_DW.UnitDelay_DSTATE_hp)
    {
        /* Switch: '<S327>/Switch15' incorporates:
         *  S-Function (sfix_bitop): '<S326>/Bitwise Logical Operator'
         *  S-Function (sfix_bitop): '<S370>/FixPt Bitwise Operator1'
         */
        VeTRNR_y_ShftTypeFA = (uint16)(VeTRNR_y_ShftTypeFA | ((uint16)256));
    }

    /* End of Switch: '<S327>/Switch7' */

    /* Logic: '<S326>/Logical8' incorporates:
     *  Constant: '<S342>/Calib'
     *  Constant: '<S344>/Calib'
     *  RelationalOperator: '<S326>/Comparison'
     *  S-Function (sfix_bitop): '<S326>/Bitwise Logical Operator'
     */
    rtb_Comparison9_b = ((KeTRNR_b_OvrdShftTypeFA) || ((((sint32)
                            VeTRNR_y_ShftTypeFA) & ((sint32)
                            HeTRNR_y_ShftTypeFAMask)) > 0));

    /* End of Outputs for SubSystem: '<S24>/TRNR_ShftTypeFAArb' */
    /* End of Outputs for SubSystem: '<S9>/TRNR_ShftTypeFAArb' */
#endif

    /* SignalConversion generated from: '<S9>/TRNC_ShftTypeArb' */
#if Rte_SysCon_Variant_TRNR_HSERActGear && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNC_ShftTypeArb' incorporates:
     *  Merge: '<S77>/Merge'
     */
    rtb_VeTRNR_e_HSERActualGear_p = VeTRNR_e_HSERActualGear;

    /* VariantMerge generated from: '<S9>/TRNC_ShftTypeArb' */
    rtb_VeTRNR_b_HSERActualGearError_k = VeTRNR_b_HSERActualGearError;

#elif !Rte_SysCon_Variant_TRNR_HSERActGear && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNC_ShftTypeArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_ShftTypeArb'
     */
    rtb_VeTRNR_e_HSERActualGear_p = CeTRNR_e_Neutral;

    /* VariantMerge generated from: '<S9>/TRNC_ShftTypeArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_ShftTypeArb'
     */
    rtb_VeTRNR_b_HSERActualGearError_k = false;

#endif

    /* End of SignalConversion generated from: '<S9>/TRNC_ShftTypeArb' */

    /* SignalConversion generated from: '<S9>/TRNC_ShftTypeArb' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNC_ShftTypeArb' incorporates:
     *  Merge: '<S35>/Merge'
     */
    rtb_VM_Conditional_Signal_TRNC_ShftTypeA = TRNR_ac_B.Merge_f;

#elif !Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNC_ShftTypeArb' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_ShftTypeArb'
     */
    rtb_VM_Conditional_Signal_TRNC_ShftTypeA = CeHCCR_e_ClInvalid;

#endif

    /* End of SignalConversion generated from: '<S9>/TRNC_ShftTypeArb' */

    /* Outputs for Atomic SubSystem: '<S9>/TRNC_ShftTypeArb' */
    /* DataTypeConversion: '<S9>/Data Type Conversion3' incorporates:
     *  DataTypeConversion: '<S17>/DataTypeConversion'
     *  DataTypeConversion: '<S9>/Data Type Conversion4'
     *  DataTypeConversion: '<S9>/Data Type Conversion5'
     *  Inport: '<Root>/VeTINR_b_Synchro1GearFA'
     *  Inport: '<Root>/VeTINR_b_Synchro2GearFA'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveEVGear'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveHybridGear'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveXNGear'
     *  Inport: '<Root>/VeTINR_e_TCM_PassiveHybridGear'
     *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPost'
     *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPre'
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveEVGear'
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveHybridGear'
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveXNGear'
     *  Inport: '<S100>/VeTINR_e_TCM_PassiveHybridGear'
     *  Switch: '<S108>/Switch4'
     *  UnitDelay: '<S9>/Unit Delay2'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    (void)Rte_Read_VeTMMR_r_CoeffGrRatClchOncPost_Value(&tmpRead_5);
    (void)Rte_Read_VeTMMR_r_CoeffGrRatClchOncPre_Value(&tmpRead_4);

    /* Outputs for Atomic SubSystem: '<S23>/TRNC_ShftTypeArb' */
    /* Product: '<S106>/Product' incorporates:
     *  Constant: '<S175>/Calib'
     *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPost'
     *  Inport: '<Root>/VeTMMR_r_CoeffGrRatClchOncPre'
     */
    VeTRNC_n_Vturb = ((((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) *
                       tmpRead_4) * tmpRead_5) *
        rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* Sum: '<S106>/Sum3' */
    rtb_Merge2 = VeTRNC_n_Vturb - rtb_TmpSignalConversionAtVeVSDR_n_NTurbO;

    /* Outputs for Atomic SubSystem: '<S106>/Hysteresis1' */
    /* Switch: '<S172>/Switch1' incorporates:
     *  Constant: '<S172>/Constant Value'
     *  Constant: '<S173>/Calib'
     *  Constant: '<S174>/Calib'
     *  RelationalOperator: '<S172>/Greater  Than'
     *  RelationalOperator: '<S172>/Greater  Than1'
     *  UnitDelay: '<S172>/Unit Delay'
     */
    if (rtb_Merge2 > KeTRNR_n_OneWayClchOncRSP)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_et = true;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_et = ((rtb_Merge2 >=
            KeTRNR_n_OneWayClchOncLSP) && (TRNR_ac_DW.UnitDelay_DSTATE_et));
    }

    /* End of Switch: '<S172>/Switch1' */
    /* End of Outputs for SubSystem: '<S106>/Hysteresis1' */

    /* Product: '<S109>/Product' incorporates:
     *  Constant: '<S109>/Constant Value'
     *  Constant: '<S195>/Calib'
     *  Constant: '<S198>/Calib'
     *  Selector: '<S109>/Selector'
     */
    VeTRNC_n_Vturb1Gr = (((float32)Rte_Prm_KeTSXR_r_FDRf_KeTSXR_r_FDRf()) *
                         ((float32)
                          (Rte_Prm_KaTSXR_r_TCMGearRatios_KaTSXR_r_TCMGearRatios
                           ())[1])) * rtb_TmpSignalConversionAtVeVSDR_n_PrimNo;

    /* Sum: '<S109>/Sum2' */
    rtb_TmpSignalConversionAtVeVSDR_n_PrimNo =
        rtb_TmpSignalConversionAtVeVSDR_n_NTurbO - VeTRNC_n_Vturb1Gr;

    /* Outputs for Atomic SubSystem: '<S109>/Hysteresis' */
    /* Switch: '<S194>/Switch1' incorporates:
     *  Constant: '<S197>/Calib'
     *  RelationalOperator: '<S194>/Greater  Than'
     */
    if (rtb_TmpSignalConversionAtVeVSDR_n_PrimNo >
            KeTRNR_n_NTurbVirtTurb1stGearRSP)
    {
        /* Switch: '<S194>/Switch1' incorporates:
         *  Constant: '<S194>/Constant Value'
         */
        VeTRNR_b_NturbGrtVturbGr1 = true;
    }
    else
    {
        /* Switch: '<S194>/Switch1' incorporates:
         *  Constant: '<S196>/Calib'
         *  RelationalOperator: '<S194>/Greater  Than1'
         *  UnitDelay: '<S194>/Unit Delay'
         */
        VeTRNR_b_NturbGrtVturbGr1 = ((rtb_TmpSignalConversionAtVeVSDR_n_PrimNo >=
            KeTRNR_n_NTurbVirtTurb1stGearLSP) && (VeTRNR_b_NturbGrtVturbGr1));
    }

    /* End of Switch: '<S194>/Switch1' */
    /* End of Outputs for SubSystem: '<S109>/Hysteresis' */

    /* Switch: '<S115>/Switch' */
    if (rtb_Comparison9_b)
    {
        /* Switch: '<S115>/Switch' incorporates:
         *  Constant: '<S304>/Calib'
         */
        VeTRNR_e_ShftTypeFACANArb = HeTRNR_e_SteadyState;
    }
    else
    {
        /* Switch: '<S115>/Switch' incorporates:
         *  SignalConversion generated from: '<S2>/VeTINR_e_ShftType'
         */
        VeTRNR_e_ShftTypeFACANArb = rtb_TmpSignalConversionAtVeTINR_e_Shft_f;
    }

    /* End of Switch: '<S115>/Switch' */

    /* Switch: '<S100>/Switch1' incorporates:
     *  Constant: '<S101>/Constant17'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S118>/Constant'
     *  RelationalOperator: '<S118>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 1) > 0)
    {
        /* Switch: '<S100>/Switch9' incorporates:
         *  Switch: '<S115>/Switch'
         */
        rtb_DataTypeConversion_o4 = VeTRNR_e_ShftTypeFACANArb;
    }
    else
    {
        /* Switch: '<S100>/Switch9' incorporates:
         *  SignalConversion generated from: '<S2>/VeTINR_e_ShftType'
         */
        rtb_DataTypeConversion_o4 = rtb_TmpSignalConversionAtVeTINR_e_Shft_f;
    }

    /* End of Switch: '<S100>/Switch1' */

    /* DataTypeConversion: '<S110>/Data Type Conversion' incorporates:
     *  Switch: '<S100>/Switch9'
     */
    rtb_DataTypeConversion = (sint16)rtb_DataTypeConversion_o4;

    /* Selector: '<S110>/Selector' incorporates:
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  DataTypeConversion: '<S110>/Data Type Conversion'
     *  Sum: '<S110>/Sum1'
     *  Switch: '<S100>/Switch9'
     */
    rtb_TmpSignalConversionAtVeTINR_b_ShftTy = KaTRNR_b_MultiShftAct[(sint16)
        (((sint32)rtb_DataTypeConversion_o4) - ((sint32)HeTRNR_i_ShftTypeOfst))];

    /* Logic: '<S110>/Logical5' incorporates:
     *  Constant: '<S215>/Calib'
     *  DataTypeConversion: '<S110>/Data Type Conversion'
     *  RelationalOperator: '<S110>/Comparison3'
     *  Selector: '<S110>/Selector'
     *  Switch: '<S100>/Switch9'
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    rtb_VeTRNR_b_HSERActualGearError = ((((sint32)rtb_DataTypeConversion_o4) !=
        ((sint32)TRNR_ac_DW.UnitDelay2_DSTATE_h)) &&
        rtb_TmpSignalConversionAtVeTINR_b_ShftTy);

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising' */
    /* Logic: '<S208>/OR1' incorporates:
     *  UnitDelay: '<S208>/Unit Delay'
     */
    rtb_Comparison3_g = !TRNR_ac_DW.UnitDelay_DSTATE_h1;

    /* Update for UnitDelay: '<S208>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_h1 = rtb_VeTRNR_b_HSERActualGearError;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S110>/Signal Latch On With Reset' */
    /* Logic: '<S110>/Logical2' incorporates:
     *  DataTypeConversion: '<S110>/Data Type Conversion'
     *  Logic: '<S110>/Logical'
     *  Logic: '<S110>/Logical1'
     *  Logic: '<S216>/NOT'
     *  RelationalOperator: '<S110>/Comparison1'
     *  RelationalOperator: '<S110>/Comparison2'
     *  RelationalOperator: '<S110>/Comparison4'
     *  RelationalOperator: '<S110>/Comparison5'
     *  Switch: '<S100>/Switch9'
     */
    rtb_TmpSignalConversionAtVeTINR_b_TCMAct = ((((sint32)
        rtb_DataTypeConversion_o4) != 0) && ((((((sint32)
        rtb_DataTypeConversion_o4) == 16) || (((sint32)rtb_DataTypeConversion_o4)
        == 17)) || (((sint32)rtb_DataTypeConversion_o4) == 19)) ||
        rtb_TmpSignalConversionAtVeTINR_b_ShftTy));

    /* End of Outputs for SubSystem: '<S110>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising' */
    /* Switch: '<S110>/Switch' incorporates:
     *  DataTypeConversion: '<S110>/Data Type Conversion'
     *  Logic: '<S110>/Logical2'
     *  Logic: '<S110>/Logical3'
     *  Logic: '<S110>/Logical6'
     *  Logic: '<S208>/AND'
     *  Switch: '<S100>/Switch9'
     *  UnitDelay: '<S110>/Unit Delay'
     *  UnitDelay: '<S110>/Unit Delay1'
     */
    if (((rtb_VeTRNR_b_HSERActualGearError && rtb_Comparison3_g) ||
            (!TRNR_ac_DW.UnitDelay1_DSTATE_a)) ||
            (!rtb_TmpSignalConversionAtVeTINR_b_TCMAct))
    {
        TRNR_ac_DW.UnitDelay_DSTATE_b = (sint16)rtb_DataTypeConversion_o4;
    }

    /* End of Switch: '<S110>/Switch' */
    /* End of Outputs for SubSystem: '<S110>/EdgeRising' */

    /* Switch: '<S100>/Switch2' incorporates:
     *  Constant: '<S101>/Constant25'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S119>/Constant'
     *  RelationalOperator: '<S119>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator1'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 2) > 0)
    {
        /* Switch: '<S100>/Switch9' incorporates:
         *  DataTypeConversion: '<S209>/DataTypeConversion'
         *  UnitDelay: '<S110>/Unit Delay'
         */
        rtb_DataTypeConversion_o4 = (TeTRNR_e_TCMShftType)
            TRNR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S100>/Switch2' */

    /* Switch: '<S104>/Switch1' incorporates:
     *  Constant: '<S134>/Constant'
     *  Constant: '<S135>/Constant'
     *  Constant: '<S136>/Constant'
     *  Logic: '<S104>/Logical1'
     *  Logic: '<S104>/Logical3'
     *  RelationalOperator: '<S104>/Comparison1'
     *  RelationalOperator: '<S104>/Comparison2'
     *  RelationalOperator: '<S104>/Comparison4'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     *  Switch: '<S100>/Switch9'
     */
    if (((((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_1stTo1stEngBrkGear) ||
         (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_1stEngBrkTo1stGear)) &&
        (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngE_h) !=
            CeHSER_e_UseNeutralEqn))
    {
        /* Switch: '<S104>/Switch1' incorporates:
         *  Constant: '<S137>/Constant'
         */
        VeTRNR_e_ShftTypeBlk = CeTRNR_e_SteadyState;
    }
    else
    {
        /* Switch: '<S104>/Switch1' */
        VeTRNR_e_ShftTypeBlk = rtb_DataTypeConversion_o4;
    }

    /* End of Switch: '<S104>/Switch1' */

    /* Switch: '<S100>/Switch3' incorporates:
     *  Constant: '<S101>/Constant26'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S126>/Constant'
     *  RelationalOperator: '<S126>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator2'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 4) > 0)
    {
        /* Switch: '<S100>/Switch9' incorporates:
         *  Switch: '<S104>/Switch1'
         */
        rtb_DataTypeConversion_o4 = VeTRNR_e_ShftTypeBlk;
    }

    /* End of Switch: '<S100>/Switch3' */

    /* Switch: '<S112>/Switch2' incorporates:
     *  Constant: '<S251>/Constant'
     *  Constant: '<S252>/Constant'
     *  Constant: '<S253>/Constant'
     *  Constant: '<S254>/Constant'
     *  Constant: '<S255>/Constant'
     *  Constant: '<S256>/Constant'
     *  Logic: '<S112>/Logical'
     *  Logic: '<S112>/Logical1'
     *  Logic: '<S112>/Logical2'
     *  Logic: '<S112>/Logical3'
     *  Logic: '<S112>/Logical4'
     *  Logic: '<S112>/Logical9'
     *  RelationalOperator: '<S112>/Comparison1'
     *  RelationalOperator: '<S112>/Comparison2'
     *  RelationalOperator: '<S112>/Comparison3'
     *  RelationalOperator: '<S112>/Comparison4'
     *  RelationalOperator: '<S112>/Comparison5'
     *  RelationalOperator: '<S112>/Comparison6'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ShftType'
     */
    if (((!rtb_VeTRNR_b_HSERActualGearError_k) && ((((((uint32)
              rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
             CeTRGR_e_TransRangePark) || (((uint32)
              rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
             CeTRGR_e_TransRangeNeutral)) && (((uint32)
             rtb_TmpSignalConversionAtVeTINR_e_Shft_f) == CeTRNR_e_SteadyState))
          || (((uint32)rtb_TmpSignalConversionAtVeTINR_e_Shft_f) ==
              CeTRNR_e_ReverseGearInhibited))) && ((((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) != CeHSER_e_Neut_State) &&
         (((uint32)rtb_TmpSignalConversionAtVeHSER_e_HTDR_S) !=
            CeHSER_e_Neut_State_2)))
    {
        /* Switch: '<S112>/Switch2' incorporates:
         *  Constant: '<S257>/Calib'
         *  DataTypeConversion: '<S112>/Data Type Conversion'
         *  Selector: '<S112>/Selector1'
         *  VariantMerge generated from: '<S9>/TRNC_ShftTypeArb'
         */
        VeTRNR_e_ShftTypePRNDL = KaTRNR_e_ActualGearShftNeut
            [(rtb_VeTRNR_e_HSERActualGear_p)];
    }
    else
    {
        /* Switch: '<S112>/Switch2' incorporates:
         *  Switch: '<S100>/Switch9'
         */
        VeTRNR_e_ShftTypePRNDL = rtb_DataTypeConversion_o4;
    }

    /* End of Switch: '<S112>/Switch2' */

    /* Switch: '<S100>/Switch4' incorporates:
     *  Constant: '<S101>/Constant27'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S127>/Constant'
     *  RelationalOperator: '<S127>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator3'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 8) > 0)
    {
        /* Switch: '<S100>/Switch4' incorporates:
         *  Switch: '<S112>/Switch2'
         */
        VeTRNR_e_ShftTypeEngStart = VeTRNR_e_ShftTypePRNDL;
    }
    else
    {
        /* Switch: '<S100>/Switch4' incorporates:
         *  Switch: '<S100>/Switch9'
         */
        VeTRNR_e_ShftTypeEngStart = rtb_DataTypeConversion_o4;
    }

    /* End of Switch: '<S100>/Switch4' */

    /* RelationalOperator: '<S109>/Comparison6' incorporates:
     *  RelationalOperator: '<S109>/Comparison8'
     *  Switch: '<S100>/Switch4'
     *  Switch: '<S100>/Switch5'
     */
    rtb_Logical2_hu_tmp = VeTRNR_e_ShftTypeEngStart;

    /* Logic: '<S266>/Logical2' incorporates:
     *  Constant: '<S192>/Constant'
     *  RelationalOperator: '<S109>/Comparison6'
     *  Switch: '<S100>/Switch4'
     */
    rtb_VeTRNR_b_HSERActualGearError_k = (((uint32)VeTRNR_e_ShftTypeEngStart) ==
        CeTRNR_e_HEVTo2ndGearDrive);

    /* Outputs for Atomic SubSystem: '<S109>/Signal Latch On With Reset1' */
    /* Logic: '<S199>/OR1' incorporates:
     *  Logic: '<S109>/Logical5'
     *  Logic: '<S109>/Logical8'
     *  Logic: '<S199>/OR'
     *  UnitDelay: '<S199>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_aa = (((VeTRNR_b_NturbGrtVturbGr1) &&
        rtb_VeTRNR_b_HSERActualGearError_k) ||
        (rtb_VeTRNR_b_HSERActualGearError_k && (TRNR_ac_DW.UnitDelay_DSTATE_aa)));

    /* End of Outputs for SubSystem: '<S109>/Signal Latch On With Reset1' */

    /* Logic: '<S266>/Logical2' incorporates:
     *  Constant: '<S193>/Constant'
     *  RelationalOperator: '<S109>/Comparison6'
     *  RelationalOperator: '<S109>/Comparison8'
     *  Switch: '<S100>/Switch4'
     */
    rtb_VeTRNR_b_HSERActualGearError_k = (((uint32)VeTRNR_e_ShftTypeEngStart) ==
        CeTRNR_e_HEVTo3rdGearDrive);

    /* Outputs for Atomic SubSystem: '<S109>/Signal Latch On With Reset2' */
    /* Logic: '<S200>/OR1' incorporates:
     *  Logic: '<S109>/Logical6'
     *  Logic: '<S109>/Logical7'
     *  Logic: '<S200>/OR'
     *  UnitDelay: '<S200>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_iq = (((VeTRNR_b_NturbGrtVturbGr1) &&
        rtb_VeTRNR_b_HSERActualGearError_k) ||
        (rtb_VeTRNR_b_HSERActualGearError_k && (TRNR_ac_DW.UnitDelay_DSTATE_iq)));

    /* End of Outputs for SubSystem: '<S109>/Signal Latch On With Reset2' */

    /* If: '<S109>/If' */
    if (TRNR_ac_DW.UnitDelay_DSTATE_aa)
    {
        /* Outputs for IfAction SubSystem: '<S109>/TRNC_HEVTo2nd' incorporates:
         *  ActionPort: '<S201>/Action Port'
         */
        /* Switch: '<S201>/Switch2' */
        if (VeTRNR_b_NturbGrtVturbGr1)
        {
            /* Merge: '<S109>/Merge' incorporates:
             *  Constant: '<S204>/Constant'
             */
            VeTRNR_e_ShftTypeEngStart = CeTRNR_e_HEVTo1stGearDrive_C1Oncoming;
        }
        else
        {
            /* Merge: '<S109>/Merge' incorporates:
             *  Constant: '<S205>/Constant'
             */
            VeTRNR_e_ShftTypeEngStart = CeTRNR_e_1stTo2ndGear;
        }

        /* End of Switch: '<S201>/Switch2' */
        /* End of Outputs for SubSystem: '<S109>/TRNC_HEVTo2nd' */
    }
    else
    {
        if (TRNR_ac_DW.UnitDelay_DSTATE_iq)
        {
            /* Outputs for IfAction SubSystem: '<S109>/TRNC_HevTo3rd' incorporates:
             *  ActionPort: '<S202>/Action Port'
             */
            /* Switch: '<S202>/Switch3' */
            if (VeTRNR_b_NturbGrtVturbGr1)
            {
                /* Merge: '<S109>/Merge' incorporates:
                 *  Constant: '<S207>/Constant'
                 */
                VeTRNR_e_ShftTypeEngStart =
                    CeTRNR_e_HEVTo1stGearDrive_C1Oncoming;
            }
            else
            {
                /* Merge: '<S109>/Merge' incorporates:
                 *  Constant: '<S206>/Constant'
                 */
                VeTRNR_e_ShftTypeEngStart = CeTRNR_e_1stTo3rdGear;
            }

            /* End of Switch: '<S202>/Switch3' */
            /* End of Outputs for SubSystem: '<S109>/TRNC_HevTo3rd' */
        }
    }

    /* End of If: '<S109>/If' */

    /* Switch: '<S100>/Switch5' incorporates:
     *  Constant: '<S101>/Constant28'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S131>/Constant'
     *  RelationalOperator: '<S131>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator4'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 16) > 0)
    {
        /* Switch: '<S100>/Switch5' incorporates:
         *  Merge: '<S109>/Merge'
         */
        rtb_DataTypeConversion_o4 = VeTRNR_e_ShftTypeEngStart;
    }
    else
    {
        /* Switch: '<S100>/Switch5' */
        rtb_DataTypeConversion_o4 = rtb_Logical2_hu_tmp;
    }

    /* Logic: '<S117>/Logical1' incorporates:
     *  Constant: '<S309>/Constant'
     *  Constant: '<S310>/Constant'
     *  Constant: '<S311>/Constant'
     *  Constant: '<S312>/Constant'
     *  Constant: '<S313>/Constant'
     *  Constant: '<S314>/Constant'
     *  Constant: '<S315>/Constant'
     *  Constant: '<S316>/Constant'
     *  Constant: '<S317>/Constant'
     *  Constant: '<S318>/Constant'
     *  Constant: '<S319>/Constant'
     *  Constant: '<S320>/Constant'
     *  Constant: '<S321>/Constant'
     *  Constant: '<S322>/Constant'
     *  RelationalOperator: '<S117>/Comparison1'
     *  RelationalOperator: '<S117>/Comparison10'
     *  RelationalOperator: '<S117>/Comparison11'
     *  RelationalOperator: '<S117>/Comparison12'
     *  RelationalOperator: '<S117>/Comparison13'
     *  RelationalOperator: '<S117>/Comparison14'
     *  RelationalOperator: '<S117>/Comparison2'
     *  RelationalOperator: '<S117>/Comparison3'
     *  RelationalOperator: '<S117>/Comparison4'
     *  RelationalOperator: '<S117>/Comparison5'
     *  RelationalOperator: '<S117>/Comparison6'
     *  RelationalOperator: '<S117>/Comparison7'
     *  RelationalOperator: '<S117>/Comparison8'
     *  RelationalOperator: '<S117>/Comparison9'
     */
    rtb_VeTRNR_b_HSERActualGearError_k = ((((((((((((((((uint32)
        rtb_DataTypeConversion_o4) == CeTRNR_e_1stGearDriveToNeutral) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_2ndGearDriveToNeutral))
        || (((uint32)rtb_DataTypeConversion_o4) ==
            CeTRNR_e_3rdGearDriveToNeutral)) || (((uint32)
        rtb_DataTypeConversion_o4) == CeTRNR_e_4thGearDriveToNeutral)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_5thGearDriveToNeutral))
        || (((uint32)rtb_DataTypeConversion_o4) ==
            CeTRNR_e_6thGearDriveToNeutral)) || (((uint32)
        rtb_DataTypeConversion_o4) == CeTRNR_e_Reverse1stGearToNeutral)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_1stGearDriveToHEV)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_2ndGearDriveToHEV)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_3rdGearDriveToHEV)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_4thGearDriveToHEV)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_5thGearDriveToHEV)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_6thGearDriveToHEV)) ||
        (((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_ReverseGearToHEV));

    /* Chart: '<S117>/Stateflow Chart' incorporates:
     *  Constant: '<S323>/Calib'
     *  Constant: '<S324>/Calib'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngSt'
     *  Switch: '<S100>/Switch5'
     */
    /* Gateway: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_TCMActMode/Stateflow
       Chart */
    /* During: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_TCMActMode/Stateflow
       Chart */
    if (((uint32)TRNR_ac_DW.is_active_c72_TRNR_ac) == 0U)
    {
        /* Entry: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_TCMActMode/Stateflow
           Chart */
        TRNR_ac_DW.is_active_c72_TRNR_ac = 1U;

        /* Entry Internal: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_TCMActMode/Stateflow
           Chart */
        /* Transition: '<S325>:11' */
        TRNR_ac_DW.is_c72_TRNR_ac = TRNR_ac_IN_ShftTypePassThrough;

        /* Entry 'ShftTypePassThrough': '<S325>:9' */
        VeTRNR_i_ShftTypeTCMActModeSt = 0;
        VeTRNR_t_ShftTypeTCMActModeTmr = 0.0F;
        VeTRNR_e_ShftTypeArb = rtb_DataTypeConversion_o4;
    }
    else
    {
        switch (TRNR_ac_DW.is_c72_TRNR_ac)
        {
          case TRNR_ac_IN_ShftTypeHold:
            VeTRNR_i_ShftTypeTCMActModeSt = 1;

            /* During 'ShftTypeHold': '<S325>:10' */
            /* Detection of TCMActMode reached Series or HEV/Neutral transition is complete
               Exit condition for PRNDL movement when HAS_Act_Mode stays at Parallel  */
            rtb_Logical2_hu_tmp = TRNR_ac_DW.VeTRNR_e_ShftTypeHold;
            if ((((((uint32)rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                    CeTRNR_e_SerEngOff) || (((uint32)
                    rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                    CeTRNR_e_SerEngOn)) && (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_RngS_p) <= CeHSER_e_G4)) ||
                ((((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_SteadyState) &&
                 (((uint32)rtb_Logical2_hu_tmp) ==
                    CeTRNR_e_Reverse1stGearToNeutral)))
            {
                /* Transition: '<S325>:21' */
                /* Transition: '<S325>:22' */
                TRNR_ac_DW.is_c72_TRNR_ac = TRNR_ac_IN_ShftTypePassThrough;

                /* Entry 'ShftTypePassThrough': '<S325>:9' */
                VeTRNR_i_ShftTypeTCMActModeSt = 0;
                VeTRNR_t_ShftTypeTCMActModeTmr = 0.0F;
                VeTRNR_e_ShftTypeArb = rtb_DataTypeConversion_o4;
            }
            else if ((!rtb_VeTRNR_b_HSERActualGearError_k) && (((uint32)
                       rtb_DataTypeConversion_o4) != CeTRNR_e_SteadyState))
            {
                /* Transition: '<S325>:38' */
                TRNR_ac_DW.is_c72_TRNR_ac = TRNR_ac_IN_TCMActModeCANDelay;

                /* Entry 'TCMActModeCANDelay': '<S325>:36' */
                VeTRNR_i_ShftTypeTCMActModeSt = 2;
                VeTRNR_t_ShftTypeTCMActModeTmr = VeTRNR_t_ShftTypeTCMActModeTmr
                    + HeTRNR_t_MedTEB_dT;
            }
            else
            {
                /*  Update of ShftTypeHold when different HEV/Neutral transition is executed */
                if (((HeTRNR_b_EnblShftTypeHoldUpdate) &&
                        rtb_VeTRNR_b_HSERActualGearError_k) &&
                        (rtb_DataTypeConversion_o4 != rtb_Logical2_hu_tmp))
                {
                    /* Transition: '<S325>:25' */
                    TRNR_ac_DW.is_c72_TRNR_ac = TRNR_ac_IN_ShftTypeHold;

                    /* Entry 'ShftTypeHold': '<S325>:10' */
                    VeTRNR_i_ShftTypeTCMActModeSt = 1;
                    TRNR_ac_DW.VeTRNR_e_ShftTypeHold = rtb_DataTypeConversion_o4;
                    VeTRNR_e_ShftTypeArb = TRNR_ac_DW.VeTRNR_e_ShftTypeHold;
                }
                else
                {
                    VeTRNR_e_ShftTypeArb = TRNR_ac_DW.VeTRNR_e_ShftTypeHold;
                }
            }
            break;

          case TRNR_ac_IN_ShftTypePassThrough:
            VeTRNR_i_ShftTypeTCMActModeSt = 0;

            /* During 'ShftTypePassThrough': '<S325>:9' */
            /*  Detection of Gear to HEV/Neutral with HAS_Act_Mode in Parallel */
            if (rtb_VeTRNR_b_HSERActualGearError_k && ((((uint32)
                    rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                    CeTRNR_e_PrllEngOff) || (((uint32)
                    rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                    CeTRNR_e_PrllEngOn)))
            {
                /* Transition: '<S325>:16' */
                /* Transition: '<S325>:17' */
                TRNR_ac_DW.is_c72_TRNR_ac = TRNR_ac_IN_ShftTypeHold;

                /* Entry 'ShftTypeHold': '<S325>:10' */
                VeTRNR_i_ShftTypeTCMActModeSt = 1;
                TRNR_ac_DW.VeTRNR_e_ShftTypeHold = rtb_DataTypeConversion_o4;
                VeTRNR_e_ShftTypeArb = TRNR_ac_DW.VeTRNR_e_ShftTypeHold;
            }
            else
            {
                VeTRNR_e_ShftTypeArb = rtb_DataTypeConversion_o4;
            }
            break;

          default:
            VeTRNR_i_ShftTypeTCMActModeSt = 2;

            /* During 'TCMActModeCANDelay': '<S325>:36' */
            /* TCMActMOde CAN delay timer exceed threshold
               Detection of TCMActMode reached Series or HEV/Neutral transition is complete
               Exit condition for PRNDL movement when HAS_Act_Mode stays at Parallel  */
            if (((((VeTRNR_t_ShftTypeTCMActModeTmr >=
                    KeTRNR_t_ShftTypeTCMActModeTm) &&
                    (!rtb_VeTRNR_b_HSERActualGearError_k)) && (((uint32)
                    rtb_DataTypeConversion_o4) != CeTRNR_e_SteadyState)) ||
                    (((((uint32)rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                       CeTRNR_e_SerEngOff) || (((uint32)
                     rtb_TmpSignalConversionAtVeTINR_e_TCMAct) ==
                    CeTRNR_e_SerEngOn)) && (((uint32)
                    rtb_TmpSignalConversionAtVeHSER_e_RngS_p) <= CeHSER_e_G4))) ||
                ((((uint32)rtb_DataTypeConversion_o4) == CeTRNR_e_SteadyState) &&
                 (((uint32)TRNR_ac_DW.VeTRNR_e_ShftTypeHold) ==
                    CeTRNR_e_Reverse1stGearToNeutral)))
            {
                /* Transition: '<S325>:37' */
                TRNR_ac_DW.is_c72_TRNR_ac = TRNR_ac_IN_ShftTypePassThrough;

                /* Entry 'ShftTypePassThrough': '<S325>:9' */
                VeTRNR_i_ShftTypeTCMActModeSt = 0;
                VeTRNR_t_ShftTypeTCMActModeTmr = 0.0F;
                VeTRNR_e_ShftTypeArb = rtb_DataTypeConversion_o4;
            }
            else
            {
                VeTRNR_t_ShftTypeTCMActModeTmr = VeTRNR_t_ShftTypeTCMActModeTmr
                    + HeTRNR_t_MedTEB_dT;
            }
            break;
        }
    }

    /* End of Chart: '<S117>/Stateflow Chart' */

    /* Switch: '<S100>/Switch6' incorporates:
     *  Constant: '<S101>/Constant29'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S130>/Constant'
     *  RelationalOperator: '<S130>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator5'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 32) > 0)
    {
        /* Switch: '<S100>/Switch6' */
        rtb_DataTypeConversion_o4 = VeTRNR_e_ShftTypeArb;
    }

    /* End of Switch: '<S100>/Switch6' */

    /* Switch: '<S100>/Switch11' incorporates:
     *  Constant: '<S101>/Constant23'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S123>/Constant'
     *  RelationalOperator: '<S123>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator14'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 16384) > 0)
    {
        /* If: '<S111>/If' incorporates:
         *  Logic: '<S111>/Logical1'
         *  Logic: '<S111>/Logical2'
         *  Logic: '<S111>/Logical3'
         *  Logic: '<S111>/Logical4'
         *  Logic: '<S111>/Logical5'
         *  RelationalOperator: '<S111>/Comparison2'
         *  RelationalOperator: '<S111>/Comparison3'
         *  RelationalOperator: '<S111>/Comparison4'
         *  RelationalOperator: '<S111>/Comparison5'
         *  RelationalOperator: '<S111>/Comparison6'
         *  RelationalOperator: '<S111>/Comparison7'
         *  RelationalOperator: '<S111>/Comparison8'
         *  SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Gear'
         *  Switch: '<S100>/Switch6'
         */
        if ((((((uint32)rtb_TmpSignalConversionAtVeTINR_e_Synchr) ==
                CeTRNR_e_Reverse) && (((uint32)
                rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                CeTRGR_e_TransRangeDrive)) || ((((((uint32)
                  rtb_TmpSignalConversionAtVeTINR_e_Synchr) == CeTRNR_e_D2) ||
                (((uint32)rtb_TmpSignalConversionAtVeTINR_e_Synchr) ==
                 CeTRNR_e_D4)) || (((uint32)
                                    rtb_TmpSignalConversionAtVeTINR_e_Synchr) ==
                CeTRNR_e_D6)) && (((uint32)
                                   rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
                                  CeTRGR_e_TransRangeReverse))) && (((uint32)
                rtb_DataTypeConversion_o4) == CeTRNR_e_SteadyState_DCT))
        {
            /* Outputs for IfAction SubSystem: '<S111>/TRNC_ShiftType_SyncRtoN' incorporates:
             *  ActionPort: '<S225>/Action Port'
             */
            /* Switch: '<S100>/Switch11' incorporates:
             *  DataTypeConversion: '<S250>/Data Type Conversion1'
             *  SignalConversion generated from: '<S225>/CeTRNR_e_SyncRtoN'
             */
            rtb_DataTypeConversion_o4 = 97U;

            /* End of Outputs for SubSystem: '<S111>/TRNC_ShiftType_SyncRtoN' */
        }

        /* End of If: '<S111>/If' */
    }

    /* End of Switch: '<S100>/Switch11' */

    /* DataTypeConversion: '<S114>/Data Type Conversion' incorporates:
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_h = (sint16)rtb_DataTypeConversion_o4;

    /* Sum: '<S114>/Sum1' incorporates:
     *  Constant: '<S300>/Calib'
     *  SignalConversion generated from: '<S114>/Sum1'
     *  UnitDelay: '<S110>/Unit Delay2'
     *  UnitDelay: '<S114>/Unit Delay'
     */
    rtb_Sum1_a[0] = (sint16)(TRNR_ac_DW.UnitDelay2_DSTATE_h -
        HeTRNR_i_ShftTypeOfst);
    rtb_Sum1_a[1] = (sint16)(TRNR_ac_DW.UnitDelay_DSTATE_mo -
        HeTRNR_i_ShftTypeOfst);

    /* Outputs for Atomic SubSystem: '<S114>/Limiter' */
    for (i = 0; i < 2; i++)
    {
        rtb_DataTypeConversion_gj = rtb_Sum1_a[i];

        /* Switch: '<S302>/Switch1' incorporates:
         *  Constant: '<S114>/Constant Value1'
         *  RelationalOperator: '<S302>/Relational Operator'
         */
        if (15 < rtb_DataTypeConversion_gj)
        {
            /* Switch: '<S302>/Switch1' */
            rtb_DataTypeConversion_gj = 15;
        }

        /* End of Switch: '<S302>/Switch1' */

        /* Selector: '<S114>/Selector' incorporates:
         *  Constant: '<S114>/Constant Value'
         *  RelationalOperator: '<S302>/Relational Operator1'
         *  Switch: '<S302>/Switch'
         */
        if (rtb_DataTypeConversion_gj > 0)
        {
            rtb_Sum1_b = rtb_DataTypeConversion_gj;
        }
        else
        {
            rtb_Sum1_b = 0;
        }

        /* Selector: '<S114>/Selector' incorporates:
         *  Constant: '<S299>/Calib'
         */
        rtb_Selector_cz[i] = HaTRNR_e_ShftTypeToRngEqnSel[(rtb_Sum1_b)];
        rtb_Sum1_a[i] = rtb_DataTypeConversion_gj;
    }

    /* End of Outputs for SubSystem: '<S114>/Limiter' */

    /* RelationalOperator: '<S114>/Comparison5' incorporates:
     *  DataTypeConversion: '<S294>/DataTypeConversion'
     *  RelationalOperator: '<S302>/Relational Operator'
     *  Switch: '<S302>/Switch1'
     */
    VeTRNR_e_CurrShftTypeEqn = rtb_Selector_cz[0];

    /* RelationalOperator: '<S114>/Comparison5' incorporates:
     *  Switch: '<S114>/Switch1'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    rtb_VeTRNR_b_HSERActualGearError_k = (VeTRNR_e_CurrShftTypeEqn !=
        TRNR_ac_DW.UnitDelay2_DSTATE_j);

    /* Outputs for Atomic SubSystem: '<S114>/Limiter1' */
    /* Switch: '<S303>/Switch1' incorporates:
     *  Constant: '<S297>/Constant'
     *  RelationalOperator: '<S104>/Comparison2'
     *  RelationalOperator: '<S303>/Relational Operator'
     *  SignalConversion generated from: '<S2>/VeHSER_e_RngEqnSel'
     *  Switch: '<S114>/Switch1'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    if (CeHSER_e_UseM2Eqn < ((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngE_h))
    {
        TRNR_ac_DW.UnitDelay2_DSTATE_j = CeHSER_e_UseM2Eqn;
    }
    else
    {
        TRNR_ac_DW.UnitDelay2_DSTATE_j =
            rtb_TmpSignalConversionAtVeHSER_e_RngE_h;
    }

    /* End of Switch: '<S303>/Switch1' */

    /* RelationalOperator: '<S303>/Relational Operator1' incorporates:
     *  Switch: '<S114>/Switch1'
     *  Switch: '<S303>/Switch'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtVeHSER_e_RngE_h = TRNR_ac_DW.UnitDelay2_DSTATE_j;

    /* Switch: '<S303>/Switch' incorporates:
     *  Constant: '<S296>/Constant'
     *  RelationalOperator: '<S303>/Relational Operator1'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngE_h) >
            CeHSER_e_UseNeutralEqn)
    {
    }
    else
    {
        /* Switch: '<S303>/Switch' */
        rtb_TmpSignalConversionAtVeHSER_e_RngE_h = CeHSER_e_UseNeutralEqn;
    }

    /* End of Outputs for SubSystem: '<S114>/Limiter1' */

    /* UnitDelay: '<S114>/Unit Delay1' incorporates:
     *  Switch: '<S114>/Switch1'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_j = TRNR_ac_DW.UnitDelay1_DSTATE_p;

    /* Logic: '<S114>/Logical1' incorporates:
     *  RelationalOperator: '<S114>/Comparison1'
     *  Switch: '<S114>/Switch1'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    VeTRNR_b_ShftTypeHoldReset = (rtb_VeTRNR_b_HSERActualGearError_k ||
        (rtb_TmpSignalConversionAtVeHSER_e_RngE_h !=
         TRNR_ac_DW.UnitDelay2_DSTATE_j));

    /* DataTypeConversion: '<S295>/DataTypeConversion' */
    VeTRNR_e_PrevShftTypeEqn = rtb_Selector_cz[1];

    /* Switch: '<S114>/Switch1' incorporates:
     *  Constant: '<S298>/Constant'
     *  DataTypeConversion: '<S295>/DataTypeConversion'
     *  Logic: '<S114>/Logical2'
     *  RelationalOperator: '<S114>/Comparison2'
     *  RelationalOperator: '<S114>/Comparison4'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    if ((VeTRNR_e_CurrShftTypeEqn == VeTRNR_e_PrevShftTypeEqn) || (((uint32)
            VeTRNR_e_PrevShftTypeEqn) == CeHSER_e_UseNeutralEqn_2))
    {
        TRNR_ac_DW.UnitDelay2_DSTATE_j =
            rtb_TmpSignalConversionAtVeHSER_e_RngE_h;
    }
    else
    {
        TRNR_ac_DW.UnitDelay2_DSTATE_j = VeTRNR_e_PrevShftTypeEqn;
    }

    /* End of Switch: '<S114>/Switch1' */

    /* Selector: '<S114>/Selector1' incorporates:
     *  Constant: '<S301>/Calib'
     *  DataTypeConversion: '<S114>/Data Type Conversion1'
     *  DataTypeConversion: '<S114>/Data Type Conversion2'
     *  Switch: '<S114>/Switch1'
     *  Switch: '<S303>/Switch'
     *  UnitDelay: '<S114>/Unit Delay2'
     */
    VeTRNR_Cnt_ShftTypeHoldDelay = KaTRNR_Cnt_ShftTypeHoldDelay[(3 * ((sint32)
        TRNR_ac_DW.UnitDelay2_DSTATE_j)) + ((sint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngE_h)];

    /* Outputs for Atomic SubSystem: '<S114>/Count Down  Reset Enabled' */
    /* Switch: '<S292>/Switch1' incorporates:
     *  Constant: '<S292>/Constant Value'
     *  RelationalOperator: '<S292>/Greater  Than'
     *  Switch: '<S292>/Switch2'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    if (VeTRNR_b_ShftTypeHoldReset)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_dd = VeTRNR_Cnt_ShftTypeHoldDelay;
    }
    else
    {
        if (((sint32)TRNR_ac_DW.UnitDelay_DSTATE_dd) > 0)
        {
            /* UnitDelay: '<S292>/Unit Delay' incorporates:
             *  Constant: '<S292>/Constant Value1'
             *  Sum: '<S292>/Subtraction'
             *  Switch: '<S292>/Switch2'
             */
            TRNR_ac_DW.UnitDelay_DSTATE_dd = (uint16)((sint32)(((sint32)
                TRNR_ac_DW.UnitDelay_DSTATE_dd) - 1));
        }
    }

    /* End of Switch: '<S292>/Switch1' */

    /* Switch: '<S114>/Switch' incorporates:
     *  Constant: '<S292>/Constant Value2'
     *  Logic: '<S114>/Logical'
     *  Logic: '<S114>/Logical3'
     *  RelationalOperator: '<S292>/Greater  Than1'
     *  UnitDelay: '<S110>/Unit Delay2'
     *  UnitDelay: '<S114>/Unit Delay'
     *  UnitDelay: '<S292>/Unit Delay'
     */
    if (rtb_Comparison9_b || (((sint32)TRNR_ac_DW.UnitDelay_DSTATE_dd) <= 0))
    {
        TRNR_ac_DW.UnitDelay_DSTATE_mo = TRNR_ac_DW.UnitDelay2_DSTATE_h;
    }

    /* End of Switch: '<S114>/Switch' */
    /* End of Outputs for SubSystem: '<S114>/Count Down  Reset Enabled' */

    /* Switch: '<S113>/Switch' incorporates:
     *  Constant: '<S263>/Calib'
     *  Inport: '<Root>/VeTMMR_e_TransShiftStat'
     */
    if (HeTRNR_b_ShftStBsdShftMngr)
    {
        (void)Rte_Read_VeTMMR_e_TransShiftStat_Value(&tmpRead_a);

        /* Switch: '<S113>/Switch1' incorporates:
         *  Constant: '<S261>/Constant'
         *  Inport: '<Root>/VeTMMR_e_TransShiftStat'
         *  RelationalOperator: '<S113>/Relational Operator'
         */
        if (((uint32)tmpRead_a) == CeTMMR_e_SteadyState)
        {
            /* Switch: '<S113>/Switch' incorporates:
             *  Constant: '<S260>/Constant'
             */
            rtb_TmpSignalConversionAtVeHSER_e_RngS_p = CeHSER_e_M1;
        }
        else
        {
            /* Switch: '<S113>/Switch' incorporates:
             *  Constant: '<S262>/Constant'
             */
            rtb_TmpSignalConversionAtVeHSER_e_RngS_p =
                CeHSER_e_M1ToM3_PwrOnC2CTorqPhs;
        }

        /* End of Switch: '<S113>/Switch1' */
    }

    /* End of Switch: '<S113>/Switch' */

    /* Logic: '<S266>/Logical2' incorporates:
     *  UnitDelay: '<S266>/Unit Delay'
     */
    rtb_VeTRNR_b_HSERActualGearError_k = !TRNR_ac_DW.UnitDelay_DSTATE_ho;

    /* Switch: '<S291>/Switch1' incorporates:
     *  Constant: '<S290>/Calib'
     *  DataTypeConversion: '<S266>/Data Type Conversion'
     *  UnitDelay: '<S110>/Unit Delay2'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if (rtb_VeTRNR_b_HSERActualGearError_k)
    {
        TRNR_ac_DW.UnitDelay2_DSTATE_h = (sint16)HeTRNR_e_SteadyState;
    }
    else
    {
        TRNR_ac_DW.UnitDelay2_DSTATE_h = TRNR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S291>/Switch1' */

    /* Chart: '<S264>/ShiftType_Manager' incorporates:
     *  Constant: '<S267>/Calib'
     *  Constant: '<S268>/Calib'
     *  Constant: '<S269>/Calib'
     *  Constant: '<S270>/Calib'
     *  Constant: '<S271>/Calib'
     *  DataTypeConversion: '<S258>/DataTypeConversion'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
     *  Switch: '<S100>/Switch11'
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    /* Gateway: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ShftTypeMngr/TRNC_ShftTypeMngr/ShiftType_Manager */
    /* During: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ShftTypeMngr/TRNC_ShftTypeMngr/ShiftType_Manager */
    if (((uint32)TRNR_ac_DW.is_active_c1_TRNR_ac) == 0U)
    {
        /* Entry: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ShftTypeMngr/TRNC_ShftTypeMngr/ShiftType_Manager */
        TRNR_ac_DW.is_active_c1_TRNR_ac = 1U;

        /* Entry Internal: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ShftTypeMngr/TRNC_ShftTypeMngr/ShiftType_Manager */
        /* Transition: '<S272>:6' */
        /*  Init */
        /* Transition: '<S272>:103' */
        /*  Set current ShftType to input and previous to Steady State */
        VeTRNR_e_PrevShftType = HeTRNR_e_SteadyState;
        TRNR_ac_DW.is_c1_TRNR_ac = TRNR_ac_IN_StableEqnState;
        TRNR_ac_DW.tp_StableEqnState = 1U;

        /* Entry 'StableEqnState': '<S272>:5' */
        /*  Set State
           Reset timer
           Set the current ShftType to SteadyState */
        VeTRNR_i_ShftTypeMngrSt = 0;
        VeTRNR_t_ShftTypeTmr = 0.0F;
        VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
    }
    else
    {
        guard1 = false;
        guard2 = false;
        guard3 = false;
        switch (TRNR_ac_DW.is_c1_TRNR_ac)
        {
          case TRNR_ac_IN_PressureControlActive:
            /* During 'PressureControlActive': '<S272>:10' */
            /* Transition: '<S272>:111' */
            /* ShftTypeFA */
            /* Transition: '<S272>:112' */
            /* Transition: '<S272>:114' */
            /* Transition: '<S272>:115' */
            /* Transition: '<S272>:116' */
            /* Transition: '<S272>:118' */
            /* Transition: '<S272>:120' */
            /* ShftTypeFA */
            if (rtb_Comparison9_b)
            {
                /* Transition: '<S272>:99' */
                /* SWCR#19199 */
                /* Transition: '<S272>:103' */
                /*  Set current ShftType to input and previous to Steady State */
                VeTRNR_e_PrevShftType = HeTRNR_e_SteadyState;
                guard1 = true;
            }
            else
            {
                /*  HSER reaches a SS RngSt & At least 1 HSER timestep elapsed & */
                if ((((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p) <=
                        CeHSER_e_G4) && (VeTRNR_t_ShftTypeTmr >= 0.02F))
                {
                    /* Transition: '<S272>:20' */
                    guard1 = true;
                }
                else
                {
                    /*  Input ShftType is equal to Steady State */
                    if (rtb_DataTypeConversion_o4 == HeTRNR_e_SteadyState)
                    {
                        /* Transition: '<S272>:24' */
                        /* Transition: '<S272>:48' */
                        TRNR_ac_DW.tp_PressureControlActive = 0U;
                        TRNR_ac_DW.is_c1_TRNR_ac =
                            TRNR_ac_IN_PressureControlAtSSbeforeEqn;
                        TRNR_ac_DW.tp_PressureControlAtSSbeforeEqn = 1U;

                        /* Entry Internal 'PressureControlAtSSbeforeEqn': '<S272>:11' */
                        /* Transition: '<S272>:66' */
                        /*  Entry
                           action */
                        /*  Actual/TargetGear indicate incomplete ShiftType - ShiftTypeAbort selected */
                        i = ((sint32)VeTRNR_e_PrevShftType) - ((sint32)
                            HeTRNR_i_ShftTypeOfst);
                        rtb_DataTypeConversion_i3 =
                            HaTRNR_e_ShftTypeActualGearAbort[(i)];
                        if (((rtb_DataTypeConversion_i3 ==
                                rtb_TmpSignalConversionAtVeTINR_e_Actual) &&
                                (rtb_DataTypeConversion_i3 ==
                                 rtb_TmpSignalConversionAtVeTINR_e_Target)) &&
                                (HaTRNR_e_ShftTypeTargetGearAbort[(i)] !=
                                 rtb_TmpSignalConversionAtVeTINR_e_Target))
                        {
                            /* Transition: '<S272>:70' */
                            /* Transition: '<S272>:71' */
                            /*  Set the current ShftType to the Abort state of Previous_ST
                               Set State */
                            VeTRNR_e_CurrShftType = HaTRNR_e_ShiftTypeAbortSt[(i)];
                            VeTRNR_i_ShftTypeMngrSt = 4;

                            /* Transition: '<S272>:72' */
                        }
                        else
                        {
                            /* Transition: '<S272>:73' */
                            /*  Set the current ShftType to Steady State
                               Set State */
                            VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
                            VeTRNR_i_ShftTypeMngrSt = 2;
                        }
                    }
                    else
                    {
                        /* Transition: '<S272>:25' */
                        /*  Input ShftType is not equal to Steady State
                           Input ShftType is not equal to the previous ShftType */
                        if ((rtb_DataTypeConversion_o4 != HeTRNR_e_SteadyState) &&
                            (rtb_DataTypeConversion_o4 != VeTRNR_e_PrevShftType))
                        {
                            /* Transition: '<S272>:40' */
                            TRNR_ac_DW.tp_PressureControlActive = 0U;
                            TRNR_ac_DW.is_c1_TRNR_ac =
                                TRNR__IN_PressureControlDirectTransition;
                            TRNR_ac_DW.tp_PressureControlDirectTransition = 1U;

                            /* Entry 'PressureControlDirectTransition': '<S272>:8' */
                            /*  Set State
                               Reset timer
                               Set the current ShftType to the input */
                            VeTRNR_i_ShftTypeMngrSt = 3;
                            VeTRNR_t_ShftTypeTmr = 0.0F;
                            VeTRNR_e_CurrShftType = rtb_DataTypeConversion_o4;
                        }
                        else
                        {
                            /*  increment timer */
                            VeTRNR_t_ShftTypeTmr = VeTRNR_t_ShftTypeTmr +
                                HeTRNR_t_MedTEB_dT;
                        }
                    }
                }
            }
            break;

          case TRNR_ac_IN_PressureControlAtSSbeforeEqn:
            /* During 'PressureControlAtSSbeforeEqn': '<S272>:11' */
            /* Transition: '<S272>:117' */
            /* ShftTypeFA */
            /* Transition: '<S272>:118' */
            /* Transition: '<S272>:120' */
            /* ShftTypeFA */
            if (rtb_Comparison9_b)
            {
                /* Transition: '<S272>:99' */
                /* SWCR#19199 */
                /* Transition: '<S272>:103' */
                /*  Set current ShftType to input and previous to Steady State */
                VeTRNR_e_PrevShftType = HeTRNR_e_SteadyState;
                guard2 = true;
            }
            else
            {
                /*  HSER reaches a steady range state */
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p) <=
                        CeHSER_e_G4)
                {
                    /* Transition: '<S272>:30' */
                    /*  Update the PrevShftType */
                    VeTRNR_e_PrevShftType = VeTRNR_e_CurrShftType;
                    guard2 = true;
                }
                else
                {
                    /*  Input ShftType is not equal to Steady State */
                    if (rtb_DataTypeConversion_o4 != HeTRNR_e_SteadyState)
                    {
                        /* Transition: '<S272>:26' */
                        TRNR_ac_DW.tp_PressureControlAtSSbeforeEqn = 0U;
                        TRNR_ac_DW.is_c1_TRNR_ac =
                            TRNR__IN_PressureControlDirectTransition;
                        TRNR_ac_DW.tp_PressureControlDirectTransition = 1U;

                        /* Entry 'PressureControlDirectTransition': '<S272>:8' */
                        /*  Set State
                           Reset timer
                           Set the current ShftType to the input */
                        VeTRNR_i_ShftTypeMngrSt = 3;
                        VeTRNR_t_ShftTypeTmr = 0.0F;
                        VeTRNR_e_CurrShftType = rtb_DataTypeConversion_o4;
                    }
                    else
                    {
                        /* Transition: '<S272>:66' */
                        /*  Entry
                           action */
                        /*  Actual/TargetGear indicate incomplete ShiftType - ShiftTypeAbort selected */
                        i = ((sint32)VeTRNR_e_PrevShftType) - ((sint32)
                            HeTRNR_i_ShftTypeOfst);
                        rtb_DataTypeConversion_i3 =
                            HaTRNR_e_ShftTypeActualGearAbort[(i)];
                        if (((rtb_DataTypeConversion_i3 ==
                                rtb_TmpSignalConversionAtVeTINR_e_Actual) &&
                                (rtb_DataTypeConversion_i3 ==
                                 rtb_TmpSignalConversionAtVeTINR_e_Target)) &&
                                (HaTRNR_e_ShftTypeTargetGearAbort[(i)] !=
                                 rtb_TmpSignalConversionAtVeTINR_e_Target))
                        {
                            /* Transition: '<S272>:70' */
                            /* Transition: '<S272>:71' */
                            /*  Set the current ShftType to the Abort state of Previous_ST
                               Set State */
                            VeTRNR_e_CurrShftType = HaTRNR_e_ShiftTypeAbortSt
                                [((sint32)VeTRNR_e_PrevShftType) - ((sint32)
                                HeTRNR_i_ShftTypeOfst)];
                            VeTRNR_i_ShftTypeMngrSt = 4;

                            /* Transition: '<S272>:72' */
                        }
                        else
                        {
                            /* Transition: '<S272>:73' */
                            /*  Set the current ShftType to Steady State
                               Set State */
                            VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
                            VeTRNR_i_ShftTypeMngrSt = 2;
                        }
                    }
                }
            }
            break;

          case TRNR__IN_PressureControlDirectTransition:
            /* During 'PressureControlDirectTransition': '<S272>:8' */
            /* Transition: '<S272>:113' */
            /* ShftTypeFA */
            /* Transition: '<S272>:114' */
            /* Transition: '<S272>:115' */
            /* Transition: '<S272>:116' */
            /* Transition: '<S272>:118' */
            /* Transition: '<S272>:120' */
            /* ShftTypeFA */
            if (rtb_Comparison9_b)
            {
                /* Transition: '<S272>:99' */
                /* SWCR#19199 */
                /* Transition: '<S272>:103' */
                /*  Set current ShftType to input and previous to Steady State */
                VeTRNR_e_PrevShftType = HeTRNR_e_SteadyState;
                guard3 = true;
            }
            else
            {
                /* Transition: '<S272>:31' */
                /*  HSER reaches a SS RngSt  */
                if (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngS_p) <=
                        CeHSER_e_G4)
                {
                    /* Transition: '<S272>:89' */
                    /*  Update the PrevShftType with the higher-level output
                       of TRNC_ShiftTypeManager (not output of this stateflow) */
                    VeTRNR_e_PrevShftType = (TeTRNR_e_TCMShftType)
                        TRNR_ac_DW.UnitDelay2_DSTATE_h;

                    /* Transition: '<S272>:50' */
                    guard3 = true;
                }
                else
                {
                    /*  Input ShftType is equal to Steady State */
                    if (rtb_DataTypeConversion_o4 == HeTRNR_e_SteadyState)
                    {
                        /* Transition: '<S272>:27' */
                        /*  Update the PrevShftType */
                        VeTRNR_e_PrevShftType = VeTRNR_e_CurrShftType;
                        TRNR_ac_DW.tp_PressureControlDirectTransition = 0U;
                        TRNR_ac_DW.is_c1_TRNR_ac =
                            TRNR_ac_IN_PressureControlAtSSbeforeEqn;
                        TRNR_ac_DW.tp_PressureControlAtSSbeforeEqn = 1U;

                        /* Entry Internal 'PressureControlAtSSbeforeEqn': '<S272>:11' */
                        /* Transition: '<S272>:66' */
                        /*  Entry
                           action */
                        /*  Actual/TargetGear indicate incomplete ShiftType - ShiftTypeAbort selected */
                        i = ((sint32)VeTRNR_e_PrevShftType) - ((sint32)
                            HeTRNR_i_ShftTypeOfst);
                        rtb_DataTypeConversion_i3 =
                            HaTRNR_e_ShftTypeActualGearAbort[(i)];
                        if (((rtb_DataTypeConversion_i3 ==
                                rtb_TmpSignalConversionAtVeTINR_e_Actual) &&
                                (rtb_DataTypeConversion_i3 ==
                                 rtb_TmpSignalConversionAtVeTINR_e_Target)) &&
                                (HaTRNR_e_ShftTypeTargetGearAbort[(i)] !=
                                 rtb_TmpSignalConversionAtVeTINR_e_Target))
                        {
                            /* Transition: '<S272>:70' */
                            /* Transition: '<S272>:71' */
                            /*  Set the current ShftType to the Abort state of Previous_ST
                               Set State */
                            VeTRNR_e_CurrShftType = HaTRNR_e_ShiftTypeAbortSt[(i)];
                            VeTRNR_i_ShftTypeMngrSt = 4;

                            /* Transition: '<S272>:72' */
                        }
                        else
                        {
                            /* Transition: '<S272>:73' */
                            /*  Set the current ShftType to Steady State
                               Set State */
                            VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
                            VeTRNR_i_ShftTypeMngrSt = 2;
                        }
                    }
                    else
                    {
                        /* Transition: '<S272>:29' */
                        /*  Input ShftType has changed */
                        if (rtb_DataTypeConversion_o4 != VeTRNR_e_CurrShftType)
                        {
                            /* Transition: '<S272>:92' */
                            /*  Update the PrevShftType */
                            VeTRNR_e_PrevShftType = VeTRNR_e_CurrShftType;

                            /* Transition: '<S272>:93' */
                            TRNR_ac_DW.is_c1_TRNR_ac =
                                TRNR__IN_PressureControlDirectTransition;
                            TRNR_ac_DW.tp_PressureControlDirectTransition = 1U;

                            /* Entry 'PressureControlDirectTransition': '<S272>:8' */
                            /*  Set State
                               Reset timer
                               Set the current ShftType to the input */
                            VeTRNR_i_ShftTypeMngrSt = 3;
                            VeTRNR_t_ShftTypeTmr = 0.0F;
                            VeTRNR_e_CurrShftType = rtb_DataTypeConversion_o4;
                        }
                        else
                        {
                            /*  increment timer */
                            VeTRNR_t_ShftTypeTmr = VeTRNR_t_ShftTypeTmr +
                                HeTRNR_t_MedTEB_dT;
                        }
                    }
                }
            }
            break;

          default:
            /* During 'StableEqnState': '<S272>:5' */
            /* Transition: '<S272>:119' */
            /* ShftTypeFA */
            /* Transition: '<S272>:120' */
            /* ShftTypeFA */
            if (rtb_Comparison9_b)
            {
                /* Transition: '<S272>:99' */
                /* SWCR#19199 */
                /* Transition: '<S272>:103' */
                /*  Set current ShftType to input and previous to Steady State */
                VeTRNR_e_PrevShftType = HeTRNR_e_SteadyState;
                TRNR_ac_DW.is_c1_TRNR_ac = TRNR_ac_IN_StableEqnState;
                TRNR_ac_DW.tp_StableEqnState = 1U;

                /* Entry 'StableEqnState': '<S272>:5' */
                /*  Set State
                   Reset timer
                   Set the current ShftType to SteadyState */
                VeTRNR_i_ShftTypeMngrSt = 0;
                VeTRNR_t_ShftTypeTmr = 0.0F;
                VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
            }
            else
            {
                /*  Input ShftType is not equal to Steady State
                   Input ShftType is not equal to the previous ShftType
                   At least 1 TRNR timestep has gone by since previous state
                   --- initialized */
                if (((rtb_DataTypeConversion_o4 != HeTRNR_e_SteadyState) &&
                        (rtb_DataTypeConversion_o4 != VeTRNR_e_PrevShftType)) &&
                    (VeTRNR_t_ShftTypeTmr >= 0.01F))
                {
                    /* Transition: '<S272>:18' */
                    TRNR_ac_DW.tp_StableEqnState = 0U;
                    TRNR_ac_DW.is_c1_TRNR_ac = TRNR_ac_IN_PressureControlActive;
                    TRNR_ac_DW.tp_PressureControlActive = 1U;

                    /* Entry 'PressureControlActive': '<S272>:10' */
                    /*  Set State
                       Reset timer
                       Set the current ShftType to the input */
                    VeTRNR_i_ShftTypeMngrSt = 1;
                    VeTRNR_t_ShftTypeTmr = 0.0F;
                    VeTRNR_e_CurrShftType = rtb_DataTypeConversion_o4;
                    VeTRNR_e_PrevShftType = rtb_DataTypeConversion_o4;
                }
                else
                {
                    /*  increment timer */
                    VeTRNR_t_ShftTypeTmr = VeTRNR_t_ShftTypeTmr +
                        HeTRNR_t_MedTEB_dT;
                }
            }
            break;
        }

        if (guard3)
        {
            TRNR_ac_DW.tp_PressureControlDirectTransition = 0U;
            TRNR_ac_DW.is_c1_TRNR_ac = TRNR_ac_IN_StableEqnState;
            TRNR_ac_DW.tp_StableEqnState = 1U;

            /* Entry 'StableEqnState': '<S272>:5' */
            /*  Set State
               Reset timer
               Set the current ShftType to SteadyState */
            VeTRNR_i_ShftTypeMngrSt = 0;
            VeTRNR_t_ShftTypeTmr = 0.0F;
            VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
        }

        if (guard2)
        {
            TRNR_ac_DW.tp_PressureControlAtSSbeforeEqn = 0U;
            TRNR_ac_DW.is_c1_TRNR_ac = TRNR_ac_IN_StableEqnState;
            TRNR_ac_DW.tp_StableEqnState = 1U;

            /* Entry 'StableEqnState': '<S272>:5' */
            /*  Set State
               Reset timer
               Set the current ShftType to SteadyState */
            VeTRNR_i_ShftTypeMngrSt = 0;
            VeTRNR_t_ShftTypeTmr = 0.0F;
            VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
        }

        if (guard1)
        {
            TRNR_ac_DW.tp_PressureControlActive = 0U;
            TRNR_ac_DW.is_c1_TRNR_ac = TRNR_ac_IN_StableEqnState;
            TRNR_ac_DW.tp_StableEqnState = 1U;

            /* Entry 'StableEqnState': '<S272>:5' */
            /*  Set State
               Reset timer
               Set the current ShftType to SteadyState */
            VeTRNR_i_ShftTypeMngrSt = 0;
            VeTRNR_t_ShftTypeTmr = 0.0F;
            VeTRNR_e_CurrShftType = HeTRNR_e_SteadyState;
        }
    }

    /* End of Chart: '<S264>/ShiftType_Manager' */

    /* DataTypeConversion: '<S265>/Data Type Conversion' incorporates:
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_h = (sint16)VeTRNR_e_CurrShftType;

    /* Sum: '<S265>/Sum1' incorporates:
     *  Constant: '<S278>/Calib'
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    rtb_Sum1_b = (sint16)(TRNR_ac_DW.UnitDelay2_DSTATE_h - HeTRNR_i_ShftTypeOfst);

    /* DataTypeConversion: '<S265>/Data Type Conversion1' incorporates:
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_h = (sint16)VeTRNR_e_PrevShftType;

    /* Selector: '<S265>/Selector' incorporates:
     *  Constant: '<S276>/Calib'
     *  Constant: '<S278>/Calib'
     *  Sum: '<S265>/Sum3'
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    VeTRNR_b_ShftTypeStdyStDtct = HaTRNR_b_ShftTypeStdyStDtct[(((sint16)
        (TRNR_ac_DW.UnitDelay2_DSTATE_h - HeTRNR_i_ShftTypeOfst)) * 89) +
        rtb_Sum1_b];

    /* Logic: '<S265>/Logical1' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S265>/Comparison1'
     */
    rtb_VeTRNR_b_HSERActualGearError = ((VeTRNR_e_CurrShftType ==
        HeTRNR_e_SteadyState) || (VeTRNR_b_ShftTypeStdyStDtct));

    /* RelationalOperator: '<S265>/Comparison4' incorporates:
     *  Constant: '<S277>/Calib'
     *  RelationalOperator: '<S265>/Comparison1'
     */
    rtb_Comparison3_g = (VeTRNR_e_CurrShftType != HeTRNR_e_SteadyState);

    /* Outputs for Atomic SubSystem: '<S265>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S287>/EdgeFalling1' */
    /* Logic: '<S289>/AND' incorporates:
     *  Logic: '<S289>/OR1'
     *  UnitDelay: '<S289>/Unit Delay'
     */
    rtb_Comparison_h = ((!rtb_Comparison3_g) && (TRNR_ac_DW.UnitDelay_DSTATE_kc));

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_kc = rtb_Comparison3_g;

    /* End of Outputs for SubSystem: '<S287>/EdgeFalling1' */

    /* Switch: '<S287>/Switch' incorporates:
     *  Constant: '<S281>/Calib'
     *  Sum: '<S287>/Summation'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    if (rtb_Comparison_h)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_db = KeTRNR_Cnt_ShiftTypeStdyStDly;
    }
    else
    {
        /* Sum: '<S287>/Summation' incorporates:
         *  Constant: '<S287>/Constant Value'
         *  UnitDelay: '<S287>/Unit Delay'
         */
        i = ((sint32)TRNR_ac_DW.UnitDelay_DSTATE_db) - 1;
        if ((((sint32)TRNR_ac_DW.UnitDelay_DSTATE_db) - 1) < 0)
        {
            i = 0;
        }

        TRNR_ac_DW.UnitDelay_DSTATE_db = (uint16)i;
    }

    /* End of Switch: '<S287>/Switch' */
    /* End of Outputs for SubSystem: '<S265>/Turn Off Delay Sample' */

    /* Switch: '<S113>/Switch2' incorporates:
     *  Constant: '<S259>/Constant'
     *  Constant: '<S263>/Calib'
     */
    if (HeTRNR_b_ShftStBsdShftMngr)
    {
        rtb_TmpSignalConversionAtVeOHSR_e_RngD_p = CeOHSR_e_RngSel_M1;
    }

    /* End of Switch: '<S113>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S265>/Turn Off Delay Sample' */
    /* Logic: '<S265>/Logical10' incorporates:
     *  Constant: '<S275>/Constant'
     *  Constant: '<S287>/Constant Value2'
     *  Logic: '<S287>/AND'
     *  RelationalOperator: '<S265>/Comparison2'
     *  RelationalOperator: '<S287>/Greater  Than'
     *  UnitDelay: '<S287>/Unit Delay'
     */
    VeTRNR_b_RngDsrdReq = ((CeOHSR_e_RngSel_N != ((uint32)
        rtb_TmpSignalConversionAtVeOHSR_e_RngD_p)) || (rtb_Comparison3_g ||
                            (((sint32)TRNR_ac_DW.UnitDelay_DSTATE_db) > 0)));

    /* End of Outputs for SubSystem: '<S265>/Turn Off Delay Sample' */

    /* UnitDelay: '<S216>/Unit Delay' incorporates:
     *  Constant: '<S265>/Constant Value'
     *  Constant: '<S274>/Constant'
     *  Logic: '<S265>/Logical8'
     *  RelationalOperator: '<S265>/Comparison'
     *  RelationalOperator: '<S265>/Comparison3'
     *  Switch: '<S113>/Switch'
     */
    rtb_Comparison3_g = (((VeTRNR_i_ShftTypeMngrSt != 0) && (((uint32)
                            rtb_TmpSignalConversionAtVeHSER_e_RngS_p) >
                           CeHSER_e_G4)) && (VeTRNR_b_RngDsrdReq));

    /* Logic: '<S265>/Logical12' incorporates:
     *  Logic: '<S265>/Logical2'
     *  Logic: '<S265>/Logical5'
     */
    VeTRNR_b_CurrShftTypeCond = ((!rtb_VeTRNR_b_HSERActualGearError) ||
        (!rtb_Comparison3_g));

    /* Logic: '<S265>/Logical' */
    TRNR_ac_B.Gain_j = (rtb_VeTRNR_b_HSERActualGearError && rtb_Comparison3_g);

    /* Outputs for Atomic SubSystem: '<S265>/EdgeRising' */
    /* Logic: '<S273>/OR1' incorporates:
     *  UnitDelay: '<S273>/Unit Delay'
     */
    rtb_VeTRNR_b_HSERActualGearError = !TRNR_ac_DW.UnitDelay_DSTATE_i1;

    /* Update for UnitDelay: '<S273>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_i1 = TRNR_ac_B.Gain_j;

    /* Outputs for Atomic SubSystem: '<S265>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S286>/Switch1' incorporates:
     *  Constant: '<S280>/Calib'
     *  Logic: '<S273>/AND'
     *  Switch: '<S286>/Switch2'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    if ((TRNR_ac_B.Gain_j) && rtb_VeTRNR_b_HSERActualGearError)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_d = HeTRNR_t_ShftTypeStdyStDly;
    }
    else
    {
        if (TRNR_ac_B.Gain_j)
        {
            /* UnitDelay: '<S286>/Unit Delay' incorporates:
             *  Constant: '<S279>/Calib'
             *  Constant: '<S286>/Constant Value4'
             *  MinMax: '<S286>/Maximum'
             *  Sum: '<S286>/Subtraction'
             *  Switch: '<S286>/Switch2'
             */
            TRNR_ac_DW.UnitDelay_DSTATE_d = fmaxf(TRNR_ac_DW.UnitDelay_DSTATE_d
                - HeTRNR_t_MedTEB_dT, 0.0F);
        }
    }

    /* End of Switch: '<S286>/Switch1' */
    /* End of Outputs for SubSystem: '<S265>/EdgeRising' */

    /* Logic: '<S265>/Logical7' incorporates:
     *  Constant: '<S286>/Constant Value2'
     *  RelationalOperator: '<S286>/Greater  Than1'
     *  UnitDelay: '<S286>/Unit Delay'
     */
    VeTRNR_b_PrevShftTypeCond = ((TRNR_ac_B.Gain_j) &&
        (TRNR_ac_DW.UnitDelay_DSTATE_d > 0.0F));

    /* End of Outputs for SubSystem: '<S265>/Timer Retrigger Reset Enabled' */

    /* If: '<S265>/If1' */
    if (VeTRNR_b_CurrShftTypeCond)
    {
        /* Outputs for IfAction SubSystem: '<S265>/TRNC_ShiftType_CST' incorporates:
         *  ActionPort: '<S283>/Action Port'
         */
        TRNR_ac_TRNC_ShiftType_CST(VeTRNR_e_CurrShftType, &TRNR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S265>/TRNC_ShiftType_CST' */
    }
    else if (VeTRNR_b_PrevShftTypeCond)
    {
        /* Outputs for IfAction SubSystem: '<S265>/TRNC_ShiftType_PST' incorporates:
         *  ActionPort: '<S284>/Action Port'
         */
        TRNR_ac_TRNC_ShiftType_CST(VeTRNR_e_PrevShftType, &TRNR_ac_B.Merge1);

        /* End of Outputs for SubSystem: '<S265>/TRNC_ShiftType_PST' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S265>/TRNC_ShiftType_SS' incorporates:
         *  ActionPort: '<S285>/Action Port'
         */
        /* Merge: '<S265>/Merge1' incorporates:
         *  Constant: '<S288>/Calib'
         *  SignalConversion generated from: '<S285>/ShftType'
         */
        TRNR_ac_B.Merge1 = HeTRNR_e_SteadyState;

        /* End of Outputs for SubSystem: '<S265>/TRNC_ShiftType_SS' */
    }

    /* End of If: '<S265>/If1' */

    /* Switch: '<S100>/Switch9' incorporates:
     *  Constant: '<S101>/Constant22'
     *  Constant: '<S101>/Constant30'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S124>/Constant'
     *  Constant: '<S129>/Constant'
     *  RelationalOperator: '<S124>/Compare'
     *  RelationalOperator: '<S129>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator13'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator6'
     *  Switch: '<S100>/Switch7'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 8192) > 0)
    {
        /* Switch: '<S100>/Switch9' incorporates:
         *  DataTypeConversion: '<S293>/DataTypeConversion'
         *  UnitDelay: '<S114>/Unit Delay'
         */
        rtb_DataTypeConversion_o4 = (TeTRNR_e_TCMShftType)
            TRNR_ac_DW.UnitDelay_DSTATE_mo;
    }
    else
    {
        if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 64) > 0)
        {
            /* Switch: '<S100>/Switch7' incorporates:
             *  Merge: '<S265>/Merge1'
             *  Switch: '<S100>/Switch9'
             */
            rtb_DataTypeConversion_o4 = TRNR_ac_B.Merge1;
        }
    }

    /* End of Switch: '<S100>/Switch9' */

    /* Switch: '<S106>/Switch' incorporates:
     *  Constant: '<S170>/Constant'
     *  Logic: '<S106>/Logical2'
     *  RelationalOperator: '<S106>/Comparison5'
     *  Switch: '<S100>/Switch9'
     *  UnitDelay: '<S172>/Unit Delay'
     */
    if ((TRNR_ac_DW.UnitDelay_DSTATE_et) &&
            (CeTRNR_e_HEVTo1stGearDrive_C1Oncoming == ((uint32)
            rtb_DataTypeConversion_o4)))
    {
        /* Switch: '<S106>/Switch' incorporates:
         *  Constant: '<S171>/Constant'
         */
        VeTRNC_e_ShftType = CeTRNR_e_HEVTo1stGearDrive_F1Oncoming;
    }
    else
    {
        /* Switch: '<S106>/Switch' */
        VeTRNC_e_ShftType = rtb_DataTypeConversion_o4;
    }

    /* End of Switch: '<S106>/Switch' */

    /* Switch: '<S100>/Switch8' incorporates:
     *  Constant: '<S101>/Constant31'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S128>/Constant'
     *  RelationalOperator: '<S128>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator7'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 128) > 0)
    {
        /* Switch: '<S100>/Switch8' incorporates:
         *  Switch: '<S106>/Switch'
         */
        rtb_DataTypeConversion_o4 = VeTRNC_e_ShftType;
    }

    /* End of Switch: '<S100>/Switch8' */

    /* Chart: '<S107>/ClutchStartST_TLFArbStateMachine' incorporates:
     *  Constant: '<S178>/Calib'
     *  Constant: '<S179>/Calib'
     *  Constant: '<S180>/Calib'
     *  Constant: '<S181>/Calib'
     *  Constant: '<S182>/Calib'
     *  Constant: '<S183>/Calib'
     *  Constant: '<S184>/Calib'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ShftTypeTLF'
     *  Switch: '<S100>/Switch8'
     */
    /* Gateway: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ClchStrtTLF/ClutchStartST_TLFArbStateMachine */
    /* During: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ClchStrtTLF/ClutchStartST_TLFArbStateMachine */
    if (((uint32)TRNR_ac_DW.is_active_c21_TRNR_ac) == 0U)
    {
        /* Entry: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ClchStrtTLF/ClutchStartST_TLFArbStateMachine */
        TRNR_ac_DW.is_active_c21_TRNR_ac = 1U;

        /* Entry Internal: TRNR_MedTEB2/TRNC_Cntrls_Input/TRNC_ShftTypeArb/TRNC_ShftTypeArb/TRNC_ClchStrtTLF/ClutchStartST_TLFArbStateMachine */
        /* Transition: '<S176>:16' */
        /*  Entry */
        TRNR_ac_DW.is_c21_TRNR_ac = TRNR_ac_IN_ClutchStartInactive;

        /* Entry 'ClutchStartInactive': '<S176>:3' */
        VeTRNR_i_ClchStrtSTTLFArbSt = 0;
        VeTRNR_e_ShftTypeTLFArb = rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
    }
    else
    {
        guard1 = false;
        switch (TRNR_ac_DW.is_c21_TRNR_ac)
        {
          case TRNR_ac_IN_ClutchStartAbort:
            VeTRNR_i_ClchStrtSTTLFArbSt = 5;

            /* During 'ClutchStartAbort': '<S176>:121' */
            if ((!HaTRNR_b_ClchStrtSTTLFArbStrt[((sint32)
                    rtb_DataTypeConversion_o4) - ((sint32)HeTRNR_i_ShftTypeOfst)])
                && (HaTRNR_b_ClchStrtSTTLFArbEnd
                    [(rtb_TmpSignalConversionAtVeTINR_e_ShftTy)]))
            {
                /* Transition: '<S176>:180' */
                /*  ShftTypeTLF_In and ShftType both show enums
                   valid to consider the abort has ended */
                TRNR_ac_DW.is_c21_TRNR_ac = TRNR_ac_IN_ClutchStartInactive;

                /* Entry 'ClutchStartInactive': '<S176>:3' */
                VeTRNR_i_ClchStrtSTTLFArbSt = 0;
                VeTRNR_e_ShftTypeTLFArb =
                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
            }
            else
            {
                VeTRNR_e_ShftTypeTLFArb =
                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;

                /*  Abort Scenario. Pass through ShftTypeTLF */
            }
            break;

          case TRNR_ac_IN_ClutchStartActive:
            /* During 'ClutchStartActive': '<S176>:115' */
            if (HaTRNR_b_ClchStrtSTTLFArbAbort
                    [(rtb_TmpSignalConversionAtVeTINR_e_ShftTy)])
            {
                /* Transition: '<S176>:122' */
                /*  ShftTypeTLF enum indicating an abort
                   (ShftTypeTLF switches to XtoHEV) */
                /* Exit Internal 'ClutchStartActive': '<S176>:115' */
                TRNR_ac_DW.is_ClutchStartActive = TRNR_ac_IN_NO_ACTIVE_CHILD;
                TRNR_ac_DW.is_c21_TRNR_ac = TRNR_ac_IN_ClutchStartAbort;

                /* Entry 'ClutchStartAbort': '<S176>:121' */
                VeTRNR_i_ClchStrtSTTLFArbSt = 5;
                VeTRNR_e_ShftTypeTLFArb =
                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
            }
            else
            {
                i = ((sint32)rtb_DataTypeConversion_o4) - ((sint32)
                    HeTRNR_i_ShftTypeOfst);
                if ((HaTRNR_b_ClchStrtSTTLFArbEnd
                        [(rtb_TmpSignalConversionAtVeTINR_e_ShftTy)]) &&
                        (!HaTRNR_b_ClchStrtSTTLFArbStrt[(i)]))
                {
                    /* Transition: '<S176>:45' */
                    /*  ShftTypeTLF_In shows a valid enum to
                       consider the clutch start complete and ShftType
                       does not show a clutch start enum */
                    /* Exit Internal 'ClutchStartActive': '<S176>:115' */
                    TRNR_ac_DW.is_ClutchStartActive = TRNR_ac_IN_NO_ACTIVE_CHILD;
                    TRNR_ac_DW.is_c21_TRNR_ac = TRNR_ac_IN_ClutchStartInactive;

                    /* Entry 'ClutchStartInactive': '<S176>:3' */
                    VeTRNR_i_ClchStrtSTTLFArbSt = 0;
                    VeTRNR_e_ShftTypeTLFArb =
                        rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
                }
                else
                {
                    switch (TRNR_ac_DW.is_ClutchStartActive)
                    {
                      case TRNR_ac_IN_EngineStartedArbAllowed:
                        VeTRNR_i_ClchStrtSTTLFArbSt = 2;

                        /* During 'EngineStartedArbAllowed': '<S176>:219' */
                        /* Transition: '<S176>:214' */
                        /* Transition: '<S176>:231' */
                        /*  New clutch
                           start enum */
                        /* Transition: '<S176>:209' */
                        if ((rtb_DataTypeConversion_o4 !=
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) &&
                                (HaTRNR_b_ClchStrtSTTLFArbStrt[(i)]))
                        {
                            /* Transition: '<S176>:229' */
                            /*  ShftType has changed to a different clutch start enumeration */
                            if (HaTRNR_b_ClchStrtSTTLFArbOddEngStrt[(i)])
                            {
                                /* Transition: '<S176>:222' */
                                /*  ShftType Enum indicating a clutch start with odd gear involved */
                                TRNR_ac_DW.is_ClutchStartActive =
                                    TRNR_ac_IN_EngineStartupArbAllowed;

                                /* Entry 'EngineStartupArbAllowed': '<S176>:207' */
                                VeTRNR_i_ClchStrtSTTLFArbSt = 1;
                                VeTRNR_e_ShftTypeTLFArb =
                                    HaTRNR_e_ClchStrtSTTLFArbConv[(i)];
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                    rtb_DataTypeConversion_o4;

                                /*  Override ShftTypeTLF with the calibrated enum
                                   and save ShftType for continued arbitration after
                                   clutch start enum has dropped */
                            }
                            else
                            {
                                /* Transition: '<S176>:224' */
                                /*  Odd shaft not involved */
                                /* Transition: '<S176>:225' */
                                TRNR_ac_DW.is_ClutchStartActive =
                                    TRNR_ac_IN_EngineStartupArbDenied;

                                /* Entry 'EngineStartupArbDenied': '<S176>:208' */
                                VeTRNR_i_ClchStrtSTTLFArbSt = 3;
                                VeTRNR_e_ShftTypeTLFArb =
                                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                    rtb_DataTypeConversion_o4;
                            }
                        }
                        else
                        {
                            /* Transition: '<S176>:232' */
                            /*  Odd Sync
                               Movement */
                            /* Transition: '<S176>:234' */
                            if ((rtb_DataTypeConversion_o4 !=
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) &&
                                    (HaTRNR_b_ClchStrtSTTLFArbOddSyncMvmt[(i)]))
                            {
                                /* Transition: '<S176>:233' */
                                /*  ShftType shows a Sync N to X enum indicating odd synchro movement */
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                    rtb_DataTypeConversion_o4;

                                /*  Save the ShftType enum to continue arbitration */
                                /* Transition: '<S176>:238' */
                                TRNR_ac_DW.is_ClutchStartActive =
                                    TRNR_ac_IN_EngineStartedArbAllowed;

                                /* Entry 'EngineStartedArbAllowed': '<S176>:219' */
                                VeTRNR_i_ClchStrtSTTLFArbSt = 2;
                                VeTRNR_e_ShftTypeTLFArb =
                                    HaTRNR_e_ClchStrtSTTLFArbConv[((sint32)
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) -
                                    ((sint32)HeTRNR_i_ShftTypeOfst)];

                                /*  Overwrite ShftTypeTLF with the enum mapped to the saved ShftType enum */
                            }
                        }
                        break;

                      case TRNR_ac_IN_EngineStartedArbDenied:
                        VeTRNR_i_ClchStrtSTTLFArbSt = 4;

                        /* During 'EngineStartedArbDenied': '<S176>:242' */
                        /* Transition: '<S176>:241' */
                        /*  Odd Sync
                           Movement */
                        /* Transition: '<S176>:234' */
                        if ((rtb_DataTypeConversion_o4 !=
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) &&
                                (HaTRNR_b_ClchStrtSTTLFArbOddSyncMvmt[(i)]))
                        {
                            /* Transition: '<S176>:233' */
                            /*  ShftType shows a Sync N to X enum indicating odd synchro movement */
                            TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                rtb_DataTypeConversion_o4;

                            /*  Save the ShftType enum to continue arbitration */
                            /* Transition: '<S176>:238' */
                            TRNR_ac_DW.is_ClutchStartActive =
                                TRNR_ac_IN_EngineStartedArbAllowed;

                            /* Entry 'EngineStartedArbAllowed': '<S176>:219' */
                            VeTRNR_i_ClchStrtSTTLFArbSt = 2;
                            VeTRNR_e_ShftTypeTLFArb =
                                HaTRNR_e_ClchStrtSTTLFArbConv[((sint32)
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) - ((sint32)
                                HeTRNR_i_ShftTypeOfst)];

                            /*  Overwrite ShftTypeTLF with the enum mapped to the saved ShftType enum */
                        }
                        else
                        {
                            VeTRNR_e_ShftTypeTLFArb =
                                rtb_TmpSignalConversionAtVeTINR_e_ShftTy;

                            /*  Pass through ShftTypeTLF. No arbitration is required */
                        }
                        break;

                      case TRNR_ac_IN_EngineStartupArbAllowed:
                        VeTRNR_i_ClchStrtSTTLFArbSt = 1;

                        /* During 'EngineStartupArbAllowed': '<S176>:207' */
                        /* Transition: '<S176>:213' */
                        /*  New clutch
                           start enum */
                        /* Transition: '<S176>:212' */
                        /* Transition: '<S176>:209' */
                        if ((rtb_DataTypeConversion_o4 !=
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) &&
                                (HaTRNR_b_ClchStrtSTTLFArbStrt[(i)]))
                        {
                            /* Transition: '<S176>:229' */
                            /*  ShftType has changed to a different clutch start enumeration */
                            if (HaTRNR_b_ClchStrtSTTLFArbOddEngStrt[(i)])
                            {
                                /* Transition: '<S176>:222' */
                                /*  ShftType Enum indicating a clutch start with odd gear involved */
                                TRNR_ac_DW.is_ClutchStartActive =
                                    TRNR_ac_IN_EngineStartupArbAllowed;

                                /* Entry 'EngineStartupArbAllowed': '<S176>:207' */
                                VeTRNR_i_ClchStrtSTTLFArbSt = 1;
                                VeTRNR_e_ShftTypeTLFArb =
                                    HaTRNR_e_ClchStrtSTTLFArbConv[(i)];
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                    rtb_DataTypeConversion_o4;

                                /*  Override ShftTypeTLF with the calibrated enum
                                   and save ShftType for continued arbitration after
                                   clutch start enum has dropped */
                            }
                            else
                            {
                                /* Transition: '<S176>:224' */
                                /*  Odd shaft not involved */
                                /* Transition: '<S176>:225' */
                                TRNR_ac_DW.is_ClutchStartActive =
                                    TRNR_ac_IN_EngineStartupArbDenied;

                                /* Entry 'EngineStartupArbDenied': '<S176>:208' */
                                VeTRNR_i_ClchStrtSTTLFArbSt = 3;
                                VeTRNR_e_ShftTypeTLFArb =
                                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
                                TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                    rtb_DataTypeConversion_o4;
                            }
                        }
                        else
                        {
                            if (!HaTRNR_b_ClchStrtSTTLFArbStrt[(i)])
                            {
                                /* Transition: '<S176>:210' */
                                /*  ShftType ~= a clutch start enum
                                   Engine start complete */
                                TRNR_ac_DW.is_ClutchStartActive =
                                    TRNR_ac_IN_EngineStartedArbAllowed;

                                /* Entry 'EngineStartedArbAllowed': '<S176>:219' */
                                VeTRNR_i_ClchStrtSTTLFArbSt = 2;
                                VeTRNR_e_ShftTypeTLFArb =
                                    HaTRNR_e_ClchStrtSTTLFArbConv[((sint32)
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) -
                                    ((sint32)HeTRNR_i_ShftTypeOfst)];

                                /*  Overwrite ShftTypeTLF with the enum mapped to the saved ShftType enum */
                            }
                        }
                        break;

                      default:
                        VeTRNR_i_ClchStrtSTTLFArbSt = 3;

                        /* During 'EngineStartupArbDenied': '<S176>:208' */
                        if (!HaTRNR_b_ClchStrtSTTLFArbStrt[(i)])
                        {
                            /* Transition: '<S176>:243' */
                            /*  ShftType ~= a clutch start enum
                               Engine start complete */
                            if (HaTRNR_b_ClchStrtSTTLFArbOddSyncMvmt[(i)])
                            {
                                /* Transition: '<S176>:255' */
                                /*  ShftType shows a Sync N to X enum indicating odd synchro movement */
                                /* Transition: '<S176>:256' */
                                /* Transition: '<S176>:234' */
                                if ((rtb_DataTypeConversion_o4 !=
                                        TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) &&
                                        (HaTRNR_b_ClchStrtSTTLFArbOddSyncMvmt[(i)]))
                                {
                                    /* Transition: '<S176>:233' */
                                    /*  ShftType shows a Sync N to X enum indicating odd synchro movement */
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                        rtb_DataTypeConversion_o4;

                                    /*  Save the ShftType enum to continue arbitration */
                                    /* Transition: '<S176>:238' */
                                    TRNR_ac_DW.is_ClutchStartActive =
                                        TRNR_ac_IN_EngineStartedArbAllowed;

                                    /* Entry 'EngineStartedArbAllowed': '<S176>:219' */
                                    VeTRNR_i_ClchStrtSTTLFArbSt = 2;
                                    VeTRNR_e_ShftTypeTLFArb =
                                        HaTRNR_e_ClchStrtSTTLFArbConv[((sint32)
                                        TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) -
                                        ((sint32)HeTRNR_i_ShftTypeOfst)];

                                    /*  Overwrite ShftTypeTLF with the enum mapped to the saved ShftType enum */
                                }
                                else
                                {
                                    guard1 = true;
                                }
                            }
                            else
                            {
                                guard1 = true;
                            }
                        }
                        else
                        {
                            /* Transition: '<S176>:216' */
                            /*  New clutch
                               start enum */
                            /* Transition: '<S176>:218' */
                            /* Transition: '<S176>:212' */
                            /* Transition: '<S176>:209' */
                            if ((rtb_DataTypeConversion_o4 !=
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld) &&
                                    (HaTRNR_b_ClchStrtSTTLFArbStrt[(i)]))
                            {
                                /* Transition: '<S176>:229' */
                                /*  ShftType has changed to a different clutch start enumeration */
                                if (HaTRNR_b_ClchStrtSTTLFArbOddEngStrt[(i)])
                                {
                                    /* Transition: '<S176>:222' */
                                    /*  ShftType Enum indicating a clutch start with odd gear involved */
                                    TRNR_ac_DW.is_ClutchStartActive =
                                        TRNR_ac_IN_EngineStartupArbAllowed;

                                    /* Entry 'EngineStartupArbAllowed': '<S176>:207' */
                                    VeTRNR_i_ClchStrtSTTLFArbSt = 1;
                                    VeTRNR_e_ShftTypeTLFArb =
                                        HaTRNR_e_ClchStrtSTTLFArbConv[(i)];
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                        rtb_DataTypeConversion_o4;

                                    /*  Override ShftTypeTLF with the calibrated enum
                                       and save ShftType for continued arbitration after
                                       clutch start enum has dropped */
                                }
                                else
                                {
                                    /* Transition: '<S176>:224' */
                                    /*  Odd shaft not involved */
                                    /* Transition: '<S176>:225' */
                                    TRNR_ac_DW.is_ClutchStartActive =
                                        TRNR_ac_IN_EngineStartupArbDenied;

                                    /* Entry 'EngineStartupArbDenied': '<S176>:208' */
                                    VeTRNR_i_ClchStrtSTTLFArbSt = 3;
                                    VeTRNR_e_ShftTypeTLFArb =
                                        rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
                                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                                        rtb_DataTypeConversion_o4;
                                }
                            }
                            else
                            {
                                VeTRNR_e_ShftTypeTLFArb =
                                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;

                                /*  Pass through ShftTypeTLF. No arbitration is required */
                            }
                        }
                        break;
                    }
                }
            }
            break;

          default:
            VeTRNR_i_ClchStrtSTTLFArbSt = 0;

            /* During 'ClutchStartInactive': '<S176>:3' */
            i = ((sint32)rtb_DataTypeConversion_o4) - ((sint32)
                HeTRNR_i_ShftTypeOfst);
            if ((HaTRNR_b_ClchStrtSTTLFArbStrt[(i)]) &&
                    (!HeTRNR_b_ShftTypePulsEna))
            {
                /* Transition: '<S176>:1' */
                /*  ShftType shows a clutch start enumeration indicating
                   --- the start of a clutch start procedure
                   This logic requires the pulsing of ShftType to be disabled
                   --- (performed in ShftType Manager) */
                TRNR_ac_DW.is_c21_TRNR_ac = TRNR_ac_IN_ClutchStartActive;

                /* Entry Internal 'ClutchStartActive': '<S176>:115' */
                /* Transition: '<S176>:220' */
                /*  Entry */
                if (HaTRNR_b_ClchStrtSTTLFArbOddEngStrt[(i)])
                {
                    /* Transition: '<S176>:222' */
                    /*  ShftType Enum indicating a clutch start with odd gear involved */
                    TRNR_ac_DW.is_ClutchStartActive =
                        TRNR_ac_IN_EngineStartupArbAllowed;

                    /* Entry 'EngineStartupArbAllowed': '<S176>:207' */
                    VeTRNR_i_ClchStrtSTTLFArbSt = 1;
                    VeTRNR_e_ShftTypeTLFArb = HaTRNR_e_ClchStrtSTTLFArbConv[(i)];
                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                        rtb_DataTypeConversion_o4;

                    /*  Override ShftTypeTLF with the calibrated enum
                       and save ShftType for continued arbitration after
                       clutch start enum has dropped */
                }
                else
                {
                    /* Transition: '<S176>:224' */
                    /*  Odd shaft not involved */
                    /* Transition: '<S176>:225' */
                    TRNR_ac_DW.is_ClutchStartActive =
                        TRNR_ac_IN_EngineStartupArbDenied;

                    /* Entry 'EngineStartupArbDenied': '<S176>:208' */
                    VeTRNR_i_ClchStrtSTTLFArbSt = 3;
                    VeTRNR_e_ShftTypeTLFArb =
                        rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
                    TRNR_ac_DW.LeTRNR_e_ShftTypeArbHld =
                        rtb_DataTypeConversion_o4;
                }
            }
            else
            {
                VeTRNR_e_ShftTypeTLFArb =
                    rtb_TmpSignalConversionAtVeTINR_e_ShftTy;

                /*  Pass through ShftTypeTLF when no clutch
                   start procedure is being executed */
            }
            break;
        }

        if (guard1)
        {
            /* Transition: '<S176>:257' */
            TRNR_ac_DW.is_ClutchStartActive = TRNR_ac_IN_EngineStartedArbDenied;

            /* Entry 'EngineStartedArbDenied': '<S176>:242' */
            VeTRNR_i_ClchStrtSTTLFArbSt = 4;
            VeTRNR_e_ShftTypeTLFArb = rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
        }
    }

    /* End of Chart: '<S107>/ClutchStartST_TLFArbStateMachine' */
    /* End of Outputs for SubSystem: '<S23>/TRNC_ShftTypeArb' */
    (void)Rte_Read_VeTINR_b_Synchro2GearFA_Value(&rtb_Comparison3_e);

    /* Outputs for Atomic SubSystem: '<S23>/TRNC_ShftTypeArb' */
    /* Switch: '<S100>/Switch10' incorporates:
     *  Constant: '<S101>/Constant21'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S125>/Constant'
     *  Inport: '<Root>/VeTINR_b_Synchro2GearFA'
     *  RelationalOperator: '<S125>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator12'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 4096) > 0)
    {
        /* Switch: '<S100>/Switch10' */
        TRNR_ac_B.DataTypeConversion_b = VeTRNR_e_ShftTypeTLFArb;
    }
    else
    {
        /* Switch: '<S100>/Switch10' incorporates:
         *  SignalConversion generated from: '<S2>/VeTINR_e_ShftTypeTLF'
         */
        TRNR_ac_B.DataTypeConversion_b =
            rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
    }

    /* End of Switch: '<S100>/Switch10' */

    /* DataTypeConversion: '<S143>/Data Type Conversion' incorporates:
     *  Switch: '<S100>/Switch8'
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_h = (sint16)rtb_DataTypeConversion_o4;

    /* Sum: '<S143>/Sum1' incorporates:
     *  Constant: '<S152>/Calib'
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    rtb_Sum1_b = (sint16)(TRNR_ac_DW.UnitDelay2_DSTATE_h - HeTRNR_i_ShftTypeOfst);

    /* Selector: '<S143>/Selector' incorporates:
     *  Constant: '<S150>/Calib'
     */
    rtb_Comparison5_o_tmp_tmp = HaTRNR_i_TCMActEvenGear[(rtb_Sum1_b)];

    /* RelationalOperator: '<S143>/Comparison5' incorporates:
     *  Constant: '<S150>/Calib'
     *  Selector: '<S143>/Selector'
     *  UnitDelay: '<S143>/Unit Delay5'
     */
    rtb_VeTRNR_b_HSERActualGearError = (rtb_Comparison5_o_tmp_tmp !=
        TRNR_ac_DW.UnitDelay5_DSTATE);

    /* UnitDelay: '<S143>/Unit Delay4' incorporates:
     *  UnitDelay: '<S143>/Unit Delay5'
     */
    TRNR_ac_DW.UnitDelay5_DSTATE = TRNR_ac_DW.UnitDelay4_DSTATE;

    /* Switch: '<S143>/Switch3' incorporates:
     *  Constant: '<S143>/Constant Value'
     *  Constant: '<S150>/Calib'
     *  Logic: '<S143>/Logical Operator2'
     *  RelationalOperator: '<S143>/Comparison1'
     *  Selector: '<S143>/Selector'
     *  UnitDelay: '<S143>/Unit Delay4'
     */
    if ((((sint32)rtb_Comparison5_o_tmp_tmp) != 13) &&
            rtb_VeTRNR_b_HSERActualGearError)
    {
        TRNR_ac_DW.UnitDelay4_DSTATE = HaTRNR_i_TCMActEvenGear[(rtb_Sum1_b)];
    }

    /* End of Switch: '<S143>/Switch3' */

    /* Switch: '<S143>/Switch4' incorporates:
     *  Constant: '<S148>/Constant'
     *  Constant: '<S151>/Calib'
     *  Logic: '<S143>/Logical Operator1'
     *  RelationalOperator: '<S143>/Comparison2'
     *  SignalConversion generated from: '<S2>/VeTINR_e_Synchro2Gear'
     */
    if ((HeTRNR_b_TarEvenGearFncSel) || (CeTRNR_e_Neutral == ((uint32)
            rtb_TmpSignalConversionAtVeTINR_e_Synchr)))
    {
        /* Switch: '<S143>/Switch4' incorporates:
         *  DataTypeConversion: '<S149>/DataTypeConversion'
         *  UnitDelay: '<S143>/Unit Delay4'
         */
        TRNR_ac_B.DataTypeConversion_i = (TeTRNR_e_TCMGearStat)
            TRNR_ac_DW.UnitDelay4_DSTATE;
    }
    else
    {
        /* Switch: '<S143>/Switch4' */
        TRNR_ac_B.DataTypeConversion_i =
            rtb_TmpSignalConversionAtVeTINR_e_Synchr;
    }

    /* End of Switch: '<S143>/Switch4' */

    /* If: '<S105>/If' incorporates:
     *  Constant: '<S105>/Constant Value'
     *  Constant: '<S105>/Constant Value1'
     *  Constant: '<S141>/Calib'
     *  Logic: '<S105>/Logical Operator4'
     *  RelationalOperator: '<S105>/Comparison1'
     *  RelationalOperator: '<S105>/Comparison2'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    rtPrevAction = TRNR_ac_DW.If_ActiveSubsystem;
    TRNR_ac_DW.If_ActiveSubsystem = (sint8)(((((sint32)
        HeTRNR_i_ActEvenGearFcnSel) != 1) && ((((sint32)
        HeTRNR_i_ActEvenGearFcnSel) != 2) || (!rtb_Comparison3_e))) ? 1 : 0);
    if (TRNR_ac_DW.If_ActiveSubsystem == 0)
    {
        if (0 != rtPrevAction)
        {
            /* SystemReset for IfAction SubSystem: '<S105>/UseShftType' incorporates:
             *  ActionPort: '<S144>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S144>/EdgeRising' */
            /* SystemReset for If: '<S105>/If' incorporates:
             *  UnitDelay: '<S156>/Unit Delay'
             *  UnitDelay: '<S157>/Unit Delay'
             */
            TRNR_ac_DW.UnitDelay_DSTATE_bja = false;

            /* End of SystemReset for SubSystem: '<S144>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S144>/EdgeRising1' */
            TRNR_ac_DW.UnitDelay_DSTATE_lr = false;

            /* End of SystemReset for SubSystem: '<S144>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S105>/UseShftType' */
        }

        /* Outputs for IfAction SubSystem: '<S105>/UseShftType' incorporates:
         *  ActionPort: '<S144>/Action Port'
         */
        /* RelationalOperator: '<S144>/Comparison3' incorporates:
         *  Constant: '<S154>/Constant'
         *  VariantMerge generated from: '<S9>/TRNC_ShftTypeArb'
         */
        rtb_Comparison3_e = (((uint32)rtb_VM_Conditional_Signal_TRNC_ShftTypeA) ==
                             CeHCCR_e_ClLocked);

        /* RelationalOperator: '<S144>/Comparison4' incorporates:
         *  Constant: '<S153>/Constant'
         *  RelationalOperator: '<S144>/Comparison3'
         *  VariantMerge generated from: '<S9>/TRNC_ShftTypeArb'
         */
        rtb_VeTRNR_b_HSERActualGearError = (((uint32)
            rtb_VM_Conditional_Signal_TRNC_ShftTypeA) == CeHCCR_e_ClReleased);

        /* Outputs for Atomic SubSystem: '<S144>/EdgeRising' */
        /* Logic: '<S156>/OR1' incorporates:
         *  UnitDelay: '<S156>/Unit Delay'
         */
        rtb_Comparison3_g = !TRNR_ac_DW.UnitDelay_DSTATE_bja;

        /* Update for UnitDelay: '<S156>/Unit Delay' */
        TRNR_ac_DW.UnitDelay_DSTATE_bja = rtb_VeTRNR_b_HSERActualGearError;

        /* End of Outputs for SubSystem: '<S144>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S144>/EdgeRising1' */
        /* Logic: '<S157>/AND' incorporates:
         *  Logic: '<S157>/OR1'
         *  UnitDelay: '<S157>/Unit Delay'
         */
        rtb_Comparison_h = (rtb_Comparison3_e &&
                            (!TRNR_ac_DW.UnitDelay_DSTATE_lr));

        /* Update for UnitDelay: '<S157>/Unit Delay' */
        TRNR_ac_DW.UnitDelay_DSTATE_lr = rtb_Comparison3_e;

        /* End of Outputs for SubSystem: '<S144>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S144>/EdgeRising' */
        /* Switch: '<S144>/Switch2' incorporates:
         *  Constant: '<S155>/Constant'
         *  Logic: '<S156>/AND'
         *  Merge: '<S105>/Merge'
         *  Switch: '<S144>/Switch1'
         *  UnitDelay: '<S105>/Unit Delay'
         */
        if (rtb_VeTRNR_b_HSERActualGearError && rtb_Comparison3_g)
        {
            TRNR_ac_DW.UnitDelay_DSTATE_hj = CeTRNR_e_Neutral;
        }
        else
        {
            if (rtb_Comparison_h)
            {
                /* Switch: '<S144>/Switch1' incorporates:
                 *  Merge: '<S105>/Merge'
                 *  Switch: '<S143>/Switch4'
                 *  UnitDelay: '<S105>/Unit Delay'
                 */
                TRNR_ac_DW.UnitDelay_DSTATE_hj = TRNR_ac_B.DataTypeConversion_i;
            }
        }

        /* End of Switch: '<S144>/Switch2' */
        /* End of Outputs for SubSystem: '<S144>/EdgeRising' */
        /* End of Outputs for SubSystem: '<S105>/UseShftType' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S105>/UseSynchro2GearCAN' incorporates:
         *  ActionPort: '<S147>/Action Port'
         */
        TRNR_ac_UseSynchro2GearCAN(rtb_TmpSignalConversionAtVeTINR_e_Synchr,
            &TRNR_ac_DW.UnitDelay_DSTATE_hj);

        /* End of Outputs for SubSystem: '<S105>/UseSynchro2GearCAN' */
    }

    /* End of If: '<S105>/If' */
    /* End of Outputs for SubSystem: '<S23>/TRNC_ShftTypeArb' */
    (void)Rte_Read_VeTINR_b_Synchro1GearFA_Value(&rtb_Comparison3_c);

    /* Outputs for Atomic SubSystem: '<S23>/TRNC_ShftTypeArb' */
    /* DataTypeConversion: '<S138>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeTINR_b_Synchro1GearFA'
     *  Merge: '<S105>/Merge'
     *  UnitDelay: '<S105>/Unit Delay'
     */
    TRNR_ac_B.DataTypeConversion_j = TRNR_ac_DW.UnitDelay_DSTATE_hj;

    /* If: '<S105>/If2' incorporates:
     *  Constant: '<S105>/Constant Value2'
     *  Constant: '<S105>/Constant Value3'
     *  Constant: '<S142>/Calib'
     *  Inport: '<Root>/VeTINR_e_Synchro1Gear'
     *  Logic: '<S105>/Logical Operator2'
     *  RelationalOperator: '<S105>/Comparison3'
     *  RelationalOperator: '<S105>/Comparison4'
     *  UnitDelay: '<S105>/Unit Delay2'
     */
    rtPrevAction = TRNR_ac_DW.If2_ActiveSubsystem;
    TRNR_ac_DW.If2_ActiveSubsystem = (sint8)(((((sint32)
        HeTRNR_i_ActOddGearFcnSel) != 1) && ((((sint32)HeTRNR_i_ActOddGearFcnSel)
        != 2) || (!rtb_Comparison3_c))) ? 1 : 0);
    if (TRNR_ac_DW.If2_ActiveSubsystem == 0)
    {
        if (0 != rtPrevAction)
        {
            /* InitializeConditions for IfAction SubSystem: '<S105>/UseShftTypes' incorporates:
             *  ActionPort: '<S145>/Action Port'
             */
            /* InitializeConditions for If: '<S105>/If2' incorporates:
             *  UnitDelay: '<S145>/Unit Delay1'
             *  UnitDelay: '<S145>/Unit Delay2'
             */
            TRNR_ac_DW.UnitDelay2_DSTATE_hm = CeTRNR_e_Neutral;
            TRNR_ac_DW.UnitDelay1_DSTATE_k = CeTRNR_e_Neutral;

            /* End of InitializeConditions for SubSystem: '<S105>/UseShftTypes' */

            /* SystemReset for IfAction SubSystem: '<S105>/UseShftTypes' incorporates:
             *  ActionPort: '<S145>/Action Port'
             */
            /* SystemReset for Atomic SubSystem: '<S145>/EdgeRising' */
            /* SystemReset for If: '<S105>/If2' incorporates:
             *  UnitDelay: '<S163>/Unit Delay'
             *  UnitDelay: '<S164>/Unit Delay'
             */
            TRNR_ac_DW.UnitDelay_DSTATE_jg = false;

            /* End of SystemReset for SubSystem: '<S145>/EdgeRising' */

            /* SystemReset for Atomic SubSystem: '<S145>/EdgeRising1' */
            TRNR_ac_DW.UnitDelay_DSTATE_jk = false;

            /* End of SystemReset for SubSystem: '<S145>/EdgeRising1' */
            /* End of SystemReset for SubSystem: '<S105>/UseShftTypes' */
        }

        /* Outputs for IfAction SubSystem: '<S105>/UseShftTypes' incorporates:
         *  ActionPort: '<S145>/Action Port'
         */
        /* UnitDelay: '<S145>/Unit Delay1' incorporates:
         *  Constant: '<S165>/Calib'
         *  Constant: '<S167>/Calib'
         *  DataTypeConversion: '<S145>/Data Type Conversion1'
         *  Selector: '<S145>/Selector1'
         *  Sum: '<S145>/Sum1'
         *  Switch: '<S100>/Switch8'
         */
        rtb_DataTypeConversion_i3 = HaTRNR_e_TCMActOddGear_ST[(sint16)(((sint32)
            rtb_DataTypeConversion_o4) - ((sint32)HeTRNR_i_ShftTypeOfst))];

        /* Switch: '<S145>/Switch' incorporates:
         *  Constant: '<S162>/Constant'
         *  RelationalOperator: '<S145>/Comparison1'
         *  UnitDelay: '<S145>/Unit Delay1'
         */
        if (CeTRNR_e_Neutral == ((uint32)rtb_DataTypeConversion_i3))
        {
            /* Switch: '<S145>/Switch' incorporates:
             *  Constant: '<S166>/Calib'
             *  DataTypeConversion: '<S145>/Data Type Conversion'
             *  Selector: '<S145>/Selector'
             *  Switch: '<S100>/Switch10'
             */
            rtb_DataTypeConversion_i3 = HaTRNR_e_TCMActOddGear_STTLF
                [(TRNR_ac_B.DataTypeConversion_b)];
        }

        /* End of Switch: '<S145>/Switch' */

        /* RelationalOperator: '<S145>/Comparison3' incorporates:
         *  Constant: '<S159>/Constant'
         *  SignalConversion generated from: '<S2>/VeTINR_e_Synchro1Sts'
         */
        rtb_Comparison3_c = (((uint32)rtb_TmpSignalConversionAtVeTINR_e_Sync_b) ==
                             CeHCCR_e_ClLocked);

        /* RelationalOperator: '<S145>/Comparison4' incorporates:
         *  Constant: '<S161>/Constant'
         *  RelationalOperator: '<S145>/Comparison3'
         *  SignalConversion generated from: '<S2>/VeTINR_e_Synchro1Sts'
         */
        rtb_Comparison3_e = (((uint32)rtb_TmpSignalConversionAtVeTINR_e_Sync_b) ==
                             CeHCCR_e_ClReleased);

        /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
        /* Logic: '<S163>/OR1' incorporates:
         *  UnitDelay: '<S163>/Unit Delay'
         */
        rtb_VeTRNR_b_HSERActualGearError = !TRNR_ac_DW.UnitDelay_DSTATE_jg;

        /* Update for UnitDelay: '<S163>/Unit Delay' */
        TRNR_ac_DW.UnitDelay_DSTATE_jg = rtb_Comparison3_e;

        /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

        /* Outputs for Atomic SubSystem: '<S145>/EdgeRising1' */
        /* Logic: '<S164>/AND' incorporates:
         *  Logic: '<S164>/OR1'
         *  UnitDelay: '<S164>/Unit Delay'
         */
        rtb_Comparison3_g = (rtb_Comparison3_c &&
                             (!TRNR_ac_DW.UnitDelay_DSTATE_jk));

        /* Update for UnitDelay: '<S164>/Unit Delay' */
        TRNR_ac_DW.UnitDelay_DSTATE_jk = rtb_Comparison3_c;

        /* End of Outputs for SubSystem: '<S145>/EdgeRising1' */

        /* Switch: '<S145>/Switch3' incorporates:
         *  Constant: '<S158>/Constant'
         *  Logic: '<S145>/Logical Operator1'
         *  RelationalOperator: '<S145>/Comparison2'
         *  RelationalOperator: '<S145>/Comparison5'
         *  Switch: '<S145>/Switch'
         *  UnitDelay: '<S145>/Unit Delay1'
         *  UnitDelay: '<S145>/Unit Delay2'
         */
        if ((CeTRNR_e_Neutral != ((uint32)rtb_DataTypeConversion_i3)) &&
                (rtb_DataTypeConversion_i3 != TRNR_ac_DW.UnitDelay2_DSTATE_hm))
        {
            TRNR_ac_DW.UnitDelay1_DSTATE_k = rtb_DataTypeConversion_i3;
        }

        /* End of Switch: '<S145>/Switch3' */

        /* Outputs for Atomic SubSystem: '<S145>/EdgeRising' */
        /* Switch: '<S145>/Switch2' incorporates:
         *  Constant: '<S160>/Constant'
         *  Logic: '<S163>/AND'
         *  Merge: '<S105>/Merge1'
         *  Switch: '<S145>/Switch1'
         *  UnitDelay: '<S105>/Unit Delay2'
         */
        if (rtb_Comparison3_e && rtb_VeTRNR_b_HSERActualGearError)
        {
            TRNR_ac_DW.UnitDelay2_DSTATE_n = CeTRNR_e_Neutral;
        }
        else
        {
            if (rtb_Comparison3_g)
            {
                /* Switch: '<S145>/Switch1' incorporates:
                 *  Merge: '<S105>/Merge1'
                 *  Switch: '<S145>/Switch3'
                 *  UnitDelay: '<S105>/Unit Delay2'
                 *  UnitDelay: '<S145>/Unit Delay1'
                 */
                TRNR_ac_DW.UnitDelay2_DSTATE_n = TRNR_ac_DW.UnitDelay1_DSTATE_k;
            }
        }

        /* End of Switch: '<S145>/Switch2' */
        /* End of Outputs for SubSystem: '<S145>/EdgeRising' */

        /* Update for UnitDelay: '<S145>/Unit Delay2' incorporates:
         *  Switch: '<S145>/Switch'
         */
        TRNR_ac_DW.UnitDelay2_DSTATE_hm = rtb_DataTypeConversion_i3;

        /* End of Outputs for SubSystem: '<S105>/UseShftTypes' */
    }
    else
    {
        (void)Rte_Read_VeTINR_e_Synchro1Gear_Value(&tmpRead_3);

        /* Outputs for IfAction SubSystem: '<S105>/UseSynchro1GearCAN' incorporates:
         *  ActionPort: '<S146>/Action Port'
         */
        TRNR_ac_UseSynchro2GearCAN(tmpRead_3, &TRNR_ac_DW.UnitDelay2_DSTATE_n);

        /* End of Outputs for SubSystem: '<S105>/UseSynchro1GearCAN' */
    }

    /* End of If: '<S105>/If2' */

    /* DataTypeConversion: '<S140>/DataTypeConversion' incorporates:
     *  Merge: '<S105>/Merge1'
     *  UnitDelay: '<S105>/Unit Delay2'
     */
    TRNR_ac_B.DataTypeConversion_lw = TRNR_ac_DW.UnitDelay2_DSTATE_n;

    /* UnitDelay: '<S108>/Unit Delay' incorporates:
     *  UnitDelay: '<S110>/Unit Delay2'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_h = TRNR_ac_DW.UnitDelay_DSTATE_f1;

    /* Switch: '<S108>/Switch2' incorporates:
     *  Constant: '<S101>/Constant32'
     *  Constant: '<S103>/Calib'
     *  Constant: '<S132>/Constant'
     *  RelationalOperator: '<S132>/Compare'
     *  S-Function (sfix_bitop): '<S101>/Bitwise Logical Operator8'
     */
    if ((((sint32)HeTRNR_d_ShftTypeArbSel) & 256) > 0)
    {
        /* Switch: '<S108>/Switch2' incorporates:
         *  Constant: '<S191>/Calib'
         *  DataTypeConversion: '<S108>/Data Type Conversion4'
         *  Sum: '<S108>/Sum1'
         *  Switch: '<S100>/Switch8'
         */
        rtb_Sum1_b = (sint16)(((sint32)rtb_DataTypeConversion_o4) - ((sint32)
                               HeTRNR_i_ShftTypeOfst));
    }
    else
    {
        /* Switch: '<S108>/Switch2' incorporates:
         *  DataTypeConversion: '<S108>/Data Type Conversion5'
         *  SignalConversion generated from: '<S2>/VeTINR_e_ShftTypeTLF'
         */
        rtb_Sum1_b = (sint16)rtb_TmpSignalConversionAtVeTINR_e_ShftTy;
    }

    /* End of Switch: '<S108>/Switch2' */

    /* Switch: '<S108>/Switch' incorporates:
     *  Constant: '<S188>/Calib'
     *  Selector: '<S108>/Selector3'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    if (!HaTRNR_b_ShftTypeActTarGearFrz[(rtb_Sum1_b)])
    {
        TRNR_ac_DW.UnitDelay_DSTATE_f1 = rtb_Sum1_b;
    }

    /* End of Switch: '<S108>/Switch' */

    /* Selector: '<S108>/Selector1' incorporates:
     *  Constant: '<S190>/Calib'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    rtb_DataTypeConversion_i3 = HaTRNR_e_ShftTypeTargetGear
        [(TRNR_ac_DW.UnitDelay_DSTATE_f1)];

    /* Switch: '<S108>/Switch3' incorporates:
     *  Constant: '<S185>/Constant'
     *  Constant: '<S188>/Calib'
     *  RelationalOperator: '<S108>/Comparison2'
     *  Selector: '<S108>/Selector3'
     *  Switch: '<S108>/Switch1'
     *  Switch: '<S108>/Switch4'
     */
    if (((uint32)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT) ==
            CeTRGR_e_TransRangePark)
    {
        /* Switch: '<S108>/Switch3' incorporates:
         *  Constant: '<S186>/Constant'
         */
        VeTRNC_e_ShftTypeActualGr = CeTRNR_e_Park;

        /* Switch: '<S108>/Switch4' incorporates:
         *  Constant: '<S187>/Constant'
         */
        VeTRNC_e_ShftTypeTargetGr = CeTRNR_e_Park;
    }
    else
    {
        if (HaTRNR_b_ShftTypeActTarGearFrz[(rtb_Sum1_b)])
        {
            /* Switch: '<S108>/Switch3' incorporates:
             *  Selector: '<S108>/Selector1'
             *  Switch: '<S108>/Switch1'
             */
            VeTRNC_e_ShftTypeActualGr = rtb_DataTypeConversion_i3;
        }
        else
        {
            /* Switch: '<S108>/Switch3' incorporates:
             *  Constant: '<S189>/Calib'
             *  Selector: '<S108>/Selector2'
             *  Switch: '<S108>/Switch1'
             *  UnitDelay: '<S108>/Unit Delay'
             */
            VeTRNC_e_ShftTypeActualGr = HaTRNR_e_ShftTypeActualGear
                [(TRNR_ac_DW.UnitDelay_DSTATE_f1)];
        }

        /* Switch: '<S108>/Switch4' incorporates:
         *  Selector: '<S108>/Selector1'
         */
        VeTRNC_e_ShftTypeTargetGr = rtb_DataTypeConversion_i3;
    }

    /* End of Switch: '<S108>/Switch3' */

    /* Outputs for Atomic SubSystem: '<S110>/Signal Latch On With Reset' */
    /* Logic: '<S216>/OR1' incorporates:
     *  Logic: '<S216>/OR'
     *  UnitDelay: '<S216>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_jv = (rtb_TmpSignalConversionAtVeTINR_b_ShftTy ||
        (rtb_TmpSignalConversionAtVeTINR_b_TCMAct &&
         (TRNR_ac_DW.UnitDelay_DSTATE_jv)));

    /* End of Outputs for SubSystem: '<S110>/Signal Latch On With Reset' */

    /* Switch: '<S291>/Switch3' incorporates:
     *  Constant: '<S290>/Calib'
     *  DataTypeConversion: '<S113>/Data Type Conversion'
     *  DataTypeConversion: '<S266>/Data Type Conversion'
     *  Merge: '<S265>/Merge1'
     *  UnitDelay: '<S291>/Unit Delay'
     */
    if (rtb_VeTRNR_b_HSERActualGearError_k)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_i = (sint16)HeTRNR_e_SteadyState;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_i = (sint16)TRNR_ac_B.Merge1;
    }

    /* End of Switch: '<S291>/Switch3' */
    /* End of Outputs for SubSystem: '<S23>/TRNC_ShftTypeArb' */

    /* Gain: '<S308>/Gain' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCM_PassiveHybridGearFA'
     */
    (void)Rte_Read_VeTINR_b_TCM_PassiveHybridGearFA_Value(&TRNR_ac_B.Gain_cz);
    (void)Rte_Read_VeTINR_e_TCM_PassiveHybridGear_Value
        (&TRNR_ac_B.VeTINR_e_TCM_PassiveHybridGear);

    /* Gain: '<S307>/Gain' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCM_ActiveHybridGearFA'
     *  Inport: '<Root>/VeTINR_e_TCM_PassiveHybridGear'
     *  Inport: '<S100>/VeTINR_e_TCM_PassiveHybridGear'
     */
    (void)Rte_Read_VeTINR_b_TCM_ActiveHybridGearFA_Value(&TRNR_ac_B.Gain_c);
    (void)Rte_Read_VeTINR_e_TCM_ActiveHybridGear_Value
        (&TRNR_ac_B.VeTINR_e_TCM_ActiveHybridGear);

    /* Gain: '<S306>/Gain' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCM_ActiveXNGearFA'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveHybridGear'
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveHybridGear'
     */
    (void)Rte_Read_VeTINR_b_TCM_ActiveXNGearFA_Value(&TRNR_ac_B.Gain_lf);
    (void)Rte_Read_VeTINR_e_TCM_ActiveXNGear_Value
        (&TRNR_ac_B.VeTINR_e_TCM_ActiveXNGear);

    /* Gain: '<S305>/Gain' incorporates:
     *  Inport: '<Root>/VeTINR_b_TCM_ActiveEVGearFA'
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveXNGear'
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveXNGear'
     */
    (void)Rte_Read_VeTINR_b_TCM_ActiveEVGearFA_Value(&TRNR_ac_B.Gain_g);
    (void)Rte_Read_VeTINR_e_TCM_ActiveEVGear_Value
        (&TRNR_ac_B.VeTINR_e_TCM_ActiveEVGear);

    /* Outputs for Atomic SubSystem: '<S23>/TRNC_ShftTypeArb' */
    /* Update for UnitDelay: '<S110>/Unit Delay2' incorporates:
     *  Inport: '<Root>/VeTINR_e_TCM_ActiveEVGear'
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveEVGear'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_h = rtb_DataTypeConversion;

    /* Update for UnitDelay: '<S110>/Unit Delay1' */
    TRNR_ac_DW.UnitDelay1_DSTATE_a = TRNR_ac_DW.UnitDelay_DSTATE_jv;

    /* Update for UnitDelay: '<S114>/Unit Delay2' incorporates:
     *  DataTypeConversion: '<S294>/DataTypeConversion'
     */
    TRNR_ac_DW.UnitDelay2_DSTATE_j = VeTRNR_e_CurrShftTypeEqn;

    /* Update for UnitDelay: '<S114>/Unit Delay1' incorporates:
     *  Switch: '<S303>/Switch'
     */
    TRNR_ac_DW.UnitDelay1_DSTATE_p = rtb_TmpSignalConversionAtVeHSER_e_RngE_h;

    /* Update for UnitDelay: '<S266>/Unit Delay' incorporates:
     *  Constant: '<S266>/TRUE Constant1'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_ho = true;

    /* Update for UnitDelay: '<S143>/Unit Delay5' */
    TRNR_ac_DW.UnitDelay5_DSTATE = rtb_Comparison5_o_tmp_tmp;

    /* End of Outputs for SubSystem: '<S23>/TRNC_ShftTypeArb' */
    TRNR_ac_DW.UnitDelay2_DSTATE = (sint16)VeTRNC_e_ShftTypeTargetGr;

    /* DataTypeConversion: '<S9>/Data Type Conversion4' incorporates:
     *  Switch: '<S108>/Switch3'
     *  Switch: '<S108>/Switch4'
     *  UnitDelay: '<S9>/Unit Delay2'
     */
    rtb_DataTypeConversion = (sint16)VeTRNC_e_ShftTypeActualGr;

    /* DataTypeConversion: '<S9>/Data Type Conversion5' incorporates:
     *  Switch: '<S100>/Switch8'
     */
    rtb_DataTypeConversion_gj = (sint16)rtb_DataTypeConversion_o4;

    /* DataTypeConversion: '<S17>/DataTypeConversion' incorporates:
     *  Switch: '<S100>/Switch8'
     */
    TRNR_ac_B.DataTypeConversion_l = rtb_DataTypeConversion_o4;

#endif

    /* End of DataTypeConversion: '<S9>/Data Type Conversion3' */
    /* End of Outputs for SubSystem: '<S9>/TRNC_ShftTypeArb' */

    /* DataTypeConversion: '<S12>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S14>/DataTypeConversion'
     *  SignalConversion generated from: '<S9>/TRNC_e_C1Stat_Ovrd'
     *  SignalConversion generated from: '<S9>/TRNC_e_C2Stat_Ovrd'
     *  SignalConversion generated from: '<S9>/TRNC_e_ILE_StatRaw'
     *  SignalConversion generated from: '<S9>/TRNC_e_ILE_Stat_Ovrd'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* DataTypeConversion: '<S12>/DataTypeConversion' incorporates:
     *  Merge: '<S34>/Merge'
     */
    TRNR_ac_B.DataTypeConversion_o = TRNR_ac_B.Merge;

    /* DataTypeConversion: '<S14>/DataTypeConversion' incorporates:
     *  Merge: '<S35>/Merge'
     */
    TRNR_ac_B.DataTypeConversion_n = TRNR_ac_B.Merge_f;

    /* SignalConversion generated from: '<S9>/TRNC_e_C1Stat_Ovrd' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     */
    TRNR_ac_B.OutportBufferForTRNC_e_C1Stat_Ovrd =
        TRNR_ac_B.DataTypeConversion_o;

    /* SignalConversion generated from: '<S9>/TRNC_e_C2Stat_Ovrd' incorporates:
     *  DataTypeConversion: '<S14>/DataTypeConversion'
     */
    TRNR_ac_B.OutportBufferForTRNC_e_C2Stat_Ovrd =
        TRNR_ac_B.DataTypeConversion_n;

    /* SignalConversion generated from: '<S9>/TRNC_e_ILE_StatRaw' incorporates:
     *  Switch: '<S32>/Switch'
     */
    TRNR_ac_B.OutportBufferForTRNC_e_ILE_StatRaw = TRNR_ac_B.Switch_c;

    /* SignalConversion generated from: '<S9>/TRNC_e_ILE_Stat_Ovrd' incorporates:
     *  Switch: '<S32>/Switch'
     */
    TRNR_ac_B.OutportBufferForTRNC_e_ILE_Stat_Ovrd = TRNR_ac_B.Switch_c;

#endif

    /* End of DataTypeConversion: '<S12>/DataTypeConversion' */

    /* Gain: '<S19>/Gain' */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* Gain: '<S19>/Gain' */
    TRNR_ac_B.Gain = rtb_Comparison9_b;

#endif

    /* End of Gain: '<S19>/Gain' */

    /* SignalConversion generated from: '<S9>/TRNC_SelTgtActGear' */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNC_SelTgtActGear' */
    rtb_VM_Conditional_Signal_TRNC_SelTgtAct = rtb_Comparison9_b;

    /* VariantMerge generated from: '<S9>/TRNC_SelTgtActGear' incorporates:
     *  Switch: '<S108>/Switch4'
     */
    rtb_VeTRNC_e_ShftTypeTargetGr = VeTRNC_e_ShftTypeTargetGr;

#elif !Rte_SysCon_Variant_TRNR_ShftTypeArb && Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* VariantMerge generated from: '<S9>/TRNC_SelTgtActGear' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_SelTgtActGear'
     */
    rtb_VM_Conditional_Signal_TRNC_SelTgtAct = false;

#endif

    /* End of SignalConversion generated from: '<S9>/TRNC_SelTgtActGear' */

    /* SignalConversion generated from: '<S9>/TRNC_SelTgtActGear' */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear && Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* VariantMerge generated from: '<S9>/TRNC_SelTgtActGear' incorporates:
     *  Switch: '<S108>/Switch3'
     */
    rtb_VeTRNC_e_ShftTypeActualGr = VeTRNC_e_ShftTypeActualGr;

#elif !Rte_SysCon_Variant_TRNR_ShftTypeArb && Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* VariantMerge generated from: '<S9>/TRNC_SelTgtActGear' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_SelTgtActGear'
     */
    rtb_VeTRNC_e_ShftTypeTargetGr = CeTRNR_e_Neutral;

    /* VariantMerge generated from: '<S9>/TRNC_SelTgtActGear' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_SelTgtActGear'
     */
    rtb_VeTRNC_e_ShftTypeActualGr = CeTRNR_e_Neutral;

#endif

    /* End of SignalConversion generated from: '<S9>/TRNC_SelTgtActGear' */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* Outputs for Atomic SubSystem: '<S9>/TRNC_SelTgtActGear' */
    /* Outputs for Atomic SubSystem: '<S22>/TRNC_SelTgtActGear' */
    /* Outputs for Atomic SubSystem: '<S87>/Signal Latch On' */
    /* Logic: '<S99>/OR2' incorporates:
     *  Constant: '<S90>/Constant'
     *  RelationalOperator: '<S87>/Comparison5'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ShftType'
     *  UnitDelay: '<S99>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_jk2 = ((((uint32)
        rtb_TmpSignalConversionAtVeTINR_e_Shft_f) != CeTRNR_e_SteadyState) ||
        (TRNR_ac_DW.UnitDelay_DSTATE_jk2));

    /* End of Outputs for SubSystem: '<S87>/Signal Latch On' */

    /* Logic: '<S87>/Logical' incorporates:
     *  Constant: '<S94>/Calib'
     *  Logic: '<S87>/Logical2'
     *  UnitDelay: '<S99>/Unit Delay'
     */
    rtb_Comparison3_c = (((KeTRNR_b_SlctGearSrcShftType) &&
                          (!rtb_VM_Conditional_Signal_TRNC_SelTgtAct)) &&
                         (TRNR_ac_DW.UnitDelay_DSTATE_jk2));

    /* Delay: '<S87>/TRNC_TargetGearVarDelay' incorporates:
     *  Constant: '<S96>/Calib'
     *  SignalConversion generated from: '<S2>/VeTINR_e_TargetGear'
     */
    if (rtb_VM_Conditional_Signal_TRNC_SelTgtAct && (((sint32)
            TRNR_ac_PrevZCX.TRNC_TargetGearVarDelay_Reset_ZCE) != 1))
    {
        TRNR_ac_DW.icLoad = 1U;
    }

    TRNR_ac_PrevZCX.TRNC_TargetGearVarDelay_Reset_ZCE =
        rtb_VM_Conditional_Signal_TRNC_SelTgtAct ? ((ZCSigState)1) :
        ((ZCSigState)0);
    if (((sint32)TRNR_ac_DW.icLoad) != 0)
    {
        for (i = 0; i < 4; i++)
        {
            TRNR_ac_DW.TRNC_TargetGearVarDelay_DSTATE[i] =
                rtb_TmpSignalConversionAtVeTINR_e_Target;
        }
    }

    if (KeTRNR_i_TgtGrCommVarDly <= 0)
    {
        /* Delay: '<S87>/TRNC_TargetGearVarDelay' incorporates:
         *  SignalConversion generated from: '<S2>/VeTINR_e_TargetGear'
         */
        rtb_DataTypeConversion_i3 = rtb_TmpSignalConversionAtVeTINR_e_Target;
    }
    else
    {
        if (KeTRNR_i_TgtGrCommVarDly > 4)
        {
            rtb_Sum1_b = 4;
        }
        else
        {
            rtb_Sum1_b = KeTRNR_i_TgtGrCommVarDly;
        }

        /* Delay: '<S87>/TRNC_TargetGearVarDelay' */
        rtb_DataTypeConversion_i3 = TRNR_ac_DW.TRNC_TargetGearVarDelay_DSTATE
            [(sint16)(4 - rtb_Sum1_b)];
    }

    /* End of Delay: '<S87>/TRNC_TargetGearVarDelay' */

    /* Delay: '<S87>/TRNC_ActualGearVarDelay' incorporates:
     *  Constant: '<S95>/Calib'
     *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
     */
    if (rtb_VM_Conditional_Signal_TRNC_SelTgtAct && (((sint32)
            TRNR_ac_PrevZCX.TRNC_ActualGearVarDelay_Reset_ZCE) != 1))
    {
        TRNR_ac_DW.icLoad_n = 1U;
    }

    TRNR_ac_PrevZCX.TRNC_ActualGearVarDelay_Reset_ZCE =
        rtb_VM_Conditional_Signal_TRNC_SelTgtAct ? ((ZCSigState)1) :
        ((ZCSigState)0);
    if (((sint32)TRNR_ac_DW.icLoad_n) != 0)
    {
        for (i = 0; i < 4; i++)
        {
            TRNR_ac_DW.TRNC_ActualGearVarDelay_DSTATE[i] =
                rtb_TmpSignalConversionAtVeTINR_e_Actual;
        }
    }

    if (KeTRNR_i_ActGrCommVarDly <= 0)
    {
        /* Delay: '<S87>/TRNC_ActualGearVarDelay' incorporates:
         *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
         */
        rtb_DataTypeConversion_co = rtb_TmpSignalConversionAtVeTINR_e_Actual;
    }
    else
    {
        if (KeTRNR_i_ActGrCommVarDly > 4)
        {
            rtb_Sum1_b = 4;
        }
        else
        {
            rtb_Sum1_b = KeTRNR_i_ActGrCommVarDly;
        }

        /* Delay: '<S87>/TRNC_ActualGearVarDelay' */
        rtb_DataTypeConversion_co = TRNR_ac_DW.TRNC_ActualGearVarDelay_DSTATE
            [(sint16)(4 - rtb_Sum1_b)];
    }

    /* End of Delay: '<S87>/TRNC_ActualGearVarDelay' */

    /* Switch: '<S87>/Switch' incorporates:
     *  Constant: '<S93>/Calib'
     *  Switch: '<S87>/Switch2'
     *  Switch: '<S87>/Switch3'
     */
    if (rtb_Comparison3_c)
    {
        /* Switch: '<S87>/Switch' */
        rtb_Selector_cz[0] = (TeHSER_e_RngEqnSel)rtb_VeTRNC_e_ShftTypeTargetGr;
        rtb_Selector_cz[1] = (TeHSER_e_RngEqnSel)rtb_VeTRNC_e_ShftTypeActualGr;
    }
    else if (HeTRNR_b_EnblPRNDLGearMap)
    {
        /* Switch: '<S87>/Switch' incorporates:
         *  Constant: '<S91>/Calib'
         *  Constant: '<S92>/Calib'
         *  DataTypeConversion: '<S87>/Data Type Conversion'
         *  Selector: '<S87>/Selector'
         *  Selector: '<S87>/Selector1'
         *  SignalConversion generated from: '<S2>/VeTRGR_e_VldtdTransRngSt'
         *  Switch: '<S87>/Switch3'
         */
        rtb_Selector_cz[0] = (TeHSER_e_RngEqnSel)HaTRNR_e_PRNDLTargetGearMap
            [(sint16)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT];
        rtb_Selector_cz[1] = (TeHSER_e_RngEqnSel)HaTRNR_e_PRNDLActualGearMap
            [(sint16)rtb_TmpSignalConversionAtVeTRGR_e_VldtdT];
    }
    else if (rtb_VM_Conditional_Signal_TRNC_SelTgtAct)
    {
        /* Switch: '<S87>/Switch2' incorporates:
         *  Switch: '<S87>/Switch'
         *  Switch: '<S87>/Switch3'
         */
        rtb_Selector_cz[0] = (TeHSER_e_RngEqnSel)rtb_DataTypeConversion_i3;
        rtb_Selector_cz[1] = (TeHSER_e_RngEqnSel)rtb_DataTypeConversion_co;
    }
    else
    {
        /* Switch: '<S87>/Switch' incorporates:
         *  Switch: '<S87>/Switch2'
         *  Switch: '<S87>/Switch3'
         */
        rtb_Selector_cz[0] = (TeHSER_e_RngEqnSel)
            rtb_TmpSignalConversionAtVeTINR_e_Target;
        rtb_Selector_cz[1] = (TeHSER_e_RngEqnSel)
            rtb_TmpSignalConversionAtVeTINR_e_Actual;
    }

    /* End of Switch: '<S87>/Switch' */

    /* DataTypeConversion: '<S88>/DataTypeConversion' */
    TRNR_ac_B.DataTypeConversion_br = (TeTRNR_e_TCMGearStat)rtb_Selector_cz[1];

    /* DataTypeConversion: '<S89>/DataTypeConversion' */
    TRNR_ac_B.DataTypeConversion_p = (TeTRNR_e_TCMGearStat)rtb_Selector_cz[0];

    /* Switch: '<S87>/Switch1' */
    rtb_VM_Conditional_Signal_TRNC_SelTgtAct = !rtb_Comparison3_c;

    /* Gain: '<S97>/Gain' incorporates:
     *  Switch: '<S87>/Switch1'
     */
    TRNR_ac_B.Gain_p = (rtb_VM_Conditional_Signal_TRNC_SelTgtAct &&
                        rtb_TmpSignalConversionAtVeTINR_b_Target);

    /* Gain: '<S98>/Gain' incorporates:
     *  Switch: '<S87>/Switch1'
     */
    TRNR_ac_B.Gain_m = (rtb_VM_Conditional_Signal_TRNC_SelTgtAct &&
                        rtb_TmpSignalConversionAtVeTINR_b_Actual);

    /* Update for Delay: '<S87>/TRNC_TargetGearVarDelay' */
    TRNR_ac_DW.icLoad = 0U;

    /* Update for Delay: '<S87>/TRNC_ActualGearVarDelay' */
    TRNR_ac_DW.icLoad_n = 0U;
    for (i = 0; i < 3; i++)
    {
        /* Update for Delay: '<S87>/TRNC_TargetGearVarDelay' */
        TRNR_ac_DW.TRNC_TargetGearVarDelay_DSTATE[i] =
            TRNR_ac_DW.TRNC_TargetGearVarDelay_DSTATE[i + 1];

        /* Update for Delay: '<S87>/TRNC_ActualGearVarDelay' */
        TRNR_ac_DW.TRNC_ActualGearVarDelay_DSTATE[i] =
            TRNR_ac_DW.TRNC_ActualGearVarDelay_DSTATE[i + 1];
    }

    /* Update for Delay: '<S87>/TRNC_TargetGearVarDelay' incorporates:
     *  SignalConversion generated from: '<S2>/VeTINR_e_TargetGear'
     */
    TRNR_ac_DW.TRNC_TargetGearVarDelay_DSTATE[3] =
        rtb_TmpSignalConversionAtVeTINR_e_Target;

    /* Update for Delay: '<S87>/TRNC_ActualGearVarDelay' incorporates:
     *  SignalConversion generated from: '<S2>/VeTINR_e_ActualGear'
     */
    TRNR_ac_DW.TRNC_ActualGearVarDelay_DSTATE[3] =
        rtb_TmpSignalConversionAtVeTINR_e_Actual;

    /* End of Outputs for SubSystem: '<S22>/TRNC_SelTgtActGear' */
    /* End of Outputs for SubSystem: '<S9>/TRNC_SelTgtActGear' */
#endif

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* Inport: '<Root>/VeTINR_b_ShftTypeTLFFA' */
    (void)Rte_Read_VeTINR_b_ShftTypeTLFFA_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/TRNR_MedTEB2'
     */
    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TRNC_Cntrls_Input'
     */
    /* Update for UnitDelay: '<S9>/Unit Delay1' incorporates:
     *  UnitDelay: '<S9>/Unit Delay3'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    TRNR_ac_DW.UnitDelay1_DSTATE_j = rtb_DataTypeConversion_gj;
    TRNR_ac_DW.UnitDelay3_DSTATE = rtb_DataTypeConversion;

#endif

    /* End of Update for UnitDelay: '<S9>/Unit Delay1' */

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TRNC_PassThrough'
     */
    /* Outport: '<Root>/VeTRNR_e_ESSbasedTrnstnSts' incorporates:
     *  DataTypeConversion: '<S378>/DataTypeConversion'
     *  Inport: '<Root>/VeESSR_e_TCM_TransitionStatus'
     *  SignalConversion generated from: '<S2>/TCMTransitionStatus'
     */
    (void)Rte_Write_VeTRNR_e_ESSbasedTrnstnSts_Value(tmpRead_8);

    /* S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TRNC_Cntrls_Input'
     */
    /* Outport: '<Root>/VeTRNR_b_ShftTypeTLFFA' incorporates:
     *  Gain: '<S18>/Gain'
     *  SignalConversion generated from: '<S2>/TINR_b_ShftTypeTLFFA'
     */
    (void)Rte_Write_VeTRNR_b_ShftTypeTLFFA_Value(tmpRead);

    /* End of Outputs for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* SignalConversion generated from: '<S2>/TRNC_b_ActiveEVGearFA' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_b_ActiveHybridGearFA'
     *  SignalConversion generated from: '<S2>/TRNC_b_ActiveXNGearFA'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* Outport: '<Root>/VeTRNR_b_TCM_ActiveEVGearFA' */
    (void)Rte_Write_VeTRNR_b_TCM_ActiveEVGearFA_Value(TRNR_ac_B.Gain_g);

    /* Outport: '<Root>/VeTRNR_b_TCM_ActiveHybridGearFA' */
    (void)Rte_Write_VeTRNR_b_TCM_ActiveHybridGearFA_Value(TRNR_ac_B.Gain_c);

    /* Outport: '<Root>/VeTRNR_b_TCM_ActiveXNGearFA' */
    (void)Rte_Write_VeTRNR_b_TCM_ActiveXNGearFA_Value(TRNR_ac_B.Gain_lf);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_b_ActiveEVGearFA' */

    /* SignalConversion generated from: '<S2>/TRNC_b_ActualGearFA' */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* Outport: '<Root>/VeTRNR_b_ActualGearFA' */
    (void)Rte_Write_VeTRNR_b_ActualGearFA_Value(TRNR_ac_B.Gain_m);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_b_ActualGearFA' */

    /* SignalConversion generated from: '<S2>/TRNC_b_EnblGearRatMon' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_b_PassiveHybridGearFA'
     *  SignalConversion generated from: '<S2>/TRNC_b_ShftTypeFA'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* Outport: '<Root>/VeTRNR_b_EnblGearRatMon' */
    (void)Rte_Write_VeTRNR_b_EnblGearRatMon_Value(TRNR_ac_B.Gain_j);

    /* Outport: '<Root>/VeTRNR_b_TCM_PassiveHybridGearFA' */
    (void)Rte_Write_VeTRNR_b_TCM_PassiveHybridGearFA_Value(TRNR_ac_B.Gain_cz);

    /* Outport: '<Root>/VeTRNR_b_ShftTypeFA' */
    (void)Rte_Write_VeTRNR_b_ShftTypeFA_Value(TRNR_ac_B.Gain);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_b_EnblGearRatMon' */

    /* SignalConversion generated from: '<S2>/TRNC_b_TargetGearFA' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_ActualGear'
     */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* Outport: '<Root>/VeTRNR_b_TargetGearFA' */
    (void)Rte_Write_VeTRNR_b_TargetGearFA_Value(TRNR_ac_B.Gain_p);

    /* Outport: '<Root>/VeTRNR_e_ActualGear' incorporates:
     *  DataTypeConversion: '<S88>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_ActualGear_Value(TRNR_ac_B.DataTypeConversion_br);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_b_TargetGearFA' */

    /* SignalConversion generated from: '<S2>/TRNC_e_C1Stat_Ovrd' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_C2Stat_Ovrd'
     *  SignalConversion generated from: '<S2>/TRNC_e_C3Stat_Ovrd'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_DisbClutchStatPostProcess

    /* Outport: '<Root>/VeTRNR_e_C1Stat' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_e_C1Stat_Ovrd'
     */
    (void)Rte_Write_VeTRNR_e_C1Stat_Value
        (TRNR_ac_B.OutportBufferForTRNC_e_C1Stat_Ovrd);

    /* Outport: '<Root>/VeTRNR_e_C2Stat' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_e_C2Stat_Ovrd'
     */
    (void)Rte_Write_VeTRNR_e_C2Stat_Value
        (TRNR_ac_B.OutportBufferForTRNC_e_C2Stat_Ovrd);

    /* Outport: '<Root>/VeTRNR_e_C3Stat' incorporates:
     *  Merge: '<S36>/Merge'
     */
    (void)Rte_Write_VeTRNR_e_C3Stat_Value(TRNR_ac_B.Merge_p);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_C1Stat_Ovrd' */

    /* SignalConversion generated from: '<S2>/TRNC_e_ILE_StatRaw' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* Outport: '<Root>/VeTRNR_e_ILEStatRaw' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_e_ILE_StatRaw'
     */
    (void)Rte_Write_VeTRNR_e_ILEStatRaw_Value
        (TRNR_ac_B.OutportBufferForTRNC_e_ILE_StatRaw);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_ILE_StatRaw' */

    /* SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat_Ovrd' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_DisbClutchStatPostProcess

    /* Outport: '<Root>/VeTRNR_e_ILEStat' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_e_ILE_Stat_Ovrd'
     */
    (void)Rte_Write_VeTRNR_e_ILEStat_Value
        (TRNR_ac_B.OutportBufferForTRNC_e_ILE_Stat_Ovrd);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat_Ovrd' */

    /* SignalConversion generated from: '<S2>/TRNC_e_ShftType' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_ShftTypeTLF'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCMActualEvenGear'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCMActualOddGear'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCMTargetEvenGear'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCM_ActiveEVGear'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCM_ActiveHybridGear'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCM_ActiveXNGear'
     *  SignalConversion generated from: '<S2>/TRNC_e_TCM_PassiveHybridGear'
     */
#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* Outport: '<Root>/VeTRNR_e_ShftType' incorporates:
     *  DataTypeConversion: '<S17>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_ShftType_Value(TRNR_ac_B.DataTypeConversion_l);

    /* Outport: '<Root>/VeTRNR_e_ShftTypeTLF' incorporates:
     *  DataTypeConversion: '<S102>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_ShftTypeTLF_Value(TRNR_ac_B.DataTypeConversion_b);

    /* Outport: '<Root>/VeTRNR_e_TCMActualEvenGear' incorporates:
     *  DataTypeConversion: '<S138>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_TCMActualEvenGear_Value
        (TRNR_ac_B.DataTypeConversion_j);

    /* Outport: '<Root>/VeTRNR_e_TCMActualOddGear' incorporates:
     *  DataTypeConversion: '<S140>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_TCMActualOddGear_Value
        (TRNR_ac_B.DataTypeConversion_lw);

    /* Outport: '<Root>/VeTRNR_e_TCMTargetEvenGear' incorporates:
     *  DataTypeConversion: '<S139>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_TCMTargetEvenGear_Value
        (TRNR_ac_B.DataTypeConversion_i);

    /* Outport: '<Root>/VeTRNR_e_TCM_ActiveEVGear' incorporates:
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveEVGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveEVGear_Value
        (TRNR_ac_B.VeTINR_e_TCM_ActiveEVGear);

    /* Outport: '<Root>/VeTRNR_e_TCM_ActiveHybridGear' incorporates:
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveHybridGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveHybridGear_Value
        (TRNR_ac_B.VeTINR_e_TCM_ActiveHybridGear);

    /* Outport: '<Root>/VeTRNR_e_TCM_ActiveXNGear' incorporates:
     *  Inport: '<S100>/VeTINR_e_TCM_ActiveXNGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveXNGear_Value
        (TRNR_ac_B.VeTINR_e_TCM_ActiveXNGear);

    /* Outport: '<Root>/VeTRNR_e_TCM_PassiveHybridGear' incorporates:
     *  Inport: '<S100>/VeTINR_e_TCM_PassiveHybridGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_PassiveHybridGear_Value
        (TRNR_ac_B.VeTINR_e_TCM_PassiveHybridGear);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_ShftType' */

    /* SignalConversion generated from: '<S2>/TRNC_e_TargetGear' */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* Outport: '<Root>/VeTRNR_e_TargetGear' incorporates:
     *  DataTypeConversion: '<S89>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_TargetGear_Value(TRNR_ac_B.DataTypeConversion_p);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_TargetGear' */

    /* SignalConversion: '<S2>/Signal Conversion' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_DisbClutchStatPostProcess

    /* SignalConversion: '<S2>/Signal Conversion' incorporates:
     *  SignalConversion generated from: '<S9>/TRNC_e_C2Stat_Ovrd'
     */
    rtb_SignalConversion_bc = TRNR_ac_B.OutportBufferForTRNC_e_C2Stat_Ovrd;

#endif

    /* End of SignalConversion: '<S2>/Signal Conversion' */

    /* SignalConversion generated from: '<S2>/TRNC_e_C1Stat' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_C2Stat'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* SignalConversion generated from: '<S2>/TRNC_e_C1Stat' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     */
    Rte_IrvWrite_TRNR_MedTEB2_TRNC_e_C1Stat_IRV(TRNR_ac_B.DataTypeConversion_o);

    /* SignalConversion generated from: '<S2>/TRNC_e_C2Stat' incorporates:
     *  DataTypeConversion: '<S14>/DataTypeConversion'
     */
    Rte_IrvWrite_TRNR_MedTEB2_TRNC_e_C2Stat_IRV(TRNR_ac_B.DataTypeConversion_n);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_C1Stat' */

    /* SignalConversion generated from: '<S2>/TRNC_e_C2Stat_Ovrd_Irv' */
#if Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_DisbClutchStatPostProcess

    /* Merge: '<Root>/TRNC_e_C2StatInternal_IRV_Merge' incorporates:
     *  SignalConversion: '<S2>/Signal Conversion'
     */
    Rte_IrvWrite_TRNR_MedTEB2_TRNC_C2_StatInternal_IRV(rtb_SignalConversion_bc);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_C2Stat_Ovrd_Irv' */

    /* SignalConversion generated from: '<S2>/TRNC_e_C3Stat' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* SignalConversion generated from: '<S2>/TRNC_e_C3Stat' incorporates:
     *  Merge: '<S36>/Merge'
     */
    Rte_IrvWrite_TRNR_MedTEB2_TRNC_e_C3Stat_IRV(TRNR_ac_B.Merge_p);

    /* SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat' incorporates:
     *  Switch: '<S32>/Switch'
     */
    Rte_IrvWrite_TRNR_MedTEB2_TRNC_e_ILE_Stat_IRV(TRNR_ac_B.Switch_c);

#endif

    /* End of SignalConversion generated from: '<S2>/TRNC_e_C3Stat' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */
}

/* Model step function for TID2 */
FUNC(void, TRNR_CODE) TRNR_MedTEB3(void) /* Explicit Task: MedTEB3 */
{

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeTRNR_e_TCMTgtMdReq tmpRead;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    TeTRGR_e_TransRangeState tmpRead_0;

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

    TeESSR_e_TCM_StartStopType tmpRead_1;

#endif

#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts

    boolean tmpRead_2;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    float32 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    float32 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    uint32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    uint32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeINVR_e_MtrInvrtrSt tmpRead_7;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeINVR_e_MtrInvrtrSt tmpRead_8;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    boolean tmpRead_9;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    boolean tmpRead_a;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

    TeOHSR_e_OptGear_SG tmpRead_b;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

    TeOHSR_e_OptGear_SG tmpRead_c;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

    boolean tmpRead_d;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd || Rte_SysCon_Variant_TRNR_LaunchCntrl

    boolean tmpRead_e;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    boolean tmpRead_f;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    TeTRNR_e_TCMGearStat tmpRead_g;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    uint16 tmpRead_h;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    float32 tmpRead_i[9];

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    float32 tmpRead_j[9];

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    float32 tmpRead_k[9];

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

    float32 tmpRead_l[6];

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax

    float32 tmpRead_m[6];

#endif

#if Rte_SysCon_Variant_TRNR_InertTrqActv

    TeINVR_e_EMModeReq_TCM tmpRead_n;

#endif

#if Rte_SysCon_Variant_TRNR_InertTrqActv

    boolean tmpRead_o;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd || Rte_SysCon_Variant_TRNR_TgtAndStrt

    boolean rtb_Comparison1_l4;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd || Rte_SysCon_Variant_TRNR_TgtAndStrt

    boolean rtb_Logical_j;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    boolean rtb_Comparison1_hh[4];

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    boolean rtb_Switch2_p4;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

    boolean rtb_LogicalOperator1;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_NtiMinMax || Rte_SysCon_Variant_TRNR_TgtAndStrt

    boolean rtb_TmpSignalConversionAtVeOHSR_b_EngDsr;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd || Rte_SysCon_Variant_TRNR_LaunchCntrl

    boolean rtb_Logical6;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    boolean rtb_Logical1;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_NtiMinMax

    boolean rtb_Logical3;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    boolean rtb_Logical12_i[3];

#endif

#if Rte_SysCon_Variant_TRNR_InertTrqActv || Rte_SysCon_Variant_TRNR_TgtAndStrt

    boolean rtb_TmpSignalConversionAtVeTCPR_b_ClchOf;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    float32 rtb_Switch1_iw;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd || Rte_SysCon_Variant_TRNR_NtiMinMax

    sint16 rtb_TmpSignalConversionAtVeTINR_i_MaxGea;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd || Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_NtiMinMax

    sint16 rtb_TmpSignalConversionAtVeTINR_i_MinGea;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

    boolean rtb_AND_au;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    float32 rtb_Merge[9];

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd || Rte_SysCon_Variant_TRNR_TgtAndStrt

    boolean rtb_AND_f;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    boolean rtb_AND_nb;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeHCCR_e_ClutchStatus rtb_TmpSignalConversionAtTRNC_e_C2StatIn;

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

    TeTRNR_e_TCMStrtTypReq rtb_Selector2_b;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeTRNR_e_TCMTgtMdReq rtb_VM_Conditional_Signal_TRNC_TCMStrtSt;

#endif

#if Rte_SysCon_Variant_TRNR_TgtAndStrt

    TeTRNR_e_TCMTgtMdReq rtb_Merge_b;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_TgtAndStrt

    TeOHSR_e_RngSel rtb_TmpSignalConversionAtVeOHSR_e_RngDsr;

#endif

#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeTRNR_e_TCMStrtTypReq rtb_VM_Conditional_Signal_TRNC_TCMStrt_i;

#endif

#if Rte_SysCon_Variant_TRNR_InertTrqActv || Rte_SysCon_Variant_TRNR_TgtAndStrt

    TeHSER_e_RngSt rtb_TmpSignalConversionAtVeHSER_e_RngStO;

#endif

#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts || Rte_SysCon_Variant_TRNR_LaunchCntrl

    TeOHSR_e_VLE_DriveStat rtb_TmpSignalConversionAtVeOHSR_e_ILESta;

#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd || Rte_SysCon_Variant_TRNR_InertTrqActv || Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_NtiMinMax

    TeTRNR_e_TCMTgtMdReq rtb_VM_Conditional_Signal_TRNC_TCM_Strat;

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax || Rte_SysCon_Variant_TRNR_TgtAndStrt

    TeESSR_e_EngStartStopSt rtb_TmpSignalConversionAtVeESSR_e_EngSta;

#endif

#if Rte_SysCon_Variant_TRNR_NtiMinMax || Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    TeHSER_e_RngEqnSel rtb_TmpSignalConversionAtVeHSER_e_RngEqn;

#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    sint32 i;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' incorporates:
     *  SubSystem: '<Root>/TRNR_MedTEB3'
     */
    /* SignalConversion generated from: '<S3>/VeTCPR_b_ClchOffloadCnfrmd' incorporates:
     *  SignalConversion generated from: '<S3>/VeHSER_e_RngSt'
     */
#if Rte_SysCon_Variant_TRNR_InertTrqActv || Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* SignalConversion generated from: '<S3>/VeTCPR_b_ClchOffloadCnfrmd' incorporates:
     *  Inport: '<Root>/VeTCPR_b_ClchOffloadCnfrmd'
     */
    (void)Rte_Read_VeTCPR_b_ClchOffloadCnfrmd_Value
        (&rtb_TmpSignalConversionAtVeTCPR_b_ClchOf);

    /* SignalConversion generated from: '<S3>/VeHSER_e_RngSt' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngSt'
     */
    (void)Rte_Read_VeHSER_e_RngSt_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngStO);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTCPR_b_ClchOffloadCnfrmd' */

    /* SignalConversion generated from: '<S3>/VeESSR_e_EngStartStopSt' */
#if Rte_SysCon_Variant_TRNR_NtiMinMax || Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* SignalConversion generated from: '<S3>/VeESSR_e_EngStartStopSt' incorporates:
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     */
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value
        (&rtb_TmpSignalConversionAtVeESSR_e_EngSta);

#endif

    /* End of SignalConversion generated from: '<S3>/VeESSR_e_EngStartStopSt' */

    /* SignalConversion generated from: '<S3>/VeOHSR_e_ILEState' */
#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts || Rte_SysCon_Variant_TRNR_LaunchCntrl

    /* SignalConversion generated from: '<S3>/VeOHSR_e_ILEState' incorporates:
     *  Inport: '<Root>/VeOHSR_e_ILEState'
     */
    (void)Rte_Read_VeOHSR_e_ILEState_Value
        (&rtb_TmpSignalConversionAtVeOHSR_e_ILESta);

#endif

    /* End of SignalConversion generated from: '<S3>/VeOHSR_e_ILEState' */

    /* SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel' */
#if Rte_SysCon_Variant_TRNR_NtiMinMax || Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    /* SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel' incorporates:
     *  Inport: '<Root>/VeHSER_e_RngEqnSel'
     */
    (void)Rte_Read_VeHSER_e_RngEqnSel_Value
        (&rtb_TmpSignalConversionAtVeHSER_e_RngEqn);

#endif

    /* End of SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel' */

    /* SignalConversion generated from: '<S3>/TRNC_e_C2StatInternal_Read' */
#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    /* SignalConversion generated from: '<S3>/TRNC_e_C2StatInternal_Read' incorporates:
     *  Merge: '<Root>/TRNC_e_C2StatInternal_IRV_Merge'
     */
    rtb_TmpSignalConversionAtTRNC_e_C2StatIn =
        Rte_IrvRead_TRNR_MedTEB3_TRNC_C2_StatInternal_IRV();

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_e_C2StatInternal_Read' */

    /* SignalConversion generated from: '<S3>/VeOHSR_b_EngDsrd' incorporates:
     *  SignalConversion generated from: '<S3>/VeOHSR_e_RngDsrd'
     */
#if Rte_SysCon_Variant_TRNR_LaunchCntrl || Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* SignalConversion generated from: '<S3>/VeOHSR_b_EngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_b_EngDsrd'
     */
    (void)Rte_Read_VeOHSR_b_EngDsrd_Value
        (&rtb_TmpSignalConversionAtVeOHSR_b_EngDsr);

    /* SignalConversion generated from: '<S3>/VeOHSR_e_RngDsrd' incorporates:
     *  Inport: '<Root>/VeOHSR_e_RngDsrd'
     */
    (void)Rte_Read_VeOHSR_e_RngDsrd_Value
        (&rtb_TmpSignalConversionAtVeOHSR_e_RngDsr);

#endif

    /* End of SignalConversion generated from: '<S3>/VeOHSR_b_EngDsrd' */

    /* SignalConversion generated from: '<S3>/VeTINR_i_MinGearAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/VeTINR_i_MaxGearAllwd'
     */
#if Rte_SysCon_Variant_TRNR_GearDsrd

    /* SignalConversion generated from: '<S3>/VeTINR_i_MinGearAllwd' incorporates:
     *  Inport: '<Root>/VeTINR_i_MinGearAllwd'
     */
    (void)Rte_Read_VeTINR_i_MinGearAllwd_Value
        (&rtb_TmpSignalConversionAtVeTINR_i_MinGea);

    /* SignalConversion generated from: '<S3>/VeTINR_i_MaxGearAllwd' incorporates:
     *  Inport: '<Root>/VeTINR_i_MaxGearAllwd'
     */
    (void)Rte_Read_VeTINR_i_MaxGearAllwd_Value
        (&rtb_TmpSignalConversionAtVeTINR_i_MaxGea);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTINR_i_MinGearAllwd' */

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/TRNC_Cntrls_Output'
     */
    /* Outputs for Atomic SubSystem: '<S382>/TRNC_TgtAndStrt' */
    /* DataTypeConversion: '<S381>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VeESSR_b_TCMOpenDisconnctCltch'
     *  Inport: '<Root>/VeESSR_e_TCM_StartStopType'
     *  Inport: '<Root>/VeSTRR_b_ImmedStop'
     */
#if Rte_SysCon_Variant_TRNR_TgtAndStrt

    (void)Rte_Read_VeESSR_e_TCM_StartStopType_Value(&tmpRead_1);
    (void)Rte_Read_VeSTRR_b_ImmedStop_Value(&rtb_Comparison1_l4);
    (void)Rte_Read_VeESSR_b_TCMOpenDisconnctCltch_Value(&rtb_Logical_j);

    /* Outputs for Atomic SubSystem: '<S386>/TRNC_TgtAndStrt' */
    /* Selector: '<S443>/Selector2' incorporates:
     *  Constant: '<S450>/Calib'
     *  DataTypeConversion: '<S443>/Data Type Conversion'
     *  Inport: '<Root>/VeESSR_b_TCMOpenDisconnctCltch'
     *  Inport: '<Root>/VeESSR_e_TCM_StartStopType'
     *  Inport: '<Root>/VeSTRR_b_ImmedStop'
     */
    rtb_Selector2_b = KaTRNR_e_TCMStrtTypReq[(tmpRead_1)];

    /* If: '<S444>/If' incorporates:
     *  Constant: '<S468>/Constant'
     *  Constant: '<S469>/Constant'
     *  Constant: '<S470>/Calib'
     *  Constant: '<S472>/Calib'
     *  DataTypeConversion: '<S465>/Data Type Conversion3'
     *  Logic: '<S444>/Logical1'
     *  Logic: '<S465>/Logical1'
     *  Logic: '<S465>/Logical2'
     *  Logic: '<S465>/Logical3'
     *  RelationalOperator: '<S465>/Comparison1'
     *  RelationalOperator: '<S465>/Comparison2'
     *  Selector: '<S465>/Selector'
     *  SignalConversion generated from: '<S3>/VeHSER_e_RngSt'
     */
    if (rtb_Logical_j || rtb_Comparison1_l4)
    {
        /* Outputs for IfAction SubSystem: '<S444>/TRNC_ImmedStop' incorporates:
         *  ActionPort: '<S464>/Action Port'
         */
        /* Merge: '<S444>/Merge' incorporates:
         *  Constant: '<S466>/Constant'
         *  SignalConversion generated from: '<S464>/TRNC_e_TCMTgtMdReq'
         */
        rtb_Merge_b = CeTRNR_e_SerEngOff;

        /* Switch: '<S444>/Switch' incorporates:
         *  Constant: '<S467>/Constant'
         *  SignalConversion generated from: '<S464>/TRNC_e_TCMLCCTgt'
         */
        TRNR_ac_B.Switch_f = CeTMMR_e_ClchUnlock;

        /* End of Outputs for SubSystem: '<S444>/TRNC_ImmedStop' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S444>/TRNC_TCMTgtMdReq' incorporates:
         *  ActionPort: '<S465>/Action Port'
         */
        /* Outputs for Enabled SubSystem: '<S465>/TRNC_TCMTgtMdReq' incorporates:
         *  EnablePort: '<S473>/Enable'
         */
        if ((KeTRNR_b_DisableClchOffloadCnfrmd) ||
                (((rtb_TmpSignalConversionAtVeTCPR_b_ClchOf &&
                   (KaTRNR_b_InhibitStratOptMd
                    [(rtb_TmpSignalConversionAtVeHSER_e_RngStO)])) || (((uint32)
                rtb_TmpSignalConversionAtVeOHSR_e_RngDsr) == CeOHSR_e_RngSel_M1))
                 || (((uint32)rtb_TmpSignalConversionAtVeOHSR_e_RngDsr) ==
                     CeOHSR_e_RngSel_G2)))
        {
            /* Switch: '<S473>/Switch' incorporates:
             *  Constant: '<S477>/Calib'
             *  DataTypeConversion: '<S473>/Data Type Conversion2'
             *  Inport: '<Root>/VeSTRR_b_AStrtUpShftTrg'
             *  Logic: '<S473>/Logical6'
             *  Selector: '<S443>/Selector2'
             *  Selector: '<S473>/Selector1'
             */
            if (!KaTRNR_b_TCMStrtType[(sint16)rtb_Selector2_b])
            {
                (void)Rte_Read_VeSTRR_b_AStrtUpShftTrg_Value(&rtb_AND_f);

                /* Switch: '<S473>/Switch' incorporates:
                 *  Constant: '<S474>/Constant'
                 *  Constant: '<S475>/Constant'
                 *  Constant: '<S476>/Calib'
                 *  Constant: '<S478>/Calib'
                 *  DataTypeConversion: '<S473>/Data Type Conversion1'
                 *  Inport: '<Root>/VeSTRR_b_AStrtUpShftTrg'
                 *  Logic: '<S473>/Logical1'
                 *  Logic: '<S473>/Logical2'
                 *  Logic: '<S473>/Logical4'
                 *  RelationalOperator: '<S473>/Comparison1'
                 *  RelationalOperator: '<S473>/Comparison2'
                 *  Selector: '<S473>/Selector'
                 *  Selector: '<S473>/Selector2'
                 *  SignalConversion generated from: '<S3>/VeOHSR_e_RngDsrd'
                 */
                TRNR_ac_B.Switch = KaTRNR_e_TCMTgtMd_Map[(((rtb_AND_f ||
                    (((((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta) !=
                       CeESSR_e_CoastDownSt) && (((uint32)
                    rtb_TmpSignalConversionAtVeESSR_e_EngSta) != CeESSR_e_EngOff))
                     && rtb_TmpSignalConversionAtVeOHSR_b_EngDsr)) ||
                    (rtb_TmpSignalConversionAtVeOHSR_b_EngDsr &&
                     (HaTRNR_b_TCMStrtTrgtMode[(sint16)rtb_Selector2_b]))) ? 1 :
                    0) + (rtb_TmpSignalConversionAtVeOHSR_e_RngDsr << 1U)];
            }
            else
            {
                /* Switch: '<S473>/Switch' incorporates:
                 *  Constant: '<S479>/Calib'
                 */
                TRNR_ac_B.Switch = KeTRNR_e_K0Close;
            }

            /* End of Switch: '<S473>/Switch' */
        }

        /* End of Outputs for SubSystem: '<S465>/TRNC_TCMTgtMdReq' */

        /* Merge: '<S444>/Merge' incorporates:
         *  SignalConversion generated from: '<S465>/TRNC_e_TCMTgtMdReq'
         *  Switch: '<S473>/Switch'
         */
        rtb_Merge_b = TRNR_ac_B.Switch;

        /* Switch: '<S444>/Switch' incorporates:
         *  Constant: '<S471>/Calib'
         *  Selector: '<S465>/Selector2'
         */
        TRNR_ac_B.Switch_f = KaTRNR_e_OHSRRngDsrdTCMLCCTgt
            [(rtb_TmpSignalConversionAtVeOHSR_e_RngDsr)];

        /* End of Outputs for SubSystem: '<S444>/TRNC_TCMTgtMdReq' */
    }

    /* End of If: '<S444>/If' */

    /* RelationalOperator: '<S443>/Comparison1' incorporates:
     *  Constant: '<S447>/Constant'
     */
    rtb_Comparison1_l4 = (((uint32)rtb_Merge_b) == CeTRNR_e_SerEngOff);

    /* Logic: '<S443>/Logical' incorporates:
     *  RelationalOperator: '<S443>/Comparison4'
     *  UnitDelay: '<S457>/Unit Delay'
     */
    rtb_Logical_j = (rtb_Comparison1_l4 && (TRNR_ac_DW.UnitDelay_DSTATE_h == 3));

    /* Outputs for Atomic SubSystem: '<S443>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S456>/EdgeFalling' */
    /* Logic: '<S458>/AND' incorporates:
     *  Logic: '<S458>/OR1'
     *  UnitDelay: '<S458>/Unit Delay'
     */
    rtb_AND_f = ((!rtb_Logical_j) && (TRNR_ac_DW.UnitDelay_DSTATE_dn));

    /* Update for UnitDelay: '<S458>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_dn = rtb_Logical_j;

    /* End of Outputs for SubSystem: '<S456>/EdgeFalling' */

    /* Switch: '<S456>/Switch' incorporates:
     *  Constant: '<S449>/Calib'
     *  Constant: '<S455>/Calib'
     *  Constant: '<S456>/Constant Value1'
     *  MinMax: '<S456>/Minimum'
     *  Sum: '<S456>/Summation'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    if (rtb_AND_f)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_j = KeTRNR_t_MaxTimeForTCMStopType;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_j = fmaxf(TRNR_ac_DW.UnitDelay_DSTATE_j -
            HeTRNR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S456>/Switch' */
    /* End of Outputs for SubSystem: '<S443>/Turn Off Delay Time' */

    /* Switch: '<S443>/Switch2' incorporates:
     *  Constant: '<S448>/Constant'
     *  Constant: '<S451>/Calib'
     *  Constant: '<S452>/Calib'
     *  Constant: '<S456>/Constant Value2'
     *  Logic: '<S443>/Logical1'
     *  Logic: '<S456>/AND'
     *  RelationalOperator: '<S443>/Comparison5'
     *  RelationalOperator: '<S456>/Greater  Than'
     *  SignalConversion generated from: '<S3>/VeESSR_e_EngStartStopSt'
     *  Switch: '<S443>/Switch'
     *  UnitDelay: '<S456>/Unit Delay'
     */
    if (KeTRNR_b_OvrdTCMStrtTypReq)
    {
        /* Switch: '<S443>/Switch2' incorporates:
         *  Constant: '<S454>/Calib'
         */
        TRNR_ac_B.Switch2_b = KeTRNR_e_TCMStrtTypReq;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S443>/Turn Off Delay Time' */
        if ((((KeTRNR_b_TCMStopTypeEna) && (((uint32)
                rtb_TmpSignalConversionAtVeESSR_e_EngSta) != CeESSR_e_EngOff)) &&
             rtb_Comparison1_l4) && (rtb_Logical_j ||
                (TRNR_ac_DW.UnitDelay_DSTATE_j > 0.0F)))
        {
            /* Switch: '<S443>/Switch' incorporates:
             *  Constant: '<S453>/Calib'
             *  Switch: '<S443>/Switch2'
             */
            TRNR_ac_B.Switch2_b = KeTRNR_e_TCMNormStopTypReq;
        }
        else
        {
            /* Switch: '<S443>/Switch2' incorporates:
             *  Selector: '<S443>/Selector2'
             *  Switch: '<S443>/Switch'
             */
            TRNR_ac_B.Switch2_b = rtb_Selector2_b;
        }

        /* End of Outputs for SubSystem: '<S443>/Turn Off Delay Time' */
    }

    /* End of Switch: '<S443>/Switch2' */

    /* Switch: '<S444>/Switch' incorporates:
     *  Constant: '<S460>/Calib'
     */
    if (KeTRNR_b_OvrdTCMLCCTgt)
    {
        /* Switch: '<S444>/Switch' incorporates:
         *  Constant: '<S462>/Calib'
         */
        TRNR_ac_B.Switch_f = KeTRNR_e_TCMLCCTgt;
    }

    /* End of Switch: '<S444>/Switch' */

    /* Switch: '<S444>/Switch1' incorporates:
     *  Constant: '<S461>/Calib'
     */
    if (KeTRNR_b_OvrdTCMTgtMdReq)
    {
        /* Switch: '<S444>/Switch1' incorporates:
         *  Constant: '<S463>/Calib'
         */
        TRNR_ac_B.DataTypeConversion = KeTRNR_e_TCMTgtMdReq;
    }
    else
    {
        /* Switch: '<S444>/Switch1' */
        TRNR_ac_B.DataTypeConversion = rtb_Merge_b;
    }

    /* End of Switch: '<S444>/Switch1' */

    /* Update for UnitDelay: '<S457>/Unit Delay' incorporates:
     *  DataTypeConversion: '<S443>/Data Type Conversion1'
     *  Merge: '<S444>/Merge'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_h = (sint16)rtb_Merge_b;

    /* End of Outputs for SubSystem: '<S386>/TRNC_TgtAndStrt' */
#endif

    /* End of DataTypeConversion: '<S381>/DataTypeConversion' */
    /* End of Outputs for SubSystem: '<S382>/TRNC_TgtAndStrt' */

    /* SignalConversion generated from: '<S382>/TRNC_TCMStrtStpMd' */
#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd && Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd' incorporates:
     *  Merge: '<S444>/Merge'
     */
    rtb_VM_Conditional_Signal_TRNC_TCMStrtSt = rtb_Merge_b;

    /* VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd' incorporates:
     *  Selector: '<S443>/Selector2'
     */
    rtb_VM_Conditional_Signal_TRNC_TCMStrt_i = rtb_Selector2_b;

#elif !Rte_SysCon_Variant_TRNR_TgtAndStrt && Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    /* VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd' incorporates:
     *  SignalConversion generated from: '<S382>/TRNC_TCMStrtStpMd'
     */
    rtb_VM_Conditional_Signal_TRNC_TCMStrtSt = CeTRNR_e_SerEngOff;

    /* VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd' incorporates:
     *  SignalConversion generated from: '<S382>/TRNC_TCMStrtStpMd'
     */
    rtb_VM_Conditional_Signal_TRNC_TCMStrt_i = CeTRNR_e_NormalStrt;

#endif

    /* End of SignalConversion generated from: '<S382>/TRNC_TCMStrtStpMd' */
#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    /* Outputs for Atomic SubSystem: '<S382>/TRNC_TCMStrtStpMd' */
    /* Outputs for Atomic SubSystem: '<S385>/TRNC_TCMStrtStpMd' */
    for (i = 0; i < 4; i++)
    {
        /* RelationalOperator: '<S393>/Comparison1' incorporates:
         *  Constant: '<S399>/Calib'
         *  VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd'
         */
        rtb_Comparison1_hh[i] = (rtb_VM_Conditional_Signal_TRNC_TCMStrt_i ==
            KaTRNR_e_TCMMdActvStrtTypReq[(i)]);
    }

    /* Logic: '<S393>/Logical8' */
    rtb_Comparison1_l4 = rtb_Comparison1_hh[0];
    for (i = 0; i < 3; i++)
    {
        rtb_Comparison1_l4 = (rtb_Comparison1_l4 || (rtb_Comparison1_hh[i + 1]));
    }

    /* End of Outputs for SubSystem: '<S385>/TRNC_TCMStrtStpMd' */

    /* Inport: '<Root>/VeESSR_b_EngProdTrq_TCM' */
    (void)Rte_Read_VeESSR_b_EngProdTrq_TCM_Value(&tmpRead_9);

    /* Inport: '<Root>/VeCSLR_n_Clch2_SlipSpeed' */
    (void)Rte_Read_VeCSLR_n_Clch2_SlipSpeed_Value(&tmpRead_4);

    /* Inport: '<Root>/VeCSLR_n_Clch1_SlipSpeed' */
    (void)Rte_Read_VeCSLR_n_Clch1_SlipSpeed_Value(&rtb_Switch1_iw);

    /* Outputs for Atomic SubSystem: '<S385>/TRNC_TCMStrtStpMd' */
    /* Logic: '<S393>/Logical5' incorporates:
     *  Constant: '<S394>/Constant'
     *  Logic: '<S393>/Logical8'
     *  RelationalOperator: '<S393>/Comparison2'
     *  VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd'
     */
    rtb_Comparison1_l4 = ((((uint32)rtb_VM_Conditional_Signal_TRNC_TCMStrtSt) ==
                           CeTRNR_e_PrllEngOn) && rtb_Comparison1_l4);

    /* Logic: '<S393>/Logical' */
    VeTRNC_b_PrlEngOn_And_ProdTrq = (tmpRead_9 && rtb_Comparison1_l4);

    /* Switch: '<S408>/Switch1' incorporates:
     *  Constant: '<S428>/Calib'
     */
    if (KeTRNR_b_Clch2Sel_4_OKToClose)
    {
        /* Switch: '<S408>/Switch1' */
        rtb_Switch1_iw = tmpRead_4;
    }

    /* End of Switch: '<S408>/Switch1' */
    /* End of Outputs for SubSystem: '<S385>/TRNC_TCMStrtStpMd' */

    /* Inport: '<Root>/VeTTQR_M_LoadTorqFront_Opt' */
    (void)Rte_Read_VeTTQR_M_LoadTorqFront_Opt_Value(&tmpRead_3);

    /* Outputs for Atomic SubSystem: '<S385>/TRNC_TCMStrtStpMd' */
    /* Outputs for Atomic SubSystem: '<S408>/DeadBand' */
    /* Switch: '<S424>/Switch1' incorporates:
     *  Constant: '<S424>/Constant Value'
     *  Constant: '<S434>/Calib'
     *  Constant: '<S435>/Calib'
     *  RelationalOperator: '<S424>/Greater  Than'
     *  RelationalOperator: '<S424>/Greater  Than1'
     *  Sum: '<S424>/Subtraction'
     *  Switch: '<S424>/Switch2'
     */
    if (rtb_Switch1_iw >= KeTRNR_n_Clch2SlipDeadbandUpLim)
    {
        rtb_Switch1_iw -= KeTRNR_n_Clch2SlipDeadbandUpLim;
    }
    else if (rtb_Switch1_iw <= KeTRNR_n_Clch2SlipDeadbandLowLim)
    {
        /* Switch: '<S424>/Switch2' incorporates:
         *  Constant: '<S434>/Calib'
         *  Sum: '<S424>/Subtraction1'
         */
        rtb_Switch1_iw -= KeTRNR_n_Clch2SlipDeadbandLowLim;
    }
    else
    {
        rtb_Switch1_iw = 0.0F;
    }

    /* End of Switch: '<S424>/Switch1' */
    /* End of Outputs for SubSystem: '<S408>/DeadBand' */

    /* RelationalOperator: '<S408>/Comparison1' incorporates:
     *  Constant: '<S408>/Constant Value'
     *  Product: '<S408>/Product'
     */
    rtb_Logical_j = ((tmpRead_3 * rtb_Switch1_iw) >= 0.0F);

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S438>/EdgeRising' */
    /* Logic: '<S440>/AND' incorporates:
     *  Logic: '<S440>/OR1'
     *  UnitDelay: '<S440>/Unit Delay'
     */
    rtb_AND_f = (rtb_Logical_j && (!TRNR_ac_DW.UnitDelay_DSTATE_c));

    /* Update for UnitDelay: '<S440>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_c = rtb_Logical_j;

    /* End of Outputs for SubSystem: '<S438>/EdgeRising' */

    /* Switch: '<S438>/Switch1' incorporates:
     *  Constant: '<S427>/Calib'
     *  Constant: '<S437>/Calib'
     *  Constant: '<S438>/Constant Value1'
     *  Logic: '<S438>/OR'
     *  Logic: '<S438>/OR1'
     *  MinMax: '<S438>/Minimum'
     *  Sum: '<S438>/Summation'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    if ((!rtb_Logical_j) || rtb_AND_f)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_a = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_a = fminf(KeTRNR_t_MinTmSlipCondActive,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_a);
    }

    /* End of Switch: '<S438>/Switch1' */
    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time' */
    /* End of Outputs for SubSystem: '<S385>/TRNC_TCMStrtStpMd' */

    /* Inport: '<Root>/VeSTRR_g_AStpInhbtRsn2' */
    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn2_Value(&tmpRead_6);

    /* Inport: '<Root>/VeSTRR_g_AStpInhbtRsn' */
    (void)Rte_Read_VeSTRR_g_AStpInhbtRsn_Value(&tmpRead_5);

    /* Outputs for Atomic SubSystem: '<S385>/TRNC_TCMStrtStpMd' */
    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time' */
    /* Logic: '<S438>/AND' incorporates:
     *  Constant: '<S437>/Calib'
     *  RelationalOperator: '<S438>/Greater  Than'
     *  UnitDelay: '<S438>/Unit Delay'
     */
    VeTRNC_b_ClchCloseSlipBased = (rtb_Logical_j &&
        (TRNR_ac_DW.UnitDelay_DSTATE_a >= KeTRNR_t_MinTmSlipCondActive));

    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time' */

    /* S-Function (sfix_bitop): '<S408>/Bitwise Logical Operator6' incorporates:
     *  Constant: '<S432>/Calib'
     */
    VeTRNR_g_EngStrtRsn1Masked = tmpRead_5 & KeTRNR_g_EngStrtRsn1_MaskVal;

    /* S-Function (sfix_bitop): '<S408>/Bitwise Logical Operator1' incorporates:
     *  Constant: '<S433>/Calib'
     */
    VeTRNR_g_EngStrtRsn2Masked = tmpRead_6 & KeTRNR_g_EngStrtRsn2_MaskVal;

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S439>/EdgeRising' */
    /* UnitDelay: '<S404>/Unit Delay' incorporates:
     *  UnitDelay: '<S441>/Unit Delay'
     */
    rtb_Logical_j = TRNR_ac_DW.UnitDelay_DSTATE_om;

    /* Update for UnitDelay: '<S441>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_om = VeTRNC_b_PrlEngOn_And_ProdTrq;

    /* Switch: '<S439>/Switch1' incorporates:
     *  Constant: '<S427>/Calib'
     *  Constant: '<S436>/Calib'
     *  Constant: '<S439>/Constant Value1'
     *  Logic: '<S439>/OR'
     *  Logic: '<S439>/OR1'
     *  Logic: '<S441>/AND'
     *  Logic: '<S441>/OR1'
     *  MinMax: '<S439>/Minimum'
     *  Sum: '<S439>/Summation'
     *  UnitDelay: '<S439>/Unit Delay'
     */
    if ((!VeTRNC_b_PrlEngOn_And_ProdTrq) || ((VeTRNC_b_PrlEngOn_And_ProdTrq) &&
            (!rtb_Logical_j)))
    {
        TRNR_ac_DW.UnitDelay_DSTATE_p = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_p = fminf(KeTRNR_t_MaxWaitPrlEngOnProdTrq,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_p);
    }

    /* End of Switch: '<S439>/Switch1' */
    /* End of Outputs for SubSystem: '<S439>/EdgeRising' */
    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time1' */
    /* End of Outputs for SubSystem: '<S385>/TRNC_TCMStrtStpMd' */

    /* Inport: '<Root>/VeSRAR_b_MtrBZeroTrqActv' */
    (void)Rte_Read_VeSRAR_b_MtrBZeroTrqActv_Value(&rtb_Switch2_p4);

    /* Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value(&tmpRead_8);

    /* Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt' */
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value(&tmpRead_7);

    /* Inport: '<Root>/VeTINR_e_TCMActMode' */
    (void)Rte_Read_VeTINR_e_TCMActMode_Value(&tmpRead);

    /* Outputs for Atomic SubSystem: '<S385>/TRNC_TCMStrtStpMd' */
    /* Switch: '<S408>/Switch2' incorporates:
     *  Constant: '<S429>/Calib'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     */
    if (KeTRNR_b_MtrBStat_4_OKtoClose)
    {
        tmpRead_7 = tmpRead_8;
    }

    /* End of Switch: '<S408>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S408>/Turn On Delay Time1' */
    /* Logic: '<S393>/Logical1' incorporates:
     *  Constant: '<S408>/Constant Value2'
     *  Constant: '<S408>/Constant Value3'
     *  Constant: '<S426>/Constant'
     *  Constant: '<S430>/Calib'
     *  Constant: '<S431>/Calib'
     *  Constant: '<S436>/Calib'
     *  Logic: '<S408>/Logical'
     *  Logic: '<S408>/Logical5'
     *  Logic: '<S439>/AND'
     *  RelationalOperator: '<S408>/Comparison'
     *  RelationalOperator: '<S408>/Comparison2'
     *  RelationalOperator: '<S408>/Comparison4'
     *  RelationalOperator: '<S439>/Greater  Than'
     *  UnitDelay: '<S439>/Unit Delay'
     */
    VeTRNC_b_SysGoEngProdTrq = ((((((((VeTRNC_b_ClchCloseSlipBased) ||
        (VeTRNR_g_EngStrtRsn1Masked >= 1U)) || (VeTRNR_g_EngStrtRsn2Masked >= 1U))
        || (KeTRNR_b_OvrdClchCloseOk)) || ((VeTRNC_b_PrlEngOn_And_ProdTrq) &&
        (TRNR_ac_DW.UnitDelay_DSTATE_p >= KeTRNR_t_MaxWaitPrlEngOnProdTrq))) ||
        (((uint32)tmpRead_7) == CeINVR_e_InverterFaulted)) ||
        ((KeTRNR_b_MtrBZeroTrqActvRel) && rtb_Switch2_p4)) &&
        (VeTRNC_b_PrlEngOn_And_ProdTrq));

    /* End of Outputs for SubSystem: '<S408>/Turn On Delay Time1' */

    /* Selector: '<S406>/Selector2' incorporates:
     *  Constant: '<S413>/Calib'
     *  DataTypeConversion: '<S406>/Data Type Conversion1'
     *  Inport: '<Root>/VeTINR_e_TCMActMode'
     */
    VeTRNC_b_HasActCheck = KaTRNR_b_HasActStatCheck[(tmpRead)];

    /* Selector: '<S406>/Selector' incorporates:
     *  Constant: '<S412>/Calib'
     *  DataTypeConversion: '<S406>/Data Type Conversion2'
     *  SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel'
     */
    VeTRNC_b_RgnEqnCheck = KaTRNR_b_EnblRgnEqn
        [(rtb_TmpSignalConversionAtVeHSER_e_RngEqn)];

    /* Selector: '<S406>/Selector1' incorporates:
     *  Constant: '<S411>/Calib'
     *  DataTypeConversion: '<S406>/Data Type Conversion'
     */
    VeTRNC_b_C2Check = KaTRNR_b_C2StatCheck
        [(rtb_TmpSignalConversionAtTRNC_e_C2StatIn)];

    /* Switch: '<S406>/Switch2' incorporates:
     *  Constant: '<S414>/Calib'
     */
    if (KeTRNR_b_UseHasActMode)
    {
        /* Switch: '<S406>/Switch2' incorporates:
         *  Logic: '<S406>/Logical3'
         */
        rtb_Switch2_p4 = ((VeTRNC_b_HasActCheck) && (VeTRNC_b_RgnEqnCheck));
    }
    else
    {
        /* Switch: '<S406>/Switch2' incorporates:
         *  Logic: '<S406>/Logical2'
         */
        rtb_Switch2_p4 = ((VeTRNC_b_RgnEqnCheck) && (VeTRNC_b_C2Check));
    }

    /* End of Switch: '<S406>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S407>/Stop Watch Reset Enabled2' */
    /* Switch: '<S421>/Switch2' incorporates:
     *  Constant: '<S415>/Constant'
     *  Constant: '<S421>/Constant Value2'
     *  Logic: '<S407>/Logical4'
     *  Logic: '<S407>/Logical5'
     *  Logic: '<S407>/Logical6'
     *  RelationalOperator: '<S393>/Comparison2'
     *  RelationalOperator: '<S407>/Comparison2'
     *  Switch: '<S421>/Switch1'
     *  UnitDelay: '<S393>/Unit Delay'
     *  UnitDelay: '<S421>/Unit Delay'
     *  VariantMerge generated from: '<S382>/TRNC_TCMStrtStpMd'
     */
    if (((!TRNR_ac_DW.UnitDelay_DSTATE_be) || rtb_Switch2_p4) || (((uint32)
            rtb_VM_Conditional_Signal_TRNC_TCMStrtSt) == CeTRNR_e_SerEngOn))
    {
        TRNR_ac_DW.UnitDelay_DSTATE_e = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S421>/Unit Delay' incorporates:
         *  Constant: '<S417>/Calib'
         *  Sum: '<S421>/Subtraction'
         *  Switch: '<S421>/Switch2'
         */
        TRNR_ac_DW.UnitDelay_DSTATE_e += HeTRNR_t_MedTEB_dT;
    }

    /* End of Switch: '<S421>/Switch2' */
    /* End of Outputs for SubSystem: '<S407>/Stop Watch Reset Enabled2' */

    /* Outputs for Atomic SubSystem: '<S407>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S422>/EdgeRising' */
    /* Logic: '<S423>/AND' incorporates:
     *  Logic: '<S423>/OR1'
     *  UnitDelay: '<S423>/Unit Delay'
     */
    rtb_Logical_j = (rtb_Switch2_p4 && (!TRNR_ac_DW.UnitDelay_DSTATE_jp));

    /* Update for UnitDelay: '<S423>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_jp = rtb_Switch2_p4;

    /* End of Outputs for SubSystem: '<S422>/EdgeRising' */

    /* Switch: '<S422>/Switch1' incorporates:
     *  Constant: '<S417>/Calib'
     *  Constant: '<S420>/Calib'
     *  Constant: '<S422>/Constant Value1'
     *  Logic: '<S422>/OR'
     *  Logic: '<S422>/OR1'
     *  MinMax: '<S422>/Minimum'
     *  Sum: '<S422>/Summation'
     *  UnitDelay: '<S422>/Unit Delay'
     */
    if ((!rtb_Switch2_p4) || rtb_Logical_j)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_l = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_l = fminf(KeTRNR_t_MinTmM2OrG2Active,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_l);
    }

    /* End of Switch: '<S422>/Switch1' */

    /* Logic: '<S407>/Logical7' incorporates:
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  Constant: '<S420>/Calib'
     *  Logic: '<S407>/Logical2'
     *  Logic: '<S422>/AND'
     *  RelationalOperator: '<S407>/Comparison1'
     *  RelationalOperator: '<S422>/Greater  Than'
     *  UnitDelay: '<S421>/Unit Delay'
     *  UnitDelay: '<S422>/Unit Delay'
     */
    VeTRNC_b_SysGoToInactive = (((KeTRNR_b_ClchNotCloseTmOutFunctActv) &&
        (TRNR_ac_DW.UnitDelay_DSTATE_e >= KeTRNR_t_MaxWaitTmForRgnEqnChg)) ||
        (rtb_Switch2_p4 && (TRNR_ac_DW.UnitDelay_DSTATE_l >=
                            KeTRNR_t_MinTmM2OrG2Active)));

    /* End of Outputs for SubSystem: '<S407>/Turn On Delay Time' */

    /* Logic: '<S393>/Logical3' incorporates:
     *  Logic: '<S393>/Logical4'
     *  Switch: '<S393>/Switch4'
     */
    rtb_Switch2_p4 = !VeTRNC_b_SysGoToInactive;

    /* Logic: '<S393>/Logical2' incorporates:
     *  Logic: '<S393>/Logical3'
     */
    VeTRNC_b_SysGoActv = (rtb_Comparison1_l4 && rtb_Switch2_p4);

    /* Outputs for Atomic SubSystem: '<S393>/Signal Latch On With Reset' */
    /* Logic: '<S404>/OR1' incorporates:
     *  Logic: '<S393>/Logical6'
     *  Logic: '<S404>/OR'
     *  UnitDelay: '<S404>/Unit Delay'
     */
    TRNR_ac_DW.UnitDelay_DSTATE_bj = ((VeTRNC_b_SysGoEngProdTrq) ||
        (rtb_Comparison1_l4 && (TRNR_ac_DW.UnitDelay_DSTATE_bj)));

    /* End of Outputs for SubSystem: '<S393>/Signal Latch On With Reset' */

    /* Switch: '<S393>/Switch4' incorporates:
     *  Constant: '<S402>/Calib'
     *  Logic: '<S393>/Logical7'
     *  Switch: '<S393>/Switch1'
     *  Switch: '<S393>/Switch2'
     */
    if (KeTRNR_b_OvrdTCMStrtStpMd)
    {
        /* Switch: '<S393>/Switch4' incorporates:
         *  Constant: '<S403>/Calib'
         */
        TRNR_ac_B.Switch4_b = KeTRNR_e_TCMStrtStpMd;
    }
    else if (rtb_Switch2_p4 && (TRNR_ac_DW.UnitDelay_DSTATE_bj))
    {
        /* Switch: '<S393>/Switch2' incorporates:
         *  Constant: '<S397>/Constant'
         *  Switch: '<S393>/Switch4'
         */
        TRNR_ac_B.Switch4_b = CeTRNR_e_TCMStrtStpMd_EngProdTrq;
    }
    else if (VeTRNC_b_SysGoActv)
    {
        /* Switch: '<S393>/Switch1' incorporates:
         *  Constant: '<S395>/Constant'
         *  Switch: '<S393>/Switch2'
         *  Switch: '<S393>/Switch4'
         */
        TRNR_ac_B.Switch4_b = CeTRNR_e_TCMStrtStpMd_actv;
    }
    else
    {
        /* Switch: '<S393>/Switch4' incorporates:
         *  Constant: '<S396>/Constant'
         *  Switch: '<S393>/Switch1'
         *  Switch: '<S393>/Switch2'
         */
        TRNR_ac_B.Switch4_b = CeTRNR_e_TCMStrtStpMd_inactv;
    }

    /* Switch: '<S393>/Switch5' incorporates:
     *  Constant: '<S401>/Calib'
     *  Inport: '<Root>/VeSRAR_b_K0AsyncCloseActv'
     */
    if (KeTRNR_b_OvrdK0AsyncCloseActv)
    {
        /* Switch: '<S393>/Switch5' incorporates:
         *  Constant: '<S400>/Calib'
         */
        TRNR_ac_B.Switch5_n = KeTRNR_b_K0AsyncCloseActv;
    }
    else
    {
        (void)Rte_Read_VeSRAR_b_K0AsyncCloseActv_Value(&tmpRead_a);

        /* Switch: '<S393>/Switch5' incorporates:
         *  Constant: '<S409>/Constant'
         *  Constant: '<S410>/Calib'
         *  Inport: '<Root>/VeSRAR_b_K0AsyncCloseActv'
         *  Logic: '<S405>/Logical9'
         *  RelationalOperator: '<S405>/Comparison5'
         */
        TRNR_ac_B.Switch5_n = ((((KeTRNR_b_K0AsyncCloseActvRel) && (((uint32)
            rtb_TmpSignalConversionAtTRNC_e_C2StatIn) != CeHCCR_e_ClLocked)) &&
                                (VeTRNC_b_PrlEngOn_And_ProdTrq)) && tmpRead_a);
    }

    /* End of Switch: '<S393>/Switch5' */

    /* Update for UnitDelay: '<S393>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_be = VeTRNC_b_PrlEngOn_And_ProdTrq;

    /* End of Outputs for SubSystem: '<S385>/TRNC_TCMStrtStpMd' */
    /* End of Outputs for SubSystem: '<S382>/TRNC_TCMStrtStpMd' */
#endif

#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts

    /* Outputs for Atomic SubSystem: '<S382>/TRNC_IdlSpdActvSts' */
    /* Outputs for Atomic SubSystem: '<S384>/TRNC_IdlSpdActvSts' */
    /* Switch: '<S387>/Switch3' incorporates:
     *  Constant: '<S390>/Calib'
     *  Constant: '<S391>/Calib'
     *  Inport: '<Root>/VeOHSR_b_SuperCreepActive'
     *  Logic: '<S387>/Logical Operator'
     *  Switch: '<S387>/Switch1'
     */
    if (KeTRNR_b_OvrdPwrTrnIdlSpdActvSts)
    {
        /* Switch: '<S387>/Switch3' incorporates:
         *  Constant: '<S392>/Calib'
         */
        TRNR_ac_B.Switch3_h = KeTRNR_b_PwrTrnIdlSpdActvSts;
    }
    else if (!HeTRNR_b_Enbl_LaunchSpdCntrl)
    {
        /* Switch: '<S387>/Switch3' incorporates:
         *  Constant: '<S388>/Constant'
         *  RelationalOperator: '<S387>/Comparison5'
         *  SignalConversion generated from: '<S3>/VeOHSR_e_ILEState'
         *  Switch: '<S387>/Switch1'
         */
        TRNR_ac_B.Switch3_h = (((uint32)rtb_TmpSignalConversionAtVeOHSR_e_ILESta)
                               != CeOHSR_e_LaunchState);
    }
    else
    {
        (void)Rte_Read_VeOHSR_b_SuperCreepActive_Value(&tmpRead_2);

        /* Switch: '<S387>/Switch3' incorporates:
         *  Constant: '<S388>/Constant'
         *  Constant: '<S389>/Constant'
         *  Inport: '<Root>/VeOHSR_b_SuperCreepActive'
         *  Logic: '<S387>/Logical'
         *  Logic: '<S387>/Logical2'
         *  RelationalOperator: '<S387>/Comparison1'
         *  RelationalOperator: '<S387>/Comparison5'
         *  Switch: '<S387>/Switch1'
         */
        TRNR_ac_B.Switch3_h = (((((uint32)
            rtb_TmpSignalConversionAtVeOHSR_e_ILESta) != CeOHSR_e_LaunchState) &&
                                (((uint32)
            rtb_TmpSignalConversionAtVeOHSR_e_ILESta) != CeOHSR_e_LaunchSpdCntrl))
                               && (!tmpRead_2));
    }

    /* End of Switch: '<S387>/Switch3' */
    /* End of Outputs for SubSystem: '<S384>/TRNC_IdlSpdActvSts' */
    /* End of Outputs for SubSystem: '<S382>/TRNC_IdlSpdActvSts' */
#endif

#if Rte_SysCon_Variant_TRNR_GearDsrd

    /* Outputs for Atomic SubSystem: '<S383>/TRNC_GearDsrd' */
    /* Inport: '<Root>/VeOHSR_e_SGrDsrd_EngOn' */
    (void)Rte_Read_VeOHSR_e_SGrDsrd_EngOn_Value(&tmpRead_c);

    /* Inport: '<Root>/VeOHSR_e_SGrDsrd' */
    (void)Rte_Read_VeOHSR_e_SGrDsrd_Value(&tmpRead_b);

    /* Outputs for Atomic SubSystem: '<S480>/TRNC_GearDsrd' */
    /* Switch: '<S484>/Switch' incorporates:
     *  Constant: '<S504>/Calib'
     */
    if (KeTRNR_b_UseSGDsrdOn_inEV)
    {
        /* Switch: '<S508>/Switch1' incorporates:
         *  DataTypeConversion: '<S484>/Data Type Conversion2'
         *  Inport: '<Root>/VeOHSR_e_SGrDsrd_EngOn'
         */
        VeTRNC_i_GearDsrdRaw = tmpRead_c;
    }
    else
    {
        /* Switch: '<S508>/Switch1' incorporates:
         *  DataTypeConversion: '<S484>/Data Type Conversion2'
         *  Inport: '<Root>/VeOHSR_e_SGrDsrd'
         */
        VeTRNC_i_GearDsrdRaw = tmpRead_b;
    }

    /* End of Switch: '<S484>/Switch' */

    /* If: '<S484>/If' incorporates:
     *  Constant: '<S511>/Calib'
     *  Switch: '<S509>/Switch'
     */
    if (VeTRNC_i_GearDsrdRaw == 1)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear1' incorporates:
         *  ActionPort: '<S493>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S493>/Constant Value'
         *  SignalConversion generated from: '<S493>/Out1'
         */
        VeTRNC_i_GearDsrd = 1;

        /* End of Outputs for SubSystem: '<S484>/Gear1' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 2)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear2' incorporates:
         *  ActionPort: '<S494>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S494>/Constant Value'
         *  SignalConversion generated from: '<S494>/Out1'
         */
        VeTRNC_i_GearDsrd = 2;

        /* End of Outputs for SubSystem: '<S484>/Gear2' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 3)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear3' incorporates:
         *  ActionPort: '<S495>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S495>/Constant Value'
         *  SignalConversion generated from: '<S495>/Out1'
         */
        VeTRNC_i_GearDsrd = 3;

        /* End of Outputs for SubSystem: '<S484>/Gear3' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 4)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear4' incorporates:
         *  ActionPort: '<S496>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S496>/Constant Value'
         *  SignalConversion generated from: '<S496>/Out1'
         */
        VeTRNC_i_GearDsrd = 4;

        /* End of Outputs for SubSystem: '<S484>/Gear4' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 5)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear5' incorporates:
         *  ActionPort: '<S497>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S497>/Constant Value'
         *  SignalConversion generated from: '<S497>/Out1'
         */
        VeTRNC_i_GearDsrd = 5;

        /* End of Outputs for SubSystem: '<S484>/Gear5' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 6)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear6' incorporates:
         *  ActionPort: '<S498>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S498>/Constant Value'
         *  SignalConversion generated from: '<S498>/Out1'
         */
        VeTRNC_i_GearDsrd = 6;

        /* End of Outputs for SubSystem: '<S484>/Gear6' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 7)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear7' incorporates:
         *  ActionPort: '<S499>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S499>/Constant Value'
         *  SignalConversion generated from: '<S499>/Out1'
         */
        VeTRNC_i_GearDsrd = 7;

        /* End of Outputs for SubSystem: '<S484>/Gear7' */
    }
    else if (VeTRNC_i_GearDsrdRaw == 8)
    {
        /* Outputs for IfAction SubSystem: '<S484>/Gear8' incorporates:
         *  ActionPort: '<S500>/Action Port'
         */
        /* Merge: '<S484>/Merge' incorporates:
         *  Constant: '<S500>/Constant Value'
         *  SignalConversion generated from: '<S500>/Out1'
         */
        VeTRNC_i_GearDsrd = 8;

        /* End of Outputs for SubSystem: '<S484>/Gear8' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S484>/SNA_Reverse' incorporates:
         *  ActionPort: '<S509>/Action Port'
         */
        if (KeTRNR_b_UseMinGrInR)
        {
            /* Switch: '<S509>/Switch' incorporates:
             *  Merge: '<S484>/Merge'
             */
            VeTRNC_i_GearDsrd = rtb_TmpSignalConversionAtVeTINR_i_MinGea;
        }
        else
        {
            /* Merge: '<S484>/Merge' incorporates:
             *  Constant: '<S512>/Calib'
             *  Switch: '<S509>/Switch'
             */
            VeTRNC_i_GearDsrd = KeTRNR_i_GearDsrdSNAVal;
        }

        /* End of Outputs for SubSystem: '<S484>/SNA_Reverse' */
    }

    /* End of If: '<S484>/If' */

    /* RelationalOperator: '<S484>/Comparison4' incorporates:
     *  Constant: '<S505>/Calib'
     */
    VeTRNC_b_GearDsrdSNA = (VeTRNC_i_GearDsrd == KeTRNR_i_GearDsrdSNAVal);

    /* End of Outputs for SubSystem: '<S480>/TRNC_GearDsrd' */

    /* Inport: '<Root>/VeOSMR_b_MaxGearOffsetActv' */
    (void)Rte_Read_VeOSMR_b_MaxGearOffsetActv_Value(&rtb_LogicalOperator1);

    /* Outputs for Atomic SubSystem: '<S480>/TRNC_GearDsrd' */
    /* Switch: '<S484>/Switch3' */
    if (rtb_LogicalOperator1)
    {
        /* Switch: '<S484>/Switch3' incorporates:
         *  Constant: '<S484>/Constant Value1'
         *  Sum: '<S484>/Sum'
         */
        rtb_TmpSignalConversionAtVeTINR_i_MaxGea++;
    }

    /* End of Switch: '<S484>/Switch3' */
    /* End of Outputs for SubSystem: '<S480>/TRNC_GearDsrd' */

    /* Inport: '<Root>/VeTRGR_b_ManualMode' */
    (void)Rte_Read_VeTRGR_b_ManualMode_Value(&rtb_AND_au);

    /* Inport: '<Root>/VeOSMR_b_EnblGearSlctn' */
    (void)Rte_Read_VeOSMR_b_EnblGearSlctn_Value(&tmpRead_d);

    /* Outputs for Atomic SubSystem: '<S480>/TRNC_GearDsrd' */
    /* Outputs for Atomic SubSystem: '<S484>/Limiter' */
    /* Switch: '<S508>/Switch1' incorporates:
     *  RelationalOperator: '<S508>/Relational Operator'
     */
    if (rtb_TmpSignalConversionAtVeTINR_i_MaxGea < VeTRNC_i_GearDsrd)
    {
        /* Switch: '<S508>/Switch1' */
        VeTRNC_i_GearDsrdRaw = rtb_TmpSignalConversionAtVeTINR_i_MaxGea;
    }
    else
    {
        /* Switch: '<S508>/Switch1' */
        VeTRNC_i_GearDsrdRaw = VeTRNC_i_GearDsrd;
    }

    /* End of Switch: '<S508>/Switch1' */

    /* Switch: '<S508>/Switch' incorporates:
     *  RelationalOperator: '<S508>/Relational Operator1'
     */
    if (VeTRNC_i_GearDsrdRaw <= rtb_TmpSignalConversionAtVeTINR_i_MinGea)
    {
        /* Switch: '<S508>/Switch' */
        VeTRNC_i_GearDsrdRaw = rtb_TmpSignalConversionAtVeTINR_i_MinGea;
    }

    /* End of Switch: '<S508>/Switch' */
    /* End of Outputs for SubSystem: '<S484>/Limiter' */

    /* Switch: '<S502>/Switch1' */
    if (!VeTRNC_b_GearDsrdSNA)
    {
        /* Switch: '<S502>/Switch1' */
        VeTRNC_i_GearDsrd = VeTRNC_i_GearDsrdRaw;
    }

    /* End of Switch: '<S502>/Switch1' */

    /* Logic: '<S484>/Logical Operator1' */
    rtb_LogicalOperator1 = (tmpRead_d || rtb_AND_au);

    /* Outputs for Atomic SubSystem: '<S484>/Turn On Delay Time' */
    /* Outputs for Atomic SubSystem: '<S510>/EdgeRising' */
    /* Logic: '<S513>/AND' incorporates:
     *  Logic: '<S513>/OR1'
     *  UnitDelay: '<S513>/Unit Delay'
     */
    rtb_AND_au = (rtb_LogicalOperator1 && (!TRNR_ac_DW.UnitDelay_DSTATE_bt));

    /* Update for UnitDelay: '<S513>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_bt = rtb_LogicalOperator1;

    /* End of Outputs for SubSystem: '<S510>/EdgeRising' */

    /* Switch: '<S510>/Switch1' incorporates:
     *  Constant: '<S501>/Calib'
     *  Constant: '<S507>/Calib'
     *  Constant: '<S510>/Constant Value1'
     *  Logic: '<S510>/OR'
     *  Logic: '<S510>/OR1'
     *  MinMax: '<S510>/Minimum'
     *  Sum: '<S510>/Summation'
     *  UnitDelay: '<S510>/Unit Delay'
     */
    if ((!rtb_LogicalOperator1) || rtb_AND_au)
    {
        TRNR_ac_DW.UnitDelay_DSTATE_o = 0.0F;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE_o = fminf(KeTRNR_t_EnblGearDbnc,
            HeTRNR_t_MedTEB_dT + TRNR_ac_DW.UnitDelay_DSTATE_o);
    }

    /* End of Switch: '<S510>/Switch1' */
    /* End of Outputs for SubSystem: '<S484>/Turn On Delay Time' */

    /* Switch: '<S484>/Switch4' incorporates:
     *  Constant: '<S503>/Calib'
     *  Inport: '<Root>/VeOHSR_b_DsrdRngOnAllwd'
     *  Inport: '<Root>/VeOHSR_b_DsrdRngStAllwd'
     */
    if (KeTRNR_b_OvrdHCPGearDsrd)
    {
        /* Switch: '<S484>/Switch4' incorporates:
         *  Constant: '<S506>/Calib'
         */
        TRNR_ac_B.Switch4_c = KeTRNR_i_HCPGearDsrd;
    }
    else
    {
        (void)Rte_Read_VeOHSR_b_DsrdRngOnAllwd_Value(&tmpRead_e);
        (void)Rte_Read_VeOHSR_b_DsrdRngStAllwd_Value(&rtb_Logical6);

        /* Switch: '<S484>/Switch2' incorporates:
         *  Constant: '<S504>/Calib'
         *  Inport: '<Root>/VeOHSR_b_DsrdRngOnAllwd'
         *  Inport: '<Root>/VeOHSR_b_DsrdRngStAllwd'
         */
        if (KeTRNR_b_UseSGDsrdOn_inEV)
        {
            rtb_Logical6 = tmpRead_e;
        }

        /* End of Switch: '<S484>/Switch2' */

        /* Outputs for Atomic SubSystem: '<S484>/Turn On Delay Time' */
        /* Switch: '<S484>/Switch1' incorporates:
         *  Constant: '<S507>/Calib'
         *  Logic: '<S484>/Logical Operator'
         *  Logic: '<S510>/AND'
         *  RelationalOperator: '<S510>/Greater  Than'
         *  UnitDelay: '<S510>/Unit Delay'
         */
        if ((rtb_LogicalOperator1 && (TRNR_ac_DW.UnitDelay_DSTATE_o >=
                KeTRNR_t_EnblGearDbnc)) && rtb_Logical6)
        {
            /* Switch: '<S484>/Switch4' */
            TRNR_ac_B.Switch4_c = VeTRNC_i_GearDsrd;
        }
        else
        {
            /* Switch: '<S484>/Switch4' incorporates:
             *  Constant: '<S484>/Constant Value'
             */
            TRNR_ac_B.Switch4_c = 0;
        }

        /* End of Switch: '<S484>/Switch1' */
        /* End of Outputs for SubSystem: '<S484>/Turn On Delay Time' */
    }

    /* End of Switch: '<S484>/Switch4' */
    /* End of Outputs for SubSystem: '<S480>/TRNC_GearDsrd' */
    /* End of Outputs for SubSystem: '<S383>/TRNC_GearDsrd' */
#endif

#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    /* Outputs for Atomic SubSystem: '<S383>/TRNC_LaunchCntrl' */
    /* Inport: '<Root>/VeTRGR_e_VldtdTransRngSt' */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value(&tmpRead_0);

    /* Outputs for Atomic SubSystem: '<S482>/TRNC_LaunchCntrl' */
    /* MATLAB Function: '<S524>/MATLAB Function' */
    /* MATLAB Function 'TRNR_MedTEB3/TRNC_Cntrls_Output/TRNC_TCM_Strat_Opt/TRNC_LaunchCntrl/TRNC_LaunchCntrl/GetBitFrom16BitRegister/MATLAB Function': '<S534>:1' */
    /* '<S534>:1:2' */
    /* '<S534>:1:3' */
    tmpRead_e = true;

    /* End of Outputs for SubSystem: '<S482>/TRNC_LaunchCntrl' */

    /* Inport: '<Root>/VeOSMR_d_FnctnEnblReg' */
    /* '<S534>:1:4' */
    /* '<S534>:1:5' */
    /* '<S534>:1:7' */
    (void)Rte_Read_VeOSMR_d_FnctnEnblReg_Value(&tmpRead_h);

    /* Outputs for Atomic SubSystem: '<S482>/TRNC_LaunchCntrl' */
    /* MATLAB Function: '<S524>/MATLAB Function' */
    if ((((uint32)tmpRead_h) & 32768U) == 0U)
    {
        /* '<S534>:1:8' */
        /* '<S534>:1:9' */
        tmpRead_e = false;
    }

    /* End of Outputs for SubSystem: '<S482>/TRNC_LaunchCntrl' */

    /* Inport: '<Root>/VeBRKR_b_BrkMinTrqIntrvntn' */
    (void)Rte_Read_VeBRKR_b_BrkMinTrqIntrvntn_Value(&tmpRead_f);

    /* Inport: '<Root>/VeBRKR_b_BrkMaxTrqIntrvntn' */
    (void)Rte_Read_VeBRKR_b_BrkMaxTrqIntrvntn_Value(&rtb_AND_nb);

    /* Outputs for Atomic SubSystem: '<S482>/TRNC_LaunchCntrl' */
    /* Logic: '<S532>/Logical6' */
    rtb_Logical6 = (rtb_AND_nb || tmpRead_f);

    /* Outputs for Atomic SubSystem: '<S532>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S555>/EdgeFalling1' */
    /* Logic: '<S556>/OR1' incorporates:
     *  Logic: '<S555>/AND'
     */
    tmpRead_f = !rtb_Logical6;

    /* Logic: '<S556>/AND' incorporates:
     *  Logic: '<S556>/OR1'
     *  UnitDelay: '<S556>/Unit Delay'
     */
    rtb_AND_nb = (tmpRead_f && (TRNR_ac_DW.UnitDelay_DSTATE_a2));

    /* Update for UnitDelay: '<S556>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_a2 = rtb_Logical6;

    /* End of Outputs for SubSystem: '<S555>/EdgeFalling1' */

    /* Switch: '<S555>/Switch' incorporates:
     *  Constant: '<S549>/Calib'
     *  Constant: '<S550>/Calib'
     *  Constant: '<S555>/Constant Value1'
     *  MinMax: '<S555>/Minimum'
     *  Sum: '<S555>/Summation'
     *  UnitDelay: '<S555>/Unit Delay'
     */
    if (rtb_AND_nb)
    {
        TRNR_ac_DW.UnitDelay_DSTATE = KeTRNR_t_ESC_Event_Delay;
    }
    else
    {
        TRNR_ac_DW.UnitDelay_DSTATE = fmaxf(TRNR_ac_DW.UnitDelay_DSTATE -
            HeTRNR_t_MedTEB_dT, 0.0F);
    }

    /* End of Switch: '<S555>/Switch' */
    /* End of Outputs for SubSystem: '<S532>/Turn Off Delay Time' */
    /* End of Outputs for SubSystem: '<S482>/TRNC_LaunchCntrl' */

    /* Inport: '<Root>/VeOSMR_b_DisableLaunch' */
    (void)Rte_Read_VeOSMR_b_DisableLaunch_Value(&rtb_Logical3);

    /* Inport: '<Root>/VeRGNR_b_RegenRampOutReqActv' */
    (void)Rte_Read_VeRGNR_b_RegenRampOutReqActv_Value(&rtb_Logical1);

    /* Outputs for Atomic SubSystem: '<S482>/TRNC_LaunchCntrl' */
    /* Outputs for Atomic SubSystem: '<S532>/Turn Off Delay Time' */
    /* Logic: '<S532>/Logical5' incorporates:
     *  Constant: '<S555>/Constant Value2'
     *  Logic: '<S555>/AND'
     *  RelationalOperator: '<S555>/Greater  Than'
     *  UnitDelay: '<S555>/Unit Delay'
     */
    rtb_Logical6 = (tmpRead_f && (TRNR_ac_DW.UnitDelay_DSTATE <= 0.0F));

    /* End of Outputs for SubSystem: '<S532>/Turn Off Delay Time' */

    /* Logic: '<S532>/Logical1' */
    rtb_Logical1 = !rtb_Logical1;

    /* Logic: '<S532>/Logical3' */
    rtb_Logical3 = !rtb_Logical3;
    for (i = 0; i < 3; i++)
    {
        /* Logic: '<S532>/Logical12' incorporates:
         *  Constant: '<S540>/Calib'
         *  Constant: '<S541>/Calib'
         *  Constant: '<S542>/Calib'
         *  Constant: '<S543>/Calib'
         *  Constant: '<S544>/Calib'
         *  Constant: '<S545>/Calib'
         *  DataTypeConversion: '<S532>/Data Type Conversion'
         *  Logic: '<S532>/Logical13'
         *  Logic: '<S532>/Logical14'
         *  Logic: '<S532>/Logical2'
         *  RelationalOperator: '<S532>/Comparison7'
         *  RelationalOperator: '<S532>/Comparison8'
         *  Selector: '<S532>/Selector1'
         *  SignalConversion generated from: '<S3>/VeOHSR_e_ILEState'
         *  SignalConversion generated from: '<S3>/VeOHSR_e_RngDsrd'
         */
        rtb_Logical12_i[i] = ((((((rtb_TmpSignalConversionAtVeOHSR_b_EngDsr ==
            HaTRNR_b_EngStForLaunch[(i)]) &&
            (rtb_TmpSignalConversionAtVeOHSR_e_RngDsr ==
             HaTRNR_e_RngStForLaunch[(i)])) && (HaTRNR_b_ILEStateForLaunch[(i *
            4) + ((sint32)rtb_TmpSignalConversionAtVeOHSR_e_ILESta)])) &&
                                (rtb_Logical6 ||
            (HaTRNR_b_DsblBrkCheckForLaunch[(i)]))) && (rtb_Logical1 ||
                                (HaTRNR_b_DsblRgnRmpCheckForLaunch[(i)]))) &&
                              (rtb_Logical3 || (HaTRNR_b_DsblLaunchPrvntn[(i)])));
    }

    /* Logic: '<S532>/Logical15' incorporates:
     *  Logic: '<S532>/Logical12'
     */
    VeTRNC_b_OHSRLaunchDsrd = rtb_Logical12_i[0];
    for (i = 0; i < 2; i++)
    {
        VeTRNC_b_OHSRLaunchDsrd = ((VeTRNC_b_OHSRLaunchDsrd) ||
            (rtb_Logical12_i[i + 1]));
    }

    /* End of Logic: '<S532>/Logical15' */

    /* MultiPortSwitch: '<S522>/Multiport Switch' incorporates:
     *  Constant: '<S525>/Calib'
     *  DataTypeConversion: '<S522>/Data Type Conversion'
     *  Inport: '<Root>/VeOSMR_e_TargetGear'
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     *  Selector: '<S522>/Selector'
     */
    switch (KaTRNR_i_PRNDL_Gr_Src[(tmpRead_0)])
    {
      case 1:
        /* MultiPortSwitch: '<S522>/Multiport Switch' incorporates:
         *  Constant: '<S522>/Constant Value'
         */
        rtb_TmpSignalConversionAtVeTINR_i_MinGea = 0;
        break;

      case 2:
        /* MultiPortSwitch: '<S522>/Multiport Switch' incorporates:
         *  Constant: '<S522>/Constant Value1'
         */
        rtb_TmpSignalConversionAtVeTINR_i_MinGea = 1;
        break;

      default:
        (void)Rte_Read_VeOSMR_e_TargetGear_Value(&tmpRead_g);

        /* MultiPortSwitch: '<S522>/Multiport Switch' incorporates:
         *  DataTypeConversion: '<S522>/Data Type Conversion1'
         *  Inport: '<Root>/VeOSMR_e_TargetGear'
         */
        rtb_TmpSignalConversionAtVeTINR_i_MinGea = (sint16)tmpRead_g;
        break;
    }

    /* End of MultiPortSwitch: '<S522>/Multiport Switch' */
    /* End of Outputs for SubSystem: '<S482>/TRNC_LaunchCntrl' */

    /* Inport: '<Root>/VaSCOR_n_MtrBSpdDsrdN' */
    (void)Rte_Read_VaSCOR_n_MtrBSpdDsrdN_Value(rtb_Merge);

    /* Inport: '<Root>/VaSCOR_n_InputSpeedDsrdN' */
    (void)Rte_Read_VaSCOR_n_InputSpeedDsrdN_Value(tmpRead_k);

    /* Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMA' */
    (void)Rte_Read_VaSCOR_n_InputSpeedDsrdMA_Value(tmpRead_j);

    /* Inport: '<Root>/VaSCOR_n_InputSpeedDsrdMB' */
    (void)Rte_Read_VaSCOR_n_InputSpeedDsrdMB_Value(tmpRead_i);

    /* Outputs for Atomic SubSystem: '<S482>/TRNC_LaunchCntrl' */
    /* Outputs for Enabled SubSystem: '<S522>/TRNC_SpdSeq' incorporates:
     *  EnablePort: '<S533>/Enable'
     */
    /* MATLAB Function: '<S524>/MATLAB Function' incorporates:
     *  Inport: '<S533>/InputSpeedDsrdMA'
     *  Inport: '<S533>/InputSpeedDsrdMB'
     *  Inport: '<S533>/InputSpeedDsrdN'
     *  Inport: '<S533>/MtrBSpdDsrdN'
     *  SignalConversion: '<S522>/Signal Conversion'
     *  SignalConversion: '<S522>/Signal Conversion1'
     *  SignalConversion: '<S522>/Signal Conversion2'
     *  SignalConversion: '<S522>/Signal Conversion3'
     */
    if (tmpRead_e)
    {
        for (i = 0; i < 9; i++)
        {
            TRNR_ac_B.InputSpeedDsrdMB[i] = tmpRead_i[i];
            TRNR_ac_B.InputSpeedDsrdMA[i] = tmpRead_j[i];
            TRNR_ac_B.InputSpeedDsrdN[i] = tmpRead_k[i];
            TRNR_ac_B.MtrBSpdDsrdN[i] = rtb_Merge[i];
        }
    }

    /* End of Outputs for SubSystem: '<S522>/TRNC_SpdSeq' */

    /* If: '<S532>/If1' incorporates:
     *  Constant: '<S546>/Calib'
     *  Constant: '<S547>/Calib'
     *  Constant: '<S548>/Calib'
     */
    if (rtb_Logical12_i[0])
    {
        /* Outputs for IfAction SubSystem: '<S532>/LaunchSpdSrc1' incorporates:
         *  ActionPort: '<S551>/Action Port'
         */
        TRNR_ac_LaunchSpdSrc1(HeTRNR_i_LaunchSpdSrc1, (&(VeTRNC_i_LaunchSpdSrc)));

        /* End of Outputs for SubSystem: '<S532>/LaunchSpdSrc1' */
    }
    else if (rtb_Logical12_i[1])
    {
        /* Outputs for IfAction SubSystem: '<S532>/LaunchSpdSrc2' incorporates:
         *  ActionPort: '<S552>/Action Port'
         */
        TRNR_ac_LaunchSpdSrc1(HeTRNR_i_LaunchSpdSrc2, (&(VeTRNC_i_LaunchSpdSrc)));

        /* End of Outputs for SubSystem: '<S532>/LaunchSpdSrc2' */
    }
    else if (rtb_Logical12_i[2])
    {
        /* Outputs for IfAction SubSystem: '<S532>/LaunchSpdSrc3' incorporates:
         *  ActionPort: '<S553>/Action Port'
         */
        TRNR_ac_LaunchSpdSrc1(HeTRNR_i_LaunchSpdSrc3, (&(VeTRNC_i_LaunchSpdSrc)));

        /* End of Outputs for SubSystem: '<S532>/LaunchSpdSrc3' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S532>/LaunchSpdSrcZero' incorporates:
         *  ActionPort: '<S554>/Action Port'
         */
        /* Merge: '<S532>/Merge1' incorporates:
         *  Constant: '<S554>/Constant Value2'
         *  SignalConversion generated from: '<S554>/TRNC_i_LaunchSpdSrc'
         */
        VeTRNC_i_LaunchSpdSrc = 0;

        /* End of Outputs for SubSystem: '<S532>/LaunchSpdSrcZero' */
    }

    /* End of If: '<S532>/If1' */

    /* If: '<S522>/If' */
    if (VeTRNC_b_OHSRLaunchDsrd)
    {
        /* Outputs for IfAction SubSystem: '<S522>/LaunchActive' incorporates:
         *  ActionPort: '<S530>/Action Port'
         */
        /* Merge: '<S522>/Merge2' incorporates:
         *  Constant: '<S530>/TRUE Constant'
         *  SignalConversion generated from: '<S530>/NiMinLaunchEna'
         */
        TRNR_ac_B.Switch2 = true;

        /* If: '<S530>/If' incorporates:
         *  Constant: '<S530>/Constant Value1'
         *  Constant: '<S530>/Constant Value2'
         *  Constant: '<S530>/Constant Value3'
         *  Constant: '<S530>/Constant Value4'
         *  RelationalOperator: '<S530>/Comparison1'
         *  RelationalOperator: '<S530>/Comparison2'
         *  RelationalOperator: '<S530>/Comparison3'
         *  RelationalOperator: '<S530>/Comparison4'
         */
        if (VeTRNC_i_LaunchSpdSrc == 1)
        {
            /* Outputs for IfAction SubSystem: '<S530>/LaunchSpd1' incorporates:
             *  ActionPort: '<S535>/Action Port'
             */
            TRNR_ac_LaunchSpd1(TRNR_ac_B.InputSpeedDsrdMB, rtb_Merge);

            /* End of Outputs for SubSystem: '<S530>/LaunchSpd1' */
        }
        else if (VeTRNC_i_LaunchSpdSrc == 2)
        {
            /* Outputs for IfAction SubSystem: '<S530>/LaunchSpd2' incorporates:
             *  ActionPort: '<S536>/Action Port'
             */
            TRNR_ac_LaunchSpd1(TRNR_ac_B.InputSpeedDsrdMA, rtb_Merge);

            /* End of Outputs for SubSystem: '<S530>/LaunchSpd2' */
        }
        else if (VeTRNC_i_LaunchSpdSrc == 3)
        {
            /* Outputs for IfAction SubSystem: '<S530>/LaunchSpd3' incorporates:
             *  ActionPort: '<S537>/Action Port'
             */
            TRNR_ac_LaunchSpd1(TRNR_ac_B.InputSpeedDsrdN, rtb_Merge);

            /* End of Outputs for SubSystem: '<S530>/LaunchSpd3' */
        }
        else if (VeTRNC_i_LaunchSpdSrc == 4)
        {
            /* Outputs for IfAction SubSystem: '<S530>/LaunchSpd4' incorporates:
             *  ActionPort: '<S538>/Action Port'
             */
            TRNR_ac_LaunchSpd1(TRNR_ac_B.MtrBSpdDsrdN, rtb_Merge);

            /* End of Outputs for SubSystem: '<S530>/LaunchSpd4' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S530>/SetToZero' incorporates:
             *  ActionPort: '<S539>/Action Port'
             */
            for (i = 0; i < 9; i++)
            {
                /* Merge: '<S530>/Merge' incorporates:
                 *  SignalConversion generated from: '<S539>/NiMinLaunch'
                 */
                rtb_Merge[i] = 0.0F;
            }

            /* End of Outputs for SubSystem: '<S530>/SetToZero' */
        }

        /* End of If: '<S530>/If' */

        /* Switch: '<S522>/Switch3' incorporates:
         *  Selector: '<S530>/Selector'
         */
        TRNR_ac_B.Switch3 = rtb_Merge[rtb_TmpSignalConversionAtVeTINR_i_MinGea];

        /* End of Outputs for SubSystem: '<S522>/LaunchActive' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S522>/Otherwise' incorporates:
         *  ActionPort: '<S531>/Action Port'
         */
        /* Merge: '<S522>/Merge2' incorporates:
         *  Constant: '<S531>/FALSE Constant'
         *  SignalConversion generated from: '<S531>/NiMinLaunchEna'
         */
        TRNR_ac_B.Switch2 = false;

        /* Switch: '<S522>/Switch3' incorporates:
         *  Constant: '<S531>/Constant Value'
         *  SignalConversion generated from: '<S531>/NiMinLaunch'
         */
        TRNR_ac_B.Switch3 = 0.0F;

        /* End of Outputs for SubSystem: '<S522>/Otherwise' */
    }

    /* End of If: '<S522>/If' */

    /* Switch: '<S522>/Switch2' incorporates:
     *  Constant: '<S528>/Calib'
     */
    if (KeTRNR_b_OvrdNiMinLaunchEna)
    {
        /* Switch: '<S522>/Switch2' incorporates:
         *  Constant: '<S526>/Calib'
         */
        TRNR_ac_B.Switch2 = KeTRNR_b_NiMinLaunchEna;
    }

    /* End of Switch: '<S522>/Switch2' */

    /* Switch: '<S522>/Switch3' incorporates:
     *  Constant: '<S527>/Calib'
     */
    if (KeTRNR_b_OvrdNiMinLaunch)
    {
        /* Switch: '<S522>/Switch3' incorporates:
         *  Constant: '<S529>/Calib'
         */
        TRNR_ac_B.Switch3 = KeTRNR_n_NiMinLaunch;
    }

    /* End of Switch: '<S522>/Switch3' */
    /* End of Outputs for SubSystem: '<S482>/TRNC_LaunchCntrl' */
    /* End of Outputs for SubSystem: '<S383>/TRNC_LaunchCntrl' */
#endif

    /* SignalConversion generated from: '<S379>/TRNC_TCM_Strat_Opt' */
#if Rte_SysCon_Variant_TRNR_NtiMinMax && Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* VariantMerge generated from: '<S379>/TRNC_TCM_Strat_Opt' incorporates:
     *  Switch: '<S444>/Switch1'
     */
    rtb_VM_Conditional_Signal_TRNC_TCM_Strat = TRNR_ac_B.DataTypeConversion;

#elif (!Rte_SysCon_Variant_TRNR_NtiMinMax && Rte_SysCon_Variant_TRNR_GearDsrd) || (!Rte_SysCon_Variant_TRNR_NtiMinMax && Rte_SysCon_Variant_TRNR_InertTrqActv) || (!Rte_SysCon_Variant_TRNR_NtiMinMax && Rte_SysCon_Variant_TRNR_LaunchCntrl) || (!Rte_SysCon_Variant_TRNR_TgtAndStrt && Rte_SysCon_Variant_TRNR_GearDsrd) || (!Rte_SysCon_Variant_TRNR_TgtAndStrt && Rte_SysCon_Variant_TRNR_InertTrqActv) || (!Rte_SysCon_Variant_TRNR_TgtAndStrt && Rte_SysCon_Variant_TRNR_LaunchCntrl) || (!Rte_SysCon_Variant_TRNR_TgtAndStrt && Rte_SysCon_Variant_TRNR_NtiMinMax)

    /* VariantMerge generated from: '<S379>/TRNC_TCM_Strat_Opt' incorporates:
     *  SignalConversion generated from: '<S379>/TRNC_TCM_Strat_Opt'
     */
    rtb_VM_Conditional_Signal_TRNC_TCM_Strat = CeTRNR_e_SerEngOff;

#endif

    /* End of SignalConversion generated from: '<S379>/TRNC_TCM_Strat_Opt' */
#if Rte_SysCon_Variant_TRNR_NtiMinMax

    /* Outputs for Atomic SubSystem: '<S383>/TRNC_NtiMinMax' */
    /* Inport: '<Root>/VaOHSR_n_NtiMinPerStgcRngSt' */
    (void)Rte_Read_VaOHSR_n_NtiMinPerStgcRngSt_Value(tmpRead_m);

    /* Inport: '<Root>/VaOHSR_n_NtiMaxPerStgcRngSt' */
    (void)Rte_Read_VaOHSR_n_NtiMaxPerStgcRngSt_Value(tmpRead_l);

    /* Outputs for Atomic SubSystem: '<S483>/TRNC_NtiMinMax' */
    /* RelationalOperator: '<S557>/Comparison1' incorporates:
     *  Constant: '<S559>/Constant'
     *  Constant: '<S560>/Calib'
     *  DataTypeConversion: '<S557>/Data Type Conversion2'
     *  RelationalOperator: '<S557>/Comparison4'
     *  Selector: '<S557>/Selector5'
     *  SignalConversion generated from: '<S3>/VeESSR_e_EngStartStopSt'
     *  SignalConversion generated from: '<S3>/VeHSER_e_RngEqnSel'
     *  VariantMerge generated from: '<S379>/TRNC_TCM_Strat_Opt'
     */
    rtb_TmpSignalConversionAtVeOHSR_b_EngDsr = (HaTRNR_e_Nti_TCMTgtMdOverRevMap
        [(((sint32)((((uint32)rtb_TmpSignalConversionAtVeESSR_e_EngSta) ==
                     CeESSR_e_EngOff) ? 1 : 0)) * 10) + ((sint32)
        rtb_TmpSignalConversionAtVeHSER_e_RngEqn)] ==
        rtb_VM_Conditional_Signal_TRNC_TCM_Strat);

    /* Outputs for Atomic SubSystem: '<S557>/EdgeFalling' */
    /* Logic: '<S558>/AND' incorporates:
     *  Logic: '<S558>/OR1'
     *  UnitDelay: '<S558>/Unit Delay'
     */
    rtb_Logical3 = ((!rtb_TmpSignalConversionAtVeOHSR_b_EngDsr) &&
                    (TRNR_ac_DW.UnitDelay_DSTATE_eh));

    /* Update for UnitDelay: '<S558>/Unit Delay' */
    TRNR_ac_DW.UnitDelay_DSTATE_eh = rtb_TmpSignalConversionAtVeOHSR_b_EngDsr;

    /* End of Outputs for SubSystem: '<S557>/EdgeFalling' */

    /* Selector: '<S557>/Selector2' incorporates:
     *  Constant: '<S561>/Calib'
     *  RelationalOperator: '<S557>/Comparison1'
     *  Selector: '<S557>/Selector3'
     *  VariantMerge generated from: '<S379>/TRNC_TCM_Strat_Opt'
     */
    rtb_TmpSignalConversionAtVeTINR_i_MinGea = KaTRNR_i_Nti_TCMTgtMdReqMap
        [(rtb_VM_Conditional_Signal_TRNC_TCM_Strat)];

    /* Selector: '<S557>/Selector3' incorporates:
     *  SignalConversion: '<S557>/Signal Conversion'
     */
    VeTRNC_n_NtiMax = tmpRead_l[rtb_TmpSignalConversionAtVeTINR_i_MinGea];

    /* Switch: '<S557>/Switch1' */
    if (rtb_Logical3)
    {
        /* Switch: '<S557>/Switch1' incorporates:
         *  UnitDelay: '<S557>/Unit Delay1'
         */
        TRNR_ac_DW.UnitDelay_DSTATE_f = TRNR_ac_DW.UnitDelay1_DSTATE;
    }

    /* End of Switch: '<S557>/Switch1' */

    /* Selector: '<S557>/Selector1' incorporates:
     *  Constant: '<S561>/Calib'
     *  Selector: '<S557>/Selector2'
     *  SignalConversion: '<S557>/Signal Conversion1'
     */
    VeTRNC_n_NtiMin = tmpRead_m[rtb_TmpSignalConversionAtVeTINR_i_MinGea];

    /* Switch: '<S557>/Switch4' incorporates:
     *  Constant: '<S562>/Calib'
     */
    if (KeTRNR_b_OvrdNtiMax)
    {
        /* Switch: '<S557>/Switch4' incorporates:
         *  Constant: '<S565>/Calib'
         */
        TRNR_ac_B.Switch4 = KeTRNR_n_NtiMax;
    }
    else
    {
        /* Switch: '<S557>/Switch4' */
        TRNR_ac_B.Switch4 = VeTRNC_n_NtiMax;
    }

    /* End of Switch: '<S557>/Switch4' */

    /* Switch: '<S557>/Switch5' incorporates:
     *  Constant: '<S564>/Calib'
     */
    if (KeTRNR_b_OvrdNtiMin)
    {
        /* Switch: '<S557>/Switch5' incorporates:
         *  Constant: '<S567>/Calib'
         */
        TRNR_ac_B.Switch5 = KeTRNR_n_NtiMin;
    }
    else
    {
        /* Switch: '<S557>/Switch5' */
        TRNR_ac_B.Switch5 = VeTRNC_n_NtiMin;
    }

    /* End of Switch: '<S557>/Switch5' */

    /* Switch: '<S557>/Switch6' incorporates:
     *  Constant: '<S563>/Calib'
     *  Selector: '<S557>/Selector4'
     *  Switch: '<S557>/Switch'
     */
    if (KeTRNR_b_OvrdNtiMaxATRR)
    {
        /* Switch: '<S557>/Switch6' incorporates:
         *  Constant: '<S566>/Calib'
         */
        TRNR_ac_B.Switch6 = KeTRNR_n_NtiMaxATRR;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeOHSR_b_EngDsr)
        {
            /* Selector: '<S557>/Selector4' incorporates:
             *  Constant: '<S561>/Calib'
             *  Selector: '<S557>/Selector2'
             *  Switch: '<S557>/Switch'
             */
            rtb_TmpSignalConversionAtVeTINR_i_MaxGea =
                rtb_TmpSignalConversionAtVeTINR_i_MinGea;
        }
        else
        {
            /* Selector: '<S557>/Selector4' incorporates:
             *  Switch: '<S557>/Switch'
             */
            rtb_TmpSignalConversionAtVeTINR_i_MaxGea =
                TRNR_ac_DW.UnitDelay_DSTATE_f;
        }

        /* Switch: '<S557>/Switch6' incorporates:
         *  MinMax: '<S557>/MinMax1'
         *  Selector: '<S557>/Selector4'
         *  SignalConversion: '<S557>/Signal Conversion'
         */
        TRNR_ac_B.Switch6 = fmaxf(VeTRNC_n_NtiMax,
            tmpRead_l[rtb_TmpSignalConversionAtVeTINR_i_MaxGea]);
    }

    /* End of Switch: '<S557>/Switch6' */

    /* Update for UnitDelay: '<S557>/Unit Delay1' incorporates:
     *  Constant: '<S561>/Calib'
     *  Selector: '<S557>/Selector2'
     */
    TRNR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeTINR_i_MinGea;

    /* End of Outputs for SubSystem: '<S483>/TRNC_NtiMinMax' */
    /* End of Outputs for SubSystem: '<S383>/TRNC_NtiMinMax' */
#endif

    /* SignalConversion generated from: '<S3>/TRNC_b_InertiaTrqActv' */
#if Rte_SysCon_Variant_TRNR_InertTrqActv

    /* Outputs for Atomic SubSystem: '<S383>/TRNC_InertTrqActv' */
    /* Outputs for Atomic SubSystem: '<S481>/TRNC_InertTrqActv' */
    /* Switch: '<S514>/Switch7' incorporates:
     *  Constant: '<S521>/Calib'
     *  Inport: '<Root>/VeINVR_e_MtrB_TCMEMMdReq'
     *  Inport: '<Root>/VeTMMR_b_NtrlClchStrtActv'
     */
    if (KeTRNR_b_OvrdInertiaTrqActv)
    {
        /* Switch: '<S514>/Switch7' incorporates:
         *  Constant: '<S520>/Calib'
         */
        rtb_TmpSignalConversionAtVeTCPR_b_ClchOf = KeTRNR_b_InertiaTrqActv;
    }
    else
    {
        (void)Rte_Read_VeTMMR_b_NtrlClchStrtActv_Value(&tmpRead_o);
        (void)Rte_Read_VeINVR_e_MtrB_TCMEMMdReq_Value(&tmpRead_n);

        /* Switch: '<S514>/Switch7' incorporates:
         *  Constant: '<S515>/Constant'
         *  Constant: '<S516>/Constant'
         *  Constant: '<S517>/Constant'
         *  Constant: '<S518>/Constant'
         *  Constant: '<S519>/Constant'
         *  Inport: '<Root>/VeINVR_e_MtrB_TCMEMMdReq'
         *  Inport: '<Root>/VeTMMR_b_NtrlClchStrtActv'
         *  Logic: '<S514>/Logical'
         *  Logic: '<S514>/Logical1'
         *  Logic: '<S514>/Logical2'
         *  Logic: '<S514>/Logical3'
         *  Logic: '<S514>/Logical4'
         *  Logic: '<S514>/Logical5'
         *  RelationalOperator: '<S514>/Comparison1'
         *  RelationalOperator: '<S514>/Comparison2'
         *  RelationalOperator: '<S514>/Comparison3'
         *  RelationalOperator: '<S514>/Comparison4'
         *  RelationalOperator: '<S514>/Comparison5'
         */
        rtb_TmpSignalConversionAtVeTCPR_b_ClchOf = (((((!tmpRead_o) && (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngStO) == CeHSER_e_Neutral)) ||
            (rtb_TmpSignalConversionAtVeTCPR_b_ClchOf && (((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngStO) ==
            CeHSER_e_ShiftToNeutEngOn))) || ((((uint32)
            rtb_TmpSignalConversionAtVeHSER_e_RngStO) == CeHSER_e_NeutToM1) ||
            (((uint32)rtb_TmpSignalConversionAtVeHSER_e_RngStO) ==
             CeHSER_e_NeutToM2))) && (((uint32)tmpRead_n) ==
            CeINVR_e_ZeroTorqueRequest));
    }

    /* End of Switch: '<S514>/Switch7' */
    /* End of Outputs for SubSystem: '<S481>/TRNC_InertTrqActv' */

    /* Outport: '<Root>/VeTRNR_b_InertiaTrqActv' */
    (void)Rte_Write_VeTRNR_b_InertiaTrqActv_Value
        (rtb_TmpSignalConversionAtVeTCPR_b_ClchOf);

    /* End of Outputs for SubSystem: '<S383>/TRNC_InertTrqActv' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_b_InertiaTrqActv' */

    /* SignalConversion generated from: '<S3>/TRNC_b_K0AsyncCloseActv' */
#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    /* Outport: '<Root>/VeTRNR_b_K0AsyncCloseActv' */
    (void)Rte_Write_VeTRNR_b_K0AsyncCloseActv_Value(TRNR_ac_B.Switch5_n);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_b_K0AsyncCloseActv' */

    /* SignalConversion generated from: '<S3>/TRNC_b_NiMinLaunchEna' */
#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    /* Outport: '<Root>/VeTRNR_b_NiMinLaunchEna' */
    (void)Rte_Write_VeTRNR_b_NiMinLaunchEna_Value(TRNR_ac_B.Switch2);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_b_NiMinLaunchEna' */

    /* SignalConversion generated from: '<S3>/TRNC_b_PwrTrnIdlSpdActvSts' */
#if Rte_SysCon_Variant_TRNR_IdlSpdActvSts

    /* Outport: '<Root>/VeTRNR_b_PwrTrnIdlSpdActvSts' */
    (void)Rte_Write_VeTRNR_b_PwrTrnIdlSpdActvSts_Value(TRNR_ac_B.Switch3_h);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_b_PwrTrnIdlSpdActvSts' */

    /* SignalConversion generated from: '<S3>/TRNC_e_TCMLCCTgt' */
#if Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* Outport: '<Root>/VeTRNR_e_TCMLCCTgt' incorporates:
     *  Switch: '<S444>/Switch'
     */
    (void)Rte_Write_VeTRNR_e_TCMLCCTgt_Value(TRNR_ac_B.Switch_f);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_e_TCMLCCTgt' */

    /* SignalConversion generated from: '<S3>/TRNC_e_TCMStrtStpMd' */
#if Rte_SysCon_Variant_TRNR_TCMStrtStpMd

    /* Outport: '<Root>/VeTRNR_e_TCMStrtStpMd' incorporates:
     *  Switch: '<S393>/Switch4'
     */
    (void)Rte_Write_VeTRNR_e_TCMStrtStpMd_Value(TRNR_ac_B.Switch4_b);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_e_TCMStrtStpMd' */

    /* SignalConversion generated from: '<S3>/TRNC_e_TCMStrtTypReq' incorporates:
     *  SignalConversion generated from: '<S3>/TRNC_e_TCMTgtMdReq'
     */
#if Rte_SysCon_Variant_TRNR_TgtAndStrt

    /* Outport: '<Root>/VeTRNR_e_TCMStrtTypReq' incorporates:
     *  Switch: '<S443>/Switch2'
     */
    (void)Rte_Write_VeTRNR_e_TCMStrtTypReq_Value(TRNR_ac_B.Switch2_b);

    /* Outport: '<Root>/VeTRNR_e_TCMTgtMdReq' incorporates:
     *  DataTypeConversion: '<S381>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRNR_e_TCMTgtMdReq_Value(TRNR_ac_B.DataTypeConversion);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_e_TCMStrtTypReq' */

    /* SignalConversion generated from: '<S3>/TRNC_i_GearDsrd' */
#if Rte_SysCon_Variant_TRNR_GearDsrd

    /* Outport: '<Root>/VeTRNR_i_GearDsrd' */
    (void)Rte_Write_VeTRNR_i_GearDsrd_Value(TRNR_ac_B.Switch4_c);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_i_GearDsrd' */

    /* SignalConversion generated from: '<S3>/TRNC_n_NiMinLaunch' */
#if Rte_SysCon_Variant_TRNR_LaunchCntrl

    /* Outport: '<Root>/VeTRNR_n_NiMinLaunch' */
    (void)Rte_Write_VeTRNR_n_NiMinLaunch_Value(TRNR_ac_B.Switch3);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_n_NiMinLaunch' */

    /* SignalConversion generated from: '<S3>/TRNC_n_NtiMax' incorporates:
     *  SignalConversion generated from: '<S3>/TRNC_n_NtiMaxATRR'
     *  SignalConversion generated from: '<S3>/TRNC_n_NtiMin'
     */
#if Rte_SysCon_Variant_TRNR_NtiMinMax

    /* Outport: '<Root>/VeTRNR_n_NtiMax' */
    (void)Rte_Write_VeTRNR_n_NtiMax_Value(TRNR_ac_B.Switch4);

    /* Outport: '<Root>/VeTRNR_n_NtiMaxATRR' */
    (void)Rte_Write_VeTRNR_n_NtiMaxATRR_Value(TRNR_ac_B.Switch6);

    /* Outport: '<Root>/VeTRNR_n_NtiMin' */
    (void)Rte_Write_VeTRNR_n_NtiMin_Value(TRNR_ac_B.Switch5);

#endif

    /* End of SignalConversion generated from: '<S3>/TRNC_n_NtiMax' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB3' */
}

/* Model step function for TID3 */
#if Rte_SysCon_Variant_TRNR_ClutchStatPostProcess

FUNC(void, TRNR_CODE) TRNR_MedTEB1(void) /* Explicit Task: MedTEB1 */
{

#if Rte_SysCon_Variant_TRNR_ClutchStatPostProcess

    TeHCCR_e_ClutchStatus rtb_VariantMerge_For_Variant_Source_Vari;

#endif

#if Rte_SysCon_Variant_TRNR_ClutchStatPostProcess

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
#if !Rte_SysCon_Variant_TRNR_EnbPostILE && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_Clutch_Status

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat'
     */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy =
        Rte_IrvRead_TRNR_MedTEB1_TRNC_e_ILE_Stat_IRV();

#elif (!(!Rte_SysCon_Variant_TRNR_EnbPostILE) && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess) || (!Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = CeHCCR_e_ClInvalid;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
#if !Rte_SysCon_Variant_TRNR_EnbPostC1 && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_Clutch_Status

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_C1Stat'
     */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f =
        Rte_IrvRead_TRNR_MedTEB1_TRNC_e_C1Stat_IRV();

#elif (!(!Rte_SysCon_Variant_TRNR_EnbPostC1) && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess) || (!Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f = CeHCCR_e_ClInvalid;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
#if !Rte_SysCon_Variant_TRNR_EnbPostC2 && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_Clutch_Status

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_C2Stat'
     */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n =
        Rte_IrvRead_TRNR_MedTEB1_TRNC_e_C2Stat_IRV();

#elif (!(!Rte_SysCon_Variant_TRNR_EnbPostC2) && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess) || (!Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n = CeHCCR_e_ClInvalid;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
#if Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_Clutch_Status

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_C3Stat'
     */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e =
        Rte_IrvRead_TRNR_MedTEB1_TRNC_e_C3Stat_IRV();

#elif !Rte_SysCon_Variant_TRNR_Clutch_Status && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e = CeHCCR_e_ClInvalid;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
#if (Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_EnbPostC1) || (Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_EnbPostC2) || (Rte_SysCon_Variant_TRNR_ClutchStatPostProcess && Rte_SysCon_Variant_TRNR_EnbPostILE)

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' incorporates:
     *  Inport: '<Root>/VeTCCR_e_ClchStLCC'
     */
    (void)Rte_Read_VeTCCR_e_ClchStLCC_Value
        (&TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ni);

#elif !Rte_SysCon_Variant_TRNR_EnbPostC1 && !Rte_SysCon_Variant_TRNR_EnbPostC2 && !Rte_SysCon_Variant_TRNR_EnbPostILE && Rte_SysCon_Variant_TRNR_ClutchStatPostProcess

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6' */
    TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ni = CeHCCR_e_ClInvalid;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/TRNR_MedTEB1' */
    /* SignalConversion generated from: '<S1>/VariantSource2' */
#if !Rte_SysCon_Variant_TRNR_EnbPostILE

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy;

#else

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource2'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ni;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource2' */

    /* Outport: '<Root>/VeTRNR_e_ILEStat' incorporates:
     *  DataTypeConversion: '<S5>/DataTypeConversion'
     *  VariantMerge generated from: '<S1>/VariantSource3'
     */
    (void)Rte_Write_VeTRNR_e_ILEStat_Value
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* SignalConversion generated from: '<S1>/VariantSource1' */
#if !Rte_SysCon_Variant_TRNR_EnbPostC1

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_f;

#else

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource1'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ni;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource1' */

    /* Outport: '<Root>/VeTRNR_e_C1Stat' incorporates:
     *  DataTypeConversion: '<S6>/DataTypeConversion'
     *  VariantMerge generated from: '<S1>/VariantSource3'
     */
    (void)Rte_Write_VeTRNR_e_C1Stat_Value
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* SignalConversion generated from: '<S1>/VariantSource3' */
#if !Rte_SysCon_Variant_TRNR_EnbPostC2

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n;

#else

    /* VariantMerge generated from: '<S1>/VariantSource3' incorporates:
     *  SignalConversion generated from: '<S1>/VariantSource3'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    rtb_VariantMerge_For_Variant_Source_Vari =
        TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ni;

#endif

    /* End of SignalConversion generated from: '<S1>/VariantSource3' */

    /* Outport: '<Root>/VeTRNR_e_C2Stat' incorporates:
     *  DataTypeConversion: '<S7>/DataTypeConversion'
     *  VariantMerge generated from: '<S1>/VariantSource3'
     */
    (void)Rte_Write_VeTRNR_e_C2Stat_Value
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* Merge: '<Root>/TRNC_e_C2StatInternal_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S1>/TRNC_C2_StatInternal'
     *  VariantMerge generated from: '<S1>/VariantSource3'
     * */
    Rte_IrvWrite_TRNR_MedTEB1_TRNC_C2_StatInternal_IRV
        (rtb_VariantMerge_For_Variant_Source_Vari);

    /* Outport: '<Root>/VeTRNR_e_C3Stat' incorporates:
     *  DataTypeConversion: '<S8>/DataTypeConversion'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtTRNR_MedTEB1Inport6'
     */
    (void)Rte_Write_VeTRNR_e_C3Stat_Value
        (TRNR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e);

    /* End of Outputs for SubSystem: '<Root>/TRNR_MedTEB1' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB1' */
#endif

}

#endif

/* Output function */
FUNC(void, TRNR_CODE) TRNR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TRNR_PwrOn'
     */
    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TRNO_Init'
     */
    /* SignalConversion generated from: '<S569>/TRNO_e_TargetGear' incorporates:
     *  Constant: '<S581>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TargetGear = TRNR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S569>/TRNO_b_TargetGearFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_TargetGearFA = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_ActualGear' incorporates:
     *  Constant: '<S580>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ActualGear = TRNR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S569>/TRNO_b_ActualGearFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_ActualGearFA = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_ShiftType' incorporates:
     *  Constant: '<S590>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ShiftType = HeTRNR_e_SteadyState;

    /* SignalConversion generated from: '<S569>/TRNO_b_ShiftTypeFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_ShiftTypeFA = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_ShiftTypeTLF' incorporates:
     *  Constant: '<S582>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ShiftTypeTLF = TRNR_ac_ConstB.Constant_k;

    /* SignalConversion generated from: '<S569>/TRNO_b_ShiftTypeTLFFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_ShiftTypeTLFFA = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_ILEStat' incorporates:
     *  Constant: '<S577>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ILEStat = TRNR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S569>/TRNO_e_ILEStatRaw' incorporates:
     *  Constant: '<S579>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ILEStatRaw = TRNR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S569>/TRNO_e_C1Stat' incorporates:
     *  Constant: '<S571>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_C1Stat = TRNR_ac_ConstB.Constant_b2;

    /* SignalConversion generated from: '<S569>/TRNO_e_C2Stat' incorporates:
     *  Constant: '<S572>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_C2Stat = TRNR_ac_ConstB.Constant_dr;

    /* SignalConversion generated from: '<S569>/TRNO_e_C3Stat' incorporates:
     *  Constant: '<S573>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_C3Stat = TRNR_ac_ConstB.Constant_of;

    /* SignalConversion generated from: '<S569>/TRNO_b_EnblGearRatMon' */
    TRNR_ac_B.OutportBufferForTRNO_b_EnblGearRatMon = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveEVGear' incorporates:
     *  Constant: '<S584>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveEVGear =
        TRNR_ac_ConstB.Constant_f;

    /* SignalConversion generated from: '<S569>/TRNO_b_TCM_ActiveEVGearFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_TCM_ActiveEVGearF = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveXNGear' incorporates:
     *  Constant: '<S586>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveXNGear =
        TRNR_ac_ConstB.Constant_ls;

    /* SignalConversion generated from: '<S569>/TRNO_b_TCM_ActiveXNGearFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_TCM_ActiveXNGearF = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveHybridGear' incorporates:
     *  Constant: '<S585>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveHybridG =
        TRNR_ac_ConstB.Constant_b;

    /* SignalConversion generated from: '<S569>/TRNO_b_TCM_ActiveHybridGearFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_TCM_ActiveHybridG = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCM_PassiveHybridGear' incorporates:
     *  Constant: '<S587>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_PassiveHybrid =
        TRNR_ac_ConstB.Constant_lm;

    /* SignalConversion generated from: '<S569>/TRNO_b_TCM_PassiveHybridGearFA' */
    TRNR_ac_B.OutportBufferForTRNO_b_TCM_PassiveHybrid = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMActualEvenGear' incorporates:
     *  Constant: '<S583>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMActualEvenGear =
        TRNR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMActualOddGear' incorporates:
     *  Constant: '<S588>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMActualOddGear =
        TRNR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMTgtMdReq' incorporates:
     *  Constant: '<S574>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMTgtMdReq = TRNR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMLCCTgt' incorporates:
     *  Constant: '<S576>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMLCCTgt = TRNR_ac_ConstB.Constant_oj;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMStrtTypReq' incorporates:
     *  Constant: '<S594>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMStrtTypReq = KeTRNR_e_TCMStrtTypReqInit;

    /* SignalConversion generated from: '<S569>/TRNO_b_PwrTrnIdlSpdActvSts' incorporates:
     *  Constant: '<S592>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_b_PwrTrnIdlSpdActvS =
        KeTRNR_b_PwrTrnIdlSpdActvStsInit;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMStrtStpMd' incorporates:
     *  Constant: '<S575>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMStrtStpMd = TRNR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S569>/TRNO_b_K0AsyncCloseActvInit' */
    TRNR_ac_B.OutportBufferForTRNO_b_K0AsyncCloseActvI = false;

    /* SignalConversion generated from: '<S569>/TRNO_i_GearDsrd' incorporates:
     *  Constant: '<S595>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_i_GearDsrd = KeTRNR_i_HCPGearDsrdInit;

    /* SignalConversion generated from: '<S569>/TRNO_b_NiMinLaunchEna' incorporates:
     *  Constant: '<S591>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_b_NiMinLaunchEna =
        KeTRNR_b_NiMinLaunchEnaInit;

    /* SignalConversion generated from: '<S569>/TRNO_n_NiMinLaunch' incorporates:
     *  Constant: '<S596>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_n_NiMinLaunch = KeTRNR_n_NiMinLaunchInit;

    /* SignalConversion generated from: '<S569>/TRNO_n_NtiMax' */
    TRNR_ac_B.OutportBufferForTRNO_n_NtiMax = 0.0F;

    /* SignalConversion generated from: '<S569>/TRNO_n_NtiMin' */
    TRNR_ac_B.OutportBufferForTRNO_n_NtiMin = 0.0F;

    /* SignalConversion generated from: '<S569>/TRNO_n_NtiMaxATRR' */
    TRNR_ac_B.OutportBufferForTRNO_n_NtiMaxATRR = 0.0F;

    /* SignalConversion generated from: '<S569>/TRNO_e_ESSbasedTrnstnSts' incorporates:
     *  Constant: '<S578>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ESSbasedTrnstnSts =
        TRNR_ac_ConstB.Constant_g;

    /* SignalConversion generated from: '<S569>/TRNO_b_InertiaTrqActv' */
    TRNR_ac_B.OutportBufferForTRNO_b_InertiaTrqActv = false;

    /* SignalConversion generated from: '<S569>/TRNO_e_TCMTargetEvenGear' incorporates:
     *  Constant: '<S589>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMTargetEvenGear =
        TRNR_ac_ConstB.Constant_bw;

    /* Outport: '<Root>/VeTRNR_b_TCC_Slip_Rgn' incorporates:
     *  Constant: '<S593>/Calib'
     *  SignalConversion generated from: '<S569>/TRNO_b_TCC_Slip_Rgn'
     */
    (void)Rte_Write_VeTRNR_b_TCC_Slip_Rgn_Value(KeTRNR_b_TCC_Slip_Rgn_Init);

    /* S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S568>/TRNC_e_C2StatInternal_write' incorporates:
     *  Constant: '<S570>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNC_e_C2StatInternal_wr =
        TRNR_ac_ConstB.Constant_kj;

    /* End of Outputs for S-Function (fcgen): '<S4>/FcnCallGen' */

    /* Outport: '<Root>/VeTRNR_b_ActualGearFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_ActualGearFA'
     */
    (void)Rte_Write_VeTRNR_b_ActualGearFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_ActualGearFA);

    /* Outport: '<Root>/VeTRNR_b_EnblGearRatMon' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_EnblGearRatMon'
     */
    (void)Rte_Write_VeTRNR_b_EnblGearRatMon_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_EnblGearRatMon);

    /* Outport: '<Root>/VeTRNR_b_InertiaTrqActv' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_InertiaTrqActv'
     */
    (void)Rte_Write_VeTRNR_b_InertiaTrqActv_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_InertiaTrqActv);

    /* Outport: '<Root>/VeTRNR_b_K0AsyncCloseActv' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_K0AsyncCloseActvInit'
     */
    (void)Rte_Write_VeTRNR_b_K0AsyncCloseActv_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_K0AsyncCloseActvI);

    /* Outport: '<Root>/VeTRNR_b_NiMinLaunchEna' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_NiMinLaunchEna'
     */
    (void)Rte_Write_VeTRNR_b_NiMinLaunchEna_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_NiMinLaunchEna);

    /* Outport: '<Root>/VeTRNR_b_PwrTrnIdlSpdActvSts' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_PwrTrnIdlSpdActvSts'
     */
    (void)Rte_Write_VeTRNR_b_PwrTrnIdlSpdActvSts_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_PwrTrnIdlSpdActvS);

    /* Outport: '<Root>/VeTRNR_b_ShftTypeFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_ShiftTypeFA'
     */
    (void)Rte_Write_VeTRNR_b_ShftTypeFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_ShiftTypeFA);

    /* Outport: '<Root>/VeTRNR_b_ShftTypeTLFFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_ShiftTypeTLFFA'
     */
    (void)Rte_Write_VeTRNR_b_ShftTypeTLFFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_ShiftTypeTLFFA);

    /* Outport: '<Root>/VeTRNR_b_TCM_ActiveEVGearFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_TCM_ActiveEVGearFA'
     */
    (void)Rte_Write_VeTRNR_b_TCM_ActiveEVGearFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_TCM_ActiveEVGearF);

    /* Outport: '<Root>/VeTRNR_b_TCM_ActiveHybridGearFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_TCM_ActiveHybridGearFA'
     */
    (void)Rte_Write_VeTRNR_b_TCM_ActiveHybridGearFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_TCM_ActiveHybridG);

    /* Outport: '<Root>/VeTRNR_b_TCM_ActiveXNGearFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_TCM_ActiveXNGearFA'
     */
    (void)Rte_Write_VeTRNR_b_TCM_ActiveXNGearFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_TCM_ActiveXNGearF);

    /* Outport: '<Root>/VeTRNR_b_TCM_PassiveHybridGearFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_TCM_PassiveHybridGearFA'
     */
    (void)Rte_Write_VeTRNR_b_TCM_PassiveHybridGearFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_TCM_PassiveHybrid);

    /* Outport: '<Root>/VeTRNR_b_TargetGearFA' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_b_TargetGearFA'
     */
    (void)Rte_Write_VeTRNR_b_TargetGearFA_Value
        (TRNR_ac_B.OutportBufferForTRNO_b_TargetGearFA);

    /* Outport: '<Root>/VeTRNR_e_ActualGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_ActualGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_ActualGear'
     */
    (void)Rte_Write_VeTRNR_e_ActualGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_ActualGear);

    /* Outport: '<Root>/VeTRNR_e_C1Stat' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_C1Stat'
     *  SignalConversion generated from: '<S569>/TRNO_e_C1Stat'
     */
    (void)Rte_Write_VeTRNR_e_C1Stat_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_C1Stat);

    /* Outport: '<Root>/VeTRNR_e_C2Stat' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_C2Stat'
     *  SignalConversion generated from: '<S569>/TRNO_e_C2Stat'
     */
    (void)Rte_Write_VeTRNR_e_C2Stat_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_C2Stat);

    /* Outport: '<Root>/VeTRNR_e_C3Stat' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_C3Stat'
     *  SignalConversion generated from: '<S569>/TRNO_e_C3Stat'
     */
    (void)Rte_Write_VeTRNR_e_C3Stat_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_C3Stat);

    /* Outport: '<Root>/VeTRNR_e_ESSbasedTrnstnSts' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_ESSbasedTrnstnSts'
     *  SignalConversion generated from: '<S569>/TRNO_e_ESSbasedTrnstnSts'
     */
    (void)Rte_Write_VeTRNR_e_ESSbasedTrnstnSts_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_ESSbasedTrnstnSts);

    /* Outport: '<Root>/VeTRNR_e_ILEStat' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_ILEStat'
     *  SignalConversion generated from: '<S569>/TRNO_e_ILEStat'
     */
    (void)Rte_Write_VeTRNR_e_ILEStat_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_ILEStat);

    /* Outport: '<Root>/VeTRNR_e_ILEStatRaw' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_ILEStatRaw'
     *  SignalConversion generated from: '<S569>/TRNO_e_ILEStatRaw'
     */
    (void)Rte_Write_VeTRNR_e_ILEStatRaw_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_ILEStatRaw);

    /* Outport: '<Root>/VeTRNR_e_ShftType' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_ShiftType'
     *  SignalConversion generated from: '<S569>/TRNO_e_ShiftType'
     */
    (void)Rte_Write_VeTRNR_e_ShftType_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_ShiftType);

    /* Outport: '<Root>/VeTRNR_e_ShftTypeTLF' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_ShiftTypeTLF'
     *  SignalConversion generated from: '<S569>/TRNO_e_ShiftTypeTLF'
     */
    (void)Rte_Write_VeTRNR_e_ShftTypeTLF_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_ShiftTypeTLF);

    /* Outport: '<Root>/VeTRNR_e_TCMActualEvenGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMActualEvenGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMActualEvenGear'
     */
    (void)Rte_Write_VeTRNR_e_TCMActualEvenGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMActualEvenGear);

    /* Outport: '<Root>/VeTRNR_e_TCMActualOddGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMActualOddGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMActualOddGear'
     */
    (void)Rte_Write_VeTRNR_e_TCMActualOddGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMActualOddGear);

    /* Outport: '<Root>/VeTRNR_e_TCMLCCTgt' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMLCCTgt'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMLCCTgt'
     */
    (void)Rte_Write_VeTRNR_e_TCMLCCTgt_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMLCCTgt);

    /* Outport: '<Root>/VeTRNR_e_TCMStrtStpMd' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMStrtStpMd'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMStrtStpMd'
     */
    (void)Rte_Write_VeTRNR_e_TCMStrtStpMd_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMStrtStpMd);

    /* Outport: '<Root>/VeTRNR_e_TCMStrtTypReq' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMStrtTypReq'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMStrtTypReq'
     */
    (void)Rte_Write_VeTRNR_e_TCMStrtTypReq_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMStrtTypReq);

    /* Outport: '<Root>/VeTRNR_e_TCMTargetEvenGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMTargetEvenGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMTargetEvenGear'
     */
    (void)Rte_Write_VeTRNR_e_TCMTargetEvenGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMTargetEvenGear);

    /* Outport: '<Root>/VeTRNR_e_TCMTgtMdReq' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCMTgtMdReq'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCMTgtMdReq'
     */
    (void)Rte_Write_VeTRNR_e_TCMTgtMdReq_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCMTgtMdReq);

    /* Outport: '<Root>/VeTRNR_e_TCM_ActiveEVGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCM_ActiveEVGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveEVGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveEVGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveEVGear);

    /* Outport: '<Root>/VeTRNR_e_TCM_ActiveHybridGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCM_ActiveHybridGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveHybridGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveHybridGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveHybridG);

    /* Outport: '<Root>/VeTRNR_e_TCM_ActiveXNGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCM_ActiveXNGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveXNGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveXNGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveXNGear);

    /* Outport: '<Root>/VeTRNR_e_TCM_PassiveHybridGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TCM_PassiveHybridGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TCM_PassiveHybridGear'
     */
    (void)Rte_Write_VeTRNR_e_TCM_PassiveHybridGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TCM_PassiveHybrid);

    /* Outport: '<Root>/VeTRNR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_e_TargetGear'
     *  SignalConversion generated from: '<S569>/TRNO_e_TargetGear'
     */
    (void)Rte_Write_VeTRNR_e_TargetGear_Value
        (TRNR_ac_B.OutportBufferForTRNO_e_TargetGear);

    /* Outport: '<Root>/VeTRNR_i_GearDsrd' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_i_GearDsrd'
     */
    (void)Rte_Write_VeTRNR_i_GearDsrd_Value
        (TRNR_ac_B.OutportBufferForTRNO_i_GearDsrd);

    /* Outport: '<Root>/VeTRNR_n_NiMinLaunch' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_n_NiMinLaunch'
     */
    (void)Rte_Write_VeTRNR_n_NiMinLaunch_Value
        (TRNR_ac_B.OutportBufferForTRNO_n_NiMinLaunch);

    /* Outport: '<Root>/VeTRNR_n_NtiMax' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_n_NtiMax'
     */
    (void)Rte_Write_VeTRNR_n_NtiMax_Value
        (TRNR_ac_B.OutportBufferForTRNO_n_NtiMax);

    /* Outport: '<Root>/VeTRNR_n_NtiMaxATRR' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_n_NtiMaxATRR'
     */
    (void)Rte_Write_VeTRNR_n_NtiMaxATRR_Value
        (TRNR_ac_B.OutportBufferForTRNO_n_NtiMaxATRR);

    /* Outport: '<Root>/VeTRNR_n_NtiMin' incorporates:
     *  SignalConversion generated from: '<S4>/TRNO_n_NtiMin'
     */
    (void)Rte_Write_VeTRNR_n_NtiMin_Value
        (TRNR_ac_B.OutportBufferForTRNO_n_NtiMin);

    /* Merge: '<Root>/TRNC_e_C2StatInternal_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S4>/TRNC_e_C2StatInternal_write'
     *  SignalConversion generated from: '<S568>/TRNC_e_C2StatInternal_write'
     * */
    Rte_IrvWrite_TRNR_PwrOn_TRNC_C2_StatInternal_IRV
        (TRNR_ac_B.OutportBufferForTRNC_e_C2StatInternal_wr);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TRNR_CODE) TRNR_ac_Init(void)
{

#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    TRNR_ac_PrevZCX.TRNC_TargetGearVarDelay_Reset_ZCE = POS_ZCSIG;
    TRNR_ac_PrevZCX.TRNC_ActualGearVarDelay_Reset_ZCE = POS_ZCSIG;

#endif

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TRNR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/TRNO_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TargetGear' incorporates:
     *  Constant: '<S581>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TargetGear = TRNR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_ActualGear' incorporates:
     *  Constant: '<S580>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ActualGear = TRNR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_ShiftType' incorporates:
     *  Constant: '<S590>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ShiftType = HeTRNR_e_SteadyState;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_ShiftTypeTLF' incorporates:
     *  Constant: '<S582>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ShiftTypeTLF = TRNR_ac_ConstB.Constant_k;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_ILEStat' incorporates:
     *  Constant: '<S577>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ILEStat = TRNR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_ILEStatRaw' incorporates:
     *  Constant: '<S579>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ILEStatRaw = TRNR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_C1Stat' incorporates:
     *  Constant: '<S571>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_C1Stat = TRNR_ac_ConstB.Constant_b2;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_C2Stat' incorporates:
     *  Constant: '<S572>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_C2Stat = TRNR_ac_ConstB.Constant_dr;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_C3Stat' incorporates:
     *  Constant: '<S573>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_C3Stat = TRNR_ac_ConstB.Constant_of;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveEVGear' incorporates:
     *  Constant: '<S584>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveEVGear =
        TRNR_ac_ConstB.Constant_f;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveXNGear' incorporates:
     *  Constant: '<S586>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveXNGear =
        TRNR_ac_ConstB.Constant_ls;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCM_ActiveHybridGear' incorporates:
     *  Constant: '<S585>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_ActiveHybridG =
        TRNR_ac_ConstB.Constant_b;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCM_PassiveHybridGear' incorporates:
     *  Constant: '<S587>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCM_PassiveHybrid =
        TRNR_ac_ConstB.Constant_lm;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMActualEvenGear' incorporates:
     *  Constant: '<S583>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMActualEvenGear =
        TRNR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMActualOddGear' incorporates:
     *  Constant: '<S588>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMActualOddGear =
        TRNR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMTgtMdReq' incorporates:
     *  Constant: '<S574>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMTgtMdReq = TRNR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMLCCTgt' incorporates:
     *  Constant: '<S576>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMLCCTgt = TRNR_ac_ConstB.Constant_oj;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMStrtTypReq' incorporates:
     *  Constant: '<S594>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMStrtTypReq = KeTRNR_e_TCMStrtTypReqInit;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_b_PwrTrnIdlSpdActvSts' incorporates:
     *  Constant: '<S592>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_b_PwrTrnIdlSpdActvS =
        KeTRNR_b_PwrTrnIdlSpdActvStsInit;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMStrtStpMd' incorporates:
     *  Constant: '<S575>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMStrtStpMd = TRNR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_i_GearDsrd' incorporates:
     *  Constant: '<S595>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_i_GearDsrd = KeTRNR_i_HCPGearDsrdInit;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_b_NiMinLaunchEna' incorporates:
     *  Constant: '<S591>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_b_NiMinLaunchEna =
        KeTRNR_b_NiMinLaunchEnaInit;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_n_NiMinLaunch' incorporates:
     *  Constant: '<S596>/Calib'
     */
    TRNR_ac_B.OutportBufferForTRNO_n_NiMinLaunch = KeTRNR_n_NiMinLaunchInit;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_ESSbasedTrnstnSts' incorporates:
     *  Constant: '<S578>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_ESSbasedTrnstnSts =
        TRNR_ac_ConstB.Constant_g;

    /* SystemInitialize for SignalConversion generated from: '<S569>/TRNO_e_TCMTargetEvenGear' incorporates:
     *  Constant: '<S589>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNO_e_TCMTargetEvenGear =
        TRNR_ac_ConstB.Constant_bw;

    /* SystemInitialize for Outport: '<Root>/VeTRNR_b_TCC_Slip_Rgn' incorporates:
     *  Constant: '<S593>/Calib'
     *  SignalConversion generated from: '<S569>/TRNO_b_TCC_Slip_Rgn'
     */
    (void)Rte_Write_VeTRNR_b_TCC_Slip_Rgn_Value(KeTRNR_b_TCC_Slip_Rgn_Init);

    /* SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' incorporates:
     *  SubSystem: '<S4>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S568>/TRNC_e_C2StatInternal_write' incorporates:
     *  Constant: '<S570>/Constant'
     */
    TRNR_ac_B.OutportBufferForTRNC_e_C2StatInternal_wr =
        TRNR_ac_ConstB.Constant_kj;

    /* End of SystemInitialize for S-Function (fcgen): '<S4>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' incorporates:
     *  SubSystem: '<Root>/TRNR_MedTEB2'
     */
    /* SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' incorporates:
     *  SubSystem: '<S2>/TRNC_Cntrls_Input'
     */
#if Rte_SysCon_Variant_TRNR_SelTgtActGear

    /* SystemInitialize for Atomic SubSystem: '<S9>/TRNC_SelTgtActGear' */
    /* SystemInitialize for Atomic SubSystem: '<S22>/TRNC_SelTgtActGear' */
    /* InitializeConditions for Delay: '<S87>/TRNC_TargetGearVarDelay' */
    TRNR_ac_DW.icLoad = 1U;

    /* InitializeConditions for Delay: '<S87>/TRNC_ActualGearVarDelay' */
    TRNR_ac_DW.icLoad_n = 1U;

    /* End of SystemInitialize for SubSystem: '<S22>/TRNC_SelTgtActGear' */
    /* End of SystemInitialize for SubSystem: '<S9>/TRNC_SelTgtActGear' */
#endif

#if Rte_SysCon_Variant_TRNR_ShftTypeArb

    /* SystemInitialize for Atomic SubSystem: '<S9>/TRNC_ShftTypeArb' */
    /* SystemInitialize for Atomic SubSystem: '<S23>/TRNC_ShftTypeArb' */
    /* Start for If: '<S105>/If' */
    TRNR_ac_DW.If_ActiveSubsystem = -1;

    /* Start for If: '<S105>/If2' */
    TRNR_ac_DW.If2_ActiveSubsystem = -1;

    /* End of SystemInitialize for SubSystem: '<S23>/TRNC_ShftTypeArb' */
    /* End of SystemInitialize for SubSystem: '<S9>/TRNC_ShftTypeArb' */
#endif

    /* End of SystemInitialize for S-Function (fcgen): '<S2>/FcnCallGen' */

    /* SystemInitialize for SignalConversion generated from: '<S2>/TRNC_e_C1Stat' incorporates:
     *  SignalConversion generated from: '<S2>/TRNC_e_C2Stat'
     *  SignalConversion generated from: '<S2>/TRNC_e_C3Stat'
     *  SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat'
     */
#if Rte_SysCon_Variant_TRNR_Clutch_Status

    /* SystemInitialize for SignalConversion generated from: '<S2>/TRNC_e_C1Stat' incorporates:
     *  DataTypeConversion: '<S12>/DataTypeConversion'
     */
    Rte_IrvWrite_TRNR_ac_Init_TRNC_e_C1Stat_IRV(TRNR_ac_B.DataTypeConversion_o);

    /* SystemInitialize for SignalConversion generated from: '<S2>/TRNC_e_C2Stat' incorporates:
     *  DataTypeConversion: '<S14>/DataTypeConversion'
     */
    Rte_IrvWrite_TRNR_ac_Init_TRNC_e_C2Stat_IRV(TRNR_ac_B.DataTypeConversion_n);

    /* SystemInitialize for SignalConversion generated from: '<S2>/TRNC_e_C3Stat' incorporates:
     *  Merge: '<S36>/Merge'
     */
    Rte_IrvWrite_TRNR_ac_Init_TRNC_e_C3Stat_IRV(TRNR_ac_B.Merge_p);

    /* SystemInitialize for SignalConversion generated from: '<S2>/TRNC_e_ILE_Stat' incorporates:
     *  Switch: '<S32>/Switch'
     */
    Rte_IrvWrite_TRNR_ac_Init_TRNC_e_ILE_Stat_IRV(TRNR_ac_B.Switch_c);

#endif

    /* End of SystemInitialize for SignalConversion generated from: '<S2>/TRNC_e_C1Stat' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTEB2' */

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TargetGear' incorporates:
     *  Merge: '<Root>/Merge_9'
     */
    (void)Rte_Write_VeTRNR_e_TargetGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_ActualGear' incorporates:
     *  Merge: '<Root>/Merge_8'
     */
    (void)Rte_Write_VeTRNR_e_ActualGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_ShftType' incorporates:
     *  Merge: '<Root>/Merge_10'
     */
    (void)Rte_Write_VeTRNR_e_ShftType_Value(CeTRNR_e_SteadyState);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_ShftTypeTLF' incorporates:
     *  Merge: '<Root>/Merge_38'
     */
    (void)Rte_Write_VeTRNR_e_ShftTypeTLF_Value(CeTRNR_e_SteadyStateDCT);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_ILEStat' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeTRNR_e_ILEStat_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_C1Stat' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeTRNR_e_C1Stat_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_C2Stat' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeTRNR_e_C2Stat_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_C3Stat' incorporates:
     *  Merge: '<Root>/Merge_23'
     */
    (void)Rte_Write_VeTRNR_e_C3Stat_Value(CeHCCR_e_ClInvalid);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCM_ActiveEVGear' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveEVGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCM_ActiveXNGear' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveXNGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCM_ActiveHybridGear' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeTRNR_e_TCM_ActiveHybridGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCM_PassiveHybridGear' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    (void)Rte_Write_VeTRNR_e_TCM_PassiveHybridGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMActualEvenGear' incorporates:
     *  Merge: '<Root>/Merge_28'
     */
    (void)Rte_Write_VeTRNR_e_TCMActualEvenGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMActualOddGear' incorporates:
     *  Merge: '<Root>/Merge_29'
     */
    (void)Rte_Write_VeTRNR_e_TCMActualOddGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMTgtMdReq' incorporates:
     *  Merge: '<Root>/Merge_33'
     */
    (void)Rte_Write_VeTRNR_e_TCMTgtMdReq_Value(CeTRNR_e_SerEngOff);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMLCCTgt' incorporates:
     *  Merge: '<Root>/Merge_7'
     */
    (void)Rte_Write_VeTRNR_e_TCMLCCTgt_Value(CeTMMR_e_ClchUnlock);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMStrtTypReq' incorporates:
     *  Merge: '<Root>/Merge_34'
     */
    (void)Rte_Write_VeTRNR_e_TCMStrtTypReq_Value(CeTRNR_e_NormalStrt);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMStrtStpMd' incorporates:
     *  Merge: '<Root>/Merge_36'
     */
    (void)Rte_Write_VeTRNR_e_TCMStrtStpMd_Value(CeTRNR_e_TCMStrtStpMd_inactv);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_ESSbasedTrnstnSts' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeTRNR_e_ESSbasedTrnstnSts_Value(CeESSR_e_Trans_Stat_Off);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_TCMTargetEvenGear' incorporates:
     *  Merge: '<Root>/Merge_32'
     */
    (void)Rte_Write_VeTRNR_e_TCMTargetEvenGear_Value(CeTRNR_e_Neutral);

    /* SystemInitialize for Outport: '<Root>/VeTRNR_e_ILEStatRaw' incorporates:
     *  Merge: '<Root>/Merge_39'
     */
    (void)Rte_Write_VeTRNR_e_ILEStatRaw_Value(CeHCCR_e_ClInvalid);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
