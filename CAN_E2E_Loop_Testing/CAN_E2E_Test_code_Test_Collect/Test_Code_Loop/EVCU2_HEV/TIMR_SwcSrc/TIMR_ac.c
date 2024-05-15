/*
 * File: TIMR_ac.c
 *
 * Code generated for Simulink model 'TIMR_ac'.
 *
 * Model version                  : 9.651
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:35:45 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Emulation hardware selection:
 *    Differs from embedded hardware (Generic->MATLAB Host Computer)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TIMR_ac.h"

/* Named constants for Chart: '<S57>/Custom_Terrain_Mode' */
#define TIMR_ac_IN_Drag                ((uint8)1U)
#define TIMR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#define TIMR_ac_IN_Track               ((uint8)2U)

/* Named constants for Chart: '<S108>/RaceMode_Arbitration' */
#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Donut               ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_DonutOn             ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Drift               ((uint8)2U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Launch              ((uint8)3U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_LineLock            ((uint8)4U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_LineLockOn          ((uint8)4U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_New_Race_Request    ((uint8)1U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_No_RaceMode         ((uint8)2U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_PrepStatus          ((uint8)5U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Active     ((uint8)3U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Cancelled  ((uint8)4U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Completed  ((uint8)5U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_On         ((uint8)6U)
#endif

#if !Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Unavaiable ((uint8)7U)
#endif

/* Named constants for Chart: '<S321>/Chart' */
#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_NoPopUp             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_PopUpEvent          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_PopUpPer            ((uint8)3U)
#endif

/* Named constants for Chart: '<S109>/RaceMode_Arbitration' */
#if Rte_SysCon_Variant_TIMR_3
#define IN_No_Race_Mode_1Paddle_Release ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_IN_No_RaceMode_NOT_ALLOWED ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Lnch_Active         ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Lnch_NotActive      ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_MaxBoost_Active     ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_MaxBoost_NotActive  ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_No_RaceMode_IDLE    ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Paddle_Activation   ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Active_j   ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Cancelled_p ((uint8)5U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_Completed_k ((uint8)6U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_RaceMode_On_p       ((uint8)7U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define T_IN_No_Race_Mode_1Paddle_Press ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define T_IN_No_Race_Mode_2Paddle_Press ((uint8)3U)
#endif

/* Named constants for Chart: '<S109>/Race_Prep_MaxBoost' */
#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Acc_Off             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Acc_On              ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Acc_Race            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TIMR_3
#define TIMR_ac_IN_Acc_Reserved2       ((uint8)4U)
#endif

/* Named constants for Chart: '<S62>/Chart1' */
#define TIMR_ac_IN_LaunchSwitch        ((uint8)1U)
#define TIMR_ac_IN_None                ((uint8)2U)
#define TIMR_ac_IN_Radio               ((uint8)3U)
#define TIMR_ac_IN_Selection           ((uint8)4U)

/* Named constants for Chart: '<S65>/Button_Press' */
#define TIMR_ac_IN_Not_Pressed         ((uint8)1U)
#define TIMR_ac_IN_Pressed             ((uint8)2U)
#define TIMR_ac_IN_Request             ((uint8)3U)

/* Named constants for Chart: '<S65>/Race_Prep_Mode' */
#define TIMR_ac_IN_Race_Prep_Active    ((uint8)1U)
#define TIMR_ac_IN_Race_Prep_Enabled   ((uint8)2U)
#define TIMR_ac_IN_Race_Prep_Off       ((uint8)3U)

/* Named constants for Chart: '<S554>/Custom_Interface_Button_Diag' */
#if Rte_SysCon_Variant_TIMR_2
#define TIMR_ac_IN_DEBOUNCE            ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_2
#define TIMR_ac_IN_FAIL_MATURED        ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_2
#define TIMR_ac_IN_Failing             ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TIMR_2
#define TIMR_ac_IN_IDLE                ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TIMR_2
#define TIMR_ac_IN_PASSING             ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TIMR_2
#define TIMR_ac_IN_PASS_MATURED        ((uint8)3U)
#endif

/* user code (top of source file) */
/*
   PRODUCTION CONFIGURATION
 */

/* Exported data definition */
#define START_SEC_CALIB_UNSPECIFIED_TIMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
static volatile CONST(boolean, TIMR_VAR_INIT) HeTIMR_b_EnaSoftLatch = 0;/* Referenced by: '<S102>/Calib' */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KaTIMR_e_GlobalReqMap[32] =
{
    CeTMDR_e_NotDefine, CeTMDR_e_Auto, CeTMDR_e_Sport, CeTMDR_e_Track,
    CeTMDR_e_Snow, CeTMDR_e_Valet, CeTMDR_e_Rock, CeTMDR_e_Tow,
    CeTMDR_e_NotDefine, CeTMDR_e_Launch, CeTMDR_e_NotDefine, CeTMDR_e_Custom,
    CeTMDR_e_Mud, CeTMDR_e_Sand, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_Offroad, CeTMDR_e_Baja, CeTMDR_e_MudSand,
    CeTMDR_e_Drag, CeTMDR_e_LineLock, CeTMDR_e_Drift, CeTMDR_e_Donut,
    CeTMDR_e_NotDefine, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_NotDefine
};                                     /* Referenced by:
                                        * '<S34>/Calib'
                                        * '<S36>/Calib'
                                        */

static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT)
    KaTIMR_e_RadioCustomModeMap[16] =
{
    CeTMDR_e_NotDefine, CeTMDR_e_Street, CeTMDR_e_Valet, CeTMDR_e_Sport,
    CeTMDR_e_NotDefine, CeTMDR_e_Track, CeTMDR_e_ECO, CeTMDR_e_Snow,
    CeTMDR_e_Rock, CeTMDR_e_Tow, CeTMDR_e_Drag, CeTMDR_e_Mud, CeTMDR_e_Sand,
    CeTMDR_e_Baja, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine
};                                     /* Referenced by: '<S44>/Calib' */

static volatile CONST(TeTIMR_e_TrrnMdBtnSts, TIMR_VAR_INIT)
    KaTIMR_e_TrrnMdBtnMap[8] =
{
    CeTIMR_e_NotActivated, CeTIMR_e_Activated, CeTIMR_e_NotActivated,
    CeTIMR_e_NotActivated, CeTIMR_e_NotActivated, CeTIMR_e_ShortToGround,
    CeTIMR_e_ShortToPower, CeTIMR_e_SNA
};                                     /* Referenced by:
                                        * '<S32>/Calib'
                                        * '<S39>/Calib'
                                        * '<S41>/Calib'
                                        * '<S46>/Calib'
                                        * '<S49>/Calib'
                                        */

static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KaTIMR_e_TrrnMdMp[32] =
{
    CeTMDR_e_NotDefine, CeTMDR_e_Auto, CeTMDR_e_Sport, CeTMDR_e_Track,
    CeTMDR_e_Snow, CeTMDR_e_Valet, CeTMDR_e_Rock, CeTMDR_e_Tow,
    CeTMDR_e_NotDefine, CeTMDR_e_Launch, CeTMDR_e_NotDefine, CeTMDR_e_Custom,
    CeTMDR_e_Mud, CeTMDR_e_Sand, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_Offroad, CeTMDR_e_Baja, CeTMDR_e_MudSand,
    CeTMDR_e_Drag, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_NotDefine, CeTMDR_e_NotDefine,
    CeTMDR_e_NotDefine, CeTMDR_e_NotDefine
};                                     /* Referenced by: '<S51>/Calib' */

static volatile CONST(TeTIMR_e_TrrnTgglSwtSts, TIMR_VAR_INIT)
    KaTIMR_e_TrrnTgglSwMap[8] =
{
    CeTIMR_e_Switch_Not_Activated, CeTIMR_e_Left_Up_Activated,
    CeTIMR_e_Right_Down_Activated, CeTIMR_e_Switch_Not_Activated,
    CeTIMR_e_Switch_Not_Activated, CeTIMR_e_Short_To_Ground,
    CeTIMR_e_Short_To_Power, CeTIMR_e_Signal_Not_Available
};                                     /* Referenced by: '<S53>/Calib' */

static volatile CONST(uint8, TIMR_VAR_INIT) KaTIMR_y_TrrnMdArbMapDown[15] =
{
    0U, 2U, 0U, 3U, 7U, 1U, 0U, 0U, 4U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S492>/Calib' */

static volatile CONST(uint8, TIMR_VAR_INIT) KaTIMR_y_TrrnMdArbMapDown_Variant1
    [15] =
{
    0U, 2U, 0U, 10U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 3U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S502>/Calib' */

static volatile CONST(uint8, TIMR_VAR_INIT) KaTIMR_y_TrrnMdArbMapDown_Variant2
    [15] =
{
    0U, 2U, 0U, 10U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 12U, 0U, 13U, 3U
} ;                                    /* Referenced by: '<S493>/Calib' */

static volatile CONST(uint8, TIMR_VAR_INIT) KaTIMR_y_TrrnMdArbMapUp[15] =
{
    0U, 3U, 6U, 2U, 4U, 9U, 0U, 0U, 5U, 0U, 0U, 0U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S494>/Calib' */

static volatile CONST(uint8, TIMR_VAR_INIT) KaTIMR_y_TrrnMdArbMapUp_Variant1[15]
    =
{
    0U, 5U, 0U, 2U, 12U, 0U, 0U, 0U, 0U, 2U, 2U, 4U, 0U, 0U, 0U
} ;                                    /* Referenced by: '<S495>/Calib' */

static volatile CONST(uint8, TIMR_VAR_INIT) KaTIMR_y_TrrnMdArbMapUp_Variant2[15]
    =
{
    0U, 5U, 0U, 2U, 15U, 0U, 0U, 0U, 0U, 2U, 2U, 4U, 0U, 12U, 14U
} ;                                    /* Referenced by: '<S496>/Calib' */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_ActivationTmr = 50U;/* Referenced by: '<S336>/Calib' */

#endif

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_DeadPedalTimer = 35U;/* Referenced by:
                                                                      * '<S135>/Calib'
                                                                      * '<S147>/Calib'
                                                                      * '<S346>/Calib'
                                                                      */
static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_LaunchTimerThr = 35U;/* Referenced by:
                                                                      * '<S264>/Calib'
                                                                      * '<S430>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_LedBlinkTime = 35U;/* Referenced by: '<S201>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_LineLockTimerThr = 35U;/* Referenced by: '<S207>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_LongPaddleActivation =
    5U;                                /* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint16, TIMR_VAR_INIT)
    KeTIMR_Cnt_MaxBoost_Unavailable_Time = 35U;/* Referenced by: '<S335>/Calib' */

#endif

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_MinDeadPedalTime = 2U;/* Referenced by:
                                                                      * '<S146>/Calib'
                                                                      * '<S345>/Calib'
                                                                      */
static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_PedalTimeThr = 50U;/* Referenced by:
                                                                      * '<S132>/Calib'
                                                                      * '<S338>/Calib'
                                                                      */
static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_PopUp = 35U;/* Referenced by:
                                                                     * '<S213>/Calib'
                                                                     * '<S396>/Calib'
                                                                     */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_RacePrepTime = 35U;/* Referenced by: '<S333>/Calib' */

#endif

static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_Cnt_ScreenTime = 35U;/* Referenced by:
                                                                      * '<S128>/Calib'
                                                                      * '<S326>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_P_MinBrakePressure = 100.0F;/* Referenced by:
                                                                      * '<S129>/Calib'
                                                                      * '<S328>/Calib'
                                                                      * '<S286>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_DonutMinPdlAcc = 60.0F;/* Referenced by: '<S153>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_DriftMinPdlAcc = 60.0F;/* Referenced by: '<S157>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_LineLockMaxOff = 30.0F;/* Referenced by: '<S280>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_LineLockMinPdl = 30.0F;/* Referenced by: '<S133>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_MaxVehicleSlope = 5.0F;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_MinMaxBoost_Soc = 5.0F;/* Referenced by: '<S334>/Calib' */

#endif

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_MinSoc = 5.0F;/* Referenced by:
                                                                      * '<S169>/Calib'
                                                                      * '<S187>/Calib'
                                                                      * '<S249>/Calib'
                                                                      * '<S365>/Calib'
                                                                      * '<S421>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_Pct_WOTAccPos = 30.0F;/* Referenced by:
                                                                      * '<S131>/Calib'
                                                                      * '<S339>/Calib'
                                                                      * '<S263>/Calib'
                                                                      * '<S429>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_HVBattMax = 200.0F;/* Referenced by:
                                                                      * '<S170>/Calib'
                                                                      * '<S188>/Calib'
                                                                      * '<S366>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_HVBattMaxCanc = 200.0F;/* Referenced by:
                                                                      * '<S255>/Calib'
                                                                      * '<S422>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_InverterTempMax = 200.0F;/* Referenced by:
                                                                      * '<S174>/Calib'
                                                                      * '<S190>/Calib'
                                                                      * '<S253>/Calib'
                                                                      * '<S370>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_InverterTempMaxCanc =
    200.0F;                            /* Referenced by: '<S426>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_MaxMaxBoost_BatTemp =
    200.0F;                            /* Referenced by: '<S332>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_MinMaxBoost_BatTemp =
    -10.0F;                            /* Referenced by: '<S327>/Calib' */

#endif

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_MotorTempMax = 200.0F;/* Referenced by:
                                                                      * '<S171>/Calib'
                                                                      * '<S189>/Calib'
                                                                      * '<S251>/Calib'
                                                                      * '<S367>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_T_MotorTempMaxCanc = 200.0F;/* Referenced by: '<S423>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_a_MaxLatAcc = 100.0F;/* Referenced by:
                                                                      * '<S363>/Calib'
                                                                      * '<S419>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_a_MaxLongAcc = 100.0F;/* Referenced by: '<S362>/Calib' */

#endif

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWDLockOvrdEnbl = 0;/* Referenced by: '<S542>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWDLockOvrdVal = 0;/* Referenced by: '<S543>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWDLowOvrdEnbl = 0;/* Referenced by: '<S544>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWDLowOvrdVal = 0;/* Referenced by: '<S545>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWD_LockDflt = 0;
                             /* Referenced by: '<S1>/FsftTIMR_b_AWD_LockChrt' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWD_LockInit = 0;/* Referenced by: '<S619>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWD_LowDflt = 0;
                              /* Referenced by: '<S2>/FsftTIMR_b_AWD_LowChrt' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_AWD_LowInit = 0;/* Referenced by: '<S620>/Calib' */

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_DonutReadyOvrd = 1;/* Referenced by: '<S158>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_DriveReadyOvrd = 1;/* Referenced by: '<S154>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_ESCTrqEnabledOvrd = 0;/* Referenced by:
                                                                      * '<S175>/Calib'
                                                                      * '<S191>/Calib'
                                                                      * '<S256>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_ExitDeadPedalCondOvrd = 1;/* Referenced by: '<S196>/Calib' */

#endif

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_HoldEcoMode = 1;/* Referenced by: '<S103>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_LeftSwitchReqOvrdEnbl = 0;/* Referenced by: '<S546>/Calib' */

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_LineLock_Comp2Ovrd = 1;/* Referenced by: '<S206>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_ModeRequestOvrd = 1;/* Referenced by: '<S306>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_OvrdLeftPdl = 1;/* Referenced by: '<S330>/Calib' */

#endif

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_OvrdRaceCOnd = 0;/* Referenced by:
                                                                      * '<S155>/Calib'
                                                                      * '<S156>/Calib'
                                                                      * '<S172>/Calib'
                                                                      * '<S195>/Calib'
                                                                      * '<S205>/Calib'
                                                                      * '<S250>/Calib'
                                                                      * '<S259>/Calib'
                                                                      * '<S265>/Calib'
                                                                      * '<S275>/Calib'
                                                                      * '<S281>/Calib'
                                                                      * '<S288>/Calib'
                                                                      * '<S368>/Calib'
                                                                      * '<S424>/Calib'
                                                                      * '<S431>/Calib'
                                                                      */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_RadioFromBCM = 0;/* Referenced by: '<S435>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_RightSwitchReqOvrdEnbl =
    0;                                 /* Referenced by: '<S547>/Calib' */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(boolean, TIMR_VAR_INIT)
    KeTIMR_b_ScreenText_Canc_LaunchOvrd = 0;/* Referenced by: '<S432>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_SwitchEnbl = 1;/* Referenced by:
                                                                      * '<S572>/Calib'
                                                                      * '<S598>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_TrrnMdStFAInit = 0;/* Referenced by: '<S621>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_TrrnMdStFAOvrdEnbl = 0;/* Referenced by: '<S548>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_TrrnMdStFAOvrdVal = 0;/* Referenced by: '<S549>/Calib' */
static volatile CONST(boolean, TIMR_VAR_INIT) KeTIMR_b_TrrnMdStOvrdEnbl = 0;/* Referenced by: '<S550>/Calib' */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KeTIMR_e_GlobalDrvMdRqDflt
    = CeTMDR_e_NotDefine;
                       /* Referenced by: '<S8>/PokeTIMR_e_GlobalDrvMdReqChrt' */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT)
    KeTIMR_e_GlobalDrvMdRq_BCMDflt = CeTMDR_e_NotDefine;
                    /* Referenced by: '<S9>/PokeTIMR_e_GlobalDrvMdRq_BCMChrt' */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KeTIMR_e_InitTrrnMd =
    CeTMDR_e_Auto;                     /* Referenced by: '<S104>/Calib' */
static volatile CONST(TeTIMR_e_LaunchIntensity, TIMR_VAR_INIT)
    KeTIMR_e_LaunchIntensityInit = CeTIMR_e_Max;/* Referenced by: '<S622>/Calib' */
static volatile CONST(TeTIMR_e_TrrnMdBtnSts, TIMR_VAR_INIT)
    KeTIMR_e_LaunchModeSwitchDflt = CeTIMR_e_NotActivated;
                    /* Referenced by: '<S11>/PokeTIMR_e_LaunchModeSwitchChrt' */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(TePLTR_e_ASCM_Stat, TIMR_VAR_INIT) KeTIMR_e_Launch_AccSusp
    = CePLTR_e_ASCM_Stat_AERO;         /* Referenced by:
                                        * '<S364>/Calib'
                                        * '<S420>/Calib'
                                        */

#endif

static volatile CONST(TeTIMR_e_TrrnMdBtnSts, TIMR_VAR_INIT)
    KeTIMR_e_LeftSwitchReqDflt = CeTIMR_e_NotActivated;/* Referenced by:
                                                        * '<S7>/PokeTIMR_e_CustomInterfaceBtnChrt'
                                                        * '<S12>/PokeTIMR_e_LeftSwitchReqChrt'
                                                        * '<S19>/PokeTIMR_e_TowMdSwitchChrt'
                                                        */
static volatile CONST(TeTIMR_e_TrrnMdBtnSts, TIMR_VAR_INIT)
    KeTIMR_e_LeftSwitchReqOvrdVal = CeTIMR_e_NotActivated;/* Referenced by: '<S551>/Calib' */
static volatile CONST(TeTIMR_e_RacePrep, TIMR_VAR_INIT) KeTIMR_e_RacePrepInit =
    CeTIMR_e_RacePrep_Off;             /* Referenced by: '<S651>/Calib' */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KeTIMR_e_RadioCustomInit =
    CeTMDR_e_NotDefine;                /* Referenced by:
                                        * '<S623>/Calib'
                                        * '<S652>/Calib'
                                        */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT)
    KeTIMR_e_RadioCustomModeDflt = CeTMDR_e_NotDefine;
                     /* Referenced by: '<S16>/PokeTIMR_e_RadioCustomModeChrt' */
static volatile CONST(TeTIMR_e_TrrnMdBtnSts, TIMR_VAR_INIT)
    KeTIMR_e_RightSwitchReqDflt = CeTIMR_e_NotActivated;
                      /* Referenced by: '<S17>/PokeTIMR_e_RightSwitchReqChrt' */
static volatile CONST(TeTIMR_e_TrrnMdBtnSts, TIMR_VAR_INIT)
    KeTIMR_e_RightSwitchReqOvrdVal = CeTIMR_e_NotActivated;/* Referenced by: '<S552>/Calib' */

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_CancOvrd = CeTIMR_e_TM0;/* Referenced by: '<S252>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_Canc_DonutOvrd = CeTIMR_e_TM0;/* Referenced by: '<S258>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_Canc_LaunchOvrd = CeTIMR_e_TM0;/* Referenced by: '<S266>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_Canc_LineLockOvrd = CeTIMR_e_TM0;/* Referenced by: '<S273>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_Comp_LineLockOvrd = CeTIMR_e_TM0;/* Referenced by: '<S282>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_EntryOvrd = CeTIMR_e_TM0;/* Referenced by: '<S173>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT)
    KeTIMR_e_ScreenMsg_PreCondOvrd = CeTIMR_e_TM0;/* Referenced by: '<S287>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_TextDisplay, TIMR_VAR_INIT)
    KeTIMR_e_ScreenText_CancOvrd = CeTIMR_e_NONE;/* Referenced by: '<S425>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(TeTIMR_e_TextDisplay, TIMR_VAR_INIT)
    KeTIMR_e_ScreenText_EntryOvrd = CeTIMR_e_NONE;/* Referenced by: '<S369>/Calib' */

#endif

static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KeTIMR_e_TrrnMdStDflt =
    CeTMDR_e_Auto;                     /* Referenced by:
                                        * '<S4>/FsftTIMR_e_TrrnMdStChrt'
                                        * '<S20>/PokeTIMR_e_TrrnMdStChrt'
                                        */
static volatile CONST(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) KeTIMR_e_TrrnMdStOvrdVal =
    CeTMDR_e_Auto;                     /* Referenced by: '<S553>/Calib' */
static volatile CONST(TeTIMR_e_TrrnTgglSwtSts, TIMR_VAR_INIT)
    KeTIMR_e_TrrnToggleMdSwitchDflt = CeTIMR_e_Switch_Not_Activated;
                  /* Referenced by: '<S21>/PokeTIMR_e_TrrnToggleMdSwitchChrt' */
static volatile CONST(sint16, TIMR_VAR_INIT) KeTIMR_i_DriveSelect = 15;/* Referenced by:
                                                                      * '<S260>/Calib'
                                                                      * '<S267>/Calib'
                                                                      * '<S276>/Calib'
                                                                      * '<S289>/Calib'
                                                                      * '<S371>/Calib'
                                                                      * '<S427>/Calib'
                                                                      * '<S433>/Calib'
                                                                      */
static volatile CONST(sint8, TIMR_VAR_INIT) KeTIMR_i_TrrnMdSwtchTyp = 0;/* Referenced by: '<S515>/Calib' */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_milel_OdometerUnKm = 850.0F;/* Referenced by:
                                                                      * '<S167>/Calib'
                                                                      * '<S185>/Calib'
                                                                      * '<S358>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_pbar_MinBrakePress = 100.0F;/* Referenced by:
                                                                      * '<S130>/Calib'
                                                                      * '<S337>/Calib'
                                                                      * '<S274>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_phi_Angle_Limit = 60.0F;/* Referenced by:
                                                                      * '<S262>/Calib'
                                                                      * '<S272>/Calib'
                                                                      * '<S285>/Calib'
                                                                      * '<S360>/Calib'
                                                                      * '<S418>/Calib'
                                                                      * '<S428>/Calib'
                                                                      */

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_phi_DonutMinAngle = 60.0F;/* Referenced by: '<S152>/Calib' */

#endif

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_25p_dT = 0.025F;/* Referenced by:
                                                                      * '<S60>/Calib'
                                                                      * '<S436>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_CustomMdReqTime = 1.2F;/* Referenced by: '<S81>/Calib' */
static volatile CONST(float32, TIMR_VAR_INIT)
    KeTIMR_t_MaxHoldTimeAfterTerrainSwActv = 0.05F;/* Referenced by: '<S500>/Calib' */
static volatile CONST(uint16, TIMR_VAR_INIT) KeTIMR_t_MaxPressTimeSwitches =
    100U;                              /* Referenced by:
                                        * '<S437>/Calib'
                                        * '<S468>/Calib'
                                        * '<S471>/Calib'
                                        */

#if Rte_SysCon_Variant_TIMR_2

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_MedTED = 0.02F;/* Referenced by:
                                                                      * '<S573>/Calib'
                                                                      * '<S599>/Calib'
                                                                      */

#endif

static volatile CONST(uint32, TIMR_VAR_INIT) KeTIMR_t_ModeSoftLatchMaxTime =
    14400U;                            /* Referenced by: '<S105>/Calib' */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_ScreenReqTime = 0.25F;/* Referenced by: '<S80>/Calib' */

#if Rte_SysCon_Variant_TIMR_2

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_TiDebounceHeal = 0.2F;/* Referenced by: '<S574>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_TiDebounceSet = 0.2F;/* Referenced by: '<S575>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_TistuckDebounceHeal =
    0.2F;                              /* Referenced by: '<S600>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_TistuckDebounceSet = 0.2F;/* Referenced by: '<S601>/Calib' */

#endif

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_t_TrrMdCycleTime = 2.0F;/* Referenced by:
                                                                      * '<S79>/Calib'
                                                                      * '<S438>/Calib'
                                                                      * '<S501>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_v_LaunchExitSpd = 30.0F;/* Referenced by:
                                                                      * '<S134>/Calib'
                                                                      * '<S329>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_v_RaceEndSpd = 30.0F;/* Referenced by:
                                                                      * '<S145>/Calib'
                                                                      * '<S194>/Calib'
                                                                      * '<S204>/Calib'
                                                                      * '<S344>/Calib'
                                                                      */
static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_v_RaceMinSpd = 200.0F;/* Referenced by:
                                                                      * '<S168>/Calib'
                                                                      * '<S186>/Calib'
                                                                      * '<S254>/Calib'
                                                                      * '<S359>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(float32, TIMR_VAR_INIT) KeTIMR_v_RacePrepSpeed = 200.0F;/* Referenced by: '<S417>/Calib' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint8, TIMR_VAR_INIT) KeTIMR_y_AirSuspensionSkyhook = 127U;/* Referenced by: '<S331>/Calib' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static volatile CONST(uint8, TIMR_VAR_INIT) KeTIMR_y_LBSelect = 127U;/* Referenced by: '<S136>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TIMR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIMR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VePRXR_b_VehicleLineConfigurationLB;/* '<S108>/Relational Operator' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_CanCompButRace;/* '<S137>/Logical Operator10' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_CancRacexTerrain;/* '<S137>/Logical Operator13' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Custom_Interface_ButtonStuck_Fail;
                                /* '<S555>/Custom_Interface_ButtonStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Custom_Interface_ButtonStuck_Pass;
                                /* '<S555>/Custom_Interface_ButtonStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Custom_Interface_Button_Fail;
                                     /* '<S554>/Custom_Interface_Button_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Custom_Interface_Button_Pass;
                                     /* '<S554>/Custom_Interface_Button_Diag' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_InhButRace;/* '<S137>/Logical Operator4' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_InhCond;/* '<S301>/Relational Operator2' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_LaunchSuspension;/* '<S109>/Logical Operator16' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Fail;
                               /* '<S555>/Left_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Pass;
                               /* '<S555>/Left_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Left_Terrain_Mode_Switch_Fail;
                                    /* '<S554>/Left_Terrain_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Left_Terrain_Mode_Switch_Pass;
                                    /* '<S554>/Left_Terrain_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_PopUpTextEventLaunch;/* '<S398>/Logical Operator13' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_PopUpTextEventLaunch_Trigger;/* '<S321>/Logical Operator5' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_PopUpTextEventMaxBoost;/* '<S397>/Logical Operator13' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_PopUpTextEventMaxBoost_Trigger;/* '<S321>/Logical Operator4' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_PopUpTextPerLaunch_Trigger;/* '<S321>/Logical Operator6' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_PopUpTextPerMaxBoost_Trigger;/* '<S321>/Logical Operator' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_RejectTerrain;/* '<S137>/Logical Operator1' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Fail;
                              /* '<S555>/Right_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Pass;
                              /* '<S555>/Right_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Right_Terrain_Mode_Switch_Fail;
                                   /* '<S554>/Right_Terrain_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Right_Terrain_Mode_Switch_Pass;
                                   /* '<S554>/Right_Terrain_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_ScreenTextCanc_Launch;/* '<S323>/Switch' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM13;/* '<S113>/Relational Operator10' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM14;/* '<S113>/Logical Operator8' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM15;/* '<S113>/Logical Operator7' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM17;/* '<S120>/Logical Operator3' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM18;/* '<S120>/Logical Operator1' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM19;/* '<S120>/Logical Operator2' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM2;/* '<S113>/Logical Operator2' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM20;/* '<S120>/Logical Operator4' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM3;/* '<S113>/Logical Operator1' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM5;/* '<S113>/Logical Operator3' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM6;/* '<S113>/Relational Operator4' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM7;/* '<S113>/Logical Operator4' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM8;/* '<S113>/Logical Operator5' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_TM9;/* '<S113>/Logical Operator6' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Fail;
                             /* '<S555>/Terrain_Toggle_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Pass;
                             /* '<S555>/Terrain_Toggle_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Terrain_Toggle_Mode_Switch_Fail;
                                  /* '<S554>/Terrain_Toggle_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(boolean, TIMR_VAR_INIT) VeTIMR_b_Terrain_Toggle_Mode_Switch_Pass;
                                  /* '<S554>/Terrain_Toggle_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Custom_Interface_ButtonStuck_Status;
                                /* '<S555>/Custom_Interface_ButtonStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Custom_Interface_Button_Status;
                                     /* '<S554>/Custom_Interface_Button_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status;
                               /* '<S555>/Left_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Left_Terrain_Mode_Switch_Status;
                                    /* '<S554>/Left_Terrain_Mode_Switch_Diag' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(TeTMDR_e_TrrnMd, TIMR_VAR_INIT) VeTIMR_e_ModeReqOvrd;/* '<S302>/Switch4' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_TextDisplay, TIMR_VAR_INIT) VeTIMR_e_PopUpTextEntryMaxBoost;/* '<S321>/Switch3' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_TextDisplay, TIMR_VAR_INIT) VeTIMR_e_PopUpTextStateflow;/* '<S109>/RaceMode_Arbitration' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_RaceOptions, TIMR_VAR_INIT) VeTIMR_e_RaceReqOvrdArb;/* '<S127>/Switch2' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_RaceOptions, TIMR_VAR_INIT) VeTIMR_e_RaceReqSing;/* '<S137>/Switch2' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status;
                              /* '<S555>/Right_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Right_Terrain_Mode_Switch_Status;
                                   /* '<S554>/Right_Terrain_Mode_Switch_Diag' */

#endif

#if !Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_RaceMode_Popup, TIMR_VAR_INIT) VeTIMR_e_ScreenMsgEntry;/* '<S113>/Switch' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_TextDisplay, TIMR_VAR_INIT) VeTIMR_e_ScreenTextCanc;/* '<S322>/Switch' */

#endif

#if Rte_SysCon_Variant_TIMR_3

static VAR(TeTIMR_e_TextDisplay, TIMR_VAR_INIT) VeTIMR_e_ScreenTextEntry;/* '<S317>/Switch' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status;
                             /* '<S555>/Terrain_Toggle_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(TeTIMR_e_DiagStatus, TIMR_VAR_INIT)
    VeTIMR_e_Terrain_Toggle_Mode_Switch_Status;
                                  /* '<S554>/Terrain_Toggle_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT) VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt;
                                /* '<S555>/Custom_Interface_ButtonStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT) VeTIMR_t_Custom_Interface_Button_timeCnt;
                                     /* '<S554>/Custom_Interface_Button_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT)
    VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt;
                               /* '<S555>/Left_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT) VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt;
                                    /* '<S554>/Left_Terrain_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT)
    VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt;
                              /* '<S555>/Right_Terrain_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT) VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt;
                                   /* '<S554>/Right_Terrain_Mode_Switch_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT)
    VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt;
                             /* '<S555>/Terrain_Toggle_Mode_SwitchStuck_Diag' */

#endif

#if Rte_SysCon_Variant_TIMR_2

static VAR(float32, TIMR_VAR_INIT) VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt;
                                  /* '<S554>/Terrain_Toggle_Mode_Switch_Diag' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIMR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TIMR
#include "MemMap.h"

CONST(ConstB_TIMR_ac_T, TIMR_VAR_INIT) TIMR_ac_ConstB =
{
    CeTMDR_e_NotDefine,                /* '<S638>/Constant' */
    CeTMDR_e_NotDefine,                /* '<S639>/Constant' */
    CeTMDR_e_NotDefine,                /* '<S640>/Constant' */
    CeTMDR_e_NotDefine,                /* '<S633>/Constant' */
    CeTIMR_e_Switch_Not_Activated,     /* '<S631>/Constant' */
    CeTIMR_e_Not_Activated,            /* '<S632>/Constant' */
    CeTIMR_e_NotActivated,             /* '<S625>/Constant' */
    CeTIMR_e_NotActivated,             /* '<S636>/Constant' */
    CeTIMR_e_NotActivated,             /* '<S641>/Constant' */
    CeTIMR_e_NotActivated,             /* '<S629>/Constant' */
    CeTIMR_e_NotActivated,             /* '<S630>/Constant' */
    CeTIMR_e_NotActivated,             /* '<S616>/Constant' */
    CeTIMR_e_NONE,                     /* '<S649>/Constant' */
    CeTIMR_e_NONE,                     /* '<S650>/Constant' */
    CeTIMR_e_RaceType_Drag,            /* '<S635>/Constant' */
    CeTIMR_e_NoOptionSelected,         /* '<S637>/Constant' */
    CeTIMR_e_TM0,                      /* '<S627>/Constant' */
    CeTIMR_e_RaceMode_Off,             /* '<S626>/Constant' */
    CeTIMR_e_RaceEntry_OK,             /* '<S644>/Constant' */
    CeTIMR_e_LEDOff,                   /* '<S643>/Constant' */
    CeTIMR_e_IDLE,                     /* '<S647>/Constant' */
    CeTIMR_e_IDLE,                     /* '<S648>/Constant' */
    CeTIMR_e_Max,                      /* '<S628>/Constant' */
    CeTIMR_e_Boost_Off,                /* '<S646>/Constant' */
    CeTIMR_e_Boost_Off,                /* '<S645>/Constant' */
    CeTIMR_e_Boost_Off,                /* '<S618>/Constant' */
    CeDFIB_e_Init,                     /* '<S642>/Constant' */
    CeDFIB_e_Init                      /* '<S634>/Constant' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TIMR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIMR
#include "MemMap.h"

VAR(B_TIMR_ac_T, TIMR_VAR_INIT) TIMR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIMR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TIMR
#include "MemMap.h"

VAR(DW_TIMR_ac_T, TIMR_VAR_INIT) TIMR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TIMR
#include "MemMap.h"
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModeCancCheck(VAR(boolean,
    AUTOMATIC) rtu_PropSysActv, VAR(boolean, AUTOMATIC) rtu_DriverReady, VAR
    (TeDMDR_e_TurtleMdSts, AUTOMATIC) rtu_TurtleModeSts, VAR
    (TePLTR_e_ACCSystemSts, AUTOMATIC) rtu_Acc_SystemSts, VAR
    (TePLTR_e_HAS_TelltaleSts, AUTOMATIC) rtu_HAS_TelltaleSts, VAR
    (TePLTR_e_AEB_SystemSts, AUTOMATIC) rtu_AEB_SystemSts, VAR(boolean,
    AUTOMATIC) rtu_DriverDoorSts, VAR(boolean, AUTOMATIC) rtu_PsngrDoorSts, VAR
    (boolean, AUTOMATIC) rtu_LHRDoorSts, VAR(boolean, AUTOMATIC) rtu_RHRDoorSts,
    VAR(boolean, AUTOMATIC) rtu_RHatchSts, VAR(float32, AUTOMATIC)
    rtu_MotorBTemp, VAR(float32, AUTOMATIC) rtu_MotorCTemp, VAR
    (TeBRKR_e_Not_OK_To_Race, AUTOMATIC) rtu_Not_OK_To_Race, VAR(boolean,
    AUTOMATIC) rtu_ESCFailSts, VAR(boolean, AUTOMATIC) rtu_ESC_TrqEnblRq_Allowed,
    VAR(float32, AUTOMATIC) rtu_Soc, VAR(boolean, AUTOMATIC) rtu_BrakePedalFault,
    VAR(boolean, AUTOMATIC) rtu_Door_Ajar_FA, VAR(boolean, AUTOMATIC)
    rtu_Passenger_Door_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_Left_Rear_Door_FA,
    VAR(boolean, AUTOMATIC) rtu_Right_Rear_Door_FA, VAR(boolean, AUTOMATIC)
    rtu_Hatch_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_Soc_FA, VAR(boolean,
    AUTOMATIC) rtu_Acc_System_Status_FA, VAR(boolean, AUTOMATIC)
    rtu_HAS_Telltale_Status_FA, VAR(boolean, AUTOMATIC) rtu_AEB_System_Status_FA,
    VAR(boolean, AUTOMATIC) rtu_MotorBTemp_FA, VAR(boolean, AUTOMATIC)
    rtu_MotorCTemp_FA, VAR(boolean, AUTOMATIC) rtu_Not_OK_To_Race_FA, VAR
    (boolean, AUTOMATIC) rtu_VeSRAR_b_Inhibit_AWD_Terrai, VAR(float32, AUTOMATIC)
    rtu_MtrA_InvrtrTemp, VAR(float32, AUTOMATIC) rtu_MtrB_InvrtrTemp, VAR
    (boolean, AUTOMATIC) rtu_MtrA_InvrtrTempFA, VAR(boolean, AUTOMATIC)
    rtu_MtrB_InvrtrTempFA, VAR(TeTIMR_e_RaceModeSts, AUTOMATIC)
    rtu_Race_Mode_Status, VAR(float32, AUTOMATIC) rtu_VehSpd, VAR(float32,
    AUTOMATIC) rtu_HV_BatteryTempAvg, VAR(boolean, AUTOMATIC) rtu_VehSpd_FA, VAR
    (boolean, AUTOMATIC) rtu_HV_BatteryTempAvg_FA, P2VAR
    (B_RaceModeCancCheck_TIMR_ac_T, AUTOMATIC, TIMR_VAR_INIT) localB);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModePreCondCheck(VAR(boolean,
    AUTOMATIC) rtu_ParkBrakeSts, VAR(boolean, AUTOMATIC)
    rtu_Vehicle_Stand_Still_Status, VAR(float32, AUTOMATIC) rtu_LwsAngle, VAR
    (sint16, AUTOMATIC) rtu_VldtdTransRngSt, VAR(float32, AUTOMATIC)
    rtu_Brake_Boost_Pressure, VAR(TeBRKR_e_Not_OK_To_Race, AUTOMATIC)
    rtu_Not_OK_To_Race, P2VAR(B_RaceModePreCondCheck_TIMR_a_T, AUTOMATIC,
    TIMR_VAR_INIT) localB);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_DonutOn_PopCond(VAR(float32,
    AUTOMATIC) rtu_Steering_Wheel_Angle, VAR(float32, AUTOMATIC) rtu_AccPdl,
    P2VAR(B_DonutOn_PopCond_TIMR_ac_T, AUTOMATIC, TIMR_VAR_INIT) localB);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_DriftOn_PopCond(VAR(float32,
    AUTOMATIC) rtu_AccPdl, P2VAR(B_DriftOn_PopCond_TIMR_ac_T, AUTOMATIC,
    TIMR_VAR_INIT) localB);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_ExitDeadPedalCond(VAR(float32,
    AUTOMATIC) rtu_LeftFrontWheel, VAR(float32, AUTOMATIC) rtu_RightFrontWheel,
    VAR(float32, AUTOMATIC) rtu_LeftRearWheel, VAR(float32, AUTOMATIC)
    rtu_RightRearWheel, P2VAR(B_ExitDeadPedalCond_TIMR_ac_T, AUTOMATIC,
    TIMR_VAR_INIT) localB);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModeCancDonutCheck(VAR(boolean,
    AUTOMATIC) rtu_ParkBrakeSts, VAR(sint16, AUTOMATIC) rtu_VldtdTransRngSt,
    P2VAR(B_RaceModeCancDonutCheck_TIMR_T, AUTOMATIC, TIMR_VAR_INIT) localB);

#endif

#if Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_EntryCondCheck(VAR(float32, AUTOMATIC)
    rtu_TotalOdometer, VAR(boolean, AUTOMATIC) rtu_PropSysActv, VAR(boolean,
    AUTOMATIC) rtu_DriveReady, VAR(float32, AUTOMATIC) rtu_VehSpd, VAR
    (TeDMDR_e_TurtleMdSts, AUTOMATIC) rtu_TurtleMode, VAR(float32, AUTOMATIC)
    rtu_Soc, VAR(TePLTR_e_ACCSystemSts, AUTOMATIC) rtu_Acc_System_Status, VAR
    (TePLTR_e_HAS_TelltaleSts, AUTOMATIC) rtu_HAS_Telltale_Status, VAR
    (TePLTR_e_AEB_SystemSts, AUTOMATIC) rtu_AEB_System_Status, VAR(boolean,
    AUTOMATIC) rtu_Door_Ajar, VAR(float32, AUTOMATIC) rtu_HV_BatteryTempAvg, VAR
    (float32, AUTOMATIC) rtu_MotorBTemp, VAR(float32, AUTOMATIC) rtu_MotorCTemp,
    VAR(boolean, AUTOMATIC) rtu_BrakeFaulted, VAR(boolean, AUTOMATIC)
    rtu_WhlSpdLHF_FA, VAR(boolean, AUTOMATIC) rtu_WhlSpdLHR_FA, VAR(boolean,
    AUTOMATIC) rtu_WhlSpdRHF_FA, VAR(boolean, AUTOMATIC) rtu_WhlSpdRHR_FA, VAR
    (boolean, AUTOMATIC) rtu_Door_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_VehSpd_FA,
    VAR(boolean, AUTOMATIC) rtu_Soc_FA, VAR(boolean, AUTOMATIC)
    rtu_Acc_System_Status_FA, VAR(boolean, AUTOMATIC) rtu_HAS_Telltale_Status_FA,
    VAR(boolean, AUTOMATIC) rtu_AEB_System_Status_FA, VAR(boolean, AUTOMATIC)
    rtu_HV_BatteryTempAvg_FA, VAR(boolean, AUTOMATIC) rtu_MotorBTemp_FA, VAR
    (boolean, AUTOMATIC) rtu_MotorCTemp_FA, VAR(boolean, AUTOMATIC)
    rtu_VeSRAR_b_Inhibit_AWD_Terrai, VAR(float32, AUTOMATIC) rtu_MtrA_InvrtrTemp,
    VAR(float32, AUTOMATIC) rtu_MtrB_InvrtrTemp, VAR(boolean, AUTOMATIC)
    rtu_MtrA_InvrtrTempFA, VAR(boolean, AUTOMATIC) rtu_MtrB_InvrtrTempFA, VAR
    (boolean, AUTOMATIC) rtu_MaxBoost_Mode_Type, VAR(TePLTR_e_DRV_SEATBELT,
    AUTOMATIC) rtu_SeatBeltSts, VAR(boolean, AUTOMATIC) rtu_FunctionSts, VAR
    (sint16, AUTOMATIC) rtu_VldtdTransRngSt, VAR(float32, AUTOMATIC)
    rtu_LwsAngle, VAR(float32, AUTOMATIC) rtu_Pct_Slope, VAR(float32, AUTOMATIC)
    rtu_LongAccel_ORC, VAR(float32, AUTOMATIC) rtu_LatAccel_ORC, VAR(boolean,
    AUTOMATIC) rtu_LaunchSuspension, VAR(TePLTR_e_ASCM_Stat, AUTOMATIC)
    rtu_ASCM_Stat, VAR(boolean, AUTOMATIC) rtu_SeatBeltSts_FA, VAR(boolean,
    AUTOMATIC) rtu_LwsAngleFA, VAR(boolean, AUTOMATIC) rtu_SlopeFA, VAR(boolean,
    AUTOMATIC) rtu_LatAccelFailSts_ORC, VAR(boolean, AUTOMATIC)
    rtu_LongAccelFailSts_ORC, VAR(boolean, AUTOMATIC) rtu_ASCM_Stat_FA, VAR
    (boolean, AUTOMATIC) rtu_ASCM_SysFail, VAR(boolean, AUTOMATIC) rtu_ASCM_Srv,
    VAR(boolean, AUTOMATIC) rtu_ASCM_SysSys, VAR(boolean, AUTOMATIC)
    rtu_ASCM_SysFailFA, VAR(boolean, AUTOMATIC) rtu_ASCM_SrvFA, VAR(boolean,
    AUTOMATIC) rtu_ASCM_SysSysFA, VAR(boolean, AUTOMATIC) rtu_Odometer_Miles_FA,
    VAR(boolean, AUTOMATIC) rtu_Popup_Msg1);

#endif

#if Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModeCancCheck_f(VAR(boolean,
    AUTOMATIC) rtu_PropSysActv, VAR(boolean, AUTOMATIC) rtu_DriveReady, VAR
    (float32, AUTOMATIC) rtu_VehSpd, VAR(TeDMDR_e_TurtleMdSts, AUTOMATIC)
    rtu_TurtleMode, VAR(float32, AUTOMATIC) rtu_Soc, VAR(TePLTR_e_ACCSystemSts,
    AUTOMATIC) rtu_Acc_System_Status, VAR(TePLTR_e_HAS_TelltaleSts, AUTOMATIC)
    rtu_HAS_Telltale_Status, VAR(TePLTR_e_AEB_SystemSts, AUTOMATIC)
    rtu_AEB_System_Status, VAR(boolean, AUTOMATIC) rtu_Door_Ajar, VAR(float32,
    AUTOMATIC) rtu_HV_BatteryTempAvg, VAR(float32, AUTOMATIC) rtu_MotorBTemp,
    VAR(float32, AUTOMATIC) rtu_MotorCTemp, VAR(boolean, AUTOMATIC)
    rtu_BrakeFaulted, VAR(boolean, AUTOMATIC) rtu_WhlSpdLHF_FA, VAR(boolean,
    AUTOMATIC) rtu_WhlSpdLHR_FA, VAR(boolean, AUTOMATIC) rtu_WhlSpdRHF_FA, VAR
    (boolean, AUTOMATIC) rtu_WhlSpdRHR_FA, VAR(boolean, AUTOMATIC)
    rtu_Door_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_VehSpd_FA, VAR(boolean,
    AUTOMATIC) rtu_Soc_FA, VAR(boolean, AUTOMATIC) rtu_Acc_System_Status_FA, VAR
    (boolean, AUTOMATIC) rtu_HAS_Telltale_Status_FA, VAR(boolean, AUTOMATIC)
    rtu_AEB_System_Status_FA, VAR(boolean, AUTOMATIC) rtu_HV_BatteryTempAvg_FA,
    VAR(boolean, AUTOMATIC) rtu_MotorBTemp_FA, VAR(boolean, AUTOMATIC)
    rtu_MotorCTemp_FA, VAR(boolean, AUTOMATIC) rtu_VeSRAR_b_Inhibit_AWD_Terrai,
    VAR(float32, AUTOMATIC) rtu_MtrA_InvrtrTemp, VAR(float32, AUTOMATIC)
    rtu_MtrB_InvrtrTemp, VAR(boolean, AUTOMATIC) rtu_MtrA_InvrtrTempFA, VAR
    (boolean, AUTOMATIC) rtu_MtrB_InvrtrTempFA, VAR(boolean, AUTOMATIC)
    rtu_MaxBoost_Mode_Type, VAR(TePLTR_e_DRV_SEATBELT, AUTOMATIC)
    rtu_SeatBeltSts, VAR(boolean, AUTOMATIC) rtu_FunctionSts, VAR(sint16,
    AUTOMATIC) rtu_VldtdTransRngSt, VAR(float32, AUTOMATIC) rtu_LwsAngle, VAR
    (float32, AUTOMATIC) rtu_LatAccel_ORC, VAR(boolean, AUTOMATIC)
    rtu_LaunchSuspension, VAR(TePLTR_e_ASCM_Stat, AUTOMATIC) rtu_ASCM_Stat, VAR
    (boolean, AUTOMATIC) rtu_SeatBeltSts_FA, VAR(boolean, AUTOMATIC)
    rtu_LwsAngleFA, VAR(boolean, AUTOMATIC) rtu_LatAccelFailSts_ORC, VAR(boolean,
    AUTOMATIC) rtu_ASCM_Stat_FA, VAR(boolean, AUTOMATIC) rtu_ASCM_SysFail, VAR
    (boolean, AUTOMATIC) rtu_ASCM_Srv, VAR(boolean, AUTOMATIC) rtu_ASCM_SysSys,
    VAR(boolean, AUTOMATIC) rtu_ASCM_SysFailFA, VAR(boolean, AUTOMATIC)
    rtu_ASCM_SrvFA, VAR(boolean, AUTOMATIC) rtu_ASCM_SysSysFA, VAR
    (TeTIMR_e_RaceModeSts, AUTOMATIC) rtu_Race_Mode_Status, VAR(boolean,
    AUTOMATIC) rtu_Popup_Msg1);

#endif

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Down_Activated(P2VAR
    (TeTIMR_e_TrrnMdReq, AUTOMATIC, TIMR_VAR_INIT) rty_Out1);
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Up_Activated(P2VAR(TeTIMR_e_TrrnMdReq,
    AUTOMATIC, TIMR_VAR_INIT) rty_Out1);
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Not_Activated(P2VAR
    (TeTIMR_e_TrrnMdReq, AUTOMATIC, TIMR_VAR_INIT) rty_Out1);
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_SNA(P2VAR(TeTIMR_e_TrrnMdReq,
    AUTOMATIC, TIMR_VAR_INIT) rty_Out1);

#if Rte_SysCon_Variant_TIMR_2

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Init_d(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TIMR_VAR_INIT) rty_e_FaultStsInit);

#endif

#if Rte_SysCon_Variant_TIMR_2

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TIMR_VAR_INIT) rty_e_FaultStsPass);

#endif

#if Rte_SysCon_Variant_TIMR_2

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TIMR_VAR_INIT) rty_e_FaultStsFail);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_Paddle_Activation(const boolean *Comparison2, const boolean *
    LogicalOperator4, const boolean *LogicalOperator6);

#endif

#if Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_Launch_Arbitration(const boolean *Comparison2, const boolean
    *LogicalOperator4, const boolean *LogicalOperator6);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static float64 TIMR_ac_CalcPopup(float64 In);

#endif

static uint8 safe_cast_to_TeTIMR_e_RaceMode_(uint8 input);

#if !Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_RaceMode_Active(const boolean *RelationalOperator4);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_Launch(void);

#endif

#if !Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_RaceMode_On(const boolean *RelationalOperator4);

#endif

/* Output and update for function-call system: '<S108>/RaceModeCancCheck' */
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModeCancCheck(VAR(boolean,
    AUTOMATIC) rtu_PropSysActv, VAR(boolean, AUTOMATIC) rtu_DriverReady, VAR
    (TeDMDR_e_TurtleMdSts, AUTOMATIC) rtu_TurtleModeSts, VAR
    (TePLTR_e_ACCSystemSts, AUTOMATIC) rtu_Acc_SystemSts, VAR
    (TePLTR_e_HAS_TelltaleSts, AUTOMATIC) rtu_HAS_TelltaleSts, VAR
    (TePLTR_e_AEB_SystemSts, AUTOMATIC) rtu_AEB_SystemSts, VAR(boolean,
    AUTOMATIC) rtu_DriverDoorSts, VAR(boolean, AUTOMATIC) rtu_PsngrDoorSts, VAR
    (boolean, AUTOMATIC) rtu_LHRDoorSts, VAR(boolean, AUTOMATIC) rtu_RHRDoorSts,
    VAR(boolean, AUTOMATIC) rtu_RHatchSts, VAR(float32, AUTOMATIC)
    rtu_MotorBTemp, VAR(float32, AUTOMATIC) rtu_MotorCTemp, VAR
    (TeBRKR_e_Not_OK_To_Race, AUTOMATIC) rtu_Not_OK_To_Race, VAR(boolean,
    AUTOMATIC) rtu_ESCFailSts, VAR(boolean, AUTOMATIC) rtu_ESC_TrqEnblRq_Allowed,
    VAR(float32, AUTOMATIC) rtu_Soc, VAR(boolean, AUTOMATIC) rtu_BrakePedalFault,
    VAR(boolean, AUTOMATIC) rtu_Door_Ajar_FA, VAR(boolean, AUTOMATIC)
    rtu_Passenger_Door_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_Left_Rear_Door_FA,
    VAR(boolean, AUTOMATIC) rtu_Right_Rear_Door_FA, VAR(boolean, AUTOMATIC)
    rtu_Hatch_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_Soc_FA, VAR(boolean,
    AUTOMATIC) rtu_Acc_System_Status_FA, VAR(boolean, AUTOMATIC)
    rtu_HAS_Telltale_Status_FA, VAR(boolean, AUTOMATIC) rtu_AEB_System_Status_FA,
    VAR(boolean, AUTOMATIC) rtu_MotorBTemp_FA, VAR(boolean, AUTOMATIC)
    rtu_MotorCTemp_FA, VAR(boolean, AUTOMATIC) rtu_Not_OK_To_Race_FA, VAR
    (boolean, AUTOMATIC) rtu_VeSRAR_b_Inhibit_AWD_Terrai, VAR(float32, AUTOMATIC)
    rtu_MtrA_InvrtrTemp, VAR(float32, AUTOMATIC) rtu_MtrB_InvrtrTemp, VAR
    (boolean, AUTOMATIC) rtu_MtrA_InvrtrTempFA, VAR(boolean, AUTOMATIC)
    rtu_MtrB_InvrtrTempFA, VAR(TeTIMR_e_RaceModeSts, AUTOMATIC)
    rtu_Race_Mode_Status, VAR(float32, AUTOMATIC) rtu_VehSpd, VAR(float32,
    AUTOMATIC) rtu_HV_BatteryTempAvg, VAR(boolean, AUTOMATIC) rtu_VehSpd_FA, VAR
    (boolean, AUTOMATIC) rtu_HV_BatteryTempAvg_FA, P2VAR
    (B_RaceModeCancCheck_TIMR_ac_T, AUTOMATIC, TIMR_VAR_INIT) localB)
{
    TeTIMR_e_RaceMode_Popup rtb_ScreenMsg_Canc;

    /* Logic: '<S120>/Logical Operator3' */
    VeTIMR_b_TM17 = ((!rtu_PropSysActv) || (!rtu_DriverReady));

    /* Logic: '<S120>/Logical Operator1' incorporates:
     *  Constant: '<S238>/Constant'
     *  Constant: '<S249>/Calib'
     *  RelationalOperator: '<S120>/Relational Operator1'
     *  RelationalOperator: '<S120>/Relational Operator4'
     */
    VeTIMR_b_TM18 = ((((uint32)rtu_TurtleModeSts) != CeDMDR_e_No_Turtle_Mode) &&
                     (rtu_Soc < KeTIMR_Pct_MinSoc));

    /* Logic: '<S120>/Logical Operator2' incorporates:
     *  Constant: '<S239>/Constant'
     *  Constant: '<S240>/Constant'
     *  Constant: '<S241>/Constant'
     *  Constant: '<S243>/Constant'
     *  Logic: '<S120>/Logical Operator11'
     *  Logic: '<S120>/Logical Operator12'
     *  RelationalOperator: '<S120>/Relational Operator17'
     *  RelationalOperator: '<S120>/Relational Operator18'
     *  RelationalOperator: '<S120>/Relational Operator2'
     *  RelationalOperator: '<S120>/Relational Operator5'
     */
    VeTIMR_b_TM19 = (((((uint32)rtu_Acc_SystemSts) == CePLTR_e_Engaged) ||
                      ((CePLTR_e_HAS_TelltaleSts_OFF != ((uint32)
                         rtu_HAS_TelltaleSts)) && (((uint32)rtu_HAS_TelltaleSts)
                        != CePLTR_e_HAS_TelltaleSts_GREY))) || (((uint32)
                       rtu_AEB_SystemSts) == CePLTR_e_FCW_On_Full));

    /* Logic: '<S120>/Logical Operator4' */
    VeTIMR_b_TM20 = (((rtu_DriverDoorSts || rtu_PsngrDoorSts) || rtu_LHRDoorSts)
                     || rtu_RHRDoorSts);

    /* Chart: '<S120>/Chart' incorporates:
     *  Constant: '<S242>/Constant'
     *  Constant: '<S244>/Constant'
     *  Constant: '<S245>/Constant'
     *  Constant: '<S246>/Constant'
     *  Constant: '<S247>/Constant'
     *  Constant: '<S248>/Constant'
     *  Constant: '<S251>/Calib'
     *  Constant: '<S253>/Calib'
     *  Constant: '<S254>/Calib'
     *  Constant: '<S255>/Calib'
     *  Constant: '<S256>/Calib'
     *  Logic: '<S120>/Logical Operator10'
     *  Logic: '<S120>/Logical Operator5'
     *  Logic: '<S120>/Logical Operator6'
     *  Logic: '<S120>/Logical Operator7'
     *  Logic: '<S120>/Logical Operator8'
     *  Logic: '<S120>/Logical Operator9'
     *  RelationalOperator: '<S120>/Relational Operator'
     *  RelationalOperator: '<S120>/Relational Operator10'
     *  RelationalOperator: '<S120>/Relational Operator11'
     *  RelationalOperator: '<S120>/Relational Operator12'
     *  RelationalOperator: '<S120>/Relational Operator13'
     *  RelationalOperator: '<S120>/Relational Operator14'
     *  RelationalOperator: '<S120>/Relational Operator15'
     *  RelationalOperator: '<S120>/Relational Operator16'
     *  RelationalOperator: '<S120>/Relational Operator6'
     *  RelationalOperator: '<S120>/Relational Operator7'
     *  RelationalOperator: '<S120>/Relational Operator8'
     *  RelationalOperator: '<S120>/Relational Operator9'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancCheck/Chart */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancCheck/Chart */
    /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancCheck/Chart */
    /* Transition: '<S237>:2' */
    rtb_ScreenMsg_Canc = CeTIMR_e_TM0;
    if (VeTIMR_b_TM17)
    {
        /* Transition: '<S237>:4' */
        /* Transition: '<S237>:86' */
        rtb_ScreenMsg_Canc = CeTIMR_e_TM17;
    }
    else
    {
        /* Transition: '<S237>:6' */
        if (VeTIMR_b_TM18)
        {
            /* Transition: '<S237>:8' */
            /* Transition: '<S237>:67' */
            rtb_ScreenMsg_Canc = CeTIMR_e_TM18;
        }
        else
        {
            /* Transition: '<S237>:10' */
            if (VeTIMR_b_TM19)
            {
                /* Transition: '<S237>:12' */
                /* Transition: '<S237>:65' */
                rtb_ScreenMsg_Canc = CeTIMR_e_TM19;
            }
            else
            {
                /* Transition: '<S237>:14' */
                if (VeTIMR_b_TM20)
                {
                    /* Transition: '<S237>:16' */
                    /* Transition: '<S237>:63' */
                    rtb_ScreenMsg_Canc = CeTIMR_e_TM20;
                }
                else
                {
                    /* Transition: '<S237>:18' */
                    if (rtu_RHatchSts)
                    {
                        /* Transition: '<S237>:20' */
                        /* Transition: '<S237>:61' */
                        rtb_ScreenMsg_Canc = CeTIMR_e_TM21;
                    }
                    else
                    {
                        /* Transition: '<S237>:22' */
                        if ((((uint32)rtu_Race_Mode_Status) ==
                                CeTIMR_e_RaceMode_On) && (rtu_VehSpd >
                                KeTIMR_v_RaceMinSpd))
                        {
                            /* Transition: '<S237>:111' */
                            /* Transition: '<S237>:113' */
                            rtb_ScreenMsg_Canc = CeTIMR_e_TM60;
                        }
                        else
                        {
                            /* Transition: '<S237>:116' */
                            if (rtu_HV_BatteryTempAvg > KeTIMR_T_HVBattMaxCanc)
                            {
                                /* Transition: '<S237>:118' */
                                /* Transition: '<S237>:120' */
                                rtb_ScreenMsg_Canc = CeTIMR_e_TM24;
                            }
                            else
                            {
                                /* Transition: '<S237>:122' */
                                if ((((rtu_MotorBTemp > KeTIMR_T_MotorTempMax) ||
                                      (rtu_MotorCTemp > KeTIMR_T_MotorTempMax)) ||
                                     (rtu_MtrA_InvrtrTemp >
                                        KeTIMR_T_InverterTempMax)) ||
                                        (rtu_MtrB_InvrtrTemp >
                                         KeTIMR_T_InverterTempMax))
                                {
                                    /* Transition: '<S237>:24' */
                                    /* Transition: '<S237>:59' */
                                    rtb_ScreenMsg_Canc = CeTIMR_e_TM25;
                                }
                                else
                                {
                                    /* Transition: '<S237>:26' */
                                    if (((uint32)rtu_Not_OK_To_Race) ==
                                            CeBRKR_e_Yaw_Limit_Exceeded)
                                    {
                                        /* Transition: '<S237>:28' */
                                        /* Transition: '<S237>:57' */
                                        rtb_ScreenMsg_Canc = CeTIMR_e_TM26;
                                    }
                                    else
                                    {
                                        /* Transition: '<S237>:30' */
                                        if ((((((((((((((((((((((((((uint32)
                                                rtu_Not_OK_To_Race) !=
                                                CeBRKR_e_Not_Level) && (((uint32)
                                                rtu_Not_OK_To_Race) !=
                                                CeBRKR_e_Yaw_Limit_Exceeded)) &&
                                            (((uint32)rtu_Not_OK_To_Race) !=
                                                CeBRKR_e_Max_Revs_Exceeded)) &&
                                                (((uint32)rtu_Not_OK_To_Race) !=
                                            CeBRKR_e_OK)) || rtu_ESCFailSts) ||
                                                ((!rtu_ESC_TrqEnblRq_Allowed) &&
                                            (KeTIMR_b_ESCTrqEnabledOvrd))) ||
                                                             rtu_BrakePedalFault)
                                                            || rtu_Door_Ajar_FA)
                                                           ||
                                                           rtu_Passenger_Door_Ajar_FA)
                                                          ||
                                                          rtu_Left_Rear_Door_FA)
                                                         ||
                                                         rtu_Right_Rear_Door_FA)
                                                        || rtu_Hatch_Ajar_FA) ||
                                                       rtu_Soc_FA) ||
                                                      rtu_Acc_System_Status_FA) ||
                                                     rtu_HAS_Telltale_Status_FA)
                                                    || rtu_AEB_System_Status_FA)
                                                   || rtu_MotorBTemp_FA) ||
                                                  rtu_MotorCTemp_FA) ||
                                                 rtu_Not_OK_To_Race_FA) ||
                                                rtu_VeSRAR_b_Inhibit_AWD_Terrai)
                                               || rtu_MtrA_InvrtrTempFA) ||
                                                rtu_MtrB_InvrtrTempFA) ||
                                                rtu_VehSpd_FA) ||
                                                rtu_HV_BatteryTempAvg_FA)
                                        {
                                            /* Transition: '<S237>:32' */
                                            /* Transition: '<S237>:55' */
                                            rtb_ScreenMsg_Canc = CeTIMR_e_TM27;
                                        }
                                        else
                                        {
                                            /* Transition: '<S237>:106' */
                                            /* Transition: '<S237>:107' */
                                        }

                                        /* Transition: '<S237>:79' */
                                    }

                                    /* Transition: '<S237>:80' */
                                }

                                /* Transition: '<S237>:123' */
                            }

                            /* Transition: '<S237>:121' */
                        }

                        /* Transition: '<S237>:81' */
                    }

                    /* Transition: '<S237>:82' */
                }

                /* Transition: '<S237>:83' */
            }

            /* Transition: '<S237>:84' */
        }

        /* Transition: '<S237>:87' */
    }

    /* End of Chart: '<S120>/Chart' */

    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S250>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S120>/Switch' incorporates:
         *  Constant: '<S252>/Calib'
         */
        localB->Switch = KeTIMR_e_ScreenMsg_CancOvrd;
    }
    else
    {
        /* Switch: '<S120>/Switch' */
        localB->Switch = rtb_ScreenMsg_Canc;
    }

    /* End of Switch: '<S120>/Switch' */
}

#endif

/* Output and update for function-call system: '<S108>/RaceModePreCondCheck' */
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModePreCondCheck(VAR(boolean,
    AUTOMATIC) rtu_ParkBrakeSts, VAR(boolean, AUTOMATIC)
    rtu_Vehicle_Stand_Still_Status, VAR(float32, AUTOMATIC) rtu_LwsAngle, VAR
    (sint16, AUTOMATIC) rtu_VldtdTransRngSt, VAR(float32, AUTOMATIC)
    rtu_Brake_Boost_Pressure, VAR(TeBRKR_e_Not_OK_To_Race, AUTOMATIC)
    rtu_Not_OK_To_Race, P2VAR(B_RaceModePreCondCheck_TIMR_a_T, AUTOMATIC,
    TIMR_VAR_INIT) localB)
{
    TeTIMR_e_RaceMode_Popup rtb_ScreenMsg_PreCond;

    /* Chart: '<S125>/Chart' incorporates:
     *  Abs: '<S125>/Abs'
     *  Constant: '<S284>/Constant'
     *  Constant: '<S285>/Calib'
     *  Constant: '<S286>/Calib'
     *  Constant: '<S289>/Calib'
     *  Logic: '<S125>/Logical Operator1'
     *  RelationalOperator: '<S125>/Relational Operator1'
     *  RelationalOperator: '<S125>/Relational Operator2'
     *  RelationalOperator: '<S125>/Relational Operator3'
     *  RelationalOperator: '<S125>/Relational Operator4'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModePreCondCheck/Chart */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModePreCondCheck/Chart */
    /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModePreCondCheck/Chart */
    /* Transition: '<S283>:2' */
    rtb_ScreenMsg_PreCond = CeTIMR_e_TM0;
    if (rtu_Brake_Boost_Pressure < KeTIMR_P_MinBrakePressure)
    {
        /* Transition: '<S283>:4' */
        /* Transition: '<S283>:86' */
        rtb_ScreenMsg_PreCond = CeTIMR_e_TM61;
    }
    else
    {
        /* Transition: '<S283>:6' */
        if (rtu_VldtdTransRngSt != KeTIMR_i_DriveSelect)
        {
            /* Transition: '<S283>:8' */
            /* Transition: '<S283>:67' */
            rtb_ScreenMsg_PreCond = CeTIMR_e_TM32;
        }
        else
        {
            /* Transition: '<S283>:10' */
            if (fabsf(rtu_LwsAngle) >= KeTIMR_phi_Angle_Limit)
            {
                /* Transition: '<S283>:12' */
                /* Transition: '<S283>:65' */
                rtb_ScreenMsg_PreCond = CeTIMR_e_TM31;
            }
            else
            {
                /* Transition: '<S283>:14' */
                if (((uint32)rtu_Not_OK_To_Race) == CeBRKR_e_Not_Level)
                {
                    /* Transition: '<S283>:16' */
                    /* Transition: '<S283>:63' */
                    rtb_ScreenMsg_PreCond = CeTIMR_e_TM30;
                }
                else
                {
                    /* Transition: '<S283>:18' */
                    if (!rtu_Vehicle_Stand_Still_Status)
                    {
                        /* Transition: '<S283>:20' */
                        /* Transition: '<S283>:61' */
                        rtb_ScreenMsg_PreCond = CeTIMR_e_TM29;
                    }
                    else
                    {
                        /* Transition: '<S283>:22' */
                        if (rtu_ParkBrakeSts)
                        {
                            /* Transition: '<S283>:24' */
                            /* Transition: '<S283>:59' */
                            rtb_ScreenMsg_PreCond = CeTIMR_e_TM28;
                        }
                        else
                        {
                            /* Transition: '<S283>:109' */
                            /* Transition: '<S283>:110' */
                        }

                        /* Transition: '<S283>:81' */
                    }

                    /* Transition: '<S283>:82' */
                }

                /* Transition: '<S283>:83' */
            }

            /* Transition: '<S283>:84' */
        }

        /* Transition: '<S283>:87' */
    }

    /* End of Chart: '<S125>/Chart' */

    /* Switch: '<S125>/Switch' incorporates:
     *  Constant: '<S288>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S125>/Switch' incorporates:
         *  Constant: '<S287>/Calib'
         */
        localB->Switch = KeTIMR_e_ScreenMsg_PreCondOvrd;
    }
    else
    {
        /* Switch: '<S125>/Switch' */
        localB->Switch = rtb_ScreenMsg_PreCond;
    }

    /* End of Switch: '<S125>/Switch' */
}

#endif

/* Output and update for function-call system: '<S108>/DonutOn_PopCond' */
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_DonutOn_PopCond(VAR(float32,
    AUTOMATIC) rtu_Steering_Wheel_Angle, VAR(float32, AUTOMATIC) rtu_AccPdl,
    P2VAR(B_DonutOn_PopCond_TIMR_ac_T, AUTOMATIC, TIMR_VAR_INIT) localB)
{
    /* Switch: '<S111>/Switch' incorporates:
     *  Constant: '<S155>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S111>/Switch' incorporates:
         *  Constant: '<S154>/Calib'
         */
        localB->Switch = KeTIMR_b_DriveReadyOvrd;
    }
    else
    {
        /* Switch: '<S111>/Switch' incorporates:
         *  Abs: '<S111>/Abs'
         *  Constant: '<S152>/Calib'
         *  Constant: '<S153>/Calib'
         *  Logic: '<S111>/Logical Operator2'
         *  RelationalOperator: '<S111>/Relational Operator1'
         *  RelationalOperator: '<S111>/Relational Operator2'
         */
        localB->Switch = ((fabsf(rtu_Steering_Wheel_Angle) >=
                           KeTIMR_phi_DonutMinAngle) && (rtu_AccPdl >=
                           KeTIMR_Pct_DonutMinPdlAcc));
    }

    /* End of Switch: '<S111>/Switch' */
}

#endif

/* Output and update for function-call system: '<S108>/DriftOn_PopCond' */
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_DriftOn_PopCond(VAR(float32,
    AUTOMATIC) rtu_AccPdl, P2VAR(B_DriftOn_PopCond_TIMR_ac_T, AUTOMATIC,
    TIMR_VAR_INIT) localB)
{
    /* Switch: '<S112>/Switch' incorporates:
     *  Constant: '<S156>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S112>/Switch' incorporates:
         *  Constant: '<S158>/Calib'
         */
        localB->Switch = KeTIMR_b_DonutReadyOvrd;
    }
    else
    {
        /* Switch: '<S112>/Switch' incorporates:
         *  Constant: '<S157>/Calib'
         *  RelationalOperator: '<S112>/Relational Operator1'
         */
        localB->Switch = (rtu_AccPdl > KeTIMR_Pct_DriftMinPdlAcc);
    }

    /* End of Switch: '<S112>/Switch' */
}

#endif

/* Output and update for function-call system: '<S108>/ExitDeadPedalCond' */
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_ExitDeadPedalCond(VAR(float32,
    AUTOMATIC) rtu_LeftFrontWheel, VAR(float32, AUTOMATIC) rtu_RightFrontWheel,
    VAR(float32, AUTOMATIC) rtu_LeftRearWheel, VAR(float32, AUTOMATIC)
    rtu_RightRearWheel, P2VAR(B_ExitDeadPedalCond_TIMR_ac_T, AUTOMATIC,
    TIMR_VAR_INIT) localB)
{
    /* Switch: '<S115>/Switch' incorporates:
     *  Constant: '<S195>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S115>/Switch' incorporates:
         *  Constant: '<S196>/Calib'
         */
        localB->Switch = KeTIMR_b_ExitDeadPedalCondOvrd;
    }
    else
    {
        /* Switch: '<S115>/Switch' incorporates:
         *  Abs: '<S115>/Abs'
         *  Abs: '<S115>/Abs1'
         *  Constant: '<S194>/Calib'
         *  Logic: '<S115>/Logical Operator2'
         *  RelationalOperator: '<S115>/Relational Operator1'
         *  RelationalOperator: '<S115>/Relational Operator2'
         *  Sum: '<S115>/Sum'
         *  Sum: '<S115>/Sum1'
         */
        localB->Switch = ((fabsf(rtu_LeftRearWheel - rtu_LeftFrontWheel) <
                           KeTIMR_v_RaceEndSpd) && (fabsf(rtu_RightRearWheel -
                            rtu_RightFrontWheel) < KeTIMR_v_RaceEndSpd));
    }

    /* End of Switch: '<S115>/Switch' */
}

#endif

/* Output and update for function-call system: '<S108>/RaceModeCancDonutCheck' */
#if !Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModeCancDonutCheck(VAR(boolean,
    AUTOMATIC) rtu_ParkBrakeSts, VAR(sint16, AUTOMATIC) rtu_VldtdTransRngSt,
    P2VAR(B_RaceModeCancDonutCheck_TIMR_T, AUTOMATIC, TIMR_VAR_INIT) localB)
{
    TeTIMR_e_RaceMode_Popup rtb_ScreenMsg_Canc_Donut;

    /* Chart: '<S121>/Chart' incorporates:
     *  Constant: '<S260>/Calib'
     *  RelationalOperator: '<S121>/Relational Operator4'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancDonutCheck/Chart */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancDonutCheck/Chart */
    /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancDonutCheck/Chart */
    /* Transition: '<S257>:2' */
    rtb_ScreenMsg_Canc_Donut = CeTIMR_e_TM0;
    if (rtu_ParkBrakeSts)
    {
        /* Transition: '<S257>:4' */
        /* Transition: '<S257>:86' */
        rtb_ScreenMsg_Canc_Donut = CeTIMR_e_TM57;
    }
    else
    {
        /* Transition: '<S257>:6' */
        if (rtu_VldtdTransRngSt != KeTIMR_i_DriveSelect)
        {
            /* Transition: '<S257>:8' */
            /* Transition: '<S257>:67' */
            rtb_ScreenMsg_Canc_Donut = CeTIMR_e_TM58;
        }
        else
        {
            /* Transition: '<S257>:112' */
            /* Transition: '<S257>:113' */
        }

        /* Transition: '<S257>:87' */
    }

    /* End of Chart: '<S121>/Chart' */

    /* Switch: '<S121>/Switch' incorporates:
     *  Constant: '<S259>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S121>/Switch' incorporates:
         *  Constant: '<S258>/Calib'
         */
        localB->Switch = KeTIMR_e_ScreenMsg_Canc_DonutOvrd;
    }
    else
    {
        /* Switch: '<S121>/Switch' */
        localB->Switch = rtb_ScreenMsg_Canc_Donut;
    }

    /* End of Switch: '<S121>/Switch' */
}

#endif

/* Output and update for function-call system: '<S109>/EntryCondCheck' */
#if Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_EntryCondCheck(VAR(float32, AUTOMATIC)
    rtu_TotalOdometer, VAR(boolean, AUTOMATIC) rtu_PropSysActv, VAR(boolean,
    AUTOMATIC) rtu_DriveReady, VAR(float32, AUTOMATIC) rtu_VehSpd, VAR
    (TeDMDR_e_TurtleMdSts, AUTOMATIC) rtu_TurtleMode, VAR(float32, AUTOMATIC)
    rtu_Soc, VAR(TePLTR_e_ACCSystemSts, AUTOMATIC) rtu_Acc_System_Status, VAR
    (TePLTR_e_HAS_TelltaleSts, AUTOMATIC) rtu_HAS_Telltale_Status, VAR
    (TePLTR_e_AEB_SystemSts, AUTOMATIC) rtu_AEB_System_Status, VAR(boolean,
    AUTOMATIC) rtu_Door_Ajar, VAR(float32, AUTOMATIC) rtu_HV_BatteryTempAvg, VAR
    (float32, AUTOMATIC) rtu_MotorBTemp, VAR(float32, AUTOMATIC) rtu_MotorCTemp,
    VAR(boolean, AUTOMATIC) rtu_BrakeFaulted, VAR(boolean, AUTOMATIC)
    rtu_WhlSpdLHF_FA, VAR(boolean, AUTOMATIC) rtu_WhlSpdLHR_FA, VAR(boolean,
    AUTOMATIC) rtu_WhlSpdRHF_FA, VAR(boolean, AUTOMATIC) rtu_WhlSpdRHR_FA, VAR
    (boolean, AUTOMATIC) rtu_Door_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_VehSpd_FA,
    VAR(boolean, AUTOMATIC) rtu_Soc_FA, VAR(boolean, AUTOMATIC)
    rtu_Acc_System_Status_FA, VAR(boolean, AUTOMATIC) rtu_HAS_Telltale_Status_FA,
    VAR(boolean, AUTOMATIC) rtu_AEB_System_Status_FA, VAR(boolean, AUTOMATIC)
    rtu_HV_BatteryTempAvg_FA, VAR(boolean, AUTOMATIC) rtu_MotorBTemp_FA, VAR
    (boolean, AUTOMATIC) rtu_MotorCTemp_FA, VAR(boolean, AUTOMATIC)
    rtu_VeSRAR_b_Inhibit_AWD_Terrai, VAR(float32, AUTOMATIC) rtu_MtrA_InvrtrTemp,
    VAR(float32, AUTOMATIC) rtu_MtrB_InvrtrTemp, VAR(boolean, AUTOMATIC)
    rtu_MtrA_InvrtrTempFA, VAR(boolean, AUTOMATIC) rtu_MtrB_InvrtrTempFA, VAR
    (boolean, AUTOMATIC) rtu_MaxBoost_Mode_Type, VAR(TePLTR_e_DRV_SEATBELT,
    AUTOMATIC) rtu_SeatBeltSts, VAR(boolean, AUTOMATIC) rtu_FunctionSts, VAR
    (sint16, AUTOMATIC) rtu_VldtdTransRngSt, VAR(float32, AUTOMATIC)
    rtu_LwsAngle, VAR(float32, AUTOMATIC) rtu_Pct_Slope, VAR(float32, AUTOMATIC)
    rtu_LongAccel_ORC, VAR(float32, AUTOMATIC) rtu_LatAccel_ORC, VAR(boolean,
    AUTOMATIC) rtu_LaunchSuspension, VAR(TePLTR_e_ASCM_Stat, AUTOMATIC)
    rtu_ASCM_Stat, VAR(boolean, AUTOMATIC) rtu_SeatBeltSts_FA, VAR(boolean,
    AUTOMATIC) rtu_LwsAngleFA, VAR(boolean, AUTOMATIC) rtu_SlopeFA, VAR(boolean,
    AUTOMATIC) rtu_LatAccelFailSts_ORC, VAR(boolean, AUTOMATIC)
    rtu_LongAccelFailSts_ORC, VAR(boolean, AUTOMATIC) rtu_ASCM_Stat_FA, VAR
    (boolean, AUTOMATIC) rtu_ASCM_SysFail, VAR(boolean, AUTOMATIC) rtu_ASCM_Srv,
    VAR(boolean, AUTOMATIC) rtu_ASCM_SysSys, VAR(boolean, AUTOMATIC)
    rtu_ASCM_SysFailFA, VAR(boolean, AUTOMATIC) rtu_ASCM_SrvFA, VAR(boolean,
    AUTOMATIC) rtu_ASCM_SysSysFA, VAR(boolean, AUTOMATIC) rtu_Odometer_Miles_FA,
    VAR(boolean, AUTOMATIC) rtu_Popup_Msg1)
{
    TeTIMR_e_TextDisplay rtb_ScreenMsg;
    boolean rtb_LogicalOperator1_es;
    boolean rtb_LogicalOperator29;
    boolean rtb_LogicalOperator29_tmp;
    boolean rtb_RelationalOperator10_g;

    /* RelationalOperator: '<S317>/Relational Operator10' incorporates:
     *  Constant: '<S355>/Constant'
     *  Constant: '<S365>/Calib'
     *  Logic: '<S317>/Logical Operator4'
     *  RelationalOperator: '<S317>/Relational Operator5'
     *  RelationalOperator: '<S317>/Relational Operator6'
     */
    rtb_RelationalOperator10_g = ((((uint32)rtu_TurtleMode) !=
        CeDMDR_e_No_Turtle_Mode) && (rtu_Soc < KeTIMR_Pct_MinSoc));

    /* Logic: '<S317>/Logical Operator1' */
    rtb_LogicalOperator1_es = (rtb_RelationalOperator10_g &&
        rtu_MaxBoost_Mode_Type);

    /* Logic: '<S317>/Logical Operator30' incorporates:
     *  Logic: '<S317>/Logical Operator15'
     *  Logic: '<S317>/Logical Operator20'
     *  Logic: '<S317>/Logical Operator22'
     *  Logic: '<S317>/Logical Operator27'
     *  Logic: '<S317>/Logical Operator32'
     *  Logic: '<S317>/Logical Operator43'
     */
    rtb_LogicalOperator29_tmp = !rtu_MaxBoost_Mode_Type;

    /* Logic: '<S317>/Logical Operator29' incorporates:
     *  Logic: '<S317>/Logical Operator30'
     */
    rtb_LogicalOperator29 = (rtb_LogicalOperator29_tmp &&
        rtb_RelationalOperator10_g);

    /* RelationalOperator: '<S317>/Relational Operator10' incorporates:
     *  Constant: '<S366>/Calib'
     */
    rtb_RelationalOperator10_g = (rtu_HV_BatteryTempAvg > KeTIMR_T_HVBattMax);

    /* Chart: '<S317>/Chart' incorporates:
     *  Abs: '<S317>/Abs'
     *  Abs: '<S317>/Abs1'
     *  Abs: '<S317>/Abs2'
     *  Abs: '<S317>/Abs3'
     *  Constant: '<S352>/Constant'
     *  Constant: '<S353>/Constant'
     *  Constant: '<S354>/Constant'
     *  Constant: '<S356>/Constant'
     *  Constant: '<S357>/Constant'
     *  Constant: '<S358>/Calib'
     *  Constant: '<S359>/Calib'
     *  Constant: '<S360>/Calib'
     *  Constant: '<S361>/Calib'
     *  Constant: '<S362>/Calib'
     *  Constant: '<S363>/Calib'
     *  Constant: '<S364>/Calib'
     *  Constant: '<S367>/Calib'
     *  Constant: '<S370>/Calib'
     *  Constant: '<S371>/Calib'
     *  Logic: '<S317>/Logical Operator11'
     *  Logic: '<S317>/Logical Operator13'
     *  Logic: '<S317>/Logical Operator16'
     *  Logic: '<S317>/Logical Operator17'
     *  Logic: '<S317>/Logical Operator18'
     *  Logic: '<S317>/Logical Operator19'
     *  Logic: '<S317>/Logical Operator2'
     *  Logic: '<S317>/Logical Operator21'
     *  Logic: '<S317>/Logical Operator23'
     *  Logic: '<S317>/Logical Operator24'
     *  Logic: '<S317>/Logical Operator25'
     *  Logic: '<S317>/Logical Operator26'
     *  Logic: '<S317>/Logical Operator3'
     *  Logic: '<S317>/Logical Operator31'
     *  Logic: '<S317>/Logical Operator33'
     *  Logic: '<S317>/Logical Operator34'
     *  Logic: '<S317>/Logical Operator42'
     *  Logic: '<S317>/Logical Operator5'
     *  Logic: '<S317>/Logical Operator6'
     *  Logic: '<S317>/Logical Operator8'
     *  RelationalOperator: '<S317>/Relational Operator1'
     *  RelationalOperator: '<S317>/Relational Operator11'
     *  RelationalOperator: '<S317>/Relational Operator12'
     *  RelationalOperator: '<S317>/Relational Operator13'
     *  RelationalOperator: '<S317>/Relational Operator14'
     *  RelationalOperator: '<S317>/Relational Operator15'
     *  RelationalOperator: '<S317>/Relational Operator18'
     *  RelationalOperator: '<S317>/Relational Operator19'
     *  RelationalOperator: '<S317>/Relational Operator2'
     *  RelationalOperator: '<S317>/Relational Operator20'
     *  RelationalOperator: '<S317>/Relational Operator21'
     *  RelationalOperator: '<S317>/Relational Operator22'
     *  RelationalOperator: '<S317>/Relational Operator3'
     *  RelationalOperator: '<S317>/Relational Operator4'
     *  RelationalOperator: '<S317>/Relational Operator7'
     *  RelationalOperator: '<S317>/Relational Operator8'
     *  RelationalOperator: '<S317>/Relational Operator9'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/EntryCondCheck/Chart */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/EntryCondCheck/Chart */
    /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/EntryCondCheck/Chart */
    /* Transition: '<S351>:2' */
    rtb_ScreenMsg = CeTIMR_e_NONE;
    if ((rtu_TotalOdometer < KeTIMR_milel_OdometerUnKm) &&
            rtb_LogicalOperator29_tmp)
    {
        /* Transition: '<S351>:4' */
        /* Transition: '<S351>:86' */
        rtb_ScreenMsg = CeTIMR_e_TxtMsg_1;
    }
    else
    {
        /* Transition: '<S351>:6' */
        if ((!rtu_PropSysActv) || (!rtu_DriveReady))
        {
            /* Transition: '<S351>:8' */
            /* Transition: '<S351>:67' */
            rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
        }
        else
        {
            /* Transition: '<S351>:10' */
            if (rtu_VehSpd > KeTIMR_v_RaceMinSpd)
            {
                /* Transition: '<S351>:12' */
                /* Transition: '<S351>:65' */
                rtb_ScreenMsg = CeTIMR_e_TxtMsg_17;
            }
            else
            {
                /* Transition: '<S351>:14' */
                if (rtb_LogicalOperator1_es)
                {
                    /* Transition: '<S351>:16' */
                    /* Transition: '<S351>:63' */
                    rtb_ScreenMsg = CeTIMR_e_TxtMsg_18;
                }
                else
                {
                    /* Transition: '<S351>:18' */
                    if (rtb_LogicalOperator29)
                    {
                        /* Transition: '<S351>:20' */
                        /* Transition: '<S351>:61' */
                        rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
                    }
                    else
                    {
                        /* Transition: '<S351>:22' */
                        if (((((uint32)rtu_Acc_System_Status) ==
                                CePLTR_e_Engaged) ||
                                ((CePLTR_e_HAS_TelltaleSts_OFF != ((uint32)
                                rtu_HAS_Telltale_Status)) && (((uint32)
                                rtu_HAS_Telltale_Status) !=
                                CePLTR_e_HAS_TelltaleSts_GREY))) || (((uint32)
                                rtu_AEB_System_Status) == CePLTR_e_FCW_On_Full))
                        {
                            /* Transition: '<S351>:24' */
                            /* Transition: '<S351>:59' */
                            rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
                        }
                        else
                        {
                            /* Transition: '<S351>:26' */
                            if (rtu_Door_Ajar && rtb_LogicalOperator29_tmp)
                            {
                                /* Transition: '<S351>:28' */
                                /* Transition: '<S351>:57' */
                                rtb_ScreenMsg = CeTIMR_e_TxtMsg_16;
                            }
                            else
                            {
                                /* Transition: '<S351>:30' */
                                if ((((uint32)rtu_SeatBeltSts) !=
                                        CePLTR_e_DRV_SEATBELT_OK) &&
                                        rtb_LogicalOperator29_tmp)
                                {
                                    /* Transition: '<S351>:32' */
                                    /* Transition: '<S351>:55' */
                                    rtb_ScreenMsg = CeTIMR_e_TxtMsg_2;
                                }
                                else
                                {
                                    /* Transition: '<S351>:34' */
                                    if (rtb_RelationalOperator10_g &&
                                            rtu_MaxBoost_Mode_Type)
                                    {
                                        /* Transition: '<S351>:36' */
                                        /* Transition: '<S351>:53' */
                                        rtb_ScreenMsg = CeTIMR_e_TxtMsg_19;
                                    }
                                    else
                                    {
                                        /* Transition: '<S351>:38' */
                                        if (rtb_LogicalOperator29_tmp &&
                                                rtb_RelationalOperator10_g)
                                        {
                                            /* Transition: '<S351>:40' */
                                            /* Transition: '<S351>:51' */
                                            rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
                                        }
                                        else
                                        {
                                            /* Transition: '<S351>:42' */
                                            if ((((rtu_MotorBTemp >
                                                    KeTIMR_T_MotorTempMax) ||
                                                    (rtu_MotorCTemp >
                                                     KeTIMR_T_MotorTempMax)) ||
                                                    (rtu_MtrA_InvrtrTemp >
                                                     KeTIMR_T_InverterTempMax)) ||
                                                (rtu_MtrB_InvrtrTemp >
                                                    KeTIMR_T_InverterTempMax))
                                            {
                                                /* Transition: '<S351>:49' */
                                                /* Transition: '<S351>:69' */
                                                rtb_ScreenMsg =
                                                    CeTIMR_e_TxtMsg_15;
                                            }
                                            else
                                            {
                                                /* Transition: '<S351>:71' */
                                                if (rtu_FunctionSts &&
                                                        rtb_LogicalOperator29_tmp)
                                                {
                                                    /* Transition: '<S351>:141' */
                                                    /* Transition: '<S351>:164' */
                                                    rtb_ScreenMsg =
                                                        CeTIMR_e_TxtMsg_15;
                                                }
                                                else
                                                {
                                                    /* Transition: '<S351>:143' */
                                                    if ((((((((rtu_Popup_Msg1 ||
                                                               rtu_BrakeFaulted)
                                                              ||
                                                              rtu_WhlSpdLHF_FA) ||
                                                             rtu_WhlSpdLHR_FA) ||
                                                            rtu_WhlSpdRHF_FA) ||
                                                           rtu_WhlSpdRHR_FA) ||
                                                            rtu_VeSRAR_b_Inhibit_AWD_Terrai)
                                                         || ((((((((((((((((((((rtu_VehSpd_FA
                                                        || rtu_Soc_FA) ||
                                                            rtu_Acc_System_Status_FA)
                                                        || rtu_HAS_Telltale_Status_FA)
                                                                      ||
                                                                      rtu_AEB_System_Status_FA)
                                                                      ||
                                                                      rtu_Door_Ajar_FA)
                                                                      ||
                                                                      rtu_SeatBeltSts_FA)
                                                                      ||
                                                                      rtu_HV_BatteryTempAvg_FA)
                                                                      ||
                                                                      rtu_MotorBTemp_FA)
                                                                     ||
                                                                     rtu_MotorCTemp_FA)
                                                                    ||
                                                                    rtu_MtrA_InvrtrTempFA)
                                                                   ||
                                                                   rtu_MtrB_InvrtrTempFA)
                                                                  ||
                                                                  rtu_LwsAngleFA)
                                                                 || rtu_SlopeFA)
                                                                ||
                                                                rtu_LatAccelFailSts_ORC)
                                                               ||
                                                               rtu_LongAccelFailSts_ORC)
                                                              ||
                                                              rtu_ASCM_Stat_FA) ||
                                                             rtu_ASCM_SysFailFA)
                                                            || rtu_ASCM_SrvFA) ||
                                                           rtu_ASCM_SysSysFA) ||
                                                          rtu_Odometer_Miles_FA))
                                                        || (rtu_LaunchSuspension
                                                            &&
                                                            ((rtu_ASCM_SysFail ||
                                                           rtu_ASCM_Srv) ||
                                                            rtu_ASCM_SysSys)))
                                                    {
                                                        /* Transition: '<S351>:145' */
                                                        /* Transition: '<S351>:166' */
                                                        rtb_ScreenMsg =
                                                            CeTIMR_e_TxtMsg_15;
                                                    }
                                                    else
                                                    {
                                                        /* Transition: '<S351>:147' */
                                                        if (rtu_VldtdTransRngSt
                                                                !=
                                                                KeTIMR_i_DriveSelect)
                                                        {
                                                            /* Transition: '<S351>:149' */
                                                            /* Transition: '<S351>:168' */
                                                            rtb_ScreenMsg =
                                                                CeTIMR_e_TxtMsg_15;
                                                        }
                                                        else
                                                        {
                                                            /* Transition: '<S351>:151' */
                                                            if (fabsf
                                                                    (rtu_LwsAngle)
                                                                >= KeTIMR_phi_Angle_Limit)
                                                            {
                                                                /* Transition: '<S351>:153' */
                                                                /* Transition: '<S351>:170' */
                                                                rtb_ScreenMsg =
                                                                    CeTIMR_e_TxtMsg_8;
                                                            }
                                                            else
                                                            {
                                                                /* Transition: '<S351>:155' */
                                                                if ((((fabsf
                                                                      (rtu_Pct_Slope)
                                                                      >
                                                                      KeTIMR_Pct_MaxVehicleSlope)
                                                                      || (fabsf
                                                                      (rtu_LongAccel_ORC)
                                                                      >
                                                                      KeTIMR_a_MaxLongAcc))
                                                                     || (fabsf
                                                                      (rtu_LatAccel_ORC)
                                                                      >
                                                                      KeTIMR_a_MaxLatAcc))
                                                                    &&
                                                                      rtb_LogicalOperator29_tmp)
                                                                {
                                                                    /* Transition: '<S351>:157' */
                                                                    /* Transition: '<S351>:172' */
                                                                    rtb_ScreenMsg
                                                                      =
                                                                      CeTIMR_e_TxtMsg_7;
                                                                }
                                                                else
                                                                {
                                                                    /* Transition: '<S351>:159' */
                                                                    if
                                                                      ((rtu_ASCM_Stat
                                                                      !=
                                                                      KeTIMR_e_Launch_AccSusp)
                                                                      &&
                                                                      rtu_LaunchSuspension)
                                                                    {
                                                                      /* Transition: '<S351>:161' */
                                                                      /* Transition: '<S351>:174' */
                                                                      rtb_ScreenMsg
                                                                      =
                                                                      CeTIMR_e_TxtMsg_15;
                                                                    }
                                                                    else
                                                                    {
                                                                      /* Transition: '<S351>:182' */
                                                                      /* Transition: '<S351>:175' */
                                                                    }

                                                                    /* Transition: '<S351>:176' */
                                                                }

                                                                /* Transition: '<S351>:177' */
                                                            }

                                                            /* Transition: '<S351>:178' */
                                                        }

                                                        /* Transition: '<S351>:179' */
                                                    }

                                                    /* Transition: '<S351>:180' */
                                                }

                                                /* Transition: '<S351>:181' */
                                            }

                                            /* Transition: '<S351>:74' */
                                        }

                                        /* Transition: '<S351>:77' */
                                    }

                                    /* Transition: '<S351>:78' */
                                }

                                /* Transition: '<S351>:79' */
                            }

                            /* Transition: '<S351>:80' */
                        }

                        /* Transition: '<S351>:81' */
                    }

                    /* Transition: '<S351>:82' */
                }

                /* Transition: '<S351>:83' */
            }

            /* Transition: '<S351>:84' */
        }

        /* Transition: '<S351>:87' */
    }

    /* End of Chart: '<S317>/Chart' */

    /* Switch: '<S317>/Switch' incorporates:
     *  Constant: '<S368>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S317>/Switch' incorporates:
         *  Constant: '<S369>/Calib'
         */
        VeTIMR_e_ScreenTextEntry = KeTIMR_e_ScreenText_EntryOvrd;
    }
    else
    {
        /* Switch: '<S317>/Switch' */
        VeTIMR_e_ScreenTextEntry = rtb_ScreenMsg;
    }

    /* End of Switch: '<S317>/Switch' */
}

#endif

/* Output and update for function-call system: '<S109>/RaceModeCancCheck' */
#if Rte_SysCon_Variant_TIMR_3

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_RaceModeCancCheck_f(VAR(boolean,
    AUTOMATIC) rtu_PropSysActv, VAR(boolean, AUTOMATIC) rtu_DriveReady, VAR
    (float32, AUTOMATIC) rtu_VehSpd, VAR(TeDMDR_e_TurtleMdSts, AUTOMATIC)
    rtu_TurtleMode, VAR(float32, AUTOMATIC) rtu_Soc, VAR(TePLTR_e_ACCSystemSts,
    AUTOMATIC) rtu_Acc_System_Status, VAR(TePLTR_e_HAS_TelltaleSts, AUTOMATIC)
    rtu_HAS_Telltale_Status, VAR(TePLTR_e_AEB_SystemSts, AUTOMATIC)
    rtu_AEB_System_Status, VAR(boolean, AUTOMATIC) rtu_Door_Ajar, VAR(float32,
    AUTOMATIC) rtu_HV_BatteryTempAvg, VAR(float32, AUTOMATIC) rtu_MotorBTemp,
    VAR(float32, AUTOMATIC) rtu_MotorCTemp, VAR(boolean, AUTOMATIC)
    rtu_BrakeFaulted, VAR(boolean, AUTOMATIC) rtu_WhlSpdLHF_FA, VAR(boolean,
    AUTOMATIC) rtu_WhlSpdLHR_FA, VAR(boolean, AUTOMATIC) rtu_WhlSpdRHF_FA, VAR
    (boolean, AUTOMATIC) rtu_WhlSpdRHR_FA, VAR(boolean, AUTOMATIC)
    rtu_Door_Ajar_FA, VAR(boolean, AUTOMATIC) rtu_VehSpd_FA, VAR(boolean,
    AUTOMATIC) rtu_Soc_FA, VAR(boolean, AUTOMATIC) rtu_Acc_System_Status_FA, VAR
    (boolean, AUTOMATIC) rtu_HAS_Telltale_Status_FA, VAR(boolean, AUTOMATIC)
    rtu_AEB_System_Status_FA, VAR(boolean, AUTOMATIC) rtu_HV_BatteryTempAvg_FA,
    VAR(boolean, AUTOMATIC) rtu_MotorBTemp_FA, VAR(boolean, AUTOMATIC)
    rtu_MotorCTemp_FA, VAR(boolean, AUTOMATIC) rtu_VeSRAR_b_Inhibit_AWD_Terrai,
    VAR(float32, AUTOMATIC) rtu_MtrA_InvrtrTemp, VAR(float32, AUTOMATIC)
    rtu_MtrB_InvrtrTemp, VAR(boolean, AUTOMATIC) rtu_MtrA_InvrtrTempFA, VAR
    (boolean, AUTOMATIC) rtu_MtrB_InvrtrTempFA, VAR(boolean, AUTOMATIC)
    rtu_MaxBoost_Mode_Type, VAR(TePLTR_e_DRV_SEATBELT, AUTOMATIC)
    rtu_SeatBeltSts, VAR(boolean, AUTOMATIC) rtu_FunctionSts, VAR(sint16,
    AUTOMATIC) rtu_VldtdTransRngSt, VAR(float32, AUTOMATIC) rtu_LwsAngle, VAR
    (float32, AUTOMATIC) rtu_LatAccel_ORC, VAR(boolean, AUTOMATIC)
    rtu_LaunchSuspension, VAR(TePLTR_e_ASCM_Stat, AUTOMATIC) rtu_ASCM_Stat, VAR
    (boolean, AUTOMATIC) rtu_SeatBeltSts_FA, VAR(boolean, AUTOMATIC)
    rtu_LwsAngleFA, VAR(boolean, AUTOMATIC) rtu_LatAccelFailSts_ORC, VAR(boolean,
    AUTOMATIC) rtu_ASCM_Stat_FA, VAR(boolean, AUTOMATIC) rtu_ASCM_SysFail, VAR
    (boolean, AUTOMATIC) rtu_ASCM_Srv, VAR(boolean, AUTOMATIC) rtu_ASCM_SysSys,
    VAR(boolean, AUTOMATIC) rtu_ASCM_SysFailFA, VAR(boolean, AUTOMATIC)
    rtu_ASCM_SrvFA, VAR(boolean, AUTOMATIC) rtu_ASCM_SysSysFA, VAR
    (TeTIMR_e_RaceModeSts, AUTOMATIC) rtu_Race_Mode_Status, VAR(boolean,
    AUTOMATIC) rtu_Popup_Msg1)
{
    TeTIMR_e_TextDisplay rtb_ScreenMsg;
    boolean rtb_LogicalOperator1_ky;
    boolean rtb_LogicalOperator29;
    boolean rtb_LogicalOperator29_p_tmp;
    boolean rtb_RelationalOperator10_f;

    /* RelationalOperator: '<S322>/Relational Operator10' incorporates:
     *  Constant: '<S413>/Constant'
     *  Constant: '<S421>/Calib'
     *  Logic: '<S322>/Logical Operator4'
     *  RelationalOperator: '<S322>/Relational Operator5'
     *  RelationalOperator: '<S322>/Relational Operator6'
     */
    rtb_RelationalOperator10_f = ((((uint32)rtu_TurtleMode) !=
        CeDMDR_e_No_Turtle_Mode) && (rtu_Soc < KeTIMR_Pct_MinSoc));

    /* Logic: '<S322>/Logical Operator1' */
    rtb_LogicalOperator1_ky = (rtb_RelationalOperator10_f &&
        rtu_MaxBoost_Mode_Type);

    /* Logic: '<S322>/Logical Operator30' incorporates:
     *  Logic: '<S322>/Logical Operator20'
     *  Logic: '<S322>/Logical Operator22'
     *  Logic: '<S322>/Logical Operator27'
     *  Logic: '<S322>/Logical Operator32'
     *  Logic: '<S322>/Logical Operator43'
     */
    rtb_LogicalOperator29_p_tmp = !rtu_MaxBoost_Mode_Type;

    /* Logic: '<S322>/Logical Operator29' incorporates:
     *  Logic: '<S322>/Logical Operator30'
     */
    rtb_LogicalOperator29 = (rtb_LogicalOperator29_p_tmp &&
        rtb_RelationalOperator10_f);

    /* RelationalOperator: '<S322>/Relational Operator10' incorporates:
     *  Constant: '<S422>/Calib'
     */
    rtb_RelationalOperator10_f = (rtu_HV_BatteryTempAvg > KeTIMR_T_HVBattMaxCanc);

    /* Chart: '<S322>/Chart' incorporates:
     *  Abs: '<S322>/Abs'
     *  Abs: '<S322>/Abs3'
     *  Constant: '<S410>/Constant'
     *  Constant: '<S411>/Constant'
     *  Constant: '<S412>/Constant'
     *  Constant: '<S414>/Constant'
     *  Constant: '<S415>/Constant'
     *  Constant: '<S416>/Constant'
     *  Constant: '<S417>/Calib'
     *  Constant: '<S418>/Calib'
     *  Constant: '<S419>/Calib'
     *  Constant: '<S420>/Calib'
     *  Constant: '<S423>/Calib'
     *  Constant: '<S426>/Calib'
     *  Constant: '<S427>/Calib'
     *  Logic: '<S322>/Logical Operator11'
     *  Logic: '<S322>/Logical Operator13'
     *  Logic: '<S322>/Logical Operator16'
     *  Logic: '<S322>/Logical Operator17'
     *  Logic: '<S322>/Logical Operator18'
     *  Logic: '<S322>/Logical Operator19'
     *  Logic: '<S322>/Logical Operator21'
     *  Logic: '<S322>/Logical Operator23'
     *  Logic: '<S322>/Logical Operator24'
     *  Logic: '<S322>/Logical Operator25'
     *  Logic: '<S322>/Logical Operator26'
     *  Logic: '<S322>/Logical Operator3'
     *  Logic: '<S322>/Logical Operator31'
     *  Logic: '<S322>/Logical Operator34'
     *  Logic: '<S322>/Logical Operator42'
     *  Logic: '<S322>/Logical Operator5'
     *  Logic: '<S322>/Logical Operator6'
     *  Logic: '<S322>/Logical Operator7'
     *  Logic: '<S322>/Logical Operator8'
     *  RelationalOperator: '<S322>/Relational Operator1'
     *  RelationalOperator: '<S322>/Relational Operator11'
     *  RelationalOperator: '<S322>/Relational Operator12'
     *  RelationalOperator: '<S322>/Relational Operator13'
     *  RelationalOperator: '<S322>/Relational Operator14'
     *  RelationalOperator: '<S322>/Relational Operator15'
     *  RelationalOperator: '<S322>/Relational Operator16'
     *  RelationalOperator: '<S322>/Relational Operator18'
     *  RelationalOperator: '<S322>/Relational Operator21'
     *  RelationalOperator: '<S322>/Relational Operator22'
     *  RelationalOperator: '<S322>/Relational Operator3'
     *  RelationalOperator: '<S322>/Relational Operator4'
     *  RelationalOperator: '<S322>/Relational Operator7'
     *  RelationalOperator: '<S322>/Relational Operator8'
     *  RelationalOperator: '<S322>/Relational Operator9'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceModeCancCheck/Chart */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceModeCancCheck/Chart */
    /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceModeCancCheck/Chart */
    /* Transition: '<S409>:2' */
    rtb_ScreenMsg = CeTIMR_e_NONE;
    if ((!rtu_PropSysActv) || (!rtu_DriveReady))
    {
        /* Transition: '<S409>:4' */
        /* Transition: '<S409>:86' */
        rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
    }
    else
    {
        /* Transition: '<S409>:6' */
        if (rtb_LogicalOperator1_ky)
        {
            /* Transition: '<S409>:8' */
            /* Transition: '<S409>:67' */
            rtb_ScreenMsg = CeTIMR_e_TxtMsg_18;
        }
        else
        {
            /* Transition: '<S409>:10' */
            if (rtb_LogicalOperator29)
            {
                /* Transition: '<S409>:12' */
                /* Transition: '<S409>:65' */
                rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
            }
            else
            {
                /* Transition: '<S409>:14' */
                if (((((uint32)rtu_Acc_System_Status) == CePLTR_e_Engaged) ||
                        ((CePLTR_e_HAS_TelltaleSts_OFF != ((uint32)
                        rtu_HAS_Telltale_Status)) && (((uint32)
                        rtu_HAS_Telltale_Status) !=
                        CePLTR_e_HAS_TelltaleSts_GREY))) || (((uint32)
                        rtu_AEB_System_Status) == CePLTR_e_FCW_On_Full))
                {
                    /* Transition: '<S409>:16' */
                    /* Transition: '<S409>:63' */
                    rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
                }
                else
                {
                    /* Transition: '<S409>:18' */
                    if (rtu_Door_Ajar && rtb_LogicalOperator29_p_tmp)
                    {
                        /* Transition: '<S409>:20' */
                        /* Transition: '<S409>:61' */
                        rtb_ScreenMsg = CeTIMR_e_TxtMsg_16;
                    }
                    else
                    {
                        /* Transition: '<S409>:22' */
                        if ((((uint32)rtu_SeatBeltSts) !=
                                CePLTR_e_DRV_SEATBELT_OK) &&
                                rtb_LogicalOperator29_p_tmp)
                        {
                            /* Transition: '<S409>:24' */
                            /* Transition: '<S409>:59' */
                            rtb_ScreenMsg = CeTIMR_e_TxtMsg_2;
                        }
                        else
                        {
                            /* Transition: '<S409>:26' */
                            if ((((uint32)rtu_Race_Mode_Status) ==
                                    CeTIMR_e_RaceMode_On) && (rtu_VehSpd >
                                    KeTIMR_v_RacePrepSpeed))
                            {
                                /* Transition: '<S409>:28' */
                                /* Transition: '<S409>:57' */
                                rtb_ScreenMsg = CeTIMR_e_TxtMsg_17;
                            }
                            else
                            {
                                /* Transition: '<S409>:30' */
                                if (rtb_RelationalOperator10_f &&
                                        rtu_MaxBoost_Mode_Type)
                                {
                                    /* Transition: '<S409>:32' */
                                    /* Transition: '<S409>:55' */
                                    rtb_ScreenMsg = CeTIMR_e_TxtMsg_19;
                                }
                                else
                                {
                                    /* Transition: '<S409>:34' */
                                    if (rtb_LogicalOperator29_p_tmp &&
                                            rtb_RelationalOperator10_f)
                                    {
                                        /* Transition: '<S409>:36' */
                                        /* Transition: '<S409>:53' */
                                        rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
                                    }
                                    else
                                    {
                                        /* Transition: '<S409>:38' */
                                        if ((((rtu_MotorBTemp >
                                                KeTIMR_T_MotorTempMaxCanc) ||
                                                (rtu_MotorCTemp >
                                                 KeTIMR_T_MotorTempMaxCanc)) ||
                                                (rtu_MtrA_InvrtrTemp >
                                                 KeTIMR_T_InverterTempMaxCanc)) ||
                                            (rtu_MtrB_InvrtrTemp >
                                                KeTIMR_T_InverterTempMaxCanc))
                                        {
                                            /* Transition: '<S409>:40' */
                                            /* Transition: '<S409>:51' */
                                            rtb_ScreenMsg = CeTIMR_e_TxtMsg_15;
                                        }
                                        else
                                        {
                                            /* Transition: '<S409>:42' */
                                            if (rtu_FunctionSts &&
                                                    rtb_LogicalOperator29_p_tmp)
                                            {
                                                /* Transition: '<S409>:49' */
                                                /* Transition: '<S409>:69' */
                                                rtb_ScreenMsg =
                                                    CeTIMR_e_TxtMsg_15;
                                            }
                                            else
                                            {
                                                /* Transition: '<S409>:71' */
                                                if ((fabsf(rtu_LatAccel_ORC) >
                                                        KeTIMR_a_MaxLatAcc) &&
                                                        rtb_LogicalOperator29_p_tmp)
                                                {
                                                    /* Transition: '<S409>:141' */
                                                    /* Transition: '<S409>:164' */
                                                    rtb_ScreenMsg =
                                                        CeTIMR_e_TxtMsg_15;
                                                }
                                                else
                                                {
                                                    /* Transition: '<S409>:143' */
                                                    if ((((((((rtu_Popup_Msg1 ||
                                                               rtu_BrakeFaulted)
                                                              ||
                                                              rtu_WhlSpdLHF_FA) ||
                                                             rtu_WhlSpdLHR_FA) ||
                                                            rtu_WhlSpdRHF_FA) ||
                                                           rtu_WhlSpdRHR_FA) ||
                                                            rtu_VeSRAR_b_Inhibit_AWD_Terrai)
                                                         || (((((((((((((((((rtu_VehSpd_FA
                                                                      ||
                                                                      rtu_Soc_FA)
                                                                      ||
                                                                      rtu_Acc_System_Status_FA)
                                                                      ||
                                                                      rtu_HAS_Telltale_Status_FA)
                                                                      ||
                                                                      rtu_AEB_System_Status_FA)
                                                                      ||
                                                                      rtu_Door_Ajar_FA)
                                                                     ||
                                                                     rtu_SeatBeltSts_FA)
                                                                    ||
                                                                    rtu_HV_BatteryTempAvg_FA)
                                                                   ||
                                                                   rtu_MotorBTemp_FA)
                                                                  ||
                                                                  rtu_MotorCTemp_FA)
                                                                 ||
                                                                 rtu_MtrA_InvrtrTempFA)
                                                                ||
                                                                rtu_MtrB_InvrtrTempFA)
                                                               || rtu_LwsAngleFA)
                                                              ||
                                                              rtu_LatAccelFailSts_ORC)
                                                             || rtu_ASCM_Stat_FA)
                                                            ||
                                                            rtu_ASCM_SysFailFA) ||
                                                           rtu_ASCM_SrvFA) ||
                                                            rtu_ASCM_SysSysFA)) ||
                                                        (rtu_LaunchSuspension &&
                                                         ((rtu_ASCM_SysFail ||
                                                            rtu_ASCM_Srv) ||
                                                            rtu_ASCM_SysSys)))
                                                    {
                                                        /* Transition: '<S409>:145' */
                                                        /* Transition: '<S409>:166' */
                                                        rtb_ScreenMsg =
                                                            CeTIMR_e_TxtMsg_15;
                                                    }
                                                    else
                                                    {
                                                        /* Transition: '<S409>:147' */
                                                        if (rtu_VldtdTransRngSt
                                                                !=
                                                                KeTIMR_i_DriveSelect)
                                                        {
                                                            /* Transition: '<S409>:149' */
                                                            /* Transition: '<S409>:168' */
                                                            rtb_ScreenMsg =
                                                                CeTIMR_e_TxtMsg_15;
                                                        }
                                                        else
                                                        {
                                                            /* Transition: '<S409>:151' */
                                                            if (fabsf
                                                                    (rtu_LwsAngle)
                                                                >= KeTIMR_phi_Angle_Limit)
                                                            {
                                                                /* Transition: '<S409>:153' */
                                                                /* Transition: '<S409>:170' */
                                                                rtb_ScreenMsg =
                                                                    CeTIMR_e_TxtMsg_8;
                                                            }
                                                            else
                                                            {
                                                                /* Transition: '<S409>:155' */
                                                                if ((rtu_ASCM_Stat
                                                                     !=
                                                                      KeTIMR_e_Launch_AccSusp)
                                                                    &&
                                                                      rtu_LaunchSuspension)
                                                                {
                                                                    /* Transition: '<S409>:157' */
                                                                    /* Transition: '<S409>:172' */
                                                                    rtb_ScreenMsg
                                                                      =
                                                                      CeTIMR_e_TxtMsg_15;
                                                                }
                                                                else
                                                                {
                                                                    /* Transition: '<S409>:159' */
                                                                    /* Transition: '<S409>:175' */
                                                                }

                                                                /* Transition: '<S409>:177' */
                                                            }

                                                            /* Transition: '<S409>:178' */
                                                        }

                                                        /* Transition: '<S409>:179' */
                                                    }

                                                    /* Transition: '<S409>:180' */
                                                }

                                                /* Transition: '<S409>:181' */
                                            }

                                            /* Transition: '<S409>:74' */
                                        }

                                        /* Transition: '<S409>:77' */
                                    }

                                    /* Transition: '<S409>:78' */
                                }

                                /* Transition: '<S409>:79' */
                            }

                            /* Transition: '<S409>:80' */
                        }

                        /* Transition: '<S409>:81' */
                    }

                    /* Transition: '<S409>:82' */
                }

                /* Transition: '<S409>:83' */
            }

            /* Transition: '<S409>:84' */
        }

        /* Transition: '<S409>:87' */
    }

    /* End of Chart: '<S322>/Chart' */

    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S424>/Calib'
     */
    if (KeTIMR_b_OvrdRaceCOnd)
    {
        /* Switch: '<S322>/Switch' incorporates:
         *  Constant: '<S425>/Calib'
         */
        VeTIMR_e_ScreenTextCanc = KeTIMR_e_ScreenText_CancOvrd;
    }
    else
    {
        /* Switch: '<S322>/Switch' */
        VeTIMR_e_ScreenTextCanc = rtb_ScreenMsg;
    }

    /* End of Switch: '<S322>/Switch' */
}

#endif

/*
 * Output and update for action system:
 *    '<S514>/Down_Activated'
 *    '<S516>/Down_Activated'
 */
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Down_Activated(P2VAR
    (TeTIMR_e_TrrnMdReq, AUTOMATIC, TIMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S517>/Out1' incorporates:
     *  Constant: '<S523>/Constant'
     */
    *rty_Out1 = CeTIMR_e_Down_Activated;
}

/*
 * Output and update for action system:
 *    '<S514>/Up_Activated'
 *    '<S516>/Up_Activated'
 */
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Up_Activated(P2VAR(TeTIMR_e_TrrnMdReq,
    AUTOMATIC, TIMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S522>/Out1' incorporates:
     *  Constant: '<S526>/Constant'
     */
    *rty_Out1 = CeTIMR_e_Up_Activated;
}

/*
 * Output and update for action system:
 *    '<S514>/Not_Activated'
 *    '<S516>/Not_Activated'
 */
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Not_Activated(P2VAR
    (TeTIMR_e_TrrnMdReq, AUTOMATIC, TIMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S520>/Out1' incorporates:
     *  Constant: '<S524>/Constant'
     */
    *rty_Out1 = CeTIMR_e_Not_Activated;
}

/*
 * Output and update for action system:
 *    '<S514>/SNA'
 *    '<S516>/SNA'
 */
static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_SNA(P2VAR(TeTIMR_e_TrrnMdReq,
    AUTOMATIC, TIMR_VAR_INIT) rty_Out1)
{
    /* SignalConversion generated from: '<S521>/Out1' incorporates:
     *  Constant: '<S525>/Constant'
     */
    *rty_Out1 = CeTIMR_e_Req_SNA;
}

/*
 * Output and update for action system:
 *    '<S578>/Init'
 *    '<S604>/Init'
 */
#if Rte_SysCon_Variant_TIMR_2

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Init_d(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TIMR_VAR_INIT) rty_e_FaultStsInit)
{
    /* SignalConversion generated from: '<S582>/e_FaultStsInit' incorporates:
     *  Constant: '<S585>/Constant'
     */
    *rty_e_FaultStsInit = CeDFIB_e_Init;
}

#endif

/*
 * Output and update for action system:
 *    '<S578>/Pass'
 *    '<S604>/Pass'
 */
#if Rte_SysCon_Variant_TIMR_2

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Pass(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TIMR_VAR_INIT) rty_e_FaultStsPass)
{
    /* SignalConversion generated from: '<S583>/e_FaultStsPass' incorporates:
     *  Constant: '<S586>/Constant'
     */
    *rty_e_FaultStsPass = CeDFIB_e_Pass;
}

#endif

/*
 * Output and update for action system:
 *    '<S578>/Fail'
 *    '<S604>/Fail'
 */
#if Rte_SysCon_Variant_TIMR_2

static FUNC(void, TIMR_CODE_LOCAL) TIMR_ac_Fail(P2VAR
    (TeDFIB_e_FaultDebounceStatus, AUTOMATIC, TIMR_VAR_INIT) rty_e_FaultStsFail)
{
    /* SignalConversion generated from: '<S581>/e_FaultStsFail' incorporates:
     *  Constant: '<S584>/Constant'
     */
    *rty_e_FaultStsFail = CeDFIB_e_Fail;
}

#endif

/* Function for Chart: '<S109>/RaceMode_Arbitration' */
#if Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_Paddle_Activation(const boolean *Comparison2, const boolean *
    LogicalOperator4, const boolean *LogicalOperator6)
{
    float32 tmpRead;
    float32 tmpRead_0;
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;

    /* Inport: '<Root>/VePLTR_Pct_Slope' */
    /* During 'Paddle_Activation': '<S324>:2352' */
    (void)Rte_Read_VePLTR_Pct_Slope_Value(&tmpRead);

    /* Inport: '<Root>/VePLTR_a_LongAccel_ORC' */
    (void)Rte_Read_VePLTR_a_LongAccel_ORC_Value(&tmpRead_0);

    /* Inport: '<Root>/VePLTR_b_Slope_FA' */
    (void)Rte_Read_VePLTR_b_Slope_FA_Value(&tmpRead_1);

    /* Inport: '<Root>/VePLTR_b_LongAccelFailSts_ORC' */
    (void)Rte_Read_VePLTR_b_LongAccelFailSts_ORC_Value(&tmpRead_2);

    /* Inport: '<Root>/VePLTR_b_Odometer_KmFA' */
    (void)Rte_Read_VePLTR_b_Odometer_KmFA_Value(&tmpRead_3);
    guard1 = false;
    guard2 = false;
    guard3 = false;
    switch (TIMR_ac_DW.is_Paddle_Activation)
    {
      case T_IN_No_Race_Mode_1Paddle_Press:
        /* During 'No_Race_Mode_1Paddle_Press': '<S324>:2388' */
        if (*LogicalOperator6)
        {
            /* Transition: '<S324>:3313' */
            /* Transition: '<S324>:3323' */
            /* Transition: '<S324>:3324' */
            /* Transition: '<S324>:3295' */
            /* Transition: '<S324>:3297' */
            /* Transition: '<S324>:3327' */
            /* Transition: '<S324>:3329' */
            /* Transition: '<S324>:3330' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Transition: '<S324>:2367' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */
            if ((((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE) &&
                    (TIMR_ac_DW.timer_a <= KeTIMR_Cnt_ActivationTmr))
            {
                /* Transition: '<S324>:2384' */
                /* Transition: '<S324>:2389' */
                /* Transition: '<S324>:2376' */
                if ((*LogicalOperator4) && (KeTIMR_b_OvrdLeftPdl))
                {
                    /* Transition: '<S324>:3248' */
                    /* Transition: '<S324>:3254' */
                    /* Transition: '<S324>:3270' */
                    /* Transition: '<S324>:3273' */
                    /* Transition: '<S324>:3255' */
                    /* Transition: '<S324>:3265' */
                    VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_13;

                    /* Transition: '<S324>:3268' */
                    /* Transition: '<S324>:3267' */
                    guard2 = true;
                }
                else
                {
                    /* SignalConversion generated from: '<S22>/VeDMIB_e_PadLvrSts' */
                    /* Transition: '<S324>:3249' */
                    if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeDMIB_e_P) !=
                            CeDMIR_e_Idle)
                    {
                        /* Transition: '<S324>:2369' */
                        /* Transition: '<S324>:2364' */
                        /* Transition: '<S324>:2365' */
                        TIMR_ac_DW.is_Paddle_Activation =
                            T_IN_No_Race_Mode_1Paddle_Press;

                        /* Entry Internal 'No_Race_Mode_1Paddle_Press': '<S324>:2388' */
                        /* Transition: '<S324>:2381' */
                        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                            TIMR_ac_DW.timer_a) + 1));
                    }
                    else
                    {
                        /* Transition: '<S324>:2385' */
                        TIMR_ac_DW.is_Paddle_Activation =
                            IN_No_Race_Mode_1Paddle_Release;

                        /* Entry Internal 'No_Race_Mode_1Paddle_Release': '<S324>:2374' */
                        /* Transition: '<S324>:2405' */
                        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                            TIMR_ac_DW.timer_a) + 1));
                    }

                    /* End of SignalConversion generated from: '<S22>/VeDMIB_e_PadLvrSts' */
                }
            }
            else
            {
                /* Switch: '<S317>/Switch' */
                /* Transition: '<S324>:2387' */
                /* Transition: '<S324>:2382' */
                /* Transition: '<S324>:2397' */
                /* Transition: '<S324>:2450' */
                /* Transition: '<S324>:2477' */
                VeTIMR_e_PopUpTextStateflow = VeTIMR_e_ScreenTextEntry;

                /* Transition: '<S324>:2511' */
                guard2 = true;
            }
        }
        break;

      case IN_No_Race_Mode_1Paddle_Release:
        /* During 'No_Race_Mode_1Paddle_Release': '<S324>:2374' */
        if (*LogicalOperator6)
        {
            /* Transition: '<S324>:3315' */
            /* Transition: '<S324>:3324' */
            /* Transition: '<S324>:3295' */
            /* Transition: '<S324>:3297' */
            /* Transition: '<S324>:3327' */
            /* Transition: '<S324>:3329' */
            /* Transition: '<S324>:3330' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Transition: '<S324>:2373' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */
            if ((((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE) &&
                    (TIMR_ac_DW.timer_a <= KeTIMR_Cnt_ActivationTmr))
            {
                /* Transition: '<S324>:2358' */
                /* Transition: '<S324>:2361' */
                /* Transition: '<S324>:2354' */
                if ((*LogicalOperator4) && (KeTIMR_b_OvrdLeftPdl))
                {
                    /* Transition: '<S324>:3251' */
                    /* Transition: '<S324>:3270' */
                    /* Transition: '<S324>:3273' */
                    /* Transition: '<S324>:3255' */
                    /* Transition: '<S324>:3265' */
                    VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_13;

                    /* Transition: '<S324>:3268' */
                    /* Transition: '<S324>:3267' */
                    guard3 = true;
                }
                else
                {
                    /* Transition: '<S324>:3253' */
                    if (!(*Comparison2))
                    {
                        /* Transition: '<S324>:2353' */
                        /* Transition: '<S324>:2401' */
                        /* Transition: '<S324>:2402' */
                        TIMR_ac_DW.is_Paddle_Activation =
                            IN_No_Race_Mode_1Paddle_Release;

                        /* Entry Internal 'No_Race_Mode_1Paddle_Release': '<S324>:2374' */
                        /* Transition: '<S324>:2405' */
                        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                            TIMR_ac_DW.timer_a) + 1));
                    }
                    else
                    {
                        /* Transition: '<S324>:2404' */
                        TIMR_ac_DW.is_Paddle_Activation =
                            T_IN_No_Race_Mode_2Paddle_Press;

                        /* Entry Internal 'No_Race_Mode_2Paddle_Press': '<S324>:2446' */
                        /* Transition: '<S324>:2438' */
                        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                            TIMR_ac_DW.timer_a) + 1));
                    }
                }
            }
            else
            {
                /* Switch: '<S317>/Switch' */
                /* Transition: '<S324>:2360' */
                /* Transition: '<S324>:2356' */
                /* Transition: '<S324>:2378' */
                /* Transition: '<S324>:2398' */
                /* Transition: '<S324>:2450' */
                /* Transition: '<S324>:2477' */
                VeTIMR_e_PopUpTextStateflow = VeTIMR_e_ScreenTextEntry;

                /* Transition: '<S324>:2511' */
                guard3 = true;
            }
        }
        break;

      default:
        /* During 'No_Race_Mode_2Paddle_Press': '<S324>:2446' */
        if (*LogicalOperator6)
        {
            /* Transition: '<S324>:3317' */
            /* Transition: '<S324>:3318' */
            /* Transition: '<S324>:3324' */
            /* Transition: '<S324>:3295' */
            /* Transition: '<S324>:3297' */
            /* Transition: '<S324>:3327' */
            /* Transition: '<S324>:3329' */
            /* Transition: '<S324>:3330' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Transition: '<S324>:2487' */
            if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeDMIB_e_P) ==
                    CeDMIR_e_Idle)
            {
                /* Transition: '<S324>:2489' */
                /* Transition: '<S324>:2447' */
                TIMR_ac_DW.timer_a = 0U;

                /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

                /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
                TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_LaunchControl;

                /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
                /* No_Racemode_Correctable_Conditions  */
                /* Race_Correctable_Conditions_Check */
                /* Event: '<S324>:83' */
                TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                       TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                       TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                       TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                       TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                       TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                       TIMR_ac_B.Switch,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                       TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                       TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                       tmpRead, tmpRead_0,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                       VeTIMR_b_LaunchSuspension,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                       tmpRead_1,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                       tmpRead_2,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                       tmpRead_3,
                                       TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */
                if ((*LogicalOperator4) && (KeTIMR_b_OvrdLeftPdl))
                {
                    /* Transition: '<S324>:3261' */
                    /* Transition: '<S324>:3265' */
                    VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_13;

                    /* Transition: '<S324>:3268' */
                    /* Transition: '<S324>:3267' */
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S324>:3263' */
                    if (((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE)
                    {
                        /* Outputs for Function Call SubSystem: '<S109>/RaceModeCancCheck' */
                        /* Transition: '<S324>:2484' */
                        /* Transition: '<S324>:2498' */
                        /* Event: '<S324>:177' */
                        TIMR_ac_RaceModeCancCheck_f
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.Switch,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                             TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                             VeTIMR_b_LaunchSuspension,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                             TIMR_ac_B.RaceModeSts,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                        /* End of Outputs for SubSystem: '<S109>/RaceModeCancCheck' */
                        if (((uint32)VeTIMR_e_ScreenTextCanc) == CeTIMR_e_NONE)
                        {
                            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                            /* Transition: '<S324>:2500' */
                            /* Transition: '<S324>:2502' */
                            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_On;
                            TIMR_ac_B.Acceleration_Sts = CeTIMR_e_CONFIRMED;
                            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_10;
                            TIMR_ac_DW.timerPedal = 0U;
                            TIMR_ac_DW.is_Paddle_Activation =
                                TIMR_ac_IN_NO_ACTIVE_CHILD;
                            TIMR_ac_DW.is_Launch_Arbitration =
                                TIMR_ac_IN_RaceMode_On_p;

                            /* Outputs for Function Call SubSystem: '<S109>/RaceModeCancCheck' */
                            /* Entry 'RaceMode_On': '<S324>:2543' */
                            /* Event: '<S324>:177' */
                            TIMR_ac_RaceModeCancCheck_f
                                (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                 TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                 TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                 TIMR_ac_B.Switch,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                 TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                 VeTIMR_b_LaunchSuspension,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                 TIMR_ac_B.RaceModeSts,
                                 TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                            /* End of Outputs for SubSystem: '<S109>/RaceModeCancCheck' */
                        }
                        else
                        {
                            /* Switch: '<S322>/Switch' */
                            /* Transition: '<S324>:2507' */
                            VeTIMR_e_PopUpTextStateflow =
                                VeTIMR_e_ScreenTextCanc;

                            /* Transition: '<S324>:2512' */
                            /* Transition: '<S324>:3267' */
                            guard1 = true;
                        }
                    }
                    else
                    {
                        /* Switch: '<S317>/Switch' */
                        /* Transition: '<S324>:2504' */
                        VeTIMR_e_PopUpTextStateflow = VeTIMR_e_ScreenTextEntry;

                        /* Transition: '<S324>:2508' */
                        /* Transition: '<S324>:2512' */
                        /* Transition: '<S324>:3267' */
                        guard1 = true;
                    }
                }
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
                /* Transition: '<S324>:2432' */
                /* Event: '<S324>:83' */
                TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                       TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                       TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                       TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                       TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                       TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                       TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                       TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                       TIMR_ac_B.Switch,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                       TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                       TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                       tmpRead, tmpRead_0,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                       VeTIMR_b_LaunchSuspension,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                       tmpRead_1,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                       tmpRead_2,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                       TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                       tmpRead_3,
                                       TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */
                if ((((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE) &&
                        (TIMR_ac_DW.timer_a <= KeTIMR_Cnt_ActivationTmr))
                {
                    /* Transition: '<S324>:2439' */
                    /* Transition: '<S324>:2442' */
                    /* Transition: '<S324>:2434' */
                    /* Transition: '<S324>:2492' */
                    /* Transition: '<S324>:2494' */
                    /* Transition: '<S324>:2495' */
                    TIMR_ac_DW.is_Paddle_Activation =
                        T_IN_No_Race_Mode_2Paddle_Press;

                    /* Entry Internal 'No_Race_Mode_2Paddle_Press': '<S324>:2446' */
                    /* Transition: '<S324>:2438' */
                    TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                        TIMR_ac_DW.timer_a) + 1));
                }
                else
                {
                    /* Switch: '<S317>/Switch' */
                    /* Transition: '<S324>:2440' */
                    /* Transition: '<S324>:2445' */
                    /* Transition: '<S324>:2448' */
                    /* Transition: '<S324>:2452' */
                    /* Transition: '<S324>:2477' */
                    VeTIMR_e_PopUpTextStateflow = VeTIMR_e_ScreenTextEntry;

                    /* Transition: '<S324>:2511' */
                    guard1 = true;
                }
            }
        }
        break;
    }

    if (guard3)
    {
        /* Transition: '<S324>:2777' */
        /* Transition: '<S324>:3084' */
        /* Transition: '<S324>:2513' */
        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_ABORTED;
        TIMR_ac_DW.timer_a = 0U;
        TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
        TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Cancelled_p;

        /* Entry Internal 'RaceMode_Cancelled': '<S324>:2329' */
        /* Transition: '<S324>:2331' */
        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a) + 1));
    }

    if (guard2)
    {
        /* Transition: '<S324>:2777' */
        /* Transition: '<S324>:3084' */
        /* Transition: '<S324>:2513' */
        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_ABORTED;
        TIMR_ac_DW.timer_a = 0U;
        TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
        TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Cancelled_p;

        /* Entry Internal 'RaceMode_Cancelled': '<S324>:2329' */
        /* Transition: '<S324>:2331' */
        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a) + 1));
    }

    if (guard1)
    {
        /* Transition: '<S324>:2777' */
        /* Transition: '<S324>:3084' */
        /* Transition: '<S324>:2513' */
        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_ABORTED;
        TIMR_ac_DW.timer_a = 0U;
        TIMR_ac_DW.is_Paddle_Activation = TIMR_ac_IN_NO_ACTIVE_CHILD;
        TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Cancelled_p;

        /* Entry Internal 'RaceMode_Cancelled': '<S324>:2329' */
        /* Transition: '<S324>:2331' */
        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a) + 1));
    }
}

#endif

/* Function for Chart: '<S109>/RaceMode_Arbitration' */
#if Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_Launch_Arbitration(const boolean *Comparison2, const boolean
    *LogicalOperator4, const boolean *LogicalOperator6)
{
    float32 tmpRead;
    float32 tmpRead_0;
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    boolean guard4 = false;
    boolean guard5 = false;
    boolean tmpRead_1;
    boolean tmpRead_2;
    boolean tmpRead_3;

    /* Inport: '<Root>/VePLTR_Pct_Slope' */
    /* During 'Launch_Arbitration': '<S324>:3133' */
    (void)Rte_Read_VePLTR_Pct_Slope_Value(&tmpRead);

    /* Inport: '<Root>/VePLTR_a_LongAccel_ORC' */
    (void)Rte_Read_VePLTR_a_LongAccel_ORC_Value(&tmpRead_0);

    /* Inport: '<Root>/VePLTR_b_Slope_FA' */
    (void)Rte_Read_VePLTR_b_Slope_FA_Value(&tmpRead_1);

    /* Inport: '<Root>/VePLTR_b_LongAccelFailSts_ORC' */
    (void)Rte_Read_VePLTR_b_LongAccelFailSts_ORC_Value(&tmpRead_2);

    /* Inport: '<Root>/VePLTR_b_Odometer_KmFA' */
    (void)Rte_Read_VePLTR_b_Odometer_KmFA_Value(&tmpRead_3);
    guard1 = false;
    guard2 = false;
    guard3 = false;
    guard4 = false;
    guard5 = false;
    switch (TIMR_ac_DW.is_Launch_Arbitration)
    {
      case TIMR_ac_IN_No_RaceMode_IDLE:
        /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
        /* During 'No_RaceMode_IDLE': '<S324>:2257' */
        /* Transition: '<S324>:2261' */
        /* Event: '<S324>:83' */
        TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                               TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                               TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                               TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                               TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                               TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                               TIMR_ac_B.Switch,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                               TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                               TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                               tmpRead, tmpRead_0,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                               VeTIMR_b_LaunchSuspension,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                               tmpRead_1,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                               tmpRead_2,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                               tmpRead_3,
                               TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

        /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

        /* Switch: '<S317>/Switch' */
        if (((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE)
        {
            /* Transition: '<S324>:2263' */
            /* Transition: '<S324>:2273' */
            if (!(*Comparison2))
            {
                /* Transition: '<S324>:2275' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
            else
            {
                /* Transition: '<S324>:2280' */
                /* Transition: '<S324>:2282' */
                /* Transition: '<S324>:2283' */
                /* Transition: '<S324>:2303' */
                TIMR_ac_DW.timer_a = 0U;
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_DRIVER_RQ;
                VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_9;

                /* Transition: '<S324>:2392' */
                /* Transition: '<S324>:2393' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_Paddle_Activation;
                TIMR_ac_DW.is_Paddle_Activation =
                    T_IN_No_Race_Mode_1Paddle_Press;

                /* Entry Internal 'No_Race_Mode_1Paddle_Press': '<S324>:2388' */
                /* Transition: '<S324>:2381' */
                TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_a) + 1));
            }
        }
        else
        {
            /* Transition: '<S324>:2265' */
            /* Transition: '<S324>:2267' */
            /* Transition: '<S324>:2268' */
            TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
            TIMR_ac_DW.is_Launch_Arbitration = TIMR_IN_No_RaceMode_NOT_ALLOWED;
        }
        break;

      case TIMR_IN_No_RaceMode_NOT_ALLOWED:
        /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
        /* During 'No_RaceMode_NOT_ALLOWED': '<S324>:1' */
        /* Transition: '<S324>:2286' */
        /* Event: '<S324>:83' */
        TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                               TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                               TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                               TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                               TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                               TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                               TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                               TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                               TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                               TIMR_ac_B.Switch,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                               TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                               TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                               tmpRead, tmpRead_0,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                               VeTIMR_b_LaunchSuspension,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                               tmpRead_1,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                               tmpRead_2,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                               TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                               tmpRead_3,
                               TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

        /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

        /* Switch: '<S317>/Switch' */
        if (((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE)
        {
            /* Transition: '<S324>:2288' */
            /* Transition: '<S324>:2295' */
            if (*Comparison2)
            {
                /* Transition: '<S324>:2297' */
                /* Transition: '<S324>:2300' */
                /* Transition: '<S324>:2302' */
                /* Transition: '<S324>:2303' */
                TIMR_ac_DW.timer_a = 0U;
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_DRIVER_RQ;
                VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_9;

                /* Transition: '<S324>:2392' */
                /* Transition: '<S324>:2393' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_Paddle_Activation;
                TIMR_ac_DW.is_Paddle_Activation =
                    T_IN_No_Race_Mode_1Paddle_Press;

                /* Entry Internal 'No_Race_Mode_1Paddle_Press': '<S324>:2388' */
                /* Transition: '<S324>:2381' */
                TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_a) + 1));
            }
            else
            {
                /* Transition: '<S324>:2298' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Transition: '<S324>:2290' */
            /* Transition: '<S324>:2292' */
            /* Transition: '<S324>:2293' */
            TIMR_ac_DW.is_Launch_Arbitration = TIMR_IN_No_RaceMode_NOT_ALLOWED;
        }
        break;

      case TIMR_ac_IN_Paddle_Activation:
        TIMR_ac_Paddle_Activation(Comparison2, LogicalOperator4,
            LogicalOperator6);
        break;

      case TIMR_ac_IN_RaceMode_Active_j:
        /* Outputs for Function Call SubSystem: '<S109>/RaceModeCancCheck' */
        /* During 'RaceMode_Active': '<S324>:2782' */
        /* Event: '<S324>:177' */
        TIMR_ac_RaceModeCancCheck_f(TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
            TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
            TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
            TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n, TIMR_ac_B.Switch,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
            TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L, VeTIMR_b_LaunchSuspension,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__er, TIMR_ac_B.RaceModeSts,
            TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

        /* End of Outputs for SubSystem: '<S109>/RaceModeCancCheck' */
        /* During 'Launch': '<S324>:3073' */
        if (*LogicalOperator6)
        {
            /* Transition: '<S324>:3301' */
            /* Transition: '<S324>:3303' */
            /* Transition: '<S324>:3304' */
            /* Transition: '<S324>:3290' */
            /* Transition: '<S324>:3292' */
            /* Transition: '<S324>:3293' */
            /* Transition: '<S324>:3295' */
            /* Transition: '<S324>:3297' */
            /* Transition: '<S324>:3327' */
            /* Transition: '<S324>:3329' */
            /* Transition: '<S324>:3330' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Transition: '<S324>:3018' */
            /* Transition: '<S324>:3016' */
            /* Transition: '<S324>:3019' */
            if (((uint32)VeTIMR_e_ScreenTextCanc) == CeTIMR_e_TM0)
            {
                /* Transition: '<S324>:3022' */
                /* Transition: '<S324>:3024' */
                TIMR_ac_B.Launchtimer = (uint16)((sint32)(((sint32)
                    TIMR_ac_B.Launchtimer) + 1));

                /* Outputs for Function Call SubSystem: '<S109>/RaceModeCancLaunch' */
                /* Switch: '<S323>/Switch' incorporates:
                 *  Constant: '<S431>/Calib'
                 */
                /* Event: '<S324>:816' */
                if (KeTIMR_b_OvrdRaceCOnd)
                {
                    /* Switch: '<S323>/Switch' incorporates:
                     *  Constant: '<S432>/Calib'
                     */
                    VeTIMR_b_ScreenTextCanc_Launch =
                        KeTIMR_b_ScreenText_Canc_LaunchOvrd;
                }
                else
                {
                    /* Switch: '<S323>/Switch' incorporates:
                     *  Abs: '<S323>/Abs'
                     *  Constant: '<S428>/Calib'
                     *  Constant: '<S429>/Calib'
                     *  Constant: '<S430>/Calib'
                     *  Constant: '<S433>/Calib'
                     *  Logic: '<S323>/Logical Operator'
                     *  RelationalOperator: '<S323>/Relational Operator1'
                     *  RelationalOperator: '<S323>/Relational Operator2'
                     *  RelationalOperator: '<S323>/Relational Operator4'
                     *  RelationalOperator: '<S323>/Relational Operator5'
                     */
                    VeTIMR_b_ScreenTextCanc_Launch = (((((TIMR_ac_B.Launchtimer >=
                        KeTIMR_Cnt_LaunchTimerThr) ||
                        (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct <
                         KeTIMR_Pct_WOTAccPos)) ||
                        (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k)) ||
                        (TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C !=
                         KeTIMR_i_DriveSelect)) || (fabsf
                        (TIMR_ac_B.TmpSignalConversionAtVePLTR_phi) >=
                        KeTIMR_phi_Angle_Limit));
                }

                /* End of Switch: '<S323>/Switch' */
                /* End of Outputs for SubSystem: '<S109>/RaceModeCancLaunch' */
                if (!VeTIMR_b_ScreenTextCanc_Launch)
                {
                    /* Transition: '<S324>:3026' */
                    /* Transition: '<S324>:3028' */
                    if (!(*LogicalOperator4))
                    {
                        /* Transition: '<S324>:3113' */
                        /* Transition: '<S324>:3120' */
                        if ((((sint32)
                                ((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                  KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                                ((sint32)((((uint32)TIMR_ac_B.Acceleration_Sts) ==
                                           CeTIMR_e_FULL_THROTTLE) ? 1 : 0))) !=
                            0)
                        {
                            /* Transition: '<S324>:3038' */
                            /* Transition: '<S324>:3040' */
                            TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IN_PROGRESS;
                            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_14;
                            guard2 = true;
                        }
                        else
                        {
                            /* Transition: '<S324>:3121' */
                            if ((((sint32)
                                    ((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba >=
                                      KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                                    ((sint32)((((uint32)
                                                TIMR_ac_B.Acceleration_Sts) ==
                                               CeTIMR_e_IN_PROGRESS) ? 1 : 0)))
                                    != 0)
                            {
                                /* Transition: '<S324>:3042' */
                                /* Transition: '<S324>:3127' */
                                /* Transition: '<S324>:3128' */
                                /* Transition: '<S324>:3124' */
                                guard5 = true;
                            }
                            else
                            {
                                /* Transition: '<S324>:3043' */
                                /* Transition: '<S324>:3055' */
                                guard2 = true;
                            }
                        }
                    }
                    else
                    {
                        /* Transition: '<S324>:3115' */
                        /* Transition: '<S324>:3124' */
                        guard5 = true;
                    }
                }
                else
                {
                    /* Transition: '<S324>:3117' */
                    guard5 = true;
                }
            }
            else
            {
                /* Switch: '<S322>/Switch' */
                /* Transition: '<S324>:3023' */
                VeTIMR_e_PopUpTextStateflow = VeTIMR_e_ScreenTextCanc;
                guard3 = true;
            }
        }
        break;

      case TIMR_ac_IN_RaceMode_Cancelled_p:
        /* Constant: '<S326>/Calib' */
        /* During 'RaceMode_Cancelled': '<S324>:2329' */
        if (TIMR_ac_DW.timer_a > KeTIMR_Cnt_ScreenTime)
        {
            /* Transition: '<S324>:2515' */
            /* Transition: '<S324>:2517' */
            /* Transition: '<S324>:2523' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Transition: '<S324>:3339' */
            TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Cancelled_p;

            /* Entry Internal 'RaceMode_Cancelled': '<S324>:2329' */
            /* Transition: '<S324>:2331' */
            TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a)
                + 1));
        }
        break;

      case TIMR_ac_IN_RaceMode_Completed_k:
        /* Constant: '<S326>/Calib' */
        /* During 'RaceMode_Completed': '<S324>:917' */
        if (TIMR_ac_DW.timer_a > KeTIMR_Cnt_ScreenTime)
        {
            /* Transition: '<S324>:3086' */
            /* Transition: '<S324>:3087' */
            /* Transition: '<S324>:2517' */
            /* Transition: '<S324>:2523' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Transition: '<S324>:3340' */
            TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Completed_k;

            /* Entry Internal 'RaceMode_Completed': '<S324>:917' */
            /* Transition: '<S324>:3079' */
            TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a)
                + 1));
        }
        break;

      default:
        /* Outputs for Function Call SubSystem: '<S109>/RaceModeCancCheck' */
        /* During 'RaceMode_On': '<S324>:2543' */
        /* Event: '<S324>:177' */
        TIMR_ac_RaceModeCancCheck_f(TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
            TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
            TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
            TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n, TIMR_ac_B.Switch,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
            TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L, VeTIMR_b_LaunchSuspension,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__er, TIMR_ac_B.RaceModeSts,
            TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

        /* End of Outputs for SubSystem: '<S109>/RaceModeCancCheck' */
        /* During 'Launch': '<S324>:2758' */
        if (*LogicalOperator6)
        {
            /* Transition: '<S324>:3307' */
            /* Transition: '<S324>:3309' */
            /* Transition: '<S324>:3310' */
            /* Transition: '<S324>:3292' */
            /* Transition: '<S324>:3293' */
            /* Transition: '<S324>:3295' */
            /* Transition: '<S324>:3297' */
            /* Transition: '<S324>:3327' */
            /* Transition: '<S324>:3329' */
            /* Transition: '<S324>:3330' */
            /* Transition: '<S324>:2525' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;

            /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;

            /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
            /* Event: '<S324>:83' */
            TIMR_ac_EntryCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                                   TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                   TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                   TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                   TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                   TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                   TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                   TIMR_ac_B.Switch,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                   TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                   TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                   tmpRead, tmpRead_0,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                   VeTIMR_b_LaunchSuspension,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                   tmpRead_1,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                   tmpRead_2,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                   tmpRead_3,
                                   TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

            /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */

            /* Switch: '<S317>/Switch' */
            if (((uint32)VeTIMR_e_ScreenTextEntry) != CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2527' */
                /* Transition: '<S324>:2533' */
                /* Transition: '<S324>:2534' */
                /* Transition: '<S324>:2268' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
                TIMR_ac_DW.is_Launch_Arbitration =
                    TIMR_IN_No_RaceMode_NOT_ALLOWED;
            }
            else
            {
                /* Transition: '<S324>:2536' */
                TIMR_ac_B.Acceleration_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:2538' */
                /* Transition: '<S324>:2542' */
                /* Transition: '<S324>:2277' */
                /* Transition: '<S324>:2278' */
                TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_No_RaceMode_IDLE;
            }
        }
        else
        {
            /* Transition: '<S324>:2701' */
            if (((uint32)VeTIMR_e_ScreenTextCanc) == CeTIMR_e_NONE)
            {
                /* Transition: '<S324>:2706' */
                /* Transition: '<S324>:2719' */
                TIMR_ac_DW.timerPedal = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timerPedal) + 1));
                if (TIMR_ac_DW.timerPedal >= KeTIMR_Cnt_PedalTimeThr)
                {
                    /* Transition: '<S324>:2722' */
                    /* Transition: '<S324>:2723' */
                    guard4 = true;
                }
                else
                {
                    /* Transition: '<S324>:2724' */
                    if (*LogicalOperator4)
                    {
                        /* Transition: '<S324>:3106' */
                        /* Transition: '<S324>:3109' */
                        /* Transition: '<S324>:3110' */
                        guard4 = true;
                    }
                    else
                    {
                        /* Constant: '<S328>/Calib' */
                        /* Transition: '<S324>:3107' */
                        if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B <
                                KeTIMR_P_MinBrakePressure)
                        {
                            /* Transition: '<S324>:2728' */
                            /* Transition: '<S324>:2730' */
                            TIMR_ac_B.Acceleration_Sts = CeTIMR_e_CONFIRMED;
                            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_10;

                            /* Transition: '<S324>:2745' */
                            /* Transition: '<S324>:2702' */
                        }
                        else
                        {
                            /* Constant: '<S339>/Calib' */
                            /* Transition: '<S324>:2729' */
                            if (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct <
                                    KeTIMR_Pct_WOTAccPos)
                            {
                                /* Transition: '<S324>:2731' */
                                /* Transition: '<S324>:2733' */
                                TIMR_ac_B.Acceleration_Sts =
                                    CeTIMR_e_BRAKE_PRESSED;
                                VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_11;

                                /* Transition: '<S324>:2747' */
                                /* Transition: '<S324>:2745' */
                                /* Transition: '<S324>:2702' */
                            }
                            else
                            {
                                /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                                /* Transition: '<S324>:2732' */
                                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Active;
                                TIMR_ac_B.Launchtimer = 0U;
                                TIMR_ac_B.Acceleration_Sts =
                                    CeTIMR_e_FULL_THROTTLE;
                                VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_12;

                                /* Transition: '<S324>:2762' */
                                /* Transition: '<S324>:3275' */
                                TIMR_ac_DW.is_Launch_Arbitration =
                                    TIMR_ac_IN_RaceMode_Active_j;

                                /* Outputs for Function Call SubSystem: '<S109>/RaceModeCancCheck' */
                                /* Entry 'RaceMode_Active': '<S324>:2782' */
                                /* Event: '<S324>:177' */
                                TIMR_ac_RaceModeCancCheck_f
                                    (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                     TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                     TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                     TIMR_ac_B.Switch,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                                     TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                                     VeTIMR_b_LaunchSuspension,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                                     TIMR_ac_B.RaceModeSts,
                                     TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                                /* End of Outputs for SubSystem: '<S109>/RaceModeCancCheck' */
                            }

                            /* End of Constant: '<S339>/Calib' */
                        }

                        /* End of Constant: '<S328>/Calib' */
                    }
                }
            }
            else
            {
                /* Switch: '<S322>/Switch' */
                /* Transition: '<S324>:2707' */
                /* Transition: '<S324>:2720' */
                /* Transition: '<S324>:2770' */
                VeTIMR_e_PopUpTextStateflow = VeTIMR_e_ScreenTextCanc;
                guard1 = true;
            }
        }
        break;
    }

    if (guard5)
    {
        /* Transition: '<S324>:3051' */
        VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_13;

        /* Transition: '<S324>:3129' */
        guard3 = true;
    }

    if (guard4)
    {
        /* Transition: '<S324>:2749' */
        /* Transition: '<S324>:2774' */
        VeTIMR_e_PopUpTextStateflow = CeTIMR_e_TxtMsg_13;

        /* Transition: '<S324>:2775' */
        guard1 = true;
    }

    if (guard3)
    {
        /* Transition: '<S324>:3059' */
        /* Transition: '<S324>:2513' */
        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_ABORTED;
        TIMR_ac_DW.timer_a = 0U;
        TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Cancelled_p;

        /* Entry Internal 'RaceMode_Cancelled': '<S324>:2329' */
        /* Transition: '<S324>:2331' */
        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a) + 1));
    }

    if (guard2)
    {
        /* Constant: '<S329>/Calib' */
        /* Transition: '<S324>:3095' */
        if (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C > KeTIMR_v_LaunchExitSpd)
        {
            /* Transition: '<S324>:3056' */
            /* Transition: '<S324>:3058' */
            VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;
            TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Complete;
            TIMR_ac_DW.timer_a = 0U;

            /* Transition: '<S324>:3075' */
            /* Transition: '<S324>:3281' */
            TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Completed_k;

            /* Entry Internal 'RaceMode_Completed': '<S324>:917' */
            /* Transition: '<S324>:3079' */
            TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a)
                + 1));
        }
        else
        {
            /* Transition: '<S324>:3097' */
            /* Transition: '<S324>:3099' */
            /* Transition: '<S324>:3101' */
            /* Transition: '<S324>:3102' */
        }

        /* End of Constant: '<S329>/Calib' */
    }

    if (guard1)
    {
        /* Transition: '<S324>:2779' */
        /* Transition: '<S324>:3084' */
        /* Transition: '<S324>:2513' */
        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_ABORTED;
        TIMR_ac_DW.timer_a = 0U;
        TIMR_ac_DW.is_Launch_Arbitration = TIMR_ac_IN_RaceMode_Cancelled_p;

        /* Entry Internal 'RaceMode_Cancelled': '<S324>:2329' */
        /* Transition: '<S324>:2331' */
        TIMR_ac_DW.timer_a = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_a) + 1));
    }
}

#endif

/* Function for Chart: '<S108>/RaceMode_Arbitration' */
#if !Rte_SysCon_Variant_TIMR_3

static float64 TIMR_ac_CalcPopup(float64 In)
{
    float64 Out;

    /* Graphical Function 'CalcPopup': '<S126>:426' */
    Out = 0.0;

    /* Transition: '<S126>:450' */
    if (In == 3.0)
    {
        /* Transition: '<S126>:452' */
        /* Transition: '<S126>:466' */
        Out = 53.0;
    }
    else
    {
        /* Transition: '<S126>:454' */
        if (In == 4.0)
        {
            /* Transition: '<S126>:456' */
            /* Transition: '<S126>:468' */
            Out = 49.0;
        }
        else
        {
            /* Transition: '<S126>:458' */
            if (In == 2.0)
            {
                /* Transition: '<S126>:460' */
                /* Transition: '<S126>:470' */
                Out = 41.0;
            }
            else
            {
                /* Transition: '<S126>:462' */
                if (In == 1.0)
                {
                    /* Transition: '<S126>:464' */
                    /* Transition: '<S126>:472' */
                    Out = 35.0;
                }
                else
                {
                    /* Transition: '<S126>:474' */
                    /* Transition: '<S126>:475' */
                }

                /* Transition: '<S126>:476' */
            }

            /* Transition: '<S126>:477' */
        }

        /* Transition: '<S126>:478' */
    }

    return Out;
}

#endif

static uint8 safe_cast_to_TeTIMR_e_RaceMode_(uint8 input)
{
    uint8 y;

    /* Initialize output value to default value for TeTIMR_e_RaceMode_Popup (CeTIMR_e_TM0) */
    y = 0U;
    if (((sint32)input) <= 64)
    {
        /* Set output value to input value if it is a member of TeTIMR_e_RaceMode_Popup */
        y = input;
    }

    return y;
}

/* Function for Chart: '<S108>/RaceMode_Arbitration' */
#if !Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_RaceMode_Active(const boolean *RelationalOperator4)
{
    TePLTR_e_Command_15Sts tmp;
    TeTIMR_e_RaceMode_Popup rtb_ScreenMsg_Canc_LineLock;
    boolean guard1 = false;
    boolean guard2 = false;
    boolean guard3 = false;
    boolean guard4 = false;
    boolean guard5 = false;
    boolean guard6 = false;
    boolean guard7 = false;
    boolean rtb_RelationalOperator4_nl;

    /* During 'RaceMode_Active': '<S126>:483' */
    if (*RelationalOperator4)
    {
        /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
        /* Transition: '<S126>:1796' */
        /* Transition: '<S126>:1797' */
        TIMR_ac_B.RaceModePopup = (TeTIMR_e_RaceMode_Popup)
            safe_cast_to_TeTIMR_e_RaceMode_((uint8)((sint32)TIMR_ac_CalcPopup
            ((float64)TIMR_ac_B.RaceOptions_Sts)));
        TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

        /* Outputs for Function Call SubSystem: '<S108>/ExitDeadPedalCond' */
        /* Event: '<S126>:523' */
        TIMR_ac_ExitDeadPedalCond(TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f,
            &TIMR_ac_B.ExitDeadPedalCond);

        /* End of Outputs for SubSystem: '<S108>/ExitDeadPedalCond' */
        if (TIMR_ac_B.ExitDeadPedalCond.Switch)
        {
            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            /* Transition: '<S126>:2201' */
            /* Transition: '<S126>:2202' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;

            /* Transition: '<S126>:2230' */
            /* Transition: '<S126>:1801' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1803' */
            /* Transition: '<S126>:2149' */
            /* Transition: '<S126>:1331' */
            /* Transition: '<S126>:1333' */
            /* Transition: '<S126>:1332' */
            /* Exit Internal 'RaceMode_Active': '<S126>:483' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
        }
        else
        {
            /* Transition: '<S126>:2204' */
            TIMR_ac_DW.timer_c = 1U;
            TIMR_ac_B.DeadPedalNewRace = true;

            /* Transition: '<S126>:2205' */
            /* Exit Internal 'RaceMode_Active': '<S126>:483' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_New_Race_Request;
        }
    }
    else if (VeTIMR_b_CanCompButRace)
    {
        /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
        /* Transition: '<S126>:2195' */
        /* Transition: '<S126>:2197' */
        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Complete;
        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM34;
        TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

        /* Outputs for Function Call SubSystem: '<S108>/ExitDeadPedalCond' */
        /* Event: '<S126>:523' */
        TIMR_ac_ExitDeadPedalCond(TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f,
            &TIMR_ac_B.ExitDeadPedalCond);

        /* End of Outputs for SubSystem: '<S108>/ExitDeadPedalCond' */
        TIMR_ac_DW.timer_c = 1U;
        if (!TIMR_ac_B.ExitDeadPedalCond.Switch)
        {
            /* Transition: '<S126>:2246' */
            TIMR_ac_B.DeadPedalComplete = true;

            /* Transition: '<S126>:2247' */
        }
        else
        {
            /* Transition: '<S126>:2242' */
            /* Transition: '<S126>:2244' */
        }

        /* Transition: '<S126>:1806' */
        /* Exit Internal 'RaceMode_Active': '<S126>:483' */
        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Completed;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
        /* Event: '<S126>:177' */
        TIMR_ac_RaceModeCancCheck(TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
            TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
            TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
            TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n, TIMR_ac_B.UnitDelay,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
            &TIMR_ac_B.RaceModeCancCheck);

        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
        guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        guard5 = false;
        guard6 = false;
        guard7 = false;
        switch (TIMR_ac_DW.is_RaceMode_Active)
        {
          case TIMR_ac_IN_DonutOn:
            /* During 'DonutOn': '<S126>:490' */
            /* Transition: '<S126>:1717' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancDonutCheck' */
                /* Transition: '<S126>:1729' */
                /* Transition: '<S126>:1718' */
                /* Event: '<S126>:561' */
                TIMR_ac_RaceModeCancDonutCheck
                    (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k,
                     TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                     &TIMR_ac_B.RaceModeCancDonutCheck);

                /* End of Outputs for SubSystem: '<S108>/RaceModeCancDonutCheck' */
                if (((uint32)TIMR_ac_B.RaceModeCancDonutCheck.Switch) ==
                        CeTIMR_e_TM0)
                {
                    /* Transition: '<S126>:1720' */
                    if (((uint32)TIMR_ac_B.RaceModePopup) == CeTIMR_e_TM52)
                    {
                        /* Outputs for Function Call SubSystem: '<S108>/DonutOn_PopCond' */
                        /* Transition: '<S126>:2164' */
                        /* Transition: '<S126>:2166' */
                        /* Event: '<S126>:266' */
                        TIMR_ac_DonutOn_PopCond
                            (TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                             TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct,
                             &TIMR_ac_B.DonutOn_PopCond);

                        /* End of Outputs for SubSystem: '<S108>/DonutOn_PopCond' */
                        if (TIMR_ac_B.DonutOn_PopCond.Switch)
                        {
                            /* Transition: '<S126>:2173' */
                            /* Transition: '<S126>:2175' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                        }
                        else
                        {
                            /* Transition: '<S126>:2177' */
                            /* Transition: '<S126>:2178' */
                        }

                        /* Transition: '<S126>:2180' */
                    }
                    else
                    {
                        /* Transition: '<S126>:2168' */
                        /* Transition: '<S126>:2179' */
                    }

                    if (((uint32)TIMR_ac_B.RaceModePopup) != CeTIMR_e_TM50)
                    {
                        /* Outputs for Function Call SubSystem: '<S108>/DonutOn_PopCond' */
                        /* Transition: '<S126>:1716' */
                        /* Event: '<S126>:266' */
                        TIMR_ac_DonutOn_PopCond
                            (TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                             TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct,
                             &TIMR_ac_B.DonutOn_PopCond);

                        /* End of Outputs for SubSystem: '<S108>/DonutOn_PopCond' */
                        if (TIMR_ac_B.DonutOn_PopCond.Switch)
                        {
                            /* Transition: '<S126>:1735' */
                            /* Transition: '<S126>:1727' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM50;
                        }
                        else
                        {
                            /* Transition: '<S126>:1978' */
                            /* Transition: '<S126>:1979' */
                        }

                        /* Transition: '<S126>:1744' */
                    }
                    else
                    {
                        /* Transition: '<S126>:1734' */
                        /* Transition: '<S126>:1722' */
                    }

                    /* Transition: '<S126>:1751' */
                    /* Transition: '<S126>:1719' */
                    /* Transition: '<S126>:1760' */
                    TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_DonutOn;
                }
                else
                {
                    /* Switch: '<S121>/Switch' */
                    /* Transition: '<S126>:1725' */
                    TIMR_ac_B.RaceModePopup =
                        TIMR_ac_B.RaceModeCancDonutCheck.Switch;
                    guard3 = true;
                }
            }
            else
            {
                /* Switch: '<S120>/Switch' */
                /* Transition: '<S126>:1733' */
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;

                /* Transition: '<S126>:1726' */
                guard3 = true;
            }
            break;

          case TIMR_ac_IN_Drift:
            /* During 'Drift': '<S126>:600' */
            /* Transition: '<S126>:1583' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancDonutCheck' */
                /* Transition: '<S126>:1569' */
                /* Transition: '<S126>:1586' */
                /* Event: '<S126>:561' */
                TIMR_ac_RaceModeCancDonutCheck
                    (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k,
                     TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                     &TIMR_ac_B.RaceModeCancDonutCheck);

                /* End of Outputs for SubSystem: '<S108>/RaceModeCancDonutCheck' */
                if (((uint32)TIMR_ac_B.RaceModeCancDonutCheck.Switch) ==
                        CeTIMR_e_TM0)
                {
                    /* Transition: '<S126>:1573' */
                    if (((uint32)TIMR_ac_B.RaceModePopup) == CeTIMR_e_TM55)
                    {
                        /* Outputs for Function Call SubSystem: '<S108>/DriftOn_PopCond' */
                        /* Transition: '<S126>:2183' */
                        /* Transition: '<S126>:2181' */
                        /* Event: '<S126>:300' */
                        TIMR_ac_DriftOn_PopCond
                            (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct,
                             &TIMR_ac_B.DriftOn_PopCond);

                        /* End of Outputs for SubSystem: '<S108>/DriftOn_PopCond' */
                        if (TIMR_ac_B.DriftOn_PopCond.Switch)
                        {
                            /* Transition: '<S126>:2187' */
                            /* Transition: '<S126>:2184' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                        }
                        else
                        {
                            /* Transition: '<S126>:2190' */
                            /* Transition: '<S126>:2192' */
                        }
                    }
                    else
                    {
                        /* Transition: '<S126>:2254' */
                        /* Transition: '<S126>:2255' */
                        /* Transition: '<S126>:2192' */
                    }

                    /* Transition: '<S126>:2191' */
                    if (((uint32)TIMR_ac_B.RaceModePopup) != CeTIMR_e_TM54)
                    {
                        /* Outputs for Function Call SubSystem: '<S108>/DriftOn_PopCond' */
                        /* Transition: '<S126>:1585' */
                        /* Event: '<S126>:300' */
                        TIMR_ac_DriftOn_PopCond
                            (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct,
                             &TIMR_ac_B.DriftOn_PopCond);

                        /* End of Outputs for SubSystem: '<S108>/DriftOn_PopCond' */
                        if (TIMR_ac_B.DriftOn_PopCond.Switch)
                        {
                            /* Transition: '<S126>:1566' */
                            /* Transition: '<S126>:1577' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM54;
                        }
                        else
                        {
                            /* Transition: '<S126>:1981' */
                            /* Transition: '<S126>:1982' */
                        }

                        /* Transition: '<S126>:1597' */
                    }
                    else
                    {
                        /* Transition: '<S126>:1576' */
                        /* Transition: '<S126>:1565' */
                    }

                    /* Transition: '<S126>:1595' */
                    /* Transition: '<S126>:1587' */
                    /* Transition: '<S126>:1603' */
                    TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Drift;
                }
                else
                {
                    /* Switch: '<S121>/Switch' */
                    /* Transition: '<S126>:1584' */
                    TIMR_ac_B.RaceModePopup =
                        TIMR_ac_B.RaceModeCancDonutCheck.Switch;
                    guard4 = true;
                }
            }
            else
            {
                /* Switch: '<S120>/Switch' */
                /* Transition: '<S126>:1574' */
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;

                /* Transition: '<S126>:1564' */
                guard4 = true;
            }
            break;

          case TIMR_ac_IN_Launch:
            /* During 'Launch': '<S126>:740' */
            /* Transition: '<S126>:1489' */
            /* Transition: '<S126>:1480' */
            /* Transition: '<S126>:1481' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Transition: '<S126>:1498' */
                /* Transition: '<S126>:1501' */
                TIMR_ac_B.Launchtimer_e = (uint16)((sint32)(((sint32)
                    TIMR_ac_B.Launchtimer_e) + 1));

                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancLaunch' */
                /* Chart: '<S122>/Chart' incorporates:
                 *  Abs: '<S122>/Abs'
                 *  Constant: '<S262>/Calib'
                 *  Constant: '<S263>/Calib'
                 *  Constant: '<S264>/Calib'
                 *  Constant: '<S267>/Calib'
                 *  RelationalOperator: '<S122>/Relational Operator1'
                 *  RelationalOperator: '<S122>/Relational Operator2'
                 *  RelationalOperator: '<S122>/Relational Operator4'
                 *  RelationalOperator: '<S122>/Relational Operator5'
                 */
                /* Event: '<S126>:816' */
                /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancLaunch/Chart */
                /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancLaunch/Chart */
                /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancLaunch/Chart */
                /* Transition: '<S261>:2' */
                rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM0;
                if (TIMR_ac_B.Launchtimer_e >= KeTIMR_Cnt_LaunchTimerThr)
                {
                    /* Transition: '<S261>:4' */
                    /* Transition: '<S261>:86' */
                    rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM35;
                }
                else
                {
                    /* Transition: '<S261>:6' */
                    if (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct <
                            KeTIMR_Pct_WOTAccPos)
                    {
                        /* Transition: '<S261>:8' */
                        /* Transition: '<S261>:67' */
                        rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM36;
                    }
                    else
                    {
                        /* Transition: '<S261>:10' */
                        if (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k)
                        {
                            /* Transition: '<S261>:12' */
                            /* Transition: '<S261>:65' */
                            rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM56;
                        }
                        else
                        {
                            /* Transition: '<S261>:14' */
                            if (TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C !=
                                    KeTIMR_i_DriveSelect)
                            {
                                /* Transition: '<S261>:16' */
                                /* Transition: '<S261>:63' */
                                rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM57;
                            }
                            else
                            {
                                /* Transition: '<S261>:18' */
                                if (fabsf
                                        (TIMR_ac_B.TmpSignalConversionAtVePLTR_phi)
                                    >= KeTIMR_phi_Angle_Limit)
                                {
                                    /* Transition: '<S261>:20' */
                                    /* Transition: '<S261>:61' */
                                    rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM59;
                                }
                                else
                                {
                                    /* Transition: '<S261>:112' */
                                    /* Transition: '<S261>:113' */
                                }

                                /* Transition: '<S261>:82' */
                            }

                            /* Transition: '<S261>:83' */
                        }

                        /* Transition: '<S261>:84' */
                    }

                    /* Transition: '<S261>:87' */
                }

                /* End of Chart: '<S122>/Chart' */

                /* Switch: '<S122>/Switch' incorporates:
                 *  Constant: '<S265>/Calib'
                 */
                if (KeTIMR_b_OvrdRaceCOnd)
                {
                    /* Switch: '<S122>/Switch' incorporates:
                     *  Constant: '<S266>/Calib'
                     */
                    TIMR_ac_B.Switch_a = KeTIMR_e_ScreenMsg_Canc_LaunchOvrd;
                }
                else
                {
                    /* Switch: '<S122>/Switch' */
                    TIMR_ac_B.Switch_a = rtb_ScreenMsg_Canc_LineLock;
                }

                /* End of Switch: '<S122>/Switch' */
                /* End of Outputs for SubSystem: '<S108>/RaceModeCancLaunch' */
                if (((uint32)TIMR_ac_B.Switch_a) == CeTIMR_e_TM0)
                {
                    /* Constant: '<S130>/Calib' */
                    /* Transition: '<S126>:1497' */
                    /* Transition: '<S126>:2104' */
                    if ((((sint32)((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                    KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                            ((sint32)((((uint32)TIMR_ac_B.RaceModePopup) ==
                                       CeTIMR_e_TM39) ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S126>:2105' */
                        /* Transition: '<S126>:2107' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                    }
                    else
                    {
                        /* Transition: '<S126>:2113' */
                        /* Transition: '<S126>:2112' */
                    }

                    rtb_ScreenMsg_Canc_LineLock = TIMR_ac_B.RaceModePopup;
                    if ((((sint32)((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                    KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                            ((sint32)((((uint32)rtb_ScreenMsg_Canc_LineLock) !=
                                       CeTIMR_e_TM37) ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S126>:1491' */
                        /* Transition: '<S126>:1483' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM37;
                        guard5 = true;
                    }
                    else
                    {
                        /* Transition: '<S126>:1492' */
                        if ((((sint32)
                                ((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba >=
                                  KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                                ((sint32)((((uint32)rtb_ScreenMsg_Canc_LineLock)
                                           == CeTIMR_e_TM37) ? 1 : 0))) != 0)
                        {
                            /* Transition: '<S126>:1493' */
                            /* Transition: '<S126>:1485' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM58;

                            /* Transition: '<S126>:1507' */
                            /* Transition: '<S126>:2146' */
                            /* Transition: '<S126>:2147' */
                            guard6 = true;
                        }
                        else
                        {
                            /* Transition: '<S126>:1988' */
                            /* Transition: '<S126>:1989' */
                            guard5 = true;
                        }
                    }
                }
                else
                {
                    /* Switch: '<S122>/Switch' */
                    /* Transition: '<S126>:1482' */
                    TIMR_ac_B.RaceModePopup = TIMR_ac_B.Switch_a;

                    /* Transition: '<S126>:1499' */
                    guard6 = true;
                }
            }
            else
            {
                /* Switch: '<S120>/Switch' */
                /* Transition: '<S126>:1490' */
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;

                /* Transition: '<S126>:1504' */
                /* Transition: '<S126>:1499' */
                guard6 = true;
            }
            break;

          default:
            /* During 'LineLock': '<S126>:646' */
            /* Transition: '<S126>:1407' */
            /* Transition: '<S126>:1387' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancLineLock' */
                /* RelationalOperator: '<S123>/Relational Operator4' incorporates:
                 *  Constant: '<S269>/Constant'
                 */
                /* Transition: '<S126>:1401' */
                /* Transition: '<S126>:1388' */
                /* Event: '<S126>:686' */
                rtb_RelationalOperator4_nl = (CeTIMR_e_TM63 == ((uint32)
                    TIMR_ac_B.RaceModePopup));

                /* Chart: '<S123>/Chart' */
                /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancLineLock/Chart */
                /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancLineLock/Chart */
                /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCancLineLock/Chart */
                /* Transition: '<S268>:2' */
                rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM0;

                /* RelationalOperator: '<S123>/Relational Operator5' incorporates:
                 *  SignalConversion generated from: '<S22>/VePLTR_e_Command_15Sts'
                 */
                tmp = TIMR_ac_B.TmpSignalConversionAtVePLTR_e_C;

                /* Chart: '<S123>/Chart' incorporates:
                 *  Abs: '<S123>/Abs'
                 *  Constant: '<S270>/Constant'
                 *  Constant: '<S272>/Calib'
                 *  Constant: '<S274>/Calib'
                 *  Constant: '<S276>/Calib'
                 *  Logic: '<S123>/Logical Operator1'
                 *  Logic: '<S123>/Logical Operator3'
                 *  RelationalOperator: '<S123>/Relational Operator1'
                 *  RelationalOperator: '<S123>/Relational Operator3'
                 *  RelationalOperator: '<S123>/Relational Operator5'
                 *  RelationalOperator: '<S123>/Relational Operator7'
                 */
                if ((((uint32)tmp) != CePLTR_e_Pressed) &&
                        (!rtb_RelationalOperator4_nl))
                {
                    /* Transition: '<S268>:4' */
                    /* Transition: '<S268>:86' */
                    rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM41;
                }
                else
                {
                    /* Transition: '<S268>:6' */
                    /* Transition: '<S268>:10' */
                    if (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k)
                    {
                        /* Transition: '<S268>:12' */
                        /* Transition: '<S268>:65' */
                        rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM57;
                    }
                    else
                    {
                        /* Transition: '<S268>:14' */
                        if (TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C !=
                                KeTIMR_i_DriveSelect)
                        {
                            /* Transition: '<S268>:16' */
                            /* Transition: '<S268>:63' */
                            rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM58;
                        }
                        else
                        {
                            /* Transition: '<S268>:18' */
                            if (rtb_RelationalOperator4_nl &&
                                    (TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba >
                                     KeTIMR_pbar_MinBrakePress))
                            {
                                /* Transition: '<S268>:20' */
                                /* Transition: '<S268>:61' */
                                rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM59;
                            }
                            else
                            {
                                /* Transition: '<S268>:22' */
                                if (fabsf
                                        (TIMR_ac_B.TmpSignalConversionAtVePLTR_phi)
                                    >= KeTIMR_phi_Angle_Limit)
                                {
                                    /* Transition: '<S268>:24' */
                                    /* Transition: '<S268>:59' */
                                    rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM60;
                                }
                                else
                                {
                                    /* Transition: '<S268>:109' */
                                    /* Transition: '<S268>:110' */
                                }

                                /* Transition: '<S268>:81' */
                            }

                            /* Transition: '<S268>:82' */
                        }

                        /* Transition: '<S268>:83' */
                    }

                    /* Transition: '<S268>:84' */
                    /* Transition: '<S268>:87' */
                }

                /* Switch: '<S123>/Switch' incorporates:
                 *  Constant: '<S275>/Calib'
                 */
                if (KeTIMR_b_OvrdRaceCOnd)
                {
                    /* Switch: '<S123>/Switch' incorporates:
                     *  Constant: '<S273>/Calib'
                     */
                    TIMR_ac_B.Switch_i = KeTIMR_e_ScreenMsg_Canc_LineLockOvrd;
                }
                else
                {
                    /* Switch: '<S123>/Switch' */
                    TIMR_ac_B.Switch_i = rtb_ScreenMsg_Canc_LineLock;
                }

                /* End of Switch: '<S123>/Switch' */
                /* End of Outputs for SubSystem: '<S108>/RaceModeCancLineLock' */
                if (((uint32)TIMR_ac_B.Switch_i) == CeTIMR_e_TM0)
                {
                    /* Constant: '<S130>/Calib' */
                    /* Transition: '<S126>:1397' */
                    /* Transition: '<S126>:2031' */
                    if ((((sint32)((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                    KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                            ((sint32)((((uint32)TIMR_ac_B.RaceModePopup) ==
                                       CeTIMR_e_TM43) ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S126>:2041' */
                        /* Transition: '<S126>:2042' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                    }
                    else
                    {
                        /* Transition: '<S126>:2037' */
                        /* Transition: '<S126>:2039' */
                    }

                    /*   */
                    rtb_ScreenMsg_Canc_LineLock = TIMR_ac_B.RaceModePopup;

                    /* Constant: '<S130>/Calib' incorporates:
                     *  Constant: '<S133>/Calib'
                     */
                    if (((((sint32)((TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                     KeTIMR_pbar_MinBrakePress) ? 1 : 0)) &
                            ((sint32)((TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct
                                       < KeTIMR_Pct_LineLockMinPdl) ? 1 : 0))) &
                         (((sint32)((((uint32)rtb_ScreenMsg_Canc_LineLock) !=
                                     CeTIMR_e_TM44) ? 1 : 0)) & ((sint32)
                            ((((uint32)rtb_ScreenMsg_Canc_LineLock) !=
                              CeTIMR_e_TM62) ? 1 : 0)))) != 0)
                    {
                        /* Transition: '<S126>:2033' */
                        /* Transition: '<S126>:2035' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM44;
                    }
                    else
                    {
                        /* Transition: '<S126>:2044' */
                        if ((((sint32)
                                ((TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct >=
                                  KeTIMR_Pct_LineLockMinPdl) ? 1 : 0)) &
                                ((sint32)((((uint32)rtb_ScreenMsg_Canc_LineLock)
                                           == CeTIMR_e_TM44) ? 1 : 0))) != 0)
                        {
                            /* Transition: '<S126>:2046' */
                            /* Transition: '<S126>:2048' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM62;
                        }
                        else
                        {
                            /* Transition: '<S126>:2050' */
                            /* Transition: '<S126>:2051' */
                        }

                        /* Transition: '<S126>:2052' */
                    }

                    /* Outputs for Function Call SubSystem: '<S108>/RaceModeCompLineLock' */
                    /* Chart: '<S124>/Chart' incorporates:
                     *  Constant: '<S278>/Constant'
                     *  Constant: '<S279>/Constant'
                     *  Constant: '<S280>/Calib'
                     *  Logic: '<S124>/Logical Operator3'
                     *  RelationalOperator: '<S124>/Relational Operator2'
                     *  RelationalOperator: '<S124>/Relational Operator4'
                     *  RelationalOperator: '<S124>/Relational Operator5'
                     *  SignalConversion generated from: '<S22>/VeBRKR_e_Not_OK_To_Race'
                     */
                    /* Transition: '<S126>:2023' */
                    /* Event: '<S126>:724' */
                    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCompLineLock/Chart */
                    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCompLineLock/Chart */
                    /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceModeCompLineLock/Chart */
                    /* Transition: '<S277>:2' */
                    rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM0;
                    if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N) ==
                            CeBRKR_e_Max_Revs_Exceeded)
                    {
                        /* Transition: '<S277>:4' */
                        /* Transition: '<S277>:86' */
                        rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM47;
                    }
                    else
                    {
                        /* Transition: '<S277>:6' */
                        if ((((uint32)TIMR_ac_B.RaceModePopup) == CeTIMR_e_TM63)
                            && (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct <=
                                KeTIMR_Pct_LineLockMaxOff))
                        {
                            /* Transition: '<S277>:8' */
                            /* Transition: '<S277>:67' */
                            rtb_ScreenMsg_Canc_LineLock = CeTIMR_e_TM48;
                        }
                        else
                        {
                            /* Transition: '<S277>:112' */
                            /* Transition: '<S277>:114' */
                        }

                        /* Transition: '<S277>:87' */
                    }

                    /* End of Chart: '<S124>/Chart' */

                    /* Switch: '<S124>/Switch' incorporates:
                     *  Constant: '<S281>/Calib'
                     */
                    if (KeTIMR_b_OvrdRaceCOnd)
                    {
                        /* Switch: '<S124>/Switch' incorporates:
                         *  Constant: '<S282>/Calib'
                         */
                        TIMR_ac_B.Switch_o =
                            KeTIMR_e_ScreenMsg_Comp_LineLockOvrd;
                    }
                    else
                    {
                        /* Switch: '<S124>/Switch' */
                        TIMR_ac_B.Switch_o = rtb_ScreenMsg_Canc_LineLock;
                    }

                    /* End of Switch: '<S124>/Switch' */
                    /* End of Outputs for SubSystem: '<S108>/RaceModeCompLineLock' */
                    if (((uint32)TIMR_ac_B.Switch_o) != CeTIMR_e_TM0)
                    {
                        /* Switch: '<S124>/Switch' */
                        /* Transition: '<S126>:2024' */
                        /* Transition: '<S126>:2059' */
                        TIMR_ac_B.RaceModePopup = TIMR_ac_B.Switch_o;

                        /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Complete;
                        TIMR_ac_B.DeadPedalComplete = true;

                        /* Transition: '<S126>:2152' */
                        /* Transition: '<S126>:2154' */
                        guard1 = true;
                    }
                    else
                    {
                        /* Transition: '<S126>:2150' */
                        if (TIMR_ac_DW.TimerLineLockEnable)
                        {
                            /* Transition: '<S126>:2124' */
                            /* Transition: '<S126>:2126' */
                            TIMR_ac_B.LineLockTimer = (uint16)((sint32)(((sint32)
                                TIMR_ac_B.LineLockTimer) + 1));
                            guard7 = true;
                        }
                        else
                        {
                            /* Transition: '<S126>:2135' */
                            if (((((sint32)((((uint32)TIMR_ac_B.RaceModePopup) ==
                                             CeTIMR_e_TM62) ? 1 : 0)) & ((sint32)
                                    ((((uint32)tmp) != CePLTR_e_Pressed) ? 1 : 0)))
                                 & ((sint32)((!TIMR_ac_DW.TimerLineLockEnable) ?
                                             1 : 0))) != 0)
                            {
                                /* Transition: '<S126>:2073' */
                                /* Transition: '<S126>:2074' */
                                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM48;
                                TIMR_ac_DW.TimerLineLockEnable = true;

                                /* Transition: '<S126>:2140' */
                                guard7 = true;
                            }
                            else
                            {
                                /* Transition: '<S126>:2142' */
                                /* Transition: '<S126>:2157' */
                                /* Transition: '<S126>:2075' */
                                TIMR_ac_DW.is_RaceMode_Active =
                                    TIMR_ac_IN_LineLock;
                            }
                        }
                    }
                }
                else
                {
                    /* Switch: '<S123>/Switch' */
                    /* Transition: '<S126>:1402' */
                    TIMR_ac_B.RaceModePopup = TIMR_ac_B.Switch_i;
                    guard2 = true;
                }
            }
            else
            {
                /* Switch: '<S120>/Switch' */
                /* Transition: '<S126>:1411' */
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;

                /* Transition: '<S126>:1403' */
                guard2 = true;
            }
            break;
        }

        if (guard7)
        {
            /* Outputs for Function Call SubSystem: '<S108>/LineLock_Comp_Check2' */
            /* Switch: '<S118>/Switch' incorporates:
             *  Constant: '<S205>/Calib'
             */
            /* Transition: '<S126>:2071' */
            /* Event: '<S126>:2158' */
            if (KeTIMR_b_OvrdRaceCOnd)
            {
                /* Switch: '<S118>/Switch' incorporates:
                 *  Constant: '<S206>/Calib'
                 */
                TIMR_ac_B.Switch_p = KeTIMR_b_LineLock_Comp2Ovrd;
            }
            else
            {
                /* Switch: '<S118>/Switch' incorporates:
                 *  Abs: '<S118>/Abs'
                 *  Abs: '<S118>/Abs1'
                 *  Constant: '<S204>/Calib'
                 *  Constant: '<S207>/Calib'
                 *  Logic: '<S118>/Logical Operator1'
                 *  Logic: '<S118>/Logical Operator2'
                 *  RelationalOperator: '<S118>/Relational Operator1'
                 *  RelationalOperator: '<S118>/Relational Operator2'
                 *  RelationalOperator: '<S118>/Relational Operator3'
                 *  Sum: '<S118>/Sum'
                 *  Sum: '<S118>/Sum1'
                 */
                TIMR_ac_B.Switch_p = (((fabsf
                                        (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b
                    - TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L) <
                                        KeTIMR_v_RaceEndSpd) && (fabsf
                                        (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f
                    - TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R) <
                                        KeTIMR_v_RaceEndSpd)) ||
                                      (TIMR_ac_B.LineLockTimer >=
                                       KeTIMR_Cnt_LineLockTimerThr));
            }

            /* End of Switch: '<S118>/Switch' */
            /* End of Outputs for SubSystem: '<S108>/LineLock_Comp_Check2' */
            if (TIMR_ac_B.Switch_p)
            {
                /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                /* Transition: '<S126>:2132' */
                /* Transition: '<S126>:2134' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Complete;

                /* Transition: '<S126>:2155' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S126>:2143' */
                /* Transition: '<S126>:2075' */
                TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_LineLock;
            }
        }

        if (guard6)
        {
            /* Transition: '<S126>:1512' */
            TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;

            /* Transition: '<S126>:1516' */
            /* Transition: '<S126>:1737' */
            /* Transition: '<S126>:1757' */
            /* Transition: '<S126>:1596' */
            /* Transition: '<S126>:1575' */
            /* Transition: '<S126>:1606' */
            /* Transition: '<S126>:1607' */
            /* Transition: '<S126>:1795' */
            /* Transition: '<S126>:2230' */
            /* Transition: '<S126>:1801' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1803' */
            /* Transition: '<S126>:2149' */
            /* Transition: '<S126>:1331' */
            /* Transition: '<S126>:1333' */
            /* Transition: '<S126>:1332' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
        }

        if (guard5)
        {
            /* Constant: '<S134>/Calib' */
            if (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C >
                    KeTIMR_v_LaunchExitSpd)
            {
                /* Transition: '<S126>:1524' */
                /* Transition: '<S126>:1522' */
                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM34;
                TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

                /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Complete;

                /* Transition: '<S126>:1520' */
                /* Transition: '<S126>:1410' */
                /* Transition: '<S126>:1406' */
                /* Transition: '<S126>:2155' */
                /* Transition: '<S126>:1392' */
                /* Transition: '<S126>:1802' */
                TIMR_ac_DW.timer_c = 1U;

                /* Transition: '<S126>:1805' */
                /* Transition: '<S126>:2247' */
                /* Transition: '<S126>:1806' */
                TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Completed;
            }
            else
            {
                /* Transition: '<S126>:1517' */
                TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Launch;
            }

            /* End of Constant: '<S134>/Calib' */
        }

        if (guard4)
        {
            /* Transition: '<S126>:1579' */
            TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;

            /* Transition: '<S126>:2214' */
            /* Transition: '<S126>:1561' */
            /* Transition: '<S126>:1578' */
            /* Transition: '<S126>:1596' */
            /* Transition: '<S126>:1575' */
            /* Transition: '<S126>:1606' */
            /* Transition: '<S126>:1607' */
            /* Transition: '<S126>:1795' */
            /* Transition: '<S126>:2230' */
            /* Transition: '<S126>:1801' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1803' */
            /* Transition: '<S126>:2149' */
            /* Transition: '<S126>:1331' */
            /* Transition: '<S126>:1333' */
            /* Transition: '<S126>:1332' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
        }

        if (guard3)
        {
            /* Outputs for Function Call SubSystem: '<S108>/ExitDeadPedalCond' */
            /* Transition: '<S126>:1721' */
            /* Event: '<S126>:523' */
            TIMR_ac_ExitDeadPedalCond(TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L,
                TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R,
                TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b,
                TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f,
                &TIMR_ac_B.ExitDeadPedalCond);

            /* End of Outputs for SubSystem: '<S108>/ExitDeadPedalCond' */
            TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;

            /* Transition: '<S126>:2215' */
            /* Transition: '<S126>:1739' */
            /* Transition: '<S126>:1736' */
            /* Transition: '<S126>:1757' */
            /* Transition: '<S126>:1596' */
            /* Transition: '<S126>:1575' */
            /* Transition: '<S126>:1606' */
            /* Transition: '<S126>:1607' */
            /* Transition: '<S126>:1795' */
            /* Transition: '<S126>:2230' */
            /* Transition: '<S126>:1801' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1803' */
            /* Transition: '<S126>:2149' */
            /* Transition: '<S126>:1331' */
            /* Transition: '<S126>:1333' */
            /* Transition: '<S126>:1332' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
        }

        if (guard2)
        {
            /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
            /* Transition: '<S126>:1390' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
            TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

            /* Transition: '<S126>:1430' */
            /* Transition: '<S126>:1427' */
            /* Transition: '<S126>:1426' */
            /* Transition: '<S126>:1381' */
            /* Transition: '<S126>:1607' */
            /* Transition: '<S126>:1795' */
            /* Transition: '<S126>:2230' */
            /* Transition: '<S126>:1801' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1803' */
            /* Transition: '<S126>:2149' */
            /* Transition: '<S126>:1331' */
            /* Transition: '<S126>:1333' */
            /* Transition: '<S126>:1332' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
        }

        if (guard1)
        {
            /* Transition: '<S126>:1392' */
            /* Transition: '<S126>:1802' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1805' */
            /* Transition: '<S126>:2247' */
            /* Transition: '<S126>:1806' */
            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_NO_ACTIVE_CHILD;
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Completed;
        }
    }
}

#endif

/* Function for Chart: '<S108>/RaceMode_Arbitration' */
#if !Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_Launch(void)
{
    boolean guard1 = false;
    boolean tmpRead;

    /* Switch: '<S120>/Switch' incorporates:
     *  Constant: '<S129>/Calib'
     *  Constant: '<S130>/Calib'
     *  Constant: '<S131>/Calib'
     *  Inport: '<Root>/VeBRKR_b_VehicleStandStillSts'
     *  Switch: '<S125>/Switch'
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     *  VariantMerge generated from: '<S61>/RaceOptionsSts'
     */
    /* During 'Launch': '<S126>:355' */
    /* Transition: '<S126>:1259' */
    guard1 = false;
    if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
    {
        (void)Rte_Read_VeBRKR_b_VehicleStandStillSts_Value(&tmpRead);

        /* Outputs for Function Call SubSystem: '<S108>/RaceModePreCondCheck' */
        /* Transition: '<S126>:1256' */
        /* Transition: '<S126>:1258' */
        /* Event: '<S126>:212' */
        TIMR_ac_RaceModePreCondCheck(TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k,
            tmpRead, TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
            TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
            &TIMR_ac_B.RaceModePreCondCheck);

        /* End of Outputs for SubSystem: '<S108>/RaceModePreCondCheck' */
        if (((uint32)TIMR_ac_B.RaceModePreCondCheck.Switch) == CeTIMR_e_TM0)
        {
            /* Transition: '<S126>:1253' */
            /* Transition: '<S126>:1279' */
            TIMR_ac_DW.timerPedal_p = (uint16)((sint32)(((sint32)
                TIMR_ac_DW.timerPedal_p) + 1));
            if (TIMR_ac_DW.timerPedal_p >= KeTIMR_Cnt_PedalTimeThr)
            {
                /* Transition: '<S126>:1273' */
                /* Transition: '<S126>:1274' */
                /* Transition: '<S126>:1264' */
                /* Transition: '<S126>:1311' */
                /* Transition: '<S126>:1312' */
                /* Transition: '<S126>:1325' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM35;
                TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                TIMR_ac_DW.timer_c = 1U;

                /* Transition: '<S126>:1333' */
                guard1 = true;
            }
            else
            {
                /* Transition: '<S126>:1271' */
                if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B <
                        KeTIMR_P_MinBrakePressure)
                {
                    /* Transition: '<S126>:1278' */
                    /* Transition: '<S126>:1269' */
                    TIMR_ac_B.RaceModePopup = CeTIMR_e_TM33;

                    /* Transition: '<S126>:1268' */
                    /* Transition: '<S126>:1255' */
                    TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_Launch;
                }
                else
                {
                    /* Transition: '<S126>:1272' */
                    if (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct <
                            KeTIMR_Pct_WOTAccPos)
                    {
                        /* Transition: '<S126>:1275' */
                        /* Transition: '<S126>:1277' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM45;

                        /* Transition: '<S126>:1262' */
                        /* Transition: '<S126>:1268' */
                        /* Transition: '<S126>:1255' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_Launch;
                    }
                    else
                    {
                        /* Transition: '<S126>:1276' */
                        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Active;
                        TIMR_ac_DW.Race_Correctable_Conditions_Che = true;

                        /* Race_Correctable_Conditions_Check */
                        TIMR_ac_B.Launchtimer_e = 0U;
                        if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                KeTIMR_pbar_MinBrakePress)
                        {
                            /* Transition: '<S126>:1260' */
                            /* Transition: '<S126>:1266' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                        }
                        else
                        {
                            /* Transition: '<S126>:1265' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM39;

                            /* Transition: '<S126>:1261' */
                        }

                        /* Transition: '<S126>:1263' */
                        /* Transition: '<S126>:1222' */
                        /* Transition: '<S126>:1226' */
                        /* Transition: '<S126>:1252' */
                        /* Transition: '<S126>:1197' */
                        /* Transition: '<S126>:1168' */
                        /* Transition: '<S126>:586' */
                        switch (TIMR_ac_B.RaceOptions_Sts)
                        {
                          case CeTIMR_e_Donut:
                            /* Transition: '<S126>:591' */
                            TIMR_ac_DW.is_RaceMode_On =
                                TIMR_ac_IN_NO_ACTIVE_CHILD;
                            TIMR_ac_DW.is_c43_TIMR_ac =
                                TIMR_ac_IN_RaceMode_Active;

                            /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                            /* Entry 'RaceMode_Active': '<S126>:483' */
                            /* Event: '<S126>:177' */
                            TIMR_ac_RaceModeCancCheck
                                (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                 TIMR_ac_B.UnitDelay,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                 &TIMR_ac_B.RaceModeCancCheck);

                            /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_DonutOn;
                            break;

                          case CeTIMR_e_Drift:
                            /* Transition: '<S126>:642' */
                            /* Transition: '<S126>:643' */
                            TIMR_ac_DW.is_RaceMode_On =
                                TIMR_ac_IN_NO_ACTIVE_CHILD;
                            TIMR_ac_DW.is_c43_TIMR_ac =
                                TIMR_ac_IN_RaceMode_Active;

                            /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                            /* Entry 'RaceMode_Active': '<S126>:483' */
                            /* Event: '<S126>:177' */
                            TIMR_ac_RaceModeCancCheck
                                (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                 TIMR_ac_B.UnitDelay,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                 &TIMR_ac_B.RaceModeCancCheck);

                            /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Drift;
                            break;

                          case CeTIMR_e_LineLock:
                            /* Transition: '<S126>:645' */
                            /* Transition: '<S126>:647' */
                            /* Transition: '<S126>:2118' */
                            TIMR_ac_B.LineLockTimer = 1U;
                            TIMR_ac_DW.TimerLineLockEnable = false;
                            TIMR_ac_B.DeadPedalComplete = false;

                            /* Transition: '<S126>:2119' */
                            TIMR_ac_DW.is_RaceMode_On =
                                TIMR_ac_IN_NO_ACTIVE_CHILD;
                            TIMR_ac_DW.is_c43_TIMR_ac =
                                TIMR_ac_IN_RaceMode_Active;

                            /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                            /* Entry 'RaceMode_Active': '<S126>:483' */
                            /* Event: '<S126>:177' */
                            TIMR_ac_RaceModeCancCheck
                                (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                 TIMR_ac_B.UnitDelay,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                 &TIMR_ac_B.RaceModeCancCheck);

                            /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_LineLock;
                            break;

                          default:
                            /* Transition: '<S126>:787' */
                            /* Transition: '<S126>:2238' */
                            TIMR_ac_B.DeadPedalComplete = false;

                            /* Transition: '<S126>:2239' */
                            TIMR_ac_DW.is_RaceMode_On =
                                TIMR_ac_IN_NO_ACTIVE_CHILD;
                            TIMR_ac_DW.is_c43_TIMR_ac =
                                TIMR_ac_IN_RaceMode_Active;

                            /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                            /* Entry 'RaceMode_Active': '<S126>:483' */
                            /* Event: '<S126>:177' */
                            TIMR_ac_RaceModeCancCheck
                                (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                 TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                 TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                 TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                 TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                 TIMR_ac_B.UnitDelay,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                 TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                 TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                 &TIMR_ac_B.RaceModeCancCheck);

                            /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                            TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Launch;
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            /* Transition: '<S126>:1254' */
            TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModePreCondCheck.Switch;

            /* Transition: '<S126>:1267' */
            /* Transition: '<S126>:1308' */
            /* Transition: '<S126>:1309' */
            TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_PrepStatus;
        }
    }
    else
    {
        /* Transition: '<S126>:1257' */
        /* Transition: '<S126>:1270' */
        /* Transition: '<S126>:1316' */
        /* Transition: '<S126>:1122' */
        /* Transition: '<S126>:1330' */
        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
        TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;
        TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
        TIMR_ac_DW.timer_c = 1U;
        guard1 = true;
    }

    if (guard1)
    {
        /* Transition: '<S126>:1332' */
        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
    }

    /* End of Switch: '<S120>/Switch' */
}

#endif

/* Function for Chart: '<S108>/RaceMode_Arbitration' */
#if !Rte_SysCon_Variant_TIMR_3

static void TIMR_ac_RaceMode_On(const boolean *RelationalOperator4)
{
    TeTIMR_e_RaceOptions tmp;
    boolean guard1 = false;
    boolean tmpRead;

    /* During 'RaceMode_On': '<S126>:154' */
    if (((VeTIMR_b_CancRacexTerrain) || (*RelationalOperator4)) ||
            (VeTIMR_b_CanCompButRace))
    {
        /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
        /* Transition: '<S126>:1327' */
        /* Transition: '<S126>:1334' */
        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;

        /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
        TIMR_ac_B.RaceModePopup = (TeTIMR_e_RaceMode_Popup)
            safe_cast_to_TeTIMR_e_RaceMode_((uint8)((sint32)TIMR_ac_CalcPopup
            ((float64)TIMR_ac_B.RaceOptions_Sts)));
        TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
        TIMR_ac_DW.timer_c = 1U;

        /* Transition: '<S126>:1331' */
        /* Transition: '<S126>:1333' */
        /* Transition: '<S126>:1332' */
        /* Exit Internal 'RaceMode_On': '<S126>:154' */
        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
    }
    else
    {
        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
        /* Event: '<S126>:177' */
        TIMR_ac_RaceModeCancCheck(TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
            TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
            TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
            TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
            TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
            TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
            TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
            TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n, TIMR_ac_B.UnitDelay,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
            TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
            TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
            &TIMR_ac_B.RaceModeCancCheck);

        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */

        /* Inport: '<Root>/VeBRKR_b_VehicleStandStillSts' */
        (void)Rte_Read_VeBRKR_b_VehicleStandStillSts_Value(&tmpRead);
        guard1 = false;
        switch (TIMR_ac_DW.is_RaceMode_On)
        {
          case TIMR_ac_IN_Donut:
            /* Switch: '<S120>/Switch' incorporates:
             *  Constant: '<S129>/Calib'
             *  VariantMerge generated from: '<S61>/RaceModeSts'
             *  VariantMerge generated from: '<S61>/RaceOptionsSts'
             */
            /* During 'Donut': '<S126>:217' */
            /* Transition: '<S126>:1142' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Transition: '<S126>:1144' */
                if (!TIMR_ac_DW.Race_Correctable_Conditions_Che)
                {
                    /* Transition: '<S126>:1148' */
                    TIMR_ac_DW.Race_Correctable_Conditions_Che = true;

                    /* Transition: '<S126>:1150' */
                }
                else
                {
                    /* Transition: '<S126>:1146' */
                    /* Transition: '<S126>:1151' */
                }

                if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B >=
                        KeTIMR_P_MinBrakePressure)
                {
                    /* Transition: '<S126>:1153' */
                    /* Transition: '<S126>:1155' */
                    TIMR_ac_B.RaceModePopup = CeTIMR_e_TM51;

                    /* Transition: '<S126>:1156' */
                    TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_Donut;
                }
                else
                {
                    /* Transition: '<S126>:1158' */
                    TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Active;

                    /* Outputs for Function Call SubSystem: '<S108>/DonutOn_PopCond' */
                    /* Event: '<S126>:266' */
                    TIMR_ac_DonutOn_PopCond
                        (TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                         TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct,
                         &TIMR_ac_B.DonutOn_PopCond);

                    /* End of Outputs for SubSystem: '<S108>/DonutOn_PopCond' */
                    TIMR_ac_DW.Race_Correctable_Conditions_Che = true;

                    /* Race_Correctable_Conditions_Check */
                    if (TIMR_ac_B.DonutOn_PopCond.Switch)
                    {
                        /* Transition: '<S126>:1160' */
                        /* Transition: '<S126>:1164' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                    }
                    else
                    {
                        /* Transition: '<S126>:1162' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM52;

                        /* Transition: '<S126>:1165' */
                    }

                    /* Transition: '<S126>:1167' */
                    /* Transition: '<S126>:1168' */
                    /* Transition: '<S126>:586' */
                    switch (TIMR_ac_B.RaceOptions_Sts)
                    {
                      case CeTIMR_e_Donut:
                        /* Transition: '<S126>:591' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_DonutOn;
                        break;

                      case CeTIMR_e_Drift:
                        /* Transition: '<S126>:642' */
                        /* Transition: '<S126>:643' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Drift;
                        break;

                      case CeTIMR_e_LineLock:
                        /* Transition: '<S126>:645' */
                        /* Transition: '<S126>:647' */
                        /* Transition: '<S126>:2118' */
                        TIMR_ac_B.LineLockTimer = 1U;
                        TIMR_ac_DW.TimerLineLockEnable = false;
                        TIMR_ac_B.DeadPedalComplete = false;

                        /* Transition: '<S126>:2119' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_LineLock;
                        break;

                      default:
                        /* Transition: '<S126>:787' */
                        /* Transition: '<S126>:2238' */
                        TIMR_ac_B.DeadPedalComplete = false;

                        /* Transition: '<S126>:2239' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Launch;
                        break;
                    }
                }
            }
            else
            {
                /* Transition: '<S126>:1202' */
                /* Transition: '<S126>:1211' */
                /* Transition: '<S126>:2234' */
                /* Transition: '<S126>:1224' */
                /* Transition: '<S126>:1314' */
                /* Transition: '<S126>:1316' */
                /* Transition: '<S126>:1122' */
                /* Transition: '<S126>:1330' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;
                TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                TIMR_ac_DW.timer_c = 1U;

                /* Transition: '<S126>:1332' */
                TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
            }
            break;

          case TIMR_ac_IN_Drift:
            /* Switch: '<S120>/Switch' incorporates:
             *  Constant: '<S129>/Calib'
             *  VariantMerge generated from: '<S61>/RaceModeSts'
             *  VariantMerge generated from: '<S61>/RaceOptionsSts'
             */
            /* During 'Drift': '<S126>:283' */
            /* Transition: '<S126>:1174' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Transition: '<S126>:1180' */
                if (TIMR_ac_DW.RacePreCond)
                {
                    /* Transition: '<S126>:1170' */
                    TIMR_ac_DW.RacePreCond = false;

                    /* Transition: '<S126>:1177' */
                }
                else
                {
                    /* Transition: '<S126>:1172' */
                    /* Transition: '<S126>:1183' */
                }

                if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B >=
                        KeTIMR_P_MinBrakePressure)
                {
                    /* Transition: '<S126>:1186' */
                    /* Transition: '<S126>:1189' */
                    TIMR_ac_B.RaceModePopup = CeTIMR_e_TM51;

                    /* Transition: '<S126>:1184' */
                    TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_Drift;
                }
                else
                {
                    /* Transition: '<S126>:1175' */
                    TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Active;

                    /* Outputs for Function Call SubSystem: '<S108>/DriftOn_PopCond' */
                    /* Event: '<S126>:300' */
                    TIMR_ac_DriftOn_PopCond
                        (TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct,
                         &TIMR_ac_B.DriftOn_PopCond);

                    /* End of Outputs for SubSystem: '<S108>/DriftOn_PopCond' */
                    TIMR_ac_DW.Race_Correctable_Conditions_Che = true;

                    /* Race_Correctable_Conditions_Check */
                    if (TIMR_ac_B.DriftOn_PopCond.Switch)
                    {
                        /* Transition: '<S126>:1191' */
                        /* Transition: '<S126>:1182' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                    }
                    else
                    {
                        /* Transition: '<S126>:1193' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM55;

                        /* Transition: '<S126>:1194' */
                    }

                    /* Transition: '<S126>:1195' */
                    /* Transition: '<S126>:1197' */
                    /* Transition: '<S126>:1168' */
                    /* Transition: '<S126>:586' */
                    switch (TIMR_ac_B.RaceOptions_Sts)
                    {
                      case CeTIMR_e_Donut:
                        /* Transition: '<S126>:591' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_DonutOn;
                        break;

                      case CeTIMR_e_Drift:
                        /* Transition: '<S126>:642' */
                        /* Transition: '<S126>:643' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Drift;
                        break;

                      case CeTIMR_e_LineLock:
                        /* Transition: '<S126>:645' */
                        /* Transition: '<S126>:647' */
                        /* Transition: '<S126>:2118' */
                        TIMR_ac_B.LineLockTimer = 1U;
                        TIMR_ac_DW.TimerLineLockEnable = false;
                        TIMR_ac_B.DeadPedalComplete = false;

                        /* Transition: '<S126>:2119' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_LineLock;
                        break;

                      default:
                        /* Transition: '<S126>:787' */
                        /* Transition: '<S126>:2238' */
                        TIMR_ac_B.DeadPedalComplete = false;

                        /* Transition: '<S126>:2239' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Active;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_Active': '<S126>:483' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Launch;
                        break;
                    }
                }
            }
            else
            {
                /* Transition: '<S126>:1199' */
                /* Transition: '<S126>:1201' */
                /* Transition: '<S126>:1211' */
                /* Transition: '<S126>:2234' */
                /* Transition: '<S126>:1224' */
                /* Transition: '<S126>:1314' */
                /* Transition: '<S126>:1316' */
                /* Transition: '<S126>:1122' */
                /* Transition: '<S126>:1330' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;
                TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                TIMR_ac_DW.timer_c = 1U;

                /* Transition: '<S126>:1332' */
                TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
            }
            break;

          case TIMR_ac_IN_Launch:
            TIMR_ac_Launch();
            break;

          case TIMR_ac_IN_LineLockOn:
            /* Switch: '<S120>/Switch' incorporates:
             *  Constant: '<S129>/Calib'
             *  Constant: '<S130>/Calib'
             *  SignalConversion generated from: '<S22>/VePLTR_e_Command_15Sts'
             *  Switch: '<S125>/Switch'
             *  VariantMerge generated from: '<S61>/RaceModeSts'
             *  VariantMerge generated from: '<S61>/RaceOptionsSts'
             */
            /* During 'LineLockOn': '<S126>:316' */
            /* Transition: '<S126>:1216' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) == CeTIMR_e_TM0)
            {
                /* Outputs for Function Call SubSystem: '<S108>/RaceModePreCondCheck' */
                /* Transition: '<S126>:1219' */
                /* Transition: '<S126>:1214' */
                /* Event: '<S126>:212' */
                TIMR_ac_RaceModePreCondCheck
                    (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k, tmpRead,
                     TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                     TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B,
                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                     &TIMR_ac_B.RaceModePreCondCheck);

                /* End of Outputs for SubSystem: '<S108>/RaceModePreCondCheck' */
                if (((uint32)TIMR_ac_B.RaceModePreCondCheck.Switch) ==
                        CeTIMR_e_TM0)
                {
                    /* Transition: '<S126>:1215' */
                    if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B <
                            KeTIMR_P_MinBrakePressure)
                    {
                        /* Transition: '<S126>:1217' */
                        /* Transition: '<S126>:1207' */
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM33;

                        /* Transition: '<S126>:1229' */
                        /* Transition: '<S126>:1213' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_LineLockOn;
                    }
                    else
                    {
                        /* Transition: '<S126>:1206' */
                        if (((uint32)TIMR_ac_B.TmpSignalConversionAtVePLTR_e_C)
                                != CePLTR_e_Pressed)
                        {
                            /* Transition: '<S126>:1208' */
                            /* Transition: '<S126>:1209' */
                            TIMR_ac_B.RaceModePopup = CeTIMR_e_TM42;

                            /* Transition: '<S126>:1221' */
                            /* Transition: '<S126>:1229' */
                            /* Transition: '<S126>:1213' */
                            TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_LineLockOn;
                        }
                        else
                        {
                            /* Transition: '<S126>:1210' */
                            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Active;
                            TIMR_ac_DW.Race_Correctable_Conditions_Che = true;

                            /* Race_Correctable_Conditions_Check */
                            if (TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba <
                                    KeTIMR_pbar_MinBrakePress)
                            {
                                /* Transition: '<S126>:1231' */
                                /* Transition: '<S126>:1233' */
                                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;
                            }
                            else
                            {
                                /* Transition: '<S126>:1232' */
                                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM43;

                                /* Transition: '<S126>:1230' */
                            }

                            /* Transition: '<S126>:1220' */
                            /* Transition: '<S126>:1226' */
                            /* Transition: '<S126>:1252' */
                            /* Transition: '<S126>:1197' */
                            /* Transition: '<S126>:1168' */
                            /* Transition: '<S126>:586' */
                            switch (TIMR_ac_B.RaceOptions_Sts)
                            {
                              case CeTIMR_e_Donut:
                                /* Transition: '<S126>:591' */
                                TIMR_ac_DW.is_RaceMode_On =
                                    TIMR_ac_IN_NO_ACTIVE_CHILD;
                                TIMR_ac_DW.is_c43_TIMR_ac =
                                    TIMR_ac_IN_RaceMode_Active;

                                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                                /* Entry 'RaceMode_Active': '<S126>:483' */
                                /* Event: '<S126>:177' */
                                TIMR_ac_RaceModeCancCheck
                                    (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                     TIMR_ac_B.UnitDelay,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                     &TIMR_ac_B.RaceModeCancCheck);

                                /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                                TIMR_ac_DW.is_RaceMode_Active =
                                    TIMR_ac_IN_DonutOn;
                                break;

                              case CeTIMR_e_Drift:
                                /* Transition: '<S126>:642' */
                                /* Transition: '<S126>:643' */
                                TIMR_ac_DW.is_RaceMode_On =
                                    TIMR_ac_IN_NO_ACTIVE_CHILD;
                                TIMR_ac_DW.is_c43_TIMR_ac =
                                    TIMR_ac_IN_RaceMode_Active;

                                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                                /* Entry 'RaceMode_Active': '<S126>:483' */
                                /* Event: '<S126>:177' */
                                TIMR_ac_RaceModeCancCheck
                                    (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                     TIMR_ac_B.UnitDelay,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                     &TIMR_ac_B.RaceModeCancCheck);

                                /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                                TIMR_ac_DW.is_RaceMode_Active = TIMR_ac_IN_Drift;
                                break;

                              case CeTIMR_e_LineLock:
                                /* Transition: '<S126>:645' */
                                /* Transition: '<S126>:647' */
                                /* Transition: '<S126>:2118' */
                                TIMR_ac_B.LineLockTimer = 1U;
                                TIMR_ac_DW.TimerLineLockEnable = false;
                                TIMR_ac_B.DeadPedalComplete = false;

                                /* Transition: '<S126>:2119' */
                                TIMR_ac_DW.is_RaceMode_On =
                                    TIMR_ac_IN_NO_ACTIVE_CHILD;
                                TIMR_ac_DW.is_c43_TIMR_ac =
                                    TIMR_ac_IN_RaceMode_Active;

                                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                                /* Entry 'RaceMode_Active': '<S126>:483' */
                                /* Event: '<S126>:177' */
                                TIMR_ac_RaceModeCancCheck
                                    (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                     TIMR_ac_B.UnitDelay,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                     &TIMR_ac_B.RaceModeCancCheck);

                                /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                                TIMR_ac_DW.is_RaceMode_Active =
                                    TIMR_ac_IN_LineLock;
                                break;

                              default:
                                /* Transition: '<S126>:787' */
                                /* Transition: '<S126>:2238' */
                                TIMR_ac_B.DeadPedalComplete = false;

                                /* Transition: '<S126>:2239' */
                                TIMR_ac_DW.is_RaceMode_On =
                                    TIMR_ac_IN_NO_ACTIVE_CHILD;
                                TIMR_ac_DW.is_c43_TIMR_ac =
                                    TIMR_ac_IN_RaceMode_Active;

                                /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                                /* Entry 'RaceMode_Active': '<S126>:483' */
                                /* Event: '<S126>:177' */
                                TIMR_ac_RaceModeCancCheck
                                    (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                                     TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                                     TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                                     TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                                     TIMR_ac_B.UnitDelay,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                                     TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                                     &TIMR_ac_B.RaceModeCancCheck);

                                /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                                TIMR_ac_DW.is_RaceMode_Active =
                                    TIMR_ac_IN_Launch;
                                break;
                            }
                        }
                    }
                }
                else
                {
                    /* Transition: '<S126>:1218' */
                    TIMR_ac_B.RaceModePopup =
                        TIMR_ac_B.RaceModePreCondCheck.Switch;

                    /* Transition: '<S126>:1225' */
                    /* Transition: '<S126>:1306' */
                    /* Transition: '<S126>:1308' */
                    /* Transition: '<S126>:1309' */
                    TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_PrepStatus;
                }
            }
            else
            {
                /* Transition: '<S126>:1212' */
                /* Transition: '<S126>:1227' */
                /* Transition: '<S126>:1228' */
                /* Transition: '<S126>:1224' */
                /* Transition: '<S126>:1314' */
                /* Transition: '<S126>:1316' */
                /* Transition: '<S126>:1122' */
                /* Transition: '<S126>:1330' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;
                TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                TIMR_ac_DW.timer_c = 1U;

                /* Transition: '<S126>:1332' */
                TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
            }
            break;

          default:
            /* During 'PrepStatus': '<S126>:183' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) != CeTIMR_e_TM0)
            {
                /* Update for VariantMerge generated from: '<S61>/RaceModeSts' */
                /* Transition: '<S126>:1121' */
                /* Transition: '<S126>:1122' */
                /* Transition: '<S126>:1330' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;

                /* Switch: '<S120>/Switch' */
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;
                TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                TIMR_ac_DW.timer_c = 1U;

                /* Transition: '<S126>:1332' */
                TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_NO_ACTIVE_CHILD;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
            }
            else
            {
                /* Outputs for Function Call SubSystem: '<S108>/RaceModePreCondCheck' */
                /* Transition: '<S126>:1125' */
                /* Event: '<S126>:212' */
                TIMR_ac_RaceModePreCondCheck
                    (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k, tmpRead,
                     TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                     TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B,
                     TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                     &TIMR_ac_B.RaceModePreCondCheck);

                /* End of Outputs for SubSystem: '<S108>/RaceModePreCondCheck' */
                if (((uint32)TIMR_ac_B.RaceModePreCondCheck.Switch) ==
                        CeTIMR_e_TM0)
                {
                    /* Switch: '<S125>/Switch' */
                    /* Transition: '<S126>:1127' */
                    /* Transition: '<S126>:1135' */
                    TIMR_ac_B.RaceModePopup =
                        TIMR_ac_B.RaceModePreCondCheck.Switch;

                    /* Update for VariantMerge generated from: '<S61>/RaceOptionsSts' */
                    /* Transition: '<S126>:1137' */
                    /* Transition: '<S126>:1139' */
                    /* Transition: '<S126>:1140' */
                    tmp = TIMR_ac_B.RaceOptions_Sts;
                    if (((uint32)tmp) == CeTIMR_e_Donut)
                    {
                        /* Transition: '<S126>:216' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_Donut;
                    }
                    else
                    {
                        /* Transition: '<S126>:299' */
                        if (((uint32)tmp) == CeTIMR_e_Drift)
                        {
                            /* Transition: '<S126>:286' */
                            TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_Drift;
                        }
                        else
                        {
                            /* Transition: '<S126>:303' */
                            if (((uint32)tmp) == CeTIMR_e_LineLock)
                            {
                                /* Transition: '<S126>:307' */
                                TIMR_ac_DW.is_RaceMode_On =
                                    TIMR_ac_IN_LineLockOn;
                            }
                            else
                            {
                                /* Transition: '<S126>:393' */
                                if (((uint32)tmp) == CeTIMR_e_LaunchControl)
                                {
                                    /* Transition: '<S126>:391' */
                                    /* Transition: '<S126>:1992' */
                                    TIMR_ac_DW.timerPedal_p = 0U;

                                    /* Transition: '<S126>:1993' */
                                    TIMR_ac_DW.is_RaceMode_On =
                                        TIMR_ac_IN_Launch;
                                }
                                else
                                {
                                    guard1 = true;
                                }
                            }
                        }
                    }
                }
                else
                {
                    guard1 = true;
                }
            }
            break;
        }

        if (guard1)
        {
            /* Switch: '<S125>/Switch' */
            /* Transition: '<S126>:1129' */
            /* Transition: '<S126>:1132' */
            /* Transition: '<S126>:1133' */
            TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModePreCondCheck.Switch;
            TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_PrepStatus;
        }
    }
}

#endif

/* Model step function for TID1 */
FUNC(void, TIMR_CODE) TIMR_MedTED(void) /* Explicit Task: MedTED */
{
    uint32 tmpRead;
    TePRXR_e_AxleLockerPresence tmpRead_0;
    TePRXR_e_TerrainSelectorModes tmpRead_1;

#if !Rte_SysCon_Variant_TIMR_3

    uint8 tmpRead_2;

#endif

#if Rte_SysCon_Variant_TIMR_2

    uint8 tmpRead_3;

#endif

#if Rte_SysCon_Variant_TIMR_2

    uint8 tmpRead_4;

#endif

#if Rte_SysCon_Variant_TIMR_3

    float32 tmpRead_5;

#endif

#if Rte_SysCon_Variant_TIMR_3

    float32 tmpRead_6;

#endif

#if Rte_SysCon_Variant_TIMR_3

    uint8 tmpRead_7;

#endif

#if Rte_SysCon_Variant_TIMR_3

    uint8 tmpRead_8;

#endif

    uint8 rtb_Switch2_jd[15];
    uint8 rtb_Selector1;
    uint8 rtb_Switch1_io;
    uint8 rtb_Switch_nz;
    boolean rtb_AND_h;
    boolean rtb_Comparison1_o;
    boolean rtb_Comparison5;
    boolean rtb_Comparison5_g;
    boolean rtb_Comparison6_l;
    boolean rtb_Logical1;
    boolean rtb_Logical11;
    boolean rtb_Logical3;
    boolean rtb_Logical6;
    boolean rtb_RelationalOperator3_f;
    boolean rtb_TmpSignalConversionAtCustom;
    boolean rtb_TmpSignalConversionAtRacePr;
    boolean rtb_TmpSignalConversionAtRace_d;

#if Rte_SysCon_Variant_TIMR_2

    boolean rtb_LogicalOperator2_hw;

#endif

    float32 rtb_Switch1;
    float32 rtb_Switch1_j;
    float32 rtb_Switch_n;
    uint16 rtb_Switch1_dq;
    uint16 rtb_Switch1_e;
    uint16 rtb_Switch1_g1;
    boolean rtb_AND_pf;
    boolean rtb_AND_pi;
    boolean rtb_OR1_b;

#if Rte_SysCon_Variant_TIMR_2

    uint8 rtb_TmpSignalConversionAtVeDMAB;

#endif

#if Rte_SysCon_Variant_TIMR_2

    uint8 rtb_TmpSignalConversionAtVeDM_j;

#endif

#if Rte_SysCon_Variant_TIMR_2

    uint8 rtb_TmpSignalConversionAtVeD_b4;

#endif

#if Rte_SysCon_Variant_TIMR_2

    uint8 rtb_TmpSignalConversionAtVeDM_b;

#endif

    TeTIMR_e_TrrnMdBtnSts rtb_TmpSignalConversionAtLaunch;
    TeTIMR_e_TrrnTgglSwtSts rtb_TmpSignalConversionAtVeTIMI;
    boolean rtb_AND_en;
    boolean rtb_AND_gk1;
    boolean rtb_AND_gv;
    boolean rtb_AND_i;
    boolean rtb_LogicalOperator9;
    boolean rtb_OR1_ll;
    boolean rtb_RelationalOperator2_bk;
    boolean rtb_TmpSignalConversionAtTrack_;

#if !Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_LaunchIntensity rtb_TmpSignalConversionAtVeT_ot;

#endif

    TeTIMR_e_TrrnMdBtnSts rtb_Switch6;
    TeTMDR_e_TrrnMd rtb_Switch12;
    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtRadio_;
    TeTMDR_e_TrrnMd rtb_TmpSignalConversionAtVeTMDR;

#if !Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_RaceOptions rtb_Switch4_c;

#endif

#if Rte_SysCon_Variant_TIMR_2

    TePMDR_e_PowerMode rtb_TmpSignalConversionAtVePMDR;

#endif

#if !Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_RaceMode_Popup rtb_ScreenMsg_Entry;

#endif

#if Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_TextDisplay rtb_Switch5;

#endif

#if Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_TextDisplay rtb_Switch6_n;

#endif

    sint32 i;
    TeTIMR_e_RacePrep RacePrepMode;
    TeTIMR_e_RaceTypeSts rtb_TmpSignalConversionAtRace_0;
    TeTIMR_e_TrrnMdBtnSts DataTypeConversion_a;
    TeTIMR_e_TrrnMdBtnSts rtb_AND_bv_tmp;
    TeTIMR_e_TrrnMdBtnSts rtb_Comparison5_tmp;
    TeTIMR_e_TrrnMdReq rtb_Comparison6_k_tmp;

#if Rte_SysCon_Variant_TIMR_3

    TeDMIR_e_PadLvrSts tmp;

#endif

#if Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_LnchCtrlSts rtb_Comparison1_o_tmp;

#endif

#if !Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_RaceModeSts rtb_LogicalOperator9_tmp;

#endif

#if !Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_RaceOptions rtb_TmpSignalConversionAtTrac_0;

#endif

#if !Rte_SysCon_Variant_TIMR_3

    TeTIMR_e_RaceModeSts rtb_OR1_nm_tmp;

#endif

#if !Rte_SysCon_Variant_TIMR_3

    TePLTR_e_HAS_TelltaleSts VeTIMR_b_TM8_tmp;

#endif

#if !Rte_SysCon_Variant_TIMR_3

    TeBRKR_e_Not_OK_To_Race VeTIMR_b_TM15_tmp;

#endif

    boolean guard1 = false;

#if Rte_SysCon_Variant_TIMR_3

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_TIMR_3

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_TIMR_3

    boolean guard4 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TIMR_MedTED'
     */
    /* SignalConversion generated from: '<S22>/VePMDR_e_PowerModeRaw' incorporates:
     *  SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus'
     *  SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf'
     *  SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_InvData_BCM'
     *  SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_LostCommBCM'
     */
#if Rte_SysCon_Variant_TIMR_2

    /* SignalConversion generated from: '<S22>/VePMDR_e_PowerModeRaw' incorporates:
     *  Inport: '<Root>/VePMDR_e_PowerModeRaw'
     */
    (void)Rte_Read_VePMDR_e_PowerModeRaw_Value(&rtb_TmpSignalConversionAtVePMDR);

    /* SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_LostCommBCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LostCommBCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LostCommBCM_Value
        (&rtb_TmpSignalConversionAtVeDMAB);

    /* SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_InvData_BCM' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_InvData_BCM'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_InvData_BCM_Value
        (&rtb_TmpSignalConversionAtVeDM_j);

    /* SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBus_Value
        (&rtb_TmpSignalConversionAtVeD_b4);

    /* SignalConversion generated from: '<S22>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_HiSpdFD_CAN3CommBusPerf_Value
        (&rtb_TmpSignalConversionAtVeDM_b);

#endif

    /* End of SignalConversion generated from: '<S22>/VePMDR_e_PowerModeRaw' */

    /* SignalConversion generated from: '<S22>/VeTIMI_e_TrrnToggleMdSwitch' incorporates:
     *  Merge: '<Root>/VeTIMR_e_TrrnToggleMdSwitch_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeTIMI =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_TrrnToggleMdSwitch_write_IRV();

    /* SignalConversion generated from: '<S22>/VeHMIR_b_DriveReady' incorporates:
     *  Inport: '<Root>/VeHMIR_b_DriveReady'
     */
    (void)Rte_Read_VeHMIR_b_DriveReady_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D);

    /* SignalConversion generated from: '<S22>/VeTMDR_e_TrrnMd' incorporates:
     *  Inport: '<Root>/VeTMDR_e_TrrnMd'
     */
    (void)Rte_Read_VeTMDR_e_TrrnMd_Value(&rtb_TmpSignalConversionAtVeTMDR);

    /* SignalConversion generated from: '<S22>/LaunchControl_HardBtn' incorporates:
     *  Merge: '<Root>/VeTIMR_e_LaunchModeSwitch_IRV_Merge'
     */
    rtb_TmpSignalConversionAtLaunch =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_LaunchModeSwitch_write_IRV();

    /* SignalConversion generated from: '<S22>/VePLTR_e_Command_15Sts' */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VePLTR_e_Command_15Sts' incorporates:
     *  Inport: '<Root>/VePLTR_e_Command_15Sts'
     */
    (void)Rte_Read_VePLTR_e_Command_15Sts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_e_C);

#endif

    /* End of SignalConversion generated from: '<S22>/VePLTR_e_Command_15Sts' */

    /* SignalConversion generated from: '<S22>/VePLTR_milel_Odometer_Miles' incorporates:
     *  Inport: '<Root>/VePLTR_milel_Odometer_Miles'
     */
    (void)Rte_Read_VePLTR_milel_Odometer_Miles_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_mil);

    /* SignalConversion generated from: '<S22>/VePLTR_b_SpeedUnit' */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VePLTR_b_SpeedUnit' incorporates:
     *  Inport: '<Root>/VePLTR_b_SpeedUnit'
     */
    (void)Rte_Read_VePLTR_b_SpeedUnit_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_S);

#endif

    /* End of SignalConversion generated from: '<S22>/VePLTR_b_SpeedUnit' */

    /* SignalConversion generated from: '<S22>/VeHPMR_b_PropSysActv' incorporates:
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P);

    /* SignalConversion generated from: '<S22>/VeCSVR_v_CanSigVehSpd' incorporates:
     *  Inport: '<Root>/VeCSVR_v_CanSigVehSpd'
     */
    (void)Rte_Read_VeCSVR_v_CanSigVehSpd_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C);

    /* SignalConversion generated from: '<S22>/VeDMDR_e_TurtleMdSts' incorporates:
     *  Inport: '<Root>/VeDMDR_e_TurtleMdSts'
     */
    (void)Rte_Read_VeDMDR_e_TurtleMdSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T);

    /* SignalConversion generated from: '<S22>/VeBPCR_Pct_HV_BatPackSOC' incorporates:
     *  Inport: '<Root>/VeBPCR_Pct_HV_BatPackSOC'
     */
    (void)Rte_Read_VeBPCR_Pct_HV_BatPackSOC_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct);

    /* SignalConversion generated from: '<S22>/VePLTR_e_ACCSystemSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_ACCSystemSts'
     */
    (void)Rte_Read_VePLTR_e_ACCSystemSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__de);

    /* SignalConversion generated from: '<S22>/VePLTR_e_HAS_TelltaleSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_HAS_TelltaleSts'
     */
    (void)Rte_Read_VePLTR_e_HAS_TelltaleSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H);

    /* SignalConversion generated from: '<S22>/VePLTR_e_AEBSystemSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_AEBSystemSts'
     */
    (void)Rte_Read_VePLTR_e_AEBSystemSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d);

    /* SignalConversion generated from: '<S22>/VePLTR_b_DrvDrAjar' incorporates:
     *  Inport: '<Root>/VePLTR_b_DrvDrAjar'
     */
    (void)Rte_Read_VePLTR_b_DrvDrAjar_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D);

    /* SignalConversion generated from: '<S22>/VePLTR_b_PsngrDoorSts' incorporates:
     *  SignalConversion generated from: '<S22>/VePLTR_b_RHRDoorSts'
     *  SignalConversion generated from: '<S22>/VePLTR_b_RHatchSts'
     */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VePLTR_b_PsngrDoorSts' incorporates:
     *  Inport: '<Root>/VePLTR_b_PsngrDoorSts'
     */
    (void)Rte_Read_VePLTR_b_PsngrDoorSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P);

    /* SignalConversion generated from: '<S22>/VePLTR_b_RHRDoorSts' incorporates:
     *  Inport: '<Root>/VePLTR_b_RHRDoorSts'
     */
    (void)Rte_Read_VePLTR_b_RHRDoorSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R);

    /* SignalConversion generated from: '<S22>/VePLTR_b_RHatchSts' incorporates:
     *  Inport: '<Root>/VePLTR_b_RHatchSts'
     */
    (void)Rte_Read_VePLTR_b_RHatchSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c);

#endif

    /* End of SignalConversion generated from: '<S22>/VePLTR_b_PsngrDoorSts' */

    /* SignalConversion generated from: '<S22>/VeBPCR_T_HV_BatModTempAvg' incorporates:
     *  Inport: '<Root>/VeBPCR_T_HV_BatModTempAvg'
     */
    (void)Rte_Read_VeBPCR_T_HV_BatModTempAvg_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H);

    /* SignalConversion generated from: '<S22>/VeINVR_T_MtrA_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_Temp_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M);

    /* SignalConversion generated from: '<S22>/VeINVR_T_MtrB_Temp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_Temp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_Temp_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p);

    /* SignalConversion generated from: '<S22>/VeWTAR_b_ESCTrqEnabled' */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VeWTAR_b_ESCTrqEnabled' incorporates:
     *  Inport: '<Root>/VeWTAR_b_ESCTrqEnabled'
     */
    (void)Rte_Read_VeWTAR_b_ESCTrqEnabled_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E);

#endif

    /* End of SignalConversion generated from: '<S22>/VeWTAR_b_ESCTrqEnabled' */

    /* SignalConversion generated from: '<S22>/VeBRKR_b_BrkPdlFlt' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPdlFlt'
     */
    (void)Rte_Read_VeBRKR_b_BrkPdlFlt_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B);

    /* SignalConversion generated from: '<S22>/VeBRKR_e_Not_OK_To_Race' */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VeBRKR_e_Not_OK_To_Race' incorporates:
     *  Inport: '<Root>/VeBRKR_e_Not_OK_To_Race'
     */
    (void)Rte_Read_VeBRKR_e_Not_OK_To_Race_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N);

#endif

    /* End of SignalConversion generated from: '<S22>/VeBRKR_e_Not_OK_To_Race' */

    /* SignalConversion generated from: '<S22>/VePLTR_b_ParkBrakeSts' incorporates:
     *  Inport: '<Root>/VePLTR_b_ParkBrakeSts'
     */
    (void)Rte_Read_VePLTR_b_ParkBrakeSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_k);

    /* SignalConversion generated from: '<S22>/VePLTR_phi_LwsAngle' incorporates:
     *  Inport: '<Root>/VePLTR_phi_LwsAngle'
     */
    (void)Rte_Read_VePLTR_phi_LwsAngle_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_phi);

    /* SignalConversion generated from: '<S22>/VeTRGR_e_CurrentGrForDisp' incorporates:
     *  Inport: '<Root>/VeTRGR_e_CurrentGrForDisp'
     */
    (void)Rte_Read_VeTRGR_e_CurrentGrForDisp_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C);

    /* SignalConversion generated from: '<S22>/VeBRKR_P_BrkPrss' incorporates:
     *  Inport: '<Root>/VeBRKR_P_BrkPrss'
     */
    (void)Rte_Read_VeBRKR_P_BrkPrss_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_P_B);

    /* SignalConversion generated from: '<S22>/VeCSVR_b_WhlSpdLHF_FA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdLHF_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHF_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W);

    /* SignalConversion generated from: '<S22>/VeCSVR_b_WhlSpdLHR_FA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdLHR_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdLHR_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n);

    /* SignalConversion generated from: '<S22>/VeCSVR_b_WhlSpdRHF_FA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdRHF_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHF_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o);

    /* SignalConversion generated from: '<S22>/VeCSVR_b_WhlSpdRHR_FA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_WhlSpdRHR_FA'
     */
    (void)Rte_Read_VeCSVR_b_WhlSpdRHR_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f);

    /* SignalConversion generated from: '<S22>/VeAPSR_Pct_AccelPedalEffPosition' incorporates:
     *  Inport: '<Root>/VeAPSR_Pct_AccelPedalEffPosition'
     */
    (void)Rte_Read_VeAPSR_Pct_AccelPedalEffPosition_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeAPSR_Pct);

    /* SignalConversion generated from: '<S22>/VeBRKR_pbar_BrakePedalPressure' incorporates:
     *  Inport: '<Root>/VeBRKR_pbar_BrakePedalPressure'
     */
    (void)Rte_Read_VeBRKR_pbar_BrakePedalPressure_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_pba);

    /* SignalConversion generated from: '<S22>/VeCSVR_v_LeftFrontWheel' incorporates:
     *  Inport: '<Root>/VeCSVR_v_LeftFrontWheel'
     */
    (void)Rte_Read_VeCSVR_v_LeftFrontWheel_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L);

    /* SignalConversion generated from: '<S22>/VeCSVR_v_RightFrontWheel' incorporates:
     *  Inport: '<Root>/VeCSVR_v_RightFrontWheel'
     */
    (void)Rte_Read_VeCSVR_v_RightFrontWheel_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R);

    /* SignalConversion generated from: '<S22>/VeCSVR_v_LeftRearWheel' incorporates:
     *  Inport: '<Root>/VeCSVR_v_LeftRearWheel'
     */
    (void)Rte_Read_VeCSVR_v_LeftRearWheel_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b);

    /* SignalConversion generated from: '<S22>/VeCSVR_v_RightRearWheel' incorporates:
     *  Inport: '<Root>/VeCSVR_v_RightRearWheel'
     */
    (void)Rte_Read_VeCSVR_v_RightRearWheel_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f);

    /* SignalConversion generated from: '<S22>/VeBRKR_b_ESCFailSts' incorporates:
     *  SignalConversion generated from: '<S22>/VePLTR_b_LHRDoorSts'
     *  SignalConversion generated from: '<S22>/VePLTR_b_RHatchSts_FA'
     */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VeBRKR_b_ESCFailSts' incorporates:
     *  Inport: '<Root>/VeBRKR_b_ESCFailSts'
     */
    (void)Rte_Read_VeBRKR_b_ESCFailSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E);

    /* SignalConversion generated from: '<S22>/VePLTR_b_LHRDoorSts' incorporates:
     *  Inport: '<Root>/VePLTR_b_LHRDoorSts'
     */
    (void)Rte_Read_VePLTR_b_LHRDoorSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L);

    /* SignalConversion generated from: '<S22>/VePLTR_b_RHatchSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_RHatchSts_FA'
     */
    (void)Rte_Read_VePLTR_b_RHatchSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n);

#endif

    /* End of SignalConversion generated from: '<S22>/VeBRKR_b_ESCFailSts' */

    /* SignalConversion generated from: '<S22>/VePLTR_b_DrvDrAjar_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_DrvDrAjarFA'
     */
    (void)Rte_Read_VePLTR_b_DrvDrAjarFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p);

    /* SignalConversion generated from: '<S22>/VePLTR_b_RHRDoorSts_FA' incorporates:
     *  SignalConversion generated from: '<S22>/VePLTR_b_LHRDoorSts_FA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_PsngrDoorSts_FA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_SpeedUnit_FA'
     */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VePLTR_b_RHRDoorSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_RHRDoorSts_FA'
     */
    (void)Rte_Read_VePLTR_b_RHRDoorSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i);

    /* SignalConversion generated from: '<S22>/VePLTR_b_LHRDoorSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_LHRDoorSts_FA'
     */
    (void)Rte_Read_VePLTR_b_LHRDoorSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__nc);

    /* SignalConversion generated from: '<S22>/VePLTR_b_PsngrDoorSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_PsngrDoorSts_FA'
     */
    (void)Rte_Read_VePLTR_b_PsngrDoorSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e);

    /* SignalConversion generated from: '<S22>/VePLTR_b_SpeedUnit_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_SpeedUnit_FA'
     */
    (void)Rte_Read_VePLTR_b_SpeedUnit_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__nz);

#endif

    /* End of SignalConversion generated from: '<S22>/VePLTR_b_RHRDoorSts_FA' */

    /* SignalConversion generated from: '<S22>/VeCSVR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_CanSigVehSpd_FA'
     */
    (void)Rte_Read_VeCSVR_b_CanSigVehSpd_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V);

    /* SignalConversion generated from: '<S22>/VeBPCR_b_HV_BatPackSOC_FA' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatPackSOC_FA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatPackSOC_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ACCSystemSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_ACCSystemSts_FA'
     */
    (void)Rte_Read_VePLTR_b_ACCSystemSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A);

    /* SignalConversion generated from: '<S22>/VePLTR_b_HAS_TelltaleSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_HAS_TelltaleSts_FA'
     */
    (void)Rte_Read_VePLTR_b_HAS_TelltaleSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H);

    /* SignalConversion generated from: '<S22>/VePLTR_b_AEBSystemSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_AEBSystemSts_FA'
     */
    (void)Rte_Read_VePLTR_b_AEBSystemSts_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__pb);

    /* SignalConversion generated from: '<S22>/VeBPCR_b_HV_BatModTempAvgFA' incorporates:
     *  Inport: '<Root>/VeBPCR_b_HV_BatModTempAvgFA'
     */
    (void)Rte_Read_VeBPCR_b_HV_BatModTempAvgFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g);

    /* SignalConversion generated from: '<S22>/VeINVR_b_MtrB_TempFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrB_TempFA'
     */
    (void)Rte_Read_VeINVR_b_MtrB_TempFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M);

    /* SignalConversion generated from: '<S22>/VeINVR_b_MtrA_TempFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_TempFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_TempFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h);

    /* SignalConversion generated from: '<S22>/VeBRKR_b_Not_OK_To_RaceFA' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMR_e_LaunchIntensity'
     */
#if !Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VeBRKR_b_Not_OK_To_RaceFA' incorporates:
     *  Inport: '<Root>/VeBRKR_b_Not_OK_To_RaceFA'
     */
    (void)Rte_Read_VeBRKR_b_Not_OK_To_RaceFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N);

    /* SignalConversion generated from: '<S22>/VeTIMR_e_LaunchIntensity' incorporates:
     *  Merge: '<Root>/VeTIMR_e_LaunchIntensity_IRV_Merge'
     */
    rtb_TmpSignalConversionAtVeT_ot =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_LaunchIntensity_write_IRV();

#endif

    /* End of SignalConversion generated from: '<S22>/VeBRKR_b_Not_OK_To_RaceFA' */

    /* SignalConversion generated from: '<S22>/Custom_Mode_Proxi' incorporates:
     *  Inport: '<Root>/VePRXR_b_Proxi_Custom_Mode'
     */
    (void)Rte_Read_VePRXR_b_Proxi_Custom_Mode_Value
        (&rtb_TmpSignalConversionAtCustom);

    /* SignalConversion generated from: '<S22>/Track_Mode_Proxi' incorporates:
     *  Inport: '<Root>/VePRXR_b_Proxi_Track_Mode'
     */
    (void)Rte_Read_VePRXR_b_Proxi_Track_Mode_Value
        (&rtb_TmpSignalConversionAtTrack_);

    /* SignalConversion generated from: '<S22>/VeSRAR_b_Inhibit_AWD_TerrainMode' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Inhibit_AWD_TerrainMode'
     */
    (void)Rte_Read_VeSRAR_b_Inhibit_AWD_TerrainMode_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I);

    /* SignalConversion generated from: '<S22>/VeINVR_T_MtrA_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrA_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrA_InvrtrTemp_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k);

    /* SignalConversion generated from: '<S22>/VeINVR_T_MtrB_InvrtrTemp' incorporates:
     *  Inport: '<Root>/VeINVR_T_MtrB_InvrtrTemp'
     */
    (void)Rte_Read_VeINVR_T_MtrB_InvrtrTemp_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b);

    /* SignalConversion generated from: '<S22>/VeINVR_b_MtrA_InvrtrTempFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrA_InvrtrTempFA'
     */
    (void)Rte_Read_VeINVR_b_MtrA_InvrtrTempFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l);

    /* SignalConversion generated from: '<S22>/VeINVR_b_MtrB_InvrtrTempFA' incorporates:
     *  Inport: '<Root>/VeINVR_b_MtrB_InvrtrTempFA'
     */
    (void)Rte_Read_VeINVR_b_MtrB_InvrtrTempFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n);

    /* SignalConversion generated from: '<S22>/VeDMIB_e_PadLvrSts' incorporates:
     *  SignalConversion generated from: '<S22>/VeBRKR_b_FunctionSts'
     *  SignalConversion generated from: '<S22>/VePLTR_a_LatAccel_ORC'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SrvFA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_Srv'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_Stat_FA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysFailFA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysFail'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysSysFA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysSys'
     *  SignalConversion generated from: '<S22>/VePLTR_b_LatAccelFailSts_ORC'
     *  SignalConversion generated from: '<S22>/VePLTR_b_LwsAngleFA'
     *  SignalConversion generated from: '<S22>/VePLTR_b_SeatBeltSts_FA'
     *  SignalConversion generated from: '<S22>/VePLTR_e_ASCM_Stat'
     *  SignalConversion generated from: '<S22>/VePLTR_e_SeatBeltSts'
     *  SignalConversion generated from: '<S22>/VePRXR_b_LaunchControl'
     *  SignalConversion generated from: '<S22>/VeSRAR_b_Popup_Msg1'
     *  SignalConversion generated from: '<S22>/VeTIMR_e_MaxBoostReq'
     */
#if Rte_SysCon_Variant_TIMR_3

    /* SignalConversion generated from: '<S22>/VeDMIB_e_PadLvrSts' incorporates:
     *  Inport: '<Root>/VeDMIB_e_PadLvrSts'
     */
    (void)Rte_Read_VeDMIB_e_PadLvrSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeDMIB_e_P);

    /* SignalConversion generated from: '<S22>/VeTIMR_e_MaxBoostReq' incorporates:
     *  Merge: '<Root>/Poke_VeTIMR_e_MaxBoostReq_IRV_Merge'
     */
    TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_MaxBoostReq_write_IRV();

    /* SignalConversion generated from: '<S22>/VePRXR_b_LaunchControl' incorporates:
     *  Inport: '<Root>/VePRXR_b_LaunchControl'
     */
    (void)Rte_Read_VePRXR_b_LaunchControl_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePRXR_b_L);

    /* SignalConversion generated from: '<S22>/VePLTR_e_SeatBeltSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_DriverSeatBeltSts'
     */
    (void)Rte_Read_VePLTR_e_DriverSeatBeltSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S);

    /* SignalConversion generated from: '<S22>/VeBRKR_b_FunctionSts' incorporates:
     *  Inport: '<Root>/VeBRKR_b_FunctionSts'
     */
    (void)Rte_Read_VeBRKR_b_FunctionSts_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F);

    /* SignalConversion generated from: '<S22>/VePLTR_a_LatAccel_ORC' incorporates:
     *  Inport: '<Root>/VePLTR_a_LatAccel_ORC'
     */
    (void)Rte_Read_VePLTR_a_LatAccel_ORC_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L);

    /* SignalConversion generated from: '<S22>/VePLTR_e_ASCM_Stat' incorporates:
     *  Inport: '<Root>/VePLTR_e_ASCM_Stat'
     */
    (void)Rte_Read_VePLTR_e_ASCM_Stat_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A);

    /* SignalConversion generated from: '<S22>/VePLTR_b_SeatBeltSts_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_DriverSeatBeltStsFA'
     */
    (void)Rte_Read_VePLTR_b_DriverSeatBeltStsFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m);

    /* SignalConversion generated from: '<S22>/VePLTR_b_LwsAngleFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_LwsAngleFA'
     */
    (void)Rte_Read_VePLTR_b_LwsAngleFA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a);

    /* SignalConversion generated from: '<S22>/VePLTR_b_LatAccelFailSts_ORC' incorporates:
     *  Inport: '<Root>/VePLTR_b_LatAccelFailSts_ORC'
     */
    (void)Rte_Read_VePLTR_b_LatAccelFailSts_ORC_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__al);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_Stat_FA' incorporates:
     *  Inport: '<Root>/VePLTR_b_ASCM_Stat_FA'
     */
    (void)Rte_Read_VePLTR_b_ASCM_Stat_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysFail' incorporates:
     *  Inport: '<Root>/VePLTR_b_ASCM_SysFail'
     */
    (void)Rte_Read_VePLTR_b_ASCM_SysFail_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_Srv' incorporates:
     *  Inport: '<Root>/VePLTR_b_ASCM_Srv'
     */
    (void)Rte_Read_VePLTR_b_ASCM_Srv_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__af);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysSys' incorporates:
     *  Inport: '<Root>/VePLTR_b_ADS_SrvSys'
     */
    (void)Rte_Read_VePLTR_b_ADS_SrvSys_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysFailFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_ASCM_SysFail_FA'
     */
    (void)Rte_Read_VePLTR_b_ASCM_SysFail_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SrvFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_ASCM_Srv_FA'
     */
    (void)Rte_Read_VePLTR_b_ASCM_Srv_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__et);

    /* SignalConversion generated from: '<S22>/VePLTR_b_ASCM_SysSysFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_ADS_SrvSys_FA'
     */
    (void)Rte_Read_VePLTR_b_ADS_SrvSys_FA_Value
        (&TIMR_ac_B.TmpSignalConversionAtVePLTR__er);

    /* SignalConversion generated from: '<S22>/VeSRAR_b_Popup_Msg1' incorporates:
     *  Inport: '<Root>/VeSRAR_b_Popup_Msg1'
     */
    (void)Rte_Read_VeSRAR_b_Popup_Msg1_Value
        (&TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

#endif

    /* End of SignalConversion generated from: '<S22>/VeDMIB_e_PadLvrSts' */

    /* SignalConversion generated from: '<S22>/RacePrepOnOffReq' incorporates:
     *  Merge: '<Root>/VeTIMR_e_RacePrepOnOffReq_IRV_Merge'
     */
    rtb_TmpSignalConversionAtRacePr =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_RacePrepOnOffReq_write_IRV();

    /* SignalConversion generated from: '<S22>/RacePrepRaceTypeReq' incorporates:
     *  Merge: '<Root>/VeTIMR_e_RacePrepRaceTypeReq_IRV_Merge'
     */
    rtb_TmpSignalConversionAtRace_d =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_RacePrepRaceTypeReq_write_IRV();

    /* SignalConversion generated from: '<S22>/Radio_Custom_Mode' incorporates:
     *  Merge: '<Root>/VeTIMR_e_RadioCustomMode_IRV_Merge'
     */
    rtb_TmpSignalConversionAtRadio_ =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_RadioCustomMode_write_IRV();

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/TIMI_TX_ovrrd'
     */
    /* Switch: '<S55>/Switch12' incorporates:
     *  Constant: '<S550>/Calib'
     */
    if (KeTIMR_b_TrrnMdStOvrdEnbl)
    {
        /* Switch: '<S55>/Switch12' incorporates:
         *  Constant: '<S553>/Calib'
         */
        rtb_Switch12 = KeTIMR_e_TrrnMdStOvrdVal;
    }
    else
    {
        /* Switch: '<S55>/Switch12' incorporates:
         *  Merge: '<Root>/Merge_9'
         *  SignalConversion generated from: '<S22>/VeTIMR_e_TrrnMdSt_read'
         */
        rtb_Switch12 = Rte_IrvRead_TIMR_MedTED_VeTIMR_e_TrrnMdSt_write_IRV();
    }

    /* End of Switch: '<S55>/Switch12' */

    /* Switch: '<S55>/Switch5' incorporates:
     *  Constant: '<S547>/Calib'
     */
    if (KeTIMR_b_RightSwitchReqOvrdEnbl)
    {
        /* DataTypeConversion: '<S539>/DataTypeConversion' incorporates:
         *  Constant: '<S552>/Calib'
         */
        DataTypeConversion_a = KeTIMR_e_RightSwitchReqOvrdVal;
    }
    else
    {
        /* DataTypeConversion: '<S539>/DataTypeConversion' incorporates:
         *  Merge: '<Root>/VeTIMR_e_RightSwitchReq_IRV_Merge'
         *  SignalConversion generated from: '<S22>/VeTIMR_e_RightSwitchReq_Read'
         */
        DataTypeConversion_a =
            Rte_IrvRead_TIMR_MedTED_VeTIMR_e_RightSwitchReq_write_IRV();
    }

    /* End of Switch: '<S55>/Switch5' */

    /* Switch: '<S55>/Switch6' incorporates:
     *  Constant: '<S546>/Calib'
     */
    if (KeTIMR_b_LeftSwitchReqOvrdEnbl)
    {
        /* Switch: '<S55>/Switch6' incorporates:
         *  Constant: '<S551>/Calib'
         */
        rtb_Switch6 = KeTIMR_e_LeftSwitchReqOvrdVal;
    }
    else
    {
        /* Switch: '<S55>/Switch6' incorporates:
         *  Merge: '<Root>/VeTIMR_e_LeftSwitchReq_IRV_Merge'
         *  SignalConversion generated from: '<S22>/VeTIMR_e_LeftSwitchReq_Read'
         */
        rtb_Switch6 = Rte_IrvRead_TIMR_MedTED_VeTIMR_e_LeftSwitchReq_write_IRV();
    }

    /* End of Switch: '<S55>/Switch6' */

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* Chart: '<S57>/Custom_Terrain_Mode' incorporates:
     *  DataStoreRead: '<S57>/Data Store Read1'
     *  SignalConversion generated from: '<S22>/Radio_Custom_Mode'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Custom_Interface_Selection/Custom_Terrain_Mode */
    /* During: TIMR_MedTED/Subsystem/Custom_Interface_Selection/Custom_Terrain_Mode */
    if (((uint32)TIMR_ac_DW.is_active_c17_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Custom_Interface_Selection/Custom_Terrain_Mode */
        TIMR_ac_DW.is_active_c17_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Custom_Interface_Selection/Custom_Terrain_Mode */
        /* Transition: '<S70>:22' */
        TIMR_ac_DW.CurrentCustomMode = TIMR_ac_DW.NeTIMR_e_CustomDrvMdSts;
        TIMR_ac_DW.is_c17_TIMR_ac = TIMR_ac_IN_Drag;

        /* Entry 'Drag': '<S70>:1' */
        TIMR_ac_B.CustomDrvMdSts = TIMR_ac_DW.CurrentCustomMode;
    }
    else if (((uint32)TIMR_ac_DW.is_c17_TIMR_ac) == TIMR_ac_IN_Drag)
    {
        /* During 'Drag': '<S70>:1' */
        if (rtb_TmpSignalConversionAtRadio_ != TIMR_ac_DW.CurrentCustomMode)
        {
            /* Transition: '<S70>:6' */
            TIMR_ac_DW.is_c17_TIMR_ac = TIMR_ac_IN_Track;

            /* Entry 'Track': '<S70>:3' */
            TIMR_ac_DW.CurrentCustomMode = rtb_TmpSignalConversionAtRadio_;
        }
        else
        {
            TIMR_ac_B.CustomDrvMdSts = TIMR_ac_DW.CurrentCustomMode;
        }
    }
    else
    {
        /* During 'Track': '<S70>:3' */
        /* Transition: '<S70>:25' */
        TIMR_ac_DW.is_c17_TIMR_ac = TIMR_ac_IN_Drag;

        /* Entry 'Drag': '<S70>:1' */
        TIMR_ac_B.CustomDrvMdSts = TIMR_ac_DW.CurrentCustomMode;
    }

    /* End of Chart: '<S57>/Custom_Terrain_Mode' */

    /* DataStoreWrite: '<S57>/Data Store Write1' */
    TIMR_ac_DW.NeTIMR_e_CustomDrvMdSts = TIMR_ac_B.CustomDrvMdSts;

    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Terrain_Mode_Diagnostics'
     */
    /* RelationalOperator: '<S57>/Comparison5' incorporates:
     *  Merge: '<Root>/VeTIMR_e_CustomInterfaceBtn_IRV_Merge'
     *  RelationalOperator: '<S554>/Relational Operator5'
     *  RelationalOperator: '<S554>/Relational Operator6'
     *  RelationalOperator: '<S555>/Relational Operator5'
     *  RelationalOperator: '<S555>/Relational Operator6'
     *  RelationalOperator: '<S57>/Comparison6'
     *  SignalConversion generated from: '<S22>/CustomInterfaceBtn'
     */
    rtb_Comparison5_tmp =
        Rte_IrvRead_TIMR_MedTED_VeTIMR_e_CustomInterfaceBtn_write_IRV();

    /* RelationalOperator: '<S57>/Comparison5' incorporates:
     *  Constant: '<S74>/Constant'
     */
    rtb_Comparison5 = (CeTIMR_e_NotActivated == ((uint32)rtb_Comparison5_tmp));

    /* Outputs for Atomic SubSystem: '<S57>/Signal Latch On With Reset1' */
    /* Logic: '<S82>/OR1' incorporates:
     *  Constant: '<S78>/Constant'
     *  Logic: '<S57>/Logical4'
     *  Logic: '<S82>/NOT'
     *  Logic: '<S82>/OR'
     *  RelationalOperator: '<S57>/Comparison6'
     *  UnitDelay: '<S57>/Unit Delay2'
     *  UnitDelay: '<S82>/Unit Delay'
     */
    rtb_OR1_b = (((CeTIMR_e_Activated == ((uint32)rtb_Comparison5_tmp)) &&
                  (TIMR_ac_DW.UnitDelay2_DSTATE)) || ((!rtb_Comparison5) &&
                  (TIMR_ac_DW.UnitDelay_DSTATE_l5)));

    /* Update for UnitDelay: '<S82>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_l5 = rtb_OR1_b;

    /* End of Outputs for SubSystem: '<S57>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S57>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S57>/EdgeFalling2' */
    /* Logic: '<S73>/OR1' incorporates:
     *  Logic: '<S72>/OR1'
     */
    rtb_AND_gk1 = !rtb_OR1_b;

    /* End of Outputs for SubSystem: '<S57>/EdgeFalling1' */

    /* Logic: '<S73>/AND' incorporates:
     *  Logic: '<S73>/OR1'
     *  UnitDelay: '<S73>/Unit Delay'
     */
    rtb_AND_pi = (rtb_AND_gk1 && (TIMR_ac_DW.UnitDelay_DSTATE_d1));

    /* Update for UnitDelay: '<S73>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_d1 = rtb_OR1_b;

    /* End of Outputs for SubSystem: '<S57>/EdgeFalling2' */

    /* Switch: '<S69>/Switch' incorporates:
     *  UnitDelay: '<S57>/Unit Delay'
     */
    if (TIMR_ac_DW.UnitDelay_DSTATE_mj)
    {
        /* Switch: '<S69>/Switch' incorporates:
         *  Constant: '<S69>/Zero'
         */
        rtb_Switch_nz = 0U;
    }
    else
    {
        /* Switch: '<S69>/Switch' incorporates:
         *  DataTypeConversion: '<S69>/Data Type Conversion3'
         *  Sum: '<S69>/Add'
         *  UnitDelay: '<S69>/Unit Delay'
         */
        rtb_Switch_nz = (uint8)(((uint32)(rtb_AND_pi ? 1U : 0U)) + ((uint32)
            TIMR_ac_DW.UnitDelay_DSTATE_mt));
    }

    /* End of Switch: '<S69>/Switch' */

    /* Outputs for Atomic SubSystem: '<S57>/EdgeFalling1' */
    /* Logic: '<S72>/AND' incorporates:
     *  UnitDelay: '<S72>/Unit Delay'
     */
    rtb_AND_pi = (rtb_AND_gk1 && (TIMR_ac_DW.UnitDelay_DSTATE_kx));

    /* Update for UnitDelay: '<S72>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_kx = rtb_OR1_b;

    /* End of Outputs for SubSystem: '<S57>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S57>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S83>/Switch1' incorporates:
     *  Switch: '<S83>/Switch2'
     */
    if (rtb_AND_pi)
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Constant: '<S79>/Calib'
         */
        rtb_Switch1_j = KeTIMR_t_TrrMdCycleTime;
    }
    else if (rtb_TmpSignalConversionAtCustom)
    {
        /* Switch: '<S83>/Switch2' incorporates:
         *  Constant: '<S60>/Calib'
         *  Constant: '<S83>/Constant Value4'
         *  MinMax: '<S83>/Maximum'
         *  Sum: '<S83>/Subtraction'
         *  Switch: '<S83>/Switch1'
         *  UnitDelay: '<S83>/Unit Delay'
         */
        rtb_Switch1_j = fmaxf(TIMR_ac_DW.UnitDelay_DSTATE_e - KeTIMR_t_25p_dT,
                              0.0F);
    }
    else
    {
        /* Switch: '<S83>/Switch1' incorporates:
         *  Switch: '<S83>/Switch2'
         *  UnitDelay: '<S83>/Unit Delay'
         */
        rtb_Switch1_j = TIMR_ac_DW.UnitDelay_DSTATE_e;
    }

    /* End of Switch: '<S83>/Switch1' */

    /* RelationalOperator: '<S83>/Greater  Than1' incorporates:
     *  Constant: '<S83>/Constant Value2'
     */
    rtb_OR1_b = (rtb_Switch1_j > 0.0F);

    /* Update for UnitDelay: '<S83>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_e = rtb_Switch1_j;

    /* End of Outputs for SubSystem: '<S57>/Timer Retrigger Reset Enabled' */

    /* Outputs for Atomic SubSystem: '<S57>/EdgeFalling' */
    /* Logic: '<S71>/AND' incorporates:
     *  Logic: '<S71>/OR1'
     *  UnitDelay: '<S71>/Unit Delay'
     */
    rtb_AND_pi = ((!rtb_OR1_b) && (TIMR_ac_DW.UnitDelay_DSTATE_go));

    /* Update for UnitDelay: '<S71>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_go = rtb_OR1_b;

    /* End of Outputs for SubSystem: '<S57>/EdgeFalling' */

    /* Logic: '<S57>/Logical1' incorporates:
     *  Constant: '<S67>/Constant'
     *  RelationalOperator: '<S67>/Compare'
     */
    rtb_Logical1 = (rtb_AND_pi && (((sint32)rtb_Switch_nz) == 1));

    /* Logic: '<S57>/Logical2' incorporates:
     *  Constant: '<S68>/Constant'
     *  RelationalOperator: '<S68>/Compare'
     */
    rtb_OR1_b = (rtb_AND_pi && (((sint32)rtb_Switch_nz) >= 2));

    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S85>/EdgeFalling' */
    /* Logic: '<S87>/AND' incorporates:
     *  Logic: '<S87>/OR1'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    rtb_AND_gk1 = ((!rtb_Logical1) && (TIMR_ac_DW.UnitDelay_DSTATE_fg));

    /* Update for UnitDelay: '<S87>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_fg = rtb_Logical1;

    /* End of Outputs for SubSystem: '<S85>/EdgeFalling' */

    /* Switch: '<S85>/Switch' */
    if (rtb_AND_gk1)
    {
        /* Switch: '<S85>/Switch' incorporates:
         *  Constant: '<S81>/Calib'
         */
        rtb_Switch1_j = KeTIMR_t_CustomMdReqTime;
    }
    else
    {
        /* Switch: '<S85>/Switch' incorporates:
         *  Constant: '<S60>/Calib'
         *  Constant: '<S85>/Constant Value1'
         *  MinMax: '<S85>/Minimum'
         *  Sum: '<S85>/Summation'
         *  UnitDelay: '<S85>/Unit Delay'
         */
        rtb_Switch1_j = fmaxf(TIMR_ac_DW.UnitDelay_DSTATE_m - KeTIMR_t_25p_dT,
                              0.0F);
    }

    /* End of Switch: '<S85>/Switch' */
    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Time1' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePRXR_e_Terrain_Selector_Modes' */
    (void)Rte_Read_VePRXR_e_Terrain_Selector_Modes_Value(&tmpRead_1);

    /* Inport: '<Root>/VePRXR_e_Axle_Locker_Presence' */
    (void)Rte_Read_VePRXR_e_Axle_Locker_Presence_Value(&tmpRead_0);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TIMR_MedTED'
     */
    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Time1' */
    /* Update for UnitDelay: '<S85>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_m = rtb_Switch1_j;

    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Time1' */

    /* RelationalOperator: '<S472>/Relational Operator1' incorporates:
     *  Merge: '<Root>/VeTIMR_e_TowMdSwitch_IRV_Merge'
     *  RelationalOperator: '<S472>/Relational Operator3'
     *  SignalConversion generated from: '<S22>/VeTIMI_e_TowMdSwitch'
     */
    rtb_AND_bv_tmp = Rte_IrvRead_TIMR_MedTED_VeTIMR_e_TowMdSwitch_write_IRV();

    /* RelationalOperator: '<S472>/Relational Operator1' incorporates:
     *  Constant: '<S482>/Constant'
     */
    rtb_AND_gk1 = (((uint32)rtb_AND_bv_tmp) == CeTIMR_e_NotActivated);

    /* Logic: '<S472>/Logical11' incorporates:
     *  UnitDelay: '<S472>/Unit Delay8'
     *  UnitDelay: '<S472>/Unit Delay9'
     */
    rtb_Logical11 = ((rtb_AND_gk1 && (TIMR_ac_DW.UnitDelay9_DSTATE)) &&
                     (TIMR_ac_DW.UnitDelay8_DSTATE));

    /* RelationalOperator: '<S472>/Comparison5' incorporates:
     *  Constant: '<S484>/Constant'
     *  Inport: '<Root>/VePRXR_e_Axle_Locker_Presence'
     *  RelationalOperator: '<S472>/Comparison2'
     */
    rtb_Comparison5_g = (((uint32)tmpRead_0) != CePRXR_e_ALP_Absent);

    /* RelationalOperator: '<S472>/Comparison1' incorporates:
     *  Constant: '<S480>/Constant'
     *  Inport: '<Root>/VePRXR_e_Terrain_Selector_Modes'
     *  RelationalOperator: '<S472>/Comparison3'
     */
    rtb_Comparison1_o = (((uint32)tmpRead_1) == CePRXR_e_Five_Modes);
    for (i = 0; i < 15; i++)
    {
        /* Switch: '<S472>/Switch' incorporates:
         *  Logic: '<S472>/Logical12'
         */
        if ((rtb_TmpSignalConversionAtCustom || rtb_Comparison5_g) ||
                rtb_Comparison1_o)
        {
            /* Switch: '<S472>/Switch1' */
            if (rtb_TmpSignalConversionAtTrack_)
            {
                /* Switch: '<S472>/Switch2' incorporates:
                 *  Constant: '<S496>/Calib'
                 */
                rtb_Switch2_jd[i] = KaTIMR_y_TrrnMdArbMapUp_Variant2[(i)];
            }
            else
            {
                /* Switch: '<S472>/Switch2' incorporates:
                 *  Constant: '<S495>/Calib'
                 */
                rtb_Switch2_jd[i] = KaTIMR_y_TrrnMdArbMapUp_Variant1[(i)];
            }

            /* End of Switch: '<S472>/Switch1' */
        }
        else
        {
            /* Switch: '<S472>/Switch2' incorporates:
             *  Constant: '<S494>/Calib'
             */
            rtb_Switch2_jd[i] = KaTIMR_y_TrrnMdArbMapUp[(i)];
        }

        /* End of Switch: '<S472>/Switch' */
    }

    /* If: '<S473>/If1' incorporates:
     *  Constant: '<S515>/Calib'
     */
    if (KeTIMR_i_TrrnMdSwtchTyp == 0)
    {
        /* Outputs for IfAction SubSystem: '<S473>/Left_Right_Switches' incorporates:
         *  ActionPort: '<S514>/Action Port'
         */
        /* If: '<S514>/If' incorporates:
         *  Constant: '<S518>/Constant'
         *  Constant: '<S519>/Constant'
         *  DataTypeConversion: '<S539>/DataTypeConversion'
         *  Logic: '<S514>/Logical'
         *  Logic: '<S514>/Logical1'
         *  Logic: '<S514>/Logical2'
         *  RelationalOperator: '<S514>/Comparison1'
         *  RelationalOperator: '<S514>/Comparison2'
         *  RelationalOperator: '<S514>/Comparison3'
         *  RelationalOperator: '<S514>/Comparison4'
         *  RelationalOperator: '<S514>/Comparison5'
         *  RelationalOperator: '<S514>/Comparison6'
         */
        if ((((uint32)DataTypeConversion_a) == CeTIMR_e_Activated) && (((uint32)
                rtb_Switch6) == CeTIMR_e_NotActivated))
        {
            /* Outputs for IfAction SubSystem: '<S514>/Down_Activated' incorporates:
             *  ActionPort: '<S517>/Action Port'
             */
            TIMR_ac_Down_Activated(&TIMR_ac_B.Merge_e);

            /* End of Outputs for SubSystem: '<S514>/Down_Activated' */
        }
        else if ((((uint32)DataTypeConversion_a) == CeTIMR_e_NotActivated) &&
                 (((uint32)rtb_Switch6) == CeTIMR_e_Activated))
        {
            /* Outputs for IfAction SubSystem: '<S514>/Up_Activated' incorporates:
             *  ActionPort: '<S522>/Action Port'
             */
            TIMR_ac_Up_Activated(&TIMR_ac_B.Merge_e);

            /* End of Outputs for SubSystem: '<S514>/Up_Activated' */
        }
        else if ((((uint32)DataTypeConversion_a) == CeTIMR_e_NotActivated) &&
                 (((uint32)rtb_Switch6) == CeTIMR_e_NotActivated))
        {
            /* Outputs for IfAction SubSystem: '<S514>/Not_Activated' incorporates:
             *  ActionPort: '<S520>/Action Port'
             */
            TIMR_ac_Not_Activated(&TIMR_ac_B.Merge_e);

            /* End of Outputs for SubSystem: '<S514>/Not_Activated' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S514>/SNA' incorporates:
             *  ActionPort: '<S521>/Action Port'
             */
            TIMR_ac_SNA(&TIMR_ac_B.Merge_e);

            /* End of Outputs for SubSystem: '<S514>/SNA' */
        }

        /* End of If: '<S514>/If' */
        /* End of Outputs for SubSystem: '<S473>/Left_Right_Switches' */
    }
    else
    {
        if (KeTIMR_i_TrrnMdSwtchTyp == 1)
        {
            /* Outputs for IfAction SubSystem: '<S473>/Toggle_Switch' incorporates:
             *  ActionPort: '<S516>/Action Port'
             */
            /* If: '<S516>/If' incorporates:
             *  Constant: '<S528>/Constant'
             *  Constant: '<S529>/Constant'
             *  Constant: '<S530>/Constant'
             *  RelationalOperator: '<S516>/Comparison3'
             *  RelationalOperator: '<S516>/Comparison4'
             *  RelationalOperator: '<S516>/Comparison6'
             */
            if (((uint32)rtb_TmpSignalConversionAtVeTIMI) ==
                    CeTIMR_e_Right_Down_Activated)
            {
                /* Outputs for IfAction SubSystem: '<S516>/Down_Activated' incorporates:
                 *  ActionPort: '<S527>/Action Port'
                 */
                TIMR_ac_Down_Activated(&TIMR_ac_B.Merge_e);

                /* End of Outputs for SubSystem: '<S516>/Down_Activated' */
            }
            else if (((uint32)rtb_TmpSignalConversionAtVeTIMI) ==
                     CeTIMR_e_Left_Up_Activated)
            {
                /* Outputs for IfAction SubSystem: '<S516>/Up_Activated' incorporates:
                 *  ActionPort: '<S533>/Action Port'
                 */
                TIMR_ac_Up_Activated(&TIMR_ac_B.Merge_e);

                /* End of Outputs for SubSystem: '<S516>/Up_Activated' */
            }
            else if (((uint32)rtb_TmpSignalConversionAtVeTIMI) ==
                     CeTIMR_e_Switch_Not_Activated)
            {
                /* Outputs for IfAction SubSystem: '<S516>/Not_Activated' incorporates:
                 *  ActionPort: '<S531>/Action Port'
                 */
                TIMR_ac_Not_Activated(&TIMR_ac_B.Merge_e);

                /* End of Outputs for SubSystem: '<S516>/Not_Activated' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S516>/SNA' incorporates:
                 *  ActionPort: '<S532>/Action Port'
                 */
                TIMR_ac_SNA(&TIMR_ac_B.Merge_e);

                /* End of Outputs for SubSystem: '<S516>/SNA' */
            }

            /* End of If: '<S516>/If' */
            /* End of Outputs for SubSystem: '<S473>/Toggle_Switch' */
        }
    }

    /* End of If: '<S473>/If1' */

    /* RelationalOperator: '<S472>/Comparison6' incorporates:
     *  Merge: '<S473>/Merge'
     *  RelationalOperator: '<S472>/Comparison1'
     *  RelationalOperator: '<S472>/Comparison5'
     */
    rtb_Comparison6_k_tmp = TIMR_ac_B.Merge_e;

    /* RelationalOperator: '<S472>/Comparison6' incorporates:
     *  Constant: '<S485>/Constant'
     */
    rtb_Comparison6_l = (CeTIMR_e_Not_Activated == ((uint32)
                          rtb_Comparison6_k_tmp));

    /* Logic: '<S472>/Logical3' incorporates:
     *  UnitDelay: '<S472>/Unit Delay4'
     *  UnitDelay: '<S472>/Unit Delay5'
     */
    rtb_Logical3 = ((rtb_Comparison6_l && (TIMR_ac_DW.UnitDelay5_DSTATE)) &&
                    (TIMR_ac_DW.UnitDelay4_DSTATE));

    /* Logic: '<S472>/Logical6' incorporates:
     *  UnitDelay: '<S472>/Unit Delay3'
     *  UnitDelay: '<S472>/Unit Delay6'
     */
    rtb_Logical6 = ((rtb_Comparison6_l && (TIMR_ac_DW.UnitDelay6_DSTATE)) &&
                    (TIMR_ac_DW.UnitDelay3_DSTATE));

    /* RelationalOperator: '<S472>/Relational Operator3' incorporates:
     *  Constant: '<S486>/Constant'
     */
    rtb_RelationalOperator3_f = (((uint32)rtb_AND_bv_tmp) == CeTIMR_e_Activated);

    /* Outputs for Atomic SubSystem: '<S472>/EdgeRising' */
    /* Logic: '<S477>/AND' incorporates:
     *  Logic: '<S477>/OR1'
     *  UnitDelay: '<S477>/Unit Delay'
     */
    rtb_AND_h = (rtb_RelationalOperator3_f && (!TIMR_ac_DW.UnitDelay_DSTATE_na));

    /* Update for UnitDelay: '<S477>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_na = rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S472>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S472>/Timer Retrigger Reset Enabled' */
    /* Switch: '<S506>/Switch1' incorporates:
     *  Logic: '<S472>/Logical9'
     */
    if (((rtb_Logical3 || rtb_Logical6) || rtb_AND_h) || rtb_Logical1)
    {
        /* Switch: '<S506>/Switch1' incorporates:
         *  Constant: '<S501>/Calib'
         */
        rtb_Switch1 = KeTIMR_t_TrrMdCycleTime;
    }
    else
    {
        /* Switch: '<S506>/Switch1' incorporates:
         *  Constant: '<S506>/Constant Value4'
         *  Constant: '<S60>/Calib'
         *  MinMax: '<S506>/Maximum'
         *  Sum: '<S506>/Subtraction'
         *  UnitDelay: '<S506>/Unit Delay'
         */
        rtb_Switch1 = fmaxf(TIMR_ac_DW.UnitDelay_DSTATE_f - KeTIMR_t_25p_dT,
                            0.0F);
    }

    /* End of Switch: '<S506>/Switch1' */

    /* RelationalOperator: '<S506>/Greater  Than1' incorporates:
     *  Constant: '<S506>/Constant Value2'
     */
    rtb_AND_h = (rtb_Switch1 > 0.0F);

    /* Update for UnitDelay: '<S506>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_f = rtb_Switch1;

    /* End of Outputs for SubSystem: '<S472>/Timer Retrigger Reset Enabled' */

    /* Switch: '<S489>/Switch1' */
    if (rtb_AND_h)
    {
        /* Switch: '<S489>/Switch1' incorporates:
         *  UnitDelay: '<S472>/Unit Delay'
         */
        rtb_Switch1_io = TIMR_ac_DW.UnitDelay_DSTATE_k3;
    }
    else
    {
        /* Switch: '<S489>/Switch1' incorporates:
         *  DataTypeConversion: '<S472>/Data Type Conversion3'
         *  SignalConversion generated from: '<S22>/VeTMDR_e_TrrnMd'
         */
        rtb_Switch1_io = (uint8)rtb_TmpSignalConversionAtVeTMDR;
    }

    /* End of Switch: '<S489>/Switch1' */

    /* Outputs for Enabled SubSystem: '<S472>/ModeUp' incorporates:
     *  EnablePort: '<S499>/Enable'
     */
    if (rtb_Logical3)
    {
        /* Sum: '<S499>/Sum' incorporates:
         *  Constant: '<S499>/Constant Value1'
         *  Selector: '<S472>/Selector4'
         */
        TIMR_ac_B.Sum = (uint8)((sint32)(((sint32)rtb_Switch2_jd[rtb_Switch1_io])
            - 1));
    }

    /* End of Outputs for SubSystem: '<S472>/ModeUp' */

    /* Outputs for Atomic SubSystem: '<S472>/Turn Off Delay Time2' */
    /* Outputs for Atomic SubSystem: '<S508>/EdgeFalling' */
    /* Logic: '<S513>/AND' incorporates:
     *  Logic: '<S513>/OR1'
     *  UnitDelay: '<S513>/Unit Delay'
     */
    rtb_AND_i = ((!rtb_Logical3) && (TIMR_ac_DW.UnitDelay_DSTATE_m5));

    /* Update for UnitDelay: '<S513>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_m5 = rtb_Logical3;

    /* End of Outputs for SubSystem: '<S508>/EdgeFalling' */

    /* Switch: '<S508>/Switch' */
    if (rtb_AND_i)
    {
        /* Switch: '<S508>/Switch' incorporates:
         *  Constant: '<S500>/Calib'
         */
        rtb_Switch1 = KeTIMR_t_MaxHoldTimeAfterTerrainSwActv;
    }
    else
    {
        /* Switch: '<S508>/Switch' incorporates:
         *  Constant: '<S508>/Constant Value1'
         *  Constant: '<S60>/Calib'
         *  MinMax: '<S508>/Minimum'
         *  Sum: '<S508>/Summation'
         *  UnitDelay: '<S508>/Unit Delay'
         */
        rtb_Switch1 = fmaxf(TIMR_ac_DW.UnitDelay_DSTATE - KeTIMR_t_25p_dT, 0.0F);
    }

    /* End of Switch: '<S508>/Switch' */

    /* Update for UnitDelay: '<S508>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE = rtb_Switch1;

    /* End of Outputs for SubSystem: '<S472>/Turn Off Delay Time2' */

    /* Switch: '<S472>/Switch2' incorporates:
     *  Logic: '<S472>/Logical13'
     */
    if ((rtb_TmpSignalConversionAtCustom || rtb_Comparison5_g) ||
            rtb_Comparison1_o)
    {
        /* Selector: '<S472>/Selector1' incorporates:
         *  Switch: '<S472>/Switch3'
         */
        if (rtb_TmpSignalConversionAtTrack_)
        {
            /* Selector: '<S472>/Selector1' incorporates:
             *  Constant: '<S493>/Calib'
             */
            rtb_Selector1 = KaTIMR_y_TrrnMdArbMapDown_Variant2[(rtb_Switch1_io)];
        }
        else
        {
            /* Selector: '<S472>/Selector1' incorporates:
             *  Constant: '<S502>/Calib'
             */
            rtb_Selector1 = KaTIMR_y_TrrnMdArbMapDown_Variant1[(rtb_Switch1_io)];
        }
    }
    else
    {
        /* Selector: '<S472>/Selector1' incorporates:
         *  Constant: '<S492>/Calib'
         */
        rtb_Selector1 = KaTIMR_y_TrrnMdArbMapDown[(rtb_Switch1_io)];
    }

    /* End of Switch: '<S472>/Switch2' */

    /* Outputs for Enabled SubSystem: '<S472>/ModeDown' incorporates:
     *  EnablePort: '<S498>/Enable'
     */
    if (rtb_Logical6)
    {
        /* Sum: '<S498>/Sum1' incorporates:
         *  Constant: '<S498>/Constant Value1'
         */
        TIMR_ac_B.Sum1 = (uint8)(((uint32)rtb_Selector1) + 1U);
    }

    /* End of Outputs for SubSystem: '<S472>/ModeDown' */

    /* Outputs for Atomic SubSystem: '<S472>/Turn Off Delay Time1' */
    /* Outputs for Atomic SubSystem: '<S507>/EdgeFalling' */
    /* Logic: '<S512>/AND' incorporates:
     *  Logic: '<S512>/OR1'
     *  UnitDelay: '<S512>/Unit Delay'
     */
    rtb_Comparison1_o = ((!rtb_Logical6) && (TIMR_ac_DW.UnitDelay_DSTATE_ee));

    /* Update for UnitDelay: '<S512>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_ee = rtb_Logical6;

    /* End of Outputs for SubSystem: '<S507>/EdgeFalling' */

    /* Switch: '<S507>/Switch' */
    if (rtb_Comparison1_o)
    {
        /* Switch: '<S507>/Switch' incorporates:
         *  Constant: '<S500>/Calib'
         */
        rtb_Switch_n = KeTIMR_t_MaxHoldTimeAfterTerrainSwActv;
    }
    else
    {
        /* Switch: '<S507>/Switch' incorporates:
         *  Constant: '<S507>/Constant Value1'
         *  Constant: '<S60>/Calib'
         *  MinMax: '<S507>/Minimum'
         *  Sum: '<S507>/Summation'
         *  UnitDelay: '<S507>/Unit Delay'
         */
        rtb_Switch_n = fmaxf(TIMR_ac_DW.UnitDelay_DSTATE_b - KeTIMR_t_25p_dT,
                             0.0F);
    }

    /* End of Switch: '<S507>/Switch' */

    /* Update for UnitDelay: '<S507>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_b = rtb_Switch_n;

    /* End of Outputs for SubSystem: '<S472>/Turn Off Delay Time1' */

    /* Switch: '<S491>/Switch1' incorporates:
     *  Constant: '<S483>/Constant'
     *  Constant: '<S507>/Constant Value2'
     *  Constant: '<S508>/Constant Value2'
     *  Logic: '<S472>/Logical7'
     *  Logic: '<S507>/AND'
     *  Logic: '<S508>/AND'
     *  RelationalOperator: '<S472>/Relational Operator4'
     *  RelationalOperator: '<S507>/Greater  Than'
     *  RelationalOperator: '<S508>/Greater  Than'
     *  Switch: '<S490>/Switch1'
     *  Switch: '<S490>/Switch2'
     *  Switch: '<S491>/Switch2'
     */
    if (rtb_Logical11 && (((uint32)rtb_TmpSignalConversionAtVeTMDR) !=
                          CeTMDR_e_Tow))
    {
        /* Switch: '<S491>/Switch1' */
        rtb_Switch1_io = 8U;
    }
    else if (rtb_Logical11)
    {
        /* Switch: '<S491>/Switch1' incorporates:
         *  Switch: '<S491>/Switch2'
         */
        rtb_Switch1_io = 1U;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S472>/Turn Off Delay Time2' */
        if (rtb_Logical3 || (rtb_Switch1 > 0.0F))
        {
            /* Switch: '<S491>/Switch1' incorporates:
             *  Switch: '<S490>/Switch1'
             *  Switch: '<S491>/Switch2'
             */
            rtb_Switch1_io = TIMR_ac_B.Sum;
        }
        else
        {
            /* Outputs for Atomic SubSystem: '<S472>/Turn Off Delay Time1' */
            if (rtb_Logical6 || (rtb_Switch_n > 0.0F))
            {
                /* Switch: '<S490>/Switch2' incorporates:
                 *  Switch: '<S490>/Switch1'
                 *  Switch: '<S491>/Switch1'
                 *  Switch: '<S491>/Switch2'
                 */
                rtb_Switch1_io = TIMR_ac_B.Sum1;
            }

            /* End of Outputs for SubSystem: '<S472>/Turn Off Delay Time1' */
        }

        /* End of Outputs for SubSystem: '<S472>/Turn Off Delay Time2' */
    }

    /* End of Switch: '<S491>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Time1' */
    /* Switch: '<S57>/Switch' incorporates:
     *  Constant: '<S472>/Constant Value1'
     *  Constant: '<S85>/Constant Value2'
     *  Logic: '<S85>/AND'
     *  RelationalOperator: '<S497>/Relational Operator'
     *  RelationalOperator: '<S85>/Greater  Than'
     *  Switch: '<S497>/Switch1'
     */
    if (rtb_Logical1 || (rtb_Switch1_j > 0.0F))
    {
        /* Switch: '<S57>/Switch' incorporates:
         *  Constant: '<S75>/Constant'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Custom;
    }
    else
    {
        /* Outputs for Atomic SubSystem: '<S472>/Limiter1' */
        if (20 < ((sint32)rtb_Switch1_io))
        {
            /* Switch: '<S497>/Switch1' incorporates:
             *  Constant: '<S472>/Constant Value1'
             */
            rtb_Selector1 = 20U;
        }
        else
        {
            /* Switch: '<S497>/Switch1' */
            rtb_Selector1 = rtb_Switch1_io;
        }

        /* Switch: '<S497>/Switch' incorporates:
         *  Constant: '<S472>/Constant Value2'
         *  RelationalOperator: '<S497>/Relational Operator1'
         */
        if (((sint32)rtb_Selector1) > 1)
        {
            /* Switch: '<S57>/Switch' */
            rtb_TmpSignalConversionAtRadio_ = (TeTMDR_e_TrrnMd)rtb_Selector1;
        }
        else
        {
            /* Switch: '<S57>/Switch' incorporates:
             *  DataTypeConversion: '<S478>/DataTypeConversion'
             */
            rtb_TmpSignalConversionAtRadio_ = 1U;
        }

        /* End of Switch: '<S497>/Switch' */
        /* End of Outputs for SubSystem: '<S472>/Limiter1' */
    }

    /* End of Switch: '<S57>/Switch' */
    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Time1' */

    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Time' */
    /* Outputs for Atomic SubSystem: '<S84>/EdgeFalling' */
    /* Logic: '<S86>/AND' incorporates:
     *  Logic: '<S86>/OR1'
     *  UnitDelay: '<S86>/Unit Delay'
     */
    rtb_Comparison1_o = ((!rtb_OR1_b) && (TIMR_ac_DW.UnitDelay_DSTATE_ki));

    /* Update for UnitDelay: '<S86>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_ki = rtb_OR1_b;

    /* End of Outputs for SubSystem: '<S84>/EdgeFalling' */

    /* Switch: '<S84>/Switch' */
    if (rtb_Comparison1_o)
    {
        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S80>/Calib'
         */
        rtb_Switch1_j = KeTIMR_t_ScreenReqTime;
    }
    else
    {
        /* Switch: '<S84>/Switch' incorporates:
         *  Constant: '<S60>/Calib'
         *  Constant: '<S84>/Constant Value1'
         *  MinMax: '<S84>/Minimum'
         *  Sum: '<S84>/Summation'
         *  UnitDelay: '<S84>/Unit Delay'
         */
        rtb_Switch1_j = fmaxf(TIMR_ac_DW.UnitDelay_DSTATE_j - KeTIMR_t_25p_dT,
                              0.0F);
    }

    /* End of Switch: '<S84>/Switch' */

    /* Update for UnitDelay: '<S84>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_j = rtb_Switch1_j;

    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Time' */

    /* Chart: '<S65>/Button_Press' incorporates:
     *  Constant: '<S468>/Calib'
     *  Constant: '<S60>/Calib'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Subsystem/Button_Press */
    /* During: TIMR_MedTED/Subsystem/Subsystem/Button_Press */
    if (((uint32)TIMR_ac_DW.is_active_c44_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Subsystem/Button_Press */
        TIMR_ac_DW.is_active_c44_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Subsystem/Button_Press */
        /* Transition: '<S465>:4' */
        TIMR_ac_DW.is_c44_TIMR_ac = TIMR_ac_IN_Not_Pressed;

        /* Entry 'Not_Pressed': '<S465>:3' */
        TIMR_ac_B.RacePrep_Req = false;
    }
    else
    {
        switch (TIMR_ac_DW.is_c44_TIMR_ac)
        {
          case TIMR_ac_IN_Not_Pressed:
            /* During 'Not_Pressed': '<S465>:3' */
            if (rtb_TmpSignalConversionAtRacePr)
            {
                /* Transition: '<S465>:7' */
                TIMR_ac_DW.Cnt = 0.0F;
                TIMR_ac_DW.is_c44_TIMR_ac = TIMR_ac_IN_Pressed;
            }
            else
            {
                TIMR_ac_B.RacePrep_Req = false;
            }
            break;

          case TIMR_ac_IN_Pressed:
            /* During 'Pressed': '<S465>:5' */
            /* Transition: '<S465>:12' */
            if ((!rtb_TmpSignalConversionAtRacePr) && (TIMR_ac_DW.Cnt >=
                    ((float32)KeTIMR_t_MaxPressTimeSwitches)))
            {
                /* Transition: '<S465>:18' */
                TIMR_ac_DW.is_c44_TIMR_ac = TIMR_ac_IN_Not_Pressed;

                /* Entry 'Not_Pressed': '<S465>:3' */
                TIMR_ac_B.RacePrep_Req = false;
            }
            else
            {
                /* Transition: '<S465>:17' */
                if (!rtb_TmpSignalConversionAtRacePr)
                {
                    /* Transition: '<S465>:11' */
                    TIMR_ac_DW.is_c44_TIMR_ac = TIMR_ac_IN_Request;

                    /* Entry 'Request': '<S465>:6' */
                    TIMR_ac_B.RacePrep_Req = true;
                }
                else
                {
                    /* Transition: '<S465>:15' */
                    /* Transition: '<S465>:13' */
                    TIMR_ac_DW.Cnt += KeTIMR_t_25p_dT;
                    TIMR_ac_DW.is_c44_TIMR_ac = TIMR_ac_IN_Pressed;
                }
            }
            break;

          default:
            /* During 'Request': '<S465>:6' */
            /* Transition: '<S465>:19' */
            TIMR_ac_DW.is_c44_TIMR_ac = TIMR_ac_IN_Not_Pressed;

            /* Entry 'Not_Pressed': '<S465>:3' */
            TIMR_ac_B.RacePrep_Req = false;
            break;
        }
    }

    /* End of Chart: '<S65>/Button_Press' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VeOBCR_b_RacePrepBattLvlSts' */
    (void)Rte_Read_VeOBCR_b_RacePrepBattLvlSts_Value(&rtb_AND_pf);

    /* Inport: '<Root>/VeTPCR_b_RacePrepEVSysStatus' */
    (void)Rte_Read_VeTPCR_b_RacePrepEVSysStatus_Value
        (&rtb_RelationalOperator2_bk);

    /* Inport: '<Root>/VeTPCR_b_RacePrepAmbCheck' */
    (void)Rte_Read_VeTPCR_b_RacePrepAmbCheck_Value(&rtb_AND_gv);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TIMR_MedTED'
     */
    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* Logic: '<S65>/AND' */
    rtb_TmpSignalConversionAtRacePr = ((rtb_AND_gv && rtb_RelationalOperator2_bk)
        && rtb_AND_pf);

    /* Chart: '<S65>/Race_Prep_Mode' incorporates:
     *  DataStoreRead: '<S65>/Data Store Read'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Mode */
    /* During: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Mode */
    if (((uint32)TIMR_ac_DW.is_active_c45_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Mode */
        TIMR_ac_DW.is_active_c45_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Mode */
        /* Transition: '<S469>:2' */
        RacePrepMode = TIMR_ac_DW.NeTIMR_e_RacePrepMode;
        if (((uint32)RacePrepMode) != CeTIMR_e_RacePrep_Off)
        {
            /* Transition: '<S469>:23' */
            if (((uint32)RacePrepMode) == CeTIMR_e_RacePrep_Enabled)
            {
                /* Transition: '<S469>:18' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Enabled;

                /* Entry 'Race_Prep_Enabled': '<S469>:3' */
                RacePrepMode = CeTIMR_e_RacePrep_Enabled;
            }
            else
            {
                /* Transition: '<S469>:30' */
                /* Transition: '<S469>:31' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Active;

                /* Entry 'Race_Prep_Active': '<S469>:5' */
                RacePrepMode = CeTIMR_e_RacePrep_Active;
            }
        }
        else
        {
            /* Transition: '<S469>:22' */
            TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Off;

            /* Entry 'Race_Prep_Off': '<S469>:1' */
            RacePrepMode = CeTIMR_e_RacePrep_Off;
        }
    }
    else
    {
        switch (TIMR_ac_DW.is_c45_TIMR_ac)
        {
          case TIMR_ac_IN_Race_Prep_Active:
            /* During 'Race_Prep_Active': '<S469>:5' */
            if (TIMR_ac_B.RacePrep_Req)
            {
                /* Transition: '<S469>:8' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Off;

                /* Entry 'Race_Prep_Off': '<S469>:1' */
                RacePrepMode = CeTIMR_e_RacePrep_Off;
            }
            else if (!rtb_TmpSignalConversionAtRacePr)
            {
                /* Transition: '<S469>:26' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Enabled;

                /* Entry 'Race_Prep_Enabled': '<S469>:3' */
                RacePrepMode = CeTIMR_e_RacePrep_Enabled;
            }
            else
            {
                RacePrepMode = CeTIMR_e_RacePrep_Active;
            }
            break;

          case TIMR_ac_IN_Race_Prep_Enabled:
            /* During 'Race_Prep_Enabled': '<S469>:3' */
            if (rtb_TmpSignalConversionAtRacePr)
            {
                /* Transition: '<S469>:24' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Active;

                /* Entry 'Race_Prep_Active': '<S469>:5' */
                RacePrepMode = CeTIMR_e_RacePrep_Active;
            }
            else if (TIMR_ac_B.RacePrep_Req)
            {
                /* Transition: '<S469>:25' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Off;

                /* Entry 'Race_Prep_Off': '<S469>:1' */
                RacePrepMode = CeTIMR_e_RacePrep_Off;
            }
            else
            {
                RacePrepMode = CeTIMR_e_RacePrep_Enabled;
            }
            break;

          default:
            /* During 'Race_Prep_Off': '<S469>:1' */
            if (TIMR_ac_B.RacePrep_Req)
            {
                /* Transition: '<S469>:6' */
                TIMR_ac_DW.is_c45_TIMR_ac = TIMR_ac_IN_Race_Prep_Enabled;

                /* Entry 'Race_Prep_Enabled': '<S469>:3' */
                RacePrepMode = CeTIMR_e_RacePrep_Enabled;
            }
            else
            {
                RacePrepMode = CeTIMR_e_RacePrep_Off;
            }
            break;
        }
    }

    /* End of Chart: '<S65>/Race_Prep_Mode' */

    /* DataStoreWrite: '<S65>/Data Store Write' */
    TIMR_ac_DW.NeTIMR_e_RacePrepMode = RacePrepMode;

    /* Chart: '<S65>/Race_Prep_Type' incorporates:
     *  DataStoreRead: '<S65>/Data Store Read1'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Type */
    /* During: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Type */
    if (((uint32)TIMR_ac_DW.is_active_c46_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Type */
        TIMR_ac_DW.is_active_c46_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Subsystem/Race_Prep_Type */
        /* Transition: '<S470>:2' */
        if (TIMR_ac_DW.NeTIMR_b_RacePrepType)
        {
            /* Transition: '<S470>:23' */
            /* Transition: '<S470>:33' */
            TIMR_ac_DW.is_c46_TIMR_ac = TIMR_ac_IN_Track;

            /* Entry 'Track': '<S470>:3' */
            rtb_TmpSignalConversionAtRace_d = true;
        }
        else
        {
            /* Transition: '<S470>:22' */
            TIMR_ac_DW.is_c46_TIMR_ac = TIMR_ac_IN_Drag;

            /* Entry 'Drag': '<S470>:1' */
            rtb_TmpSignalConversionAtRace_d = false;
        }
    }
    else if (((uint32)TIMR_ac_DW.is_c46_TIMR_ac) == TIMR_ac_IN_Drag)
    {
        /* During 'Drag': '<S470>:1' */
        if (rtb_TmpSignalConversionAtRace_d)
        {
            /* Transition: '<S470>:6' */
            TIMR_ac_DW.is_c46_TIMR_ac = TIMR_ac_IN_Track;

            /* Entry 'Track': '<S470>:3' */
        }
    }
    else
    {
        /* During 'Track': '<S470>:3' */
        if (!rtb_TmpSignalConversionAtRace_d)
        {
            /* Transition: '<S470>:25' */
            TIMR_ac_DW.is_c46_TIMR_ac = TIMR_ac_IN_Drag;

            /* Entry 'Drag': '<S470>:1' */
        }
    }

    /* End of Chart: '<S65>/Race_Prep_Type' */

    /* DataStoreWrite: '<S65>/Data Store Write1' */
    TIMR_ac_DW.NeTIMR_b_RacePrepType = rtb_TmpSignalConversionAtRace_d;

    /* Outputs for Atomic SubSystem: '<S64>/EdgeFalling' */
    /* UnitDelay: '<S511>/Unit Delay' incorporates:
     *  UnitDelay: '<S463>/Unit Delay'
     */
    rtb_TmpSignalConversionAtRacePr = TIMR_ac_DW.UnitDelay_DSTATE_f3;

    /* Update for UnitDelay: '<S463>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_f3 = TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D;

    /* Outputs for Atomic SubSystem: '<S54>/Race_Mode_Arbitration' */
    /* Outputs for Atomic SubSystem: '<S61>/Race_Mode_Arbitration_LP1' */
    /* Chart: '<S108>/RaceMode_Arbitration' incorporates:
     *  SubSystem: '<S108>/EntryCondCheck'
     */
    /* Logic: '<S463>/OR1' incorporates:
     *  Logic: '<S113>/Logical Operator3'
     */
    rtb_Logical1 = !TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D;

    /* End of Outputs for SubSystem: '<S61>/Race_Mode_Arbitration_LP1' */
    /* End of Outputs for SubSystem: '<S54>/Race_Mode_Arbitration' */

    /* Outputs for Enabled SubSystem: '<S64>/LatchTrrnMd' incorporates:
     *  EnablePort: '<S464>/Enable'
     */
    /* Logic: '<S463>/AND' incorporates:
     *  Logic: '<S463>/OR1'
     */
    if (rtb_Logical1 && rtb_TmpSignalConversionAtRacePr)
    {
        /* DataTypeConversion: '<S464>/Data Type Conversion' incorporates:
         *  DataStoreWrite: '<S464>/Data Store Write'
         *  SignalConversion generated from: '<S22>/VeTMDR_e_TrrnMd'
         */
        TIMR_ac_DW.NeTIMR_e_TrrnMdSt = (uint16)rtb_TmpSignalConversionAtVeTMDR;
    }

    /* End of Logic: '<S463>/AND' */
    /* End of Outputs for SubSystem: '<S64>/LatchTrrnMd' */
    /* End of Outputs for SubSystem: '<S64>/EdgeFalling' */

    /* If: '<S58>/If' incorporates:
     *  Constant: '<S89>/Constant'
     *  Constant: '<S90>/Constant'
     *  Constant: '<S91>/Constant'
     *  Constant: '<S92>/Constant'
     *  Constant: '<S93>/Constant'
     *  Constant: '<S94>/Constant'
     *  DataTypeConversion: '<S541>/DataTypeConversion'
     *  Logic: '<S58>/Logical12'
     *  RelationalOperator: '<S58>/Relational Operator'
     *  RelationalOperator: '<S58>/Relational Operator1'
     *  RelationalOperator: '<S58>/Relational Operator2'
     *  RelationalOperator: '<S58>/Relational Operator3'
     *  RelationalOperator: '<S58>/Relational Operator4'
     *  RelationalOperator: '<S58>/Relational Operator5'
     *  Switch: '<S55>/Switch12'
     */
#if Rte_SysCon_Variant_TIMR_1

    /* Outputs for Function Call SubSystem: '<S22>/TIMI_TX_ovrrd' */
    if ((((((((uint32)rtb_Switch12) == CeTMDR_e_Auto) || (((uint32)rtb_Switch12)
             == CeTMDR_e_Sport)) || (((uint32)rtb_Switch12) == CeTMDR_e_Corsa)) ||
          (((uint32)rtb_Switch12) == CeTMDR_e_Custom)) || (((uint32)rtb_Switch12)
          == CeTMDR_e_Offroad)) || (((uint32)rtb_Switch12) == CeTMDR_e_ECO))
    {
        /* Outputs for IfAction SubSystem: '<S58>/Available_Modes' incorporates:
         *  ActionPort: '<S88>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/Variant Source' incorporates:
         *  Inport: '<S88>/In1'
         */
        TIMR_ac_B.VariantMerge_For_Variant_Source = rtb_Switch12;

        /* End of Outputs for SubSystem: '<S58>/Available_Modes' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S58>/Other_Values' incorporates:
         *  ActionPort: '<S95>/Action Port'
         */
        /* VariantMerge generated from: '<S54>/Variant Source' incorporates:
         *  Constant: '<S96>/Constant'
         *  SignalConversion generated from: '<S95>/Out1'
         */
        TIMR_ac_B.VariantMerge_For_Variant_Source = CeTMDR_e_NotDefine;

        /* End of Outputs for SubSystem: '<S58>/Other_Values' */
    }

    /* End of Outputs for SubSystem: '<S22>/TIMI_TX_ovrrd' */
#endif

    /* End of If: '<S58>/If' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Inport: '<Root>/VePLTR_t_HCPOffTime' */
    (void)Rte_Read_VePLTR_t_HCPOffTime_Value(&tmpRead);

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TIMR_MedTED'
     */
    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* Outputs for Atomic SubSystem: '<S97>/EdgeRising1' */
    /* Logic: '<S107>/OR1' incorporates:
     *  UnitDelay: '<S107>/Unit Delay'
     */
    rtb_TmpSignalConversionAtRacePr = !TIMR_ac_DW.UnitDelay_DSTATE_a;

    /* Update for UnitDelay: '<S107>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_a = TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D;

    /* Outputs for Atomic SubSystem: '<S97>/Count Down  Reset Enabled' */
    /* Switch: '<S106>/Switch1' incorporates:
     *  Constant: '<S106>/Constant Value'
     *  Logic: '<S106>/AND'
     *  Logic: '<S107>/AND'
     *  RelationalOperator: '<S106>/Greater  Than'
     *  Switch: '<S106>/Switch2'
     *  UnitDelay: '<S106>/Unit Delay'
     */
    if ((TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D) &&
            rtb_TmpSignalConversionAtRacePr)
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  Constant: '<S97>/Constant Value1'
         */
        rtb_Switch1_g1 = 3U;
    }
    else if ((TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D) && (((sint32)
               TIMR_ac_DW.UnitDelay_DSTATE_jk) > 0))
    {
        /* Switch: '<S106>/Switch2' incorporates:
         *  Constant: '<S106>/Constant Value1'
         *  Sum: '<S106>/Subtraction'
         *  Switch: '<S106>/Switch1'
         *  UnitDelay: '<S106>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_jk) - 1));
    }
    else
    {
        /* Switch: '<S106>/Switch1' incorporates:
         *  Switch: '<S106>/Switch2'
         *  UnitDelay: '<S106>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_jk;
    }

    /* End of Switch: '<S106>/Switch1' */
    /* End of Outputs for SubSystem: '<S97>/EdgeRising1' */

    /* Update for UnitDelay: '<S106>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_jk = rtb_Switch1_g1;

    /* End of Outputs for SubSystem: '<S97>/Count Down  Reset Enabled' */

    /* Logic: '<S59>/Logical1' incorporates:
     *  Constant: '<S102>/Calib'
     *  Constant: '<S105>/Calib'
     *  RelationalOperator: '<S59>/Comparison1'
     */
    rtb_TmpSignalConversionAtRacePr = ((tmpRead <= KeTIMR_t_ModeSoftLatchMaxTime)
        && (HeTIMR_b_EnaSoftLatch));

    /* Switch: '<S62>/Switch' incorporates:
     *  Constant: '<S435>/Calib'
     */
    if (KeTIMR_b_RadioFromBCM)
    {
        /* Switch: '<S62>/Switch' incorporates:
         *  Merge: '<Root>/VeTIMR_e_GlobalDrvMdRq_BCM_IRV_Merge'
         *  SignalConversion generated from: '<S22>/GlobalDrvMdRq_BCM'
         */
        rtb_Switch12 =
            Rte_IrvRead_TIMR_MedTED_VeTIMR_e_GlobalDrvMdRq_BCM_write_IRV();
    }
    else
    {
        /* Switch: '<S62>/Switch' incorporates:
         *  Merge: '<Root>/VeTIMR_e_GlobalDrvMdRq_IRV_Merge'
         *  SignalConversion generated from: '<S22>/GlobalDrvMdRq'
         */
        rtb_Switch12 = Rte_IrvRead_TIMR_MedTED_VeTIMR_e_GlobalDrvMdReq_write_IRV
            ();
    }

    /* End of Switch: '<S62>/Switch' */

    /* Chart: '<S62>/Chart1' incorporates:
     *  Constant: '<S436>/Calib'
     *  Constant: '<S437>/Calib'
     *  Constant: '<S438>/Calib'
     *  SignalConversion generated from: '<S22>/LaunchControl_HardBtn'
     *  Switch: '<S62>/Switch'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Radio_Input_Interpretation/Chart1 */
    /* During: TIMR_MedTED/Subsystem/Radio_Input_Interpretation/Chart1 */
    if (((uint32)TIMR_ac_DW.is_active_c10_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Radio_Input_Interpretation/Chart1 */
        TIMR_ac_DW.is_active_c10_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Radio_Input_Interpretation/Chart1 */
        /* Transition: '<S434>:2' */
        TIMR_ac_B.SourceButton = false;
        TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_None;

        /* Entry 'None': '<S434>:1' */
        TIMR_ac_B.Radio_Output = CeTMDR_e_NotDefine;
    }
    else
    {
        switch (TIMR_ac_DW.is_c10_TIMR_ac)
        {
          case TIMR_ac_IN_LaunchSwitch:
            /* During 'LaunchSwitch': '<S434>:36' */
            /* Transition: '<S434>:44' */
            if ((((uint32)rtb_TmpSignalConversionAtLaunch) ==
                    CeTIMR_e_NotActivated) && (TIMR_ac_DW.Cnt_l >= ((float32)
                    KeTIMR_t_MaxPressTimeSwitches)))
            {
                /* Transition: '<S434>:41' */
                TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_None;

                /* Entry 'None': '<S434>:1' */
                TIMR_ac_B.Radio_Output = CeTMDR_e_NotDefine;
            }
            else
            {
                /* Transition: '<S434>:52' */
                if ((((uint32)rtb_TmpSignalConversionAtLaunch) ==
                        CeTIMR_e_NotActivated) && (TIMR_ac_DW.Cnt_l < ((float32)
                        KeTIMR_t_MaxPressTimeSwitches)))
                {
                    /* Transition: '<S434>:47' */
                    TIMR_ac_DW.Cnt_l = 0.0F;
                    TIMR_ac_B.SourceButton = true;
                    TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_Selection;

                    /* Entry 'Selection': '<S434>:4' */
                    TIMR_ac_B.Radio_Output = TIMR_ac_DW.Radio_Select;
                }
                else
                {
                    /* Transition: '<S434>:53' */
                    /* Transition: '<S434>:45' */
                    TIMR_ac_DW.Cnt_l += KeTIMR_t_25p_dT;
                    TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_LaunchSwitch;

                    /* Entry 'LaunchSwitch': '<S434>:36' */
                    TIMR_ac_DW.Radio_Select = CeTMDR_e_Launch;
                }
            }
            break;

          case TIMR_ac_IN_None:
            /* During 'None': '<S434>:1' */
            if (((uint32)rtb_TmpSignalConversionAtLaunch) == CeTIMR_e_Activated)
            {
                /* Transition: '<S434>:37' */
                TIMR_ac_DW.Cnt_l = 0.0F;
                TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_LaunchSwitch;

                /* Entry 'LaunchSwitch': '<S434>:36' */
                TIMR_ac_DW.Radio_Select = CeTMDR_e_Launch;
            }
            else if (((uint32)rtb_Switch12) != CeTMDR_e_NotDefine)
            {
                /* Transition: '<S434>:11' */
                TIMR_ac_DW.Cnt_l = 0.0F;
                TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_Radio;

                /* Entry 'Radio': '<S434>:3' */
                TIMR_ac_DW.Radio_Select = rtb_Switch12;
            }
            else
            {
                TIMR_ac_B.Radio_Output = CeTMDR_e_NotDefine;
            }
            break;

          case TIMR_ac_IN_Radio:
            /* During 'Radio': '<S434>:3' */
            /* Transition: '<S434>:8' */
            if ((((uint32)rtb_Switch12) == CeTMDR_e_NotDefine) &&
                    (TIMR_ac_DW.Cnt_l >= ((float32)KeTIMR_t_MaxPressTimeSwitches)))
            {
                /* Transition: '<S434>:10' */
                TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_None;

                /* Entry 'None': '<S434>:1' */
                TIMR_ac_B.Radio_Output = CeTMDR_e_NotDefine;
            }
            else
            {
                /* Transition: '<S434>:33' */
                if ((((uint32)rtb_Switch12) == CeTMDR_e_NotDefine) &&
                        (TIMR_ac_DW.Cnt_l < ((float32)
                        KeTIMR_t_MaxPressTimeSwitches)))
                {
                    /* Transition: '<S434>:13' */
                    TIMR_ac_DW.Cnt_l = 0.0F;
                    TIMR_ac_B.SourceButton = false;
                    TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_Selection;

                    /* Entry 'Selection': '<S434>:4' */
                    TIMR_ac_B.Radio_Output = TIMR_ac_DW.Radio_Select;
                }
                else
                {
                    /* Transition: '<S434>:34' */
                    /* Transition: '<S434>:12' */
                    TIMR_ac_DW.Cnt_l += KeTIMR_t_25p_dT;
                    TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_Radio;

                    /* Entry 'Radio': '<S434>:3' */
                    TIMR_ac_DW.Radio_Select = rtb_Switch12;
                }
            }
            break;

          default:
            /* During 'Selection': '<S434>:4' */
            /* Transition: '<S434>:28' */
            if (TIMR_ac_DW.Cnt_l >= KeTIMR_t_TrrMdCycleTime)
            {
                /* Transition: '<S434>:14' */
                TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_None;

                /* Entry 'None': '<S434>:1' */
                TIMR_ac_B.Radio_Output = CeTMDR_e_NotDefine;
            }
            else
            {
                /* Transition: '<S434>:29' */
                TIMR_ac_DW.Cnt_l += KeTIMR_t_25p_dT;
                TIMR_ac_DW.is_c10_TIMR_ac = TIMR_ac_IN_Selection;

                /* Entry 'Selection': '<S434>:4' */
                TIMR_ac_B.Radio_Output = TIMR_ac_DW.Radio_Select;
            }
            break;
        }
    }

    /* End of Chart: '<S62>/Chart1' */

    /* SwitchCase: '<S439>/Switch Case' incorporates:
     *  DataTypeConversion: '<S439>/Data Type Conversion3'
     */
    switch (TIMR_ac_B.Radio_Output)
    {
      case 0:
        /* Outputs for IfAction SubSystem: '<S439>/None' incorporates:
         *  ActionPort: '<S444>/Action Port'
         */
        /* Outputs for Atomic SubSystem: '<S444>/EdgeFalling' */
        /* Logic: '<S454>/AND' incorporates:
         *  Logic: '<S454>/OR1'
         *  UnitDelay: '<S454>/Unit Delay'
         */
        rtb_AND_pf = ((!rtb_AND_h) && (TIMR_ac_DW.UnitDelay_DSTATE_hh));

        /* Update for UnitDelay: '<S454>/Unit Delay' */
        TIMR_ac_DW.UnitDelay_DSTATE_hh = rtb_AND_h;

        /* End of Outputs for SubSystem: '<S444>/EdgeFalling' */

        /* Switch: '<S444>/Switch' incorporates:
         *  Logic: '<S444>/AND'
         *  UnitDelay: '<S444>/Unit Delay4'
         */
        if ((TIMR_ac_DW.UnitDelay4_DSTATE_g) && rtb_AND_pf)
        {
            /* Merge: '<S439>/Merge' incorporates:
             *  UnitDelay: '<S444>/Unit Delay1'
             */
            rtb_Switch12 = TIMR_ac_DW.UnitDelay1_DSTATE_pz;
        }
        else
        {
            /* Merge: '<S439>/Merge' incorporates:
             *  Constant: '<S455>/Constant'
             */
            rtb_Switch12 = CeTMDR_e_NotDefine;
        }

        /* End of Switch: '<S444>/Switch' */

        /* Update for UnitDelay: '<S444>/Unit Delay4' incorporates:
         *  Inport: '<S444>/TerrainMode_BySwitches'
         *  RelationalOperator: '<S444>/Relational Operator'
         *  Switch: '<S57>/Switch'
         */
        TIMR_ac_DW.UnitDelay4_DSTATE_g = (rtb_TmpSignalConversionAtRadio_ !=
            rtb_TmpSignalConversionAtVeTMDR);

        /* Update for UnitDelay: '<S444>/Unit Delay1' incorporates:
         *  Inport: '<S444>/TerrainMode_BySwitches'
         *  Switch: '<S57>/Switch'
         */
        TIMR_ac_DW.UnitDelay1_DSTATE_pz = rtb_TmpSignalConversionAtRadio_;

        /* End of Outputs for SubSystem: '<S439>/None' */
        break;

      case 1:
        /* Outputs for IfAction SubSystem: '<S439>/Auto' incorporates:
         *  ActionPort: '<S440>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S450>/Constant'
         *  SignalConversion generated from: '<S440>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Auto;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S450>/Constant'
         *  SignalConversion generated from: '<S440>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Auto;

        /* End of Outputs for SubSystem: '<S439>/Auto' */
        break;

      case 2:
        /* Outputs for IfAction SubSystem: '<S439>/Snow' incorporates:
         *  ActionPort: '<S446>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S456>/Constant'
         *  SignalConversion generated from: '<S446>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Snow;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S456>/Constant'
         *  SignalConversion generated from: '<S446>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Snow;

        /* End of Outputs for SubSystem: '<S439>/Snow' */
        break;

      case 3:
        /* Outputs for IfAction SubSystem: '<S439>/Custom' incorporates:
         *  ActionPort: '<S441>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S451>/Constant'
         *  SignalConversion generated from: '<S441>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Custom;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S451>/Constant'
         *  SignalConversion generated from: '<S441>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Custom;

        /* End of Outputs for SubSystem: '<S439>/Custom' */
        break;

      case 4:
        /* Outputs for IfAction SubSystem: '<S439>/Drag' incorporates:
         *  ActionPort: '<S442>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S452>/Constant'
         *  SignalConversion generated from: '<S442>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Drag;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S452>/Constant'
         *  SignalConversion generated from: '<S442>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Drag;

        /* End of Outputs for SubSystem: '<S439>/Drag' */
        break;

      case 5:
        /* Outputs for IfAction SubSystem: '<S439>/Track' incorporates:
         *  ActionPort: '<S448>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S458>/Constant'
         *  SignalConversion generated from: '<S448>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Track;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S458>/Constant'
         *  SignalConversion generated from: '<S448>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Track;

        /* End of Outputs for SubSystem: '<S439>/Track' */
        break;

      case 6:
        /* Outputs for IfAction SubSystem: '<S439>/Sport' incorporates:
         *  ActionPort: '<S447>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S457>/Constant'
         *  SignalConversion generated from: '<S447>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Sport;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S457>/Constant'
         *  SignalConversion generated from: '<S447>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Sport;

        /* End of Outputs for SubSystem: '<S439>/Sport' */
        break;

      case 7:
        /* Outputs for IfAction SubSystem: '<S439>/Eco' incorporates:
         *  ActionPort: '<S443>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S453>/Constant'
         *  SignalConversion generated from: '<S443>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_ECO;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S453>/Constant'
         *  SignalConversion generated from: '<S443>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_ECO;

        /* End of Outputs for SubSystem: '<S439>/Eco' */
        break;

      case 8:
        /* Outputs for IfAction SubSystem: '<S439>/Valet' incorporates:
         *  ActionPort: '<S449>/Action Port'
         */
        /* Merge: '<S439>/Merge' incorporates:
         *  Constant: '<S459>/Constant'
         *  SignalConversion generated from: '<S449>/ModeRequest'
         */
        rtb_Switch12 = CeTMDR_e_Valet;

        /* Merge: '<S439>/Merge1' incorporates:
         *  Constant: '<S459>/Constant'
         *  SignalConversion generated from: '<S449>/TrrnMdDesiredSt'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_Valet;

        /* End of Outputs for SubSystem: '<S439>/Valet' */
        break;

      default:
        /* Outputs for IfAction SubSystem: '<S439>/RaceModes' incorporates:
         *  ActionPort: '<S445>/Action Port'
         */
        /* Merge: '<S439>/Merge1' incorporates:
         *  Inport: '<S445>/TrrnMdSt'
         *  SignalConversion generated from: '<S22>/VeTMDR_e_TrrnMd'
         */
        rtb_TmpSignalConversionAtRadio_ = rtb_TmpSignalConversionAtVeTMDR;

        /* Merge: '<S439>/Merge' incorporates:
         *  Inport: '<S445>/Radio_Output'
         */
        rtb_Switch12 = TIMR_ac_B.Radio_Output;

        /* End of Outputs for SubSystem: '<S439>/RaceModes' */
        break;
    }

    /* End of SwitchCase: '<S439>/Switch Case' */

    /* Switch: '<S59>/Switch1' */
    if (TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D)
    {
        /* Outputs for Atomic SubSystem: '<S97>/Count Down  Reset Enabled' */
        /* Switch: '<S59>/Switch3' incorporates:
         *  Constant: '<S106>/Constant Value2'
         *  RelationalOperator: '<S106>/Greater  Than1'
         */
        if (((sint32)rtb_Switch1_g1) > 0)
        {
            /* DataTypeConversion: '<S98>/DataTypeConversion' incorporates:
             *  DataStoreRead: '<S59>/Data Store Read'
             */
            rtb_TmpSignalConversionAtRadio_ = (TeTMDR_e_TrrnMd)
                TIMR_ac_DW.NeTIMR_e_TrrnMdSt;

            /* Switch: '<S59>/Switch2' incorporates:
             *  Constant: '<S100>/Constant'
             *  Constant: '<S103>/Calib'
             *  Constant: '<S99>/Constant'
             *  DataTypeConversion: '<S98>/DataTypeConversion'
             *  Logic: '<S59>/AND'
             *  Logic: '<S59>/OR'
             *  RelationalOperator: '<S59>/Relational Operator'
             *  RelationalOperator: '<S59>/Relational Operator1'
             */
            if ((rtb_TmpSignalConversionAtRacePr || (((uint32)
                    rtb_TmpSignalConversionAtRadio_) == CeTMDR_e_Valet)) ||
                    ((((uint32)rtb_TmpSignalConversionAtRadio_) == CeTMDR_e_ECO)
                     && (KeTIMR_b_HoldEcoMode)))
            {
            }
            else
            {
                /* Switch: '<S59>/Switch1' incorporates:
                 *  Constant: '<S104>/Calib'
                 *  Switch: '<S59>/Switch3'
                 */
                rtb_TmpSignalConversionAtRadio_ = KeTIMR_e_InitTrrnMd;
            }

            /* End of Switch: '<S59>/Switch2' */
        }

        /* End of Switch: '<S59>/Switch3' */
        /* End of Outputs for SubSystem: '<S97>/Count Down  Reset Enabled' */
    }
    else
    {
        /* Switch: '<S59>/Switch1' incorporates:
         *  Constant: '<S101>/Constant'
         */
        rtb_TmpSignalConversionAtRadio_ = CeTMDR_e_NotDefine;
    }

    /* End of Switch: '<S59>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S54>/Race_Mode_Arbitration' */
#if Rte_SysCon_Variant_TIMR_3

    /* Outputs for Atomic SubSystem: '<S61>/Race_Mode_Arbitration_LP3' */
    /* RelationalOperator: '<S319>/Relational Operator2' incorporates:
     *  RelationalOperator: '<S319>/Relational Operator1'
     *  RelationalOperator: '<S319>/Relational Operator3'
     *  SignalConversion generated from: '<S22>/VeDMIB_e_PadLvrSts'
     */
    tmp = TIMR_ac_B.TmpSignalConversionAtVeDMIB_e_P;

    /* Outputs for Atomic SubSystem: '<S319>/Counter Reset Enabled ' */
    /* Switch: '<S372>/Switch' incorporates:
     *  Constant: '<S374>/Constant'
     *  Logic: '<S319>/Logical Operator2'
     *  Logic: '<S319>/Logical Operator3'
     *  RelationalOperator: '<S319>/Relational Operator2'
     *  Switch: '<S372>/Switch2'
     *  UnitDelay: '<S319>/Unit Delay1'
     */
    if (((uint32)tmp) != CeDMIR_e_UpShift)
    {
        /* Switch: '<S372>/Switch' incorporates:
         *  Constant: '<S372>/Constant Value2'
         */
        rtb_Switch1_g1 = 0U;
    }
    else if (!TIMR_ac_DW.UnitDelay1_DSTATE_p)
    {
        /* Switch: '<S372>/Switch2' incorporates:
         *  Constant: '<S372>/Constant Value1'
         *  Sum: '<S372>/Subtraction'
         *  Switch: '<S372>/Switch'
         *  UnitDelay: '<S372>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)(((uint32)TIMR_ac_DW.UnitDelay_DSTATE_k) + 1U);
    }
    else
    {
        /* Switch: '<S372>/Switch' incorporates:
         *  Switch: '<S372>/Switch2'
         *  UnitDelay: '<S372>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_k;
    }

    /* End of Switch: '<S372>/Switch' */

    /* Update for UnitDelay: '<S372>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_k = rtb_Switch1_g1;

    /* End of Outputs for SubSystem: '<S319>/Counter Reset Enabled ' */

    /* Update for UnitDelay: '<S319>/Unit Delay1' incorporates:
     *  Constant: '<S376>/Calib'
     *  RelationalOperator: '<S319>/Comparison2'
     */
    TIMR_ac_DW.UnitDelay1_DSTATE_p = (rtb_Switch1_g1 >=
        KeTIMR_Cnt_LongPaddleActivation);

    /* Logic: '<S319>/Logical Operator4' incorporates:
     *  Constant: '<S373>/Constant'
     *  Constant: '<S375>/Constant'
     *  RelationalOperator: '<S319>/Relational Operator1'
     *  RelationalOperator: '<S319>/Relational Operator3'
     */
    rtb_AND_pf = ((((uint32)tmp) == CeDMIR_e_DownShift) || (CeDMIR_e_BothPrs ==
                   ((uint32)tmp)));

    /* RelationalOperator: '<S321>/Relational Operator3' incorporates:
     *  UnitDelay: '<S320>/Unit Delay'
     */
    rtb_AND_h = TIMR_ac_DW.UnitDelay_DSTATE_n0;

    /* Chart: '<S109>/Race_Prep_MaxBoost' incorporates:
     *  Constant: '<S318>/Constant'
     *  Constant: '<S327>/Calib'
     *  Constant: '<S332>/Calib'
     *  Constant: '<S334>/Calib'
     *  Constant: '<S335>/Calib'
     *  Logic: '<S109>/Logical Operator'
     *  RelationalOperator: '<S109>/Relational Operator'
     *  RelationalOperator: '<S109>/Relational Operator1'
     *  SignalConversion generated from: '<S22>/VeTIMR_e_MaxBoostReq'
     *  UnitDelay: '<S109>/Unit Delay'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/Race_Prep_MaxBoost */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/Race_Prep_MaxBoost */
    if (((uint32)TIMR_ac_DW.is_active_c9_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/Race_Prep_MaxBoost */
        TIMR_ac_DW.is_active_c9_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/Race_Prep_MaxBoost */
        /* Transition: '<S325>:9' */
        TIMR_ac_B.Race_Prep = false;
        TIMR_ac_B.PopUp18 = false;
        TIMR_ac_B.PopUp19 = false;
        TIMR_ac_B.PopUp20 = false;
        TIMR_ac_B.MaxBoost_Acceleration_Enabled_S = CeTIMR_e_Boost_Off;
        TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Off;
    }
    else
    {
        guard1 = false;
        switch (TIMR_ac_DW.is_c9_TIMR_ac)
        {
          case TIMR_ac_IN_Acc_Off:
            /* During 'Acc_Off': '<S325>:8' */
            if ((CeTIMR_e_Boost_On != ((uint32)TIMR_ac_DW.UnitDelay_DSTATE_gi)) &&
                (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                    CeTIMR_e_Boost_On))
            {
                /* Transition: '<S325>:11' */
                /* Transition: '<S325>:18' */
                if (TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct <
                        KeTIMR_Pct_MinMaxBoost_Soc)
                {
                    /* Transition: '<S325>:20' */
                    /* Transition: '<S325>:67' */
                    TIMR_ac_B.PopUp18 = true;

                    /* Transition: '<S325>:22' */
                    TIMR_ac_B.MaxBoost_Acceleration_Enabled_S =
                        CeTIMR_e_Boost_Reserved2;
                    TIMR_ac_DW.timer = 0U;
                    TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Reserved2;

                    /* Entry Internal 'Acc_Reserved2': '<S325>:23' */
                    /* Transition: '<S325>:25' */
                    TIMR_ac_DW.timer = (uint16)((sint32)(((sint32)
                        TIMR_ac_DW.timer) + 1));
                }
                else
                {
                    /* Transition: '<S325>:35' */
                    TIMR_ac_B.MaxBoost_Acceleration_Enabled_S =
                        CeTIMR_e_Boost_On;
                    if ((TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H >
                            KeTIMR_T_MaxMaxBoost_BatTemp) ||
                            (TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H <
                             KeTIMR_T_MinMaxBoost_BatTemp))
                    {
                        /* Transition: '<S325>:37' */
                        /* Transition: '<S325>:39' */
                        TIMR_ac_B.Race_Prep = true;
                        TIMR_ac_DW.timer = 0U;
                        TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Race;

                        /* Entry Internal 'Acc_Race': '<S325>:38' */
                        /* Transition: '<S325>:46' */
                        TIMR_ac_DW.timer = (uint16)((sint32)(((sint32)
                            TIMR_ac_DW.timer) + 1));
                    }
                    else
                    {
                        /* Transition: '<S325>:41' */
                        TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_On;
                    }
                }
            }
            break;

          case TIMR_ac_IN_Acc_On:
            /* During 'Acc_On': '<S325>:42' */
            if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                    CeTIMR_e_Boost_Off)
            {
                /* Transition: '<S325>:44' */
                /* Transition: '<S325>:45' */
                TIMR_ac_B.MaxBoost_Acceleration_Enabled_S = CeTIMR_e_Boost_Off;
                TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Off;
            }
            break;

          case TIMR_ac_IN_Acc_Race:
            /* During 'Acc_Race': '<S325>:38' */
            if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                    CeTIMR_e_Boost_Off)
            {
                /* Transition: '<S325>:49' */
                /* Transition: '<S325>:50' */
                /* Transition: '<S325>:45' */
                TIMR_ac_B.MaxBoost_Acceleration_Enabled_S = CeTIMR_e_Boost_Off;
                TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Off;
            }
            else if (TIMR_ac_DW.timer > KeTIMR_Cnt_RacePrepTime)
            {
                /* Transition: '<S325>:52' */
                /* Transition: '<S325>:60' */
                TIMR_ac_B.Race_Prep = false;
                if (TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct <
                        KeTIMR_Pct_MinMaxBoost_Soc)
                {
                    /* Transition: '<S325>:62' */
                    /* Transition: '<S325>:64' */
                    TIMR_ac_B.PopUp18 = true;
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S325>:69' */
                    if (TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H >
                            KeTIMR_T_MaxMaxBoost_BatTemp)
                    {
                        /* Transition: '<S325>:71' */
                        /* Transition: '<S325>:73' */
                        TIMR_ac_B.PopUp19 = true;

                        /* Transition: '<S325>:74' */
                        guard1 = true;
                    }
                    else
                    {
                        /* Transition: '<S325>:76' */
                        if (TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H <
                                KeTIMR_T_MinMaxBoost_BatTemp)
                        {
                            /* Transition: '<S325>:78' */
                            /* Transition: '<S325>:80' */
                            TIMR_ac_B.PopUp20 = true;

                            /* Transition: '<S325>:81' */
                            /* Transition: '<S325>:74' */
                            guard1 = true;
                        }
                        else
                        {
                            /* Transition: '<S325>:84' */
                            /* Transition: '<S325>:86' */
                            /* Transition: '<S325>:88' */
                            /* Transition: '<S325>:89' */
                            TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_On;
                        }
                    }
                }
            }
            else
            {
                /* Transition: '<S325>:58' */
                TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Race;

                /* Entry Internal 'Acc_Race': '<S325>:38' */
                /* Transition: '<S325>:46' */
                TIMR_ac_DW.timer = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer)
                    + 1));
            }
            break;

          default:
            /* During 'Acc_Reserved2': '<S325>:23' */
            if ((((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                    CeTIMR_e_Boost_Off) || (TIMR_ac_DW.timer >
                    KeTIMR_Cnt_MaxBoost_Unavailable_Time))
            {
                /* Transition: '<S325>:27' */
                /* Transition: '<S325>:29' */
                TIMR_ac_B.PopUp18 = false;
                TIMR_ac_B.PopUp19 = false;
                TIMR_ac_B.PopUp20 = false;

                /* Transition: '<S325>:31' */
                /* Transition: '<S325>:32' */
                /* Transition: '<S325>:50' */
                /* Transition: '<S325>:45' */
                TIMR_ac_B.MaxBoost_Acceleration_Enabled_S = CeTIMR_e_Boost_Off;
                TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Off;
            }
            else
            {
                /* Transition: '<S325>:33' */
                TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Reserved2;

                /* Entry Internal 'Acc_Reserved2': '<S325>:23' */
                /* Transition: '<S325>:25' */
                TIMR_ac_DW.timer = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer)
                    + 1));
            }
            break;
        }

        if (guard1)
        {
            /* Transition: '<S325>:82' */
            /* Transition: '<S325>:22' */
            TIMR_ac_B.MaxBoost_Acceleration_Enabled_S = CeTIMR_e_Boost_Reserved2;
            TIMR_ac_DW.timer = 0U;
            TIMR_ac_DW.is_c9_TIMR_ac = TIMR_ac_IN_Acc_Reserved2;

            /* Entry Internal 'Acc_Reserved2': '<S325>:23' */
            /* Transition: '<S325>:25' */
            TIMR_ac_DW.timer = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer) + 1));
        }
    }

    /* End of Chart: '<S109>/Race_Prep_MaxBoost' */

    /* RelationalOperator: '<S320>/Relational Operator2' incorporates:
     *  Constant: '<S379>/Constant'
     */
    rtb_RelationalOperator2_bk = (CeTIMR_e_Boost_On == ((uint32)
        TIMR_ac_B.MaxBoost_Acceleration_Enabled_S));

    /* Outputs for Atomic SubSystem: '<S320>/EdgeFalling' */
    /* Logic: '<S377>/AND' incorporates:
     *  Logic: '<S377>/OR1'
     *  UnitDelay: '<S377>/Unit Delay'
     */
    rtb_AND_gv = ((!rtb_RelationalOperator2_bk) &&
                  (TIMR_ac_DW.UnitDelay_DSTATE_if));

    /* Update for UnitDelay: '<S377>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_if = rtb_RelationalOperator2_bk;

    /* End of Outputs for SubSystem: '<S320>/EdgeFalling' */

    /* Logic: '<S320>/Logical Operator6' */
    rtb_AND_gv = (rtb_AND_h && rtb_AND_gv);

    /* RelationalOperator: '<S320>/Relational Operator1' incorporates:
     *  RelationalOperator: '<S320>/Relational Operator3'
     *  RelationalOperator: '<S320>/Relational Operator4'
     *  UnitDelay: '<S109>/Unit Delay1'
     */
    rtb_Comparison1_o_tmp = TIMR_ac_DW.UnitDelay1_DSTATE_pk;

    /* Outputs for Atomic SubSystem: '<S320>/Signal Latch On With Reset' */
    /* Logic: '<S382>/OR1' incorporates:
     *  Constant: '<S378>/Constant'
     *  Constant: '<S380>/Constant'
     *  Constant: '<S381>/Constant'
     *  Logic: '<S320>/Logical Operator4'
     *  Logic: '<S382>/NOT'
     *  Logic: '<S382>/OR'
     *  RelationalOperator: '<S320>/Relational Operator1'
     *  RelationalOperator: '<S320>/Relational Operator3'
     *  RelationalOperator: '<S320>/Relational Operator4'
     *  UnitDelay: '<S382>/Unit Delay'
     */
    rtb_Comparison1_o = ((((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_DRIVER_RQ)
                         || ((((((uint32)rtb_Comparison1_o_tmp) != CeTIMR_e_IDLE)
                            && (((uint32)rtb_Comparison1_o_tmp) !=
        CeTIMR_e_NOT_ALLOWED)) && (!rtb_AND_gv)) &&
                          (TIMR_ac_DW.UnitDelay_DSTATE_ju)));

    /* Update for UnitDelay: '<S382>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_ju = rtb_Comparison1_o;

    /* End of Outputs for SubSystem: '<S320>/Signal Latch On With Reset' */

    /* Switch: '<S320>/Switch' */
    if (rtb_Comparison1_o)
    {
        /* Switch: '<S320>/Switch' */
        TIMR_ac_B.Switch = rtb_AND_h;
    }
    else
    {
        /* Switch: '<S320>/Switch' incorporates:
         *  Logic: '<S320>/Logical Operator1'
         *  Logic: '<S320>/Logical Operator2'
         *  Logic: '<S320>/Logical Operator3'
         *  Logic: '<S320>/Logical Operator5'
         */
        TIMR_ac_B.Switch = ((!TIMR_ac_B.TmpSignalConversionAtVePRXR_b_L) ||
                            ((!TIMR_ac_B.Race_Prep) &&
                             rtb_RelationalOperator2_bk));
    }

    /* End of Switch: '<S320>/Switch' */

    /* Inport: '<Root>/VePRXR_y_SuspensionConfigurationFront' */
    (void)Rte_Read_VePRXR_y_SuspensionConfigurationFront_Value(&tmpRead_8);

    /* Inport: '<Root>/VePRXR_y_SuspensionConfigurationRear' */
    (void)Rte_Read_VePRXR_y_SuspensionConfigurationRear_Value(&tmpRead_7);

    /* Logic: '<S109>/Logical Operator16' incorporates:
     *  Constant: '<S331>/Calib'
     *  RelationalOperator: '<S109>/Relational Operator22'
     *  RelationalOperator: '<S109>/Relational Operator23'
     */
    VeTIMR_b_LaunchSuspension = ((tmpRead_8 == KeTIMR_y_AirSuspensionSkyhook) &&
        (KeTIMR_y_AirSuspensionSkyhook == tmpRead_7));

    /* Chart: '<S109>/RaceMode_Arbitration' incorporates:
     *  Inport: '<Root>/VePLTR_Pct_Slope'
     *  Inport: '<Root>/VePLTR_a_LongAccel_ORC'
     *  Inport: '<Root>/VePLTR_b_LongAccelFailSts_ORC'
     *  Inport: '<Root>/VePLTR_b_Odometer_KmFA'
     *  Inport: '<Root>/VePLTR_b_Slope_FA'
     *  SignalConversion generated from: '<S22>/VeTIMR_e_MaxBoostReq'
     *  Switch: '<S317>/Switch'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceMode_Arbitration */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceMode_Arbitration */
    if (((uint32)TIMR_ac_DW.is_active_c11_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceMode_Arbitration */
        TIMR_ac_DW.is_active_c11_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/RaceMode_Arbitration */
        /* Entry Internal 'Launch_Arbitration': '<S324>:3133' */
        /* Transition: '<S324>:2' */
        TIMR_ac_DW.timer_a = 0U;
        VeTIMR_e_PopUpTextStateflow = CeTIMR_e_NONE;
        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;

        /* VariantMerge generated from: '<S61>/RaceOptionsSts' */
        TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

        /* VariantMerge generated from: '<S61>/RaceModeSts' */
        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;
        TIMR_ac_DW.is_Launch_Arbitration = TIMR_IN_No_RaceMode_NOT_ALLOWED;

        /* Entry Internal 'Lnch_MaxBoost_ArbSts': '<S324>:3134' */
        /* Entry Internal 'Lnch_Arbitration': '<S324>:3137' */
        /* Transition: '<S324>:3203' */
        if (TIMR_ac_B.TmpSignalConversionAtVePRXR_b_L)
        {
            /* Transition: '<S324>:3205' */
            /* Transition: '<S324>:3210' */
            TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_NOT_ALLOWED;
        }
        else
        {
            /* Transition: '<S324>:3208' */
            TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_IDLE;

            /* Transition: '<S324>:3211' */
        }

        /* Transition: '<S324>:3207' */
        TIMR_ac_DW.is_Lnch_Arbitration = TIMR_ac_IN_Lnch_NotActive;

        /* Entry Internal 'Max_Boost_Arbitration': '<S324>:3139' */
        /* Transition: '<S324>:3152' */
        if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                CeTIMR_e_Boost_Off)
        {
            /* Transition: '<S324>:3151' */
            /* Transition: '<S324>:3160' */
            TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_IDLE;
        }
        else
        {
            /* Transition: '<S324>:3157' */
            TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_NOT_ALLOWED;

            /* Transition: '<S324>:3159' */
        }

        /* Transition: '<S324>:3161' */
        TIMR_ac_DW.is_Max_Boost_Arbitration = TIMR_ac_IN_MaxBoost_NotActive;
    }
    else
    {
        (void)Rte_Read_VePLTR_b_Odometer_KmFA_Value(&rtb_LogicalOperator9);
        (void)Rte_Read_VePLTR_b_LongAccelFailSts_ORC_Value(&rtb_OR1_ll);
        (void)Rte_Read_VePLTR_b_Slope_FA_Value(&rtb_AND_en);
        (void)Rte_Read_VePLTR_a_LongAccel_ORC_Value(&tmpRead_6);
        (void)Rte_Read_VePLTR_Pct_Slope_Value(&tmpRead_5);

        /* Update for UnitDelay: '<S319>/Unit Delay1' incorporates:
         *  Inport: '<Root>/VePLTR_Pct_Slope'
         *  Inport: '<Root>/VePLTR_a_LongAccel_ORC'
         *  Inport: '<Root>/VePLTR_b_LongAccelFailSts_ORC'
         *  Inport: '<Root>/VePLTR_b_Odometer_KmFA'
         *  Inport: '<Root>/VePLTR_b_Slope_FA'
         */
        TIMR_ac_Launch_Arbitration(&TIMR_ac_DW.UnitDelay1_DSTATE_p, &rtb_AND_pf,
            &rtb_AND_gv);

        /* During 'Lnch_MaxBoost_ArbSts': '<S324>:3134' */
        /* During 'Lnch_Arbitration': '<S324>:3137' */
        if (((uint32)TIMR_ac_DW.is_Lnch_Arbitration) == TIMR_ac_IN_Lnch_Active)
        {
            /* During 'Lnch_Active': '<S324>:3141' */
            rtb_Comparison1_o_tmp = TIMR_ac_B.Acceleration_Sts;
            if ((((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_NOT_ALLOWED) ||
                    (((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_IDLE))
            {
                /* Transition: '<S324>:3245' */
                /* Transition: '<S324>:3243' */
                TIMR_ac_B.LnchCtrl_Sts = TIMR_ac_B.Acceleration_Sts;
                TIMR_ac_DW.is_Lnch_Arbitration = TIMR_ac_IN_Lnch_NotActive;
            }
            else
            {
                /* Transition: '<S324>:3242' */
                TIMR_ac_B.LnchCtrl_Sts = TIMR_ac_B.Acceleration_Sts;
                TIMR_ac_DW.is_Lnch_Arbitration = TIMR_ac_IN_Lnch_Active;
            }
        }
        else
        {
            /* During 'Lnch_NotActive': '<S324>:3140' */
            if (!TIMR_ac_B.TmpSignalConversionAtVePRXR_b_L)
            {
                /* Transition: '<S324>:3217' */
                /* Transition: '<S324>:3213' */
                TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_IDLE;

                /* Transition: '<S324>:3215' */
                TIMR_ac_DW.is_Lnch_Arbitration = TIMR_ac_IN_Lnch_NotActive;
            }
            else
            {
                rtb_Comparison1_o_tmp = TIMR_ac_B.Acceleration_Sts;
                if ((!TIMR_ac_B.Switch) && (((uint32)rtb_Comparison1_o_tmp) ==
                                            CeTIMR_e_DRIVER_RQ))
                {
                    /* Transition: '<S324>:3229' */
                    /* Transition: '<S324>:3220' */
                    TIMR_ac_B.LnchCtrl_Sts = TIMR_ac_B.Acceleration_Sts;
                    TIMR_ac_DW.is_Lnch_Arbitration = TIMR_ac_IN_Lnch_Active;
                }
                else
                {
                    /* Transition: '<S324>:3225' */
                    if ((((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_NOT_ALLOWED)
                        || (((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_IDLE))
                    {
                        /* Transition: '<S324>:3222' */
                        /* Transition: '<S324>:3237' */
                        TIMR_ac_B.LnchCtrl_Sts = TIMR_ac_B.Acceleration_Sts;
                    }
                    else
                    {
                        /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
                        /* Transition: '<S324>:3232' */
                        /* Event: '<S324>:83' */
                        TIMR_ac_EntryCondCheck
                            (TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                             TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.Switch,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                             TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                             tmpRead_5, tmpRead_6,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                             VeTIMR_b_LaunchSuspension,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                             rtb_AND_en,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                             rtb_OR1_ll,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                             rtb_LogicalOperator9,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                        /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */
                        if (((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE)
                        {
                            /* Transition: '<S324>:3228' */
                            /* Transition: '<S324>:3224' */
                            TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_IDLE;
                        }
                        else
                        {
                            /* Transition: '<S324>:3235' */
                            TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_NOT_ALLOWED;

                            /* Transition: '<S324>:3239' */
                        }

                        /* Transition: '<S324>:3236' */
                    }

                    /* Transition: '<S324>:3219' */
                    /* Transition: '<S324>:3233' */
                    /* Transition: '<S324>:3241' */
                    TIMR_ac_DW.is_Lnch_Arbitration = TIMR_ac_IN_Lnch_NotActive;
                }
            }
        }

        /* During 'Max_Boost_Arbitration': '<S324>:3139' */
        if (((uint32)TIMR_ac_DW.is_Max_Boost_Arbitration) ==
                TIMR_ac_IN_MaxBoost_Active)
        {
            /* During 'MaxBoost_Active': '<S324>:3144' */
            if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                    CeTIMR_e_Boost_Off)
            {
                /* Transition: '<S324>:3197' */
                /* Transition: '<S324>:3198' */
                TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_IDLE;
                TIMR_ac_DW.is_Max_Boost_Arbitration =
                    TIMR_ac_IN_MaxBoost_NotActive;
            }
            else
            {
                rtb_Comparison1_o_tmp = TIMR_ac_B.Acceleration_Sts;
                if ((((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_NOT_ALLOWED) ||
                    (((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_IDLE))
                {
                    /* Transition: '<S324>:3200' */
                    /* Transition: '<S324>:3201' */
                    TIMR_ac_B.MaxBoost_AccelStat = TIMR_ac_B.Acceleration_Sts;
                    TIMR_ac_DW.is_Max_Boost_Arbitration =
                        TIMR_ac_IN_MaxBoost_NotActive;
                }
                else
                {
                    /* Transition: '<S324>:3202' */
                    TIMR_ac_B.MaxBoost_AccelStat = TIMR_ac_B.Acceleration_Sts;
                    TIMR_ac_DW.is_Max_Boost_Arbitration =
                        TIMR_ac_IN_MaxBoost_Active;
                }
            }
        }
        else
        {
            /* During 'MaxBoost_NotActive': '<S324>:3145' */
            if (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                    CeTIMR_e_Boost_Off)
            {
                /* Transition: '<S324>:3172' */
                /* Transition: '<S324>:3174' */
                TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_IDLE;

                /* Transition: '<S324>:3175' */
                TIMR_ac_DW.is_Max_Boost_Arbitration =
                    TIMR_ac_IN_MaxBoost_NotActive;
            }
            else
            {
                rtb_Comparison1_o_tmp = TIMR_ac_B.Acceleration_Sts;
                if ((TIMR_ac_B.Switch) && (((uint32)rtb_Comparison1_o_tmp) ==
                                           CeTIMR_e_DRIVER_RQ))
                {
                    /* Transition: '<S324>:3167' */
                    /* Transition: '<S324>:3168' */
                    TIMR_ac_B.MaxBoost_AccelStat = TIMR_ac_B.Acceleration_Sts;
                    TIMR_ac_DW.is_Max_Boost_Arbitration =
                        TIMR_ac_IN_MaxBoost_Active;
                }
                else
                {
                    /* Transition: '<S324>:3180' */
                    if ((((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_NOT_ALLOWED)
                        || (((uint32)rtb_Comparison1_o_tmp) == CeTIMR_e_IDLE))
                    {
                        /* Transition: '<S324>:3170' */
                        /* Transition: '<S324>:3177' */
                        TIMR_ac_B.MaxBoost_AccelStat =
                            TIMR_ac_B.Acceleration_Sts;
                    }
                    else
                    {
                        /* Outputs for Function Call SubSystem: '<S109>/EntryCondCheck' */
                        /* Transition: '<S324>:3182' */
                        /* Event: '<S324>:83' */
                        TIMR_ac_EntryCondCheck
                            (TIMR_ac_B.TmpSignalConversionAtVePLTR_mil,
                             TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.Switch,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_S,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_F,
                             TIMR_ac_B.TmpSignalConversionAtVeTRGR_e_C,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_phi,
                             tmpRead_5, tmpRead_6,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_a_L,
                             VeTIMR_b_LaunchSuspension,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_m,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_a,
                             rtb_AND_en,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__al,
                             rtb_OR1_ll,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_g,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_f,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__af,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_b,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__et,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__er,
                             rtb_LogicalOperator9,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_P);

                        /* End of Outputs for SubSystem: '<S109>/EntryCondCheck' */
                        if (((uint32)VeTIMR_e_ScreenTextEntry) == CeTIMR_e_NONE)
                        {
                            /* Transition: '<S324>:3184' */
                            /* Transition: '<S324>:3186' */
                            TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_IDLE;
                        }
                        else
                        {
                            /* Transition: '<S324>:3188' */
                            TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_NOT_ALLOWED;

                            /* Transition: '<S324>:3189' */
                        }

                        /* Transition: '<S324>:3190' */
                    }

                    /* Transition: '<S324>:3192' */
                    /* Transition: '<S324>:3194' */
                    /* Transition: '<S324>:3195' */
                    TIMR_ac_DW.is_Max_Boost_Arbitration =
                        TIMR_ac_IN_MaxBoost_NotActive;
                }
            }
        }
    }

    /* End of Chart: '<S109>/RaceMode_Arbitration' */

    /* Logic: '<S316>/Logical Operator9' incorporates:
     *  Constant: '<S342>/Constant'
     *  Constant: '<S343>/Constant'
     *  RelationalOperator: '<S316>/Relational Operator7'
     *  RelationalOperator: '<S316>/Relational Operator8'
     *  UnitDelay: '<S316>/Unit Delay4'
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    rtb_LogicalOperator9 = ((CeTIMR_e_RaceMode_Cancelled == ((uint32)
        TIMR_ac_B.RaceModeSts)) && (((uint32)TIMR_ac_DW.UnitDelay4_DSTATE_p) ==
        CeTIMR_e_RaceMode_Active));

    /* Outputs for Atomic SubSystem: '<S316>/Count Down Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S340>/EdgeRising_F2T' */
    /* Logic: '<S349>/OR1' incorporates:
     *  UnitDelay: '<S349>/Unit Delay'
     */
    rtb_OR1_ll = !TIMR_ac_DW.UnitDelay_DSTATE_bi;

    /* Update for UnitDelay: '<S349>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_bi = rtb_LogicalOperator9;

    /* Switch: '<S340>/Switch1' incorporates:
     *  Constant: '<S340>/Constant Value'
     *  Logic: '<S349>/AND'
     *  RelationalOperator: '<S340>/Greater  Than'
     *  Switch: '<S340>/Switch2'
     *  UnitDelay: '<S340>/Unit Delay'
     */
    if (rtb_LogicalOperator9 && rtb_OR1_ll)
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Constant: '<S346>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_Cnt_DeadPedalTimer;
    }
    else if (((sint32)TIMR_ac_DW.UnitDelay_DSTATE_j1) > 0)
    {
        /* Switch: '<S340>/Switch2' incorporates:
         *  Constant: '<S340>/Constant Value1'
         *  Sum: '<S340>/Subtraction'
         *  Switch: '<S340>/Switch1'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_j1) - 1));
    }
    else
    {
        /* Switch: '<S340>/Switch1' incorporates:
         *  Switch: '<S340>/Switch2'
         *  UnitDelay: '<S340>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_j1;
    }

    /* End of Switch: '<S340>/Switch1' */
    /* End of Outputs for SubSystem: '<S340>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S340>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_j1 = rtb_Switch1_g1;

    /* Outputs for Atomic SubSystem: '<S316>/Signal Latch On With Reset' */
    /* Logic: '<S347>/OR1' incorporates:
     *  Abs: '<S316>/Abs'
     *  Abs: '<S316>/Abs1'
     *  Constant: '<S340>/Constant Value2'
     *  Constant: '<S344>/Calib'
     *  Logic: '<S316>/Logical Operator5'
     *  Logic: '<S316>/Logical Operator6'
     *  Logic: '<S316>/Logical Operator7'
     *  Logic: '<S347>/NOT'
     *  Logic: '<S347>/OR'
     *  RelationalOperator: '<S316>/Relational Operator5'
     *  RelationalOperator: '<S316>/Relational Operator6'
     *  RelationalOperator: '<S340>/Greater  Than1'
     *  Sum: '<S316>/Sum'
     *  Sum: '<S316>/Sum2'
     *  UnitDelay: '<S347>/Unit Delay'
     */
    rtb_LogicalOperator9 = (rtb_LogicalOperator9 || ((((fabsf
        (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b -
         TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L) >= KeTIMR_v_RaceEndSpd) ||
        (fabsf(TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f -
               TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R) >= KeTIMR_v_RaceEndSpd))
        && (((sint32)rtb_Switch1_g1) > 0)) && (TIMR_ac_DW.UnitDelay_DSTATE_ooq)));

    /* End of Outputs for SubSystem: '<S316>/Count Down Reset Trigger Enabled' */

    /* Update for UnitDelay: '<S347>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_ooq = rtb_LogicalOperator9;

    /* End of Outputs for SubSystem: '<S316>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S316>/EdgeRising' */
    /* Logic: '<S341>/AND' incorporates:
     *  Logic: '<S341>/OR1'
     *  UnitDelay: '<S341>/Unit Delay'
     */
    rtb_OR1_ll = (rtb_LogicalOperator9 && (!TIMR_ac_DW.UnitDelay_DSTATE_mp));

    /* Update for UnitDelay: '<S341>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_mp = rtb_LogicalOperator9;

    /* End of Outputs for SubSystem: '<S316>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S316>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S348>/EdgeFalling' */
    /* Logic: '<S350>/AND' incorporates:
     *  Logic: '<S350>/OR1'
     *  UnitDelay: '<S350>/Unit Delay'
     */
    rtb_AND_en = ((!rtb_OR1_ll) && (TIMR_ac_DW.UnitDelay_DSTATE_bn));

    /* Update for UnitDelay: '<S350>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_bn = rtb_OR1_ll;

    /* End of Outputs for SubSystem: '<S348>/EdgeFalling' */

    /* Switch: '<S348>/Switch' */
    if (rtb_AND_en)
    {
        /* Switch: '<S348>/Switch' incorporates:
         *  Constant: '<S345>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_Cnt_MinDeadPedalTime;
    }
    else
    {
        /* Sum: '<S348>/Summation' incorporates:
         *  Constant: '<S348>/Constant Value'
         *  UnitDelay: '<S348>/Unit Delay'
         */
        i = ((sint32)TIMR_ac_DW.UnitDelay_DSTATE_c) - 1;
        if ((((sint32)TIMR_ac_DW.UnitDelay_DSTATE_c) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S348>/Switch' incorporates:
         *  Sum: '<S348>/Summation'
         */
        rtb_Switch1_g1 = (uint16)i;
    }

    /* End of Switch: '<S348>/Switch' */

    /* Update for UnitDelay: '<S348>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_c = rtb_Switch1_g1;

    /* VariantMerge generated from: '<S61>/Race_Dead_Pedal_Request' incorporates:
     *  Constant: '<S348>/Constant Value2'
     *  Logic: '<S316>/Logical Operator10'
     *  Logic: '<S348>/AND'
     *  RelationalOperator: '<S348>/Greater  Than'
     */
    TIMR_ac_B.VariantMergeForOutportRace_Dead = ((rtb_OR1_ll || (((sint32)
        rtb_Switch1_g1) > 0)) || rtb_LogicalOperator9);

    /* End of Outputs for SubSystem: '<S316>/Turn Off Delay Sample' */

    /* Switch: '<S321>/Switch5' */
    if (TIMR_ac_B.Switch)
    {
        /* Switch: '<S321>/Switch5' */
        rtb_Switch5 = VeTIMR_e_PopUpTextStateflow;
    }
    else
    {
        /* Switch: '<S321>/Switch5' incorporates:
         *  Constant: '<S393>/Constant'
         */
        rtb_Switch5 = CeTIMR_e_NONE;
    }

    /* End of Switch: '<S321>/Switch5' */

    /* RelationalOperator: '<S321>/Relational Operator3' incorporates:
     *  RelationalOperator: '<S321>/Relational Operator1'
     *  Switch: '<S321>/Switch5'
     *  UnitDelay: '<S321>/Unit Delay1'
     */
    rtb_AND_h = (rtb_Switch5 != TIMR_ac_DW.UnitDelay1_DSTATE_c);

    /* Logic: '<S397>/Logical Operator13' incorporates:
     *  Constant: '<S399>/Constant'
     *  Constant: '<S400>/Constant'
     *  Constant: '<S401>/Constant'
     *  Constant: '<S402>/Constant'
     *  Constant: '<S403>/Constant'
     *  RelationalOperator: '<S321>/Relational Operator1'
     *  RelationalOperator: '<S397>/Relational Operator1'
     *  RelationalOperator: '<S397>/Relational Operator2'
     *  RelationalOperator: '<S397>/Relational Operator3'
     *  RelationalOperator: '<S397>/Relational Operator4'
     *  RelationalOperator: '<S397>/Relational Operator6'
     *  Switch: '<S321>/Switch5'
     */
    VeTIMR_b_PopUpTextEventMaxBoost = (((((((uint32)rtb_Switch5) ==
        CeTIMR_e_TxtMsg_9) || (((uint32)rtb_Switch5) == CeTIMR_e_TxtMsg_10)) ||
        (((uint32)rtb_Switch5) == CeTIMR_e_TxtMsg_11)) || (((uint32)rtb_Switch5)
        == CeTIMR_e_TxtMsg_12)) || (((uint32)rtb_Switch5) == CeTIMR_e_TxtMsg_14));

    /* Logic: '<S321>/Logical Operator1' incorporates:
     *  Constant: '<S391>/Constant'
     *  Logic: '<S321>/Logical Operator3'
     *  RelationalOperator: '<S321>/Relational Operator1'
     *  RelationalOperator: '<S321>/Relational Operator8'
     *  Switch: '<S321>/Switch5'
     */
    rtb_LogicalOperator9 = ((rtb_AND_h && (((uint32)rtb_Switch5) !=
        CeTIMR_e_NONE)) && (!VeTIMR_b_PopUpTextEventMaxBoost));

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising1' */
    /* Logic: '<S385>/OR1' incorporates:
     *  UnitDelay: '<S385>/Unit Delay'
     */
    rtb_OR1_ll = !TIMR_ac_DW.UnitDelay_DSTATE_etm;

    /* Update for UnitDelay: '<S385>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_etm = TIMR_ac_B.PopUp18;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising2' */
    /* Logic: '<S386>/OR1' incorporates:
     *  UnitDelay: '<S386>/Unit Delay'
     */
    rtb_AND_en = !TIMR_ac_DW.UnitDelay_DSTATE_fi;

    /* Update for UnitDelay: '<S386>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_fi = TIMR_ac_B.PopUp19;

    /* End of Outputs for SubSystem: '<S321>/EdgeRising2' */

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising3' */
    /* Logic: '<S387>/OR1' incorporates:
     *  UnitDelay: '<S387>/Unit Delay'
     */
    rtb_AND_pf = !TIMR_ac_DW.UnitDelay_DSTATE_n1;

    /* Update for UnitDelay: '<S387>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_n1 = TIMR_ac_B.PopUp20;

    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising1' */
    /* Outputs for Atomic SubSystem: '<S321>/EdgeRising2' */
    /* Logic: '<S321>/Logical Operator' incorporates:
     *  Logic: '<S385>/AND'
     *  Logic: '<S386>/AND'
     *  Logic: '<S387>/AND'
     */
    VeTIMR_b_PopUpTextPerMaxBoost_Trigger = (((rtb_LogicalOperator9 ||
        ((TIMR_ac_B.PopUp18) && rtb_OR1_ll)) || ((TIMR_ac_B.PopUp19) &&
        rtb_AND_en)) || ((TIMR_ac_B.PopUp20) && rtb_AND_pf));

    /* End of Outputs for SubSystem: '<S321>/EdgeRising2' */
    /* End of Outputs for SubSystem: '<S321>/EdgeRising1' */
    /* End of Outputs for SubSystem: '<S321>/EdgeRising3' */

    /* Switch: '<S321>/Switch3' */
    if (VeTIMR_b_PopUpTextPerMaxBoost_Trigger)
    {
        /* Switch: '<S321>/Switch4' incorporates:
         *  Switch: '<S321>/Switch1'
         *  Switch: '<S321>/Switch2'
         */
        if (rtb_LogicalOperator9)
        {
            /* Switch: '<S321>/Switch3' incorporates:
             *  Switch: '<S321>/Switch4'
             *  Switch: '<S321>/Switch5'
             */
            VeTIMR_e_PopUpTextEntryMaxBoost = rtb_Switch5;
        }
        else if (TIMR_ac_B.PopUp18)
        {
            /* Switch: '<S321>/Switch2' incorporates:
             *  Constant: '<S389>/Constant'
             *  Switch: '<S321>/Switch3'
             */
            VeTIMR_e_PopUpTextEntryMaxBoost = CeTIMR_e_TxtMsg_18;
        }
        else if (TIMR_ac_B.PopUp19)
        {
            /* Switch: '<S321>/Switch1' incorporates:
             *  Constant: '<S388>/Constant'
             *  Switch: '<S321>/Switch2'
             *  Switch: '<S321>/Switch3'
             */
            VeTIMR_e_PopUpTextEntryMaxBoost = CeTIMR_e_TxtMsg_19;
        }
        else
        {
            /* Switch: '<S321>/Switch3' incorporates:
             *  Constant: '<S390>/Constant'
             *  Switch: '<S321>/Switch1'
             *  Switch: '<S321>/Switch2'
             */
            VeTIMR_e_PopUpTextEntryMaxBoost = CeTIMR_e_TxtMsg_20;
        }

        /* End of Switch: '<S321>/Switch4' */
    }
    else
    {
        /* Switch: '<S321>/Switch3' incorporates:
         *  Switch: '<S321>/Switch5'
         */
        VeTIMR_e_PopUpTextEntryMaxBoost = rtb_Switch5;
    }

    /* End of Switch: '<S321>/Switch3' */

    /* Logic: '<S321>/Logical Operator4' */
    VeTIMR_b_PopUpTextEventMaxBoost_Trigger = ((VeTIMR_b_PopUpTextEventMaxBoost)
        && rtb_AND_h);

    /* RelationalOperator: '<S321>/Relational Operator2' incorporates:
     *  Constant: '<S392>/Constant'
     *  SignalConversion generated from: '<S22>/VeTIMR_e_MaxBoostReq'
     */
    rtb_LogicalOperator9 = (((uint32)TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M) ==
                            CeTIMR_e_Boost_Off);

    /* Chart: '<S321>/Chart' incorporates:
     *  Switch: '<S321>/Switch3'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart */
    if (((uint32)TIMR_ac_DW.is_active_c15_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart */
        TIMR_ac_DW.is_active_c15_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart */
        /* Transition: '<S383>:8' */
        TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_NoPopUp;

        /* Entry Internal 'NoPopUp': '<S383>:9' */
        /* Transition: '<S383>:11' */
        TIMR_ac_B.PopUp_Out_d = CeTIMR_e_NONE;
    }
    else
    {
        guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        switch (TIMR_ac_DW.is_c15_TIMR_ac)
        {
          case TIMR_ac_IN_NoPopUp:
            /* During 'NoPopUp': '<S383>:9' */
            if (VeTIMR_b_PopUpTextPerMaxBoost_Trigger)
            {
                /* Transition: '<S383>:14' */
                /* Transition: '<S383>:18' */
                TIMR_ac_DW.timer_n = 0U;
                TIMR_ac_B.PopUp_Out_d = VeTIMR_e_PopUpTextEntryMaxBoost;

                /* Transition: '<S383>:20' */
                TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_PopUpPer;

                /* Entry Internal 'PopUpPer': '<S383>:15' */
                /* Transition: '<S383>:37' */
                TIMR_ac_DW.timer_n = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_n) + 1));
            }
            else
            {
                if (VeTIMR_b_PopUpTextEventMaxBoost)
                {
                    /* Transition: '<S383>:22' */
                    TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_PopUpEvent;

                    /* Entry Internal 'PopUpEvent': '<S383>:23' */
                    /* Transition: '<S383>:27' */
                    TIMR_ac_B.PopUp_Out_d = VeTIMR_e_PopUpTextEntryMaxBoost;
                }
            }
            break;

          case TIMR_ac_IN_PopUpEvent:
            /* During 'PopUpEvent': '<S383>:23' */
            if (rtb_LogicalOperator9)
            {
                /* Transition: '<S383>:74' */
                guard4 = true;
            }
            else if (VeTIMR_b_PopUpTextPerMaxBoost_Trigger)
            {
                /* Transition: '<S383>:30' */
                /* Transition: '<S383>:31' */
                /* Transition: '<S383>:18' */
                TIMR_ac_DW.timer_n = 0U;
                TIMR_ac_B.PopUp_Out_d = VeTIMR_e_PopUpTextEntryMaxBoost;

                /* Transition: '<S383>:20' */
                TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_PopUpPer;

                /* Entry Internal 'PopUpPer': '<S383>:15' */
                /* Transition: '<S383>:37' */
                TIMR_ac_DW.timer_n = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_n) + 1));
            }
            else if (((uint32)VeTIMR_e_PopUpTextEntryMaxBoost) == CeTIMR_e_NONE)
            {
                /* Transition: '<S383>:33' */
                /* Transition: '<S383>:35' */
                /* Transition: '<S383>:52' */
                /* Transition: '<S383>:54' */
                /* Transition: '<S383>:55' */
                guard4 = true;
            }
            else
            {
                /* Transition: '<S383>:70' */
                TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_PopUpEvent;

                /* Entry Internal 'PopUpEvent': '<S383>:23' */
                /* Transition: '<S383>:27' */
                TIMR_ac_B.PopUp_Out_d = VeTIMR_e_PopUpTextEntryMaxBoost;
            }
            break;

          default:
            /* During 'PopUpPer': '<S383>:15' */
            if (rtb_LogicalOperator9)
            {
                /* Transition: '<S383>:76' */
                /* Transition: '<S383>:77' */
                guard1 = true;
            }
            else if (VeTIMR_b_PopUpTextEventMaxBoost_Trigger)
            {
                /* Transition: '<S383>:39' */
                /* Transition: '<S383>:41' */
                /* Transition: '<S383>:42' */
                guard2 = true;
            }
            else if (VeTIMR_b_PopUpTextPerMaxBoost_Trigger)
            {
                /* Transition: '<S383>:44' */
                /* Transition: '<S383>:49' */
                TIMR_ac_DW.timer_n = 0U;
                TIMR_ac_B.PopUp_Out_d = VeTIMR_e_PopUpTextEntryMaxBoost;

                /* Transition: '<S383>:20' */
                guard3 = true;
            }
            else if (TIMR_ac_DW.timer_n > KeTIMR_Cnt_PopUp)
            {
                /* Transition: '<S383>:50' */
                /* Transition: '<S383>:59' */
                if (VeTIMR_b_PopUpTextEventMaxBoost)
                {
                    /* Transition: '<S383>:61' */
                    /* Transition: '<S383>:63' */
                    /* Transition: '<S383>:64' */
                    guard2 = true;
                }
                else
                {
                    /* Transition: '<S383>:66' */
                    /* Transition: '<S383>:68' */
                    /* Transition: '<S383>:52' */
                    /* Transition: '<S383>:54' */
                    /* Transition: '<S383>:55' */
                    guard1 = true;
                }
            }
            else
            {
                /* Transition: '<S383>:69' */
                guard3 = true;
            }
            break;
        }

        if (guard4)
        {
            TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_NoPopUp;

            /* Entry Internal 'NoPopUp': '<S383>:9' */
            /* Transition: '<S383>:11' */
            TIMR_ac_B.PopUp_Out_d = CeTIMR_e_NONE;
        }

        if (guard3)
        {
            TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_PopUpPer;

            /* Entry Internal 'PopUpPer': '<S383>:15' */
            /* Transition: '<S383>:37' */
            TIMR_ac_DW.timer_n = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_n)
                + 1));
        }

        if (guard2)
        {
            TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_PopUpEvent;

            /* Entry Internal 'PopUpEvent': '<S383>:23' */
            /* Transition: '<S383>:27' */
            TIMR_ac_B.PopUp_Out_d = VeTIMR_e_PopUpTextEntryMaxBoost;
        }

        if (guard1)
        {
            TIMR_ac_DW.is_c15_TIMR_ac = TIMR_ac_IN_NoPopUp;

            /* Entry Internal 'NoPopUp': '<S383>:9' */
            /* Transition: '<S383>:11' */
            TIMR_ac_B.PopUp_Out_d = CeTIMR_e_NONE;
        }
    }

    /* End of Chart: '<S321>/Chart' */

    /* Switch: '<S321>/Switch6' incorporates:
     *  Logic: '<S321>/Logical Operator2'
     */
    if (!TIMR_ac_B.Switch)
    {
        /* Switch: '<S321>/Switch6' */
        rtb_Switch6_n = VeTIMR_e_PopUpTextStateflow;
    }
    else
    {
        /* Switch: '<S321>/Switch6' incorporates:
         *  Constant: '<S394>/Constant'
         */
        rtb_Switch6_n = CeTIMR_e_NONE;
    }

    /* End of Switch: '<S321>/Switch6' */

    /* Logic: '<S398>/Logical Operator13' incorporates:
     *  Constant: '<S404>/Constant'
     *  Constant: '<S405>/Constant'
     *  Constant: '<S406>/Constant'
     *  Constant: '<S407>/Constant'
     *  Constant: '<S408>/Constant'
     *  RelationalOperator: '<S398>/Relational Operator1'
     *  RelationalOperator: '<S398>/Relational Operator2'
     *  RelationalOperator: '<S398>/Relational Operator3'
     *  RelationalOperator: '<S398>/Relational Operator4'
     *  RelationalOperator: '<S398>/Relational Operator6'
     */
    VeTIMR_b_PopUpTextEventLaunch = (((((((uint32)rtb_Switch6_n) ==
        CeTIMR_e_TxtMsg_9) || (((uint32)rtb_Switch6_n) == CeTIMR_e_TxtMsg_10)) ||
        (((uint32)rtb_Switch6_n) == CeTIMR_e_TxtMsg_11)) || (((uint32)
        rtb_Switch6_n) == CeTIMR_e_TxtMsg_12)) || (((uint32)rtb_Switch6_n) ==
        CeTIMR_e_TxtMsg_14));

    /* RelationalOperator: '<S321>/Relational Operator3' incorporates:
     *  UnitDelay: '<S321>/Unit Delay2'
     */
    rtb_AND_h = (rtb_Switch6_n != TIMR_ac_DW.UnitDelay2_DSTATE_e);

    /* Logic: '<S321>/Logical Operator5' */
    VeTIMR_b_PopUpTextEventLaunch_Trigger = ((VeTIMR_b_PopUpTextEventLaunch) &&
        rtb_AND_h);

    /* Logic: '<S321>/Logical Operator6' incorporates:
     *  Constant: '<S395>/Constant'
     *  Logic: '<S321>/Logical Operator7'
     *  RelationalOperator: '<S321>/Relational Operator4'
     */
    VeTIMR_b_PopUpTextPerLaunch_Trigger = ((rtb_AND_h && (((uint32)rtb_Switch6_n)
        != CeTIMR_e_NONE)) && (!VeTIMR_b_PopUpTextEventLaunch));

    /* Chart: '<S321>/Chart1' incorporates:
     *  Switch: '<S321>/Switch6'
     */
    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart1 */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart1 */
    if (((uint32)TIMR_ac_DW.is_active_c16_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart1 */
        TIMR_ac_DW.is_active_c16_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP3/PopUpOverride/Chart1 */
        /* Transition: '<S384>:8' */
        TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_NoPopUp;

        /* Entry Internal 'NoPopUp': '<S384>:9' */
        /* Transition: '<S384>:11' */
        TIMR_ac_B.PopUp_Out = CeTIMR_e_NONE;
    }
    else
    {
        guard1 = false;
        guard2 = false;
        switch (TIMR_ac_DW.is_c16_TIMR_ac)
        {
          case TIMR_ac_IN_NoPopUp:
            /* During 'NoPopUp': '<S384>:9' */
            if (VeTIMR_b_PopUpTextPerLaunch_Trigger)
            {
                /* Transition: '<S384>:14' */
                /* Transition: '<S384>:18' */
                TIMR_ac_DW.timer_h = 0U;
                TIMR_ac_B.PopUp_Out = rtb_Switch6_n;

                /* Transition: '<S384>:20' */
                TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_PopUpPer;

                /* Entry Internal 'PopUpPer': '<S384>:15' */
                /* Transition: '<S384>:37' */
                TIMR_ac_DW.timer_h = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_h) + 1));
            }
            else
            {
                if (VeTIMR_b_PopUpTextEventLaunch)
                {
                    /* Transition: '<S384>:22' */
                    TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_PopUpEvent;

                    /* Entry Internal 'PopUpEvent': '<S384>:23' */
                    /* Transition: '<S384>:27' */
                    TIMR_ac_B.PopUp_Out = rtb_Switch6_n;
                }
            }
            break;

          case TIMR_ac_IN_PopUpEvent:
            /* During 'PopUpEvent': '<S384>:23' */
            if (VeTIMR_b_PopUpTextPerLaunch_Trigger)
            {
                /* Transition: '<S384>:30' */
                /* Transition: '<S384>:31' */
                /* Transition: '<S384>:18' */
                TIMR_ac_DW.timer_h = 0U;
                TIMR_ac_B.PopUp_Out = rtb_Switch6_n;

                /* Transition: '<S384>:20' */
                TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_PopUpPer;

                /* Entry Internal 'PopUpPer': '<S384>:15' */
                /* Transition: '<S384>:37' */
                TIMR_ac_DW.timer_h = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_h) + 1));
            }
            else if (((uint32)rtb_Switch6_n) == CeTIMR_e_NONE)
            {
                /* Transition: '<S384>:33' */
                /* Transition: '<S384>:35' */
                /* Transition: '<S384>:52' */
                /* Transition: '<S384>:54' */
                /* Transition: '<S384>:55' */
                TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_NoPopUp;

                /* Entry Internal 'NoPopUp': '<S384>:9' */
                /* Transition: '<S384>:11' */
                TIMR_ac_B.PopUp_Out = CeTIMR_e_NONE;
            }
            else
            {
                /* Transition: '<S384>:70' */
                TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_PopUpEvent;

                /* Entry Internal 'PopUpEvent': '<S384>:23' */
                /* Transition: '<S384>:27' */
                TIMR_ac_B.PopUp_Out = rtb_Switch6_n;
            }
            break;

          default:
            /* During 'PopUpPer': '<S384>:15' */
            if (VeTIMR_b_PopUpTextEventLaunch_Trigger)
            {
                /* Transition: '<S384>:39' */
                /* Transition: '<S384>:41' */
                /* Transition: '<S384>:42' */
                guard1 = true;
            }
            else if (VeTIMR_b_PopUpTextPerLaunch_Trigger)
            {
                /* Transition: '<S384>:44' */
                /* Transition: '<S384>:49' */
                TIMR_ac_DW.timer_h = 0U;
                TIMR_ac_B.PopUp_Out = rtb_Switch6_n;

                /* Transition: '<S384>:20' */
                guard2 = true;
            }
            else if (TIMR_ac_DW.timer_h > KeTIMR_Cnt_PopUp)
            {
                /* Transition: '<S384>:50' */
                /* Transition: '<S384>:59' */
                if (VeTIMR_b_PopUpTextEventLaunch)
                {
                    /* Transition: '<S384>:61' */
                    /* Transition: '<S384>:63' */
                    /* Transition: '<S384>:64' */
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S384>:66' */
                    /* Transition: '<S384>:68' */
                    /* Transition: '<S384>:52' */
                    /* Transition: '<S384>:54' */
                    /* Transition: '<S384>:55' */
                    TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_NoPopUp;

                    /* Entry Internal 'NoPopUp': '<S384>:9' */
                    /* Transition: '<S384>:11' */
                    TIMR_ac_B.PopUp_Out = CeTIMR_e_NONE;
                }
            }
            else
            {
                /* Transition: '<S384>:69' */
                guard2 = true;
            }
            break;
        }

        if (guard2)
        {
            TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_PopUpPer;

            /* Entry Internal 'PopUpPer': '<S384>:15' */
            /* Transition: '<S384>:37' */
            TIMR_ac_DW.timer_h = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_h)
                + 1));
        }

        if (guard1)
        {
            TIMR_ac_DW.is_c16_TIMR_ac = TIMR_ac_IN_PopUpEvent;

            /* Entry Internal 'PopUpEvent': '<S384>:23' */
            /* Transition: '<S384>:27' */
            TIMR_ac_B.PopUp_Out = rtb_Switch6_n;
        }
    }

    /* End of Chart: '<S321>/Chart1' */

    /* Update for UnitDelay: '<S320>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_n0 = TIMR_ac_B.Switch;

    /* Update for UnitDelay: '<S109>/Unit Delay' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMR_e_MaxBoostReq'
     */
    TIMR_ac_DW.UnitDelay_DSTATE_gi = TIMR_ac_B.TmpSignalConversionAtVeTIMR_e_M;

    /* Update for UnitDelay: '<S109>/Unit Delay1' */
    TIMR_ac_DW.UnitDelay1_DSTATE_pk = TIMR_ac_B.Acceleration_Sts;

    /* Update for UnitDelay: '<S316>/Unit Delay4' incorporates:
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    TIMR_ac_DW.UnitDelay4_DSTATE_p = TIMR_ac_B.RaceModeSts;

    /* Update for UnitDelay: '<S321>/Unit Delay1' incorporates:
     *  Switch: '<S321>/Switch5'
     */
    TIMR_ac_DW.UnitDelay1_DSTATE_c = rtb_Switch5;

    /* Update for UnitDelay: '<S321>/Unit Delay2' incorporates:
     *  Switch: '<S321>/Switch6'
     */
    TIMR_ac_DW.UnitDelay2_DSTATE_e = rtb_Switch6_n;

    /* End of Outputs for SubSystem: '<S61>/Race_Mode_Arbitration_LP3' */
#else

    /* Outputs for Atomic SubSystem: '<S61>/Race_Mode_Arbitration_LP1' */
    /* Inport: '<Root>/VePRXR_y_VehicleLineConfiguration' */
    (void)Rte_Read_VePRXR_y_VehicleLineConfiguration_Value(&tmpRead_2);

    /* RelationalOperator: '<S108>/Relational Operator' incorporates:
     *  Constant: '<S136>/Calib'
     */
    VePRXR_b_VehicleLineConfigurationLB = (tmpRead_2 == KeTIMR_y_LBSelect);

    /* Switch: '<S302>/Switch4' incorporates:
     *  Constant: '<S306>/Calib'
     *  Logic: '<S302>/Logical Operator'
     *  Logic: '<S302>/Logical Operator5'
     */
    if (((rtb_TmpSignalConversionAtCustom && rtb_TmpSignalConversionAtTrack_) &&
         (VePRXR_b_VehicleLineConfigurationLB)) || (KeTIMR_b_ModeRequestOvrd))
    {
        /* Switch: '<S302>/Switch4' incorporates:
         *  Merge: '<S439>/Merge'
         */
        VeTIMR_e_ModeReqOvrd = rtb_Switch12;
    }
    else
    {
        /* Switch: '<S302>/Switch4' incorporates:
         *  Constant: '<S305>/Constant'
         */
        VeTIMR_e_ModeReqOvrd = CeTMDR_e_NotDefine;
    }

    /* End of Switch: '<S302>/Switch4' */

    /* Logic: '<S215>/Logical Operator13' incorporates:
     *  Constant: '<S307>/Constant'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  Switch: '<S302>/Switch4'
     */
    rtb_TmpSignalConversionAtCustom = (((uint32)VeTIMR_e_ModeReqOvrd) ==
        CeTMDR_e_Launch);

    /* RelationalOperator: '<S303>/Relational Operator2' incorporates:
     *  Constant: '<S308>/Constant'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  Switch: '<S302>/Switch4'
     */
    rtb_LogicalOperator9 = (((uint32)VeTIMR_e_ModeReqOvrd) == CeTMDR_e_LineLock);

    /* RelationalOperator: '<S303>/Relational Operator3' incorporates:
     *  Constant: '<S309>/Constant'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  Switch: '<S302>/Switch4'
     */
    rtb_OR1_ll = (((uint32)VeTIMR_e_ModeReqOvrd) == CeTMDR_e_Donut);

    /* RelationalOperator: '<S303>/Relational Operator4' incorporates:
     *  Constant: '<S310>/Constant'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  Switch: '<S302>/Switch4'
     */
    rtb_AND_en = (((uint32)VeTIMR_e_ModeReqOvrd) == CeTMDR_e_Drift);

    /* Switch: '<S303>/Switch4' incorporates:
     *  Switch: '<S303>/Switch1'
     *  Switch: '<S303>/Switch2'
     *  Switch: '<S303>/Switch3'
     */
    if (rtb_TmpSignalConversionAtCustom)
    {
        /* Switch: '<S303>/Switch4' incorporates:
         *  Constant: '<S311>/Constant'
         */
        rtb_Switch4_c = CeTIMR_e_LaunchControl;
    }
    else if (rtb_LogicalOperator9)
    {
        /* Switch: '<S303>/Switch3' incorporates:
         *  Constant: '<S312>/Constant'
         *  Switch: '<S303>/Switch4'
         */
        rtb_Switch4_c = CeTIMR_e_LineLock;
    }
    else if (rtb_OR1_ll)
    {
        /* Switch: '<S303>/Switch1' incorporates:
         *  Constant: '<S313>/Constant'
         *  Switch: '<S303>/Switch3'
         *  Switch: '<S303>/Switch4'
         */
        rtb_Switch4_c = CeTIMR_e_Donut;
    }
    else if (rtb_AND_en)
    {
        /* Switch: '<S303>/Switch2' incorporates:
         *  Constant: '<S314>/Constant'
         *  Switch: '<S303>/Switch1'
         *  Switch: '<S303>/Switch3'
         *  Switch: '<S303>/Switch4'
         */
        rtb_Switch4_c = CeTIMR_e_Drift;
    }
    else
    {
        /* Switch: '<S303>/Switch4' incorporates:
         *  Constant: '<S315>/Constant'
         *  Switch: '<S303>/Switch1'
         *  Switch: '<S303>/Switch2'
         *  Switch: '<S303>/Switch3'
         */
        rtb_Switch4_c = CeTIMR_e_NoOptionSelected;
    }

    /* End of Switch: '<S303>/Switch4' */

    /* RelationalOperator: '<S137>/Relational Operator1' incorporates:
     *  RelationalOperator: '<S137>/Relational Operator5'
     *  UnitDelay: '<S108>/Unit Delay2'
     */
    rtb_TmpSignalConversionAtTrac_0 = TIMR_ac_DW.UnitDelay2_DSTATE_i;

    /* RelationalOperator: '<S137>/Relational Operator1' */
    rtb_TmpSignalConversionAtTrack_ = (rtb_Switch4_c !=
        rtb_TmpSignalConversionAtTrac_0);

    /* RelationalOperator: '<S301>/Relational Operator2' incorporates:
     *  Constant: '<S304>/Constant'
     */
    VeTIMR_b_InhCond = (((uint32)rtb_TmpSignalConversionAtVeTMDR) ==
                        CeTMDR_e_Valet);

    /* Logic: '<S215>/Logical Operator13' incorporates:
     *  Logic: '<S303>/Logical Operator'
     */
    rtb_TmpSignalConversionAtCustom = (((rtb_TmpSignalConversionAtCustom ||
        rtb_LogicalOperator9) || rtb_OR1_ll) || rtb_AND_en);

    /* Switch: '<S137>/Switch2' */
    if (rtb_TmpSignalConversionAtCustom)
    {
        /* Switch: '<S137>/Switch1' incorporates:
         *  Logic: '<S137>/Logical Operator3'
         *  Logic: '<S137>/Logical Operator5'
         *  Logic: '<S137>/Logical Operator6'
         *  Logic: '<S137>/Logical Operator9'
         */
        if (rtb_TmpSignalConversionAtTrack_ && ((!VeTIMR_b_InhCond) ||
                (!TIMR_ac_B.SourceButton)))
        {
            /* Switch: '<S137>/Switch2' */
            VeTIMR_e_RaceReqSing = rtb_Switch4_c;
        }
        else
        {
            /* Switch: '<S137>/Switch2' incorporates:
             *  Constant: '<S300>/Constant'
             */
            VeTIMR_e_RaceReqSing = CeTIMR_e_NoOptionSelected;
        }

        /* End of Switch: '<S137>/Switch1' */
    }
    else
    {
        /* Switch: '<S137>/Switch2' incorporates:
         *  Constant: '<S299>/Constant'
         */
        VeTIMR_e_RaceReqSing = CeTIMR_e_NoOptionSelected;
    }

    /* End of Switch: '<S137>/Switch2' */

    /* RelationalOperator: '<S137>/Relational Operator4' incorporates:
     *  Constant: '<S299>/Constant'
     *  Switch: '<S137>/Switch2'
     */
    rtb_OR1_ll = (((uint32)VeTIMR_e_RaceReqSing) != CeTIMR_e_NoOptionSelected);

    /* UnitDelay: '<S108>/Unit Delay' */
    TIMR_ac_B.UnitDelay = TIMR_ac_DW.UnitDelay_DSTATE_io;

    /* RelationalOperator: '<S127>/Relational Operator4' incorporates:
     *  RelationalOperator: '<S127>/Relational Operator2'
     *  RelationalOperator: '<S127>/Relational Operator3'
     *  RelationalOperator: '<S137>/Relational Operator3'
     *  RelationalOperator: '<S137>/Relational Operator6'
     *  UnitDelay: '<S108>/Unit Delay'
     */
    rtb_LogicalOperator9_tmp = TIMR_ac_B.UnitDelay;

    /* Outputs for Atomic SubSystem: '<S127>/Signal Latch On With Reset' */
    /* Logic: '<S294>/OR1' incorporates:
     *  Constant: '<S290>/Constant'
     *  Constant: '<S291>/Constant'
     *  Constant: '<S292>/Constant'
     *  Constant: '<S293>/Constant'
     *  Logic: '<S127>/Logical Operator1'
     *  Logic: '<S127>/Logical Operator2'
     *  Logic: '<S294>/NOT'
     *  Logic: '<S294>/OR'
     *  RelationalOperator: '<S127>/Relational Operator1'
     *  RelationalOperator: '<S127>/Relational Operator2'
     *  RelationalOperator: '<S127>/Relational Operator3'
     *  RelationalOperator: '<S127>/Relational Operator4'
     *  UnitDelay: '<S127>/Unit Delay'
     *  UnitDelay: '<S294>/Unit Delay'
     */
    rtb_LogicalOperator9 = (rtb_OR1_ll || (((((CeTIMR_e_RaceMode_Unavailable !=
        ((uint32)rtb_LogicalOperator9_tmp)) && (CeTIMR_e_RaceMode_On != ((uint32)
        rtb_LogicalOperator9_tmp))) && (CeTIMR_e_RaceMode_Cancelled != ((uint32)
        rtb_LogicalOperator9_tmp))) || (((uint32)TIMR_ac_DW.UnitDelay_DSTATE_nk)
        != CeTIMR_e_RaceMode_Off)) && (TIMR_ac_DW.UnitDelay_DSTATE_bw)));

    /* Update for UnitDelay: '<S294>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_bw = rtb_LogicalOperator9;

    /* End of Outputs for SubSystem: '<S127>/Signal Latch On With Reset' */

    /* Switch: '<S127>/Switch2' incorporates:
     *  Switch: '<S127>/Switch1'
     */
    if (rtb_OR1_ll)
    {
        /* Switch: '<S127>/Switch2' incorporates:
         *  Switch: '<S137>/Switch2'
         */
        VeTIMR_e_RaceReqOvrdArb = VeTIMR_e_RaceReqSing;
    }
    else if (rtb_LogicalOperator9)
    {
        /* Switch: '<S127>/Switch1' incorporates:
         *  Switch: '<S127>/Switch2'
         *  UnitDelay: '<S127>/Unit Delay1'
         */
        VeTIMR_e_RaceReqOvrdArb = TIMR_ac_DW.UnitDelay1_DSTATE_g;
    }
    else
    {
        /* Switch: '<S127>/Switch2' incorporates:
         *  RelationalOperator: '<S137>/Relational Operator4'
         *  Switch: '<S137>/Switch2'
         */
        VeTIMR_e_RaceReqOvrdArb = VeTIMR_e_RaceReqSing;
    }

    /* End of Switch: '<S127>/Switch2' */

    /* UnitDelay: '<S214>/Unit Delay' incorporates:
     *  Constant: '<S295>/Constant'
     *  Logic: '<S137>/Logical Operator12'
     *  Logic: '<S137>/Logical Operator2'
     *  RelationalOperator: '<S137>/Relational Operator2'
     *  RelationalOperator: '<S303>/Relational Operator1'
     *  Switch: '<S302>/Switch4'
     */
    rtb_LogicalOperator9 = ((!rtb_TmpSignalConversionAtCustom) && (((uint32)
        VeTIMR_e_ModeReqOvrd) != CeTMDR_e_NotDefine));

    /* Logic: '<S137>/Logical Operator13' incorporates:
     *  Constant: '<S298>/Constant'
     *  RelationalOperator: '<S137>/Relational Operator6'
     */
    VeTIMR_b_CancRacexTerrain = (rtb_LogicalOperator9 && (((uint32)
        rtb_LogicalOperator9_tmp) == CeTIMR_e_RaceMode_On));

    /* Logic: '<S137>/Logical Operator10' incorporates:
     *  Constant: '<S297>/Constant'
     *  Logic: '<S137>/Logical Operator11'
     *  RelationalOperator: '<S137>/Relational Operator5'
     */
    VeTIMR_b_CanCompButRace = ((((TIMR_ac_B.SourceButton) && (((uint32)
        rtb_TmpSignalConversionAtTrac_0) == CeTIMR_e_LaunchControl)) &&
        (!rtb_TmpSignalConversionAtTrack_)) && rtb_TmpSignalConversionAtCustom);

    /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceMode_Arbitration */
    /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceMode_Arbitration */
    if (((uint32)TIMR_ac_DW.is_active_c43_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceMode_Arbitration */
        TIMR_ac_DW.is_active_c43_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/RaceMode_Arbitration */
        /* Transition: '<S126>:2' */
        TIMR_ac_DW.timer_c = 0U;
        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_No_RaceMode;

        /* VariantMerge generated from: '<S61>/RaceModeSts' */
        /* Entry Internal 'No_RaceMode': '<S126>:1' */
        /* Transition: '<S126>:7' */
        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;
        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;

        /* VariantMerge generated from: '<S61>/RaceOptionsSts' incorporates:
         *  Switch: '<S127>/Switch2'
         */
        TIMR_ac_B.RaceOptions_Sts = VeTIMR_e_RaceReqOvrdArb;

        /* Switch: '<S127>/Switch2' incorporates:
         *  VariantMerge generated from: '<S61>/RaceOptionsSts'
         */
        if ((((uint32)VeTIMR_e_RaceReqOvrdArb) == CeTIMR_e_NoOptionSelected) &&
                (((uint32)TIMR_ac_B.RaceOptions_Sts) !=
                 CeTIMR_e_NoOptionSelected))
        {
            /* Transition: '<S126>:2096' */
            TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

            /* Transition: '<S126>:2097' */
        }
        else
        {
            /* Transition: '<S126>:2092' */
            /* Transition: '<S126>:2094' */
        }
    }
    else
    {
        guard1 = false;
        switch (TIMR_ac_DW.is_c43_TIMR_ac)
        {
          case TIMR_ac_IN_New_Race_Request:
            /* During 'New_Race_Request': '<S126>:2193' */
            /* Transition: '<S126>:2209' */
            TIMR_ac_DW.timer_c = (uint16)((sint32)(((sint32)TIMR_ac_DW.timer_c)
                + 1));

            /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
            /* Event: '<S126>:177' */
            TIMR_ac_RaceModeCancCheck(TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n, TIMR_ac_B.UnitDelay,
                TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                &TIMR_ac_B.RaceModeCancCheck);

            /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
            if (((uint32)TIMR_ac_B.RaceModeCancCheck.Switch) != CeTIMR_e_TM0)
            {
                /* Switch: '<S120>/Switch' */
                /* Transition: '<S126>:2211' */
                /* Transition: '<S126>:2213' */
                TIMR_ac_B.RaceModePopup = TIMR_ac_B.RaceModeCancCheck.Switch;
                guard1 = true;
            }
            else
            {
                /* Transition: '<S126>:2217' */
                TIMR_ac_DW.timer_c = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_c) + 1));

                /* Outputs for Function Call SubSystem: '<S108>/ExitDeadPedalCond' */
                /* Event: '<S126>:523' */
                TIMR_ac_ExitDeadPedalCond
                    (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L,
                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R,
                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b,
                     TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f,
                     &TIMR_ac_B.ExitDeadPedalCond);

                /* End of Outputs for SubSystem: '<S108>/ExitDeadPedalCond' */
                if ((TIMR_ac_B.ExitDeadPedalCond.Switch) || (TIMR_ac_DW.timer_c >
                     KeTIMR_Cnt_DeadPedalTimer))
                {
                    /* Transition: '<S126>:2219' */
                    /* Transition: '<S126>:2225' */
                    guard1 = true;
                }
                else
                {
                    /* Transition: '<S126>:2221' */
                    /* Transition: '<S126>:2223' */
                    /* Transition: '<S126>:2224' */
                    TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_New_Race_Request;
                }
            }
            break;

          case TIMR_ac_IN_No_RaceMode:
            /* Switch: '<S127>/Switch2' incorporates:
             *  SignalConversion generated from: '<S22>/VePLTR_e_Command_15Sts'
             *  Switch: '<S113>/Switch'
             *  VariantMerge generated from: '<S61>/RaceOptionsSts'
             */
            /* During 'No_RaceMode': '<S126>:1' */
            if (((uint32)VeTIMR_e_RaceReqOvrdArb) != CeTIMR_e_NoOptionSelected)
            {
                /* VariantMerge generated from: '<S61>/RaceOptionsSts' */
                /* Transition: '<S126>:12' */
                /* Transition: '<S126>:14' */
                TIMR_ac_B.RaceOptions_Sts = VeTIMR_e_RaceReqOvrdArb;

                /* No_Racemode_Correctable_Conditions  */
                TIMR_ac_DW.Race_Correctable_Conditions_Che = false;

                /* Outputs for Function Call SubSystem: '<S108>/EntryCondCheck' */
                /* RelationalOperator: '<S113>/Relational Operator2' incorporates:
                 *  Constant: '<S167>/Calib'
                 */
                /* Race_Correctable_Conditions_Check */
                /* Transition: '<S126>:1000' */
                /* Transition: '<S126>:1002' */
                /* Event: '<S126>:83' */
                rtb_OR1_ll = (TIMR_ac_B.TmpSignalConversionAtVePLTR_mil <
                              KeTIMR_milel_OdometerUnKm);

                /* Logic: '<S113>/Logical Operator2' incorporates:
                 *  RelationalOperator: '<S113>/Relational Operator1'
                 */
                VeTIMR_b_TM2 = (rtb_OR1_ll &&
                                (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_S));

                /* Logic: '<S113>/Logical Operator1' incorporates:
                 *  RelationalOperator: '<S113>/Relational Operator3'
                 */
                VeTIMR_b_TM3 = (rtb_OR1_ll &&
                                (!TIMR_ac_B.TmpSignalConversionAtVePLTR_b_S));

                /* Logic: '<S113>/Logical Operator3' */
                VeTIMR_b_TM5 = ((!TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P) ||
                                rtb_Logical1);

                /* RelationalOperator: '<S113>/Relational Operator4' incorporates:
                 *  Constant: '<S168>/Calib'
                 */
                VeTIMR_b_TM6 = (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C >
                                KeTIMR_v_RaceMinSpd);

                /* Logic: '<S113>/Logical Operator4' incorporates:
                 *  Constant: '<S163>/Constant'
                 *  Constant: '<S169>/Calib'
                 *  RelationalOperator: '<S113>/Relational Operator5'
                 *  RelationalOperator: '<S113>/Relational Operator6'
                 *  SignalConversion generated from: '<S22>/VeDMDR_e_TurtleMdSts'
                 */
                VeTIMR_b_TM7 = ((((uint32)
                                  TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T) !=
                                 CeDMDR_e_No_Turtle_Mode) &&
                                (TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct <
                                 KeTIMR_Pct_MinSoc));

                /* RelationalOperator: '<S113>/Relational Operator8' incorporates:
                 *  RelationalOperator: '<S113>/Relational Operator15'
                 *  SignalConversion generated from: '<S22>/VePLTR_e_HAS_TelltaleSts'
                 */
                VeTIMR_b_TM8_tmp = TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H;

                /* Logic: '<S113>/Logical Operator5' incorporates:
                 *  Constant: '<S160>/Constant'
                 *  Constant: '<S161>/Constant'
                 *  Constant: '<S162>/Constant'
                 *  Constant: '<S164>/Constant'
                 *  Logic: '<S113>/Logical Operator11'
                 *  Logic: '<S113>/Logical Operator13'
                 *  RelationalOperator: '<S113>/Relational Operator15'
                 *  RelationalOperator: '<S113>/Relational Operator7'
                 *  RelationalOperator: '<S113>/Relational Operator8'
                 *  RelationalOperator: '<S113>/Relational Operator9'
                 *  SignalConversion generated from: '<S22>/VePLTR_e_ACCSystemSts'
                 *  SignalConversion generated from: '<S22>/VePLTR_e_AEBSystemSts'
                 */
                VeTIMR_b_TM8 = (((((uint32)
                                   TIMR_ac_B.TmpSignalConversionAtVePLTR__de) ==
                                  CePLTR_e_Engaged) ||
                                 ((CePLTR_e_HAS_TelltaleSts_OFF != ((uint32)
                                    VeTIMR_b_TM8_tmp)) && (((uint32)
                                    VeTIMR_b_TM8_tmp) !=
                                   CePLTR_e_HAS_TelltaleSts_GREY))) || (((uint32)
                                  TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d) ==
                                 CePLTR_e_FCW_On_Full));

                /* Logic: '<S113>/Logical Operator6' */
                VeTIMR_b_TM9 = ((((TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D) ||
                                  (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P)) ||
                                 (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L)) ||
                                (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R));

                /* RelationalOperator: '<S113>/Relational Operator10' incorporates:
                 *  Constant: '<S170>/Calib'
                 */
                VeTIMR_b_TM13 = (TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H >
                                 KeTIMR_T_HVBattMax);

                /* Logic: '<S113>/Logical Operator8' incorporates:
                 *  Constant: '<S171>/Calib'
                 *  Constant: '<S174>/Calib'
                 *  RelationalOperator: '<S113>/Relational Operator11'
                 *  RelationalOperator: '<S113>/Relational Operator12'
                 *  RelationalOperator: '<S113>/Relational Operator13'
                 *  RelationalOperator: '<S113>/Relational Operator14'
                 */
                VeTIMR_b_TM14 = ((((TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p >
                                    KeTIMR_T_MotorTempMax) ||
                                   (TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M >
                                    KeTIMR_T_MotorTempMax)) ||
                                  (TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k >
                                   KeTIMR_T_InverterTempMax)) ||
                                 (TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b >
                                  KeTIMR_T_InverterTempMax));

                /* RelationalOperator: '<S113>/Relational Operator17' incorporates:
                 *  RelationalOperator: '<S113>/Relational Operator16'
                 *  SignalConversion generated from: '<S22>/VeBRKR_e_Not_OK_To_Race'
                 */
                VeTIMR_b_TM15_tmp = TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N;

                /* Logic: '<S113>/Logical Operator7' incorporates:
                 *  Constant: '<S165>/Constant'
                 *  Constant: '<S166>/Constant'
                 *  Constant: '<S175>/Calib'
                 *  Logic: '<S113>/Logical Operator10'
                 *  Logic: '<S113>/Logical Operator12'
                 *  Logic: '<S113>/Logical Operator14'
                 *  Logic: '<S113>/Logical Operator9'
                 *  RelationalOperator: '<S113>/Relational Operator16'
                 *  RelationalOperator: '<S113>/Relational Operator17'
                 */
                VeTIMR_b_TM15 =
                    ((((((((((((((((((((((((((TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E)
                    || ((!TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E) &&
                    (KeTIMR_b_ESCTrqEnabledOvrd))) ||
                    (TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B)) ||
                    (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W)) ||
                    (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n)) ||
                    (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o)) ||
                    (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f)) ||
                                       (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p))
                                      ||
                                      (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e))
                                     ||
                                     (TIMR_ac_B.TmpSignalConversionAtVePLTR__nc))
                                    ||
                                    (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i))
                                   || (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n))
                                  || (TIMR_ac_B.TmpSignalConversionAtVePLTR__nz))
                                 || (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V))
                                || (TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H)) ||
                               (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A)) ||
                              (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H)) ||
                             (TIMR_ac_B.TmpSignalConversionAtVePLTR__pb)) ||
                            (TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g)) ||
                           (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M)) ||
                          (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h)) ||
                         (TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I)) ||
                        (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l)) ||
                       (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n)) ||
                      ((CeBRKR_e_Not_Level != ((uint32)VeTIMR_b_TM15_tmp)) &&
                       (((uint32)VeTIMR_b_TM15_tmp) != CeBRKR_e_OK))) ||
                     (TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N));

                /* Chart: '<S113>/Chart' */
                /* Gateway: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/EntryCondCheck/Chart */
                /* During: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/EntryCondCheck/Chart */
                /* Entry Internal: TIMR_MedTED/Subsystem/Race_Mode_Arbitration/Race_Mode_Arbitration_LP1/EntryCondCheck/Chart */
                /* Transition: '<S159>:2' */
                rtb_ScreenMsg_Entry = CeTIMR_e_TM0;
                if (VeTIMR_b_TM2)
                {
                    /* Transition: '<S159>:4' */
                    /* Transition: '<S159>:86' */
                    rtb_ScreenMsg_Entry = CeTIMR_e_TM2;
                }
                else
                {
                    /* Transition: '<S159>:6' */
                    if (VeTIMR_b_TM3)
                    {
                        /* Transition: '<S159>:8' */
                        /* Transition: '<S159>:67' */
                        rtb_ScreenMsg_Entry = CeTIMR_e_TM3;
                    }
                    else
                    {
                        /* Transition: '<S159>:10' */
                        if (VeTIMR_b_TM5)
                        {
                            /* Transition: '<S159>:12' */
                            /* Transition: '<S159>:65' */
                            rtb_ScreenMsg_Entry = CeTIMR_e_TM5;
                        }
                        else
                        {
                            /* Transition: '<S159>:14' */
                            if (VeTIMR_b_TM6)
                            {
                                /* Transition: '<S159>:16' */
                                /* Transition: '<S159>:63' */
                                rtb_ScreenMsg_Entry = CeTIMR_e_TM6;
                            }
                            else
                            {
                                /* Transition: '<S159>:18' */
                                if (VeTIMR_b_TM7)
                                {
                                    /* Transition: '<S159>:20' */
                                    /* Transition: '<S159>:61' */
                                    rtb_ScreenMsg_Entry = CeTIMR_e_TM7;
                                }
                                else
                                {
                                    /* Transition: '<S159>:22' */
                                    if (VeTIMR_b_TM8)
                                    {
                                        /* Transition: '<S159>:24' */
                                        /* Transition: '<S159>:59' */
                                        rtb_ScreenMsg_Entry = CeTIMR_e_TM8;
                                    }
                                    else
                                    {
                                        /* Transition: '<S159>:26' */
                                        if (VeTIMR_b_TM9)
                                        {
                                            /* Transition: '<S159>:28' */
                                            /* Transition: '<S159>:57' */
                                            rtb_ScreenMsg_Entry = CeTIMR_e_TM9;
                                        }
                                        else
                                        {
                                            /* Transition: '<S159>:30' */
                                            if (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c)
                                            {
                                                /* Transition: '<S159>:32' */
                                                /* Transition: '<S159>:55' */
                                                rtb_ScreenMsg_Entry =
                                                    CeTIMR_e_TM10;
                                            }
                                            else
                                            {
                                                /* Transition: '<S159>:34' */
                                                if (VeTIMR_b_TM13)
                                                {
                                                    /* Transition: '<S159>:36' */
                                                    /* Transition: '<S159>:53' */
                                                    rtb_ScreenMsg_Entry =
                                                        CeTIMR_e_TM13;
                                                }
                                                else
                                                {
                                                    /* Transition: '<S159>:38' */
                                                    if (VeTIMR_b_TM14)
                                                    {
                                                        /* Transition: '<S159>:40' */
                                                        /* Transition: '<S159>:51' */
                                                        rtb_ScreenMsg_Entry =
                                                            CeTIMR_e_TM14;
                                                    }
                                                    else
                                                    {
                                                        /* Transition: '<S159>:42' */
                                                        if (VeTIMR_b_TM15)
                                                        {
                                                            /* Transition: '<S159>:49' */
                                                            /* Transition: '<S159>:69' */
                                                            rtb_ScreenMsg_Entry =
                                                                CeTIMR_e_TM15;
                                                        }
                                                        else
                                                        {
                                                            /* Transition: '<S159>:71' */
                                                            /* Transition: '<S159>:73' */
                                                        }

                                                        /* Transition: '<S159>:74' */
                                                    }

                                                    /* Transition: '<S159>:77' */
                                                }

                                                /* Transition: '<S159>:78' */
                                            }

                                            /* Transition: '<S159>:79' */
                                        }

                                        /* Transition: '<S159>:80' */
                                    }

                                    /* Transition: '<S159>:81' */
                                }

                                /* Transition: '<S159>:82' */
                            }

                            /* Transition: '<S159>:83' */
                        }

                        /* Transition: '<S159>:84' */
                    }

                    /* Transition: '<S159>:87' */
                }

                /* End of Chart: '<S113>/Chart' */

                /* Switch: '<S113>/Switch' incorporates:
                 *  Constant: '<S172>/Calib'
                 */
                if (KeTIMR_b_OvrdRaceCOnd)
                {
                    /* Switch: '<S113>/Switch' incorporates:
                     *  Constant: '<S173>/Calib'
                     */
                    VeTIMR_e_ScreenMsgEntry = KeTIMR_e_ScreenMsg_EntryOvrd;
                }
                else
                {
                    /* Switch: '<S113>/Switch' */
                    VeTIMR_e_ScreenMsgEntry = rtb_ScreenMsg_Entry;
                }

                /* End of Switch: '<S113>/Switch' */
                /* End of Outputs for SubSystem: '<S108>/EntryCondCheck' */
                if (((uint32)VeTIMR_e_ScreenMsgEntry) == CeTIMR_e_TM0)
                {
                    /* VariantMerge generated from: '<S61>/RaceModeSts' */
                    /* Transition: '<S126>:1004' */
                    /* Transition: '<S126>:1006' */
                    TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_On;
                    rtb_TmpSignalConversionAtTrac_0 = TIMR_ac_B.RaceOptions_Sts;
                    if (((uint32)rtb_TmpSignalConversionAtTrac_0) ==
                            CeTIMR_e_LaunchControl)
                    {
                        /* Transition: '<S126>:1893' */
                        /* Transition: '<S126>:1896' */
                        TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDCont;
                    }
                    else
                    {
                        /* Transition: '<S126>:1898' */
                        /* Transition: '<S126>:1899' */
                    }

                    if ((((sint32)((((uint32)rtb_TmpSignalConversionAtTrac_0) ==
                                    CeTIMR_e_LineLock) ? 1 : 0)) & ((sint32)
                            ((((uint32)TIMR_ac_B.TmpSignalConversionAtVePLTR_e_C)
                              != CePLTR_e_Not_Pressed) ? 1 : 0))) == 0)
                    {
                        /* Transition: '<S126>:1010' */
                        /* Transition: '<S126>:1019' */
                        /* Transition: '<S126>:1020' */
                        /* Transition: '<S126>:153' */
                        TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_On;

                        /* Outputs for Function Call SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry 'RaceMode_On': '<S126>:154' */
                        /* Event: '<S126>:177' */
                        TIMR_ac_RaceModeCancCheck
                            (TIMR_ac_B.TmpSignalConversionAtVeHPMR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVeHMIR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__de,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_D,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_P,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_L,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_R,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_c,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__nc,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H,
                             TIMR_ac_B.TmpSignalConversionAtVePLTR__pb,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h,
                             TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N,
                             TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l,
                             TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n,
                             TIMR_ac_B.UnitDelay,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H,
                             TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V,
                             TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g,
                             &TIMR_ac_B.RaceModeCancCheck);

                        /* End of Outputs for SubSystem: '<S108>/RaceModeCancCheck' */
                        /* Entry Internal 'RaceMode_On': '<S126>:154' */
                        /* Transition: '<S126>:184' */
                        TIMR_ac_DW.is_RaceMode_On = TIMR_ac_IN_PrepStatus;
                    }
                    else
                    {
                        /* VariantMerge generated from: '<S61>/RaceModeSts' */
                        /* Transition: '<S126>:1011' */
                        TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
                        TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                        TIMR_ac_B.RaceModePopup = CeTIMR_e_TM41;
                        TIMR_ac_DW.timer_c = 1U;
                        TIMR_ac_DW.is_c43_TIMR_ac =
                            TIMR_ac_IN_RaceMode_Cancelled;
                    }
                }
                else
                {
                    /* VariantMerge generated from: '<S61>/RaceModeSts' */
                    /* Transition: '<S126>:1008' */
                    TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Unavailable;
                    TIMR_ac_B.RaceModePopup = VeTIMR_e_ScreenMsgEntry;
                    TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;
                    TIMR_ac_DW.timer_c = 1U;
                    TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Unavaiable;
                }
            }
            break;

          case TIMR_ac_IN_RaceMode_Active:
            TIMR_ac_RaceMode_Active(&rtb_OR1_ll);
            break;

          case TIMR_ac_IN_RaceMode_Cancelled:
            /* Constant: '<S128>/Calib' */
            /* During 'RaceMode_Cancelled': '<S126>:119' */
            if (TIMR_ac_DW.timer_c > KeTIMR_Cnt_ScreenTime)
            {
                /* Transition: '<S126>:146' */
                /* Transition: '<S126>:148' */
                /* Transition: '<S126>:2084' */
                TIMR_ac_DW.timer_c = 0U;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_No_RaceMode;

                /* VariantMerge generated from: '<S61>/RaceModeSts' */
                /* Entry Internal 'No_RaceMode': '<S126>:1' */
                /* Transition: '<S126>:7' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;
                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;

                /* VariantMerge generated from: '<S61>/RaceOptionsSts' incorporates:
                 *  Switch: '<S127>/Switch2'
                 */
                TIMR_ac_B.RaceOptions_Sts = VeTIMR_e_RaceReqOvrdArb;

                /* Switch: '<S127>/Switch2' incorporates:
                 *  VariantMerge generated from: '<S61>/RaceOptionsSts'
                 */
                if ((((uint32)VeTIMR_e_RaceReqOvrdArb) ==
                        CeTIMR_e_NoOptionSelected) && (((uint32)
                        TIMR_ac_B.RaceOptions_Sts) != CeTIMR_e_NoOptionSelected))
                {
                    /* Transition: '<S126>:2096' */
                    TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

                    /* Transition: '<S126>:2097' */
                }
                else
                {
                    /* Transition: '<S126>:2092' */
                    /* Transition: '<S126>:2094' */
                }
            }
            else
            {
                TIMR_ac_DW.timer_c = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_c) + 1));
            }
            break;

          case TIMR_ac_IN_RaceMode_Completed:
            /* Constant: '<S128>/Calib' */
            /* During 'RaceMode_Completed': '<S126>:917' */
            if (TIMR_ac_DW.timer_c > KeTIMR_Cnt_ScreenTime)
            {
                /* Transition: '<S126>:973' */
                /* Transition: '<S126>:1814' */
                /* Transition: '<S126>:148' */
                /* Transition: '<S126>:2084' */
                TIMR_ac_DW.timer_c = 0U;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_No_RaceMode;

                /* VariantMerge generated from: '<S61>/RaceModeSts' */
                /* Entry Internal 'No_RaceMode': '<S126>:1' */
                /* Transition: '<S126>:7' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;
                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;

                /* VariantMerge generated from: '<S61>/RaceOptionsSts' incorporates:
                 *  Switch: '<S127>/Switch2'
                 */
                TIMR_ac_B.RaceOptions_Sts = VeTIMR_e_RaceReqOvrdArb;

                /* Switch: '<S127>/Switch2' incorporates:
                 *  VariantMerge generated from: '<S61>/RaceOptionsSts'
                 */
                if ((((uint32)VeTIMR_e_RaceReqOvrdArb) ==
                        CeTIMR_e_NoOptionSelected) && (((uint32)
                        TIMR_ac_B.RaceOptions_Sts) != CeTIMR_e_NoOptionSelected))
                {
                    /* Transition: '<S126>:2096' */
                    TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

                    /* Transition: '<S126>:2097' */
                }
                else
                {
                    /* Transition: '<S126>:2092' */
                    /* Transition: '<S126>:2094' */
                }
            }
            else
            {
                TIMR_ac_DW.timer_c = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_c) + 1));
            }
            break;

          case TIMR_ac_IN_RaceMode_On:
            TIMR_ac_RaceMode_On(&rtb_OR1_ll);
            break;

          default:
            /* Constant: '<S128>/Calib' */
            /* During 'RaceMode_Unavaiable': '<S126>:105' */
            if (TIMR_ac_DW.timer_c > KeTIMR_Cnt_ScreenTime)
            {
                /* Transition: '<S126>:112' */
                /* Transition: '<S126>:2084' */
                TIMR_ac_DW.timer_c = 0U;
                TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_No_RaceMode;

                /* VariantMerge generated from: '<S61>/RaceModeSts' */
                /* Entry Internal 'No_RaceMode': '<S126>:1' */
                /* Transition: '<S126>:7' */
                TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Off;
                TIMR_ac_B.RaceModePopup = CeTIMR_e_TM0;

                /* VariantMerge generated from: '<S61>/RaceOptionsSts' incorporates:
                 *  Switch: '<S127>/Switch2'
                 */
                TIMR_ac_B.RaceOptions_Sts = VeTIMR_e_RaceReqOvrdArb;

                /* Switch: '<S127>/Switch2' incorporates:
                 *  VariantMerge generated from: '<S61>/RaceOptionsSts'
                 */
                if ((((uint32)VeTIMR_e_RaceReqOvrdArb) ==
                        CeTIMR_e_NoOptionSelected) && (((uint32)
                        TIMR_ac_B.RaceOptions_Sts) != CeTIMR_e_NoOptionSelected))
                {
                    /* Transition: '<S126>:2096' */
                    TIMR_ac_B.RaceOptions_Sts = CeTIMR_e_NoOptionSelected;

                    /* Transition: '<S126>:2097' */
                }
                else
                {
                    /* Transition: '<S126>:2092' */
                    /* Transition: '<S126>:2094' */
                }
            }
            else
            {
                TIMR_ac_DW.timer_c = (uint16)((sint32)(((sint32)
                    TIMR_ac_DW.timer_c) + 1));
            }
            break;
        }

        if (guard1)
        {
            /* VariantMerge generated from: '<S61>/RaceModeSts' */
            /* Transition: '<S126>:2227' */
            TIMR_ac_B.RaceModeSts = CeTIMR_e_RaceMode_Cancelled;
            TIMR_ac_B.Launch_Mode_Switch_LED = CeTIMR_e_LEDOff;

            /* Transition: '<S126>:2229' */
            TIMR_ac_B.DeadPedalNewRace = false;

            /* Transition: '<S126>:1801' */
            TIMR_ac_DW.timer_c = 1U;

            /* Transition: '<S126>:1803' */
            /* Transition: '<S126>:2149' */
            /* Transition: '<S126>:1331' */
            /* Transition: '<S126>:1333' */
            /* Transition: '<S126>:1332' */
            TIMR_ac_DW.is_c43_TIMR_ac = TIMR_ac_IN_RaceMode_Cancelled;
        }
    }

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising1' */
    /* UnitDelay: '<S151>/Unit Delay' incorporates:
     *  UnitDelay: '<S140>/Unit Delay'
     */
    rtb_OR1_ll = TIMR_ac_DW.UnitDelay_DSTATE_cd;

    /* Update for UnitDelay: '<S140>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_cd = TIMR_ac_B.DeadPedalComplete;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising1' */

    /* RelationalOperator: '<S110>/Relational Operator3' incorporates:
     *  RelationalOperator: '<S110>/Relational Operator7'
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    rtb_OR1_nm_tmp = TIMR_ac_B.RaceModeSts;

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising1' */
    /* Logic: '<S110>/Logical Operator8' incorporates:
     *  Constant: '<S141>/Constant'
     *  Constant: '<S142>/Constant'
     *  Constant: '<S143>/Constant'
     *  Constant: '<S144>/Constant'
     *  Logic: '<S110>/Logical Operator3'
     *  Logic: '<S110>/Logical Operator9'
     *  Logic: '<S140>/AND'
     *  Logic: '<S140>/OR1'
     *  RelationalOperator: '<S110>/Relational Operator2'
     *  RelationalOperator: '<S110>/Relational Operator3'
     *  RelationalOperator: '<S110>/Relational Operator7'
     *  RelationalOperator: '<S110>/Relational Operator8'
     *  UnitDelay: '<S110>/Unit Delay2'
     *  UnitDelay: '<S110>/Unit Delay3'
     *  UnitDelay: '<S110>/Unit Delay4'
     */
    rtb_OR1_ll = ((((!TIMR_ac_DW.UnitDelay3_DSTATE_o) &&
                    (CeTIMR_e_RaceMode_Cancelled == ((uint32)rtb_OR1_nm_tmp))) &&
                   (((uint32)TIMR_ac_DW.UnitDelay2_DSTATE_g) ==
                    CeTIMR_e_RaceMode_Active)) || (((CeTIMR_e_RaceMode_Complete ==
                     ((uint32)rtb_OR1_nm_tmp)) && (((uint32)
                      TIMR_ac_DW.UnitDelay4_DSTATE_f) ==
                     CeTIMR_e_RaceMode_Active)) && ((TIMR_ac_B.DeadPedalComplete)
                    && (!rtb_OR1_ll))));

    /* End of Outputs for SubSystem: '<S110>/EdgeRising1' */

    /* Outputs for Atomic SubSystem: '<S110>/Count Down Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S138>/EdgeRising_F2T' */
    /* Logic: '<S150>/OR1' incorporates:
     *  UnitDelay: '<S150>/Unit Delay'
     */
    rtb_AND_en = !TIMR_ac_DW.UnitDelay_DSTATE_cu;

    /* Update for UnitDelay: '<S150>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_cu = rtb_OR1_ll;

    /* Switch: '<S138>/Switch1' incorporates:
     *  Constant: '<S138>/Constant Value'
     *  Logic: '<S150>/AND'
     *  RelationalOperator: '<S138>/Greater  Than'
     *  Switch: '<S138>/Switch2'
     *  UnitDelay: '<S138>/Unit Delay'
     */
    if (rtb_OR1_ll && rtb_AND_en)
    {
        /* Switch: '<S138>/Switch1' incorporates:
         *  Constant: '<S147>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_Cnt_DeadPedalTimer;
    }
    else if (((sint32)TIMR_ac_DW.UnitDelay_DSTATE_oa) > 0)
    {
        /* Switch: '<S138>/Switch2' incorporates:
         *  Constant: '<S138>/Constant Value1'
         *  Sum: '<S138>/Subtraction'
         *  Switch: '<S138>/Switch1'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_oa) - 1));
    }
    else
    {
        /* Switch: '<S138>/Switch1' incorporates:
         *  Switch: '<S138>/Switch2'
         *  UnitDelay: '<S138>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_oa;
    }

    /* End of Switch: '<S138>/Switch1' */
    /* End of Outputs for SubSystem: '<S138>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S138>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_oa = rtb_Switch1_g1;

    /* Outputs for Atomic SubSystem: '<S110>/Signal Latch On With Reset' */
    /* Logic: '<S148>/OR1' incorporates:
     *  Abs: '<S110>/Abs'
     *  Abs: '<S110>/Abs1'
     *  Constant: '<S138>/Constant Value2'
     *  Constant: '<S145>/Calib'
     *  Logic: '<S110>/Logical Operator5'
     *  Logic: '<S110>/Logical Operator6'
     *  Logic: '<S110>/Logical Operator7'
     *  Logic: '<S148>/NOT'
     *  Logic: '<S148>/OR'
     *  RelationalOperator: '<S110>/Relational Operator5'
     *  RelationalOperator: '<S110>/Relational Operator6'
     *  RelationalOperator: '<S138>/Greater  Than1'
     *  Sum: '<S110>/Sum'
     *  Sum: '<S110>/Sum2'
     *  UnitDelay: '<S148>/Unit Delay'
     */
    rtb_OR1_ll = (rtb_OR1_ll || ((((fabsf
                      (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_b -
                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_L) >=
                      KeTIMR_v_RaceEndSpd) || (fabsf
                      (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_f -
                       TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_R) >=
                      KeTIMR_v_RaceEndSpd)) && (((sint32)rtb_Switch1_g1) > 0)) &&
                   (TIMR_ac_DW.UnitDelay_DSTATE_ex)));

    /* End of Outputs for SubSystem: '<S110>/Count Down Reset Trigger Enabled' */

    /* Update for UnitDelay: '<S148>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_ex = rtb_OR1_ll;

    /* End of Outputs for SubSystem: '<S110>/Signal Latch On With Reset' */

    /* Logic: '<S110>/Logical Operator2' */
    rtb_OR1_ll = ((TIMR_ac_B.DeadPedalNewRace) || rtb_OR1_ll);

    /* Outputs for Atomic SubSystem: '<S110>/EdgeRising' */
    /* Logic: '<S139>/AND' incorporates:
     *  Logic: '<S139>/OR1'
     *  UnitDelay: '<S139>/Unit Delay'
     */
    rtb_AND_en = (rtb_OR1_ll && (!TIMR_ac_DW.UnitDelay_DSTATE_kf));

    /* Update for UnitDelay: '<S139>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_kf = rtb_OR1_ll;

    /* End of Outputs for SubSystem: '<S110>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S110>/Turn Off Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S149>/EdgeFalling' */
    /* Logic: '<S151>/AND' incorporates:
     *  Logic: '<S151>/OR1'
     *  UnitDelay: '<S151>/Unit Delay'
     */
    rtb_AND_h = ((!rtb_AND_en) && (TIMR_ac_DW.UnitDelay_DSTATE_lk));

    /* Update for UnitDelay: '<S151>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_lk = rtb_AND_en;

    /* End of Outputs for SubSystem: '<S149>/EdgeFalling' */

    /* Switch: '<S149>/Switch' */
    if (rtb_AND_h)
    {
        /* Switch: '<S149>/Switch' incorporates:
         *  Constant: '<S146>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_Cnt_MinDeadPedalTime;
    }
    else
    {
        /* Sum: '<S149>/Summation' incorporates:
         *  Constant: '<S149>/Constant Value'
         *  UnitDelay: '<S149>/Unit Delay'
         */
        i = ((sint32)TIMR_ac_DW.UnitDelay_DSTATE_oo) - 1;
        if ((((sint32)TIMR_ac_DW.UnitDelay_DSTATE_oo) - 1) < 0)
        {
            i = 0;
        }

        /* Switch: '<S149>/Switch' incorporates:
         *  Sum: '<S149>/Summation'
         */
        rtb_Switch1_g1 = (uint16)i;
    }

    /* End of Switch: '<S149>/Switch' */

    /* Update for UnitDelay: '<S149>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_oo = rtb_Switch1_g1;

    /* VariantMerge generated from: '<S61>/Race_Dead_Pedal_Request' incorporates:
     *  Constant: '<S149>/Constant Value2'
     *  Logic: '<S110>/Logical Operator10'
     *  Logic: '<S149>/AND'
     *  RelationalOperator: '<S149>/Greater  Than'
     */
    TIMR_ac_B.VariantMergeForOutportRace_Dead = ((rtb_AND_en || (((sint32)
        rtb_Switch1_g1) > 0)) || rtb_OR1_ll);

    /* End of Outputs for SubSystem: '<S110>/Turn Off Delay Sample' */

    /* RelationalOperator: '<S114>/Relational Operator8' incorporates:
     *  RelationalOperator: '<S114>/Relational Operator15'
     *  SignalConversion generated from: '<S22>/VePLTR_e_HAS_TelltaleSts'
     */
    VeTIMR_b_TM8_tmp = TIMR_ac_B.TmpSignalConversionAtVePLTR_e_H;

    /* RelationalOperator: '<S114>/Relational Operator17' incorporates:
     *  RelationalOperator: '<S114>/Relational Operator16'
     *  SignalConversion generated from: '<S22>/VeBRKR_e_Not_OK_To_Race'
     */
    VeTIMR_b_TM15_tmp = TIMR_ac_B.TmpSignalConversionAtVeBRKR_e_N;

    /* If: '<S114>/If' incorporates:
     *  Constant: '<S176>/Constant'
     *  Constant: '<S177>/Constant'
     *  Constant: '<S178>/Constant'
     *  Constant: '<S179>/Constant'
     *  Constant: '<S180>/Constant'
     *  Constant: '<S181>/Constant'
     *  Constant: '<S182>/Constant'
     *  Constant: '<S185>/Calib'
     *  Constant: '<S186>/Calib'
     *  Constant: '<S187>/Calib'
     *  Constant: '<S188>/Calib'
     *  Constant: '<S189>/Calib'
     *  Constant: '<S190>/Calib'
     *  Constant: '<S191>/Calib'
     *  Logic: '<S114>/Logical Operator10'
     *  Logic: '<S114>/Logical Operator11'
     *  Logic: '<S114>/Logical Operator12'
     *  Logic: '<S114>/Logical Operator13'
     *  Logic: '<S114>/Logical Operator14'
     *  Logic: '<S114>/Logical Operator4'
     *  Logic: '<S114>/Logical Operator5'
     *  Logic: '<S114>/Logical Operator7'
     *  Logic: '<S114>/Logical Operator8'
     *  Logic: '<S114>/Logical Operator9'
     *  Logic: '<S114>/Logical9'
     *  RelationalOperator: '<S114>/Relational Operator10'
     *  RelationalOperator: '<S114>/Relational Operator11'
     *  RelationalOperator: '<S114>/Relational Operator12'
     *  RelationalOperator: '<S114>/Relational Operator13'
     *  RelationalOperator: '<S114>/Relational Operator14'
     *  RelationalOperator: '<S114>/Relational Operator15'
     *  RelationalOperator: '<S114>/Relational Operator16'
     *  RelationalOperator: '<S114>/Relational Operator17'
     *  RelationalOperator: '<S114>/Relational Operator2'
     *  RelationalOperator: '<S114>/Relational Operator4'
     *  RelationalOperator: '<S114>/Relational Operator5'
     *  RelationalOperator: '<S114>/Relational Operator6'
     *  RelationalOperator: '<S114>/Relational Operator7'
     *  RelationalOperator: '<S114>/Relational Operator8'
     *  RelationalOperator: '<S114>/Relational Operator9'
     *  SignalConversion generated from: '<S22>/VeDMDR_e_TurtleMdSts'
     *  SignalConversion generated from: '<S22>/VePLTR_e_ACCSystemSts'
     *  SignalConversion generated from: '<S22>/VePLTR_e_AEBSystemSts'
     */
    if (((((((TIMR_ac_B.TmpSignalConversionAtVePLTR_mil <
              KeTIMR_milel_OdometerUnKm) ||
             (TIMR_ac_B.TmpSignalConversionAtVeCSVR_v_C > KeTIMR_v_RaceMinSpd)) ||
            ((((uint32)TIMR_ac_B.TmpSignalConversionAtVeDMDR_e_T) !=
              CeDMDR_e_No_Turtle_Mode) &&
             (TIMR_ac_B.TmpSignalConversionAtVeBPCR_Pct < KeTIMR_Pct_MinSoc))) ||
           (((((uint32)TIMR_ac_B.TmpSignalConversionAtVePLTR__de) ==
              CePLTR_e_Engaged) || ((CePLTR_e_HAS_TelltaleSts_OFF != ((uint32)
                VeTIMR_b_TM8_tmp)) && (((uint32)VeTIMR_b_TM8_tmp) !=
               CePLTR_e_HAS_TelltaleSts_GREY))) || (((uint32)
              TIMR_ac_B.TmpSignalConversionAtVePLTR_e_d) == CePLTR_e_FCW_On_Full)))
          || (TIMR_ac_B.TmpSignalConversionAtVeBPCR_T_H > KeTIMR_T_HVBattMax)) ||
         ((((TIMR_ac_B.TmpSignalConversionAtVeINVR_T_p > KeTIMR_T_MotorTempMax) ||
            (TIMR_ac_B.TmpSignalConversionAtVeINVR_T_M > KeTIMR_T_MotorTempMax))
           || (TIMR_ac_B.TmpSignalConversionAtVeINVR_T_k >
               KeTIMR_T_InverterTempMax)) ||
            (TIMR_ac_B.TmpSignalConversionAtVeINVR_T_b >
             KeTIMR_T_InverterTempMax))) ||
            ((((((((((((((((((((((((((TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_E)
        || ((!TIMR_ac_B.TmpSignalConversionAtVeWTAR_b_E) &&
            (KeTIMR_b_ESCTrqEnabledOvrd))) ||
            (TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_B)) ||
            (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_W)) ||
            (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_n)) ||
            (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_o)) ||
            (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_f)) ||
            (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_p)) ||
                              (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_e)) ||
                             (TIMR_ac_B.TmpSignalConversionAtVePLTR__nc)) ||
                            (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_i)) ||
                           (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_n)) ||
                          (TIMR_ac_B.TmpSignalConversionAtVePLTR__nz)) ||
                         (TIMR_ac_B.TmpSignalConversionAtVeCSVR_b_V)) ||
                        (TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_H)) ||
                       (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_A)) ||
                      (TIMR_ac_B.TmpSignalConversionAtVePLTR_b_H)) ||
                     (TIMR_ac_B.TmpSignalConversionAtVePLTR__pb)) ||
                    (TIMR_ac_B.TmpSignalConversionAtVeBPCR_b_g)) ||
                   (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_M)) ||
                  (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_h)) ||
                 (TIMR_ac_B.TmpSignalConversionAtVeSRAR_b_I)) ||
                (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_l)) ||
               (TIMR_ac_B.TmpSignalConversionAtVeINVR_b_n)) ||
              ((CeBRKR_e_Not_Level != ((uint32)VeTIMR_b_TM15_tmp)) && (((uint32)
             VeTIMR_b_TM15_tmp) != CeBRKR_e_OK))) ||
             (TIMR_ac_B.TmpSignalConversionAtVeBRKR_b_N)))
    {
        /* Outputs for IfAction SubSystem: '<S114>/If Action Subsystem' incorporates:
         *  ActionPort: '<S183>/Action Port'
         */
        /* Merge: '<S114>/Merge' incorporates:
         *  Constant: '<S192>/Constant'
         *  SignalConversion generated from: '<S183>/Out1'
         */
        TIMR_ac_B.Merge_p = CeTIMR_e_RaceEntry_Not_OK;

        /* End of Outputs for SubSystem: '<S114>/If Action Subsystem' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S114>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S184>/Action Port'
         */
        /* Merge: '<S114>/Merge' incorporates:
         *  Constant: '<S193>/Constant'
         *  SignalConversion generated from: '<S184>/Out1'
         */
        TIMR_ac_B.Merge_p = CeTIMR_e_RaceEntry_OK;

        /* End of Outputs for SubSystem: '<S114>/If Action Subsystem1' */
    }

    /* End of If: '<S114>/If' */

    /* UnitDelay: '<S116>/Unit Delay2' */
    TIMR_ac_B.UnitDelay2 = TIMR_ac_DW.UnitDelay2_DSTATE_d;

    /* Logic: '<S137>/Logical Operator4' */
    VeTIMR_b_InhButRace = (((rtb_TmpSignalConversionAtCustom &&
        rtb_TmpSignalConversionAtTrack_) && (VeTIMR_b_InhCond)) &&
                           (TIMR_ac_B.SourceButton));

    /* Outputs for Atomic SubSystem: '<S117>/Count Down Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S198>/EdgeRising_F2T' */
    /* Logic: '<S203>/OR1' incorporates:
     *  UnitDelay: '<S203>/Unit Delay'
     */
    rtb_TmpSignalConversionAtCustom = !TIMR_ac_DW.UnitDelay_DSTATE_f3b;

    /* Update for UnitDelay: '<S203>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_f3b = VeTIMR_b_InhButRace;

    /* Switch: '<S198>/Switch1' incorporates:
     *  Constant: '<S198>/Constant Value'
     *  Logic: '<S203>/AND'
     *  RelationalOperator: '<S198>/Greater  Than'
     *  Switch: '<S198>/Switch2'
     *  UnitDelay: '<S198>/Unit Delay'
     */
    if ((VeTIMR_b_InhButRace) && rtb_TmpSignalConversionAtCustom)
    {
        /* Switch: '<S198>/Switch1' incorporates:
         *  Constant: '<S201>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_Cnt_LedBlinkTime;
    }
    else if (((sint32)TIMR_ac_DW.UnitDelay_DSTATE_mu) > 0)
    {
        /* Switch: '<S198>/Switch2' incorporates:
         *  Constant: '<S198>/Constant Value1'
         *  Sum: '<S198>/Subtraction'
         *  Switch: '<S198>/Switch1'
         *  UnitDelay: '<S198>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_mu) - 1));
    }
    else
    {
        /* Switch: '<S198>/Switch1' incorporates:
         *  Switch: '<S198>/Switch2'
         *  UnitDelay: '<S198>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_mu;
    }

    /* End of Switch: '<S198>/Switch1' */
    /* End of Outputs for SubSystem: '<S198>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S198>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_mu = rtb_Switch1_g1;

    /* Outputs for Atomic SubSystem: '<S117>/Signal Latch On With Reset' */
    /* Logic: '<S202>/OR1' incorporates:
     *  Constant: '<S198>/Constant Value2'
     *  Constant: '<S199>/Constant'
     *  Logic: '<S117>/Logical Operator'
     *  Logic: '<S117>/Logical Operator1'
     *  Logic: '<S117>/Logical Operator7'
     *  Logic: '<S202>/NOT'
     *  Logic: '<S202>/OR'
     *  RelationalOperator: '<S117>/Relational Operator1'
     *  RelationalOperator: '<S117>/Relational Operator3'
     *  RelationalOperator: '<S198>/Greater  Than1'
     *  UnitDelay: '<S117>/Unit Delay2'
     *  UnitDelay: '<S202>/Unit Delay'
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    rtb_TmpSignalConversionAtCustom = ((VeTIMR_b_InhButRace) || (((((sint32)
        rtb_Switch1_g1) > 0) && ((CeTIMR_e_RaceMode_Off != ((uint32)
        TIMR_ac_DW.UnitDelay2_DSTATE_p)) || (((uint32)TIMR_ac_B.RaceModeSts) ==
        CeTIMR_e_RaceMode_Off))) && (TIMR_ac_DW.UnitDelay_DSTATE_h5)));

    /* End of Outputs for SubSystem: '<S117>/Count Down Reset Trigger Enabled' */

    /* Update for UnitDelay: '<S202>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_h5 = rtb_TmpSignalConversionAtCustom;

    /* End of Outputs for SubSystem: '<S117>/Signal Latch On With Reset' */

    /* Switch: '<S117>/Switch2' */
    if (rtb_TmpSignalConversionAtCustom)
    {
        /* Switch: '<S117>/Switch2' incorporates:
         *  Constant: '<S200>/Constant'
         */
        TIMR_ac_B.Switch2_a = CeTIMR_e_LEDBlink;
    }
    else
    {
        /* Switch: '<S117>/Switch2' */
        TIMR_ac_B.Switch2_a = TIMR_ac_B.Launch_Mode_Switch_LED;
    }

    /* End of Switch: '<S117>/Switch2' */

    /* RelationalOperator: '<S215>/Relational Operator6' incorporates:
     *  RelationalOperator: '<S119>/Relational Operator1'
     *  RelationalOperator: '<S119>/Relational Operator8'
     *  RelationalOperator: '<S215>/Relational Operator1'
     *  RelationalOperator: '<S215>/Relational Operator10'
     *  RelationalOperator: '<S215>/Relational Operator11'
     *  RelationalOperator: '<S215>/Relational Operator12'
     *  RelationalOperator: '<S215>/Relational Operator13'
     *  RelationalOperator: '<S215>/Relational Operator14'
     *  RelationalOperator: '<S215>/Relational Operator15'
     *  RelationalOperator: '<S215>/Relational Operator16'
     *  RelationalOperator: '<S215>/Relational Operator17'
     *  RelationalOperator: '<S215>/Relational Operator18'
     *  RelationalOperator: '<S215>/Relational Operator19'
     *  RelationalOperator: '<S215>/Relational Operator2'
     *  RelationalOperator: '<S215>/Relational Operator20'
     *  RelationalOperator: '<S215>/Relational Operator3'
     *  RelationalOperator: '<S215>/Relational Operator4'
     *  RelationalOperator: '<S215>/Relational Operator5'
     *  RelationalOperator: '<S215>/Relational Operator7'
     *  RelationalOperator: '<S215>/Relational Operator8'
     *  RelationalOperator: '<S215>/Relational Operator9'
     */
    rtb_ScreenMsg_Entry = TIMR_ac_B.RaceModePopup;

    /* Logic: '<S215>/Logical Operator13' incorporates:
     *  Constant: '<S217>/Constant'
     *  Constant: '<S218>/Constant'
     *  Constant: '<S219>/Constant'
     *  Constant: '<S220>/Constant'
     *  Constant: '<S221>/Constant'
     *  Constant: '<S222>/Constant'
     *  Constant: '<S223>/Constant'
     *  Constant: '<S224>/Constant'
     *  Constant: '<S225>/Constant'
     *  Constant: '<S226>/Constant'
     *  Constant: '<S227>/Constant'
     *  Constant: '<S228>/Constant'
     *  Constant: '<S229>/Constant'
     *  Constant: '<S230>/Constant'
     *  Constant: '<S231>/Constant'
     *  Constant: '<S232>/Constant'
     *  Constant: '<S233>/Constant'
     *  Constant: '<S234>/Constant'
     *  Constant: '<S235>/Constant'
     *  Constant: '<S236>/Constant'
     *  RelationalOperator: '<S215>/Relational Operator1'
     *  RelationalOperator: '<S215>/Relational Operator10'
     *  RelationalOperator: '<S215>/Relational Operator11'
     *  RelationalOperator: '<S215>/Relational Operator12'
     *  RelationalOperator: '<S215>/Relational Operator13'
     *  RelationalOperator: '<S215>/Relational Operator14'
     *  RelationalOperator: '<S215>/Relational Operator15'
     *  RelationalOperator: '<S215>/Relational Operator16'
     *  RelationalOperator: '<S215>/Relational Operator17'
     *  RelationalOperator: '<S215>/Relational Operator18'
     *  RelationalOperator: '<S215>/Relational Operator19'
     *  RelationalOperator: '<S215>/Relational Operator2'
     *  RelationalOperator: '<S215>/Relational Operator20'
     *  RelationalOperator: '<S215>/Relational Operator3'
     *  RelationalOperator: '<S215>/Relational Operator4'
     *  RelationalOperator: '<S215>/Relational Operator5'
     *  RelationalOperator: '<S215>/Relational Operator6'
     *  RelationalOperator: '<S215>/Relational Operator7'
     *  RelationalOperator: '<S215>/Relational Operator8'
     *  RelationalOperator: '<S215>/Relational Operator9'
     */
    rtb_TmpSignalConversionAtCustom = ((((((((((((((((((((((uint32)
        rtb_ScreenMsg_Entry) == CeTIMR_e_TM61) || (((uint32)rtb_ScreenMsg_Entry)
        == CeTIMR_e_TM32)) || (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM31)) ||
        (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM30)) || (((uint32)
        rtb_ScreenMsg_Entry) == CeTIMR_e_TM29)) || (((uint32)rtb_ScreenMsg_Entry)
        == CeTIMR_e_TM28)) || (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM33)) ||
        (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM45)) || (((uint32)
        rtb_ScreenMsg_Entry) == CeTIMR_e_TM39)) || (((uint32)rtb_ScreenMsg_Entry)
        == CeTIMR_e_TM37)) || (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM33)) ||
        (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM42)) || (((uint32)
        rtb_ScreenMsg_Entry) == CeTIMR_e_TM43)) || (((uint32)rtb_ScreenMsg_Entry)
        == CeTIMR_e_TM44)) || (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM62)) ||
        (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM51)) || (((uint32)
        rtb_ScreenMsg_Entry) == CeTIMR_e_TM52)) || (((uint32)rtb_ScreenMsg_Entry)
        == CeTIMR_e_TM50)) || (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM55)) ||
        (((uint32)rtb_ScreenMsg_Entry) == CeTIMR_e_TM54));

    /* Logic: '<S119>/Logical Operator1' incorporates:
     *  Constant: '<S210>/Constant'
     *  Logic: '<S119>/Logical Operator3'
     *  RelationalOperator: '<S119>/Relational Operator1'
     *  RelationalOperator: '<S119>/Relational Operator8'
     *  UnitDelay: '<S119>/Unit Delay1'
     */
    rtb_TmpSignalConversionAtTrack_ = (((!rtb_TmpSignalConversionAtCustom) &&
        (CeTIMR_e_TM0 != ((uint32)rtb_ScreenMsg_Entry))) && (rtb_ScreenMsg_Entry
        != TIMR_ac_DW.UnitDelay1_DSTATE_m));

    /* Logic: '<S137>/Logical Operator1' incorporates:
     *  Constant: '<S296>/Constant'
     *  RelationalOperator: '<S137>/Relational Operator3'
     */
    VeTIMR_b_RejectTerrain = ((((uint32)rtb_LogicalOperator9_tmp) ==
        CeTIMR_e_RaceMode_Active) && rtb_LogicalOperator9);

    /* Logic: '<S119>/Logical Operator' */
    rtb_LogicalOperator9 = ((rtb_TmpSignalConversionAtTrack_ ||
        (VeTIMR_b_RejectTerrain)) || (VeTIMR_b_InhButRace));

    /* Outputs for Atomic SubSystem: '<S119>/Count Down Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S208>/EdgeRising_F2T' */
    /* Logic: '<S216>/OR1' incorporates:
     *  UnitDelay: '<S216>/Unit Delay'
     */
    rtb_OR1_ll = !TIMR_ac_DW.UnitDelay_DSTATE_jb;

    /* Update for UnitDelay: '<S216>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_jb = rtb_LogicalOperator9;

    /* Switch: '<S208>/Switch1' incorporates:
     *  Constant: '<S208>/Constant Value'
     *  Logic: '<S216>/AND'
     *  RelationalOperator: '<S208>/Greater  Than'
     *  Switch: '<S208>/Switch2'
     *  UnitDelay: '<S208>/Unit Delay'
     */
    if (rtb_LogicalOperator9 && rtb_OR1_ll)
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Constant: '<S213>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_Cnt_PopUp;
    }
    else if (((sint32)TIMR_ac_DW.UnitDelay_DSTATE_g) > 0)
    {
        /* Switch: '<S208>/Switch2' incorporates:
         *  Constant: '<S208>/Constant Value1'
         *  Sum: '<S208>/Subtraction'
         *  Switch: '<S208>/Switch1'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_g) - 1));
    }
    else
    {
        /* Switch: '<S208>/Switch1' incorporates:
         *  Switch: '<S208>/Switch2'
         *  UnitDelay: '<S208>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_g;
    }

    /* End of Switch: '<S208>/Switch1' */
    /* End of Outputs for SubSystem: '<S208>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S208>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_g = rtb_Switch1_g1;

    /* Outputs for Atomic SubSystem: '<S119>/Signal Latch On With Reset' */
    /* Logic: '<S214>/OR1' incorporates:
     *  Constant: '<S208>/Constant Value2'
     *  Logic: '<S119>/Logical Operator2'
     *  Logic: '<S214>/NOT'
     *  Logic: '<S214>/OR'
     *  RelationalOperator: '<S208>/Greater  Than1'
     *  UnitDelay: '<S214>/Unit Delay'
     */
    rtb_OR1_ll = (rtb_LogicalOperator9 || ((((sint32)rtb_Switch1_g1) > 0) &&
                   (TIMR_ac_DW.UnitDelay_DSTATE_ff)));

    /* End of Outputs for SubSystem: '<S119>/Count Down Reset Trigger Enabled' */

    /* Update for UnitDelay: '<S214>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_ff = rtb_OR1_ll;

    /* End of Outputs for SubSystem: '<S119>/Signal Latch On With Reset' */

    /* Switch: '<S119>/Switch1' incorporates:
     *  Switch: '<S119>/Switch3'
     *  Switch: '<S119>/Switch5'
     */
    if (rtb_TmpSignalConversionAtCustom)
    {
        /* Switch: '<S119>/Switch1' */
        TIMR_ac_B.Switch1_e = TIMR_ac_B.RaceModePopup;
    }
    else if (rtb_LogicalOperator9)
    {
        /* Switch: '<S119>/Switch4' incorporates:
         *  Switch: '<S119>/Switch2'
         *  Switch: '<S119>/Switch3'
         */
        if (rtb_TmpSignalConversionAtTrack_)
        {
            /* Switch: '<S119>/Switch1' incorporates:
             *  Switch: '<S119>/Switch4'
             */
            TIMR_ac_B.Switch1_e = TIMR_ac_B.RaceModePopup;
        }
        else if (VeTIMR_b_RejectTerrain)
        {
            /* Switch: '<S119>/Switch2' incorporates:
             *  Constant: '<S211>/Constant'
             *  Switch: '<S119>/Switch1'
             *  Switch: '<S119>/Switch4'
             */
            TIMR_ac_B.Switch1_e = CeTIMR_e_TM1;
        }
        else
        {
            /* Switch: '<S119>/Switch1' incorporates:
             *  Constant: '<S209>/Constant'
             *  Switch: '<S119>/Switch2'
             *  Switch: '<S119>/Switch4'
             */
            TIMR_ac_B.Switch1_e = CeTIMR_e_TM40;
        }

        /* End of Switch: '<S119>/Switch4' */
    }
    else if (rtb_OR1_ll)
    {
        /* Switch: '<S119>/Switch5' incorporates:
         *  Switch: '<S119>/Switch1'
         *  Switch: '<S119>/Switch3'
         *  UnitDelay: '<S119>/Unit Delay2'
         */
        TIMR_ac_B.Switch1_e = TIMR_ac_DW.UnitDelay2_DSTATE_n;
    }
    else
    {
        /* Switch: '<S119>/Switch1' incorporates:
         *  Constant: '<S212>/Constant'
         *  Switch: '<S119>/Switch3'
         *  Switch: '<S119>/Switch5'
         */
        TIMR_ac_B.Switch1_e = CeTIMR_e_TM0;
    }

    /* End of Switch: '<S119>/Switch1' */

    /* Update for UnitDelay: '<S110>/Unit Delay3' */
    TIMR_ac_DW.UnitDelay3_DSTATE_o = TIMR_ac_B.DeadPedalNewRace;

    /* Update for UnitDelay: '<S108>/Unit Delay2' incorporates:
     *  VariantMerge generated from: '<S61>/RaceOptionsSts'
     */
    TIMR_ac_DW.UnitDelay2_DSTATE_i = TIMR_ac_B.RaceOptions_Sts;

    /* Update for UnitDelay: '<S127>/Unit Delay1' incorporates:
     *  Switch: '<S127>/Switch2'
     */
    TIMR_ac_DW.UnitDelay1_DSTATE_g = VeTIMR_e_RaceReqOvrdArb;

    /* Update for UnitDelay: '<S108>/Unit Delay' incorporates:
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    TIMR_ac_DW.UnitDelay_DSTATE_io = TIMR_ac_B.RaceModeSts;

    /* Update for UnitDelay: '<S127>/Unit Delay' incorporates:
     *  UnitDelay: '<S108>/Unit Delay'
     */
    TIMR_ac_DW.UnitDelay_DSTATE_nk = TIMR_ac_B.UnitDelay;

    /* Update for UnitDelay: '<S110>/Unit Delay2' incorporates:
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    TIMR_ac_DW.UnitDelay2_DSTATE_g = TIMR_ac_B.RaceModeSts;

    /* Update for UnitDelay: '<S110>/Unit Delay4' incorporates:
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    TIMR_ac_DW.UnitDelay4_DSTATE_f = TIMR_ac_B.RaceModeSts;

    /* Switch: '<S116>/Switch2' incorporates:
     *  Constant: '<S197>/Constant'
     *  RelationalOperator: '<S116>/Relational Operator1'
     *  VariantMerge generated from: '<S61>/RaceOptionsSts'
     */
    if (CeTIMR_e_LaunchControl == ((uint32)TIMR_ac_B.RaceOptions_Sts))
    {
        /* Update for UnitDelay: '<S116>/Unit Delay2' */
        TIMR_ac_DW.UnitDelay2_DSTATE_d = TIMR_ac_B.UnitDelay2;
    }
    else
    {
        /* Update for UnitDelay: '<S116>/Unit Delay2' incorporates:
         *  SignalConversion generated from: '<S22>/VeTIMR_e_LaunchIntensity'
         */
        TIMR_ac_DW.UnitDelay2_DSTATE_d = rtb_TmpSignalConversionAtVeT_ot;
    }

    /* End of Switch: '<S116>/Switch2' */

    /* Update for UnitDelay: '<S117>/Unit Delay2' incorporates:
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    TIMR_ac_DW.UnitDelay2_DSTATE_p = TIMR_ac_B.RaceModeSts;

    /* Update for UnitDelay: '<S119>/Unit Delay1' */
    TIMR_ac_DW.UnitDelay1_DSTATE_m = TIMR_ac_B.RaceModePopup;

    /* Update for UnitDelay: '<S119>/Unit Delay2' incorporates:
     *  Switch: '<S119>/Switch1'
     */
    TIMR_ac_DW.UnitDelay2_DSTATE_n = TIMR_ac_B.Switch1_e;

    /* End of Outputs for SubSystem: '<S61>/Race_Mode_Arbitration_LP1' */
#endif

    /* End of Outputs for SubSystem: '<S54>/Race_Mode_Arbitration' */

    /* RelationalOperator: '<S472>/Comparison1' incorporates:
     *  Constant: '<S481>/Constant'
     */
    rtb_Comparison1_o = (CeTIMR_e_Down_Activated == ((uint32)
                          rtb_Comparison6_k_tmp));

    /* RelationalOperator: '<S472>/Comparison5' incorporates:
     *  Constant: '<S479>/Constant'
     */
    rtb_Comparison5_g = (CeTIMR_e_Up_Activated == ((uint32)rtb_Comparison6_k_tmp));

    /* Logic: '<S472>/Logical2' */
    rtb_TmpSignalConversionAtTrack_ = !rtb_Comparison5_g;

    /* Outputs for Atomic SubSystem: '<S472>/Signal Latch On With Reset' */
    /* Logic: '<S503>/OR1' incorporates:
     *  Logic: '<S472>/Logical1'
     *  Logic: '<S503>/NOT'
     *  Logic: '<S503>/OR'
     *  UnitDelay: '<S472>/Unit Delay1'
     *  UnitDelay: '<S503>/Unit Delay'
     */
    rtb_TmpSignalConversionAtCustom = (((TIMR_ac_DW.UnitDelay1_DSTATE) &&
        rtb_Comparison5_g) || ((!rtb_TmpSignalConversionAtTrack_) &&
        (TIMR_ac_DW.UnitDelay_DSTATE_l0)));

    /* Update for UnitDelay: '<S503>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_l0 = rtb_TmpSignalConversionAtCustom;

    /* End of Outputs for SubSystem: '<S472>/Signal Latch On With Reset' */

    /* Outputs for Atomic SubSystem: '<S472>/Count Down  Reset Trigger Enabled' */
    /* Outputs for Atomic SubSystem: '<S474>/EdgeRising_F2T' */
    /* Logic: '<S509>/OR1' incorporates:
     *  UnitDelay: '<S509>/Unit Delay'
     */
    rtb_LogicalOperator9 = !TIMR_ac_DW.UnitDelay_DSTATE_h;

    /* Update for UnitDelay: '<S509>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_h = rtb_TmpSignalConversionAtTrack_;

    /* Switch: '<S474>/Switch1' incorporates:
     *  Constant: '<S474>/Constant Value'
     *  Logic: '<S474>/AND'
     *  Logic: '<S509>/AND'
     *  RelationalOperator: '<S474>/Greater  Than'
     *  Switch: '<S474>/Switch2'
     *  UnitDelay: '<S474>/Unit Delay'
     */
    if (rtb_TmpSignalConversionAtTrack_ && rtb_LogicalOperator9)
    {
        /* Switch: '<S474>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         */
        rtb_Switch1_g1 = KeTIMR_t_MaxPressTimeSwitches;
    }
    else if (rtb_TmpSignalConversionAtCustom && (((sint32)
               TIMR_ac_DW.UnitDelay_DSTATE_o) > 0))
    {
        /* Switch: '<S474>/Switch2' incorporates:
         *  Constant: '<S474>/Constant Value1'
         *  Sum: '<S474>/Subtraction'
         *  Switch: '<S474>/Switch1'
         *  UnitDelay: '<S474>/Unit Delay'
         */
        rtb_Switch1_g1 = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_o) - 1));
    }
    else
    {
        /* Switch: '<S474>/Switch1' incorporates:
         *  Switch: '<S474>/Switch2'
         *  UnitDelay: '<S474>/Unit Delay'
         */
        rtb_Switch1_g1 = TIMR_ac_DW.UnitDelay_DSTATE_o;
    }

    /* End of Switch: '<S474>/Switch1' */
    /* End of Outputs for SubSystem: '<S474>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S474>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_o = rtb_Switch1_g1;

    /* End of Outputs for SubSystem: '<S472>/Count Down  Reset Trigger Enabled' */

    /* Logic: '<S472>/Logical5' */
    rtb_LogicalOperator9 = !rtb_Comparison1_o;

    /* Outputs for Atomic SubSystem: '<S472>/Signal Latch On With Reset1' */
    /* Logic: '<S504>/OR1' incorporates:
     *  Logic: '<S472>/Logical4'
     *  Logic: '<S504>/NOT'
     *  Logic: '<S504>/OR'
     *  UnitDelay: '<S472>/Unit Delay2'
     *  UnitDelay: '<S504>/Unit Delay'
     */
    rtb_TmpSignalConversionAtTrack_ = (((TIMR_ac_DW.UnitDelay2_DSTATE_l) &&
        rtb_Comparison1_o) || ((!rtb_LogicalOperator9) &&
        (TIMR_ac_DW.UnitDelay_DSTATE_b4)));

    /* Update for UnitDelay: '<S504>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_b4 = rtb_TmpSignalConversionAtTrack_;

    /* End of Outputs for SubSystem: '<S472>/Signal Latch On With Reset1' */

    /* Outputs for Atomic SubSystem: '<S472>/Count Down  Reset Trigger Enabled1' */
    /* Outputs for Atomic SubSystem: '<S475>/EdgeRising_F2T' */
    /* Logic: '<S510>/OR1' incorporates:
     *  UnitDelay: '<S510>/Unit Delay'
     */
    rtb_OR1_ll = !TIMR_ac_DW.UnitDelay_DSTATE_i3;

    /* Update for UnitDelay: '<S510>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_i3 = rtb_LogicalOperator9;

    /* Switch: '<S475>/Switch1' incorporates:
     *  Constant: '<S475>/Constant Value'
     *  Logic: '<S475>/AND'
     *  Logic: '<S510>/AND'
     *  RelationalOperator: '<S475>/Greater  Than'
     *  Switch: '<S475>/Switch2'
     *  UnitDelay: '<S475>/Unit Delay'
     */
    if (rtb_LogicalOperator9 && rtb_OR1_ll)
    {
        /* Switch: '<S475>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         */
        rtb_Switch1_e = KeTIMR_t_MaxPressTimeSwitches;
    }
    else if (rtb_TmpSignalConversionAtTrack_ && (((sint32)
               TIMR_ac_DW.UnitDelay_DSTATE_i) > 0))
    {
        /* Switch: '<S475>/Switch2' incorporates:
         *  Constant: '<S475>/Constant Value1'
         *  Sum: '<S475>/Subtraction'
         *  Switch: '<S475>/Switch1'
         *  UnitDelay: '<S475>/Unit Delay'
         */
        rtb_Switch1_e = (uint16)((sint32)(((sint32)TIMR_ac_DW.UnitDelay_DSTATE_i)
            - 1));
    }
    else
    {
        /* Switch: '<S475>/Switch1' incorporates:
         *  Switch: '<S475>/Switch2'
         *  UnitDelay: '<S475>/Unit Delay'
         */
        rtb_Switch1_e = TIMR_ac_DW.UnitDelay_DSTATE_i;
    }

    /* End of Switch: '<S475>/Switch1' */
    /* End of Outputs for SubSystem: '<S475>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S475>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_i = rtb_Switch1_e;

    /* End of Outputs for SubSystem: '<S472>/Count Down  Reset Trigger Enabled1' */

    /* Logic: '<S472>/Logical10' */
    rtb_LogicalOperator9 = !rtb_RelationalOperator3_f;

    /* Outputs for Atomic SubSystem: '<S472>/Signal Latch On With Reset2' */
    /* Logic: '<S505>/OR1' incorporates:
     *  Logic: '<S472>/Logical8'
     *  Logic: '<S505>/NOT'
     *  Logic: '<S505>/OR'
     *  UnitDelay: '<S472>/Unit Delay7'
     *  UnitDelay: '<S505>/Unit Delay'
     */
    rtb_RelationalOperator3_f = (((TIMR_ac_DW.UnitDelay7_DSTATE) &&
        rtb_RelationalOperator3_f) || ((!rtb_LogicalOperator9) &&
        (TIMR_ac_DW.UnitDelay_DSTATE_lc)));

    /* Update for UnitDelay: '<S505>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_lc = rtb_RelationalOperator3_f;

    /* End of Outputs for SubSystem: '<S472>/Signal Latch On With Reset2' */

    /* Outputs for Atomic SubSystem: '<S472>/Count Down  Reset Trigger Enabled2' */
    /* Outputs for Atomic SubSystem: '<S476>/EdgeRising_F2T' */
    /* Logic: '<S511>/OR1' incorporates:
     *  UnitDelay: '<S511>/Unit Delay'
     */
    rtb_OR1_ll = !TIMR_ac_DW.UnitDelay_DSTATE_et;

    /* Update for UnitDelay: '<S511>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_et = rtb_LogicalOperator9;

    /* Switch: '<S476>/Switch1' incorporates:
     *  Constant: '<S476>/Constant Value'
     *  Logic: '<S476>/AND'
     *  Logic: '<S511>/AND'
     *  RelationalOperator: '<S476>/Greater  Than'
     *  Switch: '<S476>/Switch2'
     *  UnitDelay: '<S476>/Unit Delay'
     */
    if (rtb_LogicalOperator9 && rtb_OR1_ll)
    {
        /* Switch: '<S476>/Switch1' incorporates:
         *  Constant: '<S471>/Calib'
         */
        rtb_Switch1_dq = KeTIMR_t_MaxPressTimeSwitches;
    }
    else if (rtb_RelationalOperator3_f && (((sint32)
               TIMR_ac_DW.UnitDelay_DSTATE_d) > 0))
    {
        /* Switch: '<S476>/Switch2' incorporates:
         *  Constant: '<S476>/Constant Value1'
         *  Sum: '<S476>/Subtraction'
         *  Switch: '<S476>/Switch1'
         *  UnitDelay: '<S476>/Unit Delay'
         */
        rtb_Switch1_dq = (uint16)((sint32)(((sint32)
            TIMR_ac_DW.UnitDelay_DSTATE_d) - 1));
    }
    else
    {
        /* Switch: '<S476>/Switch1' incorporates:
         *  Switch: '<S476>/Switch2'
         *  UnitDelay: '<S476>/Unit Delay'
         */
        rtb_Switch1_dq = TIMR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S476>/Switch1' */
    /* End of Outputs for SubSystem: '<S476>/EdgeRising_F2T' */

    /* Update for UnitDelay: '<S476>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_d = rtb_Switch1_dq;

    /* End of Outputs for SubSystem: '<S472>/Count Down  Reset Trigger Enabled2' */

    /* SignalConversion generated from: '<S54>/Variant Source' */
#if !Rte_SysCon_Variant_TIMR_1

    /* VariantMerge generated from: '<S54>/Variant Source' incorporates:
     *  Switch: '<S59>/Switch1'
     */
    TIMR_ac_B.VariantMerge_For_Variant_Source = rtb_TmpSignalConversionAtRadio_;

#endif

    /* End of SignalConversion generated from: '<S54>/Variant Source' */

    /* Update for UnitDelay: '<S57>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_mj = rtb_AND_pi;

    /* Update for UnitDelay: '<S57>/Unit Delay2' */
    TIMR_ac_DW.UnitDelay2_DSTATE = rtb_Comparison5;

    /* Update for UnitDelay: '<S69>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_mt = rtb_Switch_nz;

    /* Update for UnitDelay: '<S472>/Unit Delay9' */
    TIMR_ac_DW.UnitDelay9_DSTATE = rtb_RelationalOperator3_f;

    /* Outputs for Atomic SubSystem: '<S472>/Count Down  Reset Trigger Enabled2' */
    /* Update for UnitDelay: '<S472>/Unit Delay8' incorporates:
     *  Constant: '<S476>/Constant Value2'
     *  RelationalOperator: '<S476>/Greater  Than1'
     */
    TIMR_ac_DW.UnitDelay8_DSTATE = (((sint32)rtb_Switch1_dq) > 0);

    /* End of Outputs for SubSystem: '<S472>/Count Down  Reset Trigger Enabled2' */

    /* Update for UnitDelay: '<S472>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_k3 = rtb_Switch1_io;

    /* Update for UnitDelay: '<S472>/Unit Delay5' */
    TIMR_ac_DW.UnitDelay5_DSTATE = rtb_TmpSignalConversionAtCustom;

    /* Outputs for Atomic SubSystem: '<S472>/Count Down  Reset Trigger Enabled' */
    /* Update for UnitDelay: '<S472>/Unit Delay4' incorporates:
     *  Constant: '<S474>/Constant Value2'
     *  RelationalOperator: '<S474>/Greater  Than1'
     */
    TIMR_ac_DW.UnitDelay4_DSTATE = (((sint32)rtb_Switch1_g1) > 0);

    /* End of Outputs for SubSystem: '<S472>/Count Down  Reset Trigger Enabled' */

    /* Update for UnitDelay: '<S472>/Unit Delay6' */
    TIMR_ac_DW.UnitDelay6_DSTATE = rtb_TmpSignalConversionAtTrack_;

    /* Outputs for Atomic SubSystem: '<S472>/Count Down  Reset Trigger Enabled1' */
    /* Update for UnitDelay: '<S472>/Unit Delay3' incorporates:
     *  Constant: '<S475>/Constant Value2'
     *  RelationalOperator: '<S475>/Greater  Than1'
     */
    TIMR_ac_DW.UnitDelay3_DSTATE = (((sint32)rtb_Switch1_e) > 0);

    /* End of Outputs for SubSystem: '<S472>/Count Down  Reset Trigger Enabled1' */

    /* Update for UnitDelay: '<S472>/Unit Delay1' */
    TIMR_ac_DW.UnitDelay1_DSTATE = rtb_Comparison6_l;

    /* Update for UnitDelay: '<S472>/Unit Delay2' */
    TIMR_ac_DW.UnitDelay2_DSTATE_l = rtb_Comparison6_l;

    /* Update for UnitDelay: '<S472>/Unit Delay7' */
    TIMR_ac_DW.UnitDelay7_DSTATE = rtb_AND_gk1;

#if Rte_SysCon_Variant_TIMR_2

    /* Inport: '<Root>/VeDMAB_y_StatusByte_TerrSwBankModInt' */
    (void)Rte_Read_VeDMAB_y_StatusByte_TerrSwBankModInt_Value(&tmpRead_3);

    /* Inport: '<Root>/VeDFIR_b_IsDiagGlobalConditionsValid' */
    (void)Rte_Read_VeDFIR_b_IsDiagGlobalConditionsValid_Value
        (&rtb_LogicalOperator2_hw);

    /* Outputs for Function Call SubSystem: '<S22>/Terrain_Mode_Diagnostics' */
    /* Logic: '<S554>/Logical Operator2' incorporates:
     *  Constant: '<S567>/Constant'
     *  Constant: '<S568>/Constant'
     *  RelationalOperator: '<S554>/Relational Operator5'
     *  RelationalOperator: '<S554>/Relational Operator6'
     */
    rtb_AND_pi = ((((uint32)rtb_Comparison5_tmp) == CeTIMR_e_ShortToPower) ||
                  (((uint32)rtb_Comparison5_tmp) == CeTIMR_e_ShortToGround));

    /* Logic: '<S56>/Logical Operator2' incorporates:
     *  Constant: '<S556>/Constant'
     *  Constant: '<S557>/Constant'
     *  Constant: '<S558>/Constant1'
     *  Constant: '<S558>/Constant2'
     *  Constant: '<S559>/Constant1'
     *  Constant: '<S559>/Constant2'
     *  Constant: '<S560>/Constant1'
     *  Constant: '<S560>/Constant2'
     *  Constant: '<S561>/Constant1'
     *  Constant: '<S561>/Constant2'
     *  Logic: '<S558>/Logical Operator'
     *  Logic: '<S559>/Logical Operator'
     *  Logic: '<S560>/Logical Operator'
     *  Logic: '<S561>/Logical Operator'
     *  Logic: '<S56>/Logical Operator'
     *  Logic: '<S56>/Logical Operator1'
     *  Logic: '<S56>/NOT'
     *  Logic: '<S56>/NOT1'
     *  Logic: '<S56>/NOT2'
     *  Logic: '<S56>/NOT3'
     *  RelationalOperator: '<S558>/Relational Operator1'
     *  RelationalOperator: '<S558>/Relational Operator2'
     *  RelationalOperator: '<S559>/Relational Operator1'
     *  RelationalOperator: '<S559>/Relational Operator2'
     *  RelationalOperator: '<S560>/Relational Operator1'
     *  RelationalOperator: '<S560>/Relational Operator2'
     *  RelationalOperator: '<S561>/Relational Operator1'
     *  RelationalOperator: '<S561>/Relational Operator2'
     *  RelationalOperator: '<S56>/Relational Operator'
     *  RelationalOperator: '<S56>/Relational Operator1'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S558>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S559>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S559>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S560>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S560>/Bitwise Operator2'
     *  S-Function (sfix_bitop): '<S561>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S561>/Bitwise Operator2'
     */
    rtb_LogicalOperator2_hw = ((((((uint32)rtb_TmpSignalConversionAtVePMDR) ==
        CePMDR_e_PowerMode_Run) || (((uint32)rtb_TmpSignalConversionAtVePMDR) ==
        CePMDR_e_PowerMode_Crank)) && rtb_LogicalOperator2_hw) && ((((((((uint32)
        rtb_TmpSignalConversionAtVeDMAB) & 1U) == 0U) || ((((uint32)
        rtb_TmpSignalConversionAtVeDMAB) & 64U) != 0U)) && (((((uint32)
        rtb_TmpSignalConversionAtVeDM_j) & 1U) == 0U) || ((((uint32)
        rtb_TmpSignalConversionAtVeDM_j) & 64U) != 0U))) && (((((uint32)
        rtb_TmpSignalConversionAtVeD_b4) & 1U) == 0U) || ((((uint32)
        rtb_TmpSignalConversionAtVeD_b4) & 64U) != 0U))) && (((((uint32)
        rtb_TmpSignalConversionAtVeDM_b) & 1U) == 0U) || ((((uint32)
        rtb_TmpSignalConversionAtVeDM_b) & 64U) != 0U))));

    /* RelationalOperator: '<S554>/Relational Operator2' incorporates:
     *  Constant: '<S554>/Constant2'
     *  S-Function (sfix_bitop): '<S554>/Bitwise Operator'
     */
    rtb_AND_gk1 = ((((uint32)tmpRead_3) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S554>/EdgeFalling' */
    /* Logic: '<S563>/AND' incorporates:
     *  Logic: '<S563>/OR1'
     *  UnitDelay: '<S563>/Unit Delay'
     */
    rtb_Comparison5 = ((!rtb_AND_gk1) && (TIMR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S563>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_n = rtb_AND_gk1;

    /* End of Outputs for SubSystem: '<S554>/EdgeFalling' */

    /* Chart: '<S554>/Custom_Interface_Button_Diag' incorporates:
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  Constant: '<S575>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Custom_Interface_Button_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Custom_Interface_Button_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c30_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Custom_Interface_Button_Diag */
        TIMR_ac_DW.is_active_c30_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Custom_Interface_Button_Diag */
        /* Transition: '<S562>:12' */
        VeTIMR_b_Custom_Interface_Button_Fail = false;
        VeTIMR_b_Custom_Interface_Button_Pass = false;
        TIMR_ac_DW.is_c30_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S562>:11' */
        /* Transition: '<S562>:14' */
        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S562>:13' */
        VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c30_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S562>:11' */
            if (((~((sint32)(rtb_LogicalOperator2_hw ? 1 : 0))) != 0) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S562>:48' */
                VeTIMR_b_Custom_Interface_Button_Fail = false;
                VeTIMR_b_Custom_Interface_Button_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S562>:11' */
                /* Entry Internal 'DEBOUNCE': '<S562>:11' */
                /* Transition: '<S562>:14' */
                TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S562>:13' */
                VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_h)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_Failing;

                    /* During 'Failing': '<S562>:26' */
                    /* Transition: '<S562>:47' */
                    if (VeTIMR_t_Custom_Interface_Button_timeCnt >=
                            KeTIMR_t_TiDebounceSet)
                    {
                        /* Transition: '<S562>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c30_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S562>:31' */
                        VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_Fail;
                        VeTIMR_b_Custom_Interface_Button_Pass = false;
                        VeTIMR_b_Custom_Interface_Button_Fail = true;
                    }
                    else if ((~((sint32)(rtb_AND_pi ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S562>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S562>:19' */
                        VeTIMR_e_Custom_Interface_Button_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Custom_Interface_Button_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Custom_Interface_Button_timeCnt =
                            VeTIMR_t_Custom_Interface_Button_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    /* During 'IDLE': '<S562>:13' */
                    /* Transition: '<S562>:16' */
                    if (rtb_AND_pi)
                    {
                        /* Transition: '<S562>:18' */
                        /* Transition: '<S562>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S562>:26' */
                        VeTIMR_e_Custom_Interface_Button_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Custom_Interface_Button_timeCnt = 0.0F;
                    }
                    else
                    {
                        /* Transition: '<S562>:20' */
                        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S562>:19' */
                        VeTIMR_e_Custom_Interface_Button_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Custom_Interface_Button_timeCnt = 0.0F;
                    }
                    break;

                  default:
                    VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_Passing;

                    /* During 'PASSING': '<S562>:19' */
                    /* Transition: '<S562>:22' */
                    if (VeTIMR_t_Custom_Interface_Button_timeCnt >=
                            KeTIMR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S562>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c30_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S562>:23' */
                        VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_Pass;
                        VeTIMR_b_Custom_Interface_Button_Pass = true;
                        VeTIMR_b_Custom_Interface_Button_Fail = false;
                    }
                    else if (rtb_AND_pi)
                    {
                        /* Transition: '<S562>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S562>:26' */
                        VeTIMR_e_Custom_Interface_Button_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Custom_Interface_Button_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Custom_Interface_Button_timeCnt =
                            VeTIMR_t_Custom_Interface_Button_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S562>:31' */
            /* Transition: '<S562>:37' */
            TIMR_ac_DW.is_c30_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S562>:11' */
            /* Transition: '<S562>:14' */
            TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S562>:13' */
            VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S562>:23' */
            /* Transition: '<S562>:24' */
            TIMR_ac_DW.is_c30_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S562>:11' */
            /* Transition: '<S562>:14' */
            TIMR_ac_DW.is_DEBOUNCE_h = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S562>:13' */
            VeTIMR_e_Custom_Interface_Button_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S554>/Custom_Interface_Button_Diag' */

    /* Outputs for Function Call SubSystem: '<S22>/TIMI_TX_ovrrd' */
    /* Logic: '<S554>/Logical Operator' incorporates:
     *  Constant: '<S564>/Constant'
     *  Constant: '<S570>/Constant'
     *  DataTypeConversion: '<S540>/DataTypeConversion'
     *  RelationalOperator: '<S554>/Relational Operator'
     *  RelationalOperator: '<S554>/Relational Operator1'
     *  Switch: '<S55>/Switch6'
     */
    rtb_AND_pi = ((((uint32)rtb_Switch6) == CeTIMR_e_ShortToPower) || (((uint32)
                    rtb_Switch6) == CeTIMR_e_ShortToGround));

    /* End of Outputs for SubSystem: '<S22>/TIMI_TX_ovrrd' */

    /* Chart: '<S554>/Left_Terrain_Mode_Switch_Diag' incorporates:
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  Constant: '<S575>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Left_Terrain_Mode_Switch_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Left_Terrain_Mode_Switch_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c28_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Left_Terrain_Mode_Switch_Diag */
        TIMR_ac_DW.is_active_c28_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Left_Terrain_Mode_Switch_Diag */
        /* Transition: '<S576>:12' */
        VeTIMR_b_Left_Terrain_Mode_Switch_Fail = false;
        VeTIMR_b_Left_Terrain_Mode_Switch_Pass = false;
        TIMR_ac_DW.is_c28_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S576>:11' */
        /* Transition: '<S576>:14' */
        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S576>:13' */
        VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c28_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S576>:11' */
            if (((~((sint32)(rtb_LogicalOperator2_hw ? 1 : 0))) != 0) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S576>:48' */
                VeTIMR_b_Left_Terrain_Mode_Switch_Fail = false;
                VeTIMR_b_Left_Terrain_Mode_Switch_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S576>:11' */
                /* Entry Internal 'DEBOUNCE': '<S576>:11' */
                /* Transition: '<S576>:14' */
                TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S576>:13' */
                VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_n)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_Failing;

                    /* During 'Failing': '<S576>:26' */
                    /* Transition: '<S576>:47' */
                    if (VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt >=
                            KeTIMR_t_TiDebounceSet)
                    {
                        /* Transition: '<S576>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c28_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S576>:31' */
                        VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_Fail;
                        VeTIMR_b_Left_Terrain_Mode_Switch_Pass = false;
                        VeTIMR_b_Left_Terrain_Mode_Switch_Fail = true;
                    }
                    else if ((~((sint32)(rtb_AND_pi ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S576>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S576>:19' */
                        VeTIMR_e_Left_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt =
                            VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    /* During 'IDLE': '<S576>:13' */
                    /* Transition: '<S576>:16' */
                    if (rtb_AND_pi)
                    {
                        /* Transition: '<S576>:18' */
                        /* Transition: '<S576>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S576>:26' */
                        VeTIMR_e_Left_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        /* Transition: '<S576>:20' */
                        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S576>:19' */
                        VeTIMR_e_Left_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    break;

                  default:
                    VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_Passing;

                    /* During 'PASSING': '<S576>:19' */
                    /* Transition: '<S576>:22' */
                    if (VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt >=
                            KeTIMR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S576>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c28_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S576>:23' */
                        VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_Pass;
                        VeTIMR_b_Left_Terrain_Mode_Switch_Pass = true;
                        VeTIMR_b_Left_Terrain_Mode_Switch_Fail = false;
                    }
                    else if (rtb_AND_pi)
                    {
                        /* Transition: '<S576>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S576>:26' */
                        VeTIMR_e_Left_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt =
                            VeTIMR_t_Left_Terrain_Mode_Switch_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S576>:31' */
            /* Transition: '<S576>:37' */
            TIMR_ac_DW.is_c28_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S576>:11' */
            /* Transition: '<S576>:14' */
            TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S576>:13' */
            VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S576>:23' */
            /* Transition: '<S576>:24' */
            TIMR_ac_DW.is_c28_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S576>:11' */
            /* Transition: '<S576>:14' */
            TIMR_ac_DW.is_DEBOUNCE_n = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S576>:13' */
            VeTIMR_e_Left_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S554>/Left_Terrain_Mode_Switch_Diag' */

    /* Logic: '<S554>/Logical Operator1' incorporates:
     *  Constant: '<S565>/Constant'
     *  Constant: '<S566>/Constant'
     *  DataTypeConversion: '<S539>/DataTypeConversion'
     *  RelationalOperator: '<S554>/Relational Operator3'
     *  RelationalOperator: '<S554>/Relational Operator4'
     */
    rtb_AND_gk1 = ((((uint32)DataTypeConversion_a) == CeTIMR_e_ShortToPower) ||
                   (((uint32)DataTypeConversion_a) == CeTIMR_e_ShortToGround));

    /* Logic: '<S554>/Logical Operator3' incorporates:
     *  Constant: '<S569>/Constant'
     *  Constant: '<S571>/Constant'
     *  RelationalOperator: '<S554>/Relational Operator7'
     *  RelationalOperator: '<S554>/Relational Operator8'
     */
    rtb_AND_pi = ((((uint32)rtb_TmpSignalConversionAtVeTIMI) ==
                   CeTIMR_e_Short_To_Power) || (((uint32)
                    rtb_TmpSignalConversionAtVeTIMI) == CeTIMR_e_Short_To_Ground));

    /* Chart: '<S554>/Right_Terrain_Mode_Switch_Diag' incorporates:
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  Constant: '<S575>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Right_Terrain_Mode_Switch_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Right_Terrain_Mode_Switch_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c29_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Right_Terrain_Mode_Switch_Diag */
        TIMR_ac_DW.is_active_c29_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Right_Terrain_Mode_Switch_Diag */
        /* Transition: '<S577>:12' */
        VeTIMR_b_Right_Terrain_Mode_Switch_Fail = false;
        VeTIMR_b_Right_Terrain_Mode_Switch_Pass = false;
        TIMR_ac_DW.is_c29_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S577>:11' */
        /* Transition: '<S577>:14' */
        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S577>:13' */
        VeTIMR_e_Right_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c29_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S577>:11' */
            if (((~((sint32)(rtb_LogicalOperator2_hw ? 1 : 0))) != 0) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S577>:48' */
                VeTIMR_b_Right_Terrain_Mode_Switch_Fail = false;
                VeTIMR_b_Right_Terrain_Mode_Switch_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S577>:11' */
                /* Entry Internal 'DEBOUNCE': '<S577>:11' */
                /* Transition: '<S577>:14' */
                TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S577>:13' */
                VeTIMR_e_Right_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_f)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Right_Terrain_Mode_Switch_Status = CeTIMR_e_Failing;

                    /* During 'Failing': '<S577>:26' */
                    /* Transition: '<S577>:47' */
                    if (VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt >=
                            KeTIMR_t_TiDebounceSet)
                    {
                        /* Transition: '<S577>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c29_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S577>:31' */
                        VeTIMR_e_Right_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Fail;
                        VeTIMR_b_Right_Terrain_Mode_Switch_Pass = false;
                        VeTIMR_b_Right_Terrain_Mode_Switch_Fail = true;
                    }
                    else if ((~((sint32)(rtb_AND_gk1 ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S577>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S577>:19' */
                        VeTIMR_e_Right_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt =
                            VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    /* During 'IDLE': '<S577>:13' */
                    /* Transition: '<S577>:16' */
                    if (rtb_AND_gk1)
                    {
                        /* Transition: '<S577>:18' */
                        /* Transition: '<S577>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S577>:26' */
                        VeTIMR_e_Right_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        /* Transition: '<S577>:20' */
                        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S577>:19' */
                        VeTIMR_e_Right_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    break;

                  default:
                    VeTIMR_e_Right_Terrain_Mode_Switch_Status = CeTIMR_e_Passing;

                    /* During 'PASSING': '<S577>:19' */
                    /* Transition: '<S577>:22' */
                    if (VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt >=
                            KeTIMR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S577>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c29_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S577>:23' */
                        VeTIMR_e_Right_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Pass;
                        VeTIMR_b_Right_Terrain_Mode_Switch_Pass = true;
                        VeTIMR_b_Right_Terrain_Mode_Switch_Fail = false;
                    }
                    else if (rtb_AND_gk1)
                    {
                        /* Transition: '<S577>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S577>:26' */
                        VeTIMR_e_Right_Terrain_Mode_Switch_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt =
                            VeTIMR_t_Right_Terrain_Mode_Switch_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S577>:31' */
            /* Transition: '<S577>:37' */
            TIMR_ac_DW.is_c29_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S577>:11' */
            /* Transition: '<S577>:14' */
            TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S577>:13' */
            VeTIMR_e_Right_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S577>:23' */
            /* Transition: '<S577>:24' */
            TIMR_ac_DW.is_c29_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S577>:11' */
            /* Transition: '<S577>:14' */
            TIMR_ac_DW.is_DEBOUNCE_f = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S577>:13' */
            VeTIMR_e_Right_Terrain_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S554>/Right_Terrain_Mode_Switch_Diag' */

    /* Outputs for Atomic SubSystem: '<S578>/EdgeFalling1' */
    /* Update for UnitDelay: '<S580>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_mz = true;

    /* End of Outputs for SubSystem: '<S578>/EdgeFalling1' */

    /* Chart: '<S554>/Terrain_Toggle_Mode_Switch_Diag' incorporates:
     *  Constant: '<S573>/Calib'
     *  Constant: '<S574>/Calib'
     *  Constant: '<S575>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Terrain_Toggle_Mode_Switch_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Terrain_Toggle_Mode_Switch_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c31_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Terrain_Toggle_Mode_Switch_Diag */
        TIMR_ac_DW.is_active_c31_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_B1F08/Terrain_Toggle_Mode_Switch_Diag */
        /* Transition: '<S579>:12' */
        VeTIMR_b_Terrain_Toggle_Mode_Switch_Fail = false;
        VeTIMR_b_Terrain_Toggle_Mode_Switch_Pass = false;
        TIMR_ac_DW.is_c31_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S579>:11' */
        /* Transition: '<S579>:14' */
        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S579>:13' */
        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c31_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S579>:11' */
            if (((~((sint32)(rtb_LogicalOperator2_hw ? 1 : 0))) != 0) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S579>:48' */
                VeTIMR_b_Terrain_Toggle_Mode_Switch_Fail = false;
                VeTIMR_b_Terrain_Toggle_Mode_Switch_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S579>:11' */
                /* Entry Internal 'DEBOUNCE': '<S579>:11' */
                /* Transition: '<S579>:14' */
                TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S579>:13' */
                VeTIMR_e_Terrain_Toggle_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_g)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                        CeTIMR_e_Failing;

                    /* During 'Failing': '<S579>:26' */
                    /* Transition: '<S579>:47' */
                    if (VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt >=
                            KeTIMR_t_TiDebounceSet)
                    {
                        /* Transition: '<S579>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c31_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S579>:31' */
                        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                            CeTIMR_e_Fail;
                        VeTIMR_b_Terrain_Toggle_Mode_Switch_Pass = false;
                        VeTIMR_b_Terrain_Toggle_Mode_Switch_Fail = true;
                    }
                    else if ((~((sint32)(rtb_AND_pi ? 1 : 0))) != 0)
                    {
                        /* Transition: '<S579>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S579>:19' */
                        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt =
                            VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    /* During 'IDLE': '<S579>:13' */
                    /* Transition: '<S579>:16' */
                    if (rtb_AND_pi)
                    {
                        /* Transition: '<S579>:18' */
                        /* Transition: '<S579>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S579>:26' */
                        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        /* Transition: '<S579>:20' */
                        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S579>:19' */
                        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt = 0.0F;
                    }
                    break;

                  default:
                    VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                        CeTIMR_e_Passing;

                    /* During 'PASSING': '<S579>:19' */
                    /* Transition: '<S579>:22' */
                    if (VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt >=
                            KeTIMR_t_TiDebounceHeal)
                    {
                        /* Transition: '<S579>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c31_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S579>:23' */
                        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                            CeTIMR_e_Pass;
                        VeTIMR_b_Terrain_Toggle_Mode_Switch_Pass = true;
                        VeTIMR_b_Terrain_Toggle_Mode_Switch_Fail = false;
                    }
                    else if (rtb_AND_pi)
                    {
                        /* Transition: '<S579>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S579>:26' */
                        VeTIMR_e_Terrain_Toggle_Mode_Switch_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt =
                            VeTIMR_t_Terrain_Toggle_Mode_Switch_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S579>:31' */
            /* Transition: '<S579>:37' */
            TIMR_ac_DW.is_c31_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S579>:11' */
            /* Transition: '<S579>:14' */
            TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S579>:13' */
            VeTIMR_e_Terrain_Toggle_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S579>:23' */
            /* Transition: '<S579>:24' */
            TIMR_ac_DW.is_c31_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S579>:11' */
            /* Transition: '<S579>:14' */
            TIMR_ac_DW.is_DEBOUNCE_g = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S579>:13' */
            VeTIMR_e_Terrain_Toggle_Mode_Switch_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S554>/Terrain_Toggle_Mode_Switch_Diag' */

    /* Switch: '<S554>/Switch1' incorporates:
     *  Constant: '<S572>/Calib'
     *  Switch: '<S554>/Switch'
     */
    if (KeTIMR_b_SwitchEnbl)
    {
        /* Switch: '<S555>/Switch' incorporates:
         *  Logic: '<S554>/Logical Operator5'
         */
        rtb_AND_pi = (((VeTIMR_b_Left_Terrain_Mode_Switch_Pass) &&
                       (VeTIMR_b_Right_Terrain_Mode_Switch_Pass)) &&
                      (VeTIMR_b_Custom_Interface_Button_Pass));

        /* Switch: '<S555>/Switch1' incorporates:
         *  Logic: '<S554>/Logical Operator4'
         */
        rtb_AND_gk1 = (((VeTIMR_b_Left_Terrain_Mode_Switch_Fail) ||
                        (VeTIMR_b_Right_Terrain_Mode_Switch_Fail)) ||
                       (VeTIMR_b_Custom_Interface_Button_Fail));
    }
    else
    {
        /* Switch: '<S555>/Switch' */
        rtb_AND_pi = VeTIMR_b_Terrain_Toggle_Mode_Switch_Pass;

        /* Switch: '<S555>/Switch1' */
        rtb_AND_gk1 = VeTIMR_b_Terrain_Toggle_Mode_Switch_Fail;
    }

    /* End of Switch: '<S554>/Switch1' */

    /* If: '<S578>/If' incorporates:
     *  Logic: '<S578>/Logical5'
     */
    if (rtb_Comparison5)
    {
        /* Outputs for IfAction SubSystem: '<S578>/Init' incorporates:
         *  ActionPort: '<S582>/Action Port'
         */
        TIMR_ac_Init_d(&TIMR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S578>/Init' */
    }
    else if (rtb_AND_pi)
    {
        /* Outputs for IfAction SubSystem: '<S578>/Pass' incorporates:
         *  ActionPort: '<S583>/Action Port'
         */
        TIMR_ac_Pass(&TIMR_ac_B.Merge_l);

        /* End of Outputs for SubSystem: '<S578>/Pass' */
    }
    else
    {
        if (rtb_AND_gk1)
        {
            /* Outputs for IfAction SubSystem: '<S578>/Fail' incorporates:
             *  ActionPort: '<S581>/Action Port'
             */
            TIMR_ac_Fail(&TIMR_ac_B.Merge_l);

            /* End of Outputs for SubSystem: '<S578>/Fail' */
        }
    }

    /* End of If: '<S578>/If' */
    /* End of Outputs for SubSystem: '<S22>/Terrain_Mode_Diagnostics' */

    /* Inport: '<Root>/VeDMAB_y_StatusByte_TerrSwStuck' */
    (void)Rte_Read_VeDMAB_y_StatusByte_TerrSwStuck_Value(&tmpRead_4);

    /* Outputs for Function Call SubSystem: '<S22>/Terrain_Mode_Diagnostics' */
    /* RelationalOperator: '<S555>/Relational Operator5' incorporates:
     *  Constant: '<S593>/Constant'
     */
    rtb_AND_pi = (((uint32)rtb_Comparison5_tmp) == CeTIMR_e_Activated);

    /* RelationalOperator: '<S555>/Relational Operator6' incorporates:
     *  Constant: '<S594>/Constant'
     */
    rtb_AND_gk1 = (((uint32)rtb_Comparison5_tmp) == CeTIMR_e_NotActivated);

    /* RelationalOperator: '<S555>/Relational Operator2' incorporates:
     *  Constant: '<S555>/Constant2'
     *  S-Function (sfix_bitop): '<S555>/Bitwise Operator'
     */
    rtb_Comparison6_l = ((((uint32)tmpRead_4) & 64U) == 0U);

    /* Outputs for Atomic SubSystem: '<S555>/EdgeFalling' */
    /* Logic: '<S588>/AND' incorporates:
     *  Logic: '<S588>/OR1'
     *  UnitDelay: '<S588>/Unit Delay'
     */
    rtb_Comparison5 = ((!rtb_Comparison6_l) && (TIMR_ac_DW.UnitDelay_DSTATE_l));

    /* Update for UnitDelay: '<S588>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_l = rtb_Comparison6_l;

    /* End of Outputs for SubSystem: '<S555>/EdgeFalling' */

    /* Chart: '<S555>/Custom_Interface_ButtonStuck_Diag' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S601>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Custom_Interface_ButtonStuck_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Custom_Interface_ButtonStuck_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c37_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Custom_Interface_ButtonStuck_Diag */
        TIMR_ac_DW.is_active_c37_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Custom_Interface_ButtonStuck_Diag */
        /* Transition: '<S587>:12' */
        VeTIMR_b_Custom_Interface_ButtonStuck_Fail = false;
        VeTIMR_b_Custom_Interface_ButtonStuck_Pass = false;
        TIMR_ac_DW.is_c37_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S587>:11' */
        /* Transition: '<S587>:14' */
        TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S587>:13' */
        VeTIMR_e_Custom_Interface_ButtonStuck_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c37_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S587>:11' */
            if (((((~((sint32)(rtb_AND_pi ? 1 : 0))) != 0) && ((~((sint32)
                     (rtb_AND_gk1 ? 1 : 0))) != 0)) || ((~((sint32)
                    (rtb_LogicalOperator2_hw ? 1 : 0))) != 0)) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S587>:48' */
                VeTIMR_b_Custom_Interface_ButtonStuck_Fail = false;
                VeTIMR_b_Custom_Interface_ButtonStuck_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S587>:11' */
                /* Entry Internal 'DEBOUNCE': '<S587>:11' */
                /* Transition: '<S587>:14' */
                TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S587>:13' */
                VeTIMR_e_Custom_Interface_ButtonStuck_Status = CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_o)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                        CeTIMR_e_Failing;

                    /* During 'Failing': '<S587>:26' */
                    /* Transition: '<S587>:47' */
                    if (VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceSet)
                    {
                        /* Transition: '<S587>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c37_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S587>:31' */
                        VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                            CeTIMR_e_Fail;
                        VeTIMR_b_Custom_Interface_ButtonStuck_Pass = false;
                        VeTIMR_b_Custom_Interface_ButtonStuck_Fail = true;
                    }
                    else if (rtb_AND_gk1)
                    {
                        /* Transition: '<S587>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S587>:19' */
                        VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt =
                            VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                        CeTIMR_e_DiagIdle;

                    /* During 'IDLE': '<S587>:13' */
                    /* Transition: '<S587>:16' */
                    if (rtb_AND_pi)
                    {
                        /* Transition: '<S587>:18' */
                        /* Transition: '<S587>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S587>:26' */
                        VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_AND_gk1)
                        {
                            /* Transition: '<S587>:20' */
                            TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S587>:19' */
                            VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                                CeTIMR_e_Passing;
                            VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt = 0.0F;
                        }
                    }
                    break;

                  default:
                    VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                        CeTIMR_e_Passing;

                    /* During 'PASSING': '<S587>:19' */
                    /* Transition: '<S587>:22' */
                    if (VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceHeal)
                    {
                        /* Transition: '<S587>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c37_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S587>:23' */
                        VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                            CeTIMR_e_Pass;
                        VeTIMR_b_Custom_Interface_ButtonStuck_Pass = true;
                        VeTIMR_b_Custom_Interface_ButtonStuck_Fail = false;
                    }
                    else if (rtb_AND_pi)
                    {
                        /* Transition: '<S587>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S587>:26' */
                        VeTIMR_e_Custom_Interface_ButtonStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt =
                            VeTIMR_t_Custom_Interface_ButtonStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S587>:31' */
            /* Transition: '<S587>:37' */
            TIMR_ac_DW.is_c37_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S587>:11' */
            /* Transition: '<S587>:14' */
            TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S587>:13' */
            VeTIMR_e_Custom_Interface_ButtonStuck_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S587>:23' */
            /* Transition: '<S587>:24' */
            TIMR_ac_DW.is_c37_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S587>:11' */
            /* Transition: '<S587>:14' */
            TIMR_ac_DW.is_DEBOUNCE_o = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S587>:13' */
            VeTIMR_e_Custom_Interface_ButtonStuck_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S555>/Custom_Interface_ButtonStuck_Diag' */

    /* Outputs for Function Call SubSystem: '<S22>/TIMI_TX_ovrrd' */
    /* RelationalOperator: '<S555>/Relational Operator' incorporates:
     *  Constant: '<S589>/Constant'
     *  DataTypeConversion: '<S540>/DataTypeConversion'
     *  Switch: '<S55>/Switch6'
     */
    rtb_AND_pi = (((uint32)rtb_Switch6) == CeTIMR_e_Activated);

    /* RelationalOperator: '<S555>/Relational Operator1' incorporates:
     *  Constant: '<S590>/Constant'
     *  DataTypeConversion: '<S540>/DataTypeConversion'
     *  Switch: '<S55>/Switch6'
     */
    rtb_AND_gk1 = (((uint32)rtb_Switch6) == CeTIMR_e_NotActivated);

    /* End of Outputs for SubSystem: '<S22>/TIMI_TX_ovrrd' */

    /* Chart: '<S555>/Left_Terrain_Mode_SwitchStuck_Diag' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S601>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Left_Terrain_Mode_SwitchStuck_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Left_Terrain_Mode_SwitchStuck_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c33_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Left_Terrain_Mode_SwitchStuck_Diag */
        TIMR_ac_DW.is_active_c33_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Left_Terrain_Mode_SwitchStuck_Diag */
        /* Transition: '<S602>:12' */
        VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Fail = false;
        VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Pass = false;
        TIMR_ac_DW.is_c33_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S602>:11' */
        /* Transition: '<S602>:14' */
        TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S602>:13' */
        VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c33_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S602>:11' */
            if (((((~((sint32)(rtb_AND_pi ? 1 : 0))) != 0) && ((~((sint32)
                     (rtb_AND_gk1 ? 1 : 0))) != 0)) || ((~((sint32)
                    (rtb_LogicalOperator2_hw ? 1 : 0))) != 0)) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S602>:48' */
                VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Fail = false;
                VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S602>:11' */
                /* Entry Internal 'DEBOUNCE': '<S602>:11' */
                /* Transition: '<S602>:14' */
                TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S602>:13' */
                VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                    CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_j)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                        CeTIMR_e_Failing;

                    /* During 'Failing': '<S602>:26' */
                    /* Transition: '<S602>:47' */
                    if (VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceSet)
                    {
                        /* Transition: '<S602>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c33_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S602>:31' */
                        VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Fail;
                        VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Pass = false;
                        VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Fail = true;
                    }
                    else if (rtb_AND_gk1)
                    {
                        /* Transition: '<S602>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S602>:19' */
                        VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt =
                            VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                        CeTIMR_e_DiagIdle;

                    /* During 'IDLE': '<S602>:13' */
                    /* Transition: '<S602>:16' */
                    if (rtb_AND_pi)
                    {
                        /* Transition: '<S602>:18' */
                        /* Transition: '<S602>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S602>:26' */
                        VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_AND_gk1)
                        {
                            /* Transition: '<S602>:20' */
                            TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S602>:19' */
                            VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                                CeTIMR_e_Passing;
                            VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt =
                                0.0F;
                        }
                    }
                    break;

                  default:
                    VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                        CeTIMR_e_Passing;

                    /* During 'PASSING': '<S602>:19' */
                    /* Transition: '<S602>:22' */
                    if (VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceHeal)
                    {
                        /* Transition: '<S602>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c33_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S602>:23' */
                        VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Pass;
                        VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Pass = true;
                        VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Fail = false;
                    }
                    else if (rtb_AND_pi)
                    {
                        /* Transition: '<S602>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S602>:26' */
                        VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt =
                            VeTIMR_t_Left_Terrain_Mode_SwitchStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S602>:31' */
            /* Transition: '<S602>:37' */
            TIMR_ac_DW.is_c33_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S602>:11' */
            /* Transition: '<S602>:14' */
            TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S602>:13' */
            VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S602>:23' */
            /* Transition: '<S602>:24' */
            TIMR_ac_DW.is_c33_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S602>:11' */
            /* Transition: '<S602>:14' */
            TIMR_ac_DW.is_DEBOUNCE_j = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S602>:13' */
            VeTIMR_e_Left_Terrain_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S555>/Left_Terrain_Mode_SwitchStuck_Diag' */

    /* Logic: '<S555>/Logical Operator' incorporates:
     *  Constant: '<S595>/Constant'
     *  Constant: '<S597>/Constant'
     *  RelationalOperator: '<S555>/Relational Operator7'
     *  RelationalOperator: '<S555>/Relational Operator8'
     */
    rtb_AND_pi = ((((uint32)rtb_TmpSignalConversionAtVeTIMI) ==
                   CeTIMR_e_Left_Up_Activated) || (((uint32)
                    rtb_TmpSignalConversionAtVeTIMI) ==
                   CeTIMR_e_Right_Down_Activated));

    /* RelationalOperator: '<S555>/Relational Operator3' incorporates:
     *  Constant: '<S591>/Constant'
     *  DataTypeConversion: '<S539>/DataTypeConversion'
     *  RelationalOperator: '<S554>/Relational Operator3'
     */
    rtb_AND_gk1 = (((uint32)DataTypeConversion_a) == CeTIMR_e_Activated);

    /* RelationalOperator: '<S555>/Relational Operator4' incorporates:
     *  Constant: '<S592>/Constant'
     *  DataTypeConversion: '<S539>/DataTypeConversion'
     *  RelationalOperator: '<S554>/Relational Operator3'
     */
    rtb_Comparison6_l = (((uint32)DataTypeConversion_a) == CeTIMR_e_NotActivated);

    /* Chart: '<S555>/Right_Terrain_Mode_SwitchStuck_Diag' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S601>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Right_Terrain_Mode_SwitchStuck_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Right_Terrain_Mode_SwitchStuck_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c35_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Right_Terrain_Mode_SwitchStuck_Diag */
        TIMR_ac_DW.is_active_c35_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Right_Terrain_Mode_SwitchStuck_Diag */
        /* Transition: '<S603>:12' */
        VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Fail = false;
        VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Pass = false;
        TIMR_ac_DW.is_c35_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S603>:11' */
        /* Transition: '<S603>:14' */
        TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S603>:13' */
        VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c35_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S603>:11' */
            if (((((~((sint32)(rtb_AND_gk1 ? 1 : 0))) != 0) && ((~((sint32)
                     (rtb_Comparison6_l ? 1 : 0))) != 0)) || ((~((sint32)
                    (rtb_LogicalOperator2_hw ? 1 : 0))) != 0)) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S603>:48' */
                VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Fail = false;
                VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S603>:11' */
                /* Entry Internal 'DEBOUNCE': '<S603>:11' */
                /* Transition: '<S603>:14' */
                TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S603>:13' */
                VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                    CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE_e)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                        CeTIMR_e_Failing;

                    /* During 'Failing': '<S603>:26' */
                    /* Transition: '<S603>:47' */
                    if (VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceSet)
                    {
                        /* Transition: '<S603>:45' */
                        TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c35_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S603>:31' */
                        VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Fail;
                        VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Pass = false;
                        VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Fail = true;
                    }
                    else if (rtb_Comparison6_l)
                    {
                        /* Transition: '<S603>:46' */
                        TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S603>:19' */
                        VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt =
                            VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                        CeTIMR_e_DiagIdle;

                    /* During 'IDLE': '<S603>:13' */
                    /* Transition: '<S603>:16' */
                    if (rtb_AND_gk1)
                    {
                        /* Transition: '<S603>:18' */
                        /* Transition: '<S603>:38' */
                        TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S603>:26' */
                        VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_Comparison6_l)
                        {
                            /* Transition: '<S603>:20' */
                            TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S603>:19' */
                            VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                                CeTIMR_e_Passing;
                            VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt =
                                0.0F;
                        }
                    }
                    break;

                  default:
                    VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                        CeTIMR_e_Passing;

                    /* During 'PASSING': '<S603>:19' */
                    /* Transition: '<S603>:22' */
                    if (VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceHeal)
                    {
                        /* Transition: '<S603>:25' */
                        TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c35_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S603>:23' */
                        VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Pass;
                        VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Pass = true;
                        VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Fail = false;
                    }
                    else if (rtb_AND_gk1)
                    {
                        /* Transition: '<S603>:28' */
                        TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S603>:26' */
                        VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt =
                            VeTIMR_t_Right_Terrain_Mode_SwitchStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S603>:31' */
            /* Transition: '<S603>:37' */
            TIMR_ac_DW.is_c35_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S603>:11' */
            /* Transition: '<S603>:14' */
            TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S603>:13' */
            VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S603>:23' */
            /* Transition: '<S603>:24' */
            TIMR_ac_DW.is_c35_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S603>:11' */
            /* Transition: '<S603>:14' */
            TIMR_ac_DW.is_DEBOUNCE_e = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S603>:13' */
            VeTIMR_e_Right_Terrain_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S555>/Right_Terrain_Mode_SwitchStuck_Diag' */

    /* RelationalOperator: '<S555>/Relational Operator9' incorporates:
     *  Constant: '<S596>/Constant'
     */
    rtb_AND_gk1 = (((uint32)rtb_TmpSignalConversionAtVeTIMI) ==
                   CeTIMR_e_Switch_Not_Activated);

    /* Outputs for Atomic SubSystem: '<S604>/EdgeFalling1' */
    /* Update for UnitDelay: '<S606>/Unit Delay' */
    TIMR_ac_DW.UnitDelay_DSTATE_eb = true;

    /* End of Outputs for SubSystem: '<S604>/EdgeFalling1' */

    /* Chart: '<S555>/Terrain_Toggle_Mode_SwitchStuck_Diag' incorporates:
     *  Constant: '<S599>/Calib'
     *  Constant: '<S600>/Calib'
     *  Constant: '<S601>/Calib'
     */
    /* Gateway: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Terrain_Toggle_Mode_SwitchStuck_Diag */
    /* During: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Terrain_Toggle_Mode_SwitchStuck_Diag */
    if (((uint32)TIMR_ac_DW.is_active_c38_TIMR_ac) == 0U)
    {
        /* Entry: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Terrain_Toggle_Mode_SwitchStuck_Diag */
        TIMR_ac_DW.is_active_c38_TIMR_ac = 1U;

        /* Entry Internal: TIMR_MedTED/Terrain_Mode_Diagnostics/DTC_C2316/Terrain_Toggle_Mode_SwitchStuck_Diag */
        /* Transition: '<S605>:12' */
        VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Fail = false;
        VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Pass = false;
        TIMR_ac_DW.is_c38_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

        /* Entry Internal 'DEBOUNCE': '<S605>:11' */
        /* Transition: '<S605>:14' */
        TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_IDLE;

        /* Entry 'IDLE': '<S605>:13' */
        VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
    }
    else
    {
        switch (TIMR_ac_DW.is_c38_TIMR_ac)
        {
          case TIMR_ac_IN_DEBOUNCE:
            /* During 'DEBOUNCE': '<S605>:11' */
            if (((((~((sint32)(rtb_AND_pi ? 1 : 0))) != 0) && ((~((sint32)
                     (rtb_AND_gk1 ? 1 : 0))) != 0)) || ((~((sint32)
                    (rtb_LogicalOperator2_hw ? 1 : 0))) != 0)) ||
                    rtb_Comparison5)
            {
                /* Transition: '<S605>:48' */
                VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Fail = false;
                VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Pass = false;

                /* Exit Internal 'DEBOUNCE': '<S605>:11' */
                /* Entry Internal 'DEBOUNCE': '<S605>:11' */
                /* Transition: '<S605>:14' */
                TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_IDLE;

                /* Entry 'IDLE': '<S605>:13' */
                VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                    CeTIMR_e_DiagIdle;
            }
            else
            {
                switch (TIMR_ac_DW.is_DEBOUNCE)
                {
                  case TIMR_ac_IN_Failing:
                    VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                        CeTIMR_e_Failing;

                    /* During 'Failing': '<S605>:26' */
                    /* Transition: '<S605>:47' */
                    if (VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceSet)
                    {
                        /* Transition: '<S605>:45' */
                        TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c38_TIMR_ac = TIMR_ac_IN_FAIL_MATURED;

                        /* Entry 'FAIL_MATURED': '<S605>:31' */
                        VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                            CeTIMR_e_Fail;
                        VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Pass = false;
                        VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Fail = true;
                    }
                    else if (rtb_AND_gk1)
                    {
                        /* Transition: '<S605>:46' */
                        TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_PASSING;

                        /* Entry 'PASSING': '<S605>:19' */
                        VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                            CeTIMR_e_Passing;
                        VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt =
                            VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;

                  case TIMR_ac_IN_IDLE:
                    VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                        CeTIMR_e_DiagIdle;

                    /* During 'IDLE': '<S605>:13' */
                    /* Transition: '<S605>:16' */
                    if (rtb_AND_pi)
                    {
                        /* Transition: '<S605>:18' */
                        /* Transition: '<S605>:38' */
                        TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S605>:26' */
                        VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        if (rtb_AND_gk1)
                        {
                            /* Transition: '<S605>:20' */
                            TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_PASSING;

                            /* Entry 'PASSING': '<S605>:19' */
                            VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                                CeTIMR_e_Passing;
                            VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt =
                                0.0F;
                        }
                    }
                    break;

                  default:
                    VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                        CeTIMR_e_Passing;

                    /* During 'PASSING': '<S605>:19' */
                    /* Transition: '<S605>:22' */
                    if (VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt >=
                            KeTIMR_t_TistuckDebounceHeal)
                    {
                        /* Transition: '<S605>:25' */
                        TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_NO_ACTIVE_CHILD;
                        TIMR_ac_DW.is_c38_TIMR_ac = TIMR_ac_IN_PASS_MATURED;

                        /* Entry 'PASS_MATURED': '<S605>:23' */
                        VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                            CeTIMR_e_Pass;
                        VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Pass = true;
                        VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Fail = false;
                    }
                    else if (rtb_AND_pi)
                    {
                        /* Transition: '<S605>:28' */
                        TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_Failing;

                        /* Entry 'Failing': '<S605>:26' */
                        VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status =
                            CeTIMR_e_Failing;
                        VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt = 0.0F;
                    }
                    else
                    {
                        VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt =
                            VeTIMR_t_Terrain_Toggle_Mode_SwitchStuck_timeCnt +
                            KeTIMR_t_MedTED;
                    }
                    break;
                }
            }
            break;

          case TIMR_ac_IN_FAIL_MATURED:
            /* During 'FAIL_MATURED': '<S605>:31' */
            /* Transition: '<S605>:37' */
            TIMR_ac_DW.is_c38_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S605>:11' */
            /* Transition: '<S605>:14' */
            TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S605>:13' */
            VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
            break;

          default:
            /* During 'PASS_MATURED': '<S605>:23' */
            /* Transition: '<S605>:24' */
            TIMR_ac_DW.is_c38_TIMR_ac = TIMR_ac_IN_DEBOUNCE;

            /* Entry Internal 'DEBOUNCE': '<S605>:11' */
            /* Transition: '<S605>:14' */
            TIMR_ac_DW.is_DEBOUNCE = TIMR_ac_IN_IDLE;

            /* Entry 'IDLE': '<S605>:13' */
            VeTIMR_e_Terrain_Toggle_Mode_SwitchStuck_Status = CeTIMR_e_DiagIdle;
            break;
        }
    }

    /* End of Chart: '<S555>/Terrain_Toggle_Mode_SwitchStuck_Diag' */

    /* Switch: '<S555>/Switch1' incorporates:
     *  Constant: '<S598>/Calib'
     *  Switch: '<S555>/Switch'
     */
    if (KeTIMR_b_SwitchEnbl)
    {
        /* Switch: '<S555>/Switch1' incorporates:
         *  Logic: '<S555>/Logical Operator5'
         */
        rtb_AND_gk1 = (((VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Pass) &&
                        (VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Pass)) &&
                       (VeTIMR_b_Custom_Interface_ButtonStuck_Pass));

        /* Switch: '<S555>/Switch' incorporates:
         *  Logic: '<S555>/Logical Operator4'
         */
        rtb_AND_pi = (((VeTIMR_b_Left_Terrain_Mode_SwitchStuck_Fail) ||
                       (VeTIMR_b_Right_Terrain_Mode_SwitchStuck_Fail)) ||
                      (VeTIMR_b_Custom_Interface_ButtonStuck_Fail));
    }
    else
    {
        /* Switch: '<S555>/Switch1' */
        rtb_AND_gk1 = VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Pass;

        /* Switch: '<S555>/Switch' */
        rtb_AND_pi = VeTIMR_b_Terrain_Toggle_Mode_SwitchStuck_Fail;
    }

    /* End of Switch: '<S555>/Switch1' */

    /* If: '<S604>/If' incorporates:
     *  Logic: '<S604>/Logical5'
     */
    if (rtb_Comparison5)
    {
        /* Outputs for IfAction SubSystem: '<S604>/Init' incorporates:
         *  ActionPort: '<S608>/Action Port'
         */
        TIMR_ac_Init_d(&TIMR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S604>/Init' */
    }
    else if (rtb_AND_gk1)
    {
        /* Outputs for IfAction SubSystem: '<S604>/Pass' incorporates:
         *  ActionPort: '<S609>/Action Port'
         */
        TIMR_ac_Pass(&TIMR_ac_B.Merge_g);

        /* End of Outputs for SubSystem: '<S604>/Pass' */
    }
    else
    {
        if (rtb_AND_pi)
        {
            /* Outputs for IfAction SubSystem: '<S604>/Fail' incorporates:
             *  ActionPort: '<S607>/Action Port'
             */
            TIMR_ac_Fail(&TIMR_ac_B.Merge_g);

            /* End of Outputs for SubSystem: '<S604>/Fail' */
        }
    }

    /* End of If: '<S604>/If' */
    /* End of Outputs for SubSystem: '<S22>/Terrain_Mode_Diagnostics' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */
#endif

    /* Outport: '<Root>/VeTIMR_e_CustomDrvMdSts' incorporates:
     *  SignalConversion generated from: '<S22>/CustomDrvMdSts'
     */
    (void)Rte_Write_VeTIMR_e_CustomDrvMdSts_Value(TIMR_ac_B.CustomDrvMdSts);

    /* Outport: '<Root>/VeTIMR_e_RacePrep' incorporates:
     *  SignalConversion generated from: '<S22>/RacePrepMode'
     */
    (void)Rte_Write_VeTIMR_e_RacePrep_Value(RacePrepMode);

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* Switch: '<S65>/Switch' incorporates:
     *  Constant: '<S466>/Constant'
     *  Constant: '<S467>/Constant'
     */
    if (rtb_TmpSignalConversionAtRace_d)
    {
        rtb_TmpSignalConversionAtRace_0 = CeTIMR_e_RaceType_Track;
    }
    else
    {
        rtb_TmpSignalConversionAtRace_0 = CeTIMR_e_RaceType_Drag;
    }

    /* Outport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts' incorporates:
     *  SignalConversion generated from: '<S22>/RacePrepType'
     *  Switch: '<S65>/Switch'
     */
    (void)Rte_Write_VeTIMR_e_RacePrepRaceTypeSts_Value
        (rtb_TmpSignalConversionAtRace_0);

    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */

    /* Outport: '<Root>/VeTIMR_b_ModeSoftLatch' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_b_ModeSoftLatch'
     */
    (void)Rte_Write_VeTIMR_b_ModeSoftLatch_Value(rtb_TmpSignalConversionAtRacePr);

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/TIMI_TX_ovrrd'
     */
    /* Outport: '<Root>/VeTIMR_b_Selector_Sys_Fail_Sts' incorporates:
     *  Constant: '<S460>/Constant'
     *  Constant: '<S461>/Constant'
     *  Constant: '<S462>/Constant'
     *  DataTypeConversion: '<S539>/DataTypeConversion'
     *  DataTypeConversion: '<S540>/DataTypeConversion'
     *  Logic: '<S63>/Logical1'
     *  RelationalOperator: '<S63>/Comparison1'
     *  RelationalOperator: '<S63>/Comparison2'
     *  RelationalOperator: '<S63>/Comparison3'
     *  RelationalOperator: '<S63>/Comparison4'
     *  RelationalOperator: '<S63>/Comparison5'
     *  RelationalOperator: '<S63>/Comparison6'
     *  SignalConversion generated from: '<S22>/VeTIMC_b_Selector_Sys_Fail_Sts'
     *  Switch: '<S55>/Switch6'
     */
    (void)Rte_Write_VeTIMR_b_Selector_Sys_Fail_Sts_Value((((((((uint32)
        rtb_Switch6) == CeTIMR_e_ShortToGround) || (((uint32)rtb_Switch6) ==
        CeTIMR_e_ShortToPower)) || (((uint32)rtb_Switch6) == CeTIMR_e_SNA)) ||
        (((uint32)DataTypeConversion_a) == CeTIMR_e_ShortToGround)) || (((uint32)
        DataTypeConversion_a) == CeTIMR_e_ShortToPower)) || (((uint32)
        DataTypeConversion_a) == CeTIMR_e_SNA));

    /* Outputs for Atomic SubSystem: '<S57>/Turn Off Delay Time' */
    /* Switch: '<S57>/Switch1' incorporates:
     *  Constant: '<S76>/Constant'
     *  Constant: '<S77>/Constant'
     *  Constant: '<S84>/Constant Value2'
     *  Logic: '<S84>/AND'
     *  RelationalOperator: '<S84>/Greater  Than'
     */
    if (rtb_OR1_b || (rtb_Switch1_j > 0.0F))
    {
        rtb_Comparison5_tmp = CeTIMR_e_Activated;
    }
    else
    {
        rtb_Comparison5_tmp = CeTIMR_e_NotActivated;
    }

    /* End of Outputs for SubSystem: '<S57>/Turn Off Delay Time' */

    /* Outport: '<Root>/VeTIMR_e_CustomScreenRqst' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_CustomScreenRqst'
     *  Switch: '<S57>/Switch1'
     */
    (void)Rte_Write_VeTIMR_e_CustomScreenRqst_Value(rtb_Comparison5_tmp);

    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */

    /* SignalConversion generated from: '<S22>/VeTIMC_e_LaunchCtrl_Popup' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_LaunchIntensity'
     *  SignalConversion generated from: '<S22>/VeTIMC_e_LaunchMdSwtchLED'
     */
#if Rte_SysCon_Variant_TIMR_3

    /* Outport: '<Root>/VeTIMR_e_LaunchCtrl_Popup' */
    (void)Rte_Write_VeTIMR_e_LaunchCtrl_Popup_Value(TIMR_ac_B.PopUp_Out);

#else

    /* Outport: '<Root>/VeTIMR_e_LaunchIntensity' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_LaunchIntensity'
     *  UnitDelay: '<S116>/Unit Delay2'
     */
    (void)Rte_Write_VeTIMR_e_LaunchIntensity_Value(TIMR_ac_B.UnitDelay2);

    /* Outport: '<Root>/VeTIMR_e_LaunchMdSwtchLED' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_LaunchMdSwtchLED'
     *  Switch: '<S117>/Switch2'
     */
    (void)Rte_Write_VeTIMR_e_LaunchMdSwtchLED_Value(TIMR_ac_B.Switch2_a);

#endif

    /* End of SignalConversion generated from: '<S22>/VeTIMC_e_LaunchCtrl_Popup' */

    /* SignalConversion generated from: '<S22>/VeTIMC_e_LnchCtrl_Sts' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_MaxBoostStatus'
     *  SignalConversion generated from: '<S22>/VeTIMC_e_MaxBoost_AccelPopup'
     *  SignalConversion generated from: '<S22>/VeTIMC_e_MaxBoost_AccelStat'
     */
#if Rte_SysCon_Variant_TIMR_3

    /* Outport: '<Root>/VeTIMR_e_LnchCtrl_Sts' */
    (void)Rte_Write_VeTIMR_e_LnchCtrl_Sts_Value(TIMR_ac_B.LnchCtrl_Sts);

    /* Outport: '<Root>/VeTIMR_e_MaxBoostStatus' */
    (void)Rte_Write_VeTIMR_e_MaxBoostStatus_Value
        (TIMR_ac_B.MaxBoost_Acceleration_Enabled_S);

    /* Outport: '<Root>/VeTIMR_e_MaxBoost_AccelPopup' */
    (void)Rte_Write_VeTIMR_e_MaxBoost_AccelPopup_Value(TIMR_ac_B.PopUp_Out_d);

    /* Outport: '<Root>/VeTIMR_e_MaxBoost_AccelStat' */
    (void)Rte_Write_VeTIMR_e_MaxBoost_AccelStat_Value
        (TIMR_ac_B.MaxBoost_AccelStat);

#endif

    /* End of SignalConversion generated from: '<S22>/VeTIMC_e_LnchCtrl_Sts' */

    /* Outport: '<Root>/VeTIMR_e_ModeRequest' incorporates:
     *  Merge: '<S439>/Merge'
     *  SignalConversion generated from: '<S22>/VeTIMC_e_ModeRequest'
     */
    (void)Rte_Write_VeTIMR_e_ModeRequest_Value(rtb_Switch12);

    /* SignalConversion generated from: '<S22>/VeTIMC_e_RaceModePopup' */
#if !Rte_SysCon_Variant_TIMR_3

    /* Outport: '<Root>/VeTIMR_e_RaceMdPopUp' incorporates:
     *  Switch: '<S119>/Switch1'
     */
    (void)Rte_Write_VeTIMR_e_RaceMdPopUp_Value(TIMR_ac_B.Switch1_e);

#endif

    /* End of SignalConversion generated from: '<S22>/VeTIMC_e_RaceModePopup' */

    /* Outport: '<Root>/VeTIMR_e_RaceModeSts' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_RaceModeSts'
     *  VariantMerge generated from: '<S61>/RaceModeSts'
     */
    (void)Rte_Write_VeTIMR_e_RaceModeSts_Value(TIMR_ac_B.RaceModeSts);

    /* Outport: '<Root>/VeTIMR_e_RaceOptions_Sts' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_RaceOptionsSts'
     *  VariantMerge generated from: '<S61>/RaceOptionsSts'
     */
    (void)Rte_Write_VeTIMR_e_RaceOptions_Sts_Value(TIMR_ac_B.RaceOptions_Sts);

    /* Outport: '<Root>/VeTIMR_e_TerrainMdReq' incorporates:
     *  Merge: '<S473>/Merge'
     *  SignalConversion generated from: '<S22>/VeTIMC_e_TerrainMdReq'
     */
    (void)Rte_Write_VeTIMR_e_TerrainMdReq_Value(TIMR_ac_B.Merge_e);

    /* Outport: '<Root>/VeTIMR_e_TrrnMdSt' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMC_e_TrrnMdDesiredSt'
     *  VariantMerge generated from: '<S54>/Variant Source'
     */
    (void)Rte_Write_VeTIMR_e_TrrnMdSt_Value
        (TIMR_ac_B.VariantMerge_For_Variant_Source);

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/TIMI_TX_ovrrd'
     */
    /* Switch: '<S55>/Switch2' incorporates:
     *  Constant: '<S542>/Calib'
     *  Constant: '<S543>/Calib'
     *  Merge: '<Root>/Merge_7'
     *  SignalConversion generated from: '<S22>/VeTIMR_b_AWD_Lock_read'
     */
    if (KeTIMR_b_AWDLockOvrdEnbl)
    {
        rtb_Logical1 = KeTIMR_b_AWDLockOvrdVal;
    }
    else
    {
        rtb_Logical1 = Rte_IrvRead_TIMR_MedTED_VeTIMR_b_AWD_Lock_write_IRV();
    }

    /* End of Switch: '<S55>/Switch2' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */

    /* Outport: '<Root>/VeTIMR_b_AWD_Lock' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMI_b_AWD_Lock'
     */
    (void)Rte_Write_VeTIMR_b_AWD_Lock_Value(rtb_Logical1);

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/TIMI_TX_ovrrd'
     */
    /* Switch: '<S55>/Switch3' incorporates:
     *  Constant: '<S544>/Calib'
     *  Constant: '<S545>/Calib'
     *  Merge: '<Root>/Merge_8'
     *  SignalConversion generated from: '<S22>/VeTIMR_b_AWD_Low_read'
     */
    if (KeTIMR_b_AWDLowOvrdEnbl)
    {
        rtb_Logical1 = KeTIMR_b_AWDLowOvrdVal;
    }
    else
    {
        rtb_Logical1 = Rte_IrvRead_TIMR_MedTED_VeTIMR_b_AWD_Low_write_IRV();
    }

    /* End of Switch: '<S55>/Switch3' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */

    /* Outport: '<Root>/VeTIMR_b_AWD_Low' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMI_b_AWD_Low'
     */
    (void)Rte_Write_VeTIMR_b_AWD_Low_Value(rtb_Logical1);

    /* S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/TIMI_TX_ovrrd'
     */
    /* Switch: '<S55>/Switch1' incorporates:
     *  Constant: '<S548>/Calib'
     *  Constant: '<S549>/Calib'
     *  Merge: '<Root>/Merge_10'
     *  SignalConversion generated from: '<S22>/VeTIMR_b_TrrnMdStFA_read'
     */
    if (KeTIMR_b_TrrnMdStFAOvrdEnbl)
    {
        rtb_Logical1 = KeTIMR_b_TrrnMdStFAOvrdVal;
    }
    else
    {
        rtb_Logical1 = Rte_IrvRead_TIMR_MedTED_VeTIMR_b_TrrnMdStFA_write_IRV();
    }

    /* End of Switch: '<S55>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S22>/FcnCallGen' */

    /* Outport: '<Root>/VeTIMR_b_TrrnMdStFA' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMI_b_TrrnMdStFA'
     */
    (void)Rte_Write_VeTIMR_b_TrrnMdStFA_Value(rtb_Logical1);

    /* SignalConversion generated from: '<S22>/VeTIMR_e_FaultSts_TerrSwBankModInt' incorporates:
     *  SignalConversion generated from: '<S22>/VeTIMR_e_FaultSts_TerrSwStuck'
     */
#if Rte_SysCon_Variant_TIMR_2

    /* Outport: '<Root>/VeTIMR_e_FaultSts_TerrSwBankModInt' incorporates:
     *  Merge: '<S578>/Merge'
     */
    (void)Rte_Write_VeTIMR_e_FaultSts_TerrSwBankModInt_Value(TIMR_ac_B.Merge_l);

    /* Outport: '<Root>/VeTIMR_e_FaultSts_TerrSwStuck' incorporates:
     *  Merge: '<S604>/Merge'
     */
    (void)Rte_Write_VeTIMR_e_FaultSts_TerrSwStuck_Value(TIMR_ac_B.Merge_g);

#endif

    /* End of SignalConversion generated from: '<S22>/VeTIMR_e_FaultSts_TerrSwBankModInt' */

    /* Outport: '<Root>/VeTMIR_b_RaceDeadPedal' incorporates:
     *  SignalConversion generated from: '<S22>/VeTMIC_b_RaceDeadPedal'
     */
    (void)Rte_Write_VeTMIR_b_RaceDeadPedal_Value
        (TIMR_ac_B.VariantMergeForOutportRace_Dead);

    /* SignalConversion generated from: '<S22>/VeTMIC_b_RaceEntryCondSts' */
#if !Rte_SysCon_Variant_TIMR_3

    /* Outport: '<Root>/VeTMIR_e_RaceEntryCondSts' incorporates:
     *  Merge: '<S114>/Merge'
     */
    (void)Rte_Write_VeTMIR_e_RaceEntryCondSts_Value(TIMR_ac_B.Merge_p);

#endif

    /* End of SignalConversion generated from: '<S22>/VeTMIC_b_RaceEntryCondSts' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */
}

/* Output function */
FUNC(void, TIMR_CODE) FsftTIMR_b_AWD_Lock(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTIMR_b_AWD_Lock' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  Chart: '<S1>/FsftTIMR_b_AWD_LockChrt'
     *  SignalConversion generated from: '<S1>/VeTIMR_b_AWD_Lock_write'
     */
    /* Gateway: FsftTIMR_b_AWD_Lock/FsftTIMR_b_AWD_LockChrt */
    /* During: FsftTIMR_b_AWD_Lock/FsftTIMR_b_AWD_LockChrt */
    /* Entry Internal: FsftTIMR_b_AWD_Lock/FsftTIMR_b_AWD_LockChrt */
    /* Transition: '<S25>:2' */
    Rte_IrvWrite_FsftTIMR_b_AWD_Lock_VeTIMR_b_AWD_Lock_write_IRV
        (KeTIMR_b_AWD_LockDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTIMR_b_AWD_Lock' */
}

/* Output function */
FUNC(void, TIMR_CODE) FsftTIMR_b_AWD_Low(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTIMR_b_AWD_Low' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  Chart: '<S2>/FsftTIMR_b_AWD_LowChrt'
     *  SignalConversion generated from: '<S2>/VeTIMR_b_AWD_Low_write'
     */
    /* Gateway: FsftTIMR_b_AWD_Low/FsftTIMR_b_AWD_LowChrt */
    /* During: FsftTIMR_b_AWD_Low/FsftTIMR_b_AWD_LowChrt */
    /* Entry Internal: FsftTIMR_b_AWD_Low/FsftTIMR_b_AWD_LowChrt */
    /* Transition: '<S26>:2' */
    Rte_IrvWrite_FsftTIMR_b_AWD_Low_VeTIMR_b_AWD_Low_write_IRV
        (KeTIMR_b_AWD_LowDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTIMR_b_AWD_Low' */
}

/* Output function */
FUNC(void, TIMR_CODE) FsftTIMR_e_MaxBoostReq(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTIMR_e_MaxBoostReq' */
    /* Outport: '<Root>/VeTIMR_b_MaxBoostStatus_FA' incorporates:
     *  Chart: '<S3>/FsftTIMR_e_MaxBoostReqChrt'
     *  SignalConversion generated from: '<S3>/VeTIMR_b_MaxBoostReq_FA_write'
     */
    /* Gateway: FsftTIMR_e_MaxBoostReq/FsftTIMR_e_MaxBoostReqChrt */
    /* During: FsftTIMR_e_MaxBoostReq/FsftTIMR_e_MaxBoostReqChrt */
    /* Entry Internal: FsftTIMR_e_MaxBoostReq/FsftTIMR_e_MaxBoostReqChrt */
    /* Transition: '<S27>:2' */
    (void)Rte_Write_VeTIMR_b_MaxBoostStatus_FA_Value(true);

    /* End of Outputs for SubSystem: '<Root>/FsftTIMR_e_MaxBoostReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) FsftTIMR_e_TrrnMdSt(void)
{
    /* Outputs for Function Call SubSystem: '<Root>/FsftTIMR_e_TrrnMdSt' */
    /* Merge: '<Root>/Merge_10' incorporates:
     *  Chart: '<S4>/FsftTIMR_e_TrrnMdStChrt'
     *  SignalConversion generated from: '<S4>/VeTIMR_b_TrrnMdStFA_write'
     */
    /* Gateway: FsftTIMR_e_TrrnMdSt/FsftTIMR_e_TrrnMdStChrt */
    /* During: FsftTIMR_e_TrrnMdSt/FsftTIMR_e_TrrnMdStChrt */
    /* Entry Internal: FsftTIMR_e_TrrnMdSt/FsftTIMR_e_TrrnMdStChrt */
    /* Transition: '<S28>:2' */
    Rte_IrvWrite_FsftTIMR_e_TrrnMdSt_VeTIMR_b_TrrnMdStFA_write_IRV(true);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  Chart: '<S4>/FsftTIMR_e_TrrnMdStChrt'
     *  SignalConversion generated from: '<S4>/VeTIMR_e_TrrnMdSt_write'
     */
    Rte_IrvWrite_FsftTIMR_e_TrrnMdSt_VeTIMR_e_TrrnMdSt_write_IRV
        (KeTIMR_e_TrrnMdStDflt);

    /* End of Outputs for SubSystem: '<Root>/FsftTIMR_e_TrrnMdSt' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_b_AWD_Lock(VAR(boolean, AUTOMATIC)
    LeTIMR_b_AWD_Lock)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_b_AWD_Lock' */
    /* Merge: '<Root>/Merge_7' incorporates:
     *  SignalConversion generated from: '<S5>/LeTIMR_b_AWD_Lock'
     *  SignalConversion generated from: '<S5>/VeTIMR_b_AWD_Lock_write'
     */
    /* Gateway: PokeTIMR_b_AWD_Lock/PokeTIMR_b_AWD_LockChrt */
    /* During: PokeTIMR_b_AWD_Lock/PokeTIMR_b_AWD_LockChrt */
    /* Entry Internal: PokeTIMR_b_AWD_Lock/PokeTIMR_b_AWD_LockChrt */
    /* Transition: '<S29>:2' */
    Rte_IrvWrite_PokeTIMR_b_AWD_Lock_VeTIMR_b_AWD_Lock_write_IRV
        (LeTIMR_b_AWD_Lock);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_b_AWD_Lock' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_b_AWD_Low(VAR(boolean, AUTOMATIC)
    LeTIMR_b_AWD_Low)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_b_AWD_Low' */
    /* Merge: '<Root>/Merge_8' incorporates:
     *  SignalConversion generated from: '<S6>/LeTIMR_b_AWD_Low'
     *  SignalConversion generated from: '<S6>/VeTIMR_b_AWD_Low_write'
     */
    /* Gateway: PokeTIMR_b_AWD_Low/PokeTIMR_b_AWD_LowChrt */
    /* During: PokeTIMR_b_AWD_Low/PokeTIMR_b_AWD_LowChrt */
    /* Entry Internal: PokeTIMR_b_AWD_Low/PokeTIMR_b_AWD_LowChrt */
    /* Transition: '<S30>:2' */
    Rte_IrvWrite_PokeTIMR_b_AWD_Low_VeTIMR_b_AWD_Low_write_IRV(LeTIMR_b_AWD_Low);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_b_AWD_Low' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_CustomInterfaceBtn(VAR(uint8, AUTOMATIC)
    LeTIMR_e_CustomInterfaceBtn, VAR(boolean, AUTOMATIC)
    LeTIMR_b_CustomInterfaceBtnFA)
{
    TeTIMR_e_TrrnMdBtnSts rtb_LeTIMR_e_CustomInterfaceB_h;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_CustomInterfaceBtn' */
    /* Chart: '<S7>/PokeTIMR_e_CustomInterfaceBtnChrt' incorporates:
     *  Constant: '<S32>/Calib'
     *  SignalConversion generated from: '<S7>/LeTIMR_b_CustomInterfaceBtnFA'
     *  SignalConversion generated from: '<S7>/LeTIMR_e_CustomInterfaceBtn'
     */
    /* Gateway: PokeTIMR_e_CustomInterfaceBtn/PokeTIMR_e_CustomInterfaceBtnChrt */
    /* During: PokeTIMR_e_CustomInterfaceBtn/PokeTIMR_e_CustomInterfaceBtnChrt */
    /* Entry Internal: PokeTIMR_e_CustomInterfaceBtn/PokeTIMR_e_CustomInterfaceBtnChrt */
    /* Transition: '<S31>:2' */
    if (!LeTIMR_b_CustomInterfaceBtnFA)
    {
        /* Transition: '<S31>:3' */
        /* Transition: '<S31>:15' */
        rtb_LeTIMR_e_CustomInterfaceB_h = KaTIMR_e_TrrnMdBtnMap
            [(LeTIMR_e_CustomInterfaceBtn)];

        /* Transition: '<S31>:18' */
    }
    else
    {
        /* Transition: '<S31>:4' */
        rtb_LeTIMR_e_CustomInterfaceB_h = KeTIMR_e_LeftSwitchReqDflt;
    }

    /* End of Chart: '<S7>/PokeTIMR_e_CustomInterfaceBtnChrt' */

    /* Merge: '<Root>/VeTIMR_e_CustomInterfaceBtn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S7>/VeTIMR_e_CustomInterfaceBtn_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_CustomInterfaceBtn_VeTIMR_e_CustomInterfaceBtn_write_IRV
        (rtb_LeTIMR_e_CustomInterfaceB_h);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_CustomInterfaceBtn' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_GlobalDrvMdReq(VAR(uint8, AUTOMATIC)
    LeTIMR_e_GlobalDrvMdReq, VAR(boolean, AUTOMATIC) LeTIMR_b_GlobalDrvMdReq_FA)
{
    TeTMDR_e_TrrnMd rtb_LeTIMR_e_GlobalDrvMdReq_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_GlobalDrvMdReq' */
    /* Chart: '<S8>/PokeTIMR_e_GlobalDrvMdReqChrt' incorporates:
     *  Constant: '<S34>/Calib'
     *  SignalConversion generated from: '<S8>/LeTIMR_b_GlobalDrvMdReq_FA'
     *  SignalConversion generated from: '<S8>/LeTIMR_e_GlobalDrvMdReq'
     */
    /* Gateway: PokeTIMR_e_GlobalDrvMdReq/PokeTIMR_e_GlobalDrvMdReqChrt */
    /* During: PokeTIMR_e_GlobalDrvMdReq/PokeTIMR_e_GlobalDrvMdReqChrt */
    /* Entry Internal: PokeTIMR_e_GlobalDrvMdReq/PokeTIMR_e_GlobalDrvMdReqChrt */
    /* Transition: '<S33>:2' */
    if (!LeTIMR_b_GlobalDrvMdReq_FA)
    {
        /* Transition: '<S33>:3' */
        /* Transition: '<S33>:15' */
        rtb_LeTIMR_e_GlobalDrvMdReq_out = KaTIMR_e_GlobalReqMap
            [(LeTIMR_e_GlobalDrvMdReq)];

        /* Transition: '<S33>:18' */
    }
    else
    {
        /* Transition: '<S33>:4' */
        rtb_LeTIMR_e_GlobalDrvMdReq_out = KeTIMR_e_GlobalDrvMdRqDflt;
    }

    /* End of Chart: '<S8>/PokeTIMR_e_GlobalDrvMdReqChrt' */

    /* Merge: '<Root>/VeTIMR_e_GlobalDrvMdRq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S8>/VeTIMR_e_GlobalDrvMdReq_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_GlobalDrvMdReq_VeTIMR_e_GlobalDrvMdReq_write_IRV
        (rtb_LeTIMR_e_GlobalDrvMdReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_GlobalDrvMdReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_GlobalDrvMdRq_BCM(VAR(uint8, AUTOMATIC)
    LeTIMR_e_GlobalDrvMdRq_BCM, VAR(boolean, AUTOMATIC)
    LeTIMR_b_GlobalDrvMdRq_BCMFA)
{
    TeTMDR_e_TrrnMd rtb_LeTIMR_e_GlobalDrvMdRq_BCM_;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_GlobalDrvMdRq_BCM' */
    /* Chart: '<S9>/PokeTIMR_e_GlobalDrvMdRq_BCMChrt' incorporates:
     *  Constant: '<S36>/Calib'
     *  SignalConversion generated from: '<S9>/LeTIMR_b_GlobalDrvMdRq_BCMFA'
     *  SignalConversion generated from: '<S9>/LeTIMR_e_GlobalDrvMdRq_BCM'
     */
    /* Gateway: PokeTIMR_e_GlobalDrvMdRq_BCM/PokeTIMR_e_GlobalDrvMdRq_BCMChrt */
    /* During: PokeTIMR_e_GlobalDrvMdRq_BCM/PokeTIMR_e_GlobalDrvMdRq_BCMChrt */
    /* Entry Internal: PokeTIMR_e_GlobalDrvMdRq_BCM/PokeTIMR_e_GlobalDrvMdRq_BCMChrt */
    /* Transition: '<S35>:2' */
    if (!LeTIMR_b_GlobalDrvMdRq_BCMFA)
    {
        /* Transition: '<S35>:3' */
        /* Transition: '<S35>:15' */
        rtb_LeTIMR_e_GlobalDrvMdRq_BCM_ = KaTIMR_e_GlobalReqMap
            [(LeTIMR_e_GlobalDrvMdRq_BCM)];

        /* Transition: '<S35>:18' */
    }
    else
    {
        /* Transition: '<S35>:4' */
        rtb_LeTIMR_e_GlobalDrvMdRq_BCM_ = KeTIMR_e_GlobalDrvMdRq_BCMDflt;
    }

    /* End of Chart: '<S9>/PokeTIMR_e_GlobalDrvMdRq_BCMChrt' */

    /* Merge: '<Root>/VeTIMR_e_GlobalDrvMdRq_BCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S9>/VeTIMR_e_GlobalDrvMdRq_BCM_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_GlobalDrvMdRq_BCM_VeTIMR_e_GlobalDrvMdRq_BCM_write_IRV
        (rtb_LeTIMR_e_GlobalDrvMdRq_BCM_);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_GlobalDrvMdRq_BCM' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_LaunchIntensity(VAR(TeTIMR_e_LaunchIntensity,
    AUTOMATIC) LeTIMR_e_LaunchIntensity)
{

#if !(!Rte_SysCon_Variant_TIMR_3)

    UNUSED_PARAMETER(LeTIMR_e_LaunchIntensity);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_LaunchIntensity' */
    /* SignalConversion generated from: '<S10>/PokeTIMR_e_LaunchIntensityChrt' incorporates:
     *  SignalConversion generated from: '<S10>/VeTIMR_e_LaunchIntensity_write'
     */
    /* Gateway: PokeTIMR_e_LaunchIntensity/PokeTIMR_e_LaunchIntensityChrt */
    /* During: PokeTIMR_e_LaunchIntensity/PokeTIMR_e_LaunchIntensityChrt */
    /* Entry Internal: PokeTIMR_e_LaunchIntensity/PokeTIMR_e_LaunchIntensityChrt */
    /* Transition: '<S37>:2' */
#if !Rte_SysCon_Variant_TIMR_3

    /* Merge: '<Root>/VeTIMR_e_LaunchIntensity_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S10>/LeTIMR_b_AWD_Lock'
     */
    Rte_IrvWrite_PokeTIMR_e_LaunchIntensity_VeTIMR_e_LaunchIntensity_write_IRV
        (LeTIMR_e_LaunchIntensity);

#endif

    /* End of SignalConversion generated from: '<S10>/PokeTIMR_e_LaunchIntensityChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_LaunchIntensity' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_LaunchModeSwitch(VAR(uint8, AUTOMATIC)
    LeTIMR_e_LaunchModeSwitch, VAR(boolean, AUTOMATIC)
    LeTIMR_b_LaunchModeSwitch_FA)
{
    TeTIMR_e_TrrnMdBtnSts rtb_LeTIMR_e_LaunchModeSwitch_o;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_LaunchModeSwitch' */
    /* Chart: '<S11>/PokeTIMR_e_LaunchModeSwitchChrt' incorporates:
     *  Constant: '<S39>/Calib'
     *  SignalConversion generated from: '<S11>/LeTIMR_b_LaunchModeSwitch_FA'
     *  SignalConversion generated from: '<S11>/LeTIMR_e_LaunchModeSwitch'
     */
    /* Gateway: PokeTIMR_e_LaunchModeSwitch/PokeTIMR_e_LaunchModeSwitchChrt */
    /* During: PokeTIMR_e_LaunchModeSwitch/PokeTIMR_e_LaunchModeSwitchChrt */
    /* Entry Internal: PokeTIMR_e_LaunchModeSwitch/PokeTIMR_e_LaunchModeSwitchChrt */
    /* Transition: '<S38>:2' */
    if (!LeTIMR_b_LaunchModeSwitch_FA)
    {
        /* Transition: '<S38>:3' */
        /* Transition: '<S38>:15' */
        rtb_LeTIMR_e_LaunchModeSwitch_o = KaTIMR_e_TrrnMdBtnMap
            [(LeTIMR_e_LaunchModeSwitch)];

        /* Transition: '<S38>:18' */
    }
    else
    {
        /* Transition: '<S38>:4' */
        rtb_LeTIMR_e_LaunchModeSwitch_o = KeTIMR_e_LaunchModeSwitchDflt;
    }

    /* End of Chart: '<S11>/PokeTIMR_e_LaunchModeSwitchChrt' */

    /* Merge: '<Root>/VeTIMR_e_LaunchModeSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S11>/VeTIMR_e_LaunchModeSwitch_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_LaunchModeSwitch_VeTIMR_e_LaunchModeSwitch_write_IRV
        (rtb_LeTIMR_e_LaunchModeSwitch_o);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_LaunchModeSwitch' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_LeftSwitchReq(VAR(uint8, AUTOMATIC)
    LeTIMR_e_LeftSwitchReq, VAR(boolean, AUTOMATIC) LeTIMR_b_LeftSwitchReqFA)
{
    TeTIMR_e_TrrnMdBtnSts rtb_LeTIMR_e_LeftSwitchReq_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_LeftSwitchReq' */
    /* Chart: '<S12>/PokeTIMR_e_LeftSwitchReqChrt' incorporates:
     *  Constant: '<S41>/Calib'
     *  SignalConversion generated from: '<S12>/LeTIMR_b_LeftSwitchReqFA'
     *  SignalConversion generated from: '<S12>/LeTIMR_e_LeftSwitchReq'
     */
    /* Gateway: PokeTIMR_e_LeftSwitchReq/PokeTIMR_e_LeftSwitchReqChrt */
    /* During: PokeTIMR_e_LeftSwitchReq/PokeTIMR_e_LeftSwitchReqChrt */
    /* Entry Internal: PokeTIMR_e_LeftSwitchReq/PokeTIMR_e_LeftSwitchReqChrt */
    /* Transition: '<S40>:2' */
    if (!LeTIMR_b_LeftSwitchReqFA)
    {
        /* Transition: '<S40>:3' */
        /* Transition: '<S40>:15' */
        rtb_LeTIMR_e_LeftSwitchReq_out = KaTIMR_e_TrrnMdBtnMap
            [(LeTIMR_e_LeftSwitchReq)];

        /* Transition: '<S40>:18' */
    }
    else
    {
        /* Transition: '<S40>:4' */
        rtb_LeTIMR_e_LeftSwitchReq_out = KeTIMR_e_LeftSwitchReqDflt;
    }

    /* End of Chart: '<S12>/PokeTIMR_e_LeftSwitchReqChrt' */

    /* Merge: '<Root>/VeTIMR_e_LeftSwitchReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S12>/VeTIMR_e_LeftSwitchReq_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_LeftSwitchReq_VeTIMR_e_LeftSwitchReq_write_IRV
        (rtb_LeTIMR_e_LeftSwitchReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_LeftSwitchReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_MaxBoostReq(VAR(TeTIMR_e_BoostRequest,
    AUTOMATIC) LeTIMR_e_MaxBoostReq)
{

#if !Rte_SysCon_Variant_TIMR_3

    UNUSED_PARAMETER(LeTIMR_e_MaxBoostReq);

#endif

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_MaxBoostReq' */
    /* Outport: '<Root>/VeTIMR_b_MaxBoostStatus_FA' incorporates:
     *  Chart: '<S13>/PokeTIMR_e_MaxBoostReqChrt'
     *  SignalConversion generated from: '<S13>/VeTIMR_b_MaxBoostReq_FA_write'
     */
    /* Gateway: PokeTIMR_e_MaxBoostReq/PokeTIMR_e_MaxBoostReqChrt */
    /* During: PokeTIMR_e_MaxBoostReq/PokeTIMR_e_MaxBoostReqChrt */
    /* Entry Internal: PokeTIMR_e_MaxBoostReq/PokeTIMR_e_MaxBoostReqChrt */
    /* Transition: '<S42>:2' */
    (void)Rte_Write_VeTIMR_b_MaxBoostStatus_FA_Value(false);

    /* SignalConversion generated from: '<S13>/PokeTIMR_e_MaxBoostReqChrt' incorporates:
     *  SignalConversion generated from: '<S13>/VeTIMR_e_MaxBoostReq_write'
     */
#if Rte_SysCon_Variant_TIMR_3

    /* Merge: '<Root>/Poke_VeTIMR_e_MaxBoostReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S13>/LeTIMR_e_LaunchIntensity'
     */
    Rte_IrvWrite_PokeTIMR_e_MaxBoostReq_VeTIMR_e_MaxBoostReq_write_IRV
        (LeTIMR_e_MaxBoostReq);

#endif

    /* End of SignalConversion generated from: '<S13>/PokeTIMR_e_MaxBoostReqChrt' */
    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_MaxBoostReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_RacePrepOnOffReq(VAR(boolean, AUTOMATIC)
    LeTIMR_e_RacePrepOnOffReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_RacePrepOnOffReq' */
    /* Merge: '<Root>/VeTIMR_e_RacePrepOnOffReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S14>/LeTIMR_e_RacePrepOnOffReq'
     *  SignalConversion generated from: '<S14>/VeTIMR_e_RacePrepOnOffReq_write'
     */
    Rte_IrvWrite_PokeTIMR_e_RacePrepOnOffReq_VeTIMR_e_RacePrepOnOffReq_write_IRV
        (LeTIMR_e_RacePrepOnOffReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_RacePrepOnOffReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_RacePrepRaceTypeReq(VAR(boolean, AUTOMATIC)
    LeTIMR_e_RacePrepRaceTypeReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_RacePrepRaceTypeReq' */
    /* Merge: '<Root>/VeTIMR_e_RacePrepRaceTypeReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S15>/LeTIMR_e_RacePrepRaceTypeReq'
     *  SignalConversion generated from: '<S15>/VeTIMR_e_RacePrepRaceTypeReq_write'
     */
    Rte_IrvWrite_PokeTIMR_e_RacePrepRaceTypeReq_VeTIMR_e_RacePrepRaceTypeReq_write_IRV
        (LeTIMR_e_RacePrepRaceTypeReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_RacePrepRaceTypeReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_RadioCustomMode(VAR(uint8, AUTOMATIC)
    LeTIMR_e_RadioCustomMode, VAR(boolean, AUTOMATIC)
    LeTIMR_b_RadioCustomMode_FA)
{
    TeTMDR_e_TrrnMd rtb_LeTIMR_e_RadioCustomMode_ou;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_RadioCustomMode' */
    /* Chart: '<S16>/PokeTIMR_e_RadioCustomModeChrt' incorporates:
     *  Constant: '<S44>/Calib'
     *  SignalConversion generated from: '<S16>/LeTIMR_b_RadioCustomMode_FA'
     *  SignalConversion generated from: '<S16>/LeTIMR_e_RadioCustomMode'
     */
    /* Gateway: PokeTIMR_e_RadioCustomMode/PokeTIMR_e_RadioCustomModeChrt */
    /* During: PokeTIMR_e_RadioCustomMode/PokeTIMR_e_RadioCustomModeChrt */
    /* Entry Internal: PokeTIMR_e_RadioCustomMode/PokeTIMR_e_RadioCustomModeChrt */
    /* Transition: '<S43>:2' */
    if (!LeTIMR_b_RadioCustomMode_FA)
    {
        /* Transition: '<S43>:3' */
        /* Transition: '<S43>:15' */
        rtb_LeTIMR_e_RadioCustomMode_ou = KaTIMR_e_RadioCustomModeMap
            [(LeTIMR_e_RadioCustomMode)];

        /* Transition: '<S43>:18' */
    }
    else
    {
        /* Transition: '<S43>:4' */
        rtb_LeTIMR_e_RadioCustomMode_ou = KeTIMR_e_RadioCustomModeDflt;
    }

    /* End of Chart: '<S16>/PokeTIMR_e_RadioCustomModeChrt' */

    /* Merge: '<Root>/VeTIMR_e_RadioCustomMode_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S16>/VeTIMR_e_RadioCustomMode_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_RadioCustomMode_VeTIMR_e_RadioCustomMode_write_IRV
        (rtb_LeTIMR_e_RadioCustomMode_ou);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_RadioCustomMode' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_RightSwitchReq(VAR(uint8, AUTOMATIC)
    LeTIMR_e_RightSwitchReq, VAR(boolean, AUTOMATIC) LeTIMR_b_RightSwitchReqFA)
{
    TeTIMR_e_TrrnMdBtnSts rtb_LeTIMR_e_RightSwitchReq_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_RightSwitchReq' */
    /* Chart: '<S17>/PokeTIMR_e_RightSwitchReqChrt' incorporates:
     *  Constant: '<S46>/Calib'
     *  SignalConversion generated from: '<S17>/LeTIMR_b_RightSwitchReqFA'
     *  SignalConversion generated from: '<S17>/LeTIMR_e_RightSwitchReq'
     */
    /* Gateway: PokeTIMR_e_RightSwitchReq/PokeTIMR_e_RightSwitchReqChrt */
    /* During: PokeTIMR_e_RightSwitchReq/PokeTIMR_e_RightSwitchReqChrt */
    /* Entry Internal: PokeTIMR_e_RightSwitchReq/PokeTIMR_e_RightSwitchReqChrt */
    /* Transition: '<S45>:2' */
    if (!LeTIMR_b_RightSwitchReqFA)
    {
        /* Transition: '<S45>:3' */
        /* Transition: '<S45>:15' */
        rtb_LeTIMR_e_RightSwitchReq_out = KaTIMR_e_TrrnMdBtnMap
            [(LeTIMR_e_RightSwitchReq)];

        /* Transition: '<S45>:18' */
    }
    else
    {
        /* Transition: '<S45>:4' */
        rtb_LeTIMR_e_RightSwitchReq_out = KeTIMR_e_RightSwitchReqDflt;
    }

    /* End of Chart: '<S17>/PokeTIMR_e_RightSwitchReqChrt' */

    /* Merge: '<Root>/VeTIMR_e_RightSwitchReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S17>/VeTIMR_e_RightSwitchReq_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_RightSwitchReq_VeTIMR_e_RightSwitchReq_write_IRV
        (rtb_LeTIMR_e_RightSwitchReq_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_RightSwitchReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_TimeAttackReq(VAR(TeTIMR_e_BoostRequest,
    AUTOMATIC) LeTIMR_e_TimeAttackReq)
{
    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_TimeAttackReq' */
    /* Outport: '<Root>/VeTIMR_e_TimeAttackStatus' incorporates:
     *  SignalConversion generated from: '<S18>/VeTIMR_e_TimeAttackReq_write'
     *  SignalConversion generated from: '<S18>/LeTIMR_e_MaxBoostReq'
     */
    /* Gateway: PokeTIMR_e_TimeAttackReq/PokeTIMR_e_TimeAttackReqChrt */
    /* During: PokeTIMR_e_TimeAttackReq/PokeTIMR_e_TimeAttackReqChrt */
    /* Entry Internal: PokeTIMR_e_TimeAttackReq/PokeTIMR_e_TimeAttackReqChrt */
    /* Transition: '<S47>:2' */
    (void)Rte_Write_VeTIMR_e_TimeAttackStatus_Value(LeTIMR_e_TimeAttackReq);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_TimeAttackReq' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_TowMdSwitch(VAR(uint8, AUTOMATIC)
    LeTIMR_e_TowMdSwitch, VAR(boolean, AUTOMATIC) LeTIMR_b_TowMdSwitchFA)
{
    TeTIMR_e_TrrnMdBtnSts rtb_LeTIMR_e_TowMdSwitch_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_TowMdSwitch' */
    /* Chart: '<S19>/PokeTIMR_e_TowMdSwitchChrt' incorporates:
     *  Constant: '<S49>/Calib'
     *  SignalConversion generated from: '<S19>/LeTIMR_b_TowMdSwitchFA'
     *  SignalConversion generated from: '<S19>/LeTIMR_e_TowMdSwitch'
     */
    /* Gateway: PokeTIMR_e_TowMdSwitch/PokeTIMR_e_TowMdSwitchChrt */
    /* During: PokeTIMR_e_TowMdSwitch/PokeTIMR_e_TowMdSwitchChrt */
    /* Entry Internal: PokeTIMR_e_TowMdSwitch/PokeTIMR_e_TowMdSwitchChrt */
    /* Transition: '<S48>:2' */
    if (!LeTIMR_b_TowMdSwitchFA)
    {
        /* Transition: '<S48>:3' */
        /* Transition: '<S48>:15' */
        rtb_LeTIMR_e_TowMdSwitch_out = KaTIMR_e_TrrnMdBtnMap
            [(LeTIMR_e_TowMdSwitch)];

        /* Transition: '<S48>:18' */
    }
    else
    {
        /* Transition: '<S48>:4' */
        rtb_LeTIMR_e_TowMdSwitch_out = KeTIMR_e_LeftSwitchReqDflt;
    }

    /* End of Chart: '<S19>/PokeTIMR_e_TowMdSwitchChrt' */

    /* Merge: '<Root>/VeTIMR_e_TowMdSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S19>/VeTIMR_e_TowMdSwitch_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_TowMdSwitch_VeTIMR_e_TowMdSwitch_write_IRV
        (rtb_LeTIMR_e_TowMdSwitch_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_TowMdSwitch' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_TrrnMdSt(VAR(sint16, AUTOMATIC)
    LeTIMR_e_TrrnMdSt, VAR(boolean, AUTOMATIC) LeTIMR_b_TrrnMdStFA)
{
    TeTMDR_e_TrrnMd rtb_LeTIMR_e_TrrnMdSt_out;
    boolean rtb_LeTIMR_b_TrrnMdStFA_out;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_TrrnMdSt' */
    /* Chart: '<S20>/PokeTIMR_e_TrrnMdStChrt' incorporates:
     *  Constant: '<S51>/Calib'
     *  SignalConversion generated from: '<S20>/LeTIMR_b_TrrnMdStFA'
     *  SignalConversion generated from: '<S20>/LeTIMR_e_TrrnMdSt'
     */
    /* Gateway: PokeTIMR_e_TrrnMdSt/PokeTIMR_e_TrrnMdStChrt */
    /* During: PokeTIMR_e_TrrnMdSt/PokeTIMR_e_TrrnMdStChrt */
    /* Entry Internal: PokeTIMR_e_TrrnMdSt/PokeTIMR_e_TrrnMdStChrt */
    /* Transition: '<S50>:2' */
    if (!LeTIMR_b_TrrnMdStFA)
    {
        /* Transition: '<S50>:3' */
        /* Transition: '<S50>:15' */
        rtb_LeTIMR_e_TrrnMdSt_out = KaTIMR_e_TrrnMdMp[(LeTIMR_e_TrrnMdSt)];
        rtb_LeTIMR_b_TrrnMdStFA_out = false;

        /* Transition: '<S50>:18' */
    }
    else
    {
        /* Transition: '<S50>:4' */
        rtb_LeTIMR_e_TrrnMdSt_out = KeTIMR_e_TrrnMdStDflt;
        rtb_LeTIMR_b_TrrnMdStFA_out = true;
    }

    /* End of Chart: '<S20>/PokeTIMR_e_TrrnMdStChrt' */

    /* Merge: '<Root>/Merge_10' incorporates:
     *  SignalConversion generated from: '<S20>/VeTIMR_b_TrrnMdStFA_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_TrrnMdSt_VeTIMR_b_TrrnMdStFA_write_IRV
        (rtb_LeTIMR_b_TrrnMdStFA_out);

    /* Merge: '<Root>/Merge_9' incorporates:
     *  SignalConversion generated from: '<S20>/VeTIMR_e_TrrnMdSt_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_TrrnMdSt_VeTIMR_e_TrrnMdSt_write_IRV
        (rtb_LeTIMR_e_TrrnMdSt_out);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_TrrnMdSt' */
}

/* Output function */
FUNC(void, TIMR_CODE) PokeTIMR_e_TrrnToggleMdSwitch(VAR(uint8, AUTOMATIC)
    LeTIMR_e_TrrnToggleMdSwitch, VAR(boolean, AUTOMATIC)
    LeTIMR_b_TrrnToggleMdSwitchFA)
{
    TeTIMR_e_TrrnTgglSwtSts rtb_LeTIMR_e_TrrnToggleMdSwit_l;

    /* Outputs for Function Call SubSystem: '<Root>/PokeTIMR_e_TrrnToggleMdSwitch' */
    /* Chart: '<S21>/PokeTIMR_e_TrrnToggleMdSwitchChrt' incorporates:
     *  Constant: '<S53>/Calib'
     *  SignalConversion generated from: '<S21>/LeTIMR_b_TrrnToggleMdSwitchFA'
     *  SignalConversion generated from: '<S21>/LeTIMR_e_TrrnToggleMdSwitch'
     */
    /* Gateway: PokeTIMR_e_TrrnToggleMdSwitch/PokeTIMR_e_TrrnToggleMdSwitchChrt */
    /* During: PokeTIMR_e_TrrnToggleMdSwitch/PokeTIMR_e_TrrnToggleMdSwitchChrt */
    /* Entry Internal: PokeTIMR_e_TrrnToggleMdSwitch/PokeTIMR_e_TrrnToggleMdSwitchChrt */
    /* Transition: '<S52>:2' */
    if (!LeTIMR_b_TrrnToggleMdSwitchFA)
    {
        /* Transition: '<S52>:3' */
        /* Transition: '<S52>:15' */
        rtb_LeTIMR_e_TrrnToggleMdSwit_l = KaTIMR_e_TrrnTgglSwMap
            [(LeTIMR_e_TrrnToggleMdSwitch)];

        /* Transition: '<S52>:18' */
    }
    else
    {
        /* Transition: '<S52>:4' */
        rtb_LeTIMR_e_TrrnToggleMdSwit_l = KeTIMR_e_TrrnToggleMdSwitchDflt;
    }

    /* End of Chart: '<S21>/PokeTIMR_e_TrrnToggleMdSwitchChrt' */

    /* Merge: '<Root>/VeTIMR_e_TrrnToggleMdSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S21>/VeTIMR_e_TrrnToggleMdSwitch_write'
     * */
    Rte_IrvWrite_PokeTIMR_e_TrrnToggleMdSwitch_VeTIMR_e_TrrnToggleMdSwitch_write_IRV
        (rtb_LeTIMR_e_TrrnToggleMdSwit_l);

    /* End of Outputs for SubSystem: '<Root>/PokeTIMR_e_TrrnToggleMdSwitch' */
}

/* Output function */
FUNC(void, TIMR_CODE) TIMR_PwrOff(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' incorporates:
     *  SubSystem: '<Root>/TIMR_PwrOff'
     */
    /* Outport: '<Root>/NeTIMR_e_TrrnMdSt_PM_Out' incorporates:
     *  DataStoreRead: '<S23>/NeTIMR_e_TrrnMdSt'
     */
    (void)Rte_Write_NeTIMR_e_TrrnMdSt_NeTIMR_e_TrrnMdSt
        (TIMR_ac_DW.NeTIMR_e_TrrnMdSt);

    /* Outport: '<Root>/NeTIMR_e_RacePrepMode_PM_Out' incorporates:
     *  DataStoreRead: '<S23>/NeTIMR_e_TrrnMdSt1'
     */
    (void)Rte_Write_NeTIMR_e_RacePrepMode_NeTIMR_e_RacePrepMode
        (TIMR_ac_DW.NeTIMR_e_RacePrepMode);

    /* Outport: '<Root>/NeTIMR_b_RacePrepType_PM_Out' incorporates:
     *  DataStoreRead: '<S23>/NeTIMR_e_TrrnMdSt2'
     */
    (void)Rte_Write_NeTIMR_b_RacePrepType_NeTIMR_b_RacePrepType
        (TIMR_ac_DW.NeTIMR_b_RacePrepType);

    /* Outport: '<Root>/NeTIMR_e_CustomDrvMdSts_PM_Out' incorporates:
     *  DataStoreRead: '<S23>/NeTIMR_e_TrrnMdSt3'
     */
    (void)Rte_Write_NeTIMR_e_CustomDrvMdSts_NeTIMR_e_CustomDrvMdSts
        (TIMR_ac_DW.NeTIMR_e_CustomDrvMdSts);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
}

/* Output function */
FUNC(void, TIMR_CODE) TIMR_PwrOn(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TIMR_PwrOn'
     */
    /* S-Function (fcgen): '<S24>/FcnCallGen' incorporates:
     *  SubSystem: '<S24>/DSM_Init'
     */
    /* DataStoreWrite: '<S613>/NeTIMR_e_TrrnMdSt3' incorporates:
     *  Inport: '<Root>/NeTIMR_b_CustomDrvMdSts_PM_In'
     */
    (void)Rte_Read_NeTIMR_b_CustomDrvMdSts_Rx_NeTIMR_b_CustomDrvMdSts
        (&TIMR_ac_DW.NeTIMR_e_CustomDrvMdSts);

    /* DataStoreWrite: '<S613>/NeTIMR_e_TrrnMdSt2' incorporates:
     *  Inport: '<Root>/NeTIMR_b_RacePrepType_PM_In'
     */
    (void)Rte_Read_NeTIMR_b_RacePrepType_Rx_NeTIMR_b_RacePrepType
        (&TIMR_ac_DW.NeTIMR_b_RacePrepType);

    /* DataStoreWrite: '<S613>/NeTIMR_e_TrrnMdSt1' incorporates:
     *  Inport: '<Root>/NeTIMR_e_RacePrepMode_PM_In'
     */
    (void)Rte_Read_NeTIMR_e_RacePrepMode_Rx_NeTIMR_e_RacePrepMode
        (&TIMR_ac_DW.NeTIMR_e_RacePrepMode);

    /* DataStoreWrite: '<S613>/NeTIMR_e_TrrnMdSt' incorporates:
     *  Inport: '<Root>/NeTIMR_e_TrrnMdSt_PM_In'
     */
    (void)Rte_Read_NeTIMR_e_TrrnMdSt_Rx_NeTIMR_e_TrrnMdSt
        (&TIMR_ac_DW.NeTIMR_e_TrrnMdSt);

    /* S-Function (fcgen): '<S24>/FcnCallGen' incorporates:
     *  SubSystem: '<S24>/Initialize_TMDI_Inputs'
     */
    /* SignalConversion generated from: '<S614>/VeTIMI_b_TrrnMdStFA' incorporates:
     *  Constant: '<S621>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_b_TrrnMd = KeTIMR_b_TrrnMdStFAInit;

    /* SignalConversion generated from: '<S614>/VeTIMI_b_AWD_Lock' incorporates:
     *  Constant: '<S619>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_b_AWD_Lo = KeTIMR_b_AWD_LockInit;

    /* SignalConversion generated from: '<S614>/VeTIMI_b_AWD_Low' incorporates:
     *  Constant: '<S620>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_b_AWD__n = KeTIMR_b_AWD_LowInit;

    /* SignalConversion generated from: '<S614>/VeTIMI_e_RadioCustomMode' incorporates:
     *  Constant: '<S623>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_e_RadioC = KeTIMR_e_RadioCustomInit;

    /* SignalConversion generated from: '<S614>/VeTIMI_e_RacePrepOnOffReq' */
    TIMR_ac_B.OutportBufferForVeTIMI_e_RacePr = false;

    /* SignalConversion generated from: '<S614>/VeTIMI_e_RacePrepRaceTypeSts' */
    TIMR_ac_B.OutportBufferForVeTIMI_e_Race_e = false;

    /* SignalConversion generated from: '<S614>/VeTIMI_e_LaunchIntensity' incorporates:
     *  Constant: '<S622>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_e_Launch = KeTIMR_e_LaunchIntensityInit;

    /* SignalConversion generated from: '<S614>/VeTIMR_e_CustomInterfaceBtn_write' incorporates:
     *  Constant: '<S616>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Cust_g = TIMR_ac_ConstB.Constant_lf;

    /* SignalConversion generated from: '<S614>/VeTIMI_e_MaxBoost' incorporates:
     *  Constant: '<S618>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_e_MaxBoo = TIMR_ac_ConstB.Constant_ps;

    /* S-Function (fcgen): '<S24>/FcnCallGen' incorporates:
     *  SubSystem: '<S24>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S615>/VeTIMR_b_Selector_Sys_Fail_Sts_Out_Init' */
    TIMR_ac_B.OutportBufferForVeTIMR_b_Select = false;

    /* SignalConversion generated from: '<S615>/VeTIMR_b_ModeSoftLatch_Out_Init' */
    TIMR_ac_B.OutportBufferForVeTIMR_b_ModeSo = false;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_LeftSwitchReq_write' incorporates:
     *  Constant: '<S625>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_LeftSw = TIMR_ac_ConstB.Constant_d;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_RightSwitchReq_write' incorporates:
     *  Constant: '<S636>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RightS = TIMR_ac_ConstB.Constant_l;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_RaceModeSts_Out_Init' incorporates:
     *  Constant: '<S626>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RaceMo = TIMR_ac_ConstB.Constant_am;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_RaceOptionnsSts_Out_Init' incorporates:
     *  Constant: '<S637>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RaceOp = TIMR_ac_ConstB.Constant_lg;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_TrrnMdDesiredSt_Out_Init' incorporates:
     *  Constant: '<S638>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TrrnMd = TIMR_ac_ConstB.Constant;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_GlobalDrvMdRq_BCM_write' incorporates:
     *  Constant: '<S639>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Global = TIMR_ac_ConstB.Constant_o;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_GlobalDrvMdRq_write' incorporates:
     *  Constant: '<S640>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Glob_c = TIMR_ac_ConstB.Constant_j;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_LaunchModeSwitch_write' incorporates:
     *  Constant: '<S641>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Launch = TIMR_ac_ConstB.Constant_dp;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_RaceMdPopUp_Out_Init' incorporates:
     *  Constant: '<S627>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RaceMd = TIMR_ac_ConstB.Constant_n;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_LaunchMdSwtchLED_Init' incorporates:
     *  Constant: '<S643>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Lau_ac = TIMR_ac_ConstB.Constant_ap;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_TowMdSwitch_write' incorporates:
     *  Constant: '<S629>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TowMdS = TIMR_ac_ConstB.Constant_o1;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_TrrnToggleMdSwitch_write' incorporates:
     *  Constant: '<S631>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TrrnTo = TIMR_ac_ConstB.Constant_c;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_CustomScreenRqst_Out_Init' incorporates:
     *  Constant: '<S630>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Cust_e = TIMR_ac_ConstB.Constant_p;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_LaunchIntensity_Out_Init' incorporates:
     *  Constant: '<S628>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Laun_o = TIMR_ac_ConstB.Constant_di;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_TerrainMdReq_Out_Init' incorporates:
     *  Constant: '<S632>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Terrai = TIMR_ac_ConstB.Constant_ac;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_ModeRequest_Out_Init' incorporates:
     *  Constant: '<S633>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_ModeRe = TIMR_ac_ConstB.Constant_a;

    /* SignalConversion generated from: '<S615>/VeTMIC_b_RaceEntryCondSts_Out_Init' incorporates:
     *  Constant: '<S644>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTMIC_b_RaceEn = TIMR_ac_ConstB.Constant_nn;

    /* SignalConversion generated from: '<S615>/VeTMIC_b_RaceDeadPedal_OutInit' */
    TIMR_ac_B.OutportBufferForVeTMIC_b_RaceDe = false;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_Out_Init' incorporates:
     *  Constant: '<S646>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_g = TIMR_ac_ConstB.Constant_ob;

    /* SignalConversion generated from: '<S615>/VeTIMR_b_MaxBoostStatus_FA_OutInit' */
    TIMR_ac_B.OutportBufferForVeTIMR_b_MaxBoo = false;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_TimeAttack_Out_Init' incorporates:
     *  Constant: '<S645>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TimeAt = TIMR_ac_ConstB.Constant_jn;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_LnchCtrl_Sts_OutInit' incorporates:
     *  Constant: '<S647>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_LnchCt = TIMR_ac_ConstB.Constant_hw;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_AccelStat_OutInit' incorporates:
     *  Constant: '<S648>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_h = TIMR_ac_ConstB.Constant_lz;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_AccelPopup_OutInit' incorporates:
     *  Constant: '<S649>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_MaxBoo = TIMR_ac_ConstB.Constant_lx;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_LaunchCtrl_Popup_OutInit' incorporates:
     *  Constant: '<S650>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Laun_a = TIMR_ac_ConstB.Constant_h;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_FaultSts_TerrSwBankModInt_OutInit' incorporates:
     *  Constant: '<S642>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_FaultS = TIMR_ac_ConstB.Constant_ot;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_FaultSts_TerrSwStuck_OutInit' incorporates:
     *  Constant: '<S634>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Faul_n = TIMR_ac_ConstB.Constant_i4;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_CustomDrvMdSts_Out_Init' incorporates:
     *  Constant: '<S652>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Custom = KeTIMR_e_RadioCustomInit;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_RacePrepRaceTypeSts_Out_Init' incorporates:
     *  Constant: '<S635>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RacePr = TIMR_ac_ConstB.Constant_i;

    /* SignalConversion generated from: '<S615>/VeTIMR_e_RacePrep_Out_Init' incorporates:
     *  Constant: '<S651>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Race_o = KeTIMR_e_RacePrepInit;

    /* End of Outputs for S-Function (fcgen): '<S24>/FcnCallGen' */

    /* Outport: '<Root>/VeTIMR_b_AWD_Lock' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMI_b_AWD_Lock'
     */
    (void)Rte_Write_VeTIMR_b_AWD_Lock_Value
        (TIMR_ac_B.OutportBufferForVeTIMI_b_AWD_Lo);

    /* Outport: '<Root>/VeTIMR_b_AWD_Low' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMI_b_AWD_Low'
     */
    (void)Rte_Write_VeTIMR_b_AWD_Low_Value
        (TIMR_ac_B.OutportBufferForVeTIMI_b_AWD__n);

    /* Outport: '<Root>/VeTIMR_b_TrrnMdStFA' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMI_b_TrrnMdStFA'
     */
    (void)Rte_Write_VeTIMR_b_TrrnMdStFA_Value
        (TIMR_ac_B.OutportBufferForVeTIMI_b_TrrnMd);

    /* Outport: '<Root>/VeTIMR_b_MaxBoostStatus_FA' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_b_MaxBoostStatus_FA_OutInit'
     */
    (void)Rte_Write_VeTIMR_b_MaxBoostStatus_FA_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_b_MaxBoo);

    /* Outport: '<Root>/VeTIMR_b_ModeSoftLatch' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_b_ModeSoftLatch_Out_Init'
     */
    (void)Rte_Write_VeTIMR_b_ModeSoftLatch_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_b_ModeSo);

    /* Outport: '<Root>/VeTIMR_b_Selector_Sys_Fail_Sts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_b_Selector_Sys_Fail_Sts_Out_Init'
     */
    (void)Rte_Write_VeTIMR_b_Selector_Sys_Fail_Sts_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_b_Select);

    /* Outport: '<Root>/VeTIMR_e_CustomDrvMdSts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_CustomDrvMdSts_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_CustomDrvMdSts_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_CustomDrvMdSts_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Custom);

    /* Outport: '<Root>/VeTIMR_e_CustomScreenRqst' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_CustomScreenRqst_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_CustomScreenRqst_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_CustomScreenRqst_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Cust_e);

    /* Outport: '<Root>/VeTIMR_e_FaultSts_TerrSwBankModInt' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_FaultSts_TerrSwBankModInt_OutInit'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_FaultSts_TerrSwBankModInt_OutInit'
     */
    (void)Rte_Write_VeTIMR_e_FaultSts_TerrSwBankModInt_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_FaultS);

    /* Outport: '<Root>/VeTIMR_e_FaultSts_TerrSwStuck' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_FaultSts_TerrSwStuck_OutInit'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_FaultSts_TerrSwStuck_OutInit'
     */
    (void)Rte_Write_VeTIMR_e_FaultSts_TerrSwStuck_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Faul_n);

    /* Outport: '<Root>/VeTIMR_e_LaunchCtrl_Popup' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_LaunchCtrl_Popup_OutInit'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_LaunchCtrl_Popup_OutInit'
     */
    (void)Rte_Write_VeTIMR_e_LaunchCtrl_Popup_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Laun_a);

    /* Outport: '<Root>/VeTIMR_e_LaunchIntensity' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_LaunchIntensity_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_LaunchIntensity_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_LaunchIntensity_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Laun_o);

    /* Outport: '<Root>/VeTIMR_e_LaunchMdSwtchLED' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_LaunchMdSwtchLED_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_LaunchMdSwtchLED_Init'
     */
    (void)Rte_Write_VeTIMR_e_LaunchMdSwtchLED_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Lau_ac);

    /* Outport: '<Root>/VeTIMR_e_LnchCtrl_Sts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_LnchCtrl_Sts_OutInit'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_LnchCtrl_Sts_OutInit'
     */
    (void)Rte_Write_VeTIMR_e_LnchCtrl_Sts_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_LnchCt);

    /* Outport: '<Root>/VeTIMR_e_MaxBoost_AccelPopup' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_MaxBoost_AccelPopup_OutInit'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_AccelPopup_OutInit'
     */
    (void)Rte_Write_VeTIMR_e_MaxBoost_AccelPopup_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_MaxBoo);

    /* Outport: '<Root>/VeTIMR_e_MaxBoost_AccelStat' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_MaxBoost_AccelStat_OutInit'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_AccelStat_OutInit'
     */
    (void)Rte_Write_VeTIMR_e_MaxBoost_AccelStat_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_h);

    /* Outport: '<Root>/VeTIMR_e_MaxBoostStatus' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_MaxBoost_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_MaxBoostStatus_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_g);

    /* Outport: '<Root>/VeTIMR_e_ModeRequest' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_ModeRequest_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_ModeRequest_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_ModeRequest_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_ModeRe);

    /* Outport: '<Root>/VeTIMR_e_RaceMdPopUp' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RaceMdPopUp_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_RaceMdPopUp_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_RaceMdPopUp_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_RaceMd);

    /* Outport: '<Root>/VeTIMR_e_RaceModeSts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RaceModeSts_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_RaceModeSts_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_RaceModeSts_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_RaceMo);

    /* Outport: '<Root>/VeTIMR_e_RaceOptions_Sts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RaceOptionsSts_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_RaceOptionnsSts_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_RaceOptions_Sts_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_RaceOp);

    /* Outport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RacePrepRaceTypeSts_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_RacePrepRaceTypeSts_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_RacePrepRaceTypeSts_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_RacePr);

    /* Outport: '<Root>/VeTIMR_e_RacePrep' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RacePrep_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_RacePrep_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_RacePrep_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Race_o);

    /* Outport: '<Root>/VeTIMR_e_TerrainMdReq' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_TerrainMdReq_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_TerrainMdReq_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_TerrainMdReq_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Terrai);

    /* Outport: '<Root>/VeTIMR_e_TimeAttackStatus' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_TimeAttack_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_TimeAttack_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_TimeAttackStatus_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_TimeAt);

    /* Outport: '<Root>/VeTIMR_e_TrrnMdSt' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_TrrnMdDesiredSt_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_TrrnMdDesiredSt_Out_Init'
     */
    (void)Rte_Write_VeTIMR_e_TrrnMdSt_Value
        (TIMR_ac_B.OutportBufferForVeTIMR_e_TrrnMd);

    /* Outport: '<Root>/VeTMIR_b_RaceDeadPedal' incorporates:
     *  SignalConversion generated from: '<S24>/VeTMIC_b_RaceDeadPedal_OutInit'
     */
    (void)Rte_Write_VeTMIR_b_RaceDeadPedal_Value
        (TIMR_ac_B.OutportBufferForVeTMIC_b_RaceDe);

    /* Outport: '<Root>/VeTMIR_e_RaceEntryCondSts' incorporates:
     *  SignalConversion generated from: '<S24>/VeTMIC_b_RaceEntryCondSts_Out_Init'
     *  SignalConversion generated from: '<S615>/VeTMIC_b_RaceEntryCondSts_Out_Init'
     */
    (void)Rte_Write_VeTMIR_e_RaceEntryCondSts_Value
        (TIMR_ac_B.OutportBufferForVeTMIC_b_RaceEn);

    /* Merge: '<Root>/VeTIMR_e_LaunchIntensity_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMI_e_LaunchIntensity'
     *  SignalConversion generated from: '<S614>/VeTIMI_e_LaunchIntensity'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_LaunchIntensity_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMI_e_Launch);

    /* Merge: '<Root>/Poke_VeTIMR_e_MaxBoostReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMI_e_MaxBoost'
     *  SignalConversion generated from: '<S614>/VeTIMI_e_MaxBoost'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_MaxBoostReq_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMI_e_MaxBoo);

    /* Merge: '<Root>/VeTIMR_e_RadioCustomMode_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMI_e_RadioCustomMode_write'
     *  SignalConversion generated from: '<S614>/VeTIMI_e_RadioCustomMode'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_RadioCustomMode_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMI_e_RadioC);

    /* Merge: '<Root>/VeTIMR_e_CustomInterfaceBtn_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_CustomInterfaceBtn_write'
     *  SignalConversion generated from: '<S614>/VeTIMR_e_CustomInterfaceBtn_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_CustomInterfaceBtn_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Cust_g);

    /* Merge: '<Root>/VeTIMR_e_GlobalDrvMdRq_BCM_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_GlobalDrvMdRq_BCM_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_GlobalDrvMdRq_BCM_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_GlobalDrvMdRq_BCM_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Global);

    /* Merge: '<Root>/VeTIMR_e_GlobalDrvMdRq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_GlobalDrvMdRq_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_GlobalDrvMdRq_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_GlobalDrvMdReq_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Glob_c);

    /* Merge: '<Root>/VeTIMR_e_LaunchModeSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_LaunchModeSwitch_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_LaunchModeSwitch_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_LaunchModeSwitch_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_Launch);

    /* Merge: '<Root>/VeTIMR_e_LeftSwitchReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_LeftSwitchReq_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_LeftSwitchReq_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_LeftSwitchReq_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_LeftSw);

    /* Merge: '<Root>/VeTIMR_e_RacePrepOnOffReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RacePrepOnOffReq_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_RacePrepOnOffReq_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMI_e_RacePr);

    /* Merge: '<Root>/VeTIMR_e_RacePrepRaceTypeReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RacePrepRaceTypeReq_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_RacePrepRaceTypeReq_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMI_e_Race_e);

    /* Merge: '<Root>/VeTIMR_e_RightSwitchReq_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_RightSwitchReq_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_RightSwitchReq_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_RightSwitchReq_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_RightS);

    /* Merge: '<Root>/VeTIMR_e_TowMdSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_TowMdSwitch_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_TowMdSwitch_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_TowMdSwitch_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_TowMdS);

    /* Merge: '<Root>/VeTIMR_e_TrrnToggleMdSwitch_IRV_Merge' incorporates:
     *  SignalConversion generated from: '<S24>/VeTIMR_e_TrrnToggleMdSwitch_write'
     *  SignalConversion generated from: '<S615>/VeTIMR_e_TrrnToggleMdSwitch_write'
     * */
    Rte_IrvWrite_TIMR_PwrOn_VeTIMR_e_TrrnToggleMdSwitch_write_IRV
        (TIMR_ac_B.OutportBufferForVeTIMR_e_TrrnTo);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TIMR_CODE) TIMR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        TIMR_ac_B.OutportBufferForVeTIMR_e_LnchCt = CeTIMR_e_NOT_ALLOWED;
        TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_h = CeTIMR_e_NOT_ALLOWED;

#if Rte_SysCon_Variant_TIMR_3

        TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;

#endif

#if Rte_SysCon_Variant_TIMR_3

        TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_NOT_ALLOWED;

#endif

#if Rte_SysCon_Variant_TIMR_3

        TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_NOT_ALLOWED;

#endif

    }

    /* Start for DataStoreMemory: '<Root>/DSM_4' */
    TIMR_ac_DW.NeTIMR_e_CustomDrvMdSts = CeTMDR_e_Street;

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TIMR_PwrOn'
     */
    /* SystemInitialize for S-Function (fcgen): '<S24>/FcnCallGen' incorporates:
     *  SubSystem: '<S24>/Initialize_TMDI_Inputs'
     */
    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMI_b_TrrnMdStFA' incorporates:
     *  Constant: '<S621>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_b_TrrnMd = KeTIMR_b_TrrnMdStFAInit;

    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMI_b_AWD_Lock' incorporates:
     *  Constant: '<S619>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_b_AWD_Lo = KeTIMR_b_AWD_LockInit;

    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMI_b_AWD_Low' incorporates:
     *  Constant: '<S620>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_b_AWD__n = KeTIMR_b_AWD_LowInit;

    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMI_e_RadioCustomMode' incorporates:
     *  Constant: '<S623>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_e_RadioC = KeTIMR_e_RadioCustomInit;

    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMI_e_LaunchIntensity' incorporates:
     *  Constant: '<S622>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_e_Launch = KeTIMR_e_LaunchIntensityInit;

    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMR_e_CustomInterfaceBtn_write' incorporates:
     *  Constant: '<S616>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Cust_g = TIMR_ac_ConstB.Constant_lf;

    /* SystemInitialize for SignalConversion generated from: '<S614>/VeTIMI_e_MaxBoost' incorporates:
     *  Constant: '<S618>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMI_e_MaxBoo = TIMR_ac_ConstB.Constant_ps;

    /* SystemInitialize for S-Function (fcgen): '<S24>/FcnCallGen' incorporates:
     *  SubSystem: '<S24>/Sub_Out_Init'
     */
    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_LeftSwitchReq_write' incorporates:
     *  Constant: '<S625>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_LeftSw = TIMR_ac_ConstB.Constant_d;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_RightSwitchReq_write' incorporates:
     *  Constant: '<S636>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RightS = TIMR_ac_ConstB.Constant_l;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_RaceModeSts_Out_Init' incorporates:
     *  Constant: '<S626>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RaceMo = TIMR_ac_ConstB.Constant_am;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_RaceOptionnsSts_Out_Init' incorporates:
     *  Constant: '<S637>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RaceOp = TIMR_ac_ConstB.Constant_lg;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_TrrnMdDesiredSt_Out_Init' incorporates:
     *  Constant: '<S638>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TrrnMd = TIMR_ac_ConstB.Constant;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_GlobalDrvMdRq_BCM_write' incorporates:
     *  Constant: '<S639>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Global = TIMR_ac_ConstB.Constant_o;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_GlobalDrvMdRq_write' incorporates:
     *  Constant: '<S640>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Glob_c = TIMR_ac_ConstB.Constant_j;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_LaunchModeSwitch_write' incorporates:
     *  Constant: '<S641>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Launch = TIMR_ac_ConstB.Constant_dp;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_RaceMdPopUp_Out_Init' incorporates:
     *  Constant: '<S627>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RaceMd = TIMR_ac_ConstB.Constant_n;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_LaunchMdSwtchLED_Init' incorporates:
     *  Constant: '<S643>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Lau_ac = TIMR_ac_ConstB.Constant_ap;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_TowMdSwitch_write' incorporates:
     *  Constant: '<S629>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TowMdS = TIMR_ac_ConstB.Constant_o1;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_TrrnToggleMdSwitch_write' incorporates:
     *  Constant: '<S631>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TrrnTo = TIMR_ac_ConstB.Constant_c;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_CustomScreenRqst_Out_Init' incorporates:
     *  Constant: '<S630>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Cust_e = TIMR_ac_ConstB.Constant_p;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_LaunchIntensity_Out_Init' incorporates:
     *  Constant: '<S628>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Laun_o = TIMR_ac_ConstB.Constant_di;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_TerrainMdReq_Out_Init' incorporates:
     *  Constant: '<S632>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Terrai = TIMR_ac_ConstB.Constant_ac;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_ModeRequest_Out_Init' incorporates:
     *  Constant: '<S633>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_ModeRe = TIMR_ac_ConstB.Constant_a;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTMIC_b_RaceEntryCondSts_Out_Init' incorporates:
     *  Constant: '<S644>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTMIC_b_RaceEn = TIMR_ac_ConstB.Constant_nn;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_Out_Init' incorporates:
     *  Constant: '<S646>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_g = TIMR_ac_ConstB.Constant_ob;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_TimeAttack_Out_Init' incorporates:
     *  Constant: '<S645>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_TimeAt = TIMR_ac_ConstB.Constant_jn;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_LnchCtrl_Sts_OutInit' incorporates:
     *  Constant: '<S647>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_LnchCt = TIMR_ac_ConstB.Constant_hw;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_AccelStat_OutInit' incorporates:
     *  Constant: '<S648>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_MaxB_h = TIMR_ac_ConstB.Constant_lz;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_MaxBoost_AccelPopup_OutInit' incorporates:
     *  Constant: '<S649>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_MaxBoo = TIMR_ac_ConstB.Constant_lx;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_LaunchCtrl_Popup_OutInit' incorporates:
     *  Constant: '<S650>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Laun_a = TIMR_ac_ConstB.Constant_h;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_FaultSts_TerrSwBankModInt_OutInit' incorporates:
     *  Constant: '<S642>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_FaultS = TIMR_ac_ConstB.Constant_ot;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_FaultSts_TerrSwStuck_OutInit' incorporates:
     *  Constant: '<S634>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Faul_n = TIMR_ac_ConstB.Constant_i4;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_CustomDrvMdSts_Out_Init' incorporates:
     *  Constant: '<S652>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Custom = KeTIMR_e_RadioCustomInit;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_RacePrepRaceTypeSts_Out_Init' incorporates:
     *  Constant: '<S635>/Constant'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_RacePr = TIMR_ac_ConstB.Constant_i;

    /* SystemInitialize for SignalConversion generated from: '<S615>/VeTIMR_e_RacePrep_Out_Init' incorporates:
     *  Constant: '<S651>/Calib'
     */
    TIMR_ac_B.OutportBufferForVeTIMR_e_Race_o = KeTIMR_e_RacePrepInit;

    /* End of SystemInitialize for S-Function (fcgen): '<S24>/FcnCallGen' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

    /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TIMR_MedTED'
     */
    /* SystemInitialize for S-Function (fcgen): '<S22>/FcnCallGen' incorporates:
     *  SubSystem: '<S22>/Subsystem'
     */
    /* SystemInitialize for Atomic SubSystem: '<S54>/Race_Mode_Arbitration' */
#if Rte_SysCon_Variant_TIMR_3

    /* SystemInitialize for Atomic SubSystem: '<S61>/Race_Mode_Arbitration_LP3' */
    /* InitializeConditions for UnitDelay: '<S109>/Unit Delay1' */
    TIMR_ac_DW.UnitDelay1_DSTATE_pk = CeTIMR_e_IDLE;

    /* SystemInitialize for Chart: '<S109>/RaceMode_Arbitration' */
    TIMR_ac_B.Acceleration_Sts = CeTIMR_e_NOT_ALLOWED;
    TIMR_ac_B.MaxBoost_AccelStat = CeTIMR_e_NOT_ALLOWED;
    TIMR_ac_B.LnchCtrl_Sts = CeTIMR_e_NOT_ALLOWED;

    /* End of SystemInitialize for SubSystem: '<S61>/Race_Mode_Arbitration_LP3' */
    /* End of SystemInitialize for S-Function (fcgen): '<S22>/FcnCallGen' */
#endif

    /* End of SystemInitialize for SubSystem: '<S54>/Race_Mode_Arbitration' */
    /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_TrrnMdSt' incorporates:
     *  Merge: '<Root>/Merge_4'
     */
    (void)Rte_Write_VeTIMR_e_TrrnMdSt_Value(CeTMDR_e_NotDefine);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_RaceModeSts' incorporates:
     *  Merge: '<Root>/Merge_Outport_1'
     */
    (void)Rte_Write_VeTIMR_e_RaceModeSts_Value(CeTIMR_e_RaceMode_Off);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_RaceOptions_Sts' incorporates:
     *  Merge: '<Root>/Merge_Outport_5'
     */
    (void)Rte_Write_VeTIMR_e_RaceOptions_Sts_Value(CeTIMR_e_NoOptionSelected);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_CustomDrvMdSts' incorporates:
     *  Merge: '<Root>/Merge_1'
     */
    (void)Rte_Write_VeTIMR_e_CustomDrvMdSts_Value(CeTMDR_e_NotDefine);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_RacePrep' incorporates:
     *  Merge: '<Root>/Merge_Outport_2'
     */
    (void)Rte_Write_VeTIMR_e_RacePrep_Value(CeTIMR_e_RacePrep_Off);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_RacePrepRaceTypeSts' incorporates:
     *  Merge: '<Root>/Merge_6'
     */
    (void)Rte_Write_VeTIMR_e_RacePrepRaceTypeSts_Value(CeTIMR_e_RaceType_Drag);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_RaceMdPopUp' incorporates:
     *  Merge: '<Root>/Merge_11'
     */
    (void)Rte_Write_VeTIMR_e_RaceMdPopUp_Value(CeTIMR_e_TM0);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_CustomScreenRqst' incorporates:
     *  Merge: '<Root>/Merge_13'
     */
    (void)Rte_Write_VeTIMR_e_CustomScreenRqst_Value(CeTIMR_e_NotActivated);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_LaunchIntensity' incorporates:
     *  Merge: '<Root>/Merge_14'
     */
    (void)Rte_Write_VeTIMR_e_LaunchIntensity_Value(CeTIMR_e_Max);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_LaunchMdSwtchLED' incorporates:
     *  Merge: '<Root>/Merge_12'
     */
    (void)Rte_Write_VeTIMR_e_LaunchMdSwtchLED_Value(CeTIMR_e_LEDOff);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_TerrainMdReq' incorporates:
     *  Merge: '<Root>/Merge_15'
     */
    (void)Rte_Write_VeTIMR_e_TerrainMdReq_Value(CeTIMR_e_Not_Activated);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_ModeRequest' incorporates:
     *  Merge: '<Root>/Merge_16'
     */
    (void)Rte_Write_VeTIMR_e_ModeRequest_Value(CeTMDR_e_NotDefine);

    /* SystemInitialize for Outport: '<Root>/VeTMIR_e_RaceEntryCondSts' incorporates:
     *  Merge: '<Root>/Merge_17'
     */
    (void)Rte_Write_VeTMIR_e_RaceEntryCondSts_Value(CeTIMR_e_RaceEntry_Not_OK);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_MaxBoostStatus' incorporates:
     *  Merge: '<Root>/Merge_19'
     */
    (void)Rte_Write_VeTIMR_e_MaxBoostStatus_Value(CeTIMR_e_Boost_Off);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_TimeAttackStatus' incorporates:
     *  Merge: '<Root>/Merge_20'
     */
    (void)Rte_Write_VeTIMR_e_TimeAttackStatus_Value(CeTIMR_e_Boost_Off);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_FaultSts_TerrSwBankModInt' incorporates:
     *  Merge: '<Root>/Merge_21'
     */
    (void)Rte_Write_VeTIMR_e_FaultSts_TerrSwBankModInt_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_FaultSts_TerrSwStuck' incorporates:
     *  Merge: '<Root>/Merge_22'
     */
    (void)Rte_Write_VeTIMR_e_FaultSts_TerrSwStuck_Value(CeDFIB_e_Init);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_LnchCtrl_Sts' incorporates:
     *  Merge: '<Root>/Merge_24'
     */
    (void)Rte_Write_VeTIMR_e_LnchCtrl_Sts_Value(CeTIMR_e_NOT_ALLOWED);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_MaxBoost_AccelStat' incorporates:
     *  Merge: '<Root>/Merge_25'
     */
    (void)Rte_Write_VeTIMR_e_MaxBoost_AccelStat_Value(CeTIMR_e_NOT_ALLOWED);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_MaxBoost_AccelPopup' incorporates:
     *  Merge: '<Root>/Merge_26'
     */
    (void)Rte_Write_VeTIMR_e_MaxBoost_AccelPopup_Value(CeTIMR_e_NONE);

    /* SystemInitialize for Outport: '<Root>/VeTIMR_e_LaunchCtrl_Popup' incorporates:
     *  Merge: '<Root>/Merge_27'
     */
    (void)Rte_Write_VeTIMR_e_LaunchCtrl_Popup_Value(CeTIMR_e_NONE);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
