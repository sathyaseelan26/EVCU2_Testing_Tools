/*
 * File: EBMR_ac.c
 *
 * Code generated for Simulink model 'EBMR_ac'.
 *
 * Model version                  : 9.168
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 13:35:12 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EBMR_ac.h"

/* Named constants for Chart: '<S199>/eBoost_State_Machine' */
#if Rte_SysCon_Variant_EBMR_1
#define EBMR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

#if Rte_SysCon_Variant_EBMR_1
#define EBMR_ac_IN_eBoost_Enabled      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_EBMR_1
#define EBMR_ac_IN_eBoost_Engaged      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_EBMR_1
#define EBMR_ac_IN_eBoost_NotAvailable ((uint8)1U)
#endif

#if Rte_SysCon_Variant_EBMR_1
#define EBMR_ac_IN_eBoost_OFF          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_EBMR_1
#define EBMR_ac_IN_eBoost_OFF_Deactivated ((uint8)3U)
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2
#define EBMR_ac_IN_eBoost_PrepNoPS     ((uint8)1U)
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2
#define EBMR_ac_IN_eBoost_PrepPS       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2
#define EBMR_ac_IN_eBoost_PrepPS_PrepNoPS_State ((uint8)4U)
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
#define START_SEC_CALIB_UNSPECIFIED_EBMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) HeEBMR_t_dtEBMR = 0.02F;/* Referenced by:
                                                                      * '<S7>/Calib'
                                                                      * '<S73>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(boolean, EBMR_VAR_INIT) KaEBMR_b_TrrnMdEnblSt[10] =
{
    0, 1, 0, 0, 1, 0, 0, 0, 0, 1
} ;                                    /* Referenced by: '<S32>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(uint8, EBMR_VAR_INIT) KaEBMR_e_P2PStatusRemap[4] =
{
    0U, 1U, 2U, 3U
} ;                                    /* Referenced by: '<S8>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_P_PBatMaxLim_LSP = 65.0F;/* Referenced by: '<S33>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_P_PBatMaxLim_RSP = 70.0F;/* Referenced by: '<S34>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_P_eBoostBatThreshold =
    15.0F;                             /* Referenced by:
                                        * '<S199>/eBoost_State_Machine'
                                        * '<S200>/eBoost_State_Machine'
                                        */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_Pct_PSAccelPedalThreshold =
    5.0F;                              /* Referenced by: '<S9>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(uint16, EBMR_VAR_INIT) KeEBMR_Pct_PowershotMinSOCThresh =
    20U;                               /* Referenced by: '<S146>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(sint16, EBMR_VAR_INIT) KeEBMR_T_HVBattMaxLim = 20;/* Referenced by:
                                                                      * '<S49>/Calib'
                                                                      * '<S107>/Calib'
                                                                      * '<S144>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(sint16, EBMR_VAR_INIT) KeEBMR_T_HVBattMinLim = -25;/* Referenced by:
                                                                      * '<S50>/Calib'
                                                                      * '<S145>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(sint16, EBMR_VAR_INIT) KeEBMR_T_InvrtrMtrAMaxTempThrshld =
    80;                                /* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_T_InvrtrMtrBMaxTempThrshld =
    35.0F;                             /* Referenced by: '<S35>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(sint16, EBMR_VAR_INIT) KeEBMR_T_MtrAMaxTempThrshld = 80;/* Referenced by: '<S52>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_T_MtrBMaxTempThrshld =
    50.0F;                             /* Referenced by: '<S36>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(boolean, EBMR_VAR_INIT) KeEBMR_b_BEVPowershot = 0;/* Referenced by:
                                                                      * '<S75>/Calib'
                                                                      * '<S108>/Calib'
                                                                      * '<S147>/Calib'
                                                                      * '<S148>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(boolean, EBMR_VAR_INIT) KeEBMR_b_P2PNoSwitch = 0;/* Referenced by:
                                                                      * '<S10>/Calib'
                                                                      * '<S76>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_HMIPopupTimer = 5.0F;/* Referenced by: '<S74>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_MaxEnabledTime = 5.0F;/* Referenced by:
                                                                      * '<S199>/eBoost_State_Machine'
                                                                      * '<S200>/eBoost_State_Machine'
                                                                      * '<S192>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_MaxEngagedTime = 5.0F;/* Referenced by:
                                                                      * '<S199>/eBoost_State_Machine'
                                                                      * '<S200>/eBoost_State_Machine'
                                                                      * '<S193>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_P2PMaxUnavail = 5.0F;/* Referenced by: '<S11>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_PowerShotPrepTime =
    180.0F;                            /* Referenced by:
                                        * '<S16>/Calib'
                                        * '<S199>/eBoost_State_Machine'
                                        */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_eBoostDeactivate = 5.0F;/* Referenced by:
                                                                      * '<S199>/eBoost_State_Machine'
                                                                      * '<S200>/eBoost_State_Machine'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_eBoostNotAvailable = 5.0F;/* Referenced by:
                                                                      * '<S199>/eBoost_State_Machine'
                                                                      * '<S200>/eBoost_State_Machine'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_t_eBoostOff = 5.0F;/* Referenced by:
                                                                      * '<S199>/eBoost_State_Machine'
                                                                      * '<S200>/eBoost_State_Machine'
                                                                      * '<S194>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_v_MaxSpdThrshld = 150.0F;/* Referenced by: '<S37>/Calib' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static volatile CONST(float32, EBMR_VAR_INIT) KeEBMR_v_MinSpdThrshld = 40.0F;/* Referenced by: '<S38>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_EBMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static VAR(float32, EBMR_VAR_INIT) VeEBMC_Pct_PwrSht_Prep_Pct;/* '<S12>/Floor1' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static VAR(boolean, EBMR_VAR_INIT) VeEBMC_b_HMIPopUpFlag;/* '<S53>/RelationalOperator' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static VAR(boolean, EBMR_VAR_INIT) VeEBMC_b_P2PTimerReqFlag;/* '<S199>/eBoost_State_Machine' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(boolean, EBMR_VAR_INIT) VeEBMC_b_PowerShot_Avail;
                                 /* '<S39>/SigConvForSigProp_VariantSource_0' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(boolean, EBMR_VAR_INIT) VeEBMC_b_eBoostAvailable;/* '<S13>/Logical2' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static VAR(TeEBMR_e_PtoPAvail, EBMR_VAR_INIT) VeEBMC_e_P2PAvailability;/* '<S199>/eBoost_State_Machine' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(TeEBMR_e_eBoostStatus, EBMR_VAR_INIT) VeEBMC_e_PreviousState;/* synthesized block */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(TeEBMR_e_eBoostStatus, EBMR_VAR_INIT) VeEBMC_e_eBoostStatus;/* synthesized block */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static VAR(float32, EBMR_VAR_INIT) VeEBMC_t_P2PTimer;/* '<S199>/eBoost_State_Machine' */

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static VAR(float32, EBMR_VAR_INIT) VeEBMC_t_PrepCntdwn;/* '<S12>/Max' */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(float32, EBMR_VAR_INIT) VeEBMC_t_eBoostEnabledTimer;/* synthesized block */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(float32, EBMR_VAR_INIT) VeEBMC_t_eBoostEngagedTimer;/* synthesized block */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(float32, EBMR_VAR_INIT) VeEBMC_t_eBoostOFFTimer;/* synthesized block */

#endif

#if Rte_SysCon_Variant_EBMR_1

static VAR(float32, EBMR_VAR_INIT) VeEBMC_t_eBoostPrepTimer;/* synthesized block */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

VAR(B_EBMR_ac_T, EBMR_VAR_INIT) EBMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"

