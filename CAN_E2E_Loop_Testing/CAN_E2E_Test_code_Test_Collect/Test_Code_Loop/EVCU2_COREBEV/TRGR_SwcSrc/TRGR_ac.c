/*
 * File: TRGR_ac.c
 *
 * Code generated for Simulink model 'TRGR_ac'.
 *
 * Model version                  : 9.523
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Apr  5 19:51:29 2024
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Freescale->MPC55xx
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "TRGR_ac.h"

/* Named constants for Chart: '<S20>/TRGC_PRND_AutoCorrection' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_AutoCorrect_Fault   ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_AutoCorrect_Off     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_AutoCorrect_On      ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_AutoCorrect_Pending ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_NO_ACTIVE_CHILD     ((uint8)0U)
#endif

/* Named constants for Chart: '<S27>/Engine_Braking_Management' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Active              ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Not_Active          ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Temporarily_Not_Available ((uint8)3U)
#endif

/* Named constants for Chart: '<S689>/Init_UnexpPwrDwn' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_PowerDown           ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WakeUpDecision1     ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WakeUpDecision2     ((uint8)3U)
#endif

/* Named constants for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_DriveToNeutral      ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_DriveToPark         ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_DriveToReverse      ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Drive_Confirm       ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Drive_DisEngage     ((uint8)5U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_HoldState           ((uint8)6U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Init1               ((uint8)7U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Init2               ((uint8)8U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_NeutralToDrive      ((uint8)9U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_NeutralToPark       ((uint8)10U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_NeutralToReverse    ((uint8)11U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Neutral_Confirm     ((uint8)12U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Neutral_DisEngage   ((uint8)13U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Neutral_Init        ((uint8)14U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_ParkToDrive         ((uint8)15U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_ParkToNeutral       ((uint8)16U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_ParkToReverse       ((uint8)17U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Park_Confirm        ((uint8)18U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Park_Engage         ((uint8)19U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Park_Init_DisEngage ((uint8)20U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Park_Init_Engage    ((uint8)21U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_ReverseToDrive      ((uint8)22U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_ReverseToNeutral    ((uint8)23U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_ReverseToPark       ((uint8)24U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Reverse_Confirm     ((uint8)25U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Reverse_DisEngage   ((uint8)26U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Unknown_Position    ((uint8)27U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Unknown_Position_1  ((uint8)28U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WEDLearningProcedureActive ((uint8)29U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WEDStatusCheck      ((uint8)30U)
#endif

/* Named constants for Chart: '<S1134>/InPlantTest_Stateflow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_D_Complete          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_D_NotComplete       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Drive_Test          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_IPHold_State        ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_L_Complete          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_L_NotComplete       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Low_Test            ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_NOT_IP_Test         ((uint8)4U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_N_Complete          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Neutral_Test        ((uint8)5U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_P_Complete          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_P_NotComplete       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Park_Test           ((uint8)6U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_R_Complete          ((uint8)1U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_R_NotComplete       ((uint8)2U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_Reverse_Test        ((uint8)7U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WaitMode_D          ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WaitMode_L          ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WaitMode_N          ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WaitMode_P          ((uint8)3U)
#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab
#define TRGR_ac_IN_WaitMode_R          ((uint8)3U)
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
#define START_SEC_CALIB_UNSPECIFIED_TRGR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalParameter */
#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_AEMD_Map[13] =
{
    3, 6, 7, 8, 9, 10, 11, 12, 13, 14, 2, 2, 1
} ;                                    /* Referenced by: '<S1346>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_BlinkDrvrReq_Map[6] =
{
    0, 1, 2, 3, 4, 5
} ;                                    /* Referenced by: '<S79>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_BlinkVldtdTransRngSt_Map
    [30] =
{
    0, 1, 2, 3, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 3, 3, 3,
    4, 4, 4, 0
} ;                                    /* Referenced by: '<S80>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_CurrenrGrForDisp[30] =
{
    0, 12, 14, 13, 1, 1, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 15
} ;                                    /* Referenced by: '<S1098>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT)
    KaTRGR_e_DesiredERSToVldtdTransRngSt[13] =
{
    4, 5, 6, 7, 8, 9, 4, 4, 4, 4, 4, 4, 4
} ;                                    /* Referenced by: '<S404>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_Gr_Map[30] =
{
    16, 13, 11, 0, 1, 1, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16, 16, 15
} ;                                    /* Referenced by: '<S1099>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_PRNDReq_Map[30] =
{
    8, 0, 1, 2, 4, 4, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 7
} ;                                    /* Referenced by: '<S1100>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_R_Status[30] =
{
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3
} ;                                    /* Referenced by: '<S890>/Calib' */

#endif

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_ShftDisp[30] =
{
    0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17
} ;                                    /* Referenced by:
                                        * '<S1233>/Calib'
                                        * '<S107>/Calib'
                                        * '<S108>/Calib'
                                        */

static volatile CONST(sint16, TRGR_VAR_INIT) KaTRGR_e_TransShiftLeverPstn_Map[30]
    =
{
    0, 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 3, 2, 4, 10, 10, 10, 10, 10, 10, 10, 10,
    10, 10, 10, 10, 10, 10, 10
} ;                                    /* Referenced by:
                                        * '<S926>/Calib'
                                        * '<S1246>/Calib'
                                        */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KaTRGR_t_PRNDLBlinkTime[36] =
{
    0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 0.0F, 1.0F, 1.0F, 1.0F, 1.0F, 0.0F,
    1.0F, 0.0F, 0.5F, 0.5F, 0.5F, 0.0F, 1.0F, 0.5F, 0.0F, 0.5F, 0.5F, 0.0F, 1.0F,
    0.5F, 0.5F, 0.0F, 0.5F, 0.0F, 1.0F, 0.5F, 0.5F, 0.5F, 0.0F
} ;                                    /* Referenced by: '<S81>/Calib' */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_Cf_VehSpeedKphToMph =
    0.62137F;                          /* Referenced by:
                                        * '<S927>/Calib'
                                        * '<S1247>/Calib'
                                        */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_Cnt_AtParkSpdHi_EPBDbnc =
    30U;                               /* Referenced by: '<S846>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT)
    KeTRGR_Cnt_AtParkSpdHi_PPawlSysFltDbnc = 40U;/* Referenced by: '<S847>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_Cnt_AutoCorrectPDbnc = 10U;/* Referenced by: '<S49>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_Cnt_NLockDbnc = 15U;/* Referenced by: '<S718>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_Cnt_TapDnBlink = 0U;/* Referenced by: '<S405>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_Cnt_WEDOpenFlt_EPBDbnc = 50U;/* Referenced by: '<S848>/Calib' */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_P_BrkPrssOvrdVal = 0.0F;/* Referenced by:
                                                                      * '<S928>/Calib'
                                                                      * '<S1281>/Calib'
                                                                      */
static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_P_BrkPrssTh = 0.0F;/* Referenced by:
                                                                      * '<S1073>/Calib'
                                                                      * '<S1282>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_U_IBS_BattVoltOutOvrdVal =
    0.0F;                              /* Referenced by: '<S1163>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_U_IP_IBS_BattVoltOut =
    10.0F;                             /* Referenced by: '<S1164>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_AccelStsOvrd = 0;/* Referenced by: '<S929>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_AccelStsOvrdVal = 0;/* Referenced by: '<S930>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ActivateDAI_Prestart = 0;/* Referenced by: '<S630>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ActualGearOvrd = 0;/* Referenced by: '<S1248>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_AutoCorrectP_VF = 0;/* Referenced by: '<S50>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_AutoPosCorrMdOvrd = 0;/* Referenced by: '<S931>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_AutoShiftToParkEnbl = 0;/* Referenced by: '<S631>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrakeAppliedOvrd = 0;/* Referenced by:
                                                                      * '<S1074>/Calib'
                                                                      * '<S1283>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrakeAppliedOvrdVal = 0;/* Referenced by:
                                                                      * '<S1075>/Calib'
                                                                      * '<S1284>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrakeFAOvrd = 0;/* Referenced by:
                                                                      * '<S1076>/Calib'
                                                                      * '<S1285>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrakeFAOvrdVal = 0;/* Referenced by:
                                                                      * '<S1077>/Calib'
                                                                      * '<S1286>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrakingMdReqOvrd = 0;/* Referenced by: '<S932>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrkPedalDscrtInptFAOvrd =
    0;                                 /* Referenced by:
                                        * '<S933>/Calib'
                                        * '<S1287>/Calib'
                                        */
static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_BrkPedalDscrtInptFAOvrdVal = 0;/* Referenced by:
                                             * '<S934>/Calib'
                                             * '<S1288>/Calib'
                                             */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrkPedalDscrtInptOvrd = 0;/* Referenced by:
                                                                      * '<S935>/Calib'
                                                                      * '<S1289>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrkPrssFAOvrd = 0;/* Referenced by:
                                                                      * '<S936>/Calib'
                                                                      * '<S1290>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrkPrssFAOvrdVal = 0;/* Referenced by:
                                                                      * '<S937>/Calib'
                                                                      * '<S1291>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_BrkPrssOvrd = 0;/* Referenced by:
                                                                      * '<S938>/Calib'
                                                                      * '<S1292>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_CADM_ParkEnable = 0;/* Referenced by: '<S654>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_CarWash_Enbl = 1;/* Referenced by: '<S113>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_CarWash_EnblP = 1;/* Referenced by: '<S114>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_CntrlPwrHldOvrd = 0;/* Referenced by: '<S939>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_CntrlPwrHldOvrdVal = 0;/* Referenced by: '<S940>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_CrankEnabledRotary = 1;/* Referenced by: '<S687>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DAI_EnblOvrd = 0;/* Referenced by: '<S941>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DAI_EnblOvrdVal = 0;/* Referenced by: '<S942>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DAI_Latch = 1;/* Referenced by: '<S632>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_D_TestFail_ReadOvrd = 0;/* Referenced by: '<S1177>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_D_TestFail_ReadOvrdVal =
    0;                                 /* Referenced by: '<S1178>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_D_TestNotCmplt_ReadOvrd =
    0;                                 /* Referenced by: '<S1179>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_D_TestNotCmplt_ReadOvrdVal = 0;/* Referenced by: '<S1180>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DecelStsOvrd = 0;/* Referenced by: '<S943>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DecelStsOvrdVal = 0;/* Referenced by: '<S944>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DrvAllwdOvrd = 0;/* Referenced by:
                                                                      * '<S945>/Calib'
                                                                      * '<S1249>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DrvAllwdOvrdVal = 0;/* Referenced by:
                                                                      * '<S946>/Calib'
                                                                      * '<S1250>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DrvAllwdTPChckOvrd = 0;/* Referenced by: '<S947>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DrvAllwdTPChckOvrdVal = 0;/* Referenced by: '<S948>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DsblBrkPdlDscrtInpt = 0;/* Referenced by: '<S1078>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DsblDiagFailSafeOvrd = 0;/* Referenced by: '<S949>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DsblDiagFailSafeOvrdVal =
    0;                                 /* Referenced by: '<S950>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DsblPrkPrss = 0;/* Referenced by: '<S1079>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DsblRBlink_LOC_D = 1;/* Referenced by: '<S82>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DsblRngVldt = 0;/* Referenced by: '<S318>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Dsbl_NLck_BrkRst = 1;/* Referenced by: '<S519>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_DschrgSysStsOvrd = 0;/* Referenced by: '<S951>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EPBHoldStsOvrd = 0;/* Referenced by: '<S1251>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EPB_HoldStsOvrd = 0;/* Referenced by: '<S952>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ERSReduce = 0;/* Referenced by:
                                                                      * '<S431>/Calib'
                                                                      * '<S438>/Calib'
                                                                      * '<S457>/Calib'
                                                                      * '<S469>/Calib'
                                                                      */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ESMTransRngStOvrd = 0;/* Referenced by:
                                                                      * '<S953>/Calib'
                                                                      * '<S1252>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ESSParkEnable = 0;/* Referenced by: '<S657>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ESSRqShftParkOvrd = 1;/* Referenced by: '<S954>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ESSRqShftParkOvrdVal = 1;/* Referenced by: '<S955>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnableBrakingMode = 0;/* Referenced by: '<S484>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnableERSFunction = 0;/* Referenced by: '<S348>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnableSelectSpdSts = 0;/* Referenced by: '<S800>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_EnableWEDLearningProcedure = 0;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Enable_PPPA = 0;/* Referenced by: '<S797>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblAutoParkResetKeyOff =
    0;                                 /* Referenced by: '<S633>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_EnblAutoPark_NeutAllwdLost = 1;/* Referenced by: '<S644>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblAutoPark_Plugged_In =
    1;                                 /* Referenced by: '<S1324>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_EnblAutoPark_PropSysActvLost = 1;/* Referenced by: '<S671>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblBlink_WEDOpenInP = 0;/* Referenced by: '<S83>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblDrvRqChck = 0;/* Referenced by: '<S849>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPBAtSlope = 0;/* Referenced by: '<S850>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPBPPawlNotEng = 1;/* Referenced by: '<S851>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPBWEDOpenFltd = 0;/* Referenced by: '<S852>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPB_AtPark = 0;/* Referenced by: '<S853>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPB_AtParkVehMoved =
    0;                                 /* Referenced by: '<S854>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPB_AtParkWithHiSpd =
    0;                                 /* Referenced by: '<S855>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblEPB_AtRND = 1;/* Referenced by: '<S856>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblNShftLock_KeyPos = 0;/* Referenced by: '<S520>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblNeutral = 1;/* Referenced by: '<S1253>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblPCodeChck = 0;/* Referenced by: '<S857>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblPPawlDTC_WithPHiSpd =
    0;                                 /* Referenced by: '<S858>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblPPawlDisEng_AtPHiSpd =
    1;                                 /* Referenced by: '<S859>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblPShftLock_HoodOpen =
    0;                                 /* Referenced by: '<S535>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblPShftLock_KeyPos = 0;/* Referenced by: '<S536>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblPShftLock_RefuelSts =
    1;                                 /* Referenced by: '<S537>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblSNAInHoldState = 0;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EnblShftLckFltChck = 0;/* Referenced by: '<S860>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_EnblTransitionInDisengaged = 0;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Enbl_AutoCorrectN = 0;/* Referenced by: '<S51>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Enbl_BrakingModeTransWarn
    = 0;                               /* Referenced by:
                                        * '<S176>/Calib'
                                        * '<S183>/Calib'
                                        * '<S187>/Calib'
                                        */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Enbl_NLck_D = 0;/* Referenced by: '<S521>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EngineOffOvrd = 0;/* Referenced by: '<S956>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EngineOffOvrdVal = 0;/* Referenced by: '<S957>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EstSlopeAngleOvrd = 0;/* Referenced by: '<S958>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_EvenGearOvrd = 0;/* Referenced by: '<S1254>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_FobSearchResultOvrd = 0;/* Referenced by: '<S959>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_FobSearchResult_FA_Ovrd =
    0;                                 /* Referenced by: '<S960>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_FobSearchResult_FA_OvrdVal = 0;/* Referenced by: '<S961>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ForcePark_EngineOff = 0;/* Referenced by: '<S660>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Force_To_Park = 0;/* Referenced by:
                                                                      * '<S1255>/Calib'
                                                                      * '<S1325>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G1Allow_ERS1 = 1;/* Referenced by: '<S360>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G1Allow_ERS2 = 1;/* Referenced by: '<S363>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G1Allow_ERS3 = 1;/* Referenced by: '<S368>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G1Allow_ERS4 = 1;/* Referenced by: '<S374>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G1Allow_ERS5or6 = 1;/* Referenced by: '<S380>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G2Allow_ERS3 = 1;/* Referenced by: '<S369>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G2Allow_ERS4 = 1;/* Referenced by: '<S375>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G2Allow_ERS5or6 = 1;/* Referenced by: '<S381>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_G3Allow_ERS5or6 = 1;/* Referenced by: '<S382>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_GatedParkSWFltOvrd = 0;/* Referenced by: '<S962>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_H2_Refuel_Sts_Ovrd = 0;/* Referenced by: '<S963>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_H2_Refuel_Sts_OvrdVal = 0;/* Referenced by: '<S964>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_HoodOpenOvrd = 0;/* Referenced by: '<S965>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_HoodOpenOvrdVal = 0;/* Referenced by: '<S966>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_IBS_BattVoltOutOvrd = 0;/* Referenced by: '<S1165>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_IPModeConditionsSetOvrd =
    0;                                 /* Referenced by: '<S1166>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_IPModeConditionsSetOvrdVal = 0;/* Referenced by: '<S1167>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_IPModeOvrd = 0;/* Referenced by: '<S1168>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_IPModeOvrdVal = 0;/* Referenced by: '<S1169>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ImmoParkEnable = 0;/* Referenced by: '<S656>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ImmoParkReqOvrd = 0;/* Referenced by: '<S967>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ImmoParkReqOvrdVal = 0;/* Referenced by: '<S968>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_InPlant_DAI = 1;/* Referenced by: '<S634>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_L_TestFail_ReadOvrd = 0;/* Referenced by: '<S1181>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_L_TestFail_ReadOvrdVal =
    0;                                 /* Referenced by: '<S1182>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_L_TestNotCmplt_ReadOvrd =
    0;                                 /* Referenced by: '<S1183>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_L_TestNotCmplt_ReadOvrdVal = 0;/* Referenced by: '<S1184>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_M1EngOffAllow_ERS1 = 1;/* Referenced by: '<S361>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_M1EngOffAllow_ERS2 = 1;/* Referenced by: '<S364>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_M1EngOffAllow_ERS3 = 1;/* Referenced by: '<S370>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_M1EngOffAllow_ERS4 = 1;/* Referenced by: '<S376>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_M1EngOffAllow_ERS5or6 = 1;/* Referenced by: '<S383>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_M2Allow_ERS2 = 1;/* Referenced by: '<S365>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MRM_StsFAOvrd = 0;/* Referenced by: '<S969>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MRM_StsFAOvrdVal = 0;/* Referenced by: '<S970>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MRM_StsOvrd = 0;/* Referenced by: '<S971>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MRM_Sts_C2_FAOvrd = 0;/* Referenced by: '<S972>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MRM_Sts_C2_FAOvrdVal = 0;/* Referenced by: '<S973>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MRM_Sts_C2_Ovrd = 0;/* Referenced by: '<S974>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ManualModeOvrd = 0;/* Referenced by: '<S1256>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ManualModeOvrdVal = 0;/* Referenced by: '<S1257>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MtrA_6SOEnblOvrd = 0;/* Referenced by: '<S975>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MtrA_InvrtrStOvrd = 0;/* Referenced by: '<S976>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_MtrB_InvrtrStOvrd = 0;/* Referenced by: '<S977>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_NLockDbncOvrd = 1;/* Referenced by: '<S719>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_NLockDsblVehRdyChck = 1;/* Referenced by: '<S296>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_N_TestFail_ReadOvrd = 0;/* Referenced by: '<S1185>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_N_TestFail_ReadOvrdVal =
    0;                                 /* Referenced by: '<S1186>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_N_TestNotCmplt_ReadOvrd =
    0;                                 /* Referenced by: '<S1187>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_N_TestNotCmplt_ReadOvrdVal = 0;/* Referenced by: '<S1188>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_NeutAllwdOvrd = 0;/* Referenced by:
                                                                      * '<S978>/Calib'
                                                                      * '<S1258>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_NeutAllwdOvrdVal = 0;/* Referenced by:
                                                                      * '<S979>/Calib'
                                                                      * '<S1259>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_NeutLk_Drv_Rq = 1;/* Referenced by: '<S195>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_NeutralBTSI_Enbl = 1;/* Referenced by: '<S720>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_OvrdToNEnbl_MtrA_Flt = 0;/* Referenced by: '<S590>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_OvrdToNEnbl_MtrB_Flt = 0;/* Referenced by: '<S591>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PMM_PowerModeOvrd = 0;/* Referenced by: '<S980>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawlFdbckOvrd = 0;/* Referenced by: '<S981>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawlFlt_InhibitMtrOvrd =
    0;                                 /* Referenced by: '<S982>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_PPawlFlt_InhibitMtrOvrdVal = 0;/* Referenced by: '<S983>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawlFlt_UnknownPosOvrd =
    0;                                 /* Referenced by: '<S984>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_PPawlFlt_UnknownPosOvrdVal = 0;/* Referenced by: '<S985>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_PPawlNoResponse_Service_Trans = 0;/* Referenced by: '<S280>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawlRequestOvrd = 1;/* Referenced by: '<S986>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawl_CurrSnsrFltOvrd = 0;/* Referenced by: '<S987>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawl_CurrSnsrFltOvrdVal =
    0;                                 /* Referenced by: '<S988>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawl_PosSnsrFltOvrd = 0;/* Referenced by: '<S989>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawl_PosSnsrFltOvrdVal =
    0;                                 /* Referenced by: '<S990>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawl_TXFltOvrdVal = 0;/* Referenced by: '<S991>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PPawl_TXFlt_Ovrd = 0;/* Referenced by: '<S992>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PRNDFailStsOvrd = 0;/* Referenced by: '<S993>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PRNDFailStsOvrdVal = 0;/* Referenced by: '<S994>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PRNDLTestFlagsOvrd = 0;/* Referenced by: '<S1189>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_P_TestFail_ReadOvrd = 0;/* Referenced by: '<S1190>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_P_TestFail_ReadOvrdVal =
    0;                                 /* Referenced by: '<S1191>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_P_TestNotCmplt_ReadOvrd =
    0;                                 /* Referenced by: '<S1192>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_P_TestNotCmplt_ReadOvrdVal = 0;/* Referenced by: '<S1193>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ParkBTSI_Enbl = 1;/* Referenced by: '<S736>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_ParkingGearShiftReq_BSM_FA_Ovrd = 0;/* Referenced by: '<S995>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_ParkingGearShiftReq_BSM_FA_OvrdVal = 0;/* Referenced by: '<S996>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_ParkingGearShiftReq_BSM_Ovrd = 0;/* Referenced by: '<S997>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PostCodeClrDiagDsblOvrd =
    0;                                 /* Referenced by: '<S998>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_PostCodeClrDiagDsblOvrdVal = 0;/* Referenced by: '<S999>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Prk_Cond = 0;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Prmry_TransShiftPstnOvrd =
    0;                                 /* Referenced by: '<S1170>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PropSysActvOvrd = 0;/* Referenced by: '<S1000>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_PropSysActvOvrdVal = 0;/* Referenced by: '<S1001>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ProxiCADM2Ovrd = 0;/* Referenced by: '<S1002>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ProxiCADM2OvrdVal = 0;/* Referenced by: '<S1003>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ProxiCADMOvrd = 0;/* Referenced by: '<S1004>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ProxiCADMOvrdVal = 0;/* Referenced by: '<S1005>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RFHub_ForceParkEnable = 1;/* Referenced by: '<S661>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RFHub_ForceParkOvrd = 0;/* Referenced by: '<S1006>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RFHub_ForceParkOvrdVal =
    0;                                 /* Referenced by: '<S1007>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_R_TestFail_ReadOvrd = 0;/* Referenced by: '<S1194>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_R_TestFail_ReadOvrdVal =
    0;                                 /* Referenced by: '<S1195>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_R_TestNotCmplt_ReadOvrd =
    0;                                 /* Referenced by: '<S1196>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_R_TestNotCmplt_ReadOvrdVal = 0;/* Referenced by: '<S1197>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RackFltOvrd = 0;/* Referenced by: '<S1008>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RackFltOvrdVal = 0;/* Referenced by: '<S1009>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Reset_Type = 0;/* Referenced by: '<S784>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RevLockEnbl = 1;/* Referenced by: '<S509>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RotaryShifterEquipped = 1;
                           /* Referenced by: '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RotaryShifterEquipped_HMI
    = 1;                               /* Referenced by: '<S220>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_RstNLckwithBrk = 1;/* Referenced by: '<S721>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SCCActvOvrd = 0;/* Referenced by: '<S1010>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SCCActvOvrdVal = 0;/* Referenced by: '<S1011>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SRARDrvAllwdOvrd = 0;/* Referenced by:
                                                                      * '<S1012>/Calib'
                                                                      * '<S1260>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SRARDrvAllwdOvrdVal = 0;/* Referenced by:
                                                                      * '<S1013>/Calib'
                                                                      * '<S1261>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SRARNeutAllwdOvrd = 0;/* Referenced by:
                                                                      * '<S1014>/Calib'
                                                                      * '<S1262>/Calib'
                                                                      */
static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SRARNeutAllwdOvrdVal = 0;/* Referenced by:
                                                                      * '<S1015>/Calib'
                                                                      * '<S1263>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Secure_Idle_Req_FA_Ovrd =
    0;                                 /* Referenced by: '<S1016>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_Secure_Idle_Req_FA_OvrdVal = 0;/* Referenced by: '<S1017>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Secure_Idle_Req_Ovrd = 0;/* Referenced by: '<S1018>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Secure_Idle_Req_OvrdVal =
    0;                                 /* Referenced by: '<S1019>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SelectSpdStsOvrd = 0;/* Referenced by: '<S1020>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SelectSpdSts_FA_Ovrd = 0;/* Referenced by: '<S1021>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SelectSpdSts_FA_OvrdVal =
    0;                                 /* Referenced by: '<S1022>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_SelectSpd_UseERSBtn = 0;/* Referenced by:
                                                                      * '<S810>/Calib'
                                                                      * '<S811>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShftLckFltOvrd = 0;/* Referenced by: '<S1023>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShftLckFltOvrdVal = 0;/* Referenced by: '<S1024>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShftProxi = 0;/* Referenced by:
                                                                      * '<S1025>/Calib'
                                                                      * '<S319>/Calib'
                                                                      * '<S861>/Calib'
                                                                      * '<S538>/Calib'
                                                                      * '<S547>/Calib'
                                                                      * '<S722>/Calib'
                                                                      * '<S737>/Calib'
                                                                      * '<S757>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShftSnsFAOvrd = 0;/* Referenced by: '<S1026>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShftSnsFAOvrdVal = 0;/* Referenced by: '<S1027>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShiftDspFltOvrd = 0;/* Referenced by: '<S1028>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShiftDspFltOvrdVal = 0;/* Referenced by: '<S1029>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShiftLeverFailStsOvrd = 0;/* Referenced by: '<S1030>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShiftLeverFailStsOvrdVal =
    0;                                 /* Referenced by: '<S1031>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ShiftLeverPosReqOvrd = 0;/* Referenced by: '<S1032>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TOSRSpdOvrd = 0;/* Referenced by:
                                                                      * '<S1033>/Calib'
                                                                      * '<S1264>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TXWarn_CarWash_End = 0;/* Referenced by: '<S160>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TXWarn_DAI_Alrt = 1;/* Referenced by: '<S164>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TXWarn_DAI_Inhib = 1;/* Referenced by: '<S171>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TXWarn_Prss_Brk_Repeat =
    1;                                 /* Referenced by: '<S196>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_TXWarn_ReqN_Shift_Not_Allwd = 1;/* Referenced by: '<S212>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TXWarn_Shift_Not_Allwd =
    1;                                 /* Referenced by: '<S213>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TXWarn_Trans_Recover_Mode
    = 0;                               /* Referenced by: '<S203>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Tcase_StatOvrd = 0;/* Referenced by: '<S1034>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_TransShiftPstnOvrd = 0;/* Referenced by: '<S1171>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_UseCANDriverReq = 0;/* Referenced by: '<S497>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_ValidPluginDetectedOvrd =
    0;                                 /* Referenced by: '<S1265>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_ValidPluginDetectedOvrdVal = 0;/* Referenced by: '<S1266>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT)
    KeTRGR_b_ValidPlugin_ForceParkEnable = 1;/* Referenced by: '<S663>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Valid_PluginOvrd = 0;/* Referenced by: '<S1035>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Valid_PluginOvrdVal = 0;/* Referenced by: '<S1036>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_VehicleCountryCodeOvrd =
    0;                                 /* Referenced by: '<S1037>/Calib' */

#endif

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_VehicleSpdOvrd = 0;/* Referenced by:
                                                                      * '<S1038>/Calib'
                                                                      * '<S1267>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WARNWarn4 = 1;/* Referenced by: '<S297>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WEDEquipped = 0;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WEDFAOvrd = 0;/* Referenced by: '<S1086>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WEDFAOvrdVal = 0;/* Referenced by: '<S1087>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WEDLearningOvrd = 0;/* Referenced by: '<S1039>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WEDStatusOvrd = 0;/* Referenced by: '<S1088>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_WEDStatusOvrdVal = 0;/* Referenced by: '<S1089>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Warn13TriggerOvrd = 0;/* Referenced by: '<S257>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Warn2Warn12Stuck_P = 1;/* Referenced by: '<S245>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(boolean, TRGR_VAR_INIT) KeTRGR_b_Warn2Warn12TriggerOvrd =
    1;                                 /* Referenced by: '<S246>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeTRNR_e_TCMGearStat, TRGR_VAR_INIT)
    KeTRGR_e_ActualGearOvrdVal = CeTRNR_e_Neutral;/* Referenced by: '<S1268>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeTRGR_e_AutoPosCorrMd, TRGR_VAR_INIT)
    KeTRGR_e_AutoPosCorrMdOvrdVal = CeTRGR_e_AutoPosCorrMd_Off;/* Referenced by: '<S1040>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeDMIR_e_DrvMdBtnStat, TRGR_VAR_INIT)
    KeTRGR_e_BrakingMdReqOvrdVal = CeDMIR_e_BtnNotPrsd;/* Referenced by: '<S1041>/Calib' */

#endif

static volatile CONST(TeBRKR_e_BrkPdl_Stat, TRGR_VAR_INIT)
    KeTRGR_e_BrkPedalDscrtInptOvrdVal = CeBRKR_e_BrkNotApplied;/* Referenced by:
                                                                * '<S1042>/Calib'
                                                                * '<S1293>/Calib'
                                                                */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeVTLR_e_DschrgSysSts, TRGR_VAR_INIT)
    KeTRGR_e_DschrgSysStsOvrdVal = CeVTLR_e_DschrgInactv;/* Referenced by: '<S1043>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_EPBHoldSts, TRGR_VAR_INIT)
    KeTRGR_e_EPBHoldStsOvrdVal = CePLTR_e_EPBHoldSts_REL;/* Referenced by: '<S1269>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_EPBHoldSts, TRGR_VAR_INIT)
    KeTRGR_e_EPB_HoldStsOvrdVal = CePLTR_e_EPBHoldSts_REL;/* Referenced by: '<S1044>/Calib' */

#endif

static volatile CONST(TeTRGR_e_TransRangeState, TRGR_VAR_INIT)
    KeTRGR_e_ESMTransRngStOvrdVal = CeTRGR_e_NoSelectionAvailable;/* Referenced by:
                                                                   * '<S1045>/Calib'
                                                                   * '<S1270>/Calib'
                                                                   */

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeTRNR_e_TCMGearStat, TRGR_VAR_INIT)
    KeTRGR_e_EvenGearOvrdVal = CeTRNR_e_Neutral;/* Referenced by: '<S1271>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_MRM_Status, TRGR_VAR_INIT)
    KeTRGR_e_MRM_StsOvrdVal = CePLTR_e_Not_Active;/* Referenced by: '<S1046>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_MRM_Status, TRGR_VAR_INIT)
    KeTRGR_e_MRM_Sts_C2_OvrdVal = CePLTR_e_Not_Active;/* Referenced by: '<S1047>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeINVR_e_SixSOStatus, TRGR_VAR_INIT)
    KeTRGR_e_MtrA_6SOEnblOvrdVal = CeINVR_e_ThreePS;/* Referenced by: '<S1048>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeINVR_e_MtrInvrtrSt, TRGR_VAR_INIT)
    KeTRGR_e_MtrA_InvrtrStOvrdVal = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S1049>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeINVR_e_MtrInvrtrSt, TRGR_VAR_INIT)
    KeTRGR_e_MtrB_InvrtrStOvrdVal = CeINVR_e_NormalPowerStageOff;/* Referenced by: '<S1050>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePMDR_e_PowerMode, TRGR_VAR_INIT)
    KeTRGR_e_PMM_PowerModeOvrdVal = CePMDR_e_PowerMode_Off;/* Referenced by: '<S1051>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePPCR_e_PPawl_Fdbck, TRGR_VAR_INIT)
    KeTRGR_e_PPawlFdbckOvrdVal = CePPCR_e_PPAWL_UNKNOWN_Position;/* Referenced by: '<S1052>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePPCR_e_PPawl_Request, TRGR_VAR_INIT)
    KeTRGR_e_PPawlRequestOvrdVal = CePPCR_e_PPAWL_UNKNOWN_Request;/* Referenced by: '<S1053>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_e_PRNDLTestFlagsOvrdVal = 0U;/* Referenced by: '<S1198>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_ParkingGearShiftReq_BSM, TRGR_VAR_INIT)
    KeTRGR_e_ParkingGearShiftReq_BSM_OvrdVal = CePLTR_e_GearShiftReq_Idle;/* Referenced by: '<S1054>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeTRGR_e_TransRangeState, TRGR_VAR_INIT)
    KeTRGR_e_Prmry_TransShiftPstnOvrdVal = CeTRGR_e_NoSelectionAvailable;/* Referenced by: '<S1172>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_SelectSpdSts, TRGR_VAR_INIT)
    KeTRGR_e_SelectSpdStsOvrdVal = CePLTR_e_SelectSpdSts_OFF;/* Referenced by: '<S1055>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeTRGR_e_TransRangeState, TRGR_VAR_INIT)
    KeTRGR_e_ShiftLeverPosReqOvrdVal = CeTRGR_e_NoSelectionAvailable;/* Referenced by: '<S1056>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeFWDR_e_TrnsfrCaseRange, TRGR_VAR_INIT)
    KeTRGR_e_Tcase_StatOvrdVal = CeFWDR_e_ShiftINProg;/* Referenced by: '<S1057>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeTRGR_e_TransRangeState, TRGR_VAR_INIT)
    KeTRGR_e_TransShiftPstnOvrdVal = CeTRGR_e_NoSelectionAvailable;/* Referenced by: '<S1173>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TePLTR_e_VehicleCountryCode, TRGR_VAR_INIT)
    KeTRGR_e_VehicleCountryCodeOvrdVal = CePLTR_e_VCC_OTHERS;/* Referenced by: '<S1058>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(TeRTMR_e_WEDLearningProcedure, TRGR_VAR_INIT)
    KeTRGR_e_WEDLearningOvrdVal = CeRTMR_e_WED_Not_Active;/* Referenced by: '<S1059>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_k_SlopeAngle_FltCoeff =
    0.009F;                            /* Referenced by: '<S1060>/Calib' */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_DefaultTOSRSpd = 200.0F;/* Referenced by:
                                                                      * '<S1061>/Calib'
                                                                      * '<S1272>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_MaxNiSpd = 5000.0F;/* Referenced by:
                                                                      * '<S423>/Calib'
                                                                      * '<S432>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_MaxNoG1ERS = 1000.0F;/* Referenced by:
                                                                      * '<S362>/Calib'
                                                                      * '<S366>/Calib'
                                                                      * '<S371>/Calib'
                                                                      * '<S377>/Calib'
                                                                      * '<S384>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_MaxNoG2ERS = 2400.0F;/* Referenced by:
                                                                      * '<S372>/Calib'
                                                                      * '<S378>/Calib'
                                                                      * '<S385>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_MaxNoM1ERS = 2300.0F;/* Referenced by:
                                                                      * '<S367>/Calib'
                                                                      * '<S373>/Calib'
                                                                      * '<S379>/Calib'
                                                                      * '<S386>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NiDelta4DetectCurrentERS =
    70.0F;                             /* Referenced by: '<S439>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS1EngOff = 300.0F;/* Referenced by: '<S440>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS1EngOn = 400.0F;/* Referenced by: '<S441>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS2EngOff = 500.0F;/* Referenced by: '<S442>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS2EngOn = 825.0F;/* Referenced by: '<S443>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS3EngOff = 1300.0F;/* Referenced by: '<S444>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS3EngOn = 1300.0F;/* Referenced by: '<S445>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS4EngOff = 1600.0F;/* Referenced by: '<S446>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS4EngOn = 1600.0F;/* Referenced by: '<S447>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS5EngOff = 2000.0F;/* Referenced by: '<S448>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_NoERS5EngOn = 2000.0F;/* Referenced by: '<S449>/Calib' */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_TOSRSpdOvrdVal = 0.0F;/* Referenced by:
                                                                      * '<S1062>/Calib'
                                                                      * '<S1273>/Calib'
                                                                      */
static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_n_TOSR_Spd_ParkThreshold =
    158.4F;                            /* Referenced by:
                                        * '<S84>/Calib'
                                        * '<S115>/Calib'
                                        * '<S689>/ValidatedPRND_StateFlow'
                                        * '<S1326>/Calib'
                                        * '<S606>/Calib'
                                        * '<S569>/Calib'
                                        * '<S581>/Calib'
                                        */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_phi_EstSlopeAngleOvrdVal =
    0.0F;                              /* Referenced by: '<S1063>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_phi_SlopeTh_ForEPB = 7.0F;/* Referenced by: '<S862>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_r_ERS1_GearRatio =
    3.69230771F;                       /* Referenced by: '<S458>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_r_ERS2_GearRatio = 2.7F;/* Referenced by: '<S459>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_r_ERS3_GearRatio =
    1.70474684F;                       /* Referenced by: '<S460>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_r_ERS4_GearRatio = 1.35F;/* Referenced by: '<S461>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_r_ERS5_GearRatio = 1.0F;/* Referenced by: '<S462>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_Blink_PosSnsrFlt = 0.05F;/* Referenced by: '<S85>/Calib' */

#endif

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_t_BrakeAppliedDbnc = 6U;/* Referenced by:
                                                                      * '<S1080>/Calib'
                                                                      * '<S1294>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_BrakingMdBlinkingDly =
    5.0F;                              /* Referenced by: '<S487>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_t_BrkRlsDbnc = 24U;/* Referenced by:
                                                                      * '<S723>/Calib'
                                                                      * '<S738>/Calib'
                                                                      * '<S750>/Calib'
                                                                      */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_BrkWarnDbnc = 0.1F;/* Referenced by: '<S1340>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_CarWash_RstTmr = 900.0F;/* Referenced by: '<S116>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_CarWash_WarnTmr = 880.0F;/* Referenced by: '<S117>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT)
    KeTRGR_t_Cncl_AutoPark_NeutAllwd_Tmr = 40U;/* Referenced by: '<S645>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_DrvAwy_Alrt_Tmr = 5.0F;/* Referenced by: '<S165>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_EPBActiveDbnc = 0.1F;/* Referenced by: '<S274>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT)
    KeTRGR_t_EPBActiveDbnc_AutoApplyMsg = 1.0F;/* Referenced by: '<S154>/Calib' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_EPBFltDbnc = 0.5F;/* Referenced by: '<S1332>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_ESMReqDbnc = 0.1F;/* Referenced by: '<S320>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_IPTestTmr = 0.5F;
                            /* Referenced by: '<S1134>/InPlantTest_Stateflow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_IP_CAN_DrvrReqDbnc =
    0.03F;                             /* Referenced by: '<S1174>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_InitTmrTh = 3.0F;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_LowModeDeactivated_Dly =
    5.0F;                              /* Referenced by: '<S177>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_NeutLockTmrTh = 0.1F;/* Referenced by: '<S522>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_ON_APCMTmrThrshld =
    180.0F;                /* Referenced by: '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_OvrdToParkDbnc = 0.05F;/* Referenced by: '<S607>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_PPawlNotRespDbnc = 0.5F;/* Referenced by: '<S863>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint16, TRGR_VAR_INIT) KeTRGR_t_PSA_DlyTmr = 8U;/* Referenced by: '<S118>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_Pending_APCMTmrThrshld =
    0.5F;                  /* Referenced by: '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_RevLockTmrTh = 0.05F;/* Referenced by: '<S523>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_ShftrLockComplete = 0.0F;/* Referenced by: '<S524>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_TXWarn2Warn12Dbnc = 0.05F;/* Referenced by: '<S247>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_TXWarn2Warn13Dbnc = 0.05F;/* Referenced by: '<S258>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT)
    KeTRGR_t_TXWarn_Press_Brk_Repeat_Dly = 1.0F;/* Referenced by: '<S197>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT)
    KeTRGR_t_TXWarn_Shift_Not_Allwd_Dly = 1.0F;/* Referenced by: '<S214>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_VehSecuredDbnc = 0.1F;/* Referenced by: '<S891>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_WARN2Warn10_OffDly = 4.0F;/* Referenced by: '<S225>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_WARN2Warn11_OffDly = 4.0F;/* Referenced by: '<S234>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_WARN2Warn14_OffDly = 4.0F;/* Referenced by: '<S265>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_WARN2Warn9_OffDly = 4.0F;/* Referenced by: '<S285>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_WEDEngageTmrTh = 2.0F;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_t_dT = 0.025F;/* Referenced by:
                                                                    * '<S20>/TRGC_PRND_AutoCorrection'
                                                                    * '<S86>/Calib'
                                                                    * '<S119>/Calib'
                                                                    * '<S321>/Calib'
                                                                    * '<S689>/ValidatedPRND_StateFlow'
                                                                    * '<S864>/Calib'
                                                                    * '<S892>/Calib'
                                                                    * '<S1134>/InPlantTest_Stateflow'
                                                                    * '<S1341>/Calib'
                                                                    * '<S155>/Calib'
                                                                    * '<S166>/Calib'
                                                                    * '<S178>/Calib'
                                                                    * '<S198>/Calib'
                                                                    * '<S215>/Calib'
                                                                    * '<S226>/Calib'
                                                                    * '<S235>/Calib'
                                                                    * '<S248>/Calib'
                                                                    * '<S259>/Calib'
                                                                    * '<S266>/Calib'
                                                                    * '<S275>/Calib'
                                                                    * '<S286>/Calib'
                                                                    * '<S488>/Calib'
                                                                    * '<S525>/Calib'
                                                                    * '<S608>/Calib'
                                                                    * '<S1175>/Calib'
                                                                    * '<S1333>/Calib'
                                                                    */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_AutoParkResetSpd = 8.0F;/* Referenced by: '<S635>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_BrakingModeSpdThrshld =
    40.0F;                             /* Referenced by:
                                        * '<S27>/Engine_Braking_Management'
                                        * '<S485>/Calib'
                                        * '<S489>/Calib'
                                        */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_DefaultVehSpd = 8.0F;/* Referenced by:
                                                                      * '<S1064>/Calib'
                                                                      * '<S1274>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_DrivingThreshold = 5.0F;/* Referenced by:
                                                                      * '<S227>/Calib'
                                                                      * '<S236>/Calib'
                                                                      * '<S267>/Calib'
                                                                      * '<S558>/Calib'
                                                                      * '<S561>/Calib'
                                                                      * '<S564>/Calib'
                                                                      * '<S584>/Calib'
                                                                      */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_EPB_SpdThreshold = 3.0F;/* Referenced by:
                                                                      * '<S865>/Calib'
                                                                      * '<S1315>/Calib'
                                                                      * '<S1327>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_NeutLockSpdTh = 1.0F;/* Referenced by: '<S526>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_ParkThreshold = 1.0F;/* Referenced by:
                                                                      * '<S866>/Calib'
                                                                      * '<S52>/Calib'
                                                                      * '<S287>/Calib'
                                                                      * '<S302>/Calib'
                                                                      */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_RevLockSpdTh = 1.0F;/* Referenced by: '<S510>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_Spd_ParkThreshold = 3.0F;
                           /* Referenced by: '<S689>/ValidatedPRND_StateFlow' */

#endif

static volatile CONST(float32, TRGR_VAR_INIT) KeTRGR_v_VehicleSpdOvrdVal = 0.0F;/* Referenced by:
                                                                      * '<S1065>/Calib'
                                                                      * '<S1275>/Calib'
                                                                      */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint8, TRGR_VAR_INIT) KeTRGR_y_FobSearchResultOvrdVal = 0U;/* Referenced by: '<S1066>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(sint16, TRGR_VAR_INIT) KeTRGR_y_GatedParkSWFltOvrdVal = 0;/* Referenced by: '<S1067>/Calib' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static volatile CONST(uint8, TRGR_VAR_INIT) KeTRGR_y_UnexpRstCal = 0U;/* Referenced by: '<S785>/Calib' */

#endif

#define STOP_SEC_CALIB_UNSPECIFIED_TRGR
#include "MemMap.h"
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRGR
#include "MemMap.h"

/* Definition for custom storage class: FCALocalSignal */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_APCMFlt;/* '<S35>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_AutoApplyEPB;/* '<S126>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_AutoCorrectEnbl;/* '<S40>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_AutoCorrectP;/* '<S688>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_AutoCorrectionFlt;/* '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BlinkEnblCondition;/* '<S21>/Logical4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BlinkRstCondition;/* '<S21>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrakingModeActive;/* '<S478>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrakingModeFaulted;/* '<S480>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkPrss_PRNDChng_N;/* '<S703>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkPrss_PRNDChng_P;/* '<S704>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkRlsDbnc_N;/* '<S726>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkRlsDbnc_P;/* '<S741>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkRlsDbnc_R;/* '<S705>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkngMdNotAvailable;/* '<S479>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_BrkngMdNotAvailableDly;/* '<S490>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_CADM_AutoparkReq;
                               /* '<S613>/SigConvForSigProp_Variant_Source_0' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_CarWash_EngReq;/* '<S120>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_DriveReq_HighSpd;/* '<S548>/Logical6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_DrvrRqDbnc;/* '<S25>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Dsbl_to_P;/* '<S23>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_DsrdERSDspl;/* '<S387>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBApplied;/* '<S843>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBFdbck;/* '<S868>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReq;/* '<S845>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReqAtPark;/* '<S33>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReqAtRND;/* '<S33>/Logical28' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReqAtSlope;/* '<S33>/Logical11' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReqLtch;/* '<S867>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReqWEDOpnFltd;/* '<S33>/Logical30' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReqWEDOpnFltdDbnc;/* '<S874>/AND' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBReq_MSG;/* '<S1306>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBRequested_BP;/* '<S869>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBRst;/* '<S33>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBSts_Appld;/* '<S883>/Logical14' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPBSts_Fltd;/* '<S883>/Logical1' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EPB_NF;/* '<S1317>/Logical11' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ERS1Avail;/* '<S414>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ERS2Available;/* '<S414>/Comparison3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ERS3Available;/* '<S414>/Comparison5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ERS4Available;/* '<S414>/Comparison7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ERS5Available;/* '<S414>/Comparison9' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EnblAutoApplyEPBTmr;/* '<S156>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_EnblNLockTmr;/* '<S499>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Flt_ShiftingOutOfP;/* '<S21>/Logical15' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Flt_ShiftingOutOfPLtch;/* '<S87>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Flt_ShiftingOutOfP_Rst;/* '<S21>/Logical17' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ForcePN_RND;/* '<S1307>/Logical16' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_HCP_Reset;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_IgnoreBrkKeyOff_LockN;/* '<S499>/Logical4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_IgnoreBrk_KeyOffAcc;/* '<S500>/Switch' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Intermed_ForcePN;/* '<S1307>/Logical22' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LOC_D;/* '<S322>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LOC_N;/* '<S322>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LOC_P;/* '<S322>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LOC_R;/* '<S322>/Switch3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LowMdDeactived_HMI;/* '<S179>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LowMdFaulted_HMI;/* '<S131>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_LowMdNotAvail_HMI;/* '<S132>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_NToD_HighSpd;/* '<S549>/Logical11' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_NToR_HighSpd;/* '<S550>/Logical10' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_NeuDrvAllwd;/* '<S500>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_NoBRakeWhileShiftR;/* '<S498>/Logical18' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdRq;/* '<S540>/Logical14' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToNeutral_IP;/* '<S540>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToP_CADM_Rq;/* '<S613>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToP_ESS;/* '<S615>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToP_Immobilizer;/* '<S614>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToP_NeutAllwdLost;/* '<S612>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToP_RFHub_ForcePark;/* '<S616>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToP_Valid_Plugin;/* '<S617>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToPark;/* '<S541>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_OvrdToParkDbnc;/* '<S541>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PPawlFlt_Ovrd;/* '<S552>/Logical6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PPawlFlt_OvrdToN;/* '<S552>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PRNDChng_WithBrk_N;/* '<S717>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PRNDChng_WithBrk_P;/* '<S704>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PRNDL_D6;/* '<S389>/Comparison5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PSA_Lost;/* '<S618>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ParkReq_DsblDrvAllwd;/* '<S21>/Logical11' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ParkReq_HighSpd;/* '<S551>/Logical4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ParkReq_PPawlStck;/* '<S552>/Logical9' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ParkWithSpd;/* '<S33>/Comparison15' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ParkWithSpdDbnc;/* '<S872>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ParkWithSpd_ApplyEPB;/* '<S33>/Logical16' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_PosSnsrFltTrigLtch;/* '<S88>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_RNDLReq_DsblDrvAllwd;/* '<S21>/Logical13' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_RNgSt_WithLOC;/* '<S21>/Comparison5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_RejectRq;/* '<S540>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_RevReq_HighSpd;/* '<S553>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_RstNLockTmr;/* '<S499>/Logical6' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Secured_To_Shtdwn;/* '<S1307>/Comparison9' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_SelectSpeedModeActive;/* '<S32>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShftrLockP;/* '<S500>/Logical25' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShftrRBlockInterrupted;/* '<S139>/Logical9' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShftrTrickedOutofLock;/* '<S139>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShftrTrickedOutofN;/* '<S139>/Logical6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShftrTrickedOutofP;/* '<S139>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShiftLockN;/* '<S499>/Logical12' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShiftLockP_IgnoreBrk;/* '<S500>/Logical14' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShiftLockP_SNA;/* '<S500>/Logical23' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShiftLock_P;/* '<S500>/Logical8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Shift_to_P_Gear;/* '<S139>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_ShifterLocked;/* '<S28>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_SpdWthnPThrsh;/* '<S541>/Comparison6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_SpeedLimited;/* '<S352>/Merge2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Sts_Chng_N;/* '<S703>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_Sts_Chng_P;/* '<S704>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn10;/* '<S137>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn11;/* '<S138>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn12;/* '<S139>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn13;/* '<S140>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn14;/* '<S141>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn22;/* '<S142>/Logical1' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn22_MSG;/* '<S1308>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn23;/* '<S143>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn2_Warn9;/* '<S144>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_CarWash_End;/* '<S127>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_DrvAwy_Alrt;/* '<S128>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_DrvAwy_Inhib;/* '<S129>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Press_Brk_Repeat;/* '<S133>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Press_Brk_Repeat1;/* '<S133>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Press_Brk_Repeat2;/* '<S133>/Logical6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Press_Brk_Repeat_Arb;/* '<S133>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Press_Brk_Repeat_P;/* '<S133>/Logical4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Press_Brk_Repeat_R;/* '<S133>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Shift_Not_Allwd;/* '<S135>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Shift_Not_Allwd1;/* '<S135>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Shift_Not_Allwd2;/* '<S135>/Logical6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Shift_Not_Allwd_Arb;/* '<S135>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Trans_Recover_Mode;/* '<S134>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Warn12;/* '<S145>/Comparison6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Warn4;/* '<S146>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Warn5;/* '<S147>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TXWarn_Warn6;/* '<S148>/Logical2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TapDown;/* '<S389>/Comparison7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_TapDownNext;/* '<S389>/AND3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_VehNotRdy_HighSpd;/* '<S555>/Logical1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_VehNotRdy_HighSpd_Ltch;/* '<S555>/SignalConversion' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_VehNotRdy_HighSpd_Reset;/* '<S555>/Logical7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_VehNotRdy_NeutAllwd;/* '<S555>/Logical12' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_VehNotRdy_NeutAllwd_Ltch;/* '<S555>/SignalConversion1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_VehReady;/* '<S688>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_b_WEDOpenFltd_Blink;/* '<S21>/Logical10' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_PRNDBlinkRq, TRGR_VAR_INIT) VeTRGC_e_AC_PRNDLBlink;/* '<S38>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_ArbPRNDRequest;/* '<S688>/Merge' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_AutoPosCorrMd, TRGR_VAR_INIT) VeTRGC_e_AutoPosCorrMdReq;/* '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_PRNDBlinkRq, TRGR_VAR_INIT) VeTRGC_e_BlinkDrvrRq;/* '<S103>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_CrntTrnsRngSt;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_DrvReqRaw_WithSNA;/* '<S25>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_DrvrRq;/* '<S315>/Switch1' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_EPBReq, TRGR_VAR_INIT) VeTRGC_e_EPB_Hold_Req;/* '<S1306>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_PPawlCmnd, TRGR_VAR_INIT) VeTRGC_e_PPawlCmnd;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_PRNDBlinkRq, TRGR_VAR_INIT) VeTRGC_e_PRNDLBlink_AC;/* '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_PRNDStat;/* '<S316>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_RawVldtdTransRngSt;/* '<S794>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_RngSt_WithLOC_D;/* '<S21>/Switch1' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(sint16, TRGR_VAR_INIT) VeTRGC_e_ShftRngSt_AEMD;/* '<S1309>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_TransRngSt_Crnt;/* '<S778>/DataTypeConversion' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGC_e_VldtdTransRngSt;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT)
    VeTRGC_e_VldtdTransRngStDsply;     /* '<S26>/Merge3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT)
    VeTRGC_e_VldtdTransRngStateERS;    /* '<S26>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_k_DbgIf;/* '<S352>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_APCMTimer;/* '<S39>/Gain' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_APCMTmr;/* '<S20>/TRGC_PRND_AutoCorrection' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_BlinkCal_Time;/* '<S21>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_t_CarWash_SetWarn;/* '<S122>/GreaterThan1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGC_t_CarWash_Tmout;/* '<S122>/GreaterThan2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_CarWash_Tmr;/* '<S122>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_EnblAutoApplyEPBTmr;/* '<S157>/MinMax' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_EnblNLockTmr;/* '<S527>/MinMax' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_InitTmr;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_PPawlTmr;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_PRNDLBlinkTmr;/* '<S90>/MinMax' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGC_t_WEDEngageTmr;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGI_P_RawBrkPrss;/* '<S15>/Switch9' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGI_P_RawBrkPrss_MSG;/* '<S1276>/Switch25' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_AccelSts;/* '<S15>/Switch32' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrakeAppliedVer;/* '<S1072>/Switch1' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrakeAppliedVer_MSG;/* '<S1280>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrakeFA;/* '<S1068>/Switch27' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrakeFA_MSG;/* '<S1276>/Switch27' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrakePdlDscrtInptFA;/* '<S15>/Switch34' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrakePedalFA;/* '<S1276>/Switch19' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrkApplied;/* '<S1068>/Switch4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrkAppliedDbnc;/* '<S1081>/AND' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrkAppliedDbnc_MSG;/* '<S1295>/AND' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_BrkApplied_MSG;/* '<S1276>/Switch4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_CntrlPwrHld;/* '<S15>/Switch13' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_DAI_Enbl;/* '<S15>/Switch5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_DecelSts;/* '<S15>/Switch36' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_DrvAllwd;/* '<S15>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_DrvAllwdTPChck;/* '<S15>/Switch57' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ESSRqShftPark;/* '<S15>/Switch27' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_EnblNeutral;/* '<S1221>/Logical' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_EngineOff;/* '<S15>/Switch28' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_FobSearchResult_FA;/* '<S15>/Switch72' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_H2_Refuel_Sts;/* '<S15>/Switch58' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_HoodOpen;/* '<S15>/Switch61' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ImmoParkReq;/* '<S15>/Switch6' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ManualMd_In;/* '<S1235>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_NeutAllwd;/* '<S15>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PPawlFlt_InhibitMtr;/* '<S15>/Switch20' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PPawlFlt_UnknownPos;/* '<S15>/Switch18' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PPawlPosSnsrFlt;/* '<S15>/Switch3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PPawl_CurrSnsrFlt;/* '<S15>/Switch22' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PPawl_TXFlt;/* '<S15>/Switch21' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PRNDFailStatus;/* '<S15>/Switch53' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ParkingGearShiftReq_BSM_FA;/* '<S15>/Switch60' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_PropSysActv;/* '<S15>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ProxiCADM;/* '<S15>/Switch68' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ProxiCADM2;/* '<S15>/Switch69' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_RFHub_ForcePark;/* '<S15>/Switch45' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_RackFlt;/* '<S15>/Switch47' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_RawBrkPrssFA;/* '<S15>/Switch35' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_RawBrkPrssFA_MSG;/* '<S1276>/Switch26' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ResetDiag;/* '<S15>/Logical12' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_SCC_Actv;/* '<S15>/Switch54' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_Secure_Idle_Req;/* '<S15>/Switch64' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_Secure_Idle_Req_FA;/* '<S15>/Switch73' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_SelectSpdSts_FA;/* '<S15>/Switch39' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ShftLckFlt;/* '<S15>/Switch46' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ShftSensFA;/* '<S15>/Switch41' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ShiftDispFault;/* '<S15>/Switch49' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ShiftDispFlt;/* '<S15>/Switch42' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ShiftFailStatus;/* '<S15>/Switch52' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_ShiftSnsFault;/* '<S15>/Switch48' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_Valid_Plugin;/* '<S15>/Switch37' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_Valid_Plugin_MSG;/* '<S1221>/Switch3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_WEDFA;/* '<S1069>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_WEDNotClosed;/* '<S1069>/Switch36' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGI_b_WEDOpenFaulted;/* '<S1069>/Logical2' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRNR_e_TCMGearStat, TRGR_VAR_INIT) VeTRGI_e_ActualGear;/* '<S1221>/Switch7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_AutoPosCorrMd, TRGR_VAR_INIT) VeTRGI_e_AutoPosCorrMd;/* '<S15>/Switch44' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeDMIR_e_DrvMdBtnStat, TRGR_VAR_INIT) VeTRGI_e_BrakingMdReq;/* '<S15>/Switch62' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeBRKR_e_BrkPdl_Stat, TRGR_VAR_INIT) VeTRGI_e_BrkPdlDscrtInpt;/* '<S15>/Switch33' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeVTLR_e_DschrgSysSts, TRGR_VAR_INIT) VeTRGI_e_DschrgSysSts;/* '<S15>/Switch66' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_EPBHoldSts, TRGR_VAR_INIT) VeTRGI_e_EPBHldSts;/* '<S1221>/Switch6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_EPBHoldSts, TRGR_VAR_INIT) VeTRGI_e_EPB_HoldSts;/* '<S15>/Switch17' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGI_e_ESMRangeSt;/* '<S15>/Switch43' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGI_e_ESMValidatePstn;/* '<S1221>/Switch1' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGI_e_ESMValidatePstn_In;/* '<S1221>/Switch10' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRNR_e_TCMGearStat, TRGR_VAR_INIT) VeTRGI_e_EvenGear;/* '<S1221>/Switch8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_MRM_Status, TRGR_VAR_INIT) VeTRGI_e_MRM_Sts;/* '<S925>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_MRM_Status, TRGR_VAR_INIT) VeTRGI_e_MRM_Sts_C2;/* '<S924>/Switch1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeINVR_e_SixSOStatus, TRGR_VAR_INIT) VeTRGI_e_MtrA_6SOEnbl;/* '<S15>/Switch10' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeINVR_e_MtrInvrtrSt, TRGR_VAR_INIT) VeTRGI_e_MtrA_InvrtrSt;/* '<S15>/Switch12' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeINVR_e_MtrInvrtrSt, TRGR_VAR_INIT) VeTRGI_e_MtrB_InvrtrSt;/* '<S15>/Switch7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePMDR_e_PowerMode, TRGR_VAR_INIT) VeTRGI_e_PMM_PowerMode;/* '<S15>/Switch8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePPCR_e_PPawl_Fdbck, TRGR_VAR_INIT) VeTRGI_e_PPawlFdbck;/* '<S15>/Switch2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePPCR_e_PPawl_Request, TRGR_VAR_INIT) VeTRGI_e_PPawlReq;/* '<S15>/Switch11' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_ParkingGearShiftReq_BSM, TRGR_VAR_INIT)
    VeTRGI_e_ParkingGearShiftReq_BSM;  /* '<S15>/Switch59' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_SelectSpdSts, TRGR_VAR_INIT) VeTRGI_e_SelectSpdSts;/* '<S15>/Switch38' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGI_e_ShiftLeverReq;/* '<S15>/Switch51' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeFWDR_e_TrnsfrCaseRange, TRGR_VAR_INIT) VeTRGI_e_Tcase_Stat;/* '<S15>/Switch63' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_TransRangeState, TRGR_VAR_INIT) VeTRGI_e_TransDirctnSt;/* '<S1236>/DataTypeConversion' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(sint16, TRGR_VAR_INIT) VeTRGI_e_TransShiftLeverPstn;/* '<S1221>/Selector' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TePLTR_e_VehicleCountryCode, TRGR_VAR_INIT)
    VeTRGI_e_VehicleCountryCode;       /* '<S15>/Switch16' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeRTMR_e_WEDLearningProcedure, TRGR_VAR_INIT)
    VeTRGI_e_WEDLearningProcedure;     /* '<S15>/Switch67' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGI_n_CSVR_rpm;/* '<S1221>/Switch31' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGI_n_TOSRSpeed;/* '<S15>/Switch31' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGI_phi_EstSlopeAngleFilt;/* '<S15>/Abs1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGI_v_VehicleSpdmph;/* '<S15>/Product' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(uint8, TRGR_VAR_INIT) VeTRGI_y_FobSearchResult;/* '<S15>/Switch65' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_AutoP_PSA;/* '<S611>/Logical14' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_AutoParkLatch;/* '<S637>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_AutoParkLatchEnbl;/* '<S611>/UnitDelay1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_AutoPark_Trig;/* '<S611>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_D_TestFailWrite;/* '<S1110>/Merge1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_D_TestFail_Read;/* '<S1111>/Comparison7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_D_TestNotCmpltWrite;/* '<S1110>/Merge' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_D_TestNotCmplt_Read;/* '<S1111>/Comparison6' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_DrvAllwd;/* '<S1221>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_DrvrReq_IP;/* '<S1137>/Logical11' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_DrvrReq_IP_NotRationalised;/* '<S1137>/Comparison3' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_Force_P_N;/* '<S1328>/OR1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPHoldSt;/* '<S1143>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPMode;/* '<S1137>/Switch16' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPMode_CondSet;/* '<S1137>/Switch63' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPTmr_D;/* '<S1144>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPTmr_L;/* '<S1141>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPTmr_N;/* '<S1142>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPTmr_P;/* '<S1139>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_IPTmr_R;/* '<S1140>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_Init_IPTest;/* '<S1138>/AND' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_L_TestFailWrite;/* '<S1110>/Merge8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_L_TestFail_Read;/* '<S1111>/Comparison9' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_L_TestNotCmpltWrite;/* '<S1110>/Merge9' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_L_TestNotCmplt_Read;/* '<S1111>/Comparison8' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_N_TestFailWrite;/* '<S1110>/Merge3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_N_TestFail_Read;/* '<S1111>/Comparison5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_N_TestNotCmpltWrite;/* '<S1110>/Merge2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_N_TestNotCmplt_Read;/* '<S1111>/Comparison4' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_NeutAllwd;/* '<S1221>/Logical5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_NeutAllwd_IP;/* '<S1137>/Logical3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_PPawlNoResponse;/* '<S33>/Logical23' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_PPawlNotDisEng;/* '<S33>/Comparison21' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_PPawlNotEng;/* '<S33>/Comparison19' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_P_TestFailWrite;/* '<S1110>/Merge5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_P_TestFail_Read;/* '<S1111>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_P_TestNotCmpltWrite;/* '<S1110>/Merge4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_P_TestNotCmplt_Read;/* '<S1111>/Comparison' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_R_TestFailWrite;/* '<S1110>/Merge7' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_R_TestFail_Read;/* '<S1111>/Comparison3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_R_TestNotCmpltWrite;/* '<S1110>/Merge6' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_R_TestNotCmplt_Read;/* '<S1111>/Comparison2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(boolean, TRGR_VAR_INIT) VeTRGR_b_Volt_InRng;/* '<S1137>/Comparison1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(sint16, TRGR_VAR_INIT) VeTRGR_e_DsrdOldERS;/* '<S352>/delay1' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(TeTRGR_e_PRNDDbgSt, TRGR_VAR_INIT) VeTRGR_e_PRND_St;/* '<S689>/ValidatedPRND_StateFlow' */

#endif

static VAR(uint32, TRGR_VAR_INIT) VeTRGR_g_ClusterWarnings_DS;/* '<Root>/DSM_1' */

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_n_ERS1Ni;/* '<S414>/Product' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_n_ERS2Ni;/* '<S414>/Product2' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_n_ERS3Ni;/* '<S414>/Product3' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_n_ERS4Ni;/* '<S414>/Product4' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_n_ERS5Ni;/* '<S414>/Product5' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_t_CAN_DrvrReqDbnc;/* '<S1176>/MinMax' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_t_IPTimer;/* '<S1148>/Gain' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_t_IPTmr;/* '<S1134>/InPlantTest_Stateflow' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_t_PPawlDisEngCounter;/* '<S871>/Switch' */

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_t_PPawlEngCounter;/* '<S870>/Switch' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

static VAR(float32, TRGR_VAR_INIT) VeTRGR_v_VehicleSpdmph;/* '<S1221>/Product' */

#endif

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRGR
#include "MemMap.h"

/* Invariant block signals (default storage) */
#define START_SEC_CONST_UNSPECIFIED_TRGR
#include "MemMap.h"

CONST(ConstB_TRGR_ac_T, TRGR_VAR_INIT) TRGR_ac_ConstB =
{

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value3' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value4' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value5' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value6' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value7' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value8' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    1,                                 /* '<S1222>/Constant Value9' */

#define CONSTB_TRGR_AC_T_VARIANT_EXISTS
#endif

    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const1' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const5' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const13' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const26' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const28' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const48' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const58' */
    CeTRGR_e_NoSelectionAvailable,     /* '<S6>/Const60' */

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    CeTRGR_e_TransRangePark,           /* '<S1241>/DataTypeConversion' */

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    CeTRGR_e_TransRangeNeutral,        /* '<S1242>/DataTypeConversion' */

#endif

    CeTRGR_e_TXFlt_OK,                 /* '<S6>/Const8' */
    CeTRGR_e_SecureIdleHMI_Default,    /* '<S6>/Const65' */
    CeTRGR_e_ReverseSts_Not_Inserted,  /* '<S6>/Const43' */
    CeTRGR_e_PRNDDbgSt1,               /* '<S6>/Const11' */
    CeTRGR_e_PRNDBlinkNone,            /* '<S6>/Const9' */
    CeTRGR_e_PPawlIdle,                /* '<S6>/Const12' */
    CeTRGR_e_EPBReq_NA,                /* '<S6>/Const18' */
    CeTRGR_e_BrakingMode_Not_Active,   /* '<S6>/Const62' */
    CeTRGR_e_IndSts_OFF,               /* '<S6>/Const63' */
    CeTRGR_e_AutoPosCorrMd_Off         /* '<S6>/Const10' */
};

#define STOP_SEC_CONST_UNSPECIFIED_TRGR
#include "MemMap.h"

/* Block signals (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRGR
#include "MemMap.h"

VAR(B_TRGR_ac_T, TRGR_VAR_INIT) TRGR_ac_B;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRGR
#include "MemMap.h"

/* Block states (default storage) */
#define START_SEC_VAR_CLEARED_UNSPECIFIED_TRGR
#include "MemMap.h"

VAR(DW_TRGR_ac_T, TRGR_VAR_INIT) TRGR_ac_DW;

#define STOP_SEC_VAR_CLEARED_UNSPECIFIED_TRGR
#include "MemMap.h"
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_PwrDwnSts_EEPROM(VAR(uint8, AUTOMATIC)
    rtu_VeTRGR_e_PwrDwnStat, P2VAR(B_PwrDwnSts_EEPROM_TRGR_ac_T, AUTOMATIC,
    TRGR_VAR_INIT) localB, P2VAR(uint8, AUTOMATIC, TRGR_VAR_INIT)
    rtd_AeTRGR_y_PwrDwnSts);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_TRGC_CanMapping(void);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_T_Rtrg_R_Enbl_Mdfd(void);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_TRGC_CarWashEnbl(void);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_TRGR_IPConditions(void);

#endif

/* Forward declaration for local functions */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Drive_DisEngage(const boolean *AND_fm);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_HoldState(const boolean *Comparison2);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Neutral_DisEngage(const boolean *AND_fm);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Park_Engage(const boolean *AND_fm);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Park_Init_Engage(void);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Reverse_DisEngage(const boolean *AND_fm);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_enter_atomic_NOT_IP_Test(const boolean *Switch16, const
    boolean *Switch1, const boolean *Switch3, const boolean *Switch2, const
    boolean *Switch5);

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_IPHold_State(const boolean *AND_f, const boolean *Switch16,
    const boolean *Switch1, const boolean *Switch3, const boolean *Switch2,
    const boolean *Switch5);

#endif

/* Output and update for atomic system: '<S14>/TRGC_CanMapping' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_TRGC_CanMapping(void)
{
    /* Outport: '<Root>/VeTRGR_e_VldtdTransShiftRngSt' incorporates:
     *  Constant: '<S107>/Calib'
     *  DataTypeConversion: '<S104>/DataTypeConversion'
     *  DataTypeConversion: '<S106>/DataTypeConversion'
     *  Merge: '<S26>/Merge1'
     *  Selector: '<S104>/Selector'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransShiftRngSt_Value
        ((TeTRGR_e_TransRangeState)KaTRGR_e_ShftDisp
         [(VeTRGC_e_VldtdTransRngStateERS)]);

    /* Outport: '<Root>/VeTRGR_e_VldtdTransShiftDisp' incorporates:
     *  Constant: '<S108>/Calib'
     *  DataTypeConversion: '<S105>/DataTypeConversion'
     *  Merge: '<S26>/Merge3'
     *  Selector: '<S105>/Selector'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransShiftDisp_Value(KaTRGR_e_ShftDisp
        [(VeTRGC_e_VldtdTransRngStDsply)]);
}

#endif

/* Output and update for atomic system: '<S23>/T_Rtrg_R_Enbl_Mdfd' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_T_Rtrg_R_Enbl_Mdfd(void)
{
    /* Switch: '<S122>/Switch1' incorporates:
     *  Switch: '<S122>/Switch2'
     */
    if (TRGR_ac_B.AND_no)
    {
        /* Switch: '<S122>/Switch1' incorporates:
         *  Constant: '<S122>/ConstantValue1'
         */
        VeTRGC_t_CarWash_Tmr = 0.0F;
    }
    else
    {
        if (TRGR_ac_B.UnitDelay4)
        {
            /* Switch: '<S122>/Switch1' incorporates:
             *  Constant: '<S116>/Calib'
             *  Constant: '<S119>/Calib'
             *  MinMax: '<S122>/Maximum'
             *  Sum: '<S122>/Subtraction'
             *  Switch: '<S122>/Switch2'
             *  UnitDelay: '<S122>/UnitDelay'
             */
            VeTRGC_t_CarWash_Tmr = fminf(KeTRGR_t_dT + VeTRGC_t_CarWash_Tmr,
                KeTRGR_t_CarWash_RstTmr);
        }
    }

    /* End of Switch: '<S122>/Switch1' */

    /* RelationalOperator: '<S122>/GreaterThan1' incorporates:
     *  Constant: '<S117>/Calib'
     */
    VeTRGC_t_CarWash_SetWarn = (VeTRGC_t_CarWash_Tmr >= KeTRGR_t_CarWash_WarnTmr);

    /* RelationalOperator: '<S122>/GreaterThan2' incorporates:
     *  Constant: '<S116>/Calib'
     */
    VeTRGC_t_CarWash_Tmout = (VeTRGC_t_CarWash_Tmr >= KeTRGR_t_CarWash_RstTmr);
}

#endif

/* Output and update for atomic system: '<S14>/TRGC_CarWashEnbl' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_TRGC_CarWashEnbl(void)
{
    boolean rtb_UnitDelay_hj;

    /* UnitDelay: '<S23>/UnitDelay4' */
    TRGR_ac_B.UnitDelay4 = VeTRGC_b_CarWash_EngReq;

    /* Logic: '<S23>/Logical6' */
    TRGR_ac_B.AND_no = !TRGR_ac_B.UnitDelay4;

    /* Outputs for Atomic SubSystem: '<S23>/T_Rtrg_R_Enbl_Mdfd' */
    TRGR_ac_T_Rtrg_R_Enbl_Mdfd();

    /* End of Outputs for SubSystem: '<S23>/T_Rtrg_R_Enbl_Mdfd' */

    /* Outputs for Atomic SubSystem: '<S23>/SignalLatchOnWithReset2' */
    /* Logic: '<S121>/OR1' incorporates:
     *  Constant: '<S111>/Constant'
     *  Logic: '<S121>/NOT'
     *  Logic: '<S121>/OR'
     *  RelationalOperator: '<S23>/Comparison1'
     *  UnitDelay: '<S121>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_os = ((VeTRGC_t_CarWash_Tmout) || ((((uint32)
        VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangePark) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_os)));

    /* End of Outputs for SubSystem: '<S23>/SignalLatchOnWithReset2' */

    /* Logic: '<S23>/Logical1' incorporates:
     *  Constant: '<S114>/Calib'
     */
    VeTRGC_b_Dsbl_to_P = ((TRGR_ac_DW.UnitDelay_DSTATE_os) &&
                          (KeTRGR_b_CarWash_EnblP));

    /* Outputs for Atomic SubSystem: '<S23>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S123>/EdgeFalling1' */
    /* UnitDelay: '<S120>/Unit Delay' incorporates:
     *  UnitDelay: '<S124>/Unit Delay'
     */
    rtb_UnitDelay_hj = TRGR_ac_DW.UnitDelay_DSTATE_bm;

    /* Update for UnitDelay: '<S124>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_bm = VeTRGI_b_PropSysActv;

    /* Switch: '<S123>/Switch' incorporates:
     *  Logic: '<S124>/AND'
     *  Logic: '<S124>/OR1'
     *  MinMax: '<S123>/Minimum1'
     *  UnitDelay: '<S123>/UnitDelay'
     */
    if ((!VeTRGI_b_PropSysActv) && rtb_UnitDelay_hj)
    {
        /* MinMax: '<S123>/Minimum1' incorporates:
         *  Constant: '<S118>/Calib'
         *  Switch: '<S123>/Switch'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_o3 = KeTRGR_t_PSA_DlyTmr;
    }
    else
    {
        if (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_o3) <= 1)
        {
            /* MinMax: '<S123>/Minimum1' */
            TRGR_ac_DW.UnitDelay_DSTATE_o3 = 1U;
        }

        /* MinMax: '<S123>/Minimum1' incorporates:
         *  Constant: '<S123>/ConstantValue'
         *  Sum: '<S123>/Summation'
         *  Switch: '<S123>/Switch'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_o3 = (uint16)((sint32)(((sint32)
            TRGR_ac_DW.UnitDelay_DSTATE_o3) - 1));
    }

    /* End of Switch: '<S123>/Switch' */
    /* End of Outputs for SubSystem: '<S123>/EdgeFalling1' */

    /* Outputs for Atomic SubSystem: '<S23>/SignalLatchOnWithReset' */
    /* Logic: '<S120>/OR1' incorporates:
     *  Abs: '<S23>/Abs1'
     *  Constant: '<S109>/Constant'
     *  Constant: '<S110>/Constant'
     *  Constant: '<S112>/Constant'
     *  Constant: '<S113>/Calib'
     *  Constant: '<S115>/Calib'
     *  Constant: '<S123>/ConstantValue2'
     *  Logic: '<S120>/NOT'
     *  Logic: '<S120>/OR'
     *  Logic: '<S123>/AND'
     *  Logic: '<S23>/Logical3'
     *  Logic: '<S23>/Logical7'
     *  RelationalOperator: '<S123>/GreaterThan'
     *  RelationalOperator: '<S23>/Comparison2'
     *  RelationalOperator: '<S23>/Comparison3'
     *  RelationalOperator: '<S23>/Comparison5'
     *  RelationalOperator: '<S23>/Comparison6'
     *  Switch: '<S15>/Switch8'
     *  Switch: '<S315>/Switch1'
     *  UnitDelay: '<S120>/Unit Delay'
     */
    VeTRGC_b_CarWash_EngReq = ((((((VeTRGI_b_EngineOff) && (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral)) &&
        ((VeTRGI_b_PropSysActv) || (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_o3) > 0)))
        && (fabsf(VeTRGI_n_TOSRSpeed) < KeTRGR_n_TOSR_Spd_ParkThreshold)) &&
        (KeTRGR_b_CarWash_Enbl)) || ((((!TRGR_ac_DW.UnitDelay_DSTATE_os) &&
        (((uint32)VeTRGC_e_DrvrRq) != CeTRGR_e_TransRangePark)) && (((uint32)
        VeTRGI_e_PMM_PowerMode) != CePMDR_e_PowerMode_Crank)) &&
        (VeTRGC_b_CarWash_EngReq)));

    /* End of Outputs for SubSystem: '<S23>/SignalLatchOnWithReset' */
    /* End of Outputs for SubSystem: '<S23>/TurnOffDelaySampleModified' */
}

#endif

/* Output and update for function-call system: '<S689>/PwrDwnSts_EEPROM' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_PwrDwnSts_EEPROM(VAR(uint8, AUTOMATIC)
    rtu_VeTRGR_e_PwrDwnStat, P2VAR(B_PwrDwnSts_EEPROM_TRGR_ac_T, AUTOMATIC,
    TRGR_VAR_INIT) localB, P2VAR(uint8, AUTOMATIC, TRGR_VAR_INIT)
    rtd_AeTRGR_y_PwrDwnSts)
{
    /* Inport: '<S786>/VeTRGR_e_PwrDwnStat' */
    localB->VeTRGR_e_PwrDwnStat = rtu_VeTRGR_e_PwrDwnStat;

    /* DataStoreWrite: '<S786>/AeTRGR_y_PwrDwnSts' */
    *rtd_AeTRGR_y_PwrDwnSts = localB->VeTRGR_e_PwrDwnStat;
}

#endif

/* Output and update for atomic system: '<S1110>/TRGR_IPConditions' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static FUNC(void, TRGR_CODE_LOCAL) TRGR_ac_TRGR_IPConditions(void)
{
    float32 tmpRead;
    TeTRGR_e_TransRangeState tmp;
    TeTRGR_e_TransRangeState tmp_0;
    boolean tmpRead_0;

    /* Switch: '<S1137>/Switch16' incorporates:
     *  Constant: '<S1168>/Calib'
     *  Inport: '<Root>/VePLTR_b_InFieldMode'
     */
    if (KeTRGR_b_IPModeOvrd)
    {
        /* Switch: '<S1137>/Switch16' incorporates:
         *  Constant: '<S1169>/Calib'
         */
        VeTRGR_b_IPMode = KeTRGR_b_IPModeOvrdVal;
    }
    else
    {
        (void)Rte_Read_VePLTR_b_InFieldMode_Value(&tmpRead_0);

        /* Switch: '<S1137>/Switch16' incorporates:
         *  Inport: '<Root>/VePLTR_b_InFieldMode'
         *  Logic: '<S1137>/Logical7'
         */
        VeTRGR_b_IPMode = !tmpRead_0;
    }

    /* End of Switch: '<S1137>/Switch16' */

    /* Inport: '<Root>/VeGENR_U_IBS_BattVoltOut' */
    (void)Rte_Read_VeGENR_U_IBS_BattVoltOut_Value(&tmpRead);

    /* Switch: '<S1137>/Switch21' incorporates:
     *  Constant: '<S1163>/Calib'
     *  Constant: '<S1165>/Calib'
     */
    if (KeTRGR_b_IBS_BattVoltOutOvrd)
    {
        tmpRead = KeTRGR_U_IBS_BattVoltOutOvrdVal;
    }

    /* End of Switch: '<S1137>/Switch21' */

    /* RelationalOperator: '<S1137>/Comparison1' incorporates:
     *  Constant: '<S1164>/Calib'
     */
    VeTRGR_b_Volt_InRng = (tmpRead >= KeTRGR_U_IP_IBS_BattVoltOut);

    /* Logic: '<S1137>/Logical3' incorporates:
     *  Logic: '<S1137>/Logical4'
     *  Logic: '<S1137>/Logical8'
     *  Logic: '<S1137>/Logical9'
     */
    VeTRGR_b_NeutAllwd_IP = ((VeTRGI_b_NeutAllwd) && ((!VeTRGI_b_DrvAllwd) &&
        (!VeTRGI_b_PropSysActv)));

    /* Switch: '<S1137>/Switch20' incorporates:
     *  Constant: '<S1170>/Calib'
     *  Constant: '<S1172>/Calib'
     *  DataTypeConversion: '<S911>/DataTypeConversion'
     */
    if (KeTRGR_b_Prmry_TransShiftPstnOvrd)
    {
        tmp = KeTRGR_e_Prmry_TransShiftPstnOvrdVal;
    }
    else
    {
        tmp = TRGR_ac_B.DataTypeConversion_i;
    }

    /* End of Switch: '<S1137>/Switch20' */

    /* Switch: '<S1137>/Switch1' incorporates:
     *  Constant: '<S1171>/Calib'
     *  Constant: '<S1173>/Calib'
     *  DataTypeConversion: '<S912>/DataTypeConversion'
     */
    if (KeTRGR_b_TransShiftPstnOvrd)
    {
        tmp_0 = KeTRGR_e_TransShiftPstnOvrdVal;
    }
    else
    {
        tmp_0 = TRGR_ac_B.DataTypeConversion_df;
    }

    /* End of Switch: '<S1137>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1137>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S1176>/Switch2' incorporates:
     *  Logic: '<S1137>/Logical10'
     *  RelationalOperator: '<S1137>/Comparison2'
     *  Switch: '<S1176>/Switch1'
     */
    if (tmp == tmp_0)
    {
        /* Switch: '<S1176>/Switch1' incorporates:
         *  Constant: '<S1176>/Constant Value2'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_j = 0.0F;
    }
    else
    {
        /* Switch: '<S1176>/Switch1' incorporates:
         *  Constant: '<S1175>/Calib'
         *  Sum: '<S1176>/Subtraction'
         *  Switch: '<S1176>/Switch2'
         *  UnitDelay: '<S1176>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_j += KeTRGR_t_dT;
    }

    /* End of Switch: '<S1176>/Switch2' */

    /* Switch: '<S1176>/Switch' incorporates:
     *  Constant: '<S1176>/Constant Value3'
     *  RelationalOperator: '<S1176>/Comparison1'
     */
    if (TRGR_ac_DW.UnitDelay_DSTATE_j >= 5.0F)
    {
        /* Switch: '<S1176>/Switch' incorporates:
         *  UnitDelay: '<S1176>/Unit Delay1'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_j = TRGR_ac_DW.UnitDelay1_DSTATE_c;
    }

    /* End of Switch: '<S1176>/Switch' */

    /* MinMax: '<S1176>/MinMax' incorporates:
     *  Constant: '<S1174>/Calib'
     */
    VeTRGR_t_CAN_DrvrReqDbnc = fminf(TRGR_ac_DW.UnitDelay_DSTATE_j,
        KeTRGR_t_IP_CAN_DrvrReqDbnc);

    /* Update for UnitDelay: '<S1176>/Unit Delay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_c = TRGR_ac_DW.UnitDelay_DSTATE_j;

    /* End of Outputs for SubSystem: '<S1137>/Stop_Watch_Reset_Enabled' */

    /* RelationalOperator: '<S1137>/Comparison3' incorporates:
     *  Constant: '<S1174>/Calib'
     */
    VeTRGR_b_DrvrReq_IP_NotRationalised = (VeTRGR_t_CAN_DrvrReqDbnc >=
        KeTRGR_t_IP_CAN_DrvrReqDbnc);

    /* Logic: '<S1137>/Logical11' */
    VeTRGR_b_DrvrReq_IP = !VeTRGR_b_DrvrReq_IP_NotRationalised;

    /* Switch: '<S1137>/Switch63' incorporates:
     *  Constant: '<S1166>/Calib'
     */
    if (KeTRGR_b_IPModeConditionsSetOvrd)
    {
        /* Switch: '<S1137>/Switch63' incorporates:
         *  Constant: '<S1167>/Calib'
         */
        VeTRGR_b_IPMode_CondSet = KeTRGR_b_IPModeConditionsSetOvrdVal;
    }
    else
    {
        /* Switch: '<S1137>/Switch63' incorporates:
         *  Constant: '<S1162>/Constant'
         *  Logic: '<S1137>/Logical'
         *  Logic: '<S1137>/Logical1'
         *  Logic: '<S1137>/Logical2'
         *  RelationalOperator: '<S1137>/Comparison5'
         *  Switch: '<S15>/Switch17'
         */
        VeTRGR_b_IPMode_CondSet = ((((((VeTRGR_b_IPMode) && (VeTRGR_b_Volt_InRng))
            && (VeTRGR_b_NeutAllwd_IP)) && ((TRGR_ac_B.VeTRGR_b_BrkApplied) && (
            !TRGR_ac_B.VeTRGR_b_BrakeFA))) && (VeTRGR_b_DrvrReq_IP)) &&
            (((uint32)VeTRGI_e_EPB_HoldSts) == CePLTR_e_EPBHoldSts_APPLIED));
    }

    /* End of Switch: '<S1137>/Switch63' */

    /* Logic: '<S1159>/AND' */
    TRGR_ac_B.AND_i = VeTRGR_b_IPMode_CondSet;

    /* Logic: '<S1137>/Logical5' */
    TRGR_ac_B.Logical5 = !VeTRGR_b_NeutAllwd_IP;

    /* Logic: '<S1137>/Logical6' */
    TRGR_ac_B.Logical6 = !VeTRGR_b_Volt_InRng;
}

#endif

/* Function for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Drive_DisEngage(const boolean *AND_fm)
{
    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt11;

    /* During 'Drive_DisEngage': '<S788>:29' */
    if (((((uint32)VeTRGC_e_CrntTrnsRngSt) != CeTRGR_e_TransRangePark) &&
            (KeTRGR_b_EnblTransitionInDisengaged)) || ((((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED) || (((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_ZeroRefLrnComplete)))
    {
        /* Transition: '<S788>:410' */
        /* Transition: '<S788>:411' */
        /* Transition: '<S788>:35' */
        /* Transition: '<S788>:36' */
        /* Exit 'Drive_DisEngage': '<S788>:29' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Drive_Confirm;

        /* Entry 'Drive_Confirm': '<S788>:37' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt12;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeDrive;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeDrive;
    }
    else if (((((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse) || (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangeNeutral)) ||
             (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
              CeTRGR_e_TransRangePark))
    {
        /* Transition: '<S788>:42' */
        /* Transition: '<S788>:46' */
        /* Transition: '<S788>:47' */
        /* Exit 'Drive_DisEngage': '<S788>:29' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

        /* Entry 'HoldState': '<S788>:4' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
    }
    else if ((((VeTRGI_b_PPawlFlt_InhibitMtr) && (((uint32)VeTRGI_e_PPawlFdbck) ==
                CePPCR_e_PPAWL_UNKNOWN_Position)) ||
              (VeTRGI_b_PPawlFlt_UnknownPos)) || (*AND_fm))
    {
        /* Transition: '<S788>:303' */
        /* Transition: '<S788>:285' */
        /* Exit 'Drive_DisEngage': '<S788>:29' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

        /* Entry 'Unknown_Position': '<S788>:270' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
    }
    else
    {
        VeTRGC_t_PPawlTmr = VeTRGC_t_PPawlTmr + KeTRGR_t_dT;
    }
}

#endif

/* Function for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_HoldState(const boolean *Comparison2)
{
    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;

    /* During 'HoldState': '<S788>:4' */
    if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangePark) &&
            (*Comparison2)) && (KeTRGR_b_EnableWEDLearningProcedure))
    {
        /* Transition: '<S788>:428' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_WEDLearningProcedureActive;

        /* Entry 'WEDLearningProcedureActive': '<S788>:427' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt28;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeDrive) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangePark)) || (((((uint32)VeTRGC_e_VldtdTransRngSt)
                == CeTRGR_e_ParkToDrive) && (((uint32)VeTRGC_e_PPawlCmnd) ==
                CeTRGR_e_PPawlDisEngage)) && (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangePark)))
    {
        /* Transition: '<S788>:19' */
        /* Transition: '<S788>:154' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_DriveToPark;

        /* Entry 'DriveToPark': '<S788>:153' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt3;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_DriveToPark;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeDrive) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_NeutralToDrive) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral)))
    {
        /* Transition: '<S788>:51' */
        /* Transition: '<S788>:202' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_DriveToNeutral;

        /* Entry 'DriveToNeutral': '<S788>:194' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt18;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_DriveToNeutral;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangePark) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeDrive)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_DriveToPark) && (((uint32)
                 VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlEngage)) && (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangeDrive)))
    {
        /* Transition: '<S788>:31' */
        /* Transition: '<S788>:183' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_ParkToDrive;

        /* Entry 'ParkToDrive': '<S788>:175' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt8;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_ParkToDrive;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeDrive) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_ReverseToDrive) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse)))
    {
        /* Transition: '<S788>:77' */
        /* Transition: '<S788>:218' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_DriveToReverse;

        /* Entry 'DriveToReverse': '<S788>:209' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt13;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_DriveToReverse;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeReverse) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangePark)) || (((((uint32)VeTRGC_e_VldtdTransRngSt)
                == CeTRGR_e_ParkToReverse) && (((uint32)VeTRGC_e_PPawlCmnd) ==
                CeTRGR_e_PPawlDisEngage)) && (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangePark)))
    {
        /* Transition: '<S788>:159' */
        /* Transition: '<S788>:160' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_ReverseToPark;

        /* Entry 'ReverseToPark': '<S788>:156' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt4;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_ReverseToPark;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeNeutral) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangePark)) || (((((uint32)VeTRGC_e_VldtdTransRngSt)
                == CeTRGR_e_ParkToNeutral) && (((uint32)VeTRGC_e_PPawlCmnd) ==
                CeTRGR_e_PPawlDisEngage)) && (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangePark)))
    {
        /* Transition: '<S788>:163' */
        /* Transition: '<S788>:164' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_NeutralToPark;

        /* Entry 'NeutralToPark': '<S788>:161' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt5;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_NeutralToPark;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeReverse) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeDrive)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_DriveToReverse) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeDrive)))
    {
        /* Transition: '<S788>:185' */
        /* Transition: '<S788>:186' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_ReverseToDrive;

        /* Entry 'ReverseToDrive': '<S788>:176' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt9;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_ReverseToDrive;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeNeutral) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeDrive)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_DriveToNeutral) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeDrive)))
    {
        /* Transition: '<S788>:188' */
        /* Transition: '<S788>:189' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_NeutralToDrive;

        /* Entry 'NeutralToDrive': '<S788>:177' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt10;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_NeutralToDrive;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeReverse) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_NeutralToReverse) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral)))
    {
        /* Transition: '<S788>:204' */
        /* Transition: '<S788>:205' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_ReverseToNeutral;

        /* Entry 'ReverseToNeutral': '<S788>:195' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt19;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_ReverseToNeutral;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangePark) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_NeutralToPark) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral)))
    {
        /* Transition: '<S788>:207' */
        /* Transition: '<S788>:208' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_ParkToNeutral;

        /* Entry 'ParkToNeutral': '<S788>:196' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt20;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_ParkToNeutral;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangePark) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_ReverseToPark) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse)))
    {
        /* Transition: '<S788>:220' */
        /* Transition: '<S788>:221' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_ParkToReverse;

        /* Entry 'ParkToReverse': '<S788>:210' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt14;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_ParkToReverse;
    }
    else if (((((uint32)VeTRGC_e_CrntTrnsRngSt) == CeTRGR_e_TransRangeNeutral) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse)) || (((((uint32)
                 VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_ReverseToNeutral) &&
               (((uint32)VeTRGC_e_PPawlCmnd) == CeTRGR_e_PPawlDisEngage)) &&
              (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse)))
    {
        /* Transition: '<S788>:223' */
        /* Transition: '<S788>:224' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_NeutralToReverse;

        /* Entry 'NeutralToReverse': '<S788>:211' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt15;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_NeutralToReverse;
    }
    else if ((VeTRGI_b_PPawlFlt_UnknownPos) && (KeTRGR_b_EnblSNAInHoldState))
    {
        /* Transition: '<S788>:351' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

        /* Entry 'Unknown_Position': '<S788>:270' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
    }
    else
    {
        if (TRGR_ac_DW.UnitDelay3_DSTATE)
        {
            /* Transition: '<S788>:381' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position_1;

            /* Entry 'Unknown_Position_1': '<S788>:378' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt26;
            VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
            VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
        }
    }
}

#endif

/* Function for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Neutral_DisEngage(const boolean *AND_fm)
{
    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt21;

    /* During 'Neutral_DisEngage': '<S788>:48' */
    if (((((uint32)VeTRGC_e_CrntTrnsRngSt) != CeTRGR_e_TransRangePark) &&
            (KeTRGR_b_EnblTransitionInDisengaged)) || ((((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED) || (((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_ZeroRefLrnComplete)))
    {
        /* Transition: '<S788>:417' */
        /* Transition: '<S788>:418' */
        /* Transition: '<S788>:57' */
        /* Transition: '<S788>:58' */
        /* Exit 'Neutral_DisEngage': '<S788>:48' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_Confirm;

        /* Entry 'Neutral_Confirm': '<S788>:59' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt22;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeNeutral;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeNeutral;
    }
    else if (((((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse) || (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangePark)) ||
             (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
              CeTRGR_e_TransRangeDrive))
    {
        /* Transition: '<S788>:65' */
        /* Transition: '<S788>:69' */
        /* Transition: '<S788>:70' */
        /* Exit 'Neutral_DisEngage': '<S788>:48' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

        /* Entry 'HoldState': '<S788>:4' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
    }
    else if ((((VeTRGI_b_PPawlFlt_InhibitMtr) && (((uint32)VeTRGI_e_PPawlFdbck) ==
                CePPCR_e_PPAWL_UNKNOWN_Position)) ||
              (VeTRGI_b_PPawlFlt_UnknownPos)) || (*AND_fm))
    {
        /* Transition: '<S788>:317' */
        /* Transition: '<S788>:318' */
        /* Transition: '<S788>:281' */
        /* Transition: '<S788>:314' */
        /* Exit 'Neutral_DisEngage': '<S788>:48' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

        /* Entry 'Unknown_Position': '<S788>:270' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
    }
    else
    {
        VeTRGC_t_PPawlTmr = VeTRGC_t_PPawlTmr + KeTRGR_t_dT;
    }
}

#endif

/* Function for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Park_Engage(const boolean *AND_fm)
{
    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt6;

    /* During 'Park_Engage': '<S788>:7' */
    if ((((KeTRGR_b_Prk_Cond) && ((((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_ENGAGED) || (((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_InitSegTwoComplete))) && (VeTRGI_v_VehicleSpdmph ==
            0.0F)) || ((!KeTRGR_b_Prk_Cond) && ((((uint32)VeTRGI_e_PPawlFdbck) ==
           CePPCR_e_PPAWL_ENGAGED) || (((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_InitSegTwoComplete))))
    {
        /* Transition: '<S788>:16' */
        /* Transition: '<S788>:403' */
        /* Transition: '<S788>:17' */
        /* Exit 'Park_Engage': '<S788>:7' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Confirm;

        /* Entry 'Park_Confirm': '<S788>:13' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt7;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangePark;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangePark;
    }
    else if (((((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeReverse) || (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangeNeutral)) ||
             (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
              CeTRGR_e_TransRangeDrive))
    {
        /* Transition: '<S788>:23' */
        /* Transition: '<S788>:27' */
        /* Transition: '<S788>:174' */
        /* Exit 'Park_Engage': '<S788>:7' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

        /* Entry 'HoldState': '<S788>:4' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
    }
    else if ((((VeTRGI_b_PPawlFlt_InhibitMtr) && (((uint32)VeTRGI_e_PPawlFdbck) ==
                CePPCR_e_PPAWL_UNKNOWN_Position)) ||
              (VeTRGI_b_PPawlFlt_UnknownPos)) || (*AND_fm))
    {
        /* Transition: '<S788>:328' */
        /* Transition: '<S788>:306' */
        /* Transition: '<S788>:310' */
        /* Transition: '<S788>:304' */
        /* Transition: '<S788>:285' */
        /* Exit 'Park_Engage': '<S788>:7' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

        /* Entry 'Unknown_Position': '<S788>:270' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
    }
    else
    {
        VeTRGC_t_PPawlTmr = VeTRGC_t_PPawlTmr + KeTRGR_t_dT;
    }
}

#endif

/* Function for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Park_Init_Engage(void)
{
    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt24;

    /* During 'Park_Init_Engage': '<S788>:322' */
    if ((((KeTRGR_b_Prk_Cond) && ((((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_ENGAGED) || (((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_InitSegTwoComplete))) && (VeTRGI_v_VehicleSpdmph ==
            0.0F)) || ((!KeTRGR_b_Prk_Cond) && ((((uint32)VeTRGI_e_PPawlFdbck) ==
           CePPCR_e_PPAWL_ENGAGED) || (((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_InitSegTwoComplete))))
    {
        /* Transition: '<S788>:324' */
        /* Transition: '<S788>:402' */
        /* Transition: '<S788>:17' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Confirm;

        /* Entry 'Park_Confirm': '<S788>:13' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt7;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangePark;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangePark;
    }
    else if (((VeTRGI_b_PPawlFlt_InhibitMtr) && (((uint32)VeTRGI_e_PPawlFdbck) ==
               CePPCR_e_PPAWL_UNKNOWN_Position)) ||
             (VeTRGI_b_PPawlFlt_UnknownPos))
    {
        /* Transition: '<S788>:327' */
        /* Transition: '<S788>:306' */
        /* Transition: '<S788>:310' */
        /* Transition: '<S788>:304' */
        /* Transition: '<S788>:285' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

        /* Entry 'Unknown_Position': '<S788>:270' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
    }
    else
    {
        if ((((uint32)VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED) ||
                (((uint32)VeTRGI_e_PPawlFdbck) ==
                 CePPCR_e_PPAWL_ZeroRefLrnComplete))
        {
            /* Transition: '<S788>:332' */
            /* Transition: '<S788>:334' */
            /* Transition: '<S788>:338' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_Confirm;

            /* Entry 'Neutral_Confirm': '<S788>:59' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt22;
            VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeNeutral;
            VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeNeutral;
        }
    }
}

#endif

/* Function for Chart: '<S689>/ValidatedPRND_StateFlow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_Reverse_DisEngage(const boolean *AND_fm)
{
    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt16;

    /* During 'Reverse_DisEngage': '<S788>:75' */
    if (((((uint32)VeTRGC_e_CrntTrnsRngSt) != CeTRGR_e_TransRangePark) &&
            (KeTRGR_b_EnblTransitionInDisengaged)) || ((((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED) || (((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_ZeroRefLrnComplete)))
    {
        /* Transition: '<S788>:413' */
        /* Transition: '<S788>:414' */
        /* Transition: '<S788>:81' */
        /* Transition: '<S788>:82' */
        /* Exit 'Reverse_DisEngage': '<S788>:75' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Reverse_Confirm;

        /* Entry 'Reverse_Confirm': '<S788>:86' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt17;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeReverse;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeReverse;
    }
    else if (((((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
               CeTRGR_e_TransRangeNeutral) || (((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_mk) == CeTRGR_e_TransRangePark)) ||
             (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_mk) ==
              CeTRGR_e_TransRangeDrive))
    {
        /* Transition: '<S788>:94' */
        /* Transition: '<S788>:101' */
        /* Transition: '<S788>:102' */
        /* Exit 'Reverse_DisEngage': '<S788>:75' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

        /* Entry 'HoldState': '<S788>:4' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
    }
    else if ((((VeTRGI_b_PPawlFlt_InhibitMtr) && (((uint32)VeTRGI_e_PPawlFdbck) ==
                CePPCR_e_PPAWL_UNKNOWN_Position)) ||
              (VeTRGI_b_PPawlFlt_UnknownPos)) || (*AND_fm))
    {
        /* Transition: '<S788>:313' */
        /* Transition: '<S788>:314' */
        /* Exit 'Reverse_DisEngage': '<S788>:75' */
        VeTRGC_t_PPawlTmr = 0.0F;
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

        /* Entry 'Unknown_Position': '<S788>:270' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
        VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;
        VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
    }
    else
    {
        VeTRGC_t_PPawlTmr = VeTRGC_t_PPawlTmr + KeTRGR_t_dT;
    }
}

#endif

/* Function for Chart: '<S1134>/InPlantTest_Stateflow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_enter_atomic_NOT_IP_Test(const boolean *Switch16, const
    boolean *Switch1, const boolean *Switch3, const boolean *Switch2, const
    boolean *Switch5)
{
    /* Entry 'NOT_IP_Test': '<S1147>:623' */
    TRGR_ac_B.Init_IPTest = true;
    TRGR_ac_B.P_TestNotCmplt_Write = *Switch5;
    TRGR_ac_B.P_TestFail_Write = TRGR_ac_B.Switch4;
    TRGR_ac_B.R_TestNotCmplt_Write = TRGR_ac_B.Switch7;
    TRGR_ac_B.R_TestFail_Write = TRGR_ac_B.Switch6;
    TRGR_ac_B.N_TestNotCmplt_Write = *Switch3;
    TRGR_ac_B.N_TestFail_Write = *Switch2;
    TRGR_ac_B.D_TestNotCmplt_Write = *Switch16;
    TRGR_ac_B.D_TestFail_Write = *Switch1;
    TRGR_ac_B.L_TestNotCmplt_Write = TRGR_ac_B.Switch9;
    TRGR_ac_B.L_TestFail_Write = TRGR_ac_B.Switch8;
}

#endif

/* Function for Chart: '<S1134>/InPlantTest_Stateflow' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

static void TRGR_ac_IPHold_State(const boolean *AND_f, const boolean *Switch16,
    const boolean *Switch1, const boolean *Switch3, const boolean *Switch2,
    const boolean *Switch5)
{
    /* During 'IPHold_State': '<S1147>:662' */
    if (((((uint32)TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangePark) &&
         (*Switch5)) && (TRGR_ac_B.Switch4))
    {
        /* Transition: '<S1147>:693' */
        /* Exit 'IPHold_State': '<S1147>:662' */
        TRGR_ac_B.IP_HoldSt = false;
        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_Park_Test;

        /* Entry Internal 'Park_Test': '<S1147>:677' */
        /* Transition: '<S1147>:730' */
        TRGR_ac_DW.is_Park_Test = TRGR_ac_IN_WaitMode_P;

        /* Entry 'WaitMode_P': '<S1147>:688' */
        TRGR_ac_B.IPTmr_P = true;
        VeTRGR_t_IPTmr = 0.0F;
    }
    else if (*AND_f)
    {
        /* Transition: '<S1147>:695' */
        /* Exit 'IPHold_State': '<S1147>:662' */
        TRGR_ac_B.IP_HoldSt = false;
        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_NOT_IP_Test;
        TRGR_ac_enter_atomic_NOT_IP_Test(Switch16, Switch1, Switch3, Switch2,
            Switch5);
    }
    else if (((((uint32)TRGR_ac_B.DataTypeConversion_e) ==
               CeTRGR_e_TransRangeReverse) && (TRGR_ac_B.Switch7)) &&
             (TRGR_ac_B.Switch6))
    {
        /* Transition: '<S1147>:698' */
        /* Exit 'IPHold_State': '<S1147>:662' */
        TRGR_ac_B.IP_HoldSt = false;
        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_Reverse_Test;

        /* Entry Internal 'Reverse_Test': '<S1147>:663' */
        /* Transition: '<S1147>:732' */
        TRGR_ac_DW.is_Reverse_Test = TRGR_ac_IN_WaitMode_R;

        /* Entry 'WaitMode_R': '<S1147>:674' */
        TRGR_ac_B.IPTmr_R = true;
        VeTRGR_t_IPTmr = 0.0F;
    }
    else if (((((uint32)TRGR_ac_B.DataTypeConversion_e) ==
               CeTRGR_e_TransRangeNeutral) && (*Switch3)) && (*Switch2))
    {
        /* Transition: '<S1147>:716' */
        /* Exit 'IPHold_State': '<S1147>:662' */
        TRGR_ac_B.IP_HoldSt = false;
        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_Neutral_Test;

        /* Entry Internal 'Neutral_Test': '<S1147>:701' */
        /* Transition: '<S1147>:735' */
        TRGR_ac_DW.is_Neutral_Test = TRGR_ac_IN_WaitMode_N;

        /* Entry 'WaitMode_N': '<S1147>:712' */
        TRGR_ac_B.IPTmr_N = true;
        VeTRGR_t_IPTmr = 0.0F;
    }
    else if (((((uint32)TRGR_ac_B.DataTypeConversion_e) ==
               CeTRGR_e_TransRangeDrive) && (*Switch16)) && (*Switch1))
    {
        /* Transition: '<S1147>:641' */
        /* Exit 'IPHold_State': '<S1147>:662' */
        TRGR_ac_B.IP_HoldSt = false;
        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_Drive_Test;

        /* Entry Internal 'Drive_Test': '<S1147>:626' */
        /* Transition: '<S1147>:737' */
        TRGR_ac_DW.is_Drive_Test = TRGR_ac_IN_WaitMode_D;

        /* Entry 'WaitMode_D': '<S1147>:637' */
        TRGR_ac_B.IPTmr_D = true;
        VeTRGR_t_IPTmr = 0.0F;
    }
    else
    {
        if (((((uint32)TRGR_ac_B.DataTypeConversion_e) ==
                CeTRGR_e_TransRangeDrive1) && (TRGR_ac_B.Switch9)) &&
                (TRGR_ac_B.Switch8))
        {
            /* Transition: '<S1147>:659' */
            /* Exit 'IPHold_State': '<S1147>:662' */
            TRGR_ac_B.IP_HoldSt = false;
            TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_Low_Test;

            /* Entry Internal 'Low_Test': '<S1147>:644' */
            /* Transition: '<S1147>:740' */
            TRGR_ac_DW.is_Low_Test = TRGR_ac_IN_WaitMode_L;

            /* Entry 'WaitMode_L': '<S1147>:655' */
            TRGR_ac_B.IPTmr_L = true;
            VeTRGR_t_IPTmr = 0.0F;
        }
    }
}

#endif

/* Model step function for TID1 */
FUNC(void, TRGR_CODE) TRGR_MedTED(void) /* Explicit Task: MedTED */
{

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean aVarTruthTableCondition_2;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean aVarTruthTableCondition_1;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeTRGR_e_ERS_SW tmpRead;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeESSR_e_EngStartStopSt tmpRead_0;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TePLTR_e_Towing_MD_RQ tmpRead_1;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    float32 tmpRead_2;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean tmpRead_3;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeADAR_e_ActuationStatus tmpRead_4;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeADAR_e_ActuationStatus tmpRead_5;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeADIR_e_WEDFailureSts tmpRead_6;

#endif

#if !Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeTRGR_e_TransRangeState tmpRead_7;

#endif

    boolean rtb_Logical1_hh;

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Logical2_or;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Comparison18_p;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    uint8 rtb_DataStoreRead1;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    float32 rtb_Switch_d3;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Logical3_gp;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Logical6_dg;

#endif

    float32 rtb_TmpSignalConversionAtVeBRKR_P_BrkPrs;
    boolean rtb_TmpSignalConversionAtVeBRKR_b_BrkPed;
    boolean rtb_TmpSignalConversionAtVeBRKR_b_BrkPrs;

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_AND_nj;

#endif

    boolean rtb_TmpSignalConversionAtVeOBCR_b_ValidP;
    boolean rtb_TmpSignalConversionAtVeSRAR_b_DrvAll;
    boolean rtb_TmpSignalConversionAtVeSRAR_b_NeutAl;
    boolean rtb_TmpSignalConversionAtVeSSDR_b_DrvAll;
    boolean rtb_TmpSignalConversionAtVeSSDR_b_NeutAl;

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_AND_g5;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_AND12;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Comparison11_oj;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    float32 rtb_MinMax1;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    float32 rtb_Subtraction2;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_AND_c5;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Logical2_j0;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_Logical5_gi;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_OR1_ct;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean rtb_AND_p1;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    uint16 rtb_Switch10_h;

#endif

    float32 rtb_TmpSignalConversionAtVeCSVR_n_TransO;
    float32 rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    sint16 rtb_Switch_hg;
    TeBRKR_e_BrkPdl_Stat rtb_TmpSignalConversionAtVeBRKR_e_BrkPed;
    TePLTR_e_EPBHoldSts rtb_TmpSignalConversionAtVePLTR_e_EPBHol;
    TeTRGR_e_TransRangeState rtb_Switch1_fp;
    boolean rtb_TmpSignalConversionAtVeCSVR_b_VehSpd;
    boolean rtb_TmpSignalConversionAtVeVSDR_b_PrimNo;

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeTRGR_e_EPBReq rtb_Switch1_id;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeTRGR_e_TransRangeState rtb_DataTypeConversion_og[13];

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    TeTRGR_e_TransRangeState Switch40;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    sint32 i;

#endif

    boolean rtb_Logical4_pa_0[7];

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean tmp;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    float32 tmp_0;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean tmp_1;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean guard1 = false;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean guard2 = false;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean guard3 = false;

#endif

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    boolean guard4 = false;

#endif

    /* RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
     *  SubSystem: '<Root>/TRGR_MedTED'
     */
    /* SignalConversion generated from: '<S4>/VeCSVR_n_TransOutSpdSgndFltrd' incorporates:
     *  Inport: '<Root>/VeCSVR_n_TransOutSpdSgndFltrd'
     */
    (void)Rte_Read_VeCSVR_n_TransOutSpdSgndFltrd_Value
        (&rtb_TmpSignalConversionAtVeCSVR_n_TransO);

    /* SignalConversion generated from: '<S4>/VeCSVR_v_VehSpdSigned' incorporates:
     *  Inport: '<Root>/VeCSVR_v_VehSpdSigned'
     */
    (void)Rte_Read_VeCSVR_v_VehSpdSigned_Value
        (&rtb_TmpSignalConversionAtVeCSVR_v_VehSpd);

    /* SignalConversion generated from: '<S4>/VeBRKR_e_BrkPedalDscrtInpt' incorporates:
     *  Inport: '<Root>/VeBRKR_e_BrkPedalDscrtInpt'
     */
    (void)Rte_Read_VeBRKR_e_BrkPedalDscrtInpt_Value
        (&rtb_TmpSignalConversionAtVeBRKR_e_BrkPed);

    /* SignalConversion generated from: '<S4>/VeSSDR_b_DrvAllwd' incorporates:
     *  Inport: '<Root>/VeSSDR_b_DrvAllwd'
     */
    (void)Rte_Read_VeSSDR_b_DrvAllwd_Value
        (&rtb_TmpSignalConversionAtVeSSDR_b_DrvAll);

    /* SignalConversion generated from: '<S4>/VeSSDR_b_NeutAllwd' incorporates:
     *  Inport: '<Root>/VeSSDR_b_NeutAllwd'
     */
    (void)Rte_Read_VeSSDR_b_NeutAllwd_Value
        (&rtb_TmpSignalConversionAtVeSSDR_b_NeutAl);

    /* SignalConversion generated from: '<S4>/VePLTR_e_EPBHoldSts' incorporates:
     *  Inport: '<Root>/VePLTR_e_EPBHoldSts'
     */
    (void)Rte_Read_VePLTR_e_EPBHoldSts_Value
        (&rtb_TmpSignalConversionAtVePLTR_e_EPBHol);

    /* SignalConversion generated from: '<S4>/VeSRAR_b_DrvAllwd' incorporates:
     *  Inport: '<Root>/VeSRAR_b_DrvAllwd'
     */
    (void)Rte_Read_VeSRAR_b_DrvAllwd_Value
        (&rtb_TmpSignalConversionAtVeSRAR_b_DrvAll);

    /* SignalConversion generated from: '<S4>/VeSRAR_b_NeutAllwd' incorporates:
     *  Inport: '<Root>/VeSRAR_b_NeutAllwd'
     */
    (void)Rte_Read_VeSRAR_b_NeutAllwd_Value
        (&rtb_TmpSignalConversionAtVeSRAR_b_NeutAl);

    /* SignalConversion generated from: '<S4>/VeBRKR_P_BrkPrss' incorporates:
     *  Inport: '<Root>/VeBRKR_P_BrkPrss'
     */
    (void)Rte_Read_VeBRKR_P_BrkPrss_Value
        (&rtb_TmpSignalConversionAtVeBRKR_P_BrkPrs);

    /* SignalConversion generated from: '<S4>/VeCSVR_b_VehSpdFA' incorporates:
     *  Inport: '<Root>/VeCSVR_b_VehSpdFA'
     */
    (void)Rte_Read_VeCSVR_b_VehSpdFA_Value
        (&rtb_TmpSignalConversionAtVeCSVR_b_VehSpd);

    /* SignalConversion generated from: '<S4>/VeVSDR_b_PrimNoFA' incorporates:
     *  Inport: '<Root>/VeVSDR_b_PrimNoFA'
     */
    (void)Rte_Read_VeVSDR_b_PrimNoFA_Value
        (&rtb_TmpSignalConversionAtVeVSDR_b_PrimNo);

    /* SignalConversion generated from: '<S4>/VeBRKR_b_BrkPedalDscrtInptFA' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPedalDscrtInptFA'
     */
    (void)Rte_Read_VeBRKR_b_BrkPedalDscrtInptFA_Value
        (&rtb_TmpSignalConversionAtVeBRKR_b_BrkPed);

    /* SignalConversion generated from: '<S4>/VeBRKR_b_BrkPrssFA' incorporates:
     *  Inport: '<Root>/VeBRKR_b_BrkPrssFA'
     */
    (void)Rte_Read_VeBRKR_b_BrkPrssFA_Value
        (&rtb_TmpSignalConversionAtVeBRKR_b_BrkPrs);

    /* SignalConversion generated from: '<S4>/VeOBCR_b_ValidPluginDetected' incorporates:
     *  Inport: '<Root>/VeOBCR_b_ValidPluginDetected'
     */
    (void)Rte_Read_VeOBCR_b_ValidPluginDetected_Value
        (&rtb_TmpSignalConversionAtVeOBCR_b_ValidP);

    /* Outputs for Atomic SubSystem: '<S4>/TRGR_Merged' */
    /* SignalConversion generated from: '<S4>/VePLTR_b_Prmry_TransShiftPstnFA' incorporates:
     *  Inport: '<Root>/VeCCTR_b_CcAccelSts'
     *  Inport: '<Root>/VeCCTR_b_CcDecelSts'
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VeDMIR_e_BrakingMdReq'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts'
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     *  Inport: '<Root>/VeHSWR_b_HoodOpen'
     *  Inport: '<Root>/VeINVR_e_MtrA_6SOEnbl'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2'
     *  Inport: '<Root>/VePLTR_b_DAI_Enbl'
     *  Inport: '<Root>/VePLTR_b_ERS_SWFA'
     *  Inport: '<Root>/VePLTR_b_ESSRqShftPark'
     *  Inport: '<Root>/VePLTR_b_FobSearchResult_FA'
     *  Inport: '<Root>/VePLTR_b_ImmoParkReq'
     *  Inport: '<Root>/VePLTR_b_MRM_Status_FA'
     *  Inport: '<Root>/VePLTR_b_ManualMode'
     *  Inport: '<Root>/VePLTR_b_PRNDFailSts'
     *  Inport: '<Root>/VePLTR_b_ParkingGearShiftReq_BSM_FA'
     *  Inport: '<Root>/VePLTR_b_ProxiCADM'
     *  Inport: '<Root>/VePLTR_b_ProxiCADM2'
     *  Inport: '<Root>/VePLTR_b_RFHub_ForcePark'
     *  Inport: '<Root>/VePLTR_b_RackFaultFA'
     *  Inport: '<Root>/VePLTR_b_Secure_Idle_Req'
     *  Inport: '<Root>/VePLTR_b_Secure_Idle_Req_FA'
     *  Inport: '<Root>/VePLTR_b_SelectSpdSts_FA'
     *  Inport: '<Root>/VePLTR_b_ShftLckFlt'
     *  Inport: '<Root>/VePLTR_b_ShftSnsFA'
     *  Inport: '<Root>/VePLTR_b_ShiftDspFlt'
     *  Inport: '<Root>/VePLTR_b_ShiftLeverFailSts'
     *  Inport: '<Root>/VePLTR_e_AutoPosCorrMd'
     *  Inport: '<Root>/VePLTR_e_ERS_SW'
     *  Inport: '<Root>/VePLTR_e_ESMTransRngSt'
     *  Inport: '<Root>/VePLTR_e_MRM_Status_C2_FA'
     *  Inport: '<Root>/VePLTR_e_ParkingGearShiftReq_BSM'
     *  Inport: '<Root>/VePLTR_e_RationalisedRngSt'
     *  Inport: '<Root>/VePLTR_e_SelectSpdSts'
     *  Inport: '<Root>/VePLTR_e_ShiftLeverPosReq'
     *  Inport: '<Root>/VePLTR_e_TowHaulMode'
     *  Inport: '<Root>/VePLTR_e_ValidatePstn'
     *  Inport: '<Root>/VePLTR_e_VehicleCountryCode'
     *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
     *  Inport: '<Root>/VePLTR_y_FobSearchResult'
     *  Inport: '<Root>/VePLTR_y_GatedParkSwFlt'
     *  Inport: '<Root>/VePMDR_b_EngineOffRequest'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<Root>/VePPCR_b_ApplyEPB'
     *  Inport: '<Root>/VePPCR_b_PPawlFlt_InhibitMtr'
     *  Inport: '<Root>/VePPCR_b_PPawlFlt_UnknownPos'
     *  Inport: '<Root>/VePPCR_b_PPawl_CurrSnsrFlt'
     *  Inport: '<Root>/VePPCR_b_PPawl_PosSnsrFlt'
     *  Inport: '<Root>/VePPCR_b_PPawl_TXFlt'
     *  Inport: '<Root>/VePPCR_e_PPawlFdbck'
     *  Inport: '<Root>/VePPCR_e_PPawlRequest'
     *  Inport: '<Root>/VeRTMR_e_WEDLearningProcedure'
     *  Inport: '<Root>/VeSSDR_b_DrvAllwdTPChck'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     *  Inport: '<Root>/VeTRIR_b_SCCActv'
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     *  Inport: '<Root>/VeTRNR_e_TCMActualEvenGear'
     *  Inport: '<Root>/VeVTLR_e_DschrgSysSts'
     *  SignalConversion generated from: '<S4>/VePLTR_b_Scndry_TransShiftPstnFA'
     */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* Outputs for Atomic SubSystem: '<S11>/TRGR_FUNC' */
    /* SignalConversion generated from: '<S4>/VePLTR_b_Prmry_TransShiftPstnFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_Prmry_TransShiftPstnFA'
     */
    (void)Rte_Read_VePLTR_b_Prmry_TransShiftPstnFA_Value(&TRGR_ac_B.AND_n1);

    /* SignalConversion generated from: '<S4>/VePLTR_b_Scndry_TransShiftPstnFA' incorporates:
     *  Inport: '<Root>/VePLTR_b_Scndry_TransShiftPstnFA'
     */
    (void)Rte_Read_VePLTR_b_Scndry_TransShiftPstnFA_Value(&TRGR_ac_B.AND_gw);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActPosSnsrCkt);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_RF_WHL_HubDisConActPosSnsr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActPosSnsr_Value
        (&TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActPosSnsr);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_RF_WHL_HubDisConActCntrl' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_RF_WHL_HubDisConActCntrl_Value
        (&TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActCntrl);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf_Value
        (&TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActPosSnsrCkt);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_LF_WHL_HubDisConActPosSnsr' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActPosSnsr_Value
        (&TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActPosSnsr);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_LF_WHL_HubDisConActCntrl' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_LF_WHL_HubDisConActCntrl_Value
        (&TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActCntrl);

    /* DataStoreWrite: '<S12>/DSW_StatusByte_ParkNeutSwOut' incorporates:
     *  Inport: '<Root>/VeDMAB_y_StatusByte_ParkNeutSwOut'
     */
    (void)Rte_Read_VeDMAB_y_StatusByte_ParkNeutSwOut_Value
        (&TRGR_ac_DW.StatusByte_ParkNeutSwOut);
    (void)Rte_Read_VePLTR_e_ERS_SW_Value(&tmpRead);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Switch: '<S15>/Switch31' incorporates:
     *  Constant: '<S1033>/Calib'
     *  Constant: '<S1062>/Calib'
     *  Inport: '<Root>/VePLTR_e_ERS_SW'
     *  Switch: '<S15>/Switch19'
     */
    if (KeTRGR_b_TOSRSpdOvrd)
    {
        VeTRGI_n_TOSRSpeed = KeTRGR_n_TOSRSpdOvrdVal;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_b_PrimNo)
    {
        /* Switch: '<S15>/Switch19' incorporates:
         *  Constant: '<S1061>/Calib'
         */
        VeTRGI_n_TOSRSpeed = KeTRGR_n_DefaultTOSRSpd;
    }
    else
    {
        VeTRGI_n_TOSRSpeed = rtb_TmpSignalConversionAtVeCSVR_n_TransO;
    }

    /* End of Switch: '<S15>/Switch31' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VePLTR_b_PRNDFailSts_Value((&(VeTRGI_b_PRNDFailStatus)));
    (void)Rte_Read_VePLTR_b_ShiftLeverFailSts_Value((&(VeTRGI_b_ShiftFailStatus)));
    (void)Rte_Read_VePLTR_e_ShiftLeverPosReq_Value(&rtb_Switch1_fp);
    (void)Rte_Read_VePLTR_b_ShiftDspFlt_Value((&(VeTRGI_b_ShiftDispFault)));
    (void)Rte_Read_VePLTR_b_ShftSnsFA_Value((&(VeTRGI_b_ShiftSnsFault)));
    (void)Rte_Read_VePLTR_e_ESMTransRngSt_Value(&Switch40);
    (void)Rte_Read_VePLTR_e_TowHaulMode_Value(&tmpRead_1);
    (void)Rte_Read_VePLTR_b_ERS_SWFA_Value(&rtb_AND_p1);
    (void)Rte_Read_VeTISR_n_InputSpeed_Value(&rtb_Switch_d3);
    (void)Rte_Read_VeESSR_e_EngStartStopSt_Value(&tmpRead_0);
    (void)Rte_Read_VeOSMR_n_InputSpdMaxM2_Value(&rtb_MinMax1);
    (void)Rte_Read_VeOSMR_n_InputSpdMaxM1_Value(&rtb_Subtraction2);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Switch: '<S15>/Switch51' incorporates:
     *  Constant: '<S1032>/Calib'
     *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM1'
     *  Inport: '<Root>/VeOSMR_n_InputSpdMaxM2'
     *  Inport: '<Root>/VePLTR_b_ERS_SWFA'
     *  Inport: '<Root>/VePLTR_b_PRNDFailSts'
     *  Inport: '<Root>/VePLTR_b_ShftSnsFA'
     *  Inport: '<Root>/VePLTR_b_ShiftDspFlt'
     *  Inport: '<Root>/VePLTR_b_ShiftLeverFailSts'
     *  Inport: '<Root>/VePLTR_e_ESMTransRngSt'
     *  Inport: '<Root>/VePLTR_e_ShiftLeverPosReq'
     *  Inport: '<Root>/VePLTR_e_TowHaulMode'
     *  Inport: '<Root>/VeTISR_n_InputSpeed'
     */
    if (KeTRGR_b_ShiftLeverPosReqOvrd)
    {
        /* Switch: '<S15>/Switch51' incorporates:
         *  Constant: '<S1056>/Calib'
         */
        VeTRGI_e_ShiftLeverReq = KeTRGR_e_ShiftLeverPosReqOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch51' incorporates:
         *  Inport: '<Root>/VePLTR_e_ShiftLeverPosReq'
         */
        VeTRGI_e_ShiftLeverReq = rtb_Switch1_fp;
    }

    /* End of Switch: '<S15>/Switch51' */

    /* Switch: '<S15>/Switch43' incorporates:
     *  Constant: '<S953>/Calib'
     */
    if (KeTRGR_b_ESMTransRngStOvrd)
    {
        /* Switch: '<S15>/Switch43' incorporates:
         *  Constant: '<S1045>/Calib'
         */
        VeTRGI_e_ESMRangeSt = KeTRGR_e_ESMTransRngStOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch43' incorporates:
         *  Inport: '<Root>/VePLTR_e_ESMTransRngSt'
         */
        VeTRGI_e_ESMRangeSt = Switch40;
    }

    /* End of Switch: '<S15>/Switch43' */

    /* Switch: '<S15>/Switch40' incorporates:
     *  Constant: '<S1025>/Calib'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S15>/Switch40' incorporates:
         *  Switch: '<S15>/Switch51'
         */
        Switch40 = VeTRGI_e_ShiftLeverReq;
    }
    else
    {
        /* Switch: '<S15>/Switch40' incorporates:
         *  Switch: '<S15>/Switch43'
         */
        Switch40 = VeTRGI_e_ESMRangeSt;
    }

    /* End of Switch: '<S15>/Switch40' */

    /* Outport: '<Root>/VeTRGR_e_TransDirctnSt' incorporates:
     *  DataTypeConversion: '<S918>/DataTypeConversion'
     *  Switch: '<S15>/Switch40'
     */
    (void)Rte_Write_VeTRGR_e_TransDirctnSt_Value(Switch40);

    /* Switch: '<S15>/Switch52' incorporates:
     *  Constant: '<S1030>/Calib'
     */
    if (KeTRGR_b_ShiftLeverFailStsOvrd)
    {
        /* Switch: '<S15>/Switch52' incorporates:
         *  Constant: '<S1031>/Calib'
         *  Inport: '<Root>/VePLTR_b_ShiftLeverFailSts'
         */
        VeTRGI_b_ShiftFailStatus = KeTRGR_b_ShiftLeverFailStsOvrdVal;
    }

    /* End of Switch: '<S15>/Switch52' */

    /* Switch: '<S15>/Switch53' incorporates:
     *  Constant: '<S993>/Calib'
     */
    if (KeTRGR_b_PRNDFailStsOvrd)
    {
        /* Switch: '<S15>/Switch53' incorporates:
         *  Constant: '<S994>/Calib'
         *  Inport: '<Root>/VePLTR_b_PRNDFailSts'
         */
        VeTRGI_b_PRNDFailStatus = KeTRGR_b_PRNDFailStsOvrdVal;
    }

    /* End of Switch: '<S15>/Switch53' */

    /* Switch: '<S15>/Switch30' incorporates:
     *  Logic: '<S15>/Logical34'
     */
    VeTRGI_b_ShiftDispFlt = ((VeTRGI_b_ShiftFailStatus) ||
        (VeTRGI_b_PRNDFailStatus));

    /* Outport: '<Root>/VeTRGR_e_TransShiftLeverPstn' incorporates:
     *  Constant: '<S926>/Calib'
     *  DataTypeConversion: '<S15>/Data_Type_Conversion1'
     *  Selector: '<S15>/Selector'
     *  Switch: '<S15>/Switch40'
     */
    (void)Rte_Write_VeTRGR_e_TransShiftLeverPstn_Value
        (KaTRGR_e_TransShiftLeverPstn_Map[(Switch40)]);

    /* Switch: '<S15>/Switch48' incorporates:
     *  Constant: '<S1026>/Calib'
     */
    if (KeTRGR_b_ShftSnsFAOvrd)
    {
        /* Switch: '<S15>/Switch48' incorporates:
         *  Constant: '<S1027>/Calib'
         *  Inport: '<Root>/VePLTR_b_ShftSnsFA'
         */
        VeTRGI_b_ShiftSnsFault = KeTRGR_b_ShftSnsFAOvrdVal;
    }

    /* End of Switch: '<S15>/Switch48' */

    /* Switch: '<S15>/Switch49' incorporates:
     *  Constant: '<S1028>/Calib'
     */
    if (KeTRGR_b_ShiftDspFltOvrd)
    {
        /* Switch: '<S15>/Switch49' incorporates:
         *  Constant: '<S1029>/Calib'
         *  Inport: '<Root>/VePLTR_b_ShiftDspFlt'
         */
        VeTRGI_b_ShiftDispFault = KeTRGR_b_ShiftDspFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch49' */

    /* Switch: '<S15>/Switch41' incorporates:
     *  Constant: '<S1025>/Calib'
     *  Switch: '<S15>/Switch42'
     *  Switch: '<S15>/Switch56'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S15>/Switch41' */
        VeTRGI_b_ShftSensFA = VeTRGI_b_ShiftDispFlt;

        /* Switch: '<S15>/Switch56' incorporates:
         *  Constant: '<S921>/Constant'
         *  RelationalOperator: '<S15>/Comparison9'
         *  Switch: '<S15>/Switch51'
         */
        TRGR_ac_B.VeTRGR_b_TransmissionFailSts = (((uint32)
            VeTRGI_e_ShiftLeverReq) == CeTRGR_e_TransRangeIllegal);
    }
    else
    {
        /* Switch: '<S15>/Switch41' */
        VeTRGI_b_ShftSensFA = VeTRGI_b_ShiftSnsFault;

        /* Switch: '<S15>/Switch42' */
        VeTRGI_b_ShiftDispFlt = VeTRGI_b_ShiftDispFault;

        /* Switch: '<S15>/Switch56' incorporates:
         *  Logic: '<S15>/Logical2'
         */
        TRGR_ac_B.VeTRGR_b_TransmissionFailSts = ((TRGR_ac_B.AND_n1) &&
            (TRGR_ac_B.AND_gw));
    }

    /* End of Switch: '<S15>/Switch41' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VeHPMR_b_PropSysActv_Value((&(VeTRGI_b_PropSysActv)));

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Switch: '<S15>/Switch' incorporates:
     *  Constant: '<S1000>/Calib'
     *  Constant: '<S1001>/Calib'
     *  Inport: '<Root>/VeHPMR_b_PropSysActv'
     */
    if (KeTRGR_b_PropSysActvOvrd)
    {
        VeTRGI_b_PropSysActv = KeTRGR_b_PropSysActvOvrdVal;
    }

    /* End of Switch: '<S15>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VePPCR_e_PPawlFdbck_Value((&(VeTRGI_e_PPawlFdbck)));

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Switch: '<S15>/Switch1' incorporates:
     *  Constant: '<S1038>/Calib'
     *  Constant: '<S1065>/Calib'
     *  Inport: '<Root>/VePPCR_e_PPawlFdbck'
     *  Switch: '<S15>/Switch4'
     */
    if (KeTRGR_b_VehicleSpdOvrd)
    {
        tmp_0 = KeTRGR_v_VehicleSpdOvrdVal;
    }
    else if (rtb_TmpSignalConversionAtVeCSVR_b_VehSpd)
    {
        /* Switch: '<S15>/Switch4' incorporates:
         *  Constant: '<S1064>/Calib'
         */
        tmp_0 = KeTRGR_v_DefaultVehSpd;
    }
    else
    {
        tmp_0 = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S15>/Switch1' */

    /* Product: '<S15>/Product' incorporates:
     *  Constant: '<S927>/Calib'
     */
    VeTRGI_v_VehicleSpdmph = tmp_0 * KeTRGR_Cf_VehSpeedKphToMph;

    /* Switch: '<S15>/Switch2' incorporates:
     *  Constant: '<S981>/Calib'
     */
    if (KeTRGR_b_PPawlFdbckOvrd)
    {
        /* Switch: '<S15>/Switch2' incorporates:
         *  Constant: '<S1052>/Calib'
         *  Inport: '<Root>/VePPCR_e_PPawlFdbck'
         */
        VeTRGI_e_PPawlFdbck = KeTRGR_e_PPawlFdbckOvrdVal;
    }

    /* End of Switch: '<S15>/Switch2' */

    /* Switch: '<S15>/Switch9' incorporates:
     *  Constant: '<S938>/Calib'
     */
    if (KeTRGR_b_BrkPrssOvrd)
    {
        /* Switch: '<S15>/Switch9' incorporates:
         *  Constant: '<S928>/Calib'
         */
        VeTRGI_P_RawBrkPrss = KeTRGR_P_BrkPrssOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch9' */
        VeTRGI_P_RawBrkPrss = rtb_TmpSignalConversionAtVeBRKR_P_BrkPrs;
    }

    /* End of Switch: '<S15>/Switch9' */

    /* Switch: '<S15>/Switch34' incorporates:
     *  Constant: '<S933>/Calib'
     */
    if (KeTRGR_b_BrkPedalDscrtInptFAOvrd)
    {
        /* Switch: '<S15>/Switch34' incorporates:
         *  Constant: '<S934>/Calib'
         */
        VeTRGI_b_BrakePdlDscrtInptFA = KeTRGR_b_BrkPedalDscrtInptFAOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch34' */
        VeTRGI_b_BrakePdlDscrtInptFA = rtb_TmpSignalConversionAtVeBRKR_b_BrkPed;
    }

    /* End of Switch: '<S15>/Switch34' */

    /* Logic: '<S1068>/Logical1' incorporates:
     *  Constant: '<S1078>/Calib'
     */
    rtb_Logical1_hh = ((VeTRGI_b_BrakePdlDscrtInptFA) ||
                       (KeTRGR_b_DsblBrkPdlDscrtInpt));

    /* Switch: '<S15>/Switch35' incorporates:
     *  Constant: '<S936>/Calib'
     */
    if (KeTRGR_b_BrkPrssFAOvrd)
    {
        /* Switch: '<S15>/Switch35' incorporates:
         *  Constant: '<S937>/Calib'
         */
        VeTRGI_b_RawBrkPrssFA = KeTRGR_b_BrkPrssFAOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch35' */
        VeTRGI_b_RawBrkPrssFA = rtb_TmpSignalConversionAtVeBRKR_b_BrkPrs;
    }

    /* End of Switch: '<S15>/Switch35' */

    /* Logic: '<S1068>/Logical2' incorporates:
     *  Constant: '<S1079>/Calib'
     */
    rtb_Logical2_or = ((VeTRGI_b_RawBrkPrssFA) || (KeTRGR_b_DsblPrkPrss));

    /* Switch: '<S15>/Switch33' incorporates:
     *  Constant: '<S935>/Calib'
     */
    if (KeTRGR_b_BrkPedalDscrtInptOvrd)
    {
        /* Switch: '<S15>/Switch33' incorporates:
         *  Constant: '<S1042>/Calib'
         */
        VeTRGI_e_BrkPdlDscrtInpt = KeTRGR_e_BrkPedalDscrtInptOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch33' incorporates:
         *  SignalConversion generated from: '<S4>/VeBRKR_e_BrkPedalDscrtInpt'
         */
        VeTRGI_e_BrkPdlDscrtInpt = rtb_TmpSignalConversionAtVeBRKR_e_BrkPed;
    }

    /* End of Switch: '<S15>/Switch33' */

    /* Switch: '<S1072>/Switch1' incorporates:
     *  Logic: '<S1068>/Logical10'
     *  Logic: '<S1068>/Logical6'
     *  Logic: '<S1068>/Logical7'
     *  Logic: '<S1068>/Logical8'
     *  Logic: '<S1068>/Logical9'
     *  Switch: '<S1072>/Switch2'
     *  Switch: '<S1072>/Switch3'
     */
    if (rtb_Logical1_hh && (!rtb_Logical2_or))
    {
        /* Switch: '<S1072>/Switch1' incorporates:
         *  Constant: '<S1073>/Calib'
         *  RelationalOperator: '<S1068>/Comparison2'
         */
        VeTRGI_b_BrakeAppliedVer = (VeTRGI_P_RawBrkPrss >= KeTRGR_P_BrkPrssTh);
    }
    else if ((!rtb_Logical1_hh) && rtb_Logical2_or)
    {
        /* Switch: '<S1072>/Switch2' incorporates:
         *  Constant: '<S1070>/Constant'
         *  RelationalOperator: '<S1068>/Comparison4'
         *  Switch: '<S1072>/Switch1'
         *  Switch: '<S15>/Switch33'
         */
        VeTRGI_b_BrakeAppliedVer = (((uint32)VeTRGI_e_BrkPdlDscrtInpt) ==
            CeBRKR_e_BrkApplied);
    }
    else if (rtb_Logical1_hh && rtb_Logical2_or)
    {
        /* Switch: '<S1072>/Switch3' incorporates:
         *  Switch: '<S1072>/Switch1'
         *  Switch: '<S1072>/Switch2'
         *  UnitDelay: '<S1068>/UnitDelay'
         */
        VeTRGI_b_BrakeAppliedVer = VeTRGI_b_BrkApplied;
    }
    else
    {
        /* Switch: '<S1072>/Switch1' incorporates:
         *  Constant: '<S1071>/Constant'
         *  RelationalOperator: '<S1068>/Comparison3'
         *  Switch: '<S1072>/Switch2'
         *  Switch: '<S1072>/Switch3'
         *  Switch: '<S15>/Switch33'
         */
        VeTRGI_b_BrakeAppliedVer = (((uint32)VeTRGI_e_BrkPdlDscrtInpt) ==
            CeBRKR_e_BrkApplied);
    }

    /* End of Switch: '<S1072>/Switch1' */

    /* Switch: '<S1068>/Switch4' incorporates:
     *  Constant: '<S1074>/Calib'
     */
    if (KeTRGR_b_BrakeAppliedOvrd)
    {
        /* Switch: '<S1068>/Switch4' incorporates:
         *  Constant: '<S1075>/Calib'
         */
        VeTRGI_b_BrkApplied = KeTRGR_b_BrakeAppliedOvrdVal;
    }
    else
    {
        /* Switch: '<S1068>/Switch4' */
        VeTRGI_b_BrkApplied = VeTRGI_b_BrakeAppliedVer;
    }

    /* End of Switch: '<S1068>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S1068>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S1081>/EdgeRising' */
    /* Logic: '<S1082>/AND' incorporates:
     *  Logic: '<S1082>/OR1'
     *  UnitDelay: '<S1082>/Unit Delay'
     */
    rtb_AND_nj = ((VeTRGI_b_BrkApplied) && (!TRGR_ac_DW.UnitDelay_DSTATE_ds));

    /* Update for UnitDelay: '<S1082>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_ds = VeTRGI_b_BrkApplied;

    /* End of Outputs for SubSystem: '<S1081>/EdgeRising' */

    /* Switch: '<S1081>/Switch1' incorporates:
     *  Constant: '<S1080>/Calib'
     *  Constant: '<S1081>/Constant Value'
     *  Constant: '<S1081>/Constant Value1'
     *  Logic: '<S1081>/OR'
     *  Logic: '<S1081>/OR1'
     *  MinMax: '<S1081>/Minimum'
     *  Sum: '<S1081>/Summation'
     *  UnitDelay: '<S1081>/Unit Delay'
     */
    if ((!VeTRGI_b_BrkApplied) || rtb_AND_nj)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_by = 0U;
    }
    else if (KeTRGR_t_BrakeAppliedDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_by) + 1U)))
    {
        /* MinMax: '<S1081>/Minimum' incorporates:
         *  Constant: '<S1080>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_by = KeTRGR_t_BrakeAppliedDbnc;
    }
    else
    {
        /* MinMax: '<S1081>/Minimum' incorporates:
         *  Constant: '<S1081>/Constant Value'
         *  Sum: '<S1081>/Summation'
         *  UnitDelay: '<S1081>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_by = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_by) + 1U);
    }

    /* End of Switch: '<S1081>/Switch1' */

    /* Logic: '<S1081>/AND' incorporates:
     *  Constant: '<S1080>/Calib'
     *  RelationalOperator: '<S1081>/Greater Than'
     *  UnitDelay: '<S1081>/Unit Delay'
     */
    VeTRGI_b_BrkAppliedDbnc = ((VeTRGI_b_BrkApplied) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_by >= KeTRGR_t_BrakeAppliedDbnc));

    /* End of Outputs for SubSystem: '<S1068>/TurnOnDelaySample' */

    /* Logic: '<S901>/AND' */
    TRGR_ac_B.VeTRGR_b_BrkApplied = VeTRGI_b_BrkAppliedDbnc;

    /* Switch: '<S1068>/Switch27' incorporates:
     *  Constant: '<S1076>/Calib'
     */
    if (KeTRGR_b_BrakeFAOvrd)
    {
        /* Switch: '<S1068>/Switch27' incorporates:
         *  Constant: '<S1077>/Calib'
         */
        VeTRGI_b_BrakeFA = KeTRGR_b_BrakeFAOvrdVal;
    }
    else
    {
        /* Switch: '<S1068>/Switch27' incorporates:
         *  Logic: '<S1068>/Logical11'
         */
        VeTRGI_b_BrakeFA = (rtb_Logical1_hh && rtb_Logical2_or);
    }

    /* End of Switch: '<S1068>/Switch27' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VePLTR_b_MRM_Status_FA_Value(&rtb_Comparison18_p);
    (void)Rte_Read_VePLTR_b_RFHub_ForcePark_Value((&(VeTRGI_b_RFHub_ForcePark)));
    (void)Rte_Read_VePLTR_y_GatedParkSwFlt_Value
        (&TRGR_ac_B.VeTRGR_y_GatedParkSWFlt);

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* DataTypeConversion: '<S912>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VePLTR_b_MRM_Status_FA'
     *  Inport: '<Root>/VePLTR_b_RFHub_ForcePark'
     *  Inport: '<Root>/VePLTR_e_Scndry_TransShiftPstn'
     *  Inport: '<Root>/VePLTR_y_GatedParkSwFlt'
     */
    (void)Rte_Read_VePLTR_e_Scndry_TransShiftPstn_Value
        (&TRGR_ac_B.DataTypeConversion_df);

    /* DataTypeConversion: '<S911>/DataTypeConversion' incorporates:
     *  Inport: '<Root>/VePLTR_e_Prmry_TransShiftPstn'
     */
    (void)Rte_Read_VePLTR_e_Prmry_TransShiftPstn_Value
        (&TRGR_ac_B.DataTypeConversion_i);

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VePLTR_b_RackFaultFA_Value((&(VeTRGI_b_RackFlt)));
    (void)Rte_Read_VePLTR_b_ShftLckFlt_Value((&(VeTRGI_b_ShftLckFlt)));
    (void)Rte_Read_VePLTR_e_AutoPosCorrMd_Value((&(VeTRGI_e_AutoPosCorrMd)));
    (void)Rte_Read_VePPCR_b_ApplyEPB_Value(&tmpRead_3);
    (void)Rte_Read_VePLTR_b_ESSRqShftPark_Value((&(VeTRGI_b_ESSRqShftPark)));
    (void)Rte_Read_VePLTR_phi_EstSlopeAngle_Value(&tmpRead_2);
    (void)Rte_Read_VeDFIR_b_PostCodeClrDiagDsbl_Value(&rtb_Comparison11_oj);
    (void)Rte_Read_VeDFIR_b_DsblDiagFailSafe_Value(&aVarTruthTableCondition_2);
    (void)Rte_Read_VePPCR_b_PPawl_PosSnsrFlt_Value((&(VeTRGI_b_PPawlPosSnsrFlt)));
    (void)Rte_Read_VePPCR_b_PPawl_CurrSnsrFlt_Value
        ((&(VeTRGI_b_PPawl_CurrSnsrFlt)));
    (void)Rte_Read_VePPCR_b_PPawlFlt_InhibitMtr_Value
        ((&(VeTRGI_b_PPawlFlt_InhibitMtr)));
    (void)Rte_Read_VePPCR_b_PPawlFlt_UnknownPos_Value
        ((&(VeTRGI_b_PPawlFlt_UnknownPos)));
    (void)Rte_Read_VePPCR_b_PPawl_TXFlt_Value((&(VeTRGI_b_PPawl_TXFlt)));
    (void)Rte_Read_VePLTR_e_VehicleCountryCode_Value
        ((&(VeTRGI_e_VehicleCountryCode)));
    (void)Rte_Read_VePPCR_e_PPawlRequest_Value((&(VeTRGI_e_PPawlReq)));
    (void)Rte_Read_VePMDR_e_PMM_PowerMode_Value((&(VeTRGI_e_PMM_PowerMode)));

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Logic: '<S906>/AND' incorporates:
     *  Inport: '<Root>/VeDFIR_b_DsblDiagFailSafe'
     *  Inport: '<Root>/VeDFIR_b_PostCodeClrDiagDsbl'
     *  Inport: '<Root>/VePLTR_b_ESSRqShftPark'
     *  Inport: '<Root>/VePLTR_b_RackFaultFA'
     *  Inport: '<Root>/VePLTR_b_ShftLckFlt'
     *  Inport: '<Root>/VePLTR_e_AutoPosCorrMd'
     *  Inport: '<Root>/VePLTR_e_VehicleCountryCode'
     *  Inport: '<Root>/VePLTR_phi_EstSlopeAngle'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     *  Inport: '<Root>/VePPCR_b_ApplyEPB'
     *  Inport: '<Root>/VePPCR_b_PPawlFlt_InhibitMtr'
     *  Inport: '<Root>/VePPCR_b_PPawlFlt_UnknownPos'
     *  Inport: '<Root>/VePPCR_b_PPawl_CurrSnsrFlt'
     *  Inport: '<Root>/VePPCR_b_PPawl_PosSnsrFlt'
     *  Inport: '<Root>/VePPCR_b_PPawl_TXFlt'
     *  Inport: '<Root>/VePPCR_e_PPawlRequest'
     */
    TRGR_ac_B.VeTRGR_b_BrakeFA = VeTRGI_b_BrakeFA;

    /* Switch: '<S15>/Switch8' incorporates:
     *  Constant: '<S1051>/Calib'
     *  Constant: '<S980>/Calib'
     *  Inport: '<Root>/VePMDR_e_PMM_PowerMode'
     */
    if (KeTRGR_b_PMM_PowerModeOvrd)
    {
        VeTRGI_e_PMM_PowerMode = KeTRGR_e_PMM_PowerModeOvrdVal;
    }

    /* End of Switch: '<S15>/Switch8' */

    /* Switch: '<S15>/Switch11' incorporates:
     *  Constant: '<S986>/Calib'
     */
    if (KeTRGR_b_PPawlRequestOvrd)
    {
        /* Switch: '<S15>/Switch11' incorporates:
         *  Constant: '<S1053>/Calib'
         *  Inport: '<Root>/VePPCR_e_PPawlRequest'
         */
        VeTRGI_e_PPawlReq = KeTRGR_e_PPawlRequestOvrdVal;
    }

    /* End of Switch: '<S15>/Switch11' */

    /* Switch: '<S15>/Switch14' incorporates:
     *  Constant: '<S945>/Calib'
     *  Constant: '<S946>/Calib'
     */
    if (KeTRGR_b_DrvAllwdOvrd)
    {
        rtb_Logical1_hh = KeTRGR_b_DrvAllwdOvrdVal;
    }
    else
    {
        rtb_Logical1_hh = rtb_TmpSignalConversionAtVeSSDR_b_DrvAll;
    }

    /* End of Switch: '<S15>/Switch14' */

    /* Switch: '<S15>/Switch23' incorporates:
     *  Constant: '<S1012>/Calib'
     *  Constant: '<S1013>/Calib'
     */
    if (KeTRGR_b_SRARDrvAllwdOvrd)
    {
        rtb_Logical2_or = KeTRGR_b_SRARDrvAllwdOvrdVal;
    }
    else
    {
        rtb_Logical2_or = rtb_TmpSignalConversionAtVeSRAR_b_DrvAll;
    }

    /* End of Switch: '<S15>/Switch23' */

    /* Logic: '<S15>/Logical3' */
    VeTRGI_b_DrvAllwd = (rtb_Logical1_hh && rtb_Logical2_or);

    /* Switch: '<S15>/Switch24' incorporates:
     *  Constant: '<S1014>/Calib'
     *  Constant: '<S1015>/Calib'
     */
    if (KeTRGR_b_SRARNeutAllwdOvrd)
    {
        rtb_Logical1_hh = KeTRGR_b_SRARNeutAllwdOvrdVal;
    }
    else
    {
        rtb_Logical1_hh = rtb_TmpSignalConversionAtVeSRAR_b_NeutAl;
    }

    /* End of Switch: '<S15>/Switch24' */

    /* Switch: '<S15>/Switch15' incorporates:
     *  Constant: '<S978>/Calib'
     *  Constant: '<S979>/Calib'
     */
    if (KeTRGR_b_NeutAllwdOvrd)
    {
        rtb_Logical2_or = KeTRGR_b_NeutAllwdOvrdVal;
    }
    else
    {
        rtb_Logical2_or = rtb_TmpSignalConversionAtVeSSDR_b_NeutAl;
    }

    /* End of Switch: '<S15>/Switch15' */

    /* Logic: '<S15>/Logical5' */
    VeTRGI_b_NeutAllwd = (rtb_Logical1_hh && rtb_Logical2_or);

    /* Switch: '<S15>/Switch16' incorporates:
     *  Constant: '<S1037>/Calib'
     */
    if (KeTRGR_b_VehicleCountryCodeOvrd)
    {
        /* Switch: '<S15>/Switch16' incorporates:
         *  Constant: '<S1058>/Calib'
         *  Inport: '<Root>/VePLTR_e_VehicleCountryCode'
         */
        VeTRGI_e_VehicleCountryCode = KeTRGR_e_VehicleCountryCodeOvrdVal;
    }

    /* End of Switch: '<S15>/Switch16' */

    /* Switch: '<S15>/Switch21' incorporates:
     *  Constant: '<S992>/Calib'
     */
    if (KeTRGR_b_PPawl_TXFlt_Ovrd)
    {
        /* Switch: '<S15>/Switch21' incorporates:
         *  Constant: '<S991>/Calib'
         *  Inport: '<Root>/VePPCR_b_PPawl_TXFlt'
         */
        VeTRGI_b_PPawl_TXFlt = KeTRGR_b_PPawl_TXFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch21' */

    /* Switch: '<S15>/Switch17' incorporates:
     *  Constant: '<S1044>/Calib'
     *  Constant: '<S952>/Calib'
     *  SignalConversion generated from: '<S4>/VePLTR_e_EPBHoldSts'
     */
    if (KeTRGR_b_EPB_HoldStsOvrd)
    {
        VeTRGI_e_EPB_HoldSts = KeTRGR_e_EPB_HoldStsOvrdVal;
    }
    else
    {
        VeTRGI_e_EPB_HoldSts = rtb_TmpSignalConversionAtVePLTR_e_EPBHol;
    }

    /* End of Switch: '<S15>/Switch17' */

    /* Switch: '<S15>/Switch18' incorporates:
     *  Constant: '<S984>/Calib'
     */
    if (KeTRGR_b_PPawlFlt_UnknownPosOvrd)
    {
        /* Switch: '<S15>/Switch18' incorporates:
         *  Constant: '<S985>/Calib'
         *  Inport: '<Root>/VePPCR_b_PPawlFlt_UnknownPos'
         */
        VeTRGI_b_PPawlFlt_UnknownPos = KeTRGR_b_PPawlFlt_UnknownPosOvrdVal;
    }

    /* End of Switch: '<S15>/Switch18' */

    /* Switch: '<S15>/Switch20' incorporates:
     *  Constant: '<S982>/Calib'
     */
    if (KeTRGR_b_PPawlFlt_InhibitMtrOvrd)
    {
        /* Switch: '<S15>/Switch20' incorporates:
         *  Constant: '<S983>/Calib'
         *  Inport: '<Root>/VePPCR_b_PPawlFlt_InhibitMtr'
         */
        VeTRGI_b_PPawlFlt_InhibitMtr = KeTRGR_b_PPawlFlt_InhibitMtrOvrdVal;
    }

    /* End of Switch: '<S15>/Switch20' */

    /* Switch: '<S15>/Switch22' incorporates:
     *  Constant: '<S987>/Calib'
     */
    if (KeTRGR_b_PPawl_CurrSnsrFltOvrd)
    {
        /* Switch: '<S15>/Switch22' incorporates:
         *  Constant: '<S988>/Calib'
         *  Inport: '<Root>/VePPCR_b_PPawl_CurrSnsrFlt'
         */
        VeTRGI_b_PPawl_CurrSnsrFlt = KeTRGR_b_PPawl_CurrSnsrFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch22' */

    /* Switch: '<S15>/Switch3' incorporates:
     *  Constant: '<S989>/Calib'
     */
    if (KeTRGR_b_PPawl_PosSnsrFltOvrd)
    {
        /* Switch: '<S15>/Switch3' incorporates:
         *  Constant: '<S990>/Calib'
         *  Inport: '<Root>/VePPCR_b_PPawl_PosSnsrFlt'
         */
        VeTRGI_b_PPawlPosSnsrFlt = KeTRGR_b_PPawl_PosSnsrFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch3' */

    /* Switch: '<S15>/Switch25' incorporates:
     *  Constant: '<S1063>/Calib'
     *  Constant: '<S958>/Calib'
     */
    if (KeTRGR_b_EstSlopeAngleOvrd)
    {
        tmpRead_2 = KeTRGR_phi_EstSlopeAngleOvrdVal;
    }

    /* End of Switch: '<S15>/Switch25' */

    /* Outputs for Atomic SubSystem: '<S15>/DigitalLowpassResetEnabled' */
    /* Sum: '<S907>/Summation' incorporates:
     *  Constant: '<S1060>/Calib'
     *  Product: '<S907>/Multiplication'
     *  Sum: '<S907>/Subtraction'
     *  UnitDelay: '<S907>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_a += (tmpRead_2 - TRGR_ac_DW.UnitDelay_DSTATE_a)
        * KeTRGR_k_SlopeAngle_FltCoeff;

    /* Abs: '<S15>/Abs1' incorporates:
     *  Switch: '<S907>/Switch2'
     */
    VeTRGI_phi_EstSlopeAngleFilt = fabsf(TRGR_ac_DW.UnitDelay_DSTATE_a);

    /* End of Outputs for SubSystem: '<S15>/DigitalLowpassResetEnabled' */

    /* Switch: '<S15>/Switch27' incorporates:
     *  Constant: '<S954>/Calib'
     */
    if (KeTRGR_b_ESSRqShftParkOvrd)
    {
        /* Switch: '<S15>/Switch27' incorporates:
         *  Constant: '<S955>/Calib'
         *  Inport: '<Root>/VePLTR_b_ESSRqShftPark'
         */
        VeTRGI_b_ESSRqShftPark = KeTRGR_b_ESSRqShftParkOvrdVal;
    }

    /* End of Switch: '<S15>/Switch27' */

    /* Switch: '<S15>/Switch37' incorporates:
     *  Constant: '<S1035>/Calib'
     */
    if (KeTRGR_b_Valid_PluginOvrd)
    {
        /* Switch: '<S15>/Switch37' incorporates:
         *  Constant: '<S1036>/Calib'
         */
        VeTRGI_b_Valid_Plugin = KeTRGR_b_Valid_PluginOvrdVal;
    }
    else
    {
        /* Switch: '<S15>/Switch37' */
        VeTRGI_b_Valid_Plugin = rtb_TmpSignalConversionAtVeOBCR_b_ValidP;
    }

    /* End of Switch: '<S15>/Switch37' */

    /* Switch: '<S15>/Switch44' incorporates:
     *  Constant: '<S931>/Calib'
     */
    if (KeTRGR_b_AutoPosCorrMdOvrd)
    {
        /* Switch: '<S15>/Switch44' incorporates:
         *  Constant: '<S1040>/Calib'
         *  Inport: '<Root>/VePLTR_e_AutoPosCorrMd'
         */
        VeTRGI_e_AutoPosCorrMd = KeTRGR_e_AutoPosCorrMdOvrdVal;
    }

    /* End of Switch: '<S15>/Switch44' */

    /* Switch: '<S15>/Switch46' incorporates:
     *  Constant: '<S1023>/Calib'
     */
    if (KeTRGR_b_ShftLckFltOvrd)
    {
        /* Switch: '<S15>/Switch46' incorporates:
         *  Constant: '<S1024>/Calib'
         *  Inport: '<Root>/VePLTR_b_ShftLckFlt'
         */
        VeTRGI_b_ShftLckFlt = KeTRGR_b_ShftLckFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch46' */

    /* Switch: '<S15>/Switch47' incorporates:
     *  Constant: '<S1008>/Calib'
     */
    if (KeTRGR_b_RackFltOvrd)
    {
        /* Switch: '<S15>/Switch47' incorporates:
         *  Constant: '<S1009>/Calib'
         *  Inport: '<Root>/VePLTR_b_RackFaultFA'
         */
        VeTRGI_b_RackFlt = KeTRGR_b_RackFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch47' */

    /* Switch: '<S15>/Switch50' incorporates:
     *  Constant: '<S962>/Calib'
     */
    if (KeTRGR_b_GatedParkSWFltOvrd)
    {
        /* Switch: '<S15>/Switch50' incorporates:
         *  Constant: '<S1067>/Calib'
         *  Inport: '<Root>/VePLTR_y_GatedParkSwFlt'
         */
        TRGR_ac_B.VeTRGR_y_GatedParkSWFlt = KeTRGR_y_GatedParkSWFltOvrdVal;
    }

    /* End of Switch: '<S15>/Switch50' */

    /* Switch: '<S15>/Switch45' incorporates:
     *  Constant: '<S1006>/Calib'
     */
    if (KeTRGR_b_RFHub_ForceParkOvrd)
    {
        /* Switch: '<S15>/Switch45' incorporates:
         *  Constant: '<S1007>/Calib'
         *  Inport: '<Root>/VePLTR_b_RFHub_ForcePark'
         */
        VeTRGI_b_RFHub_ForcePark = KeTRGR_b_RFHub_ForceParkOvrdVal;
    }

    /* End of Switch: '<S15>/Switch45' */

    /* Switch: '<S15>/Switch29' incorporates:
     *  Constant: '<S949>/Calib'
     *  Constant: '<S950>/Calib'
     */
    if (KeTRGR_b_DsblDiagFailSafeOvrd)
    {
        aVarTruthTableCondition_2 = KeTRGR_b_DsblDiagFailSafeOvrdVal;
    }

    /* End of Switch: '<S15>/Switch29' */

    /* Switch: '<S15>/Switch30' incorporates:
     *  Constant: '<S998>/Calib'
     *  Constant: '<S999>/Calib'
     */
    if (KeTRGR_b_PostCodeClrDiagDsblOvrd)
    {
        rtb_Comparison11_oj = KeTRGR_b_PostCodeClrDiagDsblOvrdVal;
    }

    /* End of Switch: '<S15>/Switch30' */

    /* Logic: '<S15>/Logical12' */
    VeTRGI_b_ResetDiag = (aVarTruthTableCondition_2 || rtb_Comparison11_oj);

    /* Switch: '<S15>/Switch55' incorporates:
     *  Constant: '<S969>/Calib'
     *  Constant: '<S970>/Calib'
     */
    if (KeTRGR_b_MRM_StsFAOvrd)
    {
        rtb_Comparison18_p = KeTRGR_b_MRM_StsFAOvrdVal;
    }

    /* End of Switch: '<S15>/Switch55' */

    /* Switch: '<S925>/Switch1' incorporates:
     *  Inport: '<Root>/VePLTR_e_MRM_Status'
     *  Logic: '<S15>/Logical1'
     */
    if (!rtb_Comparison18_p)
    {
        (void)Rte_Read_VePLTR_e_MRM_Status_Value((&(VeTRGI_e_MRM_Sts)));

        /* Switch: '<S15>/Switch26' incorporates:
         *  Constant: '<S971>/Calib'
         *  Inport: '<Root>/VePLTR_e_MRM_Status'
         */
        if (KeTRGR_b_MRM_StsOvrd)
        {
            /* Switch: '<S925>/Switch1' incorporates:
             *  Constant: '<S1046>/Calib'
             */
            VeTRGI_e_MRM_Sts = KeTRGR_e_MRM_StsOvrdVal;
        }

        /* End of Switch: '<S15>/Switch26' */
    }
    else
    {
        /* Switch: '<S925>/Switch1' incorporates:
         *  Constant: '<S922>/Constant'
         *  Inport: '<Root>/VePLTR_e_MRM_Status'
         */
        VeTRGI_e_MRM_Sts = CePLTR_e_Not_Active;
    }

    /* End of Switch: '<S925>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VeCCTR_b_CcDecelSts_Value((&(VeTRGI_b_DecelSts)));
    (void)Rte_Read_VeCCTR_b_CcAccelSts_Value((&(VeTRGI_b_AccelSts)));
    (void)Rte_Read_VeHPMR_b_CntrlrPwrHold_Value((&(VeTRGI_b_CntrlPwrHld)));
    (void)Rte_Read_VeINVR_e_MtrA_InvrtrSt_Value((&(VeTRGI_e_MtrA_InvrtrSt)));
    (void)Rte_Read_VeINVR_e_MtrA_6SOEnbl_Value((&(VeTRGI_e_MtrA_6SOEnbl)));
    (void)Rte_Read_VeINVR_e_MtrB_InvrtrSt_Value((&(VeTRGI_e_MtrB_InvrtrSt)));
    (void)Rte_Read_VePLTR_b_ImmoParkReq_Value((&(VeTRGI_b_ImmoParkReq)));
    (void)Rte_Read_VePLTR_b_DAI_Enbl_Value((&(VeTRGI_b_DAI_Enbl)));
    (void)Rte_Read_VeFCPR_b_FCPS_H2_RefuelSts_Value((&(VeTRGI_b_H2_Refuel_Sts)));
    (void)Rte_Read_VeSSDR_b_DrvAllwdTPChck_Value((&(VeTRGI_b_DrvAllwdTPChck)));
    (void)Rte_Read_VeTRIR_b_SCCActv_Value((&(VeTRGI_b_SCC_Actv)));
    (void)Rte_Read_VePMDR_b_EngineOffRequest_Value((&(VeTRGI_b_EngineOff)));

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Switch: '<S15>/Switch28' incorporates:
     *  Constant: '<S956>/Calib'
     *  Constant: '<S957>/Calib'
     *  Inport: '<Root>/VeCCTR_b_CcAccelSts'
     *  Inport: '<Root>/VeCCTR_b_CcDecelSts'
     *  Inport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts'
     *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
     *  Inport: '<Root>/VeINVR_e_MtrA_6SOEnbl'
     *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
     *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
     *  Inport: '<Root>/VePLTR_b_DAI_Enbl'
     *  Inport: '<Root>/VePLTR_b_ImmoParkReq'
     *  Inport: '<Root>/VePMDR_b_EngineOffRequest'
     *  Inport: '<Root>/VeSSDR_b_DrvAllwdTPChck'
     *  Inport: '<Root>/VeTRIR_b_SCCActv'
     */
    if (KeTRGR_b_EngineOffOvrd)
    {
        VeTRGI_b_EngineOff = KeTRGR_b_EngineOffOvrdVal;
    }

    /* End of Switch: '<S15>/Switch28' */

    /* Switch: '<S15>/Switch54' incorporates:
     *  Constant: '<S1010>/Calib'
     */
    if (KeTRGR_b_SCCActvOvrd)
    {
        /* Switch: '<S15>/Switch54' incorporates:
         *  Constant: '<S1011>/Calib'
         *  Inport: '<Root>/VeTRIR_b_SCCActv'
         */
        VeTRGI_b_SCC_Actv = KeTRGR_b_SCCActvOvrdVal;
    }

    /* End of Switch: '<S15>/Switch54' */

    /* Switch: '<S15>/Switch57' incorporates:
     *  Constant: '<S947>/Calib'
     */
    if (KeTRGR_b_DrvAllwdTPChckOvrd)
    {
        /* Switch: '<S15>/Switch57' incorporates:
         *  Constant: '<S948>/Calib'
         *  Inport: '<Root>/VeSSDR_b_DrvAllwdTPChck'
         */
        VeTRGI_b_DrvAllwdTPChck = KeTRGR_b_DrvAllwdTPChckOvrdVal;
    }

    /* End of Switch: '<S15>/Switch57' */

    /* Switch: '<S15>/Switch58' incorporates:
     *  Constant: '<S963>/Calib'
     */
    if (KeTRGR_b_H2_Refuel_Sts_Ovrd)
    {
        /* Switch: '<S15>/Switch58' incorporates:
         *  Constant: '<S964>/Calib'
         *  Inport: '<Root>/VeFCPR_b_FCPS_H2_RefuelSts'
         */
        VeTRGI_b_H2_Refuel_Sts = KeTRGR_b_H2_Refuel_Sts_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch58' */

    /* Switch: '<S15>/Switch5' incorporates:
     *  Constant: '<S941>/Calib'
     */
    if (KeTRGR_b_DAI_EnblOvrd)
    {
        /* Switch: '<S15>/Switch5' incorporates:
         *  Constant: '<S942>/Calib'
         *  Inport: '<Root>/VePLTR_b_DAI_Enbl'
         */
        VeTRGI_b_DAI_Enbl = KeTRGR_b_DAI_EnblOvrdVal;
    }

    /* End of Switch: '<S15>/Switch5' */

    /* Switch: '<S15>/Switch6' incorporates:
     *  Constant: '<S967>/Calib'
     */
    if (KeTRGR_b_ImmoParkReqOvrd)
    {
        /* Switch: '<S15>/Switch6' incorporates:
         *  Constant: '<S968>/Calib'
         *  Inport: '<Root>/VePLTR_b_ImmoParkReq'
         */
        VeTRGI_b_ImmoParkReq = KeTRGR_b_ImmoParkReqOvrdVal;
    }

    /* End of Switch: '<S15>/Switch6' */

    /* Switch: '<S15>/Switch7' incorporates:
     *  Constant: '<S977>/Calib'
     */
    if (KeTRGR_b_MtrB_InvrtrStOvrd)
    {
        /* Switch: '<S15>/Switch7' incorporates:
         *  Constant: '<S1050>/Calib'
         *  Inport: '<Root>/VeINVR_e_MtrB_InvrtrSt'
         */
        VeTRGI_e_MtrB_InvrtrSt = KeTRGR_e_MtrB_InvrtrStOvrdVal;
    }

    /* End of Switch: '<S15>/Switch7' */

    /* Switch: '<S15>/Switch10' incorporates:
     *  Constant: '<S975>/Calib'
     */
    if (KeTRGR_b_MtrA_6SOEnblOvrd)
    {
        /* Switch: '<S15>/Switch10' incorporates:
         *  Constant: '<S1048>/Calib'
         *  Inport: '<Root>/VeINVR_e_MtrA_6SOEnbl'
         */
        VeTRGI_e_MtrA_6SOEnbl = KeTRGR_e_MtrA_6SOEnblOvrdVal;
    }

    /* End of Switch: '<S15>/Switch10' */

    /* Switch: '<S15>/Switch12' incorporates:
     *  Constant: '<S976>/Calib'
     */
    if (KeTRGR_b_MtrA_InvrtrStOvrd)
    {
        /* Switch: '<S15>/Switch12' incorporates:
         *  Constant: '<S1049>/Calib'
         *  Inport: '<Root>/VeINVR_e_MtrA_InvrtrSt'
         */
        VeTRGI_e_MtrA_InvrtrSt = KeTRGR_e_MtrA_InvrtrStOvrdVal;
    }

    /* End of Switch: '<S15>/Switch12' */

    /* Switch: '<S15>/Switch13' incorporates:
     *  Constant: '<S939>/Calib'
     */
    if (KeTRGR_b_CntrlPwrHldOvrd)
    {
        /* Switch: '<S15>/Switch13' incorporates:
         *  Constant: '<S940>/Calib'
         *  Inport: '<Root>/VeHPMR_b_CntrlrPwrHold'
         */
        VeTRGI_b_CntrlPwrHld = KeTRGR_b_CntrlPwrHldOvrdVal;
    }

    /* End of Switch: '<S15>/Switch13' */

    /* Switch: '<S15>/Switch32' incorporates:
     *  Constant: '<S929>/Calib'
     */
    if (KeTRGR_b_AccelStsOvrd)
    {
        /* Switch: '<S15>/Switch32' incorporates:
         *  Constant: '<S930>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcAccelSts'
         */
        VeTRGI_b_AccelSts = KeTRGR_b_AccelStsOvrdVal;
    }

    /* End of Switch: '<S15>/Switch32' */

    /* Switch: '<S15>/Switch36' incorporates:
     *  Constant: '<S943>/Calib'
     */
    if (KeTRGR_b_DecelStsOvrd)
    {
        /* Switch: '<S15>/Switch36' incorporates:
         *  Constant: '<S944>/Calib'
         *  Inport: '<Root>/VeCCTR_b_CcDecelSts'
         */
        VeTRGI_b_DecelSts = KeTRGR_b_DecelStsOvrdVal;
    }

    /* End of Switch: '<S15>/Switch36' */

    /* Switch: '<S1069>/Switch36' incorporates:
     *  Constant: '<S1088>/Calib'
     *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
     *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
     */
    if (KeTRGR_b_WEDStatusOvrd)
    {
        /* Switch: '<S1069>/Switch36' incorporates:
         *  Constant: '<S1089>/Calib'
         */
        VeTRGI_b_WEDNotClosed = KeTRGR_b_WEDStatusOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeADAR_e_RightActuationStatus_Value(&tmpRead_5);
        (void)Rte_Read_VeADAR_e_LeftActuationStatus_Value(&tmpRead_4);

        /* Switch: '<S1069>/Switch36' incorporates:
         *  Constant: '<S1083>/Constant'
         *  Constant: '<S1085>/Constant'
         *  Inport: '<Root>/VeADAR_e_LeftActuationStatus'
         *  Inport: '<Root>/VeADAR_e_RightActuationStatus'
         *  Logic: '<S1069>/Logical1'
         *  Logic: '<S1069>/Logical3'
         *  Logic: '<S1069>/Logical9'
         *  RelationalOperator: '<S1069>/Comparison1'
         *  RelationalOperator: '<S1069>/Comparison4'
         */
        VeTRGI_b_WEDNotClosed = ((((uint32)tmpRead_4) != CeADAR_e_SS_Closed) ||
            (((uint32)tmpRead_5) != CeADAR_e_SS_Closed));
    }

    /* End of Switch: '<S1069>/Switch36' */

    /* Switch: '<S1069>/Switch1' incorporates:
     *  Constant: '<S1086>/Calib'
     *  Inport: '<Root>/VeADIR_b_LftWEDClosingFail'
     *  Inport: '<Root>/VeADIR_b_RtWEDClosingFail'
     *  Inport: '<Root>/VeADIR_e_WEDMechFailure_Sts'
     */
    if (KeTRGR_b_WEDFAOvrd)
    {
        /* Switch: '<S1069>/Switch1' incorporates:
         *  Constant: '<S1087>/Calib'
         */
        VeTRGI_b_WEDFA = KeTRGR_b_WEDFAOvrdVal;
    }
    else
    {
        (void)Rte_Read_VeADIR_e_WEDMechFailure_Sts_Value(&tmpRead_6);
        (void)Rte_Read_VeADIR_b_RtWEDClosingFail_Value(&rtb_AND12);
        (void)Rte_Read_VeADIR_b_LftWEDClosingFail_Value(&rtb_OR1_ct);

        /* Switch: '<S1069>/Switch1' incorporates:
         *  Constant: '<S1084>/Constant'
         *  Constant: '<S1091>/Constant1'
         *  Constant: '<S1091>/Constant2'
         *  Constant: '<S1092>/Constant1'
         *  Constant: '<S1092>/Constant2'
         *  Constant: '<S1093>/Constant1'
         *  Constant: '<S1093>/Constant2'
         *  Constant: '<S1094>/Constant1'
         *  Constant: '<S1094>/Constant2'
         *  Constant: '<S1095>/Constant1'
         *  Constant: '<S1095>/Constant2'
         *  Constant: '<S1096>/Constant1'
         *  Constant: '<S1096>/Constant2'
         *  DataStoreRead: '<S1091>/StatusByte_LF_WHL_HubDisConActPosSnsrCktPerf'
         *  DataStoreRead: '<S1092>/StatusByte_LF_WHL_HubDisConActPosSnsr'
         *  DataStoreRead: '<S1093>/StatusByte_RF_WHL_HubDisConActPosSnsrCktPerf'
         *  DataStoreRead: '<S1094>/StatusByte_RF_WHL_HubDisConActPosSnsr'
         *  DataStoreRead: '<S1095>/StatusByte_LF_WHL_HubDisConActCntrl'
         *  DataStoreRead: '<S1096>/StatusByte_RF_WHL_HubDisConActCntrl'
         *  Inport: '<Root>/VeADIR_b_LftWEDClosingFail'
         *  Inport: '<Root>/VeADIR_b_RtWEDClosingFail'
         *  Inport: '<Root>/VeADIR_e_WEDMechFailure_Sts'
         *  Logic: '<S1069>/Logical10'
         *  Logic: '<S1090>/Logical10'
         *  Logic: '<S1091>/LogicalOperator'
         *  Logic: '<S1092>/LogicalOperator'
         *  Logic: '<S1093>/LogicalOperator'
         *  Logic: '<S1094>/LogicalOperator'
         *  Logic: '<S1095>/LogicalOperator'
         *  Logic: '<S1096>/LogicalOperator'
         *  RelationalOperator: '<S1069>/Comparison2'
         *  RelationalOperator: '<S1091>/RelationalOperator1'
         *  RelationalOperator: '<S1091>/RelationalOperator2'
         *  RelationalOperator: '<S1092>/RelationalOperator1'
         *  RelationalOperator: '<S1092>/RelationalOperator2'
         *  RelationalOperator: '<S1093>/RelationalOperator1'
         *  RelationalOperator: '<S1093>/RelationalOperator2'
         *  RelationalOperator: '<S1094>/RelationalOperator1'
         *  RelationalOperator: '<S1094>/RelationalOperator2'
         *  RelationalOperator: '<S1095>/RelationalOperator1'
         *  RelationalOperator: '<S1095>/RelationalOperator2'
         *  RelationalOperator: '<S1096>/RelationalOperator1'
         *  RelationalOperator: '<S1096>/RelationalOperator2'
         *  S-Function (sfix_bitop): '<S1091>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1091>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S1092>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1092>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S1093>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1093>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S1094>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1094>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S1095>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1095>/Bitwise Operator2'
         *  S-Function (sfix_bitop): '<S1096>/Bitwise Operator1'
         *  S-Function (sfix_bitop): '<S1096>/Bitwise Operator2'
         */
        VeTRGI_b_WEDFA = (((rtb_OR1_ct || rtb_AND12) || (((uint32)tmpRead_6) ==
                            CeADIR_e_BrokenOpen)) || ((((((((((sint32)
            TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActCntrl) & 1) > 0) &&
                                ((((uint32)
            TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActCntrl) & 64U) == 0U)) ||
                               (((((sint32)
            TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActPosSnsr) & 1) > 0) &&
                                ((((uint32)
            TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActPosSnsr) & 64U) == 0U))) ||
                              (((((sint32)
            TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActPosSnsrCkt) & 1) > 0) &&
                               ((((uint32)
            TRGR_ac_DW.StatusByte_LF_WHL_HubDisConActPosSnsrCkt) & 64U) == 0U)))
                             || (((((sint32)
            TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActCntrl) & 1) > 0) &&
                              ((((uint32)
            TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActCntrl) & 64U) == 0U))) ||
                            (((((sint32)
                                TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActPosSnsr)
                               & 1) > 0) && ((((uint32)
                                TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActPosSnsr)
                               & 64U) == 0U))) || (((((sint32)
                               TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActPosSnsrCkt)
                              & 1) > 0) && ((((uint32)
                               TRGR_ac_DW.StatusByte_RF_WHL_HubDisConActPosSnsrCkt)
                              & 64U) == 0U))));
    }

    /* End of Switch: '<S1069>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VePLTR_e_MRM_Status_C2_FA_Value(&rtb_AND_g5);
    (void)Rte_Read_VePLTR_b_ProxiCADM2_Value((&(VeTRGI_b_ProxiCADM2)));
    (void)Rte_Read_VePLTR_b_ProxiCADM_Value((&(VeTRGI_b_ProxiCADM)));
    (void)Rte_Read_VeRTMR_e_WEDLearningProcedure_Value
        ((&(VeTRGI_e_WEDLearningProcedure)));
    (void)Rte_Read_VePLTR_b_FobSearchResult_FA_Value
        ((&(VeTRGI_b_FobSearchResult_FA)));
    (void)Rte_Read_VePLTR_y_FobSearchResult_Value((&(VeTRGI_y_FobSearchResult)));
    (void)Rte_Read_VePLTR_b_Secure_Idle_Req_FA_Value
        ((&(VeTRGI_b_Secure_Idle_Req_FA)));
    (void)Rte_Read_VePLTR_b_Secure_Idle_Req_Value((&(VeTRGI_b_Secure_Idle_Req)));
    (void)Rte_Read_VeFWDR_e_Tcase_Stat_Value((&(VeTRGI_e_Tcase_Stat)));
    (void)Rte_Read_VeDMIR_e_BrakingMdReq_Value((&(VeTRGI_e_BrakingMdReq)));
    (void)Rte_Read_VeHSWR_b_HoodOpen_Value((&(VeTRGI_b_HoodOpen)));
    (void)Rte_Read_VePLTR_b_ParkingGearShiftReq_BSM_FA_Value
        ((&(VeTRGI_b_ParkingGearShiftReq_BSM_FA)));
    (void)Rte_Read_VePLTR_e_ParkingGearShiftReq_BSM_Value
        ((&(VeTRGI_e_ParkingGearShiftReq_BSM)));
    (void)Rte_Read_VePLTR_b_SelectSpdSts_FA_Value((&(VeTRGI_b_SelectSpdSts_FA)));
    (void)Rte_Read_VePLTR_e_SelectSpdSts_Value((&(VeTRGI_e_SelectSpdSts)));

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Logic: '<S1069>/Logical2' incorporates:
     *  Inport: '<Root>/VeDMIR_e_BrakingMdReq'
     *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
     *  Inport: '<Root>/VeHSWR_b_HoodOpen'
     *  Inport: '<Root>/VePLTR_b_FobSearchResult_FA'
     *  Inport: '<Root>/VePLTR_b_ParkingGearShiftReq_BSM_FA'
     *  Inport: '<Root>/VePLTR_b_ProxiCADM'
     *  Inport: '<Root>/VePLTR_b_ProxiCADM2'
     *  Inport: '<Root>/VePLTR_b_Secure_Idle_Req'
     *  Inport: '<Root>/VePLTR_b_Secure_Idle_Req_FA'
     *  Inport: '<Root>/VePLTR_b_SelectSpdSts_FA'
     *  Inport: '<Root>/VePLTR_e_MRM_Status_C2_FA'
     *  Inport: '<Root>/VePLTR_e_ParkingGearShiftReq_BSM'
     *  Inport: '<Root>/VePLTR_e_SelectSpdSts'
     *  Inport: '<Root>/VePLTR_y_FobSearchResult'
     *  Inport: '<Root>/VeRTMR_e_WEDLearningProcedure'
     */
    VeTRGI_b_WEDOpenFaulted = ((VeTRGI_b_WEDNotClosed) || (VeTRGI_b_WEDFA));

    /* Switch: '<S15>/Switch38' incorporates:
     *  Constant: '<S1020>/Calib'
     */
    if (KeTRGR_b_SelectSpdStsOvrd)
    {
        /* Switch: '<S15>/Switch38' incorporates:
         *  Constant: '<S1055>/Calib'
         *  Inport: '<Root>/VePLTR_e_SelectSpdSts'
         */
        VeTRGI_e_SelectSpdSts = KeTRGR_e_SelectSpdStsOvrdVal;
    }

    /* End of Switch: '<S15>/Switch38' */

    /* Switch: '<S15>/Switch39' incorporates:
     *  Constant: '<S1021>/Calib'
     */
    if (KeTRGR_b_SelectSpdSts_FA_Ovrd)
    {
        /* Switch: '<S15>/Switch39' incorporates:
         *  Constant: '<S1022>/Calib'
         *  Inport: '<Root>/VePLTR_b_SelectSpdSts_FA'
         */
        VeTRGI_b_SelectSpdSts_FA = KeTRGR_b_SelectSpdSts_FA_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch39' */

    /* Switch: '<S15>/Switch59' incorporates:
     *  Constant: '<S997>/Calib'
     */
    if (KeTRGR_b_ParkingGearShiftReq_BSM_Ovrd)
    {
        /* Switch: '<S15>/Switch59' incorporates:
         *  Constant: '<S1054>/Calib'
         *  Inport: '<Root>/VePLTR_e_ParkingGearShiftReq_BSM'
         */
        VeTRGI_e_ParkingGearShiftReq_BSM =
            KeTRGR_e_ParkingGearShiftReq_BSM_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch59' */

    /* Switch: '<S15>/Switch60' incorporates:
     *  Constant: '<S995>/Calib'
     */
    if (KeTRGR_b_ParkingGearShiftReq_BSM_FA_Ovrd)
    {
        /* Switch: '<S15>/Switch60' incorporates:
         *  Constant: '<S996>/Calib'
         *  Inport: '<Root>/VePLTR_b_ParkingGearShiftReq_BSM_FA'
         */
        VeTRGI_b_ParkingGearShiftReq_BSM_FA =
            KeTRGR_b_ParkingGearShiftReq_BSM_FA_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch60' */

    /* Switch: '<S15>/Switch62' incorporates:
     *  Constant: '<S932>/Calib'
     */
    if (KeTRGR_b_BrakingMdReqOvrd)
    {
        /* Switch: '<S15>/Switch62' incorporates:
         *  Constant: '<S1041>/Calib'
         *  Inport: '<Root>/VeDMIR_e_BrakingMdReq'
         */
        VeTRGI_e_BrakingMdReq = KeTRGR_e_BrakingMdReqOvrdVal;
    }

    /* End of Switch: '<S15>/Switch62' */

    /* Switch: '<S15>/Switch63' incorporates:
     *  Constant: '<S1034>/Calib'
     */
    if (KeTRGR_b_Tcase_StatOvrd)
    {
        /* Switch: '<S15>/Switch63' incorporates:
         *  Constant: '<S1057>/Calib'
         *  Inport: '<Root>/VeFWDR_e_Tcase_Stat'
         */
        VeTRGI_e_Tcase_Stat = KeTRGR_e_Tcase_StatOvrdVal;
    }

    /* End of Switch: '<S15>/Switch63' */

    /* Switch: '<S15>/Switch64' incorporates:
     *  Constant: '<S1018>/Calib'
     */
    if (KeTRGR_b_Secure_Idle_Req_Ovrd)
    {
        /* Switch: '<S15>/Switch64' incorporates:
         *  Constant: '<S1019>/Calib'
         *  Inport: '<Root>/VePLTR_b_Secure_Idle_Req'
         */
        VeTRGI_b_Secure_Idle_Req = KeTRGR_b_Secure_Idle_Req_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch64' */

    /* Switch: '<S15>/Switch65' incorporates:
     *  Constant: '<S959>/Calib'
     */
    if (KeTRGR_b_FobSearchResultOvrd)
    {
        /* Switch: '<S15>/Switch65' incorporates:
         *  Constant: '<S1066>/Calib'
         *  Inport: '<Root>/VePLTR_y_FobSearchResult'
         */
        VeTRGI_y_FobSearchResult = KeTRGR_y_FobSearchResultOvrdVal;
    }

    /* End of Switch: '<S15>/Switch65' */

    /* Switch: '<S15>/Switch72' incorporates:
     *  Constant: '<S960>/Calib'
     */
    if (KeTRGR_b_FobSearchResult_FA_Ovrd)
    {
        /* Switch: '<S15>/Switch72' incorporates:
         *  Constant: '<S961>/Calib'
         *  Inport: '<Root>/VePLTR_b_FobSearchResult_FA'
         */
        VeTRGI_b_FobSearchResult_FA = KeTRGR_b_FobSearchResult_FA_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch72' */

    /* Switch: '<S15>/Switch73' incorporates:
     *  Constant: '<S1016>/Calib'
     */
    if (KeTRGR_b_Secure_Idle_Req_FA_Ovrd)
    {
        /* Switch: '<S15>/Switch73' incorporates:
         *  Constant: '<S1017>/Calib'
         *  Inport: '<Root>/VePLTR_b_Secure_Idle_Req_FA'
         */
        VeTRGI_b_Secure_Idle_Req_FA = KeTRGR_b_Secure_Idle_Req_FA_OvrdVal;
    }

    /* End of Switch: '<S15>/Switch73' */

    /* Switch: '<S15>/Switch67' incorporates:
     *  Constant: '<S1039>/Calib'
     */
    if (KeTRGR_b_WEDLearningOvrd)
    {
        /* Switch: '<S15>/Switch67' incorporates:
         *  Constant: '<S1059>/Calib'
         *  Inport: '<Root>/VeRTMR_e_WEDLearningProcedure'
         */
        VeTRGI_e_WEDLearningProcedure = KeTRGR_e_WEDLearningOvrdVal;
    }

    /* End of Switch: '<S15>/Switch67' */

    /* Switch: '<S15>/Switch61' incorporates:
     *  Constant: '<S965>/Calib'
     */
    if (KeTRGR_b_HoodOpenOvrd)
    {
        /* Switch: '<S15>/Switch61' incorporates:
         *  Constant: '<S966>/Calib'
         *  Inport: '<Root>/VeHSWR_b_HoodOpen'
         */
        VeTRGI_b_HoodOpen = KeTRGR_b_HoodOpenOvrdVal;
    }

    /* End of Switch: '<S15>/Switch61' */

    /* Switch: '<S15>/Switch68' incorporates:
     *  Constant: '<S1004>/Calib'
     */
    if (KeTRGR_b_ProxiCADMOvrd)
    {
        /* Switch: '<S15>/Switch68' incorporates:
         *  Constant: '<S1005>/Calib'
         *  Inport: '<Root>/VePLTR_b_ProxiCADM'
         */
        VeTRGI_b_ProxiCADM = KeTRGR_b_ProxiCADMOvrdVal;
    }

    /* End of Switch: '<S15>/Switch68' */

    /* Switch: '<S15>/Switch69' incorporates:
     *  Constant: '<S1002>/Calib'
     */
    if (KeTRGR_b_ProxiCADM2Ovrd)
    {
        /* Switch: '<S15>/Switch69' incorporates:
         *  Constant: '<S1003>/Calib'
         *  Inport: '<Root>/VePLTR_b_ProxiCADM2'
         */
        VeTRGI_b_ProxiCADM2 = KeTRGR_b_ProxiCADM2OvrdVal;
    }

    /* End of Switch: '<S15>/Switch69' */

    /* Switch: '<S15>/Switch71' incorporates:
     *  Constant: '<S972>/Calib'
     *  Constant: '<S973>/Calib'
     */
    if (KeTRGR_b_MRM_Sts_C2_FAOvrd)
    {
        rtb_AND_g5 = KeTRGR_b_MRM_Sts_C2_FAOvrdVal;
    }

    /* End of Switch: '<S15>/Switch71' */

    /* Switch: '<S924>/Switch1' incorporates:
     *  Inport: '<Root>/VePLTR_e_MRM_Status_C2'
     *  Logic: '<S15>/Logical4'
     */
    if (!rtb_AND_g5)
    {
        (void)Rte_Read_VePLTR_e_MRM_Status_C2_Value((&(VeTRGI_e_MRM_Sts_C2)));

        /* Switch: '<S15>/Switch70' incorporates:
         *  Constant: '<S974>/Calib'
         *  Inport: '<Root>/VePLTR_e_MRM_Status_C2'
         */
        if (KeTRGR_b_MRM_Sts_C2_Ovrd)
        {
            /* Switch: '<S924>/Switch1' incorporates:
             *  Constant: '<S1047>/Calib'
             */
            VeTRGI_e_MRM_Sts_C2 = KeTRGR_e_MRM_Sts_C2_OvrdVal;
        }

        /* End of Switch: '<S15>/Switch70' */
    }
    else
    {
        /* Switch: '<S924>/Switch1' incorporates:
         *  Constant: '<S923>/Constant'
         *  Inport: '<Root>/VePLTR_e_MRM_Status_C2'
         */
        VeTRGI_e_MRM_Sts_C2 = CePLTR_e_Not_Active;
    }

    /* End of Switch: '<S924>/Switch1' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    (void)Rte_Read_VeVTLR_e_DschrgSysSts_Value((&(VeTRGI_e_DschrgSysSts)));

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Switch: '<S15>/Switch66' incorporates:
     *  Constant: '<S951>/Calib'
     *  Inport: '<Root>/VeVTLR_e_DschrgSysSts'
     */
    if (KeTRGR_b_DschrgSysStsOvrd)
    {
        /* Switch: '<S15>/Switch66' incorporates:
         *  Constant: '<S1043>/Calib'
         */
        VeTRGI_e_DschrgSysSts = KeTRGR_e_DschrgSysStsOvrdVal;
    }

    /* End of Switch: '<S15>/Switch66' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGC_VldtTransRngSt'
     */
    /* RelationalOperator: '<S21>/Comparison5' incorporates:
     *  RelationalOperator: '<S25>/Comparison5'
     *  Switch: '<S15>/Switch40'
     *  Switch: '<S25>/Switch'
     */
    VeTRGC_e_RngSt_WithLOC_D = Switch40;

    /* Outputs for Atomic SubSystem: '<S25>/TimerRetriggerResetEnabled' */
    /* Switch: '<S323>/Switch2' incorporates:
     *  Constant: '<S320>/Calib'
     *  Logic: '<S25>/Logical2'
     *  RelationalOperator: '<S25>/Comparison5'
     *  Switch: '<S323>/Switch1'
     *  UnitDelay: '<S25>/UnitDelay'
     *  UnitDelay: '<S323>/UnitDelay'
     */
    if (VeTRGC_e_RngSt_WithLOC_D != TRGR_ac_DW.UnitDelay_DSTATE_enz)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_e = KeTRGR_t_ESMReqDbnc;
    }
    else
    {
        /* UnitDelay: '<S323>/UnitDelay' incorporates:
         *  Constant: '<S321>/Calib'
         *  Constant: '<S323>/ConstantValue4'
         *  MinMax: '<S323>/Maximum'
         *  Sum: '<S323>/Subtraction'
         *  Switch: '<S323>/Switch2'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_e = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_e -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S323>/Switch2' */

    /* Logic: '<S25>/Logical1' incorporates:
     *  Constant: '<S323>/ConstantValue2'
     *  RelationalOperator: '<S323>/GreaterThan1'
     *  UnitDelay: '<S323>/UnitDelay'
     */
    VeTRGC_b_DrvrRqDbnc = (TRGR_ac_DW.UnitDelay_DSTATE_e <= 0.0F);

    /* End of Outputs for SubSystem: '<S25>/TimerRetriggerResetEnabled' */

    /* Switch: '<S25>/Switch' */
    if (VeTRGC_b_DrvrRqDbnc)
    {
        /* VariantMerge generated from: '<S11>/DrvRq_WithNSA' */
        TRGR_ac_B.VeTRGR_e_ESMTransRngSt = VeTRGC_e_RngSt_WithLOC_D;
    }
    else
    {
        /* VariantMerge generated from: '<S11>/DrvRq_WithNSA' incorporates:
         *  UnitDelay: '<S25>/UnitDelay1'
         */
        TRGR_ac_B.VeTRGR_e_ESMTransRngSt = TRGR_ac_DW.UnitDelay1_DSTATE_a;
    }

    /* RelationalOperator: '<S21>/Comparison5' incorporates:
     *  RelationalOperator: '<S135>/Comparison1'
     *  RelationalOperator: '<S135>/Comparison11'
     *  RelationalOperator: '<S135>/Comparison2'
     *  RelationalOperator: '<S135>/Comparison3'
     *  RelationalOperator: '<S135>/Comparison4'
     *  RelationalOperator: '<S135>/Comparison6'
     *  RelationalOperator: '<S25>/Comparison7'
     *  Switch: '<S25>/Switch1'
     *  VariantMerge generated from: '<S11>/DrvRq_WithNSA'
     */
    VeTRGC_e_RngSt_WithLOC_D = TRGR_ac_B.VeTRGR_e_ESMTransRngSt;

    /* Switch: '<S25>/Switch1' incorporates:
     *  Constant: '<S314>/Constant'
     *  Constant: '<S319>/Calib'
     *  Logic: '<S25>/Logical9'
     *  RelationalOperator: '<S25>/Comparison7'
     */
    if ((((uint32)VeTRGC_e_RngSt_WithLOC_D) == CeTRGR_e_NoSelectionAvailable) &&
        (KeTRGR_b_ShftProxi))
    {
        /* Switch: '<S25>/Switch1' incorporates:
         *  UnitDelay: '<S14>/UnitDelay6'
         */
        VeTRGC_e_DrvReqRaw_WithSNA = TRGR_ac_DW.UnitDelay6_DSTATE;
    }
    else
    {
        /* Switch: '<S25>/Switch1' */
        VeTRGC_e_DrvReqRaw_WithSNA = VeTRGC_e_RngSt_WithLOC_D;
    }

    /* RelationalOperator: '<S500>/Comparison18' incorporates:
     *  Constant: '<S339>/Constant'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     */
    rtb_Comparison18_p = (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) ==
                          CeTRGR_e_TransRangeIllegal);

    /* Logic: '<S322>/Logical3' incorporates:
     *  Constant: '<S328>/Constant'
     *  RelationalOperator: '<S322>/Comparison1'
     */
    VeTRGC_b_LOC_P = ((((uint32)TRGR_ac_DW.UnitDelay2_DSTATE) ==
                       CeTRGR_e_TransRangePark) && rtb_Comparison18_p);

    /* Outputs for Atomic SubSystem: '<S322>/SignalLatchOnWithReset' */
    /* Logic: '<S344>/OR1' incorporates:
     *  Constant: '<S330>/Constant'
     *  Logic: '<S344>/NOT'
     *  Logic: '<S344>/OR'
     *  RelationalOperator: '<S322>/Comparison10'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S344>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_ie = ((VeTRGC_b_LOC_P) || ((((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangePark) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_ie)));

    /* End of Outputs for SubSystem: '<S322>/SignalLatchOnWithReset' */

    /* Logic: '<S322>/Logical2' incorporates:
     *  Constant: '<S338>/Constant'
     *  RelationalOperator: '<S322>/Comparison4'
     */
    VeTRGC_b_LOC_N = ((((uint32)TRGR_ac_DW.UnitDelay2_DSTATE) ==
                       CeTRGR_e_TransRangeNeutral) && rtb_Comparison18_p);

    /* Outputs for Atomic SubSystem: '<S322>/SignalLatchOnWithReset1' */
    /* Logic: '<S345>/OR1' incorporates:
     *  Constant: '<S331>/Constant'
     *  Constant: '<S332>/Constant'
     *  Logic: '<S322>/Logical6'
     *  Logic: '<S345>/NOT'
     *  Logic: '<S345>/OR'
     *  RelationalOperator: '<S322>/Comparison11'
     *  RelationalOperator: '<S322>/Comparison12'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S345>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_mm = ((VeTRGC_b_LOC_N) || (((((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangePark) && (((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangeNeutral)) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_mm)));

    /* End of Outputs for SubSystem: '<S322>/SignalLatchOnWithReset1' */

    /* Switch: '<S322>/Switch2' incorporates:
     *  Constant: '<S319>/Calib'
     */
    if (!KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S322>/Switch2' */
        VeTRGC_b_LOC_P = TRGR_ac_DW.UnitDelay_DSTATE_ie;
    }

    /* End of Switch: '<S322>/Switch2' */

    /* Logic: '<S322>/Logical5' incorporates:
     *  Constant: '<S341>/Constant'
     *  Constant: '<S342>/Constant'
     *  Logic: '<S322>/Logical4'
     *  RelationalOperator: '<S322>/Comparison7'
     *  RelationalOperator: '<S322>/Comparison8'
     */
    VeTRGC_b_LOC_D = (((((uint32)TRGR_ac_DW.UnitDelay2_DSTATE) ==
                        CeTRGR_e_TransRangeDrive) || (((uint32)
                         TRGR_ac_DW.UnitDelay2_DSTATE) ==
                        CeTRGR_e_TransRangeDrive1)) && rtb_Comparison18_p);

    /* Outputs for Atomic SubSystem: '<S322>/SignalLatchOnWithReset2' */
    /* Logic: '<S346>/OR1' incorporates:
     *  Constant: '<S333>/Constant'
     *  Constant: '<S334>/Constant'
     *  Constant: '<S335>/Constant'
     *  Logic: '<S322>/Logical7'
     *  Logic: '<S346>/NOT'
     *  Logic: '<S346>/OR'
     *  RelationalOperator: '<S322>/Comparison13'
     *  RelationalOperator: '<S322>/Comparison14'
     *  RelationalOperator: '<S322>/Comparison15'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S346>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_bj = ((VeTRGC_b_LOC_D) || ((((((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangePark) && (((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangeNeutral)) && (((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangeDrive)) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_bj)));

    /* End of Outputs for SubSystem: '<S322>/SignalLatchOnWithReset2' */

    /* Switch: '<S322>/Switch1' incorporates:
     *  Constant: '<S319>/Calib'
     */
    if (!KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S322>/Switch1' */
        VeTRGC_b_LOC_N = TRGR_ac_DW.UnitDelay_DSTATE_mm;
    }

    /* End of Switch: '<S322>/Switch1' */

    /* Logic: '<S322>/Logical8' incorporates:
     *  Constant: '<S337>/Constant'
     *  RelationalOperator: '<S322>/Comparison3'
     */
    VeTRGC_b_LOC_R = ((((uint32)TRGR_ac_DW.UnitDelay2_DSTATE) ==
                       CeTRGR_e_TransRangeReverse) && rtb_Comparison18_p);

    /* Outputs for Atomic SubSystem: '<S322>/SignalLatchOnWithReset3' */
    /* Logic: '<S347>/OR1' incorporates:
     *  Constant: '<S324>/Constant'
     *  Constant: '<S325>/Constant'
     *  Constant: '<S326>/Constant'
     *  Logic: '<S322>/Logical1'
     *  Logic: '<S347>/NOT'
     *  Logic: '<S347>/OR'
     *  RelationalOperator: '<S322>/Comparison2'
     *  RelationalOperator: '<S322>/Comparison5'
     *  RelationalOperator: '<S322>/Comparison6'
     *  RelationalOperator: '<S322>/Comparison9'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S347>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_eb = ((VeTRGC_b_LOC_R) || ((((((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangePark) && (((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangeNeutral)) && (((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangeReverse)) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_eb)));

    /* End of Outputs for SubSystem: '<S322>/SignalLatchOnWithReset3' */

    /* Switch: '<S322>/Switch' incorporates:
     *  Constant: '<S319>/Calib'
     *  Switch: '<S322>/Switch3'
     */
    if (!KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S322>/Switch' */
        VeTRGC_b_LOC_D = TRGR_ac_DW.UnitDelay_DSTATE_bj;

        /* Switch: '<S322>/Switch3' */
        VeTRGC_b_LOC_R = TRGR_ac_DW.UnitDelay_DSTATE_eb;
    }

    /* End of Switch: '<S322>/Switch' */

    /* Switch: '<S317>/Switch1' incorporates:
     *  Constant: '<S318>/Calib'
     *  Switch: '<S343>/Switch1'
     *  Switch: '<S343>/Switch2'
     *  Switch: '<S343>/Switch3'
     *  Switch: '<S343>/Switch4'
     */
    if (KeTRGR_b_DsblRngVldt)
    {
        /* RelationalOperator: '<S690>/Comparison1' incorporates:
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         *  Switch: '<S25>/Switch1'
         *  Switch: '<S702>/Switch1'
         */
        TRGR_ac_B.DataTypeConversion_e = VeTRGC_e_DrvReqRaw_WithSNA;
    }
    else if (VeTRGC_b_LOC_P)
    {
        /* RelationalOperator: '<S690>/Comparison1' incorporates:
         *  Constant: '<S336>/Constant'
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         *  Switch: '<S343>/Switch1'
         */
        TRGR_ac_B.DataTypeConversion_e = CeTRGR_e_TransRangePark;
    }
    else if (VeTRGC_b_LOC_N)
    {
        /* RelationalOperator: '<S690>/Comparison1' incorporates:
         *  Constant: '<S340>/Constant'
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         *  Switch: '<S343>/Switch1'
         *  Switch: '<S343>/Switch2'
         */
        TRGR_ac_B.DataTypeConversion_e = CeTRGR_e_TransRangeNeutral;
    }
    else if (VeTRGC_b_LOC_D)
    {
        /* RelationalOperator: '<S690>/Comparison1' incorporates:
         *  Constant: '<S329>/Constant'
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         *  Switch: '<S343>/Switch1'
         *  Switch: '<S343>/Switch2'
         *  Switch: '<S343>/Switch3'
         */
        TRGR_ac_B.DataTypeConversion_e = CeTRGR_e_TransRangeDrive;
    }
    else if (VeTRGC_b_LOC_R)
    {
        /* RelationalOperator: '<S690>/Comparison1' incorporates:
         *  Constant: '<S327>/Constant'
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         *  Switch: '<S343>/Switch1'
         *  Switch: '<S343>/Switch2'
         *  Switch: '<S343>/Switch3'
         *  Switch: '<S343>/Switch4'
         */
        TRGR_ac_B.DataTypeConversion_e = CeTRGR_e_TransRangeReverse;
    }
    else
    {
        /* RelationalOperator: '<S690>/Comparison1' incorporates:
         *  DataTypeConversion: '<S309>/DataTypeConversion'
         *  RelationalOperator: '<S322>/Comparison6'
         *  Switch: '<S25>/Switch1'
         *  Switch: '<S343>/Switch1'
         *  Switch: '<S343>/Switch2'
         *  Switch: '<S343>/Switch3'
         */
        TRGR_ac_B.DataTypeConversion_e = VeTRGC_e_DrvReqRaw_WithSNA;
    }

    /* End of Switch: '<S317>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S689>/EdgeRising' */
    /* Logic: '<S777>/AND' incorporates:
     *  Logic: '<S777>/OR1'
     *  UnitDelay: '<S777>/Unit Delay'
     */
    rtb_Logical1_hh = ((VeTRGI_b_ResetDiag) && (!TRGR_ac_DW.UnitDelay_DSTATE_hz));

    /* Update for UnitDelay: '<S777>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_hz = VeTRGI_b_ResetDiag;

    /* End of Outputs for SubSystem: '<S689>/EdgeRising' */

    /* DataStoreRead: '<S689>/DataStoreRead1' */
    rtb_DataStoreRead1 = TRGR_ac_DW.AeTRGR_y_PwrDwnSts;

    /* Outputs for Atomic SubSystem: '<S689>/EdgeFalling' */
    /* Logic: '<S776>/AND' incorporates:
     *  Logic: '<S776>/OR1'
     *  UnitDelay: '<S776>/Unit Delay'
     */
    rtb_AND_g5 = ((!VeTRGI_b_CntrlPwrHld) && (TRGR_ac_DW.UnitDelay_DSTATE_h3));

    /* Update for UnitDelay: '<S776>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_h3 = VeTRGI_b_CntrlPwrHld;

    /* End of Outputs for SubSystem: '<S689>/EdgeFalling' */

    /* Chart: '<S689>/Init_UnexpPwrDwn' incorporates:
     *  DataStoreRead: '<S689>/DataStoreRead1'
     */
    /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/Init_UnexpPwrDwn */
    /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/Init_UnexpPwrDwn */
    if (((uint32)TRGR_ac_DW.is_active_c24_TRGR_ac) == 0U)
    {
        /* Entry: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/Init_UnexpPwrDwn */
        TRGR_ac_DW.is_active_c24_TRGR_ac = 1U;

        /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/Init_UnexpPwrDwn */
        /* Transition: '<S783>:2' */
        if (((sint32)TRGR_ac_DW.AeTRGR_y_PwrDwnSts) == 0)
        {
            /* Transition: '<S783>:21' */
            TRGR_ac_DW.is_c24_TRGR_ac = TRGR_ac_IN_WakeUpDecision1;

            /* Entry 'WakeUpDecision1': '<S783>:3' */
            TRGR_ac_B.UnexpRst = false;
            TRGR_ac_B.VeTRGR_e_PwrDwnStat = 1U;

            /* Outputs for Function Call SubSystem: '<S689>/PwrDwnSts_EEPROM' */
            /* Event: '<S783>:16' */
            TRGR_ac_PwrDwnSts_EEPROM(TRGR_ac_B.VeTRGR_e_PwrDwnStat,
                &TRGR_ac_B.PwrDwnSts_EEPROM, &TRGR_ac_DW.AeTRGR_y_PwrDwnSts);

            /* End of Outputs for SubSystem: '<S689>/PwrDwnSts_EEPROM' */
        }
        else
        {
            if (((sint32)TRGR_ac_DW.AeTRGR_y_PwrDwnSts) != 0)
            {
                /* Transition: '<S783>:22' */
                TRGR_ac_DW.is_c24_TRGR_ac = TRGR_ac_IN_WakeUpDecision2;

                /* Entry 'WakeUpDecision2': '<S783>:4' */
                TRGR_ac_B.UnexpRst = true;
            }
        }
    }
    else
    {
        switch (TRGR_ac_DW.is_c24_TRGR_ac)
        {
          case TRGR_ac_IN_PowerDown:
            TRGR_ac_B.VeTRGR_e_PwrDwnStat = 0U;

            /* During 'PowerDown': '<S783>:17' */
            break;

          case TRGR_ac_IN_WakeUpDecision1:
            TRGR_ac_B.UnexpRst = false;
            TRGR_ac_B.VeTRGR_e_PwrDwnStat = 1U;

            /* During 'WakeUpDecision1': '<S783>:3' */
            /* Transition: '<S783>:19' */
            if (rtb_AND_g5)
            {
                /* Transition: '<S783>:9' */
                TRGR_ac_DW.is_c24_TRGR_ac = TRGR_ac_IN_PowerDown;

                /* Entry 'PowerDown': '<S783>:17' */
                TRGR_ac_B.VeTRGR_e_PwrDwnStat = 0U;

                /* Outputs for Function Call SubSystem: '<S689>/PwrDwnSts_EEPROM' */
                /* Event: '<S783>:16' */
                TRGR_ac_PwrDwnSts_EEPROM(TRGR_ac_B.VeTRGR_e_PwrDwnStat,
                    &TRGR_ac_B.PwrDwnSts_EEPROM, &TRGR_ac_DW.AeTRGR_y_PwrDwnSts);

                /* End of Outputs for SubSystem: '<S689>/PwrDwnSts_EEPROM' */
            }
            break;

          default:
            TRGR_ac_B.UnexpRst = true;

            /* During 'WakeUpDecision2': '<S783>:4' */
            /* Transition: '<S783>:20' */
            if (rtb_AND_g5)
            {
                /* Transition: '<S783>:9' */
                TRGR_ac_DW.is_c24_TRGR_ac = TRGR_ac_IN_PowerDown;

                /* Entry 'PowerDown': '<S783>:17' */
                TRGR_ac_B.VeTRGR_e_PwrDwnStat = 0U;

                /* Outputs for Function Call SubSystem: '<S689>/PwrDwnSts_EEPROM' */
                /* Event: '<S783>:16' */
                TRGR_ac_PwrDwnSts_EEPROM(TRGR_ac_B.VeTRGR_e_PwrDwnStat,
                    &TRGR_ac_B.PwrDwnSts_EEPROM, &TRGR_ac_DW.AeTRGR_y_PwrDwnSts);

                /* End of Outputs for SubSystem: '<S689>/PwrDwnSts_EEPROM' */
            }
            break;
        }
    }

    /* End of Chart: '<S689>/Init_UnexpPwrDwn' */

    /* Switch: '<S689>/Switch1' incorporates:
     *  Constant: '<S784>/Calib'
     */
    if (KeTRGR_b_Reset_Type)
    {
        /* Switch: '<S689>/Switch1' incorporates:
         *  Constant: '<S785>/Calib'
         *  RelationalOperator: '<S689>/Comparison1'
         */
        TRGR_ac_B.Switch1_p = (KeTRGR_y_UnexpRstCal != rtb_DataStoreRead1);
    }
    else
    {
        /* Switch: '<S689>/Switch1' */
        TRGR_ac_B.Switch1_p = TRGR_ac_B.UnexpRst;
    }

    /* End of Switch: '<S689>/Switch1' */

    /* RelationalOperator: '<S689>/Comparison2' incorporates:
     *  Constant: '<S782>/Constant'
     *  Switch: '<S15>/Switch67'
     */
    rtb_AND_g5 = (((uint32)VeTRGI_e_WEDLearningProcedure) == CeRTMR_e_WED_Active);

    /* Chart: '<S689>/ValidatedPRND_StateFlow' incorporates:
     *  Switch: '<S15>/Switch17'
     */
    /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/ValidatedPRND_StateFlow */
    /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/ValidatedPRND_StateFlow */
    if (((uint32)TRGR_ac_DW.is_active_c25_TRGR_ac) == 0U)
    {
        /* Entry: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/ValidatedPRND_StateFlow */
        TRGR_ac_DW.is_active_c25_TRGR_ac = 1U;

        /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ValidatedPRNDState/ValidatedPRND_StateFlow */
        /* Transition: '<S788>:395' */
        TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Init1;

        /* Entry 'Init1': '<S788>:394' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt26;
    }
    else
    {
        switch (TRGR_ac_DW.is_c25_TRGR_ac)
        {
          case TRGR_ac_IN_DriveToNeutral:
            /* During 'DriveToNeutral': '<S788>:194' */
            /* Transition: '<S788>:199' */
            /* Transition: '<S788>:201' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_DisEngage;

            /* Entry 'Neutral_DisEngage': '<S788>:48' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt21;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_DriveToPark:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt3;

            /* During 'DriveToPark': '<S788>:153' */
            /* Transition: '<S788>:166' */
            if ((!KeTRGR_b_WEDEquipped) || (!VeTRGI_b_WEDOpenFaulted))
            {
                /* Transition: '<S788>:169' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Engage;

                /* Entry 'Park_Engage': '<S788>:7' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt6;

                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlEngage;
                VeTRGC_t_PPawlTmr = 0.0F;
            }
            else
            {
                if ((KeTRGR_b_WEDEquipped) && (VeTRGI_b_WEDOpenFaulted))
                {
                    /* Transition: '<S788>:425' */
                    TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_WEDStatusCheck;

                    /* Entry 'WEDStatusCheck': '<S788>:424' */
                    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt27;
                    VeTRGC_t_WEDEngageTmr = 0.0F;
                }
            }
            break;

          case TRGR_ac_IN_DriveToReverse:
            /* During 'DriveToReverse': '<S788>:209' */
            /* Transition: '<S788>:216' */
            /* Transition: '<S788>:213' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Reverse_DisEngage;

            /* Entry 'Reverse_DisEngage': '<S788>:75' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt16;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_Drive_Confirm:
            /* During 'Drive_Confirm': '<S788>:37' */
            /* Transition: '<S788>:44' */
            /* Transition: '<S788>:46' */
            /* Transition: '<S788>:47' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

            /* Entry 'HoldState': '<S788>:4' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
            break;

          case TRGR_ac_IN_Drive_DisEngage:
            TRGR_ac_Drive_DisEngage(&rtb_Logical1_hh);
            break;

          case TRGR_ac_IN_HoldState:
            TRGR_ac_HoldState(&rtb_AND_g5);
            break;

          case TRGR_ac_IN_Init1:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt26;

            /* During 'Init1': '<S788>:394' */
            if (TRGR_ac_B.Switch1_p)
            {
                /* Transition: '<S788>:2' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Init2;

                /* Entry 'Init2': '<S788>:1' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt1;
                VeTRGC_t_InitTmr = 0.0F;
            }
            else if (((!TRGR_ac_B.Switch1_p) && ((VeTRGI_n_TOSRSpeed >
                        (-KeTRGR_n_TOSR_Spd_ParkThreshold)) &&
                       (VeTRGI_n_TOSRSpeed <= KeTRGR_n_TOSR_Spd_ParkThreshold)))
                     && ((VeTRGI_v_VehicleSpdmph > (-KeTRGR_v_Spd_ParkThreshold))
                         && (VeTRGI_v_VehicleSpdmph <=
                             KeTRGR_v_Spd_ParkThreshold)))
            {
                /* Transition: '<S788>:396' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Init_Engage;

                /* Entry 'Park_Init_Engage': '<S788>:322' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt24;

                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlEngage;
            }
            else
            {
                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
                VeTRGC_e_VldtdTransRngSt = CeTRGR_e_NoSelectionAvailable;
                VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_NoSelectionAvailable;
            }
            break;

          case TRGR_ac_IN_Init2:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt1;

            /* During 'Init2': '<S788>:1' */
            if (((VeTRGC_t_InitTmr >= KeTRGR_t_InitTmrTh) &&
                    ((VeTRGI_n_TOSRSpeed <= (-KeTRGR_n_TOSR_Spd_ParkThreshold)) ||
                     (VeTRGI_n_TOSRSpeed > KeTRGR_n_TOSR_Spd_ParkThreshold))) &&
                ((VeTRGI_v_VehicleSpdmph <= (-KeTRGR_v_Spd_ParkThreshold)) ||
                    (VeTRGI_v_VehicleSpdmph > KeTRGR_v_Spd_ParkThreshold)))
            {
                /* Transition: '<S788>:73' */
                /* Exit 'Init2': '<S788>:1' */
                VeTRGC_t_InitTmr = 0.0F;
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_Init;

                /* Entry 'Neutral_Init': '<S788>:340' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt25;
                VeTRGC_b_HCP_Reset = true;
            }
            else if (((VeTRGC_t_InitTmr >= KeTRGR_t_InitTmrTh) &&
                      ((VeTRGI_n_TOSRSpeed > (-KeTRGR_n_TOSR_Spd_ParkThreshold))
                       && (VeTRGI_n_TOSRSpeed <= KeTRGR_n_TOSR_Spd_ParkThreshold)))
                     && ((VeTRGI_v_VehicleSpdmph > (-KeTRGR_v_Spd_ParkThreshold))
                         && (VeTRGI_v_VehicleSpdmph <=
                             KeTRGR_v_Spd_ParkThreshold)))
            {
                /* Transition: '<S788>:6' */
                /* Exit 'Init2': '<S788>:1' */
                VeTRGC_t_InitTmr = 0.0F;
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Init_Engage;

                /* Entry 'Park_Init_Engage': '<S788>:322' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt24;

                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlEngage;
            }
            else
            {
                VeTRGC_t_InitTmr = VeTRGC_t_InitTmr + KeTRGR_t_dT;
            }
            break;

          case TRGR_ac_IN_NeutralToDrive:
            /* During 'NeutralToDrive': '<S788>:177' */
            /* Transition: '<S788>:181' */
            /* Transition: '<S788>:182' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Drive_DisEngage;

            /* Entry 'Drive_DisEngage': '<S788>:29' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt11;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_NeutralToPark:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt5;

            /* During 'NeutralToPark': '<S788>:161' */
            /* Transition: '<S788>:168' */
            if ((!KeTRGR_b_WEDEquipped) || (!VeTRGI_b_WEDOpenFaulted))
            {
                /* Transition: '<S788>:169' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Engage;

                /* Entry 'Park_Engage': '<S788>:7' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt6;

                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlEngage;
                VeTRGC_t_PPawlTmr = 0.0F;
            }
            else
            {
                if ((KeTRGR_b_WEDEquipped) && (VeTRGI_b_WEDOpenFaulted))
                {
                    /* Transition: '<S788>:425' */
                    TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_WEDStatusCheck;

                    /* Entry 'WEDStatusCheck': '<S788>:424' */
                    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt27;
                    VeTRGC_t_WEDEngageTmr = 0.0F;
                }
            }
            break;

          case TRGR_ac_IN_NeutralToReverse:
            /* During 'NeutralToReverse': '<S788>:211' */
            /* Transition: '<S788>:217' */
            /* Transition: '<S788>:213' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Reverse_DisEngage;

            /* Entry 'Reverse_DisEngage': '<S788>:75' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt16;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_Neutral_Confirm:
            /* During 'Neutral_Confirm': '<S788>:59' */
            /* Transition: '<S788>:66' */
            /* Transition: '<S788>:69' */
            /* Transition: '<S788>:70' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

            /* Entry 'HoldState': '<S788>:4' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
            break;

          case TRGR_ac_IN_Neutral_DisEngage:
            TRGR_ac_Neutral_DisEngage(&rtb_Logical1_hh);
            break;

          case TRGR_ac_IN_Neutral_Init:
            VeTRGC_b_HCP_Reset = true;

            /* During 'Neutral_Init': '<S788>:340' */
            /* Transition: '<S788>:383' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Init_DisEngage;

            /* Entry 'Park_Init_DisEngage': '<S788>:382' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt25;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            break;

          case TRGR_ac_IN_ParkToDrive:
            /* During 'ParkToDrive': '<S788>:175' */
            /* Transition: '<S788>:179' */
            /* Transition: '<S788>:182' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Drive_DisEngage;

            /* Entry 'Drive_DisEngage': '<S788>:29' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt11;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_ParkToNeutral:
            /* During 'ParkToNeutral': '<S788>:196' */
            /* Transition: '<S788>:200' */
            /* Transition: '<S788>:201' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_DisEngage;

            /* Entry 'Neutral_DisEngage': '<S788>:48' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt21;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_ParkToReverse:
            /* During 'ParkToReverse': '<S788>:210' */
            /* Transition: '<S788>:215' */
            /* Transition: '<S788>:213' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Reverse_DisEngage;

            /* Entry 'Reverse_DisEngage': '<S788>:75' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt16;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_Park_Confirm:
            /* During 'Park_Confirm': '<S788>:13' */
            /* Transition: '<S788>:24' */
            /* Transition: '<S788>:27' */
            /* Transition: '<S788>:174' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

            /* Entry 'HoldState': '<S788>:4' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
            break;

          case TRGR_ac_IN_Park_Engage:
            TRGR_ac_Park_Engage(&rtb_Logical1_hh);
            break;

          case TRGR_ac_IN_Park_Init_DisEngage:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt25;

            /* During 'Park_Init_DisEngage': '<S788>:382' */
            if ((((uint32)VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED) ||
                    (((uint32)VeTRGI_e_PPawlFdbck) ==
                     CePPCR_e_PPAWL_ZeroRefLrnComplete))
            {
                /* Transition: '<S788>:384' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_Confirm;

                /* Entry 'Neutral_Confirm': '<S788>:59' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt22;
                VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeNeutral;
                VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeNeutral;
            }
            else
            {
                if ((((VeTRGI_b_PPawlFlt_InhibitMtr) && (((uint32)
                        VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_UNKNOWN_Position))
                     || (VeTRGI_b_PPawlFlt_UnknownPos)) || rtb_Logical1_hh)
                {
                    /* Transition: '<S788>:386' */
                    /* Transition: '<S788>:387' */
                    /* Transition: '<S788>:318' */
                    /* Transition: '<S788>:281' */
                    /* Transition: '<S788>:314' */
                    TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Unknown_Position;

                    /* Entry 'Unknown_Position': '<S788>:270' */
                    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;
                    VeTRGC_e_VldtdTransRngSt = CeTRGR_e_TransRangeIllegal;
                    VeTRGC_e_CrntTrnsRngSt = CeTRGR_e_TransRangeIllegal;

                    /* RelationalOperator: '<S33>/Comparison2' */
                    VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlIdle;
                }
            }
            break;

          case TRGR_ac_IN_Park_Init_Engage:
            TRGR_ac_Park_Init_Engage();
            break;

          case TRGR_ac_IN_ReverseToDrive:
            /* During 'ReverseToDrive': '<S788>:176' */
            /* Transition: '<S788>:180' */
            /* Transition: '<S788>:182' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Drive_DisEngage;

            /* Entry 'Drive_DisEngage': '<S788>:29' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt11;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_ReverseToNeutral:
            /* During 'ReverseToNeutral': '<S788>:195' */
            /* Transition: '<S788>:198' */
            /* Transition: '<S788>:201' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Neutral_DisEngage;

            /* Entry 'Neutral_DisEngage': '<S788>:48' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt21;

            /* RelationalOperator: '<S33>/Comparison2' */
            VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlDisEngage;
            VeTRGC_t_PPawlTmr = 0.0F;
            break;

          case TRGR_ac_IN_ReverseToPark:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt4;

            /* During 'ReverseToPark': '<S788>:156' */
            /* Transition: '<S788>:167' */
            if ((!KeTRGR_b_WEDEquipped) || (!VeTRGI_b_WEDOpenFaulted))
            {
                /* Transition: '<S788>:169' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Engage;

                /* Entry 'Park_Engage': '<S788>:7' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt6;

                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlEngage;
                VeTRGC_t_PPawlTmr = 0.0F;
            }
            else
            {
                if ((KeTRGR_b_WEDEquipped) && (VeTRGI_b_WEDOpenFaulted))
                {
                    /* Transition: '<S788>:425' */
                    TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_WEDStatusCheck;

                    /* Entry 'WEDStatusCheck': '<S788>:424' */
                    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt27;
                    VeTRGC_t_WEDEngageTmr = 0.0F;
                }
            }
            break;

          case TRGR_ac_IN_Reverse_Confirm:
            /* During 'Reverse_Confirm': '<S788>:86' */
            /* Transition: '<S788>:95' */
            /* Transition: '<S788>:101' */
            /* Transition: '<S788>:102' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_HoldState;

            /* Entry 'HoldState': '<S788>:4' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt2;
            break;

          case TRGR_ac_IN_Reverse_DisEngage:
            TRGR_ac_Reverse_DisEngage(&rtb_Logical1_hh);
            break;

          case TRGR_ac_IN_Unknown_Position:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt23;

            /* During 'Unknown_Position': '<S788>:270' */
            if ((!VeTRGI_b_PPawlFlt_UnknownPos) &&
                    (!VeTRGI_b_PPawlFlt_InhibitMtr))
            {
                /* Transition: '<S788>:362' */
                /* Transition: '<S788>:372' */
                /* Transition: '<S788>:374' */
                /* Transition: '<S788>:375' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Init2;

                /* Entry 'Init2': '<S788>:1' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt1;
                VeTRGC_t_InitTmr = 0.0F;
            }
            break;

          case TRGR_ac_IN_Unknown_Position_1:
            /* During 'Unknown_Position_1': '<S788>:378' */
            /* Transition: '<S788>:380' */
            TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Init2;

            /* Entry 'Init2': '<S788>:1' */
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt1;
            VeTRGC_t_InitTmr = 0.0F;
            break;

          case TRGR_ac_IN_WEDLearningProcedureActive:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt28;

            /* During 'WEDLearningProcedureActive': '<S788>:427' */
            if (!rtb_AND_g5)
            {
                /* Transition: '<S788>:429' */
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_WEDStatusCheck;

                /* Entry 'WEDStatusCheck': '<S788>:424' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt27;
                VeTRGC_t_WEDEngageTmr = 0.0F;
            }
            break;

          default:
            VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt27;

            /* During 'WEDStatusCheck': '<S788>:424' */
            if ((!VeTRGI_b_WEDOpenFaulted) || ((((uint32)VeTRGI_e_EPB_HoldSts) ==
                  CePLTR_e_EPBHoldSts_APPLIED) && (VeTRGC_t_WEDEngageTmr >=
                    KeTRGR_t_WEDEngageTmrTh)))
            {
                /* Transition: '<S788>:426' */
                /* Exit 'WEDStatusCheck': '<S788>:424' */
                VeTRGC_t_WEDEngageTmr = 0.0F;
                TRGR_ac_DW.is_c25_TRGR_ac = TRGR_ac_IN_Park_Engage;

                /* Entry 'Park_Engage': '<S788>:7' */
                VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt6;

                /* RelationalOperator: '<S33>/Comparison2' */
                VeTRGC_e_PPawlCmnd = CeTRGR_e_PPawlEngage;
                VeTRGC_t_PPawlTmr = 0.0F;
            }
            else
            {
                VeTRGC_t_WEDEngageTmr = VeTRGC_t_WEDEngageTmr + KeTRGR_t_dT;
            }
            break;
        }
    }

    /* End of Chart: '<S689>/ValidatedPRND_StateFlow' */

    /* Switch: '<S794>/Switch1' incorporates:
     *  Constant: '<S789>/Constant'
     *  RelationalOperator: '<S690>/Comparison4'
     */
    if (((uint32)VeTRGC_e_VldtdTransRngSt) == CeTRGR_e_TransRangeDrive)
    {
        /* Switch: '<S795>/Switch1' incorporates:
         *  Constant: '<S790>/Constant'
         *  Constant: '<S792>/Constant'
         *  RelationalOperator: '<S690>/Comparison1'
         *  RelationalOperator: '<S690>/Comparison2'
         *  Switch: '<S795>/Switch2'
         */
        if (((uint32)TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeDrive)
        {
            /* Switch: '<S794>/Switch1' incorporates:
             *  Constant: '<S791>/Constant'
             *  Switch: '<S795>/Switch1'
             */
            VeTRGC_e_RawVldtdTransRngSt = CeTRGR_e_TransRangeDrive;
        }
        else if (((uint32)TRGR_ac_B.DataTypeConversion_e) ==
                 CeTRGR_e_TransRangeDrive1)
        {
            /* Switch: '<S795>/Switch2' incorporates:
             *  Constant: '<S793>/Constant'
             *  Switch: '<S794>/Switch1'
             *  Switch: '<S795>/Switch1'
             */
            VeTRGC_e_RawVldtdTransRngSt = CeTRGR_e_TransRangeDrive1;
        }
        else
        {
            /* Switch: '<S794>/Switch1' incorporates:
             *  Switch: '<S795>/Switch1'
             *  Switch: '<S795>/Switch2'
             */
            VeTRGC_e_RawVldtdTransRngSt = VeTRGC_e_VldtdTransRngSt;
        }

        /* End of Switch: '<S795>/Switch1' */
    }
    else
    {
        /* Switch: '<S794>/Switch1' */
        VeTRGC_e_RawVldtdTransRngSt = VeTRGC_e_VldtdTransRngSt;
    }

    /* End of Switch: '<S794>/Switch1' */

    /* If: '<S26>/If1' incorporates:
     *  Constant: '<S348>/Calib'
     */
    if (KeTRGR_b_EnableERSFunction)
    {
        /* Outputs for IfAction SubSystem: '<S26>/TRGC_ERSFunctionality' incorporates:
         *  ActionPort: '<S349>/ActionPort'
         */
        /* UnitDelay: '<S352>/delay1' */
        VeTRGR_e_DsrdOldERS = TRGR_ac_DW.delay1_DSTATE;

        /* Logic: '<S401>/AND13' incorporates:
         *  Constant: '<S451>/Constant'
         *  Constant: '<S452>/Constant'
         *  RelationalOperator: '<S401>/Comparison3'
         *  RelationalOperator: '<S401>/Comparison31'
         *  UnitDelay: '<S389>/delay5'
         *  UnitDelay: '<S401>/delay4'
         */
        rtb_AND_g5 = ((((uint32)tmpRead) == CeTRGR_e_ERSBttn_Minus) && (((uint32)
                        TRGR_ac_DW.delay4_DSTATE) == CeTRGR_e_ERSBttn_NotActvtd));

        /* Outputs for Atomic SubSystem: '<S401>/EdgeRising14' */
        /* Logic: '<S450>/AND' incorporates:
         *  Logic: '<S450>/OR1'
         *  UnitDelay: '<S450>/Unit Delay'
         */
        rtb_Logical1_hh = (rtb_AND_g5 && (!TRGR_ac_DW.UnitDelay_DSTATE_di));

        /* Update for UnitDelay: '<S450>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_di = rtb_AND_g5;

        /* End of Outputs for SubSystem: '<S401>/EdgeRising14' */

        /* UnitDelay: '<S415>/delay3' incorporates:
         *  UnitDelay: '<S389>/delay5'
         *  UnitDelay: '<S401>/delay4'
         */
        TRGR_ac_DW.delay4_DSTATE = TRGR_ac_DW.delay3_DSTATE;

        /* Logic: '<S415>/AND12' incorporates:
         *  Constant: '<S464>/Constant'
         *  Constant: '<S465>/Constant'
         *  RelationalOperator: '<S415>/Comparison1'
         *  RelationalOperator: '<S415>/Comparison30'
         *  UnitDelay: '<S389>/delay5'
         *  UnitDelay: '<S401>/delay4'
         */
        rtb_AND12 = ((((uint32)tmpRead) == CeTRGR_e_ERSBttn_Plus) && (((uint32)
                       TRGR_ac_DW.delay4_DSTATE) == CeTRGR_e_ERSBttn_NotActvtd));

        /* Outputs for Atomic SubSystem: '<S415>/EdgeRising2' */
        /* Logic: '<S463>/AND' incorporates:
         *  Logic: '<S463>/OR1'
         *  UnitDelay: '<S463>/Unit Delay'
         */
        rtb_AND_g5 = (rtb_AND12 && (!TRGR_ac_DW.UnitDelay_DSTATE_in));

        /* Update for UnitDelay: '<S463>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_in = rtb_AND12;

        /* End of Outputs for SubSystem: '<S415>/EdgeRising2' */

        /* RelationalOperator: '<S389>/Comparison5' incorporates:
         *  RelationalOperator: '<S352>/Comparison2'
         *  RelationalOperator: '<S391>/Comparison8'
         *  RelationalOperator: '<S393>/Comparison9'
         *  RelationalOperator: '<S401>/Comparison2'
         *  RelationalOperator: '<S415>/Comparison4'
         *  Switch: '<S794>/Switch1'
         */
        VeTRGC_e_VldtdTransRngStateERS = VeTRGC_e_RawVldtdTransRngSt;

        /* RelationalOperator: '<S389>/Comparison5' incorporates:
         *  Constant: '<S421>/Constant'
         */
        VeTRGC_b_PRNDL_D6 = (((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
                             CeTRGR_e_TransRangeDrive);

        /* RelationalOperator: '<S389>/Comparison7' incorporates:
         *  Constant: '<S419>/Constant'
         */
        VeTRGC_b_TapDown = (((uint32)tmpRead) == CeTRGR_e_ERSBttn_Minus);

        /* UnitDelay: '<S389>/delay5' incorporates:
         *  UnitDelay: '<S401>/delay4'
         */
        TRGR_ac_DW.delay4_DSTATE = TRGR_ac_DW.delay5_DSTATE;

        /* Logic: '<S389>/AND14' incorporates:
         *  Constant: '<S420>/Constant'
         *  RelationalOperator: '<S389>/Comparison32'
         *  UnitDelay: '<S389>/delay5'
         *  UnitDelay: '<S401>/delay4'
         */
        rtb_AND12 = ((VeTRGC_b_TapDown) && (((uint32)TRGR_ac_DW.delay4_DSTATE) ==
                      CeTRGR_e_ERSBttn_NotActvtd));

        /* Outputs for Atomic SubSystem: '<S389>/EdgeRising1' */
        /* Logic: '<S418>/OR1' incorporates:
         *  UnitDelay: '<S418>/Unit Delay'
         */
        rtb_OR1_ct = !TRGR_ac_DW.UnitDelay_DSTATE_ej;

        /* Update for UnitDelay: '<S418>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_ej = rtb_AND12;

        /* Logic: '<S389>/AND3' incorporates:
         *  Constant: '<S389>/ConstantValue8'
         *  Logic: '<S418>/AND'
         *  RelationalOperator: '<S389>/Comparison15'
         */
        VeTRGC_b_TapDownNext = (((VeTRGC_b_PRNDL_D6) && (rtb_AND12 && rtb_OR1_ct))
                                && (VeTRGR_e_DsrdOldERS != 0));

        /* End of Outputs for SubSystem: '<S389>/EdgeRising1' */

        /* RelationalOperator: '<S391>/Comparison20' incorporates:
         *  Constant: '<S427>/Constant'
         */
        rtb_OR1_ct = (((uint32)tmpRead) == CeTRGR_e_ERSBttn_EXIT);

        /* Outputs for Atomic SubSystem: '<S391>/EdgeRising5' */
        /* Logic: '<S426>/AND' incorporates:
         *  Logic: '<S426>/OR1'
         *  UnitDelay: '<S426>/Unit Delay'
         */
        rtb_AND12 = (rtb_OR1_ct && (!TRGR_ac_DW.UnitDelay_DSTATE_c2));

        /* Update for UnitDelay: '<S426>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_c2 = rtb_OR1_ct;

        /* End of Outputs for SubSystem: '<S391>/EdgeRising5' */

        /* RelationalOperator: '<S391>/Comparison19' incorporates:
         *  Constant: '<S429>/Constant'
         */
        rtb_Comparison18_p = (((uint32)tmpRead) == CeTRGR_e_ERS_PLHD);

        /* Outputs for Atomic SubSystem: '<S391>/EdgeRising4' */
        /* Logic: '<S425>/AND' incorporates:
         *  Logic: '<S425>/OR1'
         *  UnitDelay: '<S425>/Unit Delay'
         */
        rtb_OR1_ct = (rtb_Comparison18_p && (!TRGR_ac_DW.UnitDelay_DSTATE_mw));

        /* Update for UnitDelay: '<S425>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_mw = rtb_Comparison18_p;

        /* End of Outputs for SubSystem: '<S391>/EdgeRising4' */

        /* RelationalOperator: '<S393>/Comparison11' incorporates:
         *  Constant: '<S434>/Constant'
         */
        rtb_Comparison11_oj = (((uint32)tmpRead) == CeTRGR_e_ERS_MIHD);

        /* Outputs for Atomic SubSystem: '<S393>/EdgeRising7' */
        /* Logic: '<S433>/AND' incorporates:
         *  Logic: '<S433>/OR1'
         *  UnitDelay: '<S433>/Unit Delay'
         */
        rtb_Comparison18_p = (rtb_Comparison11_oj &&
                              (!TRGR_ac_DW.UnitDelay_DSTATE_dib));

        /* Update for UnitDelay: '<S433>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_dib = rtb_Comparison11_oj;

        /* End of Outputs for SubSystem: '<S393>/EdgeRising7' */

        /* Outputs for Function Call SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
        /* RelationalOperator: '<S352>/Comparison6' incorporates:
         *  Constant: '<S399>/Constant'
         *  Inport: '<Root>/VePLTR_e_TowHaulMode'
         *  Inport: '<S15>/VePLTR_e_TowHaulMode'
         */
        rtb_Comparison11_oj = (((uint32)tmpRead_1) == CePLTR_e_Towing_MD_RQ_ON);

        /* End of Outputs for SubSystem: '<S12>/TRGI_ProcessInternalInputs' */

        /* Product: '<S414>/Product' incorporates:
         *  Constant: '<S458>/Calib'
         */
        VeTRGR_n_ERS1Ni = VeTRGI_n_TOSRSpeed * KeTRGR_r_ERS1_GearRatio;

        /* Outputs for Function Call SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
        /* MinMax: '<S414>/MinMax1' incorporates:
         *  Inport: '<S15>/VeOSMR_n_InputSpdMaxM1'
         *  Inport: '<S15>/VeOSMR_n_InputSpdMaxM2'
         */
        rtb_MinMax1 = fmaxf(rtb_Subtraction2, rtb_MinMax1);

        /* End of Outputs for SubSystem: '<S12>/TRGI_ProcessInternalInputs' */

        /* RelationalOperator: '<S414>/Comparison1' */
        VeTRGC_b_ERS1Avail = (VeTRGR_n_ERS1Ni < rtb_MinMax1);

        /* Product: '<S414>/Product2' incorporates:
         *  Constant: '<S459>/Calib'
         */
        VeTRGR_n_ERS2Ni = VeTRGI_n_TOSRSpeed * KeTRGR_r_ERS2_GearRatio;

        /* RelationalOperator: '<S414>/Comparison3' */
        VeTRGC_b_ERS2Available = (VeTRGR_n_ERS2Ni < rtb_MinMax1);

        /* Product: '<S414>/Product3' incorporates:
         *  Constant: '<S460>/Calib'
         */
        VeTRGR_n_ERS3Ni = VeTRGI_n_TOSRSpeed * KeTRGR_r_ERS3_GearRatio;

        /* RelationalOperator: '<S414>/Comparison5' */
        VeTRGC_b_ERS3Available = (VeTRGR_n_ERS3Ni < rtb_MinMax1);

        /* Product: '<S414>/Product4' incorporates:
         *  Constant: '<S461>/Calib'
         */
        VeTRGR_n_ERS4Ni = VeTRGI_n_TOSRSpeed * KeTRGR_r_ERS4_GearRatio;

        /* RelationalOperator: '<S414>/Comparison7' */
        VeTRGC_b_ERS4Available = (VeTRGR_n_ERS4Ni < rtb_MinMax1);

        /* Product: '<S414>/Product5' incorporates:
         *  Constant: '<S462>/Calib'
         */
        VeTRGR_n_ERS5Ni = VeTRGI_n_TOSRSpeed * KeTRGR_r_ERS5_GearRatio;

        /* RelationalOperator: '<S414>/Comparison9' */
        VeTRGC_b_ERS5Available = (VeTRGR_n_ERS5Ni < rtb_MinMax1);

        /* If: '<S352>/If3' incorporates:
         *  Constant: '<S393>/ConstantValue9'
         *  Constant: '<S401>/ConstantValue1'
         *  Constant: '<S415>/ConstantValue7'
         *  Constant: '<S428>/Constant'
         *  Constant: '<S435>/Constant'
         *  Constant: '<S453>/Constant'
         *  Constant: '<S466>/Constant'
         *  Inport: '<S15>/VeTRGR_b_ESR_SW_FA'
         *  Logic: '<S391>/AND9'
         *  Logic: '<S393>/AND4'
         *  Logic: '<S401>/AND1'
         *  Logic: '<S415>/AND2'
         *  RelationalOperator: '<S391>/Comparison8'
         *  RelationalOperator: '<S393>/Comparison16'
         *  RelationalOperator: '<S393>/Comparison9'
         *  RelationalOperator: '<S401>/Comparison10'
         *  RelationalOperator: '<S401>/Comparison2'
         *  RelationalOperator: '<S415>/Comparison12'
         *  RelationalOperator: '<S415>/Comparison4'
         */
        if (((((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
                CeTRGR_e_TransRangeDrive) && (VeTRGR_e_DsrdOldERS == 0)) &&
                rtb_Logical1_hh)
        {
            /* Outputs for IfAction SubSystem: '<S352>/FirstTapDown' incorporates:
             *  ActionPort: '<S400>/ActionPort'
             */
            /* Outputs for Function Call SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
            /* Chart: '<S400>/CauseNi_Increase_FeelsLikeDownshift' incorporates:
             *  Constant: '<S398>/Constant'
             *  Constant: '<S439>/Calib'
             *  Constant: '<S440>/Calib'
             *  Constant: '<S441>/Calib'
             *  Constant: '<S442>/Calib'
             *  Constant: '<S444>/Calib'
             *  Constant: '<S446>/Calib'
             *  Constant: '<S448>/Calib'
             *  Inport: '<Root>/VeESSR_e_EngStartStopSt'
             *  Inport: '<S15>/VeESSR_e_EngStartStopSt'
             *  Inport: '<S15>/VeTISR_n_InputSpeed'
             *  RelationalOperator: '<S352>/Equal'
             */
            /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/FirstTapDown/CauseNi_Increase_FeelsLikeDownshift */
            /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/FirstTapDown/CauseNi_Increase_FeelsLikeDownshift */
            /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/FirstTapDown/CauseNi_Increase_FeelsLikeDownshift */
            /* Transition: '<S436>:7' */
            if (((uint32)tmpRead_0) == CeESSR_e_EngRunning)
            {
                /* Transition: '<S436>:134' */
                /* Transition: '<S436>:63' */
                /* Transition: '<S436>:27' */
                /* Transition: '<S436>:25' */
                /* Transition: '<S436>:22' */
                /* Transition: '<S436>:19' */
                if ((rtb_Switch_d3 < (VeTRGR_n_ERS1Ni -
                                      KeTRGR_n_NiDelta4DetectCurrentERS)) &&
                        (VeTRGI_n_TOSRSpeed < KeTRGR_n_NoERS1EngOn))
                {
                    /* Transition: '<S436>:15' */
                    /* Transition: '<S436>:16' */
                    /* Transition: '<S436>:17' */
                    TRGR_ac_B.DsrdERS = 1;

                    /* Transition: '<S436>:2' */
                }
                else
                {
                    /* Transition: '<S436>:136' */
                    TRGR_ac_B.DsrdERS = 1;
                }
            }
            else
            {
                /* Transition: '<S436>:31' */
                /* Transition: '<S436>:34' */
                if (VeTRGI_n_TOSRSpeed < KeTRGR_n_NoERS1EngOff)
                {
                    /* Transition: '<S436>:35' */
                    /* Transition: '<S436>:36' */
                    TRGR_ac_B.DsrdERS = 1;

                    /* Transition: '<S436>:47' */
                    /* Transition: '<S436>:48' */
                    /* Transition: '<S436>:49' */
                    /* Transition: '<S436>:59' */
                    /* Transition: '<S436>:60' */
                    /* Transition: '<S436>:28' */
                }
                else
                {
                    /* Transition: '<S436>:39' */
                    if ((VeTRGI_n_TOSRSpeed < KeTRGR_n_NoERS2EngOff) &&
                            (VeTRGI_n_TOSRSpeed > KeTRGR_n_NoERS1EngOff))
                    {
                        /* Transition: '<S436>:38' */
                        /* Transition: '<S436>:37' */
                        TRGR_ac_B.DsrdERS = 2;

                        /* Transition: '<S436>:48' */
                        /* Transition: '<S436>:49' */
                        /* Transition: '<S436>:59' */
                        /* Transition: '<S436>:60' */
                        /* Transition: '<S436>:28' */
                    }
                    else
                    {
                        /* Transition: '<S436>:42' */
                        if ((VeTRGI_n_TOSRSpeed < KeTRGR_n_NoERS3EngOff) &&
                                (VeTRGI_n_TOSRSpeed > KeTRGR_n_NoERS2EngOff))
                        {
                            /* Transition: '<S436>:41' */
                            /* Transition: '<S436>:40' */
                            TRGR_ac_B.DsrdERS = 3;

                            /* Transition: '<S436>:49' */
                            /* Transition: '<S436>:59' */
                            /* Transition: '<S436>:60' */
                            /* Transition: '<S436>:28' */
                        }
                        else
                        {
                            /* Transition: '<S436>:45' */
                            if ((VeTRGI_n_TOSRSpeed < KeTRGR_n_NoERS4EngOff) &&
                                    (VeTRGI_n_TOSRSpeed > KeTRGR_n_NoERS3EngOff))
                            {
                                /* Transition: '<S436>:44' */
                                /* Transition: '<S436>:43' */
                                TRGR_ac_B.DsrdERS = 4;

                                /* Transition: '<S436>:59' */
                                /* Transition: '<S436>:60' */
                                /* Transition: '<S436>:28' */
                            }
                            else
                            {
                                /* Transition: '<S436>:50' */
                                if ((VeTRGI_n_TOSRSpeed < KeTRGR_n_NoERS5EngOff)
                                    && (VeTRGI_n_TOSRSpeed >
                                        KeTRGR_n_NoERS4EngOff))
                                {
                                    /* Transition: '<S436>:52' */
                                    /* Transition: '<S436>:51' */
                                    TRGR_ac_B.DsrdERS = 5;

                                    /* Transition: '<S436>:60' */
                                    /* Transition: '<S436>:28' */
                                }
                                else
                                {
                                    /* Transition: '<S436>:58' */
                                    if (VeTRGI_n_TOSRSpeed >
                                            KeTRGR_n_NoERS5EngOff)
                                    {
                                        /* Transition: '<S436>:56' */
                                        /* Transition: '<S436>:57' */
                                        TRGR_ac_B.DsrdERS = 6;

                                        /* Transition: '<S436>:28' */
                                    }
                                }
                            }
                        }
                    }
                }
            }

            /* End of Chart: '<S400>/CauseNi_Increase_FeelsLikeDownshift' */
            /* End of Outputs for SubSystem: '<S12>/TRGI_ProcessInternalInputs' */

            /* Switch: '<S437>/Switch1' incorporates:
             *  Constant: '<S438>/Calib'
             *  Constant: '<S448>/Calib'
             *  Constant: '<S449>/Calib'
             *  Logic: '<S400>/Logical'
             *  Logic: '<S400>/Logical1'
             *  RelationalOperator: '<S400>/Comparison'
             *  RelationalOperator: '<S400>/Comparison1'
             *  Switch: '<S400>/Switch'
             *  UnitDelay: '<S352>/delay1'
             */
            if (rtb_Comparison11_oj)
            {
                /* Switch: '<S400>/Switch1' incorporates:
                 *  Constant: '<S400>/ConstantValue4'
                 *  Constant: '<S438>/Calib'
                 *  Constant: '<S447>/Calib'
                 *  Logic: '<S400>/Logical3'
                 *  RelationalOperator: '<S400>/Comparison2'
                 *  UnitDelay: '<S352>/delay1'
                 */
                if ((VeTRGI_n_TOSRSpeed > KeTRGR_n_NoERS4EngOn) &&
                        (KeTRGR_b_ERSReduce))
                {
                    TRGR_ac_DW.delay1_DSTATE = 4;
                }
                else
                {
                    TRGR_ac_DW.delay1_DSTATE = TRGR_ac_B.DsrdERS;
                }

                /* End of Switch: '<S400>/Switch1' */
            }
            else if (((VeTRGI_n_TOSRSpeed > KeTRGR_n_NoERS5EngOn) ||
                      (VeTRGI_n_TOSRSpeed > KeTRGR_n_NoERS5EngOff)) &&
                     (KeTRGR_b_ERSReduce))
            {
                /* Switch: '<S400>/Switch' incorporates:
                 *  Constant: '<S400>/ConstantValue3'
                 *  UnitDelay: '<S352>/delay1'
                 */
                TRGR_ac_DW.delay1_DSTATE = 5;
            }
            else
            {
                TRGR_ac_DW.delay1_DSTATE = TRGR_ac_B.DsrdERS;
            }

            /* End of Switch: '<S437>/Switch1' */

            /* Merge: '<S352>/Merge1' incorporates:
             *  Constant: '<S400>/ConstantValue'
             *  SignalConversion generated from: '<S400>/DbgIf'
             */
            VeTRGC_k_DbgIf = 1.0F;

            /* Merge: '<S352>/Merge2' incorporates:
             *  Constant: '<S400>/FALSEConstant'
             *  SignalConversion generated from: '<S400>/SpeedLimited'
             */
            VeTRGC_b_SpeedLimited = false;

            /* End of Outputs for SubSystem: '<S352>/FirstTapDown' */
        }
        else if (((((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
                   CeTRGR_e_TransRangeDrive) && (VeTRGR_e_DsrdOldERS != 0)) &&
                 rtb_AND_g5)
        {
            /* Outputs for IfAction SubSystem: '<S352>/UpshiftByTapping_ExitRngLmt' incorporates:
             *  ActionPort: '<S416>/ActionPort'
             */
            /* Chart: '<S416>/IncreaseERSBy1_AndExitRngLmtAtEnd' */
            /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/UpshiftByTapping_ExitRngLmt/IncreaseERSBy1_AndExitRngLmtAtEnd */
            /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/UpshiftByTapping_ExitRngLmt/IncreaseERSBy1_AndExitRngLmtAtEnd */
            /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/UpshiftByTapping_ExitRngLmt/IncreaseERSBy1_AndExitRngLmtAtEnd */
            /* Transition: '<S468>:14' */
            switch (VeTRGR_e_DsrdOldERS)
            {
              case 1:
                /* Transition: '<S468>:3' */
                /* Transition: '<S468>:17' */
                TRGR_ac_DW.delay1_DSTATE = 2;

                /* Transition: '<S468>:11' */
                /* Transition: '<S468>:7' */
                /* Transition: '<S468>:10' */
                /* Transition: '<S468>:23' */
                /* Transition: '<S468>:26' */
                break;

              case 2:
                /* Transition: '<S468>:4' */
                /* Transition: '<S468>:1' */
                /* Transition: '<S468>:13' */
                TRGR_ac_DW.delay1_DSTATE = 3;

                /* Transition: '<S468>:7' */
                /* Transition: '<S468>:10' */
                /* Transition: '<S468>:23' */
                /* Transition: '<S468>:26' */
                break;

              case 3:
                /* Transition: '<S468>:5' */
                /* Transition: '<S468>:20' */
                /* Transition: '<S468>:2' */
                TRGR_ac_DW.delay1_DSTATE = 4;

                /* Transition: '<S468>:10' */
                /* Transition: '<S468>:23' */
                /* Transition: '<S468>:26' */
                break;

              case 4:
                /* Transition: '<S468>:6' */
                /* Transition: '<S468>:16' */
                /* Transition: '<S468>:19' */
                TRGR_ac_DW.delay1_DSTATE = 5;

                /* Transition: '<S468>:23' */
                /* Transition: '<S468>:26' */
                break;

              case 5:
                /* Transition: '<S468>:9' */
                /* Transition: '<S468>:18' */
                /* Transition: '<S468>:8' */
                TRGR_ac_DW.delay1_DSTATE = 6;

                /* Transition: '<S468>:26' */
                break;

              case 6:
                /* Transition: '<S468>:24' */
                /* Transition: '<S468>:22' */
                /* Transition: '<S468>:21' */
                TRGR_ac_DW.delay1_DSTATE = 0;
                break;

              default:
                /* Transition: '<S468>:15' */
                break;
            }

            /* End of Chart: '<S416>/IncreaseERSBy1_AndExitRngLmtAtEnd' */

            /* Switch: '<S467>/Switch1' incorporates:
             *  Constant: '<S416>/ConstantValue1'
             *  Constant: '<S469>/Calib'
             *  Logic: '<S416>/Logical'
             *  RelationalOperator: '<S416>/Comparison4'
             *  Switch: '<S416>/Switch'
             */
            if (rtb_Comparison11_oj)
            {
                /* Switch: '<S416>/Switch1' incorporates:
                 *  Constant: '<S416>/ConstantValue6'
                 *  Constant: '<S416>/ConstantValue7'
                 *  Constant: '<S469>/Calib'
                 *  Logic: '<S416>/Logical1'
                 *  RelationalOperator: '<S416>/Comparison2'
                 *  UnitDelay: '<S352>/delay1'
                 */
                if ((TRGR_ac_DW.delay1_DSTATE == 5) && (KeTRGR_b_ERSReduce))
                {
                    TRGR_ac_DW.delay1_DSTATE = 0;
                }

                /* End of Switch: '<S416>/Switch1' */
            }
            else
            {
                if ((TRGR_ac_DW.delay1_DSTATE == 6) && (KeTRGR_b_ERSReduce))
                {
                    /* Switch: '<S416>/Switch' incorporates:
                     *  Constant: '<S416>/ConstantValue3'
                     *  UnitDelay: '<S352>/delay1'
                     */
                    TRGR_ac_DW.delay1_DSTATE = 0;
                }
            }

            /* End of Switch: '<S467>/Switch1' */

            /* Merge: '<S352>/Merge1' incorporates:
             *  Constant: '<S416>/ConstantValue'
             *  SignalConversion generated from: '<S416>/DbgIf'
             */
            VeTRGC_k_DbgIf = 2.0F;

            /* Merge: '<S352>/Merge2' incorporates:
             *  Constant: '<S416>/FALSEConstant'
             *  SignalConversion generated from: '<S416>/SpeedLimited'
             */
            VeTRGC_b_SpeedLimited = false;

            /* End of Outputs for SubSystem: '<S352>/UpshiftByTapping_ExitRngLmt' */
        }
        else if (VeTRGC_b_TapDownNext)
        {
            /* Outputs for IfAction SubSystem: '<S352>/DownshiftByTapping' incorporates:
             *  ActionPort: '<S390>/ActionPort'
             */
            /* Outputs for Function Call SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
            /* RelationalOperator: '<S390>/Comparison2' incorporates:
             *  Constant: '<S423>/Calib'
             *  Inport: '<S15>/VeTISR_n_InputSpeed'
             */
            rtb_Logical1_hh = (rtb_Switch_d3 < KeTRGR_n_MaxNiSpd);

            /* End of Outputs for SubSystem: '<S12>/TRGI_ProcessInternalInputs' */

            /* Chart: '<S390>/CauseNi_Increase_FeelsLikeDownshift' */
            /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/DownshiftByTapping/CauseNi_Increase_FeelsLikeDownshift */
            /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/DownshiftByTapping/CauseNi_Increase_FeelsLikeDownshift */
            /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/DownshiftByTapping/CauseNi_Increase_FeelsLikeDownshift */
            /* Transition: '<S422>:16' */
            if ((VeTRGR_e_DsrdOldERS == 6) && ((VeTRGC_b_ERS5Available) &&
                    rtb_Logical1_hh))
            {
                /* Transition: '<S422>:21' */
                /* Transition: '<S422>:25' */
                /* Transition: '<S422>:20' */
                TRGR_ac_DW.delay1_DSTATE = 5;

                /* Transition: '<S422>:1' */
                /* Transition: '<S422>:15' */
                /* Transition: '<S422>:12' */
                /* Transition: '<S422>:7' */
                /* Transition: '<S422>:6' */
            }
            else
            {
                /* Transition: '<S422>:22' */
                if ((VeTRGR_e_DsrdOldERS == 5) && ((VeTRGC_b_ERS4Available) &&
                        rtb_Logical1_hh))
                {
                    /* Transition: '<S422>:23' */
                    /* Transition: '<S422>:26' */
                    /* Transition: '<S422>:8' */
                    TRGR_ac_DW.delay1_DSTATE = 4;

                    /* Transition: '<S422>:15' */
                    /* Transition: '<S422>:12' */
                    /* Transition: '<S422>:7' */
                    /* Transition: '<S422>:6' */
                }
                else
                {
                    /* Transition: '<S422>:24' */
                    if ((VeTRGR_e_DsrdOldERS == 4) && ((VeTRGC_b_ERS3Available) &&
                         rtb_Logical1_hh))
                    {
                        /* Transition: '<S422>:9' */
                        /* Transition: '<S422>:27' */
                        /* Transition: '<S422>:2' */
                        TRGR_ac_DW.delay1_DSTATE = 3;

                        /* Transition: '<S422>:12' */
                        /* Transition: '<S422>:7' */
                        /* Transition: '<S422>:6' */
                    }
                    else
                    {
                        /* Transition: '<S422>:3' */
                        if ((VeTRGR_e_DsrdOldERS == 3) &&
                                ((VeTRGC_b_ERS2Available) && rtb_Logical1_hh))
                        {
                            /* Transition: '<S422>:13' */
                            /* Transition: '<S422>:4' */
                            /* Transition: '<S422>:10' */
                            TRGR_ac_DW.delay1_DSTATE = 2;

                            /* Transition: '<S422>:7' */
                            /* Transition: '<S422>:6' */
                        }
                        else
                        {
                            /* Transition: '<S422>:11' */
                            if (VeTRGR_e_DsrdOldERS == 2)
                            {
                                /* Transition: '<S422>:17' */
                                if ((VeTRGC_b_ERS1Avail) && rtb_Logical1_hh)
                                {
                                    /* Transition: '<S422>:28' */
                                    /* Transition: '<S422>:14' */
                                    TRGR_ac_DW.delay1_DSTATE = 1;

                                    /* Transition: '<S422>:6' */
                                }
                                else if (VeTRGR_e_DsrdOldERS == 1)
                                {
                                    /* Transition: '<S422>:30' */
                                    /* Transition: '<S422>:29' */
                                    TRGR_ac_DW.delay1_DSTATE = 1;
                                }
                                else
                                {
                                    /* Transition: '<S422>:18' */
                                }
                            }
                            else
                            {
                                /* Transition: '<S422>:18' */
                            }
                        }
                    }
                }
            }

            /* End of Chart: '<S390>/CauseNi_Increase_FeelsLikeDownshift' */

            /* Merge: '<S352>/Merge2' incorporates:
             *  RelationalOperator: '<S390>/Comparison4'
             *  Switch: '<S390>/Switch'
             */
            VeTRGC_b_SpeedLimited = (TRGR_ac_DW.delay1_DSTATE ==
                VeTRGR_e_DsrdOldERS);

            /* Merge: '<S352>/Merge1' incorporates:
             *  Constant: '<S390>/ConstantValue'
             *  SignalConversion generated from: '<S390>/DbgIf'
             */
            VeTRGC_k_DbgIf = 3.0F;

            /* End of Outputs for SubSystem: '<S352>/DownshiftByTapping' */
        }
        else
        {
            /* Outputs for Function Call SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
            if ((((((uint32)VeTRGC_e_VldtdTransRngStateERS) !=
                    CeTRGR_e_TransRangeDrive) || rtb_AND12) || rtb_OR1_ct) ||
                    rtb_AND_p1)
            {
                /* Outputs for IfAction SubSystem: '<S352>/PRNDL_PRN_ERSExit' incorporates:
                 *  ActionPort: '<S406>/ActionPort'
                 */
                /* Gain: '<S454>/Gain' incorporates:
                 *  Constant: '<S352>/ConstantValue10'
                 *  UnitDelay: '<S352>/delay1'
                 */
                TRGR_ac_DW.delay1_DSTATE = 0;

                /* Merge: '<S352>/Merge1' incorporates:
                 *  Constant: '<S406>/ConstantValue'
                 *  SignalConversion generated from: '<S406>/DbgIf'
                 */
                VeTRGC_k_DbgIf = 4.0F;

                /* Merge: '<S352>/Merge2' incorporates:
                 *  Constant: '<S406>/FALSEConstant'
                 *  SignalConversion generated from: '<S406>/SpeedLimited'
                 */
                VeTRGC_b_SpeedLimited = false;

                /* End of Outputs for SubSystem: '<S352>/PRNDL_PRN_ERSExit' */
            }
            else if (((((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
                       CeTRGR_e_TransRangeDrive) && rtb_Comparison18_p) &&
                     (VeTRGR_e_DsrdOldERS != 0))
            {
                /* Outputs for IfAction SubSystem: '<S352>/ERS_MIHLD' incorporates:
                 *  ActionPort: '<S392>/ActionPort'
                 */
                /* RelationalOperator: '<S392>/Comparison2' incorporates:
                 *  Constant: '<S432>/Calib'
                 *  Inport: '<S15>/VeTISR_n_InputSpeed'
                 */
                rtb_Logical1_hh = (rtb_Switch_d3 < KeTRGR_n_MaxNiSpd);

                /* Chart: '<S392>/Feels_like_downshift' */
                /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/ERS_MIHLD/Feels_like_downshift */
                /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/ERS_MIHLD/Feels_like_downshift */
                /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/ERS_MIHLD/Feels_like_downshift */
                /* Transition: '<S430>:21' */
                if ((VeTRGC_b_ERS1Avail) && rtb_Logical1_hh)
                {
                    /* Transition: '<S430>:7' */
                    /* Transition: '<S430>:11' */
                    TRGR_ac_DW.delay1_DSTATE = 1;

                    /* Transition: '<S430>:13' */
                    /* Transition: '<S430>:5' */
                    /* Transition: '<S430>:14' */
                    /* Transition: '<S430>:3' */
                }
                else
                {
                    /* Transition: '<S430>:12' */
                    if ((VeTRGC_b_ERS2Available) && rtb_Logical1_hh)
                    {
                        /* Transition: '<S430>:4' */
                        /* Transition: '<S430>:17' */
                        TRGR_ac_DW.delay1_DSTATE = 2;

                        /* Transition: '<S430>:5' */
                        /* Transition: '<S430>:14' */
                        /* Transition: '<S430>:3' */
                    }
                    else
                    {
                        /* Transition: '<S430>:2' */
                        if ((VeTRGC_b_ERS3Available) && rtb_Logical1_hh)
                        {
                            /* Transition: '<S430>:1' */
                            /* Transition: '<S430>:20' */
                            TRGR_ac_DW.delay1_DSTATE = 3;

                            /* Transition: '<S430>:14' */
                            /* Transition: '<S430>:3' */
                        }
                        else
                        {
                            /* Transition: '<S430>:9' */
                            if ((VeTRGC_b_ERS4Available) && rtb_Logical1_hh)
                            {
                                /* Transition: '<S430>:8' */
                                /* Transition: '<S430>:19' */
                                TRGR_ac_DW.delay1_DSTATE = 4;

                                /* Transition: '<S430>:3' */
                            }
                            else
                            {
                                /* Transition: '<S430>:15' */
                                if ((VeTRGC_b_ERS5Available) && rtb_Logical1_hh)
                                {
                                    /* Transition: '<S430>:16' */
                                    /* Transition: '<S430>:10' */
                                    TRGR_ac_DW.delay1_DSTATE = 5;
                                }
                                else
                                {
                                    /* Transition: '<S430>:18' */
                                    TRGR_ac_DW.delay1_DSTATE = 0;
                                }
                            }
                        }
                    }
                }

                /* End of Chart: '<S392>/Feels_like_downshift' */

                /* Switch: '<S392>/Switch' incorporates:
                 *  Constant: '<S392>/ConstantValue1'
                 *  Constant: '<S392>/ConstantValue3'
                 *  Constant: '<S431>/Calib'
                 *  Logic: '<S392>/Logical'
                 *  RelationalOperator: '<S392>/Comparison4'
                 *  UnitDelay: '<S352>/delay1'
                 */
                if (((TRGR_ac_DW.delay1_DSTATE == 5) && (KeTRGR_b_ERSReduce)) &&
                    rtb_Comparison11_oj)
                {
                    TRGR_ac_DW.delay1_DSTATE = 4;
                }

                /* End of Switch: '<S392>/Switch' */

                /* Merge: '<S352>/Merge1' incorporates:
                 *  Constant: '<S392>/ConstantValue'
                 *  SignalConversion generated from: '<S392>/DbgIf'
                 */
                VeTRGC_k_DbgIf = 6.0F;

                /* Merge: '<S352>/Merge2' incorporates:
                 *  Constant: '<S392>/FALSEConstant'
                 *  SignalConversion generated from: '<S392>/SpeedLimited'
                 */
                VeTRGC_b_SpeedLimited = false;

                /* End of Outputs for SubSystem: '<S352>/ERS_MIHLD' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S352>/PassThrough_AutoUpshift' incorporates:
                 *  ActionPort: '<S407>/ActionPort'
                 */
                /* Chart: '<S407>/AutoUpshift' */
                /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/PassThrough_AutoUpshift/AutoUpshift */
                /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/PassThrough_AutoUpshift/AutoUpshift */
                /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_ERSGearSelection/TRGC_ERSFunctionality/TRGC_ERSSelector/PassThrough_AutoUpshift/AutoUpshift */
                /* Transition: '<S455>:16' */
                guard1 = false;
                guard2 = false;
                guard3 = false;
                guard4 = false;
                if (VeTRGR_e_DsrdOldERS == 1)
                {
                    /* Transition: '<S455>:28' */
                    if (VeTRGC_b_ERS1Avail)
                    {
                        /* Transition: '<S455>:11' */
                        /* Transition: '<S455>:29' */
                        TRGR_ac_DW.delay1_DSTATE = 1;

                        /* Transition: '<S455>:6' */
                        /* Transition: '<S455>:13' */
                        /* Transition: '<S455>:5' */
                        /* Transition: '<S455>:34' */
                        /* Transition: '<S455>:36' */
                        /* Transition: '<S455>:71' */
                    }
                    else
                    {
                        /* Transition: '<S455>:10' */
                        guard4 = true;
                    }
                }
                else
                {
                    /* Transition: '<S455>:27' */
                    if (VeTRGR_e_DsrdOldERS == 2)
                    {
                        /* Transition: '<S455>:26' */
                        guard4 = true;
                    }
                    else
                    {
                        /* Transition: '<S455>:25' */
                        if (VeTRGR_e_DsrdOldERS == 3)
                        {
                            /* Transition: '<S455>:21' */
                            guard3 = true;
                        }
                        else
                        {
                            /* Transition: '<S455>:22' */
                            if (VeTRGR_e_DsrdOldERS == 4)
                            {
                                /* Transition: '<S455>:18' */
                                guard2 = true;
                            }
                            else
                            {
                                /* Transition: '<S455>:19' */
                                if (VeTRGR_e_DsrdOldERS == 5)
                                {
                                    /* Transition: '<S455>:15' */
                                    guard1 = true;
                                }
                                else
                                {
                                    /* Transition: '<S455>:31' */
                                    if (VeTRGR_e_DsrdOldERS == 6)
                                    {
                                        /* Transition: '<S455>:32' */
                                        /* Transition: '<S455>:30' */
                                        /* Transition: '<S455>:75' */
                                        TRGR_ac_DW.delay1_DSTATE = 6;

                                        /* Transition: '<S455>:71' */
                                    }
                                    else
                                    {
                                        /* Transition: '<S455>:35' */
                                        /* Transition: '<S455>:14' */
                                        /* Transition: '<S455>:77' */
                                        TRGR_ac_DW.delay1_DSTATE = 0;
                                    }
                                }
                            }
                        }
                    }
                }

                if (guard4)
                {
                    if (VeTRGC_b_ERS2Available)
                    {
                        /* Transition: '<S455>:7' */
                        /* Transition: '<S455>:24' */
                        TRGR_ac_DW.delay1_DSTATE = 2;

                        /* Transition: '<S455>:13' */
                        /* Transition: '<S455>:5' */
                        /* Transition: '<S455>:34' */
                        /* Transition: '<S455>:36' */
                        /* Transition: '<S455>:71' */
                    }
                    else
                    {
                        /* Transition: '<S455>:12' */
                        guard3 = true;
                    }
                }

                if (guard3)
                {
                    if (VeTRGC_b_ERS3Available)
                    {
                        /* Transition: '<S455>:4' */
                        /* Transition: '<S455>:23' */
                        TRGR_ac_DW.delay1_DSTATE = 3;

                        /* Transition: '<S455>:5' */
                        /* Transition: '<S455>:34' */
                        /* Transition: '<S455>:36' */
                        /* Transition: '<S455>:71' */
                    }
                    else
                    {
                        /* Transition: '<S455>:2' */
                        guard2 = true;
                    }
                }

                if (guard2)
                {
                    if (VeTRGC_b_ERS4Available)
                    {
                        /* Transition: '<S455>:1' */
                        /* Transition: '<S455>:20' */
                        TRGR_ac_DW.delay1_DSTATE = 4;

                        /* Transition: '<S455>:34' */
                        /* Transition: '<S455>:36' */
                        /* Transition: '<S455>:71' */
                    }
                    else
                    {
                        /* Transition: '<S455>:9' */
                        guard1 = true;
                    }
                }

                if (guard1)
                {
                    if (VeTRGC_b_ERS5Available)
                    {
                        /* Transition: '<S455>:8' */
                        /* Transition: '<S455>:17' */
                        TRGR_ac_DW.delay1_DSTATE = 5;

                        /* Transition: '<S455>:36' */
                        /* Transition: '<S455>:71' */
                    }
                    else
                    {
                        /* Transition: '<S455>:33' */
                        /* Transition: '<S455>:30' */
                        /* Transition: '<S455>:75' */
                        TRGR_ac_DW.delay1_DSTATE = 6;

                        /* Transition: '<S455>:71' */
                    }
                }

                /* End of Chart: '<S407>/AutoUpshift' */

                /* Switch: '<S456>/Switch1' incorporates:
                 *  Constant: '<S407>/ConstantValue1'
                 *  Constant: '<S457>/Calib'
                 *  Logic: '<S407>/Logical'
                 *  RelationalOperator: '<S407>/Comparison4'
                 *  Switch: '<S407>/Switch'
                 */
                if (rtb_Comparison11_oj)
                {
                    /* Switch: '<S407>/Switch1' incorporates:
                     *  Constant: '<S407>/ConstantValue6'
                     *  Constant: '<S407>/ConstantValue7'
                     *  Constant: '<S457>/Calib'
                     *  Logic: '<S407>/Logical1'
                     *  RelationalOperator: '<S407>/Comparison2'
                     *  UnitDelay: '<S352>/delay1'
                     */
                    if ((TRGR_ac_DW.delay1_DSTATE == 5) && (KeTRGR_b_ERSReduce))
                    {
                        TRGR_ac_DW.delay1_DSTATE = 4;
                    }

                    /* End of Switch: '<S407>/Switch1' */
                }
                else
                {
                    if ((TRGR_ac_DW.delay1_DSTATE == 6) && (KeTRGR_b_ERSReduce))
                    {
                        /* Switch: '<S407>/Switch' incorporates:
                         *  Constant: '<S407>/ConstantValue3'
                         *  UnitDelay: '<S352>/delay1'
                         */
                        TRGR_ac_DW.delay1_DSTATE = 0;
                    }
                }

                /* End of Switch: '<S456>/Switch1' */

                /* Merge: '<S352>/Merge1' incorporates:
                 *  Constant: '<S407>/ConstantValue'
                 *  SignalConversion generated from: '<S407>/DbgIf'
                 */
                VeTRGC_k_DbgIf = 6.0F;

                /* Merge: '<S352>/Merge2' incorporates:
                 *  Constant: '<S407>/FALSEConstant'
                 *  SignalConversion generated from: '<S407>/SpeedLimited'
                 */
                VeTRGC_b_SpeedLimited = false;

                /* End of Outputs for SubSystem: '<S352>/PassThrough_AutoUpshift' */
            }

            /* End of Outputs for SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
        }

        /* End of If: '<S352>/If3' */

        /* If: '<S351>/If' incorporates:
         *  Logic: '<S351>/AND1'
         *  RelationalOperator: '<S351>/Comparison10'
         *  RelationalOperator: '<S351>/Comparison5'
         *  RelationalOperator: '<S351>/Comparison6'
         *  RelationalOperator: '<S351>/Comparison7'
         *  RelationalOperator: '<S351>/Comparison8'
         *  RelationalOperator: '<S351>/Comparison9'
         *  UnitDelay: '<S352>/delay1'
         */
        if (TRGR_ac_DW.delay1_DSTATE == 1)
        {
            /* Outputs for IfAction SubSystem: '<S351>/AllowedModesGearsERS_ERS1' incorporates:
             *  ActionPort: '<S353>/ActionPort'
             */
            /* SignalConversion generated from: '<S353>/AllwdModesERS' incorporates:
             *  Constant: '<S353>/ConstantValue1'
             *  Constant: '<S353>/ConstantValue2'
             *  Constant: '<S353>/ConstantValue3'
             *  Constant: '<S353>/ConstantValue4'
             *  Constant: '<S353>/ConstantValue6'
             *  Constant: '<S360>/Calib'
             *  Constant: '<S361>/Calib'
             *  Constant: '<S362>/Calib'
             *  Logic: '<S353>/Logical5'
             *  RelationalOperator: '<S353>/Comparison4'
             */
            rtb_Logical4_pa_0[0] = KeTRGR_b_M1EngOffAllow_ERS1;
            rtb_Logical4_pa_0[1] = true;
            rtb_Logical4_pa_0[2] = true;
            rtb_Logical4_pa_0[3] = ((KeTRGR_b_G1Allow_ERS1) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG1ERS));
            rtb_Logical4_pa_0[4] = true;
            rtb_Logical4_pa_0[5] = false;
            rtb_Logical4_pa_0[6] = false;

            /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
             *  SignalConversion generated from: '<S353>/AllwdModesERS'
             */
            (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
                (rtb_Logical4_pa_0);

            /* End of Outputs for SubSystem: '<S351>/AllowedModesGearsERS_ERS1' */
        }
        else if (TRGR_ac_DW.delay1_DSTATE == 2)
        {
            /* Outputs for IfAction SubSystem: '<S351>/AllowedModesGearsERS_ERS2' incorporates:
             *  ActionPort: '<S354>/ActionPort'
             */
            /* Logic: '<S354>/Logical4' incorporates:
             *  Constant: '<S367>/Calib'
             *  RelationalOperator: '<S354>/Comparison2'
             */
            rtb_Logical1_hh = (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoM1ERS);

            /* SignalConversion generated from: '<S354>/AllwdModesERS' incorporates:
             *  Constant: '<S354>/ConstantValue1'
             *  Constant: '<S354>/ConstantValue3'
             *  Constant: '<S354>/ConstantValue4'
             *  Constant: '<S363>/Calib'
             *  Constant: '<S364>/Calib'
             *  Constant: '<S365>/Calib'
             *  Constant: '<S366>/Calib'
             *  Logic: '<S354>/Logical1'
             *  Logic: '<S354>/Logical3'
             *  Logic: '<S354>/Logical4'
             *  RelationalOperator: '<S354>/Comparison3'
             */
            rtb_Logical4_pa_0[1] = rtb_Logical1_hh;
            rtb_Logical4_pa_0[0] = ((KeTRGR_b_M1EngOffAllow_ERS2) &&
                                    rtb_Logical1_hh);
            rtb_Logical4_pa_0[2] = KeTRGR_b_M2Allow_ERS2;
            rtb_Logical4_pa_0[3] = ((KeTRGR_b_G1Allow_ERS2) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG1ERS));
            rtb_Logical4_pa_0[4] = true;
            rtb_Logical4_pa_0[5] = false;
            rtb_Logical4_pa_0[6] = false;

            /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
             *  SignalConversion generated from: '<S354>/AllwdModesERS'
             */
            (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
                (rtb_Logical4_pa_0);

            /* End of Outputs for SubSystem: '<S351>/AllowedModesGearsERS_ERS2' */
        }
        else if (TRGR_ac_DW.delay1_DSTATE == 3)
        {
            /* Outputs for IfAction SubSystem: '<S351>/AllowedModesGearsERS_ERS3' incorporates:
             *  ActionPort: '<S355>/ActionPort'
             */
            /* Logic: '<S355>/Logical4' incorporates:
             *  Constant: '<S373>/Calib'
             *  RelationalOperator: '<S355>/Comparison2'
             */
            rtb_Logical1_hh = (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoM1ERS);

            /* SignalConversion generated from: '<S355>/AllwdModesERS' incorporates:
             *  Constant: '<S355>/ConstantValue1'
             *  Constant: '<S355>/ConstantValue3'
             *  Constant: '<S355>/ConstantValue4'
             *  Constant: '<S368>/Calib'
             *  Constant: '<S369>/Calib'
             *  Constant: '<S370>/Calib'
             *  Constant: '<S371>/Calib'
             *  Constant: '<S372>/Calib'
             *  Logic: '<S355>/Logical1'
             *  Logic: '<S355>/Logical3'
             *  Logic: '<S355>/Logical4'
             *  Logic: '<S355>/Logical5'
             *  RelationalOperator: '<S355>/Comparison3'
             *  RelationalOperator: '<S355>/Comparison4'
             */
            rtb_Logical4_pa_0[1] = rtb_Logical1_hh;
            rtb_Logical4_pa_0[0] = ((KeTRGR_b_M1EngOffAllow_ERS3) &&
                                    rtb_Logical1_hh);
            rtb_Logical4_pa_0[2] = true;
            rtb_Logical4_pa_0[3] = ((VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG1ERS) &&
                                    (KeTRGR_b_G1Allow_ERS3));
            rtb_Logical4_pa_0[4] = ((KeTRGR_b_G2Allow_ERS3) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG2ERS));
            rtb_Logical4_pa_0[5] = false;
            rtb_Logical4_pa_0[6] = false;

            /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
             *  SignalConversion generated from: '<S355>/AllwdModesERS'
             */
            (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
                (rtb_Logical4_pa_0);

            /* End of Outputs for SubSystem: '<S351>/AllowedModesGearsERS_ERS3' */
        }
        else if (TRGR_ac_DW.delay1_DSTATE == 4)
        {
            /* Outputs for IfAction SubSystem: '<S351>/AllowedModesGearsERS_ERS4' incorporates:
             *  ActionPort: '<S356>/ActionPort'
             */
            /* Logic: '<S356>/Logical4' incorporates:
             *  Constant: '<S379>/Calib'
             *  RelationalOperator: '<S356>/Comparison2'
             */
            rtb_Logical1_hh = (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoM1ERS);

            /* SignalConversion generated from: '<S356>/AllwdModesERS' incorporates:
             *  Constant: '<S356>/ConstantValue1'
             *  Constant: '<S356>/ConstantValue2'
             *  Constant: '<S356>/ConstantValue4'
             *  Constant: '<S374>/Calib'
             *  Constant: '<S375>/Calib'
             *  Constant: '<S376>/Calib'
             *  Constant: '<S377>/Calib'
             *  Constant: '<S378>/Calib'
             *  Logic: '<S356>/Logical1'
             *  Logic: '<S356>/Logical3'
             *  Logic: '<S356>/Logical4'
             *  Logic: '<S356>/Logical5'
             *  RelationalOperator: '<S356>/Comparison3'
             *  RelationalOperator: '<S356>/Comparison4'
             */
            rtb_Logical4_pa_0[1] = rtb_Logical1_hh;
            rtb_Logical4_pa_0[0] = ((KeTRGR_b_M1EngOffAllow_ERS4) &&
                                    rtb_Logical1_hh);
            rtb_Logical4_pa_0[2] = true;
            rtb_Logical4_pa_0[3] = ((KeTRGR_b_G1Allow_ERS4) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG1ERS));
            rtb_Logical4_pa_0[4] = ((KeTRGR_b_G2Allow_ERS4) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG2ERS));
            rtb_Logical4_pa_0[5] = false;
            rtb_Logical4_pa_0[6] = false;

            /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
             *  SignalConversion generated from: '<S356>/AllwdModesERS'
             */
            (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
                (rtb_Logical4_pa_0);

            /* End of Outputs for SubSystem: '<S351>/AllowedModesGearsERS_ERS4' */
        }
        else if ((TRGR_ac_DW.delay1_DSTATE == 5) || (TRGR_ac_DW.delay1_DSTATE ==
                  6))
        {
            /* Outputs for IfAction SubSystem: '<S351>/AllowedModesGearsERS_ERS5' incorporates:
             *  ActionPort: '<S357>/ActionPort'
             */
            /* Logic: '<S357>/Logical4' incorporates:
             *  Constant: '<S386>/Calib'
             *  RelationalOperator: '<S357>/Comparison2'
             */
            rtb_Logical1_hh = (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoM1ERS);

            /* SignalConversion generated from: '<S357>/AllwdModesERS' incorporates:
             *  Constant: '<S357>/ConstantValue1'
             *  Constant: '<S357>/ConstantValue3'
             *  Constant: '<S380>/Calib'
             *  Constant: '<S381>/Calib'
             *  Constant: '<S382>/Calib'
             *  Constant: '<S383>/Calib'
             *  Constant: '<S384>/Calib'
             *  Constant: '<S385>/Calib'
             *  Logic: '<S357>/Logical1'
             *  Logic: '<S357>/Logical3'
             *  Logic: '<S357>/Logical4'
             *  Logic: '<S357>/Logical5'
             *  RelationalOperator: '<S357>/Comparison3'
             *  RelationalOperator: '<S357>/Comparison4'
             */
            rtb_Logical4_pa_0[1] = rtb_Logical1_hh;
            rtb_Logical4_pa_0[0] = ((KeTRGR_b_M1EngOffAllow_ERS5or6) &&
                                    rtb_Logical1_hh);
            rtb_Logical4_pa_0[2] = true;
            rtb_Logical4_pa_0[3] = ((KeTRGR_b_G1Allow_ERS5or6) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG1ERS));
            rtb_Logical4_pa_0[4] = ((KeTRGR_b_G2Allow_ERS5or6) &&
                                    (VeTRGI_n_TOSRSpeed < KeTRGR_n_MaxNoG2ERS));
            rtb_Logical4_pa_0[5] = KeTRGR_b_G3Allow_ERS5or6;
            rtb_Logical4_pa_0[6] = false;

            /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
             *  SignalConversion generated from: '<S357>/AllwdModesERS'
             */
            (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
                (rtb_Logical4_pa_0);

            /* End of Outputs for SubSystem: '<S351>/AllowedModesGearsERS_ERS5' */
        }
        else
        {
            /* Outputs for IfAction SubSystem: '<S351>/AllwdModesGearsERS' incorporates:
             *  ActionPort: '<S358>/ActionPort'
             */
            /* SignalConversion generated from: '<S358>/AllwdModesERS' incorporates:
             *  Constant: '<S358>/ConstantValue1'
             *  Constant: '<S358>/ConstantValue2'
             *  Constant: '<S358>/ConstantValue3'
             *  Constant: '<S358>/ConstantValue4'
             *  Constant: '<S358>/ConstantValue5'
             *  Constant: '<S358>/ConstantValue6'
             *  Constant: '<S358>/ConstantValue7'
             */
            rtb_Logical4_pa_0[0] = true;
            rtb_Logical4_pa_0[1] = true;
            rtb_Logical4_pa_0[2] = true;
            rtb_Logical4_pa_0[3] = true;
            rtb_Logical4_pa_0[4] = true;
            rtb_Logical4_pa_0[5] = true;
            rtb_Logical4_pa_0[6] = true;

            /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
             *  SignalConversion generated from: '<S358>/AllwdModesERS'
             */
            (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
                (rtb_Logical4_pa_0);

            /* End of Outputs for SubSystem: '<S351>/AllwdModesGearsERS' */
        }

        /* End of If: '<S351>/If' */

        /* Outputs for Atomic SubSystem: '<S352>/CountDownResetTriggerEnabled' */
        /* Outputs for Atomic SubSystem: '<S387>/EdgeRising' */
        /* Logic: '<S417>/OR1' incorporates:
         *  UnitDelay: '<S417>/UnitDelay'
         */
        rtb_Logical1_hh = !TRGR_ac_DW.UnitDelay_DSTATE_lkw;

        /* Update for UnitDelay: '<S417>/UnitDelay' */
        TRGR_ac_DW.UnitDelay_DSTATE_lkw = VeTRGC_b_SpeedLimited;

        /* Switch: '<S387>/Switch1' incorporates:
         *  Constant: '<S387>/ConstantValue'
         *  Constant: '<S405>/Calib'
         *  Logic: '<S417>/AND'
         *  RelationalOperator: '<S387>/GreaterThan'
         *  Switch: '<S387>/Switch2'
         *  UnitDelay: '<S387>/UnitDelay'
         */
        if ((VeTRGC_b_SpeedLimited) && rtb_Logical1_hh)
        {
            TRGR_ac_DW.UnitDelay_DSTATE_b1 = KeTRGR_Cnt_TapDnBlink;
        }
        else
        {
            if (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_b1) > 0)
            {
                /* UnitDelay: '<S387>/UnitDelay' incorporates:
                 *  Constant: '<S387>/ConstantValue1'
                 *  Sum: '<S387>/Subtraction'
                 *  Switch: '<S387>/Switch2'
                 */
                TRGR_ac_DW.UnitDelay_DSTATE_b1 = (uint16)((sint32)(((sint32)
                    TRGR_ac_DW.UnitDelay_DSTATE_b1) - 1));
            }
        }

        /* End of Switch: '<S387>/Switch1' */
        /* End of Outputs for SubSystem: '<S387>/EdgeRising' */

        /* RelationalOperator: '<S387>/GreaterThan1' incorporates:
         *  Constant: '<S387>/ConstantValue2'
         *  UnitDelay: '<S387>/UnitDelay'
         */
        VeTRGC_b_DsrdERSDspl = (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_b1) > 0);

        /* End of Outputs for SubSystem: '<S352>/CountDownResetTriggerEnabled' */
        for (i = 0; i < 13; i++)
        {
            /* DataTypeConversion: '<S396>/DataTypeConversion' incorporates:
             *  Constant: '<S404>/Calib'
             */
            rtb_DataTypeConversion_og[i] = (TeTRGR_e_TransRangeState)
                KaTRGR_e_DesiredERSToVldtdTransRngSt[(i)];
        }

        /* Switch: '<S402>/Switch1' incorporates:
         *  Constant: '<S397>/Constant'
         *  RelationalOperator: '<S352>/Comparison2'
         *  Switch: '<S403>/Switch1'
         */
        if (((uint32)VeTRGC_e_VldtdTransRngStateERS) == CeTRGR_e_TransRangeDrive)
        {
            /* RelationalOperator: '<S389>/Comparison5' incorporates:
             *  DataTypeConversion: '<S394>/DataTypeConversion'
             *  DataTypeConversion: '<S396>/DataTypeConversion'
             *  Merge: '<S26>/Merge1'
             *  Selector: '<S352>/Selector1'
             *  Switch: '<S403>/Switch1'
             *  UnitDelay: '<S352>/delay1'
             */
            VeTRGC_e_VldtdTransRngStateERS =
                rtb_DataTypeConversion_og[TRGR_ac_DW.delay1_DSTATE];

            /* Switch: '<S352>/Switch' */
            if (VeTRGC_b_DsrdERSDspl)
            {
                /* MinMax: '<S352>/MinMax1' incorporates:
                 *  Constant: '<S352>/ConstantValue2'
                 *  Sum: '<S352>/Sum1'
                 *  UnitDelay: '<S352>/delay1'
                 */
                if (1 > ((sint16)(TRGR_ac_DW.delay1_DSTATE - 1)))
                {
                    /* Switch: '<S352>/Switch' */
                    rtb_Switch_hg = 1;
                }
                else
                {
                    /* Switch: '<S352>/Switch' */
                    rtb_Switch_hg = (sint16)(TRGR_ac_DW.delay1_DSTATE - 1);
                }

                /* End of MinMax: '<S352>/MinMax1' */
            }
            else
            {
                /* Switch: '<S352>/Switch' incorporates:
                 *  UnitDelay: '<S352>/delay1'
                 */
                rtb_Switch_hg = TRGR_ac_DW.delay1_DSTATE;
            }

            /* End of Switch: '<S352>/Switch' */

            /* DataTypeConversion: '<S395>/DataTypeConversion' incorporates:
             *  DataTypeConversion: '<S396>/DataTypeConversion'
             *  Merge: '<S26>/Merge3'
             *  Selector: '<S352>/Selector2'
             *  Switch: '<S403>/Switch1'
             */
            VeTRGC_e_VldtdTransRngStDsply =
                rtb_DataTypeConversion_og[rtb_Switch_hg];
        }
        else
        {
            /* DataTypeConversion: '<S395>/DataTypeConversion' incorporates:
             *  Merge: '<S26>/Merge3'
             *  Switch: '<S403>/Switch1'
             *  Switch: '<S794>/Switch1'
             */
            VeTRGC_e_VldtdTransRngStDsply = VeTRGC_e_RawVldtdTransRngSt;
        }

        /* End of Switch: '<S402>/Switch1' */

        /* Outputs for Function Call SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
        /* Update for UnitDelay: '<S401>/delay4' incorporates:
         *  Inport: '<Root>/VePLTR_e_ERS_SW'
         *  Inport: '<S15>/VeTRGR_e_ERS_SW'
         */
        TRGR_ac_DW.delay4_DSTATE = tmpRead;

        /* Update for UnitDelay: '<S415>/delay3' incorporates:
         *  Inport: '<Root>/VePLTR_e_ERS_SW'
         *  Inport: '<S15>/VeTRGR_e_ERS_SW'
         */
        TRGR_ac_DW.delay3_DSTATE = tmpRead;

        /* Update for UnitDelay: '<S389>/delay5' incorporates:
         *  Inport: '<Root>/VePLTR_e_ERS_SW'
         *  Inport: '<S15>/VeTRGR_e_ERS_SW'
         */
        TRGR_ac_DW.delay5_DSTATE = tmpRead;

        /* End of Outputs for SubSystem: '<S12>/TRGI_ProcessInternalInputs' */
        /* End of Outputs for SubSystem: '<S26>/TRGC_ERSFunctionality' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S26>/TRGC_ShifterPosPassThrough' incorporates:
         *  ActionPort: '<S350>/ActionPort'
         */
        /* RelationalOperator: '<S389>/Comparison5' incorporates:
         *  DataTypeConversion: '<S470>/DataTypeConversion'
         *  Merge: '<S26>/Merge1'
         *  Switch: '<S794>/Switch1'
         */
        VeTRGC_e_VldtdTransRngStateERS = VeTRGC_e_RawVldtdTransRngSt;

        /* DataTypeConversion: '<S471>/DataTypeConversion' incorporates:
         *  Merge: '<S26>/Merge3'
         *  Switch: '<S794>/Switch1'
         */
        VeTRGC_e_VldtdTransRngStDsply = VeTRGC_e_RawVldtdTransRngSt;

        /* SignalConversion generated from: '<S350>/AllowedERS' incorporates:
         *  Constant: '<S350>/ConstantValue1'
         *  Constant: '<S350>/ConstantValue2'
         *  Constant: '<S350>/ConstantValue3'
         *  Constant: '<S350>/ConstantValue4'
         *  Constant: '<S350>/ConstantValue5'
         *  Constant: '<S350>/ConstantValue6'
         *  Constant: '<S350>/ConstantValue7'
         */
        rtb_Logical4_pa_0[0] = true;
        rtb_Logical4_pa_0[1] = true;
        rtb_Logical4_pa_0[2] = true;
        rtb_Logical4_pa_0[3] = true;
        rtb_Logical4_pa_0[4] = true;
        rtb_Logical4_pa_0[5] = true;
        rtb_Logical4_pa_0[6] = true;

        /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
         *  SignalConversion generated from: '<S350>/AllowedERS'
         */
        (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value(rtb_Logical4_pa_0);

        /* End of Outputs for SubSystem: '<S26>/TRGC_ShifterPosPassThrough' */
    }

    /* End of If: '<S26>/If1' */

    /* Abs: '<S33>/Abs1' incorporates:
     *  Abs: '<S144>/Abs1'
     *  Abs: '<S147>/Abs1'
     *  Abs: '<S33>/Abs2'
     *  Abs: '<S40>/Abs1'
     *  Abs: '<S498>/Abs1'
     *  Abs: '<S499>/Abs1'
     *  Abs: '<S611>/Abs2'
     */
    rtb_MinMax1 = fabsf(VeTRGI_v_VehicleSpdmph);

    /* RelationalOperator: '<S33>/Comparison15' incorporates:
     *  Abs: '<S33>/Abs1'
     *  Constant: '<S866>/Calib'
     */
    VeTRGC_b_ParkWithSpd = (rtb_MinMax1 >= KeTRGR_v_ParkThreshold);

    /* Outputs for Atomic SubSystem: '<S33>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S872>/EdgeRising' */
    /* UnitDelay: '<S876>/Unit Delay' incorporates:
     *  UnitDelay: '<S875>/Unit Delay'
     */
    rtb_AND12 = TRGR_ac_DW.UnitDelay_DSTATE_oj;

    /* Update for UnitDelay: '<S875>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_oj = VeTRGC_b_ParkWithSpd;

    /* Switch: '<S872>/Switch1' incorporates:
     *  Constant: '<S846>/Calib'
     *  Constant: '<S872>/Constant Value'
     *  Constant: '<S872>/Constant Value1'
     *  Logic: '<S872>/OR'
     *  Logic: '<S872>/OR1'
     *  Logic: '<S875>/AND'
     *  Logic: '<S875>/OR1'
     *  MinMax: '<S872>/Minimum'
     *  Sum: '<S872>/Summation'
     *  UnitDelay: '<S872>/Unit Delay'
     */
    if ((!VeTRGC_b_ParkWithSpd) || ((VeTRGC_b_ParkWithSpd) && (!rtb_AND12)))
    {
        TRGR_ac_DW.UnitDelay_DSTATE_kp = 0U;
    }
    else if (KeTRGR_Cnt_AtParkSpdHi_EPBDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_kp) + 1U)))
    {
        /* MinMax: '<S872>/Minimum' incorporates:
         *  Constant: '<S846>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_kp = KeTRGR_Cnt_AtParkSpdHi_EPBDbnc;
    }
    else
    {
        /* MinMax: '<S872>/Minimum' incorporates:
         *  Constant: '<S872>/Constant Value'
         *  Sum: '<S872>/Summation'
         *  UnitDelay: '<S872>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_kp = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_kp) + 1U);
    }

    /* End of Switch: '<S872>/Switch1' */
    /* End of Outputs for SubSystem: '<S872>/EdgeRising' */

    /* Logic: '<S872>/AND' incorporates:
     *  Constant: '<S846>/Calib'
     *  RelationalOperator: '<S872>/Greater Than'
     *  UnitDelay: '<S872>/Unit Delay'
     */
    VeTRGC_b_ParkWithSpdDbnc = ((VeTRGC_b_ParkWithSpd) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_kp >= KeTRGR_Cnt_AtParkSpdHi_EPBDbnc));

    /* End of Outputs for SubSystem: '<S33>/TurnOnDelaySample' */

    /* Logic: '<S33>/Logical16' incorporates:
     *  Constant: '<S820>/Constant'
     *  Constant: '<S821>/Constant'
     *  Constant: '<S855>/Calib'
     *  Logic: '<S33>/Logical17'
     *  RelationalOperator: '<S33>/Comparison14'
     *  RelationalOperator: '<S33>/Comparison17'
     */
    VeTRGC_b_ParkWithSpd_ApplyEPB = ((((((uint32)VeTRGC_e_VldtdTransRngStateERS)
        == CeTRGR_e_TransRangeIllegal) || (((uint32)
        VeTRGC_e_VldtdTransRngStateERS) == CeTRGR_e_TransRangePark)) &&
        (VeTRGC_b_ParkWithSpdDbnc)) && (KeTRGR_b_EnblEPB_AtParkWithHiSpd));

    /* Switch: '<S315>/Switch1' incorporates:
     *  Constant: '<S310>/Constant'
     *  Constant: '<S311>/Constant'
     *  Logic: '<S25>/Logical3'
     *  RelationalOperator: '<S25>/Comparison1'
     *  RelationalOperator: '<S25>/Comparison2'
     */
    if ((((uint32)TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeDrive) ||
        (((uint32)TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeDrive1))
    {
        /* RelationalOperator: '<S33>/Comparison4' incorporates:
         *  Constant: '<S312>/Constant'
         *  Switch: '<S315>/Switch1'
         */
        VeTRGC_e_DrvrRq = CeTRGR_e_TransRangeDrive;
    }
    else
    {
        /* RelationalOperator: '<S33>/Comparison4' incorporates:
         *  Switch: '<S315>/Switch1'
         */
        VeTRGC_e_DrvrRq = TRGR_ac_B.DataTypeConversion_e;
    }

    /* End of Switch: '<S315>/Switch1' */

    /* Logic: '<S33>/Logical3' incorporates:
     *  Constant: '<S823>/Constant'
     *  Constant: '<S829>/Constant'
     *  RelationalOperator: '<S33>/Comparison1'
     *  RelationalOperator: '<S33>/Comparison4'
     *  UnitDelay: '<S14>/UnitDelay1'
     */
    VeTRGC_b_EPBReqAtPark = (((((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
        CeTRGR_e_TransRangePark) || (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangePark)) || (TRGR_ac_DW.UnitDelay1_DSTATE_b5));

    /* Logic: '<S33>/Logical11' incorporates:
     *  Constant: '<S850>/Calib'
     *  Constant: '<S862>/Calib'
     *  RelationalOperator: '<S33>/Comparison13'
     */
    VeTRGC_b_EPBReqAtSlope = (((KeTRGR_b_EnblEPBAtSlope) &&
        (VeTRGI_phi_EstSlopeAngleFilt >= KeTRGR_phi_SlopeTh_ForEPB)) &&
        (VeTRGC_b_EPBReqAtPark));

    /* Outputs for Atomic SubSystem: '<S33>/StopWatchResetEnabled' */
    /* Switch: '<S870>/Switch' incorporates:
     *  Constant: '<S816>/Constant'
     *  Constant: '<S817>/Constant'
     *  Logic: '<S33>/Logical21'
     *  Logic: '<S33>/Logical22'
     *  RelationalOperator: '<S33>/Comparison18'
     *  RelationalOperator: '<S33>/Comparison2'
     */
    if ((((uint32)VeTRGC_e_PPawlCmnd) != CeTRGR_e_PPawlEngage) || (((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_ENGAGED))
    {
        /* Switch: '<S870>/Switch' incorporates:
         *  Constant: '<S870>/Constant Value2'
         */
        VeTRGR_t_PPawlEngCounter = 0.0F;
    }
    else
    {
        /* Switch: '<S870>/Switch' incorporates:
         *  Constant: '<S864>/Calib'
         *  Sum: '<S870>/Subtraction'
         *  Switch: '<S870>/Switch2'
         *  UnitDelay: '<S870>/Unit Delay'
         */
        VeTRGR_t_PPawlEngCounter = KeTRGR_t_dT + VeTRGR_t_PPawlEngCounter;
    }

    /* End of Switch: '<S870>/Switch' */
    /* End of Outputs for SubSystem: '<S33>/StopWatchResetEnabled' */

    /* RelationalOperator: '<S33>/Comparison19' incorporates:
     *  Constant: '<S863>/Calib'
     */
    VeTRGR_b_PPawlNotEng = (VeTRGR_t_PPawlEngCounter >=
                            KeTRGR_t_PPawlNotRespDbnc);

    /* Logic: '<S33>/Logical28' incorporates:
     *  Constant: '<S833>/Constant'
     *  Constant: '<S834>/Constant'
     *  Constant: '<S835>/Constant'
     *  Constant: '<S836>/Constant'
     *  Constant: '<S856>/Calib'
     *  Logic: '<S33>/Logical29'
     *  RelationalOperator: '<S33>/Comparison23'
     *  RelationalOperator: '<S33>/Comparison24'
     *  RelationalOperator: '<S33>/Comparison25'
     *  RelationalOperator: '<S33>/Comparison26'
     */
    VeTRGC_b_EPBReqAtRND = ((((((((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeNeutral)) || (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeDrive)) && (((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
        CeTRGR_e_TransRangeIllegal)) && (VeTRGI_b_PPawl_TXFlt)) &&
                            (KeTRGR_b_EnblEPB_AtRND));

    /* RelationalOperator: '<S33>/Comparison27' incorporates:
     *  Constant: '<S837>/Constant'
     *  UnitDelay: '<S14>/UnitDelay'
     */
    TRGR_ac_B.VeTRGR_b_ReadyToPark = (((uint32)TRGR_ac_DW.UnitDelay_DSTATE_gh) ==
        CeTRGR_e_TransRangePark);

    /* Logic: '<S33>/Logical30' incorporates:
     *  Constant: '<S852>/Calib'
     */
    VeTRGC_b_EPBReqWEDOpnFltd = (((TRGR_ac_B.VeTRGR_b_ReadyToPark) &&
        (VeTRGI_b_WEDOpenFaulted)) && (KeTRGR_b_EnblEPBWEDOpenFltd));

    /* Outputs for Atomic SubSystem: '<S33>/TurnOnDelaySample2' */
    /* Outputs for Atomic SubSystem: '<S874>/EdgeRising' */
    /* UnitDelay: '<S876>/Unit Delay' incorporates:
     *  UnitDelay: '<S877>/Unit Delay'
     */
    rtb_AND12 = TRGR_ac_DW.UnitDelay_DSTATE_jc;

    /* Update for UnitDelay: '<S877>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_jc = VeTRGC_b_EPBReqWEDOpnFltd;

    /* Switch: '<S874>/Switch1' incorporates:
     *  Constant: '<S848>/Calib'
     *  Constant: '<S874>/Constant Value'
     *  Constant: '<S874>/Constant Value1'
     *  Logic: '<S874>/OR'
     *  Logic: '<S874>/OR1'
     *  Logic: '<S877>/AND'
     *  Logic: '<S877>/OR1'
     *  MinMax: '<S874>/Minimum'
     *  Sum: '<S874>/Summation'
     *  UnitDelay: '<S874>/Unit Delay'
     */
    if ((!VeTRGC_b_EPBReqWEDOpnFltd) || ((VeTRGC_b_EPBReqWEDOpnFltd) &&
            (!rtb_AND12)))
    {
        TRGR_ac_DW.UnitDelay_DSTATE_f = 0U;
    }
    else if (KeTRGR_Cnt_WEDOpenFlt_EPBDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_f) + 1U)))
    {
        /* MinMax: '<S874>/Minimum' incorporates:
         *  Constant: '<S848>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_f = KeTRGR_Cnt_WEDOpenFlt_EPBDbnc;
    }
    else
    {
        /* MinMax: '<S874>/Minimum' incorporates:
         *  Constant: '<S874>/Constant Value'
         *  Sum: '<S874>/Summation'
         *  UnitDelay: '<S874>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_f = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_f) + 1U);
    }

    /* End of Switch: '<S874>/Switch1' */
    /* End of Outputs for SubSystem: '<S874>/EdgeRising' */

    /* Logic: '<S874>/AND' incorporates:
     *  Constant: '<S848>/Calib'
     *  RelationalOperator: '<S874>/Greater  Than'
     *  UnitDelay: '<S874>/Unit Delay'
     */
    VeTRGC_b_EPBReqWEDOpnFltdDbnc = ((VeTRGC_b_EPBReqWEDOpnFltd) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_f >= KeTRGR_Cnt_WEDOpenFlt_EPBDbnc));

    /* End of Outputs for SubSystem: '<S33>/TurnOnDelaySample2' */

    /* Switch: '<S33>/Switch' incorporates:
     *  Constant: '<S851>/Calib'
     *  Constant: '<S853>/Calib'
     *  Logic: '<S33>/Logical26'
     *  Logic: '<S33>/Logical27'
     *  Logic: '<S33>/Logical8'
     */
    if (KeTRGR_b_EnblEPB_AtPark)
    {
        rtb_Logical1_hh = VeTRGC_b_EPBReqAtPark;
    }
    else
    {
        rtb_Logical1_hh = (((VeTRGC_b_EPBReqAtPark) && (VeTRGI_b_PPawl_TXFlt)) ||
                           ((VeTRGR_b_PPawlNotEng) &&
                            (KeTRGR_b_EnblEPBPPawlNotEng)));
    }

    /* End of Switch: '<S33>/Switch' */
    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGI_ProcessInternalInputs'
     */
    /* Logic: '<S33>/Logical18' incorporates:
     *  Constant: '<S854>/Calib'
     *  Inport: '<S15>/VePPCR_b_ApplyEPB'
     *  Logic: '<S33>/Logical12'
     *  Logic: '<S33>/Logical20'
     */
    tmpRead_3 = (((VeTRGC_b_ParkWithSpd_ApplyEPB) || (tmpRead_3 &&
                   (KeTRGR_b_EnblEPB_AtParkVehMoved))) ||
                 (VeTRGC_b_EPBReqAtSlope));

    /* Logic: '<S33>/Logical' incorporates:
     *  Constant: '<S818>/Constant'
     *  Constant: '<S865>/Calib'
     *  Logic: '<S33>/Logical1'
     *  Logic: '<S33>/Logical18'
     *  RelationalOperator: '<S33>/Comparison12'
     *  RelationalOperator: '<S33>/Comparison3'
     *  Switch: '<S15>/Switch17'
     */
    VeTRGC_b_EPBReq = (((((tmpRead_3 || rtb_Logical1_hh) ||
                          (VeTRGC_b_EPBReqAtRND)) ||
                         (VeTRGC_b_EPBReqWEDOpnFltdDbnc)) && (((uint32)
                          VeTRGI_e_EPB_HoldSts) != CePLTR_e_EPBHoldSts_APPLIED))
                       && (rtb_MinMax1 < KeTRGR_v_EPB_SpdThreshold));

    /* Outputs for Atomic SubSystem: '<S33>/SignalLatchOnWithReset3' */
    /* Logic: '<S869>/OR1' incorporates:
     *  Constant: '<S822>/Constant'
     *  Logic: '<S869>/NOT'
     *  Logic: '<S869>/OR'
     *  RelationalOperator: '<S33>/Comparison16'
     *  RelationalOperator: '<S33>/Comparison3'
     *  Switch: '<S15>/Switch17'
     *  UnitDelay: '<S869>/Unit Delay'
     */
    VeTRGC_b_EPBRequested_BP = ((VeTRGC_b_EPBReq) || ((((uint32)
        VeTRGI_e_EPB_HoldSts) != CePLTR_e_EPBHoldSts_APPLIED) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_o3y)));

    /* Update for UnitDelay: '<S869>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_o3y = VeTRGC_b_EPBRequested_BP;

    /* End of Outputs for SubSystem: '<S33>/SignalLatchOnWithReset3' */

    /* Switch: '<S845>/Switch1' incorporates:
     *  Constant: '<S861>/Calib'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S845>/Switch1' */
        VeTRGC_b_EPBReq = VeTRGC_b_EPBRequested_BP;
    }

    /* End of Switch: '<S845>/Switch1' */

    /* Switch: '<S33>/Switch1' */
    if (VeTRGC_b_EPBReq)
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S840>/Constant'
         */
        rtb_Switch1_id = CeTRGR_e_EPBReq_ACTIVE;

        /* Outputs for Atomic SubSystem: '<S142>/Stop_Watch_Reset_Enabled' */
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S275>/Calib'
         *  Sum: '<S276>/Subtraction'
         *  Switch: '<S276>/Switch1'
         *  Switch: '<S276>/Switch2'
         *  UnitDelay: '<S276>/UnitDelay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_j1;

        /* End of Outputs for SubSystem: '<S142>/Stop_Watch_Reset_Enabled' */
    }
    else
    {
        /* Switch: '<S33>/Switch1' incorporates:
         *  Constant: '<S841>/Constant'
         */
        rtb_Switch1_id = CeTRGR_e_EPBReq_NA;

        /* Outputs for Atomic SubSystem: '<S142>/Stop_Watch_Reset_Enabled' */
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S276>/ConstantValue2'
         *  Switch: '<S276>/Switch1'
         */
        rtb_Subtraction2 = 0.0F;

        /* End of Outputs for SubSystem: '<S142>/Stop_Watch_Reset_Enabled' */
    }

    /* End of Switch: '<S33>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S142>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S276>/Switch' incorporates:
     *  Constant: '<S276>/ConstantValue3'
     *  RelationalOperator: '<S276>/Comparison1'
     */
    if (rtb_Subtraction2 >= 5.0F)
    {
        /* Switch: '<S276>/Switch' incorporates:
         *  UnitDelay: '<S276>/UnitDelay1'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay1_DSTATE_he;
    }

    /* End of Switch: '<S276>/Switch' */

    /* Update for UnitDelay: '<S276>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_j1 = rtb_Subtraction2;

    /* Update for UnitDelay: '<S276>/UnitDelay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_he = rtb_Subtraction2;

    /* Logic: '<S142>/Logical1' incorporates:
     *  Constant: '<S272>/Constant'
     *  Constant: '<S274>/Calib'
     *  Logic: '<S142>/Logical3'
     *  MinMax: '<S276>/MinMax'
     *  RelationalOperator: '<S142>/Comparison1'
     *  RelationalOperator: '<S142>/Comparison2'
     *  RelationalOperator: '<S33>/Comparison3'
     *  Switch: '<S15>/Switch17'
     */
    VeTRGC_b_TXWarn2_Warn22 = ((fminf(rtb_Subtraction2, KeTRGR_t_EPBActiveDbnc) >=
        KeTRGR_t_EPBActiveDbnc) && (((uint32)VeTRGI_e_EPB_HoldSts) !=
        CePLTR_e_EPBHoldSts_APPLIED));

    /* End of Outputs for SubSystem: '<S142>/Stop_Watch_Reset_Enabled' */

    /* Switch: '<S142>/Switch11' incorporates:
     *  DataStoreRead: '<S142>/Dsr_PID_AStrtEntry21'
     *  DataStoreRead: '<S142>/Dsr_PID_AStrtEntry22'
     *  DataStoreWrite: '<S142>/Dsw_PID_AStrtEntry11'
     *  S-Function (sfix_bitop): '<S270>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S270>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S270>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S271>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn2_Warn22)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 1024U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 1024U);
    }

    /* End of Switch: '<S142>/Switch11' */

    /* Outputs for Atomic SubSystem: '<S126>/SignalLatchOnWithReset' */
    /* Logic: '<S156>/OR1' incorporates:
     *  Constant: '<S152>/Constant'
     *  Constant: '<S153>/Constant'
     *  Logic: '<S126>/Logical3'
     *  Logic: '<S156>/NOT'
     *  Logic: '<S156>/OR'
     *  RelationalOperator: '<S126>/Comparison3'
     *  RelationalOperator: '<S126>/Comparison6'
     *  RelationalOperator: '<S33>/Comparison3'
     *  Switch: '<S15>/Switch17'
     *  Switch: '<S33>/Switch1'
     *  UnitDelay: '<S156>/Unit Delay'
     */
    VeTRGC_b_EnblAutoApplyEPBTmr = (((((uint32)rtb_Switch1_id) ==
        CeTRGR_e_EPBReq_ACTIVE) && tmpRead_3) || ((((uint32)VeTRGI_e_EPB_HoldSts)
        != CePLTR_e_EPBHoldSts_REL) && (VeTRGC_b_EnblAutoApplyEPBTmr)));

    /* End of Outputs for SubSystem: '<S126>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S126>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S157>/Switch2' incorporates:
     *  Logic: '<S126>/Logical2'
     *  Switch: '<S157>/Switch1'
     */
    if (!VeTRGC_b_EnblAutoApplyEPBTmr)
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S157>/ConstantValue2'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S155>/Calib'
         *  Sum: '<S157>/Subtraction'
         *  Switch: '<S157>/Switch2'
         *  UnitDelay: '<S157>/UnitDelay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_pn;
    }

    /* End of Switch: '<S157>/Switch2' */

    /* Switch: '<S157>/Switch' incorporates:
     *  Constant: '<S157>/ConstantValue3'
     *  RelationalOperator: '<S157>/Comparison1'
     */
    if (rtb_Subtraction2 >= 5.0F)
    {
        /* Switch: '<S157>/Switch' incorporates:
         *  UnitDelay: '<S157>/UnitDelay1'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay1_DSTATE_k;
    }

    /* End of Switch: '<S157>/Switch' */

    /* MinMax: '<S157>/MinMax' incorporates:
     *  Constant: '<S154>/Calib'
     */
    VeTRGC_t_EnblAutoApplyEPBTmr = fminf(rtb_Subtraction2,
        KeTRGR_t_EPBActiveDbnc_AutoApplyMsg);

    /* Update for UnitDelay: '<S157>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_pn = rtb_Subtraction2;

    /* Update for UnitDelay: '<S157>/UnitDelay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_k = rtb_Subtraction2;

    /* End of Outputs for SubSystem: '<S126>/Stop_Watch_Reset_Enabled' */

    /* RelationalOperator: '<S126>/Comparison1' incorporates:
     *  Constant: '<S154>/Calib'
     */
    VeTRGC_b_AutoApplyEPB = (VeTRGC_t_EnblAutoApplyEPBTmr >=
        KeTRGR_t_EPBActiveDbnc_AutoApplyMsg);

    /* Logic: '<S126>/Logical1' incorporates:
     *  Constant: '<S151>/Constant'
     *  RelationalOperator: '<S126>/Comparison2'
     *  RelationalOperator: '<S33>/Comparison3'
     *  Switch: '<S15>/Switch17'
     */
    TRGR_ac_B.VeTRGR_b_EPBApplyDisp = ((VeTRGC_b_AutoApplyEPB) && (((uint32)
        VeTRGI_e_EPB_HoldSts) == CePLTR_e_EPBHoldSts_APPLIED));

    /* Switch: '<S126>/Switch12' incorporates:
     *  DataStoreRead: '<S126>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S126>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S126>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S149>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S150>/FixPt Bitwise Operator1'
     */
    if (TRGR_ac_B.VeTRGR_b_EPBApplyDisp)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 4096U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 4096U);
    }

    /* End of Switch: '<S126>/Switch12' */

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S191>/Constant'
     *  Constant: '<S192>/Constant'
     *  Logic: '<S133>/Logical3'
     *  RelationalOperator: '<S133>/Comparison1'
     *  RelationalOperator: '<S133>/Comparison2'
     */
    rtb_Comparison18_p = ((((uint32)TRGR_ac_B.DataTypeConversion_e) ==
                           CeTRGR_e_TransRangeDrive) || (((uint32)
                            TRGR_ac_B.DataTypeConversion_e) ==
                           CeTRGR_e_TransRangeReverse));

    /* Logic: '<S133>/Logical1' incorporates:
     *  Constant: '<S195>/Calib'
     */
    VeTRGC_b_TXWarn_Press_Brk_Repeat1 = ((KeTRGR_b_NeutLk_Drv_Rq) &&
        rtb_Comparison18_p);

    /* Switch: '<S28>/Switch1' incorporates:
     *  Constant: '<S497>/Calib'
     */
    if (KeTRGR_b_UseCANDriverReq)
    {
        /* Switch: '<S702>/Switch1' incorporates:
         *  DataTypeConversion: '<S911>/DataTypeConversion'
         */
        rtb_Switch1_fp = TRGR_ac_B.DataTypeConversion_i;
    }
    else
    {
        /* Switch: '<S702>/Switch1' incorporates:
         *  Switch: '<S25>/Switch1'
         */
        rtb_Switch1_fp = VeTRGC_e_DrvReqRaw_WithSNA;
    }

    /* End of Switch: '<S28>/Switch1' */

    /* RelationalOperator: '<S499>/Comparison2' incorporates:
     *  DataTypeConversion: '<S778>/DataTypeConversion'
     */
    VeTRGC_e_TransRngSt_Crnt = VeTRGC_e_CrntTrnsRngSt;

    /* Logic: '<S499>/Logical3' incorporates:
     *  Constant: '<S515>/Constant'
     *  Constant: '<S517>/Constant'
     *  Constant: '<S526>/Calib'
     *  Logic: '<S499>/Logical10'
     *  RelationalOperator: '<S499>/Comparison2'
     *  RelationalOperator: '<S499>/Comparison6'
     *  RelationalOperator: '<S499>/Comparison9'
     */
    VeTRGC_b_EnblNLockTmr = (((((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangeNeutral) && (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral)) && (rtb_MinMax1 < KeTRGR_v_NeutLockSpdTh));

    /* Logic: '<S499>/Logical6' incorporates:
     *  Constant: '<S516>/Constant'
     *  Constant: '<S518>/Constant'
     *  Constant: '<S521>/Calib'
     *  Logic: '<S499>/Logical7'
     *  RelationalOperator: '<S499>/Comparison10'
     *  RelationalOperator: '<S499>/Comparison3'
     */
    VeTRGC_b_RstNLockTmr = (((TRGR_ac_B.VeTRGR_b_BrkApplied) || ((((uint32)
        rtb_Switch1_fp) == CeTRGR_e_TransRangeDrive) && (KeTRGR_b_Enbl_NLck_D)))
                            || (((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangePark));

    /* Switch: '<S499>/Switch' incorporates:
     *  Constant: '<S512>/Constant'
     *  RelationalOperator: '<S499>/Comparison5'
     */
    if (((uint32)VeTRGI_e_VehicleCountryCode) == CePLTR_e_VCC_CHINA)
    {
        /* Switch: '<S499>/Switch' incorporates:
         *  Constant: '<S523>/Calib'
         */
        rtb_Switch_d3 = KeTRGR_t_RevLockTmrTh;
    }
    else
    {
        /* Switch: '<S499>/Switch' incorporates:
         *  Constant: '<S522>/Calib'
         */
        rtb_Switch_d3 = KeTRGR_t_NeutLockTmrTh;
    }

    /* End of Switch: '<S499>/Switch' */

    /* Switch: '<S499>/Switch2' incorporates:
     *  Constant: '<S519>/Calib'
     *  Logic: '<S499>/Logical2'
     */
    if (KeTRGR_b_Dsbl_NLck_BrkRst)
    {
        rtb_Logical1_hh = !VeTRGC_b_EnblNLockTmr;
    }
    else
    {
        rtb_Logical1_hh = VeTRGC_b_RstNLockTmr;
    }

    /* End of Switch: '<S499>/Switch2' */

    /* Outputs for Atomic SubSystem: '<S499>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S527>/Switch1' incorporates:
     *  Switch: '<S527>/Switch2'
     */
    if (rtb_Logical1_hh)
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S527>/ConstantValue2'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else if (VeTRGC_b_EnblNLockTmr)
    {
        /* Switch: '<S527>/Switch2' incorporates:
         *  Constant: '<S525>/Calib'
         *  Sum: '<S527>/Subtraction'
         *  Sum: '<S90>/Subtraction2'
         *  UnitDelay: '<S527>/UnitDelay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_b;
    }
    else
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Switch: '<S527>/Switch2'
         *  UnitDelay: '<S527>/UnitDelay'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay_DSTATE_b;
    }

    /* End of Switch: '<S527>/Switch1' */

    /* Switch: '<S527>/Switch' incorporates:
     *  Constant: '<S527>/ConstantValue3'
     *  RelationalOperator: '<S527>/Comparison1'
     */
    if (rtb_Subtraction2 >= 5.0F)
    {
        /* Switch: '<S527>/Switch' incorporates:
         *  UnitDelay: '<S527>/UnitDelay1'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay1_DSTATE_h;
    }

    /* End of Switch: '<S527>/Switch' */

    /* MinMax: '<S527>/MinMax' */
    VeTRGC_t_EnblNLockTmr = fminf(rtb_Subtraction2, rtb_Switch_d3);

    /* Update for UnitDelay: '<S527>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_b = rtb_Subtraction2;

    /* Update for UnitDelay: '<S527>/UnitDelay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_h = rtb_Subtraction2;

    /* End of Outputs for SubSystem: '<S499>/Stop_Watch_Reset_Enabled' */

    /* Logic: '<S499>/Logical4' incorporates:
     *  DataTypeConversion: '<S499>/DataTypeConversion'
     *  RelationalOperator: '<S499>/Comparison7'
     *  RelationalOperator: '<S499>/Comparison8'
     */
    VeTRGC_b_IgnoreBrkKeyOff_LockN = ((((sint32)VeTRGI_e_PMM_PowerMode) == 1) ||
        (((sint32)VeTRGI_e_PMM_PowerMode) == 0));

    /* Logic: '<S31>/Logical2' incorporates:
     *  Logic: '<S32>/Logical6'
     *  Logic: '<S478>/Logical4'
     */
    rtb_AND_p1 = !TRGR_ac_B.VeTRGR_b_TransmissionFailSts;

    /* Logic: '<S31>/Logical6' incorporates:
     *  Logic: '<S32>/Logical2'
     *  Logic: '<S478>/Logical2'
     */
    rtb_AND_g5 = !VeTRGI_b_ShftSensFA;

    /* Logic: '<S31>/Logical7' incorporates:
     *  Constant: '<S796>/Constant'
     *  Constant: '<S797>/Calib'
     *  Logic: '<S31>/Logical1'
     *  Logic: '<S31>/Logical2'
     *  Logic: '<S31>/Logical6'
     *  RelationalOperator: '<S31>/Comparison4'
     */
    TRGR_ac_B.VeTRGR_b_ADAS_Allowed = (((((((((uint32)VeTRGC_e_TransRngSt_Crnt)
        != CeTRGR_e_TransRangeIllegal) && (VeTRGI_b_DrvAllwd)) &&
        (VeTRGI_b_NeutAllwd)) && (KeTRGR_b_Enable_PPPA)) && rtb_AND_g5) &&
        (!VeTRGI_b_ShiftDispFlt)) && rtb_AND_p1);

    /* Logic: '<S28>/Logical3' incorporates:
     *  Constant: '<S493>/Constant'
     *  Constant: '<S494>/Constant'
     *  Constant: '<S495>/Constant'
     *  Constant: '<S496>/Constant'
     *  Logic: '<S28>/Logical4'
     *  Logic: '<S28>/Logical5'
     *  RelationalOperator: '<S28>/Comparison1'
     *  RelationalOperator: '<S28>/Comparison2'
     *  RelationalOperator: '<S28>/Comparison3'
     *  RelationalOperator: '<S28>/Comparison5'
     */
    rtb_Logical3_gp = ((((((((uint32)VeTRGI_e_ParkingGearShiftReq_BSM) ==
                            CePLTR_e_GearShiftReq_P) || (((uint32)
        VeTRGI_e_ParkingGearShiftReq_BSM) == CePLTR_e_GearShiftReq_R)) ||
                          (((uint32)VeTRGI_e_ParkingGearShiftReq_BSM) ==
                           CePLTR_e_GearShiftReq_N)) || (((uint32)
                           VeTRGI_e_ParkingGearShiftReq_BSM) ==
                          CePLTR_e_GearShiftReq_D)) &&
                        (!VeTRGI_b_ParkingGearShiftReq_BSM_FA)) &&
                       (TRGR_ac_B.VeTRGR_b_ADAS_Allowed));

    /* Logic: '<S499>/Logical8' incorporates:
     *  Logic: '<S498>/Logical1'
     *  Logic: '<S500>/Logical13'
     *  Logic: '<S703>/Logical2'
     *  Logic: '<S704>/Logical3'
     *  Logic: '<S705>/Logical2'
     *  Switch: '<S500>/Switch'
     */
    rtb_Logical2_or = !TRGR_ac_B.VeTRGR_b_BrakeFA;

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGR_PRNDL_IPCntrls'
     */
    /* Outputs for Atomic SubSystem: '<S18>/TRGR_IP_NegResp' */
    /* Outputs for Atomic SubSystem: '<S703>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S726>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S705>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S753>/EdgeFalling1' */
    /* Outputs for Atomic SubSystem: '<S704>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S741>/EdgeFalling1' */
    /* Switch: '<S499>/Switch1' incorporates:
     *  Logic: '<S1112>/Logical1'
     *  Logic: '<S498>/Logical2'
     *  Logic: '<S728>/OR1'
     *  Logic: '<S742>/OR1'
     *  Logic: '<S754>/OR1'
     */
    tmpRead_3 = !TRGR_ac_B.VeTRGR_b_BrkApplied;

    /* End of Outputs for SubSystem: '<S741>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S704>/TurnOffDelaySampleModified' */
    /* End of Outputs for SubSystem: '<S753>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S705>/TurnOffDelaySampleModified' */
    /* End of Outputs for SubSystem: '<S726>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S703>/TurnOffDelaySampleModified' */
    /* End of Outputs for SubSystem: '<S18>/TRGR_IP_NegResp' */

    /* Logic: '<S499>/Logical9' incorporates:
     *  Logic: '<S498>/Logical6'
     */
    rtb_AND12 = !rtb_Logical3_gp;

    /* Logic: '<S499>/Logical12' incorporates:
     *  Constant: '<S520>/Calib'
     *  Constant: '<S524>/Calib'
     *  Logic: '<S499>/Logical13'
     *  Logic: '<S499>/Logical5'
     *  Logic: '<S499>/Logical8'
     *  Logic: '<S499>/Logical9'
     *  RelationalOperator: '<S499>/Comparison4'
     *  Sum: '<S499>/Sum2'
     *  Switch: '<S499>/Switch1'
     */
    VeTRGC_b_ShiftLockN = ((((VeTRGC_t_EnblNLockTmr >= (rtb_Switch_d3 -
        KeTRGR_t_ShftrLockComplete)) && rtb_Logical2_or) &&
                            (((!VeTRGC_b_IgnoreBrkKeyOff_LockN) ||
        (!KeTRGR_b_EnblNShftLock_KeyPos)) && tmpRead_3)) && rtb_AND12);

    /* Logic: '<S511>/AND' incorporates:
     *  Logic: '<S499>/Logical1'
     *  RelationalOperator: '<S499>/Comparison1'
     */
    TRGR_ac_B.AND_j = ((VeTRGC_t_EnblNLockTmr >= rtb_Switch_d3) &&
                       (VeTRGC_b_ShiftLockN));

    /* Outputs for Atomic SubSystem: '<S704>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S741>/EdgeFalling1' */
    /* Logic: '<S742>/AND' incorporates:
     *  UnitDelay: '<S742>/Unit Delay'
     */
    rtb_Logical1_hh = (tmpRead_3 && (TRGR_ac_DW.UnitDelay_DSTATE_l4));

    /* Update for UnitDelay: '<S742>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_l4 = TRGR_ac_B.VeTRGR_b_BrkApplied;

    /* End of Outputs for SubSystem: '<S741>/EdgeFalling1' */

    /* Switch: '<S741>/Switch' incorporates:
     *  MinMax: '<S741>/Minimum1'
     *  UnitDelay: '<S741>/UnitDelay'
     */
    if (rtb_Logical1_hh)
    {
        /* MinMax: '<S741>/Minimum1' incorporates:
         *  Constant: '<S738>/Calib'
         *  UnitDelay: '<S741>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_i = KeTRGR_t_BrkRlsDbnc;
    }
    else
    {
        if (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_i) <= 1)
        {
            /* MinMax: '<S741>/Minimum1' */
            TRGR_ac_DW.UnitDelay_DSTATE_i = 1U;
        }

        /* MinMax: '<S741>/Minimum1' incorporates:
         *  Constant: '<S741>/ConstantValue'
         *  Sum: '<S741>/Summation'
         *  UnitDelay: '<S741>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_i = (uint16)((sint32)(((sint32)
            TRGR_ac_DW.UnitDelay_DSTATE_i) - 1));
    }

    /* End of Switch: '<S741>/Switch' */

    /* Logic: '<S741>/AND' incorporates:
     *  Constant: '<S741>/ConstantValue2'
     *  RelationalOperator: '<S741>/GreaterThan'
     *  UnitDelay: '<S741>/UnitDelay'
     */
    VeTRGC_b_BrkRlsDbnc_P = ((TRGR_ac_B.VeTRGR_b_BrkApplied) || (((sint32)
        TRGR_ac_DW.UnitDelay_DSTATE_i) > 0));

    /* End of Outputs for SubSystem: '<S704>/TurnOffDelaySampleModified' */

    /* Switch: '<S704>/Switch' incorporates:
     *  Constant: '<S737>/Calib'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S704>/Switch' incorporates:
         *  RelationalOperator: '<S704>/Comparison2'
         */
        VeTRGC_b_Sts_Chng_P = (VeTRGC_e_TransRngSt_Crnt !=
                               TRGR_ac_B.DataTypeConversion_e);
    }
    else
    {
        /* Switch: '<S704>/Switch' incorporates:
         *  RelationalOperator: '<S704>/Comparison5'
         *  UnitDelay: '<S704>/UnitDelay2'
         */
        VeTRGC_b_Sts_Chng_P = (TRGR_ac_B.DataTypeConversion_e !=
                               TRGR_ac_DW.UnitDelay2_DSTATE_p);
    }

    /* End of Switch: '<S704>/Switch' */

    /* Logic: '<S500>/Logical14' incorporates:
     *  Constant: '<S535>/Calib'
     *  Constant: '<S537>/Calib'
     *  Logic: '<S500>/Logical15'
     *  Logic: '<S500>/Logical7'
     */
    VeTRGC_b_ShiftLockP_IgnoreBrk = (((VeTRGI_b_SCC_Actv) ||
        ((VeTRGI_b_H2_Refuel_Sts) && (KeTRGR_b_EnblPShftLock_RefuelSts))) ||
        ((VeTRGI_b_HoodOpen) && (KeTRGR_b_EnblPShftLock_HoodOpen)));

    /* Logic: '<S704>/Logical9' incorporates:
     *  Logic: '<S704>/Logical11'
     */
    rtb_OR1_ct = !VeTRGC_b_ShiftLockP_IgnoreBrk;

    /* Logic: '<S704>/Logical2' incorporates:
     *  Logic: '<S704>/Logical9'
     */
    VeTRGC_b_BrkPrss_PRNDChng_P = (((rtb_Logical2_or && (VeTRGC_b_BrkRlsDbnc_P))
        && (VeTRGC_b_Sts_Chng_P)) && rtb_OR1_ct);

    /* Logic: '<S704>/Logical5' incorporates:
     *  Constant: '<S735>/Constant'
     *  RelationalOperator: '<S704>/Comparison9'
     */
    rtb_Logical1_hh = ((VeTRGI_b_PPawlFlt_InhibitMtr) || (((uint32)
                         VeTRGI_e_PPawlReq) == CePPCR_e_PPAWL_STUCK_ENGAGED));

    /* Outputs for Atomic SubSystem: '<S704>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S704>/SignalLatchOnWithReset1' */
    /* Logic: '<S740>/NOT' incorporates:
     *  Constant: '<S731>/Constant'
     *  Constant: '<S732>/Constant'
     *  Constant: '<S733>/Constant'
     *  Constant: '<S734>/Constant'
     *  Logic: '<S704>/Logical1'
     *  Logic: '<S739>/NOT'
     *  RelationalOperator: '<S704>/Comparison1'
     *  RelationalOperator: '<S704>/Comparison6'
     *  RelationalOperator: '<S704>/Comparison7'
     *  RelationalOperator: '<S704>/Comparison8'
     */
    rtb_AND_nj = ((((((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
                       CeTRGR_e_TransRangeReverse) && (((uint32)
                        VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeNeutral))
                     && (((uint32)VeTRGC_e_TransRngSt_Crnt) !=
                         CeTRGR_e_TransRangeDrive)) && (((uint32)
                      VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeIllegal)) &&
                   (!rtb_Logical1_hh)) && (!rtb_Logical3_gp));

    /* End of Outputs for SubSystem: '<S704>/SignalLatchOnWithReset' */

    /* Logic: '<S740>/OR1' incorporates:
     *  Logic: '<S740>/NOT'
     *  Logic: '<S740>/OR'
     *  UnitDelay: '<S740>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_my = ((VeTRGC_b_BrkPrss_PRNDChng_P) ||
        (rtb_AND_nj && (TRGR_ac_DW.UnitDelay_DSTATE_my)));

    /* End of Outputs for SubSystem: '<S704>/SignalLatchOnWithReset1' */

    /* Switch: '<S704>/Switch1' incorporates:
     *  Constant: '<S737>/Calib'
     *  Logic: '<S704>/Logical6'
     *  Logic: '<S704>/Logical7'
     *  UnitDelay: '<S740>/Unit Delay'
     */
    if (KeTRGR_b_ShftProxi)
    {
        rtb_Logical1_hh = ((VeTRGC_b_BrkPrss_PRNDChng_P) && (!rtb_Logical1_hh));
    }
    else
    {
        rtb_Logical1_hh = TRGR_ac_DW.UnitDelay_DSTATE_my;
    }

    /* End of Switch: '<S704>/Switch1' */

    /* Logic: '<S704>/Logical8' incorporates:
     *  Logic: '<S704>/Logical10'
     */
    VeTRGC_b_PRNDChng_WithBrk_P = (rtb_Logical1_hh || (rtb_Logical3_gp &&
        rtb_OR1_ct));

    /* Logic: '<S133>/Logical4' incorporates:
     *  Constant: '<S193>/Constant'
     *  Constant: '<S194>/Constant'
     *  Logic: '<S133>/Logical2'
     *  Logic: '<S133>/Logical5'
     *  RelationalOperator: '<S133>/Comparison3'
     *  RelationalOperator: '<S133>/Comparison4'
     */
    VeTRGC_b_TXWarn_Press_Brk_Repeat_P = (((rtb_Comparison18_p || (((uint32)
        TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeNeutral)) &&
        (!VeTRGC_b_PRNDChng_WithBrk_P)) && (((uint32)
        VeTRGC_e_VldtdTransRngStateERS) == CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S705>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S753>/EdgeFalling1' */
    /* Logic: '<S754>/AND' incorporates:
     *  UnitDelay: '<S754>/UnitDelay'
     */
    rtb_Logical1_hh = (tmpRead_3 && (TRGR_ac_DW.UnitDelay_DSTATE_fng));

    /* Update for UnitDelay: '<S754>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_fng = TRGR_ac_B.VeTRGR_b_BrkApplied;

    /* End of Outputs for SubSystem: '<S753>/EdgeFalling1' */

    /* Switch: '<S753>/Switch' incorporates:
     *  MinMax: '<S753>/Minimum1'
     *  UnitDelay: '<S753>/UnitDelay'
     */
    if (rtb_Logical1_hh)
    {
        /* MinMax: '<S753>/Minimum1' incorporates:
         *  Constant: '<S750>/Calib'
         *  UnitDelay: '<S753>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_mp = KeTRGR_t_BrkRlsDbnc;
    }
    else
    {
        if (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_mp) <= 1)
        {
            /* MinMax: '<S753>/Minimum1' */
            TRGR_ac_DW.UnitDelay_DSTATE_mp = 1U;
        }

        /* MinMax: '<S753>/Minimum1' incorporates:
         *  Constant: '<S753>/ConstantValue'
         *  Sum: '<S753>/Summation'
         *  UnitDelay: '<S753>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_mp = (uint16)((sint32)(((sint32)
            TRGR_ac_DW.UnitDelay_DSTATE_mp) - 1));
    }

    /* End of Switch: '<S753>/Switch' */

    /* Logic: '<S705>/Logical5' incorporates:
     *  Constant: '<S744>/Constant'
     *  Constant: '<S753>/ConstantValue2'
     *  Logic: '<S753>/AND'
     *  RelationalOperator: '<S705>/Comparison1'
     *  RelationalOperator: '<S705>/Comparison10'
     *  RelationalOperator: '<S753>/GreaterThan'
     *  UnitDelay: '<S705>/UnitDelay1'
     *  UnitDelay: '<S753>/UnitDelay'
     */
    VeTRGC_b_BrkRlsDbnc_R = ((((TRGR_ac_B.VeTRGR_b_BrkApplied) || (((sint32)
        TRGR_ac_DW.UnitDelay_DSTATE_mp) > 0)) && (TRGR_ac_B.DataTypeConversion_e
        != TRGR_ac_DW.UnitDelay1_DSTATE_o)) && (((uint32)
        TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeReverse));

    /* End of Outputs for SubSystem: '<S705>/TurnOffDelaySampleModified' */

    /* Outputs for Atomic SubSystem: '<S705>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S705>/SignalLatchOnWithReset1' */
    /* Logic: '<S752>/NOT' incorporates:
     *  Constant: '<S746>/Constant'
     *  Constant: '<S747>/Constant'
     *  Constant: '<S748>/Constant'
     *  Logic: '<S705>/Logical4'
     *  Logic: '<S751>/NOT'
     *  RelationalOperator: '<S705>/Comparison11'
     *  RelationalOperator: '<S705>/Comparison12'
     *  RelationalOperator: '<S705>/Comparison2'
     */
    rtb_Logical1_hh = (((((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
                           CeTRGR_e_TransRangeReverse) && (((uint32)
                            VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangePark))
                         && (((uint32)VeTRGC_e_TransRngSt_Crnt) !=
                          CeTRGR_e_TransRangeIllegal)) &&
                        (!VeTRGI_b_PPawlFlt_InhibitMtr)) && (!rtb_Logical3_gp));

    /* End of Outputs for SubSystem: '<S705>/SignalLatchOnWithReset' */

    /* Logic: '<S752>/OR1' incorporates:
     *  Logic: '<S752>/NOT'
     *  Logic: '<S752>/OR'
     *  UnitDelay: '<S752>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_ph = ((VeTRGC_b_BrkRlsDbnc_R) ||
        (rtb_Logical1_hh && (TRGR_ac_DW.UnitDelay_DSTATE_ph)));

    /* End of Outputs for SubSystem: '<S705>/SignalLatchOnWithReset1' */

    /* Logic: '<S498>/Logical18' incorporates:
     *  Constant: '<S510>/Calib'
     *  RelationalOperator: '<S498>/Comparison6'
     */
    VeTRGC_b_NoBRakeWhileShiftR = (((rtb_MinMax1 < KeTRGR_v_RevLockSpdTh) &&
        tmpRead_3) && rtb_Logical2_or);

    /* Logic: '<S501>/AND' incorporates:
     *  Constant: '<S502>/Constant'
     *  Constant: '<S503>/Constant'
     *  Constant: '<S504>/Constant'
     *  Constant: '<S505>/Constant'
     *  Constant: '<S506>/Constant'
     *  Constant: '<S507>/Constant'
     *  Constant: '<S508>/Constant'
     *  Constant: '<S509>/Calib'
     *  Constant: '<S510>/Calib'
     *  Logic: '<S498>/Logical17'
     *  Logic: '<S498>/Logical20'
     *  Logic: '<S498>/Logical21'
     *  Logic: '<S498>/Logical3'
     *  Logic: '<S498>/Logical4'
     *  Logic: '<S498>/Logical5'
     *  RelationalOperator: '<S498>/Comparison10'
     *  RelationalOperator: '<S498>/Comparison11'
     *  RelationalOperator: '<S498>/Comparison12'
     *  RelationalOperator: '<S498>/Comparison13'
     *  RelationalOperator: '<S498>/Comparison2'
     *  RelationalOperator: '<S498>/Comparison4'
     *  RelationalOperator: '<S498>/Comparison5'
     *  RelationalOperator: '<S498>/Comparison7'
     */
    TRGR_ac_B.AND_o = ((((((((((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangeNeutral) && (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral)) || ((((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangeDrive) && (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive))) || ((((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangeDrive1) && (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive))) && ((rtb_MinMax1 >= KeTRGR_v_RevLockSpdTh) ||
                           (VeTRGC_b_NoBRakeWhileShiftR))) && (((uint32)
                           VeTRGI_e_VehicleCountryCode) == CePLTR_e_VCC_CHINA)) &&
                        (KeTRGR_b_RevLockEnbl)) && rtb_AND12);

    /* Outputs for Atomic SubSystem: '<S705>/SignalLatchOnWithReset' */
    /* Logic: '<S751>/OR1' incorporates:
     *  Constant: '<S745>/Constant'
     *  Logic: '<S705>/Logical6'
     *  Logic: '<S751>/OR'
     *  RelationalOperator: '<S705>/Comparison5'
     *  UnitDelay: '<S751>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_gt = ((((((uint32)VeTRGI_e_VehicleCountryCode) ==
        CePLTR_e_VCC_CHINA) && (TRGR_ac_B.AND_o)) && rtb_Logical2_or) ||
        (rtb_Logical1_hh && (TRGR_ac_DW.UnitDelay_DSTATE_gt)));

    /* End of Outputs for SubSystem: '<S705>/SignalLatchOnWithReset' */

    /* Logic: '<S743>/AND' incorporates:
     *  UnitDelay: '<S751>/Unit Delay'
     */
    TRGR_ac_B.AND_ju = TRGR_ac_DW.UnitDelay_DSTATE_gt;

    /* Switch: '<S749>/Switch1' incorporates:
     *  UnitDelay: '<S752>/Unit Delay'
     */
    rtb_Comparison11_oj = ((!TRGR_ac_B.AND_ju) ||
                           (TRGR_ac_DW.UnitDelay_DSTATE_ph));

    /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromD' incorporates:
     *  ActionPort: '<S707>/ActionPort'
     */
    /* If: '<S688>/If1' incorporates:
     *  Logic: '<S133>/Logical8'
     *  Truth Table: '<S707>/TruthTable'
     */
    aVarTruthTableCondition_2 = !rtb_Comparison11_oj;

    /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromD' */

    /* Logic: '<S133>/Logical7' incorporates:
     *  Constant: '<S190>/Constant'
     *  Logic: '<S133>/Logical8'
     *  RelationalOperator: '<S133>/Comparison5'
     */
    VeTRGC_b_TXWarn_Press_Brk_Repeat_R = (aVarTruthTableCondition_2 && (((uint32)
        TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeReverse));

    /* Logic: '<S133>/Logical6' */
    VeTRGC_b_TXWarn_Press_Brk_Repeat2 = ((VeTRGC_b_TXWarn_Press_Brk_Repeat_P) ||
        (VeTRGC_b_TXWarn_Press_Brk_Repeat_R));

    /* Switch: '<S133>/Switch2' */
    if (TRGR_ac_B.AND_j)
    {
        /* Switch: '<S133>/Switch2' */
        VeTRGC_b_TXWarn_Press_Brk_Repeat_Arb = VeTRGC_b_TXWarn_Press_Brk_Repeat1;
    }
    else
    {
        /* Switch: '<S133>/Switch2' */
        VeTRGC_b_TXWarn_Press_Brk_Repeat_Arb = VeTRGC_b_TXWarn_Press_Brk_Repeat2;
    }

    /* End of Switch: '<S133>/Switch2' */

    /* Logic: '<S133>/Logical' incorporates:
     *  Constant: '<S196>/Calib'
     *  Logic: '<S133>/Logical19'
     */
    VeTRGC_b_TXWarn_Press_Brk_Repeat = (((!VeTRGI_b_Valid_Plugin) &&
        (KeTRGR_b_TXWarn_Prss_Brk_Repeat)) &&
        (VeTRGC_b_TXWarn_Press_Brk_Repeat_Arb));

    /* Outputs for Atomic SubSystem: '<S133>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S199>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S200>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_ps;

    /* Update for UnitDelay: '<S200>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_ps = VeTRGC_b_TXWarn_Press_Brk_Repeat;

    /* Switch: '<S199>/Switch' incorporates:
     *  Constant: '<S197>/Calib'
     *  Constant: '<S198>/Calib'
     *  Constant: '<S199>/ConstantValue1'
     *  Logic: '<S200>/AND'
     *  Logic: '<S200>/OR1'
     *  MinMax: '<S199>/Minimum'
     *  Sum: '<S199>/Summation'
     *  UnitDelay: '<S199>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn_Press_Brk_Repeat) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_l1 = KeTRGR_t_TXWarn_Press_Brk_Repeat_Dly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_l1 = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_l1 -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S199>/Switch' */
    /* End of Outputs for SubSystem: '<S199>/EdgeFalling1' */

    /* Switch: '<S133>/Switch10' incorporates:
     *  Constant: '<S199>/ConstantValue2'
     *  DataStoreRead: '<S133>/Dsr_PID_AStrtEntry19'
     *  DataStoreRead: '<S133>/Dsr_PID_AStrtEntry20'
     *  DataStoreWrite: '<S133>/Dsw_PID_AStrtEntry10'
     *  Logic: '<S199>/AND'
     *  RelationalOperator: '<S199>/GreaterThan'
     *  S-Function (sfix_bitop): '<S188>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S188>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S188>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S189>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S199>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn_Press_Brk_Repeat) || (TRGR_ac_DW.UnitDelay_DSTATE_l1 >
            0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 32768U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 32768U);
    }

    /* End of Switch: '<S133>/Switch10' */
    /* End of Outputs for SubSystem: '<S133>/TurnOffDelayTime' */

    /* Logic: '<S135>/Logical5' incorporates:
     *  Logic: '<S21>/Logical2'
     *  Logic: '<S555>/Logical10'
     */
    rtb_OR1_ct = !VeTRGI_b_DrvAllwd;

    /* Logic: '<S135>/Logical3' incorporates:
     *  Constant: '<S207>/Constant'
     *  Constant: '<S208>/Constant'
     *  Logic: '<S135>/Logical4'
     *  Logic: '<S135>/Logical5'
     *  RelationalOperator: '<S135>/Comparison3'
     *  RelationalOperator: '<S135>/Comparison4'
     */
    VeTRGC_b_TXWarn_Shift_Not_Allwd1 = (rtb_OR1_ct && ((((uint32)
        VeTRGC_e_RngSt_WithLOC_D) == CeTRGR_e_TransRangeReverse) || (((uint32)
        VeTRGC_e_RngSt_WithLOC_D) == CeTRGR_e_TransRangeDrive)));

    /* Logic: '<S135>/Logical6' incorporates:
     *  Constant: '<S206>/Constant'
     *  Constant: '<S209>/Constant'
     *  Constant: '<S210>/Constant'
     *  Constant: '<S211>/Constant'
     *  Constant: '<S212>/Calib'
     *  Logic: '<S135>/Logical8'
     *  RelationalOperator: '<S135>/Comparison1'
     *  RelationalOperator: '<S135>/Comparison11'
     *  RelationalOperator: '<S135>/Comparison2'
     *  RelationalOperator: '<S135>/Comparison5'
     *  RelationalOperator: '<S135>/Comparison6'
     */
    VeTRGC_b_TXWarn_Shift_Not_Allwd2 = (((((((uint32)VeTRGC_e_RngSt_WithLOC_D)
        != CeTRGR_e_TransRangeIllegal) && (((uint32)VeTRGC_e_RngSt_WithLOC_D) !=
        CeTRGR_e_NoSelectionAvailable)) && (((uint32)VeTRGC_e_RngSt_WithLOC_D)
        != CeTRGR_e_TransRangePark)) && (CeTRGR_e_TransRangePark == ((uint32)
        VeTRGC_e_TransRngSt_Crnt))) && ((((uint32)VeTRGC_e_RngSt_WithLOC_D) !=
        CeTRGR_e_TransRangeNeutral) || (KeTRGR_b_TXWarn_ReqN_Shift_Not_Allwd)));

    /* Switch: '<S135>/Switch2' */
    if (VeTRGI_b_NeutAllwd)
    {
        /* Switch: '<S135>/Switch2' */
        VeTRGC_b_TXWarn_Shift_Not_Allwd_Arb = VeTRGC_b_TXWarn_Shift_Not_Allwd1;
    }
    else
    {
        /* Switch: '<S135>/Switch2' */
        VeTRGC_b_TXWarn_Shift_Not_Allwd_Arb = VeTRGC_b_TXWarn_Shift_Not_Allwd2;
    }

    /* End of Switch: '<S135>/Switch2' */

    /* Logic: '<S135>/Logical' incorporates:
     *  Constant: '<S213>/Calib'
     */
    VeTRGC_b_TXWarn_Shift_Not_Allwd = ((KeTRGR_b_TXWarn_Shift_Not_Allwd) &&
        (VeTRGC_b_TXWarn_Shift_Not_Allwd_Arb));

    /* Outputs for Atomic SubSystem: '<S135>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S216>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S217>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_c3;

    /* Update for UnitDelay: '<S217>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_c3 = VeTRGC_b_TXWarn_Shift_Not_Allwd;

    /* Switch: '<S216>/Switch' incorporates:
     *  Constant: '<S214>/Calib'
     *  Constant: '<S215>/Calib'
     *  Constant: '<S216>/ConstantValue1'
     *  Logic: '<S217>/AND'
     *  Logic: '<S217>/OR1'
     *  MinMax: '<S216>/Minimum'
     *  Sum: '<S216>/Summation'
     *  UnitDelay: '<S216>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn_Shift_Not_Allwd) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_ok = KeTRGR_t_TXWarn_Shift_Not_Allwd_Dly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_ok = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_ok -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S216>/Switch' */
    /* End of Outputs for SubSystem: '<S216>/EdgeFalling1' */

    /* Switch: '<S135>/Switch10' incorporates:
     *  Constant: '<S216>/ConstantValue2'
     *  DataStoreRead: '<S135>/Dsr_PID_AStrtEntry19'
     *  DataStoreRead: '<S135>/Dsr_PID_AStrtEntry20'
     *  DataStoreWrite: '<S135>/Dsw_PID_AStrtEntry10'
     *  Logic: '<S216>/AND'
     *  RelationalOperator: '<S216>/GreaterThan'
     *  S-Function (sfix_bitop): '<S204>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S204>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S204>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S205>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S216>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn_Shift_Not_Allwd) || (TRGR_ac_DW.UnitDelay_DSTATE_ok >
            0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 16384U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 16384U);
    }

    /* End of Switch: '<S135>/Switch10' */
    /* End of Outputs for SubSystem: '<S135>/TurnOffDelayTime' */

    /* Logic: '<S137>/Logical2' incorporates:
     *  Constant: '<S223>/Constant'
     *  Constant: '<S224>/Constant'
     *  Constant: '<S227>/Calib'
     *  RelationalOperator: '<S137>/Comparison1'
     *  RelationalOperator: '<S137>/Comparison11'
     *  RelationalOperator: '<S137>/Comparison15'
     */
    VeTRGC_b_TXWarn2_Warn10 = (((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangeReverse) && (VeTRGI_v_VehicleSpdmph >=
        KeTRGR_v_DrivingThreshold)) && (((uint32)TRGR_ac_B.DataTypeConversion_e)
        == CeTRGR_e_TransRangeReverse));

    /* Outputs for Atomic SubSystem: '<S137>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S228>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S229>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_bx;

    /* Update for UnitDelay: '<S229>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_bx = VeTRGC_b_TXWarn2_Warn10;

    /* Switch: '<S228>/Switch' incorporates:
     *  Constant: '<S225>/Calib'
     *  Constant: '<S226>/Calib'
     *  Constant: '<S228>/ConstantValue1'
     *  Logic: '<S229>/AND'
     *  Logic: '<S229>/OR1'
     *  MinMax: '<S228>/Minimum'
     *  Sum: '<S228>/Summation'
     *  UnitDelay: '<S228>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn2_Warn10) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_lk = KeTRGR_t_WARN2Warn10_OffDly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_lk = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_lk -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S228>/Switch' */
    /* End of Outputs for SubSystem: '<S228>/EdgeFalling1' */

    /* Switch: '<S137>/Switch4' incorporates:
     *  Constant: '<S228>/ConstantValue2'
     *  DataStoreRead: '<S137>/Dsr_PID_AStrtEntry7'
     *  DataStoreRead: '<S137>/Dsr_PID_AStrtEntry8'
     *  DataStoreWrite: '<S137>/Dsw_PID_AStrtEntry4'
     *  Logic: '<S228>/AND'
     *  RelationalOperator: '<S228>/GreaterThan'
     *  S-Function (sfix_bitop): '<S221>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S221>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S221>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S222>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S228>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn2_Warn10) || (TRGR_ac_DW.UnitDelay_DSTATE_lk > 0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 8U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 8U);
    }

    /* End of Switch: '<S137>/Switch4' */
    /* End of Outputs for SubSystem: '<S137>/TurnOffDelayTime' */

    /* Logic: '<S138>/Logical2' incorporates:
     *  Constant: '<S232>/Constant'
     *  Constant: '<S233>/Constant'
     *  Constant: '<S236>/Calib'
     *  Product: '<S138>/Product2'
     *  RelationalOperator: '<S138>/Comparison1'
     *  RelationalOperator: '<S138>/Comparison11'
     *  RelationalOperator: '<S138>/Comparison20'
     */
    VeTRGC_b_TXWarn2_Warn11 = (((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangeDrive) && (VeTRGI_v_VehicleSpdmph <
        (-KeTRGR_v_DrivingThreshold))) && (((uint32)
        TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeDrive));

    /* Outputs for Atomic SubSystem: '<S138>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S237>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S238>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_np;

    /* Update for UnitDelay: '<S238>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_np = VeTRGC_b_TXWarn2_Warn11;

    /* Switch: '<S237>/Switch' incorporates:
     *  Constant: '<S234>/Calib'
     *  Constant: '<S235>/Calib'
     *  Constant: '<S237>/ConstantValue1'
     *  Logic: '<S238>/AND'
     *  Logic: '<S238>/OR1'
     *  MinMax: '<S237>/Minimum'
     *  Sum: '<S237>/Summation'
     *  UnitDelay: '<S237>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn2_Warn11) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_eg = KeTRGR_t_WARN2Warn11_OffDly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_eg = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_eg -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S237>/Switch' */
    /* End of Outputs for SubSystem: '<S237>/EdgeFalling1' */

    /* Switch: '<S138>/Switch5' incorporates:
     *  Constant: '<S237>/ConstantValue2'
     *  DataStoreRead: '<S138>/Dsr_PID_AStrtEntry10'
     *  DataStoreRead: '<S138>/Dsr_PID_AStrtEntry9'
     *  DataStoreWrite: '<S138>/Dsw_PID_AStrtEntry5'
     *  Logic: '<S237>/AND'
     *  RelationalOperator: '<S237>/GreaterThan'
     *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S230>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S231>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S237>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn2_Warn11) || (TRGR_ac_DW.UnitDelay_DSTATE_eg > 0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 16U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 16U);
    }

    /* End of Switch: '<S138>/Switch5' */
    /* End of Outputs for SubSystem: '<S138>/TurnOffDelayTime' */

    /* RelationalOperator: '<S500>/Comparison18' incorporates:
     *  Constant: '<S244>/Constant'
     *  RelationalOperator: '<S139>/Comparison6'
     */
    rtb_Comparison18_p = (((uint32)TRGR_ac_B.DataTypeConversion_e) ==
                          CeTRGR_e_TransRangeNeutral);

    /* UnitDelay: '<S876>/Unit Delay' incorporates:
     *  Constant: '<S682>/Constant'
     *  Constant: '<S683>/Constant'
     *  Logic: '<S30>/Logical3'
     *  RelationalOperator: '<S30>/Comparison4'
     *  RelationalOperator: '<S30>/Comparison5'
     */
    rtb_AND12 = ((((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangePark)
                 || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
                     CeTRGR_e_TransRangeNeutral));

    /* Logic: '<S675>/AND' incorporates:
     *  Constant: '<S679>/Constant'
     *  Constant: '<S680>/Constant'
     *  Constant: '<S681>/Constant'
     *  Logic: '<S30>/Logical1'
     *  Logic: '<S30>/Logical2'
     *  RelationalOperator: '<S30>/Comparison1'
     *  RelationalOperator: '<S30>/Comparison2'
     *  RelationalOperator: '<S30>/Comparison3'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     */
    TRGR_ac_B.AND_l = ((((((uint32)VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangePark) ||
                         (((uint32)VeTRGC_e_DrvrRq) ==
                          CeTRGR_e_TransRangeNeutral)) || (((uint32)
                          VeTRGC_e_DrvReqRaw_WithSNA) ==
                         CeTRGR_e_TransRangeIllegal)) && rtb_AND12);

    /* Logic: '<S139>/Logical3' incorporates:
     *  Constant: '<S243>/Constant'
     *  Constant: '<S245>/Calib'
     *  RelationalOperator: '<S139>/Comparison5'
     */
    rtb_Logical1_hh = ((((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
                          CeTRGR_e_TransRangePark) && rtb_Comparison18_p) &&
                        (TRGR_ac_B.AND_l)) && (KeTRGR_b_Warn2Warn12Stuck_P));

    /* Logic: '<S703>/Logical6' incorporates:
     *  Constant: '<S720>/Calib'
     */
    rtb_Logical6_dg = (((KeTRGR_b_NeutralBTSI_Enbl) && (TRGR_ac_B.AND_j)) &&
                       rtb_Logical2_or);

    /* Outputs for Atomic SubSystem: '<S703>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S727>/EdgeRising' */
    /* Logic: '<S729>/AND' incorporates:
     *  Logic: '<S729>/OR1'
     *  UnitDelay: '<S729>/UnitDelay'
     */
    rtb_AND_c5 = (rtb_Logical6_dg && (!TRGR_ac_DW.UnitDelay_DSTATE_n));

    /* Update for UnitDelay: '<S729>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_n = rtb_Logical6_dg;

    /* End of Outputs for SubSystem: '<S727>/EdgeRising' */

    /* Switch: '<S727>/Switch1' incorporates:
     *  Constant: '<S718>/Calib'
     *  Constant: '<S727>/ConstantValue'
     *  Constant: '<S727>/ConstantValue1'
     *  Logic: '<S727>/OR'
     *  Logic: '<S727>/OR1'
     *  MinMax: '<S727>/Minimum'
     *  Sum: '<S727>/Summation'
     *  UnitDelay: '<S727>/UnitDelay'
     */
    if ((!rtb_Logical6_dg) || rtb_AND_c5)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_e3 = 0U;
    }
    else if (KeTRGR_Cnt_NLockDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_e3) + 1U)))
    {
        /* MinMax: '<S727>/Minimum' incorporates:
         *  Constant: '<S718>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_e3 = KeTRGR_Cnt_NLockDbnc;
    }
    else
    {
        /* MinMax: '<S727>/Minimum' incorporates:
         *  Constant: '<S727>/ConstantValue'
         *  Sum: '<S727>/Summation'
         *  UnitDelay: '<S727>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_e3 = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_e3) + 1U);
    }

    /* End of Switch: '<S727>/Switch1' */
    /* End of Outputs for SubSystem: '<S703>/TurnOnDelaySample' */

    /* Outputs for Atomic SubSystem: '<S703>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S726>/EdgeFalling1' */
    /* Logic: '<S728>/AND' incorporates:
     *  UnitDelay: '<S728>/Unit Delay'
     */
    rtb_AND_c5 = (tmpRead_3 && (TRGR_ac_DW.UnitDelay_DSTATE_en));

    /* Update for UnitDelay: '<S728>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_en = TRGR_ac_B.VeTRGR_b_BrkApplied;

    /* End of Outputs for SubSystem: '<S726>/EdgeFalling1' */

    /* Switch: '<S726>/Switch' incorporates:
     *  MinMax: '<S726>/Minimum1'
     *  UnitDelay: '<S726>/UnitDelay'
     */
    if (rtb_AND_c5)
    {
        /* MinMax: '<S726>/Minimum1' incorporates:
         *  Constant: '<S723>/Calib'
         *  UnitDelay: '<S726>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_ac = KeTRGR_t_BrkRlsDbnc;
    }
    else
    {
        if (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_ac) <= 1)
        {
            /* MinMax: '<S726>/Minimum1' */
            TRGR_ac_DW.UnitDelay_DSTATE_ac = 1U;
        }

        /* MinMax: '<S726>/Minimum1' incorporates:
         *  Constant: '<S726>/ConstantValue'
         *  Sum: '<S726>/Summation'
         *  UnitDelay: '<S726>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_ac = (uint16)((sint32)(((sint32)
            TRGR_ac_DW.UnitDelay_DSTATE_ac) - 1));
    }

    /* End of Switch: '<S726>/Switch' */

    /* Logic: '<S726>/AND' incorporates:
     *  Constant: '<S726>/ConstantValue2'
     *  RelationalOperator: '<S726>/GreaterThan'
     *  UnitDelay: '<S726>/UnitDelay'
     */
    VeTRGC_b_BrkRlsDbnc_N = ((TRGR_ac_B.VeTRGR_b_BrkApplied) || (((sint32)
        TRGR_ac_DW.UnitDelay_DSTATE_ac) > 0));

    /* End of Outputs for SubSystem: '<S703>/TurnOffDelaySampleModified' */

    /* Switch: '<S703>/Switch' incorporates:
     *  Constant: '<S718>/Calib'
     *  Constant: '<S719>/Calib'
     *  Logic: '<S727>/AND'
     *  RelationalOperator: '<S727>/GreaterThan'
     *  UnitDelay: '<S727>/UnitDelay'
     */
    if (KeTRGR_b_NLockDbncOvrd)
    {
        /* Outputs for Atomic SubSystem: '<S703>/TurnOnDelaySample' */
        rtb_Logical6_dg = (rtb_Logical6_dg && (TRGR_ac_DW.UnitDelay_DSTATE_e3 >=
                            KeTRGR_Cnt_NLockDbnc));

        /* End of Outputs for SubSystem: '<S703>/TurnOnDelaySample' */
    }

    /* End of Switch: '<S703>/Switch' */

    /* Outputs for Atomic SubSystem: '<S703>/SignalLatchOnWithReset2' */
    /* Logic: '<S703>/Logical1' incorporates:
     *  Constant: '<S713>/Constant'
     *  Constant: '<S714>/Constant'
     *  Constant: '<S715>/Constant'
     *  Constant: '<S716>/Constant'
     *  Logic: '<S703>/Logical4'
     *  Logic: '<S725>/NOT'
     *  RelationalOperator: '<S703>/Comparison1'
     *  RelationalOperator: '<S703>/Comparison11'
     *  RelationalOperator: '<S703>/Comparison12'
     *  RelationalOperator: '<S703>/Comparison13'
     */
    rtb_AND_c5 = ((((((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
                       CeTRGR_e_TransRangeReverse) && (((uint32)
                        VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangePark)) &&
                     (((uint32)VeTRGC_e_TransRngSt_Crnt) !=
                      CeTRGR_e_TransRangeDrive)) && (((uint32)
                      VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeIllegal)) &&
                   (!VeTRGI_b_PPawlFlt_InhibitMtr)) && (!rtb_Logical3_gp));

    /* End of Outputs for SubSystem: '<S703>/SignalLatchOnWithReset2' */

    /* Outputs for Atomic SubSystem: '<S703>/SignalLatchOnWithReset' */
    /* Logic: '<S724>/OR1' incorporates:
     *  Constant: '<S721>/Calib'
     *  Logic: '<S703>/Logical1'
     *  Logic: '<S703>/Logical3'
     *  Logic: '<S724>/NOT'
     *  Logic: '<S724>/OR'
     *  UnitDelay: '<S724>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_gq = (rtb_Logical6_dg ||
        ((((!VeTRGC_b_BrkRlsDbnc_N) || (!KeTRGR_b_RstNLckwithBrk)) && rtb_AND_c5)
         && (TRGR_ac_DW.UnitDelay_DSTATE_gq)));

    /* End of Outputs for SubSystem: '<S703>/SignalLatchOnWithReset' */

    /* Logic: '<S712>/AND' */
    TRGR_ac_B.AND_lq = TRGR_ac_DW.UnitDelay_DSTATE_gq;

    /* Logic: '<S139>/Logical6' incorporates:
     *  Logic: '<S139>/Logical2'
     */
    VeTRGC_b_ShftrTrickedOutofN = ((TRGR_ac_B.AND_lq) && (!rtb_Comparison18_p));

    /* RelationalOperator: '<S500>/Comparison18' incorporates:
     *  Constant: '<S533>/Constant'
     */
    rtb_Comparison18_p = (((uint32)rtb_Switch1_fp) == CeTRGR_e_TransRangeIllegal);

    /* Outputs for Atomic SubSystem: '<S500>/SignalLatchOnWithReset' */
    /* Logic: '<S539>/OR1' incorporates:
     *  Logic: '<S500>/Logical2'
     *  Logic: '<S500>/Logical24'
     *  Logic: '<S539>/OR'
     *  UnitDelay: '<S500>/UnitDelay'
     *  UnitDelay: '<S539>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_ig = (((TRGR_ac_DW.UnitDelay_DSTATE_cw) &&
        rtb_Comparison18_p) || (rtb_Comparison18_p &&
        (TRGR_ac_DW.UnitDelay_DSTATE_ig)));

    /* End of Outputs for SubSystem: '<S500>/SignalLatchOnWithReset' */

    /* Logic: '<S500>/Logical23' incorporates:
     *  Constant: '<S532>/Constant'
     *  RelationalOperator: '<S500>/Comparison17'
     */
    VeTRGC_b_ShiftLockP_SNA = ((TRGR_ac_DW.UnitDelay_DSTATE_ig) && (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangePark));

    /* Switch: '<S500>/Switch' incorporates:
     *  Constant: '<S536>/Calib'
     *  DataTypeConversion: '<S499>/DataTypeConversion'
     *  Logic: '<S500>/Logical4'
     *  Logic: '<S500>/Logical5'
     *  RelationalOperator: '<S500>/Comparison2'
     *  RelationalOperator: '<S500>/Comparison3'
     */
    if (((((sint32)VeTRGI_e_PMM_PowerMode) == 1) || (((sint32)
            VeTRGI_e_PMM_PowerMode) == 0)) && (KeTRGR_b_EnblPShftLock_KeyPos))
    {
        /* Switch: '<S500>/Switch' incorporates:
         *  Constant: '<S500>/FALSEConstant'
         */
        VeTRGC_b_IgnoreBrk_KeyOffAcc = false;
    }
    else
    {
        /* Switch: '<S500>/Switch' incorporates:
         *  Logic: '<S500>/Logical10'
         *  Logic: '<S500>/Logical12'
         */
        VeTRGC_b_IgnoreBrk_KeyOffAcc = (((TRGR_ac_B.VeTRGR_b_BrkApplied) &&
            rtb_Logical2_or) || rtb_Logical3_gp);
    }

    /* Logic: '<S500>/Logical3' */
    VeTRGC_b_NeuDrvAllwd = ((VeTRGI_b_NeutAllwd) || (VeTRGI_b_DrvAllwd));

    /* Logic: '<S500>/Logical8' incorporates:
     *  Constant: '<S530>/Constant'
     *  Constant: '<S534>/Constant'
     *  Constant: '<S538>/Calib'
     *  Logic: '<S500>/Logical1'
     *  Logic: '<S500>/Logical11'
     *  Logic: '<S500>/Logical22'
     *  Logic: '<S500>/Logical6'
     *  Logic: '<S500>/Logical9'
     *  RelationalOperator: '<S500>/Comparison1'
     *  RelationalOperator: '<S500>/Comparison8'
     */
    VeTRGC_b_ShiftLock_P = ((((KeTRGR_b_ShftProxi) || (((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangePark)) && (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangePark)) && (((!VeTRGC_b_IgnoreBrk_KeyOffAcc) ||
        (!VeTRGC_b_NeuDrvAllwd)) || (VeTRGC_b_ShiftLockP_IgnoreBrk)));

    /* Logic: '<S500>/Logical25' */
    VeTRGC_b_ShftrLockP = ((VeTRGC_b_ShiftLockP_SNA) || (VeTRGC_b_ShiftLock_P));

    /* Outputs for Atomic SubSystem: '<S704>/SignalLatchOnWithReset' */
    /* Logic: '<S739>/OR1' incorporates:
     *  Constant: '<S736>/Calib'
     *  Logic: '<S704>/Logical4'
     *  Logic: '<S739>/OR'
     *  UnitDelay: '<S739>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_px = ((((VeTRGC_b_ShftrLockP) &&
        (KeTRGR_b_ParkBTSI_Enbl)) && rtb_Logical2_or) || (rtb_AND_nj &&
        (TRGR_ac_DW.UnitDelay_DSTATE_px)));

    /* End of Outputs for SubSystem: '<S704>/SignalLatchOnWithReset' */

    /* Logic: '<S730>/AND' incorporates:
     *  UnitDelay: '<S739>/Unit Delay'
     */
    TRGR_ac_B.AND_e = TRGR_ac_DW.UnitDelay_DSTATE_px;

    /* Logic: '<S139>/Logical7' incorporates:
     *  Constant: '<S241>/Constant'
     *  Logic: '<S139>/Logical4'
     *  RelationalOperator: '<S139>/Comparison2'
     */
    VeTRGC_b_ShftrTrickedOutofP = ((TRGR_ac_B.AND_e) && (((uint32)
        TRGR_ac_B.DataTypeConversion_e) != CeTRGR_e_TransRangePark));

    /* Logic: '<S139>/Logical9' incorporates:
     *  Constant: '<S242>/Constant'
     *  RelationalOperator: '<S139>/Comparison3'
     */
    VeTRGC_b_ShftrRBlockInterrupted = ((TRGR_ac_B.AND_ju) && (((uint32)
        TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeReverse));

    /* Logic: '<S139>/Logical8' */
    VeTRGC_b_ShftrTrickedOutofLock = (((VeTRGC_b_ShftrTrickedOutofN) ||
        (VeTRGC_b_ShftrTrickedOutofP)) || (VeTRGC_b_ShftrRBlockInterrupted));

    /* Logic: '<S139>/Logical1' incorporates:
     *  Constant: '<S246>/Calib'
     *  Logic: '<S139>/Logical11'
     */
    VeTRGC_b_Shift_to_P_Gear = (rtb_Logical1_hh ||
        ((VeTRGC_b_ShftrTrickedOutofLock) && (KeTRGR_b_Warn2Warn12TriggerOvrd)));

    /* Outputs for Atomic SubSystem: '<S139>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S249>/Switch2' incorporates:
     *  Logic: '<S139>/Logical5'
     *  Switch: '<S249>/Switch1'
     */
    if (!VeTRGC_b_Shift_to_P_Gear)
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S249>/ConstantValue2'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S248>/Calib'
         *  Sum: '<S249>/Subtraction'
         *  Switch: '<S249>/Switch2'
         *  UnitDelay: '<S249>/UnitDelay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_ex;
    }

    /* End of Switch: '<S249>/Switch2' */

    /* Switch: '<S249>/Switch' incorporates:
     *  Constant: '<S249>/ConstantValue3'
     *  RelationalOperator: '<S249>/Comparison1'
     */
    if (rtb_Subtraction2 >= 5.0F)
    {
        /* Switch: '<S249>/Switch' incorporates:
         *  UnitDelay: '<S249>/UnitDelay1'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay1_DSTATE_l;
    }

    /* End of Switch: '<S249>/Switch' */

    /* Update for UnitDelay: '<S249>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_ex = rtb_Subtraction2;

    /* Update for UnitDelay: '<S249>/UnitDelay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_l = rtb_Subtraction2;

    /* RelationalOperator: '<S139>/Comparison1' incorporates:
     *  Constant: '<S247>/Calib'
     *  MinMax: '<S249>/MinMax'
     */
    VeTRGC_b_TXWarn2_Warn12 = (fminf(rtb_Subtraction2,
        KeTRGR_t_TXWarn2Warn12Dbnc) >= KeTRGR_t_TXWarn2Warn12Dbnc);

    /* End of Outputs for SubSystem: '<S139>/Stop_Watch_Reset_Enabled' */

    /* Switch: '<S139>/Switch7' incorporates:
     *  DataStoreRead: '<S139>/Dsr_PID_AStrtEntry13'
     *  DataStoreRead: '<S139>/Dsr_PID_AStrtEntry14'
     *  DataStoreWrite: '<S139>/Dsw_PID_AStrtEntry7'
     *  S-Function (sfix_bitop): '<S239>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S239>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S239>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S240>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn2_Warn12)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 64U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 64U);
    }

    /* End of Switch: '<S139>/Switch7' */

    /* Outputs for Atomic SubSystem: '<S140>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S260>/Switch2' incorporates:
     *  Constant: '<S252>/Constant'
     *  Constant: '<S253>/Constant'
     *  Constant: '<S254>/Constant'
     *  Constant: '<S255>/Constant'
     *  Constant: '<S256>/Constant'
     *  Constant: '<S257>/Calib'
     *  Logic: '<S140>/Logical1'
     *  Logic: '<S140>/Logical2'
     *  Logic: '<S140>/Logical3'
     *  Logic: '<S140>/Logical4'
     *  Logic: '<S140>/Logical5'
     *  Logic: '<S140>/Logical6'
     *  Logic: '<S140>/Logical7'
     *  Logic: '<S140>/Logical8'
     *  Logic: '<S140>/Logical9'
     *  RelationalOperator: '<S140>/Comparison2'
     *  RelationalOperator: '<S140>/Comparison3'
     *  RelationalOperator: '<S140>/Comparison4'
     *  RelationalOperator: '<S140>/Comparison5'
     *  RelationalOperator: '<S140>/Comparison6'
     *  Switch: '<S260>/Switch1'
     */
    if (((((((uint32)VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangePark) &&
            (((uint32)VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeNeutral)) ||
          ((((uint32)TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangePark)
           || (((uint32)TRGR_ac_B.DataTypeConversion_e) ==
               CeTRGR_e_TransRangeNeutral))) || (TRGR_ac_B.AND_l)) ||
            ((((TRGR_ac_B.AND_e) || (TRGR_ac_B.AND_lq)) ||
              (KeTRGR_b_Warn13TriggerOvrd)) || ((TRGR_ac_B.AND_ju) && (((uint32)
            TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeReverse))))
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S260>/Constant Value2'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S259>/Calib'
         *  Sum: '<S260>/Subtraction'
         *  Switch: '<S260>/Switch2'
         *  UnitDelay: '<S260>/Unit Delay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_pc;
    }

    /* End of Switch: '<S260>/Switch2' */

    /* Switch: '<S260>/Switch' incorporates:
     *  Constant: '<S260>/Constant Value3'
     *  RelationalOperator: '<S260>/Comparison1'
     */
    if (rtb_Subtraction2 >= 5.0F)
    {
        /* Switch: '<S260>/Switch' incorporates:
         *  UnitDelay: '<S260>/Unit Delay1'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay1_DSTATE_c0;
    }

    /* End of Switch: '<S260>/Switch' */

    /* Update for UnitDelay: '<S260>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_pc = rtb_Subtraction2;

    /* Update for UnitDelay: '<S260>/Unit Delay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_c0 = rtb_Subtraction2;

    /* RelationalOperator: '<S140>/Comparison1' incorporates:
     *  Constant: '<S258>/Calib'
     *  MinMax: '<S260>/MinMax'
     */
    VeTRGC_b_TXWarn2_Warn13 = (fminf(rtb_Subtraction2,
        KeTRGR_t_TXWarn2Warn13Dbnc) >= KeTRGR_t_TXWarn2Warn13Dbnc);

    /* End of Outputs for SubSystem: '<S140>/Stop_Watch_Reset_Enabled' */

    /* Switch: '<S140>/Switch8' incorporates:
     *  DataStoreRead: '<S140>/Dsr_PID_AStrtEntry15'
     *  DataStoreRead: '<S140>/Dsr_PID_AStrtEntry16'
     *  DataStoreWrite: '<S140>/Dsw_PID_AStrtEntry8'
     *  S-Function (sfix_bitop): '<S250>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S250>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S250>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S251>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn2_Warn13)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 128U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 128U);
    }

    /* End of Switch: '<S140>/Switch8' */

    /* Logic: '<S141>/Logical2' incorporates:
     *  Constant: '<S263>/Constant'
     *  Constant: '<S264>/Constant'
     *  Constant: '<S267>/Calib'
     *  Product: '<S141>/Product2'
     *  RelationalOperator: '<S141>/Comparison1'
     *  RelationalOperator: '<S141>/Comparison11'
     *  RelationalOperator: '<S141>/Comparison20'
     */
    VeTRGC_b_TXWarn2_Warn14 = (((((uint32)VeTRGC_e_VldtdTransRngStateERS) !=
        CeTRGR_e_TransRangeDrive1) && (VeTRGI_v_VehicleSpdmph <
        (-KeTRGR_v_DrivingThreshold))) && (((uint32)
        TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangeDrive1));

    /* Outputs for Atomic SubSystem: '<S141>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S268>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S269>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_pf;

    /* Update for UnitDelay: '<S269>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_pf = VeTRGC_b_TXWarn2_Warn14;

    /* Switch: '<S268>/Switch' incorporates:
     *  Constant: '<S265>/Calib'
     *  Constant: '<S266>/Calib'
     *  Constant: '<S268>/ConstantValue1'
     *  Logic: '<S269>/AND'
     *  Logic: '<S269>/OR1'
     *  MinMax: '<S268>/Minimum'
     *  Sum: '<S268>/Summation'
     *  UnitDelay: '<S268>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn2_Warn14) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_p = KeTRGR_t_WARN2Warn14_OffDly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_p = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_p -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S268>/Switch' */
    /* End of Outputs for SubSystem: '<S268>/EdgeFalling1' */

    /* Switch: '<S141>/Switch6' incorporates:
     *  Constant: '<S268>/ConstantValue2'
     *  DataStoreRead: '<S141>/Dsr_PID_AStrtEntry11'
     *  DataStoreRead: '<S141>/Dsr_PID_AStrtEntry12'
     *  DataStoreWrite: '<S141>/Dsw_PID_AStrtEntry6'
     *  Logic: '<S268>/AND'
     *  RelationalOperator: '<S268>/GreaterThan'
     *  S-Function (sfix_bitop): '<S261>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S261>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S261>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S262>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S268>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn2_Warn14) || (TRGR_ac_DW.UnitDelay_DSTATE_p > 0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 32U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 32U);
    }

    /* End of Switch: '<S141>/Switch6' */
    /* End of Outputs for SubSystem: '<S141>/TurnOffDelayTime' */

    /* Logic: '<S144>/Logical2' incorporates:
     *  Constant: '<S283>/Constant'
     *  Constant: '<S284>/Constant'
     *  Constant: '<S287>/Calib'
     *  RelationalOperator: '<S144>/Comparison1'
     *  RelationalOperator: '<S144>/Comparison11'
     *  RelationalOperator: '<S144>/Comparison5'
     */
    VeTRGC_b_TXWarn2_Warn9 = (((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangePark) && (rtb_MinMax1 >= KeTRGR_v_ParkThreshold)) &&
        (((uint32)TRGR_ac_B.DataTypeConversion_e) == CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S144>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S288>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S289>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_byd;

    /* Update for UnitDelay: '<S289>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_byd = VeTRGC_b_TXWarn2_Warn9;

    /* Switch: '<S288>/Switch' incorporates:
     *  Constant: '<S285>/Calib'
     *  Constant: '<S286>/Calib'
     *  Constant: '<S288>/ConstantValue1'
     *  Logic: '<S289>/AND'
     *  Logic: '<S289>/OR1'
     *  MinMax: '<S288>/Minimum'
     *  Sum: '<S288>/Summation'
     *  UnitDelay: '<S288>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn2_Warn9) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_dl = KeTRGR_t_WARN2Warn9_OffDly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_dl = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_dl -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S288>/Switch' */
    /* End of Outputs for SubSystem: '<S288>/EdgeFalling1' */

    /* Switch: '<S144>/Switch3' incorporates:
     *  Constant: '<S288>/ConstantValue2'
     *  DataStoreRead: '<S144>/Dsr_PID_AStrtEntry5'
     *  DataStoreRead: '<S144>/Dsr_PID_AStrtEntry6'
     *  DataStoreWrite: '<S144>/Dsw_PID_AStrtEntry3'
     *  Logic: '<S288>/AND'
     *  RelationalOperator: '<S288>/GreaterThan'
     *  S-Function (sfix_bitop): '<S281>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S281>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S281>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S282>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S288>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn2_Warn9) || (TRGR_ac_DW.UnitDelay_DSTATE_dl > 0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 4U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 4U);
    }

    /* End of Switch: '<S144>/Switch3' */
    /* End of Outputs for SubSystem: '<S144>/TurnOffDelayTime' */

    /* Logic: '<S688>/Logical3' */
    VeTRGC_b_VehReady = ((VeTRGI_b_PropSysActv) && (VeTRGI_b_DrvAllwd));

    /* Logic: '<S146>/Logical1' incorporates:
     *  Constant: '<S296>/Calib'
     *  Constant: '<S297>/Calib'
     *  Logic: '<S146>/Logical2'
     */
    VeTRGC_b_TXWarn_Warn4 = (((TRGR_ac_B.AND_j) && (KeTRGR_b_WARNWarn4)) &&
        ((VeTRGC_b_VehReady) || (KeTRGR_b_NLockDsblVehRdyChck)));

    /* Switch: '<S146>/Switch9' incorporates:
     *  DataStoreRead: '<S146>/Dsr_PID_AStrtEntry17'
     *  DataStoreRead: '<S146>/Dsr_PID_AStrtEntry18'
     *  DataStoreWrite: '<S146>/Dsw_PID_AStrtEntry9'
     *  S-Function (sfix_bitop): '<S293>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S293>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S293>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S294>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_Warn4)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 256U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 256U);
    }

    /* End of Switch: '<S146>/Switch9' */

    /* Logic: '<S147>/Logical2' incorporates:
     *  Constant: '<S300>/Constant'
     *  Constant: '<S301>/Constant'
     *  Constant: '<S302>/Calib'
     *  Logic: '<S147>/Logical1'
     *  RelationalOperator: '<S147>/Comparison1'
     *  RelationalOperator: '<S147>/Comparison11'
     *  RelationalOperator: '<S147>/Comparison6'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     */
    VeTRGC_b_TXWarn_Warn5 = (((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangePark) && (rtb_MinMax1 < KeTRGR_v_ParkThreshold)) &&
        ((((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeIllegal) ||
         (VeTRGI_b_RackFlt)));

    /* Switch: '<S147>/Switch1' incorporates:
     *  DataStoreRead: '<S147>/Dsr_PID_AStrtEntry2'
     *  DataStoreRead: '<S147>/Dsr_PID_AStrtEntry3'
     *  DataStoreWrite: '<S147>/Dsw_PID_AStrtEntry1'
     *  S-Function (sfix_bitop): '<S298>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S298>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S298>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S299>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_Warn5)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 1U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 1U);
    }

    /* End of Switch: '<S147>/Switch1' */

    /* Logic: '<S148>/Logical2' incorporates:
     *  Constant: '<S305>/Constant'
     *  Constant: '<S306>/Constant'
     *  RelationalOperator: '<S148>/Comparison1'
     *  RelationalOperator: '<S148>/Comparison11'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     */
    VeTRGC_b_TXWarn_Warn6 = ((((((((uint32)VeTRGC_e_DrvReqRaw_WithSNA) ==
        CeTRGR_e_TransRangeIllegal) || (VeTRGI_b_ShftSensFA)) ||
        (VeTRGI_b_RackFlt)) || (((uint32)VeTRGI_e_AutoPosCorrMd) ==
        CeTRGR_e_AutoPosCorrMd_SNA)) || (VeTRGI_b_ShftLckFlt)) ||
        (VeTRGI_b_ShiftDispFlt));

    /* Switch: '<S148>/Switch2' incorporates:
     *  DataStoreRead: '<S148>/Dsr_PID_AStrtEntry1'
     *  DataStoreRead: '<S148>/Dsr_PID_AStrtEntry4'
     *  DataStoreWrite: '<S148>/Dsw_PID_AStrtEntry2'
     *  S-Function (sfix_bitop): '<S303>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S303>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S303>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S304>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_Warn6)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 2U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 2U);
    }

    /* End of Switch: '<S148>/Switch2' */

    /* Logic: '<S40>/Logical3' incorporates:
     *  Constant: '<S46>/Constant'
     *  Constant: '<S47>/Constant'
     *  Logic: '<S40>/Logical6'
     *  RelationalOperator: '<S40>/Comparison6'
     *  RelationalOperator: '<S40>/Comparison7'
     */
    rtb_AND_nj = ((((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangePark)
                  && (((uint32)VeTRGC_e_DrvrRq) != CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S40>/TurnOnDelaySample' */
    /* Outputs for Atomic SubSystem: '<S53>/EdgeRising' */
    /* Logic: '<S54>/AND' incorporates:
     *  Logic: '<S54>/OR1'
     *  UnitDelay: '<S54>/Unit Delay'
     */
    rtb_Logical1_hh = (rtb_AND_nj && (!TRGR_ac_DW.UnitDelay_DSTATE_cu));

    /* Update for UnitDelay: '<S54>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_cu = rtb_AND_nj;

    /* End of Outputs for SubSystem: '<S53>/EdgeRising' */

    /* Switch: '<S53>/Switch1' incorporates:
     *  Constant: '<S49>/Calib'
     *  Constant: '<S53>/Constant Value'
     *  Constant: '<S53>/Constant Value1'
     *  Logic: '<S53>/OR'
     *  Logic: '<S53>/OR1'
     *  MinMax: '<S53>/Minimum'
     *  Sum: '<S53>/Summation'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    if ((!rtb_AND_nj) || rtb_Logical1_hh)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_jp = 0U;
    }
    else if (KeTRGR_Cnt_AutoCorrectPDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_jp) + 1U)))
    {
        /* MinMax: '<S53>/Minimum' incorporates:
         *  Constant: '<S49>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_jp = KeTRGR_Cnt_AutoCorrectPDbnc;
    }
    else
    {
        /* MinMax: '<S53>/Minimum' incorporates:
         *  Constant: '<S53>/Constant Value'
         *  Sum: '<S53>/Summation'
         *  UnitDelay: '<S53>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_jp = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_jp) + 1U);
    }

    /* End of Switch: '<S53>/Switch1' */
    /* End of Outputs for SubSystem: '<S40>/TurnOnDelaySample' */

    /* Abs: '<S551>/Abs1' incorporates:
     *  Abs: '<S21>/Abs1'
     *  Abs: '<S541>/Abs1'
     *  Abs: '<S552>/Abs1'
     *  Abs: '<S552>/Abs2'
     */
    rtb_Switch_d3 = fabsf(VeTRGI_n_TOSRSpeed);

    /* Logic: '<S551>/Logical4' incorporates:
     *  Abs: '<S551>/Abs1'
     *  Constant: '<S565>/Constant'
     *  Constant: '<S566>/Constant'
     *  Constant: '<S567>/Constant'
     *  Constant: '<S568>/Constant'
     *  Constant: '<S569>/Calib'
     *  Logic: '<S551>/Logical3'
     *  RelationalOperator: '<S551>/Comparison1'
     *  RelationalOperator: '<S551>/Comparison2'
     *  RelationalOperator: '<S551>/Comparison3'
     *  RelationalOperator: '<S551>/Comparison4'
     *  RelationalOperator: '<S551>/Comparison5'
     */
    VeTRGC_b_ParkReq_HighSpd = (((((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral)) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive)) && (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangePark)) && (rtb_Switch_d3 >=
        KeTRGR_n_TOSR_Spd_ParkThreshold));

    /* Logic: '<S548>/Logical6' incorporates:
     *  Constant: '<S556>/Constant'
     *  Constant: '<S557>/Constant'
     *  Constant: '<S558>/Calib'
     *  Product: '<S548>/Product2'
     *  RelationalOperator: '<S548>/Comparison20'
     *  RelationalOperator: '<S548>/Comparison7'
     *  RelationalOperator: '<S548>/Comparison8'
     */
    VeTRGC_b_DriveReq_HighSpd = (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeReverse) && (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeDrive)) && (VeTRGI_v_VehicleSpdmph <
        (-KeTRGR_v_DrivingThreshold)));

    /* Logic: '<S553>/Logical8' incorporates:
     *  Constant: '<S582>/Constant'
     *  Constant: '<S583>/Constant'
     *  Constant: '<S584>/Calib'
     *  RelationalOperator: '<S553>/Comparison11'
     *  RelationalOperator: '<S553>/Comparison12'
     *  RelationalOperator: '<S553>/Comparison13'
     */
    VeTRGC_b_RevReq_HighSpd = (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive) && (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeReverse)) && (VeTRGI_v_VehicleSpdmph >=
        KeTRGR_v_DrivingThreshold));

    /* Logic: '<S550>/Logical10' incorporates:
     *  Constant: '<S562>/Constant'
     *  Constant: '<S563>/Constant'
     *  Constant: '<S564>/Calib'
     *  RelationalOperator: '<S550>/Comparison15'
     *  RelationalOperator: '<S550>/Comparison16'
     *  RelationalOperator: '<S550>/Comparison17'
     */
    VeTRGC_b_NToR_HighSpd = (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral) && (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeReverse)) && (VeTRGI_v_VehicleSpdmph >=
        KeTRGR_v_DrivingThreshold));

    /* Logic: '<S549>/Logical11' incorporates:
     *  Constant: '<S559>/Constant'
     *  Constant: '<S560>/Constant'
     *  Constant: '<S561>/Calib'
     *  Product: '<S549>/Product2'
     *  RelationalOperator: '<S549>/Comparison18'
     *  RelationalOperator: '<S549>/Comparison19'
     *  RelationalOperator: '<S549>/Comparison20'
     */
    VeTRGC_b_NToD_HighSpd = (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral) && (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeDrive)) && (VeTRGI_v_VehicleSpdmph <
        (-KeTRGR_v_DrivingThreshold)));

    /* RelationalOperator: '<S541>/Comparison6' incorporates:
     *  Constant: '<S606>/Calib'
     */
    VeTRGC_b_SpdWthnPThrsh = (rtb_Switch_d3 < KeTRGR_n_TOSR_Spd_ParkThreshold);

    /* Outputs for Atomic SubSystem: '<S14>/TRGC_CarWashEnbl' */
    TRGR_ac_TRGC_CarWashEnbl();

    /* End of Outputs for SubSystem: '<S14>/TRGC_CarWashEnbl' */

    /* Outputs for Atomic SubSystem: '<S612>/TurnOffDelaySampleModified' */
    /* Outputs for Atomic SubSystem: '<S646>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S647>/UnitDelay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_mq;

    /* Update for UnitDelay: '<S647>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_mq = VeTRGC_b_CarWash_EngReq;

    /* Logic: '<S647>/OR1' incorporates:
     *  Logic: '<S611>/Logical6'
     *  Logic: '<S613>/Logical4'
     *  Logic: '<S615>/Logical4'
     *  Logic: '<S616>/Logical3'
     *  Logic: '<S618>/Logical4'
     *  Logic: '<S646>/AND'
     */
    rtb_Logical1_hh = !VeTRGC_b_CarWash_EngReq;

    /* Switch: '<S646>/Switch' incorporates:
     *  Logic: '<S647>/AND'
     *  Logic: '<S647>/OR1'
     *  MinMax: '<S646>/Minimum1'
     *  UnitDelay: '<S646>/UnitDelay'
     */
    if (rtb_Logical1_hh && rtb_Comparison18_p)
    {
        /* MinMax: '<S646>/Minimum1' incorporates:
         *  Constant: '<S645>/Calib'
         *  UnitDelay: '<S646>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_e1 = KeTRGR_t_Cncl_AutoPark_NeutAllwd_Tmr;
    }
    else
    {
        if (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_e1) <= 1)
        {
            /* MinMax: '<S646>/Minimum1' */
            TRGR_ac_DW.UnitDelay_DSTATE_e1 = 1U;
        }

        /* MinMax: '<S646>/Minimum1' incorporates:
         *  Constant: '<S646>/ConstantValue'
         *  Sum: '<S646>/Summation'
         *  UnitDelay: '<S646>/UnitDelay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_e1 = (uint16)((sint32)(((sint32)
            TRGR_ac_DW.UnitDelay_DSTATE_e1) - 1));
    }

    /* End of Switch: '<S646>/Switch' */
    /* End of Outputs for SubSystem: '<S646>/EdgeFalling1' */
    /* End of Outputs for SubSystem: '<S612>/TurnOffDelaySampleModified' */

    /* Switch: '<S844>/Switch1' incorporates:
     *  Constant: '<S819>/Constant'
     *  Constant: '<S842>/Constant1'
     *  Constant: '<S842>/Constant2'
     *  Constant: '<S849>/Calib'
     *  Constant: '<S857>/Calib'
     *  Constant: '<S860>/Calib'
     *  DataStoreRead: '<S842>/StatusByte_ParkNeutSwOut'
     *  Logic: '<S33>/Logical10'
     *  Logic: '<S33>/Logical13'
     *  Logic: '<S33>/Logical19'
     *  Logic: '<S33>/Logical2'
     *  Logic: '<S842>/LogicalOperator'
     *  RelationalOperator: '<S322>/Comparison6'
     *  RelationalOperator: '<S33>/Comparison11'
     *  RelationalOperator: '<S842>/RelationalOperator1'
     *  RelationalOperator: '<S842>/RelationalOperator2'
     *  S-Function (sfix_bitop): '<S842>/Bitwise Operator1'
     *  S-Function (sfix_bitop): '<S842>/Bitwise Operator2'
     *  Switch: '<S25>/Switch1'
     */
    if (((((((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeIllegal) &&
           (KeTRGR_b_EnblDrvRqChck)) || ((VeTRGI_b_ShftLckFlt) &&
            (KeTRGR_b_EnblShftLckFltChck))) || (VeTRGI_b_PPawl_TXFlt)) ||
            ((((((sint32)TRGR_ac_DW.StatusByte_ParkNeutSwOut) & 1) > 0) &&
              ((((uint32)TRGR_ac_DW.StatusByte_ParkNeutSwOut) & 64U) == 0U)) &&
             (KeTRGR_b_EnblPCodeChck)))
    {
        /* RelationalOperator: '<S612>/Comparison2' incorporates:
         *  Constant: '<S838>/Constant'
         *  DataTypeConversion: '<S814>/DataTypeConversion'
         */
        TRGR_ac_B.DataTypeConversion_h = CeTRGR_e_TXFlt_TPF;
    }
    else
    {
        /* RelationalOperator: '<S612>/Comparison2' incorporates:
         *  Constant: '<S839>/Constant'
         *  DataTypeConversion: '<S814>/DataTypeConversion'
         */
        TRGR_ac_B.DataTypeConversion_h = CeTRGR_e_TXFlt_OK;
    }

    /* End of Switch: '<S844>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S612>/TurnOffDelaySampleModified' */
    /* Logic: '<S612>/Logical8' incorporates:
     *  Constant: '<S638>/Constant'
     *  Constant: '<S639>/Constant'
     *  Constant: '<S640>/Constant'
     *  Constant: '<S641>/Constant'
     *  Constant: '<S642>/Constant'
     *  Constant: '<S643>/Constant'
     *  Constant: '<S644>/Calib'
     *  Constant: '<S646>/ConstantValue2'
     *  Logic: '<S612>/Logical1'
     *  Logic: '<S612>/Logical15'
     *  Logic: '<S612>/Logical2'
     *  Logic: '<S612>/Logical3'
     *  Logic: '<S612>/Logical4'
     *  Logic: '<S612>/Logical5'
     *  Logic: '<S612>/Logical6'
     *  Logic: '<S646>/AND'
     *  RelationalOperator: '<S612>/Comparison1'
     *  RelationalOperator: '<S612>/Comparison12'
     *  RelationalOperator: '<S612>/Comparison2'
     *  RelationalOperator: '<S612>/Comparison4'
     *  RelationalOperator: '<S612>/Comparison5'
     *  RelationalOperator: '<S612>/Comparison9'
     *  RelationalOperator: '<S646>/GreaterThan'
     *  UnitDelay: '<S646>/UnitDelay'
     */
    VeTRGC_b_OvrdToP_NeutAllwdLost = ((((VeTRGC_b_SpdWthnPThrsh) && (((((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeReverse) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeDrive)) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral))) &&
        (((rtb_Logical1_hh && (((sint32)TRGR_ac_DW.UnitDelay_DSTATE_e1) <= 0)) &&
          (!VeTRGI_b_NeutAllwd)) || ((((uint32)TRGR_ac_B.DataTypeConversion_h) ==
        CeTRGR_e_TXFlt_TPF) && ((((uint32)VeTRGI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Acc) || (((uint32)VeTRGI_e_PMM_PowerMode) ==
        CePMDR_e_PowerMode_Off))))) && (KeTRGR_b_EnblAutoPark_NeutAllwdLost));

    /* End of Outputs for SubSystem: '<S612>/TurnOffDelaySampleModified' */

    /* Outputs for Atomic SubSystem: '<S618>/EdgeFalling' */
    /* Logic: '<S664>/OR1' incorporates:
     *  Logic: '<S40>/Logical2'
     *  Logic: '<S555>/Logical9'
     */
    rtb_Logical3_gp = !VeTRGI_b_PropSysActv;

    /* Logic: '<S664>/AND' incorporates:
     *  Logic: '<S664>/OR1'
     *  UnitDelay: '<S664>/Unit Delay'
     */
    rtb_Comparison18_p = (rtb_Logical3_gp && (TRGR_ac_DW.UnitDelay_DSTATE_kq));

    /* Update for UnitDelay: '<S664>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_kq = VeTRGI_b_PropSysActv;

    /* End of Outputs for SubSystem: '<S618>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S618>/EdgeRising' */
    /* Logic: '<S665>/AND' incorporates:
     *  Logic: '<S665>/OR1'
     *  UnitDelay: '<S665>/Unit Delay'
     */
    rtb_Logical2_or = ((VeTRGI_b_PropSysActv) &&
                       (!TRGR_ac_DW.UnitDelay_DSTATE_lw));

    /* Update for UnitDelay: '<S665>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_lw = VeTRGI_b_PropSysActv;

    /* End of Outputs for SubSystem: '<S618>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S618>/SignalLatchOnWithReset2' */
    /* Logic: '<S672>/OR1' incorporates:
     *  Constant: '<S669>/Constant'
     *  Logic: '<S618>/Logical2'
     *  Logic: '<S618>/Logical3'
     *  Logic: '<S672>/NOT'
     *  Logic: '<S672>/OR'
     *  RelationalOperator: '<S618>/Comparison3'
     *  UnitDelay: '<S672>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_ax = ((rtb_Logical1_hh && rtb_Comparison18_p) ||
        (((((uint32)VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangePark) &&
          (!rtb_Logical2_or)) && (TRGR_ac_DW.UnitDelay_DSTATE_ax)));

    /* End of Outputs for SubSystem: '<S618>/SignalLatchOnWithReset2' */

    /* Logic: '<S618>/Logical8' incorporates:
     *  Constant: '<S666>/Constant'
     *  Constant: '<S667>/Constant'
     *  Constant: '<S668>/Constant'
     *  Constant: '<S670>/Constant'
     *  Constant: '<S671>/Calib'
     *  Logic: '<S618>/Logical1'
     *  Logic: '<S618>/Logical15'
     *  RelationalOperator: '<S618>/Comparison1'
     *  RelationalOperator: '<S618>/Comparison12'
     *  RelationalOperator: '<S618>/Comparison2'
     *  RelationalOperator: '<S618>/Comparison9'
     */
    VeTRGC_b_PSA_Lost = (((((VeTRGC_b_SpdWthnPThrsh) && (((((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeReverse) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral)) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeDrive))) &&
                           (TRGR_ac_DW.UnitDelay_DSTATE_ax)) && (((uint32)
                            TRGR_ac_B.DataTypeConversion_h) !=
                           CeTRGR_e_TXFlt_TPF)) &&
                         (KeTRGR_b_EnblAutoPark_PropSysActvLost));

    /* Switch: '<S616>/Switch1' incorporates:
     *  Constant: '<S660>/Calib'
     */
    if (KeTRGR_b_ForcePark_EngineOff)
    {
        /* Switch: '<S540>/Switch1' */
        rtb_Comparison18_p = VeTRGI_b_EngineOff;
    }
    else
    {
        /* Switch: '<S540>/Switch1' */
        rtb_Comparison18_p = VeTRGI_b_RFHub_ForcePark;
    }

    /* End of Switch: '<S616>/Switch1' */

    /* Logic: '<S616>/Logical1' incorporates:
     *  Constant: '<S658>/Constant'
     *  Constant: '<S661>/Calib'
     *  Logic: '<S616>/Logical2'
     *  Logic: '<S616>/Logical5'
     *  RelationalOperator: '<S616>/Comparison2'
     */
    VeTRGC_b_OvrdToP_RFHub_ForcePark = ((((((((uint32)
        TRGR_ac_B.DataTypeConversion_h) != CeTRGR_e_TXFlt_TPF) &&
        rtb_Comparison18_p) && (VeTRGC_b_SpdWthnPThrsh)) &&
        (KeTRGR_b_RFHub_ForceParkEnable)) && rtb_Logical1_hh) ||
        (VeTRGC_b_Dsbl_to_P));

    /* Logic: '<S611>/Logical14' incorporates:
     *  Constant: '<S623>/Constant'
     *  Constant: '<S624>/Constant'
     *  Constant: '<S625>/Constant'
     *  Constant: '<S630>/Calib'
     *  Logic: '<S611>/Logical1'
     *  Logic: '<S611>/Logical15'
     *  RelationalOperator: '<S611>/Comparison11'
     *  RelationalOperator: '<S611>/Comparison12'
     *  RelationalOperator: '<S611>/Comparison9'
     */
    VeTRGR_b_AutoP_PSA = (((VeTRGI_b_PropSysActv) ||
                           (KeTRGR_b_ActivateDAI_Prestart)) && (((((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeReverse) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral)) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeDrive)));

    /* UnitDelay: '<S611>/UnitDelay1' */
    VeTRGR_b_AutoParkLatchEnbl = TRGR_ac_DW.UnitDelay1_DSTATE_lo;

    /* Outputs for Atomic SubSystem: '<S611>/SignalLatchOnWithReset2' */
    /* Logic: '<S637>/OR1' incorporates:
     *  Constant: '<S629>/Constant'
     *  Constant: '<S633>/Calib'
     *  Constant: '<S635>/Calib'
     *  Logic: '<S611>/Logical19'
     *  Logic: '<S611>/Logical20'
     *  Logic: '<S637>/NOT'
     *  Logic: '<S637>/OR'
     *  RelationalOperator: '<S611>/Comparison15'
     *  RelationalOperator: '<S611>/Comparison19'
     *  UnitDelay: '<S637>/Unit Delay'
     */
    VeTRGR_b_AutoParkLatch = ((VeTRGR_b_AutoParkLatchEnbl) || (((rtb_MinMax1 <
        KeTRGR_v_AutoParkResetSpd) && ((((uint32)VeTRGI_e_PMM_PowerMode) !=
        CePMDR_e_PowerMode_Off) || (!KeTRGR_b_EnblAutoParkResetKeyOff))) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_c1)));

    /* Update for UnitDelay: '<S637>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_c1 = VeTRGR_b_AutoParkLatch;

    /* End of Outputs for SubSystem: '<S611>/SignalLatchOnWithReset2' */

    /* Switch: '<S611>/Switch' */
    VeTRGR_b_AutoPark_Trig = !VeTRGR_b_AutoParkLatch;

    /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromP' incorporates:
     *  ActionPort: '<S710>/Action Port'
     */
    /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromN' incorporates:
     *  ActionPort: '<S709>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromD' incorporates:
     *  ActionPort: '<S707>/ActionPort'
     */
    /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromR' incorporates:
     *  ActionPort: '<S711>/ActionPort'
     */
    /* If: '<S688>/If1' incorporates:
     *  Logic: '<S611>/Logical8'
     *  Truth Table: '<S707>/TruthTable'
     *  Truth Table: '<S709>/TruthTable'
     *  Truth Table: '<S710>/TruthTable'
     *  Truth Table: '<S711>/TruthTable'
     */
    rtb_Logical6_dg = !TRGR_ac_B.AND_i;

    /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromR' */
    /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromD' */
    /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromN' */
    /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromP' */

    /* Logic: '<S611>/Logical3' incorporates:
     *  Constant: '<S622>/Constant'
     *  Constant: '<S631>/Calib'
     *  Constant: '<S634>/Calib'
     *  Logic: '<S611>/Logical2'
     *  Logic: '<S611>/Logical7'
     *  Logic: '<S611>/Logical8'
     *  RelationalOperator: '<S611>/Comparison2'
     */
    TRGR_ac_B.VeTRGR_b_AutoPark_DAI = ((((((((VeTRGR_b_AutoP_PSA) &&
        (VeTRGC_b_SpdWthnPThrsh)) && (VeTRGI_b_DAI_Enbl)) && rtb_Logical1_hh) &&
        ((KeTRGR_b_InPlant_DAI) || rtb_Logical6_dg)) &&
        (KeTRGR_b_AutoShiftToParkEnbl)) && (((uint32)
        TRGR_ac_B.DataTypeConversion_h) != CeTRGR_e_TXFlt_TPF)) &&
        (VeTRGR_b_AutoPark_Trig));

    /* Logic: '<S615>/Logical5' incorporates:
     *  Constant: '<S657>/Calib'
     */
    VeTRGC_b_OvrdToP_ESS = ((((VeTRGI_b_ESSRqShftPark) &&
        (VeTRGC_b_SpdWthnPThrsh)) && rtb_Logical1_hh) && (KeTRGR_b_ESSParkEnable));

    /* Logic: '<S617>/Logical5' incorporates:
     *  Constant: '<S662>/Constant'
     *  Constant: '<S663>/Calib'
     *  Logic: '<S617>/Logical2'
     *  RelationalOperator: '<S617>/Comparison2'
     */
    VeTRGC_b_OvrdToP_Valid_Plugin = ((((VeTRGI_b_Valid_Plugin) &&
        (VeTRGC_b_SpdWthnPThrsh)) && (KeTRGR_b_ValidPlugin_ForceParkEnable)) &&
        (((uint32)TRGR_ac_B.DataTypeConversion_h) != CeTRGR_e_TXFlt_TPF));

    /* RelationalOperator: '<S613>/Comparison1' incorporates:
     *  Logic: '<S613>/Logical1'
     *  RelationalOperator: '<S613>/Comparison2'
     *  RelationalOperator: '<S613>/Comparison4'
     */
#if Rte_SysCon_Variant_TRGR_CADM_Autopark

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S651>/Constant'
     *  Constant: '<S652>/Constant'
     *  Switch: '<S924>/Switch1'
     *  Switch: '<S925>/Switch1'
     */
    rtb_Comparison18_p = ((((VeTRGI_b_ProxiCADM) && (VeTRGI_b_ProxiCADM2)) &&
                           (((uint32)VeTRGI_e_MRM_Sts) ==
                            CePLTR_e_Vehicle_Sec_Request)) && (((uint32)
                            VeTRGI_e_MRM_Sts_C2) == CePLTR_e_Vehicle_Sec_Request));

#else

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S653>/Constant'
     *  RelationalOperator: '<S613>/Comparison4'
     *  Switch: '<S925>/Switch1'
     */
    rtb_Comparison18_p = (((uint32)VeTRGI_e_MRM_Sts) ==
                          CePLTR_e_Vehicle_Sec_Request);

#endif

    /* End of RelationalOperator: '<S613>/Comparison1' */

    /* SignalConversion generated from: '<S613>/Variant Source' */
    VeTRGC_b_CADM_AutoparkReq = rtb_Comparison18_p;

    /* Logic: '<S613>/Logical5' incorporates:
     *  Constant: '<S648>/Constant'
     *  Constant: '<S649>/Constant'
     *  Constant: '<S650>/Constant'
     *  Constant: '<S654>/Calib'
     *  Logic: '<S613>/Logical15'
     *  RelationalOperator: '<S613>/Comparison11'
     *  RelationalOperator: '<S613>/Comparison12'
     *  RelationalOperator: '<S613>/Comparison9'
     */
    VeTRGC_b_OvrdToP_CADM_Rq = (((((VeTRGC_b_CADM_AutoparkReq) &&
        (VeTRGC_b_SpdWthnPThrsh)) && rtb_Logical1_hh) &&
        (KeTRGR_b_CADM_ParkEnable)) && (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral)) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive)));

    /* Logic: '<S614>/Logical5' incorporates:
     *  Constant: '<S655>/Constant'
     *  Constant: '<S656>/Calib'
     *  Logic: '<S614>/Logical2'
     *  RelationalOperator: '<S614>/Comparison2'
     */
    VeTRGC_b_OvrdToP_Immobilizer = ((((VeTRGI_b_ImmoParkReq) &&
        (VeTRGC_b_SpdWthnPThrsh)) && (((uint32)TRGR_ac_B.DataTypeConversion_h)
        != CeTRGR_e_TXFlt_TPF)) && (KeTRGR_b_ImmoParkEnable));

    /* Outputs for Atomic SubSystem: '<S611>/EdgeFalling' */
    /* Logic: '<S541>/Logical9' incorporates:
     *  Logic: '<S619>/OR1'
     */
    rtb_Logical1_hh = !TRGR_ac_B.VeTRGR_b_AutoPark_DAI;

    /* End of Outputs for SubSystem: '<S611>/EdgeFalling' */

    /* Outputs for Atomic SubSystem: '<S541>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S610>/Switch2' incorporates:
     *  Logic: '<S541>/Logical4'
     *  Logic: '<S541>/Logical9'
     *  Switch: '<S610>/Switch1'
     */
    if ((((((((!VeTRGC_b_OvrdToP_NeutAllwdLost) && (!VeTRGC_b_PSA_Lost)) &&
             (!VeTRGC_b_OvrdToP_RFHub_ForcePark)) && rtb_Logical1_hh) &&
            (!VeTRGC_b_OvrdToP_ESS)) && (!VeTRGC_b_OvrdToP_Valid_Plugin)) &&
            (!VeTRGC_b_OvrdToP_CADM_Rq)) && (!VeTRGC_b_OvrdToP_Immobilizer))
    {
        /* Abs: '<S21>/Abs1' incorporates:
         *  Constant: '<S610>/ConstantValue2'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else
    {
        /* Abs: '<S21>/Abs1' incorporates:
         *  Constant: '<S608>/Calib'
         *  Sum: '<S610>/Subtraction'
         *  Switch: '<S610>/Switch2'
         *  UnitDelay: '<S610>/UnitDelay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_d;
    }

    /* End of Switch: '<S610>/Switch2' */

    /* Switch: '<S610>/Switch' incorporates:
     *  Constant: '<S610>/ConstantValue3'
     *  RelationalOperator: '<S610>/Comparison1'
     *  UnitDelay: '<S610>/UnitDelay1'
     */
    if (rtb_Subtraction2 < 5.0F)
    {
        TRGR_ac_DW.UnitDelay1_DSTATE_d = rtb_Subtraction2;
    }

    /* End of Switch: '<S610>/Switch' */

    /* Update for UnitDelay: '<S610>/UnitDelay' incorporates:
     *  UnitDelay: '<S610>/UnitDelay1'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_d = TRGR_ac_DW.UnitDelay1_DSTATE_d;

    /* RelationalOperator: '<S541>/Comparison2' incorporates:
     *  Constant: '<S607>/Calib'
     *  MinMax: '<S610>/MinMax'
     *  UnitDelay: '<S610>/UnitDelay1'
     */
    VeTRGC_b_OvrdToParkDbnc = (fminf(TRGR_ac_DW.UnitDelay1_DSTATE_d,
        KeTRGR_t_OvrdToParkDbnc) >= KeTRGR_t_OvrdToParkDbnc);

    /* End of Outputs for SubSystem: '<S541>/Stop_Watch_Reset_Enabled' */

    /* Logic: '<S552>/Logical9' incorporates:
     *  Constant: '<S570>/Constant'
     *  Constant: '<S571>/Constant'
     *  Constant: '<S572>/Constant'
     *  Constant: '<S573>/Constant'
     *  Constant: '<S578>/Constant'
     *  Constant: '<S581>/Calib'
     *  Logic: '<S552>/Logical13'
     *  Logic: '<S552>/Logical3'
     *  RelationalOperator: '<S552>/Comparison1'
     *  RelationalOperator: '<S552>/Comparison2'
     *  RelationalOperator: '<S552>/Comparison21'
     *  RelationalOperator: '<S552>/Comparison22'
     *  RelationalOperator: '<S552>/Comparison3'
     *  RelationalOperator: '<S552>/Comparison4'
     */
    VeTRGC_b_ParkReq_PPawlStck = ((((((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral)) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive)) && ((VeTRGC_b_OvrdToParkDbnc) || (((uint32)
        VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangePark))) && (((uint32)
        VeTRGI_e_PPawlReq) == CePPCR_e_PPAWL_STUCK_DISENGAGED)) &&
        (rtb_Switch_d3 < KeTRGR_n_TOSR_Spd_ParkThreshold));

    /* Logic: '<S552>/Logical6' incorporates:
     *  Constant: '<S574>/Constant'
     *  Constant: '<S575>/Constant'
     *  Constant: '<S576>/Constant'
     *  Constant: '<S577>/Constant'
     *  Constant: '<S579>/Constant'
     *  Constant: '<S580>/Constant'
     *  Constant: '<S581>/Calib'
     *  Logic: '<S552>/Logical4'
     *  Logic: '<S552>/Logical5'
     *  Logic: '<S552>/Logical7'
     *  RelationalOperator: '<S552>/Comparison10'
     *  RelationalOperator: '<S552>/Comparison11'
     *  RelationalOperator: '<S552>/Comparison13'
     *  RelationalOperator: '<S552>/Comparison5'
     *  RelationalOperator: '<S552>/Comparison6'
     *  RelationalOperator: '<S552>/Comparison8'
     *  RelationalOperator: '<S552>/Comparison9'
     */
    VeTRGC_b_PPawlFlt_Ovrd = (((((((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeNeutral)) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive)) && ((VeTRGC_b_OvrdToParkDbnc) || (((uint32)
        VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangePark))) && ((((uint32)
        VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED) || (((uint32)
        VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_ZeroRefLrnComplete))) &&
        (VeTRGI_b_PPawlFlt_InhibitMtr)) && (rtb_Switch_d3 <
        KeTRGR_n_TOSR_Spd_ParkThreshold));

    /* Logic: '<S552>/Logical8' */
    VeTRGC_b_PPawlFlt_OvrdToN = ((VeTRGC_b_ParkReq_PPawlStck) ||
        (VeTRGC_b_PPawlFlt_Ovrd));

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S585>/Constant'
     *  Constant: '<S586>/Constant'
     *  Constant: '<S587>/Constant'
     *  Constant: '<S588>/Constant'
     *  Constant: '<S589>/Constant'
     *  Constant: '<S590>/Calib'
     *  Constant: '<S591>/Calib'
     *  Logic: '<S554>/LogicalOperator'
     *  Logic: '<S554>/LogicalOperator1'
     *  Logic: '<S554>/LogicalOperator2'
     *  Logic: '<S554>/LogicalOperator3'
     *  RelationalOperator: '<S554>/RelationalOperator'
     *  RelationalOperator: '<S554>/RelationalOperator1'
     *  RelationalOperator: '<S554>/RelationalOperator2'
     *  RelationalOperator: '<S554>/RelationalOperator3'
     *  RelationalOperator: '<S554>/RelationalOperator4'
     *  Switch: '<S15>/Switch12'
     *  Switch: '<S15>/Switch7'
     */
    rtb_Comparison18_p = (((uint32)VeTRGC_e_DrvrRq) ==
                          CeTRGR_e_TransRangeReverse);
    rtb_Comparison18_p = ((((((uint32)VeTRGI_e_MtrB_InvrtrSt) ==
        CeINVR_e_InverterFaulted) && rtb_Comparison18_p) &&
                           (KeTRGR_b_OvrdToNEnbl_MtrB_Flt)) ||
                          (((rtb_Comparison18_p && (((uint32)
        VeTRGI_e_MtrA_InvrtrSt) == CeINVR_e_InverterFaulted)) && ((((uint32)
        VeTRGI_e_MtrA_6SOEnbl) == CeINVR_e_OnePS) || (((uint32)
        VeTRGI_e_MtrA_6SOEnbl) == CeINVR_e_ThreePS))) &&
                           (KeTRGR_b_OvrdToNEnbl_MtrA_Flt)));

    /* Logic: '<S540>/Logical1' */
    VeTRGC_b_OvrdToNeutral_IP = (((((((VeTRGC_b_ParkReq_HighSpd) ||
        (VeTRGC_b_DriveReq_HighSpd)) || (VeTRGC_b_RevReq_HighSpd)) ||
        (VeTRGC_b_NToR_HighSpd)) || (VeTRGC_b_NToD_HighSpd)) ||
        (VeTRGC_b_PPawlFlt_OvrdToN)) || rtb_Comparison18_p);

    /* Logic: '<S555>/Logical11' incorporates:
     *  Logic: '<S555>/Logical5'
     */
    rtb_Logical2_or = (rtb_OR1_ct || rtb_Logical3_gp);

    /* Logic: '<S555>/Logical12' incorporates:
     *  Constant: '<S594>/Constant'
     *  Constant: '<S596>/Constant'
     *  Constant: '<S598>/Constant'
     *  Logic: '<S555>/Logical11'
     *  Logic: '<S555>/Logical8'
     *  RelationalOperator: '<S555>/Comparison2'
     *  RelationalOperator: '<S555>/Comparison3'
     *  RelationalOperator: '<S555>/Comparison4'
     */
    VeTRGC_b_VehNotRdy_NeutAllwd = ((((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangePark) && ((((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeDrive))) && rtb_Logical2_or) && (VeTRGI_b_NeutAllwd));

    /* Logic: '<S555>/Logical1' incorporates:
     *  Constant: '<S595>/Constant'
     *  Constant: '<S597>/Constant'
     *  Logic: '<S555>/Logical15'
     *  RelationalOperator: '<S555>/Comparison12'
     *  RelationalOperator: '<S555>/Comparison9'
     */
    VeTRGC_b_VehNotRdy_HighSpd = (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeReverse) || (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive)) && rtb_Logical2_or);

    /* Outputs for Atomic SubSystem: '<S555>/EdgeRising' */
    /* Logic: '<S592>/OR1' incorporates:
     *  UnitDelay: '<S592>/Unit Delay'
     */
    rtb_Logical2_or = !TRGR_ac_DW.UnitDelay_DSTATE_bc;

    /* Update for UnitDelay: '<S592>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_bc = VeTRGI_b_DrvAllwdTPChck;

    /* Logic: '<S555>/Logical7' incorporates:
     *  Constant: '<S593>/Constant'
     *  Logic: '<S555>/Logical13'
     *  Logic: '<S555>/Logical3'
     *  Logic: '<S555>/Logical6'
     *  Logic: '<S592>/AND'
     *  RelationalOperator: '<S555>/Comparison1'
     *  RelationalOperator: '<S555>/Comparison5'
     *  UnitDelay: '<S555>/UnitDelay2'
     */
    VeTRGC_b_VehNotRdy_HighSpd_Reset = (((((VeTRGI_b_DrvAllwd) &&
        (VeTRGI_b_PropSysActv)) && ((TRGR_ac_B.DataTypeConversion_e !=
        TRGR_ac_DW.UnitDelay2_DSTATE_e) || ((VeTRGI_b_DrvAllwdTPChck) &&
        rtb_Logical2_or))) || (((uint32)TRGR_ac_B.DataTypeConversion_e) ==
        CeTRGR_e_TransRangePark)) || (VeTRGC_b_OvrdToParkDbnc));

    /* End of Outputs for SubSystem: '<S555>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S555>/SignalLatchOnWithReset' */
    /* Logic: '<S599>/NOT' */
    rtb_Logical2_or = !VeTRGC_b_VehNotRdy_HighSpd_Reset;

    /* Logic: '<S599>/OR' incorporates:
     *  UnitDelay: '<S599>/Unit Delay'
     */
    for (i = 0; i < 2; i++)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_d4[i] = (rtb_Logical2_or &&
            (TRGR_ac_DW.UnitDelay_DSTATE_d4[i]));
    }

    /* End of Logic: '<S599>/OR' */

    /* Logic: '<S599>/OR1' incorporates:
     *  UnitDelay: '<S599>/Unit Delay'
     */
    rtb_Logical2_or = TRGR_ac_DW.UnitDelay_DSTATE_d4[0];
    tmp = TRGR_ac_DW.UnitDelay_DSTATE_d4[1];
    TRGR_ac_DW.UnitDelay_DSTATE_d4[0] = ((VeTRGC_b_VehNotRdy_NeutAllwd) ||
        rtb_Logical2_or);
    TRGR_ac_DW.UnitDelay_DSTATE_d4[1] = ((VeTRGC_b_VehNotRdy_HighSpd) || tmp);

    /* End of Outputs for SubSystem: '<S555>/SignalLatchOnWithReset' */

    /* SignalConversion: '<S555>/SignalConversion' incorporates:
     *  UnitDelay: '<S599>/Unit Delay'
     */
    VeTRGC_b_VehNotRdy_HighSpd_Ltch = TRGR_ac_DW.UnitDelay_DSTATE_d4[1];

    /* SignalConversion: '<S555>/SignalConversion1' incorporates:
     *  UnitDelay: '<S599>/Unit Delay'
     */
    VeTRGC_b_VehNotRdy_NeutAllwd_Ltch = TRGR_ac_DW.UnitDelay_DSTATE_d4[0];

    /* Logic: '<S540>/Logical14' */
    VeTRGC_b_OvrdRq = (((((((((VeTRGC_b_VehNotRdy_NeutAllwd_Ltch) ||
        (VeTRGC_b_VehNotRdy_HighSpd_Ltch)) || (VeTRGC_b_ParkReq_HighSpd)) ||
                            (VeTRGC_b_DriveReq_HighSpd)) ||
                           (VeTRGC_b_RevReq_HighSpd)) || (VeTRGC_b_NToR_HighSpd))
                         || (VeTRGC_b_NToD_HighSpd)) ||
                        (VeTRGC_b_PPawlFlt_OvrdToN)) || rtb_Comparison18_p);

    /* Switch: '<S540>/Switch' incorporates:
     *  Constant: '<S547>/Calib'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S540>/Switch' incorporates:
         *  Logic: '<S540>/Logical2'
         *  Logic: '<S540>/Logical9'
         */
        VeTRGC_b_RejectRq = ((!VeTRGC_b_VehNotRdy_HighSpd_Ltch) &&
                             (VeTRGC_b_OvrdRq));
    }
    else
    {
        /* Switch: '<S540>/Switch' incorporates:
         *  Constant: '<S540>/FALSEConstant'
         */
        VeTRGC_b_RejectRq = false;
    }

    /* End of Switch: '<S540>/Switch' */

    /* Outputs for Atomic SubSystem: '<S33>/SignalLatchOnWithReset' */
    /* Logic: '<S867>/OR1' incorporates:
     *  Logic: '<S867>/NOT'
     *  Logic: '<S867>/OR'
     *  UnitDelay: '<S867>/Unit Delay'
     */
    VeTRGC_b_EPBReqLtch = ((VeTRGC_b_EPBReq) || ((!VeTRGC_b_EPBFdbck) &&
                            (TRGR_ac_DW.UnitDelay_DSTATE_kh)));

    /* Update for UnitDelay: '<S867>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_kh = VeTRGC_b_EPBReqLtch;

    /* End of Outputs for SubSystem: '<S33>/SignalLatchOnWithReset' */

    /* Logic: '<S33>/Logical5' incorporates:
     *  Constant: '<S826>/Constant'
     *  Constant: '<S827>/Constant'
     *  Constant: '<S828>/Constant'
     *  Logic: '<S33>/Logical6'
     *  RelationalOperator: '<S33>/Comparison7'
     *  RelationalOperator: '<S33>/Comparison8'
     *  RelationalOperator: '<S33>/Comparison9'
     *  UnitDelay: '<S33>/UnitDelay'
     */
    VeTRGC_b_EPBRst = ((TRGR_ac_DW.UnitDelay_DSTATE_pp) && (((((uint32)
                           VeTRGC_e_TransRngSt_Crnt) ==
                          CeTRGR_e_TransRangeReverse) || (((uint32)
                           VeTRGC_e_TransRngSt_Crnt) ==
                          CeTRGR_e_TransRangeNeutral)) || (((uint32)
                          VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeDrive)));

    /* Outputs for Atomic SubSystem: '<S33>/SignalLatchOnWithReset1' */
    /* Logic: '<S868>/OR1' incorporates:
     *  Constant: '<S824>/Constant'
     *  Logic: '<S33>/Logical4'
     *  Logic: '<S868>/NOT'
     *  Logic: '<S868>/OR'
     *  RelationalOperator: '<S33>/Comparison3'
     *  RelationalOperator: '<S33>/Comparison5'
     *  Switch: '<S15>/Switch17'
     *  UnitDelay: '<S868>/Unit Delay'
     */
    VeTRGC_b_EPBFdbck = (((VeTRGC_b_EPBReqLtch) && (((uint32)
                            VeTRGI_e_EPB_HoldSts) == CePLTR_e_EPBHoldSts_APPLIED))
                         || ((!VeTRGC_b_EPBRst) &&
                          (TRGR_ac_DW.UnitDelay_DSTATE_dc)));

    /* Update for UnitDelay: '<S868>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_dc = VeTRGC_b_EPBFdbck;

    /* End of Outputs for SubSystem: '<S33>/SignalLatchOnWithReset1' */

    /* Switch: '<S843>/Switch1' incorporates:
     *  Logic: '<S33>/Logical7'
     */
    if ((VeTRGI_b_PPawlPosSnsrFlt) || (VeTRGI_b_PPawl_CurrSnsrFlt))
    {
        /* Switch: '<S843>/Switch1' incorporates:
         *  Constant: '<S830>/Constant'
         *  Logic: '<S33>/Logical9'
         *  RelationalOperator: '<S33>/Comparison10'
         *  RelationalOperator: '<S33>/Comparison3'
         *  Switch: '<S15>/Switch17'
         */
        VeTRGC_b_EPBApplied = ((VeTRGC_b_EPBFdbck) || (((uint32)
            VeTRGI_e_EPB_HoldSts) == CePLTR_e_EPBHoldSts_APPLIED));
    }
    else
    {
        /* Switch: '<S843>/Switch1' incorporates:
         *  Constant: '<S33>/TRUEConstant'
         */
        VeTRGC_b_EPBApplied = true;
    }

    /* End of Switch: '<S843>/Switch1' */

    /* Switch: '<S703>/Switch2' incorporates:
     *  Constant: '<S722>/Calib'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Switch: '<S703>/Switch2' incorporates:
         *  RelationalOperator: '<S703>/Comparison2'
         */
        VeTRGC_b_Sts_Chng_N = (VeTRGC_e_TransRngSt_Crnt !=
                               TRGR_ac_B.DataTypeConversion_e);
    }
    else
    {
        /* Switch: '<S703>/Switch2' incorporates:
         *  RelationalOperator: '<S703>/Comparison10'
         *  UnitDelay: '<S703>/UnitDelay1'
         */
        VeTRGC_b_Sts_Chng_N = (TRGR_ac_B.DataTypeConversion_e !=
                               TRGR_ac_DW.UnitDelay1_DSTATE_es);
    }

    /* End of Switch: '<S703>/Switch2' */

    /* Logic: '<S703>/Logical5' */
    VeTRGC_b_BrkPrss_PRNDChng_N = ((VeTRGC_b_BrkRlsDbnc_N) &&
        (VeTRGC_b_Sts_Chng_N));

    /* Outputs for Atomic SubSystem: '<S703>/SignalLatchOnWithReset2' */
    /* Logic: '<S725>/OR1' incorporates:
     *  Logic: '<S725>/OR'
     *  UnitDelay: '<S725>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_hn = ((VeTRGC_b_BrkPrss_PRNDChng_N) ||
        (rtb_AND_c5 && (TRGR_ac_DW.UnitDelay_DSTATE_hn)));

    /* End of Outputs for SubSystem: '<S703>/SignalLatchOnWithReset2' */

    /* Switch: '<S717>/Switch1' */
    if (TRGR_ac_B.AND_lq)
    {
        /* Switch: '<S703>/Switch1' incorporates:
         *  Constant: '<S722>/Calib'
         */
        if (KeTRGR_b_ShftProxi)
        {
            /* Switch: '<S717>/Switch1' incorporates:
             *  Logic: '<S703>/Logical7'
             *  Logic: '<S703>/Logical8'
             *  Switch: '<S703>/Switch1'
             */
            VeTRGC_b_PRNDChng_WithBrk_N = ((VeTRGC_b_BrkPrss_PRNDChng_N) &&
                (!VeTRGI_b_PPawlFlt_InhibitMtr));
        }
        else
        {
            /* Switch: '<S717>/Switch1' incorporates:
             *  Switch: '<S703>/Switch1'
             *  UnitDelay: '<S725>/Unit Delay'
             */
            VeTRGC_b_PRNDChng_WithBrk_N = TRGR_ac_DW.UnitDelay_DSTATE_hn;
        }

        /* End of Switch: '<S703>/Switch1' */
    }
    else
    {
        /* Switch: '<S717>/Switch1' incorporates:
         *  Constant: '<S703>/TRUEConstant1'
         */
        VeTRGC_b_PRNDChng_WithBrk_N = true;
    }

    /* End of Switch: '<S717>/Switch1' */

    /* If: '<S688>/If1' incorporates:
     *  Constant: '<S693>/Constant'
     *  Constant: '<S694>/Constant'
     *  Constant: '<S695>/Constant'
     *  Constant: '<S696>/Constant'
     *  Constant: '<S697>/Constant'
     *  RelationalOperator: '<S688>/Comparison1'
     *  RelationalOperator: '<S688>/Comparison2'
     *  RelationalOperator: '<S688>/Comparison3'
     *  RelationalOperator: '<S688>/Comparison4'
     *  RelationalOperator: '<S688>/Comparison5'
     */
    if (((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangePark)
    {
        /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromP' incorporates:
         *  ActionPort: '<S710>/Action Port'
         */
        /* Logic: '<S710>/Logical1' incorporates:
         *  Constant: '<S768>/Constant'
         *  Constant: '<S769>/Constant'
         *  Constant: '<S770>/Constant'
         *  Logic: '<S710>/Logical3'
         *  RelationalOperator: '<S710>/Comparison2'
         *  RelationalOperator: '<S710>/Comparison3'
         *  RelationalOperator: '<S710>/Comparison4'
         */
        rtb_Comparison11_oj = ((((((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_ENGAGED) || (((uint32)VeTRGI_e_PPawlFdbck) ==
            CePPCR_e_PPAWL_InitSegOneComplete)) || (((uint32)VeTRGI_e_PPawlFdbck)
            == CePPCR_e_PPAWL_InitSegTwoComplete)) &&
                               (VeTRGI_b_PPawlFlt_InhibitMtr));

        /* Logic: '<S710>/Logical2' incorporates:
         *  Constant: '<S767>/Constant'
         *  Constant: '<S771>/Constant'
         *  RelationalOperator: '<S710>/Comparison1'
         *  RelationalOperator: '<S710>/Comparison9'
         */
        rtb_Logical2_j0 = ((((uint32)VeTRGI_e_PPawlFdbck) ==
                            CePPCR_e_PPAWL_DisEngaging) || (((uint32)
                             VeTRGI_e_PPawlFdbck) ==
                            CePPCR_e_PPAWL_ZeroRefLrnInProgress));

        /* Logic: '<S710>/Logical5' incorporates:
         *  Constant: '<S765>/Constant'
         *  Constant: '<S766>/Constant'
         *  RelationalOperator: '<S710>/Comparison6'
         *  RelationalOperator: '<S710>/Comparison7'
         */
        rtb_Logical5_gi = ((((uint32)VeTRGI_e_PMM_PowerMode) !=
                            CePMDR_e_PowerMode_Acc) && (((uint32)
                             VeTRGI_e_PMM_PowerMode) != CePMDR_e_PowerMode_Off));

        /* Truth Table: '<S710>/TruthTable' incorporates:
         *  UnitDelay: '<S14>/UnitDelay1'
         *  UnitDelay: '<S14>/UnitDelay4'
         */
        /* Truth Table Function 'TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ArbitratedPRNDRequest/TRGC_ArbPRNDStateFromP/TruthTable': '<S772>:1' */
        /*  Driver Requested Park */
        /* Condition '#1': '<S772>:1:20' */
        /*  Driver Requested Neutral */
        /* Condition '#2': '<S772>:1:24' */
        aVarTruthTableCondition_2 = (((uint32)VeTRGC_e_DrvrRq) ==
            CeTRGR_e_TransRangeNeutral);

        /*  NeutralAllowed */
        /*  PSA and DriveAllowed is True */
        /*  PRNDL Change Request with Brake Applied */
        /*  PPawl Stuck or PPawl Faults */
        /*  PPawl Disengaging */
        /*  Ovveride to Park */
        /*  Override to Neutral */
        /*  Driver requested signal is rejected */
        /*  EPB Applied */
        /*  Key status is not in Off and not in ACC */
        /*  IP Condition is True */
        rtb_Logical2_or = (((uint32)VeTRGC_e_DrvrRq) != CeTRGR_e_TransRangePark);
        tmp = !rtb_Comparison11_oj;
        rtb_Comparison18_p = !rtb_Logical2_j0;
        rtb_AND_c5 = !TRGR_ac_DW.UnitDelay1_DSTATE_b5;
        tmp_1 = !TRGR_ac_DW.UnitDelay4_DSTATE;
        aVarTruthTableCondition_1 = !VeTRGC_b_RejectRq;
        if (((((((((((rtb_Logical2_or && (!aVarTruthTableCondition_2)) &&
                     (VeTRGC_b_VehReady)) && (VeTRGC_b_PRNDChng_WithBrk_P)) &&
                   tmp) && rtb_Comparison18_p) && rtb_AND_c5) && tmp_1) &&
                aVarTruthTableCondition_1) && (VeTRGC_b_EPBApplied)) &&
                rtb_Logical5_gi) && rtb_Logical6_dg)
        {
            /* Merge: '<S688>/Merge' incorporates:
             *  Switch: '<S315>/Switch1'
             */
            /* Decision 'D1': '<S772>:1:70' */
            /* Condition '#4': '<S772>:1:32' */
            /* Condition '#5': '<S772>:1:36' */
            /* Condition '#11': '<S772>:1:60' */
            /* Condition '#12': '<S772>:1:64' */
            /*  Set ArbPRNDReq to DrvrRq */
            /* Action '2': '<S772>:1:101' */
            VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '2': '<S772>:1:102' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if (((((((((rtb_Logical2_or && aVarTruthTableCondition_2) &&
                        (VeTRGI_b_NeutAllwd)) && (VeTRGC_b_PRNDChng_WithBrk_P)) &&
                      tmp) && rtb_Comparison18_p) && rtb_AND_c5) &&
                   (VeTRGC_b_EPBApplied)) && rtb_Logical5_gi) && rtb_Logical6_dg)
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D2': '<S772>:1:72' */
            /* Condition '#3': '<S772>:1:28' */
            /* Condition '#5': '<S772>:1:36' */
            /* Condition '#11': '<S772>:1:60' */
            /* Condition '#12': '<S772>:1:64' */
            /*  Set ArbPRNDReq to Neutral */
            /* Action '3': '<S772>:1:108' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '3': '<S772>:1:109' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if (rtb_Comparison11_oj && rtb_Comparison18_p)
        {
            /* Merge: '<S688>/Merge' */
            /* Condition '#6': '<S772>:1:40' */
            /* Decision 'D3': '<S772>:1:74' */
            /*  Set ArbPRNDReq to Park */
            /* Action '1': '<S772>:1:94' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '1': '<S772>:1:95' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if ((rtb_Logical2_j0 && tmp_1) && aVarTruthTableCondition_1)
        {
            /* Merge: '<S688>/Merge' incorporates:
             *  Switch: '<S315>/Switch1'
             */
            /* Condition '#7': '<S772>:1:44' */
            /* Decision 'D4': '<S772>:1:76' */
            /*  Set ArbPRNDReq to DrvrRq */
            /* Action '2': '<S772>:1:101' */
            VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '2': '<S772>:1:102' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if ((tmp && rtb_Comparison18_p) && (TRGR_ac_DW.UnitDelay1_DSTATE_b5))
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D5': '<S772>:1:78' */
            /* Condition '#8': '<S772>:1:48' */
            /*  Ovrd To Park is set and the knob is autocorrected to P */
            /* Action '4': '<S772>:1:115' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/TRUEConstant'
             */
            /* Action '4': '<S772>:1:116' */
            VeTRGC_b_AutoCorrectP = true;
        }
        else if (((((((VeTRGC_b_PRNDChng_WithBrk_P) && tmp) && rtb_AND_c5) &&
                    (TRGR_ac_DW.UnitDelay4_DSTATE)) && (VeTRGC_b_EPBApplied)) &&
                  rtb_Logical5_gi) && rtb_Logical6_dg)
        {
            /* Merge: '<S688>/Merge' */
            /* Condition '#5': '<S772>:1:36' */
            /* Decision 'D6': '<S772>:1:80' */
            /* Condition '#9': '<S772>:1:52' */
            /* Condition '#11': '<S772>:1:60' */
            /* Condition '#12': '<S772>:1:64' */
            /*  Set ArbPRNDReq to Neutral */
            /* Action '3': '<S772>:1:108' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '3': '<S772>:1:109' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if ((((((tmp && rtb_AND_c5) && tmp_1) && (VeTRGC_b_RejectRq)) &&
                   (VeTRGC_b_EPBApplied)) && rtb_Logical5_gi) && rtb_Logical6_dg)
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D7': '<S772>:1:82' */
            /* Condition '#10': '<S772>:1:56' */
            /* Condition '#11': '<S772>:1:60' */
            /* Condition '#12': '<S772>:1:64' */
            /*  Set ArbPRNDReq to Park */
            /* Action '1': '<S772>:1:94' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '1': '<S772>:1:95' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if (((((((rtb_Logical2_or && (VeTRGI_b_NeutAllwd)) &&
                      (VeTRGC_b_PRNDChng_WithBrk_P)) && tmp) && rtb_AND_c5) &&
                   (VeTRGC_b_EPBApplied)) && rtb_Logical5_gi) &&
                 (TRGR_ac_B.AND_i))
        {
            /* Merge: '<S688>/Merge' incorporates:
             *  Switch: '<S315>/Switch1'
             */
            /* Decision 'D8': '<S772>:1:84' */
            /* Condition '#3': '<S772>:1:28' */
            /* Condition '#5': '<S772>:1:36' */
            /* Condition '#11': '<S772>:1:60' */
            /* Condition '#12': '<S772>:1:64' */
            /* Condition '#13': '<S772>:1:68' */
            /*  Set ArbPRNDReq to DrvrRq */
            /* Action '2': '<S772>:1:101' */
            VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '2': '<S772>:1:102' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else
        {
            /* Merge: '<S688>/Merge' */
            /*  Default */
            /*  Set ArbPRNDReq to Park */
            /* Action '1': '<S772>:1:94' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S710>/FALSEConstant'
             */
            /* Action '1': '<S772>:1:95' */
            VeTRGC_b_AutoCorrectP = false;
        }

        /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromP' */
    }
    else if (((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeReverse)
    {
        /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromR' incorporates:
         *  ActionPort: '<S711>/ActionPort'
         */
        /* Truth Table: '<S711>/TruthTable' incorporates:
         *  UnitDelay: '<S14>/UnitDelay1'
         *  UnitDelay: '<S14>/UnitDelay4'
         */
        /* Truth Table Function 'TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ArbitratedPRNDRequest/TRGC_ArbPRNDStateFromR/TruthTable': '<S775>:1' */
        /*  Ovrd To Neutral is True */
        /*  Ovrd To Park is True */
        /*  Driver requested signal is rejected */
        /*  IP Condition is True */
        /*  Ovrd To Neutral in IPMode */
        rtb_Logical2_or = !TRGR_ac_DW.UnitDelay1_DSTATE_b5;
        tmp = ((!TRGR_ac_DW.UnitDelay4_DSTATE) && rtb_Logical2_or);
        rtb_Comparison18_p = !VeTRGC_b_OvrdToNeutral_IP;
        if (((tmp && (!VeTRGC_b_RejectRq)) && rtb_Logical6_dg) &&
                rtb_Comparison18_p)
        {
            /* Merge: '<S688>/Merge' incorporates:
             *  Switch: '<S315>/Switch1'
             */
            /* Decision 'D1': '<S775>:1:30' */
            /*  Set ArbPRNDReq to DrvrRq */
            /* Action '2': '<S775>:1:55' */
            VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S711>/FALSEConstant'
             */
            /* Action '2': '<S775>:1:56' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if (TRGR_ac_DW.UnitDelay1_DSTATE_b5)
        {
            /* Merge: '<S688>/Merge' */
            /* Condition '#2': '<S775>:1:16' */
            /*  Ovrd To Park is set and the knob is autocorrected to P */
            /* Action '3': '<S775>:1:62' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S711>/TRUEConstant'
             */
            /* Action '3': '<S775>:1:63' */
            VeTRGC_b_AutoCorrectP = true;
        }
        else if (((TRGR_ac_DW.UnitDelay4_DSTATE) && rtb_Logical2_or) &&
                 rtb_Logical6_dg)
        {
            /* Merge: '<S688>/Merge' */
            /* Condition '#1': '<S775>:1:12' */
            /* Decision 'D3': '<S775>:1:34' */
            /*  Set ArbPRNDReq to Neutral */
            /* Action '1': '<S775>:1:48' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S711>/FALSEConstant'
             */
            /* Action '1': '<S775>:1:49' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if ((tmp && (VeTRGC_b_RejectRq)) && rtb_Logical6_dg)
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D4': '<S775>:1:36' */
            /* Condition '#3': '<S775>:1:20' */
            /*  Set ArbPRNDReq to Reverse */
            /* Action '4': '<S775>:1:69' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeReverse;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S711>/FALSEConstant'
             */
            /* Action '4': '<S775>:1:70' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else if ((rtb_Logical2_or && (TRGR_ac_B.AND_i)) && rtb_Comparison18_p)
        {
            /* Merge: '<S688>/Merge' incorporates:
             *  Switch: '<S315>/Switch1'
             */
            /* Decision 'D5': '<S775>:1:38' */
            /* Condition '#4': '<S775>:1:24' */
            /*  Set ArbPRNDReq to DrvrRq */
            /* Action '2': '<S775>:1:55' */
            VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S711>/FALSEConstant'
             */
            /* Action '2': '<S775>:1:56' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D6': '<S775>:1:40' */
            /*  Default */
            /*  Set ArbPRNDReq to Reverse */
            /* Action '4': '<S775>:1:69' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeReverse;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S711>/FALSEConstant'
             */
            /* Action '4': '<S775>:1:70' */
            VeTRGC_b_AutoCorrectP = false;
        }

        /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromR' */
    }
    else if (((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral)
    {
        /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromN' incorporates:
         *  ActionPort: '<S709>/ActionPort'
         */
        /* Truth Table: '<S709>/TruthTable' incorporates:
         *  UnitDelay: '<S14>/UnitDelay1'
         *  UnitDelay: '<S14>/UnitDelay4'
         */
        /* Truth Table Function 'TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ArbitratedPRNDRequest/TRGC_ArbPRNDStateFromN/TruthTable': '<S762>:1' */
        /*  Driver Requested Park */
        /* Condition '#1': '<S762>:1:17' */
        aVarTruthTableCondition_1 = (((uint32)VeTRGC_e_DrvrRq) ==
            CeTRGR_e_TransRangePark);

        /*  Driver Requested Reverse */
        /* Condition '#2': '<S762>:1:21' */
        aVarTruthTableCondition_2 = (((uint32)VeTRGC_e_DrvrRq) ==
            CeTRGR_e_TransRangeReverse);

        /*  PSA and DriveAllowed is True */
        /*  Ovrd To Neutral is True */
        /*  Ovrd To Park is True */
        /*  Driver requested signal is rejected */
        /*  PRNDL Change Request with Brake Applied */
        /*  PRNDL Change Request with Brake Applied for R */
        /*  IP Condition is True */
        /*  Ovrd To Neutral in IPMode */
        rtb_Logical2_or = !aVarTruthTableCondition_2;
        tmp = !TRGR_ac_DW.UnitDelay4_DSTATE;
        rtb_Comparison18_p = !VeTRGC_b_RejectRq;
        rtb_AND_c5 = !VeTRGC_b_OvrdToNeutral_IP;
        if ((((aVarTruthTableCondition_1 && rtb_Logical2_or) && tmp) &&
                rtb_Comparison18_p) && rtb_AND_c5)
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D1': '<S762>:1:55' */
            /*  Set ArbPRNDReq to Park */
            /* Action '1': '<S762>:1:79' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S709>/FALSEConstant'
             */
            /* Action '1': '<S762>:1:80' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else
        {
            tmp_1 = !aVarTruthTableCondition_1;
            aVarTruthTableCondition_1 = !TRGR_ac_DW.UnitDelay1_DSTATE_b5;
            rtb_Logical2_or = (tmp_1 && rtb_Logical2_or);
            if (((((((rtb_Logical2_or && (VeTRGC_b_VehReady)) && tmp) &&
                    aVarTruthTableCondition_1) && rtb_Comparison18_p) &&
                    (VeTRGC_b_PRNDChng_WithBrk_N)) && rtb_Logical6_dg) &&
                    rtb_AND_c5)
            {
                /* Merge: '<S688>/Merge' incorporates:
                 *  Switch: '<S315>/Switch1'
                 */
                /* Decision 'D2': '<S762>:1:57' */
                /* Condition '#3': '<S762>:1:25' */
                /* Condition '#7': '<S762>:1:41' */
                /*  Set ArbPRNDReq to DrvrRq */
                /* Action '3': '<S762>:1:93' */
                VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

                /* Merge: '<S688>/Merge1' incorporates:
                 *  Constant: '<S709>/FALSEConstant'
                 */
                /* Action '3': '<S762>:1:94' */
                VeTRGC_b_AutoCorrectP = false;
            }
            else
            {
                tmp_1 = (tmp_1 && aVarTruthTableCondition_2);
                if ((((((((tmp_1 && (VeTRGC_b_VehReady)) && tmp) &&
                         aVarTruthTableCondition_1) && rtb_Comparison18_p) &&
                        (VeTRGC_b_PRNDChng_WithBrk_N)) && rtb_Comparison11_oj) &&
                     rtb_Logical6_dg) && rtb_AND_c5)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Decision 'D3': '<S762>:1:59' */
                    /* Condition '#3': '<S762>:1:25' */
                    /* Condition '#7': '<S762>:1:41' */
                    /* Condition '#8': '<S762>:1:45' */
                    /*  Set ArbPRNDReq to Reverse */
                    /* Action '5': '<S762>:1:107' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeReverse;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/FALSEConstant'
                     */
                    /* Action '5': '<S762>:1:108' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if (TRGR_ac_DW.UnitDelay1_DSTATE_b5)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Condition '#5': '<S762>:1:33' */
                    /*  Ovrd To Park is set and the knob is autocorrected to P */
                    /* Action '4': '<S762>:1:100' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/TRUEConstant'
                     */
                    /* Action '4': '<S762>:1:101' */
                    VeTRGC_b_AutoCorrectP = true;
                }
                else if (((TRGR_ac_DW.UnitDelay4_DSTATE) &&
                          (!TRGR_ac_DW.UnitDelay1_DSTATE_b5)) && rtb_Logical6_dg)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Condition '#4': '<S762>:1:29' */
                    /* Decision 'D5': '<S762>:1:63' */
                    /*  Set ArbPRNDReq to Neutral */
                    /* Action '2': '<S762>:1:86' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/FALSEConstant'
                     */
                    /* Action '2': '<S762>:1:87' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if ((((!TRGR_ac_DW.UnitDelay4_DSTATE) &&
                           (!TRGR_ac_DW.UnitDelay1_DSTATE_b5)) &&
                          (VeTRGC_b_RejectRq)) && (!TRGR_ac_B.AND_i))
                {
                    /* Merge: '<S688>/Merge' */
                    /* Decision 'D6': '<S762>:1:65' */
                    /* Condition '#6': '<S762>:1:37' */
                    /*  Set ArbPRNDReq to Neutral */
                    /* Action '2': '<S762>:1:86' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/FALSEConstant'
                     */
                    /* Action '2': '<S762>:1:87' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if ((((rtb_Logical2_or && aVarTruthTableCondition_1) &&
                           (VeTRGC_b_PRNDChng_WithBrk_N)) && (TRGR_ac_B.AND_i)) &&
                         rtb_AND_c5)
                {
                    /* Merge: '<S688>/Merge' incorporates:
                     *  Switch: '<S315>/Switch1'
                     */
                    /* Decision 'D7': '<S762>:1:67' */
                    /* Condition '#7': '<S762>:1:41' */
                    /* Condition '#9': '<S762>:1:49' */
                    /*  Set ArbPRNDReq to DrvrRq */
                    /* Action '3': '<S762>:1:93' */
                    VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/FALSEConstant'
                     */
                    /* Action '3': '<S762>:1:94' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if (((((tmp_1 && aVarTruthTableCondition_1) &&
                            (VeTRGC_b_PRNDChng_WithBrk_N)) &&
                           rtb_Comparison11_oj) && (TRGR_ac_B.AND_i)) &&
                         rtb_AND_c5)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Decision 'D8': '<S762>:1:69' */
                    /* Condition '#7': '<S762>:1:41' */
                    /* Condition '#8': '<S762>:1:45' */
                    /* Condition '#9': '<S762>:1:49' */
                    /*  Set ArbPRNDReq to Reverse */
                    /* Action '5': '<S762>:1:107' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeReverse;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/FALSEConstant'
                     */
                    /* Action '5': '<S762>:1:108' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else
                {
                    /* Merge: '<S688>/Merge' */
                    /* Decision 'D9': '<S762>:1:71' */
                    /*  Default */
                    /*  Set ArbPRNDReq to Neutral */
                    /* Action '2': '<S762>:1:86' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S709>/FALSEConstant'
                     */
                    /* Action '2': '<S762>:1:87' */
                    VeTRGC_b_AutoCorrectP = false;
                }
            }
        }

        /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromN' */
    }
    else if (((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeDrive)
    {
        /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromD' incorporates:
         *  ActionPort: '<S707>/ActionPort'
         */
        /* Truth Table: '<S707>/TruthTable' incorporates:
         *  Constant: '<S757>/Calib'
         *  UnitDelay: '<S14>/UnitDelay1'
         *  UnitDelay: '<S14>/UnitDelay4'
         */
        /* Truth Table Function 'TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_PRND_ArbitrationAndValidation/TRGC_ArbitratedPRNDRequest/TRGC_ArbPRNDStateFromD/TruthTable': '<S758>:1' */
        /*  Driver Requested Reverse */
        /* Condition '#1': '<S758>:1:15' */
        aVarTruthTableCondition_1 = (((uint32)VeTRGC_e_DrvrRq) ==
            CeTRGR_e_TransRangeReverse);

        /*  Ovrd To Neutral is True */
        /*  Ovrd To Park is True */
        /*  Driver requested signal is rejected */
        /*  PRNDL Change Request with Brake Applied */
        /*  IP Condition is True */
        /*  Ovrd To Neutral in IPMode */
        /*  Vehicle has button shifter */
        rtb_Logical2_or = !TRGR_ac_DW.UnitDelay4_DSTATE;
        tmp = !TRGR_ac_DW.UnitDelay1_DSTATE_b5;
        rtb_Comparison18_p = ((aVarTruthTableCondition_1 && rtb_Logical2_or) &&
                              tmp);
        rtb_AND_c5 = !VeTRGC_b_OvrdToNeutral_IP;
        tmp_1 = !VeTRGC_b_RejectRq;
        if ((((rtb_Comparison18_p && tmp_1) && rtb_Comparison11_oj) &&
                rtb_Logical6_dg) && rtb_AND_c5)
        {
            /* Merge: '<S688>/Merge' */
            /* Decision 'D1': '<S758>:1:45' */
            /* Condition '#5': '<S758>:1:31' */
            /*  Set ArbPRNDReq to Reverse */
            /* Action '5': '<S758>:1:101' */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeReverse;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S707>/FALSEConstant'
             */
            /* Action '5': '<S758>:1:102' */
            VeTRGC_b_AutoCorrectP = false;
        }
        else
        {
            rtb_Comparison18_p = (((rtb_Comparison18_p &&
                                    aVarTruthTableCondition_2) &&
                                   rtb_Logical6_dg) && rtb_AND_c5);
            if (rtb_Comparison18_p && (KeTRGR_b_ShftProxi))
            {
                /* Merge: '<S688>/Merge' */
                /* Decision 'D2': '<S758>:1:47' */
                /* Condition '#8': '<S758>:1:43' */
                /*  Set ArbPRNDReq to Drive */
                /* Action '4': '<S758>:1:94' */
                VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeDrive;

                /* Merge: '<S688>/Merge1' incorporates:
                 *  Constant: '<S707>/FALSEConstant'
                 */
                /* Action '4': '<S758>:1:95' */
                VeTRGC_b_AutoCorrectP = false;
            }
            else if (rtb_Comparison18_p && (!KeTRGR_b_ShftProxi))
            {
                /* Merge: '<S688>/Merge' */
                /* Decision 'D3': '<S758>:1:49' */
                /*  Set ArbPRNDReq to Neutral */
                /* Action '1': '<S758>:1:73' */
                VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

                /* Merge: '<S688>/Merge1' incorporates:
                 *  Constant: '<S707>/FALSEConstant'
                 */
                /* Action '1': '<S758>:1:74' */
                VeTRGC_b_AutoCorrectP = false;
            }
            else
            {
                rtb_Comparison18_p = !aVarTruthTableCondition_1;
                if (((((rtb_Comparison18_p && rtb_Logical2_or) && tmp) && tmp_1)
                     && rtb_Logical6_dg) && rtb_AND_c5)
                {
                    /* Merge: '<S688>/Merge' incorporates:
                     *  Switch: '<S315>/Switch1'
                     */
                    /* Decision 'D4': '<S758>:1:51' */
                    /*  Set ArbPRNDReq to DrvrRq */
                    /* Action '2': '<S758>:1:80' */
                    VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S707>/FALSEConstant'
                     */
                    /* Action '2': '<S758>:1:81' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if (TRGR_ac_DW.UnitDelay1_DSTATE_b5)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Condition '#3': '<S758>:1:23' */
                    /*  OvrdToPark is set and the knob is autocorrected to P */
                    /* Action '3': '<S758>:1:87' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S707>/TRUEConstant'
                     */
                    /* Action '3': '<S758>:1:88' */
                    VeTRGC_b_AutoCorrectP = true;
                }
                else if (((TRGR_ac_DW.UnitDelay4_DSTATE) &&
                          (!TRGR_ac_DW.UnitDelay1_DSTATE_b5)) && rtb_Logical6_dg)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Condition '#2': '<S758>:1:19' */
                    /* Decision 'D6': '<S758>:1:55' */
                    /*  Set ArbPRNDReq to Neutral */
                    /* Action '1': '<S758>:1:73' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S707>/FALSEConstant'
                     */
                    /* Action '1': '<S758>:1:74' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if (((((!TRGR_ac_DW.UnitDelay4_DSTATE) &&
                            (!TRGR_ac_DW.UnitDelay1_DSTATE_b5)) &&
                           (VeTRGC_b_RejectRq)) && rtb_Logical6_dg) &&
                         rtb_AND_c5)
                {
                    /* Merge: '<S688>/Merge' */
                    /* Decision 'D7': '<S758>:1:57' */
                    /* Condition '#4': '<S758>:1:27' */
                    /*  Set ArbPRNDReq to Drive */
                    /* Action '4': '<S758>:1:94' */
                    VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeDrive;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S707>/FALSEConstant'
                     */
                    /* Action '4': '<S758>:1:95' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else if (((rtb_Comparison18_p && tmp) && (TRGR_ac_B.AND_i)) &&
                         rtb_AND_c5)
                {
                    /* Merge: '<S688>/Merge' incorporates:
                     *  Switch: '<S315>/Switch1'
                     */
                    /* Decision 'D8': '<S758>:1:59' */
                    /* Condition '#6': '<S758>:1:35' */
                    /*  Set ArbPRNDReq to DrvrRq */
                    /* Action '2': '<S758>:1:80' */
                    VeTRGC_e_ArbPRNDRequest = VeTRGC_e_DrvrRq;

                    /* Merge: '<S688>/Merge1' incorporates:
                     *  Constant: '<S707>/FALSEConstant'
                     */
                    /* Action '2': '<S758>:1:81' */
                    VeTRGC_b_AutoCorrectP = false;
                }
                else
                {
                    rtb_Logical2_or = (aVarTruthTableCondition_1 && tmp);
                    if (((rtb_Logical2_or && rtb_Comparison11_oj) &&
                            (TRGR_ac_B.AND_i)) && rtb_AND_c5)
                    {
                        /* Merge: '<S688>/Merge' */
                        /* Decision 'D9': '<S758>:1:61' */
                        /* Condition '#5': '<S758>:1:31' */
                        /* Condition '#6': '<S758>:1:35' */
                        /*  Set ArbPRNDReq to Reverse */
                        /* Action '5': '<S758>:1:101' */
                        VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeReverse;

                        /* Merge: '<S688>/Merge1' incorporates:
                         *  Constant: '<S707>/FALSEConstant'
                         */
                        /* Action '5': '<S758>:1:102' */
                        VeTRGC_b_AutoCorrectP = false;
                    }
                    else if (((rtb_Logical2_or && aVarTruthTableCondition_2) &&
                              (TRGR_ac_B.AND_i)) && rtb_AND_c5)
                    {
                        /* Merge: '<S688>/Merge' */
                        /* Decision 'D10': '<S758>:1:63' */
                        /* Condition '#6': '<S758>:1:35' */
                        /*  Set ArbPRNDReq to Neutral */
                        /* Action '1': '<S758>:1:73' */
                        VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeNeutral;

                        /* Merge: '<S688>/Merge1' incorporates:
                         *  Constant: '<S707>/FALSEConstant'
                         */
                        /* Action '1': '<S758>:1:74' */
                        VeTRGC_b_AutoCorrectP = false;
                    }
                    else
                    {
                        /* Merge: '<S688>/Merge' */
                        /* Decision 'D11': '<S758>:1:65' */
                        /*  Default */
                        /*  Set ArbPRNDReq to Drive */
                        /* Action '4': '<S758>:1:94' */
                        VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangeDrive;

                        /* Merge: '<S688>/Merge1' incorporates:
                         *  Constant: '<S707>/FALSEConstant'
                         */
                        /* Action '4': '<S758>:1:95' */
                        VeTRGC_b_AutoCorrectP = false;
                    }
                }
            }
        }

        /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromD' */
    }
    else
    {
        if (((uint32)VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeIllegal)
        {
            /* Outputs for IfAction SubSystem: '<S688>/TRGC_ArbPRNDStateFromIllegal' incorporates:
             *  ActionPort: '<S708>/Action Port'
             */
            /* Merge: '<S688>/Merge' incorporates:
             *  Constant: '<S759>/Constant'
             *  SignalConversion: '<S708>/SignalConversion'
             */
            VeTRGC_e_ArbPRNDRequest = CeTRGR_e_TransRangePark;

            /* Merge: '<S688>/Merge1' incorporates:
             *  Constant: '<S708>/FALSEConstant'
             *  SignalConversion generated from: '<S708>/AutoCorrectToP'
             */
            VeTRGC_b_AutoCorrectP = false;

            /* End of Outputs for SubSystem: '<S688>/TRGC_ArbPRNDStateFromIllegal' */
        }
    }

    /* Switch: '<S40>/Switch1' incorporates:
     *  Constant: '<S43>/Constant'
     *  Constant: '<S49>/Calib'
     *  Constant: '<S50>/Calib'
     *  Logic: '<S40>/Logical'
     *  Logic: '<S53>/AND'
     *  RelationalOperator: '<S40>/Comparison1'
     *  RelationalOperator: '<S53>/Greater  Than'
     *  UnitDelay: '<S53>/Unit Delay'
     */
    if (KeTRGR_b_AutoCorrectP_VF)
    {
        /* Outputs for Atomic SubSystem: '<S40>/TurnOnDelaySample' */
        rtb_Logical2_or = (rtb_AND_nj && (TRGR_ac_DW.UnitDelay_DSTATE_jp >=
                            KeTRGR_Cnt_AutoCorrectPDbnc));

        /* End of Outputs for SubSystem: '<S40>/TurnOnDelaySample' */
    }
    else
    {
        rtb_Logical2_or = ((VeTRGC_b_AutoCorrectP) && (((uint32)
                             VeTRGC_e_TransRngSt_Crnt) ==
                            CeTRGR_e_TransRangePark));
    }

    /* End of Switch: '<S40>/Switch1' */

    /* Logic: '<S40>/Logical5' incorporates:
     *  Constant: '<S44>/Constant'
     *  Constant: '<S45>/Constant'
     *  Constant: '<S48>/Constant'
     *  Constant: '<S51>/Calib'
     *  Constant: '<S52>/Calib'
     *  Logic: '<S40>/Logical1'
     *  Logic: '<S40>/Logical4'
     *  RelationalOperator: '<S40>/Comparison2'
     *  RelationalOperator: '<S40>/Comparison3'
     *  RelationalOperator: '<S40>/Comparison4'
     *  RelationalOperator: '<S40>/Comparison5'
     */
    VeTRGC_b_AutoCorrectEnbl = (rtb_Logical2_or || ((((((((uint32)
        VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeReverse) || (((uint32)
        VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeDrive)) && (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral)) &&
        rtb_Logical3_gp) && (rtb_MinMax1 >= KeTRGR_v_ParkThreshold)) &&
        (KeTRGR_b_Enbl_AutoCorrectN)));

    /* Chart: '<S20>/TRGC_PRND_AutoCorrection' */
    /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_AutoCorrection_PRNDKnob/TRGC_PRND_AutoCorrection */
    /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_AutoCorrection_PRNDKnob/TRGC_PRND_AutoCorrection */
    if (((uint32)TRGR_ac_DW.is_active_c5_TRGR_ac) == 0U)
    {
        /* Entry: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_AutoCorrection_PRNDKnob/TRGC_PRND_AutoCorrection */
        TRGR_ac_DW.is_active_c5_TRGR_ac = 1U;

        /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_AutoCorrection_PRNDKnob/TRGC_PRND_AutoCorrection */
        /* Transition: '<S42>:2' */
        TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_Off;

        /* Entry 'AutoCorrect_Off': '<S42>:1' */
        VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_Off;
        VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkNone;
        VeTRGC_b_AutoCorrectionFlt = false;
    }
    else
    {
        switch (TRGR_ac_DW.is_c5_TRGR_ac)
        {
          case TRGR_ac_IN_AutoCorrect_Fault:
            VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_SNA;
            VeTRGC_b_AutoCorrectionFlt = true;

            /* During 'AutoCorrect_Fault': '<S42>:35' */
            if (VeTRGC_e_TransRngSt_Crnt == VeTRGC_e_DrvrRq)
            {
                /* Transition: '<S42>:36' */
                TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_Off;

                /* Entry 'AutoCorrect_Off': '<S42>:1' */
                VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_Off;
                VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkNone;
                VeTRGC_b_AutoCorrectionFlt = false;
            }
            break;

          case TRGR_ac_IN_AutoCorrect_Off:
            VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_Off;
            VeTRGC_b_AutoCorrectionFlt = false;

            /* During 'AutoCorrect_Off': '<S42>:1' */
            if (((VeTRGC_b_AutoCorrectEnbl) && (!VeTRGI_b_RackFlt)) &&
                    (KeTRGR_b_RotaryShifterEquipped))
            {
                /* Transition: '<S42>:6' */
                TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_Pending;

                /* Entry 'AutoCorrect_Pending': '<S42>:5' */
                VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_Pending;
                VeTRGC_t_APCMTmr = 0.0F;
            }
            break;

          case TRGR_ac_IN_AutoCorrect_On:
            VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_On;

            /* During 'AutoCorrect_On': '<S42>:7' */
            if (VeTRGC_e_TransRngSt_Crnt == VeTRGC_e_DrvrRq)
            {
                /* Transition: '<S42>:40' */
                /* Transition: '<S42>:42' */
                /* Transition: '<S42>:43' */
                /* Exit 'AutoCorrect_On': '<S42>:7' */
                VeTRGC_t_APCMTmr = 0.0F;
                TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_Off;

                /* Entry 'AutoCorrect_Off': '<S42>:1' */
                VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_Off;
                VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkNone;
                VeTRGC_b_AutoCorrectionFlt = false;
            }
            else if ((VeTRGC_e_TransRngSt_Crnt != VeTRGC_e_DrvrRq) &&
                     ((VeTRGI_b_RackFlt) || (VeTRGC_t_APCMTmr >=
                       KeTRGR_t_ON_APCMTmrThrshld)))
            {
                /* Transition: '<S42>:12' */
                /* Transition: '<S42>:14' */
                /* Transition: '<S42>:15' */
                /* Exit 'AutoCorrect_On': '<S42>:7' */
                VeTRGC_t_APCMTmr = 0.0F;
                TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_Fault;

                /* Entry 'AutoCorrect_Fault': '<S42>:35' */
                VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_SNA;
                VeTRGC_b_AutoCorrectionFlt = true;
            }
            else
            {
                VeTRGC_t_APCMTmr = KeTRGR_t_dT + VeTRGC_t_APCMTmr;
            }
            break;

          default:
            VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_Pending;

            /* During 'AutoCorrect_Pending': '<S42>:5' */
            if (((uint32)VeTRGI_e_AutoPosCorrMd) ==
                    CeTRGR_e_AutoPosCorrMd_Pending)
            {
                /* Transition: '<S42>:8' */
                /* Exit 'AutoCorrect_Pending': '<S42>:5' */
                TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_On;

                /* Entry 'AutoCorrect_On': '<S42>:7' */
                VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_On;

                /* Switch: '<S64>/Switch1' incorporates:
                 *  Constant: '<S55>/Constant'
                 *  Constant: '<S56>/Constant'
                 *  Constant: '<S57>/Constant'
                 *  Constant: '<S59>/Constant'
                 *  Constant: '<S61>/Constant'
                 *  Constant: '<S63>/Constant'
                 *  RelationalOperator: '<S41>/Comparison1'
                 *  RelationalOperator: '<S41>/Comparison2'
                 *  RelationalOperator: '<S41>/Comparison3'
                 *  RelationalOperator: '<S41>/Comparison4'
                 *  Switch: '<S64>/Switch2'
                 *  Switch: '<S64>/Switch3'
                 *  Switch: '<S64>/Switch4'
                 */
                if (((uint32)VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangePark)
                {
                    VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkPark;
                }
                else if (((uint32)VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeReverse)
                {
                    /* Switch: '<S64>/Switch2' incorporates:
                     *  Constant: '<S58>/Constant'
                     */
                    VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkReverse;
                }
                else if (((uint32)VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeNeutral)
                {
                    /* Switch: '<S64>/Switch3' incorporates:
                     *  Constant: '<S60>/Constant'
                     *  Switch: '<S64>/Switch2'
                     */
                    VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkNeutral;
                }
                else if (((uint32)VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeDrive)
                {
                    /* Switch: '<S64>/Switch4' incorporates:
                     *  Constant: '<S62>/Constant'
                     *  Switch: '<S64>/Switch2'
                     *  Switch: '<S64>/Switch3'
                     */
                    VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkDrive;
                }
                else
                {
                    VeTRGC_e_PRNDLBlink_AC = CeTRGR_e_PRNDBlinkNone;
                }

                /* End of Switch: '<S64>/Switch1' */
                VeTRGC_t_APCMTmr = 0.0F;
            }
            else if ((VeTRGI_b_RackFlt) || (VeTRGC_t_APCMTmr >=
                      KeTRGR_t_Pending_APCMTmrThrshld))
            {
                /* Transition: '<S42>:31' */
                /* Exit 'AutoCorrect_Pending': '<S42>:5' */
                VeTRGC_t_APCMTmr = 0.0F;
                TRGR_ac_DW.is_c5_TRGR_ac = TRGR_ac_IN_AutoCorrect_Fault;

                /* Entry 'AutoCorrect_Fault': '<S42>:35' */
                VeTRGC_e_AutoPosCorrMdReq = CeTRGR_e_AutoPosCorrMd_SNA;
                VeTRGC_b_AutoCorrectionFlt = true;
            }
            else
            {
                VeTRGC_t_APCMTmr = KeTRGR_t_dT + VeTRGC_t_APCMTmr;
            }
            break;
        }
    }

    /* End of Chart: '<S20>/TRGC_PRND_AutoCorrection' */

    /* DataTypeConversion: '<S37>/DataTypeConversion' */
    TRGR_ac_B.DataTypeConversion_o = VeTRGC_e_AutoPosCorrMdReq;

    /* RelationalOperator: '<S145>/Comparison6' incorporates:
     *  Constant: '<S292>/Constant'
     *  DataTypeConversion: '<S37>/DataTypeConversion'
     */
    VeTRGC_b_TXWarn_Warn12 = (((uint32)TRGR_ac_B.DataTypeConversion_o) ==
        CeTRGR_e_AutoPosCorrMd_On);

    /* Switch: '<S145>/Switch10' incorporates:
     *  DataStoreRead: '<S145>/Dsr_PID_AStrtEntry19'
     *  DataStoreRead: '<S145>/Dsr_PID_AStrtEntry20'
     *  DataStoreWrite: '<S145>/Dsw_PID_AStrtEntry10'
     *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S290>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S291>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_Warn12)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 512U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 512U);
    }

    /* End of Switch: '<S145>/Switch10' */

    /* Outputs for Atomic SubSystem: '<S33>/StopWatchResetEnabled1' */
    /* Switch: '<S871>/Switch' incorporates:
     *  Constant: '<S831>/Constant'
     *  Constant: '<S832>/Constant'
     *  Logic: '<S33>/Logical24'
     *  Logic: '<S33>/Logical25'
     *  RelationalOperator: '<S33>/Comparison20'
     *  RelationalOperator: '<S33>/Comparison22'
     */
    if ((((uint32)VeTRGC_e_PPawlCmnd) != CeTRGR_e_PPawlDisEngage) || (((uint32)
            VeTRGI_e_PPawlFdbck) == CePPCR_e_PPAWL_DISENGAGED))
    {
        /* Switch: '<S871>/Switch' incorporates:
         *  Constant: '<S871>/Constant Value2'
         */
        VeTRGR_t_PPawlDisEngCounter = 0.0F;
    }
    else
    {
        /* Switch: '<S871>/Switch' incorporates:
         *  Constant: '<S864>/Calib'
         *  Sum: '<S871>/Subtraction'
         *  Switch: '<S871>/Switch2'
         *  UnitDelay: '<S871>/Unit Delay'
         */
        VeTRGR_t_PPawlDisEngCounter = KeTRGR_t_dT + VeTRGR_t_PPawlDisEngCounter;
    }

    /* End of Switch: '<S871>/Switch' */
    /* End of Outputs for SubSystem: '<S33>/StopWatchResetEnabled1' */

    /* RelationalOperator: '<S33>/Comparison21' incorporates:
     *  Constant: '<S863>/Calib'
     */
    VeTRGR_b_PPawlNotDisEng = (VeTRGR_t_PPawlDisEngCounter >=
        KeTRGR_t_PPawlNotRespDbnc);

    /* Logic: '<S33>/Logical23' */
    VeTRGR_b_PPawlNoResponse = ((VeTRGR_b_PPawlNotEng) ||
        (VeTRGR_b_PPawlNotDisEng));

    /* Logic: '<S143>/Logical1' incorporates:
     *  Constant: '<S280>/Calib'
     *  Logic: '<S143>/Logical2'
     */
    VeTRGC_b_TXWarn2_Warn23 = ((VeTRGI_b_PPawl_TXFlt) ||
        ((VeTRGR_b_PPawlNoResponse) && (KeTRGR_b_PPawlNoResponse_Service_Trans)));

    /* Switch: '<S143>/Switch12' incorporates:
     *  DataStoreRead: '<S143>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S143>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S143>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S277>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S277>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S277>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S278>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn2_Warn23)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 2048U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 2048U);
    }

    /* End of Switch: '<S143>/Switch12' */

    /* Switch: '<S136>/Switch10' incorporates:
     *  Constant: '<S220>/Calib'
     *  DataStoreRead: '<S136>/Dsr_PID_AStrtEntry19'
     *  DataStoreRead: '<S136>/Dsr_PID_AStrtEntry20'
     *  DataStoreWrite: '<S136>/Dsw_PID_AStrtEntry10'
     *  Logic: '<S136>/Logical'
     *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S218>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S219>/FixPt Bitwise Operator1'
     */
    if ((KeTRGR_b_RotaryShifterEquipped_HMI) && (VeTRGC_b_AutoCorrectEnbl))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 8192U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 8192U);
    }

    /* End of Switch: '<S136>/Switch10' */

    /* Logic: '<S134>/Logical' incorporates:
     *  Constant: '<S203>/Calib'
     */
    VeTRGC_b_TXWarn_Trans_Recover_Mode = ((KeTRGR_b_TXWarn_Trans_Recover_Mode) &&
        (VeTRGC_b_LOC_D));

    /* Switch: '<S134>/Switch12' incorporates:
     *  DataStoreRead: '<S134>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S134>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S134>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S201>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S201>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S201>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S202>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_Trans_Recover_Mode)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 65536U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 65536U);
    }

    /* End of Switch: '<S134>/Switch12' */

    /* Logic: '<S127>/Logical' incorporates:
     *  Constant: '<S160>/Calib'
     */
    VeTRGC_b_TXWarn_CarWash_End = ((KeTRGR_b_TXWarn_CarWash_End) &&
        (VeTRGC_t_CarWash_SetWarn));

    /* Switch: '<S127>/Switch12' incorporates:
     *  DataStoreRead: '<S127>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S127>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S127>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S158>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S159>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_CarWash_End)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 131072U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 131072U);
    }

    /* End of Switch: '<S127>/Switch12' */

    /* RelationalOperator: '<S611>/Comparison1' incorporates:
     *  Constant: '<S621>/Constant'
     */
    rtb_Comparison18_p = (((uint32)VeTRGI_e_PMM_PowerMode) ==
                          CePMDR_e_PowerMode_Run);

    /* Outputs for Atomic SubSystem: '<S611>/EdgeRising' */
    /* Logic: '<S620>/AND' incorporates:
     *  Logic: '<S620>/OR1'
     *  UnitDelay: '<S620>/Unit Delay'
     */
    rtb_Comparison11_oj = (rtb_Comparison18_p &&
                           (!TRGR_ac_DW.UnitDelay_DSTATE_kg));

    /* Update for UnitDelay: '<S620>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_kg = rtb_Comparison18_p;

    /* End of Outputs for SubSystem: '<S611>/EdgeRising' */

    /* Outputs for Atomic SubSystem: '<S611>/SignalLatchOnWithReset' */
    /* Logic: '<S636>/OR1' incorporates:
     *  Constant: '<S626>/Constant'
     *  Constant: '<S627>/Constant'
     *  Constant: '<S628>/Constant'
     *  Logic: '<S611>/Logical9'
     *  Logic: '<S636>/NOT'
     *  Logic: '<S636>/OR'
     *  RelationalOperator: '<S611>/Comparison3'
     *  RelationalOperator: '<S611>/Comparison4'
     *  RelationalOperator: '<S611>/Comparison5'
     *  UnitDelay: '<S636>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_on = ((TRGR_ac_B.VeTRGR_b_AutoPark_DAI) ||
        (((((((uint32)VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeReverse) &&
            (((uint32)VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeNeutral)) &&
           (((uint32)VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangeDrive)) &&
          (!rtb_Comparison11_oj)) && (TRGR_ac_DW.UnitDelay_DSTATE_on)));

    /* End of Outputs for SubSystem: '<S611>/SignalLatchOnWithReset' */

    /* Switch: '<S611>/Switch1' incorporates:
     *  Constant: '<S632>/Calib'
     */
    if (KeTRGR_b_DAI_Latch)
    {
        /* Switch: '<S611>/Switch1' incorporates:
         *  UnitDelay: '<S636>/Unit Delay'
         */
        rtb_Comparison11_oj = TRGR_ac_DW.UnitDelay_DSTATE_on;
    }
    else
    {
        /* Switch: '<S611>/Switch1' */
        rtb_Comparison11_oj = TRGR_ac_B.VeTRGR_b_AutoPark_DAI;
    }

    /* End of Switch: '<S611>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S128>/EdgeFalling' */
    /* Logic: '<S163>/AND' incorporates:
     *  Logic: '<S163>/OR1'
     *  UnitDelay: '<S163>/Unit Delay'
     */
    rtb_Comparison18_p = ((!rtb_Comparison11_oj) &&
                          (TRGR_ac_DW.UnitDelay_DSTATE_j0));

    /* Update for UnitDelay: '<S163>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_j0 = rtb_Comparison11_oj;

    /* End of Outputs for SubSystem: '<S128>/EdgeFalling' */

    /* Logic: '<S128>/Logical' incorporates:
     *  Constant: '<S164>/Calib'
     */
    VeTRGC_b_TXWarn_DrvAwy_Alrt = ((KeTRGR_b_TXWarn_DAI_Alrt) &&
        rtb_Comparison18_p);

    /* Outputs for Atomic SubSystem: '<S128>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S167>/EdgeFalling1' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S168>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_jh;

    /* Update for UnitDelay: '<S168>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_jh = VeTRGC_b_TXWarn_DrvAwy_Alrt;

    /* Switch: '<S167>/Switch' incorporates:
     *  Constant: '<S165>/Calib'
     *  Constant: '<S166>/Calib'
     *  Constant: '<S167>/ConstantValue1'
     *  Logic: '<S168>/AND'
     *  Logic: '<S168>/OR1'
     *  MinMax: '<S167>/Minimum'
     *  Sum: '<S167>/Summation'
     *  UnitDelay: '<S167>/UnitDelay'
     */
    if ((!VeTRGC_b_TXWarn_DrvAwy_Alrt) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_et = KeTRGR_t_DrvAwy_Alrt_Tmr;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_et = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_et -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S167>/Switch' */
    /* End of Outputs for SubSystem: '<S167>/EdgeFalling1' */

    /* Switch: '<S128>/Switch12' incorporates:
     *  Constant: '<S167>/ConstantValue2'
     *  DataStoreRead: '<S128>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S128>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S128>/Dsw_PID_AStrtEntry12'
     *  Logic: '<S167>/AND'
     *  RelationalOperator: '<S167>/GreaterThan'
     *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S161>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S162>/FixPt Bitwise Operator1'
     *  UnitDelay: '<S167>/UnitDelay'
     */
    if ((VeTRGC_b_TXWarn_DrvAwy_Alrt) || (TRGR_ac_DW.UnitDelay_DSTATE_et > 0.0F))
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 262144U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 262144U);
    }

    /* End of Switch: '<S128>/Switch12' */
    /* End of Outputs for SubSystem: '<S128>/TurnOffDelayTime' */

    /* Logic: '<S129>/Logical' incorporates:
     *  Constant: '<S171>/Calib'
     */
    VeTRGC_b_TXWarn_DrvAwy_Inhib = ((KeTRGR_b_TXWarn_DAI_Inhib) &&
        rtb_Comparison11_oj);

    /* Switch: '<S129>/Switch12' incorporates:
     *  DataStoreRead: '<S129>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S129>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S129>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S169>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S170>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn_DrvAwy_Inhib)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 524288U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 524288U);
    }

    /* End of Switch: '<S129>/Switch12' */

    /* RelationalOperator: '<S27>/Comparison5' incorporates:
     *  Constant: '<S476>/Constant'
     */
    rtb_Comparison18_p = (((uint32)VeTRGI_e_BrakingMdReq) == CeDMIR_e_BtnPrsd);

    /* Outputs for Atomic SubSystem: '<S27>/EdgeRising1' */
    /* Logic: '<S472>/AND' incorporates:
     *  Logic: '<S472>/OR1'
     *  UnitDelay: '<S472>/Unit Delay'
     */
    rtb_Comparison11_oj = (rtb_Comparison18_p &&
                           (!TRGR_ac_DW.UnitDelay_DSTATE_db));

    /* Update for UnitDelay: '<S472>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_db = rtb_Comparison18_p;

    /* End of Outputs for SubSystem: '<S27>/EdgeRising1' */

    /* Logic: '<S478>/Logical7' incorporates:
     *  Constant: '<S481>/Constant'
     *  Constant: '<S482>/Constant'
     *  Constant: '<S483>/Constant'
     *  Constant: '<S484>/Calib'
     *  Constant: '<S485>/Calib'
     *  RelationalOperator: '<S478>/Comparison1'
     *  RelationalOperator: '<S478>/Comparison2'
     *  RelationalOperator: '<S478>/Comparison3'
     *  RelationalOperator: '<S478>/Comparison4'
     */
    VeTRGC_b_BrakingModeActive = (((((((rtb_Comparison11_oj && (((uint32)
        VeTRGI_e_Tcase_Stat) != CeFWDR_e_TfrCas4Low)) && (VeTRGI_v_VehicleSpdmph
        < KeTRGR_v_BrakingModeSpdThrshld)) && (((uint32)VeTRGC_e_DrvrRq) ==
        CeTRGR_e_TransRangeDrive)) && (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangeDrive)) && rtb_AND_p1) && rtb_AND_g5) &&
        (KeTRGR_b_EnableBrakingMode));

    /* Logic: '<S479>/Logical7' incorporates:
     *  Constant: '<S486>/Constant'
     *  Constant: '<S489>/Calib'
     *  Logic: '<S479>/Logical1'
     *  RelationalOperator: '<S479>/Comparison1'
     *  RelationalOperator: '<S479>/Comparison5'
     */
    VeTRGC_b_BrkngMdNotAvailable = (rtb_Comparison11_oj &&
        ((VeTRGI_v_VehicleSpdmph > KeTRGR_v_BrakingModeSpdThrshld) || (((uint32)
        VeTRGI_e_Tcase_Stat) == CeFWDR_e_TfrCas4Low)));

    /* Outputs for Atomic SubSystem: '<S479>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S490>/EdgeFalling' */
    /* UnitDelay: '<S619>/Unit Delay' incorporates:
     *  UnitDelay: '<S491>/Unit Delay'
     */
    rtb_Comparison18_p = TRGR_ac_DW.UnitDelay_DSTATE_p3;

    /* Update for UnitDelay: '<S491>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_p3 = VeTRGC_b_BrkngMdNotAvailable;

    /* Switch: '<S490>/Switch' incorporates:
     *  Constant: '<S487>/Calib'
     *  Constant: '<S488>/Calib'
     *  Constant: '<S490>/Constant Value1'
     *  Logic: '<S491>/AND'
     *  Logic: '<S491>/OR1'
     *  MinMax: '<S490>/Minimum'
     *  Sum: '<S490>/Summation'
     *  UnitDelay: '<S490>/Unit Delay'
     */
    if ((!VeTRGC_b_BrkngMdNotAvailable) && rtb_Comparison18_p)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_l = KeTRGR_t_BrakingMdBlinkingDly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_l = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_l -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S490>/Switch' */
    /* End of Outputs for SubSystem: '<S490>/EdgeFalling' */

    /* Logic: '<S490>/AND' incorporates:
     *  Constant: '<S490>/Constant Value2'
     *  RelationalOperator: '<S490>/Greater  Than'
     *  UnitDelay: '<S490>/Unit Delay'
     */
    VeTRGC_b_BrkngMdNotAvailableDly = ((VeTRGC_b_BrkngMdNotAvailable) ||
        (TRGR_ac_DW.UnitDelay_DSTATE_l > 0.0F));

    /* End of Outputs for SubSystem: '<S479>/TurnOffDelayTime' */

    /* Logic: '<S480>/Logical7' incorporates:
     *  Constant: '<S474>/Constant'
     *  Constant: '<S475>/Constant'
     *  Constant: '<S477>/Constant'
     *  Logic: '<S27>/Logical7'
     *  RelationalOperator: '<S27>/Comparison1'
     *  RelationalOperator: '<S27>/Comparison2'
     *  RelationalOperator: '<S27>/Comparison3'
     */
    VeTRGC_b_BrakingModeFaulted = (((((((uint32)VeTRGI_e_BrakingMdReq) ==
        CeDMIR_e_ShortGrnd) || (((uint32)VeTRGI_e_BrakingMdReq) ==
        CeDMIR_e_ShortPwr)) || (((uint32)VeTRGI_e_BrakingMdReq) ==
        CeDMIR_e_DrvMdBtn_SNA)) || (TRGR_ac_B.VeTRGR_b_TransmissionFailSts)) ||
        (VeTRGI_b_ShftSensFA));

    /* Chart: '<S27>/Engine_Braking_Management' */
    /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_Engine_Braking_Mode/Engine_Braking_Management */
    /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_Engine_Braking_Mode/Engine_Braking_Management */
    if (((uint32)TRGR_ac_DW.is_active_c3_TRGR_ac) == 0U)
    {
        /* Entry: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_Engine_Braking_Mode/Engine_Braking_Management */
        TRGR_ac_DW.is_active_c3_TRGR_ac = 1U;

        /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGC_VldtTransRngSt/TRGC_Engine_Braking_Mode/Engine_Braking_Management */
        /* Transition: '<S473>:2' */
        TRGR_ac_DW.is_c3_TRGR_ac = TRGR_ac_IN_Not_Active;

        /* Entry 'Not_Active': '<S473>:1' */
        TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts = CeTRGR_e_BrakingMode_Not_Active;
        TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts = CeTRGR_e_IndSts_OFF;
    }
    else
    {
        switch (TRGR_ac_DW.is_c3_TRGR_ac)
        {
          case TRGR_ac_IN_Active:
            TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts = CeTRGR_e_BrakingMode_Active;
            TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts =
                CeTRGR_e_IndSts_CONT;

            /* During 'Active': '<S473>:3' */
            /*   */
            if (((((uint32)VeTRGC_e_DrvrRq) != CeTRGR_e_TransRangeDrive) ||
                    rtb_Comparison11_oj) || (VeTRGC_b_BrakingModeFaulted))
            {
                /* Transition: '<S473>:8' */
                TRGR_ac_DW.is_c3_TRGR_ac = TRGR_ac_IN_Not_Active;

                /* Entry 'Not_Active': '<S473>:1' */
                TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts =
                    CeTRGR_e_BrakingMode_Not_Active;
                TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts =
                    CeTRGR_e_IndSts_OFF;
            }
            break;

          case TRGR_ac_IN_Not_Active:
            TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts =
                CeTRGR_e_BrakingMode_Not_Active;
            TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts = CeTRGR_e_IndSts_OFF;

            /* During 'Not_Active': '<S473>:1' */
            if (VeTRGC_b_BrakingModeActive)
            {
                /* Transition: '<S473>:6' */
                TRGR_ac_DW.is_c3_TRGR_ac = TRGR_ac_IN_Active;

                /* Entry 'Active': '<S473>:3' */
                TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts =
                    CeTRGR_e_BrakingMode_Active;
                TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts =
                    CeTRGR_e_IndSts_CONT;
            }
            else
            {
                if ((VeTRGC_b_BrkngMdNotAvailableDly) &&
                        (!VeTRGC_b_BrakingModeFaulted))
                {
                    /* Transition: '<S473>:5' */
                    TRGR_ac_DW.is_c3_TRGR_ac =
                        TRGR_ac_IN_Temporarily_Not_Available;

                    /* Entry 'Temporarily_Not_Available': '<S473>:4' */
                    TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts =
                        CeTRGR_e_IndSts_Blinking;
                }
            }
            break;

          default:
            TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts =
                CeTRGR_e_IndSts_Blinking;

            /* During 'Temporarily_Not_Available': '<S473>:4' */
            if (!VeTRGC_b_BrkngMdNotAvailableDly)
            {
                /* Transition: '<S473>:21' */
                TRGR_ac_DW.is_c3_TRGR_ac = TRGR_ac_IN_Not_Active;

                /* Entry 'Not_Active': '<S473>:1' */
                TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts =
                    CeTRGR_e_BrakingMode_Not_Active;
                TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts =
                    CeTRGR_e_IndSts_OFF;
            }
            break;
        }
    }

    /* End of Chart: '<S27>/Engine_Braking_Management' */

    /* Logic: '<S130>/Logical' incorporates:
     *  Constant: '<S174>/Constant'
     *  Constant: '<S175>/Constant'
     *  Constant: '<S176>/Calib'
     *  RelationalOperator: '<S130>/Comparison1'
     *  RelationalOperator: '<S130>/Comparison3'
     *  UnitDelay: '<S130>/UnitDelay'
     */
    rtb_Comparison18_p = (((((uint32)TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts) ==
                            CeTRGR_e_BrakingMode_Not_Active) && (((uint32)
        TRGR_ac_DW.UnitDelay_DSTATE_gb) == CeTRGR_e_BrakingMode_Active)) &&
                          (KeTRGR_b_Enbl_BrakingModeTransWarn));

    /* Outputs for Atomic SubSystem: '<S130>/TurnOffDelayTime' */
    /* Outputs for Atomic SubSystem: '<S179>/EdgeFalling' */
    /* Logic: '<S180>/AND' incorporates:
     *  Logic: '<S180>/OR1'
     *  UnitDelay: '<S180>/Unit Delay'
     */
    rtb_Comparison11_oj = ((!rtb_Comparison18_p) &&
                           (TRGR_ac_DW.UnitDelay_DSTATE_m2));

    /* Update for UnitDelay: '<S180>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_m2 = rtb_Comparison18_p;

    /* End of Outputs for SubSystem: '<S179>/EdgeFalling' */

    /* Switch: '<S179>/Switch' incorporates:
     *  Constant: '<S177>/Calib'
     *  Constant: '<S178>/Calib'
     *  Constant: '<S179>/Constant Value1'
     *  MinMax: '<S179>/Minimum'
     *  Sum: '<S179>/Summation'
     *  UnitDelay: '<S179>/Unit Delay'
     */
    if (rtb_Comparison11_oj)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_m = KeTRGR_t_LowModeDeactivated_Dly;
    }
    else
    {
        TRGR_ac_DW.UnitDelay_DSTATE_m = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_m -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S179>/Switch' */

    /* Logic: '<S179>/AND' incorporates:
     *  Constant: '<S179>/Constant Value2'
     *  RelationalOperator: '<S179>/Greater  Than'
     *  UnitDelay: '<S179>/Unit Delay'
     */
    VeTRGC_b_LowMdDeactived_HMI = (rtb_Comparison18_p ||
        (TRGR_ac_DW.UnitDelay_DSTATE_m > 0.0F));

    /* End of Outputs for SubSystem: '<S130>/TurnOffDelayTime' */

    /* Switch: '<S130>/Switch12' incorporates:
     *  DataStoreRead: '<S130>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S130>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S130>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S172>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S173>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_LowMdDeactived_HMI)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 4194304U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) |
            4194304U);
    }

    /* End of Switch: '<S130>/Switch12' */

    /* Logic: '<S131>/Logical' incorporates:
     *  Constant: '<S183>/Calib'
     */
    VeTRGC_b_LowMdFaulted_HMI = ((VeTRGC_b_BrakingModeFaulted) &&
        (KeTRGR_b_Enbl_BrakingModeTransWarn));

    /* Switch: '<S131>/Switch12' incorporates:
     *  DataStoreRead: '<S131>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S131>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S131>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S181>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S182>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_LowMdFaulted_HMI)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 2097152U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) |
            2097152U);
    }

    /* End of Switch: '<S131>/Switch12' */

    /* Logic: '<S132>/Logical' incorporates:
     *  Constant: '<S186>/Constant'
     *  Constant: '<S187>/Calib'
     *  RelationalOperator: '<S132>/Comparison2'
     */
    VeTRGC_b_LowMdNotAvail_HMI = ((((uint32)
        TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts) ==
        CeTRGR_e_IndSts_Blinking) && (KeTRGR_b_Enbl_BrakingModeTransWarn));

    /* Switch: '<S132>/Switch12' incorporates:
     *  DataStoreRead: '<S132>/Dsr_PID_AStrtEntry23'
     *  DataStoreRead: '<S132>/Dsr_PID_AStrtEntry24'
     *  DataStoreWrite: '<S132>/Dsw_PID_AStrtEntry12'
     *  S-Function (sfix_bitop): '<S184>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S184>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S184>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S185>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_LowMdNotAvail_HMI)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 1048576U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) |
            1048576U);
    }

    /* End of Switch: '<S132>/Switch12' */

    /* Switch: '<S103>/Switch1' incorporates:
     *  Constant: '<S102>/Constant'
     *  Constant: '<S92>/Constant'
     *  Constant: '<S95>/Constant'
     *  Constant: '<S97>/Constant'
     *  Constant: '<S99>/Constant'
     *  RelationalOperator: '<S322>/Comparison6'
     *  RelationalOperator: '<S91>/Comparison1'
     *  RelationalOperator: '<S91>/Comparison2'
     *  RelationalOperator: '<S91>/Comparison3'
     *  RelationalOperator: '<S91>/Comparison4'
     *  RelationalOperator: '<S91>/Comparison5'
     *  Switch: '<S103>/Switch2'
     *  Switch: '<S103>/Switch3'
     *  Switch: '<S103>/Switch4'
     *  Switch: '<S103>/Switch5'
     *  Switch: '<S25>/Switch1'
     */
    if (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangePark)
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S93>/Constant'
         */
        VeTRGC_e_BlinkDrvrRq = CeTRGR_e_PRNDBlinkPark;
    }
    else if (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeReverse)
    {
        /* Switch: '<S103>/Switch2' incorporates:
         *  Constant: '<S96>/Constant'
         *  Switch: '<S103>/Switch1'
         */
        VeTRGC_e_BlinkDrvrRq = CeTRGR_e_PRNDBlinkReverse;
    }
    else if (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeNeutral)
    {
        /* Switch: '<S103>/Switch3' incorporates:
         *  Constant: '<S98>/Constant'
         *  Switch: '<S103>/Switch1'
         *  Switch: '<S103>/Switch2'
         */
        VeTRGC_e_BlinkDrvrRq = CeTRGR_e_PRNDBlinkNeutral;
    }
    else if (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeDrive)
    {
        /* Switch: '<S103>/Switch4' incorporates:
         *  Constant: '<S100>/Constant'
         *  Switch: '<S103>/Switch1'
         *  Switch: '<S103>/Switch2'
         *  Switch: '<S103>/Switch3'
         */
        VeTRGC_e_BlinkDrvrRq = CeTRGR_e_PRNDBlinkDrive;
    }
    else if (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeDrive1)
    {
        /* Switch: '<S103>/Switch5' incorporates:
         *  Constant: '<S94>/Constant'
         *  Switch: '<S103>/Switch1'
         *  Switch: '<S103>/Switch2'
         *  Switch: '<S103>/Switch3'
         *  Switch: '<S103>/Switch4'
         */
        VeTRGC_e_BlinkDrvrRq = CeTRGR_e_PRNDBlinkLow;
    }
    else
    {
        /* Switch: '<S103>/Switch1' incorporates:
         *  Constant: '<S101>/Constant'
         *  Switch: '<S103>/Switch2'
         *  Switch: '<S103>/Switch3'
         *  Switch: '<S103>/Switch4'
         *  Switch: '<S103>/Switch5'
         */
        VeTRGC_e_BlinkDrvrRq = CeTRGR_e_PRNDBlinkNone;
    }

    /* End of Switch: '<S103>/Switch1' */

    /* Switch: '<S21>/Switch1' incorporates:
     *  Constant: '<S75>/Constant'
     *  Constant: '<S82>/Calib'
     *  Logic: '<S21>/Logical20'
     *  RelationalOperator: '<S21>/Comparison13'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     */
    if (((VeTRGC_b_LOC_D) && (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) ==
                              CeTRGR_e_TransRangeReverse)) &&
            (KeTRGR_b_DsblRBlink_LOC_D))
    {
        /* RelationalOperator: '<S21>/Comparison5' incorporates:
         *  Switch: '<S21>/Switch1'
         */
        VeTRGC_e_RngSt_WithLOC_D = VeTRGC_e_TransRngSt_Crnt;
    }
    else
    {
        /* RelationalOperator: '<S21>/Comparison5' incorporates:
         *  Switch: '<S21>/Switch1'
         */
        VeTRGC_e_RngSt_WithLOC_D = VeTRGC_e_DrvReqRaw_WithSNA;
    }

    /* End of Switch: '<S21>/Switch1' */

    /* RelationalOperator: '<S21>/Comparison5' */
    VeTRGC_b_RNgSt_WithLOC = (VeTRGC_e_RngSt_WithLOC_D !=
        VeTRGC_e_TransRngSt_Crnt);

    /* Logic: '<S21>/Logical10' incorporates:
     *  Constant: '<S76>/Constant'
     *  Constant: '<S83>/Calib'
     *  RelationalOperator: '<S21>/Comparison24'
     */
    VeTRGC_b_WEDOpenFltd_Blink = (((((uint32)VeTRGC_e_VldtdTransRngStateERS) ==
        CeTRGR_e_TransRangePark) && (VeTRGI_b_WEDOpenFaulted)) &&
        (KeTRGR_b_EnblBlink_WEDOpenInP));

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S68>/Constant'
     *  Constant: '<S69>/Constant'
     *  Logic: '<S21>/Logical'
     *  Logic: '<S21>/Logical1'
     *  Logic: '<S21>/Logical3'
     *  RelationalOperator: '<S21>/Comparison3'
     *  RelationalOperator: '<S21>/Comparison4'
     */
    rtb_Comparison18_p = ((((VeTRGI_b_PPawlPosSnsrFlt) && (((uint32)
        VeTRGC_e_VldtdTransRngStateERS) == CeTRGR_e_TransRangePark)) ||
                           (((VeTRGI_b_PPawlPosSnsrFlt) && (((uint32)
        VeTRGC_e_VldtdTransRngStateERS) == CeTRGR_e_TransRangeNeutral)) &&
                            rtb_OR1_ct)) || (VeTRGC_b_WEDOpenFltd_Blink));

    /* Logic: '<S21>/Logical4' */
    VeTRGC_b_BlinkEnblCondition = ((VeTRGC_b_RNgSt_WithLOC) ||
        rtb_Comparison18_p);

    /* Logic: '<S21>/Logical5' incorporates:
     *  Logic: '<S21>/Logical6'
     *  RelationalOperator: '<S21>/Comparison1'
     */
    VeTRGC_b_BlinkRstCondition = ((!rtb_Comparison18_p) &&
        (VeTRGC_e_RngSt_WithLOC_D == VeTRGC_e_VldtdTransRngStateERS));

    /* Switch: '<S21>/Switch' */
    if (rtb_Comparison18_p)
    {
        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S85>/Calib'
         */
        VeTRGC_t_BlinkCal_Time = KeTRGR_t_Blink_PosSnsrFlt;
    }
    else
    {
        /* Switch: '<S21>/Switch' incorporates:
         *  Constant: '<S79>/Calib'
         *  Constant: '<S80>/Calib'
         *  Constant: '<S81>/Calib'
         *  DataTypeConversion: '<S21>/DataTypeConversion1'
         *  Selector: '<S21>/Selector'
         *  Selector: '<S21>/Selector1'
         *  Selector: '<S21>/Selector2'
         *  Switch: '<S25>/Switch1'
         */
        VeTRGC_t_BlinkCal_Time = KaTRGR_t_PRNDLBlinkTime[(6 *
            KaTRGR_e_BlinkVldtdTransRngSt_Map[(VeTRGC_e_VldtdTransRngStateERS)])
            + KaTRGR_e_BlinkDrvrReq_Map[(VeTRGC_e_DrvReqRaw_WithSNA)]];
    }

    /* End of Switch: '<S21>/Switch' */

    /* Outputs for Atomic SubSystem: '<S21>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S90>/Switch1' incorporates:
     *  Switch: '<S90>/Switch2'
     */
    if (VeTRGC_b_BlinkRstCondition)
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Constant: '<S90>/ConstantValue2'
         */
        rtb_Subtraction2 = 0.0F;
    }
    else if (VeTRGC_b_BlinkEnblCondition)
    {
        /* Switch: '<S90>/Switch2' incorporates:
         *  Constant: '<S86>/Calib'
         *  Sum: '<S90>/Subtraction'
         *  Sum: '<S90>/Subtraction2'
         *  UnitDelay: '<S90>/UnitDelay'
         */
        rtb_Subtraction2 = KeTRGR_t_dT + TRGR_ac_DW.UnitDelay_DSTATE_bt;
    }
    else
    {
        /* Sum: '<S90>/Subtraction2' incorporates:
         *  Switch: '<S90>/Switch2'
         *  UnitDelay: '<S90>/UnitDelay'
         */
        rtb_Subtraction2 = TRGR_ac_DW.UnitDelay_DSTATE_bt;
    }

    /* End of Switch: '<S90>/Switch1' */

    /* Switch: '<S90>/Switch' incorporates:
     *  Constant: '<S90>/ConstantValue3'
     *  RelationalOperator: '<S90>/Comparison1'
     *  UnitDelay: '<S90>/UnitDelay1'
     */
    if (rtb_Subtraction2 < 5.0F)
    {
        TRGR_ac_DW.UnitDelay1_DSTATE_f = rtb_Subtraction2;
    }

    /* End of Switch: '<S90>/Switch' */

    /* MinMax: '<S90>/MinMax' incorporates:
     *  Constant: '<S90>/ConstantValue1'
     *  Sum: '<S90>/Subtraction2'
     *  UnitDelay: '<S90>/UnitDelay1'
     */
    VeTRGC_t_PRNDLBlinkTmr = fminf(TRGR_ac_DW.UnitDelay1_DSTATE_f,
        VeTRGC_t_BlinkCal_Time + 0.001F);

    /* Update for UnitDelay: '<S90>/UnitDelay' incorporates:
     *  UnitDelay: '<S90>/UnitDelay1'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_bt = TRGR_ac_DW.UnitDelay1_DSTATE_f;

    /* End of Outputs for SubSystem: '<S21>/Stop_Watch_Reset_Enabled' */

    /* Switch: '<S78>/Switch1' incorporates:
     *  RelationalOperator: '<S21>/Comparison2'
     */
    if (VeTRGC_t_PRNDLBlinkTmr > VeTRGC_t_BlinkCal_Time)
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Switch: '<S103>/Switch1'
         */
        TRGR_ac_B.SignalConversion = VeTRGC_e_BlinkDrvrRq;
    }
    else
    {
        /* Switch: '<S78>/Switch1' incorporates:
         *  Constant: '<S77>/Constant'
         */
        TRGR_ac_B.SignalConversion = CeTRGR_e_PRNDBlinkNone;
    }

    /* End of Switch: '<S78>/Switch1' */

    /* Logic: '<S21>/Logical11' incorporates:
     *  Constant: '<S70>/Constant'
     *  Constant: '<S71>/Constant'
     *  Constant: '<S84>/Calib'
     *  Logic: '<S21>/Logical9'
     *  RelationalOperator: '<S21>/Comparison6'
     *  RelationalOperator: '<S21>/Comparison7'
     *  RelationalOperator: '<S21>/Comparison9'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S14>/UnitDelay1'
     */
    VeTRGC_b_ParkReq_DsblDrvAllwd = (((((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangePark) || ((((uint32)VeTRGC_e_DrvReqRaw_WithSNA) ==
        CeTRGR_e_TransRangePark) && (rtb_Switch_d3 <
        KeTRGR_n_TOSR_Spd_ParkThreshold))) || (TRGR_ac_DW.UnitDelay1_DSTATE_b5));

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising' */
    /* Logic: '<S66>/OR1' incorporates:
     *  UnitDelay: '<S66>/Unit Delay'
     */
    rtb_Comparison18_p = !TRGR_ac_DW.UnitDelay_DSTATE_ou;

    /* Update for UnitDelay: '<S66>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_ou = VeTRGI_b_PPawlPosSnsrFlt;

    /* End of Outputs for SubSystem: '<S21>/EdgeRising' */

    /* Logic: '<S21>/Logical16' incorporates:
     *  Logic: '<S21>/Logical19'
     */
    rtb_OR1_ct = !VeTRGI_b_PPawlPosSnsrFlt;

    /* Logic: '<S21>/Logical17' incorporates:
     *  Constant: '<S74>/Constant'
     *  Logic: '<S21>/Logical12'
     *  Logic: '<S21>/Logical16'
     *  Logic: '<S21>/Logical18'
     *  RelationalOperator: '<S21>/Comparison12'
     */
    VeTRGC_b_Flt_ShiftingOutOfP_Rst = (((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangePark) && rtb_OR1_ct) || ((VeTRGI_b_ResetDiag) &&
        rtb_OR1_ct));

    /* Outputs for Atomic SubSystem: '<S21>/SignalLatchOnWithReset' */
    /* Outputs for Atomic SubSystem: '<S21>/SignalLatchOnWithReset2' */
    /* Logic: '<S88>/NOT' incorporates:
     *  Logic: '<S87>/NOT'
     */
    rtb_OR1_ct = !VeTRGC_b_Flt_ShiftingOutOfP_Rst;

    /* End of Outputs for SubSystem: '<S21>/SignalLatchOnWithReset' */

    /* Outputs for Atomic SubSystem: '<S21>/EdgeRising' */
    /* Logic: '<S88>/OR1' incorporates:
     *  Logic: '<S66>/AND'
     *  Logic: '<S88>/NOT'
     *  Logic: '<S88>/OR'
     *  UnitDelay: '<S88>/Unit Delay'
     */
    VeTRGC_b_PosSnsrFltTrigLtch = (((VeTRGI_b_PPawlPosSnsrFlt) &&
        rtb_Comparison18_p) || (rtb_OR1_ct && (TRGR_ac_DW.UnitDelay_DSTATE_cv)));

    /* End of Outputs for SubSystem: '<S21>/EdgeRising' */

    /* Update for UnitDelay: '<S88>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_cv = VeTRGC_b_PosSnsrFltTrigLtch;

    /* End of Outputs for SubSystem: '<S21>/SignalLatchOnWithReset2' */

    /* Logic: '<S21>/Logical15' incorporates:
     *  Constant: '<S73>/Constant'
     *  RelationalOperator: '<S21>/Comparison11'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     *  UnitDelay: '<S21>/UnitDelay'
     */
    VeTRGC_b_Flt_ShiftingOutOfP = ((TRGR_ac_DW.UnitDelay_DSTATE_da) && (((uint32)
        VeTRGC_e_DrvReqRaw_WithSNA) != CeTRGR_e_TransRangePark));

    /* Outputs for Atomic SubSystem: '<S21>/SignalLatchOnWithReset' */
    /* Logic: '<S87>/OR1' incorporates:
     *  Logic: '<S87>/OR'
     *  UnitDelay: '<S87>/Unit Delay'
     */
    VeTRGC_b_Flt_ShiftingOutOfPLtch = ((VeTRGC_b_Flt_ShiftingOutOfP) ||
        (rtb_OR1_ct && (TRGR_ac_DW.UnitDelay_DSTATE_paa)));

    /* Update for UnitDelay: '<S87>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_paa = VeTRGC_b_Flt_ShiftingOutOfPLtch;

    /* End of Outputs for SubSystem: '<S21>/SignalLatchOnWithReset' */

    /* Logic: '<S21>/Logical13' */
    VeTRGC_b_RNDLReq_DsblDrvAllwd = ((VeTRGC_b_PosSnsrFltTrigLtch) &&
        (VeTRGC_b_Flt_ShiftingOutOfPLtch));

    /* Outputs for Atomic SubSystem: '<S21>/SignalLatchOnWithReset3' */
    /* Logic: '<S89>/OR1' incorporates:
     *  Logic: '<S21>/Logical14'
     *  Logic: '<S21>/Logical7'
     *  Logic: '<S21>/Logical8'
     *  Logic: '<S89>/OR'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_bn = ((((VeTRGI_b_PPawlPosSnsrFlt) &&
        (VeTRGC_b_ParkReq_DsblDrvAllwd)) || (VeTRGC_b_RNDLReq_DsblDrvAllwd)) ||
        ((VeTRGI_b_PPawlPosSnsrFlt) && (TRGR_ac_DW.UnitDelay_DSTATE_bn)));

    /* End of Outputs for SubSystem: '<S21>/SignalLatchOnWithReset3' */

    /* Outport: '<Root>/VeTRGR_b_DisableDrvAllwd' incorporates:
     *  SignalConversion: '<S14>/Signal Conversion1'
     *  UnitDelay: '<S89>/Unit Delay'
     */
    (void)Rte_Write_VeTRGR_b_DisableDrvAllwd_Value
        (TRGR_ac_DW.UnitDelay_DSTATE_bn);

    /* Outport: '<Root>/VeTRGR_e_PPawlCmnd' incorporates:
     *  SignalConversion: '<S14>/Signal Conversion2'
     */
    (void)Rte_Write_VeTRGR_e_PPawlCmnd_Value(VeTRGC_e_PPawlCmnd);

    /* Outport: '<Root>/VeTRGR_e_EPB_Hold_Req' incorporates:
     *  SignalConversion: '<S14>/Signal Conversion3'
     *  Switch: '<S33>/Switch1'
     */
    (void)Rte_Write_VeTRGR_e_EPB_Hold_Req_Value(rtb_Switch1_id);

    /* Logic: '<S35>/AND' */
    VeTRGC_b_APCMFlt = VeTRGC_b_AutoCorrectionFlt;

    /* DataTypeConversion: '<S38>/DataTypeConversion' */
    VeTRGC_e_AC_PRNDLBlink = VeTRGC_e_PRNDLBlink_AC;

    /* Gain: '<S39>/Gain' */
    VeTRGC_t_APCMTimer = VeTRGC_t_APCMTmr;

    /* RelationalOperator: '<S21>/Comparison10' incorporates:
     *  Constant: '<S72>/Constant'
     *  UnitDelay: '<S21>/UnitDelay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_da = (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangePark);

    /* Outputs for Atomic SubSystem: '<S14>/TRGC_CanMapping' */
    TRGR_ac_TRGC_CanMapping();

    /* End of Outputs for SubSystem: '<S14>/TRGC_CanMapping' */

    /* Switch: '<S316>/Switch1' incorporates:
     *  Constant: '<S313>/Constant'
     *  RelationalOperator: '<S25>/Comparison3'
     *  RelationalOperator: '<S322>/Comparison6'
     *  Switch: '<S25>/Switch1'
     */
    if (((uint32)VeTRGC_e_DrvReqRaw_WithSNA) == CeTRGR_e_TransRangeIllegal)
    {
        /* Switch: '<S316>/Switch1' */
        VeTRGC_e_PRNDStat = TRGR_ac_DW.UnitDelay2_DSTATE;
    }
    else
    {
        /* Switch: '<S316>/Switch1' */
        VeTRGC_e_PRNDStat = VeTRGC_e_DrvReqRaw_WithSNA;
    }

    /* End of Switch: '<S316>/Switch1' */

    /* Logic: '<S28>/Logical2' */
    VeTRGC_b_ShifterLocked = ((VeTRGC_b_ShftrLockP) || (VeTRGC_b_ShiftLockN));

    /* RelationalOperator: '<S500>/Comparison16' incorporates:
     *  Constant: '<S531>/Constant'
     *  UnitDelay: '<S500>/UnitDelay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_cw = (((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangePark);

    /* Switch: '<S540>/Switch1' incorporates:
     *  Constant: '<S547>/Calib'
     */
    if (KeTRGR_b_ShftProxi)
    {
        /* Logic: '<S545>/AND' incorporates:
         *  UnitDelay: '<S14>/UnitDelay4'
         */
        TRGR_ac_DW.UnitDelay4_DSTATE = VeTRGC_b_VehNotRdy_HighSpd_Ltch;
    }
    else
    {
        /* Logic: '<S545>/AND' incorporates:
         *  UnitDelay: '<S14>/UnitDelay4'
         */
        TRGR_ac_DW.UnitDelay4_DSTATE = VeTRGC_b_OvrdRq;
    }

    /* End of Switch: '<S540>/Switch1' */

    /* Logic: '<S541>/Logical1' incorporates:
     *  Logic: '<S541>/Logical2'
     */
    rtb_OR1_ct = !VeTRGI_b_PPawlFlt_InhibitMtr;

    /* Logic: '<S541>/Logical' incorporates:
     *  Constant: '<S604>/Constant'
     *  Logic: '<S541>/Logical1'
     *  RelationalOperator: '<S541>/Comparison1'
     */
    VeTRGC_b_OvrdToPark = (((VeTRGC_b_OvrdToParkDbnc) && rtb_OR1_ct) &&
                           (((uint32)VeTRGI_e_PPawlReq) !=
                            CePPCR_e_PPAWL_STUCK_DISENGAGED));

    /* Outputs for Atomic SubSystem: '<S541>/SignalLatchOnWithReset1' */
    /* Logic: '<S609>/OR1' incorporates:
     *  Constant: '<S602>/Constant'
     *  Constant: '<S603>/Constant'
     *  Constant: '<S605>/Constant'
     *  Logic: '<S541>/Logical2'
     *  Logic: '<S541>/Logical3'
     *  Logic: '<S609>/NOT'
     *  Logic: '<S609>/OR'
     *  RelationalOperator: '<S541>/Comparison3'
     *  RelationalOperator: '<S541>/Comparison4'
     *  RelationalOperator: '<S541>/Comparison8'
     *  UnitDelay: '<S609>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_kr = ((VeTRGC_b_OvrdToPark) || (((((((((uint32)
        VeTRGC_e_DrvrRq) != CeTRGR_e_TransRangePark) || (((uint32)
        VeTRGC_e_TransRngSt_Crnt) != CeTRGR_e_TransRangePark)) && (((uint32)
        VeTRGI_e_PPawlReq) != CePPCR_e_PPAWL_STUCK_DISENGAGED)) &&
        (!VeTRGI_b_RackFlt)) && (!VeTRGC_b_APCMFlt)) && rtb_OR1_ct) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_kr)));

    /* End of Outputs for SubSystem: '<S541>/SignalLatchOnWithReset1' */

    /* Logic: '<S600>/AND' incorporates:
     *  UnitDelay: '<S14>/UnitDelay1'
     *  UnitDelay: '<S609>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay1_DSTATE_b5 = TRGR_ac_DW.UnitDelay_DSTATE_kr;

    /* Outputs for Atomic SubSystem: '<S611>/EdgeFalling' */
    /* Logic: '<S619>/AND' incorporates:
     *  UnitDelay: '<S611>/UnitDelay1'
     *  UnitDelay: '<S619>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay1_DSTATE_lo = (rtb_Logical1_hh &&
        (TRGR_ac_DW.UnitDelay_DSTATE_nv));

    /* Update for UnitDelay: '<S619>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_nv = TRGR_ac_B.VeTRGR_b_AutoPark_DAI;

    /* End of Outputs for SubSystem: '<S611>/EdgeFalling' */

    /* Logic: '<S542>/Logical1' incorporates:
     *  Constant: '<S673>/Constant'
     *  RelationalOperator: '<S542>/Comparison1'
     */
    TRGR_ac_B.VeTRGR_b_Reject_R = ((VeTRGC_b_RejectRq) && (((uint32)
        VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeReverse));

    /* Logic: '<S542>/Logical2' incorporates:
     *  Constant: '<S674>/Constant'
     *  RelationalOperator: '<S542>/Comparison5'
     */
    TRGR_ac_B.VeTRGR_b_Reject_D = ((VeTRGC_b_RejectRq) && (((uint32)
        VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangeDrive));

    /* Switch: '<S30>/Switch1' incorporates:
     *  Constant: '<S687>/Calib'
     */
    if (KeTRGR_b_CrankEnabledRotary)
    {
        /* UnitDelay: '<S876>/Unit Delay' incorporates:
         *  Constant: '<S678>/Constant'
         *  Constant: '<S684>/Constant'
         *  Constant: '<S685>/Constant'
         *  Constant: '<S686>/Constant'
         *  Logic: '<S30>/Logical4'
         *  Logic: '<S30>/Logical5'
         *  Logic: '<S30>/Logical6'
         *  RelationalOperator: '<S30>/Comparison6'
         *  RelationalOperator: '<S30>/Comparison7'
         *  RelationalOperator: '<S30>/Comparison8'
         *  RelationalOperator: '<S30>/Comparison9'
         */
        rtb_AND12 = (((((uint32)VeTRGC_e_DrvrRq) == CeTRGR_e_TransRangePark) &&
                      (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
                       CeTRGR_e_TransRangePark)) || ((((uint32)VeTRGC_e_DrvrRq) ==
                       CeTRGR_e_TransRangeNeutral) && (((uint32)
                        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeNeutral)));
    }

    /* End of Switch: '<S30>/Switch1' */

    /* Logic: '<S676>/AND' */
    TRGR_ac_B.AND_e5 = rtb_AND12;

    /* Outputs for Atomic SubSystem: '<S688>/SignalLatchOnWithReset' */
    /* Logic: '<S706>/OR1' incorporates:
     *  Constant: '<S698>/Constant'
     *  Constant: '<S700>/Constant'
     *  Constant: '<S701>/Constant'
     *  Logic: '<S688>/Logical1'
     *  Logic: '<S706>/NOT'
     *  Logic: '<S706>/OR'
     *  Merge: '<S688>/Merge'
     *  RelationalOperator: '<S688>/Comparison6'
     *  RelationalOperator: '<S688>/Comparison7'
     *  RelationalOperator: '<S688>/Comparison8'
     *  UnitDelay: '<S706>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_f5 = ((((uint32)VeTRGC_e_ArbPRNDRequest) ==
        CeTRGR_e_TransRangePark) || (((((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangePark) && (((uint32)VeTRGC_e_TransRngSt_Crnt) !=
        CeTRGR_e_TransRangeIllegal)) && (TRGR_ac_DW.UnitDelay_DSTATE_f5)));

    /* End of Outputs for SubSystem: '<S688>/SignalLatchOnWithReset' */

    /* Switch: '<S702>/Switch1' incorporates:
     *  UnitDelay: '<S706>/Unit Delay'
     */
    if (TRGR_ac_DW.UnitDelay_DSTATE_f5)
    {
        /* DataTypeConversion: '<S692>/DataTypeConversion' incorporates:
         *  Constant: '<S699>/Constant'
         */
        TRGR_ac_B.DataTypeConversion_m = CeTRGR_e_TransRangePark;
    }
    else
    {
        /* DataTypeConversion: '<S692>/DataTypeConversion' incorporates:
         *  Merge: '<S688>/Merge'
         *  RelationalOperator: '<S688>/Comparison6'
         */
        TRGR_ac_B.DataTypeConversion_m = VeTRGC_e_ArbPRNDRequest;
    }

    /* End of Switch: '<S702>/Switch1' */

    /* DataTypeConversion: '<S781>/DataTypeConversion' */
    TRGR_ac_B.DataTypeConversion_b = VeTRGR_e_PRND_St;

    /* Outport: '<Root>/VeTRGR_b_HCPReset' incorporates:
     *  Gain: '<S787>/Gain'
     */
    (void)Rte_Write_VeTRGR_b_HCPReset_Value(VeTRGC_b_HCP_Reset);

    /* Logic: '<S32>/Logical1' incorporates:
     *  Logic: '<S34>/Logical1'
     */
    rtb_OR1_ct = !VeTRGI_b_PPawl_TXFlt;

    /* Logic: '<S32>/Logical7' incorporates:
     *  Constant: '<S798>/Constant'
     *  Constant: '<S799>/Constant'
     *  Constant: '<S800>/Calib'
     *  Logic: '<S32>/Logical1'
     *  Logic: '<S32>/Logical3'
     *  Logic: '<S32>/Logical4'
     *  RelationalOperator: '<S32>/Comparison1'
     *  RelationalOperator: '<S32>/Comparison4'
     *  Switch: '<S15>/Switch38'
     */
    VeTRGC_b_SelectSpeedModeActive = (((((((((uint32)VeTRGI_e_SelectSpdSts) ==
        CePLTR_e_SelectSpdMode) && (!VeTRGI_b_SelectSpdSts_FA)) && (((uint32)
        VeTRGC_e_TransRngSt_Crnt) == CeTRGR_e_TransRangeDrive)) && rtb_OR1_ct) &&
        rtb_AND_p1) && rtb_AND_g5) && (KeTRGR_b_EnableSelectSpdSts));

    /* Outputs for Enabled SubSystem: '<S32>/TRGC_Speed_Control_Enabled' incorporates:
     *  EnablePort: '<S801>/Enable'
     */
    if (VeTRGC_b_SelectSpeedModeActive)
    {
        if (!TRGR_ac_DW.TRGC_Speed_Control_Enabled_MODE)
        {
            /* InitializeConditions for UnitDelay: '<S801>/Unit Delay' */
            TRGR_ac_DW.UnitDelay_DSTATE_kx = 1;

            /* SystemReset for Atomic SubSystem: '<S801>/EdgeRising3' */
            /* InitializeConditions for UnitDelay: '<S805>/Unit Delay' */
            TRGR_ac_DW.UnitDelay_DSTATE_gw = false;

            /* End of SystemReset for SubSystem: '<S801>/EdgeRising3' */

            /* SystemReset for Atomic SubSystem: '<S801>/EdgeRising1' */
            /* InitializeConditions for UnitDelay: '<S803>/Unit Delay' */
            TRGR_ac_DW.UnitDelay_DSTATE_af = false;

            /* End of SystemReset for SubSystem: '<S801>/EdgeRising1' */

            /* SystemReset for Atomic SubSystem: '<S801>/EdgeRising4' */
            /* InitializeConditions for UnitDelay: '<S806>/Unit Delay' */
            TRGR_ac_DW.UnitDelay_DSTATE_gz = false;

            /* End of SystemReset for SubSystem: '<S801>/EdgeRising4' */

            /* SystemReset for Atomic SubSystem: '<S801>/EdgeRising2' */
            /* InitializeConditions for UnitDelay: '<S804>/Unit Delay' */
            TRGR_ac_DW.UnitDelay_DSTATE_om = false;

            /* End of SystemReset for SubSystem: '<S801>/EdgeRising2' */
            TRGR_ac_DW.TRGC_Speed_Control_Enabled_MODE = true;
        }

        /* RelationalOperator: '<S801>/Comparison4' incorporates:
         *  Constant: '<S807>/Constant'
         */
        rtb_Logical1_hh = (((uint32)tmpRead) == CeTRGR_e_ERSBttn_Minus);

        /* RelationalOperator: '<S801>/Comparison5' incorporates:
         *  Constant: '<S808>/Constant'
         */
        rtb_AND_g5 = (((uint32)tmpRead) == CeTRGR_e_ERSBttn_Plus);

        /* Outputs for Atomic SubSystem: '<S801>/EdgeRising3' */
        /* Logic: '<S805>/AND' incorporates:
         *  Logic: '<S805>/OR1'
         *  UnitDelay: '<S805>/Unit Delay'
         */
        rtb_AND_p1 = (rtb_AND_g5 && (!TRGR_ac_DW.UnitDelay_DSTATE_gw));

        /* Update for UnitDelay: '<S805>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_gw = rtb_AND_g5;

        /* End of Outputs for SubSystem: '<S801>/EdgeRising3' */

        /* Outputs for Atomic SubSystem: '<S801>/EdgeRising1' */
        /* Logic: '<S803>/AND' incorporates:
         *  Logic: '<S803>/OR1'
         *  UnitDelay: '<S803>/Unit Delay'
         */
        rtb_AND_g5 = ((VeTRGI_b_AccelSts) && (!TRGR_ac_DW.UnitDelay_DSTATE_af));

        /* Update for UnitDelay: '<S803>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_af = VeTRGI_b_AccelSts;

        /* End of Outputs for SubSystem: '<S801>/EdgeRising1' */

        /* Outputs for Atomic SubSystem: '<S801>/EdgeRising4' */
        /* Logic: '<S806>/OR1' incorporates:
         *  UnitDelay: '<S806>/Unit Delay'
         */
        rtb_AND12 = !TRGR_ac_DW.UnitDelay_DSTATE_gz;

        /* Update for UnitDelay: '<S806>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_gz = rtb_Logical1_hh;

        /* End of Outputs for SubSystem: '<S801>/EdgeRising4' */

        /* Outputs for Atomic SubSystem: '<S801>/EdgeRising2' */
        /* Logic: '<S804>/OR1' incorporates:
         *  UnitDelay: '<S804>/Unit Delay'
         */
        rtb_Comparison18_p = !TRGR_ac_DW.UnitDelay_DSTATE_om;

        /* Update for UnitDelay: '<S804>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_om = VeTRGI_b_DecelSts;

        /* End of Outputs for SubSystem: '<S801>/EdgeRising2' */

        /* Switch: '<S801>/Switch' incorporates:
         *  Constant: '<S810>/Calib'
         */
        if (KeTRGR_b_SelectSpd_UseERSBtn)
        {
            rtb_AND_g5 = rtb_AND_p1;
        }

        /* End of Switch: '<S801>/Switch' */

        /* If: '<S801>/If' incorporates:
         *  Constant: '<S801>/Constant'
         *  Constant: '<S801>/Constant1'
         *  Constant: '<S811>/Calib'
         *  Logic: '<S801>/Logical1'
         *  Logic: '<S801>/Logical2'
         *  RelationalOperator: '<S801>/Comparison1'
         *  RelationalOperator: '<S801>/Comparison2'
         *  Switch: '<S801>/Switch1'
         *  UnitDelay: '<S801>/Unit Delay'
         */
        if (rtb_AND_g5 && (TRGR_ac_DW.UnitDelay_DSTATE_kx < 8))
        {
            /* Outputs for IfAction SubSystem: '<S801>/Upshift_Conditions' incorporates:
             *  ActionPort: '<S812>/Action Port'
             */
            /* Merge: '<S801>/Merge' incorporates:
             *  Constant: '<S812>/Constant'
             *  Sum: '<S812>/Sum'
             */
            TRGR_ac_B.Merge = (sint16)(TRGR_ac_DW.UnitDelay_DSTATE_kx + 1);

            /* End of Outputs for SubSystem: '<S801>/Upshift_Conditions' */
        }
        else
        {
            if (KeTRGR_b_SelectSpd_UseERSBtn)
            {
                /* Outputs for Atomic SubSystem: '<S801>/EdgeRising4' */
                /* Switch: '<S801>/Switch1' incorporates:
                 *  Logic: '<S806>/AND'
                 */
                rtb_Logical1_hh = (rtb_Logical1_hh && rtb_AND12);

                /* End of Outputs for SubSystem: '<S801>/EdgeRising4' */
            }
            else
            {
                /* Outputs for Atomic SubSystem: '<S801>/EdgeRising2' */
                /* Switch: '<S801>/Switch1' incorporates:
                 *  Logic: '<S804>/AND'
                 */
                rtb_Logical1_hh = ((VeTRGI_b_DecelSts) && rtb_Comparison18_p);

                /* End of Outputs for SubSystem: '<S801>/EdgeRising2' */
            }

            if (rtb_Logical1_hh && (TRGR_ac_DW.UnitDelay_DSTATE_kx > 1))
            {
                /* Outputs for IfAction SubSystem: '<S801>/Downshift_Conditions' incorporates:
                 *  ActionPort: '<S802>/Action Port'
                 */
                /* Merge: '<S801>/Merge' incorporates:
                 *  Constant: '<S802>/Constant'
                 *  Sum: '<S802>/Sum'
                 */
                TRGR_ac_B.Merge = (sint16)(TRGR_ac_DW.UnitDelay_DSTATE_kx - 1);

                /* End of Outputs for SubSystem: '<S801>/Downshift_Conditions' */
            }
            else
            {
                /* Outputs for IfAction SubSystem: '<S801>/Hold_Value' incorporates:
                 *  ActionPort: '<S809>/Action Port'
                 */
                /* Merge: '<S801>/Merge' incorporates:
                 *  Inport: '<S809>/SpeedState'
                 */
                TRGR_ac_B.Merge = TRGR_ac_DW.UnitDelay_DSTATE_kx;

                /* End of Outputs for SubSystem: '<S801>/Hold_Value' */
            }
        }

        /* End of If: '<S801>/If' */

        /* Update for UnitDelay: '<S801>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_kx = TRGR_ac_B.Merge;
    }
    else
    {
        TRGR_ac_DW.TRGC_Speed_Control_Enabled_MODE = false;
    }

    /* End of Outputs for SubSystem: '<S32>/TRGC_Speed_Control_Enabled' */

    /* RelationalOperator: '<S33>/Comparison6' incorporates:
     *  Constant: '<S825>/Constant'
     *  UnitDelay: '<S33>/UnitDelay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_pp = (((uint32)VeTRGC_e_TransRngSt_Crnt) ==
        CeTRGR_e_TransRangePark);

    /* Logic: '<S33>/Logical14' incorporates:
     *  Constant: '<S859>/Calib'
     *  UnitDelay: '<S14>/UnitDelay3'
     */
    TRGR_ac_DW.UnitDelay3_DSTATE = ((VeTRGC_b_ParkWithSpd_ApplyEPB) &&
        (KeTRGR_b_EnblPPawlDisEng_AtPHiSpd));

    /* Outputs for Atomic SubSystem: '<S33>/TurnOnDelaySample1' */
    /* Outputs for Atomic SubSystem: '<S873>/EdgeRising' */
    /* UnitDelay: '<S876>/Unit Delay' */
    rtb_AND12 = TRGR_ac_DW.UnitDelay_DSTATE_lv;

    /* Update for UnitDelay: '<S876>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_lv = VeTRGC_b_ParkWithSpd_ApplyEPB;

    /* Switch: '<S873>/Switch1' incorporates:
     *  Constant: '<S847>/Calib'
     *  Constant: '<S873>/Constant Value'
     *  Constant: '<S873>/Constant Value1'
     *  Logic: '<S873>/OR'
     *  Logic: '<S873>/OR1'
     *  Logic: '<S876>/AND'
     *  Logic: '<S876>/OR1'
     *  MinMax: '<S873>/Minimum'
     *  Sum: '<S873>/Summation'
     *  UnitDelay: '<S873>/Unit Delay'
     */
    if ((!VeTRGC_b_ParkWithSpd_ApplyEPB) || ((VeTRGC_b_ParkWithSpd_ApplyEPB) &&
            (!rtb_AND12)))
    {
        TRGR_ac_DW.UnitDelay_DSTATE_g = 0U;
    }
    else if (KeTRGR_Cnt_AtParkSpdHi_PPawlSysFltDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_g) + 1U)))
    {
        /* MinMax: '<S873>/Minimum' incorporates:
         *  Constant: '<S847>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_g = KeTRGR_Cnt_AtParkSpdHi_PPawlSysFltDbnc;
    }
    else
    {
        /* MinMax: '<S873>/Minimum' incorporates:
         *  Constant: '<S873>/Constant Value'
         *  Sum: '<S873>/Summation'
         *  UnitDelay: '<S873>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_g = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_g) + 1U);
    }

    /* End of Switch: '<S873>/Switch1' */
    /* End of Outputs for SubSystem: '<S873>/EdgeRising' */

    /* Logic: '<S33>/Logical15' incorporates:
     *  Constant: '<S847>/Calib'
     *  Constant: '<S858>/Calib'
     *  Logic: '<S873>/AND'
     *  RelationalOperator: '<S873>/Greater Than'
     *  UnitDelay: '<S873>/Unit Delay'
     */
    TRGR_ac_B.VeTRGR_b_ParkWithSpd = (((VeTRGC_b_ParkWithSpd_ApplyEPB) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_g >= KeTRGR_Cnt_AtParkSpdHi_PPawlSysFltDbnc))
        && (KeTRGR_b_EnblPPawlDTC_WithPHiSpd));

    /* End of Outputs for SubSystem: '<S33>/TurnOnDelaySample1' */

    /* Logic: '<S880>/AND' incorporates:
     *  Constant: '<S886>/Constant'
     *  RelationalOperator: '<S34>/Comparison6'
     *  Switch: '<S794>/Switch1'
     */
    TRGR_ac_B.AND_ew = (((uint32)VeTRGC_e_RawVldtdTransRngSt) ==
                        CeTRGR_e_TransRangePark);

    /* Logic: '<S34>/Logical5' incorporates:
     *  Logic: '<S34>/Logical4'
     */
    TRGR_ac_B.AND_iq = !TRGR_ac_B.AND_ew;

    /* Logic: '<S883>/Logical1' incorporates:
     *  Constant: '<S894>/Constant'
     *  Constant: '<S897>/Constant'
     *  Constant: '<S898>/Constant'
     *  Constant: '<S899>/Constant'
     *  Constant: '<S900>/Constant'
     *  RelationalOperator: '<S33>/Comparison3'
     *  RelationalOperator: '<S883>/Comparison1'
     *  RelationalOperator: '<S883>/Comparison2'
     *  RelationalOperator: '<S883>/Comparison3'
     *  RelationalOperator: '<S883>/Comparison4'
     *  RelationalOperator: '<S883>/Comparison5'
     *  Switch: '<S15>/Switch17'
     */
    VeTRGC_b_EPBSts_Fltd = (((((((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_DC) || (((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_SNA)) || (((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_Flt_Prsnt)) || (((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_Flt_EPBAppl)) || (((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_Flt_EPBRel));

    /* Logic: '<S883>/Logical14' incorporates:
     *  Constant: '<S895>/Constant'
     *  Constant: '<S896>/Constant'
     *  RelationalOperator: '<S33>/Comparison3'
     *  RelationalOperator: '<S883>/Comparison11'
     *  RelationalOperator: '<S883>/Comparison12'
     *  Switch: '<S15>/Switch17'
     */
    VeTRGC_b_EPBSts_Appld = ((((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_APPLIED) || (((uint32)VeTRGI_e_EPB_HoldSts) ==
        CePLTR_e_EPBHoldSts_Flt_EPBAppl));

    /* DataTypeConversion: '<S885>/DataTypeConversion' incorporates:
     *  Constant: '<S890>/Calib'
     *  DataTypeConversion: '<S884>/DataTypeConversion'
     *  RelationalOperator: '<S34>/Comparison6'
     *  Selector: '<S34>/Selector'
     *  Switch: '<S794>/Switch1'
     */
    TRGR_ac_B.DataTypeConversion_j = (TeTRGR_e_ReverseSts)KaTRGR_e_R_Status
        [(VeTRGC_e_RawVldtdTransRngSt)];

    /* Outputs for Atomic SubSystem: '<S34>/TimerRetriggerResetEnabled' */
    /* Switch: '<S893>/Switch2' incorporates:
     *  Constant: '<S891>/Calib'
     *  Logic: '<S34>/Logical1'
     *  Logic: '<S34>/Logical4'
     *  Logic: '<S34>/Logical7'
     *  Switch: '<S893>/Switch1'
     *  UnitDelay: '<S893>/Unit Delay'
     */
    if (((!VeTRGC_b_EPBSts_Appld) || rtb_OR1_ct) && (TRGR_ac_B.AND_iq))
    {
        TRGR_ac_DW.UnitDelay_DSTATE_jd = KeTRGR_t_VehSecuredDbnc;
    }
    else
    {
        /* UnitDelay: '<S893>/Unit Delay' incorporates:
         *  Constant: '<S892>/Calib'
         *  Constant: '<S893>/Constant Value4'
         *  MinMax: '<S893>/Maximum'
         *  Sum: '<S893>/Subtraction'
         *  Switch: '<S893>/Switch2'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_jd = fmaxf(TRGR_ac_DW.UnitDelay_DSTATE_jd -
            KeTRGR_t_dT, 0.0F);
    }

    /* End of Switch: '<S893>/Switch2' */

    /* Outport: '<Root>/VeTRGR_b_Secured_To_Shtdwn' incorporates:
     *  Constant: '<S893>/Constant Value2'
     *  Logic: '<S34>/Logical8'
     *  RelationalOperator: '<S893>/Greater Than1'
     *  UnitDelay: '<S893>/Unit Delay'
     */
    (void)Rte_Write_VeTRGR_b_Secured_To_Shtdwn_Value
        (TRGR_ac_DW.UnitDelay_DSTATE_jd <= 0.0F);

    /* End of Outputs for SubSystem: '<S34>/TimerRetriggerResetEnabled' */

    /* Logic: '<S881>/AND' incorporates:
     *  Constant: '<S887>/Constant'
     *  RelationalOperator: '<S34>/Comparison4'
     */
    TRGR_ac_B.AND_d0 = (((uint32)TRGR_ac_B.DataTypeConversion_h) ==
                        CeTRGR_e_TXFlt_SNA);

    /* Logic: '<S882>/AND' incorporates:
     *  Constant: '<S888>/Constant'
     *  RelationalOperator: '<S34>/Comparison2'
     */
    TRGR_ac_B.AND_g = (((uint32)TRGR_ac_B.DataTypeConversion_h) !=
                       CeTRGR_e_TXFlt_OK);

    /* Logic: '<S878>/AND' incorporates:
     *  Constant: '<S889>/Constant'
     *  RelationalOperator: '<S34>/Comparison5'
     *  Switch: '<S78>/Switch1'
     */
    TRGR_ac_B.AND_no = (((uint32)TRGR_ac_B.SignalConversion) !=
                        CeTRGR_e_PRNDBlinkNone);

    /* Update for UnitDelay: '<S14>/UnitDelay6' incorporates:
     *  DataTypeConversion: '<S692>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay6_DSTATE = TRGR_ac_B.DataTypeConversion_m;

    /* Update for UnitDelay: '<S25>/UnitDelay' incorporates:
     *  Switch: '<S15>/Switch40'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_enz = Switch40;

    /* Update for UnitDelay: '<S25>/UnitDelay1' incorporates:
     *  VariantMerge generated from: '<S11>/DrvRq_WithNSA'
     */
    TRGR_ac_DW.UnitDelay1_DSTATE_a = TRGR_ac_B.VeTRGR_e_ESMTransRngSt;

    /* Update for RelationalOperator: '<S322>/Comparison1' incorporates:
     *  Merge: '<S26>/Merge1'
     *  UnitDelay: '<S14>/UnitDelay2'
     */
    TRGR_ac_DW.UnitDelay2_DSTATE = VeTRGC_e_VldtdTransRngStateERS;

    /* Update for UnitDelay: '<S30>/UnitDelay' incorporates:
     *  DataTypeConversion: '<S692>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_mk = TRGR_ac_B.DataTypeConversion_m;

    /* Update for UnitDelay: '<S14>/UnitDelay' incorporates:
     *  DataTypeConversion: '<S692>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_gh = TRGR_ac_B.DataTypeConversion_m;

    /* Update for UnitDelay: '<S704>/UnitDelay2' incorporates:
     *  DataTypeConversion: '<S309>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay2_DSTATE_p = TRGR_ac_B.DataTypeConversion_e;

    /* Update for UnitDelay: '<S705>/UnitDelay1' incorporates:
     *  DataTypeConversion: '<S309>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay1_DSTATE_o = TRGR_ac_B.DataTypeConversion_e;

    /* Update for UnitDelay: '<S555>/UnitDelay2' incorporates:
     *  DataTypeConversion: '<S309>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay2_DSTATE_e = TRGR_ac_B.DataTypeConversion_e;

    /* Update for UnitDelay: '<S703>/UnitDelay1' incorporates:
     *  DataTypeConversion: '<S309>/DataTypeConversion'
     */
    TRGR_ac_DW.UnitDelay1_DSTATE_es = TRGR_ac_B.DataTypeConversion_e;

    /* Update for UnitDelay: '<S130>/UnitDelay' */
    TRGR_ac_DW.UnitDelay_DSTATE_gb = TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts;

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGR_PRNDL_IPCntrls'
     */
    /* Outputs for Atomic SubSystem: '<S1110>/TRGR_IPConditions' */
    TRGR_ac_TRGR_IPConditions();

    /* End of Outputs for SubSystem: '<S1110>/TRGR_IPConditions' */

    /* Outputs for Atomic SubSystem: '<S18>/IP_InputOverrides' */
    /* Switch: '<S1111>/Switch10' incorporates:
     *  Constant: '<S1189>/Calib'
     */
    if (KeTRGR_b_PRNDLTestFlagsOvrd)
    {
        /* Switch: '<S1111>/Switch10' incorporates:
         *  Constant: '<S1198>/Calib'
         */
        rtb_Switch10_h = KeTRGR_e_PRNDLTestFlagsOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch10' incorporates:
         *  DataStoreRead: '<S1111>/Dsr_PID_AStrtEntry2'
         */
        rtb_Switch10_h = TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags;
    }

    /* End of Switch: '<S1111>/Switch10' */

    /* RelationalOperator: '<S1111>/Comparison' incorporates:
     *  Constant: '<S1111>/ConstantValue11'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator7'
     */
    VeTRGR_b_P_TestNotCmplt_Read = ((((sint32)rtb_Switch10_h) & 256) > 0);

    /* RelationalOperator: '<S1111>/Comparison1' incorporates:
     *  Constant: '<S1111>/ConstantValue1'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator1'
     */
    VeTRGR_b_P_TestFail_Read = ((((sint32)rtb_Switch10_h) & 512) > 0);

    /* RelationalOperator: '<S1111>/Comparison2' incorporates:
     *  Constant: '<S1111>/ConstantValue2'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator2'
     */
    VeTRGR_b_R_TestNotCmplt_Read = ((((sint32)rtb_Switch10_h) & 1024) > 0);

    /* RelationalOperator: '<S1111>/Comparison3' incorporates:
     *  Constant: '<S1111>/ConstantValue3'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator3'
     */
    VeTRGR_b_R_TestFail_Read = ((((sint32)rtb_Switch10_h) & 2048) > 0);

    /* RelationalOperator: '<S1111>/Comparison4' incorporates:
     *  Constant: '<S1111>/ConstantValue4'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator4'
     */
    VeTRGR_b_N_TestNotCmplt_Read = ((((sint32)rtb_Switch10_h) & 4096) > 0);

    /* RelationalOperator: '<S1111>/Comparison5' incorporates:
     *  Constant: '<S1111>/ConstantValue5'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator5'
     */
    VeTRGR_b_N_TestFail_Read = ((((sint32)rtb_Switch10_h) & 8192) > 0);

    /* RelationalOperator: '<S1111>/Comparison6' incorporates:
     *  Constant: '<S1111>/ConstantValue6'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator6'
     */
    VeTRGR_b_D_TestNotCmplt_Read = ((((sint32)rtb_Switch10_h) & 16384) > 0);

    /* RelationalOperator: '<S1111>/Comparison7' incorporates:
     *  Constant: '<S1111>/ConstantValue7'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator8'
     */
    VeTRGR_b_D_TestFail_Read = ((0 < 0) || ((((uint32)rtb_Switch10_h) & ((uint32)
        32768)) > ((uint32)0)));

    /* RelationalOperator: '<S1111>/Comparison8' incorporates:
     *  Constant: '<S1111>/ConstantValue8'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator9'
     */
    VeTRGR_b_L_TestNotCmplt_Read = ((((sint32)rtb_Switch10_h) & 1) > 0);

    /* RelationalOperator: '<S1111>/Comparison9' incorporates:
     *  Constant: '<S1111>/ConstantValue9'
     *  S-Function (sfix_bitop): '<S1111>/BitwiseOperator10'
     */
    VeTRGR_b_L_TestFail_Read = ((((sint32)rtb_Switch10_h) & 2) > 0);

    /* Switch: '<S1111>/Switch1' incorporates:
     *  Constant: '<S1177>/Calib'
     */
    if (KeTRGR_b_D_TestFail_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch1' incorporates:
         *  Constant: '<S1178>/Calib'
         */
        VeTRGR_b_D_TestFailWrite = KeTRGR_b_D_TestFail_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch1' */
        VeTRGR_b_D_TestFailWrite = VeTRGR_b_D_TestFail_Read;
    }

    /* End of Switch: '<S1111>/Switch1' */

    /* Switch: '<S1111>/Switch16' incorporates:
     *  Constant: '<S1179>/Calib'
     */
    if (KeTRGR_b_D_TestNotCmplt_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch16' incorporates:
         *  Constant: '<S1180>/Calib'
         */
        VeTRGR_b_D_TestNotCmpltWrite = KeTRGR_b_D_TestNotCmplt_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch16' */
        VeTRGR_b_D_TestNotCmpltWrite = VeTRGR_b_D_TestNotCmplt_Read;
    }

    /* End of Switch: '<S1111>/Switch16' */

    /* Switch: '<S1111>/Switch2' incorporates:
     *  Constant: '<S1185>/Calib'
     */
    if (KeTRGR_b_N_TestFail_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch2' incorporates:
         *  Constant: '<S1186>/Calib'
         */
        VeTRGR_b_N_TestFailWrite = KeTRGR_b_N_TestFail_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch2' */
        VeTRGR_b_N_TestFailWrite = VeTRGR_b_N_TestFail_Read;
    }

    /* End of Switch: '<S1111>/Switch2' */

    /* Switch: '<S1111>/Switch3' incorporates:
     *  Constant: '<S1187>/Calib'
     */
    if (KeTRGR_b_N_TestNotCmplt_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch3' incorporates:
         *  Constant: '<S1188>/Calib'
         */
        VeTRGR_b_N_TestNotCmpltWrite = KeTRGR_b_N_TestNotCmplt_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch3' */
        VeTRGR_b_N_TestNotCmpltWrite = VeTRGR_b_N_TestNotCmplt_Read;
    }

    /* End of Switch: '<S1111>/Switch3' */

    /* Switch: '<S1111>/Switch4' incorporates:
     *  Constant: '<S1190>/Calib'
     */
    if (KeTRGR_b_P_TestFail_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch4' incorporates:
         *  Constant: '<S1191>/Calib'
         */
        TRGR_ac_B.Switch4 = KeTRGR_b_P_TestFail_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch4' */
        TRGR_ac_B.Switch4 = VeTRGR_b_P_TestFail_Read;
    }

    /* End of Switch: '<S1111>/Switch4' */

    /* Switch: '<S1111>/Switch5' incorporates:
     *  Constant: '<S1192>/Calib'
     */
    if (KeTRGR_b_P_TestNotCmplt_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch5' incorporates:
         *  Constant: '<S1193>/Calib'
         */
        VeTRGR_b_P_TestNotCmpltWrite = KeTRGR_b_P_TestNotCmplt_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch5' */
        VeTRGR_b_P_TestNotCmpltWrite = VeTRGR_b_P_TestNotCmplt_Read;
    }

    /* End of Switch: '<S1111>/Switch5' */

    /* Switch: '<S1111>/Switch6' incorporates:
     *  Constant: '<S1194>/Calib'
     */
    if (KeTRGR_b_R_TestFail_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch6' incorporates:
         *  Constant: '<S1195>/Calib'
         */
        TRGR_ac_B.Switch6 = KeTRGR_b_R_TestFail_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch6' */
        TRGR_ac_B.Switch6 = VeTRGR_b_R_TestFail_Read;
    }

    /* End of Switch: '<S1111>/Switch6' */

    /* Switch: '<S1111>/Switch7' incorporates:
     *  Constant: '<S1196>/Calib'
     */
    if (KeTRGR_b_R_TestNotCmplt_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch7' incorporates:
         *  Constant: '<S1197>/Calib'
         */
        TRGR_ac_B.Switch7 = KeTRGR_b_R_TestNotCmplt_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch7' */
        TRGR_ac_B.Switch7 = VeTRGR_b_R_TestNotCmplt_Read;
    }

    /* End of Switch: '<S1111>/Switch7' */

    /* Switch: '<S1111>/Switch8' incorporates:
     *  Constant: '<S1181>/Calib'
     */
    if (KeTRGR_b_L_TestFail_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch8' incorporates:
         *  Constant: '<S1182>/Calib'
         */
        TRGR_ac_B.Switch8 = KeTRGR_b_L_TestFail_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch8' */
        TRGR_ac_B.Switch8 = VeTRGR_b_L_TestFail_Read;
    }

    /* End of Switch: '<S1111>/Switch8' */

    /* Switch: '<S1111>/Switch9' incorporates:
     *  Constant: '<S1183>/Calib'
     */
    if (KeTRGR_b_L_TestNotCmplt_ReadOvrd)
    {
        /* Switch: '<S1111>/Switch9' incorporates:
         *  Constant: '<S1184>/Calib'
         */
        TRGR_ac_B.Switch9 = KeTRGR_b_L_TestNotCmplt_ReadOvrdVal;
    }
    else
    {
        /* Switch: '<S1111>/Switch9' */
        TRGR_ac_B.Switch9 = VeTRGR_b_L_TestNotCmplt_Read;
    }

    /* End of Switch: '<S1111>/Switch9' */
    /* End of Outputs for SubSystem: '<S18>/IP_InputOverrides' */

    /* Outputs for Atomic SubSystem: '<S1110>/EdgeRising' */
    /* Logic: '<S1133>/AND' incorporates:
     *  Logic: '<S1133>/OR1'
     *  UnitDelay: '<S1133>/Unit Delay'
     */
    rtb_Logical1_hh = ((TRGR_ac_B.AND_i) && (!TRGR_ac_DW.UnitDelay_DSTATE_pb));

    /* Update for UnitDelay: '<S1133>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_pb = TRGR_ac_B.AND_i;

    /* End of Outputs for SubSystem: '<S1110>/EdgeRising' */

    /* If: '<S1136>/If' */
    if (TRGR_ac_B.AND_i)
    {
        /* Outputs for IfAction SubSystem: '<S1110>/InPlantMode' incorporates:
         *  ActionPort: '<S1134>/Action Port'
         */
        /* Chart: '<S1134>/InPlantTest_Stateflow' */
        /* Gateway: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGR_PRNDL_IPCntrls/IP_Controls/InPlantMode/InPlantTest_Stateflow */
        /* During: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGR_PRNDL_IPCntrls/IP_Controls/InPlantMode/InPlantTest_Stateflow */
        if (((uint32)TRGR_ac_DW.is_active_c26_TRGR_ac) == 0U)
        {
            /* Entry: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGR_PRNDL_IPCntrls/IP_Controls/InPlantMode/InPlantTest_Stateflow */
            TRGR_ac_DW.is_active_c26_TRGR_ac = 1U;

            /* Entry Internal: TRGR_MedTED/TRGR_Merged/TRGR_FUNC/TRGR_PRNDL_IPCntrls/IP_Controls/InPlantMode/InPlantTest_Stateflow */
            /* Transition: '<S1147>:718' */
            TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_NOT_IP_Test;
            TRGR_ac_enter_atomic_NOT_IP_Test((&(VeTRGR_b_D_TestNotCmpltWrite)),
                (&(VeTRGR_b_D_TestFailWrite)), (&(VeTRGR_b_N_TestNotCmpltWrite)),
                (&(VeTRGR_b_N_TestFailWrite)), (&(VeTRGR_b_P_TestNotCmpltWrite)));
        }
        else
        {
            switch (TRGR_ac_DW.is_c26_TRGR_ac)
            {
              case TRGR_ac_IN_Drive_Test:
                /* During 'Drive_Test': '<S1147>:626' */
                switch (TRGR_ac_DW.is_Drive_Test)
                {
                  case TRGR_ac_IN_D_Complete:
                    /* During 'D_Complete': '<S1147>:638' */
                    /* Transition: '<S1147>:633' */
                    /* Transition: '<S1147>:636' */
                    TRGR_ac_DW.is_Drive_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  case TRGR_ac_IN_D_NotComplete:
                    /* During 'D_NotComplete': '<S1147>:639' */
                    /* Transition: '<S1147>:634' */
                    /* Transition: '<S1147>:636' */
                    TRGR_ac_DW.is_Drive_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  default:
                    /* During 'WaitMode_D': '<S1147>:637' */
                    if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                            VeTRGC_e_VldtdTransRngStateERS) ==
                            CeTRGR_e_TransRangeDrive))
                    {
                        /* Transition: '<S1147>:631' */
                        /* Exit 'WaitMode_D': '<S1147>:637' */
                        TRGR_ac_B.IPTmr_D = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Drive_Test = TRGR_ac_IN_D_Complete;

                        /* Entry 'D_Complete': '<S1147>:638' */
                        TRGR_ac_B.D_TestNotCmplt_Write = false;
                        TRGR_ac_B.D_TestFail_Write = false;
                    }
                    else if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                               VeTRGC_e_VldtdTransRngStateERS) !=
                              CeTRGR_e_TransRangeDrive))
                    {
                        /* Transition: '<S1147>:632' */
                        /* Exit 'WaitMode_D': '<S1147>:637' */
                        TRGR_ac_B.IPTmr_D = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Drive_Test = TRGR_ac_IN_D_NotComplete;

                        /* Entry 'D_NotComplete': '<S1147>:639' */
                        TRGR_ac_B.D_TestNotCmplt_Write = false;
                        TRGR_ac_B.D_TestFail_Write = true;
                    }
                    else if (!TRGR_ac_B.AND_i)
                    {
                        /* Transition: '<S1147>:630' */
                        /* Exit 'WaitMode_D': '<S1147>:637' */
                        TRGR_ac_B.IPTmr_D = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Drive_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                        /* Entry 'IPHold_State': '<S1147>:662' */
                        TRGR_ac_B.IP_HoldSt = true;
                    }
                    else
                    {
                        VeTRGR_t_IPTmr = VeTRGR_t_IPTmr + KeTRGR_t_dT;
                    }
                    break;
                }
                break;

              case TRGR_ac_IN_IPHold_State:
                TRGR_ac_IPHold_State(&rtb_Logical1_hh,
                                     (&(VeTRGR_b_D_TestNotCmpltWrite)),
                                     (&(VeTRGR_b_D_TestFailWrite)),
                                     (&(VeTRGR_b_N_TestNotCmpltWrite)),
                                     (&(VeTRGR_b_N_TestFailWrite)),
                                     (&(VeTRGR_b_P_TestNotCmpltWrite)));
                break;

              case TRGR_ac_IN_Low_Test:
                /* During 'Low_Test': '<S1147>:644' */
                switch (TRGR_ac_DW.is_Low_Test)
                {
                  case TRGR_ac_IN_L_Complete:
                    /* During 'L_Complete': '<S1147>:656' */
                    /* Transition: '<S1147>:651' */
                    /* Transition: '<S1147>:654' */
                    TRGR_ac_DW.is_Low_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  case TRGR_ac_IN_L_NotComplete:
                    /* During 'L_NotComplete': '<S1147>:657' */
                    /* Transition: '<S1147>:652' */
                    /* Transition: '<S1147>:654' */
                    TRGR_ac_DW.is_Low_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  default:
                    /* During 'WaitMode_L': '<S1147>:655' */
                    if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                            VeTRGC_e_VldtdTransRngStateERS) ==
                            CeTRGR_e_TransRangeDrive1))
                    {
                        /* Transition: '<S1147>:649' */
                        /* Exit 'WaitMode_L': '<S1147>:655' */
                        TRGR_ac_B.IPTmr_L = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Low_Test = TRGR_ac_IN_L_Complete;

                        /* Entry 'L_Complete': '<S1147>:656' */
                        TRGR_ac_B.L_TestNotCmplt_Write = false;
                        TRGR_ac_B.L_TestFail_Write = false;
                    }
                    else if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                               VeTRGC_e_VldtdTransRngStateERS) !=
                              CeTRGR_e_TransRangeDrive1))
                    {
                        /* Transition: '<S1147>:650' */
                        /* Exit 'WaitMode_L': '<S1147>:655' */
                        TRGR_ac_B.IPTmr_L = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Low_Test = TRGR_ac_IN_L_NotComplete;

                        /* Entry 'L_NotComplete': '<S1147>:657' */
                        TRGR_ac_B.L_TestNotCmplt_Write = false;
                        TRGR_ac_B.L_TestFail_Write = true;
                    }
                    else if (!TRGR_ac_B.AND_i)
                    {
                        /* Transition: '<S1147>:648' */
                        /* Exit 'WaitMode_L': '<S1147>:655' */
                        TRGR_ac_B.IPTmr_L = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Low_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                        /* Entry 'IPHold_State': '<S1147>:662' */
                        TRGR_ac_B.IP_HoldSt = true;
                    }
                    else
                    {
                        VeTRGR_t_IPTmr = VeTRGR_t_IPTmr + KeTRGR_t_dT;
                    }
                    break;
                }
                break;

              case TRGR_ac_IN_NOT_IP_Test:
                /* During 'NOT_IP_Test': '<S1147>:623' */
                /* Transition: '<S1147>:691' */
                /* Exit 'NOT_IP_Test': '<S1147>:623' */
                TRGR_ac_B.Init_IPTest = false;
                TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                /* Entry 'IPHold_State': '<S1147>:662' */
                TRGR_ac_B.IP_HoldSt = true;
                break;

              case TRGR_ac_IN_Neutral_Test:
                /* During 'Neutral_Test': '<S1147>:701' */
                switch (TRGR_ac_DW.is_Neutral_Test)
                {
                  case TRGR_ac_IN_N_Complete:
                    /* During 'N_Complete': '<S1147>:713' */
                    /* Transition: '<S1147>:708' */
                    /* Transition: '<S1147>:711' */
                    TRGR_ac_DW.is_Neutral_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  case TRGR_ac_IN_R_NotComplete:
                    /* During 'R_NotComplete': '<S1147>:714' */
                    /* Transition: '<S1147>:709' */
                    /* Transition: '<S1147>:711' */
                    TRGR_ac_DW.is_Neutral_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  default:
                    /* During 'WaitMode_N': '<S1147>:712' */
                    if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                            VeTRGC_e_VldtdTransRngStateERS) ==
                            CeTRGR_e_TransRangeNeutral))
                    {
                        /* Transition: '<S1147>:706' */
                        /* Exit 'WaitMode_N': '<S1147>:712' */
                        TRGR_ac_B.IPTmr_N = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Neutral_Test = TRGR_ac_IN_N_Complete;

                        /* Entry 'N_Complete': '<S1147>:713' */
                        TRGR_ac_B.N_TestNotCmplt_Write = false;
                        TRGR_ac_B.N_TestFail_Write = false;
                    }
                    else if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                               VeTRGC_e_VldtdTransRngStateERS) !=
                              CeTRGR_e_TransRangeNeutral))
                    {
                        /* Transition: '<S1147>:707' */
                        /* Exit 'WaitMode_N': '<S1147>:712' */
                        TRGR_ac_B.IPTmr_N = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Neutral_Test = TRGR_ac_IN_R_NotComplete;

                        /* Entry 'R_NotComplete': '<S1147>:714' */
                        TRGR_ac_B.N_TestNotCmplt_Write = false;
                        TRGR_ac_B.N_TestFail_Write = true;
                    }
                    else if (!TRGR_ac_B.AND_i)
                    {
                        /* Transition: '<S1147>:705' */
                        /* Exit 'WaitMode_N': '<S1147>:712' */
                        TRGR_ac_B.IPTmr_N = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Neutral_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                        /* Entry 'IPHold_State': '<S1147>:662' */
                        TRGR_ac_B.IP_HoldSt = true;
                    }
                    else
                    {
                        VeTRGR_t_IPTmr = VeTRGR_t_IPTmr + KeTRGR_t_dT;
                    }
                    break;
                }
                break;

              case TRGR_ac_IN_Park_Test:
                /* During 'Park_Test': '<S1147>:677' */
                switch (TRGR_ac_DW.is_Park_Test)
                {
                  case TRGR_ac_IN_P_Complete:
                    /* During 'P_Complete': '<S1147>:690' */
                    /* Transition: '<S1147>:685' */
                    /* Transition: '<S1147>:687' */
                    TRGR_ac_DW.is_Park_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  case TRGR_ac_IN_P_NotComplete:
                    /* During 'P_NotComplete': '<S1147>:689' */
                    /* Transition: '<S1147>:684' */
                    /* Transition: '<S1147>:687' */
                    TRGR_ac_DW.is_Park_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  default:
                    /* During 'WaitMode_P': '<S1147>:688' */
                    if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                            VeTRGC_e_VldtdTransRngStateERS) !=
                            CeTRGR_e_TransRangePark))
                    {
                        /* Transition: '<S1147>:683' */
                        /* Exit 'WaitMode_P': '<S1147>:688' */
                        TRGR_ac_B.IPTmr_P = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Park_Test = TRGR_ac_IN_P_NotComplete;

                        /* Entry 'P_NotComplete': '<S1147>:689' */
                        TRGR_ac_B.P_TestNotCmplt_Write = false;
                        TRGR_ac_B.P_TestFail_Write = true;
                    }
                    else if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                               VeTRGC_e_VldtdTransRngStateERS) ==
                              CeTRGR_e_TransRangePark))
                    {
                        /* Transition: '<S1147>:682' */
                        /* Exit 'WaitMode_P': '<S1147>:688' */
                        TRGR_ac_B.IPTmr_P = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Park_Test = TRGR_ac_IN_P_Complete;

                        /* Entry 'P_Complete': '<S1147>:690' */
                        TRGR_ac_B.P_TestNotCmplt_Write = false;
                        TRGR_ac_B.P_TestFail_Write = false;
                    }
                    else if (!TRGR_ac_B.AND_i)
                    {
                        /* Transition: '<S1147>:681' */
                        /* Exit 'WaitMode_P': '<S1147>:688' */
                        TRGR_ac_B.IPTmr_P = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Park_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                        /* Entry 'IPHold_State': '<S1147>:662' */
                        TRGR_ac_B.IP_HoldSt = true;
                    }
                    else
                    {
                        VeTRGR_t_IPTmr = VeTRGR_t_IPTmr + KeTRGR_t_dT;
                    }
                    break;
                }
                break;

              default:
                /* During 'Reverse_Test': '<S1147>:663' */
                switch (TRGR_ac_DW.is_Reverse_Test)
                {
                  case TRGR_ac_IN_R_Complete:
                    /* During 'R_Complete': '<S1147>:675' */
                    /* Transition: '<S1147>:670' */
                    /* Transition: '<S1147>:673' */
                    TRGR_ac_DW.is_Reverse_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  case TRGR_ac_IN_R_NotComplete:
                    /* During 'R_NotComplete': '<S1147>:676' */
                    /* Transition: '<S1147>:671' */
                    /* Transition: '<S1147>:673' */
                    TRGR_ac_DW.is_Reverse_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                    TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                    /* Entry 'IPHold_State': '<S1147>:662' */
                    TRGR_ac_B.IP_HoldSt = true;
                    break;

                  default:
                    /* During 'WaitMode_R': '<S1147>:674' */
                    if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                            VeTRGC_e_VldtdTransRngStateERS) ==
                            CeTRGR_e_TransRangeReverse))
                    {
                        /* Transition: '<S1147>:668' */
                        /* Exit 'WaitMode_R': '<S1147>:674' */
                        TRGR_ac_B.IPTmr_R = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Reverse_Test = TRGR_ac_IN_R_Complete;

                        /* Entry 'R_Complete': '<S1147>:675' */
                        TRGR_ac_B.R_TestNotCmplt_Write = false;
                        TRGR_ac_B.R_TestFail_Write = false;
                    }
                    else if ((VeTRGR_t_IPTmr >= KeTRGR_t_IPTestTmr) && (((uint32)
                               VeTRGC_e_VldtdTransRngStateERS) !=
                              CeTRGR_e_TransRangeReverse))
                    {
                        /* Transition: '<S1147>:669' */
                        /* Exit 'WaitMode_R': '<S1147>:674' */
                        TRGR_ac_B.IPTmr_R = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Reverse_Test = TRGR_ac_IN_R_NotComplete;

                        /* Entry 'R_NotComplete': '<S1147>:676' */
                        TRGR_ac_B.R_TestNotCmplt_Write = false;
                        TRGR_ac_B.R_TestFail_Write = true;
                    }
                    else if (!TRGR_ac_B.AND_i)
                    {
                        /* Transition: '<S1147>:667' */
                        /* Exit 'WaitMode_R': '<S1147>:674' */
                        TRGR_ac_B.IPTmr_R = false;
                        VeTRGR_t_IPTmr = 0.0F;
                        TRGR_ac_DW.is_Reverse_Test = TRGR_ac_IN_NO_ACTIVE_CHILD;
                        TRGR_ac_DW.is_c26_TRGR_ac = TRGR_ac_IN_IPHold_State;

                        /* Entry 'IPHold_State': '<S1147>:662' */
                        TRGR_ac_B.IP_HoldSt = true;
                    }
                    else
                    {
                        VeTRGR_t_IPTmr = VeTRGR_t_IPTmr + KeTRGR_t_dT;
                    }
                    break;
                }
                break;
            }
        }

        /* End of Chart: '<S1134>/InPlantTest_Stateflow' */

        /* Logic: '<S1138>/AND' */
        VeTRGR_b_Init_IPTest = TRGR_ac_B.Init_IPTest;

        /* Logic: '<S1139>/AND' */
        VeTRGR_b_IPTmr_P = TRGR_ac_B.IPTmr_P;

        /* Logic: '<S1140>/AND' */
        VeTRGR_b_IPTmr_R = TRGR_ac_B.IPTmr_R;

        /* Logic: '<S1141>/AND' */
        VeTRGR_b_IPTmr_L = TRGR_ac_B.IPTmr_L;

        /* Logic: '<S1142>/AND' */
        VeTRGR_b_IPTmr_N = TRGR_ac_B.IPTmr_N;

        /* Logic: '<S1143>/AND' */
        VeTRGR_b_IPHoldSt = TRGR_ac_B.IP_HoldSt;

        /* Logic: '<S1144>/AND' */
        VeTRGR_b_IPTmr_D = TRGR_ac_B.IPTmr_D;

        /* Merge: '<S1110>/Merge1' incorporates:
         *  SignalConversion generated from: '<S1134>/D_TestFail_Write'
         */
        VeTRGR_b_D_TestFailWrite = TRGR_ac_B.D_TestFail_Write;

        /* Merge: '<S1110>/Merge' incorporates:
         *  SignalConversion generated from: '<S1134>/D_TestNotCmplt_Write'
         */
        VeTRGR_b_D_TestNotCmpltWrite = TRGR_ac_B.D_TestNotCmplt_Write;

        /* Merge: '<S1110>/Merge8' incorporates:
         *  SignalConversion generated from: '<S1134>/L_TestFail_Write'
         */
        VeTRGR_b_L_TestFailWrite = TRGR_ac_B.L_TestFail_Write;

        /* Merge: '<S1110>/Merge9' incorporates:
         *  SignalConversion generated from: '<S1134>/L_TestNotCmplt_Write'
         */
        VeTRGR_b_L_TestNotCmpltWrite = TRGR_ac_B.L_TestNotCmplt_Write;

        /* Merge: '<S1110>/Merge3' incorporates:
         *  SignalConversion generated from: '<S1134>/N_TestFail_Write'
         */
        VeTRGR_b_N_TestFailWrite = TRGR_ac_B.N_TestFail_Write;

        /* Merge: '<S1110>/Merge2' incorporates:
         *  SignalConversion generated from: '<S1134>/N_TestNotCmplt_Write'
         */
        VeTRGR_b_N_TestNotCmpltWrite = TRGR_ac_B.N_TestNotCmplt_Write;

        /* Merge: '<S1110>/Merge5' incorporates:
         *  SignalConversion generated from: '<S1134>/P_TestFail_Write'
         */
        VeTRGR_b_P_TestFailWrite = TRGR_ac_B.P_TestFail_Write;

        /* Merge: '<S1110>/Merge4' incorporates:
         *  SignalConversion generated from: '<S1134>/P_TestNotCmplt_Write'
         */
        VeTRGR_b_P_TestNotCmpltWrite = TRGR_ac_B.P_TestNotCmplt_Write;

        /* Merge: '<S1110>/Merge7' incorporates:
         *  SignalConversion generated from: '<S1134>/R_TestFail_Write'
         */
        VeTRGR_b_R_TestFailWrite = TRGR_ac_B.R_TestFail_Write;

        /* Merge: '<S1110>/Merge6' incorporates:
         *  SignalConversion generated from: '<S1134>/R_TestNotCmplt_Write'
         */
        VeTRGR_b_R_TestNotCmpltWrite = TRGR_ac_B.R_TestNotCmplt_Write;

        /* Gain: '<S1148>/Gain' */
        VeTRGR_t_IPTimer = VeTRGR_t_IPTmr;

        /* End of Outputs for SubSystem: '<S1110>/InPlantMode' */
    }
    else
    {
        /* Outputs for IfAction SubSystem: '<S1110>/InPlantPassThrough' incorporates:
         *  ActionPort: '<S1135>/ActionPort'
         */
        /* Merge: '<S1110>/Merge5' incorporates:
         *  Logic: '<S1154>/AND'
         */
        VeTRGR_b_P_TestFailWrite = TRGR_ac_B.Switch4;

        /* Merge: '<S1110>/Merge6' incorporates:
         *  Logic: '<S1155>/AND'
         */
        VeTRGR_b_R_TestNotCmpltWrite = TRGR_ac_B.Switch7;

        /* Merge: '<S1110>/Merge7' incorporates:
         *  Logic: '<S1156>/AND'
         */
        VeTRGR_b_R_TestFailWrite = TRGR_ac_B.Switch6;

        /* Merge: '<S1110>/Merge8' incorporates:
         *  Logic: '<S1157>/AND'
         */
        VeTRGR_b_L_TestFailWrite = TRGR_ac_B.Switch8;

        /* Merge: '<S1110>/Merge9' incorporates:
         *  Logic: '<S1158>/AND'
         */
        VeTRGR_b_L_TestNotCmpltWrite = TRGR_ac_B.Switch9;

        /* End of Outputs for SubSystem: '<S1110>/InPlantPassThrough' */
    }

    /* End of If: '<S1136>/If' */

    /* Switch: '<S1110>/Switch8' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry15'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry16'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry1'
     *  S-Function (sfix_bitop): '<S1121>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1121>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1121>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1131>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_D_TestFailWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(((uint32)
            TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags) | ((uint32)32768));
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint32)
            ((uint16)(~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags))) | ((uint32)32768))));
    }

    /* End of Switch: '<S1110>/Switch8' */

    /* Switch: '<S1110>/Switch9' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry19'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry20'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry10'
     *  S-Function (sfix_bitop): '<S1122>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1122>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1122>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1132>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_L_TestNotCmpltWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)1;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)1))));
    }

    /* End of Switch: '<S1110>/Switch9' */

    /* Switch: '<S1110>/Switch2' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry3'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry4'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry2'
     *  S-Function (sfix_bitop): '<S1115>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1115>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1115>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1125>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_P_TestFailWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)512;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)512))));
    }

    /* End of Switch: '<S1110>/Switch2' */

    /* Switch: '<S1110>/Switch3' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry5'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry6'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry3'
     *  S-Function (sfix_bitop): '<S1116>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1116>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1116>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1126>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_R_TestNotCmpltWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)1024;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)1024))));
    }

    /* End of Switch: '<S1110>/Switch3' */

    /* Switch: '<S1110>/Switch4' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry7'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry8'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry4'
     *  S-Function (sfix_bitop): '<S1117>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1117>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1117>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1127>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_R_TestFailWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)2048;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)2048))));
    }

    /* End of Switch: '<S1110>/Switch4' */

    /* Switch: '<S1110>/Switch5' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry10'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry9'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry5'
     *  S-Function (sfix_bitop): '<S1118>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1118>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1118>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1128>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_N_TestNotCmpltWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)4096;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)4096))));
    }

    /* End of Switch: '<S1110>/Switch5' */

    /* Switch: '<S1110>/Switch6' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry11'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry12'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry6'
     *  S-Function (sfix_bitop): '<S1119>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1119>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1119>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1129>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_N_TestFailWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)8192;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)8192))));
    }

    /* End of Switch: '<S1110>/Switch6' */

    /* Switch: '<S1110>/Switch7' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry13'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry14'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry7'
     *  S-Function (sfix_bitop): '<S1120>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1120>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1120>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1130>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_D_TestNotCmpltWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)16384;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)16384))));
    }

    /* End of Switch: '<S1110>/Switch7' */

    /* Switch: '<S1110>/Switch1' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry1'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry2'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry8'
     *  S-Function (sfix_bitop): '<S1113>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1113>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1113>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1123>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_P_TestNotCmpltWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)256;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)256))));
    }

    /* End of Switch: '<S1110>/Switch1' */

    /* Switch: '<S1110>/Switch10' incorporates:
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry17'
     *  DataStoreRead: '<S1110>/Dsr_PID_AStrtEntry18'
     *  DataStoreWrite: '<S1110>/Dsw_PID_AStrtEntry9'
     *  S-Function (sfix_bitop): '<S1114>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1114>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1114>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1124>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_L_TestFailWrite)
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags |= (uint16)2;
    }
    else
    {
        TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags = (uint16)(~((uint16)(((uint16)
            (~TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags)) | ((uint16)2))));
    }

    /* End of Switch: '<S1110>/Switch10' */

    /* DataStoreRead: '<S1110>/DataStoreRead' */
    TRGR_ac_B.DataStoreRead_g = TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags;

    /* Outputs for Atomic SubSystem: '<S18>/TRGR_IP_NegResp' */
    /* Switch: '<S1112>/Switch7' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry13'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry14'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry7'
     *  S-Function (sfix_bitop): '<S1205>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1205>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1205>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1212>/FixPt Bitwise Operator1'
     */
    if (TRGR_ac_B.Logical5)
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)1;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)1))));
    }

    /* End of Switch: '<S1112>/Switch7' */

    /* Switch: '<S1112>/Switch1' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry1'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry2'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry1'
     *  S-Function (sfix_bitop): '<S1199>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1199>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1199>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1206>/FixPt Bitwise Operator1'
     */
    if (VeTRGR_b_DrvrReq_IP_NotRationalised)
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)2;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)2))));
    }

    /* End of Switch: '<S1112>/Switch1' */

    /* Switch: '<S1112>/Switch3' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry5'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry6'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry3'
     *  S-Function (sfix_bitop): '<S1201>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1201>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1201>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1208>/FixPt Bitwise Operator1'
     */
    if (VeTRGI_b_ShftSensFA)
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)8;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)8))));
    }

    /* End of Switch: '<S1112>/Switch3' */

    /* Switch: '<S1112>/Switch2' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry3'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry4'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry2'
     *  S-Function (sfix_bitop): '<S1200>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1200>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1200>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1207>/FixPt Bitwise Operator1'
     */
    if (VeTRGI_b_PPawlFlt_InhibitMtr)
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)4;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)4))));
    }

    /* End of Switch: '<S1112>/Switch2' */

    /* Switch: '<S1112>/Switch5' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry10'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry9'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry5'
     *  S-Function (sfix_bitop): '<S1203>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1203>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1203>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1210>/FixPt Bitwise Operator1'
     */
    if (VeTRGI_b_ShftLckFlt)
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)32;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)32))));
    }

    /* End of Switch: '<S1112>/Switch5' */

    /* Switch: '<S1112>/Switch4' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry7'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry8'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry4'
     *  Logic: '<S1112>/Logical'
     *  S-Function (sfix_bitop): '<S1202>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1202>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1202>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1209>/FixPt Bitwise Operator1'
     */
    if (tmpRead_3 || (TRGR_ac_B.VeTRGR_b_BrakeFA))
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)16;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)16))));
    }

    /* End of Switch: '<S1112>/Switch4' */

    /* Switch: '<S1112>/Switch6' incorporates:
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry11'
     *  DataStoreRead: '<S1112>/Dsr_PID_AStrtEntry12'
     *  DataStoreWrite: '<S1112>/Dsw_PID_AStrtEntry6'
     *  S-Function (sfix_bitop): '<S1204>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1204>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1204>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1211>/FixPt Bitwise Operator1'
     */
    if (TRGR_ac_B.Logical6)
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus |= (uint8)64;
    }
    else
    {
        TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus = (uint8)(~((uint8)(((uint8)(
            ~TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus)) | ((uint8)64))));
    }

    /* End of Switch: '<S1112>/Switch6' */

    /* DataStoreRead: '<S1112>/DataStoreRead' */
    TRGR_ac_B.DataStoreRead_i = TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus;

    /* End of Outputs for SubSystem: '<S18>/TRGR_IP_NegResp' */

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGO_ProcessCANOutputs'
     */
    /* Gain: '<S1104>/Gain' incorporates:
     *  Constant: '<S1100>/Calib'
     *  DataTypeConversion: '<S16>/DataTypeConversion1'
     *  Selector: '<S16>/Selector'
     *  Switch: '<S316>/Switch1'
     */
    TRGR_ac_B.Gain_m = KaTRGR_e_PRNDReq_Map[(VeTRGC_e_PRNDStat)];

    /* Selector: '<S16>/Selector1' incorporates:
     *  Constant: '<S1099>/Calib'
     *  DataTypeConversion: '<S16>/DataTypeConversion'
     *  Merge: '<S26>/Merge1'
     */
    TRGR_ac_B.Gain_g = KaTRGR_e_Gr_Map[(sint16)VeTRGC_e_VldtdTransRngStateERS];

    /* Gain: '<S1102>/Gain' */
    TRGR_ac_B.Gain_k = TRGR_ac_B.Gain_g;

    /* Gain: '<S1105>/Gain' */
    TRGR_ac_B.Gain_d = TRGR_ac_B.Gain_g;

    /* Gain: '<S1106>/Gain' */
    TRGR_ac_B.Gain_b = TRGR_ac_B.Gain_g;

    /* Switch: '<S16>/Switch1' */
    if (VeTRGC_b_SelectSpeedModeActive)
    {
        /* Switch: '<S16>/Switch1' */
        TRGR_ac_B.VeTRGR_e_CurrentGrForDisp = TRGR_ac_B.Merge;
    }
    else
    {
        /* Switch: '<S16>/Switch1' incorporates:
         *  Constant: '<S1098>/Calib'
         *  DataTypeConversion: '<S16>/DataTypeConversion'
         *  Merge: '<S26>/Merge1'
         *  Selector: '<S16>/Selector2'
         */
        TRGR_ac_B.VeTRGR_e_CurrentGrForDisp = KaTRGR_e_CurrenrGrForDisp[(sint16)
            VeTRGC_e_VldtdTransRngStateERS];
    }

    /* End of Switch: '<S16>/Switch1' */

    /* Logic: '<S1097>/AND' */
    TRGR_ac_B.AND_dd = VeTRGC_b_ShifterLocked;

    /* Logic: '<S16>/Logical1' */
    TRGR_ac_B.VeTRGR_b_ShifterNotLocked = !VeTRGC_b_ShifterLocked;

    /* S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
     *  SubSystem: '<S12>/TRGO_ProcessInternalOutputs'
     */
    /* Outport: '<Root>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  DataTypeConversion: '<S1107>/DataTypeConversion'
     *  Merge: '<S26>/Merge1'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransRngSt_Value
        (VeTRGC_e_VldtdTransRngStateERS);

    /* Outport: '<Root>/VeTRGR_g_ClusterWarnings' incorporates:
     *  DataStoreRead: '<S17>/Dsr_PID_AStrtEntry2'
     *  Gain: '<S1108>/Gain'
     */
    (void)Rte_Write_VeTRGR_g_ClusterWarnings_Value(VeTRGR_g_ClusterWarnings_DS);

    /* End of Outputs for S-Function (fcgen): '<S12>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S11>/TRGR_FUNC' */
#else

    /* Outputs for Atomic SubSystem: '<S11>/TRGR_MSG' */
    /* S-Function (fcgen): '<S13>/FcnCallGen' incorporates:
     *  SubSystem: '<S13>/Proc_IntrnlInputs'
     */
    /* Switch: '<S1221>/Switch5' incorporates:
     *  Constant: '<S1262>/Calib'
     *  Constant: '<S1263>/Calib'
     */
    if (KeTRGR_b_SRARNeutAllwdOvrd)
    {
        rtb_TmpSignalConversionAtVeSRAR_b_NeutAl = KeTRGR_b_SRARNeutAllwdOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch5' */

    /* Switch: '<S1221>/Switch15' incorporates:
     *  Constant: '<S1258>/Calib'
     *  Constant: '<S1259>/Calib'
     */
    if (KeTRGR_b_NeutAllwdOvrd)
    {
        rtb_TmpSignalConversionAtVeSSDR_b_NeutAl = KeTRGR_b_NeutAllwdOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch15' */

    /* Logic: '<S1221>/Logical5' */
    VeTRGR_b_NeutAllwd = (rtb_TmpSignalConversionAtVeSRAR_b_NeutAl &&
                          rtb_TmpSignalConversionAtVeSSDR_b_NeutAl);

    /* Switch: '<S1221>/Switch2' incorporates:
     *  Constant: '<S1267>/Calib'
     *  Constant: '<S1275>/Calib'
     *  Switch: '<S1221>/Switch4'
     */
    if (KeTRGR_b_VehicleSpdOvrd)
    {
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = KeTRGR_v_VehicleSpdOvrdVal;
    }
    else
    {
        if (rtb_TmpSignalConversionAtVeCSVR_b_VehSpd)
        {
            /* Switch: '<S1221>/Switch4' incorporates:
             *  Constant: '<S1274>/Calib'
             */
            rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = KeTRGR_v_DefaultVehSpd;
        }
    }

    /* End of Switch: '<S1221>/Switch2' */

    /* Product: '<S1221>/Product' incorporates:
     *  Constant: '<S1247>/Calib'
     */
    VeTRGR_v_VehicleSpdmph = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd *
        KeTRGR_Cf_VehSpeedKphToMph;

    /* Switch: '<S1221>/Switch31' incorporates:
     *  Constant: '<S1264>/Calib'
     *  Switch: '<S1221>/Switch19'
     */
    if (KeTRGR_b_TOSRSpdOvrd)
    {
        /* Switch: '<S1221>/Switch31' incorporates:
         *  Constant: '<S1273>/Calib'
         */
        VeTRGI_n_CSVR_rpm = KeTRGR_n_TOSRSpdOvrdVal;
    }
    else if (rtb_TmpSignalConversionAtVeVSDR_b_PrimNo)
    {
        /* Switch: '<S1221>/Switch19' incorporates:
         *  Constant: '<S1272>/Calib'
         *  Switch: '<S1221>/Switch31'
         */
        VeTRGI_n_CSVR_rpm = KeTRGR_n_DefaultTOSRSpd;
    }
    else
    {
        /* Switch: '<S1221>/Switch31' incorporates:
         *  Switch: '<S1221>/Switch19'
         */
        VeTRGI_n_CSVR_rpm = rtb_TmpSignalConversionAtVeCSVR_n_TransO;
    }

    /* End of Switch: '<S1221>/Switch31' */

    /* Switch: '<S1221>/Switch3' incorporates:
     *  Constant: '<S1265>/Calib'
     */
    if (KeTRGR_b_ValidPluginDetectedOvrd)
    {
        /* Switch: '<S1221>/Switch3' incorporates:
         *  Constant: '<S1266>/Calib'
         */
        VeTRGI_b_Valid_Plugin_MSG = KeTRGR_b_ValidPluginDetectedOvrdVal;
    }
    else
    {
        /* Switch: '<S1221>/Switch3' */
        VeTRGI_b_Valid_Plugin_MSG = rtb_TmpSignalConversionAtVeOBCR_b_ValidP;
    }

    /* End of Switch: '<S1221>/Switch3' */

    /* Switch: '<S1276>/Switch25' incorporates:
     *  Constant: '<S1292>/Calib'
     */
    if (KeTRGR_b_BrkPrssOvrd)
    {
        /* Switch: '<S1276>/Switch25' incorporates:
         *  Constant: '<S1281>/Calib'
         */
        VeTRGI_P_RawBrkPrss_MSG = KeTRGR_P_BrkPrssOvrdVal;
    }
    else
    {
        /* Switch: '<S1276>/Switch25' */
        VeTRGI_P_RawBrkPrss_MSG = rtb_TmpSignalConversionAtVeBRKR_P_BrkPrs;
    }

    /* End of Switch: '<S1276>/Switch25' */

    /* Switch: '<S1276>/Switch28' incorporates:
     *  Constant: '<S1289>/Calib'
     */
    if (KeTRGR_b_BrkPedalDscrtInptOvrd)
    {
        /* Switch: '<S1276>/Switch28' incorporates:
         *  Constant: '<S1293>/Calib'
         */
        rtb_TmpSignalConversionAtVeBRKR_e_BrkPed =
            KeTRGR_e_BrkPedalDscrtInptOvrdVal;
    }

    /* End of Switch: '<S1276>/Switch28' */

    /* Switch: '<S1276>/Switch19' incorporates:
     *  Constant: '<S1287>/Calib'
     */
    if (KeTRGR_b_BrkPedalDscrtInptFAOvrd)
    {
        /* Switch: '<S1276>/Switch19' incorporates:
         *  Constant: '<S1288>/Calib'
         */
        VeTRGI_b_BrakePedalFA = KeTRGR_b_BrkPedalDscrtInptFAOvrdVal;
    }
    else
    {
        /* Switch: '<S1276>/Switch19' */
        VeTRGI_b_BrakePedalFA = rtb_TmpSignalConversionAtVeBRKR_b_BrkPed;
    }

    /* End of Switch: '<S1276>/Switch19' */

    /* Switch: '<S1276>/Switch26' incorporates:
     *  Constant: '<S1290>/Calib'
     */
    if (KeTRGR_b_BrkPrssFAOvrd)
    {
        /* Switch: '<S1276>/Switch26' incorporates:
         *  Constant: '<S1291>/Calib'
         */
        VeTRGI_b_RawBrkPrssFA_MSG = KeTRGR_b_BrkPrssFAOvrdVal;
    }
    else
    {
        /* Switch: '<S1276>/Switch26' */
        VeTRGI_b_RawBrkPrssFA_MSG = rtb_TmpSignalConversionAtVeBRKR_b_BrkPrs;
    }

    /* End of Switch: '<S1276>/Switch26' */

    /* Switch: '<S1280>/Switch1' incorporates:
     *  Logic: '<S1276>/Logical10'
     *  Logic: '<S1276>/Logical6'
     *  Logic: '<S1276>/Logical7'
     *  Logic: '<S1276>/Logical8'
     *  Logic: '<S1276>/Logical9'
     *  Switch: '<S1280>/Switch2'
     *  Switch: '<S1280>/Switch3'
     */
    if ((VeTRGI_b_BrakePedalFA) && (!VeTRGI_b_RawBrkPrssFA_MSG))
    {
        /* Switch: '<S1280>/Switch1' incorporates:
         *  Constant: '<S1282>/Calib'
         *  RelationalOperator: '<S1276>/Comparison2'
         */
        VeTRGI_b_BrakeAppliedVer_MSG = (VeTRGI_P_RawBrkPrss_MSG >=
            KeTRGR_P_BrkPrssTh);
    }
    else if ((!VeTRGI_b_BrakePedalFA) && (VeTRGI_b_RawBrkPrssFA_MSG))
    {
        /* Switch: '<S1280>/Switch2' incorporates:
         *  Constant: '<S1278>/Constant'
         *  RelationalOperator: '<S1276>/Comparison4'
         *  Switch: '<S1276>/Switch28'
         *  Switch: '<S1280>/Switch1'
         */
        VeTRGI_b_BrakeAppliedVer_MSG = (((uint32)
            rtb_TmpSignalConversionAtVeBRKR_e_BrkPed) == CeBRKR_e_BrkApplied);
    }
    else if ((VeTRGI_b_BrakePedalFA) && (VeTRGI_b_RawBrkPrssFA_MSG))
    {
        /* Switch: '<S1280>/Switch3' incorporates:
         *  Switch: '<S1280>/Switch1'
         *  Switch: '<S1280>/Switch2'
         *  UnitDelay: '<S1276>/Unit Delay'
         */
        VeTRGI_b_BrakeAppliedVer_MSG = VeTRGI_b_BrkApplied_MSG;
    }
    else
    {
        /* Switch: '<S1280>/Switch1' incorporates:
         *  Constant: '<S1279>/Constant'
         *  RelationalOperator: '<S1276>/Comparison3'
         *  Switch: '<S1276>/Switch28'
         *  Switch: '<S1280>/Switch2'
         *  Switch: '<S1280>/Switch3'
         */
        VeTRGI_b_BrakeAppliedVer_MSG = (((uint32)
            rtb_TmpSignalConversionAtVeBRKR_e_BrkPed) == CeBRKR_e_BrkApplied);
    }

    /* End of Switch: '<S1280>/Switch1' */

    /* Switch: '<S1276>/Switch27' incorporates:
     *  Constant: '<S1285>/Calib'
     */
    if (KeTRGR_b_BrakeFAOvrd)
    {
        /* Switch: '<S1276>/Switch27' incorporates:
         *  Constant: '<S1286>/Calib'
         */
        VeTRGI_b_BrakeFA_MSG = KeTRGR_b_BrakeFAOvrdVal;
    }
    else
    {
        /* Switch: '<S1276>/Switch27' incorporates:
         *  Logic: '<S1276>/Logical11'
         */
        VeTRGI_b_BrakeFA_MSG = ((VeTRGI_b_BrakePedalFA) &&
                                (VeTRGI_b_RawBrkPrssFA_MSG));
    }

    /* End of Switch: '<S1276>/Switch27' */

    /* Switch: '<S1276>/Switch4' incorporates:
     *  Constant: '<S1283>/Calib'
     */
    if (KeTRGR_b_BrakeAppliedOvrd)
    {
        /* Switch: '<S1276>/Switch4' incorporates:
         *  Constant: '<S1284>/Calib'
         */
        VeTRGI_b_BrkApplied_MSG = KeTRGR_b_BrakeAppliedOvrdVal;
    }
    else
    {
        /* Switch: '<S1276>/Switch4' */
        VeTRGI_b_BrkApplied_MSG = VeTRGI_b_BrakeAppliedVer_MSG;
    }

    /* End of Switch: '<S1276>/Switch4' */

    /* Outputs for Atomic SubSystem: '<S1276>/Turn On Delay Sample' */
    /* Outputs for Atomic SubSystem: '<S1295>/EdgeRising' */
    /* Logic: '<S1296>/AND' incorporates:
     *  Logic: '<S1296>/OR1'
     *  UnitDelay: '<S1296>/Unit Delay'
     */
    rtb_TmpSignalConversionAtVeSSDR_b_NeutAl = ((VeTRGI_b_BrkApplied_MSG) &&
        (!TRGR_ac_DW.UnitDelay_DSTATE_im));

    /* Update for UnitDelay: '<S1296>/Unit Delay' */
    TRGR_ac_DW.UnitDelay_DSTATE_im = VeTRGI_b_BrkApplied_MSG;

    /* End of Outputs for SubSystem: '<S1295>/EdgeRising' */

    /* Switch: '<S1295>/Switch1' incorporates:
     *  Constant: '<S1294>/Calib'
     *  Constant: '<S1295>/Constant Value'
     *  Constant: '<S1295>/Constant Value1'
     *  Logic: '<S1295>/OR'
     *  Logic: '<S1295>/OR1'
     *  MinMax: '<S1295>/Minimum'
     *  Sum: '<S1295>/Summation'
     *  UnitDelay: '<S1295>/Unit Delay'
     */
    if ((!VeTRGI_b_BrkApplied_MSG) || rtb_TmpSignalConversionAtVeSSDR_b_NeutAl)
    {
        TRGR_ac_DW.UnitDelay_DSTATE_pk = 0U;
    }
    else if (KeTRGR_t_BrakeAppliedDbnc < ((uint16)(((uint32)
                TRGR_ac_DW.UnitDelay_DSTATE_pk) + 1U)))
    {
        /* MinMax: '<S1295>/Minimum' incorporates:
         *  Constant: '<S1294>/Calib'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_pk = KeTRGR_t_BrakeAppliedDbnc;
    }
    else
    {
        /* MinMax: '<S1295>/Minimum' incorporates:
         *  Constant: '<S1295>/Constant Value'
         *  Sum: '<S1295>/Summation'
         *  UnitDelay: '<S1295>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_pk = (uint16)(((uint32)
            TRGR_ac_DW.UnitDelay_DSTATE_pk) + 1U);
    }

    /* End of Switch: '<S1295>/Switch1' */
    /* End of Outputs for SubSystem: '<S1276>/Turn On Delay Sample' */
    /* End of Outputs for S-Function (fcgen): '<S13>/FcnCallGen' */
    (void)Rte_Read_VePLTR_b_ManualMode_Value((&(VeTRGI_b_ManualMd_In)));
    (void)Rte_Read_VePLTR_e_ValidatePstn_Value((&(VeTRGI_e_ESMValidatePstn_In)));
    (void)Rte_Read_VePLTR_e_RationalisedRngSt_Value(&tmpRead_7);
    (void)Rte_Read_VeTRNR_e_TCMActualEvenGear_Value((&(VeTRGI_e_EvenGear)));
    (void)Rte_Read_VeTRNR_e_ActualGear_Value((&(VeTRGI_e_ActualGear)));

    /* S-Function (fcgen): '<S13>/FcnCallGen' incorporates:
     *  SubSystem: '<S13>/Proc_IntrnlInputs'
     */
    /* Outputs for Atomic SubSystem: '<S1276>/Turn On Delay Sample' */
    /* Logic: '<S1295>/AND' incorporates:
     *  Constant: '<S1294>/Calib'
     *  Inport: '<Root>/VePLTR_b_ManualMode'
     *  Inport: '<Root>/VePLTR_e_RationalisedRngSt'
     *  Inport: '<Root>/VePLTR_e_ValidatePstn'
     *  Inport: '<Root>/VeTRNR_e_ActualGear'
     *  Inport: '<Root>/VeTRNR_e_TCMActualEvenGear'
     *  RelationalOperator: '<S1295>/Greater  Than'
     *  UnitDelay: '<S1295>/Unit Delay'
     */
    VeTRGI_b_BrkAppliedDbnc_MSG = ((VeTRGI_b_BrkApplied_MSG) &&
        (TRGR_ac_DW.UnitDelay_DSTATE_pk >= KeTRGR_t_BrakeAppliedDbnc));

    /* End of Outputs for SubSystem: '<S1276>/Turn On Delay Sample' */

    /* Switch: '<S1221>/Switch6' incorporates:
     *  Constant: '<S1251>/Calib'
     */
    if (KeTRGR_b_EPBHoldStsOvrd)
    {
        /* Switch: '<S1221>/Switch6' incorporates:
         *  Constant: '<S1269>/Calib'
         */
        VeTRGI_e_EPBHldSts = KeTRGR_e_EPBHoldStsOvrdVal;
    }
    else
    {
        /* Switch: '<S1221>/Switch6' incorporates:
         *  SignalConversion generated from: '<S4>/VePLTR_e_EPBHoldSts'
         */
        VeTRGI_e_EPBHldSts = rtb_TmpSignalConversionAtVePLTR_e_EPBHol;
    }

    /* End of Switch: '<S1221>/Switch6' */

    /* Switch: '<S1221>/Switch10' incorporates:
     *  Constant: '<S1255>/Calib'
     */
    if (KeTRGR_b_Force_To_Park)
    {
        /* Switch: '<S1221>/Switch10' incorporates:
         *  Inport: '<Root>/VePLTR_e_RationalisedRngSt'
         *  Inport: '<Root>/VePLTR_e_ValidatePstn'
         */
        VeTRGI_e_ESMValidatePstn_In = tmpRead_7;
    }

    /* End of Switch: '<S1221>/Switch10' */

    /* Switch: '<S1221>/Switch23' incorporates:
     *  Constant: '<S1260>/Calib'
     *  Constant: '<S1261>/Calib'
     */
    if (KeTRGR_b_SRARDrvAllwdOvrd)
    {
        rtb_TmpSignalConversionAtVeSRAR_b_DrvAll = KeTRGR_b_SRARDrvAllwdOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch23' */

    /* Switch: '<S1221>/Switch14' incorporates:
     *  Constant: '<S1249>/Calib'
     *  Constant: '<S1250>/Calib'
     */
    if (KeTRGR_b_DrvAllwdOvrd)
    {
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll = KeTRGR_b_DrvAllwdOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch14' */

    /* Logic: '<S1221>/Logical3' */
    VeTRGR_b_DrvAllwd = (rtb_TmpSignalConversionAtVeSRAR_b_DrvAll &&
                         rtb_TmpSignalConversionAtVeSSDR_b_DrvAll);

    /* Logic: '<S1221>/Logical' incorporates:
     *  Constant: '<S1253>/Calib'
     *  DataTypeConversion: '<S1241>/DataTypeConversion'
     *  Logic: '<S1221>/Logical1'
     *  RelationalOperator: '<S1221>/Comparison5'
     *  Switch: '<S1221>/Switch10'
     */
    VeTRGI_b_EnblNeutral = (((VeTRGI_e_ESMValidatePstn_In !=
        TRGR_ac_ConstB.DataTypeConversion) && (!VeTRGR_b_DrvAllwd)) &&
                            (KeTRGR_b_EnblNeutral));

    /* Switch: '<S1221>/Switch1' */
    if (VeTRGI_b_EnblNeutral)
    {
        /* Switch: '<S1221>/Switch1' incorporates:
         *  DataTypeConversion: '<S1242>/DataTypeConversion'
         */
        VeTRGI_e_ESMValidatePstn = TRGR_ac_ConstB.DataTypeConversion_e;
    }
    else
    {
        /* Switch: '<S1221>/Switch1' incorporates:
         *  RelationalOperator: '<S1221>/Comparison5'
         *  Switch: '<S1221>/Switch10'
         */
        VeTRGI_e_ESMValidatePstn = VeTRGI_e_ESMValidatePstn_In;
    }

    /* End of Switch: '<S1221>/Switch1' */

    /* Switch: '<S1221>/Switch' incorporates:
     *  Constant: '<S1252>/Calib'
     */
    if (KeTRGR_b_ESMTransRngStOvrd)
    {
        /* Switch: '<S1221>/Switch' incorporates:
         *  Constant: '<S1270>/Calib'
         */
        VeTRGI_e_TransDirctnSt = KeTRGR_e_ESMTransRngStOvrdVal;
    }
    else
    {
        /* Switch: '<S1221>/Switch' incorporates:
         *  Switch: '<S1221>/Switch1'
         */
        VeTRGI_e_TransDirctnSt = VeTRGI_e_ESMValidatePstn;
    }

    /* End of Switch: '<S1221>/Switch' */

    /* VariantMerge generated from: '<S11>/DrvRq_WithNSA' incorporates:
     *  DataTypeConversion: '<S1237>/DataTypeConversion'
     *  Switch: '<S1221>/Switch'
     */
    TRGR_ac_B.VeTRGR_e_ESMTransRngSt = VeTRGI_e_TransDirctnSt;

    /* Selector: '<S1221>/Selector' incorporates:
     *  Constant: '<S1246>/Calib'
     *  DataTypeConversion: '<S1221>/Data Type Conversion1'
     *  Switch: '<S1221>/Switch'
     */
    VeTRGI_e_TransShiftLeverPstn = KaTRGR_e_TransShiftLeverPstn_Map
        [(VeTRGI_e_TransDirctnSt)];

    /* Switch: '<S1221>/Switch7' incorporates:
     *  Constant: '<S1248>/Calib'
     */
    if (KeTRGR_b_ActualGearOvrd)
    {
        /* Switch: '<S1221>/Switch7' incorporates:
         *  Constant: '<S1268>/Calib'
         *  Inport: '<Root>/VeTRNR_e_ActualGear'
         */
        VeTRGI_e_ActualGear = KeTRGR_e_ActualGearOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch7' */

    /* Switch: '<S1221>/Switch8' incorporates:
     *  Constant: '<S1254>/Calib'
     */
    if (KeTRGR_b_EvenGearOvrd)
    {
        /* Switch: '<S1221>/Switch8' incorporates:
         *  Constant: '<S1271>/Calib'
         *  Inport: '<Root>/VeTRNR_e_TCMActualEvenGear'
         */
        VeTRGI_e_EvenGear = KeTRGR_e_EvenGearOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch8' */

    /* Switch: '<S1221>/Switch9' incorporates:
     *  Constant: '<S1256>/Calib'
     */
    if (KeTRGR_b_ManualModeOvrd)
    {
        /* Logic: '<S1235>/AND' incorporates:
         *  Constant: '<S1257>/Calib'
         *  Inport: '<Root>/VePLTR_b_ManualMode'
         */
        VeTRGI_b_ManualMd_In = KeTRGR_b_ManualModeOvrdVal;
    }

    /* End of Switch: '<S1221>/Switch9' */

    /* S-Function (fcgen): '<S13>/FcnCallGen' incorporates:
     *  SubSystem: '<S13>/VldtTransRngSt'
     */
    /* Logic: '<S1307>/Logical7' incorporates:
     *  Constant: '<S1339>/Constant'
     *  Logic: '<S1308>/Logical7'
     *  RelationalOperator: '<S1308>/Comparison7'
     *  Switch: '<S1221>/Switch6'
     */
    rtb_TmpSignalConversionAtVeSSDR_b_DrvAll = (((uint32)VeTRGI_e_EPBHldSts) !=
        CePLTR_e_EPBHoldSts_APPLIED);

    /* RelationalOperator: '<S1306>/Comparison9' incorporates:
     *  DataTypeConversion: '<S1309>/Data Type Conversion5'
     *  RelationalOperator: '<S1307>/Comparison9'
     *  RelationalOperator: '<S1308>/Comparison9'
     *  RelationalOperator: '<S1309>/Comparison1'
     *  RelationalOperator: '<S1309>/Comparison2'
     *  Switch: '<S1309>/Switch1'
     *  Switch: '<S1309>/Switch2'
     *  VariantMerge generated from: '<S11>/DrvRq_WithNSA'
     */
    rtb_Switch1_fp = TRGR_ac_B.VeTRGR_e_ESMTransRngSt;

    /* Abs: '<S1306>/Abs1' incorporates:
     *  Abs: '<S1307>/Abs3'
     */
    rtb_TmpSignalConversionAtVeCSVR_n_TransO = fabsf(VeTRGR_v_VehicleSpdmph);

    /* Logic: '<S1306>/Logical2' incorporates:
     *  Constant: '<S1310>/Constant'
     *  Logic: '<S1306>/Logical10'
     *  RelationalOperator: '<S1306>/Comparison9'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_DrvAll = (((uint32)rtb_Switch1_fp) !=
        CeTRGR_e_TransRangePark);

    /* Logic: '<S1306>/Logical' incorporates:
     *  Abs: '<S1306>/Abs1'
     *  Constant: '<S1311>/Constant'
     *  Constant: '<S1314>/Constant'
     *  Constant: '<S1315>/Calib'
     *  Logic: '<S1306>/Logical1'
     *  Logic: '<S1306>/Logical2'
     *  Logic: '<S1306>/Logical4'
     *  RelationalOperator: '<S1306>/Comparison1'
     *  RelationalOperator: '<S1306>/Comparison12'
     *  RelationalOperator: '<S1306>/Comparison3'
     *  RelationalOperator: '<S1308>/Comparison7'
     *  Switch: '<S1221>/Switch6'
     */
    VeTRGC_b_EPBReq_MSG = ((((rtb_TmpSignalConversionAtVeCSVR_n_TransO <
        KeTRGR_v_EPB_SpdThreshold) && ((((uint32)VeTRGI_e_EPBHldSts) !=
        CePLTR_e_EPBHoldSts_APPLIED) && (((uint32)VeTRGI_e_EPBHldSts) !=
        CePLTR_e_EPBHoldSts_APPLYING))) && (VeTRGI_b_Valid_Plugin_MSG)) &&
                           rtb_TmpSignalConversionAtVeSRAR_b_DrvAll);

    /* Outputs for Atomic SubSystem: '<S1306>/Signal Latch On With Reset2' */
    /* Logic: '<S1316>/OR1' incorporates:
     *  Logic: '<S1306>/Logical10'
     *  Logic: '<S1306>/Logical3'
     *  Logic: '<S1316>/NOT'
     *  Logic: '<S1316>/OR'
     *  UnitDelay: '<S1316>/Unit Delay'
     */
    TRGR_ac_DW.UnitDelay_DSTATE_dls = ((VeTRGC_b_EPBReq_MSG) ||
        ((rtb_TmpSignalConversionAtVeSRAR_b_DrvAll || (VeTRGI_b_Valid_Plugin_MSG))
         && (TRGR_ac_DW.UnitDelay_DSTATE_dls)));

    /* End of Outputs for SubSystem: '<S1306>/Signal Latch On With Reset2' */

    /* Switch: '<S1306>/Switch1' incorporates:
     *  UnitDelay: '<S1316>/Unit Delay'
     */
    if (TRGR_ac_DW.UnitDelay_DSTATE_dls)
    {
        /* Switch: '<S1306>/Switch1' incorporates:
         *  Constant: '<S1312>/Constant'
         */
        VeTRGC_e_EPB_Hold_Req = CeTRGR_e_EPBReq_ACTIVE;
    }
    else
    {
        /* Switch: '<S1306>/Switch1' incorporates:
         *  Constant: '<S1313>/Constant'
         */
        VeTRGC_e_EPB_Hold_Req = CeTRGR_e_EPBReq_NA;
    }

    /* End of Switch: '<S1306>/Switch1' */

    /* Outputs for Atomic SubSystem: '<S1308>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S1342>/Switch2' incorporates:
     *  Constant: '<S1338>/Constant'
     *  Logic: '<S1308>/Logical2'
     *  RelationalOperator: '<S1308>/Comparison4'
     *  Switch: '<S1306>/Switch1'
     *  Switch: '<S1342>/Switch1'
     */
    if (((uint32)VeTRGC_e_EPB_Hold_Req) != CeTRGR_e_EPBReq_ACTIVE)
    {
        /* UnitDelay: '<S1334>/Unit Delay1' incorporates:
         *  Constant: '<S1342>/Constant Value2'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = 0.0F;
    }
    else
    {
        /* UnitDelay: '<S1334>/Unit Delay1' incorporates:
         *  Constant: '<S1341>/Calib'
         *  Sum: '<S1342>/Subtraction'
         *  Switch: '<S1342>/Switch2'
         *  UnitDelay: '<S1342>/Unit Delay'
         */
        rtb_TmpSignalConversionAtVeCSVR_v_VehSpd = KeTRGR_t_dT +
            TRGR_ac_DW.UnitDelay_DSTATE;
    }

    /* End of Switch: '<S1342>/Switch2' */

    /* Switch: '<S1342>/Switch' incorporates:
     *  Constant: '<S1342>/Constant Value3'
     *  RelationalOperator: '<S1342>/Comparison1'
     *  UnitDelay: '<S1342>/Unit Delay1'
     */
    if (rtb_TmpSignalConversionAtVeCSVR_v_VehSpd < 5.0F)
    {
        TRGR_ac_DW.UnitDelay1_DSTATE = rtb_TmpSignalConversionAtVeCSVR_v_VehSpd;
    }

    /* End of Switch: '<S1342>/Switch' */

    /* Update for UnitDelay: '<S1342>/Unit Delay' incorporates:
     *  UnitDelay: '<S1342>/Unit Delay1'
     */
    TRGR_ac_DW.UnitDelay_DSTATE = TRGR_ac_DW.UnitDelay1_DSTATE;

    /* End of Outputs for SubSystem: '<S1308>/Stop_Watch_Reset_Enabled' */

    /* Logic: '<S1308>/Logical9' incorporates:
     *  Logic: '<S1318>/Logical2'
     *  Switch: '<S1307>/Switch1'
     */
    rtb_TmpSignalConversionAtVeSRAR_b_DrvAll = !VeTRGI_b_BrkAppliedDbnc_MSG;

    /* Outputs for Atomic SubSystem: '<S1308>/Stop_Watch_Reset_Enabled' */
    /* Logic: '<S1308>/Logical1' incorporates:
     *  Constant: '<S1337>/Constant'
     *  Constant: '<S1340>/Calib'
     *  Logic: '<S1308>/Logical3'
     *  Logic: '<S1308>/Logical4'
     *  Logic: '<S1308>/Logical5'
     *  Logic: '<S1308>/Logical8'
     *  Logic: '<S1308>/Logical9'
     *  MinMax: '<S1342>/MinMax'
     *  RelationalOperator: '<S1308>/Comparison5'
     *  RelationalOperator: '<S1308>/Comparison9'
     *  UnitDelay: '<S1342>/Unit Delay1'
     */
    VeTRGC_b_TXWarn2_Warn22_MSG = (((((((uint32)rtb_Switch1_fp) !=
        CeTRGR_e_TransRangePark) && (VeTRGI_b_Valid_Plugin_MSG)) &&
        rtb_TmpSignalConversionAtVeSSDR_b_DrvAll) ||
        (rtb_TmpSignalConversionAtVeSSDR_b_DrvAll && (fminf
        (TRGR_ac_DW.UnitDelay1_DSTATE, KeTRGR_t_BrkWarnDbnc) >=
        KeTRGR_t_BrkWarnDbnc))) && rtb_TmpSignalConversionAtVeSRAR_b_DrvAll);

    /* End of Outputs for SubSystem: '<S1308>/Stop_Watch_Reset_Enabled' */

    /* Switch: '<S1308>/Switch11' incorporates:
     *  DataStoreRead: '<S1308>/Dsr_PID_AStrtEntry21'
     *  DataStoreRead: '<S1308>/Dsr_PID_AStrtEntry22'
     *  DataStoreWrite: '<S1308>/Dsw_PID_AStrtEntry11'
     *  S-Function (sfix_bitop): '<S1335>/FixPt Bitwise Operator3'
     *  S-Function (sfix_bitop): '<S1335>/FixPt Bitwise Operator4'
     *  S-Function (sfix_bitop): '<S1335>/FixPt Bitwise Operator5'
     *  S-Function (sfix_bitop): '<S1336>/FixPt Bitwise Operator1'
     */
    if (VeTRGC_b_TXWarn2_Warn22_MSG)
    {
        VeTRGR_g_ClusterWarnings_DS = VeTRGR_g_ClusterWarnings_DS | 1024U;
    }
    else
    {
        VeTRGR_g_ClusterWarnings_DS = ~((~VeTRGR_g_ClusterWarnings_DS) | 1024U);
    }

    /* End of Switch: '<S1308>/Switch11' */

    /* RelationalOperator: '<S1307>/Comparison9' incorporates:
     *  Constant: '<S1319>/Constant'
     */
    VeTRGC_b_Secured_To_Shtdwn = (((uint32)rtb_Switch1_fp) ==
        CeTRGR_e_TransRangePark);

    /* Logic: '<S1317>/Logical11' incorporates:
     *  Constant: '<S1329>/Constant'
     *  Constant: '<S1330>/Constant'
     *  Constant: '<S1331>/Constant'
     *  RelationalOperator: '<S1308>/Comparison7'
     *  RelationalOperator: '<S1317>/Comparison1'
     *  RelationalOperator: '<S1317>/Comparison2'
     *  RelationalOperator: '<S1317>/Comparison4'
     *  Switch: '<S1221>/Switch6'
     */
    VeTRGC_b_EPB_NF = (((((uint32)VeTRGI_e_EPBHldSts) == CePLTR_e_EPBHoldSts_REL)
                        || (((uint32)VeTRGI_e_EPBHldSts) ==
                            CePLTR_e_EPBHoldSts_Flt_EPBRel)) || (((uint32)
                         VeTRGI_e_EPBHldSts) == CePLTR_e_EPBHoldSts_SNA));

    /* Logic: '<S1307>/Logical16' incorporates:
     *  Constant: '<S1320>/Constant'
     *  Constant: '<S1321>/Constant'
     *  Constant: '<S1322>/Constant'
     *  Constant: '<S1323>/Constant'
     *  Constant: '<S1327>/Calib'
     *  Logic: '<S1307>/Logical14'
     *  Logic: '<S1307>/Logical21'
     *  RelationalOperator: '<S1307>/Comparison10'
     *  RelationalOperator: '<S1307>/Comparison11'
     *  RelationalOperator: '<S1307>/Comparison12'
     *  RelationalOperator: '<S1307>/Comparison14'
     *  RelationalOperator: '<S1307>/Comparison5'
     *  RelationalOperator: '<S1308>/Comparison7'
     *  Switch: '<S1221>/Switch6'
     */
    VeTRGC_b_ForcePN_RND = (((VeTRGC_b_EPB_NF) || ((((((uint32)
        VeTRGI_e_EPBHldSts) == CePLTR_e_EPBHoldSts_APPLIED) || (((uint32)
        VeTRGI_e_EPBHldSts) == CePLTR_e_EPBHoldSts_APPLYING)) || (((uint32)
        VeTRGI_e_EPBHldSts) == CePLTR_e_EPBHoldSts_ReClamping)) || (((uint32)
        VeTRGI_e_EPBHldSts) == CePLTR_e_EPBHoldSts_Flt_EPBAppl))) &&
                            (rtb_TmpSignalConversionAtVeCSVR_n_TransO <
        KeTRGR_v_EPB_SpdThreshold));

    /* Logic: '<S1307>/Logical7' incorporates:
     *  Logic: '<S1307>/Logical4'
     */
    rtb_TmpSignalConversionAtVeSSDR_b_DrvAll = ((VeTRGI_b_Valid_Plugin_MSG) || (
        !VeTRGR_b_NeutAllwd));

    /* Switch: '<S1307>/Switch3' incorporates:
     *  Abs: '<S1307>/Abs4'
     *  Constant: '<S1325>/Calib'
     *  Constant: '<S1326>/Calib'
     *  RelationalOperator: '<S1307>/Comparison15'
     *  Switch: '<S1307>/Switch4'
     */
    if (KeTRGR_b_Force_To_Park)
    {
        rtb_Logical1_hh = (fabsf(VeTRGI_n_CSVR_rpm) <
                           KeTRGR_n_TOSR_Spd_ParkThreshold);
    }
    else
    {
        rtb_Logical1_hh = ((VeTRGC_b_Secured_To_Shtdwn) || (VeTRGC_b_ForcePN_RND));
    }

    /* End of Switch: '<S1307>/Switch3' */

    /* Logic: '<S1307>/Logical22' incorporates:
     *  Constant: '<S1324>/Calib'
     */
    VeTRGC_b_Intermed_ForcePN = (((KeTRGR_b_EnblAutoPark_Plugged_In) &&
        rtb_Logical1_hh) && rtb_TmpSignalConversionAtVeSSDR_b_DrvAll);

    /* Outputs for Atomic SubSystem: '<S1318>/Stop_Watch_Reset_Enabled' */
    /* Switch: '<S1334>/Switch2' incorporates:
     *  Logic: '<S1318>/Logical3'
     *  Switch: '<S1334>/Switch1'
     */
    if (!VeTRGC_b_Intermed_ForcePN)
    {
        /* Switch: '<S1334>/Switch1' incorporates:
         *  Constant: '<S1334>/Constant Value2'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_c = 0.0F;
    }
    else
    {
        /* Switch: '<S1334>/Switch1' incorporates:
         *  Constant: '<S1333>/Calib'
         *  Sum: '<S1334>/Subtraction'
         *  Switch: '<S1334>/Switch2'
         *  UnitDelay: '<S1334>/Unit Delay'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_c += KeTRGR_t_dT;
    }

    /* End of Switch: '<S1334>/Switch2' */

    /* Switch: '<S1334>/Switch' incorporates:
     *  Constant: '<S1334>/Constant Value3'
     *  RelationalOperator: '<S1334>/Comparison1'
     */
    if (TRGR_ac_DW.UnitDelay_DSTATE_c >= 5.0F)
    {
        /* Switch: '<S1334>/Switch' incorporates:
         *  UnitDelay: '<S1334>/Unit Delay1'
         */
        TRGR_ac_DW.UnitDelay_DSTATE_c = TRGR_ac_DW.UnitDelay1_DSTATE_b;
    }

    /* End of Switch: '<S1334>/Switch' */

    /* Update for UnitDelay: '<S1334>/Unit Delay1' */
    TRGR_ac_DW.UnitDelay1_DSTATE_b = TRGR_ac_DW.UnitDelay_DSTATE_c;

    /* End of Outputs for SubSystem: '<S1318>/Stop_Watch_Reset_Enabled' */

    /* Switch: '<S1307>/Switch1' incorporates:
     *  Constant: '<S1325>/Calib'
     *  Constant: '<S1332>/Calib'
     *  Logic: '<S1307>/Logical2'
     *  Logic: '<S1307>/Logical3'
     *  Logic: '<S1318>/Logical11'
     *  Logic: '<S1318>/Logical5'
     *  Logic: '<S1318>/Logical7'
     *  MinMax: '<S1334>/MinMax'
     *  RelationalOperator: '<S1318>/Comparison8'
     */
    if (((!KeTRGR_b_Force_To_Park) && (VeTRGC_b_EPB_NF)) &&
            (VeTRGC_b_Secured_To_Shtdwn))
    {
        /* Outputs for Atomic SubSystem: '<S1318>/Stop_Watch_Reset_Enabled' */
        rtb_Logical1_hh = (((VeTRGI_b_BrkAppliedDbnc_MSG) &&
                            (VeTRGC_b_Intermed_ForcePN)) ||
                           (rtb_TmpSignalConversionAtVeSRAR_b_DrvAll && (fminf
                             (TRGR_ac_DW.UnitDelay_DSTATE_c, KeTRGR_t_EPBFltDbnc)
                             >= KeTRGR_t_EPBFltDbnc)));

        /* End of Outputs for SubSystem: '<S1318>/Stop_Watch_Reset_Enabled' */
    }
    else
    {
        rtb_Logical1_hh = VeTRGC_b_Intermed_ForcePN;
    }

    /* Outputs for Atomic SubSystem: '<S1307>/Signal Latch On With Reset1' */
    /* Logic: '<S1328>/OR1' incorporates:
     *  Logic: '<S1307>/Logical1'
     *  Logic: '<S1307>/Logical5'
     *  Logic: '<S1328>/NOT'
     *  Logic: '<S1328>/OR'
     *  UnitDelay: '<S1328>/Unit Delay'
     */
    VeTRGR_b_Force_P_N = (rtb_Logical1_hh || (((!VeTRGC_b_Secured_To_Shtdwn) ||
                            rtb_TmpSignalConversionAtVeSSDR_b_DrvAll) &&
                           (VeTRGR_b_Force_P_N)));

    /* End of Outputs for SubSystem: '<S1307>/Signal Latch On With Reset1' */

    /* Switch: '<S1309>/Switch2' incorporates:
     *  Constant: '<S1344>/Constant'
     *  Constant: '<S1345>/Constant'
     *  RelationalOperator: '<S1309>/Comparison1'
     *  RelationalOperator: '<S1309>/Comparison2'
     *  Switch: '<S1309>/Switch1'
     */
    if (((uint32)rtb_Switch1_fp) == CeTRGR_e_TransRangeDrive)
    {
        /* Switch: '<S1309>/Switch4' incorporates:
         *  DataTypeConversion: '<S1309>/Data Type Conversion1'
         *  Switch: '<S1221>/Switch7'
         */
        rtb_Switch_hg = (sint16)VeTRGI_e_ActualGear;

        /* Switch: '<S1309>/Switch4' incorporates:
         *  DataTypeConversion: '<S1309>/Data Type Conversion1'
         *  RelationalOperator: '<S1309>/Comparison4'
         *  Switch: '<S1221>/Switch7'
         */
        if (((sint32)VeTRGI_e_ActualGear) == 0)
        {
            /* Switch: '<S1309>/Switch4' incorporates:
             *  DataTypeConversion: '<S1309>/Data Type Conversion'
             *  Switch: '<S1221>/Switch8'
             */
            rtb_Switch_hg = (sint16)VeTRGI_e_EvenGear;
        }

        /* End of Switch: '<S1309>/Switch4' */

        /* Switch: '<S1309>/Switch2' incorporates:
         *  Constant: '<S1346>/Calib'
         *  Selector: '<S1309>/Selector3'
         */
        VeTRGC_e_ShftRngSt_AEMD = KaTRGR_e_AEMD_Map[(rtb_Switch_hg)];
    }
    else if (((uint32)rtb_Switch1_fp) == CeTRGR_e_TransRangeIllegal)
    {
        /* Switch: '<S1309>/Switch1' incorporates:
         *  Constant: '<S1309>/Constant'
         *  Switch: '<S1309>/Switch2'
         */
        VeTRGC_e_ShftRngSt_AEMD = 15;
    }
    else
    {
        /* Switch: '<S1309>/Switch2' incorporates:
         *  Switch: '<S1309>/Switch1'
         */
        VeTRGC_e_ShftRngSt_AEMD = rtb_Switch1_fp;
    }

    /* S-Function (fcgen): '<S13>/FcnCallGen' incorporates:
     *  SubSystem: '<S13>/Proc_CANOutputs'
     */
    /* Outport: '<Root>/VeTRGR_e_TransDirctnSt' incorporates:
     *  DataTypeConversion: '<S1228>/DataTypeConversion'
     *  DataTypeConversion: '<S1236>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_TransDirctnSt_Value(VeTRGI_e_TransDirctnSt);

    /* DataTypeConversion: '<S1229>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S1236>/DataTypeConversion'
     */
    TRGR_ac_B.DataTypeConversion_d = VeTRGI_e_TransDirctnSt;

    /* DataTypeConversion: '<S1231>/DataTypeConversion' incorporates:
     *  Constant: '<S1233>/Calib'
     *  DataTypeConversion: '<S1220>/Data Type Conversion'
     *  DataTypeConversion: '<S1236>/DataTypeConversion'
     *  Selector: '<S1220>/Selector'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransShiftRngSt_Value
        ((TeTRGR_e_TransRangeState)KaTRGR_e_ShftDisp[(VeTRGI_e_TransDirctnSt)]);

    /* DataTypeConversion: '<S1232>/DataTypeConversion' incorporates:
     *  DataTypeConversion: '<S1236>/DataTypeConversion'
     */
    TRGR_ac_B.DataTypeConversion_p = VeTRGI_e_TransDirctnSt;

    /* DataTypeConversion: '<S1220>/Data Type Conversion1' incorporates:
     *  Constant: '<S1227>/Constant'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransShiftDisp_Value
        (CeTRGR_e_NoSelectionAvailable);

    /* Logic: '<S1224>/AND' incorporates:
     *  Constant: '<S1220>/Constant Value'
     */
    TRGR_ac_B.AND_d = false;

    /* Outport: '<Root>/VeTRGR_e_TransShiftLeverPstn' incorporates:
     *  DataTypeConversion: '<S1220>/Data Type Conversion2'
     */
    (void)Rte_Write_VeTRGR_e_TransShiftLeverPstn_Value
        (VeTRGI_e_TransShiftLeverPstn);

    /* Outport: '<Root>/VeTRGR_b_DisableDrvAllwd' incorporates:
     *  Constant: '<S1220>/Constant Value2'
     *  Logic: '<S1225>/AND'
     */
    (void)Rte_Write_VeTRGR_b_DisableDrvAllwd_Value(false);

    /* Outport: '<Root>/VeTRGR_e_EPB_Hold_Req' incorporates:
     *  DataTypeConversion: '<S1230>/DataTypeConversion'
     *  Switch: '<S1306>/Switch1'
     */
    (void)Rte_Write_VeTRGR_e_EPB_Hold_Req_Value(VeTRGC_e_EPB_Hold_Req);

    /* Logic: '<S1226>/AND' */
    TRGR_ac_B.AND_ae = VeTRGR_b_Force_P_N;

    /* Gain: '<S1234>/Gain' */
    TRGR_ac_B.Gain = VeTRGC_e_ShftRngSt_AEMD;

    /* S-Function (fcgen): '<S13>/FcnCallGen' incorporates:
     *  SubSystem: '<S13>/Proc_IntrnlOutputs'
     */
    /* Outport: '<Root>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  DataTypeConversion: '<S1302>/DataTypeConversion'
     *  VariantMerge generated from: '<S11>/DrvRq_WithNSA'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransRngSt_Value
        (TRGR_ac_B.VeTRGR_e_ESMTransRngSt);

    /* Outport: '<Root>/VeTRGR_b_Secured_To_Shtdwn' incorporates:
     *  Gain: '<S1305>/Gain'
     */
    (void)Rte_Write_VeTRGR_b_Secured_To_Shtdwn_Value(VeTRGC_b_Secured_To_Shtdwn);

    /* SignalConversion: '<S1222>/SignalConversion' */
    rtb_Logical4_pa_0[0] = TRGR_ac_ConstB.ConstantValue5;
    rtb_Logical4_pa_0[1] = TRGR_ac_ConstB.ConstantValue3;
    rtb_Logical4_pa_0[2] = TRGR_ac_ConstB.ConstantValue4;
    rtb_Logical4_pa_0[3] = TRGR_ac_ConstB.ConstantValue6;
    rtb_Logical4_pa_0[4] = TRGR_ac_ConstB.ConstantValue7;
    rtb_Logical4_pa_0[5] = TRGR_ac_ConstB.ConstantValue8;
    rtb_Logical4_pa_0[6] = TRGR_ac_ConstB.ConstantValue9;

    /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
     *  SignalConversion: '<S1222>/SignalConversion'
     */
    (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value(rtb_Logical4_pa_0);

    /* Outport: '<Root>/VeTRGR_e_PPawlCmnd' incorporates:
     *  Constant: '<S1301>/Constant'
     *  DataTypeConversion: '<S1303>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_PPawlCmnd_Value(CeTRGR_e_PPawlIdle);

    /* Outport: '<Root>/VeTRGR_b_HCPReset' incorporates:
     *  Constant: '<S1222>/Constant Value2'
     *  Logic: '<S1297>/AND'
     */
    (void)Rte_Write_VeTRGR_b_HCPReset_Value(false);

    /* Outport: '<Root>/VeTRGR_g_ClusterWarnings' incorporates:
     *  DataStoreRead: '<S1222>/Dsr_PID_AStrtEntry2'
     *  Gain: '<S1304>/Gain'
     */
    (void)Rte_Write_VeTRGR_g_ClusterWarnings_Value(VeTRGR_g_ClusterWarnings_DS);

    /* Logic: '<S1300>/AND' */
    TRGR_ac_B.AND_a = VeTRGI_b_ManualMd_In;

    /* Logic: '<S1298>/AND' */
    TRGR_ac_B.VeTRGR_b_BrkApplied = VeTRGI_b_BrkAppliedDbnc_MSG;

    /* Logic: '<S1299>/AND' */
    TRGR_ac_B.VeTRGR_b_BrakeFA = VeTRGI_b_BrakeFA_MSG;

    /* End of Outputs for S-Function (fcgen): '<S13>/FcnCallGen' */
    /* End of Outputs for SubSystem: '<S11>/TRGR_MSG' */
#endif

    /* End of SignalConversion generated from: '<S4>/VePLTR_b_Prmry_TransShiftPstnFA' */
    /* End of Outputs for SubSystem: '<S4>/TRGR_Merged' */

    /* SignalConversion generated from: '<S4>/ADAS_Allowed' incorporates:
     *  SignalConversion generated from: '<S4>/ArbPRNDReq'
     *  SignalConversion generated from: '<S4>/AutoPark_DAI'
     *  SignalConversion generated from: '<S4>/AutoPosCorrMdReq'
     *  SignalConversion generated from: '<S4>/BlinkReq'
     */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* Outport: '<Root>/VeTRGR_b_ADAS_Allowed' */
    (void)Rte_Write_VeTRGR_b_ADAS_Allowed_Value(TRGR_ac_B.VeTRGR_b_ADAS_Allowed);

    /* Outport: '<Root>/VeTRGR_e_ArbPRNDReq' incorporates:
     *  DataTypeConversion: '<S692>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_ArbPRNDReq_Value(TRGR_ac_B.DataTypeConversion_m);

    /* Outport: '<Root>/VeTRGR_b_AutoPark_DAI' */
    (void)Rte_Write_VeTRGR_b_AutoPark_DAI_Value(TRGR_ac_B.VeTRGR_b_AutoPark_DAI);

    /* Outport: '<Root>/VeTRGR_e_AutoPosCorrMdReq' incorporates:
     *  DataTypeConversion: '<S37>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_AutoPosCorrMdReq_Value
        (TRGR_ac_B.DataTypeConversion_o);

    /* Outport: '<Root>/VeTRGR_e_PRNDLBlink' incorporates:
     *  SignalConversion: '<S14>/Signal Conversion'
     */
    (void)Rte_Write_VeTRGR_e_PRNDLBlink_Value(TRGR_ac_B.SignalConversion);

#endif

    /* End of SignalConversion generated from: '<S4>/ADAS_Allowed' */

    /* Outport: '<Root>/VeTRGR_b_BrakeFA' incorporates:
     *  SignalConversion generated from: '<S4>/BrakeFA'
     */
    (void)Rte_Write_VeTRGR_b_BrakeFA_Value(TRGR_ac_B.VeTRGR_b_BrakeFA);

    /* Outport: '<Root>/VeTRGR_b_BrkApplied' incorporates:
     *  SignalConversion generated from: '<S4>/BrakeSt'
     */
    (void)Rte_Write_VeTRGR_b_BrkApplied_Value(TRGR_ac_B.VeTRGR_b_BrkApplied);

    /* SignalConversion generated from: '<S4>/Braking_Mode_Indication_Sts' incorporates:
     *  SignalConversion generated from: '<S4>/Braking_Mode_Sts'
     *  SignalConversion generated from: '<S4>/CANC_TransShiftPstn'
     *  SignalConversion generated from: '<S4>/CANC_TransShiftPstnFA'
     *  SignalConversion generated from: '<S4>/CrankEnabled'
     */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* Outport: '<Root>/VeTRGR_e_Braking_Mode_Indication_Sts' */
    (void)Rte_Write_VeTRGR_e_Braking_Mode_Indication_Sts_Value
        (TRGR_ac_B.VeTRGR_e_Braking_Mode_Indication_Sts);

    /* Outport: '<Root>/VeTRGR_e_Braking_Mode_Sts' */
    (void)Rte_Write_VeTRGR_e_Braking_Mode_Sts_Value
        (TRGR_ac_B.VeTRGR_e_Braking_Mode_Sts);

    /* Outport: '<Root>/VeTRGR_e_CANC_TransShiftPstn' incorporates:
     *  DataTypeConversion: '<S911>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_CANC_TransShiftPstn_Value
        (TRGR_ac_B.DataTypeConversion_i);

    /* Outport: '<Root>/VeTRGR_b_CANC_TransShiftPstnFA' */
    (void)Rte_Write_VeTRGR_b_CANC_TransShiftPstnFA_Value(TRGR_ac_B.AND_n1);

    /* Outport: '<Root>/VeTRGR_b_CrankEnabled' */
    (void)Rte_Write_VeTRGR_b_CrankEnabled_Value(TRGR_ac_B.AND_e5);

#endif

    /* End of SignalConversion generated from: '<S4>/Braking_Mode_Indication_Sts' */

    /* Outport: '<Root>/VeTRGR_e_ESMTransRngSt' incorporates:
     *  SignalConversion generated from: '<S4>/DrvRq_WithNSA'
     *  VariantMerge generated from: '<S11>/DrvRq_WithNSA'
     */
    (void)Rte_Write_VeTRGR_e_ESMTransRngSt_Value
        (TRGR_ac_B.VeTRGR_e_ESMTransRngSt);

    /* SignalConversion generated from: '<S4>/EPBApplyDisp' incorporates:
     *  SignalConversion generated from: '<S4>/EngSt_Enbl_Rq'
     *  SignalConversion generated from: '<S4>/GatedParkSWFlt'
     *  SignalConversion generated from: '<S4>/GatedParkSw'
     *  SignalConversion generated from: '<S4>/GearIndSts'
     *  SignalConversion generated from: '<S4>/LatchShftrLockN'
     *  SignalConversion generated from: '<S4>/LatchShftrLockP'
     *  SignalConversion generated from: '<S4>/LatchShftrRBlock'
     *  SignalConversion generated from: '<S4>/NeutralLock'
     *  SignalConversion generated from: '<S4>/OvrdToNeutral'
     *  SignalConversion generated from: '<S4>/OvrdToParkLatch'
     *  SignalConversion generated from: '<S4>/PRND_DebugSt'
     *  SignalConversion generated from: '<S4>/ParkSts'
     *  SignalConversion generated from: '<S4>/ParkWithSpd'
     *  SignalConversion generated from: '<S4>/ParkingFailSts'
     *  SignalConversion generated from: '<S4>/R_Shift_Block'
     *  SignalConversion generated from: '<S4>/ReadyToPark'
     *  SignalConversion generated from: '<S4>/ReverseSts'
     *  SignalConversion generated from: '<S4>/Rjct_D'
     *  SignalConversion generated from: '<S4>/Rjct_R'
     *  SignalConversion generated from: '<S4>/TX_Fault'
     *  SignalConversion generated from: '<S4>/TransShiftPstn'
     *  SignalConversion generated from: '<S4>/TransShiftPstnFA'
     *  SignalConversion generated from: '<S4>/TransmissionFailSts'
     *  SignalConversion generated from: '<S4>/TxFaultSNA'
     *  SignalConversion generated from: '<S4>/UnexpRst'
     *  SignalConversion generated from: '<S4>/VeTRGR_b_ShifterLocked'
     *  SignalConversion generated from: '<S4>/VeTRGR_b_ShifterNotLocked'
     *  SignalConversion generated from: '<S4>/VeTRGR_d_IP_PRNDLTestFlags'
     *  SignalConversion generated from: '<S4>/VeTRGR_e_CurrentGear'
     *  SignalConversion generated from: '<S4>/VeTRGR_e_CurrentGrForDisp'
     *  SignalConversion generated from: '<S4>/VeTRGR_e_Gr'
     *  SignalConversion generated from: '<S4>/VeTRGR_e_Gr_Target'
     *  SignalConversion generated from: '<S4>/VeTRGR_e_PRNDLReq'
     *  SignalConversion generated from: '<S4>/VeTRGR_e_TargetGear'
     *  SignalConversion generated from: '<S4>/VeTRGR_y_PRNDLTestFailStatus'
     *  SignalConversion generated from: '<S4>/b_Force_Park_Neutral'
     *  SignalConversion generated from: '<S4>/b_ManualMode'
     *  SignalConversion generated from: '<S4>/b_TransDirctnStFA'
     *  SignalConversion generated from: '<S4>/e_HCP_Honored_Pstn'
     *  SignalConversion generated from: '<S4>/e_ShftRngSt_AEMD'
     *  SignalConversion generated from: '<S4>/e_TransShiftPstn'
     */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* Outport: '<Root>/VeTRGR_b_EPBApplyDisp' */
    (void)Rte_Write_VeTRGR_b_EPBApplyDisp_Value(TRGR_ac_B.VeTRGR_b_EPBApplyDisp);

    /* Outport: '<Root>/VeTRGR_b_EngSt_Enbl_Rq' */
    (void)Rte_Write_VeTRGR_b_EngSt_Enbl_Rq_Value(TRGR_ac_B.AND_l);

    /* Outport: '<Root>/VeTRGR_y_GatedParkSWFlt' */
    (void)Rte_Write_VeTRGR_y_GatedParkSWFlt_Value
        (TRGR_ac_B.VeTRGR_y_GatedParkSWFlt);

    /* Outport: '<Root>/VeTRGR_b_GatedParkSw' */
    (void)Rte_Write_VeTRGR_b_GatedParkSw_Value(TRGR_ac_B.AND_iq);

    /* Outport: '<Root>/VeTRGR_b_GearIndicationSts' */
    (void)Rte_Write_VeTRGR_b_GearIndicationSts_Value(TRGR_ac_B.AND_no);

    /* Outport: '<Root>/VeTRGR_b_LatchShftrLockN' */
    (void)Rte_Write_VeTRGR_b_LatchShftrLockN_Value(TRGR_ac_B.AND_lq);

    /* Outport: '<Root>/VeTRGR_b_LatchShftrLockP' */
    (void)Rte_Write_VeTRGR_b_LatchShftrLockP_Value(TRGR_ac_B.AND_e);

    /* Outport: '<Root>/VeTRGR_b_LatchShftrRBlock' */
    (void)Rte_Write_VeTRGR_b_LatchShftrRBlock_Value(TRGR_ac_B.AND_ju);

    /* Outport: '<Root>/VeTRGR_b_ShiftLockNCompleted' */
    (void)Rte_Write_VeTRGR_b_ShiftLockNCompleted_Value(TRGR_ac_B.AND_j);

    /* Outport: '<Root>/VeTRGR_b_OvrdToNeutral' incorporates:
     *  UnitDelay: '<S14>/UnitDelay4'
     */
    (void)Rte_Write_VeTRGR_b_OvrdToNeutral_Value(TRGR_ac_DW.UnitDelay4_DSTATE);

    /* Outport: '<Root>/VeTRGR_b_OvrdToParkLatch' incorporates:
     *  UnitDelay: '<S14>/UnitDelay1'
     */
    (void)Rte_Write_VeTRGR_b_OvrdToParkLatch_Value
        (TRGR_ac_DW.UnitDelay1_DSTATE_b5);

    /* Outport: '<Root>/VeTRGR_e_PRND_DebugSt' incorporates:
     *  DataTypeConversion: '<S781>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_PRND_DebugSt_Value(TRGR_ac_B.DataTypeConversion_b);

    /* Outport: '<Root>/VeTRGR_b_ParkingSts' */
    (void)Rte_Write_VeTRGR_b_ParkingSts_Value(TRGR_ac_B.AND_ew);

    /* Outport: '<Root>/VeTRGR_b_ParkWithSpd' */
    (void)Rte_Write_VeTRGR_b_ParkWithSpd_Value(TRGR_ac_B.VeTRGR_b_ParkWithSpd);

    /* Outport: '<Root>/VeTRGR_b_ParkingFailSts' */
    (void)Rte_Write_VeTRGR_b_ParkingFailSts_Value(TRGR_ac_B.AND_g);

    /* Outport: '<Root>/VeTRGR_b_R_Shift_Block' */
    (void)Rte_Write_VeTRGR_b_R_Shift_Block_Value(TRGR_ac_B.AND_o);

    /* Outport: '<Root>/VeTRGR_b_ReadyToPark' */
    (void)Rte_Write_VeTRGR_b_ReadyToPark_Value(TRGR_ac_B.VeTRGR_b_ReadyToPark);

    /* Outport: '<Root>/VeTRGR_e_ReverseSts' incorporates:
     *  DataTypeConversion: '<S885>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_ReverseSts_Value(TRGR_ac_B.DataTypeConversion_j);

    /* Outport: '<Root>/VeTRGR_b_Reject_D' */
    (void)Rte_Write_VeTRGR_b_Reject_D_Value(TRGR_ac_B.VeTRGR_b_Reject_D);

    /* Outport: '<Root>/VeTRGR_b_Reject_R' */
    (void)Rte_Write_VeTRGR_b_Reject_R_Value(TRGR_ac_B.VeTRGR_b_Reject_R);

    /* Outport: '<Root>/VeTRGR_e_TXFault' incorporates:
     *  DataTypeConversion: '<S814>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_TXFault_Value(TRGR_ac_B.DataTypeConversion_h);

    /* Outport: '<Root>/VeTRGR_e_DPT_TransShiftPstn' incorporates:
     *  DataTypeConversion: '<S912>/DataTypeConversion'
     */
    (void)Rte_Write_VeTRGR_e_DPT_TransShiftPstn_Value
        (TRGR_ac_B.DataTypeConversion_df);

    /* Outport: '<Root>/VeTRGR_b_DPT_TransShiftPstnFA' */
    (void)Rte_Write_VeTRGR_b_DPT_TransShiftPstnFA_Value(TRGR_ac_B.AND_gw);

    /* Outport: '<Root>/VeTRGR_b_TransmissionFailSts' */
    (void)Rte_Write_VeTRGR_b_TransmissionFailSts_Value
        (TRGR_ac_B.VeTRGR_b_TransmissionFailSts);

    /* Outport: '<Root>/VeTRGR_b_TxFaultSNA' */
    (void)Rte_Write_VeTRGR_b_TxFaultSNA_Value(TRGR_ac_B.AND_d0);

    /* Outport: '<Root>/VeTRGR_b_UnexpRst' */
    (void)Rte_Write_VeTRGR_b_UnexpRst_Value(TRGR_ac_B.Switch1_p);

    /* Outport: '<Root>/VeTRGR_b_ShifterLocked' */
    (void)Rte_Write_VeTRGR_b_ShifterLocked_Value(TRGR_ac_B.AND_dd);

    /* Outport: '<Root>/VeTRGR_b_ShifterNotLocked' */
    (void)Rte_Write_VeTRGR_b_ShifterNotLocked_Value
        (TRGR_ac_B.VeTRGR_b_ShifterNotLocked);

    /* Outport: '<Root>/VeTRGR_d_IP_PRNDLTestFlags' */
    (void)Rte_Write_VeTRGR_d_IP_PRNDLTestFlags_Value(TRGR_ac_B.DataStoreRead_g);

    /* Outport: '<Root>/VeTRGR_e_CurrentGear' */
    (void)Rte_Write_VeTRGR_e_CurrentGear_Value(TRGR_ac_B.Gain_k);

    /* Outport: '<Root>/VeTRGR_e_CurrentGrForDisp' */
    (void)Rte_Write_VeTRGR_e_CurrentGrForDisp_Value
        (TRGR_ac_B.VeTRGR_e_CurrentGrForDisp);

    /* Outport: '<Root>/VeTRGR_e_Gr' */
    (void)Rte_Write_VeTRGR_e_Gr_Value(TRGR_ac_B.Gain_d);

    /* Outport: '<Root>/VeTRGR_e_Gr_Target' */
    (void)Rte_Write_VeTRGR_e_Gr_Target_Value(TRGR_ac_B.Gain_b);

    /* Outport: '<Root>/VeTRGR_e_PRNDLReq' */
    (void)Rte_Write_VeTRGR_e_PRNDLReq_Value(TRGR_ac_B.Gain_m);

    /* Outport: '<Root>/VeTRGR_e_TargetGear' */
    (void)Rte_Write_VeTRGR_e_TargetGear_Value(TRGR_ac_B.Gain_g);

    /* Outport: '<Root>/VeTRGR_y_PRNDLTestFailStatus' */
    (void)Rte_Write_VeTRGR_y_PRNDLTestFailStatus_Value(TRGR_ac_B.DataStoreRead_i);

#else

    /* Outport: '<Root>/VeTRGR_b_Force_Park_Neutral' incorporates:
     *  SignalConversion generated from: '<S4>/b_Force_Park_Neutral'
     */
    (void)Rte_Write_VeTRGR_b_Force_Park_Neutral_Value(TRGR_ac_B.AND_ae);

    /* Outport: '<Root>/VeTRGR_b_ManualMode' incorporates:
     *  SignalConversion generated from: '<S4>/b_ManualMode'
     */
    (void)Rte_Write_VeTRGR_b_ManualMode_Value(TRGR_ac_B.AND_a);

    /* Outport: '<Root>/VeTRGR_b_TransDirctnStFA' incorporates:
     *  SignalConversion generated from: '<S4>/b_TransDirctnStFA'
     */
    (void)Rte_Write_VeTRGR_b_TransDirctnStFA_Value(TRGR_ac_B.AND_d);

    /* Outport: '<Root>/VeTRGR_e_HCP_Honored_Pstn' incorporates:
     *  DataTypeConversion: '<S1232>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/e_HCP_Honored_Pstn'
     */
    (void)Rte_Write_VeTRGR_e_HCP_Honored_Pstn_Value
        (TRGR_ac_B.DataTypeConversion_p);

    /* Outport: '<Root>/VeTRGR_e_ShftRngSt_AEMD' incorporates:
     *  SignalConversion generated from: '<S4>/e_ShftRngSt_AEMD'
     */
    (void)Rte_Write_VeTRGR_e_ShftRngSt_AEMD_Value(TRGR_ac_B.Gain);

    /* Outport: '<Root>/VeTRGR_e_TransShiftPstn' incorporates:
     *  DataTypeConversion: '<S1229>/DataTypeConversion'
     *  SignalConversion generated from: '<S4>/e_TransShiftPstn'
     */
    (void)Rte_Write_VeTRGR_e_TransShiftPstn_Value(TRGR_ac_B.DataTypeConversion_d);

#endif

    /* End of SignalConversion generated from: '<S4>/EPBApplyDisp' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

    /* Outport: '<Root>/AeTRGR_y_PwrDwnSts_Strimm_out' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    (void)Rte_Write_AeTRGR_y_PwrDwnSts_AeTRGR_y_PwrDwnSts
        (TRGR_ac_B.PwrDwnSts_EEPROM.VeTRGR_e_PwrDwnStat);

#endif

    /* End of Outport: '<Root>/AeTRGR_y_PwrDwnSts_Strimm_out' */
}

/* Output function */
FUNC(void, TRGR_CODE) DIDWrite_RWD2800_IPEEPRNDLTstFlg(void)
{
    /* RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD2800_IPEEPRNDLTstFlg' incorporates:
     *  SubSystem: '<Root>/Poke_DID_RWD2800_IPEEPRNDLTstFlg_DidWrite'
     */
    /* DataStoreWrite: '<S1>/DataStoreWrite' incorporates:
     *  Inport: '<Root>/VeDCAB_d_IP_PRNDLTestFlags_DidWrite'
     */
    (void)Rte_Read_VeDCAB_d_IP_PRNDLTestFlags_DidWrite_Value
        (&TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags);

    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/DIDWrite_RWD2800_IPEEPRNDLTstFlg' */
}

/* Output function */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

FUNC(void, TRGR_CODE) TRGR_PwrOff(void)
{

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
    /* Outputs for Function Call SubSystem: '<Root>/TRGR_FUNC_PwrOff' */
    /* Outport: '<Root>/BeTRGR_d_IP_PRNDLTestFlags_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/BeTRGR_d_IP_PRNDLTestFlags'
     */
    (void)Rte_Write_BeTRGR_d_IP_PRNDLTestFlags_BeTRGR_d_IP_PRNDLTestFlags
        (TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags);

    /* Outport: '<Root>/NeTRGR_y_IP_PRNDLTestFailStatus_PM_Out' incorporates:
     *  DataStoreRead: '<S2>/NeTRGR_y_IP_PRNDLTestFailStatus'
     */
    (void)
        Rte_Write_NeTRGR_y_IP_PRNDLTestFailStatus_NeTRGR_y_IP_PRNDLTestFailStatus
        (TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus);

    /* End of Outputs for SubSystem: '<Root>/TRGR_FUNC_PwrOff' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOff' */
#endif

}

#endif

/* Output function */
FUNC(void, TRGR_CODE) TRGR_PwrOn(void)
{
    sint32 i;

    /* RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
     *  SubSystem: '<Root>/TRGR_FUNC_PwrOn'
     */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* S-Function (fcgen): '<S3>/FcnCallGen' */
    /* Outputs for Function Call SubSystem: '<S3>/DSM_Init' */
    /* DataStoreWrite: '<S5>/AeTRGR_y_PwrDwnSts' incorporates:
     *  Inport: '<Root>/AeTRGR_y_PwrDwnSts_Strimm_In'
     */
    (void)Rte_Read_AeTRGR_y_PwrDwnSts_Rx_AeTRGR_y_PwrDwnSts
        (&TRGR_ac_DW.AeTRGR_y_PwrDwnSts);

    /* DataStoreWrite: '<S5>/NeTRGR_y_IP_PRNDLTestFailStatus' incorporates:
     *  Inport: '<Root>/NeTRGR_y_IP_PRNDLTestFailStatus_PM_In'
     */
    (void)
        Rte_Read_NeTRGR_y_IP_PRNDLTestFailStatus_Rx_NeTRGR_y_IP_PRNDLTestFailStatus
        (&TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus);

    /* DataStoreWrite: '<S5>/BeTRGR_d_IP_PRNDLTestFlags' incorporates:
     *  Inport: '<Root>/BeTRGR_d_IP_PRNDLTestFlags_PM_In'
     */
    (void)Rte_Read_BeTRGR_d_IP_PRNDLTestFlags_Rx_BeTRGR_d_IP_PRNDLTestFlags
        (&TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags);

    /* DataStoreRead: '<S5>/DataStoreRead' */
    TRGR_ac_B.DataStoreRead = TRGR_ac_DW.BeTRGR_d_IP_PRNDLTestFlags;

    /* DataStoreRead: '<S5>/DataStoreRead1' */
    TRGR_ac_B.DataStoreRead1 = TRGR_ac_DW.NeTRGR_y_IP_PRNDLTestFailStatus;

    /* End of Outputs for SubSystem: '<S3>/DSM_Init' */
    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */
#endif

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/Sub_Out_Init'
     */
    /* SignalConversion generated from: '<S6>/VeTRGR_e_VldtdTransShiftRngSt_Out_Init' incorporates:
     *  Constant: '<S6>/Const1'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_VldtdTransShi_d = TRGR_ac_ConstB.Const1;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_VldtdTransShiftDisp_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_VldtdTransShift = 0;
    for (i = 0; i < 7; i++)
    {
        /* SignalConversion generated from: '<S6>/VaTRGR_b_AllowedModesGearsERS_Out_Init' */
        TRGR_ac_B.OutportBufferForVaTRGR_b_AllowedModesGea[i] = false;
    }

    /* SignalConversion generated from: '<S6>/VeTRGR_y_GatedParkSWFlt_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_y_GatedParkSWFlt_ = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_TransDirctnSt_Out_Init' incorporates:
     *  Constant: '<S6>/Const5'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_TransDirctnSt_O = TRGR_ac_ConstB.Const5;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_TransShiftLeverPstn_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_TransShiftLever = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ShifterNotLocked_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ShifterNotLocke = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_TXFault_Out_Init' incorporates:
     *  Constant: '<S6>/Const8'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_TXFault_Out_Ini = TRGR_ac_ConstB.Const8;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_PRNDLBlink_Out_Init' incorporates:
     *  Constant: '<S6>/Const9'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_PRNDLBlink_Out_ = TRGR_ac_ConstB.Const9;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_AutoPosCorrMdReq_Out_Init' incorporates:
     *  Constant: '<S6>/Const10'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_AutoPosCorrMdRe = TRGR_ac_ConstB.Const10;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_PRND_DebugSt_Out_Init' incorporates:
     *  Constant: '<S6>/Const11'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_PRND_DebugSt_Ou = TRGR_ac_ConstB.Const11;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_PPawlCmnd_Out_Init' incorporates:
     *  Constant: '<S6>/Const12'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_PPawlCmnd_Out_I = TRGR_ac_ConstB.Const12;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_ArbPRNDReq_Out_Init' incorporates:
     *  Constant: '<S6>/Const13'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_ArbPRNDReq_Out_ = TRGR_ac_ConstB.Const13;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_PRNDLReq_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_PRNDLReq_Out_In = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_EngSt_Enbl_Rq_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_EngSt_Enbl_Rq_O = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_GatedParkSw_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_GatedParkSw_Out = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_R_Shift_Block_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_R_Shift_Block_O = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_EPB_Hold_Req_Out_Init' incorporates:
     *  Constant: '<S6>/Const18'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_EPB_Hold_Req_Ou = TRGR_ac_ConstB.Const18;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_HCPReset_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_HCPReset_Out_In = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_Gr_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_Gr_Out_Init = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_Gr_Target_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_Gr_Target_Out_I = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_CurrentGear_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_CurrentGear_Out = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_CurrentGrForDisp_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_CurrentGrForDis = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_TargetGear_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_TargetGear_Out_ = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_g_ClusterWarnings_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_g_ClusterWarnings = 0U;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_CANC_TransShiftPstn_Out_Init' incorporates:
     *  Constant: '<S6>/Const26'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_CANC_TransShift = TRGR_ac_ConstB.Const26;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_CANC_TransShiftPstnFA_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_CANC_TransShift = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_DPT_TransShiftPstn_Out_Init' incorporates:
     *  Constant: '<S6>/Const28'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_DPT_TransShiftP = TRGR_ac_ConstB.Const28;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_DPT_TransShiftPstnFA_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_DPT_TransShiftP = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_DisableDrvAllwd_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_DisableDrvAllwd = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ParkWithSpd_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ParkWithSpd_Out = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_EPBApplyDisp_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_EPBApplyDisp_Ou = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_TxFaultSNA_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_TxFaultSNA_Out_ = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_GearIndicationSts_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_GearIndicationS = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ParkingSts_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ParkingSts_Out_ = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ParkingFailSts_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ParkingFailSts_ = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_OvrdToParkLatch_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_OvrdToParkLatch = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_OvrdToNeutral_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_OvrdToNeutral_O = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_LatchShftrLockP_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_LatchShftrLockP = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_LatchShftrLockN_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_LatchShftrLockN = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_LatchShftrRBlock_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_LatchShftrRBloc = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ShiftLockNCompleted_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ShiftLockNCompl = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_ReverseSts_Out_Init' incorporates:
     *  Constant: '<S6>/Const43'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_ReverseSts_Out_ = TRGR_ac_ConstB.Const43;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_Secured_To_Shtdwn_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_Secured_To_Shtd = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_UnexpRst_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_UnexpRst_Out_In = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_Reject_D_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_Reject_D_Out_In = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_Reject_R_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_Reject_R_Out_In = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_ESMTransRngSt_Out_Init' incorporates:
     *  Constant: '<S6>/Const48'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_ESMTransRngSt_O = TRGR_ac_ConstB.Const48;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ShifterLocked_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ShifterLocked_O = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_TransmissionFailSts_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_TransmissionFai = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_CrankEnabled_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_CrankEnabled_Ou = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_BrkApplied_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_BrkApplied_Out_ = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_BrakeFA_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_BrakeFA_Out_Ini = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_AutoPark_DAI_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_AutoPark_DAI_Ou = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ADAS_Allowed_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ADAS_Allowed_Ou = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_ReadyToPark_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_ReadyToPark_Out = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_TransDirctnStFA_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_TransDirctnStFA = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_TransShiftPstn_Out_Init' incorporates:
     *  Constant: '<S6>/Const58'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_TransShiftPstn_ = TRGR_ac_ConstB.Const58;

    /* SignalConversion generated from: '<S6>/VeTRGR_b_Force_Park_Neutral_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_b_Force_Park_Neut = false;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_HCP_Honored_Pstn_Out_Init' incorporates:
     *  Constant: '<S6>/Const60'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_HCP_Honored_Pst = TRGR_ac_ConstB.Const60;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_ShftRngSt_AEMD_Out_Init' */
    TRGR_ac_B.OutportBufferForVeTRGR_e_ShftRngSt_AEMD_ = 0;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_Braking_Mode_Sts_Out_Init' incorporates:
     *  Constant: '<S6>/Const62'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_Braking_Mode_St = TRGR_ac_ConstB.Const62;

    /* SignalConversion generated from: '<S6>/VeTRGR_e_Braking_Mode_Indication_Sts_Out_Init' incorporates:
     *  Constant: '<S6>/Const63'
     */
    TRGR_ac_B.OutportBufferForVeTRGR_e_Braking_Mode_In = TRGR_ac_ConstB.Const63;

    /* Outport: '<Root>/VeTRGR_e_SecureIdleSts' incorporates:
     *  SignalConversion generated from: '<S6>/VeTRGR_e_SecureIdleSts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_SecureIdleSts_Value((uint8)0U);

    /* Outport: '<Root>/VeTRGR_e_SecureIdle_HMI' incorporates:
     *  Constant: '<S6>/Const65'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_SecureIdle_HMI_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_SecureIdle_HMI_Value(TRGR_ac_ConstB.Const65);

    /* S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
     *  SubSystem: '<S3>/TRGO_InitCntrlr'
     */
    /* Outport: '<Root>/VeTRGR_b_ManualMode' incorporates:
     *  Constant: '<S7>/FALSEConstant6'
     *  Logic: '<S8>/AND'
     *  SignalConversion generated from: '<S3>/ManualMode_Init'
     */
    (void)Rte_Write_VeTRGR_b_ManualMode_Value(false);

    /* Outport: '<Root>/VeTRGR_e_VldtdTransRngSt' incorporates:
     *  Constant: '<S9>/Constant'
     *  DataTypeConversion: '<S10>/DataTypeConversion'
     *  SignalConversion generated from: '<S3>/TransRngSt_Init'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransRngSt_Value(CeTRGR_e_TransRangePark);

    /* End of Outputs for S-Function (fcgen): '<S3>/FcnCallGen' */

    /* Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
     *  SignalConversion generated from: '<S3>/VaTRGR_b_AllowedModesGearsERS_Out_Init'
     */
    (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value
        (TRGR_ac_B.OutportBufferForVaTRGR_b_AllowedModesGea);

    /* Outport: '<Root>/VeTRGR_b_ADAS_Allowed' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ADAS_Allowed_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ADAS_Allowed_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ADAS_Allowed_Ou);

    /* Outport: '<Root>/VeTRGR_b_AutoPark_DAI' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_AutoPark_DAI_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_AutoPark_DAI_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_AutoPark_DAI_Ou);

    /* Outport: '<Root>/VeTRGR_b_BrakeFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_BrakeFA_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_BrakeFA_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_BrakeFA_Out_Ini);

    /* Outport: '<Root>/VeTRGR_b_BrkApplied' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_BrkApplied_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_BrkApplied_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_BrkApplied_Out_);

    /* Outport: '<Root>/VeTRGR_b_CANC_TransShiftPstnFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_CANC_TransShiftPstnFA_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_CANC_TransShiftPstnFA_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_CANC_TransShift);

    /* Outport: '<Root>/VeTRGR_b_CrankEnabled' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_CrankEnabled_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_CrankEnabled_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_CrankEnabled_Ou);

    /* Outport: '<Root>/VeTRGR_b_DPT_TransShiftPstnFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_DPT_TransShiftPstnFA_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_DPT_TransShiftPstnFA_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_DPT_TransShiftP);

    /* Outport: '<Root>/VeTRGR_b_DisableDrvAllwd' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_DisableDrvAllwd_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_DisableDrvAllwd_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_DisableDrvAllwd);

    /* Outport: '<Root>/VeTRGR_b_EPBApplyDisp' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_EPBApplyDisp_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_EPBApplyDisp_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_EPBApplyDisp_Ou);

    /* Outport: '<Root>/VeTRGR_b_EngSt_Enbl_Rq' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_EngSt_Enbl_Rq_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_EngSt_Enbl_Rq_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_EngSt_Enbl_Rq_O);

    /* Outport: '<Root>/VeTRGR_b_Force_Park_Neutral' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_Force_Park_Neutral_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_Force_Park_Neutral_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_Force_Park_Neut);

    /* Outport: '<Root>/VeTRGR_b_GatedParkSw' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_GatedParkSw_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_GatedParkSw_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_GatedParkSw_Out);

    /* Outport: '<Root>/VeTRGR_b_GearIndicationSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_GearIndicationSts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_GearIndicationSts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_GearIndicationS);

    /* Outport: '<Root>/VeTRGR_b_HCPReset' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_HCPReset_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_HCPReset_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_HCPReset_Out_In);

    /* Outport: '<Root>/VeTRGR_b_LatchShftrLockN' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_LatchShftrLockN_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_LatchShftrLockN_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_LatchShftrLockN);

    /* Outport: '<Root>/VeTRGR_b_LatchShftrLockP' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_LatchShftrLockP_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_LatchShftrLockP_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_LatchShftrLockP);

    /* Outport: '<Root>/VeTRGR_b_LatchShftrRBlock' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_LatchShftrRBlock_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_LatchShftrRBlock_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_LatchShftrRBloc);

    /* Outport: '<Root>/VeTRGR_b_OvrdToNeutral' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_OvrdToNeutral_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_OvrdToNeutral_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_OvrdToNeutral_O);

    /* Outport: '<Root>/VeTRGR_b_OvrdToParkLatch' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_OvrdToParkLatch_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_OvrdToParkLatch_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_OvrdToParkLatch);

    /* Outport: '<Root>/VeTRGR_b_ParkWithSpd' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ParkWithSpd_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ParkWithSpd_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ParkWithSpd_Out);

    /* Outport: '<Root>/VeTRGR_b_ParkingFailSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ParkingFailSts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ParkingFailSts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ParkingFailSts_);

    /* Outport: '<Root>/VeTRGR_b_ParkingSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ParkingSts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ParkingSts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ParkingSts_Out_);

    /* Outport: '<Root>/VeTRGR_b_R_Shift_Block' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_R_Shift_Block_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_R_Shift_Block_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_R_Shift_Block_O);

    /* Outport: '<Root>/VeTRGR_b_ReadyToPark' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ReadyToPark_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ReadyToPark_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ReadyToPark_Out);

    /* Outport: '<Root>/VeTRGR_b_Reject_D' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_Reject_D_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_Reject_D_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_Reject_D_Out_In);

    /* Outport: '<Root>/VeTRGR_b_Reject_R' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_Reject_R_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_Reject_R_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_Reject_R_Out_In);

    /* Outport: '<Root>/VeTRGR_b_Secured_To_Shtdwn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_Secured_To_Shtdwn_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_Secured_To_Shtdwn_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_Secured_To_Shtd);

    /* Outport: '<Root>/VeTRGR_b_ShiftLockNCompleted' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ShiftLockNCompleted_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ShiftLockNCompleted_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ShiftLockNCompl);

    /* Outport: '<Root>/VeTRGR_b_ShifterLocked' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ShifterLocked_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ShifterLocked_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ShifterLocked_O);

    /* Outport: '<Root>/VeTRGR_b_ShifterNotLocked' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_ShifterNotLocked_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_ShifterNotLocked_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_ShifterNotLocke);

    /* Outport: '<Root>/VeTRGR_b_TransDirctnStFA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_TransDirctnStFA_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_TransDirctnStFA_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_TransDirctnStFA);

    /* Outport: '<Root>/VeTRGR_b_TransmissionFailSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_TransmissionFailSts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_TransmissionFailSts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_TransmissionFai);

    /* Outport: '<Root>/VeTRGR_b_TxFaultSNA' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_TxFaultSNA_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_TxFaultSNA_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_TxFaultSNA_Out_);

    /* Outport: '<Root>/VeTRGR_b_UnexpRst' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_b_UnexpRst_Out_Init'
     */
    (void)Rte_Write_VeTRGR_b_UnexpRst_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_b_UnexpRst_Out_In);

    /* SignalConversion generated from: '<S3>/VeTRGR_d_IP_PRNDLTestFlags_Init' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* Outport: '<Root>/VeTRGR_d_IP_PRNDLTestFlags' */
    (void)Rte_Write_VeTRGR_d_IP_PRNDLTestFlags_Value(TRGR_ac_B.DataStoreRead);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRGR_d_IP_PRNDLTestFlags_Init' */

    /* Outport: '<Root>/VeTRGR_e_ArbPRNDReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_ArbPRNDReq_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_ArbPRNDReq_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_ArbPRNDReq_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_ArbPRNDReq_Out_);

    /* Outport: '<Root>/VeTRGR_e_AutoPosCorrMdReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_AutoPosCorrMdReq_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_AutoPosCorrMdReq_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_AutoPosCorrMdReq_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_AutoPosCorrMdRe);

    /* Outport: '<Root>/VeTRGR_e_Braking_Mode_Indication_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_Braking_Mode_Indication_Sts_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_Braking_Mode_Indication_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_Braking_Mode_Indication_Sts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_Braking_Mode_In);

    /* Outport: '<Root>/VeTRGR_e_Braking_Mode_Sts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_Braking_Mode_Sts_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_Braking_Mode_Sts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_Braking_Mode_Sts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_Braking_Mode_St);

    /* Outport: '<Root>/VeTRGR_e_CANC_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_CANC_TransShiftPstn_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_CANC_TransShiftPstn_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_CANC_TransShiftPstn_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_CANC_TransShift);

    /* Outport: '<Root>/VeTRGR_e_CurrentGear' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_CurrentGear_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_CurrentGear_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_CurrentGear_Out);

    /* Outport: '<Root>/VeTRGR_e_CurrentGrForDisp' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_CurrentGrForDisp_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_CurrentGrForDisp_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_CurrentGrForDis);

    /* Outport: '<Root>/VeTRGR_e_DPT_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_DPT_TransShiftPstn_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_DPT_TransShiftPstn_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_DPT_TransShiftPstn_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_DPT_TransShiftP);

    /* Outport: '<Root>/VeTRGR_e_EPB_Hold_Req' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_EPB_Hold_Req_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_EPB_Hold_Req_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_EPB_Hold_Req_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_EPB_Hold_Req_Ou);

    /* Outport: '<Root>/VeTRGR_e_ESMTransRngSt' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_ESMTransRngSt_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_ESMTransRngSt_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_ESMTransRngSt_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_ESMTransRngSt_O);

    /* Outport: '<Root>/VeTRGR_e_Gr' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_Gr_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_Gr_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_Gr_Out_Init);

    /* Outport: '<Root>/VeTRGR_e_Gr_Target' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_Gr_Target_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_Gr_Target_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_Gr_Target_Out_I);

    /* Outport: '<Root>/VeTRGR_e_HCP_Honored_Pstn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_HCP_Honored_Pstn_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_HCP_Honored_Pstn_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_HCP_Honored_Pstn_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_HCP_Honored_Pst);

    /* Outport: '<Root>/VeTRGR_e_PPawlCmnd' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_PPawlCmnd_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_PPawlCmnd_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_PPawlCmnd_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_PPawlCmnd_Out_I);

    /* Outport: '<Root>/VeTRGR_e_PRNDLBlink' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_PRNDLBlink_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_PRNDLBlink_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_PRNDLBlink_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_PRNDLBlink_Out_);

    /* Outport: '<Root>/VeTRGR_e_PRNDLReq' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_PRNDLReq_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_PRNDLReq_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_PRNDLReq_Out_In);

    /* Outport: '<Root>/VeTRGR_e_PRND_DebugSt' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_PRND_DebugSt_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_PRND_DebugSt_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_PRND_DebugSt_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_PRND_DebugSt_Ou);

    /* Outport: '<Root>/VeTRGR_e_ReverseSts' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_ReverseSts_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_ReverseSts_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_ReverseSts_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_ReverseSts_Out_);

    /* Outport: '<Root>/VeTRGR_e_ShftRngSt_AEMD' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_ShftRngSt_AEMD_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_ShftRngSt_AEMD_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_ShftRngSt_AEMD_);

    /* Outport: '<Root>/VeTRGR_e_TXFault' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_TXFault_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_TXFault_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_TXFault_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_TXFault_Out_Ini);

    /* Outport: '<Root>/VeTRGR_e_TargetGear' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_TargetGear_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_TargetGear_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_TargetGear_Out_);

    /* Outport: '<Root>/VeTRGR_e_TransDirctnSt' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_TransDirctnSt_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_TransDirctnSt_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_TransDirctnSt_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_TransDirctnSt_O);

    /* Outport: '<Root>/VeTRGR_e_TransShiftLeverPstn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_TransShiftLeverPstn_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_TransShiftLeverPstn_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_TransShiftLever);

    /* Outport: '<Root>/VeTRGR_e_TransShiftPstn' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_e_TransShiftPstn_Out_Init'
     *  SignalConversion generated from: '<S6>/VeTRGR_e_TransShiftPstn_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_TransShiftPstn_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_TransShiftPstn_);

    /* SignalConversion generated from: '<S3>/VeTRGR_e_VldtdTransShiftDisp_Out_Init' */
    (void)Rte_Write_VeTRGR_e_VldtdTransShiftDisp_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_VldtdTransShift);

    /* SignalConversion generated from: '<S3>/VeTRGR_e_VldtdTransShiftRngSt_Out_Init' incorporates:
     *  SignalConversion generated from: '<S6>/VeTRGR_e_VldtdTransShiftRngSt_Out_Init'
     */
    (void)Rte_Write_VeTRGR_e_VldtdTransShiftRngSt_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_e_VldtdTransShi_d);

    /* Outport: '<Root>/VeTRGR_g_ClusterWarnings' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_g_ClusterWarnings_Out_Init'
     */
    (void)Rte_Write_VeTRGR_g_ClusterWarnings_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_g_ClusterWarnings);

    /* Outport: '<Root>/VeTRGR_y_GatedParkSWFlt' incorporates:
     *  SignalConversion generated from: '<S3>/VeTRGR_y_GatedParkSWFlt_Out_Init'
     */
    (void)Rte_Write_VeTRGR_y_GatedParkSWFlt_Value
        (TRGR_ac_B.OutportBufferForVeTRGR_y_GatedParkSWFlt_);

    /* SignalConversion generated from: '<S3>/VeTRGR_y_IP_PRNDLTestFailStatus' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    /* Outport: '<Root>/VeTRGR_y_PRNDLTestFailStatus' */
    (void)Rte_Write_VeTRGR_y_PRNDLTestFailStatus_Value(TRGR_ac_B.DataStoreRead1);

#endif

    /* End of SignalConversion generated from: '<S3>/VeTRGR_y_IP_PRNDLTestFailStatus' */
    /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */
}

/* Model initialize function */
FUNC(void, TRGR_CODE) TRGR_ac_Init(void)
{
    /* Registration code */

    /* block I/O */
    {
        TRGR_ac_B.OutportBufferForVeTRGR_e_PRND_DebugSt_Ou = CeTRGR_e_PRNDDbgSt1;

#if Rte_SysCon_Variant_TRGR_FUNC_Enab

        TRGR_ac_B.DataTypeConversion_b = CeTRGR_e_PRNDDbgSt1;

#endif

    }

    /* custom signals */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

    VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt1;

#endif

    {
        sint32 i;
        boolean tmp[7];

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' incorporates:
         *  SubSystem: '<Root>/TRGR_FUNC_PwrOn'
         */
        /* SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' incorporates:
         *  SubSystem: '<S3>/Sub_Out_Init'
         */
        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_VldtdTransShiftRngSt_Out_Init' incorporates:
         *  Constant: '<S6>/Const1'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_VldtdTransShi_d =
            TRGR_ac_ConstB.Const1;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_TransDirctnSt_Out_Init' incorporates:
         *  Constant: '<S6>/Const5'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_TransDirctnSt_O =
            TRGR_ac_ConstB.Const5;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_TXFault_Out_Init' incorporates:
         *  Constant: '<S6>/Const8'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_TXFault_Out_Ini =
            TRGR_ac_ConstB.Const8;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_PRNDLBlink_Out_Init' incorporates:
         *  Constant: '<S6>/Const9'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_PRNDLBlink_Out_ =
            TRGR_ac_ConstB.Const9;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_AutoPosCorrMdReq_Out_Init' incorporates:
         *  Constant: '<S6>/Const10'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_AutoPosCorrMdRe =
            TRGR_ac_ConstB.Const10;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_PRND_DebugSt_Out_Init' incorporates:
         *  Constant: '<S6>/Const11'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_PRND_DebugSt_Ou =
            TRGR_ac_ConstB.Const11;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_PPawlCmnd_Out_Init' incorporates:
         *  Constant: '<S6>/Const12'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_PPawlCmnd_Out_I =
            TRGR_ac_ConstB.Const12;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_ArbPRNDReq_Out_Init' incorporates:
         *  Constant: '<S6>/Const13'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_ArbPRNDReq_Out_ =
            TRGR_ac_ConstB.Const13;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_EPB_Hold_Req_Out_Init' incorporates:
         *  Constant: '<S6>/Const18'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_EPB_Hold_Req_Ou =
            TRGR_ac_ConstB.Const18;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_CANC_TransShiftPstn_Out_Init' incorporates:
         *  Constant: '<S6>/Const26'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_CANC_TransShift =
            TRGR_ac_ConstB.Const26;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_DPT_TransShiftPstn_Out_Init' incorporates:
         *  Constant: '<S6>/Const28'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_DPT_TransShiftP =
            TRGR_ac_ConstB.Const28;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_ReverseSts_Out_Init' incorporates:
         *  Constant: '<S6>/Const43'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_ReverseSts_Out_ =
            TRGR_ac_ConstB.Const43;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_ESMTransRngSt_Out_Init' incorporates:
         *  Constant: '<S6>/Const48'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_ESMTransRngSt_O =
            TRGR_ac_ConstB.Const48;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_TransShiftPstn_Out_Init' incorporates:
         *  Constant: '<S6>/Const58'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_TransShiftPstn_ =
            TRGR_ac_ConstB.Const58;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_HCP_Honored_Pstn_Out_Init' incorporates:
         *  Constant: '<S6>/Const60'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_HCP_Honored_Pst =
            TRGR_ac_ConstB.Const60;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_Braking_Mode_Sts_Out_Init' incorporates:
         *  Constant: '<S6>/Const62'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_Braking_Mode_St =
            TRGR_ac_ConstB.Const62;

        /* SystemInitialize for SignalConversion generated from: '<S6>/VeTRGR_e_Braking_Mode_Indication_Sts_Out_Init' incorporates:
         *  Constant: '<S6>/Const63'
         */
        TRGR_ac_B.OutportBufferForVeTRGR_e_Braking_Mode_In =
            TRGR_ac_ConstB.Const63;

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_SecureIdle_HMI' incorporates:
         *  Constant: '<S6>/Const65'
         *  SignalConversion generated from: '<S6>/VeTRGR_e_SecureIdle_HMI_Out_Init'
         */
        (void)Rte_Write_VeTRGR_e_SecureIdle_HMI_Value(TRGR_ac_ConstB.Const65);

        /* End of SystemInitialize for S-Function (fcgen): '<S3>/FcnCallGen' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/PwrOn' */

        /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' incorporates:
         *  SubSystem: '<Root>/TRGR_MedTED'
         */
        /* SystemInitialize for Atomic SubSystem: '<S4>/TRGR_Merged' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

        /* SystemInitialize for Atomic SubSystem: '<S11>/TRGR_FUNC' */
        /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
         *  SubSystem: '<S12>/TRGC_VldtTransRngSt'
         */
        /* SystemInitialize for Merge: '<S26>/Merge2' */
        for (i = 0; i < 7; i++)
        {
            tmp[i] = false;
        }

        /* SystemInitialize for Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
         *  Merge: '<S26>/Merge2'
         */
        (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value(tmp);

        /* SystemInitialize for Chart: '<S689>/ValidatedPRND_StateFlow' */
        VeTRGR_e_PRND_St = CeTRGR_e_PRNDDbgSt1;

        /* SystemInitialize for Enabled SubSystem: '<S32>/TRGC_Speed_Control_Enabled' */
        /* InitializeConditions for UnitDelay: '<S801>/Unit Delay' */
        TRGR_ac_DW.UnitDelay_DSTATE_kx = 1;

        /* SystemInitialize for Merge: '<S801>/Merge' */
        TRGR_ac_B.Merge = 1;

        /* End of SystemInitialize for SubSystem: '<S32>/TRGC_Speed_Control_Enabled' */

        /* SystemInitialize for DataTypeConversion: '<S781>/DataTypeConversion' incorporates:
         *  Outport: '<S14>/PRND_DebugSt'
         */
        TRGR_ac_B.DataTypeConversion_b = CeTRGR_e_PRNDDbgSt1;

        /* SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' incorporates:
         *  SubSystem: '<S12>/TRGR_PRNDL_IPCntrls'
         */
        /* SystemInitialize for IfAction SubSystem: '<S1110>/InPlantMode' */
        /* SystemInitialize for Chart: '<S1134>/InPlantTest_Stateflow' */
        TRGR_ac_B.D_TestNotCmplt_Write = true;
        TRGR_ac_B.D_TestFail_Write = true;
        TRGR_ac_B.N_TestNotCmplt_Write = true;
        TRGR_ac_B.N_TestFail_Write = true;
        TRGR_ac_B.P_TestNotCmplt_Write = true;
        TRGR_ac_B.P_TestFail_Write = true;
        TRGR_ac_B.R_TestNotCmplt_Write = true;
        TRGR_ac_B.R_TestFail_Write = true;
        TRGR_ac_B.L_TestFail_Write = true;
        TRGR_ac_B.L_TestNotCmplt_Write = true;

        /* End of SystemInitialize for SubSystem: '<S1110>/InPlantMode' */
        /* End of SystemInitialize for S-Function (fcgen): '<S12>/FcnCallGen' */
        /* End of SystemInitialize for SubSystem: '<S11>/TRGR_FUNC' */
#else

        /* SystemInitialize for Atomic SubSystem: '<S11>/TRGR_MSG' */
        /* SystemInitialize for S-Function (fcgen): '<S13>/FcnCallGen' incorporates:
         *  SubSystem: '<S13>/Proc_IntrnlOutputs'
         */
        /* SystemInitialize for SignalConversion: '<S1222>/SignalConversion' */
        tmp[0] = TRGR_ac_ConstB.ConstantValue5;
        tmp[1] = TRGR_ac_ConstB.ConstantValue3;
        tmp[2] = TRGR_ac_ConstB.ConstantValue4;
        tmp[3] = TRGR_ac_ConstB.ConstantValue6;
        tmp[4] = TRGR_ac_ConstB.ConstantValue7;
        tmp[5] = TRGR_ac_ConstB.ConstantValue8;
        tmp[6] = TRGR_ac_ConstB.ConstantValue9;

        /* SystemInitialize for Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
         *  SignalConversion: '<S1222>/SignalConversion'
         */
        (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value(tmp);

        /* End of SystemInitialize for S-Function (fcgen): '<S13>/FcnCallGen' */
        /* End of SystemInitialize for SubSystem: '<S11>/TRGR_MSG' */
#endif

        /* End of SystemInitialize for SubSystem: '<S4>/TRGR_Merged' */
        /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/MedTED' */

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_1' */
        (void)Rte_Write_VeTRGR_e_VldtdTransShiftRngSt_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_VldtdTransRngSt' incorporates:
         *  Merge: '<Root>/Merge_1'
         */
        (void)Rte_Write_VeTRGR_e_VldtdTransRngSt_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Merge: '<Root>/Merge_Outport_4' */
        for (i = 0; i < 7; i++)
        {
            tmp[i] = false;
        }

        /* SystemInitialize for Outport: '<Root>/VaTRGR_b_AllowedModesGearsERS' incorporates:
         *  Merge: '<Root>/Merge_Outport_4'
         */
        (void)Rte_Write_VaTRGR_b_AllowedModesGearsERS_Value(tmp);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_TransDirctnSt' incorporates:
         *  Merge: '<Root>/Merge_Outport_6'
         */
        (void)Rte_Write_VeTRGR_e_TransDirctnSt_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_TXFault' incorporates:
         *  Merge: '<Root>/Merge_Outport_9'
         */
        (void)Rte_Write_VeTRGR_e_TXFault_Value(CeTRGR_e_TXFlt_OK);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_PRNDLBlink' incorporates:
         *  Merge: '<Root>/Merge_Outport_10'
         */
        (void)Rte_Write_VeTRGR_e_PRNDLBlink_Value(CeTRGR_e_PRNDBlinkNone);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_AutoPosCorrMdReq' incorporates:
         *  Merge: '<Root>/Merge_Outport_11'
         */
        (void)Rte_Write_VeTRGR_e_AutoPosCorrMdReq_Value
            (CeTRGR_e_AutoPosCorrMd_Off);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_PRND_DebugSt' incorporates:
         *  Merge: '<Root>/Merge_Outport_12'
         */
        (void)Rte_Write_VeTRGR_e_PRND_DebugSt_Value(CeTRGR_e_PRNDDbgSt1);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_PPawlCmnd' incorporates:
         *  Merge: '<Root>/Merge_Outport_13'
         */
        (void)Rte_Write_VeTRGR_e_PPawlCmnd_Value(CeTRGR_e_PPawlIdle);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_ArbPRNDReq' incorporates:
         *  Merge: '<Root>/Merge_Outport_14'
         */
        (void)Rte_Write_VeTRGR_e_ArbPRNDReq_Value(CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_EPB_Hold_Req' incorporates:
         *  Merge: '<Root>/Merge_Outport_19'
         */
        (void)Rte_Write_VeTRGR_e_EPB_Hold_Req_Value(CeTRGR_e_EPBReq_NA);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_CANC_TransShiftPstn' incorporates:
         *  Merge: '<Root>/Merge_Outport_27'
         */
        (void)Rte_Write_VeTRGR_e_CANC_TransShiftPstn_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_DPT_TransShiftPstn' incorporates:
         *  Merge: '<Root>/Merge_Outport_29'
         */
        (void)Rte_Write_VeTRGR_e_DPT_TransShiftPstn_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_ReverseSts' incorporates:
         *  Merge: '<Root>/Merge_Outport_45'
         */
        (void)Rte_Write_VeTRGR_e_ReverseSts_Value
            (CeTRGR_e_ReverseSts_Not_Inserted);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_ESMTransRngSt' incorporates:
         *  Merge: '<Root>/Merge_Outport_50'
         */
        (void)Rte_Write_VeTRGR_e_ESMTransRngSt_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_TransShiftPstn' incorporates:
         *  Merge: '<Root>/Merge_Outport_63'
         */
        (void)Rte_Write_VeTRGR_e_TransShiftPstn_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_HCP_Honored_Pstn' incorporates:
         *  Merge: '<Root>/Merge_Outport_65'
         */
        (void)Rte_Write_VeTRGR_e_HCP_Honored_Pstn_Value
            (CeTRGR_e_NoSelectionAvailable);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_Braking_Mode_Sts' incorporates:
         *  Merge: '<Root>/Merge_Outport_57'
         */
        (void)Rte_Write_VeTRGR_e_Braking_Mode_Sts_Value
            (CeTRGR_e_BrakingMode_Not_Active);

        /* SystemInitialize for Outport: '<Root>/VeTRGR_e_Braking_Mode_Indication_Sts' incorporates:
         *  Merge: '<Root>/Merge_Outport_59'
         */
        (void)Rte_Write_VeTRGR_e_Braking_Mode_Indication_Sts_Value
            (CeTRGR_e_IndSts_OFF);

        /* SystemInitialize for Outport: '<Root>/AeTRGR_y_PwrDwnSts_Strimm_out' */
#if Rte_SysCon_Variant_TRGR_FUNC_Enab

        (void)Rte_Write_AeTRGR_y_PwrDwnSts_AeTRGR_y_PwrDwnSts
            (TRGR_ac_B.PwrDwnSts_EEPROM.VeTRGR_e_PwrDwnStat);

#endif

        /* End of SystemInitialize for Outport: '<Root>/AeTRGR_y_PwrDwnSts_Strimm_out' */
    }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