VAR(DW_EBMR_ac_T, EBMR_VAR_INIT) EBMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_EBMR
#include "MemMap.h"
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_DriverCancel(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_Unavailable_P2P_Launch(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_Unavailable_P2P_Maxboost(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_Unavailable_P2P_Timeattack(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1);

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_NoHMI(P2VAR(TeEBMR_e_eBoostWarning,
    AUTOMATIC, EBMR_VAR_INIT) rty_Out1);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static void EB_enter_internal_eBoost_OFF_Deactivated(void);

#endif

/*
 * Output and update for action system:
 *    '<S53>/DriverCancel'
 *    '<S55>/Cancelled'
 */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_DriverCancel(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S57>/Out1' incorporates:
     *  Constant: '<S124>/Constant'
     */
    *rty_Out1 = CeEBMR_e_TM35;
}

#endif

/*
 * Output and update for action system:
 *    '<S82>/Unavailable_P2P_Launch'
 *    '<S55>/Cancelled_Launch'
 */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_Unavailable_P2P_Launch(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S160>/Out1' incorporates:
     *  Constant: '<S177>/Constant'
     */
    *rty_Out1 = CeEBMR_e_Warning4;
}

#endif

/*
 * Output and update for action system:
 *    '<S82>/Unavailable_P2P_Maxboost'
 *    '<S55>/Cancelled_Maxboost'
 */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_Unavailable_P2P_Maxboost(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S161>/Out1' incorporates:
     *  Constant: '<S178>/Constant'
     */
    *rty_Out1 = CeEBMR_e_Warning1;
}

#endif

/*
 * Output and update for action system:
 *    '<S82>/Unavailable_P2P_Timeattack'
 *    '<S55>/Cancelled_TimeAttack'
 */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_Unavailable_P2P_Timeattack(P2VAR
    (TeEBMR_e_eBoostWarning, AUTOMATIC, EBMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S162>/Out1' incorporates:
     *  Constant: '<S179>/Constant'
     */
    *rty_Out1 = CeEBMR_e_Warning6;
}

#endif

/*
 * Output and update for action system:
 *    '<S82>/NoHMI'
 *    '<S55>/NoHMI'
 *    '<S53>/NoHMI'
 */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static FUNC(void, EBMR_CODE_LOCAL) EBMR_ac_NoHMI(P2VAR(TeEBMR_e_eBoostWarning,
    AUTOMATIC, EBMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S149>/Out1' incorporates:
     *  Constant: '<S166>/Constant'
     */
    *rty_Out1 = CeEBMR_e_None;
}

#endif

/* Function for Chart: '<S199>/eBoost_State_Machine' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

static void EB_enter_internal_eBoost_OFF_Deactivated(void)
{
    /* Constant: '<S10>/Calib' */
    /* Entry Internal 'eBoost_OFF_Deactivated': '<S201>:1' */
    /* Transition: '<S201>:103' */
    if (!KeEBMR_b_P2PNoSwitch)
    {
        /* Transition: '<S201>:105' */
        EBMR_ac_DW.is_eBoost_OFF_Deactivated_k = EBMR_ac_IN_eBoost_OFF;

        /* VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus' */
        /* Entry 'eBoost_OFF': '<S201>:3' */
        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

        /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
        VeEBMC_t_eBoostOFFTimer = 0.0F;
        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer_a = 0.0F;

        /* Constant: '<S11>/Calib' incorporates:
         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
         */
        /* Entry Internal 'eBoost_OFF': '<S201>:3' */
        /* Transition: '<S201>:109' */
        if ((VeEBMC_t_eBoostOFFTimer < KeEBMR_t_P2PMaxUnavail) && (((uint32)
                VeEBMC_e_PreviousState) == CeEBMR_e_eBoostNotAvailable))
        {
            /* Transition: '<S201>:111' */
            /* Transition: '<S201>:114' */
            VeEBMC_e_P2PAvailability = CeEBMR_e_NotAvailable;

            /* Transition: '<S201>:118' */
        }
        else
        {
            /* Transition: '<S201>:119' */
            VeEBMC_e_P2PAvailability = CeEBMR_e_NoDisplay;
        }

        /* End of Constant: '<S11>/Calib' */
        /* Transition: '<S201>:121' */
    }
    else
    {
        /* Transition: '<S201>:106' */
        EBMR_ac_DW.is_eBoost_OFF_Deactivated_k = EBMR_ac_IN_eBoost_NotAvailable;

        /* VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus' */
        /* Entry 'eBoost_NotAvailable': '<S201>:4' */
        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostNotAvailable;
        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer_a = 0.0F;
        VeEBMC_e_P2PAvailability = CeEBMR_e_NotAvailable;
    }

    /* End of Constant: '<S10>/Calib' */
}

#endif

/* Model step function for TID1 */
#if Rte_SysCon_Variant_EBMR_1

FUNC(void, EBMR_CODE) EBMR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_EBMR_1

    boolean rtb_Logical3_p;

#endif

#if Rte_SysCon_Variant_EBMR_1

    sint16 rtb_VM_Conditional_Signal_Selector_1;

#endif

#if Rte_SysCon_Variant_EBMR_1

    boolean rtb_OR1_n;

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean rtb_Comparison3_n;

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean rtb_Comparison9_m;

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean rtb_Comparison6_l;

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean rtb_Comparison5_l;

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean rtb_AND_d;

#endif

#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    boolean rtb_OR1;

#endif

#if Rte_SysCon_Variant_EBMR_1

    float32 tmp;

#endif

#if Rte_SysCon_Variant_EBMR_1

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeDMIR_b_eBoostRequest'
     */
    (void)Rte_Read_VeDMIR_b_eBoostRequest_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeDMDR_e_DrvMdArb'
     */
    (void)Rte_Read_VeDMDR_e_DrvMdArb_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeENGR_b_KickDnReq'
     */
    (void)Rte_Read_VeENGR_b_KickDnReq_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bl);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeESMR_P_BattLTMaxLim'
     */
    (void)Rte_Read_VeESMR_P_BattLTMaxLim_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeTRGR_e_VldtdTransRngSt'
     */
    (void)Rte_Read_VeTRGR_e_VldtdTransRngSt_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpd'
     */
    (void)Rte_Read_VeCSVR_v_VehSpd_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Inhibit_eBoost'
     */
    (void)Rte_Read_VeSRAR_b_Inhibit_eBoost_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeHVTR_P_HV_BatPwr'
     */
    (void)Rte_Read_VeHVTR_P_HV_BatPwr_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeTMDR_i_TrueTrrnMd'
     */
    (void)Rte_Read_VeTMDR_i_TrueTrrnMd_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeTIMR_e_RaceModeSts'
     */
    (void)Rte_Read_VeTIMR_e_RaceModeSts_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jz);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VePLTR_e_ACCSystemSts'
     */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_as);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jz = CeTIMR_e_RaceMode_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VePLTR_e_HAS_TelltaleSts'
     */
    (void)Rte_Read_VePLTR_e_HAS_TelltaleSts_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_as = CePLTR_e_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VePLTR_e_AEBSystemSts'
     */
    (void)Rte_Read_VePLTR_e_AEBSystemSts_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* RelationalOperator: '<S39>/RelationalOperator4' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31'
     */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d =
        CePLTR_e_HAS_TelltaleSts_OFF;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeBPCR_T_BatModTmp'
     */
    (void)Rte_Read_VeBPCR_T_BatModTmp_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n = CePLTR_e_FCW_Off;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ESCActive'
     */
    (void)Rte_Read_VeBRKR_b_ESCActive_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeHMIR_b_DriveReady'
     */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ESCFailSts'
     */
    (void)Rte_Read_VeBRKR_b_ESCFailSts_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lo);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a = 0.0F;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lo = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m);

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeHTDR_b_PwrSht_RsrvDpltd'
     */
    (void)Rte_Read_VeHTDR_b_PwrSht_RsrvDpltd_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lg);

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeTMDR_e_ActualDrvMd'
     */
    (void)Rte_Read_VeTMDR_e_ActualDrvMd_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lg = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeTMDR_e_PropulsionMd'
     */
    (void)Rte_Read_VeTMDR_e_PropulsionMd_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ku);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* RelationalOperator: '<S39>/Equal6' incorporates:
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31'
     */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn = CeTMDR_e_NotDefine;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ku = CeTMDR_e_NotDefine;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPedalStat2FA'
     */
    (void)Rte_Read_VeBRKR_b_BrkPedalStat2FA_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k = 0.0F;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeHMIR_b_Popup_Msg1'
     */
    (void)Rte_Read_VeHMIR_b_Popup_Msg1_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m = false;

#endif

    /* SignalConversion generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
#if Rte_SysCon_Variant_EBMR_1 && Rte_SysCon_Variant_EBMR_2

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' incorporates:
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value
        (&EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_em);

#elif !Rte_SysCon_Variant_EBMR_2 && Rte_SysCon_Variant_EBMR_1

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i = false;

    /* VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31' */
    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_em = CeDMDR_e_No_Turtle_Mode;

#endif

    /* Outputs for Function Call SubSystem: '<Root>/EBMR_MedTED' */
    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/eBoost_Control'
     */
    /* Logic: '<S13>/Logical3' incorporates:
     *  Constant: '<S17>/Constant'
     *  Constant: '<S18>/Constant'
     *  Constant: '<S19>/Constant'
     *  Constant: '<S20>/Constant'
     *  Constant: '<S21>/Constant'
     *  Constant: '<S22>/Constant'
     *  Constant: '<S23>/Constant'
     *  Constant: '<S24>/Constant'
     *  Constant: '<S25>/Constant'
     *  Constant: '<S26>/Constant'
     *  Constant: '<S27>/Constant'
     *  Constant: '<S28>/Constant'
     *  Constant: '<S29>/Constant'
     *  RelationalOperator: '<S13>/Equal1'
     *  RelationalOperator: '<S13>/Equal10'
     *  RelationalOperator: '<S13>/Equal11'
     *  RelationalOperator: '<S13>/Equal12'
     *  RelationalOperator: '<S13>/Equal13'
     *  RelationalOperator: '<S13>/Equal2'
     *  RelationalOperator: '<S13>/Equal3'
     *  RelationalOperator: '<S13>/Equal4'
     *  RelationalOperator: '<S13>/Equal5'
     *  RelationalOperator: '<S13>/Equal6'
     *  RelationalOperator: '<S13>/Equal7'
     *  RelationalOperator: '<S13>/Equal8'
     *  RelationalOperator: '<S13>/Equal9'
     */
    rtb_Logical3_p = (((((((((((((((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive1) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive2)) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive3)) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive4)) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive5)) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive6)) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
        CeTRGR_e_TransRangeDrive7)) || (((uint32)
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
                            CeTRGR_e_TransRangeDrive8)) || (((uint32)
                            EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
                           CeTRGR_e_TransRangeDrive9)) || (((uint32)
                           EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
                          CeTRGR_e_TransRangeDrive10)) || (((uint32)
                          EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
                         CeTRGR_e_TransRangeDrive11)) || (((uint32)
                         EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
                        CeTRGR_e_TransRangeDrive12)) || (((uint32)
                        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j3) ==
                       CeTRGR_e_TransRangeDrive));

    /* Outputs for Atomic SubSystem: '<S13>/Hysteresis_1' */
    /* Switch: '<S31>/Switch1' incorporates:
     *  Constant: '<S31>/ConstantValue'
     *  Constant: '<S33>/Calib'
     *  Constant: '<S34>/Calib'
     *  RelationalOperator: '<S31>/GreaterThan'
     *  RelationalOperator: '<S31>/GreaterThan1'
     *  UnitDelay: '<S31>/UnitDelay'
     */
    if (EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >=
            KeEBMR_P_PBatMaxLim_RSP)
    {
        EBMR_ac_DW.UnitDelay_DSTATE_d = true;
    }
    else
    {
        EBMR_ac_DW.UnitDelay_DSTATE_d =
            ((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys >
              KeEBMR_P_PBatMaxLim_LSP) && (EBMR_ac_DW.UnitDelay_DSTATE_d));
    }

    /* End of Switch: '<S31>/Switch1' */
    /* End of Outputs for SubSystem: '<S13>/Hysteresis_1' */

    /* RelationalOperator: '<S39>/RelationalOperator2' incorporates:
     *  Logic: '<S39>/LogicalOperator'
     *  Logic: '<S39>/LogicalOperator1'
     *  Logic: '<S39>/LogicalOperator2'
     *  Logic: '<S39>/LogicalOperator3'
     *  Logic: '<S39>/LogicalOperator4'
     *  Logic: '<S39>/LogicalOperator5'
     *  Logic: '<S39>/LogicalOperator6'
     *  RelationalOperator: '<S39>/Comparison1'
     *  RelationalOperator: '<S39>/Comparison5'
     *  RelationalOperator: '<S39>/Equal6'
     *  RelationalOperator: '<S39>/Equal7'
     *  RelationalOperator: '<S39>/Equal8'
     *  RelationalOperator: '<S39>/RelationalOperator'
     *  RelationalOperator: '<S39>/RelationalOperator1'
     *  RelationalOperator: '<S39>/RelationalOperator3'
     *  RelationalOperator: '<S39>/RelationalOperator4'
     *  RelationalOperator: '<S39>/RelationalOperator5'
     *  RelationalOperator: '<S39>/RelationalOperator6'
     *  RelationalOperator: '<S39>/RelationalOperator7'
     *  SignalConversion generated from: '<S39>/VariantSource'
     */
#if Rte_SysCon_Variant_EBMR_2

    /* UnitDelay: '<S6>/Unit Delay' incorporates:
     *  Constant: '<S40>/Constant'
     *  Constant: '<S41>/Constant'
     *  Constant: '<S42>/Constant'
     *  Constant: '<S43>/Constant'
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S49>/Calib'
     *  Constant: '<S50>/Calib'
     *  Constant: '<S51>/Calib'
     *  Constant: '<S52>/Calib'
     *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31'
     */
    VeEBMC_b_PowerShot_Avail = ((((((((((((((((((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jz) !=
        CeTIMR_e_RaceMode_Active) && (((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_as) != CePLTR_e_Engaged))
        && ((((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d) ==
             CePLTR_e_HAS_TelltaleSts_OFF) || (((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d) ==
        CePLTR_e_HAS_TelltaleSts_GREY))) && (((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n) !=
        CePLTR_e_FCW_On_Full)) &&
        (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy >= ((float32)
        KeEBMR_T_HVBattMinLim))) &&
        (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy <= ((float32)
        KeEBMR_T_HVBattMaxLim))) &&
        (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)) &&
        (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l)) &&
        (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e)) &&
        (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_h <= ((float32)
        KeEBMR_T_MtrAMaxTempThrshld))) &&
        (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_a <= ((float32)
        KeEBMR_T_InvrtrMtrAMaxTempThrshld))) &&
        (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lo)) &&
        (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lg)) &&
        (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i)) && (((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_em) ==
        CeDMDR_e_No_Turtle_Mode)) && (((((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) != CeTMDR_e_Launch) &&
        (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) !=
         CeTMDR_e_MaxBoost)) && (((uint32)
        EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) !=
        CeTMDR_e_TimeAttack)));

#else

    /* UnitDelay: '<S6>/Unit Delay' incorporates:
     *  Constant: '<S39>/Constant'
     *  SignalConversion generated from: '<S39>/VariantSource'
     */
    VeEBMC_b_PowerShot_Avail = true;

#endif

    /* End of RelationalOperator: '<S39>/RelationalOperator2' */

    /* Logic: '<S13>/Logical2' incorporates:
     *  Constant: '<S30>/Constant'
     *  Constant: '<S32>/Calib'
     *  Constant: '<S35>/Calib'
     *  Constant: '<S36>/Calib'
     *  Constant: '<S37>/Calib'
     *  Constant: '<S38>/Calib'
     *  Logic: '<S13>/Logical1'
     *  Logic: '<S13>/LogicalOperator'
     *  RelationalOperator: '<S13>/Comparison1'
     *  RelationalOperator: '<S13>/Comparison2'
     *  RelationalOperator: '<S13>/Comparison4'
     *  RelationalOperator: '<S13>/Comparison5'
     *  RelationalOperator: '<S13>/Equal14'
     *  Selector: '<S13>/Selector'
     *  UnitDelay: '<S31>/UnitDelay'
     */
    VeEBMC_b_eBoostAvailable =
        (((((((((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l >
                 KeEBMR_v_MinSpdThrshld) &&
                (EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_l <
                 KeEBMR_v_MaxSpdThrshld)) && rtb_Logical3_p) &&
              (EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_j <
               KeEBMR_T_InvrtrMtrBMaxTempThrshld)) &&
             (EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_g <
              KeEBMR_T_MtrBMaxTempThrshld)) &&
            (!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o)) &&
           (EBMR_ac_DW.UnitDelay_DSTATE_d)) && ((KaEBMR_b_TrrnMdEnblSt
            [(EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_d)]) || (((uint32)
             EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e) ==
            CeDMDR_e_Sport))) && (VeEBMC_b_PowerShot_Avail));

    /* Outputs for Atomic SubSystem: '<S5>/EdgeRising' */
    /* Logic: '<S6>/OR1' incorporates:
     *  UnitDelay: '<S6>/Unit Delay'
     */
    rtb_OR1_n = !EBMR_ac_DW.UnitDelay_DSTATE_n1;

    /* Update for UnitDelay: '<S6>/Unit Delay' */
    EBMR_ac_DW.UnitDelay_DSTATE_n1 =
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bl;

    /* Logic: '<S5>/LogicalOperator' incorporates:
     *  Constant: '<S9>/Calib'
     *  Logic: '<S6>/AND'
     *  RelationalOperator: '<S5>/RelationalOperator'
     */
    rtb_OR1_n = (((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bl) &&
                  rtb_OR1_n) ||
                 (EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_m >
                  KeEBMR_Pct_PSAccelPedalThreshold));

    /* End of Outputs for SubSystem: '<S5>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S5>/eBoost_status_Arb' */
#if Rte_SysCon_Variant_EBMR_2

    /* Outputs for Atomic SubSystem: '<S15>/eBoost_BEV' */
    /* Chart: '<S199>/eBoost_State_Machine' incorporates:
     *  Constant: '<S10>/Calib'
     *  Constant: '<S11>/Calib'
     *  Constant: '<S7>/Calib'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
     */
    /* Gateway: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_BEV/eBoost_State_Machine */
    /* During: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_BEV/eBoost_State_Machine */
    if (((uint32)EBMR_ac_DW.is_active_c2_EBMR_ac) == 0U)
    {
        /* Entry: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_BEV/eBoost_State_Machine */
        EBMR_ac_DW.is_active_c2_EBMR_ac = 1U;

        /* Entry Internal: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_BEV/eBoost_State_Machine */
        /* Transition: '<S201>:2' */
        EBMR_ac_DW.is_c2_EBMR_ac = EBMR_ac_IN_eBoost_OFF_Deactivated;

        /* Entry 'eBoost_OFF_Deactivated': '<S201>:1' */
        EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer_g = 0.0F;
        VeEBMC_t_P2PTimer = 0.0F;
        EB_enter_internal_eBoost_OFF_Deactivated();
    }
    else
    {
        switch (EBMR_ac_DW.is_c2_EBMR_ac)
        {
          case EBMR_ac_IN_eBoost_Enabled:
            /* RelationalOperator: '<S53>/Comparison2' incorporates:
             *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
             */
            VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEnabled;

            /* During 'eBoost_Enabled': '<S201>:11' */
            if (((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) ||
                    (!VeEBMC_b_eBoostAvailable)) || (VeEBMC_t_eBoostEnabledTimer
                 > KeEBMR_t_MaxEnabledTime))
            {
                /* RelationalOperator: '<S53>/Comparison4' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                 */
                /* Transition: '<S201>:41' */
                /* Exit 'eBoost_Enabled': '<S201>:11' */
                VeEBMC_e_PreviousState = CeEBMR_e_eBoostEnabled;
                EBMR_ac_DW.is_c2_EBMR_ac = EBMR_ac_IN_eBoost_OFF_Deactivated;

                /* Entry 'eBoost_OFF_Deactivated': '<S201>:1' */
                EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer_g = 0.0F;
                VeEBMC_t_P2PTimer = 0.0F;
                EB_enter_internal_eBoost_OFF_Deactivated();
            }
            else if (((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                      (VeEBMC_b_eBoostAvailable)) && rtb_OR1_n)
            {
                /* RelationalOperator: '<S53>/Comparison4' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                 */
                /* Transition: '<S201>:17' */
                /* Exit 'eBoost_Enabled': '<S201>:11' */
                VeEBMC_e_PreviousState = CeEBMR_e_eBoostEnabled;
                EBMR_ac_DW.is_c2_EBMR_ac = EBMR_ac_IN_eBoost_Engaged;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_Engaged': '<S201>:9' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEngaged;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEngagedTimer' */
                VeEBMC_t_eBoostEngagedTimer = 0.0F;
                VeEBMC_b_P2PTimerReqFlag = true;
                VeEBMC_e_P2PAvailability = CeEBMR_e_Active;
                VeEBMC_t_P2PTimer = floorf(KeEBMR_t_MaxEngagedTime);
            }
            else
            {
                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEnabledTimer' incorporates:
                 *  Constant: '<S7>/Calib'
                 */
                VeEBMC_t_eBoostEnabledTimer = VeEBMC_t_eBoostEnabledTimer +
                    HeEBMR_t_dtEBMR;
                VeEBMC_t_P2PTimer = fmaxf(0.0F, KeEBMR_t_MaxEnabledTime - floorf
                    (VeEBMC_t_eBoostEnabledTimer));
            }
            break;

          case EBMR_ac_IN_eBoost_Engaged:
            /* RelationalOperator: '<S53>/Comparison2' incorporates:
             *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
             */
            VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEngaged;

            /* During 'eBoost_Engaged': '<S201>:9' */
            if (((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) ||
                    (!VeEBMC_b_eBoostAvailable)) || (VeEBMC_t_eBoostEngagedTimer
                 > KeEBMR_t_MaxEngagedTime))
            {
                /* RelationalOperator: '<S53>/Comparison4' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                 */
                /* Transition: '<S201>:84' */
                /* Exit 'eBoost_Engaged': '<S201>:9' */
                VeEBMC_e_PreviousState = CeEBMR_e_eBoostEngaged;
                EBMR_ac_DW.is_c2_EBMR_ac =
                    EBMR_ac_IN_eBoost_PrepPS_PrepNoPS_State;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostPrepTimer' */
                /* Entry 'eBoost_PrepPS_PrepNoPS_State': '<S201>:76' */
                VeEBMC_t_eBoostPrepTimer = 0.0F;
                VeEBMC_t_P2PTimer = 0.0F;
                VeEBMC_b_P2PTimerReqFlag = false;
                VeEBMC_e_P2PAvailability = CeEBMR_e_NoDisplay;

                /* Entry Internal 'eBoost_PrepPS_PrepNoPS_State': '<S201>:76' */
                /* Transition: '<S201>:90' */
                EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                    EBMR_ac_IN_eBoost_PrepNoPS;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_PrepNoPS': '<S201>:87' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_PrepNoPS;
            }
            else
            {
                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEngagedTimer' incorporates:
                 *  Constant: '<S7>/Calib'
                 */
                VeEBMC_t_eBoostEngagedTimer = VeEBMC_t_eBoostEngagedTimer +
                    HeEBMR_t_dtEBMR;
                VeEBMC_t_P2PTimer = fmaxf(0.0F, KeEBMR_t_MaxEngagedTime - floorf
                    (VeEBMC_t_eBoostEngagedTimer));
            }
            break;

          case EBMR_ac_IN_eBoost_OFF_Deactivated:
            /* During 'eBoost_OFF_Deactivated': '<S201>:1' */
            tmp = EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys -
                EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;
            if ((((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                    (VeEBMC_b_eBoostAvailable)) &&
                    (EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer_g >
                     KeEBMR_t_eBoostDeactivate)) && (tmp >
                    KeEBMR_P_eBoostBatThreshold))
            {
                /* Transition: '<S201>:18' */
                /* Exit Internal 'eBoost_OFF_Deactivated': '<S201>:1' */
                switch (EBMR_ac_DW.is_eBoost_OFF_Deactivated_k)
                {
                  case EBMR_ac_IN_eBoost_NotAvailable:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_NotAvailable': '<S201>:4' */
                    VeEBMC_e_PreviousState = CeEBMR_e_eBoostNotAvailable;
                    EBMR_ac_DW.is_eBoost_OFF_Deactivated_k =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case EBMR_ac_IN_eBoost_OFF:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_OFF': '<S201>:3' */
                    VeEBMC_e_PreviousState = CeEBMR_e_eBoostOFF;
                    EBMR_ac_DW.is_eBoost_OFF_Deactivated_k =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    EBMR_ac_DW.is_eBoost_OFF_Deactivated_k =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                EBMR_ac_DW.is_c2_EBMR_ac = EBMR_ac_IN_eBoost_Enabled;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_Enabled': '<S201>:11' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEnabled;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEnabledTimer' */
                VeEBMC_t_eBoostEnabledTimer = 0.0F;
                VeEBMC_e_P2PAvailability = CeEBMR_e_Available;
                VeEBMC_t_P2PTimer = floorf(KeEBMR_t_MaxEnabledTime);

                /* Entry Internal 'eBoost_Enabled': '<S201>:11' */
                /* Transition: '<S201>:127' */
                if (KeEBMR_b_P2PNoSwitch)
                {
                    /* Transition: '<S201>:124' */
                    /* Transition: '<S201>:129' */
                    VeEBMC_b_P2PTimerReqFlag = false;

                    /* Transition: '<S201>:122' */
                }
                else
                {
                    /* Transition: '<S201>:123' */
                    VeEBMC_b_P2PTimerReqFlag = true;
                }

                /* Transition: '<S201>:130' */
            }
            else
            {
                EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer_g += HeEBMR_t_dtEBMR;
                VeEBMC_b_P2PTimerReqFlag = false;
                if (((uint32)EBMR_ac_DW.is_eBoost_OFF_Deactivated_k) ==
                        EBMR_ac_IN_eBoost_NotAvailable)
                {
                    /* RelationalOperator: '<S53>/Comparison2' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                     */
                    VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostNotAvailable;

                    /* During 'eBoost_NotAvailable': '<S201>:4' */
                    if ((!KeEBMR_b_P2PNoSwitch) &&
                            ((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1)
                             || (EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer_a >
                                 KeEBMR_t_eBoostNotAvailable)))
                    {
                        /* RelationalOperator: '<S53>/Comparison4' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                         */
                        /* Transition: '<S201>:16' */
                        /* Exit 'eBoost_NotAvailable': '<S201>:4' */
                        VeEBMC_e_PreviousState = CeEBMR_e_eBoostNotAvailable;
                        EBMR_ac_DW.is_eBoost_OFF_Deactivated_k =
                            EBMR_ac_IN_eBoost_OFF;

                        /* RelationalOperator: '<S53>/Comparison2' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                         */
                        /* Entry 'eBoost_OFF': '<S201>:3' */
                        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

                        /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
                        VeEBMC_t_eBoostOFFTimer = 0.0F;
                        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer_a = 0.0F;

                        /* Entry Internal 'eBoost_OFF': '<S201>:3' */
                        /* Transition: '<S201>:109' */
                        if ((VeEBMC_t_eBoostOFFTimer < KeEBMR_t_P2PMaxUnavail) &&
                            (((uint32)VeEBMC_e_PreviousState) ==
                                CeEBMR_e_eBoostNotAvailable))
                        {
                            /* Transition: '<S201>:111' */
                            /* Transition: '<S201>:114' */
                            VeEBMC_e_P2PAvailability = CeEBMR_e_NotAvailable;

                            /* Transition: '<S201>:118' */
                        }
                        else
                        {
                            /* Transition: '<S201>:119' */
                            VeEBMC_e_P2PAvailability = CeEBMR_e_NoDisplay;
                        }

                        /* Transition: '<S201>:121' */
                    }
                    else
                    {
                        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer_a +=
                            HeEBMR_t_dtEBMR;
                    }
                }
                else
                {
                    /* RelationalOperator: '<S53>/Comparison2' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                     */
                    VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

                    /* During 'eBoost_OFF': '<S201>:3' */
                    if ((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                            (((VeEBMC_t_eBoostOFFTimer < KeEBMR_t_eBoostOff) ||
                              (!VeEBMC_b_eBoostAvailable)) || (tmp <
                            KeEBMR_P_eBoostBatThreshold)))
                    {
                        /* RelationalOperator: '<S53>/Comparison4' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                         */
                        /* Transition: '<S201>:15' */
                        /* Exit 'eBoost_OFF': '<S201>:3' */
                        VeEBMC_e_PreviousState = CeEBMR_e_eBoostOFF;
                        EBMR_ac_DW.is_eBoost_OFF_Deactivated_k =
                            EBMR_ac_IN_eBoost_NotAvailable;

                        /* RelationalOperator: '<S53>/Comparison2' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                         */
                        /* Entry 'eBoost_NotAvailable': '<S201>:4' */
                        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostNotAvailable;
                        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer_a = 0.0F;
                        VeEBMC_e_P2PAvailability = CeEBMR_e_NotAvailable;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
                        VeEBMC_t_eBoostOFFTimer = VeEBMC_t_eBoostOFFTimer +
                            HeEBMR_t_dtEBMR;
                    }
                }
            }
            break;

          default:
            /* During 'eBoost_PrepPS_PrepNoPS_State': '<S201>:76' */
            if (((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_PrepPS) &&
                    (VeEBMC_t_eBoostPrepTimer > KeEBMR_t_PowerShotPrepTime)) &&
                    (VeEBMC_b_eBoostAvailable))
            {
                /* Transition: '<S201>:79' */
                /* Exit Internal 'eBoost_PrepPS_PrepNoPS_State': '<S201>:76' */
                switch (EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State)
                {
                  case EBMR_ac_IN_eBoost_PrepNoPS:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_PrepNoPS': '<S201>:87' */
                    VeEBMC_e_PreviousState = CeEBMR_e_PrepNoPS;
                    EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case EBMR_ac_IN_eBoost_PrepPS:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_PrepPS': '<S201>:89' */
                    VeEBMC_e_PreviousState = CeEBMR_e_PrepPS;
                    EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                EBMR_ac_DW.is_c2_EBMR_ac = EBMR_ac_IN_eBoost_Enabled;

                /* RelationalOperator: '<S53>/Comparison2' */
                /* Entry 'eBoost_Enabled': '<S201>:11' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEnabled;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEnabledTimer' */
                VeEBMC_t_eBoostEnabledTimer = 0.0F;
                VeEBMC_e_P2PAvailability = CeEBMR_e_Available;
                VeEBMC_t_P2PTimer = floorf(KeEBMR_t_MaxEnabledTime);

                /* Entry Internal 'eBoost_Enabled': '<S201>:11' */
                /* Transition: '<S201>:127' */
                if (KeEBMR_b_P2PNoSwitch)
                {
                    /* Transition: '<S201>:124' */
                    /* Transition: '<S201>:129' */
                    VeEBMC_b_P2PTimerReqFlag = false;

                    /* Transition: '<S201>:122' */
                }
                else
                {
                    /* Transition: '<S201>:123' */
                    VeEBMC_b_P2PTimerReqFlag = true;
                }

                /* Transition: '<S201>:130' */
            }
            else if (((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_PrepNoPS) &&
                      (VeEBMC_t_eBoostPrepTimer > KeEBMR_t_PowerShotPrepTime)) ||
                     ((((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_PrepPS) ||
                        (((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_PrepNoPS)) &&
                       (VeEBMC_t_eBoostPrepTimer < KeEBMR_t_PowerShotPrepTime)) &&
                      (!VeEBMC_b_eBoostAvailable)))
            {
                /* Transition: '<S201>:81' */
                /* Transition: '<S201>:82' */
                /* Exit Internal 'eBoost_PrepPS_PrepNoPS_State': '<S201>:76' */
                switch (EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State)
                {
                  case EBMR_ac_IN_eBoost_PrepNoPS:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_PrepNoPS': '<S201>:87' */
                    VeEBMC_e_PreviousState = CeEBMR_e_PrepNoPS;
                    EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case EBMR_ac_IN_eBoost_PrepPS:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_PrepPS': '<S201>:89' */
                    VeEBMC_e_PreviousState = CeEBMR_e_PrepPS;
                    EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                EBMR_ac_DW.is_c2_EBMR_ac = EBMR_ac_IN_eBoost_OFF_Deactivated;

                /* Entry 'eBoost_OFF_Deactivated': '<S201>:1' */
                EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer_g = 0.0F;
                VeEBMC_t_P2PTimer = 0.0F;
                EB_enter_internal_eBoost_OFF_Deactivated();
            }
            else
            {
                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostPrepTimer' incorporates:
                 *  Constant: '<S7>/Calib'
                 */
                VeEBMC_t_eBoostPrepTimer = VeEBMC_t_eBoostPrepTimer +
                    HeEBMR_t_dtEBMR;
                if (((uint32)EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State) ==
                        EBMR_ac_IN_eBoost_PrepNoPS)
                {
                    /* RelationalOperator: '<S53>/Comparison2' */
                    VeEBMC_e_eBoostStatus = CeEBMR_e_PrepNoPS;

                    /* During 'eBoost_PrepNoPS': '<S201>:87' */
                    if ((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                            (VeEBMC_b_eBoostAvailable))
                    {
                        /* RelationalOperator: '<S53>/Comparison4' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                         */
                        /* Transition: '<S201>:91' */
                        /* Exit 'eBoost_PrepNoPS': '<S201>:87' */
                        VeEBMC_e_PreviousState = CeEBMR_e_PrepNoPS;
                        EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                            EBMR_ac_IN_eBoost_PrepPS;

                        /* RelationalOperator: '<S53>/Comparison2' */
                        /* Entry 'eBoost_PrepPS': '<S201>:89' */
                        VeEBMC_e_eBoostStatus = CeEBMR_e_PrepPS;
                    }
                }
                else
                {
                    /* RelationalOperator: '<S53>/Comparison2' */
                    VeEBMC_e_eBoostStatus = CeEBMR_e_PrepPS;

                    /* During 'eBoost_PrepPS': '<S201>:89' */
                    if (!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1)
                    {
                        /* RelationalOperator: '<S53>/Comparison4' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                         */
                        /* Transition: '<S201>:92' */
                        /* Exit 'eBoost_PrepPS': '<S201>:89' */
                        VeEBMC_e_PreviousState = CeEBMR_e_PrepPS;
                        EBMR_ac_DW.is_eBoost_PrepPS_PrepNoPS_State =
                            EBMR_ac_IN_eBoost_PrepNoPS;

                        /* RelationalOperator: '<S53>/Comparison2' */
                        /* Entry 'eBoost_PrepNoPS': '<S201>:87' */
                        VeEBMC_e_eBoostStatus = CeEBMR_e_PrepNoPS;
                    }
                }
            }
            break;
        }
    }

    /* End of Chart: '<S199>/eBoost_State_Machine' */
    /* End of Outputs for SubSystem: '<S15>/eBoost_BEV' */
#else

    /* Outputs for Atomic SubSystem: '<S15>/eBoost_P1P4' */
    /* Chart: '<S200>/eBoost_State_Machine' incorporates:
     *  Constant: '<S7>/Calib'
     */
    /* Gateway: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_P1P4/eBoost_State_Machine */
    /* During: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_P1P4/eBoost_State_Machine */
    if (((uint32)EBMR_ac_DW.is_active_c1_EBMR_ac) == 0U)
    {
        /* Entry: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_P1P4/eBoost_State_Machine */
        EBMR_ac_DW.is_active_c1_EBMR_ac = 1U;

        /* Entry Internal: EBMR_MedTED/eBoost_Control/eBoost_System_State/eBoost_status_Arb/eBoost_P1P4/eBoost_State_Machine */
        /* Transition: '<S202>:2' */
        EBMR_ac_DW.is_c1_EBMR_ac = EBMR_ac_IN_eBoost_OFF_Deactivated;

        /* Entry 'eBoost_OFF_Deactivated': '<S202>:1' */
        EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer = 0.0F;

        /* Entry Internal 'eBoost_OFF_Deactivated': '<S202>:1' */
        /* Transition: '<S202>:5' */
        EBMR_ac_DW.is_eBoost_OFF_Deactivated = EBMR_ac_IN_eBoost_OFF;

        /* RelationalOperator: '<S53>/Comparison2' incorporates:
         *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
         */
        /* Entry 'eBoost_OFF': '<S202>:3' */
        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

        /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
        VeEBMC_t_eBoostOFFTimer = 0.0F;
        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer = 0.0F;
    }
    else
    {
        switch (EBMR_ac_DW.is_c1_EBMR_ac)
        {
          case EBMR_ac_IN_eBoost_Enabled:
            /* RelationalOperator: '<S53>/Comparison2' incorporates:
             *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
             */
            VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEnabled;

            /* During 'eBoost_Enabled': '<S202>:11' */
            if (((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) ||
                    (!VeEBMC_b_eBoostAvailable)) || (VeEBMC_t_eBoostEnabledTimer
                 > KeEBMR_t_MaxEnabledTime))
            {
                /* RelationalOperator: '<S53>/Comparison4' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                 */
                /* Transition: '<S202>:41' */
                /* Exit 'eBoost_Enabled': '<S202>:11' */
                VeEBMC_e_PreviousState = CeEBMR_e_eBoostEnabled;
                EBMR_ac_DW.is_c1_EBMR_ac = EBMR_ac_IN_eBoost_OFF_Deactivated;

                /* Entry 'eBoost_OFF_Deactivated': '<S202>:1' */
                EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer = 0.0F;

                /* Entry Internal 'eBoost_OFF_Deactivated': '<S202>:1' */
                /* Transition: '<S202>:5' */
                EBMR_ac_DW.is_eBoost_OFF_Deactivated = EBMR_ac_IN_eBoost_OFF;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_OFF': '<S202>:3' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
                VeEBMC_t_eBoostOFFTimer = 0.0F;
                EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer = 0.0F;
            }
            else if (((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                      (VeEBMC_b_eBoostAvailable)) && rtb_OR1_n)
            {
                /* RelationalOperator: '<S53>/Comparison4' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                 */
                /* Transition: '<S202>:17' */
                /* Exit 'eBoost_Enabled': '<S202>:11' */
                VeEBMC_e_PreviousState = CeEBMR_e_eBoostEnabled;
                EBMR_ac_DW.is_c1_EBMR_ac = EBMR_ac_IN_eBoost_Engaged;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_Engaged': '<S202>:9' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEngaged;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEngagedTimer' */
                VeEBMC_t_eBoostEngagedTimer = 0.0F;
            }
            else
            {
                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEnabledTimer' incorporates:
                 *  Constant: '<S7>/Calib'
                 */
                VeEBMC_t_eBoostEnabledTimer = VeEBMC_t_eBoostEnabledTimer +
                    HeEBMR_t_dtEBMR;
            }
            break;

          case EBMR_ac_IN_eBoost_Engaged:
            /* RelationalOperator: '<S53>/Comparison2' incorporates:
             *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
             */
            VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEngaged;

            /* During 'eBoost_Engaged': '<S202>:9' */
            if ((((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) ||
                    (!VeEBMC_b_eBoostAvailable)) || (VeEBMC_t_eBoostEngagedTimer
                  > KeEBMR_t_MaxEngagedTime)) ||
                    (!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_bl))
            {
                /* RelationalOperator: '<S53>/Comparison4' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                 */
                /* Transition: '<S202>:19' */
                /* Exit 'eBoost_Engaged': '<S202>:9' */
                VeEBMC_e_PreviousState = CeEBMR_e_eBoostEngaged;
                EBMR_ac_DW.is_c1_EBMR_ac = EBMR_ac_IN_eBoost_OFF_Deactivated;

                /* Entry 'eBoost_OFF_Deactivated': '<S202>:1' */
                EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer = 0.0F;

                /* Entry Internal 'eBoost_OFF_Deactivated': '<S202>:1' */
                /* Transition: '<S202>:5' */
                EBMR_ac_DW.is_eBoost_OFF_Deactivated = EBMR_ac_IN_eBoost_OFF;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_OFF': '<S202>:3' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
                VeEBMC_t_eBoostOFFTimer = 0.0F;
                EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer = 0.0F;
            }
            else
            {
                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEngagedTimer' incorporates:
                 *  Constant: '<S7>/Calib'
                 */
                VeEBMC_t_eBoostEngagedTimer = VeEBMC_t_eBoostEngagedTimer +
                    HeEBMR_t_dtEBMR;
            }
            break;

          default:
            /* During 'eBoost_OFF_Deactivated': '<S202>:1' */
            tmp = EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubsys -
                EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_b;
            if ((((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                    (VeEBMC_b_eBoostAvailable)) &&
                    (EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer >
                     KeEBMR_t_eBoostDeactivate)) && (tmp >
                    KeEBMR_P_eBoostBatThreshold))
            {
                /* Transition: '<S202>:18' */
                /* Exit Internal 'eBoost_OFF_Deactivated': '<S202>:1' */
                switch (EBMR_ac_DW.is_eBoost_OFF_Deactivated)
                {
                  case EBMR_ac_IN_eBoost_NotAvailable:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_NotAvailable': '<S202>:4' */
                    VeEBMC_e_PreviousState = CeEBMR_e_eBoostNotAvailable;
                    EBMR_ac_DW.is_eBoost_OFF_Deactivated =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  case EBMR_ac_IN_eBoost_OFF:
                    /* RelationalOperator: '<S53>/Comparison4' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                     */
                    /* Exit 'eBoost_OFF': '<S202>:3' */
                    VeEBMC_e_PreviousState = CeEBMR_e_eBoostOFF;
                    EBMR_ac_DW.is_eBoost_OFF_Deactivated =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;

                  default:
                    EBMR_ac_DW.is_eBoost_OFF_Deactivated =
                        EBMR_ac_IN_NO_ACTIVE_CHILD;
                    break;
                }

                EBMR_ac_DW.is_c1_EBMR_ac = EBMR_ac_IN_eBoost_Enabled;

                /* RelationalOperator: '<S53>/Comparison2' incorporates:
                 *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                 */
                /* Entry 'eBoost_Enabled': '<S202>:11' */
                VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostEnabled;

                /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostEnabledTimer' */
                VeEBMC_t_eBoostEnabledTimer = 0.0F;
            }
            else
            {
                EBMR_ac_DW.VeEBMC_t_eBoostDeactivatedTimer += HeEBMR_t_dtEBMR;
                if (((uint32)EBMR_ac_DW.is_eBoost_OFF_Deactivated) ==
                        EBMR_ac_IN_eBoost_NotAvailable)
                {
                    /* RelationalOperator: '<S53>/Comparison2' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                     */
                    VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostNotAvailable;

                    /* During 'eBoost_NotAvailable': '<S202>:4' */
                    if ((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) ||
                        (EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer >
                            KeEBMR_t_eBoostNotAvailable))
                    {
                        /* RelationalOperator: '<S53>/Comparison4' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                         */
                        /* Transition: '<S202>:16' */
                        /* Exit 'eBoost_NotAvailable': '<S202>:4' */
                        VeEBMC_e_PreviousState = CeEBMR_e_eBoostNotAvailable;
                        EBMR_ac_DW.is_eBoost_OFF_Deactivated =
                            EBMR_ac_IN_eBoost_OFF;

                        /* RelationalOperator: '<S53>/Comparison2' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                         */
                        /* Entry 'eBoost_OFF': '<S202>:3' */
                        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

                        /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
                        VeEBMC_t_eBoostOFFTimer = 0.0F;
                        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer = 0.0F;
                    }
                    else
                    {
                        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer +=
                            HeEBMR_t_dtEBMR;
                    }
                }
                else
                {
                    /* RelationalOperator: '<S53>/Comparison2' incorporates:
                     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                     */
                    VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostOFF;

                    /* During 'eBoost_OFF': '<S202>:3' */
                    if ((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                            (((VeEBMC_t_eBoostOFFTimer < KeEBMR_t_eBoostOff) ||
                              (!VeEBMC_b_eBoostAvailable)) || (tmp <
                            KeEBMR_P_eBoostBatThreshold)))
                    {
                        /* RelationalOperator: '<S53>/Comparison4' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
                         */
                        /* Transition: '<S202>:15' */
                        /* Exit 'eBoost_OFF': '<S202>:3' */
                        VeEBMC_e_PreviousState = CeEBMR_e_eBoostOFF;
                        EBMR_ac_DW.is_eBoost_OFF_Deactivated =
                            EBMR_ac_IN_eBoost_NotAvailable;

                        /* RelationalOperator: '<S53>/Comparison2' incorporates:
                         *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
                         */
                        /* Entry 'eBoost_NotAvailable': '<S202>:4' */
                        VeEBMC_e_eBoostStatus = CeEBMR_e_eBoostNotAvailable;
                        EBMR_ac_DW.VeEBMC_t_eBoostNotAvailableTimer = 0.0F;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostOFFTimer' */
                        VeEBMC_t_eBoostOFFTimer = VeEBMC_t_eBoostOFFTimer +
                            HeEBMR_t_dtEBMR;
                    }
                }
            }
            break;
        }
    }

    /* End of Chart: '<S200>/eBoost_State_Machine' */

    /* VariantMerge generated from: '<S15>/VeEBMC_t_eBoostPrepTimer' incorporates:
     *  Constant: '<S200>/Constant'
     */
    VeEBMC_t_eBoostPrepTimer = 0.0F;

    /* End of Outputs for SubSystem: '<S15>/eBoost_P1P4' */
#endif

    /* End of Outputs for SubSystem: '<S5>/eBoost_status_Arb' */

    /* DataTypeConversion: '<S5>/Data Type Conversion' incorporates:
     *  SignalConversion generated from: '<S5>/Selector'
     */
#if Rte_SysCon_Variant_EBMR_2

    /* S-Function (fcgen): '<S5>/FcnCallGen' */
    /* VariantMerge generated from: '<S5>/Selector' */
    rtb_VM_Conditional_Signal_Selector_1 = (sint16)VeEBMC_e_P2PAvailability;

    /* Outputs for Function Call SubSystem: '<S5>/PowerShotPrepTime_Arb' */
    /* MinMax: '<S12>/Max' incorporates:
     *  Constant: '<S12>/Constant'
     *  Constant: '<S16>/Calib'
     *  Rounding: '<S12>/Floor'
     *  Sum: '<S12>/Subtract'
     */
    VeEBMC_t_PrepCntdwn = fmaxf(KeEBMR_t_PowerShotPrepTime - floorf
        (VeEBMC_t_eBoostPrepTimer), 0.0F);

    /* Rounding: '<S12>/Floor1' incorporates:
     *  Constant: '<S16>/Calib'
     *  Gain: '<S12>/Gain'
     *  Product: '<S12>/Divide'
     *  Sum: '<S12>/Subtract1'
     */
    VeEBMC_Pct_PwrSht_Prep_Pct = floorf(((KeEBMR_t_PowerShotPrepTime -
        VeEBMC_t_PrepCntdwn) * 100.0F) / KeEBMR_t_PowerShotPrepTime);

    /* End of Outputs for SubSystem: '<S5>/PowerShotPrepTime_Arb' */
    /* End of Outputs for S-Function (fcgen): '<S5>/FcnCallGen' */
#else

    /* VariantMerge generated from: '<S5>/Selector' incorporates:
     *  SignalConversion generated from: '<S5>/Selector'
     */
    rtb_VM_Conditional_Signal_Selector_1 = 0;

#endif

    /* End of DataTypeConversion: '<S5>/Data Type Conversion' */

    /* Logic: '<S13>/Logical4' */
    rtb_Logical3_p = !rtb_Logical3_p;

    /* Outputs for Atomic SubSystem: '<S5>/eBoost_Warning' */
#if Rte_SysCon_Variant_EBMR_2

    /* Outputs for Atomic SubSystem: '<S14>/Powershot_Warning' */
    /* RelationalOperator: '<S53>/Comparison3' incorporates:
     *  Constant: '<S66>/Constant'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
     */
    rtb_Comparison3_n = (((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_PrepNoPS);

    /* RelationalOperator: '<S53>/Comparison9' incorporates:
     *  Constant: '<S71>/Constant'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
     */
    rtb_Comparison9_m = (((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_PrepPS);

    /* Outputs for Atomic SubSystem: '<S53>/EdgeFalling' */
    /* Logic: '<S58>/AND' incorporates:
     *  Logic: '<S58>/OR1'
     *  UnitDelay: '<S58>/Unit Delay'
     */
    rtb_AND_d = ((!EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
                 (EBMR_ac_DW.UnitDelay_DSTATE_m));

    /* Update for UnitDelay: '<S58>/Unit Delay' */
    EBMR_ac_DW.UnitDelay_DSTATE_m =
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1;

    /* End of Outputs for SubSystem: '<S53>/EdgeFalling' */

    /* RelationalOperator: '<S53>/Comparison6' incorporates:
     *  DataTypeConversion: '<S53>/DataTypeConversion'
     *  UnitDelay: '<S53>/UnitDelay'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
     */
    rtb_Comparison6_l = (((sint32)VeEBMC_e_eBoostStatus) != ((sint32)
                          EBMR_ac_DW.UnitDelay_DSTATE_g));

    /* Outputs for Atomic SubSystem: '<S53>/StopWatchResetTriggerEnabled' */
    /* Outputs for Atomic SubSystem: '<S81>/EdgeRising_F2T' */
    /* Logic: '<S128>/OR1' incorporates:
     *  UnitDelay: '<S128>/Unit Delay'
     */
    rtb_OR1 = !EBMR_ac_DW.UnitDelay_DSTATE_p;

    /* Update for UnitDelay: '<S128>/Unit Delay' */
    EBMR_ac_DW.UnitDelay_DSTATE_p = rtb_Comparison6_l;

    /* Switch: '<S81>/Switch' incorporates:
     *  Constant: '<S73>/Calib'
     *  Constant: '<S81>/Constant Value2'
     *  Logic: '<S128>/AND'
     *  Sum: '<S81>/Subtraction'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    if (rtb_Comparison6_l && rtb_OR1)
    {
        EBMR_ac_DW.UnitDelay_DSTATE = 0.0F;
    }
    else
    {
        EBMR_ac_DW.UnitDelay_DSTATE += HeEBMR_t_dtEBMR;
    }

    /* End of Switch: '<S81>/Switch' */
    /* End of Outputs for SubSystem: '<S81>/EdgeRising_F2T' */
    /* End of Outputs for SubSystem: '<S53>/StopWatchResetTriggerEnabled' */

    /* RelationalOperator: '<S53>/RelationalOperator' incorporates:
     *  Constant: '<S74>/Calib'
     *  UnitDelay: '<S81>/Unit Delay'
     */
    VeEBMC_b_HMIPopUpFlag = (EBMR_ac_DW.UnitDelay_DSTATE <
        KeEBMR_t_HMIPopupTimer);

    /* Outputs for Atomic SubSystem: '<S53>/SignalLatchOnWithReset' */
    /* Logic: '<S79>/OR1' incorporates:
     *  Logic: '<S53>/LogicalOperator2'
     *  Logic: '<S79>/OR'
     *  UnitDelay: '<S79>/Unit Delay'
     */
    EBMR_ac_DW.UnitDelay_DSTATE_b = (rtb_AND_d || ((VeEBMC_b_HMIPopUpFlag) &&
        (EBMR_ac_DW.UnitDelay_DSTATE_b)));

    /* End of Outputs for SubSystem: '<S53>/SignalLatchOnWithReset' */

    /* RelationalOperator: '<S53>/Comparison2' incorporates:
     *  Constant: '<S65>/Constant'
     */
    rtb_AND_d = (((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_eBoostOFF);

    /* RelationalOperator: '<S53>/Comparison4' incorporates:
     *  Constant: '<S67>/Constant'
     */
    rtb_OR1 = (((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_eBoostEnabled);

    /* RelationalOperator: '<S53>/Comparison5' incorporates:
     *  Constant: '<S68>/Constant'
     */
    rtb_Comparison5_l = (((uint32)VeEBMC_e_PreviousState) ==
                         CeEBMR_e_eBoostEngaged);

    /* Outputs for Atomic SubSystem: '<S53>/EdgeRising' */
    /* Logic: '<S59>/OR1' incorporates:
     *  UnitDelay: '<S59>/Unit Delay'
     */
    rtb_Comparison6_l = !EBMR_ac_DW.UnitDelay_DSTATE_f;

    /* Update for UnitDelay: '<S59>/Unit Delay' */
    EBMR_ac_DW.UnitDelay_DSTATE_f =
        EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1;

    /* Outputs for Atomic SubSystem: '<S53>/SignalLatchOnWithReset1' */
    /* Logic: '<S80>/OR1' incorporates:
     *  Logic: '<S53>/LogicalOperator2'
     *  Logic: '<S59>/AND'
     *  Logic: '<S80>/OR'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    EBMR_ac_DW.UnitDelay_DSTATE_n =
        (((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1) &&
          rtb_Comparison6_l) || ((VeEBMC_b_HMIPopUpFlag) &&
          (EBMR_ac_DW.UnitDelay_DSTATE_n)));

    /* End of Outputs for SubSystem: '<S53>/SignalLatchOnWithReset1' */
    /* End of Outputs for SubSystem: '<S53>/EdgeRising' */

    /* RelationalOperator: '<S53>/Comparison7' incorporates:
     *  Constant: '<S69>/Constant'
     */
    rtb_Comparison6_l = (((uint32)VeEBMC_e_eBoostStatus) ==
                         CeEBMR_e_eBoostNotAvailable);

    /* If: '<S53>/If' incorporates:
     *  Constant: '<S61>/Constant'
     *  Constant: '<S62>/Constant'
     *  Constant: '<S63>/Constant'
     *  Constant: '<S64>/Constant'
     *  Constant: '<S70>/Constant'
     *  Constant: '<S72>/Constant'
     *  Constant: '<S75>/Calib'
     *  Constant: '<S76>/Calib'
     *  Logic: '<S53>/Logical1'
     *  Logic: '<S53>/Logical10'
     *  Logic: '<S53>/Logical11'
     *  Logic: '<S53>/Logical12'
     *  Logic: '<S53>/Logical13'
     *  Logic: '<S53>/Logical14'
     *  Logic: '<S53>/Logical15'
     *  Logic: '<S53>/Logical16'
     *  Logic: '<S53>/Logical17'
     *  Logic: '<S53>/Logical2'
     *  Logic: '<S53>/Logical3'
     *  Logic: '<S53>/Logical4'
     *  Logic: '<S53>/Logical5'
     *  Logic: '<S53>/Logical6'
     *  Logic: '<S53>/Logical7'
     *  Logic: '<S53>/Logical8'
     *  Logic: '<S53>/Logical9'
     *  RelationalOperator: '<S53>/Comparison1'
     *  RelationalOperator: '<S53>/Comparison10'
     *  RelationalOperator: '<S53>/Comparison11'
     *  RelationalOperator: '<S53>/Comparison12'
     *  RelationalOperator: '<S53>/Comparison13'
     *  RelationalOperator: '<S53>/Comparison8'
     *  UnitDelay: '<S79>/Unit Delay'
     *  UnitDelay: '<S80>/Unit Delay'
     */
    if ((KeEBMR_b_BEVPowershot) && ((((rtb_Comparison3_n && rtb_Comparison9_m) &&
           (EBMR_ac_DW.UnitDelay_DSTATE_b)) && (VeEBMC_b_HMIPopUpFlag)) ||
            (((rtb_AND_d && rtb_OR1) && (EBMR_ac_DW.UnitDelay_DSTATE_b)) &&
             (VeEBMC_b_HMIPopUpFlag))))
    {
        /* Outputs for IfAction SubSystem: '<S53>/DriverCancel' incorporates:
         *  ActionPort: '<S57>/ActionPort'
         */
        EBMR_ac_DriverCancel(&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

        /* End of Outputs for SubSystem: '<S53>/DriverCancel' */
    }
    else if ((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_eBoostEnabled) &&
             (VeEBMC_b_HMIPopUpFlag))
    {
        /* Outputs for IfAction SubSystem: '<S53>/EngageInstruction' incorporates:
         *  ActionPort: '<S60>/ActionPort'
         */
        /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
         *  Constant: '<S125>/Constant'
         *  SignalConversion generated from: '<S60>/Out1'
         */
        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM36;

        /* End of Outputs for SubSystem: '<S53>/EngageInstruction' */
    }
    else if ((((rtb_Comparison3_n && rtb_Comparison5_l) &&
               (EBMR_ac_DW.UnitDelay_DSTATE_b)) && (VeEBMC_b_HMIPopUpFlag)) &&
             (KeEBMR_b_BEVPowershot))
    {
        /* Outputs for IfAction SubSystem: '<S53>/Completed' incorporates:
         *  ActionPort: '<S56>/ActionPort'
         */
        /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
         *  Constant: '<S123>/Constant'
         *  SignalConversion generated from: '<S56>/Out1'
         */
        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM37;

        /* End of Outputs for SubSystem: '<S53>/Completed' */
    }
    else if (((((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_PrepPS) &&
                (((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_PrepNoPS)) &&
               (EBMR_ac_DW.UnitDelay_DSTATE_n)) && (VeEBMC_b_HMIPopUpFlag)) &&
             (KeEBMR_b_BEVPowershot))
    {
        /* Outputs for IfAction SubSystem: '<S53>/PowershotPrep' incorporates:
         *  ActionPort: '<S78>/ActionPort'
         */
        /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
         *  Constant: '<S127>/Constant'
         *  SignalConversion generated from: '<S78>/Out1'
         */
        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM38;

        /* End of Outputs for SubSystem: '<S53>/PowershotPrep' */
    }
    else if (((rtb_Comparison6_l && (((uint32)VeEBMC_e_PreviousState) ==
                CeEBMR_e_eBoostOFF)) && (VeEBMC_b_HMIPopUpFlag)) ||
             (((rtb_Comparison6_l && rtb_OR1_n) && (VeEBMC_b_HMIPopUpFlag)) &&
              (KeEBMR_b_P2PNoSwitch)))
    {
        /* Outputs for IfAction SubSystem: '<S53>/Unavailable_HMI' incorporates:
         *  ActionPort: '<S82>/ActionPort'
         */
        /* If: '<S82>/If' incorporates:
         *  Constant: '<S129>/Constant'
         *  Constant: '<S130>/Constant'
         *  Constant: '<S131>/Constant'
         *  Constant: '<S132>/Constant'
         *  Constant: '<S133>/Constant'
         *  Constant: '<S134>/Constant'
         *  Constant: '<S135>/Constant'
         *  Constant: '<S136>/Constant'
         *  Constant: '<S137>/Constant'
         *  Constant: '<S138>/Constant'
         *  Constant: '<S139>/Constant'
         *  Constant: '<S140>/Constant'
         *  Constant: '<S141>/Constant'
         *  Constant: '<S142>/Constant'
         *  Constant: '<S143>/Constant'
         *  Constant: '<S144>/Calib'
         *  Constant: '<S145>/Calib'
         *  Constant: '<S146>/Calib'
         *  Constant: '<S147>/Calib'
         *  Constant: '<S148>/Calib'
         *  Logic: '<S82>/Logical1'
         *  Logic: '<S82>/Logical2'
         *  Logic: '<S82>/Logical3'
         *  Logic: '<S82>/Logical4'
         *  Logic: '<S82>/Logical5'
         *  Logic: '<S82>/Logical6'
         *  Logic: '<S82>/Logical7'
         *  Logic: '<S82>/Logical8'
         *  Logic: '<S82>/Logical9'
         *  Logic: '<S82>/LogicalOperator1'
         *  Logic: '<S82>/LogicalOperator2'
         *  Logic: '<S82>/LogicalOperator3'
         *  Logic: '<S82>/LogicalOperator4'
         *  RelationalOperator: '<S82>/Comparison4'
         *  RelationalOperator: '<S82>/Equal1'
         *  RelationalOperator: '<S82>/Equal14'
         *  RelationalOperator: '<S82>/Equal2'
         *  RelationalOperator: '<S82>/Equal3'
         *  RelationalOperator: '<S82>/Equal4'
         *  RelationalOperator: '<S82>/Equal5'
         *  RelationalOperator: '<S82>/Equal6'
         *  RelationalOperator: '<S82>/Equal7'
         *  RelationalOperator: '<S82>/Equal8'
         *  RelationalOperator: '<S82>/Equal9'
         *  RelationalOperator: '<S82>/RelationalOperator'
         *  RelationalOperator: '<S82>/RelationalOperator1'
         *  RelationalOperator: '<S82>/RelationalOperator2'
         *  RelationalOperator: '<S82>/RelationalOperator3'
         *  RelationalOperator: '<S82>/RelationalOperator4'
         *  RelationalOperator: '<S82>/RelationalOperator5'
         *  RelationalOperator: '<S82>/RelationalOperator7'
         *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31'
         */
        if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                CeTMDR_e_Valet)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_Valet' incorporates:
             *  ActionPort: '<S165>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S182>/Constant'
             *  SignalConversion generated from: '<S165>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM15;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_Valet' */
        }
        else if (((((((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn)
                     == CeTMDR_e_Launch) && (KeEBMR_b_BEVPowershot)) ||
                   (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn)
                    == CeTMDR_e_LineLock)) || (((uint32)
                    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                   CeTMDR_e_Donut)) || (((uint32)
                   EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                  CeTMDR_e_Drift))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_RaceModes' incorporates:
             *  ActionPort: '<S163>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S180>/Constant'
             *  SignalConversion generated from: '<S163>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM16;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_RaceModes' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                 CeTMDR_e_Launch)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_P2P_Launch' incorporates:
             *  ActionPort: '<S160>/ActionPort'
             */
            EBMR_ac_Unavailable_P2P_Launch
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S82>/Unavailable_P2P_Launch' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                 CeTMDR_e_MaxBoost)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_P2P_Maxboost' incorporates:
             *  ActionPort: '<S161>/ActionPort'
             */
            EBMR_ac_Unavailable_P2P_Maxboost
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S82>/Unavailable_P2P_Maxboost' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                 CeTMDR_e_TimeAttack)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_P2P_Timeattack' incorporates:
             *  ActionPort: '<S162>/ActionPort'
             */
            EBMR_ac_Unavailable_P2P_Timeattack
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S82>/Unavailable_P2P_Timeattack' */
        }
        else if ((((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                  CeTMDR_e_Corsa) && rtb_OR1_n)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_P2P_Corsa' incorporates:
             *  ActionPort: '<S159>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S176>/Constant'
             *  SignalConversion generated from: '<S159>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar =
                CeEBMR_e_Warning8;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_P2P_Corsa' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_ku) ==
                 CeTMDR_e_Drag)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_MaxPower' incorporates:
             *  ActionPort: '<S157>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S174>/Constant'
             *  SignalConversion generated from: '<S157>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM17;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_MaxPower' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_as) ==
                 CePLTR_e_Engaged)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_ACCEngd' incorporates:
             *  ActionPort: '<S151>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S168>/Constant'
             *  SignalConversion generated from: '<S151>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM18;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_ACCEngd' */
        }
        else if (((((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d)
                   != CePLTR_e_HAS_TelltaleSts_GREY) && (((uint32)
                    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d) !=
                   CePLTR_e_HAS_TelltaleSts_OFF)) || (((uint32)
                   EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n) ==
                  CePLTR_e_FCW_On_Full))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_ADASEngd' incorporates:
             *  ActionPort: '<S152>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S169>/Constant'
             *  SignalConversion generated from: '<S152>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM19;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_ADASEngd' */
        }
        else if (rtb_Logical3_p)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_NotDrive' incorporates:
             *  ActionPort: '<S158>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S175>/Constant'
             *  SignalConversion generated from: '<S158>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM20;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_NotDrive' */
        }
        else if (((EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lg) ||
                  (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_k <
                   ((float32)KeEBMR_Pct_PowershotMinSOCThresh))) ||
                 ((!KeEBMR_b_BEVPowershot) && (((uint32)
                    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_em) !=
                   CeDMDR_e_No_Turtle_Mode)))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_LowBattery' incorporates:
             *  ActionPort: '<S156>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S173>/Constant'
             *  SignalConversion generated from: '<S156>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM21;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_LowBattery' */
        }
        else if (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy < ((float32)
                  KeEBMR_T_HVBattMinLim))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_LowBattTemp' incorporates:
             *  ActionPort: '<S155>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S172>/Constant'
             *  SignalConversion generated from: '<S155>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM22;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_LowBattTemp' */
        }
        else if (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy > ((float32)
                  KeEBMR_T_HVBattMaxLim))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_HighBattTemp' incorporates:
             *  ActionPort: '<S154>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S171>/Constant'
             *  SignalConversion generated from: '<S154>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM23;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_HighBattTemp' */
        }
        else if (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_ESCActv' incorporates:
             *  ActionPort: '<S153>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S170>/Constant'
             *  SignalConversion generated from: '<S153>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM24;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_ESCActv' */
        }
        else if ((((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o) ||
                   (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lo)) ||
                  (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i)) ||
                 (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable_SystemFault' incorporates:
             *  ActionPort: '<S164>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S181>/Constant'
             *  SignalConversion generated from: '<S164>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM25;

            /* End of Outputs for SubSystem: '<S82>/Unavailable_SystemFault' */
        }
        else if (((EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lg) ||
                  (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l)) ||
                 (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e))
        {
            /* Outputs for IfAction SubSystem: '<S82>/Unavailable' incorporates:
             *  ActionPort: '<S150>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S167>/Constant'
             *  SignalConversion generated from: '<S150>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM26;

            /* End of Outputs for SubSystem: '<S82>/Unavailable' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S82>/NoHMI' incorporates:
             *  ActionPort: '<S149>/ActionPort'
             */
            EBMR_ac_NoHMI(&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S82>/NoHMI' */
        }

        /* End of If: '<S82>/If' */
        /* End of Outputs for SubSystem: '<S53>/Unavailable_HMI' */
    }
    else if (((rtb_AND_d && rtb_Comparison9_m) || (((rtb_AND_d ||
                 rtb_Comparison3_n) || (((uint32)VeEBMC_e_eBoostStatus) ==
                 CeEBMR_e_eBoostNotAvailable)) && ((rtb_OR1 || rtb_Comparison5_l)
                || (((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_PrepNoPS)))) &&
             (VeEBMC_b_HMIPopUpFlag))
    {
        /* Outputs for IfAction SubSystem: '<S53>/Cancelled_HMI' incorporates:
         *  ActionPort: '<S55>/ActionPort'
         */
        /* If: '<S55>/If' incorporates:
         *  Constant: '<S100>/Constant'
         *  Constant: '<S101>/Constant'
         *  Constant: '<S102>/Constant'
         *  Constant: '<S103>/Constant'
         *  Constant: '<S104>/Constant'
         *  Constant: '<S105>/Constant'
         *  Constant: '<S106>/Constant'
         *  Constant: '<S107>/Calib'
         *  Constant: '<S108>/Calib'
         *  Constant: '<S95>/Constant'
         *  Constant: '<S96>/Constant'
         *  Constant: '<S97>/Constant'
         *  Constant: '<S98>/Constant'
         *  Constant: '<S99>/Constant'
         *  Logic: '<S55>/Logical1'
         *  Logic: '<S55>/Logical2'
         *  Logic: '<S55>/Logical3'
         *  Logic: '<S55>/Logical4'
         *  Logic: '<S55>/Logical5'
         *  Logic: '<S55>/Logical9'
         *  Logic: '<S55>/LogicalOperator1'
         *  Logic: '<S55>/LogicalOperator2'
         *  Logic: '<S55>/LogicalOperator3'
         *  RelationalOperator: '<S55>/Equal1'
         *  RelationalOperator: '<S55>/Equal14'
         *  RelationalOperator: '<S55>/Equal2'
         *  RelationalOperator: '<S55>/Equal3'
         *  RelationalOperator: '<S55>/Equal4'
         *  RelationalOperator: '<S55>/Equal6'
         *  RelationalOperator: '<S55>/Equal7'
         *  RelationalOperator: '<S55>/Equal8'
         *  RelationalOperator: '<S55>/RelationalOperator1'
         *  RelationalOperator: '<S55>/RelationalOperator2'
         *  RelationalOperator: '<S55>/RelationalOperator3'
         *  RelationalOperator: '<S55>/RelationalOperator4'
         *  RelationalOperator: '<S55>/RelationalOperator5'
         *  VariantMerge generated from: '<Root>/TmpVM_FcnCallSubsysAtEBMR_MedTEDInport31'
         */
        if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                CeTMDR_e_Valet)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_Valet' incorporates:
             *  ActionPort: '<S94>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S121>/Constant'
             *  SignalConversion generated from: '<S94>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM27;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_Valet' */
        }
        else if (((((((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn)
                     == CeTMDR_e_Launch) && (KeEBMR_b_BEVPowershot)) ||
                   (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn)
                    == CeTMDR_e_LineLock)) || (((uint32)
                    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                   CeTMDR_e_Donut)) || (((uint32)
                   EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                  CeTMDR_e_Drift))
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_RaceModes' incorporates:
             *  ActionPort: '<S91>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S118>/Constant'
             *  SignalConversion generated from: '<S91>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM28;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_RaceModes' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                 CeTMDR_e_Launch)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_Launch' incorporates:
             *  ActionPort: '<S88>/ActionPort'
             */
            EBMR_ac_Unavailable_P2P_Launch
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S55>/Cancelled_Launch' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                 CeTMDR_e_MaxBoost)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_Maxboost' incorporates:
             *  ActionPort: '<S89>/ActionPort'
             */
            EBMR_ac_Unavailable_P2P_Maxboost
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S55>/Cancelled_Maxboost' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_jn) ==
                 CeTMDR_e_TimeAttack)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_TimeAttack' incorporates:
             *  ActionPort: '<S93>/ActionPort'
             */
            EBMR_ac_Unavailable_P2P_Timeattack
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S55>/Cancelled_TimeAttack' */
        }
        else if (((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_as) ==
                 CePLTR_e_Engaged)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_ACCEngd' incorporates:
             *  ActionPort: '<S84>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S111>/Constant'
             *  SignalConversion generated from: '<S84>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM29;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_ACCEngd' */
        }
        else if (((((uint32)EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d)
                   != CePLTR_e_HAS_TelltaleSts_GREY) && (((uint32)
                    EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_d) !=
                   CePLTR_e_HAS_TelltaleSts_OFF)) || (((uint32)
                   EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_n) ==
                  CePLTR_e_FCW_On_Full))
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_ADASEngd' incorporates:
             *  ActionPort: '<S85>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S112>/Constant'
             *  SignalConversion generated from: '<S85>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM30;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_ADASEngd' */
        }
        else if (rtb_Logical3_p)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_NotDrive' incorporates:
             *  ActionPort: '<S90>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S117>/Constant'
             *  SignalConversion generated from: '<S90>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM31;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_NotDrive' */
        }
        else if (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSubsy > ((float32)
                  KeEBMR_T_HVBattMaxLim))
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_HighBattTemp' incorporates:
             *  ActionPort: '<S87>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S114>/Constant'
             *  SignalConversion generated from: '<S87>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM32;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_HighBattTemp' */
        }
        else if (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_j)
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_ESCActv' incorporates:
             *  ActionPort: '<S86>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S113>/Constant'
             *  SignalConversion generated from: '<S86>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM33;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_ESCActv' */
        }
        else if ((((EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_o) ||
                   (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSu_lo)) ||
                  (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_i)) ||
                 (EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_m))
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled_SystemFault' incorporates:
             *  ActionPort: '<S92>/ActionPort'
             */
            /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
             *  Constant: '<S119>/Constant'
             *  SignalConversion generated from: '<S92>/Out1'
             */
            EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_TM34;

            /* End of Outputs for SubSystem: '<S55>/Cancelled_SystemFault' */
        }
        else if ((!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_l) ||
                 (!EBMR_ac_B.VM_Conditional_Signal_TmpVM_FcnCallSub_e))
        {
            /* Outputs for IfAction SubSystem: '<S55>/Cancelled' incorporates:
             *  ActionPort: '<S83>/ActionPort'
             */
            EBMR_ac_DriverCancel
                (&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S55>/Cancelled' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S55>/NoHMI' incorporates:
             *  ActionPort: '<S109>/ActionPort'
             */
            EBMR_ac_NoHMI(&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

            /* End of Outputs for SubSystem: '<S55>/NoHMI' */
        }

        /* End of If: '<S55>/If' */
        /* End of Outputs for SubSystem: '<S53>/Cancelled_HMI' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S53>/NoHMI' incorporates:
         *  ActionPort: '<S77>/ActionPort'
         */
        EBMR_ac_NoHMI(&EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

        /* End of Outputs for SubSystem: '<S53>/NoHMI' */
    }

    /* End of If: '<S53>/If' */

    /* Update for UnitDelay: '<S53>/UnitDelay' incorporates:
     *  DataTypeConversion: '<S53>/DataTypeConversion'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
     */
    EBMR_ac_DW.UnitDelay_DSTATE_g = (sint16)VeEBMC_e_eBoostStatus;

    /* End of Outputs for SubSystem: '<S14>/Powershot_Warning' */
#else

    /* Outputs for Atomic SubSystem: '<S14>/eBoost_Warning' */
    /* If: '<S54>/If' incorporates:
     *  Constant: '<S184>/Constant'
     *  Constant: '<S185>/Constant'
     *  Constant: '<S186>/Constant'
     *  Constant: '<S187>/Constant'
     *  Constant: '<S188>/Constant'
     *  Constant: '<S189>/Constant'
     *  Constant: '<S190>/Constant'
     *  Constant: '<S192>/Calib'
     *  Constant: '<S193>/Calib'
     *  Constant: '<S194>/Calib'
     *  Logic: '<S54>/Logical'
     *  Logic: '<S54>/Logical1'
     *  Logic: '<S54>/Logical2'
     *  Logic: '<S54>/Logical3'
     *  Logic: '<S54>/Logical4'
     *  RelationalOperator: '<S54>/Comparison1'
     *  RelationalOperator: '<S54>/Comparison10'
     *  RelationalOperator: '<S54>/Comparison11'
     *  RelationalOperator: '<S54>/Comparison3'
     *  RelationalOperator: '<S54>/Comparison4'
     *  RelationalOperator: '<S54>/Comparison5'
     *  RelationalOperator: '<S54>/Comparison6'
     *  RelationalOperator: '<S54>/Comparison7'
     *  RelationalOperator: '<S54>/Comparison8'
     *  RelationalOperator: '<S54>/Comparison9'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_PreviousState'
     */
    if ((((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_eBoostNotAvailable) &&
            (((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_eBoostOFF)) &&
            (EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSub_j1)) && (((uint32)
            EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e) !=
            CeDMDR_e_Sport))
    {
        /* Outputs for IfAction SubSystem: '<S54>/Inhibit_SPORTMODE' incorporates:
         *  ActionPort: '<S191>/Action Port'
         */
        /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
         *  Constant: '<S197>/Constant'
         *  SignalConversion generated from: '<S191>/Out1'
         */
        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar =
            CeEBMR_e_eBoostInhibitSPORTMODE;

        /* End of Outputs for SubSystem: '<S54>/Inhibit_SPORTMODE' */
    }
    else if ((((((uint32)VeEBMC_e_eBoostStatus) == CeEBMR_e_eBoostOFF) &&
               (((((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_eBoostEnabled) &&
                 (VeEBMC_t_eBoostEnabledTimer < KeEBMR_t_MaxEnabledTime)) ||
                ((((uint32)VeEBMC_e_PreviousState) == CeEBMR_e_eBoostEngaged) &&
                 (VeEBMC_t_eBoostEngagedTimer < KeEBMR_t_MaxEngagedTime)))) &&
              (((uint32)EBMR_ac_B.TmpSignalConversionAtTmpVM_FcnCallSubs_e) !=
               CeDMDR_e_Sport)) && (VeEBMC_t_eBoostOFFTimer < KeEBMR_t_eBoostOff))
    {
        /* Outputs for IfAction SubSystem: '<S54>/Deactivate_SPORTMODE' incorporates:
         *  ActionPort: '<S183>/Action Port'
         */
        /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
         *  Constant: '<S196>/Constant'
         *  SignalConversion generated from: '<S183>/Out1'
         */
        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar =
            CeEBMR_e_DeactivatedSPORTMODE;

        /* End of Outputs for SubSystem: '<S54>/Deactivate_SPORTMODE' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S54>/None' incorporates:
         *  ActionPort: '<S195>/Action Port'
         */
        /* VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
         *  Constant: '<S198>/Constant'
         *  SignalConversion generated from: '<S195>/Out1'
         */
        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar = CeEBMR_e_None;

        /* End of Outputs for SubSystem: '<S54>/None' */
    }

    /* End of If: '<S54>/If' */
    /* End of Outputs for SubSystem: '<S14>/eBoost_Warning' */
#endif

    /* End of Outputs for SubSystem: '<S5>/eBoost_Warning' */
    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeEBMC_Pct_PwrSht_Prep' incorporates:
     *  SignalConversion generated from: '<S1>/VeEBMC_b_P2PTimerReqFlag'
     */
#if Rte_SysCon_Variant_EBMR_2

    /* Outport: '<Root>/VeEBMR_Pct_PwrSht_Prep' */
    (void)Rte_Write_VeEBMR_Pct_PwrSht_Prep_Value(VeEBMC_Pct_PwrSht_Prep_Pct);

    /* Outport: '<Root>/VeEBMR_b_P2PTimerReqFlag' */
    (void)Rte_Write_VeEBMR_b_P2PTimerReqFlag_Value(VeEBMC_b_P2PTimerReqFlag);

#endif

    /* End of SignalConversion generated from: '<S1>/VeEBMC_Pct_PwrSht_Prep' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/eBoost_Control'
     */
    /* Outport: '<Root>/VeEBMR_e_P2PAvailability' incorporates:
     *  Constant: '<S8>/Calib'
     *  Selector: '<S5>/Selector'
     *  SignalConversion generated from: '<S1>/VeEBMC_e_P2PAvailability'
     */
    (void)Rte_Write_VeEBMR_e_P2PAvailability_Value(KaEBMR_e_P2PStatusRemap
        [(rtb_VM_Conditional_Signal_Selector_1)]);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */

    /* SignalConversion generated from: '<S1>/VeEBMC_t_P2PTimer' incorporates:
     *  SignalConversion generated from: '<S1>/VeEBMC_t_PrepCntDwn'
     */
#if Rte_SysCon_Variant_EBMR_2

    /* Outport: '<Root>/VeEBMR_t_P2PTimer' */
    (void)Rte_Write_VeEBMR_t_P2PTimer_Value(VeEBMC_t_P2PTimer);

    /* Outport: '<Root>/VeEBMR_t_PrepCntDwn' */
    (void)Rte_Write_VeEBMR_t_PrepCntDwn_Value(VeEBMC_t_PrepCntdwn);

#endif

    /* End of SignalConversion generated from: '<S1>/VeEBMC_t_P2PTimer' */

    /* S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/EBMO'
     */
    /* Outport: '<Root>/VeEBMR_e_eBoostStatus' incorporates:
     *  Inport: '<S3>/VeEBMC_e_eBoostStatus'
     *  SignalConversion generated from: '<S1>/VeEBMO_e_eBoostStatus'
     *  VariantMerge generated from: '<S15>/VeEBMC_e_eBoostStatus'
     */
    (void)Rte_Write_VeEBMR_e_eBoostStatus_Value(VeEBMC_e_eBoostStatus);

    /* Outport: '<Root>/VeEBMR_e_eBoostWarning' incorporates:
     *  Inport: '<S3>/VeEBMC_e_eBoostWarning'
     *  SignalConversion generated from: '<S1>/VeEBMO_e_eBoostWarning'
     *  VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning'
     */
    (void)Rte_Write_VeEBMR_e_eBoostWarning_Value
        (EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar);

    /* End of Outputs for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<Root>/EBMR_MedTED' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

}

#endif

/* Model initialize function */
FUNC(void, EBMR_CODE) EBMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {

#if Rte_SysCon_Variant_EBMR_1

        EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar =
            CeEBMR_e_DeactivatedESCOff;

#endif

    }

#if Rte_SysCon_Variant_EBMR_1

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
    /* SystemInitialize for Function Call SubSystem: '<Root>/EBMR_MedTED' */
    /* SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' incorporates:
     *  SubSystem: '<S1>/eBoost_Control'
     */
    /* SystemInitialize for Atomic SubSystem: '<S5>/eBoost_Warning' */
#if Rte_SysCon_Variant_EBMR_2

    /* SystemInitialize for Atomic SubSystem: '<S14>/Powershot_Warning' */
    /* SystemInitialize for VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
     *  Merge: '<S53>/Merge'
     */
    EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar =
        CeEBMR_e_DeactivatedESCOff;

    /* End of SystemInitialize for SubSystem: '<S14>/Powershot_Warning' */
#else

    /* SystemInitialize for Atomic SubSystem: '<S14>/eBoost_Warning' */
    /* SystemInitialize for VariantMerge generated from: '<S14>/VeEBMC_e_eBoostWarning' incorporates:
     *  Merge: '<S54>/Merge'
     */
    EBMR_ac_B.VariantMergeForOutportVeEBMC_e_eBoostWar =
        CeEBMR_e_DeactivatedESCOff;

    /* End of SystemInitialize for SubSystem: '<S14>/eBoost_Warning' */
#endif

    /* End of SystemInitialize for SubSystem: '<S5>/eBoost_Warning' */
    /* End of SystemInitialize for S-Function (fcgen): '<S1>/FcnCallGen' */
    /* End of SystemInitialize for SubSystem: '<Root>/EBMR_MedTED' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
#endif

    /* Outputs for Atomic SubSystem: '<Root>/EBMR_PwrOn' */
    /* Outputs for Atomic SubSystem: '<S2>/EBMR_Initialization' */
    /* Outport: '<Root>/VeEBMR_e_eBoostStatus' incorporates:
     *  Constant: '<S204>/Constant'
     */
    (void)Rte_Write_VeEBMR_e_eBoostStatus_Value(CeEBMR_e_eBoostOFF);

    /* Outport: '<Root>/VeEBMR_e_eBoostWarning' incorporates:
     *  Constant: '<S205>/Constant'
     */
    (void)Rte_Write_VeEBMR_e_eBoostWarning_Value(CeEBMR_e_None);

    /* Outport: '<Root>/VeEBMR_e_P2PAvailability' incorporates:
     *  Constant: '<S206>/Constant'
     *  DataTypeConversion: '<S203>/Data Type Conversion'
     */
    (void)Rte_Write_VeEBMR_e_P2PAvailability_Value(CeEBMR_e_NoDisplay);

    /* End of Outputs for SubSystem: '<S2>/EBMR_Initialization' */
    /* End of Outputs for SubSystem: '<Root>/EBMR_PwrOn' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
